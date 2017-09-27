

void __fastcall AgentCommand::directionCommand(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::directionCommand(this, a2, a3, a4);
}


void __fastcall AgentCommand::collect(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::collect(this, a2, a3, a4);
}


void __fastcall AgentCommand::directionCommand(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand *v4; // r5@1
  CommandOutput *v5; // r4@1
  Command *v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int v9; // r6@1
  void *v10; // r4@4
  void *v11; // r6@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  void *v18; // r4@24
  void *v19; // r6@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int *v22; // r0@34
  __int64 v23; // [sp+4h] [bp-54h]@24
  int v24; // [sp+Ch] [bp-4Ch]@24
  int v25; // [sp+10h] [bp-48h]@24
  __int64 v26; // [sp+14h] [bp-44h]@4
  int v27; // [sp+1Ch] [bp-3Ch]@4
  int v28; // [sp+20h] [bp-38h]@4
  _DWORD *v29; // [sp+24h] [bp-34h]@1
  __int64 v30; // [sp+2Ch] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = j_operator new(4u);
  LODWORD(v8) = sub_1B0B560;
  *v7 = v4;
  HIDWORD(v8) = sub_1B0B428;
  v29 = v7;
  v30 = v8;
  v9 = j_AgentCommand::runAgentCommand((int)v7, v6, v5, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( v9 == 1 )
  {
    j_AgentCommand::successName((AgentCommand *)&v28, (int)v4);
    v26 = 0LL;
    v27 = 0;
    j_CommandOutput::success((int)v5, &v28, (unsigned __int64 *)&v26);
    v11 = (void *)HIDWORD(v26);
    v10 = (void *)v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
    {
      do
      {
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 8;
      }
      while ( v10 != v11 );
      v10 = (void *)v26;
    }
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_46;
LABEL_45:
      v17 = (*v16)--;
LABEL_46:
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
      return;
  }
  else
    j_AgentCommand::errorName((AgentCommand *)&v25, (int)v4);
    v23 = 0LL;
    v24 = 0;
    j_CommandOutput::error(v5, &v25, (unsigned __int64 *)&v23);
    v19 = (void *)HIDWORD(v23);
    v18 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = (char *)v18 + 8;
      while ( v18 != v19 );
      v18 = (void *)v23;
    if ( v18 )
      j_operator delete(v18);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
      goto LABEL_45;
}


void __fastcall AgentCommand::place(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand *v4; // r5@1
  CommandOutput *v5; // r4@1
  Command *v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int v9; // r6@1
  void *v10; // r4@4
  void *v11; // r6@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  void *v18; // r4@24
  void *v19; // r6@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int *v22; // r0@34
  __int64 v23; // [sp+4h] [bp-54h]@24
  int v24; // [sp+Ch] [bp-4Ch]@24
  int v25; // [sp+10h] [bp-48h]@24
  __int64 v26; // [sp+14h] [bp-44h]@4
  int v27; // [sp+1Ch] [bp-3Ch]@4
  int v28; // [sp+20h] [bp-38h]@4
  _DWORD *v29; // [sp+24h] [bp-34h]@1
  __int64 v30; // [sp+2Ch] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = j_operator new(4u);
  LODWORD(v8) = sub_1B0B3F0;
  *v7 = v4;
  HIDWORD(v8) = sub_1B0B380;
  v29 = v7;
  v30 = v8;
  v9 = j_AgentCommand::runAgentCommand((int)v7, v6, v5, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( v9 == 1 )
  {
    j_AgentCommand::successName((AgentCommand *)&v28, (int)v4);
    v26 = 0LL;
    v27 = 0;
    j_CommandOutput::success((int)v5, &v28, (unsigned __int64 *)&v26);
    v11 = (void *)HIDWORD(v26);
    v10 = (void *)v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
    {
      do
      {
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 8;
      }
      while ( v10 != v11 );
      v10 = (void *)v26;
    }
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_46;
LABEL_45:
      v17 = (*v16)--;
LABEL_46:
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
      return;
  }
  else
    j_AgentCommand::errorName((AgentCommand *)&v25, (int)v4);
    v23 = 0LL;
    v24 = 0;
    j_CommandOutput::error(v5, &v25, (unsigned __int64 *)&v23);
    v19 = (void *)HIDWORD(v23);
    v18 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = (char *)v18 + 8;
      while ( v18 != v19 );
      v18 = (void *)v23;
    if ( v18 )
      j_operator delete(v18);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
      goto LABEL_45;
}


int __fastcall AgentCommand::runAgentCommand(int a1, Command *a2, const CommandOrigin *a3, int a4)
{
  Command *v4; // r4@1
  int v5; // r8@1
  const CommandOrigin *v6; // r7@1
  int v7; // r0@1
  int v8; // r6@1
  Entity *v9; // r5@2
  CommandOutput *v10; // r3@2
  int v11; // r3@5
  int v12; // r0@7
  signed int v13; // r4@7
  signed int v14; // r1@12
  __int64 v16; // [sp+0h] [bp-20h]@6

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = j_Command::getPlayerFromOrigin(a2, a2);
  v8 = v7;
  if ( !v7 )
  {
    v14 = 0;
    return v7 & v14;
  }
  v9 = j_Player::getAgent((Player *)v7);
  if ( j_AgentCommand::validateRange(v9, v4, v6, v10) != 1 )
    v7 = 0;
LABEL_15:
    v14 = 1;
  if ( !v9 || !j_Entity::getAgentCommandComponent(v9) )
    goto LABEL_21;
  v11 = j_Entity::getAgentCommandComponent(v9);
  if ( !*(_DWORD *)(v5 + 8) )
    sub_21E5F48();
  (*(void (__fastcall **)(char *, int, int, int))(v5 + 12))((char *)&v16 + 4, v5, v8, v11);
  if ( !HIDWORD(v16) )
LABEL_21:
    v7 = 1;
  v12 = j_Entity::getAgentCommandComponent(v9);
  v16 = HIDWORD(v16);
  v13 = j_AgentCommandComponent::addCommand(v12, (int *)&v16);
  if ( (_DWORD)v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  LODWORD(v16) = 0;
  if ( HIDWORD(v16) )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)HIDWORD(v16) + 4))(HIDWORD(v16));
  v7 = 1;
  if ( v13 )
    goto LABEL_15;
  v14 = 0;
  return v7 & v14;
}


const void **__fastcall AgentCommand::successName(AgentCommand *this, int a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  const char *v4; // r4@1
  unsigned int v5; // r0@1

  v2 = a2;
  v3 = (const void **)this;
  sub_21E94B4((void **)this, "commands.agent.");
  v4 = off_2724F18[*(_DWORD *)(v2 + 20)];
  v5 = j_strlen_0(v4);
  sub_21E7408(v3, (char *)v4, v5);
  return sub_21E7408(v3, ".success", 8u);
}


const void **__fastcall AgentCommand::errorName(AgentCommand *this, int a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  const char *v4; // r4@1
  unsigned int v5; // r0@1

  v2 = a2;
  v3 = (const void **)this;
  sub_21E94B4((void **)this, "commands.agent.");
  v4 = off_2724F18[*(_DWORD *)(v2 + 20)];
  v5 = j_strlen_0(v4);
  sub_21E7408(v3, (char *)v4, v5);
  return sub_21E7408(v3, ".failed", 7u);
}


void __fastcall AgentCommand::execute(AgentCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r11@1
  AgentCommand *v4; // r9@1
  CommandOutput *v5; // r5@1
  Player *v6; // r1@1
  unsigned int *v7; // r2@1
  Player *v8; // r10@1
  void *v9; // r4@2
  void *v10; // r7@2
  char *v11; // r1@3
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@3
  unsigned int *v13; // r2@4
  signed int v14; // r5@6
  int (**v15)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@10
  char *v16; // r5@10
  int *v17; // r0@11
  char *v18; // r0@16
  AgentCommand *v19; // r0@17
  char v20[12]; // [sp+0h] [bp-40h]@2
  int v21; // [sp+Ch] [bp-34h]@2
  Player *v22; // [sp+14h] [bp-2Ch]@2
  char v23; // [sp+18h] [bp-28h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v8 = (Player *)j_Command::getPlayerFromOrigin(a2, a2);
  if ( !v8 )
  {
    sub_21E94B4((void **)&v22, "commands.generic.player.notFound");
    *(_QWORD *)&v20[4] = 0LL;
    v21 = 0;
    j_CommandOutput::error(v5, (int *)&v22, (unsigned __int64 *)&v20[4]);
    v10 = *(void **)&v20[8];
    v9 = *(void **)&v20[4];
    if ( *(_DWORD *)&v20[4] != *(_DWORD *)&v20[8] )
    {
      v11 = &v23;
      v12 = &pthread_create;
      do
      {
        v17 = (int *)(*(_DWORD *)v9 - 12);
        if ( v17 != &dword_28898C0 )
        {
          v13 = (unsigned int *)(*(_DWORD *)v9 - 4);
          if ( v12 )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 <= 0 )
            v15 = v12;
            v16 = v11;
            j_j_j_j__ZdlPv_9(v17);
            v11 = v16;
            v12 = v15;
        }
        v9 = (char *)v9 + 8;
      }
      while ( v9 != v10 );
      v9 = *(void **)&v20[4];
      v5 = *(CommandOutput **)v20;
    }
    if ( v9 )
      j_operator delete(v9);
    v6 = v22;
    v7 = (unsigned int *)&dword_28898C0;
    v18 = (char *)v22 - 12;
    if ( (int *)((char *)v22 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)((char *)v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v6 = (Player *)__ldrex(v7);
        while ( __strex((unsigned int)v6 - 1, v7) );
      else
        v6 = (Player *)(*v7)--;
      if ( (signed int)v6 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  }
  v19 = (AgentCommand *)*((_DWORD *)v4 + 5);
  switch ( v19 )
    case 8u:
    case 9u:
    case 0xAu:
      j_AgentCommand::itemCommand(v4, v6, v3, v5);
      break;
    case 6u:
      j_AgentCommand::drop(v4, v6, v3, v5);
    case 0xEu:
      j_AgentCommand::place(v4, v6, v3, v5);
    case 1u:
      j_AgentCommand::collect(v4, v6, v3, v5);
    case 0x10u:
      j_AgentCommand::tpAgent(v19, v8, (const CommandOrigin *)v7, v5);
    case 2u:
      j_AgentCommand::createAgent(v19, v8, v3, v5);
    case 0x11u:
      j_AgentCommand::transfer(v4, v6, v3, v5);
    default:
      j_AgentCommand::directionCommand(v4, v6, v3, v5);
}


void __fastcall AgentCommand::itemCommand(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::itemCommand(this, a2, a3, a4);
}


void __fastcall AgentCommand::~AgentCommand(AgentCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall AgentCommand::tpAgent(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::tpAgent(this, a2, a3, a4);
}


void __fastcall AgentCommand::drop(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand *v4; // r5@1
  CommandOutput *v5; // r4@1
  Command *v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int v9; // r6@1
  void *v10; // r4@4
  void *v11; // r6@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  void *v18; // r4@24
  void *v19; // r6@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int *v22; // r0@34
  __int64 v23; // [sp+4h] [bp-54h]@24
  int v24; // [sp+Ch] [bp-4Ch]@24
  int v25; // [sp+10h] [bp-48h]@24
  __int64 v26; // [sp+14h] [bp-44h]@4
  int v27; // [sp+1Ch] [bp-3Ch]@4
  int v28; // [sp+20h] [bp-38h]@4
  _DWORD *v29; // [sp+24h] [bp-34h]@1
  __int64 v30; // [sp+2Ch] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = j_operator new(4u);
  LODWORD(v8) = sub_1B0B2B8;
  *v7 = v4;
  HIDWORD(v8) = sub_1B0B272;
  v29 = v7;
  v30 = v8;
  v9 = j_AgentCommand::runAgentCommand((int)v7, v6, v5, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( v9 == 1 )
  {
    j_AgentCommand::successName((AgentCommand *)&v28, (int)v4);
    v26 = 0LL;
    v27 = 0;
    j_CommandOutput::success((int)v5, &v28, (unsigned __int64 *)&v26);
    v11 = (void *)HIDWORD(v26);
    v10 = (void *)v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
    {
      do
      {
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 8;
      }
      while ( v10 != v11 );
      v10 = (void *)v26;
    }
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_46;
LABEL_45:
      v17 = (*v16)--;
LABEL_46:
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
      return;
  }
  else
    j_AgentCommand::errorName((AgentCommand *)&v25, (int)v4);
    v23 = 0LL;
    v24 = 0;
    j_CommandOutput::error(v5, &v25, (unsigned __int64 *)&v23);
    v19 = (void *)HIDWORD(v23);
    v18 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = (char *)v18 + 8;
      while ( v18 != v19 );
      v18 = (void *)v23;
    if ( v18 )
      j_operator delete(v18);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
      goto LABEL_45;
}


void __fastcall AgentCommand::~AgentCommand(AgentCommand *this)
{
  AgentCommand::~AgentCommand(this);
}


void __fastcall AgentCommand::execute(AgentCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  AgentCommand::execute(this, a2, a3);
}


void __fastcall AgentCommand::tpAgent(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  Player *v4; // r5@1
  CommandOutput *v5; // r8@1
  int v6; // r0@1
  __int64 v7; // r1@1
  Entity *v14; // r6@1
  int v15; // r7@2
  __int64 v16; // kr00_8@2
  BlockSource *v17; // r0@2
  void *v18; // r4@3
  void *v19; // r6@3
  void *v20; // r4@5
  void *v21; // r6@5
  unsigned int *v22; // r2@7
  signed int v23; // r1@9
  int *v24; // r0@15
  void *v25; // r0@20
  unsigned int *v26; // r2@21
  signed int v27; // r1@23
  unsigned int *v28; // r2@25
  signed int v29; // r1@27
  int *v30; // r0@33
  __int64 v31; // [sp+8h] [bp-68h]@5
  int v32; // [sp+10h] [bp-60h]@5
  int v33; // [sp+18h] [bp-58h]@5
  __int64 v34; // [sp+1Ch] [bp-54h]@3
  int v35; // [sp+24h] [bp-4Ch]@3
  int v36; // [sp+2Ch] [bp-44h]@3
  __int64 x; // [sp+30h] [bp-40h]@1
  float v38; // [sp+38h] [bp-38h]@1

  v4 = a2;
  v5 = a4;
  v6 = (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 52))(a2);
  v7 = *(_QWORD *)v6;
  v38 = *(float *)(v6 + 8);
  x = v7;
  _R0 = j_floorf_0(*(float *)&v7);
  __asm
  {
    VMOV.F32        S16, #0.5
    VMOV            S0, R0
    VADD.F32        S18, S0, S16
  }
  _R0 = j_floorf_0(v38);
    VSTR            S18, [SP,#0x70+x]
    VADD.F32        S16, S0, S16
  HIDWORD(x) = j_floorf_0(*((float *)v4 + 67));
  __asm { VSTR            S16, [SP,#0x70+var_38] }
  v14 = j_Player::getAgent(v4);
  if ( v14 )
    v15 = j_Entity::getLevel(v4);
    v16 = *(_QWORD *)j_Entity::getUniqueID(v14);
    v17 = (BlockSource *)j_Entity::getRegion(v4);
    if ( j_Level::moveAutonomousEntityTo(v15, (int)&x, v16, HIDWORD(v16), v17) )
    {
      sub_21E94B4((void **)&v36, "commands.agent.tpagent.success");
      v34 = 0LL;
      v35 = 0;
      j_CommandOutput::success((int)v5, &v36, (unsigned __int64 *)&v34);
      v19 = (void *)HIDWORD(v34);
      v18 = (void *)v34;
      if ( (_DWORD)v34 != HIDWORD(v34) )
      {
        do
        {
          v30 = (int *)(*(_DWORD *)v18 - 12);
          if ( v30 != &dword_28898C0 )
          {
            v28 = (unsigned int *)(*(_DWORD *)v18 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
            }
            else
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j__ZdlPv_9(v30);
          }
          v18 = (char *)v18 + 8;
        }
        while ( v18 != v19 );
        v18 = (void *)v34;
      }
      if ( v18 )
        j_operator delete(v18);
      v25 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) == &dword_28898C0 )
        return;
      v26 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
        __dmb();
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        goto LABEL_45;
LABEL_44:
      v27 = (*v26)--;
LABEL_45:
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
      return;
    }
  sub_21E94B4((void **)&v33, "commands.agent.tpagent.failed");
  v31 = 0LL;
  v32 = 0;
  j_CommandOutput::error(v5, &v33, (unsigned __int64 *)&v31);
  v21 = (void *)HIDWORD(v31);
  v20 = (void *)v31;
  if ( (_DWORD)v31 != HIDWORD(v31) )
    do
      v24 = (int *)(*(_DWORD *)v20 - 12);
      if ( v24 != &dword_28898C0 )
        v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v20 = (char *)v20 + 8;
    while ( v20 != v21 );
    v20 = (void *)v31;
  if ( v20 )
    j_operator delete(v20);
  v25 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      goto LABEL_45;
    goto LABEL_44;
}


void __fastcall AgentCommand::itemCommand(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand *v4; // r5@1
  CommandOutput *v5; // r4@1
  Command *v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int v9; // r6@1
  void *v10; // r4@4
  void *v11; // r6@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  void *v18; // r4@24
  void *v19; // r6@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int *v22; // r0@34
  __int64 v23; // [sp+4h] [bp-54h]@24
  int v24; // [sp+Ch] [bp-4Ch]@24
  int v25; // [sp+10h] [bp-48h]@24
  __int64 v26; // [sp+14h] [bp-44h]@4
  int v27; // [sp+1Ch] [bp-3Ch]@4
  int v28; // [sp+20h] [bp-38h]@4
  _DWORD *v29; // [sp+24h] [bp-34h]@1
  __int64 v30; // [sp+2Ch] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = j_operator new(4u);
  LODWORD(v8) = sub_1B0B1A2;
  *v7 = v4;
  HIDWORD(v8) = sub_1B0B058;
  v29 = v7;
  v30 = v8;
  v9 = j_AgentCommand::runAgentCommand((int)v7, v6, v5, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( v9 == 1 )
  {
    j_AgentCommand::successName((AgentCommand *)&v28, (int)v4);
    v26 = 0LL;
    v27 = 0;
    j_CommandOutput::success((int)v5, &v28, (unsigned __int64 *)&v26);
    v11 = (void *)HIDWORD(v26);
    v10 = (void *)v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
    {
      do
      {
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 8;
      }
      while ( v10 != v11 );
      v10 = (void *)v26;
    }
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_46;
LABEL_45:
      v17 = (*v16)--;
LABEL_46:
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
      return;
  }
  else
    j_AgentCommand::errorName((AgentCommand *)&v25, (int)v4);
    v23 = 0LL;
    v24 = 0;
    j_CommandOutput::error(v5, &v25, (unsigned __int64 *)&v23);
    v19 = (void *)HIDWORD(v23);
    v18 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = (char *)v18 + 8;
      while ( v18 != v19 );
      v18 = (void *)v23;
    if ( v18 )
      j_operator delete(v18);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
      goto LABEL_45;
}


void __fastcall AgentCommand::setup(AgentCommand *this, CommandRegistry *a2)
{
  AgentCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@19
  void *v12; // r0@20
  void *v13; // r0@21
  void *v14; // r0@22
  void *v15; // r5@23
  int v16; // r6@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  int *v19; // r0@33
  void *v20; // r0@38
  void *v21; // r0@39
  void *v22; // r0@40
  void *v23; // r6@41
  int v24; // r5@41
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  int *v27; // r0@51
  void *v28; // r0@56
  void *v29; // r0@57
  void *v30; // r0@58
  void *v31; // r0@59
  void *v32; // r0@60
  void *v33; // r0@61
  void *v34; // r0@62
  void *v35; // r0@63
  void *v36; // r0@64
  void *v37; // r0@65
  void *v38; // r5@66
  int v39; // r6@66
  unsigned int *v40; // r2@68
  signed int v41; // r1@70
  int *v42; // r0@76
  void *v43; // r0@81
  void *v44; // r0@82
  void *v45; // r5@83
  int v46; // r6@83
  unsigned int *v47; // r2@85
  signed int v48; // r1@87
  int *v49; // r0@93
  void *v50; // r0@98
  void *v51; // r0@99
  void *v52; // r0@100
  void *v53; // r0@101
  void *v54; // r5@102
  int v55; // r6@102
  unsigned int *v56; // r2@104
  signed int v57; // r1@106
  int *v58; // r0@112
  void *v59; // r0@117
  void *v60; // r0@118
  void *v61; // r0@119
  void *v62; // r5@120
  int v63; // r6@120
  unsigned int *v64; // r2@122
  signed int v65; // r1@124
  int *v66; // r0@130
  void *v67; // r0@135
  void *v68; // r0@136
  void *v69; // r5@137
  int v70; // r6@137
  unsigned int *v71; // r2@139
  signed int v72; // r1@141
  int *v73; // r0@147
  void *v74; // r0@152
  void *v75; // r0@153
  void *v76; // r5@154
  int v77; // r6@154
  unsigned int *v78; // r2@156
  signed int v79; // r1@158
  int *v80; // r0@164
  void *v81; // r0@169
  void *v82; // r0@170
  void *v83; // r5@171
  int v84; // r6@171
  unsigned int *v85; // r2@173
  signed int v86; // r1@175
  int *v87; // r0@181
  void *v88; // r0@186
  void *v89; // r0@187
  void *v90; // r5@188
  int v91; // r6@188
  unsigned int *v92; // r2@190
  signed int v93; // r1@192
  int *v94; // r0@198
  void *v95; // r0@203
  void *v96; // r0@204
  __int64 v97; // r2@205
  void *v98; // r0@205
  char v99; // r0@206
  char v100; // r0@209
  int v101; // r0@212
  __int64 v102; // r2@212
  void *v103; // r0@212
  void *v104; // r0@213
  char v105; // r0@214
  char v106; // r0@217
  int v107; // r0@220
  __int64 v108; // r2@220
  void *v109; // r0@220
  void *v110; // r0@221
  char v111; // r0@222
  char v112; // r0@225
  int v113; // r0@228
  __int64 v114; // r2@228
  void *v115; // r0@228
  void *v116; // r0@229
  char v117; // r0@230
  int v118; // r0@233
  __int64 v119; // r2@233
  void *v120; // r0@233
  char v121; // r0@234
  char v122; // r0@237
  char v123; // r0@240
  char v124; // r0@243
  int v125; // r0@246
  __int64 v126; // r2@246
  void *v127; // r0@246
  void *v128; // r0@247
  void *v129; // r0@248
  void *v130; // r0@249
  char v131; // r0@250
  char v132; // r0@253
  char v133; // r0@256
  char v134; // r0@259
  int v135; // r0@262
  __int64 v136; // r2@262
  void *v137; // r0@262
  void *v138; // r0@263
  void *v139; // r0@264
  void *v140; // r0@265
  char v141; // r0@266
  char v142; // r0@269
  int v143; // r0@272
  __int64 v144; // r2@272
  void *v145; // r0@272
  void *v146; // r0@273
  char v147; // r0@274
  char v148; // r0@277
  int v149; // r0@280
  __int64 v150; // r2@280
  void *v151; // r0@280
  void *v152; // r0@281
  char v153; // r0@282
  char v154; // r0@285
  char v155; // r0@288
  int v156; // r0@291
  void *v157; // r0@291
  void *v158; // r0@292
  void *v159; // r0@293
  unsigned int *v160; // r2@295
  signed int v161; // r1@297
  unsigned int *v162; // r2@299
  signed int v163; // r1@301
  unsigned int *v164; // r2@303
  signed int v165; // r1@305
  unsigned int *v166; // r2@307
  signed int v167; // r1@309
  unsigned int *v168; // r2@311
  signed int v169; // r1@313
  unsigned int *v170; // r2@315
  signed int v171; // r1@317
  unsigned int *v172; // r2@319
  signed int v173; // r1@321
  unsigned int *v174; // r2@323
  signed int v175; // r1@325
  unsigned int *v176; // r2@327
  signed int v177; // r1@329
  unsigned int *v178; // r2@331
  signed int v179; // r1@333
  unsigned int *v180; // r2@335
  signed int v181; // r1@337
  unsigned int *v182; // r2@339
  signed int v183; // r1@341
  unsigned int *v184; // r2@343
  signed int v185; // r1@345
  unsigned int *v186; // r2@347
  signed int v187; // r1@349
  unsigned int *v188; // r2@351
  signed int v189; // r1@353
  unsigned int *v190; // r2@355
  signed int v191; // r1@357
  unsigned int *v192; // r2@359
  signed int v193; // r1@361
  unsigned int *v194; // r2@363
  signed int v195; // r1@365
  unsigned int *v196; // r2@367
  signed int v197; // r1@369
  unsigned int *v198; // r2@371
  signed int v199; // r1@373
  unsigned int *v200; // r2@375
  signed int v201; // r1@377
  unsigned int *v202; // r2@379
  signed int v203; // r1@381
  unsigned int *v204; // r2@383
  signed int v205; // r1@385
  unsigned int *v206; // r2@387
  signed int v207; // r1@389
  unsigned int *v208; // r2@391
  signed int v209; // r1@393
  unsigned int *v210; // r2@395
  signed int v211; // r1@397
  unsigned int *v212; // r2@399
  signed int v213; // r1@401
  unsigned int *v214; // r2@403
  signed int v215; // r1@405
  unsigned int *v216; // r2@407
  signed int v217; // r1@409
  unsigned int *v218; // r2@411
  signed int v219; // r1@413
  unsigned int *v220; // r2@415
  signed int v221; // r1@417
  unsigned int *v222; // r2@419
  signed int v223; // r1@421
  unsigned int *v224; // r2@423
  signed int v225; // r1@425
  unsigned int *v226; // r2@427
  signed int v227; // r1@429
  unsigned int *v228; // r2@431
  signed int v229; // r1@433
  unsigned int *v230; // r2@435
  signed int v231; // r1@437
  unsigned int *v232; // r2@439
  signed int v233; // r1@441
  unsigned int *v234; // r2@443
  signed int v235; // r1@445
  unsigned int *v236; // r2@447
  signed int v237; // r1@449
  int v238; // r2@451
  signed int v239; // r1@453
  int v240; // r2@455
  signed int v241; // r1@457
  int v242; // r2@459
  signed int v243; // r1@461
  int v244; // r2@463
  signed int v245; // r1@465
  int v246; // r2@467
  signed int v247; // r1@469
  int v248; // r2@471
  signed int v249; // r1@473
  int v250; // r2@475
  signed int v251; // r1@477
  int v252; // r2@479
  signed int v253; // r1@481
  int v254; // r2@483
  signed int v255; // r1@485
  int v256; // r2@487
  signed int v257; // r1@489
  int v258; // r2@491
  signed int v259; // r1@493
  int v260; // r2@495
  signed int v261; // r1@497
  int v262; // r2@499
  signed int v263; // r1@501
  int v264; // r2@503
  signed int v265; // r1@505
  int v266; // r2@507
  signed int v267; // r1@509
  int v268; // r2@511
  signed int v269; // r1@513
  int v270; // r2@515
  signed int v271; // r1@517
  int v272; // r2@519
  signed int v273; // r1@521
  int v274; // r2@523
  signed int v275; // r1@525
  int v276; // r2@527
  signed int v277; // r1@529
  unsigned int *v278; // r2@531
  signed int v279; // r1@533
  unsigned int *v280; // r2@535
  signed int v281; // r1@537
  unsigned int *v282; // r2@539
  signed int v283; // r1@541
  char v284; // [sp+1Ch] [bp-644h]@291
  int v285; // [sp+28h] [bp-638h]@291
  char v286; // [sp+44h] [bp-61Ch]@288
  int v287; // [sp+50h] [bp-610h]@292
  char v288; // [sp+6Ch] [bp-5F4h]@285
  int v289; // [sp+78h] [bp-5E8h]@293
  __int64 v290; // [sp+94h] [bp-5CCh]@282
  char v291; // [sp+9Ch] [bp-5C4h]@280
  int v292; // [sp+A8h] [bp-5B8h]@280
  char v293; // [sp+C4h] [bp-59Ch]@277
  int v294; // [sp+D0h] [bp-590h]@281
  __int64 v295; // [sp+ECh] [bp-574h]@274
  char v296; // [sp+F4h] [bp-56Ch]@272
  int v297; // [sp+100h] [bp-560h]@272
  char v298; // [sp+11Ch] [bp-544h]@269
  int v299; // [sp+128h] [bp-538h]@273
  __int64 v300; // [sp+144h] [bp-51Ch]@266
  char v301; // [sp+14Ch] [bp-514h]@262
  int v302; // [sp+158h] [bp-508h]@262
  char v303; // [sp+174h] [bp-4ECh]@259
  int v304; // [sp+180h] [bp-4E0h]@263
  char v305; // [sp+19Ch] [bp-4C4h]@256
  int v306; // [sp+1A8h] [bp-4B8h]@264
  char v307; // [sp+1C4h] [bp-49Ch]@253
  int v308; // [sp+1D0h] [bp-490h]@265
  __int64 v309; // [sp+1ECh] [bp-474h]@250
  char v310; // [sp+1F4h] [bp-46Ch]@246
  int v311; // [sp+200h] [bp-460h]@246
  char v312; // [sp+21Ch] [bp-444h]@243
  int v313; // [sp+228h] [bp-438h]@247
  char v314; // [sp+244h] [bp-41Ch]@240
  int v315; // [sp+250h] [bp-410h]@248
  char v316; // [sp+26Ch] [bp-3F4h]@237
  int v317; // [sp+278h] [bp-3E8h]@249
  __int64 v318; // [sp+294h] [bp-3CCh]@234
  char v319; // [sp+29Ch] [bp-3C4h]@233
  int v320; // [sp+2A8h] [bp-3B8h]@233
  __int64 v321; // [sp+2C4h] [bp-39Ch]@230
  char v322; // [sp+2CCh] [bp-394h]@228
  int v323; // [sp+2D8h] [bp-388h]@228
  char v324; // [sp+2F4h] [bp-36Ch]@225
  int v325; // [sp+300h] [bp-360h]@229
  __int64 v326; // [sp+31Ch] [bp-344h]@222
  char v327; // [sp+324h] [bp-33Ch]@220
  int v328; // [sp+330h] [bp-330h]@220
  char v329; // [sp+34Ch] [bp-314h]@217
  int v330; // [sp+358h] [bp-308h]@221
  __int64 v331; // [sp+374h] [bp-2ECh]@214
  char v332; // [sp+37Ch] [bp-2E4h]@212
  int v333; // [sp+388h] [bp-2D8h]@212
  char v334; // [sp+3A4h] [bp-2BCh]@209
  int v335; // [sp+3B0h] [bp-2B0h]@213
  __int64 v336; // [sp+3CCh] [bp-294h]@206
  int v337; // [sp+3D8h] [bp-288h]@205
  int v338; // [sp+3DCh] [bp-284h]@188
  int v339; // [sp+3E0h] [bp-280h]@188
  void *v340; // [sp+3E4h] [bp-27Ch]@188
  int v341; // [sp+3E8h] [bp-278h]@188
  char *v342; // [sp+3ECh] [bp-274h]@188
  int v343; // [sp+3F4h] [bp-26Ch]@188
  int v344; // [sp+3F8h] [bp-268h]@171
  int v345; // [sp+3FCh] [bp-264h]@171
  void *v346; // [sp+400h] [bp-260h]@171
  int v347; // [sp+404h] [bp-25Ch]@171
  char *v348; // [sp+408h] [bp-258h]@171
  int v349; // [sp+410h] [bp-250h]@171
  int v350; // [sp+414h] [bp-24Ch]@154
  int v351; // [sp+418h] [bp-248h]@154
  void *v352; // [sp+41Ch] [bp-244h]@154
  int v353; // [sp+420h] [bp-240h]@154
  char *v354; // [sp+424h] [bp-23Ch]@154
  int v355; // [sp+42Ch] [bp-234h]@154
  int v356; // [sp+430h] [bp-230h]@137
  int v357; // [sp+434h] [bp-22Ch]@137
  void *v358; // [sp+438h] [bp-228h]@137
  int v359; // [sp+43Ch] [bp-224h]@137
  char *v360; // [sp+440h] [bp-220h]@137
  int v361; // [sp+448h] [bp-218h]@137
  int v362; // [sp+44Ch] [bp-214h]@120
  int v363; // [sp+450h] [bp-210h]@120
  void *v364; // [sp+454h] [bp-20Ch]@120
  int v365; // [sp+458h] [bp-208h]@120
  char *v366; // [sp+45Ch] [bp-204h]@120
  int v367; // [sp+464h] [bp-1FCh]@120
  int v368; // [sp+468h] [bp-1F8h]@102
  int v369; // [sp+46Ch] [bp-1F4h]@102
  int v370; // [sp+470h] [bp-1F0h]@102
  int v371; // [sp+474h] [bp-1ECh]@102
  void *v372; // [sp+478h] [bp-1E8h]@102
  int v373; // [sp+47Ch] [bp-1E4h]@102
  char *v374; // [sp+480h] [bp-1E0h]@102
  int v375; // [sp+488h] [bp-1D8h]@102
  int v376; // [sp+48Ch] [bp-1D4h]@83
  int v377; // [sp+490h] [bp-1D0h]@83
  int v378; // [sp+494h] [bp-1CCh]@83
  int v379; // [sp+498h] [bp-1C8h]@83
  int v380; // [sp+49Ch] [bp-1C4h]@83
  int v381; // [sp+4A0h] [bp-1C0h]@83
  void *v382; // [sp+4A4h] [bp-1BCh]@83
  int v383; // [sp+4A8h] [bp-1B8h]@83
  char *v384; // [sp+4ACh] [bp-1B4h]@83
  int v385; // [sp+4B4h] [bp-1ACh]@83
  int v386; // [sp+4B8h] [bp-1A8h]@66
  int v387; // [sp+4BCh] [bp-1A4h]@66
  void *v388; // [sp+4C0h] [bp-1A0h]@66
  int v389; // [sp+4C4h] [bp-19Ch]@66
  char *v390; // [sp+4C8h] [bp-198h]@66
  int v391; // [sp+4D0h] [bp-190h]@66
  int v392; // [sp+4D4h] [bp-18Ch]@41
  int v393; // [sp+4D8h] [bp-188h]@41
  int v394; // [sp+4DCh] [bp-184h]@41
  int v395; // [sp+4E0h] [bp-180h]@41
  int v396; // [sp+4E4h] [bp-17Ch]@41
  int v397; // [sp+4E8h] [bp-178h]@41
  int v398; // [sp+4ECh] [bp-174h]@41
  int v399; // [sp+4F0h] [bp-170h]@41
  int v400; // [sp+4F4h] [bp-16Ch]@41
  int v401; // [sp+4F8h] [bp-168h]@41
  int v402; // [sp+4FCh] [bp-164h]@41
  int v403; // [sp+500h] [bp-160h]@41
  int v404; // [sp+504h] [bp-15Ch]@41
  int v405; // [sp+508h] [bp-158h]@41
  int v406; // [sp+50Ch] [bp-154h]@41
  int v407; // [sp+510h] [bp-150h]@41
  int v408; // [sp+514h] [bp-14Ch]@41
  int v409; // [sp+518h] [bp-148h]@41
  void *v410; // [sp+51Ch] [bp-144h]@41
  int v411; // [sp+520h] [bp-140h]@41
  char *v412; // [sp+524h] [bp-13Ch]@41
  int v413; // [sp+52Ch] [bp-134h]@41
  int v414; // [sp+530h] [bp-130h]@23
  char v415; // [sp+534h] [bp-12Ch]@23
  int v416; // [sp+538h] [bp-128h]@23
  char v417; // [sp+53Ch] [bp-124h]@23
  void *v418; // [sp+540h] [bp-120h]@23
  int v419; // [sp+544h] [bp-11Ch]@23
  char *v420; // [sp+548h] [bp-118h]@23
  int v421; // [sp+550h] [bp-110h]@23
  int v422; // [sp+554h] [bp-10Ch]@1
  char v423; // [sp+558h] [bp-108h]@1
  int v424; // [sp+55Ch] [bp-104h]@1
  char v425; // [sp+560h] [bp-100h]@1
  int v426; // [sp+564h] [bp-FCh]@1
  char v427; // [sp+568h] [bp-F8h]@1
  int v428; // [sp+56Ch] [bp-F4h]@1
  char v429; // [sp+570h] [bp-F0h]@1
  int v430; // [sp+574h] [bp-ECh]@1
  char v431; // [sp+578h] [bp-E8h]@1
  int v432; // [sp+57Ch] [bp-E4h]@1
  char v433; // [sp+580h] [bp-E0h]@1
  void *v434; // [sp+584h] [bp-DCh]@1
  int v435; // [sp+588h] [bp-D8h]@1
  char *v436; // [sp+58Ch] [bp-D4h]@1
  int v437; // [sp+594h] [bp-CCh]@1
  __int16 v438; // [sp+608h] [bp-58h]@212
  __int16 v439; // [sp+60Ch] [bp-54h]@220
  __int16 v440; // [sp+610h] [bp-50h]@228
  __int16 v441; // [sp+614h] [bp-4Ch]@240
  __int16 v442; // [sp+618h] [bp-48h]@243
  __int16 v443; // [sp+61Ch] [bp-44h]@246
  __int16 v444; // [sp+620h] [bp-40h]@256
  __int16 v445; // [sp+624h] [bp-3Ch]@259
  __int16 v446; // [sp+628h] [bp-38h]@262
  unsigned __int16 v447; // [sp+62Ch] [bp-34h]@272
  __int16 v448; // [sp+630h] [bp-30h]@280
  __int16 v449; // [sp+634h] [bp-2Ch]@209
  __int16 v450; // [sp+638h] [bp-28h]@288
  __int16 v451; // [sp+63Ch] [bp-24h]@291

  v2 = this;
  sub_21E94B4((void **)&v437, "AgentDirection");
  sub_21E94B4((void **)&v422, "up");
  v423 = 0;
  sub_21E94B4((void **)&v424, "down");
  v425 = 1;
  sub_21E94B4((void **)&v426, "forward");
  v427 = 2;
  sub_21E94B4((void **)&v428, "back");
  v429 = 3;
  sub_21E94B4((void **)&v430, "left");
  v431 = 4;
  sub_21E94B4((void **)&v432, "right");
  v433 = 5;
  v434 = 0;
  v435 = 0;
  v436 = 0;
  v3 = j_operator new(0x30u);
  v434 = v3;
  v436 = (char *)v3 + 48;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommands::Direction> const*,std::pair<std::string,AgentCommands::Direction>*>(
         (int)&v422,
         (int)&v434,
         (int)v3);
  v435 = v4;
  j_CommandRegistry::addEnumValues<AgentCommands::Direction>((int)v2, (int)&v437, (unsigned __int64 *)&v434);
  if ( v3 != (void *)v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 8;
    }
    while ( v3 != (void *)v4 );
    v3 = v434;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v432 - 12);
  if ( (int *)(v432 - 12) != &dword_28898C0 )
    v160 = (unsigned int *)(v432 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
    else
      v161 = (*v160)--;
    if ( v161 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v430 - 12);
  if ( (int *)(v430 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v430 - 4);
        v163 = __ldrex(v162);
      while ( __strex(v163 - 1, v162) );
      v163 = (*v162)--;
    if ( v163 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v428 - 12);
  if ( (int *)(v428 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v428 - 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v426 - 12);
  if ( (int *)(v426 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v426 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v424 - 12);
  if ( (int *)(v424 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v424 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v422 - 12);
  if ( (int *)(v422 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v422 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v437 - 12);
  if ( (int *)(v437 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v437 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v421, "AgentTurnDirection");
  sub_21E94B4((void **)&v414, "left");
  v415 = 4;
  sub_21E94B4((void **)&v416, "right");
  v417 = 5;
  v418 = 0;
  v419 = 0;
  v420 = 0;
  v15 = j_operator new(0x10u);
  v418 = v15;
  v420 = (char *)v15 + 16;
  v16 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommands::Direction> const*,std::pair<std::string,AgentCommands::Direction>*>(
          (int)&v414,
          (int)&v418,
          (int)v15);
  v419 = v16;
  j_CommandRegistry::addEnumValues<AgentCommands::Direction>((int)v2, (int)&v421, (unsigned __int64 *)&v418);
  if ( v15 != (void *)v16 )
      v19 = (int *)(*(_DWORD *)v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*(_DWORD *)v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 = (char *)v15 + 8;
    while ( v15 != (void *)v16 );
    v15 = v418;
  if ( v15 )
    j_operator delete(v15);
  v20 = (void *)(v416 - 12);
  if ( (int *)(v416 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v416 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v414 - 12);
  if ( (int *)(v414 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v414 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v421 - 12);
  if ( (int *)(v421 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v421 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v413, "AgentDirectionCommand");
  sub_21E94B4((void **)&v392, "attack");
  v393 = 0;
  sub_21E94B4((void **)&v394, "destroy");
  v395 = 3;
  sub_21E94B4((void **)&v396, "detect");
  v397 = 4;
  sub_21E94B4((void **)&v398, "detectredstone");
  v399 = 5;
  sub_21E94B4((void **)&v400, "dropall");
  v401 = 7;
  sub_21E94B4((void **)&v402, "inspect");
  v403 = 11;
  sub_21E94B4((void **)&v404, "inspectdata");
  v405 = 12;
  sub_21E94B4((void **)&v406, "move");
  v407 = 13;
  sub_21E94B4((void **)&v408, "till");
  v409 = 15;
  v410 = 0;
  v411 = 0;
  v412 = 0;
  v23 = j_operator new(0x48u);
  v410 = v23;
  v412 = (char *)v23 + 72;
  v24 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v392,
          (int)&v410,
          (int)v23);
  v411 = v24;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v413, (unsigned __int64 *)&v410);
  if ( v23 != (void *)v24 )
      v27 = (int *)(*(_DWORD *)v23 - 12);
      if ( v27 != &dword_28898C0 )
        v25 = (unsigned int *)(*(_DWORD *)v23 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v23 = (char *)v23 + 8;
    while ( v23 != (void *)v24 );
    v23 = v410;
  if ( v23 )
    j_operator delete(v23);
  v28 = (void *)(v408 - 12);
  if ( (int *)(v408 - 12) != &dword_28898C0 )
    v180 = (unsigned int *)(v408 - 4);
        v181 = __ldrex(v180);
      while ( __strex(v181 - 1, v180) );
      v181 = (*v180)--;
    if ( v181 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v406 - 12);
  if ( (int *)(v406 - 12) != &dword_28898C0 )
    v182 = (unsigned int *)(v406 - 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v404 - 12);
  if ( (int *)(v404 - 12) != &dword_28898C0 )
    v184 = (unsigned int *)(v404 - 4);
        v185 = __ldrex(v184);
      while ( __strex(v185 - 1, v184) );
      v185 = (*v184)--;
    if ( v185 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v402 - 12);
  if ( (int *)(v402 - 12) != &dword_28898C0 )
    v186 = (unsigned int *)(v402 - 4);
        v187 = __ldrex(v186);
      while ( __strex(v187 - 1, v186) );
      v187 = (*v186)--;
    if ( v187 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v400 - 12);
  if ( (int *)(v400 - 12) != &dword_28898C0 )
    v188 = (unsigned int *)(v400 - 4);
        v189 = __ldrex(v188);
      while ( __strex(v189 - 1, v188) );
      v189 = (*v188)--;
    if ( v189 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v398 - 12);
  if ( (int *)(v398 - 12) != &dword_28898C0 )
    v190 = (unsigned int *)(v398 - 4);
        v191 = __ldrex(v190);
      while ( __strex(v191 - 1, v190) );
      v191 = (*v190)--;
    if ( v191 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v396 - 12);
  if ( (int *)(v396 - 12) != &dword_28898C0 )
    v192 = (unsigned int *)(v396 - 4);
        v193 = __ldrex(v192);
      while ( __strex(v193 - 1, v192) );
      v193 = (*v192)--;
    if ( v193 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v394 - 12);
  if ( (int *)(v394 - 12) != &dword_28898C0 )
    v194 = (unsigned int *)(v394 - 4);
        v195 = __ldrex(v194);
      while ( __strex(v195 - 1, v194) );
      v195 = (*v194)--;
    if ( v195 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v392 - 12);
  if ( (int *)(v392 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v392 - 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v413 - 12);
  if ( (int *)(v413 - 12) != &dword_28898C0 )
    v198 = (unsigned int *)(v413 - 4);
        v199 = __ldrex(v198);
      while ( __strex(v199 - 1, v198) );
      v199 = (*v198)--;
    if ( v199 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v391, "AgentTurnCommand");
  sub_21E94B4((void **)&v386, "turn");
  v387 = 18;
  v388 = 0;
  v389 = 0;
  v390 = 0;
  v38 = j_operator new(8u);
  v388 = v38;
  v390 = (char *)v38 + 8;
  v39 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v386,
          (int)&v388,
          (int)v38);
  v389 = v39;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v391, (unsigned __int64 *)&v388);
  if ( v38 != (void *)v39 )
      v42 = (int *)(*(_DWORD *)v38 - 12);
      if ( v42 != &dword_28898C0 )
        v40 = (unsigned int *)(*(_DWORD *)v38 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v38 = (char *)v38 + 8;
    while ( v38 != (void *)v39 );
    v38 = v388;
  if ( v38 )
    j_operator delete(v38);
  v43 = (void *)(v386 - 12);
  if ( (int *)(v386 - 12) != &dword_28898C0 )
    v200 = (unsigned int *)(v386 - 4);
        v201 = __ldrex(v200);
      while ( __strex(v201 - 1, v200) );
      v201 = (*v200)--;
    if ( v201 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v391 - 12);
  if ( (int *)(v391 - 12) != &dword_28898C0 )
    v202 = (unsigned int *)(v391 - 4);
        v203 = __ldrex(v202);
      while ( __strex(v203 - 1, v202) );
      v203 = (*v202)--;
    if ( v203 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v385, "AgentItemCommand");
  sub_21E94B4((void **)&v376, "getitemcount");
  v377 = 8;
  sub_21E94B4((void **)&v378, "getitemspace");
  v379 = 10;
  sub_21E94B4((void **)&v380, "getitemdetail");
  v381 = 9;
  v382 = 0;
  v383 = 0;
  v384 = 0;
  v45 = j_operator new(0x18u);
  v382 = v45;
  v384 = (char *)v45 + 24;
  v46 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v376,
          (int)&v382,
          (int)v45);
  v383 = v46;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v385, (unsigned __int64 *)&v382);
  if ( v45 != (void *)v46 )
      v49 = (int *)(*(_DWORD *)v45 - 12);
      if ( v49 != &dword_28898C0 )
        v47 = (unsigned int *)(*(_DWORD *)v45 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v49);
      v45 = (char *)v45 + 8;
    while ( v45 != (void *)v46 );
    v45 = v382;
  if ( v45 )
    j_operator delete(v45);
  v50 = (void *)(v380 - 12);
  if ( (int *)(v380 - 12) != &dword_28898C0 )
    v204 = (unsigned int *)(v380 - 4);
        v205 = __ldrex(v204);
      while ( __strex(v205 - 1, v204) );
      v205 = (*v204)--;
    if ( v205 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v378 - 12);
  if ( (int *)(v378 - 12) != &dword_28898C0 )
    v206 = (unsigned int *)(v378 - 4);
        v207 = __ldrex(v206);
      while ( __strex(v207 - 1, v206) );
      v207 = (*v206)--;
    if ( v207 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v376 - 12);
  if ( (int *)(v376 - 12) != &dword_28898C0 )
    v208 = (unsigned int *)(v376 - 4);
        v209 = __ldrex(v208);
      while ( __strex(v209 - 1, v208) );
      v209 = (*v208)--;
    if ( v209 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v385 - 12);
  if ( (int *)(v385 - 12) != &dword_28898C0 )
    v210 = (unsigned int *)(v385 - 4);
        v211 = __ldrex(v210);
      while ( __strex(v211 - 1, v210) );
      v211 = (*v210)--;
    if ( v211 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  sub_21E94B4((void **)&v375, "AgentCommand");
  sub_21E94B4((void **)&v368, "create");
  v369 = 2;
  sub_21E94B4((void **)&v370, "tp");
  v371 = 16;
  v372 = 0;
  v373 = 0;
  v374 = 0;
  v54 = j_operator new(0x10u);
  v372 = v54;
  v374 = (char *)v54 + 16;
  v55 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v368,
          (int)&v372,
          (int)v54);
  v373 = v55;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v375, (unsigned __int64 *)&v372);
  if ( v54 != (void *)v55 )
      v58 = (int *)(*(_DWORD *)v54 - 12);
      if ( v58 != &dword_28898C0 )
        v56 = (unsigned int *)(*(_DWORD *)v54 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v58);
      v54 = (char *)v54 + 8;
    while ( v54 != (void *)v55 );
    v54 = v372;
  if ( v54 )
    j_operator delete(v54);
  v59 = (void *)(v370 - 12);
  if ( (int *)(v370 - 12) != &dword_28898C0 )
    v212 = (unsigned int *)(v370 - 4);
        v213 = __ldrex(v212);
      while ( __strex(v213 - 1, v212) );
      v213 = (*v212)--;
    if ( v213 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (void *)(v368 - 12);
  if ( (int *)(v368 - 12) != &dword_28898C0 )
    v214 = (unsigned int *)(v368 - 4);
        v215 = __ldrex(v214);
      while ( __strex(v215 - 1, v214) );
      v215 = (*v214)--;
    if ( v215 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = (void *)(v375 - 12);
  if ( (int *)(v375 - 12) != &dword_28898C0 )
    v216 = (unsigned int *)(v375 - 4);
        v217 = __ldrex(v216);
      while ( __strex(v217 - 1, v216) );
      v217 = (*v216)--;
    if ( v217 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  sub_21E94B4((void **)&v367, "AgentTransferCommand");
  sub_21E94B4((void **)&v362, "transfer");
  v363 = 17;
  v364 = 0;
  v365 = 0;
  v366 = 0;
  v62 = j_operator new(8u);
  v364 = v62;
  v366 = (char *)v62 + 8;
  v63 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v362,
          (int)&v364,
          (int)v62);
  v365 = v63;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v367, (unsigned __int64 *)&v364);
  if ( v62 != (void *)v63 )
      v66 = (int *)(*(_DWORD *)v62 - 12);
      if ( v66 != &dword_28898C0 )
        v64 = (unsigned int *)(*(_DWORD *)v62 - 4);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 <= 0 )
          j_j_j_j__ZdlPv_9(v66);
      v62 = (char *)v62 + 8;
    while ( v62 != (void *)v63 );
    v62 = v364;
  if ( v62 )
    j_operator delete(v62);
  v67 = (void *)(v362 - 12);
  if ( (int *)(v362 - 12) != &dword_28898C0 )
    v218 = (unsigned int *)(v362 - 4);
        v219 = __ldrex(v218);
      while ( __strex(v219 - 1, v218) );
      v219 = (*v218)--;
    if ( v219 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v367 - 12);
  if ( (int *)(v367 - 12) != &dword_28898C0 )
    v220 = (unsigned int *)(v367 - 4);
        v221 = __ldrex(v220);
      while ( __strex(v221 - 1, v220) );
      v221 = (*v220)--;
    if ( v221 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  sub_21E94B4((void **)&v361, "AgentDropCommand");
  sub_21E94B4((void **)&v356, "drop");
  v357 = 6;
  v358 = 0;
  v359 = 0;
  v360 = 0;
  v69 = j_operator new(8u);
  v358 = v69;
  v360 = (char *)v69 + 8;
  v70 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v356,
          (int)&v358,
          (int)v69);
  v359 = v70;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v361, (unsigned __int64 *)&v358);
  if ( v69 != (void *)v70 )
      v73 = (int *)(*(_DWORD *)v69 - 12);
      if ( v73 != &dword_28898C0 )
        v71 = (unsigned int *)(*(_DWORD *)v69 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v73);
      v69 = (char *)v69 + 8;
    while ( v69 != (void *)v70 );
    v69 = v358;
  if ( v69 )
    j_operator delete(v69);
  v74 = (void *)(v356 - 12);
  if ( (int *)(v356 - 12) != &dword_28898C0 )
    v222 = (unsigned int *)(v356 - 4);
        v223 = __ldrex(v222);
      while ( __strex(v223 - 1, v222) );
      v223 = (*v222)--;
    if ( v223 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  v75 = (void *)(v361 - 12);
  if ( (int *)(v361 - 12) != &dword_28898C0 )
    v224 = (unsigned int *)(v361 - 4);
        v225 = __ldrex(v224);
      while ( __strex(v225 - 1, v224) );
      v225 = (*v224)--;
    if ( v225 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  sub_21E94B4((void **)&v355, "AgentPlaceCommand");
  sub_21E94B4((void **)&v350, "place");
  v351 = 14;
  v352 = 0;
  v353 = 0;
  v354 = 0;
  v76 = j_operator new(8u);
  v352 = v76;
  v354 = (char *)v76 + 8;
  v77 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v350,
          (int)&v352,
          (int)v76);
  v353 = v77;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v355, (unsigned __int64 *)&v352);
  if ( v76 != (void *)v77 )
      v80 = (int *)(*(_DWORD *)v76 - 12);
      if ( v80 != &dword_28898C0 )
        v78 = (unsigned int *)(*(_DWORD *)v76 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j__ZdlPv_9(v80);
      v76 = (char *)v76 + 8;
    while ( v76 != (void *)v77 );
    v76 = v352;
  if ( v76 )
    j_operator delete(v76);
  v81 = (void *)(v350 - 12);
  if ( (int *)(v350 - 12) != &dword_28898C0 )
    v226 = (unsigned int *)(v350 - 4);
        v227 = __ldrex(v226);
      while ( __strex(v227 - 1, v226) );
      v227 = (*v226)--;
    if ( v227 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  v82 = (void *)(v355 - 12);
  if ( (int *)(v355 - 12) != &dword_28898C0 )
    v228 = (unsigned int *)(v355 - 4);
        v229 = __ldrex(v228);
      while ( __strex(v229 - 1, v228) );
      v229 = (*v228)--;
    if ( v229 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  sub_21E94B4((void **)&v349, "AgentCollectCommand");
  sub_21E94B4((void **)&v344, "collect");
  v345 = 1;
  v346 = 0;
  v347 = 0;
  v348 = 0;
  v83 = j_operator new(8u);
  v346 = v83;
  v348 = (char *)v83 + 8;
  v84 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommand::Mode> const*,std::pair<std::string,AgentCommand::Mode>*>(
          (int)&v344,
          (int)&v346,
          (int)v83);
  v347 = v84;
  j_CommandRegistry::addEnumValues<AgentCommand::Mode>((int)v2, (int)&v349, (unsigned __int64 *)&v346);
  if ( v83 != (void *)v84 )
      v87 = (int *)(*(_DWORD *)v83 - 12);
      if ( v87 != &dword_28898C0 )
        v85 = (unsigned int *)(*(_DWORD *)v83 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v87);
      v83 = (char *)v83 + 8;
    while ( v83 != (void *)v84 );
    v83 = v346;
  if ( v83 )
    j_operator delete(v83);
  v88 = (void *)(v344 - 12);
  if ( (int *)(v344 - 12) != &dword_28898C0 )
    v230 = (unsigned int *)(v344 - 4);
        v231 = __ldrex(v230);
      while ( __strex(v231 - 1, v230) );
      v231 = (*v230)--;
    if ( v231 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v89 = (void *)(v349 - 12);
  if ( (int *)(v349 - 12) != &dword_28898C0 )
    v232 = (unsigned int *)(v349 - 4);
        v233 = __ldrex(v232);
      while ( __strex(v233 - 1, v232) );
      v233 = (*v232)--;
    if ( v233 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  sub_21E94B4((void **)&v343, "AgentCollectAllItems");
  sub_21E94B4((void **)&v338, "all");
  v339 = 1;
  v340 = 0;
  v341 = 0;
  v342 = 0;
  v90 = j_operator new(8u);
  v340 = v90;
  v342 = (char *)v90 + 8;
  v91 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,AgentCommands::CollectCommand::CollectionSpecification> const*,std::pair<std::string,AgentCommands::CollectCommand::CollectionSpecification>*>(
          (int)&v338,
          (int)&v340,
          (int)v90);
  v341 = v91;
  j_CommandRegistry::addEnumValues<AgentCommands::CollectCommand::CollectionSpecification>(
    (int)v2,
    (int)&v343,
    (unsigned __int64 *)&v340);
  if ( v90 != (void *)v91 )
      v94 = (int *)(*(_DWORD *)v90 - 12);
      if ( v94 != &dword_28898C0 )
        v92 = (unsigned int *)(*(_DWORD *)v90 - 4);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j__ZdlPv_9(v94);
      v90 = (char *)v90 + 8;
    while ( v90 != (void *)v91 );
    v90 = v340;
  if ( v90 )
    j_operator delete(v90);
  v95 = (void *)(v338 - 12);
  if ( (int *)(v338 - 12) != &dword_28898C0 )
    v234 = (unsigned int *)(v338 - 4);
        v235 = __ldrex(v234);
      while ( __strex(v235 - 1, v234) );
      v235 = (*v234)--;
    if ( v235 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  v96 = (void *)(v343 - 12);
  if ( (int *)(v343 - 12) != &dword_28898C0 )
    v236 = (unsigned int *)(v343 - 4);
        v237 = __ldrex(v236);
      while ( __strex(v237 - 1, v236) );
      v237 = (*v236)--;
    if ( v237 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  sub_21E94B4((void **)&v337, "agent");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v337, "commands.agent.description", 1, 2, 0);
  v98 = (void *)(v337 - 12);
  if ( (int *)(v337 - 12) != &dword_28898C0 )
    v238 = v337 - 4;
        v239 = __ldrex((unsigned int *)v97);
        HIDWORD(v97) = v239 - 1;
      while ( __strex(v239 - 1, (unsigned int *)v97) );
      v239 = *(_DWORD *)v97;
      HIDWORD(v97) = *(_DWORD *)v97 - 1;
      *(_DWORD *)v97 = HIDWORD(v97);
    if ( v239 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  LODWORD(v97) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v336, 1, v97);
  v99 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  __dmb();
  if ( !(v99 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id) )
    type_id<CommandRegistry,AgentCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id);
  v449 = type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v334,
    &v449,
    (unsigned int)CommandRegistry::parse<AgentCommand::Mode>,
    "command",
    1,
    (int)"AgentDirectionCommand",
    20,
    0,
    -1);
  v100 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  if ( !(v100 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id) )
    type_id<CommandRegistry,AgentCommands::Direction>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id);
  v438 = type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  v101 = j_CommandParameterData::CommandParameterData(
           (int)&v332,
           &v438,
           (unsigned int)CommandRegistry::parse<AgentCommands::Direction>,
           "direction",
           1,
           (int)"AgentDirection",
           28,
           0,
           -1);
  j_CommandRegistry::registerOverload<AgentCommand,CommandParameterData,CommandParameterData>(
    "agent",
    v336,
    v101);
  v103 = (void *)(v333 - 12);
  if ( (int *)(v333 - 12) != &dword_28898C0 )
    v240 = v333 - 4;
        v241 = __ldrex((unsigned int *)v102);
        HIDWORD(v102) = v241 - 1;
      while ( __strex(v241 - 1, (unsigned int *)v102) );
      v241 = *(_DWORD *)v102;
      HIDWORD(v102) = *(_DWORD *)v102 - 1;
      *(_DWORD *)v102 = HIDWORD(v102);
    if ( v241 <= 0 )
      j_j_j_j__ZdlPv_9(v103);
  v104 = (void *)(v335 - 12);
  if ( (int *)(v335 - 12) != &dword_28898C0 )
    v242 = v335 - 4;
        v243 = __ldrex((unsigned int *)v102);
        HIDWORD(v102) = v243 - 1;
      while ( __strex(v243 - 1, (unsigned int *)v102) );
      v243 = *(_DWORD *)v102;
    if ( v243 <= 0 )
      j_j_j_j__ZdlPv_9(v104);
  LODWORD(v102) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v331, 1, v102);
  v105 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v105 & 1)
    (int)&v329,
    (int)"AgentTurnCommand",
  v106 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  if ( !(v106 & 1)
  v439 = type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  v107 = j_CommandParameterData::CommandParameterData(
           (int)&v327,
           &v439,
           (int)"AgentTurnDirection",
    v331,
    v107);
  v109 = (void *)(v328 - 12);
  if ( (int *)(v328 - 12) != &dword_28898C0 )
    v244 = v328 - 4;
        v245 = __ldrex((unsigned int *)v108);
        HIDWORD(v108) = v245 - 1;
      while ( __strex(v245 - 1, (unsigned int *)v108) );
      v245 = *(_DWORD *)v108;
      HIDWORD(v108) = *(_DWORD *)v108 - 1;
      *(_DWORD *)v108 = HIDWORD(v108);
    if ( v245 <= 0 )
      j_j_j_j__ZdlPv_9(v109);
  v110 = (void *)(v330 - 12);
  if ( (int *)(v330 - 12) != &dword_28898C0 )
    v246 = v330 - 4;
        v247 = __ldrex((unsigned int *)v108);
        HIDWORD(v108) = v247 - 1;
      while ( __strex(v247 - 1, (unsigned int *)v108) );
      v247 = *(_DWORD *)v108;
    if ( v247 <= 0 )
      j_j_j_j__ZdlPv_9(v110);
  LODWORD(v108) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v326, 1, v108);
  v111 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v111 & 1)
    (int)&v324,
    (int)"AgentItemCommand",
  v112 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v112 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v440 = type_id<CommandRegistry,int>(void)::id;
  v113 = j_CommandParameterData::CommandParameterData(
           (int)&v322,
           &v440,
           (unsigned int)CommandRegistry::parse<int>,
           "slotNum",
           40,
    v326,
    v113);
  v115 = (void *)(v323 - 12);
  if ( (int *)(v323 - 12) != &dword_28898C0 )
    v248 = v323 - 4;
        v249 = __ldrex((unsigned int *)v114);
        HIDWORD(v114) = v249 - 1;
      while ( __strex(v249 - 1, (unsigned int *)v114) );
      v249 = *(_DWORD *)v114;
      HIDWORD(v114) = *(_DWORD *)v114 - 1;
      *(_DWORD *)v114 = HIDWORD(v114);
    if ( v249 <= 0 )
      j_j_j_j__ZdlPv_9(v115);
  v116 = (void *)(v325 - 12);
  if ( (int *)(v325 - 12) != &dword_28898C0 )
    v250 = v325 - 4;
        v251 = __ldrex((unsigned int *)v114);
        HIDWORD(v114) = v251 - 1;
      while ( __strex(v251 - 1, (unsigned int *)v114) );
      v251 = *(_DWORD *)v114;
    if ( v251 <= 0 )
      j_j_j_j__ZdlPv_9(v116);
  LODWORD(v114) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v321, 1, v114);
  v117 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v117 & 1)
  v118 = j_CommandParameterData::CommandParameterData(
           (int)&v319,
           &v449,
           (unsigned int)CommandRegistry::parse<AgentCommand::Mode>,
           "command",
           (int)"AgentCommand",
           20,
  j_CommandRegistry::registerOverload<AgentCommand,CommandParameterData>((int)v2, "agent", v321, v118);
  v120 = (void *)(v320 - 12);
  if ( (int *)(v320 - 12) != &dword_28898C0 )
    v252 = v320 - 4;
        v253 = __ldrex((unsigned int *)v119);
        HIDWORD(v119) = v253 - 1;
      while ( __strex(v253 - 1, (unsigned int *)v119) );
      v253 = *(_DWORD *)v119;
      HIDWORD(v119) = *(_DWORD *)v119 - 1;
      *(_DWORD *)v119 = HIDWORD(v119);
    if ( v253 <= 0 )
      j_j_j_j__ZdlPv_9(v120);
  LODWORD(v119) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v318, 1, v119);
  v121 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v121 & 1)
    (int)&v316,
    (int)"AgentTransferCommand",
  v122 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v122 & 1)
  v441 = type_id<CommandRegistry,int>(void)::id;
    (int)&v314,
    &v441,
    (unsigned int)CommandRegistry::parse<int>,
    "slotNum",
    40,
  v123 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v123 & 1)
  v442 = type_id<CommandRegistry,int>(void)::id;
    (int)&v312,
    &v442,
    "quantity",
    48,
  v124 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v124 & 1)
  v443 = type_id<CommandRegistry,int>(void)::id;
  v125 = j_CommandParameterData::CommandParameterData(
           (int)&v310,
           &v443,
           "dstSlotNum",
           44,
  j_CommandRegistry::registerOverload<AgentCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v318,
    v125);
  v127 = (void *)(v311 - 12);
  if ( (int *)(v311 - 12) != &dword_28898C0 )
    v254 = v311 - 4;
        v255 = __ldrex((unsigned int *)v126);
        HIDWORD(v126) = v255 - 1;
      while ( __strex(v255 - 1, (unsigned int *)v126) );
      v255 = *(_DWORD *)v126;
      HIDWORD(v126) = *(_DWORD *)v126 - 1;
      *(_DWORD *)v126 = HIDWORD(v126);
    if ( v255 <= 0 )
      j_j_j_j__ZdlPv_9(v127);
  v128 = (void *)(v313 - 12);
  if ( (int *)(v313 - 12) != &dword_28898C0 )
    v256 = v313 - 4;
        v257 = __ldrex((unsigned int *)v126);
        HIDWORD(v126) = v257 - 1;
      while ( __strex(v257 - 1, (unsigned int *)v126) );
      v257 = *(_DWORD *)v126;
    if ( v257 <= 0 )
      j_j_j_j__ZdlPv_9(v128);
  v129 = (void *)(v315 - 12);
  if ( (int *)(v315 - 12) != &dword_28898C0 )
    v258 = v315 - 4;
        v259 = __ldrex((unsigned int *)v126);
        HIDWORD(v126) = v259 - 1;
      while ( __strex(v259 - 1, (unsigned int *)v126) );
      v259 = *(_DWORD *)v126;
    if ( v259 <= 0 )
      j_j_j_j__ZdlPv_9(v129);
  v130 = (void *)(v317 - 12);
  if ( (int *)(v317 - 12) != &dword_28898C0 )
    v260 = v317 - 4;
        v261 = __ldrex((unsigned int *)v126);
        HIDWORD(v126) = v261 - 1;
      while ( __strex(v261 - 1, (unsigned int *)v126) );
      v261 = *(_DWORD *)v126;
    if ( v261 <= 0 )
      j_j_j_j__ZdlPv_9(v130);
  LODWORD(v126) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v309, 1, v126);
  v131 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v131 & 1)
    (int)&v307,
    (int)"AgentDropCommand",
  v132 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v132 & 1)
  v444 = type_id<CommandRegistry,int>(void)::id;
    (int)&v305,
    &v444,
  v133 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v133 & 1)
  v445 = type_id<CommandRegistry,int>(void)::id;
    (int)&v303,
    &v445,
  v134 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  if ( !(v134 & 1)
  v446 = type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  v135 = j_CommandParameterData::CommandParameterData(
           (int)&v301,
           &v446,
    v309,
    v135);
  v137 = (void *)(v302 - 12);
  if ( (int *)(v302 - 12) != &dword_28898C0 )
    v262 = v302 - 4;
        v263 = __ldrex((unsigned int *)v136);
        HIDWORD(v136) = v263 - 1;
      while ( __strex(v263 - 1, (unsigned int *)v136) );
      v263 = *(_DWORD *)v136;
      HIDWORD(v136) = *(_DWORD *)v136 - 1;
      *(_DWORD *)v136 = HIDWORD(v136);
    if ( v263 <= 0 )
      j_j_j_j__ZdlPv_9(v137);
  v138 = (void *)(v304 - 12);
  if ( (int *)(v304 - 12) != &dword_28898C0 )
    v264 = v304 - 4;
        v265 = __ldrex((unsigned int *)v136);
        HIDWORD(v136) = v265 - 1;
      while ( __strex(v265 - 1, (unsigned int *)v136) );
      v265 = *(_DWORD *)v136;
    if ( v265 <= 0 )
      j_j_j_j__ZdlPv_9(v138);
  v139 = (void *)(v306 - 12);
  if ( (int *)(v306 - 12) != &dword_28898C0 )
    v266 = v306 - 4;
        v267 = __ldrex((unsigned int *)v136);
        HIDWORD(v136) = v267 - 1;
      while ( __strex(v267 - 1, (unsigned int *)v136) );
      v267 = *(_DWORD *)v136;
    if ( v267 <= 0 )
      j_j_j_j__ZdlPv_9(v139);
  v140 = (void *)(v308 - 12);
  if ( (int *)(v308 - 12) != &dword_28898C0 )
    v268 = v308 - 4;
        v269 = __ldrex((unsigned int *)v136);
        HIDWORD(v136) = v269 - 1;
      while ( __strex(v269 - 1, (unsigned int *)v136) );
      v269 = *(_DWORD *)v136;
    if ( v269 <= 0 )
      j_j_j_j__ZdlPv_9(v140);
  LODWORD(v136) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v300, 1, v136);
  v141 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v141 & 1)
    (int)&v298,
    (int)"AgentCollectCommand",
  v142 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id;
  if ( !(v142 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id) )
    type_id<CommandRegistry,CommandItem>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id);
  v447 = type_id<CommandRegistry,CommandItem>(void)::id[0];
  v143 = j_CommandParameterData::CommandParameterData(
           (int)&v296,
           &v447,
           (unsigned int)CommandRegistry::parse<CommandItem>,
           "item",
           32,
    v300,
    v143);
  v145 = (void *)(v297 - 12);
  if ( (int *)(v297 - 12) != &dword_28898C0 )
    v270 = v297 - 4;
        v271 = __ldrex((unsigned int *)v144);
        HIDWORD(v144) = v271 - 1;
      while ( __strex(v271 - 1, (unsigned int *)v144) );
      v271 = *(_DWORD *)v144;
      HIDWORD(v144) = *(_DWORD *)v144 - 1;
      *(_DWORD *)v144 = HIDWORD(v144);
    if ( v271 <= 0 )
      j_j_j_j__ZdlPv_9(v145);
  v146 = (void *)(v299 - 12);
  if ( (int *)(v299 - 12) != &dword_28898C0 )
    v272 = v299 - 4;
        v273 = __ldrex((unsigned int *)v144);
        HIDWORD(v144) = v273 - 1;
      while ( __strex(v273 - 1, (unsigned int *)v144) );
      v273 = *(_DWORD *)v144;
    if ( v273 <= 0 )
      j_j_j_j__ZdlPv_9(v146);
  LODWORD(v144) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v295, 1, v144);
  v147 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v147 & 1)
    (int)&v293,
  v148 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id;
  if ( !(v148 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id) )
    type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id);
  v448 = type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id;
  v149 = j_CommandParameterData::CommandParameterData(
           (int)&v291,
           &v448,
           (unsigned int)CommandRegistry::parse<AgentCommands::CollectCommand::CollectionSpecification>,
           24,
    v295,
    v149);
  v151 = (void *)(v292 - 12);
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v274 = v292 - 4;
        v275 = __ldrex((unsigned int *)v150);
        HIDWORD(v150) = v275 - 1;
      while ( __strex(v275 - 1, (unsigned int *)v150) );
      v275 = *(_DWORD *)v150;
      HIDWORD(v150) = *(_DWORD *)v150 - 1;
      *(_DWORD *)v150 = HIDWORD(v150);
    if ( v275 <= 0 )
      j_j_j_j__ZdlPv_9(v151);
  v152 = (void *)(v294 - 12);
  if ( (int *)(v294 - 12) != &dword_28898C0 )
    v276 = v294 - 4;
        v277 = __ldrex((unsigned int *)v150);
        HIDWORD(v150) = v277 - 1;
      while ( __strex(v277 - 1, (unsigned int *)v150) );
      v277 = *(_DWORD *)v150;
    if ( v277 <= 0 )
      j_j_j_j__ZdlPv_9(v152);
  LODWORD(v150) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v290, 1, v150);
  v153 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  if ( !(v153 & 1)
    (int)&v288,
    (int)"AgentPlaceCommand",
  v154 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v154 & 1)
  v450 = type_id<CommandRegistry,int>(void)::id;
    (int)&v286,
    &v450,
  v155 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  if ( !(v155 & 1)
  v451 = type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  v156 = j_CommandParameterData::CommandParameterData(
           (int)&v284,
           &v451,
  j_CommandRegistry::registerOverload<AgentCommand,CommandParameterData,CommandParameterData,CommandParameterData>(
    v290,
    v156);
  v157 = (void *)(v285 - 12);
  if ( (int *)(v285 - 12) != &dword_28898C0 )
    v278 = (unsigned int *)(v285 - 4);
        v279 = __ldrex(v278);
      while ( __strex(v279 - 1, v278) );
      v279 = (*v278)--;
    if ( v279 <= 0 )
      j_j_j_j__ZdlPv_9(v157);
  v158 = (void *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v280 = (unsigned int *)(v287 - 4);
        v281 = __ldrex(v280);
      while ( __strex(v281 - 1, v280) );
      v281 = (*v280)--;
    if ( v281 <= 0 )
      j_j_j_j__ZdlPv_9(v158);
  v159 = (void *)(v289 - 12);
  if ( (int *)(v289 - 12) != &dword_28898C0 )
    v282 = (unsigned int *)(v289 - 4);
        v283 = __ldrex(v282);
      while ( __strex(v283 - 1, v282) );
      v283 = (*v282)--;
    if ( v283 <= 0 )
      j_j_j_j__ZdlPv_9(v159);
}


signed int __fastcall AgentCommand::validateRange(AgentCommand *this, Agent *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  Agent *v4; // r7@1
  AgentCommand *v5; // r6@1
  const CommandOrigin *v6; // r5@1
  int v7; // r9@1
  signed int v8; // r0@1
  int v14; // r7@7
  signed int result; // r0@8
  void *v16; // r5@9
  void *v17; // r7@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  int *v20; // r0@19
  void *v21; // r0@24
  void (__fastcall *v22)(int, int *, __int64 *, _DWORD); // r4@26
  void *v23; // r4@26
  void *v24; // r6@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  int *v27; // r0@36
  void *v28; // r0@41
  unsigned int *v29; // r2@43
  signed int v30; // r1@45
  unsigned int *v31; // r2@47
  signed int v32; // r1@49
  __int64 v33; // [sp+0h] [bp-58h]@26
  int v34; // [sp+8h] [bp-50h]@26
  int v35; // [sp+10h] [bp-48h]@26
  __int64 v36; // [sp+14h] [bp-44h]@9
  int v37; // [sp+1Ch] [bp-3Ch]@9
  int v38; // [sp+24h] [bp-34h]@9
  float v39; // [sp+28h] [bp-30h]@5

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = j_Command::getPlayerFromOrigin(a2, a2);
  v8 = 0;
  if ( !v7 )
    v8 = 1;
  if ( !v5 )
    goto LABEL_61;
  if ( v8 )
  (*(void (__fastcall **)(float *, Agent *))(*(_DWORD *)v4 + 20))(&v39, v4);
  _R0 = (*(int (__fastcall **)(AgentCommand *))(*(_DWORD *)v5 + 52))(v5);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S6, [SP,#0x58+var_30]
    VLDR            S2, [R0,#4]
    VLDR            S8, [SP,#0x58+var_2C]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R0,#8]
    VSUB.F32        S2, S2, S8
    VLDR            S10, [SP,#0x58+var_28]
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =4096.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
  v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 524))(v7);
  if ( v14 == (*(int (__fastcall **)(AgentCommand *))(*(_DWORD *)v5 + 524))(v5) )
    result = 1;
  else
LABEL_61:
    sub_21E94B4((void **)&v38, "commands.agent.outofrange");
    v36 = 0LL;
    v37 = 0;
    j_CommandOutput::error(v6, &v38, (unsigned __int64 *)&v36);
    v17 = (void *)HIDWORD(v36);
    v16 = (void *)v36;
    if ( (_DWORD)v36 != HIDWORD(v36) )
    {
      do
      {
        v20 = (int *)(*(_DWORD *)v16 - 12);
        if ( v20 != &dword_28898C0 )
        {
          v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        }
        v16 = (char *)v16 + 8;
      }
      while ( v16 != v17 );
      v16 = (void *)v36;
    }
    if ( v16 )
      j_operator delete(v16);
    v21 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    if ( v7 )
      v22 = *(void (__fastcall **)(int, int *, __int64 *, _DWORD))(*(_DWORD *)v7 + 1376);
      sub_21E94B4((void **)&v35, "commands.agent.outofrange");
      v33 = 0LL;
      v34 = 0;
      v22(v7, &v35, &v33, 0);
      v24 = (void *)HIDWORD(v33);
      v23 = (void *)v33;
      if ( (_DWORD)v33 != HIDWORD(v33) )
          v27 = (int *)(*(_DWORD *)v23 - 12);
          if ( v27 != &dword_28898C0 )
            v25 = (unsigned int *)(*(_DWORD *)v23 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
            }
            else
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          v23 = (char *)v23 + 4;
        while ( v23 != v24 );
        v23 = (void *)v33;
      if ( v23 )
        j_operator delete(v23);
      v28 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v35 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
    result = 0;
  return result;
}


void __fastcall AgentCommand::transfer(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::transfer(this, a2, a3, a4);
}


void __fastcall AgentCommand::createAgent(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  Player *v4; // r9@1
  CommandOutput *v5; // r5@1
  const BlockPos *v6; // r7@1
  int *v7; // r0@1
  int *v8; // r0@1
  Entity *v9; // r0@1
  Agent *v10; // r11@1
  void *v11; // r5@2
  void *v12; // r7@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  int *v15; // r0@12
  void *v16; // r0@17
  int v17; // r0@19
  __int64 v18; // r1@19
  void *v25; // r0@20
  void *v26; // r0@21
  void *v27; // r0@22
  int v28; // r0@24
  int v29; // r2@24
  int (*v30)(void); // r3@24
  Agent *v31; // r11@24
  void (__fastcall *v32)(Agent *); // r4@27
  __int64 v33; // r2@27
  void *v34; // r5@27
  void *v35; // r7@27
  void *v36; // r4@29
  void *v37; // r6@29
  unsigned int *v38; // r2@31
  signed int v39; // r1@33
  int *v40; // r0@39
  void *v41; // r0@44
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  void *v44; // r4@49
  void *v45; // r6@49
  unsigned int *v46; // r2@51
  signed int v47; // r1@53
  int *v48; // r0@59
  void *v49; // r0@64
  unsigned int *v50; // r2@65
  signed int v51; // r1@67
  unsigned int *v52; // r2@69
  signed int v53; // r1@71
  int *v54; // r0@77
  void *v55; // r0@82
  void *v56; // r4@86
  void *v57; // r0@90
  unsigned int *v58; // r2@92
  signed int v59; // r1@94
  unsigned int *v60; // r2@96
  signed int v61; // r1@98
  unsigned int *v62; // r2@108
  signed int v63; // r1@110
  unsigned int *v64; // r2@112
  signed int v65; // r1@114
  unsigned int *v66; // r2@116
  signed int v67; // r1@118
  unsigned int *v68; // r2@132
  signed int v69; // r1@134
  __int64 v70; // [sp+8h] [bp-C0h]@29
  int v71; // [sp+10h] [bp-B8h]@29
  int v72; // [sp+18h] [bp-B0h]@29
  __int64 v73; // [sp+1Ch] [bp-ACh]@27
  int v74; // [sp+24h] [bp-A4h]@27
  int v75; // [sp+2Ch] [bp-9Ch]@27
  int v76; // [sp+30h] [bp-98h]@24
  int v77; // [sp+34h] [bp-94h]@20
  int v78; // [sp+38h] [bp-90h]@21
  int v79; // [sp+3Ch] [bp-8Ch]@20
  int v80; // [sp+40h] [bp-88h]@20
  __int64 v81; // [sp+44h] [bp-84h]@49
  int v82; // [sp+4Ch] [bp-7Ch]@49
  int v83; // [sp+54h] [bp-74h]@49
  char v84; // [sp+58h] [bp-70h]@19
  int v85; // [sp+64h] [bp-64h]@19
  __int64 x; // [sp+68h] [bp-60h]@19
  float v87; // [sp+70h] [bp-58h]@19
  __int64 v88; // [sp+74h] [bp-54h]@2
  int v89; // [sp+7Ch] [bp-4Ch]@2
  int v90; // [sp+84h] [bp-44h]@2
  int v91; // [sp+88h] [bp-40h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (int *)(*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 188))(a2);
  v8 = sub_21E8AF4(&v91, v7);
  sub_21E7408((const void **)v8, ".Agent", 6u);
  v9 = j_Player::getAgent(v4);
  v10 = v9;
  if ( v9 )
  {
    (*(void (**)(void))(*(_DWORD *)v9 + 200))();
    j_CommandOutput::set<bool>((int)v5, "wasSpawned", 0);
    sub_21E94B4((void **)&v90, "commands.agent.createagent.success");
    v88 = 0LL;
    v89 = 0;
    j_CommandOutput::success((int)v5, &v90, (unsigned __int64 *)&v88);
    v12 = (void *)HIDWORD(v88);
    v11 = (void *)v88;
    if ( (_DWORD)v88 != HIDWORD(v88) )
    {
      do
      {
        v15 = (int *)(*(_DWORD *)v11 - 12);
        if ( v15 != &dword_28898C0 )
        {
          v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
            j_j_j_j__ZdlPv_9(v15);
        }
        v11 = (char *)v11 + 8;
      }
      while ( v11 != v12 );
      v11 = (void *)v88;
    }
    if ( v11 )
      j_operator delete(v11);
    v16 = (void *)(v90 - 12);
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v90 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      else
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    j_Agent::tryFireCreateEvent(v10, v4);
  }
  else
    v17 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 52))(v4);
    v18 = *(_QWORD *)v17;
    v87 = *(float *)(v17 + 8);
    x = v18;
    _R0 = j_floorf_0(*(float *)&v18);
    __asm
      VMOV.F32        S16, #0.5
      VMOV            S0, R0
      VADD.F32        S18, S0, S16
    _R0 = j_floorf_0(v87);
      VSTR            S18, [SP,#0xC8+x]
      VADD.F32        S16, S0, S16
    HIDWORD(x) = j_floorf_0(*((float *)v4 + 67));
    __asm { VSTR            S16, [SP,#0xC8+var_58] }
    j_BlockPos::BlockPos((int)&v84, (int)&x);
    j_CommandOrigin::getAreaAt((CommandOrigin *)&v85, v6, (const BlockPos *)&v84);
    if ( v85 )
      j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v77, 312);
      j_EntityFactory::createSpawnedEntity((Entity **)&v80, (const void **)&v77, 0, (int)&x, &Vec2::ZERO);
      v25 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
        else
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      v26 = (void *)(v78 - 12);
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v64 = (unsigned int *)(v78 - 4);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      v27 = (void *)(v77 - 12);
      if ( (int *)(v77 - 12) != &dword_28898C0 )
        v66 = (unsigned int *)(v77 - 4);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      if ( !v80 )
        goto LABEL_149;
      v28 = j_BlockSource::getLevel((BlockSource *)(v85 + 8));
      v29 = v80;
      v30 = *(int (**)(void))(*(_DWORD *)v28 + 52);
      v80 = 0;
      v76 = v29;
      v31 = (Agent *)v30();
      if ( v76 )
        (*(void (**)(void))(*(_DWORD *)v76 + 32))();
      v76 = 0;
      if ( v31 )
        j_Player::setAgent(v4, v31);
        v32 = *(void (__fastcall **)(Agent *))(*(_DWORD *)v31 + 348);
        v33 = *(_QWORD *)j_Entity::getUniqueID(v4);
        v32(v31);
        (*(void (__fastcall **)(Agent *, int *))(*(_DWORD *)v31 + 200))(v31, &v91);
        j_CommandOutput::set<bool>((int)v5, "wasSpawned", 1);
        sub_21E94B4((void **)&v75, "commands.agent.createagent.success");
        v73 = 0LL;
        v74 = 0;
        j_CommandOutput::success((int)v5, &v75, (unsigned __int64 *)&v73);
        v35 = (void *)HIDWORD(v73);
        v34 = (void *)v73;
        if ( (_DWORD)v73 != HIDWORD(v73) )
            v54 = (int *)(*(_DWORD *)v34 - 12);
            if ( v54 != &dword_28898C0 )
            {
              v52 = (unsigned int *)(*(_DWORD *)v34 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v53 = __ldrex(v52);
                while ( __strex(v53 - 1, v52) );
              }
              else
                v53 = (*v52)--;
              if ( v53 <= 0 )
                j_j_j_j__ZdlPv_9(v54);
            }
            v34 = (char *)v34 + 8;
          while ( v34 != v35 );
          v34 = (void *)v73;
        if ( v34 )
          j_operator delete(v34);
        v55 = (void *)(v75 - 12);
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v68 = (unsigned int *)(v75 - 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j__ZdlPv_9(v55);
        j_Agent::tryFireCreateEvent(v31, v4);
LABEL_149:
        sub_21E94B4((void **)&v72, "commands.agent.createagent.failed");
        v70 = 0LL;
        v71 = 0;
        j_CommandOutput::error(v5, &v72, (unsigned __int64 *)&v70);
        v37 = (void *)HIDWORD(v70);
        v36 = (void *)v70;
        if ( (_DWORD)v70 != HIDWORD(v70) )
            v40 = (int *)(*(_DWORD *)v36 - 12);
            if ( v40 != &dword_28898C0 )
              v38 = (unsigned int *)(*(_DWORD *)v36 - 4);
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
                v39 = (*v38)--;
              if ( v39 <= 0 )
                j_j_j_j__ZdlPv_9(v40);
            v36 = (char *)v36 + 8;
          while ( v36 != v37 );
          v36 = (void *)v70;
        if ( v36 )
          j_operator delete(v36);
        v41 = (void *)(v72 - 12);
        if ( (int *)(v72 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v72 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
      if ( v80 )
        (*(void (**)(void))(*(_DWORD *)v80 + 32))();
    else
      sub_21E94B4((void **)&v83, "commands.agent.createagent.failed");
      v81 = 0LL;
      v82 = 0;
      j_CommandOutput::error(v5, &v83, (unsigned __int64 *)&v81);
      v45 = (void *)HIDWORD(v81);
      v44 = (void *)v81;
      if ( (_DWORD)v81 != HIDWORD(v81) )
          v48 = (int *)(*(_DWORD *)v44 - 12);
          if ( v48 != &dword_28898C0 )
            v46 = (unsigned int *)(*(_DWORD *)v44 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
            else
              v47 = (*v46)--;
            if ( v47 <= 0 )
              j_j_j_j__ZdlPv_9(v48);
          v44 = (char *)v44 + 8;
        while ( v44 != v45 );
        v44 = (void *)v81;
      if ( v44 )
        j_operator delete(v44);
      v49 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v83 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v49);
    v56 = (void *)v85;
      j_BlockSource::~BlockSource((BlockSource *)(v85 + 8));
      if ( *(_DWORD *)v56 )
        (*(void (**)(void))(**(_DWORD **)v56 + 4))();
      j_operator delete(v56);
  v57 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v91 - 4);
    if ( &pthread_create )
      __dmb();
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
}


void __fastcall AgentCommand::setup(AgentCommand *this, CommandRegistry *a2)
{
  AgentCommand::setup(this, a2);
}


void __fastcall AgentCommand::collect(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand *v4; // r5@1
  CommandOutput *v5; // r4@1
  Command *v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int v9; // r6@1
  void *v10; // r4@4
  void *v11; // r6@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  void *v18; // r4@24
  void *v19; // r6@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int *v22; // r0@34
  __int64 v23; // [sp+4h] [bp-54h]@24
  int v24; // [sp+Ch] [bp-4Ch]@24
  int v25; // [sp+10h] [bp-48h]@24
  __int64 v26; // [sp+14h] [bp-44h]@4
  int v27; // [sp+1Ch] [bp-3Ch]@4
  int v28; // [sp+20h] [bp-38h]@4
  _DWORD *v29; // [sp+24h] [bp-34h]@1
  __int64 v30; // [sp+2Ch] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = j_operator new(4u);
  LODWORD(v8) = sub_1B0B34A;
  *v7 = v4;
  HIDWORD(v8) = sub_1B0B2EE;
  v29 = v7;
  v30 = v8;
  v9 = j_AgentCommand::runAgentCommand((int)v7, v6, v5, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( v9 == 1 )
  {
    j_AgentCommand::successName((AgentCommand *)&v28, (int)v4);
    v26 = 0LL;
    v27 = 0;
    j_CommandOutput::success((int)v5, &v28, (unsigned __int64 *)&v26);
    v11 = (void *)HIDWORD(v26);
    v10 = (void *)v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
    {
      do
      {
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 8;
      }
      while ( v10 != v11 );
      v10 = (void *)v26;
    }
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_46;
LABEL_45:
      v17 = (*v16)--;
LABEL_46:
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
      return;
  }
  else
    j_AgentCommand::errorName((AgentCommand *)&v25, (int)v4);
    v23 = 0LL;
    v24 = 0;
    j_CommandOutput::error(v5, &v25, (unsigned __int64 *)&v23);
    v19 = (void *)HIDWORD(v23);
    v18 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = (char *)v18 + 8;
      while ( v18 != v19 );
      v18 = (void *)v23;
    if ( v18 )
      j_operator delete(v18);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
      goto LABEL_45;
}


void __fastcall AgentCommand::place(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::place(this, a2, a3, a4);
}


Command *__fastcall AgentCommand::AgentCommand(Command *a1)
{
  Command *v1; // r4@1
  Command *result; // r0@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_2724F0C;
  *((_DWORD *)v1 + 5) = 2;
  *((_DWORD *)v1 + 6) = 0;
  j_CommandItem::CommandItem((int)v1 + 32);
  result = v1;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  return result;
}


void __fastcall AgentCommand::drop(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::drop(this, a2, a3, a4);
}


void __fastcall AgentCommand::createAgent(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand::createAgent(this, a2, a3, a4);
}


void __fastcall AgentCommand::transfer(AgentCommand *this, Player *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  AgentCommand *v4; // r5@1
  CommandOutput *v5; // r4@1
  Command *v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int v9; // r6@1
  void *v10; // r4@4
  void *v11; // r6@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  void *v18; // r4@24
  void *v19; // r6@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int *v22; // r0@34
  __int64 v23; // [sp+4h] [bp-54h]@24
  int v24; // [sp+Ch] [bp-4Ch]@24
  int v25; // [sp+10h] [bp-48h]@24
  __int64 v26; // [sp+14h] [bp-44h]@4
  int v27; // [sp+1Ch] [bp-3Ch]@4
  int v28; // [sp+20h] [bp-38h]@4
  _DWORD *v29; // [sp+24h] [bp-34h]@1
  __int64 v30; // [sp+2Ch] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = j_operator new(4u);
  LODWORD(v8) = sub_1B0B23C;
  *v7 = v4;
  HIDWORD(v8) = sub_1B0B1D8;
  v29 = v7;
  v30 = v8;
  v9 = j_AgentCommand::runAgentCommand((int)v7, v6, v5, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( v9 == 1 )
  {
    j_AgentCommand::successName((AgentCommand *)&v28, (int)v4);
    v26 = 0LL;
    v27 = 0;
    j_CommandOutput::success((int)v5, &v28, (unsigned __int64 *)&v26);
    v11 = (void *)HIDWORD(v26);
    v10 = (void *)v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
    {
      do
      {
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 8;
      }
      while ( v10 != v11 );
      v10 = (void *)v26;
    }
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_46;
LABEL_45:
      v17 = (*v16)--;
LABEL_46:
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
      return;
  }
  else
    j_AgentCommand::errorName((AgentCommand *)&v25, (int)v4);
    v23 = 0LL;
    v24 = 0;
    j_CommandOutput::error(v5, &v25, (unsigned __int64 *)&v23);
    v19 = (void *)HIDWORD(v23);
    v18 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = (char *)v18 + 8;
      while ( v18 != v19 );
      v18 = (void *)v23;
    if ( v18 )
      j_operator delete(v18);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
      goto LABEL_45;
}
