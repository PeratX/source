

void __fastcall ListCommand::execute(ListCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  ListCommand::execute(this, a2, a3);
}


void __fastcall ListCommand::setup(ListCommand *this, CommandRegistry *a2)
{
  ListCommand::setup(this, a2);
}


void __fastcall ListCommand::execute(ListCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r8@1
  Level *v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  _DWORD *v7; // r0@2
  void *v8; // r0@4
  _DWORD *v9; // r0@6
  char *v10; // r4@8
  int v11; // r6@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  int *v14; // r0@18
  void *v15; // r0@23
  void *v16; // r0@24
  void *v17; // r0@25
  void *v18; // r0@26
  char *v19; // r4@27
  int v20; // r6@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  int *v23; // r0@37
  void *v24; // r0@42
  void *v25; // r0@43
  char *v26; // r0@46
  unsigned int *v27; // r2@48
  signed int v28; // r1@50
  unsigned int *v29; // r2@52
  signed int v30; // r1@54
  unsigned int *v31; // r2@56
  signed int v32; // r1@58
  unsigned int *v33; // r2@60
  signed int v34; // r1@62
  unsigned int *v35; // r2@64
  signed int v36; // r1@66
  unsigned int *v37; // r2@68
  signed int v38; // r1@70
  unsigned int *v39; // r2@72
  signed int v40; // r1@74
  unsigned int *v41; // r2@76
  signed int v42; // r1@78
  int v43; // [sp+0h] [bp-A0h]@27
  char *v44; // [sp+8h] [bp-98h]@27
  char *v45; // [sp+Ch] [bp-94h]@27
  char *v46; // [sp+10h] [bp-90h]@27
  int v47; // [sp+18h] [bp-88h]@27
  int v48; // [sp+1Ch] [bp-84h]@8
  int v49; // [sp+24h] [bp-7Ch]@8
  int v50; // [sp+2Ch] [bp-74h]@8
  char *v51; // [sp+34h] [bp-6Ch]@8
  char *v52; // [sp+38h] [bp-68h]@8
  char *v53; // [sp+3Ch] [bp-64h]@8
  int v54; // [sp+44h] [bp-5Ch]@8
  _DWORD *v55; // [sp+48h] [bp-58h]@6
  void (*v56)(void); // [sp+50h] [bp-50h]@6
  signed int (__fastcall *v57)(int **, int); // [sp+54h] [bp-4Ch]@6
  int v58; // [sp+58h] [bp-48h]@4
  _DWORD *v59; // [sp+5Ch] [bp-44h]@2
  void (*v60)(void); // [sp+64h] [bp-3Ch]@2
  signed int (__fastcall *v61)(int, int); // [sp+68h] [bp-38h]@2
  void *ptr; // [sp+6Ch] [bp-34h]@1
  int v63; // [sp+70h] [bp-30h]@1
  int v64; // [sp+74h] [bp-2Ch]@1
  char *v65; // [sp+78h] [bp-28h]@1

  v3 = a3;
  v65 = (char *)&unk_28898CC;
  v4 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 24))(a2);
  v5 = j_Level::getUserCount(v4);
  v6 = *(_DWORD *)(j_Minecraft::getServerNetworkHandler(ServerCommand::mGame) + 316);
  ptr = 0;
  v63 = 0;
  v64 = 0;
  if ( j_CommandOutput::wantsData(v3) == 1 )
  {
    v7 = j_operator new(8u);
    *v7 = &ptr;
    v7[1] = &v65;
    v59 = v7;
    v60 = (void (*)(void))sub_19CBD56;
    v61 = sub_19CBCA0;
    j_Level::forEachPlayer((int)v4, (int)&v59);
    if ( v60 )
      v60();
    sub_21E8AF4(&v58, (int *)&v65);
    j_CommandOutput::set<std::string>((int)v3, "players", &v58);
    v8 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
    {
      v41 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    j_CommandOutput::set<int>((int)v3, "currentPlayerCount", v5);
    j_CommandOutput::set<int>((int)v3, "maxPlayerCount", v6);
  }
  else
    v9 = j_operator new(4u);
    *v9 = &ptr;
    v55 = v9;
    v56 = (void (*)(void))sub_19CBE2E;
    v57 = sub_19CBD90;
    j_Level::forEachPlayer((int)v4, (int)&v55);
    if ( v56 )
      v56();
  sub_21E94B4((void **)&v54, "commands.players.list");
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v48, v5);
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v49, v6);
  j_CommandOutputParameter::CommandOutputParameter(&v50);
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v51 = (char *)j_operator new(0x18u);
  v53 = v51 + 24;
  v52 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v48,
                  (int)&v51,
                  (int)v51);
  j_CommandOutput::forceOutput(v3, &v54, (unsigned __int64 *)&v51);
  v11 = (int)v52;
  v10 = v51;
  if ( v51 != v52 )
    do
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
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
      v10 += 8;
    while ( v10 != (char *)v11 );
    v10 = v51;
  if ( v10 )
    j_operator delete(v10);
  v15 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v49 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v48 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v54 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v47, "commands.players.list.names");
  j_CommandOutputParameter::CommandOutputParameter((int)&v43, (unsigned __int64 *)&ptr);
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v44 = (char *)j_operator new(8u);
  v46 = v44 + 8;
  v45 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v43,
                  (int)&v44,
                  (int)v44);
  j_CommandOutput::forceOutput(v3, &v47, (unsigned __int64 *)&v44);
  v20 = (int)v45;
  v19 = v44;
  if ( v44 != v45 )
      v23 = (int *)(*(_DWORD *)v19 - 12);
      if ( v23 != &dword_28898C0 )
        v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v19 += 8;
    while ( v19 != (char *)v20 );
    v19 = v44;
  if ( v19 )
    j_operator delete(v19);
  v24 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v43 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v47 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  j_CommandOutput::success(v3);
  if ( ptr )
    j_operator delete(ptr);
  v26 = v65 - 12;
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v65 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
}


void __fastcall ListCommand::~ListCommand(ListCommand *this)
{
  ListCommand::~ListCommand(this);
}


void __fastcall ListCommand::setup(ListCommand *this, CommandRegistry *a2)
{
  ListCommand *v2; // r5@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  int v5; // r2@3
  signed int v6; // r1@5
  __int64 v7; // [sp+8h] [bp-28h]@2
  int v8; // [sp+14h] [bp-1Ch]@1

  v2 = this;
  sub_21E94B4((void **)&v8, "list");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v8, "commands.list.description", 0, 0, 0);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v7, 1, v3);
  j_j__ZN15CommandRegistry16registerOverloadI11ListCommandJEEEvPKc14CommandVersionDpRKT0_((int)v2, "list", v7);
}


_DWORD *__fastcall ListCommand::ListCommand(Command *a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Command::Command(a1);
  *result = &off_271A0D4;
  return result;
}


void __fastcall ListCommand::~ListCommand(ListCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}
