

void __fastcall TellCommand::setup(TellCommand *this, CommandRegistry *a2)
{
  TellCommand *v2; // r8@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  __int64 v6; // r2@4
  void *v7; // r0@4
  void *v8; // r0@5
  char v9; // r0@6
  char v10; // r0@9
  int v11; // r0@12
  void *v12; // r0@12
  void *v13; // r0@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  int v20; // r2@27
  signed int v21; // r1@29
  int v22; // r2@31
  signed int v23; // r1@33
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  unsigned int *v26; // r2@39
  signed int v27; // r1@41
  char v28; // [sp+18h] [bp-A0h]@12
  int v29; // [sp+24h] [bp-94h]@12
  char v30; // [sp+40h] [bp-78h]@9
  int v31; // [sp+4Ch] [bp-6Ch]@13
  __int64 v32; // [sp+68h] [bp-50h]@6
  int v33; // [sp+74h] [bp-44h]@4
  int v34; // [sp+7Ch] [bp-3Ch]@4
  int v35; // [sp+84h] [bp-34h]@2
  int v36; // [sp+8Ch] [bp-2Ch]@2
  int v37; // [sp+94h] [bp-24h]@1
  __int16 v38; // [sp+98h] [bp-20h]@12
  __int16 v39; // [sp+9Ch] [bp-1Ch]@9

  v2 = this;
  sub_21E94B4((void **)&v37, "tell");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v37, "commands.tell.description", 0, 16, 0);
  v3 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v37 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E94B4((void **)&v36, "tell");
  sub_21E94B4((void **)&v35, "w");
  j_CommandRegistry::registerAlias((int)v2, (const void **)&v36, &v35);
  v4 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v35 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v36 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v34, "tell");
  sub_21E94B4((void **)&v33, "msg");
  j_CommandRegistry::registerAlias((int)v2, (const void **)&v34, &v33);
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v20 = v33 - 4;
      {
        v21 = __ldrex((unsigned int *)v6);
        HIDWORD(v6) = v21 - 1;
      }
      while ( __strex(v21 - 1, (unsigned int *)v6) );
      v21 = *(_DWORD *)v6;
      HIDWORD(v6) = *(_DWORD *)v6 - 1;
      *(_DWORD *)v6 = HIDWORD(v6);
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v22 = v34 - 4;
        v23 = __ldrex((unsigned int *)v6);
        HIDWORD(v6) = v23 - 1;
      while ( __strex(v23 - 1, (unsigned int *)v6) );
      v23 = *(_DWORD *)v6;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  LODWORD(v6) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v32, 1, v6);
  v9 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  __dmb();
  if ( !(v9 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v39 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v30,
    &v39,
    (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
    "target",
    0,
    20,
    -1);
  v10 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id;
  if ( !(v10 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id) )
    type_id<CommandRegistry,CommandMessage>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id);
  v38 = type_id<CommandRegistry,CommandMessage>(void)::id;
  v11 = j_CommandParameterData::CommandParameterData(
          (int)&v28,
          &v38,
          (unsigned int)CommandRegistry::parse<CommandMessage>,
          "message",
          0,
          116,
          -1);
  j_CommandRegistry::registerOverload<TellCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "tell",
    v32,
    v11);
  v12 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v29 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v31 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall TellCommand::~TellCommand(TellCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A228;
  v2 = (TellCommand *)((char *)this + 20);
  j_CommandMessage::~CommandMessage((TellCommand *)((char *)this + 116));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall TellCommand::~TellCommand(TellCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A228;
  v2 = (TellCommand *)((char *)this + 20);
  j_CommandMessage::~CommandMessage((TellCommand *)((char *)this + 116));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


MessagingCommand *__fastcall TellCommand::TellCommand(MessagingCommand *a1)
{
  MessagingCommand *v1; // r4@1

  v1 = a1;
  j_MessagingCommand::MessagingCommand(a1, 0, 1);
  *(_DWORD *)v1 = &off_271A228;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  j_CommandMessage::CommandMessage((MessagingCommand *)((char *)v1 + 116));
  return v1;
}


void __fastcall TellCommand::setup(TellCommand *this, CommandRegistry *a2)
{
  TellCommand::setup(this, a2);
}


void __fastcall TellCommand::execute(TellCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TellCommand::execute(this, a2, a3);
}


void __fastcall TellCommand::~TellCommand(TellCommand *this)
{
  TellCommand::~TellCommand(this);
}


void __fastcall TellCommand::execute(TellCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  Json::Value *v3; // r4@1
  const CommandOrigin *v4; // r5@1
  TellCommand *v5; // r6@1
  void *v6; // r0@3
  int v7; // r0@5
  int v8; // r6@6
  Level *v9; // r0@6
  int *v10; // r0@6
  int v11; // r8@8
  int *v12; // r0@8
  Level *v13; // r0@8
  int v14; // r0@8
  void *v15; // r0@8
  void *v16; // r0@9
  unsigned int *v17; // r2@11
  signed int v18; // r1@13
  unsigned int *v19; // r2@15
  signed int v20; // r1@17
  int v21; // r5@28
  unsigned int *v22; // r1@29
  unsigned int v23; // r0@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  unsigned int *v26; // r6@39
  unsigned int v27; // r0@41
  int v28; // r5@50
  unsigned int *v29; // r1@51
  unsigned int v30; // r0@53
  unsigned int *v31; // r6@57
  unsigned int v32; // r0@59
  char *v33; // r4@64
  int v34; // r6@64
  unsigned int *v35; // r2@66
  signed int v36; // r1@68
  int *v37; // r0@74
  void *v38; // r0@79
  void *v39; // r0@80
  void *v40; // r0@81
  char *v41; // r0@82
  void *v42; // r0@83
  void *v43; // r0@84
  int v44; // r4@85
  unsigned int *v45; // r1@86
  unsigned int v46; // r0@88
  unsigned int *v47; // r5@92
  unsigned int v48; // r0@94
  unsigned int *v49; // r2@100
  signed int v50; // r1@102
  unsigned int *v51; // r2@104
  signed int v52; // r1@106
  unsigned int *v53; // r2@108
  signed int v54; // r1@110
  unsigned int *v55; // r2@112
  signed int v56; // r1@114
  unsigned int *v57; // r2@116
  signed int v58; // r1@118
  unsigned int *v59; // r2@120
  signed int v60; // r1@122
  int v61; // [sp+8h] [bp-88h]@64
  int v62; // [sp+10h] [bp-80h]@64
  char *v63; // [sp+18h] [bp-78h]@64
  char *v64; // [sp+1Ch] [bp-74h]@64
  char *v65; // [sp+20h] [bp-70h]@64
  int v66; // [sp+28h] [bp-68h]@64
  int v67; // [sp+30h] [bp-60h]@8
  int v68; // [sp+34h] [bp-5Ch]@8
  char v69; // [sp+38h] [bp-58h]@7
  int v70; // [sp+3Ch] [bp-54h]@28
  char v71; // [sp+44h] [bp-4Ch]@7
  int v72; // [sp+48h] [bp-48h]@50
  char *v73; // [sp+50h] [bp-40h]@4
  int v74; // [sp+54h] [bp-3Ch]@3
  int v75; // [sp+58h] [bp-38h]@3
  int v76; // [sp+5Ch] [bp-34h]@3
  int *v77; // [sp+60h] [bp-30h]@2
  int v78; // [sp+64h] [bp-2Ch]@85

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( j_MessagingCommand::checkChatPermissions(this, a2, a3) == 1 )
  {
    j_CommandSelector<Player>::results((int)&v77, (TellCommand *)((char *)v5 + 20), v4);
    if ( j_Command::checkHasTargets<Player>((__int64 **)&v77, v3) )
    {
      j_CommandMessage::getMessage((CommandMessage *)&v76, (TellCommand *)((char *)v5 + 116), v4);
      (*(void (__fastcall **)(int *, const CommandOrigin *))(*(_DWORD *)v4 + 12))(&v75, v4);
      sub_21E8AF4(&v74, &v76);
      j_CommandOutput::set<std::string>((int)v3, "message", &v74);
      v6 = (void *)(v74 - 12);
      if ( (int *)(v74 - 12) != &dword_28898C0 )
      {
        v24 = (unsigned int *)(v74 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
      v73 = (char *)&unk_28898CC;
      if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 32))(v4) )
        v7 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 32))(v4);
        if ( (*(int (**)(void))(*(_DWORD *)v7 + 488))() == 319 )
          v8 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 32))(v4);
          v9 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
          v10 = (int *)j_Level::getPlayerXUID(v9, (const mce::UUID *)(v8 + 4560));
          EntityInteraction::setInteractText((int *)&v73, v10);
      j_CommandSelectorResults<Player>::begin((int)&v71, &v77);
      j_CommandSelectorResults<Player>::end((int)&v69, (int)&v77);
      while ( j_SelectorIterator<Player>::operator!=((int)&v71, (int)&v69) )
        v11 = j_SelectorIterator<Player>::operator*((int)&v71);
        (*(void (**)(void))(*(_DWORD *)v11 + 1380))();
        v12 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 188))(v11);
        sub_21E8AF4(&v68, v12);
        v13 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
        v14 = j_Level::getEventing(v13);
        j_MinecraftEventing::fireEventPlayerMessageTell(
          v14,
          (const char **)&v75,
          (const char **)&v68,
          (const char **)&v76);
        sub_21E94B4((void **)&v67, "recipient");
        j_CommandOutput::addToResultList(v3, (const char **)&v67, (const char **)&v68);
        v15 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v67 - 4);
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
            j_j_j_j__ZdlPv_9(v15);
        v16 = (void *)(v68 - 12);
        if ( (int *)(v68 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v68 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        j_SelectorIterator<Player>::operator++((int)&v71);
      v21 = v70;
      if ( v70 )
        v22 = (unsigned int *)(v70 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          v26 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
      v28 = v72;
      if ( v72 )
        v29 = (unsigned int *)(v72 + 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          v31 = (unsigned int *)(v28 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
      sub_21E94B4((void **)&v66, "commands.message.display.outgoing");
      j_CommandOutputParameter::CommandOutputParameter((int)&v61, &v77);
      j_CommandOutputParameter::CommandOutputParameter(&v62, &v76);
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v63 = (char *)j_operator new(0x10u);
      v65 = v63 + 16;
      v64 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v61,
                      (int)&v63,
                      (int)v63);
      j_CommandOutput::success((int)v3, &v66, (unsigned __int64 *)&v63);
      v34 = (int)v64;
      v33 = v63;
      if ( v63 != v64 )
        do
          v37 = (int *)(*(_DWORD *)v33 - 12);
          if ( v37 != &dword_28898C0 )
            v35 = (unsigned int *)(*(_DWORD *)v33 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
            }
            else
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
          v33 += 8;
        while ( v33 != (char *)v34 );
        v33 = v63;
      if ( v33 )
        j_operator delete(v33);
      v38 = (void *)(v62 - 12);
      if ( (int *)(v62 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v62 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v39 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v61 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v40 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v66 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      v41 = v73 - 12;
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v73 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      v42 = (void *)(v75 - 12);
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v75 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v43 = (void *)(v76 - 12);
      if ( (int *)(v76 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v76 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
    }
    v44 = v78;
    if ( v78 )
      v45 = (unsigned int *)(v78 + 4);
      if ( &pthread_create )
        __dmb();
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      else
        v46 = (*v45)--;
      if ( v46 == 1 )
        v47 = (unsigned int *)(v44 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  }
}
