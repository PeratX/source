

int __fastcall KillCommand::~KillCommand(KillCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A0C0;
  j_CommandSelectorBase::~CommandSelectorBase((KillCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall KillCommand::~KillCommand(KillCommand *this)
{
  KillCommand::~KillCommand(this);
}


void __fastcall KillCommand::setup(KillCommand *this, CommandRegistry *a2)
{
  KillCommand *v2; // r4@1
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
  sub_21E94B4((void **)&v15, "kill");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.kill.description", 1, 0, 0);
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
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Entity>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id);
  v16 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  v6 = j_CommandParameterData::CommandParameterData(
         (int)&v12,
         &v16,
         (unsigned int)CommandRegistry::parse<CommandSelector<Entity>>,
         "target",
         0,
         20,
         1,
         -1);
  j_CommandRegistry::registerOverload<KillCommand,CommandParameterData>((int)v2, "kill", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall KillCommand::execute(KillCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  KillCommand::execute(this, a2, a3);
}


void __fastcall KillCommand::execute(KillCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r10@1
  Entity *v4; // r11@3
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // r5@14
  unsigned int *v9; // r1@15
  unsigned int v10; // r0@17
  unsigned int *v11; // r6@21
  unsigned int v12; // r0@23
  int v13; // r5@28
  unsigned int *v14; // r1@29
  unsigned int v15; // r0@31
  unsigned int *v16; // r6@35
  unsigned int v17; // r0@37
  char *v18; // r4@42
  int v19; // r6@42
  unsigned int *v20; // r2@44
  signed int v21; // r1@46
  int *v22; // r0@52
  void *v23; // r0@57
  void *v24; // r0@58
  int v25; // r4@59
  unsigned int *v26; // r1@60
  unsigned int v27; // r0@62
  unsigned int *v28; // r5@66
  unsigned int v29; // r0@68
  unsigned int *v30; // r2@74
  signed int v31; // r1@76
  unsigned int *v32; // r2@78
  signed int v33; // r1@80
  int v34; // [sp+Ch] [bp-94h]@42
  char *v35; // [sp+14h] [bp-8Ch]@42
  char *v36; // [sp+18h] [bp-88h]@42
  char *v37; // [sp+1Ch] [bp-84h]@42
  int v38; // [sp+24h] [bp-7Ch]@42
  int v39; // [sp+2Ch] [bp-74h]@3
  char v40; // [sp+30h] [bp-70h]@3
  char v41; // [sp+58h] [bp-48h]@2
  int v42; // [sp+5Ch] [bp-44h]@14
  char v43; // [sp+64h] [bp-3Ch]@2
  int v44; // [sp+68h] [bp-38h]@28
  int *v45; // [sp+70h] [bp-30h]@1
  int v46; // [sp+74h] [bp-2Ch]@59

  v3 = a3;
  j_CommandSelector<Entity>::results((int)&v45, (KillCommand *)((char *)this + 20), a2);
  if ( j_Command::checkHasTargets<Entity>((__int64 **)&v45, v3) )
  {
    j_CommandSelectorResults<Entity>::begin((int)&v43, &v45);
    j_CommandSelectorResults<Entity>::end((int)&v41, (int)&v45);
    while ( j_SelectorIterator<Entity>::operator!=((int)&v43, (int)&v41) )
    {
      v4 = (Entity *)j_SelectorIterator<Entity>::operator*((int)&v43);
      j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v40, v4, 13);
      j_Entity::hurt(v4, (const EntityDamageSource *)&v40, 0x7FFF, 1, 0);
      sub_21E94B4((void **)&v39, "targetname");
      j_CommandOutput::addToResultList((int)v3, (const char **)&v39, (int)v4);
      v5 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
      }
      j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v40);
      j_SelectorIterator<Entity>::operator++((int)&v43);
    }
    v8 = v42;
    if ( v42 )
      v9 = (unsigned int *)(v42 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    v13 = v44;
    if ( v44 )
      v14 = (unsigned int *)(v44 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v16 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    sub_21E94B4((void **)&v38, "commands.kill.successful");
    j_CommandOutputParameter::CommandOutputParameter((int)&v34, &v45);
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v35 = (char *)j_operator new(8u);
    v37 = v35 + 8;
    v36 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v34,
                    (int)&v35,
                    (int)v35);
    j_CommandOutput::success((int)v3, &v38, (unsigned __int64 *)&v35);
    v19 = (int)v36;
    v18 = v35;
    if ( v35 != v36 )
      do
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 += 8;
      while ( v18 != (char *)v19 );
      v18 = v35;
    if ( v18 )
      j_operator delete(v18);
    v23 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v34 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v38 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  }
  v25 = v46;
  if ( v46 )
    v26 = (unsigned int *)(v46 + 4);
    if ( &pthread_create )
      __dmb();
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    else
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
}


void __fastcall KillCommand::~KillCommand(KillCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A0C0;
  j_CommandSelectorBase::~CommandSelectorBase((KillCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall KillCommand::setup(KillCommand *this, CommandRegistry *a2)
{
  KillCommand::setup(this, a2);
}
