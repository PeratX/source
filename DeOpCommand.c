

void __fastcall DeOpCommand::~DeOpCommand(DeOpCommand *this)
{
  DeOpCommand::~DeOpCommand(this);
}


void __fastcall DeOpCommand::execute(DeOpCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r5@1
  char *i; // r5@2
  int v5; // r10@4
  _BYTE *v6; // r0@5
  void *v7; // r4@7
  void *v8; // r8@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  int *v11; // r0@17
  void *v12; // r0@22
  _BYTE *v13; // r0@23
  _BYTE *v14; // r7@25
  __int64 v15; // r4@25
  unsigned int v16; // r2@25
  unsigned int v17; // r1@27
  unsigned int v18; // r6@27
  int *v19; // r5@34
  _BYTE *v20; // r7@39
  __int64 v21; // r4@39
  unsigned int v22; // r2@39
  unsigned int v23; // r1@41
  unsigned int v24; // r6@41
  int *v25; // r5@48
  Level *v26; // r0@53
  int v27; // r7@53
  char *v28; // r0@53
  int v29; // r3@53
  Level *v30; // r0@53
  int v31; // r0@53
  unsigned int *v32; // r2@55
  signed int v33; // r1@57
  int v34; // r4@65
  unsigned int *v35; // r1@66
  unsigned int v36; // r0@68
  unsigned int *v37; // r5@72
  unsigned int v38; // r0@74
  int v39; // r4@79
  unsigned int *v40; // r1@80
  unsigned int v41; // r0@82
  unsigned int *v42; // r5@86
  unsigned int v43; // r0@88
  int v44; // r5@94 OVERLAPPED
  int v45; // r6@94 OVERLAPPED
  const void **v46; // r0@95
  void *v47; // r0@96
  int v48; // r5@97 OVERLAPPED
  int v49; // r6@97 OVERLAPPED
  const void **v50; // r0@98
  void *v51; // r0@99
  char *v52; // r0@100
  char *v53; // r0@101
  char *v54; // r4@103
  int v55; // r6@103
  unsigned int *v56; // r2@105
  signed int v57; // r1@107
  int *v58; // r0@113
  void *v59; // r0@118
  void *v60; // r0@119
  char *v61; // r4@121
  int v62; // r6@121
  unsigned int *v63; // r2@123
  signed int v64; // r1@125
  int *v65; // r0@131
  void *v66; // r0@136
  void *v67; // r0@137
  int v68; // r4@142
  unsigned int *v69; // r1@143
  unsigned int v70; // r0@145
  unsigned int *v71; // r5@149
  unsigned int v72; // r0@151
  unsigned int *v73; // r2@157
  signed int v74; // r1@159
  unsigned int *v75; // r2@161
  signed int v76; // r1@163
  unsigned int *v77; // r2@165
  signed int v78; // r1@167
  unsigned int *v79; // r2@169
  signed int v80; // r1@171
  unsigned int *v81; // r2@173
  signed int v82; // r1@175
  unsigned int *v83; // r2@193
  signed int v84; // r1@195
  unsigned int *v85; // r2@197
  signed int v86; // r1@199
  unsigned int *v87; // r2@201
  signed int v88; // r1@203
  CommandOutput *v89; // [sp+18h] [bp-F8h]@2
  int v90; // [sp+20h] [bp-F0h]@121
  char *v91; // [sp+28h] [bp-E8h]@121
  char *v92; // [sp+2Ch] [bp-E4h]@121
  char *v93; // [sp+30h] [bp-E0h]@121
  int v94; // [sp+38h] [bp-D8h]@121
  int v95; // [sp+3Ch] [bp-D4h]@103
  char *v96; // [sp+44h] [bp-CCh]@103
  char *v97; // [sp+48h] [bp-C8h]@103
  char *v98; // [sp+4Ch] [bp-C4h]@103
  int v99; // [sp+54h] [bp-BCh]@103
  int v100; // [sp+58h] [bp-B8h]@99
  char *v101; // [sp+5Ch] [bp-B4h]@97
  int v102; // [sp+60h] [bp-B0h]@96
  char *v103; // [sp+64h] [bp-ACh]@94
  char v104; // [sp+68h] [bp-A8h]@53
  __int64 v105; // [sp+9Ch] [bp-74h]@7
  int v106; // [sp+A4h] [bp-6Ch]@7
  int v107; // [sp+ACh] [bp-64h]@7
  char v108; // [sp+B0h] [bp-60h]@2
  int v109; // [sp+B4h] [bp-5Ch]@65
  char v110; // [sp+BCh] [bp-54h]@2
  int v111; // [sp+C0h] [bp-50h]@79
  void *ptr; // [sp+C8h] [bp-48h]@2
  void *v113; // [sp+CCh] [bp-44h]@2
  void *v114; // [sp+D0h] [bp-40h]@2
  void *v115; // [sp+D4h] [bp-3Ch]@2
  void *v116; // [sp+D8h] [bp-38h]@2
  void *v117; // [sp+DCh] [bp-34h]@2
  int *v118; // [sp+E0h] [bp-30h]@1
  int v119; // [sp+E4h] [bp-2Ch]@142

  v3 = a3;
  j_CommandSelector<Player>::results((int)&v118, (DeOpCommand *)((char *)this + 20), a2);
  if ( j_Command::checkHasTargets<Player>((__int64 **)&v118, v3) )
  {
    v116 = 0;
    v117 = 0;
    ptr = 0;
    v113 = 0;
    v114 = 0;
    v115 = 0;
    j_CommandSelectorResults<Player>::begin((int)&v110, &v118);
    v89 = v3;
    j_CommandSelectorResults<Player>::end((int)&v108, (int)&v118);
    for ( i = &v110;
          j_SelectorIterator<Player>::operator!=((int)i, (int)&v108);
          j_SelectorIterator<Player>::operator++((int)i) )
    {
      v5 = j_SelectorIterator<Player>::operator*((int)i);
      if ( (unsigned int)(*(int (**)(void))(*(_DWORD *)v5 + 604))() < 4 )
      {
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v5 + 1264))(v5, 0);
        sub_21E94B4((void **)&v107, "commands.deop.message");
        v105 = 0LL;
        v106 = 0;
        j_CommandUtils::displayLocalizableMessage(0, (Entity *)v5, (int)&v107, (int)&v105, 0);
        v7 = (void *)HIDWORD(v105);
        v8 = (void *)v105;
        if ( (_DWORD)v105 != HIDWORD(v105) )
        {
          do
          {
            v11 = (int *)(*(_DWORD *)v8 - 12);
            if ( v11 != &dword_28898C0 )
            {
              v9 = (unsigned int *)(*(_DWORD *)v8 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v10 = __ldrex(v9);
                while ( __strex(v10 - 1, v9) );
              }
              else
                v10 = (*v9)--;
              if ( v10 <= 0 )
                j_j_j_j__ZdlPv_9(v11);
            }
            v8 = (char *)v8 + 4;
          }
          while ( v8 != v7 );
          v8 = (void *)v105;
        }
        if ( v8 )
          j_operator delete(v8);
        v12 = (void *)(v107 - 12);
        if ( (int *)(v107 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v107 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
          else
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        v13 = v116;
        if ( v116 == v117 )
          v20 = v115;
          LODWORD(v21) = 0;
          v22 = ((_BYTE *)v116 - (_BYTE *)v115) >> 2;
          if ( !v22 )
            v22 = 1;
          v23 = v22 + (((_BYTE *)v116 - (_BYTE *)v115) >> 2);
          v24 = v22 + (((_BYTE *)v116 - (_BYTE *)v115) >> 2);
          if ( 0 != v23 >> 30 )
            v24 = 0x3FFFFFFF;
          if ( v23 < v22 )
          if ( v24 )
            if ( v24 >= 0x40000000 )
              sub_21E57F4();
            LODWORD(v21) = j_operator new(4 * v24);
            v13 = v116;
            v20 = v115;
          v25 = (int *)(v21 + v13 - v20);
          *v25 = v5;
          if ( (v13 - v20) >> 2 )
            j___aeabi_memmove4_0(v21, (int)v20);
          HIDWORD(v21) += 4;
          if ( v20 )
            j_operator delete(v20);
          *(_QWORD *)&v115 = v21;
          i = &v110;
          v117 = (void *)(v21 + 4 * v24);
        else
          *(_DWORD *)v116 = v5;
          v116 = (char *)v116 + 4;
        j_Abilities::setPlayerPermissions((PermissionsHandler **)(v5 + 4320), 1);
        v26 = (Level *)j_Entity::getLevel((Entity *)v5);
        v27 = j_Level::getAdventureSettings(v26);
        v28 = j_Entity::getUniqueID((Entity *)v5);
        j_AdventureSettingsPacket::AdventureSettingsPacket(
          (int)&v104,
          v27,
          v5 + 4320,
          v29,
          *(_QWORD *)v28,
          *(_QWORD *)v28 >> 32,
          0);
        v30 = (Level *)j_Entity::getLevel((Entity *)v5);
        v31 = j_Level::getPacketSender(v30);
        (*(void (**)(void))(*(_DWORD *)v31 + 20))();
      }
      else
        v6 = v113;
        if ( v113 == v114 )
          v14 = ptr;
          LODWORD(v15) = 0;
          v16 = ((_BYTE *)v113 - (_BYTE *)ptr) >> 2;
          if ( !v16 )
            v16 = 1;
          v17 = v16 + (((_BYTE *)v113 - (_BYTE *)ptr) >> 2);
          v18 = v16 + (((_BYTE *)v113 - (_BYTE *)ptr) >> 2);
          if ( 0 != v17 >> 30 )
            v18 = 0x3FFFFFFF;
          if ( v17 < v16 )
          if ( v18 )
            if ( v18 >= 0x40000000 )
            LODWORD(v15) = j_operator new(4 * v18);
            v6 = v113;
            v14 = ptr;
          v19 = (int *)(v15 + v6 - v14);
          *v19 = v5;
          if ( (v6 - v14) >> 2 )
            j___aeabi_memmove4_0(v15, (int)v14);
          HIDWORD(v15) += 4;
          if ( v14 )
            j_operator delete(v14);
          *(_QWORD *)&ptr = v15;
          v114 = (void *)(v15 + 4 * v18);
          *(_DWORD *)v113 = v5;
          v113 = (char *)v113 + 4;
    }
    v34 = v109;
    if ( v109 )
      v35 = (unsigned int *)(v109 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        v37 = (unsigned int *)(v34 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
        if ( &pthread_create )
          __dmb();
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
    v39 = v111;
    if ( v111 )
      v40 = (unsigned int *)(v111 + 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        v42 = (unsigned int *)(v39 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
    if ( j_CommandOutput::wantsData(v89) == 1 )
      v103 = (char *)&unk_28898CC;
      *(_QWORD *)&v44 = *(_QWORD *)&v115;
      if ( v115 != v116 )
          v46 = (const void **)(*(int (**)(void))(**(_DWORD **)v44 + 188))();
          j_CommandUtils::addtoCSVList((const void **)&v103, v46);
          v44 += 4;
        while ( v45 != v44 );
      sub_21E8AF4(&v102, (int *)&v103);
      j_CommandOutput::set<std::string>((int)v89, "playersSuccess", &v102);
      v47 = (void *)(v102 - 12);
      if ( (int *)(v102 - 12) != &dword_28898C0 )
        v81 = (unsigned int *)(v102 - 4);
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      v101 = (char *)&unk_28898CC;
      *(_QWORD *)&v48 = *(_QWORD *)&ptr;
      if ( ptr != v113 )
          v50 = (const void **)(*(int (**)(void))(**(_DWORD **)v48 + 188))();
          j_CommandUtils::addtoCSVList((const void **)&v101, v50);
          v48 += 4;
        while ( v49 != v48 );
      sub_21E8AF4(&v100, (int *)&v101);
      j_CommandOutput::set<std::string>((int)v89, "playersFailed", &v100);
      v51 = (void *)(v100 - 12);
      if ( (int *)(v100 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v100 - 4);
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
      v52 = v101 - 12;
      if ( (int *)(v101 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v101 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v53 = v103 - 12;
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v87 = (unsigned int *)(v103 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
    if ( ptr != v113 )
      sub_21E94B4((void **)&v99, "commands.deop.failed");
      j_CommandOutputParameter::CommandOutputParameter((int)&v95, (unsigned __int64 *)&ptr);
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v96 = (char *)j_operator new(8u);
      v98 = v96 + 8;
      v97 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v95,
                      (int)&v96,
                      (int)v96);
      j_CommandOutput::error(v89, &v99, (unsigned __int64 *)&v96);
      v55 = (int)v97;
      v54 = v96;
      if ( v96 != v97 )
          v58 = (int *)(*(_DWORD *)v54 - 12);
          if ( v58 != &dword_28898C0 )
            v56 = (unsigned int *)(*(_DWORD *)v54 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
            else
              v57 = (*v56)--;
            if ( v57 <= 0 )
              j_j_j_j__ZdlPv_9(v58);
          v54 += 8;
        while ( v54 != (char *)v55 );
        v54 = v96;
      if ( v54 )
        j_operator delete(v54);
      v59 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v73 = (unsigned int *)(v95 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      v60 = (void *)(v99 - 12);
      if ( (int *)(v99 - 12) != &dword_28898C0 )
        v75 = (unsigned int *)(v99 - 4);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v76 = (*v75)--;
        if ( v76 <= 0 )
          j_j_j_j__ZdlPv_9(v60);
    if ( v115 != v116 )
      sub_21E94B4((void **)&v94, "commands.deop.success");
      j_CommandOutputParameter::CommandOutputParameter((int)&v90, (unsigned __int64 *)&v115);
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v91 = (char *)j_operator new(8u);
      v93 = v91 + 8;
      v92 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v90,
                      (int)&v91,
                      (int)v91);
      j_CommandOutput::success((int)v89, &v94, (unsigned __int64 *)&v91);
      v62 = (int)v92;
      v61 = v91;
      if ( v91 != v92 )
          v65 = (int *)(*(_DWORD *)v61 - 12);
          if ( v65 != &dword_28898C0 )
            v63 = (unsigned int *)(*(_DWORD *)v61 - 4);
                v64 = __ldrex(v63);
              while ( __strex(v64 - 1, v63) );
              v64 = (*v63)--;
            if ( v64 <= 0 )
              j_j_j_j__ZdlPv_9(v65);
          v61 += 8;
        while ( v61 != (char *)v62 );
        v61 = v91;
      if ( v61 )
        j_operator delete(v61);
      v66 = (void *)(v90 - 12);
      if ( (int *)(v90 - 12) != &dword_28898C0 )
        v77 = (unsigned int *)(v90 - 4);
            v78 = __ldrex(v77);
          while ( __strex(v78 - 1, v77) );
          v78 = (*v77)--;
        if ( v78 <= 0 )
          j_j_j_j__ZdlPv_9(v66);
      v67 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v79 = (unsigned int *)(v94 - 4);
            v80 = __ldrex(v79);
          while ( __strex(v80 - 1, v79) );
          v80 = (*v79)--;
        if ( v80 <= 0 )
          j_j_j_j__ZdlPv_9(v67);
    if ( ptr )
      j_operator delete(ptr);
    if ( v115 )
      j_operator delete(v115);
  }
  v68 = v119;
  if ( v119 )
    v69 = (unsigned int *)(v119 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
    else
      v70 = (*v69)--;
    if ( v70 == 1 )
      v71 = (unsigned int *)(v68 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
}


void __fastcall DeOpCommand::setup(DeOpCommand *this, CommandRegistry *a2)
{
  DeOpCommand *v2; // r5@1
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
  sub_21E94B4((void **)&v15, "deop");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.deop.description", 2, 0, 0);
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
  j_CommandRegistry::registerOverload<DeOpCommand,CommandParameterData>((int)v2, "deop", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall DeOpCommand::execute(DeOpCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  DeOpCommand::execute(this, a2, a3);
}


Command *__fastcall DeOpCommand::DeOpCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_2719FFC;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  return v1;
}


void __fastcall DeOpCommand::setup(DeOpCommand *this, CommandRegistry *a2)
{
  DeOpCommand::setup(this, a2);
}


int __fastcall DeOpCommand::~DeOpCommand(DeOpCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2719FFC;
  j_CommandSelectorBase::~CommandSelectorBase((DeOpCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall DeOpCommand::~DeOpCommand(DeOpCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2719FFC;
  j_CommandSelectorBase::~CommandSelectorBase((DeOpCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
