

void __fastcall OpCommand::execute(OpCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  OpCommand::execute(this, a2, a3);
}


Command *__fastcall OpCommand::OpCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A138;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  return v1;
}


void __fastcall OpCommand::~OpCommand(OpCommand *this)
{
  OpCommand::~OpCommand(this);
}


void __fastcall OpCommand::setup(OpCommand *this, CommandRegistry *a2)
{
  OpCommand *v2; // r5@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  int v6; // r0@5
  void *v7; // r0@5
  int v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  char v12; // [sp+1Ch] [bp-4Ch]@5
  int v13; // [sp+28h] [bp-40h]@5
  __int64 v14; // [sp+44h] [bp-24h]@2
  int v15; // [sp+50h] [bp-18h]@1
  __int16 v16; // [sp+54h] [bp-14h]@5

  v2 = this;
  sub_21E94B4((void **)&v15, "op");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.op.description", 2, 0, 0);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = v15 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v9 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v9 - 1;
      }
      while ( __strex(v9 - 1, (unsigned int *)v3) );
    }
    else
      v9 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v14, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v16 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  v6 = j_CommandParameterData::CommandParameterData(
         (int)&v12,
         &v16,
         (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
         "player",
         0,
         20,
         -1);
  j_CommandRegistry::registerOverload<OpCommand,CommandParameterData>((int)v2, "op", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall OpCommand::~OpCommand(OpCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A138;
  j_CommandSelectorBase::~CommandSelectorBase((OpCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall OpCommand::setup(OpCommand *this, CommandRegistry *a2)
{
  OpCommand::setup(this, a2);
}


int __fastcall OpCommand::~OpCommand(OpCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A138;
  j_CommandSelectorBase::~CommandSelectorBase((OpCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall OpCommand::execute(OpCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r5@1
  unsigned int v4; // r10@2
  __int64 v5; // r4@2
  const char *v6; // r9@2
  int v7; // r8@4
  int v8; // r0@5
  signed int v9; // r3@5
  void (__fastcall *v10)(int, signed int); // r2@7
  _BYTE *v11; // r0@9
  unsigned int v12; // r6@12
  void *v13; // r4@12
  void *v14; // r10@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  int *v17; // r0@22
  void *v18; // r0@27
  _BYTE *v19; // r0@28
  _BYTE *v20; // r7@30
  unsigned int v21; // r2@30
  unsigned int v22; // r1@32
  unsigned int v23; // r6@32
  unsigned int v24; // r9@38
  int v25; // r10@38
  _BYTE *v26; // r7@39
  unsigned int v27; // r2@39
  unsigned int v28; // r1@41
  unsigned int v29; // r6@41
  unsigned int v30; // r9@47
  int v31; // r10@47
  int *v32; // r5@49
  int *v33; // r5@55
  Level *v34; // r0@60
  int v35; // r7@60
  char *v36; // r0@60
  int v37; // r3@60
  Level *v38; // r0@60
  int v39; // r0@60
  unsigned int *v40; // r2@62
  signed int v41; // r1@64
  int v42; // r4@72
  unsigned int *v43; // r1@73
  unsigned int v44; // r0@75
  unsigned int *v45; // r5@79
  unsigned int v46; // r0@81
  int v47; // r4@86
  unsigned int *v48; // r1@87
  unsigned int v49; // r0@89
  unsigned int *v50; // r5@93
  unsigned int v51; // r0@95
  int v52; // r5@101 OVERLAPPED
  int v53; // r6@101 OVERLAPPED
  const void **v54; // r0@102
  void *v55; // r0@103
  int v56; // r5@104 OVERLAPPED
  int v57; // r6@104 OVERLAPPED
  const void **v58; // r0@105
  void *v59; // r0@106
  char *v60; // r0@107
  char *v61; // r0@108
  char *v62; // r4@110
  int v63; // r6@110
  unsigned int *v64; // r2@112
  signed int v65; // r1@114
  int *v66; // r0@120
  void *v67; // r0@125
  void *v68; // r0@126
  char *v69; // r4@128
  int v70; // r6@128
  unsigned int *v71; // r2@130
  signed int v72; // r1@132
  int *v73; // r0@138
  void *v74; // r0@143
  void *v75; // r0@144
  int v76; // r4@149
  unsigned int *v77; // r1@150
  unsigned int v78; // r0@152
  unsigned int *v79; // r5@156
  unsigned int v80; // r0@158
  unsigned int *v81; // r2@164
  signed int v82; // r1@166
  unsigned int *v83; // r2@168
  signed int v84; // r1@170
  unsigned int *v85; // r2@172
  signed int v86; // r1@174
  unsigned int *v87; // r2@176
  signed int v88; // r1@178
  unsigned int *v89; // r2@180
  signed int v90; // r1@182
  unsigned int *v91; // r2@200
  signed int v92; // r1@202
  unsigned int *v93; // r2@204
  signed int v94; // r1@206
  unsigned int *v95; // r2@208
  signed int v96; // r1@210
  CommandOutput *v97; // [sp+18h] [bp-F8h]@2
  int v98; // [sp+20h] [bp-F0h]@128
  char *v99; // [sp+28h] [bp-E8h]@128
  char *v100; // [sp+2Ch] [bp-E4h]@128
  char *v101; // [sp+30h] [bp-E0h]@128
  int v102; // [sp+38h] [bp-D8h]@128
  int v103; // [sp+3Ch] [bp-D4h]@110
  char *v104; // [sp+44h] [bp-CCh]@110
  char *v105; // [sp+48h] [bp-C8h]@110
  char *v106; // [sp+4Ch] [bp-C4h]@110
  int v107; // [sp+54h] [bp-BCh]@110
  int v108; // [sp+58h] [bp-B8h]@106
  char *v109; // [sp+5Ch] [bp-B4h]@104
  int v110; // [sp+60h] [bp-B0h]@103
  char *v111; // [sp+64h] [bp-ACh]@101
  char v112; // [sp+68h] [bp-A8h]@60
  __int64 v113; // [sp+9Ch] [bp-74h]@12
  int v114; // [sp+A4h] [bp-6Ch]@12
  int v115; // [sp+ACh] [bp-64h]@12
  char v116; // [sp+B0h] [bp-60h]@2
  int v117; // [sp+B4h] [bp-5Ch]@72
  char v118; // [sp+BCh] [bp-54h]@2
  int v119; // [sp+C0h] [bp-50h]@86
  void *ptr; // [sp+C8h] [bp-48h]@2
  void *v121; // [sp+CCh] [bp-44h]@2
  void *v122; // [sp+D0h] [bp-40h]@2
  void *v123; // [sp+D4h] [bp-3Ch]@2
  void *v124; // [sp+D8h] [bp-38h]@2
  void *v125; // [sp+DCh] [bp-34h]@2
  int *v126; // [sp+E0h] [bp-30h]@1
  int v127; // [sp+E4h] [bp-2Ch]@149

  v3 = a3;
  j_CommandSelector<Player>::results((int)&v126, (OpCommand *)((char *)this + 20), a2);
  if ( j_Command::checkHasTargets<Player>((__int64 **)&v126, v3) )
  {
    v123 = 0;
    v124 = 0;
    v125 = 0;
    ptr = 0;
    v121 = 0;
    v122 = 0;
    v4 = *(_BYTE *)(j_Minecraft::getCommands(ServerCommand::mGame) + 8);
    j_CommandSelectorResults<Player>::begin((int)&v118, &v126);
    v97 = v3;
    j_CommandSelectorResults<Player>::end((int)&v116, (int)&v126);
    HIDWORD(v5) = &v118;
    v6 = "commands.op.message";
    while ( j_SelectorIterator<Player>::operator!=(SHIDWORD(v5), (int)&v116) )
    {
      v7 = j_SelectorIterator<Player>::operator*(SHIDWORD(v5));
      if ( (*(int (**)(void))(*(_DWORD *)v7 + 604))() >= v4 )
      {
        v11 = v121;
        if ( v121 == v122 )
        {
          v20 = ptr;
          LODWORD(v5) = 0;
          v21 = ((_BYTE *)v121 - (_BYTE *)ptr) >> 2;
          if ( !v21 )
            v21 = 1;
          v22 = v21 + (((_BYTE *)v121 - (_BYTE *)ptr) >> 2);
          v23 = v21 + (((_BYTE *)v121 - (_BYTE *)ptr) >> 2);
          if ( 0 != v22 >> 30 )
            v23 = 0x3FFFFFFF;
          if ( v22 < v21 )
          if ( v23 )
          {
            if ( v23 >= 0x40000000 )
              sub_21E57F4();
            LODWORD(v5) = j_operator new(4 * v23);
            v11 = v121;
            v20 = ptr;
            v24 = v4;
            v25 = HIDWORD(v5);
          }
          else
          v32 = (int *)(v5 + v11 - v20);
          *v32 = v7;
          if ( (v11 - v20) >> 2 )
            j___aeabi_memmove4_0(v5, (int)v20);
          HIDWORD(v5) += 4;
          if ( v20 )
            j_operator delete(v20);
          *(_QWORD *)&ptr = v5;
          HIDWORD(v5) = v25;
          v4 = v24;
          v122 = (void *)(v5 + 4 * v23);
          v6 = "commands.op.message";
        }
        else
          *(_DWORD *)v121 = v7;
          v121 = (char *)v121 + 4;
      }
      else
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1412))(v7);
        v9 = 0;
        if ( v4 < 3 )
          v9 = 1;
        v10 = *(void (__fastcall **)(int, signed int))(*(_DWORD *)v7 + 1264);
        if ( (v8 & v9) == 1 )
          v10(v7, 3);
          v10(v7, v4);
        sub_21E94B4((void **)&v115, v6);
        v113 = 0LL;
        v114 = 0;
        j_CommandUtils::displayLocalizableMessage(0, (Entity *)v7, (int)&v115, (int)&v113, 0);
        v12 = v4;
        v13 = (void *)HIDWORD(v113);
        v14 = (void *)v113;
        if ( (_DWORD)v113 != HIDWORD(v113) )
          do
            v17 = (int *)(*(_DWORD *)v14 - 12);
            if ( v17 != &dword_28898C0 )
            {
              v15 = (unsigned int *)(*(_DWORD *)v14 - 4);
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
            v14 = (char *)v14 + 4;
          while ( v14 != v13 );
          v14 = (void *)v113;
        if ( v14 )
          j_operator delete(v14);
        v4 = v12;
        v18 = (void *)(v115 - 12);
        if ( (int *)(v115 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v115 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v19 = v124;
        if ( v124 == v125 )
          v26 = v123;
          v27 = ((_BYTE *)v124 - (_BYTE *)v123) >> 2;
          if ( !v27 )
            v27 = 1;
          v28 = v27 + (((_BYTE *)v124 - (_BYTE *)v123) >> 2);
          v29 = v27 + (((_BYTE *)v124 - (_BYTE *)v123) >> 2);
          if ( 0 != v28 >> 30 )
            v29 = 0x3FFFFFFF;
          if ( v28 < v27 )
          if ( v29 )
            if ( v29 >= 0x40000000 )
            LODWORD(v5) = j_operator new(4 * v29);
            v19 = v124;
            v26 = v123;
            v30 = v4;
            v31 = HIDWORD(v5);
          v33 = (int *)(v5 + v19 - v26);
          *v33 = v7;
          if ( (v19 - v26) >> 2 )
            j___aeabi_memmove4_0(v5, (int)v26);
          if ( v26 )
            j_operator delete(v26);
          *(_QWORD *)&v123 = v5;
          HIDWORD(v5) = v31;
          v4 = v30;
          v125 = (void *)(v5 + 4 * v29);
          *(_DWORD *)v124 = v7;
          v124 = (char *)v124 + 4;
        j_Abilities::setPlayerPermissions((PermissionsHandler **)(v7 + 4320), 2);
        v34 = (Level *)j_Entity::getLevel((Entity *)v7);
        v35 = j_Level::getAdventureSettings(v34);
        v36 = j_Entity::getUniqueID((Entity *)v7);
        j_AdventureSettingsPacket::AdventureSettingsPacket(
          (int)&v112,
          v35,
          v7 + 4320,
          v37,
          *(_QWORD *)v36,
          *(_QWORD *)v36 >> 32,
          0);
        v38 = (Level *)j_Entity::getLevel((Entity *)v7);
        v39 = j_Level::getPacketSender(v38);
        (*(void (**)(void))(*(_DWORD *)v39 + 20))();
      j_SelectorIterator<Player>::operator++(SHIDWORD(v5));
    }
    v42 = v117;
    if ( v117 )
      v43 = (unsigned int *)(v117 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 == 1 )
        v45 = (unsigned int *)(v42 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
        if ( &pthread_create )
          __dmb();
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
    v47 = v119;
    if ( v119 )
      v48 = (unsigned int *)(v119 + 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        v50 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
    if ( j_CommandOutput::wantsData(v97) == 1 )
      v111 = (char *)&unk_28898CC;
      *(_QWORD *)&v52 = *(_QWORD *)&v123;
      if ( v123 != v124 )
          v54 = (const void **)(*(int (**)(void))(**(_DWORD **)v52 + 188))();
          j_CommandUtils::addtoCSVList((const void **)&v111, v54);
          v52 += 4;
        while ( v53 != v52 );
      sub_21E8AF4(&v110, (int *)&v111);
      j_CommandOutput::set<std::string>((int)v97, "playersSuccess", &v110);
      v55 = (void *)(v110 - 12);
      if ( (int *)(v110 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v110 - 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j__ZdlPv_9(v55);
      v109 = (char *)&unk_28898CC;
      *(_QWORD *)&v56 = *(_QWORD *)&ptr;
      if ( ptr != v121 )
          v58 = (const void **)(*(int (**)(void))(**(_DWORD **)v56 + 188))();
          j_CommandUtils::addtoCSVList((const void **)&v109, v58);
          v56 += 4;
        while ( v57 != v56 );
      sub_21E8AF4(&v108, (int *)&v109);
      j_CommandOutput::set<std::string>((int)v97, "playersFailed", &v108);
      v59 = (void *)(v108 - 12);
      if ( (int *)(v108 - 12) != &dword_28898C0 )
        v91 = (unsigned int *)(v108 - 4);
            v92 = __ldrex(v91);
          while ( __strex(v92 - 1, v91) );
          v92 = (*v91)--;
        if ( v92 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      v60 = v109 - 12;
      if ( (int *)(v109 - 12) != &dword_28898C0 )
        v93 = (unsigned int *)(v109 - 4);
            v94 = __ldrex(v93);
          while ( __strex(v94 - 1, v93) );
          v94 = (*v93)--;
        if ( v94 <= 0 )
          j_j_j_j__ZdlPv_9(v60);
      v61 = v111 - 12;
      if ( (int *)(v111 - 12) != &dword_28898C0 )
        v95 = (unsigned int *)(v111 - 4);
            v96 = __ldrex(v95);
          while ( __strex(v96 - 1, v95) );
          v96 = (*v95)--;
        if ( v96 <= 0 )
          j_j_j_j__ZdlPv_9(v61);
    if ( ptr != v121 )
      sub_21E94B4((void **)&v107, "commands.op.failed");
      j_CommandOutputParameter::CommandOutputParameter((int)&v103, (unsigned __int64 *)&ptr);
      v104 = 0;
      v105 = 0;
      v106 = 0;
      v104 = (char *)j_operator new(8u);
      v106 = v104 + 8;
      v105 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v103,
                       (int)&v104,
                       (int)v104);
      j_CommandOutput::error(v97, &v107, (unsigned __int64 *)&v104);
      v63 = (int)v105;
      v62 = v104;
      if ( v104 != v105 )
          v66 = (int *)(*(_DWORD *)v62 - 12);
          if ( v66 != &dword_28898C0 )
            v64 = (unsigned int *)(*(_DWORD *)v62 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v65 = __ldrex(v64);
              while ( __strex(v65 - 1, v64) );
            else
              v65 = (*v64)--;
            if ( v65 <= 0 )
              j_j_j_j__ZdlPv_9(v66);
          v62 += 8;
        while ( v62 != (char *)v63 );
        v62 = v104;
      if ( v62 )
        j_operator delete(v62);
      v67 = (void *)(v103 - 12);
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v81 = (unsigned int *)(v103 - 4);
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j__ZdlPv_9(v67);
      v68 = (void *)(v107 - 12);
      if ( (int *)(v107 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v107 - 4);
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j__ZdlPv_9(v68);
    if ( v123 != v124 )
      sub_21E94B4((void **)&v102, "commands.op.success");
      j_CommandOutputParameter::CommandOutputParameter((int)&v98, (unsigned __int64 *)&v123);
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v99 = (char *)j_operator new(8u);
      v101 = v99 + 8;
      v100 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v98,
                       (int)&v99,
                       (int)v99);
      j_CommandOutput::success((int)v97, &v102, (unsigned __int64 *)&v99);
      v70 = (int)v100;
      v69 = v99;
      if ( v99 != v100 )
          v73 = (int *)(*(_DWORD *)v69 - 12);
          if ( v73 != &dword_28898C0 )
            v71 = (unsigned int *)(*(_DWORD *)v69 - 4);
                v72 = __ldrex(v71);
              while ( __strex(v72 - 1, v71) );
              v72 = (*v71)--;
            if ( v72 <= 0 )
              j_j_j_j__ZdlPv_9(v73);
          v69 += 8;
        while ( v69 != (char *)v70 );
        v69 = v99;
      if ( v69 )
        j_operator delete(v69);
      v74 = (void *)(v98 - 12);
      if ( (int *)(v98 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v98 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      v75 = (void *)(v102 - 12);
      if ( (int *)(v102 - 12) != &dword_28898C0 )
        v87 = (unsigned int *)(v102 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j__ZdlPv_9(v75);
    if ( ptr )
      j_operator delete(ptr);
    if ( v123 )
      j_operator delete(v123);
  }
  v76 = v127;
  if ( v127 )
    v77 = (unsigned int *)(v127 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
    else
      v78 = (*v77)--;
    if ( v78 == 1 )
      v79 = (unsigned int *)(v76 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 8))(v76);
          v80 = __ldrex(v79);
        while ( __strex(v80 - 1, v79) );
        v80 = (*v79)--;
      if ( v80 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 12))(v76);
}
