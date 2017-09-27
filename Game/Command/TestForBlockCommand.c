

void __fastcall TestForBlockCommand::setup(TestForBlockCommand *this, CommandRegistry *a2)
{
  TestForBlockCommand *v2; // r4@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  char v7; // r0@8
  int v8; // r0@11
  void *v9; // r0@11
  void *v10; // r0@12
  void *v11; // r0@13
  int v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  char v20; // [sp+1Ch] [bp-ACh]@11
  int v21; // [sp+28h] [bp-A0h]@11
  char v22; // [sp+44h] [bp-84h]@8
  int v23; // [sp+50h] [bp-78h]@12
  char v24; // [sp+6Ch] [bp-5Ch]@5
  int v25; // [sp+78h] [bp-50h]@13
  __int64 v26; // [sp+94h] [bp-34h]@2
  int v27; // [sp+A0h] [bp-28h]@1
  __int16 v28; // [sp+A4h] [bp-24h]@5
  unsigned __int16 v29; // [sp+A8h] [bp-20h]@8
  __int16 v30; // [sp+ACh] [bp-1Ch]@11

  v2 = this;
  sub_21E94B4((void **)&v27, "testforblock");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v27, "commands.testforblock.description", 1, 0, 0);
  v4 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v12 = v27 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v13 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v13 - 1;
      }
      while ( __strex(v13 - 1, (unsigned int *)v3) );
    }
    else
      v13 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v26, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v28 = type_id<CommandRegistry,CommandPosition>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v24,
    &v28,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "position",
    0,
    20,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id) )
    type_id<CommandRegistry,Block const*>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id);
  v29 = type_id<CommandRegistry,Block const*>(void)::id[0];
    (int)&v22,
    &v29,
    (unsigned int)CommandRegistry::parse<Block const*>,
    "tileName",
    36,
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v7 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v30 = type_id<CommandRegistry,int>(void)::id;
  v8 = j_CommandParameterData::CommandParameterData(
         (int)&v20,
         &v30,
         (unsigned int)CommandRegistry::parse<int>,
         "dataValue",
         0,
         40,
         1,
         -1);
  j_CommandRegistry::registerOverload<TestForBlockCommand,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "testforblock",
    v26,
    v8);
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v21 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v23 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall TestForBlockCommand::~TestForBlockCommand(TestForBlockCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


Command *__fastcall TestForBlockCommand::TestForBlockCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A23C;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 20));
  *(_QWORD *)((char *)v1 + 36) = -4294967296LL;
  return v1;
}


void __fastcall TestForBlockCommand::execute(TestForBlockCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TestForBlockCommand *v3; // r5@1
  const BlockPos *v4; // r6@1
  CommandOutput *v5; // r8@1
  int v6; // r2@2
  int v7; // r0@2
  int v8; // r0@3
  char *v9; // r4@5
  int v10; // r6@5
  void *v11; // r4@7
  void *v12; // r6@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  int *v15; // r0@17
  void *v16; // r0@22
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  char *v19; // r4@27
  int v20; // r6@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  int *v23; // r0@37
  void *v24; // r0@42
  void *v25; // r0@43
  void *v26; // r0@44
  void *v27; // r0@45
  void *v28; // r0@46
  void *v29; // r0@47
  unsigned int *v30; // r2@48
  signed int v31; // r1@50
  unsigned int *v32; // r2@52
  signed int v33; // r1@54
  int *v34; // r0@60
  void *v35; // r0@65
  void *v36; // r0@66
  void *v37; // r0@67
  char *v38; // r4@73
  int v39; // r6@73
  unsigned int *v40; // r2@75
  signed int v41; // r1@77
  int *v42; // r0@83
  void *v43; // r0@88
  void *v44; // r0@89
  void *v45; // r0@90
  void *v46; // r0@91
  void *v47; // r0@92
  void *v48; // r0@101
  void *v49; // r4@103
  unsigned int *v50; // r2@108
  signed int v51; // r1@110
  unsigned int *v52; // r2@124
  signed int v53; // r1@126
  unsigned int *v54; // r2@128
  signed int v55; // r1@130
  unsigned int *v56; // r2@132
  signed int v57; // r1@134
  unsigned int *v58; // r2@136
  signed int v59; // r1@138
  unsigned int *v60; // r2@140
  signed int v61; // r1@142
  unsigned int *v62; // r2@144
  signed int v63; // r1@146
  unsigned int *v64; // r2@148
  signed int v65; // r1@150
  unsigned int *v66; // r2@152
  signed int v67; // r1@154
  unsigned int *v68; // r2@188
  signed int v69; // r1@190
  unsigned int *v70; // r2@192
  signed int v71; // r1@194
  unsigned int *v72; // r2@196
  signed int v73; // r1@198
  unsigned int *v74; // r2@200
  signed int v75; // r1@202
  unsigned int *v76; // r2@204
  signed int v77; // r1@206
  int v78; // [sp+0h] [bp-D4h]@5
  int v79; // [sp+8h] [bp-CCh]@5
  int v80; // [sp+10h] [bp-C4h]@5
  char *v81; // [sp+18h] [bp-BCh]@5
  char *v82; // [sp+1Ch] [bp-B8h]@5
  char *v83; // [sp+20h] [bp-B4h]@5
  int v84; // [sp+28h] [bp-ACh]@5
  int v85; // [sp+2Ch] [bp-A8h]@73
  int v86; // [sp+34h] [bp-A0h]@73
  int v87; // [sp+3Ch] [bp-98h]@73
  int v88; // [sp+44h] [bp-90h]@73
  int v89; // [sp+4Ch] [bp-88h]@73
  char *v90; // [sp+54h] [bp-80h]@73
  char *v91; // [sp+58h] [bp-7Ch]@73
  char *v92; // [sp+5Ch] [bp-78h]@73
  int v93; // [sp+64h] [bp-70h]@73
  int v94; // [sp+68h] [bp-6Ch]@27
  int v95; // [sp+70h] [bp-64h]@27
  int v96; // [sp+78h] [bp-5Ch]@27
  int v97; // [sp+80h] [bp-54h]@27
  int v98; // [sp+88h] [bp-4Ch]@27
  char *v99; // [sp+90h] [bp-44h]@27
  char *v100; // [sp+94h] [bp-40h]@27
  char *v101; // [sp+98h] [bp-3Ch]@27
  int v102; // [sp+A0h] [bp-34h]@27
  int v103; // [sp+A4h] [bp-30h]@2
  int v104; // [sp+A8h] [bp-2Ch]@2
  unsigned __int8 v105; // [sp+ACh] [bp-28h]@2
  char v106[7]; // [sp+ADh] [bp-27h]@2
  int v107; // [sp+B4h] [bp-20h]@2
  int v108; // [sp+B8h] [bp-1Ch]@2
  __int64 v109; // [sp+BCh] [bp-18h]@7
  int v110; // [sp+C4h] [bp-10h]@7
  int v111; // [sp+CCh] [bp-8h]@7
  int v112; // [sp+D0h] [bp-4h]@1
  int v113; // [sp+D4h] [bp+0h]@1
  int v114; // [sp+E0h] [bp+Ch]@1
  int v115; // [sp+E4h] [bp+10h]@2
  int v116; // [sp+E8h] [bp+14h]@2

  v3 = this;
  v4 = a2;
  v5 = a3;
  j_CommandPosition::getPosition((CommandPosition *)&v113, (TestForBlockCommand *)((char *)this + 20), (int)a2);
  j_BlockPos::BlockPos((int)&v114, (int)&v113);
  j_CommandOutput::set<bool>((int)v5, "matches", 0);
  j_CommandOrigin::getAreaAt((CommandOrigin *)&v112, v4, (const BlockPos *)&v114);
  if ( v112 )
  {
    *(_DWORD *)&v106[3] = v114;
    v107 = v115;
    v108 = v116;
    j_CommandOutput::set<BlockPos>((int)v5, "position", (int)&v106[3]);
    j_BlockSource::getBlockAndData((BlockSource *)&v105, (const BlockPos *)(v112 + 8), (int)&v114);
    v6 = *((_BYTE *)v3 + 40);
    j_Block::buildDescriptionName((Block *)&v104, *((_DWORD *)v3 + 9));
    v7 = j_FullBlock::getBlock((FullBlock *)&v105);
    j_Block::buildDescriptionName((Block *)&v103, v7);
    if ( v105 == *(_BYTE *)(*((_DWORD *)v3 + 9) + 4) )
    {
      v8 = *((_DWORD *)v3 + 10);
      if ( v8 < 0 || (unsigned __int8)v106[0] == v8 )
      {
        j_CommandOutput::set<bool>((int)v5, "matches", 1);
        sub_21E94B4((void **)&v84, "commands.testforblock.success");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v78, v114);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v79, v115);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v80, v116);
        v81 = 0;
        v82 = 0;
        v83 = 0;
        v81 = (char *)j_operator new(0x18u);
        v83 = v81 + 24;
        v82 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                        (int)&v78,
                        (int)&v81,
                        (int)v81);
        j_CommandOutput::success((int)v5, &v84, (unsigned __int64 *)&v81);
        v10 = (int)v82;
        v9 = v81;
        if ( v81 != v82 )
        {
          do
          {
            v34 = (int *)(*(_DWORD *)v9 - 12);
            if ( v34 != &dword_28898C0 )
            {
              v32 = (unsigned int *)(*(_DWORD *)v9 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
              }
              else
                v33 = (*v32)--;
              if ( v33 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
            }
            v9 += 8;
          }
          while ( v9 != (char *)v10 );
          v9 = v81;
        }
        if ( v9 )
          j_operator delete(v9);
        v35 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v80 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
          else
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        v36 = (void *)(v79 - 12);
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v64 = (unsigned int *)(v79 - 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        v37 = (void *)(v78 - 12);
        if ( (int *)(v78 - 12) != &dword_28898C0 )
          v66 = (unsigned int *)(v78 - 4);
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        v29 = (void *)(v84 - 12);
        if ( (int *)(v84 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v84 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            goto LABEL_99;
LABEL_98:
          v31 = (*v30)--;
          goto LABEL_99;
LABEL_101:
        v48 = (void *)(v103 - 12);
        if ( (int *)(v103 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v103 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        v16 = (void *)(v104 - 12);
        if ( (int *)(v104 - 12) == &dword_28898C0 )
          goto LABEL_103;
        v17 = (unsigned int *)(v104 - 4);
        if ( &pthread_create )
          __dmb();
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          goto LABEL_117;
        goto LABEL_116;
      }
      sub_21E94B4((void **)&v93, "commands.testforblock.failed.data");
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v85, v114);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v86, v115);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v87, v116);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v88, (unsigned __int8)v106[0]);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v89, *((_DWORD *)v3 + 10));
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v90 = (char *)j_operator new(0x28u);
      v92 = v90 + 40;
      v91 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v85,
                      (int)&v90,
                      (int)v90);
      j_CommandOutput::error(v5, &v93, (unsigned __int64 *)&v90);
      v39 = (int)v91;
      v38 = v90;
      if ( v90 != v91 )
        do
          v42 = (int *)(*(_DWORD *)v38 - 12);
          if ( v42 != &dword_28898C0 )
            v40 = (unsigned int *)(*(_DWORD *)v38 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
            else
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          v38 += 8;
        while ( v38 != (char *)v39 );
        v38 = v90;
      if ( v38 )
        j_operator delete(v38);
      v43 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v89 - 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
        else
          v69 = (*v68)--;
        if ( v69 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v44 = (void *)(v88 - 12);
      if ( (int *)(v88 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v88 - 4);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j__ZdlPv_9(v44);
      v45 = (void *)(v87 - 12);
      if ( (int *)(v87 - 12) != &dword_28898C0 )
        v72 = (unsigned int *)(v87 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j__ZdlPv_9(v45);
      v46 = (void *)(v86 - 12);
      if ( (int *)(v86 - 12) != &dword_28898C0 )
        v74 = (unsigned int *)(v86 - 4);
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
          v75 = (*v74)--;
        if ( v75 <= 0 )
          j_j_j_j__ZdlPv_9(v46);
      v47 = (void *)(v85 - 12);
      if ( (int *)(v85 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v85 - 4);
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
          v77 = (*v76)--;
        if ( v77 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      v29 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) == &dword_28898C0 )
        goto LABEL_101;
      v30 = (unsigned int *)(v93 - 4);
      if ( !&pthread_create )
        goto LABEL_98;
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      sub_21E94B4((void **)&v102, "commands.testforblock.failed.tile");
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v94, v114);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v95, v115);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v96, v116);
      j_CommandOutputParameter::CommandOutputParameter(&v97, &v103);
      j_CommandOutputParameter::CommandOutputParameter(&v98, &v104);
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v99 = (char *)j_operator new(0x28u);
      v101 = v99 + 40;
      v100 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v94,
                       (int)&v99,
                       (int)v99);
      j_CommandOutput::error(v5, &v102, (unsigned __int64 *)&v99);
      v20 = (int)v100;
      v19 = v99;
      if ( v99 != v100 )
          v23 = (int *)(*(_DWORD *)v19 - 12);
          if ( v23 != &dword_28898C0 )
            v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          v19 += 8;
        while ( v19 != (char *)v20 );
        v19 = v99;
      if ( v19 )
        j_operator delete(v19);
      v24 = (void *)(v98 - 12);
      if ( (int *)(v98 - 12) != &dword_28898C0 )
        v52 = (unsigned int *)(v98 - 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v25 = (void *)(v97 - 12);
      if ( (int *)(v97 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v97 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      v26 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v96 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      v27 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v95 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v94 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v29 = (void *)(v102 - 12);
      if ( (int *)(v102 - 12) == &dword_28898C0 )
      v30 = (unsigned int *)(v102 - 4);
LABEL_99:
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
    goto LABEL_101;
  }
  sub_21E94B4((void **)&v111, "commands.testforblock.outOfWorld");
  v109 = 0LL;
  v110 = 0;
  j_CommandOutput::error(v5, &v111, (unsigned __int64 *)&v109);
  v12 = (void *)HIDWORD(v109);
  v11 = (void *)v109;
  if ( (_DWORD)v109 != HIDWORD(v109) )
    do
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v11 = (char *)v11 + 8;
    while ( v11 != v12 );
    v11 = (void *)v109;
  if ( v11 )
    j_operator delete(v11);
  v16 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v111 - 4);
    if ( &pthread_create )
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
LABEL_117:
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
      goto LABEL_103;
LABEL_116:
    v18 = (*v17)--;
    goto LABEL_117;
LABEL_103:
  v49 = (void *)v112;
    j_BlockSource::~BlockSource((BlockSource *)(v112 + 8));
    if ( *(_DWORD *)v49 )
      (*(void (**)(void))(**(_DWORD **)v49 + 4))();
    j_operator delete(v49);
}


void __fastcall TestForBlockCommand::execute(TestForBlockCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TestForBlockCommand::execute(this, a2, a3);
}


void __fastcall TestForBlockCommand::setup(TestForBlockCommand *this, CommandRegistry *a2)
{
  TestForBlockCommand::setup(this, a2);
}


void __fastcall TestForBlockCommand::~TestForBlockCommand(TestForBlockCommand *this)
{
  TestForBlockCommand::~TestForBlockCommand(this);
}
