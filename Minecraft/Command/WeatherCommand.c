

void __fastcall WeatherCommand::execute(WeatherCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  WeatherCommand::execute(this, a2, a3);
}


void __fastcall WeatherCommand::~WeatherCommand(WeatherCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall WeatherCommand::setup(WeatherCommand *this, CommandRegistry *a2)
{
  WeatherCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@19
  void *v12; // r5@20
  int v13; // r6@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  int *v16; // r0@30
  void *v17; // r0@35
  void *v18; // r0@36
  __int64 v19; // r2@37
  void *v20; // r0@37
  char v21; // r0@38
  char v22; // r0@41
  int v23; // r0@44
  __int64 v24; // r2@44
  void *v25; // r0@44
  void *v26; // r0@45
  char v27; // r0@46
  int v28; // r0@49
  void *v29; // r0@49
  unsigned int *v30; // r2@51
  signed int v31; // r1@53
  unsigned int *v32; // r2@55
  signed int v33; // r1@57
  unsigned int *v34; // r2@59
  signed int v35; // r1@61
  unsigned int *v36; // r2@63
  signed int v37; // r1@65
  unsigned int *v38; // r2@67
  signed int v39; // r1@69
  unsigned int *v40; // r2@71
  signed int v41; // r1@73
  int v42; // r2@75
  signed int v43; // r1@77
  int v44; // r2@79
  signed int v45; // r1@81
  int v46; // r2@83
  signed int v47; // r1@85
  unsigned int *v48; // r2@87
  signed int v49; // r1@89
  char v50; // [sp+18h] [bp-110h]@49
  int v51; // [sp+24h] [bp-104h]@49
  __int64 v52; // [sp+40h] [bp-E8h]@46
  char v53; // [sp+48h] [bp-E0h]@44
  int v54; // [sp+54h] [bp-D4h]@44
  char v55; // [sp+70h] [bp-B8h]@41
  int v56; // [sp+7Ch] [bp-ACh]@45
  __int64 v57; // [sp+98h] [bp-90h]@38
  int v58; // [sp+A4h] [bp-84h]@37
  int v59; // [sp+A8h] [bp-80h]@20
  int v60; // [sp+ACh] [bp-7Ch]@20
  void *v61; // [sp+B0h] [bp-78h]@20
  int v62; // [sp+B4h] [bp-74h]@20
  char *v63; // [sp+B8h] [bp-70h]@20
  int v64; // [sp+C0h] [bp-68h]@20
  int v65; // [sp+C4h] [bp-64h]@1
  int v66; // [sp+C8h] [bp-60h]@1
  int v67; // [sp+CCh] [bp-5Ch]@1
  int v68; // [sp+D0h] [bp-58h]@1
  int v69; // [sp+D4h] [bp-54h]@1
  int v70; // [sp+D8h] [bp-50h]@1
  void *v71; // [sp+DCh] [bp-4Ch]@1
  int v72; // [sp+E0h] [bp-48h]@1
  char *v73; // [sp+E4h] [bp-44h]@1
  int v74; // [sp+ECh] [bp-3Ch]@1
  __int16 v75; // [sp+100h] [bp-28h]@44
  __int16 v76; // [sp+104h] [bp-24h]@41

  v2 = this;
  sub_21E94B4((void **)&v74, "WeatherType");
  sub_21E94B4((void **)&v65, "clear");
  v66 = 0;
  sub_21E94B4((void **)&v67, "rain");
  v68 = 1;
  sub_21E94B4((void **)&v69, "thunder");
  v70 = 2;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v3 = j_operator new(0x18u);
  v71 = v3;
  v73 = (char *)v3 + 24;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,WeatherCommand::WeatherType> const*,std::pair<std::string,WeatherCommand::WeatherType>*>(
         (int)&v65,
         (int)&v71,
         (int)v3);
  v72 = v4;
  j_CommandRegistry::addEnumValues<WeatherCommand::WeatherType>((int)v2, (int)&v74, (unsigned __int64 *)&v71);
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
    v3 = v71;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v67 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v65 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v74 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v64, "WeatherQuery");
  sub_21E94B4((void **)&v59, "query");
  v60 = 1;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v12 = j_operator new(8u);
  v61 = v12;
  v63 = (char *)v12 + 8;
  v13 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,WeatherCommand::WeatherRequest> const*,std::pair<std::string,WeatherCommand::WeatherRequest>*>(
          (int)&v59,
          (int)&v61,
          (int)v12);
  v62 = v13;
  j_CommandRegistry::addEnumValues<WeatherCommand::WeatherRequest>((int)v2, (int)&v64, (unsigned __int64 *)&v61);
  if ( v12 != (void *)v13 )
      v16 = (int *)(*(_DWORD *)v12 - 12);
      if ( v16 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v12 = (char *)v12 + 8;
    while ( v12 != (void *)v13 );
    v12 = v61;
  if ( v12 )
    j_operator delete(v12);
  v17 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v59 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v64 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v58, "weather");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v58, "commands.weather.description", 1, 0, 0);
  v20 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v42 = v58 - 4;
        v43 = __ldrex((unsigned int *)v19);
        HIDWORD(v19) = v43 - 1;
      while ( __strex(v43 - 1, (unsigned int *)v19) );
      v43 = *(_DWORD *)v19;
      HIDWORD(v19) = *(_DWORD *)v19 - 1;
      *(_DWORD *)v19 = HIDWORD(v19);
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  LODWORD(v19) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v57, 1, v19);
  v21 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id;
  __dmb();
  if ( !(v21 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id) )
    type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id);
  v76 = type_id<CommandRegistry,WeatherCommand::WeatherType>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v55,
    &v76,
    (unsigned int)CommandRegistry::parse<WeatherCommand::WeatherType>,
    "type",
    0,
    24,
    -1);
  v22 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v22 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v75 = type_id<CommandRegistry,int>(void)::id;
  v23 = j_CommandParameterData::CommandParameterData(
          (int)&v53,
          &v75,
          (unsigned int)CommandRegistry::parse<int>,
          "duration",
          0,
          28,
          1,
          -1);
  j_CommandRegistry::registerOverload<WeatherCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "weather",
    v57,
    v23);
  v25 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v44 = v54 - 4;
        v45 = __ldrex((unsigned int *)v24);
        HIDWORD(v24) = v45 - 1;
      while ( __strex(v45 - 1, (unsigned int *)v24) );
      v45 = *(_DWORD *)v24;
      HIDWORD(v24) = *(_DWORD *)v24 - 1;
      *(_DWORD *)v24 = HIDWORD(v24);
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v46 = v56 - 4;
        v47 = __ldrex((unsigned int *)v24);
        HIDWORD(v24) = v47 - 1;
      while ( __strex(v47 - 1, (unsigned int *)v24) );
      v47 = *(_DWORD *)v24;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  LODWORD(v24) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v52, 1, v24);
  v27 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id;
  if ( !(v27 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id) )
    type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id);
  v76 = type_id<CommandRegistry,WeatherCommand::WeatherRequest>(void)::id;
  v28 = j_CommandParameterData::CommandParameterData(
          (int)&v50,
          &v76,
          (unsigned int)CommandRegistry::parse<WeatherCommand::WeatherRequest>,
          "query",
          20,
  j_CommandRegistry::registerOverload<WeatherCommand,CommandParameterData>((int)v2, "weather", v52, v28);
  v29 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v51 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


void __fastcall WeatherCommand::execute(WeatherCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r8@1
  WeatherCommand *v4; // r9@1
  CommandOutput *v5; // r10@1
  Level *v6; // r4@1
  char *v7; // r11@1
  signed int v8; // r4@3
  unsigned int v9; // r0@4
  int v10; // r1@4
  signed int v11; // r2@4
  int v12; // r0@5
  int *v13; // r4@5
  int v14; // r7@5
  Command *v15; // r5@6
  int v16; // r0@9
  const char *v21; // r7@10
  const char *v22; // r4@12
  unsigned int v23; // r0@12
  void *v24; // r4@12
  void *v25; // r6@12
  unsigned int *v26; // r2@14
  signed int v27; // r1@16
  int *v28; // r0@22
  void *v29; // r0@27
  void *v30; // r0@28
  void *v31; // r0@29
  void *v32; // r0@30
  unsigned int *v33; // r2@31
  signed int v34; // r1@33
  Dimension *v37; // r0@39
  float v38; // r1@39
  Weather *v39; // r6@40
  Player *v41; // r5@42
  __int64 v42; // r2@42
  int v43; // r1@42
  Player *v44; // r0@42
  float v45; // r1@44
  __int64 v47; // r2@45
  Player *v48; // r0@45
  int v49; // r1@45
  void *v50; // r4@47
  void *v51; // r6@47
  unsigned int *v52; // r2@49
  signed int v53; // r1@51
  int *v54; // r0@57
  unsigned int *v55; // r2@64
  signed int v56; // r1@66
  unsigned int *v57; // r2@68
  signed int v58; // r1@70
  unsigned int *v59; // r2@72
  signed int v60; // r1@74
  CommandOutput *v61; // [sp+0h] [bp-A88h]@0
  Player *v62; // [sp+8h] [bp-A80h]@4
  __int64 v63; // [sp+Ch] [bp-A7Ch]@47
  int v64; // [sp+14h] [bp-A74h]@47
  int v65; // [sp+1Ch] [bp-A6Ch]@47
  char v66; // [sp+20h] [bp-A68h]@46
  int v67; // [sp+24h] [bp-A64h]@46
  int v68; // [sp+28h] [bp-A60h]@46
  int v69; // [sp+2Ch] [bp-A5Ch]@45
  int v70; // [sp+30h] [bp-A58h]@45
  int v71; // [sp+34h] [bp-A54h]@45
  char v72; // [sp+38h] [bp-A50h]@43
  int v73; // [sp+3Ch] [bp-A4Ch]@43
  int v74; // [sp+40h] [bp-A48h]@43
  int v75; // [sp+44h] [bp-A44h]@42
  int v76; // [sp+48h] [bp-A40h]@42
  int v77; // [sp+4Ch] [bp-A3Ch]@42
  unsigned int v78; // [sp+50h] [bp-A38h]@4
  unsigned int v79; // [sp+54h] [bp-A34h]@4
  int v80; // [sp+A14h] [bp-74h]@4
  char v81; // [sp+A18h] [bp-70h]@4
  int v82; // [sp+A1Ch] [bp-6Ch]@4
  int v83; // [sp+A20h] [bp-68h]@6
  int v84; // [sp+A24h] [bp-64h]@12
  int v85; // [sp+A28h] [bp-60h]@12
  void *ptr; // [sp+A30h] [bp-58h]@12
  void *v87; // [sp+A34h] [bp-54h]@12
  char *v88; // [sp+A38h] [bp-50h]@12
  int v89; // [sp+A40h] [bp-48h]@12
  int v90; // [sp+A48h] [bp-40h]@12

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 24))(a2);
  v7 = j_Level::getLevelData(v6);
  if ( *((_DWORD *)v4 + 5) == 1 )
  {
    if ( j_LevelData::isLightning((LevelData *)v7) )
      v8 = 2;
    else
      v8 = j_LevelData::isRaining((LevelData *)v7);
    sub_21E94B4((void **)&v90, "%commands.weather.query.");
    sub_21E94B4((void **)&v89, "commands.weather.query");
    sub_21E8AF4(&v84, &v90);
    v22 = off_271A2D4[v8];
    v23 = j_strlen_0(v22);
    sub_21E7408((const void **)&v84, (char *)v22, v23);
    j_CommandOutputParameter::CommandOutputParameter(&v85, &v84);
    ptr = 0;
    v87 = 0;
    v88 = 0;
    ptr = j_operator new(8u);
    v88 = (char *)ptr + 8;
    v87 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v85,
                    (int)&ptr,
                    (int)ptr);
    j_CommandOutput::success((int)v5, &v89, (unsigned __int64 *)&ptr);
    v24 = ptr;
    v25 = v87;
    if ( ptr != v87 )
    {
      do
      {
        v28 = (int *)(*(_DWORD *)v24 - 12);
        if ( v28 != &dword_28898C0 )
        {
          v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
          }
          else
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        }
        v24 = (char *)v24 + 8;
      }
      while ( v24 != v25 );
      v24 = ptr;
    }
    if ( v24 )
      j_operator delete(v24);
    v29 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v85 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
      else
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v84 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v31 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v89 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v32 = (void *)(v90 - 12);
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v90 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        goto LABEL_81;
LABEL_80:
      v34 = (*v33)--;
LABEL_81:
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
      return;
  }
  else
    v62 = v6;
    v9 = sub_21E67AC((int)&Random::mRandomDevice);
    v78 = v9;
    v80 = 625;
    v10 = 0;
    v11 = 1;
    v81 = 0;
    v82 = 0;
    v79 = v9;
    do
      v12 = v9 ^ (v9 >> 30);
      v13 = (int *)(&v78 + v10);
      v14 = v10++ + 1812433253 * v12;
      v9 = v11++ + 1812433253 * v12;
      v13[2] = v14 + 1;
    while ( v10 != 397 );
    v80 = 624;
    v83 = 398;
    v15 = (Command *)*((_DWORD *)v4 + 7);
    if ( !v15 )
      v15 = (Command *)(20 * (j_Random::_genRandInt32((Random *)&v78) % 0x258) + 6000);
    if ( j_Command::validRange(v15, 1, 1000000, (int)v5, v61) == 1 )
      v16 = *((_DWORD *)v4 + 6);
      if ( v16 == 1 )
        __asm
          VMOV.F32        S18, #1.0
          VLDR            S16, =0.0
        v21 = "commands.weather.rain";
          VMOV.F32        S0, #1.0
          VLDR            S18, =0.0
        v21 = "commands.weather.thunder";
        if ( v16 == 2 )
          __asm { VMOVEQ.F32      S18, S0 }
        else
          v21 = "commands.weather.clear";
        __asm { VMOV.F32        S16, S18 }
      __asm { VMOV            R4, S18 }
      j_LevelData::setRainLevel((LevelData *)v7, _R4);
      j_LevelData::setRainTime((LevelData *)v7, (int)v15);
      j_LevelData::setLightningTime((LevelData *)v7, (int)v15);
      __asm { VMOV            R5, S16 }
      j_LevelData::setLightningLevel((LevelData *)v7, _R5);
      v37 = (Dimension *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 28))(v3);
      if ( v37 )
        v39 = (Weather *)j_Dimension::getWeather(v37);
        j_Weather::setRainLevel(v39, _R4);
        j_Weather::setLightningLevel(v39, _R5);
      __asm
        VCMPE.F32       S18, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        LODWORD(v42) = &v72;
        *(_DWORD *)&v72 = 0;
        v73 = 0;
        v43 = 3003;
        v41 = v62;
        HIDWORD(v42) = 0;
        v74 = 0;
        v44 = v62;
        __asm { VLDR            S0, =65535.0 }
        v75 = 0;
        v76 = 0;
        __asm { VMUL.F32        S0, S18, S0 }
        v77 = 0;
        __asm { VMOV            R0, S0 }
        HIDWORD(v42) = j_mce::Math::floor(_R0, v38);
        LODWORD(v42) = &v75;
        v43 = 3001;
      j_Level::broadcastLevelEvent(v44, v43, v42, 0);
        VCMPE.F32       S16, #0.0
        LODWORD(v47) = &v66;
        *(_DWORD *)&v66 = 0;
        v67 = 0;
        v49 = 3004;
        v68 = 0;
        HIDWORD(v47) = 0;
        v48 = v41;
        v69 = 0;
        v70 = 0;
        __asm { VMUL.F32        S0, S16, S0 }
        v71 = 0;
        HIDWORD(v47) = j_mce::Math::floor(_R0, v45);
        LODWORD(v47) = &v69;
        v49 = 3002;
      j_Level::broadcastLevelEvent(v48, v49, v47, 0);
      sub_21E94B4((void **)&v65, v21);
      v63 = 0LL;
      v64 = 0;
      j_CommandOutput::success((int)v5, &v65, (unsigned __int64 *)&v63);
      v51 = (void *)HIDWORD(v63);
      v50 = (void *)v63;
      if ( (_DWORD)v63 != HIDWORD(v63) )
          v54 = (int *)(*(_DWORD *)v50 - 12);
          if ( v54 != &dword_28898C0 )
            v52 = (unsigned int *)(*(_DWORD *)v50 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
            }
            else
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v54);
          v50 = (char *)v50 + 8;
        while ( v50 != v51 );
        v50 = (void *)v63;
      if ( v50 )
        j_operator delete(v50);
      v32 = (void *)(v65 - 12);
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v65 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          goto LABEL_81;
        goto LABEL_80;
}


void __fastcall WeatherCommand::~WeatherCommand(WeatherCommand *this)
{
  WeatherCommand::~WeatherCommand(this);
}


int __fastcall WeatherCommand::WeatherCommand(Command *a1)
{
  int result; // r0@1

  result = j_Command::Command(a1);
  *(_DWORD *)result = &off_271A2C8;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


void __fastcall WeatherCommand::setup(WeatherCommand *this, CommandRegistry *a2)
{
  WeatherCommand::setup(this, a2);
}
