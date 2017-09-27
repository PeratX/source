

void __fastcall SetBlockCommand::execute(SetBlockCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SetBlockCommand::execute(this, a2, a3);
}


void __fastcall SetBlockCommand::execute(SetBlockCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SetBlockCommand *v3; // r5@1
  const BlockPos *v4; // r6@1
  CommandOutput *v5; // r8@1
  CommandOutput *v6; // r3@1
  int v7; // r4@1
  int v8; // r0@4
  Level *v9; // r0@6
  void *v10; // r4@7
  void *v11; // r6@7
  void *v12; // r4@9
  void *v13; // r6@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  int *v16; // r0@19
  void *v17; // r0@24
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  const void **v20; // r5@29
  char *v21; // r4@29
  int v22; // r6@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  int *v25; // r0@39
  void *v26; // r0@44
  char *v27; // r0@45
  void (__fastcall *v28)(__int16 *); // r7@53
  void (*v29)(void); // r7@54
  void *v30; // r4@54
  void *v31; // r6@54
  unsigned int *v32; // r2@56
  signed int v33; // r1@58
  int *v34; // r0@64
  unsigned int *v35; // r2@74
  signed int v36; // r1@76
  int *v37; // r0@82
  void *v38; // r4@92
  void *v39; // r6@92
  unsigned int *v40; // r2@94
  signed int v41; // r1@96
  int *v42; // r0@102
  void *v43; // r4@112
  void *v44; // r6@112
  unsigned int *v45; // r2@114
  signed int v46; // r1@116
  int *v47; // r0@122
  void *v48; // r4@135
  unsigned int *v49; // r2@140
  signed int v50; // r1@142
  unsigned int *v51; // r2@144
  signed int v52; // r1@146
  __int64 v53; // [sp+8h] [bp-9Ch]@54
  int v54; // [sp+10h] [bp-94h]@54
  int v55; // [sp+18h] [bp-8Ch]@54
  __int16 v56; // [sp+1Ch] [bp-88h]@54
  __int64 v57; // [sp+20h] [bp-84h]@112
  int v58; // [sp+28h] [bp-7Ch]@112
  int v59; // [sp+30h] [bp-74h]@112
  char v60; // [sp+34h] [bp-70h]@53
  __int16 v61; // [sp+38h] [bp-6Ch]@53
  __int16 v62; // [sp+3Ch] [bp-68h]@53
  __int64 v63; // [sp+40h] [bp-64h]@92
  int v64; // [sp+48h] [bp-5Ch]@92
  int v65; // [sp+50h] [bp-54h]@92
  __int64 v66; // [sp+54h] [bp-50h]@7
  int v67; // [sp+5Ch] [bp-48h]@7
  int v68; // [sp+64h] [bp-40h]@7
  char *v69; // [sp+68h] [bp-3Ch]@29
  int v70; // [sp+6Ch] [bp-38h]@29
  char *v71; // [sp+74h] [bp-30h]@29
  char *v72; // [sp+78h] [bp-2Ch]@29
  char *v73; // [sp+7Ch] [bp-28h]@29
  int v74; // [sp+84h] [bp-20h]@29
  int v75; // [sp+88h] [bp-1Ch]@2
  __int64 v76; // [sp+8Ch] [bp-18h]@9
  int v77; // [sp+94h] [bp-10h]@9
  int v78; // [sp+9Ch] [bp-8h]@9
  int v79; // [sp+A0h] [bp-4h]@1
  int v80; // [sp+A4h] [bp+0h]@1
  char v81; // [sp+B0h] [bp+Ch]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  j_CommandPosition::getPosition((CommandPosition *)&v80, (SetBlockCommand *)((char *)this + 20), (int)a2);
  j_BlockPos::BlockPos((int)&v81, (int)&v80);
  j_CommandOrigin::getAreaAt((CommandOrigin *)&v79, v4, (const BlockPos *)&v81);
  v7 = v79;
  if ( !v79 )
  {
    sub_21E94B4((void **)&v78, "commands.setblock.outOfWorld");
    v76 = 0LL;
    v77 = 0;
    j_CommandOutput::error(v5, &v78, (unsigned __int64 *)&v76);
    v13 = (void *)HIDWORD(v76);
    v12 = (void *)v76;
    if ( (_DWORD)v76 != HIDWORD(v76) )
    {
      do
      {
        v16 = (int *)(*(_DWORD *)v12 - 12);
        if ( v16 != &dword_28898C0 )
        {
          v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
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
            j_j_j_j__ZdlPv_9(v16);
        }
        v12 = (char *)v12 + 8;
      }
      while ( v12 != v13 );
      v12 = (void *)v76;
    }
    if ( v12 )
      j_operator delete(v12);
    v17 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) == &dword_28898C0 )
      goto LABEL_135;
    v18 = (unsigned int *)(v78 - 4);
    if ( !&pthread_create )
      goto LABEL_132;
    __dmb();
    do
      v19 = __ldrex(v18);
    while ( __strex(v19 - 1, v18) );
    goto LABEL_133;
  }
  LOWORD(v75) = 0;
  LOWORD(v75) = *(_BYTE *)(*((_DWORD *)v3 + 9) + 4);
  if ( !j_Command::validData(*((Command **)v3 + 10), (unsigned int)&v75 | 1, (unsigned __int8 *)v5, v6) )
    goto LABEL_135;
  if ( !(*(int (**)(void))(**((_DWORD **)v3 + 9) + 108))() )
    sub_21E94B4((void **)&v74, "commands.give.item.invalid");
    v20 = (const void **)j_Block::getDescriptionId(*((Block **)v3 + 9));
    v69 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v69, *((_DWORD *)*v20 - 3) + 1);
    sub_21E7408((const void **)&v69, "%", 1u);
    sub_21E72F0((const void **)&v69, v20);
    j_CommandOutputParameter::CommandOutputParameter(&v70, (int *)&v69);
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v71 = (char *)j_operator new(8u);
    v73 = v71 + 8;
    v72 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v70,
                    (int)&v71,
                    (int)v71);
    j_CommandOutput::error(v5, &v74, (unsigned __int64 *)&v71);
    v22 = (int)v72;
    v21 = v71;
    if ( v71 != v72 )
        v25 = (int *)(*(_DWORD *)v21 - 12);
        if ( v25 != &dword_28898C0 )
          v23 = (unsigned int *)(*(_DWORD *)v21 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v21 += 8;
      while ( v21 != (char *)v22 );
      v21 = v71;
    if ( v21 )
      j_operator delete(v21);
    v26 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v70 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      else
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = v69 - 12;
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v69 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v17 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) == &dword_28898C0 )
    v18 = (unsigned int *)(v74 - 4);
  v8 = *((_DWORD *)v3 + 11);
  if ( v8 == 2 )
    if ( j_BlockSource::isEmptyBlock((BlockSource *)(v7 + 8), (const BlockPos *)&v81) )
      goto LABEL_52;
    sub_21E94B4((void **)&v65, "commands.setblock.noChange");
    v63 = 0LL;
    v64 = 0;
    j_CommandOutput::error(v5, &v65, (unsigned __int64 *)&v63);
    v39 = (void *)HIDWORD(v63);
    v38 = (void *)v63;
    if ( (_DWORD)v63 != HIDWORD(v63) )
        v42 = (int *)(*(_DWORD *)v38 - 12);
        if ( v42 != &dword_28898C0 )
          v40 = (unsigned int *)(*(_DWORD *)v38 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        v38 = (char *)v38 + 8;
      while ( v38 != v39 );
      v38 = (void *)v63;
    if ( v38 )
      j_operator delete(v38);
    v17 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) == &dword_28898C0 )
    v18 = (unsigned int *)(v65 - 4);
LABEL_133:
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v8 != 1
    || (v9 = (Level *)j_BlockSource::getLevel((BlockSource *)(v7 + 8)),
        j_Level::destroyBlock(v9, (BlockSource *)(v7 + 8), (const BlockPos *)&v81, 1),
        (unsigned __int8)v75 != *(_BYTE *)(Block::mAir + 4)) )
LABEL_52:
    if ( (*(int (**)(void))(**((_DWORD **)v3 + 9) + 112))() != 1 )
    v28 = *(void (__fastcall **)(__int16 *))(**((_DWORD **)v3 + 9) + 116);
    v61 = v75;
    v28(&v62);
    LOWORD(v75) = v62;
    v60 = v62;
    if ( j_BlockSource::setBlockAndData(v7 + 8, (BlockPos *)&v81, &v60, SHIBYTE(v62), 3, 0) )
      v29 = *(void (**)(void))(**((_DWORD **)v3 + 9) + 120);
      v56 = v75;
      v29();
      sub_21E94B4((void **)&v55, "commands.setblock.success");
      v53 = 0LL;
      v54 = 0;
      j_CommandOutput::success((int)v5, &v55, (unsigned __int64 *)&v53);
      v31 = (void *)HIDWORD(v53);
      v30 = (void *)v53;
      if ( (_DWORD)v53 != HIDWORD(v53) )
          v37 = (int *)(*(_DWORD *)v30 - 12);
          if ( v37 != &dword_28898C0 )
            v35 = (unsigned int *)(*(_DWORD *)v30 - 4);
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
          v30 = (char *)v30 + 8;
        while ( v30 != v31 );
        v30 = (void *)v53;
      if ( v30 )
        j_operator delete(v30);
      v17 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) == &dword_28898C0 )
        goto LABEL_135;
      v18 = (unsigned int *)(v55 - 4);
      if ( !&pthread_create )
        goto LABEL_132;
      __dmb();
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      sub_21E94B4((void **)&v59, "commands.setblock.noChange");
      v57 = 0LL;
      v58 = 0;
      j_CommandOutput::error(v5, &v59, (unsigned __int64 *)&v57);
      v44 = (void *)HIDWORD(v57);
      v43 = (void *)v57;
      if ( (_DWORD)v57 != HIDWORD(v57) )
          v47 = (int *)(*(_DWORD *)v43 - 12);
          if ( v47 != &dword_28898C0 )
            v45 = (unsigned int *)(*(_DWORD *)v43 - 4);
                v46 = __ldrex(v45);
              while ( __strex(v46 - 1, v45) );
              v46 = (*v45)--;
            if ( v46 <= 0 )
              j_j_j_j__ZdlPv_9(v47);
          v43 = (char *)v43 + 8;
        while ( v43 != v44 );
        v43 = (void *)v57;
      if ( v43 )
        j_operator delete(v43);
      v17 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) == &dword_28898C0 )
      v18 = (unsigned int *)(v59 - 4);
  sub_21E94B4((void **)&v68, "commands.setblock.success");
  v66 = 0LL;
  v67 = 0;
  j_CommandOutput::success((int)v5, &v68, (unsigned __int64 *)&v66);
  v11 = (void *)HIDWORD(v66);
  v10 = (void *)v66;
  if ( (_DWORD)v66 != HIDWORD(v66) )
      v34 = (int *)(*(_DWORD *)v10 - 12);
      if ( v34 != &dword_28898C0 )
        v32 = (unsigned int *)(*(_DWORD *)v10 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v10 = (char *)v10 + 8;
    while ( v10 != v11 );
    v10 = (void *)v66;
  if ( v10 )
    j_operator delete(v10);
  v17 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v68 - 4);
    if ( &pthread_create )
      goto LABEL_133;
LABEL_132:
    v19 = (*v18)--;
LABEL_135:
  v48 = (void *)v79;
  if ( v79 )
    j_BlockSource::~BlockSource((BlockSource *)(v79 + 8));
    if ( *(_DWORD *)v48 )
      (*(void (**)(void))(**(_DWORD **)v48 + 4))();
    j_operator delete(v48);
}


void __fastcall SetBlockCommand::~SetBlockCommand(SetBlockCommand *this)
{
  SetBlockCommand::~SetBlockCommand(this);
}


void __fastcall SetBlockCommand::~SetBlockCommand(SetBlockCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall SetBlockCommand::setup(SetBlockCommand *this, CommandRegistry *a2)
{
  SetBlockCommand::setup(this, a2);
}


void __fastcall SetBlockCommand::setup(SetBlockCommand *this, CommandRegistry *a2)
{
  SetBlockCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@19
  __int64 v12; // r2@20
  void *v13; // r0@20
  char v14; // r0@21
  char v15; // r0@24
  char v16; // r0@27
  char v17; // r0@30
  int v18; // r0@33
  void *v19; // r0@33
  void *v20; // r0@34
  void *v21; // r0@35
  void *v22; // r0@36
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  unsigned int *v25; // r2@42
  signed int v26; // r1@44
  unsigned int *v27; // r2@46
  signed int v28; // r1@48
  unsigned int *v29; // r2@50
  signed int v30; // r1@52
  int v31; // r2@54
  signed int v32; // r1@56
  unsigned int *v33; // r2@58
  signed int v34; // r1@60
  unsigned int *v35; // r2@62
  signed int v36; // r1@64
  unsigned int *v37; // r2@66
  signed int v38; // r1@68
  unsigned int *v39; // r2@70
  signed int v40; // r1@72
  char v41; // [sp+18h] [bp-118h]@33
  int v42; // [sp+24h] [bp-10Ch]@33
  char v43; // [sp+40h] [bp-F0h]@30
  int v44; // [sp+4Ch] [bp-E4h]@34
  char v45; // [sp+68h] [bp-C8h]@27
  int v46; // [sp+74h] [bp-BCh]@35
  char v47; // [sp+90h] [bp-A0h]@24
  int v48; // [sp+9Ch] [bp-94h]@36
  __int64 v49; // [sp+B8h] [bp-78h]@21
  int v50; // [sp+C4h] [bp-6Ch]@20
  int v51; // [sp+C8h] [bp-68h]@1
  int v52; // [sp+CCh] [bp-64h]@1
  int v53; // [sp+D0h] [bp-60h]@1
  int v54; // [sp+D4h] [bp-5Ch]@1
  int v55; // [sp+D8h] [bp-58h]@1
  int v56; // [sp+DCh] [bp-54h]@1
  void *v57; // [sp+E0h] [bp-50h]@1
  int v58; // [sp+E4h] [bp-4Ch]@1
  char *v59; // [sp+E8h] [bp-48h]@1
  int v60; // [sp+F0h] [bp-40h]@1
  __int16 v61; // [sp+100h] [bp-30h]@24
  unsigned __int16 v62; // [sp+104h] [bp-2Ch]@27
  __int16 v63; // [sp+108h] [bp-28h]@30
  __int16 v64; // [sp+10Ch] [bp-24h]@33

  v2 = this;
  sub_21E94B4((void **)&v60, "SetBlockMode");
  sub_21E94B4((void **)&v51, "replace");
  v52 = 0;
  sub_21E94B4((void **)&v53, "destroy");
  v54 = 1;
  sub_21E94B4((void **)&v55, "keep");
  v56 = 2;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v3 = j_operator new(0x18u);
  v57 = v3;
  v59 = (char *)v3 + 24;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,SetBlockCommand::SetBlockMode> const*,std::pair<std::string,SetBlockCommand::SetBlockMode>*>(
         (int)&v51,
         (int)&v57,
         (int)v3);
  v58 = v4;
  j_CommandRegistry::addEnumValues<SetBlockCommand::SetBlockMode>((int)v2, (int)&v60, (unsigned __int64 *)&v57);
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
    v3 = v57;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v53 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v51 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v60 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v50, "setblock");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v50, "commands.setblock.description", 1, 0, 0);
  v13 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v31 = v50 - 4;
        v32 = __ldrex((unsigned int *)v12);
        HIDWORD(v12) = v32 - 1;
      while ( __strex(v32 - 1, (unsigned int *)v12) );
      v32 = *(_DWORD *)v12;
      HIDWORD(v12) = *(_DWORD *)v12 - 1;
      *(_DWORD *)v12 = HIDWORD(v12);
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  LODWORD(v12) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v49, 1, v12);
  v14 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  __dmb();
  if ( !(v14 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v61 = type_id<CommandRegistry,CommandPosition>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v47,
    &v61,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "position",
    0,
    20,
    -1);
  v15 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
  if ( !(v15 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id) )
    type_id<CommandRegistry,Block const*>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id);
  v62 = type_id<CommandRegistry,Block const*>(void)::id[0];
    (int)&v45,
    &v62,
    (unsigned int)CommandRegistry::parse<Block const*>,
    "tileName",
    36,
  v16 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v16 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v63 = type_id<CommandRegistry,int>(void)::id;
    (int)&v43,
    &v63,
    (unsigned int)CommandRegistry::parse<int>,
    "tileData",
    40,
    1,
  v17 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id;
  if ( !(v17 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id) )
    type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id);
  v64 = type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id;
  v18 = j_CommandParameterData::CommandParameterData(
          (int)&v41,
          &v64,
          (unsigned int)CommandRegistry::parse<SetBlockCommand::SetBlockMode>,
          "oldBlockHandling",
          0,
          44,
          1,
          -1);
  j_CommandRegistry::registerOverload<SetBlockCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "setblock",
    v49,
    v18);
  v19 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v42 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v44 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v46 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v48 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


Command *__fastcall SetBlockCommand::SetBlockCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A188;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 20));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  return v1;
}
