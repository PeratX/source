

int __fastcall WorldSettingsScreenController::WorldSettingsScreenController(int a1, int a2, int a3, int a4)
{
  MinecraftScreenModel **v4; // r5@1
  int v5; // r4@1
  int v6; // r8@1
  int v7; // r11@1
  int v8; // r0@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r7@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r6@14
  unsigned int v15; // r0@16
  signed int v16; // r0@23
  double v17; // r0@26
  MinecraftScreenModel *v18; // r6@26
  void *v19; // r5@26
  int v21; // [sp+4h] [bp-34h]@1
  int v22; // [sp+8h] [bp-30h]@1

  v4 = (MinecraftScreenModel **)a2;
  v5 = a1;
  v6 = a4;
  v21 = *(_DWORD *)a2;
  v7 = a3;
  v8 = *(_DWORD *)(a2 + 4);
  v22 = v8;
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  SettingsScreenControllerBase::SettingsScreenControllerBase(v5, (int)&v21);
  v11 = v22;
  if ( v22 )
    v12 = (unsigned int *)(v22 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E412C;
  if ( v6 == 1 && MinecraftScreenModel::isPreGame(*v4) )
    v16 = 2;
  else
    v16 = MinecraftScreenModel::isPreGame(*v4);
    if ( v16 )
      v16 = 3;
  *(_DWORD *)(v5 + 516) = v16;
  Util::toString<int,(void *)0,(void *)0>((void **)(v5 + 520), *(_DWORD *)(v7 + 20));
  sub_21E94B4((void **)(v5 + 524), (const char *)&unk_257BC67);
  LevelSummary::LevelSummary((int *)(v5 + 528), (int *)v7);
  LODWORD(v17) = v5 + 592;
  LevelData::LevelData(v17);
  MainMenuScreenModel::createContentManager((MainMenuScreenModel *)(v5 + 960), *(_DWORD *)(v5 + 424));
  v18 = *v4;
  v19 = operator new(0x1Cu);
  DlcPreCheckScreenHandler::DlcPreCheckScreenHandler((int)v19, v5, (int)v18);
  *(_DWORD *)(v5 + 964) = v19;
  *(_DWORD *)(v5 + 968) = &off_26E4110;
  *(_DWORD *)(v5 + 972) = v5 + 592;
  *(_DWORD *)(v5 + 976) = 0;
  *(_DWORD *)(v5 + 980) = 0;
  *(_BYTE *)(v5 + 992) = 0;
  *(_BYTE *)(v5 + 993) = 0;
  *(_DWORD *)(v5 + 996) = 818010429;
  *(_BYTE *)(v5 + 1000) = 0;
  WorldSettingsScreenController::_init((WorldSettingsScreenController *)v5);
  return v5;
}


int __fastcall WorldSettingsScreenController::_exportWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  void *v2; // r0@5
  void *v3; // r0@6
  unsigned int *v5; // r12@10
  signed int v6; // r1@12
  unsigned int *v7; // r12@14
  signed int v8; // r1@16
  int v9; // [sp+Ch] [bp-6Ch]@5
  int v10; // [sp+14h] [bp-64h]@5
  char v11; // [sp+18h] [bp-60h]@5

  v1 = this;
  if ( (unsigned int)(*((_DWORD *)this + 129) - 1) >= 2
    && !MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)this + 106)) )
  {
    WorldSettingsScreenController::_saveWorld(v1);
    if ( *((_DWORD *)v1 + 129) == 3 )
    {
      MinecraftScreenController::exportWorld((int)v1, (int *)v1 + 132, (int *)v1 + 133, 0);
    }
    else
      MinecraftScreenModel::generateFilePickerSettingsForExport((MinecraftScreenModel *)&v11, *((_DWORD *)v1 + 106));
      sub_21E94B4((void **)&v10, "FileBrowser.Rift.Export");
      sub_21E94B4((void **)&v9, "FileBrowser.Rift.ExportWorld");
      MinecraftScreenController::showPickFileDialog((int)v1, (int)&v11, &v10, &v9);
      v2 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
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
          j_j_j_j__ZdlPv_9(v2);
      }
      v3 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v10 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v3);
      FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v11);
    MinecraftScreenModel::triggerWorldExportedTelemetry(
      *((MinecraftScreenModel **)v1 + 95),
      *((_QWORD *)v1 + 70),
      *((_DWORD *)v1 + 137),
      *((_QWORD *)v1 + 70));
  }
  return 0;
}


int __fastcall WorldSettingsScreenController::_isNotTrial(WorldSettingsScreenController *this)
{
  return MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)this + 106)) ^ 1;
}


int __fastcall WorldSettingsScreenController::WorldSettingsScreenController(int a1, int a2, int a3)
{
  MinecraftScreenModel **v3; // r5@1
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  signed int v14; // r0@22
  double v15; // r0@24
  MinecraftScreenModel *v16; // r6@24
  void *v17; // r5@24
  int v19; // [sp+Ch] [bp-34h]@1
  int v20; // [sp+10h] [bp-30h]@1

  v3 = (MinecraftScreenModel **)a2;
  v4 = a1;
  v5 = a3;
  v19 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  v20 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  SettingsScreenControllerBase::SettingsScreenControllerBase(v4, (int)&v19);
  v9 = v20;
  if ( v20 )
    v10 = (unsigned int *)(v20 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v4 = &off_26E412C;
  if ( v5 == 1 )
    v14 = MinecraftScreenModel::isPreGame(*v3);
  else
    v14 = 0;
  *(_DWORD *)(v4 + 516) = v14;
  sub_21E94B4((void **)(v4 + 520), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v4 + 524), (const char *)&unk_257BC67);
  LevelSummary::LevelSummary((int *)(v4 + 528));
  LODWORD(v15) = v4 + 592;
  LevelData::LevelData(v15);
  MainMenuScreenModel::createContentManager((MainMenuScreenModel *)(v4 + 960), *(_DWORD *)(v4 + 424));
  v16 = *v3;
  v17 = operator new(0x1Cu);
  DlcPreCheckScreenHandler::DlcPreCheckScreenHandler((int)v17, v4, (int)v16);
  *(_DWORD *)(v4 + 964) = v17;
  *(_DWORD *)(v4 + 968) = &off_26E4110;
  *(_DWORD *)(v4 + 972) = v4 + 592;
  *(_DWORD *)(v4 + 976) = 0;
  *(_DWORD *)(v4 + 980) = 0;
  *(_BYTE *)(v4 + 992) = 0;
  *(_BYTE *)(v4 + 993) = 0;
  *(_DWORD *)(v4 + 996) = 818010429;
  *(_BYTE *)(v4 + 1000) = 0;
  WorldSettingsScreenController::_init((WorldSettingsScreenController *)v4);
  return v4;
}


signed int __fastcall WorldSettingsScreenController::_setAlwaysDay(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r4@1
  int v3; // r5@1
  LevelData *v4; // r4@2
  unsigned __int64 *v5; // r0@4
  signed int result; // r0@4
  int v7; // r0@8
  unsigned int v8; // r2@8
  char *v9; // r1@8
  void *v10; // r0@11
  int v11; // r0@13
  int v12; // r2@13
  void *v13; // r0@16
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+8h] [bp-30h]@13
  int v19; // [sp+Ch] [bp-2Ch]@13
  int v20; // [sp+10h] [bp-28h]@8
  int v21; // [sp+18h] [bp-20h]@8
  int v22; // [sp+1Ch] [bp-1Ch]@8
  int v23; // [sp+20h] [bp-18h]@4

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 129) )
  {
    v4 = (WorldSettingsScreenController *)((char *)this + 592);
    if ( a2 == 1 )
      LevelData::setTime(v4, 5000);
    v5 = (unsigned __int64 *)LevelData::getGameRules(v4);
    GameRules::setRule(&v23, v5, (int **)&GameRules::DO_DAYLIGHT_CYCLE, v3 ^ 1, 0);
    result = v23;
    if ( v23 )
      result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
    v23 = 0;
  }
  else
    result = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106));
    if ( !result )
    {
      v7 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v2 + 106));
      (*(void (__fastcall **)(int *))(*(_DWORD *)v7 + 60))(&v22);
      sub_21E94B4((void **)&v21, "/daylock ");
      sub_21E8AF4(&v20, &v21);
      v8 = 5;
      v9 = "true";
      if ( v3 )
        v8 = 4;
      else
        v9 = "false";
      sub_21E7408((const void **)&v20, v9, v8);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v21, &v20);
      v10 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v14 = (unsigned int *)(v20 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      if ( v22 )
        v11 = MinecraftScreenModel::getCommands(*((MinecraftScreenModel **)v2 + 106));
        v12 = v22;
        v22 = 0;
        v19 = v12;
        v18 = MinecraftCommands::requestCommandExecution(v11, &v19, &v21, 3, 1);
        MCRESULT::isSuccess((MCRESULT *)&v18);
        if ( v19 )
          (*(void (**)(void))(*(_DWORD *)v19 + 4))();
        v19 = 0;
      v13 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v21 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      result = v22;
        result = (*(int (**)(void))(*(_DWORD *)v22 + 4))();
    }
  return result;
}


int __fastcall WorldSettingsScreenController::_setWorldGameMode(__int64 this)
{
  __int64 v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _DWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@12
  int *v9; // r7@12
  unsigned int v10; // r0@16
  signed int v11; // r0@22
  int v12; // r0@23
  bool v13; // zf@24
  int result; // r0@34
  unsigned int *v15; // r2@35
  unsigned int v16; // r1@37
  char v17; // [sp+4h] [bp-3Ch]@29
  void (*v18)(void); // [sp+Ch] [bp-34h]@28
  int v19; // [sp+10h] [bp-30h]@29
  _DWORD *v20; // [sp+14h] [bp-2Ch]@12
  void (*v21)(void); // [sp+1Ch] [bp-24h]@7
  int (__fastcall *v22)(int, int); // [sp+20h] [bp-20h]@12
  char v23; // [sp+24h] [bp-1Ch]@1
  int v24; // [sp+28h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<WorldSettingsScreenController>((int)&v23, this);
  v2 = *(_QWORD *)&v23;
  if ( v24 )
  {
    v3 = (unsigned int *)(v24 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v21 = 0;
  v5 = operator new(0xCu);
  *(_QWORD *)v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
    v5[2] = HIDWORD(v1);
    v20 = v5;
    v21 = (void (*)(void))sub_129A15C;
    v22 = sub_129A00C;
    v9 = (int *)&v22;
        v10 = __ldrex(v6);
      while ( __strex(v10 - 1, v6) );
      v10 = (*v6)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  else
    HIDWORD(v8) = sub_129A00C;
    LODWORD(v8) = sub_129A15C;
    *(_QWORD *)&v21 = v8;
  if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
    v11 = LevelData::achievementsWillBeDisabledOnLoad((LevelData *)(v1 + 592));
    v12 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    v11 = (*(int (**)(void))(*(_DWORD *)v12 + 16))();
  v13 = HIDWORD(v1) == 1;
  if ( HIDWORD(v1) == 1 )
    v13 = (v11 ^ 1) == 1;
  if ( v13 )
    v18 = 0;
    if ( v21 )
      ((void (__fastcall *)(char *, _DWORD **, signed int))v21)(&v17, &v20, 2);
      v19 = *v9;
      v18 = v21;
    SettingsScreenControllerBase::confirmationNoAchievementsDialog(v1, (int)&v17);
    if ( v18 )
      v18();
    WorldSettingsScreenController::_setWorldGameModeHelper(v1);
  if ( v21 )
    v21();
  result = v24;
    v15 = (unsigned int *)(v24 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall WorldSettingsScreenController::_setServerVisible(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r5@1
  int v3; // r4@1
  int result; // r0@3
  int v5; // r0@5
  Option *v6; // r0@5
  BoolOption *v7; // r5@5

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 129) )
  {
    LevelData::setLANBroadcast((WorldSettingsScreenController *)((char *)this + 592), a2);
LABEL_5:
    v5 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v2 + 106));
    v6 = (Option *)Options::get(v5, 4);
    v7 = v6;
    result = Option::hasOverrideSource(v6);
    if ( !result )
      result = j_j_j__ZN10BoolOption3setEb_1(v7, v3);
    return result;
  }
  result = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106));
  if ( !result )
    result = MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v2 + 106));
      goto LABEL_5;
  return result;
}


int __fastcall WorldSettingsScreenController::_setDefaultPermissionLevelHelper(WorldSettingsScreenController *this, int a2)
{
  int v2; // r6@1
  WorldSettingsScreenController *v3; // r4@1
  char *v4; // r0@3
  int result; // r0@3
  LevelData *v6; // r0@5
  int v7; // r4@5
  char *v8; // r0@5
  signed int v9; // [sp+0h] [bp-18h]@5
  signed int v10; // [sp+4h] [bp-14h]@5

  v2 = a2;
  v3 = this;
  if ( a2 == 2 )
    WorldSettingsScreenController::_setAllowCheatsHelper(this, 1);
  v4 = LevelData::getDefaultAbilities((WorldSettingsScreenController *)((char *)v3 + 592));
  Abilities::setPlayerPermissions((PermissionsHandler **)v4, v2);
  result = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v3 + 106));
  if ( !result )
  {
    result = MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v3 + 106));
    if ( !result )
    {
      v9 = -1;
      v10 = -1;
      v6 = (WorldSettingsScreenController *)((char *)v3 + 592);
      v7 = *((_DWORD *)v3 + 95);
      v8 = LevelData::getDefaultAbilities(v6);
      result = MinecraftScreenModel::sendSetAbilitiesPacket(v7, (int)v8, (unsigned __int64 *)&v9, 1);
    }
  }
  return result;
}


signed int __fastcall WorldSettingsScreenController::_setWorldTypeHelper(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r5@1
  int v3; // r4@1
  signed int result; // r0@1

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 129);
  if ( result == 1 )
  {
    result = MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v2 + 106));
    if ( !result )
    {
      if ( v3 == 2 )
      {
        LevelData::setGameType((int)v2 + 592, 1);
        WorldSettingsScreenController::_setAllowCheatsHelper(v2, 1);
        LevelData::disableAchievements((WorldSettingsScreenController *)((char *)v2 + 592));
      }
      result = j_j_j__ZN9LevelData12setGeneratorE13GeneratorType((int)v2 + 592, v3);
    }
  }
  return result;
}


int __fastcall WorldSettingsScreenController::_isAlwaysDayEnabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@3
  MinecraftScreenModel **v3; // r5@4
  int v4; // r0@6
  int v5; // r0@12
  int v6; // r4@13

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    if ( LevelData::hasCommandsEnabled((WorldSettingsScreenController *)((char *)this + 592)) != 1 )
      return 0;
    v3 = (MinecraftScreenModel **)((char *)v1 + 424);
  }
  else
    v3 = (MinecraftScreenModel **)((char *)this + 424);
    if ( !MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    {
      v4 = MinecraftScreenModel::getClientModel(*v3);
      if ( (*(int (**)(void))(*(_DWORD *)v4 + 8))() != 1 )
        return 0;
    }
  if ( MinecraftScreenModel::isTrial(*v3) )
    result = 0;
    v6 = 1;
    if ( !MinecraftScreenModel::isPreGame(*v3) && MinecraftScreenModel::isMultiPlayerClient(*v3) == 1 )
      v5 = MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v1 + 95));
      if ( Abilities::getBool(v5, &Abilities::OPERATOR) != 1 )
        v6 = 0;
    result = (MinecraftScreenModel::isTrial(*v3) ^ 1) & v6;
  return result;
}


int __fastcall WorldSettingsScreenController::_hasAchievementsDisabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    result = LevelData::hasAchievementsDisabled((WorldSettingsScreenController *)((char *)v1 + 592));
  }
  else
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 20))();
  return result;
}


int __fastcall WorldSettingsScreenController::_setBonusChest(int result, bool a2)
{
  if ( (unsigned int)(*(_DWORD *)(result + 516) - 1) <= 1 )
    result = j_j_j__ZN9LevelData20setBonusChestEnabledEb((LevelData *)(result + 592), a2);
  return result;
}


int __fastcall WorldSettingsScreenController::_copyWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  signed int v2; // r0@3
  MinecraftScreenModel *v3; // r4@3
  int *v4; // r0@5
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  int v18; // [sp+Ch] [bp-2Ch]@5
  int v19; // [sp+14h] [bp-24h]@5
  int v20; // [sp+1Ch] [bp-1Ch]@5
  int v21; // [sp+20h] [bp-18h]@5

  v1 = this;
  if ( *((_DWORD *)this + 129) == 3 && !MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)this + 106)) )
  {
    WorldSettingsScreenController::_saveWorld(v1);
    v2 = MinecraftScreenModel::copyWorld(*((_DWORD *)v1 + 95), (int *)v1 + 132);
    v3 = (MinecraftScreenModel *)*((_DWORD *)v1 + 95);
    if ( v2 == 1 )
    {
      MinecraftScreenModel::leaveScreen(v3);
    }
    else
      sub_21E94B4((void **)&v20, "gui.copyWorld.failedMessage");
      I18n::get(&v21, (int **)&v20);
      sub_21E94B4((void **)&v19, (const char *)&unk_257BC67);
      v4 = (int *)sub_21E94B4((void **)&v18, (const char *)&unk_257BC67);
      MinecraftScreenModel::pushToast((int)v3, 6, &v21, &v19, v4);
      v5 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v18 - 4);
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
          j_j_j_j__ZdlPv_9(v5);
      }
      v6 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v19 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      v7 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v21 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      v8 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v20 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
  }
  return 0;
}


int __fastcall WorldSettingsScreenController::_isWorldSeedEnabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( *((_DWORD *)this + 129) != 1 || MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) != 1 )
    result = 0;
  else
    result = MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106)) ^ 1;
  return result;
}


WorldSettingsScreenController *__fastcall WorldSettingsScreenController::~WorldSettingsScreenController(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  ContentManager *v4; // r0@5
  ContentManager *v5; // r0@6
  int v6; // r1@7
  void *v7; // r0@7
  int v8; // r1@8
  void *v9; // r0@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16

  v1 = this;
  *(_DWORD *)this = &off_26E412C;
  v2 = *((_DWORD *)this + 244);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 244) = 0;
  v3 = *((_DWORD *)v1 + 241);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 241) = 0;
  v4 = (ContentManager *)*((_DWORD *)v1 + 240);
  if ( v4 )
  {
    v5 = ContentManager::~ContentManager(v4);
    operator delete((void *)v5);
  }
  *((_DWORD *)v1 + 240) = 0;
  LevelData::~LevelData((WorldSettingsScreenController *)((char *)v1 + 592));
  LevelSummary::~LevelSummary((WorldSettingsScreenController *)((char *)v1 + 528));
  v6 = *((_DWORD *)v1 + 131);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v6 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 130);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v8 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  SettingsScreenControllerBase::~SettingsScreenControllerBase(v1);
  return v1;
}


signed int __fastcall WorldSettingsScreenController::_noHardwareConcurrency(WorldSettingsScreenController *this)
{
  unsigned __int32 v1; // r0@1
  signed int v2; // r1@1

  v1 = AppPlatform::getAvailableHWThreadCount(this);
  v2 = 0;
  if ( v1 < 2 )
    v2 = 1;
  return v2;
}


int __fastcall WorldSettingsScreenController::_exportTemplate(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1

  v1 = this;
  WorldSettingsScreenController::_saveWorld(this);
  if ( *((_DWORD *)v1 + 129) == 3 )
    MinecraftScreenController::exportWorld((int)v1, (int *)v1 + 132, (int *)v1 + 133, 1);
  return 0;
}


int __fastcall WorldSettingsScreenController::_isNotClient(WorldSettingsScreenController *this)
{
  return MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)this + 106)) ^ 1;
}


int __fastcall WorldSettingsScreenController::_setDifficulty(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r5@1
  int v3; // r4@1
  int result; // r0@2
  int v5; // r0@5

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 129) )
  {
    result = j_j_j__ZN9LevelData17setGameDifficultyE10Difficulty_0((int)this + 592, a2);
  }
  else
    result = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106));
    if ( !result )
    {
      if ( MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v2 + 106)) != 1
        || (v5 = MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v2 + 106)),
            result = Abilities::getBool(v5, &Abilities::OPERATOR),
            result == 1) )
      {
        result = j_j_j__ZN20MinecraftScreenModel23sendSetDifficultyPacketE10Difficulty(*((_DWORD *)v2 + 95), v3);
      }
    }
  return result;
}


void *__fastcall WorldSettingsScreenController::_getWorldName(WorldSettingsScreenController *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *v4; // r0@2
  void *result; // r0@2
  int v6; // r0@5

  v2 = a2;
  v3 = (int *)this;
  if ( *(_DWORD *)(a2 + 516) )
  {
    v4 = (int *)LevelData::getLevelName((LevelData *)(a2 + 592));
    result = sub_21E8AF4(v3, v4);
  }
  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(a2 + 424)) == 1 )
    result = sub_21E94B4((void **)v3, (const char *)&unk_257BC67);
  else
    v6 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v2 + 424));
    result = (void *)(*(int (__fastcall **)(int *))(*(_DWORD *)v6 + 24))(v3);
  return result;
}


int __fastcall WorldSettingsScreenController::_setStartWithMap(int result, bool a2)
{
  if ( (unsigned int)(*(_DWORD *)(result + 516) - 1) <= 1 )
    result = j_j_j__ZN9LevelData22setStartWithMapEnabledEb((LevelData *)(result + 592), a2);
  return result;
}


void __fastcall WorldSettingsScreenController::_setPerfectWeather(WorldSettingsScreenController *this, int a2)
{
  int v2; // r5@1
  WorldSettingsScreenController *v3; // r4@1
  void *v4; // r0@5
  unsigned int *v5; // r2@7
  signed int v6; // r1@9
  int v7; // [sp+4h] [bp-1Ch]@5

  v2 = a2;
  v3 = this;
  if ( a2 == 1 )
  {
    if ( *((_DWORD *)this + 129) )
    {
      LevelData::setRainLevel((WorldSettingsScreenController *)((char *)this + 592), 0.0);
      LevelData::setLightningLevel((WorldSettingsScreenController *)((char *)v3 + 592), 0.0);
    }
    else if ( !MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
      sub_21E94B4((void **)&v7, "/weather clear");
      WorldSettingsScreenController::_runCommandAsLocalPlayer((int)v3, &v7);
      v4 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v7 - 4);
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
          j_j_j_j__ZdlPv_9(v4);
      }
  }
  WorldSettingsScreenController::_setGameRule((int)v3, v2 ^ 1, (int **)&GameRules::DO_WEATHER_CYCLE);
}


int __fastcall WorldSettingsScreenController::_runCommandAsLocalPlayer(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  int result; // r0@1
  int v6; // r0@2
  int v7; // [sp+4h] [bp-1Ch]@2
  __int64 v8; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v4 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(a1 + 424));
  (*(void (__fastcall **)(char *))(*(_DWORD *)v4 + 60))((char *)&v8 + 4);
  result = HIDWORD(v8);
  if ( HIDWORD(v8) )
  {
    v6 = MinecraftScreenModel::getCommands(*(MinecraftScreenModel **)(v2 + 424));
    v8 = HIDWORD(v8);
    v7 = MinecraftCommands::requestCommandExecution(v6, (int *)&v8, v3, 3, SHIDWORD(v8));
    MCRESULT::isSuccess((MCRESULT *)&v7);
    if ( (_DWORD)v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    LODWORD(v8) = 0;
    result = HIDWORD(v8);
    if ( HIDWORD(v8) )
      result = (*(int (**)(void))(*(_DWORD *)HIDWORD(v8) + 4))();
  }
  return result;
}


void __fastcall WorldSettingsScreenController::_setImmutableWorld(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r2@4
  char *v5; // r1@4
  void *v6; // r0@7
  void *v7; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  int v12; // [sp+0h] [bp-30h]@4
  int v13; // [sp+8h] [bp-28h]@4

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 129) )
  {
    *(_BYTE *)(LevelData::getAdventureSettings((WorldSettingsScreenController *)((char *)this + 592)) + 2) = a2;
  }
  else if ( !MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    sub_21E94B4((void **)&v13, "/immutableworld ");
    sub_21E8AF4(&v12, &v13);
    v4 = 5;
    v5 = "true";
    if ( v3 )
      v4 = 4;
    else
      v5 = "false";
    sub_21E7408((const void **)&v12, v5, v4);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v13, &v12);
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v12 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    WorldSettingsScreenController::_runCommandAsLocalPlayer((int)v2, &v13);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


int __fastcall WorldSettingsScreenController::_setWorldType(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  _DWORD *v7; // r0@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r2@10
  __int64 v10; // r1@12
  int *v11; // r7@12
  unsigned int v12; // r0@16
  signed int v13; // r0@22
  int v14; // r0@23
  bool v15; // zf@24
  int result; // r0@39
  unsigned int *v17; // r2@40
  unsigned int v18; // r1@42
  char v19; // [sp+4h] [bp-3Ch]@29
  void (*v20)(void); // [sp+Ch] [bp-34h]@28
  int v21; // [sp+10h] [bp-30h]@29
  _DWORD *v22; // [sp+14h] [bp-2Ch]@12
  void (*v23)(void); // [sp+1Ch] [bp-24h]@7
  signed int (__fastcall *v24)(signed int *, int); // [sp+20h] [bp-20h]@12
  char v25; // [sp+24h] [bp-1Ch]@1
  int v26; // [sp+28h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<WorldSettingsScreenController>((int)&v25, (int)this);
  v4 = *(_QWORD *)&v25;
  if ( v26 )
  {
    v5 = (unsigned int *)(v26 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v23 = 0;
  v7 = operator new(0xCu);
  *(_QWORD *)v7 = v4;
  if ( HIDWORD(v4) )
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
    v7[2] = v3;
    v22 = v7;
    v23 = (void (*)(void))sub_129A78C;
    v24 = sub_129A604;
    v11 = (int *)&v24;
        v12 = __ldrex(v8);
      while ( __strex(v12 - 1, v8) );
      v12 = (*v8)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  else
    HIDWORD(v10) = sub_129A604;
    LODWORD(v10) = sub_129A78C;
    *(_QWORD *)&v23 = v10;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v2 + 106)) == 1 )
    v13 = LevelData::achievementsWillBeDisabledOnLoad((WorldSettingsScreenController *)((char *)v2 + 592));
    v14 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v2 + 106));
    v13 = (*(int (**)(void))(*(_DWORD *)v14 + 16))();
  v15 = v3 == 2;
  if ( v3 == 2 )
    v15 = (v13 ^ 1) == 1;
  if ( v15 )
    v20 = 0;
    if ( v23 )
      ((void (__fastcall *)(char *, _DWORD **, signed int))v23)(&v19, &v22, 2);
      v21 = *v11;
      v20 = v23;
    SettingsScreenControllerBase::confirmationNoAchievementsDialog((int)v2, (int)&v19);
    if ( v20 )
      v20();
  else if ( *((_DWORD *)v2 + 129) == 1 && !MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v2 + 106)) )
    if ( v3 == 2 )
      LevelData::setGameType((int)v2 + 592, 1);
      WorldSettingsScreenController::_setAllowCheatsHelper(v2, 1);
      LevelData::disableAchievements((WorldSettingsScreenController *)((char *)v2 + 592));
    LevelData::setGenerator((int)v2 + 592, v3);
  if ( v23 )
    v23();
  result = v26;
    v17 = (unsigned int *)(v26 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall WorldSettingsScreenController::_isNotClientOrTrial(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)this + 106)) )
    result = 0;
  else
    result = MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v1 + 106)) ^ 1;
  return result;
}


int __fastcall WorldSettingsScreenController::_getAlwaysDay(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@5

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    result = LevelData::isAlwaysDay((WorldSettingsScreenController *)((char *)this + 592));
  }
  else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    result = 0;
  else
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 48))();
  return result;
}


int __fastcall WorldSettingsScreenController::_makeWorldInfinite(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int v2; // r5@3
  int v3; // r0@3

  v1 = this;
  if ( *((_DWORD *)this + 129) == 3 && !MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)this + 106)) )
  {
    WorldSettingsScreenController::_saveWorld(v1);
    *((_BYTE *)v1 + 992) = 1;
    v2 = *((_DWORD *)v1 + 106);
    v3 = LevelData::getStorageVersion((WorldSettingsScreenController *)((char *)v1 + 592));
    MainMenuScreenModel::navigateToMakeInfiniteScreen(v2, (int)v1 + 528, v3);
  }
  return 0;
}


int __fastcall WorldSettingsScreenController::_deleteWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r5@1
  int v2; // r0@1
  __int64 v3; // kr00_8@3
  unsigned int *v4; // r0@4
  unsigned int v5; // r2@6
  unsigned int v6; // r1@13
  _DWORD *v7; // r0@16
  unsigned int *v8; // r1@17
  unsigned int v9; // r2@19
  __int64 v10; // r2@22
  char *v11; // r0@24
  unsigned int *v12; // r2@26
  unsigned int v13; // r1@28
  unsigned int *v14; // r1@34
  unsigned int v15; // r0@36
  void *v16; // r0@41
  void *v17; // r4@42
  void *v18; // r6@42
  unsigned int *v19; // r2@44
  signed int v20; // r1@46
  int *v21; // r0@52
  unsigned int *v23; // r2@59
  signed int v24; // r1@61
  unsigned int *v25; // r2@63
  signed int v26; // r1@65
  __int64 v27; // [sp+0h] [bp-88h]@9
  char *v28; // [sp+8h] [bp-80h]@16
  _DWORD *v29; // [sp+Ch] [bp-7Ch]@22
  void (*v30)(void); // [sp+14h] [bp-74h]@16
  int (__fastcall *v31)(int *, int); // [sp+18h] [bp-70h]@22
  int v32; // [sp+1Ch] [bp-6Ch]@3
  void *v33; // [sp+20h] [bp-68h]@3
  void *v34; // [sp+24h] [bp-64h]@3
  int v35; // [sp+28h] [bp-60h]@3
  void *v36; // [sp+2Ch] [bp-5Ch]@3
  int v37; // [sp+30h] [bp-58h]@3
  int v38; // [sp+34h] [bp-54h]@3
  int v39; // [sp+38h] [bp-50h]@3
  void *v40; // [sp+3Ch] [bp-4Ch]@3
  int v41; // [sp+40h] [bp-48h]@3
  int v42; // [sp+44h] [bp-44h]@3
  int v43; // [sp+48h] [bp-40h]@3
  void *v44; // [sp+4Ch] [bp-3Ch]@3
  void *v45; // [sp+50h] [bp-38h]@3
  void *v46; // [sp+54h] [bp-34h]@3
  void *v47; // [sp+58h] [bp-30h]@3
  int v48; // [sp+5Ch] [bp-2Ch]@3
  char v49; // [sp+60h] [bp-28h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 129);
  if ( v2 == 2 )
  {
    MinecraftScreenModel::deleteLevel(*((_DWORD *)v1 + 106));
  }
  else if ( v2 == 3 )
    v36 = &unk_28898CC;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = &unk_28898CC;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = &unk_28898CC;
    v45 = &unk_28898CC;
    v46 = &unk_28898CC;
    v47 = &unk_28898CC;
    v48 = 1;
    v49 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v33,
      (int *)v1 + 133);
    std::vector<std::string,std::allocator<std::string>>::operator=((int)&v41, (unsigned __int64 *)&v33);
    sub_21E8190(&v40, "createWorldScreen.deleteWarningFormat", (_BYTE *)0x25);
    sub_21E8190(&v36, "createWorldScreen.delete.confirm", (_BYTE *)0x20);
    sub_21E8190(&v45, "createWorldScreen.delete", (_BYTE *)0x18);
    sub_21E8190(&v47, "gui.cancel", (_BYTE *)0xA);
    sub_21E8AF4(&v32, (int *)v1 + 132);
    v3 = *((_QWORD *)v1 + 53);
    if ( HIDWORD(v3) )
    {
      v4 = (unsigned int *)(HIDWORD(v3) + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
      }
      else
        ++*v4;
      v27 = v3;
          v6 = __ldrex(v4);
        while ( __strex(v6 + 1, v4) );
    }
    else
      v27 = (unsigned int)v3;
    sub_21E8AF4((int *)&v28, &v32);
    v30 = 0;
    v7 = operator new(0xCu);
    *(_QWORD *)v7 = v27;
    if ( HIDWORD(v27) )
      v8 = (unsigned int *)(HIDWORD(v27) + 8);
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        ++*v8;
    HIDWORD(v10) = sub_129C028;
    v7[2] = v28;
    v28 = (char *)&unk_28898CC;
    v29 = v7;
    v30 = (void (*)(void))sub_129C184;
    v31 = sub_129C028;
    LODWORD(v10) = &v29;
    MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v36, v10);
    if ( v30 )
      v30();
    v11 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v28 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
      v12 = (unsigned int *)(HIDWORD(v27) + 8);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (**)(void))(*(_DWORD *)HIDWORD(v27) + 12))();
      v14 = (unsigned int *)(HIDWORD(v3) + 8);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
    v16 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v32 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v18 = v34;
    v17 = v33;
    if ( v33 != v34 )
      do
        v21 = (int *)(*(_DWORD *)v17 - 12);
        if ( v21 != &dword_28898C0 )
        {
          v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
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
            j_j_j_j__ZdlPv_9(v21);
        }
        v17 = (char *)v17 + 4;
      while ( v17 != v18 );
      v17 = v33;
    if ( v17 )
      operator delete(v17);
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v36);
  return 0;
}


int __fastcall WorldSettingsScreenController::_createWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r10@1
  LevelData *v2; // r11@1
  int v3; // r0@2
  Level *v4; // r0@4
  int v5; // r0@5
  __int64 v6; // r4@6
  int v7; // t1@7
  int v8; // r4@8
  _DWORD *v9; // r0@8
  int v10; // r0@10
  int v11; // ST84_4@11
  int v12; // ST80_4@11
  int v13; // ST7C_4@11
  int v14; // ST78_4@11
  int v15; // ST74_4@11
  int v16; // ST70_4@11
  int v17; // ST6C_4@11
  int v18; // ST68_4@11
  int v19; // ST64_4@11
  int v20; // ST60_4@11
  int v21; // ST5C_4@11
  int v22; // ST58_4@11
  int v23; // r9@11
  int v24; // r5@11
  int v25; // r4@11
  int v26; // r6@11
  char *v27; // r0@11
  char v28; // r7@11
  char v29; // r8@11
  int *v30; // r0@11
  int *v31; // r0@11
  unsigned __int64 *v32; // r4@11
  unsigned int *v33; // r2@13
  signed int v34; // r1@15
  unsigned __int64 *v35; // r5@21
  int v36; // r1@21
  void *v37; // r0@21
  int v38; // r0@26
  int v39; // r2@26
  char *v40; // r7@26
  char *v41; // r8@26
  int *i; // r4@26
  int *v43; // r9@26
  int v44; // r11@27
  signed int v45; // r7@29
  char *v46; // r5@29
  signed int v47; // r10@29
  unsigned int v48; // r0@29
  unsigned int v49; // r1@31
  unsigned int v50; // r6@31
  LevelData *v51; // r10@46
  int v52; // r1@48
  int v53; // r11@48
  char *v54; // r4@48
  char *v55; // r6@49
  int v56; // r10@49
  unsigned int v57; // r5@49
  unsigned int v58; // r1@49 OVERLAPPED
  unsigned int v59; // r2@49 OVERLAPPED
  signed int v60; // r3@49
  bool v61; // cf@51
  bool v62; // zf@51
  signed int v63; // r5@51
  unsigned int v64; // r3@59
  unsigned int v65; // r5@59
  signed int v66; // r3@59
  bool v67; // zf@61
  signed int v68; // r5@61
  char *v69; // r3@65
  unsigned int v70; // r3@66
  unsigned int v71; // r5@66
  signed int v72; // r3@66
  bool v73; // zf@68
  signed int v74; // r5@68
  int v75; // r0@78
  _DWORD *v76; // r4@78
  unsigned int v77; // r1@78 OVERLAPPED
  unsigned int v78; // r2@78 OVERLAPPED
  unsigned int v79; // r3@78
  unsigned int v80; // r5@78
  signed int v81; // r3@78
  bool v82; // zf@80
  signed int v83; // r5@80
  _DWORD *v84; // r3@84
  unsigned int v85; // r3@85
  unsigned int v86; // r5@85
  signed int v87; // r3@85
  bool v88; // zf@87
  signed int v89; // r5@87
  int v90; // r2@93
  char *v91; // r6@93
  char *v92; // r6@94
  int v93; // r5@95
  int v94; // r10@95
  unsigned int v95; // r4@95
  __int64 v96; // r0@95
  signed int v97; // r2@95
  bool v98; // zf@97
  signed int v99; // r4@97
  unsigned int v100; // r2@105
  unsigned int v101; // r4@105
  signed int v102; // r2@105
  bool v103; // zf@107
  signed int v104; // r4@107
  char *v105; // r2@111
  unsigned int v106; // r2@112
  unsigned int v107; // r4@112
  signed int v108; // r2@112
  bool v109; // zf@114
  signed int v110; // r4@114
  int v111; // r0@122
  __int64 v112; // r1@123
  void **v113; // r5@123
  PackManifest *v114; // r0@123
  char *v115; // r4@125
  int *v116; // r2@125
  __int64 v117; // r0@125
  int v118; // r6@129
  char *v119; // r9@129
  int *v120; // r7@129
  _DWORD *v121; // r4@129
  __int64 v122; // r0@129
  WorldSettingsScreenController *v124; // [sp+80h] [bp-260h]@26
  int v125; // [sp+84h] [bp-25Ch]@26
  _DWORD *v126; // [sp+88h] [bp-258h]@8
  void (*v127)(void); // [sp+90h] [bp-250h]@8
  unsigned int (__fastcall *v128)(int **); // [sp+94h] [bp-24Ch]@8
  int v129; // [sp+9Ch] [bp-244h]@129
  _DWORD *v130; // [sp+164h] [bp-17Ch]@129
  void (*v131)(void); // [sp+16Ch] [bp-174h]@129
  void *v132; // [sp+174h] [bp-16Ch]@26
  int v133; // [sp+178h] [bp-168h]@26
  int v134; // [sp+17Ch] [bp-164h]@26
  void *v135; // [sp+180h] [bp-160h]@26
  int v136; // [sp+184h] [bp-15Ch]@26
  int v137; // [sp+188h] [bp-158h]@26
  char v138; // [sp+18Ch] [bp-154h]@11
  void *ptr; // [sp+1D4h] [bp-10Ch]@11
  int v140; // [sp+1D8h] [bp-108h]@11
  unsigned __int64 *v141; // [sp+1DCh] [bp-104h]@11
  int v142; // [sp+1E0h] [bp-100h]@11
  __int64 v143; // [sp+1E4h] [bp-FCh]@11
  int v144; // [sp+1ECh] [bp-F4h]@24
  char v145; // [sp+1F0h] [bp-F0h]@11

  v1 = this;
  v2 = (WorldSettingsScreenController *)((char *)this + 592);
  LevelData::getLevelName((WorldSettingsScreenController *)((char *)this + 592));
  if ( *((_BYTE *)v1 + 993) )
    return 0;
  *((_BYTE *)v1 + 993) = 1;
  v3 = *((_DWORD *)v1 + 129);
  if ( v3 != 2 )
  {
    if ( v3 != 1 )
      return 0;
    v4 = (Level *)MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106));
    if ( v4 == (Level *)1 )
    {
      v5 = *((_DWORD *)v1 + 249);
    }
    else
      v10 = Level::createRandomSeed(v4);
      v5 = LevelSettings::parseSeedString((int *)v1 + 130, v10);
    v11 = v5;
    v12 = LevelData::getGameType(v2);
    v13 = LevelData::getGameDifficulty(v2);
    v14 = LevelData::getGenerator(v2);
    v15 = LevelData::getTime(v2);
    v16 = MinecraftScreenModel::isEduMode(*((MinecraftScreenModel **)v1 + 106));
    v17 = LevelData::isMultiplayerGame(v2);
    v18 = LevelData::hasLANBroadcast(v2);
    v19 = LevelData::hasXBLBroadcast(v2);
    v20 = LevelData::getXBLBroadcastMode(v2);
    v21 = LevelData::hasPlatformBroadcast(v2);
    v22 = LevelData::hasCommandsEnabled(v2);
    v23 = LevelData::isTexturepacksRequired(v2);
    v24 = LevelData::hasLockedBehaviorPack(v2);
    v25 = LevelData::hasLockedResourcePack(v2);
    v26 = LevelData::isFromLockedTemplate(v2);
    v27 = LevelData::getGameRules(v2);
    ptr = 0;
    v140 = *((_DWORD *)v27 + 1);
    v141 = 0;
    v142 = *((_DWORD *)v27 + 3);
    v143 = *((_QWORD *)v27 + 2);
    std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,GameRule>,true> const*)#1}>(
      (unsigned int *)&ptr,
      (int)v27);
    v28 = LevelData::hasBonusChestEnabled(v2);
    v29 = LevelData::hasStartWithMapEnabled(v2);
    v30 = (int *)LevelData::getDefaultAbilities(v2);
    v31 = (int *)Abilities::Abilities((int)&v138, v30);
    LevelSettings::LevelSettings(
      (int)&v145,
      v11,
      v12,
      v13,
      0,
      v14,
      COERCE_FLOAT(&BlockPos::MIN),
      0.0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      (int)&ptr,
      v28,
      v29,
      v31);
    Abilities::~Abilities((Abilities *)&v138);
    v32 = v141;
    while ( v32 )
      v35 = v32;
      v36 = *v32 >> 32;
      v32 = (unsigned __int64 *)*v32;
      v37 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
      {
        v33 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        }
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      }
      operator delete(v35);
    _aeabi_memclr4(ptr, 4 * v140);
    v142 = 0;
    if ( ptr && &v144 != ptr )
      operator delete(ptr);
    v38 = LevelData::getAdventureSettings(v2);
    LevelSettings::setImmutableWorld((LevelSettings *)&v145, *(_BYTE *)(v38 + 2));
    v39 = 0;
    v125 = (int)v2;
    v136 = 0;
    v137 = 0;
    v40 = 0;
    v132 = 0;
    v133 = 0;
    v41 = 0;
    v134 = 0;
    v135 = 0;
    v124 = v1;
    v43 = (int *)(*(_QWORD *)(*((_DWORD *)v1 + 245) + 4) >> 32);
    for ( i = (int *)*(_QWORD *)(*((_DWORD *)v1 + 245) + 4); v43 != i; v40 += 4 )
      v44 = *i;
      if ( v40 == (char *)v39 )
        v45 = v40 - v41;
        v46 = 0;
        v47 = v45 >> 2;
        v48 = v45 >> 2;
        if ( !(v45 >> 2) )
          v48 = 1;
        v49 = v48 + (v45 >> 2);
        v50 = v48 + (v45 >> 2);
        if ( 0 != v49 >> 30 )
          v50 = 0x3FFFFFFF;
        if ( v49 < v48 )
        if ( v50 )
          if ( v50 >= 0x40000000 )
            sub_21E57F4();
          v46 = (char *)operator new(4 * v50);
        *(_DWORD *)&v46[4 * v47] = v44;
        if ( v47 )
          _aeabi_memmove4(v46, v41);
        v40 = &v46[4 * v47];
        if ( v41 )
          operator delete(v41);
        v39 = (int)&v46[4 * v50];
        v41 = v46;
      else
        *(_DWORD *)v40 = v44;
      ++i;
    v51 = (LevelData *)v125;
    if ( v41 == v40 )
      goto LABEL_129;
    sub_129B10C((int)v41, (unsigned int)v40, 2 * (31 - __clz((v40 - v41) >> 2)), 0);
    if ( v40 - v41 < 65 )
      v90 = (int)(v41 + 4);
      v91 = v41;
      if ( v41 + 4 == v40 )
        goto LABEL_122;
      v92 = v41;
      do
        v93 = v90;
        v94 = *(_DWORD *)v90;
        v95 = *(_QWORD *)(*(_DWORD *)v41 + 296) >> 32;
        v96 = *(_QWORD *)(*(_DWORD *)v90 + 296);
        v97 = 0;
        if ( (unsigned int)v96 >= (unsigned int)*(_QWORD *)(*(_DWORD *)v41 + 296) )
          v97 = 1;
        v61 = HIDWORD(v96) >= v95;
        v98 = HIDWORD(v96) == v95;
        v99 = 0;
        if ( v61 )
          v99 = 1;
        if ( v98 )
          v99 = v97;
        if ( v99 )
          v101 = *(_QWORD *)(*(_DWORD *)v92 + 296) >> 32;
          v100 = *(_QWORD *)(*(_DWORD *)v92 + 296);
          v61 = v100 >= (unsigned int)v96;
          v62 = v100 == (_DWORD)v96;
          v102 = 0;
          if ( v62 || !v61 )
            v102 = 1;
          v61 = v101 >= HIDWORD(v96);
          v103 = v101 == HIDWORD(v96);
          v104 = 0;
          if ( v103 || !v61 )
            v104 = 1;
          if ( v103 )
            v104 = v102;
          v105 = (char *)v93;
          if ( !v104 )
          {
            do
            {
              *(_DWORD *)v105 = *(_DWORD *)v92;
              v107 = *(_QWORD *)(*((_DWORD *)v92 - 1) + 296) >> 32;
              v106 = *(_QWORD *)(*((_DWORD *)v92 - 1) + 296);
              v61 = v106 >= (unsigned int)v96;
              v62 = v106 == (_DWORD)v96;
              v108 = 0;
              if ( !v62 && v61 )
                v108 = 1;
              v61 = v107 >= HIDWORD(v96);
              v109 = v107 == HIDWORD(v96);
              v110 = 0;
              if ( !v109 && v61 )
                v110 = 1;
              if ( v109 )
                v110 = v108;
              v105 = v92;
              v92 -= 4;
            }
            while ( v110 );
          }
          *(_DWORD *)v105 = v94;
          if ( 0 != (v93 - (signed int)v41) >> 2 )
            _aeabi_memmove4(&v92[-4 * ((v93 - (signed int)v41) >> 2) + 8], v41);
          *(_DWORD *)v41 = v94;
        v90 = v93 + 4;
        v92 = (char *)v93;
      while ( (char *)(v93 + 4) != v40 );
      v52 = (int)(v41 + 4);
      v53 = (int)(v41 + 64);
      v54 = v41;
        v55 = (char *)v52;
        v56 = *(_DWORD *)v52;
        v57 = *(_QWORD *)(*(_DWORD *)v41 + 296) >> 32;
        *(_QWORD *)&v58 = *(_QWORD *)(*(_DWORD *)v52 + 296);
        v60 = 0;
        if ( v58 >= (unsigned int)*(_QWORD *)(*(_DWORD *)v41 + 296) )
          v60 = 1;
        v61 = v59 >= v57;
        v62 = v59 == v57;
        v63 = 0;
          v63 = 1;
        if ( v62 )
          v63 = v60;
        if ( v63 )
          v65 = *(_QWORD *)(*(_DWORD *)v54 + 296) >> 32;
          v64 = *(_QWORD *)(*(_DWORD *)v54 + 296);
          v61 = v64 >= v58;
          v62 = v64 == v58;
          v66 = 0;
            v66 = 1;
          v61 = v65 >= v59;
          v67 = v65 == v59;
          v68 = 0;
          if ( v67 || !v61 )
            v68 = 1;
          if ( v67 )
            v68 = v66;
          v69 = v55;
          if ( !v68 )
              *(_DWORD *)v69 = *(_DWORD *)v54;
              v71 = *(_QWORD *)(*((_DWORD *)v54 - 1) + 296) >> 32;
              v70 = *(_QWORD *)(*((_DWORD *)v54 - 1) + 296);
              v61 = v70 >= v58;
              v62 = v70 == v58;
              v72 = 0;
                v72 = 1;
              v61 = v71 >= v59;
              v73 = v71 == v59;
              v74 = 0;
              if ( !v73 && v61 )
                v74 = 1;
              if ( v73 )
                v74 = v72;
              v69 = v54;
              v54 -= 4;
            while ( v74 );
          *(_DWORD *)v69 = v56;
          if ( 0 != (v55 - v41) >> 2 )
            _aeabi_memmove4(&v54[-4 * ((v55 - v41) >> 2) + 8], v41);
          *(_DWORD *)v41 = v56;
        v52 = (int)(v55 + 4);
        v54 = v55;
      while ( v55 + 4 != (char *)v53 );
      while ( (char *)v53 != v40 )
        v75 = *(_DWORD *)v53;
        v76 = (_DWORD *)(v53 - 4);
        *(_QWORD *)&v77 = *(_QWORD *)(*(_DWORD *)v53 + 296);
        v80 = *(_QWORD *)(*(_DWORD *)(v53 - 4) + 296) >> 32;
        v79 = *(_QWORD *)(*(_DWORD *)(v53 - 4) + 296);
        v61 = v79 >= v77;
        v62 = v79 == v77;
        v81 = 0;
        if ( v62 || !v61 )
          v81 = 1;
        v61 = v80 >= v78;
        v82 = v80 == v78;
        v83 = 0;
        if ( v82 || !v61 )
          v83 = 1;
        if ( v82 )
          v83 = v81;
        v84 = (_DWORD *)v53;
        if ( !v83 )
            *v84 = *v76;
            v86 = *(_QWORD *)(*(v76 - 1) + 296) >> 32;
            v85 = *(_QWORD *)(*(v76 - 1) + 296);
            v61 = v85 >= v77;
            v62 = v85 == v77;
            v87 = 0;
            if ( !v62 && v61 )
              v87 = 1;
            v61 = v86 >= v78;
            v88 = v86 == v78;
            v89 = 0;
            if ( !v88 && v61 )
              v89 = 1;
            if ( v88 )
              v89 = v87;
            v84 = v76;
            --v76;
          while ( v89 );
        *v84 = v75;
        v53 += 4;
    v91 = v41;
LABEL_129:
      LevelSettings::setNewWorldBehaviorPackIdentities((int)&v145, (unsigned __int64 *)&v132);
      LevelSettings::setNewWorldResourcePackIdentities((int)&v145, (unsigned __int64 *)&v135);
      v118 = *((_DWORD *)v124 + 241);
      v119 = LevelData::getLevelName(v51);
      v120 = (int *)LevelData::getPremiumTemplatePackId(v51);
      LevelSettings::LevelSettings((int)&v129, (int)&v145);
      v131 = 0;
      v121 = operator new(0xCCu);
      *v121 = v124;
      LevelSettings::LevelSettings((int)(v121 + 1), (int)&v129);
      LODWORD(v122) = sub_129B86C;
      v130 = v121;
      HIDWORD(v122) = sub_129B784;
      *(_QWORD *)&v131 = v122;
      DlcPreCheckScreenHandler::tryValidateDlcForWorldLoad(v118, (const char **)v119, v120, (int)&v130);
      if ( v131 )
        v131();
      LevelSettings::~LevelSettings((LevelSettings *)&v129);
      if ( v41 )
        operator delete(v41);
      std::_Destroy<PackInstanceId *>((int)v132, v133);
      if ( v132 )
        operator delete(v132);
      std::_Destroy<PackInstanceId *>((int)v135, v136);
      if ( v135 )
        operator delete(v135);
      LevelSettings::~LevelSettings((LevelSettings *)&v145);
    do
LABEL_122:
      v111 = *(_DWORD *)v91;
      if ( *(_DWORD *)(*(_DWORD *)v91 + 76) == 1 )
        v112 = *(_QWORD *)(v111 + 32);
        v113 = &v135;
        v114 = *(PackManifest **)(v111 + 60);
        if ( (unsigned int)v112 ^ 3 | HIDWORD(v112) )
          v113 = &v132;
        v115 = PackManifest::getIdentity(v114);
        v116 = (int *)SubpackInfoCollection::getSubpackFolderName(
                        (SubpackInfoCollection *)(*(_DWORD *)v91 + 308),
                        *(_DWORD *)(*(_DWORD *)v91 + 304));
        v117 = *(_QWORD *)(v113 + 1);
        if ( (_DWORD)v117 == HIDWORD(v117) )
          std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackIdVersion const&,std::string const&>(
            (unsigned __int64 *)v113,
            (int)v115,
            v116);
          PackInstanceId::PackInstanceId(v117, (int)v115, v116);
          v113[1] = (char *)v113[1] + 56;
      v91 += 4;
    while ( v40 != v91 );
    goto LABEL_129;
  }
  WorldSettingsScreenController::_saveWorld(v1);
  v6 = *(_QWORD *)ContentManager::getSources(*((ContentManager **)v1 + 240));
  while ( HIDWORD(v6) != (_DWORD)v6 )
    v7 = *(_DWORD *)v6;
    LODWORD(v6) = v6 + 4;
    (*(void (**)(void))(*(_DWORD *)v7 + 16))();
  v8 = *((_DWORD *)v1 + 241);
  v9 = operator new(4u);
  *v9 = v1;
  v126 = v9;
  v127 = (void (*)(void))sub_129BDDC;
  v128 = sub_129B9E0;
  DlcPreCheckScreenHandler::tryValidateDlcForWorldLoad(v8, (const char **)v1 + 132, (int *)v1 + 146, (int)&v126);
  if ( v127 )
    v127();
  return 0;
}


int __fastcall WorldSettingsScreenController::_getGameRule(int a1, int **a2)
{
  int v2; // r5@1
  int result; // r0@2
  int v4; // r0@5

  v2 = a1;
  if ( *(_DWORD *)(a1 + 516) )
  {
    result = LevelData::isGameRule(a1 + 592, a2);
  }
  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(a1 + 424)) )
    result = 0;
  else
    v4 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v2 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v4 + 52))();
  return result;
}


Json::Value *__fastcall WorldSettingsScreenController::addStaticScreenVars(WorldSettingsScreenController *this, Json::Value *a2)
{
  WorldSettingsScreenController *v2; // r5@1
  Json::Value *v3; // r4@1
  bool v4; // r2@1
  Json::Value *v5; // r1@2
  LevelData *v6; // r6@3
  int v7; // r5@4
  int (__fastcall *v8)(int, int *); // r7@4
  int *v9; // r0@4
  int v11; // [sp+0h] [bp-28h]@4

  v2 = this;
  v3 = a2;
  if ( MinecraftScreenModel::isInGame(*((MinecraftScreenModel **)this + 106)) )
  {
    v5 = (Json::Value *)1;
  }
  else
    v6 = (WorldSettingsScreenController *)((char *)v2 + 592);
    if ( *(_DWORD *)(*(_DWORD *)LevelData::getPremiumTemplatePackId((WorldSettingsScreenController *)((char *)v2 + 592))
                   - 12) )
    {
      v7 = MainMenuScreenModel::getAccessibilityProvider(*((MainMenuScreenModel **)v2 + 106));
      v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v7 + 20);
      v9 = (int *)LevelData::getPremiumTemplatePackId(v6);
      mce::UUID::fromString((int)&v11, v9);
      v5 = (Json::Value *)(v8(v7, &v11) ^ 1);
    }
    else
      v5 = 0;
  return WorldSettingsScreenController::addStaticScreenVars(v3, v5, v4);
}


void __fastcall WorldSettingsScreenController::~WorldSettingsScreenController(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r0@1

  v1 = WorldSettingsScreenController::~WorldSettingsScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall WorldSettingsScreenController::_getDifficulty(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  signed int v3; // r1@3
  MinecraftScreenModel *v4; // r0@3
  int v5; // r0@4
  Option *v6; // r0@4
  int v7; // r0@5

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    result = j_j_j__ZNK9LevelData17getGameDifficultyEv_0((WorldSettingsScreenController *)((char *)this + 592));
  }
  else
    v3 = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106));
    v4 = (MinecraftScreenModel *)*((_DWORD *)v1 + 106);
    if ( v3 )
    {
      v5 = MinecraftScreenModel::getOptions(v4);
      v6 = (Option *)Options::get(v5, 1);
      result = j_j_j__ZNK6Option6getIntEv_0(v6);
    }
    else
      v7 = MinecraftScreenModel::getClientModel(v4);
      result = (*(int (**)(void))(*(_DWORD *)v7 + 28))();
  return result;
}


void __fastcall WorldSettingsScreenController::_init(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@4
  const void **v4; // r0@4
  char *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // r6@11
  const void **v11; // r0@11
  char *v12; // r0@11
  void *v13; // r0@12
  void *v14; // r0@18
  void *v15; // r0@19
  signed int v16; // r6@20
  Options *v17; // r0@20
  int v18; // r0@23
  char v19; // r0@30
  char v20; // r0@30
  char v21; // r0@30
  char v22; // r0@30
  char v23; // r0@30
  void *v24; // r0@33
  int v25; // r1@37
  int v26; // r0@37
  unsigned __int64 *v27; // r0@40
  unsigned __int64 *v28; // r0@40
  unsigned __int64 *v29; // r0@40
  int v30; // r3@40
  MinecraftScreenModel **v31; // r10@40
  int v32; // r6@40
  unsigned int *v33; // r1@41
  unsigned int v34; // r0@43
  unsigned int *v35; // r7@47
  unsigned int v36; // r0@49
  _DWORD *v37; // r0@56
  __int64 v38; // r1@56
  _DWORD *v39; // r0@56
  __int64 v40; // r1@56
  _DWORD *v41; // r0@56
  __int64 v42; // r1@56
  void *v43; // r0@62
  void *v44; // r0@63
  void *v45; // r0@64
  int v46; // r3@65
  int v47; // r7@65
  unsigned int *v48; // r1@66
  unsigned int v49; // r0@68
  unsigned int *v50; // r5@72
  unsigned int v51; // r0@74
  _DWORD *v52; // r0@81
  __int64 v53; // r1@81
  _DWORD *v54; // r0@81
  __int64 v55; // r1@81
  _DWORD *v56; // r0@81
  __int64 v57; // r1@81
  void *v58; // r0@87
  void *v59; // r0@88
  void *v60; // r0@89
  int v61; // r6@91
  unsigned int *v62; // r1@92
  unsigned int v63; // r0@94
  unsigned int *v64; // r5@98
  unsigned int v65; // r0@100
  char v66; // r0@109
  int v67; // r0@112
  unsigned int *v68; // r2@118
  signed int v69; // r1@120
  unsigned int *v70; // r2@122
  signed int v71; // r1@124
  unsigned int *v72; // r2@126
  signed int v73; // r1@128
  unsigned int *v74; // r2@130
  signed int v75; // r1@132
  unsigned int *v76; // r2@134
  signed int v77; // r1@136
  unsigned int *v78; // r2@138
  signed int v79; // r1@140
  unsigned int *v80; // r2@169
  signed int v81; // r1@171
  unsigned int *v82; // r2@173
  signed int v83; // r1@175
  unsigned int *v84; // r2@177
  signed int v85; // r1@179
  unsigned int *v86; // r2@181
  signed int v87; // r1@183
  unsigned int *v88; // r2@185
  signed int v89; // r1@187
  unsigned int *v90; // r2@189
  signed int v91; // r1@191
  char v92; // [sp+13h] [bp-595h]@91
  int v93; // [sp+14h] [bp-594h]@91
  int v94; // [sp+18h] [bp-590h]@91
  char v95; // [sp+1Ch] [bp-58Ch]@91
  int v96; // [sp+20h] [bp-588h]@91
  _DWORD *v97; // [sp+24h] [bp-584h]@81
  __int64 v98; // [sp+2Ch] [bp-57Ch]@81
  _DWORD *v99; // [sp+34h] [bp-574h]@81
  __int64 v100; // [sp+3Ch] [bp-56Ch]@81
  _DWORD *v101; // [sp+44h] [bp-564h]@81
  __int64 v102; // [sp+4Ch] [bp-55Ch]@81
  int v103; // [sp+58h] [bp-550h]@81
  int v104; // [sp+60h] [bp-548h]@81
  int v105; // [sp+68h] [bp-540h]@81
  char v106; // [sp+6Fh] [bp-539h]@65
  int v107; // [sp+70h] [bp-538h]@65
  int v108; // [sp+74h] [bp-534h]@65
  int v109; // [sp+78h] [bp-530h]@65
  char v110; // [sp+7Ch] [bp-52Ch]@65
  int v111; // [sp+80h] [bp-528h]@65
  _DWORD *v112; // [sp+84h] [bp-524h]@56
  __int64 v113; // [sp+8Ch] [bp-51Ch]@56
  _DWORD *v114; // [sp+94h] [bp-514h]@56
  __int64 v115; // [sp+9Ch] [bp-50Ch]@56
  _DWORD *v116; // [sp+A4h] [bp-504h]@56
  __int64 v117; // [sp+ACh] [bp-4FCh]@56
  int v118; // [sp+B8h] [bp-4F0h]@56
  int v119; // [sp+C0h] [bp-4E8h]@56
  int v120; // [sp+C8h] [bp-4E0h]@56
  char v121; // [sp+CFh] [bp-4D9h]@40
  int v122; // [sp+D0h] [bp-4D8h]@40
  int v123; // [sp+D4h] [bp-4D4h]@40
  int v124; // [sp+DCh] [bp-4CCh]@40
  char v125; // [sp+E0h] [bp-4C8h]@40
  int v126; // [sp+E4h] [bp-4C4h]@40
  void *ptr; // [sp+E8h] [bp-4C0h]@40
  void *v128; // [sp+F4h] [bp-4B4h]@40
  int v129; // [sp+100h] [bp-4A8h]@37
  int v130; // [sp+104h] [bp-4A4h]@23
  char v131; // [sp+108h] [bp-4A0h]@23
  int v132; // [sp+27Ch] [bp-32Ch]@11
  int v133; // [sp+280h] [bp-328h]@11
  char *v134; // [sp+284h] [bp-324h]@11
  char v135; // [sp+288h] [bp-320h]@11
  int v136; // [sp+3FCh] [bp-1ACh]@18
  int v137; // [sp+400h] [bp-1A8h]@18
  int v138; // [sp+404h] [bp-1A4h]@4
  int v139; // [sp+408h] [bp-1A0h]@4
  char *v140; // [sp+40Ch] [bp-19Ch]@4
  char v141; // [sp+410h] [bp-198h]@4

  v1 = this;
  MinecraftScreenController::_setExitBehavior((int)this, 3);
  v2 = *((_DWORD *)v1 + 129);
  if ( v2 == 1 )
  {
    sub_21E94B4((void **)&v136, "createWorldScreen.defaultName");
    I18n::get(&v137, (int **)&v136);
    LevelData::setLevelName((int)v1 + 592, &v137);
    v14 = (void *)(v137 - 12);
    if ( (int *)(v137 - 12) != &dword_28898C0 )
    {
      v80 = (unsigned int *)(v137 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
      }
      else
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = (void *)(v136 - 12);
    if ( (int *)(v136 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v136 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    LevelData::setGameDifficulty((int)v1 + 592, 2);
    v16 = 0;
    LevelData::setGameType((int)v1 + 592, 0);
    v17 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
    if ( Options::getLimitWorldSize(v17) )
      v16 = 1;
    else if ( (unsigned int)AppPlatform::getAvailableHWThreadCount(0) < 2 )
    LevelData::setGenerator((int)v1 + 592, v16 ^ 1);
    LevelData::setTime((WorldSettingsScreenController *)((char *)v1 + 592), 0);
    v19 = MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106));
    LevelData::setMultiplayerGame((WorldSettingsScreenController *)((char *)v1 + 592), v19 ^ 1);
    v20 = MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106));
    LevelData::setLANBroadcast((WorldSettingsScreenController *)((char *)v1 + 592), v20 ^ 1);
    v21 = MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106));
    LevelData::setXBLBroadcast((WorldSettingsScreenController *)((char *)v1 + 592), v21 ^ 1);
    v22 = MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106));
    LevelData::setPlatformBroadcast((WorldSettingsScreenController *)((char *)v1 + 592), v22 ^ 1);
    v23 = MinecraftScreenModel::isEduMode(*((MinecraftScreenModel **)v1 + 106));
    LevelData::setCommandsEnabled((WorldSettingsScreenController *)((char *)v1 + 592), v23);
    if ( LevelData::achievementsWillBeDisabledOnLoad((WorldSettingsScreenController *)((char *)v1 + 592)) == 1 )
      LevelData::disableAchievements((WorldSettingsScreenController *)((char *)v1 + 592));
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v24 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v24 = &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v24 + 436))() == 2 )
      LevelData::setStartWithMapEnabled((WorldSettingsScreenController *)((char *)v1 + 592), 1);
    goto LABEL_37;
  }
  if ( v2 == 2 )
    MinecraftScreenModel::getLevelData((int)&v135, *((_DWORD *)v1 + 106));
    LevelData::operator=((int)v1 + 592, (int)&v135);
    LevelData::~LevelData((LevelData *)&v135);
    v10 = MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1 + 106));
    MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v132, *((_DWORD *)v1 + 106));
    sub_21E8AF4(&v133, &v132);
    sub_21E7408((const void **)&v133, "/", 1u);
    v11 = sub_21E72F0((const void **)&v133, (const void **)v1 + 132);
    v134 = (char *)*v11;
    *v11 = &unk_28898CC;
    ResourcePackRepository::addWorldResourcePacks(v10, (int *)&v134);
    v12 = v134 - 12;
    if ( (int *)(v134 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v134 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v133 - 12);
    if ( (int *)(v133 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v133 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v7 = (void *)(v132 - 12);
    if ( (int *)(v132 - 12) == &dword_28898C0 )
      goto LABEL_37;
    v8 = (unsigned int *)(v132 - 4);
    if ( !&pthread_create )
      goto LABEL_166;
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 - 1, v8) );
LABEL_167:
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  if ( v2 != 3 )
    if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) )
    MinecraftScreenModel::getLevelData((MinecraftScreenModel *)&v131, *((_DWORD *)v1 + 106));
    LevelData::operator=((int)v1 + 592, (int)&v131);
    LevelData::~LevelData((LevelData *)&v131);
    v18 = LevelData::getSeed((WorldSettingsScreenController *)((char *)v1 + 592));
    Util::toString<int,(void *)0,(void *)0>((void **)&v130, v18);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v1 + 130,
      &v130);
    v7 = (void *)(v130 - 12);
    if ( (int *)(v130 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v130 - 4);
    goto LABEL_167;
  MinecraftScreenModel::getLevelData((int)&v141, *((_DWORD *)v1 + 106));
  LevelData::operator=((int)v1 + 592, (int)&v141);
  LevelData::~LevelData((LevelData *)&v141);
  v3 = MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1 + 106));
  MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v138, *((_DWORD *)v1 + 106));
  sub_21E8AF4(&v139, &v138);
  sub_21E7408((const void **)&v139, "/", 1u);
  v4 = sub_21E72F0((const void **)&v139, (const void **)v1 + 132);
  v140 = (char *)*v4;
  *v4 = &unk_28898CC;
  ResourcePackRepository::addWorldResourcePacks(v3, (int *)&v140);
  v5 = v140 - 12;
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v140 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v139 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v138 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_167;
LABEL_166:
    v9 = (*v8)--;
LABEL_37:
  Util::ProfanityFilter::createProfanityFilter((Util::ProfanityFilter *)&v129);
  v25 = v129;
  v129 = 0;
  v26 = *((_DWORD *)v1 + 244);
  *((_DWORD *)v1 + 244) = v25;
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
    if ( v129 )
      (*(void (**)(void))(*(_DWORD *)v129 + 4))();
  *((_DWORD *)v1 + 245) = ContentManager::loadContent(
                            *((ContentManager **)v1 + 240),
                            (WorldSettingsScreenController *)((char *)v1 + 528));
  v27 = (unsigned __int64 *)InvalidPacksFilterGroup::InvalidPacksFilterGroup((InvalidPacksFilterGroup *)&v128);
  v28 = InvalidPacksFilterGroup::addFilter(v27, 0);
  InvalidPacksFilterGroup::addFilter(v28, 1);
  ContentManager::loadContent(*((ContentManager **)v1 + 240), (const InvalidPacksFilterGroup *)&v128);
  InvalidPacksFilterGroup::InvalidPacksFilterGroup((InvalidPacksFilterGroup *)&ptr);
  v29 = InvalidPacksFilterGroup::addFilter((unsigned __int64 *)&ptr, 0);
  InvalidPacksFilterGroup::addFilter(v29, 2);
  ContentManager::loadContent(*((ContentManager **)v1 + 240), (const InvalidPacksFilterGroup *)&ptr);
  v30 = *((_DWORD *)v1 + 240);
  v123 = 0;
  v31 = (MinecraftScreenModel **)((char *)v1 + 424);
  v122 = 3;
  v121 = 2;
  std::make_unique<ResourcePacksScreenController,std::shared_ptr<MainMenuScreenModel> &,SettingsScreenMode &,ContentManager &,ContentType,InvalidPacksFilterGroup &,PackScope,WorldMultiplayerLockState &>(
    &v124,
    (int)v1 + 424,
    (int *)v1 + 129,
    v30,
    (__int64 *)&v122,
    (unsigned __int64 *)&v128,
    &v121,
    (int)v1 + 968);
  std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<ResourcePacksScreenController,std::default_delete<std::default_delete>>(
    (int)&v125,
    &v124);
  ScreenController::_registerSubController((int)v1, (int)&v125);
  v32 = v126;
  if ( v126 )
    v33 = (unsigned int *)(v126 + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  if ( v124 )
    (*(void (**)(void))(*(_DWORD *)v124 + 4))();
  v124 = 0;
  sub_21E94B4((void **)&v120, "force_user_agreement_level");
  sub_21E94B4((void **)&v119, "#force_user_agreement_level");
  sub_21E94B4((void **)&v118, "#force_user_agreement_level_enabled");
  v37 = operator new(4u);
  LODWORD(v38) = sub_12967C6;
  *v37 = v1;
  HIDWORD(v38) = sub_12967BA;
  v116 = v37;
  v117 = v38;
  v39 = operator new(4u);
  LODWORD(v40) = sub_1296808;
  *v39 = v1;
  HIDWORD(v40) = sub_12967FC;
  v114 = v39;
  v115 = v40;
  v41 = operator new(4u);
  LODWORD(v42) = sub_129684A;
  *v41 = v1;
  HIDWORD(v42) = sub_129683E;
  v112 = v41;
  v113 = v42;
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(
    v1,
    (int **)&v120,
    (const char **)&v119,
    (const char **)&v118,
    (int)&v116,
    (int)&v114,
    (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v43 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v118 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v119 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v120 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = *((_DWORD *)v1 + 240);
  v108 = 0;
  v107 = 4;
  v106 = 1;
    &v109,
    v46,
    (__int64 *)&v107,
    (unsigned __int64 *)&ptr,
    &v106,
    (int)&v110,
    &v109);
  ScreenController::_registerSubController((int)v1, (int)&v110);
  v47 = v111;
  if ( v111 )
    v48 = (unsigned int *)(v111 + 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 == 1 )
      v50 = (unsigned int *)(v47 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  if ( v109 )
    (*(void (**)(void))(*(_DWORD *)v109 + 4))();
  v109 = 0;
  sub_21E94B4((void **)&v105, "force_user_agreement_addon");
  sub_21E94B4((void **)&v104, "#force_user_agreement_addon");
  sub_21E94B4((void **)&v103, "#force_user_agreement_addon_enabled");
  v52 = operator new(4u);
  LODWORD(v53) = sub_129688C;
  *v52 = v1;
  HIDWORD(v53) = sub_1296880;
  v101 = v52;
  v102 = v53;
  v54 = operator new(4u);
  LODWORD(v55) = sub_12968CE;
  *v54 = v1;
  HIDWORD(v55) = sub_12968C2;
  v99 = v54;
  v100 = v55;
  v56 = operator new(4u);
  LODWORD(v57) = sub_1296910;
  *v56 = v1;
  HIDWORD(v57) = sub_1296904;
  v97 = v56;
  v98 = v57;
    (int **)&v105,
    (const char **)&v104,
    (const char **)&v103,
    (int)&v101,
    (int)&v99,
    (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v58 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v103 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v104 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v105 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  if ( !MinecraftScreenModel::isPreGame(*v31) )
    MinecraftScreenModel::requestServerSettings(*v31);
    v93 = 0;
    v92 = 1;
    std::make_unique<ServerFormScreenController,std::shared_ptr<MainMenuScreenModel> &,int,char const(&)[1],bool>(
      &v94,
      (int)v1 + 424,
      &v93,
      (const char *)&unk_257BC67,
      &v92);
    std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<ServerFormScreenController,std::default_delete<std::default_delete>>(
      (int)&v95,
      &v94);
    ScreenController::_registerSubController((int)v1, (int)&v95);
    v61 = v96;
    if ( v96 )
      v62 = (unsigned int *)(v96 + 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 == 1 )
        v64 = (unsigned int *)(v61 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
        if ( &pthread_create )
        {
          __dmb();
          do
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
        }
        else
          v65 = (*v64)--;
        if ( v65 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
    if ( v94 )
      (*(void (**)(void))(*(_DWORD *)v94 + 4))();
    v94 = 0;
  (*(void (__fastcall **)(WorldSettingsScreenController *))(*(_DWORD *)v1 + 132))(v1);
  EntityInteraction::setInteractText((int *)v1 + 131, (int *)v1 + 145);
  if ( *((_DWORD *)v1 + 129) )
    v66 = LevelData::hasCommandsEnabled((WorldSettingsScreenController *)((char *)v1 + 592));
  else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) )
    v66 = 1;
  else
    v67 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    v66 = (*(int (**)(void))(*(_DWORD *)v67 + 8))();
  *((_BYTE *)v1 + 984) = v66;
  if ( ptr )
    operator delete(ptr);
  if ( v128 )
    operator delete(v128);
}


int __fastcall WorldSettingsScreenController::_getAllowCheats(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@5

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    result = LevelData::hasCommandsEnabled((WorldSettingsScreenController *)((char *)this + 592));
  }
  else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    result = 1;
  else
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 8))();
  return result;
}


int __fastcall WorldSettingsScreenController::tick(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@2
  int v4; // r0@5
  int v5; // r5@7
  int v6; // r0@8
  int v7; // r0@11
  int v8; // r5@13

  v1 = this;
  v2 = *((_BYTE *)this + 984);
  if ( *((_DWORD *)this + 129) )
  {
    v3 = LevelData::hasCommandsEnabled((WorldSettingsScreenController *)((char *)this + 592));
  }
  else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    v3 = 1;
  else
    v4 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    v3 = (*(int (**)(void))(*(_DWORD *)v4 + 8))();
  v8 = 1;
  if ( v2 == v3 )
    v5 = *((_DWORD *)v1 + 247);
    if ( *((_DWORD *)v1 + 129) )
    {
      v6 = LevelData::getGameType((WorldSettingsScreenController *)((char *)v1 + 592));
    }
    else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) )
      v6 = -1;
    else
      v7 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
      v6 = (*(int (**)(void))(*(_DWORD *)v7 + 32))();
    if ( v5 == v6 )
      v8 = 0;
  return MinecraftScreenController::tick(v1) | v8;
}


int __fastcall WorldSettingsScreenController::_isWorldGameModeEnabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@4

  v1 = this;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106))
    || (unsigned int)MinecraftScreenModel::getPlayerPermissionLevel(*((MinecraftScreenModel **)v1 + 106)) > 1
    || !MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v1 + 106)) )
  {
    result = MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106)) ^ 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall WorldSettingsScreenController::_isBonusChestEnabled(WorldSettingsScreenController *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 129) - 1;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


Json::Value *__fastcall WorldSettingsScreenController::addStaticScreenVars(WorldSettingsScreenController *this, Json::Value *a2, bool a3)
{
  bool v3; // r5@1
  Json::Value *v4; // r4@1
  int v5; // r6@1
  int v6; // r4@1
  int v8; // [sp+0h] [bp-38h]@1
  char v9; // [sp+10h] [bp-28h]@1

  v3 = (char)a2;
  v4 = this;
  v5 = Json::Value::operator[](this, "$export_disabled");
  Json::Value::Value((Json::Value *)&v9, v3);
  Json::Value::operator=(v5, (const Json::Value *)&v9);
  Json::Value::~Value((Json::Value *)&v9);
  v6 = Json::Value::operator[](v4, "$export_template_disabled");
  Json::Value::Value((Json::Value *)&v8, 1);
  Json::Value::operator=(v6, (const Json::Value *)&v8);
  return Json::Value::~Value((Json::Value *)&v8);
}


int __fastcall WorldSettingsScreenController::_setWorldGameModeHelper(__int64 this)
{
  __int64 v1; // r4@1
  int result; // r0@5
  char *v3; // r0@10

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 516);
  if ( (_DWORD)this )
  {
    if ( this == 1 && LevelData::getGenerator((LevelData *)(v1 + 592)) == 2 )
      LevelData::setGenerator(v1 + 592, 1);
    result = LevelData::setGameType(v1 + 592, SHIDWORD(v1));
    if ( HIDWORD(v1) == 2 )
    {
      v3 = LevelData::getDefaultAbilities((LevelData *)(v1 + 592));
      result = j_j_j__ZN9Abilities20setPlayerPermissionsE21PlayerPermissionLevel_0((PermissionsHandler **)v3, 1);
    }
    else if ( HIDWORD(v1) == 1 )
      WorldSettingsScreenController::_setAllowCheatsHelper((WorldSettingsScreenController *)v1, 1);
      result = j_j_j__ZN9LevelData19disableAchievementsEv((LevelData *)(v1 + 592));
  }
  else
    result = MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424));
    if ( !result )
      result = j_j_j__ZN20MinecraftScreenModel28sendSetDefaultGameTypePacketE8GameType(
                 *(_DWORD *)(v1 + 380),
                 SHIDWORD(v1));
  return result;
}


  if ( WorldSettingsScreenController::_isMultiplayerEnabled(**a1)
{
    || LevelData::isMultiplayerGame((WorldSettingsScreenController *)((char *)v1 + 592)) != 1 )
  {
    result = 0;
  }
  else
    result = MinecraftScreenModel::isLiveMultiplayerAllowed(*((MinecraftScreenModel **)v1 + 106));
  return result;
}


int __fastcall WorldSettingsScreenController::_getImmutableWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@5

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    result = *(_BYTE *)(LevelData::getAdventureSettings((WorldSettingsScreenController *)((char *)this + 592)) + 2) != 0;
  }
  else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    result = 0;
  else
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 56))();
  return result;
}


void __fastcall WorldSettingsScreenController::_setPerfectWeather(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController::_setPerfectWeather(this, a2);
}


ModalScreenData *__fastcall WorldSettingsScreenController::_setPlayerGameMode(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r5@1
  int v3; // r6@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int v7; // r1@9
  _DWORD *v8; // r0@12
  unsigned int *v9; // r1@13
  unsigned int v10; // r2@15
  __int64 v11; // r1@17
  int *v12; // r7@17
  unsigned int v13; // r0@21
  signed int v14; // r0@27
  int v15; // r0@28
  bool v16; // zf@29
  int v17; // r0@32
  ModalScreenData *result; // r0@32
  unsigned int *v19; // r1@40
  int v20; // [sp+0h] [bp-38h]@32
  char v21; // [sp+4h] [bp-34h]@34
  int (*v22)(void); // [sp+Ch] [bp-2Ch]@33
  int v23; // [sp+10h] [bp-28h]@34
  _DWORD *v24; // [sp+14h] [bp-24h]@17
  int (*v25)(void); // [sp+1Ch] [bp-1Ch]@12
  unsigned int (__fastcall *v26)(int, int); // [sp+20h] [bp-18h]@17

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 53);
  if ( HIDWORD(v4) )
  {
    v5 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
        v7 = __ldrex(v5);
      while ( __strex(v7 + 1, v5) );
  }
  v25 = 0;
  v8 = operator new(0xCu);
  *(_QWORD *)v8 = v4;
    v9 = (unsigned int *)(HIDWORD(v4) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
    v8[2] = v3;
    v24 = v8;
    v25 = (int (*)(void))sub_129A35C;
    v26 = sub_129A208;
    v12 = (int *)&v26;
        v13 = __ldrex(v9);
      while ( __strex(v13 - 1, v9) );
      v13 = (*v9)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  else
    HIDWORD(v11) = sub_129A208;
    LODWORD(v11) = sub_129A35C;
    *(_QWORD *)&v25 = v11;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v2 + 106)) == 1 )
    v14 = LevelData::achievementsWillBeDisabledOnLoad((WorldSettingsScreenController *)((char *)v2 + 592));
    v15 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v2 + 106));
    v14 = (*(int (**)(void))(*(_DWORD *)v15 + 16))();
  v16 = v3 == 1;
  if ( v3 == 1 )
    v16 = (v14 ^ 1) == 1;
  if ( v16 )
    v22 = 0;
    if ( v25 )
      ((void (__fastcall *)(char *, _DWORD **, signed int))v25)(&v21, &v24, 2);
      v23 = *v12;
      v22 = v25;
    result = SettingsScreenControllerBase::confirmationNoAchievementsDialog((int)v2, (int)&v21);
    if ( v22 )
      result = (ModalScreenData *)v22();
    v17 = *((_DWORD *)v2 + 106);
    v20 = v3;
    result = (ModalScreenData *)MinecraftScreenModel::setPlayerGameType(v17, &v20);
  if ( v25 )
    result = (ModalScreenData *)((int (__cdecl *)(_DWORD **))v25)(&v24);
    v19 = (unsigned int *)(HIDWORD(v4) + 8);
        result = (ModalScreenData *)__ldrex(v19);
      while ( __strex((unsigned int)result - 1, v19) );
      result = (ModalScreenData *)(*v19)--;
    if ( result == (ModalScreenData *)1 )
      result = (ModalScreenData *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return result;
}


signed int __fastcall WorldSettingsScreenController::_setAllowCheatsHelper(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@3
  int v5; // r0@7
  MinecraftScreenModel *v6; // r0@7
  int v7; // r0@8
  Abilities *v8; // r0@8
  PermissionsHandler **v9; // r5@8
  char *v10; // r0@9
  unsigned __int64 *v11; // r2@9
  char *v12; // r1@9
  int v13; // r0@9
  int v14; // r3@9
  int v15; // r0@15
  char *v16; // r0@17
  char *v17; // r0@18
  LevelData *v18; // r0@20
  int v19; // r4@20
  signed int v20; // [sp+0h] [bp-18h]@9
  signed int v21; // [sp+4h] [bp-14h]@20

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 129) )
  {
    LevelData::setCommandsEnabled((WorldSettingsScreenController *)((char *)this + 592), a2);
    if ( v3 == 1 )
      return j_j_j__ZN9LevelData19disableAchievementsEv((WorldSettingsScreenController *)((char *)v2 + 592));
  }
  else
    result = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106));
    if ( result )
    {
      if ( v3 )
        return result;
    }
    else
      v5 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v2 + 106));
      (*(void (**)(void))(*(_DWORD *)v5 + 64))();
      v6 = (MinecraftScreenModel *)*((_DWORD *)v2 + 106);
      {
        v7 = MinecraftScreenModel::getClientModel(v6);
        (*(void (**)(void))(*(_DWORD *)v7 + 68))();
        v8 = (Abilities *)MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v2 + 106));
        v9 = (PermissionsHandler **)v8;
        result = Abilities::getPlayerPermissions(v8);
        if ( result == 2 )
          return result;
        Abilities::setPlayerPermissions(v9, 2);
        v10 = MinecraftScreenModel::getLocalPlayerEntityID(*((MinecraftScreenModel **)v2 + 106));
        v11 = (unsigned __int64 *)&v20;
        *(_QWORD *)&v20 = *(_QWORD *)v10;
        v12 = (char *)v9;
        v13 = *((_DWORD *)v2 + 106);
        v14 = 0;
        return MinecraftScreenModel::sendSetAbilitiesPacket(v13, (int)v12, v11, v14);
      }
      MinecraftScreenModel::getPlayerAbilities(v6);
  if ( *((_DWORD *)v2 + 129) )
    if ( !LevelData::isAlwaysDay((WorldSettingsScreenController *)((char *)v2 + 592)) )
      goto LABEL_17;
    goto LABEL_16;
  if ( !MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v2 + 106)) )
    v15 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v2 + 106));
    if ( (*(int (**)(void))(*(_DWORD *)v15 + 48))() == 1 )
LABEL_16:
      WorldSettingsScreenController::_setAlwaysDay(v2, 0);
LABEL_17:
  v16 = LevelData::getDefaultAbilities((WorldSettingsScreenController *)((char *)v2 + 592));
  result = Abilities::getPlayerPermissions((Abilities *)v16);
  if ( result == 2 )
    v17 = LevelData::getDefaultAbilities((WorldSettingsScreenController *)((char *)v2 + 592));
    Abilities::setPlayerPermissions((PermissionsHandler **)v17, 1);
    result = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v2 + 106));
    if ( !result )
      result = MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v2 + 106));
      if ( !result )
        v20 = -1;
        v21 = -1;
        v18 = (WorldSettingsScreenController *)((char *)v2 + 592);
        v19 = *((_DWORD *)v2 + 95);
        v12 = LevelData::getDefaultAbilities(v18);
        v13 = v19;
        v14 = 1;
  return result;
}


int __fastcall WorldSettingsScreenController::_getStartWithMap(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@5

  v1 = this;
  if ( (unsigned int)(*((_DWORD *)this + 129) - 1) > 1 )
  {
    if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    {
      result = 0;
    }
    else
      v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
      result = (*(int (**)(void))(*(_DWORD *)v3 + 44))();
  }
  else
    result = LevelData::hasStartWithMapEnabled((WorldSettingsScreenController *)((char *)this + 592));
  return result;
}


int __fastcall WorldSettingsScreenController::_setMultiplayer(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r5@1
  int v3; // r4@1
  LevelData *v4; // r5@2
  int result; // r0@2
  int v6; // r0@5
  Option *v7; // r0@5
  BoolOption *v8; // r5@5

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 129) )
  {
    v4 = (WorldSettingsScreenController *)((char *)this + 592);
    LevelData::setMultiplayerGame((WorldSettingsScreenController *)((char *)this + 592), a2);
    LevelData::setLANBroadcast(v4, v3);
    LevelData::setXBLBroadcast(v4, v3);
    result = j_j_j__ZN9LevelData20setPlatformBroadcastEb(v4, v3);
  }
  else
    result = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106));
    if ( !result )
    {
      result = MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v2 + 106));
      if ( !result )
      {
        v6 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v2 + 106));
        v7 = (Option *)Options::get(v6, 140);
        v8 = v7;
        result = Option::hasOverrideSource(v7);
        if ( !result )
          result = j_j_j__ZN10BoolOption3setEb_1(v8, v3);
      }
    }
  return result;
}


int __fastcall WorldSettingsScreenController::_chooseUGCLevelSeed(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int v2; // r5@2
  _DWORD *v3; // r0@2
  _DWORD *v5; // [sp+0h] [bp-20h]@2
  void (*v6)(void); // [sp+8h] [bp-18h]@2
  int *(__fastcall *v7)(int **, int *, int *, int *); // [sp+Ch] [bp-14h]@2

  v1 = this;
  if ( *((_DWORD *)this + 129) == 1 )
  {
    v2 = *((_DWORD *)this + 106);
    v3 = operator new(4u);
    *v3 = v1;
    v5 = v3;
    v6 = (void (*)(void))sub_129C3AC;
    v7 = sub_129C2D0;
    MainMenuScreenModel::navigateToUGCViewerScreen(v2, (int)&v5);
    if ( v6 )
      v6();
  }
  return 0;
}


int __fastcall WorldSettingsScreenController::_setAllowCheats(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  _BYTE *v7; // r0@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r2@10
  __int64 v10; // r1@12
  int *v11; // r7@12
  unsigned int v12; // r0@16
  signed int v13; // r0@22
  int v14; // r0@23
  bool v15; // zf@24
  int result; // r0@34
  unsigned int *v17; // r2@35
  unsigned int v18; // r1@37
  char v19; // [sp+4h] [bp-3Ch]@29
  void (*v20)(void); // [sp+Ch] [bp-34h]@28
  int v21; // [sp+10h] [bp-30h]@29
  _BYTE *v22; // [sp+14h] [bp-2Ch]@12
  void (*v23)(void); // [sp+1Ch] [bp-24h]@7
  WorldSettingsScreenController *(__fastcall *v24)(int, int); // [sp+20h] [bp-20h]@12
  char v25; // [sp+24h] [bp-1Ch]@1
  int v26; // [sp+28h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<WorldSettingsScreenController>((int)&v25, (int)this);
  v4 = *(_QWORD *)&v25;
  if ( v26 )
  {
    v5 = (unsigned int *)(v26 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v23 = 0;
  v7 = operator new(0xCu);
  *(_QWORD *)v7 = v4;
  if ( HIDWORD(v4) )
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
    v7[8] = v3;
    v22 = v7;
    v23 = (void (*)(void))sub_129A988;
    v24 = sub_129A838;
    v11 = (int *)&v24;
        v12 = __ldrex(v8);
      while ( __strex(v12 - 1, v8) );
      v12 = (*v8)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  else
    HIDWORD(v10) = sub_129A838;
    LODWORD(v10) = sub_129A988;
    *(_QWORD *)&v23 = v10;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v2 + 106)) == 1 )
    v13 = LevelData::achievementsWillBeDisabledOnLoad((WorldSettingsScreenController *)((char *)v2 + 592));
    v14 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v2 + 106));
    v13 = (*(int (**)(void))(*(_DWORD *)v14 + 16))();
  v15 = v13 == 0;
  if ( !v13 )
    v15 = v3 == 1;
  if ( v15 )
    v20 = 0;
    if ( v23 )
      ((void (__fastcall *)(char *, _BYTE **, signed int))v23)(&v19, &v22, 2);
      v21 = *v11;
      v20 = v23;
    SettingsScreenControllerBase::confirmationNoAchievementsDialog((int)v2, (int)&v19);
    if ( v20 )
      v20();
    WorldSettingsScreenController::_setAllowCheatsHelper(v2, v3);
  if ( v23 )
    v23();
  result = v26;
    v17 = (unsigned int *)(v26 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall WorldSettingsScreenController::_canEditDifficulty(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    v3 = MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v1 + 106));
    result = Abilities::getBool(v3, &Abilities::OPERATOR);
  }
  else
    result = 1;
  return result;
}


signed int __fastcall WorldSettingsScreenController::_copyResourcePacks(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r10@1
  char *v4; // r7@2
  int v5; // r8@3
  _BYTE *v6; // r11@6
  char *v7; // r4@6
  unsigned int v8; // r1@6
  unsigned int v9; // r0@8
  unsigned int v10; // r6@8
  signed int v11; // r2@15
  int v12; // r7@15
  int *v13; // r9@23
  void *v14; // r10@23
  void *v15; // r0@23
  void (__fastcall *v16)(void **, void *, int, int); // r4@24
  int v17; // r6@24
  int v18; // r0@24
  void *v19; // r4@24
  void *v20; // r5@25
  void *v21; // r11@29
  void *v22; // r0@29
  void (__fastcall *v23)(void **, void *, int, int); // r5@30
  int v24; // r4@30
  int v25; // r0@30
  void *v26; // r4@30
  void *v27; // r5@31
  signed int v28; // r5@36
  int v29; // r6@37
  int v30; // r5@37
  void **v31; // r0@37
  void *v32; // r0@37
  void *v33; // r0@40
  unsigned int *v35; // r2@45
  signed int v36; // r1@47
  unsigned int *v37; // r2@49
  signed int v38; // r1@51
  unsigned int *v39; // r2@61
  signed int v40; // r1@63
  unsigned int *v41; // r2@65
  signed int v42; // r1@67
  int v43; // [sp+Ch] [bp-94h]@1
  int v44; // [sp+10h] [bp-90h]@1
  int v45; // [sp+18h] [bp-88h]@37
  int v46; // [sp+1Ch] [bp-84h]@37
  int v47; // [sp+24h] [bp-7Ch]@37
  int v48; // [sp+28h] [bp-78h]@37
  void *v49; // [sp+2Ch] [bp-74h]@30
  int v50; // [sp+30h] [bp-70h]@32
  void *v51; // [sp+34h] [bp-6Ch]@30
  int v52; // [sp+38h] [bp-68h]@32
  int v53; // [sp+44h] [bp-5Ch]@33
  int v54; // [sp+48h] [bp-58h]@29
  void *ptr; // [sp+4Ch] [bp-54h]@24
  int v56; // [sp+50h] [bp-50h]@26
  void *v57; // [sp+54h] [bp-4Ch]@24
  int v58; // [sp+58h] [bp-48h]@26
  int v59; // [sp+64h] [bp-3Ch]@27
  int v60; // [sp+68h] [bp-38h]@23
  void *v61; // [sp+6Ch] [bp-34h]@1
  char *v62; // [sp+70h] [bp-30h]@1
  char *v63; // [sp+74h] [bp-2Ch]@1
  char v64; // [sp+78h] [bp-28h]@25

  v43 = a2;
  v44 = a1;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v3 = *(_QWORD *)(*(_DWORD *)(a1 + 980) + 4) >> 32;
  v2 = *(_QWORD *)(*(_DWORD *)(a1 + 980) + 4);
  if ( v2 != v3 )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)v2;
      if ( *(_DWORD *)(*(_DWORD *)v2 + 76) == 1 )
      {
        if ( v4 == v63 )
        {
          v6 = v61;
          v7 = 0;
          v8 = (v4 - (_BYTE *)v61) >> 2;
          if ( !v8 )
            v8 = 1;
          v9 = v8 + ((v4 - (_BYTE *)v61) >> 2);
          v10 = v8 + ((v4 - (_BYTE *)v61) >> 2);
          if ( 0 != v9 >> 30 )
            v10 = 0x3FFFFFFF;
          if ( v9 < v8 )
          if ( v10 )
          {
            if ( v10 >= 0x40000000 )
              sub_21E57F4();
            v7 = (char *)operator new(4 * v10);
            v4 = v62;
            v6 = v61;
          }
          v11 = v4 - v6;
          v12 = (int)&v7[v4 - v6];
          *(_DWORD *)&v7[v11] = v5;
          if ( 0 != v11 >> 2 )
            _aeabi_memmove4(v7, v6);
          v4 = (char *)(v12 + 4);
          if ( v6 )
            operator delete(v6);
          v61 = v7;
          v62 = v4;
          v63 = &v7[4 * v10];
        }
        else
          *(_DWORD *)v4 = v5;
          v4 = v62 + 4;
          v62 += 4;
      }
      v2 += 4;
    }
    while ( v3 != v2 );
  }
  v13 = (int *)(v44 + 528);
  ContentManager::getWorldResourceFolder((void **)&v60, *(int **)(v44 + 960), (int *)(v44 + 528));
  v14 = operator new(0x20u);
  DirectoryPackSource::DirectoryPackSource((int)v14, &v60, 1, 3, 0, 0);
  v15 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *(void (__fastcall **)(void **, void *, int, int))(*(_DWORD *)v14 + 20);
  v17 = MainMenuScreenModel::getPackManifestFactory(*(MainMenuScreenModel **)(v44 + 424));
  v18 = MainMenuScreenModel::getKeyProvider(*(MainMenuScreenModel **)(v44 + 424));
  v16(&ptr, v14, v17, v18);
  v19 = v57;
  if ( v57 )
      v20 = *(void **)v19;
      __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
        (int)&v64,
        (int)v19 + 8);
      operator delete(v19);
      v19 = v20;
    while ( v20 );
  _aeabi_memclr4(ptr, 4 * v56);
  v57 = 0;
  v58 = 0;
  if ( ptr && &v59 != ptr )
    operator delete(ptr);
  ContentManager::getWorldBehaviorFolder((void **)&v54, *(int **)(v44 + 960), v13);
  v21 = operator new(0x20u);
  DirectoryPackSource::DirectoryPackSource((int)v21, &v54, 2, 3, 0, 0);
  v22 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v54 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = *(void (__fastcall **)(void **, void *, int, int))(*(_DWORD *)v21 + 20);
  v24 = MainMenuScreenModel::getPackManifestFactory(*(MainMenuScreenModel **)(v44 + 424));
  v25 = MainMenuScreenModel::getKeyProvider(*(MainMenuScreenModel **)(v44 + 424));
  v23(&v49, v21, v24, v25);
  v26 = v51;
  if ( v51 )
      v27 = *(void **)v26;
        (int)v26 + 8);
      operator delete(v26);
      v26 = v27;
    while ( v27 );
  _aeabi_memclr4(v49, 4 * v50);
  v51 = 0;
  v52 = 0;
  if ( v49 && &v53 != v49 )
    operator delete(v49);
  sub_1294BB4((int)v21, (int)&v61);
  sub_1294BB4((int)v14, (int)&v61);
  if ( v62 == v61 )
    v28 = 0;
  else
    std::make_unique<ResourcePackCopyProgressHandler,std::string const&,std::function<void ()(void)> &>(&v48, v13, v43);
    v29 = v48;
    v48 = 0;
    v30 = *(_DWORD *)(v44 + 424);
    sub_21E94B4((void **)&v47, "resource_packs_copy_on_use");
    v46 = v29;
    v31 = sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
    MainMenuScreenModel::navigateToModalProgressScreen(v30, (int)&v47, (int)&v46, 0, (int)v31);
    v32 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
      else
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    if ( v46 )
      (*(void (**)(void))(*(_DWORD *)v46 + 4))();
    v46 = 0;
    v33 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v47 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v28 = 1;
  (*(void (__fastcall **)(void *))(*(_DWORD *)v21 + 4))(v21);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v14 + 4))(v14);
  if ( v61 )
    operator delete(v61);
  return v28;
}


void __fastcall WorldSettingsScreenController::_setGameRule(int a1, int a2, int **a3)
{
  int v3; // r4@1
  int **v4; // r6@1
  int v5; // r5@1
  unsigned __int64 *v6; // r0@2
  const void **v7; // r0@6
  char *v8; // r0@6
  unsigned int v9; // r2@7
  char *v10; // r1@7
  void *v11; // r0@10
  char *v12; // r0@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int v19; // [sp+4h] [bp-24h]@7
  char *v20; // [sp+8h] [bp-20h]@6
  char *v21; // [sp+Ch] [bp-1Ch]@6
  int v22; // [sp+10h] [bp-18h]@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 516) )
  {
    v6 = (unsigned __int64 *)LevelData::getGameRules((LevelData *)(a1 + 592));
    GameRules::setRule(&v22, v6, v4, v5, 0);
    if ( v22 )
      (*(void (**)(void))(*(_DWORD *)v22 + 4))();
    v22 = 0;
  }
  else if ( !MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(a1 + 424)) )
    v20 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v20, *(*v4 - 3) + 10);
    sub_21E7408((const void **)&v20, "/gamerule ", 0xAu);
    sub_21E72F0((const void **)&v20, (const void **)v4);
    v7 = sub_21E7408((const void **)&v20, " ", 1u);
    v21 = (char *)*v7;
    *v7 = &unk_28898CC;
    v8 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v20 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    sub_21E8AF4(&v19, (int *)&v21);
    v9 = 5;
    v10 = "true";
    if ( v5 )
      v9 = 4;
    else
      v10 = "false";
    sub_21E7408((const void **)&v19, v10, v9);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v21,
      &v19);
    v11 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v19 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    WorldSettingsScreenController::_runCommandAsLocalPlayer(v3, (int *)&v21);
    v12 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v21 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
}


int __fastcall WorldSettingsScreenController::_handleInvalidMultiplayerSkin(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r6@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  __int64 v6; // r2@7 OVERLAPPED
  unsigned int *v7; // r1@8
  int (__fastcall *v8)(_DWORD *, void **, int); // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  int v11; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  _QWORD *v15; // [sp+4h] [bp-64h]@13
  void (*v16)(void); // [sp+Ch] [bp-5Ch]@7
  void *v17; // [sp+14h] [bp-54h]@1
  int v18; // [sp+18h] [bp-50h]@1
  int v19; // [sp+1Ch] [bp-4Ch]@1
  int v20; // [sp+20h] [bp-48h]@1
  void *v21; // [sp+24h] [bp-44h]@1
  int v22; // [sp+28h] [bp-40h]@1
  int v23; // [sp+2Ch] [bp-3Ch]@1
  int v24; // [sp+30h] [bp-38h]@1
  void *v25; // [sp+34h] [bp-34h]@1
  void *v26; // [sp+38h] [bp-30h]@1
  void *v27; // [sp+3Ch] [bp-2Ch]@1
  void *v28; // [sp+40h] [bp-28h]@1
  int v29; // [sp+44h] [bp-24h]@1
  char v30; // [sp+48h] [bp-20h]@1
  char v31; // [sp+4Ch] [bp-1Ch]@1
  int v32; // [sp+50h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<WorldSettingsScreenController>((int)&v31, (int)this);
  v17 = &unk_28898CC;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = &unk_28898CC;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = &unk_28898CC;
  v26 = &unk_28898CC;
  v27 = &unk_28898CC;
  v28 = &unk_28898CC;
  v29 = 1;
  v30 = 0;
  sub_21E8190(&v17, "options.turnOffMultiplayer", (_BYTE *)0x1A);
  sub_21E8190(&v21, "skins.multiplayer.locked", (_BYTE *)0x18);
  sub_21E8190(&v26, "options.continue", (_BYTE *)0x10);
  sub_21E8190(&v28, "options.skin.change", (_BYTE *)0x13);
  v2 = *(_QWORD *)&v31;
  if ( v32 )
  {
    v3 = (unsigned int *)(v32 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v16 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 8);
      {
        LODWORD(v6) = __ldrex(v7);
        HIDWORD(v6) = __strex(v6 + 1, v7);
      }
      while ( HIDWORD(v6) );
      ++*v7;
  v8 = sub_129C534;
  v15 = v5;
  LODWORD(v6) = sub_129C3E4;
  *(_QWORD *)&v16 = *(__int64 *)((char *)&v6 - 4);
  LODWORD(v6) = &v15;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v17, v6);
  if ( v16 )
    v16();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v17);
  v11 = v32;
    v12 = (unsigned int *)(v32 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  return 0;
}


void __fastcall WorldSettingsScreenController::~WorldSettingsScreenController(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController::~WorldSettingsScreenController(this);
}


void __fastcall WorldSettingsScreenController::_setImmutableWorld(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController::_setImmutableWorld(this, a2);
}


int __fastcall WorldSettingsScreenController::_getWorldGameMode(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@5

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    result = j_j_j__ZNK9LevelData11getGameTypeEv_0((WorldSettingsScreenController *)((char *)this + 592));
  }
  else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    result = -1;
  else
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 32))();
  return result;
}


int __fastcall WorldSettingsScreenController::_playWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int *v2; // r5@2 OVERLAPPED
  int *v3; // r6@2 OVERLAPPED
  int v4; // t1@3
  int v5; // r5@4
  _DWORD *v6; // r0@4
  _DWORD *v8; // [sp+0h] [bp-20h]@4
  void (*v9)(void); // [sp+8h] [bp-18h]@4
  unsigned int (__fastcall *v10)(int **); // [sp+Ch] [bp-14h]@4

  v1 = this;
  if ( *((_DWORD *)this + 129) == 3 )
  {
    WorldSettingsScreenController::_saveWorld(this);
    *(_QWORD *)&v2 = *(_QWORD *)ContentManager::getSources(*((ContentManager **)v1 + 240));
    while ( v3 != v2 )
    {
      v4 = *v2;
      ++v2;
      (*(void (**)(void))(*(_DWORD *)v4 + 16))();
    }
    v5 = *((_DWORD *)v1 + 241);
    v6 = operator new(4u);
    *v6 = v1;
    v8 = v6;
    v9 = (void (*)(void))sub_129AEF0;
    v10 = sub_129AA34;
    DlcPreCheckScreenHandler::tryValidateDlcForWorldLoad(v5, (const char **)v1 + 132, (int *)v1 + 146, (int)&v8);
    if ( v9 )
      v9();
  }
  return 0;
}


void __fastcall WorldSettingsScreenController::_registerControllerCallbacks(WorldSettingsScreenController *this)
{
  ScreenController *v1; // r7@1
  int v2; // r0@1
  _DWORD *v3; // r0@3
  int v4; // r4@7
  _DWORD *v5; // r0@7
  void *v6; // r0@9
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  int v9; // r4@14
  _DWORD *v10; // r0@14
  int v11; // r4@17
  _DWORD *v12; // r0@17
  void *v13; // r0@19
  int v14; // r4@20
  _DWORD *v15; // r0@20
  void *v16; // r0@22
  _DWORD *v17; // r0@23
  _DWORD *v18; // r0@27
  _DWORD *v19; // r0@31
  _DWORD *v20; // r0@35
  _DWORD *v21; // r0@39
  _DWORD *v22; // r0@39
  _DWORD *v23; // r0@39
  _DWORD *v24; // r0@39
  _DWORD *v25; // r0@39
  void *v26; // r0@49
  void *v27; // r0@50
  void *v28; // r0@51
  double v29; // r0@52
  void *v30; // r0@52
  void *v31; // r0@53
  void *v32; // r0@54
  void *v33; // r0@55
  _DWORD *v34; // r0@56
  _DWORD *v35; // r0@56
  _DWORD *v36; // r0@56
  void *v37; // r0@62
  void *v38; // r0@63
  void *v39; // r0@64
  double v40; // r0@65
  void *v41; // r0@65
  void *v42; // r0@66
  void *v43; // r0@67
  double v44; // r0@68
  void *v45; // r0@68
  void *v46; // r0@69
  void *v47; // r0@70
  _DWORD *v48; // r0@71
  _DWORD *v49; // r0@71
  _DWORD *v50; // r0@71
  void *v51; // r0@77
  void *v52; // r0@78
  void *v53; // r0@79
  double v54; // r0@80
  void *v55; // r0@80
  void *v56; // r0@81
  void *v57; // r0@82
  _DWORD *v58; // r0@83
  _DWORD *v59; // r0@83
  _DWORD *v60; // r0@83
  void *v61; // r0@93
  void *v62; // r0@94
  void *v63; // r0@95
  _DWORD *v64; // r0@96
  _DWORD *v65; // r0@96
  _DWORD *v66; // r0@96
  void *v67; // r0@102
  void *v68; // r0@103
  void *v69; // r0@104
  _DWORD *v70; // r0@105
  double v71; // r0@109
  void *v72; // r0@109
  void *v73; // r0@110
  void *v74; // r0@111
  _DWORD *v75; // r0@112
  _DWORD *v76; // r0@112
  _DWORD *v77; // r0@112
  void *v78; // r0@118
  void *v79; // r0@119
  void *v80; // r0@120
  _DWORD *v81; // r0@121
  double v82; // r0@125
  void *v83; // r0@125
  void *v84; // r0@126
  void *v85; // r0@127
  _DWORD *v86; // r0@128
  _DWORD *v87; // r0@128
  _DWORD *v88; // r0@128
  void *v89; // r0@134
  void *v90; // r0@135
  void *v91; // r0@136
  _DWORD *v92; // r0@137
  int v93; // r4@141
  _DWORD *v94; // r0@141
  void *v95; // r0@143
  _DWORD *v96; // r0@144
  _DWORD *v97; // r0@148
  _DWORD *v98; // r0@148
  _DWORD *v99; // r0@148
  void *v100; // r0@154
  void *v101; // r0@155
  void *v102; // r0@156
  _DWORD *v103; // r0@157
  _DWORD *v104; // r0@157
  _DWORD *v105; // r0@157
  void *v106; // r0@163
  void *v107; // r0@164
  void *v108; // r0@165
  _DWORD *v109; // r0@166
  _DWORD *v110; // r0@170
  _DWORD *v111; // r0@170
  _DWORD *v112; // r0@170
  void *v113; // r0@176
  void *v114; // r0@177
  void *v115; // r0@178
  _DWORD *v116; // r0@179
  _DWORD *v117; // r0@179
  _DWORD *v118; // r0@179
  void *v119; // r0@185
  void *v120; // r0@186
  void *v121; // r0@187
  _DWORD *v122; // r0@188
  _DWORD *v123; // r0@188
  _DWORD *v124; // r0@188
  void *v125; // r0@194
  void *v126; // r0@195
  void *v127; // r0@196
  _DWORD *v128; // r0@197
  _DWORD *v129; // r0@197
  _DWORD *v130; // r0@197
  void *v131; // r0@203
  void *v132; // r0@204
  void *v133; // r0@205
  _DWORD *v134; // r0@206
  _DWORD *v135; // r0@206
  _DWORD *v136; // r0@206
  void *v137; // r0@212
  void *v138; // r0@213
  void *v139; // r0@214
  _DWORD *v140; // r0@215
  _DWORD *v141; // r0@215
  _DWORD *v142; // r0@215
  void *v143; // r0@221
  void *v144; // r0@222
  void *v145; // r0@223
  _DWORD *v146; // r0@224
  _DWORD *v147; // r0@224
  _DWORD *v148; // r0@224
  void *v149; // r0@230
  void *v150; // r0@231
  void *v151; // r0@232
  _DWORD *v152; // r0@233
  _DWORD *v153; // r0@233
  _DWORD *v154; // r0@233
  void *v155; // r0@239
  void *v156; // r0@240
  void *v157; // r0@241
  _DWORD *v158; // r0@242
  _DWORD *v159; // r0@242
  _DWORD *v160; // r0@242
  void *v161; // r0@248
  void *v162; // r0@249
  void *v163; // r0@250
  _DWORD *v164; // r0@251
  _DWORD *v165; // r0@251
  _DWORD *v166; // r0@251
  void *v167; // r0@257
  void *v168; // r0@258
  void *v169; // r0@259
  _DWORD *v170; // r0@260
  _DWORD *v171; // r0@260
  _DWORD *v172; // r0@260
  void *v173; // r0@266
  void *v174; // r0@267
  void *v175; // r0@268
  _DWORD *v176; // r0@269
  _DWORD *v177; // r0@269
  _DWORD *v178; // r0@269
  void *v179; // r0@275
  void *v180; // r0@276
  void *v181; // r0@277
  _DWORD *v182; // r0@278
  _DWORD *v183; // r0@278
  _DWORD *v184; // r0@278
  void *v185; // r0@284
  void *v186; // r0@285
  void *v187; // r0@286
  _DWORD *v188; // r0@287
  _DWORD *v189; // r0@287
  _DWORD *v190; // r0@287
  void *v191; // r0@293
  void *v192; // r0@294
  void *v193; // r0@295
  int v194; // r4@296
  _DWORD *v195; // r0@296
  void *v196; // r0@298
  int v197; // r4@299
  _DWORD *v198; // r0@299
  void *v199; // r0@301
  int v200; // r4@302
  _DWORD *v201; // r0@302
  void *v202; // r0@304
  int v203; // r4@305
  _DWORD *v204; // r0@305
  void *v205; // r0@307
  int v206; // r4@308
  _DWORD *v207; // r0@308
  void *v208; // r0@310
  _DWORD *v209; // r0@311
  _DWORD *v210; // r0@311
  _DWORD *v211; // r0@311
  __int64 v212; // r1@311
  void *v213; // r0@317
  void *v214; // r0@318
  void *v215; // r0@319
  _DWORD *v216; // r0@320
  __int64 v217; // r1@320
  _DWORD *v218; // r0@320
  __int64 v219; // r1@320
  _DWORD *v220; // r0@320
  __int64 v221; // r1@320
  void *v222; // r0@326
  void *v223; // r0@327
  void *v224; // r0@328
  _DWORD *v225; // r0@329
  __int64 v226; // r1@329
  _DWORD *v227; // r0@329
  __int64 v228; // r1@329
  _DWORD *v229; // r0@329
  __int64 v230; // r1@329
  void *v231; // r0@335
  void *v232; // r0@336
  void *v233; // r0@337
  _DWORD *v234; // r0@338
  __int64 v235; // r1@338
  _DWORD *v236; // r0@338
  __int64 v237; // r1@338
  _DWORD *v238; // r0@338
  __int64 v239; // r1@338
  void *v240; // r0@344
  void *v241; // r0@345
  void *v242; // r0@346
  _DWORD *v243; // r0@347
  __int64 v244; // r1@347
  _DWORD *v245; // r0@347
  __int64 v246; // r1@347
  _DWORD *v247; // r0@347
  __int64 v248; // r1@347
  void *v249; // r0@353
  void *v250; // r0@354
  void *v251; // r0@355
  _DWORD *v252; // r0@356
  __int64 v253; // r1@356
  _DWORD *v254; // r0@356
  __int64 v255; // r1@356
  _DWORD *v256; // r0@356
  __int64 v257; // r1@356
  void *v258; // r0@362
  void *v259; // r0@363
  void *v260; // r0@364
  _DWORD *v261; // r0@365
  __int64 v262; // r1@365
  _DWORD *v263; // r0@365
  __int64 v264; // r1@365
  _DWORD *v265; // r0@365
  __int64 v266; // r1@365
  void *v267; // r0@371
  void *v268; // r0@372
  void *v269; // r0@373
  _DWORD *v270; // r0@374
  __int64 v271; // r1@374
  __int64 v272; // r1@374
  _DWORD *v273; // r0@378
  __int64 v274; // r1@378
  __int64 v275; // r1@378
  _DWORD *v276; // r0@382
  __int64 v277; // r1@382
  __int64 v278; // r1@382
  void *v279; // r0@386
  __int64 v280; // r1@386
  __int64 v281; // r1@386
  _DWORD *v282; // r0@390
  __int64 v283; // r1@390
  _DWORD *v284; // r0@390
  __int64 v285; // r1@390
  _DWORD *v286; // r0@390
  __int64 v287; // r1@390
  void *v288; // r0@396
  void *v289; // r0@397
  void *v290; // r0@398
  _DWORD *v291; // r0@399
  __int64 v292; // r1@399
  _DWORD *v293; // r0@399
  __int64 v294; // r1@399
  _DWORD *v295; // r0@399
  __int64 v296; // r1@399
  void *v297; // r0@405
  void *v298; // r0@406
  void *v299; // r0@407
  _DWORD *v300; // r0@408
  __int64 v301; // r1@408
  __int64 v302; // r1@408
  double v303; // r0@412
  void *v304; // r0@412
  void *v305; // r0@413
  void *v306; // r0@414
  double v307; // r0@415
  void *v308; // r0@415
  void *v309; // r0@416
  void *v310; // r0@417
  _DWORD *v311; // r0@418
  __int64 v312; // r1@418
  _DWORD *v313; // r0@418
  __int64 v314; // r1@418
  _DWORD *v315; // r0@418
  __int64 v316; // r1@418
  void *v317; // r0@424
  void *v318; // r0@425
  void *v319; // r0@426
  int v320; // r6@427
  unsigned int *v321; // r2@429
  signed int v322; // r1@431
  void *v323; // r5@437
  int v324; // r1@437
  void *v325; // r0@437
  unsigned __int64 *v326; // r7@442
  unsigned int *v327; // r2@444
  signed int v328; // r1@446
  unsigned __int64 *v329; // r5@452
  int v330; // r1@452
  void *v331; // r0@452
  int v332; // r6@457
  unsigned int *v333; // r2@459
  signed int v334; // r1@461
  void *v335; // r5@467
  int v336; // r1@467
  void *v337; // r0@467
  unsigned __int64 *v338; // r6@472
  unsigned int *v339; // r2@474
  signed int v340; // r1@476
  unsigned __int64 *v341; // r5@482
  int v342; // r1@482
  void *v343; // r0@482
  unsigned __int64 *v344; // r6@487
  unsigned int *v345; // r2@489
  signed int v346; // r1@491
  unsigned __int64 *v347; // r5@497
  int v348; // r1@497
  void *v349; // r0@497
  int v350; // r6@502
  unsigned int *v351; // r2@504
  signed int v352; // r1@506
  void *v353; // r5@512
  int v354; // r1@512
  void *v355; // r0@512
  unsigned __int64 *v356; // r6@517
  unsigned int *v357; // r2@519
  signed int v358; // r1@521
  unsigned __int64 *v359; // r5@527
  int v360; // r1@527
  void *v361; // r0@527
  unsigned __int64 *v362; // r6@532
  unsigned int *v363; // r2@534
  signed int v364; // r1@536
  unsigned __int64 *v365; // r5@542
  int v366; // r1@542
  void *v367; // r0@542
  unsigned int *v368; // r2@548
  signed int v369; // r1@550
  unsigned int *v370; // r2@552
  signed int v371; // r1@554
  unsigned int *v372; // r2@556
  signed int v373; // r1@558
  unsigned int *v374; // r2@560
  signed int v375; // r1@562
  unsigned int *v376; // r2@564
  signed int v377; // r1@566
  unsigned int *v378; // r2@568
  signed int v379; // r1@570
  unsigned int *v380; // r2@572
  signed int v381; // r1@574
  unsigned int *v382; // r2@576
  signed int v383; // r1@578
  unsigned int *v384; // r2@580
  signed int v385; // r1@582
  unsigned int *v386; // r2@584
  signed int v387; // r1@586
  unsigned int *v388; // r2@588
  signed int v389; // r1@590
  unsigned int *v390; // r2@592
  signed int v391; // r1@594
  unsigned int *v392; // r2@596
  signed int v393; // r1@598
  unsigned int *v394; // r2@600
  signed int v395; // r1@602
  unsigned int *v396; // r2@604
  signed int v397; // r1@606
  unsigned int *v398; // r2@608
  signed int v399; // r1@610
  unsigned int *v400; // r2@612
  signed int v401; // r1@614
  unsigned int *v402; // r2@616
  signed int v403; // r1@618
  unsigned int *v404; // r2@620
  signed int v405; // r1@622
  unsigned int *v406; // r2@624
  signed int v407; // r1@626
  unsigned int *v408; // r2@628
  signed int v409; // r1@630
  unsigned int *v410; // r2@632
  signed int v411; // r1@634
  unsigned int *v412; // r2@636
  signed int v413; // r1@638
  unsigned int *v414; // r2@640
  signed int v415; // r1@642
  unsigned int *v416; // r2@644
  signed int v417; // r1@646
  unsigned int *v418; // r2@648
  signed int v419; // r1@650
  unsigned int *v420; // r2@652
  signed int v421; // r1@654
  unsigned int *v422; // r2@656
  signed int v423; // r1@658
  unsigned int *v424; // r2@660
  signed int v425; // r1@662
  unsigned int *v426; // r2@664
  signed int v427; // r1@666
  unsigned int *v428; // r2@668
  signed int v429; // r1@670
  unsigned int *v430; // r2@672
  signed int v431; // r1@674
  unsigned int *v432; // r2@676
  signed int v433; // r1@678
  unsigned int *v434; // r2@680
  signed int v435; // r1@682
  unsigned int *v436; // r2@684
  signed int v437; // r1@686
  unsigned int *v438; // r2@688
  signed int v439; // r1@690
  unsigned int *v440; // r2@692
  signed int v441; // r1@694
  unsigned int *v442; // r2@696
  signed int v443; // r1@698
  unsigned int *v444; // r2@700
  signed int v445; // r1@702
  unsigned int *v446; // r2@704
  signed int v447; // r1@706
  unsigned int *v448; // r2@708
  signed int v449; // r1@710
  unsigned int *v450; // r2@712
  signed int v451; // r1@714
  unsigned int *v452; // r2@716
  signed int v453; // r1@718
  unsigned int *v454; // r2@720
  signed int v455; // r1@722
  unsigned int *v456; // r2@724
  signed int v457; // r1@726
  unsigned int *v458; // r2@728
  signed int v459; // r1@730
  unsigned int *v460; // r2@732
  signed int v461; // r1@734
  unsigned int *v462; // r2@736
  signed int v463; // r1@738
  unsigned int *v464; // r2@740
  signed int v465; // r1@742
  unsigned int *v466; // r2@744
  signed int v467; // r1@746
  unsigned int *v468; // r2@748
  signed int v469; // r1@750
  unsigned int *v470; // r2@752
  signed int v471; // r1@754
  unsigned int *v472; // r2@756
  signed int v473; // r1@758
  unsigned int *v474; // r2@760
  signed int v475; // r1@762
  unsigned int *v476; // r2@764
  signed int v477; // r1@766
  unsigned int *v478; // r2@768
  signed int v479; // r1@770
  unsigned int *v480; // r2@772
  signed int v481; // r1@774
  unsigned int *v482; // r2@776
  signed int v483; // r1@778
  unsigned int *v484; // r2@780
  signed int v485; // r1@782
  unsigned int *v486; // r2@784
  signed int v487; // r1@786
  unsigned int *v488; // r2@788
  signed int v489; // r1@790
  unsigned int *v490; // r2@792
  signed int v491; // r1@794
  unsigned int *v492; // r2@796
  signed int v493; // r1@798
  unsigned int *v494; // r2@800
  signed int v495; // r1@802
  unsigned int *v496; // r2@804
  signed int v497; // r1@806
  unsigned int *v498; // r2@808
  signed int v499; // r1@810
  unsigned int *v500; // r2@812
  signed int v501; // r1@814
  unsigned int *v502; // r2@816
  signed int v503; // r1@818
  unsigned int *v504; // r2@820
  signed int v505; // r1@822
  unsigned int *v506; // r2@824
  signed int v507; // r1@826
  unsigned int *v508; // r2@828
  signed int v509; // r1@830
  unsigned int *v510; // r2@832
  signed int v511; // r1@834
  unsigned int *v512; // r2@836
  signed int v513; // r1@838
  unsigned int *v514; // r2@840
  signed int v515; // r1@842
  unsigned int *v516; // r2@844
  signed int v517; // r1@846
  unsigned int *v518; // r2@848
  signed int v519; // r1@850
  unsigned int *v520; // r2@852
  signed int v521; // r1@854
  unsigned int *v522; // r2@856
  signed int v523; // r1@858
  unsigned int *v524; // r2@860
  signed int v525; // r1@862
  unsigned int *v526; // r2@864
  signed int v527; // r1@866
  unsigned int *v528; // r2@868
  signed int v529; // r1@870
  unsigned int *v530; // r2@872
  signed int v531; // r1@874
  unsigned int *v532; // r2@876
  signed int v533; // r1@878
  unsigned int *v534; // r2@880
  signed int v535; // r1@882
  unsigned int *v536; // r2@884
  signed int v537; // r1@886
  unsigned int *v538; // r2@888
  signed int v539; // r1@890
  unsigned int *v540; // r2@892
  signed int v541; // r1@894
  unsigned int *v542; // r2@896
  signed int v543; // r1@898
  unsigned int *v544; // r2@900
  signed int v545; // r1@902
  unsigned int *v546; // r2@904
  signed int v547; // r1@906
  unsigned int *v548; // r2@908
  signed int v549; // r1@910
  unsigned int *v550; // r2@912
  signed int v551; // r1@914
  unsigned int *v552; // r2@916
  signed int v553; // r1@918
  unsigned int *v554; // r2@920
  signed int v555; // r1@922
  unsigned int *v556; // r2@924
  signed int v557; // r1@926
  unsigned int *v558; // r2@928
  signed int v559; // r1@930
  unsigned int *v560; // r2@932
  signed int v561; // r1@934
  unsigned int *v562; // r2@936
  signed int v563; // r1@938
  unsigned int *v564; // r2@940
  signed int v565; // r1@942
  unsigned int *v566; // r2@944
  signed int v567; // r1@946
  unsigned int *v568; // r2@948
  signed int v569; // r1@950
  unsigned int *v570; // r2@952
  signed int v571; // r1@954
  unsigned int *v572; // r2@956
  signed int v573; // r1@958
  unsigned int *v574; // r2@960
  signed int v575; // r1@962
  unsigned int *v576; // r2@964
  signed int v577; // r1@966
  unsigned int *v578; // r2@968
  signed int v579; // r1@970
  unsigned int *v580; // r2@972
  signed int v581; // r1@974
  unsigned int *v582; // r2@976
  signed int v583; // r1@978
  unsigned int *v584; // r2@980
  signed int v585; // r1@982
  unsigned int *v586; // r2@984
  signed int v587; // r1@986
  unsigned int *v588; // r2@988
  signed int v589; // r1@990
  unsigned int *v590; // r2@992
  signed int v591; // r1@994
  unsigned int *v592; // r2@996
  signed int v593; // r1@998
  unsigned int *v594; // r2@1000
  signed int v595; // r1@1002
  unsigned int *v596; // r2@1004
  signed int v597; // r1@1006
  unsigned int *v598; // r2@1008
  signed int v599; // r1@1010
  unsigned int *v600; // r2@1012
  signed int v601; // r1@1014
  unsigned int *v602; // r2@1016
  signed int v603; // r1@1018
  unsigned int *v604; // r2@1020
  signed int v605; // r1@1022
  unsigned int *v606; // r2@1024
  signed int v607; // r1@1026
  unsigned int *v608; // r2@1028
  signed int v609; // r1@1030
  unsigned int *v610; // r2@1032
  signed int v611; // r1@1034
  unsigned int *v612; // r2@1036
  signed int v613; // r1@1038
  unsigned int *v614; // r2@1040
  signed int v615; // r1@1042
  unsigned int *v616; // r2@1044
  signed int v617; // r1@1046
  unsigned int *v618; // r2@1048
  signed int v619; // r1@1050
  unsigned int *v620; // r2@1052
  signed int v621; // r1@1054
  unsigned int *v622; // r2@1056
  signed int v623; // r1@1058
  unsigned int *v624; // r2@1060
  signed int v625; // r1@1062
  unsigned int *v626; // r2@1064
  signed int v627; // r1@1066
  unsigned int *v628; // r2@1068
  signed int v629; // r1@1070
  unsigned int *v630; // r2@1072
  signed int v631; // r1@1074
  _DWORD *v632; // [sp+30h] [bp-F88h]@418
  __int64 v633; // [sp+38h] [bp-F80h]@418
  _DWORD *v634; // [sp+40h] [bp-F78h]@418
  __int64 v635; // [sp+48h] [bp-F70h]@418
  _DWORD *v636; // [sp+50h] [bp-F68h]@418
  __int64 v637; // [sp+58h] [bp-F60h]@418
  int v638; // [sp+64h] [bp-F54h]@418
  int v639; // [sp+6Ch] [bp-F4Ch]@418
  int v640; // [sp+74h] [bp-F44h]@418
  int v641; // [sp+84h] [bp-F34h]@415
  int v642; // [sp+88h] [bp-F30h]@415
  int v643; // [sp+8Ch] [bp-F2Ch]@415
  int v644; // [sp+90h] [bp-F28h]@415
  int v645; // [sp+94h] [bp-F24h]@415
  int v646; // [sp+98h] [bp-F20h]@415
  void *ptr; // [sp+9Ch] [bp-F1Ch]@415
  int v648; // [sp+A0h] [bp-F18h]@439
  int v649; // [sp+A4h] [bp-F14h]@427
  int v650; // [sp+A8h] [bp-F10h]@439
  int v651; // [sp+B4h] [bp-F04h]@440
  int v652; // [sp+C4h] [bp-EF4h]@412
  int v653; // [sp+C8h] [bp-EF0h]@412
  int v654; // [sp+CCh] [bp-EECh]@412
  int v655; // [sp+D0h] [bp-EE8h]@412
  int v656; // [sp+D4h] [bp-EE4h]@412
  int v657; // [sp+D8h] [bp-EE0h]@412
  void *v658; // [sp+DCh] [bp-EDCh]@412
  int v659; // [sp+E0h] [bp-ED8h]@454
  unsigned __int64 *v660; // [sp+E4h] [bp-ED4h]@442
  int v661; // [sp+E8h] [bp-ED0h]@454
  int v662; // [sp+F4h] [bp-EC4h]@455
  void *v663; // [sp+F8h] [bp-EC0h]@408
  __int64 v664; // [sp+100h] [bp-EB8h]@408
  _DWORD *v665; // [sp+108h] [bp-EB0h]@408
  __int64 v666; // [sp+110h] [bp-EA8h]@408
  int v667; // [sp+118h] [bp-EA0h]@408
  _DWORD *v668; // [sp+11Ch] [bp-E9Ch]@399
  __int64 v669; // [sp+124h] [bp-E94h]@399
  _DWORD *v670; // [sp+12Ch] [bp-E8Ch]@399
  __int64 v671; // [sp+134h] [bp-E84h]@399
  _DWORD *v672; // [sp+13Ch] [bp-E7Ch]@399
  __int64 v673; // [sp+144h] [bp-E74h]@399
  int v674; // [sp+150h] [bp-E68h]@399
  int v675; // [sp+158h] [bp-E60h]@399
  int v676; // [sp+160h] [bp-E58h]@399
  _DWORD *v677; // [sp+164h] [bp-E54h]@390
  __int64 v678; // [sp+16Ch] [bp-E4Ch]@390
  _DWORD *v679; // [sp+174h] [bp-E44h]@390
  __int64 v680; // [sp+17Ch] [bp-E3Ch]@390
  _DWORD *v681; // [sp+184h] [bp-E34h]@390
  __int64 v682; // [sp+18Ch] [bp-E2Ch]@390
  int v683; // [sp+198h] [bp-E20h]@390
  int v684; // [sp+1A0h] [bp-E18h]@390
  int v685; // [sp+1A8h] [bp-E10h]@390
  void *v686; // [sp+1ACh] [bp-E0Ch]@386
  __int64 v687; // [sp+1B4h] [bp-E04h]@386
  void *v688; // [sp+1BCh] [bp-DFCh]@386
  __int64 v689; // [sp+1C4h] [bp-DF4h]@386
  int v690; // [sp+1CCh] [bp-DECh]@386
  void *v691; // [sp+1D0h] [bp-DE8h]@382
  __int64 v692; // [sp+1D8h] [bp-DE0h]@382
  _DWORD *v693; // [sp+1E0h] [bp-DD8h]@382
  __int64 v694; // [sp+1E8h] [bp-DD0h]@382
  int v695; // [sp+1F0h] [bp-DC8h]@382
  void *v696; // [sp+1F4h] [bp-DC4h]@378
  __int64 v697; // [sp+1FCh] [bp-DBCh]@378
  _DWORD *v698; // [sp+204h] [bp-DB4h]@378
  __int64 v699; // [sp+20Ch] [bp-DACh]@378
  int v700; // [sp+214h] [bp-DA4h]@378
  void *v701; // [sp+218h] [bp-DA0h]@374
  __int64 v702; // [sp+220h] [bp-D98h]@374
  _DWORD *v703; // [sp+228h] [bp-D90h]@374
  __int64 v704; // [sp+230h] [bp-D88h]@374
  int v705; // [sp+238h] [bp-D80h]@374
  _DWORD *v706; // [sp+23Ch] [bp-D7Ch]@365
  __int64 v707; // [sp+244h] [bp-D74h]@365
  _DWORD *v708; // [sp+24Ch] [bp-D6Ch]@365
  __int64 v709; // [sp+254h] [bp-D64h]@365
  _DWORD *v710; // [sp+25Ch] [bp-D5Ch]@365
  __int64 v711; // [sp+264h] [bp-D54h]@365
  int v712; // [sp+270h] [bp-D48h]@365
  int v713; // [sp+278h] [bp-D40h]@365
  int v714; // [sp+280h] [bp-D38h]@365
  _DWORD *v715; // [sp+284h] [bp-D34h]@356
  __int64 v716; // [sp+28Ch] [bp-D2Ch]@356
  _DWORD *v717; // [sp+294h] [bp-D24h]@356
  __int64 v718; // [sp+29Ch] [bp-D1Ch]@356
  _DWORD *v719; // [sp+2A4h] [bp-D14h]@356
  __int64 v720; // [sp+2ACh] [bp-D0Ch]@356
  int v721; // [sp+2B8h] [bp-D00h]@356
  int v722; // [sp+2C0h] [bp-CF8h]@356
  int v723; // [sp+2C8h] [bp-CF0h]@356
  _DWORD *v724; // [sp+2CCh] [bp-CECh]@347
  __int64 v725; // [sp+2D4h] [bp-CE4h]@347
  _DWORD *v726; // [sp+2DCh] [bp-CDCh]@347
  __int64 v727; // [sp+2E4h] [bp-CD4h]@347
  _DWORD *v728; // [sp+2ECh] [bp-CCCh]@347
  __int64 v729; // [sp+2F4h] [bp-CC4h]@347
  int v730; // [sp+300h] [bp-CB8h]@347
  int v731; // [sp+308h] [bp-CB0h]@347
  int v732; // [sp+310h] [bp-CA8h]@347
  _DWORD *v733; // [sp+314h] [bp-CA4h]@338
  __int64 v734; // [sp+31Ch] [bp-C9Ch]@338
  _DWORD *v735; // [sp+324h] [bp-C94h]@338
  __int64 v736; // [sp+32Ch] [bp-C8Ch]@338
  _DWORD *v737; // [sp+334h] [bp-C84h]@338
  __int64 v738; // [sp+33Ch] [bp-C7Ch]@338
  int v739; // [sp+348h] [bp-C70h]@338
  int v740; // [sp+350h] [bp-C68h]@338
  int v741; // [sp+358h] [bp-C60h]@338
  _DWORD *v742; // [sp+35Ch] [bp-C5Ch]@329
  __int64 v743; // [sp+364h] [bp-C54h]@329
  _DWORD *v744; // [sp+36Ch] [bp-C4Ch]@329
  __int64 v745; // [sp+374h] [bp-C44h]@329
  _DWORD *v746; // [sp+37Ch] [bp-C3Ch]@329
  __int64 v747; // [sp+384h] [bp-C34h]@329
  int v748; // [sp+390h] [bp-C28h]@329
  int v749; // [sp+398h] [bp-C20h]@329
  int v750; // [sp+3A0h] [bp-C18h]@329
  _DWORD *v751; // [sp+3A4h] [bp-C14h]@320
  __int64 v752; // [sp+3ACh] [bp-C0Ch]@320
  _DWORD *v753; // [sp+3B4h] [bp-C04h]@320
  __int64 v754; // [sp+3BCh] [bp-BFCh]@320
  _DWORD *v755; // [sp+3C4h] [bp-BF4h]@320
  __int64 v756; // [sp+3CCh] [bp-BECh]@320
  int v757; // [sp+3D8h] [bp-BE0h]@320
  int v758; // [sp+3E0h] [bp-BD8h]@320
  int v759; // [sp+3E8h] [bp-BD0h]@320
  _DWORD *v760; // [sp+3ECh] [bp-BCCh]@311
  __int64 v761; // [sp+3F4h] [bp-BC4h]@311
  _DWORD *v762; // [sp+3FCh] [bp-BBCh]@311
  void (*v763)(void); // [sp+404h] [bp-BB4h]@311
  _BOOL4 (__fastcall *v764)(int); // [sp+408h] [bp-BB0h]@311
  _DWORD *v765; // [sp+40Ch] [bp-BACh]@311
  void (*v766)(void); // [sp+414h] [bp-BA4h]@311
  int (__fastcall *v767)(WorldSettingsScreenController ***); // [sp+418h] [bp-BA0h]@311
  int v768; // [sp+420h] [bp-B98h]@311
  int v769; // [sp+428h] [bp-B90h]@311
  int v770; // [sp+430h] [bp-B88h]@311
  _DWORD *v771; // [sp+434h] [bp-B84h]@308
  void (*v772)(void); // [sp+43Ch] [bp-B7Ch]@308
  int (__fastcall *v773)(WorldSettingsScreenController ***); // [sp+440h] [bp-B78h]@308
  int v774; // [sp+448h] [bp-B70h]@308
  _DWORD *v775; // [sp+44Ch] [bp-B6Ch]@305
  void (*v776)(void); // [sp+454h] [bp-B64h]@305
  int (__fastcall *v777)(WorldSettingsScreenController ***); // [sp+458h] [bp-B60h]@305
  int v778; // [sp+460h] [bp-B58h]@305
  _DWORD *v779; // [sp+464h] [bp-B54h]@302
  void (*v780)(void); // [sp+46Ch] [bp-B4Ch]@302
  int (__fastcall *v781)(WorldSettingsScreenController ***); // [sp+470h] [bp-B48h]@302
  int v782; // [sp+478h] [bp-B40h]@302
  _DWORD *v783; // [sp+47Ch] [bp-B3Ch]@299
  void (*v784)(void); // [sp+484h] [bp-B34h]@299
  int (__fastcall *v785)(WorldSettingsScreenController ***); // [sp+488h] [bp-B30h]@299
  int v786; // [sp+490h] [bp-B28h]@299
  _DWORD *v787; // [sp+494h] [bp-B24h]@296
  void (*v788)(void); // [sp+49Ch] [bp-B1Ch]@296
  int (__fastcall *v789)(WorldSettingsScreenController ***); // [sp+4A0h] [bp-B18h]@296
  int v790; // [sp+4A8h] [bp-B10h]@296
  _DWORD *v791; // [sp+4ACh] [bp-B0Ch]@287
  void (*v792)(void); // [sp+4B4h] [bp-B04h]@287
  void (__fastcall *v793)(int **, int); // [sp+4B8h] [bp-B00h]@287
  _DWORD *v794; // [sp+4BCh] [bp-AFCh]@287
  void (*v795)(void); // [sp+4C4h] [bp-AF4h]@287
  int (__fastcall *v796)(int **); // [sp+4C8h] [bp-AF0h]@287
  _DWORD *v797; // [sp+4CCh] [bp-AECh]@287
  void (*v798)(void); // [sp+4D4h] [bp-AE4h]@287
  int (__fastcall *v799)(WorldSettingsScreenController ***); // [sp+4D8h] [bp-AE0h]@287
  int v800; // [sp+4E0h] [bp-AD8h]@287
  int v801; // [sp+4E8h] [bp-AD0h]@287
  int v802; // [sp+4F0h] [bp-AC8h]@287
  _DWORD *v803; // [sp+4F4h] [bp-AC4h]@278
  void (*v804)(void); // [sp+4FCh] [bp-ABCh]@278
  void (__fastcall *v805)(int **, int); // [sp+500h] [bp-AB8h]@278
  _DWORD *v806; // [sp+504h] [bp-AB4h]@278
  void (*v807)(void); // [sp+50Ch] [bp-AACh]@278
  int (__fastcall *v808)(int **); // [sp+510h] [bp-AA8h]@278
  _DWORD *v809; // [sp+514h] [bp-AA4h]@278
  void (*v810)(void); // [sp+51Ch] [bp-A9Ch]@278
  int (__fastcall *v811)(WorldSettingsScreenController ***); // [sp+520h] [bp-A98h]@278
  int v812; // [sp+528h] [bp-A90h]@278
  int v813; // [sp+530h] [bp-A88h]@278
  int v814; // [sp+538h] [bp-A80h]@278
  _DWORD *v815; // [sp+53Ch] [bp-A7Ch]@269
  void (*v816)(void); // [sp+544h] [bp-A74h]@269
  void (__fastcall *v817)(int **, int); // [sp+548h] [bp-A70h]@269
  _DWORD *v818; // [sp+54Ch] [bp-A6Ch]@269
  void (*v819)(void); // [sp+554h] [bp-A64h]@269
  int (__fastcall *v820)(int **); // [sp+558h] [bp-A60h]@269
  _DWORD *v821; // [sp+55Ch] [bp-A5Ch]@269
  void (*v822)(void); // [sp+564h] [bp-A54h]@269
  int (__fastcall *v823)(WorldSettingsScreenController ***); // [sp+568h] [bp-A50h]@269
  int v824; // [sp+570h] [bp-A48h]@269
  int v825; // [sp+578h] [bp-A40h]@269
  int v826; // [sp+580h] [bp-A38h]@269
  _DWORD *v827; // [sp+584h] [bp-A34h]@260
  void (*v828)(void); // [sp+58Ch] [bp-A2Ch]@260
  void (__fastcall *v829)(int **, int); // [sp+590h] [bp-A28h]@260
  _DWORD *v830; // [sp+594h] [bp-A24h]@260
  void (*v831)(void); // [sp+59Ch] [bp-A1Ch]@260
  int (__fastcall *v832)(int **); // [sp+5A0h] [bp-A18h]@260
  _DWORD *v833; // [sp+5A4h] [bp-A14h]@260
  void (*v834)(void); // [sp+5ACh] [bp-A0Ch]@260
  int (__fastcall *v835)(WorldSettingsScreenController ***); // [sp+5B0h] [bp-A08h]@260
  int v836; // [sp+5B8h] [bp-A00h]@260
  int v837; // [sp+5C0h] [bp-9F8h]@260
  int v838; // [sp+5C8h] [bp-9F0h]@260
  _DWORD *v839; // [sp+5CCh] [bp-9ECh]@251
  void (*v840)(void); // [sp+5D4h] [bp-9E4h]@251
  void (__fastcall *v841)(int **, int); // [sp+5D8h] [bp-9E0h]@251
  _DWORD *v842; // [sp+5DCh] [bp-9DCh]@251
  void (*v843)(void); // [sp+5E4h] [bp-9D4h]@251
  int (__fastcall *v844)(int **); // [sp+5E8h] [bp-9D0h]@251
  _DWORD *v845; // [sp+5ECh] [bp-9CCh]@251
  void (*v846)(void); // [sp+5F4h] [bp-9C4h]@251
  int (__fastcall *v847)(WorldSettingsScreenController ***); // [sp+5F8h] [bp-9C0h]@251
  int v848; // [sp+600h] [bp-9B8h]@251
  int v849; // [sp+608h] [bp-9B0h]@251
  int v850; // [sp+610h] [bp-9A8h]@251
  _DWORD *v851; // [sp+614h] [bp-9A4h]@242
  void (*v852)(void); // [sp+61Ch] [bp-99Ch]@242
  void (__fastcall *v853)(int **, int); // [sp+620h] [bp-998h]@242
  _DWORD *v854; // [sp+624h] [bp-994h]@242
  void (*v855)(void); // [sp+62Ch] [bp-98Ch]@242
  int (__fastcall *v856)(int **); // [sp+630h] [bp-988h]@242
  _DWORD *v857; // [sp+634h] [bp-984h]@242
  void (*v858)(void); // [sp+63Ch] [bp-97Ch]@242
  int (__fastcall *v859)(WorldSettingsScreenController ***); // [sp+640h] [bp-978h]@242
  int v860; // [sp+648h] [bp-970h]@242
  int v861; // [sp+650h] [bp-968h]@242
  int v862; // [sp+658h] [bp-960h]@242
  _DWORD *v863; // [sp+65Ch] [bp-95Ch]@233
  void (*v864)(void); // [sp+664h] [bp-954h]@233
  void (__fastcall *v865)(int **, int); // [sp+668h] [bp-950h]@233
  _DWORD *v866; // [sp+66Ch] [bp-94Ch]@233
  void (*v867)(void); // [sp+674h] [bp-944h]@233
  int (__fastcall *v868)(int **); // [sp+678h] [bp-940h]@233
  _DWORD *v869; // [sp+67Ch] [bp-93Ch]@233
  void (*v870)(void); // [sp+684h] [bp-934h]@233
  int (__fastcall *v871)(WorldSettingsScreenController ***); // [sp+688h] [bp-930h]@233
  int v872; // [sp+690h] [bp-928h]@233
  int v873; // [sp+698h] [bp-920h]@233
  int v874; // [sp+6A0h] [bp-918h]@233
  _DWORD *v875; // [sp+6A4h] [bp-914h]@224
  void (*v876)(void); // [sp+6ACh] [bp-90Ch]@224
  void (__fastcall *v877)(int **, int); // [sp+6B0h] [bp-908h]@224
  _DWORD *v878; // [sp+6B4h] [bp-904h]@224
  void (*v879)(void); // [sp+6BCh] [bp-8FCh]@224
  int (__fastcall *v880)(int **); // [sp+6C0h] [bp-8F8h]@224
  _DWORD *v881; // [sp+6C4h] [bp-8F4h]@224
  void (*v882)(void); // [sp+6CCh] [bp-8ECh]@224
  int (__fastcall *v883)(WorldSettingsScreenController ***); // [sp+6D0h] [bp-8E8h]@224
  int v884; // [sp+6D8h] [bp-8E0h]@224
  int v885; // [sp+6E0h] [bp-8D8h]@224
  int v886; // [sp+6E8h] [bp-8D0h]@224
  _DWORD *v887; // [sp+6ECh] [bp-8CCh]@215
  void (*v888)(void); // [sp+6F4h] [bp-8C4h]@215
  void (__fastcall *v889)(int **, int); // [sp+6F8h] [bp-8C0h]@215
  _DWORD *v890; // [sp+6FCh] [bp-8BCh]@215
  void (*v891)(void); // [sp+704h] [bp-8B4h]@215
  int (__fastcall *v892)(int **); // [sp+708h] [bp-8B0h]@215
  _DWORD *v893; // [sp+70Ch] [bp-8ACh]@215
  void (*v894)(void); // [sp+714h] [bp-8A4h]@215
  int (__fastcall *v895)(WorldSettingsScreenController ***); // [sp+718h] [bp-8A0h]@215
  int v896; // [sp+720h] [bp-898h]@215
  int v897; // [sp+728h] [bp-890h]@215
  int v898; // [sp+730h] [bp-888h]@215
  _DWORD *v899; // [sp+734h] [bp-884h]@206
  void (*v900)(void); // [sp+73Ch] [bp-87Ch]@206
  void (__fastcall *v901)(int **, int); // [sp+740h] [bp-878h]@206
  _DWORD *v902; // [sp+744h] [bp-874h]@206
  void (*v903)(void); // [sp+74Ch] [bp-86Ch]@206
  int (__fastcall *v904)(int **); // [sp+750h] [bp-868h]@206
  _DWORD *v905; // [sp+754h] [bp-864h]@206
  void (*v906)(void); // [sp+75Ch] [bp-85Ch]@206
  int (__fastcall *v907)(WorldSettingsScreenController ***); // [sp+760h] [bp-858h]@206
  int v908; // [sp+768h] [bp-850h]@206
  int v909; // [sp+770h] [bp-848h]@206
  int v910; // [sp+778h] [bp-840h]@206
  _DWORD *v911; // [sp+77Ch] [bp-83Ch]@197
  void (*v912)(void); // [sp+784h] [bp-834h]@197
  void (__fastcall *v913)(int **, int); // [sp+788h] [bp-830h]@197
  _DWORD *v914; // [sp+78Ch] [bp-82Ch]@197
  void (*v915)(void); // [sp+794h] [bp-824h]@197
  int (__fastcall *v916)(int **); // [sp+798h] [bp-820h]@197
  _DWORD *v917; // [sp+79Ch] [bp-81Ch]@197
  void (*v918)(void); // [sp+7A4h] [bp-814h]@197
  int (__fastcall *v919)(WorldSettingsScreenController ***); // [sp+7A8h] [bp-810h]@197
  int v920; // [sp+7B0h] [bp-808h]@197
  int v921; // [sp+7B8h] [bp-800h]@197
  int v922; // [sp+7C0h] [bp-7F8h]@197
  _DWORD *v923; // [sp+7C4h] [bp-7F4h]@188
  void (*v924)(void); // [sp+7CCh] [bp-7ECh]@188
  signed int (__fastcall *v925)(WorldSettingsScreenController ***, int); // [sp+7D0h] [bp-7E8h]@188
  _DWORD *v926; // [sp+7D4h] [bp-7E4h]@188
  void (*v927)(void); // [sp+7DCh] [bp-7DCh]@188
  int (__fastcall *v928)(int **); // [sp+7E0h] [bp-7D8h]@188
  _DWORD *v929; // [sp+7E4h] [bp-7D4h]@188
  void (*v930)(void); // [sp+7ECh] [bp-7CCh]@188
  int (__fastcall *v931)(WorldSettingsScreenController ***); // [sp+7F0h] [bp-7C8h]@188
  int v932; // [sp+7F8h] [bp-7C0h]@188
  int v933; // [sp+800h] [bp-7B8h]@188
  int v934; // [sp+808h] [bp-7B0h]@188
  _DWORD *v935; // [sp+80Ch] [bp-7ACh]@179
  void (*v936)(void); // [sp+814h] [bp-7A4h]@179
  void (__fastcall *v937)(int **, int); // [sp+818h] [bp-7A0h]@179
  _DWORD *v938; // [sp+81Ch] [bp-79Ch]@179
  void (*v939)(void); // [sp+824h] [bp-794h]@179
  int (__fastcall *v940)(int **); // [sp+828h] [bp-790h]@179
  _DWORD *v941; // [sp+82Ch] [bp-78Ch]@179
  void (*v942)(void); // [sp+834h] [bp-784h]@179
  int (__fastcall *v943)(WorldSettingsScreenController ***); // [sp+838h] [bp-780h]@179
  int v944; // [sp+840h] [bp-778h]@179
  int v945; // [sp+848h] [bp-770h]@179
  int v946; // [sp+850h] [bp-768h]@179
  _DWORD *v947; // [sp+854h] [bp-764h]@170
  void (*v948)(void); // [sp+85Ch] [bp-75Ch]@170
  int (__fastcall *v949)(WorldSettingsScreenController ***, int); // [sp+860h] [bp-758h]@170
  _DWORD *v950; // [sp+864h] [bp-754h]@170
  void (*v951)(void); // [sp+86Ch] [bp-74Ch]@170
  int (__fastcall *v952)(int **); // [sp+870h] [bp-748h]@170
  _DWORD *v953; // [sp+874h] [bp-744h]@170
  void (*v954)(void); // [sp+87Ch] [bp-73Ch]@170
  int (__fastcall *v955)(int **); // [sp+880h] [bp-738h]@170
  int v956; // [sp+888h] [bp-730h]@170
  int v957; // [sp+890h] [bp-728h]@170
  int v958; // [sp+898h] [bp-720h]@170
  void *v959; // [sp+89Ch] [bp-71Ch]@166
  void (*v960)(void); // [sp+8A4h] [bp-714h]@166
  signed int (*v961)(); // [sp+8A8h] [bp-710h]@166
  _DWORD *v962; // [sp+8ACh] [bp-70Ch]@166
  void (*v963)(void); // [sp+8B4h] [bp-704h]@166
  signed int (__fastcall *v964)(int **); // [sp+8B8h] [bp-700h]@166
  int v965; // [sp+8BCh] [bp-6FCh]@166
  _DWORD *v966; // [sp+8C0h] [bp-6F8h]@157
  void (*v967)(void); // [sp+8C8h] [bp-6F0h]@157
  int (__fastcall *v968)(int **, bool); // [sp+8CCh] [bp-6ECh]@157
  _DWORD *v969; // [sp+8D0h] [bp-6E8h]@157
  void (*v970)(void); // [sp+8D8h] [bp-6E0h]@157
  int (__fastcall *v971)(int); // [sp+8DCh] [bp-6DCh]@157
  _DWORD *v972; // [sp+8E0h] [bp-6D8h]@157
  void (*v973)(void); // [sp+8E8h] [bp-6D0h]@157
  signed int (__fastcall *v974)(int); // [sp+8ECh] [bp-6CCh]@157
  int v975; // [sp+8F4h] [bp-6C4h]@157
  int v976; // [sp+8FCh] [bp-6BCh]@157
  int v977; // [sp+904h] [bp-6B4h]@157
  _DWORD *v978; // [sp+908h] [bp-6B0h]@148
  void (*v979)(void); // [sp+910h] [bp-6A8h]@148
  int (__fastcall *v980)(int **, bool); // [sp+914h] [bp-6A4h]@148
  _DWORD *v981; // [sp+918h] [bp-6A0h]@148
  void (*v982)(void); // [sp+920h] [bp-698h]@148
  int (__fastcall *v983)(int **); // [sp+924h] [bp-694h]@148
  _DWORD *v984; // [sp+928h] [bp-690h]@148
  void (*v985)(void); // [sp+930h] [bp-688h]@148
  signed int (__fastcall *v986)(int); // [sp+934h] [bp-684h]@148
  int v987; // [sp+93Ch] [bp-67Ch]@148
  int v988; // [sp+944h] [bp-674h]@148
  int v989; // [sp+94Ch] [bp-66Ch]@148
  void *v990; // [sp+950h] [bp-668h]@144
  void (*v991)(void); // [sp+958h] [bp-660h]@144
  signed int (*v992)(); // [sp+95Ch] [bp-65Ch]@144
  _DWORD *v993; // [sp+960h] [bp-658h]@144
  void (*v994)(void); // [sp+968h] [bp-650h]@144
  int (__fastcall *v995)(int **); // [sp+96Ch] [bp-64Ch]@144
  int v996; // [sp+970h] [bp-648h]@144
  _DWORD *v997; // [sp+974h] [bp-644h]@141
  void (*v998)(void); // [sp+97Ch] [bp-63Ch]@141
  int (__fastcall *v999)(int **); // [sp+980h] [bp-638h]@141
  int v1000; // [sp+988h] [bp-630h]@141
  void *v1001; // [sp+98Ch] [bp-62Ch]@137
  void (*v1002)(void); // [sp+994h] [bp-624h]@137
  signed int (*v1003)(); // [sp+998h] [bp-620h]@137
  _DWORD *v1004; // [sp+99Ch] [bp-61Ch]@137
  void (*v1005)(void); // [sp+9A4h] [bp-614h]@137
  signed int (__fastcall *v1006)(int **); // [sp+9A8h] [bp-610h]@137
  int v1007; // [sp+9ACh] [bp-60Ch]@137
  _DWORD *v1008; // [sp+9B0h] [bp-608h]@128
  void (*v1009)(void); // [sp+9B8h] [bp-600h]@128
  int (__fastcall *v1010)(WorldSettingsScreenController ***, int); // [sp+9BCh] [bp-5FCh]@128
  _DWORD *v1011; // [sp+9C0h] [bp-5F8h]@128
  void (*v1012)(void); // [sp+9C8h] [bp-5F0h]@128
  int (__fastcall *v1013)(int **); // [sp+9CCh] [bp-5ECh]@128
  _DWORD *v1014; // [sp+9D0h] [bp-5E8h]@128
  void (*v1015)(void); // [sp+9D8h] [bp-5E0h]@128
  int (__fastcall *v1016)(int); // [sp+9DCh] [bp-5DCh]@128
  int v1017; // [sp+9E4h] [bp-5D4h]@128
  int v1018; // [sp+9ECh] [bp-5CCh]@128
  int v1019; // [sp+9F4h] [bp-5C4h]@128
  int v1020; // [sp+A04h] [bp-5B4h]@125
  int v1021; // [sp+A08h] [bp-5B0h]@125
  int v1022; // [sp+A0Ch] [bp-5ACh]@125
  int v1023; // [sp+A10h] [bp-5A8h]@125
  int v1024; // [sp+A14h] [bp-5A4h]@125
  int v1025; // [sp+A18h] [bp-5A0h]@125
  void *v1026; // [sp+A1Ch] [bp-59Ch]@125
  int v1027; // [sp+A20h] [bp-598h]@469
  int v1028; // [sp+A24h] [bp-594h]@457
  int v1029; // [sp+A28h] [bp-590h]@469
  int v1030; // [sp+A34h] [bp-584h]@470
  void *v1031; // [sp+A38h] [bp-580h]@121
  void (*v1032)(void); // [sp+A40h] [bp-578h]@121
  signed int (*v1033)(); // [sp+A44h] [bp-574h]@121
  _DWORD *v1034; // [sp+A48h] [bp-570h]@121
  void (*v1035)(void); // [sp+A50h] [bp-568h]@121
  signed int (__fastcall *v1036)(WorldSettingsScreenController ***); // [sp+A54h] [bp-564h]@121
  int v1037; // [sp+A58h] [bp-560h]@121
  _DWORD *v1038; // [sp+A5Ch] [bp-55Ch]@112
  void (*v1039)(void); // [sp+A64h] [bp-554h]@112
  ModalScreenData *(__fastcall *v1040)(WorldSettingsScreenController ***, int); // [sp+A68h] [bp-550h]@112
  _DWORD *v1041; // [sp+A6Ch] [bp-54Ch]@112
  void (*v1042)(void); // [sp+A74h] [bp-544h]@112
  signed int (__fastcall *v1043)(int); // [sp+A78h] [bp-540h]@112
  _DWORD *v1044; // [sp+A7Ch] [bp-53Ch]@112
  void (*v1045)(void); // [sp+A84h] [bp-534h]@112
  signed int (__fastcall *v1046)(WorldSettingsScreenController ***); // [sp+A88h] [bp-530h]@112
  int v1047; // [sp+A90h] [bp-528h]@112
  int v1048; // [sp+A98h] [bp-520h]@112
  int v1049; // [sp+AA0h] [bp-518h]@112
  int v1050; // [sp+AB0h] [bp-508h]@109
  int v1051; // [sp+AB4h] [bp-504h]@109
  int v1052; // [sp+AB8h] [bp-500h]@109
  int v1053; // [sp+ABCh] [bp-4FCh]@109
  int v1054; // [sp+AC0h] [bp-4F8h]@109
  int v1055; // [sp+AC4h] [bp-4F4h]@109
  void *v1056; // [sp+AC8h] [bp-4F0h]@109
  int v1057; // [sp+ACCh] [bp-4ECh]@484
  unsigned __int64 *v1058; // [sp+AD0h] [bp-4E8h]@472
  int v1059; // [sp+AD4h] [bp-4E4h]@484
  int v1060; // [sp+AE0h] [bp-4D8h]@485
  void *v1061; // [sp+AE4h] [bp-4D4h]@105
  void (*v1062)(void); // [sp+AECh] [bp-4CCh]@105
  signed int (*v1063)(); // [sp+AF0h] [bp-4C8h]@105
  _DWORD *v1064; // [sp+AF4h] [bp-4C4h]@105
  void (*v1065)(void); // [sp+AFCh] [bp-4BCh]@105
  int *(__fastcall *v1066)(int *, int **); // [sp+B00h] [bp-4B8h]@105
  int v1067; // [sp+B04h] [bp-4B4h]@105
  _DWORD *v1068; // [sp+B08h] [bp-4B0h]@96
  void (*v1069)(void); // [sp+B10h] [bp-4A8h]@96
  int (__fastcall *v1070)(WorldSettingsScreenController ***, int); // [sp+B14h] [bp-4A4h]@96
  _DWORD *v1071; // [sp+B18h] [bp-4A0h]@96
  void (*v1072)(void); // [sp+B20h] [bp-498h]@96
  int (__fastcall *v1073)(int); // [sp+B24h] [bp-494h]@96
  _DWORD *v1074; // [sp+B28h] [bp-490h]@96
  void (*v1075)(void); // [sp+B30h] [bp-488h]@96
  int (__fastcall *v1076)(int **); // [sp+B34h] [bp-484h]@96
  int v1077; // [sp+B3Ch] [bp-47Ch]@96
  int v1078; // [sp+B44h] [bp-474h]@96
  int v1079; // [sp+B4Ch] [bp-46Ch]@96
  void *v1080; // [sp+B50h] [bp-468h]@83
  void (*v1081)(void); // [sp+B58h] [bp-460h]@83
  signed int (*v1082)(); // [sp+B5Ch] [bp-45Ch]@83
  void *v1083; // [sp+B60h] [bp-458h]@83
  void (*v1084)(void); // [sp+B68h] [bp-450h]@83
  signed int (*v1085)(); // [sp+B6Ch] [bp-44Ch]@83
  _DWORD *v1086; // [sp+B70h] [bp-448h]@83
  void (*v1087)(void); // [sp+B78h] [bp-440h]@83
  int *(__fastcall *v1088)(int, int *); // [sp+B7Ch] [bp-43Ch]@83
  _DWORD *v1089; // [sp+B80h] [bp-438h]@83
  void (*v1090)(void); // [sp+B88h] [bp-430h]@83
  int *(__fastcall *v1091)(int *, int); // [sp+B8Ch] [bp-42Ch]@83
  _DWORD *v1092; // [sp+B90h] [bp-428h]@83
  void (*v1093)(void); // [sp+B98h] [bp-420h]@83
  int (__fastcall *v1094)(int **); // [sp+B9Ch] [bp-41Ch]@83
  int v1095; // [sp+BA4h] [bp-414h]@83
  int v1096; // [sp+BACh] [bp-40Ch]@83
  int v1097; // [sp+BB4h] [bp-404h]@83
  int v1098; // [sp+BC4h] [bp-3F4h]@80
  int v1099; // [sp+BC8h] [bp-3F0h]@80
  int v1100; // [sp+BCCh] [bp-3ECh]@80
  int v1101; // [sp+BD0h] [bp-3E8h]@80
  int v1102; // [sp+BD4h] [bp-3E4h]@80
  int v1103; // [sp+BD8h] [bp-3E0h]@80
  void *v1104; // [sp+BDCh] [bp-3DCh]@80
  int v1105; // [sp+BE0h] [bp-3D8h]@499
  unsigned __int64 *v1106; // [sp+BE4h] [bp-3D4h]@487
  int v1107; // [sp+BE8h] [bp-3D0h]@499
  int v1108; // [sp+BF4h] [bp-3C4h]@500
  _DWORD *v1109; // [sp+BF8h] [bp-3C0h]@71
  void (*v1110)(void); // [sp+C00h] [bp-3B8h]@71
  int (__fastcall *v1111)(__int64); // [sp+C04h] [bp-3B4h]@71
  _DWORD *v1112; // [sp+C08h] [bp-3B0h]@71
  void (*v1113)(void); // [sp+C10h] [bp-3A8h]@71
  int (__fastcall *v1114)(int **); // [sp+C14h] [bp-3A4h]@71
  _DWORD *v1115; // [sp+C18h] [bp-3A0h]@71
  void (*v1116)(void); // [sp+C20h] [bp-398h]@71
  int (__fastcall *v1117)(int **); // [sp+C24h] [bp-394h]@71
  int v1118; // [sp+C2Ch] [bp-38Ch]@71
  int v1119; // [sp+C34h] [bp-384h]@71
  int v1120; // [sp+C3Ch] [bp-37Ch]@71
  int v1121; // [sp+C4Ch] [bp-36Ch]@68
  int v1122; // [sp+C50h] [bp-368h]@68
  int v1123; // [sp+C54h] [bp-364h]@68
  int v1124; // [sp+C58h] [bp-360h]@68
  int v1125; // [sp+C5Ch] [bp-35Ch]@68
  int v1126; // [sp+C60h] [bp-358h]@68
  void *v1127; // [sp+C64h] [bp-354h]@68
  int v1128; // [sp+C68h] [bp-350h]@514
  int v1129; // [sp+C6Ch] [bp-34Ch]@502
  int v1130; // [sp+C70h] [bp-348h]@514
  int v1131; // [sp+C7Ch] [bp-33Ch]@515
  int v1132; // [sp+C8Ch] [bp-32Ch]@65
  int v1133; // [sp+C90h] [bp-328h]@65
  int v1134; // [sp+C94h] [bp-324h]@65
  int v1135; // [sp+C98h] [bp-320h]@65
  int v1136; // [sp+C9Ch] [bp-31Ch]@65
  int v1137; // [sp+CA0h] [bp-318h]@65
  void *v1138; // [sp+CA4h] [bp-314h]@65
  int v1139; // [sp+CA8h] [bp-310h]@529
  unsigned __int64 *v1140; // [sp+CACh] [bp-30Ch]@517
  int v1141; // [sp+CB0h] [bp-308h]@529
  int v1142; // [sp+CBCh] [bp-2FCh]@530
  _DWORD *v1143; // [sp+CC0h] [bp-2F8h]@56
  void (*v1144)(void); // [sp+CC8h] [bp-2F0h]@56
  int (__fastcall *v1145)(int **, int); // [sp+CCCh] [bp-2ECh]@56
  _DWORD *v1146; // [sp+CD0h] [bp-2E8h]@56
  void (*v1147)(void); // [sp+CD8h] [bp-2E0h]@56
  int (__fastcall *v1148)(int **); // [sp+CDCh] [bp-2DCh]@56
  _DWORD *v1149; // [sp+CE0h] [bp-2D8h]@56
  void (*v1150)(void); // [sp+CE8h] [bp-2D0h]@56
  int (__fastcall *v1151)(int **); // [sp+CECh] [bp-2CCh]@56
  int v1152; // [sp+CF4h] [bp-2C4h]@56
  int v1153; // [sp+CFCh] [bp-2BCh]@56
  int v1154; // [sp+D04h] [bp-2B4h]@56
  int v1155; // [sp+D14h] [bp-2A4h]@52
  int v1156; // [sp+D18h] [bp-2A0h]@52
  int v1157; // [sp+D1Ch] [bp-29Ch]@52
  int v1158; // [sp+D20h] [bp-298h]@52
  int v1159; // [sp+D24h] [bp-294h]@52
  int v1160; // [sp+D28h] [bp-290h]@52
  int v1161; // [sp+D2Ch] [bp-28Ch]@52
  int v1162; // [sp+D30h] [bp-288h]@52
  void *v1163; // [sp+D34h] [bp-284h]@52
  int v1164; // [sp+D38h] [bp-280h]@544
  unsigned __int64 *v1165; // [sp+D3Ch] [bp-27Ch]@532
  int v1166; // [sp+D40h] [bp-278h]@544
  int v1167; // [sp+D4Ch] [bp-26Ch]@545
  _DWORD *v1168; // [sp+D50h] [bp-268h]@39
  void (*v1169)(void); // [sp+D58h] [bp-260h]@39
  signed int (__fastcall *v1170)(__int64 **, unsigned int *); // [sp+D5Ch] [bp-25Ch]@39
  _DWORD *v1171; // [sp+D60h] [bp-258h]@39
  void (*v1172)(void); // [sp+D68h] [bp-250h]@39
  int (__fastcall *v1173)(I18n ****, unsigned int *); // [sp+D6Ch] [bp-24Ch]@39
  _DWORD *v1174; // [sp+D70h] [bp-248h]@39
  void (*v1175)(void); // [sp+D78h] [bp-240h]@39
  void (__fastcall *v1176)(int **, int *); // [sp+D7Ch] [bp-23Ch]@39
  _DWORD *v1177; // [sp+D80h] [bp-238h]@39
  void (*v1178)(void); // [sp+D88h] [bp-230h]@39
  void *(__fastcall *v1179)(int *, int **); // [sp+D8Ch] [bp-22Ch]@39
  _DWORD *v1180; // [sp+D90h] [bp-228h]@39
  void (*v1181)(void); // [sp+D98h] [bp-220h]@39
  signed int (__fastcall *v1182)(int); // [sp+D9Ch] [bp-21Ch]@39
  int v1183; // [sp+DA4h] [bp-214h]@39
  int v1184; // [sp+DACh] [bp-20Ch]@39
  int v1185; // [sp+DB4h] [bp-204h]@39
  void *v1186; // [sp+DB8h] [bp-200h]@35
  void (*v1187)(void); // [sp+DC0h] [bp-1F8h]@35
  signed int (*v1188)(); // [sp+DC4h] [bp-1F4h]@35
  _DWORD *v1189; // [sp+DC8h] [bp-1F0h]@35
  void (*v1190)(void); // [sp+DD0h] [bp-1E8h]@35
  void (__fastcall *v1191)(int *, int **); // [sp+DD4h] [bp-1E4h]@35
  int v1192; // [sp+DD8h] [bp-1E0h]@35
  void *v1193; // [sp+DDCh] [bp-1DCh]@31
  void (*v1194)(void); // [sp+DE4h] [bp-1D4h]@31
  signed int (*v1195)(); // [sp+DE8h] [bp-1D0h]@31
  _DWORD *v1196; // [sp+DECh] [bp-1CCh]@31
  void (*v1197)(void); // [sp+DF4h] [bp-1C4h]@31
  int (__fastcall *v1198)(int **); // [sp+DF8h] [bp-1C0h]@31
  int v1199; // [sp+DFCh] [bp-1BCh]@31
  void *v1200; // [sp+E00h] [bp-1B8h]@27
  void (*v1201)(void); // [sp+E08h] [bp-1B0h]@27
  signed int (*v1202)(); // [sp+E0Ch] [bp-1ACh]@27
  _DWORD *v1203; // [sp+E10h] [bp-1A8h]@27
  void (*v1204)(void); // [sp+E18h] [bp-1A0h]@27
  void **(__fastcall *v1205)(void **, int); // [sp+E1Ch] [bp-19Ch]@27
  int v1206; // [sp+E20h] [bp-198h]@27
  void *v1207; // [sp+E24h] [bp-194h]@23
  void (*v1208)(void); // [sp+E2Ch] [bp-18Ch]@23
  signed int (*v1209)(); // [sp+E30h] [bp-188h]@23
  _DWORD *v1210; // [sp+E34h] [bp-184h]@23
  void (*v1211)(void); // [sp+E3Ch] [bp-17Ch]@23
  void *(__fastcall *v1212)(int *, int **); // [sp+E40h] [bp-178h]@23
  int v1213; // [sp+E44h] [bp-174h]@23
  _DWORD *v1214; // [sp+E48h] [bp-170h]@20
  void (*v1215)(void); // [sp+E50h] [bp-168h]@20
  int (__fastcall *v1216)(int **); // [sp+E54h] [bp-164h]@20
  int v1217; // [sp+E5Ch] [bp-15Ch]@20
  _DWORD *v1218; // [sp+E60h] [bp-158h]@17
  void (*v1219)(void); // [sp+E68h] [bp-150h]@17
  int (__fastcall *v1220)(int **); // [sp+E6Ch] [bp-14Ch]@17
  int v1221; // [sp+E74h] [bp-144h]@17
  _DWORD *v1222; // [sp+E78h] [bp-140h]@14
  void (*v1223)(void); // [sp+E80h] [bp-138h]@14
  int (__fastcall *v1224)(WorldSettingsScreenController ***); // [sp+E84h] [bp-134h]@14
  int v1225; // [sp+E8Ch] [bp-12Ch]@14
  _DWORD *v1226; // [sp+E90h] [bp-128h]@7
  void (*v1227)(void); // [sp+E98h] [bp-120h]@7
  int (__fastcall *v1228)(WorldSettingsScreenController ***); // [sp+E9Ch] [bp-11Ch]@7
  int v1229; // [sp+EA4h] [bp-114h]@7
  void *v1230; // [sp+EA8h] [bp-110h]@3
  void (*v1231)(void); // [sp+EB0h] [bp-108h]@3
  signed int (*v1232)(); // [sp+EB4h] [bp-104h]@3
  _DWORD *v1233; // [sp+EB8h] [bp-100h]@3
  void (*v1234)(void); // [sp+EC0h] [bp-F8h]@3
  void (__fastcall *v1235)(int *, int **); // [sp+EC4h] [bp-F4h]@3
  int v1236; // [sp+EC8h] [bp-F0h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 129);
  if ( v2 == 2 )
  {
    sub_21E94B4((void **)&v1225, "button.menu_exit");
    v9 = MinecraftScreenController::_getNameId(v1, (int **)&v1225);
    v10 = operator new(4u);
    *v10 = v1;
    v1222 = v10;
    v1224 = sub_1296F8C;
    v1223 = (void (*)(void))sub_1296F9A;
    ScreenController::registerButtonClickHandler((int)v1, v9, (int)&v1222);
    if ( v1223 )
      v1223();
    v6 = (void *)(v1225 - 12);
    if ( (int *)(v1225 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v1225 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
LABEL_1609:
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
        goto LABEL_17;
      }
LABEL_1608:
      v8 = (*v7)--;
      goto LABEL_1609;
    }
  }
  else if ( v2 == 3 )
    v1236 = 365782143;
    v3 = operator new(4u);
    *v3 = v1;
    v1233 = v3;
    v1235 = sub_1296BCC;
    v1234 = (void (*)(void))sub_1296EA0;
    v1230 = operator new(1u);
    v1232 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v1231 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    ScreenController::bindString((int)v1, &v1236, (int)&v1233, (int)&v1230);
    if ( v1231 )
      v1231();
    if ( v1234 )
      v1234();
    sub_21E94B4((void **)&v1229, "button.menu_exit");
    v4 = MinecraftScreenController::_getNameId(v1, (int **)&v1229);
    v5 = operator new(4u);
    *v5 = v1;
    v1226 = v5;
    v1228 = sub_1296ED6;
    v1227 = (void (*)(void))sub_1296F56;
    ScreenController::registerButtonClickHandler((int)v1, v4, (int)&v1226);
    if ( v1227 )
      v1227();
    v6 = (void *)(v1229 - 12);
    if ( (int *)(v1229 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v1229 - 4);
        goto LABEL_1609;
      goto LABEL_1608;
LABEL_17:
  sub_21E94B4((void **)&v1221, "play_world_button");
  v11 = MinecraftScreenController::_getNameId(v1, (int **)&v1221);
  v12 = operator new(4u);
  *v12 = v1;
  v1218 = v12;
  v1220 = sub_1296FD0;
  v1219 = (void (*)(void))sub_1297000;
  ScreenController::registerButtonClickHandler((int)v1, v11, (int)&v1218);
  if ( v1219 )
    v1219();
  v13 = (void *)(v1221 - 12);
  if ( (int *)(v1221 - 12) != &dword_28898C0 )
    v368 = (unsigned int *)(v1221 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v369 = __ldrex(v368);
      while ( __strex(v369 - 1, v368) );
    else
      v369 = (*v368)--;
    if ( v369 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v1217, "create_world_button");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v1217);
  v15 = operator new(4u);
  *v15 = v1;
  v1214 = v15;
  v1216 = sub_1297036;
  v1215 = (void (*)(void))sub_1297066;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v1214);
  if ( v1215 )
    v1215();
  v16 = (void *)(v1217 - 12);
  if ( (int *)(v1217 - 12) != &dword_28898C0 )
    v370 = (unsigned int *)(v1217 - 4);
        v371 = __ldrex(v370);
      while ( __strex(v371 - 1, v370) );
      v371 = (*v370)--;
    if ( v371 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v1213 = 1126473780;
  v17 = operator new(4u);
  *v17 = v1;
  v1210 = v17;
  v1212 = sub_129709C;
  v1211 = (void (*)(void))sub_12970CC;
  v1207 = operator new(1u);
  v1209 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v1208 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v1213, (int)&v1210, (int)&v1207);
  if ( v1208 )
    v1208();
  if ( v1211 )
    v1211();
  StringHash::StringHash<char [28]>(&v1206, (int)"#world_texture_locationtype");
  v18 = operator new(4u);
  *v18 = v1;
  v1203 = v18;
  v1205 = sub_1297102;
  v1204 = (void (*)(void))sub_1297130;
  v1200 = operator new(1u);
  v1202 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v1201 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v1206, (int)&v1203, (int)&v1200);
  if ( v1201 )
    v1201();
  if ( v1204 )
    v1204();
  StringHash::StringHash<char [28]>(&v1199, (int)"#achievment_warning_visible");
  v19 = operator new(4u);
  *v19 = v1;
  v1196 = v19;
  v1198 = sub_1297166;
  v1197 = (void (*)(void))sub_12971AE;
  v1193 = operator new(1u);
  v1195 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v1194 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v1199, (int)&v1196, (int)&v1193);
  if ( v1194 )
    v1194();
  if ( v1197 )
    v1197();
  StringHash::StringHash<char [26]>(&v1192, (int)"#achievement_warning_text");
  v20 = operator new(4u);
  *v20 = v1;
  v1189 = v20;
  v1191 = sub_12971E4;
  v1190 = (void (*)(void))sub_1297320;
  v1186 = operator new(1u);
  v1188 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v1187 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v1192, (int)&v1189, (int)&v1186);
  if ( v1187 )
    v1187();
  if ( v1190 )
    v1190();
  sub_21E94B4((void **)&v1185, "world_name_text_box");
  sub_21E94B4((void **)&v1184, "#world_name");
  sub_21E94B4((void **)&v1183, "#world_name_enabled");
  v21 = operator new(4u);
  *v21 = v1;
  v1180 = v21;
  v1182 = sub_1297356;
  v1181 = (void (*)(void))sub_1297362;
  v22 = operator new(4u);
  *v22 = v1;
  v1177 = v22;
  v1179 = sub_1297398;
  v1178 = (void (*)(void))sub_12973F8;
  v23 = operator new(4u);
  *v23 = v1;
  v1174 = v23;
  v1176 = sub_1297430;
  v1175 = (void (*)(void))sub_12974F4;
  v24 = operator new(4u);
  *v24 = (char *)v1 + 976;
  v1171 = v24;
  v1173 = sub_129752C;
  v1172 = (void (*)(void))sub_1297640;
  v25 = operator new(8u);
  *v25 = (char *)v1 + 976;
  v25[1] = v1;
  v1168 = v25;
  v1170 = sub_1297678;
  v1169 = (void (*)(void))sub_12977E0;
  SettingsScreenControllerBase::setupCallbacksForStringOption(
    v1,
    (int **)&v1185,
    (const char **)&v1184,
    (const char **)&v1183,
    (int)&v1180,
    (int)&v1177,
    (int)&v1174,
    (int)&v1171,
    (int)&v1168);
  if ( v1169 )
    v1169();
  if ( v1172 )
    v1172();
  if ( v1175 )
    v1175();
  if ( v1178 )
    v1178();
  if ( v1181 )
    v1181();
  v26 = (void *)(v1183 - 12);
  if ( (int *)(v1183 - 12) != &dword_28898C0 )
    v372 = (unsigned int *)(v1183 - 4);
        v373 = __ldrex(v372);
      while ( __strex(v373 - 1, v372) );
      v373 = (*v372)--;
    if ( v373 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v1184 - 12);
  if ( (int *)(v1184 - 12) != &dword_28898C0 )
    v374 = (unsigned int *)(v1184 - 4);
        v375 = __ldrex(v374);
      while ( __strex(v375 - 1, v374) );
      v375 = (*v374)--;
    if ( v375 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v1185 - 12);
  if ( (int *)(v1185 - 12) != &dword_28898C0 )
    v376 = (unsigned int *)(v1185 - 4);
        v377 = __ldrex(v376);
      while ( __strex(v377 - 1, v376) );
      v377 = (*v376)--;
    if ( v377 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v1155, "#world_difficulty_radio_peaceful");
  v1156 = 0;
  sub_21E94B4((void **)&v1157, "#world_difficulty_radio_easy");
  v1158 = 1;
  sub_21E94B4((void **)&v1159, "#world_difficulty_radio_normal");
  v1160 = 2;
  sub_21E94B4((void **)&v1161, "#world_difficulty_radio_hard");
  v1162 = 3;
  LODWORD(v29) = &v1163;
  std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,int> const*>(
    v29,
    (int **)&v1163,
    0);
  v30 = (void *)(v1161 - 12);
  if ( (int *)(v1161 - 12) != &dword_28898C0 )
    v378 = (unsigned int *)(v1161 - 4);
        v379 = __ldrex(v378);
      while ( __strex(v379 - 1, v378) );
      v379 = (*v378)--;
    if ( v379 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v1159 - 12);
  if ( (int *)(v1159 - 12) != &dword_28898C0 )
    v380 = (unsigned int *)(v1159 - 4);
        v381 = __ldrex(v380);
      while ( __strex(v381 - 1, v380) );
      v381 = (*v380)--;
    if ( v381 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v1157 - 12);
  if ( (int *)(v1157 - 12) != &dword_28898C0 )
    v382 = (unsigned int *)(v1157 - 4);
        v383 = __ldrex(v382);
      while ( __strex(v383 - 1, v382) );
      v383 = (*v382)--;
    if ( v383 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v1155 - 12);
  if ( (int *)(v1155 - 12) != &dword_28898C0 )
    v384 = (unsigned int *)(v1155 - 4);
        v385 = __ldrex(v384);
      while ( __strex(v385 - 1, v384) );
      v385 = (*v384)--;
    if ( v385 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v1154, "world_difficulty_dropdown");
  sub_21E94B4((void **)&v1153, "#world_difficulty_dropdown_toggle_label");
  sub_21E94B4((void **)&v1152, "#world_difficulty_dropdown_enabled");
  v34 = operator new(4u);
  *v34 = v1;
  v1149 = v34;
  v1151 = sub_129781C;
  v1150 = (void (*)(void))sub_129784C;
  v35 = operator new(4u);
  *v35 = v1;
  v1146 = v35;
  v1148 = sub_1297882;
  v1147 = (void (*)(void))sub_12978CA;
  v36 = operator new(4u);
  *v36 = v1;
  v1143 = v36;
  v1145 = sub_1297900;
  v1144 = (void (*)(void))sub_1297960;
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(
    (int)v1,
    &v1154,
    (const char **)&v1153,
    (int)&v1163,
    (int)&difficultyLabels,
    (const char **)&v1152,
    (int)&v1149,
    (int)&v1146,
    (int)&v1143);
  if ( v1144 )
    v1144();
  if ( v1147 )
    v1147();
  if ( v1150 )
    v1150();
  v37 = (void *)(v1152 - 12);
  if ( (int *)(v1152 - 12) != &dword_28898C0 )
    v386 = (unsigned int *)(v1152 - 4);
        v387 = __ldrex(v386);
      while ( __strex(v387 - 1, v386) );
      v387 = (*v386)--;
    if ( v387 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v1153 - 12);
  if ( (int *)(v1153 - 12) != &dword_28898C0 )
    v388 = (unsigned int *)(v1153 - 4);
        v389 = __ldrex(v388);
      while ( __strex(v389 - 1, v388) );
      v389 = (*v388)--;
    if ( v389 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v1154 - 12);
  if ( (int *)(v1154 - 12) != &dword_28898C0 )
    v390 = (unsigned int *)(v1154 - 4);
        v391 = __ldrex(v390);
      while ( __strex(v391 - 1, v390) );
      v391 = (*v390)--;
    if ( v391 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v1132, "#world_game_mode_radio_survival");
  v1133 = 0;
  sub_21E94B4((void **)&v1134, "#world_game_mode_radio_creative");
  v1135 = 1;
  sub_21E94B4((void **)&v1136, "#world_game_mode_radio_adventure");
  v1137 = 2;
  LODWORD(v40) = &v1138;
    v40,
    (int **)&v1138,
  v41 = (void *)(v1136 - 12);
  if ( (int *)(v1136 - 12) != &dword_28898C0 )
    v392 = (unsigned int *)(v1136 - 4);
        v393 = __ldrex(v392);
      while ( __strex(v393 - 1, v392) );
      v393 = (*v392)--;
    if ( v393 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v1134 - 12);
  if ( (int *)(v1134 - 12) != &dword_28898C0 )
    v394 = (unsigned int *)(v1134 - 4);
        v395 = __ldrex(v394);
      while ( __strex(v395 - 1, v394) );
      v395 = (*v394)--;
    if ( v395 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v1132 - 12);
  if ( (int *)(v1132 - 12) != &dword_28898C0 )
    v396 = (unsigned int *)(v1132 - 4);
        v397 = __ldrex(v396);
      while ( __strex(v397 - 1, v396) );
      v397 = (*v396)--;
    if ( v397 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v1121 = 0;
  sub_21E94B4((void **)&v1122, "createWorldScreen.gameMode.survival");
  v1123 = 1;
  sub_21E94B4((void **)&v1124, "createWorldScreen.gameMode.creative");
  v1125 = 2;
  sub_21E94B4((void **)&v1126, "createWorldScreen.gameMode.adventure");
  LODWORD(v44) = &v1127;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
    v44,
    (unsigned int *)&v1127,
  v45 = (void *)(v1126 - 12);
  if ( (int *)(v1126 - 12) != &dword_28898C0 )
    v398 = (unsigned int *)(v1126 - 4);
        v399 = __ldrex(v398);
      while ( __strex(v399 - 1, v398) );
      v399 = (*v398)--;
    if ( v399 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v1124 - 12);
  if ( (int *)(v1124 - 12) != &dword_28898C0 )
    v400 = (unsigned int *)(v1124 - 4);
        v401 = __ldrex(v400);
      while ( __strex(v401 - 1, v400) );
      v401 = (*v400)--;
    if ( v401 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v1122 - 12);
  if ( (int *)(v1122 - 12) != &dword_28898C0 )
    v402 = (unsigned int *)(v1122 - 4);
        v403 = __ldrex(v402);
      while ( __strex(v403 - 1, v402) );
      v403 = (*v402)--;
    if ( v403 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v1120, "world_game_mode_dropdown");
  sub_21E94B4((void **)&v1119, "#world_game_mode_dropdown_toggle_label");
  sub_21E94B4((void **)&v1118, "#world_game_mode_dropdown_enabled");
  v48 = operator new(4u);
  *v48 = v1;
  v1115 = v48;
  v1117 = sub_1297996;
  v1116 = (void (*)(void))sub_12979D0;
  v49 = operator new(4u);
  *v49 = v1;
  v1112 = v49;
  v1114 = sub_1297A06;
  v1113 = (void (*)(void))sub_1297A4A;
  v50 = operator new(4u);
  *v50 = v1;
  v1109 = v50;
  v1111 = sub_1297A80;
  v1110 = (void (*)(void))sub_1297A88;
    &v1120,
    (const char **)&v1119,
    (int)&v1138,
    (int)&v1127,
    (const char **)&v1118,
    (int)&v1115,
    (int)&v1112,
    (int)&v1109);
  if ( v1110 )
    v1110();
  if ( v1113 )
    v1113();
  if ( v1116 )
    v1116();
  v51 = (void *)(v1118 - 12);
  if ( (int *)(v1118 - 12) != &dword_28898C0 )
    v404 = (unsigned int *)(v1118 - 4);
        v405 = __ldrex(v404);
      while ( __strex(v405 - 1, v404) );
      v405 = (*v404)--;
    if ( v405 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v1119 - 12);
  if ( (int *)(v1119 - 12) != &dword_28898C0 )
    v406 = (unsigned int *)(v1119 - 4);
        v407 = __ldrex(v406);
      while ( __strex(v407 - 1, v406) );
      v407 = (*v406)--;
    if ( v407 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v1120 - 12);
  if ( (int *)(v1120 - 12) != &dword_28898C0 )
    v408 = (unsigned int *)(v1120 - 4);
        v409 = __ldrex(v408);
      while ( __strex(v409 - 1, v408) );
      v409 = (*v408)--;
    if ( v409 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  sub_21E94B4((void **)&v1098, "#player_game_mode_radio_survival");
  v1099 = 0;
  sub_21E94B4((void **)&v1100, "#player_game_mode_radio_creative");
  v1101 = 1;
  sub_21E94B4((void **)&v1102, "#player_game_mode_radio_adventure");
  v1103 = 2;
  LODWORD(v54) = &v1104;
    v54,
    (int **)&v1104,
  v55 = (void *)(v1102 - 12);
  if ( (int *)(v1102 - 12) != &dword_28898C0 )
    v410 = (unsigned int *)(v1102 - 4);
        v411 = __ldrex(v410);
      while ( __strex(v411 - 1, v410) );
      v411 = (*v410)--;
    if ( v411 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v1100 - 12);
  if ( (int *)(v1100 - 12) != &dword_28898C0 )
    v412 = (unsigned int *)(v1100 - 4);
        v413 = __ldrex(v412);
      while ( __strex(v413 - 1, v412) );
      v413 = (*v412)--;
    if ( v413 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v1098 - 12);
  if ( (int *)(v1098 - 12) != &dword_28898C0 )
    v414 = (unsigned int *)(v1098 - 4);
        v415 = __ldrex(v414);
      while ( __strex(v415 - 1, v414) );
      v415 = (*v414)--;
    if ( v415 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  sub_21E94B4((void **)&v1097, "world_seed_text_box");
  sub_21E94B4((void **)&v1096, "#world_seed");
  sub_21E94B4((void **)&v1095, "#world_seed_enabled");
  v58 = operator new(4u);
  *v58 = v1;
  v1092 = v58;
  v1094 = sub_1297ABE;
  v1093 = (void (*)(void))sub_1297AEA;
  v59 = operator new(4u);
  *v59 = v1;
  v1089 = v59;
  v1091 = sub_1297B20;
  v1090 = (void (*)(void))sub_1297B30;
  v60 = operator new(4u);
  *v60 = v1;
  v1086 = v60;
  v1088 = sub_1297B66;
  v1087 = (void (*)(void))sub_1297B72;
  v1083 = operator new(1u);
  v1085 = ZNSt17_Function_handlerIFbRKSsEZN28SettingsScreenControllerBase29setupCallbacksForStringOptionES1_S1_S1_St8functionIFbvEES4_IFSsvEES4_IFvS1_EES4_IS2_ESB_Ed0_UlS1_E_E9_M_invokeERKSt9_Any_dataS1_;
  v1084 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN28SettingsScreenControllerBase29setupCallbacksForStringOptionERKSsS3_S3_St8functionIFbvEES4_IFSsvEES4_IFvS3_EES4_IFbS3_EESC_Ed0_UlS3_E_E10_M_managerERSt9_Any_dataRKSF_St18_Manager_operation;
  v1080 = operator new(1u);
  v1082 = ZNSt17_Function_handlerIFbRKSsEZN28SettingsScreenControllerBase29setupCallbacksForStringOptionES1_S1_S1_St8functionIFbvEES4_IFSsvEES4_IFvS1_EES4_IS2_ESB_Ed_UlS1_E_E9_M_invokeERKSt9_Any_dataS1_;
  v1081 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN28SettingsScreenControllerBase29setupCallbacksForStringOptionERKSsS3_S3_St8functionIFbvEES4_IFSsvEES4_IFvS3_EES4_IFbS3_EESC_Ed_UlS3_E_E10_M_managerERSt9_Any_dataRKSF_St18_Manager_operation;
    (int **)&v1097,
    (const char **)&v1096,
    (const char **)&v1095,
    (int)&v1092,
    (int)&v1089,
    (int)&v1086,
    (int)&v1083,
    (int)&v1080);
  if ( v1081 )
    v1081();
  if ( v1084 )
    v1084();
  if ( v1087 )
    v1087();
  if ( v1090 )
    v1090();
  if ( v1093 )
    v1093();
  v61 = (void *)(v1095 - 12);
  if ( (int *)(v1095 - 12) != &dword_28898C0 )
    v416 = (unsigned int *)(v1095 - 4);
        v417 = __ldrex(v416);
      while ( __strex(v417 - 1, v416) );
      v417 = (*v416)--;
    if ( v417 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v1096 - 12);
  if ( (int *)(v1096 - 12) != &dword_28898C0 )
    v418 = (unsigned int *)(v1096 - 4);
        v419 = __ldrex(v418);
      while ( __strex(v419 - 1, v418) );
      v419 = (*v418)--;
    if ( v419 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v1097 - 12);
  if ( (int *)(v1097 - 12) != &dword_28898C0 )
    v420 = (unsigned int *)(v1097 - 4);
        v421 = __ldrex(v420);
      while ( __strex(v421 - 1, v420) );
      v421 = (*v420)--;
    if ( v421 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  sub_21E94B4((void **)&v1079, "player_permissions_dropdown");
  sub_21E94B4((void **)&v1078, "#player_permissions_dropdown_toggle_label");
  sub_21E94B4((void **)&v1077, "#player_permissions_dropdown_enabled");
  v64 = operator new(4u);
  *v64 = v1;
  v1074 = v64;
  v1076 = sub_1297C0C;
  v1075 = (void (*)(void))sub_1297C30;
  v65 = operator new(4u);
  *v65 = v1;
  v1071 = v65;
  v1073 = sub_1297C66;
  v1072 = (void (*)(void))sub_1297C7A;
  v66 = operator new(4u);
  *v66 = v1;
  v1068 = v66;
  v1070 = sub_1297CB0;
  v1069 = (void (*)(void))sub_1297CB8;
    &v1079,
    (const char **)&v1078,
    (int)&unk_27DE484,
    (int)&unk_27DE4A0,
    (const char **)&v1077,
    (int)&v1074,
    (int)&v1071,
    (int)&v1068);
  if ( v1069 )
    v1069();
  if ( v1072 )
    v1072();
  if ( v1075 )
    v1075();
  v67 = (void *)(v1077 - 12);
  if ( (int *)(v1077 - 12) != &dword_28898C0 )
    v422 = (unsigned int *)(v1077 - 4);
        v423 = __ldrex(v422);
      while ( __strex(v423 - 1, v422) );
      v423 = (*v422)--;
    if ( v423 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v1078 - 12);
  if ( (int *)(v1078 - 12) != &dword_28898C0 )
    v424 = (unsigned int *)(v1078 - 4);
        v425 = __ldrex(v424);
      while ( __strex(v425 - 1, v424) );
      v425 = (*v424)--;
    if ( v425 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = (void *)(v1079 - 12);
  if ( (int *)(v1079 - 12) != &dword_28898C0 )
    v426 = (unsigned int *)(v1079 - 4);
        v427 = __ldrex(v426);
      while ( __strex(v427 - 1, v426) );
      v427 = (*v426)--;
    if ( v427 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  StringHash::StringHash<char [40]>(&v1067, (int)"#permission_level_dropdown_icon_texture");
  v70 = operator new(4u);
  *v70 = v1;
  v1064 = v70;
  v1066 = sub_1297CF0;
  v1065 = (void (*)(void))sub_1297DA4;
  v1061 = operator new(1u);
  v1063 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v1062 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v1067, (int)&v1064, (int)&v1061);
  if ( v1062 )
    v1062();
  if ( v1065 )
    v1065();
  sub_21E94B4((void **)&v1050, "#world_type_radio_flat");
  v1051 = 2;
  sub_21E94B4((void **)&v1052, "#world_type_radio_infinite");
  v1053 = 1;
  sub_21E94B4((void **)&v1054, "#world_type_radio_old");
  v1055 = 0;
  LODWORD(v71) = &v1056;
    v71,
    (int **)&v1056,
  v72 = (void *)(v1054 - 12);
  if ( (int *)(v1054 - 12) != &dword_28898C0 )
    v428 = (unsigned int *)(v1054 - 4);
        v429 = __ldrex(v428);
      while ( __strex(v429 - 1, v428) );
      v429 = (*v428)--;
    if ( v429 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  v73 = (void *)(v1052 - 12);
  if ( (int *)(v1052 - 12) != &dword_28898C0 )
    v430 = (unsigned int *)(v1052 - 4);
        v431 = __ldrex(v430);
      while ( __strex(v431 - 1, v430) );
      v431 = (*v430)--;
    if ( v431 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (void *)(v1050 - 12);
  if ( (int *)(v1050 - 12) != &dword_28898C0 )
    v432 = (unsigned int *)(v1050 - 4);
        v433 = __ldrex(v432);
      while ( __strex(v433 - 1, v432) );
      v433 = (*v432)--;
    if ( v433 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  sub_21E94B4((void **)&v1049, "player_game_mode_dropdown");
  sub_21E94B4((void **)&v1048, "#player_game_mode_dropdown_toggle_label");
  sub_21E94B4((void **)&v1047, "#player_game_mode_dropdown_enabled");
  v75 = operator new(4u);
  *v75 = v1;
  v1044 = v75;
  v1046 = sub_1297DDA;
  v1045 = (void (*)(void))sub_1297DE2;
  v76 = operator new(4u);
  *v76 = v1;
  v1041 = v76;
  v1043 = sub_1297E18;
  v1042 = (void (*)(void))sub_1297E24;
  v77 = operator new(4u);
  *v77 = v1;
  v1038 = v77;
  v1040 = sub_1297E5A;
  v1039 = (void (*)(void))sub_1297E62;
    &v1049,
    (const char **)&v1048,
    (int)&v1104,
    (const char **)&v1047,
    (int)&v1044,
    (int)&v1041,
    (int)&v1038);
  if ( v1039 )
    v1039();
  if ( v1042 )
    v1042();
  if ( v1045 )
    v1045();
  v78 = (void *)(v1047 - 12);
  if ( (int *)(v1047 - 12) != &dword_28898C0 )
    v434 = (unsigned int *)(v1047 - 4);
        v435 = __ldrex(v434);
      while ( __strex(v435 - 1, v434) );
      v435 = (*v434)--;
    if ( v435 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  v79 = (void *)(v1048 - 12);
  if ( (int *)(v1048 - 12) != &dword_28898C0 )
    v436 = (unsigned int *)(v1048 - 4);
        v437 = __ldrex(v436);
      while ( __strex(v437 - 1, v436) );
      v437 = (*v436)--;
    if ( v437 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  v80 = (void *)(v1049 - 12);
  if ( (int *)(v1049 - 12) != &dword_28898C0 )
    v438 = (unsigned int *)(v1049 - 4);
        v439 = __ldrex(v438);
      while ( __strex(v439 - 1, v438) );
      v439 = (*v438)--;
    if ( v439 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  StringHash::StringHash<char [35]>(&v1037, (int)"#player_game_mode_dropdown_visible");
  v81 = operator new(4u);
  *v81 = v1;
  v1034 = v81;
  v1036 = sub_1297E98;
  v1035 = (void (*)(void))sub_1297EA0;
  v1031 = operator new(1u);
  v1033 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v1032 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v1037, (int)&v1034, (int)&v1031);
  if ( v1032 )
    v1032();
  if ( v1035 )
    v1035();
  v1020 = 2;
  sub_21E94B4((void **)&v1021, "generator.flat");
  v1022 = 1;
  sub_21E94B4((void **)&v1023, "generator.infinite");
  v1024 = 0;
  sub_21E94B4((void **)&v1025, "generator.old");
  LODWORD(v82) = &v1026;
    v82,
    (unsigned int *)&v1026,
  v83 = (void *)(v1025 - 12);
  if ( (int *)(v1025 - 12) != &dword_28898C0 )
    v440 = (unsigned int *)(v1025 - 4);
        v441 = __ldrex(v440);
      while ( __strex(v441 - 1, v440) );
      v441 = (*v440)--;
    if ( v441 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = (void *)(v1023 - 12);
  if ( (int *)(v1023 - 12) != &dword_28898C0 )
    v442 = (unsigned int *)(v1023 - 4);
        v443 = __ldrex(v442);
      while ( __strex(v443 - 1, v442) );
      v443 = (*v442)--;
    if ( v443 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  v85 = (void *)(v1021 - 12);
  if ( (int *)(v1021 - 12) != &dword_28898C0 )
    v444 = (unsigned int *)(v1021 - 4);
        v445 = __ldrex(v444);
      while ( __strex(v445 - 1, v444) );
      v445 = (*v444)--;
    if ( v445 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  sub_21E94B4((void **)&v1019, "world_type_dropdown");
  sub_21E94B4((void **)&v1018, "#world_type_dropdown_toggle_label");
  sub_21E94B4((void **)&v1017, "#world_type_dropdown_enabled");
  v86 = operator new(4u);
  *v86 = v1;
  v1014 = v86;
  v1016 = sub_1297ED6;
  v1015 = (void (*)(void))sub_1297EE6;
  v87 = operator new(4u);
  *v87 = v1;
  v1011 = v87;
  v1013 = sub_1297F1C;
  v1012 = (void (*)(void))sub_1297F56;
  v88 = operator new(4u);
  *v88 = v1;
  v1008 = v88;
  v1010 = sub_1297F8C;
  v1009 = (void (*)(void))sub_1297F94;
    &v1019,
    (const char **)&v1018,
    (int)&v1056,
    (int)&v1026,
    (const char **)&v1017,
    (int)&v1014,
    (int)&v1011,
    (int)&v1008);
  if ( v1009 )
    v1009();
  if ( v1012 )
    v1012();
  if ( v1015 )
    v1015();
  v89 = (void *)(v1017 - 12);
  if ( (int *)(v1017 - 12) != &dword_28898C0 )
    v446 = (unsigned int *)(v1017 - 4);
        v447 = __ldrex(v446);
      while ( __strex(v447 - 1, v446) );
      v447 = (*v446)--;
    if ( v447 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  v90 = (void *)(v1018 - 12);
  if ( (int *)(v1018 - 12) != &dword_28898C0 )
    v448 = (unsigned int *)(v1018 - 4);
        v449 = __ldrex(v448);
      while ( __strex(v449 - 1, v448) );
      v449 = (*v448)--;
    if ( v449 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v91 = (void *)(v1019 - 12);
  if ( (int *)(v1019 - 12) != &dword_28898C0 )
    v450 = (unsigned int *)(v1019 - 4);
        v451 = __ldrex(v450);
      while ( __strex(v451 - 1, v450) );
      v451 = (*v450)--;
    if ( v451 <= 0 )
      j_j_j_j__ZdlPv_9(v91);
  StringHash::StringHash<char [25]>(&v1007, (int)"#show_world_type_options");
  v92 = operator new(4u);
  *v92 = v1;
  v1004 = v92;
  v1006 = sub_1297FCA;
  v1005 = (void (*)(void))sub_1298018;
  v1001 = operator new(1u);
  v1003 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v1002 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v1007, (int)&v1004, (int)&v1001);
  if ( v1002 )
    v1002();
  if ( v1005 )
    v1005();
  sub_21E94B4((void **)&v1000, "convert_to_infinite_button");
  v93 = MinecraftScreenController::_getNameId(v1, (int **)&v1000);
  v94 = operator new(4u);
  *v94 = v1;
  v997 = v94;
  v999 = sub_129804E;
  v998 = (void (*)(void))sub_129808E;
  ScreenController::registerButtonClickHandler((int)v1, v93, (int)&v997);
  if ( v998 )
    v998();
  v95 = (void *)(v1000 - 12);
  if ( (int *)(v1000 - 12) != &dword_28898C0 )
    v452 = (unsigned int *)(v1000 - 4);
        v453 = __ldrex(v452);
      while ( __strex(v453 - 1, v452) );
      v453 = (*v452)--;
    if ( v453 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  StringHash::StringHash<char [33]>(&v996, (int)"#show_convert_to_infinite_button");
  v96 = operator new(4u);
  *v96 = v1;
  v993 = v96;
  v995 = sub_12980C4;
  v994 = (void (*)(void))sub_12980FC;
  v990 = operator new(1u);
  v992 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v991 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v996, (int)&v993, (int)&v990);
  if ( v991 )
    v991();
  if ( v994 )
    v994();
  sub_21E94B4((void **)&v989, "start_with_map");
  sub_21E94B4((void **)&v988, "#start_with_map");
  sub_21E94B4((void **)&v987, "#start_with_map_enabled");
  v97 = operator new(4u);
  *v97 = v1;
  v984 = v97;
  v986 = sub_1298132;
  v985 = (void (*)(void))sub_1298146;
  v98 = operator new(4u);
  *v98 = v1;
  v981 = v98;
  v983 = sub_129817C;
  v982 = (void (*)(void))sub_12981B6;
  v99 = operator new(4u);
  *v99 = v1;
  v978 = v99;
  v980 = sub_12981EC;
  v979 = (void (*)(void))sub_1298204;
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(
    (int **)&v989,
    (const char **)&v988,
    (const char **)&v987,
    (int)&v984,
    (int)&v981,
    (int)&v978);
  if ( v979 )
    v979();
  if ( v982 )
    v982();
  if ( v985 )
    v985();
  v100 = (void *)(v987 - 12);
  if ( (int *)(v987 - 12) != &dword_28898C0 )
    v454 = (unsigned int *)(v987 - 4);
        v455 = __ldrex(v454);
      while ( __strex(v455 - 1, v454) );
      v455 = (*v454)--;
    if ( v455 <= 0 )
      j_j_j_j__ZdlPv_9(v100);
  v101 = (void *)(v988 - 12);
  if ( (int *)(v988 - 12) != &dword_28898C0 )
    v456 = (unsigned int *)(v988 - 4);
        v457 = __ldrex(v456);
      while ( __strex(v457 - 1, v456) );
      v457 = (*v456)--;
    if ( v457 <= 0 )
      j_j_j_j__ZdlPv_9(v101);
  v102 = (void *)(v989 - 12);
  if ( (int *)(v989 - 12) != &dword_28898C0 )
    v458 = (unsigned int *)(v989 - 4);
        v459 = __ldrex(v458);
      while ( __strex(v459 - 1, v458) );
      v459 = (*v458)--;
    if ( v459 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  sub_21E94B4((void **)&v977, "bonus_chest");
  sub_21E94B4((void **)&v976, "#bonus_chest");
  sub_21E94B4((void **)&v975, "#bonus_chest_enabled");
  v103 = operator new(4u);
  *v103 = v1;
  v972 = v103;
  v974 = sub_129823A;
  v973 = (void (*)(void))sub_129824E;
  v104 = operator new(4u);
  *v104 = v1;
  v969 = v104;
  v971 = sub_1298284;
  v970 = (void (*)(void))sub_1298290;
  v105 = operator new(4u);
  *v105 = v1;
  v966 = v105;
  v968 = sub_12982C6;
  v967 = (void (*)(void))sub_12982DE;
    (int **)&v977,
    (const char **)&v976,
    (const char **)&v975,
    (int)&v972,
    (int)&v969,
    (int)&v966);
  if ( v967 )
    v967();
  if ( v970 )
    v970();
  if ( v973 )
    v973();
  v106 = (void *)(v975 - 12);
  if ( (int *)(v975 - 12) != &dword_28898C0 )
    v460 = (unsigned int *)(v975 - 4);
        v461 = __ldrex(v460);
      while ( __strex(v461 - 1, v460) );
      v461 = (*v460)--;
    if ( v461 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  v107 = (void *)(v976 - 12);
  if ( (int *)(v976 - 12) != &dword_28898C0 )
    v462 = (unsigned int *)(v976 - 4);
        v463 = __ldrex(v462);
      while ( __strex(v463 - 1, v462) );
      v463 = (*v462)--;
    if ( v463 <= 0 )
      j_j_j_j__ZdlPv_9(v107);
  v108 = (void *)(v977 - 12);
  if ( (int *)(v977 - 12) != &dword_28898C0 )
    v464 = (unsigned int *)(v977 - 4);
        v465 = __ldrex(v464);
      while ( __strex(v465 - 1, v464) );
      v465 = (*v464)--;
    if ( v465 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
  StringHash::StringHash<char [27]>(&v965, (int)"#show_permissions_dropdown");
  v109 = operator new(4u);
  *v109 = v1;
  v962 = v109;
  v964 = sub_1298314;
  v963 = (void (*)(void))sub_1298346;
  v959 = operator new(1u);
  v961 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v960 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v965, (int)&v962, (int)&v959);
  if ( v960 )
    v960();
  if ( v963 )
    v963();
  sub_21E94B4((void **)&v958, "allow_cheats");
  sub_21E94B4((void **)&v957, "#allow_cheats");
  sub_21E94B4((void **)&v956, "#allow_cheats_enabled");
  v110 = operator new(4u);
  *v110 = v1;
  v953 = v110;
  v955 = sub_129837C;
  v954 = (void (*)(void))sub_12983C8;
  v111 = operator new(4u);
  *v111 = v1;
  v950 = v111;
  v952 = sub_12983FE;
  v951 = (void (*)(void))sub_1298440;
  v112 = operator new(4u);
  *v112 = v1;
  v947 = v112;
  v949 = sub_1298476;
  v948 = (void (*)(void))sub_129847E;
    (int **)&v958,
    (const char **)&v957,
    (const char **)&v956,
    (int)&v953,
    (int)&v950,
    (int)&v947);
  if ( v948 )
    v948();
  if ( v951 )
    v951();
  if ( v954 )
    v954();
  v113 = (void *)(v956 - 12);
  if ( (int *)(v956 - 12) != &dword_28898C0 )
    v466 = (unsigned int *)(v956 - 4);
        v467 = __ldrex(v466);
      while ( __strex(v467 - 1, v466) );
      v467 = (*v466)--;
    if ( v467 <= 0 )
      j_j_j_j__ZdlPv_9(v113);
  v114 = (void *)(v957 - 12);
  if ( (int *)(v957 - 12) != &dword_28898C0 )
    v468 = (unsigned int *)(v957 - 4);
        v469 = __ldrex(v468);
      while ( __strex(v469 - 1, v468) );
      v469 = (*v468)--;
    if ( v469 <= 0 )
      j_j_j_j__ZdlPv_9(v114);
  v115 = (void *)(v958 - 12);
  if ( (int *)(v958 - 12) != &dword_28898C0 )
    v470 = (unsigned int *)(v958 - 4);
        v471 = __ldrex(v470);
      while ( __strex(v471 - 1, v470) );
      v471 = (*v470)--;
    if ( v471 <= 0 )
      j_j_j_j__ZdlPv_9(v115);
  sub_21E94B4((void **)&v946, "show_coordinates");
  sub_21E94B4((void **)&v945, "#show_coordinates");
  sub_21E94B4((void **)&v944, "#show_coordinates_enabled");
  v116 = operator new(4u);
  *v116 = v1;
  v941 = v116;
  v943 = sub_12984B4;
  v942 = (void (*)(void))sub_12984BC;
  v117 = operator new(4u);
  *v117 = v1;
  v938 = v117;
  v940 = sub_12984F4;
  v939 = (void (*)(void))sub_1298540;
  v118 = operator new(4u);
  *v118 = v1;
  v935 = v118;
  v937 = sub_1298578;
  v936 = (void (*)(void))sub_129858C;
    (int **)&v946,
    (const char **)&v945,
    (const char **)&v944,
    (int)&v941,
    (int)&v938,
    (int)&v935);
  if ( v936 )
    v936();
  if ( v939 )
    v939();
  if ( v942 )
    v942();
  v119 = (void *)(v944 - 12);
  if ( (int *)(v944 - 12) != &dword_28898C0 )
    v472 = (unsigned int *)(v944 - 4);
        v473 = __ldrex(v472);
      while ( __strex(v473 - 1, v472) );
      v473 = (*v472)--;
    if ( v473 <= 0 )
      j_j_j_j__ZdlPv_9(v119);
  v120 = (void *)(v945 - 12);
  if ( (int *)(v945 - 12) != &dword_28898C0 )
    v474 = (unsigned int *)(v945 - 4);
        v475 = __ldrex(v474);
      while ( __strex(v475 - 1, v474) );
      v475 = (*v474)--;
    if ( v475 <= 0 )
      j_j_j_j__ZdlPv_9(v120);
  v121 = (void *)(v946 - 12);
  if ( (int *)(v946 - 12) != &dword_28898C0 )
    v476 = (unsigned int *)(v946 - 4);
        v477 = __ldrex(v476);
      while ( __strex(v477 - 1, v476) );
      v477 = (*v476)--;
    if ( v477 <= 0 )
      j_j_j_j__ZdlPv_9(v121);
  sub_21E94B4((void **)&v934, "always_day");
  sub_21E94B4((void **)&v933, "#always_day");
  sub_21E94B4((void **)&v932, "#always_day_enabled");
  v122 = operator new(4u);
  *v122 = v1;
  v929 = v122;
  v931 = sub_12985C2;
  v930 = (void (*)(void))sub_12985CA;
  v123 = operator new(4u);
  *v123 = v1;
  v926 = v123;
  v928 = sub_1298600;
  v927 = (void (*)(void))sub_1298636;
  v124 = operator new(4u);
  *v124 = v1;
  v923 = v124;
  v925 = sub_129866C;
  v924 = (void (*)(void))sub_1298674;
    (int **)&v934,
    (const char **)&v933,
    (const char **)&v932,
    (int)&v929,
    (int)&v926,
    (int)&v923);
  if ( v924 )
    v924();
  if ( v927 )
    v927();
  if ( v930 )
    v930();
  v125 = (void *)(v932 - 12);
  if ( (int *)(v932 - 12) != &dword_28898C0 )
    v478 = (unsigned int *)(v932 - 4);
        v479 = __ldrex(v478);
      while ( __strex(v479 - 1, v478) );
      v479 = (*v478)--;
    if ( v479 <= 0 )
      j_j_j_j__ZdlPv_9(v125);
  v126 = (void *)(v933 - 12);
  if ( (int *)(v933 - 12) != &dword_28898C0 )
    v480 = (unsigned int *)(v933 - 4);
        v481 = __ldrex(v480);
      while ( __strex(v481 - 1, v480) );
      v481 = (*v480)--;
    if ( v481 <= 0 )
      j_j_j_j__ZdlPv_9(v126);
  v127 = (void *)(v934 - 12);
  if ( (int *)(v934 - 12) != &dword_28898C0 )
    v482 = (unsigned int *)(v934 - 4);
        v483 = __ldrex(v482);
      while ( __strex(v483 - 1, v482) );
      v483 = (*v482)--;
    if ( v483 <= 0 )
      j_j_j_j__ZdlPv_9(v127);
  sub_21E94B4((void **)&v922, "fire_spreads");
  sub_21E94B4((void **)&v921, "#fire_spreads");
  sub_21E94B4((void **)&v920, "#fire_spreads_enabled");
  v128 = operator new(4u);
  *v128 = v1;
  v917 = v128;
  v919 = sub_12986AA;
  v918 = (void (*)(void))sub_12986B2;
  v129 = operator new(4u);
  *v129 = v1;
  v914 = v129;
  v916 = sub_12986E8;
  v915 = (void (*)(void))sub_1298734;
  v130 = operator new(4u);
  *v130 = v1;
  v911 = v130;
  v913 = sub_129876C;
  v912 = (void (*)(void))sub_1298780;
    (int **)&v922,
    (const char **)&v921,
    (const char **)&v920,
    (int)&v917,
    (int)&v914,
    (int)&v911);
  if ( v912 )
    v912();
  if ( v915 )
    v915();
  if ( v918 )
    v918();
  v131 = (void *)(v920 - 12);
  if ( (int *)(v920 - 12) != &dword_28898C0 )
    v484 = (unsigned int *)(v920 - 4);
        v485 = __ldrex(v484);
      while ( __strex(v485 - 1, v484) );
      v485 = (*v484)--;
    if ( v485 <= 0 )
      j_j_j_j__ZdlPv_9(v131);
  v132 = (void *)(v921 - 12);
  if ( (int *)(v921 - 12) != &dword_28898C0 )
    v486 = (unsigned int *)(v921 - 4);
        v487 = __ldrex(v486);
      while ( __strex(v487 - 1, v486) );
      v487 = (*v486)--;
    if ( v487 <= 0 )
      j_j_j_j__ZdlPv_9(v132);
  v133 = (void *)(v922 - 12);
  if ( (int *)(v922 - 12) != &dword_28898C0 )
    v488 = (unsigned int *)(v922 - 4);
        v489 = __ldrex(v488);
      while ( __strex(v489 - 1, v488) );
      v489 = (*v488)--;
    if ( v489 <= 0 )
      j_j_j_j__ZdlPv_9(v133);
  sub_21E94B4((void **)&v910, "mob_loot");
  sub_21E94B4((void **)&v909, "#mob_loot");
  sub_21E94B4((void **)&v908, "#mob_loot_enabled");
  v134 = operator new(4u);
  *v134 = v1;
  v905 = v134;
  v907 = sub_12987B6;
  v906 = (void (*)(void))sub_12987BE;
  v135 = operator new(4u);
  *v135 = v1;
  v902 = v135;
  v904 = sub_12987F4;
  v903 = (void (*)(void))sub_1298840;
  v136 = operator new(4u);
  *v136 = v1;
  v899 = v136;
  v901 = sub_1298878;
  v900 = (void (*)(void))sub_129888C;
    (int **)&v910,
    (const char **)&v909,
    (const char **)&v908,
    (int)&v905,
    (int)&v902,
    (int)&v899);
  if ( v900 )
    v900();
  if ( v903 )
    v903();
  if ( v906 )
    v906();
  v137 = (void *)(v908 - 12);
  if ( (int *)(v908 - 12) != &dword_28898C0 )
    v490 = (unsigned int *)(v908 - 4);
        v491 = __ldrex(v490);
      while ( __strex(v491 - 1, v490) );
      v491 = (*v490)--;
    if ( v491 <= 0 )
      j_j_j_j__ZdlPv_9(v137);
  v138 = (void *)(v909 - 12);
  if ( (int *)(v909 - 12) != &dword_28898C0 )
    v492 = (unsigned int *)(v909 - 4);
        v493 = __ldrex(v492);
      while ( __strex(v493 - 1, v492) );
      v493 = (*v492)--;
    if ( v493 <= 0 )
      j_j_j_j__ZdlPv_9(v138);
  v139 = (void *)(v910 - 12);
  if ( (int *)(v910 - 12) != &dword_28898C0 )
    v494 = (unsigned int *)(v910 - 4);
        v495 = __ldrex(v494);
      while ( __strex(v495 - 1, v494) );
      v495 = (*v494)--;
    if ( v495 <= 0 )
      j_j_j_j__ZdlPv_9(v139);
  sub_21E94B4((void **)&v898, "tile_drops");
  sub_21E94B4((void **)&v897, "#tile_drops");
  sub_21E94B4((void **)&v896, "#tile_drops_enabled");
  v140 = operator new(4u);
  *v140 = v1;
  v893 = v140;
  v895 = sub_12988C2;
  v894 = (void (*)(void))sub_12988CA;
  v141 = operator new(4u);
  *v141 = v1;
  v890 = v141;
  v892 = sub_1298900;
  v891 = (void (*)(void))sub_129894C;
  v142 = operator new(4u);
  *v142 = v1;
  v887 = v142;
  v889 = sub_1298984;
  v888 = (void (*)(void))sub_1298998;
    (int **)&v898,
    (const char **)&v897,
    (const char **)&v896,
    (int)&v893,
    (int)&v890,
    (int)&v887);
  if ( v888 )
    v888();
  if ( v891 )
    v891();
  if ( v894 )
    v894();
  v143 = (void *)(v896 - 12);
  if ( (int *)(v896 - 12) != &dword_28898C0 )
    v496 = (unsigned int *)(v896 - 4);
        v497 = __ldrex(v496);
      while ( __strex(v497 - 1, v496) );
      v497 = (*v496)--;
    if ( v497 <= 0 )
      j_j_j_j__ZdlPv_9(v143);
  v144 = (void *)(v897 - 12);
  if ( (int *)(v897 - 12) != &dword_28898C0 )
    v498 = (unsigned int *)(v897 - 4);
        v499 = __ldrex(v498);
      while ( __strex(v499 - 1, v498) );
      v499 = (*v498)--;
    if ( v499 <= 0 )
      j_j_j_j__ZdlPv_9(v144);
  v145 = (void *)(v898 - 12);
  if ( (int *)(v898 - 12) != &dword_28898C0 )
    v500 = (unsigned int *)(v898 - 4);
        v501 = __ldrex(v500);
      while ( __strex(v501 - 1, v500) );
      v501 = (*v500)--;
    if ( v501 <= 0 )
      j_j_j_j__ZdlPv_9(v145);
  sub_21E94B4((void **)&v886, "keep_inventory");
  sub_21E94B4((void **)&v885, "#keep_inventory");
  sub_21E94B4((void **)&v884, "#keep_inventory_enabled");
  v146 = operator new(4u);
  *v146 = v1;
  v881 = v146;
  v883 = sub_12989CE;
  v882 = (void (*)(void))sub_12989D6;
  v147 = operator new(4u);
  *v147 = v1;
  v878 = v147;
  v880 = sub_1298A0C;
  v879 = (void (*)(void))sub_1298A58;
  v148 = operator new(4u);
  *v148 = v1;
  v875 = v148;
  v877 = sub_1298A90;
  v876 = (void (*)(void))sub_1298AA4;
    (int **)&v886,
    (const char **)&v885,
    (const char **)&v884,
    (int)&v881,
    (int)&v878,
    (int)&v875);
  if ( v876 )
    v876();
  if ( v879 )
    v879();
  if ( v882 )
    v882();
  v149 = (void *)(v884 - 12);
  if ( (int *)(v884 - 12) != &dword_28898C0 )
    v502 = (unsigned int *)(v884 - 4);
        v503 = __ldrex(v502);
      while ( __strex(v503 - 1, v502) );
      v503 = (*v502)--;
    if ( v503 <= 0 )
      j_j_j_j__ZdlPv_9(v149);
  v150 = (void *)(v885 - 12);
  if ( (int *)(v885 - 12) != &dword_28898C0 )
    v504 = (unsigned int *)(v885 - 4);
        v505 = __ldrex(v504);
      while ( __strex(v505 - 1, v504) );
      v505 = (*v504)--;
    if ( v505 <= 0 )
      j_j_j_j__ZdlPv_9(v150);
  v151 = (void *)(v886 - 12);
  if ( (int *)(v886 - 12) != &dword_28898C0 )
    v506 = (unsigned int *)(v886 - 4);
        v507 = __ldrex(v506);
      while ( __strex(v507 - 1, v506) );
      v507 = (*v506)--;
    if ( v507 <= 0 )
      j_j_j_j__ZdlPv_9(v151);
  sub_21E94B4((void **)&v874, "natural_regeneration");
  sub_21E94B4((void **)&v873, "#natural_regeneration");
  sub_21E94B4((void **)&v872, "#natural_regeneration_enabled");
  v152 = operator new(4u);
  *v152 = v1;
  v869 = v152;
  v871 = sub_1298ADA;
  v870 = (void (*)(void))sub_1298AE2;
  v153 = operator new(4u);
  *v153 = v1;
  v866 = v153;
  v868 = sub_1298B18;
  v867 = (void (*)(void))sub_1298B64;
  v154 = operator new(4u);
  *v154 = v1;
  v863 = v154;
  v865 = sub_1298B9C;
  v864 = (void (*)(void))sub_1298BB0;
    (int **)&v874,
    (const char **)&v873,
    (const char **)&v872,
    (int)&v869,
    (int)&v866,
    (int)&v863);
  if ( v864 )
    v864();
  if ( v867 )
    v867();
  if ( v870 )
    v870();
  v155 = (void *)(v872 - 12);
  if ( (int *)(v872 - 12) != &dword_28898C0 )
    v508 = (unsigned int *)(v872 - 4);
        v509 = __ldrex(v508);
      while ( __strex(v509 - 1, v508) );
      v509 = (*v508)--;
    if ( v509 <= 0 )
      j_j_j_j__ZdlPv_9(v155);
  v156 = (void *)(v873 - 12);
  if ( (int *)(v873 - 12) != &dword_28898C0 )
    v510 = (unsigned int *)(v873 - 4);
        v511 = __ldrex(v510);
      while ( __strex(v511 - 1, v510) );
      v511 = (*v510)--;
    if ( v511 <= 0 )
      j_j_j_j__ZdlPv_9(v156);
  v157 = (void *)(v874 - 12);
  if ( (int *)(v874 - 12) != &dword_28898C0 )
    v512 = (unsigned int *)(v874 - 4);
        v513 = __ldrex(v512);
      while ( __strex(v513 - 1, v512) );
      v513 = (*v512)--;
    if ( v513 <= 0 )
      j_j_j_j__ZdlPv_9(v157);
  sub_21E94B4((void **)&v862, "tnt_explodes");
  sub_21E94B4((void **)&v861, "#tnt_explodes");
  sub_21E94B4((void **)&v860, "#tnt_explodes_enabled");
  v158 = operator new(4u);
  *v158 = v1;
  v857 = v158;
  v859 = sub_1298BE6;
  v858 = (void (*)(void))sub_1298BEE;
  v159 = operator new(4u);
  *v159 = v1;
  v854 = v159;
  v856 = sub_1298C24;
  v855 = (void (*)(void))sub_1298C70;
  v160 = operator new(4u);
  *v160 = v1;
  v851 = v160;
  v853 = sub_1298CA8;
  v852 = (void (*)(void))sub_1298CBC;
    (int **)&v862,
    (const char **)&v861,
    (const char **)&v860,
    (int)&v857,
    (int)&v854,
    (int)&v851);
  if ( v852 )
    v852();
  if ( v855 )
    v855();
  if ( v858 )
    v858();
  v161 = (void *)(v860 - 12);
  if ( (int *)(v860 - 12) != &dword_28898C0 )
    v514 = (unsigned int *)(v860 - 4);
        v515 = __ldrex(v514);
      while ( __strex(v515 - 1, v514) );
      v515 = (*v514)--;
    if ( v515 <= 0 )
      j_j_j_j__ZdlPv_9(v161);
  v162 = (void *)(v861 - 12);
  if ( (int *)(v861 - 12) != &dword_28898C0 )
    v516 = (unsigned int *)(v861 - 4);
        v517 = __ldrex(v516);
      while ( __strex(v517 - 1, v516) );
      v517 = (*v516)--;
    if ( v517 <= 0 )
      j_j_j_j__ZdlPv_9(v162);
  v163 = (void *)(v862 - 12);
  if ( (int *)(v862 - 12) != &dword_28898C0 )
    v518 = (unsigned int *)(v862 - 4);
        v519 = __ldrex(v518);
      while ( __strex(v519 - 1, v518) );
      v519 = (*v518)--;
    if ( v519 <= 0 )
      j_j_j_j__ZdlPv_9(v163);
  sub_21E94B4((void **)&v850, "weather_cycle");
  sub_21E94B4((void **)&v849, "#weather_cycle");
  sub_21E94B4((void **)&v848, "#weather_cycle_enabled");
  v164 = operator new(4u);
  *v164 = v1;
  v845 = v164;
  v847 = sub_1298CF2;
  v846 = (void (*)(void))sub_1298CFA;
  v165 = operator new(4u);
  *v165 = v1;
  v842 = v165;
  v844 = sub_1298D30;
  v843 = (void (*)(void))sub_1298D7C;
  v166 = operator new(4u);
  *v166 = v1;
  v839 = v166;
  v841 = sub_1298DB4;
  v840 = (void (*)(void))sub_1298DC8;
    (int **)&v850,
    (const char **)&v849,
    (const char **)&v848,
    (int)&v845,
    (int)&v842,
    (int)&v839);
  if ( v840 )
    v840();
  if ( v843 )
    v843();
  if ( v846 )
    v846();
  v167 = (void *)(v848 - 12);
  if ( (int *)(v848 - 12) != &dword_28898C0 )
    v520 = (unsigned int *)(v848 - 4);
        v521 = __ldrex(v520);
      while ( __strex(v521 - 1, v520) );
      v521 = (*v520)--;
    if ( v521 <= 0 )
      j_j_j_j__ZdlPv_9(v167);
  v168 = (void *)(v849 - 12);
  if ( (int *)(v849 - 12) != &dword_28898C0 )
    v522 = (unsigned int *)(v849 - 4);
        v523 = __ldrex(v522);
      while ( __strex(v523 - 1, v522) );
      v523 = (*v522)--;
    if ( v523 <= 0 )
      j_j_j_j__ZdlPv_9(v168);
  v169 = (void *)(v850 - 12);
  if ( (int *)(v850 - 12) != &dword_28898C0 )
    v524 = (unsigned int *)(v850 - 4);
        v525 = __ldrex(v524);
      while ( __strex(v525 - 1, v524) );
      v525 = (*v524)--;
    if ( v525 <= 0 )
      j_j_j_j__ZdlPv_9(v169);
  sub_21E94B4((void **)&v838, "daylight_cycle");
  sub_21E94B4((void **)&v837, "#daylight_cycle");
  sub_21E94B4((void **)&v836, "#daylight_cycle_enabled");
  v170 = operator new(4u);
  *v170 = v1;
  v833 = v170;
  v835 = sub_1298DFE;
  v834 = (void (*)(void))sub_1298E06;
  v171 = operator new(4u);
  *v171 = v1;
  v830 = v171;
  v832 = sub_1298E3C;
  v831 = (void (*)(void))sub_1298E88;
  v172 = operator new(4u);
  *v172 = v1;
  v827 = v172;
  v829 = sub_1298EC0;
  v828 = (void (*)(void))sub_1298ED4;
    (int **)&v838,
    (const char **)&v837,
    (const char **)&v836,
    (int)&v833,
    (int)&v830,
    (int)&v827);
  if ( v828 )
    v828();
  if ( v831 )
    v831();
  if ( v834 )
    v834();
  v173 = (void *)(v836 - 12);
  if ( (int *)(v836 - 12) != &dword_28898C0 )
    v526 = (unsigned int *)(v836 - 4);
        v527 = __ldrex(v526);
      while ( __strex(v527 - 1, v526) );
      v527 = (*v526)--;
    if ( v527 <= 0 )
      j_j_j_j__ZdlPv_9(v173);
  v174 = (void *)(v837 - 12);
  if ( (int *)(v837 - 12) != &dword_28898C0 )
    v528 = (unsigned int *)(v837 - 4);
        v529 = __ldrex(v528);
      while ( __strex(v529 - 1, v528) );
      v529 = (*v528)--;
    if ( v529 <= 0 )
      j_j_j_j__ZdlPv_9(v174);
  v175 = (void *)(v838 - 12);
  if ( (int *)(v838 - 12) != &dword_28898C0 )
    v530 = (unsigned int *)(v838 - 4);
        v531 = __ldrex(v530);
      while ( __strex(v531 - 1, v530) );
      v531 = (*v530)--;
    if ( v531 <= 0 )
      j_j_j_j__ZdlPv_9(v175);
  sub_21E94B4((void **)&v826, "mob_spawn");
  sub_21E94B4((void **)&v825, "#mob_spawn");
  sub_21E94B4((void **)&v824, "#mob_spawn_enabled");
  v176 = operator new(4u);
  *v176 = v1;
  v821 = v176;
  v823 = sub_1298F0A;
  v822 = (void (*)(void))sub_1298F12;
  v177 = operator new(4u);
  *v177 = v1;
  v818 = v177;
  v820 = sub_1298F48;
  v819 = (void (*)(void))sub_1298F94;
  v178 = operator new(4u);
  *v178 = v1;
  v815 = v178;
  v817 = sub_1298FCC;
  v816 = (void (*)(void))sub_1298FE0;
    (int **)&v826,
    (const char **)&v825,
    (const char **)&v824,
    (int)&v821,
    (int)&v818,
    (int)&v815);
  if ( v816 )
    v816();
  if ( v819 )
    v819();
  if ( v822 )
    v822();
  v179 = (void *)(v824 - 12);
  if ( (int *)(v824 - 12) != &dword_28898C0 )
    v532 = (unsigned int *)(v824 - 4);
        v533 = __ldrex(v532);
      while ( __strex(v533 - 1, v532) );
      v533 = (*v532)--;
    if ( v533 <= 0 )
      j_j_j_j__ZdlPv_9(v179);
  v180 = (void *)(v825 - 12);
  if ( (int *)(v825 - 12) != &dword_28898C0 )
    v534 = (unsigned int *)(v825 - 4);
        v535 = __ldrex(v534);
      while ( __strex(v535 - 1, v534) );
      v535 = (*v534)--;
    if ( v535 <= 0 )
      j_j_j_j__ZdlPv_9(v180);
  v181 = (void *)(v826 - 12);
  if ( (int *)(v826 - 12) != &dword_28898C0 )
    v536 = (unsigned int *)(v826 - 4);
        v537 = __ldrex(v536);
      while ( __strex(v537 - 1, v536) );
      v537 = (*v536)--;
    if ( v537 <= 0 )
      j_j_j_j__ZdlPv_9(v181);
  sub_21E94B4((void **)&v814, "mob_griefing");
  sub_21E94B4((void **)&v813, "#mob_griefing");
  sub_21E94B4((void **)&v812, "#mob_griefing_enabled");
  v182 = operator new(4u);
  *v182 = v1;
  v809 = v182;
  v811 = sub_1299016;
  v810 = (void (*)(void))sub_129901E;
  v183 = operator new(4u);
  *v183 = v1;
  v806 = v183;
  v808 = sub_1299054;
  v807 = (void (*)(void))sub_12990A0;
  v184 = operator new(4u);
  *v184 = v1;
  v803 = v184;
  v805 = sub_12990D8;
  v804 = (void (*)(void))sub_12990EC;
    (int **)&v814,
    (const char **)&v813,
    (const char **)&v812,
    (int)&v809,
    (int)&v806,
    (int)&v803);
  if ( v804 )
    v804();
  if ( v807 )
    v807();
  if ( v810 )
    v810();
  v185 = (void *)(v812 - 12);
  if ( (int *)(v812 - 12) != &dword_28898C0 )
    v538 = (unsigned int *)(v812 - 4);
        v539 = __ldrex(v538);
      while ( __strex(v539 - 1, v538) );
      v539 = (*v538)--;
    if ( v539 <= 0 )
      j_j_j_j__ZdlPv_9(v185);
  v186 = (void *)(v813 - 12);
  if ( (int *)(v813 - 12) != &dword_28898C0 )
    v540 = (unsigned int *)(v813 - 4);
        v541 = __ldrex(v540);
      while ( __strex(v541 - 1, v540) );
      v541 = (*v540)--;
    if ( v541 <= 0 )
      j_j_j_j__ZdlPv_9(v186);
  v187 = (void *)(v814 - 12);
  if ( (int *)(v814 - 12) != &dword_28898C0 )
    v542 = (unsigned int *)(v814 - 4);
        v543 = __ldrex(v542);
      while ( __strex(v543 - 1, v542) );
      v543 = (*v542)--;
    if ( v543 <= 0 )
      j_j_j_j__ZdlPv_9(v187);
  sub_21E94B4((void **)&v802, "entities_drop_loot");
  sub_21E94B4((void **)&v801, "#entities_drop_loot");
  sub_21E94B4((void **)&v800, "#entities_drop_loot_enabled");
  v188 = operator new(4u);
  *v188 = v1;
  v797 = v188;
  v799 = sub_1299122;
  v798 = (void (*)(void))sub_129912A;
  v189 = operator new(4u);
  *v189 = v1;
  v794 = v189;
  v796 = sub_1299160;
  v795 = (void (*)(void))sub_12991AC;
  v190 = operator new(4u);
  *v190 = v1;
  v791 = v190;
  v793 = sub_12991E4;
  v792 = (void (*)(void))sub_12991F8;
    (int **)&v802,
    (const char **)&v801,
    (const char **)&v800,
    (int)&v797,
    (int)&v794,
    (int)&v791);
  if ( v792 )
    v792();
  if ( v795 )
    v795();
  if ( v798 )
    v798();
  v191 = (void *)(v800 - 12);
  if ( (int *)(v800 - 12) != &dword_28898C0 )
    v544 = (unsigned int *)(v800 - 4);
        v545 = __ldrex(v544);
      while ( __strex(v545 - 1, v544) );
      v545 = (*v544)--;
    if ( v545 <= 0 )
      j_j_j_j__ZdlPv_9(v191);
  v192 = (void *)(v801 - 12);
  if ( (int *)(v801 - 12) != &dword_28898C0 )
    v546 = (unsigned int *)(v801 - 4);
        v547 = __ldrex(v546);
      while ( __strex(v547 - 1, v546) );
      v547 = (*v546)--;
    if ( v547 <= 0 )
      j_j_j_j__ZdlPv_9(v192);
  v193 = (void *)(v802 - 12);
  if ( (int *)(v802 - 12) != &dword_28898C0 )
    v548 = (unsigned int *)(v802 - 4);
        v549 = __ldrex(v548);
      while ( __strex(v549 - 1, v548) );
      v549 = (*v548)--;
    if ( v549 <= 0 )
      j_j_j_j__ZdlPv_9(v193);
  sub_21E94B4((void **)&v790, "export_world_button");
  v194 = MinecraftScreenController::_getNameId(v1, (int **)&v790);
  v195 = operator new(4u);
  *v195 = v1;
  v787 = v195;
  v789 = sub_129922E;
  v788 = (void (*)(void))sub_129923C;
  ScreenController::registerButtonClickHandler((int)v1, v194, (int)&v787);
  if ( v788 )
    v788();
  v196 = (void *)(v790 - 12);
  if ( (int *)(v790 - 12) != &dword_28898C0 )
    v550 = (unsigned int *)(v790 - 4);
        v551 = __ldrex(v550);
      while ( __strex(v551 - 1, v550) );
      v551 = (*v550)--;
    if ( v551 <= 0 )
      j_j_j_j__ZdlPv_9(v196);
  sub_21E94B4((void **)&v786, "export_template_button");
  v197 = MinecraftScreenController::_getNameId(v1, (int **)&v786);
  v198 = operator new(4u);
  *v198 = v1;
  v783 = v198;
  v785 = sub_1299272;
  v784 = (void (*)(void))sub_129929A;
  ScreenController::registerButtonClickHandler((int)v1, v197, (int)&v783);
  if ( v784 )
    v784();
  v199 = (void *)(v786 - 12);
  if ( (int *)(v786 - 12) != &dword_28898C0 )
    v552 = (unsigned int *)(v786 - 4);
        v553 = __ldrex(v552);
      while ( __strex(v553 - 1, v552) );
      v553 = (*v552)--;
    if ( v553 <= 0 )
      j_j_j_j__ZdlPv_9(v199);
  sub_21E94B4((void **)&v782, "copy_world_button");
  v200 = MinecraftScreenController::_getNameId(v1, (int **)&v782);
  v201 = operator new(4u);
  *v201 = v1;
  v779 = v201;
  v781 = sub_12992D0;
  v780 = (void (*)(void))sub_12992DE;
  ScreenController::registerButtonClickHandler((int)v1, v200, (int)&v779);
  if ( v780 )
    v780();
  v202 = (void *)(v782 - 12);
  if ( (int *)(v782 - 12) != &dword_28898C0 )
    v554 = (unsigned int *)(v782 - 4);
        v555 = __ldrex(v554);
      while ( __strex(v555 - 1, v554) );
      v555 = (*v554)--;
    if ( v555 <= 0 )
      j_j_j_j__ZdlPv_9(v202);
  sub_21E94B4((void **)&v778, "delete_world_button");
  v203 = MinecraftScreenController::_getNameId(v1, (int **)&v778);
  v204 = operator new(4u);
  *v204 = v1;
  v775 = v204;
  v777 = sub_1299314;
  v776 = (void (*)(void))sub_1299322;
  ScreenController::registerButtonClickHandler((int)v1, v203, (int)&v775);
  if ( v776 )
    v776();
  v205 = (void *)(v778 - 12);
  if ( (int *)(v778 - 12) != &dword_28898C0 )
    v556 = (unsigned int *)(v778 - 4);
        v557 = __ldrex(v556);
      while ( __strex(v557 - 1, v556) );
      v557 = (*v556)--;
    if ( v557 <= 0 )
      j_j_j_j__ZdlPv_9(v205);
  sub_21E94B4((void **)&v774, "choose_ugc_level_seed");
  v206 = MinecraftScreenController::_getNameId(v1, (int **)&v774);
  v207 = operator new(4u);
  *v207 = v1;
  v771 = v207;
  v773 = sub_1299358;
  v772 = (void (*)(void))sub_1299366;
  ScreenController::registerButtonClickHandler((int)v1, v206, (int)&v771);
  if ( v772 )
    v772();
  v208 = (void *)(v774 - 12);
  if ( (int *)(v774 - 12) != &dword_28898C0 )
    v558 = (unsigned int *)(v774 - 4);
        v559 = __ldrex(v558);
      while ( __strex(v559 - 1, v558) );
      v559 = (*v558)--;
    if ( v559 <= 0 )
      j_j_j_j__ZdlPv_9(v208);
  sub_21E94B4((void **)&v770, "classroom_settings");
  sub_21E94B4((void **)&v769, "#classroom_settings");
  sub_21E94B4((void **)&v768, "#classroom_settings_enabled");
  v209 = operator new(4u);
  *v209 = v1;
  v765 = v209;
  v767 = sub_129939C;
  v766 = (void (*)(void))sub_12993A4;
  v210 = operator new(4u);
  *v210 = v1;
  v762 = v210;
  v764 = sub_12993DA;
  v763 = (void (*)(void))sub_12993EA;
  v211 = operator new(4u);
  LODWORD(v212) = sub_129942A;
  *v211 = v1;
  HIDWORD(v212) = sub_1299420;
  v760 = v211;
  v761 = v212;
    (int **)&v770,
    (const char **)&v769,
    (const char **)&v768,
    (int)&v765,
    (int)&v762,
    (int)&v760);
  if ( (_DWORD)v761 )
    ((void (*)(void))v761)();
  if ( v763 )
    v763();
  if ( v766 )
    v766();
  v213 = (void *)(v768 - 12);
  if ( (int *)(v768 - 12) != &dword_28898C0 )
    v560 = (unsigned int *)(v768 - 4);
        v561 = __ldrex(v560);
      while ( __strex(v561 - 1, v560) );
      v561 = (*v560)--;
    if ( v561 <= 0 )
      j_j_j_j__ZdlPv_9(v213);
  v214 = (void *)(v769 - 12);
  if ( (int *)(v769 - 12) != &dword_28898C0 )
    v562 = (unsigned int *)(v769 - 4);
        v563 = __ldrex(v562);
      while ( __strex(v563 - 1, v562) );
      v563 = (*v562)--;
    if ( v563 <= 0 )
      j_j_j_j__ZdlPv_9(v214);
  v215 = (void *)(v770 - 12);
  if ( (int *)(v770 - 12) != &dword_28898C0 )
    v564 = (unsigned int *)(v770 - 4);
        v565 = __ldrex(v564);
      while ( __strex(v565 - 1, v564) );
      v565 = (*v564)--;
    if ( v565 <= 0 )
      j_j_j_j__ZdlPv_9(v215);
  sub_21E94B4((void **)&v759, "perfect_weather");
  sub_21E94B4((void **)&v758, "#perfect_weather");
  sub_21E94B4((void **)&v757, "#perfect_weather_enabled");
  v216 = operator new(4u);
  LODWORD(v217) = sub_1299468;
  *v216 = v1;
  HIDWORD(v217) = sub_1299460;
  v755 = v216;
  v756 = v217;
  v218 = operator new(4u);
  LODWORD(v219) = sub_12994F8;
  *v218 = v1;
  HIDWORD(v219) = sub_12994A0;
  v753 = v218;
  v754 = v219;
  v220 = operator new(4u);
  LODWORD(v221) = sub_1299536;
  *v220 = v1;
  HIDWORD(v221) = sub_129952E;
  v751 = v220;
  v752 = v221;
    (int **)&v759,
    (const char **)&v758,
    (const char **)&v757,
    (int)&v755,
    (int)&v753,
    (int)&v751);
  if ( (_DWORD)v752 )
    ((void (*)(void))v752)();
  if ( (_DWORD)v754 )
    ((void (*)(void))v754)();
  if ( (_DWORD)v756 )
    ((void (*)(void))v756)();
  v222 = (void *)(v757 - 12);
  if ( (int *)(v757 - 12) != &dword_28898C0 )
    v566 = (unsigned int *)(v757 - 4);
        v567 = __ldrex(v566);
      while ( __strex(v567 - 1, v566) );
      v567 = (*v566)--;
    if ( v567 <= 0 )
      j_j_j_j__ZdlPv_9(v222);
  v223 = (void *)(v758 - 12);
  if ( (int *)(v758 - 12) != &dword_28898C0 )
    v568 = (unsigned int *)(v758 - 4);
        v569 = __ldrex(v568);
      while ( __strex(v569 - 1, v568) );
      v569 = (*v568)--;
    if ( v569 <= 0 )
      j_j_j_j__ZdlPv_9(v223);
  v224 = (void *)(v759 - 12);
  if ( (int *)(v759 - 12) != &dword_28898C0 )
    v570 = (unsigned int *)(v759 - 4);
        v571 = __ldrex(v570);
      while ( __strex(v571 - 1, v570) );
      v571 = (*v570)--;
    if ( v571 <= 0 )
      j_j_j_j__ZdlPv_9(v224);
  sub_21E94B4((void **)&v750, "allow_mobs");
  sub_21E94B4((void **)&v749, "#allow_mobs");
  sub_21E94B4((void **)&v748, "#allow_mobs_enabled");
  v225 = operator new(4u);
  LODWORD(v226) = sub_1299574;
  *v225 = v1;
  HIDWORD(v226) = sub_129956C;
  v746 = v225;
  v747 = v226;
  v227 = operator new(4u);
  LODWORD(v228) = sub_12995F8;
  *v227 = v1;
  HIDWORD(v228) = sub_12995AC;
  v744 = v227;
  v745 = v228;
  v229 = operator new(4u);
  LODWORD(v230) = sub_1299644;
  *v229 = v1;
  HIDWORD(v230) = sub_1299630;
  v742 = v229;
  v743 = v230;
    (int **)&v750,
    (const char **)&v749,
    (const char **)&v748,
    (int)&v746,
    (int)&v744,
    (int)&v742);
  if ( (_DWORD)v743 )
    ((void (*)(void))v743)();
  if ( (_DWORD)v745 )
    ((void (*)(void))v745)();
  if ( (_DWORD)v747 )
    ((void (*)(void))v747)();
  v231 = (void *)(v748 - 12);
  if ( (int *)(v748 - 12) != &dword_28898C0 )
    v572 = (unsigned int *)(v748 - 4);
        v573 = __ldrex(v572);
      while ( __strex(v573 - 1, v572) );
      v573 = (*v572)--;
    if ( v573 <= 0 )
      j_j_j_j__ZdlPv_9(v231);
  v232 = (void *)(v749 - 12);
  if ( (int *)(v749 - 12) != &dword_28898C0 )
    v574 = (unsigned int *)(v749 - 4);
        v575 = __ldrex(v574);
      while ( __strex(v575 - 1, v574) );
      v575 = (*v574)--;
    if ( v575 <= 0 )
      j_j_j_j__ZdlPv_9(v232);
  v233 = (void *)(v750 - 12);
  if ( (int *)(v750 - 12) != &dword_28898C0 )
    v576 = (unsigned int *)(v750 - 4);
        v577 = __ldrex(v576);
      while ( __strex(v577 - 1, v576) );
      v577 = (*v576)--;
    if ( v577 <= 0 )
      j_j_j_j__ZdlPv_9(v233);
  sub_21E94B4((void **)&v741, "allow_destructive_items");
  sub_21E94B4((void **)&v740, "#allow_destructive_items");
  sub_21E94B4((void **)&v739, "#allow_destructive_items_enabled");
  v234 = operator new(4u);
  LODWORD(v235) = sub_1299682;
  *v234 = v1;
  HIDWORD(v235) = sub_129967A;
  v737 = v234;
  v738 = v235;
  v236 = operator new(4u);
  LODWORD(v237) = sub_1299704;
  *v236 = v1;
  HIDWORD(v237) = sub_12996B8;
  v735 = v236;
  v736 = v237;
  v238 = operator new(4u);
  LODWORD(v239) = sub_1299750;
  *v238 = v1;
  HIDWORD(v239) = sub_129973C;
  v733 = v238;
  v734 = v239;
    (int **)&v741,
    (const char **)&v740,
    (const char **)&v739,
    (int)&v737,
    (int)&v735,
    (int)&v733);
  if ( (_DWORD)v734 )
    ((void (*)(void))v734)();
  if ( (_DWORD)v736 )
    ((void (*)(void))v736)();
  if ( (_DWORD)v738 )
    ((void (*)(void))v738)();
  v240 = (void *)(v739 - 12);
  if ( (int *)(v739 - 12) != &dword_28898C0 )
    v578 = (unsigned int *)(v739 - 4);
        v579 = __ldrex(v578);
      while ( __strex(v579 - 1, v578) );
      v579 = (*v578)--;
    if ( v579 <= 0 )
      j_j_j_j__ZdlPv_9(v240);
  v241 = (void *)(v740 - 12);
  if ( (int *)(v740 - 12) != &dword_28898C0 )
    v580 = (unsigned int *)(v740 - 4);
        v581 = __ldrex(v580);
      while ( __strex(v581 - 1, v580) );
      v581 = (*v580)--;
    if ( v581 <= 0 )
      j_j_j_j__ZdlPv_9(v241);
  v242 = (void *)(v741 - 12);
  if ( (int *)(v741 - 12) != &dword_28898C0 )
    v582 = (unsigned int *)(v741 - 4);
        v583 = __ldrex(v582);
      while ( __strex(v583 - 1, v582) );
      v583 = (*v582)--;
    if ( v583 <= 0 )
      j_j_j_j__ZdlPv_9(v242);
  sub_21E94B4((void **)&v732, "player_damage");
  sub_21E94B4((void **)&v731, "#player_damage");
  sub_21E94B4((void **)&v730, "#player_damage_enabled");
  v243 = operator new(4u);
  LODWORD(v244) = sub_129978E;
  *v243 = v1;
  HIDWORD(v244) = sub_1299786;
  v728 = v243;
  v729 = v244;
  v245 = operator new(4u);
  LODWORD(v246) = sub_12998A0;
  *v245 = v1;
  HIDWORD(v246) = sub_12997C4;
  v726 = v245;
  v727 = v246;
  v247 = operator new(4u);
  LODWORD(v248) = sub_129991C;
  *v247 = v1;
  HIDWORD(v248) = sub_12998D8;
  v724 = v247;
  v725 = v248;
    (int **)&v732,
    (const char **)&v731,
    (const char **)&v730,
    (int)&v728,
    (int)&v726,
    (int)&v724);
  if ( (_DWORD)v725 )
    ((void (*)(void))v725)();
  if ( (_DWORD)v727 )
    ((void (*)(void))v727)();
  if ( (_DWORD)v729 )
    ((void (*)(void))v729)();
  v249 = (void *)(v730 - 12);
  if ( (int *)(v730 - 12) != &dword_28898C0 )
    v584 = (unsigned int *)(v730 - 4);
        v585 = __ldrex(v584);
      while ( __strex(v585 - 1, v584) );
      v585 = (*v584)--;
    if ( v585 <= 0 )
      j_j_j_j__ZdlPv_9(v249);
  v250 = (void *)(v731 - 12);
  if ( (int *)(v731 - 12) != &dword_28898C0 )
    v586 = (unsigned int *)(v731 - 4);
        v587 = __ldrex(v586);
      while ( __strex(v587 - 1, v586) );
      v587 = (*v586)--;
    if ( v587 <= 0 )
      j_j_j_j__ZdlPv_9(v250);
  v251 = (void *)(v732 - 12);
  if ( (int *)(v732 - 12) != &dword_28898C0 )
    v588 = (unsigned int *)(v732 - 4);
        v589 = __ldrex(v588);
      while ( __strex(v589 - 1, v588) );
      v589 = (*v588)--;
    if ( v589 <= 0 )
      j_j_j_j__ZdlPv_9(v251);
  sub_21E94B4((void **)&v723, "immutable_world");
  sub_21E94B4((void **)&v722, "#immutable_world");
  sub_21E94B4((void **)&v721, "#immutable_world_enabled");
  v252 = operator new(4u);
  LODWORD(v253) = sub_129995A;
  *v252 = v1;
  HIDWORD(v253) = sub_1299952;
  v719 = v252;
  v720 = v253;
  v254 = operator new(4u);
  LODWORD(v255) = sub_12999CE;
  *v254 = v1;
  HIDWORD(v255) = sub_1299990;
  v717 = v254;
  v718 = v255;
  v256 = operator new(4u);
  LODWORD(v257) = sub_1299A0C;
  *v256 = v1;
  HIDWORD(v257) = sub_1299A04;
  v715 = v256;
  v716 = v257;
    (int **)&v723,
    (const char **)&v722,
    (const char **)&v721,
    (int)&v719,
    (int)&v717,
    (int)&v715);
  if ( (_DWORD)v716 )
    ((void (*)(void))v716)();
  if ( (_DWORD)v718 )
    ((void (*)(void))v718)();
  if ( (_DWORD)v720 )
    ((void (*)(void))v720)();
  v258 = (void *)(v721 - 12);
  if ( (int *)(v721 - 12) != &dword_28898C0 )
    v590 = (unsigned int *)(v721 - 4);
        v591 = __ldrex(v590);
      while ( __strex(v591 - 1, v590) );
      v591 = (*v590)--;
    if ( v591 <= 0 )
      j_j_j_j__ZdlPv_9(v258);
  v259 = (void *)(v722 - 12);
  if ( (int *)(v722 - 12) != &dword_28898C0 )
    v592 = (unsigned int *)(v722 - 4);
        v593 = __ldrex(v592);
      while ( __strex(v593 - 1, v592) );
      v593 = (*v592)--;
    if ( v593 <= 0 )
      j_j_j_j__ZdlPv_9(v259);
  v260 = (void *)(v723 - 12);
  if ( (int *)(v723 - 12) != &dword_28898C0 )
    v594 = (unsigned int *)(v723 - 4);
        v595 = __ldrex(v594);
      while ( __strex(v595 - 1, v594) );
      v595 = (*v594)--;
    if ( v595 <= 0 )
      j_j_j_j__ZdlPv_9(v260);
  sub_21E94B4((void **)&v714, "pvp_damage");
  sub_21E94B4((void **)&v713, "#pvp_damage");
  sub_21E94B4((void **)&v712, "#pvp_damage_enabled");
  v261 = operator new(4u);
  LODWORD(v262) = sub_1299A4A;
  *v261 = v1;
  HIDWORD(v262) = sub_1299A42;
  v710 = v261;
  v711 = v262;
  v263 = operator new(4u);
  LODWORD(v264) = sub_1299ACC;
  *v263 = v1;
  HIDWORD(v264) = sub_1299A80;
  v708 = v263;
  v709 = v264;
  v265 = operator new(4u);
  LODWORD(v266) = sub_1299B18;
  *v265 = v1;
  HIDWORD(v266) = sub_1299B04;
  v706 = v265;
  v707 = v266;
    (int **)&v714,
    (const char **)&v713,
    (const char **)&v712,
    (int)&v710,
    (int)&v708,
    (int)&v706);
  if ( (_DWORD)v707 )
    ((void (*)(void))v707)();
  if ( (_DWORD)v709 )
    ((void (*)(void))v709)();
  if ( (_DWORD)v711 )
    ((void (*)(void))v711)();
  v267 = (void *)(v712 - 12);
  if ( (int *)(v712 - 12) != &dword_28898C0 )
    v596 = (unsigned int *)(v712 - 4);
        v597 = __ldrex(v596);
      while ( __strex(v597 - 1, v596) );
      v597 = (*v596)--;
    if ( v597 <= 0 )
      j_j_j_j__ZdlPv_9(v267);
  v268 = (void *)(v713 - 12);
  if ( (int *)(v713 - 12) != &dword_28898C0 )
    v598 = (unsigned int *)(v713 - 4);
        v599 = __ldrex(v598);
      while ( __strex(v599 - 1, v598) );
      v599 = (*v598)--;
    if ( v599 <= 0 )
      j_j_j_j__ZdlPv_9(v268);
  v269 = (void *)(v714 - 12);
  if ( (int *)(v714 - 12) != &dword_28898C0 )
    v600 = (unsigned int *)(v714 - 4);
        v601 = __ldrex(v600);
      while ( __strex(v601 - 1, v600) );
      v601 = (*v600)--;
    if ( v601 <= 0 )
      j_j_j_j__ZdlPv_9(v269);
  StringHash::StringHash<char [28]>(&v705, (int)"#classroom_settings_visible");
  v270 = operator new(4u);
  LODWORD(v271) = sub_1299B5E;
  *v270 = v1;
  HIDWORD(v271) = sub_1299B4E;
  v703 = v270;
  v704 = v271;
  v701 = operator new(1u);
  LODWORD(v272) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v272) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v702 = v272;
  ScreenController::bindBool((int)v1, &v705, (int)&v703, (int)&v701);
  if ( (_DWORD)v702 )
    ((void (*)(void))v702)();
  if ( (_DWORD)v704 )
    ((void (*)(void))v704)();
  StringHash::StringHash<char [43]>(&v700, (int)"#disconnected_from_xbox_live_label_visible");
  v273 = operator new(4u);
  LODWORD(v274) = sub_1299BD0;
  *v273 = v1;
  HIDWORD(v274) = sub_1299B94;
  v698 = v273;
  v699 = v274;
  v696 = operator new(1u);
  LODWORD(v275) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v275) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v697 = v275;
  ScreenController::bindBool((int)v1, &v700, (int)&v698, (int)&v696);
  if ( (_DWORD)v697 )
    ((void (*)(void))v697)();
  if ( (_DWORD)v699 )
    ((void (*)(void))v699)();
  StringHash::StringHash<char [29]>(&v695, (int)"#multiplayer_warning_visible");
  v276 = operator new(4u);
  LODWORD(v277) = sub_1299C2E;
  *v276 = v1;
  HIDWORD(v277) = sub_1299C06;
  v693 = v276;
  v694 = v277;
  v691 = operator new(1u);
  LODWORD(v278) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v278) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v692 = v278;
  ScreenController::bindBool((int)v1, &v695, (int)&v693, (int)&v691);
  if ( (_DWORD)v692 )
    ((void (*)(void))v692)();
  if ( (_DWORD)v694 )
    ((void (*)(void))v694)();
  StringHash::StringHash<char [26]>(&v690, (int)"#multiplayer_warning_text");
  v279 = operator new(1u);
  LODWORD(v280) = sub_1299D30;
  v688 = v279;
  HIDWORD(v280) = sub_1299C64;
  v689 = v280;
  v686 = operator new(1u);
  LODWORD(v281) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v281) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v687 = v281;
  ScreenController::bindString((int)v1, &v690, (int)&v688, (int)&v686);
  if ( (_DWORD)v687 )
    ((void (*)(void))v687)();
  if ( (_DWORD)v689 )
    ((void (*)(void))v689)();
  sub_21E94B4((void **)&v685, "multiplayer_game");
  sub_21E94B4((void **)&v684, "#multiplayer_game");
  sub_21E94B4((void **)&v683, "#multiplayer_game_enabled");
  v282 = operator new(4u);
  LODWORD(v283) = sub_1299D66;
  *v282 = v1;
  HIDWORD(v283) = sub_1299D5E;
  v681 = v282;
  v682 = v283;
  v284 = operator new(4u);
  LODWORD(v285) = sub_1299DA8;
  *v284 = v1;
  HIDWORD(v285) = sub_1299D9C;
  v679 = v284;
  v680 = v285;
  v286 = operator new(4u);
  LODWORD(v287) = sub_1299DE6;
  *v286 = v1;
  HIDWORD(v287) = sub_1299DDE;
  v677 = v286;
  v678 = v287;
    (int **)&v685,
    (const char **)&v684,
    (const char **)&v683,
    (int)&v681,
    (int)&v679,
    (int)&v677);
  if ( (_DWORD)v678 )
    ((void (*)(void))v678)();
  if ( (_DWORD)v680 )
    ((void (*)(void))v680)();
  if ( (_DWORD)v682 )
    ((void (*)(void))v682)();
  v288 = (void *)(v683 - 12);
  if ( (int *)(v683 - 12) != &dword_28898C0 )
    v602 = (unsigned int *)(v683 - 4);
        v603 = __ldrex(v602);
      while ( __strex(v603 - 1, v602) );
      v603 = (*v602)--;
    if ( v603 <= 0 )
      j_j_j_j__ZdlPv_9(v288);
  v289 = (void *)(v684 - 12);
  if ( (int *)(v684 - 12) != &dword_28898C0 )
    v604 = (unsigned int *)(v684 - 4);
        v605 = __ldrex(v604);
      while ( __strex(v605 - 1, v604) );
      v605 = (*v604)--;
    if ( v605 <= 0 )
      j_j_j_j__ZdlPv_9(v289);
  v290 = (void *)(v685 - 12);
  if ( (int *)(v685 - 12) != &dword_28898C0 )
    v606 = (unsigned int *)(v685 - 4);
        v607 = __ldrex(v606);
      while ( __strex(v607 - 1, v606) );
      v607 = (*v606)--;
    if ( v607 <= 0 )
      j_j_j_j__ZdlPv_9(v290);
  sub_21E94B4((void **)&v676, "server_visible");
  sub_21E94B4((void **)&v675, "#server_visible");
  sub_21E94B4((void **)&v674, "#server_visibility_enabled");
  v291 = operator new(4u);
  LODWORD(v292) = sub_1299E24;
  *v291 = v1;
  HIDWORD(v292) = sub_1299E1C;
  v672 = v291;
  v673 = v292;
  v293 = operator new(4u);
  LODWORD(v294) = sub_1299E66;
  *v293 = v1;
  HIDWORD(v294) = sub_1299E5A;
  v670 = v293;
  v671 = v294;
  v295 = operator new(4u);
  LODWORD(v296) = sub_1299EA4;
  *v295 = v1;
  HIDWORD(v296) = sub_1299E9C;
  v668 = v295;
  v669 = v296;
    (int **)&v676,
    (const char **)&v675,
    (const char **)&v674,
    (int)&v672,
    (int)&v670,
    (int)&v668);
  if ( (_DWORD)v669 )
    ((void (*)(void))v669)();
  if ( (_DWORD)v671 )
    ((void (*)(void))v671)();
  if ( (_DWORD)v673 )
    ((void (*)(void))v673)();
  v297 = (void *)(v674 - 12);
  if ( (int *)(v674 - 12) != &dword_28898C0 )
    v608 = (unsigned int *)(v674 - 4);
        v609 = __ldrex(v608);
      while ( __strex(v609 - 1, v608) );
      v609 = (*v608)--;
    if ( v609 <= 0 )
      j_j_j_j__ZdlPv_9(v297);
  v298 = (void *)(v675 - 12);
  if ( (int *)(v675 - 12) != &dword_28898C0 )
    v610 = (unsigned int *)(v675 - 4);
        v611 = __ldrex(v610);
      while ( __strex(v611 - 1, v610) );
      v611 = (*v610)--;
    if ( v611 <= 0 )
      j_j_j_j__ZdlPv_9(v298);
  v299 = (void *)(v676 - 12);
  if ( (int *)(v676 - 12) != &dword_28898C0 )
    v612 = (unsigned int *)(v676 - 4);
        v613 = __ldrex(v612);
      while ( __strex(v613 - 1, v612) );
      v613 = (*v612)--;
    if ( v613 <= 0 )
      j_j_j_j__ZdlPv_9(v299);
  StringHash::StringHash<char [23]>(&v667, (int)"#can_be_server_visible");
  v300 = operator new(4u);
  LODWORD(v301) = sub_1299EE6;
  *v300 = v1;
  HIDWORD(v301) = sub_1299EDA;
  v665 = v300;
  v666 = v301;
  v663 = operator new(1u);
  LODWORD(v302) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v302) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v664 = v302;
  ScreenController::bindBool((int)v1, &v667, (int)&v665, (int)&v663);
  if ( (_DWORD)v664 )
    ((void (*)(void))v664)();
  if ( (_DWORD)v666 )
    ((void (*)(void))v666)();
  sub_21E94B4((void **)&v652, "#xbl_broadcast_invite_only");
  v653 = 1;
  sub_21E94B4((void **)&v654, "#xbl_broadcast_friends_only");
  v655 = 2;
  sub_21E94B4((void **)&v656, "#xbl_broadcast_friends_of_friends");
  v657 = 3;
  LODWORD(v303) = &v658;
    v303,
    (int **)&v658,
  v304 = (void *)(v656 - 12);
  if ( (int *)(v656 - 12) != &dword_28898C0 )
    v614 = (unsigned int *)(v656 - 4);
        v615 = __ldrex(v614);
      while ( __strex(v615 - 1, v614) );
      v615 = (*v614)--;
    if ( v615 <= 0 )
      j_j_j_j__ZdlPv_9(v304);
  v305 = (void *)(v654 - 12);
  if ( (int *)(v654 - 12) != &dword_28898C0 )
    v616 = (unsigned int *)(v654 - 4);
        v617 = __ldrex(v616);
      while ( __strex(v617 - 1, v616) );
      v617 = (*v616)--;
    if ( v617 <= 0 )
      j_j_j_j__ZdlPv_9(v305);
  v306 = (void *)(v652 - 12);
  if ( (int *)(v652 - 12) != &dword_28898C0 )
    v618 = (unsigned int *)(v652 - 4);
        v619 = __ldrex(v618);
      while ( __strex(v619 - 1, v618) );
      v619 = (*v618)--;
    if ( v619 <= 0 )
      j_j_j_j__ZdlPv_9(v306);
  v641 = 1;
  sub_21E94B4((void **)&v642, "options.xboxliveBroadcast.inviteOnly");
  v643 = 2;
  sub_21E94B4((void **)&v644, "options.xboxliveBroadcast.friendsOnly");
  v645 = 3;
  sub_21E94B4((void **)&v646, "options.xboxliveBroadcast.friendsOfFriends");
  LODWORD(v307) = &ptr;
    v307,
    (unsigned int *)&ptr,
  v308 = (void *)(v646 - 12);
  if ( (int *)(v646 - 12) != &dword_28898C0 )
    v620 = (unsigned int *)(v646 - 4);
        v621 = __ldrex(v620);
      while ( __strex(v621 - 1, v620) );
      v621 = (*v620)--;
    if ( v621 <= 0 )
      j_j_j_j__ZdlPv_9(v308);
  v309 = (void *)(v644 - 12);
  if ( (int *)(v644 - 12) != &dword_28898C0 )
    v622 = (unsigned int *)(v644 - 4);
        v623 = __ldrex(v622);
      while ( __strex(v623 - 1, v622) );
      v623 = (*v622)--;
    if ( v623 <= 0 )
      j_j_j_j__ZdlPv_9(v309);
  v310 = (void *)(v642 - 12);
  if ( (int *)(v642 - 12) != &dword_28898C0 )
    v624 = (unsigned int *)(v642 - 4);
        v625 = __ldrex(v624);
      while ( __strex(v625 - 1, v624) );
      v625 = (*v624)--;
    if ( v625 <= 0 )
      j_j_j_j__ZdlPv_9(v310);
  sub_21E94B4((void **)&v640, "xbl_broadcast_dropdown");
  sub_21E94B4((void **)&v639, "#xbl_broadcast_dropdown_toggle_label");
  sub_21E94B4((void **)&v638, "#show_broadcast_dropdown");
  v311 = operator new(4u);
  LODWORD(v312) = sub_1299F52;
  *v311 = v1;
  HIDWORD(v312) = sub_1299F1C;
  v636 = v311;
  v637 = v312;
  v313 = operator new(4u);
  LODWORD(v314) = sub_1299F94;
  *v313 = v1;
  HIDWORD(v314) = sub_1299F88;
  v634 = v313;
  v635 = v314;
  v315 = operator new(4u);
  LODWORD(v316) = sub_1299FD6;
  *v315 = v1;
  HIDWORD(v316) = sub_1299FCA;
  v632 = v315;
  v633 = v316;
    &v640,
    (const char **)&v639,
    (int)&v658,
    (int)&ptr,
    (const char **)&v638,
    (int)&v636,
    (int)&v634,
    (int)&v632);
  if ( (_DWORD)v633 )
    ((void (*)(void))v633)();
  if ( (_DWORD)v635 )
    ((void (*)(void))v635)();
  if ( (_DWORD)v637 )
    ((void (*)(void))v637)();
  v317 = (void *)(v638 - 12);
  if ( (int *)(v638 - 12) != &dword_28898C0 )
    v626 = (unsigned int *)(v638 - 4);
        v627 = __ldrex(v626);
      while ( __strex(v627 - 1, v626) );
      v627 = (*v626)--;
    if ( v627 <= 0 )
      j_j_j_j__ZdlPv_9(v317);
  v318 = (void *)(v639 - 12);
  if ( (int *)(v639 - 12) != &dword_28898C0 )
    v628 = (unsigned int *)(v639 - 4);
        v629 = __ldrex(v628);
      while ( __strex(v629 - 1, v628) );
      v629 = (*v628)--;
    if ( v629 <= 0 )
      j_j_j_j__ZdlPv_9(v318);
  v319 = (void *)(v640 - 12);
  if ( (int *)(v640 - 12) != &dword_28898C0 )
    v630 = (unsigned int *)(v640 - 4);
        v631 = __ldrex(v630);
      while ( __strex(v631 - 1, v630) );
      v631 = (*v630)--;
    if ( v631 <= 0 )
      j_j_j_j__ZdlPv_9(v319);
  v320 = v649;
  while ( v320 )
    v323 = (void *)v320;
    v324 = *(_DWORD *)(v320 + 8);
    v320 = *(_DWORD *)v320;
    v325 = (void *)(v324 - 12);
    if ( (int *)(v324 - 12) != &dword_28898C0 )
      v321 = (unsigned int *)(v324 - 4);
          v322 = __ldrex(v321);
        while ( __strex(v322 - 1, v321) );
      else
        v322 = (*v321)--;
      if ( v322 <= 0 )
        j_j_j_j__ZdlPv_9(v325);
    operator delete(v323);
  _aeabi_memclr4(ptr, 4 * v648);
  v649 = 0;
  v650 = 0;
  if ( ptr && &v651 != ptr )
    operator delete(ptr);
  v326 = v660;
  while ( v326 )
    v329 = v326;
    v330 = *v326 >> 32;
    v326 = (unsigned __int64 *)*v326;
    v331 = (void *)(v330 - 12);
    if ( (int *)(v330 - 12) != &dword_28898C0 )
      v327 = (unsigned int *)(v330 - 4);
          v328 = __ldrex(v327);
        while ( __strex(v328 - 1, v327) );
        v328 = (*v327)--;
      if ( v328 <= 0 )
        j_j_j_j__ZdlPv_9(v331);
    operator delete(v329);
  _aeabi_memclr4(v658, 4 * v659);
  v660 = 0;
  v661 = 0;
  if ( v658 && &v662 != v658 )
    operator delete(v658);
  v332 = v1028;
  while ( v332 )
    v335 = (void *)v332;
    v336 = *(_DWORD *)(v332 + 8);
    v332 = *(_DWORD *)v332;
    v337 = (void *)(v336 - 12);
    if ( (int *)(v336 - 12) != &dword_28898C0 )
      v333 = (unsigned int *)(v336 - 4);
          v334 = __ldrex(v333);
        while ( __strex(v334 - 1, v333) );
        v334 = (*v333)--;
      if ( v334 <= 0 )
        j_j_j_j__ZdlPv_9(v337);
    operator delete(v335);
  _aeabi_memclr4(v1026, 4 * v1027);
  v1029 = 0;
  v1028 = 0;
  if ( v1026 && &v1030 != v1026 )
    operator delete(v1026);
  v338 = v1058;
  while ( v338 )
    v341 = v338;
    v342 = *v338 >> 32;
    v338 = (unsigned __int64 *)*v338;
    v343 = (void *)(v342 - 12);
    if ( (int *)(v342 - 12) != &dword_28898C0 )
      v339 = (unsigned int *)(v342 - 4);
          v340 = __ldrex(v339);
        while ( __strex(v340 - 1, v339) );
        v340 = (*v339)--;
      if ( v340 <= 0 )
        j_j_j_j__ZdlPv_9(v343);
    operator delete(v341);
  _aeabi_memclr4(v1056, 4 * v1057);
  v1059 = 0;
  v1058 = 0;
  if ( v1056 && &v1060 != v1056 )
    operator delete(v1056);
  v344 = v1106;
  while ( v344 )
    v347 = v344;
    v348 = *v344 >> 32;
    v344 = (unsigned __int64 *)*v344;
    v349 = (void *)(v348 - 12);
    if ( (int *)(v348 - 12) != &dword_28898C0 )
      v345 = (unsigned int *)(v348 - 4);
          v346 = __ldrex(v345);
        while ( __strex(v346 - 1, v345) );
        v346 = (*v345)--;
      if ( v346 <= 0 )
        j_j_j_j__ZdlPv_9(v349);
    operator delete(v347);
  _aeabi_memclr4(v1104, 4 * v1105);
  v1107 = 0;
  v1106 = 0;
  if ( v1104 && &v1108 != v1104 )
    operator delete(v1104);
  v350 = v1129;
  while ( v350 )
    v353 = (void *)v350;
    v354 = *(_DWORD *)(v350 + 8);
    v350 = *(_DWORD *)v350;
    v355 = (void *)(v354 - 12);
    if ( (int *)(v354 - 12) != &dword_28898C0 )
      v351 = (unsigned int *)(v354 - 4);
          v352 = __ldrex(v351);
        while ( __strex(v352 - 1, v351) );
        v352 = (*v351)--;
      if ( v352 <= 0 )
        j_j_j_j__ZdlPv_9(v355);
    operator delete(v353);
  _aeabi_memclr4(v1127, 4 * v1128);
  v1130 = 0;
  v1129 = 0;
  if ( v1127 && &v1131 != v1127 )
    operator delete(v1127);
  v356 = v1140;
  while ( v356 )
    v359 = v356;
    v360 = *v356 >> 32;
    v356 = (unsigned __int64 *)*v356;
    v361 = (void *)(v360 - 12);
    if ( (int *)(v360 - 12) != &dword_28898C0 )
      v357 = (unsigned int *)(v360 - 4);
          v358 = __ldrex(v357);
        while ( __strex(v358 - 1, v357) );
        v358 = (*v357)--;
      if ( v358 <= 0 )
        j_j_j_j__ZdlPv_9(v361);
    operator delete(v359);
  _aeabi_memclr4(v1138, 4 * v1139);
  v1141 = 0;
  v1140 = 0;
  if ( v1138 && &v1142 != v1138 )
    operator delete(v1138);
  v362 = v1165;
  while ( v362 )
    v365 = v362;
    v366 = *v362 >> 32;
    v362 = (unsigned __int64 *)*v362;
    v367 = (void *)(v366 - 12);
    if ( (int *)(v366 - 12) != &dword_28898C0 )
      v363 = (unsigned int *)(v366 - 4);
          v364 = __ldrex(v363);
        while ( __strex(v364 - 1, v363) );
        v364 = (*v363)--;
      if ( v364 <= 0 )
        j_j_j_j__ZdlPv_9(v367);
    operator delete(v365);
  _aeabi_memclr4(v1163, 4 * v1164);
  v1166 = 0;
  v1165 = 0;
  if ( v1163 )
    if ( &v1167 != v1163 )
      operator delete(v1163);
}


LevelData *__fastcall WorldSettingsScreenController::onOpen(WorldSettingsScreenController *this, int a2, __int64 a3)
{
  WorldSettingsScreenController *v3; // r4@1
  LevelData *result; // r0@1
  signed int v5; // r0@2
  int v6; // r1@2
  int v7; // r5@2
  LevelData *v8; // r0@3
  int v9; // [sp+0h] [bp-2F0h]@3
  char v10; // [sp+170h] [bp-180h]@4

  v3 = this;
  ScreenController::onOpen(this, a2, a3);
  result = (LevelData *)*((_BYTE *)v3 + 992);
  if ( *((_BYTE *)v3 + 992) )
  {
    *((_BYTE *)v3 + 992) = 0;
    v5 = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v3 + 106));
    v6 = *((_DWORD *)v3 + 106);
    v7 = (int)v3 + 592;
    if ( v5 )
    {
      MinecraftScreenModel::getLevelData((int)&v9, v6);
      LevelData::operator=(v7, (int)&v9);
      v8 = (LevelData *)&v9;
    }
    else
      MinecraftScreenModel::getLevelData((MinecraftScreenModel *)&v10, v6);
      LevelData::operator=(v7, (int)&v10);
      v8 = (LevelData *)&v10;
    result = LevelData::~LevelData(v8);
  }
  return result;
}


void __fastcall WorldSettingsScreenController::_saveWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController::_saveWorld(this);
}


int __fastcall WorldSettingsScreenController::_isServerVisibilityEnabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@6
  int v3; // r0@10
  Option *v4; // r0@10

  v1 = this;
  if ( LevelData::hasLockedBehaviorPack(*((LevelData **)this + 243))
    || LevelData::hasLockedResourcePack(*((LevelData **)v1 + 243))
    || LevelData::isFromLockedTemplate(*((LevelData **)v1 + 243))
    || MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106))
    || MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v1 + 106)) )
  {
    result = 0;
  }
  else if ( *((_DWORD *)v1 + 129) && LevelData::isMultiplayerGame((WorldSettingsScreenController *)((char *)v1 + 592)) )
    result = 1;
  else
    v3 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
    v4 = (Option *)Options::get(v3, 4);
    result = Option::canModify(v4);
  return result;
}


int __fastcall WorldSettingsScreenController::_isGameRuleEnabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@3
  MinecraftScreenModel **v3; // r5@4
  int v4; // r0@6
  int v5; // r0@12
  int v6; // r4@13

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    if ( LevelData::hasCommandsEnabled((WorldSettingsScreenController *)((char *)this + 592)) != 1 )
      return 0;
    v3 = (MinecraftScreenModel **)((char *)v1 + 424);
  }
  else
    v3 = (MinecraftScreenModel **)((char *)this + 424);
    if ( !MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    {
      v4 = MinecraftScreenModel::getClientModel(*v3);
      if ( (*(int (**)(void))(*(_DWORD *)v4 + 8))() != 1 )
        return 0;
    }
  if ( MinecraftScreenModel::isTrial(*v3) )
    result = 0;
    v6 = 1;
    if ( !MinecraftScreenModel::isPreGame(*v3) && MinecraftScreenModel::isMultiPlayerClient(*v3) == 1 )
      v5 = MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v1 + 95));
      if ( Abilities::getBool(v5, &Abilities::OPERATOR) != 1 )
        v6 = 0;
    result = (MinecraftScreenModel::isTrial(*v3) ^ 1) & v6;
  return result;
}


int *__fastcall WorldSettingsScreenController::_setWorldName(int *result, int *a2)
{
  if ( result[129] )
    result = j_j_j__ZN9LevelData12setLevelNameERKSs_0((int)(result + 148), a2);
  return result;
}


void __fastcall WorldSettingsScreenController::_registerControllerCallbacks(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController::_registerControllerCallbacks(this);
}


void __fastcall WorldSettingsScreenController::_init(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController::_init(this);
}


signed int __fastcall WorldSettingsScreenController::_isPlayerGameModeEnabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  signed int result; // r0@5
  int v3; // r0@8
  unsigned int v4; // r1@9

  v1 = this;
  if ( MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)this + 106))
    || MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) )
  {
    return 0;
  }
  if ( *((_DWORD *)v1 + 129) )
    if ( !LevelData::hasCommandsEnabled((WorldSettingsScreenController *)((char *)v1 + 592)) )
      return 0;
    goto LABEL_9;
  if ( !MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) )
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    if ( (*(int (**)(void))(*(_DWORD *)v3 + 8))() != 1 )
LABEL_9:
  v4 = MinecraftScreenModel::getPlayerPermissionLevel(*((MinecraftScreenModel **)v1 + 106));
  result = 0;
  if ( v4 > 1 )
    result = 1;
  return result;
}


void __fastcall WorldSettingsScreenController::_setGameRule(int a1, int a2, int **a3)
{
  WorldSettingsScreenController::_setGameRule(a1, a2, a3);
}


int __fastcall WorldSettingsScreenController::_getDefaultPermissionLevel(WorldSettingsScreenController *this)
{
  char *v1; // r0@1

  v1 = LevelData::getDefaultAbilities((WorldSettingsScreenController *)((char *)this + 592));
  return Abilities::getPlayerPermissions((Abilities *)v1);
}


int __fastcall WorldSettingsScreenController::_setDefaultPermissionLevel(WorldSettingsScreenController *this, int a2)
{
  WorldSettingsScreenController *v2; // r4@1
  unsigned __int8 v3; // r5@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  _BYTE *v7; // r0@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r2@10
  __int64 v10; // r1@12
  int *v11; // r7@12
  unsigned int v12; // r0@16
  signed int v13; // r0@22
  int v14; // r0@23
  bool v15; // zf@24
  int result; // r0@34
  unsigned int *v17; // r2@35
  unsigned int v18; // r1@37
  char v19; // [sp+4h] [bp-3Ch]@29
  void (*v20)(void); // [sp+Ch] [bp-34h]@28
  int v21; // [sp+10h] [bp-30h]@29
  _BYTE *v22; // [sp+14h] [bp-2Ch]@12
  void (*v23)(void); // [sp+1Ch] [bp-24h]@7
  WorldSettingsScreenController *(__fastcall *v24)(int, int); // [sp+20h] [bp-20h]@12
  char v25; // [sp+24h] [bp-1Ch]@1
  int v26; // [sp+28h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<WorldSettingsScreenController>((int)&v25, (int)this);
  v4 = *(_QWORD *)&v25;
  if ( v26 )
  {
    v5 = (unsigned int *)(v26 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v23 = 0;
  v7 = operator new(0xCu);
  *(_QWORD *)v7 = v4;
  if ( HIDWORD(v4) )
    v8 = (unsigned int *)(HIDWORD(v4) + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
    v7[8] = v3;
    v22 = v7;
    v23 = (void (*)(void))sub_129A558;
    v24 = sub_129A408;
    v11 = (int *)&v24;
        v12 = __ldrex(v8);
      while ( __strex(v12 - 1, v8) );
      v12 = (*v8)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  else
    HIDWORD(v10) = sub_129A408;
    LODWORD(v10) = sub_129A558;
    *(_QWORD *)&v23 = v10;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v2 + 106)) == 1 )
    v13 = LevelData::achievementsWillBeDisabledOnLoad((WorldSettingsScreenController *)((char *)v2 + 592));
    v14 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v2 + 106));
    v13 = (*(int (**)(void))(*(_DWORD *)v14 + 16))();
  v15 = v3 == 2;
  if ( v3 == 2 )
    v15 = (v13 ^ 1) == 1;
  if ( v15 )
    v20 = 0;
    if ( v23 )
      ((void (__fastcall *)(char *, _BYTE **, signed int))v23)(&v19, &v22, 2);
      v21 = *v11;
      v20 = v23;
    SettingsScreenControllerBase::confirmationNoAchievementsDialog((int)v2, (int)&v19);
    if ( v20 )
      v20();
    WorldSettingsScreenController::_setDefaultPermissionLevelHelper(v2, v3);
  if ( v23 )
    v23();
  result = v26;
    v17 = (unsigned int *)(v26 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


signed int __fastcall WorldSettingsScreenController::_isStartWithMapEnabled(WorldSettingsScreenController *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 129) - 1;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


void __fastcall WorldSettingsScreenController::_saveWorld(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int *v2; // r0@2
  const void **v3; // r7@2
  size_t v4; // r2@2
  int *v5; // r0@6
  void *v6; // r0@6
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  char *v9; // r0@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  int v12; // [sp+4h] [bp-2Ch]@6
  void *s1; // [sp+8h] [bp-28h]@2

  v1 = this;
  if ( (*((_DWORD *)this + 129) & 0xFFFFFFFE) == 2 )
  {
    v2 = (int *)LevelData::getLevelName((WorldSettingsScreenController *)((char *)this + 592));
    Util::stringTrim((int *)&s1, v2);
    LevelData::setLevelName((int)v1 + 592, (int *)&s1);
    v3 = (const void **)((char *)v1 + 532);
    v4 = *((_DWORD *)s1 - 3);
    if ( v4 )
    {
      if ( v4 != *((_DWORD *)*v3 - 3) || memcmp(s1, *v3, v4) )
      {
        if ( MinecraftScreenModel::renameLevel(*((_DWORD *)v1 + 106)) == 1 )
        {
          v5 = (int *)LevelData::getLevelName((WorldSettingsScreenController *)((char *)v1 + 592));
          sub_21E8AF4(&v12, v5);
          EntityInteraction::setInteractText((int *)v1 + 133, &v12);
          v6 = (void *)(v12 - 12);
          if ( (int *)(v12 - 12) != &dword_28898C0 )
          {
            v7 = (unsigned int *)(v12 - 4);
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
              j_j_j_j__ZdlPv_9(v6);
          }
        }
        else
          LevelData::setLevelName((int)v1 + 592, (int *)v1 + 133);
      }
    }
    else
      LevelData::setLevelName((int)v1 + 592, (int *)v1 + 133);
    MinecraftScreenModel::saveLevelData(
      *((_DWORD *)v1 + 106),
      (int)v1 + 528,
      (WorldSettingsScreenController *)((char *)v1 + 592));
    v9 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)((char *)s1 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  }
}


signed int __fastcall WorldSettingsScreenController::_achievementsWillBeDisabledOnLoad(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  signed int result; // r0@2
  int v3; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    result = LevelData::achievementsWillBeDisabledOnLoad((WorldSettingsScreenController *)((char *)v1 + 592));
  }
  else
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 16))();
  return result;
}


int __fastcall WorldSettingsScreenController::_getWorldType(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r0@5

  v1 = this;
  if ( *((_DWORD *)this + 129) )
  {
    result = j_j_j__ZNK9LevelData12getGeneratorEv_1((WorldSettingsScreenController *)((char *)this + 592));
  }
  else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) )
    result = 5;
  else
    v3 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v1 + 106));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 40))();
  return result;
}


int __fastcall WorldSettingsScreenController::_isMultiplayerEnabled(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int result; // r0@6
  int v3; // r0@9
  Option *v4; // r0@9

  v1 = this;
  if ( LevelData::hasLockedBehaviorPack(*((LevelData **)this + 243))
    || LevelData::hasLockedResourcePack(*((LevelData **)v1 + 243))
    || LevelData::isFromLockedTemplate(*((LevelData **)v1 + 243))
    || MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106))
    || MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v1 + 106)) )
  {
    result = 0;
  }
  else if ( *((_DWORD *)v1 + 129) )
    result = 1;
  else
    v3 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
    v4 = (Option *)Options::get(v3, 140);
    result = Option::canModify(v4);
  return result;
}


int __fastcall WorldSettingsScreenController::_canChangeAllowCheats(WorldSettingsScreenController *this)
{
  WorldSettingsScreenController *v1; // r4@1
  int v2; // r0@3
  int v3; // r5@4

  v1 = this;
  v3 = 1;
  if ( !MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106))
    && MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v1 + 106)) == 1 )
  {
    v2 = MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v1 + 95));
    if ( Abilities::getBool(v2, &Abilities::OPERATOR) != 1 )
      v3 = 0;
  }
  return (MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106)) ^ 1) & v3;
}
