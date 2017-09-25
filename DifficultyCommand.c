

void __fastcall DifficultyCommand::setup(DifficultyCommand *this, CommandRegistry *a2)
{
  DifficultyCommand *v2; // r8@1
  void *v3; // r6@1
  int v4; // r5@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@19
  void *v12; // r0@20
  void *v13; // r0@21
  void *v14; // r0@22
  void *v15; // r0@23
  void *v16; // r0@24
  __int64 v17; // r2@25
  void *v18; // r0@25
  char v19; // r0@26
  int v20; // r0@29
  __int64 v21; // r2@29
  void *v22; // r0@29
  char v23; // r0@30
  int v24; // r0@33
  void *v25; // r0@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  unsigned int *v30; // r2@43
  signed int v31; // r1@45
  unsigned int *v32; // r2@47
  signed int v33; // r1@49
  unsigned int *v34; // r2@51
  signed int v35; // r1@53
  unsigned int *v36; // r2@55
  signed int v37; // r1@57
  unsigned int *v38; // r2@59
  signed int v39; // r1@61
  unsigned int *v40; // r2@63
  signed int v41; // r1@65
  unsigned int *v42; // r2@67
  signed int v43; // r1@69
  int v44; // r2@71
  signed int v45; // r1@73
  int v46; // r2@75
  signed int v47; // r1@77
  unsigned int *v48; // r2@79
  signed int v49; // r1@81
  char v50; // [sp+18h] [bp-100h]@33
  int v51; // [sp+24h] [bp-F4h]@33
  __int64 v52; // [sp+40h] [bp-D8h]@30
  char v53; // [sp+48h] [bp-D0h]@29
  int v54; // [sp+54h] [bp-C4h]@29
  __int64 v55; // [sp+70h] [bp-A8h]@26
  int v56; // [sp+7Ch] [bp-9Ch]@25
  int v57; // [sp+80h] [bp-98h]@1
  int v58; // [sp+84h] [bp-94h]@1
  int v59; // [sp+88h] [bp-90h]@1
  int v60; // [sp+8Ch] [bp-8Ch]@1
  int v61; // [sp+90h] [bp-88h]@1
  int v62; // [sp+94h] [bp-84h]@1
  int v63; // [sp+98h] [bp-80h]@1
  int v64; // [sp+9Ch] [bp-7Ch]@1
  int v65; // [sp+A0h] [bp-78h]@1
  int v66; // [sp+A4h] [bp-74h]@1
  int v67; // [sp+A8h] [bp-70h]@1
  int v68; // [sp+ACh] [bp-6Ch]@1
  int v69; // [sp+B0h] [bp-68h]@1
  int v70; // [sp+B4h] [bp-64h]@1
  int v71; // [sp+B8h] [bp-60h]@1
  int v72; // [sp+BCh] [bp-5Ch]@1
  void *v73; // [sp+C0h] [bp-58h]@1
  int v74; // [sp+C4h] [bp-54h]@1
  char *v75; // [sp+C8h] [bp-50h]@1
  int v76; // [sp+D0h] [bp-48h]@1
  __int16 v77; // [sp+F4h] [bp-24h]@29

  v2 = this;
  sub_21E94B4((void **)&v76, "Difficulty");
  sub_21E94B4((void **)&v57, "peaceful");
  v58 = 0;
  sub_21E94B4((void **)&v59, "easy");
  v60 = 1;
  sub_21E94B4((void **)&v61, "normal");
  v62 = 2;
  sub_21E94B4((void **)&v63, "hard");
  v64 = 3;
  sub_21E94B4((void **)&v65, (const char *)&aKlnopq[4]);
  v66 = 0;
  sub_21E94B4((void **)&v67, "e");
  v68 = 1;
  sub_21E94B4((void **)&v69, (const char *)&aKlnopq[2]);
  v70 = 2;
  sub_21E94B4((void **)&v71, (const char *)&aFhij[1]);
  v72 = 3;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v3 = j_operator new(0x40u);
  v73 = v3;
  v75 = (char *)v3 + 64;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,Difficulty> const*,std::pair<std::string,Difficulty>*>(
         (int)&v57,
         (int)&v73,
         (int)v3);
  v74 = v4;
  j_CommandRegistry::addEnumValues<Difficulty>((int)v2, (int)&v76, (unsigned __int64 *)&v73);
  if ( v3 != (void *)v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 8;
    }
    while ( v3 != (void *)v4 );
    v3 = v73;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v69 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v67 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v65 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v63 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v61 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v59 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v57 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v76 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v56, "difficulty");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v56, "commands.difficulty.description", 1, 0, 0);
  v18 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v44 = v56 - 4;
        v45 = __ldrex((unsigned int *)v17);
        HIDWORD(v17) = v45 - 1;
      while ( __strex(v45 - 1, (unsigned int *)v17) );
      v45 = *(_DWORD *)v17;
      HIDWORD(v17) = *(_DWORD *)v17 - 1;
      *(_DWORD *)v17 = HIDWORD(v17);
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  LODWORD(v17) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v55, 1, v17);
  v19 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Difficulty>(void)::id[0];
  __dmb();
  if ( !(v19 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Difficulty>(void)::id) )
    type_id<CommandRegistry,Difficulty>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Difficulty>(void)::id);
  v77 = type_id<CommandRegistry,Difficulty>(void)::id;
  v20 = j_CommandParameterData::CommandParameterData(
          (int)&v53,
          &v77,
          (unsigned int)CommandRegistry::parse<Difficulty>,
          "difficulty",
          0,
          20,
          -1);
  j_CommandRegistry::registerOverload<DifficultyCommand,CommandParameterData>((int)v2, "difficulty", v55, v20);
  v22 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v46 = v54 - 4;
        v47 = __ldrex((unsigned int *)v21);
        HIDWORD(v21) = v47 - 1;
      while ( __strex(v47 - 1, (unsigned int *)v21) );
      v47 = *(_DWORD *)v21;
      HIDWORD(v21) = *(_DWORD *)v21 - 1;
      *(_DWORD *)v21 = HIDWORD(v21);
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  LODWORD(v21) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v52, 1, v21);
  v23 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v23 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v77 = type_id<CommandRegistry,int>(void)::id;
  v24 = j_CommandParameterData::CommandParameterData(
          (int)&v50,
          (unsigned int)CommandRegistry::parse<int>,
          24,
  j_CommandRegistry::registerOverload<DifficultyCommand,CommandParameterData>((int)v2, "difficulty", v52, v24);
  v25 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v51 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
}


void __fastcall DifficultyCommand::execute(DifficultyCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  DifficultyCommand *v3; // r6@1
  CommandOutput *v4; // r4@1
  unsigned int v5; // r5@1
  char *v6; // r4@3
  int v7; // r6@3
  int v8; // r0@5
  void *v9; // r0@5
  char *v10; // r4@6
  int v11; // r6@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int *v14; // r0@16
  void *v15; // r0@21
  void *v16; // r0@22
  void *v17; // r0@23
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  int *v22; // r0@36
  void *v23; // r0@41
  unsigned int *v24; // r2@47
  signed int v25; // r1@49
  unsigned int *v26; // r2@51
  signed int v27; // r1@53
  unsigned int *v28; // r2@55
  signed int v29; // r1@57
  unsigned int *v30; // r2@75
  signed int v31; // r1@77
  int v32; // [sp+4h] [bp-64h]@6
  int v33; // [sp+8h] [bp-60h]@6
  char *v34; // [sp+10h] [bp-58h]@6
  char *v35; // [sp+14h] [bp-54h]@6
  char *v36; // [sp+18h] [bp-50h]@6
  int v37; // [sp+20h] [bp-48h]@6
  int v38; // [sp+24h] [bp-44h]@5
  int v39; // [sp+28h] [bp-40h]@3
  char *v40; // [sp+30h] [bp-38h]@3
  char *v41; // [sp+34h] [bp-34h]@3
  char *v42; // [sp+38h] [bp-30h]@3
  int v43; // [sp+40h] [bp-28h]@3

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 5);
  if ( v5 != 5 || (v5 = *((_DWORD *)this + 6), v5 < 4) )
  {
    v8 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 24))(a2);
    (*(void (**)(void))(*(_DWORD *)v8 + 84))();
    sub_19B6E3C((void **)&v38, v5);
    j_CommandOutput::set<std::string>((int)v4, "difficulty", &v38);
    v9 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    sub_21E94B4((void **)&v37, "commands.difficulty.success");
    sub_19B6E3C((void **)&v32, v5);
    j_CommandOutputParameter::CommandOutputParameter(&v33, &v32);
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v34 = (char *)j_operator new(8u);
    v36 = v34 + 8;
    v35 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v33,
                    (int)&v34,
                    (int)v34);
    j_CommandOutput::success((int)v4, &v37, (unsigned __int64 *)&v34);
    v11 = (int)v35;
    v10 = v34;
    if ( v34 != v35 )
      do
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 += 8;
      while ( v10 != (char *)v11 );
      v10 = v34;
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v33 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v32 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v37 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        goto LABEL_60;
      goto LABEL_59;
  }
  else
    sub_21E94B4((void **)&v43, "commands.generic.parameter.invalid");
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v39, *((_DWORD *)v3 + 6));
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v40 = (char *)j_operator new(8u);
    v42 = v40 + 8;
    v41 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v39,
                    (int)&v40,
                    (int)v40);
    j_CommandOutput::error(v4, &v43, (unsigned __int64 *)&v40);
    v7 = (int)v41;
    v6 = v40;
    if ( v40 != v41 )
        v22 = (int *)(*(_DWORD *)v6 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v6 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v6 += 8;
      while ( v6 != (char *)v7 );
      v6 = v40;
    if ( v6 )
      j_operator delete(v6);
    v23 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v39 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v17 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v43 - 4);
LABEL_59:
      v19 = (*v18)--;
LABEL_60:
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
      return;
}


void __fastcall DifficultyCommand::~DifficultyCommand(DifficultyCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall DifficultyCommand::setup(DifficultyCommand *this, CommandRegistry *a2)
{
  DifficultyCommand::setup(this, a2);
}


int __fastcall DifficultyCommand::DifficultyCommand(Command *a1)
{
  int result; // r0@1
  __int64 v2; // r1@1

  result = j_Command::Command(a1);
  HIDWORD(v2) = -1;
  *(_DWORD *)result = &off_271A010;
  LODWORD(v2) = 5;
  *(_QWORD *)(result + 20) = v2;
  return result;
}


void __fastcall DifficultyCommand::~DifficultyCommand(DifficultyCommand *this)
{
  DifficultyCommand::~DifficultyCommand(this);
}


void __fastcall DifficultyCommand::execute(DifficultyCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  DifficultyCommand::execute(this, a2, a3);
}
