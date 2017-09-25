

void __fastcall PackManifestFactory::create(PackManifest **a1, void *a2, int a3, int a4, int a5, int a6)
{
  PackManifestFactory::create(a1, a2, a3, a4, a5, a6);
}


_DWORD *__fastcall PackManifestFactory::PackManifestFactory(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


void __fastcall PackManifestFactory::create(PackManifest **a1, void *a2, int a3, int a4, int a5, int a6)
{
  PackManifest **v6; // r9@1
  int v7; // r4@1
  int v8; // r10@1
  void *v9; // r6@1
  PackManifest *v10; // r5@1
  PackManifest *v11; // r4@1
  int v12; // r0@1
  void *v13; // r0@3
  char v14; // r0@4
  int v15; // r1@6
  unsigned __int64 v16; // r2@6
  PackManifest *v17; // r0@6
  PackReport *v18; // r7@9
  int *v19; // r4@12
  void *v20; // r0@13
  void *v21; // r0@16
  _DWORD *v22; // r0@17
  _DWORD *v23; // r11@17
  int v24; // r0@17
  int v25; // r8@17
  void *v26; // r4@17
  signed int v27; // r0@17
  unsigned int v28; // r5@17
  int v29; // r5@20
  char *v30; // r1@21
  unsigned int *v31; // r2@22
  signed int v32; // r6@24
  char *v33; // r6@28
  int *v34; // r0@29
  PackReport *v35; // r6@32
  _DWORD *v36; // r7@35
  unsigned int *v37; // r2@36
  signed int v38; // r1@38
  int *v39; // r0@44
  void *v40; // r0@48
  void *v41; // r0@49
  Json::Value *v42; // r0@50
  int v43; // r4@51
  Json::Value *v44; // r0@52
  char *v45; // r0@53
  int v46; // r4@61
  _DWORD *v47; // r6@62
  unsigned int *v48; // r2@63
  signed int v49; // r1@65
  int *v50; // r0@71
  PackManifest *v51; // r9@76
  void **v52; // r0@76
  void *v53; // r0@76
  void *v54; // r0@77
  void *v55; // r4@78
  void *v56; // r6@78
  char *v57; // r1@79
  unsigned int *v58; // r2@80
  signed int v59; // r5@82
  char *v60; // r5@86
  int *v61; // r0@87
  void *v62; // r4@93
  void *v63; // r6@93
  char *v64; // r1@94
  _DWORD *v65; // r0@95
  _DWORD *v66; // r6@95
  int v67; // r0@95
  int v68; // r8@95
  void *v69; // r4@95
  signed int v70; // r0@95
  unsigned int v71; // r5@95
  int v72; // r9@98
  char *v73; // r1@99
  unsigned int *v74; // r2@100
  signed int v75; // r5@102
  char *v76; // r5@106
  int *v77; // r0@107
  _DWORD *v78; // r4@113
  unsigned int *v79; // r2@114
  signed int v80; // r1@116
  int *v81; // r0@122
  void *v82; // r0@126
  unsigned int *v83; // r2@127
  signed int v84; // r1@129
  unsigned int *v85; // r2@132
  signed int v86; // r5@134
  char *v87; // r5@138
  int *v88; // r0@139
  void *v89; // r4@144
  void *v90; // r6@144
  char *v91; // r1@145
  unsigned int *v92; // r2@146
  signed int v93; // r5@148
  char *v94; // r5@152
  int *v95; // r0@153
  int *v96; // r0@158
  void *v97; // r0@158
  void *v98; // r4@159
  void *v99; // r6@159
  char *v100; // r1@160
  unsigned int *v101; // r2@161
  signed int v102; // r5@163
  char *v103; // r5@167
  int *v104; // r0@168
  void *v105; // r4@173
  void *v106; // r6@173
  char *v107; // r1@174
  unsigned int *v108; // r2@175
  signed int v109; // r5@177
  char *v110; // r5@181
  int *v111; // r0@182
  char v112; // r0@187
  PackManifest *v113; // r1@190
  unsigned int *v114; // r2@191
  signed int v115; // r1@193
  unsigned int *v116; // r2@195
  signed int v117; // r1@197
  PackManifest *v118; // r1@199
  void *v119; // r0@199
  void *v120; // r0@201
  char *v121; // r0@204
  PackManifest *v122; // r4@205
  char *v123; // r0@205
  char *v124; // r0@206
  PackManifest *v125; // r4@207
  char *v126; // r0@207
  PackManifest *v127; // r6@210
  PackManifest *v128; // r7@210
  int (__fastcall *v129)(int, int *, char **); // r4@210
  int v130; // r4@210
  double v131; // r0@210
  int v132; // r0@213
  char *v133; // r0@215
  PackManifest *v134; // r0@216
  char *v135; // r0@221
  void *v136; // r0@224
  unsigned int *v137; // r2@226
  signed int v138; // r1@228
  unsigned int *v139; // r2@230
  signed int v140; // r1@232
  unsigned int *v141; // r2@246
  signed int v142; // r1@248
  unsigned int *v143; // r2@250
  signed int v144; // r1@252
  unsigned int *v145; // r2@258
  signed int v146; // r1@260
  unsigned int *v147; // r2@262
  signed int v148; // r1@264
  unsigned int *v149; // r2@266
  unsigned int *v150; // r2@270
  signed int v151; // r1@272
  unsigned int *v152; // r2@296
  signed int v153; // r1@298
  unsigned int *v154; // r2@300
  signed int v155; // r1@302
  unsigned int *v156; // r2@304
  signed int v157; // r1@306
  unsigned int *v158; // r2@319
  signed int v159; // r1@321
  unsigned int *v160; // r2@331
  signed int v161; // r1@333
  void *v162; // [sp+18h] [bp-3B0h]@9
  PackManifest **v163; // [sp+1Ch] [bp-3ACh]@76
  PackManifest **v164; // [sp+1Ch] [bp-3ACh]@95
  int v165; // [sp+20h] [bp-3A8h]@95
  void **v166; // [sp+24h] [bp-3A4h]@95
  void *v167; // [sp+28h] [bp-3A0h]@95
  int v168; // [sp+2Ch] [bp-39Ch]@95
  char *v169; // [sp+30h] [bp-398h]@95
  int v170; // [sp+34h] [bp-394h]@98
  int v171; // [sp+38h] [bp-390h]@98
  int v172; // [sp+3Ch] [bp-38Ch]@201
  char v173; // [sp+40h] [bp-388h]@201
  char v174; // [sp+54h] [bp-374h]@201
  int v175; // [sp+78h] [bp-350h]@199
  char v176; // [sp+7Ch] [bp-34Ch]@199
  char v177; // [sp+A0h] [bp-328h]@199
  char v178; // [sp+B0h] [bp-318h]@11
  void **v179; // [sp+C0h] [bp-308h]@61
  void *ptr; // [sp+C4h] [bp-304h]@61
  int v181; // [sp+C8h] [bp-300h]@61
  int v182; // [sp+CCh] [bp-2FCh]@61
  int v183; // [sp+D0h] [bp-2F8h]@61
  int v184; // [sp+D4h] [bp-2F4h]@61
  char *v185; // [sp+D8h] [bp-2F0h]@9
  int v186; // [sp+DCh] [bp-2ECh]@3
  int v187; // [sp+E0h] [bp-2E8h]@3
  int v188; // [sp+E4h] [bp-2E4h]@3
  char v189; // [sp+E8h] [bp-2E0h]@3
  void (*v190)(void); // [sp+F0h] [bp-2D8h]@222
  char v191; // [sp+F8h] [bp-2D0h]@4
  __int32 v192; // [sp+FCh] [bp-2CCh]@3
  char v193; // [sp+103h] [bp-2C5h]@3
  int v194; // [sp+104h] [bp-2C4h]@1
  int v195; // [sp+108h] [bp-2C0h]@1
  int v196; // [sp+10Ch] [bp-2BCh]@17
  void **v197; // [sp+110h] [bp-2B8h]@17
  void *v198; // [sp+114h] [bp-2B4h]@17
  int v199; // [sp+118h] [bp-2B0h]@17
  char *v200; // [sp+11Ch] [bp-2ACh]@17
  int v201; // [sp+120h] [bp-2A8h]@20
  int v202; // [sp+124h] [bp-2A4h]@20
  int v203; // [sp+128h] [bp-2A0h]@16
  int v204; // [sp+12Ch] [bp-29Ch]@16
  char v205; // [sp+130h] [bp-298h]@15
  int v206; // [sp+1A0h] [bp-228h]@13
  char *v207; // [sp+1A4h] [bp-224h]@11
  __int64 v208; // [sp+1A8h] [bp-220h]@173
  int v209; // [sp+1B0h] [bp-218h]@173
  int v210; // [sp+1BCh] [bp-20Ch]@158
  void *v211; // [sp+1C0h] [bp-208h]@158
  void *v212; // [sp+1C4h] [bp-204h]@158
  int v213; // [sp+1C8h] [bp-200h]@158
  __int64 v214; // [sp+1D0h] [bp-1F8h]@144
  int v215; // [sp+1D8h] [bp-1F0h]@144
  __int64 v216; // [sp+1E0h] [bp-1E8h]@93
  int v217; // [sp+1E8h] [bp-1E0h]@93
  int v218; // [sp+1F4h] [bp-1D4h]@76
  int v219; // [sp+1FCh] [bp-1CCh]@76
  void *v220; // [sp+200h] [bp-1C8h]@76
  void *v221; // [sp+204h] [bp-1C4h]@76
  int v222; // [sp+208h] [bp-1C0h]@76
  char v223; // [sp+210h] [bp-1B8h]@76
  char v224; // [sp+220h] [bp-1A8h]@212
  int v225; // [sp+398h] [bp-30h]@210
  char *v226; // [sp+39Ch] [bp-2Ch]@210
  char v227; // [sp+3A0h] [bp-28h]@21

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (PackManifest *)operator new(0xB0u);
  PackManifest::PackManifest((int)v10, 0);
  *v6 = v10;
  sub_21E8AF4(&v194, (int *)v7);
  v195 = *(_DWORD *)(v7 + 4);
  PackManifest::setLocation(*v6, (const ResourceLocation *)&v194);
  v11 = *v6;
  v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 56))(v8);
  if ( v12 != 1 )
    LOBYTE(v12) = 0;
  v193 = v12;
  PackManifest::setManifestOrigin((int)v11, &v193);
  v192 = 0;
  ResourceLocation::getFullPath((ResourceLocation *)&v186, (int)&v194);
  v187 = v186;
  v188 = *(_DWORD *)(v186 - 12);
  Core::FileSystem::getLastModificationTime((int)&v189, (__int64 *)&v187, (int)&v192);
  v13 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
  {
    v114 = (unsigned int *)(v186 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
    }
    else
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  v14 = v191;
  v191 |= 2u;
  if ( v14 & 1 )
    PackManifest::setLastModifiedDate(*v6, v192);
  LODWORD(v16) = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v17 = *v6;
  if ( ((unsigned int)v16 & v15) == -1 )
    PackManifest::setPackSize(v17, v15, 0LL);
  else
    HIDWORD(v16) = v15;
    PackManifest::setPackSize(v17, v15, v16);
  v162 = v9;
  v185 = (char *)&unk_28898CC;
  v18 = (PackReport *)a5;
  if ( (*(int (__fastcall **)(int, void *, char **))(*(_DWORD *)v8 + 40))(
         v8,
         &PackManifestFactory::MANIFEST_PATH,
         &v185)
    || (*(int (__fastcall **)(int, void *, char **))(*(_DWORD *)v8 + 40))(
         &PackManifestFactory::MANIFEST_PATH_OLD,
         &v185) )
    Json::Value::Value(&v178, 0);
    v207 = (char *)&unk_28898CC;
    if ( Util::isValidUTF8((int *)&v185) )
      v19 = (int *)&v185;
      Util::cp1252ToUTF8((const void **)&v206, &v185);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v207,
        &v206);
      v20 = (void *)(v206 - 12);
      if ( (int *)(v206 - 12) != &dword_28898C0 )
      {
        v141 = (unsigned int *)(v206 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v142 = __ldrex(v141);
          while ( __strex(v142 - 1, v141) );
        }
        else
          v142 = (*v141)--;
        if ( v142 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      }
      v19 = (int *)&v207;
    Json::Reader::Reader((Json::Reader *)&v205);
    if ( !Json::Reader::parse((int)&v205, v19, (int)&v178, 1) )
      Json::Reader::getFormattedErrorMessages((Json::Reader *)&v203, (int)&v205);
      Util::stringTrim(&v204, &v203);
      v21 = (void *)(v203 - 12);
      if ( (int *)(v203 - 12) != &dword_28898C0 )
        v143 = (unsigned int *)(v203 - 4);
            v144 = __ldrex(v143);
          while ( __strex(v144 - 1, v143) );
          v144 = (*v143)--;
        if ( v144 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      sub_21E8AF4(&v196, &v204);
      v22 = operator new(4u);
      v23 = v22;
      v24 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v196,
              (int)&v197,
              (int)v22);
      v25 = v24;
      v26 = 0;
      v197 = &off_26D9084;
      v27 = v24 - (_DWORD)v23;
      v198 = 0;
      v199 = 0;
      v200 = 0;
      v28 = v27 >> 2;
      if ( v27 >> 2 )
        if ( v28 >= 0x40000000 )
          sub_21E57F4();
        v26 = operator new(v27);
      v198 = v26;
      v199 = (int)v26;
      v200 = (char *)v26 + 4 * v28;
      v29 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v23,
              v25,
              (int)v26);
      v199 = v29;
      v201 = 5;
      v202 = 2;
      v197 = &off_26EABBC;
      PackReport::addWarning<PackDiscoveryError>(a5, (int)&v197);
      if ( v26 != (void *)v29 )
        v30 = &v227;
        do
          v34 = (int *)(*(_DWORD *)v26 - 12);
          if ( v34 != &dword_28898C0 )
          {
            v31 = (unsigned int *)(*(_DWORD *)v26 - 4);
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
              v33 = v30;
              j_j_j_j__ZdlPv_9(v34);
              v30 = v33;
          }
          v26 = (char *)v26 + 4;
        while ( v26 != (void *)v29 );
        v26 = v198;
        v18 = (PackReport *)a5;
      v35 = v18;
      if ( v26 )
        operator delete(v26);
      if ( v23 != (_DWORD *)v25 )
        v36 = v23;
          v39 = (int *)(*v36 - 12);
          if ( v39 != &dword_28898C0 )
            v37 = (unsigned int *)(*v36 - 4);
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j__ZdlPv_9(v39);
          ++v36;
        while ( v36 != (_DWORD *)v25 );
      if ( v23 )
        operator delete(v23);
      v40 = (void *)(v196 - 12);
      if ( (int *)(v196 - 12) != &dword_28898C0 )
        v145 = (unsigned int *)(v196 - 4);
            v146 = __ldrex(v145);
          while ( __strex(v146 - 1, v145) );
          v146 = (*v145)--;
        if ( v146 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      v18 = v35;
      v41 = (void *)(v204 - 12);
      if ( (int *)(v204 - 12) != &dword_28898C0 )
        v147 = (unsigned int *)(v204 - 4);
            v148 = __ldrex(v147);
          while ( __strex(v148 - 1, v147) );
          v18 = v35;
          v148 = (*v147)--;
        if ( v148 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
    v42 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v178, (const char **)&unk_27EC9C4);
    if ( Json::Value::isNull(v42) )
      v43 = 0;
      v44 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v178, (const char **)&unk_27EC9C4);
      v43 = Json::Value::asInt(v44, 0);
    Json::Reader::~Reader((Json::Reader *)&v205);
    v45 = v207 - 12;
    if ( (int *)(v207 - 12) != &dword_28898C0 )
      v116 = (unsigned int *)(v207 - 4);
      if ( &pthread_create )
        __dmb();
          v117 = __ldrex(v116);
        while ( __strex(v117 - 1, v116) );
      else
        v117 = (*v116)--;
      if ( v117 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    if ( !PackReport::hasErrors((int)v18, 2) )
      PackManifest::setFormatVersion(*v6, 1);
      if ( v43 )
        if ( v43 == 1 )
          sub_156F29C((int)&v178, *v6, (int)v18, a6);
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 28))(v8) == 1
            && ((*(int (__fastcall **)(int, void *))(*(_DWORD *)v8 + 32))(
                  v8,
                  &PackManifestFactory::MANIFEST_PATH_OLD_BACKUP)
             || (*(int (__fastcall **)(int, void *))(*(_DWORD *)v8 + 32))(v8, &PackManifestFactory::MANIFEST_LOG_PATH) == 1) )
            PackManifest::setOriginalFormatVersion(*v6, 0);
          else
            PackManifest::setOriginalFormatVersion(*v6, 1);
          v164 = v6;
          Util::toString<int,(void *)0,(void *)0>((void **)&v165, v43);
          v65 = operator new(4u);
          v66 = v65;
          v67 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v165,
                  (int)&v166,
                  (int)v65);
          v68 = v67;
          v69 = 0;
          v166 = &off_26D9084;
          v70 = v67 - (_DWORD)v66;
          v167 = 0;
          v168 = 0;
          v169 = 0;
          v71 = v70 >> 2;
          if ( v70 >> 2 )
            if ( v71 >= 0x40000000 )
              sub_21E57F4();
            v69 = operator new(v70);
          v167 = v69;
          v168 = (int)v69;
          v169 = (char *)v69 + 4 * v71;
          v72 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                  (int)v66,
                  v68,
                  (int)v69);
          v168 = v72;
          v170 = 23;
          v171 = 2;
          v166 = &off_26EABBC;
          PackReport::addError<PackDiscoveryError>((int)v18, (int)&v166);
          if ( v69 != (void *)v72 )
            v73 = &v227;
            do
              v77 = (int *)(*(_DWORD *)v69 - 12);
              if ( v77 != &dword_28898C0 )
              {
                v74 = (unsigned int *)(*(_DWORD *)v69 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v75 = __ldrex(v74);
                  while ( __strex(v75 - 1, v74) );
                }
                else
                  v75 = (*v74)--;
                if ( v75 <= 0 )
                  v76 = v73;
                  j_j_j_j__ZdlPv_9(v77);
                  v73 = v76;
              }
              v69 = (char *)v69 + 4;
            while ( v69 != (void *)v72 );
            v69 = v167;
          if ( v69 )
            operator delete(v69);
          if ( v66 != (_DWORD *)v68 )
            v78 = v66;
              v81 = (int *)(*v78 - 12);
              if ( v81 != &dword_28898C0 )
                v79 = (unsigned int *)(*v78 - 4);
                    v80 = __ldrex(v79);
                  while ( __strex(v80 - 1, v79) );
                  v80 = (*v79)--;
                if ( v80 <= 0 )
                  j_j_j_j__ZdlPv_9(v81);
              ++v78;
            while ( v78 != (_DWORD *)v68 );
          if ( v66 )
            operator delete(v66);
          v6 = v164;
          v82 = (void *)(v165 - 12);
          if ( (int *)(v165 - 12) != &dword_28898C0 )
            v83 = (unsigned int *)(v165 - 4);
                v84 = __ldrex(v83);
              while ( __strex(v84 - 1, v83) );
              v84 = (*v83)--;
            if ( v84 <= 0 )
              j_j_j_j__ZdlPv_9(v82);
        PackReport::setAttemptedUpgrade(v18);
        v163 = v6;
        v51 = *v6;
        v222 = 0;
        v220 = 0;
        v221 = 0;
        sub_21E94B4((void **)&v219, "packs_version");
        v52 = sub_21E94B4((void **)&v218, "pack_id");
        sub_1571DC4(
          (Json::Value *)&v223,
          (int)&v178,
          (int)&v220,
          v51,
          (int)v18,
          1,
          (const char **)&v219,
          (const char **)v52);
        v53 = (void *)(v218 - 12);
        if ( (int *)(v218 - 12) != &dword_28898C0 )
          v152 = (unsigned int *)(v218 - 4);
          if ( &pthread_create )
            __dmb();
              v153 = __ldrex(v152);
            while ( __strex(v153 - 1, v152) );
            v153 = (*v152)--;
          if ( v153 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
        v54 = (void *)(v219 - 12);
        if ( (int *)(v219 - 12) != &dword_28898C0 )
          v154 = (unsigned int *)(v219 - 4);
              v155 = __ldrex(v154);
            while ( __strex(v155 - 1, v154) );
            v155 = (*v154)--;
          if ( v155 <= 0 )
            j_j_j_j__ZdlPv_9(v54);
        v56 = v221;
        v55 = v220;
        if ( v220 != v221 )
          v57 = &v227;
            v61 = (int *)(*(_DWORD *)v55 - 12);
            if ( v61 != &dword_28898C0 )
              v58 = (unsigned int *)(*(_DWORD *)v55 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
              else
                v59 = (*v58)--;
              if ( v59 <= 0 )
                v60 = v57;
                j_j_j_j__ZdlPv_9(v61);
                v57 = v60;
            v55 = (char *)v55 + 4;
          while ( v55 != v56 );
          v55 = v220;
        if ( v55 )
          operator delete(v55);
        if ( !PackReport::hasErrors((int)v18, 2) )
          v217 = 0;
          v216 = 0LL;
          sub_1573B98((int)&v223, (int)&v216, v51, (int)v18, 1, 1);
          v63 = (void *)HIDWORD(v216);
          v62 = (void *)v216;
          if ( (_DWORD)v216 != HIDWORD(v216) )
            v64 = &v227;
              v88 = (int *)(*(_DWORD *)v62 - 12);
              if ( v88 != &dword_28898C0 )
                v85 = (unsigned int *)(*(_DWORD *)v62 - 4);
                    v86 = __ldrex(v85);
                  while ( __strex(v86 - 1, v85) );
                  v86 = (*v85)--;
                if ( v86 <= 0 )
                  v87 = v64;
                  j_j_j_j__ZdlPv_9(v88);
                  v64 = v87;
              v62 = (char *)v62 + 4;
            while ( v62 != v63 );
            v62 = (void *)v216;
            v18 = (PackReport *)a5;
          if ( v62 )
            operator delete(v62);
          v215 = 0;
          v214 = 0LL;
          sub_15769E0((int)&v223, (int)&v214, v51, (int)v18);
          v90 = (void *)HIDWORD(v214);
          v89 = (void *)v214;
          if ( (_DWORD)v214 != HIDWORD(v214) )
            v91 = &v227;
              v95 = (int *)(*(_DWORD *)v89 - 12);
              if ( v95 != &dword_28898C0 )
                v92 = (unsigned int *)(*(_DWORD *)v89 - 4);
                    v93 = __ldrex(v92);
                  while ( __strex(v93 - 1, v92) );
                  v93 = (*v92)--;
                if ( v93 <= 0 )
                  v94 = v91;
                  j_j_j_j__ZdlPv_9(v95);
                  v91 = v94;
              v89 = (char *)v89 + 4;
            while ( v89 != v90 );
            v89 = (void *)v214;
          if ( v89 )
            operator delete(v89);
          v213 = 0;
          v211 = 0;
          v212 = 0;
          v96 = (int *)sub_21E94B4((void **)&v210, "dependencies");
          sub_1577D68((int)&v223, (int)&v211, v51, (int)v18, 1, v96);
          v97 = (void *)(v210 - 12);
          if ( (int *)(v210 - 12) != &dword_28898C0 )
            v158 = (unsigned int *)(v210 - 4);
                v159 = __ldrex(v158);
              while ( __strex(v159 - 1, v158) );
              v159 = (*v158)--;
            if ( v159 <= 0 )
              j_j_j_j__ZdlPv_9(v97);
          v99 = v212;
          v98 = v211;
          if ( v211 != v212 )
            v100 = &v227;
              v104 = (int *)(*(_DWORD *)v98 - 12);
              if ( v104 != &dword_28898C0 )
                v101 = (unsigned int *)(*(_DWORD *)v98 - 4);
                    v102 = __ldrex(v101);
                  while ( __strex(v102 - 1, v101) );
                  v102 = (*v101)--;
                if ( v102 <= 0 )
                  v103 = v100;
                  j_j_j_j__ZdlPv_9(v104);
                  v100 = v103;
              v98 = (char *)v98 + 4;
            while ( v98 != v99 );
            v98 = v211;
          if ( v98 )
            operator delete(v98);
          v209 = 0;
          v208 = 0LL;
          sub_1578A88((int)&v208, v51, __PAIR__(1, (unsigned int)v18));
          v106 = (void *)HIDWORD(v208);
          v105 = (void *)v208;
          if ( (_DWORD)v208 != HIDWORD(v208) )
            v107 = &v227;
              v111 = (int *)(*(_DWORD *)v105 - 12);
              if ( v111 != &dword_28898C0 )
                v108 = (unsigned int *)(*(_DWORD *)v105 - 4);
                    v109 = __ldrex(v108);
                  while ( __strex(v109 - 1, v108) );
                  v109 = (*v108)--;
                if ( v109 <= 0 )
                  v110 = v107;
                  j_j_j_j__ZdlPv_9(v111);
                  v107 = v110;
              v105 = (char *)v105 + 4;
            while ( v105 != v106 );
            v105 = (void *)v208;
          if ( v105 )
            operator delete(v105);
        v112 = PackManifest::getPackType(v51);
        PackReport::setPackType((int)v18, v112);
        Json::Value::~Value((Json::Value *)&v223);
        v6 = v163;
        PackManifest::setOriginalFormatVersion(*v163, 0);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 28))(v8) == 1 )
          if ( PackReport::hasErrors((int)v18, 2) )
            if ( !(*(int (__fastcall **)(int, void *))(*(_DWORD *)v8 + 32))(v8, &PackManifestFactory::MANIFEST_LOG_PATH) )
              v113 = *v163;
              (*(void (**)(void))(**(_DWORD **)v162 + 8))();
            PackReport::setUpgradeSuccess(v18);
            Json::Value::Value(&v177, 0);
            PackManifest::serialize(*v163, 1, (Json::Value *)&v177);
            Json::StyledWriter::StyledWriter((Json::StyledWriter *)&v176);
            Json::StyledWriter::write(
              (Json::StyledWriter *)&v175,
              (const Json::Value *)&v176,
              (const Json::Value *)&v177);
            (*(void (__fastcall **)(int, void *))(*(_DWORD *)v8 + 44))(v8, &PackManifestFactory::MANIFEST_PATH_OLD);
            (*(void (__fastcall **)(int, void *, int *))(*(_DWORD *)v8 + 48))(
              v8,
              &PackManifestFactory::MANIFEST_PATH,
              &v175);
            (*(void (__fastcall **)(int, void *, char **))(*(_DWORD *)v8 + 48))(
              &PackManifestFactory::MANIFEST_PATH_OLD_BACKUP,
              &v185);
            v118 = *v163;
            (*(void (**)(void))(**(_DWORD **)v162 + 8))();
            v119 = (void *)(v175 - 12);
            if ( (int *)(v175 - 12) != &dword_28898C0 )
              v160 = (unsigned int *)(v175 - 4);
                  v161 = __ldrex(v160);
                while ( __strex(v161 - 1, v160) );
                v161 = (*v160)--;
              if ( v161 <= 0 )
                j_j_j_j__ZdlPv_9(v119);
            Json::StyledWriter::~StyledWriter((Json::StyledWriter *)&v176);
            Json::Value::~Value((Json::Value *)&v177);
        Json::StyledWriter::StyledWriter((Json::StyledWriter *)&v174);
        Json::Value::Value(&v173, 0);
        PackReport::serialize(v18, (Json::Value *)&v173);
        Json::StyledWriter::write((Json::StyledWriter *)&v172, (const Json::Value *)&v174, (const Json::Value *)&v173);
        (*(void (__fastcall **)(int, void *, int *))(*(_DWORD *)v8 + 48))(
          v8,
          &PackManifestFactory::MANIFEST_LOG_PATH,
          &v172);
        v120 = (void *)(v172 - 12);
        if ( (int *)(v172 - 12) != &dword_28898C0 )
          v156 = (unsigned int *)(v172 - 4);
              v157 = __ldrex(v156);
            while ( __strex(v157 - 1, v156) );
            v157 = (*v156)--;
          if ( v157 <= 0 )
            j_j_j_j__ZdlPv_9(v120);
        Json::Value::~Value((Json::Value *)&v173);
        Json::StyledWriter::~StyledWriter((Json::StyledWriter *)&v174);
    if ( *v6 )
      if ( (v121 = PackManifest::getNameRaw(*v6), I18n::isPackKeyword((const void **)v121) == 1)
        && (v122 = *v6, v123 = PackManifest::getNameRaw(*v6), I18n::hasPackKeyEntry(v122, (const void **)v123) != 1)
        || (v124 = PackManifest::getDescriptionRaw(*v6), I18n::isPackKeyword((const void **)v124) == 1)
        && (v125 = *v6, v126 = PackManifest::getDescriptionRaw(*v6), !I18n::hasPackKeyEntry(v125, (const void **)v126)) )
        I18n::loadLanguageKeywordsFromPack(*v6, v8);
    if ( PackManifest::getPackType(*v6) == 3 )
      v127 = *v6;
      *v6 = 0;
      v128 = (PackManifest *)operator new(0xB8u);
      WorldTemplatePackManifest::WorldTemplatePackManifest((int)v128, (int)v127);
      v226 = (char *)&unk_28898CC;
      v129 = *(int (__fastcall **)(int, int *, char **))(*(_DWORD *)v8 + 40);
      sub_21E94B4((void **)&v225, "level.dat");
      v130 = v129(v8, &v225, &v226);
      HIDWORD(v131) = v225;
      LODWORD(v131) = v225 - 12;
      if ( (int *)(v225 - 12) != &dword_28898C0 )
        v149 = (unsigned int *)(v225 - 4);
            HIDWORD(v131) = __ldrex(v149);
          while ( __strex(HIDWORD(v131) - 1, v149) );
          HIDWORD(v131) = (*v149)--;
        if ( SHIDWORD(v131) <= 0 )
          j_j_j_j__ZdlPv_9((void *)LODWORD(v131));
      if ( v130 == 1 )
        LODWORD(v131) = &v224;
        LevelData::LevelData(v131);
        if ( ExternalFileLevelStorage::readLevelDataFromData((unsigned int *)&v226, (LevelData *)&v224) == 1 )
          v132 = LevelData::getGameType((LevelData *)&v224);
          WorldTemplatePackManifest::setGameType((int)v128, v132);
        LevelData::~LevelData((LevelData *)&v224);
      v133 = v226 - 12;
      if ( (int *)(v226 - 12) != &dword_28898C0 )
        v150 = (unsigned int *)(v226 - 4);
            v151 = __ldrex(v150);
          while ( __strex(v151 - 1, v150) );
          v151 = (*v150)--;
        if ( v151 <= 0 )
          j_j_j_j__ZdlPv_9(v133);
      v134 = *v6;
      *v6 = v128;
      if ( v134 )
        (*(void (**)(void))(*(_DWORD *)v134 + 4))();
      if ( v127 )
        (*(void (__fastcall **)(PackManifest *))(*(_DWORD *)v127 + 4))(v127);
    Json::Value::~Value((Json::Value *)&v178);
    v182 = 0;
    ptr = 0;
    v46 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
            0,
            0);
    v181 = v46;
    v183 = 4;
    v184 = 2;
    v179 = &off_26EABBC;
    PackReport::addError<PackDiscoveryError>(a5, (int)&v179);
    v179 = &off_26D9084;
    if ( v46 )
      v47 = 0;
        v50 = (int *)(*v47 - 12);
        if ( v50 != &dword_28898C0 )
          v48 = (unsigned int *)(*v47 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        ++v47;
      while ( v47 != (_DWORD *)v46 );
      if ( ptr )
        operator delete(ptr);
  v135 = v185 - 12;
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v185 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j__ZdlPv_9(v135);
  if ( v190 )
    v190();
  v136 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v194 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j__ZdlPv_9(v136);
}


void __fastcall PackManifestFactory::contentKeyLookup(char **a1, int **a2)
{
  PackManifestFactory::contentKeyLookup(a1, a2);
}


void __fastcall PackManifestFactory::contentKeyLookup(char **a1, int **a2)
{
  char **v2; // r4@1
  int v3; // r0@1
  int v4; // r5@1
  int *v5; // r0@2
  void *v6; // r0@2
  void *v7; // r0@3
  __int64 v8; // r0@4
  unsigned int v9; // r10@5
  int v10; // r2@7
  char *v11; // r1@8
  char v12; // r9@8
  char v13; // r8@8
  int v14; // r0@8
  unsigned int v15; // r4@8
  char *v16; // r0@11
  void *v17; // r0@15
  char *v18; // r1@16
  char *v19; // r0@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  char **v28; // [sp+4h] [bp-44h]@4
  int v29; // [sp+Ch] [bp-3Ch]@2
  int v30; // [sp+14h] [bp-34h]@2
  int v31; // [sp+18h] [bp-30h]@2
  char *v32; // [sp+1Ch] [bp-2Ch]@1

  v2 = a1;
  v32 = (char *)&unk_28898CC;
  v3 = std::_Hashtable<std::string,std::pair<std::string const,std::vector<char,std::allocator<char>> const>,std::allocator<std::pair<std::string const,std::vector<char,std::allocator<char>> const>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&PackManifestFactory::mContentKeys,
         a2);
  v4 = v3;
  if ( v3 )
  {
    sub_21E8AF4(&v31, (int *)(v3 + 4));
    sub_21E94B4((void **)&v30, "-");
    sub_21E94B4((void **)&v29, (const char *)&unk_257BC67);
    v5 = Util::stringReplace(&v31, (_BYTE **)&v30, (char **)&v29, -1);
    EntityInteraction::setInteractText(&v31, v5);
    v6 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v29 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v30 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v28 = v2;
    v8 = *(_QWORD *)(v4 + 8);
    if ( HIDWORD(v8) != (_DWORD)v8 )
      v9 = 0;
      do
        v10 = v31;
        if ( v9 >= *(_DWORD *)(v31 - 12) )
          break;
        if ( *(_DWORD *)(v31 - 4) >= 0 )
        {
          sub_21E8010((const void **)&v31);
          v10 = v31;
          LODWORD(v8) = *(_DWORD *)(v4 + 8);
        }
        HIDWORD(v8) = v32;
        v12 = *(_BYTE *)(v10 + v9);
        v13 = *(_BYTE *)(v8 + v9);
        v14 = *(_QWORD *)(v32 - 12);
        v15 = v14 + 1;
        if ( v14 + 1 > (unsigned int)(*(_QWORD *)(v32 - 12) >> 32) || *((_DWORD *)v32 - 1) >= 1 )
          sub_21E6FCC((const void **)&v32, v15);
          v11 = v32;
          v14 = *((_DWORD *)v32 - 3);
        v11[v14] = v13 ^ v12;
        v16 = v32;
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          *((_DWORD *)v32 - 1) = 0;
          *((_DWORD *)v16 - 3) = v15;
          v16[v15] = byte_26C67B8[0];
        v8 = *(_QWORD *)(v4 + 8);
        ++v9;
      while ( v9 < HIDWORD(v8) - (signed int)v8 );
    *v28 = v32;
    v32 = (char *)&unk_28898CC;
    v17 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v31 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = v32;
  }
  else
    v18 = (char *)&unk_28898CC;
    *v2 = (char *)&unk_28898CC;
  v19 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}
