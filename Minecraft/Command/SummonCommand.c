

void __fastcall SummonCommand::setup(SummonCommand *this, CommandRegistry *a2)
{
  SummonCommand *v2; // r8@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  int v7; // r0@8
  void *v8; // r0@8
  void *v9; // r0@9
  int v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  char v16; // [sp+18h] [bp-80h]@8
  int v17; // [sp+24h] [bp-74h]@8
  char v18; // [sp+40h] [bp-58h]@5
  int v19; // [sp+4Ch] [bp-4Ch]@9
  __int64 v20; // [sp+68h] [bp-30h]@2
  int v21; // [sp+74h] [bp-24h]@1
  __int16 v22; // [sp+78h] [bp-20h]@5
  __int16 v23; // [sp+7Ch] [bp-1Ch]@8

  v2 = this;
  sub_21E94B4((void **)&v21, "summon");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v21, "commands.summon.description", 1, 0, 0);
  v4 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v10 = v21 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v11 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v11 - 1;
      }
      while ( __strex(v11 - 1, (unsigned int *)v3) );
    }
    else
      v11 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v20, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EntityType>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EntityType>(void)::id) )
    type_id<CommandRegistry,EntityType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EntityType>(void)::id);
  v22 = type_id<CommandRegistry,EntityType>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v18,
    &v22,
    (unsigned int)CommandRegistry::parse<EntityType>,
    "entityType",
    0,
    20,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v23 = type_id<CommandRegistry,CommandPosition>(void)::id;
  v7 = j_CommandParameterData::CommandParameterData(
         (int)&v16,
         &v23,
         (unsigned int)CommandRegistry::parse<CommandPosition>,
         "spawnPos",
         0,
         24,
         1,
         -1);
  j_CommandRegistry::registerOverload<SummonCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "summon",
    v20,
    v7);
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall SummonCommand::~SummonCommand(SummonCommand *this)
{
  SummonCommand::~SummonCommand(this);
}


Command *__fastcall SummonCommand::SummonCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A200;
  *((_DWORD *)v1 + 5) = 1;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 24));
  return v1;
}


void __fastcall SummonCommand::~SummonCommand(SummonCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall SummonCommand::setup(SummonCommand *this, CommandRegistry *a2)
{
  SummonCommand::setup(this, a2);
}


void __fastcall SummonCommand::execute(SummonCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SummonCommand *v3; // r7@1
  const BlockPos *v4; // r6@1
  CommandOutput *v5; // r8@1
  Entity *v6; // r5@2
  void *v7; // r0@3
  int v8; // r0@4
  Entity *v9; // r6@4
  __int16 v10; // r0@6
  int v11; // r0@7
  int v12; // r0@8
  int v13; // r5@8
  int v14; // r0@8
  void *v15; // r4@9
  void *v16; // r6@9
  unsigned int *v17; // r2@11
  signed int v18; // r1@13
  int *v19; // r0@19
  void *v20; // r0@24
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  void *v23; // r4@29
  void *v24; // r6@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  int *v27; // r0@39
  void *v28; // r4@49
  void *v29; // r6@49
  unsigned int *v30; // r2@51
  signed int v31; // r1@53
  int *v32; // r0@59
  void *v33; // r4@72
  unsigned int *v34; // r2@77
  signed int v35; // r1@79
  __int64 v36; // [sp+4h] [bp-8Ch]@49
  int v37; // [sp+Ch] [bp-84h]@49
  int v38; // [sp+14h] [bp-7Ch]@49
  __int64 v39; // [sp+18h] [bp-78h]@9
  int v40; // [sp+20h] [bp-70h]@9
  int v41; // [sp+28h] [bp-68h]@9
  int v42; // [sp+2Ch] [bp-64h]@3
  int v43; // [sp+30h] [bp-60h]@2
  signed int v44; // [sp+34h] [bp-5Ch]@2
  __int64 v45; // [sp+3Ch] [bp-54h]@29
  int v46; // [sp+44h] [bp-4Ch]@29
  int v47; // [sp+4Ch] [bp-44h]@29
  char v48; // [sp+50h] [bp-40h]@1
  int v49; // [sp+5Ch] [bp-34h]@1
  int v50; // [sp+60h] [bp-30h]@1
  int v51; // [sp+64h] [bp-2Ch]@4
  int v52; // [sp+68h] [bp-28h]@4

  v3 = this;
  v4 = a2;
  v5 = a3;
  j_CommandPosition::getPosition((CommandPosition *)&v50, (SummonCommand *)((char *)this + 24), (int)a2);
  j_CommandOutput::set<bool>((int)v5, "wasSpawned", 0);
  j_BlockPos::BlockPos((int)&v48, (int)&v50);
  j_CommandOrigin::getAreaAt((CommandOrigin *)&v49, v4, (const BlockPos *)&v48);
  if ( !v49 )
  {
    sub_21E94B4((void **)&v47, "commands.summon.failed");
    v45 = 0LL;
    v46 = 0;
    j_CommandOutput::error(v5, &v47, (unsigned __int64 *)&v45);
    v24 = (void *)HIDWORD(v45);
    v23 = (void *)v45;
    if ( (_DWORD)v45 != HIDWORD(v45) )
    {
      do
      {
        v27 = (int *)(*(_DWORD *)v23 - 12);
        if ( v27 != &dword_28898C0 )
        {
          v25 = (unsigned int *)(*(_DWORD *)v23 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
          }
          else
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        }
        v23 = (char *)v23 + 8;
      }
      while ( v23 != v24 );
      v23 = (void *)v45;
    }
    if ( v23 )
      j_operator delete(v23);
    v20 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) == &dword_28898C0 )
      goto LABEL_72;
    v21 = (unsigned int *)(v47 - 4);
    if ( !&pthread_create )
      goto LABEL_69;
    __dmb();
    do
      v22 = __ldrex(v21);
    while ( __strex(v22 - 1, v21) );
LABEL_70:
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
    goto LABEL_72;
  }
  v43 = -1;
  v44 = -1;
  v6 = j_CommandUtils::spawnEntityAt((BlockSource *)(v49 + 8), (const Vec3 *)&v50, *((_DWORD *)v3 + 5), &v43);
  if ( !v6 )
    sub_21E94B4((void **)&v38, "commands.summon.failed");
    v36 = 0LL;
    v37 = 0;
    j_CommandOutput::error(v5, &v38, (unsigned __int64 *)&v36);
    v29 = (void *)HIDWORD(v36);
    v28 = (void *)v36;
    if ( (_DWORD)v36 != HIDWORD(v36) )
        v32 = (int *)(*(_DWORD *)v28 - 12);
        if ( v32 != &dword_28898C0 )
          v30 = (unsigned int *)(*(_DWORD *)v28 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        v28 = (char *)v28 + 8;
      while ( v28 != v29 );
      v28 = (void *)v36;
    if ( v28 )
      j_operator delete(v28);
    v20 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) == &dword_28898C0 )
    v21 = (unsigned int *)(v38 - 4);
    goto LABEL_70;
  j_CommandOutput::set<bool>((int)v5, "wasSpawned", 1);
  j_EntityTypeToString((void **)&v42, *((_DWORD *)v3 + 5), 0);
  j_CommandOutput::set<std::string>((int)v5, "entityType", &v42);
  v7 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v42 - 4);
    if ( &pthread_create )
      __dmb();
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
    else
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  j_CommandOutput::set<Vec3>((int)v5, "spawnPos", v50, v51, v52);
  v8 = (*(int (__fastcall **)(const BlockPos *))(*(_DWORD *)v4 + 32))(v4);
  v9 = (Entity *)v8;
  if ( v8 )
    if ( j_Entity::hasType(v8, 319) == 1 )
      v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6);
      if ( j_EntityClassTree::isMob(v10)
        || (v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 488))(v6), j_EntityClassTree::isMobLegacy(v11) == 1) )
        j_Mob::setSpawnMethod((int)v6, 2);
        v12 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6);
        v13 = j_EntityClassTree::getEntityTypeIdLegacy(v12);
        v14 = j_Entity::getLevel(v9);
        j_Level::broadcastEntityEvent(v14, (int)v9, 67, (v13 << 16) | 2);
  sub_21E94B4((void **)&v41, "commands.summon.success");
  v39 = 0LL;
  v40 = 0;
  j_CommandOutput::success((int)v5, &v41, (unsigned __int64 *)&v39);
  v16 = (void *)HIDWORD(v39);
  v15 = (void *)v39;
  if ( (_DWORD)v39 != HIDWORD(v39) )
      v19 = (int *)(*(_DWORD *)v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*(_DWORD *)v15 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        else
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 = (char *)v15 + 8;
    while ( v15 != v16 );
    v15 = (void *)v39;
  if ( v15 )
    j_operator delete(v15);
  v20 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v41 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      goto LABEL_70;
LABEL_69:
    v22 = (*v21)--;
LABEL_72:
  v33 = (void *)v49;
  if ( v49 )
    j_BlockSource::~BlockSource((BlockSource *)(v49 + 8));
    if ( *(_DWORD *)v33 )
      (*(void (**)(void))(**(_DWORD **)v33 + 4))();
    j_operator delete(v33);
}


void __fastcall SummonCommand::execute(SummonCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SummonCommand::execute(this, a2, a3);
}
