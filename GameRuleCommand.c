

_DWORD *__fastcall GameRuleCommand::createJsonIndex(const char **a1, GameRule *a2, Json::Value *a3, int *a4)
{
  GameRule *v4; // r6@1
  const char **v5; // r7@1
  int *v6; // r5@1
  Json::Value *v7; // r4@1
  int v8; // r0@1
  int v9; // r4@4
  int v16; // r1@4
  int v20; // r4@5
  int v21; // r0@5
  int v22; // r0@5
  int v23; // r4@6
  char v24; // r0@6
  int v25; // r0@6
  void *v26; // r0@6
  void *v27; // r0@8
  void **v28; // r0@9
  void *v29; // r0@9
  unsigned int *v31; // r2@11
  signed int v32; // r1@13
  unsigned int *v33; // r2@15
  signed int v34; // r1@17
  unsigned int *v35; // r2@27
  signed int v36; // r1@29
  int v37; // [sp+4h] [bp-114h]@8
  char v38; // [sp+8h] [bp-110h]@5
  char v39; // [sp+18h] [bp-100h]@4
  int v40; // [sp+2Ch] [bp-ECh]@6
  char v41; // [sp+30h] [bp-E8h]@6
  void **v42; // [sp+40h] [bp-D8h]@1
  int v43; // [sp+44h] [bp-D4h]@10
  void **v44; // [sp+48h] [bp-D0h]@4
  void **v45; // [sp+4Ch] [bp-CCh]@8
  int v46; // [sp+68h] [bp-B0h]@10
  int v47; // [sp+70h] [bp-A8h]@9
  int v48; // [sp+74h] [bp-A4h]@10

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  sub_21D103C((int)&v42, 24);
  v8 = j_GameRule::getType(v4);
  switch ( v8 )
  {
    case 1:
      v23 = j_Json::Value::operator[](v7, v5);
      v24 = j_GameRule::getBool(v4);
      j_Json::Value::Value((Json::Value *)&v41, v24);
      j_Json::Value::operator=(v23, (const Json::Value *)&v41);
      j_Json::Value::~Value((Json::Value *)&v41);
      v25 = j_GameRule::getBool(v4);
      j_Util::boolToString((Util *)&v40, v25);
      sub_21CBF38((char *)&v44, v40, *(_DWORD *)(v40 - 12));
      v26 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
      {
        v35 = (unsigned int *)(v40 - 4);
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
          j_j_j_j__ZdlPv_9(v26);
      }
      break;
    case 2:
      v20 = j_Json::Value::operator[](v7, v5);
      v21 = j_GameRule::getInt(v4);
      j_Json::Value::Value((Json::Value *)&v38, v21);
      j_Json::Value::operator=(v20, (const Json::Value *)&v38);
      j_Json::Value::~Value((Json::Value *)&v38);
      v22 = j_GameRule::getInt(v4);
      sub_21CC43C(&v44, v22);
    case 3:
      v9 = j_Json::Value::operator[](v7, v5);
      _R0 = j_GameRule::getFloat(v4);
      __asm
        VMOV            S0, R0
        VCVT.F64.F32    D0, S0
        VMOV            R2, R3, D0
      j_Json::Value::Value((Json::Value *)&v39, v16, _R2);
      j_Json::Value::operator=(v9, (const Json::Value *)&v39);
      j_Json::Value::~Value((Json::Value *)&v39);
      sub_21CC9F0((char *)&v44);
  }
  if ( v6 )
    sub_21CFED8(&v37, (int)&v45);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v37);
    v27 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
    {
      v33 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      else
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    }
  v28 = off_26D3F84;
  v42 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v42) = off_26D3F80[0];
  v44 = v28;
  v45 = &off_27734E8;
  v29 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v45 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v46);
  v42 = (void **)off_26D3F68;
  *(void ***)((char *)&v42 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v43 = 0;
  return sub_21B6560(&v48);
}


void __fastcall GameRuleCommand::execute(GameRuleCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GameRuleCommand::execute(this, a2, a3);
}


Json::Value *__fastcall GameRuleCommand::getGameRule(GameRuleCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GameRuleCommand *v3; // r5@1
  const CommandOrigin *v4; // r6@1
  CommandOutput *v5; // r10@1
  Level *v6; // r0@1
  char *v7; // r0@1
  int **v8; // r5@1
  int v9; // t1@1
  GameRule *v10; // r6@2
  const void **v11; // r0@2
  char *v12; // r0@2
  void *v13; // r0@3
  char *v14; // r0@5
  unsigned int *v15; // r2@6
  signed int v16; // r1@8
  int i; // r7@10
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  void *v22; // r5@36
  void *v23; // r7@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  int *v26; // r0@46
  void *v27; // r0@52
  char *v28; // r0@53
  unsigned int *v30; // r2@55
  signed int v31; // r1@57
  unsigned int *v32; // r2@63
  signed int v33; // r1@65
  int v34; // [sp+0h] [bp-58h]@52
  __int64 v35; // [sp+4h] [bp-54h]@36
  int v36; // [sp+Ch] [bp-4Ch]@36
  char *v37; // [sp+10h] [bp-48h]@5
  int v38; // [sp+14h] [bp-44h]@2
  char *v39; // [sp+18h] [bp-40h]@2
  _DWORD *v40; // [sp+1Ch] [bp-3Ch]@1
  char v41; // [sp+20h] [bp-38h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  j_Json::Value::Value(&v41, 0);
  v6 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
  v7 = j_Level::getGameRules(v6);
  v40 = &unk_28898CC;
  v9 = *((_DWORD *)v3 + 5);
  v8 = (int **)((char *)v3 + 20);
  if ( !*(_DWORD *)(v9 - 12) )
  {
    for ( i = *(_DWORD *)(j_GameRules::getRules((GameRules *)v7) + 8); i; i = *(_DWORD *)i )
    {
      if ( j_CommandOutput::wantsData(v5) == 1 )
        j_GameRuleCommand::createJsonIndex((const char **)(i + 4), (GameRule *)(i + 8), (Json::Value *)&v41, 0);
      if ( *(v40 - 3) )
        sub_21E7408((const void **)&v40, ", ", 2u);
      sub_21E72F0((const void **)&v40, (const void **)(i + 4));
    }
    goto LABEL_36;
  }
  v10 = (GameRule *)j_GameRules::getRule((unsigned __int64 *)v7, v8);
  sub_21E8AF4(&v38, (int *)v8);
  v11 = sub_21E7408((const void **)&v38, " = ", 3u);
  v39 = (char *)*v11;
  *v11 = &unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v40,
    (int *)&v39);
  v12 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v38 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( v10 )
    v37 = (char *)&unk_28898CC;
    j_GameRuleCommand::createJsonIndex((const char **)v8, v10, (Json::Value *)&v41, (int *)&v37);
    sub_21E72F0((const void **)&v40, (const void **)&v37);
    v14 = v37 - 12;
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v37 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
LABEL_36:
    v35 = 0LL;
    v36 = 0;
    j_CommandOutput::success((int)v5, (int *)&v40, (unsigned __int64 *)&v35);
    v23 = (void *)HIDWORD(v35);
    v22 = (void *)v35;
    if ( (_DWORD)v35 != HIDWORD(v35) )
        v26 = (int *)(*(_DWORD *)v22 - 12);
        if ( v26 != &dword_28898C0 )
        {
          v24 = (unsigned int *)(*(_DWORD *)v22 - 4);
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
        v22 = (char *)v22 + 8;
      while ( v22 != v23 );
      v22 = (void *)v35;
    if ( v22 )
      j_operator delete(v22);
    if ( j_CommandOutput::wantsData(v5) == 1 )
      j_Json::Value::toStyledString((Json::Value *)&v34, (const Json::Value *)&v41);
      j_CommandOutput::set<std::string>((int)v5, "details", &v34);
      v27 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v34 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
  v28 = (char *)(v40 - 3);
  if ( v40 - 3 != &dword_28898C0 )
    v30 = v40 - 1;
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  return j_Json::Value::~Value((Json::Value *)&v41);
}


void __fastcall GameRuleCommand::setup(GameRuleCommand *this, Level *a2, CommandRegistry *a3)
{
  Level *v3; // r4@1
  char *v4; // r0@1
  int i; // r7@1
  int v6; // r6@2
  __int64 v7; // kr00_8@2
  int *v8; // r1@2
  int j; // r5@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  void *v12; // r0@16
  __int64 v13; // r2@18
  void *v14; // r0@18
  unsigned __int64 *v15; // r0@19
  __int64 v16; // r2@19
  char v17; // r0@20
  char v18; // r0@23
  int v19; // r0@26
  void *v20; // r0@26
  void *v21; // r0@27
  unsigned __int64 *v22; // r0@28
  __int64 v23; // r2@28
  char v24; // r0@29
  char v25; // r0@32
  int v26; // r0@35
  void *v27; // r0@35
  void *v28; // r0@36
  unsigned __int64 *v29; // r0@37
  __int64 v30; // r2@37
  char v31; // r0@38
  char v32; // r0@41
  int v33; // r0@44
  void *v34; // r0@44
  void *v35; // r0@45
  int v36; // r2@47
  signed int v37; // r1@49
  unsigned int *v38; // r2@51
  signed int v39; // r1@53
  unsigned int *v40; // r2@55
  signed int v41; // r1@57
  unsigned int *v42; // r2@59
  signed int v43; // r1@61
  unsigned int *v44; // r2@63
  signed int v45; // r1@65
  unsigned int *v46; // r2@67
  signed int v47; // r1@69
  unsigned int *v48; // r2@71
  signed int v49; // r1@73
  char v50; // [sp+20h] [bp-188h]@44
  int v51; // [sp+2Ch] [bp-17Ch]@44
  char v52; // [sp+48h] [bp-160h]@41
  int v53; // [sp+54h] [bp-154h]@45
  __int64 v54; // [sp+70h] [bp-138h]@38
  char v55; // [sp+7Bh] [bp-12Dh]@37
  char v56; // [sp+7Ch] [bp-12Ch]@35
  int v57; // [sp+88h] [bp-120h]@35
  char v58; // [sp+A4h] [bp-104h]@32
  int v59; // [sp+B0h] [bp-F8h]@36
  __int64 v60; // [sp+CCh] [bp-DCh]@29
  char v61; // [sp+D7h] [bp-D1h]@28
  char v62; // [sp+D8h] [bp-D0h]@26
  int v63; // [sp+E4h] [bp-C4h]@26
  char v64; // [sp+100h] [bp-A8h]@23
  int v65; // [sp+10Ch] [bp-9Ch]@27
  __int64 v66; // [sp+128h] [bp-80h]@20
  char v67; // [sp+133h] [bp-75h]@19
  __int64 v68; // [sp+134h] [bp-74h]@19
  int v69; // [sp+140h] [bp-68h]@18
  int v70; // [sp+148h] [bp-60h]@8
  char v71; // [sp+14Fh] [bp-59h]@2
  char v72; // [sp+150h] [bp-58h]@2
  int v73; // [sp+154h] [bp-54h]@1
  int v74; // [sp+158h] [bp-50h]@1
  int *v75; // [sp+15Ch] [bp-4Ch]@1
  int *v76; // [sp+160h] [bp-48h]@1
  int v77; // [sp+164h] [bp-44h]@1
  __int16 v78; // [sp+168h] [bp-40h]@44
  unsigned __int16 v79; // [sp+16Ch] [bp-3Ch]@41
  unsigned __int16 v80; // [sp+170h] [bp-38h]@23
  __int16 v81; // [sp+174h] [bp-34h]@26
  unsigned __int16 v82; // [sp+17Ch] [bp-2Ch]@32
  __int16 v83; // [sp+180h] [bp-28h]@35

  v3 = a2;
  v4 = j_Level::getGameRules(this);
  v77 = 0;
  v73 = 0;
  v74 = 0;
  v75 = &v73;
  v76 = &v73;
  for ( i = *(_DWORD *)(j_GameRules::getRules((GameRules *)v4) + 8); i; i = *(_DWORD *)i )
  {
    v71 = j_GameRule::getType((GameRule *)(i + 8));
    v6 = j_std::map<GameRule::Type,std::vector<std::string,std::allocator<std::string>>,std::less<GameRule::Type>,std::allocator<std::pair<GameRule::Type const,std::vector<std::string,std::allocator<std::string>>>>>::operator[](
           (int)&v72,
           &v71);
    v7 = *(_QWORD *)(v6 + 4);
    v8 = (int *)(i + 4);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)v6,
        v8);
    }
    else
      sub_21E8AF4((int *)v7, v8);
      *(_DWORD *)(v6 + 4) += 4;
  }
  for ( j = (int)v75; (int *)j != &v73; j = sub_21D47E8(j) )
    sub_21E94B4((void **)&v70, off_271A080[*(_BYTE *)(j + 16)]);
    sub_21E7408((const void **)&v70, "GameRule", 8u);
    j_CommandRegistry::addEnumValues((int)v3, (int)&v70, (unsigned __int64 *)(j + 20));
    v12 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v70 - 4);
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
  sub_21E94B4((void **)&v69, "gamerule");
  j_CommandRegistry::registerCommand((int)v3, (const void **)&v69, "commands.gamerule.description", 1, 0, 0);
  v14 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v36 = v69 - 4;
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex((unsigned int *)v13);
        HIDWORD(v13) = v37 - 1;
      while ( __strex(v37 - 1, (unsigned int *)v13) );
      v37 = *(_DWORD *)v13;
      HIDWORD(v13) = *(_DWORD *)v13 - 1;
      *(_DWORD *)v13 = HIDWORD(v13);
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  LODWORD(v13) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v68, 1, v13);
  j_j__ZN15CommandRegistry16registerOverloadI15GameRuleCommandJEEEvPKc14CommandVersionDpRKT0_((int)v3, "gamerule", v68);
  v67 = 1;
  v15 = (unsigned __int64 *)j_std::map<GameRule::Type,std::vector<std::string,std::allocator<std::string>>,std::less<GameRule::Type>,std::allocator<std::pair<GameRule::Type const,std::vector<std::string,std::allocator<std::string>>>>>::operator[](
                              (int)&v72,
                              &v67);
  if ( (unsigned int)*v15 != *v15 >> 32 )
    LODWORD(v16) = 0x7FFFFFFF;
    j_CommandVersion::CommandVersion((CommandVersion *)&v66, 1, v16);
    v17 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
    __dmb();
    if ( !(v17 & 1)
      && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
      type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
      j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
    v80 = type_id<CommandRegistry,std::string>(void)::id[0];
    j_CommandParameterData::CommandParameterData(
      (int)&v64,
      &v80,
      (unsigned int)CommandRegistry::parse<std::string>,
      "rule",
      1,
      (int)"BoolGameRule",
      20,
      0,
      -1);
    v18 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id;
    if ( !(v18 & 1)
      && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id) )
      type_id<CommandRegistry,bool>(void)::id = typeid_t<CommandRegistry>::count++;
      j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id);
    v81 = type_id<CommandRegistry,bool>(void)::id;
    v19 = j_CommandParameterData::CommandParameterData(
            (int)&v62,
            &v81,
            (unsigned int)CommandRegistry::parse<bool>,
            "value",
            0,
            32,
            1,
            33);
    j_CommandRegistry::registerOverload<GameRuleCommand,CommandParameterData,CommandParameterData>(
      (int)v3,
      "gamerule",
      v66,
      v19);
    v20 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v63 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v65 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  v61 = 2;
  v22 = (unsigned __int64 *)j_std::map<GameRule::Type,std::vector<std::string,std::allocator<std::string>>,std::less<GameRule::Type>,std::allocator<std::pair<GameRule::Type const,std::vector<std::string,std::allocator<std::string>>>>>::operator[](
                              &v61);
  if ( (unsigned int)*v22 != *v22 >> 32 )
    LODWORD(v23) = 0x7FFFFFFF;
    j_CommandVersion::CommandVersion((CommandVersion *)&v60, 1, v23);
    v24 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
    if ( !(v24 & 1)
    v82 = type_id<CommandRegistry,std::string>(void)::id[0];
      (int)&v58,
      &v82,
      (int)"IntGameRule",
    v25 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
    if ( !(v25 & 1)
      && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
      type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
      j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
    v83 = type_id<CommandRegistry,int>(void)::id;
    v26 = j_CommandParameterData::CommandParameterData(
            (int)&v56,
            &v83,
            (unsigned int)CommandRegistry::parse<int>,
            28,
            34);
      v60,
      v26);
    v27 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v57 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v59 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
  v55 = 3;
  v29 = (unsigned __int64 *)j_std::map<GameRule::Type,std::vector<std::string,std::allocator<std::string>>,std::less<GameRule::Type>,std::allocator<std::pair<GameRule::Type const,std::vector<std::string,std::allocator<std::string>>>>>::operator[](
                              &v55);
  if ( (unsigned int)*v29 != *v29 >> 32 )
    LODWORD(v30) = 0x7FFFFFFF;
    j_CommandVersion::CommandVersion((CommandVersion *)&v54, 1, v30);
    v31 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
    if ( !(v31 & 1)
    v79 = type_id<CommandRegistry,std::string>(void)::id[0];
      (int)&v52,
      &v79,
      (int)"FloatGameRule",
    v32 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id;
    if ( !(v32 & 1)
      && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id) )
      type_id<CommandRegistry,float>(void)::id = typeid_t<CommandRegistry>::count++;
      j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id);
    v78 = type_id<CommandRegistry,float>(void)::id;
    v33 = j_CommandParameterData::CommandParameterData(
            (int)&v50,
            &v78,
            (unsigned int)CommandRegistry::parse<float>,
            24,
            35);
      v54,
      v33);
    v34 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v51 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v53 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
  j_std::_Rb_tree<GameRule::Type,std::pair<GameRule::Type const,std::vector<std::string,std::allocator<std::string>>>,std::_Select1st<std::pair<GameRule::Type const,std::vector<std::string,std::allocator<std::string>>>>,std::less<GameRule::Type>,std::allocator<std::pair<GameRule::Type const,std::vector<std::string,std::allocator<std::string>>>>>::_M_erase(
    (int)&v72,
    v74);
}


Command *__fastcall GameRuleCommand::~GameRuleCommand(GameRuleCommand *this)
{
  Command *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A098;
  v2 = *((_DWORD *)this + 5);
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


void __fastcall GameRuleCommand::setGameRule(GameRuleCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GameRuleCommand::setGameRule(this, a2, a3);
}


void __fastcall GameRuleCommand::execute(GameRuleCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  bool v3; // zf@1

  v3 = *((_BYTE *)this + 33) == 0;
  if ( !*((_BYTE *)this + 33) )
    v3 = *((_BYTE *)this + 34) == 0;
  if ( v3 )
    j_j_j__ZNK15GameRuleCommand11getGameRuleERK13CommandOriginR13CommandOutput(this, a2, a3);
  else
    j_j_j__ZNK15GameRuleCommand11setGameRuleERK13CommandOriginR13CommandOutput(this, a2, a3);
}


void __fastcall GameRuleCommand::~GameRuleCommand(GameRuleCommand *this)
{
  GameRuleCommand::~GameRuleCommand(this);
}


int __fastcall GameRuleCommand::GameRuleCommand(Command *a1)
{
  int result; // r0@1
  int v2; // r12@1

  result = j_Command::Command(a1);
  v2 = result + 20;
  *(_DWORD *)result = &off_271A098;
  *(_DWORD *)v2 = &unk_28898CC;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = -1;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


void __fastcall GameRuleCommand::setGameRule(GameRuleCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GameRuleCommand *v3; // r5@1
  int **v4; // r6@1
  const CommandOrigin *v5; // r7@1
  CommandOutput *v6; // r8@1
  void *v7; // r0@1
  Level *v8; // r9@2
  unsigned __int64 *v9; // r10@2
  GameRule *v10; // r0@2
  char v11; // r4@3
  unsigned int v12; // r1@4
  void *v13; // r0@12
  int v14; // r0@14
  int v15; // r0@14
  char *v16; // r4@15
  int v17; // r6@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  int *v20; // r0@25
  void *v21; // r0@30
  char *v22; // r0@31
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  void *v25; // r0@36
  int v26; // r0@39
  void *v27; // r0@40
  int v28; // r0@42
  Level *v29; // r0@47
  char *v30; // r0@47
  char *v31; // r0@48
  void *v32; // r0@48
  void *v33; // r0@49
  _DWORD *v34; // r0@50
  char *v35; // r4@52
  int v36; // r6@52
  char *v37; // r4@54
  int v38; // r6@54
  unsigned int *v39; // r2@56
  signed int v40; // r1@58
  int *v41; // r0@64
  void *v42; // r0@69
  void *v43; // r0@70
  void *v44; // r0@71
  unsigned int *v45; // r2@72
  signed int v46; // r1@74
  unsigned int *v47; // r2@76
  signed int v48; // r1@78
  unsigned int *v49; // r2@80
  signed int v50; // r1@82
  int *v51; // r0@88
  unsigned int *v52; // r2@102
  signed int v53; // r1@104
  unsigned int *v54; // r2@110
  signed int v55; // r1@112
  unsigned int *v56; // r2@114
  signed int v57; // r1@116
  unsigned int *v58; // r2@118
  signed int v59; // r1@120
  unsigned int *v60; // r2@122
  signed int v61; // r1@124
  unsigned int *v62; // r2@126
  signed int v63; // r1@128
  unsigned int *v64; // r2@164
  signed int v65; // r1@166
  unsigned int *v66; // r2@168
  signed int v67; // r1@170
  CommandOutput *v68; // [sp+0h] [bp-B8h]@0
  int v69; // [sp+8h] [bp-B0h]@54
  int v70; // [sp+10h] [bp-A8h]@54
  char *v71; // [sp+18h] [bp-A0h]@54
  char *v72; // [sp+1Ch] [bp-9Ch]@54
  char *v73; // [sp+20h] [bp-98h]@54
  int v74; // [sp+28h] [bp-90h]@54
  _DWORD *v75; // [sp+2Ch] [bp-8Ch]@50
  void (*v76)(void); // [sp+34h] [bp-84h]@50
  signed int (__fastcall *v77)(_QWORD **, Entity *); // [sp+38h] [bp-80h]@50
  int v78; // [sp+3Ch] [bp-7Ch]@48
  int v79; // [sp+40h] [bp-78h]@48
  char *v80; // [sp+44h] [bp-74h]@48
  char *v81; // [sp+48h] [bp-70h]@48
  char *v82; // [sp+4Ch] [bp-6Ch]@48
  int v83; // [sp+54h] [bp-64h]@48
  int v84; // [sp+58h] [bp-60h]@41
  int v85; // [sp+5Ch] [bp-5Ch]@40
  int v86; // [sp+60h] [bp-58h]@38
  int v87; // [sp+64h] [bp-54h]@36
  int v88; // [sp+68h] [bp-50h]@13
  int v89; // [sp+6Ch] [bp-4Ch]@12
  char *v90; // [sp+70h] [bp-48h]@9
  int v91; // [sp+74h] [bp-44h]@15
  char *v92; // [sp+7Ch] [bp-3Ch]@15
  char *v93; // [sp+80h] [bp-38h]@15
  char *v94; // [sp+84h] [bp-34h]@15
  int v95; // [sp+8Ch] [bp-2Ch]@15
  int v96; // [sp+90h] [bp-28h]@1

  v3 = this;
  v4 = (int **)((char *)this + 20);
  v5 = a2;
  v6 = a3;
  sub_21E8AF4(&v96, (int *)this + 5);
  j_CommandOutput::set<std::string>((int)v6, "name", &v96);
  v7 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
  {
    v47 = (unsigned int *)(v96 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v5 + 24))(v5);
  v9 = (unsigned __int64 *)j_Level::getGameRules(v8);
  v10 = (GameRule *)j_GameRules::getRule(v9, v4);
  if ( *((_BYTE *)v3 + 33) )
    v11 = 1;
  else
    v12 = *((_WORD *)v3 + 17);
    if ( (_BYTE)v12 )
      v11 = 2;
      v11 = 3;
      if ( v12 < 0x100 )
        v11 = 0;
  if ( j_GameRule::getType(v10) == (unsigned __int8)v11 )
    v90 = (char *)&unk_28898CC;
    if ( v11 == 3 )
      j_Util::toString((Util *)&v85, *((float *)v3 + 6));
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v90,
        &v85);
      v27 = (void *)(v85 - 12);
      if ( (int *)(v85 - 12) != &dword_28898C0 )
      {
        v56 = (unsigned int *)(v85 - 4);
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
          j_j_j_j__ZdlPv_9(v27);
      }
      j_CommandOutput::set<float>((int)v6, "value", *((_DWORD *)v3 + 6));
      j_GameRules::setRule(&v84, v9, v4, *((_DWORD *)v3 + 6), 1);
      if ( !v84 )
        goto LABEL_45;
      v28 = j_Level::getPacketSender(v8);
      (*(void (**)(void))(*(_DWORD *)v28 + 8))();
      v15 = v84;
      if ( v11 != 2 )
        if ( v11 != 1 )
          goto LABEL_134;
        j_Util::boolToString((Util *)&v89, *((_BYTE *)v3 + 32));
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v90,
          &v89);
        v13 = (void *)(v89 - 12);
        if ( (int *)(v89 - 12) != &dword_28898C0 )
          v58 = (unsigned int *)(v89 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
          }
          else
            v59 = (*v58)--;
          if ( v59 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        j_CommandOutput::set<bool>((int)v6, "value", *((_BYTE *)v3 + 32));
        j_GameRules::setRule(&v88, v9, v4, *((_BYTE *)v3 + 32), 1);
        if ( v88 )
          v14 = j_Level::getPacketSender(v8);
          (*(void (**)(void))(*(_DWORD *)v14 + 8))();
          v15 = v88;
          goto LABEL_43;
LABEL_45:
        if ( j_GameRules::getBool(v9, (int **)&GameRules::SEND_COMMAND_FEEDBACK) != 1 )
LABEL_133:
          j_CommandOutput::success(v6);
        if ( (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v5 + 24))(v5)
          && (v29 = (Level *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 24))(v5),
              v30 = j_Level::getLevelData(v29),
              j_LevelData::isEduLevel((LevelData *)v30) == 1) )
          sub_21E94B4((void **)&v83, "commands.gamerule.success");
          sub_21E8AF4(&v78, (int *)v4);
          sub_21E8AF4(&v79, (int *)&v90);
          v80 = 0;
          v81 = 0;
          v82 = 0;
          v31 = (char *)j_operator new(8u);
          v80 = v31;
          v82 = v31 + 8;
          v81 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                          (int)&v78,
                          (int)&v80,
                          (int)v31);
          v32 = (void *)(v79 - 12);
          if ( (int *)(v79 - 12) != &dword_28898C0 )
            v64 = (unsigned int *)(v79 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v65 = __ldrex(v64);
              while ( __strex(v65 - 1, v64) );
            }
            else
              v65 = (*v64)--;
            if ( v65 <= 0 )
              j_j_j_j__ZdlPv_9(v32);
          v33 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v66 = (unsigned int *)(v78 - 4);
                v67 = __ldrex(v66);
              while ( __strex(v67 - 1, v66) );
              v67 = (*v66)--;
            if ( v67 <= 0 )
              j_j_j_j__ZdlPv_9(v33);
          v34 = j_operator new(8u);
          *v34 = &v83;
          v34[1] = &v80;
          v75 = v34;
          v76 = (void (*)(void))sub_19C8282;
          v77 = sub_19C8268;
          j_Level::forEachPlayer((int)v8, (int)&v75);
          if ( v76 )
            v76();
          v36 = (int)v81;
          v35 = v80;
          if ( v80 != v81 )
              v51 = (int *)(*(_DWORD *)v35 - 12);
              if ( v51 != &dword_28898C0 )
              {
                v49 = (unsigned int *)(*(_DWORD *)v35 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v50 = __ldrex(v49);
                  while ( __strex(v50 - 1, v49) );
                }
                else
                  v50 = (*v49)--;
                if ( v50 <= 0 )
                  j_j_j_j__ZdlPv_9(v51);
              }
              v35 += 4;
            while ( v35 != (char *)v36 );
            v35 = v80;
          if ( v35 )
            j_operator delete(v35);
          v44 = (void *)(v83 - 12);
          if ( (int *)(v83 - 12) == &dword_28898C0 )
            goto LABEL_133;
          v45 = (unsigned int *)(v83 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            goto LABEL_131;
          sub_21E94B4((void **)&v74, "commands.gamerule.success");
          j_CommandOutputParameter::CommandOutputParameter(&v69, (int *)v4);
          j_CommandOutputParameter::CommandOutputParameter(&v70, (int *)&v90);
          v71 = 0;
          v72 = 0;
          v73 = 0;
          v71 = (char *)j_operator new(0x10u);
          v73 = v71 + 16;
          v72 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                          (int)&v69,
                          (int)&v71,
                          (int)v71);
          j_CommandOutput::forceOutput(v6, &v74, (unsigned __int64 *)&v71);
          v38 = (int)v72;
          v37 = v71;
          if ( v71 != v72 )
              v41 = (int *)(*(_DWORD *)v37 - 12);
              if ( v41 != &dword_28898C0 )
                v39 = (unsigned int *)(*(_DWORD *)v37 - 4);
                    v40 = __ldrex(v39);
                  while ( __strex(v40 - 1, v39) );
                  v40 = (*v39)--;
                if ( v40 <= 0 )
                  j_j_j_j__ZdlPv_9(v41);
              v37 += 8;
            while ( v37 != (char *)v38 );
            v37 = v71;
          if ( v37 )
            j_operator delete(v37);
          v42 = (void *)(v70 - 12);
          if ( (int *)(v70 - 12) != &dword_28898C0 )
            v60 = (unsigned int *)(v70 - 4);
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          v43 = (void *)(v69 - 12);
          if ( (int *)(v69 - 12) != &dword_28898C0 )
            v62 = (unsigned int *)(v69 - 4);
                v63 = __ldrex(v62);
              while ( __strex(v63 - 1, v62) );
              v63 = (*v62)--;
            if ( v63 <= 0 )
              j_j_j_j__ZdlPv_9(v43);
          v44 = (void *)(v74 - 12);
          if ( (int *)(v74 - 12) == &dword_28898C0 )
          v45 = (unsigned int *)(v74 - 4);
LABEL_131:
            if ( v46 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
        v46 = (*v45)--;
        goto LABEL_131;
      j_Util::toString<int,(void *)0,(void *)0>((void **)&v87, *((_DWORD *)v3 + 7));
        &v87);
      v25 = (void *)(v87 - 12);
      if ( (int *)(v87 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v87 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      j_CommandOutput::set<int>((int)v6, "value", *((_DWORD *)v3 + 7));
      if ( !j_Command::validRange(*((Command **)v3 + 7), 0, 0x7FFF, (int)v6, v68) )
LABEL_134:
        v22 = v90 - 12;
        if ( (int *)(v90 - 12) == &dword_28898C0 )
          return;
        v23 = (unsigned int *)(v90 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          goto LABEL_141;
LABEL_140:
        v24 = (*v23)--;
LABEL_141:
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
        return;
      j_GameRules::setRule(&v86, v9, v4, *((_DWORD *)v3 + 7), 1);
      if ( !v86 )
      v26 = j_Level::getPacketSender(v8);
      (*(void (**)(void))(*(_DWORD *)v26 + 8))();
      v15 = v86;
LABEL_43:
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    goto LABEL_45;
  sub_21E94B4((void **)&v95, "commands.gamerule.type.invalid");
  j_CommandOutputParameter::CommandOutputParameter(&v91, (int *)v4);
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v92 = (char *)j_operator new(8u);
  v94 = v92 + 8;
  v93 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v91,
                  (int)&v92,
                  (int)v92);
  j_CommandOutput::error(v6, &v95, (unsigned __int64 *)&v92);
  v17 = (int)v93;
  v16 = v92;
  if ( v92 != v93 )
    do
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v16 += 8;
    while ( v16 != (char *)v17 );
    v16 = v92;
  if ( v16 )
    j_operator delete(v16);
  v21 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v91 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (char *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v95 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      goto LABEL_141;
    goto LABEL_140;
}


void __fastcall GameRuleCommand::~GameRuleCommand(GameRuleCommand *this)
{
  Command *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A098;
  v2 = *((_DWORD *)this + 5);
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


void __fastcall GameRuleCommand::setup(GameRuleCommand *this, Level *a2, CommandRegistry *a3)
{
  GameRuleCommand::setup(this, a2, a3);
}
