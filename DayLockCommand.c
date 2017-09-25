

void __fastcall DayLockCommand::setup(DayLockCommand *this, CommandRegistry *a2)
{
  DayLockCommand *v2; // r4@1
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
  sub_21E94B4((void **)&v23, "daylock");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v23, "commands.daylock.description", 1, 0, 0);
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
  sub_21E94B4((void **)&v22, "daylock");
  sub_21E94B4((void **)&v21, "alwaysday");
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
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id) )
    type_id<CommandRegistry,bool>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id);
  v24 = type_id<CommandRegistry,bool>(void)::id;
  v8 = j_CommandParameterData::CommandParameterData(
         (int)&v18,
         &v24,
         (unsigned int)CommandRegistry::parse<bool>,
         "lock",
         0,
         18,
         1,
         -1);
  j_CommandRegistry::registerOverload<DayLockCommand,CommandParameterData>((int)v2, "daylock", v20, v8);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


int __fastcall DayLockCommand::execute(DayLockCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  DayLockCommand *v3; // r6@1 OVERLAPPED
  CommandOutput *v4; // r7@1
  Level *v5; // r5@1 OVERLAPPED
  unsigned __int64 *v6; // r1@3
  char v7; // r3@3
  int v8; // r0@6
  int v9; // r0@7
  _QWORD *v10; // r0@7
  __int64 v11; // r1@7
  int result; // r0@9
  _QWORD *v13; // [sp+4h] [bp-3Ch]@7
  __int64 v14; // [sp+Ch] [bp-34h]@7
  void **v15; // [sp+14h] [bp-2Ch]@7
  int v16; // [sp+18h] [bp-28h]@7
  int v17; // [sp+1Ch] [bp-24h]@7
  char v18; // [sp+20h] [bp-20h]@7
  int v19; // [sp+24h] [bp-1Ch]@7
  int v20; // [sp+28h] [bp-18h]@5

  v3 = this;
  v4 = a3;
  v5 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 24))(a2);
  if ( *((_BYTE *)v3 + 18) )
    j_Level::setTime(v5, 5000);
  v6 = (unsigned __int64 *)j_Level::getGameRules(v5);
  v7 = 0;
  if ( !*((_BYTE *)v3 + 18) )
    v7 = 1;
  j_GameRules::setRule(&v20, v6, (int **)&GameRules::DO_DAYLIGHT_CYCLE, v7, 1);
  if ( v20 )
  {
    v8 = j_Level::getPacketSender(v5);
    (*(void (**)(void))(*(_DWORD *)v8 + 8))();
  }
  v16 = 2;
  v17 = 1;
  v18 = 0;
  v15 = &off_26E93B4;
  v19 = j_Level::getTime(v5);
  v9 = j_Level::getPacketSender(v5);
  (*(void (**)(void))(*(_DWORD *)v9 + 8))();
  v10 = j_operator new(8u);
  LODWORD(v11) = sub_19B4408;
  *v10 = *(_QWORD *)&v5;
  HIDWORD(v11) = sub_19B40B0;
  v13 = v10;
  v14 = v11;
  j_Level::forEachPlayer((int)v5, (int)&v13);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  j_CommandOutput::success(v4);
  result = v20;
    result = (*(int (**)(void))(*(_DWORD *)v20 + 4))();
  return result;
}


void __fastcall DayLockCommand::setup(DayLockCommand *this, CommandRegistry *a2)
{
  DayLockCommand::setup(this, a2);
}


void __fastcall DayLockCommand::~DayLockCommand(DayLockCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall DayLockCommand::DayLockCommand(Command *a1)
{
  int result; // r0@1

  result = j_Command::Command(a1);
  *(_DWORD *)result = &off_2719FE8;
  *(_BYTE *)(result + 18) = 1;
  return result;
}


void __fastcall DayLockCommand::~DayLockCommand(DayLockCommand *this)
{
  DayLockCommand::~DayLockCommand(this);
}
