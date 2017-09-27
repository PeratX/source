

void __fastcall SayCommand::~SayCommand(SayCommand *this)
{
  SayCommand::~SayCommand(this);
}


int __fastcall SayCommand::~SayCommand(SayCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A174;
  j_CommandMessage::~CommandMessage((SayCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall SayCommand::execute(SayCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r9@1
  const CommandOrigin *v4; // r11@1
  SayCommand *v5; // r6@1
  __int64 v6; // r6@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int *v9; // r0@12
  void *v10; // r0@17
  void *v11; // r0@18
  void *v12; // r0@19
  int v13; // r0@21
  int v14; // r6@22
  Level *v15; // r0@22
  int *v16; // r0@22
  Level *v17; // r0@23
  int v18; // r0@23
  Level *v19; // r0@23
  int v20; // r0@23
  void *v21; // r0@23
  char *v22; // r0@24
  void *v23; // r0@25
  void *v24; // r0@26
  void *v25; // r0@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  unsigned int *v30; // r2@37
  signed int v31; // r1@39
  unsigned int *v32; // r2@41
  signed int v33; // r1@43
  unsigned int *v34; // r2@45
  signed int v35; // r1@47
  unsigned int *v36; // r2@49
  signed int v37; // r1@51
  unsigned int *v38; // r2@53
  signed int v39; // r1@55
  unsigned int *v40; // r2@57
  signed int v41; // r1@59
  int v42; // [sp+10h] [bp-90h]@23
  char v43; // [sp+14h] [bp-8Ch]@23
  char *v44; // [sp+40h] [bp-60h]@20
  int v45; // [sp+44h] [bp-5Ch]@2
  int v46; // [sp+48h] [bp-58h]@2
  char *v47; // [sp+4Ch] [bp-54h]@2
  char *v48; // [sp+50h] [bp-50h]@2
  char *v49; // [sp+54h] [bp-4Ch]@2
  int v50; // [sp+5Ch] [bp-44h]@2
  int v51; // [sp+60h] [bp-40h]@2
  int v52; // [sp+64h] [bp-3Ch]@2
  int v53; // [sp+68h] [bp-38h]@2
  unsigned __int64 v54; // [sp+6Ch] [bp-34h]@23
  int v55; // [sp+74h] [bp-2Ch]@23

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( j_MessagingCommand::checkChatPermissions(this, a2, a3) == 1 )
  {
    j_CommandMessage::getMessage((CommandMessage *)&v53, (SayCommand *)((char *)v5 + 20), v4);
    (*(void (__fastcall **)(int *, const CommandOrigin *))(*(_DWORD *)v4 + 12))(&v52, v4);
    sub_21E94B4((void **)&v50, "chat.type.announcement");
    sub_21E8AF4(&v45, &v52);
    sub_21E8AF4(&v46, &v53);
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v47 = (char *)j_operator new(8u);
    v49 = v47 + 8;
    v48 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v45,
                    (int)&v47,
                    (int)v47);
    j_I18n::get(&v51, &v50, (unsigned __int64 *)&v47);
    v6 = *(_QWORD *)&v47;
    if ( v47 != v48 )
    {
      do
      {
        v9 = (int *)(*(_DWORD *)v6 - 12);
        if ( v9 != &dword_28898C0 )
        {
          v7 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
        LODWORD(v6) = v6 + 4;
      }
      while ( (_DWORD)v6 != HIDWORD(v6) );
      LODWORD(v6) = v47;
    }
    if ( (_DWORD)v6 )
      j_operator delete((void *)v6);
    v10 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v46 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v45 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v50 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v44 = (char *)&unk_28898CC;
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 32))(v4) )
      v13 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 32))(v4);
      if ( (*(int (**)(void))(*(_DWORD *)v13 + 488))() == 319 )
        v14 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 32))(v4);
        v15 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
        v16 = (int *)j_Level::getPlayerXUID(v15, (const mce::UUID *)(v14 + 4560));
        EntityInteraction::setInteractText((int *)&v44, v16);
    v54 = 0LL;
    v55 = 0;
    j_TextPacket::TextPacket((int)&v43, 8, &v52, &v51, &v54, 1, (int *)&v44);
    v17 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
    v18 = j_Level::getPacketSender(v17);
    (*(void (**)(void))(*(_DWORD *)v18 + 8))();
    v19 = (Level *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 24))(v4);
    v20 = j_Level::getEventing(v19);
    j_MinecraftEventing::fireEventPlayerMessageSay(v20, (const char **)&v52, (const char **)&v51);
    sub_21E8AF4(&v42, &v53);
    j_CommandOutput::set<std::string>((int)v3, "message", &v42);
    v21 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v42 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    j_CommandOutput::success(v3);
    j_TextPacket::~TextPacket((TextPacket *)&v43);
    v22 = v44 - 12;
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v44 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v51 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v52 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v53 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
  }
}


void __fastcall SayCommand::setup(SayCommand *this, CommandRegistry *a2)
{
  SayCommand::setup(this, a2);
}


MessagingCommand *__fastcall SayCommand::SayCommand(MessagingCommand *a1)
{
  MessagingCommand *v1; // r4@1

  v1 = a1;
  j_MessagingCommand::MessagingCommand(a1, 1, 0);
  *(_DWORD *)v1 = &off_271A174;
  j_CommandMessage::CommandMessage((MessagingCommand *)((char *)v1 + 20));
  return v1;
}


void __fastcall SayCommand::execute(SayCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SayCommand::execute(this, a2, a3);
}


void __fastcall SayCommand::~SayCommand(SayCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A174;
  j_CommandMessage::~CommandMessage((SayCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall SayCommand::setup(SayCommand *this, CommandRegistry *a2)
{
  SayCommand *v2; // r5@1
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
  sub_21E94B4((void **)&v15, "say");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.say.description", 1, 16, 0);
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
  j_CommandRegistry::registerOverload<SayCommand,CommandParameterData>((int)v2, "say", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}
