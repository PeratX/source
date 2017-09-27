

  if ( v3 > PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v2 + 432)) )
{
  return v1;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v6 + 432), 2, 0) > a3 )
{
    v7 = *v4;
    if ( strcmp(*v4, "personal_realms") )
    {
      if ( strcmp(v7, "friends_realms") )
        return 0;
      v3 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v6 + 432));
      if ( v3 < 0 )
    }
    v8 = (WorldInfo *)PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v6 + 432), v3);
    v5 = WorldInfo::getStatus(v8);
    if ( v5 != 1 )
      v5 = 0;
  }
  return v5;
}


char *__fastcall PlayScreenModel::getLoadingPacks(int a1, int a2, char *a3)
{
  int v3; // r5@1
  char *v4; // r4@1
  int v5; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = MinecraftGame::getContentManager(*(MinecraftGame **)(a2 + 12));
  return ExternalContentManager::getLoadingPacks(v3, v5, v4);
}


  if ( PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v1 + 432))
{
         Options::getShowRealmsTrialButtonFromPlayScreen(v2) != 1)
     || MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 432)) != 1)
    || MinecraftScreenModel::isRealmsDisabledForBeta(*(MinecraftScreenModel **)(v1 + 432))
    || !*(_BYTE *)(v1 + 456) )
  {
    result = 0;
  }
  else
    v3 = 0;
    if ( PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v1 + 432)) == 1
      && !PlayScreenModel::getRealmsStatus(*(PlayScreenModel **)(v1 + 432)) )
    {
      v3 = 1;
    }
    result = v3;
  return result;
}


void __fastcall PlayScreenModel::_sortRealmsWorlds(MinecraftScreenModel *a1, int *a2, __int64 *a3)
{
  PlayScreenModel::_sortRealmsWorlds(a1, a2, a3);
}


    && (v7 = **a2, PlayScreenModel::getWorldCount(*(_DWORD *)(**a2 + 432), 1, 4) > a4)
{
  {
    v9 = PlayScreenModel::getNetworkWorldAtIndex(*(_DWORD *)(v7 + 432), v5, 4);
    if ( v9 )
    {
      NetworkWorldInfo::NetworkWorldInfo((int)&v11, v9);
      NetworkWorldInfo::NetworkWorldInfo((int)&v10, (int)&v11);
      NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v11);
    }
    else
      NetworkWorldInfo::NetworkWorldInfo((int)&v10);
    if ( WorldInfo::isValid((WorldInfo *)&v10) == 1 )
      NetworkWorldInfo::getUpdatedHeader(v4, (int)&v10);
      sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v10);
    result = (char *)(_stack_chk_guard - v12);
    if ( _stack_chk_guard != v12 )
LABEL_5:
      _stack_chk_fail(result);
  }
  else
    sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
      goto LABEL_5;
  return result;
}


    && PlayScreenModel::getWorldCount(*(_DWORD *)(v2 + 432), 4, 0)
{
     + ((signed int)((*(_QWORD *)(v2 + 468) >> 32) - *(_QWORD *)(v2 + 468)) >> 3) )
  {
    v1 = 1;
  }
  return v1;
}


void __fastcall PlayScreenModel::~PlayScreenModel(PlayScreenModel *this)
{
  PlayScreenModel::~PlayScreenModel(this);
}


  if ( PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v3 + 432)) <= 0 )
{
    v5 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v3 + 432));
    if ( Options::getShowRealmsTrialButtonFromPlayScreen(v5) != 1
      || MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v3 + 432)) != 1
      || MinecraftScreenModel::isRealmsDisabledForBeta(*(MinecraftScreenModel **)(v3 + 432))
      || !*(_BYTE *)(v3 + 456)
      || PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v3 + 432)) != 1
      || PlayScreenModel::getRealmsStatus(*(PlayScreenModel **)(v3 + 432)) )
    {
      v6 = PlayScreenModel::getWorldCount(*(_DWORD *)(v3 + 432), 0, 0);
      v4 = "local_worlds_world_button_0";
      if ( v6 <= 0 )
        v4 = (const char *)&unk_257BC67;
    }
    else
      v4 = "realms_trial_button";
  }
  else
  {
    v4 = "personal_realms_world_button_0";
  return sub_21E94B4(v2, v4);
}


RakNet *__fastcall PlayScreenModel::_populateNetworkWorlds(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r10@1
  int v2; // r0@1
  __int64 v3; // r4@1
  int v4; // r6@2
  Social::MultiplayerGameInfo *v5; // r7@3
  int v6; // r6@4
  bool v7; // zf@5
  const Social::MultiplayerGameInfo *v8; // r4@9
  const Social::MultiplayerGameInfo *v9; // r6@9
  ExternalServerFile *v10; // r0@16
  int v11; // r6@16
  int v12; // r2@17
  int i; // r0@17
  int v14; // r1@19
  ClientInstance *v15; // r0@23
  Minecraft *v16; // r0@23
  int v17; // r0@23
  __int64 *v18; // r0@23
  __int64 *v19; // r4@23
  __int64 v20; // r0@23
  int v21; // r5@24
  signed int v22; // r0@25
  int *v23; // r0@27
  int *v24; // r9@27
  int j; // r11@28
  int v26; // r4@28
  int v27; // r4@29
  __int64 v28; // r4@34
  char v29; // r6@34
  _DWORD *v30; // r0@35
  size_t v31; // r2@35
  char v32; // r0@36
  NetworkWorldInfo **v33; // r5@41
  unsigned int *v34; // r2@43
  signed int v35; // r1@45
  unsigned int *v36; // r2@47
  signed int v37; // r1@49
  unsigned int *v38; // r2@51
  signed int v39; // r1@53
  _DWORD *v40; // r0@67
  size_t v41; // r2@67
  char v42; // r8@68
  char *v43; // r4@72
  int *v44; // r0@72
  signed int v45; // r9@72
  void *v46; // r0@72
  void *v47; // r0@73
  void *v48; // r0@74
  char *v49; // r4@76
  NetworkWorldInfo *v50; // r8@78
  unsigned int *v51; // r2@85
  signed int v52; // r1@87
  unsigned int *v53; // r2@89
  signed int v54; // r1@91
  unsigned int *v55; // r2@93
  signed int v56; // r1@95
  _DWORD *v57; // r0@109
  size_t v58; // r2@109
  char v59; // r5@110
  char *v60; // r4@114
  int *v61; // r0@114
  signed int v62; // r4@114
  void *v63; // r0@114
  void *v64; // r0@115
  void *v65; // r0@116
  char *v66; // r4@118
  NetworkWorldInfo *v67; // r5@124
  NetworkWorldInfo *v68; // r6@124
  NetworkWorldInfo *v69; // r0@125
  NetworkWorldInfo *v70; // r5@127
  NetworkWorldInfo *v71; // r6@127
  NetworkWorldInfo *v72; // r0@128
  NetworkWorldInfo *v73; // r5@130
  NetworkWorldInfo *v74; // r6@130
  NetworkWorldInfo *v75; // r0@131
  int v76; // r5@133
  int v77; // r7@133
  __int64 v78; // r0@134
  NetworkWorldInfo *v79; // r4@138
  __int64 v80; // r0@139
  char *v81; // r7@142
  ClientInstance *v82; // r0@142
  Minecraft *v83; // r0@142
  int v84; // r5@142
  void (__fastcall *v85)(int, const void **, int); // r8@142
  const void **v86; // r6@142
  int v87; // r0@142
  __int64 v88; // r4@143
  __int64 v89; // r0@144
  NetworkWorldInfo **v90; // r8@148
  NetworkWorldInfo **m; // r11@148
  char *v92; // r4@149
  ClientInstance *v93; // r0@149
  Minecraft *v94; // r0@149
  int v95; // r5@149
  void (__fastcall *v96)(int, const void **, int); // r7@149
  const void **v97; // r6@149
  int v98; // r0@149
  int *v99; // r7@151
  unsigned int *v100; // r2@152
  signed int v101; // r1@154
  unsigned int *v102; // r2@156
  signed int v103; // r1@158
  unsigned int *v104; // r2@160
  signed int v105; // r1@162
  int v106; // r1@176
  void *v107; // r0@176
  int v108; // r1@177
  void *v109; // r0@177
  int *v110; // r0@178
  __int64 v111; // r4@182
  NetworkWorldInfo *v112; // r0@183
  __int64 v113; // r4@187
  NetworkWorldInfo *v114; // r0@188
  Social::MultiplayerGameInfo *v115; // r0@192
  Social::MultiplayerGameInfo *v116; // r4@192
  __int64 v117; // r4@197
  NetworkWorldInfo *v118; // r0@198
  RakNet *result; // r0@202
  int v120; // [sp+Ch] [bp-1DCh]@78
  int *v121; // [sp+10h] [bp-1D8h]@41
  NetworkWorldInfo **k; // [sp+14h] [bp-1D4h]@41
  int l; // [sp+14h] [bp-1D4h]@138
  int *ptr; // [sp+18h] [bp-1D0h]@27
  NetworkWorldInfo *v125; // [sp+1Ch] [bp-1CCh]@23
  NetworkWorldInfo *v126; // [sp+20h] [bp-1C8h]@23
  NetworkWorldInfo *v127; // [sp+24h] [bp-1C4h]@23
  NetworkWorldInfo *v128; // [sp+28h] [bp-1C0h]@16
  NetworkWorldInfo *v129; // [sp+2Ch] [bp-1BCh]@16
  int v130; // [sp+30h] [bp-1B8h]@16
  void *v131; // [sp+34h] [bp-1B4h]@1
  const Social::MultiplayerGameInfo *v132; // [sp+38h] [bp-1B0h]@1
  NetworkWorldInfo *v133; // [sp+40h] [bp-1A8h]@1
  NetworkWorldInfo *v134; // [sp+44h] [bp-1A4h]@1
  NetworkWorldInfo *v135; // [sp+48h] [bp-1A0h]@1
  int v136; // [sp+50h] [bp-198h]@93
  int v137; // [sp+54h] [bp-194h]@89
  int v138; // [sp+60h] [bp-188h]@85
  int v139; // [sp+108h] [bp-E0h]@51
  int v140; // [sp+10Ch] [bp-DCh]@47
  int v141; // [sp+118h] [bp-D0h]@43
  RakNet *v142; // [sp+1C0h] [bp-28h]@1

  v1 = this;
  v142 = _stack_chk_guard;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v2 = MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  Social::MultiplayerServiceManager::getGameList((Social::MultiplayerServiceManager *)&v131, v2);
  v3 = *(_QWORD *)&v131;
  if ( v131 != (void *)v132 )
  {
    v4 = v132 - (const Social::MultiplayerGameInfo *)v131;
    sub_12E5EA4(
      (Social::MultiplayerGameInfo *)v131,
      v132,
      2 * (31 - __clz(-1171354717 * ((v132 - (const Social::MultiplayerGameInfo *)v131) >> 3))),
      0);
    if ( v4 <= 1408 )
    {
      sub_12E6674((Social::MultiplayerGameInfo *)v3, (Social::MultiplayerGameInfo *)HIDWORD(v3));
    }
    else
      v5 = (Social::MultiplayerGameInfo *)(v3 + 1408);
      sub_12E6674((Social::MultiplayerGameInfo *)v3, (Social::MultiplayerGameInfo *)(v3 + 1408));
      if ( (_DWORD)v3 + 1408 != HIDWORD(v3) )
      {
        v6 = HIDWORD(v3) - 1408;
        do
        {
          HIDWORD(v3) &= 0xFFFFFF00;
          sub_12E68D0(v5);
          v5 = (Social::MultiplayerGameInfo *)(v3 + 1496);
          v7 = v6 == (_DWORD)v3 + 88;
          LODWORD(v3) = v3 + 88;
        }
        while ( !v7 );
      }
  }
  v9 = v132;
  v8 = (const Social::MultiplayerGameInfo *)v131;
    do
      if ( MinecraftScreenModel::isRealmsDisabledForBeta(v1) != 1 || !*((_QWORD *)v8 + 6) )
        if ( v134 == v135 )
          std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>::_M_emplace_back_aux<Social::MultiplayerGameInfo &>(
            (unsigned __int64 *)&v133,
            (int)v8);
        else
          v134 = (NetworkWorldInfo *)(NetworkWorldInfo::NetworkWorldInfo((int)v134, (int)v8) + 392);
      v8 = (const Social::MultiplayerGameInfo *)((char *)v8 + 88);
    while ( v9 != v8 );
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v10 = (ExternalServerFile *)MinecraftGame::getExternalServer(*((MinecraftGame **)v1 + 3));
  v11 = *(_DWORD *)(ExternalServerFile::getExternalServers(v10) + 8);
  if ( v11 )
    v12 = 0;
    for ( i = 0; ; i = (int)v129 )
      v14 = *(_DWORD *)(v11 + 8);
      if ( i == v12 )
        std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>::_M_emplace_back_aux<ExternalServer &>(
          (unsigned __int64 *)&v128,
          v14);
      else
        v129 = (NetworkWorldInfo *)(NetworkWorldInfo::NetworkWorldInfo(i, v14) + 392);
      v11 = *(_DWORD *)v11;
      if ( !v11 )
        break;
      v12 = v130;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v15 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 3));
  v16 = (Minecraft *)ClientInstance::getServerData(v15);
  v17 = Minecraft::getServerLocator(v16);
  v18 = (__int64 *)(*(int (**)(void))(*(_DWORD *)v17 + 28))();
  v19 = v18;
  v20 = *v18;
  if ( HIDWORD(v20) == (_DWORD)v20 )
    v21 = 0;
    LODWORD(v20) = HIDWORD(v20);
  else
    v22 = HIDWORD(v20) - v20;
    if ( (unsigned int)(-373475417 * (v22 >> 3)) >= 0x1642C86 )
      sub_21E57F4();
    v21 = (int)operator new(v22);
    v20 = *v19;
  v23 = (int *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PingedCompatibleServer const*,std::vector<PingedCompatibleServer,std::allocator<PingedCompatibleServer>>>,PingedCompatibleServer*>(
                 v20,
                 SHIDWORD(v20),
                 v21);
  v24 = v23;
  ptr = (int *)v21;
  if ( (int *)v21 != v23 )
    j = v21;
    v26 = (int)v23 - v21;
    sub_12E6E30(v21, v23, 2 * (31 - __clz(-373475417 * (((signed int)v23 - v21) >> 3))), 0);
    if ( v26 <= 2944 )
      sub_12E8330((int *)v21, v24);
      goto LABEL_34;
    v27 = v21 + 2944;
    sub_12E8330((int *)v21, (int *)(v21 + 2944));
    if ( (int *)(v21 + 2944) == v24 )
      v21 &= 0xFFFFFF00;
      sub_12E86F0(v27);
      v27 += 184;
    while ( v24 != (int *)v27 );
    for ( j = (int)ptr; (int *)j != v24; j += 184 )
LABEL_34:
      v28 = *(_QWORD *)&v133;
      v29 = 0;
      if ( v133 != v134 )
          v30 = *(_DWORD **)NetworkWorldInfo::getOwnerName((NetworkWorldInfo *)v28);
          v31 = *(v30 - 3);
          if ( v31 == *(_DWORD *)(*(_DWORD *)j - 12) )
          {
            v7 = memcmp(v30, *(const void **)j, v31) == 0;
            v32 = 0;
            if ( v7 )
              v32 = 1;
          }
          else
          LODWORD(v28) = v28 + 392;
          v29 |= v32;
        while ( HIDWORD(v28) != (_DWORD)v28 );
      v121 = v24;
      v33 = (NetworkWorldInfo **)*(_QWORD *)((char *)v1 + 188);
      for ( k = (NetworkWorldInfo **)(*(_QWORD *)((char *)v1 + 188) >> 32); v33 != k; v33 += 2 )
        v40 = *(_DWORD **)NetworkWorldInfo::getOwnerName(*v33);
        v41 = *(v40 - 3);
        if ( v41 == *(_DWORD *)(*(_DWORD *)j - 12) )
          v42 = 0;
          if ( !memcmp(v40, *(const void **)j, v41) )
            v42 = 1;
        v43 = NetworkWorldInfo::getExternalServer(*v33);
        v44 = PingedCompatibleServer::PingedCompatibleServer(&v139, (int *)j);
        v45 = PlayScreenModel::areExternalAndRemoteServerSame((int)v44, (ExternalServer *)v43, (int)&v139);
        v46 = (void *)(v141 - 12);
        if ( (int *)(v141 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v141 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
        v47 = (void *)(v140 - 12);
        if ( (int *)(v140 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v140 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v47);
        v29 |= v42;
        v48 = (void *)(v139 - 12);
        if ( (int *)(v139 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v139 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        if ( v45 == 1 )
          v49 = NetworkWorldInfo::getExternalServer(*v33);
          ExternalServer::setProtocol((ExternalServer *)v49, *(_DWORD *)(j + 12));
          ExternalServer::setVersion((int)v49, (int *)(j + 16));
          ExternalServer::setTitle((int)v49, (int *)j);
          ExternalServer::setPlayers((ExternalServer *)v49, *(_DWORD *)(j + 20));
          ExternalServer::setMaxPlayers((ExternalServer *)v49, *(_DWORD *)(j + 24));
          NetworkWorldInfo::updateThirdPartyServer(*v33);
          NetworkWorldInfo::setRemoteServer(*v33, (PingedCompatibleServer *)j);
          v29 = 1;
      v50 = v128;
      v120 = (int)v129;
      if ( v128 == v129 )
        v24 = v121;
          v57 = *(_DWORD **)NetworkWorldInfo::getOwnerName(v50);
          v58 = *(v57 - 3);
          if ( v58 == *(_DWORD *)(*(_DWORD *)j - 12) )
            v59 = 0;
            if ( !memcmp(v57, *(const void **)j, v58) )
              v59 = 1;
          v60 = NetworkWorldInfo::getExternalServer(v50);
          v61 = PingedCompatibleServer::PingedCompatibleServer(&v136, (int *)j);
          v62 = PlayScreenModel::areExternalAndRemoteServerSame((int)v61, (ExternalServer *)v60, (int)&v136);
          v63 = (void *)(v138 - 12);
          if ( (int *)(v138 - 12) != &dword_28898C0 )
            v51 = (unsigned int *)(v138 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v52 = __ldrex(v51);
              while ( __strex(v52 - 1, v51) );
            }
            else
              v52 = (*v51)--;
            if ( v52 <= 0 )
              j_j_j_j__ZdlPv_9(v63);
          v64 = (void *)(v137 - 12);
          if ( (int *)(v137 - 12) != &dword_28898C0 )
            v53 = (unsigned int *)(v137 - 4);
                v54 = __ldrex(v53);
              while ( __strex(v54 - 1, v53) );
              v54 = (*v53)--;
            if ( v54 <= 0 )
              j_j_j_j__ZdlPv_9(v64);
          v29 |= v59;
          v65 = (void *)(v136 - 12);
          if ( (int *)(v136 - 12) != &dword_28898C0 )
            v55 = (unsigned int *)(v136 - 4);
                v56 = __ldrex(v55);
              while ( __strex(v56 - 1, v55) );
              v56 = (*v55)--;
            if ( v56 <= 0 )
              j_j_j_j__ZdlPv_9(v65);
          if ( v62 == 1 )
            v66 = NetworkWorldInfo::getExternalServer(v50);
            ExternalServer::setProtocol((ExternalServer *)v66, *(_DWORD *)(j + 12));
            ExternalServer::setVersion((int)v66, (int *)(j + 16));
            ExternalServer::setTitle((int)v66, (int *)j);
            ExternalServer::setPlayers((ExternalServer *)v66, *(_DWORD *)(j + 20));
            ExternalServer::setMaxPlayers((ExternalServer *)v66, *(_DWORD *)(j + 24));
            NetworkWorldInfo::updateExternalServer(v50);
            NetworkWorldInfo::setRemoteServer(v50, (PingedCompatibleServer *)j);
            v29 = 1;
          v50 = (NetworkWorldInfo *)((char *)v50 + 392);
        while ( v50 != (NetworkWorldInfo *)v120 );
      if ( !(v29 & 1) && *(_DWORD *)(*(_DWORD *)j - 12) )
        if ( v126 == v127 )
          std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>::_M_emplace_back_aux<PingedCompatibleServer &>(
            (unsigned __int64 *)&v125,
            j);
          v126 = (NetworkWorldInfo *)(NetworkWorldInfo::NetworkWorldInfo((int)v126, j) + 392);
  v67 = (NetworkWorldInfo *)*((_DWORD *)v1 + 35);
  v68 = (NetworkWorldInfo *)*((_DWORD *)v1 + 36);
  if ( v68 != v67 )
    v69 = (NetworkWorldInfo *)*((_DWORD *)v1 + 35);
      v69 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v69) + 392);
    while ( v68 != v69 );
  *((_DWORD *)v1 + 36) = v67;
  v70 = (NetworkWorldInfo *)*((_DWORD *)v1 + 41);
  v71 = (NetworkWorldInfo *)*((_DWORD *)v1 + 42);
  if ( v71 != v70 )
    v72 = (NetworkWorldInfo *)*((_DWORD *)v1 + 41);
      v72 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v72) + 392);
    while ( v71 != v72 );
  *((_DWORD *)v1 + 42) = v70;
  v73 = (NetworkWorldInfo *)*((_DWORD *)v1 + 38);
  v74 = (NetworkWorldInfo *)*((_DWORD *)v1 + 39);
  if ( v74 != v73 )
    v75 = (NetworkWorldInfo *)*((_DWORD *)v1 + 38);
      v75 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v75) + 392);
    while ( v74 != v75 );
  *((_DWORD *)v1 + 39) = v73;
  v76 = (int)v134;
  v77 = (int)v133;
  if ( v133 != v134 )
      v78 = *((_QWORD *)v1 + 18);
      if ( (_DWORD)v78 == HIDWORD(v78) )
        std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>::_M_emplace_back_aux<NetworkWorldInfo const&>(
          (unsigned __int64 *)((char *)v1 + 140),
          v77);
        NetworkWorldInfo::NetworkWorldInfo(v78, v77);
        *((_DWORD *)v1 + 36) += 392;
      v77 += 392;
    while ( v76 != v77 );
  v79 = v128;
  for ( l = (int)v129; (NetworkWorldInfo *)l != v79; v79 = (NetworkWorldInfo *)((char *)v79 + 392) )
    v80 = *((_QWORD *)v1 + 21);
    if ( (_DWORD)v80 == HIDWORD(v80) )
      std::vector<NetworkWorldInfo,std::allocator<NetworkWorldInfo>>::_M_emplace_back_aux<NetworkWorldInfo const&>(
        (unsigned __int64 *)((char *)v1 + 164),
        (int)v79);
      NetworkWorldInfo::NetworkWorldInfo(v80, (int)v79);
      *((_DWORD *)v1 + 42) += 392;
    v81 = NetworkWorldInfo::getExternalServer(v79);
    v82 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 3));
    v83 = (Minecraft *)ClientInstance::getServerData(v82);
    v84 = Minecraft::getServerLocator(v83);
    v85 = *(void (__fastcall **)(int, const void **, int))(*(_DWORD *)v84 + 20);
    v86 = ExternalServer::getIP((ExternalServer *)v81);
    v87 = ExternalServer::getPort((ExternalServer *)v81);
    v85(v84, v86, v87);
  PlayScreenModel::updateNetworkWorldSorting(v1);
  v88 = *(_QWORD *)&v125;
  if ( v125 != v126 )
      v89 = *(_QWORD *)((char *)v1 + 156);
      if ( (_DWORD)v89 == HIDWORD(v89) )
          (unsigned __int64 *)v1 + 19,
          v88);
        NetworkWorldInfo::NetworkWorldInfo(v89, v88);
        *((_DWORD *)v1 + 39) += 392;
      LODWORD(v88) = v88 + 392;
    while ( HIDWORD(v88) != (_DWORD)v88 );
  v90 = (NetworkWorldInfo **)(*(_QWORD *)((char *)v1 + 188) >> 32);
  for ( m = (NetworkWorldInfo **)*(_QWORD *)((char *)v1 + 188); v90 != m; m += 2 )
    v92 = NetworkWorldInfo::getExternalServer(*m);
    v93 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 3));
    v94 = (Minecraft *)ClientInstance::getServerData(v93);
    v95 = Minecraft::getServerLocator(v94);
    v96 = *(void (__fastcall **)(int, const void **, int))(*(_DWORD *)v95 + 20);
    v97 = ExternalServer::getIP((ExternalServer *)v92);
    v98 = ExternalServer::getPort((ExternalServer *)v92);
    v96(v95, v97, v98);
  *((_BYTE *)v1 + 112) = 1;
  if ( ptr != v24 )
    v99 = ptr;
      v106 = v99[4];
      v107 = (void *)(v106 - 12);
      if ( (int *)(v106 - 12) != &dword_28898C0 )
        v100 = (unsigned int *)(v106 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j__ZdlPv_9(v107);
      v108 = v99[1];
      v109 = (void *)(v108 - 12);
      if ( (int *)(v108 - 12) != &dword_28898C0 )
        v102 = (unsigned int *)(v108 - 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 <= 0 )
          j_j_j_j__ZdlPv_9(v109);
      v110 = (int *)(*v99 - 12);
      if ( v110 != &dword_28898C0 )
        v104 = (unsigned int *)(*v99 - 4);
            v105 = __ldrex(v104);
          while ( __strex(v105 - 1, v104) );
          v105 = (*v104)--;
        if ( v105 <= 0 )
          j_j_j_j__ZdlPv_9(v110);
      v99 += 46;
    while ( v99 != v24 );
  if ( ptr )
    operator delete(ptr);
  v111 = *(_QWORD *)&v125;
    v112 = v125;
      v112 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v112) + 392);
    while ( (NetworkWorldInfo *)HIDWORD(v111) != v112 );
  if ( (_DWORD)v111 )
    operator delete((void *)v111);
  v113 = *(_QWORD *)&v128;
  if ( v128 != v129 )
    v114 = v128;
      v114 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v114) + 392);
    while ( (NetworkWorldInfo *)HIDWORD(v113) != v114 );
  if ( (_DWORD)v113 )
    operator delete((void *)v113);
  v116 = v132;
  v115 = (Social::MultiplayerGameInfo *)v131;
      v115 = (Social::MultiplayerGameInfo *)((char *)Social::MultiplayerGameInfo::~MultiplayerGameInfo(v115) + 88);
    while ( v116 != v115 );
    v115 = (Social::MultiplayerGameInfo *)v131;
  if ( v115 )
    operator delete((void *)v115);
  v117 = *(_QWORD *)&v133;
    v118 = v133;
      v118 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v118) + 392);
    while ( (NetworkWorldInfo *)HIDWORD(v117) != v118 );
  if ( (_DWORD)v117 )
    operator delete((void *)v117);
  result = (RakNet *)(_stack_chk_guard - v142);
  if ( _stack_chk_guard != v142 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PlayScreenModel::getLegacyWorldAtIndex(PlayScreenModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *((_QWORD *)this + 25), -991146299 * ((HIDWORD(v2) - (signed int)v2) >> 3) <= a2) )
    result = 0;
  else
    result = v2 + 104 * a2;
  return result;
}


int __fastcall PlayScreenModel::_pingServer(PlayScreenModel *this, ExternalServer *a2)
{
  ExternalServer *v2; // r4@1
  ClientInstance *v3; // r0@1
  Minecraft *v4; // r0@1
  int v5; // r0@1
  int v6; // r5@1
  int (__fastcall *v7)(int, const void **, int); // r7@1
  const void **v8; // r6@1
  int v9; // r2@1

  v2 = a2;
  v3 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 3));
  v4 = (Minecraft *)ClientInstance::getServerData(v3);
  v5 = Minecraft::getServerLocator(v4);
  v6 = v5;
  v7 = *(int (__fastcall **)(int, const void **, int))(*(_DWORD *)v5 + 20);
  v8 = ExternalServer::getIP(v2);
  v9 = ExternalServer::getPort(v2);
  return v7(v6, v8, v9);
}


void __fastcall PlayScreenModel::~PlayScreenModel(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r0@1

  v1 = PlayScreenModel::~PlayScreenModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall PlayScreenModel::_startXBLiveNetworkWorld(PlayScreenModel *this, NetworkWorldInfo *a2)
{
  PlayScreenModel *v2; // r5@1
  NetworkWorldInfo *v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  int v6; // r5@2
  char *v7; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v4 = MinecraftGame::getEventing(*((MinecraftGame **)this + 3));
  sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
  MinecraftEventing::fireEventStartWorld(v4, 3, &v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *((_DWORD *)v2 + 3);
  v7 = NetworkWorldInfo::getFriendGame(v3);
  MinecraftGame::joinLiveGame(v6, (int *)v7 + 5, 0);
}


char *__fastcall PlayScreenModel::_startRemoteNetworkWorld(PlayScreenModel *this, NetworkWorldInfo *a2)
{
  PlayScreenModel *v2; // r11@1
  int *v3; // r0@1
  int v4; // r5@1
  void *v5; // r0@1
  void *v6; // r8@2
  __int64 v7; // r9@2
  __int64 v8; // kr00_8@2
  void *v9; // r5@2
  _QWORD *v10; // r6@2
  __int64 v11; // r0@2
  char *v12; // r0@4
  char *v13; // r0@5
  char *v14; // r0@6
  __int64 v15; // kr08_8@7
  int v16; // r4@7
  unsigned int *v17; // r1@8
  unsigned int v18; // r0@10
  unsigned int *v19; // r5@14
  unsigned int v20; // r0@16
  void *v21; // r0@23
  void *v22; // r0@24
  void *v23; // r0@25
  void *v24; // r0@26
  char *result; // r0@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  unsigned int *v30; // r2@37
  signed int v31; // r1@39
  unsigned int *v32; // r2@41
  signed int v33; // r1@43
  unsigned int *v34; // r2@45
  signed int v35; // r1@47
  unsigned int *v36; // r2@49
  signed int v37; // r1@51
  unsigned int *v38; // r2@53
  signed int v39; // r1@55
  unsigned int *v40; // r2@57
  signed int v41; // r1@59
  void *v42; // [sp+0h] [bp-278h]@7
  int v43; // [sp+8h] [bp-270h]@7
  char v44; // [sp+Ch] [bp-26Ch]@7
  int v45; // [sp+10h] [bp-268h]@7
  int v46; // [sp+18h] [bp-260h]@1
  _QWORD *v47; // [sp+1Ch] [bp-25Ch]@2
  void (*v48)(void); // [sp+24h] [bp-254h]@2
  char *v49; // [sp+30h] [bp-248h]@2
  char *v50; // [sp+34h] [bp-244h]@2
  __int64 v51; // [sp+38h] [bp-240h]@2
  void *v52; // [sp+40h] [bp-238h]@2
  int v53; // [sp+44h] [bp-234h]@2
  PlayScreenModel *v54; // [sp+E8h] [bp-190h]@2
  int v55; // [sp+F0h] [bp-188h]@1
  int v56; // [sp+F4h] [bp-184h]@25
  int v57; // [sp+100h] [bp-178h]@24
  char v58; // [sp+1A8h] [bp-D0h]@2
  RakNet *v59; // [sp+250h] [bp-28h]@1

  v2 = this;
  v59 = _stack_chk_guard;
  v3 = (int *)NetworkWorldInfo::getRemoteServer(a2);
  PingedCompatibleServer::PingedCompatibleServer(&v55, v3);
  v4 = MinecraftGame::getEventing(*((MinecraftGame **)v2 + 3));
  sub_21E94B4((void **)&v46, (const char *)&unk_257BC67);
  MinecraftEventing::fireEventStartWorld(v4, 1, &v46);
  v5 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v46 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  PingedCompatibleServer::PingedCompatibleServer((int *)&v49, &v55);
  v54 = v2;
  v6 = operator new(0x38u);
  LODWORD(v7) = v49;
  v49 = (char *)&unk_28898CC;
  HIDWORD(v7) = v50;
  v50 = (char *)&unk_28898CC;
  v8 = v51;
  v9 = v52;
  v52 = &unk_28898CC;
  _aeabi_memcpy4(&v58, &v53, 164);
  v48 = 0;
  v10 = operator new(0xC0u);
  *v10 = v7;
  v10[1] = v8;
  *((_DWORD *)v10 + 4) = v9;
  _aeabi_memcpy4((char *)v10 + 20, &v58, 164);
  LODWORD(v11) = sub_12EA444;
  *((_DWORD *)v10 + 46) = v2;
  HIDWORD(v11) = sub_12EA214;
  v47 = v10;
  *(_QWORD *)&v48 = v11;
  GameServerConnectProgressHandler::GameServerConnectProgressHandler((int)v6, 1, (int)&v47, 0);
  if ( v48 )
    v48();
  v12 = (char *)v52 - 12;
  if ( (int *)((char *)v52 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)((char *)v52 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v50 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v49 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *(_QWORD *)((char *)v2 + 20);
  sub_21E94B4((void **)&v43, "joining_multiplayer_remote_server");
  v42 = v6;
  SceneFactory::createNetworkProgressScreen((unsigned __int64 *)&v44, SHIDWORD(v15), &v43, (int *)&v42);
  SceneStack::pushScreen(v15, (int)&v44, 0);
  v16 = v45;
  if ( v45 )
    v17 = (unsigned int *)(v45 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  if ( v42 )
    (*(void (**)(void))(*(_DWORD *)v42 + 4))();
  v42 = 0;
  v21 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v57 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v56 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v55 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  result = (char *)(_stack_chk_guard - v59);
  if ( _stack_chk_guard != v59 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall PlayScreenModel::_populateLocalWorldsFromStorageSource(MinecraftScreenModel *a1, int a2, unsigned __int64 *a3, int a4, int a5)
{
  char v5; // r9@1
  unsigned __int64 *v6; // r4@1
  LocalWorldInfo *v7; // r8@1
  int *v8; // r0@5
  char *v9; // r10@5
  int v10; // r0@5
  unsigned __int64 *v11; // r12@5
  const void *v12; // r3@5
  const void *v13; // r5@5
  const void *v14; // r6@5
  const void *v15; // r7@5
  int v16; // r0@5
  const void *v17; // r3@5
  const void *v18; // r4@5
  const void *v19; // r5@5
  const void *v20; // r6@5
  const void *v21; // r7@5
  unsigned __int64 *v22; // r8@7
  __int64 v23; // r4@7
  int v24; // r6@8
  int *v25; // r6@9
  unsigned __int64 v26; // r0@16
  int v27; // r4@18
  int v28; // r5@18
  int v29; // r6@18
  char *v30; // r0@20
  unsigned __int64 *v31; // r6@23
  unsigned __int64 v32; // r4@23
  LocalWorldInfo *v33; // r0@24
  _BYTE *v34; // r4@26
  _BYTE *v35; // r7@26
  unsigned int v36; // r9@27
  signed int v37; // r8@27
  unsigned int *v38; // r2@29
  signed int v39; // r1@31
  unsigned int *v40; // r2@33
  signed int v41; // r1@35
  OfferRepository *v42; // r0@46
  signed int v43; // r0@46
  bool v44; // zf@46
  __int64 v45; // r0@50
  signed int v46; // r11@51
  signed __int64 v47; // kr10_8@53
  unsigned int v48; // r0@53
  unsigned __int64 *v49; // r8@53
  signed int v50; // r6@53
  __int64 v51; // r2@53
  int v52; // r5@55
  unsigned int v53; // r2@55
  signed int v54; // r3@59
  bool v55; // zf@59
  signed int v56; // r6@59
  unsigned int v57; // r5@63
  unsigned __int8 v58; // cf@73
  int v59; // r0@73
  int v60; // r1@73
  int v61; // r2@73
  int v62; // r3@73
  char v63; // r0@73
  void *v64; // r0@73
  void *v65; // r0@74
  MinecraftEventing *v66; // r0@78
  LevelSummary *v67; // r0@80
  LevelSummary *v68; // r4@80
  RakNet *result; // r0@85
  int v70; // [sp+28h] [bp-4D8h]@51
  int v71; // [sp+2Ch] [bp-4D4h]@1
  unsigned int v72; // [sp+2Ch] [bp-4D4h]@27
  unsigned int v73; // [sp+30h] [bp-4D0h]@27
  unsigned __int64 v74; // [sp+34h] [bp-4CCh]@27
  unsigned int v75; // [sp+3Ch] [bp-4C4h]@27
  int v76; // [sp+40h] [bp-4C0h]@1
  MinecraftScreenModel *v77; // [sp+44h] [bp-4BCh]@1
  int v78; // [sp+48h] [bp-4B8h]@33
  int v79; // [sp+4Ch] [bp-4B4h]@29
  const void *v80[17]; // [sp+50h] [bp-4B0h]@5
  char v81; // [sp+94h] [bp-46Ch]@5
  int v82; // [sp+98h] [bp-468h]@1
  int v83; // [sp+9Ch] [bp-464h]@1
  int *v84; // [sp+A0h] [bp-460h]@1
  int *v85; // [sp+A4h] [bp-45Ch]@1
  int v86; // [sp+A8h] [bp-458h]@1
  void *ptr; // [sp+ACh] [bp-454h]@1
  _BYTE *v88; // [sp+B0h] [bp-450h]@1
  int v89; // [sp+B4h] [bp-44Ch]@1
  int v90; // [sp+C0h] [bp-440h]@73
  int v91; // [sp+C4h] [bp-43Ch]@73
  int v92; // [sp+C8h] [bp-438h]@73
  int v93; // [sp+CCh] [bp-434h]@73
  char v94; // [sp+D0h] [bp-430h]@73
  int v95; // [sp+D4h] [bp-42Ch]@73
  RakNet *v96; // [sp+4D8h] [bp-28h]@1

  v77 = a1;
  v5 = 0;
  v6 = a3;
  v76 = a4;
  v71 = a2;
  v96 = _stack_chk_guard;
  v88 = 0;
  v89 = 0;
  v86 = 0;
  ptr = 0;
  v82 = 0;
  v83 = 0;
  v84 = &v82;
  v85 = &v82;
  v7 = (LocalWorldInfo *)*a3;
  if ( v7 != (LocalWorldInfo *)(*a3 >> 32) )
  {
    v5 = 0;
    do
    {
      if ( LocalWorldInfo::isDirty(v7) )
      {
        v5 = 1;
      }
      else
        v8 = (int *)LocalWorldInfo::getLevelSummary(v7);
        LevelSummary::LevelSummary((int *)v80, v8);
        v9 = std::map<std::string,LevelSummary,std::less<std::string>,std::allocator<std::pair<std::string const,LevelSummary>>>::operator[](
               (int)&v81,
               v80);
        EntityInteraction::setInteractText((int *)v9, (int *)v80);
        EntityInteraction::setInteractText((int *)v9 + 1, (int *)((unsigned int)v80 | 4));
        v10 = (int)(v9 + 8);
        v11 = v6;
        v12 = v80[3];
        v13 = v80[4];
        v14 = v80[5];
        v15 = v80[6];
        *(_DWORD *)v10 = v80[2];
        *(_DWORD *)(v10 + 4) = v12;
        *(_DWORD *)(v10 + 8) = v13;
        *(_DWORD *)(v10 + 12) = v14;
        *(_DWORD *)(v10 + 16) = v15;
        v16 = (int)(v9 + 28);
        v17 = v80[8];
        v18 = v80[9];
        v19 = v80[10];
        v20 = v80[11];
        v21 = v80[12];
        *(_DWORD *)v16 = v80[7];
        *(_DWORD *)(v16 + 4) = v17;
        *(_DWORD *)(v16 + 8) = v18;
        *(_DWORD *)(v16 + 12) = v19;
        *(_DWORD *)(v16 + 16) = v20;
        *(_DWORD *)(v16 + 20) = v21;
        v6 = v11;
        EntityInteraction::setInteractText((int *)v9 + 13, (int *)&v80[13]);
        EntityInteraction::setInteractText((int *)v9 + 14, (int *)&v80[14]);
        LevelSummary::~LevelSummary((LevelSummary *)v80);
      v7 = (LocalWorldInfo *)((char *)v7 + 96);
    }
    while ( v7 != *((LocalWorldInfo **)v6 + 1) );
  }
  v22 = v6;
  (*(void (**)(void))(*(_DWORD *)v71 + 16))();
  v23 = *(_QWORD *)&ptr;
  if ( ptr != v88 )
    v24 = v88 - (_BYTE *)ptr;
    std::__introsort_loop<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
      (int)ptr,
      (int)v88,
      2 * (31 - __clz((v88 - (_BYTE *)ptr) >> 6)));
    if ( v24 <= 1024 )
      std::__insertion_sort<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,__gnu_cxx::__ops::_Iter_less_iter>(
        (LevelSummary *)v23,
        (LevelSummary *)HIDWORD(v23));
    else
      v25 = (int *)(v23 + 1024);
        (LevelSummary *)(v23 + 1024));
      if ( (_DWORD)v23 + 1024 != HIDWORD(v23) )
        HIDWORD(v23) -= 1024;
        do
        {
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,__gnu_cxx::__ops::_Val_less_iter>(v25);
          v25 = (int *)(v23 + 1088);
          v44 = HIDWORD(v23) == (_DWORD)v23 + 64;
          LODWORD(v23) = v23 + 64;
        }
        while ( !v44 );
  if ( !(v5 & 1) )
    v26 = *v22;
    if ( -1431655765 * ((HIDWORD(v26) - (signed int)v26) >> 5) == (v88 - (_BYTE *)ptr) >> 6 )
      if ( v88 == ptr )
        goto LABEL_80;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      while ( 1 )
        v30 = LocalWorldInfo::getLevelSummary((LocalWorldInfo *)(v26 + v27));
        if ( LevelSummary::operator!=((const void **)v30, (const void **)((char *)ptr + v28)) == 1 )
          break;
        if ( ++v29 >= (unsigned int)((v88 - (_BYTE *)ptr) >> 6) )
          goto LABEL_80;
        LODWORD(v26) = *(_DWORD *)v22;
        v27 += 96;
        v28 += 64;
  v31 = v22;
  v32 = *v22;
  if ( HIDWORD(v32) != (_DWORD)v32 )
    v33 = (LocalWorldInfo *)*v22;
      v33 = (LocalWorldInfo *)((char *)LocalWorldInfo::~LocalWorldInfo(v33) + 96);
    while ( (LocalWorldInfo *)HIDWORD(v32) != v33 );
  *((_DWORD *)v22 + 1) = v32;
  v34 = v88;
  v35 = ptr;
  if ( ptr == v88 )
    v75 = 0;
    v74 = 0xFFFFFFFFLL;
    v36 = 0;
    v73 = 0;
    v72 = -1;
  else
    v37 = 6;
      if ( v76 != 1 )
        goto LABEL_89;
      v42 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)v77 + 3));
      v43 = OfferRepository::isTrial(v42);
      v44 = v43 == 1;
      if ( v43 == 1 )
        v44 = *((_DWORD *)v35 + 3) == 1;
      if ( !v44 )
LABEL_89:
        if ( *((_DWORD *)v35 + 12) <= v37 )
          v45 = *(unsigned __int64 *)((char *)v31 + 4);
          if ( (_DWORD)v45 == HIDWORD(v45) )
          {
            std::vector<LocalWorldInfo,std::allocator<LocalWorldInfo>>::_M_emplace_back_aux<LevelSummary &>(
              v31,
              (int)v35);
            v46 = v37;
            v70 = *((_DWORD *)v31 + 1);
          }
          else
            LocalWorldInfo::LocalWorldInfo(v45, (int)v35);
            v70 = *((_DWORD *)v31 + 1) + 96;
            *((_DWORD *)v31 + 1) = v70;
          v47 = *((_QWORD *)v35 + 4);
          v48 = v72;
          v49 = v31;
          v50 = 0;
          v51 = (unsigned int)v47 >> 20;
          if ( HIDWORD(v47) >> 20 < v72 )
            HIDWORD(v51) = 1;
          v52 = v74;
          v53 = v47 >> 20;
          if ( v53 < (unsigned int)v74 )
            v50 = 1;
          if ( v72 != HIDWORD(v47) >> 20 )
            v50 = HIDWORD(v51);
          v54 = 0;
          v55 = v50 == 0;
          v56 = 0;
          if ( !v55 )
            v48 = HIDWORD(v47) >> 20;
          v72 = v48;
            v52 = v47 >> 20;
          LODWORD(v74) = v52;
          v57 = v73;
          if ( v73 < HIDWORD(v47) >> 20 )
            v54 = 1;
          if ( v36 < v53 )
            v56 = 1;
          if ( v73 != HIDWORD(v47) >> 20 )
            v56 = v54;
          if ( v56 )
            v57 = HIDWORD(v47) >> 20;
          v73 = v57;
            v36 = v47 >> 20;
          v58 = __CFADD__(v75, v53);
          v75 += v53;
          HIDWORD(v74) += (HIDWORD(v47) >> 20) + v58;
          v59 = MinecraftScreenModel::getLevelSource(v77);
          v31 = v49;
          v37 = v46;
          (*(void (__fastcall **)(int *))(*(_DWORD *)v59 + 64))(&v78);
          v60 = *(_DWORD *)v35;
          v61 = *(_DWORD *)(v78 - 12);
          v62 = *(_DWORD *)(*(_DWORD *)v35 - 12);
          v90 = v78;
          v91 = v61;
          v92 = v60;
          v93 = v62;
          Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v94, (int)&v90, 2);
          sub_21E94B4((void **)&v79, (const char *)&v95);
          v63 = ExternalFileLevelStorage::isLevelCloudSave(&v79);
          LocalWorldInfo::setCloudStorage((LocalWorldInfo *)(v70 - 96), v63);
          v64 = (void *)(v79 - 12);
          if ( (int *)(v79 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v79 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
            }
            else
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j__ZdlPv_9(v64);
          v65 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v40 = (unsigned int *)(v78 - 4);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j__ZdlPv_9(v65);
      v35 += 64;
    while ( v35 != v34 );
  if ( a5 && *v31 >> 32 != (unsigned int)*v31 )
    v66 = (MinecraftEventing *)MinecraftGame::getEventing(*((MinecraftGame **)v77 + 3));
    MinecraftEventing::fireEventWorldFilesListed(
      v66,
      v72,
      (unsigned int)(-1431655765 * ((signed int)((*v31 >> 32) - *v31) >> 5)),
      __PAIR__(HIDWORD(v74), v75),
      __PAIR__(v73, v36),
      __PAIR__(v72, (unsigned int)v74));
  *((_BYTE *)v77 + 112) = 1;
LABEL_80:
  std::_Rb_tree<std::string,std::pair<std::string const,LevelSummary>,std::_Select1st<std::pair<std::string const,LevelSummary>>,std::less<std::string>,std::allocator<std::pair<std::string const,LevelSummary>>>::_M_erase(
    (int)&v81,
    v83);
  v68 = (LevelSummary *)v88;
  v67 = (LevelSummary *)ptr;
      v67 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v67) + 64);
    while ( v68 != v67 );
    v67 = (LevelSummary *)ptr;
  if ( v67 )
    operator delete((void *)v67);
  result = (RakNet *)(_stack_chk_guard - v96);
  if ( _stack_chk_guard != v96 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PlayScreenModel::startNetworkWorld(int a1, NetworkWorldInfo *a2, int a3)
{
  PlayScreenModel::startNetworkWorld(a1, a2, a3);
}


    && (v7 = **a2, PlayScreenModel::getWorldCount(*(_DWORD *)(**a2 + 432), 2, 0) > a4)
{
     || !strcmp(v8, "friends_realms")
     && (v4 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v7 + 432)), v4 >= 0)) )
  {
    v9 = PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v7 + 432), v4);
    RealmsWorldInfo::getOwnerName(v6, v9);
  }
  else
    *(_DWORD *)v6 = &unk_28898CC;
}


int __fastcall PlayScreenModel::_hasEditionMismatch(PlayScreenModel *this, LocalWorldInfo *a2)
{
  char *v2; // r0@1

  v2 = LocalWorldInfo::getLevelSummary(a2);
  return LevelSummary::isEditionCompatible((LevelSummary *)v2) ^ 1;
}


void __fastcall PlayScreenModel::startLocalWorld(PlayScreenModel *a1, LocalWorldInfo *a2)
{
  LocalWorldInfo *v2; // r5@1
  PlayScreenModel *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *v10; // r0@11
  int *v11; // r0@17
  unsigned int *v12; // r2@22
  signed int v13; // r1@24
  unsigned int *v14; // r2@30
  signed int v15; // r1@32
  int v16; // [sp+0h] [bp-48h]@17
  int v17; // [sp+10h] [bp-38h]@17
  int v18; // [sp+18h] [bp-30h]@11
  int v19; // [sp+20h] [bp-28h]@11
  int v20; // [sp+28h] [bp-20h]@5
  int v21; // [sp+30h] [bp-18h]@5

  v2 = a2;
  v3 = a1;
  v4 = LocalWorldInfo::getLevelSummary(a2);
  if ( LevelSummary::isEditionCompatible((LevelSummary *)v4) )
  {
    v5 = LocalWorldInfo::getLevelSummary(v2);
    if ( LevelSummary::isNetworkCompatible((LevelSummary *)v5) )
    {
      if ( PlayScreenModel::_passLicenseCheck(v3, v2) )
      {
        j_j_j__ZN15PlayScreenModel16_startLocalWorldER14LocalWorldInfo(v3, v2);
        return;
      }
      v11 = (int *)LocalWorldInfo::getLevelSummary(v2);
      sub_21E8AF4(&v17, v11);
      mce::UUID::fromString((int)&v16, &v17);
      MainMenuScreenModel::navigateToPurchaseOfferScreen(
        (int)v3,
        (int)&v16,
        3,
        (int *)&CatalogContentType::DurableOffer);
      v7 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          goto LABEL_27;
        }
LABEL_26:
        v9 = (*v8)--;
LABEL_27:
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
    }
    else
      sub_21E94B4((void **)&v19, "disconnectionScreen.cantConnect");
      sub_21E94B4((void **)&v18, "disconnectionScreen.futureVersion");
      MinecraftScreenModel::navigateToDisconnectScreen((int)v3, &v19, &v18);
      v10 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v18 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v7 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v19 - 4);
        goto LABEL_26;
  }
  else
    sub_21E94B4((void **)&v21, "disconnectionScreen.cantConnect");
    sub_21E94B4((void **)&v20, "disconnectionScreen.editionMismatch");
    MinecraftScreenModel::navigateToDisconnectScreen((int)v3, &v21, &v20);
    v6 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v21 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_27;
      goto LABEL_26;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v1 + 432), 1, 4) < 1 )
{
    result = 0;
  }
  else
  {
    v2 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 0) == 1 )
      v2 = MinecraftScreenModel::isEduMode(*(MinecraftScreenModel **)(v1 + 380)) ^ 1;
    result = v2;
  return result;
}


void __fastcall PlayScreenModel::navigateToAddEditExternalScreen(PlayScreenModel *this, int a2)
{
  PlayScreenModel *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@2
  __int64 v5; // kr00_8@5
  int v6; // r4@5
  unsigned int *v7; // r1@6
  unsigned int v8; // r0@8
  unsigned int *v9; // r5@12
  unsigned int v10; // r0@14
  int v11; // [sp+0h] [bp-18h]@5
  int v12; // [sp+4h] [bp-14h]@5

  v2 = this;
  v3 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v4 + 156))() == 1 )
  {
    v5 = *(_QWORD *)((char *)v2 + 20);
    SceneFactory::createAddEditExternalServerScreen((SceneFactory *)&v11, SHIDWORD(v5), v3);
    SceneStack::pushScreen(v5, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


int __fastcall PlayScreenModel::supportsLegacyWorlds(PlayScreenModel *this)
{
  return 0;
}


char *__fastcall PlayScreenModel::convertLegacyWorld(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  Minecraft *v6; // r0@1
  int v7; // r0@1
  void *v8; // r0@1
  __int64 v9; // r1@1
  int v10; // r0@3
  void *v11; // r0@5
  void *v12; // r0@6
  char *result; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  int v18; // [sp+0h] [bp-450h]@3
  int v19; // [sp+4h] [bp-44Ch]@3
  void *v20; // [sp+8h] [bp-448h]@1
  __int64 v21; // [sp+10h] [bp-440h]@1
  int v22; // [sp+18h] [bp-438h]@1
  int v23; // [sp+1Ch] [bp-434h]@1
  int v24; // [sp+20h] [bp-430h]@1
  int v25; // [sp+24h] [bp-42Ch]@1
  char v26; // [sp+30h] [bp-420h]@1
  int v27; // [sp+34h] [bp-41Ch]@1
  RakNet *v28; // [sp+438h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v28 = _stack_chk_guard;
  v6 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a1 + 16));
  v7 = Minecraft::getLevelSource(v6);
  (*(void (__fastcall **)(int *))(*(_DWORD *)v7 + 64))(&v25);
  v22 = v25;
  v23 = *(_DWORD *)(v25 - 12);
  v8 = operator new(1u);
  LODWORD(v9) = sub_12E59D6;
  v20 = v8;
  HIDWORD(v9) = sub_12E59CC;
  v21 = v9;
  Core::FileSystem::createUniquePathFromSeed((int)&v26, (__int64 *)&v22, (int)&v20);
  sub_21E94B4((void **)&v24, (const char *)&v27);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  std::make_unique<Legacy::ConvertWorldProcessRequest,LegacyWorldInfo &,std::function<void ()(Legacy::ImportStatus,float,std::unique_ptr<ImportResult,std::default_delete<ImportResult>>)> &,std::string &>(
    &v18,
    v5,
    v4,
    &v24);
  v10 = v18;
  v18 = 0;
  v19 = v10;
  PlayScreenModel::_processLegacyWorld(v3, &v19);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v24 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  result = (char *)(_stack_chk_guard - v28);
  if ( _stack_chk_guard != v28 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PlayScreenModel::fetchRealmsWorldsForPlayScreen(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  signed int v2; // r0@1
  bool v3; // zf@1
  unsigned int *v4; // r0@6
  unsigned int v5; // r1@8
  void *v6; // r5@11
  unsigned int *v7; // r0@12
  unsigned int v8; // r1@14
  __int64 v9; // r0@17
  void *v10; // r0@19
  unsigned int *v11; // r2@21
  unsigned int v12; // r1@23
  int v13; // r0@28
  unsigned int *v14; // r2@29
  unsigned int v15; // r1@31
  void *v16; // r0@36
  unsigned int *v17; // r2@38
  signed int v18; // r1@40
  unsigned int *v19; // r2@42
  signed int v20; // r1@44
  int v21; // [sp+4h] [bp-3Ch]@5
  int v22; // [sp+8h] [bp-38h]@5
  int v23; // [sp+Ch] [bp-34h]@11
  void *v24; // [sp+10h] [bp-30h]@17
  void (*v25)(void); // [sp+18h] [bp-28h]@11
  int v26; // [sp+20h] [bp-20h]@5
  int v27; // [sp+24h] [bp-1Ch]@5
  int v28; // [sp+28h] [bp-18h]@5

  v1 = this;
  v2 = MinecraftScreenModel::isRealmsEnabled(this);
  v3 = v2 == 1;
  if ( v2 == 1 )
    v3 = *((_BYTE *)v1 + 298) == 0;
  if ( v3 )
  {
    *((_BYTE *)v1 + 298) = 1;
    MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v28, (int)v1);
    PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v26, (int)v1);
    v21 = v26;
    v22 = v27;
    if ( v27 )
    {
      v4 = (unsigned int *)(v27 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
      }
      else
        ++*v4;
    }
    sub_21E8AF4(&v23, &v28);
    v25 = 0;
    v6 = operator new(0xCu);
    *(_DWORD *)v6 = v21;
    *((_DWORD *)v6 + 1) = v22;
    if ( v22 )
      v7 = (unsigned int *)(v22 + 8);
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        ++*v7;
    sub_21E8AF4((int *)v6 + 2, &v23);
    LODWORD(v9) = sub_12EC298;
    v24 = v6;
    HIDWORD(v9) = sub_12EBDFC;
    *(_QWORD *)&v25 = v9;
    MinecraftScreenModel::fetchRealmsWorlds((int)v1, (int)&v24);
    if ( v25 )
      v25();
    v10 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v23 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
      v11 = (unsigned int *)(v22 + 8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (**)(void))(*(_DWORD *)v22 + 12))();
    v13 = v27;
      v14 = (unsigned int *)(v27 + 8);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (**)(void))(*(_DWORD *)v13 + 12))();
    v16 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v28 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  }
}


int __fastcall PlayScreenModel::uploadLegacyWorld(int a1, int *a2)
{
  int v2; // r2@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-Ch]@1

  v2 = *a2;
  *a2 = 0;
  v4 = v2;
  PlayScreenModel::_processLegacyWorld(a1, &v4);
  result = v4;
  if ( v4 )
    result = (*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v6 + 432), 2, 0) > a3 )
{
    v7 = *v4;
    if ( strcmp(*v4, "personal_realms") )
    {
      if ( strcmp(v7, "friends_realms") )
        return 0;
      v3 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v6 + 432));
      if ( v3 < 0 )
    }
    v8 = (WorldInfo *)PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v6 + 432), v3);
    v5 = 0;
    if ( WorldInfo::getStatus(v8) == 2 )
      v5 = 1;
  }
  return v5;
}


int *__fastcall PlayScreenModel::updateWorldTimestamp(PlayScreenModel *this, NetworkWorldInfo *a2)
{
  PlayScreenModel *v2; // r4@1
  char *v3; // r0@1
  int *result; // r0@1
  int *v5; // r5@1
  ExternalServerFile *v6; // r0@2

  v2 = this;
  v3 = NetworkWorldInfo::getExternalServer(a2);
  result = (int *)ExternalServer::getId((ExternalServer *)v3);
  v5 = result;
  if ( (signed int)result >= 0 )
  {
    v6 = (ExternalServerFile *)MinecraftGame::getExternalServer(*((MinecraftGame **)v2 + 3));
    result = j_j_j__ZN18ExternalServerFile15updateTimeStampEi(v6, (int)v5);
  }
  return result;
}


    if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v3 + 432), 1, 4)
{
    {
      v4 = v2;
    }
  }
  v5 = s1 - 12;
  if ( (int *)(s1 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = PlayScreenModel::getNetworkWorldAtIndex(*(_DWORD *)(v3 + 432), v4, 4);
  if ( v6 )
    NetworkWorldInfo::NetworkWorldInfo((int)&v14, v6);
    NetworkWorldInfo::NetworkWorldInfo((int)&v13, (int)&v14);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v14);
  else
    NetworkWorldInfo::NetworkWorldInfo((int)&v13);
  if ( WorldInfo::isValid((WorldInfo *)&v13) == 1 )
    v7 = NetworkWorldInfo::getThirdPartyServer((NetworkWorldInfo *)&v13);
    v8 = *(_DWORD *)(*(_DWORD *)ThirdPartyServer::getImagePath((ThirdPartyServer *)v7) - 12) != 0;
    v8 = 0;
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v13);
  if ( _stack_chk_guard != v15 )
    _stack_chk_fail(_stack_chk_guard - v15);
  return v8;
}


void __fastcall PlayScreenModel::startNetworkWorld(int a1, NetworkWorldInfo *a2, int a3)
{
  NetworkWorldInfo *v3; // r4@1
  PlayScreenModel *v4; // r5@1
  int v5; // r6@1
  ClientInstance *v6; // r7@1
  char *v7; // r0@1

  v3 = a2;
  v4 = (PlayScreenModel *)a1;
  v5 = a3;
  v6 = *(ClientInstance **)(a1 + 16);
  v7 = NetworkWorldInfo::getRemoteServer(a2);
  ClientInstance::setServerPingTime(v6, *((float *)v7 + 41));
  switch ( v5 )
  {
    case 1:
      j_j_j__ZN15PlayScreenModel24_startRemoteNetworkWorldER16NetworkWorldInfo(v4, v3);
      break;
    case 2:
      j_j_j__ZN15PlayScreenModel26_startExternalNetworkWorldER16NetworkWorldInfo(v4, v3);
    case 3:
      j_j_j__ZN15PlayScreenModel24_startXBLiveNetworkWorldER16NetworkWorldInfo(v4, v3);
    case 4:
      j_j_j__ZN15PlayScreenModel20_start3PNetworkWorldER16NetworkWorldInfo(v4, v3);
    default:
      return;
  }
}


void __fastcall PlayScreenModel::navigateToEditWorldScreen(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r4@1
  __int64 v5; // kr00_8@2
  LocalWorldInfo *v6; // r5@3
  int *v7; // r8@4
  unsigned int *v8; // r0@5
  unsigned int v9; // r1@7
  __int64 v10; // kr08_8@9
  int *v11; // r0@9
  int v12; // r4@9
  unsigned int *v13; // r1@10
  unsigned int v14; // r0@12
  void (__fastcall *v15)(int *, int, signed int); // r3@15
  void (__fastcall *v16)(_DWORD, _DWORD, _DWORD); // r6@15
  void *v17; // r0@17
  int v18; // r12@17
  int v19; // r1@17
  unsigned int *v20; // r1@18
  unsigned int v21; // r2@20
  unsigned int *v22; // r5@24
  unsigned int v23; // r0@26
  __int64 v24; // r2@29
  __int64 v25; // kr10_8@29
  int v26; // r1@29
  int v27; // r0@33
  unsigned int *v28; // r2@34
  unsigned int v29; // r1@36
  int v30; // r0@41
  unsigned int *v31; // r2@42
  unsigned int v32; // r1@44
  void (__fastcall *v33)(int); // r1@48
  char v34; // [sp+4h] [bp-5Ch]@9
  int v35; // [sp+8h] [bp-58h]@9
  int v36; // [sp+Ch] [bp-54h]@4
  int v37; // [sp+10h] [bp-50h]@4
  LocalWorldInfo *v38; // [sp+14h] [bp-4Ch]@15
  int v39; // [sp+18h] [bp-48h]@16
  int v40; // [sp+1Ch] [bp-44h]@29
  void (__fastcall *v41)(_DWORD, _DWORD, _DWORD); // [sp+20h] [bp-40h]@15
  int v42; // [sp+24h] [bp-3Ch]@16
  void *v43; // [sp+28h] [bp-38h]@29
  void (*v44)(void); // [sp+30h] [bp-30h]@17
  char *(__fastcall *v45)(int *, int); // [sp+34h] [bp-2Ch]@29
  int v46; // [sp+38h] [bp-28h]@4
  int v47; // [sp+3Ch] [bp-24h]@4

  v3 = a3;
  v4 = a1;
  if ( a2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 116);
    if ( -1431655765 * ((HIDWORD(v5) - (signed int)v5) >> 5) > a2 )
    {
      v6 = (LocalWorldInfo *)(v5 + 96 * a2);
      LocalWorldInfo::markAsDirty(v6);
      if ( LocalWorldInfo::hasCloudStorage(v6) == 1 )
      {
        PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v46, v4);
        v7 = (int *)LocalWorldInfo::getLevelSummary(v6);
        v36 = v46;
        v37 = v47;
        if ( v47 )
        {
          v8 = (unsigned int *)(v47 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 + 1, v8) );
          }
          else
            ++*v8;
        }
        v38 = v6;
        v41 = 0;
        v15 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
        v16 = 0;
        if ( v15 )
          v15(&v39, v3, 2);
          v42 = *(_DWORD *)(v3 + 12);
          v16 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
          v41 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
        v44 = 0;
        v17 = operator new(0x1Cu);
        *(_DWORD *)v17 = v36;
        v19 = v37;
        *((_DWORD *)v17 + 1) = v37;
        if ( v19 )
          v20 = (unsigned int *)(v19 + 8);
              v21 = __ldrex(v20);
            while ( __strex(v21 + 1, v20) );
            v18 = *((_DWORD *)v17 + 6);
            v16 = v41;
            ++*v20;
        *((_DWORD *)v17 + 2) = v38;
        v24 = *(_QWORD *)&v39;
        v25 = *(_QWORD *)((char *)v17 + 12);
        v39 = *(_QWORD *)((char *)v17 + 12);
        v40 = HIDWORD(v25);
        *(_QWORD *)((char *)v17 + 12) = v24;
        v26 = v42;
        *((_DWORD *)v17 + 5) = v16;
        v42 = v18;
        *((_DWORD *)v17 + 6) = v26;
        v43 = v17;
        v44 = (void (*)(void))sub_12E5894;
        v45 = sub_12E5444;
        PlayScreenModel::navigateToWorldSyncModalScreen(v4, v7, (int)&v43);
        if ( v44 )
          v44();
        if ( v41 )
          v41(&v39, &v39, 3);
        v27 = v37;
        if ( v37 )
          v28 = (unsigned int *)(v37 + 8);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 == 1 )
            (*(void (**)(void))(*(_DWORD *)v27 + 12))();
        v30 = v47;
          v31 = (unsigned int *)(v47 + 8);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 == 1 )
            v33 = *(void (__fastcall **)(int))(*(_DWORD *)v30 + 12);
LABEL_52:
            v33(v30);
            return;
      }
      else
        v10 = *(_QWORD *)(v4 + 20);
        v11 = (int *)LocalWorldInfo::getLevelSummary(v6);
        SceneFactory::createEditWorldScreen((SceneFactory *)&v34, (const LevelSummary *)HIDWORD(v10), v11);
        SceneStack::pushScreen(v10, (int)&v34, 0);
        v12 = v35;
        if ( v35 )
          v13 = (unsigned int *)(v35 + 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 == 1 )
            v22 = (unsigned int *)(v12 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            if ( &pthread_create )
            {
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
            }
            else
              v23 = (*v22)--;
            if ( v23 == 1 )
              v33 = *(void (__fastcall **)(int))(*(_DWORD *)v12 + 12);
              v30 = v12;
              goto LABEL_52;
    }
  }
}


int __fastcall PlayScreenModel::_populateLegacyWorlds(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  int result; // r0@1
  LocalWorldInfo *v3; // r5@2 OVERLAPPED
  LocalWorldInfo *v4; // r6@2 OVERLAPPED

  v1 = this;
  result = *((_DWORD *)this + 88);
  if ( result )
  {
    Legacy::WorldImporter::populateWorldList(result, (int)v1 + 200);
    for ( *(_QWORD *)&v3 = *((_QWORD *)v1 + 25); v4 != v3; v3 = (LocalWorldInfo *)((char *)v3 + 104) )
      LocalWorldInfo::getLevelSummary(v3);
    result = 1;
    *((_BYTE *)v1 + 112) = 1;
  }
  return result;
}


int __fastcall PlayScreenModel::navigateToWorldSyncModalScreen(int a1, int *a2, int a3)
{
  int v3; // r10@1
  int *v4; // r7@1
  int v5; // r5@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  void (__fastcall *v8)(int *, int, signed int); // r3@7
  void *v9; // r8@9
  unsigned int *v10; // r0@10
  unsigned int v11; // r1@12
  _DWORD *v12; // r0@17
  int v13; // r7@17
  int v14; // r0@17
  unsigned int *v15; // r0@18
  unsigned int v16; // r1@20
  __int64 v17; // r0@23
  int v18; // r2@23
  void *v19; // r0@29
  int v20; // r0@30
  unsigned int *v21; // r2@31
  unsigned int v22; // r1@33
  __int64 v23; // kr00_8@38
  int *v24; // r0@38
  int v25; // r4@38
  unsigned int *v26; // r1@39
  unsigned int v27; // r0@41
  unsigned int *v28; // r5@45
  unsigned int v29; // r0@47
  void *v30; // r0@52
  void *v31; // r0@55
  void *v32; // r0@58
  int v33; // r0@59
  unsigned int *v34; // r2@60
  unsigned int v35; // r1@62
  int result; // r0@67
  unsigned int *v37; // r2@68
  unsigned int v38; // r1@70
  unsigned int *v39; // r2@76
  signed int v40; // r1@78
  unsigned int *v41; // r2@80
  signed int v42; // r1@82
  unsigned int *v43; // r2@84
  signed int v44; // r1@86
  unsigned int *v45; // r2@88
  signed int v46; // r1@90
  int v47; // [sp+14h] [bp-9Ch]@38
  void *v48; // [sp+18h] [bp-98h]@38
  int v49; // [sp+20h] [bp-90h]@38
  char v50; // [sp+24h] [bp-8Ch]@38
  int v51; // [sp+28h] [bp-88h]@38
  int v52; // [sp+2Ch] [bp-84h]@1
  int v53; // [sp+30h] [bp-80h]@1
  int v54; // [sp+34h] [bp-7Ch]@7
  int v55; // [sp+38h] [bp-78h]@8
  void (__fastcall *v56)(int *, int *, signed int); // [sp+40h] [bp-70h]@7
  int v57; // [sp+44h] [bp-6Ch]@8
  int v58; // [sp+48h] [bp-68h]@1
  int v59; // [sp+4Ch] [bp-64h]@1
  char v60; // [sp+50h] [bp-60h]@23
  void (*v61)(void); // [sp+58h] [bp-58h]@23
  int v62; // [sp+60h] [bp-50h]@9
  int v63; // [sp+64h] [bp-4Ch]@9
  int v64; // [sp+68h] [bp-48h]@15
  int v65; // [sp+6Ch] [bp-44h]@16
  void (__fastcall *v66)(int *, int *, signed int); // [sp+74h] [bp-3Ch]@15
  int v67; // [sp+78h] [bp-38h]@16
  int v68; // [sp+7Ch] [bp-34h]@23
  void (*v69)(void); // [sp+84h] [bp-2Ch]@17
  unsigned int (__fastcall *v70)(_DWORD *, int *, int); // [sp+88h] [bp-28h]@23

  v3 = a1;
  v4 = a2;
  v5 = a3;
  PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v58, a1);
  v52 = v58;
  v53 = v59;
  if ( v59 )
  {
    v6 = (unsigned int *)(v59 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  sub_21E8AF4(&v54, v4);
  v56 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v8 )
    v8(&v55, v5, 2);
    v57 = *(_DWORD *)(v5 + 12);
    v56 = *(void (__fastcall **)(int *, int *, signed int))(v5 + 8);
  v9 = operator new(0x60u);
  v62 = v52;
  v63 = v53;
  if ( v53 )
    v10 = (unsigned int *)(v53 + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  sub_21E8AF4(&v64, &v54);
  v66 = 0;
  if ( v56 )
    v56(&v65, &v55, 2);
    v67 = v57;
    v66 = v56;
  v69 = 0;
  v12 = operator new(0x1Cu);
  v13 = (int)v12;
  *v12 = v62;
  v14 = v63;
  *(_DWORD *)(v13 + 4) = v63;
  if ( v14 )
    v15 = (unsigned int *)(v14 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  sub_21E8AF4((int *)(v13 + 8), &v64);
  v17 = *(_QWORD *)&v65;
  *(_QWORD *)&v65 = *(_QWORD *)(v13 + 12);
  *(_QWORD *)(v13 + 12) = v17;
  *(_DWORD *)(v13 + 20) = v66;
  LODWORD(v17) = *(_DWORD *)(v13 + 24);
  v18 = v67;
  v67 = v17;
  *(_DWORD *)(v13 + 24) = v18;
  v68 = v13;
  v69 = (void (*)(void))sub_12E4338;
  v70 = sub_12E3910;
  v61 = 0;
  RemoteStorageProviderSyncProgressHandler::RemoteStorageProviderSyncProgressHandler((int)v9, (int)&v68, (int)&v60);
  if ( v61 )
    v61();
  if ( v69 )
    v69();
  if ( v66 )
    v66(&v65, &v65, 3);
  v19 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v64 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v63;
  if ( v63 )
    v21 = (unsigned int *)(v63 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  v23 = *(_QWORD *)(v3 + 20);
  sub_21E94B4((void **)&v49, "remote_storage_sync");
  v48 = v9;
  v24 = (int *)sub_21E94B4((void **)&v47, (const char *)&unk_257BC67);
  SceneFactory::createModalProgressScreen(
    (int)&v50,
    SHIDWORD(v23),
    (int)&v49,
    COERCE_FLOAT(&v48),
    0,
    1,
    v24,
    1065353216);
  SceneStack::pushScreen(v23, (int)&v50, 0);
  v25 = v51;
  if ( v51 )
    v26 = (unsigned int *)(v51 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  v30 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v47 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  if ( v48 )
    (*(void (**)(void))(*(_DWORD *)v48 + 4))();
  v48 = 0;
  v31 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v49 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
    ((void (*)(void))v56)();
  v32 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v54 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = v53;
    v34 = (unsigned int *)(v53 + 8);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      (*(void (**)(void))(*(_DWORD *)v33 + 12))();
  result = v59;
    v37 = (unsigned int *)(v59 + 8);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


signed int __fastcall PlayScreenModel::areExternalAndRemoteServerSame(int a1, ExternalServer *a2, int a3)
{
  ExternalServer *v3; // r4@1
  char *v4; // r0@1
  int *v5; // r0@1
  int v6; // r0@1
  unsigned int v7; // r0@1
  char *v8; // r6@1
  signed int v9; // r4@1
  char *v10; // r5@1
  size_t v11; // r2@1
  char *v12; // r0@5
  unsigned int *v14; // r1@9
  signed int v15; // r0@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  void *s2; // [sp+0h] [bp-30h]@1
  void *s1; // [sp+8h] [bp-28h]@1
  char s; // [sp+10h] [bp-20h]@1
  RakNet *v21; // [sp+1Ch] [bp-14h]@1

  v3 = a2;
  v21 = _stack_chk_guard;
  v4 = RakNet::SystemAddress::ToString((RakNet::SystemAddress *)(a3 + 28), 1, 124);
  sub_21E94B4(&s1, v4);
  v5 = (int *)ExternalServer::getIP(v3);
  sub_21E8AF4((int *)&s2, v5);
  sub_21E7408((const void **)&s2, "|", 1u);
  v6 = ExternalServer::getPort(v3);
  sprintf(&s, "%d", v6);
  v7 = strlen(&s);
  sub_21E7408((const void **)&s2, &s, v7);
  v8 = (char *)s2;
  v9 = 0;
  v10 = (char *)s2 - 12;
  v11 = *((_DWORD *)s1 - 3);
  if ( v11 == *((_DWORD *)s2 - 3) && !memcmp(s1, s2, v11) )
    v9 = 1;
  if ( (int *)v10 != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v8 - 4);
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
  v12 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)((char *)s1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(_stack_chk_guard - v21);
  return v9;
}


void __fastcall PlayScreenModel::_startXBLiveNetworkWorld(PlayScreenModel *this, NetworkWorldInfo *a2)
{
  PlayScreenModel::_startXBLiveNetworkWorld(this, a2);
}


int __fastcall PlayScreenModel::setForceUpdate(PlayScreenModel *this)
{
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 84) = 3;
  *((_BYTE *)this + 320) = 0;
  *((_DWORD *)this + 86) = 0;
  return _aeabi_memclr8((char *)this + 216, 56);
}


int __fastcall PlayScreenModel::getLocalWorldAtIndex(PlayScreenModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *(_QWORD *)((char *)this + 116), -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 5) <= a2) )
    result = 0;
  else
    result = v2 + 96 * a2;
  return result;
}


PlayScreenModel::LiveServer *__fastcall PlayScreenModel::LiveServer::LiveServer(PlayScreenModel::LiveServer *this, const Social::MultiplayerGameInfo *a2)
{
  PlayScreenModel::LiveServer *v2; // r4@1
  const Social::MultiplayerGameInfo *v3; // r6@1
  Social::MultiplayerGameInfo *v4; // r5@1

  v2 = this;
  v3 = a2;
  v4 = (Social::MultiplayerGameInfo *)operator new(0x58u);
  Social::MultiplayerGameInfo::MultiplayerGameInfo(v4, v3);
  *(_DWORD *)v2 = v4;
  *((_BYTE *)v2 + 4) = 1;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_BYTE *)v2 + 16) = 0;
  return v2;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v6 + 432), 2, 0) > a3 )
{
    v7 = *v4;
    if ( strcmp(*v4, "personal_realms") )
    {
      if ( strcmp(v7, "friends_realms") )
        return 0;
      v3 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v6 + 432));
      if ( v3 < 0 )
    }
    v8 = (RealmsWorldInfo *)PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v6 + 432), v3);
    v5 = RealmsWorldInfo::isOwner(v8);
  }
  return v5;
}


void __fastcall PlayScreenModel::_updateOwnerInfo(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r6@2
  int v4; // r11@2
  char *v5; // r5@8
  _DWORD *v6; // r0@8
  char *v7; // r7@8
  size_t v8; // r2@8
  signed int v9; // r9@9
  unsigned int *v10; // r1@18
  signed int v11; // r0@20
  _DWORD *v12; // r5@25
  _DWORD *v13; // r6@25
  __int64 v14; // kr10_8@26
  unsigned int *v15; // r0@27
  unsigned int v16; // r1@29
  _QWORD *v17; // r0@32
  unsigned int *v18; // r1@33
  unsigned int v19; // r2@35
  __int64 v20; // r1@38
  unsigned int *v21; // r1@41
  unsigned int v22; // r0@43
  int v23; // r0@48
  unsigned int *v24; // r2@49
  unsigned int v25; // r1@51
  unsigned int *v26; // r2@59
  signed int v27; // r1@61
  int *v28; // r0@67
  _QWORD *v29; // [sp+8h] [bp-50h]@38
  void (*v30)(void); // [sp+10h] [bp-48h]@32
  char v31; // [sp+18h] [bp-40h]@26
  int v32; // [sp+1Ch] [bp-3Ch]@26
  void *s2; // [sp+20h] [bp-38h]@8
  _DWORD *v34; // [sp+24h] [bp-34h]@2
  _DWORD *v35; // [sp+28h] [bp-30h]@2
  int v36; // [sp+2Ch] [bp-2Ch]@2

  v1 = this;
  if ( MinecraftScreenModel::isRealmsEnabled(this) == 1 )
  {
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v4 = *((_QWORD *)v1 + 34) >> 32;
    v3 = *((_QWORD *)v1 + 34);
    if ( v3 != v4 )
    {
      LODWORD(v2) = 0;
      while ( 1 )
      {
        if ( (_DWORD)v2 == HIDWORD(v2) )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)&v34,
            (int *)(v3 + 20));
        }
        else
          sub_21E8AF4((int *)v2, (int *)(v3 + 20));
          ++v35;
        MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&s2, (int)v1);
        v5 = (char *)s2;
        v6 = *(_DWORD **)(v3 + 20);
        v7 = (char *)s2 - 12;
        v8 = *(v6 - 3);
        if ( v8 == *((_DWORD *)s2 - 3) )
          v9 = 0;
          if ( !memcmp(v6, s2, v8) )
            v9 = 1;
        if ( (int *)v7 != &dword_28898C0 )
          v10 = (unsigned int *)(v5 - 4);
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
            j_j_j_j__ZdlPv_9(v7);
        v3 += 72;
        if ( v9 == 1 )
          *((_BYTE *)v1 + 297) = 1;
        if ( v3 == v4 )
          break;
        v2 = *(_QWORD *)&v35;
      }
      v12 = v35;
      v13 = v34;
      if ( v35 != v34 )
        PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v31, (int)v1);
        v14 = *(_QWORD *)&v31;
        if ( v32 )
          v15 = (unsigned int *)(v32 + 8);
              v16 = __ldrex(v15);
            while ( __strex(v16 + 1, v15) );
            ++*v15;
        v30 = 0;
        v17 = operator new(8u);
        *v17 = v14;
        if ( HIDWORD(v14) )
          v18 = (unsigned int *)(HIDWORD(v14) + 8);
              v19 = __ldrex(v18);
            while ( __strex(v19 + 1, v18) );
            ++*v18;
        LODWORD(v20) = sub_12EBD58;
        v29 = v17;
        HIDWORD(v20) = sub_12EBA30;
        *(_QWORD *)&v30 = v20;
        MinecraftScreenModel::getProfiles((int)v1, (unsigned int)&v34, (int)&v29);
        if ( v30 )
          v30();
          v21 = (unsigned int *)(HIDWORD(v14) + 8);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 12))(HIDWORD(v14));
        v23 = v32;
          v24 = (unsigned int *)(v32 + 8);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 == 1 )
            (*(void (**)(void))(*(_DWORD *)v23 + 12))();
        v12 = v35;
        v13 = v34;
      if ( v13 != v12 )
        do
          v28 = (int *)(*v13 - 12);
          if ( v28 != &dword_28898C0 )
            v26 = (unsigned int *)(*v13 - 4);
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
          ++v13;
        while ( v13 != v12 );
        v12 = v34;
      if ( v12 )
        operator delete(v12);
    }
  }
}


  if ( v3 != PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v2 + 432)) )
{
  if ( MinecraftScreenModel::isLiveMultiplayerAllowed(*(MinecraftScreenModel **)(v2 + 432)) == 1
    && MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v2 + 432)) == 1
    && !MinecraftScreenModel::isRealmsDisabledForBeta(*(MinecraftScreenModel **)(v2 + 432))
    && *(_BYTE *)(v2 + 456) )
  {
    v1 = 0;
    if ( PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v2 + 432)) == 1
      && !PlayScreenModel::getRealmsStatus(*(PlayScreenModel **)(v2 + 432)) )
    {
      v1 = 1;
    }
    return v1;
  }
  return 0;
}


void __fastcall PlayScreenModel::_updateOwnerInfo(PlayScreenModel *this)
{
  PlayScreenModel::_updateOwnerInfo(this);
}


PlayScreenModel *__fastcall PlayScreenModel::~PlayScreenModel(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r11@1
  CallbackToken *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@3
  Realms::World *v5; // r0@5
  Realms::World *v6; // r4@5
  int v7; // r4@10
  int v8; // r5@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  int v11; // r1@20
  void *v12; // r0@20
  int v13; // r5@25
  int v14; // r7@25
  int v15; // r4@26
  unsigned int *v16; // r1@27
  unsigned int v17; // r0@29
  unsigned int *v18; // r6@33
  unsigned int v19; // r0@35
  int v20; // r5@44 OVERLAPPED
  int v21; // r6@44 OVERLAPPED
  unsigned int *v22; // r2@46
  signed int v23; // r1@48
  unsigned int *v24; // r2@50
  signed int v25; // r1@52
  int v26; // r1@62
  void *v27; // r0@62
  int v28; // r1@63
  void *v29; // r0@63
  NetworkWorldInfo *v30; // r0@68
  NetworkWorldInfo *v31; // r4@68
  NetworkWorldInfo *v32; // r0@73
  NetworkWorldInfo *v33; // r4@73
  NetworkWorldInfo *v34; // r0@78
  NetworkWorldInfo *v35; // r4@78
  WorldTemplateInfo *v36; // r0@83
  WorldTemplateInfo *v37; // r4@83
  LocalWorldInfo *v38; // r0@88
  LocalWorldInfo *v39; // r4@88

  v1 = this;
  v2 = (PlayScreenModel *)((char *)this + 356);
  *(_DWORD *)this = &off_26E50B8;
  CallbackToken::cancelCallback((PlayScreenModel *)((char *)this + 356));
  CallbackToken::cancelCallback((PlayScreenModel *)((char *)v1 + 364));
  MinecraftScreenModel::abortAllRealmsRequests(v1);
  CallbackToken::~CallbackToken((PlayScreenModel *)((char *)v1 + 364));
  CallbackToken::~CallbackToken(v2);
  v3 = *((_DWORD *)v1 + 88);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 88) = 0;
  v4 = *((_DWORD *)v1 + 87);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 87) = 0;
  v6 = (Realms::World *)(*((_QWORD *)v1 + 34) >> 32);
  v5 = (Realms::World *)*((_QWORD *)v1 + 34);
  if ( v5 != v6 )
  {
    do
      v5 = (Realms::World *)((char *)Realms::World::~World(v5) + 72);
    while ( v6 != v5 );
    v5 = (Realms::World *)*((_DWORD *)v1 + 68);
  }
  if ( v5 )
    operator delete((void *)v5);
  v7 = *((_QWORD *)v1 + 25) >> 32;
  v8 = *((_QWORD *)v1 + 25);
  if ( v8 != v7 )
    {
      v11 = *(_DWORD *)(v8 + 96);
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)v8);
      v8 += 104;
    }
    while ( v8 != v7 );
    v8 = *((_DWORD *)v1 + 50);
  if ( v8 )
    operator delete((void *)v8);
  v14 = *(_QWORD *)((char *)v1 + 188) >> 32;
  v13 = *(_QWORD *)((char *)v1 + 188);
  if ( v13 != v14 )
      v15 = *(_DWORD *)(v13 + 4);
      if ( v15 )
        v16 = (unsigned int *)(v15 + 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 == 1 )
          v18 = (unsigned int *)(v15 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
      v13 += 8;
    while ( v13 != v14 );
    v13 = *((_DWORD *)v1 + 47);
  if ( v13 )
    operator delete((void *)v13);
  *(_QWORD *)&v20 = *((_QWORD *)v1 + 22);
  if ( v20 != v21 )
      v26 = *(_DWORD *)(v20 + 16);
      v27 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v26 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = *(_DWORD *)(v20 + 12);
      v29 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v28 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v20 += 28;
    while ( v20 != v21 );
    v20 = *((_DWORD *)v1 + 44);
  if ( v20 )
    operator delete((void *)v20);
  v31 = (NetworkWorldInfo *)(*(_QWORD *)((char *)v1 + 164) >> 32);
  v30 = (NetworkWorldInfo *)*(_QWORD *)((char *)v1 + 164);
  if ( v30 != v31 )
      v30 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v30) + 392);
    while ( v31 != v30 );
    v30 = (NetworkWorldInfo *)*((_DWORD *)v1 + 41);
  if ( v30 )
    operator delete((void *)v30);
  v33 = (NetworkWorldInfo *)(*((_QWORD *)v1 + 19) >> 32);
  v32 = (NetworkWorldInfo *)*((_QWORD *)v1 + 19);
  if ( v32 != v33 )
      v32 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v32) + 392);
    while ( v33 != v32 );
    v32 = (NetworkWorldInfo *)*((_DWORD *)v1 + 38);
  if ( v32 )
    operator delete((void *)v32);
  v35 = (NetworkWorldInfo *)(*(_QWORD *)((char *)v1 + 140) >> 32);
  v34 = (NetworkWorldInfo *)*(_QWORD *)((char *)v1 + 140);
  if ( v34 != v35 )
      v34 = (NetworkWorldInfo *)((char *)NetworkWorldInfo::~NetworkWorldInfo(v34) + 392);
    while ( v35 != v34 );
    v34 = (NetworkWorldInfo *)*((_DWORD *)v1 + 35);
  if ( v34 )
    operator delete((void *)v34);
  v37 = (WorldTemplateInfo *)(*((_QWORD *)v1 + 16) >> 32);
  v36 = (WorldTemplateInfo *)*((_QWORD *)v1 + 16);
  if ( v36 != v37 )
      v36 = (WorldTemplateInfo *)((char *)WorldTemplateInfo::~WorldTemplateInfo(v36) + 44);
    while ( v37 != v36 );
    v36 = (WorldTemplateInfo *)*((_DWORD *)v1 + 32);
  if ( v36 )
    operator delete((void *)v36);
  v39 = (LocalWorldInfo *)(*(_QWORD *)((char *)v1 + 116) >> 32);
  v38 = (LocalWorldInfo *)*(_QWORD *)((char *)v1 + 116);
  if ( v38 != v39 )
      v38 = (LocalWorldInfo *)((char *)LocalWorldInfo::~LocalWorldInfo(v38) + 96);
    while ( v39 != v38 );
    v38 = (LocalWorldInfo *)*((_DWORD *)v1 + 29);
  if ( v38 )
    operator delete((void *)v38);
  MainMenuScreenModel::~MainMenuScreenModel(v1);
  return v1;
}


int __fastcall PlayScreenModel::resetUpdateIntervals(int result)
{
  *(_DWORD *)(result + 312) = 0;
  *(_DWORD *)(result + 316) = 0;
  *(_DWORD *)(result + 328) = 0;
  *(_DWORD *)(result + 332) = 0;
  *(_DWORD *)(result + 384) = 0;
  *(_DWORD *)(result + 388) = 0;
  *(_DWORD *)(result + 340) = 0;
  *(_DWORD *)(result + 336) = 3;
  *(_BYTE *)(result + 320) = 0;
  *(_DWORD *)(result + 344) = 0;
  return result;
}


int __fastcall PlayScreenModel::getThirdPartyServerWorldAtIndex(PlayScreenModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *(_QWORD *)((char *)this + 188), (HIDWORD(v2) - (signed int)v2) >> 3 <= a2) )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 8 * a2);
  return result;
}


    && PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v1 + 432))
{
  {
    result = MinecraftScreenModel::isRealmsDisabledForBeta(*(MinecraftScreenModel **)(v1 + 432)) ^ 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall PlayScreenModel::getWorldCount(int a1, int a2, int a3)
{
  int v3; // r4@1
  signed int result; // r0@1
  signed int v5; // r1@2
  signed int v6; // r0@2
  __int64 v7; // r0@4
  signed int v8; // r0@13

  v3 = a1;
  result = 0;
  switch ( a2 )
  {
    case 0:
      v5 = -1431655765;
      v6 = (signed int)((*(_QWORD *)(v3 + 116) >> 32) - *(_QWORD *)(v3 + 116)) >> 5;
      goto LABEL_14;
    case 1:
      switch ( a3 )
      {
        case 1:
          v7 = *(_QWORD *)(v3 + 152);
          goto LABEL_13;
        case 4:
          return (*(_DWORD *)(v3 + 192) - *(_DWORD *)(v3 + 188)) >> 3;
        case 2:
          v7 = *(_QWORD *)(v3 + 164);
        case 3:
          v7 = *(_QWORD *)(v3 + 140);
LABEL_13:
          v8 = HIDWORD(v7) - v7;
          v5 = 438261969;
          v6 = v8 >> 3;
          goto LABEL_14;
        default:
          goto def_12E04C4;
      }
      goto def_12E04C4;
    case 6:
      return (*(_DWORD *)(v3 + 192) - *(_DWORD *)(v3 + 188)) >> 3;
    case 2:
      if ( MinecraftScreenModel::isSignedInToXBL((MinecraftScreenModel *)v3) == 1 )
        v5 = -1227133513;
        v6 = (signed int)((*(_QWORD *)(v3 + 176) >> 32) - *(_QWORD *)(v3 + 176)) >> 2;
LABEL_14:
        result = v6 * v5;
      else
def_12E04C4:
        result = 0;
      break;
    case 4:
      return j_j_j__ZNK20WorldTemplateManager20getWorldTemplateSizeEv(*(WorldTemplateManager **)(v3 + 108));
    case 5:
      v5 = -991146299;
      v6 = (signed int)((*(_QWORD *)(v3 + 200) >> 32) - *(_QWORD *)(v3 + 200)) >> 3;
    case 3:
      return result;
  }
  return result;
}


FilePickerSettings *__fastcall PlayScreenModel::uploadArchivedFile(int a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int *v7; // r0@8
  unsigned int v8; // r1@10
  _DWORD *v9; // r0@13
  _DWORD *v10; // r5@13
  int v11; // r0@13
  unsigned int *v12; // r0@14
  unsigned int v13; // r1@16
  unsigned int v14; // r3@19
  void (*v15)(void); // r3@19
  void *v16; // r0@21
  int v17; // r0@22
  unsigned int *v18; // r2@23
  unsigned int v19; // r1@25
  void *v20; // r0@30
  unsigned int *v21; // r2@32
  unsigned int v22; // r1@34
  void *v23; // r0@40
  int v24; // r0@42
  unsigned int *v25; // r2@43
  unsigned int v26; // r1@45
  unsigned int *v28; // r2@51
  signed int v29; // r1@53
  unsigned int *v30; // r2@55
  signed int v31; // r1@57
  int v32; // [sp+4h] [bp-94h]@1
  int v33; // [sp+8h] [bp-90h]@1
  int v34; // [sp+Ch] [bp-8Ch]@7
  int v35; // [sp+10h] [bp-88h]@1
  int v36; // [sp+14h] [bp-84h]@1
  char v37; // [sp+18h] [bp-80h]@1
  unsigned __int64 v38; // [sp+38h] [bp-60h]@19
  void (*v39)(void); // [sp+40h] [bp-58h]@19
  int (__fastcall *v40)(int, int, int *); // [sp+44h] [bp-54h]@19
  int v41; // [sp+64h] [bp-34h]@7
  int v42; // [sp+68h] [bp-30h]@7
  int v43; // [sp+6Ch] [bp-2Ch]@13
  unsigned __int64 v44; // [sp+70h] [bp-28h]@19
  void (*v45)(void); // [sp+78h] [bp-20h]@13
  int (__fastcall *v46)(int, int, int *); // [sp+7Ch] [bp-1Ch]@19

  v2 = a1;
  v3 = a2;
  v4 = MinecraftGame::getLevelArchiver(*(MinecraftGame **)(a1 + 12));
  LevelArchiver::generateFilePickerSettings((int)&v37, v4, 0);
  FilePickerSettings::setPickerType((int)&v37, 1);
  PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v35, v2);
  v32 = v35;
  v33 = v36;
  if ( v36 )
  {
    v5 = (unsigned int *)(v36 + 8);
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
  sub_21E8AF4(&v34, v3);
  v41 = v32;
  v42 = v33;
  if ( v33 )
    v7 = (unsigned int *)(v33 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  sub_21E8AF4(&v43, &v34);
  v45 = 0;
  v9 = operator new(0xCu);
  v10 = v9;
  *v9 = v41;
  v11 = v42;
  v10[1] = v42;
  if ( v11 )
    v12 = (unsigned int *)(v11 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  sub_21E8AF4(v10 + 2, &v43);
  v14 = HIDWORD(v44);
  v44 = v38;
  v38 = __PAIR__(v14, (unsigned int)v10);
  v15 = v39;
  v39 = (void (*)(void))sub_12EE2E0;
  v45 = v15;
  v46 = v40;
  v40 = sub_12EE080;
  if ( v15 )
    v15();
  v16 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v43 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = v42;
  if ( v42 )
    v18 = (unsigned int *)(v42 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  v20 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v34 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
    v21 = (unsigned int *)(v33 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (**)(void))(*(_DWORD *)v33 + 12))();
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v23 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v23 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (**)(void))(**(_DWORD **)v23 + 144))();
  v24 = v36;
    v25 = (unsigned int *)(v36 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (**)(void))(*(_DWORD *)v24 + 12))();
  return FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v37);
}


void __fastcall PlayScreenModel::navigateToAddEditExternalScreen(PlayScreenModel *this, int a2)
{
  PlayScreenModel::navigateToAddEditExternalScreen(this, a2);
}


void __fastcall PlayScreenModel::_startLocalWorld(PlayScreenModel *this, LocalWorldInfo *a2)
{
  PlayScreenModel::_startLocalWorld(this, a2);
}


unsigned int __fastcall PlayScreenModel::_processLegacyWorld(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  unsigned int result; // r0@1
  int v5; // r1@2
  int v6; // r0@2
  int v7; // r4@4
  unsigned int *v8; // r1@5
  unsigned int *v9; // r5@11
  int v10; // [sp+0h] [bp-28h]@2
  char v11; // [sp+4h] [bp-24h]@2
  char v12; // [sp+Ch] [bp-1Ch]@2
  int v13; // [sp+10h] [bp-18h]@4

  v2 = a1;
  v3 = a2;
  result = *(_DWORD *)(a1 + 352);
  if ( result )
  {
    *(_DWORD *)(v2 + 304) = 0;
    ClientInstance::getUser((ClientInstance *)&v12, *(_DWORD *)(v2 + 16));
    v5 = *(_DWORD *)(v2 + 352);
    v6 = *v3;
    *v3 = 0;
    v10 = v6;
    Legacy::WorldImporter::importWorld((int)&v11, v5, (int)&v12, &v10);
    CallbackToken::operator=((_DWORD *)(v2 + 364), (int)&v11);
    CallbackToken::~CallbackToken((CallbackToken *)&v11);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    v7 = v13;
    result = 0;
    v10 = 0;
    if ( v13 )
    {
      v8 = (unsigned int *)(v13 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        v9 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v9);
          while ( __strex(result - 1, v9) );
        }
        else
          result = (*v9)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
  }
  return result;
}


int __fastcall PlayScreenModel::_setIsDirty(int result, bool a2)
{
  *(_BYTE *)(result + 112) = a2;
  return result;
}


int __fastcall PlayScreenModel::_willCauseDataLossUponSave(PlayScreenModel *this, LocalWorldInfo *a2)
{
  char *v2; // r0@1

  v2 = LocalWorldInfo::getLevelSummary(a2);
  return LevelSummary::isNetworkCompatible((LevelSummary *)v2) ^ 1;
}


int __fastcall PlayScreenModel::initializeRealmsWorlds(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  int result; // r0@1
  bool v3; // zf@1
  __int64 v4; // kr00_8@5
  signed int v5; // r1@6
  signed int v6; // r5@6
  __int64 v7; // [sp+0h] [bp-18h]@5

  v1 = this;
  result = MinecraftScreenModel::isRealmsEnabled(this);
  v3 = result == 1;
  if ( result == 1 )
  {
    result = *((_BYTE *)v1 + 298);
    v3 = result == 0;
  }
  if ( v3 )
    sub_21E034C(&v7);
    v4 = *((_QWORD *)v1 + 39);
    if ( *((_QWORD *)v1 + 39) )
    {
      result = (unsigned __int64)(v4 + 15000000000LL) >> 32;
      v5 = 0;
      v6 = 0;
      if ( (signed int)v4 + 2115098112 >= (unsigned int)v7 )
        v5 = 1;
      if ( result >= SHIDWORD(v7) )
        v6 = 1;
      if ( result == HIDWORD(v7) )
        v6 = v5;
      if ( v6 )
        return result;
      PlayScreenModel::_fetchInviteCount(v1);
    }
    else
      PlayScreenModel::fetchRealmsWorldsForPlayScreen(v1);
      PlayScreenModel::_fetchTrialAvailability(v1);
    result = v7;
    *((_QWORD *)v1 + 39) = v7;
  return result;
}


void __fastcall PlayScreenModel::fetchRealmsWorldsForPlayScreen(PlayScreenModel *this)
{
  PlayScreenModel::fetchRealmsWorldsForPlayScreen(this);
}


ExternalServer *__fastcall PlayScreenModel::_start3PNetworkWorld(PlayScreenModel *this, NetworkWorldInfo *a2)
{
  NetworkWorldInfo *v2; // r5@1
  PlayScreenModel *v3; // r4@1
  char *v4; // r0@1
  int v5; // r6@1
  char *v6; // r0@1
  char *v7; // r0@1
  int *v8; // r0@1
  int v9; // r4@1
  int v10; // r0@1
  int *v11; // r0@1
  void *v12; // r0@1
  void *v13; // r0@2
  void *v14; // r0@3
  void *v15; // r0@4
  unsigned int *v17; // r2@6
  signed int v18; // r1@8
  unsigned int *v19; // r2@10
  signed int v20; // r1@12
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  char v25; // [sp+4h] [bp-ACh]@1
  int v26; // [sp+8h] [bp-A8h]@3
  int v27; // [sp+Ch] [bp-A4h]@2
  int v28; // [sp+14h] [bp-9Ch]@1
  int v29; // [sp+18h] [bp-98h]@1
  int v30; // [sp+40h] [bp-70h]@1
  char v31; // [sp+44h] [bp-6Ch]@1
  char v32; // [sp+6Ch] [bp-44h]@1

  v2 = a2;
  v3 = this;
  v4 = NetworkWorldInfo::getExternalServer(a2);
  ExternalServer::ExternalServer(&v32, (int)v4);
  v5 = MinecraftScreenModel::getThirdPartyServerRepository(v3);
  v6 = NetworkWorldInfo::getThirdPartyServer(v2);
  v7 = ThirdPartyServer::getCreatorId((ThirdPartyServer *)v6);
  ThirdPartyServerRepository::findThirdPartyInfo((int)&v31, v5, (int **)v7);
  v8 = (int *)ExternalServer::getAddress((ExternalServer *)&v32);
  sub_21E8AF4(&v30, v8);
  v9 = *((_DWORD *)v3 + 4);
  v10 = ExternalServer::getPort((ExternalServer *)&v32);
  Social::GameConnectionInfo::GameConnectionInfo((int)&v25, -1, &v30, v10, (int)&v31);
  v11 = (int *)ExternalServer::getName((ExternalServer *)&v32);
  ClientInstance::startExternalNetworkWorld(v9, (int)&v25, v11);
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v29);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v27 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v30 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v31);
  return ExternalServer::~ExternalServer((ExternalServer *)&v32);
}


char *__fastcall PlayScreenModel::getWorlds(PlayScreenModel *this)
{
  return (char *)this + 272;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(**(_DWORD **)a1 + 432), 0, 0) > 0 )
{
  return v1;
}


unsigned int __fastcall PlayScreenModel::_getWeakPtr(PlayScreenModel *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 1) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall PlayScreenModel::startLocalWorld(PlayScreenModel *a1, LocalWorldInfo *a2)
{
  PlayScreenModel::startLocalWorld(a1, a2);
}


_BOOL4 __fastcall PlayScreenModel::_isValidWorld(int a1, signed int a2, int a3, int a4)
{
  return a2 >= 0 && PlayScreenModel::getWorldCount(a1, a3, a4) > a2;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v6 + 432), 2, 0) > a3 )
{
    v7 = *v4;
    if ( strcmp(*v4, "personal_realms") )
    {
      if ( strcmp(v7, "friends_realms") )
        return 0;
      v3 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v6 + 432));
      if ( v3 < 0 )
    }
    v8 = (RealmsWorldInfo *)PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v6 + 432), v3);
    v5 = RealmsWorldInfo::isOwner(v8) ^ 1;
  }
  return v5;
}


int __fastcall PlayScreenModel::handleLegacyWorldConversionComplete(int result, const Legacy::WorldConversionReport **a2)
{
  const Legacy::WorldConversionReport **v2; // r4@1
  MinecraftEventing *v3; // r0@2

  v2 = a2;
  if ( *a2 )
  {
    v3 = (MinecraftEventing *)MinecraftGame::getEventing(*(MinecraftGame **)(result + 12));
    result = j_j_j__ZN17MinecraftEventing31fireWorldConversionAttemptEventERKN6Legacy21WorldConversionReportE(v3, *v2);
  }
  return result;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v6 + 432), 2, 0) > a3 )
{
    v7 = *v4;
    if ( strcmp(*v4, "personal_realms") )
    {
      if ( strcmp(v7, "friends_realms") )
        return 0;
      v3 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v6 + 432));
      if ( v3 < 0 )
    }
    v8 = (WorldInfo *)PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v6 + 432), v3);
    v5 = 0;
    if ( !WorldInfo::getStatus(v8) )
      v5 = 1;
  }
  return v5;
}


RakNet *__fastcall PlayScreenModel::repopulateLocalWorlds(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  ClientInstance *v2; // r0@1
  Minecraft *v3; // r0@1
  int v4; // r0@1

  v1 = this;
  v2 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 3));
  v3 = (Minecraft *)ClientInstance::getServerData(v2);
  v4 = Minecraft::getLevelSource(v3);
  return PlayScreenModel::_populateLocalWorldsFromStorageSource(v1, v4, (unsigned __int64 *)((char *)v1 + 116), 1, 1);
}


int __fastcall PlayScreenModel::fetchThirdPartyServerWorlds(PlayScreenModel *this)
{
  MinecraftScreenModel *v1; // r7@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r8@5
  int v6; // r10@5
  signed int v7; // r9@6
  unsigned int *v8; // r0@9
  unsigned int v9; // r1@11
  int v10; // r6@15
  int v11; // r0@15
  unsigned int *v12; // r0@16
  unsigned int v13; // r1@18
  _QWORD *v14; // r0@21
  unsigned int *v15; // r1@22
  unsigned int v16; // r2@24
  __int64 v17; // r1@27
  unsigned int *v18; // r0@28
  unsigned int v19; // r1@30
  _DWORD *v20; // r0@33
  unsigned int *v21; // r1@34
  unsigned int v22; // r2@36
  __int64 v23; // r1@39
  unsigned int *v24; // r1@42
  unsigned int v25; // r0@44
  unsigned int *v26; // r1@52
  unsigned int v27; // r0@54
  void *v28; // r0@59
  unsigned int *v29; // r1@61
  unsigned int v30; // r0@63
  unsigned int *v31; // r1@69
  unsigned int v32; // r0@71
  int result; // r0@76
  unsigned int *v34; // r2@77
  unsigned int v35; // r1@79
  unsigned int *v36; // r2@85
  signed int v37; // r1@87
  _DWORD *v38; // [sp+0h] [bp-50h]@39
  void (*v39)(void); // [sp+8h] [bp-48h]@33
  _QWORD *v40; // [sp+10h] [bp-40h]@27
  void (*v41)(void); // [sp+18h] [bp-38h]@21
  int v42; // [sp+20h] [bp-30h]@15
  int v43; // [sp+24h] [bp-2Ch]@1
  int v44; // [sp+28h] [bp-28h]@1

  v1 = this;
  PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v43, (int)this);
  v2 = *(_QWORD *)&v43;
  if ( v44 )
  {
    v3 = (unsigned int *)(v44 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
      v5 = v44;
      v6 = v43;
      if ( !v44 )
      {
        v5 = 0;
        v7 = 1;
        goto LABEL_15;
      }
    }
    else
      ++*v3;
    v8 = (unsigned int *)(v5 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
    v7 = 0;
  }
  else
    v5 = 0;
    v7 = 1;
    v6 = v43;
LABEL_15:
  v10 = MinecraftScreenModel::getThirdPartyServerRepository(v1);
  v11 = MinecraftScreenModel::getOfferRepository(v1);
  OfferRepository::getStoreId((OfferRepository *)&v42, v11, 1);
  if ( HIDWORD(v2) )
    v12 = (unsigned int *)(HIDWORD(v2) + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  v41 = 0;
  v14 = operator new(8u);
  *v14 = v2;
    v15 = (unsigned int *)(HIDWORD(v2) + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  HIDWORD(v17) = sub_12EC820;
  v40 = v14;
  LODWORD(v17) = sub_12ECC04;
  *(_QWORD *)&v41 = v17;
  if ( !v7 )
    v18 = (unsigned int *)(v5 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  v39 = 0;
  v20 = operator new(8u);
  *v20 = v6;
  v20[1] = v5;
    v21 = (unsigned int *)(v5 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
      ++*v21;
  LODWORD(v23) = sub_12ED124;
  v38 = v20;
  HIDWORD(v23) = sub_12ECF7C;
  *(_QWORD *)&v39 = v23;
  ThirdPartyServerRepository::fetch(v10, &v42, (int)&v40, (int)&v38);
  if ( v39 )
    v39();
    v24 = (unsigned int *)(v5 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  if ( v41 )
    v41();
    v26 = (unsigned int *)(HIDWORD(v2) + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  v28 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v42 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
    v29 = (unsigned int *)(v5 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
    v31 = (unsigned int *)(HIDWORD(v2) + 8);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
  result = v44;
    v34 = (unsigned int *)(v44 + 8);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall PlayScreenModel::refresh(int a1, int a2)
{
  int v2; // r4@1
  signed int v3; // r7@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r6@1
  unsigned int v7; // t1@1
  int v8; // r3@1
  __int64 v9; // r0@1
  ClientInstance *v10; // r0@11
  Minecraft *v11; // r0@11
  int v12; // r0@11
  void *v13; // r0@12
  __int64 v14; // r0@13
  __int64 v15; // r0@14
  __int64 v17; // [sp+8h] [bp-20h]@1

  v2 = a1;
  v3 = 0;
  v4 = a2;
  *(_BYTE *)(a1 + 112) = 0;
  sub_21E0378(&v17);
  v5 = v2 + 8 * v4;
  v7 = *(_DWORD *)(v5 + 216);
  v6 = v5 + 216;
  v8 = *(_DWORD *)(v6 + 4);
  LODWORD(v9) = 0;
  if ( v7 >= (unsigned int)v17 )
    LODWORD(v9) = 1;
  if ( v8 >= SHIDWORD(v17) )
    v3 = 1;
  if ( v8 == HIDWORD(v17) )
    v3 = v9;
  if ( v3 )
    return v9;
  if ( v4 == 2 )
  {
    PlayScreenModel::fetchRealmsWorldsForPlayScreen((PlayScreenModel *)v2);
    HIDWORD(v14) = HIDWORD(v17);
    LODWORD(v14) = v17 + 2115098112;
    v9 = v14 + 15000000000LL;
LABEL_19:
    *(_QWORD *)v6 = v9;
  }
  if ( v4 == 1 )
    PlayScreenModel::_populateNetworkWorlds((PlayScreenModel *)v2);
    HIDWORD(v15) = HIDWORD(v17);
    LODWORD(v15) = v17 + 705032704;
    v9 = v15 + 5000000000LL;
    goto LABEL_19;
  if ( !v4 )
    v10 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v2 + 12));
    v11 = (Minecraft *)ClientInstance::getServerData(v10);
    v12 = Minecraft::getLevelSource(v11);
    PlayScreenModel::_populateLocalWorldsFromStorageSource(
      (MinecraftScreenModel *)v2,
      v12,
      (unsigned __int64 *)(v2 + 116),
      1,
      1);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v13 = &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v13 + 436))() == 2 )
      v9 = v17 + 1800000000000LL;
      v9 = v17 + 5000000000LL;
  return v9;
}


    || PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v1 + 432))
{
  {
    MainMenuScreenModel::navigateToCreateWorldScreen(*(MainMenuScreenModel **)(v1 + 432), 0);
  }
  else
    v6 = *(_DWORD *)(v1 + 432);
    v7 = v3 - 1;
    if ( v7 )
    {
      MainMenuScreenModel::navigateToCreateWorldScreen(*(MainMenuScreenModel **)(v1 + 432), 0);
    }
    else
      sub_21E94B4((void **)&v13, "popup");
      MainMenuScreenModel::navigateToCreateWorldUpsellScreen(v6, 1, &v13);
      v8 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
      {
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v7 = -1;
    v9 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v1 + 432));
    Options::setCreateRealmUpsellCount(v9, v7);
    v10 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v1 + 432));
    Options::save(v10, 0);
  return 8;
}


PlayScreenModel::LiveServer *__fastcall PlayScreenModel::LiveServer::~LiveServer(PlayScreenModel::LiveServer *this)
{
  PlayScreenModel::LiveServer *v1; // r4@1
  Social::MultiplayerGameInfo *v2; // r0@1
  Social::MultiplayerGameInfo *v3; // r0@2

  v1 = this;
  v2 = *(Social::MultiplayerGameInfo **)this;
  if ( v2 )
  {
    v3 = Social::MultiplayerGameInfo::~MultiplayerGameInfo(v2);
    operator delete((void *)v3);
  }
  *(_DWORD *)v1 = 0;
  return v1;
}


void __fastcall PlayScreenModel::uploadLocalWorldFile(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  __int64 v5; // r0@2
  LocalWorldInfo *v6; // r0@3
  int *v7; // r0@7
  __int64 v8; // kr00_8@7
  int v9; // r4@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r5@14
  unsigned int v13; // r0@16
  void *v14; // r0@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  char v17; // [sp+4h] [bp-24h]@7
  int v18; // [sp+8h] [bp-20h]@7
  int v19; // [sp+Ch] [bp-1Ch]@7

  v3 = a2;
  v4 = a1;
  if ( a3 < 0 )
  {
    v6 = 0;
  }
  else
    v5 = *(_QWORD *)(a1 + 116);
    if ( -1431655765 * ((HIDWORD(v5) - (signed int)v5) >> 5) <= a3 )
      v6 = 0;
    else
      v6 = (LocalWorldInfo *)(v5 + 96 * a3);
  v7 = (int *)LocalWorldInfo::getLevelSummary(v6);
  sub_21E8AF4(&v19, v7);
  MinecraftScreenModel::leaveScreen((MinecraftScreenModel *)v4);
  v8 = *(_QWORD *)(v4 + 20);
  SceneFactory::createFileUploadProgressScreen((unsigned __int64 *)&v17, SHIDWORD(v8), v3, &v19, 1);
  SceneStack::pushScreen(v8, (int)&v17, 0);
  v9 = v18;
  if ( v18 )
    v10 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
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
  v14 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


int __fastcall PlayScreenModel::initLegacyWorldImporter(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  int v2; // r1@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-Ch]@1

  v1 = this;
  Legacy::WorldImporter::createWorldImporter((Legacy::WorldImporter *)&v4);
  v2 = v4;
  v4 = 0;
  result = *((_DWORD *)v1 + 88);
  *((_DWORD *)v1 + 88) = v2;
  if ( result )
  {
    (*(void (**)(void))(*(_DWORD *)result + 4))();
    result = v4;
    if ( v4 )
      result = (*(int (**)(void))(*(_DWORD *)v4 + 4))();
  }
  return result;
}


void __fastcall PlayScreenModel::_startLocalWorld(PlayScreenModel *this, LocalWorldInfo *a2)
{
  PlayScreenModel *v2; // r4@1
  LocalWorldInfo *v3; // r5@1
  int v4; // r6@3
  void *v5; // r0@3
  char *v6; // r0@4
  EntitlementManager *v7; // r6@5
  int v8; // r0@5
  void *v9; // r0@5
  char *v10; // r5@7
  int v11; // r4@7
  LevelSettings *v12; // r0@7
  int v13; // r5@7
  void *v14; // r0@7
  void *v15; // r0@8
  void *v16; // r0@9
  char *v17; // r0@10
  void *v18; // r0@11
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  unsigned int *v25; // r2@25
  signed int v26; // r1@27
  unsigned int *v27; // r2@29
  signed int v28; // r1@31
  unsigned int *v29; // r2@33
  signed int v30; // r1@35
  unsigned int *v31; // r2@37
  signed int v32; // r1@39
  char v33; // [sp+8h] [bp-140h]@7
  int v34; // [sp+D0h] [bp-78h]@7
  int v35; // [sp+D4h] [bp-74h]@7
  int v36; // [sp+D8h] [bp-70h]@7
  int v37; // [sp+DCh] [bp-6Ch]@5
  char v38; // [sp+E0h] [bp-68h]@5
  char v39; // [sp+F0h] [bp-58h]@5
  char *v40; // [sp+124h] [bp-24h]@4
  int v41; // [sp+128h] [bp-20h]@4
  int v42; // [sp+130h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  if ( !ClientInstance::isInGame(*((ClientInstance **)this + 4))
    && !MinecraftGame::isStartingGame(*((MinecraftGame **)v2 + 3)) )
  {
    v4 = MinecraftGame::getEventing(*((MinecraftGame **)v2 + 3));
    sub_21E94B4((void **)&v42, (const char *)&unk_257BC67);
    MinecraftEventing::fireEventStartWorld(v4, 0, &v42);
    v5 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v42 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    LocalWorldInfo::getLevelSummary(v3);
    v6 = LocalWorldInfo::getLevelSummary(v3);
    sub_21E8AF4(&v41, (int *)v6 + 14);
    v40 = (char *)&unk_28898CC;
    if ( *(_DWORD *)(v41 - 12) )
      v7 = (EntitlementManager *)MinecraftGame::getEntitlementManager(*((MinecraftGame **)v2 + 3));
      mce::UUID::fromString((int)&v38, &v41);
      v8 = EntitlementManager::getEntitlement(v7, (const mce::UUID *)&v38);
      Entitlement::Entitlement((int)&v39, v8);
      Entitlement::getContentKey((Entitlement *)&v37, (int)&v39);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v40,
        &v37);
      v9 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v37 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        }
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      Entitlement::~Entitlement((Entitlement *)&v39);
    v10 = LocalWorldInfo::getLevelSummary(v3);
    v11 = *((_DWORD *)v2 + 3);
    sub_21E8AF4(&v36, (int *)v10);
    sub_21E8AF4(&v35, (int *)v10 + 1);
    sub_21E8AF4(&v34, &v41);
    v13 = v10[40] != 0;
    v12 = (LevelSettings *)LevelSettings::LevelSettings((LevelSettings *)&v33);
    MinecraftGame::startLocalServer(v11, &v36, &v35, &v34, v13, v12);
    LevelSettings::~LevelSettings((LevelSettings *)&v33);
    v14 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v34 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v35 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v36 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = v40 - 12;
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v40 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v41 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  }
}


RakNet *__fastcall PlayScreenModel::_populateLocalWorlds(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  ClientInstance *v2; // r0@1
  Minecraft *v3; // r0@1
  int v4; // r0@1

  v1 = this;
  v2 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 3));
  v3 = (Minecraft *)ClientInstance::getServerData(v2);
  v4 = Minecraft::getLevelSource(v3);
  return PlayScreenModel::_populateLocalWorldsFromStorageSource(v1, v4, (unsigned __int64 *)((char *)v1 + 116), 1, 1);
}


int __fastcall PlayScreenModel::_updateExternalServer(PlayScreenModel *this, ExternalServer *a2, PingedCompatibleServer *a3)
{
  PingedCompatibleServer *v3; // r4@1
  ExternalServer *v4; // r5@1

  v3 = a3;
  v4 = a2;
  ExternalServer::setProtocol(a2, *((_DWORD *)a3 + 3));
  ExternalServer::setVersion((int)v4, (int *)v3 + 4);
  ExternalServer::setTitle((int)v4, (int *)v3);
  ExternalServer::setPlayers(v4, *((_DWORD *)v3 + 5));
  return j_j_j__ZN14ExternalServer13setMaxPlayersEi(v4, *((_DWORD *)v3 + 6));
}


int __fastcall PlayScreenModel::generateFilePickerSettingsForImport(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  void (__fastcall *v9)(_DWORD, _DWORD, _DWORD); // r4@7
  void (__fastcall *v10)(int *, int, signed int); // r3@7
  unsigned int *v11; // r0@9
  unsigned int v12; // r1@12
  __int64 v13; // kr00_8@15
  int v14; // r10@15
  void *v15; // r0@15
  int v16; // r12@15
  _QWORD *v17; // r1@15
  int v18; // r2@15
  unsigned int *v19; // r2@16
  unsigned int v20; // r3@18
  __int64 v21; // kr10_8@21
  int v22; // r6@21
  void (*v23)(void); // r3@21
  int v24; // r1@21
  int v25; // r0@24
  unsigned int *v26; // r2@25
  unsigned int v27; // r1@27
  unsigned int *v28; // r2@35
  unsigned int v29; // r1@37
  int result; // r0@42
  unsigned int *v31; // r2@43
  unsigned int v32; // r1@45
  int v33; // [sp+0h] [bp-68h]@1
  int v34; // [sp+4h] [bp-64h]@1
  int v35; // [sp+8h] [bp-60h]@8
  void (__fastcall *v36)(_DWORD, _DWORD, _DWORD); // [sp+10h] [bp-58h]@7
  unsigned int *v37; // [sp+14h] [bp-54h]@8
  int v38; // [sp+18h] [bp-50h]@1
  int v39; // [sp+1Ch] [bp-4Ch]@1
  int v40; // [sp+20h] [bp-48h]@9
  int v41; // [sp+24h] [bp-44h]@9
  __int64 v42; // [sp+28h] [bp-40h]@15
  void (__fastcall *v43)(_DWORD, _DWORD, _DWORD); // [sp+30h] [bp-38h]@15
  unsigned int *v44; // [sp+34h] [bp-34h]@13
  void *v45; // [sp+38h] [bp-30h]@21
  int v46; // [sp+3Ch] [bp-2Ch]@21
  void (*v47)(void); // [sp+40h] [bp-28h]@15
  int v48; // [sp+44h] [bp-24h]@21

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = MinecraftGame::getLevelArchiver(*(MinecraftGame **)(a2 + 12));
  LevelArchiver::generateFilePickerSettings(v4, v6, 0);
  FilePickerSettings::setPickerType(v4, 1);
  PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v38, v3);
  v33 = v38;
  v34 = v39;
  if ( v39 )
  {
    v7 = (unsigned int *)(v39 + 8);
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
  v9 = 0;
  v36 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v10 )
    v10(&v35, v5, 2);
    v37 = *(unsigned int **)(v5 + 12);
    v9 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v5 + 8);
    v36 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v5 + 8);
  v40 = v33;
  v11 = (unsigned int *)v34;
  v41 = v34;
  if ( v34 )
    v11 = (unsigned int *)(v34 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      v9 = v36;
      v11 = v44;
      ++*v11;
  v13 = *(_QWORD *)&v35;
  *(_QWORD *)&v35 = v42;
  v42 = v13;
  v14 = (int)v37;
  v37 = v11;
  v43 = v9;
  v44 = (unsigned int *)v14;
  v47 = 0;
  v15 = operator new(0x18u);
  v17 = (_QWORD *)(v4 + 32);
  *(_DWORD *)v15 = v40;
  v18 = v41;
  *((_DWORD *)v15 + 1) = v41;
  if ( v18 )
    v19 = (unsigned int *)(v18 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      v14 = (int)v44;
      v9 = v43;
      v16 = *((_DWORD *)v15 + 5);
      ++*v19;
  v21 = v42;
  v42 = *((_QWORD *)v15 + 1);
  *((_QWORD *)v15 + 1) = v21;
  v43 = 0;
  *((_DWORD *)v15 + 4) = v9;
  v44 = (unsigned int *)v16;
  *((_DWORD *)v15 + 5) = v14;
  v45 = v15;
  v22 = v46;
  *(_QWORD *)&v45 = *v17;
  *(_DWORD *)v17 = v15;
  *(_DWORD *)(v4 + 36) = v22;
  v23 = *(void (**)(void))(v4 + 40);
  *(_DWORD *)(v4 + 40) = sub_12E97C4;
  v24 = *(_DWORD *)(v4 + 44);
  v47 = v23;
  v48 = v24;
  *(_DWORD *)(v4 + 44) = sub_12E9184;
  if ( v23 )
    v23();
    if ( v43 )
      v43(&v42, &v42, 3);
  v25 = v41;
  if ( v41 )
    v26 = (unsigned int *)(v41 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  if ( v36 )
    v36(&v35, &v35, 3);
    v28 = (unsigned int *)(v34 + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      (*(void (**)(void))(*(_DWORD *)v34 + 12))();
  result = v39;
    v31 = (unsigned int *)(v39 + 8);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall PlayScreenModel::getRealmWorldAtIndex(PlayScreenModel *this, int a2)
{
  int v2; // r4@1
  PlayScreenModel *v3; // r5@1
  int v4; // r0@3
  int result; // r0@6

  v2 = a2;
  v3 = this;
  if ( a2 < 0
    || (MinecraftScreenModel::isSignedInToXBL(this) != 1 ? (v4 = 0) : (v4 = -1227133513
                                                                          * ((signed int)((*((_QWORD *)v3 + 22) >> 32)
                                                                                        - *((_QWORD *)v3 + 22)) >> 2)),
        v4 <= v2) )
  {
    result = 0;
  }
  else
    result = *((_DWORD *)v3 + 44) + 28 * v2;
  return result;
}


int __fastcall PlayScreenModel::supportsLegacyWorldUpload(PlayScreenModel *this)
{
  return 0;
}


void __fastcall PlayScreenModel::_populateRealmsWorlds(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r10@1
  int v2; // r11@1
  int v3; // r7@1
  int v4; // r6@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int v9; // r1@19
  void *v10; // r0@19
  int v11; // r1@20
  void *v12; // r0@20
  int v13; // r4@22
  int i; // r6@22
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  __int64 v19; // kr08_8@40
  void *v20; // r0@43
  void *v21; // r0@44
  void *v22; // r0@46
  unsigned int *v23; // r2@48
  signed int v24; // r1@50
  unsigned __int64 *v25; // [sp+4h] [bp-54h]@1
  char v26; // [sp+10h] [bp-48h]@40
  int v27; // [sp+18h] [bp-40h]@41
  int v28; // [sp+1Ch] [bp-3Ch]@28
  int v29; // [sp+20h] [bp-38h]@24
  __int64 v30; // [sp+24h] [bp-34h]@41
  int v31; // [sp+2Ch] [bp-2Ch]@22

  v1 = this;
  v2 = *((_DWORD *)this + 44);
  v25 = (unsigned __int64 *)((char *)this + 176);
  v3 = *((_DWORD *)this + 45);
  if ( v3 != v2 )
  {
    v4 = *((_DWORD *)this + 44);
    do
    {
      v9 = *(_DWORD *)(v4 + 16);
      v10 = (void *)(v9 - 12);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v11 = *(_DWORD *)(v4 + 12);
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v11 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v4 += 28;
    }
    while ( v4 != v3 );
  }
  *((_DWORD *)v1 + 45) = v2;
  MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v31, (int)v1);
  v13 = *((_QWORD *)v1 + 34) >> 32;
  for ( i = *((_QWORD *)v1 + 34); i != v13; i += 72 )
    RealmsWorldInfo::RealmsWorldInfo((int)&v26, i, (const void **)&v31);
    v19 = *(_QWORD *)((char *)v1 + 180);
    if ( (_DWORD)v19 == HIDWORD(v19) )
      std::vector<RealmsWorldInfo,std::allocator<RealmsWorldInfo>>::_M_emplace_back_aux<RealmsWorldInfo const&>(
        v25,
        (int)&v26);
    else
      *(_QWORD *)v19 = *(_QWORD *)&v26;
      *(_DWORD *)(v19 + 8) = v27;
      sub_21E8AF4((int *)(v19 + 12), &v28);
      sub_21E8AF4((int *)(v19 + 16), &v29);
      *(_QWORD *)(v19 + 20) = v30;
      *((_DWORD *)v1 + 45) += 28;
    v20 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v28 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  *((_BYTE *)v1 + 112) = 1;
  v22 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


int *__fastcall PlayScreenModel::updateNetworkWorldSorting(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r4@1
  NetworkWorldInfo *v2; // r5@1
  int v3; // r6@1
  unsigned int v4; // r0@1
  int v5; // r7@4
  ExternalServerFile *v6; // r0@8

  v1 = this;
  v2 = (NetworkWorldInfo *)(*(_QWORD *)((char *)this + 164) >> 32);
  v3 = *(_QWORD *)((char *)this + 164);
  v4 = 438261969 * (((signed int)v2 - v3) >> 3);
  if ( v4 >= 2 && (NetworkWorldInfo *)v3 != v2 )
  {
    sub_12E9C20(v3, (int)v2, 2 * (31 - __clz(v4)), 0);
    if ( (signed int)v2 - v3 <= 6272 )
    {
      sub_12EA080((NetworkWorldInfo *)v3, v2);
    }
    else
      v5 = v3 + 6272;
      sub_12EA080((NetworkWorldInfo *)v3, (NetworkWorldInfo *)(v3 + 6272));
      if ( (NetworkWorldInfo *)(v3 + 6272) != v2 )
      {
        do
        {
          v3 &= 0xFFFFFF00;
          sub_12EA174(v5);
          v5 += 392;
        }
        while ( v2 != (NetworkWorldInfo *)v5 );
      }
  }
  v6 = (ExternalServerFile *)MinecraftGame::getExternalServer(*((MinecraftGame **)v1 + 3));
  return j_j_j__ZN18ExternalServerFile4saveEv_0(v6);
}


ExternalServer *__fastcall PlayScreenModel::_startExternalNetworkWorld(PlayScreenModel *this, NetworkWorldInfo *a2)
{
  PlayScreenModel *v2; // r4@1
  char *v3; // r0@1
  ExternalServer *v4; // r0@1
  int *v5; // r5@1
  int *v6; // r6@1
  int v7; // r0@1
  int v9; // [sp+0h] [bp-40h]@1

  v2 = this;
  v3 = NetworkWorldInfo::getExternalServer(a2);
  v4 = (ExternalServer *)ExternalServer::ExternalServer(&v9, (int)v3);
  v5 = (int *)ExternalServer::getName(v4);
  v6 = (int *)ExternalServer::getAddress((ExternalServer *)&v9);
  v7 = ExternalServer::getPort((ExternalServer *)&v9);
  MinecraftScreenModel::startExternalNetworkWorld((int)v2, v5, v6, v7);
  return ExternalServer::~ExternalServer((ExternalServer *)&v9);
}


char *__fastcall PlayScreenModel::getLastPlayerCountUpdate(PlayScreenModel *this)
{
  return (char *)this + 384;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(**(_DWORD **)a1 + 432), 5, 0) > 0 )
{
  return v1;
}


int __fastcall PlayScreenModel::PlayScreenModel(int a1, int a2, ClientInstance *a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r0@1
  int result; // r0@1

  v5 = a1;
  MainMenuScreenModel::MainMenuScreenModel(a1, a2, a3, a4, a5);
  *(_DWORD *)v5 = &off_26E50B8;
  *(_BYTE *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 304) = 0;
  *(_BYTE *)(v5 + 308) = 0;
  *(_DWORD *)(v5 + 312) = 0;
  *(_DWORD *)(v5 + 316) = 0;
  *(_BYTE *)(v5 + 320) = 0;
  _aeabi_memclr4(v5 + 116, 96);
  _aeabi_memclr8(v5 + 216, 73);
  *(_BYTE *)(v5 + 300) = 0;
  *(_DWORD *)(v5 + 292) = 0;
  *(_DWORD *)(v5 + 296) = 0;
  *(_DWORD *)(v5 + 328) = 0;
  *(_DWORD *)(v5 + 332) = 0;
  *(_DWORD *)(v5 + 336) = 0;
  *(_DWORD *)(v5 + 340) = 0;
  *(_DWORD *)(v5 + 344) = 0;
  *(_DWORD *)(v5 + 348) = 0;
  *(_DWORD *)(v5 + 352) = 0;
  CallbackToken::CallbackToken(v5 + 356);
  CallbackToken::CallbackToken(v5 + 364);
  v6 = v5 + 328;
  v7 = v5 + 312;
  v8 = v5 + 336;
  *(_BYTE *)(v5 + 372) = 0;
  *(_DWORD *)(v5 + 376) = 0;
  *(_DWORD *)v7 = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v5 + 384) = 0;
  *(_DWORD *)(v5 + 388) = 0;
  *(_DWORD *)v8 = 3;
  *(_DWORD *)(v8 + 4) = 0;
  result = v5;
  return result;
}


  if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v1 + 432), 1, 4) )
{
  v2 = 0;
  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 0) == 1 )
  {
    if ( MinecraftScreenModel::isEduMode(*(MinecraftScreenModel **)(v1 + 380)) )
      return 0;
    v2 = PlayScreenModel::getFetchingThirdPartyWorldsInProgress(*(PlayScreenModel **)(v1 + 432));
  }
  return v2;
}


    if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v5 + 432), 1, 4)
{
    {
      v6 = v4;
    }
  }
  v7 = s1 - 12;
  if ( (int *)(s1 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  if ( v6 >= 0 )
    v8 = PlayScreenModel::getNetworkWorldAtIndex(*(_DWORD *)(v5 + 432), v4, 4);
    if ( v8 )
      NetworkWorldInfo::NetworkWorldInfo((int)&v16, v8);
      NetworkWorldInfo::NetworkWorldInfo((int)&v15, (int)&v16);
      NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v16);
      NetworkWorldInfo::NetworkWorldInfo((int)&v15);
    if ( WorldInfo::isValid((WorldInfo *)&v15) == 1 )
      v9 = NetworkWorldInfo::getThirdPartyServer((NetworkWorldInfo *)&v15);
      v10 = (int *)ThirdPartyServer::getImagePath((ThirdPartyServer *)v9);
      sub_21E8AF4(v3, v10);
      NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v15);
      goto LABEL_16;
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v15);
  sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
LABEL_16:
  result = (char *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PlayScreenModel::getFetchingThirdPartyWorldsInProgress(PlayScreenModel *this)
{
  ThirdPartyServerRepository *v1; // r0@1

  v1 = (ThirdPartyServerRepository *)MinecraftGame::getThirdPartyServerRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK26ThirdPartyServerRepository17isFetchingServersEv(v1);
}


LevelData *__fastcall PlayScreenModel::refreshLocalWorldInfo(PlayScreenModel *this, const LocalWorldInfo *a2, LocalWorldInfo *a3)
{
  PlayScreenModel *v3; // ST54_4@1
  const LocalWorldInfo *v4; // r4@1
  char *v5; // r5@1
  ClientInstance *v6; // r0@1
  Minecraft *v7; // r0@1
  int v8; // r0@1
  int *v9; // ST5C_4@1
  int v10; // ST58_4@1
  int v11; // ST50_4@1
  int v12; // ST4C_4@1
  int v13; // ST48_4@1
  int v14; // ST44_4@1
  int v15; // ST3C_4@1
  int v16; // ST40_4@1
  char v17; // r8@1
  char v18; // r9@1
  char v19; // r10@1
  char v20; // r11@1
  char v21; // r6@1
  char v22; // r7@1
  int v23; // r4@1
  int *v24; // r0@1
  int v26[16]; // [sp+60h] [bp-1D8h]@1
  char v27; // [sp+A0h] [bp-198h]@1

  v3 = this;
  v4 = a2;
  v5 = LocalWorldInfo::getLevelSummary(a3);
  v6 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v4 + 3));
  v7 = (Minecraft *)ClientInstance::getServerData(v6);
  v8 = Minecraft::getLevelSource(v7);
  (*(void (__fastcall **)(char *))(*(_DWORD *)v8 + 20))(&v27);
  v9 = (int *)LevelData::getLevelName((LevelData *)&v27);
  v10 = LevelData::getLastPlayed((LevelData *)&v27);
  v11 = LevelData::getGameType((LevelData *)&v27);
  v12 = LevelData::getGameDifficulty((LevelData *)&v27);
  v13 = LevelData::getSeed((LevelData *)&v27);
  v14 = LevelData::getNetworkVersion((LevelData *)&v27);
  v15 = *((_QWORD *)v5 + 4) >> 32;
  v16 = *((_QWORD *)v5 + 4);
  v17 = LevelData::isMultiplayerGame((LevelData *)&v27);
  v18 = LevelData::hasLANBroadcast((LevelData *)&v27);
  v19 = LevelData::hasXBLBroadcast((LevelData *)&v27);
  v20 = LevelData::hasPlatformBroadcast((LevelData *)&v27);
  v21 = LevelData::hasCommandsEnabled((LevelData *)&v27);
  v22 = LevelData::isEduLevel((LevelData *)&v27);
  v23 = LevelData::getStorageVersion((LevelData *)&v27);
  v24 = (int *)LevelData::getPremiumTemplatePackId((LevelData *)&v27);
  LevelSummary::LevelSummary(
    v26,
    (int *)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v16,
    v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    (int *)v5 + 13,
    v24);
  LocalWorldInfo::LocalWorldInfo((int)v3, (int)v26);
  LevelSummary::~LevelSummary((LevelSummary *)v26);
  return LevelData::~LevelData((LevelData *)&v27);
}


int __fastcall PlayScreenModel::_passLicenseCheck(PlayScreenModel *this, LocalWorldInfo *a2)
{
  LocalWorldInfo *v2; // r5@1
  PlayScreenModel *v3; // r4@1
  char *v4; // r0@2
  int v5; // r1@2
  Entitlement *v6; // r0@3
  signed int v7; // r6@3
  void *v8; // r0@6
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+0h] [bp-28h]@3
  int v13; // [sp+10h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  if ( WorldInfo::getWorldType(a2) == 1 )
  {
    v4 = LocalWorldInfo::getLevelSummary(v2);
    sub_21E8AF4(&v13, (int *)v4 + 14);
    v5 = v13;
    if ( *(_DWORD *)(v13 - 12) )
    {
      v3 = (PlayScreenModel *)MinecraftGame::getEntitlementManager(*((MinecraftGame **)v3 + 3));
      mce::UUID::fromString((int)&v12, &v13);
      v6 = (Entitlement *)EntitlementManager::getEntitlement(v3, (const mce::UUID *)&v12);
      LOBYTE(v3) = Entitlement::isOwned(v6);
      v5 = v13;
      v7 = 0;
    }
    else
      v7 = 1;
    v8 = (void *)(v5 - 12);
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v5 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    if ( v7 == 1 )
      LOBYTE(v3) = 1;
  }
  else
    LOBYTE(v3) = 1;
  return (unsigned __int8)v3 & 1;
}


int __fastcall PlayScreenModel::handleLegacyWorldUploadComplete(int result, int *a2)
{
  int *v2; // r6@1
  int v3; // r1@2

  v2 = a2;
  if ( *a2 )
  {
    MinecraftGame::getEventing(*(MinecraftGame **)(result + 12));
    v3 = *v2;
    result = j_j_j__ZN17MinecraftEventing26fireLegacyWorldUploadEventERKN6Legacy21WorldConversionReportEb20WorldConversionError();
  }
  return result;
}


signed int __fastcall PlayScreenModel::_fetchInviteCount(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r5@1
  signed int result; // r0@1
  __int64 v3; // kr00_8@2
  unsigned int *v4; // r0@3
  unsigned int v5; // r1@5
  _QWORD *v6; // r0@8
  unsigned int *v7; // r1@9
  unsigned int v8; // r2@11
  __int64 v9; // r1@14
  unsigned int *v10; // r1@17
  unsigned int v11; // r0@19
  unsigned int *v12; // r2@25
  unsigned int v13; // r1@27
  _QWORD *v14; // [sp+0h] [bp-28h]@14
  void (*v15)(void); // [sp+8h] [bp-20h]@8
  char v16; // [sp+10h] [bp-18h]@2
  int v17; // [sp+14h] [bp-14h]@2

  v1 = this;
  result = MinecraftScreenModel::isRealmsEnabled(this);
  if ( result == 1 )
  {
    *((_BYTE *)v1 + 296) = 1;
    PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v16, (int)v1);
    v3 = *(_QWORD *)&v16;
    if ( v17 )
    {
      v4 = (unsigned int *)(v17 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
      }
      else
        ++*v4;
    }
    v15 = 0;
    v6 = operator new(8u);
    *v6 = v3;
    if ( HIDWORD(v3) )
      v7 = (unsigned int *)(HIDWORD(v3) + 8);
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        ++*v7;
    LODWORD(v9) = sub_12ED2A0;
    v14 = v6;
    HIDWORD(v9) = sub_12ED1C8;
    *(_QWORD *)&v15 = v9;
    MinecraftScreenModel::getRealmsInviteCount((int)v1, (int)&v14);
    if ( v15 )
      v15();
      v10 = (unsigned int *)(HIDWORD(v3) + 8);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
    result = v17;
      v12 = (unsigned int *)(v17 + 8);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  return result;
}


char *__fastcall PlayScreenModel::handleWorldTemplateClicked(PlayScreenModel *this, int a2)
{
  MainMenuScreenModel *v2; // r4@1
  char *result; // r0@1
  WorldTemplateInfo *v4; // r5@1
  PackManifest *v5; // r0@4
  char *v6; // r1@4

  v2 = this;
  result = (char *)WorldTemplateManager::getWorldTemplateAtIndex(*((WorldTemplateManager **)this + 27), a2);
  v4 = (WorldTemplateInfo *)result;
  if ( result )
  {
    if ( WorldTemplateInfo::isVirtualCatalogItem((WorldTemplateInfo *)result)
      || WorldTemplateInfo::isPremiumLocked(v4) == 1 )
    {
      v5 = (PackManifest *)WorldTemplateInfo::getPackManifest(v4);
      v6 = PackManifest::getIdentity(v5);
      result = (char *)j_j_j__ZN19MainMenuScreenModel29navigateToPurchaseOfferScreenERKN3mce4UUIDE21StoreNavigationOriginRKSs(
                         (int)v2,
                         (int)v6,
                         3,
                         (int *)&CatalogContentType::DurableOffer);
    }
    else
      result = j_j_j__ZN19MainMenuScreenModel29navigateToWorldTemplateScreenEPK17WorldTemplateInfo(v2, v4);
  }
  return result;
}


    && (v7 = **a2, PlayScreenModel::getWorldCount(*(_DWORD *)(**a2 + 432), 2, 0) > a4)
{
     || !strcmp(v8, "friends_realms")
     && (v4 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v7 + 432)), v4 >= 0)) )
  {
    v9 = (RealmsWorldInfo *)PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v7 + 432), v4);
    v10 = (int *)RealmsWorldInfo::getWorldName(v9);
    result = sub_21E8AF4(v6, v10);
  }
  else
    result = (int *)&unk_28898CC;
    *v6 = (int)&unk_28898CC;
  return result;
}


  if ( PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v1 + 432))
{
        Options::getShowRealmsTrialButtonFromPlayScreen(v2) != 1)
    || MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 432)) != 1
    || MinecraftScreenModel::isRealmsDisabledForBeta(*(MinecraftScreenModel **)(v1 + 432))
    || !*(_BYTE *)(v1 + 456) )
  {
    result = 0;
  }
  else
    v3 = 0;
    if ( PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v1 + 432)) == 1
      && !PlayScreenModel::getRealmsStatus(*(PlayScreenModel **)(v1 + 432)) )
    {
      v3 = 1;
    }
    result = v3;
  return result;
}


int __fastcall PlayScreenModel::getNetworkWorldAtIndex(int a1, signed int a2, int a3)
{
  int v3; // r3@3
  int v4; // r12@3
  signed int v5; // r3@5
  int result; // r0@11

  if ( a2 < 0 )
    goto def_12E0732;
  switch ( a3 )
  {
    case 1:
      v3 = *(_QWORD *)(a1 + 152) >> 32;
      v4 = *(_QWORD *)(a1 + 152);
      goto LABEL_8;
    case 3:
      v3 = *(_QWORD *)(a1 + 140) >> 32;
      v4 = *(_QWORD *)(a1 + 140);
    case 4:
      v5 = (signed int)((*(_QWORD *)(a1 + 188) >> 32) - *(_QWORD *)(a1 + 188)) >> 3;
      break;
    case 2:
      v3 = *(_QWORD *)(a1 + 164) >> 32;
      v4 = *(_QWORD *)(a1 + 164);
LABEL_8:
      v5 = 438261969 * ((v3 - v4) >> 3);
    default:
      v5 = 0;
  }
  if ( v5 <= a2 )
def_12E0732:
    result = 0;
  else
    switch ( a3 )
    {
      case 1:
        result = *(_DWORD *)(a1 + 152) + 392 * a2;
        break;
      case 2:
        result = *(_DWORD *)(a1 + 164) + 392 * a2;
      case 3:
        result = *(_DWORD *)(a1 + 140) + 392 * a2;
      case 4:
        result = *(_DWORD *)(*(_DWORD *)(a1 + 188) + 8 * a2);
      default:
        goto def_12E0732;
    }
  return result;
}


    && (v7 = **a2, PlayScreenModel::getWorldCount(*(_DWORD *)(**a2 + 432), 2, 0) > a4)
{
     || !strcmp(v8, "friends_realms")
     && (v4 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v7 + 432)), v4 >= 0)) )
  {
    v9 = PlayScreenModel::getRealmWorldAtIndex(*(PlayScreenModel **)(v7 + 432), v4);
    RealmsWorldInfo::getPlayerCountAsString(v6, v9);
  }
  else
    *(_DWORD *)v6 = &unk_28898CC;
}


void __fastcall PlayScreenModel::_sortRealmsWorlds(MinecraftScreenModel *a1, int *a2, __int64 *a3)
{
  __int64 *v3; // r4@1
  int *v4; // r5@1
  __int64 v5; // kr00_8@2
  void *v6; // r0@2
  void *v7; // r0@4
  int v8; // r5@6
  void *v9; // r0@6
  void *v10; // r0@9
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  void *v19; // r0@38
  void *v20; // r0@39
  void *v21; // r0@40
  void *v22; // r0@43
  void *v23; // r0@44
  void *v24; // r0@45
  void *v25; // r0@46
  unsigned int *v26; // r2@48
  signed int v27; // r1@50
  unsigned int *v28; // r2@52
  signed int v29; // r1@54
  unsigned int *v30; // r2@56
  signed int v31; // r1@58
  unsigned int *v32; // r2@60
  signed int v33; // r1@62
  unsigned int *v34; // r2@64
  signed int v35; // r1@66
  unsigned int *v36; // r2@72
  signed int v37; // r1@74
  unsigned int *v38; // r2@92
  signed int v39; // r1@94
  int v40; // [sp+0h] [bp-58h]@2
  int v41; // [sp+4h] [bp-54h]@2
  int v42; // [sp+8h] [bp-50h]@2
  int v43; // [sp+Ch] [bp-4Ch]@2
  int v44; // [sp+10h] [bp-48h]@5
  int v45; // [sp+14h] [bp-44h]@4
  int v46; // [sp+18h] [bp-40h]@9
  int v47; // [sp+1Ch] [bp-3Ch]@7
  int v48; // [sp+20h] [bp-38h]@6
  int v49; // [sp+24h] [bp-34h]@22
  int v50; // [sp+28h] [bp-30h]@18
  int v51; // [sp+2Ch] [bp-2Ch]@14

  v3 = a3;
  v4 = a2;
  if ( MinecraftScreenModel::isRealmsEnabled(a1) != 1 )
    return;
  v5 = *v3;
  sub_21E8AF4(&v40, v4);
  sub_21E8AF4(&v41, &v40);
  sub_21E8AF4(&v43, &v41);
  sub_21E8AF4(&v42, &v43);
  v6 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v43 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( (_DWORD)v5 != HIDWORD(v5) )
    sub_21E8AF4(&v45, &v42);
    sub_12EA584(v5, HIDWORD(v5), 2 * (31 - __clz(954437177 * ((HIDWORD(v5) - (signed int)v5) >> 3))), &v45);
    v7 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v45 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    sub_21E8AF4(&v44, &v42);
    if ( HIDWORD(v5) - (signed int)v5 <= 1152 )
      sub_21E8AF4(&v46, &v44);
      sub_12EB674(v5, (__int64 *)HIDWORD(v5), &v46);
      v10 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) == &dword_28898C0 )
LABEL_43:
        v22 = (void *)(v44 - 12);
        if ( (int *)(v44 - 12) != &dword_28898C0 )
        {
          v36 = (unsigned int *)(v44 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          }
          else
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        }
        goto LABEL_44;
      v11 = (unsigned int *)(v46 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
LABEL_108:
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
        goto LABEL_43;
      sub_21E8AF4(&v48, &v44);
      v8 = v5 + 1152;
      sub_12EB674(v5, (__int64 *)(v5 + 1152), &v48);
      v9 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v48 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
        else
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      sub_21E8AF4(&v47, &v44);
      for ( ; v8 != HIDWORD(v5); v8 += 72 )
        sub_21E8AF4(&v49, &v47);
        sub_21E8AF4(&v51, &v49);
        sub_21E8AF4(&v50, &v51);
        v19 = (void *)(v51 - 12);
        if ( (int *)(v51 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v51 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        sub_12EB96C(v8, (const void **)&v50);
        v20 = (void *)(v50 - 12);
        if ( (int *)(v50 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v50 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = (void *)(v49 - 12);
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v49 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
      v10 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) == &dword_28898C0 )
      v11 = (unsigned int *)(v47 - 4);
        goto LABEL_108;
    v12 = (*v11)--;
    goto LABEL_108;
LABEL_44:
  v23 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v42 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v41 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
}


signed int __fastcall PlayScreenModel::fetchRealmsPlayerCounts(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r5@1
  signed int result; // r0@1
  bool v3; // zf@1
  __int64 v4; // kr00_8@5
  unsigned int *v5; // r0@6
  unsigned int v6; // r1@8
  _QWORD *v7; // r0@11
  unsigned int *v8; // r1@12
  unsigned int v9; // r2@14
  __int64 v10; // r1@17
  unsigned int *v11; // r1@20
  unsigned int v12; // r0@22
  unsigned int *v13; // r2@28
  unsigned int v14; // r1@30
  _QWORD *v15; // [sp+0h] [bp-28h]@17
  void (*v16)(void); // [sp+8h] [bp-20h]@11
  char v17; // [sp+10h] [bp-18h]@5
  int v18; // [sp+14h] [bp-14h]@5

  v1 = this;
  result = MinecraftScreenModel::isRealmsEnabled(this);
  v3 = result == 1;
  if ( result == 1 )
  {
    result = *((_BYTE *)v1 + 308);
    v3 = result == 0;
  }
  if ( v3 )
    *((_BYTE *)v1 + 308) = 1;
    PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v17, (int)v1);
    v4 = *(_QWORD *)&v17;
    if ( v18 )
    {
      v5 = (unsigned int *)(v18 + 8);
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
    v16 = 0;
    v7 = operator new(8u);
    *v7 = v4;
    if ( HIDWORD(v4) )
      v8 = (unsigned int *)(HIDWORD(v4) + 8);
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        ++*v8;
    LODWORD(v10) = sub_12ED848;
    v15 = v7;
    HIDWORD(v10) = sub_12ED4A4;
    *(_QWORD *)&v16 = v10;
    MinecraftScreenModel::getRealmsOnlinePlayers((int)v1, (int)&v15);
    if ( v16 )
      v16();
      v11 = (unsigned int *)(HIDWORD(v4) + 8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
    result = v18;
      v13 = (unsigned int *)(v18 + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall PlayScreenModel::_populateRealmsWorlds(PlayScreenModel *this)
{
  PlayScreenModel::_populateRealmsWorlds(this);
}


void __fastcall PlayScreenModel::navigateToEditWorldScreen(int a1, int a2, int a3)
{
  PlayScreenModel::navigateToEditWorldScreen(a1, a2, a3);
}


int __fastcall PlayScreenModel::_fetchTrialAvailability(PlayScreenModel *this)
{
  PlayScreenModel *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  int result; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  _QWORD *v14; // [sp+0h] [bp-28h]@13
  void (*v15)(void); // [sp+8h] [bp-20h]@7
  char v16; // [sp+10h] [bp-18h]@1
  int v17; // [sp+14h] [bp-14h]@1

  v1 = this;
  PlayScreenModel::_getWeakPtr((PlayScreenModel *)&v16, (int)this);
  v2 = *(_QWORD *)&v16;
  if ( v17 )
  {
    v3 = (unsigned int *)(v17 + 8);
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
  v15 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  LODWORD(v8) = sub_12ED400;
  v14 = v5;
  HIDWORD(v8) = sub_12ED344;
  *(_QWORD *)&v15 = v8;
  MinecraftScreenModel::updateRealmsTrialAvailable((int)v1, (int)&v14);
  if ( v15 )
    v15();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  result = v17;
    v12 = (unsigned int *)(v17 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall PlayScreenModel::uploadLocalWorldFile(int a1, int *a2, int a3)
{
  PlayScreenModel::uploadLocalWorldFile(a1, a2, a3);
}
