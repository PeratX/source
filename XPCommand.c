

void __fastcall XPCommand::~XPCommand(XPCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A2FC;
  j_CommandSelectorBase::~CommandSelectorBase((XPCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall XPCommand::execute(XPCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  XPCommand::execute(this, a2, a3);
}


Command *__fastcall XPCommand::XPCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A2FC;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 30) = 0;
  return v1;
}


void __fastcall XPCommand::execute(XPCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r5@1
  int v4; // r11@4
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int v9; // r6@15
  int v10; // r4@15
  unsigned int *v11; // r1@16
  unsigned int v12; // r0@18
  void *v13; // r4@20
  void *v14; // r6@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  int *v17; // r0@30
  void *v18; // r0@35
  int v19; // r4@36
  unsigned int *v20; // r1@37
  unsigned int v21; // r0@39
  unsigned int *v22; // r5@43
  unsigned int v23; // r0@45
  unsigned int *v24; // r5@53
  unsigned int v25; // r0@55
  unsigned int *v26; // r2@57
  signed int v27; // r1@59
  int v28; // r4@64
  unsigned int *v29; // r1@65
  unsigned int v30; // r0@67
  unsigned int *v31; // r5@71
  unsigned int v32; // r0@73
  signed int v33; // r0@78
  int v34; // r10@80
  char *v35; // r4@80
  int v36; // r6@80
  unsigned int *v37; // r2@82
  signed int v38; // r1@84
  int *v39; // r0@90
  void *v40; // r0@95
  void *v41; // r0@96
  void *v42; // r0@97
  int v43; // r10@99
  char *v44; // r4@99
  int v45; // r6@99
  unsigned int *v46; // r2@101
  signed int v47; // r1@103
  int *v48; // r0@109
  void *v49; // r0@114
  void *v50; // r0@115
  void *v51; // r0@116
  int v52; // r10@118
  char *v53; // r4@118
  int v54; // r6@118
  unsigned int *v55; // r2@120
  signed int v56; // r1@122
  int *v57; // r0@128
  void *v58; // r0@133
  void *v59; // r0@134
  void *v60; // r0@135
  unsigned int *v61; // r2@140
  signed int v62; // r1@142
  unsigned int *v63; // r2@144
  signed int v64; // r1@146
  unsigned int *v65; // r2@148
  signed int v66; // r1@150
  unsigned int *v67; // r2@152
  signed int v68; // r1@154
  unsigned int *v69; // r2@156
  signed int v70; // r1@158
  unsigned int *v71; // r2@160
  signed int v72; // r1@162
  unsigned int *v73; // r2@164
  signed int v74; // r1@166
  unsigned int *v75; // r2@168
  signed int v76; // r1@170
  unsigned int *v77; // r2@172
  signed int v78; // r1@174
  XPCommand *v79; // [sp+4h] [bp-D4h]@1
  int v80; // [sp+8h] [bp-D0h]@118
  int v81; // [sp+10h] [bp-C8h]@118
  char *v82; // [sp+18h] [bp-C0h]@118
  char *v83; // [sp+1Ch] [bp-BCh]@118
  char *v84; // [sp+20h] [bp-B8h]@118
  int v85; // [sp+28h] [bp-B0h]@118
  int v86; // [sp+2Ch] [bp-ACh]@80
  int v87; // [sp+34h] [bp-A4h]@80
  char *v88; // [sp+3Ch] [bp-9Ch]@80
  char *v89; // [sp+40h] [bp-98h]@80
  char *v90; // [sp+44h] [bp-94h]@80
  int v91; // [sp+4Ch] [bp-8Ch]@80
  int v92; // [sp+50h] [bp-88h]@99
  int v93; // [sp+58h] [bp-80h]@99
  char *v94; // [sp+60h] [bp-78h]@99
  char *v95; // [sp+64h] [bp-74h]@99
  char *v96; // [sp+68h] [bp-70h]@99
  int v97; // [sp+70h] [bp-68h]@99
  int v98; // [sp+78h] [bp-60h]@4
  char v99; // [sp+7Ch] [bp-5Ch]@3
  int v100; // [sp+80h] [bp-58h]@15
  char v101; // [sp+88h] [bp-50h]@3
  int v102; // [sp+8Ch] [bp-4Ch]@64
  __int64 v103; // [sp+94h] [bp-44h]@20
  int v104; // [sp+9Ch] [bp-3Ch]@20
  int v105; // [sp+A4h] [bp-34h]@20
  int *v106; // [sp+A8h] [bp-30h]@1
  int v107; // [sp+ACh] [bp-2Ch]@36

  v3 = a3;
  v79 = this;
  j_CommandSelector<Player>::results((int)&v106, (XPCommand *)((char *)this + 20), a2);
  if ( j_Command::checkHasTargets<Player>((__int64 **)&v106, v3) )
  {
    if ( *((_DWORD *)v79 + 29) <= -1 )
    {
      sub_21E94B4((void **)&v105, "commands.xp.failure.widthdrawXp");
      v103 = 0LL;
      v104 = 0;
      j_CommandOutput::error(v3, &v105, (unsigned __int64 *)&v103);
      v14 = (void *)HIDWORD(v103);
      v13 = (void *)v103;
      if ( (_DWORD)v103 != HIDWORD(v103) )
      {
        do
        {
          v17 = (int *)(*(_DWORD *)v13 - 12);
          if ( v17 != &dword_28898C0 )
          {
            v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            }
            else
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          }
          v13 = (char *)v13 + 8;
        }
        while ( v13 != v14 );
        v13 = (void *)v103;
      }
      if ( v13 )
        j_operator delete(v13);
      v18 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v105 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        else
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
    }
    else
      j_CommandSelectorResults<Player>::begin((int)&v101, &v106);
      j_CommandSelectorResults<Player>::end((int)&v99, (int)&v106);
      while ( j_SelectorIterator<Player>::operator!=((int)&v101, (int)&v99) )
        v4 = j_SelectorIterator<Player>::operator*((int)&v101);
        v5 = *((_DWORD *)v79 + 30);
        (*(void (**)(void))(*(_DWORD *)v4 + 1456))();
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 1452))(v4, *((_DWORD *)v79 + 29));
        sub_21E94B4((void **)&v98, "player");
        j_CommandOutput::addToResultList((int)v3, (const char **)&v98, v4);
        v6 = (void *)(v98 - 12);
        if ( (int *)(v98 - 12) != &dword_28898C0 )
          v7 = (unsigned int *)(v98 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          else
            v8 = (*v7)--;
          if ( v8 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        j_SelectorIterator<Player>::operator++((int)&v101);
      v9 = (int)v3;
      v10 = v100;
      if ( v100 )
        v11 = (unsigned int *)(v100 + 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          v24 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      v28 = v102;
      if ( v102 )
        v29 = (unsigned int *)(v102 + 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          v31 = (unsigned int *)(v28 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
      v33 = *((_DWORD *)v79 + 30);
      if ( v33 < 0 )
        sub_21E94B4((void **)&v97, "commands.xp.success.negative.levels");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v92, -*((_DWORD *)v79 + 30));
        j_CommandOutputParameter::CommandOutputParameter((int)&v93, &v106);
        v94 = 0;
        v95 = 0;
        v96 = 0;
        v94 = (char *)j_operator new(0x10u);
        v96 = v94 + 16;
        v95 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                        (int)&v92,
                        (int)&v94,
                        (int)v94);
        v43 = v9;
        j_CommandOutput::success(v9, &v97, (unsigned __int64 *)&v94);
        v45 = (int)v95;
        v44 = v94;
        if ( v94 != v95 )
            v48 = (int *)(*(_DWORD *)v44 - 12);
            if ( v48 != &dword_28898C0 )
              v46 = (unsigned int *)(*(_DWORD *)v44 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v47 = __ldrex(v46);
                while ( __strex(v47 - 1, v46) );
              }
              else
                v47 = (*v46)--;
              if ( v47 <= 0 )
                j_j_j_j__ZdlPv_9(v48);
            v44 += 8;
          while ( v44 != (char *)v45 );
          v44 = v94;
        if ( v44 )
          j_operator delete(v44);
        v49 = (void *)(v93 - 12);
        if ( (int *)(v93 - 12) != &dword_28898C0 )
          v67 = (unsigned int *)(v93 - 4);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        v50 = (void *)(v92 - 12);
        if ( (int *)(v92 - 12) != &dword_28898C0 )
          v69 = (unsigned int *)(v92 - 4);
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
            v70 = (*v69)--;
          if ( v70 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        v51 = (void *)(v97 - 12);
        if ( (int *)(v97 - 12) != &dword_28898C0 )
          v71 = (unsigned int *)(v97 - 4);
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
            v72 = (*v71)--;
          if ( v72 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        j_CommandOutput::set<int>(v43, "amount", *((_DWORD *)v79 + 30));
      else if ( v33 < 1 )
        sub_21E94B4((void **)&v85, "commands.xp.success");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v80, *((_DWORD *)v79 + 29));
        j_CommandOutputParameter::CommandOutputParameter((int)&v81, &v106);
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v82 = (char *)j_operator new(0x10u);
        v84 = v82 + 16;
        v83 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                        (int)&v80,
                        (int)&v82,
                        (int)v82);
        v52 = v9;
        j_CommandOutput::success(v9, &v85, (unsigned __int64 *)&v82);
        v54 = (int)v83;
        v53 = v82;
        if ( v82 != v83 )
            v57 = (int *)(*(_DWORD *)v53 - 12);
            if ( v57 != &dword_28898C0 )
              v55 = (unsigned int *)(*(_DWORD *)v53 - 4);
                  v56 = __ldrex(v55);
                while ( __strex(v56 - 1, v55) );
                v56 = (*v55)--;
              if ( v56 <= 0 )
                j_j_j_j__ZdlPv_9(v57);
            v53 += 8;
          while ( v53 != (char *)v54 );
          v53 = v82;
        if ( v53 )
          j_operator delete(v53);
        v58 = (void *)(v81 - 12);
        if ( (int *)(v81 - 12) != &dword_28898C0 )
          v73 = (unsigned int *)(v81 - 4);
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
            v74 = (*v73)--;
          if ( v74 <= 0 )
            j_j_j_j__ZdlPv_9(v58);
        v59 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v75 = (unsigned int *)(v80 - 4);
              v76 = __ldrex(v75);
            while ( __strex(v76 - 1, v75) );
            v76 = (*v75)--;
          if ( v76 <= 0 )
            j_j_j_j__ZdlPv_9(v59);
        v60 = (void *)(v85 - 12);
        if ( (int *)(v85 - 12) != &dword_28898C0 )
          v77 = (unsigned int *)(v85 - 4);
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
            v78 = (*v77)--;
          if ( v78 <= 0 )
            j_j_j_j__ZdlPv_9(v60);
        j_CommandOutput::set<int>(v52, "amount", *((_DWORD *)v79 + 29));
      else
        sub_21E94B4((void **)&v91, "commands.xp.success.levels");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v86, *((_DWORD *)v79 + 30));
        j_CommandOutputParameter::CommandOutputParameter((int)&v87, &v106);
        v88 = 0;
        v89 = 0;
        v90 = 0;
        v88 = (char *)j_operator new(0x10u);
        v90 = v88 + 16;
        v89 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                        (int)&v86,
                        (int)&v88,
                        (int)v88);
        v34 = v9;
        j_CommandOutput::success(v9, &v91, (unsigned __int64 *)&v88);
        v36 = (int)v89;
        v35 = v88;
        if ( v88 != v89 )
            v39 = (int *)(*(_DWORD *)v35 - 12);
            if ( v39 != &dword_28898C0 )
              v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            v35 += 8;
          while ( v35 != (char *)v36 );
          v35 = v88;
        if ( v35 )
          j_operator delete(v35);
        v40 = (void *)(v87 - 12);
        if ( (int *)(v87 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v87 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        v41 = (void *)(v86 - 12);
        if ( (int *)(v86 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v86 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        v42 = (void *)(v91 - 12);
        if ( (int *)(v91 - 12) != &dword_28898C0 )
          v65 = (unsigned int *)(v91 - 4);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        j_CommandOutput::set<int>(v34, "amount", *((_DWORD *)v79 + 30));
  }
  v19 = v107;
  if ( v107 )
    v20 = (unsigned int *)(v107 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
        __dmb();
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
}


int __fastcall XPCommand::~XPCommand(XPCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A2FC;
  j_CommandSelectorBase::~CommandSelectorBase((XPCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall XPCommand::setup(XPCommand *this, CommandRegistry *a2)
{
  XPCommand *v2; // r8@1
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
  sub_21E94B4((void **)&v36, "xp");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v36, "commands.xp.description", 1, 0, 0);
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
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v38 = type_id<CommandRegistry,int>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v33,
    &v38,
    (unsigned int)CommandRegistry::parse<int>,
    "amount",
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
  j_CommandRegistry::registerOverload<XPCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "xp",
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
    (int)&v28,
    2,
    (int)&aKlnopq[1],
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


void __fastcall XPCommand::setup(XPCommand *this, CommandRegistry *a2)
{
  XPCommand::setup(this, a2);
}


void __fastcall XPCommand::~XPCommand(XPCommand *this)
{
  XPCommand::~XPCommand(this);
}
