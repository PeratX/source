

MessagingCommand *__fastcall TitleCommand::TitleCommand(MessagingCommand *a1)
{
  MessagingCommand *v1; // r4@1
  int v2; // r3@1

  v1 = a1;
  j_MessagingCommand::MessagingCommand(a1, 0, 1);
  *(_DWORD *)v1 = &off_271A2A0;
  *((_DWORD *)v1 + 5) = 1;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 24);
  j_CommandMessage::CommandMessage((MessagingCommand *)((char *)v1 + 120));
  v2 = (int)v1 + 132;
  *(_DWORD *)v2 = 10;
  *(_DWORD *)(v2 + 4) = 70;
  *(_DWORD *)(v2 + 8) = 20;
  return v1;
}


void __fastcall TitleCommand::~TitleCommand(TitleCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A2A0;
  v2 = (TitleCommand *)((char *)this + 24);
  j_CommandMessage::~CommandMessage((TitleCommand *)((char *)this + 120));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall TitleCommand::setup(TitleCommand *this, CommandRegistry *a2)
{
  TitleCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r5@18
  int v11; // r6@18
  unsigned int *v12; // r2@20
  signed int v13; // r1@22
  int *v14; // r0@28
  void *v15; // r0@33
  void *v16; // r0@34
  void *v17; // r5@35
  int v18; // r6@35
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int *v21; // r0@45
  void *v22; // r0@50
  void *v23; // r0@51
  void *v24; // r0@52
  void *v25; // r0@53
  void *v26; // r5@54
  int v27; // r6@54
  unsigned int *v28; // r2@56
  signed int v29; // r1@58
  int *v30; // r0@64
  void *v31; // r0@69
  void *v32; // r0@70
  __int64 v33; // r2@71
  void *v34; // r0@71
  char v35; // r0@72
  char v36; // r0@75
  int v37; // r0@78
  __int64 v38; // r2@78
  void *v39; // r0@78
  void *v40; // r0@79
  char v41; // r0@80
  char v42; // r0@83
  int v43; // r0@86
  __int64 v44; // r2@86
  void *v45; // r0@86
  void *v46; // r0@87
  char v47; // r0@88
  char v48; // r0@91
  char v49; // r0@94
  int v50; // r0@97
  __int64 v51; // r2@97
  void *v52; // r0@97
  void *v53; // r0@98
  void *v54; // r0@99
  char v55; // r0@100
  char v56; // r0@103
  char v57; // r0@106
  char v58; // r0@109
  char v59; // r0@112
  int v60; // r0@115
  void *v61; // r0@115
  void *v62; // r0@116
  void *v63; // r0@117
  void *v64; // r0@118
  void *v65; // r0@119
  unsigned int *v66; // r2@121
  signed int v67; // r1@123
  unsigned int *v68; // r2@125
  signed int v69; // r1@127
  unsigned int *v70; // r2@129
  signed int v71; // r1@131
  unsigned int *v72; // r2@133
  signed int v73; // r1@135
  unsigned int *v74; // r2@137
  signed int v75; // r1@139
  unsigned int *v76; // r2@141
  signed int v77; // r1@143
  unsigned int *v78; // r2@145
  signed int v79; // r1@147
  unsigned int *v80; // r2@149
  signed int v81; // r1@151
  unsigned int *v82; // r2@153
  signed int v83; // r1@155
  unsigned int *v84; // r2@157
  signed int v85; // r1@159
  int v86; // r2@161
  signed int v87; // r1@163
  int v88; // r2@165
  signed int v89; // r1@167
  int v90; // r2@169
  signed int v91; // r1@171
  int v92; // r2@173
  signed int v93; // r1@175
  int v94; // r2@177
  signed int v95; // r1@179
  int v96; // r2@181
  signed int v97; // r1@183
  int v98; // r2@185
  signed int v99; // r1@187
  int v100; // r2@189
  signed int v101; // r1@191
  unsigned int *v102; // r2@193
  signed int v103; // r1@195
  unsigned int *v104; // r2@197
  signed int v105; // r1@199
  unsigned int *v106; // r2@201
  signed int v107; // r1@203
  unsigned int *v108; // r2@205
  signed int v109; // r1@207
  unsigned int *v110; // r2@209
  signed int v111; // r1@211
  char v112; // [sp+1Ch] [bp-2E4h]@115
  int v113; // [sp+28h] [bp-2D8h]@115
  char v114; // [sp+44h] [bp-2BCh]@112
  int v115; // [sp+50h] [bp-2B0h]@116
  char v116; // [sp+6Ch] [bp-294h]@109
  int v117; // [sp+78h] [bp-288h]@117
  char v118; // [sp+94h] [bp-26Ch]@106
  int v119; // [sp+A0h] [bp-260h]@118
  char v120; // [sp+BCh] [bp-244h]@103
  int v121; // [sp+C8h] [bp-238h]@119
  __int64 v122; // [sp+E4h] [bp-21Ch]@100
  char v123; // [sp+ECh] [bp-214h]@97
  int v124; // [sp+F8h] [bp-208h]@97
  char v125; // [sp+114h] [bp-1ECh]@94
  int v126; // [sp+120h] [bp-1E0h]@98
  char v127; // [sp+13Ch] [bp-1C4h]@91
  int v128; // [sp+148h] [bp-1B8h]@99
  __int64 v129; // [sp+164h] [bp-19Ch]@88
  char v130; // [sp+16Ch] [bp-194h]@86
  int v131; // [sp+178h] [bp-188h]@86
  char v132; // [sp+194h] [bp-16Ch]@83
  int v133; // [sp+1A0h] [bp-160h]@87
  __int64 v134; // [sp+1BCh] [bp-144h]@80
  char v135; // [sp+1C4h] [bp-13Ch]@78
  int v136; // [sp+1D0h] [bp-130h]@78
  char v137; // [sp+1ECh] [bp-114h]@75
  int v138; // [sp+1F8h] [bp-108h]@79
  __int64 v139; // [sp+214h] [bp-ECh]@72
  int v140; // [sp+220h] [bp-E0h]@71
  int v141; // [sp+224h] [bp-DCh]@54
  int v142; // [sp+228h] [bp-D8h]@54
  void *v143; // [sp+22Ch] [bp-D4h]@54
  int v144; // [sp+230h] [bp-D0h]@54
  char *v145; // [sp+234h] [bp-CCh]@54
  int v146; // [sp+23Ch] [bp-C4h]@54
  int v147; // [sp+240h] [bp-C0h]@35
  int v148; // [sp+244h] [bp-BCh]@35
  int v149; // [sp+248h] [bp-B8h]@35
  int v150; // [sp+24Ch] [bp-B4h]@35
  int v151; // [sp+250h] [bp-B0h]@35
  int v152; // [sp+254h] [bp-ACh]@35
  void *v153; // [sp+258h] [bp-A8h]@35
  int v154; // [sp+25Ch] [bp-A4h]@35
  char *v155; // [sp+260h] [bp-A0h]@35
  int v156; // [sp+268h] [bp-98h]@35
  int v157; // [sp+26Ch] [bp-94h]@18
  int v158; // [sp+270h] [bp-90h]@18
  void *v159; // [sp+274h] [bp-8Ch]@18
  int v160; // [sp+278h] [bp-88h]@18
  char *v161; // [sp+27Ch] [bp-84h]@18
  int v162; // [sp+284h] [bp-7Ch]@18
  int v163; // [sp+288h] [bp-78h]@1
  int v164; // [sp+28Ch] [bp-74h]@1
  void *v165; // [sp+290h] [bp-70h]@1
  int v166; // [sp+294h] [bp-6Ch]@1
  char *v167; // [sp+298h] [bp-68h]@1
  int v168; // [sp+2A0h] [bp-60h]@1
  __int16 v169; // [sp+2BCh] [bp-44h]@78
  __int16 v170; // [sp+2C0h] [bp-40h]@86
  __int16 v171; // [sp+2C4h] [bp-3Ch]@94
  __int16 v172; // [sp+2C8h] [bp-38h]@97
  __int16 v173; // [sp+2CCh] [bp-34h]@75
  __int16 v174; // [sp+2D0h] [bp-30h]@106
  __int16 v175; // [sp+2D4h] [bp-2Ch]@109
  __int16 v176; // [sp+2D8h] [bp-28h]@112
  __int16 v177; // [sp+2DCh] [bp-24h]@115

  v2 = this;
  sub_21E94B4((void **)&v168, "TitleClear");
  sub_21E94B4((void **)&v163, "clear");
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v3 = j_operator new(8u);
  v165 = v3;
  v167 = (char *)v3 + 8;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TitleCommand::Mode> const*,std::pair<std::string,TitleCommand::Mode>*>(
         (int)&v163,
         (int)&v165,
         (int)v3);
  v166 = v4;
  j_CommandRegistry::addEnumValues<TitleCommand::Mode>((int)v2, (int)&v168, (unsigned __int64 *)&v165);
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
    v3 = v165;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v163 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
    else
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v168 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v162, "TitleReset");
  sub_21E94B4((void **)&v157, "reset");
  v158 = 1;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v10 = j_operator new(8u);
  v159 = v10;
  v161 = (char *)v10 + 8;
  v11 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TitleCommand::Mode> const*,std::pair<std::string,TitleCommand::Mode>*>(
          (int)&v157,
          (int)&v159,
          (int)v10);
  v160 = v11;
  j_CommandRegistry::addEnumValues<TitleCommand::Mode>((int)v2, (int)&v162, (unsigned __int64 *)&v159);
  if ( v10 != (void *)v11 )
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v10 = (char *)v10 + 8;
    while ( v10 != (void *)v11 );
    v10 = v159;
  if ( v10 )
    j_operator delete(v10);
  v15 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v157 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v162 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v156, "TitleSet");
  sub_21E94B4((void **)&v147, "title");
  v148 = 2;
  sub_21E94B4((void **)&v149, "subtitle");
  v150 = 3;
  sub_21E94B4((void **)&v151, "actionbar");
  v152 = 4;
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v17 = j_operator new(0x18u);
  v153 = v17;
  v155 = (char *)v17 + 24;
  v18 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TitleCommand::Mode> const*,std::pair<std::string,TitleCommand::Mode>*>(
          (int)&v147,
          (int)&v153,
          (int)v17);
  v154 = v18;
  j_CommandRegistry::addEnumValues<TitleCommand::Mode>((int)v2, (int)&v156, (unsigned __int64 *)&v153);
  if ( v17 != (void *)v18 )
      v21 = (int *)(*(_DWORD *)v17 - 12);
      if ( v21 != &dword_28898C0 )
        v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v17 = (char *)v17 + 8;
    while ( v17 != (void *)v18 );
    v17 = v153;
  if ( v17 )
    j_operator delete(v17);
  v22 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v151 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v149 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v147 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v156 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v146, "TitleTimes");
  sub_21E94B4((void **)&v141, "times");
  v142 = 5;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v26 = j_operator new(8u);
  v143 = v26;
  v145 = (char *)v26 + 8;
  v27 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TitleCommand::Mode> const*,std::pair<std::string,TitleCommand::Mode>*>(
          (int)&v141,
          (int)&v143,
          (int)v26);
  v144 = v27;
  j_CommandRegistry::addEnumValues<TitleCommand::Mode>((int)v2, (int)&v146, (unsigned __int64 *)&v143);
  if ( v26 != (void *)v27 )
      v30 = (int *)(*(_DWORD *)v26 - 12);
      if ( v30 != &dword_28898C0 )
        v28 = (unsigned int *)(*(_DWORD *)v26 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v26 = (char *)v26 + 8;
    while ( v26 != (void *)v27 );
    v26 = v143;
  if ( v26 )
    j_operator delete(v26);
  v31 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v141 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v146 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v140, "title");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v140, "commands.title.description", 1, 16, 0);
  v34 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v86 = v140 - 4;
        v87 = __ldrex((unsigned int *)v33);
        HIDWORD(v33) = v87 - 1;
      while ( __strex(v87 - 1, (unsigned int *)v33) );
      v87 = *(_DWORD *)v33;
      HIDWORD(v33) = *(_DWORD *)v33 - 1;
      *(_DWORD *)v33 = HIDWORD(v33);
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  LODWORD(v33) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v139, 1, v33);
  v35 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  __dmb();
  if ( !(v35 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v173 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v137,
    &v173,
    (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
    "player",
    0,
    24,
    -1);
  v36 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id[0];
  if ( !(v36 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TitleCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id);
  v169 = type_id<CommandRegistry,TitleCommand::Mode>(void)::id;
  v37 = j_CommandParameterData::CommandParameterData(
          (int)&v135,
          &v169,
          (unsigned int)CommandRegistry::parse<TitleCommand::Mode>,
          "clear",
          1,
          (int)"TitleClear",
          20,
          0,
          -1);
  j_CommandRegistry::registerOverload<TitleCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "title",
    v139,
    v37);
  v39 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v88 = v136 - 4;
        v89 = __ldrex((unsigned int *)v38);
        HIDWORD(v38) = v89 - 1;
      while ( __strex(v89 - 1, (unsigned int *)v38) );
      v89 = *(_DWORD *)v38;
      HIDWORD(v38) = *(_DWORD *)v38 - 1;
      *(_DWORD *)v38 = HIDWORD(v38);
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v90 = v138 - 4;
        v91 = __ldrex((unsigned int *)v38);
        HIDWORD(v38) = v91 - 1;
      while ( __strex(v91 - 1, (unsigned int *)v38) );
      v91 = *(_DWORD *)v38;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  LODWORD(v38) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v134, 1, v38);
  v41 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  if ( !(v41 & 1)
    (int)&v132,
  v42 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id[0];
  if ( !(v42 & 1)
  v170 = type_id<CommandRegistry,TitleCommand::Mode>(void)::id;
  v43 = j_CommandParameterData::CommandParameterData(
          (int)&v130,
          &v170,
          "reset",
          (int)"TitleReset",
    v134,
    v43);
  v45 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v92 = v131 - 4;
        v93 = __ldrex((unsigned int *)v44);
        HIDWORD(v44) = v93 - 1;
      while ( __strex(v93 - 1, (unsigned int *)v44) );
      v93 = *(_DWORD *)v44;
      HIDWORD(v44) = *(_DWORD *)v44 - 1;
      *(_DWORD *)v44 = HIDWORD(v44);
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v94 = v133 - 4;
        v95 = __ldrex((unsigned int *)v44);
        HIDWORD(v44) = v95 - 1;
      while ( __strex(v95 - 1, (unsigned int *)v44) );
      v95 = *(_DWORD *)v44;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  LODWORD(v44) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v129, 1, v44);
  v47 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  if ( !(v47 & 1)
    (int)&v127,
  v48 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id[0];
  if ( !(v48 & 1)
  v171 = type_id<CommandRegistry,TitleCommand::Mode>(void)::id;
    (int)&v125,
    &v171,
    (unsigned int)CommandRegistry::parse<TitleCommand::Mode>,
    "titleLocation",
    1,
    (int)"TitleSet",
    20,
  v49 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id;
  if ( !(v49 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id) )
    type_id<CommandRegistry,CommandMessage>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id);
  v172 = type_id<CommandRegistry,CommandMessage>(void)::id;
  v50 = j_CommandParameterData::CommandParameterData(
          (int)&v123,
          &v172,
          (unsigned int)CommandRegistry::parse<CommandMessage>,
          "titleText",
          120,
  j_CommandRegistry::registerOverload<TitleCommand,CommandParameterData,CommandParameterData,CommandParameterData>(
    v129,
    v50);
  v52 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v96 = v124 - 4;
        v97 = __ldrex((unsigned int *)v51);
        HIDWORD(v51) = v97 - 1;
      while ( __strex(v97 - 1, (unsigned int *)v51) );
      v97 = *(_DWORD *)v51;
      HIDWORD(v51) = *(_DWORD *)v51 - 1;
      *(_DWORD *)v51 = HIDWORD(v51);
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v98 = v126 - 4;
        v99 = __ldrex((unsigned int *)v51);
        HIDWORD(v51) = v99 - 1;
      while ( __strex(v99 - 1, (unsigned int *)v51) );
      v99 = *(_DWORD *)v51;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v100 = v128 - 4;
        v101 = __ldrex((unsigned int *)v51);
        HIDWORD(v51) = v101 - 1;
      while ( __strex(v101 - 1, (unsigned int *)v51) );
      v101 = *(_DWORD *)v51;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  LODWORD(v51) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v122, 1, v51);
  v55 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  if ( !(v55 & 1)
    (int)&v120,
  v56 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id[0];
  if ( !(v56 & 1)
  v174 = type_id<CommandRegistry,TitleCommand::Mode>(void)::id;
    (int)&v118,
    &v174,
    "times",
    (int)"TitleTimes",
  v57 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v57 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v175 = type_id<CommandRegistry,int>(void)::id;
    (int)&v116,
    &v175,
    (unsigned int)CommandRegistry::parse<int>,
    "fadeIn",
    132,
  v58 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v58 & 1)
  v176 = type_id<CommandRegistry,int>(void)::id;
    (int)&v114,
    &v176,
    "stay",
    136,
  v59 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v59 & 1)
  v177 = type_id<CommandRegistry,int>(void)::id;
  v60 = j_CommandParameterData::CommandParameterData(
          (int)&v112,
          &v177,
          (unsigned int)CommandRegistry::parse<int>,
          "fadeOut",
          140,
  j_CommandRegistry::registerOverload<TitleCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v122,
    v60);
  v61 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v113 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v115 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v117 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v119 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v121 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
}


int __fastcall TitleCommand::~TitleCommand(TitleCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A2A0;
  v2 = (TitleCommand *)((char *)this + 24);
  j_CommandMessage::~CommandMessage((TitleCommand *)((char *)this + 120));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall TitleCommand::~TitleCommand(TitleCommand *this)
{
  TitleCommand::~TitleCommand(this);
}


signed int __fastcall TitleCommand::execute(TitleCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r9@1
  const CommandOrigin *v4; // r6@1
  TitleCommand *v5; // r7@1
  signed int result; // r0@1
  unsigned int v7; // r0@3
  signed int v8; // r4@3
  void *v9; // r8@6
  Level *v10; // r0@6
  int v11; // r6@6
  int v12; // r0@8
  const char **v13; // r0@8
  void *v14; // r4@9
  int v15; // r7@12
  int v16; // r5@12
  int v17; // r6@12
  int v18; // r7@12
  int v19; // r0@12
  Entity *v20; // r0@16
  Player *v21; // r4@16
  Level *v22; // r0@16
  int v23; // r5@16
  void (__fastcall *v24)(int, char *, void *, int); // r6@16
  char *v25; // r7@16
  int v26; // r0@16
  int v27; // r6@17
  unsigned int *v28; // r1@18
  unsigned int v29; // r0@20
  int v30; // r6@22
  unsigned int *v31; // r1@23
  unsigned int v32; // r0@25
  unsigned int *v33; // r4@29
  unsigned int v34; // r0@31
  unsigned int *v35; // r4@35
  unsigned int v36; // r0@37
  int v37; // r6@42
  unsigned int *v38; // r1@43
  unsigned int v39; // r0@45
  unsigned int *v40; // r4@49
  unsigned int v41; // r0@51
  void *v42; // r0@56
  void *v43; // r0@57
  unsigned int *v44; // r2@58
  signed int v45; // r1@60
  int v46; // r6@65
  unsigned int *v47; // r1@66
  unsigned int v48; // r0@68
  unsigned int *v49; // r4@72
  unsigned int v50; // r0@74
  char *v51; // r5@79 OVERLAPPED
  char *v52; // r6@79 OVERLAPPED
  unsigned int *v53; // r2@81
  signed int v54; // r1@83
  int *v55; // r0@89
  void *v56; // r0@94
  void *v57; // r0@95
  int v58; // r4@97
  unsigned int *v59; // r1@98
  unsigned int *v60; // r5@104
  unsigned int *v61; // r2@112
  signed int v62; // r1@114
  unsigned int *v63; // r2@116
  signed int v64; // r1@118
  unsigned int *v65; // r2@120
  signed int v66; // r1@122
  int v67; // [sp+0h] [bp-90h]@79
  char *v68; // [sp+8h] [bp-88h]@79
  char *v69; // [sp+Ch] [bp-84h]@79
  char *v70; // [sp+10h] [bp-80h]@79
  int v71; // [sp+18h] [bp-78h]@79
  char v72; // [sp+1Ch] [bp-74h]@14
  int v73; // [sp+20h] [bp-70h]@22
  char v74; // [sp+28h] [bp-68h]@14
  int v75; // [sp+2Ch] [bp-64h]@65
  char v76; // [sp+34h] [bp-5Ch]@6
  int v77; // [sp+38h] [bp-58h]@17
  char v78; // [sp+40h] [bp-50h]@6
  int v79; // [sp+44h] [bp-4Ch]@42
  int v80; // [sp+4Ch] [bp-44h]@6
  int v81; // [sp+50h] [bp-40h]@6
  int *v82; // [sp+54h] [bp-3Ch]@2
  int v83; // [sp+58h] [bp-38h]@97

  v3 = a3;
  v4 = a2;
  v5 = this;
  result = j_MessagingCommand::checkChatPermissions(this, a2, a3);
  if ( result == 1 )
  {
    j_CommandSelector<Player>::results((int)&v82, (TitleCommand *)((char *)v5 + 24), v4);
    result = j_Command::checkHasTargets<Player>((__int64 **)&v82, v3);
    if ( result )
    {
      v7 = *((_DWORD *)v5 + 5);
      v8 = 2;
      if ( v7 > 5 )
      {
LABEL_6:
        j_CommandMessage::getMessage((CommandMessage *)&v81, (TitleCommand *)((char *)v5 + 120), v4);
        v9 = j_operator new(0x24u);
        *((_DWORD *)v9 + 1) = 2;
        *((_DWORD *)v9 + 2) = 1;
        *((_BYTE *)v9 + 12) = 0;
        *(_DWORD *)v9 = &off_26E9A6C;
        *((_DWORD *)v9 + 4) = v8;
        sub_21E8AF4((int *)v9 + 5, &v81);
        *((_DWORD *)v9 + 6) = -1;
        *((_DWORD *)v9 + 7) = -1;
        *((_DWORD *)v9 + 8) = -1;
        (*(void (__fastcall **)(int *, const CommandOrigin *))(*(_DWORD *)v4 + 12))(&v80, v4);
        v10 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
        v11 = j_Level::getEventing(v10);
        j_CommandSelectorResults<Player>::begin((int)&v78, &v82);
        j_CommandSelectorResults<Player>::end((int)&v76, (int)&v82);
        while ( j_SelectorIterator<Player>::operator!=((int)&v78, (int)&v76) )
        {
          v12 = j_SelectorIterator<Player>::operator*((int)&v78);
          v13 = (const char **)(*(int (**)(void))(*(_DWORD *)v12 + 188))();
          j_MinecraftEventing::fireEventPlayerMessageTitle(v11, (const char **)&v80, v13, (const char **)&v81);
          j_SelectorIterator<Player>::operator++((int)&v78);
        }
        v27 = v77;
        if ( v77 )
          v28 = (unsigned int *)(v77 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 == 1 )
            v33 = (unsigned int *)(v27 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
            if ( &pthread_create )
            {
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
            }
            else
              v34 = (*v33)--;
            if ( v34 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
        v37 = v79;
        if ( v79 )
          v38 = (unsigned int *)(v79 + 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 == 1 )
            v40 = (unsigned int *)(v37 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
        v42 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v80 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        v43 = (void *)(v81 - 12);
        if ( (int *)(v81 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v81 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
      }
      else
        switch ( v7 )
          case 0u:
            v14 = j_operator new(0x24u);
            *((_DWORD *)v14 + 1) = 2;
            *((_DWORD *)v14 + 2) = 1;
            *((_BYTE *)v14 + 12) = 0;
            *(_DWORD *)v14 = &off_26E9A6C;
            *((_DWORD *)v14 + 4) = 0;
            sub_21E94B4((void **)v14 + 5, (const char *)&unk_257BC67);
            goto LABEL_11;
          case 1u:
            *((_DWORD *)v14 + 4) = 1;
LABEL_11:
            *((_DWORD *)v14 + 6) = -1;
            *((_DWORD *)v14 + 7) = -1;
            *((_DWORD *)v14 + 8) = -1;
            goto LABEL_13;
          default:
            goto LABEL_6;
          case 3u:
          case 4u:
            v8 = *((_DWORD *)v5 + 5);
          case 5u:
            v15 = (int)v5 + 132;
            v16 = *(_DWORD *)v15;
            v17 = *(_DWORD *)(v15 + 4);
            v18 = *(_DWORD *)(v15 + 8);
            *((_DWORD *)v14 + 4) = 5;
            v19 = (int)v14 + 24;
            *(_DWORD *)v19 = v16;
            *(_DWORD *)(v19 + 4) = v17;
            *(_DWORD *)(v19 + 8) = v18;
LABEL_13:
            v9 = v14;
            break;
      j_CommandSelectorResults<Player>::begin((int)&v74, &v82);
      j_CommandSelectorResults<Player>::end((int)&v72, (int)&v82);
      while ( j_SelectorIterator<Player>::operator!=((int)&v74, (int)&v72) )
        v20 = (Entity *)j_SelectorIterator<Player>::operator*((int)&v74);
        v21 = v20;
        v22 = (Level *)j_Entity::getLevel(v20);
        v23 = j_Level::getPacketSender(v22);
        v24 = *(void (__fastcall **)(int, char *, void *, int))(*(_DWORD *)v23 + 16);
        v25 = j_Player::getClientId(v21);
        v26 = j_Player::getClientSubId(v21);
        v24(v23, v25, v9, v26);
        j_SelectorIterator<Player>::operator++((int)&v74);
      v30 = v73;
      if ( v73 )
        v31 = (unsigned int *)(v73 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        else
          v32 = (*v31)--;
        if ( v32 == 1 )
          v35 = (unsigned int *)(v30 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
      v46 = v75;
      if ( v75 )
        v47 = (unsigned int *)(v75 + 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 == 1 )
          v49 = (unsigned int *)(v46 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
      sub_21E94B4((void **)&v71, "commands.title.success");
      j_CommandOutputParameter::CommandOutputParameter((int)&v67, &v82);
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v68 = (char *)j_operator new(8u);
      v70 = v68 + 8;
      v69 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v67,
                      (int)&v68,
                      (int)v68);
      j_CommandOutput::success((int)v3, &v71, (unsigned __int64 *)&v68);
      *(_QWORD *)&v51 = *(_QWORD *)&v68;
      if ( v68 != v69 )
        do
          v55 = (int *)(*(_DWORD *)v51 - 12);
          if ( v55 != &dword_28898C0 )
            v53 = (unsigned int *)(*(_DWORD *)v51 - 4);
                v54 = __ldrex(v53);
              while ( __strex(v54 - 1, v53) );
              v54 = (*v53)--;
            if ( v54 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          v51 += 8;
        while ( v51 != v52 );
        v51 = v68;
      if ( v51 )
        j_operator delete(v51);
      v56 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v67 - 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v56);
      v57 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v71 - 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j__ZdlPv_9(v57);
      result = (*(int (__fastcall **)(void *))(*(_DWORD *)v9 + 4))(v9);
    }
    v58 = v83;
    if ( v83 )
      v59 = (unsigned int *)(v83 + 4);
      if ( &pthread_create )
        __dmb();
          result = __ldrex(v59);
        while ( __strex(result - 1, v59) );
        result = (*v59)--;
      if ( result == 1 )
        v60 = (unsigned int *)(v58 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 8))(v58);
            result = __ldrex(v60);
          while ( __strex(result - 1, v60) );
          result = (*v60)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v58 + 12))(v58);
  }
  return result;
}


void __fastcall TitleCommand::setup(TitleCommand *this, CommandRegistry *a2)
{
  TitleCommand::setup(this, a2);
}
