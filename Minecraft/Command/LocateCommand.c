

void __fastcall LocateCommand::setup(LocateCommand *this, CommandRegistry *a2)
{
  LocateCommand *v2; // r5@1
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
  sub_21E94B4((void **)&v15, "locate");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.locate.description", 1, 0, 0);
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
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,StructureFeatureType>(void)::id[0];
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,StructureFeatureType>(void)::id) )
    type_id<CommandRegistry,StructureFeatureType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,StructureFeatureType>(void)::id);
  v16 = type_id<CommandRegistry,StructureFeatureType>(void)::id;
  v6 = j_CommandParameterData::CommandParameterData(
         (int)&v12,
         &v16,
         (unsigned int)CommandRegistry::parse<StructureFeatureType>,
         "feature",
         0,
         18,
         -1);
  j_CommandRegistry::registerOverload<LocateCommand,CommandParameterData>((int)v2, "locate", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall LocateCommand::setup(LocateCommand *this, CommandRegistry *a2)
{
  LocateCommand::setup(this, a2);
}


void __fastcall LocateCommand::~LocateCommand(LocateCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall LocateCommand::~LocateCommand(LocateCommand *this)
{
  LocateCommand::~LocateCommand(this);
}


void __fastcall LocateCommand::execute(LocateCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r6@1
  LocateCommand *v4; // r9@1
  CommandOutput *v5; // r8@1
  Dimension *v6; // r0@1
  int v7; // r7@2
  int v8; // r4@2
  int (__fastcall *v9)(int, int, char *, int *); // r5@2
  void **v10; // r0@3
  const void **v11; // r0@3
  void *v12; // r0@3
  void *v13; // r0@4
  char *v14; // r4@5
  int v15; // r6@5
  void *v16; // r4@7
  void *v17; // r6@7
  unsigned int *v18; // r2@9
  signed int v19; // r1@11
  int *v20; // r0@17
  char *v21; // r0@22
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  int *v26; // r0@35
  void *v27; // r0@40
  void *v28; // r0@41
  void *v29; // r0@42
  void *v30; // r0@43
  void *v31; // r4@49
  void *v32; // r6@49
  unsigned int *v33; // r2@51
  signed int v34; // r1@53
  int *v35; // r0@59
  unsigned int *v36; // r2@66
  signed int v37; // r1@68
  unsigned int *v38; // r2@78
  signed int v39; // r1@80
  unsigned int *v40; // r2@82
  signed int v41; // r1@84
  unsigned int *v42; // r2@86
  signed int v43; // r1@88
  unsigned int *v44; // r2@90
  signed int v45; // r1@92
  unsigned int *v46; // r2@94
  signed int v47; // r1@96
  __int64 v48; // [sp+0h] [bp-B0h]@49
  int v49; // [sp+8h] [bp-A8h]@49
  int v50; // [sp+10h] [bp-A0h]@49
  int v51; // [sp+14h] [bp-9Ch]@5
  int v52; // [sp+1Ch] [bp-94h]@5
  int v53; // [sp+24h] [bp-8Ch]@5
  char *v54; // [sp+2Ch] [bp-84h]@5
  char *v55; // [sp+30h] [bp-80h]@5
  char *v56; // [sp+34h] [bp-7Ch]@5
  int v57; // [sp+3Ch] [bp-74h]@5
  int v58; // [sp+40h] [bp-70h]@5
  int v59; // [sp+44h] [bp-6Ch]@5
  int v60; // [sp+48h] [bp-68h]@5
  int v61; // [sp+4Ch] [bp-64h]@4
  int v62; // [sp+50h] [bp-60h]@3
  unsigned int v63; // [sp+54h] [bp-5Ch]@3
  int v64; // [sp+58h] [bp-58h]@3
  char *v65; // [sp+5Ch] [bp-54h]@3
  char v66; // [sp+60h] [bp-50h]@2
  int v67; // [sp+6Ch] [bp-44h]@2
  int v68; // [sp+70h] [bp-40h]@2
  int v69; // [sp+74h] [bp-3Ch]@2
  __int64 v70; // [sp+78h] [bp-38h]@7
  int v71; // [sp+80h] [bp-30h]@7
  int v72; // [sp+88h] [bp-28h]@7

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Dimension *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 28))(a2);
  if ( v6 )
  {
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v7 = j_Dimension::getWorldGenerator(v6);
    v8 = *((_BYTE *)v4 + 18);
    v9 = *(int (__fastcall **)(int, int, char *, int *))(*(_DWORD *)v7 + 12);
    (*(void (__fastcall **)(char *, const CommandOrigin *))(*(_DWORD *)v3 + 16))(&v66, v3);
    if ( v9(v7, v8, &v66, &v67) == 1 )
    {
      j_WorldGenerator::getFeatureName(&v62, *((_BYTE *)v4 + 18));
      v10 = sub_21E91E0((void **)&v64, v63, v62);
      v11 = sub_21E82D8((const void **)v10, 0, (unsigned int)"%feature.", (_BYTE *)9);
      v65 = (char *)*v11;
      *v11 = &unk_28898CC;
      v12 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
      {
        v36 = (unsigned int *)(v64 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
        }
        else
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      sub_21E8AF4(&v61, (int *)&v65);
      j_CommandOutput::set<std::string>((int)v5, "feature", &v61);
      v13 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v61 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v58 = v67;
      v59 = v68;
      v60 = v69;
      j_CommandOutput::set<BlockPos>((int)v5, "destination", (int)&v58);
      sub_21E94B4((void **)&v57, "commands.locate.success");
      j_CommandOutputParameter::CommandOutputParameter(&v51, (int *)&v65);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v52, v67);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v53, v69);
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v54 = (char *)j_operator new(0x18u);
      v56 = v54 + 24;
      v55 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v51,
                      (int)&v54,
                      (int)v54);
      j_CommandOutput::success((int)v5, &v57, (unsigned __int64 *)&v54);
      v15 = (int)v55;
      v14 = v54;
      if ( v54 != v55 )
        do
          v26 = (int *)(*(_DWORD *)v14 - 12);
          if ( v26 != &dword_28898C0 )
          {
            v24 = (unsigned int *)(*(_DWORD *)v14 - 4);
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
              j_j_j_j__ZdlPv_9(v26);
          }
          v14 += 8;
        while ( v14 != (char *)v15 );
        v14 = v54;
      if ( v14 )
        j_operator delete(v14);
      v27 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v53 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v52 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v29 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v51 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v30 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v57 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v21 = v65 - 12;
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v65 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          goto LABEL_75;
LABEL_74:
        v23 = (*v22)--;
LABEL_75:
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
        return;
    }
    else
      sub_21E94B4((void **)&v50, "commands.locate.fail.nostructurefound");
      v48 = 0LL;
      v49 = 0;
      j_CommandOutput::error(v5, &v50, (unsigned __int64 *)&v48);
      v32 = (void *)HIDWORD(v48);
      v31 = (void *)v48;
      if ( (_DWORD)v48 != HIDWORD(v48) )
          v35 = (int *)(*(_DWORD *)v31 - 12);
          if ( v35 != &dword_28898C0 )
            v33 = (unsigned int *)(*(_DWORD *)v31 - 4);
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v31 = (char *)v31 + 8;
        while ( v31 != v32 );
        v31 = (void *)v48;
      if ( v31 )
        j_operator delete(v31);
      v21 = (char *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v50 - 4);
        goto LABEL_74;
  }
  else
    sub_21E94B4((void **)&v72, "commands.locate.fail.noplayer");
    v70 = 0LL;
    v71 = 0;
    j_CommandOutput::error(v5, &v72, (unsigned __int64 *)&v70);
    v17 = (void *)HIDWORD(v70);
    v16 = (void *)v70;
    if ( (_DWORD)v70 != HIDWORD(v70) )
      do
        v20 = (int *)(*(_DWORD *)v16 - 12);
        if ( v20 != &dword_28898C0 )
          v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v16 = (char *)v16 + 8;
      while ( v16 != v17 );
      v16 = (void *)v70;
    if ( v16 )
      j_operator delete(v16);
    v21 = (char *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v72 - 4);
      if ( &pthread_create )
        __dmb();
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        goto LABEL_75;
      goto LABEL_74;
}


void __fastcall LocateCommand::execute(LocateCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  LocateCommand::execute(this, a2, a3);
}


int __fastcall LocateCommand::LocateCommand(Command *a1)
{
  int result; // r0@1

  result = j_Command::Command(a1);
  *(_DWORD *)result = &off_271A0FC;
  *(_BYTE *)(result + 18) = 0;
  return result;
}
