

Command *__fastcall SetWorldSpawnCommand::SetWorldSpawnCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A1B0;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 20));
  *((_BYTE *)v1 + 36) = 0;
  return v1;
}


void __fastcall SetWorldSpawnCommand::setup(SetWorldSpawnCommand *this, CommandRegistry *a2)
{
  SetWorldSpawnCommand::setup(this, a2);
}


void __fastcall SetWorldSpawnCommand::execute(SetWorldSpawnCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SetWorldSpawnCommand::execute(this, a2, a3);
}


void __fastcall SetWorldSpawnCommand::setup(SetWorldSpawnCommand *this, CommandRegistry *a2)
{
  SetWorldSpawnCommand *v2; // r4@1
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
  sub_21E94B4((void **)&v15, "setworldspawn");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.setworldspawn.description", 1, 0, 0);
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
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v16 = type_id<CommandRegistry,CommandPosition>(void)::id;
  v6 = j_CommandParameterData::CommandParameterData(
         (int)&v12,
         &v16,
         (unsigned int)CommandRegistry::parse<CommandPosition>,
         "spawnPoint",
         0,
         20,
         1,
         36);
  j_CommandRegistry::registerOverload<SetWorldSpawnCommand,CommandParameterData>((int)v2, "setworldspawn", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall SetWorldSpawnCommand::~SetWorldSpawnCommand(SetWorldSpawnCommand *this)
{
  SetWorldSpawnCommand::~SetWorldSpawnCommand(this);
}


void __fastcall SetWorldSpawnCommand::~SetWorldSpawnCommand(SetWorldSpawnCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall SetWorldSpawnCommand::execute(SetWorldSpawnCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SetWorldSpawnCommand *v3; // r4@1
  const BlockPos *v4; // r7@1
  CommandOutput *v5; // r8@1
  Dimension *v6; // r0@1
  Dimension *v7; // r5@1
  void *v8; // r4@3
  void *v9; // r6@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  int *v12; // r0@13
  void *v13; // r0@18
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  void *v16; // r4@23
  void *v17; // r6@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  int *v20; // r0@33
  int v21; // r6@43
  Command *v22; // r2@44
  void *v23; // r4@50
  Level *v24; // r0@55
  char *v25; // r4@55
  int v26; // r6@55
  unsigned int *v27; // r2@57
  signed int v28; // r1@59
  int *v29; // r0@65
  void *v30; // r0@70
  void *v31; // r0@71
  char *v32; // r0@72
  void *v33; // r4@78
  void *v34; // r6@78
  unsigned int *v35; // r2@80
  signed int v36; // r1@82
  int *v37; // r0@88
  void *v38; // r0@93
  void *v39; // r4@94
  unsigned int *v40; // r2@102
  signed int v41; // r1@104
  unsigned int *v42; // r2@106
  signed int v43; // r1@108
  unsigned int *v44; // r2@110
  signed int v45; // r1@112
  unsigned int *v46; // r2@126
  signed int v47; // r1@128
  CommandOutput *v48; // [sp+0h] [bp-D8h]@54
  int v49; // [sp+8h] [bp-D0h]@55
  int v50; // [sp+10h] [bp-C8h]@55
  char *v51; // [sp+18h] [bp-C0h]@55
  char *v52; // [sp+1Ch] [bp-BCh]@55
  char *v53; // [sp+20h] [bp-B8h]@55
  int v54; // [sp+28h] [bp-B0h]@55
  int v55; // [sp+2Ch] [bp-ACh]@55
  int v56; // [sp+30h] [bp-A8h]@55
  int v57; // [sp+34h] [bp-A4h]@55
  void **v58; // [sp+38h] [bp-A0h]@55
  signed int v59; // [sp+3Ch] [bp-9Ch]@55
  signed int v60; // [sp+40h] [bp-98h]@55
  char v61; // [sp+44h] [bp-94h]@55
  int v62; // [sp+48h] [bp-90h]@55
  int v63; // [sp+4Ch] [bp-8Ch]@55
  int v64; // [sp+50h] [bp-88h]@55
  int v65; // [sp+54h] [bp-84h]@55
  char v66; // [sp+58h] [bp-80h]@55
  __int64 v67; // [sp+5Ch] [bp-7Ch]@78
  int v68; // [sp+64h] [bp-74h]@78
  int v69; // [sp+6Ch] [bp-6Ch]@78
  int v70; // [sp+70h] [bp-68h]@49
  int v71; // [sp+74h] [bp-64h]@43
  int v72; // [sp+78h] [bp-60h]@44
  int v73; // [sp+7Ch] [bp-5Ch]@55
  __int64 v74; // [sp+80h] [bp-58h]@3
  int v75; // [sp+88h] [bp-50h]@3
  int v76; // [sp+90h] [bp-48h]@3
  __int64 v77; // [sp+94h] [bp-44h]@23
  int v78; // [sp+9Ch] [bp-3Ch]@23
  int v79; // [sp+A4h] [bp-34h]@23
  char v80; // [sp+A8h] [bp-30h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  j_CommandPosition::getPosition((CommandPosition *)&v80, (SetWorldSpawnCommand *)((char *)this + 20), (int)a2);
  v6 = (Dimension *)(*(int (__fastcall **)(const BlockPos *))(*(_DWORD *)v4 + 28))(v4);
  v7 = v6;
  if ( v6 )
  {
    if ( j_Dimension::getId(v6) )
    {
      sub_21E94B4((void **)&v76, "commands.setworldspawn.wrongDimension");
      v74 = 0LL;
      v75 = 0;
      j_CommandOutput::error(v5, &v76, (unsigned __int64 *)&v74);
      v9 = (void *)HIDWORD(v74);
      v8 = (void *)v74;
      if ( (_DWORD)v74 != HIDWORD(v74) )
      {
        do
        {
          v12 = (int *)(*(_DWORD *)v8 - 12);
          if ( v12 != &dword_28898C0 )
          {
            v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
            }
            else
              v11 = (*v10)--;
            if ( v11 <= 0 )
              j_j_j_j__ZdlPv_9(v12);
          }
          v8 = (char *)v8 + 8;
        }
        while ( v8 != v9 );
        v8 = (void *)v74;
      }
      if ( v8 )
        j_operator delete(v8);
      v13 = (void *)(v76 - 12);
      if ( (int *)(v76 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v76 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          goto LABEL_99;
LABEL_98:
        v15 = (*v14)--;
LABEL_99:
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
        return;
    }
    else
      j_BlockPos::BlockPos((int)&v71, (int)&v80);
      v21 = (signed __int16)v7[60];
      if ( *((_BYTE *)v3 + 36) )
        v22 = (Command *)v72;
        if ( v72 <= 0 )
          v22 = 0;
        if ( v72 >= v21 )
          v22 = (Command *)(v21 - 1);
        v72 = (int)v22;
      else
        j_CommandOrigin::getAreaAt((CommandOrigin *)&v70, v4, (const BlockPos *)&v71);
        if ( !v70 )
          sub_21E94B4((void **)&v69, "commands.compare.outOfWorld");
          v67 = 0LL;
          v68 = 0;
          j_CommandOutput::error(v5, &v69, (unsigned __int64 *)&v67);
          v34 = (void *)HIDWORD(v67);
          v33 = (void *)v67;
          if ( (_DWORD)v67 != HIDWORD(v67) )
            do
              v37 = (int *)(*(_DWORD *)v33 - 12);
              if ( v37 != &dword_28898C0 )
              {
                v35 = (unsigned int *)(*(_DWORD *)v33 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v36 = __ldrex(v35);
                  while ( __strex(v36 - 1, v35) );
                }
                else
                  v36 = (*v35)--;
                if ( v36 <= 0 )
                  j_j_j_j__ZdlPv_9(v37);
              }
              v33 = (char *)v33 + 8;
            while ( v33 != v34 );
            v33 = (void *)v67;
          if ( v33 )
            j_operator delete(v33);
          v38 = (void *)(v69 - 12);
          if ( (int *)(v69 - 12) != &dword_28898C0 )
            v46 = (unsigned int *)(v69 - 4);
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
              v47 = (*v46)--;
            if ( v47 <= 0 )
              j_j_j_j__ZdlPv_9(v38);
          v39 = (void *)v70;
          if ( v70 )
            j_BlockSource::~BlockSource((BlockSource *)(v70 + 8));
            if ( *(_DWORD *)v39 )
              (*(void (**)(void))(**(_DWORD **)v39 + 4))();
            j_operator delete(v39);
          return;
        v22 = (Command *)j_BlockSource::getAboveTopSolidBlock((BlockSource *)(v70 + 8), (const BlockPos *)&v71, 0, 0);
        v23 = (void *)v70;
        if ( v70 )
          j_BlockSource::~BlockSource((BlockSource *)(v70 + 8));
          if ( *(_DWORD *)v23 )
            (*(void (**)(void))(**(_DWORD **)v23 + 4))();
          j_operator delete(v23);
          v22 = (Command *)v72;
      if ( j_Command::validRange(v22, 0, v21, (int)v5, v48) == 1 )
        v24 = (Level *)j_Dimension::getLevel(v7);
        j_Level::setDefaultSpawn(v24, (const BlockPos *)&v71);
        v59 = 2;
        v60 = 1;
        v61 = 0;
        v58 = &off_26DFAB0;
        v62 = v71;
        v63 = v72;
        v64 = v73;
        v65 = 1;
        v66 = 0;
        (*(void (__fastcall **)(Dimension *, void ***, _DWORD))(*(_DWORD *)v7 + 212))(v7, &v58, 0);
        v55 = v71;
        v56 = v72;
        v57 = v73;
        j_CommandOutput::set<BlockPos>((int)v5, "spawnPoint", (int)&v55);
        sub_21E94B4((void **)&v54, "commands.setworldspawn.success");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v48, v71);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v49, v72);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v50, v73);
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v51 = (char *)j_operator new(0x18u);
        v53 = v51 + 24;
        v52 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                        (int)&v48,
                        (int)&v51,
                        (int)v51);
        j_CommandOutput::success((int)v5, &v54, (unsigned __int64 *)&v51);
        v26 = (int)v52;
        v25 = v51;
        if ( v51 != v52 )
            v29 = (int *)(*(_DWORD *)v25 - 12);
            if ( v29 != &dword_28898C0 )
              v27 = (unsigned int *)(*(_DWORD *)v25 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v28 = __ldrex(v27);
                while ( __strex(v28 - 1, v27) );
              else
                v28 = (*v27)--;
              if ( v28 <= 0 )
                j_j_j_j__ZdlPv_9(v29);
            v25 += 8;
          while ( v25 != (char *)v26 );
          v25 = v51;
        if ( v25 )
          j_operator delete(v25);
        v30 = (void *)(v50 - 12);
        if ( (int *)(v50 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v50 - 4);
          if ( &pthread_create )
            __dmb();
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
          else
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        v31 = (void *)(v49 - 12);
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v49 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v32 = (char *)v48 - 12;
        if ( (int *)((char *)v48 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)((char *)v48 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        v13 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v54 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            goto LABEL_99;
          goto LABEL_98;
  }
  else
    sub_21E94B4((void **)&v79, "commands.compare.outOfWorld");
    v77 = 0LL;
    v78 = 0;
    j_CommandOutput::error(v5, &v79, (unsigned __int64 *)&v77);
    v17 = (void *)HIDWORD(v77);
    v16 = (void *)v77;
    if ( (_DWORD)v77 != HIDWORD(v77) )
      do
        v20 = (int *)(*(_DWORD *)v16 - 12);
        if ( v20 != &dword_28898C0 )
          v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v16 = (char *)v16 + 8;
      while ( v16 != v17 );
      v16 = (void *)v77;
    if ( v16 )
      j_operator delete(v16);
    v13 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v79 - 4);
      if ( &pthread_create )
        __dmb();
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        goto LABEL_99;
      goto LABEL_98;
}
