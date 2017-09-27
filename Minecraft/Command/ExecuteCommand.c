

void __fastcall ExecuteCommand::~ExecuteCommand(ExecuteCommand *this)
{
  ExecuteCommand::~ExecuteCommand(this);
}


void __fastcall ExecuteCommand::~ExecuteCommand(ExecuteCommand *this)
{
  ExecuteCommand *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A04C;
  v2 = *((_DWORD *)this + 40);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 40) = 0;
  j_CommandSelectorBase::~CommandSelectorBase((ExecuteCommand *)((char *)v1 + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall ExecuteCommand::setup(ExecuteCommand *this, CommandRegistry *a2)
{
  ExecuteCommand *v2; // r10@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  __int64 v10; // r2@18
  void *v11; // r0@18
  char v12; // r0@19
  char v13; // r0@22
  char v14; // r0@25
  int v15; // r0@28
  __int64 v16; // r2@28
  void *v17; // r0@28
  void *v18; // r0@29
  void *v19; // r0@30
  char v20; // r0@31
  char v21; // r0@34
  char v22; // r0@37
  char v23; // r0@40
  char v24; // r0@43
  char v25; // r0@46
  char v26; // r0@49
  int v27; // r0@52
  void *v28; // r0@52
  void *v29; // r0@53
  void *v30; // r0@54
  void *v31; // r0@55
  void *v32; // r0@56
  void *v33; // r0@57
  void *v34; // r0@58
  unsigned int *v35; // r2@60
  signed int v36; // r1@62
  unsigned int *v37; // r2@64
  signed int v38; // r1@66
  int v39; // r2@68
  signed int v40; // r1@70
  int v41; // r2@72
  signed int v42; // r1@74
  int v43; // r2@76
  signed int v44; // r1@78
  int v45; // r2@80
  signed int v46; // r1@82
  unsigned int *v47; // r2@84
  signed int v48; // r1@86
  unsigned int *v49; // r2@88
  signed int v50; // r1@90
  unsigned int *v51; // r2@92
  signed int v52; // r1@94
  unsigned int *v53; // r2@96
  signed int v54; // r1@98
  unsigned int *v55; // r2@100
  signed int v56; // r1@102
  unsigned int *v57; // r2@104
  signed int v58; // r1@106
  unsigned int *v59; // r2@108
  signed int v60; // r1@110
  char v61; // [sp+20h] [bp-210h]@52
  int v62; // [sp+2Ch] [bp-204h]@52
  char v63; // [sp+48h] [bp-1E8h]@49
  int v64; // [sp+54h] [bp-1DCh]@53
  char v65; // [sp+70h] [bp-1C0h]@46
  int v66; // [sp+7Ch] [bp-1B4h]@54
  char v67; // [sp+98h] [bp-198h]@43
  int v68; // [sp+A4h] [bp-18Ch]@55
  char v69; // [sp+C0h] [bp-170h]@40
  int v70; // [sp+CCh] [bp-164h]@56
  char v71; // [sp+E8h] [bp-148h]@37
  int v72; // [sp+F4h] [bp-13Ch]@57
  char v73; // [sp+110h] [bp-120h]@34
  int v74; // [sp+11Ch] [bp-114h]@58
  __int64 v75; // [sp+138h] [bp-F8h]@31
  char v76; // [sp+140h] [bp-F0h]@28
  int v77; // [sp+14Ch] [bp-E4h]@28
  char v78; // [sp+168h] [bp-C8h]@25
  int v79; // [sp+174h] [bp-BCh]@29
  char v80; // [sp+190h] [bp-A0h]@22
  int v81; // [sp+19Ch] [bp-94h]@30
  __int64 v82; // [sp+1B8h] [bp-78h]@19
  int v83; // [sp+1C4h] [bp-6Ch]@18
  int v84; // [sp+1C8h] [bp-68h]@1
  int v85; // [sp+1CCh] [bp-64h]@1
  void *v86; // [sp+1D0h] [bp-60h]@1
  int v87; // [sp+1D4h] [bp-5Ch]@1
  char *v88; // [sp+1D8h] [bp-58h]@1
  int v89; // [sp+1E0h] [bp-50h]@1
  __int16 v90; // [sp+1E8h] [bp-48h]@25
  __int16 v91; // [sp+1ECh] [bp-44h]@28
  __int16 v92; // [sp+1F0h] [bp-40h]@22
  __int16 v93; // [sp+1F4h] [bp-3Ch]@37
  __int16 v94; // [sp+1F8h] [bp-38h]@40
  __int16 v95; // [sp+1FCh] [bp-34h]@43
  unsigned __int16 v96; // [sp+200h] [bp-30h]@46
  __int16 v97; // [sp+204h] [bp-2Ch]@49
  __int16 v98; // [sp+208h] [bp-28h]@52

  v2 = this;
  sub_21E94B4((void **)&v89, "ExecuteModeDetect");
  sub_21E94B4((void **)&v84, "detect");
  v85 = 1;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v3 = j_operator new(8u);
  v86 = v3;
  v88 = (char *)v3 + 8;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,ExecuteCommand::Mode> const*,std::pair<std::string,ExecuteCommand::Mode>*>(
         (int)&v84,
         (int)&v86,
         (int)v3);
  v87 = v4;
  j_CommandRegistry::addEnumValues<ExecuteCommand::Mode>((int)v2, (int)&v89, (unsigned __int64 *)&v86);
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
    v3 = v86;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v84 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v89 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v83, "execute");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v83, "commands.execute.description", 1, 0, 0);
  v11 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v39 = v83 - 4;
        v40 = __ldrex((unsigned int *)v10);
        HIDWORD(v10) = v40 - 1;
      while ( __strex(v40 - 1, (unsigned int *)v10) );
      v40 = *(_DWORD *)v10;
      HIDWORD(v10) = *(_DWORD *)v10 - 1;
      *(_DWORD *)v10 = HIDWORD(v10);
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  LODWORD(v10) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v82, 1, v10);
  v12 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  __dmb();
  if ( !(v12 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Entity>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id);
  v92 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v80,
    &v92,
    (unsigned int)CommandRegistry::parse<CommandSelector<Entity>>,
    "origin",
    0,
    20,
    -1);
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v90 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v78,
    &v90,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "position",
    116,
  v14 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::unique_ptr<Command,std::default_delete<Command>>>(void)::id;
  if ( !(v14 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::unique_ptr<Command,std::default_delete<Command>>>(void)::id) )
    type_id<CommandRegistry,std::unique_ptr<Command,std::default_delete<Command>>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::unique_ptr<Command,std::default_delete<Command>>>(void)::id);
  v91 = type_id<CommandRegistry,std::unique_ptr<Command,std::default_delete<Command>>>(void)::id;
  v15 = j_CommandParameterData::CommandParameterData(
          (int)&v76,
          &v91,
          (unsigned int)CommandRegistry::parse<std::unique_ptr<Command,std::default_delete<Command>>>,
          "command",
          0,
          160,
          -1);
  j_CommandRegistry::registerOverload<ExecuteCommand,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "execute",
    v82,
    v15);
  v17 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v41 = v77 - 4;
        v42 = __ldrex((unsigned int *)v16);
        HIDWORD(v16) = v42 - 1;
      while ( __strex(v42 - 1, (unsigned int *)v16) );
      v42 = *(_DWORD *)v16;
      HIDWORD(v16) = *(_DWORD *)v16 - 1;
      *(_DWORD *)v16 = HIDWORD(v16);
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v43 = v79 - 4;
        v44 = __ldrex((unsigned int *)v16);
        HIDWORD(v16) = v44 - 1;
      while ( __strex(v44 - 1, (unsigned int *)v16) );
      v44 = *(_DWORD *)v16;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v45 = v81 - 4;
        v46 = __ldrex((unsigned int *)v16);
        HIDWORD(v16) = v46 - 1;
      while ( __strex(v46 - 1, (unsigned int *)v16) );
      v46 = *(_DWORD *)v16;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  LODWORD(v16) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v75, 1, v16);
  v20 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v20 & 1)
    (int)&v73,
  v21 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v21 & 1)
  v93 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v71,
    &v93,
  v22 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id[0];
  if ( !(v22 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id) )
    type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id);
  v94 = type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id;
    (int)&v69,
    &v94,
    (unsigned int)CommandRegistry::parse<ExecuteCommand::Mode>,
    "detect",
    1,
    (int)"ExecuteModeDetect",
    156,
  v23 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v23 & 1)
  v95 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v67,
    &v95,
    "detectPos",
    132,
  v24 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
  if ( !(v24 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id) )
    type_id<CommandRegistry,Block const*>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id);
  v96 = type_id<CommandRegistry,Block const*>(void)::id[0];
    (int)&v65,
    &v96,
    (unsigned int)CommandRegistry::parse<Block const*>,
    "block",
    148,
  v25 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v25 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v97 = type_id<CommandRegistry,int>(void)::id;
    (int)&v63,
    &v97,
    (unsigned int)CommandRegistry::parse<int>,
    "data",
    152,
  v26 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::unique_ptr<Command,std::default_delete<Command>>>(void)::id;
  if ( !(v26 & 1)
  v98 = type_id<CommandRegistry,std::unique_ptr<Command,std::default_delete<Command>>>(void)::id;
  v27 = j_CommandParameterData::CommandParameterData(
          (int)&v61,
          &v98,
  j_CommandRegistry::registerOverload<ExecuteCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v75,
    v27);
  v28 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v62 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v64 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v66 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v68 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v70 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v72 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v74 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
}


Command *__fastcall ExecuteCommand::ExecuteCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A04C;
  j_CommandSelector<Entity>::CommandSelector((int)v1 + 20);
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 116));
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 132));
  *(_QWORD *)((char *)v1 + 148) = -4294967296LL;
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  return v1;
}


void __fastcall ExecuteCommand::execute(ExecuteCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  ExecuteCommand::execute(this, a2, a3);
}


void __fastcall ExecuteCommand::execute(ExecuteCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  ExecuteCommand *v3; // r7@1
  const CommandOrigin *v4; // r6@1
  CommandOutput *v5; // r9@1
  char *v6; // r4@2
  int v7; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int *v10; // r0@12
  void *v11; // r0@17
  void *v12; // r0@18
  void *v13; // r0@19
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  char *v16; // r8@25
  int *v17; // r11@25
  Entity *v18; // r10@27
  int v19; // r0@32
  bool v20; // zf@32
  signed int v21; // r6@36
  void *v22; // r0@37
  char *v23; // r0@38
  _BYTE *v24; // r4@39
  char *v25; // r7@39
  unsigned int v26; // r2@39
  unsigned int v27; // r1@41
  unsigned int v28; // r6@41
  Entity **v29; // r8@48
  int v30; // r0@52
  void *v31; // r0@54
  void *v32; // r4@57
  int v33; // r4@63
  Entity *v34; // r8@63
  int v35; // r4@63
  int v36; // r4@64
  bool v37; // zf@68
  void *v38; // r0@72
  char *v39; // r0@73
  _BYTE *v40; // r4@75
  ExecuteCommand *v41; // r10@75
  char *v42; // r7@75
  unsigned int v43; // r2@75
  unsigned int v44; // r1@77
  unsigned int v45; // r11@77
  char *v46; // r6@84
  unsigned int *v47; // r2@91
  signed int v48; // r1@93
  _BYTE *v49; // r8@95
  char *v50; // r7@95
  unsigned int v51; // r2@95
  unsigned int v52; // r1@97
  unsigned int v53; // r4@97
  Entity **v54; // r6@104
  unsigned int *v55; // r2@109
  signed int v56; // r1@111
  unsigned int *v57; // r2@121
  signed int v58; // r1@123
  unsigned int *v59; // r2@132
  signed int v60; // r1@134
  unsigned int *v61; // r2@136
  signed int v62; // r1@138
  int v63; // r6@140
  unsigned int *v64; // r1@141
  unsigned int v65; // r0@143
  unsigned int *v66; // r4@158
  unsigned int v67; // r0@160
  int v68; // r6@165
  unsigned int *v69; // r1@166
  unsigned int v70; // r0@168
  unsigned int *v71; // r4@172
  unsigned int v72; // r0@174
  void *v73; // r0@182
  char *v74; // r4@183
  int v75; // r6@183
  unsigned int *v76; // r2@185
  signed int v77; // r1@187
  int *v78; // r0@193
  void *v79; // r0@198
  void *v80; // r0@199
  void *v81; // r0@200
  void *v82; // r0@201
  int v83; // r4@205
  unsigned int *v84; // r1@206
  unsigned int v85; // r0@208
  unsigned int *v86; // r5@212
  unsigned int v87; // r0@214
  unsigned int *v88; // r2@220
  signed int v89; // r1@222
  unsigned int *v90; // r2@224
  signed int v91; // r1@226
  unsigned int *v92; // r2@228
  signed int v93; // r1@230
  unsigned int *v94; // r2@232
  signed int v95; // r1@234
  int v96; // [sp+20h] [bp-128h]@25
  int v97; // [sp+28h] [bp-120h]@25
  ExecuteCommand *v98; // [sp+2Ch] [bp-11Ch]@1
  CommandOrigin *v99; // [sp+30h] [bp-118h]@63
  const CommandOrigin *v100; // [sp+34h] [bp-114h]@1
  int v101; // [sp+38h] [bp-110h]@183
  int v102; // [sp+3Ch] [bp-10Ch]@183
  int v103; // [sp+44h] [bp-104h]@183
  char *v104; // [sp+4Ch] [bp-FCh]@183
  char *v105; // [sp+50h] [bp-F8h]@183
  char *v106; // [sp+54h] [bp-F4h]@183
  int v107; // [sp+5Ch] [bp-ECh]@183
  int v108; // [sp+64h] [bp-E4h]@72
  char v109; // [sp+68h] [bp-E0h]@64
  int v110; // [sp+6Ch] [bp-DCh]@66
  void *ptr; // [sp+70h] [bp-D8h]@64
  int v112; // [sp+74h] [bp-D4h]@64
  int v113; // [sp+84h] [bp-C4h]@54
  unsigned __int8 v114; // [sp+88h] [bp-C0h]@31
  unsigned __int8 v115; // [sp+89h] [bp-BFh]@33
  int v116; // [sp+90h] [bp-B8h]@37
  int v117; // [sp+94h] [bp-B4h]@28
  char v118; // [sp+98h] [bp-B0h]@28
  char v119; // [sp+A4h] [bp-A4h]@28
  int v120; // [sp+A8h] [bp-A0h]@29
  int v121; // [sp+B0h] [bp-98h]@27
  int v122; // [sp+B4h] [bp-94h]@27
  int v123; // [sp+B8h] [bp-90h]@27
  int v124; // [sp+BCh] [bp-8Ch]@25
  int v125; // [sp+C0h] [bp-88h]@28
  int v126; // [sp+C4h] [bp-84h]@28
  char v127; // [sp+C8h] [bp-80h]@25
  int v128; // [sp+CCh] [bp-7Ch]@140
  char v129; // [sp+D4h] [bp-74h]@25
  int v130; // [sp+D8h] [bp-70h]@165
  void *v131; // [sp+E0h] [bp-68h]@25
  char *v132; // [sp+E4h] [bp-64h]@25
  char *v133; // [sp+E8h] [bp-60h]@25
  int *v134; // [sp+ECh] [bp-5Ch]@24
  int v135; // [sp+F0h] [bp-58h]@205
  int v136; // [sp+F4h] [bp-54h]@2
  int v137; // [sp+F8h] [bp-50h]@2
  char *v138; // [sp+100h] [bp-48h]@2
  char *v139; // [sp+104h] [bp-44h]@2
  char *v140; // [sp+108h] [bp-40h]@2
  int v141; // [sp+110h] [bp-38h]@2
  char v142; // [sp+114h] [bp-34h]@63

  v3 = this;
  v4 = a2;
  v5 = a3;
  v100 = a2;
  v98 = this;
  if ( j_Command::hasFlag(*((_DWORD *)this + 40), 8) == 1 )
  {
    sub_21E94B4((void **)&v141, "commands.generic.parameter.invalid");
    j_Command::getCommandName((Command *)&v136, *((_DWORD *)v3 + 40));
    j_CommandOutputParameter::CommandOutputParameter(&v137, &v136);
    v138 = 0;
    v139 = 0;
    v140 = 0;
    v138 = (char *)j_operator new(8u);
    v140 = v138 + 8;
    v139 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v137,
                     (int)&v138,
                     (int)v138);
    j_CommandOutput::error(v5, &v141, (unsigned __int64 *)&v138);
    v7 = (int)v139;
    v6 = v138;
    if ( v138 != v139 )
    {
      do
      {
        v10 = (int *)(*(_DWORD *)v6 - 12);
        if ( v10 != &dword_28898C0 )
        {
          v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        }
        v6 += 8;
      }
      while ( v6 != (char *)v7 );
      v6 = v138;
    }
    if ( v6 )
      j_operator delete(v6);
    v11 = (void *)(v137 - 12);
    if ( (int *)(v137 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v137 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
      else
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v136 - 12);
    if ( (int *)(v136 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v136 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v141 - 12);
    if ( (int *)(v141 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v141 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    return;
  }
  j_CommandSelector<Entity>::results((int)&v134, (ExecuteCommand *)((char *)v3 + 20), v4);
  if ( !j_Command::checkHasTargets<Entity>((__int64 **)&v134, v5) )
    goto LABEL_205;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  j_CommandSelectorResults<Entity>::begin((int)&v129, &v134);
  j_CommandSelectorResults<Entity>::end((int)&v127, (int)&v134);
  v96 = (int)v3 + 132;
  v97 = (int)v3 + 116;
  v16 = &v129;
  v17 = &v124;
  while ( j_SelectorIterator<Entity>::operator!=((int)v16, (int)&v127) )
    v18 = (Entity *)j_SelectorIterator<Entity>::operator*((int)v16);
    j_Entity::getAttachPos((AABB *)&v121, (int)v18, 0, 0);
    j_CommandPosition::getPosition((int)v17, v97, v121, v122, v123);
    if ( *((_DWORD *)v3 + 39) != 1 )
      goto LABEL_63;
    j_CommandPosition::getPosition((int)&v118, v96, v124, v125, v126);
    j_BlockPos::BlockPos((int)&v119, (int)&v118);
    j_CommandOrigin::getAreaAt((CommandOrigin *)&v117, v4, (const BlockPos *)&v119);
    if ( v117 && v120 >= 0 && v120 < *(_WORD *)(v117 + 32) )
      j_BlockSource::getBlockAndData((BlockSource *)&v114, (const BlockPos *)(v117 + 8), (int)&v119);
      if ( v114 == *(_BYTE *)(*((_DWORD *)v3 + 37) + 4) )
        v19 = *((_DWORD *)v3 + 38);
        v20 = v19 == -1;
        if ( v19 != -1 )
          v20 = v115 == v19;
        if ( v20 )
          v21 = 0;
          goto LABEL_57;
      sub_21E94B4((void **)&v113, "failedEntities");
      j_CommandOutput::addToResultList((int)v5, (const char **)&v113, (int)v18);
      v31 = (void *)(v113 - 12);
      if ( (int *)(v113 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v113 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
        else
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v23 = v132;
      if ( v132 == v133 )
        v49 = v131;
        v50 = 0;
        v51 = (v132 - (_BYTE *)v131) >> 2;
        if ( !v51 )
          v51 = 1;
        v52 = v51 + ((v132 - (_BYTE *)v131) >> 2);
        v53 = v51 + ((v132 - (_BYTE *)v131) >> 2);
        if ( 0 != v52 >> 30 )
          v53 = 0x3FFFFFFF;
        if ( v52 < v51 )
        if ( v53 )
          if ( v53 >= 0x40000000 )
            sub_21E57F4();
          v50 = (char *)j_operator new(4 * v53);
          v23 = v132;
          v49 = v131;
        v54 = (Entity **)&v50[v23 - v49];
        *v54 = v18;
        if ( (v23 - v49) >> 2 )
          j___aeabi_memmove4_0((int)v50, (int)v49);
        if ( v49 )
          j_operator delete(v49);
        v131 = v50;
        v132 = (char *)(v54 + 1);
        v30 = (int)&v50[4 * v53];
LABEL_53:
        v133 = (char *)v30;
        v21 = 3;
        v17 = &v124;
        v16 = &v129;
        v3 = v98;
        goto LABEL_57;
    else
      sub_21E94B4((void **)&v116, "failedEntities");
      j_CommandOutput::addToResultList((int)v5, (const char **)&v116, (int)v18);
      v22 = (void *)(v116 - 12);
      if ( (int *)(v116 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v116 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
        v24 = v131;
        v98 = v3;
        v25 = 0;
        v26 = (v132 - (_BYTE *)v131) >> 2;
        if ( !v26 )
          v26 = 1;
        v27 = v26 + ((v132 - (_BYTE *)v131) >> 2);
        v28 = v26 + ((v132 - (_BYTE *)v131) >> 2);
        if ( 0 != v27 >> 30 )
          v28 = 0x3FFFFFFF;
        if ( v27 < v26 )
        if ( v28 )
          if ( v28 >= 0x40000000 )
          v25 = (char *)j_operator new(4 * v28);
          v24 = v131;
        v29 = (Entity **)&v25[v23 - v24];
        *v29 = v18;
        if ( (v23 - v24) >> 2 )
          j___aeabi_memmove4_0((int)v25, (int)v24);
        if ( v24 )
          j_operator delete(v24);
        v30 = (int)&v25[4 * v28];
        v131 = v25;
        v132 = (char *)(v29 + 1);
        goto LABEL_53;
    *(_DWORD *)v23 = v18;
    v21 = 3;
    v132 += 4;
LABEL_57:
    v32 = (void *)v117;
    if ( v117 )
      j_BlockSource::~BlockSource((BlockSource *)(v117 + 8));
      if ( *(_DWORD *)v32 )
        (*(void (**)(void))(**(_DWORD **)v32 + 4))();
      j_operator delete(v32);
    v20 = v21 == 0;
    v4 = v100;
    if ( v20 )
LABEL_63:
      v33 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 68))(v4);
      v99 = (CommandOrigin *)j_operator new(0x18u);
      v100 = v4;
      v34 = v18;
      j_BlockPos::BlockPos((int)&v142, (int)v17);
      j_VirtualCommandOrigin::VirtualCommandOrigin((int)v99, v33, v18, (int)&v142);
      v35 = j_CommandOutput::getSuccessCount(v5);
      if ( j_CommandOutput::wantsData(v5) == 1 )
        j_CommandOutput::CommandOutput((int)&v109, 0);
        j_Command::run(*((Command **)v3 + 40), v99, (CommandOutput *)&v109);
        v36 = j_CommandOutput::getSuccessCount((CommandOutput *)&v109);
        j_std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)ptr, v112);
        if ( ptr )
          j_operator delete(ptr);
        if ( v110 )
          (*(void (**)(void))(*(_DWORD *)v110 + 4))();
        v37 = v36 == 0;
        j_Command::run(*((Command **)v3 + 40), v99, v5);
        v37 = j_CommandOutput::getSuccessCount(v5) == v35;
      if ( v37 )
        sub_21E94B4((void **)&v108, "failedEntities");
        j_CommandOutput::addToResultList((int)v5, (const char **)&v108, (int)v18);
        v38 = (void *)(v108 - 12);
        if ( (int *)(v108 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v108 - 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        v39 = v132;
        if ( v132 == v133 )
          v40 = v131;
          v41 = v3;
          v42 = 0;
          v43 = (v132 - (_BYTE *)v131) >> 2;
          if ( !v43 )
            v43 = 1;
          v44 = v43 + ((v132 - (_BYTE *)v131) >> 2);
          v45 = v43 + ((v132 - (_BYTE *)v131) >> 2);
          if ( 0 != v44 >> 30 )
            v45 = 0x3FFFFFFF;
          if ( v44 < v43 )
          if ( v45 )
            if ( v45 >= 0x40000000 )
              sub_21E57F4();
            v42 = (char *)j_operator new(4 * v45);
            v39 = v132;
            v40 = v131;
          v46 = &v42[v39 - v40];
          *(_DWORD *)v46 = v34;
          if ( (v39 - v40) >> 2 )
            j___aeabi_memmove4_0((int)v42, (int)v40);
          if ( v40 )
            j_operator delete(v40);
          v131 = v42;
          v132 = v46 + 4;
          v133 = &v42[4 * v45];
          v17 = &v124;
          v3 = v41;
          *(_DWORD *)v132 = v18;
          v132 += 4;
      (*(void (**)(void))(*(_DWORD *)v99 + 4))();
      v4 = v100;
      v16 = &v129;
    j_SelectorIterator<Entity>::operator++((int)v16);
  v63 = v128;
  if ( v128 )
    v64 = (unsigned int *)(v128 + 4);
    if ( &pthread_create )
      __dmb();
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 == 1 )
      v66 = (unsigned int *)(v63 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 8))(v63);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
  v68 = v130;
  if ( v130 )
    v69 = (unsigned int *)(v130 + 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 == 1 )
      v71 = (unsigned int *)(v68 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
  if ( v131 == v132 && j_CommandOutput::wantsData(v5) == 1 )
    j_CommandOutput::success(v5);
  v73 = v131;
  if ( v131 != v132 )
    sub_21E94B4((void **)&v107, "commands.execute.failed");
    j_Command::getCommandName((Command *)&v101, *((_DWORD *)v3 + 40));
    j_CommandOutputParameter::CommandOutputParameter(&v102, &v101);
    j_CommandOutputParameter::CommandOutputParameter((int)&v103, (unsigned __int64 *)&v131);
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v104 = (char *)j_operator new(0x10u);
    v106 = v104 + 16;
    v105 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v102,
                     (int)&v104,
                     (int)v104);
    j_CommandOutput::error(v5, &v107, (unsigned __int64 *)&v104);
    v75 = (int)v105;
    v74 = v104;
    if ( v104 != v105 )
        v78 = (int *)(*(_DWORD *)v74 - 12);
        if ( v78 != &dword_28898C0 )
          v76 = (unsigned int *)(*(_DWORD *)v74 - 4);
              v77 = __ldrex(v76);
            while ( __strex(v77 - 1, v76) );
            v77 = (*v76)--;
          if ( v77 <= 0 )
            j_j_j_j__ZdlPv_9(v78);
        v74 += 8;
      while ( v74 != (char *)v75 );
      v74 = v104;
    if ( v74 )
      j_operator delete(v74);
    v79 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)(v103 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j__ZdlPv_9(v79);
    v80 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v102 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j__ZdlPv_9(v80);
    v81 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v101 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j__ZdlPv_9(v81);
    v82 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v107 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j__ZdlPv_9(v82);
    v73 = v131;
  if ( v73 )
    j_operator delete(v73);
LABEL_205:
  v83 = v135;
  if ( v135 )
    v84 = (unsigned int *)(v135 + 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 == 1 )
      v86 = (unsigned int *)(v83 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 8))(v83);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 12))(v83);
}


int __fastcall ExecuteCommand::~ExecuteCommand(ExecuteCommand *this)
{
  ExecuteCommand *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A04C;
  v2 = *((_DWORD *)this + 40);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 40) = 0;
  j_CommandSelectorBase::~CommandSelectorBase((ExecuteCommand *)((char *)v1 + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall ExecuteCommand::setup(ExecuteCommand *this, CommandRegistry *a2)
{
  ExecuteCommand::setup(this, a2);
}
