

Command *__fastcall GameModeCommand::GameModeCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A074;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  *((_DWORD *)v1 + 29) = -1;
  *((_DWORD *)v1 + 30) = -1;
  return v1;
}


void __fastcall GameModeCommand::~GameModeCommand(GameModeCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A074;
  j_CommandSelectorBase::~CommandSelectorBase((GameModeCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall GameModeCommand::~GameModeCommand(GameModeCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A074;
  j_CommandSelectorBase::~CommandSelectorBase((GameModeCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall GameModeCommand::execute(GameModeCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GameModeCommand::execute(this, a2, a3);
}


void __fastcall GameModeCommand::~GameModeCommand(GameModeCommand *this)
{
  GameModeCommand::~GameModeCommand(this);
}


void __fastcall GameModeCommand::setup(GameModeCommand *this, CommandRegistry *a2)
{
  GameModeCommand::setup(this, a2);
}


void __fastcall GameModeCommand::execute(GameModeCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GameModeCommand *v3; // r7@1
  const CommandOrigin *v4; // r11@1
  int v5; // r1@1
  CommandOutput *v6; // r8@1
  const void **v7; // r0@3
  void *v8; // r0@3
  void *v9; // r0@4
  char *v10; // r4@6
  char *v11; // r5@6
  Entity *v12; // r9@7
  void *v13; // r5@8
  void *v14; // r7@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  int *v17; // r0@18
  void **v18; // r5@23
  void *v19; // r0@23
  void *v20; // r0@24
  void *v21; // r0@25
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  void *v24; // r5@30
  void *v25; // r7@30
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  int *v28; // r0@40
  void *v29; // r0@45
  void *v30; // r5@47
  void *v31; // r7@47
  unsigned int *v32; // r2@49
  signed int v33; // r1@51
  int *v34; // r0@57
  void **v35; // r7@62
  void *v36; // r0@62
  void *v37; // r0@63
  const char **v38; // r0@64
  void *v39; // r0@64
  unsigned int *v40; // r2@66
  signed int v41; // r1@68
  unsigned int *v42; // r2@70
  signed int v43; // r1@72
  unsigned int *v44; // r2@74
  signed int v45; // r1@76
  unsigned int *v46; // r2@78
  signed int v47; // r1@80
  unsigned int *v48; // r2@82
  signed int v49; // r1@84
  unsigned int *v50; // r2@94
  signed int v51; // r1@96
  int v52; // r4@123
  unsigned int *v53; // r1@124
  unsigned int v54; // r0@126
  char *v55; // r4@128
  int v56; // r6@128
  unsigned int *v57; // r2@130
  signed int v58; // r1@132
  int *v59; // r0@138
  void *v60; // r0@143
  char *v61; // r0@144
  unsigned int *v62; // r2@145
  signed int v63; // r1@147
  unsigned int *v64; // r2@149
  signed int v65; // r1@151
  unsigned int *v66; // r2@153
  signed int v67; // r1@155
  unsigned int *v68; // r5@167
  unsigned int v69; // r0@169
  unsigned int *v70; // r2@171
  signed int v71; // r1@173
  int v72; // r4@178
  unsigned int *v73; // r1@179
  unsigned int v74; // r0@181
  unsigned int *v75; // r5@185
  unsigned int v76; // r0@187
  int v77; // r4@192
  unsigned int *v78; // r1@193
  unsigned int v79; // r0@195
  unsigned int *v80; // r5@199
  unsigned int v81; // r0@201
  int v82; // [sp+28h] [bp-D8h]@3
  int v83; // [sp+34h] [bp-CCh]@62
  int v84; // [sp+38h] [bp-C8h]@47
  void *ptr; // [sp+3Ch] [bp-C4h]@47
  void *v86; // [sp+40h] [bp-C0h]@47
  char *v87; // [sp+44h] [bp-BCh]@47
  int v88; // [sp+4Ch] [bp-B4h]@23
  int v89; // [sp+50h] [bp-B0h]@8
  int v90; // [sp+58h] [bp-A8h]@8
  void *v91; // [sp+60h] [bp-A0h]@8
  void *v92; // [sp+64h] [bp-9Ch]@8
  char *v93; // [sp+68h] [bp-98h]@8
  int v94; // [sp+70h] [bp-90h]@8
  int v95; // [sp+74h] [bp-8Ch]@30
  void *v96; // [sp+7Ch] [bp-84h]@30
  void *v97; // [sp+80h] [bp-80h]@30
  char *v98; // [sp+84h] [bp-7Ch]@30
  int v99; // [sp+8Ch] [bp-74h]@30
  char v100; // [sp+90h] [bp-70h]@6
  int v101; // [sp+94h] [bp-6Ch]@123
  char v102; // [sp+9Ch] [bp-64h]@6
  int v103; // [sp+A0h] [bp-60h]@178
  int *v104; // [sp+A8h] [bp-58h]@5
  int v105; // [sp+ACh] [bp-54h]@192
  int v106; // [sp+B0h] [bp-50h]@4
  int v107; // [sp+B4h] [bp-4Ch]@3
  char *v108; // [sp+B8h] [bp-48h]@3
  int v109; // [sp+BCh] [bp-44h]@128
  char *v110; // [sp+C4h] [bp-3Ch]@128
  char *v111; // [sp+C8h] [bp-38h]@128
  char *v112; // [sp+CCh] [bp-34h]@128
  int v113; // [sp+D4h] [bp-2Ch]@128

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 29);
  v6 = a3;
  if ( v5 == -1 )
  {
    v5 = j_GameTypeConv::intToGameType(*((GameTypeConv **)this + 30), -1);
    if ( v5 == -1 )
    {
      sub_21E94B4((void **)&v113, "commands.gamemode.fail.invalid");
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v109, *((_DWORD *)v3 + 30));
      v110 = 0;
      v111 = 0;
      v112 = 0;
      v110 = (char *)j_operator new(8u);
      v112 = v110 + 8;
      v111 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v109,
                       (int)&v110,
                       (int)v110);
      j_CommandOutput::error(v6, &v113, (unsigned __int64 *)&v110);
      v56 = (int)v111;
      v55 = v110;
      if ( v110 != v111 )
      {
        do
        {
          v59 = (int *)(*(_DWORD *)v55 - 12);
          if ( v59 != &dword_28898C0 )
          {
            v57 = (unsigned int *)(*(_DWORD *)v55 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v58 = __ldrex(v57);
              while ( __strex(v58 - 1, v57) );
            }
            else
              v58 = (*v57)--;
            if ( v58 <= 0 )
              j_j_j_j__ZdlPv_9(v59);
          }
          v55 += 8;
        }
        while ( v55 != (char *)v56 );
        v55 = v110;
      }
      if ( v55 )
        j_operator delete(v55);
      v60 = (void *)(v109 - 12);
      if ( (int *)(v109 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v109 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
        else
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j__ZdlPv_9(v60);
      v61 = (char *)(v113 - 12);
      if ( (int *)(v113 - 12) == &dword_28898C0 )
        return;
      v62 = (unsigned int *)(v113 - 4);
      if ( &pthread_create )
        __dmb();
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        goto LABEL_213;
      goto LABEL_212;
    }
  }
  v82 = v5;
  j_GameTypeConv::gameTypeToString((void **)&v107, v5);
  v7 = sub_21E82D8((const void **)&v107, 0, (unsigned int)"%", (_BYTE *)1);
  v108 = (char *)*v7;
  *v7 = &unk_28898CC;
  v8 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v107 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
    else
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E8AF4(&v106, (int *)&v108);
  j_CommandOutput::set<std::string>((int)v6, "gameMode", &v106);
  v9 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v106 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  j_CommandSelector<Player>::results((int)&v104, (GameModeCommand *)((char *)v3 + 20), v4);
  if ( j_Command::checkHasTargets<Player>((__int64 **)&v104, v6) )
    j_CommandSelectorResults<Player>::begin((int)&v102, &v104);
    j_CommandSelectorResults<Player>::end((int)&v100, (int)&v104);
    v10 = &v102;
    v11 = &v100;
    while ( 1 )
      if ( !j_SelectorIterator<Player>::operator!=((int)v10, (int)v11) )
        v52 = v101;
        if ( v101 )
          v53 = (unsigned int *)(v101 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
          else
            v54 = (*v53)--;
          if ( v54 == 1 )
            v68 = (unsigned int *)(v52 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
                v69 = __ldrex(v68);
              while ( __strex(v69 - 1, v68) );
              v69 = (*v68)--;
            if ( v69 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
        v72 = v103;
        if ( v103 )
          v73 = (unsigned int *)(v103 + 4);
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
            v74 = (*v73)--;
          if ( v74 == 1 )
            v75 = (unsigned int *)(v72 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
                v76 = __ldrex(v75);
              while ( __strex(v76 - 1, v75) );
              v76 = (*v75)--;
            if ( v76 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
        break;
      v12 = (Entity *)j_SelectorIterator<Player>::operator*((int)v10);
      if ( v12 == (Entity *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 32))(v4) )
        sub_21E94B4((void **)&v99, "commands.gamemode.success.self");
        j_CommandOutputParameter::CommandOutputParameter(&v95, (int *)&v108);
        v96 = 0;
        v97 = 0;
        v98 = 0;
        v96 = j_operator new(8u);
        v98 = (char *)v96 + 8;
        v97 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                        (int)&v95,
                        (int)&v96,
                        (int)v96);
        j_CommandOutput::success((int)v6, &v99, (unsigned __int64 *)&v96);
        v24 = v97;
        v25 = v96;
        if ( v96 != v97 )
            v28 = (int *)(*(_DWORD *)v25 - 12);
            if ( v28 != &dword_28898C0 )
              v26 = (unsigned int *)(*(_DWORD *)v25 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
              }
              else
                v27 = (*v26)--;
              if ( v27 <= 0 )
                j_j_j_j__ZdlPv_9(v28);
            v25 = (char *)v25 + 8;
          while ( v25 != v24 );
          v25 = v96;
        if ( v25 )
          j_operator delete(v25);
        v18 = (void **)&v88;
        v29 = (void *)(v95 - 12);
        if ( (int *)(v95 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v95 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        v21 = (void *)(v99 - 12);
        if ( (int *)(v99 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v99 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
LABEL_103:
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
            goto LABEL_47;
LABEL_102:
          v23 = (*v22)--;
          goto LABEL_103;
      else
        sub_21E94B4((void **)&v94, "commands.gamemode.success.other");
        j_CommandOutputParameter::CommandOutputParameter(&v89, (int *)&v108);
        j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v90, (int)v12);
        v91 = 0;
        v92 = 0;
        v93 = 0;
        v91 = j_operator new(0x10u);
        v93 = (char *)v91 + 16;
        v92 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                        (int)&v89,
                        (int)&v91,
                        (int)v91);
        j_CommandOutput::success((int)v6, &v94, (unsigned __int64 *)&v91);
        v13 = v92;
        v14 = v91;
        if ( v91 != v92 )
            v17 = (int *)(*(_DWORD *)v14 - 12);
            if ( v17 != &dword_28898C0 )
              v15 = (unsigned int *)(*(_DWORD *)v14 - 4);
                  v16 = __ldrex(v15);
                while ( __strex(v16 - 1, v15) );
                v16 = (*v15)--;
              if ( v16 <= 0 )
                j_j_j_j__ZdlPv_9(v17);
            v14 = (char *)v14 + 8;
          while ( v14 != v13 );
          v14 = v91;
        if ( v14 )
          j_operator delete(v14);
        v19 = (void *)(v90 - 12);
        if ( (int *)(v90 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v90 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v20 = (void *)(v89 - 12);
        if ( (int *)(v89 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v89 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = (void *)(v94 - 12);
        if ( (int *)(v94 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v94 - 4);
            goto LABEL_103;
          goto LABEL_102;
LABEL_47:
      sub_21E94B4(v18, "gameMode.changed");
      sub_21E8AF4(&v84, (int *)&v108);
      ptr = 0;
      v86 = 0;
      v87 = 0;
      ptr = j_operator new(4u);
      v87 = (char *)ptr + 4;
      v86 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v84,
                      (int)&ptr,
                      (int)ptr);
      j_CommandUtils::displayLocalizableMessage(1, v12, (int)v18, (int)&ptr, 0);
      v30 = v86;
      v31 = ptr;
      if ( ptr != v86 )
          v34 = (int *)(*(_DWORD *)v31 - 12);
          if ( v34 != &dword_28898C0 )
            v32 = (unsigned int *)(*(_DWORD *)v31 - 4);
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j__ZdlPv_9(v34);
          v31 = (char *)v31 + 4;
        while ( v31 != v30 );
        v31 = ptr;
      if ( v31 )
        j_operator delete(v31);
      v10 = &v102;
      v11 = &v100;
      v35 = (void **)&v83;
      v36 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v84 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v35 = (void **)&v83;
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v37 = (void *)(v88 - 12);
      if ( (int *)(v88 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v88 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v12 + 1432))(v12, v82);
      sub_21E94B4(v35, "player");
      v38 = (const char **)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v12 + 188))(v12);
      j_CommandOutput::addToResultList(v6, (const char **)v35, v38);
      v39 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v83 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      j_SelectorIterator<Player>::operator++((int)&v102);
  v77 = v105;
  if ( v105 )
    v78 = (unsigned int *)(v105 + 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 == 1 )
      v80 = (unsigned int *)(v77 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 8))(v77);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 12))(v77);
  v61 = v108 - 12;
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v108 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      goto LABEL_213;
LABEL_212:
    v63 = (*v62)--;
LABEL_213:
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
}


void __fastcall GameModeCommand::setup(GameModeCommand *this, CommandRegistry *a2)
{
  GameModeCommand *v2; // r8@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  int v7; // r0@8
  __int64 v8; // r2@8
  void *v9; // r0@8
  void *v10; // r0@9
  char v11; // r0@10
  char v12; // r0@13
  int v13; // r0@16
  void *v14; // r0@16
  void *v15; // r0@17
  int v16; // r2@19
  signed int v17; // r1@21
  int v18; // r2@23
  signed int v19; // r1@25
  int v20; // r2@27
  signed int v21; // r1@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  char v26; // [sp+1Ch] [bp-DCh]@16
  int v27; // [sp+28h] [bp-D0h]@16
  char v28; // [sp+44h] [bp-B4h]@13
  int v29; // [sp+50h] [bp-A8h]@17
  __int64 v30; // [sp+6Ch] [bp-8Ch]@10
  char v31; // [sp+74h] [bp-84h]@8
  int v32; // [sp+80h] [bp-78h]@8
  char v33; // [sp+9Ch] [bp-5Ch]@5
  int v34; // [sp+A8h] [bp-50h]@9
  __int64 v35; // [sp+C4h] [bp-34h]@2
  int v36; // [sp+D0h] [bp-28h]@1
  __int16 v37; // [sp+D4h] [bp-24h]@8
  __int16 v38; // [sp+D8h] [bp-20h]@5
  __int16 v39; // [sp+DCh] [bp-1Ch]@16

  v2 = this;
  sub_21E94B4((void **)&v36, "gamemode");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v36, "commands.gamemode.description", 1, 0, 0);
  v4 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v16 = v36 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v17 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v17 - 1;
      }
      while ( __strex(v17 - 1, (unsigned int *)v3) );
    }
    else
      v17 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v35, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,GameType>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,GameType>(void)::id) )
    type_id<CommandRegistry,GameType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,GameType>(void)::id);
  v38 = type_id<CommandRegistry,GameType>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v33,
    &v38,
    (unsigned int)CommandRegistry::parse<GameType>,
    "gameMode",
    0,
    116,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v37 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  v7 = j_CommandParameterData::CommandParameterData(
         (int)&v31,
         &v37,
         (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
         "player",
         0,
         20,
         1,
         -1);
  j_CommandRegistry::registerOverload<GameModeCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "gamemode",
    v35,
    v7);
  v9 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v18 = v32 - 4;
        v19 = __ldrex((unsigned int *)v8);
        HIDWORD(v8) = v19 - 1;
      while ( __strex(v19 - 1, (unsigned int *)v8) );
      v19 = *(_DWORD *)v8;
      HIDWORD(v8) = *(_DWORD *)v8 - 1;
      *(_DWORD *)v8 = HIDWORD(v8);
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v20 = v34 - 4;
        v21 = __ldrex((unsigned int *)v8);
        HIDWORD(v8) = v21 - 1;
      while ( __strex(v21 - 1, (unsigned int *)v8) );
      v21 = *(_DWORD *)v8;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  LODWORD(v8) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v30, 1, v8);
  v11 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v11 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v38 = type_id<CommandRegistry,int>(void)::id;
    (int)&v28,
    (unsigned int)CommandRegistry::parse<int>,
    120,
  v12 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  if ( !(v12 & 1)
  v39 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  v13 = j_CommandParameterData::CommandParameterData(
          (int)&v26,
          &v39,
          (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
          "player",
          0,
          20,
          1,
          -1);
    v30,
    v13);
  v14 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v29 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}
