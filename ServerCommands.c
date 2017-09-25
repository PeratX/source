

void __fastcall ServerCommands::setupStandardServer(Minecraft *a1)
{
  Minecraft *v1; // r5@1
  MinecraftCommands *v2; // r0@1
  ClearCommand *v3; // r6@1
  GameRuleCommand *v4; // r7@1
  Minecraft *v5; // r1@1
  CommandRegistry *v6; // r1@1
  CommandRegistry *v7; // r1@1
  CommandRegistry *v8; // r1@1
  CommandRegistry *v9; // r1@1
  CommandRegistry *v10; // r1@1
  CommandRegistry *v11; // r1@1
  CommandRegistry *v12; // r1@1
  CommandRegistry *v13; // r1@1
  CommandRegistry *v14; // r1@1
  CommandRegistry *v15; // r1@1
  CommandRegistry *v16; // r2@1
  CommandRegistry *v17; // r1@1
  CommandRegistry *v18; // r1@1
  CommandRegistry *v19; // r1@1
  CommandRegistry *v20; // r1@1
  CommandRegistry *v21; // r1@1
  CommandRegistry *v22; // r1@1
  CommandRegistry *v23; // r1@1
  CommandRegistry *v24; // r1@1
  CommandRegistry *v25; // r1@1
  CommandRegistry *v26; // r1@1
  CommandRegistry *v27; // r1@1
  CommandRegistry *v28; // r1@1
  CommandRegistry *v29; // r1@1
  CommandRegistry *v30; // r1@1
  CommandRegistry *v31; // r1@1
  CommandRegistry *v32; // r1@1
  CommandRegistry *v33; // r1@1
  CommandRegistry *v34; // r1@1
  CommandRegistry *v35; // r1@1
  CommandRegistry *v36; // r1@1
  CommandRegistry *v37; // r1@1
  CommandRegistry *v38; // r1@1
  CommandRegistry *v39; // r1@1
  CommandRegistry *v40; // r1@1
  CommandRegistry *v41; // r1@1
  CommandRegistry *v42; // r1@1
  CommandRegistry *v43; // r1@1
  CommandRegistry *v44; // r1@1
  CommandRegistry *v45; // r1@1
  CommandRegistry *v46; // r1@1

  v1 = a1;
  v2 = (MinecraftCommands *)j_Minecraft::getCommands(a1);
  v3 = (ClearCommand *)j_MinecraftCommands::getRegistry(v2);
  v4 = (GameRuleCommand *)j_Minecraft::getLevel(v1);
  j_ServerCommand::setup(v1, v5);
  j_ClearCommand::setup(v3, v6);
  j_CloneCommand::setup(v3, v7);
  j_DayLockCommand::setup(v3, v8);
  j_DeOpCommand::setup(v3, v9);
  j_DifficultyCommand::setup(v3, v10);
  j_EffectCommand::setup(v3, v11);
  j_EnchantCommand::setup(v3, v12);
  j_ExecuteCommand::setup(v3, v13);
  j_FillCommand::setup(v3, v14);
  j_GameModeCommand::setup(v3, v15);
  j_GameRuleCommand::setup(v4, v3, v16);
  j_GiveCommand::setup(v3, v17);
  j_HelpCommand::setup(v3, v18);
  j_KillCommand::setup(v3, v19);
  j_ListCommand::setup(v3, v20);
  j_ListDCommand::setup(v3, v21);
  j_LocateCommand::setup(v3, v22);
  j_MeCommand::setup(v3, v23);
  j_OpCommand::setup(v3, v24);
  j_PlaySoundCommand::setup(v3, v25);
  j_ReplaceItemCommand::setup(v3, v26);
  j_SayCommand::setup(v3, v27);
  j_SetBlockCommand::setup(v3, v28);
  j_SetMaxPlayersCommand::setup(v3, v29);
  j_SetWorldSpawnCommand::setup(v3, v30);
  j_SpawnPointCommand::setup(v3, v31);
  j_SpreadPlayersCommand::setup(v3, v32);
  j_StopSoundCommand::setup(v3, v33);
  j_SummonCommand::setup(v3, v34);
  j_TeleportCommand::setup(v3, v35);
  j_TellCommand::setup(v3, v36);
  j_TestForBlockCommand::setup(v3, v37);
  j_TestForBlocksCommand::setup(v3, v38);
  j_TestForCommand::setup(v3, v39);
  j_TickingAreaCommand::setup(v3, v40);
  j_TimeCommand::setup(v3, v41);
  j_TitleCommand::setup(v3, v42);
  j_ToggleDownfallCommand::setup(v3, v43);
  j_WeatherCommand::setup(v3, v44);
  j_WSServerCommand::setup(v3, v45);
  j_XPCommand::setup(v3, v46);
  j_AgentServerCommands::setupStandardServer(v1);
  j_j_j__ZN15CommandRegistry5readyEv_0(v3);
}


void __fastcall ServerCommands::setupStandardServer(Minecraft *a1)
{
  ServerCommands::setupStandardServer(a1);
}
