

signed int __fastcall StopSoundCommand::execute(StopSoundCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r5@1
  StopSoundCommand *v4; // r8@1
  signed int result; // r0@1
  int *v6; // r8@2
  int v7; // t1@2
  int v8; // r9@2
  char v9; // r0@2
  char *v10; // r7@4
  char *i; // r10@4
  void *v12; // r0@6
  void *v13; // r0@10
  char *v14; // r9@12
  __int64 v15; // r6@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  int *v18; // r0@22
  char *v19; // r4@27
  void *v20; // r0@27
  void *v21; // r0@28
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  __int64 v24; // r6@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  int *v27; // r0@43
  void *v28; // r0@48
  void *v29; // r0@49
  char *v30; // r11@51
  CommandOutput *v31; // r10@51
  Level *v32; // r0@51
  int v33; // r0@51
  int v34; // r6@51
  void (__fastcall *v35)(int, char *, void ***, int); // r5@51
  char *v36; // r7@51
  int v37; // r0@51
  void *v38; // r0@51
  unsigned int *v39; // r2@53
  signed int v40; // r1@55
  unsigned int *v41; // r2@57
  signed int v42; // r1@59
  unsigned int *v43; // r2@61
  signed int v44; // r1@63
  unsigned int *v45; // r2@65
  signed int v46; // r1@67
  unsigned int *v47; // r2@73
  signed int v48; // r1@75
  unsigned int *v49; // r2@77
  signed int v50; // r1@79
  int v51; // r4@110
  unsigned int *v52; // r1@111
  unsigned int *v53; // r5@117
  int v54; // r4@124
  unsigned int *v55; // r1@125
  unsigned int *v56; // r5@131
  int v57; // r4@138
  unsigned int *v58; // r1@139
  unsigned int *v59; // r5@145
  char v60; // [sp+14h] [bp-CCh]@4
  int v61; // [sp+1Ch] [bp-C4h]@2
  int *v62; // [sp+20h] [bp-C0h]@2
  Entity *v63; // [sp+30h] [bp-B0h]@5
  void **v64; // [sp+34h] [bp-ACh]@51
  int v65; // [sp+38h] [bp-A8h]@51
  int v66; // [sp+3Ch] [bp-A4h]@51
  char v67; // [sp+40h] [bp-A0h]@51
  int v68; // [sp+44h] [bp-9Ch]@51
  char v69; // [sp+48h] [bp-98h]@51
  int v70; // [sp+4Ch] [bp-94h]@12
  void *ptr; // [sp+54h] [bp-8Ch]@12
  void *v72; // [sp+58h] [bp-88h]@12
  char *v73; // [sp+5Ch] [bp-84h]@12
  int v74; // [sp+64h] [bp-7Ch]@12
  int v75; // [sp+68h] [bp-78h]@33
  int v76; // [sp+70h] [bp-70h]@33
  void *v77; // [sp+78h] [bp-68h]@33
  void *v78; // [sp+7Ch] [bp-64h]@33
  char *v79; // [sp+80h] [bp-60h]@33
  int v80; // [sp+88h] [bp-58h]@33
  int v81; // [sp+90h] [bp-50h]@10
  int v82; // [sp+94h] [bp-4Ch]@6
  char v83; // [sp+98h] [bp-48h]@2
  int v84; // [sp+9Ch] [bp-44h]@110
  char v85; // [sp+A4h] [bp-3Ch]@2
  int v86; // [sp+A8h] [bp-38h]@124
  int *v87; // [sp+B0h] [bp-30h]@1
  int v88; // [sp+B4h] [bp-2Ch]@138

  v3 = a3;
  v4 = this;
  j_CommandSelector<Player>::results((int)&v87, (StopSoundCommand *)((char *)this + 20), a2);
  result = j_Command::checkHasTargets<Player>((__int64 **)&v87, v3);
  if ( !result )
    goto LABEL_138;
  v7 = *((_DWORD *)v4 + 29);
  v6 = (int *)((char *)v4 + 116);
  v62 = v6;
  v8 = *(_DWORD *)(v7 - 12);
  v61 = *(_DWORD *)(v7 - 12);
  j_CommandSelectorResults<Player>::begin((int)&v85, &v87);
  j_CommandSelectorResults<Player>::end((int)&v83, (int)&v87);
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  v10 = &v85;
  v60 = v9;
  for ( i = &v83; ; i = v30 )
  {
    result = j_SelectorIterator<Player>::operator!=((int)v10, (int)i);
    if ( !result )
      break;
    v63 = (Entity *)j_SelectorIterator<Player>::operator*((int)v10);
    if ( j_CommandOutput::wantsData(v3) == 1 )
    {
      sub_21E8AF4(&v82, v6);
      j_CommandOutput::set<std::string>((int)v3, "sound", &v82);
      v12 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) != &dword_28898C0 )
      {
        v43 = (unsigned int *)(v82 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
        }
        else
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      if ( v8 )
        j_CommandOutput::set<bool>((int)v3, "all_sounds", 0);
        j_CommandOutput::set<bool>((int)v3, "one_sound", 1);
      else
        j_CommandOutput::set<bool>((int)v3, "one_sound", 0);
        j_CommandOutput::set<bool>((int)v3, "all_sounds", 1);
      sub_21E94B4((void **)&v81, "player");
      j_CommandOutput::addToResultList((int)v3, (const char **)&v81, (int)v63);
      v13 = (void *)(v81 - 12);
      if ( (int *)(v81 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v81 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
    }
    if ( v8 )
      sub_21E94B4((void **)&v74, "commands.stopsound.success.all");
      j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v70, (int)v63);
      ptr = 0;
      v72 = 0;
      v73 = 0;
      ptr = j_operator new(8u);
      v73 = (char *)ptr + 8;
      v72 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v70,
                      (int)&ptr,
                      (int)ptr);
      j_CommandOutput::success((int)v3, &v74, (unsigned __int64 *)&ptr);
      v14 = v10;
      v15 = *(_QWORD *)&ptr;
      if ( ptr != v72 )
        do
          v18 = (int *)(*(_DWORD *)v15 - 12);
          if ( v18 != &dword_28898C0 )
          {
            v16 = (unsigned int *)(*(_DWORD *)v15 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
            }
            else
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
          }
          LODWORD(v15) = v15 + 8;
        while ( (_DWORD)v15 != HIDWORD(v15) );
        LODWORD(v15) = ptr;
      if ( (_DWORD)v15 )
        j_operator delete((void *)v15);
      v19 = v14;
      v20 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v70 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v74 - 12);
      if ( (int *)(v74 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v74 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          goto LABEL_86;
        goto LABEL_85;
    else
      sub_21E94B4((void **)&v80, "commands.stopsound.success");
      j_CommandOutputParameter::CommandOutputParameter(&v75, v62);
      j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v76, (int)v63);
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v61 = 0;
      v77 = j_operator new(0x10u);
      v79 = (char *)v77 + 16;
      v78 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v75,
                      (int)&v77,
                      (int)v77);
      j_CommandOutput::success((int)v3, &v80, (unsigned __int64 *)&v77);
      v24 = *(_QWORD *)&v77;
      if ( v77 != v78 )
          v27 = (int *)(*(_DWORD *)v24 - 12);
          if ( v27 != &dword_28898C0 )
            v25 = (unsigned int *)(*(_DWORD *)v24 - 4);
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          LODWORD(v24) = v24 + 8;
        while ( (_DWORD)v24 != HIDWORD(v24) );
        LODWORD(v24) = v77;
      if ( (_DWORD)v24 )
        j_operator delete((void *)v24);
      v19 = &v85;
      v28 = (void *)(v76 - 12);
      if ( (int *)(v76 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v76 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v29 = (void *)(v75 - 12);
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v75 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v21 = (void *)(v80 - 12);
      if ( (int *)(v80 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v80 - 4);
LABEL_86:
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
          goto LABEL_51;
LABEL_85:
        v23 = (*v22)--;
        goto LABEL_86;
LABEL_51:
    v65 = 2;
    v66 = 1;
    v67 = 0;
    v64 = &off_26E9ABC;
    v6 = v62;
    sub_21E8AF4(&v68, v62);
    v8 = v61;
    v30 = i;
    v31 = v3;
    v69 = v60;
    v32 = (Level *)j_Entity::getLevel(v63);
    v33 = j_Level::getPacketSender(v32);
    v34 = v33;
    v35 = *(void (__fastcall **)(int, char *, void ***, int))(*(_DWORD *)v33 + 16);
    v36 = j_Player::getClientId(v63);
    v37 = j_Player::getClientSubId(v63);
    v35(v34, v36, &v64, v37);
    v10 = v19;
    v38 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v68 - 4);
      if ( &pthread_create )
        __dmb();
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v10 = v19;
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    j_SelectorIterator<Player>::operator++((int)v10);
    v3 = v31;
  }
  v51 = v84;
  if ( v84 )
    v52 = (unsigned int *)(v84 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v52);
      while ( __strex(result - 1, v52) );
      result = (*v52)--;
    if ( result == 1 )
      v53 = (unsigned int *)(v51 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v51 + 8))(v51);
          result = __ldrex(v53);
        while ( __strex(result - 1, v53) );
        result = (*v53)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v51 + 12))(v51);
  v54 = v86;
  if ( v86 )
    v55 = (unsigned int *)(v86 + 4);
        result = __ldrex(v55);
      while ( __strex(result - 1, v55) );
      result = (*v55)--;
      v56 = (unsigned int *)(v54 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
          result = __ldrex(v56);
        while ( __strex(result - 1, v56) );
        result = (*v56)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
LABEL_138:
  v57 = v88;
  if ( v88 )
    v58 = (unsigned int *)(v88 + 4);
        result = __ldrex(v58);
      while ( __strex(result - 1, v58) );
      result = (*v58)--;
      v59 = (unsigned int *)(v57 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
          result = __ldrex(v59);
        while ( __strex(result - 1, v59) );
        result = (*v59)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
  return result;
}


void __fastcall StopSoundCommand::~StopSoundCommand(StopSoundCommand *this)
{
  StopSoundCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A1EC;
  v2 = *((_DWORD *)this + 29);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_CommandSelectorBase::~CommandSelectorBase((StopSoundCommand *)((char *)v1 + 20));
  j_Command::~Command(v1);
  j_operator delete((void *)v1);
}


void __fastcall StopSoundCommand::~StopSoundCommand(StopSoundCommand *this)
{
  StopSoundCommand::~StopSoundCommand(this);
}


StopSoundCommand *__fastcall StopSoundCommand::~StopSoundCommand(StopSoundCommand *this)
{
  StopSoundCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A1EC;
  v2 = *((_DWORD *)this + 29);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  j_CommandSelectorBase::~CommandSelectorBase((StopSoundCommand *)((char *)v1 + 20));
  j_Command::~Command(v1);
  return v1;
}


void __fastcall StopSoundCommand::setup(StopSoundCommand *this, CommandRegistry *a2)
{
  StopSoundCommand::setup(this, a2);
}


Command *__fastcall StopSoundCommand::StopSoundCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A1EC;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  *((_DWORD *)v1 + 29) = &unk_28898CC;
  return v1;
}


void __fastcall StopSoundCommand::setup(StopSoundCommand *this, CommandRegistry *a2)
{
  StopSoundCommand *v2; // r8@1
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
  char v16; // [sp+18h] [bp-80h]@8
  int v17; // [sp+24h] [bp-74h]@8
  char v18; // [sp+40h] [bp-58h]@5
  int v19; // [sp+4Ch] [bp-4Ch]@9
  __int64 v20; // [sp+68h] [bp-30h]@2
  int v21; // [sp+74h] [bp-24h]@1
  __int16 v22; // [sp+78h] [bp-20h]@5
  unsigned __int16 v23; // [sp+7Ch] [bp-1Ch]@8

  v2 = this;
  sub_21E94B4((void **)&v21, "stopsound");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v21, "commands.stopsound.description", 1, 0, 0);
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
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
  v23 = type_id<CommandRegistry,std::string>(void)::id[0];
  v7 = j_CommandParameterData::CommandParameterData(
         (int)&v16,
         &v23,
         (unsigned int)CommandRegistry::parse<std::string>,
         "sound",
         0,
         116,
         1,
         -1);
  j_CommandRegistry::registerOverload<StopSoundCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "stopsound",
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
