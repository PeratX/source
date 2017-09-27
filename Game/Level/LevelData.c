

int __fastcall LevelData::setSpawnMobs(int result, bool a2)
{
  *(_BYTE *)(result + 269) = a2;
  return result;
}


  if ( LevelData::hasLockedBehaviorPack(*(LevelData **)(v1 + 972))
{
  {
    result = 1;
  }
  else
    result = LevelData::isFromLockedTemplate(*(LevelData **)(v1 + 972));
  return result;
}


void __fastcall LevelData::createTag(LevelData *this, LevelData *a2)
{
  LevelData::createTag(this, a2);
}


int __fastcall LevelData::setHasLockedResourcePack(int result, int a2)
{
  *(_BYTE *)(result + 352) = a2;
  if ( a2 )
  {
    *(_WORD *)(result + 338) = 0;
    *(_BYTE *)(result + 340) = 0;
    *(_BYTE *)(result + 348) = 0;
  }
  return result;
}


    if ( LevelData::isGameRule(v1 + 592, (int **)&GameRules::FALL_DAMAGE) )
{
  }
  else if ( !MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    if ( (*(int (**)(void))(*(_DWORD *)v3 + 52))() )
      return 1;
  if ( *(_DWORD *)(v1 + 516) )
    if ( LevelData::isGameRule(v1 + 592, (int **)&GameRules::FIRE_DAMAGE) )
    goto LABEL_14;
  if ( !MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
    v4 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    if ( (*(int (**)(void))(*(_DWORD *)v4 + 52))() )
LABEL_14:
    result = LevelData::isGameRule(v1 + 592, (int **)&GameRules::DROWNING_DAMAGE);
  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
    result = 0;
  else
    v5 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v5 + 52))();
  return result;
}


char *__fastcall LevelData::getDefaultAbilities(LevelData *this)
{
  return (char *)this + 36;
}


int __fastcall LevelData::setBonusChestEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 360) = a2;
  return result;
}


int __fastcall LevelData::isAlwaysDay(LevelData *this)
{
  int result; // r0@2

  if ( *((_DWORD *)this + 39) == 5000 )
    result = j_GameRules::getBool((unsigned __int64 *)this + 1, (int **)&GameRules::DO_DAYLIGHT_CYCLE) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall LevelData::setLightningTime(int result, int a2)
{
  *(_DWORD *)(result + 236) = a2;
  return result;
}


int __fastcall LevelData::setPlatformBroadcast(int result, bool a2)
{
  *(_BYTE *)(result + 348) = a2;
  return result;
}


int __fastcall LevelData::LevelData(double a1)
{
  int v1; // r11@1
  int v2; // r6@1

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = 0;
  *(_BYTE *)(LODWORD(a1) + 4) = 1;
  LODWORD(a1) += 8;
  v2 = HIDWORD(a1);
  j_GameRules::GameRules(a1);
  j_Abilities::Abilities(v1 + 36);
  *(_DWORD *)(v1 + 108) = &unk_28898CC;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  *(_DWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 140) = 0;
  *(_DWORD *)(v1 + 144) = 0;
  *(_DWORD *)(v1 + 148) = 0;
  *(_DWORD *)(v1 + 152) = 0;
  j_CompoundTag::CompoundTag(v1 + 164);
  j_CompoundTag::CompoundTag(v1 + 192);
  *(_DWORD *)(v1 + 220) = 0;
  *(_DWORD *)(v1 + 240) = 8;
  j_GameVersion::GameVersion(v1 + 244);
  *(_DWORD *)(v1 + 276) = &unk_28898CC;
  *(_DWORD *)(v1 + 280) = 0;
  *(_DWORD *)(v1 + 284) = 0;
  *(_DWORD *)(v1 + 288) = 0;
  j_Json::Value::Value((_DWORD *)(v1 + 304), 0);
  *(_DWORD *)(v1 + 320) = 0;
  *(_BYTE *)(v1 + 328) = 0;
  *(_DWORD *)(v1 + 356) = &unk_28898CC;
  j_LevelData::operator=(v1, v2);
  return v1;
}


int __fastcall LevelData::setIsEduLevel(int result, bool a2)
{
  *(_BYTE *)(result + 337) = a2;
  return result;
}


char *__fastcall LevelData::getGameRules(LevelData *this)
{
  return (char *)this + 8;
}


int __fastcall LevelData::LevelData(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r7@1
  int result; // r0@1

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = 0;
  *(_BYTE *)(LODWORD(a1) + 4) = 1;
  LODWORD(a1) += 8;
  j_GameRules::GameRules(a1);
  j_Abilities::Abilities(v1 + 36);
  sub_21E94B4((void **)(v1 + 108), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 112) = 6;
  *(_DWORD *)(v1 + 116) = 137;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_QWORD *)(v1 + 128) = 0x8000000000LL;
  *(_DWORD *)(v1 + 136) = 64;
  *(_DWORD *)(v1 + 140) = 128;
  *(_DWORD *)(v1 + 144) = BlockPos::MIN;
  *(_DWORD *)(v1 + 148) = dword_2816254;
  *(_DWORD *)(v1 + 152) = dword_2816258;
  *(_DWORD *)(v1 + 156) = 0;
  *(_DWORD *)(v1 + 160) = 0;
  j_CompoundTag::CompoundTag(v1 + 164);
  j_CompoundTag::CompoundTag(v1 + 192);
  LODWORD(v2) = j_operator new(0x8Cu);
  v3 = LODWORD(v2);
  FixedInventoryContainer::FixedInventoryContainer(v2, 0);
  *(_DWORD *)(v1 + 220) = v3;
  *(_DWORD *)(v1 + 224) = 0;
  *(_DWORD *)(v1 + 228) = 0;
  *(_DWORD *)(v1 + 232) = 0;
  *(_DWORD *)(v1 + 236) = 0;
  *(_DWORD *)(v1 + 240) = 8;
  GameVersion::current((GameVersion *)(v1 + 244));
  *(_DWORD *)(v1 + 260) = 0;
  *(_DWORD *)(v1 + 264) = 2;
  *(_BYTE *)(v1 + 268) = 0;
  *(_BYTE *)(v1 + 269) = 1;
  *(_DWORD *)(v1 + 272) = 1;
  sub_21E8AF4((int *)(v1 + 276), (int *)&FlatWorldGenerator::DEFAULT_LAYERS);
  *(_DWORD *)(v1 + 280) = 0;
  *(_DWORD *)(v1 + 284) = 0;
  *(_DWORD *)(v1 + 288) = 0;
  j_Json::Value::Value((_DWORD *)(v1 + 304), 0);
  *(_DWORD *)(v1 + 320) = 0;
  *(_BYTE *)(v1 + 328) = 0;
  *(_DWORD *)(v1 + 332) = -1;
  *(_BYTE *)(v1 + 336) = 0;
  *(_BYTE *)(v1 + 337) = 0;
  *(_BYTE *)(v1 + 338) = 1;
  *(_BYTE *)(v1 + 339) = 1;
  *(_BYTE *)(v1 + 340) = 1;
  *(_DWORD *)(v1 + 344) = 3;
  *(_BYTE *)(v1 + 348) = 1;
  *(_BYTE *)(v1 + 353) = 0;
  *(_DWORD *)(v1 + 349) = 0;
  *(_DWORD *)(v1 + 356) = &unk_28898CC;
  result = v1;
  *(_WORD *)(v1 + 360) = 0;
  *(_BYTE *)(v1 + 362) = 0;
  return result;
}


int __fastcall LevelData::setRainLevel(int result, float a2)
{
  *(float *)(result + 224) = a2;
  return result;
}


int __fastcall LevelData::setMultiplayerGame(int result, bool a2)
{
  *(_BYTE *)(result + 338) = a2;
  return result;
}


int __fastcall LevelData::setLightningLevel(int result, float a2)
{
  *(float *)(result + 232) = a2;
  return result;
}


int __fastcall LevelData::setForceGameType(int result, bool a2)
{
  *(_BYTE *)(result + 268) = a2;
  return result;
}


char *__fastcall LevelData::getCurrentTick(LevelData *this)
{
  return (char *)this + 120;
}


  if ( LevelData::isMultiplayerGame((LevelData *)(v1 + 592))
{
  {
    WorldSettingsScreenController::_createWorld((WorldSettingsScreenController *)v1);
    result = 0;
  }
  else
    WorldSettingsScreenController::_handleInvalidMultiplayerSkin((WorldSettingsScreenController *)v1);
  return result;
}


  if ( LevelData::isMultiplayerGame((LevelData *)(v1 + 592))
{
  {
    WorldSettingsScreenController::_playWorld((WorldSettingsScreenController *)v1);
    result = 0;
  }
  else
    MainMenuScreenController::showInvalidMultiplayerSkinModal((MainMenuScreenController *)v1);
  return result;
}


int __fastcall LevelData::setXBLBroadcast(int result, bool a2)
{
  *(_BYTE *)(result + 340) = a2;
  return result;
}


  if ( LevelData::hasCommandsEnabled((LevelData *)&v4) == 1 )
{
  else
    v2 = 0;
  LevelData::~LevelData((LevelData *)&v4);
  return v2;
}


void __fastcall LevelData::createTag(LevelData *this, LevelData *a2)
{
  LevelData *v2; // r4@1
  LevelData *v3; // r6@1
  CompoundTag *v4; // r5@1

  v2 = this;
  v3 = a2;
  v4 = (CompoundTag *)j_operator new(0x1Cu);
  j_CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  LevelData::setTagData(v3, v4);
}


char *__fastcall LevelData::getLevelName(LevelData *this)
{
  return (char *)this + 108;
}


int __fastcall LevelData::setGenerator(int result, int a2)
{
  *(_DWORD *)(result + 272) = a2;
  return result;
}


char *__fastcall LevelData::getPremiumTemplatePackId(LevelData *this)
{
  return (char *)this + 356;
}


int __fastcall LevelData::recordStartUp(int result)
{
  --*(_DWORD *)(result + 332);
  return result;
}


char *__fastcall LevelData::getDefaultAbilities(LevelData *this)
{
  return (char *)this + 36;
}


char *__fastcall LevelData::getLoadedFixedInventory(LevelData *this)
{
  return (char *)this + 192;
}


int __fastcall LevelData::setFromLockedTemplate(int result, int a2)
{
  *(_BYTE *)(result + 353) = a2;
  if ( a2 )
  {
    *(_WORD *)(result + 338) = 0;
    *(_BYTE *)(result + 340) = 0;
    *(_BYTE *)(result + 348) = 0;
  }
  return result;
}


int __fastcall LevelData::setTexturepacksRequired(int result, bool a2)
{
  *(_BYTE *)(result + 350) = a2;
  return result;
}


int __fastcall LevelData::setRainTime(int result, int a2)
{
  *(_DWORD *)(result + 228) = a2;
  return result;
}


int __fastcall LevelData::setGameType(int result, int a2)
{
  *(_DWORD *)(result + 260) = a2;
  return result;
}


int __fastcall LevelData::setXBLBroadcastMode(int result, int a2)
{
  *(_DWORD *)(result + 344) = a2;
  return result;
}


void __fastcall LevelData::getTagData(LevelData *this, const CompoundTag *a2)
{
  LevelData::getTagData(this, a2);
}


int __fastcall LevelData::setSeed(int result, unsigned int a2)
{
  *(_DWORD *)(result + 128) = a2;
  return result;
}


int __fastcall LevelData::setHasLockedBehaviorPack(int result, int a2)
{
  *(_BYTE *)(result + 351) = a2;
  if ( a2 )
  {
    *(_WORD *)(result + 338) = 0;
    *(_BYTE *)(result + 340) = 0;
    *(_BYTE *)(result + 348) = 0;
  }
  return result;
}


int __fastcall LevelData::setGameDifficulty(int result, int a2)
{
  *(_DWORD *)(result + 264) = a2;
  return result;
}


void __fastcall LevelData::setTagData(LevelData *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  LevelData *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  int v12; // r0@9
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  void *v17; // r0@13
  void *v18; // r0@14
  void *v19; // r0@15
  int v20; // r6@17
  void *v21; // r0@19
  void *v22; // r0@20
  void *v23; // r0@21
  void *v24; // r0@22
  void *v25; // r0@23
  void *v26; // r0@24
  void *v27; // r0@25
  void *v28; // r0@26
  void *v29; // r0@27
  void *v30; // r0@28
  void *v31; // r0@29
  void *v32; // r0@30
  void *v33; // r0@31
  void *v34; // r0@32
  void *v35; // r0@33
  void *v36; // r0@34
  void *v37; // r0@35
  void *v38; // r0@36
  void *v39; // r0@37
  void *v40; // r0@38
  void *v41; // r0@39
  void *v42; // r0@40
  void *v43; // r0@41
  void *v44; // r0@42
  int v45; // r0@43
  void *v46; // r0@47
  void *v47; // r0@48
  void *v48; // r0@49
  void *v49; // r0@50
  void *v50; // r0@51
  void *v51; // r6@53
  int v52; // r0@53
  void *v53; // r0@57
  void *v54; // r0@60
  void *v55; // r0@61
  unsigned int *v56; // r2@63
  signed int v57; // r1@65
  unsigned int *v58; // r2@67
  signed int v59; // r1@69
  unsigned int *v60; // r2@71
  signed int v61; // r1@73
  unsigned int *v62; // r2@75
  signed int v63; // r1@77
  unsigned int *v64; // r2@79
  signed int v65; // r1@81
  unsigned int *v66; // r2@83
  signed int v67; // r1@85
  unsigned int *v68; // r2@87
  signed int v69; // r1@89
  unsigned int *v70; // r2@91
  signed int v71; // r1@93
  unsigned int *v72; // r2@95
  signed int v73; // r1@97
  unsigned int *v74; // r2@99
  signed int v75; // r1@101
  unsigned int *v76; // r2@103
  signed int v77; // r1@105
  unsigned int *v78; // r2@107
  signed int v79; // r1@109
  unsigned int *v80; // r2@111
  signed int v81; // r1@113
  unsigned int *v82; // r2@115
  signed int v83; // r1@117
  unsigned int *v84; // r2@119
  signed int v85; // r1@121
  unsigned int *v86; // r2@123
  signed int v87; // r1@125
  unsigned int *v88; // r2@127
  signed int v89; // r1@129
  unsigned int *v90; // r2@131
  signed int v91; // r1@133
  unsigned int *v92; // r2@135
  signed int v93; // r1@137
  unsigned int *v94; // r2@139
  signed int v95; // r1@141
  unsigned int *v96; // r2@143
  signed int v97; // r1@145
  unsigned int *v98; // r2@147
  signed int v99; // r1@149
  unsigned int *v100; // r2@151
  signed int v101; // r1@153
  unsigned int *v102; // r2@155
  signed int v103; // r1@157
  unsigned int *v104; // r2@159
  signed int v105; // r1@161
  unsigned int *v106; // r2@163
  signed int v107; // r1@165
  unsigned int *v108; // r2@167
  signed int v109; // r1@169
  unsigned int *v110; // r2@171
  signed int v111; // r1@173
  unsigned int *v112; // r2@175
  signed int v113; // r1@177
  unsigned int *v114; // r2@179
  signed int v115; // r1@181
  unsigned int *v116; // r2@183
  signed int v117; // r1@185
  unsigned int *v118; // r2@187
  signed int v119; // r1@189
  unsigned int *v120; // r2@191
  signed int v121; // r1@193
  unsigned int *v122; // r2@195
  signed int v123; // r1@197
  unsigned int *v124; // r2@199
  signed int v125; // r1@201
  unsigned int *v126; // r2@203
  signed int v127; // r1@205
  unsigned int *v128; // r2@207
  signed int v129; // r1@209
  unsigned int *v130; // r2@211
  signed int v131; // r1@213
  unsigned int *v132; // r2@215
  signed int v133; // r1@217
  unsigned int *v134; // r2@219
  signed int v135; // r1@221
  unsigned int *v136; // r2@223
  signed int v137; // r1@225
  unsigned int *v138; // r2@227
  signed int v139; // r1@229
  unsigned int *v140; // r2@231
  signed int v141; // r1@233
  unsigned int *v142; // r2@235
  signed int v143; // r1@237
  unsigned int *v144; // r2@239
  signed int v145; // r1@241
  unsigned int *v146; // r2@243
  signed int v147; // r1@245
  unsigned int *v148; // r2@247
  signed int v149; // r1@249
  int v150; // [sp+4h] [bp-19Ch]@61
  void *v151; // [sp+8h] [bp-198h]@58
  int v152; // [sp+10h] [bp-190h]@58
  int v153; // [sp+14h] [bp-18Ch]@53
  int v154; // [sp+18h] [bp-188h]@53
  int v155; // [sp+20h] [bp-180h]@53
  int v156; // [sp+28h] [bp-178h]@51
  int v157; // [sp+30h] [bp-170h]@50
  int v158; // [sp+38h] [bp-168h]@49
  int v159; // [sp+40h] [bp-160h]@48
  int v160; // [sp+44h] [bp-15Ch]@43
  int v161; // [sp+48h] [bp-158h]@43
  int v162; // [sp+50h] [bp-150h]@43
  int v163; // [sp+58h] [bp-148h]@42
  int v164; // [sp+60h] [bp-140h]@41
  int v165; // [sp+68h] [bp-138h]@40
  int v166; // [sp+70h] [bp-130h]@39
  int v167; // [sp+78h] [bp-128h]@38
  int v168; // [sp+80h] [bp-120h]@37
  int v169; // [sp+88h] [bp-118h]@36
  int v170; // [sp+90h] [bp-110h]@35
  int v171; // [sp+98h] [bp-108h]@34
  int v172; // [sp+A0h] [bp-100h]@33
  int v173; // [sp+A8h] [bp-F8h]@32
  int v174; // [sp+B0h] [bp-F0h]@31
  int v175; // [sp+B8h] [bp-E8h]@30
  int v176; // [sp+C0h] [bp-E0h]@29
  int v177; // [sp+C8h] [bp-D8h]@28
  int v178; // [sp+D0h] [bp-D0h]@27
  int v179; // [sp+D8h] [bp-C8h]@26
  int v180; // [sp+E0h] [bp-C0h]@25
  int v181; // [sp+E8h] [bp-B8h]@24
  int v182; // [sp+F0h] [bp-B0h]@23
  int v183; // [sp+F8h] [bp-A8h]@22
  int v184; // [sp+100h] [bp-A0h]@21
  int v185; // [sp+104h] [bp-9Ch]@19
  int v186; // [sp+10Ch] [bp-94h]@16
  int v187; // [sp+114h] [bp-8Ch]@15
  int v188; // [sp+11Ch] [bp-84h]@14
  int v189; // [sp+124h] [bp-7Ch]@13
  int v190; // [sp+12Ch] [bp-74h]@12
  int v191; // [sp+134h] [bp-6Ch]@11
  int v192; // [sp+13Ch] [bp-64h]@10
  int v193; // [sp+144h] [bp-5Ch]@9
  int v194; // [sp+14Ch] [bp-54h]@8
  int v195; // [sp+154h] [bp-4Ch]@7
  int v196; // [sp+15Ch] [bp-44h]@6
  int v197; // [sp+164h] [bp-3Ch]@5
  int v198; // [sp+16Ch] [bp-34h]@4
  int v199; // [sp+174h] [bp-2Ch]@3
  int v200; // [sp+17Ch] [bp-24h]@2
  int v201; // [sp+184h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v201, "RandomSeed");
  j_CompoundTag::putInt64((int)v2, (const void **)&v201, *((_DWORD *)v3 + 32), 0);
  v4 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
  {
    v56 = (unsigned int *)(v201 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v200, "GameType");
  j_CompoundTag::putInt((int)v2, (const void **)&v200, *((_DWORD *)v3 + 65));
  v5 = (void *)(v200 - 12);
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v200 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v199, "Difficulty");
  j_CompoundTag::putInt((int)v2, (const void **)&v199, *((_DWORD *)v3 + 66));
  v6 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v199 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v198, "ForceGameType");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v198, *((_BYTE *)v3 + 268));
  v7 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v198 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v197, "SpawnX");
  j_CompoundTag::putInt((int)v2, (const void **)&v197, *((_DWORD *)v3 + 33));
  v8 = (void *)(v197 - 12);
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v197 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v196, "SpawnY");
  j_CompoundTag::putInt((int)v2, (const void **)&v196, *((_DWORD *)v3 + 34));
  v9 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v196 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v195, "SpawnZ");
  j_CompoundTag::putInt((int)v2, (const void **)&v195, *((_DWORD *)v3 + 35));
  v10 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v195 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v194, "Time");
  j_CompoundTag::putInt64(
    (int)v2,
    (const void **)&v194,
    *((_DWORD *)v3 + 39),
    (unsigned __int64)*((_DWORD *)v3 + 39) >> 32);
  v11 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v194 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v193, "LastPlayed");
  v12 = getEpochTimeS();
  j_CompoundTag::putInt64((int)v2, (const void **)&v193, v12, v12 >> 31);
  v13 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v193 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v192, "LevelName");
  j_CompoundTag::putString((int)v2, (const void **)&v192, (int *)v3 + 27);
  v14 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v192 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v191, "StorageVersion");
  j_CompoundTag::putInt((int)v2, (const void **)&v191, *((_DWORD *)v3 + 28));
  v15 = (void *)(v191 - 12);
  if ( (int *)(v191 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v191 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v190, "NetworkVersion");
  j_CompoundTag::putInt((int)v2, (const void **)&v190, *((_DWORD *)v3 + 29));
  v16 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v190 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v189, "Platform");
  j_CompoundTag::putInt((int)v2, (const void **)&v189, 2);
  v17 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v189 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v188, "spawnMobs");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v188, *((_BYTE *)v3 + 269));
  v18 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v188 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v187, "Generator");
  j_CompoundTag::putInt((int)v2, (const void **)&v187, *((_DWORD *)v3 + 68));
  v19 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v187 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v186, "FlatWorldLayers");
  if ( *((_BYTE *)v3 + 328) )
    v20 = (int)v3 + 280;
  else
    *((_BYTE *)v3 + 328) = 1;
    FlatWorldGeneratorOptions::parseStringFormatJSON((int)v3 + 280, (int *)v3 + 69);
  FlatWorldGeneratorOptions::toStringJSON((FlatWorldGeneratorOptions *)&v185, v20);
  j_CompoundTag::putString((int)v2, (const void **)&v186, &v185);
  v21 = (void *)(v185 - 12);
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v185 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v186 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v184, "LimitedWorldOriginX");
  j_CompoundTag::putInt((int)v2, (const void **)&v184, *((_DWORD *)v3 + 36));
  v23 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v184 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v183, "LimitedWorldOriginY");
  j_CompoundTag::putInt((int)v2, (const void **)&v183, *((_DWORD *)v3 + 37));
  v24 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v183 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v182, "LimitedWorldOriginZ");
  j_CompoundTag::putInt((int)v2, (const void **)&v182, *((_DWORD *)v3 + 38));
  v25 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v182 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v181, "worldStartCount");
  j_CompoundTag::putInt64((int)v2, (const void **)&v181, *((_DWORD *)v3 + 83), 0);
  v26 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v181 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v180, "currentTick");
  j_CompoundTag::putInt64((int)v2, (const void **)&v180, *((_QWORD *)v3 + 15), *((_QWORD *)v3 + 15) >> 32);
  v27 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v180 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v179, "rainLevel");
  j_CompoundTag::putFloat((int)v2, (const void **)&v179, *((_DWORD *)v3 + 56));
  v28 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v179 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v178, "rainTime");
  j_CompoundTag::putInt((int)v2, (const void **)&v178, *((_DWORD *)v3 + 57));
  v29 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v178 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v177, "lightningLevel");
  j_CompoundTag::putFloat((int)v2, (const void **)&v177, *((_DWORD *)v3 + 58));
  v30 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v177 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v176, "lightningTime");
  j_CompoundTag::putInt((int)v2, (const void **)&v176, *((_DWORD *)v3 + 59));
  v31 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v176 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v175, "hasBeenLoadedInCreative");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v175, *((_BYTE *)v3 + 336));
  v32 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v175 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v174, "eduLevel");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v174, *((_BYTE *)v3 + 337));
  v33 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v174 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v173, "immutableWorld");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v173, *((_BYTE *)v3 + 2));
  v34 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v173 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v172, "MultiplayerGame");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v172, *((_BYTE *)v3 + 338));
  v35 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v172 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v171, "LANBroadcast");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v171, *((_BYTE *)v3 + 339));
  v36 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v171 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v170, "XBLBroadcast");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v170, *((_BYTE *)v3 + 340));
  v37 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v170 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v169, "XBLBroadcastMode");
  j_CompoundTag::putInt((int)v2, (const void **)&v169, *((_DWORD *)v3 + 86));
  v38 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v169 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v168, "PlatformBroadcast");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v168, *((_BYTE *)v3 + 348));
  v39 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v168 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v167, "commandsEnabled");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v167, *((_BYTE *)v3 + 349));
  v40 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v167 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v166, "texturePacksRequired");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v166, *((_BYTE *)v3 + 350));
  v41 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v166 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v165, "hasLockedBehaviorPack");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v165, *((_BYTE *)v3 + 351));
  v42 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v165 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  sub_21E94B4((void **)&v164, "hasLockedResourcePack");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v164, *((_BYTE *)v3 + 352));
  v43 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v164 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v163, "isFromLockedTemplate");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v163, *((_BYTE *)v3 + 353));
  v44 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v163 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v162, "lastOpenedWithVersion");
  GameVersion::serialize((GameVersion *)&v160, (int *)v3 + 61);
  v45 = v160;
  v160 = 0;
  v161 = v45;
  j_CompoundTag::put((int)v2, (const void **)&v162, &v161);
  if ( v161 )
    (*(void (**)(void))(*(_DWORD *)v161 + 4))();
  v161 = 0;
  if ( v160 )
    (*(void (**)(void))(*(_DWORD *)v160 + 4))();
  v46 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v162 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  sub_21E94B4((void **)&v159, "prid");
  j_CompoundTag::putString((int)v2, (const void **)&v159, (int *)v3 + 89);
  v47 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v159 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v158, "bonusChestEnabled");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v158, *((_BYTE *)v3 + 360));
  v48 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v158 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  sub_21E94B4((void **)&v157, "bonusChestSpawned");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v157, *((_BYTE *)v3 + 361));
  v49 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v157 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  sub_21E94B4((void **)&v156, "startWithMapEnabled");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v156, *((_BYTE *)v3 + 362));
  v50 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v156 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  GameRules::setTagData((LevelData *)((char *)v3 + 8), v2);
  j_Abilities::addSaveData((LevelData *)((char *)v3 + 36), v2);
  if ( *((_DWORD *)v3 + 55) )
    v51 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v51);
    sub_21E94B4((void **)&v155, "fixedInventoryItems");
    j_FillingContainer::save((FillingContainer *)&v153, *((_DWORD *)v3 + 55));
    v52 = v153;
    v153 = 0;
    v154 = v52;
    j_CompoundTag::put((int)v51, (const void **)&v155, &v154);
    if ( v154 )
      (*(void (**)(void))(*(_DWORD *)v154 + 4))();
    v154 = 0;
    if ( v153 )
      (*(void (**)(void))(*(_DWORD *)v153 + 4))();
    v53 = (void *)(v155 - 12);
    if ( (int *)(v155 - 12) != &dword_28898C0 )
      v146 = (unsigned int *)(v155 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v147 = __ldrex(v146);
        while ( __strex(v147 - 1, v146) );
      }
      else
        v147 = (*v146)--;
      if ( v147 <= 0 )
        j_j_j_j__ZdlPv_9(v53);
    sub_21E94B4((void **)&v152, "fixedInventory");
    v151 = v51;
    j_CompoundTag::putCompound((int)v2, (const void **)&v152, (int *)&v151);
    if ( v151 )
      (*(void (**)(void))(*(_DWORD *)v151 + 4))();
    v151 = 0;
    v54 = (void *)(v152 - 12);
    if ( (int *)(v152 - 12) != &dword_28898C0 )
      v148 = (unsigned int *)(v152 - 4);
          v149 = __ldrex(v148);
        while ( __strex(v149 - 1, v148) );
        v149 = (*v148)--;
      if ( v149 <= 0 )
        j_j_j_j__ZdlPv_9(v54);
  sub_21E94B4((void **)&v150, "NetherScale");
  j_CompoundTag::putInt((int)v2, (const void **)&v150, *((_DWORD *)v3 + 60));
  v55 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v150 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
}


int __fastcall LevelData::setCommandsEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 349) = a2;
  return result;
}


int __fastcall LevelData::setBonusChestSpawned(int result, bool a2)
{
  *(_BYTE *)(result + 361) = a2;
  return result;
}


void __fastcall LevelData::setTagData(LevelData *this, CompoundTag *a2)
{
  LevelData::setTagData(this, a2);
}


char *__fastcall LevelData::getWorldCenter(LevelData *this)
{
  return (char *)this + 144;
}


int __fastcall LevelData::LevelData(int a1, LevelSettings *this, int a3, int a4, int a5, int a6, int a7, float a8, float a9)
{
  int v9; // r11@1
  LevelSettings *v10; // r5@1
  int v11; // r8@1
  int *v12; // r9@1
  char *v13; // r0@1
  int v14; // r6@1
  double v15; // r0@1
  int v16; // r7@1
  __int64 v20; // kr00_8@1
  int v22; // r0@6
  int v23; // r1@6
  int v24; // r2@6
  int v25; // r3@9
  int v26; // r5@10
  unsigned int *v27; // r1@11
  unsigned int v28; // r0@13
  unsigned int *v29; // r6@21
  unsigned int v30; // r0@23
  int v31; // r5@28
  unsigned int *v32; // r1@29
  unsigned int v33; // r0@31
  unsigned int *v34; // r6@35
  unsigned int v35; // r0@37
  void **v37; // [sp+8h] [bp-68h]@6
  int v38; // [sp+10h] [bp-60h]@28
  int v39; // [sp+18h] [bp-58h]@10
  int v40; // [sp+3Ch] [bp-34h]@6
  int v41; // [sp+40h] [bp-30h]@6
  int v42; // [sp+44h] [bp-2Ch]@6

  v9 = a1;
  v10 = this;
  *(_DWORD *)a1 = 0;
  v11 = a4;
  *(_BYTE *)(a1 + 4) = 1;
  v12 = (int *)a3;
  v13 = j_LevelSettings::getGameRules(this);
  *(_DWORD *)(v9 + 8) = 0;
  v14 = v9 + 8;
  *(_DWORD *)(v14 + 4) = *((_DWORD *)v13 + 1);
  *(_DWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 12) = *((_DWORD *)v13 + 3);
  *(_QWORD *)(v14 + 16) = *((_QWORD *)v13 + 2);
  j_std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,GameRule>,true> const*)#1}>(
    (unsigned int *)(v9 + 8),
    (int)v13);
  j_LevelSettings::getDefaultAbilities((LevelSettings *)(v9 + 36), (int)v10);
  sub_21E8AF4((int *)(v9 + 108), v12);
  *(_DWORD *)(v9 + 112) = 6;
  *(_DWORD *)(v9 + 116) = 137;
  *(_DWORD *)(v9 + 120) = 0;
  *(_DWORD *)(v9 + 124) = 0;
  *(_DWORD *)(v9 + 128) = j_LevelSettings::getSeed(v10);
  *(_DWORD *)(v9 + 132) = 128;
  *(_DWORD *)(v9 + 136) = 64;
  *(_DWORD *)(v9 + 140) = 128;
  *(_DWORD *)(v9 + 144) = BlockPos::MIN;
  *(_DWORD *)(v9 + 148) = dword_2816254;
  *(_DWORD *)(v9 + 152) = dword_2816258;
  *(_QWORD *)(v9 + 156) = (unsigned int)j_LevelSettings::getTime(v10);
  j_CompoundTag::CompoundTag(v9 + 164);
  j_CompoundTag::CompoundTag(v9 + 192);
  LODWORD(v15) = j_operator new(0x8Cu);
  v16 = LODWORD(v15);
  FixedInventoryContainer::FixedInventoryContainer(v15, 0);
  __asm
  {
    VLDR            S0, [SP,#0x70+arg_10]
    VLDR            S2, [SP,#0x70+arg_C]
  }
  *(_DWORD *)(v9 + 220) = v16;
  __asm { VSTR            S2, [R11,#0xE0] }
  *(_DWORD *)(v9 + 228) = 0;
  __asm { VSTR            S0, [R11,#0xE8] }
  *(_DWORD *)(v9 + 236) = 0;
  *(_DWORD *)(v9 + 240) = 8;
  GameVersion::current((GameVersion *)(v9 + 244));
  *(_DWORD *)(v9 + 260) = j_LevelSettings::getGameType(v10);
  *(_DWORD *)(v9 + 264) = j_LevelSettings::getGameDifficulty(v10);
  *(_BYTE *)(v9 + 268) = LevelSettings::forceGameType(v10);
  *(_BYTE *)(v9 + 269) = 1;
  *(_DWORD *)(v9 + 272) = v11;
  sub_21E8AF4((int *)(v9 + 276), (int *)&FlatWorldGenerator::DEFAULT_LAYERS);
  *(_DWORD *)(v9 + 280) = 0;
  *(_DWORD *)(v9 + 284) = 0;
  *(_DWORD *)(v9 + 288) = 0;
  j_Json::Value::Value((_DWORD *)(v9 + 304), 0);
  *(_DWORD *)(v9 + 320) = 0;
  *(_BYTE *)(v9 + 328) = 0;
  *(_DWORD *)(v9 + 332) = -1;
  *(_BYTE *)(v9 + 336) = a6;
  *(_BYTE *)(v9 + 337) = a7;
  *(_BYTE *)(v9 + 338) = j_LevelSettings::isMultiplayerGame(v10);
  *(_BYTE *)(v9 + 339) = j_LevelSettings::hasLANBroadcast(v10);
  *(_BYTE *)(v9 + 340) = j_LevelSettings::hasXBLBroadcast(v10);
  *(_DWORD *)(v9 + 344) = j_LevelSettings::getXBLBroadcastMode(v10);
  *(_BYTE *)(v9 + 348) = LevelSettings::hasPlatformBroadcast(v10);
  *(_BYTE *)(v9 + 349) = j_LevelSettings::hasCommandsEnabled(v10);
  *(_BYTE *)(v9 + 350) = j_LevelSettings::isTexturepacksRequired(v10);
  *(_BYTE *)(v9 + 351) = LevelSettings::hasLockedBehaviorPack(v10);
  *(_BYTE *)(v9 + 352) = LevelSettings::hasLockedResourcePack(v10);
  *(_BYTE *)(v9 + 353) = LevelSettings::isFromLockedTemplate(v10);
  *(_DWORD *)(v9 + 356) = &unk_28898CC;
  *(_BYTE *)(v9 + 360) = j_LevelSettings::hasBonusChestEnabled(v10);
  *(_BYTE *)(v9 + 361) = 0;
  *(_BYTE *)(v9 + 362) = j_LevelSettings::hasStartWithMapEnabled(v10);
  v20 = *(_QWORD *)a5;
  _ZF = (unsigned int)*(_QWORD *)a5 == BlockPos::MIN;
  if ( (unsigned int)*(_QWORD *)a5 == BlockPos::MIN )
    _ZF = HIDWORD(v20) == dword_2816254;
  if ( _ZF && *(_DWORD *)(a5 + 8) == dword_2816258 )
    BiomeSource::BiomeSource((int)&v37, *(_DWORD *)(v9 + 128), *(_DWORD *)(v9 + 272));
    BiomeSource::getSpawnPosition((BiomeSource *)&v40, (int)&v37);
    v22 = v40;
    *(_DWORD *)(v9 + 132) = v40;
    v23 = v41;
    *(_DWORD *)(v9 + 136) = v41;
    v24 = v42;
    *(_DWORD *)(v9 + 140) = v42;
    if ( *(_DWORD *)(v9 + 144) == BlockPos::MIN
      && *(_DWORD *)(v9 + 148) == dword_2816254
      && *(_DWORD *)(v9 + 152) == dword_2816258 )
    {
      v25 = v9 + 144;
      *(_DWORD *)v25 = v22;
      *(_DWORD *)(v25 + 4) = v23;
      *(_DWORD *)(v25 + 8) = v24;
    }
    v37 = &off_2721B88;
    v26 = v39;
    if ( v39 )
      v27 = (unsigned int *)(v39 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    v31 = v38;
    if ( v38 )
      v32 = (unsigned int *)(v38 + 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        v34 = (unsigned int *)(v31 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
  else
    *(_QWORD *)(v9 + 132) = v20;
    *(_DWORD *)(v9 + 140) = *(_DWORD *)(a5 + 8);
      *(_DWORD *)(v9 + 144) = *(_DWORD *)a5;
      *(_DWORD *)(v9 + 148) = *(_DWORD *)(a5 + 4);
      *(_DWORD *)(v9 + 152) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(v9 + 228) = 48000;
  *(_DWORD *)(v9 + 236) = 96000;
  return v9;
}


int __fastcall LevelData::setTime(int result, int a2)
{
  *(_DWORD *)(result + 156) = a2;
  return result;
}


void __fastcall LevelData::loadFixedInventoryData(LevelData *this, CompoundTag *a2)
{
  LevelData::loadFixedInventoryData(this, a2);
}


char *__fastcall LevelData::getGameRules(LevelData *this)
{
  return (char *)this + 8;
}


char *__fastcall LevelData::getFlatWorldGeneratorOptions(LevelData *this)
{
  char *result; // r0@2
  char *v2; // r4@3

  if ( *((_BYTE *)this + 328) )
  {
    result = (char *)this + 280;
  }
  else
    v2 = (char *)this + 280;
    *((_BYTE *)this + 328) = 1;
    FlatWorldGeneratorOptions::parseStringFormatJSON((int)this + 280, (int *)this + 69);
    result = v2;
  return result;
}


void __fastcall LevelData::loadFixedInventoryData(LevelData *this, CompoundTag *a2)
{
  LevelData *v2; // r4@1
  CompoundTag *v3; // r5@1
  int v4; // r6@2
  void *v5; // r0@2
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@2

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 55) )
  {
    sub_21E94B4((void **)&v8, "fixedInventoryItems");
    v4 = j_CompoundTag::getList((int)v3, (const void **)&v8);
    v5 = (void *)(v8 - 12);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    if ( v4 )
      (*(void (**)(void))(**((_DWORD **)v2 + 55) + 136))();
  }
}


      && LevelData::getGameType((LevelData *)(v1 + 592)) != 2 )
{
      v3 = 1;
    }
    result = v3;
  }
  return result;
}


RakNet::RakString *__fastcall LevelData::v1_read(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  unsigned __int8 *v5; // r6@1
  RakNet::BitStream *v6; // r0@2
  unsigned int v7; // r3@3
  RakNet::BitStream *v8; // r0@6
  unsigned int v9; // r3@7
  RakNet::BitStream *v10; // r0@10
  unsigned int v11; // r3@11
  RakNet::BitStream *v12; // r0@14
  unsigned int v13; // r3@15
  RakNet::BitStream *v14; // r0@18
  unsigned int v15; // r3@19
  unsigned int v16; // r3@23
  RakNet::RakString *v17; // r0@25
  char *v18; // r6@25
  _BYTE *v19; // r0@25
  unsigned int v20; // r2@25
  unsigned int v21; // r0@25
  unsigned int v22; // r1@25
  unsigned int v23; // r2@27
  unsigned int v24; // r2@30
  unsigned int v25; // r1@32
  unsigned int v26; // r1@35
  unsigned int v27; // r2@37
  unsigned int v28; // r0@41
  int v30; // [sp+0h] [bp-18h]@25
  unsigned __int8 v31; // [sp+4h] [bp-14h]@3

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 112) = a3;
  v5 = (unsigned __int8 *)(a1 + 128);
  if ( j_RakNet::BitStream::IsNetworkOrderInternal((RakNet::BitStream *)a1) )
  {
    v6 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, v5, 0x20u, 1);
  }
  else
    v6 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, &v31, 0x20u, 1);
    if ( v6 == (RakNet::BitStream *)1 )
      v6 = (RakNet::BitStream *)j_RakNet::BitStream::ReverseBytes(
                                  (RakNet::BitStream *)&v31,
                                  v5,
                                  (unsigned __int8 *)4,
                                  v7);
  if ( j_RakNet::BitStream::IsNetworkOrderInternal(v6) )
    v8 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits(
                                (RakNet::BitStream *)v4,
                                (unsigned __int8 *)(v3 + 132),
                                0x20u,
                                1);
    v8 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, &v31, 0x20u, 1);
    if ( v8 == (RakNet::BitStream *)1 )
      v8 = (RakNet::BitStream *)j_RakNet::BitStream::ReverseBytes(
                                  (unsigned __int8 *)(v3 + 132),
                                  v9);
  if ( j_RakNet::BitStream::IsNetworkOrderInternal(v8) )
    v10 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits(
                                 (RakNet::BitStream *)v4,
                                 (unsigned __int8 *)(v3 + 136),
                                 0x20u,
                                 1);
    v10 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, &v31, 0x20u, 1);
    if ( v10 == (RakNet::BitStream *)1 )
      v10 = (RakNet::BitStream *)j_RakNet::BitStream::ReverseBytes(
                                   (RakNet::BitStream *)&v31,
                                   (unsigned __int8 *)(v3 + 136),
                                   (unsigned __int8 *)4,
                                   v11);
  if ( j_RakNet::BitStream::IsNetworkOrderInternal(v10) )
    v12 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits(
                                 (unsigned __int8 *)(v3 + 140),
    v12 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, &v31, 0x20u, 1);
    if ( v12 == (RakNet::BitStream *)1 )
      v12 = (RakNet::BitStream *)j_RakNet::BitStream::ReverseBytes(
                                   (unsigned __int8 *)(v3 + 140),
                                   v13);
  if ( j_RakNet::BitStream::IsNetworkOrderInternal(v12) )
    v14 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits(
                                 (unsigned __int8 *)(v3 + 156),
    v14 = (RakNet::BitStream *)j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, &v31, 0x20u, 1);
    if ( v14 == (RakNet::BitStream *)1 )
      v14 = (RakNet::BitStream *)j_RakNet::BitStream::ReverseBytes(
                                   (unsigned __int8 *)(v3 + 156),
                                   v15);
  if ( j_RakNet::BitStream::IsNetworkOrderInternal(v14) )
    j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, (unsigned __int8 *)(v3 + 160), 0x20u, 1);
  else if ( j_RakNet::BitStream::ReadBits((RakNet::BitStream *)v4, &v31, 0x20u, 1) == 1 )
    j_RakNet::BitStream::ReverseBytes(
      (RakNet::BitStream *)&v31,
      (unsigned __int8 *)(v3 + 160),
      (unsigned __int8 *)4,
      v16);
  v17 = (RakNet::RakString *)j_RakNet::RakString::RakString((RakNet::RakString *)&v30);
  j_RakNet::RakString::Deserialize(v17, (RakNet::BitStream *)v4);
  v18 = *(char **)(v30 + 16);
  v19 = (_BYTE *)j_strlen(*(const char **)(v30 + 16));
  sub_21E8190((void **)(v3 + 108), v18, v19);
  v20 = *(_DWORD *)(v4 + 8);
  v21 = *(_DWORD *)v4;
  v22 = v20 + 1;
  if ( v20 + 1 <= *(_DWORD *)v4 )
    v23 = (0x80u >> (v20 & 7)) & *(_BYTE *)(*(_DWORD *)(v4 + 12) + (v20 >> 3));
    if ( v23 )
      LOBYTE(v23) = 1;
    *(_BYTE *)(v3 + 336) = v23;
    *(_DWORD *)(v4 + 8) = v22;
    v22 = *(_DWORD *)(v4 + 8);
  v24 = v22 + 1;
  if ( v22 + 1 <= v21 )
    v25 = (0x80u >> (v22 & 7)) & *(_BYTE *)(*(_DWORD *)(v4 + 12) + (v22 >> 3));
    if ( v25 )
      LOBYTE(v25) = 1;
    *(_BYTE *)(v3 + 360) = v25;
    *(_DWORD *)(v4 + 8) = v24;
    v24 = v22;
  v26 = v24 + 1;
  if ( v24 + 1 <= v21 )
    v27 = (0x80u >> (v24 & 7)) & *(_BYTE *)(*(_DWORD *)(v4 + 12) + (v24 >> 3));
    if ( v27 )
      LOBYTE(v27) = 1;
    *(_BYTE *)(v3 + 361) = v27;
    *(_DWORD *)(v4 + 8) = v26;
    v26 = v24;
  if ( v26 + 1 <= v21 )
    v28 = *(_BYTE *)(*(_DWORD *)(v4 + 12) + (v26 >> 3)) & (0x80u >> (v26 & 7));
    if ( v28 )
      LOBYTE(v28) = 1;
    *(_BYTE *)(v3 + 362) = v28;
    *(_DWORD *)(v4 + 8) = v26 + 1;
  return j_RakNet::RakString::~RakString((RakNet::RakString *)&v30);
}


signed int __fastcall LevelData::isRaining(LevelData *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0xE0] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall LevelData::incrementTick(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = (unsigned __int64)(*(_QWORD *)(result + 120) + 1LL) >> 32;
  LODWORD(v1) = *(_DWORD *)(result + 120) + 1;
  *(_QWORD *)(result + 120) = v1;
  return result;
}


int __fastcall LevelData::setNetworkVersion(int result, int a2)
{
  *(_DWORD *)(result + 116) = a2;
  return result;
}


int __fastcall LevelData::setCurrentTick(int result, _QWORD *a2)
{
  *(_QWORD *)(result + 120) = *a2;
  return result;
}


char *__fastcall LevelData::getLoadedPlayerTag(LevelData *this)
{
  return (char *)this + 164;
}


int __fastcall LevelData::setSpawn(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 132) = *(_DWORD *)a2;
  *(_DWORD *)(result + 136) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 140) = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)(result + 144) == BlockPos::MIN
    && *(_DWORD *)(result + 148) == dword_2816254
    && *(_DWORD *)(result + 152) == dword_2816258 )
  {
    *(_DWORD *)(result + 144) = *(_DWORD *)a2;
    *(_DWORD *)(result + 148) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(result + 152) = *((_DWORD *)a2 + 2);
  }
  return result;
}


int __fastcall LevelData::setStorageVersion(int result, int a2)
{
  *(_DWORD *)(result + 112) = a2;
  return result;
}


    || LevelData::getGenerator((LevelData *)(v1 + 592))
{
        Options::getLimitWorldSize(v2)) )
  {
    result = 0;
  }
  else
    result = MinecraftScreenModel::isTrial(*(MinecraftScreenModel **)(v1 + 424)) ^ 1;
  return result;
}


void __fastcall LevelData::getTagData(LevelData *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  LevelData *v3; // r8@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  int *v13; // r0@10
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  void *v17; // r0@13
  signed int v18; // r6@14
  void *v19; // r0@14
  int *v20; // r0@16
  void *v21; // r0@16
  void *v22; // r0@17
  signed int v23; // r6@18
  void *v24; // r0@18
  void *v25; // r0@20
  void *v26; // r0@21
  void *v27; // r0@22
  unsigned int *v28; // r2@23
  signed int v29; // r1@25
  signed int v30; // r6@28
  void *v31; // r0@28
  void *v32; // r0@30
  unsigned int *v33; // r2@31
  signed int v34; // r1@33
  signed int v35; // r6@36
  void *v36; // r0@36
  int v37; // r6@38
  void *v38; // r0@38
  signed int v39; // r6@42
  void *v40; // r0@42
  void *v41; // r0@44
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  signed int v44; // r6@50
  void *v45; // r0@50
  void *v51; // r0@52
  void *v52; // r0@53
  void *v54; // r0@54
  void *v55; // r0@55
  signed int v56; // r6@56
  void *v57; // r0@56
  int v58; // r6@58
  void *v59; // r0@58
  void *v60; // r0@63
  signed int v61; // r6@64
  void *v62; // r0@64
  void *v63; // r0@66
  unsigned int *v64; // r2@67
  signed int v65; // r1@69
  signed int v66; // r6@72
  void *v67; // r0@72
  int *v68; // r0@74
  void *v69; // r0@74
  signed int v70; // r6@75
  void *v71; // r0@75
  void *v72; // r0@77
  signed int v73; // r7@78
  void *v74; // r0@78
  int v75; // r7@80
  void *v76; // r0@80
  signed int v77; // r6@85
  void *v78; // r0@85
  void *v79; // r0@87
  signed int v80; // r6@90
  void *v81; // r0@90
  void *v82; // r0@92
  void *v83; // r0@93
  void *v84; // r0@94
  signed int v85; // r6@95
  void *v86; // r0@95
  void *v87; // r0@97
  unsigned int *v88; // r2@98
  signed int v89; // r1@100
  void *v90; // r0@103
  signed int v91; // r6@104
  void *v92; // r0@104
  void *v93; // r0@106
  unsigned int *v94; // r2@107
  signed int v95; // r1@109
  signed int v96; // r6@112
  void *v97; // r0@112
  void *v98; // r0@114
  unsigned int *v99; // r2@115
  signed int v100; // r1@117
  signed int v101; // r6@120
  void *v102; // r0@120
  void *v103; // r0@122
  unsigned int *v104; // r2@123
  signed int v105; // r1@125
  signed int v106; // r6@128
  void *v107; // r0@128
  void *v108; // r0@130
  unsigned int *v109; // r2@131
  signed int v110; // r1@133
  signed int v111; // r6@136
  void *v112; // r0@136
  void *v113; // r0@138
  unsigned int *v114; // r2@139
  signed int v115; // r1@141
  int v116; // r2@144
  int v117; // r3@144
  int v118; // r6@144
  int v119; // r0@144
  ListTag *v120; // r6@144
  void *v121; // r0@144
  int v122; // r1@146
  int v123; // r2@146
  int v124; // r3@146
  signed int v125; // r6@147
  void *v126; // r0@147
  void *v127; // r0@149
  unsigned int *v128; // r2@150
  signed int v129; // r1@152
  signed int v130; // r6@155
  void *v131; // r0@155
  void *v132; // r0@157
  unsigned int *v133; // r2@158
  signed int v134; // r1@160
  signed int v135; // r6@163
  void *v136; // r0@163
  void *v137; // r0@165
  unsigned int *v138; // r2@166
  signed int v139; // r1@168
  unsigned int *v140; // r2@172
  signed int v141; // r1@174
  unsigned int *v142; // r2@176
  signed int v143; // r1@178
  unsigned int *v144; // r2@180
  signed int v145; // r1@182
  unsigned int *v146; // r2@184
  signed int v147; // r1@186
  unsigned int *v148; // r2@188
  signed int v149; // r1@190
  unsigned int *v150; // r2@192
  signed int v151; // r1@194
  unsigned int *v152; // r2@196
  signed int v153; // r1@198
  unsigned int *v154; // r2@200
  signed int v155; // r1@202
  unsigned int *v156; // r2@204
  signed int v157; // r1@206
  unsigned int *v158; // r2@208
  signed int v159; // r1@210
  unsigned int *v160; // r2@212
  signed int v161; // r1@214
  unsigned int *v162; // r2@216
  signed int v163; // r1@218
  unsigned int *v164; // r2@220
  signed int v165; // r1@222
  unsigned int *v166; // r2@224
  signed int v167; // r1@226
  unsigned int *v168; // r2@228
  signed int v169; // r1@230
  unsigned int *v170; // r2@232
  signed int v171; // r1@234
  unsigned int *v172; // r2@236
  signed int v173; // r1@238
  unsigned int *v174; // r2@240
  signed int v175; // r1@242
  unsigned int *v176; // r2@244
  signed int v177; // r1@246
  unsigned int *v178; // r2@248
  signed int v179; // r1@250
  unsigned int *v180; // r2@252
  signed int v181; // r1@254
  unsigned int *v182; // r2@256
  signed int v183; // r1@258
  unsigned int *v184; // r2@260
  signed int v185; // r1@262
  unsigned int *v186; // r2@264
  signed int v187; // r1@266
  unsigned int *v188; // r2@268
  signed int v189; // r1@270
  unsigned int *v190; // r2@272
  signed int v191; // r1@274
  unsigned int *v192; // r2@276
  signed int v193; // r1@278
  unsigned int *v194; // r2@280
  signed int v195; // r1@282
  unsigned int *v196; // r2@284
  signed int v197; // r1@286
  unsigned int *v198; // r2@288
  signed int v199; // r1@290
  unsigned int *v200; // r2@292
  signed int v201; // r1@294
  unsigned int *v202; // r2@296
  signed int v203; // r1@298
  unsigned int *v204; // r2@300
  signed int v205; // r1@302
  unsigned int *v206; // r2@304
  signed int v207; // r1@306
  unsigned int *v208; // r2@308
  signed int v209; // r1@310
  unsigned int *v210; // r2@312
  signed int v211; // r1@314
  unsigned int *v212; // r2@316
  signed int v213; // r1@318
  unsigned int *v214; // r2@376
  signed int v215; // r1@378
  unsigned int *v216; // r2@388
  signed int v217; // r1@390
  unsigned int *v218; // r2@392
  signed int v219; // r1@394
  unsigned int *v220; // r2@404
  signed int v221; // r1@406
  unsigned int *v222; // r2@416
  signed int v223; // r1@418
  unsigned int *v224; // r2@420
  signed int v225; // r1@422
  unsigned int *v226; // r2@424
  signed int v227; // r1@426
  unsigned int *v228; // r2@432
  signed int v229; // r1@434
  unsigned int *v230; // r2@436
  signed int v231; // r1@438
  unsigned int *v232; // r2@452
  signed int v233; // r1@454
  unsigned int *v234; // r2@460
  signed int v235; // r1@462
  unsigned int *v236; // r2@468
  signed int v237; // r1@470
  unsigned int *v238; // r2@476
  signed int v239; // r1@478
  unsigned int *v240; // r2@484
  signed int v241; // r1@486
  unsigned int *v242; // r2@488
  signed int v243; // r1@490
  unsigned int *v244; // r2@492
  signed int v245; // r1@494
  unsigned int *v246; // r2@500
  signed int v247; // r1@502
  unsigned int *v248; // r2@508
  signed int v249; // r1@510
  int v250; // [sp+Ch] [bp-264h]@165
  int v251; // [sp+14h] [bp-25Ch]@163
  int v252; // [sp+1Ch] [bp-254h]@157
  int v253; // [sp+24h] [bp-24Ch]@155
  int v254; // [sp+2Ch] [bp-244h]@149
  int v255; // [sp+34h] [bp-23Ch]@147
  char v256; // [sp+38h] [bp-238h]@146
  int v257; // [sp+3Ch] [bp-234h]@146
  int v258; // [sp+40h] [bp-230h]@146
  int v259; // [sp+44h] [bp-22Ch]@146
  int v260; // [sp+4Ch] [bp-224h]@144
  char v261; // [sp+50h] [bp-220h]@144
  int v262; // [sp+54h] [bp-21Ch]@144
  int v263; // [sp+58h] [bp-218h]@144
  int v264; // [sp+5Ch] [bp-214h]@144
  int v265; // [sp+64h] [bp-20Ch]@138
  int v266; // [sp+6Ch] [bp-204h]@136
  int v267; // [sp+74h] [bp-1FCh]@130
  int v268; // [sp+7Ch] [bp-1F4h]@128
  int v269; // [sp+84h] [bp-1ECh]@122
  int v270; // [sp+8Ch] [bp-1E4h]@120
  int v271; // [sp+94h] [bp-1DCh]@114
  int v272; // [sp+9Ch] [bp-1D4h]@112
  int v273; // [sp+A4h] [bp-1CCh]@106
  int v274; // [sp+ACh] [bp-1C4h]@104
  int v275; // [sp+B4h] [bp-1BCh]@103
  int v276; // [sp+BCh] [bp-1B4h]@97
  int v277; // [sp+C4h] [bp-1ACh]@95
  int v278; // [sp+CCh] [bp-1A4h]@94
  int v279; // [sp+D4h] [bp-19Ch]@93
  int v280; // [sp+DCh] [bp-194h]@92
  int v281; // [sp+E4h] [bp-18Ch]@90
  int v282; // [sp+ECh] [bp-184h]@87
  int v283; // [sp+F4h] [bp-17Ch]@85
  int v284; // [sp+F8h] [bp-178h]@82
  int v285; // [sp+100h] [bp-170h]@80
  int v286; // [sp+108h] [bp-168h]@78
  int v287; // [sp+110h] [bp-160h]@77
  int v288; // [sp+118h] [bp-158h]@75
  int v289; // [sp+120h] [bp-150h]@74
  int v290; // [sp+128h] [bp-148h]@72
  int v291; // [sp+130h] [bp-140h]@66
  int v292; // [sp+138h] [bp-138h]@64
  int v293; // [sp+140h] [bp-130h]@63
  int v294; // [sp+144h] [bp-12Ch]@59
  int v295; // [sp+14Ch] [bp-124h]@58
  int v296; // [sp+154h] [bp-11Ch]@56
  int v297; // [sp+15Ch] [bp-114h]@55
  int v298; // [sp+164h] [bp-10Ch]@54
  int v299; // [sp+16Ch] [bp-104h]@53
  int v300; // [sp+174h] [bp-FCh]@52
  int v301; // [sp+17Ch] [bp-F4h]@50
  int v302; // [sp+184h] [bp-ECh]@44
  int v303; // [sp+18Ch] [bp-E4h]@42
  int v304; // [sp+190h] [bp-E0h]@39
  int v305; // [sp+198h] [bp-D8h]@38
  int v306; // [sp+1A0h] [bp-D0h]@36
  int v307; // [sp+1A8h] [bp-C8h]@30
  int v308; // [sp+1B0h] [bp-C0h]@28
  int v309; // [sp+1B8h] [bp-B8h]@22
  int v310; // [sp+1C0h] [bp-B0h]@21
  int v311; // [sp+1C8h] [bp-A8h]@20
  int v312; // [sp+1D0h] [bp-A0h]@18
  int v313; // [sp+1D8h] [bp-98h]@17
  int v314; // [sp+1E0h] [bp-90h]@16
  int v315; // [sp+1E8h] [bp-88h]@14
  int v316; // [sp+1F0h] [bp-80h]@13
  int v317; // [sp+1F8h] [bp-78h]@12
  int v318; // [sp+200h] [bp-70h]@11
  int v319; // [sp+208h] [bp-68h]@10
  int v320; // [sp+210h] [bp-60h]@9
  int v321; // [sp+218h] [bp-58h]@8
  int v322; // [sp+220h] [bp-50h]@7
  int v323; // [sp+228h] [bp-48h]@6
  int v324; // [sp+230h] [bp-40h]@5
  int v325; // [sp+238h] [bp-38h]@4
  int v326; // [sp+240h] [bp-30h]@3
  int v327; // [sp+248h] [bp-28h]@2
  int v328; // [sp+250h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v328, "RandomSeed");
  *((_DWORD *)v3 + 32) = j_CompoundTag::getInt64((int)v2, (const void **)&v328);
  v4 = (void *)(v328 - 12);
  if ( (int *)(v328 - 12) != &dword_28898C0 )
  {
    v140 = (unsigned int *)(v328 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
    }
    else
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v327, "hasBeenLoadedInCreative");
  *((_BYTE *)v3 + 336) = j_CompoundTag::getBoolean((int)v2, (const void **)&v327);
  v5 = (void *)(v327 - 12);
  if ( (int *)(v327 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v327 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v326, "GameType");
  *((_DWORD *)v3 + 65) = j_CompoundTag::getInt((int)v2, (const void **)&v326);
  v6 = (void *)(v326 - 12);
  if ( (int *)(v326 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v326 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v325, "ForceGameType");
  *((_BYTE *)v3 + 268) = j_CompoundTag::getBoolean((int)v2, (const void **)&v325);
  v7 = (void *)(v325 - 12);
  if ( (int *)(v325 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v325 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v324, "SpawnX");
  *((_DWORD *)v3 + 33) = j_CompoundTag::getInt((int)v2, (const void **)&v324);
  v8 = (void *)(v324 - 12);
  if ( (int *)(v324 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v324 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v323, "SpawnY");
  *((_DWORD *)v3 + 34) = j_CompoundTag::getInt((int)v2, (const void **)&v323);
  v9 = (void *)(v323 - 12);
  if ( (int *)(v323 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v323 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v322, "SpawnZ");
  *((_DWORD *)v3 + 35) = j_CompoundTag::getInt((int)v2, (const void **)&v322);
  v10 = (void *)(v322 - 12);
  if ( (int *)(v322 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v322 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v321, "Time");
  *((_DWORD *)v3 + 39) = j_CompoundTag::getInt64((int)v2, (const void **)&v321);
  v11 = (void *)(v321 - 12);
  if ( (int *)(v321 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v321 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v320, "LastPlayed");
  *((_DWORD *)v3 + 40) = j_CompoundTag::getInt64((int)v2, (const void **)&v320);
  v12 = (void *)(v320 - 12);
  if ( (int *)(v320 - 12) != &dword_28898C0 )
    v156 = (unsigned int *)(v320 - 4);
        v157 = __ldrex(v156);
      while ( __strex(v157 - 1, v156) );
      v157 = (*v156)--;
    if ( v157 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v319, "LevelName");
  v13 = (int *)j_CompoundTag::getString((int)v2, (const void **)&v319);
  EntityInteraction::setInteractText((int *)v3 + 27, v13);
  v14 = (void *)(v319 - 12);
  if ( (int *)(v319 - 12) != &dword_28898C0 )
    v158 = (unsigned int *)(v319 - 4);
        v159 = __ldrex(v158);
      while ( __strex(v159 - 1, v158) );
      v159 = (*v158)--;
    if ( v159 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v318, "StorageVersion");
  *((_DWORD *)v3 + 28) = j_CompoundTag::getInt((int)v2, (const void **)&v318);
  v15 = (void *)(v318 - 12);
  if ( (int *)(v318 - 12) != &dword_28898C0 )
    v160 = (unsigned int *)(v318 - 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      v161 = (*v160)--;
    if ( v161 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v317, "NetworkVersion");
  *((_DWORD *)v3 + 29) = j_CompoundTag::getInt((int)v2, (const void **)&v317);
  v16 = (void *)(v317 - 12);
  if ( (int *)(v317 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v317 - 4);
        v163 = __ldrex(v162);
      while ( __strex(v163 - 1, v162) );
      v163 = (*v162)--;
    if ( v163 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v316, "Generator");
  *((_DWORD *)v3 + 68) = j_CompoundTag::getInt((int)v2, (const void **)&v316);
  v17 = (void *)(v316 - 12);
  if ( (int *)(v316 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v316 - 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v315, "FlatWorldLayers");
  v18 = j_CompoundTag::contains((int)v2, (const void **)&v315);
  v19 = (void *)(v315 - 12);
  if ( (int *)(v315 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v315 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  if ( v18 == 1 )
    sub_21E94B4((void **)&v314, "FlatWorldLayers");
    v20 = (int *)j_CompoundTag::getString((int)v2, (const void **)&v314);
    EntityInteraction::setInteractText((int *)v3 + 69, v20);
    v21 = (void *)(v314 - 12);
    if ( (int *)(v314 - 12) != &dword_28898C0 )
      v214 = (unsigned int *)(v314 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v215 = __ldrex(v214);
        while ( __strex(v215 - 1, v214) );
      }
      else
        v215 = (*v214)--;
      if ( v215 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v313, "currentTick");
  *((_QWORD *)v3 + 15) = j_CompoundTag::getInt64((int)v2, (const void **)&v313);
  v22 = (void *)(v313 - 12);
  if ( (int *)(v313 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v313 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v312, "LimitedWorldOriginX");
  v23 = j_CompoundTag::contains((int)v2, (const void **)&v312);
  v24 = (void *)(v312 - 12);
  if ( (int *)(v312 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v312 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  if ( v23 )
    sub_21E94B4((void **)&v311, "LimitedWorldOriginX");
    *((_DWORD *)v3 + 36) = j_CompoundTag::getInt((int)v2, (const void **)&v311);
    v25 = (void *)(v311 - 12);
    if ( (int *)(v311 - 12) != &dword_28898C0 )
      v216 = (unsigned int *)(v311 - 4);
          v217 = __ldrex(v216);
        while ( __strex(v217 - 1, v216) );
        v217 = (*v216)--;
      if ( v217 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    sub_21E94B4((void **)&v310, "LimitedWorldOriginY");
    *((_DWORD *)v3 + 37) = j_CompoundTag::getInt((int)v2, (const void **)&v310);
    v26 = (void *)(v310 - 12);
    if ( (int *)(v310 - 12) != &dword_28898C0 )
      v218 = (unsigned int *)(v310 - 4);
          v219 = __ldrex(v218);
        while ( __strex(v219 - 1, v218) );
        v219 = (*v218)--;
      if ( v219 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E94B4((void **)&v309, "LimitedWorldOriginZ");
    *((_DWORD *)v3 + 38) = j_CompoundTag::getInt((int)v2, (const void **)&v309);
    v27 = (void *)(v309 - 12);
    if ( (int *)(v309 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v309 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
  else
    *((_QWORD *)v3 + 18) = 274877907072LL;
    *((_DWORD *)v3 + 38) = 128;
  sub_21E94B4((void **)&v308, "spawnMobs");
  v30 = j_CompoundTag::contains((int)v2, (const void **)&v308);
  v31 = (void *)(v308 - 12);
  if ( (int *)(v308 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v308 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  if ( v30 == 1 )
    sub_21E94B4((void **)&v307, "spawnMobs");
    *((_BYTE *)v3 + 269) = j_CompoundTag::getBoolean((int)v2, (const void **)&v307);
    v32 = (void *)(v307 - 12);
    if ( (int *)(v307 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v307 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    *((_BYTE *)v3 + 269) = 1;
  sub_21E94B4((void **)&v306, "Player");
  v35 = j_CompoundTag::contains((int)v2, (const void **)&v306, 10);
  v36 = (void *)(v306 - 12);
  if ( (int *)(v306 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v306 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  if ( v35 == 1 )
    sub_21E94B4((void **)&v305, "Player");
    v37 = j_CompoundTag::getCompound((int)v2, (const void **)&v305);
    v38 = (void *)(v305 - 12);
    if ( (int *)(v305 - 12) != &dword_28898C0 )
      v220 = (unsigned int *)(v305 - 4);
          v221 = __ldrex(v220);
        while ( __strex(v221 - 1, v220) );
        v221 = (*v220)--;
      if ( v221 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    j_CompoundTag::clone((CompoundTag *)&v304, v37);
    j_CompoundTag::operator=((int)v3 + 164, v304);
    if ( v304 )
      (*(void (**)(void))(*(_DWORD *)v304 + 4))();
    v304 = 0;
  sub_21E94B4((void **)&v303, "worldStartCount");
  v39 = j_CompoundTag::contains((int)v2, (const void **)&v303);
  v40 = (void *)(v303 - 12);
  if ( (int *)(v303 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v303 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  if ( v39 == 1 )
    sub_21E94B4((void **)&v302, "worldStartCount");
    *((_DWORD *)v3 + 83) = j_CompoundTag::getInt64((int)v2, (const void **)&v302);
    v41 = (void *)(v302 - 12);
    if ( (int *)(v302 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v302 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
    *((_DWORD *)v3 + 83) = -1;
  sub_21E94B4((void **)&v301, "rainLevel");
  v44 = j_CompoundTag::contains((int)v2, (const void **)&v301);
  v45 = (void *)(v301 - 12);
  if ( (int *)(v301 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v301 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  if ( v44 == 1 )
    sub_21E94B4((void **)&v300, "rainLevel");
    _R0 = j_CompoundTag::getFloat((int)v2, (const void **)&v300);
    __asm
      VMOV            S0, R0
      VSTR            S0, [R8,#0xE0]
    v51 = (void *)(v300 - 12);
    if ( (int *)(v300 - 12) != &dword_28898C0 )
      v222 = (unsigned int *)(v300 - 4);
          v223 = __ldrex(v222);
        while ( __strex(v223 - 1, v222) );
        v223 = (*v222)--;
      if ( v223 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    sub_21E94B4((void **)&v299, "rainTime");
    *((_DWORD *)v3 + 57) = j_CompoundTag::getInt((int)v2, (const void **)&v299);
    v52 = (void *)(v299 - 12);
    if ( (int *)(v299 - 12) != &dword_28898C0 )
      v224 = (unsigned int *)(v299 - 4);
          v225 = __ldrex(v224);
        while ( __strex(v225 - 1, v224) );
        v225 = (*v224)--;
      if ( v225 <= 0 )
        j_j_j_j__ZdlPv_9(v52);
    sub_21E94B4((void **)&v298, "lightningLevel");
    _R0 = j_CompoundTag::getFloat((int)v2, (const void **)&v298);
      VSTR            S0, [R8,#0xE8]
    v54 = (void *)(v298 - 12);
    if ( (int *)(v298 - 12) != &dword_28898C0 )
      v226 = (unsigned int *)(v298 - 4);
          v227 = __ldrex(v226);
        while ( __strex(v227 - 1, v226) );
        v227 = (*v226)--;
      if ( v227 <= 0 )
        j_j_j_j__ZdlPv_9(v54);
    sub_21E94B4((void **)&v297, "lightningTime");
    *((_DWORD *)v3 + 59) = j_CompoundTag::getInt((int)v2, (const void **)&v297);
    v55 = (void *)(v297 - 12);
    if ( (int *)(v297 - 12) != &dword_28898C0 )
      v228 = (unsigned int *)(v297 - 4);
          v229 = __ldrex(v228);
        while ( __strex(v229 - 1, v228) );
        v229 = (*v228)--;
      if ( v229 <= 0 )
        j_j_j_j__ZdlPv_9(v55);
  sub_21E94B4((void **)&v296, "fixedInventory");
  v56 = j_CompoundTag::contains((int)v2, (const void **)&v296);
  v57 = (void *)(v296 - 12);
  if ( (int *)(v296 - 12) != &dword_28898C0 )
    v180 = (unsigned int *)(v296 - 4);
        v181 = __ldrex(v180);
      while ( __strex(v181 - 1, v180) );
      v181 = (*v180)--;
    if ( v181 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  if ( v56 == 1 )
    sub_21E94B4((void **)&v295, "fixedInventory");
    v58 = j_CompoundTag::getCompound((int)v2, (const void **)&v295);
    v59 = (void *)(v295 - 12);
    if ( (int *)(v295 - 12) != &dword_28898C0 )
      v230 = (unsigned int *)(v295 - 4);
          v231 = __ldrex(v230);
        while ( __strex(v231 - 1, v230) );
        v231 = (*v230)--;
      if ( v231 <= 0 )
        j_j_j_j__ZdlPv_9(v59);
    j_CompoundTag::clone((CompoundTag *)&v294, v58);
    j_CompoundTag::operator=((int)v3 + 192, v294);
    if ( v294 )
      (*(void (**)(void))(*(_DWORD *)v294 + 4))();
    v294 = 0;
    LevelData::loadFixedInventoryData(v3, (LevelData *)((char *)v3 + 192));
    *((_QWORD *)v3 + 28) = 206158430208000LL;
    *((_DWORD *)v3 + 58) = 0;
    *((_DWORD *)v3 + 59) = 96000;
  sub_21E94B4((void **)&v293, "eduLevel");
  *((_BYTE *)v3 + 337) = j_CompoundTag::getBoolean((int)v2, (const void **)&v293);
  v60 = (void *)(v293 - 12);
  if ( (int *)(v293 - 12) != &dword_28898C0 )
    v182 = (unsigned int *)(v293 - 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4((void **)&v292, "immutableWorld");
  v61 = j_CompoundTag::contains((int)v2, (const void **)&v292);
  v62 = (void *)(v292 - 12);
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v184 = (unsigned int *)(v292 - 4);
        v185 = __ldrex(v184);
      while ( __strex(v185 - 1, v184) );
      v185 = (*v184)--;
    if ( v185 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  if ( v61 == 1 )
    sub_21E94B4((void **)&v291, "immutableWorld");
    *((_BYTE *)v3 + 2) = j_CompoundTag::getBoolean((int)v2, (const void **)&v291);
    v63 = (void *)(v291 - 12);
    if ( (int *)(v291 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v291 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v63);
    *((_BYTE *)v3 + 2) = 0;
  sub_21E94B4((void **)&v290, "prid");
  v66 = j_CompoundTag::contains((int)v2, (const void **)&v290);
  v67 = (void *)(v290 - 12);
  if ( (int *)(v290 - 12) != &dword_28898C0 )
    v186 = (unsigned int *)(v290 - 4);
        v187 = __ldrex(v186);
      while ( __strex(v187 - 1, v186) );
      v187 = (*v186)--;
    if ( v187 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  if ( v66 == 1 )
    sub_21E94B4((void **)&v289, "prid");
    v68 = (int *)j_CompoundTag::getString((int)v2, (const void **)&v289);
    EntityInteraction::setInteractText((int *)v3 + 89, v68);
    v69 = (void *)(v289 - 12);
    if ( (int *)(v289 - 12) != &dword_28898C0 )
      v232 = (unsigned int *)(v289 - 4);
          v233 = __ldrex(v232);
        while ( __strex(v233 - 1, v232) );
        v233 = (*v232)--;
      if ( v233 <= 0 )
        j_j_j_j__ZdlPv_9(v69);
  sub_21E94B4((void **)&v288, "NetherScale");
  v70 = j_CompoundTag::contains((int)v2, (const void **)&v288);
  v71 = (void *)(v288 - 12);
  if ( (int *)(v288 - 12) != &dword_28898C0 )
    v188 = (unsigned int *)(v288 - 4);
        v189 = __ldrex(v188);
      while ( __strex(v189 - 1, v188) );
      v189 = (*v188)--;
    if ( v189 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  if ( v70 == 1 )
    sub_21E94B4((void **)&v287, "NetherScale");
    *((_DWORD *)v3 + 60) = j_CompoundTag::getInt((int)v2, (const void **)&v287);
    v72 = (void *)(v287 - 12);
    if ( (int *)(v287 - 12) != &dword_28898C0 )
      v234 = (unsigned int *)(v287 - 4);
          v235 = __ldrex(v234);
        while ( __strex(v235 - 1, v234) );
        v235 = (*v234)--;
      if ( v235 <= 0 )
        j_j_j_j__ZdlPv_9(v72);
  GameRules::getTagData((LevelData *)((char *)v3 + 8), v2);
  sub_21E94B4((void **)&v286, "DayCycleStopTime");
  v73 = j_CompoundTag::contains((int)v2, (const void **)&v286);
  v74 = (void *)(v286 - 12);
  if ( (int *)(v286 - 12) != &dword_28898C0 )
    v190 = (unsigned int *)(v286 - 4);
        v191 = __ldrex(v190);
      while ( __strex(v191 - 1, v190) );
      v191 = (*v190)--;
    if ( v191 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  if ( v73 == 1 )
    sub_21E94B4((void **)&v285, "DayCycleStopTime");
    v75 = j_CompoundTag::getInt((int)v2, (const void **)&v285);
    v76 = (void *)(v285 - 12);
    if ( (int *)(v285 - 12) != &dword_28898C0 )
      v236 = (unsigned int *)(v285 - 4);
          v237 = __ldrex(v236);
        while ( __strex(v237 - 1, v236) );
        v237 = (*v236)--;
      if ( v237 <= 0 )
        j_j_j_j__ZdlPv_9(v76);
    if ( v75 >= 0 )
      *((_DWORD *)v3 + 39) = v75;
      j_GameRules::setRule(&v284, (unsigned __int64 *)v3 + 1, (int **)&GameRules::DO_DAYLIGHT_CYCLE, 0, 0);
      if ( v284 )
        (*(void (**)(void))(*(_DWORD *)v284 + 4))();
      v284 = 0;
  j_Abilities::loadSaveData((LevelData *)((char *)v3 + 36), v2);
  sub_21E94B4((void **)&v283, "Difficulty");
  v77 = j_CompoundTag::contains((int)v2, (const void **)&v283);
  v78 = (void *)(v283 - 12);
  if ( (int *)(v283 - 12) != &dword_28898C0 )
    v192 = (unsigned int *)(v283 - 4);
        v193 = __ldrex(v192);
      while ( __strex(v193 - 1, v192) );
      v193 = (*v192)--;
    if ( v193 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  if ( v77 == 1 )
    sub_21E94B4((void **)&v282, "Difficulty");
    *((_DWORD *)v3 + 66) = j_CompoundTag::getInt((int)v2, (const void **)&v282);
    v79 = (void *)(v282 - 12);
    if ( (int *)(v282 - 12) != &dword_28898C0 )
      v238 = (unsigned int *)(v282 - 4);
          v239 = __ldrex(v238);
        while ( __strex(v239 - 1, v238) );
        v239 = (*v238)--;
      if ( v239 <= 0 )
        j_j_j_j__ZdlPv_9(v79);
    if ( *((_DWORD *)v3 + 66) == 4 )
      *((_DWORD *)v3 + 66) = 2;
  sub_21E94B4((void **)&v281, "MultiplayerGame");
  v80 = j_CompoundTag::contains((int)v2, (const void **)&v281);
  v81 = (void *)(v281 - 12);
  if ( (int *)(v281 - 12) != &dword_28898C0 )
    v194 = (unsigned int *)(v281 - 4);
        v195 = __ldrex(v194);
      while ( __strex(v195 - 1, v194) );
      v195 = (*v194)--;
    if ( v195 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  if ( v80 == 1 )
    sub_21E94B4((void **)&v280, "MultiplayerGame");
    *((_BYTE *)v3 + 338) = j_CompoundTag::getBoolean((int)v2, (const void **)&v280);
    v82 = (void *)(v280 - 12);
    if ( (int *)(v280 - 12) != &dword_28898C0 )
      v240 = (unsigned int *)(v280 - 4);
          v241 = __ldrex(v240);
        while ( __strex(v241 - 1, v240) );
        v241 = (*v240)--;
      if ( v241 <= 0 )
        j_j_j_j__ZdlPv_9(v82);
    sub_21E94B4((void **)&v279, "LANBroadcast");
    *((_BYTE *)v3 + 339) = j_CompoundTag::getBoolean((int)v2, (const void **)&v279);
    v83 = (void *)(v279 - 12);
    if ( (int *)(v279 - 12) != &dword_28898C0 )
      v242 = (unsigned int *)(v279 - 4);
          v243 = __ldrex(v242);
        while ( __strex(v243 - 1, v242) );
        v243 = (*v242)--;
      if ( v243 <= 0 )
        j_j_j_j__ZdlPv_9(v83);
    sub_21E94B4((void **)&v278, "XBLBroadcast");
    *((_BYTE *)v3 + 340) = j_CompoundTag::getBoolean((int)v2, (const void **)&v278);
    v84 = (void *)(v278 - 12);
    if ( (int *)(v278 - 12) != &dword_28898C0 )
      v244 = (unsigned int *)(v278 - 4);
          v245 = __ldrex(v244);
        while ( __strex(v245 - 1, v244) );
        v245 = (*v244)--;
      if ( v245 <= 0 )
        j_j_j_j__ZdlPv_9(v84);
    sub_21E94B4((void **)&v277, "XBLBroadcastMode");
    v85 = j_CompoundTag::contains((int)v2, (const void **)&v277);
    v86 = (void *)(v277 - 12);
    if ( (int *)(v277 - 12) != &dword_28898C0 )
      v246 = (unsigned int *)(v277 - 4);
          v247 = __ldrex(v246);
        while ( __strex(v247 - 1, v246) );
        v247 = (*v246)--;
      if ( v247 <= 0 )
        j_j_j_j__ZdlPv_9(v86);
    if ( v85 == 1 )
      sub_21E94B4((void **)&v276, "XBLBroadcastMode");
      *((_DWORD *)v3 + 86) = j_CompoundTag::getInt((int)v2, (const void **)&v276);
      v87 = (void *)(v276 - 12);
      if ( (int *)(v276 - 12) != &dword_28898C0 )
        v88 = (unsigned int *)(v276 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
        }
        else
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j__ZdlPv_9(v87);
      *((_DWORD *)v3 + 86) = 3;
    sub_21E94B4((void **)&v275, "PlatformBroadcast");
    *((_BYTE *)v3 + 348) = j_CompoundTag::getBoolean((int)v2, (const void **)&v275);
    v90 = (void *)(v275 - 12);
    if ( (int *)(v275 - 12) != &dword_28898C0 )
      v248 = (unsigned int *)(v275 - 4);
          v249 = __ldrex(v248);
        while ( __strex(v249 - 1, v248) );
        v249 = (*v248)--;
      if ( v249 <= 0 )
        j_j_j_j__ZdlPv_9(v90);
  sub_21E94B4((void **)&v274, "commandsEnabled");
  v91 = j_CompoundTag::contains((int)v2, (const void **)&v274);
  v92 = (void *)(v274 - 12);
  if ( (int *)(v274 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v274 - 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
  if ( v91 == 1 )
    sub_21E94B4((void **)&v273, "commandsEnabled");
    *((_BYTE *)v3 + 349) = j_CompoundTag::getBoolean((int)v2, (const void **)&v273);
    v93 = (void *)(v273 - 12);
    if ( (int *)(v273 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v273 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j__ZdlPv_9(v93);
    *((_BYTE *)v3 + 349) = 0;
  sub_21E94B4((void **)&v272, "texturePacksRequired");
  v96 = j_CompoundTag::contains((int)v2, (const void **)&v272);
  v97 = (void *)(v272 - 12);
  if ( (int *)(v272 - 12) != &dword_28898C0 )
    v198 = (unsigned int *)(v272 - 4);
        v199 = __ldrex(v198);
      while ( __strex(v199 - 1, v198) );
      v199 = (*v198)--;
    if ( v199 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  if ( v96 == 1 )
    sub_21E94B4((void **)&v271, "texturePacksRequired");
    *((_BYTE *)v3 + 350) = j_CompoundTag::getBoolean((int)v2, (const void **)&v271);
    v98 = (void *)(v271 - 12);
    if ( (int *)(v271 - 12) != &dword_28898C0 )
      v99 = (unsigned int *)(v271 - 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 <= 0 )
        j_j_j_j__ZdlPv_9(v98);
    *((_BYTE *)v3 + 350) = 0;
  sub_21E94B4((void **)&v270, "hasLockedBehaviorPack");
  v101 = j_CompoundTag::contains((int)v2, (const void **)&v270);
  v102 = (void *)(v270 - 12);
  if ( (int *)(v270 - 12) != &dword_28898C0 )
    v200 = (unsigned int *)(v270 - 4);
        v201 = __ldrex(v200);
      while ( __strex(v201 - 1, v200) );
      v201 = (*v200)--;
    if ( v201 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  if ( v101 == 1 )
    sub_21E94B4((void **)&v269, "hasLockedBehaviorPack");
    *((_BYTE *)v3 + 351) = j_CompoundTag::getBoolean((int)v2, (const void **)&v269);
    v103 = (void *)(v269 - 12);
    if ( (int *)(v269 - 12) != &dword_28898C0 )
      v104 = (unsigned int *)(v269 - 4);
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
        v105 = (*v104)--;
      if ( v105 <= 0 )
        j_j_j_j__ZdlPv_9(v103);
    *((_BYTE *)v3 + 351) = 0;
  sub_21E94B4((void **)&v268, "hasLockedResourcePack");
  v106 = j_CompoundTag::contains((int)v2, (const void **)&v268);
  v107 = (void *)(v268 - 12);
  if ( (int *)(v268 - 12) != &dword_28898C0 )
    v202 = (unsigned int *)(v268 - 4);
        v203 = __ldrex(v202);
      while ( __strex(v203 - 1, v202) );
      v203 = (*v202)--;
    if ( v203 <= 0 )
      j_j_j_j__ZdlPv_9(v107);
  if ( v106 == 1 )
    sub_21E94B4((void **)&v267, "hasLockedResourcePack");
    *((_BYTE *)v3 + 352) = j_CompoundTag::getBoolean((int)v2, (const void **)&v267);
    v108 = (void *)(v267 - 12);
    if ( (int *)(v267 - 12) != &dword_28898C0 )
      v109 = (unsigned int *)(v267 - 4);
          v110 = __ldrex(v109);
        while ( __strex(v110 - 1, v109) );
        v110 = (*v109)--;
      if ( v110 <= 0 )
        j_j_j_j__ZdlPv_9(v108);
    *((_BYTE *)v3 + 352) = 0;
  sub_21E94B4((void **)&v266, "isFromLockedTemplate");
  v111 = j_CompoundTag::contains((int)v2, (const void **)&v266);
  v112 = (void *)(v266 - 12);
  if ( (int *)(v266 - 12) != &dword_28898C0 )
    v204 = (unsigned int *)(v266 - 4);
        v205 = __ldrex(v204);
      while ( __strex(v205 - 1, v204) );
      v205 = (*v204)--;
    if ( v205 <= 0 )
      j_j_j_j__ZdlPv_9(v112);
  if ( v111 == 1 )
    sub_21E94B4((void **)&v265, "isFromLockedTemplate");
    *((_BYTE *)v3 + 353) = j_CompoundTag::getBoolean((int)v2, (const void **)&v265);
    v113 = (void *)(v265 - 12);
    if ( (int *)(v265 - 12) != &dword_28898C0 )
      v114 = (unsigned int *)(v265 - 4);
          v115 = __ldrex(v114);
        while ( __strex(v115 - 1, v114) );
        v115 = (*v114)--;
      if ( v115 <= 0 )
        j_j_j_j__ZdlPv_9(v113);
    *((_BYTE *)v3 + 353) = 0;
  j_GameVersion::GameVersion((int)&v261);
  v116 = v262;
  v117 = v263;
  v118 = v264;
  *((_DWORD *)v3 + 61) = *(_DWORD *)&v261;
  v119 = (int)v3 + 248;
  *(_DWORD *)v119 = v116;
  *(_DWORD *)(v119 + 4) = v117;
  *(_DWORD *)(v119 + 8) = v118;
  sub_21E94B4((void **)&v260, "lastOpenedWithVersion");
  v120 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&v260);
  v121 = (void *)(v260 - 12);
  if ( (int *)(v260 - 12) != &dword_28898C0 )
    v206 = (unsigned int *)(v260 - 4);
        v207 = __ldrex(v206);
      while ( __strex(v207 - 1, v206) );
      v207 = (*v206)--;
    if ( v207 <= 0 )
      j_j_j_j__ZdlPv_9(v121);
  if ( v120 )
    GameVersion::GameVersion((int)&v256, v120);
    v122 = v257;
    v123 = v258;
    v124 = v259;
    *((_DWORD *)v3 + 61) = *(_DWORD *)&v256;
    *((_DWORD *)v3 + 62) = v122;
    *((_DWORD *)v3 + 63) = v123;
    *((_DWORD *)v3 + 64) = v124;
  sub_21E94B4((void **)&v255, "bonusChestEnabled");
  v125 = j_CompoundTag::contains((int)v2, (const void **)&v255);
  v126 = (void *)(v255 - 12);
  if ( (int *)(v255 - 12) != &dword_28898C0 )
    v208 = (unsigned int *)(v255 - 4);
        v209 = __ldrex(v208);
      while ( __strex(v209 - 1, v208) );
      v209 = (*v208)--;
    if ( v209 <= 0 )
      j_j_j_j__ZdlPv_9(v126);
  if ( v125 == 1 )
    sub_21E94B4((void **)&v254, "bonusChestEnabled");
    *((_BYTE *)v3 + 360) = j_CompoundTag::getBoolean((int)v2, (const void **)&v254);
    v127 = (void *)(v254 - 12);
    if ( (int *)(v254 - 12) != &dword_28898C0 )
      v128 = (unsigned int *)(v254 - 4);
          v129 = __ldrex(v128);
        while ( __strex(v129 - 1, v128) );
        v129 = (*v128)--;
      if ( v129 <= 0 )
        j_j_j_j__ZdlPv_9(v127);
    *((_BYTE *)v3 + 360) = 0;
  sub_21E94B4((void **)&v253, "bonusChestSpawned");
  v130 = j_CompoundTag::contains((int)v2, (const void **)&v253);
  v131 = (void *)(v253 - 12);
  if ( (int *)(v253 - 12) != &dword_28898C0 )
    v210 = (unsigned int *)(v253 - 4);
        v211 = __ldrex(v210);
      while ( __strex(v211 - 1, v210) );
      v211 = (*v210)--;
    if ( v211 <= 0 )
      j_j_j_j__ZdlPv_9(v131);
  if ( v130 == 1 )
    sub_21E94B4((void **)&v252, "bonusChestSpawned");
    *((_BYTE *)v3 + 361) = j_CompoundTag::getBoolean((int)v2, (const void **)&v252);
    v132 = (void *)(v252 - 12);
    if ( (int *)(v252 - 12) != &dword_28898C0 )
      v133 = (unsigned int *)(v252 - 4);
          v134 = __ldrex(v133);
        while ( __strex(v134 - 1, v133) );
        v134 = (*v133)--;
      if ( v134 <= 0 )
        j_j_j_j__ZdlPv_9(v132);
    *((_BYTE *)v3 + 361) = 0;
  sub_21E94B4((void **)&v251, "startWithMapEnabled");
  v135 = j_CompoundTag::contains((int)v2, (const void **)&v251);
  v136 = (void *)(v251 - 12);
  if ( (int *)(v251 - 12) != &dword_28898C0 )
    v212 = (unsigned int *)(v251 - 4);
        v213 = __ldrex(v212);
      while ( __strex(v213 - 1, v212) );
      v213 = (*v212)--;
    if ( v213 <= 0 )
      j_j_j_j__ZdlPv_9(v136);
  if ( v135 == 1 )
    sub_21E94B4((void **)&v250, "startWithMapEnabled");
    *((_BYTE *)v3 + 362) = j_CompoundTag::getBoolean((int)v2, (const void **)&v250);
    v137 = (void *)(v250 - 12);
    if ( (int *)(v250 - 12) != &dword_28898C0 )
      v138 = (unsigned int *)(v250 - 4);
          v139 = __ldrex(v138);
        while ( __strex(v139 - 1, v138) );
        v139 = (*v138)--;
      if ( v139 <= 0 )
        j_j_j_j__ZdlPv_9(v137);
    *((_BYTE *)v3 + 362) = 0;
}


signed int __fastcall LevelData::isLightning(LevelData *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0xE8] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall LevelData::LevelData(double a1)
{
  int v1; // r11@1
  const CompoundTag *v2; // r6@1

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = 0;
  *(_BYTE *)(LODWORD(a1) + 4) = 1;
  LODWORD(a1) += 8;
  v2 = (const CompoundTag *)HIDWORD(a1);
  j_GameRules::GameRules(a1);
  j_Abilities::Abilities(v1 + 36);
  *(_DWORD *)(v1 + 108) = &unk_28898CC;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  *(_DWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 140) = 0;
  *(_DWORD *)(v1 + 144) = 0;
  *(_DWORD *)(v1 + 148) = 0;
  *(_DWORD *)(v1 + 152) = 0;
  j_CompoundTag::CompoundTag(v1 + 164);
  j_CompoundTag::CompoundTag(v1 + 192);
  *(_DWORD *)(v1 + 220) = 0;
  *(_DWORD *)(v1 + 240) = 8;
  GameVersion::GameVersion(v1 + 244);
  *(_DWORD *)(v1 + 276) = &unk_28898CC;
  *(_DWORD *)(v1 + 280) = 0;
  *(_DWORD *)(v1 + 284) = 0;
  *(_DWORD *)(v1 + 288) = 0;
  j_Json::Value::Value((_DWORD *)(v1 + 304), 0);
  *(_DWORD *)(v1 + 320) = 0;
  *(_BYTE *)(v1 + 328) = 0;
  *(_DWORD *)(v1 + 356) = &unk_28898CC;
  LevelData::getTagData((LevelData *)v1, v2);
  return v1;
}


int __fastcall LevelData::setLANBroadcast(int result, bool a2)
{
  *(_BYTE *)(result + 339) = a2;
  return result;
}


LevelData *__fastcall LevelData::~LevelData(LevelData *this)
{
  LevelData *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r0@5
  int v8; // r1@7
  void *v9; // r0@7
  unsigned __int64 *v10; // r7@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned __int64 *v13; // r6@18
  int v14; // r1@18
  void *v15; // r0@18
  char *v16; // r0@20
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34

  v1 = this;
  v2 = *((_DWORD *)this + 89);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  j_Json::Value::~Value((LevelData *)((char *)v1 + 304));
  v4 = (void *)*((_DWORD *)v1 + 70);
  if ( v4 )
    j_operator delete(v4);
  v5 = *((_DWORD *)v1 + 69);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v5 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 55);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 55) = 0;
  j_CompoundTag::~CompoundTag((LevelData *)((char *)v1 + 192));
  j_CompoundTag::~CompoundTag((LevelData *)((char *)v1 + 164));
  v8 = *((_DWORD *)v1 + 27);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v8 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  j_Abilities::~Abilities((LevelData *)((char *)v1 + 36));
  v10 = (unsigned __int64 *)*((_DWORD *)v1 + 4);
  while ( v10 )
    v13 = v10;
    v14 = *v10 >> 32;
    v10 = (unsigned __int64 *)*v10;
    v15 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v14 - 4);
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
        j_j_j_j__ZdlPv_9(v15);
    j_operator delete(v13);
  j___aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v16 = (char *)*((_DWORD *)v1 + 2);
  if ( v16 && (char *)v1 + 32 != v16 )
    j_operator delete(v16);
  return v1;
}


int __fastcall LevelData::disableAchievements(int result)
{
  *(_BYTE *)(result + 336) = 1;
  return result;
}


CompoundTag *__fastcall LevelData::clearLoadedPlayerTag(LevelData *this)
{
  LevelData *v1; // r4@1
  char v3; // [sp+4h] [bp-2Ch]@1

  v1 = this;
  j_CompoundTag::CompoundTag((int)&v3);
  j_CompoundTag::operator=((int)v1 + 164, (int)&v3);
  return j_CompoundTag::~CompoundTag((CompoundTag *)&v3);
}


signed int __fastcall LevelData::achievementsWillBeDisabledOnLoad(LevelData *this)
{
  bool v1; // zf@1
  signed int result; // r0@4

  v1 = *((_BYTE *)this + 336) == 0;
  if ( !*((_BYTE *)this + 336) )
    v1 = *((_BYTE *)this + 349) == 0;
  if ( v1 )
  {
    result = *((_DWORD *)this + 65);
    if ( result != 1 )
      result = 0;
  }
  else
    result = 1;
  return result;
}


char *__fastcall LevelData::getSpawn(LevelData *this)
{
  return (char *)this + 132;
}


int __fastcall LevelData::setStartWithMapEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 362) = a2;
  return result;
}
