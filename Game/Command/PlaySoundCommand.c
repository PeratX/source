

void __fastcall PlaySoundCommand::~PlaySoundCommand(PlaySoundCommand *this)
{
  PlaySoundCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A14C;
  j_CommandSelectorBase::~CommandSelectorBase((PlaySoundCommand *)((char *)this + 24));
  v2 = *((_DWORD *)v1 + 5);
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
  j_Command::~Command(v1);
  j_operator delete((void *)v1);
}


void __fastcall PlaySoundCommand::~PlaySoundCommand(PlaySoundCommand *this)
{
  PlaySoundCommand::~PlaySoundCommand(this);
}


void __fastcall PlaySoundCommand::setup(PlaySoundCommand *this, CommandRegistry *a2)
{
  PlaySoundCommand::setup(this, a2);
}


void __fastcall PlaySoundCommand::setup(PlaySoundCommand *this, CommandRegistry *a2)
{
  PlaySoundCommand *v2; // r10@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  char v7; // r0@8
  char v8; // r0@11
  char v9; // r0@14
  char v10; // r0@17
  int v11; // r0@20
  void *v12; // r0@20
  void *v13; // r0@21
  void *v14; // r0@22
  void *v15; // r0@23
  void *v16; // r0@24
  void *v17; // r0@25
  int v18; // r2@27
  signed int v19; // r1@29
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  unsigned int *v26; // r2@43
  signed int v27; // r1@45
  unsigned int *v28; // r2@47
  signed int v29; // r1@49
  unsigned int *v30; // r2@51
  signed int v31; // r1@53
  char v32; // [sp+1Ch] [bp-13Ch]@20
  int v33; // [sp+28h] [bp-130h]@20
  char v34; // [sp+44h] [bp-114h]@17
  int v35; // [sp+50h] [bp-108h]@21
  char v36; // [sp+6Ch] [bp-ECh]@14
  int v37; // [sp+78h] [bp-E0h]@22
  char v38; // [sp+94h] [bp-C4h]@11
  int v39; // [sp+A0h] [bp-B8h]@23
  char v40; // [sp+BCh] [bp-9Ch]@8
  int v41; // [sp+C8h] [bp-90h]@24
  char v42; // [sp+E4h] [bp-74h]@5
  int v43; // [sp+F0h] [bp-68h]@25
  __int64 v44; // [sp+10Ch] [bp-4Ch]@2
  int v45; // [sp+118h] [bp-40h]@1
  unsigned __int16 v46; // [sp+11Ch] [bp-3Ch]@5
  __int16 v47; // [sp+120h] [bp-38h]@8
  __int16 v48; // [sp+124h] [bp-34h]@11
  __int16 v49; // [sp+128h] [bp-30h]@14
  __int16 v50; // [sp+12Ch] [bp-2Ch]@17
  __int16 v51; // [sp+130h] [bp-28h]@20

  v2 = this;
  sub_21E94B4((void **)&v45, "playsound");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v45, "commands.playsound.description", 1, 0, 0);
  v4 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
  {
    v18 = v45 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v19 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v19 - 1;
      }
      while ( __strex(v19 - 1, (unsigned int *)v3) );
    }
    else
      v19 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v44, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
  v46 = type_id<CommandRegistry,std::string>(void)::id[0];
  j_CommandParameterData::CommandParameterData(
    (int)&v42,
    &v46,
    (unsigned int)CommandRegistry::parse<std::string>,
    "sound",
    0,
    20,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v47 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
    (int)&v40,
    &v47,
    (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
    "player",
    24,
    1,
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v7 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v48 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v38,
    &v48,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "position",
    120,
    148);
  v8 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id;
  if ( !(v8 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id) )
    type_id<CommandRegistry,float>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id);
  v49 = type_id<CommandRegistry,float>(void)::id;
    (int)&v36,
    &v49,
    (unsigned int)CommandRegistry::parse<float>,
    "volume",
    136,
  v9 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id;
  if ( !(v9 & 1)
  v50 = type_id<CommandRegistry,float>(void)::id;
    (int)&v34,
    &v50,
    "pitch",
    140,
  v10 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id;
  if ( !(v10 & 1)
  v51 = type_id<CommandRegistry,float>(void)::id;
  v11 = j_CommandParameterData::CommandParameterData(
          (int)&v32,
          &v51,
          (unsigned int)CommandRegistry::parse<float>,
          "minimumVolume",
          0,
          144,
          1,
          -1);
  j_CommandRegistry::registerOverload<PlaySoundCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "playsound",
    v44,
    v11);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v33 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v37 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v41 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v43 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


void __fastcall PlaySoundCommand::execute(PlaySoundCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  PlaySoundCommand::execute(this, a2, a3);
}


Command *__fastcall PlaySoundCommand::PlaySoundCommand(Command *a1)
{
  Command *v1; // r4@1
  Command *result; // r0@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A14C;
  *((_DWORD *)v1 + 5) = &unk_28898CC;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 24);
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 120));
  *((_DWORD *)v1 + 34) = 1065353216;
  *((_DWORD *)v1 + 35) = 1065353216;
  result = v1;
  *((_DWORD *)v1 + 36) = 0;
  *((_BYTE *)v1 + 148) = 0;
  return result;
}


PlaySoundCommand *__fastcall PlaySoundCommand::~PlaySoundCommand(PlaySoundCommand *this)
{
  PlaySoundCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A14C;
  j_CommandSelectorBase::~CommandSelectorBase((PlaySoundCommand *)((char *)this + 24));
  v2 = *((_DWORD *)v1 + 5);
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
  j_Command::~Command(v1);
  return v1;
}


void __fastcall PlaySoundCommand::execute(PlaySoundCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  PlaySoundCommand *v3; // r6@1
  CommandOutput *v4; // r8@1
  int *v5; // r9@2
  void *v6; // r0@2
  Entity *v11; // r10@5
  char *v12; // r0@6
  _DWORD *v15; // r0@10
  __int64 v18; // r4@14
  void *v19; // r0@14
  _BYTE *v20; // r0@15
  int *v21; // r7@17
  _BYTE *v22; // r9@17
  CommandOutput *v23; // r11@17
  char *v24; // r8@17
  unsigned int v25; // r2@17
  unsigned int v26; // r1@19
  unsigned int v27; // r5@19
  Entity **v28; // r6@26
  void *v29; // r6@28
  int v30; // r0@30
  void *v31; // r0@31
  PlaySoundCommand *v32; // r7@33
  Level *v33; // r0@33
  int v34; // r0@33
  int v35; // r4@33
  void (__fastcall *v36)(int, char *, void ***, int); // r6@33
  char *v37; // r5@33
  int v38; // r0@33
  void *v39; // r0@33
  unsigned int *v40; // r2@35
  signed int v41; // r1@37
  unsigned int *v42; // r2@39
  signed int v43; // r1@41
  unsigned int *v44; // r2@43
  signed int v45; // r1@45
  signed int v46; // r4@60
  unsigned int *v47; // r2@61
  signed int v48; // r1@63
  int v49; // r4@65
  char *v50; // r5@65
  unsigned int *v51; // r2@67
  signed int v52; // r1@69
  int *v53; // r0@75
  void *v54; // r0@80
  void *v55; // r0@81
  int v56; // r5@83
  unsigned int *v57; // r1@84
  unsigned int v58; // r0@86
  unsigned int *v59; // r6@90
  unsigned int v60; // r0@92
  int v61; // r5@101
  unsigned int *v62; // r1@102
  unsigned int v63; // r0@104
  unsigned int *v64; // r6@108
  unsigned int v65; // r0@110
  void *v66; // r0@116
  char *v67; // r4@117
  int v68; // r6@117
  unsigned int *v69; // r2@119
  signed int v70; // r1@121
  int *v71; // r0@127
  void *v72; // r0@132
  void *v73; // r0@133
  void *v74; // r0@134
  int v75; // r4@138
  unsigned int *v76; // r1@139
  unsigned int v77; // r0@141
  unsigned int *v78; // r5@145
  unsigned int v79; // r0@147
  unsigned int *v80; // r2@153
  signed int v81; // r1@155
  unsigned int *v82; // r2@157
  signed int v83; // r1@159
  unsigned int *v84; // r2@161
  signed int v85; // r1@163
  unsigned int *v86; // r2@165
  signed int v87; // r1@167
  unsigned int *v88; // r2@169
  signed int v89; // r1@171
  CommandOrigin *v90; // [sp+8h] [bp-128h]@3
  PlaySoundCommand *v91; // [sp+Ch] [bp-124h]@1
  const CommandOrigin *v92; // [sp+14h] [bp-11Ch]@1
  int v93; // [sp+18h] [bp-118h]@3
  int v94; // [sp+20h] [bp-110h]@3
  int v95; // [sp+28h] [bp-108h]@117
  int v96; // [sp+30h] [bp-100h]@117
  char *v97; // [sp+38h] [bp-F8h]@117
  char *v98; // [sp+3Ch] [bp-F4h]@117
  char *v99; // [sp+40h] [bp-F0h]@117
  int v100; // [sp+48h] [bp-E8h]@117
  int v101; // [sp+4Ch] [bp-E4h]@31
  void **v102; // [sp+50h] [bp-E0h]@31
  int v103; // [sp+54h] [bp-DCh]@31
  int v104; // [sp+58h] [bp-D8h]@31
  char v105; // [sp+5Ch] [bp-D4h]@31
  int v106; // [sp+60h] [bp-D0h]@31
  __int64 v107; // [sp+70h] [bp-C0h]@31
  int v108; // [sp+7Ch] [bp-B4h]@14
  int v109; // [sp+80h] [bp-B0h]@65
  char *v110; // [sp+88h] [bp-A8h]@65
  char *v111; // [sp+8Ch] [bp-A4h]@65
  char *v112; // [sp+90h] [bp-A0h]@65
  int v113; // [sp+98h] [bp-98h]@65
  char v114; // [sp+9Ch] [bp-94h]@6
  int v115; // [sp+A8h] [bp-88h]@5
  int v116; // [sp+ACh] [bp-84h]@5
  int v117; // [sp+B0h] [bp-80h]@5
  char v118; // [sp+B4h] [bp-7Ch]@3
  int v119; // [sp+B8h] [bp-78h]@83
  char v120; // [sp+C0h] [bp-70h]@3
  int v121; // [sp+C4h] [bp-6Ch]@101
  void *ptr; // [sp+CCh] [bp-64h]@3
  void *v123; // [sp+D0h] [bp-60h]@3
  void *v124; // [sp+D4h] [bp-5Ch]@3
  int v125; // [sp+D8h] [bp-58h]@2
  int *v126; // [sp+DCh] [bp-54h]@1
  int v127; // [sp+E0h] [bp-50h]@138

  v3 = this;
  v4 = a3;
  v92 = a2;
  v91 = this;
  j_CommandSelector<Player>::results((int)&v126, (PlaySoundCommand *)((char *)this + 24), a2);
  if ( !j_Command::checkHasTargets<Player>((__int64 **)&v126, v4) )
    goto LABEL_138;
  v5 = (int *)((char *)v3 + 20);
  sub_21E8AF4(&v125, (int *)v3 + 5);
  j_CommandOutput::set<std::string>((int)v4, "sound", &v125);
  v6 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
  {
    v47 = (unsigned int *)(v125 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  ptr = 0;
  v123 = 0;
  v124 = 0;
  j_CommandSelectorResults<Player>::begin((int)&v120, &v126);
  j_CommandSelectorResults<Player>::end((int)&v118, (int)&v126);
  v90 = (PlaySoundCommand *)((char *)v3 + 120);
  __asm { VMOV.F32        S16, #16.0 }
  v93 = (int)v3 + 144;
  v94 = (int)v3 + 136;
  __asm
    VMOV.F32        S18, #1.0
    VMOV.F32        S20, #8.0
  while ( 1 )
    if ( !j_SelectorIterator<Player>::operator!=((int)&v120, (int)&v118) )
      v46 = 2;
      goto LABEL_83;
    v11 = (Entity *)j_SelectorIterator<Player>::operator*((int)&v120);
    v115 = 0;
    v116 = 0;
    v117 = 0;
    if ( *((_BYTE *)v3 + 148) )
      j_CommandPosition::getPosition((CommandPosition *)&v114, v90, (int)v92);
      v12 = &v114;
      v12 = (char *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 52))(v11);
    v115 = *(_DWORD *)v12;
    v116 = *((_DWORD *)v12 + 1);
    v117 = *((_DWORD *)v12 + 2);
    _R0 = v94;
    __asm { VLDR            S22, [R0] }
    _R0 = j_Entity::distanceTo(v11, (const Vec3 *)&v115);
    __asm
      VCMPE.F32       S22, S18
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S2, S22, S16
      VMOV.F32        S4, S16
      VMOV            S0, R0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S4, S2 }
    v15 = (_DWORD *)v94;
      VCMPE.F32       S0, S4
      break;
LABEL_14:
    LODWORD(v18) = *v15;
    sub_21E94B4((void **)&v108, "player");
    j_CommandOutput::addToResultList((int)v4, (const char **)&v108, (int)v11);
    v19 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v108 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
      }
      else
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = v123;
    if ( v123 == v124 )
      v21 = v5;
      v22 = ptr;
      v23 = v4;
      v24 = 0;
      v25 = ((_BYTE *)v123 - (_BYTE *)ptr) >> 2;
      if ( !v25 )
        v25 = 1;
      v26 = v25 + (((_BYTE *)v123 - (_BYTE *)ptr) >> 2);
      v27 = v25 + (((_BYTE *)v123 - (_BYTE *)ptr) >> 2);
      if ( 0 != v26 >> 30 )
        v27 = 0x3FFFFFFF;
      if ( v26 < v25 )
      if ( v27 )
        if ( v27 >= 0x40000000 )
          sub_21E57F4();
        v24 = (char *)j_operator new(4 * v27);
        v20 = v123;
        v22 = ptr;
      v28 = (Entity **)&v24[v20 - v22];
      *v28 = v11;
      if ( (v20 - v22) >> 2 )
        j___aeabi_memmove4_0((int)v24, (int)v22);
      v29 = v28 + 1;
      if ( v22 )
        j_operator delete(v22);
      ptr = v24;
      v123 = v29;
      v30 = (int)&v24[4 * v27];
      v3 = v91;
      v4 = v23;
      v5 = v21;
      v124 = (void *)v30;
      *(_DWORD *)v123 = v11;
      v123 = (char *)v123 + 4;
    sub_21E8AF4(&v101, v5);
    HIDWORD(v18) = *((_DWORD *)v3 + 35);
    v103 = 2;
    v104 = 1;
    v105 = 0;
    v102 = &off_26E9A94;
    sub_21E8AF4(&v106, &v101);
    v107 = v18;
      VLDR            S0, [SP,#0x130+var_88]
      VLDR            S2, [SP,#0x130+var_84]
      VMUL.F32        S0, S0, S20
      VLDR            S4, [SP,#0x130+var_80]
      VMUL.F32        S2, S2, S20
      VCVTR.S32.F32   S0, S0
      VSTR            S0, [SP,#0x130+var_CC]
      VCVTR.S32.F32   S0, S2
      VMUL.F32        S2, S4, S20
      VSTR            S0, [SP,#0x130+var_C8]
    v31 = (void *)(v101 - 12);
    __asm { VSTR            S0, [SP,#0x130+var_C4] }
    if ( !_ZF )
      v42 = (unsigned int *)(v101 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v32 = v3;
    v33 = (Level *)j_Entity::getLevel(v11);
    v34 = j_Level::getPacketSender(v33);
    v35 = v34;
    v36 = *(void (__fastcall **)(int, char *, void ***, int))(*(_DWORD *)v34 + 16);
    v37 = j_Player::getClientId(v11);
    v38 = j_Player::getClientSubId(v11);
    v36(v35, v37, &v102, v38);
    v3 = v32;
    v39 = (void *)(v106 - 12);
    if ( (int *)(v106 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v106 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v3 = v32;
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    j_SelectorIterator<Player>::operator++((int)&v120);
  _R0 = v93;
    VLDR            S0, [R0]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 52))(v11);
      VLDR            S6, [SP,#0x130+var_88]
      VLDR            S0, [R0]
      VLDR            S8, [SP,#0x130+var_84]
      VLDR            S2, [R0,#4]
      VSUB.F32        S6, S6, S0
      VLDR            S4, [R0,#8]
      VSUB.F32        S8, S8, S2
      VLDR            S10, [SP,#0x130+var_80]
    v15 = (_DWORD *)v93;
      VSUB.F32        S10, S10, S4
      VMUL.F32        S12, S6, S6
      VMUL.F32        S14, S8, S8
      VMUL.F32        S1, S10, S10
      VADD.F32        S12, S14, S12
      VADD.F32        S12, S12, S1
      VSQRT.F32       S12, S12
      VCMPE.F32       S12, #0.0
      __asm { VDIV.F32        S6, S6, S12 }
      v15 = (_DWORD *)v93;
      __asm
        VDIV.F32        S8, S8, S12
        VDIV.F32        S10, S10, S12
        VADD.F32        S6, S6, S6
        VADD.F32        S8, S8, S8
        VADD.F32        S10, S10, S10
        VADD.F32        S0, S6, S0
        VADD.F32        S2, S8, S2
        VADD.F32        S4, S10, S4
        VSTR            S0, [SP,#0x130+var_88]
        VSTR            S2, [SP,#0x130+var_84]
        VSTR            S4, [SP,#0x130+var_80]
    goto LABEL_14;
  sub_21E94B4((void **)&v113, "commands.playsound.playerTooFar");
  j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v109, (int)v11);
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v110 = (char *)j_operator new(8u);
  v112 = v110 + 8;
  v111 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                   (int)&v109,
                   (int)&v110,
                   (int)v110);
  j_CommandOutput::error(v4, &v113, (unsigned __int64 *)&v110);
  v49 = (int)v111;
  v50 = v110;
  if ( v110 != v111 )
    do
      v53 = (int *)(*(_DWORD *)v50 - 12);
      if ( v53 != &dword_28898C0 )
        v51 = (unsigned int *)(*(_DWORD *)v50 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
        }
        else
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      v50 += 8;
    while ( v50 != (char *)v49 );
    v50 = v110;
  if ( v50 )
    j_operator delete(v50);
  v54 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v109 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v113 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v46 = 1;
LABEL_83:
  v56 = v119;
  if ( v119 )
    v57 = (unsigned int *)(v119 + 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 == 1 )
      v59 = (unsigned int *)(v56 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 8))(v56);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 12))(v56);
  v61 = v121;
  if ( v121 )
    v62 = (unsigned int *)(v121 + 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 == 1 )
      v64 = (unsigned int *)(v61 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
  if ( v46 == 2 )
    v66 = ptr;
    if ( ptr != v123 )
      sub_21E94B4((void **)&v100, "commands.playsound.success");
      j_CommandOutputParameter::CommandOutputParameter(&v95, v5);
      j_CommandOutputParameter::CommandOutputParameter((int)&v96, (unsigned __int64 *)&ptr);
      v97 = 0;
      v98 = 0;
      v99 = 0;
      v97 = (char *)j_operator new(0x10u);
      v99 = v97 + 16;
      v98 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v95,
                      (int)&v97,
                      (int)v97);
      j_CommandOutput::success((int)v4, &v100, (unsigned __int64 *)&v97);
      v68 = (int)v98;
      v67 = v97;
      if ( v97 != v98 )
          v71 = (int *)(*(_DWORD *)v67 - 12);
          if ( v71 != &dword_28898C0 )
          {
            v69 = (unsigned int *)(*(_DWORD *)v67 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v70 = __ldrex(v69);
              while ( __strex(v70 - 1, v69) );
            }
            else
              v70 = (*v69)--;
            if ( v70 <= 0 )
              j_j_j_j__ZdlPv_9(v71);
          }
          v67 += 8;
        while ( v67 != (char *)v68 );
        v67 = v97;
      if ( v67 )
        j_operator delete(v67);
      v72 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v80 = (unsigned int *)(v96 - 4);
            v81 = __ldrex(v80);
          while ( __strex(v81 - 1, v80) );
          v81 = (*v80)--;
        if ( v81 <= 0 )
          j_j_j_j__ZdlPv_9(v72);
      v73 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v82 = (unsigned int *)(v95 - 4);
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
          v83 = (*v82)--;
        if ( v83 <= 0 )
          j_j_j_j__ZdlPv_9(v73);
      v74 = (void *)(v100 - 12);
      if ( (int *)(v100 - 12) != &dword_28898C0 )
        v84 = (unsigned int *)(v100 - 4);
            v85 = __ldrex(v84);
          while ( __strex(v85 - 1, v84) );
          v85 = (*v84)--;
        if ( v85 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      goto LABEL_135;
  else
LABEL_135:
  if ( v66 )
    j_operator delete(v66);
LABEL_138:
  v75 = v127;
  if ( v127 )
    v76 = (unsigned int *)(v127 + 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 == 1 )
      v78 = (unsigned int *)(v75 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v75 + 8))(v75);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v75 + 12))(v75);
}
