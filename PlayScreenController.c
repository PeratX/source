

int __fastcall PlayScreenController::_getNetworkWorld(int a1, signed int a2, int a3)
{
  int result; // r0@2

  if ( a3 )
    result = j_j_j__ZN15PlayScreenModel22getNetworkWorldAtIndexEi16NetworkWorldType(*(_DWORD *)(a1 + 432), a2, a3);
  else
    result = 0;
  return result;
}


int __fastcall PlayScreenController::_closeConvertProgressDialog(int result)
{
  if ( *(_DWORD *)(result + 496) )
    *(_DWORD *)(result + 496) = 2;
  return result;
}


LocalWorldInfo *__fastcall PlayScreenController::_selectLocalWorld(PlayScreenController *this, int a2, int a3)
{
  PlayScreenController *v3; // r4@1
  int v4; // r1@1
  LocalWorldInfo *result; // r0@2
  int v6; // [sp+0h] [bp-70h]@2

  v3 = this;
  v4 = PlayScreenModel::getLocalWorldAtIndex(*(PlayScreenModel **)(a2 + 432), a3);
  if ( v4 )
  {
    LocalWorldInfo::LocalWorldInfo((int)&v6, v4);
    LocalWorldInfo::LocalWorldInfo((int)v3, (int)&v6);
    result = LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v6);
  }
  else
    result = (LocalWorldInfo *)LocalWorldInfo::LocalWorldInfo((int)v3);
  return result;
}


int __fastcall PlayScreenController::_getConvertProgressHandlerCallback(PlayScreenController *this, int a2)
{
  PlayScreenController *v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@12
  unsigned int v10; // r0@16
  int result; // r0@21
  unsigned int *v12; // r2@22
  unsigned int v13; // r1@24
  int v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v2 = this;
  MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>((int)&v14, a2);
  v3 = *(_QWORD *)&v14;
  if ( v15 )
  {
    v4 = (unsigned int *)(v15 + 8);
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
  *((_DWORD *)v2 + 2) = 0;
  v6 = operator new(8u);
  *v6 = v3;
  if ( HIDWORD(v3) )
    v7 = (unsigned int *)(HIDWORD(v3) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
    *(_DWORD *)v2 = v6;
    *((_DWORD *)v2 + 2) = sub_11F1A10;
    *((_DWORD *)v2 + 3) = sub_11F18AC;
        v10 = __ldrex(v7);
      while ( __strex(v10 - 1, v7) );
      v10 = (*v7)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  else
    HIDWORD(v9) = sub_11F18AC;
    LODWORD(v9) = sub_11F1A10;
    *((_QWORD *)v2 + 1) = v9;
  result = v15;
    v12 = (unsigned int *)(v15 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall PlayScreenController::_registerEventHandlers(PlayScreenController *this)
{
  PlayScreenController *v1; // r9@1
  int v2; // r5@2
  _DWORD *v3; // r0@2
  void *v4; // r0@4
  _DWORD *v5; // r0@5
  int v6; // r5@9
  _DWORD *v7; // r0@9
  __int64 v8; // r1@9
  void *v9; // r0@11
  int v10; // r5@12
  _DWORD *v11; // r0@12
  __int64 v12; // r1@12
  void *v13; // r0@14
  int v14; // r5@15
  _DWORD *v15; // r0@15
  __int64 v16; // r1@15
  void *v17; // r0@17
  int v18; // r5@18
  _DWORD *v19; // r0@18
  __int64 v20; // r1@18
  void *v21; // r0@20
  int v22; // r5@21
  _DWORD *v23; // r0@21
  __int64 v24; // r1@21
  void *v25; // r0@23
  int v26; // r5@24
  _DWORD *v27; // r0@24
  __int64 v28; // r1@24
  void *v29; // r0@26
  int v30; // r5@27
  _DWORD *v31; // r0@27
  __int64 v32; // r1@27
  void *v33; // r0@29
  int v34; // r5@30
  _DWORD *v35; // r0@30
  __int64 v36; // r1@30
  void *v37; // r0@32
  int v38; // r5@33
  _DWORD *v39; // r0@33
  __int64 v40; // r1@33
  void *v41; // r0@35
  int v42; // r5@37
  _DWORD *v43; // r0@37
  __int64 v44; // r1@37
  void *v45; // r0@39
  int v46; // r5@40
  _DWORD *v47; // r0@40
  __int64 v48; // r1@40
  void *v49; // r0@42
  int v50; // r5@43
  _DWORD *v51; // r0@43
  __int64 v52; // r1@43
  void *v53; // r0@45
  int v54; // r5@46
  _DWORD *v55; // r0@46
  __int64 v56; // r1@46
  void *v57; // r0@48
  int v58; // r5@49
  _DWORD *v59; // r0@49
  __int64 v60; // r1@49
  void *v61; // r0@51
  int v62; // r5@52
  _DWORD *v63; // r0@52
  __int64 v64; // r1@52
  void *v65; // r0@54
  int v66; // r5@55
  _DWORD *v67; // r0@55
  __int64 v68; // r1@55
  void *v69; // r0@57
  int v70; // r5@58
  _DWORD *v71; // r0@58
  __int64 v72; // r1@58
  void *v73; // r0@60
  double v74; // r0@61
  void *v75; // r0@61
  void *v76; // r0@62
  __int64 v77; // r6@63
  double v78; // r0@63
  void *v79; // r0@63
  void *v80; // r0@64
  _DWORD *v81; // r0@65
  __int64 v82; // r1@65
  _DWORD *v83; // r0@65
  int v84; // r5@65
  __int64 v85; // r1@65
  _DWORD *v86; // r0@65
  __int64 v87; // r2@65
  _DWORD *v88; // r0@67
  int v89; // r1@67
  __int64 v90; // r1@67
  int v91; // r5@73
  _DWORD *v92; // r0@73
  __int64 v93; // r1@73
  void *v94; // r0@75
  int v95; // r5@76
  _DWORD *v96; // r0@76
  __int64 v97; // r1@76
  void *v98; // r0@78
  _DWORD *v99; // r0@79
  __int64 v100; // r1@79
  __int64 v101; // r1@79
  int v102; // r5@83
  void *v103; // r7@85
  unsigned int v104; // r1@85
  int v105; // r0@85
  bool v106; // zf@85
  int v107; // r4@85
  __int64 v108; // r2@85
  int v109; // r4@86
  _QWORD *v110; // r0@89
  __int64 v111; // kr00_8@91
  int v112; // r0@91
  __int64 v113; // r1@91
  int v114; // r5@97
  unsigned int *v115; // r2@99
  signed int v116; // r1@101
  void *v117; // r6@107
  int v118; // r1@107
  void *v119; // r0@107
  int v120; // r10@112
  int *v121; // r11@113
  int *v122; // r5@113
  unsigned int *v123; // r2@114
  signed int v124; // r1@116
  unsigned int *v125; // r2@118
  signed int v126; // r1@120
  _BYTE *v127; // r7@130
  size_t v128; // r0@130
  int i; // r1@130
  int v130; // t1@131
  void *v131; // r7@134
  int v132; // r0@134
  void *v133; // r0@138
  int *v134; // r5@139
  int v135; // r11@141
  void *v136; // r7@143
  int v137; // r0@143
  void *v138; // r0@145
  int v139; // r5@149
  _DWORD *v140; // r0@149
  __int64 v141; // r1@149
  void *v142; // r0@151
  int v143; // r5@152
  _DWORD *v144; // r0@152
  __int64 v145; // r1@152
  void *v146; // r0@154
  int v147; // r6@161
  unsigned int *v148; // r2@163
  signed int v149; // r1@165
  void *v150; // r5@171
  int v151; // r1@171
  void *v152; // r0@171
  unsigned __int64 *v153; // r6@176
  unsigned int *v154; // r2@178
  signed int v155; // r1@180
  unsigned __int64 *v156; // r5@186
  int v157; // r1@186
  void *v158; // r0@186
  unsigned int *v159; // r2@192
  signed int v160; // r1@194
  unsigned int *v161; // r2@196
  signed int v162; // r1@198
  unsigned int *v163; // r2@200
  signed int v164; // r1@202
  unsigned int *v165; // r2@204
  signed int v166; // r1@206
  unsigned int *v167; // r2@208
  signed int v168; // r1@210
  unsigned int *v169; // r2@212
  signed int v170; // r1@214
  unsigned int *v171; // r2@216
  signed int v172; // r1@218
  unsigned int *v173; // r2@220
  signed int v174; // r1@222
  unsigned int *v175; // r2@224
  signed int v176; // r1@226
  unsigned int *v177; // r2@228
  signed int v178; // r1@230
  unsigned int *v179; // r2@232
  signed int v180; // r1@234
  unsigned int *v181; // r2@236
  signed int v182; // r1@238
  unsigned int *v183; // r2@240
  signed int v184; // r1@242
  unsigned int *v185; // r2@244
  signed int v186; // r1@246
  unsigned int *v187; // r2@248
  signed int v188; // r1@250
  unsigned int *v189; // r2@252
  signed int v190; // r1@254
  unsigned int *v191; // r2@256
  signed int v192; // r1@258
  unsigned int *v193; // r2@260
  signed int v194; // r1@262
  unsigned int *v195; // r2@264
  signed int v196; // r1@266
  unsigned int *v197; // r2@268
  signed int v198; // r1@270
  unsigned int *v199; // r2@272
  signed int v200; // r1@274
  unsigned int *v201; // r2@276
  signed int v202; // r1@278
  unsigned int *v203; // r2@280
  signed int v204; // r1@282
  unsigned int *v205; // r2@320
  signed int v206; // r1@322
  unsigned int *v207; // r2@376
  signed int v208; // r1@378
  unsigned int *v209; // r2@380
  signed int v210; // r1@382
  __int64 v211; // [sp+0h] [bp-488h]@63
  _DWORD *v212; // [sp+48h] [bp-440h]@152
  __int64 v213; // [sp+50h] [bp-438h]@152
  int v214; // [sp+5Ch] [bp-42Ch]@152
  _DWORD *v215; // [sp+60h] [bp-428h]@149
  __int64 v216; // [sp+68h] [bp-420h]@149
  int v217; // [sp+74h] [bp-414h]@149
  char v218; // [sp+78h] [bp-410h]@142
  __int64 v219; // [sp+80h] [bp-408h]@141
  int v220; // [sp+88h] [bp-400h]@118
  int v221; // [sp+8Ch] [bp-3FCh]@143
  PlayScreenController *v222; // [sp+90h] [bp-3F8h]@143
  void *v223; // [sp+98h] [bp-3F0h]@143
  int (__fastcall *v224)(int *, int *, int); // [sp+A0h] [bp-3E8h]@143
  signed int (__fastcall *v225)(int *, int); // [sp+A4h] [bp-3E4h]@143
  void *v226; // [sp+A8h] [bp-3E0h]@134
  int (__fastcall *v227)(void **, void **, int); // [sp+B0h] [bp-3D8h]@134
  signed int (*v228)(); // [sp+B4h] [bp-3D4h]@134
  char v229; // [sp+B8h] [bp-3D0h]@133
  __int64 v230; // [sp+C0h] [bp-3C8h]@132
  int v231; // [sp+C8h] [bp-3C0h]@113
  int v232; // [sp+CCh] [bp-3BCh]@134
  void *v233; // [sp+D0h] [bp-3B8h]@113
  int (__fastcall *v234)(int *, int *, int); // [sp+D8h] [bp-3B0h]@134
  signed int (__fastcall *v235)(int); // [sp+DCh] [bp-3ACh]@134
  int v236; // [sp+E0h] [bp-3A8h]@132
  void *v237; // [sp+E4h] [bp-3A4h]@91
  __int64 v238; // [sp+ECh] [bp-39Ch]@91
  void *ptr; // [sp+F4h] [bp-394h]@83
  unsigned int v240; // [sp+F8h] [bp-390h]@83
  int v241; // [sp+FCh] [bp-38Ch]@83
  int v242; // [sp+100h] [bp-388h]@83
  __int64 v243; // [sp+104h] [bp-384h]@83
  int v244; // [sp+10Ch] [bp-37Ch]@85
  int v245; // [sp+110h] [bp-378h]@84
  __int64 v246; // [sp+118h] [bp-370h]@83
  void *v247; // [sp+120h] [bp-368h]@91
  int (__fastcall *v248)(int *, int *, int); // [sp+128h] [bp-360h]@85
  void (__fastcall *v249)(int *, int *); // [sp+12Ch] [bp-35Ch]@91
  int v250; // [sp+130h] [bp-358h]@83
  void *v251; // [sp+134h] [bp-354h]@79
  __int64 v252; // [sp+13Ch] [bp-34Ch]@79
  _DWORD *v253; // [sp+144h] [bp-344h]@79
  __int64 v254; // [sp+14Ch] [bp-33Ch]@79
  int v255; // [sp+154h] [bp-334h]@79
  _DWORD *v256; // [sp+158h] [bp-330h]@76
  __int64 v257; // [sp+160h] [bp-328h]@76
  int v258; // [sp+16Ch] [bp-31Ch]@76
  _DWORD *v259; // [sp+170h] [bp-318h]@73
  __int64 v260; // [sp+178h] [bp-310h]@73
  int v261; // [sp+184h] [bp-304h]@73
  void *v262; // [sp+188h] [bp-300h]@67
  __int64 v263; // [sp+190h] [bp-2F8h]@67
  char v264; // [sp+198h] [bp-2F0h]@66
  __int64 v265; // [sp+1A0h] [bp-2E8h]@65
  _DWORD *v266; // [sp+1ACh] [bp-2DCh]@67
  int (__fastcall *v267)(int *, int *, int); // [sp+1B4h] [bp-2D4h]@67
  int (__fastcall *v268)(int *); // [sp+1B8h] [bp-2D0h]@67
  int v269; // [sp+1BCh] [bp-2CCh]@65
  _DWORD *v270; // [sp+1C0h] [bp-2C8h]@65
  __int64 v271; // [sp+1C8h] [bp-2C0h]@65
  _DWORD *v272; // [sp+1D0h] [bp-2B8h]@65
  __int64 v273; // [sp+1D8h] [bp-2B0h]@65
  _DWORD *v274; // [sp+1E0h] [bp-2A8h]@65
  __int64 v275; // [sp+1E8h] [bp-2A0h]@65
  char v276; // [sp+1F8h] [bp-290h]@63
  int v277; // [sp+1FCh] [bp-28Ch]@63
  int v278; // [sp+200h] [bp-288h]@63
  int v279; // [sp+204h] [bp-284h]@63
  int v280; // [sp+208h] [bp-280h]@63
  void *v281; // [sp+20Ch] [bp-27Ch]@63
  unsigned int v282; // [sp+210h] [bp-278h]@83
  int v283; // [sp+214h] [bp-274h]@161
  int v284; // [sp+218h] [bp-270h]@83
  __int64 v285; // [sp+21Ch] [bp-26Ch]@83
  int v286; // [sp+224h] [bp-264h]@174
  int v287; // [sp+234h] [bp-254h]@61
  int v288; // [sp+238h] [bp-250h]@61
  int v289; // [sp+23Ch] [bp-24Ch]@61
  int v290; // [sp+240h] [bp-248h]@61
  void *v291; // [sp+244h] [bp-244h]@61
  int v292; // [sp+248h] [bp-240h]@188
  unsigned __int64 *v293; // [sp+24Ch] [bp-23Ch]@112
  int v294; // [sp+250h] [bp-238h]@188
  int v295; // [sp+25Ch] [bp-22Ch]@189
  _DWORD *v296; // [sp+260h] [bp-228h]@58
  __int64 v297; // [sp+268h] [bp-220h]@58
  int v298; // [sp+274h] [bp-214h]@58
  _DWORD *v299; // [sp+278h] [bp-210h]@55
  __int64 v300; // [sp+280h] [bp-208h]@55
  int v301; // [sp+28Ch] [bp-1FCh]@55
  _DWORD *v302; // [sp+290h] [bp-1F8h]@52
  __int64 v303; // [sp+298h] [bp-1F0h]@52
  int v304; // [sp+2A4h] [bp-1E4h]@52
  _DWORD *v305; // [sp+2A8h] [bp-1E0h]@49
  __int64 v306; // [sp+2B0h] [bp-1D8h]@49
  int v307; // [sp+2BCh] [bp-1CCh]@49
  _DWORD *v308; // [sp+2C0h] [bp-1C8h]@46
  __int64 v309; // [sp+2C8h] [bp-1C0h]@46
  int v310; // [sp+2D4h] [bp-1B4h]@46
  _DWORD *v311; // [sp+2D8h] [bp-1B0h]@43
  __int64 v312; // [sp+2E0h] [bp-1A8h]@43
  int v313; // [sp+2ECh] [bp-19Ch]@43
  _DWORD *v314; // [sp+2F0h] [bp-198h]@40
  __int64 v315; // [sp+2F8h] [bp-190h]@40
  int v316; // [sp+304h] [bp-184h]@40
  _DWORD *v317; // [sp+308h] [bp-180h]@37
  __int64 v318; // [sp+310h] [bp-178h]@37
  int v319; // [sp+31Ch] [bp-16Ch]@37
  _DWORD *v320; // [sp+320h] [bp-168h]@33
  __int64 v321; // [sp+328h] [bp-160h]@33
  int v322; // [sp+334h] [bp-154h]@33
  _DWORD *v323; // [sp+338h] [bp-150h]@30
  __int64 v324; // [sp+340h] [bp-148h]@30
  int v325; // [sp+34Ch] [bp-13Ch]@30
  _DWORD *v326; // [sp+350h] [bp-138h]@27
  __int64 v327; // [sp+358h] [bp-130h]@27
  int v328; // [sp+364h] [bp-124h]@27
  _DWORD *v329; // [sp+368h] [bp-120h]@24
  __int64 v330; // [sp+370h] [bp-118h]@24
  int v331; // [sp+37Ch] [bp-10Ch]@24
  _DWORD *v332; // [sp+380h] [bp-108h]@21
  __int64 v333; // [sp+388h] [bp-100h]@21
  int v334; // [sp+394h] [bp-F4h]@21
  _DWORD *v335; // [sp+398h] [bp-F0h]@18
  __int64 v336; // [sp+3A0h] [bp-E8h]@18
  int v337; // [sp+3ACh] [bp-DCh]@18
  _DWORD *v338; // [sp+3B0h] [bp-D8h]@15
  __int64 v339; // [sp+3B8h] [bp-D0h]@15
  int v340; // [sp+3C4h] [bp-C4h]@15
  _DWORD *v341; // [sp+3C8h] [bp-C0h]@12
  __int64 v342; // [sp+3D0h] [bp-B8h]@12
  int v343; // [sp+3DCh] [bp-ACh]@12
  _DWORD *v344; // [sp+3E0h] [bp-A8h]@9
  __int64 v345; // [sp+3E8h] [bp-A0h]@9
  int v346; // [sp+3F4h] [bp-94h]@9
  void *v347; // [sp+3F8h] [bp-90h]@5
  void (*v348)(void); // [sp+400h] [bp-88h]@5
  signed int (*v349)(); // [sp+404h] [bp-84h]@5
  _DWORD *v350; // [sp+408h] [bp-80h]@5
  void (*v351)(void); // [sp+410h] [bp-78h]@5
  int (__fastcall *v352)(int); // [sp+414h] [bp-74h]@5
  int v353; // [sp+418h] [bp-70h]@5
  _DWORD *v354; // [sp+41Ch] [bp-6Ch]@2
  void (*v355)(void); // [sp+424h] [bp-64h]@2
  signed int (__fastcall *v356)(int); // [sp+428h] [bp-60h]@2
  int v357; // [sp+430h] [bp-58h]@2
  char v358; // [sp+458h] [bp-30h]@63

  v1 = this;
  if ( PlayScreenModel::supportsLegacyWorlds(*((PlayScreenModel **)this + 108)) )
  {
    sub_1590164((void **)&v357, "button.menu_sync_legacy_worlds");
    v2 = MinecraftScreenController::_getNameId(v1, (int **)&v357);
    v3 = operator new(4u);
    *v3 = v1;
    v354 = v3;
    v356 = sub_11EB548;
    v355 = (void (*)(void))sub_11EB55A;
    ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v354);
    if ( v355 )
      v355();
    v4 = (void *)(v357 - 12);
    if ( (int *)(v357 - 12) != &dword_28898C0 )
    {
      v203 = (unsigned int *)(v357 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v204 = __ldrex(v203);
        while ( __strex(v204 - 1, v203) );
      }
      else
        v204 = (*v203)--;
      if ( v204 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v4);
    }
    StringHash::StringHash<char [35]>(&v353, (int)"#sync_legacy_worlds_button_visible");
    v5 = operator new(4u);
    *v5 = v1;
    v350 = v5;
    v352 = sub_11EB590;
    v351 = (void (*)(void))sub_11EB5A4;
    v347 = operator new(1u);
    v349 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v348 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    ScreenController::bindBool((int)v1, &v353, (int)&v350, (int)&v347);
    if ( v348 )
      v348();
    if ( v351 )
      v351();
  }
  sub_1590164((void **)&v346, "button.menu_local_world_create");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v346);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11EB724;
  *v7 = v1;
  HIDWORD(v8) = sub_11EB5DC;
  v344 = v7;
  v345 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v344);
  if ( (_DWORD)v345 )
    ((void (*)(void))v345)();
  v9 = (void *)(v346 - 12);
  if ( (int *)(v346 - 12) != &dword_28898C0 )
    v159 = (unsigned int *)(v346 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v160 = __ldrex(v159);
      while ( __strex(v160 - 1, v159) );
    else
      v160 = (*v159)--;
    if ( v160 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v343, "button.connect_to_third_party_server");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v343);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11EBAE0;
  *v11 = v1;
  HIDWORD(v12) = sub_11EB75C;
  v341 = v11;
  v342 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v341);
  if ( (_DWORD)v342 )
    ((void (*)(void))v342)();
  v13 = (void *)(v343 - 12);
  if ( (int *)(v343 - 12) != &dword_28898C0 )
    v161 = (unsigned int *)(v343 - 4);
        v162 = __ldrex(v161);
      while ( __strex(v162 - 1, v161) );
      v162 = (*v161)--;
    if ( v162 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  sub_1590164((void **)&v340, "button.menu_start_local_world");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v340);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11EBD44;
  *v15 = v1;
  HIDWORD(v16) = sub_11EBB18;
  v338 = v15;
  v339 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v338);
  if ( (_DWORD)v339 )
    ((void (*)(void))v339)();
  v17 = (void *)(v340 - 12);
  if ( (int *)(v340 - 12) != &dword_28898C0 )
    v163 = (unsigned int *)(v340 - 4);
        v164 = __ldrex(v163);
      while ( __strex(v164 - 1, v163) );
      v164 = (*v163)--;
    if ( v164 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  sub_1590164((void **)&v337, "button.menu_local_world_item_edit");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v337);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11EBF98;
  *v19 = v1;
  HIDWORD(v20) = sub_11EBD7C;
  v335 = v19;
  v336 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v335);
  if ( (_DWORD)v336 )
    ((void (*)(void))v336)();
  v21 = (void *)(v337 - 12);
  if ( (int *)(v337 - 12) != &dword_28898C0 )
    v165 = (unsigned int *)(v337 - 4);
        v166 = __ldrex(v165);
      while ( __strex(v166 - 1, v165) );
      v166 = (*v165)--;
    if ( v166 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v21);
  sub_1590164((void **)&v334, "button.menu_network_world_item");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v334);
  v23 = operator new(4u);
  LODWORD(v24) = sub_11EC508;
  *v23 = v1;
  HIDWORD(v24) = sub_11EC1AC;
  v332 = v23;
  v333 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v332);
  if ( (_DWORD)v333 )
    ((void (*)(void))v333)();
  v25 = (void *)(v334 - 12);
  if ( (int *)(v334 - 12) != &dword_28898C0 )
    v167 = (unsigned int *)(v334 - 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v25);
  sub_1590164((void **)&v331, "button.menu_network_server_world_edit");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v331);
  v27 = operator new(4u);
  LODWORD(v28) = sub_11EC798;
  *v27 = v1;
  HIDWORD(v28) = sub_11EC540;
  v329 = v27;
  v330 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v329);
  if ( (_DWORD)v330 )
    ((void (*)(void))v330)();
  v29 = (void *)(v331 - 12);
  if ( (int *)(v331 - 12) != &dword_28898C0 )
    v169 = (unsigned int *)(v331 - 4);
        v170 = __ldrex(v169);
      while ( __strex(v170 - 1, v169) );
      v170 = (*v169)--;
    if ( v170 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v29);
  sub_1590164((void **)&v328, "button.menu_network_add_external");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v328);
  v31 = operator new(4u);
  LODWORD(v32) = sub_11EC7E4;
  *v31 = v1;
  HIDWORD(v32) = sub_11EC7CE;
  v326 = v31;
  v327 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v326);
  if ( (_DWORD)v327 )
    ((void (*)(void))v327)();
  v33 = (void *)(v328 - 12);
  if ( (int *)(v328 - 12) != &dword_28898C0 )
    v171 = (unsigned int *)(v328 - 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 - 1, v171) );
      v172 = (*v171)--;
    if ( v172 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v33);
  sub_1590164((void **)&v325, "button.menu_network_add_friend");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v325);
  v35 = operator new(4u);
  LODWORD(v36) = sub_11EC85A;
  *v35 = v1;
  HIDWORD(v36) = sub_11EC81A;
  v323 = v35;
  v324 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v323);
  if ( (_DWORD)v324 )
    ((void (*)(void))v324)();
  v37 = (void *)(v325 - 12);
  if ( (int *)(v325 - 12) != &dword_28898C0 )
    v173 = (unsigned int *)(v325 - 4);
        v174 = __ldrex(v173);
      while ( __strex(v174 - 1, v173) );
      v174 = (*v173)--;
    if ( v174 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v37);
  sub_1590164((void **)&v322, "button.convert_legacy_world");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v322);
  v39 = operator new(4u);
  LODWORD(v40) = sub_11EC9B8;
  *v39 = v1;
  HIDWORD(v40) = sub_11EC890;
  v320 = v39;
  v321 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v320);
  if ( (_DWORD)v321 )
    ((void (*)(void))v321)();
  v41 = (void *)(v322 - 12);
  if ( (int *)(v322 - 12) != &dword_28898C0 )
    v175 = (unsigned int *)(v322 - 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v41);
  if ( PlayScreenModel::supportsLegacyWorldUpload(*((PlayScreenModel **)v1 + 108)) == 1 )
    sub_1590164((void **)&v319, "button.upload_legacy_world");
    v42 = MinecraftScreenController::_getNameId(v1, (int **)&v319);
    v43 = operator new(4u);
    LODWORD(v44) = sub_11ECB1C;
    *v43 = v1;
    HIDWORD(v44) = sub_11EC9F0;
    v317 = v43;
    v318 = v44;
    ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v317);
    if ( (_DWORD)v318 )
      ((void (*)(void))v318)();
    v45 = (void *)(v319 - 12);
    if ( (int *)(v319 - 12) != &dword_28898C0 )
      v205 = (unsigned int *)(v319 - 4);
          v206 = __ldrex(v205);
        while ( __strex(v206 - 1, v205) );
        v206 = (*v205)--;
      if ( v206 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v45);
  sub_1590164((void **)&v316, "button.menu_import_level");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v316);
  v47 = operator new(4u);
  LODWORD(v48) = sub_11ECFEC;
  *v47 = v1;
  HIDWORD(v48) = sub_11ECB54;
  v314 = v47;
  v315 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v314);
  if ( (_DWORD)v315 )
    ((void (*)(void))v315)();
  v49 = (void *)(v316 - 12);
  if ( (int *)(v316 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v316 - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v49);
  sub_1590164((void **)&v313, "button.menu_realm_world_trial");
  v50 = MinecraftScreenController::_getNameId(v1, (int **)&v313);
  v51 = operator new(4u);
  LODWORD(v52) = sub_11ED320;
  *v51 = v1;
  HIDWORD(v52) = sub_11ED204;
  v311 = v51;
  v312 = v52;
  ScreenController::registerButtonClickHandler((int)v1, v50, (int)&v311);
  if ( (_DWORD)v312 )
    ((void (*)(void))v312)();
  v53 = (void *)(v313 - 12);
  if ( (int *)(v313 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v313 - 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v53);
  sub_1590164((void **)&v310, "button.menu_realms_world_item_edit");
  v54 = MinecraftScreenController::_getNameId(v1, (int **)&v310);
  v55 = operator new(4u);
  LODWORD(v56) = sub_11ED4F0;
  *v55 = v1;
  HIDWORD(v56) = sub_11ED358;
  v308 = v55;
  v309 = v56;
  ScreenController::registerButtonClickHandler((int)v1, v54, (int)&v308);
  if ( (_DWORD)v309 )
    ((void (*)(void))v309)();
  v57 = (void *)(v310 - 12);
  if ( (int *)(v310 - 12) != &dword_28898C0 )
    v181 = (unsigned int *)(v310 - 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v57);
  sub_1590164((void **)&v307, "button.menu_realms_world_item_remove");
  v58 = MinecraftScreenController::_getNameId(v1, (int **)&v307);
  v59 = operator new(4u);
  LODWORD(v60) = sub_11ED698;
  *v59 = v1;
  HIDWORD(v60) = sub_11ED528;
  v305 = v59;
  v306 = v60;
  ScreenController::registerButtonClickHandler((int)v1, v58, (int)&v305);
  if ( (_DWORD)v306 )
    ((void (*)(void))v306)();
  v61 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
    v183 = (unsigned int *)(v307 - 4);
        v184 = __ldrex(v183);
      while ( __strex(v184 - 1, v183) );
      v184 = (*v183)--;
    if ( v184 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v61);
  sub_1590164((void **)&v304, "button.menu_start_realms_world");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v304);
  v63 = operator new(4u);
  LODWORD(v64) = sub_11ED9A4;
  *v63 = v1;
  HIDWORD(v64) = sub_11ED6D0;
  v302 = v63;
  v303 = v64;
  ScreenController::registerButtonClickHandler((int)v1, v62, (int)&v302);
  if ( (_DWORD)v303 )
    ((void (*)(void))v303)();
  v65 = (void *)(v304 - 12);
  if ( (int *)(v304 - 12) != &dword_28898C0 )
    v185 = (unsigned int *)(v304 - 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v65);
  sub_1590164((void **)&v301, "button.menu_invite_notification");
  v66 = MinecraftScreenController::_getNameId(v1, (int **)&v301);
  v67 = operator new(4u);
  LODWORD(v68) = sub_11ED9FE;
  *v67 = v1;
  HIDWORD(v68) = sub_11ED9DA;
  v299 = v67;
  v300 = v68;
  ScreenController::registerButtonClickHandler((int)v1, v66, (int)&v299);
  if ( (_DWORD)v300 )
    ((void (*)(void))v300)();
  v69 = (void *)(v301 - 12);
  if ( (int *)(v301 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v301 - 4);
        v188 = __ldrex(v187);
      while ( __strex(v188 - 1, v187) );
      v188 = (*v187)--;
    if ( v188 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v69);
  sub_1590164((void **)&v298, "navigation_tab");
  v70 = MinecraftScreenController::_getNameId(v1, (int **)&v298);
  v71 = operator new(4u);
  LODWORD(v72) = sub_11EDB18;
  *v71 = v1;
  HIDWORD(v72) = sub_11EDA34;
  v296 = v71;
  v297 = v72;
  ScreenController::registerToggleChangeEventHandler((int)v1, v70, (int)&v296);
  if ( (_DWORD)v297 )
    ((void (*)(void))v297)();
  v73 = (void *)(v298 - 12);
  if ( (int *)(v298 - 12) != &dword_28898C0 )
    v189 = (unsigned int *)(v298 - 4);
        v190 = __ldrex(v189);
      while ( __strex(v190 - 1, v189) );
      v190 = (*v189)--;
    if ( v190 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v73);
  sub_1590164((void **)&v287, "#storage_location_radio_external");
  v288 = 1;
  sub_1590164((void **)&v289, "#storage_location_radio_package");
  v290 = 2;
  LODWORD(v74) = &v291;
  std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,int> const*>(
    v74,
    (int **)&v291,
    0);
  v75 = (void *)(v289 - 12);
  if ( (int *)(v289 - 12) != &dword_28898C0 )
    v191 = (unsigned int *)(v289 - 4);
        v192 = __ldrex(v191);
      while ( __strex(v192 - 1, v191) );
      v192 = (*v191)--;
    if ( v192 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v75);
  v76 = (void *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v193 = (unsigned int *)(v287 - 4);
        v194 = __ldrex(v193);
      while ( __strex(v194 - 1, v193) );
      v194 = (*v193)--;
    if ( v194 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v76);
  v277 = 1;
  sub_1590164((void **)&v278, "options.filelocation.external");
  v279 = 2;
  sub_1590164((void **)&v280, "options.filelocation.appdata");
  HIDWORD(v77) = &v358;
  LODWORD(v77) = &v276;
  v211 = v77;
  LODWORD(v78) = &v281;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
    v78,
    (unsigned int *)&v281,
  v79 = (void *)(v280 - 12);
  if ( (int *)(v280 - 12) != &dword_28898C0 )
    v195 = (unsigned int *)(v280 - 4);
        v196 = __ldrex(v195);
      while ( __strex(v196 - 1, v195) );
      v196 = (*v195)--;
    if ( v196 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v79);
  v80 = (void *)(v278 - 12);
  if ( (int *)(v278 - 12) != &dword_28898C0 )
    v197 = (unsigned int *)(v278 - 4);
        v198 = __ldrex(v197);
      while ( __strex(v198 - 1, v197) );
      v198 = (*v197)--;
    if ( v198 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v80);
  v81 = operator new(4u);
  LODWORD(v82) = sub_11EDB6A;
  *v81 = v1;
  HIDWORD(v82) = sub_11EDB4E;
  v274 = v81;
  v275 = v82;
  v83 = operator new(4u);
  v84 = 0;
  LODWORD(v85) = sub_11EDBBC;
  *v83 = v1;
  HIDWORD(v85) = sub_11EDBA0;
  v272 = v83;
  v273 = v85;
  v86 = operator new(4u);
  HIDWORD(v87) = sub_11EDBF2;
  *v86 = v1;
  v270 = v86;
  LODWORD(v87) = sub_11EDC12;
  v271 = v87;
  StringHash::StringHash<char [29]>(&v269, (int)"#switch_storage_type_enabled");
  LODWORD(v265) = 0;
  if ( (_DWORD)v275 )
    ((void (__fastcall *)(char *, _DWORD **, signed int))v275)(&v264, &v274, 2);
    v84 = v275;
    v265 = v275;
  v267 = 0;
  v88 = operator new(0x10u);
  *(_QWORD *)v88 = *(_QWORD *)&v264;
  v89 = HIDWORD(v265);
  v88[2] = v84;
  v88[3] = v89;
  v266 = v88;
  v267 = sub_11EDC58;
  v268 = sub_11EDC48;
  v262 = operator new(1u);
  LODWORD(v90) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v90) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v263 = v90;
  ScreenController::bindBool((int)v1, &v269, (int)&v266, (int)&v262);
  if ( (_DWORD)v263 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, char *, char *))v263)(&v262, &v262, 3, v263, &v276, &v358);
  if ( v267 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v267)(
      &v266,
      3,
      v267,
      v211,
      HIDWORD(v211));
  if ( (_DWORD)v265 )
    ((void (__cdecl *)(char *, char *, signed int, _DWORD, _DWORD, _DWORD))v265)(
      &v264,
      v265,
  sub_1590164((void **)&v261, "button.dropdown_exit");
  v91 = MinecraftScreenController::_getNameId(v1, (int **)&v261);
  v92 = operator new(4u);
  LODWORD(v93) = sub_11EDCE4;
  *v92 = v1;
  HIDWORD(v93) = sub_11EDCD6;
  v259 = v92;
  v260 = v93;
  ScreenController::registerButtonClickHandler((int)v1, v91, (int)&v259);
  if ( (_DWORD)v260 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v260)(
      &v259,
      v260,
  v94 = (void *)(v261 - 12);
  if ( (int *)(v261 - 12) != &dword_28898C0 )
    v199 = (unsigned int *)(v261 - 4);
        v200 = __ldrex(v199);
      while ( __strex(v200 - 1, v199) );
      v200 = (*v199)--;
    if ( v200 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v94);
  sub_1590164((void **)&v258, "switch_storage_type");
  v95 = MinecraftScreenController::_getNameId(v1, (int **)&v258);
  v96 = operator new(4u);
  LODWORD(v97) = sub_11EDD28;
  *v96 = v1;
  HIDWORD(v97) = sub_11EDD1A;
  v256 = v96;
  v257 = v97;
  ScreenController::registerToggleChangeEventHandler((int)v1, v95, (int)&v256);
  if ( (_DWORD)v257 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v257)(
      &v256,
      v257,
  v98 = (void *)(v258 - 12);
  if ( (int *)(v258 - 12) != &dword_28898C0 )
    v201 = (unsigned int *)(v258 - 4);
        v202 = __ldrex(v201);
      while ( __strex(v202 - 1, v201) );
      v202 = (*v201)--;
    if ( v202 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v98);
  v255 = 1774715385;
  v99 = operator new(4u);
  LODWORD(v100) = sub_11EDD6E;
  *v99 = v1;
  HIDWORD(v100) = sub_11EDD5E;
  v253 = v99;
  v254 = v100;
  v251 = operator new(1u);
  LODWORD(v101) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v101) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v252 = v101;
  ScreenController::bindBool((int)v1, &v255, (int)&v253, (int)&v251);
  if ( (_DWORD)v252 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v252)(
      &v251,
      v252,
  if ( (_DWORD)v254 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v254)(
      &v253,
      v254,
  StringHash::StringHash<char [34]>(&v250, (int)"#switch_storage_type_toggle_label");
  v102 = 0;
  ptr = 0;
  v240 = v282;
  v241 = 0;
  v242 = v284;
  v243 = v285;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_assign<std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::(std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<int const,std::string>,false> const*)#1}>(
    (unsigned int *)&ptr,
    (int)&v281);
  LODWORD(v246) = 0;
  if ( (_DWORD)v273 )
    ((void (__fastcall *)(int *, _DWORD **, signed int))v273)(&v245, &v272, 2);
    v102 = v273;
    v246 = v273;
  v248 = 0;
  v103 = operator new(0x2Cu);
  LODWORD(v108) = ptr;
  v104 = v240;
  v105 = v241;
  v106 = &v244 == ptr;
  v107 = v242;
  *(_DWORD *)v103 = ptr;
  *((_DWORD *)v103 + 1) = v104;
  *((_DWORD *)v103 + 2) = v105;
  *((_DWORD *)v103 + 3) = v107;
  HIDWORD(v108) = HIDWORD(v243);
  *((_DWORD *)v103 + 4) = v243;
  *((_DWORD *)v103 + 5) = HIDWORD(v108);
  if ( v106 )
    v109 = (int)v103 + 24;
    *(_DWORD *)v103 = (char *)v103 + 24;
    LODWORD(v108) = *(_DWORD *)v108;
    *((_DWORD *)v103 + 6) = v108;
  else
    v109 = v108;
  if ( v105 )
    *(_DWORD *)(v109 + 4 * (*(_DWORD *)(v105 + 4) % v104)) = (char *)v103 + 8;
    v110 = (char *)v103 + 28;
    LODWORD(v108) = *((_DWORD *)v103 + 7);
    v102 = v246;
    HIDWORD(v108) = *((_DWORD *)v103 + 8);
    v104 = *((_DWORD *)v103 + 10);
  HIDWORD(v243) = 0;
  v244 = 0;
  ptr = &v244;
  v240 = 1;
  v242 = 0;
  v111 = *(_QWORD *)&v245;
  *(_QWORD *)&v245 = v108;
  *v110 = v111;
  v112 = HIDWORD(v246);
  *((_DWORD *)v103 + 9) = v102;
  HIDWORD(v246) = v104;
  *((_DWORD *)v103 + 10) = v112;
  v247 = v103;
  v248 = sub_11EDEA8;
  v249 = sub_11EDDA4;
  v237 = operator new(1u);
  LODWORD(v113) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v113) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v238 = v113;
  ScreenController::bindString((int)v1, &v250, (int)&v247, (int)&v237);
  if ( (_DWORD)v238 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v238)(
      &v237,
      v238,
  if ( v248 )
    ((void (__cdecl *)(void **, void **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v248)(
      &v247,
      v248,
  if ( (_DWORD)v246 )
    ((void (__fastcall *)(int *, int *, signed int))v246)(&v245, &v245, 3);
  v114 = v241;
  while ( v114 )
    v117 = (void *)v114;
    v118 = *(_DWORD *)(v114 + 8);
    v114 = *(_DWORD *)v114;
    v119 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) != &dword_28898C0 )
      v115 = (unsigned int *)(v118 - 4);
          v116 = __ldrex(v115);
        while ( __strex(v116 - 1, v115) );
        v116 = (*v115)--;
      if ( v116 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v119);
    operator delete(v117);
  _aeabi_memclr4(ptr, 4 * v240);
  if ( ptr && &v244 != ptr )
    operator delete(ptr);
  v120 = (int)v293;
  if ( v293 )
    v121 = &v231;
    v122 = (int *)&v233;
    do
      v127 = *(_BYTE **)(v120 + 4);
      v128 = strlen(*(const char **)(v120 + 4));
      for ( i = -2128831035; v128; i = 16777619 * (i ^ v130) )
        v130 = *v127++;
        --v128;
      v236 = i;
      LODWORD(v230) = 0;
      if ( (_DWORD)v273 )
        ((void (__fastcall *)(char *, _DWORD **, signed int))v273)(&v229, &v272, 2);
        v230 = v273;
      sub_15901A4(v121, (int *)(v120 + 4));
      v232 = *(_DWORD *)(v120 + 8);
      v234 = 0;
      v131 = operator new(0x18u);
      *(_QWORD *)v131 = *(_QWORD *)&v229;
      v132 = v230;
      *((_DWORD *)v131 + 2) = v132;
      *((_DWORD *)v131 + 3) = HIDWORD(v230);
      sub_15901A4((int *)v131 + 4, v121);
      *((_DWORD *)v131 + 5) = v232;
      v233 = v131;
      v235 = sub_11EE078;
      v227 = 0;
      v234 = sub_11EE098;
      v226 = operator new(1u);
      v228 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v227 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v236, (int)v122, (int)&v226);
      if ( v227 )
        ((void (__cdecl *)(void **, void **, signed int, int (__fastcall *)(void **, void **, int), _DWORD, _DWORD))v227)(
          &v226,
          3,
          v227,
          v211,
          HIDWORD(v211));
      if ( v234 )
        v234(v122, v122, 3);
      v133 = (void *)(v231 - 12);
      if ( (int *)(v231 - 12) != &dword_28898C0 )
        v123 = (unsigned int *)(v231 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v124 = __ldrex(v123);
          while ( __strex(v124 - 1, v123) );
        }
        else
          v124 = (*v123)--;
        if ( v124 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v133);
      v134 = v121;
      if ( (_DWORD)v230 )
        ((void (__cdecl *)(char *, char *, signed int, _DWORD, _DWORD, _DWORD))v230)(
          &v229,
          v230,
      v135 = MinecraftScreenController::_getNameId(v1, (int **)(v120 + 4));
      LODWORD(v219) = 0;
      if ( (_DWORD)v271 )
        ((void (__fastcall *)(char *, _DWORD **, signed int))v271)(&v218, &v270, 2);
        v219 = v271;
      sub_15901A4(&v220, (int *)(v120 + 4));
      v221 = *(_DWORD *)(v120 + 8);
      v222 = v1;
      v224 = 0;
      v136 = operator new(0x1Cu);
      *(_QWORD *)v136 = *(_QWORD *)&v218;
      v137 = v219;
      *((_DWORD *)v136 + 2) = v137;
      *((_DWORD *)v136 + 3) = HIDWORD(v219);
      sub_15901A4((int *)v136 + 4, &v220);
      *((_DWORD *)v136 + 5) = v221;
      *((_DWORD *)v136 + 6) = v222;
      v223 = v136;
      v225 = sub_11EE188;
      v224 = sub_11EE1B8;
      ScreenController::registerToggleChangeEventHandler((int)v1, v135, (int)&v223);
      if ( v224 )
        ((void (__cdecl *)(void **, void **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v224)(
          &v223,
          v224,
      v121 = v134;
      v122 = (int *)&v233;
      v138 = (void *)(v220 - 12);
      if ( (int *)(v220 - 12) != &dword_28898C0 )
        v125 = (unsigned int *)(v220 - 4);
            v126 = __ldrex(v125);
          while ( __strex(v126 - 1, v125) );
          v126 = (*v125)--;
        if ( v126 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v138);
      if ( (_DWORD)v219 )
        ((void (__cdecl *)(char *, char *, signed int, _DWORD, _DWORD, _DWORD))v219)(
          &v218,
          v219,
      v120 = *(_DWORD *)v120;
    while ( v120 );
  sub_1590164((void **)&v217, "friend_icon_bounce_end");
  v139 = MinecraftScreenController::_getNameId(v1, (int **)&v217);
  v140 = operator new(4u);
  LODWORD(v141) = sub_11EE2BE;
  *v140 = v1;
  HIDWORD(v141) = sub_11EE2AC;
  v215 = v140;
  v216 = v141;
  ScreenController::registerAnimationEventHandler((int)v1, v139, (int)&v215);
  if ( (_DWORD)v216 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v216)(
      &v215,
      v216,
  v142 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v207 = (unsigned int *)(v217 - 4);
        v208 = __ldrex(v207);
      while ( __strex(v208 - 1, v207) );
      v208 = (*v207)--;
    if ( v208 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v142);
  sub_1590164((void **)&v214, "friend_icon_bounce_start");
  v143 = MinecraftScreenController::_getNameId(v1, (int **)&v214);
  v144 = operator new(4u);
  LODWORD(v145) = sub_11EE306;
  *v144 = v1;
  HIDWORD(v145) = sub_11EE2F4;
  v212 = v144;
  v213 = v145;
  ScreenController::registerAnimationEventHandler((int)v1, v143, (int)&v212);
  if ( (_DWORD)v213 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v213)(
      &v212,
      v213,
  v146 = (void *)(v214 - 12);
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v209 = (unsigned int *)(v214 - 4);
        v210 = __ldrex(v209);
      while ( __strex(v210 - 1, v209) );
      v210 = (*v209)--;
    if ( v210 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v146);
  if ( (_DWORD)v271 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v271)(
      &v270,
      v271,
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v273)(
      &v272,
      v273,
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v275)(
      &v274,
      v275,
  v147 = v283;
  while ( v147 )
    v150 = (void *)v147;
    v151 = *(_DWORD *)(v147 + 8);
    v147 = *(_DWORD *)v147;
    v152 = (void *)(v151 - 12);
    if ( (int *)(v151 - 12) != &dword_28898C0 )
      v148 = (unsigned int *)(v151 - 4);
          v149 = __ldrex(v148);
        while ( __strex(v149 - 1, v148) );
        v149 = (*v148)--;
      if ( v149 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v152);
    operator delete(v150);
  _aeabi_memclr4(v281, 4 * v282);
  v283 = 0;
  v284 = 0;
  if ( v281 && &v286 != v281 )
    operator delete(v281);
  v153 = v293;
  while ( v153 )
    v156 = v153;
    v157 = *v153 >> 32;
    v153 = (unsigned __int64 *)*v153;
    v158 = (void *)(v157 - 12);
    if ( (int *)(v157 - 12) != &dword_28898C0 )
      v154 = (unsigned int *)(v157 - 4);
          v155 = __ldrex(v154);
        while ( __strex(v155 - 1, v154) );
        v155 = (*v154)--;
      if ( v155 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v158);
    operator delete(v156);
  _aeabi_memclr4(v291, 4 * v292);
  v293 = 0;
  v294 = 0;
  if ( v291 )
    if ( &v295 != v291 )
      operator delete(v291);
}


signed int __fastcall PlayScreenController::_getLocalWorldGridSize(PlayScreenController *this, int a2)
{
  PlayScreenController *v2; // r4@1
  signed int result; // r0@1

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  result = PlayScreenModel::getWorldCount(*(_DWORD *)(a2 + 432), 0, 0);
  if ( result >= 1 )
  {
    *(_DWORD *)v2 = 1;
    *((_DWORD *)v2 + 1) = result;
  }
  return result;
}


signed int __fastcall PlayScreenController::_handleLeaveRealm(PlayScreenController *this, int a2)
{
  PlayScreenController *v2; // r8@1
  int v3; // r5@1
  __int64 v4; // r6@1
  __int64 v5; // kr00_8@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  _QWORD *v8; // r0@7
  __int64 v9; // r2@7 OVERLAPPED
  unsigned int *v10; // r1@8
  int (__fastcall *v11)(_DWORD *, void **, int); // r1@13
  unsigned int *v12; // r1@16
  unsigned int v13; // r0@18
  int v14; // r0@23
  unsigned int *v15; // r2@24
  unsigned int v16; // r1@26
  void *v17; // r4@31
  void *v18; // r6@31
  unsigned int *v19; // r2@33
  signed int v20; // r1@35
  int *v21; // r0@41
  _QWORD *v23; // [sp+0h] [bp-80h]@13
  void (*v24)(void); // [sp+8h] [bp-78h]@7
  char v25; // [sp+10h] [bp-70h]@1
  int v26; // [sp+14h] [bp-6Ch]@1
  void *v27; // [sp+18h] [bp-68h]@1
  void *v28; // [sp+1Ch] [bp-64h]@1
  int v29; // [sp+20h] [bp-60h]@1
  void *v30; // [sp+24h] [bp-5Ch]@1
  int v31; // [sp+28h] [bp-58h]@1
  int v32; // [sp+2Ch] [bp-54h]@1
  int v33; // [sp+30h] [bp-50h]@1
  void *v34; // [sp+34h] [bp-4Ch]@1
  int v35; // [sp+38h] [bp-48h]@1
  int v36; // [sp+3Ch] [bp-44h]@1
  int v37; // [sp+40h] [bp-40h]@1
  void *v38; // [sp+44h] [bp-3Ch]@1
  void *v39; // [sp+48h] [bp-38h]@1
  void *v40; // [sp+4Ch] [bp-34h]@1
  void *v41; // [sp+50h] [bp-30h]@1
  int v42; // [sp+54h] [bp-2Ch]@1
  char v43; // [sp+58h] [bp-28h]@1

  v2 = this;
  v3 = *(_DWORD *)PlayScreenModel::getWorlds(*((PlayScreenModel **)this + 108)) + 72 * a2;
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
  v27 = 0;
  v28 = 0;
  v29 = 0;
  std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
    (unsigned __int64 *)&v27,
    (int *)(v3 + 12));
  std::vector<std::string,std::allocator<std::string>>::operator=((int)&v35, (unsigned __int64 *)&v27);
  sub_15903F4(&v34, "playscreen.confirmLeaveMessage", (_BYTE *)0x1E);
  sub_15903F4(&v30, "playscreen.confirmLeaveTitle", (_BYTE *)0x1C);
  sub_15903F4(&v39, "gui.yes", (_BYTE *)7);
  sub_15903F4(&v41, "gui.no", (_BYTE *)6);
  v4 = *(_QWORD *)v3;
  MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>((int)&v25, (int)v2);
  v5 = *(_QWORD *)&v25;
  if ( v26 )
  {
    v6 = (unsigned int *)(v26 + 8);
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
  v24 = 0;
  v8 = operator new(0x10u);
  *v8 = v5;
  if ( HIDWORD(v5) )
    v10 = (unsigned int *)(HIDWORD(v5) + 8);
      {
        LODWORD(v9) = __ldrex(v10);
        HIDWORD(v9) = __strex(v9 + 1, v10);
      }
      while ( HIDWORD(v9) );
      ++*v10;
  v11 = sub_11EADB8;
  v8[1] = v4;
  LODWORD(v9) = sub_11EAB30;
  v23 = v8;
  *(_QWORD *)&v24 = *(__int64 *)((char *)&v9 - 4);
  LODWORD(v9) = &v23;
  MinecraftScreenController::_displayCustomModalPopup((int)v2, (int)&v30, v9);
  if ( v24 )
    v24();
    v12 = (unsigned int *)(HIDWORD(v5) + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
  v14 = v26;
    v15 = (unsigned int *)(v26 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      (*(void (**)(void))(*(_DWORD *)v14 + 12))();
  v18 = v28;
  v17 = v27;
  if ( v27 != v28 )
    do
      v21 = (int *)(*(_DWORD *)v17 - 12);
      if ( v21 != &dword_28898C0 )
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
          j_j_j_j_j__ZdlPv_9_2(v21);
      v17 = (char *)v17 + 4;
    while ( v17 != v18 );
    v17 = v27;
  if ( v17 )
    operator delete(v17);
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v30);
  return 8;
}


signed int __fastcall PlayScreenController::_tickRealms(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  int v2; // r0@1
  char *v3; // r0@4
  char *v4; // r0@5
  signed __int64 v5; // kr00_8@5
  int v6; // r2@5
  bool v7; // cf@5
  __int64 v8; // r0@5
  signed int v9; // r3@7
  signed int result; // r0@14
  int v11; // [sp+0h] [bp-18h]@5

  v1 = this;
  *((_BYTE *)this + 456) = MinecraftScreenModel::isRealmsCompatibilityCheckComplete(*((MinecraftScreenModel **)this + 108));
  v2 = MinecraftScreenModel::realmsCompatibility(*((MinecraftScreenModel **)v1 + 108));
  *((_DWORD *)v1 + 115) = v2;
  if ( *((_BYTE *)v1 + 456) )
  {
    if ( v2 == 1 )
    {
      PlayScreenModel::initializeRealmsWorlds(*((PlayScreenModel **)v1 + 108));
    }
    else if ( !v2 )
      v3 = PlayScreenModel::getWorlds(*((PlayScreenModel **)v1 + 108));
      if ( *(_QWORD *)v3 >> 32 != (unsigned int)*(_QWORD *)v3 )
      {
        sub_21E034C(&v11);
        v4 = PlayScreenModel::getLastPlayerCountUpdate(*((PlayScreenModel **)v1 + 108));
        v5 = 1000000000LL * PlayScreenController::mFiveSecondInterval;
        v6 = HIDWORD(v5) + 1000000000 * unk_27B5404;
        v8 = *(_QWORD *)&v11 - *(_QWORD *)v4;
        v7 = (unsigned int)v5 >= (unsigned int)v8;
        LODWORD(v8) = 0;
        if ( v7 )
          LODWORD(v8) = 1;
        v9 = 0;
        if ( v6 >= SHIDWORD(v8) )
          v9 = 1;
        if ( v6 == HIDWORD(v8) )
          v9 = v8;
        if ( !v9 )
          PlayScreenModel::fetchRealmsPlayerCounts(*((PlayScreenModel **)v1 + 108));
      }
  }
  result = 0;
  if ( *((_BYTE *)v1 + 450) )
    *((_BYTE *)v1 + 450) = 0;
    result = 1;
  return result;
}


int *__fastcall PlayScreenController::onOpen(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  int v2; // r1@1
  __int64 v3; // r2@1
  int v4; // r0@1
  int v5; // r0@3
  int v6; // r1@3
  unsigned int v7; // r0@6
  unsigned int v8; // r0@7

  v1 = this;
  PlayScreenModel::setForceUpdate(*((PlayScreenModel **)this + 108));
  v4 = *((_DWORD *)v1 + 111);
  if ( v4 == 2 )
  {
    v5 = *((_DWORD *)v1 + 108);
    v6 = 1;
  }
  else
    if ( v4 )
      goto LABEL_6;
    v6 = 0;
  PlayScreenModel::refresh(v5, v6);
LABEL_6:
  v7 = *((_WORD *)v1 + 224);
  if ( (_BYTE)v7 )
    PlayScreenModel::refresh(*((_DWORD *)v1 + 108), 2);
    *((_BYTE *)v1 + 448) = 0;
    v8 = *((_BYTE *)v1 + 449);
    v8 = v7 >> 8;
  if ( v8 )
    PlayScreenModel::fetchThirdPartyServerWorlds(*((PlayScreenModel **)v1 + 108));
    *((_BYTE *)v1 + 449) = 0;
  return j_j_j__ZN16ScreenController6onOpenEv_0(v1, v2, v3);
}


int __fastcall PlayScreenController::addStaticScreenVars(PlayScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  PlayScreenController *v3; // r4@1
  int v4; // r6@1
  char v5; // r0@1
  int v6; // r6@1
  int v7; // r6@1
  int v8; // r6@1
  char v9; // r0@1
  int v11; // [sp+0h] [bp-58h]@1
  char v12; // [sp+10h] [bp-48h]@1
  char v13; // [sp+20h] [bp-38h]@1
  char v14; // [sp+30h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$realms_disabled_for_beta");
  v5 = MinecraftScreenModel::isRealmsDisabledForBeta(*((MinecraftScreenModel **)v3 + 108));
  Json::Value::Value((Json::Value *)&v14, v5);
  Json::Value::operator=(v4, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v14);
  v6 = Json::Value::operator[](v2, "$local_world_upload");
  Json::Value::Value((Json::Value *)&v13, 0);
  Json::Value::operator=(v6, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  v7 = Json::Value::operator[](v2, "$default_tab");
  Json::Value::Value((Json::Value *)&v12, *((_DWORD *)v3 + 111));
  Json::Value::operator=(v7, (const Json::Value *)&v12);
  Json::Value::~Value((Json::Value *)&v12);
  v8 = Json::Value::operator[](v2, "$supports_legacy_worlds");
  v9 = PlayScreenModel::supportsLegacyWorlds(*((PlayScreenModel **)v3 + 108));
  Json::Value::Value((Json::Value *)&v11, v9);
  Json::Value::operator=(v8, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  ScreenController::addStaticScreenVars(v3, v2);
  return PlayScreenModel::setPlayScreenDefaultTab(*((_DWORD *)v3 + 108), *((_DWORD *)v3 + 111));
}


void __fastcall PlayScreenController::~PlayScreenController(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  void *v2; // r0@1
  int v3; // r0@3
  int v4; // r5@5
  unsigned int *v5; // r1@6
  unsigned int v6; // r0@8
  unsigned int *v7; // r6@12
  unsigned int v8; // r0@14

  v1 = this;
  *(_DWORD *)this = &off_26E2C48;
  v2 = (void *)*((_DWORD *)this + 113);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)v1 + 113) = 0;
  v3 = *((_DWORD *)v1 + 110);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 110) = 0;
  v4 = *((_DWORD *)v1 + 109);
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  MainMenuScreenController::~MainMenuScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall PlayScreenController::_getCollectionName(PlayScreenController *this, UIPropertyBag *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  Json::Value *v5; // r5@1
  Json::Value *v6; // r5@3
  char *v7; // r1@4
  char *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+8h] [bp-20h]@1
  char v12; // [sp+14h] [bp-14h]@4

  v3 = a3;
  v4 = (int *)this;
  sub_1590164((void **)&v11, (const char *)&unk_257BC67);
  v5 = (Json::Value *)(v3 + 8);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_name"), Json::Value::isString(v6) != 1) )
  {
    *v4 = (int)v11;
    v7 = (char *)&unk_28898CC;
    v11 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as(v4, (int)&v12, (int)v6);
    v7 = v11;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v8);
}


signed int __fastcall PlayScreenController::_areRealmsFetched(PlayScreenController *this)
{
  PlayScreenController *v1; // r5@1
  signed int v2; // r4@2
  signed int result; // r0@5

  v1 = this;
  if ( *((_BYTE *)this + 456) )
  {
    v2 = 0;
    if ( PlayScreenModel::getRealmsFirstFetchComplete(*((PlayScreenModel **)this + 108)) == 1
      && !PlayScreenModel::getRealmsStatus(*((PlayScreenModel **)v1 + 108)) )
    {
      v2 = 1;
    }
    result = v2;
  }
  else
    result = 0;
  return result;
}


void **__fastcall PlayScreenController::_getPingTextureName(PlayScreenController *this, const NetworkWorldInfo *a2, WorldInfo *a3)
{
  NetworkWorldInfo *v3; // r5@1
  void **v4; // r4@1
  const NetworkWorldInfo *v5; // r6@1
  signed int v6; // r0@3
  void **result; // r0@6

  v3 = a3;
  v4 = (void **)this;
  v5 = a2;
  if ( WorldInfo::isValid(a3) == 1 && MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)v5 + 95), 0) )
  {
    v6 = NetworkWorldInfo::getPingStatus(v3);
    switch ( v6 )
    {
      case 3:
        result = sub_1590164(v4, "textures/ui/Ping_Red");
        break;
      case 2:
        result = sub_1590164(v4, "textures/ui/Ping_Yellow");
      case 1:
        result = sub_1590164(v4, "textures/ui/Ping_Green");
      default:
        result = sub_1590164(v4, "textures/ui/Ping_Offline_Red");
    }
  }
  else
    result = sub_1590164(v4, "textures/ui/Ping_Offline_Red");
  return result;
}


signed int __fastcall PlayScreenController::_getNetworkGridSize(int a1, int a2, int a3)
{
  int v3; // r4@1
  signed int result; // r0@1

  v3 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  result = PlayScreenModel::getWorldCount(*(_DWORD *)(a2 + 432), 1, a3);
  if ( result >= 1 )
  {
    *(_DWORD *)v3 = 1;
    *(_DWORD *)(v3 + 4) = result;
  }
  return result;
}


ScreenController *__fastcall PlayScreenController::~PlayScreenController(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  void *v2; // r0@1
  int v3; // r0@3
  int v4; // r5@5
  unsigned int *v5; // r1@6
  unsigned int v6; // r0@8
  unsigned int *v7; // r6@12
  unsigned int v8; // r0@14

  v1 = this;
  *(_DWORD *)this = &off_26E2C48;
  v2 = (void *)*((_DWORD *)this + 113);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)v1 + 113) = 0;
  v3 = *((_DWORD *)v1 + 110);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 110) = 0;
  v4 = *((_DWORD *)v1 + 109);
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  return j_j_j__ZN24MainMenuScreenControllerD2Ev(v1);
}


void __fastcall PlayScreenController::_getCollectionName(PlayScreenController *this, UIPropertyBag *a2, int a3)
{
  PlayScreenController::_getCollectionName(this, a2, a3);
}


void __fastcall PlayScreenController::~PlayScreenController(PlayScreenController *this)
{
  PlayScreenController::~PlayScreenController(this);
}


void __fastcall PlayScreenController::_errorStoreUnavailable(PlayScreenController *this)
{
  PlayScreenController::_errorStoreUnavailable(this);
}


const void **__fastcall PlayScreenController::_getRealmsUnavailableMessage(PlayScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  int v4; // r6@1
  signed int v5; // r7@1
  const void **result; // r0@4

  v2 = a2;
  v3 = (void **)this;
  sub_1590164((void **)this, (const char *)&unk_257BC67);
  v4 = PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v2 + 432));
  v5 = MinecraftScreenModel::isRealmsEnabled(*(MinecraftScreenModel **)(v2 + 432));
  if ( MinecraftScreenModel::isRealmsDisabledForBeta(*(MinecraftScreenModel **)(v2 + 432)) == 1
    && (MinecraftScreenModel::isHolographic(*(MinecraftScreenModel **)(v2 + 432))
     || MinecraftScreenModel::isVRMode(*(MinecraftScreenModel **)(v2 + 432)) == 1) )
  {
    result = sub_15903F4(v3, "http://pocketbeta.minecraft.net/p/how-to-join-and-leave-beta.html", (_BYTE *)0x41);
  }
  else if ( v5 == 1 )
    if ( *(_BYTE *)(v2 + 456) )
    {
      result = *(const void ***)(v2 + 460);
      switch ( result )
      {
        case 0u:
          if ( v4 )
          {
            result = (const void **)PlayScreenModel::getRealmsStatus(*(PlayScreenModel **)(v2 + 432));
            if ( result )
              result = sub_15903F4(v3, "disconnectionScreen.cantConnectToRealms", (_BYTE *)0x27);
          }
          else
            result = sub_15903F4(v3, "playscreen.fetchingRealms", (_BYTE *)0x19);
          break;
        case 2u:
          result = sub_15903F4(v3, "playscreen.realmClientOutdated", (_BYTE *)0x1E);
        case 3u:
          result = sub_15903F4(v3, "disconnectionScreen.realmsAlphaEndedMessage", (_BYTE *)0x2B);
        case 1u:
          result = sub_15903F4(v3, "disconnectionScreen.cantConnectToRealms", (_BYTE *)0x27);
        default:
          return result;
      }
    }
    else
      result = sub_15903F4(v3, "playscreen.realmsCompatibilityFailure", (_BYTE *)0x25);
  else
    result = sub_15903F4(v3, "realmsWorld.notAvailable", (_BYTE *)0x18);
  return result;
}


int __fastcall PlayScreenController::_getCollectionIndex(PlayScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  int result; // r0@5

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v3))
    && Json::Value::isUInt(v3) != 1 )
  {
    result = -1;
  }
  else
    result = j_j_j__ZNK4Json5Value5asIntEi_2(v3, 0);
  return result;
}


ModalScreenData *__fastcall PlayScreenController::_displayReportWorldModalDialog(PlayScreenController *this, const LegacyWorldInfo *a2, int a3)
{
  PlayScreenController *v3; // r5@1
  const LegacyWorldInfo *v4; // r7@1
  int v5; // r6@1
  unsigned int *v6; // r0@10
  unsigned int v7; // r1@12
  void *v8; // r6@15
  unsigned int *v9; // r0@16
  unsigned int v10; // r1@18
  __int64 v11; // r2@21
  void *v12; // r0@23
  unsigned int *v13; // r2@25
  unsigned int v14; // r1@27
  int v15; // r0@32
  unsigned int *v16; // r2@33
  unsigned int v17; // r1@35
  unsigned int *v19; // r2@41
  signed int v20; // r1@43
  int v21; // [sp+0h] [bp-E8h]@9
  int v22; // [sp+4h] [bp-E4h]@9
  int v23; // [sp+8h] [bp-E0h]@15
  int v24; // [sp+68h] [bp-80h]@15
  char v25; // [sp+70h] [bp-78h]@15
  void *v26; // [sp+7Ch] [bp-6Ch]@21
  void (*v27)(void); // [sp+84h] [bp-64h]@15
  int (__fastcall *v28)(int, int); // [sp+88h] [bp-60h]@21
  int v29; // [sp+8Ch] [bp-5Ch]@9
  int v30; // [sp+90h] [bp-58h]@9
  void *v31; // [sp+94h] [bp-54h]@1
  int v32; // [sp+98h] [bp-50h]@1
  int v33; // [sp+9Ch] [bp-4Ch]@1
  int v34; // [sp+A0h] [bp-48h]@1
  void *v35; // [sp+A4h] [bp-44h]@1
  int v36; // [sp+A8h] [bp-40h]@1
  int v37; // [sp+ACh] [bp-3Ch]@1
  int v38; // [sp+B0h] [bp-38h]@1
  void *v39; // [sp+B4h] [bp-34h]@1
  void *v40; // [sp+B8h] [bp-30h]@1
  void *v41; // [sp+BCh] [bp-2Ch]@1
  void *v42; // [sp+C0h] [bp-28h]@1
  int v43; // [sp+C4h] [bp-24h]@1
  char v44; // [sp+C8h] [bp-20h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v31 = &unk_28898CC;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = &unk_28898CC;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = &unk_28898CC;
  v40 = &unk_28898CC;
  v41 = &unk_28898CC;
  v42 = &unk_28898CC;
  v43 = 1;
  v44 = 0;
  if ( PlayScreenModel::supportsLegacyWorldUpload(*((PlayScreenModel **)this + 108)) == 1 )
  {
    v43 = 1;
    sub_21E8190(&v40, "worldConversionErrorPrompt.sendWorld", (_BYTE *)0x24);
    sub_21E8190(&v42, "worldConversionErrorPrompt.backToWorld", (_BYTE *)0x26);
  }
  else
    v43 = 2;
    sub_21E8190(&v41, "gui.ok", (_BYTE *)6);
  if ( v5 == 1 )
    sub_21E8190(&v31, "worldConversionErrorPrompt.title", (_BYTE *)0x20);
    if ( PlayScreenModel::supportsLegacyWorldUpload(*((PlayScreenModel **)v3 + 108)) == 1 )
      sub_21E8190(&v35, "worldConversionErrorPrompt.message.upload", (_BYTE *)0x29);
    else
      sub_21E8190(&v35, "worldConversionErrorPrompt.message", (_BYTE *)0x22);
    sub_21E8190(&v31, "worldConversion.feedback.prompt.title", (_BYTE *)0x25);
    sub_21E8190(&v35, "worldConversion.feedback.prompt.msg", (_BYTE *)0x23);
  MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>((int)&v29, (int)v3);
  v21 = v29;
  v22 = v30;
  if ( v30 )
    v6 = (unsigned int *)(v30 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
      ++*v6;
  LocalWorldInfo::LocalWorldInfo((int)&v23, (int)v4);
  sub_15901A4(&v24, (int *)v4 + 24);
  v25 = v5;
  v27 = 0;
  v8 = operator new(0x78u);
  *(_DWORD *)v8 = v21;
  *((_DWORD *)v8 + 1) = v22;
  if ( v22 )
    v9 = (unsigned int *)(v22 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  LocalWorldInfo::LocalWorldInfo((int)v8 + 8, (int)&v23);
  sub_15901A4((int *)v8 + 26, &v24);
  *((_BYTE *)v8 + 112) = v25;
  v26 = v8;
  v27 = (void (*)(void))sub_11F204C;
  v28 = sub_11F1EE8;
  LODWORD(v11) = &v26;
  MinecraftScreenController::_displayCustomModalPopup((int)v3, (int)&v31, v11);
  if ( v27 )
    v27();
  v12 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v23);
    v13 = (unsigned int *)(v22 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v22 + 12))();
  v15 = v30;
    v16 = (unsigned int *)(v30 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      (*(void (**)(void))(*(_DWORD *)v15 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v31);
}


int __fastcall PlayScreenController::_startLocalWorld(PlayScreenController *this, LocalWorldInfo *a2)
{
  LocalWorldInfo *v2; // r7@1
  PlayScreenController *v3; // r4@1
  int v4; // r4@2
  int *v5; // r6@2
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  _DWORD *v8; // r7@9
  unsigned int *v9; // r0@10
  unsigned int v10; // r1@12
  __int64 v11; // r0@15
  unsigned int *v12; // r2@18
  unsigned int v13; // r1@20
  int v14; // r0@25
  unsigned int *v15; // r2@26
  unsigned int v16; // r1@28
  int v18; // [sp+0h] [bp-98h]@2
  int v19; // [sp+4h] [bp-94h]@2
  int v20; // [sp+8h] [bp-90h]@9
  _DWORD *v21; // [sp+68h] [bp-30h]@15
  void (*v22)(void); // [sp+70h] [bp-28h]@9
  int v23; // [sp+78h] [bp-20h]@2
  int v24; // [sp+7Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( LocalWorldInfo::hasCloudStorage(a2) == 1 )
  {
    MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>((int)&v23, (int)v3);
    v4 = *((_DWORD *)v3 + 108);
    v5 = (int *)LocalWorldInfo::getLevelSummary(v2);
    v18 = v23;
    v19 = v24;
    if ( v24 )
    {
      v6 = (unsigned int *)(v24 + 8);
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
    LocalWorldInfo::LocalWorldInfo((int)&v20, (int)v2);
    v22 = 0;
    v8 = operator new(0x68u);
    *v8 = v18;
    v8[1] = v19;
    if ( v19 )
      v9 = (unsigned int *)(v19 + 8);
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
        ++*v9;
    LocalWorldInfo::LocalWorldInfo((int)(v8 + 2), (int)&v20);
    LODWORD(v11) = sub_11EB440;
    v21 = v8;
    HIDWORD(v11) = sub_11EB0E0;
    *(_QWORD *)&v22 = v11;
    PlayScreenModel::navigateToWorldSyncModalScreen(v4, v5, (int)&v21);
    if ( v22 )
      v22();
    LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v20);
      v12 = (unsigned int *)(v19 + 8);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (**)(void))(*(_DWORD *)v19 + 12))();
    v14 = v24;
      v15 = (unsigned int *)(v24 + 8);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (**)(void))(*(_DWORD *)v14 + 12))();
  }
  else
    PlayScreenController::_startLocalWorldSubRoutine(v3, v2);
  return 0;
}


void __fastcall PlayScreenController::_openProcessWorldProgressDialog(PlayScreenController *this)
{
  PlayScreenController::_openProcessWorldProgressDialog(this);
}


signed int __fastcall PlayScreenController::tick(PlayScreenController *this)
{
  PlayScreenController *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  PlayScreenModel::refresh(*((_DWORD *)this + 108), 0);
  PlayScreenModel::refresh(*((_DWORD *)v1 + 108), 1);
  PlayScreenController::_updateFriendsTab(v1);
  if ( MinecraftScreenModel::isRealmsEnabled(*((MinecraftScreenModel **)v1 + 108)) == 1 )
    v2 = PlayScreenController::_tickRealms(v1);
  if ( PlayScreenModel::isDirty(*((PlayScreenModel **)v1 + 108)) )
    v2 |= 1u;
  return v2;
}


const void **__fastcall PlayScreenController::getAdditionalScreenInfo(PlayScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  const void **result; // r0@1

  v2 = a2;
  v3 = (void **)this;
  sub_1590164((void **)this, (const char *)&unk_257BC67);
  result = *(const void ***)(v2 + 444);
  if ( result )
  {
    if ( result == (const void **)1 )
    {
      result = sub_15903F4(v3, " - friends", (_BYTE *)0xA);
    }
    else if ( result == (const void **)2 )
      result = sub_15903F4(v3, " - servers", (_BYTE *)0xA);
  }
  else
    result = sub_15903F4(v3, " - worlds", (_BYTE *)9);
  return result;
}


int __fastcall PlayScreenController::_handleStartRealm(PlayScreenController *this, int a2)
{
  PlayScreenController *v2; // r8@1
  int v3; // r5@1
  int v4; // r6@4
  char *v5; // r7@4
  signed int v6; // r10@4
  int v7; // r9@4
  _DWORD *v8; // r0@4
  char *v9; // r6@4
  size_t v10; // r2@4
  int v11; // r0@8
  signed int v12; // r11@8
  signed int v13; // r1@8
  int v14; // r4@12
  int v15; // r0@20
  int v16; // r5@22
  __int64 v17; // kr00_8@22
  unsigned int *v18; // r0@23
  unsigned int v19; // r1@25
  void *v20; // r5@27
  void *v21; // r0@27
  unsigned int *v22; // r0@30
  unsigned int v23; // r1@32
  unsigned int *v24; // r1@34
  signed int v25; // r0@36
  __int64 v26; // kr08_8@42
  unsigned int *v27; // r0@44
  unsigned int v28; // r1@45
  int *v29; // r10@46
  int v30; // r0@46
  unsigned int *v31; // r0@50
  unsigned int v32; // r1@52
  _QWORD *v33; // r0@55
  unsigned int *v34; // r1@56
  unsigned int v35; // r2@58
  __int64 v36; // r1@61
  unsigned int *v37; // r1@64
  unsigned int v38; // r0@66
  void *v39; // r0@71
  void *v40; // r0@72
  void *v41; // r0@73
  unsigned int *v42; // r2@74
  signed int v43; // r1@76
  unsigned int *v44; // r0@80
  unsigned int v45; // r1@82
  unsigned int *v46; // r0@86
  unsigned int v47; // r1@88
  __int64 v48; // kr10_8@91
  unsigned int *v49; // r0@93
  unsigned int v50; // r1@94
  int v51; // r0@95
  unsigned int *v52; // r0@99
  unsigned int v53; // r1@101
  unsigned int *v54; // r0@105
  unsigned int v55; // r1@107
  unsigned int *v56; // r0@111
  unsigned int v57; // r1@113
  int v58; // r4@116
  int v59; // r12@116
  int v60; // r0@116
  unsigned int *v61; // r0@117
  unsigned int v62; // r1@119
  unsigned int *v63; // r0@123
  unsigned int v64; // r1@125
  unsigned int *v65; // r0@129
  unsigned int v66; // r1@131
  _DWORD *v67; // r0@134
  int v68; // r1@134
  unsigned int *v69; // r1@135
  unsigned int v70; // r2@137
  int v71; // r1@140
  bool v72; // zf@140
  unsigned int *v73; // r1@141
  unsigned int v74; // r2@143
  int v75; // r12@146
  void *v76; // r2@146
  void *v77; // r2@146
  void *v78; // r2@146
  void *v79; // r2@146
  int v80; // r3@146
  int v81; // r4@146
  int v82; // r5@146
  int v83; // r6@146
  int v84; // r7@146
  int v85; // r12@146
  int v86; // r1@146
  int v87; // r2@146
  int v88; // r2@146
  int v89; // r2@146
  unsigned int *v90; // r2@147
  unsigned int v91; // r3@149
  int v92; // lr@152
  int v93; // r7@152
  void *v94; // r3@152
  void *v95; // r3@152
  void *v96; // r3@152
  void *v97; // r3@152
  int v98; // r3@152
  int v99; // r4@152
  int v100; // r5@152
  int v101; // r6@152
  int v102; // r7@152
  int v103; // lr@152
  __int16 v104; // r1@152
  int v105; // r1@152
  int v106; // r1@152
  int v107; // r1@152
  unsigned int *v108; // r0@153
  unsigned int v109; // r1@155
  _DWORD *v110; // r0@158
  unsigned int *v111; // r1@159
  unsigned int v112; // r2@161
  __int64 v113; // r1@164
  unsigned int *v114; // r1@167
  unsigned int v115; // r0@169
  int v116; // r0@176
  unsigned int *v117; // r2@177
  unsigned int v118; // r1@179
  int v119; // r0@184
  unsigned int *v120; // r2@185
  unsigned int v121; // r1@187
  int v122; // r0@192
  unsigned int *v123; // r2@193
  unsigned int v124; // r1@195
  void *v125; // r0@200
  int v126; // r0@201
  unsigned int *v127; // r0@202
  unsigned int v128; // r1@204
  unsigned int *v129; // r0@208
  unsigned int v130; // r1@210
  unsigned int *v131; // r0@214
  unsigned int v132; // r1@216
  _DWORD *v133; // r0@219
  int v134; // r1@219
  unsigned int *v135; // r1@220
  unsigned int v136; // r2@222
  int v137; // r12@225
  void *v138; // r2@225
  void *v139; // r2@225
  void *v140; // r2@225
  void *v141; // r2@225
  int v142; // r3@225
  int v143; // r4@225
  int v144; // r5@225
  int v145; // r6@225
  int v146; // r7@225
  int v147; // r12@225
  int v148; // r1@225
  int v149; // r2@225
  int v150; // r2@225
  int v151; // r2@225
  unsigned int *v152; // r2@226
  unsigned int v153; // r3@228
  int v154; // lr@231
  int v155; // r7@231
  void *v156; // r3@231
  void *v157; // r3@231
  void *v158; // r3@231
  void *v159; // r3@231
  int v160; // r3@231
  int v161; // r4@231
  int v162; // r5@231
  int v163; // r6@231
  int v164; // r7@231
  int v165; // lr@231
  __int16 v166; // r1@231
  int v167; // r1@231
  int v168; // r1@231
  int v169; // r1@231
  int v170; // r1@231
  unsigned int *v171; // r1@232
  unsigned int v172; // r2@234
  __int64 v173; // r1@237
  int v174; // r0@239
  unsigned int *v175; // r2@240
  unsigned int v176; // r1@242
  int v177; // r0@247
  unsigned int *v178; // r2@248
  unsigned int v179; // r1@250
  int v180; // r0@255
  unsigned int *v181; // r2@256
  unsigned int v182; // r1@258
  int v183; // r4@263
  void *v184; // r0@267
  int v185; // r4@268
  void *v186; // r0@268
  int v187; // r0@269
  unsigned int *v188; // r2@270
  unsigned int v189; // r1@272
  int v190; // r0@277
  unsigned int *v191; // r2@278
  unsigned int v192; // r1@280
  int v193; // r0@285
  unsigned int *v194; // r2@286
  unsigned int v195; // r1@288
  unsigned int *v196; // r1@294
  unsigned int v197; // r0@296
  int v198; // r0@301
  unsigned int *v199; // r2@302
  unsigned int v200; // r1@304
  int v201; // r0@309
  unsigned int *v202; // r2@310
  unsigned int v203; // r1@312
  int v204; // r0@317
  unsigned int *v205; // r2@318
  unsigned int v206; // r1@320
  unsigned int *v207; // r1@326
  unsigned int v208; // r0@328
  int v209; // r0@333
  unsigned int *v210; // r2@334
  unsigned int v211; // r1@336
  int v212; // r0@341
  unsigned int *v213; // r2@342
  unsigned int v214; // r1@344
  unsigned int *v216; // r2@350
  signed int v217; // r1@352
  unsigned int *v218; // r2@354
  signed int v219; // r1@356
  unsigned int *v220; // r2@358
  signed int v221; // r1@360
  unsigned int *v222; // r2@362
  signed int v223; // r1@364
  unsigned int *v224; // r2@366
  signed int v225; // r1@368
  int *v226; // [sp+8h] [bp-410h]@95
  int v227; // [sp+Ch] [bp-40Ch]@93
  void *v228; // [sp+Ch] [bp-40Ch]@201
  void *v229; // [sp+1Ch] [bp-3FCh]@116
  int *v230; // [sp+24h] [bp-3F4h]@95
  int *v231; // [sp+30h] [bp-3E8h]@46
  int v232; // [sp+34h] [bp-3E4h]@95
  int v233; // [sp+3Ch] [bp-3DCh]@268
  void *v234; // [sp+40h] [bp-3D8h]@263
  void *v235; // [sp+44h] [bp-3D4h]@263
  int v236; // [sp+4Ch] [bp-3CCh]@263
  __int64 v237; // [sp+50h] [bp-3C8h]@95
  int v238; // [sp+58h] [bp-3C0h]@104
  __int64 v239; // [sp+A0h] [bp-378h]@104
  int v240; // [sp+A8h] [bp-370h]@110
  char v241; // [sp+F0h] [bp-328h]@110
  __int64 v242; // [sp+F8h] [bp-320h]@110
  __int64 v243; // [sp+100h] [bp-318h]@46
  __int64 v244; // [sp+108h] [bp-310h]@79
  int v245; // [sp+110h] [bp-308h]@85
  char v246; // [sp+158h] [bp-2C0h]@85
  __int64 v247; // [sp+160h] [bp-2B8h]@85
  int v248; // [sp+168h] [bp-2B0h]@91
  int v249; // [sp+1B0h] [bp-268h]@91
  __int64 v250; // [sp+1B8h] [bp-260h]@29
  int v251; // [sp+1C0h] [bp-258h]@42
  char v252; // [sp+208h] [bp-210h]@42
  _QWORD *v253; // [sp+214h] [bp-204h]@61
  void (*v254)(void); // [sp+21Ch] [bp-1FCh]@55
  int v255; // [sp+228h] [bp-1F0h]@22
  int v256; // [sp+230h] [bp-1E8h]@22
  int v257; // [sp+234h] [bp-1E4h]@22
  __int64 v258; // [sp+238h] [bp-1E0h]@22
  void *s2; // [sp+244h] [bp-1D4h]@4
  __int64 v260; // [sp+248h] [bp-1D0h]@4
  _DWORD *v261; // [sp+250h] [bp-1C8h]@164
  void (*v262)(void); // [sp+258h] [bp-1C0h]@158
  int v263; // [sp+260h] [bp-1B8h]@116
  int v264; // [sp+264h] [bp-1B4h]@116
  __int64 v265; // [sp+268h] [bp-1B0h]@122
  int v266; // [sp+270h] [bp-1A8h]@128
  int v267; // [sp+278h] [bp-1A0h]@146
  void *v268; // [sp+27Ch] [bp-19Ch]@146
  void *v269; // [sp+280h] [bp-198h]@146
  void *v270; // [sp+284h] [bp-194h]@146
  void *v271; // [sp+288h] [bp-190h]@146
  int v272; // [sp+28Ch] [bp-18Ch]@146
  int v273; // [sp+290h] [bp-188h]@146
  int v274; // [sp+294h] [bp-184h]@146
  int v275; // [sp+298h] [bp-180h]@146
  int v276; // [sp+29Ch] [bp-17Ch]@146
  int v277; // [sp+2A0h] [bp-178h]@146
  __int16 v278; // [sp+2A4h] [bp-174h]@146
  char v279; // [sp+2A6h] [bp-172h]@146
  int v280; // [sp+2A8h] [bp-170h]@146
  int v281; // [sp+2ACh] [bp-16Ch]@146
  int v282; // [sp+2B0h] [bp-168h]@146
  char v283; // [sp+2B8h] [bp-160h]@128
  __int64 v284; // [sp+2C0h] [bp-158h]@128
  int v285; // [sp+2C8h] [bp-150h]@134
  int v286; // [sp+2CCh] [bp-14Ch]@152
  int v287; // [sp+2D0h] [bp-148h]@152
  void *v288; // [sp+2D4h] [bp-144h]@152
  void *v289; // [sp+2D8h] [bp-140h]@152
  void *v290; // [sp+2DCh] [bp-13Ch]@152
  void *v291; // [sp+2E0h] [bp-138h]@152
  int v292; // [sp+2E4h] [bp-134h]@152
  int v293; // [sp+2E8h] [bp-130h]@152
  int v294; // [sp+2ECh] [bp-12Ch]@152
  int v295; // [sp+2F0h] [bp-128h]@152
  int v296; // [sp+2F4h] [bp-124h]@152
  int v297; // [sp+2F8h] [bp-120h]@152
  __int16 v298; // [sp+2FCh] [bp-11Ch]@152
  char v299; // [sp+2FEh] [bp-11Ah]@152
  int v300; // [sp+300h] [bp-118h]@152
  int v301; // [sp+304h] [bp-114h]@152
  int v302; // [sp+308h] [bp-110h]@152
  int v303; // [sp+310h] [bp-108h]@134
  _DWORD *v304; // [sp+318h] [bp-100h]@152
  void (*v305)(void); // [sp+320h] [bp-F8h]@134
  int (__fastcall *v306)(int); // [sp+324h] [bp-F4h]@152
  int v307; // [sp+32Ch] [bp-ECh]@116
  int v308; // [sp+330h] [bp-E8h]@201
  int v309; // [sp+334h] [bp-E4h]@201
  int v310; // [sp+338h] [bp-E0h]@207
  int v311; // [sp+340h] [bp-D8h]@225
  void *v312; // [sp+344h] [bp-D4h]@225
  void *v313; // [sp+348h] [bp-D0h]@225
  void *v314; // [sp+34Ch] [bp-CCh]@225
  void *v315; // [sp+350h] [bp-C8h]@225
  int v316; // [sp+354h] [bp-C4h]@225
  int v317; // [sp+358h] [bp-C0h]@225
  int v318; // [sp+35Ch] [bp-BCh]@225
  int v319; // [sp+360h] [bp-B8h]@225
  int v320; // [sp+364h] [bp-B4h]@225
  int v321; // [sp+368h] [bp-B0h]@225
  __int16 v322; // [sp+36Ch] [bp-ACh]@225
  char v323; // [sp+36Eh] [bp-AAh]@225
  int v324; // [sp+370h] [bp-A8h]@225
  int v325; // [sp+374h] [bp-A4h]@225
  int v326; // [sp+378h] [bp-A0h]@225
  __int64 v327; // [sp+380h] [bp-98h]@207
  int v328; // [sp+388h] [bp-90h]@213
  int v329; // [sp+38Ch] [bp-8Ch]@231
  int v330; // [sp+390h] [bp-88h]@231
  void *v331; // [sp+394h] [bp-84h]@231
  void *v332; // [sp+398h] [bp-80h]@231
  void *v333; // [sp+39Ch] [bp-7Ch]@231
  void *v334; // [sp+3A0h] [bp-78h]@231
  int v335; // [sp+3A4h] [bp-74h]@231
  int v336; // [sp+3A8h] [bp-70h]@231
  int v337; // [sp+3ACh] [bp-6Ch]@231
  int v338; // [sp+3B0h] [bp-68h]@231
  int v339; // [sp+3B4h] [bp-64h]@231
  int v340; // [sp+3B8h] [bp-60h]@231
  __int16 v341; // [sp+3BCh] [bp-5Ch]@231
  char v342; // [sp+3BEh] [bp-5Ah]@231
  int v343; // [sp+3C0h] [bp-58h]@231
  int v344; // [sp+3C4h] [bp-54h]@231
  int v345; // [sp+3C8h] [bp-50h]@231
  char v346; // [sp+3D0h] [bp-48h]@213
  __int64 v347; // [sp+3D8h] [bp-40h]@213
  _DWORD *v348; // [sp+3E0h] [bp-38h]@237
  void (*v349)(void); // [sp+3E8h] [bp-30h]@219

  v2 = this;
  v3 = a2;
  if ( !MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 108), 1) )
  {
    MinecraftScreenController::_showNoWifiModal(v2);
    return 0;
  }
  if ( !MinecraftScreenModel::isLiveMultiplayerAllowed(*((MinecraftScreenModel **)v2 + 108)) )
    MinecraftScreenController::_showLiveMultiplayerModal(v2);
  if ( !MinecraftScreenModel::isValidMultiplayerSkin(*((MinecraftScreenModel **)v2 + 108)) )
    MainMenuScreenController::showInvalidMultiplayerSkinModal(v2);
  v4 = *(_DWORD *)PlayScreenModel::getWorlds(*((PlayScreenModel **)v2 + 108));
  MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>((int)&v260, (int)v2);
  MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&s2, *((_DWORD *)v2 + 108));
  v5 = (char *)s2;
  v6 = 0;
  v7 = v4 + 72 * v3;
  v8 = *(_DWORD **)(v7 + 20);
  v9 = (char *)s2 - 12;
  v10 = *(v8 - 3);
  if ( v10 == *((_DWORD *)s2 - 3) && !memcmp(v8, s2, v10) )
    v6 = 1;
  if ( (int *)v9 != &dword_28898C0 )
    v24 = (unsigned int *)(v5 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v9);
  v11 = PlayScreenModel::getRealmWorldsPartitionIndex(*((PlayScreenModel **)v2 + 108));
  v12 = 0;
  v13 = 0;
  if ( v11 <= v3 )
    v12 = 1;
  if ( !*(_BYTE *)(v7 + 32) )
    if ( !*(_BYTE *)(v7 + 53) )
      v13 = 1;
    if ( !(v6 | v13) )
      goto LABEL_341;
    v15 = *(_DWORD *)(v7 + 8);
    if ( v15 != 2 )
      if ( !v15 )
      {
        v16 = *((_DWORD *)v2 + 108);
        v258 = *(_QWORD *)v7;
        sub_1590164((void **)&v256, "realmsInvitationScreen.myRealm");
        I18n::get(&v257, (int **)&v256);
        sub_1590164((void **)&v255, (const char *)&unk_257BC67);
        v17 = v260;
        if ( HIDWORD(v260) )
        {
          v18 = (unsigned int *)(HIDWORD(v260) + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 + 1, v18) );
          }
          else
            ++*v18;
        }
        v254 = 0;
        v33 = operator new(8u);
        *v33 = v17;
        if ( HIDWORD(v17) )
          v34 = (unsigned int *)(HIDWORD(v17) + 8);
              v35 = __ldrex(v34);
            while ( __strex(v35 + 1, v34) );
            ++*v34;
        LODWORD(v36) = sub_11E90A0;
        v253 = v33;
        HIDWORD(v36) = sub_11E8F64;
        *(_QWORD *)&v254 = v36;
        MinecraftScreenModel::initializeRealmsWorld(v16, &v258, &v257, &v255, (int)&v253);
        if ( v254 )
          v254();
          v37 = (unsigned int *)(HIDWORD(v17) + 8);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 12))(HIDWORD(v17));
        v39 = (void *)(v255 - 12);
        if ( (int *)(v255 - 12) != &dword_28898C0 )
          v216 = (unsigned int *)(v255 - 4);
              v217 = __ldrex(v216);
            while ( __strex(v217 - 1, v216) );
            v217 = (*v216)--;
          if ( v217 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v39);
        v40 = (void *)(v257 - 12);
        if ( (int *)(v257 - 12) != &dword_28898C0 )
          v218 = (unsigned int *)(v257 - 4);
              v219 = __ldrex(v218);
            while ( __strex(v219 - 1, v218) );
            v219 = (*v218)--;
          if ( v219 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v40);
        v41 = (void *)(v256 - 12);
        if ( (int *)(v256 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v256 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v41);
      }
    v20 = operator new(0x28u);
    _aeabi_memclr8(v20, 40);
    v21 = (void *)*((_DWORD *)v2 + 113);
    *((_DWORD *)v2 + 113) = v20;
    if ( v21 )
      operator delete(v21);
    *((_BYTE *)v2 + 464) = 0;
    v250 = v260;
    if ( HIDWORD(v260) )
      v22 = (unsigned int *)(HIDWORD(v260) + 8);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
      else
        ++*v22;
    Realms::World::World((Realms::World *)&v251, (const Realms::World *)v7);
    v252 = v6;
    v26 = v260;
    if ( !HIDWORD(v260) )
      v29 = (int *)&v243;
      v243 = (unsigned int)v260;
      v231 = (int *)((unsigned int)&v243 | 4);
      goto LABEL_79;
      v27 = (unsigned int *)(HIDWORD(v260) + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 + 1, v27) );
      v30 = HIDWORD(v260);
      v243 = v260;
      if ( !HIDWORD(v260) )
LABEL_79:
        v244 = v250;
        if ( HIDWORD(v250) )
          v44 = (unsigned int *)(HIDWORD(v250) + 8);
              v45 = __ldrex(v44);
            while ( __strex(v45 + 1, v44) );
            ++*v44;
        Realms::World::World((Realms::World *)&v245, (const Realms::World *)&v251);
        v246 = v252;
        v247 = v26;
        if ( HIDWORD(v26) )
          v46 = (unsigned int *)(HIDWORD(v26) + 8);
              v47 = __ldrex(v46);
            while ( __strex(v47 + 1, v46) );
            ++*v46;
        Realms::World::World((Realms::World *)&v248, (const Realms::World *)v7);
        v249 = v12;
        v48 = v260;
            v49 = (unsigned int *)(HIDWORD(v260) + 8);
            v227 = v260;
              v50 = __ldrex(v49);
            while ( __strex(v50 + 1, v49) );
            v232 = HIDWORD(v48);
            v51 = HIDWORD(v260);
            v237 = v260;
            v226 = (int *)&v237;
            v230 = (int *)((unsigned int)&v237 | 4);
            if ( !HIDWORD(v260) )
              goto LABEL_104;
            ++*(_DWORD *)(HIDWORD(v260) + 8);
            v237 = v48;
            v51 = HIDWORD(v48);
          v52 = (unsigned int *)(v51 + 8);
              v53 = __ldrex(v52);
            while ( __strex(v53 + 1, v52) );
            ++*v52;
        else
          v237 = (unsigned int)v260;
          v226 = (int *)&v237;
          v232 = HIDWORD(v260);
          v227 = v260;
          v230 = (int *)((unsigned int)&v237 | 4);
LABEL_104:
        Realms::World::World((Realms::World *)&v238, (const Realms::World *)v7);
        v239 = v250;
          v54 = (unsigned int *)(HIDWORD(v250) + 8);
              v55 = __ldrex(v54);
            while ( __strex(v55 + 1, v54) );
            ++*v54;
        Realms::World::World((Realms::World *)&v240, (const Realms::World *)&v251);
        v241 = v252;
        v242 = v26;
          v56 = (unsigned int *)(HIDWORD(v26) + 8);
              v57 = __ldrex(v56);
            while ( __strex(v57 + 1, v56) );
            ++*v56;
        v58 = *((_DWORD *)v2 + 113);
        sub_21E034C(&v263);
        v59 = v58 + 8;
        *(_QWORD *)v59 = *(_QWORD *)&v263;
        *(_DWORD *)(v59 + 8) = 120;
        *(_DWORD *)(v58 + 20) = 0;
        *(_BYTE *)(v58 + 24) = 0;
        *(_BYTE *)(v58 + 1) = 0;
        v229 = operator new(0x34u);
        sub_1590164((void **)&v307, "realmsInvitationScreen.Realms");
        v263 = *v29;
        v60 = *v231;
        v264 = v60;
        if ( v60 )
          v61 = (unsigned int *)(v60 + 8);
              v62 = __ldrex(v61);
            while ( __strex(v62 + 1, v61) );
            ++*v61;
        v265 = v244;
        if ( HIDWORD(v244) )
          v63 = (unsigned int *)(HIDWORD(v244) + 8);
              v64 = __ldrex(v63);
            while ( __strex(v64 + 1, v63) );
            ++*v63;
        Realms::World::World((Realms::World *)&v266, (const Realms::World *)&v245);
        v283 = v246;
        v284 = v247;
        if ( HIDWORD(v247) )
          v65 = (unsigned int *)(HIDWORD(v247) + 8);
              v66 = __ldrex(v65);
            while ( __strex(v66 + 1, v65) );
            ++*v65;
        Realms::World::World((Realms::World *)&v285, (const Realms::World *)&v248);
        v303 = v249;
        v305 = 0;
        v67 = operator new(0xB8u);
        *v67 = v263;
        v68 = v264;
        v67[1] = v264;
        if ( v68 )
          v69 = (unsigned int *)(v68 + 8);
              v70 = __ldrex(v69);
            while ( __strex(v70 + 1, v69) );
            ++*v69;
        v67[2] = v265;
        v71 = HIDWORD(v265);
        v72 = HIDWORD(v265) == 0;
        v67[3] = HIDWORD(v265);
        if ( !v72 )
          v73 = (unsigned int *)(v71 + 8);
              v74 = __ldrex(v73);
            while ( __strex(v74 + 1, v73) );
            ++*v73;
        v75 = (int)(v67 + 11);
        *((_QWORD *)v67 + 2) = *(_QWORD *)&v266;
        v67[6] = v267;
        v76 = v268;
        v268 = &unk_28898CC;
        v67[7] = v76;
        v77 = v269;
        v269 = &unk_28898CC;
        v67[8] = v77;
        v78 = v270;
        v270 = &unk_28898CC;
        v67[9] = v78;
        v79 = v271;
        v271 = &unk_28898CC;
        v67[10] = v79;
        v80 = v273;
        v81 = v274;
        v82 = v275;
        v83 = v276;
        v84 = v277;
        *(_DWORD *)v75 = v272;
        *(_DWORD *)(v75 + 4) = v80;
        *(_DWORD *)(v75 + 8) = v81;
        *(_DWORD *)(v75 + 12) = v82;
        *(_DWORD *)(v75 + 16) = v83;
        *(_DWORD *)(v75 + 20) = v84;
        v85 = (int)(v67 + 17);
        LOWORD(v79) = v278;
        *(_BYTE *)(v85 + 2) = v279;
        *(_WORD *)v85 = (_WORD)v79;
        v86 = v280;
        v280 = 0;
        v87 = v281;
        v281 = 0;
        v67[18] = v86;
        v67[19] = v87;
        v88 = v282;
        v282 = 0;
        v67[20] = v88;
        *((_BYTE *)v67 + 88) = v283;
        v67[24] = v284;
        v89 = HIDWORD(v284);
        v67[25] = HIDWORD(v284);
        if ( v89 )
          v90 = (unsigned int *)(v89 + 8);
              v91 = __ldrex(v90);
            while ( __strex(v91 + 1, v90) );
            ++*v90;
        v92 = (int)(v67 + 33);
        v93 = v286;
        v67[26] = v285;
        v67[27] = v93;
        v67[28] = v287;
        v94 = v288;
        v288 = &unk_28898CC;
        v67[29] = v94;
        v95 = v289;
        v289 = &unk_28898CC;
        v67[30] = v95;
        v96 = v290;
        v290 = &unk_28898CC;
        v67[31] = v96;
        v97 = v291;
        v291 = &unk_28898CC;
        v67[32] = v97;
        v98 = v293;
        v99 = v294;
        v100 = v295;
        v101 = v296;
        v102 = v297;
        *(_DWORD *)v92 = v292;
        *(_DWORD *)(v92 + 4) = v98;
        *(_DWORD *)(v92 + 8) = v99;
        *(_DWORD *)(v92 + 12) = v100;
        *(_DWORD *)(v92 + 16) = v101;
        *(_DWORD *)(v92 + 20) = v102;
        v103 = (int)(v67 + 39);
        v104 = v298;
        *(_BYTE *)(v103 + 2) = v299;
        *(_WORD *)v103 = v104;
        v105 = v300;
        v300 = 0;
        v67[40] = v105;
        v106 = v301;
        v301 = 0;
        v67[41] = v106;
        v107 = v302;
        v302 = 0;
        v67[42] = v107;
        v67[44] = v303;
        v304 = v67;
        v305 = (void (*)(void))sub_11E9884;
        v306 = sub_11E9144;
        if ( v232 )
          v108 = (unsigned int *)(v232 + 8);
              v109 = __ldrex(v108);
            while ( __strex(v109 + 1, v108) );
            ++*v108;
        v262 = 0;
        v110 = operator new(0xCu);
        *v110 = v227;
        v110[1] = v232;
          v111 = (unsigned int *)(v232 + 8);
              v112 = __ldrex(v111);
            while ( __strex(v112 + 1, v111) );
            ++*v111;
        LODWORD(v113) = sub_11EA384;
        v110[2] = v12;
        HIDWORD(v113) = sub_11EA220;
        v261 = v110;
        *(_QWORD *)&v262 = v113;
        RealmsConnectProgressHandler::RealmsConnectProgressHandler((int)v229, &v307, (int)&v304, (int)&v261);
        if ( v262 )
          v262();
          v114 = (unsigned int *)(v232 + 8);
              v115 = __ldrex(v114);
            while ( __strex(v115 - 1, v114) );
            v115 = (*v114)--;
          if ( v115 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v232 + 12))(v232);
        if ( v305 )
          v305();
        Realms::World::~World((Realms::World *)&v285);
        v116 = HIDWORD(v284);
        if ( HIDWORD(v284) )
          v117 = (unsigned int *)(HIDWORD(v284) + 8);
              v118 = __ldrex(v117);
            while ( __strex(v118 - 1, v117) );
            v118 = (*v117)--;
          if ( v118 == 1 )
            (*(void (**)(void))(*(_DWORD *)v116 + 12))();
        Realms::World::~World((Realms::World *)&v266);
        v119 = HIDWORD(v265);
        if ( HIDWORD(v265) )
          v120 = (unsigned int *)(HIDWORD(v265) + 8);
              v121 = __ldrex(v120);
            while ( __strex(v121 - 1, v120) );
            v121 = (*v120)--;
          if ( v121 == 1 )
            (*(void (**)(void))(*(_DWORD *)v119 + 12))();
        v122 = v264;
        if ( v264 )
          v123 = (unsigned int *)(v264 + 8);
              v124 = __ldrex(v123);
            while ( __strex(v124 - 1, v123) );
            v124 = (*v123)--;
          if ( v124 == 1 )
            (*(void (**)(void))(*(_DWORD *)v122 + 12))();
        v125 = (void *)(v307 - 12);
        if ( (int *)(v307 - 12) != &dword_28898C0 )
          v220 = (unsigned int *)(v307 - 4);
              v221 = __ldrex(v220);
            while ( __strex(v221 - 1, v220) );
            v221 = (*v220)--;
          if ( v221 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v125);
        v228 = operator new(0x38u);
        v308 = *v226;
        v126 = *v230;
        v309 = v126;
        if ( v126 )
          v127 = (unsigned int *)(v126 + 8);
              v128 = __ldrex(v127);
            while ( __strex(v128 + 1, v127) );
            ++*v127;
        Realms::World::World((Realms::World *)&v310, (const Realms::World *)&v238);
        v327 = v239;
        if ( HIDWORD(v239) )
          v129 = (unsigned int *)(HIDWORD(v239) + 8);
              v130 = __ldrex(v129);
            while ( __strex(v130 + 1, v129) );
            ++*v129;
        Realms::World::World((Realms::World *)&v328, (const Realms::World *)&v240);
        v346 = v241;
        v347 = v242;
        if ( HIDWORD(v242) )
          v131 = (unsigned int *)(HIDWORD(v242) + 8);
              v132 = __ldrex(v131);
            while ( __strex(v132 + 1, v131) );
            ++*v131;
        v349 = 0;
        v133 = operator new(0xB0u);
        *v133 = v308;
        v134 = v309;
        v133[1] = v309;
        if ( v134 )
          v135 = (unsigned int *)(v134 + 8);
              v136 = __ldrex(v135);
            while ( __strex(v136 + 1, v135) );
            ++*v135;
        v137 = (int)(v133 + 9);
        *((_QWORD *)v133 + 1) = *(_QWORD *)&v310;
        v133[4] = v311;
        v138 = v312;
        v312 = &unk_28898CC;
        v133[5] = v138;
        v139 = v313;
        v313 = &unk_28898CC;
        v133[6] = v139;
        v140 = v314;
        v314 = &unk_28898CC;
        v133[7] = v140;
        v141 = v315;
        v315 = &unk_28898CC;
        v133[8] = v141;
        v142 = v317;
        v143 = v318;
        v144 = v319;
        v145 = v320;
        v146 = v321;
        *(_DWORD *)v137 = v316;
        *(_DWORD *)(v137 + 4) = v142;
        *(_DWORD *)(v137 + 8) = v143;
        *(_DWORD *)(v137 + 12) = v144;
        *(_DWORD *)(v137 + 16) = v145;
        *(_DWORD *)(v137 + 20) = v146;
        v147 = (int)(v133 + 15);
        LOWORD(v141) = v322;
        *(_BYTE *)(v147 + 2) = v323;
        *(_WORD *)v147 = (_WORD)v141;
        v148 = v324;
        v324 = 0;
        v149 = v325;
        v325 = 0;
        v133[16] = v148;
        v133[17] = v149;
        v150 = v326;
        v326 = 0;
        v133[18] = v150;
        v133[20] = v327;
        v151 = HIDWORD(v327);
        v133[21] = HIDWORD(v327);
        if ( v151 )
          v152 = (unsigned int *)(v151 + 8);
              v153 = __ldrex(v152);
            while ( __strex(v153 + 1, v152) );
            ++*v152;
        v154 = (int)(v133 + 29);
        v155 = v329;
        v133[22] = v328;
        v133[23] = v155;
        v133[24] = v330;
        v156 = v331;
        v331 = &unk_28898CC;
        v133[25] = v156;
        v157 = v332;
        v332 = &unk_28898CC;
        v133[26] = v157;
        v158 = v333;
        v333 = &unk_28898CC;
        v133[27] = v158;
        v159 = v334;
        v334 = &unk_28898CC;
        v133[28] = v159;
        v160 = v336;
        v161 = v337;
        v162 = v338;
        v163 = v339;
        v164 = v340;
        *(_DWORD *)v154 = v335;
        *(_DWORD *)(v154 + 4) = v160;
        *(_DWORD *)(v154 + 8) = v161;
        *(_DWORD *)(v154 + 12) = v162;
        *(_DWORD *)(v154 + 16) = v163;
        *(_DWORD *)(v154 + 20) = v164;
        v165 = (int)(v133 + 35);
        v166 = v341;
        *(_BYTE *)(v165 + 2) = v342;
        *(_WORD *)v165 = v166;
        v167 = v343;
        v343 = 0;
        v133[36] = v167;
        v168 = v344;
        v344 = 0;
        v133[37] = v168;
        v169 = v345;
        v345 = 0;
        v133[38] = v169;
        *((_BYTE *)v133 + 160) = v346;
        v133[42] = v347;
        v170 = HIDWORD(v347);
        v133[43] = HIDWORD(v347);
        if ( v170 )
          v171 = (unsigned int *)(v170 + 8);
              v172 = __ldrex(v171);
            while ( __strex(v172 + 1, v171) );
            ++*v171;
        LODWORD(v173) = sub_11EA8CC;
        v348 = v133;
        HIDWORD(v173) = sub_11EA430;
        *(_QWORD *)&v349 = v173;
        GameServerConnectProgressHandler::GameServerConnectProgressHandler((int)v228, 3, (int)&v348, 1);
        if ( v349 )
          v349();
        v174 = HIDWORD(v347);
        if ( HIDWORD(v347) )
          v175 = (unsigned int *)(HIDWORD(v347) + 8);
              v176 = __ldrex(v175);
            while ( __strex(v176 - 1, v175) );
            v176 = (*v175)--;
          if ( v176 == 1 )
            (*(void (**)(void))(*(_DWORD *)v174 + 12))();
        Realms::World::~World((Realms::World *)&v328);
        v177 = HIDWORD(v327);
        if ( HIDWORD(v327) )
          v178 = (unsigned int *)(HIDWORD(v327) + 8);
              v179 = __ldrex(v178);
            while ( __strex(v179 - 1, v178) );
            v179 = (*v178)--;
          if ( v179 == 1 )
            (*(void (**)(void))(*(_DWORD *)v177 + 12))();
        Realms::World::~World((Realms::World *)&v310);
        v180 = v309;
        if ( v309 )
          v181 = (unsigned int *)(v309 + 8);
              v182 = __ldrex(v181);
            while ( __strex(v182 - 1, v181) );
            v182 = (*v181)--;
          if ( v182 == 1 )
            (*(void (**)(void))(*(_DWORD *)v180 + 12))();
        v183 = *((_DWORD *)v2 + 108);
        sub_1590164((void **)&v236, "realms_join_realm");
        v235 = v228;
        v234 = v229;
        MainMenuScreenModel::navigateToRealmsWorldProgressScreen(v183, &v236, (int *)&v235, (int *)&v234);
        if ( v234 )
          (*(void (**)(void))(*(_DWORD *)v234 + 4))();
        v234 = 0;
        if ( v235 )
          (*(void (**)(void))(*(_DWORD *)v235 + 4))();
        v235 = 0;
        v184 = (void *)(v236 - 12);
        if ( (int *)(v236 - 12) != &dword_28898C0 )
          v222 = (unsigned int *)(v236 - 4);
              v223 = __ldrex(v222);
            while ( __strex(v223 - 1, v222) );
            v223 = (*v222)--;
          if ( v223 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v184);
        v185 = *((_DWORD *)v2 + 108);
        sub_1590164((void **)&v233, (const char *)&unk_257BC67);
        MinecraftScreenModel::fireEventStartWorld(v185, 4, &v233);
        v186 = (void *)(v233 - 12);
        if ( (int *)(v233 - 12) != &dword_28898C0 )
          v224 = (unsigned int *)(v233 - 4);
              v225 = __ldrex(v224);
            while ( __strex(v225 - 1, v224) );
            v225 = (*v224)--;
          if ( v225 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v186);
        v187 = HIDWORD(v242);
          v188 = (unsigned int *)(HIDWORD(v242) + 8);
              v189 = __ldrex(v188);
            while ( __strex(v189 - 1, v188) );
            v189 = (*v188)--;
          if ( v189 == 1 )
            (*(void (**)(void))(*(_DWORD *)v187 + 12))();
        Realms::World::~World((Realms::World *)&v240);
        v190 = HIDWORD(v239);
          v191 = (unsigned int *)(HIDWORD(v239) + 8);
              v192 = __ldrex(v191);
            while ( __strex(v192 - 1, v191) );
            v192 = (*v191)--;
          if ( v192 == 1 )
            (*(void (**)(void))(*(_DWORD *)v190 + 12))();
        Realms::World::~World((Realms::World *)&v238);
        v193 = *v230;
        if ( *v230 )
          v194 = (unsigned int *)(v193 + 8);
              v195 = __ldrex(v194);
            while ( __strex(v195 - 1, v194) );
            v195 = (*v194)--;
          if ( v195 == 1 )
            (*(void (**)(void))(*(_DWORD *)v193 + 12))();
          v196 = (unsigned int *)(v232 + 8);
              v197 = __ldrex(v196);
            while ( __strex(v197 - 1, v196) );
            v197 = (*v196)--;
          if ( v197 == 1 )
        Realms::World::~World((Realms::World *)&v248);
        v198 = HIDWORD(v247);
          v199 = (unsigned int *)(HIDWORD(v247) + 8);
              v200 = __ldrex(v199);
            while ( __strex(v200 - 1, v199) );
            v200 = (*v199)--;
          if ( v200 == 1 )
            (*(void (**)(void))(*(_DWORD *)v198 + 12))();
        Realms::World::~World((Realms::World *)&v245);
        v201 = HIDWORD(v244);
          v202 = (unsigned int *)(HIDWORD(v244) + 8);
              v203 = __ldrex(v202);
            while ( __strex(v203 - 1, v202) );
            v203 = (*v202)--;
          if ( v203 == 1 )
            (*(void (**)(void))(*(_DWORD *)v201 + 12))();
        v204 = *v231;
        if ( *v231 )
          v205 = (unsigned int *)(v204 + 8);
              v206 = __ldrex(v205);
            while ( __strex(v206 - 1, v205) );
            v206 = (*v205)--;
          if ( v206 == 1 )
            (*(void (**)(void))(*(_DWORD *)v204 + 12))();
          v207 = (unsigned int *)(HIDWORD(v26) + 8);
              v208 = __ldrex(v207);
            while ( __strex(v208 - 1, v207) );
            v208 = (*v207)--;
          if ( v208 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v26) + 12))(HIDWORD(v26));
        Realms::World::~World((Realms::World *)&v251);
        v209 = HIDWORD(v250);
          v210 = (unsigned int *)(HIDWORD(v250) + 8);
              v211 = __ldrex(v210);
            while ( __strex(v211 - 1, v210) );
            v211 = (*v210)--;
          if ( v211 == 1 )
            (*(void (**)(void))(*(_DWORD *)v209 + 12))();
        goto LABEL_341;
      ++*(_DWORD *)(HIDWORD(v260) + 8);
      v243 = v26;
      v30 = HIDWORD(v26);
    v31 = (unsigned int *)(v30 + 8);
        v32 = __ldrex(v31);
      while ( __strex(v32 + 1, v31) );
      ++*v31;
    goto LABEL_79;
  if ( v6 == 1 )
    v14 = *(_DWORD *)PlayScreenModel::getWorlds(*((PlayScreenModel **)v2 + 108)) + 72 * v3;
    if ( *(_DWORD *)(v14 + 8) )
      PlayScreenModel::resetUpdateIntervals(*((PlayScreenModel **)v2 + 108));
      MinecraftScreenModel::navigateToRealmsSettingsScreen(
        *((MinecraftScreenModel **)v2 + 108),
        (const Realms::World *)v14);
LABEL_341:
  v212 = HIDWORD(v260);
  if ( HIDWORD(v260) )
    v213 = (unsigned int *)(HIDWORD(v260) + 8);
        v214 = __ldrex(v213);
      while ( __strex(v214 - 1, v213) );
      v214 = (*v213)--;
    if ( v214 == 1 )
      (*(void (**)(void))(*(_DWORD *)v212 + 12))();
  return 0;
}


void __fastcall PlayScreenController::_registerBindings(PlayScreenController *this)
{
  PlayScreenController::_registerBindings(this);
}


signed int __fastcall PlayScreenController::_getNetworldWorldTypeFromCollection(int a1, const void **a2)
{
  const void **v2; // r4@1
  signed int result; // r0@2
  int v4; // r0@6
  signed int v5; // r1@6

  v2 = a2;
  if ( sub_1590284(a2, "friends_network_worlds") )
  {
    if ( sub_1590284(v2, "lan_network_worlds") )
    {
      if ( sub_1590284(v2, "servers_network_worlds") )
      {
        v4 = sub_1590284(v2, "third_party_server_network_worlds");
        v5 = 0;
        if ( !v4 )
          v5 = 4;
        result = v5;
      }
      else
        result = 2;
    }
    else
      result = 1;
  }
  else
    result = 3;
  return result;
}


signed int __fastcall PlayScreenController::_getIndexForRealmsCollection(int a1, const char **a2, signed int a3)
{
  signed int v3; // r4@1
  const char **v4; // r6@1
  int v5; // r5@1
  const char *v6; // r6@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a3 < 0 || PlayScreenModel::getWorldCount(*(_DWORD *)(a1 + 432), 2, 0) <= a3 )
    return -1;
  v6 = *v4;
  if ( strcmp(v6, "personal_realms") )
  {
    if ( strcmp(v6, "friends_realms") )
      return -1;
    v3 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v5 + 432));
  }
  return v3;
}


int __fastcall PlayScreenController::_getTotalNetworkWorldCount(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  signed int v2; // r5@1
  signed int v3; // r6@1

  v1 = this;
  v2 = PlayScreenModel::getWorldCount(*((_DWORD *)this + 108), 1, 2);
  v3 = PlayScreenModel::getWorldCount(*((_DWORD *)v1 + 108), 1, 1);
  return PlayScreenModel::getWorldCount(*((_DWORD *)v1 + 108), 1, 3) + v3 + v2;
}


void __fastcall PlayScreenController::_registerBindings(PlayScreenController *this)
{
  unsigned __int64 v1; // r4@1
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
  _DWORD *v12; // r0@45
  _DWORD *v13; // r0@49
  _DWORD *v14; // r0@53
  _DWORD *v15; // r0@57
  _DWORD *v16; // r0@61
  _DWORD *v17; // r0@65
  _DWORD *v18; // r0@69
  _DWORD *v19; // r0@73
  _DWORD *v20; // r0@77
  _DWORD *v21; // r0@81
  _DWORD *v22; // r0@85
  _DWORD *v23; // r0@89
  _DWORD *v24; // r0@93
  _DWORD *v25; // r0@97
  _DWORD *v26; // r0@101
  _DWORD *v27; // r0@105
  _DWORD *v28; // r0@109
  __int64 v29; // r6@113
  _DWORD *v30; // r0@113
  _DWORD *v31; // r0@117
  _DWORD *v32; // r0@121
  _DWORD *v33; // r0@125
  _DWORD *v34; // r0@129
  _DWORD *v35; // r0@133
  _DWORD *v36; // r0@137
  _DWORD *v37; // r0@141
  _DWORD *v38; // r0@145
  _DWORD *v39; // r0@149
  _DWORD *v40; // r0@153
  _DWORD *v41; // r0@157
  _DWORD *v42; // r0@161
  _DWORD *v43; // r0@165
  _DWORD *v44; // r0@169
  _DWORD *v45; // r0@173
  _DWORD *v46; // r0@177
  _DWORD *v47; // r0@181
  _DWORD *v48; // r0@185
  _DWORD *v49; // r0@193
  _DWORD *v50; // r0@197
  _DWORD *v51; // r0@201
  _DWORD *v52; // r0@205
  _DWORD *v53; // r0@209
  _DWORD *v54; // r0@213
  _DWORD *v55; // r0@217
  _DWORD *v56; // r0@221
  _DWORD *v57; // r0@225
  _DWORD *v58; // r0@229
  _DWORD *v59; // r0@233
  _DWORD *v60; // r0@237
  _DWORD *v61; // r0@241
  _DWORD *v62; // r0@245
  _DWORD *v63; // r0@249
  __int64 v64; // r1@249
  _DWORD *v65; // r0@253
  __int64 v66; // r1@253
  __int64 v67; // r1@253
  _DWORD *v68; // r0@257
  __int64 v69; // r1@257
  __int64 v70; // r1@257
  _DWORD *v71; // r0@261
  __int64 v72; // r1@261
  __int64 v73; // r1@261
  _DWORD *v74; // r0@265
  __int64 v75; // r1@265
  __int64 v76; // r1@265
  _DWORD *v77; // r0@269
  __int64 v78; // r1@269
  __int64 v79; // r1@269
  _DWORD *v80; // r0@273
  __int64 v81; // r1@273
  __int64 v82; // r1@273
  _DWORD *v83; // r0@277
  __int64 v84; // r1@277
  __int64 v85; // r1@277
  _DWORD *v86; // r0@281
  __int64 v87; // r1@281
  __int64 v88; // r1@281
  _DWORD *v89; // r0@285
  __int64 v90; // r1@285
  __int64 v91; // r1@285
  _DWORD *v92; // r0@289
  __int64 v93; // r1@289
  __int64 v94; // r1@289
  _DWORD *v95; // r0@293
  __int64 v96; // r1@293
  __int64 v97; // r1@293
  _QWORD *v98; // r0@297
  __int64 v99; // r1@297
  _DWORD *v100; // r0@301
  __int64 v101; // r1@301
  __int64 v102; // r1@301
  _DWORD *v103; // r0@305
  __int64 v104; // r1@305
  __int64 v105; // r1@305
  _DWORD *v106; // r0@309
  __int64 v107; // r1@309
  __int64 v108; // r1@309
  _DWORD *v109; // r0@313
  __int64 v110; // r1@313
  __int64 v111; // r1@313
  _QWORD *v112; // r0@317
  __int64 v113; // r1@317
  __int64 v114; // r1@317
  __int64 v115; // r1@321
  _DWORD *v116; // r0@325
  __int64 v117; // r1@325
  __int64 v118; // r1@325
  _DWORD *v119; // r0@329
  __int64 v120; // r1@329
  __int64 v121; // r1@329
  _DWORD *v122; // r0@333
  __int64 v123; // r1@333
  __int64 v124; // r1@333
  _DWORD *v125; // r0@337
  __int64 v126; // r1@337
  __int64 v127; // r1@337
  _DWORD *v128; // r0@341
  __int64 v129; // r1@341
  __int64 v130; // r1@341
  _DWORD *v131; // r0@345
  __int64 v132; // r1@345
  __int64 v133; // r1@345
  _DWORD *v134; // r0@349
  __int64 v135; // r1@349
  __int64 v136; // r1@349
  _DWORD *v137; // r0@353
  __int64 v138; // r1@353
  __int64 v139; // r1@353
  _DWORD *v140; // r0@357
  __int64 v141; // r1@357
  __int64 v142; // r1@357
  void *v143; // [sp+8h] [bp-D28h]@357
  __int64 v144; // [sp+10h] [bp-D20h]@357
  _DWORD *v145; // [sp+18h] [bp-D18h]@357
  __int64 v146; // [sp+20h] [bp-D10h]@357
  int v147; // [sp+28h] [bp-D08h]@357
  void *v148; // [sp+2Ch] [bp-D04h]@353
  __int64 v149; // [sp+34h] [bp-CFCh]@353
  _DWORD *v150; // [sp+3Ch] [bp-CF4h]@353
  __int64 v151; // [sp+44h] [bp-CECh]@353
  int v152; // [sp+4Ch] [bp-CE4h]@353
  void *v153; // [sp+50h] [bp-CE0h]@349
  __int64 v154; // [sp+58h] [bp-CD8h]@349
  _DWORD *v155; // [sp+60h] [bp-CD0h]@349
  __int64 v156; // [sp+68h] [bp-CC8h]@349
  int v157; // [sp+70h] [bp-CC0h]@349
  void *v158; // [sp+74h] [bp-CBCh]@345
  __int64 v159; // [sp+7Ch] [bp-CB4h]@345
  _DWORD *v160; // [sp+84h] [bp-CACh]@345
  __int64 v161; // [sp+8Ch] [bp-CA4h]@345
  int v162; // [sp+94h] [bp-C9Ch]@345
  void *v163; // [sp+98h] [bp-C98h]@341
  __int64 v164; // [sp+A0h] [bp-C90h]@341
  _DWORD *v165; // [sp+A8h] [bp-C88h]@341
  __int64 v166; // [sp+B0h] [bp-C80h]@341
  int v167; // [sp+B8h] [bp-C78h]@341
  void *v168; // [sp+BCh] [bp-C74h]@337
  __int64 v169; // [sp+C4h] [bp-C6Ch]@337
  _DWORD *v170; // [sp+CCh] [bp-C64h]@337
  __int64 v171; // [sp+D4h] [bp-C5Ch]@337
  int v172; // [sp+DCh] [bp-C54h]@337
  void *v173; // [sp+E0h] [bp-C50h]@333
  __int64 v174; // [sp+E8h] [bp-C48h]@333
  _DWORD *v175; // [sp+F0h] [bp-C40h]@333
  __int64 v176; // [sp+F8h] [bp-C38h]@333
  int v177; // [sp+100h] [bp-C30h]@333
  void *v178; // [sp+104h] [bp-C2Ch]@329
  __int64 v179; // [sp+10Ch] [bp-C24h]@329
  _DWORD *v180; // [sp+114h] [bp-C1Ch]@329
  __int64 v181; // [sp+11Ch] [bp-C14h]@329
  int v182; // [sp+124h] [bp-C0Ch]@329
  void *v183; // [sp+128h] [bp-C08h]@325
  __int64 v184; // [sp+130h] [bp-C00h]@325
  _DWORD *v185; // [sp+138h] [bp-BF8h]@325
  __int64 v186; // [sp+140h] [bp-BF0h]@325
  int v187; // [sp+148h] [bp-BE8h]@325
  void *v188; // [sp+14Ch] [bp-BE4h]@321
  __int64 v189; // [sp+154h] [bp-BDCh]@321
  void *v190; // [sp+15Ch] [bp-BD4h]@321
  void (*v191)(void); // [sp+164h] [bp-BCCh]@321
  void **(__fastcall *v192)(void **); // [sp+168h] [bp-BC8h]@321
  int v193; // [sp+16Ch] [bp-BC4h]@321
  void *v194; // [sp+170h] [bp-BC0h]@317
  __int64 v195; // [sp+178h] [bp-BB8h]@317
  _QWORD *v196; // [sp+180h] [bp-BB0h]@317
  __int64 v197; // [sp+188h] [bp-BA8h]@317
  int v198; // [sp+190h] [bp-BA0h]@317
  int v199; // [sp+194h] [bp-B9Ch]@317
  void *v200; // [sp+198h] [bp-B98h]@313
  __int64 v201; // [sp+1A0h] [bp-B90h]@313
  _DWORD *v202; // [sp+1A8h] [bp-B88h]@313
  __int64 v203; // [sp+1B0h] [bp-B80h]@313
  int v204; // [sp+1B8h] [bp-B78h]@313
  int v205; // [sp+1BCh] [bp-B74h]@313
  void *v206; // [sp+1C0h] [bp-B70h]@309
  __int64 v207; // [sp+1C8h] [bp-B68h]@309
  _DWORD *v208; // [sp+1D0h] [bp-B60h]@309
  __int64 v209; // [sp+1D8h] [bp-B58h]@309
  int v210; // [sp+1E0h] [bp-B50h]@309
  int v211; // [sp+1E4h] [bp-B4Ch]@309
  void *v212; // [sp+1E8h] [bp-B48h]@305
  __int64 v213; // [sp+1F0h] [bp-B40h]@305
  _DWORD *v214; // [sp+1F8h] [bp-B38h]@305
  __int64 v215; // [sp+200h] [bp-B30h]@305
  int v216; // [sp+208h] [bp-B28h]@305
  int v217; // [sp+20Ch] [bp-B24h]@305
  void *v218; // [sp+210h] [bp-B20h]@301
  __int64 v219; // [sp+218h] [bp-B18h]@301
  _DWORD *v220; // [sp+220h] [bp-B10h]@301
  __int64 v221; // [sp+228h] [bp-B08h]@301
  int v222; // [sp+230h] [bp-B00h]@301
  void *v223; // [sp+234h] [bp-AFCh]@297
  __int64 v224; // [sp+23Ch] [bp-AF4h]@297
  _QWORD *v225; // [sp+244h] [bp-AECh]@297
  void (*v226)(void); // [sp+24Ch] [bp-AE4h]@297
  int (__fastcall *v227)(__int64 **, signed int); // [sp+250h] [bp-AE0h]@297
  int v228; // [sp+254h] [bp-ADCh]@297
  int v229; // [sp+258h] [bp-AD8h]@297
  void *v230; // [sp+25Ch] [bp-AD4h]@293
  __int64 v231; // [sp+264h] [bp-ACCh]@293
  _DWORD *v232; // [sp+26Ch] [bp-AC4h]@293
  __int64 v233; // [sp+274h] [bp-ABCh]@293
  int v234; // [sp+27Ch] [bp-AB4h]@293
  void *v235; // [sp+280h] [bp-AB0h]@289
  __int64 v236; // [sp+288h] [bp-AA8h]@289
  _DWORD *v237; // [sp+290h] [bp-AA0h]@289
  __int64 v238; // [sp+298h] [bp-A98h]@289
  int v239; // [sp+2A0h] [bp-A90h]@289
  int v240; // [sp+2A4h] [bp-A8Ch]@289
  void *v241; // [sp+2A8h] [bp-A88h]@285
  __int64 v242; // [sp+2B0h] [bp-A80h]@285
  _DWORD *v243; // [sp+2B8h] [bp-A78h]@285
  __int64 v244; // [sp+2C0h] [bp-A70h]@285
  int v245; // [sp+2C8h] [bp-A68h]@285
  void *v246; // [sp+2CCh] [bp-A64h]@281
  __int64 v247; // [sp+2D4h] [bp-A5Ch]@281
  _DWORD *v248; // [sp+2DCh] [bp-A54h]@281
  __int64 v249; // [sp+2E4h] [bp-A4Ch]@281
  __int64 v250; // [sp+2ECh] [bp-A44h]@281
  void *v251; // [sp+2F4h] [bp-A3Ch]@277
  __int64 v252; // [sp+2FCh] [bp-A34h]@277
  _DWORD *v253; // [sp+304h] [bp-A2Ch]@277
  __int64 v254; // [sp+30Ch] [bp-A24h]@277
  int v255; // [sp+314h] [bp-A1Ch]@277
  void *v256; // [sp+318h] [bp-A18h]@273
  __int64 v257; // [sp+320h] [bp-A10h]@273
  _DWORD *v258; // [sp+328h] [bp-A08h]@273
  __int64 v259; // [sp+330h] [bp-A00h]@273
  int v260; // [sp+338h] [bp-9F8h]@273
  void *v261; // [sp+33Ch] [bp-9F4h]@269
  __int64 v262; // [sp+344h] [bp-9ECh]@269
  _DWORD *v263; // [sp+34Ch] [bp-9E4h]@269
  __int64 v264; // [sp+354h] [bp-9DCh]@269
  int v265; // [sp+35Ch] [bp-9D4h]@269
  void *v266; // [sp+360h] [bp-9D0h]@265
  __int64 v267; // [sp+368h] [bp-9C8h]@265
  _DWORD *v268; // [sp+370h] [bp-9C0h]@265
  __int64 v269; // [sp+378h] [bp-9B8h]@265
  int v270; // [sp+380h] [bp-9B0h]@265
  void *v271; // [sp+384h] [bp-9ACh]@261
  __int64 v272; // [sp+38Ch] [bp-9A4h]@261
  _DWORD *v273; // [sp+394h] [bp-99Ch]@261
  __int64 v274; // [sp+39Ch] [bp-994h]@261
  int v275; // [sp+3A4h] [bp-98Ch]@261
  void *v276; // [sp+3A8h] [bp-988h]@257
  __int64 v277; // [sp+3B0h] [bp-980h]@257
  _DWORD *v278; // [sp+3B8h] [bp-978h]@257
  __int64 v279; // [sp+3C0h] [bp-970h]@257
  int v280; // [sp+3C8h] [bp-968h]@257
  void *v281; // [sp+3CCh] [bp-964h]@253
  __int64 v282; // [sp+3D4h] [bp-95Ch]@253
  _DWORD *v283; // [sp+3DCh] [bp-954h]@253
  __int64 v284; // [sp+3E4h] [bp-94Ch]@253
  int v285; // [sp+3ECh] [bp-944h]@253
  void *v286; // [sp+3F0h] [bp-940h]@249
  __int64 v287; // [sp+3F8h] [bp-938h]@249
  _DWORD *v288; // [sp+400h] [bp-930h]@249
  void (*v289)(void); // [sp+408h] [bp-928h]@249
  signed int (__fastcall *v290)(int **); // [sp+40Ch] [bp-924h]@249
  int v291; // [sp+410h] [bp-920h]@249
  void *v292; // [sp+414h] [bp-91Ch]@245
  void (*v293)(void); // [sp+41Ch] [bp-914h]@245
  signed int (*v294)(); // [sp+420h] [bp-910h]@245
  _DWORD *v295; // [sp+424h] [bp-90Ch]@245
  void (*v296)(void); // [sp+42Ch] [bp-904h]@245
  signed int (__fastcall *v297)(int **); // [sp+430h] [bp-900h]@245
  int v298; // [sp+434h] [bp-8FCh]@245
  void *v299; // [sp+438h] [bp-8F8h]@241
  void (*v300)(void); // [sp+440h] [bp-8F0h]@241
  signed int (*v301)(); // [sp+444h] [bp-8ECh]@241
  _DWORD *v302; // [sp+448h] [bp-8E8h]@241
  void (*v303)(void); // [sp+450h] [bp-8E0h]@241
  int (__fastcall *v304)(int **); // [sp+454h] [bp-8DCh]@241
  int v305; // [sp+458h] [bp-8D8h]@241
  void *v306; // [sp+45Ch] [bp-8D4h]@237
  void (*v307)(void); // [sp+464h] [bp-8CCh]@237
  signed int (*v308)(); // [sp+468h] [bp-8C8h]@237
  _DWORD *v309; // [sp+46Ch] [bp-8C4h]@237
  void (*v310)(void); // [sp+474h] [bp-8BCh]@237
  int (__fastcall *v311)(int, int); // [sp+478h] [bp-8B8h]@237
  int v312; // [sp+47Ch] [bp-8B4h]@237
  void *v313; // [sp+480h] [bp-8B0h]@233
  void (*v314)(void); // [sp+488h] [bp-8A8h]@233
  signed int (*v315)(); // [sp+48Ch] [bp-8A4h]@233
  _DWORD *v316; // [sp+490h] [bp-8A0h]@233
  void (*v317)(void); // [sp+498h] [bp-898h]@233
  int (__fastcall *v318)(int, int **); // [sp+49Ch] [bp-894h]@233
  int v319; // [sp+4A0h] [bp-890h]@233
  void *v320; // [sp+4A4h] [bp-88Ch]@229
  void (*v321)(void); // [sp+4ACh] [bp-884h]@229
  signed int (*v322)(); // [sp+4B0h] [bp-880h]@229
  _DWORD *v323; // [sp+4B4h] [bp-87Ch]@229
  void (*v324)(void); // [sp+4BCh] [bp-874h]@229
  int (__fastcall *v325)(int, int **); // [sp+4C0h] [bp-870h]@229
  int v326; // [sp+4C4h] [bp-86Ch]@229
  void *v327; // [sp+4C8h] [bp-868h]@225
  void (*v328)(void); // [sp+4D0h] [bp-860h]@225
  signed int (*v329)(); // [sp+4D4h] [bp-85Ch]@225
  _DWORD *v330; // [sp+4D8h] [bp-858h]@225
  void (*v331)(void); // [sp+4E0h] [bp-850h]@225
  int (__fastcall *v332)(int, int **); // [sp+4E4h] [bp-84Ch]@225
  int v333; // [sp+4E8h] [bp-848h]@225
  void *v334; // [sp+4ECh] [bp-844h]@221
  void (*v335)(void); // [sp+4F4h] [bp-83Ch]@221
  signed int (*v336)(); // [sp+4F8h] [bp-838h]@221
  _DWORD *v337; // [sp+4FCh] [bp-834h]@221
  void (*v338)(void); // [sp+504h] [bp-82Ch]@221
  signed int (__fastcall *v339)(int **); // [sp+508h] [bp-828h]@221
  int v340; // [sp+50Ch] [bp-824h]@221
  void *v341; // [sp+510h] [bp-820h]@217
  void (*v342)(void); // [sp+518h] [bp-818h]@217
  signed int (*v343)(); // [sp+51Ch] [bp-814h]@217
  _DWORD *v344; // [sp+520h] [bp-810h]@217
  void (*v345)(void); // [sp+528h] [bp-808h]@217
  int (__fastcall *v346)(int **); // [sp+52Ch] [bp-804h]@217
  int v347; // [sp+530h] [bp-800h]@217
  void *v348; // [sp+534h] [bp-7FCh]@213
  void (*v349)(void); // [sp+53Ch] [bp-7F4h]@213
  signed int (*v350)(); // [sp+540h] [bp-7F0h]@213
  _DWORD *v351; // [sp+544h] [bp-7ECh]@213
  void (*v352)(void); // [sp+54Ch] [bp-7E4h]@213
  signed int (__fastcall *v353)(int **); // [sp+550h] [bp-7E0h]@213
  int v354; // [sp+554h] [bp-7DCh]@213
  void *v355; // [sp+558h] [bp-7D8h]@209
  void (*v356)(void); // [sp+560h] [bp-7D0h]@209
  signed int (*v357)(); // [sp+564h] [bp-7CCh]@209
  _DWORD *v358; // [sp+568h] [bp-7C8h]@209
  void (*v359)(void); // [sp+570h] [bp-7C0h]@209
  signed int (__fastcall *v360)(int **); // [sp+574h] [bp-7BCh]@209
  int v361; // [sp+578h] [bp-7B8h]@209
  void *v362; // [sp+57Ch] [bp-7B4h]@205
  void (*v363)(void); // [sp+584h] [bp-7ACh]@205
  signed int (*v364)(); // [sp+588h] [bp-7A8h]@205
  _DWORD *v365; // [sp+58Ch] [bp-7A4h]@205
  void (*v366)(void); // [sp+594h] [bp-79Ch]@205
  void (__fastcall *v367)(MinecraftScreenModel *, int **); // [sp+598h] [bp-798h]@205
  int v368; // [sp+59Ch] [bp-794h]@205
  void *v369; // [sp+5A0h] [bp-790h]@201
  void (*v370)(void); // [sp+5A8h] [bp-788h]@201
  signed int (*v371)(); // [sp+5ACh] [bp-784h]@201
  _DWORD *v372; // [sp+5B0h] [bp-780h]@201
  void (*v373)(void); // [sp+5B8h] [bp-778h]@201
  void **(__fastcall *v374)(void **, int); // [sp+5BCh] [bp-774h]@201
  int v375; // [sp+5C0h] [bp-770h]@201
  void *v376; // [sp+5C4h] [bp-76Ch]@197
  void (*v377)(void); // [sp+5CCh] [bp-764h]@197
  signed int (*v378)(); // [sp+5D0h] [bp-760h]@197
  _DWORD *v379; // [sp+5D4h] [bp-75Ch]@197
  void (*v380)(void); // [sp+5DCh] [bp-754h]@197
  void **(__fastcall *v381)(void **, int **); // [sp+5E0h] [bp-750h]@197
  int v382; // [sp+5E4h] [bp-74Ch]@197
  void *v383; // [sp+5E8h] [bp-748h]@193
  void (*v384)(void); // [sp+5F0h] [bp-740h]@193
  signed int (*v385)(); // [sp+5F4h] [bp-73Ch]@193
  _DWORD *v386; // [sp+5F8h] [bp-738h]@193
  void (*v387)(void); // [sp+600h] [bp-730h]@193
  void **(__fastcall *v388)(void **, int **); // [sp+604h] [bp-72Ch]@193
  int v389; // [sp+608h] [bp-728h]@193
  void *v390; // [sp+60Ch] [bp-724h]@189
  void (*v391)(void); // [sp+614h] [bp-71Ch]@189
  signed int (*v392)(); // [sp+618h] [bp-718h]@189
  void *v393; // [sp+61Ch] [bp-714h]@189
  void (*v394)(void); // [sp+624h] [bp-70Ch]@189
  void (__fastcall *v395)(const void **, int, int *, signed int); // [sp+628h] [bp-708h]@189
  int v396; // [sp+62Ch] [bp-704h]@189
  void *v397; // [sp+630h] [bp-700h]@185
  void (*v398)(void); // [sp+638h] [bp-6F8h]@185
  signed int (*v399)(); // [sp+63Ch] [bp-6F4h]@185
  _DWORD *v400; // [sp+640h] [bp-6F0h]@185
  void (*v401)(void); // [sp+648h] [bp-6E8h]@185
  int (__fastcall *v402)(int **, const char **, signed int); // [sp+64Ch] [bp-6E4h]@185
  int v403; // [sp+650h] [bp-6E0h]@185
  void *v404; // [sp+654h] [bp-6DCh]@181
  void (*v405)(void); // [sp+65Ch] [bp-6D4h]@181
  signed int (*v406)(); // [sp+660h] [bp-6D0h]@181
  _DWORD *v407; // [sp+664h] [bp-6CCh]@181
  void (*v408)(void); // [sp+66Ch] [bp-6C4h]@181
  int (__fastcall *v409)(int **, const char **, signed int); // [sp+670h] [bp-6C0h]@181
  int v410; // [sp+674h] [bp-6BCh]@181
  void *v411; // [sp+678h] [bp-6B8h]@177
  void (*v412)(void); // [sp+680h] [bp-6B0h]@177
  signed int (*v413)(); // [sp+684h] [bp-6ACh]@177
  _DWORD *v414; // [sp+688h] [bp-6A8h]@177
  void (*v415)(void); // [sp+690h] [bp-6A0h]@177
  int (__fastcall *v416)(int **, const char **, signed int); // [sp+694h] [bp-69Ch]@177
  int v417; // [sp+698h] [bp-698h]@177
  void *v418; // [sp+69Ch] [bp-694h]@173
  void (*v419)(void); // [sp+6A4h] [bp-68Ch]@173
  signed int (*v420)(); // [sp+6A8h] [bp-688h]@173
  _DWORD *v421; // [sp+6ACh] [bp-684h]@173
  void (*v422)(void); // [sp+6B4h] [bp-67Ch]@173
  signed int (__fastcall *v423)(int **, const char **, signed int); // [sp+6B8h] [bp-678h]@173
  int v424; // [sp+6BCh] [bp-674h]@173
  void *v425; // [sp+6C0h] [bp-670h]@169
  void (*v426)(void); // [sp+6C8h] [bp-668h]@169
  signed int (*v427)(); // [sp+6CCh] [bp-664h]@169
  _DWORD *v428; // [sp+6D0h] [bp-660h]@169
  void (*v429)(void); // [sp+6D8h] [bp-658h]@169
  signed int (__fastcall *v430)(int **, const char **, signed int); // [sp+6DCh] [bp-654h]@169
  int v431; // [sp+6E0h] [bp-650h]@169
  void *v432; // [sp+6E4h] [bp-64Ch]@165
  void (*v433)(void); // [sp+6ECh] [bp-644h]@165
  signed int (*v434)(); // [sp+6F0h] [bp-640h]@165
  _DWORD *v435; // [sp+6F4h] [bp-63Ch]@165
  void (*v436)(void); // [sp+6FCh] [bp-634h]@165
  void (__fastcall *v437)(RealmsWorldInfo *, int **, const char **, signed int); // [sp+700h] [bp-630h]@165
  int v438; // [sp+704h] [bp-62Ch]@165
  void *v439; // [sp+708h] [bp-628h]@161
  void (*v440)(void); // [sp+710h] [bp-620h]@161
  signed int (*v441)(); // [sp+714h] [bp-61Ch]@161
  _DWORD *v442; // [sp+718h] [bp-618h]@161
  void (*v443)(void); // [sp+720h] [bp-610h]@161
  void (__fastcall *v444)(RealmsWorldInfo *, int **, const char **, signed int); // [sp+724h] [bp-60Ch]@161
  int v445; // [sp+728h] [bp-608h]@161
  void *v446; // [sp+72Ch] [bp-604h]@157
  void (*v447)(void); // [sp+734h] [bp-5FCh]@157
  signed int (*v448)(); // [sp+738h] [bp-5F8h]@157
  _DWORD *v449; // [sp+73Ch] [bp-5F4h]@157
  void (*v450)(void); // [sp+744h] [bp-5ECh]@157
  int *(__fastcall *v451)(int *, int **, const char **, signed int); // [sp+748h] [bp-5E8h]@157
  int v452; // [sp+74Ch] [bp-5E4h]@157
  void *v453; // [sp+750h] [bp-5E0h]@153
  void (*v454)(void); // [sp+758h] [bp-5D8h]@153
  signed int (*v455)(); // [sp+75Ch] [bp-5D4h]@153
  _DWORD *v456; // [sp+760h] [bp-5D0h]@153
  void (*v457)(void); // [sp+768h] [bp-5C8h]@153
  int (__fastcall *v458)(int **); // [sp+76Ch] [bp-5C4h]@153
  int v459; // [sp+770h] [bp-5C0h]@153
  void *v460; // [sp+774h] [bp-5BCh]@149
  void (*v461)(void); // [sp+77Ch] [bp-5B4h]@149
  signed int (*v462)(); // [sp+780h] [bp-5B0h]@149
  _DWORD *v463; // [sp+784h] [bp-5ACh]@149
  void (*v464)(void); // [sp+78Ch] [bp-5A4h]@149
  int (__fastcall *v465)(int **); // [sp+790h] [bp-5A0h]@149
  int v466; // [sp+794h] [bp-59Ch]@149
  void *v467; // [sp+798h] [bp-598h]@145
  void (*v468)(void); // [sp+7A0h] [bp-590h]@145
  signed int (*v469)(); // [sp+7A4h] [bp-58Ch]@145
  _DWORD *v470; // [sp+7A8h] [bp-588h]@145
  void (*v471)(void); // [sp+7B0h] [bp-580h]@145
  signed int (__fastcall *v472)(int, int); // [sp+7B4h] [bp-57Ch]@145
  int v473; // [sp+7B8h] [bp-578h]@145
  void *v474; // [sp+7BCh] [bp-574h]@141
  void (*v475)(void); // [sp+7C4h] [bp-56Ch]@141
  signed int (*v476)(); // [sp+7C8h] [bp-568h]@141
  _DWORD *v477; // [sp+7CCh] [bp-564h]@141
  void (*v478)(void); // [sp+7D4h] [bp-55Ch]@141
  int (__fastcall *v479)(int **, const void **, signed int); // [sp+7D8h] [bp-558h]@141
  int v480; // [sp+7DCh] [bp-554h]@141
  void *v481; // [sp+7E0h] [bp-550h]@137
  void (*v482)(void); // [sp+7E8h] [bp-548h]@137
  signed int (*v483)(); // [sp+7ECh] [bp-544h]@137
  _DWORD *v484; // [sp+7F0h] [bp-540h]@137
  void (*v485)(void); // [sp+7F8h] [bp-538h]@137
  signed int (__fastcall *v486)(int **, const void **, signed int); // [sp+7FCh] [bp-534h]@137
  int v487; // [sp+800h] [bp-530h]@137
  void *v488; // [sp+804h] [bp-52Ch]@133
  void (*v489)(void); // [sp+80Ch] [bp-524h]@133
  signed int (*v490)(); // [sp+810h] [bp-520h]@133
  _DWORD *v491; // [sp+814h] [bp-51Ch]@133
  void (*v492)(void); // [sp+81Ch] [bp-514h]@133
  signed int (__fastcall *v493)(int **, const void **, signed int); // [sp+820h] [bp-510h]@133
  int v494; // [sp+824h] [bp-50Ch]@133
  void *v495; // [sp+828h] [bp-508h]@129
  void (*v496)(void); // [sp+830h] [bp-500h]@129
  signed int (*v497)(); // [sp+834h] [bp-4FCh]@129
  _DWORD *v498; // [sp+838h] [bp-4F8h]@129
  void (*v499)(void); // [sp+840h] [bp-4F0h]@129
  char *(__fastcall *v500)(int *, int **, const void **, signed int); // [sp+844h] [bp-4ECh]@129
  int v501; // [sp+848h] [bp-4E8h]@129
  void *v502; // [sp+84Ch] [bp-4E4h]@125
  void (*v503)(void); // [sp+854h] [bp-4DCh]@125
  signed int (*v504)(); // [sp+858h] [bp-4D8h]@125
  _DWORD *v505; // [sp+85Ch] [bp-4D4h]@125
  void (*v506)(void); // [sp+864h] [bp-4CCh]@125
  char *(__fastcall *v507)(NetworkWorldInfo *, int **, const void **, signed int); // [sp+868h] [bp-4C8h]@125
  int v508; // [sp+86Ch] [bp-4C4h]@125
  void *v509; // [sp+870h] [bp-4C0h]@121
  void (*v510)(void); // [sp+878h] [bp-4B8h]@121
  signed int (*v511)(); // [sp+87Ch] [bp-4B4h]@121
  _DWORD *v512; // [sp+880h] [bp-4B0h]@121
  void (*v513)(void); // [sp+888h] [bp-4A8h]@121
  char *(__fastcall *v514)(NetworkWorldInfo *, int **, const void **, signed int); // [sp+88Ch] [bp-4A4h]@121
  int v515; // [sp+890h] [bp-4A0h]@121
  void *v516; // [sp+894h] [bp-49Ch]@117
  void (*v517)(void); // [sp+89Ch] [bp-494h]@117
  signed int (*v518)(); // [sp+8A0h] [bp-490h]@117
  _DWORD *v519; // [sp+8A4h] [bp-48Ch]@117
  void (*v520)(void); // [sp+8ACh] [bp-484h]@117
  char *(__fastcall *v521)(int *, int, signed int); // [sp+8B0h] [bp-480h]@117
  int v522; // [sp+8B4h] [bp-47Ch]@117
  int v523; // [sp+8B8h] [bp-478h]@117
  void *v524; // [sp+8BCh] [bp-474h]@113
  void (*v525)(void); // [sp+8C4h] [bp-46Ch]@113
  signed int (*v526)(); // [sp+8C8h] [bp-468h]@113
  _DWORD *v527; // [sp+8CCh] [bp-464h]@113
  void (*v528)(void); // [sp+8D4h] [bp-45Ch]@113
  char *(__fastcall *v529)(const void **, const NetworkWorldInfo ***, signed int); // [sp+8D8h] [bp-458h]@113
  int v530; // [sp+8DCh] [bp-454h]@113
  int v531; // [sp+8E0h] [bp-450h]@113
  void *v532; // [sp+8E4h] [bp-44Ch]@109
  void (*v533)(void); // [sp+8ECh] [bp-444h]@109
  signed int (*v534)(); // [sp+8F0h] [bp-440h]@109
  _DWORD *v535; // [sp+8F4h] [bp-43Ch]@109
  void (*v536)(void); // [sp+8FCh] [bp-434h]@109
  signed int (__fastcall *v537)(int); // [sp+900h] [bp-430h]@109
  int v538; // [sp+904h] [bp-42Ch]@109
  void *v539; // [sp+908h] [bp-428h]@105
  void (*v540)(void); // [sp+910h] [bp-420h]@105
  signed int (*v541)(); // [sp+914h] [bp-41Ch]@105
  _DWORD *v542; // [sp+918h] [bp-418h]@105
  void (*v543)(void); // [sp+920h] [bp-410h]@105
  _BOOL4 (__fastcall *v544)(int **); // [sp+924h] [bp-40Ch]@105
  int v545; // [sp+928h] [bp-408h]@105
  void *v546; // [sp+92Ch] [bp-404h]@101
  void (*v547)(void); // [sp+934h] [bp-3FCh]@101
  signed int (*v548)(); // [sp+938h] [bp-3F8h]@101
  _DWORD *v549; // [sp+93Ch] [bp-3F4h]@101
  void (*v550)(void); // [sp+944h] [bp-3ECh]@101
  signed int (__fastcall *v551)(MinecraftScreenController ***); // [sp+948h] [bp-3E8h]@101
  int v552; // [sp+94Ch] [bp-3E4h]@101
  void *v553; // [sp+950h] [bp-3E0h]@97
  void (*v554)(void); // [sp+958h] [bp-3D8h]@97
  signed int (*v555)(); // [sp+95Ch] [bp-3D4h]@97
  _DWORD *v556; // [sp+960h] [bp-3D0h]@97
  void (*v557)(void); // [sp+968h] [bp-3C8h]@97
  signed int (__fastcall *v558)(int); // [sp+96Ch] [bp-3C4h]@97
  int v559; // [sp+970h] [bp-3C0h]@97
  void *v560; // [sp+974h] [bp-3BCh]@93
  void (*v561)(void); // [sp+97Ch] [bp-3B4h]@93
  signed int (*v562)(); // [sp+980h] [bp-3B0h]@93
  _DWORD *v563; // [sp+984h] [bp-3ACh]@93
  void (*v564)(void); // [sp+98Ch] [bp-3A4h]@93
  int (__fastcall *v565)(int **, int); // [sp+990h] [bp-3A0h]@93
  int v566; // [sp+994h] [bp-39Ch]@93
  int v567; // [sp+998h] [bp-398h]@93
  void *v568; // [sp+99Ch] [bp-394h]@89
  void (*v569)(void); // [sp+9A4h] [bp-38Ch]@89
  signed int (*v570)(); // [sp+9A8h] [bp-388h]@89
  _DWORD *v571; // [sp+9ACh] [bp-384h]@89
  void (*v572)(void); // [sp+9B4h] [bp-37Ch]@89
  int (__fastcall *v573)(int **, int); // [sp+9B8h] [bp-378h]@89
  int v574; // [sp+9BCh] [bp-374h]@89
  int v575; // [sp+9C0h] [bp-370h]@89
  void *v576; // [sp+9C4h] [bp-36Ch]@85
  void (*v577)(void); // [sp+9CCh] [bp-364h]@85
  signed int (*v578)(); // [sp+9D0h] [bp-360h]@85
  _DWORD *v579; // [sp+9D4h] [bp-35Ch]@85
  void (*v580)(void); // [sp+9DCh] [bp-354h]@85
  int (__fastcall *v581)(int **, int); // [sp+9E0h] [bp-350h]@85
  int v582; // [sp+9E4h] [bp-34Ch]@85
  int v583; // [sp+9E8h] [bp-348h]@85
  void *v584; // [sp+9ECh] [bp-344h]@81
  void (*v585)(void); // [sp+9F4h] [bp-33Ch]@81
  signed int (*v586)(); // [sp+9F8h] [bp-338h]@81
  _DWORD *v587; // [sp+9FCh] [bp-334h]@81
  void (*v588)(void); // [sp+A04h] [bp-32Ch]@81
  void **(__fastcall *v589)(void **, int **); // [sp+A08h] [bp-328h]@81
  int v590; // [sp+A0Ch] [bp-324h]@81
  void *v591; // [sp+A10h] [bp-320h]@77
  void (*v592)(void); // [sp+A18h] [bp-318h]@77
  signed int (*v593)(); // [sp+A1Ch] [bp-314h]@77
  _DWORD *v594; // [sp+A20h] [bp-310h]@77
  void (*v595)(void); // [sp+A28h] [bp-308h]@77
  signed int (__fastcall *v596)(int, int); // [sp+A2Ch] [bp-304h]@77
  int v597; // [sp+A30h] [bp-300h]@77
  void *v598; // [sp+A34h] [bp-2FCh]@73
  void (*v599)(void); // [sp+A3Ch] [bp-2F4h]@73
  signed int (*v600)(); // [sp+A40h] [bp-2F0h]@73
  _DWORD *v601; // [sp+A44h] [bp-2ECh]@73
  void (*v602)(void); // [sp+A4Ch] [bp-2E4h]@73
  int (__fastcall *v603)(int, int); // [sp+A50h] [bp-2E0h]@73
  int v604; // [sp+A54h] [bp-2DCh]@73
  int v605; // [sp+A58h] [bp-2D8h]@73
  void *v606; // [sp+A5Ch] [bp-2D4h]@69
  void (*v607)(void); // [sp+A64h] [bp-2CCh]@69
  signed int (*v608)(); // [sp+A68h] [bp-2C8h]@69
  _DWORD *v609; // [sp+A6Ch] [bp-2C4h]@69
  void (*v610)(void); // [sp+A74h] [bp-2BCh]@69
  int (__fastcall *v611)(int **, int); // [sp+A78h] [bp-2B8h]@69
  int v612; // [sp+A7Ch] [bp-2B4h]@69
  int v613; // [sp+A80h] [bp-2B0h]@69
  void *v614; // [sp+A84h] [bp-2ACh]@65
  void (*v615)(void); // [sp+A8Ch] [bp-2A4h]@65
  signed int (*v616)(); // [sp+A90h] [bp-2A0h]@65
  _DWORD *v617; // [sp+A94h] [bp-29Ch]@65
  void (*v618)(void); // [sp+A9Ch] [bp-294h]@65
  int *(__fastcall *v619)(int *, int, int); // [sp+AA0h] [bp-290h]@65
  int v620; // [sp+AA4h] [bp-28Ch]@65
  int v621; // [sp+AA8h] [bp-288h]@65
  void *v622; // [sp+AACh] [bp-284h]@61
  void (*v623)(void); // [sp+AB4h] [bp-27Ch]@61
  signed int (*v624)(); // [sp+AB8h] [bp-278h]@61
  _DWORD *v625; // [sp+ABCh] [bp-274h]@61
  void (*v626)(void); // [sp+AC4h] [bp-26Ch]@61
  int *(__fastcall *v627)(int *, int, int); // [sp+AC8h] [bp-268h]@61
  int v628; // [sp+ACCh] [bp-264h]@61
  int v629; // [sp+AD0h] [bp-260h]@61
  void *v630; // [sp+AD4h] [bp-25Ch]@57
  void (*v631)(void); // [sp+ADCh] [bp-254h]@57
  signed int (*v632)(); // [sp+AE0h] [bp-250h]@57
  _DWORD *v633; // [sp+AE4h] [bp-24Ch]@57
  void (*v634)(void); // [sp+AECh] [bp-244h]@57
  int *(__fastcall *v635)(int *, int, int); // [sp+AF0h] [bp-240h]@57
  int v636; // [sp+AF4h] [bp-23Ch]@57
  int v637; // [sp+AF8h] [bp-238h]@57
  void *v638; // [sp+AFCh] [bp-234h]@53
  void (*v639)(void); // [sp+B04h] [bp-22Ch]@53
  signed int (*v640)(); // [sp+B08h] [bp-228h]@53
  _DWORD *v641; // [sp+B0Ch] [bp-224h]@53
  void (*v642)(void); // [sp+B14h] [bp-21Ch]@53
  void **(__fastcall *v643)(void **, int, int); // [sp+B18h] [bp-218h]@53
  int v644; // [sp+B1Ch] [bp-214h]@53
  int v645; // [sp+B20h] [bp-210h]@53
  void *v646; // [sp+B24h] [bp-20Ch]@49
  void (*v647)(void); // [sp+B2Ch] [bp-204h]@49
  signed int (*v648)(); // [sp+B30h] [bp-200h]@49
  _DWORD *v649; // [sp+B34h] [bp-1FCh]@49
  void (*v650)(void); // [sp+B3Ch] [bp-1F4h]@49
  void *(__fastcall *v651)(int *, int, int); // [sp+B40h] [bp-1F0h]@49
  int v652; // [sp+B44h] [bp-1ECh]@49
  int v653; // [sp+B48h] [bp-1E8h]@49
  void *v654; // [sp+B4Ch] [bp-1E4h]@45
  void (*v655)(void); // [sp+B54h] [bp-1DCh]@45
  signed int (*v656)(); // [sp+B58h] [bp-1D8h]@45
  _DWORD *v657; // [sp+B5Ch] [bp-1D4h]@45
  void (*v658)(void); // [sp+B64h] [bp-1CCh]@45
  int *(__fastcall *v659)(int *, int, int); // [sp+B68h] [bp-1C8h]@45
  int v660; // [sp+B6Ch] [bp-1C4h]@45
  int v661; // [sp+B70h] [bp-1C0h]@45
  void *v662; // [sp+B74h] [bp-1BCh]@41
  void (*v663)(void); // [sp+B7Ch] [bp-1B4h]@41
  signed int (*v664)(); // [sp+B80h] [bp-1B0h]@41
  void *v665; // [sp+B84h] [bp-1ACh]@41
  void (*v666)(void); // [sp+B8Ch] [bp-1A4h]@41
  void **(__fastcall *v667)(void **); // [sp+B90h] [bp-1A0h]@41
  int v668; // [sp+B94h] [bp-19Ch]@41
  void *v669; // [sp+B98h] [bp-198h]@37
  void (*v670)(void); // [sp+BA0h] [bp-190h]@37
  signed int (*v671)(); // [sp+BA4h] [bp-18Ch]@37
  _DWORD *v672; // [sp+BA8h] [bp-188h]@37
  void (*v673)(void); // [sp+BB0h] [bp-180h]@37
  int (__fastcall *v674)(int); // [sp+BB4h] [bp-17Ch]@37
  int v675; // [sp+BB8h] [bp-178h]@37
  void *v676; // [sp+BBCh] [bp-174h]@33
  void (*v677)(void); // [sp+BC4h] [bp-16Ch]@33
  signed int (*v678)(); // [sp+BC8h] [bp-168h]@33
  _DWORD *v679; // [sp+BCCh] [bp-164h]@33
  void (*v680)(void); // [sp+BD4h] [bp-15Ch]@33
  signed int (__fastcall *v681)(int); // [sp+BD8h] [bp-158h]@33
  int v682; // [sp+BDCh] [bp-154h]@33
  void *v683; // [sp+BE0h] [bp-150h]@29
  void (*v684)(void); // [sp+BE8h] [bp-148h]@29
  signed int (*v685)(); // [sp+BECh] [bp-144h]@29
  _DWORD *v686; // [sp+BF0h] [bp-140h]@29
  void (*v687)(void); // [sp+BF8h] [bp-138h]@29
  signed int (__fastcall *v688)(int, int); // [sp+BFCh] [bp-134h]@29
  int v689; // [sp+C00h] [bp-130h]@29
  void *v690; // [sp+C04h] [bp-12Ch]@25
  void (*v691)(void); // [sp+C0Ch] [bp-124h]@25
  signed int (*v692)(); // [sp+C10h] [bp-120h]@25
  _DWORD *v693; // [sp+C14h] [bp-11Ch]@25
  void (*v694)(void); // [sp+C1Ch] [bp-114h]@25
  int *(__fastcall *v695)(int *, int, int); // [sp+C20h] [bp-110h]@25
  int v696; // [sp+C24h] [bp-10Ch]@25
  int v697; // [sp+C28h] [bp-108h]@25
  void *v698; // [sp+C2Ch] [bp-104h]@21
  void (*v699)(void); // [sp+C34h] [bp-FCh]@21
  signed int (*v700)(); // [sp+C38h] [bp-F8h]@21
  _DWORD *v701; // [sp+C3Ch] [bp-F4h]@21
  void (*v702)(void); // [sp+C44h] [bp-ECh]@21
  int *(__fastcall *v703)(int *, int, int); // [sp+C48h] [bp-E8h]@21
  int v704; // [sp+C4Ch] [bp-E4h]@21
  int v705; // [sp+C50h] [bp-E0h]@21
  void *v706; // [sp+C54h] [bp-DCh]@17
  void (*v707)(void); // [sp+C5Ch] [bp-D4h]@17
  signed int (*v708)(); // [sp+C60h] [bp-D0h]@17
  _DWORD *v709; // [sp+C64h] [bp-CCh]@17
  void (*v710)(void); // [sp+C6Ch] [bp-C4h]@17
  int *(__fastcall *v711)(int *, int, int); // [sp+C70h] [bp-C0h]@17
  int v712; // [sp+C74h] [bp-BCh]@17
  int v713; // [sp+C78h] [bp-B8h]@17
  void *v714; // [sp+C7Ch] [bp-B4h]@13
  void (*v715)(void); // [sp+C84h] [bp-ACh]@13
  signed int (*v716)(); // [sp+C88h] [bp-A8h]@13
  _DWORD *v717; // [sp+C8Ch] [bp-A4h]@13
  void (*v718)(void); // [sp+C94h] [bp-9Ch]@13
  signed int (__fastcall *v719)(int, int); // [sp+C98h] [bp-98h]@13
  int v720; // [sp+C9Ch] [bp-94h]@13
  int v721; // [sp+CA0h] [bp-90h]@13
  void *v722; // [sp+CA4h] [bp-8Ch]@9
  void (*v723)(void); // [sp+CACh] [bp-84h]@9
  signed int (*v724)(); // [sp+CB0h] [bp-80h]@9
  _DWORD *v725; // [sp+CB4h] [bp-7Ch]@9
  void (*v726)(void); // [sp+CBCh] [bp-74h]@9
  void **(__fastcall *v727)(void **, int, int); // [sp+CC0h] [bp-70h]@9
  int v728; // [sp+CC4h] [bp-6Ch]@9
  int v729; // [sp+CC8h] [bp-68h]@9
  void *v730; // [sp+CCCh] [bp-64h]@5
  void (*v731)(void); // [sp+CD4h] [bp-5Ch]@5
  signed int (*v732)(); // [sp+CD8h] [bp-58h]@5
  _DWORD *v733; // [sp+CDCh] [bp-54h]@5
  void (*v734)(void); // [sp+CE4h] [bp-4Ch]@5
  void *(__fastcall *v735)(int *, int, int); // [sp+CE8h] [bp-48h]@5
  int v736; // [sp+CECh] [bp-44h]@5
  int v737; // [sp+CF0h] [bp-40h]@5
  void *v738; // [sp+CF4h] [bp-3Ch]@1
  void (*v739)(void); // [sp+CFCh] [bp-34h]@1
  signed int (*v740)(); // [sp+D00h] [bp-30h]@1
  _DWORD *v741; // [sp+D04h] [bp-2Ch]@1
  void (*v742)(void); // [sp+D0Ch] [bp-24h]@1
  int *(__fastcall *v743)(int *, int, int); // [sp+D10h] [bp-20h]@1
  int v744; // [sp+D14h] [bp-1Ch]@1
  int v745; // [sp+D18h] [bp-18h]@1

  v1 = __PAIR__(66094686, (unsigned int)this);
  v744 = -599272264;
  v745 = 66094686;
  v2 = operator new(4u);
  *v2 = v1;
  v741 = v2;
  v743 = sub_11EE33C;
  v742 = (void (*)(void))sub_11EE35C;
  v738 = operator new(1u);
  v740 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v739 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v745, &v744, (int)&v741, (int)&v738);
  if ( v739 )
    v739();
  if ( v742 )
    v742();
  v737 = HIDWORD(v1);
  v736 = -473685880;
  v3 = operator new(4u);
  *v3 = v1;
  v733 = v3;
  v735 = sub_11EE394;
  v734 = (void (*)(void))sub_11EE3D4;
  v730 = operator new(1u);
  v732 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v731 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v737, &v736, (int)&v733, (int)&v730);
  if ( v731 )
    v731();
  if ( v734 )
    v734();
  v729 = HIDWORD(v1);
  StringHash::StringHash<char [29]>(&v728, (int)"#legacy_world_texture_source");
  v4 = operator new(4u);
  *v4 = v1;
  v725 = v4;
  v727 = sub_11EE40A;
  v726 = (void (*)(void))sub_11EE450;
  v722 = operator new(1u);
  v724 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v723 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v729, &v728, (int)&v725, (int)&v722);
  if ( v723 )
    v723();
  if ( v726 )
    v726();
  v721 = HIDWORD(v1);
  StringHash::StringHash<char [27]>(&v720, (int)"#legacy_world_date_visible");
  v5 = operator new(4u);
  *v5 = v1;
  v717 = v5;
  v719 = sub_11EE486;
  v718 = (void (*)(void))sub_11EE49C;
  v714 = operator new(1u);
  v716 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v715 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection(v1, &v721, &v720, (int)&v717, (int)&v714);
  if ( v715 )
    v715();
  if ( v718 )
    v718();
  v713 = HIDWORD(v1);
  v712 = -1628710649;
  v6 = operator new(4u);
  *v6 = v1;
  v709 = v6;
  v711 = sub_11EE4D2;
  v710 = (void (*)(void))sub_11EE4F2;
  v706 = operator new(1u);
  v708 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v707 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v713, &v712, (int)&v709, (int)&v706);
  if ( v707 )
    v707();
  if ( v710 )
    v710();
  v705 = HIDWORD(v1);
  StringHash::StringHash<char [24]>(&v704, (int)"#legacy_world_game_mode");
  v7 = operator new(4u);
  *v7 = v1;
  v701 = v7;
  v703 = sub_11EE528;
  v702 = (void (*)(void))sub_11EE548;
  v698 = operator new(1u);
  v700 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v699 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v705, &v704, (int)&v701, (int)&v698);
  if ( v699 )
    v699();
  if ( v702 )
    v702();
  v697 = HIDWORD(v1);
  StringHash::StringHash<char [23]>(&v696, (int)"#legacy_worldfile_size");
  v8 = operator new(4u);
  *v8 = v1;
  v693 = v8;
  v695 = sub_11EE57E;
  v694 = (void (*)(void))sub_11EE59E;
  v690 = operator new(1u);
  v692 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v691 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v697, &v696, (int)&v693, (int)&v690);
  if ( v691 )
    v691();
  if ( v694 )
    v694();
  StringHash::StringHash<char [34]>(&v689, (int)"#legacy_world_item_grid_dimension");
  v9 = operator new(4u);
  *v9 = v1;
  v686 = v9;
  v688 = sub_11EE5D4;
  v687 = (void (*)(void))sub_11EE5FA;
  v683 = operator new(1u);
  v685 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v684 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize(v1, &v689, (int)&v686, (int)&v683);
  if ( v684 )
    v684();
  if ( v687 )
    v687();
  StringHash::StringHash<char [23]>(&v682, (int)"#legacy_worlds_visible");
  v10 = operator new(4u);
  *v10 = v1;
  v679 = v10;
  v681 = sub_11EE630;
  v680 = (void (*)(void))sub_11EE64E;
  v676 = operator new(1u);
  v678 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v677 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v682, (int)&v679, (int)&v676);
  if ( v677 )
    v677();
  if ( v680 )
    v680();
  StringHash::StringHash<char [36]>(&v675, (int)"#loading_legacy_worlds_grid_visible");
  v11 = operator new(4u);
  *v11 = v1;
  v672 = v11;
  v674 = sub_11EE684;
  v673 = (void (*)(void))sub_11EE692;
  v669 = operator new(1u);
  v671 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v670 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v675, (int)&v672, (int)&v669);
  if ( v670 )
    v670();
  if ( v673 )
    v673();
  StringHash::StringHash<char [39]>(&v668, (int)"#legacy_worlds_loading_display_message");
  v665 = operator new(1u);
  v667 = sub_11EE6C8;
  v666 = (void (*)(void))sub_11EE6E0;
  v662 = operator new(1u);
  v664 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v663 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString(v1, &v668, (int)&v665, (int)&v662);
  if ( v663 )
    v663();
  if ( v666 )
    v666();
  HIDWORD(v1) = -2002578896;
  v660 = -1546458984;
  v661 = -2002578896;
  v12 = operator new(4u);
  *v12 = v1;
  v657 = v12;
  v659 = sub_11EE70E;
  v658 = (void (*)(void))sub_11EE72E;
  v654 = operator new(1u);
  v656 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v655 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v661, &v660, (int)&v657, (int)&v654);
  if ( v655 )
    v655();
  if ( v658 )
    v658();
  v653 = HIDWORD(v1);
  v652 = 599052008;
  v13 = operator new(4u);
  *v13 = v1;
  v649 = v13;
  v651 = sub_11EE764;
  v650 = (void (*)(void))sub_11EE7A4;
  v646 = operator new(1u);
  v648 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v647 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v653, &v652, (int)&v649, (int)&v646);
  if ( v647 )
    v647();
  if ( v650 )
    v650();
  v645 = HIDWORD(v1);
  StringHash::StringHash<char [28]>(&v644, (int)"#local_world_texture_source");
  v14 = operator new(4u);
  *v14 = v1;
  v641 = v14;
  v643 = sub_11EE7DA;
  v642 = (void (*)(void))sub_11EE820;
  v638 = operator new(1u);
  v640 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v639 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v645, &v644, (int)&v641, (int)&v638);
  if ( v639 )
    v639();
  if ( v642 )
    v642();
  v637 = HIDWORD(v1);
  v636 = 1719173095;
  v15 = operator new(4u);
  *v15 = v1;
  v633 = v15;
  v635 = sub_11EE856;
  v634 = (void (*)(void))sub_11EE876;
  v630 = operator new(1u);
  v632 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v631 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v637, &v636, (int)&v633, (int)&v630);
  if ( v631 )
    v631();
  if ( v634 )
    v634();
  v629 = HIDWORD(v1);
  StringHash::StringHash<char [23]>(&v628, (int)"#local_world_game_mode");
  v16 = operator new(4u);
  *v16 = v1;
  v625 = v16;
  v627 = sub_11EE8AC;
  v626 = (void (*)(void))sub_11EE8CC;
  v622 = operator new(1u);
  v624 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v623 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v629, &v628, (int)&v625, (int)&v622);
  if ( v623 )
    v623();
  if ( v626 )
    v626();
  v621 = HIDWORD(v1);
  v620 = 935453788;
  v17 = operator new(4u);
  *v17 = v1;
  v617 = v17;
  v619 = sub_11EE902;
  v618 = (void (*)(void))sub_11EE922;
  v614 = operator new(1u);
  v616 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v615 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v621, &v620, (int)&v617, (int)&v614);
  if ( v615 )
    v615();
  if ( v618 )
    v618();
  v613 = HIDWORD(v1);
  v612 = -1029294155;
  v18 = operator new(4u);
  *v18 = v1;
  v609 = v18;
  v611 = sub_11EE958;
  v610 = (void (*)(void))sub_11EEA4C;
  v606 = operator new(1u);
  v608 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v607 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection(v1, &v613, &v612, (int)&v609, (int)&v606);
  if ( v607 )
    v607();
  if ( v610 )
    v610();
  v605 = HIDWORD(v1);
  v604 = 1351337589;
  v19 = operator new(4u);
  *v19 = v1;
  v601 = v19;
  v603 = sub_11EEA82;
  v602 = (void (*)(void))sub_11EEA9C;
  v598 = operator new(1u);
  v600 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v599 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection(v1, &v605, &v604, (int)&v601, (int)&v598);
  if ( v599 )
    v599();
  if ( v602 )
    v602();
  StringHash::StringHash<char [33]>(&v597, (int)"#local_world_item_grid_dimension");
  v20 = operator new(4u);
  *v20 = v1;
  v594 = v20;
  v596 = sub_11EEAD2;
  v595 = (void (*)(void))sub_11EEAF8;
  v591 = operator new(1u);
  v593 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v592 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize(v1, &v597, (int)&v594, (int)&v591);
  if ( v592 )
    v592();
  if ( v595 )
    v595();
  v590 = 1453565880;
  v21 = operator new(4u);
  *v21 = v1;
  v587 = v21;
  v589 = sub_11EEB30;
  v588 = (void (*)(void))sub_11EEB74;
  v584 = operator new(1u);
  v586 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v585 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString(v1, &v590, (int)&v587, (int)&v584);
  if ( v585 )
    v585();
  if ( v588 )
    v588();
  v583 = HIDWORD(v1);
  StringHash::StringHash<char [33]>(&v582, (int)"#local_and_cloud_storage_visible");
  v22 = operator new(4u);
  *v22 = v1;
  v579 = v22;
  v581 = sub_11EEBAA;
  v580 = (void (*)(void))sub_11EEBD6;
  v576 = operator new(1u);
  v578 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v577 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection(v1, &v583, &v582, (int)&v579, (int)&v576);
  if ( v577 )
    v577();
  if ( v580 )
    v580();
  v575 = HIDWORD(v1);
  StringHash::StringHash<char [28]>(&v574, (int)"#local_only_storage_visible");
  v23 = operator new(4u);
  *v23 = v1;
  v571 = v23;
  v573 = sub_11EEC0C;
  v572 = (void (*)(void))sub_11EEC3C;
  v568 = operator new(1u);
  v570 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v569 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection(v1, &v575, &v574, (int)&v571, (int)&v568);
  if ( v569 )
    v569();
  if ( v572 )
    v572();
  v567 = HIDWORD(v1);
  StringHash::StringHash<char [28]>(&v566, (int)"#cloud_only_storage_visible");
  v24 = operator new(4u);
  *v24 = v1;
  v563 = v24;
  v565 = sub_11EEC72;
  v564 = (void (*)(void))sub_11EEC9E;
  v560 = operator new(1u);
  v562 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v561 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection(v1, &v567, &v566, (int)&v563, (int)&v560);
  if ( v561 )
    v561();
  if ( v564 )
    v564();
  v559 = -878634593;
  v25 = operator new(4u);
  *v25 = v1;
  v556 = v25;
  v558 = sub_11EECD4;
  v557 = (void (*)(void))sub_11EECF2;
  v553 = operator new(1u);
  v555 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v554 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v559, (int)&v556, (int)&v553);
  if ( v554 )
    v554();
  if ( v557 )
    v557();
  StringHash::StringHash<char [25]>(&v552, (int)"#bumper_tooltips_visible");
  v26 = operator new(4u);
  *v26 = v1;
  v549 = v26;
  v551 = sub_11EED28;
  v550 = (void (*)(void))sub_11EED3E;
  v546 = operator new(1u);
  v548 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v547 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v552, (int)&v549, (int)&v546);
  if ( v547 )
    v547();
  if ( v550 )
    v550();
  StringHash::StringHash<char [40]>(&v545, (int)"#no_local_worlds_switch_setting_visible");
  v27 = operator new(4u);
  *v27 = v1;
  v542 = v27;
  v544 = sub_11EED74;
  v543 = (void (*)(void))sub_11EEDD8;
  v539 = operator new(1u);
  v541 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v540 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v545, (int)&v542, (int)&v539);
  if ( v540 )
    v540();
  if ( v543 )
    v543();
  v538 = -871456230;
  v28 = operator new(4u);
  *v28 = v1;
  v535 = v28;
  v537 = sub_11EEE0E;
  v536 = (void (*)(void))sub_11EEE2C;
  v532 = operator new(1u);
  v534 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v533 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v538, (int)&v535, (int)&v532);
  if ( v533 )
    v533();
  if ( v536 )
    v536();
  HIDWORD(v1) = -1038044086;
  LODWORD(v29) = -343735763;
  v531 = -1038044086;
  v530 = -343735763;
  v30 = operator new(4u);
  *v30 = v1;
  v527 = v30;
  v529 = sub_11EEE64;
  v528 = (void (*)(void))sub_11EEFA8;
  v524 = operator new(1u);
  v526 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v525 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v531, &v530, (int)&v527, (int)&v524);
  if ( v525 )
    v525();
  if ( v528 )
    v528();
  v523 = HIDWORD(v1);
  v522 = -2069656105;
  v31 = operator new(4u);
  *v31 = v1;
  v519 = v31;
  v521 = sub_11EEFE0;
  v520 = (void (*)(void))sub_11EF088;
  v516 = operator new(1u);
  v518 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v517 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection(v1, &v523, &v522, (int)&v519, (int)&v516);
  if ( v517 )
    v517();
  if ( v520 )
    v520();
  v515 = 918987705;
  v32 = operator new(4u);
  *v32 = v1;
  v512 = v32;
  v514 = sub_11EF0C0;
  v513 = (void (*)(void))sub_11EF1B0;
  v509 = operator new(1u);
  v511 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v510 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  ScreenController::bindStringForAnyCollection(v1, &v515, (int)&v512, (int)&v509);
  if ( v510 )
    v510();
  if ( v513 )
    v513();
  StringHash::StringHash<char [23]>(&v508, (int)"#network_world_details");
  v33 = operator new(4u);
  *v33 = v1;
  v505 = v33;
  v507 = sub_11EF1E8;
  v506 = (void (*)(void))sub_11EF2D8;
  v502 = operator new(1u);
  v504 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v503 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  ScreenController::bindStringForAnyCollection(v1, &v508, (int)&v505, (int)&v502);
  if ( v503 )
    v503();
  if ( v506 )
    v506();
  StringHash::StringHash<char [28]>(&v501, (int)"#network_world_player_count");
  v34 = operator new(4u);
  *v34 = v1;
  v498 = v34;
  v500 = sub_11EF310;
  v499 = (void (*)(void))sub_11EF408;
  v495 = operator new(1u);
  v497 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v496 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  ScreenController::bindStringForAnyCollection(v1, &v501, (int)&v498, (int)&v495);
  if ( v496 )
    v496();
  if ( v499 )
    v499();
  v494 = 1311149154;
  v35 = operator new(4u);
  *v35 = v1;
  v491 = v35;
  v493 = sub_11EF440;
  v492 = (void (*)(void))sub_11EF528;
  v488 = operator new(1u);
  v490 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v489 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v494, (int)&v491, (int)&v488);
  if ( v489 )
    v489();
  if ( v492 )
    v492();
  v487 = -1577258975;
  v36 = operator new(4u);
  *v36 = v1;
  v484 = v36;
  v486 = sub_11EF560;
  v485 = (void (*)(void))sub_11EF648;
  v481 = operator new(1u);
  v483 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v482 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v487, (int)&v484, (int)&v481);
  if ( v482 )
    v482();
  if ( v485 )
    v485();
  v480 = 1466314848;
  v37 = operator new(4u);
  *v37 = v1;
  v477 = v37;
  v479 = sub_11EF680;
  v478 = (void (*)(void))sub_11EF768;
  v474 = operator new(1u);
  v476 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v475 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v480, (int)&v477, (int)&v474);
  if ( v475 )
    v475();
  if ( v478 )
    v478();
  StringHash::StringHash<char [43]>(&v473, (int)"#servers_network_world_item_grid_dimension");
  v38 = operator new(4u);
  *v38 = v1;
  v470 = v38;
  v472 = sub_11EF79E;
  v471 = (void (*)(void))sub_11EF7C4;
  v467 = operator new(1u);
  v469 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v468 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize(v1, &v473, (int)&v470, (int)&v467);
  if ( v468 )
    v468();
  if ( v471 )
    v471();
  StringHash::StringHash<char [36]>(&v466, (int)"#realms_notification_button_visible");
  v39 = operator new(4u);
  *v39 = v1;
  v463 = v39;
  v465 = sub_11EF7FA;
  v464 = (void (*)(void))sub_11EF81E;
  v460 = operator new(1u);
  v462 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v461 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v466, (int)&v463, (int)&v460);
  if ( v461 )
    v461();
  if ( v464 )
    v464();
  StringHash::StringHash<char [38]>(&v459, (int)"#realms_notification_button_invisible");
  v40 = operator new(4u);
  *v40 = v1;
  v456 = v40;
  v458 = sub_11EF854;
  v457 = (void (*)(void))sub_11EF874;
  v453 = operator new(1u);
  v455 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v454 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v459, (int)&v456, (int)&v453);
  if ( v454 )
    v454();
  if ( v457 )
    v457();
  v452 = -647955657;
  v41 = operator new(4u);
  *v41 = v1;
  v449 = v41;
  v451 = sub_11EF8AC;
  v450 = (void (*)(void))sub_11EF92C;
  v446 = operator new(1u);
  v448 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v447 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  ScreenController::bindStringForAnyCollection(v1, &v452, (int)&v449, (int)&v446);
  if ( v447 )
    v447();
  if ( v450 )
    v450();
  v445 = -586536404;
  v42 = operator new(4u);
  *v42 = v1;
  v442 = v42;
  v444 = sub_11EF964;
  v443 = (void (*)(void))sub_11EF9E0;
  v439 = operator new(1u);
  v441 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v440 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  ScreenController::bindStringForAnyCollection(v1, &v445, (int)&v442, (int)&v439);
  if ( v440 )
    v440();
  if ( v443 )
    v443();
  StringHash::StringHash<char [27]>(&v438, (int)"#realms_world_player_count");
  v43 = operator new(4u);
  *v43 = v1;
  v435 = v43;
  v437 = sub_11EFA18;
  v436 = (void (*)(void))sub_11EFA94;
  v432 = operator new(1u);
  v434 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v433 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  ScreenController::bindStringForAnyCollection(v1, &v438, (int)&v435, (int)&v432);
  if ( v433 )
    v433();
  if ( v436 )
    v436();
  v431 = 1148474165;
  v44 = operator new(4u);
  *v44 = v1;
  v428 = v44;
  v430 = sub_11EFACC;
  v429 = (void (*)(void))sub_11EFB48;
  v425 = operator new(1u);
  v427 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v426 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v431, (int)&v428, (int)&v425);
  if ( v426 )
    v426();
  if ( v429 )
    v429();
  StringHash::StringHash<char [25]>(&v424, (int)"#realms_game_unavailable");
  v45 = operator new(4u);
  *v45 = v1;
  v421 = v45;
  v423 = sub_11EFB80;
  v422 = (void (*)(void))sub_11EFBFC;
  v418 = operator new(1u);
  v420 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v419 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v424, (int)&v421, (int)&v418);
  if ( v419 )
    v419();
  if ( v422 )
    v422();
  v417 = -305064127;
  v46 = operator new(4u);
  *v46 = v1;
  v414 = v46;
  v416 = sub_11EFC34;
  v415 = (void (*)(void))sub_11EFCB0;
  v411 = operator new(1u);
  v413 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v412 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v417, (int)&v414, (int)&v411);
  if ( v412 )
    v412();
  if ( v415 )
    v415();
  v410 = 754246486;
  v47 = operator new(4u);
  *v47 = v1;
  v407 = v47;
  v409 = sub_11EFCE8;
  v408 = (void (*)(void))sub_11EFD5C;
  v404 = operator new(1u);
  v406 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v405 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v410, (int)&v407, (int)&v404);
  if ( v405 )
    v405();
  if ( v408 )
    v408();
  StringHash::StringHash<char [28]>(&v403, (int)"#leave_realm_button_visible");
  v48 = operator new(4u);
  *v48 = v1;
  v400 = v48;
  v402 = sub_11EFD94;
  v401 = (void (*)(void))sub_11EFE0C;
  v397 = operator new(1u);
  v399 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v398 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  ScreenController::bindBoolForAnyCollection(v1, &v403, (int)&v400, (int)&v397);
  if ( v398 )
    v398();
  if ( v401 )
    v401();
  StringHash::StringHash<char [31]>(&v396, (int)"#world_button_focus_identifier");
  v393 = operator new(1u);
  v395 = sub_11EFE44;
  v394 = (void (*)(void))sub_11F0030;
  v390 = operator new(1u);
  v392 = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v391 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  ScreenController::bindStringForAnyCollection(v1, &v396, (int)&v393, (int)&v390);
  if ( v391 )
    v391();
  if ( v394 )
    v394();
  StringHash::StringHash<char [46]>(&v389, (int)"#worlds_tab_import_button_focus_down_override");
  v49 = operator new(4u);
  *v49 = v1;
  v386 = v49;
  v388 = sub_11F0060;
  v387 = (void (*)(void))sub_11F00FC;
  v383 = operator new(1u);
  v385 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v384 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString(v1, &v389, (int)&v386, (int)&v383);
  if ( v384 )
    v384();
  if ( v387 )
    v387();
  StringHash::StringHash<char [51]>(&v382, (int)"#friends_tab_invitation_button_focus_down_override");
  v50 = operator new(4u);
  *v50 = v1;
  v379 = v50;
  v381 = sub_11F0134;
  v380 = (void (*)(void))sub_11F0178;
  v376 = operator new(1u);
  v378 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v377 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString(v1, &v382, (int)&v379, (int)&v376);
  if ( v377 )
    v377();
  if ( v380 )
    v380();
  StringHash::StringHash<char [27]>(&v375, (int)"#realms_notification_count");
  v51 = operator new(4u);
  *v51 = v1;
  v372 = v51;
  v374 = sub_11F01AE;
  v373 = (void (*)(void))sub_11F01C8;
  v369 = operator new(1u);
  v371 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v370 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString(v1, &v375, (int)&v372, (int)&v369);
  if ( v370 )
    v370();
  if ( v373 )
    v373();
  v368 = 744057668;
  v52 = operator new(4u);
  *v52 = v1;
  v365 = v52;
  v367 = sub_11F01FE;
  v366 = (void (*)(void))sub_11F0226;
  v362 = operator new(1u);
  v364 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v363 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString(v1, &v368, (int)&v365, (int)&v362);
  if ( v363 )
    v363();
  if ( v366 )
    v366();
  v361 = -292924843;
  v53 = operator new(4u);
  *v53 = v1;
  v358 = v53;
  v360 = sub_11F025C;
  v359 = (void (*)(void))sub_11F02C0;
  v355 = operator new(1u);
  v357 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v356 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v361, (int)&v358, (int)&v355);
  if ( v356 )
    v356();
  if ( v359 )
    v359();
  StringHash::StringHash<char [28]>(&v354, (int)"#realm_trial_button_visible");
  v54 = operator new(4u);
  *v54 = v1;
  v351 = v54;
  v353 = sub_11F02F6;
  v352 = (void (*)(void))sub_11F0358;
  v348 = operator new(1u);
  v350 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v349 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v354, (int)&v351, (int)&v348);
  if ( v349 )
    v349();
  if ( v352 )
    v352();
  StringHash::StringHash<char [24]>(&v347, (int)"#friends_realms_visible");
  v55 = operator new(4u);
  *v55 = v1;
  v344 = v55;
  v346 = sub_11F038E;
  v345 = (void (*)(void))sub_11F03C0;
  v341 = operator new(1u);
  v343 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v342 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v347, (int)&v344, (int)&v341);
  if ( v342 )
    v342();
  if ( v345 )
    v345();
  StringHash::StringHash<char [27]>(&v340, (int)"#no_friends_realms_visible");
  v56 = operator new(4u);
  *v56 = v1;
  v337 = v56;
  v339 = sub_11F03F6;
  v338 = (void (*)(void))sub_11F0466;
  v334 = operator new(1u);
  v336 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v335 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v340, (int)&v337, (int)&v334);
  if ( v335 )
    v335();
  if ( v338 )
    v338();
  StringHash::StringHash<char [30]>(&v333, (int)"#friend_realms_grid_dimension");
  v57 = operator new(4u);
  *v57 = v1;
  v330 = v57;
  v332 = sub_11F049C;
  v331 = (void (*)(void))sub_11F04DC;
  v327 = operator new(1u);
  v329 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v328 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize(v1, &v333, (int)&v330, (int)&v327);
  if ( v328 )
    v328();
  if ( v331 )
    v331();
  StringHash::StringHash<char [32]>(&v326, (int)"#personal_realms_grid_dimension");
  v58 = operator new(4u);
  *v58 = v1;
  v323 = v58;
  v325 = sub_11F0512;
  v324 = (void (*)(void))sub_11F0544;
  v320 = operator new(1u);
  v322 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v321 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize(v1, &v326, (int)&v323, (int)&v320);
  if ( v321 )
    v321();
  if ( v324 )
    v324();
  StringHash::StringHash<char [40]>(&v319, (int)"#loading_personal_realms_grid_dimension");
  v59 = operator new(4u);
  *v59 = v1;
  v316 = v59;
  v318 = sub_11F057A;
  v317 = (void (*)(void))sub_11F05A8;
  v313 = operator new(1u);
  v315 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v314 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize(v1, &v319, (int)&v316, (int)&v313);
  if ( v314 )
    v314();
  if ( v317 )
    v317();
  StringHash::StringHash<char [39]>(&v312, (int)"#loading_friends_realms_grid_dimension");
  v60 = operator new(4u);
  *v60 = v1;
  v309 = v60;
  v311 = sub_11F05DE;
  v310 = (void (*)(void))sub_11F05FE;
  v306 = operator new(1u);
  v308 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v307 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize(v1, &v312, (int)&v309, (int)&v306);
  if ( v307 )
    v307();
  if ( v310 )
    v310();
  v305 = 835731097;
  v61 = operator new(4u);
  *v61 = v1;
  v302 = v61;
  v304 = sub_11F0634;
  v303 = (void (*)(void))sub_11F0668;
  v299 = operator new(1u);
  v301 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v300 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v305, (int)&v302, (int)&v299);
  if ( v300 )
    v300();
  if ( v303 )
    v303();
  StringHash::StringHash<char [38]>(&v298, (int)"#loading_personal_realms_grid_visible");
  v62 = operator new(4u);
  *v62 = v1;
  v295 = v62;
  v297 = sub_11F069E;
  v296 = (void (*)(void))sub_11F0700;
  v292 = operator new(1u);
  v294 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v293 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool(v1, &v298, (int)&v295, (int)&v292);
  if ( v293 )
    v293();
  if ( v296 )
    v296();
  StringHash::StringHash<char [37]>(&v291, (int)"#loading_friends_realms_grid_visible");
  v63 = operator new(4u);
  *v63 = v1;
  v288 = v63;
  v290 = sub_11F0736;
  v289 = (void (*)(void))sub_11F077C;
  v286 = operator new(1u);
  LODWORD(v64) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v64) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v287 = v64;
  ScreenController::bindBool(v1, &v291, (int)&v288, (int)&v286);
  if ( (_DWORD)v287 )
    ((void (*)(void))v287)();
  if ( v289 )
    v289();
  StringHash::StringHash<char [32]>(&v285, (int)"#loading_bars_animation_visible");
  v65 = operator new(4u);
  LODWORD(v66) = sub_11F07D6;
  *v65 = v1;
  HIDWORD(v66) = sub_11F07B2;
  v283 = v65;
  v284 = v66;
  v281 = operator new(1u);
  LODWORD(v67) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v67) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v282 = v67;
  ScreenController::bindBool(v1, &v285, (int)&v283, (int)&v281);
  if ( (_DWORD)v282 )
    ((void (*)(void))v282)();
  if ( (_DWORD)v284 )
    ((void (*)(void))v284)();
  StringHash::StringHash<char [32]>(&v280, (int)"#realms_loading_display_message");
  v68 = operator new(4u);
  LODWORD(v69) = sub_11F0818;
  *v68 = v1;
  HIDWORD(v69) = sub_11F080C;
  v278 = v68;
  v279 = v69;
  v276 = operator new(1u);
  LODWORD(v70) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v70) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v277 = v70;
  ScreenController::bindString(v1, &v280, (int)&v278, (int)&v276);
  if ( (_DWORD)v277 )
    ((void (*)(void))v277)();
  if ( (_DWORD)v279 )
    ((void (*)(void))v279)();
  StringHash::StringHash<char [42]>(&v275, (int)"#third_party_featured_item_grid_dimension");
  v71 = operator new(4u);
  LODWORD(v72) = sub_11F086A;
  *v71 = v1;
  HIDWORD(v72) = sub_11F084E;
  v273 = v71;
  v274 = v72;
  v271 = operator new(1u);
  LODWORD(v73) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v73) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v272 = v73;
  ScreenController::bindGridSize(v1, &v275, (int)&v273, (int)&v271);
  if ( (_DWORD)v272 )
    ((void (*)(void))v272)();
  if ( (_DWORD)v274 )
    ((void (*)(void))v274)();
  StringHash::StringHash<char [29]>(&v270, (int)"#feature_server_message_text");
  v74 = operator new(4u);
  LODWORD(v75) = sub_11F08D8;
  *v74 = v1;
  HIDWORD(v75) = sub_11F08A0;
  v268 = v74;
  v269 = v75;
  v266 = operator new(1u);
  LODWORD(v76) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v76) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v267 = v76;
  ScreenController::bindString(v1, &v270, (int)&v268, (int)&v266);
  if ( (_DWORD)v267 )
    ((void (*)(void))v267)();
  if ( (_DWORD)v269 )
    ((void (*)(void))v269)();
  StringHash::StringHash<char [32]>(&v265, (int)"#feature_server_message_visible");
  v77 = operator new(4u);
  LODWORD(v78) = sub_11F0950;
  *v77 = v1;
  HIDWORD(v78) = sub_11F090E;
  v263 = v77;
  v264 = v78;
  v261 = operator new(1u);
  LODWORD(v79) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v79) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v262 = v79;
  ScreenController::bindBool(v1, &v265, (int)&v263, (int)&v261);
  if ( (_DWORD)v262 )
    ((void (*)(void))v262)();
  if ( (_DWORD)v264 )
    ((void (*)(void))v264)();
  StringHash::StringHash<char [34]>(&v260, (int)"#loading_servers_progress_visible");
  v80 = operator new(4u);
  LODWORD(v81) = sub_11F09C8;
  *v80 = v1;
  HIDWORD(v81) = sub_11F0986;
  v258 = v80;
  v259 = v81;
  v256 = operator new(1u);
  LODWORD(v82) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v82) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v257 = v82;
  ScreenController::bindBool(v1, &v260, (int)&v258, (int)&v256);
  if ( (_DWORD)v257 )
    ((void (*)(void))v257)();
  if ( (_DWORD)v259 )
    ((void (*)(void))v259)();
  StringHash::StringHash<char [26]>(&v255, (int)"#featured_servers_visible");
  v83 = operator new(4u);
  LODWORD(v84) = sub_11F0A3A;
  *v83 = v1;
  HIDWORD(v84) = sub_11F09FE;
  v253 = v83;
  v254 = v84;
  v251 = operator new(1u);
  LODWORD(v85) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v85) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v252 = v85;
  ScreenController::bindBool(v1, &v255, (int)&v253, (int)&v251);
  if ( (_DWORD)v252 )
    ((void (*)(void))v252)();
  if ( (_DWORD)v254 )
    ((void (*)(void))v254)();
  HIDWORD(v29) = 1027446968;
  v250 = v29;
  v86 = operator new(4u);
  LODWORD(v87) = sub_11F0AF8;
  *v86 = v1;
  HIDWORD(v87) = sub_11F0A70;
  v248 = v86;
  v249 = v87;
  v246 = operator new(1u);
  LODWORD(v88) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v88) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v247 = v88;
  ScreenController::bindStringForCollection(v1, (int *)&v250 + 1, (int *)&v250, (int)&v248, (int)&v246);
  if ( (_DWORD)v247 )
    ((void (*)(void))v247)();
  if ( (_DWORD)v249 )
    ((void (*)(void))v249)();
  StringHash::StringHash<char [28]>(&v245, (int)"#third_party_server_message");
  v89 = operator new(4u);
  LODWORD(v90) = sub_11F0C24;
  *v89 = v1;
  HIDWORD(v90) = sub_11F0B30;
  v243 = v89;
  v244 = v90;
  v241 = operator new(1u);
  LODWORD(v91) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v91) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v242 = v91;
  ScreenController::bindStringForAnyCollection(v1, &v245, (int)&v243, (int)&v241);
  if ( (_DWORD)v242 )
    ((void (*)(void))v242)();
  if ( (_DWORD)v244 )
    ((void (*)(void))v244)();
  v239 = -2069656105;
  v240 = HIDWORD(v29);
  v92 = operator new(4u);
  LODWORD(v93) = sub_11F0D04;
  *v92 = v1;
  HIDWORD(v93) = sub_11F0C5C;
  v237 = v92;
  v238 = v93;
  v235 = operator new(1u);
  LODWORD(v94) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v94) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v236 = v94;
  ScreenController::bindStringForCollection(v1, &v240, &v239, (int)&v237, (int)&v235);
  if ( (_DWORD)v236 )
    ((void (*)(void))v236)();
  if ( (_DWORD)v238 )
    ((void (*)(void))v238)();
  StringHash::StringHash<char [25]>(&v234, (int)"#server_world_item_count");
  v95 = operator new(4u);
  LODWORD(v96) = sub_11F0D94;
  *v95 = v1;
  HIDWORD(v96) = sub_11F0D3C;
  v232 = v95;
  v233 = v96;
  v230 = operator new(1u);
  LODWORD(v97) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v97) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v231 = v97;
  ScreenController::bindString(v1, &v234, (int)&v232, (int)&v230);
  if ( (_DWORD)v231 )
    ((void (*)(void))v231)();
  if ( (_DWORD)v233 )
    ((void (*)(void))v233)();
  v229 = HIDWORD(v29);
  StringHash::StringHash<char [32]>(&v228, (int)"#third_party_screenshot_visible");
  v98 = operator new(8u);
  HIDWORD(v1) = "third_party_server_network_worlds";
  *v98 = v1;
  v225 = v98;
  v226 = (void (*)(void))sub_11F0F54;
  v227 = sub_11F0DCC;
  v223 = operator new(1u);
  LODWORD(v99) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v99) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v224 = v99;
  ScreenController::bindBoolForCollection(v1, &v229, &v228, (int)&v225, (int)&v223);
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  if ( v226 )
    v226();
  StringHash::StringHash<char [25]>(&v222, (int)"#third_party_server_name");
  v100 = operator new(4u);
  LODWORD(v101) = sub_11F1084;
  *v100 = v1;
  HIDWORD(v101) = sub_11F0F90;
  v220 = v100;
  v221 = v101;
  v218 = operator new(1u);
  LODWORD(v102) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v102) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v219 = v102;
  ScreenController::bindStringForAnyCollection(v1, &v222, (int)&v220, (int)&v218);
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  if ( (_DWORD)v221 )
    ((void (*)(void))v221)();
  v217 = HIDWORD(v29);
  v216 = -1033196779;
  v103 = operator new(4u);
  LODWORD(v104) = sub_11F1154;
  *v103 = v1;
  HIDWORD(v104) = sub_11F10BC;
  v214 = v103;
  v215 = v104;
  v212 = operator new(1u);
  LODWORD(v105) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v105) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v213 = v105;
  ScreenController::bindBoolForCollection(v1, &v217, &v216, (int)&v214, (int)&v212);
  if ( (_DWORD)v213 )
    ((void (*)(void))v213)();
  if ( (_DWORD)v215 )
    ((void (*)(void))v215)();
  v211 = HIDWORD(v29);
  v210 = -1909385520;
  v106 = operator new(4u);
  LODWORD(v107) = sub_11F1224;
  *v106 = v1;
  HIDWORD(v107) = sub_11F118C;
  v208 = v106;
  v209 = v107;
  v206 = operator new(1u);
  LODWORD(v108) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v108) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v207 = v108;
  ScreenController::bindBoolForCollection(v1, &v211, &v210, (int)&v208, (int)&v206);
  if ( (_DWORD)v207 )
    ((void (*)(void))v207)();
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  v205 = HIDWORD(v29);
  v204 = -577429599;
  v109 = operator new(4u);
  LODWORD(v110) = sub_11F1300;
  *v109 = v1;
  HIDWORD(v110) = sub_11F125C;
  v202 = v109;
  v203 = v110;
  v200 = operator new(1u);
  LODWORD(v111) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v111) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v201 = v111;
  ScreenController::bindBoolForCollection(v1, &v205, &v204, (int)&v202, (int)&v200);
  if ( (_DWORD)v201 )
    ((void (*)(void))v201)();
  if ( (_DWORD)v203 )
    ((void (*)(void))v203)();
  v199 = HIDWORD(v29);
  StringHash::StringHash<char [38]>(&v198, (int)"#third_party_server_logo_texture_path");
  v112 = operator new(8u);
  LODWORD(v113) = sub_11F14D8;
  *v112 = v1;
  HIDWORD(v113) = sub_11F1338;
  v196 = v112;
  v197 = v113;
  v194 = operator new(1u);
  LODWORD(v114) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v114) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v195 = v114;
  ScreenController::bindStringForCollection(v1, &v199, &v198, (int)&v196, (int)&v194);
  if ( (_DWORD)v195 )
    ((void (*)(void))v195)();
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  StringHash::StringHash<char [43]>(&v193, (int)"#third_party_server_logo_resource_location");
  v190 = operator new(1u);
  v191 = (void (*)(void))sub_11F152C;
  v192 = sub_11F1514;
  v188 = operator new(1u);
  LODWORD(v115) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v115) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v189 = v115;
  ScreenController::bindStringForAnyCollection(v1, &v193, (int)&v190, (int)&v188);
  if ( (_DWORD)v189 )
    ((void (*)(void))v189)();
  if ( v191 )
    v191();
  v187 = -1744040933;
  v116 = operator new(4u);
  LODWORD(v117) = sub_11F156A;
  *v116 = v1;
  HIDWORD(v117) = sub_11F155A;
  v185 = v116;
  v186 = v117;
  v183 = operator new(1u);
  LODWORD(v118) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v118) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v184 = v118;
  ScreenController::bindBool(v1, &v187, (int)&v185, (int)&v183);
  if ( (_DWORD)v184 )
    ((void (*)(void))v184)();
  if ( (_DWORD)v186 )
    ((void (*)(void))v186)();
  StringHash::StringHash<char [39]>(&v182, (int)"#lan_network_world_item_grid_dimension");
  v119 = operator new(4u);
  LODWORD(v120) = sub_11F15C6;
  *v119 = v1;
  HIDWORD(v120) = sub_11F15A0;
  v180 = v119;
  v181 = v120;
  v178 = operator new(1u);
  LODWORD(v121) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v121) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v179 = v121;
  ScreenController::bindGridSize(v1, &v182, (int)&v180, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  if ( (_DWORD)v181 )
    ((void (*)(void))v181)();
  StringHash::StringHash<char [43]>(&v177, (int)"#friends_network_world_item_grid_dimension");
  v122 = operator new(4u);
  LODWORD(v123) = sub_11F1622;
  *v122 = v1;
  HIDWORD(v123) = sub_11F15FC;
  v175 = v122;
  v176 = v123;
  v173 = operator new(1u);
  LODWORD(v124) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v124) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v174 = v124;
  ScreenController::bindGridSize(v1, &v177, (int)&v175, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  if ( (_DWORD)v176 )
    ((void (*)(void))v176)();
  StringHash::StringHash<char [25]>(&v172, (int)"#friend_world_item_count");
  v125 = operator new(4u);
  LODWORD(v126) = sub_11F16BC;
  *v125 = v1;
  HIDWORD(v126) = sub_11F1658;
  v170 = v125;
  v171 = v126;
  v168 = operator new(1u);
  LODWORD(v127) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v127) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v169 = v127;
  ScreenController::bindString(v1, &v172, (int)&v170, (int)&v168);
  if ( (_DWORD)v169 )
    ((void (*)(void))v169)();
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  v167 = 255949153;
  v128 = operator new(4u);
  LODWORD(v129) = sub_11F171C;
  *v128 = v1;
  HIDWORD(v129) = sub_11F16F2;
  v165 = v128;
  v166 = v129;
  v163 = operator new(1u);
  LODWORD(v130) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v130) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v164 = v130;
  ScreenController::bindBool(v1, &v167, (int)&v165, (int)&v163);
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  if ( (_DWORD)v166 )
    ((void (*)(void))v166)();
  StringHash::StringHash<char [25]>(&v162, (int)"#no_friends_grid_visible");
  v131 = operator new(4u);
  LODWORD(v132) = sub_11F1782;
  *v131 = v1;
  HIDWORD(v132) = sub_11F1752;
  v160 = v131;
  v161 = v132;
  v158 = operator new(1u);
  LODWORD(v133) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v133) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v159 = v133;
  ScreenController::bindBool(v1, &v162, (int)&v160, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  StringHash::StringHash<char [40]>(&v157, (int)"#multiplayer_privileges_blocked_visible");
  v134 = operator new(4u);
  LODWORD(v135) = sub_11F17CC;
  *v134 = v1;
  HIDWORD(v135) = sub_11F17B8;
  v155 = v134;
  v156 = v135;
  v153 = operator new(1u);
  LODWORD(v136) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v136) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v154 = v136;
  ScreenController::bindBool(v1, &v157, (int)&v155, (int)&v153);
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  v152 = 1058588087;
  v137 = operator new(4u);
  LODWORD(v138) = sub_11F1820;
  *v137 = v1;
  HIDWORD(v138) = sub_11F1802;
  v150 = v137;
  v151 = v138;
  v148 = operator new(1u);
  LODWORD(v139) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v139) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v149 = v139;
  ScreenController::bindBool(v1, &v152, (int)&v150, (int)&v148);
  if ( (_DWORD)v149 )
    ((void (*)(void))v149)();
  if ( (_DWORD)v151 )
    ((void (*)(void))v151)();
  v147 = -1375628994;
  v140 = operator new(4u);
  LODWORD(v141) = sub_11F1874;
  *v140 = v1;
  HIDWORD(v141) = sub_11F1856;
  v145 = v140;
  v146 = v141;
  v143 = operator new(1u);
  LODWORD(v142) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v142) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v144 = v142;
  ScreenController::bindBool(v1, &v147, (int)&v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
}


int __fastcall PlayScreenController::PlayScreenController(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r5@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  int v14; // r0@21
  unsigned int *v15; // r0@22
  unsigned int v16; // r1@24
  int v17; // r7@27
  void *v18; // r6@27
  int v20; // [sp+0h] [bp-20h]@1
  int v21; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v20 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  v21 = v6;
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
  MainMenuScreenController::MainMenuScreenController(v4, (int)&v20);
  v9 = v21;
  if ( v21 )
    v10 = (unsigned int *)(v21 + 4);
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
  *(_DWORD *)v4 = &off_26E2C48;
  *(_DWORD *)(v4 + 432) = *(_DWORD *)v3;
  v14 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v4 + 436) = v14;
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  v17 = *(_DWORD *)v3;
  v18 = operator new(0x1Cu);
  DlcPreCheckScreenHandler::DlcPreCheckScreenHandler((int)v18, v4, v17);
  *(_DWORD *)(v4 + 440) = v18;
  *(_DWORD *)(v4 + 444) = v5;
  *(_BYTE *)(v4 + 448) = 0;
  *(_BYTE *)(v4 + 449) = 1;
  *(_DWORD *)(v4 + 452) = 0;
  *(_BYTE *)(v4 + 456) = 0;
  *(_BYTE *)(v4 + 465) = 0;
  *(_DWORD *)(v4 + 468) = 0;
  *(_BYTE *)(v4 + 472) = 0;
  *(_DWORD *)(v4 + 480) = 0;
  *(_DWORD *)(v4 + 484) = 0;
  *(_DWORD *)(v4 + 488) = 30;
  *(_DWORD *)(v4 + 492) = 0;
  *(_DWORD *)(v4 + 496) = 0;
  MinecraftScreenController::_setExitBehavior(v4, 0);
  PlayScreenController::_registerEventHandlers((PlayScreenController *)v4);
  PlayScreenController::_registerBindings((PlayScreenController *)v4);
  PlayScreenModel::initLegacyWorldImporter(*(PlayScreenModel **)(v4 + 432));
  return v4;
}


void __fastcall PlayScreenController::_openProcessWorldProgressDialog(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  int v2; // r0@1
  void *v3; // r5@5
  void (*v4)(void); // r0@5
  int v5; // r4@9
  void **v6; // r0@9
  void *v7; // r0@9
  void *v8; // r0@12
  unsigned int *v9; // r2@14
  signed int v10; // r1@16
  unsigned int *v11; // r2@18
  signed int v12; // r1@20
  int v13; // [sp+8h] [bp-48h]@9
  void *v14; // [sp+Ch] [bp-44h]@9
  int v15; // [sp+14h] [bp-3Ch]@9
  char v16; // [sp+18h] [bp-38h]@5
  void (*v17)(void); // [sp+20h] [bp-30h]@5
  int v18; // [sp+24h] [bp-2Ch]@5
  __int64 v19; // [sp+28h] [bp-28h]@5
  void (*v20)(void); // [sp+30h] [bp-20h]@5
  int v21; // [sp+34h] [bp-1Ch]@5

  v1 = this;
  v2 = *((_DWORD *)this + 124);
  if ( v2 )
  {
    if ( v2 == 2 )
      *((_DWORD *)v1 + 124) = 1;
  }
  else
    *((_DWORD *)v1 + 124) = 1;
    PlayScreenController::_getConvertProgressHandlerCallback((PlayScreenController *)&v16, (int)v1);
    v3 = operator new(0x24u);
    v19 = *(_QWORD *)&v16;
    v4 = v17;
    v17 = 0;
    v20 = v4;
    v21 = v18;
    WorldProcessProgressHandler::WorldProcessProgressHandler((int)v3, 0, (int)&v19);
    if ( v20 )
      v20();
    if ( v17 )
      v17();
    v5 = *((_DWORD *)v1 + 108);
    sub_1590164((void **)&v15, "legacy_world_conversion_in_progress");
    v14 = v3;
    v6 = sub_1590164((void **)&v13, "progress.world_convert_modal_progress_screen");
    MainMenuScreenModel::navigateToModalProgressScreen(v5, (int)&v15, (int)&v14, 0, (int)v6);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
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
        j_j_j_j_j__ZdlPv_9_2(v7);
    }
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
    v14 = 0;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v15 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v8);
}


int __fastcall PlayScreenController::_startLocalWorldSubRoutine(PlayScreenController *this, const LocalWorldInfo *a2)
{
  LocalWorldInfo *v2; // r4@1
  PlayScreenController *v3; // r5@1
  int *v4; // r0@3
  char *v5; // r0@3
  int v6; // r6@4
  _DWORD *v7; // r7@4
  __int64 v8; // r0@4
  void *v9; // r0@7
  void *v10; // r0@8
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  int v16; // [sp+8h] [bp-90h]@4
  _DWORD *v17; // [sp+68h] [bp-30h]@4
  void (*v18)(void); // [sp+70h] [bp-28h]@4
  int v19; // [sp+78h] [bp-20h]@3
  int v20; // [sp+7Ch] [bp-1Ch]@3

  v2 = a2;
  v3 = this;
  if ( LocalWorldInfo::getLevelSummary(a2)[40]
    && !MinecraftScreenModel::isValidMultiplayerSkin(*((MinecraftScreenModel **)v3 + 108)) )
  {
    MainMenuScreenController::showInvalidMultiplayerSkinModal(v3);
  }
  else
    v4 = (int *)LocalWorldInfo::getLevelSummary(v2);
    sub_15901A4(&v20, v4);
    v5 = LocalWorldInfo::getLevelSummary(v2);
    sub_15901A4(&v19, (int *)v5 + 14);
    if ( !DlcPreCheckScreenHandler::isActive(*((DlcPreCheckScreenHandler **)v3 + 110)) )
    {
      v6 = *((_DWORD *)v3 + 110);
      LocalWorldInfo::LocalWorldInfo((int)&v16, (int)v2);
      v18 = 0;
      v7 = operator new(0x68u);
      *v7 = v3;
      LocalWorldInfo::LocalWorldInfo((int)(v7 + 2), (int)&v16);
      LODWORD(v8) = sub_11EB086;
      v17 = v7;
      HIDWORD(v8) = sub_11EB050;
      *(_QWORD *)&v18 = v8;
      DlcPreCheckScreenHandler::tryValidateDlcForWorldLoad(v6, (const char **)&v20, &v19, (int)&v17);
      if ( v18 )
        v18();
      LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v16);
    }
    v9 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
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
        j_j_j_j_j__ZdlPv_9_2(v9);
    v10 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v20 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v10);
  return 0;
}


signed int __fastcall PlayScreenController::_startNetworkWorld(int a1, WorldInfo *a2, int a3)
{
  int v3; // r5@1
  WorldInfo *v4; // r6@1
  int v5; // r4@1
  int v6; // r5@5
  signed int result; // r0@5
  int v8; // [sp+0h] [bp-1A0h]@5
  RakNet *v9; // [sp+188h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v9 = _stack_chk_guard;
  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(a1 + 432), 1) )
  {
    if ( MinecraftScreenModel::isValidMultiplayerSkin(*(MinecraftScreenModel **)(v3 + 432)) )
    {
      if ( WorldInfo::getStatus(v4) == 1 || NetworkWorldInfo::hasRoomForPlayers((int)v4, v5) )
      {
        v6 = *(_DWORD *)(v3 + 432);
        NetworkWorldInfo::NetworkWorldInfo((int)&v8, (int)v4);
        PlayScreenModel::startNetworkWorld(v6, (NetworkWorldInfo *)&v8, v5);
        NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v8);
        result = 8;
      }
      else
        MinecraftScreenController::_showServerCapacityFullModal((MinecraftScreenController *)v3);
        result = 0;
    }
    else
      MainMenuScreenController::showInvalidMultiplayerSkinModal((MainMenuScreenController *)v3);
      result = 0;
  }
  else
    MinecraftScreenController::_showNoWifiModal((MinecraftScreenController *)v3);
    result = 0;
  if ( _stack_chk_guard != v9 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PlayScreenController::_errorStoreUnavailable(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  __int64 v2; // r1@1
  void *v3; // r0@3
  void *v4; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  void *v9; // [sp+4h] [bp-34h]@1
  __int64 v10; // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+18h] [bp-20h]@1
  int v12; // [sp+20h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v12, "realmsCreateScreen.createFailed.title");
  sub_1590164((void **)&v11, "skins.buy.noConnection");
  v9 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
  v10 = v2;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v12, &v11, 2, (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
  v3 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v3);
  }
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v12 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v4);
}


int __fastcall PlayScreenController::_getLegacyWorldConvertCallback(PlayScreenController *this, const LegacyWorldInfo *a2, int a3)
{
  PlayScreenController *v3; // r7@1
  int v4; // r4@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int *v7; // r0@8
  unsigned int v8; // r1@10
  void *v9; // r5@13
  unsigned int *v10; // r0@14
  unsigned int v11; // r1@16
  __int64 v12; // r0@19
  void *v13; // r0@19
  unsigned int *v14; // r2@21
  unsigned int v15; // r1@23
  void *v16; // r0@28
  int v17; // r0@29
  unsigned int *v18; // r2@30
  unsigned int v19; // r1@32
  int result; // r0@37
  unsigned int *v21; // r2@38
  unsigned int v22; // r1@40
  unsigned int *v23; // r2@46
  signed int v24; // r1@48
  unsigned int *v25; // r2@50
  signed int v26; // r1@52
  int v27; // [sp+0h] [bp-110h]@7
  int v28; // [sp+4h] [bp-10Ch]@7
  int v29; // [sp+8h] [bp-108h]@13
  int v30; // [sp+68h] [bp-A8h]@13
  int v31; // [sp+70h] [bp-A0h]@1
  int v32; // [sp+74h] [bp-9Ch]@1
  int v33; // [sp+78h] [bp-98h]@7
  int v34; // [sp+D8h] [bp-38h]@7
  int v35; // [sp+E4h] [bp-2Ch]@1
  int v36; // [sp+E8h] [bp-28h]@1

  v3 = this;
  v4 = a3;
  MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>((int)&v35, (int)a2);
  v31 = v35;
  v32 = v36;
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
  LocalWorldInfo::LocalWorldInfo((int)&v33, v4);
  sub_15901A4(&v34, (int *)(v4 + 96));
  v27 = v31;
  v28 = v32;
  if ( v32 )
    v7 = (unsigned int *)(v32 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LocalWorldInfo::LocalWorldInfo((int)&v29, (int)&v33);
  sub_15901A4(&v30, &v34);
  *((_DWORD *)v3 + 2) = 0;
  v9 = operator new(0x70u);
  *(_DWORD *)v9 = v27;
  *((_DWORD *)v9 + 1) = v28;
  if ( v28 )
    v10 = (unsigned int *)(v28 + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  LocalWorldInfo::LocalWorldInfo((int)v9 + 8, (int)&v29);
  sub_15901A4((int *)v9 + 26, &v30);
  HIDWORD(v12) = sub_11F1AB4;
  LODWORD(v12) = sub_11F1D7C;
  *(_DWORD *)v3 = v9;
  *((_QWORD *)v3 + 1) = v12;
  v13 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v30 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v29);
    v14 = (unsigned int *)(v28 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v28 + 12))();
  v16 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v34 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v16);
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v33);
  v17 = v32;
    v18 = (unsigned int *)(v32 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  result = v36;
    v21 = (unsigned int *)(v36 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


signed int __fastcall PlayScreenController::_getLegacyWorldGridSize(PlayScreenController *this, int a2)
{
  PlayScreenController *v2; // r4@1
  signed int result; // r0@1

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  result = PlayScreenModel::getWorldCount(*(_DWORD *)(a2 + 432), 5, 0);
  if ( result >= 1 )
  {
    *(_DWORD *)v2 = 1;
    *((_DWORD *)v2 + 1) = result;
  }
  return result;
}


signed int __fastcall PlayScreenController::_getIndexForThirdPartyServerCollection(int a1, const char **a2, signed int a3)
{
  signed int v3; // r4@1
  const char **v4; // r6@1
  signed int v5; // r5@2
  signed int result; // r0@5

  v3 = a3;
  v4 = a2;
  if ( a3 < 0 )
  {
    result = -1;
  }
  else
    v5 = -1;
    if ( PlayScreenModel::getWorldCount(*(_DWORD *)(a1 + 432), 1, 4) > a3
      && !strcmp(*v4, "third_party_server_network_worlds") )
    {
      v5 = v3;
    }
    result = v5;
  return result;
}


int __fastcall PlayScreenController::_getRealmsGridSize(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  int result; // r0@1
  int v7; // r5@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = a3;
  result = PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(a2 + 432));
  v7 = result;
  if ( v5 == 1 )
  {
    result = MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v4 + 432));
    if ( result != 1 )
      return result;
    result = PlayScreenModel::getWorldCount(*(_DWORD *)(v4 + 432), 2, 0);
    v7 = result - v7;
    goto LABEL_7;
  }
  if ( !v5 )
    if ( result )
    {
LABEL_7:
      if ( v7 >= 1 )
      {
        result = 1;
        *(_DWORD *)v3 = 1;
        *(_DWORD *)(v3 + 4) = v7;
      }
    }
  return result;
}


signed int __fastcall PlayScreenController::_userOwnsRealm(PlayScreenController *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = PlayScreenModel::getRealmWorldsPartitionIndex(*((PlayScreenModel **)this + 108));
  v2 = 0;
  if ( v1 > 0 )
    v2 = 1;
  return v2;
}


void __fastcall PlayScreenController::_registerEventHandlers(PlayScreenController *this)
{
  PlayScreenController::_registerEventHandlers(this);
}


int __fastcall PlayScreenController::_convertLegacyWorld(PlayScreenController *this, const LegacyWorldInfo *a2)
{
  const LegacyWorldInfo *v2; // r5@1
  PlayScreenController *v3; // r6@1
  int v4; // r4@1
  int v5; // r0@1
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+0h] [bp-90h]@1
  void (*v11)(void); // [sp+8h] [bp-88h]@1
  char v12; // [sp+10h] [bp-80h]@1
  int v13; // [sp+70h] [bp-20h]@3

  v2 = a2;
  v3 = this;
  PlayScreenController::_openProcessWorldProgressDialog(this);
  v4 = *((_DWORD *)v3 + 108);
  v5 = LocalWorldInfo::LocalWorldInfo((int)&v12, (int)v2);
  sub_15901A4((int *)(v5 + 96), (int *)v2 + 24);
  PlayScreenController::_getLegacyWorldConvertCallback((PlayScreenController *)&v10, v3, (int)v2);
  PlayScreenModel::convertLegacyWorld(v4, (int)&v12, (int)&v10);
  if ( v11 )
    v11();
  v6 = (void *)(v13 - 12);
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
      j_j_j_j_j__ZdlPv_9_2(v6);
  }
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v12);
  return 0;
}


LocalWorldInfo *__fastcall PlayScreenController::_selectLegacyWorld(PlayScreenController *this, int a2, int a3)
{
  PlayScreenController *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@2
  LocalWorldInfo *result; // r0@2
  int v7; // [sp+0h] [bp-80h]@2
  void *v8; // [sp+60h] [bp-20h]@2

  v3 = this;
  v4 = PlayScreenModel::getLegacyWorldAtIndex(*(PlayScreenModel **)(a2 + 432), a3);
  if ( v4 )
  {
    v5 = LocalWorldInfo::LocalWorldInfo((int)&v7, v4);
    sub_15901A4((int *)(v5 + 96), (int *)(v4 + 96));
    LocalWorldInfo::LocalWorldInfo((int)v3, (int)&v7);
    *((_DWORD *)v3 + 24) = v8;
    v8 = &unk_28898CC;
    result = LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v7);
  }
  else
    result = LegacyWorldInfo::LegacyWorldInfo(v3);
  return result;
}


signed int __fastcall PlayScreenController::_handleEditRealm(PlayScreenController *this, int a2)
{
  PlayScreenController *v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@2

  v2 = this;
  v3 = *(_DWORD *)PlayScreenModel::getWorlds(*((PlayScreenModel **)this + 108)) + 72 * a2;
  if ( *(_DWORD *)(v3 + 8) )
  {
    PlayScreenModel::resetUpdateIntervals(*((PlayScreenModel **)v2 + 108));
    MinecraftScreenModel::navigateToRealmsSettingsScreen(
      *((MinecraftScreenModel **)v2 + 108),
      (const Realms::World *)v3);
    result = 8;
  }
  else
    result = 0;
  return result;
}


int __fastcall PlayScreenController::_updateFriendsTab(PlayScreenController *this)
{
  PlayScreenController *v1; // r4@1
  int v2; // r7@1
  signed int v3; // r8@1
  signed int v4; // r9@1
  signed int v5; // r10@1
  PlayScreenController *v6; // r6@1
  signed int v7; // r5@1
  __int64 v8; // r0@2
  int result; // r0@4
  int v10; // r8@5
  __int64 v11; // kr08_8@5
  bool v12; // cf@5
  signed __int64 v13; // r0@5
  signed int v14; // r7@7
  bool v15; // zf@7
  bool v16; // nf@7
  unsigned __int8 v17; // vf@7
  signed int v18; // r1@7
  __int64 v19; // [sp+0h] [bp-30h]@5
  char v20; // [sp+8h] [bp-28h]@2

  v1 = this;
  v2 = *((_DWORD *)this + 111);
  v3 = PlayScreenModel::getWorldCount(*((_DWORD *)this + 108), 1, 2);
  v4 = PlayScreenModel::getWorldCount(*((_DWORD *)v1 + 108), 1, 1);
  v5 = PlayScreenModel::getWorldCount(*((_DWORD *)v1 + 108), 1, 3);
  v6 = (PlayScreenController *)((char *)v1 + 480);
  v7 = PlayScreenModel::getWorldCount(*((_DWORD *)v1 + 108), 2, 0);
  if ( v2 == 1 )
  {
    sub_21E034C(&v20);
    v8 = *(_QWORD *)&v20;
  }
  else
    v8 = *(_QWORD *)v6;
    *(_QWORD *)&v20 = *(_QWORD *)v6;
  *(_QWORD *)v6 = v8;
  result = *((_DWORD *)v1 + 117);
  if ( !result )
    v10 = v4 + v3 + v5 + v7;
    sub_21E034C(&v19);
    v13 = 1000000000LL * *((_QWORD *)v1 + 61);
    v11 = v19 - *(_QWORD *)v6;
    v12 = (unsigned int)v13 >= (unsigned int)v19 - (unsigned int)*(_QWORD *)v6;
    LODWORD(v13) = 0;
    if ( !v12 )
      LODWORD(v13) = 1;
    v14 = 0;
    v17 = __OFSUB__(HIDWORD(v13), HIDWORD(v11));
    v15 = HIDWORD(v13) == HIDWORD(v11);
    v16 = HIDWORD(v13) - HIDWORD(v11) < 0;
    v18 = 0;
    if ( v16 ^ v17 )
      v18 = 1;
    if ( v15 )
      v18 = v13;
    if ( v10 > 0 )
      v14 = 1;
    result = v14 & v18;
    *((_BYTE *)v1 + 472) = v14 & v18;
  return result;
}
