

void __fastcall HelpCommand::setup(HelpCommand *this, CommandRegistry *a2)
{
  HelpCommand *v2; // r6@1
  void *v3; // r0@1
  __int64 v4; // r2@2
  void *v5; // r0@2
  void *v6; // r0@3
  char v7; // r0@4
  int v8; // r0@7
  __int64 v9; // r2@7
  void *v10; // r0@7
  char v11; // r0@8
  int v12; // r0@11
  void *v13; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // r2@17
  signed int v17; // r1@19
  int v18; // r2@21
  signed int v19; // r1@23
  int v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  char v24; // [sp+1Ch] [bp-8Ch]@11
  int v25; // [sp+28h] [bp-80h]@11
  __int64 v26; // [sp+44h] [bp-64h]@8
  char v27; // [sp+4Ch] [bp-5Ch]@7
  int v28; // [sp+58h] [bp-50h]@7
  __int64 v29; // [sp+74h] [bp-34h]@4
  int v30; // [sp+80h] [bp-28h]@2
  int v31; // [sp+88h] [bp-20h]@2
  int v32; // [sp+90h] [bp-18h]@1
  unsigned __int16 v33; // [sp+94h] [bp-14h]@7

  v2 = this;
  sub_21E94B4((void **)&v32, "help");
  CommandRegistry::registerCommand((int)v2, (const void **)&v32, "commands.help.description", 0, 4, 0);
  v3 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v32 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E94B4((void **)&v31, "help");
  sub_21E94B4((void **)&v30, "?");
  CommandRegistry::registerAlias((int)v2, (const void **)&v31, &v30);
  v5 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v16 = v30 - 4;
      {
        v17 = __ldrex((unsigned int *)v4);
        HIDWORD(v4) = v17 - 1;
      }
      while ( __strex(v17 - 1, (unsigned int *)v4) );
      v17 = *(_DWORD *)v4;
      HIDWORD(v4) = *(_DWORD *)v4 - 1;
      *(_DWORD *)v4 = HIDWORD(v4);
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v18 = v31 - 4;
        v19 = __ldrex((unsigned int *)v4);
        HIDWORD(v4) = v19 - 1;
      while ( __strex(v19 - 1, (unsigned int *)v4) );
      v19 = *(_DWORD *)v4;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  LODWORD(v4) = 0x7FFFFFFF;
  CommandVersion::CommandVersion((CommandVersion *)&v29, 1, v4);
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
  v33 = type_id<CommandRegistry,std::string>(void)::id[0];
  v8 = CommandParameterData::CommandParameterData(
         (int)&v27,
         &v33,
         (unsigned int)CommandRegistry::parse<std::string>,
         "command",
         1,
         (int)"CommandName",
         20,
         -1);
  CommandRegistry::registerOverload<HelpCommand,CommandParameterData>((int)v2, "help", v29, v8);
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = v28 - 4;
        v21 = __ldrex((unsigned int *)v9);
        HIDWORD(v9) = v21 - 1;
      while ( __strex(v21 - 1, (unsigned int *)v9) );
      v21 = *(_DWORD *)v9;
      HIDWORD(v9) = *(_DWORD *)v9 - 1;
      *(_DWORD *)v9 = HIDWORD(v9);
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  LODWORD(v9) = 0x7FFFFFFF;
  CommandVersion::CommandVersion((CommandVersion *)&v26, 1, v9);
  v11 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v11 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v33 = type_id<CommandRegistry,int>(void)::id;
  v12 = CommandParameterData::CommandParameterData(
          (int)&v24,
          &v33,
          (unsigned int)CommandRegistry::parse<int>,
          "page",
          0,
          24,
          -1);
  CommandRegistry::registerOverload<HelpCommand,CommandParameterData>((int)v2, "help", v26, v12);
  v13 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v25 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall HelpCommand::~HelpCommand(HelpCommand *this)
{
  HelpCommand::~HelpCommand(this);
}


void __fastcall HelpCommand::getHelpPage(HelpCommand *this, const CommandRegistry *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  const CommandRegistry *v4; // r5@1
  HelpCommand *v5; // r6@1
  const CommandOrigin *v6; // r11@1
  const void **v7; // r4@1
  const void **v8; // r7@1
  int v9; // r4@3
  char *v10; // r0@3
  signed int v11; // r0@4
  signed int v13; // r3@4
  int v15; // r8@4
  int v21; // r9@4
  int v22; // r7@12
  int v23; // r6@14
  const void **v24; // r4@15
  _DWORD *i; // r0@15
  void *v26; // r0@20
  char *v27; // r4@21
  int v28; // r6@21
  unsigned int *v29; // r2@23
  signed int v30; // r1@25
  int *v31; // r0@31
  void *v32; // r0@36
  void *v33; // r0@37
  void *v34; // r0@38
  char *v35; // r4@39
  int v36; // r6@39
  unsigned int *v37; // r2@41
  signed int v38; // r1@43
  int *v39; // r0@49
  void *v40; // r0@54
  char *v41; // r4@55
  int v42; // r6@55
  unsigned int *v43; // r2@57
  signed int v44; // r1@59
  int *v45; // r0@65
  void *v46; // r0@70
  void *v47; // r0@71
  char *v48; // r0@72
  const void **v49; // r4@73
  const void **v50; // r6@73
  unsigned int *v51; // r2@75
  signed int v52; // r1@77
  int *v53; // r0@83
  char *v54; // r4@88
  char *v55; // r6@88
  unsigned int *v56; // r2@90
  signed int v57; // r1@92
  int *v58; // r0@98
  unsigned int *v59; // r2@104
  signed int v60; // r1@106
  _DWORD *v61; // r6@112
  _DWORD *v62; // r8@112
  int v63; // r0@113
  const CommandOrigin *v64; // r5@117
  _DWORD *v65; // r11@117
  unsigned int *v66; // r2@119
  signed int v67; // r1@121
  int *v68; // r0@127
  void *v69; // r0@133
  unsigned int *v70; // r2@136
  signed int v71; // r1@138
  unsigned int *v72; // r2@140
  signed int v73; // r1@142
  unsigned int *v74; // r2@144
  signed int v75; // r1@146
  unsigned int *v76; // r2@148
  signed int v77; // r1@150
  unsigned int *v78; // r2@152
  signed int v79; // r1@154
  unsigned int *v80; // r2@156
  signed int v81; // r1@158
  unsigned int *v82; // r2@160
  signed int v83; // r1@162
  unsigned int *v84; // r2@164
  signed int v85; // r1@166
  HelpCommand *v86; // [sp+0h] [bp-B8h]@2
  CommandOutput *v87; // [sp+4h] [bp-B4h]@1
  const CommandRegistry *v88; // [sp+Ch] [bp-ACh]@1
  int v89; // [sp+10h] [bp-A8h]@55
  char *v90; // [sp+18h] [bp-A0h]@55
  char *v91; // [sp+1Ch] [bp-9Ch]@55
  char *v92; // [sp+20h] [bp-98h]@55
  int v93; // [sp+24h] [bp-94h]@55
  int v94; // [sp+28h] [bp-90h]@39
  char *v95; // [sp+30h] [bp-88h]@39
  char *v96; // [sp+34h] [bp-84h]@39
  char *v97; // [sp+38h] [bp-80h]@39
  int v98; // [sp+3Ch] [bp-7Ch]@21
  int v99; // [sp+44h] [bp-74h]@21
  char *v100; // [sp+4Ch] [bp-6Ch]@21
  char *v101; // [sp+50h] [bp-68h]@21
  char *v102; // [sp+54h] [bp-64h]@21
  int v103; // [sp+58h] [bp-60h]@21
  int v104; // [sp+5Ch] [bp-5Ch]@20
  _DWORD *v105; // [sp+60h] [bp-58h]@14
  char v106; // [sp+64h] [bp-54h]@112
  int v107; // [sp+68h] [bp-50h]@104
  __int64 v108; // [sp+6Ch] [bp-4Ch]@112
  const void **v109; // [sp+78h] [bp-40h]@1
  const void **v110; // [sp+7Ch] [bp-3Ch]@1
  char *v111; // [sp+84h] [bp-34h]@1
  char *v112; // [sp+88h] [bp-30h]@1
  char *v113; // [sp+8Ch] [bp-2Ch]@1
  int v114; // [sp+9Ch] [bp-1Ch]@104

  v4 = a2;
  v5 = this;
  v6 = a3;
  v87 = a4;
  v88 = a2;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  CommandRegistry::getAlphabeticalLookup((CommandRegistry *)&v109, a2, (int)a3);
  v8 = v110;
  v7 = v109;
  if ( v109 == v110 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
    v86 = v5;
    do
    {
      CommandRegistry::getCommandOverloadSyntaxInformation((CommandSyntaxInformation *)&v106, (int)v4, (int)v6, v7);
      v61 = (_DWORD *)HIDWORD(v108);
      v62 = (_DWORD *)v108;
      if ( (_DWORD)v108 != HIDWORD(v108) )
      {
        do
        {
          v63 = (int)v112;
          if ( v112 == v113 )
          {
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)&v111,
              v62);
          }
          else
            *(_DWORD *)v112 = *v62;
            *v62 = &unk_28898CC;
            v112 = (char *)(v63 + 4);
          v62 += 3;
        }
        while ( v61 != v62 );
        v64 = v6;
        v62 = (_DWORD *)HIDWORD(v108);
        v65 = (_DWORD *)v108;
        if ( (_DWORD)v108 != HIDWORD(v108) )
          do
            v68 = (int *)(*v65 - 12);
            if ( v68 != &dword_28898C0 )
            {
              v66 = (unsigned int *)(*v65 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
              }
              else
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j__ZdlPv_9(v68);
            }
            v65 += 3;
          while ( v65 != v62 );
          v62 = (_DWORD *)v108;
        v6 = v64;
        v4 = v88;
      }
      if ( v62 )
        operator delete(v62);
      v69 = (void *)(v107 - 12);
      if ( (int *)(v107 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v107 - 4);
        if ( v114 )
          __dmb();
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
        else
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v69);
      ++v7;
    }
    while ( v7 != v8 );
    v10 = v112;
    v9 = (int)v111;
    v5 = v86;
  v11 = (signed int)&v10[-v9];
  _R1 = -1840700269;
  v13 = *((_DWORD *)v5 + 6);
  _R5 = v11 >> 2;
  v15 = 1;
  __asm { SMMUL.W         R2, R5, R1 }
  v21 = ((_R2 + (v11 >> 2)) >> 2) + ((unsigned int)(_R2 + (v11 >> 2)) >> 31);
  if ( v11 >> 2 != 7 * v21 )
    ++v21;
  if ( v21 <= 1 )
    v21 = 1;
  if ( v13 > 1 )
    v15 = *((_DWORD *)v5 + 6);
  if ( v13 > v21 )
    v15 = v21;
  v22 = 7 * v15;
  if ( 7 * v15 < v11 >> 2 )
    _R5 = 7 * v15;
  CommandOutput::set<int>((int)v87, "page", v15);
  CommandOutput::set<int>((int)v87, "pageCount", v21);
  v23 = v22 - 7;
  v105 = &unk_28898CC;
  if ( v22 - 7 < _R5 )
    v24 = (const void **)(v9 + 28 * v15 - 28);
    for ( i = &unk_28898CC; ; i = v105 )
      if ( *(i - 3) )
        sub_21E72F0((const void **)&v105, (const void **)&Util::NEW_LINE);
      sub_21E72F0((const void **)&v105, v24);
      if ( ++v23 >= _R5 )
        break;
      ++v24;
  sub_21E8AF4(&v104, (int *)&v105);
  CommandOutput::set<std::string>((int)v87, "body", &v104);
  v26 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v104 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
    else
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E8AF4(&v103, (int *)&unk_27EE030);
  sub_21E7408((const void **)&v103, "%commands.help.header", 0x15u);
  CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v98, v15);
  CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v99, v21);
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v100 = (char *)operator new(0x10u);
  v102 = v100 + 16;
  v101 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                   (int)&v98,
                   (int)&v100,
                   (int)v100);
  CommandOutput::forceOutput(v87, &v103, (unsigned __int64 *)&v100);
  v28 = (int)v101;
  v27 = v100;
  if ( v100 != v101 )
      v31 = (int *)(*(_DWORD *)v27 - 12);
      if ( v31 != &dword_28898C0 )
        v29 = (unsigned int *)(*(_DWORD *)v27 - 4);
        if ( &pthread_create )
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v27 += 8;
    while ( v27 != (char *)v28 );
    v27 = v100;
  if ( v27 )
    operator delete(v27);
  v32 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v99 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v98 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v103 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  CommandOutputParameter::CommandOutputParameter(&v94);
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v95 = (char *)operator new(8u);
  v97 = v95 + 8;
  v96 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v94,
                  (int)&v95,
                  (int)v95);
  CommandOutput::forceOutput(v87, (int *)&v105, (unsigned __int64 *)&v95);
  v36 = (int)v96;
  v35 = v95;
  if ( v95 != v96 )
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
    v35 = v95;
  if ( v35 )
    operator delete(v35);
  v40 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v94 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E8AF4(&v93, (int *)&unk_27EE030);
  sub_21E7408((const void **)&v93, "%commands.help.footer", 0x15u);
  CommandOutputParameter::CommandOutputParameter(&v89);
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v90 = (char *)operator new(8u);
  v92 = v90 + 8;
  v91 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v89,
                  (int)&v90,
                  (int)v90);
  CommandOutput::forceOutput(v87, &v93, (unsigned __int64 *)&v90);
  v42 = (int)v91;
  v41 = v90;
  if ( v90 != v91 )
      v45 = (int *)(*(_DWORD *)v41 - 12);
      if ( v45 != &dword_28898C0 )
        v43 = (unsigned int *)(*(_DWORD *)v41 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v45);
      v41 += 8;
    while ( v41 != (char *)v42 );
    v41 = v90;
  if ( v41 )
    operator delete(v41);
  v46 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v89 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v93 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  CommandOutput::success(v87);
  v48 = (char *)(v105 - 3);
  if ( v105 - 3 != &dword_28898C0 )
    v84 = v105 - 1;
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v50 = v110;
  v49 = v109;
  if ( v109 != v110 )
      v53 = (int *)((char *)*v49 - 12);
      if ( v53 != &dword_28898C0 )
        v51 = (unsigned int *)((char *)*v49 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      ++v49;
    while ( v49 != v50 );
    v49 = v109;
  if ( v49 )
    operator delete(v49);
  v55 = v112;
  v54 = v111;
  if ( v111 != v112 )
      v58 = (int *)(*(_DWORD *)v54 - 12);
      if ( v58 != &dword_28898C0 )
        v56 = (unsigned int *)(*(_DWORD *)v54 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v58);
      v54 += 4;
    while ( v54 != v55 );
    v54 = v111;
  if ( v54 )
    operator delete(v54);
}


void __fastcall HelpCommand::execute(HelpCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  HelpCommand *v3; // r6@1
  CommandOutput *v4; // r4@1
  const CommandOrigin *v5; // r5@1
  int v6; // r7@1
  const CommandRegistry *v7; // r1@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = *(_DWORD *)(*((_DWORD *)this + 5) - 12);
  v7 = (const CommandRegistry *)Command::getRegistry(this);
  if ( v6 )
    j_j_j__ZNK11HelpCommand14getCommandHelpERK15CommandRegistryRK13CommandOriginR13CommandOutput(v3, v7, v5, v4);
  else
    j_j_j__ZNK11HelpCommand11getHelpPageERK15CommandRegistryRK13CommandOriginR13CommandOutput(v3, v7, v5, v4);
}


void __fastcall HelpCommand::getCommandHelp(HelpCommand *this, const CommandRegistry *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  HelpCommand::getCommandHelp(this, a2, a3, a4);
}


void __fastcall HelpCommand::setup(HelpCommand *this, CommandRegistry *a2)
{
  HelpCommand::setup(this, a2);
}


void __fastcall HelpCommand::execute(HelpCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  HelpCommand::execute(this, a2, a3);
}


HelpCommand *__fastcall HelpCommand::~HelpCommand(HelpCommand *this)
{
  HelpCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EB304;
  v2 = *((_DWORD *)this + 5);
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
  Command::~Command(v1);
  return v1;
}


void __fastcall HelpCommand::getCommandHelp(HelpCommand *this, const CommandRegistry *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  const void **v4; // r7@1
  CommandOutput *v5; // r4@1
  const CommandRegistry *v6; // r5@1
  const void **v7; // r4@2
  const void **v8; // r9@2
  _DWORD *i; // r0@3
  char *v10; // r0@7
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  void *v13; // r4@18
  void *v14; // r6@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  int *v17; // r0@28
  char *v18; // r0@33
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  const void **v21; // r0@38
  char *v22; // r0@38
  void *v23; // r0@39
  const void **v24; // r0@40
  char *v25; // r0@40
  void *v26; // r0@41
  void *v27; // r0@42
  int *v28; // r9@44
  int v29; // r5@44
  int v30; // r6@45
  const void **v31; // r4@49
  __int64 v32; // r4@49
  char *v33; // r1@50
  unsigned int *v34; // r2@51
  signed int v35; // r6@53
  char *v36; // r6@57
  int *v37; // r0@58
  void *v38; // r0@63
  void *v39; // r0@64
  void *v40; // r0@65
  void *v41; // r0@66
  void *v42; // r0@67
  void *v43; // r0@68
  const void **v44; // r0@70
  void *v45; // r4@70
  void *v46; // r7@70
  unsigned int *v47; // r2@72
  signed int v48; // r1@74
  int *v49; // r0@80
  char *v50; // r0@85
  void *v51; // r0@86
  const void **v52; // r0@87
  void *v53; // r4@87
  void *v54; // r6@87
  unsigned int *v55; // r2@89
  signed int v56; // r1@91
  int *v57; // r0@97
  char *v58; // r0@102
  void *v59; // r0@103
  void *v60; // r4@104
  void *v61; // r6@104
  unsigned int *v62; // r2@106
  signed int v63; // r1@108
  int *v64; // r0@114
  void *v65; // r0@119
  void *v66; // r4@120
  void *v67; // r6@120
  unsigned int *v68; // r2@122
  signed int v69; // r1@124
  int *v70; // r0@130
  const void **v71; // r4@135
  int v72; // r6@135
  unsigned int *v73; // r2@137
  signed int v74; // r1@139
  int *v75; // r0@145
  void *v76; // r4@151
  void *v77; // r6@151
  unsigned int *v78; // r2@153
  signed int v79; // r1@155
  int *v80; // r0@161
  void *v81; // r0@166
  unsigned int *v82; // r2@168
  signed int v83; // r1@170
  unsigned int *v84; // r2@176
  signed int v85; // r1@178
  unsigned int *v86; // r2@180
  signed int v87; // r1@182
  unsigned int *v88; // r2@184
  signed int v89; // r1@186
  unsigned int *v90; // r2@188
  signed int v91; // r1@190
  unsigned int *v92; // r2@192
  signed int v93; // r1@194
  unsigned int *v94; // r2@196
  signed int v95; // r1@198
  unsigned int *v96; // r2@200
  signed int v97; // r1@202
  unsigned int *v98; // r2@204
  signed int v99; // r1@206
  unsigned int *v100; // r2@236
  signed int v101; // r1@238
  unsigned int *v102; // r2@240
  signed int v103; // r1@242
  unsigned int *v104; // r2@244
  signed int v105; // r1@246
  unsigned int *v106; // r2@248
  signed int v107; // r1@250
  unsigned int *v108; // r2@252
  signed int v109; // r1@254
  unsigned int *v110; // r2@256
  signed int v111; // r1@258
  unsigned int *v112; // r2@272
  signed int v113; // r1@274
  unsigned int *v114; // r2@276
  signed int v115; // r1@278
  CommandOutput *v116; // [sp+Ch] [bp-1A4h]@2
  __int64 v117; // [sp+10h] [bp-1A0h]@120
  int v118; // [sp+18h] [bp-198h]@120
  __int64 v119; // [sp+1Ch] [bp-194h]@104
  int v120; // [sp+24h] [bp-18Ch]@104
  int v121; // [sp+2Ch] [bp-184h]@104
  __int64 v122; // [sp+30h] [bp-180h]@87
  int v123; // [sp+38h] [bp-178h]@87
  int v124; // [sp+3Ch] [bp-174h]@87
  char *v125; // [sp+40h] [bp-170h]@87
  int v126; // [sp+44h] [bp-16Ch]@49
  int v127; // [sp+48h] [bp-168h]@49
  int v128; // [sp+4Ch] [bp-164h]@49
  int v129; // [sp+54h] [bp-15Ch]@49
  char *v130; // [sp+5Ch] [bp-154h]@49
  char *v131; // [sp+60h] [bp-150h]@49
  char *v132; // [sp+64h] [bp-14Ch]@49
  int v133; // [sp+6Ch] [bp-144h]@49
  void **v134; // [sp+70h] [bp-140h]@44
  void **v135; // [sp+74h] [bp-13Ch]@49
  int v136; // [sp+98h] [bp-118h]@68
  __int64 v137; // [sp+124h] [bp-8Ch]@70
  int v138; // [sp+12Ch] [bp-84h]@70
  int v139; // [sp+130h] [bp-80h]@70
  char *v140; // [sp+134h] [bp-7Ch]@70
  const void **v141; // [sp+138h] [bp-78h]@43
  const void **v142; // [sp+13Ch] [bp-74h]@43
  int v143; // [sp+144h] [bp-6Ch]@42
  int v144; // [sp+148h] [bp-68h]@40
  char *v145; // [sp+14Ch] [bp-64h]@40
  int v146; // [sp+150h] [bp-60h]@38
  char *v147; // [sp+154h] [bp-5Ch]@38
  char *v148; // [sp+158h] [bp-58h]@7
  _DWORD *v149; // [sp+15Ch] [bp-54h]@2
  __int64 v150; // [sp+160h] [bp-50h]@18
  int v151; // [sp+168h] [bp-48h]@18
  int v152; // [sp+170h] [bp-40h]@18
  char v153; // [sp+174h] [bp-3Ch]@1
  int v154; // [sp+178h] [bp-38h]@40
  __int64 v155; // [sp+17Ch] [bp-34h]@2
  char v156; // [sp+188h] [bp-28h]@50

  v4 = (const void **)((char *)this + 20);
  v5 = a4;
  v6 = a2;
  CommandRegistry::getCommandOverloadSyntaxInformation(
    (CommandSyntaxInformation *)&v153,
    (int)a2,
    (int)a3,
    (const void **)this + 5);
  if ( v153 )
  {
    v116 = v5;
    v149 = &unk_28898CC;
    v8 = (const void **)HIDWORD(v155);
    v7 = (const void **)v155;
    if ( (_DWORD)v155 != HIDWORD(v155) )
    {
      for ( i = &unk_28898CC; ; i = v149 )
      {
        if ( *(i - 3) )
          sub_21E72F0((const void **)&v149, (const void **)&Util::NEW_LINE);
        v148 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v148, *((_DWORD *)*v7 - 3) + 2);
        sub_21E7408((const void **)&v148, "- ", 2u);
        sub_21E72F0((const void **)&v148, v7);
        sub_21E72F0((const void **)&v149, (const void **)&v148);
        v10 = v148 - 12;
        if ( (int *)(v148 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v148 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        }
        v7 += 3;
        if ( v7 == v8 )
          break;
      }
    }
    sub_21E8AF4(&v146, (int *)&unk_27EE060);
    sub_21E72F0((const void **)&v146, v4);
    v21 = sub_21E7408((const void **)&v146, ":", 1u);
    v147 = (char *)*v21;
    *v21 = &unk_28898CC;
    CommandOutput::set<std::string>((int)v116, "command", (int *)&v147);
    v22 = v147 - 12;
    if ( (int *)(v147 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v147 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
      else
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v146 - 12);
    if ( (int *)(v146 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v146 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    sub_21E8AF4(&v144, (int *)&unk_27EE060);
    sub_21E7408((const void **)&v144, "%", 1u);
    v24 = sub_21E72F0((const void **)&v144, (const void **)&v154);
    v145 = (char *)*v24;
    *v24 = &unk_28898CC;
    CommandOutput::set<std::string>((int)v116, "description", (int *)&v145);
    v25 = v145 - 12;
    if ( (int *)(v145 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)(v145 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v144 - 12);
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v144 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E8AF4(&v143, (int *)&v149);
    CommandOutput::set<std::string>((int)v116, "usage", &v143);
    v27 = (void *)(v143 - 12);
    if ( (int *)(v143 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v143 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    CommandRegistry::getAliases((int)&v141, (int)v6, v4);
    if ( v141 == v142 )
      sub_21E8AF4(&v139, (int *)&unk_27EE060);
      sub_21E72F0((const void **)&v139, v4);
      v44 = sub_21E7408((const void **)&v139, ":", 1u);
      v140 = (char *)*v44;
      *v44 = &unk_28898CC;
      v137 = 0LL;
      v138 = 0;
      CommandOutput::forceOutput(v116, (int *)&v140, (unsigned __int64 *)&v137);
      v46 = (void *)HIDWORD(v137);
      v45 = (void *)v137;
      if ( (_DWORD)v137 != HIDWORD(v137) )
          v49 = (int *)(*(_DWORD *)v45 - 12);
          if ( v49 != &dword_28898C0 )
            v47 = (unsigned int *)(*(_DWORD *)v45 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
            }
            else
              v48 = (*v47)--;
            if ( v48 <= 0 )
              j_j_j_j__ZdlPv_9(v49);
          v45 = (char *)v45 + 8;
        while ( v45 != v46 );
        v45 = (void *)v137;
      if ( v45 )
        operator delete(v45);
      v50 = v140 - 12;
      if ( (int *)(v140 - 12) != &dword_28898C0 )
        v112 = (unsigned int *)(v140 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v113 = __ldrex(v112);
          while ( __strex(v113 - 1, v112) );
        else
          v113 = (*v112)--;
        if ( v113 <= 0 )
          j_j_j_j__ZdlPv_9(v50);
      v51 = (void *)(v139 - 12);
      if ( (int *)(v139 - 12) != &dword_28898C0 )
        v114 = (unsigned int *)(v139 - 4);
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
          v115 = (*v114)--;
        if ( v115 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
    else
      v28 = (int *)&v134;
      sub_21D0A10((int)&v134, 16);
      v29 = (int)(v141 + 1);
      if ( v141 + 1 != v142 )
        v30 = 0;
          if ( v30 )
            sub_21CBF38((char *)&v134, (int)", ", 2);
          sub_21CBF38((char *)&v134, *(_DWORD *)(v29 + v30), *(_DWORD *)(*(_DWORD *)(v29 + v30) - 12));
          v30 += 4;
        while ( (const void **)(v29 + v30) != v142 );
      sub_21E94B4((void **)&v133, "commands.help.command.aliases");
      v31 = v141;
      sub_21E8AF4(&v127, (int *)&unk_27EE060);
      sub_21E72F0((const void **)&v127, v31);
      CommandOutputParameter::CommandOutputParameter(&v128, &v127);
      sub_21CFED8(&v126, (int)&v135);
      CommandOutputParameter::CommandOutputParameter(&v129, &v126);
      v130 = 0;
      v131 = 0;
      v132 = 0;
      v130 = (char *)operator new(0x10u);
      v132 = v130 + 16;
      v131 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v128,
                       (int)&v130,
                       (int)v130);
      CommandOutput::forceOutput(v116, &v133, (unsigned __int64 *)&v130);
      v32 = *(_QWORD *)&v130;
      if ( v130 != v131 )
        v33 = &v156;
          v37 = (int *)(*(_DWORD *)v32 - 12);
          if ( v37 != &dword_28898C0 )
            v34 = (unsigned int *)(*(_DWORD *)v32 - 4);
                v35 = __ldrex(v34);
              while ( __strex(v35 - 1, v34) );
              v35 = (*v34)--;
            if ( v35 <= 0 )
              v36 = v33;
              j_j_j_j__ZdlPv_9(v37);
              v33 = v36;
          LODWORD(v32) = v32 + 8;
        while ( (_DWORD)v32 != HIDWORD(v32) );
        LODWORD(v32) = v130;
        v28 = (int *)&v134;
      if ( (_DWORD)v32 )
        operator delete((void *)v32);
      v38 = (void *)(v129 - 12);
      if ( (int *)(v129 - 12) != &dword_28898C0 )
        v100 = (unsigned int *)(v129 - 4);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v39 = (void *)(v128 - 12);
      if ( (int *)(v128 - 12) != &dword_28898C0 )
        v102 = (unsigned int *)(v128 - 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v40 = (void *)(v126 - 12);
      if ( (int *)(v126 - 12) != &dword_28898C0 )
        v104 = (unsigned int *)(v126 - 4);
            v105 = __ldrex(v104);
          while ( __strex(v105 - 1, v104) );
          v105 = (*v104)--;
        if ( v105 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      v41 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != &dword_28898C0 )
        v106 = (unsigned int *)(v127 - 4);
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
          v107 = (*v106)--;
        if ( v107 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      v42 = (void *)(v133 - 12);
      if ( (int *)(v133 - 12) != &dword_28898C0 )
        v108 = (unsigned int *)(v133 - 4);
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v134 = off_26D3F28;
      *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)v28) = off_26D3F34;
      v135 = &off_27734E8;
      v43 = (void *)(v136 - 12);
      if ( (int *)(v136 - 12) != &dword_28898C0 )
        v110 = (unsigned int *)(v136 - 4);
            v111 = __ldrex(v110);
          while ( __strex(v111 - 1, v110) );
          v111 = (*v110)--;
        if ( v111 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v135 = &off_26D40A8;
      sub_21C802C((unsigned int **)v28 + 8);
      sub_21B6560(v28 + 11);
    sub_21E8AF4(&v124, (int *)&unk_27EE060);
    sub_21E7408((const void **)&v124, "%", 1u);
    v52 = sub_21E72F0((const void **)&v124, (const void **)&v154);
    v125 = (char *)*v52;
    *v52 = &unk_28898CC;
    v122 = 0LL;
    v123 = 0;
    CommandOutput::forceOutput(v116, (int *)&v125, (unsigned __int64 *)&v122);
    v54 = (void *)HIDWORD(v122);
    v53 = (void *)v122;
    if ( (_DWORD)v122 != HIDWORD(v122) )
      do
        v57 = (int *)(*(_DWORD *)v53 - 12);
        if ( v57 != &dword_28898C0 )
          v55 = (unsigned int *)(*(_DWORD *)v53 - 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
        v53 = (char *)v53 + 8;
      while ( v53 != v54 );
      v53 = (void *)v122;
    if ( v53 )
      operator delete(v53);
    v58 = v125 - 12;
    if ( (int *)(v125 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v125 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j__ZdlPv_9(v58);
    v59 = (void *)(v124 - 12);
    if ( (int *)(v124 - 12) != &dword_28898C0 )
      v96 = (unsigned int *)(v124 - 4);
          v97 = __ldrex(v96);
        while ( __strex(v97 - 1, v96) );
        v97 = (*v96)--;
      if ( v97 <= 0 )
        j_j_j_j__ZdlPv_9(v59);
    sub_21E94B4((void **)&v121, "commands.generic.usage.noparam");
    v119 = 0LL;
    v120 = 0;
    CommandOutput::forceOutput(v116, &v121, (unsigned __int64 *)&v119);
    v61 = (void *)HIDWORD(v119);
    v60 = (void *)v119;
    if ( (_DWORD)v119 != HIDWORD(v119) )
        v64 = (int *)(*(_DWORD *)v60 - 12);
        if ( v64 != &dword_28898C0 )
          v62 = (unsigned int *)(*(_DWORD *)v60 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v64);
        v60 = (char *)v60 + 8;
      while ( v60 != v61 );
      v60 = (void *)v119;
    if ( v60 )
      operator delete(v60);
    v65 = (void *)(v121 - 12);
    if ( (int *)(v121 - 12) != &dword_28898C0 )
      v98 = (unsigned int *)(v121 - 4);
          v99 = __ldrex(v98);
        while ( __strex(v99 - 1, v98) );
        v99 = (*v98)--;
      if ( v99 <= 0 )
        j_j_j_j__ZdlPv_9(v65);
    v117 = 0LL;
    v118 = 0;
    CommandOutput::forceOutput(v116, (int *)&v149, (unsigned __int64 *)&v117);
    v67 = (void *)HIDWORD(v117);
    v66 = (void *)v117;
    if ( (_DWORD)v117 != HIDWORD(v117) )
        v70 = (int *)(*(_DWORD *)v66 - 12);
        if ( v70 != &dword_28898C0 )
          v68 = (unsigned int *)(*(_DWORD *)v66 - 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j__ZdlPv_9(v70);
        v66 = (char *)v66 + 8;
      while ( v66 != v67 );
      v66 = (void *)v117;
    if ( v66 )
      operator delete(v66);
    CommandOutput::success(v116);
    v72 = (int)v142;
    v71 = v141;
    if ( v141 != v142 )
        v75 = (int *)((char *)*v71 - 12);
        if ( v75 != &dword_28898C0 )
          v73 = (unsigned int *)((char *)*v71 - 4);
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
            v74 = (*v73)--;
          if ( v74 <= 0 )
            j_j_j_j__ZdlPv_9(v75);
        ++v71;
      while ( v71 != (const void **)v72 );
      v71 = v141;
    if ( v71 )
      operator delete(v71);
    v18 = (char *)(v149 - 3);
    if ( v149 - 3 == &dword_28898C0 )
      goto LABEL_151;
    v19 = v149 - 1;
    if ( &pthread_create )
      __dmb();
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      goto LABEL_213;
    goto LABEL_212;
  }
  sub_21E94B4((void **)&v152, "commands.generic.notFound");
  v150 = 0LL;
  v151 = 0;
  CommandOutput::error(v5, &v152, (unsigned __int64 *)&v150);
  v14 = (void *)HIDWORD(v150);
  v13 = (void *)v150;
  if ( (_DWORD)v150 != HIDWORD(v150) )
    do
      v17 = (int *)(*(_DWORD *)v13 - 12);
      if ( v17 != &dword_28898C0 )
        v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v13 = (char *)v13 + 8;
    while ( v13 != v14 );
    v13 = (void *)v150;
  if ( v13 )
    operator delete(v13);
  v18 = (char *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v152 - 4);
LABEL_213:
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
LABEL_212:
    v20 = (*v19)--;
    goto LABEL_213;
LABEL_151:
  v77 = (void *)HIDWORD(v155);
  v76 = (void *)v155;
  if ( (_DWORD)v155 != HIDWORD(v155) )
      v80 = (int *)(*(_DWORD *)v76 - 12);
      if ( v80 != &dword_28898C0 )
        v78 = (unsigned int *)(*(_DWORD *)v76 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j__ZdlPv_9(v80);
      v76 = (char *)v76 + 12;
    while ( v76 != v77 );
    v76 = (void *)v155;
  if ( v76 )
    operator delete(v76);
  v81 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v154 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
}


void __fastcall HelpCommand::getHelpPage(HelpCommand *this, const CommandRegistry *a2, const CommandOrigin *a3, CommandOutput *a4)
{
  HelpCommand::getHelpPage(this, a2, a3, a4);
}


int __fastcall HelpCommand::HelpCommand(Command *a1)
{
  int result; // r0@1
  __int64 v2; // r1@1

  result = Command::Command(a1);
  *(_DWORD *)result = &off_26EB304;
  LODWORD(v2) = &unk_28898CC;
  HIDWORD(v2) = 1;
  *(_QWORD *)(result + 20) = v2;
  return result;
}


void __fastcall HelpCommand::~HelpCommand(HelpCommand *this)
{
  HelpCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EB304;
  v2 = *((_DWORD *)this + 5);
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
  Command::~Command(v1);
  operator delete((void *)v1);
}
