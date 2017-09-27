

int __fastcall CommandRegistry::addRule(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  __int64 v5; // kr00_8@1
  int result; // r0@4

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
      (__int64 *)a1,
      a2,
      a3,
      a4);
  }
  else
    __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
      a1,
      (_DWORD *)v5,
    *(_DWORD *)(v4 + 4) += 32;
  result = 0;
  *(_BYTE *)(v4 + 360) = 0;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<TickingAreaCommand::Mode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id);
  v25 = type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TickingAreaCommand::Mode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


Command *__fastcall CommandRegistry::allocateCommand<PlaySoundCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  Command *result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x98u);
  result = j_PlaySoundCommand::PlaySoundCommand(v2);
  *v1 = v2;
  return result;
}


signed int __fastcall CommandRegistry::allocateCommand<TitleCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  signed int result; // r0@1
  int v4; // r3@1

  v1 = a1;
  v2 = j_operator new(0x90u);
  j_MessagingCommand::MessagingCommand((MessagingCommand *)v2, 0, 1);
  *(_DWORD *)v2 = &off_271A2A0;
  *((_DWORD *)v2 + 5) = 1;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 24);
  j_CommandMessage::CommandMessage((CommandMessage *)((char *)v2 + 120));
  result = 10;
  v4 = (int)v2 + 132;
  *(_DWORD *)v4 = 10;
  *(_DWORD *)(v4 + 4) = 70;
  *(_DWORD *)(v4 + 8) = 20;
  *v1 = v2;
  return result;
}


int *__fastcall CommandRegistry::Parser::createCommand(int *a1, int a2, int a3)
{
  return CommandRegistry::createCommand(
           a1,
           *(_DWORD *)a2,
           *(_DWORD *)(a2 + 64),
           a3,
           *(_DWORD *)(a2 + 84),
           (void **)(a2 + 68));
}


int __fastcall CommandRegistry::addEnumValues<AgentCommands::Direction>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char *v9; // r10@11
  char **v10; // r0@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  char *v27; // [sp+28h] [bp-40h]@11
  int v28; // [sp+2Ch] [bp-3Ch]@11
  char **v29; // [sp+34h] [bp-34h]@1
  char **v30; // [sp+38h] [bp-30h]@1
  char **v31; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v29 = 0;
  v30 = 0;
  v3 = a3;
  v4 = a2;
  v31 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v29,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = (char *)*(_BYTE *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v28 = 0;
      v10 = v30;
      if ( v30 == v31 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v29,
          (int)&v26);
        v11 = v26;
      }
      else
        *v30 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = v9;
        v10[3] = 0;
        v30 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id) )
    type_id<CommandRegistry,AgentCommands::Direction>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::Direction>(void)::id);
  v25 = type_id<CommandRegistry,AgentCommands::Direction>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<AgentCommands::Direction>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v30;
  v15 = v29;
  if ( v29 != v30 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v29;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::allocateCommand<SpreadPlayersCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x8Cu);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A1D8;
  j_CommandSelector<Entity>::CommandSelector((int)v2 + 20);
  j_RelativeFloat::RelativeFloat((RelativeFloat *)((char *)v2 + 116));
  result = j_RelativeFloat::RelativeFloat((RelativeFloat *)((char *)v2 + 124));
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::addEnumValuesInternal(void *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r9@1
  int v8; // r0@1
  int v9; // r10@1
  const void **v10; // r8@1
  int v11; // r5@1
  const void *v12; // r4@2
  int v13; // r11@2
  size_t v14; // r6@2
  _DWORD *v15; // r0@4
  size_t v16; // r7@4
  size_t v17; // r2@4
  int v18; // r0@6
  _DWORD *v19; // r1@13
  unsigned int v20; // r4@13
  unsigned int v21; // r6@13
  size_t v22; // r2@13
  int v23; // r0@15
  unsigned int v24; // r3@15
  int v25; // r11@20
  int v26; // r11@21
  __int16 v27; // r6@21
  int v28; // r5@21
  __int64 v29; // kr00_8@21
  int v30; // r1@22
  int v31; // r1@22
  char *v32; // r0@26
  void *v33; // r0@27
  int v34; // r5@28
  int v35; // r0@28
  int v36; // r1@28
  int v37; // r7@29
  unsigned int v38; // r7@40
  int v39; // r4@40
  int *v40; // r0@41
  unsigned int v41; // r1@41
  int v42; // r0@44
  int v43; // r10@50
  _WORD *v44; // r0@54
  int result; // r0@55
  int *v46; // ST08_4@55
  unsigned int *v47; // r2@56
  signed int v48; // r1@58
  unsigned int *v49; // r2@60
  signed int v50; // r1@62
  int v51; // [sp+0h] [bp-60h]@0
  int v52; // [sp+4h] [bp-5Ch]@1
  void *v53; // [sp+8h] [bp-58h]@1
  char v54; // [sp+Ch] [bp-54h]@27
  int v55; // [sp+10h] [bp-50h]@55
  int v56; // [sp+14h] [bp-4Ch]@27
  char v57[4]; // [sp+18h] [bp-48h]@27
  char *v58; // [sp+1Ch] [bp-44h]@21
  __int16 v59; // [sp+20h] [bp-40h]@21
  int v60; // [sp+24h] [bp-3Ch]@21
  int v61; // [sp+28h] [bp-38h]@21
  void *ptr; // [sp+2Ch] [bp-34h]@21
  int v63; // [sp+30h] [bp-30h]@21
  int v64; // [sp+34h] [bp-2Ch]@21

  v7 = a2;
  v53 = a1;
  v8 = *(_DWORD *)(a2 + 152);
  v9 = a2 + 148;
  v10 = (const void **)a3;
  v52 = a4;
  v11 = a2 + 148;
  if ( v8 )
  {
    v12 = *(const void **)a3;
    v13 = a2 + 148;
    v14 = *(_DWORD *)(*(_DWORD *)a3 - 12);
    do
    {
      v11 = v8;
      while ( 1 )
      {
        v15 = *(_DWORD **)(v11 + 16);
        v16 = *(v15 - 3);
        v17 = *(v15 - 3);
        if ( v16 > v14 )
          v17 = v14;
        v18 = memcmp(v15, v12, v17);
        if ( !v18 )
          v18 = v16 - v14;
        if ( v18 >= 0 )
          break;
        v11 = *(_DWORD *)(v11 + 12);
        if ( !v11 )
        {
          v11 = v13;
          goto LABEL_12;
        }
      }
      v8 = *(_DWORD *)(v11 + 8);
      v13 = v11;
    }
    while ( v8 );
  }
LABEL_12:
  if ( v11 != v9 )
    v19 = *(_DWORD **)(v11 + 16);
    v20 = *((_DWORD *)*v10 - 3);
    v21 = *(v19 - 3);
    v22 = *((_DWORD *)*v10 - 3);
    if ( v20 > v21 )
      v22 = *(v19 - 3);
    v23 = memcmp(*v10, v19, v22);
    if ( !v23 )
      v23 = v20 - v21;
    if ( v23 < 0 )
      v11 = v9;
    if ( v11 != v9 )
      v25 = *(_DWORD *)(v11 + 20);
      goto LABEL_55;
  v26 = *(_DWORD *)(v7 + 108);
  v27 = *(_WORD *)a5;
  v28 = *(_DWORD *)(v7 + 112);
  sub_21E8AF4((int *)&v58, (int *)v10);
  v59 = v27;
  v60 = a6;
  v61 = a7;
  ptr = 0;
  v63 = 0;
  v64 = 0;
  v29 = *(_QWORD *)(v7 + 112);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    std::vector<CommandRegistry::Enum,std::allocator<CommandRegistry::Enum>>::_M_emplace_back_aux<CommandRegistry::Enum>(
      (unsigned __int64 *)(v7 + 108),
      (int)&v58);
  else
    *(_DWORD *)v29 = v58;
    v58 = (char *)&unk_28898CC;
    *(_WORD *)(v29 + 4) = v27;
    *(_QWORD *)(v29 + 8) = *(_QWORD *)&v60;
    *(_DWORD *)(v29 + 16) = 0;
    *(_DWORD *)(v29 + 20) = 0;
    *(_DWORD *)(v29 + 24) = 0;
    *(_DWORD *)(v29 + 16) = ptr;
    ptr = 0;
    v30 = *(_DWORD *)(v29 + 20);
    *(_DWORD *)(v29 + 20) = v63;
    v63 = v30;
    v31 = *(_DWORD *)(v29 + 24);
    *(_DWORD *)(v29 + 24) = v64;
    v64 = v31;
    *(_DWORD *)(v7 + 112) += 28;
  v25 = -1227133513 * ((v28 - v26) >> 2);
  if ( ptr )
    operator delete(ptr);
  v32 = v58 - 12;
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v58 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
    else
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E8AF4(&v56, (int *)v10);
  *(_DWORD *)v57 = v25;
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_insert_unique<std::pair<std::string,unsigned int>>(
    (int *)&v54,
    v7 + 144,
    (const void **)&v56);
  v33 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v56 - 4);
        v50 = __ldrex(v49);
        v24 = v50 - 1;
      while ( __strex(v50 - 1, v49) );
      v50 = *v49;
      v24 = *v49 - 1;
      *v49 = v24;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = v7 + 232;
  v35 = *(_DWORD *)(v7 + 236);
  v36 = v7 + 232;
  if ( v35 )
    v37 = *(_DWORD *)(v7 + 236);
    v24 = v7 + 232;
      v36 = v37;
      while ( *(_WORD *)(v36 + 16) < (unsigned int)*(_WORD *)a5 )
        v36 = *(_DWORD *)(v36 + 12);
        if ( !v36 )
          v36 = v24;
          goto LABEL_35;
      v37 = *(_DWORD *)(v36 + 8);
      v24 = v36;
    while ( v37 );
LABEL_35:
  if ( v36 != v34 )
    v24 = *(_WORD *)a5;
    if ( v24 < *(_WORD *)(v36 + 16) )
      v36 = v7 + 232;
    if ( v36 != v34 )
      *(_DWORD *)std::map<typeid_t<CommandRegistry>,int,std::less<typeid_t<CommandRegistry>>,std::allocator<std::pair<typeid_t<CommandRegistry> const,int>>>::operator[](
                   v7 + 228,
                   (_WORD *)a5) = -1;
  v38 = *(_WORD *)a5;
  v39 = v7 + 232;
      v39 = v35;
      v40 = (int *)(v35 + 12);
      v41 = *(_WORD *)(v39 + 16);
      if ( v38 < v41 )
        v40 = (int *)(v39 + 8);
      v35 = *v40;
    while ( v35 );
    v42 = v39;
    if ( v38 >= v41 )
      goto LABEL_47;
  if ( v39 != *(_DWORD *)(v7 + 240) )
    v42 = sub_21D4858(v39);
LABEL_47:
    if ( *(_WORD *)(v42 + 16) >= v38 )
  if ( v39 )
    if ( v34 == v39 )
      v43 = 1;
      v43 = 0;
      if ( v38 < *(_WORD *)(v39 + 16) )
        v43 = 1;
    v44 = operator new(0x18u);
    v44[8] = v38;
    *((_DWORD *)v44 + 5) = v25;
    sub_21D4928(v43, (int)v44, v39, v7 + 232);
    ++*(_DWORD *)(v7 + 248);
LABEL_55:
  CommandRegistry::addEnumValuesToExisting(v7, v25, v52, v24, v51, v52, v53, *(int *)&v54, v55, v56, v57[0]);
  result = v25 | 0x300000;
  *v46 = v25 | 0x300000;
  return result;
}


void __fastcall CommandRegistry::first(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r7@1
  int v4; // r9@1
  int v5; // r5@1
  _DWORD *v6; // r8@1
  int v7; // r6@2
  int v8; // r2@3
  int v9; // r0@3
  int v10; // r3@4
  int v11; // r10@10
  int *v12; // r6@14
  int *v13; // r11@14
  int v14; // r0@16
  _DWORD *v15; // r1@17
  _DWORD *v16; // r5@17
  char v17; // r3@18
  char v18; // r4@19
  int v19; // r0@29
  int v20; // r1@31
  int v21; // r2@32
  bool v22; // zf@33
  int *v23; // r1@33
  int v24; // r3@36
  bool v25; // zf@36
  int v26; // r1@41
  signed int v27; // r0@53
  __int64 v28; // kr20_8@57
  int v29; // [sp+0h] [bp-38h]@1
  int v30; // [sp+4h] [bp-34h]@2
  _DWORD *v31; // [sp+8h] [bp-30h]@1
  int v32; // [sp+Ch] [bp-2Ch]@15
  int v33; // [sp+10h] [bp-28h]@57

  v3 = a2;
  v4 = a1;
  v5 = 0;
  v29 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = (_DWORD *)*a3;
  v31 = (_DWORD *)(*a3 >> 32);
  if ( v6 != v31 )
  {
    v7 = a2 + 16;
    v30 = a2 + 16;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v3 + 20);
      v9 = v7;
      if ( v8 )
      {
        v10 = v7;
        do
        {
          v9 = v8;
          while ( *(_DWORD *)(v9 + 16) < *v6 )
          {
            v9 = *(_DWORD *)(v9 + 12);
            if ( !v9 )
            {
              v9 = v10;
              goto LABEL_10;
            }
          }
          v8 = *(_DWORD *)(v9 + 8);
          v10 = v9;
        }
        while ( v8 );
      }
LABEL_10:
      v11 = v7;
      if ( v9 != v7 )
        if ( *v6 < *(_DWORD *)(v9 + 16) )
          v9 = v7;
        v11 = v9;
      v13 = (int *)(*(_QWORD *)(v11 + 20) >> 32);
      v12 = (int *)*(_QWORD *)(v11 + 20);
      if ( v12 == v13 )
        v19 = *(_QWORD *)(v11 + 20);
      else
        v32 = v5;
          v14 = *v12;
          if ( *v12 != 0x100000 )
            v15 = (_DWORD *)(*(_QWORD *)v4 >> 32);
            v16 = (_DWORD *)*(_QWORD *)v4;
            if ( v16 == v15 )
              goto LABEL_66;
            v17 = 0;
            do
              v18 = 0;
              if ( *v16 == v14 )
                v18 = 1;
              v17 |= v18;
                break;
              v22 = v15 - 1 == v16;
              ++v16;
            while ( !v22 );
            if ( !(v17 & 1) )
LABEL_66:
              if ( v15 == *(_DWORD **)(v4 + 8) )
              {
                std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
                  (unsigned __int64 *)v4,
                  v12);
              }
              else
                *v15 = v14;
                *(_DWORD *)(v4 + 4) = v15 + 1;
          ++v12;
        while ( v12 != v13 );
        v12 = (int *)(*(_QWORD *)(v11 + 20) >> 32);
        v3 = v29;
        v13 = (int *)(*(_QWORD *)(v11 + 20) >> 32);
        v5 = v32;
      v20 = ((signed int)v13 - v19) >> 4;
      if ( v20 >= 1 )
        v21 = v20 + 1;
          v22 = *(_DWORD *)v19 == 0x100000;
          v23 = (int *)v19;
          if ( *(_DWORD *)v19 != 0x100000 )
            v23 = (int *)(v19 + 4);
            v22 = *(_DWORD *)(v19 + 4) == 0x100000;
          if ( v22 )
            goto LABEL_53;
          v23 = (int *)(v19 + 8);
          v24 = *(_DWORD *)(v19 + 8);
          v25 = v24 == 0x100000;
          if ( v24 != 0x100000 )
            v23 = (int *)(v19 + 12);
            v25 = *(_DWORD *)(v19 + 12) == 0x100000;
          if ( v25 )
          --v21;
          v19 += 16;
        while ( v21 > 1 );
      if ( 1 == ((signed int)v13 - v19) >> 2 )
        v23 = (int *)v19;
        goto LABEL_49;
      v26 = ((signed int)v13 - v19) >> 2;
      if ( v26 == 2 )
        break;
      if ( v26 != 3 )
        v23 = v13;
        goto LABEL_53;
      v23 = (int *)v19;
      if ( *(_DWORD *)v19 != 0x100000 )
        v23 = (int *)(v19 + 4);
        goto LABEL_47;
LABEL_53:
      v27 = 0;
      if ( v23 == v12 )
        v27 = 1;
      v5 |= v27;
        if ( !(v5 & 1) )
          if ( *(_DWORD *)v4 )
            operator delete(*(void **)v4);
        return;
      v7 = v30;
      ++v6;
      if ( v6 == v31 )
        v28 = *(_QWORD *)(v4 + 4);
        v33 = 0x100000;
        if ( (_DWORD)v28 == HIDWORD(v28) )
          goto LABEL_60;
        *(_DWORD *)v28 = 0x100000;
        *(_DWORD *)(v4 + 4) = v28 + 4;
    }
    v23 = (int *)v19;
LABEL_47:
    if ( *v23 != 0x100000 )
      ++v23;
LABEL_49:
      if ( *v23 != 0x100000 )
      goto LABEL_53;
    goto LABEL_53;
  }
  v33 = 0x100000;
LABEL_60:
  std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol>(
    (unsigned __int64 *)v4,
    &v33);
}


signed int __fastcall CommandRegistry::parseEnum<CommandItem>(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r1@1
  int v7; // r0@1
  int v8; // r2@1
  __int64 v9; // kr00_8@1
  unsigned int v10; // r1@1
  int v11; // r2@1
  int v12; // r0@4
  signed int v13; // r3@2
  int v14; // r1@5
  signed int result; // r0@5
  int v16; // [sp+0h] [bp-18h]@5
  int v17; // [sp+4h] [bp-14h]@5

  v5 = a2;
  v6 = *(_DWORD *)a3;
  v9 = *(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16);
  v8 = *(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16) >> 32;
  v7 = v9;
  v10 = *(_DWORD *)(v6 + 20) & 0xFC0FFFFF;
  v11 = (v8 - (signed int)v9) >> 4;
  while ( 1 )
  {
    v13 = v11;
    if ( v11 < 1 )
      break;
    v11 >>= 1;
    if ( *(_DWORD *)(v7 + 16 * (v13 >> 1)) < v10 )
    {
      v12 = v7 + 16 * v11;
      v11 = v13 - 1 - v11;
      v7 = v12 + 16;
    }
  }
  CommandItem::CommandItem(&v16, v10, *(_QWORD *)(v7 + 8));
  v14 = v17;
  *(_DWORD *)v5 = v16;
  result = 1;
  *(_DWORD *)v5 = a5;
  *(_DWORD *)(v5 + 4) = v14;
  return result;
}


int __fastcall CommandRegistry::allocateCommand<HelpCommand>(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  void *v2; // r5@1
  __int64 v3; // r0@1

  v1 = a1;
  v2 = operator new(0x1Cu);
  Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_26EB304;
  LODWORD(v3) = &unk_28898CC;
  HIDWORD(v3) = 1;
  *(_QWORD *)((char *)v2 + 20) = v3;
  *v1 = v2;
  return v3;
}


int *__fastcall CommandRegistry::registerAlias(int a1, const void **a2, int *a3)
{
  int v3; // r10@1
  int v4; // r11@1
  int v5; // r0@1
  int *v6; // r9@1
  int v7; // r5@1
  int v8; // r4@2
  const void *v9; // r7@2
  size_t v10; // r6@2
  _DWORD *v11; // r0@4
  size_t v12; // r8@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r6@13
  unsigned int v17; // r4@13
  size_t v18; // r2@13
  int v19; // r0@15
  int v20; // r0@20
  int v21; // r6@20
  int v22; // r8@21
  const void *v23; // r7@21
  size_t v24; // r5@21
  _DWORD *v25; // r0@23
  size_t v26; // r4@23
  size_t v27; // r2@23
  int v28; // r0@25
  _DWORD *v29; // r1@32
  unsigned int v30; // r5@32
  unsigned int v31; // r4@32
  size_t v32; // r2@32
  int v33; // r0@34
  int *v34; // r0@39
  void *v35; // r0@39
  int v36; // r1@39
  unsigned int v37; // r2@39
  int v38; // r3@39
  unsigned int v39; // r2@39
  int v40; // r3@39
  int v41; // r7@39
  void *v42; // r0@44
  void *v43; // r0@46
  int v44; // r7@46
  void *v45; // r0@51
  int *v46; // r0@52
  unsigned int *v48; // r2@53
  signed int v49; // r1@55
  unsigned int *v50; // r2@61
  signed int v51; // r1@63
  const void **v52; // [sp+Ch] [bp-94h]@1
  char v53; // [sp+10h] [bp-90h]@49
  unsigned __int16 v54; // [sp+14h] [bp-8Ch]@49
  unsigned int v55; // [sp+18h] [bp-88h]@46
  int v56; // [sp+1Ch] [bp-84h]@46
  __int64 v57; // [sp+20h] [bp-80h]@46
  void *v58; // [sp+28h] [bp-78h]@46
  char *v59; // [sp+2Ch] [bp-74h]@46
  char *v60; // [sp+30h] [bp-70h]@46
  int v61; // [sp+38h] [bp-68h]@46
  unsigned __int16 v62; // [sp+3Ch] [bp-64h]@42
  unsigned int v63; // [sp+40h] [bp-60h]@39
  int v64; // [sp+44h] [bp-5Ch]@39
  int v65; // [sp+48h] [bp-58h]@39
  int v66; // [sp+4Ch] [bp-54h]@39
  unsigned int v67; // [sp+50h] [bp-50h]@39
  int v68; // [sp+54h] [bp-4Ch]@39
  int v69; // [sp+58h] [bp-48h]@39
  int v70; // [sp+5Ch] [bp-44h]@39
  void *ptr; // [sp+60h] [bp-40h]@39
  int v72; // [sp+64h] [bp-3Ch]@39
  char *v73; // [sp+68h] [bp-38h]@39
  int v74; // [sp+6Ch] [bp-34h]@39
  int v75; // [sp+70h] [bp-30h]@42
  int v76; // [sp+74h] [bp-2Ch]@39

  v3 = a1;
  v4 = a1 + 208;
  v5 = *(_DWORD *)(a1 + 212);
  v6 = a3;
  v7 = v4;
  v52 = a2;
  if ( v5 )
  {
    v8 = v4;
    v9 = *a2;
    v10 = *((_DWORD *)*a2 - 3);
    do
    {
      v7 = v5;
      while ( 1 )
      {
        v11 = *(_DWORD **)(v7 + 16);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = memcmp(v11, v9, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v8;
          goto LABEL_12;
        }
      }
      v5 = *(_DWORD *)(v7 + 8);
      v8 = v7;
    }
    while ( v5 );
  }
LABEL_12:
  if ( v7 == v4 )
    goto LABEL_71;
  v15 = *(_DWORD **)(v7 + 16);
  v16 = *(v15 - 3);
  v17 = *((_DWORD *)*v52 - 3);
  v18 = *((_DWORD *)*v52 - 3);
  if ( v17 > v16 )
    v18 = *(v15 - 3);
  v19 = memcmp(*v52, v15, v18);
  if ( !v19 )
    v19 = v17 - v16;
  if ( v19 < 0 )
    v7 = v4;
LABEL_71:
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v52,
      v6);
    v20 = *(_DWORD *)(v3 + 212);
    v21 = v4;
    if ( v20 )
      v22 = v4;
      v23 = *v52;
      v24 = *((_DWORD *)*v52 - 3);
      do
        v21 = v20;
        while ( 1 )
          v25 = *(_DWORD **)(v21 + 16);
          v26 = *(v25 - 3);
          v27 = *(v25 - 3);
          if ( v26 > v24 )
            v27 = v24;
          v28 = memcmp(v25, v23, v27);
          if ( !v28 )
            v28 = v26 - v24;
          if ( v28 >= 0 )
            break;
          v21 = *(_DWORD *)(v21 + 12);
          if ( !v21 )
          {
            v21 = v22;
            goto LABEL_31;
          }
        v20 = *(_DWORD *)(v21 + 8);
        v22 = v21;
      while ( v20 );
LABEL_31:
    if ( v21 != v4 )
      v29 = *(_DWORD **)(v21 + 16);
      v30 = *(v29 - 3);
      v31 = *((_DWORD *)*v52 - 3);
      v32 = *((_DWORD *)*v52 - 3);
      if ( v31 > v30 )
        v32 = *(v29 - 3);
      v33 = memcmp(*v52, v29, v32);
      if ( !v33 )
        v33 = v31 - v30;
      if ( v33 >= 0 )
        v4 = v21;
      v7 = v4;
  CommandRegistry::addSoftTerminal(&v76, v3, (const void **)v6);
  v34 = sub_21E8AF4(&v74, (int *)(v7 + 20));
  sub_21E7408((const void **)v34, "CommandAliases", 0xEu);
  v63 = *(_DWORD *)(v7 + 44) & 0xFC0FFFFF;
  v65 = 0;
  v66 = 0;
  v67 = v76 & 0xFC0FFFFF;
  v69 = 0;
  v70 = 0;
  v35 = operator new(0x20u);
  ptr = v35;
  v36 = (int)v35 + 32;
  v73 = (char *)v35 + 32;
  v37 = v63;
  v38 = v64;
  *((_DWORD *)v35 + 3) = 0;
  *(_DWORD *)v35 = v37;
  *((_DWORD *)v35 + 1) = v38;
  *((_DWORD *)v35 + 2) = 0;
  v39 = v67;
  v40 = v68;
  v41 = v69;
  *((_DWORD *)v35 + 7) = v70;
  v35 = (char *)v35 + 16;
  *(_DWORD *)v35 = v39;
  *((_DWORD *)v35 + 1) = v40;
  *((_DWORD *)v35 + 2) = v41;
  v72 = v36;
  LOBYTE(v35) = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  __dmb();
  if ( !((unsigned __int8)v35 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
  v62 = type_id<CommandRegistry,std::string>(void)::id[0];
  CommandRegistry::addEnumValuesInternal(
    &v75,
    v3,
    (int)&v74,
    (int)&ptr,
    (int)&v62,
    (int)CommandRegistry::parse<std::string>,
    0);
  if ( ptr )
    operator delete(ptr);
  v42 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v74 - 4);
    if ( &pthread_create )
      __dmb();
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
    else
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  *(_DWORD *)(v7 + 48) = v75;
  if ( !(*(_BYTE *)(v7 + 52) & 2) )
    sub_21E94B4((void **)&v61, "CommandName");
    v55 = v76 & 0xFC0FFFFF;
    v57 = 0LL;
    v43 = operator new(0x10u);
    v58 = v43;
    v60 = (char *)v43 + 16;
    v44 = v56;
    *(_DWORD *)v43 = v55;
    *((_DWORD *)v43 + 1) = v44;
    *((_DWORD *)v43 + 2) = 0;
    *((_DWORD *)v43 + 3) = 0;
    v59 = (char *)v43 + 16;
    LOBYTE(v43) = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
    __dmb();
    if ( !((unsigned __int8)v43 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
      type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
      j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
    v54 = type_id<CommandRegistry,std::string>(void)::id[0];
    CommandRegistry::addEnumValuesInternal(
      &v53,
      v3,
      (int)&v61,
      (int)&v58,
      (int)&v54,
      (int)CommandRegistry::parse<std::string>,
      0);
    if ( v58 )
      operator delete(v58);
    v45 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v61 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
  v46 = (int *)std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](
                 v3 + 252,
                 (const void **)v6);
  return EntityInteraction::setInteractText(v46, (int *)v52);
}


int __fastcall CommandRegistry::allocateCommand<SetMaxPlayersCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x18u);
  j_Command::Command(v2);
  *v1 = v2;
  *(_DWORD *)v2 = &off_271A19C;
  result = 0;
  *((_DWORD *)v2 + 5) = 0;
  return result;
}


int __fastcall CommandRegistry::Symbol::fromEnumIndex(int result, unsigned int a2)
{
  *(_DWORD *)result = a2 | 0x300000;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<TimeCommand::TimeSpec>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id) )
    type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id);
  v25 = type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TimeCommand::TimeSpec>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


void __fastcall CommandRegistry::loadRemoteCommands(CommandRegistry *this, const AvailableCommandsPacket *a2)
{
  signed int v2; // r11@0
  CommandRegistry *v3; // r10@1
  char *v4; // r5@1
  const char **v5; // r1@1
  const char **v6; // r7@1
  unsigned int v7; // r4@1
  _DWORD *v8; // r6@3
  int v9; // r9@3
  void *v10; // r0@8
  void *v11; // r1@9
  signed int v12; // r9@9
  _DWORD *v13; // r6@9
  signed int v14; // r4@9
  unsigned int v15; // r0@9
  unsigned int v16; // r2@11
  unsigned int v17; // r5@11
  int v18; // r4@20
  void *v19; // r0@23
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  char *v22; // r6@36
  unsigned int *v23; // r5@36
  unsigned int *v24; // r8@36
  unsigned int v25; // r4@36
  _DWORD *v26; // r7@38
  int v27; // r4@38
  unsigned int v28; // r9@42
  void *v29; // r0@43
  void *v30; // r1@44
  _DWORD *v31; // r7@44
  signed int v32; // r6@44
  unsigned int v33; // r0@44
  unsigned int v34; // r2@46
  unsigned int v35; // r4@46
  void *v36; // r9@54
  int v37; // r6@55
  int v38; // r6@62
  __int64 v39; // kr20_8@62
  int v40; // r9@62
  char *v41; // r3@64
  unsigned int *v42; // r10@64
  unsigned int v43; // r4@64
  char *v44; // r0@66
  int v45; // r6@66
  _DWORD *v46; // r2@68
  int v47; // r5@68
  unsigned int v48; // r7@68
  char *v49; // r11@68
  int v50; // r8@70
  char *v51; // r6@74
  unsigned int v52; // r1@74
  unsigned int v53; // r0@76
  unsigned int v54; // r9@76
  char *v55; // r0@81
  char *v56; // r7@81
  unsigned int v57; // r2@81
  int v58; // r1@81
  char *v59; // r1@81
  int v60; // r2@82
  int v61; // r3@82
  int v62; // r6@82
  int v63; // r4@82
  int v64; // r0@90
  int v65; // r5@90
  const void *v66; // r4@91
  int v67; // r8@91
  size_t v68; // r6@91
  _DWORD *v69; // r0@93
  size_t v70; // r7@93
  size_t v71; // r2@93
  int v72; // r0@95
  _DWORD *v73; // r1@102
  unsigned int v74; // r4@102
  unsigned int v75; // r6@102
  size_t v76; // r2@102
  int v77; // r0@104
  int v78; // r3@104
  unsigned int v79; // r4@109
  int v80; // r8@109
  char *v81; // r9@109
  char v82; // r0@110
  unsigned __int16 v83; // r0@112
  void *v84; // r0@113
  int v85; // r6@116
  _DWORD *v86; // r5@117
  signed int v87; // r9@117
  signed int v88; // r6@117
  unsigned int v89; // r0@117
  unsigned int v90; // r1@119
  unsigned int v91; // r7@119
  unsigned int *v92; // r2@135
  signed int v93; // r1@137
  int v94; // r4@145
  __int64 v95; // kr70_8@145
  char v96; // r5@146
  signed int (__fastcall *v97)(int, int *, int); // r0@146
  int v98; // r11@147
  int v99; // r0@147
  __int64 v100; // r2@147
  int v101; // r8@147
  unsigned int v102; // r0@147
  int v103; // r0@149
  _DWORD *j; // r4@149
  _DWORD *v105; // r6@149
  int *v106; // r0@150
  unsigned __int64 *v107; // r0@151
  unsigned __int64 *v108; // r6@151
  AvailableCommandsPacket *v109; // r8@151
  __int64 v110; // kr58_8@152
  int v111; // r11@153
  unsigned __int64 v112; // r0@155
  char *v113; // r10@156
  int v114; // r4@157
  int v115; // r0@158
  __int64 *v116; // r1@160
  unsigned int v117; // r0@163
  unsigned int v118; // r0@165
  char v119; // r0@188
  __int16 v120; // r0@190
  const char *v121; // r1@191
  __int64 v122; // kr60_8@191
  __int64 v123; // r2@192
  int v124; // r9@192
  char v125; // r8@192
  int v126; // r0@192
  int v127; // [sp+0h] [bp-F8h]@0
  int v128; // [sp+4h] [bp-F4h]@0
  void *v129; // [sp+8h] [bp-F0h]@0
  int v130; // [sp+Ch] [bp-ECh]@0
  int v131; // [sp+10h] [bp-E8h]@0
  int v132; // [sp+14h] [bp-E4h]@0
  char v133; // [sp+18h] [bp-E0h]@0
  int v134; // [sp+18h] [bp-E0h]@151
  int v135; // [sp+1Ch] [bp-DCh]@151
  unsigned int v136; // [sp+20h] [bp-D8h]@147
  void *v137; // [sp+24h] [bp-D4h]@41
  int v138; // [sp+30h] [bp-C8h]@146
  void *ptr; // [sp+34h] [bp-C4h]@6
  int v140; // [sp+38h] [bp-C0h]@62
  unsigned __int64 *v141; // [sp+3Ch] [bp-BCh]@151
  CommandRegistry *v142; // [sp+40h] [bp-B8h]@1
  const AvailableCommandsPacket *v143; // [sp+44h] [bp-B4h]@1
  AvailableCommandsPacket *v144; // [sp+44h] [bp-B4h]@147
  unsigned __int64 *v145; // [sp+48h] [bp-B0h]@155
  int v146; // [sp+54h] [bp-A4h]@63
  _BYTE *v147; // [sp+5Ch] [bp-9Ch]@62
  int v148; // [sp+60h] [bp-98h]@63
  char *i; // [sp+64h] [bp-94h]@68
  int v150; // [sp+68h] [bp-90h]@65
  unsigned int v151; // [sp+68h] [bp-90h]@146
  char *v152; // [sp+6Ch] [bp-8Ch]@68
  int v153; // [sp+6Ch] [bp-8Ch]@156
  const char **v154; // [sp+70h] [bp-88h]@5
  char *v155; // [sp+70h] [bp-88h]@36
  int v156; // [sp+70h] [bp-88h]@63
  int v157; // [sp+74h] [bp-84h]@191
  int v158; // [sp+78h] [bp-80h]@191
  int v159; // [sp+7Ch] [bp-7Ch]@191
  const char *v160; // [sp+80h] [bp-78h]@191
  __int16 v161; // [sp+84h] [bp-74h]@191
  int v162; // [sp+88h] [bp-70h]@158
  __int64 v163; // [sp+8Ch] [bp-6Ch]@163
  int v164; // [sp+94h] [bp-64h]@152
  int v165; // [sp+98h] [bp-60h]@113
  unsigned __int16 v166; // [sp+9Ch] [bp-5Ch]@113
  int v167; // [sp+A4h] [bp-54h]@110
  void *v168; // [sp+A8h] [bp-50h]@64
  char *v169; // [sp+ACh] [bp-4Ch]@64
  char *v170; // [sp+B0h] [bp-48h]@64
  int v171; // [sp+B4h] [bp-44h]@42
  int v172; // [sp+B8h] [bp-40h]@7
  int v173; // [sp+C0h] [bp-38h]@7
  char v174; // [sp+C8h] [bp-30h]@153

  v3 = this;
  v143 = a2;
  v142 = this;
  v4 = AvailableCommandsPacket::getEnumValues(a2);
  v5 = (const char **)(*(_QWORD *)v4 >> 32);
  v6 = (const char **)*(_QWORD *)v4;
  v7 = v5 - v6;
  if ( v7 >= 0x40000000 )
    sub_21E5A04("vector::reserve");
  if ( v7 )
  {
    v8 = operator new((char *)v5 - (char *)v6);
    v5 = (const char **)(*(_QWORD *)v4 >> 32);
    v6 = (const char **)*(_QWORD *)v4;
    v9 = (int)&v8[v7];
  }
  else
    v8 = 0;
    v9 = 0;
  v154 = v5;
  if ( v6 == v5 )
    ptr = v8;
    do
    {
      sub_21E94B4((void **)&v173, *v6);
      CommandRegistry::addSoftTerminal(&v172, (int)v3, (const void **)&v173);
      v2 = v172 & 0xFC0FFFFF;
      if ( v8 == (_DWORD *)v9 )
      {
        v11 = ptr;
        v12 = (char *)v8 - (_BYTE *)ptr;
        v13 = 0;
        v14 = v12 >> 2;
        v15 = v12 >> 2;
        if ( !(v12 >> 2) )
          v15 = 1;
        v16 = v15 + (v12 >> 2);
        v17 = v15 + (v12 >> 2);
        if ( 0 != v16 >> 30 )
          v17 = 0x3FFFFFFF;
        if ( v16 < v15 )
        if ( v17 )
        {
          if ( v17 >= 0x40000000 )
            sub_21E57F4();
          v13 = operator new(4 * v17);
          v11 = ptr;
        }
        v13[v14] = v2;
        if ( v14 )
          v2 = (signed int)v11;
          _aeabi_memmove4(v13, v11);
          v11 = (void *)v2;
        v18 = (int)&v13[v14];
        if ( v11 )
          operator delete(v11);
        v9 = (int)&v13[v17];
        v10 = v13;
        v8 = (_DWORD *)v18;
      }
      else
        *v8 = v2;
        v10 = ptr;
      ++v8;
      ptr = v10;
      v19 = (void *)(v173 - 12);
      if ( (int *)(v173 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v173 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      ++v6;
    }
    while ( v6 != v154 );
  v155 = (char *)v8;
  v22 = AvailableCommandsPacket::getPostfixes(v143);
  v24 = (unsigned int *)(*(_QWORD *)v22 >> 32);
  v23 = (unsigned int *)*(_QWORD *)v22;
  v25 = v24 - v23;
  if ( v25 >= 0x40000000 )
  if ( v25 )
    v26 = operator new((char *)v24 - (char *)v23);
    v24 = (unsigned int *)(*(_QWORD *)v22 >> 32);
    v23 = (unsigned int *)*(_QWORD *)v22;
    v27 = (int)&v26[v25];
    v26 = 0;
    v27 = 0;
  if ( v23 == v24 )
    v137 = v26;
      CommandRegistry::addPostfix(&v171, (int)v3, v23);
      v28 = v171 & 0xFC0FFFFF;
      if ( v26 == (_DWORD *)v27 )
        v30 = v137;
        v2 = (char *)v26 - (_BYTE *)v137;
        v31 = 0;
        v32 = v2 >> 2;
        v33 = v2 >> 2;
        if ( !(v2 >> 2) )
          v33 = 1;
        v34 = v33 + (v2 >> 2);
        v35 = v33 + (v2 >> 2);
        if ( 0 != v34 >> 30 )
          v35 = 0x3FFFFFFF;
        if ( v34 < v33 )
        if ( v35 )
          if ( v35 >= 0x40000000 )
          v31 = operator new(4 * v35);
          v30 = v137;
        v31[v32] = v28;
        if ( v32 )
          v36 = v30;
          _aeabi_memmove4(v31, v30);
          v30 = v36;
        v37 = (int)&v31[v32];
        if ( v30 )
          operator delete(v30);
        v27 = (int)&v31[v35];
        v29 = v31;
        v26 = (_DWORD *)v37;
        *v26 = v28;
        v29 = v137;
      ++v23;
      ++v26;
      v137 = v29;
    while ( v24 != v23 );
  v140 = (int)v26;
  v39 = *(_QWORD *)AvailableCommandsPacket::getEnums(v143);
  v38 = v39;
  v40 = 0;
  v147 = 0;
  if ( (_DWORD)v39 != HIDWORD(v39) )
    v40 = 0;
    v156 = (v155 - (_BYTE *)ptr) >> 2;
    v146 = (int)v3 + 148;
    v148 = 0;
    v147 = 0;
      v168 = 0;
      v169 = 0;
      v170 = 0;
      v41 = (char *)(*(_QWORD *)(v38 + 4) >> 32);
      v42 = (unsigned int *)*(_QWORD *)(v38 + 4);
      v43 = (v41 - (char *)v42) >> 2;
      if ( v43 >= 0x10000000 )
        sub_21E5A04("vector::reserve");
      v150 = v38;
      if ( v43 )
        v44 = (char *)operator new(4 * (v41 - (char *)v42));
        v45 = (int)&v44[16 * v43];
        v41 = (char *)(*(_QWORD *)(v150 + 4) >> 32);
        v42 = (unsigned int *)*(_QWORD *)(v150 + 4);
        v168 = v44;
        v169 = v44;
        v170 = &v44[16 * v43];
        v44 = 0;
        v45 = 0;
      v46 = ptr;
      v47 = (int)v44;
      v48 = v156;
      v49 = v44;
      v152 = v41;
      for ( i = (char *)v40; (char *)v42 != v41; ++v42 )
        if ( *v42 >= v48 )
          v50 = 0;
          v50 = v46[*v42];
        if ( v47 == v45 )
          v51 = v44;
          v52 = (v47 - (signed int)v49) >> 4;
          if ( 0 == v52 )
            v52 = 1;
          v53 = v52 + ((v47 - (signed int)v49) >> 4);
          v54 = v52 + ((v47 - (signed int)v49) >> 4);
          if ( 0 != v53 >> 28 )
            v54 = 0xFFFFFFF;
          if ( v53 < v52 )
          if ( v54 >= 0x10000000 )
          v49 = (char *)operator new(16 * v54);
          v55 = v51;
          v56 = v51;
          v57 = (unsigned int)v49;
          *(_DWORD *)&v49[v47 - (_DWORD)v51] = v50;
          v58 = (int)&v49[v47 - (_DWORD)v51];
          *(_DWORD *)(v58 + 8) = 0;
          *(_DWORD *)(v58 + 12) = 0;
          v59 = v49;
          if ( (char *)v47 != v51 )
          {
            do
            {
              v60 = *(_DWORD *)v56;
              v61 = *((_DWORD *)v56 + 1);
              v62 = *((_DWORD *)v56 + 2);
              v63 = *((_DWORD *)v56 + 3);
              v56 += 16;
              *(_DWORD *)v59 = v60;
              *((_DWORD *)v59 + 1) = v61;
              *((_DWORD *)v59 + 2) = v62;
              *((_DWORD *)v59 + 3) = v63;
              v59 += 16;
            }
            while ( (char *)v47 != v56 );
            v57 = (unsigned int)&v49[((v47 - 16 - (_DWORD)v55) & 0xFFFFFFF0) + 16];
          }
          v47 = v57 + 16;
          if ( v55 )
            operator delete(v55);
          v168 = v49;
          v169 = (char *)v47;
          v45 = (int)&v49[16 * v54];
          v170 = &v49[16 * v54];
          v44 = v49;
          v46 = ptr;
          v48 = v156;
          v41 = v152;
          *(_DWORD *)v47 = v50;
          *(_DWORD *)(v47 + 8) = 0;
          *(_DWORD *)(v47 + 12) = 0;
          v47 += 16;
      v3 = v142;
      v2 = v146;
      v64 = *((_DWORD *)v142 + 38);
      v65 = v146;
      v156 = v48;
      ptr = v46;
      if ( v64 )
        v66 = *(const void **)v150;
        v67 = v146;
        v68 = *(_DWORD *)(*(_DWORD *)v150 - 12);
        do
          v65 = v64;
          while ( 1 )
            v69 = *(_DWORD **)(v65 + 16);
            v70 = *(v69 - 3);
            v71 = *(v69 - 3);
            if ( v70 > v68 )
              v71 = v68;
            v72 = memcmp(v69, v66, v71);
            if ( !v72 )
              v72 = v70 - v68;
            if ( v72 >= 0 )
              break;
            v65 = *(_DWORD *)(v65 + 12);
            if ( !v65 )
              v65 = v67;
              goto LABEL_101;
          v64 = *(_DWORD *)(v65 + 8);
          v67 = v65;
        while ( v64 );
LABEL_101:
      if ( v65 == v146 )
        goto LABEL_208;
      v73 = *(_DWORD **)(v65 + 16);
      v74 = *(_DWORD *)(*(_DWORD *)v150 - 12);
      v75 = *(v73 - 3);
      v76 = *(_DWORD *)(*(_DWORD *)v150 - 12);
      if ( v74 > v75 )
        v76 = *(v73 - 3);
      v77 = memcmp(*(const void **)v150, v73, v76);
      if ( !v77 )
        v77 = v74 - v75;
      if ( v77 < 0 )
        v65 = v146;
LABEL_208:
        sub_21E94B4((void **)&v167, *(const char **)v150);
        v82 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
        __dmb();
        if ( !(v82 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
          v83 = typeid_t<CommandRegistry>::count++;
          type_id<CommandRegistry,std::string>(void)::id[0] = v83;
          j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
        v166 = type_id<CommandRegistry,std::string>(void)::id[0];
        CommandRegistry::addEnumValuesInternal(&v165, (int)v142, (int)&v167, (int)&v168, (int)&v166, 0, 0);
        v80 = v150;
        v79 = v165 & 0xFC0FFFFF;
        v84 = (void *)(v167 - 12);
        if ( (int *)(v167 - 12) != &dword_28898C0 )
          v92 = (unsigned int *)(v167 - 4);
          if ( &pthread_create )
            __dmb();
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
          else
            v93 = (*v92)--;
          if ( v93 <= 0 )
            j_j_j_j__ZdlPv_9(v84);
        v81 = i;
        v79 = *(_DWORD *)(v65 + 20);
        CommandRegistry::addEnumValuesToExisting(
          (int)v142,
          *(_DWORD *)(v65 + 20),
          (int)&v168,
          v78,
          v127,
          v128,
          v129,
          v130,
          v131,
          v132,
          v133);
      if ( v81 == (char *)v148 )
        v86 = 0;
        v87 = v81 - v147;
        v88 = v87 >> 2;
        v89 = v87 >> 2;
        if ( !(v87 >> 2) )
          v89 = 1;
        v90 = v89 + (v87 >> 2);
        v91 = v89 + (v87 >> 2);
        if ( 0 != v90 >> 30 )
          v91 = 0x3FFFFFFF;
        if ( v90 < v89 )
        if ( v91 )
          if ( v91 >= 0x40000000 )
          v86 = operator new(4 * v91);
        v86[v88] = v79;
        if ( v88 )
          _aeabi_memmove4(v86, v147);
        v81 = (char *)&v86[v88];
        v85 = v80;
        if ( v147 )
          operator delete(v147);
        v147 = v86;
        v148 = (int)&v86[v91];
        *(_DWORD *)v81 = v79;
      v40 = (int)(v81 + 4);
      if ( v168 )
        operator delete(v168);
      v38 = v85 + 16;
    while ( v38 != HIDWORD(v39) );
  v95 = *(_QWORD *)AvailableCommandsPacket::getCommands(v143);
  v94 = v95;
  if ( (_DWORD)v95 != HIDWORD(v95) )
    v96 = 0;
    v151 = (v40 - (signed int)v147) >> 2;
    v138 = (int)v3 + 252;
    v97 = CommandRegistry::parse<CommandRegistry::Enum>;
    while ( 1 )
      v98 = v2 & 0xFFFFFF00;
      v136 = (unsigned int)v97 & 0xFFFFFF00;
      CommandRegistry::registerCommand(
        (int)v3,
        (const void **)v94,
        *(const char **)(v94 + 4),
        *(_BYTE *)(v94 + 9),
        v98,
        (unsigned int)v97 & 0xFFFFFF00);
      v99 = CommandRegistry::findCommand((int)v3, (const void **)v94);
      v101 = v94;
      *(_BYTE *)(v99 + 32) = *(_BYTE *)(v94 + 8);
      *(_BYTE *)(v99 + 48) = v96;
      v144 = (AvailableCommandsPacket *)v99;
      v102 = *(_DWORD *)(v94 + 24);
      if ( (v102 & 0x80000000) == 0 && v102 < v151 )
        v103 = *(_DWORD *)&v147[4 * v102];
        *((_DWORD *)v144 + 7) = v103 | 0x300000;
        v105 = (_DWORD *)(*(_QWORD *)(*((_DWORD *)v3 + 27) + 28 * v103 + 16) >> 32);
        for ( j = (_DWORD *)*(_QWORD *)(*((_DWORD *)v3 + 27) + 28 * v103 + 16); v105 != j; j += 4 )
          v106 = (int *)std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](
                          v138,
                          (const void **)(*((_DWORD *)v3 + 24) + 4 * *j));
          EntityInteraction::setInteractText(v106, (int *)v101);
      v134 = v98;
      v135 = v101;
      v107 = (unsigned __int64 *)(*(_QWORD *)(v101 + 12) >> 32);
      v108 = (unsigned __int64 *)*(_QWORD *)(v101 + 12);
      v109 = v144;
      v141 = v107;
      if ( v108 != v107 )
        break;
LABEL_196:
      v94 = v135 + 28;
      v2 = v134;
      v97 = (signed int (__fastcall *)(int, int *, int))v136;
      if ( v135 + 28 == HIDWORD(v95) )
        goto LABEL_197;
      v164 = 0;
      v110 = *(_QWORD *)((char *)v109 + 12);
      if ( (_DWORD)v110 == HIDWORD(v110) )
        LODWORD(v100) = &v164;
        j__ZNSt6vectorIN15CommandRegistry8OverloadESaIS1_EE19_M_emplace_back_auxIJRKiDnEEEvDpOT_(
          (unsigned __int64 *)v144 + 1,
          (int *)&CommandVersion::CurrentVersion,
          v100);
        v111 = *((_DWORD *)v109 + 3);
        LODWORD(v100) = 0x7FFFFFFF;
        CommandVersion::CommandVersion((CommandVersion *)&v174, 3, v100);
        *(_QWORD *)v110 = *(_QWORD *)&v174;
        *(_DWORD *)(v110 + 8) = 0;
        *(_DWORD *)(v110 + 12) = 0;
        *(_DWORD *)(v110 + 16) = 0;
        *(_DWORD *)(v110 + 20) = 0;
        *(_DWORD *)(v110 + 24) = -1;
        v111 = *((_DWORD *)v109 + 3) + 28;
        *((_DWORD *)v109 + 3) = v111;
      std::vector<CommandParameterData,std::allocator<CommandParameterData>>::reserve(
        v111 - 16,
        -1431655765 * ((signed int)((*v108 >> 32) - *v108) >> 2));
      v112 = *v108;
      v145 = v108;
      if ( (_DWORD)v112 != HIDWORD(v112) )
LABEL_195:
      CommandRegistry::setupOverloadRules((int)v142, (int)v144);
      v108 = (unsigned __int64 *)((char *)v108 + 12);
      if ( (unsigned __int64 *)((char *)v145 + 12) == v141 )
        goto LABEL_196;
    v113 = (char *)(v112 + 8);
    v153 = -HIDWORD(v112);
      v162 = 0;
      v115 = *((_DWORD *)v113 - 1);
      if ( v115 & 0x200000 )
        v117 = v115 & 0xFC0FFFFF;
        v162 = 1;
        v163 = (unsigned int)CommandRegistry::parse<CommandRegistry::Enum>;
        if ( v117 >= v151 )
          v114 = -1;
          v114 = *(_DWORD *)&v147[4 * v117] | 0x300000;
        goto LABEL_188;
      if ( v115 & 0x1000000 )
        v118 = v115 & 0xFC0FFFFF;
        v162 = 2;
        v163 = (unsigned int)CommandRegistry::parse<int>;
        if ( v118 >= (v140 - (signed int)v137) >> 2 )
          v114 = *(_DWORD *)&v147[4 * v118] | 0x1000000;
      v116 = (__int64 *)&CommandRegistry::ParseRuleSymbols;
      if ( v115 != dword_27ED8F4[1] )
        if ( v115 == dword_27ED8F4[4] )
          v116 = (__int64 *)&dword_27ED8F4[2];
        else if ( v115 == dword_27ED8F4[7] )
          v116 = (__int64 *)&dword_27ED8F4[5];
        else if ( v115 == dword_27ED8F4[10] )
          v116 = (__int64 *)&dword_27ED8F4[8];
        else if ( v115 == dword_27ED8F4[13] )
          v116 = (__int64 *)&dword_27ED8F4[11];
        else if ( v115 == dword_27ED8F4[16] )
          v116 = (__int64 *)&dword_27ED8F4[14];
        else if ( v115 == dword_27ED8F4[19] )
          v116 = (__int64 *)&dword_27ED8F4[17];
        else if ( v115 == dword_27ED8F4[22] )
          v116 = (__int64 *)&dword_27ED8F4[20];
        else if ( v115 == dword_27ED8F4[25] )
          v116 = (__int64 *)&dword_27ED8F4[23];
        else if ( v115 == dword_27ED8F4[28] )
          v116 = (__int64 *)&dword_27ED8F4[26];
          if ( v115 != dword_27ED8F4[31] )
            v114 = -1;
            goto LABEL_188;
          v116 = (__int64 *)&dword_27ED8F4[29];
      v114 = -1;
      v163 = *v116;
LABEL_188:
      v119 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,void>(void)::id[0];
      __dmb();
      if ( !(v119 & 1)
        && j___cxa_guard_acquire(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,void>(void)::id) )
        v120 = typeid_t<CommandRegistry>::count++;
        type_id<CommandRegistry,void>(void)::id = v120;
        j___cxa_guard_release(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,void>(void)::id);
      v161 = type_id<CommandRegistry,void>(void)::id;
      v121 = (const char *)*((_DWORD *)v113 - 2);
      v159 = 0;
      v160 = v121;
      v157 = -1;
      v158 = -1;
      v122 = *(_QWORD *)(v111 - 12);
      if ( (_DWORD)v122 == HIDWORD(v122) )
        j__ZNSt6vectorI20CommandParameterDataSaIS0_EE19_M_emplace_back_auxIJ8typeid_tI15CommandRegistryERMS5_KFbPvRKNS5_10ParseTokenERK13CommandOriginiRSsRS_ISsSaISsEEEPKcR24CommandParameterDataTypeDniRKbiEEEvDpOT_(
          (unsigned __int64 *)(v111 - 16),
          &v161,
          &v163,
          &v160,
          &v162,
          (int)&v159,
          &v158,
          v113,
          &v157);
        v126 = *(_DWORD *)(v111 - 12);
        v123 = v163;
        v124 = v162;
        v125 = *v113;
        *(_WORD *)v122 = type_id<CommandRegistry,void>(void)::id;
        *(_QWORD *)(v122 + 4) = v123;
        sub_21E94B4((void **)(v122 + 12), v121);
        *(_DWORD *)(v122 + 16) = 0;
        *(_DWORD *)(v122 + 20) = -1;
        *(_DWORD *)(v122 + 24) = v124;
        *(_DWORD *)(v122 + 28) = -1;
        *(_DWORD *)(v122 + 32) = -1;
        *(_BYTE *)(v122 + 36) = v125;
        v126 = *(_DWORD *)(v111 - 12) + 40;
        *(_DWORD *)(v111 - 12) = v126;
      *(_DWORD *)(v126 - 20) = v114;
      v113 += 12;
      v96 = 0;
      if ( &v113[v153] == (char *)8 )
        goto LABEL_195;
LABEL_197:
  CommandRegistry::buildParseTable(v3);
  if ( v147 )
    operator delete(v147);
  if ( v137 )
    operator delete(v137);
  if ( ptr )
    operator delete(ptr);
}


signed int __fastcall CommandRegistry::parse<CommandPosition>(int a1, int a2, int *a3, int a4, int a5, void **a6, int a7)
{
  int v7; // r5@1
  int v8; // r4@1
  int v9; // r0@1
  int v10; // r2@1
  int v11; // r5@4
  _BYTE *v12; // r0@4
  _DWORD *v13; // r1@4
  signed int v14; // r4@4

  v7 = *a3;
  v8 = a2;
  v9 = *(_DWORD *)(*a3 + 20);
  v10 = *a3;
  if ( v9 == 8 )
    *(_BYTE *)(a2 + 15) = 1;
  if ( CommandRegistry::readRelativeCoordinate((_BYTE *)(a2 + 12), (_DWORD *)a2, v10, 1, a6, a7) == 1 )
  {
    v11 = *(_DWORD *)(v7 + 4);
    CommandRegistry::readRelativeCoordinate((_BYTE *)(v8 + 13), (_DWORD *)(v8 + 4), v11, 0, a6, a7);
    v12 = (_BYTE *)(v8 + 14);
    v13 = (_DWORD *)(v8 + 8);
    v14 = 1;
    CommandRegistry::readRelativeCoordinate(v12, v13, *(_DWORD *)(v11 + 4), 1, a6, a7);
  }
  else
    v14 = 0;
  return v14;
}


int *__fastcall CommandRegistry::Enum::Enum(int *a1, int *a2, _WORD *a3, int a4, int a5)
{
  int v5; // r4@1
  _WORD *v6; // r5@1
  int *result; // r0@1

  v5 = a4;
  v6 = a3;
  result = sub_21E8AF4(a1, a2);
  *((_WORD *)result + 2) = *v6;
  result[2] = v5;
  result[3] = a5;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  return result;
}


unsigned int __fastcall CommandRegistry::Symbol::isEnumValue(CommandRegistry::Symbol *this)
{
  return (*((_BYTE *)this + 3) & 2u) >> 1;
}


void __fastcall CommandRegistry::buildRules(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, void *a29, int a30, int a31, void *a32, void *a33, int a34, int a35, void *a36)
{
  CommandRegistry::buildRules(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    (int)a29,
    a30,
    a31,
    (int)a32,
    a33,
    a34,
    a35,
    a36);
}


int __fastcall CommandRegistry::allocateCommand<EffectCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x88u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A024;
  j_CommandSelector<Entity>::CommandSelector((int)v2 + 20);
  result = 0;
  *((_DWORD *)v2 + 29) = 0;
  *((_DWORD *)v2 + 30) = 0;
  *((_DWORD *)v2 + 31) = 30;
  *((_DWORD *)v2 + 32) = 0;
  *((_BYTE *)v2 + 132) = 0;
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<bool>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char *v9; // r10@11
  char **v10; // r0@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  char **v14; // r5@19
  char **v15; // r7@19
  int v16; // r9@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  int v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  char *v27; // [sp+28h] [bp-40h]@11
  int v28; // [sp+2Ch] [bp-3Ch]@11
  char **v29; // [sp+34h] [bp-34h]@1
  char **v30; // [sp+38h] [bp-30h]@1
  char **v31; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v29 = 0;
  v30 = 0;
  v3 = a3;
  v4 = a2;
  v31 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v29,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = (char *)*(_BYTE *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v28 = 0;
      v10 = v30;
      if ( v30 == v31 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v29,
          (int)&v26);
        v11 = v26;
      }
      else
        *v30 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = v9;
        v10[3] = 0;
        v30 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id) )
    type_id<CommandRegistry,bool>(void)::id = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id);
  v25 = type_id<CommandRegistry,bool>(void)::id;
  CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)CommandRegistry::parseEnum<bool>,
    0,
    v21,
    (int)v22,
    v23);
  v15 = v30;
  v14 = v29;
  v16 = v24;
  if ( v29 != v30 )
      v19 = (int *)(*v14 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v14 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v14 += 4;
    while ( v14 != v15 );
    v14 = v29;
  if ( v14 )
    operator delete(v14);
  return v16;
}


signed int __fastcall CommandRegistry::parseEnum<TimeCommand::TimeSpec>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::addEnumValues<TitleCommand::Mode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TitleCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TitleCommand::Mode>(void)::id);
  v25 = type_id<CommandRegistry,TitleCommand::Mode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TitleCommand::Mode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


void *__fastcall CommandRegistry::allocateCommand<EnableEncryptionCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  void *result; // r0@1

  v1 = a1;
  v2 = (Command *)operator new(0x1Cu);
  Command::Command(v2);
  *(_DWORD *)v2 = &off_26EB2F0;
  result = &unk_28898CC;
  *((_DWORD *)v2 + 5) = &unk_28898CC;
  *((_DWORD *)v2 + 6) = &unk_28898CC;
  *v1 = v2;
  return result;
}


signed int __fastcall CommandRegistry::parse<std::string>(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  void *v4; // r0@1
  _BYTE *v5; // r0@2
  unsigned int v6; // r11@6
  char v7; // r7@7
  signed int v8; // r5@7
  int v9; // r8@11
  char v10; // r0@11
  _BYTE *v11; // r0@14
  int v12; // r1@14 OVERLAPPED
  int v13; // r6@14
  unsigned int v14; // r2@14
  _DWORD *v15; // r0@17
  char *v16; // r0@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  _BYTE *v22; // [sp+4h] [bp-3Ch]@6
  int v23; // [sp+8h] [bp-38h]@1

  v3 = a2;
  CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v23, a3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v23);
  v4 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (_BYTE *)*v3;
  if ( *(_DWORD *)(*v3 - 12) )
    if ( *((_DWORD *)v5 - 1) >= 0 )
      sub_21E8010((const void **)v3);
      v5 = (_BYTE *)*v3;
    if ( *v5 == 34 )
      v22 = &unk_28898CC;
      v6 = *((_DWORD *)v5 - 3) - 1;
      if ( v6 >= 2 )
      {
        v7 = 0;
        v8 = 1;
        while ( 1 )
        {
          if ( *((_DWORD *)v5 - 1) >= 0 )
          {
            sub_21E8010((const void **)v3);
            v5 = (_BYTE *)*v3;
          }
          v9 = v5[v8];
          v10 = 0;
          if ( v9 != 92 )
            v10 = 1;
          if ( ((unsigned __int8)v10 | (unsigned __int8)v7) & 1 )
            v11 = v22;
            *(_QWORD *)&v12 = *(_QWORD *)(v22 - 12);
            v13 = v12 + 1;
            if ( v12 + 1 > v14 || *((_DWORD *)v22 - 1) >= 1 )
            {
              sub_21E6FCC((const void **)&v22, v12 + 1);
              v11 = v22;
              v12 = *((_DWORD *)v22 - 3);
            }
            v11[v12] = v9;
            v7 = 0;
            v15 = v22;
            if ( (int *)(v22 - 12) != &dword_28898C0 )
              *((_DWORD *)v22 - 1) = 0;
              *(v15 - 3) = v13;
              *((_BYTE *)v15 + v13) = byte_26C67B8[0];
          else
            v7 = 1;
          if ( ++v8 >= v6 )
            break;
          v5 = (_BYTE *)*v3;
        }
      }
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        v3,
        (int *)&v22);
      v16 = v22 - 12;
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
  return 1;
}


signed int __fastcall CommandRegistry::Parser::parse(int a1, int *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r9@1
  _DWORD *v4; // r0@1
  signed int v5; // r8@1
  void *v6; // r6@1
  int v7; // r2@3
  int v8; // r0@3
  __int64 v9; // kr00_8@3
  __int64 v10; // kr08_8@3
  unsigned int v11; // r4@3
  int v12; // r8@4
  unsigned int v13; // r6@4
  void *v14; // t1@5
  __int64 v15; // r0@6
  int v16; // r3@6
  int v17; // r10@8
  int *v18; // r11@9
  int v19; // r0@9
  int v20; // r4@9
  int v21; // r0@12
  int v22; // r0@12
  int v23; // r0@15
  int v24; // r1@15
  int v25; // r0@16
  CommandLexer *v26; // r0@17
  char *v27; // r0@17
  int v28; // r0@17
  CommandLexer *v29; // r4@18
  int v30; // r2@19
  int v31; // r7@19
  int v32; // r0@20
  int v33; // r1@20
  _DWORD *v34; // r1@24
  int v35; // r3@24
  int v36; // r4@24
  int i; // r5@24
  int v38; // r6@25
  int v39; // r4@26
  int v40; // r6@33
  int v41; // r6@36
  int v42; // r0@39
  int v43; // r0@39
  char *v44; // r0@40
  int v45; // r0@43
  int v46; // r0@43
  int v47; // r8@44
  int *v48; // r11@46
  int *v49; // r4@46
  signed int v50; // r0@46
  signed int v51; // r9@46
  char *v52; // r7@48
  int v53; // r5@48
  char *v54; // r9@51
  int *v55; // r8@55
  int (__fastcall *v56)(int, int, int *); // r3@56
  int v57; // r0@56
  int v58; // r10@56
  signed int v59; // r7@58
  signed int v60; // r4@58
  unsigned int v61; // r0@58
  unsigned int v62; // r1@60
  unsigned int v63; // r5@60
  int *v64; // r0@77
  int *v65; // r5@77
  int v66; // r4@79
  int v67; // t1@79
  int v68; // r6@81
  int v69; // t1@81
  int v70; // r1@82 OVERLAPPED
  int v71; // r2@82
  int v72; // r1@83
  int v73; // r0@86
  int v74; // r0@86
  signed int result; // r0@93
  __int64 v76; // kr10_8@97
  __int64 v77; // kr18_8@97
  _DWORD *v78; // r0@100
  int *v79; // r4@100
  _BYTE *v80; // r9@100
  int *v81; // r0@103
  int v82; // r0@104
  int v83; // r7@104
  int v84; // r1@104
  int v85; // r2@104
  int v86; // r3@108
  signed int v87; // r7@109
  bool v88; // nf@109
  unsigned __int8 v89; // vf@109
  int v90; // r7@111
  signed int v91; // r3@117
  int v92; // r3@118
  int v93; // r3@127
  int v94; // [sp+4h] [bp-6Ch]@8
  _BYTE **v95; // [sp+8h] [bp-68h]@17
  int v96; // [sp+Ch] [bp-64h]@49
  int *v97; // [sp+10h] [bp-60h]@45
  int v98; // [sp+14h] [bp-5Ch]@3
  int **v99; // [sp+18h] [bp-58h]@44
  int (__fastcall **v100)(int, int, int *); // [sp+1Ch] [bp-54h]@54
  int v101; // [sp+20h] [bp-50h]@54
  _DWORD *v102; // [sp+24h] [bp-4Ch]@45
  char *ptr; // [sp+28h] [bp-48h]@55
  int v104; // [sp+2Ch] [bp-44h]@97
  char v105; // [sp+30h] [bp-40h]@17
  int v106; // [sp+40h] [bp-30h]@1
  int v107; // [sp+44h] [bp-2Ch]@56

  v2 = a1;
  v3 = (_DWORD *)(a1 + 60);
  EntityInteraction::setInteractText((int *)(a1 + 60), a2);
  v4 = operator new(0x18u);
  v5 = 1048605;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 1048605;
  v106 = 0;
  v6 = *(void **)(v2 + 64);
  *(_DWORD *)(v2 + 64) = v4;
  if ( v6 )
  {
    std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)v6 + 4);
    std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)v6);
    operator delete(v6);
  }
  std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)&v106);
  v7 = v2;
  v8 = v2 + 4;
  v9 = *(_QWORD *)(v2 + 20);
  v10 = *(_QWORD *)(v2 + 12);
  v11 = *(_DWORD *)(v2 + 40);
  v98 = v8;
  if ( HIDWORD(v9) >= v11 )
    v16 = v7 + 12;
    v15 = v10;
  else
    v12 = v7;
    v13 = HIDWORD(v9);
    do
    {
      v14 = *(void **)(v13 + 4);
      v13 += 4;
      operator delete(v14);
    }
    while ( v13 < v11 );
    v7 = v12;
    v5 = 1048605;
    v15 = *(_QWORD *)(v7 + 12);
  v94 = v7;
  *(_QWORD *)(v7 + 28) = v10;
  *(_QWORD *)(v7 + 36) = v9;
  v17 = v7;
  if ( (_DWORD)v15 == HIDWORD(v15) )
    v18 = (int *)v16;
    if ( *(_DWORD *)(v7 + 24) == *(_DWORD *)(v7 + 4) )
      std::deque<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>,std::allocator<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>>>::_M_reallocate_map(
        v98,
        1u,
        1);
    *(_DWORD *)(*(_DWORD *)(v17 + 24) - 4) = operator new(0x200u);
    v23 = *(_DWORD *)(v17 + 24);
    *(_DWORD *)(v17 + 24) = v23 - 4;
    v24 = *(_DWORD *)(v23 - 4);
    *(_DWORD *)(v17 + 16) = v24;
    *(_DWORD *)(v17 + 20) = v24 + 512;
    v19 = v24 + 504;
    *(_DWORD *)(v17 + 12) = v24 + 504;
    *(_QWORD *)(v24 + 504) = 19LL;
    v20 = *(_DWORD *)(v17 + 64);
    *(_DWORD *)(v15 - 8) = 19;
    LODWORD(v15) = v15 - 8;
    *(_DWORD *)(v15 + 4) = 0;
    *(_DWORD *)(v7 + 12) = v15;
    v20 = *(_DWORD *)(v7 + 64);
    if ( (_DWORD)v15 == HIDWORD(v15) )
      if ( *(_DWORD *)(v7 + 24) == *(_DWORD *)(v7 + 4) )
        std::deque<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>,std::allocator<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>>>::_M_reallocate_map(
          v98,
          1u,
          1);
      *(_DWORD *)(*(_DWORD *)(v17 + 24) - 4) = operator new(0x200u);
      v21 = *(_DWORD *)(v17 + 24);
      *(_DWORD *)(v17 + 24) = v21 - 4;
      v22 = *(_DWORD *)(v21 - 4);
      *(_DWORD *)(v17 + 16) = v22;
      *(_DWORD *)(v17 + 20) = v22 + 512;
      *(_DWORD *)(v17 + 12) = v22 + 504;
      *(_DWORD *)(v22 + 504) = v5;
      *(_DWORD *)(v22 + 508) = v20;
      goto LABEL_17;
  *(_DWORD *)(v19 - 8) = v5;
  v25 = v19 - 8;
  *(_DWORD *)(v25 + 4) = v20;
  *v18 = v25;
LABEL_17:
  v26 = CommandLexer::CommandLexer((CommandLexer *)&v105, v3);
  v27 = CommandLexer::next(v26);
  v95 = (_BYTE **)(v17 + 44);
  CommandRegistry::LexicalToken::operator=(v17 + 44, (int)v27);
  v28 = *(_DWORD *)(v17 + 12);
  if ( *(_DWORD *)(v17 + 28) == v28 )
    return 1;
  v29 = (CommandLexer *)&v105;
  while ( 1 )
    v30 = *(_DWORD *)v28;
    v31 = *(_DWORD *)(v17 + 52);
    if ( v31 != *(_DWORD *)v28 )
      v34 = *(_DWORD **)v17;
      v35 = *(_DWORD *)v17 + 64;
      v36 = *(_DWORD *)(*(_DWORD *)v17 + 68);
      for ( i = *(_DWORD *)v17 + 64; v36; v36 = *(_DWORD *)(i + 8) )
      {
        v38 = i;
        i = v36;
        while ( 1 )
        {
          v39 = *(_DWORD *)(i + 16);
          if ( v39 >= v31 && (v31 < v39 || *(_DWORD *)(i + 20) >= v30) )
            break;
          i = *(_DWORD *)(i + 12);
          if ( !i )
          {
            i = v38;
            goto LABEL_32;
          }
        }
      }
LABEL_32:
      if ( i == v35 || (v40 = *(_DWORD *)(i + 16), v31 < v40) || v40 >= v31 && v30 < *(_DWORD *)(i + 20) )
        v41 = *(_DWORD *)(v28 + 4);
LABEL_95:
        if ( v41 && *(_DWORD *)(v41 + 20) == 1048604 )
          sub_21E8190((void **)(v17 + 68), "commands.generic.unknown", (_BYTE *)0x18);
          v76 = *(_QWORD *)(v17 + 44);
          v104 = v76 + HIDWORD(v76);
          v77 = *(_QWORD *)(v17 + 76);
          if ( (_DWORD)v77 == HIDWORD(v77) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<char const*&,char const*>(
              (unsigned __int64 *)(v17 + 72),
              v95,
              &v104);
          else
            if ( HIDWORD(v76) )
            {
              if ( !(_DWORD)v76 )
                sub_21E5884((int)"basic_string::_S_construct null not valid");
              v78 = sub_21E7E80(HIDWORD(v76), 0);
              v79 = v78;
              v80 = v78 + 3;
              if ( HIDWORD(v76) == 1 )
                *v80 = *(_BYTE *)v76;
              else
                _aeabi_memcpy(v78 + 3, (const char *)v76, HIDWORD(v76));
              if ( v79 != &dword_28898C0 )
              {
                v79[2] = 0;
                *v79 = HIDWORD(v76);
                v80[HIDWORD(v76)] = byte_26C67B8[0];
              }
            }
            else
              v80 = &unk_28898CC;
            *(_DWORD *)v77 = v80;
            *(_DWORD *)(v17 + 76) += 4;
        else
          sub_21E8190((void **)(v17 + 68), "commands.generic.syntax", (_BYTE *)0x17);
          *(_BYTE *)(v17 + 88) = 1;
        return 0;
      v41 = *(_DWORD *)(v28 + 4);
      if ( i == v35 )
        goto LABEL_95;
      if ( v28 == *(_DWORD *)(v17 + 20) - 8 )
        operator delete(*(void **)(v17 + 16));
        v45 = *(_DWORD *)(v17 + 24);
        *(_DWORD *)(v17 + 24) = v45 + 4;
        v46 = *(_DWORD *)(v45 + 4);
        *(_DWORD *)(v17 + 16) = v46;
        *(_DWORD *)(v17 + 20) = v46 + 512;
        *(_DWORD *)(v17 + 12) = v46;
        v34 = *(_DWORD **)v17;
      else
        *v18 = v28 + 8;
      v47 = *v34 + 32 * *(_DWORD *)(i + 24);
      v99 = (int **)(v47 + 20);
      if ( v41 )
        v97 = v18;
        v102 = (_DWORD *)(v47 + 12);
        if ( *(_DWORD *)(v47 + 12) )
          v48 = *v99;
          v49 = *(int **)(v47 + 24);
          v50 = (char *)v49 - (char *)*v99;
          v51 = v50 >> 2;
          if ( (unsigned int)(v50 >> 2) >= 0x40000000 )
            sub_21E5A04("vector::reserve");
          if ( v51 )
            v52 = (char *)operator new(v50);
            v49 = *(int **)(v47 + 24);
            v53 = (int)&v52[4 * v51];
            v48 = *v99;
            v52 = 0;
            v53 = 0;
          if ( v48 == v49 )
            v96 = v47;
            v54 = v52;
            v101 = v47 + 4;
            v100 = (int (__fastcall **)(int, int, int *))(v47 + 16);
            do
              v55 = v49;
              ptr = v54;
              if ( !*v102 )
                sub_21E5F48();
              v56 = *v100;
              v107 = *v48;
              v57 = v56(v101, v41, &v107);
              v58 = v57;
              if ( v52 == (char *)v53 )
                v54 = 0;
                v59 = v52 - ptr;
                v60 = v59 >> 2;
                v61 = v59 >> 2;
                if ( !(v59 >> 2) )
                  v61 = 1;
                v62 = v61 + (v59 >> 2);
                v63 = v61 + (v59 >> 2);
                if ( 0 != v62 >> 30 )
                  v63 = 0x3FFFFFFF;
                if ( v62 < v61 )
                if ( v63 )
                {
                  if ( v63 >= 0x40000000 )
                    sub_21E57F4();
                  v54 = (char *)operator new(4 * v63);
                }
                *(_DWORD *)&v54[4 * v60] = v58;
                if ( v60 )
                  _aeabi_memmove4(v54, ptr);
                v52 = &v54[4 * v60];
                v49 = v55;
                if ( ptr )
                  operator delete(ptr);
                v53 = (int)&v54[4 * v63];
                *(_DWORD *)v52 = v57;
              ++v48;
              v52 += 4;
            while ( v49 != v48 );
          goto LABEL_77;
        v96 = *v34 + 32 * *(_DWORD *)(i + 24);
      v54 = 0;
      v52 = 0;
LABEL_77:
      v17 = v94;
      v64 = *v99;
      v65 = *(int **)(v96 + 24);
      v18 = v97;
      if ( v65 != *v99 )
        do
          if ( v52 == v54 )
            v66 = 0;
            v67 = *((_DWORD *)v52 - 1);
            v52 -= 4;
            v66 = v67;
          v69 = *(v65 - 1);
          --v65;
          v68 = v69;
          if ( v69 != 0x100000 )
            *(_QWORD *)&v70 = *(_QWORD *)(v94 + 12);
            if ( v70 == v71 )
              if ( *(_DWORD *)(v94 + 24) == *(_DWORD *)(v94 + 4) )
                std::deque<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>,std::allocator<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>>>::_M_reallocate_map(
                  v98,
                  1u,
                  1);
              *(_DWORD *)(*(_DWORD *)(v94 + 24) - 4) = operator new(0x200u);
              v73 = *(_DWORD *)(v94 + 24);
              *(_DWORD *)(v94 + 24) = v73 - 4;
              v74 = *(_DWORD *)(v73 - 4);
              *(_DWORD *)(v94 + 16) = v74;
              *(_DWORD *)(v94 + 20) = v74 + 512;
              *(_DWORD *)(v94 + 12) = v74 + 504;
              *(_DWORD *)(v74 + 504) = v68;
              *(_DWORD *)(v74 + 508) = v66;
              v64 = *v99;
              *(_DWORD *)(v70 - 8) = v68;
              v72 = v70 - 8;
              *(_DWORD *)(v72 + 4) = v66;
              *v97 = v72;
        while ( v65 != v64 );
      v29 = (CommandLexer *)&v105;
      if ( v54 )
        operator delete(v54);
      goto LABEL_90;
    CommandLexer::step(v29);
    v32 = *v18;
    v33 = *(_DWORD *)(*v18 + 4);
    if ( v33 )
      *(_DWORD *)(v33 + 12) = *(_DWORD *)(v17 + 44);
      *(_DWORD *)(v33 + 16) = *(_DWORD *)(v17 + 48);
    if ( v32 == *(_DWORD *)(v17 + 20) - 8 )
      operator delete(*(void **)(v17 + 16));
      v42 = *(_DWORD *)(v17 + 24);
      *(_DWORD *)(v17 + 24) = v42 + 4;
      v43 = *(_DWORD *)(v42 + 4);
      *(_DWORD *)(v17 + 16) = v43;
      *(_DWORD *)(v17 + 20) = v43 + 512;
      *(_DWORD *)(v17 + 12) = v43;
    else
      *v18 = v32 + 8;
    v44 = CommandLexer::next(v29);
    CommandRegistry::LexicalToken::operator=((int)v95, (int)v44);
    if ( *(_BYTE *)(v17 + 89) )
      if ( *(_DWORD *)(v17 + 52) == 19 )
        break;
LABEL_90:
    v28 = *(_DWORD *)(v17 + 12);
    if ( *(_DWORD *)(v17 + 28) == v28 )
      return 1;
  v81 = *(int **)(v17 + 12);
  if ( *(int **)(v17 + 28) == v81 )
    return 0;
  v82 = *v81;
  v83 = *(_DWORD *)(*(_DWORD *)v17 + 68);
  v84 = *(_DWORD *)v17 + 64;
  v85 = *(_DWORD *)v17 + 64;
LABEL_107:
  if ( v83 )
    v86 = v85;
    v85 = v83;
      v87 = *(_DWORD *)(v85 + 16);
      v89 = __OFSUB__(v87, 19);
      v88 = v87 - 19 < 0;
      if ( v87 >= 19 )
        if ( v87 <= 19 )
          v90 = *(_DWORD *)(v85 + 20);
          v89 = __OFSUB__(v90, v82);
          v88 = v90 - v82 < 0;
        if ( !(v88 ^ v89) )
          v83 = *(_DWORD *)(v85 + 8);
          goto LABEL_107;
      v85 = *(_DWORD *)(v85 + 12);
    while ( v85 );
    v85 = v86;
  if ( v85 == v84 )
    v92 = *(_DWORD *)v17 + 64;
    v91 = *(_DWORD *)(v85 + 16);
    if ( v91 <= 19 )
      if ( v91 >= 19 )
        v93 = *(_DWORD *)(v85 + 20);
        v89 = __OFSUB__(v82, v93);
        v88 = v82 - v93 < 0;
        v92 = *(_DWORD *)v17 + 64;
          v92 = v85;
        v92 = v85;
      v92 = *(_DWORD *)v17 + 64;
  result = 0;
  if ( v92 != v84 )
    result = 1;
  return result;
}


void __fastcall CommandRegistry::setupOverloadRules(int a1, int a2)
{
  CommandRegistry::setupOverloadRules(a1, a2);
}


int __fastcall CommandRegistry::addEnumValues<EquipmentSlot>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EquipmentSlot>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EquipmentSlot>(void)::id) )
    type_id<CommandRegistry,EquipmentSlot>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EquipmentSlot>(void)::id);
  v25 = type_id<CommandRegistry,EquipmentSlot>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<EquipmentSlot>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


signed int __fastcall CommandRegistry::allocateCommand<EnchantCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  signed int result; // r0@1
  int v4; // r3@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x80u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A038;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  result = 28;
  v4 = (int)v2 + 116;
  *(_DWORD *)v4 = 28;
  *(_DWORD *)(v4 + 4) = -1;
  *(_DWORD *)(v4 + 8) = 1;
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::Symbol::Symbol(int result, const CommandRegistry::Symbol *a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  return result;
}


void __fastcall CommandRegistry::loadRemoteCommands(void *this, int a2, int a3, int a4, void *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, void *a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, void *a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44)
{
  CommandRegistry::loadRemoteCommands((CommandRegistry *)this, (const AvailableCommandsPacket *)a2);
}


signed int __fastcall CommandRegistry::parse<CommandRawText>(int a1, int *a2, int a3)
{
  int v3; // r0@1
  int *v4; // r8@1
  const char *v5; // r6@1
  int v6; // r1@2
  const char *v7; // r0@3
  int v8; // r5@5
  _DWORD *v9; // r0@5
  int *v10; // r4@5
  char *v11; // r7@5
  char *v12; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  char *v16; // [sp+4h] [bp-24h]@11

  v3 = *(_DWORD *)a3;
  v4 = a2;
  v5 = *(const char **)(*(_DWORD *)a3 + 12);
  do
  {
    v6 = v3;
    v3 = *(_DWORD *)(v3 + 4);
  }
  while ( v3 );
  v7 = (const char *)(*(_QWORD *)(v6 + 12) + (*(_QWORD *)(v6 + 12) >> 32));
  if ( v5 == v7 )
    v11 = (char *)&unk_28898CC;
  else
    if ( !v5 )
      sub_21E5884((int)"basic_string::_S_construct null not valid");
    v8 = v7 - v5;
    v9 = sub_21E7E80(v7 - v5, 0);
    v10 = v9;
    v11 = (char *)(v9 + 3);
    if ( v8 == 1 )
      *v11 = *v5;
    else
      _aeabi_memcpy(v9 + 3, v5, v8);
    if ( v10 != &dword_28898C0 )
    {
      v10[2] = 0;
      *v10 = v8;
      v11[v8] = byte_26C67B8[0];
    }
  v16 = v11;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, (int *)&v16);
  v12 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


void __fastcall CommandRegistry::buildOptionalRuleChain(int *a1, int a2, const void **a3, int a4, int a5, unsigned int a6)
{
  char *v6; // r11@3
  int v7; // r7@3
  int v8; // r4@3
  unsigned int v9; // r10@3
  char *v10; // r9@3
  char *v11; // r5@3
  char *v12; // r7@6
  unsigned int v13; // r1@6
  unsigned int v14; // r0@8
  unsigned int v15; // r9@8
  unsigned int v16; // r2@15
  char *v17; // r0@15
  char *v18; // r1@15
  int v19; // t1@16
  int *v20; // [sp+4h] [bp-44h]@3
  int v21; // [sp+8h] [bp-40h]@3
  const void **v22; // [sp+Ch] [bp-3Ch]@3
  int v23; // [sp+10h] [bp-38h]@3
  int v24; // [sp+14h] [bp-34h]@4
  char *v25; // [sp+18h] [bp-30h]@1
  char *v26; // [sp+1Ch] [bp-2Ch]@1
  unsigned int v27; // [sp+20h] [bp-28h]@1

  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( a6 >= 0x40000000 )
    sub_21E5A04("vector::reserve");
  if ( a6 )
  {
    v20 = a1;
    v21 = a2;
    v22 = a3;
    v23 = a4;
    v6 = (char *)operator new(4 * a6);
    v7 = a5;
    v8 = (int)&v6[4 * a6];
    v9 = 0;
    v10 = v6;
    v11 = v6;
    v25 = v6;
    v26 = v6;
    v27 = (unsigned int)&v6[4 * a6];
    do
    {
      CommandRegistry::getParseSymbol(&v24, v7 + 40 * v9);
      if ( v11 == (char *)v8 )
      {
        v12 = 0;
        v13 = (v11 - v6) >> 2;
        if ( !v13 )
          v13 = 1;
        v14 = v13 + ((v11 - v6) >> 2);
        v15 = v13 + ((v11 - v6) >> 2);
        if ( 0 != v14 >> 30 )
          v15 = 0x3FFFFFFF;
        if ( v14 < v13 )
        if ( v15 )
        {
          if ( v15 >= 0x40000000 )
            sub_21E57F4();
          v12 = (char *)operator new(4 * v15);
        }
        v16 = (unsigned int)v12;
        *(_DWORD *)&v12[v11 - v6] = v24;
        v17 = v12;
        v18 = v6;
        if ( v11 != v6 )
          do
          {
            v19 = *(_DWORD *)v18;
            v18 += 4;
            *(_DWORD *)v17 = v19;
            v17 += 4;
          }
          while ( v11 != v18 );
          v16 = (unsigned int)&v12[((v11 - 4 - v6) & 0xFFFFFFFC) + 4];
        v11 = (char *)(v16 + 4);
        if ( v6 )
          operator delete(v6);
        v8 = (int)&v12[4 * v15];
        v25 = v12;
        v26 = v11;
        v10 = v12;
        v6 = v12;
        v7 = a5;
        v27 = v8;
      }
      else
        *(_DWORD *)v11 = v24;
        v11 += 4;
      ++v9;
    }
    while ( v9 < a6 );
  }
  else
    v10 = 0;
  CommandRegistry::buildOptionalRuleChain(v20, v21, v22, v23, (__int64 *)&v25);
  if ( v10 )
    operator delete(v10);
}


int __fastcall CommandRegistry::Overload::Overload(int result, int a2, int a3, int a4)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = -1;
  return result;
}


int __fastcall CommandRegistry::Parser::getErrorMessage(int a1)
{
  return a1 + 68;
}


int __fastcall CommandRegistry::Symbol::fromFactorizationIndex(int result, unsigned int a2)
{
  *(_DWORD *)result = a2 | 0x900000;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<TimeCommand::Mode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TimeCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id);
  v25 = type_id<CommandRegistry,TimeCommand::Mode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TimeCommand::Mode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


signed int __fastcall CommandRegistry::allocateCommand<ClearCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  signed int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x84u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_2719FC0;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  j_CommandItem::CommandItem((int)v2 + 116);
  result = -1;
  *((_DWORD *)v2 + 31) = -1;
  *((_DWORD *)v2 + 32) = -1;
  *v1 = v2;
  return result;
}


__int64 __fastcall CommandRegistry::getEnumData(CommandRegistry *this, const CommandRegistry::ParseToken *a2)
{
  int v2; // r2@1
  __int64 v3; // r0@1
  unsigned int v4; // r12@1
  int v5; // r2@1
  signed int v6; // r3@2

  v2 = *(_DWORD *)a2;
  v3 = *(_QWORD *)(*((_DWORD *)this + 27) + 28 * (*((_DWORD *)a2 + 5) & 0xFC0FFFFF) + 16);
  v4 = *(_DWORD *)(v2 + 20) & 0xFC0FFFFF;
  v5 = (HIDWORD(v3) - (signed int)v3) >> 4;
  while ( 1 )
  {
    v6 = v5;
    if ( v5 < 1 )
      break;
    v5 >>= 1;
    if ( *(_DWORD *)(v3 + 16 * (v6 >> 1)) < v4 )
    {
      LODWORD(v3) = v3 + 16 * v5;
      v5 = v6 - 1 - v5;
      LODWORD(v3) = v3 + 16;
    }
  }
  return *(_QWORD *)(v3 + 8);
}


void **__fastcall CommandRegistry::describe(int *a1, int a2, int *a3)
{
  int v3; // r2@1
  __int64 v4; // r7@3
  int *v5; // r3@3
  int v7; // [sp+Ch] [bp-74h]@3
  const char *v8; // [sp+10h] [bp-70h]@3
  int v9; // [sp+14h] [bp-6Ch]@3
  const char *v10; // [sp+18h] [bp-68h]@3
  int v11; // [sp+1Ch] [bp-64h]@3
  const char *v12; // [sp+20h] [bp-60h]@3
  signed int v13; // [sp+24h] [bp-5Ch]@3
  const char *v14; // [sp+28h] [bp-58h]@3
  signed int v15; // [sp+2Ch] [bp-54h]@3
  const char *v16; // [sp+30h] [bp-50h]@3
  int v17; // [sp+34h] [bp-4Ch]@3
  const char *v18; // [sp+38h] [bp-48h]@3
  __int64 v19; // [sp+3Ch] [bp-44h]@3
  int v20; // [sp+44h] [bp-3Ch]@3
  const char *v21; // [sp+48h] [bp-38h]@3
  int v22; // [sp+4Ch] [bp-34h]@3
  const char *v23; // [sp+50h] [bp-30h]@3
  signed int v24; // [sp+54h] [bp-2Ch]@3
  const char *v25; // [sp+58h] [bp-28h]@3

  v3 = *a3;
  if ( v3 & 0x200000 )
    return (void **)sub_21E8AF4(a1, (int *)(*(_DWORD *)(a2 + 108) + 28 * (v3 & 0xFC0FFFFF)));
  if ( v3 & 0x1000000 )
    return sub_21E94B4((void **)a1, "int");
  v7 = 1048578;
  v8 = "float";
  v9 = 1048577;
  v10 = "int";
  v11 = 1048589;
  v12 = "string";
  v13 = 1048579;
  v14 = "value";
  v15 = 1048590;
  v16 = "x y z";
  HIDWORD(v4) = "command";
  v17 = 1048580;
  v18 = "target";
  LODWORD(v4) = 1048605;
  v19 = v4;
  v20 = 1048593;
  v21 = "message";
  LOWORD(v4) = 19;
  v22 = v4;
  v23 = "text";
  v24 = 1048598;
  v25 = "json";
  v5 = &v7;
  if ( v3 == 1048578 )
    return sub_21E94B4((void **)a1, (const char *)v5[1]);
  if ( v3 == 1048577 )
  {
    v5 = &v9;
  }
  if ( v3 == 1048589 )
    v5 = &v11;
  if ( v3 == 1048579 )
    v5 = &v13;
  if ( v3 == 1048590 )
    v5 = &v15;
  if ( v3 == v17 )
    v5 = &v17;
  if ( v3 == (_DWORD)v19 )
    v5 = (int *)&v19;
  if ( v3 == v20 )
    v5 = &v20;
  if ( v3 == v22 )
    v5 = &v22;
  if ( v3 == 1048598 )
    v5 = &v24;
  return sub_21E94B4((void **)a1, "unknown");
}


void __fastcall CommandRegistry::addPostfix(int *a1, int a2, unsigned int *a3)
{
  unsigned int *v3; // r9@1
  int v4; // r10@1
  int v5; // r4@1
  unsigned __int64 *v6; // r6@1
  int *v7; // r8@1
  const void **v8; // r7@1
  const void **v9; // r4@1
  void *v10; // r0@1
  __int64 v11; // kr00_8@2
  __int64 v12; // r0@4
  int v13; // r1@5
  void *v14; // r0@7
  void *v15; // r0@8
  int v16; // r4@8
  __int64 v17; // r1@8
  __int64 v18; // kr08_8@8
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  int (*v23)(); // [sp+4h] [bp-4Ch]@8
  __int64 v24; // [sp+Ch] [bp-44h]@8
  void *ptr; // [sp+14h] [bp-3Ch]@8
  char *v26; // [sp+18h] [bp-38h]@8
  char *v27; // [sp+1Ch] [bp-34h]@8
  int v28; // [sp+20h] [bp-30h]@8
  void *v29; // [sp+24h] [bp-2Ch]@4
  int v30; // [sp+28h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v6 = (unsigned __int64 *)(a2 + 132);
  v5 = *(_DWORD *)(a2 + 132);
  v7 = a1;
  v8 = *(const void ***)(a2 + 136);
  Util::toLower((void **)&v30, *(_DWORD *)(*a3 - 12), *a3);
  v9 = std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
         v5,
         v8,
         (const void **)&v30);
  v10 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = *(_QWORD *)(v4 + 132);
  if ( v9 == (const void **)HIDWORD(v11) )
    Util::toLower(&v29, *(_DWORD *)(*v3 - 12), *v3);
    v12 = *(_QWORD *)(v4 + 136);
    if ( (_DWORD)v12 == HIDWORD(v12) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(v6, &v29);
      v13 = (int)v29;
      *(_DWORD *)v12 = v29;
      HIDWORD(v12) = &unk_28898CC;
      v29 = &unk_28898CC;
      *(_DWORD *)(v4 + 136) = v12 + 4;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v28 = 1048589;
    v15 = operator new(4u);
    v16 = ((HIDWORD(v11) - (signed int)v11) >> 2) | 0x1000000;
    ptr = v15;
    HIDWORD(v17) = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_invoke;
    LODWORD(v17) = std::_Function_base::_Base_manager<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_manager;
    v27 = (char *)v15 + 4;
    *(_DWORD *)v15 = v16;
    v26 = (char *)v15 + 4;
    v23 = CommandRegistry::collapse;
    v24 = v17;
    v18 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v18 == HIDWORD(v18) )
      std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        (__int64 *)v4,
        &v28,
        (int)&ptr,
        (int)&v23);
      __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        v4,
        (_DWORD *)v18,
      *(_DWORD *)(v4 + 4) += 32;
    *(_BYTE *)(v4 + 360) = 0;
    if ( (_DWORD)v24 )
      ((void (*)(void))v24)();
    if ( ptr )
      operator delete(ptr);
    *v7 = v16;
  else
    *v7 = ((signed int)((signed int)v9 - v11) >> 2) | 0x1000000;
}


signed int __fastcall CommandRegistry::Symbol::isTerminal(CommandRegistry::Symbol *this)
{
  char v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 2);
  result = 0;
  if ( !(v1 & 0x10) )
    result = 1;
  return result;
}


_DWORD *__fastcall CommandRegistry::Symbol::Symbol(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


int __fastcall CommandRegistry::allocateCommand<SayCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  j_MessagingCommand::MessagingCommand((MessagingCommand *)v2, 1, 0);
  *(_DWORD *)v2 = &off_271A174;
  result = j_CommandMessage::CommandMessage((CommandMessage *)((char *)v2 + 20));
  *v1 = v2;
  return result;
}


void __fastcall CommandRegistry::findPostfix(int *a1, int a2, _BYTE **a3)
{
  CommandRegistry::findPostfix(a1, a2, a3);
}


signed int __fastcall CommandRegistry::parseEnum<int>(int a1, _DWORD *a2, int a3)
{
  int v3; // lr@1
  unsigned int v4; // r12@1
  signed int v5; // r2@1
  int v6; // r0@4
  signed int v7; // r3@2

  v3 = *(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16);
  v4 = *(_DWORD *)(*(_DWORD *)a3 + 20) & 0xFC0FFFFF;
  v5 = (signed int)((*(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16) >> 32) - v3) >> 4;
  while ( 1 )
  {
    v7 = v5;
    if ( v5 < 1 )
      break;
    v5 >>= 1;
    if ( *(_DWORD *)(v3 + 16 * (v7 >> 1)) < v4 )
    {
      v6 = v3 + 16 * v5;
      v5 = v7 - 1 - v5;
      v3 = v6 + 16;
    }
  }
  *a2 = *(_DWORD *)(v3 + 8);
  return 1;
}


void __fastcall CommandRegistry::ready(CommandRegistry *this)
{
  if ( *((_BYTE *)this + 360) )
    JUMPOUT(*((_BYTE *)this + 360) == 0, CommandRegistry::buildParseTable);
  else
    j_j_j__ZN15CommandRegistry15buildParseTableEv(this);
}


void __fastcall CommandRegistry::getInvertableFilter(CommandRegistry *this, const CommandRegistry::ParseToken *a2, int a3)
{
  int v3; // r5@1
  CommandRegistry *v4; // r4@1
  int v5; // r2@2
  bool v6; // zf@5
  void *v7; // r0@10
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@20
  signed int v11; // r1@22
  int v12; // [sp+0h] [bp-30h]@15
  int v13; // [sp+4h] [bp-2Ch]@10

  v3 = a3;
  v4 = this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  *((_BYTE *)v4 + 4) = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v3 + 20);
    if ( v5 & 0x200000 )
    {
      CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v13, *(_DWORD *)v3);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v4,
        &v13);
      v7 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v13 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          goto LABEL_26;
      }
      return;
    }
    if ( v5 != 12 )
      break;
    v3 += 4;
    *((_BYTE *)v4 + 4) = 1;
LABEL_8:
    v3 = *(_DWORD *)v3;
    if ( !v3 )
  }
  v6 = v5 == 1048589;
  if ( v5 != 1048589 )
    v6 = (v5 & 0x100000) == 0;
  if ( !v6 )
    goto LABEL_8;
  CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v12, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v4, &v12);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
LABEL_26:
      j_j_j_j__ZdlPv_9(v7);
}


_DWORD *__fastcall CommandRegistry::getParseSymbol(_DWORD *result, int a2)
{
  int v2; // r2@1
  int v3; // r12@2
  int v4; // lr@2
  signed int v5; // r1@2
  _DWORD *v6; // r3@2
  signed int v7; // r2@2
  signed int v8; // r4@4
  signed int v9; // r1@8
  bool v10; // zf@12
  signed int v11; // r2@15
  signed int v12; // r1@15
  signed int v13; // r4@17
  signed int v14; // r1@21
  signed int v15; // r2@27
  signed int v16; // r1@27
  signed int v17; // r4@29
  signed int v18; // r1@33
  signed int v19; // r2@39
  signed int v20; // r1@39
  signed int v21; // r4@41
  signed int v22; // r1@45
  signed int v23; // r2@51
  signed int v24; // r1@51
  signed int v25; // r4@53
  signed int v26; // r1@57
  signed int v27; // r1@63
  signed int v28; // r4@65

  v2 = *(_DWORD *)(a2 + 20);
  if ( v2 != -1 )
    goto LABEL_73;
  v4 = *(_QWORD *)(a2 + 4) >> 32;
  v3 = *(_QWORD *)(a2 + 4);
  v5 = 0;
  v6 = &CommandRegistry::ParseRuleSymbols;
  v7 = 0;
  if ( dword_27ED8F4[0] == v4 )
    v5 = 1;
  v8 = 0;
  if ( !(dword_27ED8F4[0] & 1 | CommandRegistry::ParseRuleSymbols) )
    v8 = 1;
  if ( CommandRegistry::ParseRuleSymbols == v3 && v5 | v8 )
    goto LABEL_74;
  v9 = 0;
  v6 = &dword_27ED8F4[2];
  if ( dword_27ED8F4[3] == v4 )
    v9 = 1;
  if ( !((LOBYTE(dword_27ED8F4[3]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[2]) )
    v7 = 1;
  v10 = dword_27ED8F4[2] == v3;
  if ( dword_27ED8F4[2] == v3 )
    v10 = (v9 | v7) == 1;
  if ( v10 )
  v11 = 0;
  v12 = 0;
  v6 = &dword_27ED8F4[5];
  if ( dword_27ED8F4[6] == v4 )
    v12 = 1;
  v13 = 0;
  if ( !((LOBYTE(dword_27ED8F4[6]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[5]) )
    v13 = 1;
  if ( dword_27ED8F4[5] == v3 && v12 | v13 )
  v14 = 0;
  v6 = &dword_27ED8F4[8];
  if ( dword_27ED8F4[9] == v4 )
    v14 = 1;
  if ( !((LOBYTE(dword_27ED8F4[9]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[8]) )
    v11 = 1;
  if ( dword_27ED8F4[8] == v3 && v14 | v11 )
  v15 = 0;
  v16 = 0;
  v6 = &dword_27ED8F4[11];
  if ( dword_27ED8F4[12] == v4 )
    v16 = 1;
  v17 = 0;
  if ( !((LOBYTE(dword_27ED8F4[12]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[11]) )
    v17 = 1;
  if ( dword_27ED8F4[11] == v3 && v16 | v17 )
  v18 = 0;
  v6 = &dword_27ED8F4[14];
  if ( dword_27ED8F4[15] == v4 )
    v18 = 1;
  if ( !((LOBYTE(dword_27ED8F4[15]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[14]) )
    v15 = 1;
  if ( dword_27ED8F4[14] == v3 && v18 | v15 )
  v19 = 0;
  v20 = 0;
  v6 = &dword_27ED8F4[17];
  if ( dword_27ED8F4[18] == v4 )
    v20 = 1;
  v21 = 0;
  if ( !((LOBYTE(dword_27ED8F4[18]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[17]) )
    v21 = 1;
  if ( dword_27ED8F4[17] == v3 && v20 | v21 )
  v22 = 0;
  v6 = &dword_27ED8F4[20];
  if ( dword_27ED8F4[21] == v4 )
    v22 = 1;
  if ( !((LOBYTE(dword_27ED8F4[21]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[20]) )
    v19 = 1;
  if ( dword_27ED8F4[20] == v3 && v22 | v19 )
  v23 = 0;
  v24 = 0;
  v6 = &dword_27ED8F4[23];
  if ( dword_27ED8F4[24] == v4 )
    v24 = 1;
  v25 = 0;
  if ( !((LOBYTE(dword_27ED8F4[24]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[23]) )
    v25 = 1;
  if ( dword_27ED8F4[23] == v3 && v24 | v25 )
  v26 = 0;
  v6 = &dword_27ED8F4[26];
  if ( dword_27ED8F4[27] == v4 )
    v26 = 1;
  if ( !((LOBYTE(dword_27ED8F4[27]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[26]) )
    v23 = 1;
  if ( dword_27ED8F4[26] == v3 && v26 | v23 )
  v2 = 0;
  v27 = 0;
  v6 = &dword_27ED8F4[29];
  if ( dword_27ED8F4[30] == v4 )
    v27 = 1;
  v28 = 0;
  if ( !((LOBYTE(dword_27ED8F4[30]) | (unsigned __int8)v4) & 1 | dword_27ED8F4[29]) )
    v28 = 1;
  if ( dword_27ED8F4[29] == v3 && v27 | v28 )
LABEL_74:
    *result = v6[2];
  else
LABEL_73:
    *result = v2;
  return result;
}


signed int __fastcall CommandRegistry::isOptionalChainMatch(int a1, _DWORD *a2, int a3)
{
  int v4; // r2@6

  while ( a3 )
  {
    if ( *(_DWORD *)(a3 + 8) != *a2 )
      return 0;
    v4 = *(_DWORD *)(a3 + 4);
    if ( v4 == -1 )
      break;
    ++a2;
    a3 = *(_DWORD *)(a1 + 84) + 12 * v4;
  }
  return 1;
}


int __fastcall CommandRegistry::Enum::Enum(int result, int a2)
{
  int v2; // r2@1
  int v3; // r2@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = &unk_28898CC;
  *(_WORD *)(result + 4) = *(_WORD *)(a2 + 4);
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = 0;
  v2 = *(_DWORD *)(result + 20);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = v2;
  v3 = *(_DWORD *)(result + 24);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v3;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<AgentCommand::Mode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


signed int __fastcall CommandRegistry::parseEnum<DimensionId>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = CommandRegistry::getEnumData(a1, a3);
  return 1;
}


signed int __fastcall CommandRegistry::allocateCommand<GameModeCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  signed int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x7Cu);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A074;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  result = -1;
  *((_DWORD *)v2 + 29) = -1;
  *((_DWORD *)v2 + 30) = -1;
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::Symbol::isPostfix(CommandRegistry::Symbol *this)
{
  return *((_BYTE *)this + 3) & 1;
}


signed int __fastcall CommandRegistry::parseEnum<ListDCommand::DetailMode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


void __fastcall CommandRegistry::autoComplete(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6)
{
  int *v6; // r11@1
  int v7; // r6@1
  int v8; // r5@1
  _DWORD *v9; // r10@1
  int v10; // r9@1
  int v11; // r5@6
  _DWORD *v12; // r0@7
  __int64 v13; // r1@7
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  void *v17; // r0@13
  void *v18; // r0@14
  void *v19; // r0@15
  void *v20; // r0@16
  void *v21; // r0@17
  void *v22; // r0@18
  void *v23; // r0@19
  _DWORD *v24; // r1@21
  int v25; // r2@21
  int v26; // r3@21
  __int64 v27; // r1@28
  int *v28; // r4@28
  int v29; // r4@31
  unsigned int *v30; // r2@32
  signed int v31; // r1@34
  void *v32; // r0@38
  void *v33; // r0@39
  unsigned int *v34; // r2@42
  signed int v35; // r1@44
  unsigned int *v36; // r2@46
  signed int v37; // r1@48
  _DWORD *v38; // r8@58
  unsigned int v39; // r5@60
  int v40; // r11@61
  unsigned int *v41; // r2@63
  signed int v42; // r1@65
  unsigned int *v43; // r2@71
  signed int v44; // r1@73
  unsigned int *v45; // r2@75
  signed int v46; // r1@77
  unsigned int *v47; // r2@79
  signed int v48; // r1@81
  unsigned int *v49; // r2@83
  signed int v50; // r1@85
  unsigned int *v51; // r2@87
  signed int v52; // r1@89
  unsigned int *v53; // r2@91
  signed int v54; // r1@93
  unsigned int *v55; // r2@95
  signed int v56; // r1@97
  unsigned int *v57; // r2@99
  signed int v58; // r1@101
  unsigned int *v59; // r2@111
  signed int v60; // r1@113
  int v61; // r6@119
  int v62; // r4@119
  unsigned int v63; // r10@119
  void *v64; // r0@119
  char v65; // r0@121
  unsigned __int16 v66; // r0@123
  char v67; // r0@126
  unsigned __int16 v68; // r0@128
  int v69; // r0@130
  int v70; // r6@130
  int *v71; // r0@130
  int v72; // r1@167
  int *v73; // r7@171
  int *i; // r8@171
  int v75; // r2@175
  int v76; // r0@175
  int v77; // r3@176
  int v78; // r2@182
  _DWORD *v79; // r0@186
  int v80; // r1@186
  int v81; // r2@186
  int v82; // r3@187
  bool v83; // zf@188
  _DWORD *v84; // r2@188
  int v85; // r6@191
  bool v86; // zf@191
  int v87; // r2@196
  _WORD *v88; // [sp+1Ch] [bp-10Ch]@62
  int v89; // [sp+1Ch] [bp-10Ch]@167
  int v90; // [sp+20h] [bp-108h]@170
  _DWORD *v91; // [sp+24h] [bp-104h]@25
  int v92; // [sp+24h] [bp-104h]@61
  int v93; // [sp+30h] [bp-F8h]@38
  int v94; // [sp+38h] [bp-F0h]@38
  const char *v95; // [sp+3Ch] [bp-ECh]@28
  int v96; // [sp+40h] [bp-E8h]@28
  const char *v97; // [sp+44h] [bp-E4h]@28
  __int64 v98; // [sp+48h] [bp-E0h]@28
  signed int v99; // [sp+50h] [bp-D8h]@28
  const char *v100; // [sp+54h] [bp-D4h]@28
  signed int v101; // [sp+58h] [bp-D0h]@28
  const char *v102; // [sp+5Ch] [bp-CCh]@28
  signed int v103; // [sp+60h] [bp-C8h]@28
  const char *v104; // [sp+64h] [bp-C4h]@28
  signed int v105; // [sp+68h] [bp-C0h]@28
  const char *v106; // [sp+6Ch] [bp-BCh]@28
  signed int v107; // [sp+70h] [bp-B8h]@28
  const char *v108; // [sp+74h] [bp-B4h]@28
  signed int v109; // [sp+78h] [bp-B0h]@28
  const char *v110; // [sp+7Ch] [bp-ACh]@28
  signed int v111; // [sp+80h] [bp-A8h]@28
  const char *v112; // [sp+84h] [bp-A4h]@28
  int v113; // [sp+88h] [bp-A0h]@28
  int v114; // [sp+8Ch] [bp-9Ch]@40
  int v115; // [sp+94h] [bp-94h]@111
  int v116; // [sp+9Ch] [bp-8Ch]@31
  int v117; // [sp+A4h] [bp-84h]@18
  int v118; // [sp+ACh] [bp-7Ch]@18
  int v119; // [sp+B4h] [bp-74h]@16
  int v120; // [sp+BCh] [bp-6Ch]@16
  int v121; // [sp+C4h] [bp-64h]@14
  int v122; // [sp+CCh] [bp-5Ch]@14
  int v123; // [sp+D4h] [bp-54h]@12
  int v124; // [sp+DCh] [bp-4Ch]@12
  int v125; // [sp+E4h] [bp-44h]@10
  int v126; // [sp+ECh] [bp-3Ch]@10
  _DWORD *v127; // [sp+F0h] [bp-38h]@7
  __int64 v128; // [sp+F8h] [bp-30h]@7

  v6 = a2;
  v7 = *a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  if ( *a2 == 4 )
    goto LABEL_9;
  if ( v7 == 1048604 )
  {
    v24 = a3;
    v25 = a5;
    v26 = a6;
LABEL_22:
    j_j_j__ZNK15CommandRegistry19autoCompleteCommandERKSsRK13CommandOriginR23AutoCompleteInformation(
      a1,
      (_BYTE **)v24,
      v25,
      v26);
    return;
  }
  if ( v7 == 1048580 )
    if ( *(_DWORD *)(*a3 - 12) || a4 == 1 )
    {
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)a5 + 24))(a5);
      if ( v11 )
      {
        v12 = operator new(8u);
        LODWORD(v13) = sub_15C3A08;
        *v12 = v9;
        v12[1] = a6;
        HIDWORD(v13) = sub_15C3678;
        v127 = v12;
        v128 = v13;
        Level::forEachPlayer(v11, (int)&v127);
        if ( (_DWORD)v128 )
          ((void (*)(void))v128)();
      }
    }
LABEL_9:
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a5 + 36))(a5) )
      sub_21E94B4((void **)&v126, "@a");
      sub_21E94B4((void **)&v125, "%commands.autocomplete.a");
      CommandRegistry::addIfPartialMatch((_BYTE **)v9, &v126, a6, &v125, 0);
      v14 = (void *)(v125 - 12);
      if ( (int *)(v125 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v125 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
        }
        else
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = (void *)(v126 - 12);
      if ( (int *)(v126 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v126 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      sub_21E94B4((void **)&v124, "@e");
      sub_21E94B4((void **)&v123, "%commands.autocomplete.e");
      CommandRegistry::addIfPartialMatch((_BYTE **)v9, &v124, a6, &v123, 0);
      v16 = (void *)(v123 - 12);
      if ( (int *)(v123 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v123 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v124 - 12);
      if ( (int *)(v124 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v124 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      sub_21E94B4((void **)&v122, "@p");
      sub_21E94B4((void **)&v121, "%commands.autocomplete.p");
      CommandRegistry::addIfPartialMatch((_BYTE **)v9, &v122, a6, &v121, 0);
      v18 = (void *)(v121 - 12);
      if ( (int *)(v121 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v121 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v122 - 12);
      if ( (int *)(v122 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v122 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      sub_21E94B4((void **)&v120, "@r");
      sub_21E94B4((void **)&v119, "%commands.autocomplete.r");
      CommandRegistry::addIfPartialMatch((_BYTE **)v9, &v120, a6, &v119, 0);
      v20 = (void *)(v119 - 12);
      if ( (int *)(v119 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v119 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v120 - 12);
      if ( (int *)(v120 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v120 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
    sub_21E94B4((void **)&v118, "@s");
    sub_21E94B4((void **)&v117, "%commands.autocomplete.s");
    CommandRegistry::addIfPartialMatch((_BYTE **)v9, &v118, a6, &v117, 0);
    v22 = (void *)(v117 - 12);
    if ( (int *)(v117 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v117 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) == &dword_28898C0 )
      return;
    v30 = (unsigned int *)(v118 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      goto LABEL_104;
LABEL_103:
    v31 = (*v30)--;
LABEL_104:
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  if ( v7 & 0x2000000 )
    if ( !*(_DWORD *)(*a3 - 12) && a4 != 1 )
    v29 = *(_DWORD *)(a1 + 96);
    sub_21E94B4((void **)&v116, (const char *)&unk_257BC67);
    CommandRegistry::addIfPartialMatch((_BYTE **)v9, (int *)(v29 + 4 * (v7 & 0x3C0FFFFF)), a6, &v116, 0);
    v23 = (void *)(v116 - 12);
    if ( (int *)(v116 - 12) == &dword_28898C0 )
    v30 = (unsigned int *)(v116 - 4);
    goto LABEL_103;
  if ( !(v7 & 0x200000) )
    v91 = a3;
    if ( (unsigned int)(v7 - 1048589) <= 6 && v7 != 1048590 )
    if ( !(v7 & 0x100000) )
      HIDWORD(v27) = ",";
      v95 = "/";
      v96 = 5;
      v97 = "=";
      LODWORD(v27) = 9;
      v98 = v27;
      v99 = 10;
      v100 = "{";
      v101 = 15;
      v102 = "}";
      v103 = 16;
      v104 = "[";
      v105 = 13;
      v106 = "]";
      v107 = 14;
      v108 = ":";
      v109 = 11;
      v110 = "!";
      v28 = (int *)&v95;
      v111 = 12;
      v112 = "~";
      v113 = 7;
      while ( 1 )
        if ( v7 == v28[1] )
          sub_21E94B4((void **)&v94, (const char *)*v28);
          sub_21E94B4((void **)&v93, (const char *)&unk_257BC67);
          CommandRegistry::addIfPartialMatch((_BYTE **)v91, &v94, a6, &v93, 0);
          v32 = (void *)(v93 - 12);
          if ( (int *)(v93 - 12) != &dword_28898C0 )
          {
            v34 = (unsigned int *)(v93 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v35 = __ldrex(v34);
              while ( __strex(v35 - 1, v34) );
            }
            else
              v35 = (*v34)--;
            if ( v35 <= 0 )
              j_j_j_j__ZdlPv_9(v32);
          }
          v33 = (void *)(v94 - 12);
          if ( (int *)(v94 - 12) != &dword_28898C0 )
            v36 = (unsigned int *)(v94 - 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v33);
        v28 += 2;
        if ( v28 == &v114 )
          break;
        v7 = *v6;
    v72 = *(_QWORD *)a1;
    v89 = *(_QWORD *)a1 >> 32;
    if ( v72 == v89 )
    while ( 1 )
      v90 = v72;
      if ( *(_DWORD *)v72 == v7 )
        break;
LABEL_206:
      v72 = v90 + 32;
      if ( v90 + 32 == v89 )
        return;
      v7 = *v6;
    v73 = (int *)(*(_QWORD *)(v72 + 20) >> 32);
    for ( i = (int *)*(_QWORD *)(v72 + 20); ; ++i )
      if ( i == v73 )
        goto LABEL_206;
      if ( *i != 0x100000 )
LABEL_172:
      ;
    v114 = *i;
    CommandRegistry::autoComplete(v10, (int)&v114, (int)v91, v8, a5, a6);
    v75 = *(_DWORD *)(v10 + 20);
    v76 = v10 + 16;
    if ( v75 )
      v77 = v10 + 16;
        v76 = v75;
        while ( *(_DWORD *)(v76 + 16) < *i )
          v76 = *(_DWORD *)(v76 + 12);
          if ( !v76 )
            v76 = v77;
            goto LABEL_182;
        v75 = *(_DWORD *)(v76 + 8);
        v77 = v76;
      while ( v75 );
LABEL_182:
    v78 = v10 + 16;
    if ( v76 != v10 + 16 )
      if ( *i < *(_DWORD *)(v76 + 16) )
        v76 = v10 + 16;
      v78 = v76;
    v79 = (_DWORD *)(*(_QWORD *)(v78 + 20) >> 32);
    v80 = *(_QWORD *)(v78 + 20);
    v81 = ((signed int)v79 - v80) >> 4;
    if ( v81 >= 1 )
      v82 = v81 + 1;
        v83 = *(_DWORD *)v80 == 0x100000;
        v84 = (_DWORD *)v80;
        if ( *(_DWORD *)v80 != 0x100000 )
          v84 = (_DWORD *)(v80 + 4);
          v83 = *(_DWORD *)(v80 + 4) == 0x100000;
        if ( v83 )
          goto LABEL_205;
        v84 = (_DWORD *)(v80 + 8);
        v85 = *(_DWORD *)(v80 + 8);
        v86 = v85 == 0x100000;
        if ( v85 != 0x100000 )
          v84 = (_DWORD *)(v80 + 12);
          v86 = *(_DWORD *)(v80 + 12) == 0x100000;
        if ( v86 )
        --v82;
        v80 += 16;
      while ( v82 > 1 );
    if ( 1 == ((signed int)v79 - v80) >> 2 )
      v84 = (_DWORD *)v80;
    else
      v87 = ((signed int)v79 - v80) >> 2;
      if ( v87 == 2 )
        if ( v87 != 3 )
          goto LABEL_206;
        if ( *(_DWORD *)v80 == 0x100000 )
        v84 = (_DWORD *)(v80 + 4);
      if ( *v84 == 0x100000 )
        goto LABEL_205;
      ++v84;
    if ( *v84 != 0x100000 )
      goto LABEL_206;
LABEL_205:
    if ( v84 == v79 )
    goto LABEL_172;
  v38 = a3;
  if ( !*(_DWORD *)(*a3 - 12) && a4 != 1 )
  v39 = *(_DWORD *)(a1 + 108) + 28 * (v7 & 0xFC0FFFFF);
  if ( !sub_21E7D6C((const void **)v39, "CommandName") )
    a1 = v10;
    v24 = v9;
    goto LABEL_22;
  v40 = *(_QWORD *)(v39 + 16);
  v92 = *(_QWORD *)(v39 + 16) >> 32;
  if ( v40 != v92 )
    v88 = (_WORD *)(v39 + 4);
    do
      v61 = *(_DWORD *)(v10 + 96);
      v62 = *(_DWORD *)v40;
      sub_21E94B4((void **)&v115, (const char *)&unk_257BC67);
      v63 = CommandRegistry::addIfPartialMatch((_BYTE **)v38, (int *)(v61 + 4 * v62), a6, &v115, 0);
      v64 = (void *)(v115 - 12);
      if ( (int *)(v115 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v115 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v64);
      if ( v63 == 1 )
        v65 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id;
        if ( !(v65 & 1)
          && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id) )
          v66 = typeid_t<CommandRegistry>::count++;
          type_id<CommandRegistry,CommandItem>(void)::id[0] = v66;
          j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id);
        if ( *v88 == type_id<CommandRegistry,CommandItem>(void)::id[0] )
          *(_DWORD *)(*(_DWORD *)(a6 + 8) - 8) = *(_DWORD *)(v40 + 8);
          v67 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
          if ( !(v67 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id) )
            v68 = typeid_t<CommandRegistry>::count++;
            type_id<CommandRegistry,Block const*>(void)::id[0] = v68;
            j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id);
          if ( *v88 == type_id<CommandRegistry,Block const*>(void)::id[0] )
            v69 = *(_DWORD *)(v40 + 8);
            v70 = *(_BYTE *)(v69 + 4);
            v71 = Item::lookupByName((unsigned int *)(v69 + 12), 1);
            if ( v71 )
              v70 = *((_WORD *)v71 + 9);
            *(_DWORD *)(*(_DWORD *)(a6 + 8) - 8) = v70;
      v40 += 16;
    while ( v40 != v92 );
}


signed int __fastcall CommandRegistry::parse<CommandRegistry::Enum>(int a1, int *a2, int a3)
{
  EntityInteraction::setInteractText(
    a2,
    (int *)(*(_DWORD *)(a1 + 96) + 4 * (*(_DWORD *)(*(_DWORD *)a3 + 20) & 0x3C0FFFFF)));
  return 1;
}


CommandRegistry::Signature *__fastcall CommandRegistry::Signature::~Signature(CommandRegistry::Signature *this)
{
  CommandRegistry::Signature *v1; // r4@1
  int v2; // r8@1
  int v3; // r10@1
  int v4; // r4@3
  int v5; // r7@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // r1@13
  void *v9; // r0@13
  int v10; // r1@22
  void *v11; // r0@22
  int *v12; // r0@23
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  CommandRegistry::Signature *v18; // [sp+4h] [bp-34h]@2

  v1 = this;
  v3 = *((_QWORD *)this + 1) >> 32;
  v2 = *((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    v18 = this;
    do
    {
      v4 = *(_QWORD *)(v2 + 12) >> 32;
      v5 = *(_QWORD *)(v2 + 12);
      if ( v5 != v4 )
      {
        do
        {
          v8 = *(_DWORD *)(v5 + 12);
          v9 = (void *)(v8 - 12);
          if ( (int *)(v8 - 12) != &dword_28898C0 )
          {
            v6 = (unsigned int *)(v8 - 4);
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
              j_j_j_j__ZdlPv_9(v9);
          }
          v5 += 40;
        }
        while ( v5 != v4 );
        v5 = *(_DWORD *)(v2 + 12);
      }
      if ( v5 )
        operator delete((void *)v5);
      v2 += 28;
    }
    while ( v2 != v3 );
    v1 = v18;
    v2 = *((_DWORD *)v18 + 2);
  }
  if ( v2 )
    operator delete((void *)v2);
  v10 = *((_DWORD *)v1 + 1);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (int *)(*(_DWORD *)v1 - 12);
  if ( v12 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v1;
}


char *__fastcall CommandRegistry::getAliases(int a1, int a2, const void **a3)
{
  int v3; // r8@1
  int v4; // r9@1
  int v5; // r0@1
  int v6; // r6@1
  char *result; // r0@1
  int *i; // r7@2
  int *v9; // r10@2
  int v10; // r4@3
  int v11; // r5@3
  _DWORD *v12; // r0@3
  size_t v13; // r2@3
  __int64 v14; // kr08_8@5
  int *v15; // r1@5

  v3 = a2;
  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = CommandRegistry::findCommand(a2, a3);
  v6 = v5;
  result = (char *)*(_BYTE *)(v5 + 30);
  if ( (unsigned __int8)result & 0x20 )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)v4,
      (int *)v6);
    result = (char *)(*(_DWORD *)(v3 + 108) + 28 * (*(_DWORD *)(v6 + 28) & 0xFC0FFFFF));
    v9 = (int *)(*((_QWORD *)result + 2) >> 32);
    for ( i = (int *)*((_QWORD *)result + 2); v9 != i; i += 4 )
    {
      v10 = *i;
      v11 = *(_DWORD *)(v3 + 96);
      v12 = *(_DWORD **)(v11 + 4 * *i);
      v13 = *(v12 - 3);
      if ( v13 == *(_DWORD *)(*(_DWORD *)v6 - 12) )
      {
        result = (char *)memcmp(v12, *(const void **)v6, v13);
        if ( !result )
          continue;
      }
      v14 = *(_QWORD *)(v4 + 4);
      v15 = (int *)(v11 + 4 * v10);
      if ( (_DWORD)v14 == HIDWORD(v14) )
        result = std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                   (unsigned __int64 *)v4,
                   v15);
      else
        result = (char *)(sub_21E8AF4((int *)v14, v15) + 1);
        *(_DWORD *)(v4 + 4) = result;
    }
  }
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<WeatherCommand::WeatherRequest>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::collapseOn(int result, int *a2, _DWORD *a3)
{
  int v3; // r1@1

  v3 = *a2;
  if ( v3 == *a3 )
    *(_DWORD *)(result + 20) = v3;
  else
    result = 0;
  return result;
}


void __fastcall CommandRegistry::buildParseTable(CommandRegistry *this)
{
  CommandRegistry::buildParseTable(this);
}


int __fastcall CommandRegistry::allocateCommand<TimeCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  int v3; // r3@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x24u);
  j_Command::Command(v2);
  v3 = (int)v2 + 20;
  *(_DWORD *)v2 = &off_271A28C;
  result = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 2;
  *(_DWORD *)(v3 + 8) = 6;
  *((_DWORD *)v2 + 8) = 0;
  *v1 = v2;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<ReplaceItemCommand::TargetType>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::getAutoCompleteOptions(_DWORD *a1, int a2, int a3, int *a4, unsigned int a5)
{
  int *v5; // r8@1
  int v6; // r7@1
  unsigned int v7; // r4@1
  CommandLexer *v8; // r10@1
  signed int v9; // r9@1
  signed int v10; // r5@1
  unsigned int v11; // r6@1
  int v12; // r1@5
  void *v13; // r0@5
  void *v14; // r11@6
  int v15; // r4@6
  int *v16; // r6@6
  int v17; // r10@6
  int v18; // r8@6
  int v19; // r5@8
  int v20; // r2@8
  int v21; // r1@8
  int i; // r0@8
  int v23; // r2@14
  _DWORD *v24; // r0@18
  int v25; // r1@18
  int v26; // r2@18
  int v27; // r3@19
  bool v28; // zf@20
  _DWORD *v29; // r2@20
  int v30; // r5@23
  bool v31; // zf@23
  int v32; // r2@28
  int v33; // r0@40
  int *v34; // r6@40
  char v35; // r1@40
  int v36; // r1@43
  int v37; // r4@45
  int v38; // r7@47
  int v39; // r5@48
  void *v40; // r0@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int v46; // [sp+8h] [bp-A0h]@5
  int v47; // [sp+Ch] [bp-9Ch]@6
  _DWORD *v48; // [sp+10h] [bp-98h]@1
  int v49; // [sp+14h] [bp-94h]@1
  int v50; // [sp+18h] [bp-90h]@8
  int v51; // [sp+1Ch] [bp-8Ch]@5
  int v52; // [sp+20h] [bp-88h]@5
  int v53; // [sp+24h] [bp-84h]@1
  int v54; // [sp+28h] [bp-80h]@1
  int *v55; // [sp+30h] [bp-78h]@6
  int v56; // [sp+38h] [bp-70h]@6
  int v57; // [sp+3Ch] [bp-6Ch]@6
  int v58; // [sp+40h] [bp-68h]@6
  int v59; // [sp+50h] [bp-58h]@1
  int v60; // [sp+54h] [bp-54h]@1
  int v61; // [sp+58h] [bp-50h]@1
  int v62; // [sp+5Ch] [bp-4Ch]@1
  void *v63; // [sp+60h] [bp-48h]@1
  int v64; // [sp+64h] [bp-44h]@1
  void *v65; // [sp+68h] [bp-40h]@1
  int v66; // [sp+6Ch] [bp-3Ch]@1
  int v67; // [sp+70h] [bp-38h]@1
  int v68; // [sp+74h] [bp-34h]@1
  int v69; // [sp+78h] [bp-30h]@1
  __int16 v70; // [sp+7Ch] [bp-2Ch]@1

  v5 = a4;
  v48 = a1;
  v6 = a2;
  v49 = a3;
  v7 = *(_DWORD *)(*a4 - 12);
  v8 = (CommandLexer *)*(_BYTE *)(*a4 + v7 - 1);
  v9 = CommandLexer::isIdentifierCharacter(v8, a2);
  v53 = v6;
  _aeabi_memclr4(&v54, 40);
  v10 = 0;
  std::_Deque_base<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>,std::allocator<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>>>::_M_initialize_map(
    (int)&v54,
    0);
  v11 = a5;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = v6;
  v63 = &unk_28898CC;
  v64 = 0;
  v65 = &unk_28898CC;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 3;
  v70 = 0;
  if ( v8 != (CommandLexer *)64 )
    v10 = 1;
  if ( v7 < a5 )
    v11 = v7;
  sub_21E8AF4(&v51, v5);
  CommandRegistry::parsePartialCommand((void **)&v52, v12, (int)&v53, &v51, v11, 1);
  v46 = v11;
  v13 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v42 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    }
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  v14 = operator new(0x10u);
  v15 = v10 & (v9 ^ 1);
  *(_DWORD *)v14 = 0;
  *((_DWORD *)v14 + 1) = 0;
  *((_DWORD *)v14 + 2) = 0;
  *((_DWORD *)v14 + 3) = 0;
  v16 = v55;
  *v48 = v14;
  v17 = v56;
  v18 = v58;
  v47 = v57;
  while ( v16 != (int *)v18 )
    v19 = *v16;
    v50 = *v16;
    CommandRegistry::autoComplete(v6, (int)&v50, (int)&v52, v15, v49, (int)v14);
    v20 = *(_DWORD *)(v6 + 20);
    v21 = v6 + 16;
    for ( i = v6 + 16; v20; v21 = i )
      i = v20;
      while ( *(_DWORD *)(i + 16) < v19 )
      {
        i = *(_DWORD *)(i + 12);
        if ( !i )
        {
          i = v21;
          goto LABEL_14;
        }
      }
      v20 = *(_DWORD *)(i + 8);
LABEL_14:
    v23 = v6 + 16;
    if ( i != v6 + 16 )
      if ( v19 < *(_DWORD *)(i + 16) )
        i = v6 + 16;
      v23 = i;
    v24 = (_DWORD *)(*(_QWORD *)(v23 + 20) >> 32);
    v25 = *(_QWORD *)(v23 + 20);
    v26 = ((signed int)v24 - v25) >> 4;
    if ( v26 >= 1 )
      v27 = v26 + 1;
        v28 = *(_DWORD *)v25 == 0x100000;
        v29 = (_DWORD *)v25;
        if ( *(_DWORD *)v25 != 0x100000 )
          v29 = (_DWORD *)(v25 + 4);
          v28 = *(_DWORD *)(v25 + 4) == 0x100000;
        if ( v28 )
          goto LABEL_37;
        v29 = (_DWORD *)(v25 + 8);
        v30 = *(_DWORD *)(v25 + 8);
        v31 = v30 == 0x100000;
        if ( v30 != 0x100000 )
          v29 = (_DWORD *)(v25 + 12);
          v31 = *(_DWORD *)(v25 + 12) == 0x100000;
        if ( v31 )
        --v27;
        v25 += 16;
      while ( v27 > 1 );
    if ( 1 == ((signed int)v24 - v25) >> 2 )
      v29 = (_DWORD *)v25;
      v32 = ((signed int)v24 - v25) >> 2;
      if ( v32 == 2 )
      else
        if ( v32 != 3 )
          break;
        if ( *(_DWORD *)v25 == 0x100000 )
        v29 = (_DWORD *)(v25 + 4);
      if ( *v29 == 0x100000 )
        goto LABEL_37;
      ++v29;
    if ( *v29 != 0x100000 )
      break;
LABEL_37:
    if ( v29 == v24 )
    v16 += 2;
    if ( v16 == (int *)v17 )
      v16 = *(int **)(v47 + 4);
      v47 += 4;
      v17 = (int)(v16 + 128);
  v34 = (int *)(*(_QWORD *)((char *)v14 + 4) >> 32);
  v33 = *(_QWORD *)((char *)v14 + 4);
  v35 = 0;
  if ( (int *)v33 != v34 )
    v35 = 1;
  *(_BYTE *)v14 = v35;
    v36 = v46 - *(_DWORD *)(v52 - 12);
    do
      *(_DWORD *)(v33 + 20) = v36;
      v33 += 36;
    while ( v34 != (int *)v33 );
  v37 = *((_DWORD *)v14 + 1);
  if ( (int *)v37 != v34 )
    sub_15C3C60(*((_DWORD *)v14 + 1), v34, 2 * (31 - __clz(954437177 * (((signed int)v34 - v37) >> 2))), 0);
    if ( (signed int)v34 - v37 <= 576 )
      sub_15C4AD8((const void **)v37, (const void **)v34);
      v38 = v37 + 576;
      sub_15C4AD8((const void **)v37, (const void **)(v37 + 576));
      if ( (int *)(v37 + 576) != v34 )
        v39 = (int)(v34 - 144);
        do
          v34 = (int *)((unsigned int)v34 & 0xFFFFFF00);
          sub_15C4E0C(v38);
          v38 = v37 + 612;
          v28 = v39 == v37 + 36;
          v37 += 36;
        while ( !v28 );
  v40 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v52 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  return CommandRegistry::Parser::~Parser((CommandRegistry::Parser *)&v53);
}


signed int __fastcall CommandRegistry::getCommandStatus(int a1, int *a2)
{
  int *v2; // r6@1
  int v3; // r5@1
  unsigned int i; // r4@1
  CommandLexer *v5; // r0@3
  char *v6; // r0@5
  unsigned int v7; // r3@5
  int v8; // r4@6
  void *v9; // r0@6
  signed int result; // r0@8
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  int v13; // [sp+4h] [bp-1Ch]@6

  v2 = a2;
  v3 = a1;
  for ( i = 0; ; ++i )
  {
    v5 = (CommandLexer *)*(_BYTE *)(*v2 + i);
    if ( v5 != (CommandLexer *)47 && CommandLexer::isSpace(v5, (char)a2) != 1 )
      break;
  }
  v6 = sub_21E77E4(v2, 32, i);
  v7 = *(_DWORD *)(*v2 - 12);
  if ( v7 < i )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", i, v7);
  sub_21E9040((void **)&v13, v2, i, (unsigned int)&v6[-i]);
  v8 = CommandRegistry::findCommand(v3, (const void **)&v13);
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v8 )
    result = 2;
    if ( *(_BYTE *)(v8 + 48) )
      result = 1;
  else
    result = 0;
  return result;
}


void __fastcall CommandRegistry::registerOverloadInternal(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r11@1
  int v5; // r5@2
  void **v6; // r6@2
  int *v7; // r8@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  signed int v10; // r1@11
  signed int v11; // r0@14
  int v12; // r2@15
  int v13; // r0@15
  int v14; // r3@16
  int v15; // r1@26
  const char *v16; // r1@31
  int v17; // r6@33
  int v18; // r0@33
  int v19; // r9@33
  void *v20; // r8@34
  int v21; // r10@34
  size_t v22; // r7@34
  _DWORD *v23; // r0@36
  size_t v24; // r4@36
  size_t v25; // r2@36
  int v26; // r0@38
  void *v27; // r0@45
  unsigned int *v28; // r2@46
  char *v29; // r7@51
  _DWORD *v30; // r1@51
  unsigned int v31; // r4@51
  unsigned int v32; // r5@51
  size_t v33; // r2@51
  int v34; // r0@53
  char v35; // r0@60
  unsigned __int16 v36; // r0@62
  int v37; // [sp+4h] [bp-5Ch]@1
  int v38; // [sp+14h] [bp-4Ch]@1
  int v39; // [sp+1Ch] [bp-44h]@1
  int v40; // [sp+20h] [bp-40h]@2
  int v41; // [sp+24h] [bp-3Ch]@45
  int v42; // [sp+2Ch] [bp-34h]@2
  void *s2; // [sp+34h] [bp-2Ch]@33

  v3 = a1;
  v37 = a2;
  v38 = a1;
  v4 = *(_QWORD *)(a3 + 12);
  v39 = *(_QWORD *)(a3 + 12) >> 32;
  if ( v4 != v39 )
  {
    v40 = a1 + 148;
    v5 = a1 + 232;
    v6 = (void **)&v42;
    v7 = &dword_28898C0;
    do
    {
      v11 = *(_DWORD *)(v4 + 24);
      if ( !v11 )
      {
        v12 = *(_DWORD *)(v3 + 236);
        v13 = v5;
        if ( v12 )
        {
          v14 = v5;
          do
          {
            v13 = v12;
            while ( *(_WORD *)(v13 + 16) < (unsigned int)*(_WORD *)v4 )
            {
              v13 = *(_DWORD *)(v13 + 12);
              if ( !v13 )
              {
                v13 = v14;
                goto LABEL_22;
              }
            }
            v12 = *(_DWORD *)(v13 + 8);
            v14 = v13;
          }
          while ( v12 );
        }
LABEL_22:
        if ( v13 == v5 )
          v11 = 0;
        else
          if ( *(_WORD *)v4 < (unsigned int)*(_WORD *)(v13 + 16) )
            v13 = v5;
          if ( v13 == v5 )
            v11 = 0;
          else
            v15 = *(_DWORD *)(v13 + 20);
            if ( v15 == -1 )
              v11 = 0;
            else
              v11 = 1;
              *(_DWORD *)(v4 + 24) = 1;
              *(_DWORD *)(v4 + 16) = *(_DWORD *)(*(_DWORD *)(v3 + 108) + 28 * v15);
      }
      v16 = *(const char **)(v4 + 16);
      if ( v16 )
        if ( v11 == 1 )
          v17 = v5;
          sub_21E94B4(&s2, v16);
          v18 = *(_DWORD *)(v3 + 152);
          v19 = v40;
          if ( v18 )
            v20 = s2;
            v21 = v40;
            v22 = *((_DWORD *)s2 - 3);
            do
              v19 = v18;
              while ( 1 )
                v23 = *(_DWORD **)(v19 + 16);
                v24 = *(v23 - 3);
                v25 = *(v23 - 3);
                if ( v24 > v22 )
                  v25 = v22;
                v26 = memcmp(v23, v20, v25);
                if ( !v26 )
                  v26 = v24 - v22;
                if ( v26 >= 0 )
                  break;
                v19 = *(_DWORD *)(v19 + 12);
                if ( !v19 )
                {
                  v19 = v21;
                  goto LABEL_50;
                }
              v18 = *(_DWORD *)(v19 + 8);
              v21 = v19;
            while ( v18 );
LABEL_50:
          if ( v19 == v40 )
            v29 = (char *)s2;
            v19 = v40;
            v30 = *(_DWORD **)(v19 + 16);
            v31 = *((_DWORD *)s2 - 3);
            v32 = *(v30 - 3);
            v33 = *((_DWORD *)s2 - 3);
            if ( v31 > v32 )
              v33 = *(v30 - 3);
            v34 = memcmp(s2, v30, v33);
            if ( !v34 )
              v34 = v31 - v32;
            if ( v34 < 0 )
              v19 = v40;
          v5 = v17;
          v7 = &dword_28898C0;
          if ( (int *)(v29 - 12) != &dword_28898C0 )
            v8 = (unsigned int *)(v29 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
              v9 = (*v8)--;
            if ( v9 <= 0 )
              j_j_j_j__ZdlPv_9(v29 - 12);
          *(_DWORD *)(v4 + 20) = *(_DWORD *)(v19 + 20) | 0x300000;
          v35 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
          __dmb();
          v3 = v38;
          if ( !(v35 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
            v36 = typeid_t<CommandRegistry>::count++;
            type_id<CommandRegistry,std::string>(void)::id[0] = v36;
            j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
          v6 = (void **)&v42;
          if ( *(_WORD *)v4 != type_id<CommandRegistry,std::string>(void)::id[0] )
            *(_QWORD *)(v4 + 4) = *(_QWORD *)(*(_DWORD *)(v38 + 108) + 28 * *(_DWORD *)(v19 + 20) + 8);
          sub_21E94B4(v6, v16);
          CommandRegistry::addPostfix(&v41, v3, (unsigned int *)v6);
          *(_DWORD *)(v4 + 20) = v41;
          v27 = (void *)(v42 - 12);
          if ( (int *)(v42 - 12) != v7 )
            v28 = (unsigned int *)(v42 - 4);
                v10 = __ldrex(v28);
              while ( __strex(v10 - 1, v28) );
              v10 = (*v28)--;
            if ( v10 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
      v4 += 40;
    }
    while ( v4 != v39 );
  }
  CommandRegistry::setupOverloadRules(v3, v37);
}


_BOOL4 __fastcall CommandRegistry::hasCommands(CommandRegistry *this)
{
  return *((_DWORD *)this + 56) != 0;
}


void __fastcall CommandRegistry::popState(CommandRegistry *this)
{
  CommandRegistry::popState(this);
}


_DWORD *__fastcall CommandRegistry::Symbol::Symbol(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


signed int __fastcall CommandRegistry::parse<Json::Value>(Json::Features *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // r4@1
  int v7; // r9@1
  _DWORD *v8; // r1@1
  int v9; // r0@2
  _DWORD *v10; // r2@4
  const char *v11; // r1@5
  const char *v12; // r5@5
  int v13; // r6@7
  _DWORD *v14; // r0@7
  int *v15; // r4@7
  char *v16; // r7@7
  char *v17; // r4@9
  _BYTE *v18; // r0@9
  char *v19; // r0@14
  signed int v20; // r4@16
  void *v21; // r0@17
  char *v22; // r0@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  int v30; // [sp+4h] [bp-A4h]@17
  char *v31; // [sp+Ch] [bp-9Ch]@14
  char *v32; // [sp+10h] [bp-98h]@3
  __int16 v33; // [sp+16h] [bp-92h]@1
  char v34; // [sp+18h] [bp-90h]@1

  v6 = a3;
  v7 = a2;
  v33 = Json::Features::strictMode(a1);
  Json::Reader::Reader((Json::Reader *)&v34, (const Json::Features *)&v33);
  v8 = *(_DWORD **)(v6 + 4);
  do
  {
    v9 = v6;
    v6 = *(_DWORD *)v6;
  }
  while ( v6 );
  v32 = (char *)&unk_28898CC;
  if ( v8 )
    do
    {
      v10 = v8;
      v8 = (_DWORD *)*v8;
    }
    while ( v8 );
    v11 = (const char *)v10[3];
    v12 = *(const char **)(v9 + 12);
    if ( v12 == v11 )
      v16 = (char *)&unk_28898CC;
    else
      if ( !v12 )
        sub_21E5884((int)"basic_string::_S_construct null not valid");
      v13 = v11 - v12;
      v14 = sub_21E7E80(v11 - v12, 0);
      v15 = v14;
      v16 = (char *)(v14 + 3);
      if ( v13 == 1 )
        *v16 = *v12;
      else
        _aeabi_memcpy(v14 + 3, v12, v13);
      if ( v15 != &dword_28898C0 )
      {
        v15[2] = 0;
        *v15 = v13;
        v16[v13] = byte_26C67B8[0];
      }
    v31 = v16;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v32,
      (int *)&v31);
    v19 = v31 - 12;
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  else
    v17 = *(char **)(v9 + 12);
    v18 = (_BYTE *)strlen(*(const char **)(v9 + 12));
    sub_21E8190((void **)&v32, v17, v18);
  if ( Json::Reader::parse((int)&v34, (int *)&v32, v7, 0) )
    v20 = 1;
    Json::Reader::getFormattedErrorMessages((Json::Reader *)&v30, (int)&v34);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(a6, &v30);
    v21 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v30 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v20 = 0;
  v22 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  Json::Reader::~Reader((Json::Reader *)&v34);
  return v20;
}


int __fastcall CommandRegistry::autoCompleteCommand(int result, _BYTE **a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r9@1
  char v8; // r6@2
  int v9; // r0@2
  bool v10; // zf@2
  int v11; // r0@7
  char *v12; // r0@8
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  int *v15; // r6@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  int v18; // r11@23
  int v19; // r10@23
  int v20; // r8@23
  char *v21; // r0@23
  int *v22; // [sp+10h] [bp-60h]@13
  _BYTE **v23; // [sp+1Ch] [bp-54h]@1
  int v24; // [sp+20h] [bp-50h]@1
  char v25; // [sp+24h] [bp-4Ch]@7
  const void **v26; // [sp+28h] [bp-48h]@14
  char *v27; // [sp+2Ch] [bp-44h]@8
  char *v28; // [sp+30h] [bp-40h]@15

  v23 = a2;
  v24 = result;
  v4 = result + 208;
  v5 = *(_DWORD *)(result + 216);
  v6 = a4;
  v7 = a3;
  if ( v5 != result + 208 )
  {
    do
    {
      v8 = *(_BYTE *)(v5 + 52);
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 44))(v7);
      v10 = (v8 & 2) == 0;
      if ( v8 & 2 )
        v10 = v9 == 1;
      if ( v10 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 36))(v7) >= (unsigned int)*(_BYTE *)(v5 + 40) )
      {
        v11 = *(_DWORD *)(v5 + 48);
        v25 = *(_BYTE *)(v5 + 52) & 1;
        if ( v11 & 0x200000 )
        {
          v15 = (int *)*(_QWORD *)(*(_DWORD *)(v24 + 108) + 28 * (v11 & 0xFC0FFFFF) + 16);
          v22 = (int *)(*(_QWORD *)(*(_DWORD *)(v24 + 108) + 28 * (v11 & 0xFC0FFFFF) + 16) >> 32);
          if ( v15 != v22 )
          {
            v26 = (const void **)(v5 + 24);
            do
            {
              v18 = v4;
              v19 = *v15;
              v20 = *(_DWORD *)(v24 + 96);
              v28 = (char *)&unk_28898CC;
              sub_21E6FCC((const void **)&v28, *((_DWORD *)*v26 - 3) + 1);
              sub_21E7408((const void **)&v28, "%", 1u);
              sub_21E72F0((const void **)&v28, v26);
              CommandRegistry::addIfPartialMatch(v23, (int *)(v20 + 4 * v19), v6, (int *)&v28, v25);
              v4 = v18;
              v21 = v28 - 12;
              if ( (int *)(v28 - 12) != &dword_28898C0 )
              {
                v16 = (unsigned int *)(v28 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v17 = __ldrex(v16);
                  while ( __strex(v17 - 1, v16) );
                }
                else
                  v17 = (*v16)--;
                if ( v17 <= 0 )
                  j_j_j_j__ZdlPv_9(v21);
              }
              v15 += 4;
            }
            while ( v15 != v22 );
          }
        }
        else
          v27 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v27, *(_DWORD *)(*(_DWORD *)(v5 + 24) - 12) + 1);
          sub_21E7408((const void **)&v27, "%", 1u);
          sub_21E72F0((const void **)&v27, (const void **)(v5 + 24));
          CommandRegistry::addIfPartialMatch(v23, (int *)(v5 + 20), v6, (int *)&v27, v25);
          v12 = v27 - 12;
          if ( (int *)(v27 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v27 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
            else
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j__ZdlPv_9(v12);
      }
      result = sub_21D4820(v5);
      v5 = result;
    }
    while ( result != v4 );
  }
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<bool>(int a1, _BYTE *a2, int a3)
{
  int v3; // lr@1
  unsigned int v4; // r12@1
  signed int v5; // r2@1
  int v6; // r0@4
  signed int v7; // r3@2
  int v8; // r0@5

  v3 = *(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16);
  v4 = *(_DWORD *)(*(_DWORD *)a3 + 20) & 0xFC0FFFFF;
  v5 = (signed int)((*(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16) >> 32) - v3) >> 4;
  while ( 1 )
  {
    v7 = v5;
    if ( v5 < 1 )
      break;
    v5 >>= 1;
    if ( *(_DWORD *)(v3 + 16 * (v7 >> 1)) < v4 )
    {
      v6 = v3 + 16 * v5;
      v5 = v7 - 1 - v5;
      v3 = v6 + 16;
    }
  }
  v8 = *(_QWORD *)(v3 + 8) | (*(_QWORD *)(v3 + 8) >> 32);
  if ( *(_QWORD *)(v3 + 8) )
    LOBYTE(v8) = 1;
  *a2 = v8;
  return 1;
}


int __fastcall CommandRegistry::addEnumValues<ExecuteCommand::Mode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id) )
    type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id);
  v25 = type_id<CommandRegistry,ExecuteCommand::Mode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<ExecuteCommand::Mode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::addEnumValues<FillCommand::FillMode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,FillCommand::FillMode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,FillCommand::FillMode>(void)::id) )
    type_id<CommandRegistry,FillCommand::FillMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,FillCommand::FillMode>(void)::id);
  v25 = type_id<CommandRegistry,FillCommand::FillMode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<FillCommand::FillMode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::allocateCommand<KillCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x74u);
  j___aeabi_memclr4_0((int)v2, 116);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A0C0;
  result = j_CommandSelector<Entity>::CommandSelector((int)v2 + 20);
  *v1 = v2;
  return result;
}


void __fastcall CommandRegistry::addEnumValuesToExisting(int a1, int a2, int a3, int a4, int a5, int a6, void *a7, int a8, int a9, int a10, char a11)
{
  int v11; // r11@1
  int v12; // r3@1
  int v13; // r4@1
  int v14; // r6@1
  int v15; // r9@1
  signed int v16; // r5@1
  unsigned int v17; // r10@1
  int v18; // r3@2
  int v19; // t1@2
  _DWORD *v20; // r7@4
  _DWORD *v21; // r0@8
  int v22; // r1@9
  int v23; // r2@9
  int v24; // r3@9
  int v25; // r4@9
  int v26; // r0@14
  int *v27; // r6@14
  unsigned int v28; // r1@15
  int *v29; // r0@16
  unsigned int v30; // r2@16
  int v31; // r0@19
  int v32; // r4@25
  _DWORD *v33; // r0@29
  int v34; // r7@31
  int *v35; // r6@32
  int v36; // r2@33
  int *v37; // r0@33
  int *v38; // r3@34
  unsigned int v39; // r9@44
  void *v40; // r0@44
  __int64 v41; // kr08_8@44
  unsigned int *v42; // r0@51
  unsigned int v43; // r2@52
  unsigned int v44; // r3@52
  int *v45; // r4@52
  unsigned int v46; // r6@52
  unsigned int *v47; // r4@55
  _BYTE *v48; // r5@55
  unsigned int **v49; // [sp+Ch] [bp-7Ch]@1
  void **v50; // [sp+10h] [bp-78h]@1
  int v51; // [sp+20h] [bp-68h]@3
  int v52; // [sp+20h] [bp-68h]@32
  _DWORD *v53; // [sp+24h] [bp-64h]@4
  unsigned int **v54; // [sp+24h] [bp-64h]@13
  unsigned __int64 *v55; // [sp+28h] [bp-60h]@1
  int v56; // [sp+28h] [bp-60h]@31
  void *(__fastcall *v57)(_DWORD *, int *); // [sp+2Ch] [bp-5Ch]@32
  int (__fastcall *v58)(int *, int *, int); // [sp+34h] [bp-54h]@44
  int (__fastcall *v59)(int (__fastcall **)(int, int *), int, int *); // [sp+38h] [bp-50h]@44
  void *ptr; // [sp+3Ch] [bp-4Ch]@44
  char *v61; // [sp+40h] [bp-48h]@44
  char *v62; // [sp+44h] [bp-44h]@44
  int v63; // [sp+48h] [bp-40h]@44
  char v64; // [sp+4Ch] [bp-3Ch]@57
  int v65; // [sp+50h] [bp-38h]@1
  int v66; // [sp+54h] [bp-34h]@1
  int *v67; // [sp+58h] [bp-30h]@1
  int *v68; // [sp+5Ch] [bp-2Ch]@1
  int v69; // [sp+60h] [bp-28h]@1

  v11 = a1;
  v55 = (unsigned __int64 *)a3;
  v69 = 0;
  v65 = 0;
  v66 = 0;
  v67 = &v65;
  v68 = &v65;
  v12 = *(_DWORD *)(a1 + 108) + 28 * a2;
  v13 = *(_DWORD *)(a1 + 108) + 28 * a2;
  v14 = *(_DWORD *)(v13 + 16);
  v50 = (void **)(v13 + 16);
  v15 = *(_DWORD *)(v13 + 20);
  v49 = (unsigned int **)(v13 + 20);
  v16 = v15 - v14;
  v17 = ((signed int)((*(_QWORD *)a3 >> 32) - *(_QWORD *)a3) >> 4) + ((v15 - v14) >> 4);
  if ( v17 >= 0x10000000 )
    sub_21E5A04("vector::reserve");
  v19 = *(_DWORD *)(v12 + 24);
  v18 = v12 + 24;
  if ( (v19 - v14) >> 4 >= v17 )
  {
    v51 = a2;
    v20 = *(_DWORD **)(v13 + 16);
  }
  else
    if ( v17 )
    {
      v53 = (_DWORD *)v18;
      v20 = operator new(16 * v17);
    }
    else
      v20 = 0;
    if ( v14 != v15 )
      v21 = v20;
      do
      {
        v22 = *(_DWORD *)v14;
        v23 = *(_DWORD *)(v14 + 4);
        v24 = *(_DWORD *)(v14 + 8);
        v25 = *(_DWORD *)(v14 + 12);
        v14 += 16;
        *v21 = v22;
        v21[1] = v23;
        v21[2] = v24;
        v21[3] = v25;
        v21 += 4;
      }
      while ( v15 != v14 );
    if ( *v50 )
      operator delete(*v50);
    v15 = (int)&v20[4 * (v16 >> 4)];
    v18 = (int)v53;
    *v50 = v20;
    *v49 = (unsigned int *)v15;
    *v53 = &v20[4 * v17];
  v54 = (unsigned int **)v18;
  while ( v20 != (_DWORD *)v15 )
    v26 = v66;
    v27 = &v65;
    if ( !v66 )
      goto LABEL_61;
    v28 = *v20;
    do
      v27 = (int *)v26;
      v29 = (int *)(v26 + 12);
      v30 = v27[4];
      if ( v28 < v30 )
        v29 = v27 + 2;
      v26 = *v29;
    while ( v26 );
    v31 = (int)v27;
    if ( v28 < v30 )
LABEL_61:
      if ( v27 == v67 )
        goto LABEL_23;
      v31 = sub_21D4858((int)v27);
      v28 = *v20;
    if ( *(_DWORD *)(v31 + 16) < v28 )
LABEL_23:
      if ( v27 )
        if ( &v65 == v27 )
        {
          v32 = 1;
        }
        else
          v32 = 0;
          if ( *v20 < (unsigned int)v27[4] )
            v32 = 1;
        v33 = operator new(0x14u);
        v33[4] = *v20;
        sub_21D4928(v32, (int)v33, (int)v27, (int)&v65);
        ++v69;
    v20 += 4;
  v34 = *v55;
  v56 = *v55 >> 32;
  if ( v34 != v56 )
    v35 = (int *)&v57;
    v52 = v51 | 0x300000;
      v36 = v66;
      v37 = &v65;
      if ( v66 )
        v38 = &v65;
        do
          v37 = (int *)v36;
          while ( (unsigned int)v37[4] < *(_DWORD *)v34 )
          {
            v37 = (int *)v37[3];
            if ( !v37 )
            {
              v37 = v38;
              goto LABEL_40;
            }
          }
          v36 = v37[2];
          v38 = v37;
        while ( v36 );
LABEL_40:
      if ( v37 == &v65 )
        goto LABEL_62;
      if ( *(_DWORD *)v34 < (unsigned int)v37[4] )
        v37 = &v65;
LABEL_62:
        v63 = v52;
        v39 = *(_DWORD *)v34;
        ptr = 0;
        v61 = 0;
        v62 = 0;
        v40 = operator new(4u);
        ptr = v40;
        *(_DWORD *)v40 = v39 | 0x2000000;
        v57 = CommandRegistry::expand;
        v59 = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_invoke;
        v62 = (char *)v40 + 4;
        v61 = (char *)v40 + 4;
        v58 = std::_Function_base::_Base_manager<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_manager;
        v41 = *(_QWORD *)(v11 + 4);
        if ( (_DWORD)v41 == HIDWORD(v41) )
          std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
            (__int64 *)v11,
            &v63,
            (int)&ptr,
            (int)v35);
          __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
            v11,
            (_DWORD *)v41,
          *(_DWORD *)(v11 + 4) += 32;
        *(_BYTE *)(v11 + 360) = 0;
        if ( v58 )
          v58(v35, v35, 3);
        if ( ptr )
          operator delete(ptr);
        v42 = *v49;
        if ( *v49 == *v54 )
          std::vector<std::pair<unsigned int,unsigned long long>,std::allocator<std::pair<unsigned int,unsigned long long>>>::_M_emplace_back_aux<std::pair<unsigned int,unsigned long long> const&>(
            (unsigned __int64 *)v50,
            v34);
          v43 = *(_DWORD *)(v34 + 4);
          v44 = *(_DWORD *)(v34 + 8);
          v45 = v35;
          v46 = *(_DWORD *)(v34 + 12);
          *v42 = *(_DWORD *)v34;
          v42[1] = v43;
          v42[2] = v44;
          v42[3] = v46;
          v35 = v45;
          *v49 += 4;
      v34 += 16;
    while ( v34 != v56 );
  v47 = *v49;
  v48 = *v50;
  if ( *v50 != *v49 )
    std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned long long> *,std::vector<std::pair<unsigned int,unsigned long long>,std::allocator<std::pair<unsigned int,unsigned long long>>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
      (int)*v50,
      (int)v47,
      2 * (31 - __clz(((char *)v47 - v48) >> 4)));
    std::__final_insertion_sort<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned long long> *,std::vector<std::pair<unsigned int,unsigned long long>,std::allocator<std::pair<unsigned int,unsigned long long>>>>,__gnu_cxx::__ops::_Iter_less_iter>(
      (int)v48,
      v47);
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase(
    (int)&v64,
    v66);
}


int __fastcall CommandRegistry::allocateCommand<ExecuteCommand>(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-Ch]@1

  v1 = a1;
  j_j__ZSt11make_uniqueI14ExecuteCommandJEENSt9_MakeUniqIT_E15__single_objectEDpOT0_(&v3);
  result = v3;
  *v1 = v3;
  return result;
}


void __fastcall CommandRegistry::symbolToString(void **a1, int a2, int *a3)
{
  int v3; // r5@1
  int v4; // r1@1
  void **v5; // r11@1
  int v6; // r0@1
  unsigned int v7; // r6@1
  signed int v8; // r2@6
  signed int v9; // r3@8
  int i; // r0@18
  __int64 v11; // r2@26
  int v12; // r0@38
  int v13; // r8@38
  int v14; // r7@38
  void *v15; // r10@39
  int v16; // r9@39
  size_t v17; // r4@39
  _DWORD *v18; // r0@41
  size_t v19; // r5@41
  size_t v20; // r2@41
  int v21; // r0@43
  unsigned int *v22; // r2@50
  signed int v23; // r1@52
  unsigned int *v24; // r2@54
  signed int v25; // r1@56
  int v26; // r6@66
  void *v27; // r0@66
  void *v28; // r0@67
  void *v29; // r9@71
  _DWORD *v30; // r1@71
  unsigned int v31; // r5@71
  unsigned int v32; // r4@71
  size_t v33; // r2@71
  int v34; // r0@73
  int v35; // r4@80
  const void **v36; // r0@80
  __int64 v37; // kr00_8@80
  unsigned int v38; // r1@80
  const void **v39; // r0@82
  void *v40; // r0@85
  void *v41; // r0@86
  void *v42; // r0@87
  char *v43; // r0@88
  unsigned int *v44; // r2@89
  signed int v45; // r1@91
  int v46; // r4@93
  unsigned int *v47; // r2@94
  signed int v48; // r1@96
  unsigned int *v49; // r2@98
  signed int v50; // r1@100
  unsigned int *v51; // r2@102
  signed int v52; // r1@104
  int v53; // [sp+Ch] [bp-54h]@80
  int v54; // [sp+10h] [bp-50h]@80
  unsigned int v55; // [sp+14h] [bp-4Ch]@80
  int v56; // [sp+18h] [bp-48h]@38
  void *s2; // [sp+1Ch] [bp-44h]@38
  int v58; // [sp+20h] [bp-40h]@66
  unsigned int v59; // [sp+24h] [bp-3Ch]@54
  int v60; // [sp+28h] [bp-38h]@50

  v3 = a2;
  v4 = *a3;
  v5 = a1;
  v6 = *a3 & 0x1000000;
  v7 = *a3 & 0xFC0FFFFF;
  if ( v6 )
  {
    if ( v7 >= (signed int)((*(_QWORD *)(v3 + 132) >> 32) - *(_QWORD *)(v3 + 132)) >> 2 )
      goto LABEL_35;
    if ( !(v4 & 0x200000) )
      goto LABEL_29;
  }
  else
    {
      if ( v4 & 0x400000 )
      {
        if ( v7 < -1431655765 * ((signed int)((*(_QWORD *)(v3 + 84) >> 32) - *(_QWORD *)(v3 + 84)) >> 2) )
          goto LABEL_29;
      }
      else
        if ( v4 & 0x800000 )
        {
          v11 = *(_QWORD *)(v3 + 120);
        }
        else
          if ( !(v4 & 0x2000000) )
          {
            v8 = 0;
            if ( (unsigned int)(v4 - 1) < 0x13 )
              v8 = 1;
            v9 = 0;
            if ( (v4 & 0xFFEFFFFE) < 0x1E )
              v9 = 1;
            if ( !(v4 & 0x100000) )
              v9 = v8;
            if ( !v9 )
              goto LABEL_35;
            goto LABEL_29;
          }
          v11 = *(_QWORD *)(v3 + 96);
        if ( v7 < (HIDWORD(v11) - (signed int)v11) >> 2 )
LABEL_29:
          if ( v4 & 0x400000 )
            sub_21E94B4(v5, "OPTIONAL");
            do
            {
              sub_21E7408((const void **)v5, "_", 1u);
              v26 = 3 * v7;
              v58 = *(_DWORD *)(*(_DWORD *)(v3 + 84) + 4 * v26 + 8);
              CommandRegistry::symbolToString((int)&v59, v3, (int)&v58);
              Util::toUpper((void **)&v60, *(_DWORD *)(v59 - 12), v59);
              sub_21E72F0((const void **)v5, (const void **)&v60);
              v27 = (void *)(v60 - 12);
              if ( (int *)(v60 - 12) != &dword_28898C0 )
              {
                v22 = (unsigned int *)(v60 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v23 = __ldrex(v22);
                  while ( __strex(v23 - 1, v22) );
                }
                else
                  v23 = (*v22)--;
                if ( v23 <= 0 )
                  j_j_j_j__ZdlPv_9(v27);
              }
              v28 = (void *)(v59 - 12);
              if ( (int *)(v59 - 12) != &dword_28898C0 )
                v24 = (unsigned int *)(v59 - 4);
                    v25 = __ldrex(v24);
                  while ( __strex(v25 - 1, v24) );
                  v25 = (*v24)--;
                if ( v25 <= 0 )
                  j_j_j_j__ZdlPv_9(v28);
              v7 = *(_DWORD *)(*(_DWORD *)(v3 + 84) + 4 * v26 + 4);
            }
            while ( v7 != -1 );
          else if ( v4 & 0x800000 )
            v56 = *(_DWORD *)(*(_DWORD *)(v3 + 120) + 4 * v7);
            CommandRegistry::symbolToString((int)&s2, v3, (int)&v56);
            v12 = *(_DWORD *)(v3 + 212);
            v13 = v3 + 208;
            v14 = v3 + 208;
            if ( v12 )
              v15 = s2;
              v16 = v3 + 208;
              v17 = *((_DWORD *)s2 - 3);
              do
                v14 = v12;
                while ( 1 )
                  v18 = *(_DWORD **)(v14 + 16);
                  v19 = *(v18 - 3);
                  v20 = *(v18 - 3);
                  if ( v19 > v17 )
                    v20 = v17;
                  v21 = memcmp(v18, v15, v20);
                  if ( !v21 )
                    v21 = v19 - v17;
                  if ( v21 >= 0 )
                    break;
                  v14 = *(_DWORD *)(v14 + 12);
                  if ( !v14 )
                  {
                    v14 = v16;
                    goto LABEL_70;
                  }
                v12 = *(_DWORD *)(v14 + 8);
                v16 = v14;
              while ( v12 );
LABEL_70:
            if ( v14 == v13 )
              v29 = s2;
              v31 = *((_DWORD *)s2 - 3);
            else
              v30 = *(_DWORD **)(v14 + 16);
              v32 = *(v30 - 3);
              v33 = *((_DWORD *)s2 - 3);
              if ( v31 > v32 )
                v33 = *(v30 - 3);
              v34 = memcmp(s2, v30, v33);
              if ( !v34 )
                v34 = v31 - v32;
              if ( v34 >= 0 )
                v13 = v14;
            v35 = *(_DWORD *)(v13 + 60);
            Util::toUpper((void **)&v54, v31, (unsigned int)v29);
            v36 = sub_21E7408((const void **)&v54, "_F", 2u);
            v55 = (unsigned int)*v36;
            *v36 = &unk_28898CC;
            Util::toString<int,(void *)0,(void *)0>((void **)&v53, v7 - v35);
            v37 = *(_QWORD *)(v55 - 12);
            v38 = *(_DWORD *)(v53 - 12) + v37;
            if ( v38 > HIDWORD(v37) && v38 <= *(_DWORD *)(v53 - 8) )
              v39 = sub_21E82D8((const void **)&v53, 0, v55, (_BYTE *)v37);
              v39 = sub_21E72F0((const void **)&v55, (const void **)&v53);
            *v5 = (void *)*v39;
            *v39 = &unk_28898CC;
            v40 = (void *)(v53 - 12);
            if ( (int *)(v53 - 12) != &dword_28898C0 )
              v47 = (unsigned int *)(v53 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v48 = __ldrex(v47);
                while ( __strex(v48 - 1, v47) );
              else
                v48 = (*v47)--;
              if ( v48 <= 0 )
                j_j_j_j__ZdlPv_9(v40);
            v41 = (void *)(v55 - 12);
            if ( (int *)(v55 - 12) != &dword_28898C0 )
              v49 = (unsigned int *)(v55 - 4);
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j__ZdlPv_9(v41);
            v42 = (void *)(v54 - 12);
            if ( (int *)(v54 - 12) != &dword_28898C0 )
              v51 = (unsigned int *)(v54 - 4);
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v52 = (*v51)--;
              if ( v52 <= 0 )
                j_j_j_j__ZdlPv_9(v42);
            v43 = (char *)s2 - 12;
            if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
              v44 = (unsigned int *)((char *)s2 - 4);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 <= 0 )
                j_j_j_j__ZdlPv_9(v43);
          else if ( v4 & 0x100000 )
            sub_21E94B4(v5, off_26EB1D4[v7]);
          else if ( v4 & 0x2000000 )
            sub_21E8AF4((int *)v5, (int *)(*(_DWORD *)(v3 + 96) + 4 * v7));
          else if ( v6 )
            v46 = *(_DWORD *)(v3 + 132);
            *v5 = &unk_28898CC;
            sub_21E6FCC((const void **)v5, *(_DWORD *)(*(_DWORD *)(v46 + 4 * v7) - 12) + 8);
            sub_21E7408((const void **)v5, "postfix_", 8u);
            sub_21E72F0((const void **)v5, (const void **)(v46 + 4 * v7));
          else
            sub_21E94B4(v5, off_26EB24C[v7]);
          return;
LABEL_35:
      sub_21E94B4(v5, "SYMBOL_ERROR");
      return;
    }
    if ( v7 >= -1227133513 * ((signed int)((*(_QWORD *)(v3 + 108) >> 32) - *(_QWORD *)(v3 + 108)) >> 2) )
  for ( i = *(_DWORD *)(v3 + 156); i != v3 + 148; i = sub_21D4820(i) )
    if ( *(_DWORD *)(i + 20) == v7 )
      Util::toUpper(v5, *(_DWORD *)(*(_DWORD *)(i + 16) - 12), *(_DWORD *)(i + 16));
  sub_21E94B4(v5, "INVALID_ENUM");
}


_DWORD *__fastcall CommandRegistry::describe(int *a1, int a2, int a3)
{
  int *v3; // r9@1
  int v4; // r4@1
  int v5; // r11@1
  int *v6; // r8@1
  const char *v7; // r1@1
  int v8; // r5@3
  int v9; // r1@4
  int v10; // r2@4
  char *v11; // r6@5
  void *v12; // r0@5
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  unsigned int v15; // r6@10
  char *v16; // r0@10
  int v17; // r6@10
  char *v18; // t1@10
  char *v19; // r1@10
  signed int v20; // r2@10
  char *v21; // r6@13
  void *v22; // r0@13
  const char *v23; // r1@14
  unsigned int v24; // r2@16
  void *v25; // r0@16
  int v26; // r8@20
  unsigned int v27; // r9@20
  int v28; // r5@21
  int v29; // r10@21
  char *v30; // r6@25
  const char *v31; // r1@26
  void *v32; // r0@29
  unsigned int *v34; // r2@31
  signed int v35; // r1@33
  unsigned int *v36; // r2@39
  signed int v37; // r1@41
  unsigned int *v38; // r2@43
  signed int v39; // r1@45
  int *v40; // [sp+4h] [bp-104h]@5
  int v41; // [sp+8h] [bp-100h]@5
  int v42; // [sp+Ch] [bp-FCh]@5
  int v43; // [sp+10h] [bp-F8h]@5
  int v44; // [sp+14h] [bp-F4h]@16
  int v45; // [sp+18h] [bp-F0h]@13
  int v46; // [sp+1Ch] [bp-ECh]@13
  int v47; // [sp+20h] [bp-E8h]@25
  int v48; // [sp+24h] [bp-E4h]@25
  void **v49; // [sp+28h] [bp-E0h]@1
  void **v50; // [sp+2Ch] [bp-DCh]@17
  int v51; // [sp+50h] [bp-B8h]@29
  int v52; // [sp+DCh] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  CommandRegistry::getParseSymbol(&v52, a3);
  v6 = (int *)&v49;
  sub_21D0A10((int)&v49, 16);
  v7 = "[";
  if ( !*(_BYTE *)(v4 + 36) )
    v7 = "<";
  sub_21CBF38((char *)&v49, (int)v7, 1);
  v8 = v52;
  if ( v52 & 0x200000 )
  {
    v15 = *(_DWORD *)(v5 + 108) + 28 * (v52 & 0xFC0FFFFF);
    v18 = *(char **)(v15 + 16);
    v17 = v15 + 16;
    v16 = v18;
    v19 = *(char **)(v17 + 4);
    v20 = v19 - v18;
    if ( v19 - v18 == 16 )
    {
      if ( !*(_BYTE *)(v4 + 36) )
      {
        sub_21E8AF4(v3, (int *)(*(_DWORD *)(v5 + 96) + 4 * *(_DWORD *)v16));
        goto LABEL_29;
      }
    }
    else if ( (unsigned int)(v20 >> 4) > 5 )
      v30 = sub_21CBF38((char *)&v49, *(_DWORD *)(v4 + 12), *(_DWORD *)(*(_DWORD *)(v4 + 12) - 12));
      sub_21CBF38(v30, (int)": ", 2);
      v47 = v8;
      CommandRegistry::describe(&v48, v5, &v47);
      v41 = v4;
      sub_21CBF38(v30, v48, *(_DWORD *)(v48 - 12));
      v40 = v3;
      v12 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v48 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
LABEL_52:
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
          goto LABEL_26;
        }
LABEL_51:
        v14 = (*v13)--;
        goto LABEL_52;
LABEL_26:
      v31 = "]";
      if ( !*(_BYTE *)(v41 + 36) )
        v31 = ">";
      v6 = (int *)&v49;
      sub_21CBF38((char *)&v49, (int)v31, 1);
      sub_21CFED8(v40, (int)&v50);
      goto LABEL_29;
    v40 = v3;
    v41 = v4;
    if ( v19 != v16 )
      v26 = 0;
      v27 = 0;
      do
        v28 = *(_DWORD *)&v16[v26];
        v29 = *(_DWORD *)(v5 + 96);
        if ( v27 )
          sub_21CBF38((char *)&v49, (int)"|", 1);
        sub_21CBF38((char *)&v49, *(_DWORD *)(v29 + 4 * v28), *(_DWORD *)(*(_DWORD *)(v29 + 4 * v28) - 12));
        v16 = *(char **)v17;
        v26 += 16;
        ++v27;
      while ( v27 < (*(_DWORD *)(v17 + 4) - *(_DWORD *)v17) >> 4 );
    goto LABEL_26;
  }
  v9 = *(_DWORD *)(v4 + 12);
  v10 = *(_DWORD *)(v9 - 12);
  if ( !(v52 & 0x1000000) )
    v11 = sub_21CBF38((char *)&v49, v9, v10);
    sub_21CBF38(v11, (int)": ", 2);
    v42 = v8;
    CommandRegistry::describe(&v43, v5, &v42);
    sub_21CBF38(v11, v43, *(_DWORD *)(v43 - 12));
    v12 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      goto LABEL_51;
  v21 = sub_21CBF38((char *)&v49, v9, v10);
  sub_21CBF38(v21, (int)": ", 2);
  v45 = v8;
  CommandRegistry::describe(&v46, v5, &v45);
  sub_21CBF38(v21, v46, *(_DWORD *)(v46 - 12));
  v22 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
      __dmb();
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = "]";
    v23 = ">";
  sub_21CBF38((char *)&v49, (int)v23, 1);
  v24 = *(_DWORD *)(*(_DWORD *)(v5 + 132) + 4 * (v52 & 0x3C0FFFFF));
  Util::toUpper((void **)&v44, *(_DWORD *)(v24 - 12), v24);
  sub_21CBF38((char *)&v49, v44, *(_DWORD *)(v44 - 12));
  v25 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v44 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21CFED8(v3, (int)&v50);
LABEL_29:
  v49 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)v6) = off_26D3F34;
  v50 = &off_27734E8;
  v32 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v51 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v50 = &off_26D40A8;
  sub_21C802C((unsigned int **)v6 + 8);
  return sub_21B6560(v6 + 11);
}


signed __int64 __fastcall CommandRegistry::allocateCommand<DifficultyCommand>(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  void *v2; // r5@1
  signed __int64 result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x1Cu);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A010;
  result = -4294967291LL;
  *(_QWORD *)((char *)v2 + 20) = -4294967291LL;
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<TickingAreaCommand::TargetDimensions>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id) )
    type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id);
  v25 = type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TickingAreaCommand::TargetDimensions>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


_DWORD *__fastcall CommandRegistry::allocateCommand<GiveCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  _DWORD *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x98u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A0AC;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  j_CommandItem::CommandItem((int)v2 + 116);
  *(_QWORD *)((char *)v2 + 124) = 1LL;
  result = j_Json::Value::Value((_DWORD *)v2 + 34, 0);
  *v1 = v2;
  return result;
}


_DWORD *__fastcall CommandRegistry::buildFirstSet(_QWORD *a1, int *a2)
{
  unsigned __int64 *v2; // r4@1
  _DWORD *result; // r0@1
  __int64 v4; // kr00_8@1
  _DWORD *v5; // r1@2
  int v6; // r9@6
  int *v7; // r0@6
  int *v8; // r5@6
  unsigned __int64 *v9; // r0@9
  int v10; // r11@9
  unsigned __int64 *v11; // r8@9
  bool v12; // zf@9
  int v13; // r4@12
  _DWORD *v14; // r10@12
  int v15; // r0@15
  _DWORD *v16; // r1@16
  _DWORD *v17; // r6@16
  char v18; // r3@17
  char v19; // r7@18
  int v20; // r0@29
  int v21; // r1@30
  bool v22; // zf@31
  _DWORD *v23; // r0@31
  int v24; // r2@34
  bool v25; // zf@34
  int v26; // r0@39
  _DWORD *v27; // r0@53
  _DWORD *v28; // r4@53
  _DWORD *v29; // r0@53
  _DWORD *v30; // r6@53
  char v31; // r2@54
  char v32; // r7@55
  _DWORD *v33; // r0@63
  int *v34; // r0@63
  int *v35; // r6@63
  char v36; // r2@64
  char v37; // r5@65
  _DWORD *v38; // [sp+0h] [bp-40h]@2
  int v39; // [sp+4h] [bp-3Ch]@2
  int *v40; // [sp+8h] [bp-38h]@1
  _DWORD *v41; // [sp+Ch] [bp-34h]@5
  int *v42; // [sp+10h] [bp-30h]@6
  char *v43; // [sp+14h] [bp-2Ch]@1
  int v44; // [sp+18h] [bp-28h]@13

  v2 = a1;
  v40 = a2;
  v43 = (char *)a1 + 12;
  v4 = *(_QWORD *)std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
                    (int)a1 + 12,
                    a2);
  result = (_DWORD *)HIDWORD(v4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v39 = (int)v2;
    result = (_DWORD *)(*v2 >> 32);
    v5 = (_DWORD *)*v2;
    v38 = (_DWORD *)(*v2 >> 32);
    while ( 1 )
    {
      if ( v5 == result )
        return result;
      v41 = v5;
      if ( *v5 != *v40 )
        goto LABEL_3;
      v6 = std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
             (int)v43,
             v40);
      v7 = (int *)(*(_QWORD *)(v41 + 5) >> 32);
      v8 = (int *)*(_QWORD *)(v41 + 5);
      v42 = (int *)(*(_QWORD *)(v41 + 5) >> 32);
      while ( v8 != v7 )
      {
        v9 = (unsigned __int64 *)std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
                                   (int)v43,
                                   v8);
        v10 = *v8;
        v11 = v9;
        v12 = *v8 == 0x100000;
        if ( *v8 != 0x100000 )
          v12 = (v10 & 0x100000) == 0;
        if ( v12 )
        {
          v33 = operator new(4u);
          v28 = v33;
          *v33 = v10;
          v34 = (int *)(*(_QWORD *)v6 >> 32);
          v35 = (int *)*(_QWORD *)v6;
          if ( v35 == v34 )
            goto LABEL_79;
          v36 = 0;
          do
          {
            v37 = 0;
            if ( *v35 == v10 )
              v37 = 1;
            v36 |= v37;
              break;
            v12 = v34 - 1 == v35;
            ++v35;
          }
          while ( !v12 );
          if ( !(v36 & 1) )
LABEL_79:
            if ( v34 == *(int **)(v6 + 8) )
            {
              std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
                (unsigned __int64 *)v6,
                v28);
            }
            else
              *v34 = v10;
              *(_DWORD *)(v6 + 4) = v34 + 1;
          goto LABEL_75;
        }
        v14 = (_DWORD *)(*v9 >> 32);
        v13 = *v9;
        if ( (_DWORD *)v13 == v14 )
          v44 = *v8;
          CommandRegistry::buildFirstSet(v39, (int)&v44);
          v14 = (_DWORD *)(*v11 >> 32);
          v13 = *v11;
        if ( (_DWORD *)v13 != v14 )
            v15 = *(_DWORD *)v13;
            if ( *(_DWORD *)v13 != 0x100000 )
              v16 = (_DWORD *)(*(_QWORD *)v6 >> 32);
              v17 = (_DWORD *)*(_QWORD *)v6;
              if ( v17 == v16 )
                goto LABEL_80;
              v18 = 0;
              do
              {
                v19 = 0;
                if ( *v17 == v15 )
                  v19 = 1;
                v18 |= v19;
                  break;
                v12 = v16 - 1 == v17;
                ++v17;
              }
              while ( !v12 );
              if ( !(v18 & 1) )
LABEL_80:
                if ( v16 == *(_DWORD **)(v6 + 8) )
                {
                  std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
                    (unsigned __int64 *)v6,
                    (_DWORD *)v13);
                }
                else
                  *v16 = v15;
                  *(_DWORD *)(v6 + 4) = v16 + 1;
            v13 += 4;
          while ( (_DWORD *)v13 != v14 );
        v20 = ((signed int)v14 - v13) >> 4;
        if ( v20 < 1 )
LABEL_38:
          if ( 1 == ((signed int)v14 - v13) >> 2 )
            v23 = (_DWORD *)v13;
          else
            v26 = ((signed int)v14 - v13) >> 2;
            if ( v26 == 2 )
              v23 = (_DWORD *)v13;
              if ( v26 != 3 )
                v23 = v14;
                goto LABEL_51;
              if ( *(_DWORD *)v13 == 0x100000 )
              v23 = (_DWORD *)(v13 + 4);
            if ( *v23 == 0x100000 )
              goto LABEL_51;
            ++v23;
          if ( *v23 != 0x100000 )
            v23 = v14;
        else
          v21 = v20 + 1;
          while ( 1 )
            v22 = *(_DWORD *)v13 == 0x100000;
              v22 = *(_DWORD *)(v13 + 4) == 0x100000;
            if ( v22 )
            v23 = (_DWORD *)(v13 + 8);
            v24 = *(_DWORD *)(v13 + 8);
            v25 = v24 == 0x100000;
            if ( v24 != 0x100000 )
              v23 = (_DWORD *)(v13 + 12);
              v25 = *(_DWORD *)(v13 + 12) == 0x100000;
            if ( v25 )
            --v21;
            v13 += 16;
            if ( v21 <= 1 )
              goto LABEL_38;
LABEL_51:
        if ( v23 == v14 )
          goto LABEL_3;
        v7 = v42;
        ++v8;
      }
      v27 = operator new(4u);
      v28 = v27;
      *v27 = 0x100000;
      v29 = (_DWORD *)(*(_QWORD *)v6 >> 32);
      v30 = (_DWORD *)*(_QWORD *)v6;
      if ( v30 == v29 )
        goto LABEL_81;
      v31 = 0;
      do
        v32 = 0;
        if ( *v30 == 0x100000 )
          v32 = 1;
        v31 |= v32;
          break;
        v12 = v29 - 1 == v30;
        ++v30;
      while ( !v12 );
      if ( !(v31 & 1) )
LABEL_81:
        if ( v29 == *(_DWORD **)(v6 + 8) )
          std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
            (unsigned __int64 *)v6,
            v28);
          *v29 = 0x100000;
          *(_DWORD *)(v6 + 4) = v29 + 1;
LABEL_75:
      if ( v28 )
        operator delete(v28);
LABEL_3:
      result = v38;
      v5 = v41 + 8;
    }
  }
  return result;
}


int __fastcall CommandRegistry::allocateCommand<MeCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  j_MessagingCommand::MessagingCommand((MessagingCommand *)v2, 1, 0);
  *(_DWORD *)v2 = &off_271A110;
  result = j_CommandMessage::CommandMessage((CommandMessage *)((char *)v2 + 20));
  *v1 = v2;
  return result;
}


int *__fastcall CommandRegistry::addSoftTerminal(int *a1, int a2, const void **a3)
{
  int v3; // r10@1
  int v4; // r11@1
  int v5; // r0@1
  const void **v6; // r9@1
  int v7; // r6@1
  const void *v8; // r7@2
  int v9; // r4@2
  size_t v10; // r5@2
  _DWORD *v11; // r0@4
  size_t v12; // r8@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r4@13
  unsigned int v17; // r5@13
  size_t v18; // r2@13
  int v19; // r0@15
  int *result; // r0@20
  int v21; // r4@21
  __int64 v22; // r0@21
  void *v23; // r0@24
  __int64 v24; // r1@24
  __int64 v25; // kr00_8@24
  int *v26; // [sp+8h] [bp-48h]@1
  int (*v27)(); // [sp+Ch] [bp-44h]@24
  __int64 v28; // [sp+14h] [bp-3Ch]@24
  void *ptr; // [sp+1Ch] [bp-34h]@24
  char *v30; // [sp+20h] [bp-30h]@24
  char *v31; // [sp+24h] [bp-2Ch]@24
  int v32; // [sp+28h] [bp-28h]@24

  v3 = a2;
  v26 = a1;
  v4 = a2 + 172;
  v5 = *(_DWORD *)(a2 + 176);
  v6 = a3;
  v7 = a2 + 172;
  if ( v5 )
  {
    v8 = *a3;
    v9 = a2 + 172;
    v10 = *((_DWORD *)*a3 - 3);
    do
    {
      v7 = v5;
      while ( 1 )
      {
        v11 = *(_DWORD **)(v7 + 16);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = memcmp(v11, v8, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v9;
          goto LABEL_12;
        }
      }
      v5 = *(_DWORD *)(v7 + 8);
      v9 = v7;
    }
    while ( v5 );
  }
LABEL_12:
  if ( v7 == v4 )
    goto LABEL_34;
  v15 = *(_DWORD **)(v7 + 16);
  v16 = *((_DWORD *)*v6 - 3);
  v17 = *(v15 - 3);
  v18 = *((_DWORD *)*v6 - 3);
  if ( v16 > v17 )
    v18 = *(v15 - 3);
  v19 = memcmp(*v6, v15, v18);
  if ( !v19 )
    v19 = v16 - v17;
  if ( v19 < 0 )
    v7 = v4;
LABEL_34:
    v21 = (*(_DWORD *)(v3 + 100) - *(_DWORD *)(v3 + 96)) >> 2;
    *(_DWORD *)std::map<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::operator[](
                 v3 + 168,
                 v6) = v21;
    v22 = *(_QWORD *)(v3 + 100);
    if ( (_DWORD)v22 == HIDWORD(v22) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)(v3 + 96),
        (int *)v6);
    else
      sub_21E8AF4((int *)v22, (int *)v6);
      *(_DWORD *)(v3 + 100) += 4;
    v32 = 1048589;
    v23 = operator new(4u);
    ptr = v23;
    HIDWORD(v24) = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_invoke;
    LODWORD(v24) = std::_Function_base::_Base_manager<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_manager;
    v31 = (char *)v23 + 4;
    *(_DWORD *)v23 = v21 | 0x2000000;
    v30 = (char *)v23 + 4;
    v27 = CommandRegistry::collapse;
    v28 = v24;
    v25 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v25 == HIDWORD(v25) )
      std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        (__int64 *)v3,
        &v32,
        (int)&ptr,
        (int)&v27);
      __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        v3,
        (_DWORD *)v25,
      *(_DWORD *)(v3 + 4) += 32;
    *(_BYTE *)(v3 + 360) = 0;
    if ( (_DWORD)v28 )
      ((void (*)(void))v28)();
    if ( ptr )
      operator delete(ptr);
    result = v26;
    *v26 = v21 | 0x2000000;
  else
    result = (int *)(*(_DWORD *)(v7 + 20) | 0x2000000);
    *v26 = (int)result;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<CloneCommand::MaskMode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id) )
    type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id);
  v25 = type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<CloneCommand::MaskMode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::addEnumValues<int>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  char **v14; // r5@19
  char **v15; // r7@19
  int v16; // r9@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  int v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v25 = type_id<CommandRegistry,int>(void)::id;
  CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)CommandRegistry::parseEnum<int>,
    0,
    v21,
    (int)v22,
    v23);
  v15 = v29;
  v14 = v28;
  v16 = v24;
  if ( v28 != v29 )
      v19 = (int *)(*v14 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v14 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v14 += 4;
    while ( v14 != v15 );
    v14 = v28;
  if ( v14 )
    operator delete(v14);
  return v16;
}


int __fastcall CommandRegistry::LexicalToken::LexicalToken(int result, const CommandRegistry *a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = a2;
  return result;
}


_DWORD *__fastcall CommandRegistry::describe(int *a1, int a2, int a3, int *a4, int a5, int a6, _DWORD *a7, _DWORD *a8)
{
  int v8; // r7@1
  int *v9; // r4@1
  char *v10; // r0@1
  int v11; // r6@1
  int v12; // r9@1
  int v13; // r10@3
  int v14; // r4@5
  unsigned int *v15; // r2@6
  signed int v16; // r1@8
  void *v17; // r0@19
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  void *v20; // r0@33
  unsigned int *v21; // r2@36
  signed int v22; // r1@38
  void *v23; // r0@44
  void *v24; // r0@46
  unsigned int *v26; // r2@48
  signed int v27; // r1@50
  int *v28; // [sp+8h] [bp-F8h]@1
  int v29; // [sp+Ch] [bp-F4h]@6
  int v30; // [sp+10h] [bp-F0h]@15
  void **v31; // [sp+24h] [bp-DCh]@1
  void **v32; // [sp+28h] [bp-D8h]@46
  int v33; // [sp+44h] [bp-BCh]@47
  int v34; // [sp+4Ch] [bp-B4h]@46
  int v35; // [sp+50h] [bp-B0h]@47

  v28 = a1;
  v8 = a2;
  v9 = a4;
  v10 = (char *)sub_21D0A10((int)&v31, 16);
  sub_21CBF38(v10, (int)"/", 1);
  sub_21CBF38((char *)&v31, *v9, *(_DWORD *)(*v9 - 12));
  v12 = *(_QWORD *)(a5 + 12) >> 32;
  v11 = *(_QWORD *)(a5 + 12);
  if ( v11 != v12 )
  {
    if ( a7 )
    {
      v13 = 0;
      do
      {
        if ( v13 == a6 )
        {
          sub_21CB818((int)&v30, (char *)&v31);
          *a7 = v30 + 1;
        }
        CommandRegistry::describe(&v29, v8, v11);
        if ( a8 && v13 == a6 )
          *a8 = *(_DWORD *)(v29 - 12);
        sub_21CBF38((char *)&v31, (int)" ", 1);
        sub_21CBF38((char *)&v31, v29, *(_DWORD *)(v29 - 12));
        ++v13;
        v17 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v29 - 4);
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
        v11 += 40;
      }
      while ( v11 != v12 );
    }
    else if ( a8 )
      v14 = 0;
        if ( v14 == a6 )
        ++v14;
        v20 = (void *)(v29 - 12);
          v18 = (unsigned int *)(v29 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
    else
        v23 = (void *)(v29 - 12);
          v21 = (unsigned int *)(v29 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
  }
  sub_21CFED8(v28, (int)&v32);
  v31 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v31) = off_26D3F34;
  v32 = &off_27734E8;
  v24 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v32 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v33);
  return sub_21B6560(&v35);
}


signed __int64 __fastcall CommandRegistry::allocateCommand<CloneCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  signed __int64 result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x54u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_2719FD4;
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 20));
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 36));
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 52));
  result = -4294967296LL;
  *((_DWORD *)v2 + 17) = 0;
  *((_DWORD *)v2 + 18) = 0;
  *(_QWORD *)((char *)v2 + 76) = -4294967296LL;
  *v1 = v2;
  return result;
}


void __fastcall CommandRegistry::setupOverloadRules(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r11@1
  int v4; // r2@2
  int v5; // r3@2
  _DWORD *v6; // r7@3
  bool v7; // zf@5
  int v8; // r7@8
  int v9; // r5@8
  int v10; // r6@9
  int v11; // r0@9
  int v12; // r4@10
  void *v13; // r0@10
  __int64 v14; // r0@12
  int v15; // r12@12
  int v16; // r6@12
  void (__fastcall *v17)(__int64 *, __int64 *, signed int); // r3@12
  int v18; // r0@17
  __int64 v19; // kr10_8@18
  int v20; // r0@18
  int v21; // r0@21
  __int64 v22; // kr18_8@22
  int v23; // r0@22
  int v24; // r4@25
  int v25; // r11@25
  char *v26; // r5@26
  char *i; // r0@26
  void *v28; // r6@30
  char *v29; // r7@30
  signed int v30; // r5@30
  unsigned int v31; // r0@30
  unsigned int v32; // r1@32
  unsigned int v33; // r8@32
  int v34; // r9@41
  int v35; // r4@47
  int v36; // r5@47
  _DWORD *v37; // r0@50
  __int64 v38; // r1@50
  __int64 v39; // kr28_8@50
  void *v40; // r0@52
  __int64 v41; // kr30_8@52
  void *v42; // r0@57
  int v43; // [sp+4h] [bp-8Ch]@0
  int v44; // [sp+8h] [bp-88h]@7
  int v45; // [sp+8h] [bp-88h]@25
  void *(__fastcall *v46)(_DWORD *, int *); // [sp+Ch] [bp-84h]@47
  int v47; // [sp+10h] [bp-80h]@47
  void (*v48)(void); // [sp+14h] [bp-7Ch]@47
  int (__fastcall *v49)(int (__fastcall **)(int, int *), int, int *); // [sp+18h] [bp-78h]@47
  void *v50; // [sp+1Ch] [bp-74h]@47
  char *v51; // [sp+20h] [bp-70h]@47
  char *v52; // [sp+24h] [bp-6Ch]@47
  int v53; // [sp+28h] [bp-68h]@47
  void *(__fastcall *v54)(_DWORD *, int *); // [sp+2Ch] [bp-64h]@47
  int v55; // [sp+30h] [bp-60h]@47
  void (*v56)(void); // [sp+34h] [bp-5Ch]@47
  int v57; // [sp+38h] [bp-58h]@47
  _DWORD *v58; // [sp+3Ch] [bp-54h]@47
  _DWORD *v59; // [sp+40h] [bp-50h]@47
  _DWORD *v60; // [sp+44h] [bp-4Ch]@47
  int v61; // [sp+48h] [bp-48h]@47
  int v62; // [sp+4Ch] [bp-44h]@47
  int v63; // [sp+50h] [bp-40h]@1
  int v64; // [sp+54h] [bp-3Ch]@1
  __int64 ptr; // [sp+58h] [bp-38h]@12
  void *v66; // [sp+60h] [bp-30h]@12
  int v67; // [sp+64h] [bp-2Ch]@12
  int v68; // [sp+68h] [bp-28h]@47
  void *v69; // [sp+6Ch] [bp-24h]@47
  void *v70; // [sp+70h] [bp-20h]@47
  int v71; // [sp+74h] [bp-1Ch]@47
  int v72; // [sp+78h] [bp-18h]@47
  void *v73; // [sp+7Ch] [bp-14h]@47

  v2 = a1;
  v64 = *(_DWORD *)(a2 + 24);
  v63 = *(_DWORD *)(a2 + 28);
  v3 = *(_DWORD *)(a2 + 36);
  if ( v3 != -1 )
  {
    v4 = *(_QWORD *)a1 >> 32;
    v5 = *(_QWORD *)a1;
    if ( v4 != v5 )
    {
      v6 = (_DWORD *)(v4 - 32);
      do
      {
        if ( *v6 == 1048604 )
          break;
        v7 = v5 == (_DWORD)v6;
        v6 -= 8;
      }
      while ( !v7 );
    }
    v44 = a2;
    if ( v3 != (v4 - v5) >> 5 )
      v8 = 32 * v3 | 0x1C;
      v9 = *(_DWORD *)(a2 + 36);
        v10 = v5 + v8;
        v11 = *(_DWORD *)(v5 + v8 - 28);
        if ( v11 & 0x200000 )
        {
          v12 = v5 + 32 * v3;
          *(_DWORD *)(v5 + 32 * v3) = v11;
          v13 = *(void **)(v12 + 20);
          *(_DWORD *)(v12 + 20) = 0;
          *(_DWORD *)(v12 + 24) = 0;
          *(_DWORD *)(v12 + 28) = 0;
          *(_DWORD *)(v12 + 20) = *(_DWORD *)(v10 - 8);
          *(_DWORD *)(v10 - 8) = 0;
          *(_DWORD *)(v12 + 24) = *(_DWORD *)(v10 - 4);
          *(_DWORD *)(v10 - 4) = 0;
          *(_DWORD *)(v12 + 28) = *(_DWORD *)(v5 + v8);
          *(_DWORD *)(v5 + v8) = 0;
          if ( v13 )
            operator delete(v13);
          v14 = *(_QWORD *)(v10 - 24);
          v15 = *(_DWORD *)(v10 - 16);
          *(_DWORD *)(v10 - 16) = 0;
          v16 = *(_DWORD *)(v10 - 12);
          ptr = *(_QWORD *)(v12 + 4);
          *(_QWORD *)(v12 + 4) = v14;
          v66 = *(void **)(v12 + 12);
          v17 = (void (__fastcall *)(__int64 *, __int64 *, signed int))v66;
          *(_DWORD *)(v12 + 12) = v15;
          v67 = *(_DWORD *)(v12 + 16);
          *(_DWORD *)(v12 + 16) = v16;
          if ( v17 )
            v17(&ptr, &ptr, 3);
          v4 = *(_QWORD *)v2 >> 32;
          v5 = *(_QWORD *)v2;
          ++v3;
        }
        ++v9;
        v8 += 32;
      while ( v9 != (v4 - v5) >> 5 );
    std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_erase(v2, v5 + 32 * v3, v4);
    a2 = v44;
  }
  v18 = *(_DWORD *)(a2 + 40);
  if ( v18 != -1 )
    v19 = *(_QWORD *)(v2 + 120);
    v20 = v19 + 4 * v18;
    if ( v20 != HIDWORD(v19) )
      *(_DWORD *)(v2 + 124) = v20;
    *(_DWORD *)(a2 + 40) = -1;
  v21 = *(_DWORD *)(a2 + 44);
  if ( v21 != -1 )
    v22 = *(_QWORD *)(v2 + 84);
    v23 = v22 + 12 * v21;
    if ( v23 != HIDWORD(v22) )
      *(_DWORD *)(v2 + 88) = v23;
    *(_DWORD *)(a2 + 44) = -1;
  ptr = 0LL;
  v66 = 0;
  v25 = *(_QWORD *)(a2 + 8) >> 32;
  v24 = *(_QWORD *)(a2 + 8);
  v45 = a2;
  if ( v24 != v25 )
    v26 = 0;
    for ( i = 0; ; i = (char *)v66 )
      if ( v26 == i )
        v28 = (void *)ptr;
        v29 = 0;
        v30 = (signed int)&v26[-ptr];
        v31 = v30 >> 2;
        if ( !(v30 >> 2) )
          v31 = 1;
        v32 = v31 + (v30 >> 2);
        v33 = v31 + (v30 >> 2);
        if ( 0 != v32 >> 30 )
          v33 = 0x3FFFFFFF;
        if ( v32 < v31 )
        if ( v33 )
          if ( v33 >= 0x40000000 )
            sub_21E57F4();
          v29 = (char *)operator new(4 * v33);
        *(_DWORD *)&v29[v30] = v24;
        if ( v30 >> 2 )
          _aeabi_memmove4(v29, v28);
        v34 = (int)&v29[v30];
        v26 = &v29[v30 + 4];
        if ( v28 )
          operator delete(v28);
        LODWORD(ptr) = v29;
        HIDWORD(ptr) = v34 + 4;
        v66 = &v29[4 * v33];
      else
        *(_DWORD *)v26 = v24;
        v26 = (char *)(HIDWORD(ptr) + 4);
        HIDWORD(ptr) += 4;
      v24 += 28;
      if ( v25 == v24 )
        break;
  *(_DWORD *)(v45 + 36) = (signed int)((*(_QWORD *)v2 >> 32) - *(_QWORD *)v2) >> 5;
  CommandRegistry::buildRules(
    (int)&v62,
    v2,
    v45,
    (int)&ptr,
    0,
    v43,
    (int)v46,
    v47,
    (int)v48,
    (int)v49,
    (int)v50,
    (int)v51,
    (int)v52,
    v53,
    (int)v54,
    v55,
    (int)v56,
    v57,
    (int)v58,
    (int)v59,
    (int)v60,
    v61,
    v62,
    v63,
    v64,
    ptr,
    SHIDWORD(ptr),
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v35 = v64;
  v36 = v62;
  if ( v63 & 0x200000 )
    v35 = v63;
  if ( v62 == 0x100000 )
    v61 = 1048604;
    v37 = operator new(4u);
    v58 = v37;
    HIDWORD(v38) = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_invoke;
    LODWORD(v38) = std::_Function_base::_Base_manager<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_manager;
    v60 = v37 + 1;
    *v37 = v35;
    v59 = v37 + 1;
    v54 = CommandRegistry::expand;
    *(_QWORD *)&v56 = v38;
    v39 = *(_QWORD *)(v2 + 4);
    if ( (_DWORD)v39 == HIDWORD(v39) )
      std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        (__int64 *)v2,
        &v61,
        (int)&v58,
        (int)&v54);
    else
      __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        v2,
        (_DWORD *)v39,
      *(_DWORD *)(v2 + 4) += 32;
    *(_BYTE *)(v2 + 360) = 0;
    if ( v56 )
      v56();
    v42 = v58;
  else
    v53 = 1048604;
    v40 = operator new(8u);
    v50 = v40;
    v52 = (char *)v40 + 8;
    *(_DWORD *)v40 = v35;
    *((_DWORD *)v40 + 1) = v36;
    v51 = (char *)v40 + 8;
    v46 = CommandRegistry::expand;
    v48 = (void (*)(void))std::_Function_base::_Base_manager<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_manager;
    v49 = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_invoke;
    v41 = *(_QWORD *)(v2 + 4);
    if ( (_DWORD)v41 == HIDWORD(v41) )
        &v53,
        (int)&v50,
        (int)&v46);
        (_DWORD *)v41,
    if ( v48 )
      v48();
    v42 = v50;
  if ( v42 )
    operator delete(v42);
  if ( (_DWORD)ptr )
    operator delete((void *)ptr);
}


signed int __fastcall CommandRegistry::parseEnum<EquipmentSlot>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::addEnumValues<ListDCommand::DetailMode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id) )
    type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id);
  v25 = type_id<CommandRegistry,ListDCommand::DetailMode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<ListDCommand::DetailMode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::addEnumValues<GameType>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  char **v14; // r5@19
  char **v15; // r7@19
  int v16; // r9@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  int v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,GameType>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,GameType>(void)::id) )
    type_id<CommandRegistry,GameType>(void)::id = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,GameType>(void)::id);
  v25 = type_id<CommandRegistry,GameType>(void)::id;
  CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)CommandRegistry::parseEnum<GameType>,
    0,
    v21,
    (int)v22,
    v23);
  v15 = v29;
  v14 = v28;
  v16 = v24;
  if ( v28 != v29 )
      v19 = (int *)(*v14 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v14 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v14 += 4;
    while ( v14 != v15 );
    v14 = v28;
  if ( v14 )
    operator delete(v14);
  return v16;
}


signed int __fastcall CommandRegistry::parseEnum<AgentCommands::CollectCommand::CollectionSpecification>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


void *__fastcall CommandRegistry::expand(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@1
  int v5; // r6@2
  _DWORD *v6; // r0@3
  int v7; // r1@3
  void *v8; // r4@3
  _DWORD *v9; // r0@6
  int v10; // r1@6
  int v12; // [sp+0h] [bp-18h]@3
  int v13; // [sp+4h] [bp-14h]@6

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  if ( v4 )
  {
    do
    {
      v5 = v4 + 4;
      v4 = *(_DWORD *)(v4 + 4);
    }
    while ( v4 );
    v6 = operator new(0x18u);
    v7 = *v3;
    *v6 = 0;
    v6[1] = 0;
    v6[2] = v2;
    v6[3] = 0;
    v6[4] = 0;
    v6[5] = v7;
    v12 = 0;
    v8 = *(void **)v5;
    *(_DWORD *)v5 = v6;
    if ( v8 )
      std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)v8 + 4);
      std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)v8);
      operator delete(v8);
    std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)&v12);
  }
  else
    v9 = operator new(0x18u);
    v10 = *v3;
    *v9 = 0;
    v9[1] = 0;
    v9[2] = v2;
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = v10;
    v13 = 0;
    *v2 = v9;
    std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)&v13);
    v5 = (int)v2;
  return *(void **)v5;
}


void **__fastcall CommandRegistry::ParseToken::toString(CommandRegistry::ParseToken *this, int a2)
{
  const char *v2; // r4@1
  void **v3; // r9@1
  int v4; // r5@2
  _DWORD *v5; // r0@3
  int *v6; // r7@3
  char *v7; // r6@3
  unsigned __int64 *v8; // r1@5
  unsigned __int64 *v9; // r2@5
  unsigned __int64 *v10; // r0@6
  unsigned __int64 *v11; // r2@10
  unsigned __int64 v12; // kr00_8@10
  const char *v13; // r5@13
  const char *v14; // r0@13
  int v15; // r8@15
  _DWORD *v16; // r0@15
  int *v17; // r7@15
  void ***v18; // r0@17
  void **result; // r0@19

  v2 = *(const char **)(a2 + 12);
  v3 = (void **)this;
  if ( v2 )
  {
    v4 = *(_DWORD *)(a2 + 16);
    if ( v4 )
    {
      v5 = sub_21E7E80(*(_DWORD *)(a2 + 16), 0);
      v6 = v5;
      v7 = (char *)(v5 + 3);
      if ( v4 == 1 )
        *v7 = *v2;
      else
        _aeabi_memcpy(v5 + 3, v2, v4);
      result = (void **)&dword_28898C0;
      if ( v6 != &dword_28898C0 )
      {
        v6[2] = 0;
        *v6 = v4;
        result = (void **)byte_26C67B8[0];
        v7[v4] = byte_26C67B8[0];
      }
      goto LABEL_27;
    }
    v18 = (void ***)&off_27775D4;
  }
  else
    v8 = *(unsigned __int64 **)a2;
    v9 = v8;
    do
      v10 = v9;
      v9 = *(unsigned __int64 **)v9;
    while ( v9 );
      while ( 1 )
        v11 = v8;
        v12 = *v8;
        v8 = (unsigned __int64 *)(*v8 >> 32);
        if ( !(_DWORD)v12 )
          break;
        if ( !v8 )
          v8 = (unsigned __int64 *)v12;
    while ( v8 );
    if ( !v10 )
      return sub_21E94B4(v3, (const char *)&unk_257BC67);
    v13 = (const char *)*((_DWORD *)v10 + 3);
    v14 = (const char *)(*(unsigned __int64 *)((char *)v11 + 12) + (*(unsigned __int64 *)((char *)v11 + 12) >> 32));
    if ( v13 != v14 )
      if ( !v13 )
        sub_21E5884((int)"basic_string::_S_construct null not valid");
      v15 = v14 - v13;
      v16 = sub_21E7E80(v14 - v13, 0);
      v17 = v16;
      v7 = (char *)(v16 + 3);
      if ( v15 == 1 )
        *v7 = *v13;
        _aeabi_memcpy(v16 + 3, v13, v15);
      if ( v17 != &dword_28898C0 )
        v17[2] = 0;
        *v17 = v15;
        v7[v15] = byte_26C67B8[0];
  result = *v18;
  v7 = (char *)(result + 3);
LABEL_27:
  *v3 = v7;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<Enchant::Type>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Enchant::Type>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Enchant::Type>(void)::id) )
    type_id<CommandRegistry,Enchant::Type>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Enchant::Type>(void)::id);
  v25 = type_id<CommandRegistry,Enchant::Type>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<Enchant::Type>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::addEnumValues<TimeCommand::Query>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Query>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Query>(void)::id) )
    type_id<CommandRegistry,TimeCommand::Query>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Query>(void)::id);
  v25 = type_id<CommandRegistry,TimeCommand::Query>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TimeCommand::Query>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


signed int __fastcall CommandRegistry::parseEnum<TeleportCommand::FacingResult>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::parseSelector(int a1, CommandSelectorBase *this, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  return CommandRegistry::parseSelector(
           a1,
           this,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57,
           a58,
           a59,
           a60,
           a61,
           a62,
           a63);
}


unsigned int __fastcall CommandRegistry::getOverloadSyntaxInformation(CommandRegistry *this, const CommandOrigin *a2, CommandSyntaxInformation *a3, const CommandRegistry::ParseToken *a4)
{
  CommandRegistry *v4; // r7@1
  int v5; // r0@1
  const CommandOrigin *v6; // r5@1
  CommandSyntaxInformation *v7; // r9@3
  int v8; // r0@3
  int v9; // r6@3
  char v10; // r4@3
  unsigned int result; // r0@3
  bool v12; // zf@3
  int v13; // r4@8
  __int64 v14; // r5@10
  const void **v15; // r0@10
  unsigned int v16; // r6@10
  char *v17; // r0@10
  int v18; // r7@11
  int v19; // r1@12
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  int v24; // r5@25
  const void **v25; // r7@25
  void *v26; // r0@25
  void *v27; // r0@27
  unsigned int *v28; // r2@32
  signed int v29; // r1@34
  unsigned int *v30; // r2@36
  signed int v31; // r1@38
  signed int i; // r0@9
  int v33; // r2@9
  int v34; // r8@50
  int v35; // r11@50
  int v36; // r6@50
  int v37; // r7@50
  int v38; // r5@54
  signed int v39; // r2@55
  __int64 v40; // r0@55
  signed int v41; // r1@57
  int v42; // r1@59
  bool v43; // zf@59
  signed int v44; // r0@64
  bool v45; // zf@66
  int v46; // r0@72
  int v47; // r1@73
  __int64 v48; // r0@79
  void *v49; // r0@82
  const void **v50; // [sp+2Ch] [bp-6Ch]@8
  CommandOrigin *v51; // [sp+30h] [bp-68h]@7
  const void **v52; // [sp+38h] [bp-60h]@3
  CommandRegistry *v53; // [sp+3Ch] [bp-5Ch]@3
  const CommandRegistry::ParseToken *v54; // [sp+40h] [bp-58h]@1
  unsigned int v55; // [sp+48h] [bp-50h]@8
  int v56; // [sp+54h] [bp-44h]@13
  int v57; // [sp+58h] [bp-40h]@79
  int v58; // [sp+5Ch] [bp-3Ch]@79
  int v59; // [sp+60h] [bp-38h]@17
  char *v60; // [sp+64h] [bp-34h]@10
  _DWORD *v61; // [sp+68h] [bp-30h]@10
  int v62; // [sp+6Ch] [bp-2Ch]@70
  int v63; // [sp+70h] [bp-28h]@69

  v4 = this;
  v5 = *((_DWORD *)a4 + 5);
  v54 = a4;
  v6 = a2;
  LOWORD(a2) = -1;
  if ( v5 & 0x200000 )
    v5 = *(_DWORD *)(*(_DWORD *)a4 + 20);
  v7 = a3;
  HIWORD(a2) = 15375;
  v53 = v4;
  v52 = (const void **)(*((_DWORD *)v4 + 24) + 4 * (v5 & (unsigned int)a2));
  v8 = CommandRegistry::findCommand((int)v4, v52);
  v9 = v8;
  v10 = *(_BYTE *)(v8 + 32);
  result = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v6 + 44))(v6);
  v12 = (v10 & 2) == 0;
  if ( v10 & 2 )
    v12 = result == 1;
  if ( v12 )
  {
    v51 = v6;
    result = (*(int (**)(void))(*(_DWORD *)v6 + 36))();
    if ( result >= *(_BYTE *)(v9 + 20) )
    {
      v50 = (const void **)v9;
      EntityInteraction::setInteractText((int *)v7 + 1, (int *)(v9 + 4));
      result = *(_QWORD *)(v9 + 8) >> 32;
      v13 = *(_QWORD *)(v9 + 8);
      v55 = result;
      if ( v13 != result )
      {
        for ( i = CommandVersion::isCompatible((CommandVersion *)v13, 3);
              ;
              i = CommandVersion::isCompatible((CommandVersion *)v13, 3) )
        {
          if ( i == 1 )
          {
            v34 = *(_QWORD *)(v13 + 12) >> 32;
            v35 = *(_QWORD *)(v13 + 12);
            v36 = 0;
            v37 = *((_DWORD *)v54 + 1);
            while ( v35 != v34 )
            {
              if ( !v37 )
                goto LABEL_79;
              v38 = *(_DWORD *)(v37 + 20);
              if ( v38 & 0xC00000 )
              v40 = *(_QWORD *)(v35 + 4);
              v12 = HIDWORD(v40) == 0;
              v39 = 0;
              HIDWORD(v40) = (*(_QWORD *)(v35 + 4) >> 32) & 1;
              if ( v12 )
                v39 = 1;
              v12 = v40 == 0;
              v41 = 0;
                v41 = 1;
              v42 = v41 | v39;
              v43 = v38 == 1048604;
              if ( v38 == 1048604 )
                v43 = (_DWORD)v40 == (_DWORD)CommandRegistry::parse<std::unique_ptr<Command,std::default_delete<Command>>>;
              if ( !v43 || !v42 )
              {
                v12 = (_DWORD)v40 == (_DWORD)CommandRegistry::parse<RelativeFloat>;
                v44 = 0;
                if ( v12 )
                  v44 = 1;
                v45 = v38 == 1048578;
                if ( v38 == 1048578 )
                  v45 = (v44 & v42) == 1;
                if ( !v45 )
                {
                  CommandRegistry::getParseSymbol(&v63, v35);
                  if ( v63 != v38 )
                    goto LABEL_83;
                }
              }
              CommandRegistry::getParseSymbol(&v62, v35);
              if ( v62 == 1048605 && *(_DWORD *)v37 )
                v14 = *((_QWORD *)v7 + 1);
                CommandRegistry::getOverloadSyntaxInformation(v53, v51, v7, *(const CommandRegistry::ParseToken **)v37);
                v60 = (char *)&unk_28898CC;
                sub_21E6FCC((const void **)&v60, *((_DWORD *)*v50 - 3) + 1);
                sub_21E7408((const void **)&v60, "/", 1u);
                sub_21E72F0((const void **)&v60, v50);
                v15 = sub_21E7408((const void **)&v60, " ... ", 5u);
                v16 = -1431655765 * ((HIDWORD(v14) - (signed int)v14) >> 2);
                v61 = *v15;
                *v15 = &unk_28898CC;
                v17 = v60 - 12;
                if ( (int *)(v60 - 12) != &dword_28898C0 )
                  v28 = (unsigned int *)(v60 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v29 = __ldrex(v28);
                    while ( __strex(v29 - 1, v28) );
                  }
                  else
                    v29 = (*v28)--;
                  if ( v29 <= 0 )
                    j_j_j_j__ZdlPv_9(v17);
                v18 = *((_QWORD *)v7 + 1);
                if ( v16 < -1431655765 * ((signed int)((*((_QWORD *)v7 + 1) >> 32) - v18) >> 2) )
                  do
                    sub_21E8AF4(&v59, (int *)&v61);
                    v24 = 3 * v16;
                    v25 = (const void **)(v18 + 12 * v16);
                    sub_21E72F0((const void **)&v59, v25);
                    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                      (int *)v25,
                      &v59);
                    v26 = (void *)(v59 - 12);
                    if ( (int *)(v59 - 12) != &dword_28898C0 )
                    {
                      v22 = (unsigned int *)(v59 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v23 = __ldrex(v22);
                        while ( __strex(v23 - 1, v22) );
                      }
                      else
                        v23 = (*v22)--;
                      if ( v23 <= 0 )
                        j_j_j_j__ZdlPv_9(v26);
                    }
                    v18 = *((_DWORD *)v7 + 2);
                    ++v16;
                    v19 = (int)v61;
                    *(_DWORD *)(v18 + 4 * v24 + 4) += *(v61 - 3);
                  while ( v16 < -1431655765 * ((*((_DWORD *)v7 + 3) - v18) >> 2) );
                else
                  v19 = (int)v61;
                v27 = (void *)(v19 - 12);
                if ( (int *)(v19 - 12) != &dword_28898C0 )
                  v30 = (unsigned int *)(v19 - 4);
                      v31 = __ldrex(v30);
                    while ( __strex(v31 - 1, v30) );
                    v31 = (*v30)--;
                  if ( v31 <= 0 )
                    j_j_j_j__ZdlPv_9(v27);
                goto LABEL_83;
              v46 = v37;
              if ( *(_DWORD *)(v37 + 12) )
LABEL_77:
                ++v36;
              else
LABEL_73:
                v47 = *(_DWORD *)v46;
                while ( 1 )
                  v46 = v47;
                  if ( !v47 )
                    break;
                  v47 = *(_DWORD *)(v47 + 4);
                    if ( !*(_DWORD *)(v46 + 12) )
                      goto LABEL_73;
                    goto LABEL_77;
              v37 = *(_DWORD *)(v37 + 4);
              v35 += 40;
            }
            if ( v37 )
              goto LABEL_83;
LABEL_79:
            v57 = 0;
            v58 = 0;
            CommandRegistry::describe(&v56, (int)v53, v33, (int *)v52, v13, v36, &v58, &v57);
            v48 = *(_QWORD *)((char *)v7 + 12);
            if ( (_DWORD)v48 == HIDWORD(v48) )
              std::vector<OverloadSyntaxInformation,std::allocator<OverloadSyntaxInformation>>::_M_emplace_back_aux<std::string &,unsigned int &,unsigned int &>(
                (unsigned __int64 *)v7 + 1,
                &v56,
                &v58,
                &v57);
            else
              OverloadSyntaxInformation::OverloadSyntaxInformation((int *)v48, &v56, v58, v57);
              *((_DWORD *)v7 + 3) += 12;
            v49 = (void *)(v56 - 12);
            if ( (int *)(v56 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v56 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j__ZdlPv_9(v49);
          }
LABEL_83:
          v13 += 28;
          result = v55;
          if ( v13 == v55 )
            break;
        }
      }
    }
  }
  return result;
}


void __fastcall CommandRegistry::findPostfix(int *a1, int a2, _BYTE **a3)
{
  int *v3; // r4@1
  _BYTE **v4; // r7@1
  int v5; // r5@1
  const char *v6; // r6@1
  int v7; // r0@6
  int v8; // r8@7
  _DWORD *v9; // r0@7
  int *v10; // r9@7
  char *v11; // r7@7
  char *v12; // r0@13
  __int64 v13; // kr00_8@14
  const void **v14; // r0@14
  int v15; // r0@15
  int v16; // r1@17
  void *v17; // r0@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  char *v22; // [sp+4h] [bp-34h]@13
  void *v23; // [sp+8h] [bp-30h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v23 = &unk_28898CC;
  v6 = *a3;
  if ( *((_DWORD *)*a3 - 3) )
  {
    while ( CommandLexer::isDigit((CommandLexer *)*v6, a2) || *v6 == 45 )
    {
      ++v6;
      a2 = *((_DWORD *)*v4 - 3);
      if ( v6 == &(*v4)[a2] )
        goto LABEL_14;
    }
    v7 = (int)&(*v4)[*((_DWORD *)*v4 - 3)];
    if ( v6 == (const char *)v7 )
      v11 = (char *)&unk_28898CC;
    else
      v8 = v7 - (_DWORD)v6;
      v9 = sub_21E7E80(v7 - (_DWORD)v6, 0);
      v10 = v9;
      v11 = (char *)(v9 + 3);
      if ( v8 == 1 )
        *v11 = *v6;
      else
        _aeabi_memcpy(v9 + 3, v6, v8);
      if ( v10 != &dword_28898C0 )
      {
        v10[2] = 0;
        *v10 = v8;
        v11[v8] = byte_26C67B8[0];
      }
    v22 = v11;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v23,
      (int *)&v22);
    v12 = v22 - 12;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  }
LABEL_14:
  v13 = *(_QWORD *)(v5 + 132);
  v14 = std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
          v13,
          (const void **)HIDWORD(v13),
          (const void **)&v23);
  if ( v14 == (const void **)HIDWORD(v13) )
    v15 = 0;
  else
    v15 = ((signed int)((signed int)v14 - v13) >> 2) | 0x1000000;
  v16 = (int)v23;
  *v3 = v15;
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


int __fastcall CommandRegistry::Symbol::Symbol(int result, unsigned int a2)
{
  *(_DWORD *)result = a2;
  return result;
}


unsigned int __fastcall CommandRegistry::Symbol::isFactorization(CommandRegistry::Symbol *this)
{
  return (unsigned int)*((_BYTE *)this + 2) >> 7;
}


void __fastcall CommandRegistry::serializeAvailableCommands(CommandRegistry *this, int a2)
{
  CommandRegistry::serializeAvailableCommands(this, a2);
}


int __fastcall CommandRegistry::isCommandOfType(int a1, int *a2, char a3)
{
  char v3; // r8@1
  int *v4; // r7@1
  int v5; // r6@1
  unsigned int i; // r5@1
  CommandLexer *v7; // r0@3
  char *v8; // r0@5
  unsigned int v9; // r3@5
  int v10; // r5@6
  void *v11; // r0@6
  int result; // r0@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  int v15; // [sp+0h] [bp-20h]@6

  v3 = a3;
  v4 = a2;
  v5 = a1;
  for ( i = 0; ; ++i )
  {
    v7 = (CommandLexer *)*(_BYTE *)(*v4 + i);
    if ( v7 != (CommandLexer *)47 && CommandLexer::isSpace(v7, (char)a2) != 1 )
      break;
  }
  v8 = sub_21E77E4(v4, 32, i);
  v9 = *(_DWORD *)(*v4 - 12);
  if ( v9 < i )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", i, v9);
  sub_21E9040((void **)&v15, v4, i, (unsigned int)&v8[-i]);
  v10 = CommandRegistry::findCommand(v5, (const void **)&v15);
  v11 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( v10 )
    result = (unsigned __int8)(*(_BYTE *)(v10 + 32) & v3) != 0;
  else
    result = 0;
  return result;
}


void __fastcall CommandRegistry::buildRules(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, void *a33, int a34, int a35, void *a36)
{
  int v36; // r11@1
  int *v37; // r10@1
  __int64 v38; // r0@1
  unsigned __int64 *v39; // r8@1
  unsigned int v40; // r9@1
  signed int v41; // r4@1
  signed int v42; // r3@2
  __int64 v43; // kr00_8@3
  signed int v44; // r3@5
  char *v45; // r1@11
  signed int v46; // r3@11
  int v47; // r7@13
  void *v48; // r0@17
  __int64 v49; // kr08_8@17
  int v50; // r4@24
  int v51; // r10@24
  signed int v52; // r8@25
  int v53; // r11@25
  char *v54; // r7@25
  __int64 v55; // r0@26
  char *v56; // r1@27
  signed int v57; // r0@27
  int v58; // r2@27
  int v59; // r6@28
  bool v60; // zf@29
  char *v61; // r2@29
  int v62; // r5@32
  bool v63; // zf@32
  int v64; // r2@37
  int v65; // r3@39
  signed int v66; // r7@52
  unsigned int v67; // r8@52
  signed int v68; // r9@52
  char *v69; // r5@52
  unsigned int v70; // r1@52
  unsigned int v71; // r0@54
  unsigned int v72; // r6@54
  unsigned int v73; // r1@62
  unsigned int v74; // r1@64
  char *v75; // r0@64
  int v76; // r1@66
  int v77; // r7@67
  signed int v78; // r5@74
  int *v79; // r1@74
  int v80; // r4@75
  int v81; // r6@75
  int v82; // r10@75
  signed int v83; // r8@76
  int v84; // r7@77
  __int64 v85; // r0@77
  int v86; // r1@80
  char *v87; // r4@81
  signed int v88; // r11@81
  char *v89; // r5@81
  unsigned int v90; // r1@81
  unsigned int v91; // r0@83
  unsigned int v92; // r6@83
  int v93; // r8@90
  int v94; // r0@94
  char *v95; // r4@95
  char *v96; // r11@95
  unsigned int v97; // r6@96
  unsigned int v98; // r0@97
  __int64 v99; // r0@99
  int v100; // r9@99
  char *v101; // r5@100
  int v102; // r6@100
  bool v103; // zf@101
  char *v104; // r5@107
  unsigned int v105; // r1@107
  unsigned int v106; // r0@109
  unsigned int v107; // r8@109
  unsigned int v108; // r2@116
  char *v109; // r0@116
  char *v110; // r1@116
  int v111; // t1@117
  int v112; // r1@125
  signed int v113; // r8@128
  signed int v114; // r0@128
  int v115; // r5@131
  unsigned int v116; // r9@131
  unsigned int v117; // r6@131
  int v118; // r4@132
  int v119; // r1@132
  bool v120; // zf@132
  bool v121; // cf@145
  char *v122; // r7@152
  char *v123; // r10@152
  char *v124; // r11@152
  signed int v125; // r8@154
  unsigned int v126; // r6@154
  int v127; // r0@154
  int *v128; // r3@154
  unsigned int v129; // r1@154
  signed int v130; // r11@159
  __int64 v131; // r4@159
  unsigned int v132; // r10@159
  signed int v133; // r7@159
  signed int v134; // r9@161
  unsigned int v135; // r0@161
  _DWORD *v136; // r4@161
  unsigned int v137; // r8@163
  char *v138; // r1@170
  _DWORD *v139; // r0@170
  unsigned int v140; // r2@170
  int v141; // t1@171
  char *v142; // r7@173
  _DWORD *v143; // r0@176
  int v144; // r4@176
  __int64 v145; // kr48_8@176
  signed int v146; // r9@181
  unsigned int v147; // r0@181
  char *v148; // r6@181
  unsigned int v149; // r8@183
  char *v150; // r0@190
  unsigned int v151; // r0@191
  int v152; // r0@193
  char *v153; // r4@194
  _DWORD *v154; // r0@197
  __int64 v155; // kr50_8@197
  int v156; // [sp+4h] [bp-F4h]@0
  int v157; // [sp+8h] [bp-F0h]@0
  int v158; // [sp+Ch] [bp-ECh]@0
  int v159; // [sp+10h] [bp-E8h]@0
  int *v160; // [sp+14h] [bp-E4h]@24
  int v161; // [sp+18h] [bp-E0h]@13
  int v162; // [sp+1Ch] [bp-DCh]@74
  _DWORD *(__fastcall *v163)(_DWORD *, int *, _DWORD *); // [sp+20h] [bp-D8h]@74
  int (__fastcall *v164)(void **, void **, int); // [sp+24h] [bp-D4h]@74
  int (__fastcall *v165)(int *, int, int *); // [sp+28h] [bp-D0h]@74
  unsigned __int64 *v166; // [sp+2Ch] [bp-CCh]@24
  char *v167; // [sp+30h] [bp-C8h]@25
  int v168; // [sp+34h] [bp-C4h]@74
  int v169; // [sp+38h] [bp-C0h]@75
  int v170; // [sp+3Ch] [bp-BCh]@13
  int v171; // [sp+40h] [bp-B8h]@25
  int v172; // [sp+40h] [bp-B8h]@159
  int v173; // [sp+44h] [bp-B4h]@75
  int v174; // [sp+48h] [bp-B0h]@75
  char *v175; // [sp+4Ch] [bp-ACh]@76
  int v176; // [sp+50h] [bp-A8h]@74
  int v177; // [sp+54h] [bp-A4h]@0
  int v178; // [sp+58h] [bp-A0h]@159
  int v179; // [sp+5Ch] [bp-9Ch]@159
  int (__fastcall *v180)(void **, void **, int); // [sp+60h] [bp-98h]@159
  int (__fastcall *v181)(int *, int, int *); // [sp+64h] [bp-94h]@159
  int v182; // [sp+68h] [bp-90h]@159
  void *v183; // [sp+6Ch] [bp-8Ch]@159
  void *v184; // [sp+70h] [bp-88h]@159
  int v185; // [sp+74h] [bp-84h]@159
  void (*v186)(void); // [sp+78h] [bp-80h]@159
  int (__fastcall *v187)(int *, int, int *); // [sp+7Ch] [bp-7Ch]@159
  int v188; // [sp+80h] [bp-78h]@176
  int v189; // [sp+84h] [bp-74h]@157
  int v190; // [sp+88h] [bp-70h]@132
  int v191; // [sp+8Ch] [bp-6Ch]@105
  int v192; // [sp+90h] [bp-68h]@78
  char *v193; // [sp+94h] [bp-64h]@75
  int v194; // [sp+98h] [bp-60h]@75
  char *v195; // [sp+9Ch] [bp-5Ch]@75
  void *v196; // [sp+A0h] [bp-58h]@75
  char *v197; // [sp+A4h] [bp-54h]@75
  char *v198; // [sp+A8h] [bp-50h]@75
  int v199; // [sp+ACh] [bp-4Ch]@27
  int (__fastcall *v200)(int); // [sp+B0h] [bp-48h]@17
  void (*v201)(void); // [sp+B8h] [bp-40h]@17
  int (__fastcall *v202)(int (__fastcall **)(int, int *), int, int *); // [sp+BCh] [bp-3Ch]@17
  void *ptr; // [sp+C0h] [bp-38h]@17
  char *v204; // [sp+C4h] [bp-34h]@17
  char *v205; // [sp+C8h] [bp-30h]@17
  int v206; // [sp+CCh] [bp-2Ch]@17
  int v207; // [sp+D0h] [bp-28h]@13

  v36 = a2;
  v37 = (int *)a1;
  v38 = *(_QWORD *)a4;
  v39 = (unsigned __int64 *)a4;
  v40 = a5;
  v41 = 0;
  if ( (_DWORD)v38 != HIDWORD(v38) )
  {
    v42 = 1;
    do
    {
      v43 = *(_QWORD *)(*(_DWORD *)v38 + 12);
      if ( -858993459 * ((HIDWORD(v43) - (signed int)v43) >> 3) == a5 )
      {
        v41 = 1;
      }
      else
        v44 = *(_BYTE *)(v43 + 40 * a5 + 36);
        if ( *(_BYTE *)(v43 + 40 * a5 + 36) )
          v44 = 1;
        v41 |= v44;
        v42 = 0;
      LODWORD(v38) = v38 + 4;
    }
    while ( HIDWORD(v38) != (_DWORD)v38 );
    if ( v42 & v41 & 1 )
      *v37 = 0x100000;
      return;
  }
  v45 = *(char **)(v36 + 124);
  v46 = (signed int)&v45[-*(_DWORD *)(v36 + 120)];
  if ( *(_DWORD *)(a3 + 40) == -1 )
    *(_DWORD *)(a3 + 40) = v46 >> 2;
  v47 = *(_DWORD *)(a3 + 24);
  v207 = *(_DWORD *)(a3 + 24);
  v170 = (v46 >> 2) | 0x900000;
  v161 = a3;
  if ( v45 == *(char **)(v36 + 128) )
    std::vector<CommandRegistry::Factorization,std::allocator<CommandRegistry::Factorization>>::_M_emplace_back_aux<CommandRegistry::Factorization>(
      (unsigned __int64 *)(v36 + 120),
      &v207);
  else
    *(_DWORD *)v45 = v47;
    *(_DWORD *)(v36 + 124) = v45 + 4;
  if ( v41 & 1 )
    v206 = v170;
    v48 = operator new(4u);
    ptr = v48;
    v205 = (char *)v48 + 4;
    *(_DWORD *)v48 = 0x100000;
    v204 = (char *)v48 + 4;
    v200 = CommandRegistry::kill;
    v201 = (void (*)(void))std::_Function_base::_Base_manager<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_manager;
    v202 = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_invoke;
    v49 = *(_QWORD *)(v36 + 4);
    if ( (_DWORD)v49 == HIDWORD(v49) )
      std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        (__int64 *)v36,
        &v206,
        (int)&ptr,
        (int)&v200);
    else
      __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
        v36,
        (_DWORD *)v49,
      *(_DWORD *)(v36 + 4) += 32;
    *(_BYTE *)(v36 + 360) = 0;
    if ( v201 )
      v201();
    if ( ptr )
      operator delete(ptr);
  v160 = v37;
  v166 = v39;
  v51 = *v39 >> 32;
  v50 = *v39;
  if ( v50 != v51 )
    v52 = -858993459;
    v171 = v36;
    v53 = 0;
    v54 = 0;
    v167 = 0;
    while ( 1 )
      v55 = *(_QWORD *)(*(_DWORD *)v50 + 12);
      if ( ((HIDWORD(v55) - (signed int)v55) >> 3) * v52 > v40 )
        break;
LABEL_69:
      v50 += 4;
      if ( v50 == v51 )
        goto LABEL_73;
    CommandRegistry::getParseSymbol(&v199, v55 + 40 * v40);
    v56 = v167;
    v57 = v54 - v167;
    v58 = (v54 - v167) >> 4;
    if ( v58 >= 1 )
      v59 = v58 + 1;
      v56 = v167;
      do
        v60 = *(_DWORD *)v56 == v199;
        v61 = v56;
        if ( *(_DWORD *)v56 != v199 )
        {
          v61 = v56 + 4;
          v60 = *((_DWORD *)v56 + 1) == v199;
        }
        if ( v60 )
          goto LABEL_49;
        v61 = v56 + 8;
        v62 = *((_DWORD *)v56 + 2);
        v63 = v62 == v199;
        if ( v62 != v199 )
          v61 = v56 + 12;
          v63 = *((_DWORD *)v56 + 3) == v199;
        if ( v63 )
        --v59;
        v56 += 16;
      while ( v59 > 1 );
    if ( 1 == (v54 - v56) >> 2 )
      v65 = v199;
      v61 = v56;
LABEL_45:
      if ( *(_DWORD *)v61 != v65 )
        v61 = v54;
      goto LABEL_49;
    v64 = (v54 - v56) >> 2;
    if ( v64 == 3 )
      if ( *(_DWORD *)v56 == v199 )
        goto LABEL_49;
      v61 = v56 + 4;
      if ( v64 != 2 )
    if ( *(_DWORD *)v61 != v65 )
      v61 += 4;
      goto LABEL_45;
LABEL_49:
    if ( v61 == v54 )
      if ( v54 == (char *)v53 )
        v66 = v52;
        v67 = v40;
        v68 = v57 >> 2;
        v69 = 0;
        v70 = v57 >> 2;
        if ( !(v57 >> 2) )
          v70 = 1;
        v71 = v70 + (v57 >> 2);
        v72 = v71;
        if ( 0 != v71 >> 30 )
          v72 = 0x3FFFFFFF;
        if ( v71 < v70 )
        if ( v72 )
          if ( v72 >= 0x40000000 )
            sub_21E57F4();
          v69 = (char *)operator new(4 * v72);
        *(_DWORD *)&v69[4 * v68] = v199;
        if ( v167 == (char *)v53 )
          v75 = (char *)v53;
          v74 = (unsigned int)v69;
          v40 = v67;
        else
          v73 = 0;
          do
          {
            *(_DWORD *)&v69[v73] = *(_DWORD *)&v167[v73];
            v73 += 4;
          }
          while ( v53 - (_DWORD)v167 != v73 );
          v74 = (unsigned int)&v69[((v53 - 4 - (_DWORD)v167) & 0xFFFFFFFC) + 4];
          v75 = v167;
        v76 = v74 + 4;
        v52 = v66;
        if ( v75 )
          v77 = v76;
          operator delete(v75);
          v76 = v77;
        v53 = (int)&v69[4 * v72];
        v54 = (char *)v76;
        v167 = v69;
        *(_DWORD *)v54 = v199;
        v54 += 4;
    goto LABEL_69;
  v54 = 0;
  v171 = v36;
  v167 = 0;
LABEL_73:
  if ( v167 == v54 )
    goto LABEL_211;
  v176 = 5 * v40;
  v78 = -858993459;
  v168 = 40 * v40 + 36;
  v162 = (int)v54;
  v165 = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),std::_Bind<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol,CommandRegistry::Symbol) ()(std::_Placeholder<1>,std::_Placeholder<2>,CommandRegistry::Symbol)>>::_M_invoke;
  v164 = std::_Function_base::_Base_manager<std::_Bind<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol,CommandRegistry::Symbol) ()(std::_Placeholder<1>,std::_Placeholder<2>,CommandRegistry::Symbol)>>::_M_manager;
  v163 = CommandRegistry::fold;
  v79 = (int *)v167;
  do
    v80 = *v79;
    v169 = (int)v79;
    v174 = *v79;
    v197 = 0;
    v198 = 0;
    v193 = 0;
    v194 = 0;
    v195 = 0;
    v196 = 0;
    v81 = *v166 >> 32;
    v82 = *v166;
    v173 = v81;
    if ( v82 == v81 )
      v122 = 0;
      v123 = 0;
      v124 = 0;
LABEL_154:
      v125 = v122 - v123;
      v126 = v40 + ((v122 - v123) >> 2);
      v128 = (int *)(*(_DWORD *)v124 + 12);
      v127 = *v128;
      v129 = ((*(_DWORD *)(*(_DWORD *)v124 + 16) - *v128) >> 3) * v78;
      if ( v129 > v126 )
        if ( *(_DWORD *)(v161 + 44) == -1 )
          *(_DWORD *)(v161 + 44) = -1431655765
                                 * ((signed int)((*(_QWORD *)(v171 + 84) >> 32) - *(_QWORD *)(v171 + 84)) >> 2);
        CommandRegistry::buildOptionalRuleChain(
          &v189,
          v171,
          (const void **)v161,
          (int)v128,
          v127 + 40 * v126,
          v129 - v126);
        if ( v122 == v198 )
          v134 = v125 >> 2;
          v135 = v125 >> 2;
          v136 = 0;
          if ( !(v125 >> 2) )
            v135 = 1;
          v137 = v135 + v134;
          if ( 0 != (v135 + v134) >> 30 )
            v137 = 0x3FFFFFFF;
          if ( v135 + v134 < v135 )
          if ( v137 )
            if ( v137 >= 0x40000000 )
              sub_21E57F4();
            v136 = operator new(4 * v137);
          v138 = v123;
          v136[v134] = v189;
          v139 = v136;
          v140 = (unsigned int)v136;
          if ( v123 != v122 )
            do
            {
              v141 = *(_DWORD *)v138;
              v138 += 4;
              *v139 = v141;
              ++v139;
            }
            while ( v122 != v138 );
            v140 = (unsigned int)v136 + ((v122 - 4 - v123) & 0xFFFFFFFC) + 4;
          v142 = (char *)(v140 + 4);
          v40 = a5;
          if ( v123 )
            operator delete(v123);
          v196 = v136;
          v197 = v142;
          v198 = (char *)&v136[v137];
          *(_DWORD *)v122 = v189;
          v197 = v122 + 4;
      v188 = v170;
      v186 = 0;
      v143 = operator new(8u);
      *v143 = v163;
      v143[1] = v170;
      v184 = v143;
      v144 = v171;
      v187 = v165;
      v186 = (void (*)(void))v164;
      v145 = *(_QWORD *)(v171 + 4);
      if ( (_DWORD)v145 == HIDWORD(v145) )
        std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
          (__int64 *)v171,
          &v188,
          (int)&v196,
          (int)&v184);
        __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
          (_DWORD *)v145,
        *(_DWORD *)(v171 + 4) += 32;
      v78 = -858993459;
      *(_BYTE *)(v171 + 360) = 0;
      if ( v186 )
        v186();
      goto LABEL_203;
    v83 = 1;
    v175 = 0;
      v84 = *(_DWORD *)v82;
      v85 = *(_QWORD *)(*(_DWORD *)v82 + 12);
      if ( ((HIDWORD(v85) - (signed int)v85) >> 3) * v78 > v40 )
        CommandRegistry::getParseSymbol(&v192, v85 + 8 * v176);
        if ( v192 == v80 )
          v177 = v83;
          if ( v175 == v195 )
            v87 = v193;
            v88 = v78;
            v89 = 0;
            v90 = (v175 - v193) >> 2;
            if ( !v90 )
              v90 = 1;
            v91 = v90 + ((v175 - v193) >> 2);
            v92 = v90 + ((v175 - v193) >> 2);
            if ( 0 != v91 >> 30 )
              v92 = 0x3FFFFFFF;
            if ( v91 < v90 )
            if ( v92 )
              if ( v92 >= 0x40000000 )
                sub_21E57F4();
              v89 = (char *)operator new(4 * v92);
            v93 = (int)&v89[v175 - v87];
            *(_DWORD *)&v89[v175 - v87] = v84;
            if ( (v175 - v87) >> 2 )
              _aeabi_memmove4(v89, v87);
            v86 = v93 + 4;
            if ( v87 )
              operator delete(v87);
              v86 = v93 + 4;
            v193 = v89;
            v194 = v86;
            v94 = (int)&v89[4 * v92];
            v78 = v88;
            v195 = (char *)v94;
          else
            *(_DWORD *)v175 = v84;
            v86 = v194 + 4;
            v194 += 4;
          v175 = (char *)v86;
          v95 = v197;
          v96 = (char *)v196;
          if ( v196 == v197 )
            v99 = *(_QWORD *)(v84 + 12);
            v100 = v99 + 8 * v176;
            if ( v100 == HIDWORD(v99) )
              v40 = a5;
            else
              v101 = (char *)v196;
              v102 = v99 + 8 * v176;
              do
              {
                v103 = v102 == v100;
                if ( v102 != v100 )
                  v103 = *(_BYTE *)(v102 + 36) == 0;
                if ( !v103 )
                  break;
                CommandRegistry::getParseSymbol(&v191, v102);
                if ( v101 == v198 )
                {
                  v104 = 0;
                  v105 = (v95 - v96) >> 2;
                  if ( !v105 )
                    v105 = 1;
                  v106 = v105 + ((v95 - v96) >> 2);
                  v107 = v105 + ((v95 - v96) >> 2);
                  if ( 0 != v106 >> 30 )
                    v107 = 0x3FFFFFFF;
                  if ( v106 < v105 )
                  if ( v107 )
                  {
                    if ( v107 >= 0x40000000 )
                      sub_21E57F4();
                    v104 = (char *)operator new(4 * v107);
                  }
                  v108 = (unsigned int)v104;
                  *(_DWORD *)&v104[v95 - v96] = v191;
                  v109 = v104;
                  v110 = v96;
                  if ( v95 != v96 )
                    do
                    {
                      v111 = *(_DWORD *)v110;
                      v110 += 4;
                      *(_DWORD *)v109 = v111;
                      v109 += 4;
                    }
                    while ( v95 != v110 );
                    v108 = (unsigned int)&v104[((v95 - 4 - v96) & 0xFFFFFFFC) + 4];
                  v95 = (char *)(v108 + 4);
                  if ( v96 )
                    operator delete(v96);
                  v96 = v104;
                  v196 = v104;
                  v197 = v95;
                  v198 = &v104[4 * v107];
                }
                else
                  *(_DWORD *)v101 = v191;
                  v197 = v101 + 4;
                  v95 = v101 + 4;
                v102 += 40;
                v101 = v95;
              }
              while ( v102 != *(_DWORD *)(v84 + 16) );
LABEL_137:
              v78 = -858993459;
LABEL_144:
            v80 = v174;
            v81 = v173;
            v83 = v177;
            goto LABEL_148;
          v97 = ((signed int)((*(_QWORD *)(v84 + 12) >> 32) - *(_QWORD *)(v84 + 12)) >> 3) * v78 - v40;
          if ( v97 >= (v197 - (_BYTE *)v196) >> 2 )
            v112 = v177;
            v98 = (v197 - (_BYTE *)v196) >> 2;
            if ( v97 <= v98 )
              v95 = (char *)v196 + 4 * v97;
              v197 = (char *)v196 + 4 * v97;
              std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_default_append(
                (int)&v196,
                v97 - v98);
              v95 = v197;
              v96 = (char *)v196;
            v112 = 0;
          v113 = v95 - v96;
          v114 = 0;
          if ( v97 <= (v95 - v96) >> 2 )
            v114 = 1;
          v177 = v112 & v114;
          if ( v95 == v96 )
            goto LABEL_144;
          v115 = v168;
          v116 = v113 >> 2;
          v117 = 0;
          while ( 1 )
            v118 = *(_DWORD *)(v84 + 12);
            CommandRegistry::getParseSymbol(&v190, v118 + v115 - 36);
            v119 = *(_DWORD *)&v96[4 * v117];
            v120 = v190 == v119;
            if ( v190 == v119 )
              v120 = *(_BYTE *)(v118 + v115) == 0;
            if ( !v120 )
              break;
            ++v117;
            v115 += 40;
            if ( v117 >= v116 )
              goto LABEL_137;
          if ( !v117 )
            v117 = 0;
            if ( v190 == *(_DWORD *)v96 )
              v117 = 1;
          if ( v117 <= v113 >> 2 )
            v121 = v117 >= v116;
            v40 = a5;
            if ( !v121 )
              v197 = &v96[4 * v117];
            std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_default_append(
              (int)&v196,
              v117 - v116);
          v78 = -858993459;
          v83 = 0;
          v80 = v174;
          v81 = v173;
LABEL_148:
      v82 += 4;
    while ( v82 != v81 );
    if ( v83 & 1 )
      v122 = v197;
      v123 = (char *)v196;
      v124 = v193;
      goto LABEL_154;
    v130 = v78;
    v131 = *(_QWORD *)&v196;
    v132 = v40;
    v133 = v197 - (_BYTE *)v196;
    CommandRegistry::buildRules(
      (int)&v183,
      v171,
      v161,
      (int)&v193,
      v40 + ((v197 - (_BYTE *)v196) >> 2),
      v156,
      v157,
      v158,
      v159,
      (int)v160,
      v162,
      (int)v163,
      (int)v164,
      (int)v165,
      (int)v166,
      (int)v167,
      v168,
      v169,
      v170,
      v173,
      v174,
      (int)v175,
      v176,
      v177,
      v178,
      v179,
      v180,
      (int)v181,
      v182,
      v183,
      v184,
      v185,
      (int)v186,
      v187);
    if ( (char *)HIDWORD(v131) == v198 )
      v146 = v133 >> 2;
      v147 = v133 >> 2;
      v148 = 0;
      if ( !(v133 >> 2) )
        v147 = 1;
      v149 = v147 + v146;
      if ( 0 != (v147 + v146) >> 30 )
        v149 = 0x3FFFFFFF;
      if ( v147 + v146 < v147 )
      if ( v149 )
        if ( v149 >= 0x40000000 )
          sub_21E57F4();
        v148 = (char *)operator new(4 * v149);
      *(_DWORD *)&v148[4 * v146] = v183;
      v150 = v148;
      if ( (_DWORD)v131 != HIDWORD(v131) )
        v151 = 0;
        do
          *(_DWORD *)&v148[v151] = *(_DWORD *)(v131 + v151);
          v151 += 4;
        while ( v133 != v151 );
        v152 = HIDWORD(v131) - 4;
        HIDWORD(v131) = v131;
        v150 = &v148[((v152 - v131) & 0xFFFFFFFC) + 4];
      LODWORD(v131) = v150 + 4;
      if ( HIDWORD(v131) )
        operator delete((void *)HIDWORD(v131));
      v196 = v148;
      v197 = v153;
      v198 = &v148[4 * v149];
      *(_DWORD *)HIDWORD(v131) = v183;
      v197 = (char *)(HIDWORD(v131) + 4);
    v182 = v170;
    v180 = 0;
    v154 = operator new(8u);
    *v154 = v163;
    v154[1] = v170;
    v178 = (int)v154;
    v144 = v172;
    v181 = v165;
    v180 = v164;
    v155 = *(_QWORD *)(v172 + 4);
    if ( (_DWORD)v155 == HIDWORD(v155) )
        (__int64 *)v172,
        &v182,
        (int)&v196,
        (int)&v178);
        v172,
        (_DWORD *)v155,
      *(_DWORD *)(v172 + 4) += 32;
    v40 = v132;
    *(_BYTE *)(v172 + 360) = 0;
    v78 = v130;
    if ( v180 )
      ((void (*)(void))v180)();
    v124 = v193;
LABEL_203:
    if ( v124 )
      operator delete(v124);
    v171 = v144;
    if ( v196 )
      operator delete(v196);
    v79 = (int *)(v169 + 4);
  while ( v169 + 4 != v162 );
LABEL_211:
  *v160 = v170;
  if ( v167 )
    operator delete(v167);
}


void *__fastcall CommandRegistry::expandOn(_DWORD *a1, int *a2, _DWORD *a3)
{
  int v3; // r1@1
  void *result; // r0@2
  int v5; // [sp+4h] [bp-Ch]@3

  v3 = *a2;
  if ( v3 == *a3 )
  {
    v5 = v3;
    result = CommandRegistry::expand(a1, &v5);
  }
  else
    result = 0;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<TeleportCommand::FacingResult>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id) )
    type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id);
  v25 = type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TeleportCommand::FacingResult>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::getCommandOverloadSyntaxInformation(CommandSyntaxInformation *a1, int a2, int a3, const void **a4)
{
  const void **v4; // r10@1
  int v5; // r4@1
  int v6; // r6@1
  CommandSyntaxInformation *v7; // r11@1
  __int64 v8; // r0@1
  int v9; // r7@1
  char v10; // r5@2
  unsigned int *v11; // r2@7
  int v12; // r5@7
  int i; // r9@7
  signed int v14; // r1@11
  __int64 v15; // r0@17
  void *v16; // r0@20
  char v17; // r2@22
  int v19; // [sp+1Ch] [bp-34h]@17
  int v20; // [sp+20h] [bp-30h]@17
  int v21; // [sp+24h] [bp-2Ch]@9

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  CommandSyntaxInformation::CommandSyntaxInformation(a1);
  LODWORD(v8) = CommandRegistry::findCommand(v6, v4);
  v9 = v8;
  if ( (_DWORD)v8 )
  {
    v10 = *(_BYTE *)(v8 + 32);
    v8 = (unsigned int)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 44))(v5);
    if ( !(v10 & 2) )
      HIDWORD(v8) = 1;
    LODWORD(v8) = v8 | HIDWORD(v8);
    if ( (_DWORD)v8 )
    {
      LODWORD(v8) = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 36))(v5);
      if ( (unsigned int)v8 >= *(_BYTE *)(v9 + 20) )
      {
        LODWORD(v8) = *(_BYTE *)(v9 + 32);
        if ( !(v8 & 2) )
        {
          EntityInteraction::setInteractText((int *)v7 + 1, (int *)(v9 + 4));
          v12 = *(_QWORD *)(v9 + 8) >> 32;
          for ( i = *(_QWORD *)(v9 + 8); i != v12; i += 28 )
          {
            CommandRegistry::describe(&v21, v6, (int)v11, (int *)v4, i, 0, 0, 0);
            v19 = 0;
            v20 = 0;
            v15 = *(_QWORD *)((char *)v7 + 12);
            if ( (_DWORD)v15 == HIDWORD(v15) )
            {
              std::vector<OverloadSyntaxInformation,std::allocator<OverloadSyntaxInformation>>::_M_emplace_back_aux<std::string,int,int>(
                (unsigned __int64 *)v7 + 1,
                &v21,
                &v20,
                &v19);
            }
            else
              OverloadSyntaxInformation::OverloadSyntaxInformation((int *)v15, &v21, 0, 0);
              *((_DWORD *)v7 + 3) += 12;
            v16 = (void *)(v21 - 12);
            if ( (int *)(v21 - 12) != &dword_28898C0 )
              v11 = (unsigned int *)(v21 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v14 = __ldrex(v11);
                while ( __strex(v14 - 1, v11) );
              }
              else
                v14 = (*v11)--;
              if ( v14 <= 0 )
                j_j_j_j__ZdlPv_9(v16);
          }
          v8 = *((_QWORD *)v7 + 1);
          v17 = 0;
          if ( (_DWORD)v8 != HIDWORD(v8) )
            v17 = 1;
          *(_BYTE *)v7 = v17;
        }
      }
    }
  }
  return v8;
}


signed int __fastcall CommandRegistry::parseEnum<TickingAreaCommand::Mode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


void __fastcall CommandRegistry::buildParseTable(CommandRegistry *this)
{
  CommandRegistry *v1; // r6@1
  char *v2; // r5@1
  int v3; // r4@1
  signed int v4; // r6@1
  int v5; // r0@2
  unsigned int *v6; // r1@2 OVERLAPPED
  unsigned int *v7; // r2@2
  unsigned int v8; // r6@7
  int v9; // r0@8
  unsigned int *v10; // r1@8 OVERLAPPED
  unsigned int *v11; // r2@8
  unsigned int v12; // r6@13
  int v13; // r0@14
  unsigned int *v14; // r1@14 OVERLAPPED
  unsigned int *v15; // r2@14
  int v16; // r0@18
  _DWORD *v17; // r1@18 OVERLAPPED
  _DWORD *v18; // r2@18
  _DWORD *v19; // r0@21
  __int64 v20; // r1@21
  int v21; // r0@23
  __int64 v22; // r2@23
  _DWORD *v23; // r0@26
  __int64 v24; // r1@26
  __int64 v25; // r0@28
  unsigned int v26; // r10@29
  int v27; // r9@30
  int *v28; // r6@30
  int v29; // r7@31
  char v30; // r11@31
  int *v31; // r8@31
  int v32; // r2@32
  _DWORD *v33; // r1@34
  int v34; // r0@34
  _DWORD *i; // r5@34
  _DWORD *v36; // r3@35
  int v37; // r5@36
  int v38; // r3@43
  int *v39; // r5@54
  __int64 v40; // kr00_8@54
  _DWORD *v41; // r6@54
  int v42; // r2@55
  int v43; // r7@55
  int v44; // r0@55
  _DWORD *v45; // r4@55
  _DWORD *j; // r1@55
  _DWORD *v47; // r3@56
  int v48; // r4@57
  int v49; // r3@64
  int v50; // [sp+4h] [bp-D4h]@1
  int v51; // [sp+8h] [bp-D0h]@1
  int *ptr; // [sp+Ch] [bp-CCh]@31
  int v53; // [sp+10h] [bp-C8h]@1
  int v54; // [sp+14h] [bp-C4h]@55
  int v55; // [sp+18h] [bp-C0h]@55
  int v56; // [sp+1Ch] [bp-BCh]@34
  int v57; // [sp+20h] [bp-B8h]@34
  int *v58; // [sp+24h] [bp-B4h]@30
  int *v59; // [sp+28h] [bp-B0h]@30
  int (__fastcall *v60)(_QWORD *, int *, int); // [sp+30h] [bp-A8h]@26
  int v61; // [sp+34h] [bp-A4h]@26
  int v62; // [sp+38h] [bp-A0h]@28
  int v63; // [sp+3Ch] [bp-9Ch]@26
  int v64; // [sp+40h] [bp-98h]@26
  int *v65; // [sp+44h] [bp-94h]@26
  int *v66; // [sp+48h] [bp-90h]@26
  int v67; // [sp+4Ch] [bp-8Ch]@26
  int v68; // [sp+50h] [bp-88h]@26
  _DWORD *v69; // [sp+58h] [bp-80h]@26
  void (*v70)(void); // [sp+60h] [bp-78h]@26
  char v71; // [sp+68h] [bp-70h]@70
  int v72; // [sp+6Ch] [bp-6Ch]@26
  int v73; // [sp+70h] [bp-68h]@26
  int *v74; // [sp+74h] [bp-64h]@26
  int *v75; // [sp+78h] [bp-60h]@26
  int v76; // [sp+7Ch] [bp-5Ch]@26
  int v77; // [sp+80h] [bp-58h]@23
  int v78; // [sp+84h] [bp-54h]@23
  _DWORD *v79; // [sp+88h] [bp-50h]@21
  __int64 v80; // [sp+90h] [bp-48h]@21
  int v81; // [sp+98h] [bp-40h]@18
  int v82; // [sp+9Ch] [bp-3Ch]@18
  unsigned int v83; // [sp+A0h] [bp-38h]@2
  int *v84; // [sp+A8h] [bp-30h]@67
  int *v85; // [sp+B0h] [bp-28h]@46

  v1 = this;
  v2 = (char *)this + 12;
  std::_Rb_tree<CommandRegistry::Symbol,std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>,std::_Select1st<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::_M_erase(
    (int)this + 12,
    *((_DWORD *)this + 5));
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = (char *)v1 + 16;
  *((_DWORD *)v1 + 7) = (char *)v1 + 16;
  *((_DWORD *)v1 + 8) = 0;
  v50 = (int)v1 + 36;
    (int)v1 + 36,
    *((_DWORD *)v1 + 11));
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = (char *)v1 + 40;
  *((_DWORD *)v1 + 13) = (char *)v1 + 40;
  *((_DWORD *)v1 + 14) = 0;
  v53 = (int)v1 + 60;
  std::_Rb_tree<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol>,std::pair<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol> const,int>,std::_Select1st<std::pair<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol> const,int>>,std::less<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol>>,std::allocator<std::pair<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol> const,int>>>::_M_erase(
    (int)v1 + 60,
    *((_DWORD *)v1 + 17));
  v51 = (int)v1 + 64;
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = (char *)v1 + 64;
  *((_DWORD *)v1 + 19) = (char *)v1 + 64;
  *((_DWORD *)v1 + 20) = 0;
  v3 = (int)v1;
  v4 = 1;
  do
  {
    v83 = v4;
    v5 = std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
           (int)v2,
           (int *)&v83);
    *(_QWORD *)&v6 = *(_QWORD *)(v5 + 4);
    if ( v6 == v7 )
    {
      std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
        (unsigned __int64 *)v5,
        &v83);
    }
    else
      *v6 = v83;
      *(_DWORD *)(v5 + 4) = v6 + 1;
    ++v4;
  }
  while ( v4 != 20 );
  if ( *(_QWORD *)(v3 + 96) >> 32 != (unsigned int)*(_QWORD *)(v3 + 96) )
    v8 = 0;
    do
      v83 = v8 | 0x2000000;
      v9 = std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
             (int)v2,
             (int *)&v83);
      *(_QWORD *)&v10 = *(_QWORD *)(v9 + 4);
      if ( v10 == v11 )
      {
        std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
          (unsigned __int64 *)v9,
          &v83);
      }
      else
        *v10 = v83;
        *(_DWORD *)(v9 + 4) = v10 + 1;
      ++v8;
    while ( v8 < (signed int)((*(_QWORD *)(v3 + 96) >> 32) - *(_QWORD *)(v3 + 96)) >> 2 );
  if ( *(_QWORD *)(v3 + 132) >> 32 != (unsigned int)*(_QWORD *)(v3 + 132) )
    v12 = 0;
      v83 = v12 | 0x1000000;
      v13 = std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
              (int)v2,
              (int *)&v83);
      *(_QWORD *)&v14 = *(_QWORD *)(v13 + 4);
      if ( v14 == v15 )
          (unsigned __int64 *)v13,
        *v14 = v83;
        *(_DWORD *)(v13 + 4) = v14 + 1;
      ++v12;
    while ( v12 < (signed int)((*(_QWORD *)(v3 + 132) >> 32) - *(_QWORD *)(v3 + 132)) >> 2 );
  v82 = 0x100000;
  v16 = std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
          (int)v2,
          &v82);
  v81 = 0x100000;
  *(_QWORD *)&v17 = *(_QWORD *)(v16 + 4);
  if ( v17 == v18 )
    std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol>(
      (unsigned __int64 *)v16,
      &v81);
  else
    *v17 = 0x100000;
    *(_DWORD *)(v16 + 4) = v17 + 1;
  v19 = operator new(0xCu);
  LODWORD(v20) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void (CommandRegistry::*)(CommandRegistry::Symbol)> ()(CommandRegistry*,std::_Placeholder<1>)>>::_M_manager;
  HIDWORD(v20) = std::_Function_handler<void ()(CommandRegistry::Symbol),std::_Bind<std::_Mem_fn<void (CommandRegistry::*)(CommandRegistry::Symbol)> ()(CommandRegistry*,std::_Placeholder<1>)>>::_M_invoke;
  *v19 = CommandRegistry::buildFirstSet;
  v19[1] = 0;
  v19[2] = v3;
  v79 = v19;
  v80 = v20;
  CommandRegistry::forEachNonTerminal(v3, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  v78 = 1048605;
  v21 = std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
          v50,
          &v78);
  v77 = 19;
  v22 = *(_QWORD *)(v21 + 4);
  if ( (_DWORD)v22 == HIDWORD(v22) )
      (unsigned __int64 *)v21,
      &v77);
    *(_DWORD *)v22 = 19;
    *(_DWORD *)(v21 + 4) = v22 + 4;
  v76 = 0;
  v72 = 0;
  v73 = 0;
  v74 = &v72;
  v75 = &v72;
  v60 = CommandRegistry::buildFollowSet;
  v61 = 0;
  v67 = 0;
  v63 = 0;
  v64 = 0;
  v65 = &v63;
  v66 = &v63;
  v68 = v3;
  v70 = 0;
  v23 = operator new(0x24u);
  *v23 = CommandRegistry::buildFollowSet;
  v23[1] = 0;
  LODWORD(v24) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void (CommandRegistry::*)(CommandRegistry::Symbol,std::set<CommandRegistry::Symbol,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>> &)> ()(CommandRegistry*,std::_Placeholder<1>,std::set<CommandRegistry::Symbol,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>>)>>::_M_manager;
  HIDWORD(v24) = std::_Function_handler<void ()(CommandRegistry::Symbol),std::_Bind<std::_Mem_fn<void (CommandRegistry::*)(CommandRegistry::Symbol,std::set<CommandRegistry::Symbol,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>> &)> ()(CommandRegistry*,std::_Placeholder<1>,std::set<CommandRegistry::Symbol,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>>)>>::_M_invoke;
  v23[4] = 0;
  v23[5] = 0;
  v23[6] = 0;
  v23[7] = 0;
  v23[3] = 0;
  v23[8] = v3;
  v23[5] = v23 + 3;
  v23[6] = v23 + 3;
  v69 = v23;
  *(_QWORD *)&v70 = v24;
  CommandRegistry::forEachNonTerminal(v3, (int)&v69);
  if ( v70 )
    v70();
  std::_Rb_tree<CommandRegistry::Symbol,CommandRegistry::Symbol,std::_Identity<CommandRegistry::Symbol>,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>>::_M_erase(
    (int)&v62,
    v64);
  v25 = *(_QWORD *)v3;
  if ( HIDWORD(v25) != (_DWORD)v25 )
    v26 = 0;
      v27 = v25 + 32 * v26;
      CommandRegistry::first((int)&v58, v3, (unsigned __int64 *)(v27 + 20));
      v28 = v59;
      if ( v58 == v59 )
        v29 = v51;
        v30 = 0;
        ptr = v58;
        v31 = v58;
        do
        {
          v32 = *v31;
          if ( *v31 == 0x100000 )
          {
            v30 = 1;
          }
          else
            v56 = *v31;
            v33 = (_DWORD *)v51;
            v34 = *(_DWORD *)v27;
            v57 = *(_DWORD *)v27;
            for ( i = *(_DWORD **)(v3 + 68); i; i = (_DWORD *)v33[2] )
            {
              v36 = v33;
              v33 = i;
              while ( 1 )
              {
                v37 = v33[4];
                if ( v37 >= v32 && (v32 < v37 || v33[5] >= v34) )
                  break;
                v33 = (_DWORD *)v33[3];
                if ( !v33 )
                {
                  v33 = v36;
                  goto LABEL_42;
                }
              }
            }
LABEL_42:
            if ( v33 == (_DWORD *)v51 || (v38 = v33[4], v32 < v38) || v38 >= v32 && v34 < v33[5] )
              v85 = &v56;
              v33 = j__ZNSt8_Rb_treeISt4pairIN15CommandRegistry6SymbolES2_ES0_IKS3_iESt10_Select1stIS5_ESt4lessIS3_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS4_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
                      v53,
                      (int)v33,
                      (int)&unk_262D529,
                      (int *)&v85);
            v33[6] = v26;
          ++v31;
        }
        while ( v31 != v28 );
      if ( ptr )
        operator delete(ptr);
      if ( v30 & 1 )
        v40 = *(_QWORD *)std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
                           v50,
                           (int *)v27);
        v39 = (int *)v40;
        v41 = (_DWORD *)v29;
        if ( (_DWORD)v40 != HIDWORD(v40) )
          do
            v42 = *v39;
            v54 = *v39;
            v43 = v3;
            v44 = *(_DWORD *)v27;
            v55 = *(_DWORD *)v27;
            v45 = *(_DWORD **)(v3 + 68);
            for ( j = v41; v45; v45 = (_DWORD *)j[2] )
              v47 = j;
              j = v45;
                v48 = j[4];
                if ( v48 >= v42 && (v42 < v48 || j[5] >= v44) )
                j = (_DWORD *)j[3];
                if ( !j )
                  j = v47;
                  goto LABEL_63;
LABEL_63:
            if ( j == v41 || (v49 = j[4], v42 < v49) || v49 >= v42 && v44 < j[5] )
              v84 = &v54;
              j = j__ZNSt8_Rb_treeISt4pairIN15CommandRegistry6SymbolES2_ES0_IKS3_iESt10_Select1stIS5_ESt4lessIS3_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS4_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
                    v53,
                    (int)j,
                    (int)&unk_262D529,
                    (int *)&v84);
            ++v39;
            v3 = v43;
            j[6] = v26;
          while ( v39 != (int *)HIDWORD(v40) );
      v25 = *(_QWORD *)v3;
      ++v26;
    while ( v26 < (HIDWORD(v25) - (signed int)v25) >> 5 );
  *(_BYTE *)(v3 + 360) = 1;
    (int)&v71,
    v73);
}


int __fastcall CommandRegistry::Symbol::fromEnumValueIndex(int result, unsigned int a2)
{
  *(_DWORD *)result = a2 | 0x2000000;
  return result;
}


unsigned int __fastcall CommandRegistry::addIfPartialMatch(_BYTE **a1, int *a2, int a3, int *a4, char a5)
{
  _BYTE **v5; // r7@1
  int *v6; // r6@1
  _BYTE *v7; // r4@1
  int v8; // r10@1
  unsigned int v9; // r2@1
  unsigned int v10; // r0@1
  int v11; // r1@1
  unsigned int v12; // r9@2
  unsigned int v13; // r3@4
  unsigned int *v14; // r2@6
  signed int v15; // r1@8
  int v16; // r5@14
  signed int v17; // r4@14
  _BYTE *v18; // r0@14
  __int64 v19; // r0@16
  int v20; // r0@17
  int *v22; // [sp+10h] [bp-40h]@2
  _BYTE *v23; // [sp+18h] [bp-38h]@6
  int v24; // [sp+1Ch] [bp-34h]@2
  unsigned int v25; // [sp+20h] [bp-30h]@1

  v5 = a1;
  v6 = a2;
  v7 = *a1;
  v8 = a3;
  v9 = 0;
  v10 = *((_DWORD *)*a1 - 3);
  v25 = v10;
  v11 = *(_DWORD *)(*a2 - 12);
  if ( v11 >= v10 )
  {
    v12 = v11 - v10;
    v22 = a4;
    v24 = 0;
    while ( 1 )
    {
      v16 = *((_DWORD *)v7 - 3);
      sub_21E9040((void **)&v23, v6, v9, v25);
      v17 = Util::compareNoCase(v16, v7, *((_DWORD *)v23 - 3), v23);
      v18 = v23 - 12;
      if ( (int *)(v23 - 12) != &dword_28898C0 )
      {
        v14 = (unsigned int *)(v23 - 4);
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
          j_j_j_j__ZdlPv_9(v18);
      }
      if ( v17 == 1 )
        break;
      v9 = v24 + 1;
      v24 = v9;
      if ( v9 > v12 )
        return 0;
      v7 = *v5;
      v13 = *(_DWORD *)(*v6 - 12);
      if ( v13 < v9 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v9, v13);
    }
    v19 = *(_QWORD *)(v8 + 8);
    if ( (_DWORD)v19 == HIDWORD(v19) )
      std::vector<AutoCompleteOption,std::allocator<AutoCompleteOption>>::_M_emplace_back_aux<std::string const&,std::string const&,std::string const&,unsigned int &,unsigned int &>(
        (unsigned __int64 *)(v8 + 4),
        v6,
        v22,
        (int *)&Util::EMPTY_STRING,
        &v24,
        (int *)&v25);
      v20 = *(_DWORD *)(v8 + 8);
    else
      AutoCompleteOption::AutoCompleteOption((int *)v19, v6, v22, (int *)&Util::EMPTY_STRING, v24, v25, 0);
      v20 = *(_DWORD *)(v8 + 8) + 36;
      *(_DWORD *)(v8 + 8) = v20;
    v9 = 1;
    *(_BYTE *)(v20 - 4) = a5;
  }
  return v9;
}


int __fastcall CommandRegistry::Parser::getErrorParams(int a1, int a2)
{
  _DWORD *v2; // r6@2
  int v3; // t1@2
  int v4; // r2@2
  const char *v5; // r5@2
  unsigned int v6; // r8@2
  unsigned int v7; // r0@2
  unsigned int v8; // r0@4
  char **v9; // r4@6
  int v10; // r11@6
  const char *v11; // r6@7
  int v12; // r9@9
  _DWORD *v13; // r0@9
  int *v14; // r10@9
  char *v15; // r7@9
  int result; // r0@11
  char **v17; // r4@12
  int v18; // r9@21
  _DWORD *v19; // r0@21
  int *v20; // r6@21
  char *v21; // r7@21
  int v22; // r4@23
  int v23; // r2@23
  int v24; // [sp+4h] [bp-4Ch]@2
  int v25; // [sp+8h] [bp-48h]@2
  int v26; // [sp+Ch] [bp-44h]@2
  int v27; // [sp+10h] [bp-40h]@2
  int v28; // [sp+14h] [bp-3Ch]@2
  char **v29; // [sp+18h] [bp-38h]@2
  char **v30; // [sp+1Ch] [bp-34h]@2

  if ( *(_BYTE *)(a2 + 88) )
  {
    v24 = a1;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v3 = *(_DWORD *)(a2 + 44);
    v2 = (_DWORD *)(a2 + 44);
    v27 = v3 - 10;
    v4 = *(_DWORD *)(a2 + 48);
    v5 = (const char *)(v3 + v4);
    v26 = v3 + v4;
    v6 = v3 + v4 + 10;
    v25 = v3 + v4 + 10;
    v7 = *(_DWORD *)(a2 + 60);
    if ( v3 - 10 < v7 )
      v27 = *(_DWORD *)(a2 + 60);
    v8 = v7 + *(_DWORD *)(v7 - 12) - 1;
    if ( v6 > v8 )
    {
      v6 = v8 + 1;
      v25 = v8 + 1;
    }
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<char const*&,char const* const&>(
      (unsigned __int64 *)&v28,
      (_BYTE **)&v27,
      v2);
    v10 = (int)v30;
    v9 = v29;
    if ( v29 == v30 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<char const* const&,char const*&>(
        (unsigned __int64 *)&v28,
        (_BYTE **)v2,
        &v26);
      v10 = (int)v30;
      v17 = v29;
    else
      v11 = (const char *)*v2;
      if ( v11 == v5 )
      {
        v15 = (char *)&unk_28898CC;
      }
      else
        if ( !v11 )
          sub_21E5884((int)"basic_string::_S_construct null not valid");
        v12 = v5 - v11;
        v13 = sub_21E7E80(v5 - v11, 0);
        v14 = v13;
        v15 = (char *)(v13 + 3);
        if ( v5 - v11 == 1 )
          *v15 = *v11;
        else
          _aeabi_memcpy(v13 + 3, v11, v5 - v11);
        if ( v14 != &dword_28898C0 )
        {
          v14[2] = 0;
          *v14 = v12;
          v15[v12] = byte_26C67B8[0];
        }
      *v9 = v15;
      v17 = v9 + 1;
      v29 = v17;
    if ( v17 == (char **)v10 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<char const*&,char const*&>(
        (_BYTE **)&v26,
        &v25);
      v22 = (int)v29;
      v23 = v24;
      if ( v5 == (const char *)v6 )
        v23 = v24;
        v21 = (char *)&unk_28898CC;
        if ( !v5 )
        v18 = v6 - (_DWORD)v5;
        v19 = sub_21E7E80(v6 - (_DWORD)v5, 0);
        v20 = v19;
        v21 = (char *)(v19 + 3);
        if ( v6 - (_DWORD)v5 == 1 )
          *v21 = *v5;
          _aeabi_memcpy(v19 + 3, v5, v6 - (_DWORD)v5);
        if ( v20 != &dword_28898C0 )
          v20[2] = 0;
          *v20 = v18;
          v21[v18] = byte_26C67B8[0];
      *v17 = v21;
      v22 = (int)(v17 + 1);
      v29 = (char **)v22;
    *(_DWORD *)v23 = v28;
    *(_DWORD *)(v23 + 4) = v22;
    result = 0;
    *(_DWORD *)(v23 + 8) = v10;
  }
  else
    result = std::vector<std::string,std::allocator<std::string>>::vector(a1, (unsigned __int64 *)(a2 + 72));
  return result;
}


signed int __fastcall CommandRegistry::isValid(int a1, int *a2)
{
  int v2; // r2@1
  unsigned int v3; // r1@1
  signed int v4; // r1@6
  signed int result; // r0@8
  int v6; // r0@13
  int v7; // r2@13
  __int64 v8; // kr00_8@13
  signed int v9; // r2@14
  signed int v10; // r2@17
  signed int v11; // r0@17
  unsigned int v12; // r2@19
  __int64 v13; // kr08_8@22
  __int64 v14; // kr10_8@23

  v2 = *a2;
  v3 = *a2 & 0xFC0FFFFF;
  if ( v2 & 0x1000000 )
  {
    v8 = *(_QWORD *)(a1 + 132);
    v6 = *(_QWORD *)(a1 + 132) >> 32;
    v7 = v8;
LABEL_14:
    v9 = v6 - v7;
    result = 0;
    if ( v3 < v9 >> 2 )
      result = 1;
    return result;
  }
  if ( v2 & 0x200000 )
    v10 = -1227133513;
    v11 = (signed int)((*(_QWORD *)(a1 + 108) >> 32) - *(_QWORD *)(a1 + 108)) >> 2;
  else
    if ( !(v2 & 0x400000) )
    {
      if ( v2 & 0x800000 )
      {
        v13 = *(_QWORD *)(a1 + 120);
        v6 = *(_QWORD *)(a1 + 120) >> 32;
        v7 = v13;
      }
      else
        if ( !(v2 & 0x2000000) )
        {
          v4 = 0;
          if ( (unsigned int)(v2 - 1) < 0x13 )
            v4 = 1;
          result = 0;
          if ( (v2 & 0xFFEFFFFE) < 0x1E )
            result = 1;
          if ( !(v2 & 0x100000) )
            result = v4;
          return result;
        }
        v14 = *(_QWORD *)(a1 + 96);
        v6 = *(_QWORD *)(a1 + 96) >> 32;
        v7 = v14;
      goto LABEL_14;
    }
    v10 = -1431655765;
    v11 = (signed int)((*(_QWORD *)(a1 + 84) >> 32) - *(_QWORD *)(a1 + 84)) >> 2;
  v12 = v10 * v11;
  result = 0;
  if ( v3 < v12 )
    result = 1;
  return result;
}


void **__fastcall CommandRegistry::getCommandName(void **a1, char a2, int *a3)
{
  int *v3; // r5@1
  void **v4; // r6@1
  unsigned int i; // r4@1
  CommandLexer *v6; // r0@3
  char *v7; // r0@5
  unsigned int v8; // r3@5

  v3 = a3;
  v4 = a1;
  for ( i = 0; ; ++i )
  {
    v6 = (CommandLexer *)*(_BYTE *)(*v3 + i);
    if ( v6 != (CommandLexer *)47 && CommandLexer::isSpace(v6, a2) != 1 )
      break;
  }
  v7 = sub_21E77E4(v3, 32, i);
  v8 = *(_DWORD *)(*v3 - 12);
  if ( v8 < i )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", i, v8);
  return sub_21E9040(v4, v3, i, (unsigned int)&v7[-i]);
}


void __fastcall CommandRegistry::first(int a1, int a2, unsigned __int64 *a3)
{
  CommandRegistry::first(a1, a2, a3);
}


void __fastcall CommandRegistry::popState(CommandRegistry *this)
{
  CommandRegistry *v1; // r9@1
  __int64 v2; // r0@1
  int v3; // r4@1
  int v4; // r0@1
  __int64 v5; // r1@3
  int v6; // r0@3
  int v7; // r0@5
  unsigned int v8; // r5@5
  int v9; // r2@5
  int i; // r0@6
  int v11; // r8@13
  __int64 v12; // kr08_8@13
  int v13; // r11@13
  int *v14; // r1@15
  _DWORD *v15; // r5@15
  int (**v16)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@15
  unsigned int *v17; // r2@16
  signed int v18; // r7@18
  int *v19; // r4@22
  int (**v20)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@22
  int *v21; // r0@23
  int v22; // r0@26
  _DWORD *v23; // r6@26
  unsigned int v24; // r7@26
  int v25; // r5@27
  int v26; // r11@30
  int *v27; // r1@32
  _DWORD *v28; // r5@32
  int (**v29)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@32
  unsigned int *v30; // r2@33
  signed int v31; // r7@35
  int *v32; // r4@39
  int (**v33)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@39
  int *v34; // r0@40
  int v35; // r0@43
  int v36; // r1@43
  int v37; // r2@43
  char *v38; // r4@43
  char *v39; // r7@43
  int *v40; // r6@46
  int v41; // r1@47
  int *v42; // r0@48
  int v43; // r2@48
  int v44; // r0@51
  int v45; // r4@57
  _DWORD *v46; // r0@61
  int v47; // r11@64
  int v48; // r7@66
  unsigned int *v49; // r2@68
  signed int v50; // r1@70
  int v51; // r1@76
  int *v52; // r6@76
  int *v53; // r2@77
  int v54; // r4@86
  int v55; // r7@87
  int v56; // r1@87
  void *v57; // r0@87
  int v58; // r7@92
  int v59; // r0@93
  int v60; // r5@93
  _DWORD *v61; // r4@94
  int v62; // r8@94
  size_t v63; // r6@94
  _DWORD *v64; // r0@96
  size_t v65; // r10@96
  size_t v66; // r2@96
  int v67; // r0@98
  _DWORD *v68; // r0@105
  _DWORD *v69; // r1@105
  unsigned int v70; // r4@105
  unsigned int v71; // r6@105
  size_t v72; // r2@105
  int v73; // r0@107
  int v74; // r0@112
  __int64 v75; // r0@115
  unsigned int v76; // r2@116
  unsigned int v77; // r3@117
  unsigned int v78; // r7@117
  bool v79; // cf@119
  bool v80; // zf@119
  unsigned int v81; // t1@120
  int v82; // [sp+4h] [bp-4Ch]@64
  int v83; // [sp+10h] [bp-40h]@6
  int v84; // [sp+14h] [bp-3Ch]@6
  int v85; // [sp+18h] [bp-38h]@43
  int *v86; // [sp+1Ch] [bp-34h]@43
  int *v87; // [sp+20h] [bp-30h]@43
  int v88; // [sp+24h] [bp-2Ch]@43

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 84);
  v3 = *((_DWORD *)v1 + 70);
  v4 = v2 + 12 * *(_DWORD *)(v3 - 8);
  if ( v4 != HIDWORD(v2) )
    *((_DWORD *)v1 + 22) = v4;
  v5 = *((_QWORD *)v1 + 15);
  v6 = v5 + 4 * *(_DWORD *)(v3 - 12);
  if ( v6 != HIDWORD(v5) )
    *((_DWORD *)v1 + 31) = v6;
  v7 = *((_DWORD *)v1 + 27);
  v8 = *(_DWORD *)(v3 - 16);
  v9 = *((_DWORD *)v1 + 28);
  if ( v8 < -1227133513 * ((v9 - v7) >> 2) )
  {
    do
    {
      std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::equal_range(
        (int)&v83,
        (int)v1 + 144,
        (const void **)(v7 + 28 * v8));
      std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase_aux(
        v83,
        v84);
      for ( i = *((_DWORD *)v1 + 60); (CommandRegistry *)i != (CommandRegistry *)((char *)v1 + 232); i = sub_21D47E8(i) )
      {
        if ( *(_DWORD *)(i + 20) == v8 )
        {
          std::_Rb_tree<typeid_t<CommandRegistry>,std::pair<typeid_t<CommandRegistry> const,int>,std::_Select1st<std::pair<typeid_t<CommandRegistry> const,int>>,std::less<typeid_t<CommandRegistry>>,std::allocator<std::pair<typeid_t<CommandRegistry> const,int>>>::erase(
            (int)v1 + 228,
            (_WORD *)(i + 16));
          break;
        }
      }
      v9 = *(_QWORD *)((char *)v1 + 108) >> 32;
      v7 = *(_QWORD *)((char *)v1 + 108);
      ++v8;
    }
    while ( v8 < -1227133513 * ((v9 - v7) >> 2) );
    v8 = *(_DWORD *)(v3 - 16);
  }
  std::vector<CommandRegistry::Enum,std::allocator<CommandRegistry::Enum>>::_M_erase((int)v1 + 108, v7 + 28 * v8, v9);
  v11 = v3;
  v12 = *(_QWORD *)((char *)v1 + 132);
  v13 = v12 + 4 * *(_DWORD *)(v3 - 20);
  if ( v13 != HIDWORD(v12) )
    if ( HIDWORD(v12) != v13 )
      v14 = &v83;
      v15 = (_DWORD *)(v12 + 4 * *(_DWORD *)(v3 - 20));
      v16 = &pthread_create;
      do
        v21 = (int *)(*v15 - 12);
        if ( v21 != &dword_28898C0 )
          v17 = (unsigned int *)(*v15 - 4);
          if ( v16 )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            v19 = v14;
            v20 = v16;
            j_j_j_j__ZdlPv_9(v21);
            v16 = v20;
            v14 = v19;
        ++v15;
      while ( v15 != (_DWORD *)HIDWORD(v12) );
    *((_DWORD *)v1 + 34) = v13;
  v23 = (_DWORD *)(*((_QWORD *)v1 + 12) >> 32);
  v22 = *((_QWORD *)v1 + 12);
  v24 = *(_DWORD *)(v11 - 24);
  if ( v24 < ((signed int)v23 - v22) >> 2 )
    v25 = 4 * v24;
        (int)v1 + 168,
        (const void **)(v22 + v25));
      v23 = (_DWORD *)(*((_QWORD *)v1 + 12) >> 32);
      v22 = *((_QWORD *)v1 + 12);
      v25 += 4;
      ++v24;
    while ( v24 < ((signed int)v23 - v22) >> 2 );
    v24 = *(_DWORD *)(v11 - 24);
  v26 = v22 + 4 * v24;
  if ( (_DWORD *)v26 != v23 )
    if ( v23 != (_DWORD *)v26 )
      v27 = &v83;
      v28 = (_DWORD *)(v22 + 4 * v24);
      v29 = &pthread_create;
        v34 = (int *)(*v28 - 12);
        if ( v34 != &dword_28898C0 )
          v30 = (unsigned int *)(*v28 - 4);
          if ( v29 )
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            v32 = v27;
            v33 = v29;
            j_j_j_j__ZdlPv_9(v34);
            v29 = v33;
            v27 = v32;
        ++v28;
      while ( v28 != v23 );
    *((_DWORD *)v1 + 25) = v26;
  v35 = 0;
  v88 = 0;
  v84 = 0;
  v85 = 0;
  v86 = &v84;
  v87 = &v84;
  v36 = *(_DWORD *)(v11 - 28);
  v38 = (char *)(*((_QWORD *)v1 + 24) >> 32);
  v37 = *((_QWORD *)v1 + 24);
  v39 = (char *)(v37 + 4 * v36);
  if ( v39 != v38 )
    while ( 1 )
      v40 = &v84;
      if ( v35 )
        v41 = *(_DWORD *)v39;
        do
          v40 = (int *)v35;
          v42 = (int *)(v35 + 12);
          v43 = v40[4];
          if ( v41 < v43 )
            v42 = v40 + 2;
          v35 = *v42;
        while ( v35 );
        v44 = (int)v40;
        if ( v41 >= v43 )
          goto LABEL_54;
      if ( v40 != v86 )
        break;
LABEL_55:
      if ( v40 )
        if ( &v84 == v40 )
          v45 = 1;
        else
          v45 = 0;
          if ( *(_DWORD *)v39 < v40[4] )
            v45 = 1;
        v46 = operator new(0x14u);
        v46[4] = *(_DWORD *)v39;
        sub_21D4928(v45, (int)v46, (int)v40, (int)&v84);
        ++v88;
        v38 = (char *)*((_DWORD *)v1 + 49);
LABEL_62:
      v39 += 4;
      if ( v39 == v38 )
        v36 = *(_DWORD *)(v11 - 28);
        v37 = *((_DWORD *)v1 + 48);
        goto LABEL_64;
      v35 = v85;
    v44 = sub_21D4858((int)v40);
    v41 = *(_DWORD *)v39;
LABEL_54:
    if ( *(_DWORD *)(v44 + 16) >= v41 )
      goto LABEL_62;
    goto LABEL_55;
LABEL_64:
  v82 = v11;
  v47 = (int)v1 + 208;
  if ( &v38[-v37] != (char *)(4 * v36) )
    *((_DWORD *)v1 + 49) = v37 + 4 * v36;
  v48 = *((_DWORD *)v1 + 54);
  while ( v48 != v47 )
    v51 = v85;
    v52 = &v84;
    if ( v85 )
      v53 = &v84;
        v52 = (int *)v51;
        while ( v52[4] < *(_DWORD *)(v48 + 44) )
          v52 = (int *)v52[3];
          if ( !v52 )
            v52 = v53;
            goto LABEL_83;
        v51 = v52[2];
        v53 = v52;
      while ( v51 );
LABEL_83:
    if ( v52 == &v84 )
      v48 = sub_21D4820(v48);
    else
      if ( *(_DWORD *)(v48 + 44) < v52[4] )
        v52 = &v84;
      v54 = sub_21D4820(v48);
      if ( v52 != &v84 )
        v55 = sub_21D4A24(v48, (int)v1 + 208);
        CommandRegistry::Signature::~Signature((CommandRegistry::Signature *)(v55 + 20));
        v56 = *(_DWORD *)(v55 + 16);
        v57 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v49 = (unsigned int *)(v56 - 4);
          if ( &pthread_create )
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
        operator delete((void *)v55);
        --*((_DWORD *)v1 + 56);
      v48 = v54;
  v58 = *((_DWORD *)v1 + 66);
  if ( (CommandRegistry *)v58 != (CommandRegistry *)((char *)v1 + 256) )
      v59 = *((_DWORD *)v1 + 53);
      v60 = (int)v1 + 208;
      if ( v59 )
        v61 = *(_DWORD **)(v58 + 20);
        v62 = (int)v1 + 208;
        v63 = *(v61 - 3);
          v60 = v59;
          while ( 1 )
            v64 = *(_DWORD **)(v60 + 16);
            v65 = *(v64 - 3);
            v66 = *(v64 - 3);
            if ( v65 > v63 )
              v66 = v63;
            v67 = memcmp(v64, v61, v66);
            if ( !v67 )
              v67 = v65 - v63;
            if ( v67 >= 0 )
              break;
            v60 = *(_DWORD *)(v60 + 12);
            if ( !v60 )
            {
              v60 = v62;
              goto LABEL_104;
            }
          v59 = *(_DWORD *)(v60 + 8);
          v62 = v60;
        while ( v59 );
LABEL_104:
      if ( v60 == v47 )
        goto LABEL_126;
      v68 = *(_DWORD **)(v58 + 20);
      v69 = *(_DWORD **)(v60 + 16);
      v70 = *(v68 - 3);
      v71 = *(v69 - 3);
      v72 = *(v68 - 3);
      if ( v70 > v71 )
        v72 = *(v69 - 3);
      v73 = memcmp(v68, v69, v72);
      if ( !v73 )
        v73 = v70 - v71;
      if ( v73 < 0 )
        v60 = (int)v1 + 208;
LABEL_126:
        v74 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::erase(
                (int)v1 + 252,
                v58);
      else
        v74 = sub_21D4820(v58);
      v58 = v74;
    while ( (CommandRegistry *)v74 != (CommandRegistry *)((char *)v1 + 256) );
  v75 = *(_QWORD *)((char *)v1 + 108);
  if ( (_DWORD)v75 != HIDWORD(v75) )
    v76 = (signed int)((*((_QWORD *)v1 + 12) >> 32) - *((_QWORD *)v1 + 12)) >> 2;
      v78 = *(_QWORD *)(v75 + 16) >> 32;
      v77 = *(_QWORD *)(v75 + 16);
      while ( 1 )
        v79 = v77 >= v78;
        v80 = v77 == v78;
        if ( v77 != v78 )
          v81 = *(_DWORD *)(v78 - 16);
          v78 -= 16;
          v79 = v81 >= v76;
          v80 = v81 == v76;
        if ( v80 || !v79 )
        *(_DWORD *)(v75 + 20) = v78;
      LODWORD(v75) = v75 + 28;
    while ( (_DWORD)v75 != HIDWORD(v75) );
  std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_erase(
    (int)v1,
    *(_QWORD *)v1 + 32 * *(_DWORD *)(v82 - 4),
    *(_QWORD *)v1 >> 32);
  *((_DWORD *)v1 + 70) -= 28;
  *((_BYTE *)v1 + 360) = 0;
  std::_Rb_tree<CommandRegistry::Symbol,CommandRegistry::Symbol,std::_Identity<CommandRegistry::Symbol>,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>>::_M_erase(
    (int)&v83,
    v85);
}


int __fastcall CommandRegistry::allocateCommand<ListDCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x18u);
  j_Command::Command(v2);
  *v1 = v2;
  *(_DWORD *)v2 = &off_271A0E8;
  result = 0;
  *((_DWORD *)v2 + 5) = 0;
  return result;
}


CommandRegistry *__fastcall CommandRegistry::~CommandRegistry(CommandRegistry *this)
{
  CommandRegistry *v1; // r10@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r5@5
  void *v5; // r7@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int *v8; // r0@15
  void *v9; // r0@20
  int v10; // r5@22
  int v11; // r7@22
  unsigned int *v12; // r2@24
  signed int v13; // r1@26
  void *v14; // r0@32
  int *v15; // r0@34
  void *v16; // r5@39
  void *v17; // r7@39
  unsigned int *v18; // r2@41
  signed int v19; // r1@43
  int *v20; // r0@49
  void *v21; // r0@54
  int v22; // r5@56 OVERLAPPED
  int v23; // r6@56 OVERLAPPED
  void *v24; // r0@57
  void (*v25)(void); // r3@59

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 69);
  if ( v2 )
    operator delete(v2);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)v1 + 252,
    *((_DWORD *)v1 + 65));
  std::_Rb_tree<typeid_t<CommandRegistry>,std::pair<typeid_t<CommandRegistry> const,int>,std::_Select1st<std::pair<typeid_t<CommandRegistry> const,int>>,std::less<typeid_t<CommandRegistry>>,std::allocator<std::pair<typeid_t<CommandRegistry> const,int>>>::_M_erase(
    (int)v1 + 228,
    *((_DWORD *)v1 + 59));
  std::_Rb_tree<std::string,std::pair<std::string const,CommandRegistry::Signature>,std::_Select1st<std::pair<std::string const,CommandRegistry::Signature>>,std::less<std::string>,std::allocator<std::pair<std::string const,CommandRegistry::Signature>>>::_M_erase(
    (int)v1 + 204,
    *((_DWORD *)v1 + 53));
  v3 = (void *)*((_DWORD *)v1 + 48);
  if ( v3 )
    operator delete(v3);
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
    (int)v1 + 168,
    *((_DWORD *)v1 + 44));
    (int)v1 + 144,
    *((_DWORD *)v1 + 38));
  v5 = (void *)(*(_QWORD *)((char *)v1 + 132) >> 32);
  v4 = (void *)*(_QWORD *)((char *)v1 + 132);
  if ( v4 != v5 )
  {
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 4;
    }
    while ( v4 != v5 );
    v4 = (void *)*((_DWORD *)v1 + 33);
  }
  if ( v4 )
    operator delete(v4);
  v9 = (void *)*((_DWORD *)v1 + 30);
  if ( v9 )
    operator delete(v9);
  v11 = *(_QWORD *)((char *)v1 + 108) >> 32;
  v10 = *(_QWORD *)((char *)v1 + 108);
  if ( v10 != v11 )
      v14 = *(void **)(v10 + 16);
      if ( v14 )
        operator delete(v14);
      v15 = (int *)(*(_DWORD *)v10 - 12);
      if ( v15 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v10 += 28;
    while ( v10 != v11 );
    v10 = *((_DWORD *)v1 + 27);
  if ( v10 )
    operator delete((void *)v10);
  v17 = (void *)(*((_QWORD *)v1 + 12) >> 32);
  v16 = (void *)*((_QWORD *)v1 + 12);
  if ( v16 != v17 )
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v16 = (char *)v16 + 4;
    while ( v16 != v17 );
    v16 = (void *)*((_DWORD *)v1 + 24);
  if ( v16 )
    operator delete(v16);
  v21 = (void *)*((_DWORD *)v1 + 21);
  if ( v21 )
    operator delete(v21);
  std::_Rb_tree<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol>,std::pair<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol> const,int>,std::_Select1st<std::pair<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol> const,int>>,std::less<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol>>,std::allocator<std::pair<std::pair<CommandRegistry::Symbol,CommandRegistry::Symbol> const,int>>>::_M_erase(
    (int)v1 + 60,
    *((_DWORD *)v1 + 17));
  std::_Rb_tree<CommandRegistry::Symbol,std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>,std::_Select1st<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::_M_erase(
    (int)v1 + 36,
    *((_DWORD *)v1 + 11));
    (int)v1 + 12,
    *((_DWORD *)v1 + 5));
  *(_QWORD *)&v22 = *(_QWORD *)v1;
  if ( v22 != v23 )
      v24 = *(void **)(v22 + 20);
      if ( v24 )
        operator delete(v24);
      v25 = *(void (**)(void))(v22 + 12);
      if ( v25 )
        v25();
      v22 += 32;
    while ( v23 != v22 );
    v22 = *(_DWORD *)v1;
  if ( v22 )
    operator delete((void *)v22);
  return v1;
}


void __fastcall CommandRegistry::buildOptionalRuleChain(int *a1, int a2, const void **a3, int a4, int a5, unsigned int a6)
{
  CommandRegistry::buildOptionalRuleChain(a1, a2, a3, a4, a5, a6);
}


void __fastcall CommandRegistry::serializeAvailableCommands(CommandRegistry *this, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  int v4; // r8@2
  char *v5; // r5@6
  char *v6; // r11@6
  signed int v7; // r1@6
  unsigned int v8; // r6@6
  int v9; // r9@7
  int v10; // r0@7
  int v11; // r5@8
  char *v12; // r4@9
  signed int v13; // r5@12
  void *v14; // r0@14
  signed int v15; // r5@14
  char *v16; // r9@18
  unsigned int v17; // r1@21
  unsigned int v18; // r0@23
  unsigned int v19; // r10@23
  char *v20; // r7@29
  char *v21; // r6@31
  int v22; // r6@42
  int v23; // r7@42
  AvailableCommandsPacket::CommandData *v24; // r0@44
  int v25; // r5@45
  int v26; // r0@47
  unsigned int v27; // r1@47
  int v28; // r0@49
  int v29; // r9@49
  __int64 v30; // r0@53
  int v31; // r11@54
  int v32; // r4@56
  int j; // r10@56
  __int64 v34; // r0@57
  int v35; // r5@58
  char v36; // r0@60
  __int64 v37; // r4@63
  AvailableCommandsPacket::CommandData *v38; // r0@64
  int v39; // r4@68
  int v40; // r6@68
  unsigned int *v41; // r2@70
  signed int v42; // r1@72
  void *v43; // r0@78
  int *v44; // r0@80
  _QWORD *v45; // [sp+8h] [bp-60h]@49
  int v46; // [sp+Ch] [bp-5Ch]@49
  CommandRegistry *v47; // [sp+10h] [bp-58h]@1
  int v48; // [sp+14h] [bp-54h]@1
  int v49; // [sp+14h] [bp-54h]@49
  int v50; // [sp+1Ch] [bp-4Ch]@1
  int i; // [sp+1Ch] [bp-4Ch]@42
  int v52; // [sp+20h] [bp-48h]@10
  int v53; // [sp+24h] [bp-44h]@60
  AvailableCommandsPacket::CommandData *v54; // [sp+28h] [bp-40h]@42
  AvailableCommandsPacket::CommandData *v55; // [sp+2Ch] [bp-3Ch]@42
  AvailableCommandsPacket::CommandData *v56; // [sp+30h] [bp-38h]@42
  int v57; // [sp+34h] [bp-34h]@1
  int v58; // [sp+38h] [bp-30h]@1
  int v59; // [sp+3Ch] [bp-2Ch]@1

  v47 = this;
  v57 = 0;
  v58 = 0;
  v2 = a2;
  v59 = 0;
  std::vector<AvailableCommandsPacket::EnumData,std::allocator<AvailableCommandsPacket::EnumData>>::reserve(
    (int)&v57,
    -1227133513 * ((signed int)((*(_QWORD *)(a2 + 108) >> 32) - *(_QWORD *)(a2 + 108)) >> 2));
  v3 = *(_QWORD *)(v2 + 108);
  v48 = v2;
  v50 = *(_QWORD *)(v2 + 108) >> 32;
  if ( v3 != v50 )
  {
    v4 = v58;
    do
    {
      if ( v4 == v59 )
      {
        j__ZNSt6vectorIN23AvailableCommandsPacket8EnumDataESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)&v57);
        v4 = v58;
      }
      else
        *(_DWORD *)v4 = 0;
        *(_DWORD *)(v4 + 4) = 0;
        *(_DWORD *)v4 = &unk_28898CC;
        *(_DWORD *)(v4 + 8) = 0;
        *(_DWORD *)(v4 + 12) = 0;
        v4 += 16;
        v58 = v4;
      EntityInteraction::setInteractText((int *)(v4 - 16), (int *)v3);
      v6 = (char *)(*(_QWORD *)(v3 + 16) >> 32);
      v5 = (char *)*(_QWORD *)(v3 + 16);
      v7 = v6 - v5;
      v8 = (v6 - v5) >> 4;
      if ( v8 >= 0x40000000 )
        sub_21E5A04("vector::reserve");
      v9 = *(_DWORD *)(v4 - 12);
      v10 = *(_DWORD *)(v4 - 4);
      if ( (v10 - v9) >> 2 >= v8 )
        v52 = v3;
        v12 = *(char **)(v4 - 12);
        v11 = *(_DWORD *)(v4 - 8);
        if ( v8 )
          v12 = (char *)operator new(v7 >> 2);
        else
          v12 = 0;
        v13 = v11 - v9;
        if ( v13 )
          _aeabi_memmove4(v12, v9);
        v14 = *(void **)(v4 - 12);
        v15 = v13 >> 2;
        if ( v14 )
          operator delete(v14);
        v10 = (int)&v12[4 * v8];
        *(_DWORD *)(v4 - 12) = v12;
        *(_DWORD *)(v4 - 8) = &v12[4 * v15];
        *(_DWORD *)(v4 - 4) = v10;
        v6 = (char *)(*(_QWORD *)(v3 + 16) >> 32);
        v5 = (char *)*(_QWORD *)(v3 + 16);
      if ( v5 != v6 )
        v16 = *(char **)(v4 - 8);
        do
        {
          if ( v16 == (char *)v10 )
          {
            v17 = (v16 - v12) >> 2;
            if ( !v17 )
              v17 = 1;
            v18 = v17 + ((v16 - v12) >> 2);
            v19 = v17 + ((v16 - v12) >> 2);
            if ( 0 != v18 >> 30 )
              v19 = 0x3FFFFFFF;
            if ( v18 < v17 )
            if ( v19 )
            {
              if ( v19 >= 0x40000000 )
                sub_21E57F4();
              v12 = (char *)operator new(4 * v19);
              v16 = (char *)(*(_QWORD *)(v4 - 12) >> 32);
              v20 = (char *)*(_QWORD *)(v4 - 12);
            }
            else
              v20 = v12;
              v12 = 0;
            v21 = &v12[v16 - v20];
            *(_DWORD *)v21 = *(_DWORD *)v5;
            if ( (v16 - v20) >> 2 )
              _aeabi_memmove4(v12, v20);
            v16 = v21 + 4;
            if ( v20 )
              operator delete(v20);
            v10 = (int)&v12[4 * v19];
            *(_DWORD *)(v4 - 12) = v12;
            *(_DWORD *)(v4 - 8) = v16;
            *(_DWORD *)(v4 - 4) = v10;
          }
          else
            *(_DWORD *)v16 = *(_DWORD *)v5;
            v16 += 4;
          v5 += 16;
        }
        while ( v6 != v5 );
      v3 = v52 + 28;
    }
    while ( v52 + 28 != v50 );
  }
  v54 = 0;
  v55 = 0;
  v22 = v48;
  v56 = 0;
  std::vector<AvailableCommandsPacket::CommandData,std::allocator<AvailableCommandsPacket::CommandData>>::reserve(
    (int)&v54,
    *(_DWORD *)(v48 + 224));
  v23 = *(_DWORD *)(v48 + 216);
  for ( i = v48 + 208; v23 != i; v23 = sub_21D4820(v23) )
    if ( !(*(_BYTE *)(v23 + 52) & 6) )
      v24 = v55;
      if ( v55 == v56 )
        j__ZNSt6vectorIN23AvailableCommandsPacket11CommandDataESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)&v54);
        v25 = (int)v55;
        v25 = (int)v55 + 28;
        *(_QWORD *)v55 = 0LL;
        *((_DWORD *)v24 + 2) = 0;
        *((_DWORD *)v24 + 3) = 0;
        *((_DWORD *)v24 + 4) = 0;
        *((_DWORD *)v24 + 5) = 0;
        *((_DWORD *)v24 + 6) = 0;
        *(_DWORD *)v24 = &unk_28898CC;
        *((_DWORD *)v24 + 1) = &unk_28898CC;
        v55 = (AvailableCommandsPacket::CommandData *)((char *)v24 + 28);
      EntityInteraction::setInteractText((int *)(v25 - 28), (int *)(v23 + 20));
      EntityInteraction::setInteractText((int *)(v25 - 24), (int *)(v23 + 24));
      *(_BYTE *)(v25 - 20) = *(_BYTE *)(v23 + 52);
      *(_BYTE *)(v25 - 19) = *(_BYTE *)(v23 + 40);
      v26 = *(_DWORD *)(v23 + 48);
      v27 = v26 & 0xFC0FFFFF;
      if ( !(v26 & 0x200000) )
        v27 = -1;
      *(_DWORD *)(v25 - 4) = v27;
      v45 = (_QWORD *)(v25 - 16);
      std::vector<AvailableCommandsPacket::OverloadData,std::allocator<AvailableCommandsPacket::OverloadData>>::reserve(
        v25 - 16,
        -1227133513 * ((signed int)((*(_QWORD *)(v23 + 28) >> 32) - *(_QWORD *)(v23 + 28)) >> 2));
      v46 = v25;
      v28 = *(_QWORD *)(v23 + 28) >> 32;
      v29 = *(_QWORD *)(v23 + 28);
      v49 = *(_QWORD *)(v23 + 28) >> 32;
      while ( v29 != v28 )
        if ( CommandVersion::isCompatible((CommandVersion *)v29, 3) == 1 )
          v30 = *(_QWORD *)(v46 - 12);
          if ( (_DWORD)v30 == HIDWORD(v30) )
            j__ZNSt6vectorIN23AvailableCommandsPacket12OverloadDataESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_(v45);
            v31 = *(_DWORD *)(v46 - 12);
            *(_QWORD *)v30 = 0LL;
            *(_DWORD *)(v30 + 8) = 0;
            v31 = *(_DWORD *)(v46 - 12) + 12;
            *(_DWORD *)(v46 - 12) = v31;
          std::vector<AvailableCommandsPacket::ParamData,std::allocator<AvailableCommandsPacket::ParamData>>::reserve(
            v31 - 12,
            -858993459 * ((signed int)((*(_QWORD *)(v29 + 12) >> 32) - *(_QWORD *)(v29 + 12)) >> 3));
          v32 = *(_QWORD *)(v29 + 12) >> 32;
          for ( j = *(_QWORD *)(v29 + 12); v32 != j; *(_BYTE *)(v35 - 4) = v36 )
            v34 = *(_QWORD *)(v31 - 8);
            if ( (_DWORD)v34 == HIDWORD(v34) )
              j__ZNSt6vectorIN23AvailableCommandsPacket9ParamDataESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)(v31 - 12));
              v35 = *(_DWORD *)(v31 - 8);
              *(_QWORD *)v34 = 0LL;
              *(_DWORD *)(v34 + 8) = 0;
              *(_DWORD *)v34 = &unk_28898CC;
              v35 = *(_DWORD *)(v31 - 8) + 12;
              *(_DWORD *)(v31 - 8) = v35;
            EntityInteraction::setInteractText((int *)(v35 - 12), (int *)(j + 12));
            CommandRegistry::getParseSymbol(&v53, j);
            *(_DWORD *)(v35 - 8) = v53;
            v36 = *(_BYTE *)(j + 36);
            j += 40;
        v29 += 28;
        v28 = v49;
  AvailableCommandsPacket::AvailableCommandsPacket(
    (int)v47,
    (unsigned __int64 *)(v22 + 96),
    (unsigned __int64 *)(v22 + 132),
    (int)&v54);
  v37 = *(_QWORD *)&v54;
  if ( v54 != v55 )
    v38 = v54;
      v38 = (AvailableCommandsPacket::CommandData *)((char *)AvailableCommandsPacket::CommandData::~CommandData(v38) + 28);
    while ( (AvailableCommandsPacket::CommandData *)HIDWORD(v37) != v38 );
  if ( (_DWORD)v37 )
    operator delete((void *)v37);
  v40 = v58;
  v39 = v57;
  if ( v57 != v58 )
      v43 = *(void **)(v39 + 4);
      if ( v43 )
        operator delete(v43);
      v44 = (int *)(*(_DWORD *)v39 - 12);
      if ( v44 != &dword_28898C0 )
        v41 = (unsigned int *)(*(_DWORD *)v39 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v44);
      v39 += 16;
    while ( v39 != v40 );
    v39 = v57;
  if ( v39 )
    operator delete((void *)v39);
}


int __fastcall CommandRegistry::allocateCommand<TestForCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x74u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A264;
  result = j_CommandSelector<Entity>::CommandSelector((int)v2 + 20);
  *v1 = v2;
  return result;
}


char *__fastcall CommandRegistry::registerCommand(int a1, const void **a2, const char *a3, char a4, int a5, int a6)
{
  int v6; // r10@1
  int *v7; // r7@1
  const char *v8; // r9@1
  char v9; // r8@1
  void *v10; // r0@2
  void *v11; // r0@7
  int v12; // r4@8
  _DWORD *v13; // r5@8
  void *v14; // r2@8
  int v15; // r7@8
  int v16; // r1@8
  size_t v17; // r4@9
  size_t v18; // r2@10
  _DWORD *v19; // r1@10
  size_t v20; // r6@10
  int v21; // r0@12
  int *v22; // r1@12
  bool v23; // zf@17
  bool v24; // nf@17
  unsigned __int8 v25; // vf@17
  int v26; // r0@17
  _DWORD *v27; // r0@21
  unsigned int v28; // r6@21
  unsigned int v29; // r4@21
  size_t v30; // r2@21
  int v31; // r0@23
  _DWORD *v32; // r1@28
  size_t v33; // r4@28
  size_t v34; // r6@28
  size_t v35; // r2@28
  unsigned int v36; // r0@30
  int v37; // r5@32
  _DWORD *v38; // r1@34
  void *v39; // r2@34
  void *v40; // r2@34
  int v41; // r0@34
  int v42; // r2@34
  int v43; // r2@34
  int v44; // r0@34
  signed int v45; // r3@34
  signed int v46; // r4@34
  signed int v47; // r6@34
  char *v48; // r0@35
  char *v49; // r0@36
  __int64 v50; // r0@37
  char *result; // r0@38
  unsigned int *v52; // r2@40
  signed int v53; // r1@42
  unsigned int *v54; // r2@44
  signed int v55; // r1@46
  unsigned int *v56; // r2@48
  signed int v57; // r1@50
  void *v58; // [sp+10h] [bp-D0h]@8
  void *v59; // [sp+14h] [bp-CCh]@8
  int v60; // [sp+1Ch] [bp-C4h]@8
  int v61; // [sp+20h] [bp-C0h]@8
  char v62; // [sp+24h] [bp-BCh]@8
  int v63; // [sp+28h] [bp-B8h]@8
  int v64; // [sp+2Ch] [bp-B4h]@8
  char v65; // [sp+30h] [bp-B0h]@8
  signed int v66; // [sp+34h] [bp-ACh]@8
  signed int v67; // [sp+38h] [bp-A8h]@8
  int v68; // [sp+3Ch] [bp-A4h]@8
  char v69; // [sp+40h] [bp-A0h]@8
  void *s1; // [sp+44h] [bp-9Ch]@8
  char *v71; // [sp+48h] [bp-98h]@8
  void *v72; // [sp+4Ch] [bp-94h]@8
  void *v73; // [sp+50h] [bp-90h]@8
  int v74; // [sp+54h] [bp-8Ch]@8
  int v75; // [sp+58h] [bp-88h]@8
  int v76; // [sp+5Ch] [bp-84h]@8
  char v77; // [sp+60h] [bp-80h]@8
  int v78; // [sp+64h] [bp-7Ch]@8
  int v79; // [sp+68h] [bp-78h]@8
  int v80; // [sp+6Ch] [bp-74h]@8
  signed int v81; // [sp+70h] [bp-70h]@8
  signed int v82; // [sp+74h] [bp-6Ch]@8
  signed int v83; // [sp+78h] [bp-68h]@8
  char v84; // [sp+7Ch] [bp-64h]@8
  char v85; // [sp+80h] [bp-60h]@5
  unsigned __int16 v86; // [sp+84h] [bp-5Ch]@5
  __int64 v87; // [sp+88h] [bp-58h]@2
  __int64 v88; // [sp+90h] [bp-50h]@2
  void *ptr; // [sp+9Ch] [bp-44h]@2
  char *v90; // [sp+A0h] [bp-40h]@2
  char *v91; // [sp+A4h] [bp-3Ch]@2
  int v92; // [sp+ACh] [bp-34h]@2
  int v93; // [sp+B0h] [bp-30h]@1

  v6 = a1;
  v7 = (int *)a2;
  v8 = a3;
  v9 = a4;
  CommandRegistry::addSoftTerminal(&v93, a1, a2);
  if ( !((a6 | a5) & 2) )
  {
    sub_21E94B4((void **)&v92, "CommandName");
    LODWORD(v87) = v93 & 0xFC0FFFFF;
    v88 = 0LL;
    v10 = operator new(0x10u);
    ptr = v10;
    v91 = (char *)v10 + 16;
    *(_QWORD *)v10 = v87;
    *((_QWORD *)v10 + 1) = 0LL;
    v90 = (char *)v10 + 16;
    LOBYTE(v10) = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
    __dmb();
    if ( !((unsigned __int8)v10 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    {
      type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
      j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
    }
    v86 = type_id<CommandRegistry,std::string>(void)::id[0];
    CommandRegistry::addEnumValuesInternal(
      &v85,
      v6,
      (int)&v92,
      (int)&ptr,
      (int)&v86,
      (int)CommandRegistry::parse<std::string>,
      0);
    if ( ptr )
      operator delete(ptr);
    v11 = (void *)(v92 - 12);
    if ( (int *)(v92 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v92 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
      }
      else
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  sub_21E8AF4((int *)&s1, v7);
  v12 = v93;
  sub_21E8AF4((int *)&v58, v7);
  sub_21E94B4((void **)((unsigned int)&v58 | 4), v8);
  v62 = v9;
  v63 = v12;
  v64 = 0;
  v65 = a6 | a5;
  v66 = -1;
  v67 = -1;
  v68 = -1;
  v69 = 1;
  v13 = s1;
  v14 = v58;
  v58 = &unk_28898CC;
  v71 = (char *)s1;
  v72 = v14;
  s1 = &unk_28898CC;
  v73 = v59;
  v74 = 0;
  *(_QWORD *)&v59 = (unsigned int)&unk_28898CC;
  v75 = 0;
  v76 = 0;
  v60 = 0;
  v61 = 0;
  v77 = v9;
  v78 = v12;
  v79 = 0;
  v80 = *(_DWORD *)&v65;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v15 = v6 + 208;
  v84 = 1;
  v16 = *(_DWORD *)(v6 + 212);
  if ( !v16 )
    goto LABEL_66;
  v17 = *(v13 - 3);
  do
    v15 = v16;
    v18 = v17;
    v19 = *(_DWORD **)(v16 + 16);
    v20 = *(v19 - 3);
    if ( v17 > v20 )
      v18 = *(v19 - 3);
    v21 = memcmp(v13, v19, v18);
    v22 = (int *)(v15 + 12);
    if ( !v21 )
      v21 = v17 - v20;
    if ( v21 < 0 )
      v22 = (int *)(v15 + 8);
    v16 = *v22;
  while ( v16 );
  v25 = __OFSUB__(v21, -1);
  v23 = v21 == -1;
  v24 = v21 + 1 < 0;
  v26 = v15;
  if ( (unsigned __int8)(v24 ^ v25) | v23 )
LABEL_66:
    if ( v15 == *(_DWORD *)(v6 + 216) )
LABEL_26:
      if ( v15 )
        if ( v6 + 208 == v15 )
        {
          v37 = 1;
        }
        else
          v32 = *(_DWORD **)(v15 + 16);
          v33 = *(v13 - 3);
          v34 = *(v32 - 3);
          v35 = v33;
          if ( v33 > v34 )
            v35 = *(v32 - 3);
          v36 = memcmp(v13, v32, v35);
          if ( !v36 )
            v36 = v33 - v34;
          v37 = v36 >> 31;
        v38 = operator new(0x48u);
        v38[4] = v71;
        v71 = (char *)&unk_28898CC;
        v39 = v72;
        v72 = &unk_28898CC;
        v38[5] = v39;
        v40 = v73;
        v73 = &unk_28898CC;
        v41 = v74;
        v38[6] = v40;
        v38[7] = v41;
        v74 = 0;
        v42 = v75;
        v75 = 0;
        v38[8] = v42;
        v43 = v76;
        v76 = 0;
        LOBYTE(v41) = v77;
        v38[9] = v43;
        *((_BYTE *)v38 + 40) = v41;
        v38[11] = v78;
        v38[12] = v79;
        v44 = (int)(v38 + 13);
        v45 = v81;
        v46 = v82;
        v47 = v83;
        *(_DWORD *)v44 = v80;
        *(_DWORD *)(v44 + 4) = v45;
        *(_DWORD *)(v44 + 8) = v46;
        *(_DWORD *)(v44 + 12) = v47;
        *((_BYTE *)v38 + 68) = v84;
        sub_21D4928(v37, (int)v38, v15, v6 + 208);
        ++*(_DWORD *)(v6 + 224);
      goto LABEL_35;
    v26 = sub_21D4858(v15);
  v27 = *(_DWORD **)(v26 + 16);
  v28 = *(v13 - 3);
  v29 = *(v27 - 3);
  v30 = *(v27 - 3);
  if ( v29 > v28 )
    v30 = *(v13 - 3);
  v31 = memcmp(v27, v13, v30);
  if ( !v31 )
    v31 = v29 - v28;
  if ( v31 <= -1 )
    goto LABEL_26;
LABEL_35:
  CommandRegistry::Signature::~Signature((CommandRegistry::Signature *)&v72);
  v48 = v71 - 12;
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
    else
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  CommandRegistry::Signature::~Signature((CommandRegistry::Signature *)&v58);
  v49 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)((char *)s1 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = *(_QWORD *)(v6 + 196);
  if ( (_DWORD)v50 == HIDWORD(v50) )
    result = std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
               (unsigned __int64 *)(v6 + 192),
               &v93);
  else
    *(_DWORD *)v50 = v93;
    result = (char *)(v50 + 4);
    *(_DWORD *)(v6 + 196) = result;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<TestForBlocksCommand::Mode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


void __fastcall CommandRegistry::getInvertableFilter(CommandRegistry *this, const CommandRegistry::ParseToken *a2, int a3)
{
  CommandRegistry::getInvertableFilter(this, a2, a3);
}


signed int __fastcall CommandRegistry::parseEnum<ExecuteCommand::Mode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::allocateCommand<TestForBlocksCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x48u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A250;
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 20));
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 36));
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 52));
  result = 0;
  *v1 = v2;
  *((_DWORD *)v2 + 17) = 0;
  return result;
}


int __fastcall CommandRegistry::ParseRule::ParseRule(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int, signed int); // r3@1
  int v7; // r5@1
  int v8; // r0@3
  int v9; // r0@3

  v4 = a1;
  *(_DWORD *)a1 = *a2;
  v5 = a4;
  *(_DWORD *)(a1 + 12) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(a4 + 8);
  v7 = a3;
  if ( v6 )
  {
    v6(a1 + 4, v5, 2);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 12) = *(_DWORD *)(v5 + 8);
  }
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 20) = *(_DWORD *)v7;
  *(_DWORD *)v7 = 0;
  v8 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v7 + 4) = v8;
  v9 = *(_DWORD *)(v4 + 28);
  *(_DWORD *)(v4 + 28) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v9;
  return v4;
}


int __fastcall CommandRegistry::addEnumValues<CloneCommand::CloneMode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id) )
    type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id);
  v25 = type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<CloneCommand::CloneMode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


void __fastcall CommandRegistry::ready(CommandRegistry *this)
{
  CommandRegistry::ready(this);
}


int __fastcall CommandRegistry::Symbol::fromOptionalIndex(int result, unsigned int a2)
{
  *(_DWORD *)result = a2 | 0x500000;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<TitleCommand::Mode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::Symbol::Symbol(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


void __fastcall CommandRegistry::addEnumValuesToExisting(int a1, int a2, int a3, int a4, int a5, int a6, void *a7, int a8, int a9, int a10, char a11)
{
  CommandRegistry::addEnumValuesToExisting(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


_DWORD *__fastcall CommandRegistry::Factorization::Factorization(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  return result;
}


int *__fastcall CommandRegistry::Signature::Signature(int *a1, int *a2, const char *a3, char a4, _DWORD *a5, char a6)
{
  char v6; // r4@1
  const char *v7; // r6@1
  int *v8; // r5@1

  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E94B4((void **)v8 + 1, v7);
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  *((_BYTE *)v8 + 20) = v6;
  *((_QWORD *)v8 + 3) = *a5;
  *((_BYTE *)v8 + 32) = a6;
  v8[9] = -1;
  v8[10] = -1;
  v8[11] = -1;
  *((_BYTE *)v8 + 48) = 1;
  return v8;
}


unsigned int __fastcall CommandRegistry::Symbol::isOptional(CommandRegistry::Symbol *this)
{
  return (*((_BYTE *)this + 2) & 0x40u) >> 6;
}


Command *__fastcall CommandRegistry::allocateCommand<ReplaceItemCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  Command *result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0xC0u);
  result = j_ReplaceItemCommand::ReplaceItemCommand(v2);
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::ParseToken::ParseToken(int result, _DWORD *a2, unsigned int a3)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = *a2;
  return result;
}


int __fastcall CommandRegistry::allocateCommand<DeOpCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x74u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_2719FFC;
  result = j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<DimensionId>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,DimensionId>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,DimensionId>(void)::id) )
    type_id<CommandRegistry,DimensionId>(void)::id = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,DimensionId>(void)::id);
  v25 = type_id<CommandRegistry,DimensionId>(void)::id;
  CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<DimensionId>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    operator delete(v15);
  return v14;
}


signed int __fastcall CommandRegistry::parseEnum<TimeCommand::Query>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


signed int __fastcall CommandRegistry::parseEnum<GameType>(int a1, _DWORD *a2, int a3)
{
  int v3; // lr@1
  unsigned int v4; // r12@1
  signed int v5; // r2@1
  int v6; // r0@4
  signed int v7; // r3@2

  v3 = *(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16);
  v4 = *(_DWORD *)(*(_DWORD *)a3 + 20) & 0xFC0FFFFF;
  v5 = (signed int)((*(_QWORD *)(*(_DWORD *)(a1 + 108) + 28 * (*(_DWORD *)(a3 + 20) & 0xFC0FFFFF) + 16) >> 32) - v3) >> 4;
  while ( 1 )
  {
    v7 = v5;
    if ( v5 < 1 )
      break;
    v5 >>= 1;
    if ( *(_DWORD *)(v3 + 16 * (v7 >> 1)) < v4 )
    {
      v6 = v3 + 16 * v5;
      v5 = v7 - 1 - v5;
      v3 = v6 + 16;
    }
  }
  *a2 = *(_DWORD *)(v3 + 8);
  return 1;
}


signed int __fastcall CommandRegistry::readInt(_DWORD *a1, int a2, void **a3, int a4)
{
  _DWORD *v4; // r7@1
  int v5; // r4@1
  void **v6; // r8@1
  int v7; // r5@1
  signed int v8; // r7@1
  void *v9; // r0@1
  __int64 v10; // r0@3
  int v11; // r1@4
  signed int result; // r0@5
  void *v13; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  void *v18; // [sp+0h] [bp-30h]@3
  int v19; // [sp+4h] [bp-2Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v19, a2);
  v8 = Util::toInt<int,(void *)0>((unsigned int *)&v19, v4);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  if ( v8 )
    sub_21E8190(v6, "commands.generic.num.invalid", (_BYTE *)0x1C);
    CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v18, v7);
    v10 = *(_QWORD *)(v5 + 4);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)v5,
        &v18);
      v11 = (int)v18;
      *(_DWORD *)v10 = v18;
      HIDWORD(v10) = &unk_28898CC;
      v18 = &unk_28898CC;
      *(_DWORD *)(v5 + 4) = v10 + 4;
    v13 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall CommandRegistry::ParseRule::ParseRule(int result, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r2@1
  int v4; // r2@1
  int v5; // r2@1
  int v6; // r2@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = 0;
  v2 = *(_QWORD *)(a2 + 4);
  *(_QWORD *)(a2 + 4) = *(_QWORD *)(result + 4);
  *(_QWORD *)(result + 4) = v2;
  v3 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = v3;
  v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = 0;
  v5 = *(_DWORD *)(result + 24);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v5;
  v6 = *(_DWORD *)(result + 28);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 28) = v6;
  return result;
}


int __fastcall CommandRegistry::findCommand(int a1, const void **a2)
{
  int v2; // r11@1
  int v3; // r9@1
  const void **v4; // r10@1
  int v5; // r7@1
  const void *v6; // r6@2
  int v7; // r5@2
  int v8; // r0@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r8@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  int v19; // r0@20
  int v20; // r11@20
  int v21; // r6@20
  const void *v22; // r5@21
  int v23; // r8@21
  size_t v24; // r4@21
  _DWORD *v25; // r0@23
  size_t v26; // r7@23
  size_t v27; // r2@23
  int v28; // r0@25
  _DWORD *v29; // r1@32
  unsigned int v30; // r4@32
  unsigned int v31; // r5@32
  size_t v32; // r2@32
  int v33; // r0@34
  int v34; // r0@39
  int v35; // r5@39
  _DWORD *v36; // r8@40
  int v37; // r10@40
  size_t v38; // r7@40
  _DWORD *v39; // r0@42
  size_t v40; // r4@42
  size_t v41; // r2@42
  int v42; // r0@44
  _DWORD *v43; // r0@54
  _DWORD *v44; // r1@54
  unsigned int v45; // r4@54
  unsigned int v46; // r6@54
  size_t v47; // r2@54
  int v48; // r0@56
  int result; // r0@61
  int v50; // [sp+0h] [bp-28h]@1

  v2 = a1;
  v3 = a1 + 208;
  v4 = a2;
  v5 = a1 + 208;
  v50 = *(_DWORD *)(a1 + 212);
  if ( v50 )
  {
    v6 = *a2;
    v7 = a1 + 208;
    v8 = *(_DWORD *)(a1 + 212);
    v9 = *((_DWORD *)*a2 - 3);
    do
    {
      v5 = v8;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v5 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v6, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v7;
          goto LABEL_12;
        }
      }
      v8 = *(_DWORD *)(v5 + 8);
      v7 = v5;
    }
    while ( v8 );
  }
LABEL_12:
  if ( v5 == v3 )
    goto LABEL_65;
  v14 = *(_DWORD **)(v5 + 16);
  v15 = *((_DWORD *)*v4 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v4 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = memcmp(*v4, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v5 = v3;
LABEL_65:
    v19 = *(_DWORD *)(v2 + 260);
    v20 = v2 + 256;
    v21 = v20;
    if ( v19 )
      v22 = *v4;
      v23 = v20;
      v24 = *((_DWORD *)*v4 - 3);
      do
        v21 = v19;
        while ( 1 )
          v25 = *(_DWORD **)(v21 + 16);
          v26 = *(v25 - 3);
          v27 = *(v25 - 3);
          if ( v26 > v24 )
            v27 = v24;
          v28 = memcmp(v25, v22, v27);
          if ( !v28 )
            v28 = v26 - v24;
          if ( v28 >= 0 )
            break;
          v21 = *(_DWORD *)(v21 + 12);
          if ( !v21 )
          {
            v21 = v23;
            goto LABEL_31;
          }
        v19 = *(_DWORD *)(v21 + 8);
        v23 = v21;
      while ( v19 );
LABEL_31:
    if ( v21 == v20 )
      v5 = v3;
    else
      v29 = *(_DWORD **)(v21 + 16);
      v30 = *((_DWORD *)*v4 - 3);
      v31 = *(v29 - 3);
      v32 = *((_DWORD *)*v4 - 3);
      if ( v30 > v31 )
        v32 = *(v29 - 3);
      v33 = memcmp(*v4, v29, v32);
      if ( !v33 )
        v33 = v30 - v31;
      if ( v33 < 0 )
        v21 = v20;
      if ( v21 == v20 )
        v5 = v3;
      else
        v34 = v50;
        v35 = v3;
        if ( v50 )
          v36 = *(_DWORD **)(v21 + 20);
          v37 = v3;
          v38 = *(v36 - 3);
          do
            v35 = v34;
            while ( 1 )
            {
              v39 = *(_DWORD **)(v35 + 16);
              v40 = *(v39 - 3);
              v41 = *(v39 - 3);
              if ( v40 > v38 )
                v41 = v38;
              v42 = memcmp(v39, v36, v41);
              if ( !v42 )
                v42 = v40 - v38;
              if ( v42 >= 0 )
                break;
              v35 = *(_DWORD *)(v35 + 12);
              if ( !v35 )
              {
                v35 = v37;
                goto LABEL_53;
              }
            }
            v34 = *(_DWORD *)(v35 + 8);
            v37 = v35;
          while ( v34 );
LABEL_53:
        if ( v35 != v3 )
          v43 = *(_DWORD **)(v21 + 20);
          v44 = *(_DWORD **)(v35 + 16);
          v45 = *(v43 - 3);
          v46 = *(v44 - 3);
          v47 = *(v43 - 3);
          if ( v45 > v46 )
            v47 = *(v44 - 3);
          v48 = memcmp(v43, v44, v47);
          if ( !v48 )
            v48 = v45 - v46;
          if ( v48 < 0 )
            v35 = v3;
          v5 = v35;
  result = 0;
  if ( v5 != v3 )
    result = v5 + 20;
  return result;
}


signed int __fastcall CommandRegistry::isParseMatch(int a1, _DWORD *a2)
{
  _DWORD *v2; // r6@1
  int v3; // r1@1
  signed int v4; // r4@1
  __int64 v5; // r2@1
  signed int v6; // r0@5
  int v7; // r3@5
  bool v8; // zf@5
  signed int result; // r0@14
  int v10; // [sp+4h] [bp-14h]@15

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 4);
  v8 = HIDWORD(v5) == 0;
  HIDWORD(v5) = (*(_QWORD *)(a1 + 4) >> 32) & 1;
  if ( v8 )
    v4 = 1;
  v8 = v5 == 0;
  HIDWORD(v5) = 0;
    HIDWORD(v5) = 1;
  v6 = 0;
  HIDWORD(v5) |= v4;
  v8 = (_DWORD)v5 == (_DWORD)CommandRegistry::parse<std::unique_ptr<Command,std::default_delete<Command>>>;
  if ( (signed int (__fastcall *)(int, int *, int, int, int, void **))v5 == CommandRegistry::parse<std::unique_ptr<Command,std::default_delete<Command>>> )
    v8 = v7 == 1;
  if ( v8 && *v2 == 1048604 )
    goto LABEL_19;
  if ( (signed int (__fastcall *)(int, int, int, int, int, void **, int))v5 == CommandRegistry::parse<RelativeFloat> )
    v6 = 1;
  if ( (v6 & v7) == 1 && *v2 == 1048578 )
  {
LABEL_19:
    result = 1;
  }
  else
    CommandRegistry::getParseSymbol(&v10, v3);
    result = 0;
    if ( v10 == *v2 )
      result = 1;
  return result;
}


int __fastcall CommandRegistry::forEachNonTerminal(int a1, int a2)
{
  unsigned int v2; // r7@1
  int v3; // r4@1
  int v4; // r5@1
  void (__fastcall *v5)(int, unsigned int *); // r2@3
  int v6; // r7@5
  void (__fastcall *v7)(int, unsigned int *); // r2@7
  int v8; // r7@9
  void (__fastcall *v9)(int, unsigned int *); // r2@11
  __int64 v10; // r0@12
  unsigned int v11; // r7@13
  void (__fastcall *v12)(int, unsigned int *); // r2@15
  unsigned int v14; // [sp+4h] [bp-1Ch]@3

  v2 = 1048577;
  v3 = a2;
  v4 = a1;
  do
  {
    if ( !*(_DWORD *)(v3 + 8) )
      goto LABEL_17;
    v5 = *(void (__fastcall **)(int, unsigned int *))(v3 + 12);
    v14 = v2;
    v5(v3, &v14);
    ++v2;
  }
  while ( v2 < 0x10001E );
  if ( *(_QWORD *)(v4 + 108) >> 32 != (unsigned int)*(_QWORD *)(v4 + 108) )
    v6 = 0;
    while ( *(_DWORD *)(v3 + 8) )
    {
      v7 = *(void (__fastcall **)(int, unsigned int *))(v3 + 12);
      v14 = v6 | 0x300000;
      v7(v3, &v14);
      if ( ++v6 >= (unsigned int)(-1227133513
                                * ((signed int)((*(_QWORD *)(v4 + 108) >> 32) - *(_QWORD *)(v4 + 108)) >> 2)) )
        goto LABEL_8;
    }
LABEL_17:
    sub_21E5F48();
LABEL_8:
  if ( *(_QWORD *)(v4 + 84) >> 32 != (unsigned int)*(_QWORD *)(v4 + 84) )
    v8 = 0;
      v9 = *(void (__fastcall **)(int, unsigned int *))(v3 + 12);
      v14 = v8 | 0x500000;
      v9(v3, &v14);
      if ( ++v8 >= (unsigned int)(-1431655765 * ((signed int)((*(_QWORD *)(v4 + 84) >> 32) - *(_QWORD *)(v4 + 84)) >> 2)) )
        goto LABEL_12;
    goto LABEL_17;
LABEL_12:
  v10 = *(_QWORD *)(v4 + 120);
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = 0;
      v12 = *(void (__fastcall **)(int, unsigned int *))(v3 + 12);
      v14 = v11 | 0x900000;
      v12(v3, &v14);
      ++v11;
      LODWORD(v10) = (*(_QWORD *)(v4 + 120) >> 32) - *(_QWORD *)(v4 + 120);
      if ( v11 >= (signed int)v10 >> 2 )
        return v10;
  return v10;
}


int __fastcall CommandRegistry::addEnumValues(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int *v5; // r5@1
  int *v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char **v9; // r0@11
  char *v10; // r1@12
  char *v11; // r0@14
  char v12; // r0@16
  char **v13; // r5@19
  char **v14; // r7@19
  int v15; // r9@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int *v18; // r0@29
  int v20; // [sp+Ch] [bp-5Ch]@0
  int (**v21)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v22; // [sp+14h] [bp-54h]@1
  int v23; // [sp+18h] [bp-50h]@19
  unsigned __int16 v24; // [sp+1Ch] [bp-4Ch]@19
  char *v25; // [sp+20h] [bp-48h]@11
  int v26; // [sp+28h] [bp-40h]@11
  int v27; // [sp+2Ch] [bp-3Ch]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v22 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 2);
  v5 = (int *)(*v3 >> 32);
  v6 = (int *)*v3;
  if ( v6 != v5 )
  {
    v21 = &pthread_create;
    do
    {
      sub_21E8AF4((int *)&v25, v6);
      v26 = 0;
      v27 = 0;
      v9 = v29;
      if ( v29 == v30 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v25);
        v10 = v25;
      }
      else
        *v29 = v25;
        v10 = (char *)&unk_28898CC;
        v25 = (char *)&unk_28898CC;
        v9[2] = 0;
        v9[3] = 0;
        v29 = v9 + 4;
      v11 = v10 - 12;
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      ++v6;
    }
    while ( v6 != v5 );
  }
  v12 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  __dmb();
  if ( !(v12 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
  v24 = type_id<CommandRegistry,std::string>(void)::id[0];
  CommandRegistry::addEnumValuesInternal(
    (int)&v23,
    v22,
    v4,
    (int)&v24,
    (int)CommandRegistry::parse<std::string>,
    0,
    v20,
    (int)v21,
    v22);
  v14 = v29;
  v13 = v28;
  v15 = v23;
  if ( v28 != v29 )
      v18 = (int *)(*v13 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*v13 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v13 += 4;
    while ( v13 != v14 );
    v13 = v28;
  if ( v13 )
    operator delete(v13);
  return v15;
}


signed int __fastcall CommandRegistry::parseEnum<Enchant::Type>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::allocateCommand<SetBlockCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x30u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A188;
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 20));
  result = 0;
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 11) = 0;
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::parseSelector(int a1, CommandSelectorBase *this, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  CommandSelectorBase *v63; // r6@1
  int v64; // r5@1
  int v65; // r8@1
  int v66; // r4@1
  int v67; // r7@1
  _BYTE *v68; // r0@2
  int v69; // r4@6
  int v70; // r0@10
  int v71; // r2@10
  signed int v72; // r0@12
  _BYTE *v73; // r0@17
  char *v74; // r0@18
  int v75; // r0@27
  _DWORD **v76; // r11@27
  _DWORD *v81; // r7@29
  int *v82; // r2@29
  int v83; // r0@29
  _DWORD *v84; // r1@29
  int v85; // r3@29
  int v86; // r8@31
  int *v87; // r1@31
  int v88; // r3@41
  int *v89; // r2@41
  int *i; // r1@41
  int *v91; // r5@51
  int *v92; // r0@52
  int v93; // r1@52
  int v94; // r0@55
  int v95; // r7@61
  _DWORD *v96; // r0@65
  int v97; // r9@66
  void *v98; // r0@67
  unsigned int *v99; // r2@68
  signed int v100; // r1@70
  _BYTE *v101; // r0@73
  int v102; // r5@77
  int v103; // r0@81
  int v104; // r2@81
  int v105; // r0@84
  signed int v106; // r7@85
  _BYTE *v107; // r0@87
  char *v108; // r0@88
  signed int v109; // r5@95
  void *v110; // r0@95
  int v111; // r5@97
  signed int v112; // r5@105
  int v113; // r0@111
  _DWORD *v114; // r0@123
  unsigned int v115; // r7@123
  unsigned int *v116; // r2@130
  signed int v117; // r1@132
  unsigned int *v118; // r2@134
  signed int v119; // r1@136
  unsigned int *v120; // r2@152
  signed int v121; // r1@154
  signed int v124; // r4@205
  __int64 v125; // r4@207
  _QWORD *v126; // r0@207
  __int64 v127; // r1@207
  __int64 v128; // r4@210
  _QWORD *v129; // r0@210
  __int64 v130; // r1@210
  __int64 v131; // kr00_8@213
  __int64 v132; // kr08_8@215
  char *v133; // r1@216
  unsigned int *v134; // r2@217
  signed int v135; // r1@219
  unsigned int *v136; // r2@221
  signed int v137; // r1@223
  char *v138; // r0@234
  _QWORD *v139; // r0@236
  __int64 v140; // r1@236
  __int64 v142; // kr10_8@241
  char *v143; // r1@242
  __int64 v144; // kr18_8@243
  char *v145; // r1@244
  unsigned int *v146; // r2@247
  signed int v147; // r1@249
  _DWORD *v148; // [sp+24h] [bp-19Ch]@28
  _BYTE *v149; // [sp+28h] [bp-198h]@28
  _DWORD *v150; // [sp+2Ch] [bp-194h]@28
  _BYTE *v151; // [sp+30h] [bp-190h]@28
  int v152; // [sp+34h] [bp-18Ch]@28
  char v153; // [sp+38h] [bp-188h]@28
  char v154; // [sp+3Ch] [bp-184h]@28
  char v155; // [sp+40h] [bp-180h]@28
  _BYTE *v156; // [sp+44h] [bp-17Ch]@28
  unsigned int v157; // [sp+4Ch] [bp-174h]@28
  CommandRegistry::ParseToken *v158; // [sp+50h] [bp-170h]@27
  _QWORD *v159; // [sp+58h] [bp-168h]@236
  __int64 v160; // [sp+60h] [bp-160h]@236
  _QWORD *v161; // [sp+68h] [bp-158h]@210
  __int64 v162; // [sp+70h] [bp-150h]@210
  _QWORD *v163; // [sp+78h] [bp-148h]@207
  __int64 v164; // [sp+80h] [bp-140h]@207
  float v165; // [sp+88h] [bp-138h]@168
  float v166; // [sp+8Ch] [bp-134h]@164
  int v167; // [sp+90h] [bp-130h]@158
  int v168; // [sp+94h] [bp-12Ch]@158
  int v169; // [sp+98h] [bp-128h]@158
  int v170; // [sp+9Ch] [bp-124h]@151
  int v171; // [sp+A0h] [bp-120h]@151
  int v172; // [sp+A4h] [bp-11Ch]@151
  int v173; // [sp+A8h] [bp-118h]@140
  int v174; // [sp+ACh] [bp-114h]@140
  int v175; // [sp+B0h] [bp-110h]@140
  int v176; // [sp+B4h] [bp-10Ch]@95
  unsigned int v177; // [sp+B8h] [bp-108h]@95
  _DWORD *v178; // [sp+BCh] [bp-104h]@123
  void (__cdecl *v179)(_DWORD); // [sp+C4h] [bp-FCh]@123
  signed int (__fastcall *v180)(int *, int, int); // [sp+C8h] [bp-F8h]@123
  char *v181; // [sp+CCh] [bp-F4h]@241
  char *v182; // [sp+D0h] [bp-F0h]@106
  unsigned int v183; // [sp+D4h] [bp-ECh]@104
  _BYTE *v184; // [sp+D8h] [bp-E8h]@73
  _BYTE *v185; // [sp+DCh] [bp-E4h]@81
  int v186; // [sp+E0h] [bp-E0h]@73
  int v187; // [sp+E8h] [bp-D8h]@67
  char *v188; // [sp+F0h] [bp-D0h]@215
  int v189; // [sp+F4h] [bp-CCh]@27
  int v190; // [sp+F8h] [bp-C8h]@27
  int v191; // [sp+FCh] [bp-C4h]@27
  int v192[3]; // [sp+100h] [bp-C0h]@27
  int v193; // [sp+10Ch] [bp-B4h]@109
  int v194; // [sp+110h] [bp-B0h]@27
  int v195; // [sp+114h] [bp-ACh]@27
  int v196; // [sp+118h] [bp-A8h]@27
  int v197; // [sp+11Ch] [bp-A4h]@27
  int v198; // [sp+120h] [bp-A0h]@27
  int v199; // [sp+124h] [bp-9Ch]@27
  int v200; // [sp+130h] [bp-90h]@27
  int v201; // [sp+134h] [bp-8Ch]@27
  char v202; // [sp+138h] [bp-88h]@27
  int v203; // [sp+13Ch] [bp-84h]@41
  int v204; // [sp+140h] [bp-80h]@41
  char v205; // [sp+150h] [bp-70h]@239
  int v206; // [sp+154h] [bp-6Ch]@27
  int v207; // [sp+158h] [bp-68h]@27
  int *v208; // [sp+15Ch] [bp-64h]@27
  int *v209; // [sp+160h] [bp-60h]@27
  int v210; // [sp+164h] [bp-5Ch]@27
  _BYTE *v211; // [sp+168h] [bp-58h]@2
  _BYTE *v212; // [sp+16Ch] [bp-54h]@10
  char v213; // [sp+170h] [bp-50h]@17

  v63 = this;
  v64 = a1;
  v65 = a4;
  v66 = a3;
  CommandSelectorBase::setVersion(this, a5);
  v67 = *(_DWORD *)v66;
  if ( *(_DWORD *)(*(_DWORD *)v66 + 20) == 1048589 )
  {
    CommandSelectorBase::setType((int)v63, 2);
    CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v211, v66);
    v68 = v211;
    if ( *((_DWORD *)v211 - 3) < 2u )
      goto LABEL_278;
    if ( *((_DWORD *)v211 - 1) >= 0 )
    {
      sub_21E8010((const void **)&v211);
      v68 = v211;
    }
    if ( *v68 != 34 )
    v69 = *((_DWORD *)v68 - 3);
    if ( *((_DWORD *)v68 - 1) >= 0 )
    if ( v68[v69 - 1] != 34 )
LABEL_278:
      v212 = v68;
      v211 = &unk_28898CC;
    else
      if ( !*((_DWORD *)v68 - 3) )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 1, 0);
      sub_21E9040((void **)&v212, (int *)&v211, 1u, 0xFFFFFFFF);
      v70 = *((_DWORD *)v212 - 3);
      v71 = v70 - 1;
      if ( !v70 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v71, 0);
      sub_21E7EE0((const void **)&v212, v71, (_BYTE *)1, 0);
    v213 = 0;
    CommandSelectorBase::addNameFilter((int)v63, (int)&v212);
    v73 = v212 - 12;
    if ( (int *)(v212 - 12) != &dword_28898C0 )
      v134 = (unsigned int *)(v212 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
      }
      else
        v135 = (*v134)--;
      if ( v135 <= 0 )
        j_j_j_j__ZdlPv_9(v73);
    v74 = v211 - 12;
    if ( (int *)(v211 - 12) != &dword_28898C0 )
      v136 = (unsigned int *)(v211 - 4);
          v137 = __ldrex(v136);
        while ( __strex(v137 - 1, v136) );
        v137 = (*v136)--;
      if ( v137 <= 0 )
        j_j_j_j__ZdlPv_9(v74);
    CommandSelectorBase::setResultCount(v63, 1u);
    return CommandSelectorBase::compile((int)v63, v65, (void **)a6);
  }
  v72 = *(_BYTE *)(*(_DWORD *)(v67 + 12) + 1);
  if ( v72 <= 111 )
    if ( v72 == 97 )
      CommandSelectorBase::setType((int)v63, 2);
      CommandSelectorBase::setIncludeDeadPlayers(v63, 1);
    else if ( v72 == 101 )
      CommandSelectorBase::setType((int)v63, 1);
    goto LABEL_26;
  if ( v72 == 114 )
    CommandSelectorBase::setType((int)v63, 3);
    CommandSelectorBase::setOrder((int)v63, 2);
    goto LABEL_25;
  if ( v72 == 112 )
LABEL_25:
LABEL_26:
  if ( !*(_DWORD *)(v67 + 4) )
  v210 = 0;
  v206 = 0;
  v207 = 0;
  v208 = &v206;
  v209 = &v206;
  v200 = *(_DWORD *)(v64 + 356);
  v158 = (CommandRegistry::ParseToken *)v64;
  v201 = *(_DWORD *)(v64 + 352);
  std::set<CommandRegistry::Symbol,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>>::set(
    (int)&v202,
    &v200,
    2);
  v194 = 0;
  v198 = -1028390912;
  v199 = 1119092736;
  v196 = -1020002304;
  v197 = 1127481344;
  v195 = 0x7FFFFFFF;
  v75 = CommandPosition::CommandPosition((CommandPosition *)v192);
  v189 = 0;
  v190 = 0;
  v191 = 0;
  v76 = *(_DWORD ***)(v67 + 4);
  if ( !v76 )
    goto LABEL_238;
  __asm
    VLDR            S16, =90.0
    VLDR            S18, =-90.0
    VLDR            S20, =180.0
  v149 = (_BYTE *)(v75 + 14);
  v151 = (_BYTE *)(v75 + 13);
  v148 = (_DWORD *)(v75 + 8);
  v156 = (_BYTE *)(v75 + 12);
  __asm { VLDR            S22, =-180.0 }
  v152 = v65;
  v150 = (_DWORD *)(v75 + 4);
  v155 = 0;
  v154 = 0;
  v153 = 0;
  v157 = 0;
  do
    v81 = *v76;
    v82 = &v206;
    v83 = v207;
    v84 = (_DWORD *)**v76;
    v85 = v207;
    if ( !v84 )
      v84 = *v76;
    v86 = v84[5];
    v87 = &v206;
    if ( v207 )
      do
        v87 = (int *)v85;
        while ( v87[4] < v86 )
        {
          v87 = (int *)v87[3];
          if ( !v87 )
          {
            v87 = v82;
            goto LABEL_37;
          }
        }
        v85 = v87[2];
        v82 = v87;
      while ( v85 );
LABEL_37:
    if ( v87 != &v206 )
      if ( v86 < v87[4] )
        v87 = &v206;
      if ( v87 != &v206 )
        sub_21E8190((void **)a6, "commands.generic.duplicateSelectorArgument", (_BYTE *)0x2A);
        CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v188, (int)*v76);
        v132 = *(_QWORD *)(a7 + 4);
        if ( (_DWORD)v132 == HIDWORD(v132) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)a7,
            &v188);
          v133 = v188;
        else
          *(_DWORD *)v132 = v188;
          v133 = (char *)&unk_28898CC;
          v188 = (char *)&unk_28898CC;
          *(_DWORD *)(a7 + 4) = v132 + 4;
        v138 = v133 - 12;
        if ( (int *)(v133 - 12) == &dword_28898C0 )
          goto LABEL_235;
        v146 = (unsigned int *)(v133 - 4);
        if ( !&pthread_create )
          goto LABEL_263;
          v147 = __ldrex(v146);
        while ( __strex(v147 - 1, v146) );
        goto LABEL_264;
    v88 = v204;
    v89 = &v203;
    for ( i = &v203; v88; v89 = i )
      i = (int *)v88;
      while ( i[4] < v86 )
        i = (int *)i[3];
        if ( !i )
          i = v89;
          goto LABEL_47;
      v88 = i[2];
LABEL_47:
    if ( i == &v203 )
      goto LABEL_279;
    if ( v86 < i[4] )
      i = &v203;
LABEL_279:
      v91 = &v206;
      if ( !v207 )
        goto LABEL_280;
        v91 = (int *)v83;
        v92 = (int *)(v83 + 12);
        v93 = v91[4];
        if ( v86 < v93 )
          v92 = v91 + 2;
        v83 = *v92;
      while ( v83 );
      v94 = (int)v91;
      if ( v86 < v93 )
LABEL_280:
        if ( v91 == v208 )
LABEL_59:
          if ( v91 )
            if ( &v206 == v91 )
            {
              v95 = 1;
            }
            else
              v95 = 0;
              if ( v86 < v91[4] )
                v95 = 1;
            v96 = operator new(0x14u);
            v96[4] = v86;
            sub_21D4928(v95, (int)v96, (int)v91, (int)&v206);
            ++v210;
            v81 = *v76;
          goto LABEL_66;
        v94 = sub_21D4858((int)v91);
      if ( *(_DWORD *)(v94 + 16) >= v86 )
        goto LABEL_66;
      goto LABEL_59;
LABEL_66:
    v97 = v81[1];
    if ( v86 == *((_DWORD *)v158 + 89) )
      CommandRegistry::getInvertableFilter((CommandRegistry *)&v187, v158, v81[1]);
      CommandSelectorBase::addTypeFilter((int)v63, (unsigned int *)&v187);
      v98 = (void *)(v187 - 12);
      if ( (int *)(v187 - 12) == &dword_28898C0 )
        goto LABEL_125;
      v99 = (unsigned int *)(v187 - 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        goto LABEL_118;
      goto LABEL_117;
    if ( v86 != *((_DWORD *)v158 + 88) )
      if ( v86 != *((_DWORD *)v158 + 87) )
        if ( v86 == *((_DWORD *)v158 + 86) )
          v177 = 0;
          CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v176, v97);
          v109 = Util::toInt<int,(void *)0>((unsigned int *)&v176, &v177);
          v110 = (void *)(v176 - 12);
          if ( (int *)(v176 - 12) != &dword_28898C0 )
            v120 = (unsigned int *)(v176 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v121 = __ldrex(v120);
              while ( __strex(v121 - 1, v120) );
              v121 = (*v120)--;
            if ( v121 <= 0 )
              j_j_j_j__ZdlPv_9(v110);
          if ( v109 )
            sub_21E8190((void **)a6, "Invalid entity count requested", (_BYTE *)0x1E);
            goto LABEL_235;
          v111 = v177;
          if ( !v177 )
            sub_21E8190((void **)a6, "Entity count cannot be 0", (_BYTE *)0x18);
          if ( (signed int)v177 <= -1 )
            if ( CommandSelectorBase::getOrder(v63) == 2 )
              sub_21E8190((void **)a6, "Cannot inverse sort a random selection", (_BYTE *)0x26);
              goto LABEL_235;
            v111 = -v111;
            v177 = v111;
            CommandSelectorBase::setOrder((int)v63, 1);
          CommandSelectorBase::setResultCount(v63, v111);
        else if ( v86 == *((_DWORD *)v158 + 72) )
          if ( CommandRegistry::readRelativeCoordinate(v156, v192, v97, 0, (void **)a6, a7) != 1 )
          CommandSelectorBase::setPosition((int)v63, v192[0], v192[1], v192[2], v193);
        else if ( v86 == *((_DWORD *)v158 + 73) )
          if ( CommandRegistry::readRelativeCoordinate(v151, v150, v81[1], 0, (void **)a6, a7) != 1 )
        else if ( v86 == *((_DWORD *)v158 + 74) )
          if ( CommandRegistry::readRelativeCoordinate(v149, v148, v81[1], 0, (void **)a6, a7) != 1 )
        else if ( v86 == *((_DWORD *)v158 + 75) )
          if ( CommandRegistry::readInt(&v189, v81[1], (void **)a6, a7) != 1 )
          v173 = v189;
          v174 = v190;
          v175 = v191;
          CommandSelectorBase::setBox((int)v63, (int)&v173);
        else if ( v86 == *((_DWORD *)v158 + 76) )
          if ( CommandRegistry::readInt(&v190, v81[1], (void **)a6, a7) != 1 )
          v170 = v189;
          v171 = v190;
          v172 = v191;
          CommandSelectorBase::setBox((int)v63, (int)&v170);
        else if ( v86 == *((_DWORD *)v158 + 77) )
          if ( CommandRegistry::readInt(&v191, v81[1], (void **)a6, a7) != 1 )
          v167 = v189;
          v168 = v190;
          v169 = v191;
          CommandSelectorBase::setBox((int)v63, (int)&v167);
        else if ( v86 == *((_DWORD *)v158 + 78) )
          if ( CommandRegistry::readFloat(&v166, v81[1], (void **)a6, a7) != 1 )
          __asm
            VLDR            S0, [SP,#0x1C0+var_134]
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            sub_21E8190((void **)a6, "commands.generic.radiusNegative", (_BYTE *)0x1F);
          __asm { VMOV            R1, S0 }
          CommandSelectorBase::setRadiusMax(v63, _R1);
        else if ( v86 == *((_DWORD *)v158 + 79) )
          if ( CommandRegistry::readFloat(&v165, v81[1], (void **)a6, a7) != 1 )
            VLDR            S0, [SP,#0x1C0+var_138]
          CommandSelectorBase::setRadiusMin(v63, _R1);
          if ( v86 == *((_DWORD *)v158 + 80) )
            if ( CommandRegistry::readFloat(&v199, v81[1], (void **)a6, a7) != 1 )
            __asm
              VLDR            S0, [SP,#0x1C0+var_9C]
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              goto LABEL_281;
              VCMPE.F32       S0, S18
            if ( _NF ^ _VF )
LABEL_281:
              sub_21E8190((void **)a6, "commands.generic.rotationError", (_BYTE *)0x1E);
            goto LABEL_183;
          if ( v86 == *((_DWORD *)v158 + 81) )
            if ( CommandRegistry::readFloat(&v198, v81[1], (void **)a6, a7) != 1 )
              VLDR            S0, [SP,#0x1C0+var_A0]
              goto LABEL_282;
LABEL_282:
LABEL_183:
            v155 = 1;
            goto LABEL_125;
          if ( v86 == *((_DWORD *)v158 + 82) )
            if ( CommandRegistry::readFloat(&v197, v81[1], (void **)a6, a7) != 1 )
              VLDR            S0, [SP,#0x1C0+var_A4]
              VCMPE.F32       S0, S20
              goto LABEL_283;
              VCMPE.F32       S0, S22
LABEL_283:
            goto LABEL_196;
          if ( v86 == *((_DWORD *)v158 + 83) )
            if ( CommandRegistry::readFloat(&v196, v81[1], (void **)a6, a7) != 1 )
              VLDR            S0, [SP,#0x1C0+var_A8]
              goto LABEL_284;
LABEL_284:
LABEL_196:
            v154 = 1;
          if ( v86 == *((_DWORD *)v158 + 84) )
            if ( !CommandRegistry::readInt(&v195, v81[1], (void **)a6, a7) )
          else
            if ( v86 != *((_DWORD *)v158 + 85) )
              goto LABEL_125;
            if ( CommandRegistry::readInt(&v194, v81[1], (void **)a6, a7) != 1 )
          v153 = 1;
      v105 = *(_DWORD *)(v97 + 20);
      if ( v105 == 12 )
        v97 = *(_DWORD *)(v97 + 4);
        v106 = 1;
        v105 = *(_DWORD *)(v97 + 20);
        v106 = 0;
      if ( v105 == 1 )
        if ( CommandRegistry::readInt(&v183, v97, (void **)a6, a7) != 1 )
        v112 = v183;
        if ( v183 >= 3 )
          sub_21E8190((void **)a6, "commands.gamemode.fail.invalid", (_BYTE *)0x1E);
          Util::toString<int,(void *)0,(void *)0>((void **)&v182, v112);
          v144 = *(_QWORD *)(a7 + 4);
          if ( (_DWORD)v144 == HIDWORD(v144) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)a7,
              &v182);
            v145 = v182;
            *(_DWORD *)v144 = v182;
            v145 = (char *)&unk_28898CC;
            v182 = (char *)&unk_28898CC;
            *(_DWORD *)(a7 + 4) = v144 + 4;
          v138 = v145 - 12;
          if ( (int *)(v145 - 12) == &dword_28898C0 )
          v146 = (unsigned int *)(v145 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v147 = __ldrex(v146);
            while ( __strex(v147 - 1, v146) );
            goto LABEL_264;
LABEL_263:
          v147 = (*v146)--;
          goto LABEL_264;
        goto LABEL_123;
      if ( !(v105 & 0x200000) )
        goto LABEL_241;
      v97 = *(_DWORD *)v97;
      v113 = **(_BYTE **)(v97 + 12);
      if ( v113 == 115 )
        v112 = 0;
      if ( v113 == 99 )
        v112 = 1;
      if ( v113 == 97 )
        v112 = 2;
LABEL_123:
        v179 = 0;
        v114 = operator new(8u);
        v115 = v106 | v157 & 0xFFFFFF00;
        *v114 = v112;
        v114[1] = v115;
        v178 = v114;
        v180 = sub_15C01D8;
        v179 = (void (__cdecl *)(_DWORD))sub_15C020E;
        CommandSelectorBase::addFilter((int)v63, (int)&v178);
        v157 = v115;
        if ( v179 )
          v179(&v178);
LABEL_241:
      sub_21E8190((void **)a6, "commands.gamemode.fail.invalid", (_BYTE *)0x1E);
      CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v181, v97);
      v142 = *(_QWORD *)(a7 + 4);
      if ( (_DWORD)v142 == HIDWORD(v142) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)a7,
          &v181);
        v143 = v181;
        *(_DWORD *)v142 = v181;
        v143 = (char *)&unk_28898CC;
        v181 = (char *)&unk_28898CC;
        *(_DWORD *)(a7 + 4) = v142 + 4;
      v138 = v143 - 12;
      if ( (int *)(v143 - 12) == &dword_28898C0 )
        goto LABEL_235;
      v146 = (unsigned int *)(v143 - 4);
      if ( !&pthread_create )
        goto LABEL_263;
      __dmb();
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
LABEL_264:
      if ( v147 <= 0 )
        j_j_j_j__ZdlPv_9(v138);
      goto LABEL_235;
    CommandRegistry::getInvertableFilter((CommandRegistry *)&v186, v158, v81[1]);
    sub_21E8AF4((int *)&v184, &v186);
    v101 = v184;
    if ( *((_DWORD *)v184 - 3) < 2u )
      goto LABEL_285;
    if ( *((_DWORD *)v184 - 1) >= 0 )
      sub_21E8010((const void **)&v184);
      v101 = v184;
    if ( *v101 != 34 )
    v102 = *((_DWORD *)v101 - 3);
    if ( *((_DWORD *)v101 - 1) >= 0 )
    if ( v101[v102 - 1] != 34 )
LABEL_285:
      v185 = v101;
      v184 = &unk_28898CC;
      if ( !*((_DWORD *)v101 - 3) )
      sub_21E9040((void **)&v185, (int *)&v184, 1u, 0xFFFFFFFF);
      v103 = *((_DWORD *)v185 - 3);
      v104 = v103 - 1;
      if ( !v103 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v104, 0);
      sub_21E7EE0((const void **)&v185, v104, (_BYTE *)1, 0);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      &v186,
      (int *)&v185);
    v107 = v185 - 12;
    if ( (int *)(v185 - 12) != &dword_28898C0 )
      v116 = (unsigned int *)(v185 - 4);
          v117 = __ldrex(v116);
        while ( __strex(v117 - 1, v116) );
        v117 = (*v116)--;
      if ( v117 <= 0 )
        j_j_j_j__ZdlPv_9(v107);
    v108 = v184 - 12;
    if ( (int *)(v184 - 12) != &dword_28898C0 )
      v118 = (unsigned int *)(v184 - 4);
          v119 = __ldrex(v118);
        while ( __strex(v119 - 1, v118) );
        v119 = (*v118)--;
      if ( v119 <= 0 )
        j_j_j_j__ZdlPv_9(v108);
    CommandSelectorBase::addNameFilter((int)v63, (int)&v186);
    v98 = (void *)(v186 - 12);
    if ( (int *)(v186 - 12) != &dword_28898C0 )
      v99 = (unsigned int *)(v186 - 4);
LABEL_118:
        if ( v100 <= 0 )
          j_j_j_j__ZdlPv_9(v98);
LABEL_117:
      v100 = (*v99)--;
      goto LABEL_118;
LABEL_125:
    v76 = (_DWORD **)v76[1];
  while ( v76 );
  v65 = v152;
  if ( v155 & 1 )
    v125 = *(_QWORD *)&v198;
    v126 = operator new(8u);
    LODWORD(v127) = sub_15C027E;
    *v126 = v125;
    HIDWORD(v127) = sub_15C0248;
    v163 = v126;
    v164 = v127;
    CommandSelectorBase::addFilter((int)v63, (int)&v163);
    if ( (_DWORD)v164 )
      ((void (__cdecl *)(_QWORD **))v164)(&v163);
  if ( v154 & 1 )
    v128 = *(_QWORD *)&v196;
    v129 = operator new(8u);
    LODWORD(v130) = sub_15C02EE;
    *v129 = v128;
    HIDWORD(v130) = sub_15C02B8;
    v161 = v129;
    v162 = v130;
    CommandSelectorBase::addFilter((int)v63, (int)&v161);
    if ( (_DWORD)v162 )
      ((void (__cdecl *)(_QWORD **))v162)(&v161);
  if ( v153 & 1 )
    v131 = *(_QWORD *)&v194;
    if ( v195 < v194 )
      sub_21E8190((void **)a6, "commands.generic.levelError", (_BYTE *)0x1B);
LABEL_235:
      v124 = 0;
      goto LABEL_239;
    v139 = operator new(8u);
    LODWORD(v140) = sub_15C035C;
    *v139 = v131;
    HIDWORD(v140) = sub_15C0328;
    v159 = v139;
    v160 = v140;
    CommandSelectorBase::addFilter((int)v63, (int)&v159);
    if ( (_DWORD)v160 )
      ((void (__cdecl *)(_QWORD **))v160)(&v159);
LABEL_238:
  v124 = CommandSelectorBase::compile((int)v63, v65, (void **)a6);
LABEL_239:
  std::_Rb_tree<CommandRegistry::Symbol,CommandRegistry::Symbol,std::_Identity<CommandRegistry::Symbol>,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>>::_M_erase(
    v204);
    (int)&v205,
    v207);
  return v124;
}


int __fastcall CommandRegistry::allocateCommand<OpCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x74u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A138;
  result = j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  *v1 = v2;
  return result;
}


void __fastcall CommandRegistry::autoComplete(int a1, int a2, int a3, int a4, int a5, int a6)
{
  CommandRegistry::autoComplete(a1, (int *)a2, (_DWORD *)a3, a4, a5, a6);
}


_DWORD *__fastcall CommandRegistry::Factorization::Factorization(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  return result;
}


void *__fastcall CommandRegistry::expandExcept(_DWORD *a1, int *a2, _DWORD *a3)
{
  int v3; // r1@1
  void *result; // r0@2
  int v5; // [sp+4h] [bp-Ch]@3

  v3 = *a2;
  if ( v3 == *a3 )
  {
    result = 0;
  }
  else
    v5 = v3;
    result = CommandRegistry::expand(a1, &v5);
  return result;
}


int __fastcall CommandRegistry::addEnumValues<CommandItem>(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  int *v3; // r6@1
  int *v4; // r9@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  __int64 v7; // kr08_8@11
  char **v8; // r0@11
  char *v9; // r1@12
  char *v10; // r0@14
  char v11; // r0@16
  int v12; // r9@19
  char **v13; // r5@19
  char **v14; // r7@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  int *v17; // r0@29
  int (**v19)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+Ch] [bp-5Ch]@0
  __int64 v20; // [sp+10h] [bp-58h]@1
  char v21; // [sp+18h] [bp-50h]@19
  unsigned __int16 v22; // [sp+1Ch] [bp-4Ch]@19
  char *v23; // [sp+20h] [bp-48h]@11
  __int64 v24; // [sp+28h] [bp-40h]@11
  char **v25; // [sp+34h] [bp-34h]@1
  char **v26; // [sp+38h] [bp-30h]@1
  char **v27; // [sp+3Ch] [bp-2Ch]@1

  v20 = a1;
  v25 = 0;
  v26 = 0;
  v2 = a2;
  v27 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v25,
    -1431655765 * ((signed int)((*a2 >> 32) - *a2) >> 2));
  v4 = (int *)(*v2 >> 32);
  v3 = (int *)*v2;
  if ( v3 != v4 )
  {
    v19 = &pthread_create;
    do
    {
      v7 = CommandItem::operator unsigned long long((int)(v3 + 1));
      sub_21E8AF4((int *)&v23, v3);
      v24 = v7;
      v8 = v26;
      if ( v26 == v27 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v25,
          (int)&v23);
        v9 = v23;
      }
      else
        *v26 = v23;
        v9 = (char *)&unk_28898CC;
        v23 = (char *)&unk_28898CC;
        *((_QWORD *)v8 + 1) = v7;
        v26 = v8 + 4;
      v10 = v9 - 12;
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v9 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      v3 += 3;
    }
    while ( v3 != v4 );
  }
  v11 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id;
  __dmb();
  if ( !(v11 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id) )
    type_id<CommandRegistry,CommandItem>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id);
  v22 = type_id<CommandRegistry,CommandItem>(void)::id[0];
  CommandRegistry::addEnumValuesInternal(
    (int)&v21,
    v20,
    SHIDWORD(v20),
    (int)&v22,
    (int)CommandRegistry::parseEnum<CommandItem>,
    0,
    (int)v19,
    SBYTE4(v20));
  v12 = CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v21);
  v14 = v26;
  v13 = v25;
  if ( v25 != v26 )
      v17 = (int *)(*v13 - 12);
      if ( v17 != &dword_28898C0 )
        v15 = (unsigned int *)(*v13 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v13 += 4;
    while ( v13 != v14 );
    v13 = v25;
  if ( v13 )
    operator delete(v13);
  return v12;
}


int __fastcall CommandRegistry::allocateCommand<XPCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x7Cu);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A2FC;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  result = 0;
  *((_DWORD *)v2 + 29) = 0;
  *((_DWORD *)v2 + 30) = 0;
  *v1 = v2;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<StructureFeatureType>(CommandRegistry *a1, _BYTE *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::allocateCommand<FillCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x48u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A060;
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 20));
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 36));
  result = 0;
  *((_DWORD *)v2 + 13) = 0;
  *((_DWORD *)v2 + 14) = 0;
  *((_DWORD *)v2 + 15) = 0;
  *((_DWORD *)v2 + 16) = 0;
  *((_DWORD *)v2 + 17) = -1;
  *v1 = v2;
  return result;
}


void **__fastcall CommandRegistry::allocateCommand<CloseWebSocketCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  void **result; // r0@1

  v1 = a1;
  v2 = (Command *)operator new(0x14u);
  Command::Command(v2);
  *v1 = v2;
  result = &off_26EB2DC;
  *(_DWORD *)v2 = &off_26EB2DC;
  return result;
}


int __fastcall CommandRegistry::Symbol::value(CommandRegistry::Symbol *this)
{
  return *(_DWORD *)this;
}


int __fastcall CommandRegistry::Symbol::fromPostfixIndex(int result, unsigned int a2)
{
  *(_DWORD *)result = a2 | 0x1000000;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<BlockSlot>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,BlockSlot>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,BlockSlot>(void)::id) )
    type_id<CommandRegistry,BlockSlot>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,BlockSlot>(void)::id);
  v25 = type_id<CommandRegistry,BlockSlot>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<BlockSlot>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


signed int __fastcall CommandRegistry::Symbol::operator<(int *a1, _DWORD *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *a1;
  result = 0;
  if ( v2 < *a2 )
    result = 1;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<EntityType>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = CommandRegistry::getEnumData(a1, a3);
  return 1;
}


unsigned int __fastcall CommandRegistry::Symbol::toIndex(CommandRegistry::Symbol *this)
{
  return *(_DWORD *)this & 0xFC0FFFFF;
}


void **__fastcall CommandRegistry::allocateCommand<ListCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  void **result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x14u);
  j_Command::Command(v2);
  *v1 = v2;
  result = &off_271A0D4;
  *(_DWORD *)v2 = &off_271A0D4;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<AgentCommands::CollectCommand::CollectionSpecification>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char *v9; // r10@11
  char **v10; // r0@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  char *v27; // [sp+28h] [bp-40h]@11
  int v28; // [sp+2Ch] [bp-3Ch]@11
  char **v29; // [sp+34h] [bp-34h]@1
  char **v30; // [sp+38h] [bp-30h]@1
  char **v31; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v29 = 0;
  v30 = 0;
  v3 = a3;
  v4 = a2;
  v31 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v29,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(char **)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v28 = 0;
      v10 = v30;
      if ( v30 == v31 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v29,
          (int)&v26);
        v11 = v26;
      }
      else
        *v30 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = v9;
        v10[3] = 0;
        v30 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id) )
    type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id);
  v25 = type_id<CommandRegistry,AgentCommands::CollectCommand::CollectionSpecification>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<AgentCommands::CollectCommand::CollectionSpecification>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v30;
  v15 = v29;
  if ( v29 != v30 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v29;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::addEnumValues<Difficulty>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Difficulty>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Difficulty>(void)::id) )
    type_id<CommandRegistry,Difficulty>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Difficulty>(void)::id);
  v25 = type_id<CommandRegistry,Difficulty>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<Difficulty>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


char *__fastcall CommandRegistry::pushState(CommandRegistry *this)
{
  CommandRegistry *v1; // r4@1
  signed int v2; // r10@1
  signed int v3; // r5@1
  int v4; // r11@1
  int v5; // r3@1
  int v6; // r7@1
  signed int v7; // r2@1
  signed int v8; // r9@1
  __int64 v9; // r0@1
  signed int v10; // r8@1
  char *result; // r0@2
  bool v12; // zf@3
  signed int v13; // r0@3
  signed int v14; // r0@3
  unsigned int v15; // r1@3
  unsigned int v16; // r2@5
  unsigned int v17; // r0@5
  bool v18; // cf@7
  char *v19; // r5@10
  __int64 v20; // kr00_8@10
  char *v21; // r0@10
  int v22; // r3@10
  int v23; // [sp+0h] [bp-30h]@10
  int v24; // [sp+4h] [bp-2Ch]@3
  signed int v25; // [sp+8h] [bp-28h]@3

  v1 = this;
  v2 = (signed int)((*((_QWORD *)this + 15) >> 32) - *((_QWORD *)this + 15)) >> 2;
  v3 = (signed int)((*(_QWORD *)((char *)this + 132) >> 32) - *(_QWORD *)((char *)this + 132)) >> 2;
  v4 = (*((_DWORD *)this + 25) - *((_DWORD *)this + 24)) >> 2;
  v5 = -1431655765 * ((signed int)((*(_QWORD *)((char *)v1 + 84) >> 32) - *(_QWORD *)((char *)v1 + 84)) >> 2);
  v6 = -1227133513 * ((*((_DWORD *)v1 + 28) - *((_DWORD *)v1 + 27)) >> 2);
  v7 = (*(_QWORD *)this >> 32) - *(_QWORD *)this;
  v8 = (signed int)((*((_QWORD *)v1 + 24) >> 32) - *((_QWORD *)v1 + 24)) >> 2;
  v9 = *((_QWORD *)this + 35);
  v10 = v7 >> 5;
  if ( (_DWORD)v9 == HIDWORD(v9) )
  {
    v24 = -1431655765 * ((signed int)((*(_QWORD *)((char *)v1 + 84) >> 32) - *(_QWORD *)((char *)v1 + 84)) >> 2);
    v25 = v3;
    v13 = v9 - *((_DWORD *)v1 + 69);
    v12 = v13 == 0;
    v14 = v13 >> 2;
    v15 = -1227133513 * v14;
    if ( v12 )
      v15 = 1;
    v17 = v15 + -1227133513 * v14;
    v16 = v17;
    if ( v17 > 0x9249249 )
      v17 = 153391689;
    v18 = v16 >= v15;
    LOWORD(v15) = -28086;
    if ( !v18 )
    HIWORD(v15) = 2340;
    if ( v17 >= v15 )
      sub_21E57F4();
    v23 = 7 * v17;
    v19 = (char *)operator new(28 * v17);
    v20 = *(_QWORD *)((char *)v1 + 276);
    v21 = &v19[HIDWORD(v20) - v20];
    *(_DWORD *)&v19[HIDWORD(v20) - v20] = v8;
    v22 = (int)(v21 + 8);
    *((_DWORD *)v21 + 1) = v4;
    *(_DWORD *)v22 = v25;
    *(_DWORD *)(v22 + 4) = v6;
    *(_DWORD *)(v22 + 8) = v2;
    *((_DWORD *)v21 + 5) = v24;
    *((_DWORD *)v21 + 6) = v10;
    if ( HIDWORD(v20) != (_DWORD)v20 )
      _aeabi_memmove4(v19, v20);
    if ( (_DWORD)v20 )
      operator delete((void *)v20);
    *((_DWORD *)v1 + 69) = v19;
    *((_DWORD *)v1 + 70) = &v19[4 * ((HIDWORD(v20) - (signed int)v20) >> 2) + 28];
    result = &v19[4 * v23];
    *((_DWORD *)v1 + 71) = result;
  }
  else
    HIDWORD(v9) = v9 + 8;
    *(_DWORD *)v9 = v8;
    *(_DWORD *)(v9 + 4) = v4;
    *(_DWORD *)HIDWORD(v9) = v3;
    *(_DWORD *)(HIDWORD(v9) + 4) = v6;
    *(_DWORD *)(HIDWORD(v9) + 8) = v2;
    *(_DWORD *)(v9 + 20) = v5;
    *(_DWORD *)(v9 + 24) = v10;
    result = (char *)(*((_DWORD *)v1 + 70) + 28);
    *((_DWORD *)v1 + 70) = result;
  return result;
}


int __fastcall CommandRegistry::forEachTerminal(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int v4; // r7@1
  void (__fastcall *v5)(int, int *); // r2@3
  int v6; // r7@5
  void (__fastcall *v7)(int, int *); // r2@7
  __int64 v8; // r0@8
  unsigned int v9; // r7@9
  void (__fastcall *v10)(int, unsigned int *); // r2@11
  unsigned int v12; // [sp+0h] [bp-20h]@11
  int v13; // [sp+4h] [bp-1Ch]@3
  int v14; // [sp+8h] [bp-18h]@7

  v2 = a2;
  v3 = a1;
  v4 = 1;
  do
  {
    if ( !*(_DWORD *)(v2 + 8) )
      goto LABEL_13;
    v5 = *(void (__fastcall **)(int, int *))(v2 + 12);
    v13 = v4;
    v5(v2, &v13);
    ++v4;
  }
  while ( v4 < 20 );
  if ( *(_QWORD *)(v3 + 96) >> 32 != (unsigned int)*(_QWORD *)(v3 + 96) )
    v6 = 0;
    while ( *(_DWORD *)(v2 + 8) )
    {
      v7 = *(void (__fastcall **)(int, int *))(v2 + 12);
      v14 = v6 | 0x2000000;
      v7(v2, &v14);
      if ( ++v6 >= (unsigned int)((signed int)((*(_QWORD *)(v3 + 96) >> 32) - *(_QWORD *)(v3 + 96)) >> 2) )
        goto LABEL_8;
    }
LABEL_13:
    sub_21E5F48();
LABEL_8:
  v8 = *(_QWORD *)(v3 + 132);
  if ( HIDWORD(v8) != (_DWORD)v8 )
    v9 = 0;
      v10 = *(void (__fastcall **)(int, unsigned int *))(v2 + 12);
      v12 = v9 | 0x1000000;
      v10(v2, &v12);
      ++v9;
      LODWORD(v8) = (*(_QWORD *)(v3 + 132) >> 32) - *(_QWORD *)(v3 + 132);
      if ( v9 >= (signed int)v8 >> 2 )
        return v8;
    goto LABEL_13;
  return v8;
}


int __fastcall CommandRegistry::addEnumValues<TickingAreaCommand::AddAreaType>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id) )
    type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id);
  v25 = type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TickingAreaCommand::AddAreaType>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


void **__fastcall CommandRegistry::allocateCommand<GetLocalPlayerNameCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  void **result; // r0@1

  v1 = a1;
  v2 = (Command *)operator new(0x14u);
  Command::Command(v2);
  *v1 = v2;
  result = &off_26DFA74;
  *(_DWORD *)v2 = &off_26DFA74;
  return result;
}


int __fastcall CommandRegistry::findCommand(int a1, const void **a2)
{
  int v2; // r11@1
  int v3; // r9@1
  const void **v4; // r10@1
  int v5; // r7@1
  const void *v6; // r6@2
  int v7; // r5@2
  int v8; // r0@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r8@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  int v19; // r0@20
  int v20; // r11@20
  int v21; // r6@20
  const void *v22; // r5@21
  int v23; // r8@21
  size_t v24; // r4@21
  _DWORD *v25; // r0@23
  size_t v26; // r7@23
  size_t v27; // r2@23
  int v28; // r0@25
  _DWORD *v29; // r1@32
  unsigned int v30; // r4@32
  unsigned int v31; // r5@32
  size_t v32; // r2@32
  int v33; // r0@34
  int v34; // r0@39
  int v35; // r5@39
  _DWORD *v36; // r8@40
  int v37; // r10@40
  size_t v38; // r7@40
  _DWORD *v39; // r0@42
  size_t v40; // r4@42
  size_t v41; // r2@42
  int v42; // r0@44
  _DWORD *v43; // r0@54
  _DWORD *v44; // r1@54
  unsigned int v45; // r4@54
  unsigned int v46; // r6@54
  size_t v47; // r2@54
  int v48; // r0@56
  int result; // r0@61
  int v50; // [sp+0h] [bp-28h]@1

  v2 = a1;
  v3 = a1 + 208;
  v4 = a2;
  v5 = a1 + 208;
  v50 = *(_DWORD *)(a1 + 212);
  if ( v50 )
  {
    v6 = *a2;
    v7 = a1 + 208;
    v8 = *(_DWORD *)(a1 + 212);
    v9 = *((_DWORD *)*a2 - 3);
    do
    {
      v5 = v8;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v5 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v6, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v7;
          goto LABEL_12;
        }
      }
      v8 = *(_DWORD *)(v5 + 8);
      v7 = v5;
    }
    while ( v8 );
  }
LABEL_12:
  if ( v5 == v3 )
    goto LABEL_65;
  v14 = *(_DWORD **)(v5 + 16);
  v15 = *((_DWORD *)*v4 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v4 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = memcmp(*v4, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v5 = v3;
LABEL_65:
    v19 = *(_DWORD *)(v2 + 260);
    v20 = v2 + 256;
    v21 = v20;
    if ( v19 )
      v22 = *v4;
      v23 = v20;
      v24 = *((_DWORD *)*v4 - 3);
      do
        v21 = v19;
        while ( 1 )
          v25 = *(_DWORD **)(v21 + 16);
          v26 = *(v25 - 3);
          v27 = *(v25 - 3);
          if ( v26 > v24 )
            v27 = v24;
          v28 = memcmp(v25, v22, v27);
          if ( !v28 )
            v28 = v26 - v24;
          if ( v28 >= 0 )
            break;
          v21 = *(_DWORD *)(v21 + 12);
          if ( !v21 )
          {
            v21 = v23;
            goto LABEL_31;
          }
        v19 = *(_DWORD *)(v21 + 8);
        v23 = v21;
      while ( v19 );
LABEL_31:
    if ( v21 == v20 )
      v5 = v3;
    else
      v29 = *(_DWORD **)(v21 + 16);
      v30 = *((_DWORD *)*v4 - 3);
      v31 = *(v29 - 3);
      v32 = *((_DWORD *)*v4 - 3);
      if ( v30 > v31 )
        v32 = *(v29 - 3);
      v33 = memcmp(*v4, v29, v32);
      if ( !v33 )
        v33 = v30 - v31;
      if ( v33 < 0 )
        v21 = v20;
      if ( v21 == v20 )
        v5 = v3;
      else
        v34 = v50;
        v35 = v3;
        if ( v50 )
          v36 = *(_DWORD **)(v21 + 20);
          v37 = v3;
          v38 = *(v36 - 3);
          do
            v35 = v34;
            while ( 1 )
            {
              v39 = *(_DWORD **)(v35 + 16);
              v40 = *(v39 - 3);
              v41 = *(v39 - 3);
              if ( v40 > v38 )
                v41 = v38;
              v42 = memcmp(v39, v36, v41);
              if ( !v42 )
                v42 = v40 - v38;
              if ( v42 >= 0 )
                break;
              v35 = *(_DWORD *)(v35 + 12);
              if ( !v35 )
              {
                v35 = v37;
                goto LABEL_53;
              }
            }
            v34 = *(_DWORD *)(v35 + 8);
            v37 = v35;
          while ( v34 );
LABEL_53:
        if ( v35 != v3 )
          v43 = *(_DWORD **)(v21 + 20);
          v44 = *(_DWORD **)(v35 + 16);
          v45 = *(v43 - 3);
          v46 = *(v44 - 3);
          v47 = *(v43 - 3);
          if ( v45 > v46 )
            v47 = *(v44 - 3);
          v48 = memcmp(v43, v44, v47);
          if ( !v48 )
            v48 = v45 - v46;
          if ( v48 < 0 )
            v35 = v3;
          v5 = v35;
  result = 0;
  if ( v5 != v3 )
    result = v5 + 20;
  return result;
}


int __fastcall CommandRegistry::kill(int a1)
{
  _DWORD *v1; // r1@1
  _DWORD *v2; // r2@2
  _DWORD *v3; // r1@3
  int v4; // r2@4
  _DWORD *v5; // r4@4
  int v6; // r2@5

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = (_DWORD *)*v1;
    if ( *v1 == a1 )
    {
      v6 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 4) = 0;
      v5 = (_DWORD *)*v1;
      *v1 = v6;
    }
    else
      do
      {
        v3 = v2;
        v2 = (_DWORD *)v2[1];
      }
      while ( v2 != (_DWORD *)a1 );
      v4 = *(_DWORD *)(a1 + 4);
      v5 = (_DWORD *)v3[1];
      v3[1] = v4;
    if ( v5 )
      std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)(v5 + 1));
      std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr((int)v5);
      operator delete(v5);
  }
  return 0;
}


int __fastcall CommandRegistry::Parser::~Parser(int a1)
{
  int v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  int v9; // r1@17
  void *v10; // r0@17
  void *v11; // r0@18
  unsigned int v12; // r5@19
  unsigned int v13; // r1@19
  unsigned int v14; // r6@20
  void *v15; // t1@21
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31

  v1 = a1;
  v3 = (void *)(*(_QWORD *)(a1 + 72) >> 32);
  v2 = (void *)*(_QWORD *)(a1 + 72);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = *(void **)(v1 + 72);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *(_DWORD *)(v1 + 68);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  std::unique_ptr<CommandRegistry::ParseToken,std::default_delete<CommandRegistry::ParseToken>>::~unique_ptr(v1 + 64);
  v9 = *(_DWORD *)(v1 + 60);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v9 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *(void **)(v1 + 4);
  if ( v11 )
    v12 = *(_DWORD *)(v1 + 40);
    v13 = *(_DWORD *)(v1 + 24);
    if ( v13 < v12 + 4 )
      v14 = v13 - 4;
        v15 = *(void **)(v14 + 4);
        v14 += 4;
        operator delete(v15);
      while ( v14 < v12 );
      v11 = *(void **)(v1 + 4);
    operator delete(v11);
  return v1;
}


void __fastcall CommandRegistry::addPostfix(int *a1, int a2, unsigned int *a3)
{
  CommandRegistry::addPostfix(a1, a2, a3);
}


int __fastcall CommandRegistry::addEnumValues<EntityType>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EntityType>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EntityType>(void)::id) )
    type_id<CommandRegistry,EntityType>(void)::id = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EntityType>(void)::id);
  v25 = type_id<CommandRegistry,EntityType>(void)::id;
  CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<EntityType>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::addEnumValues<EffectCommand::Mode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EffectCommand::Mode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EffectCommand::Mode>(void)::id) )
    type_id<CommandRegistry,EffectCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EffectCommand::Mode>(void)::id);
  v25 = type_id<CommandRegistry,EffectCommand::Mode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<EffectCommand::Mode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


signed int __fastcall CommandRegistry::allocateCommand<DayLockCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  signed int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x14u);
  j_Command::Command(v2);
  *v1 = v2;
  *(_DWORD *)v2 = &off_2719FE8;
  result = 1;
  *((_BYTE *)v2 + 18) = 1;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<FillCommand::FillMode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::buildFollowSet(_QWORD *a1, int *a2, int a3)
{
  unsigned __int64 *v3; // r4@1
  int *v4; // r10@1
  int v5; // r9@1
  unsigned __int64 *v6; // r0@1
  unsigned __int64 *v7; // r5@1
  unsigned __int64 v8; // r0@1
  int v9; // r6@2
  int v10; // r7@3
  int v11; // r3@3
  int v12; // r7@13
  int v13; // r0@15
  int v14; // r2@15
  int v15; // r8@24
  _DWORD *v16; // r0@28
  int *v17; // r8@29
  int v18; // r1@31
  int *v19; // r4@32
  signed int v20; // r6@32
  int *v21; // r0@32
  int *v22; // r11@32
  int *v23; // r11@37
  int v24; // t1@37
  unsigned __int64 *v25; // r9@39
  int *v26; // r8@39
  int *v27; // r10@39
  int v28; // r0@41
  _DWORD *v29; // r1@42
  _DWORD *v30; // r6@42
  char v31; // r3@43
  char v32; // r4@44
  int v33; // r0@54
  int v34; // r1@56
  int v35; // r2@57
  bool v36; // zf@58
  int *v37; // r1@58
  int v38; // r3@61
  bool v39; // zf@61
  int v40; // r1@66
  signed int v41; // r0@79
  int *v42; // r6@88
  unsigned __int64 *v43; // r8@88
  int *v44; // r4@88
  int *v45; // r9@88
  int v46; // r0@93
  _DWORD *v47; // r6@94
  _DWORD *v48; // r12@94
  char v49; // r3@95
  char v50; // r1@96
  int v52; // [sp+0h] [bp-50h]@29
  int v53; // [sp+4h] [bp-4Ch]@29
  char *v54; // [sp+8h] [bp-48h]@1
  int *v55; // [sp+Ch] [bp-44h]@29
  int *v56; // [sp+10h] [bp-40h]@1
  int *v57; // [sp+14h] [bp-3Ch]@38
  int *v58; // [sp+18h] [bp-38h]@32
  int v59; // [sp+1Ch] [bp-34h]@30
  signed int v60; // [sp+20h] [bp-30h]@40
  int v61; // [sp+24h] [bp-2Ch]@89
  int v62; // [sp+28h] [bp-28h]@39

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v56 = a2;
  v54 = (char *)a1 + 36;
  v6 = (unsigned __int64 *)std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
                             (int)a1 + 36,
                             a2);
  v7 = v6;
  v8 = *v6;
  if ( (_DWORD)v8 != HIDWORD(v8) )
    return v8;
  LODWORD(v8) = *(_DWORD *)(v5 + 8);
  v9 = v5 + 4;
  HIDWORD(v8) = v5 + 4;
  if ( (_DWORD)v8 )
  {
    v10 = *(_DWORD *)(v5 + 8);
    v11 = v5 + 4;
    do
    {
      HIDWORD(v8) = v10;
      while ( *(_DWORD *)(HIDWORD(v8) + 16) < *v4 )
      {
        HIDWORD(v8) = *(_DWORD *)(HIDWORD(v8) + 12);
        if ( !HIDWORD(v8) )
        {
          HIDWORD(v8) = v11;
          goto LABEL_9;
        }
      }
      v10 = *(_DWORD *)(HIDWORD(v8) + 8);
      v11 = HIDWORD(v8);
    }
    while ( v10 );
  }
LABEL_9:
  if ( HIDWORD(v8) != v9 )
    if ( *v4 < *(_DWORD *)(HIDWORD(v8) + 16) )
      HIDWORD(v8) = v5 + 4;
    if ( HIDWORD(v8) != v9 )
      return v8;
  v12 = v5 + 4;
  if ( !(_DWORD)v8 )
    goto LABEL_110;
  HIDWORD(v8) = *v4;
  do
    v12 = v8;
    LODWORD(v8) = v8 + 12;
    v14 = *(_DWORD *)(v12 + 16);
    if ( SHIDWORD(v8) < v14 )
      v13 = v12 + 8;
    LODWORD(v8) = *(_DWORD *)v8;
  while ( (_DWORD)v8 );
  LODWORD(v8) = v12;
  if ( SHIDWORD(v8) < v14 )
LABEL_110:
    if ( v12 == *(_DWORD *)(v5 + 12) )
      goto LABEL_22;
    LODWORD(v8) = sub_21D4858(v12);
    HIDWORD(v8) = *v4;
  if ( *(_DWORD *)(v8 + 16) < SHIDWORD(v8) )
LABEL_22:
    if ( v12 )
      if ( v9 == v12 )
        v15 = 1;
      else
        v15 = 0;
        if ( *v4 < *(_DWORD *)(v12 + 16) )
          v15 = 1;
      v16 = operator new(0x14u);
      v16[4] = *v4;
      sub_21D4928(v15, (int)v16, v12, v5 + 4);
      ++*(_DWORD *)(v5 + 20);
  v53 = v5;
  v17 = (int *)*v3;
  v52 = (int)v3;
  v55 = (int *)(*v3 >> 32);
  if ( v17 != v55 )
    v59 = (int)v3 + 12;
    while ( 1 )
      v18 = *v4;
      if ( *v17 != *v4 )
        v19 = v17;
        v20 = 0;
        v58 = v17;
        v21 = (int *)(*(_QWORD *)(v17 + 5) >> 32);
        v22 = (int *)*(_QWORD *)(v17 + 5);
        if ( *(v21 - 1) == v18 )
          v20 = 1;
        if ( v22 != v21 )
          while ( 1 )
          {
            v24 = *v22;
            v23 = v22 + 1;
            if ( v24 == v18 )
              break;
            v57 = v23;
LABEL_85:
            v22 = v57;
            if ( v57 == v21 )
            {
              v4 = v56;
              goto LABEL_87;
            }
            v18 = *v56;
          }
          v57 = v23;
          if ( v23 == v21 )
            goto LABEL_85;
          while ( 2 )
            v62 = *v23;
            v25 = (unsigned __int64 *)std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
                                        v59,
                                        &v62);
            v27 = (int *)(*v25 >> 32);
            v26 = (int *)*v25;
            if ( v26 == v27 )
              v33 = *v25;
            else
              v60 = v20;
              do
              {
                v28 = *v26;
                if ( *v26 != 0x100000 )
                {
                  v29 = (_DWORD *)(*v7 >> 32);
                  v30 = (_DWORD *)*v7;
                  if ( v30 == v29 )
                    goto LABEL_111;
                  v31 = 0;
                  do
                  {
                    v32 = 0;
                    if ( *v30 == v28 )
                      v32 = 1;
                    v31 |= v32;
                      break;
                    v36 = v29 - 1 == v30;
                    ++v30;
                  }
                  while ( !v36 );
                  if ( !(v31 & 1) )
LABEL_111:
                    if ( v29 == *((_DWORD **)v7 + 2) )
                    {
                      std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
                        v7,
                        v26);
                    }
                    else
                      *v29 = v28;
                      *((_DWORD *)v7 + 1) = v29 + 1;
                }
                ++v26;
              }
              while ( v26 != v27 );
              v26 = (int *)(*v25 >> 32);
              v19 = v58;
              v27 = (int *)(*v25 >> 32);
              v20 = v60;
            v34 = ((signed int)v27 - v33) >> 4;
            if ( v34 >= 1 )
              v35 = v34 + 1;
                v36 = *(_DWORD *)v33 == 0x100000;
                v37 = (int *)v33;
                if ( *(_DWORD *)v33 != 0x100000 )
                  v37 = (int *)(v33 + 4);
                  v36 = *(_DWORD *)(v33 + 4) == 0x100000;
                if ( v36 )
                  goto LABEL_78;
                v37 = (int *)(v33 + 8);
                v38 = *(_DWORD *)(v33 + 8);
                v39 = v38 == 0x100000;
                if ( v38 != 0x100000 )
                  v37 = (int *)(v33 + 12);
                  v39 = *(_DWORD *)(v33 + 12) == 0x100000;
                if ( v39 )
                --v35;
                v33 += 16;
              while ( v35 > 1 );
            if ( 1 == ((signed int)v27 - v33) >> 2 )
              v37 = (int *)v33;
              v40 = ((signed int)v27 - v33) >> 2;
              if ( v40 != 2 )
                if ( v40 == 3 )
                  v37 = (int *)v33;
                  if ( *(_DWORD *)v33 != 0x100000 )
                    v37 = (int *)(v33 + 4);
                    goto LABEL_72;
                else
                  v37 = v27;
                goto LABEL_78;
LABEL_72:
              if ( *v37 == 0x100000 )
LABEL_78:
                if ( v37 == v26 )
                  v21 = (int *)v19[6];
                  goto LABEL_85;
                ++v23;
                v41 = 0;
                if ( v23 == (int *)v19[6] )
                  v41 = 1;
                v20 |= v41;
                v21 = v23;
                continue;
              ++v37;
            break;
          if ( *v37 != 0x100000 )
            v37 = v27;
          goto LABEL_78;
LABEL_87:
        v17 = v19;
        if ( v20 & 1 )
          break;
LABEL_105:
      v17 += 8;
      if ( v17 == v55 )
        goto LABEL_106;
    v42 = v19;
    v43 = (unsigned __int64 *)std::map<CommandRegistry::Symbol,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::less<CommandRegistry::Symbol>,std::allocator<std::pair<CommandRegistry::Symbol const,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>>>>::operator[](
                                (int)v54,
                                v19);
    v45 = (int *)(*v43 >> 32);
    v44 = (int *)*v43;
    if ( v44 == v45 )
      v61 = *v42;
      CommandRegistry::buildFollowSet(v52, (int)&v61, v53);
      v45 = (int *)(*v43 >> 32);
      v44 = (int *)*v43;
    v17 = v42;
      while ( 1 )
        if ( v44 == v45 )
          goto LABEL_105;
        v46 = *v44;
        if ( *v44 != 0x100000 )
          v48 = (_DWORD *)(*v7 >> 32);
          v47 = (_DWORD *)*v7;
          if ( v47 == v48 )
          v49 = 0;
          do
            v50 = 0;
            if ( *v47 == v46 )
              v50 = 1;
            v49 |= v50;
            v36 = v48 - 1 == v47;
            ++v47;
          while ( !v36 );
          if ( !(v49 & 1) )
LABEL_91:
        ++v44;
      if ( v48 == *((_DWORD **)v7 + 2) )
        std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
          v7,
          v44);
        goto LABEL_91;
      *v48 = v46;
      ++v44;
      *((_DWORD *)v7 + 1) = v48 + 1;
LABEL_106:
  LODWORD(v8) = std::_Rb_tree<CommandRegistry::Symbol,CommandRegistry::Symbol,std::_Identity<CommandRegistry::Symbol>,std::less<CommandRegistry::Symbol>,std::allocator<CommandRegistry::Symbol>>::erase(
                  v53,
                  v4);
  return v8;
}


int __fastcall CommandRegistry::allocateCommand<SummonCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x28u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A200;
  *((_DWORD *)v2 + 5) = 1;
  result = j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 24));
  *v1 = v2;
  return result;
}


signed int __fastcall CommandRegistry::readRelativeCoordinate(_BYTE *a1, _DWORD *a2, int a3, int a4, void **a5, int a6)
{
  int v6; // r5@1
  int v8; // r10@1
  int v9; // r3@1
  signed int v10; // r7@1
  int v11; // r0@6
  signed int v12; // r4@7
  __int64 v13; // kr00_8@8
  _DWORD *v14; // r0@10
  int *v15; // r6@10
  _BYTE *v16; // r7@10
  int v17; // r6@12
  int v18; // r4@12
  _DWORD *v19; // r0@12
  int *v20; // r5@12
  const char *v21; // r1@12
  char *v22; // r6@12
  char *v23; // r0@17
  signed int v24; // r0@18
  _BYTE *v25; // r0@23
  int v26; // r7@25
  _BYTE *v27; // r1@25
  int v28; // r2@25
  int v29; // r3@26
  _BYTE *v30; // r2@28
  int v31; // r6@29
  int v33; // r2@33
  unsigned int *v34; // r2@40
  signed int v35; // r1@42
  unsigned int *v36; // r2@44
  signed int v37; // r1@46
  char **v41; // r1@56 OVERLAPPED
  char **v42; // r2@56
  char *v43; // r0@61
  unsigned int *v45; // r2@63
  signed int v46; // r1@65
  _BYTE *v47; // [sp+4h] [bp-34h]@23
  char *v48; // [sp+Ch] [bp-2Ch]@17
  char *v49; // [sp+10h] [bp-28h]@5

  v6 = a3;
  _R8 = a2;
  v8 = a4;
  v9 = *(_DWORD *)(a3 + 20);
  v10 = 0;
  if ( v9 == 8 )
    v10 = 1;
  if ( v9 == 1048579 )
  *a1 = v10;
  v49 = (char *)&unk_28898CC;
  if ( !v10 )
  {
    v13 = *(_QWORD *)(a3 + 12);
    if ( HIDWORD(v13) )
    {
      if ( !(_DWORD)v13 )
        sub_21E5884((int)"basic_string::_S_construct null not valid");
      v14 = sub_21E7E80(HIDWORD(v13), 0);
      v15 = v14;
      v16 = v14 + 3;
      if ( HIDWORD(v13) == 1 )
        *v16 = *(_BYTE *)v13;
      else
        _aeabi_memcpy(v14 + 3, (const char *)v13, HIDWORD(v13));
      if ( v15 != &dword_28898C0 )
      {
        v15[2] = 0;
        *v15 = HIDWORD(v13);
        v16[HIDWORD(v13)] = byte_26C67B8[0];
      }
    }
    else
      v16 = &unk_28898CC;
    v47 = v16;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v49,
      (int *)&v47);
    v25 = v47 - 12;
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v47 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v24 = Util::toFloat<float,(void *)0>((unsigned int *)&v49, _R8);
    if ( v8 != 1 )
      goto LABEL_55;
    v26 = *(_DWORD *)(v6 + 12);
    v27 = (_BYTE *)(v13 + HIDWORD(v13));
    v28 = ((signed int)v13 + HIDWORD(v13) - v26) >> 2;
    if ( v28 >= 1 )
      v29 = v28 + 1;
      while ( *(_BYTE *)v26 != 46 )
        v30 = (_BYTE *)(v26 + 1);
        if ( *(_BYTE *)(v26 + 1) == 46 )
          goto LABEL_53;
        v30 = (_BYTE *)(v26 + 2);
        v31 = *(_BYTE *)(v26 + 2);
        _ZF = v31 == 46;
        if ( v31 != 46 )
        {
          v30 = (_BYTE *)(v26 + 3);
          _ZF = *(_BYTE *)(v26 + 3) == 46;
        }
        if ( _ZF )
        --v29;
        v26 += 4;
        if ( v29 <= 1 )
          goto LABEL_33;
      v30 = (_BYTE *)v26;
LABEL_53:
      if ( v30 != v27 )
        goto LABEL_55;
      goto LABEL_54;
LABEL_33:
    v33 = (int)&v27[-v26];
    if ( &v27[-v26] == (_BYTE *)1 )
      if ( v33 != 2 )
        if ( v33 != 3 )
          goto LABEL_54;
        if ( *(_BYTE *)v26 == 46 )
          v30 = (_BYTE *)v26;
        ++v26;
      if ( *(_BYTE *)v26 == 46 )
        v30 = (_BYTE *)v26;
        goto LABEL_53;
      v30 = (_BYTE *)(v26 + 1);
    if ( *v30 == 46 )
      goto LABEL_53;
LABEL_54:
    __asm
      VMOV.F32        S0, #0.5
      VLDR            S2, [R8]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R8]
    goto LABEL_55;
  }
  v11 = *(_DWORD *)(a3 + 16);
  if ( v11 == 1 )
    v12 = 1;
    *a2 = 0;
    goto LABEL_61;
  v17 = *(_DWORD *)(a3 + 12);
  v18 = v11 - 1;
  v19 = sub_21E7E80(v11 - 1, 0);
  v20 = v19;
  v21 = (const char *)(v17 + 1);
  v22 = (char *)(v19 + 3);
  if ( v18 == 1 )
    *v22 = *v21;
  else
    _aeabi_memcpy(v19 + 3, v21, v18);
  if ( v20 != &dword_28898C0 )
    v20[2] = 0;
    *v20 = v18;
    v22[v18] = byte_26C67B8[0];
  v48 = v22;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v49,
    (int *)&v48);
  v23 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = Util::toFloat<float,(void *)0>((unsigned int *)&v49, _R8);
LABEL_55:
  if ( v24 )
    sub_21E8190(a5, "commands.generic.num.invalid", (_BYTE *)0x1C);
    *(_QWORD *)&v41 = *(_QWORD *)(a6 + 4);
    if ( v41 == v42 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)a6,
        &v49);
      *v41 = v49;
      v49 = (char *)&unk_28898CC;
      *(_DWORD *)(a6 + 4) = v41 + 1;
    v12 = 0;
LABEL_61:
  v43 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v49 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  return v12;
}


void *__fastcall CommandRegistry::allocateCommand<StopSoundCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x78u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A1EC;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  *v1 = v2;
  result = &unk_28898CC;
  *((_DWORD *)v2 + 29) = &unk_28898CC;
  return result;
}


int __fastcall CommandRegistry::allocateCommand<TellCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x80u);
  j_MessagingCommand::MessagingCommand((MessagingCommand *)v2, 0, 1);
  *(_DWORD *)v2 = &off_271A228;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  result = j_CommandMessage::CommandMessage((CommandMessage *)((char *)v2 + 116));
  *v1 = v2;
  return result;
}


void **__fastcall CommandRegistry::allocateCommand<GetEduClientInfoCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  void **result; // r0@1

  v1 = a1;
  v2 = (Command *)operator new(0x14u);
  Command::Command(v2);
  *v1 = v2;
  result = &off_26DFA60;
  *(_DWORD *)v2 = &off_26DFA60;
  return result;
}


void __fastcall CommandRegistry::parsePartialCommand(void **a1, int a2, int a3, int *a4, unsigned int a5, int a6)
{
  int *v6; // r5@1
  void **v7; // r9@1
  signed int v8; // r4@1
  int v9; // r6@1
  int v10; // r11@1
  int v11; // r10@1
  int v12; // r1@1
  CommandLexer *v13; // r0@1
  char v14; // r1@3
  unsigned int v15; // r7@4
  char v16; // r9@5
  signed int v17; // r11@5
  int v18; // r4@6
  signed int v19; // r0@8
  char *v20; // r4@21
  _BYTE *v21; // r0@22
  unsigned int v22; // r3@23
  void *v23; // r0@24
  void *v24; // r0@25
  unsigned int *v25; // r2@27
  signed int v26; // r1@29
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  signed int v29; // [sp+4h] [bp-4Ch]@5
  void **v30; // [sp+8h] [bp-48h]@5
  signed int v31; // [sp+Ch] [bp-44h]@3
  int v32; // [sp+10h] [bp-40h]@24
  int v33; // [sp+14h] [bp-3Ch]@20

  v6 = a4;
  v7 = a1;
  v8 = 0;
  v9 = a3;
  v10 = a6;
  v11 = 0;
  v12 = *(_DWORD *)(*a4 - 12);
  v13 = (CommandLexer *)*(_BYTE *)(*a4 + v12 - 1);
  if ( v13 == (CommandLexer *)64 )
    v8 = 1;
  v31 = CommandLexer::isIdentifierCharacter(v13, v12);
  if ( a6 == 1 )
  {
    v11 = 0;
    v15 = 1;
    if ( a5 >= 2 )
    {
      v29 = v8;
      v30 = v7;
      v16 = 0;
      v17 = 1;
      do
      {
        v18 = *(_BYTE *)(*v6 + v17);
        if ( v18 == 34 )
        {
          v16 = v11 ^ 1;
        }
        else
          v19 = CommandLexer::isIdentifierCharacter((CommandLexer *)*(_BYTE *)(*v6 + v17), v14);
          if ( v18 != 64 && !v19 )
          {
            if ( (_BYTE)v11 )
            {
              if ( *(_BYTE *)(*v6 + v17) != 32 )
                v15 = v17 + 1;
            }
            else
              v15 = v17 + 1;
          }
        ++v17;
        v11 = v16 & 1;
        if ( v16 & 1 )
          v15 = v17;
      }
      while ( a5 != v17 );
      v11 = v11 != 0;
      v7 = v30;
      v10 = a6;
      v8 = v29;
    }
  }
  else
    v15 = a5;
  sub_21E9040((void **)&v33, v6, 0, v15);
  *(_BYTE *)(v9 + 89) = 1;
  CommandRegistry::Parser::parse(v9, &v33);
  *v7 = &unk_28898CC;
  if ( (v31 | v8) & v10 ^ 1 | v11 )
    v20 = *(char **)(v9 + 44);
    if ( v20 )
      v21 = (_BYTE *)strlen(*(const char **)(v9 + 44));
      sub_21E8190(v7, v20, v21);
    v22 = *(_DWORD *)(*v6 - 12);
    if ( v22 < v15 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v15, v22);
    sub_21E9040((void **)&v32, v6, v15, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v7,
      &v32);
    v23 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
}


void __fastcall CommandRegistry::parsePartialCommand(void **a1, int a2, int a3, int *a4, unsigned int a5, int a6)
{
  CommandRegistry::parsePartialCommand(a1, a2, a3, a4, a5, a6);
}


signed int __fastcall CommandRegistry::parseEnum<TimeCommand::Mode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


void *__fastcall CommandRegistry::allocateCommand<WSServerCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  void *result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x18u);
  j_Command::Command(v2);
  *v1 = v2;
  *(_DWORD *)v2 = &off_271A2E8;
  result = &unk_28898CC;
  *((_DWORD *)v2 + 5) = &unk_28898CC;
  return result;
}


signed __int64 __fastcall CommandRegistry::allocateCommand<TestForBlockCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  signed __int64 result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x2Cu);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A23C;
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 20));
  result = -4294967296LL;
  *(_QWORD *)((char *)v2 + 36) = -4294967296LL;
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<ReplaceItemCommand::TargetType>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id) )
    type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id);
  v25 = type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<ReplaceItemCommand::TargetType>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


char *__fastcall CommandRegistry::addSymbols(char *result, unsigned __int64 *a2, int a3)
{
  char **v3; // r5@1
  char **v4; // r8@1
  char *v5; // r9@1
  char *v6; // r7@3
  char *v7; // r6@4
  char v8; // r3@4
  char v9; // r4@5
  bool v10; // zf@8
  char **v11; // r1@17
  char **v12; // r7@17
  char v13; // r3@18
  char v14; // r4@19

  v4 = (char **)(*a2 >> 32);
  v3 = (char **)*a2;
  v5 = result;
  if ( v3 != v4 )
  {
    if ( a3 == 1 )
    {
      do
      {
        result = (char *)(*(_QWORD *)v5 >> 32);
        v6 = (char *)*(_QWORD *)v5;
        if ( v6 == result )
          goto LABEL_31;
        v7 = *v3;
        v8 = 0;
        do
        {
          v9 = 0;
          if ( *(char **)v6 == v7 )
            v9 = 1;
          v8 |= v9;
            break;
          v10 = result - 4 == v6;
          v6 += 4;
        }
        while ( !v10 );
        if ( !(v8 & 1) )
LABEL_31:
          if ( result == *((char **)v5 + 2) )
          {
            result = std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
                       (unsigned __int64 *)v5,
                       v3);
          }
          else
            *(_DWORD *)result = *v3;
            result += 4;
            *((_DWORD *)v5 + 1) = result;
        ++v3;
      }
      while ( v3 != v4 );
    }
    else
        result = *v3;
        if ( *v3 != (char *)0x100000 )
          v11 = (char **)(*(_QWORD *)v5 >> 32);
          v12 = (char **)*(_QWORD *)v5;
          if ( v12 == v11 )
            goto LABEL_32;
          v13 = 0;
          do
            v14 = 0;
            if ( *v12 == result )
              v14 = 1;
            v13 |= v14;
              break;
            v10 = v11 - 1 == v12;
            ++v12;
          while ( !v10 );
          if ( !(v13 & 1) )
LABEL_32:
            if ( v11 == *((char ***)v5 + 2) )
            {
              result = std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>::_M_emplace_back_aux<CommandRegistry::Symbol const&>(
                         (unsigned __int64 *)v5,
                         v3);
            }
            else
              *v11 = result;
              *((_DWORD *)v5 + 1) = v11 + 1;
  }
  return result;
}


unsigned int __fastcall CommandRegistry::Symbol::isEnum(CommandRegistry::Symbol *this)
{
  return (*((_BYTE *)this + 2) & 0x20u) >> 5;
}


signed int __fastcall CommandRegistry::parseEnum<TickingAreaCommand::TargetDimensions>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


_DWORD *__fastcall CommandRegistry::fold(_DWORD *result, int *a2, _DWORD *a3)
{
  int v3; // r1@1
  _DWORD *v4; // r0@3
  int v5; // [sp+4h] [bp-Ch]@3

  v3 = *a2;
  if ( result[5] == *a3 )
  {
    result[5] = v3;
  }
  else
    v4 = (_DWORD *)result[2];
    v5 = v3;
    result = CommandRegistry::expand(v4, &v5);
  return result;
}


int __fastcall CommandRegistry::addEnumValues<WeatherCommand::WeatherRequest>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id) )
    type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id);
  v25 = type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<WeatherCommand::WeatherRequest>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::addEnumValues<WeatherCommand::WeatherType>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id) )
    type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id);
  v25 = type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<WeatherCommand::WeatherType>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::allocateCommand<SpawnPointCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x88u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A1C4;
  j_CommandSelector<Player>::CommandSelector((int)v2 + 20);
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 116));
  result = 0;
  *v1 = v2;
  *((_BYTE *)v2 + 132) = 0;
  return result;
}


void __fastcall CommandRegistry::getAlphabeticalLookup(CommandRegistry *this, const CommandOrigin *a2, int a3)
{
  CommandRegistry::getAlphabeticalLookup(this, a2, a3);
}


int __fastcall CommandRegistry::addEnumValues<SetBlockCommand::SetBlockMode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id) )
    type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id);
  v25 = type_id<CommandRegistry,SetBlockCommand::SetBlockMode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<SetBlockCommand::SetBlockMode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


signed int __fastcall CommandRegistry::parse<float>(int a1, _DWORD *a2, int a3, int a4, int a5, void **a6, int a7)
{
  int v7; // r4@1
  _DWORD *v8; // r5@1
  signed int v9; // r5@1
  void *v10; // r0@1
  __int64 v11; // r0@3
  int v12; // r1@4
  signed int result; // r0@5
  void *v14; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  void *v19; // [sp+0h] [bp-28h]@3
  int v20; // [sp+4h] [bp-24h]@1

  v7 = a3;
  v8 = a2;
  CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v20, a3);
  v9 = Util::toFloat<float,(void *)0>((unsigned int *)&v20, v8);
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  if ( v9 )
    sub_21E8190(a6, "commands.generic.num.invalid", (_BYTE *)0x1C);
    CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v19, v7);
    v11 = *(_QWORD *)(a7 + 4);
    if ( (_DWORD)v11 == HIDWORD(v11) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)a7,
        &v19);
      v12 = (int)v19;
      *(_DWORD *)v11 = v19;
      HIDWORD(v11) = &unk_28898CC;
      v19 = &unk_28898CC;
      *(_DWORD *)(a7 + 4) = v11 + 4;
    v14 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall CommandRegistry::allocateCommand<LocateCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x14u);
  j_Command::Command(v2);
  *v1 = v2;
  *(_DWORD *)v2 = &off_271A0FC;
  result = 0;
  *((_BYTE *)v2 + 18) = 0;
  return result;
}


Command *__fastcall CommandRegistry::allocateCommand<TeleportCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  Command *result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x16Cu);
  result = j_TeleportCommand::TeleportCommand(v2);
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::addEnumValues<StructureFeatureType>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r3@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_BYTE *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,StructureFeatureType>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,StructureFeatureType>(void)::id) )
    type_id<CommandRegistry,StructureFeatureType>(void)::id = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,StructureFeatureType>(void)::id);
  v25 = type_id<CommandRegistry,StructureFeatureType>(void)::id;
  CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<StructureFeatureType>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::allocateCommand<AgentCommand>(Command **a1)
{
  Command **v1; // r5@1
  Command *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x34u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_2724F0C;
  *((_DWORD *)v2 + 5) = 2;
  *((_DWORD *)v2 + 6) = 0;
  result = j_CommandItem::CommandItem((int)v2 + 32);
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 0;
  *v1 = v2;
  return result;
}


int __fastcall CommandRegistry::OptionalParameterChain::OptionalParameterChain(int result, __int64 a2, _DWORD *a3)
{
  *(_QWORD *)result = a2;
  *(_DWORD *)(result + 8) = *a3;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<TickingAreaCommand::AddAreaType>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


signed int __fastcall CommandRegistry::parse<int>(int a1, _DWORD *a2, int a3, int a4, int a5, void **a6, int a7)
{
  int v7; // r5@1
  _DWORD *v8; // r8@1
  const char *v9; // r4@2
  const char *v10; // r6@5
  void **v11; // r0@7
  int v12; // r7@11
  _DWORD *v13; // r0@11
  int *v14; // r4@11
  char *v15; // r5@11
  char **v16; // r1@19 OVERLAPPED
  char **v17; // r2@19
  signed int v18; // r4@21
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  char *v22; // [sp+4h] [bp-24h]@18

  v7 = a3;
  v8 = a2;
  if ( !*(_DWORD *)(a3 + 16) )
  {
    v11 = &off_27775D4;
LABEL_14:
    v15 = (char *)*v11 + 12;
    goto LABEL_18;
  }
  v9 = *(const char **)(a3 + 12);
  while ( CommandLexer::isDigit((CommandLexer *)*v9, (char)a2) || *v9 == 45 )
    v10 = (const char *)*(_QWORD *)(v7 + 12);
    if ( ++v9 == &v10[*(_QWORD *)(v7 + 12) >> 32] )
      goto LABEL_9;
  v10 = *(const char **)(v7 + 12);
LABEL_9:
  if ( v10 == v9 )
    goto LABEL_14;
  if ( !v10 )
    sub_21E5884((int)"basic_string::_S_construct null not valid");
  v12 = v9 - v10;
  v13 = sub_21E7E80(v9 - v10, 0);
  v14 = v13;
  v15 = (char *)(v13 + 3);
  if ( v12 == 1 )
    *v15 = *v10;
  else
    _aeabi_memcpy(v13 + 3, v10, v12);
  if ( v14 != &dword_28898C0 )
    v14[2] = 0;
    *v14 = v12;
    v15[v12] = byte_26C67B8[0];
LABEL_18:
  v22 = v15;
  if ( Util::toInt<int,(void *)0>((unsigned int *)&v22, v8) )
    sub_21E8190(a6, "commands.generic.num.invalid", (_BYTE *)0x1C);
    *(_QWORD *)&v16 = *(_QWORD *)(a7 + 4);
    if ( v16 == v17 )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)a7,
        &v22);
      v15 = v22;
    }
    else
      *v16 = v15;
      v15 = (char *)&unk_28898CC;
      v22 = (char *)&unk_28898CC;
      *(_DWORD *)(a7 + 4) = v16 + 1;
    v18 = 0;
    v18 = 1;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v15 - 12);
  return v18;
}


void __fastcall CommandRegistry::addEnumValuesInternal(int a1, int a2, int a3, int a4, int a5, int a6, void *a7, int a8, int a9, char a10)
{
  int v10; // r1@1 OVERLAPPED
  unsigned __int64 *v11; // r4@1
  int v12; // r3@1
  int v13; // r8@1
  __int64 v14; // kr00_8@1
  unsigned int v15; // r5@1
  void *v16; // r0@3
  unsigned int *v17; // r5@5
  __int64 v18; // kr10_8@5
  unsigned int v19; // r6@5
  int v20; // r5@6
  int v21; // r4@7
  unsigned int v22; // r1@7
  unsigned int v23; // r0@9
  unsigned int v24; // r9@9
  unsigned int *v25; // r10@14
  unsigned int v26; // r2@14
  unsigned int *v27; // r1@14
  unsigned int *v28; // r6@14
  unsigned int v29; // r2@15
  unsigned int v30; // r3@15
  unsigned int v31; // r7@15
  unsigned int v32; // r4@15
  unsigned int *v33; // r7@17
  void *v34; // r0@20
  unsigned int *v35; // r2@23
  signed int v36; // r1@25
  __int64 v37; // [sp+10h] [bp-60h]@2
  unsigned int *ptr; // [sp+1Ch] [bp-54h]@7
  int v39; // [sp+24h] [bp-4Ch]@4
  int v40; // [sp+28h] [bp-48h]@1
  __int16 v41; // [sp+2Ch] [bp-44h]@32
  int v42; // [sp+30h] [bp-40h]@5
  int v43; // [sp+38h] [bp-38h]@5
  void *v44; // [sp+3Ch] [bp-34h]@1
  unsigned int *v45; // [sp+40h] [bp-30h]@1
  char *v46; // [sp+44h] [bp-2Ch]@1

  v40 = a2;
  v10 = a1;
  v11 = (unsigned __int64 *)a4;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v14 = *(_QWORD *)a4;
  v12 = *(_QWORD *)a4 >> 32;
  v13 = v14;
  v15 = (v12 - (signed int)v14) >> 4;
  if ( v15 >= 0x10000000 )
    sub_21E5A04("vector::reserve");
  v37 = *(_QWORD *)(&a3 - 1);
  if ( v15 )
  {
    v16 = operator new(v12 - v14);
    v12 = *v11 >> 32;
    v13 = *v11;
    v44 = v16;
    v45 = (unsigned int *)v16;
    v46 = (char *)v16 + 16 * v15;
  }
  v39 = v12;
  if ( v13 != v12 )
    do
    {
      sub_21E94B4((void **)&v43, *(const char **)v13);
      CommandRegistry::addSoftTerminal(&v42, v40, (const void **)&v43);
      v17 = v45;
      v18 = *(_QWORD *)(v13 + 8);
      v19 = v42 & 0xFC0FFFFF;
      if ( (char *)v45 == v46 )
      {
        ptr = (unsigned int *)v44;
        v21 = ((char *)v45 - (_BYTE *)v44) >> 4;
        v22 = ((char *)v45 - (_BYTE *)v44) >> 4;
        if ( !v21 )
          v22 = 1;
        v23 = v22 + (((char *)v45 - (_BYTE *)v44) >> 4);
        v24 = v22 + (((char *)v45 - (_BYTE *)v44) >> 4);
        if ( 0 != v23 >> 28 )
          v24 = 0xFFFFFFF;
        if ( v23 < v22 )
        if ( v24 >= 0x10000000 )
          sub_21E57F4();
        v25 = (unsigned int *)operator new(16 * v24);
        v25[4 * v21] = v19;
        v26 = (unsigned int)v25;
        *(_QWORD *)&v25[4 * v21 + 2] = v18;
        v27 = v25;
        v28 = ptr;
        if ( ptr != v17 )
        {
          do
          {
            v29 = *v28;
            v30 = v28[1];
            v31 = v28[2];
            v32 = v28[3];
            v28 += 4;
            *v27 = v29;
            v27[1] = v30;
            v27[2] = v31;
            v27[3] = v32;
            v27 += 4;
          }
          while ( v17 != v28 );
          v26 = (unsigned int)v25 + (((char *)(v17 - 4) - (char *)ptr) & 0xFFFFFFF0) + 16;
        }
        v33 = (unsigned int *)(v26 + 16);
        v20 = v39;
        if ( ptr )
          operator delete(ptr);
        v44 = v25;
        v45 = v33;
        v46 = (char *)&v25[4 * v24];
      }
      else
        *v45 = v19;
        *((_QWORD *)v17 + 1) = v18;
        v45 = v17 + 4;
      v34 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v43 - 4);
        if ( &pthread_create )
          __dmb();
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v13 += 16;
    }
    while ( v13 != v20 );
  v41 = *(_WORD *)a5;
  CommandRegistry::addEnumValuesInternal((void *)v37, v40, SHIDWORD(v37), (int)&v44, (int)&v41, a6, (int)a7);
  if ( v44 )
    operator delete(v44);
}


int __fastcall CommandRegistry::allocateCommand<SetWorldSpawnCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x28u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A1B0;
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 20));
  result = 0;
  *v1 = v2;
  *((_BYTE *)v2 + 36) = 0;
  return result;
}


void __fastcall CommandRegistry::addEnumValuesInternal(int a1, int a2, int a3, int a4, int a5, int a6, void *a7, int a8, int a9, char a10)
{
  CommandRegistry::addEnumValuesInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


void __fastcall CommandRegistry::symbolToString(int a1, int a2, int a3)
{
  CommandRegistry::symbolToString((void **)a1, a2, (int *)a3);
}


signed int __fastcall CommandRegistry::parseEnum<AgentCommands::Direction>(CommandRegistry *a1, _BYTE *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


void __fastcall CommandRegistry::registerOverloadInternal(int a1, int a2, int a3)
{
  CommandRegistry::registerOverloadInternal(a1, a2, a3);
}


signed int __fastcall CommandRegistry::readFloat(_DWORD *a1, int a2, void **a3, int a4)
{
  _DWORD *v4; // r7@1
  int v5; // r4@1
  void **v6; // r8@1
  int v7; // r5@1
  signed int v8; // r7@1
  void *v9; // r0@1
  __int64 v10; // r0@3
  int v11; // r1@4
  signed int result; // r0@5
  void *v13; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  void *v18; // [sp+0h] [bp-30h]@3
  int v19; // [sp+4h] [bp-2Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v19, a2);
  v8 = Util::toFloat<float,(void *)0>((unsigned int *)&v19, v4);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  if ( v8 )
    sub_21E8190(v6, "commands.generic.num.invalid", (_BYTE *)0x1C);
    CommandRegistry::ParseToken::toString((CommandRegistry::ParseToken *)&v18, v7);
    v10 = *(_QWORD *)(v5 + 4);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)v5,
        &v18);
      v11 = (int)v18;
      *(_DWORD *)v10 = v18;
      HIDWORD(v10) = &unk_28898CC;
      v18 = &unk_28898CC;
      *(_DWORD *)(v5 + 4) = v10 + 4;
    v13 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    result = 0;
  else
    result = 1;
  return result;
}


void *__fastcall CommandRegistry::allocateCommand<GameRuleCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  int v3; // r3@1
  void *result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x24u);
  j_Command::Command(v2);
  v3 = (int)v2 + 20;
  *(_DWORD *)v2 = &off_271A098;
  result = &unk_28898CC;
  *(_DWORD *)v3 = &unk_28898CC;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = -1;
  *((_DWORD *)v2 + 8) = 0;
  *v1 = v2;
  return result;
}


void **__fastcall CommandRegistry::allocateCommand<ToggleDownfallCommand>(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r5@1
  void **result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x14u);
  v3 = v2;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  j_Command::Command((Command *)v2);
  *v1 = v3;
  result = &off_271A2B4;
  *v3 = &off_271A2B4;
  return result;
}


int *__fastcall CommandRegistry::createCommand(int *a1, int a2, int a3, int a4, int a5, void **a6)
{
  int v6; // r0@1
  int v7; // r4@3
  int v8; // r8@5
  int v9; // r10@5
  int v10; // r6@5
  int v11; // r9@7
  signed int v12; // r2@7
  __int64 v13; // r0@7
  signed int v14; // r1@9
  bool v15; // zf@11
  int v16; // r1@11
  signed int v17; // r0@16
  bool v18; // zf@18
  int *result; // r0@27
  int v20; // r0@28
  int v21; // r1@28
  int v22; // r0@28
  int v23; // r1@28
  int v24; // r0@28
  int v25; // r5@28
  int v26; // r9@29
  int v27; // r4@29
  int v28; // r0@31
  _BYTE *v29; // r7@31
  signed int v30; // r2@34
  char *v31; // r6@34
  _DWORD *v32; // r0@34
  int v33; // r2@36
  int v34; // [sp+Ch] [bp-44h]@1
  int v35; // [sp+10h] [bp-40h]@3
  int v36; // [sp+14h] [bp-3Ch]@3
  int *v37; // [sp+18h] [bp-38h]@1
  int v38; // [sp+1Ch] [bp-34h]@1
  int v39; // [sp+20h] [bp-30h]@3
  int v40; // [sp+24h] [bp-2Ch]@28
  int v41; // [sp+28h] [bp-28h]@21

  v37 = a1;
  v38 = *(_DWORD *)a3;
  v34 = a4;
  v6 = *(_DWORD *)(*(_DWORD *)a3 + 20);
  if ( v6 & 0x200000 )
    v6 = *(_DWORD *)(*(_DWORD *)v38 + 20);
  v36 = a2;
  v35 = CommandRegistry::findCommand(a2, (const void **)(*(_DWORD *)(a2 + 96) + 4 * (v6 & 0x3C0FFFFF)));
  v7 = *(_QWORD *)(v35 + 8);
  v39 = *(_QWORD *)(v35 + 8) >> 32;
  if ( v7 == v39 )
  {
LABEL_27:
    sub_21E8190(a6, "Command version mismatch", (_BYTE *)0x18);
    result = 0;
    *v37 = 0;
    return result;
  }
  while ( 1 )
    if ( CommandVersion::isCompatible((CommandVersion *)v7, a5) == 1 )
    {
      v9 = *(_QWORD *)(v7 + 12) >> 32;
      v8 = *(_QWORD *)(v7 + 12);
      v10 = *(_DWORD *)(v38 + 4);
      if ( v8 == v9 )
      {
LABEL_23:
        if ( !v10 )
          break;
        goto LABEL_26;
      }
      while ( v10 )
        v11 = *(_DWORD *)(v10 + 20);
        v12 = 0;
        v13 = *(_QWORD *)(v8 + 4);
        v15 = HIDWORD(v13) == 0;
        HIDWORD(v13) = (*(_QWORD *)(v8 + 4) >> 32) & 1;
        if ( v15 )
          v12 = 1;
        v15 = v13 == 0;
        v14 = 0;
          v14 = 1;
        v15 = v11 == 1048604;
        v16 = v14 | v12;
        if ( v11 == 1048604 )
          v15 = (_DWORD)v13 == (_DWORD)CommandRegistry::parse<std::unique_ptr<Command,std::default_delete<Command>>>;
        if ( !v15 || !v16 )
        {
          v15 = (_DWORD)v13 == (_DWORD)CommandRegistry::parse<RelativeFloat>;
          v17 = 0;
          if ( v15 )
            v17 = 1;
          v18 = v11 == 1048578;
          if ( v11 == 1048578 )
            v18 = (v17 & v16) == 1;
          if ( !v18 )
          {
            CommandRegistry::getParseSymbol(&v41, v8);
            if ( v41 != v11 )
              goto LABEL_26;
          }
        }
        v10 = *(_DWORD *)(v10 + 4);
        v8 += 40;
        if ( v9 == v8 )
          goto LABEL_23;
      if ( *(_BYTE *)(v8 + 36) )
        break;
    }
LABEL_26:
    v7 += 28;
    if ( v7 == v39 )
      goto LABEL_27;
  (*(void (__fastcall **)(int *))(v7 + 8))(&v40);
  v20 = v40;
  v21 = *(_DWORD *)(v35 + 24);
  *(_DWORD *)(v40 + 8) = v36;
  *(_DWORD *)(v20 + 12) = v21;
  v22 = v40;
  *(_BYTE *)(v40 + 16) = *(_BYTE *)(v35 + 20);
  *(_BYTE *)(v22 + 17) = *(_BYTE *)(v35 + 32);
  v23 = v40;
  *(_DWORD *)(v40 + 4) = a5;
  v24 = *(_QWORD *)(v7 + 12) >> 32;
  v25 = *(_QWORD *)(v7 + 12);
  if ( v25 == v24 )
LABEL_44:
    v40 = 0;
    result = v37;
    *v37 = v23;
  v26 = v24 - 40;
  v27 = *(_DWORD *)(v38 + 4);
  while ( 2 )
    v28 = *(_DWORD *)(v25 + 32);
    v29 = (_BYTE *)(v23 + v28);
    if ( v28 == -1 )
      v29 = 0;
    if ( !v27 )
      v27 = 0;
      if ( v29 )
        *v29 = 0;
      goto LABEL_42;
    v30 = *(_QWORD *)(v25 + 4) >> 32;
    v31 = (char *)*(_QWORD *)(v25 + 4);
    v32 = (_DWORD *)(v36 + (v30 >> 1));
    if ( v30 & 1 )
      v31 = *(char **)&v31[*v32];
    if ( ((int (__fastcall *)(_DWORD *, int, int, int))v31)(v32, v23 + *(_DWORD *)(v25 + 28), v27, v34) == 1 )
        *v29 = 1;
      v27 = *(_DWORD *)(v27 + 4);
LABEL_42:
      if ( v26 == v25 )
        v23 = v40;
        goto LABEL_44;
      v25 += 40;
      v23 = v40;
      continue;
    break;
  *v37 = 0;
  result = (int *)v40;
  if ( v40 )
    result = (int *)(*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v40 + 4))(
                      v40,
                      *(_DWORD *)(*(_DWORD *)v40 + 4),
                      v33);
  return result;
}


int *__fastcall CommandRegistry::buildOptionalRuleChain(int *result, int a2, const void **a3, int a4, __int64 *a5)
{
  __int64 v5; // kr00_8@1
  int v6; // r9@1
  int v7; // r12@1
  int v8; // r8@1
  _DWORD *v9; // r5@2
  int v10; // r6@3
  _DWORD *v11; // r2@3
  bool v12; // zf@5
  int v13; // r3@11
  int v14; // r11@11
  int v15; // r10@11
  int v16; // r5@12
  int v17; // r4@13
  bool v18; // zf@13
  bool v19; // nf@13
  unsigned __int8 v20; // vf@13
  int v21; // r2@16
  _DWORD *v22; // r6@17
  bool v23; // zf@19
  signed int v24; // r2@23
  _DWORD *v25; // r5@30
  int v26; // r8@31
  int *v27; // r6@31
  __int64 v28; // r0@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  int v31; // r4@37
  unsigned int v32; // r2@42
  signed int v33; // r0@47
  signed int v34; // r1@49
  signed int v35; // r1@58
  signed int v36; // r0@58
  int v37; // r5@61
  int v38; // r9@61
  unsigned int *v39; // r2@63
  signed int v40; // r1@65
  unsigned int *v41; // r2@67
  signed int v42; // r1@69
  const void **v43; // r0@79
  char *v44; // r0@79
  char *v45; // r0@80
  char *v46; // r0@82
  int v47; // r7@86
  int v48; // r4@86
  int v49; // r0@86
  unsigned int v50; // r1@86
  unsigned int v51; // r2@88
  unsigned int v52; // r0@88
  bool v53; // cf@90
  char *v54; // r9@93
  int v55; // r0@93
  int v56; // r2@93
  int v57; // r1@93
  char *v58; // r1@93
  int v59; // r3@94
  int v60; // r5@96
  int v61; // r11@99
  _DWORD *v62; // r7@100
  int v63; // r5@100
  int v64; // r4@100
  char *v65; // r0@100
  _DWORD *v66; // r0@100
  __int64 v67; // kr18_8@100
  void *v68; // r0@102
  _DWORD *v69; // r0@102
  __int64 v70; // kr20_8@102
  void *v71; // r0@107
  void *v72; // r0@114
  __int64 v73; // kr28_8@114
  int v74; // [sp+28h] [bp-D0h]@31
  int *v75; // [sp+30h] [bp-C8h]@12
  int v76; // [sp+34h] [bp-C4h]@61
  int v77; // [sp+38h] [bp-C0h]@61
  int v78; // [sp+38h] [bp-C0h]@93
  int v79; // [sp+3Ch] [bp-BCh]@11
  _DWORD *v80; // [sp+58h] [bp-A0h]@61
  _DWORD *v81; // [sp+58h] [bp-A0h]@86
  const void **v82; // [sp+5Ch] [bp-9Ch]@1
  int (__fastcall *v83)(int); // [sp+64h] [bp-94h]@114
  void (*v84)(void); // [sp+6Ch] [bp-8Ch]@114
  int (__fastcall *v85)(int (__fastcall **)(int, int *), int, int *); // [sp+70h] [bp-88h]@114
  void *v86; // [sp+74h] [bp-84h]@114
  char *v87; // [sp+78h] [bp-80h]@114
  char *v88; // [sp+7Ch] [bp-7Ch]@114
  int v89; // [sp+80h] [bp-78h]@114
  _DWORD *v90; // [sp+84h] [bp-74h]@100
  void (*v91)(void); // [sp+8Ch] [bp-6Ch]@100
  int (__fastcall *v92)(int *, int, int *); // [sp+90h] [bp-68h]@100
  char *v93; // [sp+94h] [bp-64h]@100
  char *v94; // [sp+98h] [bp-60h]@100
  char *v95; // [sp+9Ch] [bp-5Ch]@100
  int v96; // [sp+A0h] [bp-58h]@100
  _DWORD *v97; // [sp+A4h] [bp-54h]@102
  void (*v98)(void); // [sp+ACh] [bp-4Ch]@102
  int (__fastcall *v99)(int *, int, int *); // [sp+B0h] [bp-48h]@102
  void *ptr; // [sp+B4h] [bp-44h]@102
  char *v101; // [sp+B8h] [bp-40h]@102
  char *v102; // [sp+BCh] [bp-3Ch]@102
  int v103; // [sp+C0h] [bp-38h]@102
  char *v104; // [sp+C4h] [bp-34h]@67
  char *v105; // [sp+C8h] [bp-30h]@63
  char *v106; // [sp+CCh] [bp-2Ch]@34

  v82 = a3;
  v5 = *a5;
  v7 = *(_QWORD *)(a2 + 84) >> 32;
  v6 = *(_QWORD *)(a2 + 84);
  v8 = (HIDWORD(v5) - (signed int)v5) >> 2;
  if ( v6 == v7 )
  {
LABEL_11:
    v79 = a4;
    v13 = -1;
    v14 = -1431655765 * ((v7 - v6) >> 2);
    v15 = 0;
    if ( v7 - v6 <= 0 )
    {
      v75 = result;
    }
    else
      v16 = 0;
      do
      {
        v17 = *(_DWORD *)(v6 + 12 * v16);
        v20 = __OFSUB__(v8, v17);
        v18 = v8 == v17;
        v19 = v8 - v17 < 0;
        if ( v8 > v17 )
        {
          v20 = __OFSUB__(v17, v15);
          v18 = v17 == v15;
          v19 = v17 - v15 < 0;
        }
        if ( !((unsigned __int8)(v19 ^ v20) | v18) )
          v21 = v6 + 12 * v16;
          if ( v21 )
          {
            v22 = (_DWORD *)(v5 + 4 * (v8 - v17));
            while ( *(_DWORD *)(v21 + 8) == *v22 )
            {
              v21 = *(_DWORD *)(v21 + 4);
              v23 = v21 == -1;
              if ( v21 != -1 )
              {
                v21 = v6 + 12 * v21;
                ++v22;
                v23 = v21 == 0;
              }
              if ( v23 )
                goto LABEL_23;
            }
            v24 = 0;
          }
          else
LABEL_23:
            v24 = 1;
          if ( v24 )
            v15 = *(_DWORD *)(v6 + 12 * v16);
            v13 = v16;
        ++v16;
      }
      while ( v16 < v14 );
    v25 = (_DWORD *)(v5 + 4 * (v8 - 1 - v15));
    if ( !v25 )
LABEL_123:
      result = (int *)((v14 - 1) | 0x500000);
      *v75 = (int)result;
      return result;
    v26 = a2;
    v74 = a2;
    v27 = &dword_28898C0;
    while ( 1 )
      v31 = *v25;
      v32 = *v25 & 0xFC0FFFFF;
      if ( *v25 & 0x1000000 )
        break;
      if ( v31 & 0x200000 )
        v35 = -1227133513;
        v36 = (signed int)((*(_QWORD *)(v26 + 108) >> 32) - *(_QWORD *)(v26 + 108)) >> 2;
      else
        if ( !(v31 & 0x400000) )
          if ( v31 & 0x800000 )
            v28 = *(_QWORD *)(v26 + 120);
            if ( !(v31 & 0x2000000) )
              v33 = 0;
              if ( (unsigned int)(v31 - 1) < 0x13 )
                v33 = 1;
              v34 = 0;
              if ( (v31 & 0xFFEFFFFE) < 0x1E )
                v34 = 1;
              if ( !(v31 & 0x100000) )
                v34 = v33;
              if ( v34 )
                goto LABEL_84;
LABEL_61:
              v76 = *v25;
              v77 = v13;
              v106 = (char *)&unk_28898CC;
              sub_21E6FCC((const void **)&v106, *((_DWORD *)*v82 - 3) + 8);
              sub_21E7408((const void **)&v106, "Command ", 8u);
              sub_21E72F0((const void **)&v106, v82);
              v80 = v25;
              v37 = *(_DWORD *)v79;
              v38 = *(_DWORD *)(v79 + 4);
              if ( *(_DWORD *)v79 != v38 )
                do
                {
                  v104 = (char *)&unk_28898CC;
                  sub_21E6FCC((const void **)&v104, *(_DWORD *)(*(_DWORD *)(v37 + 12) - 12) + 2);
                  sub_21E7408((const void **)&v104, " <", 2u);
                  sub_21E72F0((const void **)&v104, (const void **)(v37 + 12));
                  v43 = sub_21E7408((const void **)&v104, ">", 1u);
                  v105 = (char *)*v43;
                  *v43 = &unk_28898CC;
                  sub_21E72F0((const void **)&v106, (const void **)&v105);
                  v44 = v105 - 12;
                  if ( (int *)(v105 - 12) != v27 )
                  {
                    v39 = (unsigned int *)(v105 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v40 = __ldrex(v39);
                      while ( __strex(v40 - 1, v39) );
                    }
                    else
                      v40 = (*v39)--;
                    if ( v40 <= 0 )
                      j_j_j_j__ZdlPv_9(v44);
                  }
                  v45 = v104 - 12;
                  if ( (int *)(v104 - 12) != v27 )
                    v41 = (unsigned int *)(v104 - 4);
                        v42 = __ldrex(v41);
                      while ( __strex(v42 - 1, v41) );
                      v42 = (*v41)--;
                    if ( v42 <= 0 )
                      j_j_j_j__ZdlPv_9(v45);
                  v37 += 40;
                }
                while ( v37 != v38 );
              v26 = v74;
              v31 = v76;
              v46 = v106 - 12;
              v25 = v80;
              if ( (int *)(v106 - 12) != v27 )
                v29 = (unsigned int *)(v106 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v30 = __ldrex(v29);
                  while ( __strex(v30 - 1, v29) );
                  v31 = v76;
                else
                  v30 = (*v29)--;
                if ( v30 <= 0 )
                  j_j_j_j__ZdlPv_9(v46);
              v7 = *(_DWORD *)(v74 + 88);
              v13 = v77;
              goto LABEL_84;
            v28 = *(_QWORD *)(v26 + 96);
          goto LABEL_56;
        v35 = -1431655765;
        v36 = (v7 - v6) >> 2;
      if ( v32 >= v36 * v35 )
        goto LABEL_61;
LABEL_84:
      ++v15;
      if ( v7 == *(_DWORD *)(v26 + 92) )
        v81 = v25;
        v47 = v31;
        v48 = v13;
        v49 = (v7 - *(_DWORD *)(v26 + 84)) >> 2;
        v50 = -1431655765 * v49;
        if ( v7 == *(_DWORD *)(v26 + 84) )
          v50 = 1;
        v52 = v50 + -1431655765 * v49;
        v51 = v52;
        if ( v52 > 0x15555555 )
          v52 = 357913941;
        v53 = v51 >= v50;
        LOWORD(v50) = 21846;
        if ( !v53 )
        HIWORD(v50) = 5461;
        if ( v52 >= v50 )
          sub_21E57F4();
        v78 = 3 * v52;
        v54 = (char *)operator new(12 * v52);
        v56 = *(_QWORD *)(v26 + 84) >> 32;
        v55 = *(_QWORD *)(v26 + 84);
        *(_DWORD *)&v54[v56 - v55] = v15;
        v57 = (int)&v54[v56 - v55];
        *(_DWORD *)(v57 + 4) = v48;
        *(_DWORD *)(v57 + 8) = v47;
        v58 = v54;
        if ( v56 != v55 )
          do
            *(_QWORD *)v58 = *(_QWORD *)v55;
            v59 = *(_DWORD *)(v55 + 8);
            v55 += 12;
            *((_DWORD *)v58 + 2) = v59;
            v58 += 12;
          while ( v55 != v56 );
          v55 = *(_DWORD *)(v26 + 84);
        v60 = (int)(v58 + 12);
        if ( v55 )
          operator delete((void *)v55);
        v13 = v48;
        *(_DWORD *)(v26 + 84) = v54;
        *(_DWORD *)(v26 + 88) = v60;
        v31 = v47;
        v25 = v81;
        v27 = &dword_28898C0;
        *(_DWORD *)(v26 + 92) = &v54[4 * v78];
        *(_DWORD *)v7 = v15;
        *(_DWORD *)(v7 + 4) = v13;
        *(_DWORD *)(v7 + 8) = v31;
        *(_DWORD *)(v26 + 88) = v7 + 12;
      v61 = v14 | 0x500000;
      if ( v13 == -1 )
        v103 = v61;
        ptr = 0;
        v101 = 0;
        v102 = 0;
        v68 = operator new(4u);
        ptr = v68;
        v102 = (char *)v68 + 4;
        *(_DWORD *)v68 = v31;
        v101 = (char *)v68 + 4;
        v98 = 0;
        v69 = operator new(8u);
        *v69 = CommandRegistry::fold;
        v69[1] = v61;
        v97 = v69;
        v99 = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),std::_Bind<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol,CommandRegistry::Symbol) ()(std::_Placeholder<1>,std::_Placeholder<2>,CommandRegistry::Symbol)>>::_M_invoke;
        v98 = (void (*)(void))std::_Function_base::_Base_manager<std::_Bind<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol,CommandRegistry::Symbol) ()(std::_Placeholder<1>,std::_Placeholder<2>,CommandRegistry::Symbol)>>::_M_manager;
        v70 = *(_QWORD *)(v26 + 4);
        if ( (_DWORD)v70 == HIDWORD(v70) )
          std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
            (__int64 *)v26,
            &v103,
            (int)&ptr,
            (int)&v97);
        else
          __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
            v26,
            (_DWORD *)v70,
          *(_DWORD *)(v26 + 4) += 32;
        *(_BYTE *)(v26 + 360) = 0;
        if ( v98 )
          v98();
        v71 = ptr;
        v62 = v25;
        v63 = v31;
        v64 = v13;
        v96 = v61;
        v93 = 0;
        v94 = 0;
        v95 = 0;
        v65 = (char *)operator new(8u);
        v93 = v65;
        v95 = v65 + 8;
        *(_DWORD *)v65 = v63;
        *((_DWORD *)v65 + 1) = v64 | 0x500000;
        v94 = v65 + 8;
        v91 = 0;
        v66 = operator new(8u);
        v25 = v62;
        *v66 = CommandRegistry::fold;
        v66[1] = v61;
        v90 = v66;
        v92 = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),std::_Bind<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol,CommandRegistry::Symbol) ()(std::_Placeholder<1>,std::_Placeholder<2>,CommandRegistry::Symbol)>>::_M_invoke;
        v91 = (void (*)(void))std::_Function_base::_Base_manager<std::_Bind<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol,CommandRegistry::Symbol) ()(std::_Placeholder<1>,std::_Placeholder<2>,CommandRegistry::Symbol)>>::_M_manager;
        v67 = *(_QWORD *)(v26 + 4);
        if ( (_DWORD)v67 == HIDWORD(v67) )
            &v96,
            (int)&v93,
            (int)&v90);
            (_DWORD *)v67,
        if ( v91 )
          v91();
        v71 = v93;
      if ( v71 )
        operator delete(v71);
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = v61;
      v72 = operator new(4u);
      v86 = v72;
      *(_DWORD *)v72 = 0x100000;
      v83 = CommandRegistry::kill;
      v85 = std::_Function_handler<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol),CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_invoke;
      v88 = (char *)v72 + 4;
      v87 = (char *)v72 + 4;
      v84 = (void (*)(void))std::_Function_base::_Base_manager<CommandRegistry::ParseToken * (*)(CommandRegistry::ParseToken&,CommandRegistry::Symbol)>::_M_manager;
      v73 = *(_QWORD *)(v26 + 4);
      if ( (_DWORD)v73 == HIDWORD(v73) )
        std::vector<CommandRegistry::ParseRule,std::allocator<CommandRegistry::ParseRule>>::_M_emplace_back_aux<CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
          (__int64 *)v26,
          &v89,
          (int)&v86,
          (int)&v83);
        __gnu_cxx::new_allocator<CommandRegistry::ParseRule>::construct<CommandRegistry::ParseRule,CommandRegistry::Symbol &,std::vector<CommandRegistry::Symbol,std::allocator<CommandRegistry::Symbol>>,std::function<CommandRegistry::ParseToken * ()(CommandRegistry::ParseToken&,CommandRegistry::Symbol)> &>(
          v26,
          (_DWORD *)v73,
        *(_DWORD *)(v26 + 4) += 32;
      *(_BYTE *)(v26 + 360) = 0;
      if ( v84 )
        v84();
      if ( v86 )
        operator delete(v86);
      v7 = *(_QWORD *)(v26 + 84) >> 32;
      v6 = *(_QWORD *)(v26 + 84);
      v14 = -1431655765 * ((v7 - v6) >> 2);
      v13 = v14 - 1;
      v12 = v25 == *(_DWORD **)a5;
      --v25;
      if ( v12 )
        goto LABEL_123;
    v28 = *(_QWORD *)(v26 + 132);
LABEL_56:
    if ( v32 >= (HIDWORD(v28) - (signed int)v28) >> 2 )
      goto LABEL_61;
    goto LABEL_84;
  }
  v9 = (_DWORD *)*(_QWORD *)(a2 + 84);
  while ( 1 )
    v10 = (int)v9;
    v11 = (_DWORD *)v5;
    if ( *v9 == v8 )
      break;
LABEL_10:
    v9 += 3;
    if ( v9 == (_DWORD *)v7 )
      goto LABEL_11;
  do
    if ( *(_DWORD *)(v10 + 8) != *v11 )
      goto LABEL_10;
    v10 = *(_DWORD *)(v10 + 4);
    v12 = v10 == -1;
    if ( v10 != -1 )
      v10 = v6 + 12 * v10;
      ++v11;
      v12 = v10 == 0;
  while ( !v12 );
  *result = -1431655765 * (((signed int)v9 - v6) >> 2) | 0x500000;
  return result;
}


int __fastcall CommandRegistry::getOverloadSyntaxInformation(CommandSyntaxInformation *a1, CommandRegistry *a2, const CommandOrigin *a3, int *a4, unsigned int a5)
{
  int *v5; // r7@1
  const CommandOrigin *v6; // r8@1
  CommandRegistry *v7; // r6@1
  CommandSyntaxInformation *v8; // r11@1
  const CommandRegistry::ParseToken *v9; // r3@1
  void *v10; // r0@1
  bool v11; // zf@2
  char v12; // r2@5
  void *v13; // r0@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  int v19; // [sp+Ch] [bp-8Ch]@1
  int v20; // [sp+10h] [bp-88h]@1
  CommandRegistry *v21; // [sp+14h] [bp-84h]@1
  int v22; // [sp+18h] [bp-80h]@1
  int v23; // [sp+40h] [bp-58h]@1
  int v24; // [sp+44h] [bp-54h]@1
  int v25; // [sp+48h] [bp-50h]@1
  CommandRegistry *v26; // [sp+4Ch] [bp-4Ch]@1
  void *v27; // [sp+50h] [bp-48h]@1
  const CommandRegistry::ParseToken **v28; // [sp+54h] [bp-44h]@1
  void *v29; // [sp+58h] [bp-40h]@1
  int v30; // [sp+5Ch] [bp-3Ch]@1
  int v31; // [sp+60h] [bp-38h]@1
  int v32; // [sp+64h] [bp-34h]@1
  int v33; // [sp+68h] [bp-30h]@1
  __int16 v34; // [sp+6Ch] [bp-2Ch]@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  CommandSyntaxInformation::CommandSyntaxInformation(a1);
  v21 = v7;
  _aeabi_memclr4(&v22, 40);
  std::_Deque_base<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>,std::allocator<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>>>::_M_initialize_map(
    (int)&v22,
    0);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = v7;
  v27 = &unk_28898CC;
  v28 = 0;
  v29 = &unk_28898CC;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 3;
  v34 = 0;
  sub_21E8AF4(&v19, v5);
  CommandRegistry::parsePartialCommand((void **)&v20, 0, (int)&v21, &v19, a5, 0);
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v16 = __ldrex(v15);
        v9 = (const CommandRegistry::ParseToken *)(v16 - 1);
      }
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = *v15;
      v9 = (const CommandRegistry::ParseToken *)(*v15 - 1);
      *v15 = (unsigned int)v9;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = v28 == 0;
  if ( v28 )
    v9 = *v28;
    v11 = *v28 == 0;
  if ( !v11 )
    CommandRegistry::getOverloadSyntaxInformation(v7, v6, v8, v9);
    v12 = 0;
    if ( (unsigned int)*((_QWORD *)v8 + 1) != *((_QWORD *)v8 + 1) >> 32 )
      v12 = 1;
    *(_BYTE *)v8 = v12;
  v13 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return CommandRegistry::Parser::~Parser((CommandRegistry::Parser *)&v21);
}


signed int __fastcall CommandRegistry::parseEnum<SetBlockCommand::SetBlockMode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::addEnumValues<TestForBlocksCommand::Mode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id[0];
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id);
  v25 = type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<TestForBlocksCommand::Mode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


void __fastcall CommandRegistry::getAlphabeticalLookup(CommandRegistry *this, const CommandOrigin *a2, int a3)
{
  CommandRegistry *v3; // r11@1
  int *v4; // r9@1
  const CommandOrigin *v5; // r8@1
  char *v6; // r10@1
  int v7; // r7@1
  int v8; // r5@1
  unsigned int v9; // r6@1
  char v10; // r4@2
  __int64 v11; // r0@2
  unsigned int v12; // r0@5
  int *v13; // r1@5
  int v14; // r0@6
  __int64 v15; // kr00_8@7
  _DWORD *i; // r4@9
  _DWORD *v17; // r6@9
  __int64 v18; // kr10_8@10
  int *v19; // r1@10
  void **v20; // r5@20
  bool v21; // zf@21

  v3 = this;
  v4 = 0;
  v5 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v6 = (char *)a2 + 208;
  v7 = *((_DWORD *)a2 + 54);
  v8 = a3;
  v9 = 0;
  if ( (const CommandOrigin *)v7 != (const CommandOrigin *)((char *)a2 + 208) )
  {
    do
    {
      v10 = *(_BYTE *)(v7 + 52);
      v11 = (unsigned int)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 44))(v8);
      if ( !(v10 & 2) )
        HIDWORD(v11) = 1;
      if ( v11 )
      {
        v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 36))(v8);
        v13 = (int *)(v7 + 20);
        if ( v12 >= *(_BYTE *)(v7 + 40) )
        {
          v14 = *(_DWORD *)(v7 + 48);
          if ( v14 & 0x200000 )
          {
            v17 = (_DWORD *)(*(_QWORD *)(*((_DWORD *)v5 + 27) + 28 * (v14 & 0xFC0FFFFF) + 16) >> 32);
            for ( i = (_DWORD *)*(_QWORD *)(*((_DWORD *)v5 + 27) + 28 * (v14 & 0xFC0FFFFF) + 16); v17 != i; i += 4 )
            {
              v18 = *(_QWORD *)((char *)v3 + 4);
              v19 = (int *)(*((_DWORD *)v5 + 24) + 4 * *i);
              if ( (_DWORD)v18 == HIDWORD(v18) )
                std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                  (unsigned __int64 *)v3,
                  v19);
              else
                *((_DWORD *)v3 + 1) = sub_21E8AF4((int *)v18, v19) + 1;
            }
          }
          else
            v15 = *(_QWORD *)((char *)v3 + 4);
            if ( (_DWORD)v15 == HIDWORD(v15) )
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                (unsigned __int64 *)v3,
                v13);
            else
              *((_DWORD *)v3 + 1) = sub_21E8AF4((int *)v15, v13) + 1;
        }
      }
      v7 = sub_21D4820(v7);
    }
    while ( (char *)v7 != v6 );
    v4 = (int *)(*(_QWORD *)v3 >> 32);
    v9 = *(_QWORD *)v3;
  }
  if ( (int *)v9 != v4 )
    std::__introsort_loop<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
      v9,
      v4,
      2 * (31 - __clz((signed int)((signed int)v4 - v9) >> 2)));
    if ( (signed int)((signed int)v4 - v9) < 65 )
      std::__insertion_sort<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v9,
        (const void **)v4);
    else
      v20 = (void **)(v9 + 64);
        (const void **)(v9 + 64));
      if ( (int *)(v9 + 64) != v4 )
        do
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Val_less_iter>(v20);
          v20 = (void **)(v9 + 68);
          v21 = v4 - 16 == (int *)(v9 + 4);
          v9 += 4;
        while ( !v21 );
}


signed int __fastcall CommandRegistry::parseEnum<BlockSlot>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


signed int __fastcall CommandRegistry::parseEnum<CloneCommand::CloneMode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::parseParameter(int a1, int a2, int a3, int a4, int a5)
{
  signed int v5; // r7@1
  char *v6; // lr@1
  _DWORD *v7; // r0@1

  v5 = *(_QWORD *)(a3 + 4) >> 32;
  v6 = (char *)*(_QWORD *)(a3 + 4);
  v7 = (_DWORD *)(a1 + (v5 >> 1));
  if ( v5 & 1 )
    v6 = *(char **)&v6[*v7];
  return ((int (__fastcall *)(_DWORD *, int, int, int))v6)(v7, a2 + *(_DWORD *)(a3 + 28), a4, a5);
}


__int64 __fastcall CommandRegistry::allocateCommand<TickingAreaCommand>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r4@1
  __int64 result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x48u);
  j_Command::Command((Command *)v2);
  *(_DWORD *)v2 = &off_271A278;
  *(_QWORD *)((char *)v2 + 20) = 3LL;
  *((_DWORD *)v2 + 7) = 0;
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 32));
  j_CommandPosition::CommandPosition((CommandPosition *)((char *)v2 + 48));
  result = (unsigned int)&unk_28898CC;
  *((_QWORD *)v2 + 8) = (unsigned int)&unk_28898CC;
  *v1 = v2;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<Difficulty>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


signed int __fastcall CommandRegistry::parseEnum<EffectCommand::Mode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


int __fastcall CommandRegistry::addEnumValues<AgentCommand::Mode>(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r10@11
  char **v10; // r2@11
  char *v11; // r1@12
  char *v12; // r0@14
  char v13; // r0@16
  int v14; // r9@19
  char **v15; // r5@19
  char **v16; // r7@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int *v19; // r0@29
  int v21; // [sp+Ch] [bp-5Ch]@0
  int (**v22)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+10h] [bp-58h]@0
  int v23; // [sp+14h] [bp-54h]@1
  char v24; // [sp+18h] [bp-50h]@19
  __int16 v25; // [sp+1Ch] [bp-4Ch]@19
  char *v26; // [sp+20h] [bp-48h]@11
  __int64 v27; // [sp+28h] [bp-40h]@11
  char **v28; // [sp+34h] [bp-34h]@1
  char **v29; // [sp+38h] [bp-30h]@1
  char **v30; // [sp+3Ch] [bp-2Ch]@1

  v23 = a1;
  v28 = 0;
  v29 = 0;
  v3 = a3;
  v4 = a2;
  v30 = 0;
  j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::reserve(
    (int)&v28,
    (signed int)((*a3 >> 32) - *a3) >> 3);
  v5 = *v3 >> 32;
  v6 = *v3;
  if ( v6 != v5 )
  {
    v22 = &pthread_create;
    do
    {
      v9 = *(_DWORD *)(v6 + 4);
      sub_21E8AF4((int *)&v26, (int *)v6);
      v27 = v9;
      v10 = v29;
      if ( v29 == v30 )
      {
        j_std::vector<std::pair<std::string,unsigned long long>,std::allocator<std::pair<std::string,unsigned long long>>>::_M_emplace_back_aux<std::pair<std::string,unsigned long long>>(
          (unsigned __int64 *)&v28,
          (int)&v26);
        v11 = v26;
      }
      else
        *v29 = v26;
        v11 = (char *)&unk_28898CC;
        v26 = (char *)&unk_28898CC;
        v10[2] = (char *)v9;
        v10[3] = (char *)(v9 >> 31);
        v29 = v10 + 4;
      v12 = v11 - 12;
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v6 += 8;
    }
    while ( v6 != v5 );
  }
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id) )
    type_id<CommandRegistry,AgentCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,AgentCommand::Mode>(void)::id);
  v25 = type_id<CommandRegistry,AgentCommand::Mode>(void)::id;
  j_CommandRegistry::addEnumValuesInternal(
    (int)&v24,
    v23,
    v4,
    (int)&v25,
    (int)&CommandRegistry::parseEnum<AgentCommand::Mode>,
    0,
    v21,
    (int)v22,
    v23);
  v14 = j_CommandRegistry::Symbol::value((CommandRegistry::Symbol *)&v24);
  v16 = v29;
  v15 = v28;
  if ( v28 != v29 )
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v15 += 4;
    while ( v15 != v16 );
    v15 = v28;
  if ( v15 )
    j_operator delete(v15);
  return v14;
}


int __fastcall CommandRegistry::findEnumValue(int *a1, int a2, const void **a3)
{
  int *v3; // r8@1
  int v4; // r0@1
  int v5; // r10@1
  const void **v6; // r9@1
  int v7; // r4@1
  const void *v8; // r6@2
  int v9; // r11@2
  size_t v10; // r5@2
  _DWORD *v11; // r0@4
  size_t v12; // r7@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r5@13
  unsigned int v17; // r6@13
  size_t v18; // r2@13
  int v19; // r0@15
  int result; // r0@20

  v3 = a1;
  v4 = *(_DWORD *)(a2 + 176);
  v5 = a2 + 172;
  v6 = a3;
  v7 = a2 + 172;
  if ( v4 )
  {
    v8 = *a3;
    v9 = a2 + 172;
    v10 = *((_DWORD *)*a3 - 3);
    do
    {
      v7 = v4;
      while ( 1 )
      {
        v11 = *(_DWORD **)(v7 + 16);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = memcmp(v11, v8, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v9;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v7 + 8);
      v9 = v7;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v7 == v5 )
    result = 0;
  else
    v15 = *(_DWORD **)(v7 + 16);
    v16 = *((_DWORD *)*v6 - 3);
    v17 = *(v15 - 3);
    v18 = *((_DWORD *)*v6 - 3);
    if ( v16 > v17 )
      v18 = *(v15 - 3);
    v19 = memcmp(*v6, v15, v18);
    if ( !v19 )
      v19 = v16 - v17;
    if ( v19 < 0 )
      v7 = v5;
    if ( v7 == v5 )
      result = 0;
    else
      result = *(_DWORD *)(v7 + 20) | 0x2000000;
  *v3 = result;
  return result;
}


signed int __fastcall CommandRegistry::originCanRun(CommandRegistry *this, const CommandOrigin *a2, const CommandRegistry::Signature *a3)
{
  CommandRegistry *v3; // r6@1
  const CommandOrigin *v4; // r4@1
  char v5; // r7@1
  int v6; // r0@1
  bool v7; // zf@1
  signed int v8; // r5@1

  v3 = this;
  v4 = a2;
  v5 = *((_BYTE *)a2 + 32);
  v6 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  v7 = (v5 & 2) == 0;
  v8 = 0;
  if ( v5 & 2 )
    v7 = v6 == 1;
  if ( v7 && (*(int (__fastcall **)(CommandRegistry *))(*(_DWORD *)v3 + 36))(v3) >= (unsigned int)*((_BYTE *)v4 + 20) )
    v8 = 1;
  return v8;
}


int __fastcall CommandRegistry::allocateCommand<WeatherCommand>(Command **a1)
{
  Command **v1; // r4@1
  Command *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (Command *)j_operator new(0x20u);
  j_Command::Command(v2);
  *(_DWORD *)v2 = &off_271A2C8;
  result = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 7) = 0;
  *v1 = v2;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<CloneCommand::MaskMode>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}


_DWORD *__fastcall CommandRegistry::Parser::Parser(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r6@1
  _DWORD *v4; // r7@1
  __int64 v5; // r4@1
  int v6; // r8@1
  _DWORD *result; // r0@1

  v3 = a1;
  v4 = a1 + 1;
  HIDWORD(v5) = a2;
  v6 = a3;
  *a1 = a2;
  _aeabi_memclr4(a1 + 1, 40);
  LODWORD(v5) = 0;
  std::_Deque_base<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>,std::allocator<std::pair<CommandRegistry::Symbol,CommandRegistry::ParseToken *>>>::_M_initialize_map(
    (int)v4,
    0);
  v3[11] = 0;
  v3[12] = 0;
  *(_QWORD *)(v3 + 13) = v5;
  v3[15] = &unk_28898CC;
  v3[16] = 0;
  v3[17] = &unk_28898CC;
  v3[18] = 0;
  result = v3;
  v3[19] = 0;
  v3[20] = 0;
  v3[21] = v6;
  *((_WORD *)v3 + 44) = 0;
  return result;
}


signed int __fastcall CommandRegistry::parseEnum<WeatherCommand::WeatherType>(CommandRegistry *a1, _DWORD *a2, const CommandRegistry::ParseToken *a3)
{
  *a2 = j_CommandRegistry::getEnumData(a1, a3);
  return 1;
}
