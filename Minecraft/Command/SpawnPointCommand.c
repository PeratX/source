

int __fastcall SpawnPointCommand::~SpawnPointCommand(SpawnPointCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A1C4;
  j_CommandSelectorBase::~CommandSelectorBase((SpawnPointCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall SpawnPointCommand::execute(SpawnPointCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r7@1
  SpawnPointCommand *v4; // r9@1
  Json::Value *v5; // r4@1
  Dimension *v6; // r6@1
  int v7; // r10@3
  Player *v8; // r11@4
  int v9; // r0@5
  int v10; // r0@6
  int v11; // r0@6
  const char **v12; // r0@7
  void *v13; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  int v16; // r6@18
  unsigned int *v17; // r1@19
  unsigned int v18; // r0@21
  unsigned int *v19; // r7@25
  unsigned int v20; // r0@27
  int v21; // r6@32
  unsigned int *v22; // r1@33
  unsigned int v23; // r0@35
  unsigned int *v24; // r7@39
  unsigned int v25; // r0@41
  int v26; // r0@47
  char *v27; // r4@47
  int v28; // r6@47
  unsigned int *v29; // r2@49
  signed int v30; // r1@51
  int *v31; // r0@57
  void *v32; // r0@62
  void *v33; // r0@63
  void *v34; // r0@64
  void *v35; // r0@65
  int v36; // r4@66
  unsigned int *v37; // r1@67
  unsigned int v38; // r0@69
  const char *v39; // r1@71
  char *v40; // r4@73
  int v41; // r6@73
  unsigned int *v42; // r2@75
  signed int v43; // r1@77
  int *v44; // r0@83
  void *v45; // r0@88
  void *v46; // r0@89
  void *v47; // r0@90
  void *v48; // r0@91
  void *v49; // r0@92
  unsigned int *v50; // r2@93
  signed int v51; // r1@95
  unsigned int *v52; // r5@99
  unsigned int v53; // r0@101
  int v54; // r4@107
  unsigned int *v55; // r1@108
  unsigned int v56; // r0@110
  unsigned int *v57; // r5@114
  unsigned int v58; // r0@116
  unsigned int *v59; // r2@122
  signed int v60; // r1@124
  unsigned int *v61; // r2@126
  signed int v62; // r1@128
  unsigned int *v63; // r2@130
  signed int v64; // r1@132
  unsigned int *v65; // r2@134
  signed int v66; // r1@136
  unsigned int *v67; // r2@138
  signed int v68; // r1@140
  unsigned int *v69; // r2@142
  signed int v70; // r1@144
  unsigned int *v71; // r2@146
  signed int v72; // r1@148
  unsigned int *v73; // r2@150
  signed int v74; // r1@152
  int v75; // [sp+4h] [bp-F4h]@73
  int v76; // [sp+Ch] [bp-ECh]@73
  int v77; // [sp+14h] [bp-E4h]@73
  int v78; // [sp+1Ch] [bp-DCh]@73
  char *v79; // [sp+24h] [bp-D4h]@73
  char *v80; // [sp+28h] [bp-D0h]@73
  char *v81; // [sp+2Ch] [bp-CCh]@73
  int v82; // [sp+34h] [bp-C4h]@73
  char v83; // [sp+38h] [bp-C0h]@47
  int v84; // [sp+3Ch] [bp-BCh]@66
  int v85; // [sp+44h] [bp-B4h]@47
  int v86; // [sp+4Ch] [bp-ACh]@47
  int v87; // [sp+54h] [bp-A4h]@47
  int v88; // [sp+5Ch] [bp-9Ch]@47
  char *v89; // [sp+64h] [bp-94h]@47
  char *v90; // [sp+68h] [bp-90h]@47
  char *v91; // [sp+6Ch] [bp-8Ch]@47
  int v92; // [sp+74h] [bp-84h]@47
  int v93; // [sp+7Ch] [bp-7Ch]@7
  int v94; // [sp+80h] [bp-78h]@6
  int v95; // [sp+84h] [bp-74h]@6
  int v96; // [sp+88h] [bp-70h]@6
  char v97; // [sp+8Ch] [bp-6Ch]@3
  int v98; // [sp+90h] [bp-68h]@18
  char v99; // [sp+98h] [bp-60h]@3
  int v100; // [sp+9Ch] [bp-5Ch]@32
  int *v101; // [sp+A4h] [bp-54h]@2
  int v102; // [sp+A8h] [bp-50h]@107
  int v103; // [sp+ACh] [bp-4Ch]@2
  int v104; // [sp+B0h] [bp-48h]@2
  int v105; // [sp+B4h] [bp-44h]@2
  char v106; // [sp+B8h] [bp-40h]@2
  int v107; // [sp+C4h] [bp-34h]@2
  int v108; // [sp+C8h] [bp-30h]@2
  int v109; // [sp+CCh] [bp-2Ch]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Dimension *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 28))(a2);
  if ( !v6 )
    return;
  j_CommandPosition::getPosition((CommandPosition *)&v106, (SpawnPointCommand *)((char *)v4 + 116), (int)v3);
  j_BlockPos::BlockPos((int)&v107, (int)&v106);
  v103 = v107;
  v104 = v108;
  v105 = v109;
  j_CommandOutput::set<BlockPos>((int)v5, "spawnPos", (int)&v103);
  j_CommandSelector<Player>::results((int)&v101, (SpawnPointCommand *)((char *)v4 + 20), v3);
  if ( j_Command::checkHasTargets<Player>((__int64 **)&v101, v5) )
  {
    j_CommandSelectorResults<Player>::begin((int)&v99, &v101);
    j_CommandSelectorResults<Player>::end((int)&v97, (int)&v101);
    v7 = 0;
    while ( j_SelectorIterator<Player>::operator!=((int)&v99, (int)&v97) )
    {
      v8 = (Player *)j_SelectorIterator<Player>::operator*((int)&v99);
      if ( *((_BYTE *)v4 + 132) )
      {
        v9 = j_Dimension::getId(v6);
        j_Player::setRespawnDimensionId((int)v8, v9);
      }
      else
        v10 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v8 + 52))(v8);
        j_BlockPos::BlockPos((int)&v94, v10);
        v107 = v94;
        v108 = v95;
        v109 = v96;
        v11 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v8 + 524))(v8);
        j_Player::setRespawnDimensionId((int)v8, v11);
      j_Player::setRespawnPosition(v8, (const BlockPos *)&v107, 1);
      sub_21E94B4((void **)&v93, "player");
      v12 = (const char **)(*(int (__fastcall **)(Player *))(*(_DWORD *)v8 + 188))(v8);
      j_CommandOutput::addToResultList(v5, (const char **)&v93, v12);
      ++v7;
      v13 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v93 - 4);
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
          j_j_j_j__ZdlPv_9(v13);
      j_SelectorIterator<Player>::operator++((int)&v99);
    }
    v16 = v98;
    if ( v98 )
      v17 = (unsigned int *)(v98 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v21 = v100;
    if ( v100 )
      v22 = (unsigned int *)(v100 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    if ( v7 == 1 )
      sub_21E94B4((void **)&v92, "commands.spawnpoint.success.single");
      j_CommandSelectorResults<Player>::begin((int)&v83, &v101);
      v26 = j_SelectorIterator<Player>::operator*((int)&v83);
      j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v85, v26);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v86, v107);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v87, v108);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v88, v109);
      v89 = 0;
      v90 = 0;
      v91 = 0;
      v89 = (char *)j_operator new(0x20u);
      v91 = v89 + 32;
      v90 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v85,
                      (int)&v89,
                      (int)v89);
      j_CommandOutput::success((int)v5, &v92, (unsigned __int64 *)&v89);
      v28 = (int)v90;
      v27 = v89;
      if ( v89 != v90 )
          v31 = (int *)(*(_DWORD *)v27 - 12);
          if ( v31 != &dword_28898C0 )
          {
            v29 = (unsigned int *)(*(_DWORD *)v27 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
            }
            else
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v31);
          }
          v27 += 8;
        while ( v27 != (char *)v28 );
        v27 = v89;
      if ( v27 )
        j_operator delete(v27);
      v32 = (void *)(v88 - 12);
      if ( (int *)(v88 - 12) != &dword_28898C0 )
        v67 = (unsigned int *)(v88 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v33 = (void *)(v87 - 12);
      if ( (int *)(v87 - 12) != &dword_28898C0 )
        v69 = (unsigned int *)(v87 - 4);
            v70 = __ldrex(v69);
          while ( __strex(v70 - 1, v69) );
          v70 = (*v69)--;
        if ( v70 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v34 = (void *)(v86 - 12);
      if ( (int *)(v86 - 12) != &dword_28898C0 )
        v71 = (unsigned int *)(v86 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v35 = (void *)(v85 - 12);
      if ( (int *)(v85 - 12) != &dword_28898C0 )
        v73 = (unsigned int *)(v85 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
      v36 = v84;
      if ( v84 )
        v37 = (unsigned int *)(v84 + 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 == 1 )
          v52 = (unsigned int *)(v36 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
          if ( &pthread_create )
            __dmb();
            do
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
          else
            v53 = (*v52)--;
          if ( v53 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
      v49 = (void *)(v92 - 12);
      if ( (int *)(v92 - 12) == &dword_28898C0 )
        goto LABEL_107;
      v50 = (unsigned int *)(v92 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        goto LABEL_159;
    else
      v39 = "commands.spawnpoint.success.multiple.specific";
      if ( !*((_BYTE *)v4 + 132) )
        v39 = "commands.spawnpoint.success.multiple.generic";
      sub_21E94B4((void **)&v82, v39);
      j_CommandOutputParameter::CommandOutputParameter((int)&v75, &v101);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v76, v107);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v77, v108);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v78, v109);
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v79 = (char *)j_operator new(0x20u);
      v81 = v79 + 32;
      v80 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v75,
                      (int)&v79,
                      (int)v79);
      j_CommandOutput::success((int)v5, &v82, (unsigned __int64 *)&v79);
      v41 = (int)v80;
      v40 = v79;
      if ( v79 != v80 )
          v44 = (int *)(*(_DWORD *)v40 - 12);
          if ( v44 != &dword_28898C0 )
            v42 = (unsigned int *)(*(_DWORD *)v40 - 4);
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
          v40 += 8;
        while ( v40 != (char *)v41 );
        v40 = v79;
      if ( v40 )
        j_operator delete(v40);
      v45 = (void *)(v78 - 12);
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v78 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v45);
      v46 = (void *)(v77 - 12);
      if ( (int *)(v77 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v77 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v46);
      v47 = (void *)(v76 - 12);
      if ( (int *)(v76 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v76 - 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      v48 = (void *)(v75 - 12);
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v75 - 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j__ZdlPv_9(v48);
      v49 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) == &dword_28898C0 )
      v50 = (unsigned int *)(v82 - 4);
LABEL_159:
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v49);
    v51 = (*v50)--;
    goto LABEL_159;
  }
LABEL_107:
  v54 = v102;
  if ( v102 )
    v55 = (unsigned int *)(v102 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v54 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
}


void __fastcall SpawnPointCommand::~SpawnPointCommand(SpawnPointCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A1C4;
  j_CommandSelectorBase::~CommandSelectorBase((SpawnPointCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall SpawnPointCommand::execute(SpawnPointCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SpawnPointCommand::execute(this, a2, a3);
}


void __fastcall SpawnPointCommand::setup(SpawnPointCommand *this, CommandRegistry *a2)
{
  SpawnPointCommand::setup(this, a2);
}


Command *__fastcall SpawnPointCommand::SpawnPointCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A1C4;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 116));
  *((_BYTE *)v1 + 132) = 0;
  return v1;
}


void __fastcall SpawnPointCommand::~SpawnPointCommand(SpawnPointCommand *this)
{
  SpawnPointCommand::~SpawnPointCommand(this);
}


void __fastcall SpawnPointCommand::setup(SpawnPointCommand *this, CommandRegistry *a2)
{
  SpawnPointCommand *v2; // r7@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  int v7; // r0@8
  void *v8; // r0@8
  void *v9; // r0@9
  int v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  char v16; // [sp+1Ch] [bp-7Ch]@8
  int v17; // [sp+28h] [bp-70h]@8
  char v18; // [sp+44h] [bp-54h]@5
  int v19; // [sp+50h] [bp-48h]@9
  __int64 v20; // [sp+6Ch] [bp-2Ch]@2
  int v21; // [sp+78h] [bp-20h]@1
  __int16 v22; // [sp+7Ch] [bp-1Ch]@5
  __int16 v23; // [sp+80h] [bp-18h]@8

  v2 = this;
  sub_21E94B4((void **)&v21, "spawnpoint");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v21, "commands.spawnpoint.description", 1, 0, 0);
  v4 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v10 = v21 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v11 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v11 - 1;
      }
      while ( __strex(v11 - 1, (unsigned int *)v3) );
    }
    else
      v11 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v20, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v22 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v18,
    &v22,
    (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
    "player",
    0,
    20,
    1,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v23 = type_id<CommandRegistry,CommandPosition>(void)::id;
  v7 = j_CommandParameterData::CommandParameterData(
         (int)&v16,
         &v23,
         (unsigned int)CommandRegistry::parse<CommandPosition>,
         "spawnPos",
         0,
         116,
         1,
         132);
  j_CommandRegistry::registerOverload<SpawnPointCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "spawnpoint",
    v20,
    v7);
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}
