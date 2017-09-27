

void __fastcall ToggleDownfallCommand::~ToggleDownfallCommand(ToggleDownfallCommand *this)
{
  ToggleDownfallCommand::~ToggleDownfallCommand(this);
}


void __fastcall ToggleDownfallCommand::~ToggleDownfallCommand(ToggleDownfallCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall ToggleDownfallCommand::execute(ToggleDownfallCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r5@1
  CommandOutput *v4; // r8@1
  Level *v5; // r9@1
  char *v6; // r7@1
  Dimension *v8; // r0@1
  Weather *v14; // r0@4
  Weather *v15; // r4@4
  unsigned int v16; // r0@5
  void *v17; // r4@6
  void *v18; // r6@6
  unsigned int *v19; // r2@8
  signed int v20; // r1@10
  int *v21; // r0@16
  void *v22; // r0@21
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  int v25; // r5@27
  float v27; // r1@31
  int v28; // r0@32
  Player *v29; // r0@32
  int v30; // r1@32
  __int64 v31; // r2@32
  void *v33; // r4@34
  void *v34; // r6@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  int *v37; // r0@44
  __int64 v38; // [sp+4h] [bp-5Ch]@34
  int v39; // [sp+Ch] [bp-54h]@34
  int v40; // [sp+14h] [bp-4Ch]@34
  __int64 v41; // [sp+18h] [bp-48h]@6
  int v42; // [sp+20h] [bp-40h]@6
  int v43; // [sp+28h] [bp-38h]@6

  v3 = a2;
  v4 = a3;
  v5 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 24))(a2);
  v6 = j_Level::getLevelData(v5);
  _R4 = j_LevelData::getRainLevel((LevelData *)v6);
  v8 = (Dimension *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 28))(v3);
  if ( v8 )
  {
    __asm { VMOV            S16, R4 }
    _R10 = 100;
    __asm
    {
      VCMPE.F32       S16, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !_ZF )
      _R10 = 0;
    v14 = (Weather *)j_Dimension::getWeather(v8);
    v15 = v14;
    if ( _ZF )
      v16 = j_Weather::calcRainDuration(v14);
    else
      v16 = j_Weather::calcRainCycleTime(v14);
      VMOV            S0, R10
      VLDR            S2, =0.01
      VLDR            S18, =0.0
    v25 = v16;
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, #0.0
      VCMPE.F32       S0, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S18, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S18, S2 }
    __asm { VMOV            R6, S18 }
    j_LevelData::setRainLevel((LevelData *)v6, _R6);
    j_LevelData::setRainTime((LevelData *)v6, v25);
    j_Weather::setRainLevel(v15, _R6);
      __asm
      {
        VLDR            S0, =65535.0
        VMUL.F32        S0, S18, S0
        VMOV            R0, S0
      }
      HIDWORD(v31) = j_mce::Math::floor(_R0, v27);
      v30 = 3001;
      LODWORD(v31) = &Vec3::ZERO;
      v29 = v5;
      j_LevelData::setLightningLevel((LevelData *)v6, 0.0);
      v28 = j_Weather::calcLightningCycleTime(v15);
      j_LevelData::setLightningTime((LevelData *)v6, v28);
      j_Weather::setLightningLevel(v15, 0.0);
      j_Level::broadcastLevelEvent(v5, 3003, (unsigned int)&Vec3::ZERO, 0);
      v30 = 3004;
      HIDWORD(v31) = 0;
    j_Level::broadcastLevelEvent(v29, v30, v31, 0);
    j_CommandOutput::set<int>((int)v4, "rainLevel", _R10);
    sub_21E94B4((void **)&v40, "commands.downfall.success");
    v38 = 0LL;
    v39 = 0;
    j_CommandOutput::success((int)v4, &v40, (unsigned __int64 *)&v38);
    v34 = (void *)HIDWORD(v38);
    v33 = (void *)v38;
    if ( (_DWORD)v38 != HIDWORD(v38) )
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
      v33 = (void *)v38;
    if ( v33 )
      j_operator delete(v33);
    v22 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) == &dword_28898C0 )
      return;
    v23 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
      __dmb();
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      goto LABEL_56;
LABEL_55:
    v24 = (*v23)--;
LABEL_56:
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
    return;
  }
  sub_21E94B4((void **)&v43, "commands.generic.dimension.notFound");
  v41 = 0LL;
  v42 = 0;
  j_CommandOutput::error(v4, &v43, (unsigned __int64 *)&v41);
  v18 = (void *)HIDWORD(v41);
  v17 = (void *)v41;
  if ( (_DWORD)v41 != HIDWORD(v41) )
    do
      v21 = (int *)(*(_DWORD *)v17 - 12);
      if ( v21 != &dword_28898C0 )
        v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        else
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v17 = (char *)v17 + 8;
    while ( v17 != v18 );
    v17 = (void *)v41;
  if ( v17 )
    j_operator delete(v17);
  v22 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v43 - 4);
    goto LABEL_55;
}


void __fastcall ToggleDownfallCommand::setup(ToggleDownfallCommand *this, CommandRegistry *a2)
{
  ToggleDownfallCommand::setup(this, a2);
}


void __fastcall ToggleDownfallCommand::execute(ToggleDownfallCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  ToggleDownfallCommand::execute(this, a2, a3);
}


void __fastcall ToggleDownfallCommand::setup(ToggleDownfallCommand *this, CommandRegistry *a2)
{
  ToggleDownfallCommand *v2; // r5@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  int v5; // r2@3
  signed int v6; // r1@5
  __int64 v7; // [sp+8h] [bp-28h]@2
  int v8; // [sp+14h] [bp-1Ch]@1

  v2 = this;
  sub_21E94B4((void **)&v8, "toggledownfall");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v8, "commands.toggledownfall.description", 1, 0, 0);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v5 = v8 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v6 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v6 - 1;
      }
      while ( __strex(v6 - 1, (unsigned int *)v3) );
    }
    else
      v6 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v7, 1, v3);
  j_j__ZN15CommandRegistry16registerOverloadI21ToggleDownfallCommandJEEEvPKc14CommandVersionDpRKT0_(
    (int)v2,
    "toggledownfall",
    v7);
}
