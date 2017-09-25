

void __fastcall ListDCommand::setup(ListDCommand *this, CommandRegistry *a2)
{
  ListDCommand *v2; // r9@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@19
  __int64 v12; // r2@20
  void *v13; // r0@20
  char v14; // r0@21
  int v15; // r0@24
  void *v16; // r0@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  unsigned int *v21; // r2@34
  signed int v22; // r1@36
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  int v25; // r2@42
  signed int v26; // r1@44
  unsigned int *v27; // r2@46
  signed int v28; // r1@48
  char v29; // [sp+1Ch] [bp-94h]@24
  int v30; // [sp+28h] [bp-88h]@24
  __int64 v31; // [sp+44h] [bp-6Ch]@21
  int v32; // [sp+50h] [bp-60h]@20
  int v33; // [sp+54h] [bp-5Ch]@1
  int v34; // [sp+58h] [bp-58h]@1
  int v35; // [sp+5Ch] [bp-54h]@1
  int v36; // [sp+60h] [bp-50h]@1
  int v37; // [sp+64h] [bp-4Ch]@1
  int v38; // [sp+68h] [bp-48h]@1
  void *v39; // [sp+6Ch] [bp-44h]@1
  int v40; // [sp+70h] [bp-40h]@1
  char *v41; // [sp+74h] [bp-3Ch]@1
  int v42; // [sp+7Ch] [bp-34h]@1
  __int16 v43; // [sp+8Ch] [bp-24h]@24

  v2 = this;
  sub_21E94B4((void **)&v42, "ListDetails");
  sub_21E94B4((void **)&v33, "ids");
  v34 = 1;
  sub_21E94B4((void **)&v35, "uuids");
  v36 = 2;
  sub_21E94B4((void **)&v37, "stats");
  v38 = 3;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v3 = j_operator new(0x18u);
  v39 = v3;
  v41 = (char *)v3 + 24;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,ListDCommand::DetailMode> const*,std::pair<std::string,ListDCommand::DetailMode>*>(
         (int)&v33,
         (int)&v39,
         (int)v3);
  v40 = v4;
  j_CommandRegistry::addEnumValues<ListDCommand::DetailMode>((int)v2, (int)&v42, (unsigned __int64 *)&v39);
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
    v3 = v39;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v35 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v33 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v42 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v32, "listd");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v32, "commands.listd.description", 3, 2, 0);
  v13 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v25 = v32 - 4;
        v26 = __ldrex((unsigned int *)v12);
        HIDWORD(v12) = v26 - 1;
      while ( __strex(v26 - 1, (unsigned int *)v12) );
      v26 = *(_DWORD *)v12;
      HIDWORD(v12) = *(_DWORD *)v12 - 1;
      *(_DWORD *)v12 = HIDWORD(v12);
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  LODWORD(v12) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v31, 1, v12);
  v14 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id;
  __dmb();
  if ( !(v14 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id) )
    type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id);
  v43 = type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id;
  v15 = j_CommandParameterData::CommandParameterData(
          (int)&v29,
          &v43,
          (unsigned int)CommandRegistry::parse<ListDCommand::DetailMode>,
          "details",
          0,
          20,
          1,
          -1);
  j_CommandRegistry::registerOverload<ListDCommand,CommandParameterData>((int)v2, "listd", v31, v15);
  v16 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v30 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


void __fastcall ListDCommand::setup(ListDCommand *this, CommandRegistry *a2)
{
  ListDCommand::setup(this, a2);
}


void __fastcall ListDCommand::~ListDCommand(ListDCommand *this)
{
  ListDCommand::~ListDCommand(this);
}


_DWORD *__fastcall ListDCommand::execute(ListDCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r4@1
  char v4; // r1@1
  CommandOutput *v5; // r10@1
  int v6; // r0@1
  char v7; // r2@1
  char v8; // r2@3
  Level *v9; // r4@7
  _DWORD *v10; // r0@7
  int v11; // r7@9
  int v12; // r4@9
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  char *v16; // r4@12
  int v17; // r6@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  int *v20; // r0@22
  void *v21; // r0@27
  void *v22; // r0@28
  void *v23; // r0@29
  char *v24; // r4@30
  int v25; // r6@30
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  int *v28; // r0@40
  void *v29; // r0@45
  char *v30; // r4@46
  int v31; // r6@46
  unsigned int *v32; // r2@48
  signed int v33; // r1@50
  int *v34; // r0@56
  void *v35; // r0@61
  void *v36; // r0@62
  void *v37; // r0@63
  void **v38; // r0@64
  void *v39; // r0@64
  void **v40; // r6@65
  void **v41; // r7@65
  void **v42; // r3@65
  void *v43; // r0@65
  unsigned int *v45; // r2@67
  signed int v46; // r1@69
  unsigned int *v47; // r2@71
  signed int v48; // r1@73
  unsigned int *v49; // r2@75
  signed int v50; // r1@77
  unsigned int *v51; // r2@79
  signed int v52; // r1@81
  unsigned int *v53; // r2@83
  signed int v54; // r1@85
  unsigned int *v55; // r2@87
  signed int v56; // r1@89
  unsigned int *v57; // r2@91
  signed int v58; // r1@93
  unsigned int *v59; // r2@95
  signed int v60; // r1@97
  unsigned int *v61; // r2@99
  signed int v62; // r1@101
  unsigned int *v63; // r2@103
  signed int v64; // r1@105
  unsigned int *v65; // r2@107
  signed int v66; // r1@109
  unsigned int *v67; // r2@111
  signed int v68; // r1@113
  int v69; // [sp+4h] [bp-22Ch]@46
  char *v70; // [sp+Ch] [bp-224h]@46
  char *v71; // [sp+10h] [bp-220h]@46
  char *v72; // [sp+14h] [bp-21Ch]@46
  int v73; // [sp+18h] [bp-218h]@30
  char *v74; // [sp+20h] [bp-210h]@30
  char *v75; // [sp+24h] [bp-20Ch]@30
  char *v76; // [sp+28h] [bp-208h]@30
  int v77; // [sp+2Ch] [bp-204h]@12
  int v78; // [sp+34h] [bp-1FCh]@12
  char *v79; // [sp+3Ch] [bp-1F4h]@12
  char *v80; // [sp+40h] [bp-1F0h]@12
  char *v81; // [sp+44h] [bp-1ECh]@12
  int v82; // [sp+4Ch] [bp-1E4h]@12
  int v83; // [sp+50h] [bp-1E0h]@11
  int v84; // [sp+58h] [bp-1D8h]@10
  int v85; // [sp+5Ch] [bp-1D4h]@10
  int v86; // [sp+60h] [bp-1D0h]@9
  int v87; // [sp+64h] [bp-1CCh]@9
  _DWORD *v88; // [sp+68h] [bp-1C8h]@7
  void (*v89)(void); // [sp+70h] [bp-1C0h]@7
  signed int (__fastcall *v90)(int, int); // [sp+74h] [bp-1BCh]@7
  char v91; // [sp+78h] [bp-1B8h]@7
  void **v92; // [sp+88h] [bp-1A8h]@7
  int v93; // [sp+8Ch] [bp-1A4h]@65
  void **v94; // [sp+90h] [bp-1A0h]@64
  void **v95; // [sp+94h] [bp-19Ch]@9
  int v96; // [sp+B0h] [bp-180h]@65
  int v97; // [sp+B8h] [bp-178h]@64
  int v98; // [sp+BCh] [bp-174h]@65
  void **v99; // [sp+144h] [bp-ECh]@7
  int v100; // [sp+148h] [bp-E8h]@66
  void **v101; // [sp+14Ch] [bp-E4h]@65
  void **v102; // [sp+150h] [bp-E0h]@65
  int v103; // [sp+16Ch] [bp-C4h]@66
  int v104; // [sp+174h] [bp-BCh]@65
  int v105; // [sp+178h] [bp-B8h]@66
  char v106; // [sp+201h] [bp-2Fh]@7
  char v107; // [sp+202h] [bp-2Eh]@5
  char v108; // [sp+203h] [bp-2Dh]@3
  int v109; // [sp+204h] [bp-2Ch]@1

  v3 = a2;
  v4 = 0;
  v109 = 0;
  v5 = a3;
  v6 = *((_DWORD *)this + 5);
  v7 = v6;
  if ( v6 != 1 )
    v7 = 0;
  v108 = v7;
  v8 = 0;
  if ( v6 == 2 )
    v8 = 1;
  v107 = v8;
  if ( v6 == 3 )
    v4 = 1;
  v106 = v4;
  sub_21D103C((int)&v99, 24);
  sub_21D103C((int)&v92, 24);
  j_Json::Value::Value(&v91, 6);
  v9 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 24))(v3);
  v10 = j_operator new(0x1Cu);
  *v10 = &v91;
  v10[1] = &v92;
  v10[2] = &v109;
  v10[3] = &v99;
  v10[4] = &v106;
  v10[5] = &v107;
  v10[6] = &v108;
  v88 = v10;
  v89 = (void (*)(void))sub_19CDE8C;
  v90 = sub_19CD930;
  j_Level::forEachPlayer((int)v9, (int)&v88);
  if ( v89 )
    v89();
  v11 = j_Level::getUserCount(v9);
  v12 = *(_DWORD *)(j_Minecraft::getServerNetworkHandler(ServerCommand::mGame) + 316);
  j_CommandOutput::set<int>((int)v5, "currentPlayerCount", v11);
  j_CommandOutput::set<int>((int)v5, "maxPlayerCount", v12);
  sub_21CFED8(&v87, (int)&v95);
  sub_21E8AF4(&v86, &v87);
  j_CommandOutput::set<std::string>((int)v5, "players", &v86);
  v13 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
  {
    v45 = (unsigned int *)(v86 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
    }
    else
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  sub_21E94B4((void **)&v84, "listd");
  j_CommandUtils::toJsonResult((const void **)&v85, (const char **)&v84, (const Json::Value *)&v91);
  v14 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v84 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E8AF4(&v83, &v85);
  j_CommandOutput::set<std::string>((int)v5, "details", &v83);
  v15 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v83 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v82, "commands.players.list");
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v77, v11);
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v78, v12);
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v79 = (char *)j_operator new(0x10u);
  v81 = v79 + 16;
  v80 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v77,
                  (int)&v79,
                  (int)v79);
  j_CommandOutput::success((int)v5, &v82, (unsigned __int64 *)&v79);
  v17 = (int)v80;
  v16 = v79;
  if ( v79 != v80 )
    do
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
      v16 += 8;
    while ( v16 != (char *)v17 );
    v16 = v79;
  if ( v16 )
    j_operator delete(v16);
  v21 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v78 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v77 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v82 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  j_CommandOutputParameter::CommandOutputParameter(&v73);
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v74 = (char *)j_operator new(8u);
  v76 = v74 + 8;
  v75 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v73,
                  (int)&v74,
                  (int)v74);
  j_CommandOutput::success((int)v5, &v87, (unsigned __int64 *)&v74);
  v25 = (int)v75;
  v24 = v74;
  if ( v74 != v75 )
      v28 = (int *)(*(_DWORD *)v24 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v24 += 8;
    while ( v24 != (char *)v25 );
    v24 = v74;
  if ( v24 )
    j_operator delete(v24);
  v29 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v73 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  j_CommandOutputParameter::CommandOutputParameter(&v69);
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v70 = (char *)j_operator new(8u);
  v72 = v70 + 8;
  v71 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v69,
                  (int)&v70,
                  (int)v70);
  j_CommandOutput::success((int)v5, &v85, (unsigned __int64 *)&v70);
  v31 = (int)v71;
  v30 = v70;
  if ( v70 != v71 )
      v34 = (int *)(*(_DWORD *)v30 - 12);
      if ( v34 != &dword_28898C0 )
        v32 = (unsigned int *)(*(_DWORD *)v30 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v30 += 8;
    while ( v30 != (char *)v31 );
    v30 = v70;
  if ( v30 )
    j_operator delete(v30);
  v35 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v69 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v85 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v87 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  j_Json::Value::~Value((Json::Value *)&v91);
  v38 = off_26D3F84;
  v92 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v92) = off_26D3F80[0];
  v94 = v38;
  v95 = &off_27734E8;
  v39 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v97 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v95 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v96);
  v92 = (void **)off_26D3F68;
  v40 = off_26D3F60;
  v41 = off_26D3F80[0];
  *(void ***)((char *)&v92 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v93 = 0;
  sub_21B6560(&v98);
  v99 = v40;
  v42 = off_26D3F84;
  *(_DWORD *)((char *)*(v40 - 3) + (_DWORD)&v99) = v41;
  v101 = v42;
  v102 = &off_27734E8;
  v43 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v104 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v102 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v103);
  v99 = (void **)off_26D3F68;
  *(void ***)((char *)&v99 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v100 = 0;
  return sub_21B6560(&v105);
}


void __fastcall ListDCommand::~ListDCommand(ListDCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall ListDCommand::ListDCommand(Command *a1)
{
  int result; // r0@1

  result = j_Command::Command(a1);
  *(_DWORD *)result = &off_271A0E8;
  *(_DWORD *)(result + 20) = 0;
  return result;
}
