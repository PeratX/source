

void __fastcall KeyboardRemappingLayout::setMappingWithRawInput(int a1, const void **a2)
{
  int v2; // r7@1
  const void **v3; // r6@1
  int v4; // r0@1
  Keymapping *v5; // r4@1
  Keymapping *v6; // r7@1
  __int64 v7; // kr00_8@1
  int v8; // r5@1
  _DWORD *v9; // r0@2
  size_t v10; // r2@2
  void *v11; // r0@6
  void *ptr; // [sp+0h] [bp-20h]@6
  char *v13; // [sp+4h] [bp-1Ch]@6
  char *v14; // [sp+8h] [bp-18h]@6

  v2 = a1;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v7 = *(_QWORD *)(v2 + 4);
  v6 = (Keymapping *)(*(_QWORD *)(v2 + 4) >> 32);
  v5 = (Keymapping *)v7;
  v8 = v4;
  if ( (Keymapping *)v7 != v6 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD **)Keymapping::getAction(v5);
      v10 = *(v9 - 3);
      if ( v10 == *((_DWORD *)*v3 - 3) && !memcmp(v9, *v3, v10) )
        break;
      v5 = (Keymapping *)((char *)v5 + 16);
      if ( v6 == v5 )
        return;
    }
    v11 = operator new(4u);
    ptr = v11;
    v14 = (char *)v11 + 4;
    *(_DWORD *)v11 = v8;
    v13 = (char *)v11 + 4;
    Keymapping::setKeys(__PAIR__(&ptr, (unsigned int)v5));
    if ( ptr )
      operator delete(ptr);
  }
}


int __fastcall KeyboardRemappingLayout::_rawKeyToKey(int a1, int a2, int a3)
{
  if ( a3 == 1 )
    a2 -= 100;
  return a2;
}


void __fastcall KeyboardRemappingLayout::~KeyboardRemappingLayout(KeyboardRemappingLayout *this)
{
  RemappingLayout *v1; // r0@1

  v1 = RemappingLayout::~RemappingLayout(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall KeyboardRemappingLayout::_populateDefaultBindings(KeyboardRemappingLayout *this, bool a2, int a3)
{
  KeyboardRemappingLayout *v3; // r4@1
  int v4; // r6@1
  __int64 v5; // kr00_8@1
  void *v6; // r0@6
  void *v7; // r0@7
  __int64 v8; // kr08_8@8
  void *v9; // r0@13
  void *v10; // r0@14
  __int64 v11; // kr10_8@15
  void *v12; // r0@20
  void *v13; // r0@21
  __int64 v14; // kr18_8@22
  void *v15; // r0@27
  void *v16; // r0@28
  __int64 v17; // kr20_8@29
  void *v18; // r0@34
  void *v19; // r0@35
  __int64 v20; // kr28_8@36
  void *v21; // r0@41
  void *v22; // r0@42
  __int64 v23; // kr30_8@43
  void *v24; // r0@48
  void *v25; // r0@49
  __int64 v26; // kr38_8@50
  void *v27; // r0@55
  void *v28; // r0@56
  __int64 v29; // kr40_8@57
  void *v30; // r0@62
  void *v31; // r0@63
  __int64 v32; // kr48_8@64
  void *v33; // r0@69
  void *v34; // r0@70
  __int64 v35; // kr50_8@71
  void *v36; // r0@76
  void *v37; // r0@77
  __int64 v38; // kr58_8@78
  void *v39; // r0@83
  void *v40; // r0@84
  __int64 v41; // kr60_8@85
  void *v42; // r0@90
  void *v43; // r0@91
  __int64 v44; // kr68_8@93
  void *v45; // r0@98
  void *v46; // r0@99
  __int64 v47; // kr70_8@100
  void *v48; // r0@105
  void *v49; // r0@106
  __int64 v50; // kr78_8@107
  void *v51; // r0@112
  void *v52; // r0@113
  __int64 v53; // kr80_8@114
  void *v54; // r0@119
  void *v55; // r0@120
  __int64 v56; // kr88_8@121
  void *v57; // r0@126
  void *v58; // r0@127
  __int64 v59; // kr90_8@128
  void *v60; // r0@133
  void *v61; // r0@134
  __int64 v62; // kr98_8@135
  void *v63; // r0@140
  void *v64; // r0@141
  __int64 v65; // krA0_8@142
  void *v66; // r0@147
  void *v67; // r0@148
  __int64 v68; // krA8_8@149
  void *v69; // r0@154
  void *v70; // r0@155
  __int64 v71; // krB0_8@156
  void *v72; // r0@161
  void *v73; // r0@162
  __int64 v74; // krB8_8@163
  void *v75; // r0@168
  void *v76; // r0@169
  void *v77; // r0@170
  __int64 v78; // krC0_8@170
  void *v79; // r0@175
  void *v80; // r0@178
  __int64 v81; // krC8_8@179
  void *v82; // r0@184
  void *v83; // r0@185
  unsigned int *v84; // r2@187
  signed int v85; // r1@189
  unsigned int *v86; // r2@191
  signed int v87; // r1@193
  unsigned int *v88; // r2@195
  signed int v89; // r1@197
  unsigned int *v90; // r2@199
  signed int v91; // r1@201
  unsigned int *v92; // r2@203
  signed int v93; // r1@205
  unsigned int *v94; // r2@207
  signed int v95; // r1@209
  unsigned int *v96; // r2@211
  signed int v97; // r1@213
  unsigned int *v98; // r2@215
  signed int v99; // r1@217
  unsigned int *v100; // r2@219
  signed int v101; // r1@221
  unsigned int *v102; // r2@223
  signed int v103; // r1@225
  unsigned int *v104; // r2@227
  signed int v105; // r1@229
  unsigned int *v106; // r2@231
  signed int v107; // r1@233
  unsigned int *v108; // r2@235
  signed int v109; // r1@237
  unsigned int *v110; // r2@239
  signed int v111; // r1@241
  unsigned int *v112; // r2@243
  signed int v113; // r1@245
  unsigned int *v114; // r2@247
  signed int v115; // r1@249
  unsigned int *v116; // r2@251
  signed int v117; // r1@253
  unsigned int *v118; // r2@255
  signed int v119; // r1@257
  unsigned int *v120; // r2@259
  signed int v121; // r1@261
  unsigned int *v122; // r2@263
  signed int v123; // r1@265
  unsigned int *v124; // r2@267
  signed int v125; // r1@269
  unsigned int *v126; // r2@271
  signed int v127; // r1@273
  unsigned int *v128; // r2@275
  signed int v129; // r1@277
  unsigned int *v130; // r2@279
  signed int v131; // r1@281
  unsigned int *v132; // r2@283
  signed int v133; // r1@285
  unsigned int *v134; // r2@287
  signed int v135; // r1@289
  unsigned int *v136; // r2@291
  signed int v137; // r1@293
  unsigned int *v138; // r2@295
  signed int v139; // r1@297
  unsigned int *v140; // r2@299
  signed int v141; // r1@301
  unsigned int *v142; // r2@303
  signed int v143; // r1@305
  unsigned int *v144; // r2@307
  signed int v145; // r1@309
  unsigned int *v146; // r2@311
  signed int v147; // r1@313
  unsigned int *v148; // r2@315
  signed int v149; // r1@317
  unsigned int *v150; // r2@319
  signed int v151; // r1@321
  unsigned int *v152; // r2@323
  signed int v153; // r1@325
  unsigned int *v154; // r2@327
  signed int v155; // r1@329
  unsigned int *v156; // r2@331
  signed int v157; // r1@333
  unsigned int *v158; // r2@335
  signed int v159; // r1@337
  unsigned int *v160; // r2@339
  signed int v161; // r1@341
  unsigned int *v162; // r2@343
  signed int v163; // r1@345
  unsigned int *v164; // r2@347
  signed int v165; // r1@349
  unsigned int *v166; // r2@351
  signed int v167; // r1@353
  unsigned int *v168; // r2@355
  signed int v169; // r1@357
  unsigned int *v170; // r2@359
  signed int v171; // r1@361
  unsigned int *v172; // r2@363
  signed int v173; // r1@365
  unsigned int *v174; // r2@367
  signed int v175; // r1@369
  unsigned int *v176; // r2@371
  signed int v177; // r1@373
  unsigned int *v178; // r2@375
  signed int v179; // r1@377
  unsigned int *v180; // r2@379
  signed int v181; // r1@381
  unsigned int *v182; // r2@383
  signed int v183; // r1@385
  unsigned int *v184; // r2@491
  signed int v185; // r1@493
  unsigned int *v186; // r2@495
  signed int v187; // r1@497
  int v188; // [sp+4h] [bp-22Ch]@179
  int v189; // [sp+8h] [bp-228h]@179
  void *v190; // [sp+Ch] [bp-224h]@182
  void *v191; // [sp+18h] [bp-218h]@170
  char *v192; // [sp+1Ch] [bp-214h]@170
  char *v193; // [sp+20h] [bp-210h]@170
  int v194; // [sp+24h] [bp-20Ch]@170
  int v195; // [sp+28h] [bp-208h]@170
  void *v196; // [sp+2Ch] [bp-204h]@173
  int v197; // [sp+38h] [bp-1F8h]@163
  int v198; // [sp+3Ch] [bp-1F4h]@163
  void *v199; // [sp+40h] [bp-1F0h]@166
  int v200; // [sp+4Ch] [bp-1E4h]@156
  int v201; // [sp+50h] [bp-1E0h]@156
  void *v202; // [sp+54h] [bp-1DCh]@159
  int v203; // [sp+60h] [bp-1D0h]@149
  int v204; // [sp+64h] [bp-1CCh]@149
  void *v205; // [sp+68h] [bp-1C8h]@152
  int v206; // [sp+74h] [bp-1BCh]@142
  int v207; // [sp+78h] [bp-1B8h]@142
  void *v208; // [sp+7Ch] [bp-1B4h]@145
  int v209; // [sp+88h] [bp-1A8h]@135
  int v210; // [sp+8Ch] [bp-1A4h]@135
  void *v211; // [sp+90h] [bp-1A0h]@138
  int v212; // [sp+9Ch] [bp-194h]@128
  int v213; // [sp+A0h] [bp-190h]@128
  void *v214; // [sp+A4h] [bp-18Ch]@131
  int v215; // [sp+B0h] [bp-180h]@121
  int v216; // [sp+B4h] [bp-17Ch]@121
  void *v217; // [sp+B8h] [bp-178h]@124
  int v218; // [sp+C4h] [bp-16Ch]@114
  int v219; // [sp+C8h] [bp-168h]@114
  void *v220; // [sp+CCh] [bp-164h]@117
  int v221; // [sp+D8h] [bp-158h]@107
  int v222; // [sp+DCh] [bp-154h]@107
  void *v223; // [sp+E0h] [bp-150h]@110
  int v224; // [sp+ECh] [bp-144h]@100
  int v225; // [sp+F0h] [bp-140h]@100
  void *v226; // [sp+F4h] [bp-13Ch]@103
  int v227; // [sp+100h] [bp-130h]@93
  int v228; // [sp+104h] [bp-12Ch]@93
  void *v229; // [sp+108h] [bp-128h]@96
  int v230; // [sp+114h] [bp-11Ch]@85
  int v231; // [sp+118h] [bp-118h]@85
  void *v232; // [sp+11Ch] [bp-114h]@88
  int v233; // [sp+128h] [bp-108h]@78
  int v234; // [sp+12Ch] [bp-104h]@78
  void *v235; // [sp+130h] [bp-100h]@81
  int v236; // [sp+13Ch] [bp-F4h]@71
  int v237; // [sp+140h] [bp-F0h]@71
  void *v238; // [sp+144h] [bp-ECh]@74
  int v239; // [sp+150h] [bp-E0h]@64
  int v240; // [sp+154h] [bp-DCh]@64
  void *v241; // [sp+158h] [bp-D8h]@67
  int v242; // [sp+164h] [bp-CCh]@57
  int v243; // [sp+168h] [bp-C8h]@57
  void *v244; // [sp+16Ch] [bp-C4h]@60
  int v245; // [sp+178h] [bp-B8h]@50
  int v246; // [sp+17Ch] [bp-B4h]@50
  void *v247; // [sp+180h] [bp-B0h]@53
  int v248; // [sp+18Ch] [bp-A4h]@43
  int v249; // [sp+190h] [bp-A0h]@43
  void *v250; // [sp+194h] [bp-9Ch]@46
  int v251; // [sp+1A0h] [bp-90h]@36
  int v252; // [sp+1A4h] [bp-8Ch]@36
  void *v253; // [sp+1A8h] [bp-88h]@39
  int v254; // [sp+1B4h] [bp-7Ch]@29
  int v255; // [sp+1B8h] [bp-78h]@29
  void *v256; // [sp+1BCh] [bp-74h]@32
  int v257; // [sp+1C8h] [bp-68h]@22
  int v258; // [sp+1CCh] [bp-64h]@22
  void *v259; // [sp+1D0h] [bp-60h]@25
  int v260; // [sp+1DCh] [bp-54h]@15
  int v261; // [sp+1E0h] [bp-50h]@15
  void *v262; // [sp+1E4h] [bp-4Ch]@18
  int v263; // [sp+1F0h] [bp-40h]@8
  int v264; // [sp+1F4h] [bp-3Ch]@8
  void *v265; // [sp+1F8h] [bp-38h]@11
  int v266; // [sp+204h] [bp-2Ch]@1
  int v267; // [sp+208h] [bp-28h]@1
  void *ptr; // [sp+20Ch] [bp-24h]@4

  v3 = this;
  v4 = a3;
  Remapping::getActionName((void **)&v266, 0);
  Keymapping::Keymapping(&v267, &v266, -99);
  v5 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v267);
  }
  else
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v5, &v267);
    *((_DWORD *)v3 + 5) += 16;
  if ( ptr )
    operator delete(ptr);
  v6 = (void *)(v267 - 12);
  if ( (int *)(v267 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v267 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
    }
    else
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v266 - 12);
  if ( (int *)(v266 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v266 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  Remapping::getActionName((void **)&v263, 1);
  Keymapping::Keymapping(&v264, &v263, -97);
  v8 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v264);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v8, &v264);
  if ( v265 )
    operator delete(v265);
  v9 = (void *)(v264 - 12);
  if ( (int *)(v264 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v264 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v263 - 12);
  if ( (int *)(v263 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v263 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  Remapping::getActionName((void **)&v260, 2);
  Keymapping::Keymapping(&v261, &v260, -98);
  v11 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v261);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v11, &v261);
  if ( v262 )
    operator delete(v262);
  v12 = (void *)(v261 - 12);
  if ( (int *)(v261 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v261 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v260 - 12);
  if ( (int *)(v260 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v260 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  Remapping::getActionName((void **)&v257, 3);
  Keymapping::Keymapping(&v258, &v257, 81);
  v14 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v258);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v14, &v258);
  if ( v259 )
    operator delete(v259);
  v15 = (void *)(v258 - 12);
  if ( (int *)(v258 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v258 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v257 - 12);
  if ( (int *)(v257 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v257 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  Remapping::getActionName((void **)&v254, 4);
  Keymapping::Keymapping(&v255, &v254, 49);
  v17 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v255);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v17, &v255);
  if ( v256 )
    operator delete(v256);
  v18 = (void *)(v255 - 12);
  if ( (int *)(v255 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v255 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void *)(v254 - 12);
  if ( (int *)(v254 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v254 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  Remapping::getActionName((void **)&v251, 5);
  Keymapping::Keymapping(&v252, &v251, 50);
  v20 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v20 == HIDWORD(v20) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v252);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v20, &v252);
  if ( v253 )
    operator delete(v253);
  v21 = (void *)(v252 - 12);
  if ( (int *)(v252 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v252 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v251 - 12);
  if ( (int *)(v251 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v251 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  Remapping::getActionName((void **)&v248, 6);
  Keymapping::Keymapping(&v249, &v248, 51);
  v23 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v23 == HIDWORD(v23) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v249);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v23, &v249);
  if ( v250 )
    operator delete(v250);
  v24 = (void *)(v249 - 12);
  if ( (int *)(v249 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v249 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v248 - 12);
  if ( (int *)(v248 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v248 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  Remapping::getActionName((void **)&v245, 7);
  Keymapping::Keymapping(&v246, &v245, 52);
  v26 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v246);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v26, &v246);
  if ( v247 )
    operator delete(v247);
  v27 = (void *)(v246 - 12);
  if ( (int *)(v246 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v246 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v245 - 12);
  if ( (int *)(v245 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v245 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  Remapping::getActionName((void **)&v242, 8);
  Keymapping::Keymapping(&v243, &v242, 53);
  v29 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v243);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v29, &v243);
  if ( v244 )
    operator delete(v244);
  v30 = (void *)(v243 - 12);
  if ( (int *)(v243 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v243 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v242 - 12);
  if ( (int *)(v242 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v242 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  Remapping::getActionName((void **)&v239, 9);
  Keymapping::Keymapping(&v240, &v239, 54);
  v32 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v240);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v32, &v240);
  if ( v241 )
    operator delete(v241);
  v33 = (void *)(v240 - 12);
  if ( (int *)(v240 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v240 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = (void *)(v239 - 12);
  if ( (int *)(v239 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v239 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  Remapping::getActionName((void **)&v236, 10);
  Keymapping::Keymapping(&v237, &v236, 55);
  v35 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v35 == HIDWORD(v35) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v237);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v35, &v237);
  if ( v238 )
    operator delete(v238);
  v36 = (void *)(v237 - 12);
  if ( (int *)(v237 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v237 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v236 - 12);
  if ( (int *)(v236 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v236 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  Remapping::getActionName((void **)&v233, 11);
  Keymapping::Keymapping(&v234, &v233, 56);
  v38 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v38 == HIDWORD(v38) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v234);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v38, &v234);
  if ( v235 )
    operator delete(v235);
  v39 = (void *)(v234 - 12);
  if ( (int *)(v234 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v234 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v233 - 12);
  if ( (int *)(v233 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v233 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  Remapping::getActionName((void **)&v230, 12);
  Keymapping::Keymapping(&v231, &v230, 57);
  v41 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v41 == HIDWORD(v41) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v231);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v41, &v231);
  if ( v232 )
    operator delete(v232);
  v42 = (void *)(v231 - 12);
  if ( (int *)(v231 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v231 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = (void *)(v230 - 12);
  if ( (int *)(v230 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v230 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  if ( v4 == 1 )
    Remapping::getActionName((void **)&v227, 13);
    Keymapping::Keymapping(&v228, &v227, 48);
    v44 = *(_QWORD *)((char *)v3 + 20);
    if ( (_DWORD)v44 == HIDWORD(v44) )
      std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v228);
      __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v44, &v228);
      *((_DWORD *)v3 + 5) += 16;
    if ( v229 )
      operator delete(v229);
    v45 = (void *)(v228 - 12);
    if ( (int *)(v228 - 12) != &dword_28898C0 )
      v184 = (unsigned int *)(v228 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v185 = __ldrex(v184);
        while ( __strex(v185 - 1, v184) );
      }
      else
        v185 = (*v184)--;
      if ( v185 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v45);
    v46 = (void *)(v227 - 12);
    if ( (int *)(v227 - 12) != &dword_28898C0 )
      v186 = (unsigned int *)(v227 - 4);
          v187 = __ldrex(v186);
        while ( __strex(v187 - 1, v186) );
        v187 = (*v186)--;
      if ( v187 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v46);
  Remapping::getActionName((void **)&v224, 14);
  Keymapping::Keymapping(&v225, &v224, 69);
  v47 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v47 == HIDWORD(v47) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v225);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v47, &v225);
  if ( v226 )
    operator delete(v226);
  v48 = (void *)(v225 - 12);
  if ( (int *)(v225 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v225 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = (void *)(v224 - 12);
  if ( (int *)(v224 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v224 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  Remapping::getActionName((void **)&v221, 15);
  Keymapping::Keymapping(&v222, &v221, 116);
  v50 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v50 == HIDWORD(v50) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v222);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v50, &v222);
  if ( v223 )
    operator delete(v223);
  v51 = (void *)(v222 - 12);
  if ( (int *)(v222 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v222 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  v52 = (void *)(v221 - 12);
  if ( (int *)(v221 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v221 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  Remapping::getActionName((void **)&v218, 16);
  Keymapping::Keymapping(&v219, &v218, 32);
  v53 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v53 == HIDWORD(v53) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v219);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v53, &v219);
  if ( v220 )
    operator delete(v220);
  v54 = (void *)(v219 - 12);
  if ( (int *)(v219 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v219 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  v55 = (void *)(v218 - 12);
  if ( (int *)(v218 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v218 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  Remapping::getActionName((void **)&v215, 17);
  Keymapping::Keymapping(&v216, &v215, 16);
  v56 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v56 == HIDWORD(v56) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v216);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v56, &v216);
  if ( v217 )
    operator delete(v217);
  v57 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v216 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  v58 = (void *)(v215 - 12);
  if ( (int *)(v215 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v215 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v58);
  Remapping::getActionName((void **)&v212, 18);
  Keymapping::Keymapping(&v213, &v212, 17);
  v59 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v59 == HIDWORD(v59) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v213);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v59, &v213);
  if ( v214 )
    operator delete(v214);
  v60 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v213 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = (void *)(v212 - 12);
  if ( (int *)(v212 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v212 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  Remapping::getActionName((void **)&v209, 19);
  Keymapping::Keymapping(&v210, &v209, 65);
  v62 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v62 == HIDWORD(v62) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v210);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v62, &v210);
  if ( v211 )
    operator delete(v211);
  v63 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v156 = (unsigned int *)(v210 - 4);
        v157 = __ldrex(v156);
      while ( __strex(v157 - 1, v156) );
      v157 = (*v156)--;
    if ( v157 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
  v64 = (void *)(v209 - 12);
  if ( (int *)(v209 - 12) != &dword_28898C0 )
    v158 = (unsigned int *)(v209 - 4);
        v159 = __ldrex(v158);
      while ( __strex(v159 - 1, v158) );
      v159 = (*v158)--;
    if ( v159 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  Remapping::getActionName((void **)&v206, 20);
  Keymapping::Keymapping(&v207, &v206, 68);
  v65 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v65 == HIDWORD(v65) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v207);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v65, &v207);
  if ( v208 )
    operator delete(v208);
  v66 = (void *)(v207 - 12);
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v160 = (unsigned int *)(v207 - 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      v161 = (*v160)--;
    if ( v161 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  v67 = (void *)(v206 - 12);
  if ( (int *)(v206 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v206 - 4);
        v163 = __ldrex(v162);
      while ( __strex(v163 - 1, v162) );
      v163 = (*v162)--;
    if ( v163 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
  Remapping::getActionName((void **)&v203, 21);
  Keymapping::Keymapping(&v204, &v203, 83);
  v68 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v68 == HIDWORD(v68) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v204);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v68, &v204);
  if ( v205 )
    operator delete(v205);
  v69 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v204 - 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v69);
  v70 = (void *)(v203 - 12);
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v203 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v70);
  Remapping::getActionName((void **)&v200, 22);
  Keymapping::Keymapping(&v201, &v200, 87);
  v71 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v71 == HIDWORD(v71) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v201);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v71, &v201);
  if ( v202 )
    operator delete(v202);
  v72 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v201 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v72);
  v73 = (void *)(v200 - 12);
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v200 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v73);
  Remapping::getActionName((void **)&v197, 30);
  Keymapping::Keymapping(&v198, &v197, 90);
  v74 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v74 == HIDWORD(v74) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v198);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v74, &v198);
  if ( v199 )
    operator delete(v199);
  v75 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v198 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v75);
  v76 = (void *)(v197 - 12);
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v197 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v76);
  Remapping::getActionName((void **)&v194, 23);
  v77 = operator new(8u);
  v191 = v77;
  v193 = (char *)v77 + 8;
  *(_DWORD *)v77 = 84;
  *((_DWORD *)v77 + 1) = 13;
  v192 = (char *)v77 + 8;
  Keymapping::Keymapping(&v195, &v194, (__int64 *)&v191);
  v78 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v78 == HIDWORD(v78) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v195);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v78, &v195);
  if ( v196 )
    operator delete(v196);
  v79 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v195 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
  if ( v191 )
    operator delete(v191);
  v80 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v194 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  Remapping::getActionName((void **)&v188, 32);
  Keymapping::Keymapping(&v189, &v188, 191);
  v81 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v81 == HIDWORD(v81) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v3 + 2, &v189);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v3 + 16, (int *)v81, &v189);
  if ( v190 )
    operator delete(v190);
  v82 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v180 = (unsigned int *)(v189 - 4);
        v181 = __ldrex(v180);
      while ( __strex(v181 - 1, v180) );
      v181 = (*v180)--;
    if ( v181 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  v83 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v182 = (unsigned int *)(v188 - 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v83);
}


KeyboardRemappingLayout *__fastcall KeyboardRemappingLayout::KeyboardRemappingLayout(int a1, int a2, int a3)
{
  int v3; // r5@1
  KeyboardRemappingLayout *v4; // r4@1

  v3 = a3;
  v4 = (KeyboardRemappingLayout *)a1;
  RemappingLayout::RemappingLayout(a1);
  *(_DWORD *)v4 = &off_26D92A4;
  KeyboardRemappingLayout::_populateDefaultBindings(v4, 0, v3);
  RemappingLayout::resetToDefaultMapping(v4);
  return v4;
}


void __fastcall KeyboardRemappingLayout::getMappedKeyName(KeyboardRemappingLayout *this, int a2, signed int a3)
{
  signed int v3; // r5@1
  int *v4; // r4@1
  _DWORD *v5; // r0@3
  size_t v6; // r2@3
  void *v7; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  __int64 v10; // kr00_8@11
  unsigned int v11; // r1@11
  const void **v12; // r0@13
  __int64 v13; // kr08_8@14
  unsigned int v14; // r1@14
  const void **v15; // r0@16
  void *v16; // r0@18
  void *v17; // r0@19
  void *v18; // r0@26
  void *v19; // r0@27
  unsigned int *v20; // r2@37
  signed int v21; // r1@39
  unsigned int *v22; // r2@41
  signed int v23; // r1@43
  unsigned int *v24; // r2@53
  signed int v25; // r1@55
  unsigned int *v26; // r2@57
  signed int v27; // r1@59
  int v28; // [sp+4h] [bp-3Ch]@14
  int v29; // [sp+Ch] [bp-34h]@14
  unsigned int v30; // [sp+10h] [bp-30h]@14
  int v31; // [sp+14h] [bp-2Ch]@11
  int v32; // [sp+1Ch] [bp-24h]@11
  unsigned int v33; // [sp+20h] [bp-20h]@11
  int v34; // [sp+28h] [bp-18h]@6

  v3 = a3;
  v4 = (int *)this;
  if ( !a3 )
  {
    sub_119C884((void **)&v34, "controllerLayoutScreen.unassigned");
    I18n::get(v4, (int **)&v34);
    v7 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  if ( a3 <= -1 )
    sub_119C884((void **)&v32, "controllerLayoutScreen.button");
    I18n::get((int *)&v33, (int **)&v32);
    Util::toString<int,(void *)0,(void *)0>((void **)&v31, v3 + 100);
    v10 = *(_QWORD *)(v33 - 12);
    v11 = *(_DWORD *)(v31 - 12) + v10;
    if ( v11 > HIDWORD(v10) && v11 <= *(_DWORD *)(v31 - 8) )
      v12 = sub_119C984((const void **)&v31, 0, v33, (_BYTE *)v10);
    else
      v12 = sub_119C8A4((const void **)&v33, (const void **)&v31);
    *v4 = (int)*v12;
    *v12 = &unk_28898CC;
    v16 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v33 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v7 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v32 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_34;
      goto LABEL_33;
  else
    v5 = (_DWORD *)Keyboard::_keyNames[a3];
    v6 = *(v5 - 3);
    if ( v6 != *((_DWORD *)Util::EMPTY_STRING - 3) || memcmp(v5, Util::EMPTY_STRING, v6) )
      sub_119C854(v4, &Keyboard::_keyNames[v3]);
    sub_119C884((void **)&v29, "controllerLayoutScreen.button");
    I18n::get((int *)&v30, (int **)&v29);
    Util::toString<int,(void *)0,(void *)0>((void **)&v28, v3);
    v13 = *(_QWORD *)(v30 - 12);
    v14 = *(_DWORD *)(v28 - 12) + v13;
    if ( v14 > HIDWORD(v13) && v14 <= *(_DWORD *)(v28 - 8) )
      v15 = sub_119C984((const void **)&v28, 0, v30, (_BYTE *)v13);
      v15 = sub_119C8A4((const void **)&v30, (const void **)&v28);
    *v4 = (int)*v15;
    *v15 = &unk_28898CC;
    v18 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v28 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v30 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v7 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v29 - 4);
LABEL_33:
      v9 = (*v8)--;
LABEL_34:
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
}


void __fastcall KeyboardRemappingLayout::setMappingWithRawInput(int a1, const void **a2)
{
  KeyboardRemappingLayout::setMappingWithRawInput(a1, a2);
}


void __fastcall KeyboardRemappingLayout::_populateDefaultBindings(KeyboardRemappingLayout *this, bool a2, int a3)
{
  KeyboardRemappingLayout::_populateDefaultBindings(this, a2, a3);
}


const void **__fastcall KeyboardRemappingLayout::getSaveString(const void **a1, int a2, const void **a3)
{
  const void **v3; // r5@1
  const void **v4; // r4@1

  v3 = a1;
  v4 = a3;
  *a1 = &unk_28898CC;
  sub_119CAF8(a1, *((_DWORD *)*a3 - 3) + 4);
  sub_119C894(v3, "key_", 4u);
  return sub_119C8A4(v3, v4);
}


void __fastcall KeyboardRemappingLayout::~KeyboardRemappingLayout(KeyboardRemappingLayout *this)
{
  KeyboardRemappingLayout::~KeyboardRemappingLayout(this);
}


void __fastcall KeyboardRemappingLayout::getMappedKeyName(KeyboardRemappingLayout *this, int a2, signed int a3)
{
  KeyboardRemappingLayout::getMappedKeyName(this, a2, a3);
}
