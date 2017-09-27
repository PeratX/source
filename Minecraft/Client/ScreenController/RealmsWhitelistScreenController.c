

void __fastcall RealmsWhitelistScreenController::_updateFriendsList(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController::_updateFriendsList(this);
}


signed int __fastcall RealmsWhitelistScreenController::_handleOperatorClick(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r6@1
  char v6; // r8@1
  int v7; // r5@1
  Json::Value *v8; // r4@4
  char *v9; // r1@5
  char *v10; // r0@7
  _DWORD *v11; // r7@8
  _DWORD *v12; // r0@10
  signed int v13; // r4@13
  int v14; // r0@15
  signed int v15; // r2@16
  char *v16; // r0@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  char *v22; // [sp+4h] [bp-34h]@2
  char *v23; // [sp+8h] [bp-30h]@5
  char v24; // [sp+10h] [bp-28h]@5

  v5 = a3;
  v6 = a4;
  v7 = a1;
  if ( a3 < 0 )
  {
    v13 = 0;
  }
  else
    sub_21E8AF4((int *)&v22, (int *)&Util::EMPTY_STRING);
    if ( Json::Value::isNull((Json::Value *)(a5 + 8))
      || Json::Value::isObject((Json::Value *)(a5 + 8)) != 1
      || (v8 = (Json::Value *)Json::Value::operator[](a5 + 8, "#collection_name"), Json::Value::isString(v8) != 1) )
    {
      v23 = v22;
      v9 = (char *)&unk_28898CC;
      v22 = (char *)&unk_28898CC;
    }
    else
      jsonValConversion<std::string>::as((int *)&v23, (int)&v24, (int)v8);
      v9 = v22;
    v10 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v9 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    v11 = (_DWORD *)RealmsWhitelistScreenController::_getListFromCollection(
                      (RealmsWhitelistScreenController *)v7,
                      (UIPropertyBag *)a5);
    if ( sub_21E7D6C((const void **)&v23, "members_collection") )
      if ( sub_21E7D6C((const void **)&v23, "invited_friends_collection") )
        v12 = (_DWORD *)(v7 + 608);
        v12 = (_DWORD *)(v7 + 612);
      v12 = (_DWORD *)(v7 + 616);
    v14 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
            (unsigned __int64 *)(v7 + 640),
            (int **)(*v11 + 4 * (v5 + 10 * *v12)));
    if ( v14 )
      v15 = 3;
      v13 = 1;
      if ( *(_DWORD *)(v14 + 36) == 3 )
        v15 = 2;
      *(_DWORD *)(v14 + 36) = v15;
      *(_BYTE *)(v14 + 43) ^= 1u;
      *(_BYTE *)(v14 + 40) = v6 & 1;
      v13 = 0;
    v16 = v23 - 12;
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  return v13;
}


void __fastcall RealmsWhitelistScreenController::_refreshOrExit(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 432) || !*(_BYTE *)(a1 + 589) )
  {
    if ( *(_DWORD *)(a2 + 8) )
      (*(void (__fastcall **)(_DWORD))(a2 + 12))(a2);
  }
  else
    j_j_j__ZN31RealmsWhitelistScreenController10_joinRealmEv((RealmsWhitelistScreenController *)a1);
}


ModalScreenData *__fastcall RealmsWhitelistScreenController::_showErrorPopup(int a1, int *a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r7@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int *v7; // r4@1
  int *v8; // r5@1
  ModalScreenData *result; // r0@3
  char v10; // [sp+4h] [bp-24h]@2
  int (*v11)(void); // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@2

  v4 = a1;
  v5 = a4;
  v11 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v6(&v10, v5, 2);
    v12 = *(_DWORD *)(v5 + 12);
    v11 = *(int (**)(void))(v5 + 8);
  }
  result = MinecraftScreenController::_displayStandardModalPopup(v4, v8, v7, 2, (int)&v10);
  if ( v11 )
    result = (ModalScreenData *)v11();
  return result;
}


void __fastcall RealmsWhitelistScreenController::_joinRealm(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r6@1
  __int64 v2; // r4@2
  __int64 v3; // kr00_8@2
  unsigned int *v4; // r0@3
  unsigned int v5; // r1@5
  signed int v6; // r1@7
  int v7; // r7@7
  signed int v8; // r8@7
  int v9; // r4@8
  void *v10; // r0@8
  void *v11; // r0@9
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  signed int v14; // r11@14
  unsigned int *v15; // r1@16
  unsigned int v16; // r2@18
  unsigned int *v17; // r1@22
  unsigned int v18; // r2@24
  unsigned int v19; // r2@31
  unsigned int *v20; // r0@36
  unsigned int v21; // r1@38
  int v22; // r3@42 OVERLAPPED
  int v23; // r4@42 OVERLAPPED
  unsigned int *v24; // r0@43
  unsigned int v25; // r1@45
  int v26; // r5@46
  int v27; // r2@47
  signed int v28; // r5@48
  unsigned int *v29; // r0@50
  unsigned int v30; // r1@52
  unsigned int *v31; // r0@58
  unsigned int v32; // r1@60
  unsigned int *v33; // r0@64
  unsigned int v34; // r1@66
  int v35; // r10@69
  int v36; // r12@69
  void *v37; // r5@69
  unsigned int *v38; // r0@70
  unsigned int v39; // r1@72
  unsigned int *v40; // r0@76
  unsigned int v41; // r1@78
  unsigned int *v42; // r0@82
  unsigned int v43; // r1@84
  _DWORD *v44; // r0@87
  unsigned int *v45; // r1@88
  unsigned int v46; // r2@90
  unsigned int *v47; // r1@94
  unsigned int v48; // r2@96
  unsigned int *v49; // r1@100
  unsigned int v50; // r2@102
  __int64 v51; // r1@105
  unsigned int *v52; // r0@106
  unsigned int v53; // r1@108
  _DWORD *v54; // r0@111
  unsigned int *v55; // r1@112
  unsigned int v56; // r2@114
  __int64 v57; // r1@117
  unsigned int *v58; // r1@120
  unsigned int v59; // r0@122
  unsigned int *v60; // r1@130
  unsigned int v61; // r0@132
  unsigned int *v62; // r1@138
  unsigned int v63; // r0@140
  unsigned int *v64; // r1@146
  unsigned int v65; // r0@148
  void *v66; // r0@153
  void *v67; // r5@154
  unsigned int *v68; // r0@155
  unsigned int v69; // r1@157
  unsigned int *v70; // r0@161
  unsigned int v71; // r1@163
  unsigned int *v72; // r0@167
  unsigned int v73; // r1@169
  _DWORD *v74; // r0@172
  unsigned int *v75; // r1@173
  unsigned int v76; // r2@175
  unsigned int *v77; // r1@179
  unsigned int v78; // r2@181
  unsigned int *v79; // r1@185
  unsigned int v80; // r2@187
  __int64 v81; // r1@190
  unsigned int *v82; // r1@193
  unsigned int v83; // r0@195
  unsigned int *v84; // r1@201
  unsigned int v85; // r0@203
  unsigned int *v86; // r1@209
  unsigned int v87; // r0@211
  int v88; // r10@216
  void *v89; // r0@220
  int v90; // r5@221
  void *v91; // r0@221
  unsigned int *v92; // r1@223
  unsigned int v93; // r0@225
  unsigned int *v94; // r1@231
  unsigned int v95; // r0@233
  unsigned int *v96; // r1@239
  unsigned int v97; // r0@241
  unsigned int *v98; // r1@247
  unsigned int v99; // r0@249
  unsigned int *v100; // r1@255
  unsigned int v101; // r0@257
  unsigned int *v102; // r1@263
  unsigned int v103; // r0@265
  unsigned int *v104; // r1@271
  unsigned int v105; // r0@273
  unsigned int *v106; // r1@279
  unsigned int v107; // r0@281
  unsigned int *v108; // r1@287
  unsigned int v109; // r0@289
  int v110; // r0@294
  unsigned int *v111; // r2@295
  unsigned int v112; // r1@297
  unsigned int *v113; // r2@303
  signed int v114; // r1@305
  unsigned int *v115; // r2@307
  signed int v116; // r1@309
  unsigned int *v117; // r2@311
  signed int v118; // r1@313
  unsigned int *v119; // r2@315
  signed int v120; // r1@317
  int v121; // [sp+0h] [bp-B8h]@48
  int v122; // [sp+4h] [bp-B4h]@46
  int v123; // [sp+4h] [bp-B4h]@153
  int v124; // [sp+8h] [bp-B0h]@7
  int v125; // [sp+Ch] [bp-ACh]@48
  int v126; // [sp+14h] [bp-A4h]@14
  int v127; // [sp+18h] [bp-A0h]@7
  signed int v128; // [sp+1Ch] [bp-9Ch]@63
  int v129; // [sp+20h] [bp-98h]@44
  int v130; // [sp+2Ch] [bp-8Ch]@221
  int v131; // [sp+30h] [bp-88h]@216
  void *v132; // [sp+34h] [bp-84h]@216
  int v133; // [sp+3Ch] [bp-7Ch]@216
  __int64 v134; // [sp+40h] [bp-78h]@2
  int v135; // [sp+4Ch] [bp-6Ch]@8
  int v136; // [sp+54h] [bp-64h]@8
  _DWORD *v137; // [sp+58h] [bp-60h]@117
  void (*v138)(void); // [sp+60h] [bp-58h]@111
  _DWORD *v139; // [sp+68h] [bp-50h]@69
  void (*v140)(void); // [sp+70h] [bp-48h]@87
  int v141; // [sp+7Ch] [bp-3Ch]@69
  _DWORD *v142; // [sp+80h] [bp-38h]@190
  void (*v143)(void); // [sp+88h] [bp-30h]@172

  v1 = this;
  if ( MinecraftScreenModel::isValidMultiplayerSkin(*((MinecraftScreenModel **)this + 106)) )
  {
    MinecraftScreenController::_getWeakPtrToThis<RealmsWhitelistScreenController>((int)&v134, (int)v1);
    HIDWORD(v2) = 0;
    *((_BYTE *)v1 + 472) = 0;
    v3 = v134;
    if ( !HIDWORD(v134) )
    {
      v124 = v134;
      v8 = 1;
      v126 = v134;
      v127 = v134;
      v14 = 1;
      v7 = 0;
      goto LABEL_42;
    }
    v4 = (unsigned int *)(HIDWORD(v134) + 8);
    if ( &pthread_create )
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
      v2 = v134;
      if ( !HIDWORD(v134) )
      {
        v127 = v3;
        v6 = 1;
        v7 = 0;
        HIDWORD(v2) = 0;
        v124 = v134;
        v8 = 1;
        goto LABEL_29;
      }
    else
      ++*v4;
    v15 = (unsigned int *)(HIDWORD(v2) + 8);
      v127 = v3;
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      v7 = HIDWORD(v134);
LABEL_28:
        v6 = 0;
LABEL_29:
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v4);
          while ( __strex(v19 + 1, v4) );
          v126 = v2;
          if ( v6 )
          {
            v14 = 1;
            goto LABEL_42;
          }
        }
        else
          ++*v4;
        v20 = (unsigned int *)(HIDWORD(v2) + 8);
            v21 = __ldrex(v20);
          while ( __strex(v21 + 1, v20) );
          ++*v20;
        v14 = 0;
LABEL_42:
        *(_QWORD *)&v22 = v134;
        if ( HIDWORD(v134) )
          v24 = (unsigned int *)(HIDWORD(v134) + 8);
          if ( !&pthread_create )
            v27 = HIDWORD(v134);
            v129 = HIDWORD(v2);
            v26 = v134;
            ++*v24;
            v122 = v22;
            goto LABEL_50;
          v129 = HIDWORD(v2);
            v25 = __ldrex(v24);
          while ( __strex(v25 + 1, v24) );
          v122 = v22;
          v26 = v134;
          if ( HIDWORD(v134) )
LABEL_50:
            v125 = v27;
            v29 = (unsigned int *)(v27 + 8);
            if ( &pthread_create )
            {
              v121 = v26;
              __dmb();
              do
                v30 = __ldrex(v29);
              while ( __strex(v30 + 1, v29) );
            }
            else
              ++*v29;
            v28 = 0;
            goto LABEL_57;
          v121 = v134;
          v125 = 0;
          v28 = 1;
          v122 = v134;
LABEL_57:
        if ( HIDWORD(v3) )
          v31 = (unsigned int *)(HIDWORD(v3) + 8);
          if ( &pthread_create )
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 + 1, v31) );
          else
            ++*v31;
        v128 = v28;
        if ( !v14 )
          v33 = (unsigned int *)(v129 + 8);
              v34 = __ldrex(v33);
            while ( __strex(v34 + 1, v33) );
            ++*v33;
        v35 = *((_DWORD *)v1 + 150);
        sub_21E034C(&v139);
        v36 = v35 + 8;
        *(_QWORD *)v36 = *(_QWORD *)&v139;
        *(_DWORD *)(v36 + 8) = 120;
        *(_DWORD *)(v35 + 20) = 0;
        *(_BYTE *)(v35 + 24) = 0;
        *(_BYTE *)(v35 + 1) = 0;
        v37 = operator new(0x34u);
        sub_21E94B4((void **)&v141, "realmsSettingsScreen.joiningRealm");
        if ( !v8 )
          v38 = (unsigned int *)(v7 + 8);
              v39 = __ldrex(v38);
            while ( __strex(v39 + 1, v38) );
            ++*v38;
          v40 = (unsigned int *)(HIDWORD(v3) + 8);
              v41 = __ldrex(v40);
            while ( __strex(v41 + 1, v40) );
            ++*v40;
          v42 = (unsigned int *)(v129 + 8);
              v43 = __ldrex(v42);
            while ( __strex(v43 + 1, v42) );
            ++*v42;
        v140 = 0;
        v44 = operator new(0x18u);
        *v44 = v124;
        v44[1] = v7;
          v45 = (unsigned int *)(v7 + 8);
              v46 = __ldrex(v45);
            while ( __strex(v46 + 1, v45) );
            ++*v45;
        v44[2] = v127;
        v44[3] = HIDWORD(v3);
          v47 = (unsigned int *)(HIDWORD(v3) + 8);
              v48 = __ldrex(v47);
            while ( __strex(v48 + 1, v47) );
            ++*v47;
        v44[4] = v126;
        v44[5] = v129;
          v49 = (unsigned int *)(v129 + 8);
              v50 = __ldrex(v49);
            while ( __strex(v50 + 1, v49) );
            ++*v49;
        HIDWORD(v51) = sub_1222D44;
        v139 = v44;
        LODWORD(v51) = sub_12234A0;
        *(_QWORD *)&v140 = v51;
        if ( v23 )
          v52 = (unsigned int *)(v23 + 8);
              v53 = __ldrex(v52);
            while ( __strex(v53 + 1, v52) );
            ++*v52;
        v138 = 0;
        v54 = operator new(8u);
        *v54 = v122;
        v54[1] = v23;
          v55 = (unsigned int *)(v23 + 8);
              v56 = __ldrex(v55);
            while ( __strex(v56 + 1, v55) );
            ++*v55;
        LODWORD(v57) = sub_12244C0;
        HIDWORD(v57) = sub_1224364;
        v137 = v54;
        *(_QWORD *)&v138 = v57;
        RealmsConnectProgressHandler::RealmsConnectProgressHandler((int)v37, &v141, (int)&v139, (int)&v137);
        if ( v138 )
          v138();
          v58 = (unsigned int *)(v23 + 8);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 == 1 )
            (*(void (**)(void))(*(_DWORD *)v23 + 12))();
        if ( v140 )
          v140();
          v60 = (unsigned int *)(v129 + 8);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v129 + 12))(v129);
          v62 = (unsigned int *)(HIDWORD(v3) + 8);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
          v64 = (unsigned int *)(v7 + 8);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
        v123 = (int)v37;
        v66 = (void *)(v141 - 12);
        if ( (int *)(v141 - 12) != &dword_28898C0 )
          v115 = (unsigned int *)(v141 - 4);
              v116 = __ldrex(v115);
            while ( __strex(v116 - 1, v115) );
            v116 = (*v115)--;
          if ( v116 <= 0 )
            j_j_j_j__ZdlPv_9(v66);
        v67 = operator new(0x38u);
        if ( !v128 )
          v68 = (unsigned int *)(v125 + 8);
              v69 = __ldrex(v68);
            while ( __strex(v69 + 1, v68) );
            ++*v68;
          v70 = (unsigned int *)(HIDWORD(v3) + 8);
              v71 = __ldrex(v70);
            while ( __strex(v71 + 1, v70) );
            ++*v70;
          v72 = (unsigned int *)(v129 + 8);
              v73 = __ldrex(v72);
            while ( __strex(v73 + 1, v72) );
            ++*v72;
        v143 = 0;
        v74 = operator new(0x18u);
        *v74 = v121;
        v74[1] = v125;
          v75 = (unsigned int *)(v125 + 8);
              v76 = __ldrex(v75);
            while ( __strex(v76 + 1, v75) );
            ++*v75;
        v74[2] = v127;
        v74[3] = HIDWORD(v3);
          v77 = (unsigned int *)(HIDWORD(v3) + 8);
              v78 = __ldrex(v77);
            while ( __strex(v78 + 1, v77) );
            ++*v77;
        v74[4] = v126;
        v74[5] = v129;
          v79 = (unsigned int *)(v129 + 8);
              v80 = __ldrex(v79);
            while ( __strex(v80 + 1, v79) );
            ++*v79;
        LODWORD(v81) = sub_1224924;
        v142 = v74;
        HIDWORD(v81) = sub_1224564;
        *(_QWORD *)&v143 = v81;
        GameServerConnectProgressHandler::GameServerConnectProgressHandler((int)v67, 3, (int)&v142, 1);
        if ( v143 )
          v143();
          v82 = (unsigned int *)(v129 + 8);
              v83 = __ldrex(v82);
            while ( __strex(v83 - 1, v82) );
            v83 = (*v82)--;
          if ( v83 == 1 )
          v84 = (unsigned int *)(HIDWORD(v3) + 8);
              v85 = __ldrex(v84);
            while ( __strex(v85 - 1, v84) );
            v85 = (*v84)--;
          if ( v85 == 1 )
          v86 = (unsigned int *)(v125 + 8);
              v87 = __ldrex(v86);
            while ( __strex(v87 - 1, v86) );
            v87 = (*v86)--;
          if ( v87 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v125 + 12))(v125);
        v88 = *((_DWORD *)v1 + 106);
        sub_21E94B4((void **)&v133, "realms_joining");
        v132 = v67;
        v131 = v123;
        MainMenuScreenModel::navigateToRealmsWorldProgressScreen(v88, &v133, (int *)&v132, &v131);
        if ( v131 )
          (*(void (**)(void))(*(_DWORD *)v131 + 4))();
        v131 = 0;
        if ( v132 )
          (*(void (**)(void))(*(_DWORD *)v132 + 4))();
        v132 = 0;
        v89 = (void *)(v133 - 12);
        if ( (int *)(v133 - 12) != &dword_28898C0 )
          v117 = (unsigned int *)(v133 - 4);
              v118 = __ldrex(v117);
            while ( __strex(v118 - 1, v117) );
            v118 = (*v117)--;
          if ( v118 <= 0 )
            j_j_j_j__ZdlPv_9(v89);
        v90 = *((_DWORD *)v1 + 106);
        sub_21E94B4((void **)&v130, (const char *)&unk_257BC67);
        MinecraftScreenModel::fireEventStartWorld(v90, 4, &v130);
        v91 = (void *)(v130 - 12);
        if ( (int *)(v130 - 12) != &dword_28898C0 )
          v119 = (unsigned int *)(v130 - 4);
              v120 = __ldrex(v119);
            while ( __strex(v120 - 1, v119) );
            v120 = (*v119)--;
          if ( v120 <= 0 )
            j_j_j_j__ZdlPv_9(v91);
          v92 = (unsigned int *)(v129 + 8);
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
            v93 = (*v92)--;
          if ( v93 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v129 + 12))(v129);
          v94 = (unsigned int *)(HIDWORD(v3) + 8);
              v95 = __ldrex(v94);
            while ( __strex(v95 - 1, v94) );
            v95 = (*v94)--;
          if ( v95 == 1 )
          v96 = (unsigned int *)(v125 + 8);
              v97 = __ldrex(v96);
            while ( __strex(v97 - 1, v96) );
            v97 = (*v96)--;
          if ( v97 == 1 )
            (*(void (**)(void))(*(_DWORD *)v125 + 12))();
          v98 = (unsigned int *)(v23 + 8);
              v99 = __ldrex(v98);
            while ( __strex(v99 - 1, v98) );
            v99 = (*v98)--;
          if ( v99 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
          v100 = (unsigned int *)(v129 + 8);
              v101 = __ldrex(v100);
            while ( __strex(v101 - 1, v100) );
            v101 = (*v100)--;
          if ( v101 == 1 )
          v102 = (unsigned int *)(HIDWORD(v3) + 8);
              v103 = __ldrex(v102);
            while ( __strex(v103 - 1, v102) );
            v103 = (*v102)--;
          if ( v103 == 1 )
          v104 = (unsigned int *)(v7 + 8);
              v105 = __ldrex(v104);
            while ( __strex(v105 - 1, v104) );
            v105 = (*v104)--;
          if ( v105 == 1 )
          v106 = (unsigned int *)(v129 + 8);
              v107 = __ldrex(v106);
            while ( __strex(v107 - 1, v106) );
            v107 = (*v106)--;
          if ( v107 == 1 )
          v108 = (unsigned int *)(HIDWORD(v3) + 8);
              v109 = __ldrex(v108);
            while ( __strex(v109 - 1, v108) );
            v109 = (*v108)--;
          if ( v109 == 1 )
        v110 = HIDWORD(v134);
          v111 = (unsigned int *)(HIDWORD(v134) + 8);
              v112 = __ldrex(v111);
            while ( __strex(v112 - 1, v111) );
            v112 = (*v111)--;
          if ( v112 == 1 )
            (*(void (**)(void))(*(_DWORD *)v110 + 12))();
        return;
      v7 = HIDWORD(v2);
      ++*v15;
      v124 = v2;
    v17 = (unsigned int *)(v7 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
    v8 = 0;
    goto LABEL_28;
  }
  v9 = *((_DWORD *)v1 + 106);
  sub_21E94B4((void **)&v136, "disconnectionScreen.lockedSkin.title");
  sub_21E94B4((void **)&v135, "disconnectionScreen.lockedSkin");
  MinecraftScreenModel::navigateToDisconnectScreen(v9, &v136, &v135);
  v10 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v135 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v136 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall RealmsWhitelistScreenController::_clearFromFriendLists(int a1, int *a2)
{
  int v2; // r9@1
  int *v3; // r8@1
  int v4; // r4@1
  int *v5; // r10@1
  void *v6; // r0@1
  _DWORD *v7; // r11@2
  int v8; // r0@2
  size_t v9; // r5@3
  int v10; // r7@3
  const void **v11; // r6@5
  _DWORD *v12; // r1@6
  _DWORD *v13; // r1@8
  _DWORD *v14; // r1@10
  int v15; // r0@14
  size_t v16; // r5@16
  void *v17; // r0@30
  int *v18; // r5@32
  _DWORD *v19; // r7@33
  const void **v20; // r1@33
  const void *v21; // r1@35
  size_t v22; // r2@35
  int v23; // r0@36
  void *v24; // r0@41
  int *v25; // r4@42
  char *v26; // r1@44
  int *v27; // r5@44
  int (**v28)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@44
  unsigned int *v29; // r2@45
  signed int v30; // r6@47
  char *v31; // r6@51
  int (**v32)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@51
  int *v33; // r0@52
  void *v34; // r0@55
  int v35; // r4@56
  int *v36; // r10@56
  void *v37; // r0@56
  _DWORD *v38; // r11@57
  int v39; // r0@57
  size_t v40; // r5@58
  int v41; // r7@58
  const void **v42; // r6@60
  _DWORD *v43; // r1@61
  _DWORD *v44; // r1@63
  _DWORD *v45; // r1@65
  int v46; // r0@69
  size_t v47; // r5@71
  void *v48; // r0@85
  int *v49; // r5@87
  _DWORD *v50; // r7@88
  const void **v51; // r1@88
  const void *v52; // r1@90
  size_t v53; // r2@90
  int v54; // r0@91
  void *v55; // r0@96
  int *v56; // r4@97
  char *v57; // r1@99
  int *v58; // r5@99
  int (**v59)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@99
  unsigned int *v60; // r2@100
  signed int v61; // r6@102
  char *v62; // r6@106
  int (**v63)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@106
  int *v64; // r0@107
  void *v65; // r0@110
  int v66; // r4@111
  int *v67; // r10@111
  void *v68; // r0@111
  _DWORD *v69; // r8@112
  int v70; // r0@112
  size_t v71; // r7@113
  int v72; // r6@113
  const void **v73; // r5@115
  _DWORD *v74; // r1@116
  _DWORD *v75; // r1@118
  _DWORD *v76; // r1@120
  int v77; // r0@124
  size_t v78; // r7@126
  void *v79; // r0@140
  int *v80; // r6@142
  _DWORD *v81; // r7@143
  const void **v82; // r1@143
  const void *v83; // r1@145
  size_t v84; // r2@145
  int v85; // r0@146
  void *v86; // r0@151
  int *v87; // r4@152
  int *v88; // r5@154
  unsigned int *v89; // r2@155
  signed int v90; // r1@157
  int *v91; // r0@163
  void *v92; // r0@166
  unsigned int *v93; // r2@168
  signed int v94; // r1@170
  unsigned int *v95; // r2@172
  signed int v96; // r1@174
  unsigned int *v97; // r2@176
  signed int v98; // r1@178
  unsigned int *v99; // r2@180
  signed int v100; // r1@182
  unsigned int *v101; // r2@184
  signed int v102; // r1@186
  unsigned int *v103; // r2@188
  signed int v104; // r1@190
  unsigned int *v105; // r2@192
  signed int v106; // r1@194
  unsigned int *v107; // r2@196
  signed int v108; // r1@198
  unsigned int *v109; // r2@200
  signed int v110; // r1@202
  unsigned int *v111; // r2@204
  signed int v112; // r1@206
  unsigned int *v113; // r2@208
  signed int v114; // r1@210
  unsigned int *v115; // r2@212
  signed int v116; // r1@214
  unsigned int *v117; // r2@216
  signed int v118; // r1@218
  unsigned int *v119; // r2@220
  signed int v120; // r1@222
  unsigned int *v121; // r2@224
  signed int v122; // r1@226
  unsigned int *v123; // r2@228
  signed int v124; // r1@230
  unsigned int *v125; // r2@232
  signed int v126; // r1@234
  unsigned int *v127; // r2@236
  signed int v128; // r1@238
  int v129; // [sp+0h] [bp-70h]@111
  int v130; // [sp+4h] [bp-6Ch]@56
  int v131; // [sp+8h] [bp-68h]@1
  int v132; // [sp+Ch] [bp-64h]@1
  void *v133; // [sp+10h] [bp-60h]@1
  int v134; // [sp+14h] [bp-5Ch]@1
  int v135; // [sp+18h] [bp-58h]@2
  void *s1; // [sp+1Ch] [bp-54h]@2
  int v137; // [sp+20h] [bp-50h]@56
  void *v138; // [sp+24h] [bp-4Ch]@56
  int v139; // [sp+28h] [bp-48h]@56
  int v140; // [sp+2Ch] [bp-44h]@57
  void *v141; // [sp+30h] [bp-40h]@57
  int v142; // [sp+34h] [bp-3Ch]@111
  void *v143; // [sp+38h] [bp-38h]@111
  int v144; // [sp+3Ch] [bp-34h]@111
  int v145; // [sp+40h] [bp-30h]@112
  void *v146; // [sp+44h] [bp-2Ch]@112
  char v147; // [sp+48h] [bp-28h]@44

  v2 = a1;
  v3 = a2;
  v5 = (int *)(*(_QWORD *)(a1 + 716) >> 32);
  v4 = *(_QWORD *)(a1 + 716);
  sub_21E8AF4(&v131, a2);
  sub_21E8AF4(&v132, &v131);
  sub_21E8AF4(&v134, &v132);
  sub_21E8AF4((int *)&v133, &v134);
  v6 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
  {
    v93 = (unsigned int *)(v134 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
    }
    else
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E8AF4(&v135, (int *)&v133);
  sub_21E8AF4((int *)&s1, &v135);
  v7 = s1;
  v8 = ((signed int)v5 - v4) >> 4;
  if ( v8 < 1 )
LABEL_13:
    if ( 3 == ((signed int)v5 - v4) >> 2 )
      v16 = *(v7 - 3);
      if ( v16 == *(_DWORD *)(*(_DWORD *)v4 - 12) )
      {
        v11 = (const void **)v4;
        if ( !memcmp(v7, *(const void **)v4, *(v7 - 3)) )
          goto LABEL_29;
      }
      v11 = (const void **)(v4 + 4);
      v15 = ((signed int)v5 - v4) >> 2;
      if ( v15 != 2 )
        if ( v15 != 1 )
          goto LABEL_28;
        v16 = *(v7 - 3);
LABEL_24:
        if ( v16 == *((_DWORD *)*v11 - 3) )
        {
          if ( memcmp(v7, *v11, v16) )
            v11 = (const void **)v5;
        }
LABEL_28:
        v11 = (const void **)v5;
        goto LABEL_29;
      v11 = (const void **)v4;
    if ( v16 == *((_DWORD *)*v11 - 3) && !memcmp(v7, *v11, v16) )
      goto LABEL_29;
    ++v11;
    goto LABEL_24;
  v9 = *((_DWORD *)s1 - 3);
  v10 = v8 + 1;
  while ( 1 )
    if ( v9 == *(_DWORD *)(*(_DWORD *)v4 - 12) )
      if ( !memcmp(v7, *(const void **)v4, v9) )
        break;
    v11 = (const void **)(v4 + 4);
    v12 = *(_DWORD **)(v4 + 4);
    if ( v9 == *(v12 - 3) && !memcmp(v7, v12, v9) )
      break;
    v11 = (const void **)(v4 + 8);
    v13 = *(_DWORD **)(v4 + 8);
    if ( v9 == *(v13 - 3) && !memcmp(v7, v13, v9) )
    v11 = (const void **)(v4 + 12);
    v14 = *(_DWORD **)(v4 + 12);
    if ( v9 == *(v14 - 3) && !memcmp(v7, v14, v9) )
    --v10;
    v4 += 16;
    if ( v10 <= 1 )
      goto LABEL_13;
LABEL_29:
  if ( v7 - 3 != &dword_28898C0 )
    v95 = v7 - 1;
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v7 - 3);
  v17 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v135 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( (int *)v11 == v5 )
    v19 = v133;
  else
    v18 = (int *)v11;
LABEL_33:
    v20 = v11 + 1;
    while ( 1 )
      v11 = v20;
      if ( (const void **)v5 == v20 )
      v21 = *v20;
      v22 = *(v19 - 3);
      if ( v22 == *((_DWORD *)*v11 - 3) )
        v23 = memcmp(v19, v21, v22);
        v20 = v11 + 1;
        if ( !v23 )
          continue;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        v18,
        (int *)v11);
      ++v18;
      goto LABEL_33;
    v5 = v18;
  if ( v19 - 3 != &dword_28898C0 )
    v99 = v19 - 1;
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v19 - 3);
  v24 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v132 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = *(int **)(v2 + 720);
  if ( v5 != v25 )
    if ( v25 != v5 )
      v26 = &v147;
      v27 = v5;
      v28 = &pthread_create;
        v33 = (int *)(*v27 - 12);
        if ( v33 != &dword_28898C0 )
          v29 = (unsigned int *)(*v27 - 4);
          if ( v28 )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          }
          else
            v30 = (*v29)--;
          if ( v30 <= 0 )
            v31 = v26;
            v32 = v28;
            j_j_j_j__ZdlPv_9(v33);
            v28 = v32;
            v26 = v31;
        ++v27;
      while ( v27 != v25 );
    *(_DWORD *)(v2 + 720) = v5;
  v34 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v131 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v36 = (int *)(*(_QWORD *)(v2 + 752) >> 32);
  v35 = *(_QWORD *)(v2 + 752);
  sub_21E8AF4(&v130, v3);
  sub_21E8AF4(&v137, &v130);
  sub_21E8AF4(&v139, &v137);
  sub_21E8AF4((int *)&v138, &v139);
  v37 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v139 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E8AF4(&v140, (int *)&v138);
  sub_21E8AF4((int *)&v141, &v140);
  v38 = v141;
  v39 = ((signed int)v36 - v35) >> 4;
  if ( v39 < 1 )
LABEL_68:
    if ( 3 == ((signed int)v36 - v35) >> 2 )
      v47 = *(v38 - 3);
      if ( v47 == *(_DWORD *)(*(_DWORD *)v35 - 12) )
        v42 = (const void **)v35;
        if ( !memcmp(v38, *(const void **)v35, *(v38 - 3)) )
          goto LABEL_84;
      v42 = (const void **)(v35 + 4);
      v46 = ((signed int)v36 - v35) >> 2;
      if ( v46 != 2 )
        if ( v46 != 1 )
          goto LABEL_83;
        v47 = *(v38 - 3);
LABEL_79:
        if ( v47 == *((_DWORD *)*v42 - 3) )
          if ( memcmp(v38, *v42, v47) )
            v42 = (const void **)v36;
LABEL_83:
        v42 = (const void **)v36;
        goto LABEL_84;
      v42 = (const void **)v35;
    if ( v47 == *((_DWORD *)*v42 - 3) && !memcmp(v38, *v42, v47) )
      goto LABEL_84;
    ++v42;
    goto LABEL_79;
  v40 = *((_DWORD *)v141 - 3);
  v41 = v39 + 1;
    if ( v40 == *(_DWORD *)(*(_DWORD *)v35 - 12) )
      if ( !memcmp(v38, *(const void **)v35, v40) )
    v42 = (const void **)(v35 + 4);
    v43 = *(_DWORD **)(v35 + 4);
    if ( v40 == *(v43 - 3) && !memcmp(v38, v43, v40) )
    v42 = (const void **)(v35 + 8);
    v44 = *(_DWORD **)(v35 + 8);
    if ( v40 == *(v44 - 3) && !memcmp(v38, v44, v40) )
    v42 = (const void **)(v35 + 12);
    v45 = *(_DWORD **)(v35 + 12);
    if ( v40 == *(v45 - 3) && !memcmp(v38, v45, v40) )
    --v41;
    v35 += 16;
    if ( v41 <= 1 )
      goto LABEL_68;
LABEL_84:
  if ( v38 - 3 != &dword_28898C0 )
    v107 = v38 - 1;
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v38 - 3);
  v48 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v140 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  if ( (int *)v42 == v36 )
    v50 = v138;
    v49 = (int *)v42;
LABEL_88:
    v51 = v42 + 1;
      v42 = v51;
      if ( (const void **)v36 == v51 )
      v52 = *v51;
      v53 = *(v50 - 3);
      if ( v53 == *((_DWORD *)*v42 - 3) )
        v54 = memcmp(v50, v52, v53);
        v51 = v42 + 1;
        if ( !v54 )
        v49,
        (int *)v42);
      ++v49;
      goto LABEL_88;
    v36 = v49;
  if ( v50 - 3 != &dword_28898C0 )
    v111 = v50 - 1;
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v50 - 3);
  v55 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v137 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = *(int **)(v2 + 756);
  if ( v36 != v56 )
    if ( v56 != v36 )
      v57 = &v147;
      v58 = v36;
      v59 = &pthread_create;
        v64 = (int *)(*v58 - 12);
        if ( v64 != &dword_28898C0 )
          v60 = (unsigned int *)(*v58 - 4);
          if ( v59 )
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            v62 = v57;
            v63 = v59;
            j_j_j_j__ZdlPv_9(v64);
            v59 = v63;
            v57 = v62;
        ++v58;
      while ( v58 != v56 );
    *(_DWORD *)(v2 + 756) = v36;
  v65 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v130 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v67 = (int *)(*(_QWORD *)(v2 + 680) >> 32);
  v66 = *(_QWORD *)(v2 + 680);
  sub_21E8AF4(&v129, v3);
  sub_21E8AF4(&v142, &v129);
  sub_21E8AF4(&v144, &v142);
  sub_21E8AF4((int *)&v143, &v144);
  v68 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v144 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  sub_21E8AF4(&v145, (int *)&v143);
  sub_21E8AF4((int *)&v146, &v145);
  v69 = v146;
  v70 = ((signed int)v67 - v66) >> 4;
  if ( v70 < 1 )
LABEL_123:
    if ( 3 == ((signed int)v67 - v66) >> 2 )
      v78 = *(v69 - 3);
      if ( v78 == *(_DWORD *)(*(_DWORD *)v66 - 12) )
        v73 = (const void **)v66;
        if ( !memcmp(v69, *(const void **)v66, *(v69 - 3)) )
          goto LABEL_139;
      v73 = (const void **)(v66 + 4);
      v77 = ((signed int)v67 - v66) >> 2;
      if ( v77 != 2 )
        if ( v77 != 1 )
          goto LABEL_138;
        v78 = *(v69 - 3);
LABEL_134:
        if ( v78 == *((_DWORD *)*v73 - 3) )
          if ( memcmp(v69, *v73, v78) )
            v73 = (const void **)v67;
LABEL_138:
        v73 = (const void **)v67;
        goto LABEL_139;
      v73 = (const void **)v66;
    if ( v78 == *((_DWORD *)*v73 - 3) && !memcmp(v69, *v73, v78) )
      goto LABEL_139;
    ++v73;
    goto LABEL_134;
  v71 = *((_DWORD *)v146 - 3);
  v72 = v70 + 1;
    if ( v71 == *(_DWORD *)(*(_DWORD *)v66 - 12) )
      if ( !memcmp(v69, *(const void **)v66, v71) )
    v73 = (const void **)(v66 + 4);
    v74 = *(_DWORD **)(v66 + 4);
    if ( v71 == *(v74 - 3) && !memcmp(v69, v74, v71) )
    v73 = (const void **)(v66 + 8);
    v75 = *(_DWORD **)(v66 + 8);
    if ( v71 == *(v75 - 3) && !memcmp(v69, v75, v71) )
    v73 = (const void **)(v66 + 12);
    v76 = *(_DWORD **)(v66 + 12);
    if ( v71 == *(v76 - 3) && !memcmp(v69, v76, v71) )
    --v72;
    v66 += 16;
    if ( v72 <= 1 )
      goto LABEL_123;
LABEL_139:
  if ( v69 - 3 != &dword_28898C0 )
    v119 = v69 - 1;
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v69 - 3);
  v79 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v145 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  if ( (int *)v73 == v67 )
    v81 = v143;
    v80 = (int *)v73;
LABEL_143:
    v82 = v73 + 1;
      v73 = v82;
      if ( (const void **)v67 == v82 )
      v83 = *v82;
      v84 = *(v81 - 3);
      if ( v84 == *((_DWORD *)*v73 - 3) )
        v85 = memcmp(v81, v83, v84);
        v82 = v73 + 1;
        if ( !v85 )
        v80,
        (int *)v73);
      ++v80;
      goto LABEL_143;
    v67 = v80;
  if ( v81 - 3 != &dword_28898C0 )
    v123 = v81 - 1;
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v81 - 3);
  v86 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v142 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  v87 = *(int **)(v2 + 684);
  if ( v67 != v87 )
    if ( v87 != v67 )
      v88 = v67;
        v91 = (int *)(*v88 - 12);
        if ( v91 != &dword_28898C0 )
          v89 = (unsigned int *)(*v88 - 4);
          if ( &pthread_create )
              v90 = __ldrex(v89);
            while ( __strex(v90 - 1, v89) );
            v90 = (*v89)--;
          if ( v90 <= 0 )
            j_j_j_j__ZdlPv_9(v91);
        ++v88;
      while ( v88 != v87 );
    *(_DWORD *)(v2 + 684) = v67;
  v92 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v129 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
}


void __fastcall RealmsWhitelistScreenController::_handleUpdateFailed(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r6@1
  unsigned int *v4; // r0@3
  unsigned int v5; // r1@5
  void (__fastcall *v6)(char *); // r1@7
  int v7; // r0@7
  void (__fastcall *v8)(char *, int, signed int); // r3@7
  void (__fastcall *v9)(int *, int, signed int); // r3@13
  void (__fastcall *v10)(_DWORD, _DWORD, _DWORD); // r7@13
  void *v11; // r0@15
  unsigned int *v12; // r1@15
  unsigned int v13; // r2@18
  __int64 v14; // r2@21
  unsigned int *v15; // r2@26
  unsigned int v16; // r1@28
  int v17; // r0@33
  unsigned int *v18; // r2@34
  unsigned int v19; // r1@36
  int v20; // [sp+0h] [bp-90h]@2
  int v21; // [sp+4h] [bp-8Ch]@2
  int v22; // [sp+8h] [bp-88h]@14
  void (__fastcall *v23)(_DWORD, _DWORD, _DWORD); // [sp+10h] [bp-80h]@13
  unsigned int *v24; // [sp+14h] [bp-7Ch]@14
  void *v25; // [sp+18h] [bp-78h]@21
  void (*v26)(void); // [sp+20h] [bp-70h]@15
  int (__fastcall *v27)(int); // [sp+24h] [bp-6Ch]@21
  int v28; // [sp+28h] [bp-68h]@2
  int v29; // [sp+2Ch] [bp-64h]@2
  void *v30; // [sp+30h] [bp-60h]@2
  int v31; // [sp+34h] [bp-5Ch]@2
  int v32; // [sp+38h] [bp-58h]@2
  int v33; // [sp+3Ch] [bp-54h]@2
  void *v34; // [sp+40h] [bp-50h]@2
  int v35; // [sp+44h] [bp-4Ch]@2
  int v36; // [sp+48h] [bp-48h]@2
  int v37; // [sp+4Ch] [bp-44h]@2
  void *v38; // [sp+50h] [bp-40h]@2
  void *v39; // [sp+54h] [bp-3Ch]@2
  void *v40; // [sp+58h] [bp-38h]@2
  void *v41; // [sp+5Ch] [bp-34h]@2
  int v42; // [sp+60h] [bp-30h]@2
  char v43; // [sp+64h] [bp-2Ch]@2
  char v44; // [sp+68h] [bp-28h]@8
  void (*v45)(void); // [sp+70h] [bp-20h]@7
  int v46; // [sp+74h] [bp-1Ch]@8

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 589) )
  {
    v30 = &unk_28898CC;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = &unk_28898CC;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = &unk_28898CC;
    v39 = &unk_28898CC;
    v40 = &unk_28898CC;
    v41 = &unk_28898CC;
    v42 = 1;
    v43 = 0;
    sub_21E8190(&v34, "realmsInvitationScreen.sendingInvitesFailed", (_BYTE *)0x2B);
    sub_21E8190(&v30, "realmsInvitationScreen.unableToAddPlayers", (_BYTE *)0x29);
    sub_21E8190(&v40, "realmsInvitationScreen.continue", (_BYTE *)0x1F);
    v42 = 2;
    MinecraftScreenController::_getWeakPtrToThis<RealmsWhitelistScreenController>((int)&v28, v2);
    v20 = v28;
    v21 = v29;
    if ( v29 )
    {
      v4 = (unsigned int *)(v29 + 8);
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
    v23 = 0;
    v9 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    v10 = 0;
    if ( v9 )
      v9(&v22, v3, 2);
      v24 = *(unsigned int **)(v3 + 12);
      v10 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
      v23 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v26 = 0;
    v11 = operator new(0x18u);
    *(_DWORD *)v11 = v20;
    v12 = (unsigned int *)v21;
    *((_DWORD *)v11 + 1) = v21;
    if ( v21 )
      v12 = (unsigned int *)(v21 + 8);
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
        v12 = (unsigned int *)*((_DWORD *)v11 + 5);
        v10 = v23;
        ++*v12;
    v14 = *(_QWORD *)&v22;
    *(_QWORD *)&v22 = *((_QWORD *)v11 + 1);
    *((_QWORD *)v11 + 1) = v14;
    LODWORD(v14) = v24;
    *((_DWORD *)v11 + 4) = v10;
    v24 = v12;
    *((_DWORD *)v11 + 5) = v14;
    v25 = v11;
    v26 = (void (*)(void))sub_1221188;
    v27 = sub_1220FE4;
    LODWORD(v14) = &v25;
    MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v30, v14);
    if ( v26 )
      v26();
    if ( v23 )
      v23(&v22, &v22, 3);
      v15 = (unsigned int *)(v21 + 8);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (**)(void))(*(_DWORD *)v21 + 12))();
    v17 = v29;
      v18 = (unsigned int *)(v29 + 8);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v30);
  }
  else
    MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(a1 + 424));
    v7 = 0;
    v45 = 0;
    v8 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v8 )
      v8(&v44, v3, 2);
      v6 = *(void (__fastcall **)(char *))(v3 + 12);
      v46 = *(_DWORD *)(v3 + 12);
      v7 = *(_DWORD *)(v3 + 8);
      v45 = *(void (**)(void))(v3 + 8);
    if ( *(_BYTE *)(v2 + 432) )
      if ( v7 )
        v6(&v44);
    else if ( *(_BYTE *)(v2 + 589) )
      RealmsWhitelistScreenController::_joinRealm((RealmsWhitelistScreenController *)v2);
    else if ( v7 )
      v6(&v44);
    if ( v45 )
      v45();
}


void __fastcall RealmsWhitelistScreenController::sendInvites(RealmsWhitelistScreenController *this, int a2)
{
  RealmsWhitelistScreenController *v2; // r11@1
  int v3; // r7@1
  int v4; // r10@1
  int v5; // r4@1
  unsigned int v6; // r0@2
  int v7; // r5@3
  unsigned int v8; // r0@3
  bool v9; // zf@5
  int v10; // r5@8
  unsigned int *v11; // r0@12
  unsigned int v12; // r1@14
  void (__fastcall *v13)(char *, int, signed int); // r3@16
  void (__fastcall *v14)(int *, int, signed int); // r3@24
  void (__fastcall *v15)(int *, int, signed int); // r7@24
  unsigned int *v16; // r0@27
  unsigned int v17; // r1@29
  int v18; // r4@34
  void *v19; // r8@34
  const char *v20; // r1@34
  void (*v21)(void); // r6@36
  unsigned int *v22; // r0@37
  unsigned int v23; // r1@39
  void *v24; // r0@44
  unsigned int *v25; // r1@44
  unsigned int v26; // r2@47
  __int64 v27; // r2@50
  int v28; // r5@50
  void (*v29)(void); // r7@50
  unsigned int *v30; // r0@51
  unsigned int v31; // r1@53
  void *v32; // r0@58
  unsigned int *v33; // r1@58
  unsigned int v34; // r2@61
  __int64 v35; // r2@64
  __int64 v36; // kr08_8@64
  int v37; // r0@68
  unsigned int *v38; // r2@69
  unsigned int v39; // r1@71
  int v40; // r0@80
  unsigned int *v41; // r2@81
  unsigned int v42; // r1@83
  void *v43; // r0@90
  int v44; // r7@91
  void **v45; // r0@92
  void *v46; // r0@92
  void *v47; // r0@95
  unsigned int *v48; // r2@96
  signed int v49; // r1@98
  void **v50; // r0@100
  void *v51; // r0@100
  int v52; // r7@104 OVERLAPPED
  int v53; // r8@104 OVERLAPPED
  int v54; // r9@104
  unsigned int *v55; // r0@105
  unsigned int v56; // r1@107
  int *v57; // r0@111
  int *v58; // r2@111
  int *v59; // r1@112
  int *v60; // r1@114
  unsigned int *v61; // r0@117
  unsigned int v62; // r1@119
  void (__fastcall *v63)(int *, int, signed int); // r3@122
  int *v64; // r0@125
  int *v65; // r2@125
  int *v66; // r1@126
  int *v67; // r1@128
  unsigned int *v68; // r0@131
  unsigned int v69; // r1@133
  void *v70; // r0@136
  int v71; // r2@136
  int v72; // r1@136
  unsigned int *v73; // r1@137
  unsigned int v74; // r2@139
  __int64 v75; // kr10_8@142
  void (__fastcall *v76)(_DWORD, _DWORD, _DWORD); // r3@142
  int v77; // r3@142
  int v78; // r2@142
  int v79; // r3@142
  int *v80; // r7@143
  int v81; // r7@144
  int v82; // r4@146
  unsigned int *v83; // r1@147
  unsigned int v84; // r0@149
  unsigned int *v85; // r7@153
  unsigned int v86; // r0@155
  int v87; // r0@166
  unsigned int *v88; // r2@167
  unsigned int v89; // r1@169
  unsigned int *v90; // r1@175
  unsigned int v91; // r0@177
  unsigned int *v92; // r4@181
  unsigned int v93; // r0@183
  int v94; // r0@190
  unsigned int *v95; // r2@191
  unsigned int v96; // r1@193
  int v97; // r0@200
  unsigned int *v98; // r2@201
  unsigned int v99; // r1@203
  int v100; // r0@208
  unsigned int *v101; // r2@209
  unsigned int v102; // r1@211
  unsigned int *v103; // r2@217
  signed int v104; // r1@219
  unsigned int *v105; // r2@221
  signed int v106; // r1@223
  unsigned int *v107; // r2@229
  signed int v108; // r1@231
  int v109; // [sp+8h] [bp-180h]@116
  int v110; // [sp+Ch] [bp-17Ch]@116
  int v111; // [sp+10h] [bp-178h]@123
  void (__fastcall *v112)(_DWORD, _DWORD, _DWORD); // [sp+18h] [bp-170h]@122
  int v113; // [sp+1Ch] [bp-16Ch]@123
  int v114; // [sp+20h] [bp-168h]@125
  int v115; // [sp+24h] [bp-164h]@124
  int *v116; // [sp+28h] [bp-160h]@124
  int *v117; // [sp+2Ch] [bp-15Ch]@124
  int *v118; // [sp+30h] [bp-158h]@124
  int v119; // [sp+34h] [bp-154h]@124
  __int64 v120; // [sp+38h] [bp-150h]@130
  void *v121; // [sp+40h] [bp-148h]@144
  void (*v122)(void); // [sp+48h] [bp-140h]@136
  Realms::World *(__fastcall *v123)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *, int, int, int, int, int, char); // [sp+4Ch] [bp-13Ch]@144
  char v124; // [sp+50h] [bp-138h]@111
  int v125; // [sp+54h] [bp-134h]@110
  int *v126; // [sp+58h] [bp-130h]@110
  int *v127; // [sp+5Ch] [bp-12Ch]@110
  int *v128; // [sp+60h] [bp-128h]@110
  int v129; // [sp+64h] [bp-124h]@110
  __int64 v130; // [sp+68h] [bp-120h]@110
  int v131; // [sp+74h] [bp-114h]@100
  void *v132; // [sp+78h] [bp-110h]@100
  int v133; // [sp+80h] [bp-108h]@100
  int v134; // [sp+88h] [bp-100h]@92
  void *v135; // [sp+8Ch] [bp-FCh]@92
  int v136; // [sp+94h] [bp-F4h]@92
  int v137; // [sp+98h] [bp-F0h]@26
  int v138; // [sp+9Ch] [bp-ECh]@26
  int v139; // [sp+A0h] [bp-E8h]@33
  void (*v140)(void); // [sp+A8h] [bp-E0h]@32
  unsigned int *v141; // [sp+ACh] [bp-DCh]@33
  int v142; // [sp+B0h] [bp-D8h]@11
  int v143; // [sp+B4h] [bp-D4h]@11
  int v144; // [sp+B8h] [bp-D0h]@25
  void (*v145)(void); // [sp+C0h] [bp-C8h]@24
  unsigned int *v146; // [sp+C4h] [bp-C4h]@25
  int v147; // [sp+C8h] [bp-C0h]@11
  int v148; // [sp+CCh] [bp-BCh]@11
  char v149; // [sp+D0h] [bp-B8h]@17
  void (*v150)(void); // [sp+D8h] [bp-B0h]@16
  void (__fastcall *v151)(char *); // [sp+DCh] [bp-ACh]@17
  char v152; // [sp+E0h] [bp-A8h]@3
  int v153; // [sp+E4h] [bp-A4h]@1
  int v154; // [sp+E8h] [bp-A0h]@1
  int *v155; // [sp+ECh] [bp-9Ch]@1
  int *v156; // [sp+F0h] [bp-98h]@1
  int v157; // [sp+F4h] [bp-94h]@1
  int v158; // [sp+F8h] [bp-90h]@50
  int v159; // [sp+FCh] [bp-8Ch]@50
  int v160; // [sp+100h] [bp-88h]@57
  int v161; // [sp+104h] [bp-84h]@64
  void (*v162)(void); // [sp+108h] [bp-80h]@56
  unsigned int *v163; // [sp+10Ch] [bp-7Ch]@57
  void *v164; // [sp+110h] [bp-78h]@64
  void (*v165)(void); // [sp+118h] [bp-70h]@58
  int (__fastcall *v166)(int); // [sp+11Ch] [bp-6Ch]@64
  int v167; // [sp+120h] [bp-68h]@36
  int v168; // [sp+124h] [bp-64h]@36
  int v169; // [sp+128h] [bp-60h]@43
  int v170; // [sp+12Ch] [bp-5Ch]@50
  void (*v171)(void); // [sp+130h] [bp-58h]@42
  unsigned int *v172; // [sp+134h] [bp-54h]@43
  void *v173; // [sp+138h] [bp-50h]@50
  void (*v174)(void); // [sp+140h] [bp-48h]@44
  int (__fastcall *v175)(int); // [sp+144h] [bp-44h]@50
  char v176; // [sp+148h] [bp-40h]@64
  void (*v177)(void); // [sp+150h] [bp-38h]@36
  int v178; // [sp+15Ch] [bp-2Ch]@36

  v2 = this;
  v3 = 0;
  v157 = 0;
  v4 = a2;
  v153 = 0;
  v154 = 0;
  v155 = &v153;
  v156 = &v153;
  v5 = *((_DWORD *)this + 162);
  if ( v5 )
  {
    do
    {
      v6 = *(_WORD *)(v5 + 42);
      if ( (_BYTE)v6 )
      {
        v7 = *(_DWORD *)(v5 + 32);
        *(_DWORD *)std::map<std::string,RealmsAPI::InviteAction,std::less<std::string>,std::allocator<std::pair<std::string const,RealmsAPI::InviteAction>>>::operator[](
                     (int)&v152,
                     (const void **)(v5 + 12)) = v7;
        v8 = *(_BYTE *)(v5 + 43);
      }
      else
        v8 = v6 >> 8;
      v9 = v8 == 0;
      if ( v8 )
        v9 = *(_DWORD *)(v5 + 32) == 1;
      if ( !v9 )
        v10 = *(_DWORD *)(v5 + 36);
                     (const void **)(v5 + 12)) = v10;
      v5 = *(_DWORD *)v5;
    }
    while ( v5 );
    if ( v157 )
      MinecraftScreenController::_getWeakPtrToThis<RealmsWhitelistScreenController>((int)&v147, (int)v2);
      v142 = v147;
      v143 = v148;
      if ( v148 )
        v11 = (unsigned int *)(v148 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 + 1, v11) );
        }
        else
          ++*v11;
      v14 = 0;
      v145 = 0;
      v15 = *(void (__fastcall **)(_DWORD *, int, signed int))(v4 + 8);
      if ( v15 )
        v15(&v144, v4, 2);
        v146 = *(unsigned int **)(v4 + 12);
        v14 = *(void (__fastcall **)(_DWORD *, int, signed int))(v4 + 8);
        v145 = *(void (**)(void))(v4 + 8);
      v137 = v147;
      v138 = v148;
        v16 = (unsigned int *)(v148 + 8);
            v17 = __ldrex(v16);
          while ( __strex(v17 + 1, v16) );
          v14 = *(void (__fastcall **)(_DWORD *, int, signed int))(v4 + 8);
          ++*v16;
      v140 = 0;
      if ( v14 )
        v14(&v139, v4, 2);
        v141 = *(unsigned int **)(v4 + 12);
        v140 = *(void (**)(void))(v4 + 8);
      v18 = *((_BYTE *)v2 + 589);
      v19 = operator new(0x40u);
      v20 = "realmsInvitationScreen.addingPlayers";
      if ( !v18 )
        v20 = "realmsInvitationScreen.savingChanges";
      sub_21E94B4((void **)&v178, v20);
      v21 = 0;
      v167 = v142;
      v177 = 0;
      v168 = v143;
      if ( v143 )
        v22 = (unsigned int *)(v143 + 8);
            v23 = __ldrex(v22);
          while ( __strex(v23 + 1, v22) );
          ++*v22;
      v171 = 0;
      if ( v145 )
        ((void (__fastcall *)(int *, int *, signed int))v145)(&v169, &v144, 2);
        v21 = v145;
        v172 = v146;
        v171 = v145;
      v174 = 0;
      v24 = operator new(0x18u);
      *(_DWORD *)v24 = v167;
      v25 = (unsigned int *)v168;
      *((_DWORD *)v24 + 1) = v168;
      if ( v25 )
        v25 += 2;
            v26 = __ldrex(v25);
          while ( __strex(v26 + 1, v25) );
          v25 = (unsigned int *)*((_DWORD *)v24 + 5);
          v21 = v171;
          ++*v25;
      v27 = *(_QWORD *)&v169;
      v28 = *((_QWORD *)v24 + 1) >> 32;
      v169 = *((_QWORD *)v24 + 1);
      v170 = v28;
      v29 = 0;
      *((_QWORD *)v24 + 1) = v27;
      LODWORD(v27) = v172;
      *((_DWORD *)v24 + 4) = v21;
      v172 = v25;
      *((_DWORD *)v24 + 5) = v27;
      v173 = v24;
      v174 = (void (*)(void))sub_1221778;
      v175 = sub_12215B8;
      v158 = v137;
      v159 = v138;
      if ( v138 )
        v30 = (unsigned int *)(v138 + 8);
            v31 = __ldrex(v30);
          while ( __strex(v31 + 1, v30) );
          ++*v30;
      v162 = 0;
      if ( v140 )
        ((void (__fastcall *)(int *, int *, signed int))v140)(&v160, &v139, 2);
        v29 = v140;
        v163 = v141;
        v162 = v140;
      v165 = 0;
      v32 = operator new(0x18u);
      *(_DWORD *)v32 = v158;
      v33 = (unsigned int *)v159;
      *((_DWORD *)v32 + 1) = v159;
      if ( v33 )
        v33 += 2;
            v34 = __ldrex(v33);
          while ( __strex(v34 + 1, v33) );
          v33 = (unsigned int *)*((_DWORD *)v32 + 5);
          v29 = v162;
          ++*v33;
      v35 = *(_QWORD *)&v160;
      v36 = *((_QWORD *)v32 + 1);
      v160 = *((_QWORD *)v32 + 1);
      v161 = HIDWORD(v36);
      *((_QWORD *)v32 + 1) = v35;
      LODWORD(v35) = v163;
      *((_DWORD *)v32 + 4) = v29;
      v163 = v33;
      *((_DWORD *)v32 + 5) = v35;
      v164 = v32;
      v165 = (void (*)(void))sub_1221A50;
      v166 = sub_12218AC;
      RealmsProgressHandler::RealmsProgressHandler((int)v19, &v178, (int)&v176, (int)&v173, (int)&v164);
      if ( v165 )
        v165();
      if ( v162 )
        v162();
      v37 = v159;
      if ( v159 )
        v38 = (unsigned int *)(v159 + 8);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 == 1 )
          (*(void (**)(void))(*(_DWORD *)v37 + 12))();
      if ( v174 )
        v174();
      if ( v171 )
        v171();
      v40 = v168;
      if ( v168 )
        v41 = (unsigned int *)(v168 + 8);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 == 1 )
          (*(void (**)(void))(*(_DWORD *)v40 + 12))();
      if ( v177 )
        v177();
      v43 = (void *)(v178 - 12);
      if ( (int *)(v178 - 12) != &dword_28898C0 )
        v103 = (unsigned int *)(v178 - 4);
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
          v104 = (*v103)--;
        if ( v104 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v44 = *((_DWORD *)v2 + 106);
      if ( *((_BYTE *)v2 + 589) )
        sub_21E94B4((void **)&v136, "realms_adding_players");
        v135 = v19;
        v45 = sub_21E94B4((void **)&v134, (const char *)&unk_257BC67);
        MainMenuScreenModel::navigateToModalProgressScreen(v44, (int)&v136, (int)&v135, 0, (int)v45);
        v46 = (void *)(v134 - 12);
        if ( (int *)(v134 - 12) != &dword_28898C0 )
          v105 = (unsigned int *)(v134 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v106 = __ldrex(v105);
            while ( __strex(v106 - 1, v105) );
          }
          else
            v106 = (*v105)--;
          if ( v106 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
        if ( v135 )
          (*(void (**)(void))(*(_DWORD *)v135 + 4))();
        v135 = 0;
        v47 = (void *)(v136 - 12);
        if ( (int *)(v136 - 12) == &dword_28898C0 )
          goto LABEL_104;
        v48 = (unsigned int *)(v136 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          goto LABEL_238;
        sub_21E94B4((void **)&v133, "realms_saving_settings");
        v132 = v19;
        v50 = sub_21E94B4((void **)&v131, (const char *)&unk_257BC67);
        MainMenuScreenModel::navigateToModalProgressScreen(v44, (int)&v133, (int)&v132, 0, (int)v50);
        v51 = (void *)(v131 - 12);
        if ( (int *)(v131 - 12) != &dword_28898C0 )
          v107 = (unsigned int *)(v131 - 4);
              v108 = __ldrex(v107);
            while ( __strex(v108 - 1, v107) );
            v108 = (*v107)--;
          if ( v108 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        if ( v132 )
          (*(void (**)(void))(*(_DWORD *)v132 + 4))();
        v132 = 0;
        v47 = (void *)(v133 - 12);
        if ( (int *)(v133 - 12) == &dword_28898C0 )
        v48 = (unsigned int *)(v133 - 4);
LABEL_238:
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v47);
LABEL_104:
          *(_QWORD *)&v52 = *((_QWORD *)v2 + 53);
          v54 = *((_QWORD *)v2 + 53);
          if ( v53 )
            v55 = (unsigned int *)(v53 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v56 = __ldrex(v55);
              while ( __strex(v56 + 1, v55) );
              v54 = *((_DWORD *)v2 + 106);
            }
            else
              v54 = v52;
              ++*v55;
          v130 = *((_QWORD *)v2 + 61);
          v129 = 0;
          v125 = 0;
          v126 = 0;
          v127 = &v125;
          v128 = &v125;
          if ( v154 )
            v57 = std::_Rb_tree<std::string,std::pair<std::string const,RealmsAPI::InviteAction>,std::_Select1st<std::pair<std::string const,RealmsAPI::InviteAction>>,std::less<std::string>,std::allocator<std::pair<std::string const,RealmsAPI::InviteAction>>>::_M_copy(
                    (int)&v124,
                    v154,
                    (int)&v125);
            v58 = v57;
            v126 = v57;
              v59 = v58;
              v58 = (int *)v58[2];
            while ( v58 );
            v127 = v59;
              v60 = v57;
              v57 = (int *)v57[3];
            while ( v57 );
            v128 = v60;
            v129 = v157;
          v109 = v147;
          v110 = v148;
          if ( v148 )
            v61 = (unsigned int *)(v148 + 8);
                v62 = __ldrex(v61);
              while ( __strex(v62 + 1, v61) );
              ++*v61;
          v112 = 0;
          v63 = *(void (__fastcall **)(_DWORD *, int, signed int))(v4 + 8);
          if ( v63 )
            v63(&v111, v4, 2);
            v113 = *(_DWORD *)(v4 + 12);
            v112 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v4 + 8);
          v119 = 0;
          v115 = 0;
          v116 = 0;
          v117 = &v115;
          v118 = &v115;
            v64 = std::_Rb_tree<std::string,std::pair<std::string const,RealmsAPI::InviteAction>,std::_Select1st<std::pair<std::string const,RealmsAPI::InviteAction>>,std::less<std::string>,std::allocator<std::pair<std::string const,RealmsAPI::InviteAction>>>::_M_copy(
                    (int)&v114,
                    (int)&v115);
            v65 = v64;
            v116 = v64;
              v66 = v65;
              v65 = (int *)v65[2];
            while ( v65 );
            v117 = v66;
              v67 = v64;
              v64 = (int *)v64[3];
            while ( v64 );
            v118 = v67;
            v119 = v157;
          v120 = *(_QWORD *)&v52;
            v68 = (unsigned int *)(v53 + 4);
                v69 = __ldrex(v68);
              while ( __strex(v69 + 1, v68) );
              ++*v68;
          v122 = 0;
          v70 = operator new(0x38u);
          *(_DWORD *)v70 = v109;
          v72 = v110;
          *((_DWORD *)v70 + 1) = v110;
          if ( v72 )
            v73 = (unsigned int *)(v72 + 8);
                v74 = __ldrex(v73);
              while ( __strex(v74 + 1, v73) );
              v71 = *((_DWORD *)v70 + 5);
              v71 = *v73 + 1;
              *v73 = v71;
          v75 = *(_QWORD *)&v111;
          *(_QWORD *)&v111 = *((_QWORD *)v70 + 1);
          *((_QWORD *)v70 + 1) = v75;
          v76 = v112;
          *((_DWORD *)v70 + 4) = v76;
          v77 = v113;
          v113 = v71;
          *((_DWORD *)v70 + 5) = v77;
          *((_DWORD *)v70 + 7) = 0;
          v78 = (int)v70 + 28;
          *(_DWORD *)(v78 + 4) = 0;
          *(_DWORD *)(v78 + 8) = 0;
          *(_DWORD *)(v78 + 12) = 0;
          *(_DWORD *)(v78 + 16) = 0;
          *(_DWORD *)(v78 + 8) = v78;
          *(_DWORD *)(v78 + 12) = v78;
          v79 = (int)v116;
          if ( v116 )
            v80 = v117;
            *((_DWORD *)v70 + 8) = v116;
            *((_DWORD *)v70 + 9) = v80;
            *((_DWORD *)v70 + 10) = v118;
            *(_DWORD *)(v79 + 4) = v78;
            v116 = 0;
            v117 = &v115;
            v118 = &v115;
            *((_DWORD *)v70 + 11) = v119;
            v119 = 0;
          *((_DWORD *)v70 + 12) = v120;
          v81 = HIDWORD(v120);
          HIDWORD(v120) = 0;
          *((_DWORD *)v70 + 13) = v81;
          LODWORD(v120) = 0;
          v121 = v70;
          v122 = (void (*)(void))sub_1222220;
          v123 = sub_1221B84;
          MinecraftScreenModel::updateRealmsWhitelist(v54, &v130, (int)&v124, (int)&v121);
          if ( v122 )
            v122();
          v82 = HIDWORD(v120);
          if ( HIDWORD(v120) )
            v83 = (unsigned int *)(HIDWORD(v120) + 4);
                v84 = __ldrex(v83);
              while ( __strex(v84 - 1, v83) );
              v84 = (*v83)--;
            if ( v84 == 1 )
              v85 = (unsigned int *)(v82 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v86 = __ldrex(v85);
                while ( __strex(v86 - 1, v85) );
              }
              else
                v86 = (*v85)--;
              if ( v86 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
          std::_Rb_tree<std::string,std::pair<std::string const,RealmsAPI::InviteAction>,std::_Select1st<std::pair<std::string const,RealmsAPI::InviteAction>>,std::less<std::string>,std::allocator<std::pair<std::string const,RealmsAPI::InviteAction>>>::_M_erase(
            (int)&v114,
            (int)v116);
          if ( v112 )
            v112(&v111, &v111, 3);
          v87 = v110;
          if ( v110 )
            v88 = (unsigned int *)(v110 + 8);
                v89 = __ldrex(v88);
              while ( __strex(v89 - 1, v88) );
              v89 = (*v88)--;
            if ( v89 == 1 )
              (*(void (**)(void))(*(_DWORD *)v87 + 12))();
            (int)&v124,
            (int)v126);
            v90 = (unsigned int *)(v53 + 4);
                v91 = __ldrex(v90);
              while ( __strex(v91 - 1, v90) );
              v91 = (*v90)--;
            if ( v91 == 1 )
              v92 = (unsigned int *)(v53 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
                  v93 = __ldrex(v92);
                while ( __strex(v93 - 1, v92) );
                v93 = (*v92)--;
              if ( v93 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
          if ( v140 )
            v140();
          v94 = v138;
          if ( v138 )
            v95 = (unsigned int *)(v138 + 8);
                v96 = __ldrex(v95);
              while ( __strex(v96 - 1, v95) );
              v96 = (*v95)--;
            if ( v96 == 1 )
              (*(void (**)(void))(*(_DWORD *)v94 + 12))();
          if ( v145 )
            v145();
          v97 = v143;
          if ( v143 )
            v98 = (unsigned int *)(v143 + 8);
                v99 = __ldrex(v98);
              while ( __strex(v99 - 1, v98) );
              v99 = (*v98)--;
            if ( v99 == 1 )
              (*(void (**)(void))(*(_DWORD *)v97 + 12))();
          v100 = v148;
            v101 = (unsigned int *)(v148 + 8);
                v102 = __ldrex(v101);
              while ( __strex(v102 - 1, v101) );
              v102 = (*v101)--;
            if ( v102 == 1 )
              (*(void (**)(void))(*(_DWORD *)v100 + 12))();
          goto LABEL_216;
      v49 = (*v48)--;
      goto LABEL_238;
  }
  *((_BYTE *)v2 + 560) = 1;
  v150 = 0;
  v13 = *(void (__fastcall **)(char *, int, signed int))(a2 + 8);
  if ( v13 )
    v13(&v149, a2, 2);
    v151 = *(void (__fastcall **)(char *))(v4 + 12);
    v3 = *(_DWORD *)(v4 + 8);
    v150 = *(void (**)(void))(v4 + 8);
  if ( *((_BYTE *)v2 + 432) )
    if ( v3 )
      v151(&v149);
  else if ( *((_BYTE *)v2 + 589) )
    RealmsWhitelistScreenController::_joinRealm(v2);
  else if ( v3 )
    v151(&v149);
  if ( v150 )
    v150();
LABEL_216:
  std::_Rb_tree<std::string,std::pair<std::string const,RealmsAPI::InviteAction>,std::_Select1st<std::pair<std::string const,RealmsAPI::InviteAction>>,std::less<std::string>,std::allocator<std::pair<std::string const,RealmsAPI::InviteAction>>>::_M_erase(
    (int)&v152,
    v154);
}


unsigned int __fastcall RealmsWhitelistScreenController::_getMaxPages(int a1, int a2)
{
  unsigned __int8 v2; // cf@0
  char v3; // zf@0
  unsigned int result; // r0@2
  int v5; // r0@4
  int v6; // r1@4
  __int64 v7; // kr00_8@4
  __int64 v8; // kr08_8@5
  __int64 v9; // kr10_8@6
  __int64 v10; // kr18_8@7
  unsigned int v11; // r1@8

  if ( !v3 & v2 )
  {
    result = 0;
  }
  else
    switch ( a2 )
    {
      case 0:
        v7 = *(_QWORD *)(a1 + 668);
        v5 = *(_QWORD *)(a1 + 668) >> 32;
        v6 = v7;
        break;
      case 2:
        v8 = *(_QWORD *)(a1 + 740);
        v5 = *(_QWORD *)(a1 + 740) >> 32;
        v6 = v8;
      case 3:
        v9 = *(_QWORD *)(a1 + 776);
        v5 = *(_QWORD *)(a1 + 776) >> 32;
        v6 = v9;
      case 1:
        v10 = *(_QWORD *)(a1 + 704);
        v5 = *(_QWORD *)(a1 + 704) >> 32;
        v6 = v10;
    }
    v11 = (v5 - v6) >> 2;
    result = v11 / 0xA;
    if ( !(v11 % 0xA) )
      result = v11 / 0xA - 1;
  return result;
}


signed int __fastcall RealmsWhitelistScreenController::_handleInviteClick(RealmsWhitelistScreenController *this, UIPropertyBag *a2)
{
  UIPropertyBag *v2; // r5@1
  Json::Value *v3; // r7@1
  RealmsWhitelistScreenController *v4; // r9@1
  signed int v5; // r6@2
  Json::Value *v6; // r4@4
  int v7; // r8@6
  Json::Value *v8; // r6@9
  char *v9; // r1@10
  char *v10; // r0@13
  RealmsWhitelistScreenController *v11; // r0@17
  int v12; // r4@23
  _DWORD *v13; // r0@23
  int v14; // r0@23
  char *v15; // r0@25
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  unsigned int *v19; // r2@32
  signed int v20; // r1@34
  char *v21; // [sp+0h] [bp-38h]@7
  char *v22; // [sp+4h] [bp-34h]@10
  char v23; // [sp+Ch] [bp-2Ch]@10

  v2 = a2;
  v3 = (UIPropertyBag *)((char *)a2 + 8);
  v4 = this;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v5 = 0;
  }
  else if ( Json::Value::isObject(v3) == 1 )
    v6 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
    {
      v5 = 0;
      v7 = Json::Value::asInt(v6, 0);
      if ( v7 >= 0 )
      {
        sub_21E8AF4((int *)&v21, (int *)&Util::EMPTY_STRING);
        if ( Json::Value::isNull(v3)
          || Json::Value::isObject(v3) != 1
          || (v8 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_name"), Json::Value::isString(v8) != 1) )
        {
          v22 = v21;
          v9 = (char *)&unk_28898CC;
          v21 = (char *)&unk_28898CC;
        }
        else
          jsonValConversion<std::string>::as((int *)&v22, (int)&v23, (int)v8);
          v9 = v21;
        v10 = v9 - 12;
        if ( (int *)(v9 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v9 - 4);
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
            j_j_j_j__ZdlPv_9(v10);
        if ( sub_21E7D6C((const void **)&v22, "members_collection") )
          if ( sub_21E7D6C((const void **)&v22, "invited_friends_collection") )
            if ( sub_21E7D6C((const void **)&v22, "uninvited_friends_collection") )
              v11 = (RealmsWhitelistScreenController *)((char *)v4 + 620);
            else
              v11 = (RealmsWhitelistScreenController *)((char *)v4 + 608);
            v11 = (RealmsWhitelistScreenController *)((char *)v4 + 612);
          v11 = (RealmsWhitelistScreenController *)((char *)v4 + 616);
        v12 = *(_DWORD *)v11;
        v13 = (_DWORD *)RealmsWhitelistScreenController::_getListFromCollection(v4, v2);
        v14 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                (unsigned __int64 *)v4 + 80,
                (int **)(*v13 + 4 * (v7 + 10 * v12)));
        if ( v14 )
          RealmsWhitelistScreenController::_handlePlayerInvite((int)v4, v14 + 8);
        v15 = v22 - 12;
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v22 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v5 = 1;
      }
    }
    else
  else
  return v5;
}


int __fastcall RealmsWhitelistScreenController::_updatePlayerlistModel(int result, const void **a2, int a3, int a4, int a5)
{
  int *v5; // r4@1
  int v6; // r10@1
  const void *v7; // r0@3
  _DWORD *v8; // r1@3
  size_t v9; // r2@3
  __int64 v10; // kr00_8@6
  _DWORD *v11; // r7@7
  const void *v12; // r0@9
  _DWORD *v13; // r1@9
  size_t v14; // r2@9
  __int64 v15; // kr08_8@12
  _DWORD *v16; // r7@13
  const void *v17; // r0@15
  _DWORD *v18; // r1@15
  size_t v19; // r2@15
  __int64 v20; // kr10_8@18
  _DWORD *v21; // r7@19
  const void *v22; // r0@21
  _DWORD *v23; // r1@21
  size_t v24; // r2@21
  __int64 v25; // kr18_8@24
  _DWORD *v26; // r7@25
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  int *v29; // r0@34
  int **i; // r7@36
  int **v31; // r11@36
  unsigned int *v32; // r2@38
  signed int v33; // r1@40
  int *v34; // r0@46
  int **j; // r7@48
  int **v36; // r11@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  int *v39; // r0@58
  int **k; // r7@60
  int **v41; // r11@60
  unsigned int *v42; // r2@62
  signed int v43; // r1@64
  int *v44; // r0@70
  int **l; // r7@72
  int **v46; // r11@72
  int v47; // r0@74
  unsigned __int64 *v48; // r1@74
  unsigned int *v49; // r2@79
  signed int v50; // r1@81
  unsigned int *v51; // r2@83
  signed int v52; // r1@85
  int v53; // r9@95
  void *v54; // r0@96
  __int64 v55; // r0@98
  void *v56; // r0@101
  int v57; // r0@103
  unsigned int *v58; // r2@104
  signed int v59; // r1@106
  unsigned int *v60; // r2@108
  signed int v61; // r1@110
  int v62; // r9@120
  void *v63; // r0@121
  __int64 v64; // r0@123
  void *v65; // r0@126
  unsigned int *v66; // r2@129
  signed int v67; // r1@131
  unsigned int *v68; // r2@133
  signed int v69; // r1@135
  int v70; // r9@145
  void *v71; // r0@146
  __int64 v72; // r0@148
  void *v73; // r0@151
  unsigned int *v74; // r2@154
  signed int v75; // r1@156
  unsigned int *v76; // r2@158
  signed int v77; // r1@160
  int v78; // r9@170
  void *v79; // r0@171
  __int64 v80; // r0@173
  void *v81; // r0@176
  unsigned __int64 *v82; // [sp+4h] [bp-5Ch]@6
  int v83; // [sp+8h] [bp-58h]@154
  int v84; // [sp+10h] [bp-50h]@158
  int v85; // [sp+14h] [bp-4Ch]@79
  int v86; // [sp+1Ch] [bp-44h]@83
  int v87; // [sp+20h] [bp-40h]@104
  int v88; // [sp+28h] [bp-38h]@108
  int v89; // [sp+2Ch] [bp-34h]@129
  int v90; // [sp+34h] [bp-2Ch]@133

  v5 = (int *)a2;
  v6 = result;
  switch ( a3 )
  {
    case 0:
      if ( a4
        || (v7 = *a2, v8 = *(_DWORD **)(v6 + 632), v9 = *(_DWORD *)(*v5 - 12), v9 != *(v8 - 3))
        || (result = memcmp(v7, v8, v9)) != 0 )
      {
        EntityInteraction::setInteractText((int *)(v6 + 632), v5);
        *(_DWORD *)(v6 + 616) = 0;
        if ( !*(_DWORD *)(*v5 - 12) )
        {
          v47 = v6 + 668;
          v48 = (unsigned __int64 *)(v6 + 680);
          goto LABEL_78;
        }
        v10 = *(_QWORD *)(v6 + 692);
        v82 = (unsigned __int64 *)(v6 + 692);
        if ( HIDWORD(v10) != (_DWORD)v10 )
          v11 = (_DWORD *)v10;
          do
          {
            v29 = (int *)(*v11 - 12);
            if ( v29 != &dword_28898C0 )
            {
              v27 = (unsigned int *)(*v11 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v28 = __ldrex(v27);
                while ( __strex(v28 - 1, v27) );
              }
              else
                v28 = (*v27)--;
              if ( v28 <= 0 )
                j_j_j_j__ZdlPv_9(v29);
            }
            ++v11;
          }
          while ( v11 != (_DWORD *)HIDWORD(v10) );
        *(_DWORD *)(v6 + 696) = v10;
        v31 = (int **)(*(_QWORD *)(v6 + 680) >> 32);
        for ( i = (int **)*(_QWORD *)(v6 + 680); i != v31; ++i )
          v53 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                  (unsigned __int64 *)(v6 + 640),
                  i);
          if ( v53 )
            sub_21E94B4((void **)&v86, (const char *)&unk_257BC67);
            Util::toLower((void **)&v85, *(_DWORD *)(*(_DWORD *)(v53 + 8) - 12), *(_DWORD *)(v53 + 8));
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              &v86,
              &v85);
            v54 = (void *)(v85 - 12);
            if ( (int *)(v85 - 12) != &dword_28898C0 )
              v49 = (unsigned int *)(v85 - 4);
              if ( a5 )
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j__ZdlPv_9(v54);
            if ( sub_21E76A0(&v86, (_BYTE *)*v5, 0, *(_DWORD *)(*v5 - 12)) != -1 )
              v55 = *(_QWORD *)(v6 + 696);
              if ( (_DWORD)v55 == HIDWORD(v55) )
                std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                  v82,
                  (int *)i);
                sub_21E8AF4((int *)v55, (int *)i);
                *(_DWORD *)(v6 + 696) += 4;
            v56 = (void *)(v86 - 12);
            if ( (int *)(v86 - 12) != &dword_28898C0 )
              v51 = (unsigned int *)(v86 - 4);
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v52 = (*v51)--;
              if ( v52 <= 0 )
                j_j_j_j__ZdlPv_9(v56);
        v57 = v6 + 668;
        goto LABEL_179;
      }
      break;
    case 1:
        || (v12 = *a2, v13 = *(_DWORD **)(v6 + 628), v14 = *(_DWORD *)(*v5 - 12), v14 != *(v13 - 3))
        || (result = memcmp(v12, v13, v14)) != 0 )
        EntityInteraction::setInteractText((int *)(v6 + 628), v5);
        *(_DWORD *)(v6 + 612) = 0;
          v47 = v6 + 704;
          v48 = (unsigned __int64 *)(v6 + 716);
        v15 = *(_QWORD *)(v6 + 728);
        v82 = (unsigned __int64 *)(v6 + 728);
        if ( HIDWORD(v15) != (_DWORD)v15 )
          v16 = (_DWORD *)v15;
            v34 = (int *)(*v16 - 12);
            if ( v34 != &dword_28898C0 )
              v32 = (unsigned int *)(*v16 - 4);
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
                v33 = (*v32)--;
              if ( v33 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
            ++v16;
          while ( v16 != (_DWORD *)HIDWORD(v15) );
        *(_DWORD *)(v6 + 732) = v15;
        v36 = (int **)(*(_QWORD *)(v6 + 716) >> 32);
        for ( j = (int **)*(_QWORD *)(v6 + 716); j != v36; ++j )
          v62 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                  j);
          if ( v62 )
            sub_21E94B4((void **)&v88, (const char *)&unk_257BC67);
            Util::toLower((void **)&v87, *(_DWORD *)(*(_DWORD *)(v62 + 8) - 12), *(_DWORD *)(v62 + 8));
              &v88,
              &v87);
            v63 = (void *)(v87 - 12);
            if ( (int *)(v87 - 12) != &dword_28898C0 )
              v58 = (unsigned int *)(v87 - 4);
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
                v59 = (*v58)--;
              if ( v59 <= 0 )
                j_j_j_j__ZdlPv_9(v63);
            if ( sub_21E76A0(&v88, (_BYTE *)*v5, 0, *(_DWORD *)(*v5 - 12)) != -1 )
              v64 = *(_QWORD *)(v6 + 732);
              if ( (_DWORD)v64 == HIDWORD(v64) )
                  (int *)j);
                sub_21E8AF4((int *)v64, (int *)j);
                *(_DWORD *)(v6 + 732) += 4;
            v65 = (void *)(v88 - 12);
            if ( (int *)(v88 - 12) != &dword_28898C0 )
              v60 = (unsigned int *)(v88 - 4);
                  v61 = __ldrex(v60);
                while ( __strex(v61 - 1, v60) );
                v61 = (*v60)--;
              if ( v61 <= 0 )
                j_j_j_j__ZdlPv_9(v65);
        v57 = v6 + 704;
    case 2:
        || (v17 = *a2, v18 = *(_DWORD **)(v6 + 624), v19 = *(_DWORD *)(*v5 - 12), v19 != *(v18 - 3))
        || (result = memcmp(v17, v18, v19)) != 0 )
        EntityInteraction::setInteractText((int *)(v6 + 624), v5);
        *(_DWORD *)(v6 + 608) = 0;
          v47 = v6 + 740;
          v48 = (unsigned __int64 *)(v6 + 752);
        v20 = *(_QWORD *)(v6 + 764);
        v82 = (unsigned __int64 *)(v6 + 764);
        if ( HIDWORD(v20) != (_DWORD)v20 )
          v21 = (_DWORD *)v20;
            v39 = (int *)(*v21 - 12);
            if ( v39 != &dword_28898C0 )
              v37 = (unsigned int *)(*v21 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            ++v21;
          while ( v21 != (_DWORD *)HIDWORD(v20) );
        *(_DWORD *)(v6 + 768) = v20;
        v41 = (int **)(*(_QWORD *)(v6 + 752) >> 32);
        for ( k = (int **)*(_QWORD *)(v6 + 752); k != v41; ++k )
          v70 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                  k);
          if ( v70 )
            sub_21E94B4((void **)&v90, (const char *)&unk_257BC67);
            Util::toLower((void **)&v89, *(_DWORD *)(*(_DWORD *)(v70 + 8) - 12), *(_DWORD *)(v70 + 8));
              &v90,
              &v89);
            v71 = (void *)(v89 - 12);
            if ( (int *)(v89 - 12) != &dword_28898C0 )
              v66 = (unsigned int *)(v89 - 4);
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j__ZdlPv_9(v71);
            if ( sub_21E76A0(&v90, (_BYTE *)*v5, 0, *(_DWORD *)(*v5 - 12)) != -1 )
              v72 = *(_QWORD *)(v6 + 768);
              if ( (_DWORD)v72 == HIDWORD(v72) )
                  (int *)k);
                sub_21E8AF4((int *)v72, (int *)k);
                *(_DWORD *)(v6 + 768) += 4;
            v73 = (void *)(v90 - 12);
            if ( (int *)(v90 - 12) != &dword_28898C0 )
              v68 = (unsigned int *)(v90 - 4);
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j__ZdlPv_9(v73);
        v57 = v6 + 740;
    case 3:
        || (v22 = *a2, v23 = *(_DWORD **)(v6 + 636), v24 = *(_DWORD *)(*v5 - 12), v24 != *(v23 - 3))
        || (result = memcmp(v22, v23, v24)) != 0 )
        EntityInteraction::setInteractText((int *)(v6 + 636), v5);
        *(_DWORD *)(v6 + 620) = 0;
        if ( *(_DWORD *)(*v5 - 12) )
          v25 = *(_QWORD *)(v6 + 800);
          v82 = (unsigned __int64 *)(v6 + 800);
          if ( HIDWORD(v25) != (_DWORD)v25 )
            v26 = (_DWORD *)v25;
            do
              v44 = (int *)(*v26 - 12);
              if ( v44 != &dword_28898C0 )
                v42 = (unsigned int *)(*v26 - 4);
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
                  j_j_j_j__ZdlPv_9(v44);
              ++v26;
            while ( v26 != (_DWORD *)HIDWORD(v25) );
          *(_DWORD *)(v6 + 804) = v25;
          v46 = (int **)(*(_QWORD *)(v6 + 788) >> 32);
          for ( l = (int **)*(_QWORD *)(v6 + 788); l != v46; ++l )
            v78 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                    (unsigned __int64 *)(v6 + 640),
                    l);
            if ( v78 )
              sub_21E94B4((void **)&v84, (const char *)&unk_257BC67);
              Util::toLower((void **)&v83, *(_DWORD *)(*(_DWORD *)(v78 + 8) - 12), *(_DWORD *)(v78 + 8));
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                &v84,
                &v83);
              v79 = (void *)(v83 - 12);
              if ( (int *)(v83 - 12) != &dword_28898C0 )
                v74 = (unsigned int *)(v83 - 4);
                    v75 = __ldrex(v74);
                  while ( __strex(v75 - 1, v74) );
                  v75 = (*v74)--;
                if ( v75 <= 0 )
                  j_j_j_j__ZdlPv_9(v79);
              if ( sub_21E76A0(&v84, (_BYTE *)*v5, 0, *(_DWORD *)(*v5 - 12)) != -1 )
                v80 = *(_QWORD *)(v6 + 804);
                if ( (_DWORD)v80 == HIDWORD(v80) )
                  std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                    v82,
                    (int *)l);
                  sub_21E8AF4((int *)v80, (int *)l);
                  *(_DWORD *)(v6 + 804) += 4;
              v81 = (void *)(v84 - 12);
              if ( (int *)(v84 - 12) != &dword_28898C0 )
                v76 = (unsigned int *)(v84 - 4);
                    v77 = __ldrex(v76);
                  while ( __strex(v77 - 1, v76) );
                  v77 = (*v76)--;
                if ( v77 <= 0 )
                  j_j_j_j__ZdlPv_9(v81);
          v57 = v6 + 776;
LABEL_179:
          result = std::vector<std::string,std::allocator<std::string>>::operator=(v57, v82);
        else
          v47 = v6 + 776;
          v48 = (unsigned __int64 *)(v6 + 788);
LABEL_78:
          result = j_j_j__ZNSt6vectorISsSaISsEEaSERKS1__2(v47, v48);
    default:
      return result;
  }
  return result;
}


void __fastcall RealmsWhitelistScreenController::_registerBindings(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  _DWORD *v4; // r0@9
  _DWORD *v5; // r0@13
  _DWORD *v6; // r0@17
  _DWORD *v7; // r0@21
  _DWORD *v8; // r0@25
  _DWORD *v9; // r0@29
  _DWORD *v10; // r0@33
  _DWORD *v11; // r0@37
  _DWORD *v12; // r0@41
  _DWORD *v13; // r0@53
  _DWORD *v14; // r0@57
  _DWORD *v15; // r0@61
  _DWORD *v16; // r0@65
  _DWORD *v17; // r0@69
  _DWORD *v18; // r0@73
  _DWORD *v19; // r0@77
  _DWORD *v20; // r0@81
  _DWORD *v21; // r0@85
  _DWORD *v22; // r0@89
  _DWORD *v23; // r0@93
  _DWORD *v24; // r0@97
  _DWORD *v25; // r0@101
  _DWORD *v26; // r0@105
  _DWORD *v27; // r0@109
  _DWORD *v28; // r0@113
  _DWORD *v29; // r0@117
  _DWORD *v30; // r0@121
  _DWORD *v31; // r0@125
  _DWORD *v32; // r0@129
  _DWORD *v33; // r0@133
  _DWORD *v34; // r0@137
  _DWORD *v35; // r0@141
  _DWORD *v36; // r0@145
  _DWORD *v37; // r0@149
  _DWORD *v38; // r0@153
  _DWORD *v39; // r0@157
  _DWORD *v40; // r0@161
  _DWORD *v41; // r0@165
  _DWORD *v42; // r0@169
  _DWORD *v43; // r0@173
  _DWORD *v44; // r0@177
  _DWORD *v45; // r0@181
  _DWORD *v46; // r0@185
  _DWORD *v47; // r0@189
  _DWORD *v48; // r0@193
  __int64 v49; // r1@193
  _DWORD *v50; // r0@197
  __int64 v51; // r1@197
  __int64 v52; // r1@197
  _DWORD *v53; // r0@201
  __int64 v54; // r1@201
  __int64 v55; // r1@201
  _DWORD *v56; // r0@205
  __int64 v57; // r1@205
  __int64 v58; // r1@205
  _DWORD *v59; // r0@209
  __int64 v60; // r1@209
  __int64 v61; // r1@209
  _DWORD *v62; // r0@213
  __int64 v63; // r1@213
  __int64 v64; // r1@213
  _DWORD *v65; // r0@217
  __int64 v66; // r1@217
  __int64 v67; // r1@217
  _DWORD *v68; // r0@221
  __int64 v69; // r1@221
  __int64 v70; // r1@221
  _DWORD *v71; // r0@225
  __int64 v72; // r1@225
  __int64 v73; // r1@225
  _DWORD *v74; // r0@229
  __int64 v75; // r1@229
  __int64 v76; // r1@229
  _DWORD *v77; // r0@233
  __int64 v78; // r1@233
  __int64 v79; // r1@233
  _DWORD *v80; // r0@237
  __int64 v81; // r1@237
  __int64 v82; // r1@237
  _DWORD *v83; // r0@241
  __int64 v84; // r1@241
  __int64 v85; // r1@241
  _DWORD *v86; // r0@245
  __int64 v87; // r1@245
  __int64 v88; // r1@245
  _DWORD *v89; // r0@249
  __int64 v90; // r1@249
  __int64 v91; // r1@249
  _DWORD *v92; // r0@253
  __int64 v93; // r1@253
  __int64 v94; // r1@253
  _DWORD *v95; // r0@257
  __int64 v96; // r1@257
  __int64 v97; // r1@257
  _DWORD *v98; // r0@261
  __int64 v99; // r1@261
  __int64 v100; // r1@261
  _DWORD *v101; // r0@265
  __int64 v102; // r1@265
  __int64 v103; // r1@265
  _DWORD *v104; // r0@269
  __int64 v105; // r1@269
  __int64 v106; // r1@269
  _DWORD *v107; // r0@273
  __int64 v108; // r1@273
  __int64 v109; // r1@273
  _DWORD *v110; // r0@277
  __int64 v111; // r1@277
  __int64 v112; // r1@277
  _DWORD *v113; // r0@281
  __int64 v114; // r1@281
  __int64 v115; // r1@281
  _DWORD *v116; // r0@285
  __int64 v117; // r1@285
  __int64 v118; // r1@285
  _DWORD *v119; // r0@289
  __int64 v120; // r1@289
  __int64 v121; // r1@289
  _DWORD *v122; // r0@293
  __int64 v123; // r1@293
  __int64 v124; // r1@293
  void *v125; // [sp+4h] [bp-B14h]@293
  __int64 v126; // [sp+Ch] [bp-B0Ch]@293
  _DWORD *v127; // [sp+14h] [bp-B04h]@293
  __int64 v128; // [sp+1Ch] [bp-AFCh]@293
  int v129; // [sp+24h] [bp-AF4h]@293
  int v130; // [sp+28h] [bp-AF0h]@293
  void *v131; // [sp+2Ch] [bp-AECh]@289
  __int64 v132; // [sp+34h] [bp-AE4h]@289
  _DWORD *v133; // [sp+3Ch] [bp-ADCh]@289
  __int64 v134; // [sp+44h] [bp-AD4h]@289
  int v135; // [sp+4Ch] [bp-ACCh]@289
  int v136; // [sp+50h] [bp-AC8h]@289
  void *v137; // [sp+54h] [bp-AC4h]@285
  __int64 v138; // [sp+5Ch] [bp-ABCh]@285
  _DWORD *v139; // [sp+64h] [bp-AB4h]@285
  __int64 v140; // [sp+6Ch] [bp-AACh]@285
  int v141; // [sp+74h] [bp-AA4h]@285
  int v142; // [sp+78h] [bp-AA0h]@285
  void *v143; // [sp+7Ch] [bp-A9Ch]@281
  __int64 v144; // [sp+84h] [bp-A94h]@281
  _DWORD *v145; // [sp+8Ch] [bp-A8Ch]@281
  __int64 v146; // [sp+94h] [bp-A84h]@281
  int v147; // [sp+9Ch] [bp-A7Ch]@281
  int v148; // [sp+A0h] [bp-A78h]@281
  void *v149; // [sp+A4h] [bp-A74h]@277
  __int64 v150; // [sp+ACh] [bp-A6Ch]@277
  _DWORD *v151; // [sp+B4h] [bp-A64h]@277
  __int64 v152; // [sp+BCh] [bp-A5Ch]@277
  int v153; // [sp+C4h] [bp-A54h]@277
  int v154; // [sp+C8h] [bp-A50h]@277
  void *v155; // [sp+CCh] [bp-A4Ch]@273
  __int64 v156; // [sp+D4h] [bp-A44h]@273
  _DWORD *v157; // [sp+DCh] [bp-A3Ch]@273
  __int64 v158; // [sp+E4h] [bp-A34h]@273
  int v159; // [sp+ECh] [bp-A2Ch]@273
  int v160; // [sp+F0h] [bp-A28h]@273
  void *v161; // [sp+F4h] [bp-A24h]@269
  __int64 v162; // [sp+FCh] [bp-A1Ch]@269
  _DWORD *v163; // [sp+104h] [bp-A14h]@269
  __int64 v164; // [sp+10Ch] [bp-A0Ch]@269
  int v165; // [sp+114h] [bp-A04h]@269
  int v166; // [sp+118h] [bp-A00h]@269
  void *v167; // [sp+11Ch] [bp-9FCh]@265
  __int64 v168; // [sp+124h] [bp-9F4h]@265
  _DWORD *v169; // [sp+12Ch] [bp-9ECh]@265
  __int64 v170; // [sp+134h] [bp-9E4h]@265
  int v171; // [sp+13Ch] [bp-9DCh]@265
  int v172; // [sp+140h] [bp-9D8h]@265
  void *v173; // [sp+144h] [bp-9D4h]@261
  __int64 v174; // [sp+14Ch] [bp-9CCh]@261
  _DWORD *v175; // [sp+154h] [bp-9C4h]@261
  __int64 v176; // [sp+15Ch] [bp-9BCh]@261
  int v177; // [sp+164h] [bp-9B4h]@261
  int v178; // [sp+168h] [bp-9B0h]@261
  void *v179; // [sp+16Ch] [bp-9ACh]@257
  __int64 v180; // [sp+174h] [bp-9A4h]@257
  _DWORD *v181; // [sp+17Ch] [bp-99Ch]@257
  __int64 v182; // [sp+184h] [bp-994h]@257
  int v183; // [sp+18Ch] [bp-98Ch]@257
  int v184; // [sp+190h] [bp-988h]@257
  void *v185; // [sp+194h] [bp-984h]@253
  __int64 v186; // [sp+19Ch] [bp-97Ch]@253
  _DWORD *v187; // [sp+1A4h] [bp-974h]@253
  __int64 v188; // [sp+1ACh] [bp-96Ch]@253
  int v189; // [sp+1B4h] [bp-964h]@253
  int v190; // [sp+1B8h] [bp-960h]@253
  void *v191; // [sp+1BCh] [bp-95Ch]@249
  __int64 v192; // [sp+1C4h] [bp-954h]@249
  _DWORD *v193; // [sp+1CCh] [bp-94Ch]@249
  __int64 v194; // [sp+1D4h] [bp-944h]@249
  int v195; // [sp+1DCh] [bp-93Ch]@249
  int v196; // [sp+1E0h] [bp-938h]@249
  void *v197; // [sp+1E4h] [bp-934h]@245
  __int64 v198; // [sp+1ECh] [bp-92Ch]@245
  _DWORD *v199; // [sp+1F4h] [bp-924h]@245
  __int64 v200; // [sp+1FCh] [bp-91Ch]@245
  int v201; // [sp+204h] [bp-914h]@245
  int v202; // [sp+208h] [bp-910h]@245
  void *v203; // [sp+20Ch] [bp-90Ch]@241
  __int64 v204; // [sp+214h] [bp-904h]@241
  _DWORD *v205; // [sp+21Ch] [bp-8FCh]@241
  __int64 v206; // [sp+224h] [bp-8F4h]@241
  int v207; // [sp+22Ch] [bp-8ECh]@241
  int v208; // [sp+230h] [bp-8E8h]@241
  void *v209; // [sp+234h] [bp-8E4h]@237
  __int64 v210; // [sp+23Ch] [bp-8DCh]@237
  _DWORD *v211; // [sp+244h] [bp-8D4h]@237
  __int64 v212; // [sp+24Ch] [bp-8CCh]@237
  int v213; // [sp+254h] [bp-8C4h]@237
  int v214; // [sp+258h] [bp-8C0h]@237
  void *v215; // [sp+25Ch] [bp-8BCh]@233
  __int64 v216; // [sp+264h] [bp-8B4h]@233
  _DWORD *v217; // [sp+26Ch] [bp-8ACh]@233
  __int64 v218; // [sp+274h] [bp-8A4h]@233
  int v219; // [sp+27Ch] [bp-89Ch]@233
  int v220; // [sp+280h] [bp-898h]@233
  void *v221; // [sp+284h] [bp-894h]@229
  __int64 v222; // [sp+28Ch] [bp-88Ch]@229
  _DWORD *v223; // [sp+294h] [bp-884h]@229
  __int64 v224; // [sp+29Ch] [bp-87Ch]@229
  int v225; // [sp+2A4h] [bp-874h]@229
  int v226; // [sp+2A8h] [bp-870h]@229
  void *v227; // [sp+2ACh] [bp-86Ch]@225
  __int64 v228; // [sp+2B4h] [bp-864h]@225
  _DWORD *v229; // [sp+2BCh] [bp-85Ch]@225
  __int64 v230; // [sp+2C4h] [bp-854h]@225
  int v231; // [sp+2CCh] [bp-84Ch]@225
  int v232; // [sp+2D0h] [bp-848h]@225
  void *v233; // [sp+2D4h] [bp-844h]@221
  __int64 v234; // [sp+2DCh] [bp-83Ch]@221
  _DWORD *v235; // [sp+2E4h] [bp-834h]@221
  __int64 v236; // [sp+2ECh] [bp-82Ch]@221
  int v237; // [sp+2F4h] [bp-824h]@221
  int v238; // [sp+2F8h] [bp-820h]@221
  void *v239; // [sp+2FCh] [bp-81Ch]@217
  __int64 v240; // [sp+304h] [bp-814h]@217
  _DWORD *v241; // [sp+30Ch] [bp-80Ch]@217
  __int64 v242; // [sp+314h] [bp-804h]@217
  int v243; // [sp+31Ch] [bp-7FCh]@217
  int v244; // [sp+320h] [bp-7F8h]@217
  void *v245; // [sp+324h] [bp-7F4h]@213
  __int64 v246; // [sp+32Ch] [bp-7ECh]@213
  _DWORD *v247; // [sp+334h] [bp-7E4h]@213
  __int64 v248; // [sp+33Ch] [bp-7DCh]@213
  int v249; // [sp+344h] [bp-7D4h]@213
  int v250; // [sp+348h] [bp-7D0h]@213
  void *v251; // [sp+34Ch] [bp-7CCh]@209
  __int64 v252; // [sp+354h] [bp-7C4h]@209
  _DWORD *v253; // [sp+35Ch] [bp-7BCh]@209
  __int64 v254; // [sp+364h] [bp-7B4h]@209
  int v255; // [sp+36Ch] [bp-7ACh]@209
  int v256; // [sp+370h] [bp-7A8h]@209
  void *v257; // [sp+374h] [bp-7A4h]@205
  __int64 v258; // [sp+37Ch] [bp-79Ch]@205
  _DWORD *v259; // [sp+384h] [bp-794h]@205
  __int64 v260; // [sp+38Ch] [bp-78Ch]@205
  int v261; // [sp+394h] [bp-784h]@205
  int v262; // [sp+398h] [bp-780h]@205
  void *v263; // [sp+39Ch] [bp-77Ch]@201
  __int64 v264; // [sp+3A4h] [bp-774h]@201
  _DWORD *v265; // [sp+3ACh] [bp-76Ch]@201
  __int64 v266; // [sp+3B4h] [bp-764h]@201
  int v267; // [sp+3BCh] [bp-75Ch]@201
  int v268; // [sp+3C0h] [bp-758h]@201
  void *v269; // [sp+3C4h] [bp-754h]@197
  __int64 v270; // [sp+3CCh] [bp-74Ch]@197
  _DWORD *v271; // [sp+3D4h] [bp-744h]@197
  __int64 v272; // [sp+3DCh] [bp-73Ch]@197
  int v273; // [sp+3E4h] [bp-734h]@197
  int v274; // [sp+3E8h] [bp-730h]@197
  void *v275; // [sp+3ECh] [bp-72Ch]@193
  __int64 v276; // [sp+3F4h] [bp-724h]@193
  _DWORD *v277; // [sp+3FCh] [bp-71Ch]@193
  void (*v278)(void); // [sp+404h] [bp-714h]@193
  int (__fastcall *v279)(int **, int); // [sp+408h] [bp-710h]@193
  int v280; // [sp+40Ch] [bp-70Ch]@193
  int v281; // [sp+410h] [bp-708h]@193
  void *v282; // [sp+414h] [bp-704h]@189
  void (*v283)(void); // [sp+41Ch] [bp-6FCh]@189
  signed int (*v284)(); // [sp+420h] [bp-6F8h]@189
  _DWORD *v285; // [sp+424h] [bp-6F4h]@189
  void (*v286)(void); // [sp+42Ch] [bp-6ECh]@189
  int (__fastcall *v287)(int **, int); // [sp+430h] [bp-6E8h]@189
  int v288; // [sp+434h] [bp-6E4h]@189
  int v289; // [sp+438h] [bp-6E0h]@189
  void *v290; // [sp+43Ch] [bp-6DCh]@185
  void (*v291)(void); // [sp+444h] [bp-6D4h]@185
  signed int (*v292)(); // [sp+448h] [bp-6D0h]@185
  _DWORD *v293; // [sp+44Ch] [bp-6CCh]@185
  void (*v294)(void); // [sp+454h] [bp-6C4h]@185
  int (__fastcall *v295)(int **, int); // [sp+458h] [bp-6C0h]@185
  int v296; // [sp+45Ch] [bp-6BCh]@185
  int v297; // [sp+460h] [bp-6B8h]@185
  void *v298; // [sp+464h] [bp-6B4h]@181
  void (*v299)(void); // [sp+46Ch] [bp-6ACh]@181
  signed int (*v300)(); // [sp+470h] [bp-6A8h]@181
  _DWORD *v301; // [sp+474h] [bp-6A4h]@181
  void (*v302)(void); // [sp+47Ch] [bp-69Ch]@181
  int (__fastcall *v303)(int **, int); // [sp+480h] [bp-698h]@181
  int v304; // [sp+484h] [bp-694h]@181
  int v305; // [sp+488h] [bp-690h]@181
  void *v306; // [sp+48Ch] [bp-68Ch]@177
  void (*v307)(void); // [sp+494h] [bp-684h]@177
  signed int (*v308)(); // [sp+498h] [bp-680h]@177
  _DWORD *v309; // [sp+49Ch] [bp-67Ch]@177
  void (*v310)(void); // [sp+4A4h] [bp-674h]@177
  int (__fastcall *v311)(int **, int); // [sp+4A8h] [bp-670h]@177
  int v312; // [sp+4ACh] [bp-66Ch]@177
  int v313; // [sp+4B0h] [bp-668h]@177
  void *v314; // [sp+4B4h] [bp-664h]@173
  void (*v315)(void); // [sp+4BCh] [bp-65Ch]@173
  signed int (*v316)(); // [sp+4C0h] [bp-658h]@173
  _DWORD *v317; // [sp+4C4h] [bp-654h]@173
  void (*v318)(void); // [sp+4CCh] [bp-64Ch]@173
  int *(__fastcall *v319)(int *, int **, int); // [sp+4D0h] [bp-648h]@173
  int v320; // [sp+4D4h] [bp-644h]@173
  int v321; // [sp+4D8h] [bp-640h]@173
  void *v322; // [sp+4DCh] [bp-63Ch]@169
  void (*v323)(void); // [sp+4E4h] [bp-634h]@169
  signed int (*v324)(); // [sp+4E8h] [bp-630h]@169
  _DWORD *v325; // [sp+4ECh] [bp-62Ch]@169
  void (*v326)(void); // [sp+4F4h] [bp-624h]@169
  int *(__fastcall *v327)(int *, int **, int); // [sp+4F8h] [bp-620h]@169
  int v328; // [sp+4FCh] [bp-61Ch]@169
  int v329; // [sp+500h] [bp-618h]@169
  void *v330; // [sp+504h] [bp-614h]@165
  void (*v331)(void); // [sp+50Ch] [bp-60Ch]@165
  signed int (*v332)(); // [sp+510h] [bp-608h]@165
  _DWORD *v333; // [sp+514h] [bp-604h]@165
  void (*v334)(void); // [sp+51Ch] [bp-5FCh]@165
  int *(__fastcall *v335)(int *, int **, int); // [sp+520h] [bp-5F8h]@165
  int v336; // [sp+524h] [bp-5F4h]@165
  int v337; // [sp+528h] [bp-5F0h]@165
  void *v338; // [sp+52Ch] [bp-5ECh]@161
  void (*v339)(void); // [sp+534h] [bp-5E4h]@161
  signed int (*v340)(); // [sp+538h] [bp-5E0h]@161
  _DWORD *v341; // [sp+53Ch] [bp-5DCh]@161
  void (*v342)(void); // [sp+544h] [bp-5D4h]@161
  void (__fastcall *v343)(int *, int **, int); // [sp+548h] [bp-5D0h]@161
  int v344; // [sp+54Ch] [bp-5CCh]@161
  int v345; // [sp+550h] [bp-5C8h]@161
  void *v346; // [sp+554h] [bp-5C4h]@157
  void (*v347)(void); // [sp+55Ch] [bp-5BCh]@157
  signed int (*v348)(); // [sp+560h] [bp-5B8h]@157
  _DWORD *v349; // [sp+564h] [bp-5B4h]@157
  void (*v350)(void); // [sp+56Ch] [bp-5ACh]@157
  void (__fastcall *v351)(int *, int **, int); // [sp+570h] [bp-5A8h]@157
  int v352; // [sp+574h] [bp-5A4h]@157
  int v353; // [sp+578h] [bp-5A0h]@157
  void *v354; // [sp+57Ch] [bp-59Ch]@153
  void (*v355)(void); // [sp+584h] [bp-594h]@153
  signed int (*v356)(); // [sp+588h] [bp-590h]@153
  _DWORD *v357; // [sp+58Ch] [bp-58Ch]@153
  void (*v358)(void); // [sp+594h] [bp-584h]@153
  int *(__fastcall *v359)(int *, int **, int); // [sp+598h] [bp-580h]@153
  int v360; // [sp+59Ch] [bp-57Ch]@153
  int v361; // [sp+5A0h] [bp-578h]@153
  void *v362; // [sp+5A4h] [bp-574h]@149
  void (*v363)(void); // [sp+5ACh] [bp-56Ch]@149
  signed int (*v364)(); // [sp+5B0h] [bp-568h]@149
  _DWORD *v365; // [sp+5B4h] [bp-564h]@149
  void (*v366)(void); // [sp+5BCh] [bp-55Ch]@149
  int *(__fastcall *v367)(int *, int **, int); // [sp+5C0h] [bp-558h]@149
  int v368; // [sp+5C4h] [bp-554h]@149
  int v369; // [sp+5C8h] [bp-550h]@149
  void *v370; // [sp+5CCh] [bp-54Ch]@145
  void (*v371)(void); // [sp+5D4h] [bp-544h]@145
  signed int (*v372)(); // [sp+5D8h] [bp-540h]@145
  _DWORD *v373; // [sp+5DCh] [bp-53Ch]@145
  void (*v374)(void); // [sp+5E4h] [bp-534h]@145
  int *(__fastcall *v375)(int *, int **, int); // [sp+5E8h] [bp-530h]@145
  int v376; // [sp+5ECh] [bp-52Ch]@145
  int v377; // [sp+5F0h] [bp-528h]@145
  void *v378; // [sp+5F4h] [bp-524h]@141
  void (*v379)(void); // [sp+5FCh] [bp-51Ch]@141
  signed int (*v380)(); // [sp+600h] [bp-518h]@141
  _DWORD *v381; // [sp+604h] [bp-514h]@141
  void (*v382)(void); // [sp+60Ch] [bp-50Ch]@141
  int *(__fastcall *v383)(int *, int **, int); // [sp+610h] [bp-508h]@141
  int v384; // [sp+614h] [bp-504h]@141
  int v385; // [sp+618h] [bp-500h]@141
  void *v386; // [sp+61Ch] [bp-4FCh]@137
  void (*v387)(void); // [sp+624h] [bp-4F4h]@137
  signed int (*v388)(); // [sp+628h] [bp-4F0h]@137
  _DWORD *v389; // [sp+62Ch] [bp-4ECh]@137
  void (*v390)(void); // [sp+634h] [bp-4E4h]@137
  int (__fastcall *v391)(int, int **); // [sp+638h] [bp-4E0h]@137
  int v392; // [sp+63Ch] [bp-4DCh]@137
  void *v393; // [sp+640h] [bp-4D8h]@133
  void (*v394)(void); // [sp+648h] [bp-4D0h]@133
  signed int (*v395)(); // [sp+64Ch] [bp-4CCh]@133
  _DWORD *v396; // [sp+650h] [bp-4C8h]@133
  void (*v397)(void); // [sp+658h] [bp-4C0h]@133
  int (__fastcall *v398)(int, int **); // [sp+65Ch] [bp-4BCh]@133
  int v399; // [sp+660h] [bp-4B8h]@133
  void *v400; // [sp+664h] [bp-4B4h]@129
  void (*v401)(void); // [sp+66Ch] [bp-4ACh]@129
  signed int (*v402)(); // [sp+670h] [bp-4A8h]@129
  _DWORD *v403; // [sp+674h] [bp-4A4h]@129
  void (*v404)(void); // [sp+67Ch] [bp-49Ch]@129
  int (__fastcall *v405)(int, int **); // [sp+680h] [bp-498h]@129
  int v406; // [sp+684h] [bp-494h]@129
  void *v407; // [sp+688h] [bp-490h]@125
  void (*v408)(void); // [sp+690h] [bp-488h]@125
  signed int (*v409)(); // [sp+694h] [bp-484h]@125
  _DWORD *v410; // [sp+698h] [bp-480h]@125
  void (*v411)(void); // [sp+6A0h] [bp-478h]@125
  int (__fastcall *v412)(int, int **); // [sp+6A4h] [bp-474h]@125
  int v413; // [sp+6A8h] [bp-470h]@125
  void *v414; // [sp+6ACh] [bp-46Ch]@121
  void (*v415)(void); // [sp+6B4h] [bp-464h]@121
  signed int (*v416)(); // [sp+6B8h] [bp-460h]@121
  _DWORD *v417; // [sp+6BCh] [bp-45Ch]@121
  void (*v418)(void); // [sp+6C4h] [bp-454h]@121
  signed int (__fastcall *v419)(int **); // [sp+6C8h] [bp-450h]@121
  int v420; // [sp+6CCh] [bp-44Ch]@121
  void *v421; // [sp+6D0h] [bp-448h]@117
  void (*v422)(void); // [sp+6D8h] [bp-440h]@117
  signed int (*v423)(); // [sp+6DCh] [bp-43Ch]@117
  _DWORD *v424; // [sp+6E0h] [bp-438h]@117
  void (*v425)(void); // [sp+6E8h] [bp-430h]@117
  signed int (__fastcall *v426)(int **); // [sp+6ECh] [bp-42Ch]@117
  int v427; // [sp+6F0h] [bp-428h]@117
  void *v428; // [sp+6F4h] [bp-424h]@113
  void (*v429)(void); // [sp+6FCh] [bp-41Ch]@113
  signed int (*v430)(); // [sp+700h] [bp-418h]@113
  _DWORD *v431; // [sp+704h] [bp-414h]@113
  void (*v432)(void); // [sp+70Ch] [bp-40Ch]@113
  signed int (__fastcall *v433)(int **); // [sp+710h] [bp-408h]@113
  int v434; // [sp+714h] [bp-404h]@113
  void *v435; // [sp+718h] [bp-400h]@109
  void (*v436)(void); // [sp+720h] [bp-3F8h]@109
  signed int (*v437)(); // [sp+724h] [bp-3F4h]@109
  _DWORD *v438; // [sp+728h] [bp-3F0h]@109
  void (*v439)(void); // [sp+730h] [bp-3E8h]@109
  signed int (__fastcall *v440)(int **); // [sp+734h] [bp-3E4h]@109
  int v441; // [sp+738h] [bp-3E0h]@109
  void *v442; // [sp+73Ch] [bp-3DCh]@105
  void (*v443)(void); // [sp+744h] [bp-3D4h]@105
  signed int (*v444)(); // [sp+748h] [bp-3D0h]@105
  _DWORD *v445; // [sp+74Ch] [bp-3CCh]@105
  void (*v446)(void); // [sp+754h] [bp-3C4h]@105
  signed int (__fastcall *v447)(int); // [sp+758h] [bp-3C0h]@105
  int v448; // [sp+75Ch] [bp-3BCh]@105
  void *v449; // [sp+760h] [bp-3B8h]@101
  void (*v450)(void); // [sp+768h] [bp-3B0h]@101
  signed int (*v451)(); // [sp+76Ch] [bp-3ACh]@101
  _DWORD *v452; // [sp+770h] [bp-3A8h]@101
  void (*v453)(void); // [sp+778h] [bp-3A0h]@101
  signed int (__fastcall *v454)(int); // [sp+77Ch] [bp-39Ch]@101
  int v455; // [sp+780h] [bp-398h]@101
  void *v456; // [sp+784h] [bp-394h]@97
  void (*v457)(void); // [sp+78Ch] [bp-38Ch]@97
  signed int (*v458)(); // [sp+790h] [bp-388h]@97
  _DWORD *v459; // [sp+794h] [bp-384h]@97
  void (*v460)(void); // [sp+79Ch] [bp-37Ch]@97
  signed int (__fastcall *v461)(int); // [sp+7A0h] [bp-378h]@97
  int v462; // [sp+7A4h] [bp-374h]@97
  void *v463; // [sp+7A8h] [bp-370h]@93
  void (*v464)(void); // [sp+7B0h] [bp-368h]@93
  signed int (*v465)(); // [sp+7B4h] [bp-364h]@93
  _DWORD *v466; // [sp+7B8h] [bp-360h]@93
  void (*v467)(void); // [sp+7C0h] [bp-358h]@93
  signed int (__fastcall *v468)(int); // [sp+7C4h] [bp-354h]@93
  int v469; // [sp+7C8h] [bp-350h]@93
  void *v470; // [sp+7CCh] [bp-34Ch]@89
  void (*v471)(void); // [sp+7D4h] [bp-344h]@89
  signed int (*v472)(); // [sp+7D8h] [bp-340h]@89
  _DWORD *v473; // [sp+7DCh] [bp-33Ch]@89
  void (*v474)(void); // [sp+7E4h] [bp-334h]@89
  signed int (__fastcall *v475)(int); // [sp+7E8h] [bp-330h]@89
  int v476; // [sp+7ECh] [bp-32Ch]@89
  void *v477; // [sp+7F0h] [bp-328h]@85
  void (*v478)(void); // [sp+7F8h] [bp-320h]@85
  signed int (*v479)(); // [sp+7FCh] [bp-31Ch]@85
  _DWORD *v480; // [sp+800h] [bp-318h]@85
  void (*v481)(void); // [sp+808h] [bp-310h]@85
  _BOOL4 (__fastcall *v482)(int); // [sp+80Ch] [bp-30Ch]@85
  int v483; // [sp+810h] [bp-308h]@85
  void *v484; // [sp+814h] [bp-304h]@81
  void (*v485)(void); // [sp+81Ch] [bp-2FCh]@81
  signed int (*v486)(); // [sp+820h] [bp-2F8h]@81
  _DWORD *v487; // [sp+824h] [bp-2F4h]@81
  void (*v488)(void); // [sp+82Ch] [bp-2ECh]@81
  signed int (__fastcall *v489)(int **); // [sp+830h] [bp-2E8h]@81
  int v490; // [sp+834h] [bp-2E4h]@81
  void *v491; // [sp+838h] [bp-2E0h]@77
  void (*v492)(void); // [sp+840h] [bp-2D8h]@77
  signed int (*v493)(); // [sp+844h] [bp-2D4h]@77
  _DWORD *v494; // [sp+848h] [bp-2D0h]@77
  void (*v495)(void); // [sp+850h] [bp-2C8h]@77
  signed int (__fastcall *v496)(int **); // [sp+854h] [bp-2C4h]@77
  int v497; // [sp+858h] [bp-2C0h]@77
  void *v498; // [sp+85Ch] [bp-2BCh]@73
  void (*v499)(void); // [sp+864h] [bp-2B4h]@73
  signed int (*v500)(); // [sp+868h] [bp-2B0h]@73
  _DWORD *v501; // [sp+86Ch] [bp-2ACh]@73
  void (*v502)(void); // [sp+874h] [bp-2A4h]@73
  signed int (__fastcall *v503)(int **); // [sp+878h] [bp-2A0h]@73
  int v504; // [sp+87Ch] [bp-29Ch]@73
  void *v505; // [sp+880h] [bp-298h]@69
  void (*v506)(void); // [sp+888h] [bp-290h]@69
  signed int (*v507)(); // [sp+88Ch] [bp-28Ch]@69
  _DWORD *v508; // [sp+890h] [bp-288h]@69
  void (*v509)(void); // [sp+898h] [bp-280h]@69
  signed int (__fastcall *v510)(int **); // [sp+89Ch] [bp-27Ch]@69
  int v511; // [sp+8A0h] [bp-278h]@69
  void *v512; // [sp+8A4h] [bp-274h]@65
  void (*v513)(void); // [sp+8ACh] [bp-26Ch]@65
  signed int (*v514)(); // [sp+8B0h] [bp-268h]@65
  _DWORD *v515; // [sp+8B4h] [bp-264h]@65
  void (*v516)(void); // [sp+8BCh] [bp-25Ch]@65
  signed int (__fastcall *v517)(int **); // [sp+8C0h] [bp-258h]@65
  int v518; // [sp+8C4h] [bp-254h]@65
  void *v519; // [sp+8C8h] [bp-250h]@61
  void (*v520)(void); // [sp+8D0h] [bp-248h]@61
  signed int (*v521)(); // [sp+8D4h] [bp-244h]@61
  _DWORD *v522; // [sp+8D8h] [bp-240h]@61
  void (*v523)(void); // [sp+8E0h] [bp-238h]@61
  signed int (__fastcall *v524)(int **); // [sp+8E4h] [bp-234h]@61
  int v525; // [sp+8E8h] [bp-230h]@61
  void *v526; // [sp+8ECh] [bp-22Ch]@57
  void (*v527)(void); // [sp+8F4h] [bp-224h]@57
  signed int (*v528)(); // [sp+8F8h] [bp-220h]@57
  _DWORD *v529; // [sp+8FCh] [bp-21Ch]@57
  void (*v530)(void); // [sp+904h] [bp-214h]@57
  signed int (__fastcall *v531)(int **); // [sp+908h] [bp-210h]@57
  int v532; // [sp+90Ch] [bp-20Ch]@57
  void *v533; // [sp+910h] [bp-208h]@53
  void (*v534)(void); // [sp+918h] [bp-200h]@53
  signed int (*v535)(); // [sp+91Ch] [bp-1FCh]@53
  _DWORD *v536; // [sp+920h] [bp-1F8h]@53
  void (*v537)(void); // [sp+928h] [bp-1F0h]@53
  signed int (__fastcall *v538)(int **); // [sp+92Ch] [bp-1ECh]@53
  int v539; // [sp+930h] [bp-1E8h]@53
  void *v540; // [sp+934h] [bp-1E4h]@49
  void (*v541)(void); // [sp+93Ch] [bp-1DCh]@49
  signed int (*v542)(); // [sp+940h] [bp-1D8h]@49
  void *v543; // [sp+944h] [bp-1D4h]@49
  void (*v544)(void); // [sp+94Ch] [bp-1CCh]@49
  void **(__fastcall *v545)(void **); // [sp+950h] [bp-1C8h]@49
  int v546; // [sp+954h] [bp-1C4h]@49
  void *v547; // [sp+958h] [bp-1C0h]@45
  void (*v548)(void); // [sp+960h] [bp-1B8h]@45
  signed int (*v549)(); // [sp+964h] [bp-1B4h]@45
  void *v550; // [sp+968h] [bp-1B0h]@45
  void (*v551)(void); // [sp+970h] [bp-1A8h]@45
  void **(__fastcall *v552)(void **); // [sp+974h] [bp-1A4h]@45
  int v553; // [sp+978h] [bp-1A0h]@45
  void *v554; // [sp+97Ch] [bp-19Ch]@41
  void (*v555)(void); // [sp+984h] [bp-194h]@41
  signed int (*v556)(); // [sp+988h] [bp-190h]@41
  _DWORD *v557; // [sp+98Ch] [bp-18Ch]@41
  void (*v558)(void); // [sp+994h] [bp-184h]@41
  signed int (__fastcall *v559)(int); // [sp+998h] [bp-180h]@41
  int v560; // [sp+99Ch] [bp-17Ch]@41
  void *v561; // [sp+9A0h] [bp-178h]@37
  void (*v562)(void); // [sp+9A8h] [bp-170h]@37
  signed int (*v563)(); // [sp+9ACh] [bp-16Ch]@37
  _DWORD *v564; // [sp+9B0h] [bp-168h]@37
  void (*v565)(void); // [sp+9B8h] [bp-160h]@37
  signed int (__fastcall *v566)(int **); // [sp+9BCh] [bp-15Ch]@37
  int v567; // [sp+9C0h] [bp-158h]@37
  void *v568; // [sp+9C4h] [bp-154h]@33
  void (*v569)(void); // [sp+9CCh] [bp-14Ch]@33
  signed int (*v570)(); // [sp+9D0h] [bp-148h]@33
  _DWORD *v571; // [sp+9D4h] [bp-144h]@33
  void (*v572)(void); // [sp+9DCh] [bp-13Ch]@33
  void (__fastcall *v573)(int *, int **); // [sp+9E0h] [bp-138h]@33
  int v574; // [sp+9E4h] [bp-134h]@33
  void *v575; // [sp+9E8h] [bp-130h]@29
  void (*v576)(void); // [sp+9F0h] [bp-128h]@29
  signed int (*v577)(); // [sp+9F4h] [bp-124h]@29
  _DWORD *v578; // [sp+9F8h] [bp-120h]@29
  void (*v579)(void); // [sp+A00h] [bp-118h]@29
  signed int (__fastcall *v580)(int **); // [sp+A04h] [bp-114h]@29
  int v581; // [sp+A08h] [bp-110h]@29
  void *v582; // [sp+A0Ch] [bp-10Ch]@25
  void (*v583)(void); // [sp+A14h] [bp-104h]@25
  signed int (*v584)(); // [sp+A18h] [bp-100h]@25
  _DWORD *v585; // [sp+A1Ch] [bp-FCh]@25
  void (*v586)(void); // [sp+A24h] [bp-F4h]@25
  void (__fastcall *v587)(int *, int **); // [sp+A28h] [bp-F0h]@25
  int v588; // [sp+A2Ch] [bp-ECh]@25
  void *v589; // [sp+A30h] [bp-E8h]@21
  void (*v590)(void); // [sp+A38h] [bp-E0h]@21
  signed int (*v591)(); // [sp+A3Ch] [bp-DCh]@21
  _DWORD *v592; // [sp+A40h] [bp-D8h]@21
  void (*v593)(void); // [sp+A48h] [bp-D0h]@21
  _BOOL4 (__fastcall *v594)(int); // [sp+A4Ch] [bp-CCh]@21
  int v595; // [sp+A50h] [bp-C8h]@21
  void *v596; // [sp+A54h] [bp-C4h]@17
  void (*v597)(void); // [sp+A5Ch] [bp-BCh]@17
  signed int (*v598)(); // [sp+A60h] [bp-B8h]@17
  _DWORD *v599; // [sp+A64h] [bp-B4h]@17
  void (*v600)(void); // [sp+A6Ch] [bp-ACh]@17
  void (__fastcall *v601)(Util *, int **); // [sp+A70h] [bp-A8h]@17
  int v602; // [sp+A74h] [bp-A4h]@17
  void *v603; // [sp+A78h] [bp-A0h]@13
  void (*v604)(void); // [sp+A80h] [bp-98h]@13
  signed int (*v605)(); // [sp+A84h] [bp-94h]@13
  _DWORD *v606; // [sp+A88h] [bp-90h]@13
  void (*v607)(void); // [sp+A90h] [bp-88h]@13
  void (__fastcall *v608)(Util *, int **); // [sp+A94h] [bp-84h]@13
  int v609; // [sp+A98h] [bp-80h]@13
  void *v610; // [sp+A9Ch] [bp-7Ch]@9
  void (*v611)(void); // [sp+AA4h] [bp-74h]@9
  signed int (*v612)(); // [sp+AA8h] [bp-70h]@9
  _DWORD *v613; // [sp+AACh] [bp-6Ch]@9
  void (*v614)(void); // [sp+AB4h] [bp-64h]@9
  void (__fastcall *v615)(Util *, int **); // [sp+AB8h] [bp-60h]@9
  int v616; // [sp+ABCh] [bp-5Ch]@9
  void *v617; // [sp+AC0h] [bp-58h]@5
  void (*v618)(void); // [sp+AC8h] [bp-50h]@5
  signed int (*v619)(); // [sp+ACCh] [bp-4Ch]@5
  _DWORD *v620; // [sp+AD0h] [bp-48h]@5
  void (*v621)(void); // [sp+AD8h] [bp-40h]@5
  void (__fastcall *v622)(Util *, int **); // [sp+ADCh] [bp-3Ch]@5
  int v623; // [sp+AE0h] [bp-38h]@5
  void *v624; // [sp+AE4h] [bp-34h]@1
  void (*v625)(void); // [sp+AECh] [bp-2Ch]@1
  signed int (*v626)(); // [sp+AF0h] [bp-28h]@1
  _DWORD *v627; // [sp+AF4h] [bp-24h]@1
  void (*v628)(void); // [sp+AFCh] [bp-1Ch]@1
  signed int (__fastcall *v629)(int **); // [sp+B00h] [bp-18h]@1
  int v630; // [sp+B04h] [bp-14h]@1

  v1 = this;
  v630 = 64814913;
  v2 = operator new(4u);
  *v2 = v1;
  v627 = v2;
  v629 = sub_121F11E;
  v628 = (void (*)(void))sub_121F15E;
  v624 = operator new(1u);
  v626 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v625 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v630, (int)&v627, (int)&v624);
  if ( v625 )
    v625();
  if ( v628 )
    v628();
  StringHash::StringHash<char [35]>(&v623, (int)"#uninvited_friends_page_index_text");
  v3 = operator new(4u);
  *v3 = v1;
  v620 = v3;
  v622 = sub_121F194;
  v621 = (void (*)(void))sub_121F1DC;
  v617 = operator new(1u);
  v619 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v618 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v623, (int)&v620, (int)&v617);
  if ( v618 )
    v618();
  if ( v621 )
    v621();
  StringHash::StringHash<char [33]>(&v616, (int)"#invited_friends_page_index_text");
  v4 = operator new(4u);
  *v4 = v1;
  v613 = v4;
  v615 = sub_121F214;
  v614 = (void (*)(void))sub_121F25C;
  v610 = operator new(1u);
  v612 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v611 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v616, (int)&v613, (int)&v610);
  if ( v611 )
    v611();
  if ( v614 )
    v614();
  StringHash::StringHash<char [25]>(&v609, (int)"#members_page_index_text");
  v5 = operator new(4u);
  *v5 = v1;
  v606 = v5;
  v608 = sub_121F294;
  v607 = (void (*)(void))sub_121F2DC;
  v603 = operator new(1u);
  v605 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v604 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v609, (int)&v606, (int)&v603);
  if ( v604 )
    v604();
  if ( v607 )
    v607();
  StringHash::StringHash<char [33]>(&v602, (int)"#blocked_players_page_index_text");
  v6 = operator new(4u);
  *v6 = v1;
  v599 = v6;
  v601 = sub_121F314;
  v600 = (void (*)(void))sub_121F35C;
  v596 = operator new(1u);
  v598 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v597 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v602, (int)&v599, (int)&v596);
  if ( v597 )
    v597();
  if ( v600 )
    v600();
  v595 = 1226024148;
  v7 = operator new(4u);
  *v7 = v1;
  v592 = v7;
  v594 = sub_121F392;
  v593 = (void (*)(void))sub_121F3A2;
  v589 = operator new(1u);
  v591 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v590 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v595, (int)&v592, (int)&v589);
  if ( v590 )
    v590();
  if ( v593 )
    v593();
  v588 = 432702600;
  v8 = operator new(4u);
  *v8 = v1;
  v585 = v8;
  v587 = sub_121F3D8;
  v586 = (void (*)(void))sub_121F4C8;
  v582 = operator new(1u);
  v584 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v583 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v588, (int)&v585, (int)&v582);
  if ( v583 )
    v583();
  if ( v586 )
    v586();
  StringHash::StringHash<char [23]>(&v581, (int)"#realm_warning_visible");
  v9 = operator new(4u);
  *v9 = v1;
  v578 = v9;
  v580 = sub_121F4FE;
  v579 = (void (*)(void))sub_121F51A;
  v575 = operator new(1u);
  v577 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v576 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v581, (int)&v578, (int)&v575);
  if ( v576 )
    v576();
  if ( v579 )
    v579();
  v574 = -1513713421;
  v10 = operator new(4u);
  *v10 = v1;
  v571 = v10;
  v573 = sub_121F550;
  v572 = (void (*)(void))sub_121F6EC;
  v568 = operator new(1u);
  v570 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v569 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v574, (int)&v571, (int)&v568);
  if ( v569 )
    v569();
  if ( v572 )
    v572();
  v567 = 1745090829;
  v11 = operator new(4u);
  *v11 = v1;
  v564 = v11;
  v566 = sub_121F722;
  v565 = (void (*)(void))sub_121F74E;
  v561 = operator new(1u);
  v563 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v562 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v567, (int)&v564, (int)&v561);
  if ( v562 )
    v562();
  if ( v565 )
    v565();
  v560 = 247957436;
  v12 = operator new(4u);
  *v12 = v1;
  v557 = v12;
  v559 = sub_121F784;
  v558 = (void (*)(void))sub_121F796;
  v554 = operator new(1u);
  v556 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v555 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v560, (int)&v557, (int)&v554);
  if ( v555 )
    v555();
  if ( v558 )
    v558();
  StringHash::StringHash<char [39]>(&v553, (int)"#realms_whitelist_button_a_description");
  v550 = operator new(1u);
  v552 = sub_121F7CC;
  v551 = (void (*)(void))sub_121F7E4;
  v547 = operator new(1u);
  v549 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v548 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v553, (int)&v550, (int)&v547);
  if ( v548 )
    v548();
  if ( v551 )
    v551();
  StringHash::StringHash<char [39]>(&v546, (int)"#realms_whitelist_button_b_description");
  v543 = operator new(1u);
  v545 = sub_121F814;
  v544 = (void (*)(void))sub_121F82C;
  v540 = operator new(1u);
  v542 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v541 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v546, (int)&v543, (int)&v540);
  if ( v541 )
    v541();
  if ( v544 )
    v544();
  v539 = -1176354552;
  v13 = operator new(4u);
  *v13 = v1;
  v536 = v13;
  v538 = sub_121F85A;
  v537 = (void (*)(void))sub_121F876;
  v533 = operator new(1u);
  v535 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v534 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v539, (int)&v536, (int)&v533);
  if ( v534 )
    v534();
  if ( v537 )
    v537();
  StringHash::StringHash<char [25]>(&v532, (int)"#invited_friends_visible");
  v14 = operator new(4u);
  *v14 = v1;
  v529 = v14;
  v531 = sub_121F8AC;
  v530 = (void (*)(void))sub_121F8C8;
  v526 = operator new(1u);
  v528 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v527 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v532, (int)&v529, (int)&v526);
  if ( v527 )
    v527();
  if ( v530 )
    v530();
  StringHash::StringHash<char [27]>(&v525, (int)"#uninvited_friends_visible");
  v15 = operator new(4u);
  *v15 = v1;
  v522 = v15;
  v524 = sub_121F8FE;
  v523 = (void (*)(void))sub_121F91A;
  v519 = operator new(1u);
  v521 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v520 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v525, (int)&v522, (int)&v519);
  if ( v520 )
    v520();
  if ( v523 )
    v523();
  StringHash::StringHash<char [25]>(&v518, (int)"#blocked_players_visible");
  v16 = operator new(4u);
  *v16 = v1;
  v515 = v16;
  v517 = sub_121F950;
  v516 = (void (*)(void))sub_121F96C;
  v512 = operator new(1u);
  v514 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v513 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v518, (int)&v515, (int)&v512);
  if ( v513 )
    v513();
  if ( v516 )
    v516();
  StringHash::StringHash<char [35]>(&v511, (int)"#uninvited_friends_buttons_visible");
  v17 = operator new(4u);
  *v17 = v1;
  v508 = v17;
  v510 = sub_121F9A2;
  v509 = (void (*)(void))sub_121F9EA;
  v505 = operator new(1u);
  v507 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v506 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v511, (int)&v508, (int)&v505);
  if ( v506 )
    v506();
  if ( v509 )
    v509();
  StringHash::StringHash<char [33]>(&v504, (int)"#invited_friends_buttons_visible");
  v18 = operator new(4u);
  *v18 = v1;
  v501 = v18;
  v503 = sub_121FA20;
  v502 = (void (*)(void))sub_121FA68;
  v498 = operator new(1u);
  v500 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v499 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v504, (int)&v501, (int)&v498);
  if ( v499 )
    v499();
  if ( v502 )
    v502();
  StringHash::StringHash<char [25]>(&v497, (int)"#members_buttons_visible");
  v19 = operator new(4u);
  *v19 = v1;
  v494 = v19;
  v496 = sub_121FA9E;
  v495 = (void (*)(void))sub_121FAE6;
  v491 = operator new(1u);
  v493 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v492 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v497, (int)&v494, (int)&v491);
  if ( v492 )
    v492();
  if ( v495 )
    v495();
  StringHash::StringHash<char [33]>(&v490, (int)"#blocked_players_buttons_visible");
  v20 = operator new(4u);
  *v20 = v1;
  v487 = v20;
  v489 = sub_121FB1C;
  v488 = (void (*)(void))sub_121FB64;
  v484 = operator new(1u);
  v486 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v485 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v490, (int)&v487, (int)&v484);
  if ( v485 )
    v485();
  if ( v488 )
    v488();
  StringHash::StringHash<char [25]>(&v483, (int)"#refresh_message_visible");
  v21 = operator new(4u);
  *v21 = v1;
  v480 = v21;
  v482 = sub_121FB9A;
  v481 = (void (*)(void))sub_121FBAA;
  v477 = operator new(1u);
  v479 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v478 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v483, (int)&v480, (int)&v477);
  if ( v478 )
    v478();
  if ( v481 )
    v481();
  StringHash::StringHash<char [25]>(&v476, (int)"#default_message_visible");
  v22 = operator new(4u);
  *v22 = v1;
  v473 = v22;
  v475 = sub_121FBE0;
  v474 = (void (*)(void))sub_121FBF2;
  v470 = operator new(1u);
  v472 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v471 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v476, (int)&v473, (int)&v470);
  if ( v471 )
    v471();
  if ( v474 )
    v474();
  StringHash::StringHash<char [36]>(&v469, (int)"#invited_friends_prevButton_visible");
  v23 = operator new(4u);
  *v23 = v1;
  v466 = v23;
  v468 = sub_121FC28;
  v467 = (void (*)(void))sub_121FC3A;
  v463 = operator new(1u);
  v465 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v464 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v469, (int)&v466, (int)&v463);
  if ( v464 )
    v464();
  if ( v467 )
    v467();
  StringHash::StringHash<char [38]>(&v462, (int)"#uninvited_friends_prevButton_visible");
  v24 = operator new(4u);
  *v24 = v1;
  v459 = v24;
  v461 = sub_121FC70;
  v460 = (void (*)(void))sub_121FC82;
  v456 = operator new(1u);
  v458 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v457 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v462, (int)&v459, (int)&v456);
  if ( v457 )
    v457();
  if ( v460 )
    v460();
  StringHash::StringHash<char [28]>(&v455, (int)"#members_prevButton_visible");
  v25 = operator new(4u);
  *v25 = v1;
  v452 = v25;
  v454 = sub_121FCB8;
  v453 = (void (*)(void))sub_121FCCA;
  v449 = operator new(1u);
  v451 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v450 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v455, (int)&v452, (int)&v449);
  if ( v450 )
    v450();
  if ( v453 )
    v453();
  StringHash::StringHash<char [36]>(&v448, (int)"#blocked_players_prevButton_visible");
  v26 = operator new(4u);
  *v26 = v1;
  v445 = v26;
  v447 = sub_121FD00;
  v446 = (void (*)(void))sub_121FD12;
  v442 = operator new(1u);
  v444 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v443 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v448, (int)&v445, (int)&v442);
  if ( v443 )
    v443();
  if ( v446 )
    v446();
  StringHash::StringHash<char [36]>(&v441, (int)"#invited_friends_nextButton_visible");
  v27 = operator new(4u);
  *v27 = v1;
  v438 = v27;
  v440 = sub_121FD48;
  v439 = (void (*)(void))sub_121FD88;
  v435 = operator new(1u);
  v437 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v436 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v441, (int)&v438, (int)&v435);
  if ( v436 )
    v436();
  if ( v439 )
    v439();
  StringHash::StringHash<char [38]>(&v434, (int)"#uninvited_friends_nextButton_visible");
  v28 = operator new(4u);
  *v28 = v1;
  v431 = v28;
  v433 = sub_121FDBE;
  v432 = (void (*)(void))sub_121FDFE;
  v428 = operator new(1u);
  v430 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v429 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v434, (int)&v431, (int)&v428);
  if ( v429 )
    v429();
  if ( v432 )
    v432();
  StringHash::StringHash<char [28]>(&v427, (int)"#members_nextButton_visible");
  v29 = operator new(4u);
  *v29 = v1;
  v424 = v29;
  v426 = sub_121FE34;
  v425 = (void (*)(void))sub_121FE74;
  v421 = operator new(1u);
  v423 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v422 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v427, (int)&v424, (int)&v421);
  if ( v422 )
    v422();
  if ( v425 )
    v425();
  StringHash::StringHash<char [36]>(&v420, (int)"#blocked_players_nextButton_visible");
  v30 = operator new(4u);
  *v30 = v1;
  v417 = v30;
  v419 = sub_121FEAA;
  v418 = (void (*)(void))sub_121FEEA;
  v414 = operator new(1u);
  v416 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v415 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v420, (int)&v417, (int)&v414);
  if ( v415 )
    v415();
  if ( v418 )
    v418();
  StringHash::StringHash<char [24]>(&v413, (int)"#members_grid_dimension");
  v31 = operator new(4u);
  *v31 = v1;
  v410 = v31;
  v412 = sub_121FF20;
  v411 = (void (*)(void))sub_121FF56;
  v407 = operator new(1u);
  v409 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v408 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize((int)v1, &v413, (int)&v410, (int)&v407);
  if ( v408 )
    v408();
  if ( v411 )
    v411();
  StringHash::StringHash<char [32]>(&v406, (int)"#invited_friends_grid_dimension");
  v32 = operator new(4u);
  *v32 = v1;
  v403 = v32;
  v405 = sub_121FF8C;
  v404 = (void (*)(void))sub_121FFC2;
  v400 = operator new(1u);
  v402 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v401 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize((int)v1, &v406, (int)&v403, (int)&v400);
  if ( v401 )
    v401();
  if ( v404 )
    v404();
  StringHash::StringHash<char [34]>(&v399, (int)"#uninvited_friends_grid_dimension");
  v33 = operator new(4u);
  *v33 = v1;
  v396 = v33;
  v398 = sub_121FFF8;
  v397 = (void (*)(void))sub_122002E;
  v393 = operator new(1u);
  v395 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v394 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize((int)v1, &v399, (int)&v396, (int)&v393);
  if ( v394 )
    v394();
  if ( v397 )
    v397();
  StringHash::StringHash<char [32]>(&v392, (int)"#blocked_players_grid_dimension");
  v34 = operator new(4u);
  *v34 = v1;
  v389 = v34;
  v391 = sub_1220064;
  v390 = (void (*)(void))sub_122009A;
  v386 = operator new(1u);
  v388 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v387 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize((int)v1, &v392, (int)&v389, (int)&v386);
  if ( v387 )
    v387();
  if ( v390 )
    v390();
  v385 = -1682116023;
  v384 = 486579846;
  v35 = operator new(4u);
  *v35 = v1;
  v381 = v35;
  v383 = sub_12200D0;
  v382 = (void (*)(void))sub_12200EA;
  v378 = operator new(1u);
  v380 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v379 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v385, &v384, (int)&v381, (int)&v378);
  if ( v379 )
    v379();
  if ( v382 )
    v382();
  StringHash::StringHash<char [27]>(&v377, (int)"invited_friends_collection");
  v376 = 486579846;
  v36 = operator new(4u);
  *v36 = v1;
  v373 = v36;
  v375 = sub_1220120;
  v374 = (void (*)(void))sub_122013A;
  v370 = operator new(1u);
  v372 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v371 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v377, &v376, (int)&v373, (int)&v370);
  if ( v371 )
    v371();
  if ( v374 )
    v374();
  StringHash::StringHash<char [29]>(&v369, (int)"uninvited_friends_collection");
  v368 = 486579846;
  v37 = operator new(4u);
  *v37 = v1;
  v365 = v37;
  v367 = sub_1220170;
  v366 = (void (*)(void))sub_122018A;
  v362 = operator new(1u);
  v364 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v363 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v369, &v368, (int)&v365, (int)&v362);
  if ( v363 )
    v363();
  if ( v366 )
    v366();
  StringHash::StringHash<char [27]>(&v361, (int)"blocked_players_collection");
  v360 = 486579846;
  v38 = operator new(4u);
  *v38 = v1;
  v357 = v38;
  v359 = sub_12201C0;
  v358 = (void (*)(void))sub_12201DA;
  v354 = operator new(1u);
  v356 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v355 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v361, &v360, (int)&v357, (int)&v354);
  if ( v355 )
    v355();
  if ( v358 )
    v358();
  v353 = -1682116023;
  v352 = 1203549156;
  v39 = operator new(4u);
  *v39 = v1;
  v349 = v39;
  v351 = sub_1220210;
  v350 = (void (*)(void))sub_1220304;
  v346 = operator new(1u);
  v348 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v347 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v353, &v352, (int)&v349, (int)&v346);
  if ( v347 )
    v347();
  if ( v350 )
    v350();
  StringHash::StringHash<char [27]>(&v345, (int)"invited_friends_collection");
  v344 = 1203549156;
  v40 = operator new(4u);
  *v40 = v1;
  v341 = v40;
  v343 = sub_122033C;
  v342 = (void (*)(void))sub_1220430;
  v338 = operator new(1u);
  v340 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v339 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v345, &v344, (int)&v341, (int)&v338);
  if ( v339 )
    v339();
  if ( v342 )
    v342();
  StringHash::StringHash<char [27]>(&v337, (int)"blocked_players_collection");
  v336 = 1203549156;
  v41 = operator new(4u);
  *v41 = v1;
  v333 = v41;
  v335 = sub_1220466;
  v334 = (void (*)(void))sub_1220482;
  v330 = operator new(1u);
  v332 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v331 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v337, &v336, (int)&v333, (int)&v330);
  if ( v331 )
    v331();
  if ( v334 )
    v334();
  StringHash::StringHash<char [29]>(&v329, (int)"uninvited_friends_collection");
  v328 = 1203549156;
  v42 = operator new(4u);
  *v42 = v1;
  v325 = v42;
  v327 = sub_12204B8;
  v326 = (void (*)(void))sub_12204D4;
  v322 = operator new(1u);
  v324 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v323 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v329, &v328, (int)&v325, (int)&v322);
  if ( v323 )
    v323();
  if ( v326 )
    v326();
  StringHash::StringHash<char [27]>(&v321, (int)"blocked_players_collection");
  v320 = 1203549156;
  v43 = operator new(4u);
  *v43 = v1;
  v317 = v43;
  v319 = sub_122050A;
  v318 = (void (*)(void))sub_1220526;
  v314 = operator new(1u);
  v316 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v315 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v321, &v320, (int)&v317, (int)&v314);
  if ( v315 )
    v315();
  if ( v318 )
    v318();
  StringHash::StringHash<char [29]>(&v313, (int)"uninvited_friends_collection");
  StringHash::StringHash<char [23]>(&v312, (int)"#invite_button_visible");
  v44 = operator new(4u);
  *v44 = v1;
  v309 = v44;
  v311 = sub_122055C;
  v310 = (void (*)(void))sub_122058A;
  v306 = operator new(1u);
  v308 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v307 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v313, &v312, (int)&v309, (int)&v306);
  if ( v307 )
    v307();
  if ( v310 )
    v310();
  v305 = -1682116023;
  v304 = 185536020;
  v45 = operator new(4u);
  *v45 = v1;
  v301 = v45;
  v303 = sub_12205C0;
  v302 = (void (*)(void))sub_12205D2;
  v298 = operator new(1u);
  v300 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v299 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v305, &v304, (int)&v301, (int)&v298);
  if ( v299 )
    v299();
  if ( v302 )
    v302();
  StringHash::StringHash<char [27]>(&v297, (int)"invited_friends_collection");
  v296 = 185536020;
  v46 = operator new(4u);
  *v46 = v1;
  v293 = v46;
  v295 = sub_1220608;
  v294 = (void (*)(void))sub_122061A;
  v290 = operator new(1u);
  v292 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v291 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v297, &v296, (int)&v293, (int)&v290);
  if ( v291 )
    v291();
  if ( v294 )
    v294();
  v289 = -1682116023;
  v288 = 261305282;
  v47 = operator new(4u);
  *v47 = v1;
  v285 = v47;
  v287 = sub_1220650;
  v286 = (void (*)(void))sub_1220662;
  v282 = operator new(1u);
  v284 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v283 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v289, &v288, (int)&v285, (int)&v282);
  if ( v283 )
    v283();
  if ( v286 )
    v286();
  StringHash::StringHash<char [27]>(&v281, (int)"invited_friends_collection");
  v280 = 261305282;
  v48 = operator new(4u);
  *v48 = v1;
  v277 = v48;
  v279 = sub_1220698;
  v278 = (void (*)(void))sub_12206AA;
  v275 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v276 = v49;
  ScreenController::bindBoolForCollection((int)v1, &v281, &v280, (int)&v277, (int)&v275);
  if ( (_DWORD)v276 )
    ((void (*)(void))v276)();
  if ( v278 )
    v278();
  v274 = -1682116023;
  v273 = 1624255399;
  v50 = operator new(4u);
  LODWORD(v51) = sub_122071E;
  *v50 = v1;
  HIDWORD(v51) = sub_12206E0;
  v271 = v50;
  v272 = v51;
  v269 = operator new(1u);
  LODWORD(v52) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v52) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v270 = v52;
  ScreenController::bindBoolForCollection((int)v1, &v274, &v273, (int)&v271, (int)&v269);
  if ( (_DWORD)v270 )
    ((void (*)(void))v270)();
  if ( (_DWORD)v272 )
    ((void (*)(void))v272)();
  StringHash::StringHash<char [27]>(&v268, (int)"invited_friends_collection");
  v267 = 1624255399;
  v53 = operator new(4u);
  LODWORD(v54) = sub_1220796;
  *v53 = v1;
  HIDWORD(v54) = sub_1220754;
  v265 = v53;
  v266 = v54;
  v263 = operator new(1u);
  LODWORD(v55) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v55) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v264 = v55;
  ScreenController::bindBoolForCollection((int)v1, &v268, &v267, (int)&v265, (int)&v263);
  if ( (_DWORD)v264 )
    ((void (*)(void))v264)();
  if ( (_DWORD)v266 )
    ((void (*)(void))v266)();
  StringHash::StringHash<char [29]>(&v262, (int)"uninvited_friends_collection");
  v261 = 1624255399;
  v56 = operator new(4u);
  LODWORD(v57) = sub_12207DC;
  *v56 = v1;
  HIDWORD(v57) = sub_12207CC;
  v259 = v56;
  v260 = v57;
  v257 = operator new(1u);
  LODWORD(v58) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v58) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v258 = v58;
  ScreenController::bindBoolForCollection((int)v1, &v262, &v261, (int)&v259, (int)&v257);
  if ( (_DWORD)v258 )
    ((void (*)(void))v258)();
  if ( (_DWORD)v260 )
    ((void (*)(void))v260)();
  v256 = -1682116023;
  v255 = -1193183717;
  v59 = operator new(4u);
  LODWORD(v60) = sub_1220850;
  *v59 = v1;
  HIDWORD(v60) = sub_1220812;
  v253 = v59;
  v254 = v60;
  v251 = operator new(1u);
  LODWORD(v61) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v61) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v252 = v61;
  ScreenController::bindBoolForCollection((int)v1, &v256, &v255, (int)&v253, (int)&v251);
  if ( (_DWORD)v252 )
    ((void (*)(void))v252)();
  if ( (_DWORD)v254 )
    ((void (*)(void))v254)();
  StringHash::StringHash<char [27]>(&v250, (int)"invited_friends_collection");
  v249 = -1193183717;
  v62 = operator new(4u);
  LODWORD(v63) = sub_12208CA;
  *v62 = v1;
  HIDWORD(v63) = sub_1220886;
  v247 = v62;
  v248 = v63;
  v245 = operator new(1u);
  LODWORD(v64) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v64) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v246 = v64;
  ScreenController::bindBoolForCollection((int)v1, &v250, &v249, (int)&v247, (int)&v245);
  if ( (_DWORD)v246 )
    ((void (*)(void))v246)();
  if ( (_DWORD)v248 )
    ((void (*)(void))v248)();
  StringHash::StringHash<char [29]>(&v244, (int)"uninvited_friends_collection");
  v243 = -1193183717;
  v65 = operator new(4u);
  LODWORD(v66) = sub_1220918;
  *v65 = v1;
  HIDWORD(v66) = sub_1220900;
  v241 = v65;
  v242 = v66;
  v239 = operator new(1u);
  LODWORD(v67) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v67) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v240 = v67;
  ScreenController::bindBoolForCollection((int)v1, &v244, &v243, (int)&v241, (int)&v239);
  if ( (_DWORD)v240 )
    ((void (*)(void))v240)();
  if ( (_DWORD)v242 )
    ((void (*)(void))v242)();
  StringHash::StringHash<char [29]>(&v238, (int)"uninvited_friends_collection");
  v237 = -357534751;
  v68 = operator new(4u);
  LODWORD(v69) = sub_122097A;
  *v68 = v1;
  HIDWORD(v69) = sub_122094E;
  v235 = v68;
  v236 = v69;
  v233 = operator new(1u);
  LODWORD(v70) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v70) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v234 = v70;
  ScreenController::bindBoolForCollection((int)v1, &v238, &v237, (int)&v235, (int)&v233);
  if ( (_DWORD)v234 )
    ((void (*)(void))v234)();
  if ( (_DWORD)v236 )
    ((void (*)(void))v236)();
  v232 = -1682116023;
  v231 = -1502412798;
  v71 = operator new(4u);
  LODWORD(v72) = sub_12209CA;
  *v71 = v1;
  HIDWORD(v72) = sub_12209B0;
  v229 = v71;
  v230 = v72;
  v227 = operator new(1u);
  LODWORD(v73) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v73) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v228 = v73;
  ScreenController::bindBoolForCollection((int)v1, &v232, &v231, (int)&v229, (int)&v227);
  if ( (_DWORD)v228 )
    ((void (*)(void))v228)();
  if ( (_DWORD)v230 )
    ((void (*)(void))v230)();
  StringHash::StringHash<char [27]>(&v226, (int)"invited_friends_collection");
  v225 = -1502412798;
  v74 = operator new(4u);
  LODWORD(v75) = sub_1220A18;
  *v74 = v1;
  HIDWORD(v75) = sub_1220A00;
  v223 = v74;
  v224 = v75;
  v221 = operator new(1u);
  LODWORD(v76) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v76) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v222 = v76;
  ScreenController::bindBoolForCollection((int)v1, &v226, &v225, (int)&v223, (int)&v221);
  if ( (_DWORD)v222 )
    ((void (*)(void))v222)();
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  v220 = -1682116023;
  v219 = 1126334437;
  v77 = operator new(4u);
  LODWORD(v78) = sub_1220A6A;
  *v77 = v1;
  HIDWORD(v78) = sub_1220A4E;
  v217 = v77;
  v218 = v78;
  v215 = operator new(1u);
  LODWORD(v79) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v79) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v216 = v79;
  ScreenController::bindStringForCollection((int)v1, &v220, &v219, (int)&v217, (int)&v215);
  if ( (_DWORD)v216 )
    ((void (*)(void))v216)();
  if ( (_DWORD)v218 )
    ((void (*)(void))v218)();
  StringHash::StringHash<char [27]>(&v214, (int)"invited_friends_collection");
  v213 = 1126334437;
  v80 = operator new(4u);
  LODWORD(v81) = sub_1220ABC;
  *v80 = v1;
  HIDWORD(v81) = sub_1220AA0;
  v211 = v80;
  v212 = v81;
  v209 = operator new(1u);
  LODWORD(v82) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v82) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v210 = v82;
  ScreenController::bindStringForCollection((int)v1, &v214, &v213, (int)&v211, (int)&v209);
  if ( (_DWORD)v210 )
    ((void (*)(void))v210)();
  if ( (_DWORD)v212 )
    ((void (*)(void))v212)();
  StringHash::StringHash<char [29]>(&v208, (int)"uninvited_friends_collection");
  v207 = 1126334437;
  v83 = operator new(4u);
  LODWORD(v84) = sub_1220B0E;
  *v83 = v1;
  HIDWORD(v84) = sub_1220AF2;
  v205 = v83;
  v206 = v84;
  v203 = operator new(1u);
  LODWORD(v85) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v85) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v204 = v85;
  ScreenController::bindStringForCollection((int)v1, &v208, &v207, (int)&v205, (int)&v203);
  if ( (_DWORD)v204 )
    ((void (*)(void))v204)();
  if ( (_DWORD)v206 )
    ((void (*)(void))v206)();
  StringHash::StringHash<char [27]>(&v202, (int)"blocked_players_collection");
  v201 = 1126334437;
  v86 = operator new(4u);
  LODWORD(v87) = sub_1220B60;
  *v86 = v1;
  HIDWORD(v87) = sub_1220B44;
  v199 = v86;
  v200 = v87;
  v197 = operator new(1u);
  LODWORD(v88) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v88) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v198 = v88;
  ScreenController::bindStringForCollection((int)v1, &v202, &v201, (int)&v199, (int)&v197);
  if ( (_DWORD)v198 )
    ((void (*)(void))v198)();
  if ( (_DWORD)v200 )
    ((void (*)(void))v200)();
  v196 = -1682116023;
  v195 = 1278171020;
  v89 = operator new(4u);
  LODWORD(v90) = sub_1220BC0;
  *v89 = v1;
  HIDWORD(v90) = sub_1220B96;
  v193 = v89;
  v194 = v90;
  v191 = operator new(1u);
  LODWORD(v91) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v91) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v192 = v91;
  ScreenController::bindStringForCollection((int)v1, &v196, &v195, (int)&v193, (int)&v191);
  if ( (_DWORD)v192 )
    ((void (*)(void))v192)();
  if ( (_DWORD)v194 )
    ((void (*)(void))v194)();
  StringHash::StringHash<char [27]>(&v190, (int)"invited_friends_collection");
  v189 = 1278171020;
  v92 = operator new(4u);
  LODWORD(v93) = sub_1220C20;
  *v92 = v1;
  HIDWORD(v93) = sub_1220BF6;
  v187 = v92;
  v188 = v93;
  v185 = operator new(1u);
  LODWORD(v94) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v94) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v186 = v94;
  ScreenController::bindStringForCollection((int)v1, &v190, &v189, (int)&v187, (int)&v185);
  if ( (_DWORD)v186 )
    ((void (*)(void))v186)();
  if ( (_DWORD)v188 )
    ((void (*)(void))v188)();
  StringHash::StringHash<char [29]>(&v184, (int)"uninvited_friends_collection");
  v183 = 1278171020;
  v95 = operator new(4u);
  LODWORD(v96) = sub_1220C80;
  *v95 = v1;
  HIDWORD(v96) = sub_1220C56;
  v181 = v95;
  v182 = v96;
  v179 = operator new(1u);
  LODWORD(v97) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v97) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v180 = v97;
  ScreenController::bindStringForCollection((int)v1, &v184, &v183, (int)&v181, (int)&v179);
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  if ( (_DWORD)v182 )
    ((void (*)(void))v182)();
  StringHash::StringHash<char [27]>(&v178, (int)"blocked_players_collection");
  v177 = 1278171020;
  v98 = operator new(4u);
  LODWORD(v99) = sub_1220CE0;
  *v98 = v1;
  HIDWORD(v99) = sub_1220CB6;
  v175 = v98;
  v176 = v99;
  v173 = operator new(1u);
  LODWORD(v100) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v100) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v174 = v100;
  ScreenController::bindStringForCollection((int)v1, &v178, &v177, (int)&v175, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  if ( (_DWORD)v176 )
    ((void (*)(void))v176)();
  v172 = -1682116023;
  v171 = 266493370;
  v101 = operator new(4u);
  LODWORD(v102) = sub_1220D28;
  *v101 = v1;
  HIDWORD(v102) = sub_1220D16;
  v169 = v101;
  v170 = v102;
  v167 = operator new(1u);
  LODWORD(v103) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v103) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v168 = v103;
  ScreenController::bindBoolForCollection((int)v1, &v172, &v171, (int)&v169, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  if ( (_DWORD)v170 )
    ((void (*)(void))v170)();
  StringHash::StringHash<char [27]>(&v166, (int)"invited_friends_collection");
  v165 = 266493370;
  v104 = operator new(4u);
  LODWORD(v105) = sub_1220D70;
  *v104 = v1;
  HIDWORD(v105) = sub_1220D5E;
  v163 = v104;
  v164 = v105;
  v161 = operator new(1u);
  LODWORD(v106) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v106) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v162 = v106;
  ScreenController::bindBoolForCollection((int)v1, &v166, &v165, (int)&v163, (int)&v161);
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  v160 = -1682116023;
  StringHash::StringHash<char [23]>(&v159, (int)"#player_status_visible");
  v107 = operator new(4u);
  LODWORD(v108) = sub_1220DD6;
  *v107 = v1;
  HIDWORD(v108) = sub_1220DA6;
  v157 = v107;
  v158 = v108;
  v155 = operator new(1u);
  LODWORD(v109) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v109) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v156 = v109;
  ScreenController::bindBoolForCollection((int)v1, &v160, &v159, (int)&v157, (int)&v155);
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  if ( (_DWORD)v158 )
    ((void (*)(void))v158)();
  StringHash::StringHash<char [27]>(&v154, (int)"invited_friends_collection");
  StringHash::StringHash<char [23]>(&v153, (int)"#player_status_visible");
  v110 = operator new(4u);
  LODWORD(v111) = sub_1220E3C;
  *v110 = v1;
  HIDWORD(v111) = sub_1220E0C;
  v151 = v110;
  v152 = v111;
  v149 = operator new(1u);
  LODWORD(v112) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v112) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v150 = v112;
  ScreenController::bindBoolForCollection((int)v1, &v154, &v153, (int)&v151, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  if ( (_DWORD)v152 )
    ((void (*)(void))v152)();
  v148 = -1682116023;
  v147 = -1857231822;
  v113 = operator new(4u);
  LODWORD(v114) = sub_1220EA2;
  *v113 = v1;
  HIDWORD(v114) = sub_1220E72;
  v145 = v113;
  v146 = v114;
  v143 = operator new(1u);
  LODWORD(v115) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v115) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v144 = v115;
  ScreenController::bindBoolForCollection((int)v1, &v148, &v147, (int)&v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  StringHash::StringHash<char [27]>(&v142, (int)"invited_friends_collection");
  v141 = -1857231822;
  v116 = operator new(4u);
  LODWORD(v117) = sub_1220F0A;
  *v116 = v1;
  HIDWORD(v117) = sub_1220ED8;
  v139 = v116;
  v140 = v117;
  v137 = operator new(1u);
  LODWORD(v118) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v118) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v138 = v118;
  ScreenController::bindBoolForCollection((int)v1, &v142, &v141, (int)&v139, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  v136 = -1682116023;
  v135 = -1106087054;
  v119 = operator new(4u);
  LODWORD(v120) = sub_1220F5C;
  *v119 = v1;
  HIDWORD(v120) = sub_1220F40;
  v133 = v119;
  v134 = v120;
  v131 = operator new(1u);
  LODWORD(v121) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v121) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v132 = v121;
  ScreenController::bindBoolForCollection((int)v1, &v136, &v135, (int)&v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  StringHash::StringHash<char [27]>(&v130, (int)"invited_friends_collection");
  v129 = -1106087054;
  v122 = operator new(4u);
  LODWORD(v123) = sub_1220FAC;
  *v122 = v1;
  HIDWORD(v123) = sub_1220F92;
  v127 = v122;
  v128 = v123;
  v125 = operator new(1u);
  LODWORD(v124) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v124) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v126 = v124;
  ScreenController::bindBoolForCollection((int)v1, &v130, &v129, (int)&v127, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
}


void __fastcall RealmsWhitelistScreenController::_initializeInviteLink(int a1, int a2)
{
  RealmsWhitelistScreenController::_initializeInviteLink(a1, a2);
}


RealmsWhitelistScreenController *__fastcall RealmsWhitelistScreenController::~RealmsWhitelistScreenController(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r11@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r4@2
  void *v5; // r5@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int *v8; // r0@12
  void *v9; // r4@17
  void *v10; // r5@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  int *v13; // r0@27
  void *v14; // r4@32
  void *v15; // r5@32
  unsigned int *v16; // r2@34
  signed int v17; // r1@36
  int *v18; // r0@42
  void *v19; // r4@47
  void *v20; // r5@47
  unsigned int *v21; // r2@49
  signed int v22; // r1@51
  int *v23; // r0@57
  void *v24; // r4@62
  void *v25; // r5@62
  unsigned int *v26; // r2@64
  signed int v27; // r1@66
  int *v28; // r0@72
  void *v29; // r4@77
  void *v30; // r5@77
  unsigned int *v31; // r2@79
  signed int v32; // r1@81
  int *v33; // r0@87
  void *v34; // r4@92
  void *v35; // r5@92
  unsigned int *v36; // r2@94
  signed int v37; // r1@96
  int *v38; // r0@102
  void *v39; // r4@107
  void *v40; // r5@107
  unsigned int *v41; // r2@109
  signed int v42; // r1@111
  int *v43; // r0@117
  void *v44; // r4@122
  void *v45; // r5@122
  unsigned int *v46; // r2@124
  signed int v47; // r1@126
  int *v48; // r0@132
  void *v49; // r4@137
  void *v50; // r5@137
  unsigned int *v51; // r2@139
  signed int v52; // r1@141
  int *v53; // r0@147
  void *v54; // r4@152
  void *v55; // r5@152
  unsigned int *v56; // r2@154
  signed int v57; // r1@156
  int *v58; // r0@162
  void *v59; // r4@167
  void *v60; // r5@167
  unsigned int *v61; // r2@169
  signed int v62; // r1@171
  int *v63; // r0@177
  _DWORD *v64; // r7@182
  unsigned int *v65; // r2@184
  signed int v66; // r1@186
  _DWORD *v67; // r6@192
  Realms::InvitedPlayer *v68; // r0@192
  int v69; // r1@192
  void *v70; // r0@192
  char *v71; // r0@194
  int v72; // r1@197
  void *v73; // r0@197
  int v74; // r1@198
  void *v75; // r0@198
  int v76; // r1@199
  void *v77; // r0@199
  int v78; // r1@200
  void *v79; // r0@200
  int v80; // r0@201
  void *v81; // r0@203
  int v82; // r1@205
  void *v83; // r0@205
  int v84; // r1@206
  void *v85; // r0@206
  unsigned int *v87; // r2@208
  signed int v88; // r1@210
  unsigned int *v89; // r2@212
  signed int v90; // r1@214
  unsigned int *v91; // r2@216
  signed int v92; // r1@218
  unsigned int *v93; // r2@220
  signed int v94; // r1@222
  unsigned int *v95; // r2@224
  signed int v96; // r1@226
  unsigned int *v97; // r2@228
  signed int v98; // r1@230
  unsigned int *v99; // r2@232
  signed int v100; // r1@234

  v1 = this;
  *(_DWORD *)this = &off_26E3144;
  MinecraftScreenModel::abortAllRealmsRequests(*((MinecraftScreenModel **)this + 106));
  v2 = *((_DWORD *)v1 + 203);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v87 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
    }
    else
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(*((_QWORD *)v1 + 100) >> 32);
  v5 = (void *)*((_QWORD *)v1 + 100);
  if ( v5 != v4 )
    do
      v8 = (int *)(*(_DWORD *)v5 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
      v5 = (char *)v5 + 4;
    while ( v5 != v4 );
    v5 = (void *)*((_DWORD *)v1 + 200);
  if ( v5 )
    operator delete(v5);
  v9 = (void *)(*(_QWORD *)((char *)v1 + 788) >> 32);
  v10 = (void *)*(_QWORD *)((char *)v1 + 788);
  if ( v10 != v9 )
      v13 = (int *)(*(_DWORD *)v10 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v10 = (char *)v10 + 4;
    while ( v10 != v9 );
    v10 = (void *)*((_DWORD *)v1 + 197);
  if ( v10 )
    operator delete(v10);
  v14 = (void *)(*((_QWORD *)v1 + 97) >> 32);
  v15 = (void *)*((_QWORD *)v1 + 97);
  if ( v15 != v14 )
      v18 = (int *)(*(_DWORD *)v15 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*(_DWORD *)v15 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v15 = (char *)v15 + 4;
    while ( v15 != v14 );
    v15 = (void *)*((_DWORD *)v1 + 194);
  if ( v15 )
    operator delete(v15);
  v19 = (void *)(*(_QWORD *)((char *)v1 + 764) >> 32);
  v20 = (void *)*(_QWORD *)((char *)v1 + 764);
  if ( v20 != v19 )
      v23 = (int *)(*(_DWORD *)v20 - 12);
      if ( v23 != &dword_28898C0 )
        v21 = (unsigned int *)(*(_DWORD *)v20 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v20 = (char *)v20 + 4;
    while ( v20 != v19 );
    v20 = (void *)*((_DWORD *)v1 + 191);
  if ( v20 )
    operator delete(v20);
  v24 = (void *)(*((_QWORD *)v1 + 94) >> 32);
  v25 = (void *)*((_QWORD *)v1 + 94);
  if ( v25 != v24 )
      v28 = (int *)(*(_DWORD *)v25 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v25 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v25 = (char *)v25 + 4;
    while ( v25 != v24 );
    v25 = (void *)*((_DWORD *)v1 + 188);
  if ( v25 )
    operator delete(v25);
  v29 = (void *)(*(_QWORD *)((char *)v1 + 740) >> 32);
  v30 = (void *)*(_QWORD *)((char *)v1 + 740);
  if ( v30 != v29 )
      v33 = (int *)(*(_DWORD *)v30 - 12);
      if ( v33 != &dword_28898C0 )
        v31 = (unsigned int *)(*(_DWORD *)v30 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v30 = (char *)v30 + 4;
    while ( v30 != v29 );
    v30 = (void *)*((_DWORD *)v1 + 185);
  if ( v30 )
    operator delete(v30);
  v34 = (void *)(*((_QWORD *)v1 + 91) >> 32);
  v35 = (void *)*((_QWORD *)v1 + 91);
  if ( v35 != v34 )
      v38 = (int *)(*(_DWORD *)v35 - 12);
      if ( v38 != &dword_28898C0 )
        v36 = (unsigned int *)(*(_DWORD *)v35 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v35 = (char *)v35 + 4;
    while ( v35 != v34 );
    v35 = (void *)*((_DWORD *)v1 + 182);
  if ( v35 )
    operator delete(v35);
  v39 = (void *)(*(_QWORD *)((char *)v1 + 716) >> 32);
  v40 = (void *)*(_QWORD *)((char *)v1 + 716);
  if ( v40 != v39 )
      v43 = (int *)(*(_DWORD *)v40 - 12);
      if ( v43 != &dword_28898C0 )
        v41 = (unsigned int *)(*(_DWORD *)v40 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v40 = (char *)v40 + 4;
    while ( v40 != v39 );
    v40 = (void *)*((_DWORD *)v1 + 179);
  if ( v40 )
    operator delete(v40);
  v44 = (void *)(*((_QWORD *)v1 + 88) >> 32);
  v45 = (void *)*((_QWORD *)v1 + 88);
  if ( v45 != v44 )
      v48 = (int *)(*(_DWORD *)v45 - 12);
      if ( v48 != &dword_28898C0 )
        v46 = (unsigned int *)(*(_DWORD *)v45 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v48);
      v45 = (char *)v45 + 4;
    while ( v45 != v44 );
    v45 = (void *)*((_DWORD *)v1 + 176);
  if ( v45 )
    operator delete(v45);
  v49 = (void *)(*(_QWORD *)((char *)v1 + 692) >> 32);
  v50 = (void *)*(_QWORD *)((char *)v1 + 692);
  if ( v50 != v49 )
      v53 = (int *)(*(_DWORD *)v50 - 12);
      if ( v53 != &dword_28898C0 )
        v51 = (unsigned int *)(*(_DWORD *)v50 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      v50 = (char *)v50 + 4;
    while ( v50 != v49 );
    v50 = (void *)*((_DWORD *)v1 + 173);
  if ( v50 )
    operator delete(v50);
  v54 = (void *)(*((_QWORD *)v1 + 85) >> 32);
  v55 = (void *)*((_QWORD *)v1 + 85);
  if ( v55 != v54 )
      v58 = (int *)(*(_DWORD *)v55 - 12);
      if ( v58 != &dword_28898C0 )
        v56 = (unsigned int *)(*(_DWORD *)v55 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v58);
      v55 = (char *)v55 + 4;
    while ( v55 != v54 );
    v55 = (void *)*((_DWORD *)v1 + 170);
  if ( v55 )
    operator delete(v55);
  v59 = (void *)(*(_QWORD *)((char *)v1 + 668) >> 32);
  v60 = (void *)*(_QWORD *)((char *)v1 + 668);
  if ( v60 != v59 )
      v63 = (int *)(*(_DWORD *)v60 - 12);
      if ( v63 != &dword_28898C0 )
        v61 = (unsigned int *)(*(_DWORD *)v60 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v63);
      v60 = (char *)v60 + 4;
    while ( v60 != v59 );
    v60 = (void *)*((_DWORD *)v1 + 167);
  if ( v60 )
    operator delete(v60);
  v64 = (_DWORD *)*((_DWORD *)v1 + 162);
  while ( v64 )
    v67 = v64;
    v68 = (Realms::InvitedPlayer *)(v64 + 2);
    v64 = (_DWORD *)*v64;
    Realms::InvitedPlayer::~InvitedPlayer(v68);
    v69 = v67[1];
    v70 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v69 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
      else
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v70);
    operator delete(v67);
  _aeabi_memclr4(*((_QWORD *)v1 + 80), 4 * (*((_QWORD *)v1 + 80) >> 32));
  *((_DWORD *)v1 + 162) = 0;
  *((_DWORD *)v1 + 163) = 0;
  v71 = (char *)*((_DWORD *)v1 + 160);
  if ( v71 && (char *)v1 + 664 != v71 )
    operator delete(v71);
  v72 = *((_DWORD *)v1 + 159);
  v73 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v72 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = *((_DWORD *)v1 + 158);
  v75 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v74 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  v76 = *((_DWORD *)v1 + 157);
  v77 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v76 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = *((_DWORD *)v1 + 156);
  v79 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v78 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  v80 = *((_DWORD *)v1 + 151);
  if ( v80 )
    (*(void (**)(void))(*(_DWORD *)v80 + 4))();
  *((_DWORD *)v1 + 151) = 0;
  v81 = (void *)*((_DWORD *)v1 + 150);
  if ( v81 )
    operator delete(v81);
  *((_DWORD *)v1 + 150) = 0;
  Realms::World::~World((RealmsWhitelistScreenController *)((char *)v1 + 488));
  v82 = *((_DWORD *)v1 + 120);
  v83 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v82 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = *((_DWORD *)v1 + 119);
  v85 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v84 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  Realms::InvitedPlayer::~InvitedPlayer((RealmsWhitelistScreenController *)((char *)v1 + 436));
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void __fastcall RealmsWhitelistScreenController::~RealmsWhitelistScreenController(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController::~RealmsWhitelistScreenController(this);
}


int __fastcall RealmsWhitelistScreenController::_handlePlayerInvite(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r12@2
  int result; // r0@5
  int v5; // [sp+0h] [bp-20h]@2
  void (*v6)(void); // [sp+8h] [bp-18h]@2
  __int64 v7; // [sp+10h] [bp-10h]@2

  v2 = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    *(_DWORD *)(a2 + 24) = 0;
    v3 = *(_DWORD *)(a1 + 380);
    v7 = *(_QWORD *)(a1 + 488);
    v6 = 0;
    MinecraftScreenModel::removeFromRealmsBlocklist(v3, &v7, (const void **)(a2 + 4), (int)&v5);
    if ( v6 )
      v6();
  }
  else
    *(_DWORD *)(a2 + 24) = 1;
  result = *(_BYTE *)(v2 + 34) ^ 1;
  *(_BYTE *)(v2 + 34) = result;
  return result;
}


void __fastcall RealmsWhitelistScreenController::_sortListModel(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@2 OVERLAPPED
  int *v4; // r6@2 OVERLAPPED
  int *v5; // r7@4
  int v6; // r6@5
  bool v7; // zf@6
  int *v8; // r7@11
  int v9; // r6@12
  int *v10; // r7@18
  int v11; // r6@19
  int *v12; // r7@25
  int v13; // r6@26

  v2 = a1;
  switch ( a2 )
  {
    case 0:
      *(_QWORD *)&v3 = *(_QWORD *)(a1 + 680);
      if ( (int *)v3 != v4 )
      {
        sub_1224AB8(v3, v4, 2 * (31 - __clz(((signed int)v4 - v3) >> 2)), a1);
        if ( (signed int)v4 - v3 < 65 )
          goto LABEL_30;
        v5 = (int *)(v3 + 64);
        sub_1225270(v3, (int **)(v3 + 64), v2);
        if ( (int *)(v3 + 64) != v4 )
        {
          v6 = (int)(v4 - 16);
          do
          {
            sub_12253A4(v5, v2);
            v5 = (int *)(v3 + 68);
            v7 = v6 == v3 + 4;
            v3 += 4;
          }
          while ( !v7 );
        }
      }
      break;
    case 1:
      *(_QWORD *)&v3 = *(_QWORD *)(a1 + 716);
        v8 = (int *)(v3 + 64);
          v9 = (int)(v4 - 16);
            sub_12253A4(v8, v2);
            v8 = (int *)(v3 + 68);
            v7 = v9 == v3 + 4;
    case 2:
      *(_QWORD *)&v3 = *(_QWORD *)(a1 + 752);
        v10 = (int *)(v3 + 64);
          v11 = (int)(v4 - 16);
            sub_12253A4(v10, v2);
            v10 = (int *)(v3 + 68);
            v7 = v11 == v3 + 4;
    case 3:
      *(_QWORD *)&v3 = *(_QWORD *)(a1 + 788);
LABEL_30:
          sub_1225270(v3, (int **)v4, v2);
        else
          v12 = (int *)(v3 + 64);
          sub_1225270(v3, (int **)(v3 + 64), v2);
          if ( (int *)(v3 + 64) != v4 )
            v13 = (int)(v4 - 16);
            do
            {
              sub_12253A4(v12, v2);
              v12 = (int *)(v3 + 68);
              v7 = v13 == v3 + 4;
              v3 += 4;
            }
            while ( !v7 );
    default:
      return;
  }
}


int __fastcall RealmsWhitelistScreenController::_getRealmPlayerAtIndex(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r2@2
  int v5; // r2@3
  int v6; // r2@4
  int v7; // r2@5
  unsigned int v8; // r10@7
  __int64 v9; // kr00_8@7
  unsigned int v10; // r4@7
  int v11; // r7@7
  int v12; // r8@8
  _DWORD *v13; // r9@8
  int v14; // r5@8
  _DWORD *v15; // r1@10
  size_t v16; // r2@10
  int v17; // r6@12
  int v18; // r0@14
  int v19; // r4@16
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  int v23; // [sp+4h] [bp-34h]@8
  void *s1; // [sp+8h] [bp-30h]@2

  v3 = a1;
  switch ( a3 )
  {
    case 0:
      v4 = *(_DWORD *)(a1 + 616);
      s1 = &unk_28898CC;
      EntityInteraction::setInteractText((int *)&s1, (int *)(*(_DWORD *)(a1 + 668) + 4 * (a2 + 10 * v4)));
      break;
    case 2:
      v5 = *(_DWORD *)(a1 + 608);
      EntityInteraction::setInteractText((int *)&s1, (int *)(*(_DWORD *)(a1 + 740) + 4 * (a2 + 10 * v5)));
    case 3:
      v6 = *(_DWORD *)(a1 + 620);
      EntityInteraction::setInteractText((int *)&s1, (int *)(*(_DWORD *)(a1 + 776) + 4 * (a2 + 10 * v6)));
    case 1:
      v7 = *(_DWORD *)(a1 + 612);
      EntityInteraction::setInteractText((int *)&s1, (int *)(*(_DWORD *)(a1 + 704) + 4 * (a2 + 10 * v7)));
    default:
  }
  v8 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v9 = *(_QWORD *)(v3 + 640);
  v10 = v8 % (unsigned int)(*(_QWORD *)(v3 + 640) >> 32);
  v11 = *(_DWORD *)(v9 + 4 * v10);
  if ( v11 )
    v12 = *(_DWORD *)v11;
    v13 = s1;
    v23 = v3;
    v14 = *(_DWORD *)(*(_DWORD *)v11 + 44);
    while ( 1 )
    {
      if ( v14 == v8 )
      {
        v15 = *(_DWORD **)(v12 + 4);
        v16 = *(v13 - 3);
        if ( v16 == *(v15 - 3) && !memcmp(v13, v15, v16) )
          break;
      }
      v17 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
        v14 = *(_DWORD *)(v17 + 44);
        v11 = v12;
        v12 = *(_DWORD *)v12;
        if ( *(_DWORD *)(v17 + 44) % HIDWORD(v9) == v10 )
          continue;
      v18 = 0;
      v3 = v23;
      goto LABEL_16;
    }
    v3 = v23;
    if ( v11 )
      v18 = *(_DWORD *)v11;
    else
  else
    v18 = 0;
LABEL_16:
  v19 = v3 + 436;
  if ( v18 )
    v19 = v18 + 8;
  if ( v13 - 3 != &dword_28898C0 )
    v21 = v13 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13 - 3);
  return v19;
}


int __fastcall RealmsWhitelistScreenController::_getGridSize(int result, int a2, int a3)
{
  int v3; // r1@2

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  switch ( a3 )
  {
    case 0:
      v3 = ((signed int)((*(_QWORD *)(a2 + 668) >> 32) - *(_QWORD *)(a2 + 668)) >> 2) + -10 * *(_DWORD *)(a2 + 616);
      if ( v3 <= 10 )
        goto LABEL_10;
      v3 = 10;
      goto LABEL_11;
    case 2:
      v3 = ((signed int)((*(_QWORD *)(a2 + 740) >> 32) - *(_QWORD *)(a2 + 740)) >> 2) + -10 * *(_DWORD *)(a2 + 608);
    case 3:
      v3 = ((signed int)((*(_QWORD *)(a2 + 776) >> 32) - *(_QWORD *)(a2 + 776)) >> 2) + -10 * *(_DWORD *)(a2 + 620);
    case 1:
      v3 = ((signed int)((*(_QWORD *)(a2 + 704) >> 32) - *(_QWORD *)(a2 + 704)) >> 2) + -10 * *(_DWORD *)(a2 + 612);
      {
LABEL_10:
        if ( v3 < 1 )
          return result;
      }
      else
        v3 = 10;
LABEL_11:
      *(_DWORD *)result = 1;
      *(_DWORD *)(result + 4) = v3;
      return result;
    default:
  }
}


void __fastcall RealmsWhitelistScreenController::_clearFromFriendLists(int a1, int *a2)
{
  RealmsWhitelistScreenController::_clearFromFriendLists(a1, a2);
}


void __fastcall RealmsWhitelistScreenController::_refreshPlayerList(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController::_refreshPlayerList(this);
}


int __fastcall RealmsWhitelistScreenController::_updateAllListModels(RealmsWhitelistScreenController *this, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  RealmsWhitelistScreenController *v6; // r5@1
  int v7; // ST00_4@1
  int v8; // ST00_4@1
  int v10; // [sp+0h] [bp-10h]@0

  v5 = a2;
  v6 = this;
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)this, (const void **)this + 158, 0, a2, v10);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v6, (const void **)v6 + 157, 1, v5, v7);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v6, (const void **)v6 + 156, 2, v5, v8);
  return j_j_j__ZN31RealmsWhitelistScreenController22_updatePlayerlistModelERKSsNS_15RealmPlayerListEb(
           (int)v6,
           (const void **)v6 + 159,
           3,
           v5,
           a5);
}


int __fastcall RealmsWhitelistScreenController::RealmsWhitelistScreenController(int a1, int a2, const Realms::World *a3, _BYTE *a4)
{
  int v4; // r4@1
  _BYTE *v5; // r9@1
  int v6; // r0@1
  const Realms::World *v7; // r8@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  double v15; // r0@21
  unsigned int v16; // r0@21
  int v17; // r7@23
  void *v18; // r5@23
  void *v19; // r5@24
  void *v20; // r0@24
  char v22; // [sp+18h] [bp-40h]@26
  int v23; // [sp+24h] [bp-34h]@1
  int v24; // [sp+28h] [bp-30h]@1

  v4 = a1;
  v23 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v24 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
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
  MainMenuScreenController::MainMenuScreenController(v4, (int)&v23);
  v10 = v24;
  if ( v24 )
    v11 = (unsigned int *)(v24 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v4 = &off_26E3144;
  *(_BYTE *)(v4 + 432) = 0;
  _aeabi_memclr4(v4 + 436, 36);
  *(_DWORD *)(v4 + 436) = &unk_28898CC;
  *(_DWORD *)(v4 + 440) = &unk_28898CC;
  sub_21E94B4((void **)(v4 + 444), (const char *)&unk_257BC67);
  *(_DWORD *)(v4 + 448) = &unk_28898CC;
  *(_DWORD *)(v4 + 452) = 0;
  *(_DWORD *)(v4 + 468) = 0;
  *(_WORD *)(v4 + 473) = 256;
  *(_BYTE *)(v4 + 475) = *v5;
  *(_DWORD *)(v4 + 476) = &unk_28898CC;
  *(_DWORD *)(v4 + 480) = &unk_28898CC;
  *(_WORD *)(v4 + 484) = 0;
  *(_BYTE *)(v4 + 486) = 0;
  Realms::World::World((Realms::World *)(v4 + 488), v7);
  *(_BYTE *)(v4 + 560) = 0;
  *(_DWORD *)(v4 + 568) = 0;
  *(_DWORD *)(v4 + 572) = 0;
  *(_BYTE *)(v4 + 590) = 0;
  *(_WORD *)(v4 + 588) = 0;
  *(_DWORD *)(v4 + 584) = 0;
  *(_BYTE *)(v4 + 591) = 1;
  *(_DWORD *)(v4 + 592) = 0;
  *(_DWORD *)(v4 + 596) = 0;
  *(_DWORD *)(v4 + 600) = 0;
  *(_DWORD *)(v4 + 604) = 0;
  *(_DWORD *)(v4 + 608) = 0;
  *(_DWORD *)(v4 + 612) = 0;
  *(_DWORD *)(v4 + 616) = 0;
  *(_DWORD *)(v4 + 620) = 0;
  sub_21E8AF4((int *)(v4 + 624), (int *)&Util::EMPTY_STRING);
  sub_21E8AF4((int *)(v4 + 628), (int *)&Util::EMPTY_STRING);
  sub_21E8AF4((int *)(v4 + 632), (int *)&Util::EMPTY_STRING);
  sub_21E8AF4((int *)(v4 + 636), (int *)&Util::EMPTY_STRING);
  *(_DWORD *)(v4 + 648) = 0;
  *(_DWORD *)(v4 + 652) = 0;
  *(_DWORD *)(v4 + 656) = 1065353216;
  *(_DWORD *)(v4 + 660) = 0;
  LODWORD(v15) = v4 + 656;
  v16 = sub_21E6254(v15);
  *(_DWORD *)(v4 + 644) = v16;
  if ( v16 == 1 )
    v18 = (void *)(v4 + 664);
    *(_DWORD *)(v4 + 664) = 0;
  else
    if ( v16 >= 0x40000000 )
      sub_21E57F4();
    v17 = 4 * v16;
    v18 = operator new(4 * v16);
    _aeabi_memclr4(v18, v17);
  *(_DWORD *)(v4 + 640) = v18;
  _aeabi_memclr4(v4 + 668, 144);
  sub_21E8AF4((int *)(v4 + 812), (int *)&Util::EMPTY_STRING);
  MinecraftScreenController::_setExitBehavior(v4, 3);
  *(_BYTE *)(v4 + 589) = *(_BYTE *)(v4 + 528);
  v19 = operator new(0x28u);
  _aeabi_memclr8(v19, 40);
  v20 = *(void **)(v4 + 600);
  *(_DWORD *)(v4 + 600) = v19;
  if ( v20 )
    operator delete(v20);
  *(_DWORD *)(v4 + 576) = 3;
  *(_DWORD *)(v4 + 580) = 0;
  sub_21E034C(&v22);
  *(_QWORD *)(v4 + 568) = *(_QWORD *)&v22;
  RealmsWhitelistScreenController::_registerEventHandlers((RealmsWhitelistScreenController *)v4);
  RealmsWhitelistScreenController::_registerBindings((RealmsWhitelistScreenController *)v4);
  return v4;
}


void __fastcall RealmsWhitelistScreenController::_initializePlayerList(int a1, int a2, int a3, Realms::InvitedPlayer *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  RealmsWhitelistScreenController::_initializePlayerList(
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


void __fastcall RealmsWhitelistScreenController::~RealmsWhitelistScreenController(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r0@1

  v1 = RealmsWhitelistScreenController::~RealmsWhitelistScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall RealmsWhitelistScreenController::_handleChangePageButtonClick(int result, int a2, int a3)
{
  unsigned __int8 v3; // cf@0
  char v4; // zf@0
  int v5; // r1@3
  unsigned int v6; // r3@3
  signed int v7; // r5@3
  int v8; // r1@10
  unsigned int v9; // r2@10
  signed __int64 v10; // kr08_8@10
  signed int v11; // r4@10
  int v12; // r1@17
  unsigned int v13; // r3@17
  signed int v14; // r5@17
  int v15; // r1@24
  unsigned int v16; // r3@24
  signed int v17; // r5@24

  if ( !(!v4 & v3) )
  {
    switch ( a3 )
    {
      case 0:
        v5 = a2 + *(_DWORD *)(result + 616);
        v6 = (signed int)((*(_QWORD *)(result + 668) >> 32) - *(_QWORD *)(result + 668)) >> 2;
        v7 = v6 / 0xA;
        if ( !(v6 % 0xA) )
          v7 = v6 / 0xA - 1;
        if ( v5 < v7 )
          v7 = v5;
        if ( v7 <= 0 )
          v7 = 0;
        *(_DWORD *)(result + 616) = v7;
        break;
      case 2:
        v8 = a2 + *(_DWORD *)(result + 608);
        v9 = (signed int)((*(_QWORD *)(result + 740) >> 32) - *(_QWORD *)(result + 740)) >> 2;
        v10 = 3435973837LL * v9;
        v11 = v9 / 0xA;
        if ( !(v9 % 0xA) )
          v11 = (HIDWORD(v10) >> 3) - 1;
        if ( v8 < v11 )
          v11 = v8;
        if ( v11 <= 0 )
          v11 = 0;
        *(_DWORD *)(result + 608) = v11;
      case 3:
        v12 = a2 + *(_DWORD *)(result + 620);
        v13 = (signed int)((*(_QWORD *)(result + 776) >> 32) - *(_QWORD *)(result + 776)) >> 2;
        v14 = v13 / 0xA;
        if ( !(v13 % 0xA) )
          v14 = v13 / 0xA - 1;
        if ( v12 < v14 )
          v14 = v12;
        if ( v14 <= 0 )
          v14 = 0;
        *(_DWORD *)(result + 620) = v14;
      case 1:
        v15 = a2 + *(_DWORD *)(result + 612);
        v16 = (signed int)((*(_QWORD *)(result + 704) >> 32) - *(_QWORD *)(result + 704)) >> 2;
        v17 = v16 / 0xA;
        if ( !(v16 % 0xA) )
          v17 = v16 / 0xA - 1;
        if ( v15 < v17 )
          v17 = v15;
        if ( v17 <= 0 )
          v17 = 0;
        *(_DWORD *)(result + 612) = v17;
    }
  }
  return result;
}


void __fastcall RealmsWhitelistScreenController::_registerEventHandlers(RealmsWhitelistScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  void *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  void *v45; // r0@33
  int v46; // r5@34
  _DWORD *v47; // r0@34
  __int64 v48; // r1@34
  void *v49; // r0@36
  int v50; // r5@37
  _DWORD *v51; // r0@37
  __int64 v52; // r1@37
  void *v53; // r0@39
  int v54; // r5@40
  _DWORD *v55; // r0@40
  __int64 v56; // r1@40
  void *v57; // r0@42
  int v58; // r5@43
  _DWORD *v59; // r0@43
  __int64 v60; // r1@43
  void *v61; // r0@45
  int v62; // r5@46
  _DWORD *v63; // r0@46
  __int64 v64; // r1@46
  void *v65; // r0@48
  int v66; // r5@49
  _DWORD *v67; // r0@49
  __int64 v68; // r1@49
  void *v69; // r0@51
  int v70; // r5@52
  _DWORD *v71; // r0@52
  __int64 v72; // r1@52
  void *v73; // r0@54
  int v74; // r5@55
  _DWORD *v75; // r0@55
  __int64 v76; // r1@55
  void *v77; // r0@57
  int v78; // r5@58
  _DWORD *v79; // r0@58
  __int64 v80; // r1@58
  void *v81; // r0@60
  int v82; // r5@61
  _DWORD *v83; // r0@61
  __int64 v84; // r1@61
  void *v85; // r0@63
  int v86; // r5@64
  _DWORD *v87; // r0@64
  __int64 v88; // r1@64
  void *v89; // r0@66
  int v90; // r5@67
  _DWORD *v91; // r0@67
  __int64 v92; // r1@67
  void *v93; // r0@69
  int v94; // r5@70
  _DWORD *v95; // r0@70
  __int64 v96; // r1@70
  void *v97; // r0@72
  unsigned int *v98; // r2@74
  signed int v99; // r1@76
  unsigned int *v100; // r2@78
  signed int v101; // r1@80
  unsigned int *v102; // r2@82
  signed int v103; // r1@84
  unsigned int *v104; // r2@86
  signed int v105; // r1@88
  unsigned int *v106; // r2@90
  signed int v107; // r1@92
  unsigned int *v108; // r2@94
  signed int v109; // r1@96
  unsigned int *v110; // r2@98
  signed int v111; // r1@100
  unsigned int *v112; // r2@102
  signed int v113; // r1@104
  unsigned int *v114; // r2@106
  signed int v115; // r1@108
  unsigned int *v116; // r2@110
  signed int v117; // r1@112
  unsigned int *v118; // r2@114
  signed int v119; // r1@116
  unsigned int *v120; // r2@118
  signed int v121; // r1@120
  unsigned int *v122; // r2@122
  signed int v123; // r1@124
  unsigned int *v124; // r2@126
  signed int v125; // r1@128
  unsigned int *v126; // r2@130
  signed int v127; // r1@132
  unsigned int *v128; // r2@134
  signed int v129; // r1@136
  unsigned int *v130; // r2@138
  signed int v131; // r1@140
  unsigned int *v132; // r2@142
  signed int v133; // r1@144
  unsigned int *v134; // r2@146
  signed int v135; // r1@148
  unsigned int *v136; // r2@150
  signed int v137; // r1@152
  unsigned int *v138; // r2@154
  signed int v139; // r1@156
  unsigned int *v140; // r2@158
  signed int v141; // r1@160
  unsigned int *v142; // r2@162
  signed int v143; // r1@164
  unsigned int *v144; // r2@166
  signed int v145; // r1@168
  _DWORD *v146; // [sp+4h] [bp-254h]@70
  __int64 v147; // [sp+Ch] [bp-24Ch]@70
  int v148; // [sp+18h] [bp-240h]@70
  _DWORD *v149; // [sp+1Ch] [bp-23Ch]@67
  __int64 v150; // [sp+24h] [bp-234h]@67
  int v151; // [sp+30h] [bp-228h]@67
  _DWORD *v152; // [sp+34h] [bp-224h]@64
  __int64 v153; // [sp+3Ch] [bp-21Ch]@64
  int v154; // [sp+48h] [bp-210h]@64
  _DWORD *v155; // [sp+4Ch] [bp-20Ch]@61
  __int64 v156; // [sp+54h] [bp-204h]@61
  int v157; // [sp+60h] [bp-1F8h]@61
  _DWORD *v158; // [sp+64h] [bp-1F4h]@58
  __int64 v159; // [sp+6Ch] [bp-1ECh]@58
  int v160; // [sp+78h] [bp-1E0h]@58
  _DWORD *v161; // [sp+7Ch] [bp-1DCh]@55
  __int64 v162; // [sp+84h] [bp-1D4h]@55
  int v163; // [sp+90h] [bp-1C8h]@55
  _DWORD *v164; // [sp+94h] [bp-1C4h]@52
  __int64 v165; // [sp+9Ch] [bp-1BCh]@52
  int v166; // [sp+A8h] [bp-1B0h]@52
  _DWORD *v167; // [sp+ACh] [bp-1ACh]@49
  __int64 v168; // [sp+B4h] [bp-1A4h]@49
  int v169; // [sp+C0h] [bp-198h]@49
  _DWORD *v170; // [sp+C4h] [bp-194h]@46
  __int64 v171; // [sp+CCh] [bp-18Ch]@46
  int v172; // [sp+D8h] [bp-180h]@46
  _DWORD *v173; // [sp+DCh] [bp-17Ch]@43
  __int64 v174; // [sp+E4h] [bp-174h]@43
  int v175; // [sp+F0h] [bp-168h]@43
  _DWORD *v176; // [sp+F4h] [bp-164h]@40
  __int64 v177; // [sp+FCh] [bp-15Ch]@40
  int v178; // [sp+108h] [bp-150h]@40
  _DWORD *v179; // [sp+10Ch] [bp-14Ch]@37
  __int64 v180; // [sp+114h] [bp-144h]@37
  int v181; // [sp+120h] [bp-138h]@37
  _DWORD *v182; // [sp+124h] [bp-134h]@34
  __int64 v183; // [sp+12Ch] [bp-12Ch]@34
  int v184; // [sp+138h] [bp-120h]@34
  _DWORD *v185; // [sp+13Ch] [bp-11Ch]@31
  __int64 v186; // [sp+144h] [bp-114h]@31
  int v187; // [sp+150h] [bp-108h]@31
  _DWORD *v188; // [sp+154h] [bp-104h]@28
  __int64 v189; // [sp+15Ch] [bp-FCh]@28
  int v190; // [sp+168h] [bp-F0h]@28
  _DWORD *v191; // [sp+16Ch] [bp-ECh]@25
  __int64 v192; // [sp+174h] [bp-E4h]@25
  int v193; // [sp+180h] [bp-D8h]@25
  _DWORD *v194; // [sp+184h] [bp-D4h]@22
  __int64 v195; // [sp+18Ch] [bp-CCh]@22
  int v196; // [sp+198h] [bp-C0h]@22
  _DWORD *v197; // [sp+19Ch] [bp-BCh]@19
  __int64 v198; // [sp+1A4h] [bp-B4h]@19
  int v199; // [sp+1B0h] [bp-A8h]@19
  _DWORD *v200; // [sp+1B4h] [bp-A4h]@16
  __int64 v201; // [sp+1BCh] [bp-9Ch]@16
  int v202; // [sp+1C8h] [bp-90h]@16
  _DWORD *v203; // [sp+1CCh] [bp-8Ch]@13
  __int64 v204; // [sp+1D4h] [bp-84h]@13
  int v205; // [sp+1E0h] [bp-78h]@13
  _DWORD *v206; // [sp+1E4h] [bp-74h]@10
  __int64 v207; // [sp+1ECh] [bp-6Ch]@10
  int v208; // [sp+1F8h] [bp-60h]@10
  _DWORD *v209; // [sp+1FCh] [bp-5Ch]@7
  __int64 v210; // [sp+204h] [bp-54h]@7
  int v211; // [sp+210h] [bp-48h]@7
  _DWORD *v212; // [sp+214h] [bp-44h]@4
  __int64 v213; // [sp+21Ch] [bp-3Ch]@4
  int v214; // [sp+228h] [bp-30h]@4
  _DWORD *v215; // [sp+22Ch] [bp-2Ch]@1
  __int64 v216; // [sp+234h] [bp-24h]@1
  int v217; // [sp+240h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v217, "button.menu_realm_send_invites");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v217);
  v3 = operator new(4u);
  LODWORD(v4) = sub_121CDDA;
  *v3 = v1;
  HIDWORD(v4) = sub_121CD9A;
  v215 = v3;
  v216 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v215);
  if ( (_DWORD)v216 )
    ((void (*)(void))v216)();
  v5 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
  {
    v98 = (unsigned int *)(v217 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
    }
    else
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v214, "button.realms_invite_find_friends");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v214);
  v7 = operator new(4u);
  LODWORD(v8) = sub_121CFD4;
  *v7 = v1;
  HIDWORD(v8) = sub_121CE10;
  v212 = v7;
  v213 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v212);
  if ( (_DWORD)v213 )
    ((void (*)(void))v213)();
  v9 = (void *)(v214 - 12);
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v214 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v211, "button.realms_invite_share_close");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v211);
  v11 = operator new(4u);
  LODWORD(v12) = sub_121D69C;
  *v11 = v1;
  HIDWORD(v12) = sub_121D4F8;
  v209 = v11;
  v210 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v209);
  if ( (_DWORD)v210 )
    ((void (*)(void))v210)();
  v13 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v211 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v208, "button.realms_invite_unblock");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v208);
  v15 = operator new(4u);
  LODWORD(v16) = sub_121D908;
  *v15 = v1;
  HIDWORD(v16) = sub_121D6D4;
  v206 = v15;
  v207 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v206);
  if ( (_DWORD)v207 )
    ((void (*)(void))v207)();
  v17 = (void *)(v208 - 12);
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v208 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v205, "button.realms_invite_undo");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v205);
  v19 = operator new(4u);
  LODWORD(v20) = sub_121D946;
  *v19 = v1;
  HIDWORD(v20) = sub_121D93E;
  v203 = v19;
  v204 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v203);
  if ( (_DWORD)v204 )
    ((void (*)(void))v204)();
  v21 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v205 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v202, "button.realms_invite_plus");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v202);
  v23 = operator new(4u);
  LODWORD(v24) = sub_121D984;
  *v23 = v1;
  HIDWORD(v24) = sub_121D97C;
  v200 = v23;
  v201 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v200);
  if ( (_DWORD)v201 )
    ((void (*)(void))v201)();
  v25 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v202 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v199, "button.realms_invite_minus");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v199);
  v27 = operator new(4u);
  LODWORD(v28) = sub_121DC84;
  *v27 = v1;
  HIDWORD(v28) = sub_121D9BC;
  v197 = v27;
  v198 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v197);
  if ( (_DWORD)v198 )
    ((void (*)(void))v198)();
  v29 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v199 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v196, "button.realms_invite_share_by_link");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v196);
  v31 = operator new(4u);
  LODWORD(v32) = sub_121E1E6;
  *v31 = v1;
  HIDWORD(v32) = sub_121E1D8;
  v194 = v31;
  v195 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v194);
  if ( (_DWORD)v195 )
    ((void (*)(void))v195)();
  v33 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v196 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v193, "button.realms_invite_new_link");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v193);
  v35 = operator new(4u);
  LODWORD(v36) = sub_121E230;
  *v35 = v1;
  HIDWORD(v36) = sub_121E21C;
  v191 = v35;
  v192 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v191);
  if ( (_DWORD)v192 )
    ((void (*)(void))v192)();
  v37 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v193 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v190, "button.realms_invite_cancel");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v190);
  v39 = operator new(4u);
  LODWORD(v40) = sub_121E28C;
  *v39 = v1;
  HIDWORD(v40) = sub_121E268;
  v188 = v39;
  v189 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v188);
  if ( (_DWORD)v189 )
    ((void (*)(void))v189)();
  v41 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v190 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v187, "button.realms_invite_refresh");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v187);
  v43 = operator new(4u);
  LODWORD(v44) = sub_121E2F8;
  *v43 = v1;
  HIDWORD(v44) = sub_121E2C4;
  v185 = v43;
  v186 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v185);
  if ( (_DWORD)v186 )
    ((void (*)(void))v186)();
  v45 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v187 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v184, "button.realms_invite_share");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v184);
  v47 = operator new(4u);
  LODWORD(v48) = sub_121E394;
  *v47 = v1;
  HIDWORD(v48) = sub_121E330;
  v182 = v47;
  v183 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v182);
  if ( (_DWORD)v183 )
    ((void (*)(void))v183)();
  v49 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v184 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  sub_21E94B4((void **)&v181, "button.realms_invite_copy");
  v50 = MinecraftScreenController::_getNameId(v1, (int **)&v181);
  v51 = operator new(4u);
  LODWORD(v52) = sub_121E65C;
  *v51 = v1;
  HIDWORD(v52) = sub_121E3CC;
  v179 = v51;
  v180 = v52;
  ScreenController::registerButtonClickHandler((int)v1, v50, (int)&v179);
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  v53 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v181 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  sub_21E94B4((void **)&v178, "#member_settings");
  v54 = MinecraftScreenController::_getNameId(v1, (int **)&v178);
  v55 = operator new(4u);
  LODWORD(v56) = sub_121E8B0;
  *v55 = v1;
  HIDWORD(v56) = sub_121E694;
  v176 = v55;
  v177 = v56;
  ScreenController::registerToggleChangeEventHandler((int)v1, v54, (int)&v176);
  if ( (_DWORD)v177 )
    ((void (*)(void))v177)();
  v57 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v178 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  sub_21E94B4((void **)&v175, "#operator");
  v58 = MinecraftScreenController::_getNameId(v1, (int **)&v175);
  v59 = operator new(4u);
  LODWORD(v60) = sub_121E902;
  *v59 = v1;
  HIDWORD(v60) = sub_121E8E6;
  v173 = v59;
  v174 = v60;
  ScreenController::registerToggleChangeEventHandler((int)v1, v58, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  v61 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v175 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  sub_21E94B4((void **)&v172, "prev_page_button_uninvited_friends");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v172);
  v63 = operator new(4u);
  LODWORD(v64) = sub_121E98A;
  *v63 = v1;
  HIDWORD(v64) = sub_121E938;
  v170 = v63;
  v171 = v64;
  ScreenController::registerButtonClickHandler((int)v1, v62, (int)&v170);
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  v65 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v172 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  sub_21E94B4((void **)&v169, "next_page_button_uninvited_friends");
  v66 = MinecraftScreenController::_getNameId(v1, (int **)&v169);
  v67 = operator new(4u);
  LODWORD(v68) = sub_121EA12;
  *v67 = v1;
  HIDWORD(v68) = sub_121E9C0;
  v167 = v67;
  v168 = v68;
  ScreenController::registerButtonClickHandler((int)v1, v66, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  v69 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v169 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  sub_21E94B4((void **)&v166, "prev_page_button_invited_friends");
  v70 = MinecraftScreenController::_getNameId(v1, (int **)&v166);
  v71 = operator new(4u);
  LODWORD(v72) = sub_121EA9A;
  *v71 = v1;
  HIDWORD(v72) = sub_121EA48;
  v164 = v71;
  v165 = v72;
  ScreenController::registerButtonClickHandler((int)v1, v70, (int)&v164);
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  v73 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v166 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  sub_21E94B4((void **)&v163, "next_page_button_invited_friends");
  v74 = MinecraftScreenController::_getNameId(v1, (int **)&v163);
  v75 = operator new(4u);
  LODWORD(v76) = sub_121EB22;
  *v75 = v1;
  HIDWORD(v76) = sub_121EAD0;
  v161 = v75;
  v162 = v76;
  ScreenController::registerButtonClickHandler((int)v1, v74, (int)&v161);
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  v77 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v163 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  sub_21E94B4((void **)&v160, "prev_page_button_members");
  v78 = MinecraftScreenController::_getNameId(v1, (int **)&v160);
  v79 = operator new(4u);
  LODWORD(v80) = sub_121EBAA;
  *v79 = v1;
  HIDWORD(v80) = sub_121EB58;
  v158 = v79;
  v159 = v80;
  ScreenController::registerButtonClickHandler((int)v1, v78, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  v81 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v160 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  sub_21E94B4((void **)&v157, "next_page_button_members");
  v82 = MinecraftScreenController::_getNameId(v1, (int **)&v157);
  v83 = operator new(4u);
  LODWORD(v84) = sub_121EC32;
  *v83 = v1;
  HIDWORD(v84) = sub_121EBE0;
  v155 = v83;
  v156 = v84;
  ScreenController::registerButtonClickHandler((int)v1, v82, (int)&v155);
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  v85 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v157 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  sub_21E94B4((void **)&v154, "prev_page_button_blocked_players");
  v86 = MinecraftScreenController::_getNameId(v1, (int **)&v154);
  v87 = operator new(4u);
  LODWORD(v88) = sub_121ECBA;
  *v87 = v1;
  HIDWORD(v88) = sub_121EC68;
  v152 = v87;
  v153 = v88;
  ScreenController::registerButtonClickHandler((int)v1, v86, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  v89 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v154 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  sub_21E94B4((void **)&v151, "next_page_button_blocked_players");
  v90 = MinecraftScreenController::_getNameId(v1, (int **)&v151);
  v91 = operator new(4u);
  LODWORD(v92) = sub_121ED42;
  *v91 = v1;
  HIDWORD(v92) = sub_121ECF0;
  v149 = v91;
  v150 = v92;
  ScreenController::registerButtonClickHandler((int)v1, v90, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  v93 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v151 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v93);
  sub_21E94B4((void **)&v148, "#player_filter_text_box");
  v94 = MinecraftScreenController::_getNameId(v1, (int **)&v148);
  v95 = operator new(4u);
  LODWORD(v96) = sub_121F0E8;
  *v95 = v1;
  HIDWORD(v96) = sub_121ED78;
  v146 = v95;
  v147 = v96;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v94, (int)&v146);
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  v97 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v148 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
}


int __fastcall RealmsWhitelistScreenController::_refreshLink(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r6@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@7
  unsigned int *v6; // r0@8
  unsigned int v7; // r1@10
  _QWORD *v8; // r0@13
  unsigned int *v9; // r1@14
  unsigned int v10; // r2@16
  __int64 v11; // r1@19
  unsigned int *v12; // r5@22
  unsigned int v13; // r0@24
  unsigned int v14; // r0@31
  int result; // r0@36
  unsigned int *v16; // r2@37
  unsigned int v17; // r1@39
  _QWORD *v18; // [sp+0h] [bp-38h]@19
  void (*v19)(void); // [sp+8h] [bp-30h]@13
  __int64 v20; // [sp+10h] [bp-28h]@7
  char v21; // [sp+1Ch] [bp-1Ch]@1
  int v22; // [sp+20h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsWhitelistScreenController>((int)&v21, (int)this);
  v2 = *(_QWORD *)&v21;
  if ( v22 )
  {
    v3 = (unsigned int *)(v22 + 8);
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
  *((_BYTE *)v1 + 484) = 1;
  v5 = *((_DWORD *)v1 + 95);
  v20 = *((_QWORD *)v1 + 61);
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  v19 = 0;
  v8 = operator new(8u);
  *v8 = v2;
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  LODWORD(v11) = sub_1222A24;
  v18 = v8;
  HIDWORD(v11) = sub_1222884;
  *(_QWORD *)&v19 = v11;
  MinecraftScreenModel::createInfiniteInviteLink(v5, &v20, (int)&v18);
  if ( v19 )
    v19();
    v12 = (unsigned int *)(HIDWORD(v2) + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
        v14 = __ldrex(v12);
      while ( __strex(v14 - 1, v12) );
      v14 = (*v12)--;
    if ( v14 == 1 )
  result = v22;
    v16 = (unsigned int *)(v22 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsWhitelistScreenController::sendInvites(RealmsWhitelistScreenController *this, int a2)
{
  RealmsWhitelistScreenController::sendInvites(this, a2);
}


void __fastcall RealmsWhitelistScreenController::_joinRealm(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController::_joinRealm(this);
}


int __fastcall RealmsWhitelistScreenController::_cancelAsyncCallsAndExitProgressScreen(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r4@1

  v1 = this;
  MinecraftScreenModel::abortAllRealmsRequests(*((MinecraftScreenModel **)this + 106));
  *(_BYTE *)(*((_DWORD *)v1 + 150) + 1) = 1;
  MinecraftScreenController::_setExitBehavior((int)v1, 0);
  return j_j_j__ZN20MinecraftScreenModel11leaveScreenEv_1(*((MinecraftScreenModel **)v1 + 106));
}


signed int __fastcall RealmsWhitelistScreenController::_isFriend(int a1, const void **a2)
{
  const void **v2; // r6@1
  _DWORD *v3; // r4@1
  signed int v4; // r10@1
  const void *v5; // r5@2
  int v6; // r7@2
  size_t v7; // r6@2
  _DWORD *v8; // r0@3
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  _DWORD *v11; // r7@18
  Social::XboxProfile *v12; // r0@18
  int v13; // r1@18
  void *v14; // r0@18
  int v16; // [sp+0h] [bp-48h]@1
  void *ptr; // [sp+4h] [bp-44h]@20
  int v18; // [sp+8h] [bp-40h]@20
  _DWORD *v19; // [sp+Ch] [bp-3Ch]@1
  int v20; // [sp+10h] [bp-38h]@20
  int v21; // [sp+1Ch] [bp-2Ch]@21

  v2 = a2;
  MinecraftScreenModel::getXboxLiveFriends((MinecraftScreenModel *)&v16, *(_DWORD *)(a1 + 424));
  v3 = v19;
  v4 = 0;
  if ( v19 )
  {
    v5 = *v2;
    v6 = (int)v19;
    v7 = *((_DWORD *)*v2 - 3);
    while ( 1 )
    {
      v8 = *(_DWORD **)(v6 + 4);
      if ( *(v8 - 3) == v7 && !memcmp(v8, v5, v7) )
        break;
      v6 = *(_DWORD *)v6;
      if ( !v6 )
      {
        v4 = 0;
        goto LABEL_8;
      }
    }
    v4 = 1;
LABEL_8:
    while ( v3 )
      v11 = v3;
      v12 = (Social::XboxProfile *)(v3 + 2);
      v3 = (_DWORD *)*v3;
      Social::XboxProfile::~XboxProfile(v12);
      v13 = v11[1];
      v14 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v13 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      operator delete(v11);
  }
  _aeabi_memclr4(ptr, 4 * v18);
  v19 = 0;
  v20 = 0;
  if ( ptr && &v21 != ptr )
    operator delete(ptr);
  return v4;
}


void __fastcall RealmsWhitelistScreenController::_refreshPlayerList(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r4@1
  int **v2; // r1@1
  bool v3; // zf@3
  int v4; // r4@4
  int v5; // r0@6
  int v6; // r1@7
  unsigned int v7; // r7@10
  unsigned int v8; // r5@10
  int *v9; // r10@10
  int v10; // r6@11
  int v11; // r9@11
  int *v12; // r8@11
  _DWORD *v13; // r1@13
  size_t v14; // r2@13
  int v15; // r11@15
  int **v16; // r1@18
  bool v17; // zf@20
  int v18; // r4@21
  int v19; // r0@23
  int v20; // r1@24
  unsigned int v21; // r7@27
  unsigned int v22; // r5@27
  int *v23; // r10@27
  int v24; // r8@28
  int v25; // r9@28
  int *v26; // r6@28
  _DWORD *v27; // r1@30
  size_t v28; // r2@30
  int v29; // r11@32
  int **v30; // r1@35 OVERLAPPED
  int **v31; // r2@35
  bool v32; // zf@37
  int v33; // r4@38
  int v34; // r0@40
  int v35; // r1@41
  unsigned int v36; // r7@44
  unsigned int v37; // r5@44
  int *v38; // r9@44
  int v39; // r8@45
  int v40; // r6@45
  int *v41; // r11@45
  _DWORD *v42; // r1@47
  size_t v43; // r2@47
  int v44; // r10@49
  _DWORD *v45; // r6@52
  unsigned int *v46; // r2@54
  signed int v47; // r1@56
  _DWORD *v48; // r5@62
  Social::XboxProfile *v49; // r0@62
  int v50; // r1@62
  void *v51; // r0@62
  RealmsWhitelistScreenController *v52; // [sp+4h] [bp-54h]@1
  unsigned __int64 *v53; // [sp+4h] [bp-54h]@36
  int **v54; // [sp+8h] [bp-50h]@1
  int **v55; // [sp+8h] [bp-50h]@18
  int **v56; // [sp+8h] [bp-50h]@35
  int **v57; // [sp+Ch] [bp-4Ch]@10
  int **v58; // [sp+Ch] [bp-4Ch]@27
  int **v59; // [sp+Ch] [bp-4Ch]@44
  char v60; // [sp+10h] [bp-48h]@1
  void *ptr; // [sp+14h] [bp-44h]@10
  unsigned int v62; // [sp+18h] [bp-40h]@10
  _DWORD *v63; // [sp+1Ch] [bp-3Ch]@52
  int v64; // [sp+20h] [bp-38h]@64
  int v65; // [sp+2Ch] [bp-2Ch]@65

  v1 = this;
  v52 = this;
  MinecraftScreenModel::getXboxLiveFriends((MinecraftScreenModel *)&v60, *((_DWORD *)this + 106));
  v2 = (int **)*((_QWORD *)v1 + 85);
  v54 = (int **)(*((_QWORD *)v1 + 85) >> 32);
  if ( v2 != v54 )
  {
    do
    {
      v57 = v2;
      v7 = sub_21B417C(*v2, *(*v2 - 3), -955291385);
      v8 = v62;
      v4 = v7 % v62;
      v9 = (int *)*((_DWORD *)ptr + v7 % v62);
      if ( v9 )
      {
        v10 = *v9;
        v11 = *(_DWORD *)(*v9 + 56);
        v12 = *v57;
        while ( 1 )
        {
          if ( v11 == v7 )
          {
            v13 = *(_DWORD **)(v10 + 4);
            v14 = *(v12 - 3);
            if ( v14 == *(v13 - 3) && !memcmp(v12, v13, v14) )
              break;
          }
          v15 = *(_DWORD *)v10;
          if ( *(_DWORD *)v10 )
            v11 = *(_DWORD *)(v15 + 56);
            v9 = (int *)v10;
            v10 = *(_DWORD *)v10;
            if ( *(_DWORD *)(v15 + 56) % v8 == v4 )
              continue;
          goto LABEL_17;
        }
        v3 = v9 == 0;
        if ( v9 )
          v4 = *v9;
          v3 = *v9 == 0;
        if ( !v3 )
          v5 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                 (unsigned __int64 *)v52 + 80,
                 v57);
          if ( v5 )
            v6 = *(_DWORD *)(v4 + 36);
            if ( v6 != 1 )
              LOBYTE(v6) = 0;
            *(_BYTE *)(v5 + 30) = v6;
      }
LABEL_17:
      v2 = v57 + 1;
    }
    while ( v57 + 1 != v54 );
  }
  v16 = (int **)*(_QWORD *)((char *)v52 + 716);
  v55 = (int **)(*(_QWORD *)((char *)v52 + 716) >> 32);
  if ( v16 != v55 )
      v58 = v16;
      v21 = sub_21B417C(*v16, *(*v16 - 3), -955291385);
      v22 = v62;
      v18 = v21 % v62;
      v23 = (int *)*((_DWORD *)ptr + v21 % v62);
      if ( v23 )
        v24 = *v23;
        v25 = *(_DWORD *)(*v23 + 56);
        v26 = *v58;
          if ( v25 == v21 )
            v27 = *(_DWORD **)(v24 + 4);
            v28 = *(v26 - 3);
            if ( v28 == *(v27 - 3) && !memcmp(v26, v27, v28) )
          v29 = *(_DWORD *)v24;
          if ( *(_DWORD *)v24 )
            v25 = *(_DWORD *)(v29 + 56);
            v23 = (int *)v24;
            v24 = *(_DWORD *)v24;
            if ( *(_DWORD *)(v29 + 56) % v22 == v18 )
          goto LABEL_34;
        v17 = v23 == 0;
        if ( v23 )
          v18 = *v23;
          v17 = *v23 == 0;
        if ( !v17 )
          v19 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                  (unsigned __int64 *)v52 + 80,
                  v58);
          if ( v19 )
            v20 = *(_DWORD *)(v18 + 36);
            if ( v20 != 1 )
              LOBYTE(v20) = 0;
            *(_BYTE *)(v19 + 30) = v20;
LABEL_34:
      v16 = v58 + 1;
    while ( v58 + 1 != v55 );
  *(_QWORD *)&v30 = *((_QWORD *)v52 + 94);
  v56 = v31;
  if ( v30 != v31 )
    v53 = (unsigned __int64 *)((char *)v52 + 640);
      v59 = v30;
      v36 = sub_21B417C(*v30, *(*v30 - 3), -955291385);
      v37 = v62;
      v33 = v36 % v62;
      v38 = (int *)*((_DWORD *)ptr + v36 % v62);
      if ( v38 )
        v39 = *v38;
        v40 = *(_DWORD *)(*v38 + 56);
        v41 = *v59;
          if ( v40 == v36 )
            v42 = *(_DWORD **)(v39 + 4);
            v43 = *(v41 - 3);
            if ( v43 == *(v42 - 3) && !memcmp(v41, v42, v43) )
          v44 = *(_DWORD *)v39;
          if ( *(_DWORD *)v39 )
            v40 = *(_DWORD *)(v44 + 56);
            v38 = (int *)v39;
            v39 = *(_DWORD *)v39;
            if ( *(_DWORD *)(v44 + 56) % v37 == v33 )
          goto LABEL_51;
        v32 = v38 == 0;
        if ( v38 )
          v33 = *v38;
          v32 = *v38 == 0;
        if ( !v32 )
          v34 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                  v53,
                  v59);
          if ( v34 )
            v35 = *(_DWORD *)(v33 + 36);
            if ( v35 != 1 )
              LOBYTE(v35) = 0;
            *(_BYTE *)(v34 + 30) = v35;
LABEL_51:
      v30 = v59 + 1;
    while ( v59 + 1 != v56 );
  v45 = v63;
  while ( v45 )
    v48 = v45;
    v49 = (Social::XboxProfile *)(v45 + 2);
    v45 = (_DWORD *)*v45;
    Social::XboxProfile::~XboxProfile(v49);
    v50 = v48[1];
    v51 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
      else
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    operator delete(v48);
  _aeabi_memclr4(ptr, 4 * v62);
  v63 = 0;
  v64 = 0;
  if ( ptr )
    if ( &v65 != ptr )
      operator delete(ptr);
}


void __fastcall RealmsWhitelistScreenController::_registerBindings(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController::_registerBindings(this);
}


void __fastcall RealmsWhitelistScreenController::_initializePlayerList(int a1, int a2, int a3, Realms::InvitedPlayer *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, char a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v63; // r9@1
  __int64 v64; // kr00_8@1
  void **v65; // r1@2
  _DWORD *v66; // r6@2
  unsigned int *v67; // r2@3
  signed int v68; // r7@5
  void **v69; // r5@9
  int *v70; // r0@10
  __int64 v71; // kr08_8@12
  _DWORD *v72; // r6@13
  unsigned int *v73; // r2@14
  signed int v74; // r1@16
  int *v75; // r0@22
  __int64 v76; // kr10_8@24
  _DWORD *v77; // r6@25
  unsigned int *v78; // r2@26
  signed int v79; // r1@28
  int *v80; // r0@34
  __int64 v81; // kr18_8@36
  _DWORD *v82; // r6@37
  unsigned int *v83; // r2@38
  signed int v84; // r1@40
  int *v85; // r0@46
  _DWORD *v86; // r7@48
  unsigned int *v87; // r2@50
  signed int v88; // r1@52
  _DWORD *v89; // r6@58
  Realms::InvitedPlayer *v90; // r0@58
  int v91; // r1@58
  void *v92; // r0@58
  double v93; // r0@60
  unsigned int v94; // r0@60
  int v95; // r6@62
  int *v96; // r5@62
  int v97; // r5@63
  int i; // r6@63
  unsigned int *v99; // r2@65
  signed int v100; // r1@67
  void *v101; // r0@73
  int v102; // r8@75
  int v103; // r4@75
  int *v104; // r6@76
  int *v105; // r11@76
  void **v106; // r10@76
  void *v107; // r7@76
  unsigned int *v108; // r2@78
  signed int v109; // r1@80
  int v110; // r0@86
  unsigned int v111; // r7@88
  unsigned int v112; // r5@88
  unsigned int v113; // r10@88
  int *v114; // r8@88
  int v115; // r4@89
  _DWORD *v116; // r6@89
  int v117; // r9@89
  const void *v118; // r1@91
  size_t v119; // r2@91
  int v120; // r0@92
  int v121; // r11@93
  int *v122; // r4@95
  size_t v123; // r2@96
  void *v124; // r0@100
  __int64 v125; // r0@102
  __int64 v126; // r0@105
  __int64 v127; // r0@108
  bool v128; // zf@111
  int v129; // r0@114
  signed int v130; // r0@114
  int v131; // r6@119
  unsigned int *v132; // r1@121
  signed int v133; // r0@123
  char *v134; // r11@128
  _DWORD *v135; // r0@128
  char *v136; // r5@128
  size_t v137; // r2@128
  signed int v138; // r10@129
  signed int v139; // r0@133
  __int64 v140; // r0@135
  int v141; // r4@140
  __int64 v142; // r6@141
  __int64 v143; // r0@142
  __int64 v144; // r4@146
  int *v145; // r6@148
  __int64 v146; // r4@154
  int *v147; // r6@156
  __int64 v148; // r4@162
  int *v149; // r6@164
  __int64 v150; // r4@170
  int *v151; // r6@172
  int v152; // ST1CC_4@178
  int v153; // ST1CC_4@178
  int v154; // ST1CC_4@178
  _DWORD *v155; // r7@178
  unsigned int *v156; // r2@180
  signed int v157; // r1@182
  _DWORD *v158; // r5@188
  Social::XboxProfile *v159; // r0@188
  int v160; // r1@188
  void *v161; // r0@188
  _DWORD *v162; // r6@193
  unsigned int *v163; // r2@195
  signed int v164; // r1@197
  _DWORD *v165; // r5@203
  Realms::InvitedPlayer *v166; // r0@203
  int v167; // r1@203
  void *v168; // r0@203
  int v169; // [sp+0h] [bp-1F0h]@0
  unsigned __int64 *v170; // [sp+18h] [bp-1D8h]@75
  unsigned __int64 *v171; // [sp+1Ch] [bp-1D4h]@1
  int *v172; // [sp+38h] [bp-1B8h]@120
  int v173; // [sp+38h] [bp-1B8h]@140
  int v174; // [sp+3Ch] [bp-1B4h]@75
  Realms::InvitedPlayer *v175; // [sp+40h] [bp-1B0h]@1
  Realms::InvitedPlayer *v176; // [sp+40h] [bp-1B0h]@86
  int v177; // [sp+44h] [bp-1ACh]@62
  char v178; // [sp+48h] [bp-1A8h]@145
  unsigned int v179; // [sp+50h] [bp-1A0h]@145
  int v180; // [sp+54h] [bp-19Ch]@145
  int v181; // [sp+6Ch] [bp-184h]@145
  int v182; // [sp+70h] [bp-180h]@145
  int v183; // [sp+74h] [bp-17Ch]@145
  void *v184; // [sp+78h] [bp-178h]@142
  void *v185; // [sp+7Ch] [bp-174h]@142
  int v186; // [sp+80h] [bp-170h]@142
  __int64 v187; // [sp+84h] [bp-16Ch]@142
  char v188; // [sp+8Dh] [bp-163h]@142
  char v189; // [sp+8Eh] [bp-162h]@142
  int v190; // [sp+90h] [bp-160h]@142
  int v191; // [sp+94h] [bp-15Ch]@142
  int v192; // [sp+98h] [bp-158h]@142
  char v193; // [sp+A0h] [bp-150h]@138
  unsigned int v194; // [sp+A8h] [bp-148h]@138
  int v195; // [sp+ACh] [bp-144h]@138
  int v196; // [sp+C4h] [bp-12Ch]@138
  int v197; // [sp+C8h] [bp-128h]@138
  int v198; // [sp+CCh] [bp-124h]@138
  void *v199; // [sp+D0h] [bp-120h]@120
  void *v200; // [sp+D4h] [bp-11Ch]@133
  int v201; // [sp+D8h] [bp-118h]@133
  void *v202; // [sp+DCh] [bp-114h]@133
  int v203; // [sp+E0h] [bp-110h]@133
  char v204; // [sp+E5h] [bp-10Bh]@133
  char v205; // [sp+E6h] [bp-10Ah]@133
  int v206; // [sp+E8h] [bp-108h]@133
  int v207; // [sp+ECh] [bp-104h]@135
  int v208; // [sp+F0h] [bp-100h]@133
  void *v209; // [sp+F4h] [bp-FCh]@128
  char v210; // [sp+F8h] [bp-F8h]@118
  int *v211; // [sp+100h] [bp-F0h]@118
  int v212; // [sp+104h] [bp-ECh]@118
  int v213; // [sp+11Ch] [bp-D4h]@118
  int v214; // [sp+120h] [bp-D0h]@118
  int v215; // [sp+124h] [bp-CCh]@118
  int v216; // [sp+12Ch] [bp-C4h]@78
  void *v217; // [sp+130h] [bp-C0h]@99
  int v218; // [sp+134h] [bp-BCh]@99
  void *v219; // [sp+138h] [bp-B8h]@76
  void *s1; // [sp+13Ch] [bp-B4h]@86
  void *s2; // [sp+140h] [bp-B0h]@76
  void *v222; // [sp+144h] [bp-ACh]@86
  int v223; // [sp+148h] [bp-A8h]@86
  char v224; // [sp+14Dh] [bp-A3h]@95
  char v225; // [sp+14Eh] [bp-A2h]@88
  int v226; // [sp+150h] [bp-A0h]@95
  int v227; // [sp+154h] [bp-9Ch]@95
  int v228; // [sp+158h] [bp-98h]@86
  char v229; // [sp+15Ch] [bp-94h]@75
  void *ptr; // [sp+160h] [bp-90h]@190
  int v231; // [sp+164h] [bp-8Ch]@190
  _DWORD *v232; // [sp+168h] [bp-88h]@75
  int v233; // [sp+16Ch] [bp-84h]@190
  int v234; // [sp+178h] [bp-78h]@191
  char v235; // [sp+17Ch] [bp-74h]@73
  int v236; // [sp+184h] [bp-6Ch]@65
  int v237; // [sp+188h] [bp-68h]@73
  void *v238; // [sp+1A0h] [bp-50h]@2
  unsigned int v239; // [sp+1A4h] [bp-4Ch]@60
  _DWORD *v240; // [sp+1A8h] [bp-48h]@60
  int v241; // [sp+1ACh] [bp-44h]@60
  signed int v242; // [sp+1B0h] [bp-40h]@60
  int v243; // [sp+1B4h] [bp-3Ch]@60
  int v244; // [sp+1B8h] [bp-38h]@77

  v63 = a1;
  v171 = (unsigned __int64 *)a3;
  v175 = (Realms::InvitedPlayer *)a2;
  v64 = *(_QWORD *)(a1 + 680);
  if ( HIDWORD(v64) != (_DWORD)v64 )
  {
    v65 = &v238;
    v66 = (_DWORD *)v64;
    do
    {
      v70 = (int *)(*v66 - 12);
      if ( v70 != &dword_28898C0 )
      {
        v67 = (unsigned int *)(*v66 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
        }
        else
          v68 = (*v67)--;
        if ( v68 <= 0 )
          v69 = v65;
          j_j_j_j__ZdlPv_9(v70);
          v65 = v69;
      }
      ++v66;
    }
    while ( v66 != (_DWORD *)HIDWORD(v64) );
  }
  *(_DWORD *)(v63 + 684) = v64;
  v71 = *(_QWORD *)(v63 + 716);
  if ( HIDWORD(v71) != (_DWORD)v71 )
    v72 = (_DWORD *)v71;
      v75 = (int *)(*v72 - 12);
      if ( v75 != &dword_28898C0 )
        v73 = (unsigned int *)(*v72 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j__ZdlPv_9(v75);
      ++v72;
    while ( v72 != (_DWORD *)HIDWORD(v71) );
  *(_DWORD *)(v63 + 720) = v71;
  v76 = *(_QWORD *)(v63 + 752);
  if ( HIDWORD(v76) != (_DWORD)v76 )
    v77 = (_DWORD *)v76;
      v80 = (int *)(*v77 - 12);
      if ( v80 != &dword_28898C0 )
        v78 = (unsigned int *)(*v77 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j__ZdlPv_9(v80);
      ++v77;
    while ( v77 != (_DWORD *)HIDWORD(v76) );
  *(_DWORD *)(v63 + 756) = v76;
  v81 = *(_QWORD *)(v63 + 788);
  if ( HIDWORD(v81) != (_DWORD)v81 )
    v82 = (_DWORD *)v81;
      v85 = (int *)(*v82 - 12);
      if ( v85 != &dword_28898C0 )
        v83 = (unsigned int *)(*v82 - 4);
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j__ZdlPv_9(v85);
      ++v82;
    while ( v82 != (_DWORD *)HIDWORD(v81) );
  *(_DWORD *)(v63 + 792) = v81;
  v86 = *(_DWORD **)(v63 + 648);
  while ( v86 )
    v89 = v86;
    v90 = (Realms::InvitedPlayer *)(v86 + 2);
    v86 = (_DWORD *)*v86;
    Realms::InvitedPlayer::~InvitedPlayer(v90);
    v91 = v89[1];
    v92 = (void *)(v91 - 12);
    if ( (int *)(v91 - 12) != &dword_28898C0 )
      v87 = (unsigned int *)(v91 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
      else
        v88 = (*v87)--;
      if ( v88 <= 0 )
        j_j_j_j__ZdlPv_9(v92);
    operator delete(v89);
  _aeabi_memclr4(*(_QWORD *)(v63 + 640), 4 * (*(_QWORD *)(v63 + 640) >> 32));
  *(_DWORD *)(v63 + 648) = 0;
  *(_DWORD *)(v63 + 652) = 0;
  *(_BYTE *)(v63 + 475) = 1;
  v240 = 0;
  v241 = 0;
  v242 = 1065353216;
  v243 = 0;
  HIDWORD(v93) = 10;
  LODWORD(v93) = &v242;
  v94 = sub_21E6254(v93);
  v239 = v94;
  if ( v94 == 1 )
    v177 = v63;
    v244 = 0;
    v96 = &v244;
  else
    if ( v94 >= 0x40000000 )
      sub_21E57F4();
    v95 = 4 * v94;
    v96 = (int *)operator new(4 * v94);
    _aeabi_memclr4(v96, v95);
  v238 = v96;
  v97 = *((_QWORD *)v175 + 7) >> 32;
  for ( i = *((_QWORD *)v175 + 7); i != v97; i += 24 )
    sub_21E8AF4(&v236, (int *)(i + 4));
    Realms::InvitedPlayer::InvitedPlayer((Realms::InvitedPlayer *)&v237, (const Realms::InvitedPlayer *)i);
    std::_Hashtable<std::string,std::pair<std::string const,Realms::InvitedPlayer>,std::allocator<std::pair<std::string const,Realms::InvitedPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string,Realms::InvitedPlayer>>(
      &v235,
      (int)&v238,
      (int)&v236);
    Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v237);
    v101 = (void *)(v236 - 12);
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v99 = (unsigned int *)(v236 - 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 <= 0 )
        j_j_j_j__ZdlPv_9(v101);
  v102 = v177;
  MinecraftScreenModel::getXboxLiveFriends((MinecraftScreenModel *)&v229, *(_DWORD *)(v177 + 424));
  v103 = (int)v232;
  v170 = (unsigned __int64 *)(v177 + 680);
  v174 = v177 + 640;
  if ( v232 )
    v104 = (int *)&v219;
    v105 = (int *)((unsigned int)&v219 | 4);
    v106 = &s2;
    v107 = &unk_28898CC;
      v219 = v107;
      s1 = v107;
      sub_21E94B4(v106, (const char *)&unk_257BC67);
      v222 = v107;
      v223 = 0;
      v228 = 0;
      EntityInteraction::setInteractText(v105, (int *)(v103 + 4));
      EntityInteraction::setInteractText(v104, (int *)(v103 + 12));
      EntityInteraction::setInteractText((int *)v106, (int *)(v103 + 16));
      EntityInteraction::setInteractText((int *)&v222, (int *)(v103 + 24));
      v176 = (Realms::InvitedPlayer *)v103;
      v223 = 2;
      v110 = *(_DWORD *)(v103 + 36);
      if ( v110 != 1 )
        LOBYTE(v110) = 0;
      v225 = v110;
      v111 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v112 = v239;
      v113 = v111 % v239;
      v114 = (int *)*((_DWORD *)v238 + v111 % v239);
      if ( !v114 )
        goto LABEL_95;
      v115 = *v114;
      v116 = s1;
      v117 = *(_DWORD *)(*v114 + 32);
      while ( 1 )
        if ( v117 == v111 )
          v118 = *(const void **)(v115 + 4);
          v119 = *(v116 - 3);
          if ( v119 == *((_DWORD *)v118 - 3) )
          {
            v120 = memcmp(v116, v118, v119);
            if ( !v120 )
              break;
          }
        v121 = *(_DWORD *)v115;
        if ( *(_DWORD *)v115 )
          v117 = *(_DWORD *)(v121 + 32);
          v114 = (int *)v115;
          v115 = *(_DWORD *)v115;
          if ( *(_DWORD *)(v121 + 32) % v112 == v113 )
            continue;
      v128 = v114 == 0;
      if ( v114 )
        v120 = *v114;
        v128 = *v114 == 0;
      if ( v128 )
LABEL_95:
        v224 = 0;
        v226 = 1;
        LOBYTE(v228) = 0;
        v227 = 3;
        v122 = (int *)v176;
        v105 = (int *)((unsigned int)&v219 | 4);
        v224 = *(_BYTE *)(v120 + 29);
        v226 = 0;
        v129 = *(_BYTE *)(v120 + 28);
        LOBYTE(v228) = v129;
        v128 = v129 == 0;
        v130 = 3;
        if ( !v128 )
          v130 = 2;
        v227 = v130;
        std::_Hashtable<std::string,std::pair<std::string const,Realms::InvitedPlayer>,std::allocator<std::pair<std::string const,Realms::InvitedPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
          (unsigned __int64 *)&v238,
          (int **)((unsigned int)&v219 | 4));
      v104 = (int *)&v219;
      v102 = v177;
      v123 = *((_DWORD *)v219 - 3);
      v106 = &s2;
      if ( v123 == *((_DWORD *)s2 - 3) && !memcmp(v219, s2, v123) )
        sub_21E8190(&s2, (char *)&unk_257BC67, 0);
      v217 = v222;
      v218 = *((_DWORD *)v222 - 3);
      if ( !Core::FileSystem::fileOrDirectoryExists((__int64 *)&v217) )
        v223 = 0;
        sub_21E94B4((void **)&v216, "textures/ui/gamerpic");
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v222,
          &v216);
        v124 = (void *)(v216 - 12);
        if ( (int *)(v216 - 12) != &dword_28898C0 )
          v108 = (unsigned int *)(v216 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v109 = __ldrex(v108);
            while ( __strex(v109 - 1, v108) );
          else
            v109 = (*v108)--;
          if ( v109 <= 0 )
            j_j_j_j__ZdlPv_9(v124);
      if ( v224 )
        v125 = *(_QWORD *)(v177 + 684);
        if ( (_DWORD)v125 == HIDWORD(v125) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(v170, v105);
          sub_21E8AF4((int *)v125, v105);
          *(_DWORD *)(v177 + 684) += 4;
      else if ( v226 )
        v126 = *(_QWORD *)(v177 + 756);
        if ( (_DWORD)v126 == HIDWORD(v126) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
            (unsigned __int64 *)(v177 + 752),
            v105);
          sub_21E8AF4((int *)v126, v105);
          *(_DWORD *)(v177 + 756) += 4;
        v127 = *(_QWORD *)(v177 + 720);
        if ( (_DWORD)v127 == HIDWORD(v127) )
            (unsigned __int64 *)(v177 + 716),
          sub_21E8AF4((int *)v127, v105);
          *(_DWORD *)(v177 + 720) += 4;
      v211 = v105;
      Realms::InvitedPlayer::InvitedPlayer((Realms::InvitedPlayer *)&v212, (const Realms::InvitedPlayer *)&v219);
      v213 = v226;
      v214 = v227;
      v215 = v228;
      std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string const&,RealmPlayer>>(
        &v210,
        v174,
        (int)&v211);
      Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v212);
      Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v219);
      v103 = *v122;
      v107 = &unk_28898CC;
    while ( v103 );
  v131 = (int)v240;
  if ( v240 )
    v172 = (int *)((unsigned int)&v199 | 4);
      MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v209, *(_DWORD *)(v102 + 424));
      v134 = (char *)v209;
      v135 = *(_DWORD **)(v131 + 4);
      v136 = (char *)v209 - 12;
      v137 = *(v135 - 3);
      if ( v137 == *((_DWORD *)v209 - 3) )
        v138 = memcmp(v135, v209, v137) != 0;
        v138 = 1;
      if ( (int *)v136 != &dword_28898C0 )
        v132 = (unsigned int *)(v134 - 4);
            v133 = __ldrex(v132);
          while ( __strex(v133 - 1, v132) );
          v133 = (*v132)--;
        if ( v133 <= 0 )
          j_j_j_j__ZdlPv_9(v136);
      if ( v138 == 1 )
        v199 = &unk_28898CC;
        v200 = &unk_28898CC;
        sub_21E94B4((void **)&v201, (const char *)&unk_257BC67);
        v202 = &unk_28898CC;
        v203 = 0;
        v208 = 0;
        EntityInteraction::setInteractText(v172, (int *)(v131 + 4));
        EntityInteraction::setInteractText((int *)&v199, (int *)(v131 + 8));
        sub_21E8190((void **)&v201, (char *)&unk_257BC67, 0);
        EntityInteraction::setInteractText((int *)&v202, (int *)(v131 + 20));
        v203 = 2;
        v205 = *(_BYTE *)(v131 + 30);
        v204 = 1;
        v206 = 0;
        LOBYTE(v208) = *(_BYTE *)(v131 + 28);
        v139 = 3;
        if ( (_BYTE)v208 )
          v139 = 2;
        v207 = v139;
        v140 = *(_QWORD *)(v102 + 684);
        if ( (_DWORD)v140 == HIDWORD(v140) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(v170, v172);
          sub_21E8AF4((int *)v140, v172);
          *(_DWORD *)(v102 + 684) += 4;
        v194 = (unsigned int)&v199 | 4;
        Realms::InvitedPlayer::InvitedPlayer((Realms::InvitedPlayer *)&v195, (const Realms::InvitedPlayer *)&v199);
        v196 = v206;
        v197 = v207;
        v198 = v208;
        std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string const&,RealmPlayer>>(
          &v193,
          v174,
          (int)&v194);
        Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v195);
        Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v199);
      v131 = *(_DWORD *)v131;
    while ( v131 );
  v141 = *v171;
  v173 = *v171 >> 32;
  if ( v141 != v173 )
    HIDWORD(v142) = 0;
    LODWORD(v142) = &unk_28898CC;
      v184 = &unk_28898CC;
      v185 = &unk_28898CC;
      sub_21E94B4((void **)&v186, (const char *)&unk_257BC67);
      v187 = v142;
      v192 = HIDWORD(v142);
      EntityInteraction::setInteractText((int *)((unsigned int)&v184 | 4), (int *)(v141 + 4));
      EntityInteraction::setInteractText((int *)&v184, (int *)v141);
      sub_21E8190((void **)&v186, (char *)&unk_257BC67, 0);
      EntityInteraction::setInteractText((int *)&v187, (int *)(v141 + 12));
      HIDWORD(v187) = 2;
      v189 = 0;
      v188 = 0;
      v190 = 1;
      LOBYTE(v192) = 0;
      v191 = 3;
      v143 = *(_QWORD *)(v102 + 792);
      if ( (_DWORD)v143 == HIDWORD(v143) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
          (unsigned __int64 *)(v102 + 788),
          (int *)((unsigned int)&v184 | 4));
        sub_21E8AF4((int *)v143, (int *)((unsigned int)&v184 | 4));
        *(_DWORD *)(v102 + 792) += 4;
      RealmsWhitelistScreenController::_clearFromFriendLists(v102, (int *)((unsigned int)&v184 | 4));
      v179 = (unsigned int)&v184 | 4;
      Realms::InvitedPlayer::InvitedPlayer((Realms::InvitedPlayer *)&v180, (const Realms::InvitedPlayer *)&v184);
      v181 = v190;
      v182 = v191;
      v183 = v192;
        &v178,
        (int)&v179);
      Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v180);
      Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v184);
      v141 += 24;
    while ( v173 != v141 );
  v144 = *(_QWORD *)(v102 + 680);
  if ( (_DWORD)v144 != HIDWORD(v144) )
    sub_1224AB8(v144, (int *)HIDWORD(v144), 2 * (31 - __clz((HIDWORD(v144) - (signed int)v144) >> 2)), v102);
    if ( HIDWORD(v144) - (signed int)v144 < 65 )
      sub_1225270(v144, (int **)HIDWORD(v144), v102);
    else
      v145 = (int *)(v144 + 64);
      sub_1225270(v144, (int **)(v144 + 64), v102);
      if ( (_DWORD)v144 + 64 != HIDWORD(v144) )
        HIDWORD(v144) -= 64;
          sub_12253A4(v145, v102);
          v145 = (int *)(v144 + 68);
          v128 = HIDWORD(v144) == (_DWORD)v144 + 4;
          LODWORD(v144) = v144 + 4;
        while ( !v128 );
  v146 = *(_QWORD *)(v102 + 716);
  if ( (_DWORD)v146 != HIDWORD(v146) )
    sub_1224AB8(v146, (int *)HIDWORD(v146), 2 * (31 - __clz((HIDWORD(v146) - (signed int)v146) >> 2)), v102);
    if ( HIDWORD(v146) - (signed int)v146 < 65 )
      sub_1225270(v146, (int **)HIDWORD(v146), v102);
      v147 = (int *)(v146 + 64);
      sub_1225270(v146, (int **)(v146 + 64), v102);
      if ( (_DWORD)v146 + 64 != HIDWORD(v146) )
        HIDWORD(v146) -= 64;
          sub_12253A4(v147, v102);
          v147 = (int *)(v146 + 68);
          v128 = HIDWORD(v146) == (_DWORD)v146 + 4;
          LODWORD(v146) = v146 + 4;
  v148 = *(_QWORD *)(v102 + 752);
  if ( (_DWORD)v148 != HIDWORD(v148) )
    sub_1224AB8(v148, (int *)HIDWORD(v148), 2 * (31 - __clz((HIDWORD(v148) - (signed int)v148) >> 2)), v102);
    if ( HIDWORD(v148) - (signed int)v148 < 65 )
      sub_1225270(v148, (int **)HIDWORD(v148), v102);
      v149 = (int *)(v148 + 64);
      sub_1225270(v148, (int **)(v148 + 64), v102);
      if ( (_DWORD)v148 + 64 != HIDWORD(v148) )
        HIDWORD(v148) -= 64;
          sub_12253A4(v149, v102);
          v149 = (int *)(v148 + 68);
          v128 = HIDWORD(v148) == (_DWORD)v148 + 4;
          LODWORD(v148) = v148 + 4;
  v150 = *(_QWORD *)(v102 + 788);
  if ( (_DWORD)v150 != HIDWORD(v150) )
    sub_1224AB8(v150, (int *)HIDWORD(v150), 2 * (31 - __clz((HIDWORD(v150) - (signed int)v150) >> 2)), v102);
    if ( HIDWORD(v150) - (signed int)v150 < 65 )
      sub_1225270(v150, (int **)HIDWORD(v150), v102);
      v151 = (int *)(v150 + 64);
      sub_1225270(v150, (int **)(v150 + 64), v102);
      if ( (_DWORD)v150 + 64 != HIDWORD(v150) )
        HIDWORD(v150) -= 64;
          sub_12253A4(v151, v102);
          v151 = (int *)(v150 + 68);
          v128 = HIDWORD(v150) == (_DWORD)v150 + 4;
          LODWORD(v150) = v150 + 4;
  RealmsWhitelistScreenController::_updatePlayerlistModel(v102, (const void **)(v102 + 632), 0, 1, v169);
  RealmsWhitelistScreenController::_updatePlayerlistModel(v102, (const void **)(v102 + 628), 1, 1, v152);
  RealmsWhitelistScreenController::_updatePlayerlistModel(v102, (const void **)(v102 + 624), 2, 1, v153);
  RealmsWhitelistScreenController::_updatePlayerlistModel(v102, (const void **)(v102 + 636), 3, 1, v154);
  *(_BYTE *)(v102 + 474) = 0;
  *(_BYTE *)(v102 + 485) = 1;
  v155 = v232;
  while ( v155 )
    v158 = v155;
    v159 = (Social::XboxProfile *)(v155 + 2);
    v155 = (_DWORD *)*v155;
    Social::XboxProfile::~XboxProfile(v159);
    v160 = v158[1];
    v161 = (void *)(v160 - 12);
    if ( (int *)(v160 - 12) != &dword_28898C0 )
      v156 = (unsigned int *)(v160 - 4);
          v157 = __ldrex(v156);
        while ( __strex(v157 - 1, v156) );
        v157 = (*v156)--;
      if ( v157 <= 0 )
        j_j_j_j__ZdlPv_9(v161);
    operator delete(v158);
  _aeabi_memclr4(ptr, 4 * v231);
  v232 = 0;
  v233 = 0;
  if ( ptr && &v234 != ptr )
    operator delete(ptr);
  v162 = v240;
  while ( v162 )
    v165 = v162;
    v166 = (Realms::InvitedPlayer *)(v162 + 2);
    v162 = (_DWORD *)*v162;
    Realms::InvitedPlayer::~InvitedPlayer(v166);
    v167 = v165[1];
    v168 = (void *)(v167 - 12);
    if ( (int *)(v167 - 12) != &dword_28898C0 )
      v163 = (unsigned int *)(v167 - 4);
          v164 = __ldrex(v163);
        while ( __strex(v164 - 1, v163) );
        v164 = (*v163)--;
      if ( v164 <= 0 )
        j_j_j_j__ZdlPv_9(v168);
    operator delete(v165);
  _aeabi_memclr4(v238, 4 * v239);
  if ( v238 )
    if ( &v244 != v238 )
      operator delete(v238);
}


void __fastcall RealmsWhitelistScreenController::_registerEventHandlers(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController::_registerEventHandlers(this);
}


void __fastcall RealmsWhitelistScreenController::_updateFriendsList(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r8@1
  int v2; // r11@1
  unsigned __int64 *v3; // r7@2
  int **v4; // r0@3
  int *v5; // r1@3
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // r0@13
  size_t v9; // r2@15
  void *v10; // r0@19
  __int64 v11; // r0@20
  int *v12; // r6@26
  int v13; // r4@26
  int *v14; // r7@28
  int v15; // r6@29
  bool v16; // zf@30
  int v17; // ST00_4@34
  int v18; // ST00_4@34
  int v19; // ST00_4@34
  _DWORD *v20; // r7@34
  unsigned int *v21; // r2@36
  signed int v22; // r1@38
  _DWORD *v23; // r5@44
  Social::XboxProfile *v24; // r0@44
  int v25; // r1@44
  void *v26; // r0@44
  int (**v27)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+0h] [bp-D8h]@0
  int *v28; // [sp+24h] [bp-B4h]@2
  char v29; // [sp+28h] [bp-B0h]@23
  unsigned int v30; // [sp+30h] [bp-A8h]@23
  int v31; // [sp+34h] [bp-A4h]@23
  int v32; // [sp+4Ch] [bp-8Ch]@23
  int v33; // [sp+50h] [bp-88h]@23
  int v34; // [sp+54h] [bp-84h]@23
  int v35; // [sp+5Ch] [bp-7Ch]@4
  void *v36; // [sp+60h] [bp-78h]@18
  int v37; // [sp+64h] [bp-74h]@18
  void *s1; // [sp+68h] [bp-70h]@2
  void *v39; // [sp+6Ch] [bp-6Ch]@13
  void *s2; // [sp+70h] [bp-68h]@13
  void *v41; // [sp+74h] [bp-64h]@13
  int v42; // [sp+78h] [bp-60h]@13
  char v43; // [sp+7Dh] [bp-5Bh]@15
  char v44; // [sp+7Eh] [bp-5Ah]@15
  int v45; // [sp+80h] [bp-58h]@15
  int v46; // [sp+84h] [bp-54h]@15
  int v47; // [sp+88h] [bp-50h]@13
  char v48; // [sp+8Ch] [bp-4Ch]@1
  void *ptr; // [sp+90h] [bp-48h]@46
  int v50; // [sp+94h] [bp-44h]@46
  _DWORD *v51; // [sp+98h] [bp-40h]@1
  int v52; // [sp+9Ch] [bp-3Ch]@46
  int v53; // [sp+A8h] [bp-30h]@47

  v1 = this;
  MinecraftScreenModel::getXboxLiveFriends((MinecraftScreenModel *)&v48, *((_DWORD *)this + 106));
  v2 = (int)v51;
  if ( v51 )
  {
    v28 = (int *)((unsigned int)&s1 | 4);
    v3 = (unsigned __int64 *)((char *)v1 + 640);
    v27 = &pthread_create;
    do
    {
      if ( !std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              v3,
              (int **)(v2 + 4)) )
      {
        s1 = &unk_28898CC;
        v39 = &unk_28898CC;
        sub_21E94B4(&s2, (const char *)&unk_257BC67);
        v41 = &unk_28898CC;
        v42 = 0;
        v47 = 0;
        EntityInteraction::setInteractText(v28, (int *)(v2 + 4));
        EntityInteraction::setInteractText((int *)&s1, (int *)(v2 + 12));
        EntityInteraction::setInteractText((int *)&s2, (int *)(v2 + 16));
        EntityInteraction::setInteractText((int *)&v41, (int *)(v2 + 24));
        v42 = 2;
        v8 = *(_DWORD *)(v2 + 36);
        if ( v8 != 1 )
          LOBYTE(v8) = 0;
        v44 = v8;
        v43 = 0;
        v45 = 1;
        LOBYTE(v47) = 0;
        v46 = 3;
        v9 = *((_DWORD *)s1 - 3);
        if ( v9 == *((_DWORD *)s2 - 3) && !memcmp(s1, s2, v9) )
          sub_21E8190(&s2, (char *)&unk_257BC67, 0);
        v36 = v41;
        v37 = *((_DWORD *)v41 - 3);
        if ( !Core::FileSystem::fileOrDirectoryExists((__int64 *)&v36) )
        {
          v42 = 0;
          sub_21E94B4((void **)&v35, "textures/ui/gamerpic");
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v41,
            &v35);
          v10 = (void *)(v35 - 12);
          if ( (int *)(v35 - 12) != &dword_28898C0 )
          {
            v6 = (unsigned int *)(v35 - 4);
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
              j_j_j_j__ZdlPv_9(v10);
          }
        }
        v11 = *(_QWORD *)((char *)v1 + 756);
        if ( (_DWORD)v11 == HIDWORD(v11) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
            (unsigned __int64 *)v1 + 94,
            v28);
        else
          sub_21E8AF4((int *)v11, v28);
          *((_DWORD *)v1 + 189) += 4;
        v30 = (unsigned int)&s1 | 4;
        Realms::InvitedPlayer::InvitedPlayer((Realms::InvitedPlayer *)&v31, (const Realms::InvitedPlayer *)&s1);
        v32 = v45;
        v33 = v46;
        v34 = v47;
        v3 = (unsigned __int64 *)((char *)v1 + 640);
        std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string const&,RealmPlayer>>(
          &v29,
          (int)v1 + 640,
          (int)&v30);
        Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&v31);
        Realms::InvitedPlayer::~InvitedPlayer((Realms::InvitedPlayer *)&s1);
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v4 = (int **)((char *)v1 + 756);
    v5 = (int *)((char *)v1 + 752);
  }
  else
  v12 = *v4;
  v13 = *v5;
  if ( (int *)*v5 != *v4 )
    sub_1224AB8(*v5, v12, 2 * (31 - __clz(((signed int)v12 - v13) >> 2)), (int)v1);
    if ( (signed int)v12 - v13 < 65 )
      sub_1225270(v13, (int **)v12, (int)v1);
    else
      v14 = (int *)(v13 + 64);
      sub_1225270(v13, (int **)(v13 + 64), (int)v1);
      if ( (int *)(v13 + 64) != v12 )
        v15 = (int)(v12 - 16);
        do
          sub_12253A4(v14, (int)v1);
          v14 = (int *)(v13 + 68);
          v16 = v15 == v13 + 4;
          v13 += 4;
        while ( !v16 );
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v1, (const void **)v1 + 158, 0, 1, (int)v27);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v1, (const void **)v1 + 157, 1, 1, v17);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v1, (const void **)v1 + 156, 2, 1, v18);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v1, (const void **)v1 + 159, 3, 1, v19);
  *((_BYTE *)v1 + 432) = 0;
  v20 = v51;
  while ( v20 )
    v23 = v20;
    v24 = (Social::XboxProfile *)(v20 + 2);
    v20 = (_DWORD *)*v20;
    Social::XboxProfile::~XboxProfile(v24);
    v25 = v23[1];
    v26 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    operator delete(v23);
  _aeabi_memclr4(ptr, 4 * v50);
  v51 = 0;
  v52 = 0;
  if ( ptr )
    if ( &v53 != ptr )
      operator delete(ptr);
}


int __fastcall RealmsWhitelistScreenController::_getPageOffset(int a1, int a2)
{
  unsigned __int8 v2; // cf@0
  char v3; // zf@0
  int result; // r0@2
  int v5; // r0@4

  if ( !v3 & v2 )
  {
    result = 0;
  }
  else
    switch ( a2 )
    {
      case 0:
        v5 = *(_DWORD *)(a1 + 616);
        break;
      case 2:
        v5 = *(_DWORD *)(a1 + 608);
      case 3:
        v5 = *(_DWORD *)(a1 + 620);
      case 1:
        v5 = *(_DWORD *)(a1 + 612);
    }
    result = 10 * v5;
  return result;
}


void __fastcall RealmsWhitelistScreenController::_getPageLabel(Util *a1, int a2, int a3)
{
  int v3; // lr@2
  __int64 v4; // r2@2
  unsigned int v5; // r5@2
  const char *v6; // r1@2
  int v7; // r12@5
  unsigned int v8; // r3@5
  unsigned int v9; // r4@5
  int v10; // r4@9

  switch ( a3 )
  {
    case 0:
      v3 = *(_DWORD *)(a2 + 616);
      HIDWORD(v4) = (signed int)((*(_QWORD *)(a2 + 668) >> 32) - *(_QWORD *)(a2 + 668)) >> 2;
      v5 = 3435973837u * (unsigned __int64)HIDWORD(v4) >> 32;
      v6 = "%d/%d";
      goto LABEL_9;
    case 1:
      v3 = *(_DWORD *)(a2 + 612);
      HIDWORD(v4) = (signed int)((*(_QWORD *)(a2 + 704) >> 32) - *(_QWORD *)(a2 + 704)) >> 2;
    case 2:
      v7 = *(_DWORD *)(a2 + 608);
      v8 = (signed int)((*(_QWORD *)(a2 + 740) >> 32) - *(_QWORD *)(a2 + 740)) >> 2;
      v9 = v8 / 0xA;
      if ( !(v8 % 0xA) )
        v9 = v8 / 0xA - 1;
      LODWORD(v4) = v7 + 1;
      HIDWORD(v4) = v9 + 1;
      goto LABEL_12;
    case 3:
      v3 = *(_DWORD *)(a2 + 620);
      HIDWORD(v4) = (signed int)((*(_QWORD *)(a2 + 776) >> 32) - *(_QWORD *)(a2 + 776)) >> 2;
LABEL_9:
      v10 = v5 >> 3;
      LODWORD(v4) = v3 + 1;
      if ( HIDWORD(v4) == 10 * (v5 >> 3) )
        v10 = (v5 >> 3) - 1;
      HIDWORD(v4) = v10 + 1;
LABEL_12:
      Util::format(a1, v6, v4);
      break;
    default:
      sub_21E94B4((void **)a1, (const char *)&unk_257BC67);
  }
}


signed int __fastcall RealmsWhitelistScreenController::_handleCopyClick(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r4@1
  void *v2; // r0@3
  int v3; // r0@5
  int v5; // [sp+4h] [bp-14h]@5

  v1 = this;
  if ( *((_BYTE *)this + 591) )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v2 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v2 + 180))();
    v3 = *((_DWORD *)v1 + 95);
    v5 = 2;
    MinecraftScreenModel::triggerRealmShared(v3, (const char **)v1 + 119, &v5, (__int64 *)v1 + 61);
  }
  return 8;
}


void __fastcall RealmsWhitelistScreenController::_backup(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r4@1
  int v2; // r5@1
  float v3; // r0@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = *((_DWORD *)this + 106);
  v3 = COERCE_FLOAT(_aeabi_l2f(*((_QWORD *)this + 61), *((_QWORD *)this + 61) >> 32));
  Util::toString((Util *)&v7, v3);
  MainMenuScreenModel::navigateToFileDownloadFile(v2, &v7, (int *)v1 + 125);
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


signed int __fastcall RealmsWhitelistScreenController::_handleShareByLinkClick(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r5@1
  int v2; // r0@1
  void *v3; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+8h] [bp-48h]@1
  char v8; // [sp+Fh] [bp-41h]@1
  char v9; // [sp+10h] [bp-40h]@1

  v1 = this;
  v2 = UIPropertyBag::UIPropertyBag((int)&v9);
  UIPropertyBag::set<char [13]>(v2, 4, "name", "popup_dialog");
  v8 = 1;
  UIPropertyBag::set<bool>((int)&v9, 9, "exclusive", &v8);
  UIPropertyBag::set<char [14]>((int)&v9, 10, "control_id", "share_by_link");
  sub_21E94B4((void **)&v7, "popup_dialog_factory");
  if ( !*((_DWORD *)v1 + 3) )
    sub_21E5F48();
  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v7, &v9);
  v3 = (void *)(v7 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *((_BYTE *)v1 + 485) = 1;
  sub_21E8190((void **)v1 + 203, "controller.buttonTip.back", (_BYTE *)0x19);
  UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v9);
  return 1;
}


int __fastcall RealmsWhitelistScreenController::_getListFromCollection(RealmsWhitelistScreenController *this, UIPropertyBag *a2)
{
  RealmsWhitelistScreenController *v2; // r4@1
  UIPropertyBag *v3; // r5@1
  Json::Value *v4; // r5@1
  Json::Value *v5; // r5@3
  char *v6; // r1@4
  char *v7; // r0@6
  int v8; // r4@10
  char *v9; // r0@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  char *v15; // [sp+4h] [bp-2Ch]@1
  char *v16; // [sp+8h] [bp-28h]@4
  char v17; // [sp+10h] [bp-20h]@4

  v2 = this;
  v3 = a2;
  sub_21E8AF4((int *)&v15, (int *)&Util::EMPTY_STRING);
  v4 = (UIPropertyBag *)((char *)v3 + 8);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_name"), Json::Value::isString(v5) != 1) )
  {
    v16 = v15;
    v6 = (char *)&unk_28898CC;
    v15 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v16, (int)&v17, (int)v5);
    v6 = v15;
  v7 = v6 - 12;
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
  if ( sub_21E7D6C((const void **)&v16, "members_collection") )
    if ( sub_21E7D6C((const void **)&v16, "invited_friends_collection") )
      if ( sub_21E7D6C((const void **)&v16, "uninvited_friends_collection") )
        v8 = (int)v2 + 776;
      else
        v8 = (int)v2 + 740;
      v8 = (int)v2 + 704;
    v8 = (int)v2 + 668;
  v9 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v8;
}


void __fastcall RealmsWhitelistScreenController::_handleUpdateFailed(int a1, int a2)
{
  RealmsWhitelistScreenController::_handleUpdateFailed(a1, a2);
}


signed int __fastcall RealmsWhitelistScreenController::_getGamepadHelperVisible(RealmsWhitelistScreenController *this)
{
  MinecraftScreenController *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  if ( MinecraftScreenController::_getGamepadHelperVisible(this) == 1
    && MinecraftScreenController::getHoloUIInputMode(v1) != 2 )
  {
    v2 = 1;
  }
  return v2;
}


int __fastcall RealmsWhitelistScreenController::_handleShareClick(RealmsWhitelistScreenController *this)
{
  RealmsWhitelistScreenController *v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  int v5; // [sp+4h] [bp-14h]@4

  v1 = this;
  *((_BYTE *)this + 591) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (**)(void))(**(_DWORD **)v2 + 188))();
  v3 = *((_DWORD *)v1 + 95);
  v5 = 1;
  MinecraftScreenModel::triggerRealmShared(v3, (const char **)v1 + 119, &v5, (__int64 *)v1 + 61);
  *((_BYTE *)v1 + 591) = 1;
  return 0;
}


void __fastcall RealmsWhitelistScreenController::_initializeInviteLink(int a1, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *v4; // r0@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@9
  int v8; // r5@11
  void *v9; // r0@11
  void *v10; // r0@12
  void *v11; // r0@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  int v18; // [sp+4h] [bp-2Ch]@11
  int v19; // [sp+Ch] [bp-24h]@11
  int v20; // [sp+10h] [bp-20h]@11
  int v21; // [sp+14h] [bp-1Ch]@2

  v2 = a1;
  v3 = (int *)(a1 + 476);
  EntityInteraction::setInteractText((int *)(a1 + 476), (int *)(a2 + 24));
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 476) - 12) < 8u )
  {
    sub_21E8190((void **)(v2 + 480), (char *)&unk_257BC67, 0);
  }
  else
    sub_21E9040((void **)&v21, v3, 8u, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v2 + 480),
      &v21);
    v4 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v21 - 4);
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
  *(_WORD *)(v2 + 484) = 256;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v7 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v7 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  v8 = *v7;
  sub_21E94B4((void **)&v19, "realmsInvitationScreen.shareTitle");
  I18n::get(&v20, (int **)&v19);
  sub_21E8AF4(&v18, v3);
  AppPlatform::setShareData(v8, &v20, &v18);
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}
