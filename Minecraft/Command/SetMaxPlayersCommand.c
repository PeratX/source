

void __fastcall SetMaxPlayersCommand::execute(SetMaxPlayersCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SetMaxPlayersCommand *v3; // r5@1
  CommandOutput *v4; // r9@1
  ServerNetworkHandler *v5; // r0@2
  signed int v6; // r6@2
  int v7; // r5@2
  char *v8; // r5@6
  int v9; // r7@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int *v12; // r0@16
  void *v13; // r0@21
  void *v14; // r0@22
  void *v15; // r0@23
  int v16; // r1@24
  char *v17; // r4@25
  int v18; // r6@25
  unsigned int *v19; // r2@27
  signed int v20; // r1@29
  int *v21; // r0@35
  void *v22; // r0@40
  void *v23; // r0@42
  unsigned int *v24; // r2@44
  signed int v25; // r1@46
  unsigned int *v26; // r2@48
  signed int v27; // r1@50
  unsigned int *v28; // r2@52
  signed int v29; // r1@54
  unsigned int *v30; // r2@56
  signed int v31; // r1@58
  unsigned int *v32; // r2@60
  signed int v33; // r1@62
  int v34; // [sp+0h] [bp-60h]@25
  char *v35; // [sp+8h] [bp-58h]@25
  char *v36; // [sp+Ch] [bp-54h]@25
  char *v37; // [sp+10h] [bp-50h]@25
  int v38; // [sp+14h] [bp-4Ch]@23
  int v39; // [sp+18h] [bp-48h]@6
  char *v40; // [sp+20h] [bp-40h]@6
  char *v41; // [sp+24h] [bp-3Ch]@6
  char *v42; // [sp+28h] [bp-38h]@6
  int v43; // [sp+30h] [bp-30h]@6
  int v44; // [sp+38h] [bp-28h]@2

  v3 = this;
  v4 = a3;
  if ( j_Minecraft::getServerNetworkHandler(ServerCommand::mGame) )
  {
    v5 = (ServerNetworkHandler *)j_Minecraft::getServerNetworkHandler(ServerCommand::mGame);
    v6 = j_ServerNetworkHandler::setMaxNumPlayers(v5, *((_DWORD *)v3 + 5));
    v7 = *(_DWORD *)(j_Minecraft::getServerNetworkHandler(ServerCommand::mGame) + 316);
    j_CommandOutput::set<int>((int)v4, "count", v7);
    sub_21E94B4((void **)&v44, (const char *)&unk_257BC67);
    if ( v6 < 1 )
    {
      if ( v6 <= -1 )
        sub_21E8190((void **)&v44, "commands.setmaxplayers.success.lowerbound", (_BYTE *)0x29);
    }
    else
      sub_21E8190((void **)&v44, "commands.setmaxplayers.success.upperbound", (_BYTE *)0x29);
    sub_21E94B4((void **)&v43, "commands.setmaxplayers.success");
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v39, v7);
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v40 = (char *)j_operator new(8u);
    v42 = v40 + 8;
    v41 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v39,
                    (int)&v40,
                    (int)v40);
    j_CommandOutput::success((int)v4, &v43, (unsigned __int64 *)&v40);
    v9 = (int)v41;
    v8 = v40;
    if ( v40 != v41 )
      do
      {
        v12 = (int *)(*(_DWORD *)v8 - 12);
        if ( v12 != &dword_28898C0 )
        {
          v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
            j_j_j_j__ZdlPv_9(v12);
        }
        v8 += 8;
      }
      while ( v8 != (char *)v9 );
      v8 = v40;
    if ( v8 )
      j_operator delete(v8);
    v13 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v43 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E8AF4(&v38, &v44);
    j_CommandOutput::set<std::string>((int)v4, "boundNote", &v38);
    v15 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v38 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = v44;
    if ( *(_DWORD *)(v44 - 12) )
      j_CommandOutputParameter::CommandOutputParameter(&v34);
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v35 = (char *)j_operator new(8u);
      v37 = v35 + 8;
      v36 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v34,
                      (int)&v35,
                      (int)v35);
      j_CommandOutput::success((int)v4, &v44, (unsigned __int64 *)&v35);
      v18 = (int)v36;
      v17 = v35;
      if ( v35 != v36 )
          v21 = (int *)(*(_DWORD *)v17 - 12);
          if ( v21 != &dword_28898C0 )
            v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
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
          v17 += 8;
        while ( v17 != (char *)v18 );
        v17 = v35;
      if ( v17 )
        j_operator delete(v17);
      v22 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v34 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v16 = v44;
    v23 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v16 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
  }
}


int __fastcall SetMaxPlayersCommand::SetMaxPlayersCommand(Command *a1)
{
  int result; // r0@1

  result = j_Command::Command(a1);
  *(_DWORD *)result = &off_271A19C;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


void __fastcall SetMaxPlayersCommand::setup(SetMaxPlayersCommand *this, CommandRegistry *a2)
{
  SetMaxPlayersCommand *v2; // r5@1
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
  sub_21E94B4((void **)&v15, "setmaxplayers");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.setmaxplayers.description", 3, 0, 0);
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
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v16 = type_id<CommandRegistry,int>(void)::id;
  v6 = j_CommandParameterData::CommandParameterData(
         (int)&v12,
         &v16,
         (unsigned int)CommandRegistry::parse<int>,
         "maxPlayers",
         0,
         20,
         -1);
  j_CommandRegistry::registerOverload<SetMaxPlayersCommand,CommandParameterData>((int)v2, "setmaxplayers", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall SetMaxPlayersCommand::~SetMaxPlayersCommand(SetMaxPlayersCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall SetMaxPlayersCommand::~SetMaxPlayersCommand(SetMaxPlayersCommand *this)
{
  SetMaxPlayersCommand::~SetMaxPlayersCommand(this);
}


void __fastcall SetMaxPlayersCommand::setup(SetMaxPlayersCommand *this, CommandRegistry *a2)
{
  SetMaxPlayersCommand::setup(this, a2);
}


void __fastcall SetMaxPlayersCommand::execute(SetMaxPlayersCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SetMaxPlayersCommand::execute(this, a2, a3);
}
