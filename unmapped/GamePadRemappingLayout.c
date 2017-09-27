

int __fastcall GamePadRemappingLayout::getAdjustedKey(GamePadRemappingLayout *this, int a2)
{
  int result; // r0@2

  if ( a2 > -1 )
  {
    if ( a2 > 0 )
      --a2;
    result = a2;
  }
  else
    result = a2 + 100;
  return result;
}


void __fastcall GamePadRemappingLayout::_populateStandardBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout *v1; // r4@1
  __int64 v2; // kr00_8@1
  void *v3; // r0@6
  void *v4; // r0@7
  __int64 v5; // kr08_8@8
  void *v6; // r0@13
  void *v7; // r0@14
  __int64 v8; // kr10_8@15
  void *v9; // r0@20
  void *v10; // r0@21
  __int64 v11; // kr18_8@22
  void *v12; // r0@27
  void *v13; // r0@28
  __int64 v14; // kr20_8@29
  void *v15; // r0@34
  void *v16; // r0@35
  __int64 v17; // kr28_8@36
  void *v18; // r0@41
  void *v19; // r0@42
  __int64 v20; // kr30_8@43
  void *v21; // r0@48
  void *v22; // r0@49
  __int64 v23; // kr38_8@50
  void *v24; // r0@55
  void *v25; // r0@56
  __int64 v26; // kr40_8@57
  void *v27; // r0@62
  void *v28; // r0@63
  __int64 v29; // kr48_8@64
  void *v30; // r0@69
  void *v31; // r0@70
  __int64 v32; // kr50_8@71
  void *v33; // r0@76
  void *v34; // r0@77
  __int64 v35; // kr58_8@78
  void *v36; // r0@83
  void *v37; // r0@84
  __int64 v38; // kr60_8@85
  void *v39; // r0@90
  void *v40; // r0@91
  __int64 v41; // kr68_8@92
  void *v42; // r0@97
  void *v43; // r0@98
  __int64 v44; // kr70_8@99
  void *v45; // r0@104
  void *v46; // r0@105
  __int64 v47; // kr78_8@106
  void *v48; // r0@111
  void *v49; // r0@112
  __int64 v50; // kr80_8@113
  void *v51; // r0@118
  void *v52; // r0@119
  __int64 v53; // kr88_8@120
  void *v54; // r0@125
  void *v55; // r0@126
  __int64 v56; // kr90_8@127
  void *v57; // r0@132
  void *v58; // r0@133
  __int64 v59; // kr98_8@134
  void *v60; // r0@139
  void *v61; // r0@140
  __int64 v62; // krA0_8@141
  void *v63; // r0@146
  void *v64; // r0@147
  __int64 v65; // krA8_8@148
  void *v66; // r0@153
  void *v67; // r0@154
  unsigned int *v68; // r2@156
  signed int v69; // r1@158
  unsigned int *v70; // r2@160
  signed int v71; // r1@162
  unsigned int *v72; // r2@164
  signed int v73; // r1@166
  unsigned int *v74; // r2@168
  signed int v75; // r1@170
  unsigned int *v76; // r2@172
  signed int v77; // r1@174
  unsigned int *v78; // r2@176
  signed int v79; // r1@178
  unsigned int *v80; // r2@180
  signed int v81; // r1@182
  unsigned int *v82; // r2@184
  signed int v83; // r1@186
  unsigned int *v84; // r2@188
  signed int v85; // r1@190
  unsigned int *v86; // r2@192
  signed int v87; // r1@194
  unsigned int *v88; // r2@196
  signed int v89; // r1@198
  unsigned int *v90; // r2@200
  signed int v91; // r1@202
  unsigned int *v92; // r2@204
  signed int v93; // r1@206
  unsigned int *v94; // r2@208
  signed int v95; // r1@210
  unsigned int *v96; // r2@212
  signed int v97; // r1@214
  unsigned int *v98; // r2@216
  signed int v99; // r1@218
  unsigned int *v100; // r2@220
  signed int v101; // r1@222
  unsigned int *v102; // r2@224
  signed int v103; // r1@226
  unsigned int *v104; // r2@228
  signed int v105; // r1@230
  unsigned int *v106; // r2@232
  signed int v107; // r1@234
  unsigned int *v108; // r2@236
  signed int v109; // r1@238
  unsigned int *v110; // r2@240
  signed int v111; // r1@242
  unsigned int *v112; // r2@244
  signed int v113; // r1@246
  unsigned int *v114; // r2@248
  signed int v115; // r1@250
  unsigned int *v116; // r2@252
  signed int v117; // r1@254
  unsigned int *v118; // r2@256
  signed int v119; // r1@258
  unsigned int *v120; // r2@260
  signed int v121; // r1@262
  unsigned int *v122; // r2@264
  signed int v123; // r1@266
  unsigned int *v124; // r2@268
  signed int v125; // r1@270
  unsigned int *v126; // r2@272
  signed int v127; // r1@274
  unsigned int *v128; // r2@276
  signed int v129; // r1@278
  unsigned int *v130; // r2@280
  signed int v131; // r1@282
  unsigned int *v132; // r2@284
  signed int v133; // r1@286
  unsigned int *v134; // r2@288
  signed int v135; // r1@290
  unsigned int *v136; // r2@292
  signed int v137; // r1@294
  unsigned int *v138; // r2@296
  signed int v139; // r1@298
  unsigned int *v140; // r2@300
  signed int v141; // r1@302
  unsigned int *v142; // r2@304
  signed int v143; // r1@306
  unsigned int *v144; // r2@308
  signed int v145; // r1@310
  unsigned int *v146; // r2@312
  signed int v147; // r1@314
  unsigned int *v148; // r2@316
  signed int v149; // r1@318
  unsigned int *v150; // r2@320
  signed int v151; // r1@322
  unsigned int *v152; // r2@324
  signed int v153; // r1@326
  unsigned int *v154; // r2@328
  signed int v155; // r1@330
  int v156; // [sp+4h] [bp-1CCh]@148
  int v157; // [sp+8h] [bp-1C8h]@148
  void *v158; // [sp+Ch] [bp-1C4h]@151
  int v159; // [sp+18h] [bp-1B8h]@141
  int v160; // [sp+1Ch] [bp-1B4h]@141
  void *v161; // [sp+20h] [bp-1B0h]@144
  int v162; // [sp+2Ch] [bp-1A4h]@134
  int v163; // [sp+30h] [bp-1A0h]@134
  void *v164; // [sp+34h] [bp-19Ch]@137
  int v165; // [sp+40h] [bp-190h]@127
  int v166; // [sp+44h] [bp-18Ch]@127
  void *v167; // [sp+48h] [bp-188h]@130
  int v168; // [sp+54h] [bp-17Ch]@120
  int v169; // [sp+58h] [bp-178h]@120
  void *v170; // [sp+5Ch] [bp-174h]@123
  int v171; // [sp+68h] [bp-168h]@113
  int v172; // [sp+6Ch] [bp-164h]@113
  void *v173; // [sp+70h] [bp-160h]@116
  int v174; // [sp+7Ch] [bp-154h]@106
  int v175; // [sp+80h] [bp-150h]@106
  void *v176; // [sp+84h] [bp-14Ch]@109
  int v177; // [sp+90h] [bp-140h]@99
  int v178; // [sp+94h] [bp-13Ch]@99
  void *v179; // [sp+98h] [bp-138h]@102
  int v180; // [sp+A4h] [bp-12Ch]@92
  int v181; // [sp+A8h] [bp-128h]@92
  void *v182; // [sp+ACh] [bp-124h]@95
  int v183; // [sp+B8h] [bp-118h]@85
  int v184; // [sp+BCh] [bp-114h]@85
  void *v185; // [sp+C0h] [bp-110h]@88
  int v186; // [sp+CCh] [bp-104h]@78
  int v187; // [sp+D0h] [bp-100h]@78
  void *v188; // [sp+D4h] [bp-FCh]@81
  int v189; // [sp+E0h] [bp-F0h]@71
  int v190; // [sp+E4h] [bp-ECh]@71
  void *v191; // [sp+E8h] [bp-E8h]@74
  int v192; // [sp+F4h] [bp-DCh]@64
  int v193; // [sp+F8h] [bp-D8h]@64
  void *v194; // [sp+FCh] [bp-D4h]@67
  int v195; // [sp+108h] [bp-C8h]@57
  int v196; // [sp+10Ch] [bp-C4h]@57
  void *v197; // [sp+110h] [bp-C0h]@60
  int v198; // [sp+11Ch] [bp-B4h]@50
  int v199; // [sp+120h] [bp-B0h]@50
  void *v200; // [sp+124h] [bp-ACh]@53
  int v201; // [sp+130h] [bp-A0h]@43
  int v202; // [sp+134h] [bp-9Ch]@43
  void *v203; // [sp+138h] [bp-98h]@46
  int v204; // [sp+144h] [bp-8Ch]@36
  int v205; // [sp+148h] [bp-88h]@36
  void *v206; // [sp+14Ch] [bp-84h]@39
  int v207; // [sp+158h] [bp-78h]@29
  int v208; // [sp+15Ch] [bp-74h]@29
  void *v209; // [sp+160h] [bp-70h]@32
  int v210; // [sp+16Ch] [bp-64h]@22
  int v211; // [sp+170h] [bp-60h]@22
  void *v212; // [sp+174h] [bp-5Ch]@25
  int v213; // [sp+180h] [bp-50h]@15
  int v214; // [sp+184h] [bp-4Ch]@15
  void *v215; // [sp+188h] [bp-48h]@18
  int v216; // [sp+194h] [bp-3Ch]@8
  int v217; // [sp+198h] [bp-38h]@8
  void *v218; // [sp+19Ch] [bp-34h]@11
  int v219; // [sp+1A8h] [bp-28h]@1
  int v220; // [sp+1ACh] [bp-24h]@1
  void *ptr; // [sp+1B0h] [bp-20h]@4

  v1 = this;
  Remapping::getActionName((void **)&v219, 16);
  Keymapping::Keymapping(&v220, &v219, 1);
  v2 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v220);
  }
  else
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v2, &v220);
    *((_DWORD *)v1 + 5) += 16;
  if ( ptr )
    operator delete(ptr);
  v3 = (void *)(v220 - 12);
  if ( (int *)(v220 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v220 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    }
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  v4 = (void *)(v219 - 12);
  if ( (int *)(v219 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v219 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  Remapping::getActionName((void **)&v216, 3);
  Keymapping::Keymapping(&v217, &v216, 6);
  v5 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v217);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v5, &v217);
  if ( v218 )
    operator delete(v218);
  v6 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v217 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v216 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  Remapping::getActionName((void **)&v213, 0);
  Keymapping::Keymapping(&v214, &v213, -99);
  v8 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v214);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v8, &v214);
  if ( v215 )
    operator delete(v215);
  v9 = (void *)(v214 - 12);
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v214 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v213 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  Remapping::getActionName((void **)&v210, 2);
  Keymapping::Keymapping(&v211, &v210, -100);
  v11 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v211);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v11, &v211);
  if ( v212 )
    operator delete(v212);
  v12 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v211 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v210 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  Remapping::getActionName((void **)&v207, 24);
  Keymapping::Keymapping(&v208, &v207, 3);
  v14 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v208);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v14, &v208);
  if ( v209 )
    operator delete(v209);
  v15 = (void *)(v208 - 12);
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v208 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v207 - 12);
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v207 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  Remapping::getActionName((void **)&v204, 14);
  Keymapping::Keymapping(&v205, &v204, 4);
  v17 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v205);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v17, &v205);
  if ( v206 )
    operator delete(v206);
  v18 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v205 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v204 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  Remapping::getActionName((void **)&v201, 25);
  Keymapping::Keymapping(&v202, &v201, 11);
  v20 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v20 == HIDWORD(v20) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v202);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v20, &v202);
  if ( v203 )
    operator delete(v203);
  v21 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v202 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v201 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  Remapping::getActionName((void **)&v198, 26);
  Keymapping::Keymapping(&v199, &v198, 12);
  v23 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v23 == HIDWORD(v23) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v199);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v23, &v199);
  if ( v200 )
    operator delete(v200);
  v24 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v199 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v198 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  Remapping::getActionName((void **)&v195, 15);
  Keymapping::Keymapping(&v196, &v195, 5);
  v26 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v196);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v26, &v196);
  if ( v197 )
    operator delete(v197);
  v27 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v196 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v195 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  Remapping::getActionName((void **)&v192, 17);
  Keymapping::Keymapping(&v193, &v192, 2);
  v29 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v193);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v29, &v193);
  if ( v194 )
    operator delete(v194);
  v30 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v193 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v192 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  Remapping::getActionName((void **)&v189, 18);
  Keymapping::Keymapping(&v190, &v189, 9);
  v32 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v190);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v32, &v190);
  if ( v191 )
    operator delete(v191);
  v33 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v190 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v189 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  Remapping::getActionName((void **)&v186, 27);
  Keymapping::Keymapping(&v187, &v186, 14);
  v35 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v35 == HIDWORD(v35) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v187);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v35, &v187);
  if ( v188 )
    operator delete(v188);
  v36 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v187 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v186 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  Remapping::getActionName((void **)&v183, 28);
  Keymapping::Keymapping(&v184, &v183, 0);
  v38 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v38 == HIDWORD(v38) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v184);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v38, &v184);
  if ( v185 )
    operator delete(v185);
  v39 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v184 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v183 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  Remapping::getActionName((void **)&v180, 29);
  Keymapping::Keymapping(&v181, &v180, 10);
  v41 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v41 == HIDWORD(v41) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v181);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v41, &v181);
  if ( v182 )
    operator delete(v182);
  v42 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v181 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v180 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  Remapping::getActionName((void **)&v177, 30);
  Keymapping::Keymapping(&v178, &v177, 7);
  v44 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v44 == HIDWORD(v44) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v178);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v44, &v178);
  if ( v179 )
    operator delete(v179);
  v45 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v178 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  v46 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v177 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  Remapping::getActionName((void **)&v174, 23);
  Keymapping::Keymapping(&v175, &v174, 8);
  v47 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v47 == HIDWORD(v47) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v175);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v47, &v175);
  if ( v176 )
    operator delete(v176);
  v48 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v175 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v174 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  Remapping::getActionName((void **)&v171, 19);
  Keymapping::Keymapping(&v172, &v171, 0);
  v50 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v50 == HIDWORD(v50) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v172);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v50, &v172);
  if ( v173 )
    operator delete(v173);
  v51 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v172 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  v52 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v171 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  Remapping::getActionName((void **)&v168, 20);
  Keymapping::Keymapping(&v169, &v168, 0);
  v53 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v53 == HIDWORD(v53) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v169);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v53, &v169);
  if ( v170 )
    operator delete(v170);
  v54 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v169 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  v55 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v168 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  Remapping::getActionName((void **)&v165, 21);
  Keymapping::Keymapping(&v166, &v165, 0);
  v56 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v56 == HIDWORD(v56) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v166);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v56, &v166);
  if ( v167 )
    operator delete(v167);
  v57 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v166 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  v58 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v165 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v58);
  Remapping::getActionName((void **)&v162, 22);
  Keymapping::Keymapping(&v163, &v162, 0);
  v59 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v59 == HIDWORD(v59) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v163);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v59, &v163);
  if ( v164 )
    operator delete(v164);
  v60 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v163 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v162 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  Remapping::getActionName((void **)&v159, 1);
  Keymapping::Keymapping(&v160, &v159, 0);
  v62 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v62 == HIDWORD(v62) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v160);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v62, &v160);
  if ( v161 )
    operator delete(v161);
  v63 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v160 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
  v64 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v159 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  Remapping::getActionName((void **)&v156, 31);
  Keymapping::Keymapping(&v157, &v156, 13);
  v65 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v65 == HIDWORD(v65) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v157);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v65, &v157);
  if ( v158 )
    operator delete(v158);
  v66 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v157 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  v67 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v156 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
}


void __fastcall GamePadRemappingLayout::getKeySpriteLocation(GamePadRemappingLayout *this, int a2, unsigned int a3)
{
  GamePadRemappingLayout::getKeySpriteLocation(this, a2, a3);
}


void __fastcall GamePadRemappingLayout::_populateMotionControllerBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout::_populateMotionControllerBindings(this);
}


void __fastcall GamePadRemappingLayout::_populateSingleTriggerGearVRBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout *v1; // r4@1
  __int64 v2; // kr00_8@1
  void *v3; // r0@6
  void *v4; // r0@7
  __int64 v5; // kr08_8@8
  void *v6; // r0@13
  void *v7; // r0@14
  __int64 v8; // kr10_8@15
  void *v9; // r0@20
  void *v10; // r0@21
  __int64 v11; // kr18_8@22
  void *v12; // r0@27
  void *v13; // r0@28
  __int64 v14; // kr20_8@29
  void *v15; // r0@34
  void *v16; // r0@35
  __int64 v17; // kr28_8@36
  void *v18; // r0@41
  void *v19; // r0@42
  __int64 v20; // kr30_8@43
  void *v21; // r0@48
  void *v22; // r0@49
  __int64 v23; // kr38_8@50
  void *v24; // r0@55
  void *v25; // r0@56
  __int64 v26; // kr40_8@57
  void *v27; // r0@62
  void *v28; // r0@63
  __int64 v29; // kr48_8@64
  void *v30; // r0@69
  void *v31; // r0@70
  __int64 v32; // kr50_8@71
  void *v33; // r0@76
  void *v34; // r0@77
  __int64 v35; // kr58_8@78
  void *v36; // r0@83
  void *v37; // r0@84
  __int64 v38; // kr60_8@85
  void *v39; // r0@90
  void *v40; // r0@91
  __int64 v41; // kr68_8@92
  void *v42; // r0@97
  void *v43; // r0@98
  __int64 v44; // kr70_8@99
  void *v45; // r0@104
  void *v46; // r0@105
  __int64 v47; // kr78_8@106
  void *v48; // r0@111
  void *v49; // r0@112
  __int64 v50; // kr80_8@113
  void *v51; // r0@118
  void *v52; // r0@119
  __int64 v53; // kr88_8@120
  void *v54; // r0@125
  void *v55; // r0@126
  __int64 v56; // kr90_8@127
  void *v57; // r0@132
  void *v58; // r0@133
  __int64 v59; // kr98_8@134
  void *v60; // r0@139
  void *v61; // r0@140
  __int64 v62; // krA0_8@141
  void *v63; // r0@146
  void *v64; // r0@147
  __int64 v65; // krA8_8@148
  void *v66; // r0@153
  void *v67; // r0@154
  unsigned int *v68; // r2@156
  signed int v69; // r1@158
  unsigned int *v70; // r2@160
  signed int v71; // r1@162
  unsigned int *v72; // r2@164
  signed int v73; // r1@166
  unsigned int *v74; // r2@168
  signed int v75; // r1@170
  unsigned int *v76; // r2@172
  signed int v77; // r1@174
  unsigned int *v78; // r2@176
  signed int v79; // r1@178
  unsigned int *v80; // r2@180
  signed int v81; // r1@182
  unsigned int *v82; // r2@184
  signed int v83; // r1@186
  unsigned int *v84; // r2@188
  signed int v85; // r1@190
  unsigned int *v86; // r2@192
  signed int v87; // r1@194
  unsigned int *v88; // r2@196
  signed int v89; // r1@198
  unsigned int *v90; // r2@200
  signed int v91; // r1@202
  unsigned int *v92; // r2@204
  signed int v93; // r1@206
  unsigned int *v94; // r2@208
  signed int v95; // r1@210
  unsigned int *v96; // r2@212
  signed int v97; // r1@214
  unsigned int *v98; // r2@216
  signed int v99; // r1@218
  unsigned int *v100; // r2@220
  signed int v101; // r1@222
  unsigned int *v102; // r2@224
  signed int v103; // r1@226
  unsigned int *v104; // r2@228
  signed int v105; // r1@230
  unsigned int *v106; // r2@232
  signed int v107; // r1@234
  unsigned int *v108; // r2@236
  signed int v109; // r1@238
  unsigned int *v110; // r2@240
  signed int v111; // r1@242
  unsigned int *v112; // r2@244
  signed int v113; // r1@246
  unsigned int *v114; // r2@248
  signed int v115; // r1@250
  unsigned int *v116; // r2@252
  signed int v117; // r1@254
  unsigned int *v118; // r2@256
  signed int v119; // r1@258
  unsigned int *v120; // r2@260
  signed int v121; // r1@262
  unsigned int *v122; // r2@264
  signed int v123; // r1@266
  unsigned int *v124; // r2@268
  signed int v125; // r1@270
  unsigned int *v126; // r2@272
  signed int v127; // r1@274
  unsigned int *v128; // r2@276
  signed int v129; // r1@278
  unsigned int *v130; // r2@280
  signed int v131; // r1@282
  unsigned int *v132; // r2@284
  signed int v133; // r1@286
  unsigned int *v134; // r2@288
  signed int v135; // r1@290
  unsigned int *v136; // r2@292
  signed int v137; // r1@294
  unsigned int *v138; // r2@296
  signed int v139; // r1@298
  unsigned int *v140; // r2@300
  signed int v141; // r1@302
  unsigned int *v142; // r2@304
  signed int v143; // r1@306
  unsigned int *v144; // r2@308
  signed int v145; // r1@310
  unsigned int *v146; // r2@312
  signed int v147; // r1@314
  unsigned int *v148; // r2@316
  signed int v149; // r1@318
  unsigned int *v150; // r2@320
  signed int v151; // r1@322
  unsigned int *v152; // r2@324
  signed int v153; // r1@326
  unsigned int *v154; // r2@328
  signed int v155; // r1@330
  int v156; // [sp+4h] [bp-1CCh]@148
  int v157; // [sp+8h] [bp-1C8h]@148
  void *v158; // [sp+Ch] [bp-1C4h]@151
  int v159; // [sp+18h] [bp-1B8h]@141
  int v160; // [sp+1Ch] [bp-1B4h]@141
  void *v161; // [sp+20h] [bp-1B0h]@144
  int v162; // [sp+2Ch] [bp-1A4h]@134
  int v163; // [sp+30h] [bp-1A0h]@134
  void *v164; // [sp+34h] [bp-19Ch]@137
  int v165; // [sp+40h] [bp-190h]@127
  int v166; // [sp+44h] [bp-18Ch]@127
  void *v167; // [sp+48h] [bp-188h]@130
  int v168; // [sp+54h] [bp-17Ch]@120
  int v169; // [sp+58h] [bp-178h]@120
  void *v170; // [sp+5Ch] [bp-174h]@123
  int v171; // [sp+68h] [bp-168h]@113
  int v172; // [sp+6Ch] [bp-164h]@113
  void *v173; // [sp+70h] [bp-160h]@116
  int v174; // [sp+7Ch] [bp-154h]@106
  int v175; // [sp+80h] [bp-150h]@106
  void *v176; // [sp+84h] [bp-14Ch]@109
  int v177; // [sp+90h] [bp-140h]@99
  int v178; // [sp+94h] [bp-13Ch]@99
  void *v179; // [sp+98h] [bp-138h]@102
  int v180; // [sp+A4h] [bp-12Ch]@92
  int v181; // [sp+A8h] [bp-128h]@92
  void *v182; // [sp+ACh] [bp-124h]@95
  int v183; // [sp+B8h] [bp-118h]@85
  int v184; // [sp+BCh] [bp-114h]@85
  void *v185; // [sp+C0h] [bp-110h]@88
  int v186; // [sp+CCh] [bp-104h]@78
  int v187; // [sp+D0h] [bp-100h]@78
  void *v188; // [sp+D4h] [bp-FCh]@81
  int v189; // [sp+E0h] [bp-F0h]@71
  int v190; // [sp+E4h] [bp-ECh]@71
  void *v191; // [sp+E8h] [bp-E8h]@74
  int v192; // [sp+F4h] [bp-DCh]@64
  int v193; // [sp+F8h] [bp-D8h]@64
  void *v194; // [sp+FCh] [bp-D4h]@67
  int v195; // [sp+108h] [bp-C8h]@57
  int v196; // [sp+10Ch] [bp-C4h]@57
  void *v197; // [sp+110h] [bp-C0h]@60
  int v198; // [sp+11Ch] [bp-B4h]@50
  int v199; // [sp+120h] [bp-B0h]@50
  void *v200; // [sp+124h] [bp-ACh]@53
  int v201; // [sp+130h] [bp-A0h]@43
  int v202; // [sp+134h] [bp-9Ch]@43
  void *v203; // [sp+138h] [bp-98h]@46
  int v204; // [sp+144h] [bp-8Ch]@36
  int v205; // [sp+148h] [bp-88h]@36
  void *v206; // [sp+14Ch] [bp-84h]@39
  int v207; // [sp+158h] [bp-78h]@29
  int v208; // [sp+15Ch] [bp-74h]@29
  void *v209; // [sp+160h] [bp-70h]@32
  int v210; // [sp+16Ch] [bp-64h]@22
  int v211; // [sp+170h] [bp-60h]@22
  void *v212; // [sp+174h] [bp-5Ch]@25
  int v213; // [sp+180h] [bp-50h]@15
  int v214; // [sp+184h] [bp-4Ch]@15
  void *v215; // [sp+188h] [bp-48h]@18
  int v216; // [sp+194h] [bp-3Ch]@8
  int v217; // [sp+198h] [bp-38h]@8
  void *v218; // [sp+19Ch] [bp-34h]@11
  int v219; // [sp+1A8h] [bp-28h]@1
  int v220; // [sp+1ACh] [bp-24h]@1
  void *ptr; // [sp+1B0h] [bp-20h]@4

  v1 = this;
  Remapping::getActionName((void **)&v219, 16);
  Keymapping::Keymapping(&v220, &v219, 1);
  v2 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v220);
  }
  else
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v2, &v220);
    *((_DWORD *)v1 + 5) += 16;
  if ( ptr )
    operator delete(ptr);
  v3 = (void *)(v220 - 12);
  if ( (int *)(v220 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v220 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    }
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  v4 = (void *)(v219 - 12);
  if ( (int *)(v219 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v219 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  Remapping::getActionName((void **)&v216, 3);
  Keymapping::Keymapping(&v217, &v216, 6);
  v5 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v217);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v5, &v217);
  if ( v218 )
    operator delete(v218);
  v6 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v217 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v216 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  Remapping::getActionName((void **)&v213, 0);
  Keymapping::Keymapping(&v214, &v213, 12);
  v8 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v214);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v8, &v214);
  if ( v215 )
    operator delete(v215);
  v9 = (void *)(v214 - 12);
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v214 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v213 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  Remapping::getActionName((void **)&v210, 2);
  Keymapping::Keymapping(&v211, &v210, 11);
  v11 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v211);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v11, &v211);
  if ( v212 )
    operator delete(v212);
  v12 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v211 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v210 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  Remapping::getActionName((void **)&v207, 24);
  Keymapping::Keymapping(&v208, &v207, 3);
  v14 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v208);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v14, &v208);
  if ( v209 )
    operator delete(v209);
  v15 = (void *)(v208 - 12);
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v208 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v207 - 12);
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v207 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  Remapping::getActionName((void **)&v204, 14);
  Keymapping::Keymapping(&v205, &v204, 4);
  v17 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v205);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v17, &v205);
  if ( v206 )
    operator delete(v206);
  v18 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v205 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v204 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  Remapping::getActionName((void **)&v201, 25);
  Keymapping::Keymapping(&v202, &v201, 7);
  v20 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v20 == HIDWORD(v20) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v202);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v20, &v202);
  if ( v203 )
    operator delete(v203);
  v21 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v202 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v201 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  Remapping::getActionName((void **)&v198, 26);
  Keymapping::Keymapping(&v199, &v198, 8);
  v23 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v23 == HIDWORD(v23) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v199);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v23, &v199);
  if ( v200 )
    operator delete(v200);
  v24 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v199 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v198 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  Remapping::getActionName((void **)&v195, 15);
  Keymapping::Keymapping(&v196, &v195, 15);
  v26 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v196);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v26, &v196);
  if ( v197 )
    operator delete(v197);
  v27 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v196 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v195 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  Remapping::getActionName((void **)&v192, 17);
  Keymapping::Keymapping(&v193, &v192, 2);
  v29 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v193);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v29, &v193);
  if ( v194 )
    operator delete(v194);
  v30 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v193 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v192 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  Remapping::getActionName((void **)&v189, 18);
  Keymapping::Keymapping(&v190, &v189, 9);
  v32 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v190);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v32, &v190);
  if ( v191 )
    operator delete(v191);
  v33 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v190 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v189 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  Remapping::getActionName((void **)&v186, 27);
  Keymapping::Keymapping(&v187, &v186, 14);
  v35 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v35 == HIDWORD(v35) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v187);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v35, &v187);
  if ( v188 )
    operator delete(v188);
  v36 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v187 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v186 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  Remapping::getActionName((void **)&v183, 28);
  Keymapping::Keymapping(&v184, &v183, 0);
  v38 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v38 == HIDWORD(v38) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v184);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v38, &v184);
  if ( v185 )
    operator delete(v185);
  v39 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v184 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v183 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  Remapping::getActionName((void **)&v180, 29);
  Keymapping::Keymapping(&v181, &v180, 10);
  v41 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v41 == HIDWORD(v41) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v181);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v41, &v181);
  if ( v182 )
    operator delete(v182);
  v42 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v181 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v180 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  Remapping::getActionName((void **)&v177, 30);
  Keymapping::Keymapping(&v178, &v177, 0);
  v44 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v44 == HIDWORD(v44) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v178);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v44, &v178);
  if ( v179 )
    operator delete(v179);
  v45 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v178 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  v46 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v177 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  Remapping::getActionName((void **)&v174, 23);
  Keymapping::Keymapping(&v175, &v174, 5);
  v47 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v47 == HIDWORD(v47) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v175);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v47, &v175);
  if ( v176 )
    operator delete(v176);
  v48 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v175 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v174 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  Remapping::getActionName((void **)&v171, 19);
  Keymapping::Keymapping(&v172, &v171, 0);
  v50 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v50 == HIDWORD(v50) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v172);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v50, &v172);
  if ( v173 )
    operator delete(v173);
  v51 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v172 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  v52 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v171 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  Remapping::getActionName((void **)&v168, 20);
  Keymapping::Keymapping(&v169, &v168, 0);
  v53 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v53 == HIDWORD(v53) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v169);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v53, &v169);
  if ( v170 )
    operator delete(v170);
  v54 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v169 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  v55 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v168 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  Remapping::getActionName((void **)&v165, 21);
  Keymapping::Keymapping(&v166, &v165, 0);
  v56 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v56 == HIDWORD(v56) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v166);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v56, &v166);
  if ( v167 )
    operator delete(v167);
  v57 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v166 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  v58 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v165 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v58);
  Remapping::getActionName((void **)&v162, 22);
  Keymapping::Keymapping(&v163, &v162, 0);
  v59 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v59 == HIDWORD(v59) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v163);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v59, &v163);
  if ( v164 )
    operator delete(v164);
  v60 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v163 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v162 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  Remapping::getActionName((void **)&v159, 1);
  Keymapping::Keymapping(&v160, &v159, 0);
  v62 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v62 == HIDWORD(v62) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v160);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v62, &v160);
  if ( v161 )
    operator delete(v161);
  v63 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v160 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
  v64 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v159 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  Remapping::getActionName((void **)&v156, 31);
  Keymapping::Keymapping(&v157, &v156, 13);
  v65 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v65 == HIDWORD(v65) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v157);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v65, &v157);
  if ( v158 )
    operator delete(v158);
  v66 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v157 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  v67 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v156 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
}


void __fastcall GamePadRemappingLayout::getKeySpriteLocation(GamePadRemappingLayout *this, int a2, unsigned int a3)
{
  unsigned int v3; // r10@1
  GamePadRemappingLayout *v4; // r8@1
  int v5; // r9@2
  int v6; // r0@2
  _DWORD *v7; // r5@3
  int v8; // r4@3
  _DWORD *v9; // r6@5
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  const void **v12; // r0@14
  void *v13; // r0@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  int v16; // [sp+0h] [bp-30h]@2

  v3 = a3;
  v4 = this;
  if ( a3 )
  {
    sub_119CCEC((void **)&v16, *(_QWORD *)(a2 + 32) >> 32, *(_QWORD *)(a2 + 32));
    v5 = v3 % dword_27CA978;
    v6 = *(_DWORD *)(dword_27CA974 + 4 * (v3 % dword_27CA978));
    if ( !v6 )
      goto LABEL_13;
    v7 = *(_DWORD **)v6;
    v8 = *(_DWORD *)(*(_DWORD *)v6 + 4);
    while ( v8 != v3 )
    {
      v9 = (_DWORD *)*v7;
      if ( *v7 )
      {
        v8 = v9[1];
        v6 = (int)v7;
        v7 = (_DWORD *)*v7;
        if ( v9[1] % (unsigned int)dword_27CA978 == v5 )
          continue;
      }
    }
    v10 = v6 == 0;
    if ( v6 )
      v6 = *(_DWORD *)v6;
      v10 = v6 == 0;
    if ( v10 )
LABEL_13:
      v11 = operator new(0xCu);
      *v11 = 0;
      v11[1] = v3;
      v11[2] = &unk_28898CC;
      v6 = std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
             (int)&dword_27CA974,
             v5,
             v3,
             (int)v11);
    v12 = sub_119C8A4((const void **)&v16, (const void **)(v6 + 8));
    *(_DWORD *)v4 = *v12;
    *v12 = &unk_28898CC;
    v13 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
  }
  else
    sub_119C854((int *)this, (int *)&Util::EMPTY_STRING);
}


void __fastcall GamePadRemappingLayout::_populateSingleTriggerGearVRBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout::_populateSingleTriggerGearVRBindings(this);
}


void __fastcall GamePadRemappingLayout::getSaveString(const void **a1, int a2, const void **a3)
{
  const void **v3; // r4@1
  const void **v4; // r5@1
  const void **v5; // r0@1
  const void **v6; // r0@1
  const void **v7; // r0@1
  char *v8; // r0@1
  char *v9; // r0@2
  void *v10; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+0h] [bp-20h]@1
  char *v18; // [sp+4h] [bp-1Ch]@1
  char *v19; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v17, *(_DWORD *)(a2 + 28));
  v5 = sub_119C984((const void **)&v17, 0, (unsigned int)"ctrl_type_", (_BYTE *)0xA);
  v18 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = sub_119C894((const void **)&v18, "_", 1u);
  v19 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = sub_119C8A4((const void **)&v19, v4);
  *v3 = *v7;
  *v7 = &unk_28898CC;
  v8 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v19 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  v9 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
}


void __fastcall GamePadRemappingLayout::_populateGearVRBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout *v1; // r4@1
  __int64 v2; // kr00_8@1
  void *v3; // r0@6
  void *v4; // r0@7
  __int64 v5; // kr08_8@8
  void *v6; // r0@13
  void *v7; // r0@14
  __int64 v8; // kr10_8@15
  void *v9; // r0@20
  void *v10; // r0@21
  __int64 v11; // kr18_8@22
  void *v12; // r0@27
  void *v13; // r0@28
  __int64 v14; // kr20_8@29
  void *v15; // r0@34
  void *v16; // r0@35
  __int64 v17; // kr28_8@36
  void *v18; // r0@41
  void *v19; // r0@42
  __int64 v20; // kr30_8@43
  void *v21; // r0@48
  void *v22; // r0@49
  __int64 v23; // kr38_8@50
  void *v24; // r0@55
  void *v25; // r0@56
  __int64 v26; // kr40_8@57
  void *v27; // r0@62
  void *v28; // r0@63
  __int64 v29; // kr48_8@64
  void *v30; // r0@69
  void *v31; // r0@70
  __int64 v32; // kr50_8@71
  void *v33; // r0@76
  void *v34; // r0@77
  __int64 v35; // kr58_8@78
  void *v36; // r0@83
  void *v37; // r0@84
  __int64 v38; // kr60_8@85
  void *v39; // r0@90
  void *v40; // r0@91
  __int64 v41; // kr68_8@92
  void *v42; // r0@97
  void *v43; // r0@98
  __int64 v44; // kr70_8@99
  void *v45; // r0@104
  void *v46; // r0@105
  __int64 v47; // kr78_8@106
  void *v48; // r0@111
  void *v49; // r0@112
  __int64 v50; // kr80_8@113
  void *v51; // r0@118
  void *v52; // r0@119
  __int64 v53; // kr88_8@120
  void *v54; // r0@125
  void *v55; // r0@126
  __int64 v56; // kr90_8@127
  void *v57; // r0@132
  void *v58; // r0@133
  __int64 v59; // kr98_8@134
  void *v60; // r0@139
  void *v61; // r0@140
  __int64 v62; // krA0_8@141
  void *v63; // r0@146
  void *v64; // r0@147
  __int64 v65; // krA8_8@148
  void *v66; // r0@153
  void *v67; // r0@154
  unsigned int *v68; // r2@156
  signed int v69; // r1@158
  unsigned int *v70; // r2@160
  signed int v71; // r1@162
  unsigned int *v72; // r2@164
  signed int v73; // r1@166
  unsigned int *v74; // r2@168
  signed int v75; // r1@170
  unsigned int *v76; // r2@172
  signed int v77; // r1@174
  unsigned int *v78; // r2@176
  signed int v79; // r1@178
  unsigned int *v80; // r2@180
  signed int v81; // r1@182
  unsigned int *v82; // r2@184
  signed int v83; // r1@186
  unsigned int *v84; // r2@188
  signed int v85; // r1@190
  unsigned int *v86; // r2@192
  signed int v87; // r1@194
  unsigned int *v88; // r2@196
  signed int v89; // r1@198
  unsigned int *v90; // r2@200
  signed int v91; // r1@202
  unsigned int *v92; // r2@204
  signed int v93; // r1@206
  unsigned int *v94; // r2@208
  signed int v95; // r1@210
  unsigned int *v96; // r2@212
  signed int v97; // r1@214
  unsigned int *v98; // r2@216
  signed int v99; // r1@218
  unsigned int *v100; // r2@220
  signed int v101; // r1@222
  unsigned int *v102; // r2@224
  signed int v103; // r1@226
  unsigned int *v104; // r2@228
  signed int v105; // r1@230
  unsigned int *v106; // r2@232
  signed int v107; // r1@234
  unsigned int *v108; // r2@236
  signed int v109; // r1@238
  unsigned int *v110; // r2@240
  signed int v111; // r1@242
  unsigned int *v112; // r2@244
  signed int v113; // r1@246
  unsigned int *v114; // r2@248
  signed int v115; // r1@250
  unsigned int *v116; // r2@252
  signed int v117; // r1@254
  unsigned int *v118; // r2@256
  signed int v119; // r1@258
  unsigned int *v120; // r2@260
  signed int v121; // r1@262
  unsigned int *v122; // r2@264
  signed int v123; // r1@266
  unsigned int *v124; // r2@268
  signed int v125; // r1@270
  unsigned int *v126; // r2@272
  signed int v127; // r1@274
  unsigned int *v128; // r2@276
  signed int v129; // r1@278
  unsigned int *v130; // r2@280
  signed int v131; // r1@282
  unsigned int *v132; // r2@284
  signed int v133; // r1@286
  unsigned int *v134; // r2@288
  signed int v135; // r1@290
  unsigned int *v136; // r2@292
  signed int v137; // r1@294
  unsigned int *v138; // r2@296
  signed int v139; // r1@298
  unsigned int *v140; // r2@300
  signed int v141; // r1@302
  unsigned int *v142; // r2@304
  signed int v143; // r1@306
  unsigned int *v144; // r2@308
  signed int v145; // r1@310
  unsigned int *v146; // r2@312
  signed int v147; // r1@314
  unsigned int *v148; // r2@316
  signed int v149; // r1@318
  unsigned int *v150; // r2@320
  signed int v151; // r1@322
  unsigned int *v152; // r2@324
  signed int v153; // r1@326
  unsigned int *v154; // r2@328
  signed int v155; // r1@330
  int v156; // [sp+4h] [bp-1CCh]@148
  int v157; // [sp+8h] [bp-1C8h]@148
  void *v158; // [sp+Ch] [bp-1C4h]@151
  int v159; // [sp+18h] [bp-1B8h]@141
  int v160; // [sp+1Ch] [bp-1B4h]@141
  void *v161; // [sp+20h] [bp-1B0h]@144
  int v162; // [sp+2Ch] [bp-1A4h]@134
  int v163; // [sp+30h] [bp-1A0h]@134
  void *v164; // [sp+34h] [bp-19Ch]@137
  int v165; // [sp+40h] [bp-190h]@127
  int v166; // [sp+44h] [bp-18Ch]@127
  void *v167; // [sp+48h] [bp-188h]@130
  int v168; // [sp+54h] [bp-17Ch]@120
  int v169; // [sp+58h] [bp-178h]@120
  void *v170; // [sp+5Ch] [bp-174h]@123
  int v171; // [sp+68h] [bp-168h]@113
  int v172; // [sp+6Ch] [bp-164h]@113
  void *v173; // [sp+70h] [bp-160h]@116
  int v174; // [sp+7Ch] [bp-154h]@106
  int v175; // [sp+80h] [bp-150h]@106
  void *v176; // [sp+84h] [bp-14Ch]@109
  int v177; // [sp+90h] [bp-140h]@99
  int v178; // [sp+94h] [bp-13Ch]@99
  void *v179; // [sp+98h] [bp-138h]@102
  int v180; // [sp+A4h] [bp-12Ch]@92
  int v181; // [sp+A8h] [bp-128h]@92
  void *v182; // [sp+ACh] [bp-124h]@95
  int v183; // [sp+B8h] [bp-118h]@85
  int v184; // [sp+BCh] [bp-114h]@85
  void *v185; // [sp+C0h] [bp-110h]@88
  int v186; // [sp+CCh] [bp-104h]@78
  int v187; // [sp+D0h] [bp-100h]@78
  void *v188; // [sp+D4h] [bp-FCh]@81
  int v189; // [sp+E0h] [bp-F0h]@71
  int v190; // [sp+E4h] [bp-ECh]@71
  void *v191; // [sp+E8h] [bp-E8h]@74
  int v192; // [sp+F4h] [bp-DCh]@64
  int v193; // [sp+F8h] [bp-D8h]@64
  void *v194; // [sp+FCh] [bp-D4h]@67
  int v195; // [sp+108h] [bp-C8h]@57
  int v196; // [sp+10Ch] [bp-C4h]@57
  void *v197; // [sp+110h] [bp-C0h]@60
  int v198; // [sp+11Ch] [bp-B4h]@50
  int v199; // [sp+120h] [bp-B0h]@50
  void *v200; // [sp+124h] [bp-ACh]@53
  int v201; // [sp+130h] [bp-A0h]@43
  int v202; // [sp+134h] [bp-9Ch]@43
  void *v203; // [sp+138h] [bp-98h]@46
  int v204; // [sp+144h] [bp-8Ch]@36
  int v205; // [sp+148h] [bp-88h]@36
  void *v206; // [sp+14Ch] [bp-84h]@39
  int v207; // [sp+158h] [bp-78h]@29
  int v208; // [sp+15Ch] [bp-74h]@29
  void *v209; // [sp+160h] [bp-70h]@32
  int v210; // [sp+16Ch] [bp-64h]@22
  int v211; // [sp+170h] [bp-60h]@22
  void *v212; // [sp+174h] [bp-5Ch]@25
  int v213; // [sp+180h] [bp-50h]@15
  int v214; // [sp+184h] [bp-4Ch]@15
  void *v215; // [sp+188h] [bp-48h]@18
  int v216; // [sp+194h] [bp-3Ch]@8
  int v217; // [sp+198h] [bp-38h]@8
  void *v218; // [sp+19Ch] [bp-34h]@11
  int v219; // [sp+1A8h] [bp-28h]@1
  int v220; // [sp+1ACh] [bp-24h]@1
  void *ptr; // [sp+1B0h] [bp-20h]@4

  v1 = this;
  Remapping::getActionName((void **)&v219, 16);
  Keymapping::Keymapping(&v220, &v219, 1);
  v2 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v220);
  }
  else
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v2, &v220);
    *((_DWORD *)v1 + 5) += 16;
  if ( ptr )
    operator delete(ptr);
  v3 = (void *)(v220 - 12);
  if ( (int *)(v220 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v220 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    }
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  v4 = (void *)(v219 - 12);
  if ( (int *)(v219 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v219 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  Remapping::getActionName((void **)&v216, 3);
  Keymapping::Keymapping(&v217, &v216, 6);
  v5 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v217);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v5, &v217);
  if ( v218 )
    operator delete(v218);
  v6 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v217 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v216 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  Remapping::getActionName((void **)&v213, 0);
  Keymapping::Keymapping(&v214, &v213, -99);
  v8 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v214);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v8, &v214);
  if ( v215 )
    operator delete(v215);
  v9 = (void *)(v214 - 12);
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v214 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v213 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  Remapping::getActionName((void **)&v210, 2);
  Keymapping::Keymapping(&v211, &v210, -100);
  v11 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v211);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v11, &v211);
  if ( v212 )
    operator delete(v212);
  v12 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v211 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v210 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  Remapping::getActionName((void **)&v207, 24);
  Keymapping::Keymapping(&v208, &v207, 3);
  v14 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v208);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v14, &v208);
  if ( v209 )
    operator delete(v209);
  v15 = (void *)(v208 - 12);
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v208 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v207 - 12);
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v207 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  Remapping::getActionName((void **)&v204, 14);
  Keymapping::Keymapping(&v205, &v204, 4);
  v17 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v205);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v17, &v205);
  if ( v206 )
    operator delete(v206);
  v18 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v205 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v204 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  Remapping::getActionName((void **)&v201, 25);
  Keymapping::Keymapping(&v202, &v201, 11);
  v20 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v20 == HIDWORD(v20) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v202);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v20, &v202);
  if ( v203 )
    operator delete(v203);
  v21 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v202 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v201 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  Remapping::getActionName((void **)&v198, 26);
  Keymapping::Keymapping(&v199, &v198, 12);
  v23 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v23 == HIDWORD(v23) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v199);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v23, &v199);
  if ( v200 )
    operator delete(v200);
  v24 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v199 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v198 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  Remapping::getActionName((void **)&v195, 15);
  Keymapping::Keymapping(&v196, &v195, 15);
  v26 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v196);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v26, &v196);
  if ( v197 )
    operator delete(v197);
  v27 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v196 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v195 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  Remapping::getActionName((void **)&v192, 17);
  Keymapping::Keymapping(&v193, &v192, 2);
  v29 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v193);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v29, &v193);
  if ( v194 )
    operator delete(v194);
  v30 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v193 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v192 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  Remapping::getActionName((void **)&v189, 18);
  Keymapping::Keymapping(&v190, &v189, 9);
  v32 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v190);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v32, &v190);
  if ( v191 )
    operator delete(v191);
  v33 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v190 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v189 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  Remapping::getActionName((void **)&v186, 27);
  Keymapping::Keymapping(&v187, &v186, 14);
  v35 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v35 == HIDWORD(v35) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v187);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v35, &v187);
  if ( v188 )
    operator delete(v188);
  v36 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v187 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v186 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  Remapping::getActionName((void **)&v183, 28);
  Keymapping::Keymapping(&v184, &v183, 0);
  v38 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v38 == HIDWORD(v38) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v184);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v38, &v184);
  if ( v185 )
    operator delete(v185);
  v39 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v184 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v183 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  Remapping::getActionName((void **)&v180, 29);
  Keymapping::Keymapping(&v181, &v180, 10);
  v41 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v41 == HIDWORD(v41) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v181);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v41, &v181);
  if ( v182 )
    operator delete(v182);
  v42 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v181 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v180 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  Remapping::getActionName((void **)&v177, 30);
  Keymapping::Keymapping(&v178, &v177, 7);
  v44 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v44 == HIDWORD(v44) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v178);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v44, &v178);
  if ( v179 )
    operator delete(v179);
  v45 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v178 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  v46 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v177 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  Remapping::getActionName((void **)&v174, 23);
  Keymapping::Keymapping(&v175, &v174, 8);
  v47 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v47 == HIDWORD(v47) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v175);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v47, &v175);
  if ( v176 )
    operator delete(v176);
  v48 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v175 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v174 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  Remapping::getActionName((void **)&v171, 19);
  Keymapping::Keymapping(&v172, &v171, 0);
  v50 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v50 == HIDWORD(v50) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v172);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v50, &v172);
  if ( v173 )
    operator delete(v173);
  v51 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v172 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  v52 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v171 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  Remapping::getActionName((void **)&v168, 20);
  Keymapping::Keymapping(&v169, &v168, 0);
  v53 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v53 == HIDWORD(v53) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v169);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v53, &v169);
  if ( v170 )
    operator delete(v170);
  v54 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v169 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  v55 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v168 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  Remapping::getActionName((void **)&v165, 21);
  Keymapping::Keymapping(&v166, &v165, 0);
  v56 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v56 == HIDWORD(v56) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v166);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v56, &v166);
  if ( v167 )
    operator delete(v167);
  v57 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v166 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  v58 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v165 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v58);
  Remapping::getActionName((void **)&v162, 22);
  Keymapping::Keymapping(&v163, &v162, 0);
  v59 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v59 == HIDWORD(v59) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v163);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v59, &v163);
  if ( v164 )
    operator delete(v164);
  v60 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v163 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v162 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  Remapping::getActionName((void **)&v159, 1);
  Keymapping::Keymapping(&v160, &v159, 0);
  v62 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v62 == HIDWORD(v62) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v160);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v62, &v160);
  if ( v161 )
    operator delete(v161);
  v63 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v160 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
  v64 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v159 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  Remapping::getActionName((void **)&v156, 31);
  Keymapping::Keymapping(&v157, &v156, 13);
  v65 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v65 == HIDWORD(v65) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v157);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v65, &v157);
  if ( v158 )
    operator delete(v158);
  v66 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v157 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  v67 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v156 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
}


void __fastcall GamePadRemappingLayout::~GamePadRemappingLayout(GamePadRemappingLayout *this)
{
  RemappingLayout *v1; // r0@1

  v1 = RemappingLayout::~RemappingLayout(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall GamePadRemappingLayout::_populateGearVRBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout::_populateGearVRBindings(this);
}


void __fastcall GamePadRemappingLayout::setMappingWithRawInput(int a1, const void **a2)
{
  GamePadRemappingLayout::setMappingWithRawInput(a1, a2);
}


void __fastcall GamePadRemappingLayout::~GamePadRemappingLayout(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout::~GamePadRemappingLayout(this);
}


void __fastcall GamePadRemappingLayout::_populateStandardBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout::_populateStandardBindings(this);
}


int __fastcall GamePadRemappingLayout::GamePadRemappingLayout(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  _QWORD *v6; // r6@1
  int v7; // r0@3
  int v9; // [sp+0h] [bp-20h]@3
  char v10; // [sp+8h] [bp-18h]@2

  v3 = a3;
  v4 = a2;
  v5 = a1;
  RemappingLayout::RemappingLayout(a1);
  *(_DWORD *)v5 = &off_26D9120;
  *(_DWORD *)(v5 + 28) = v4;
  *(_DWORD *)(v5 + 32) = 0;
  v6 = (_QWORD *)(v5 + 32);
  *(_DWORD *)(v5 + 36) = 0;
  if ( v3 == 1 )
  {
    gsl::basic_string_span<char const,-1>::remove_z<21u>((int)&v10, (int)"textures/ui/generic_");
    *v6 = *(_QWORD *)&v10;
    GamePadRemappingLayout::_populateMotionControllerBindings((GamePadRemappingLayout *)v5);
  }
  else
    gsl::basic_string_span<char const,-1>::remove_z<21u>((int)&v9, (int)"textures/ui/generic_");
    *v6 = *(_QWORD *)&v9;
    v7 = *(_DWORD *)(v5 + 28);
    if ( v7 == 2 )
    {
      GamePadRemappingLayout::_populateGearVRBindings((GamePadRemappingLayout *)v5);
    }
    else if ( v7 == 1 )
      GamePadRemappingLayout::_populateSingleTriggerGearVRBindings((GamePadRemappingLayout *)v5);
    else
      GamePadRemappingLayout::_populateStandardBindings((GamePadRemappingLayout *)v5);
  RemappingLayout::resetToDefaultMapping((RemappingLayout *)v5);
  return v5;
}


void __fastcall GamePadRemappingLayout::_populateMotionControllerBindings(GamePadRemappingLayout *this)
{
  GamePadRemappingLayout *v1; // r4@1
  __int64 v2; // kr00_8@1
  void *v3; // r0@6
  void *v4; // r0@7
  __int64 v5; // kr08_8@8
  void *v6; // r0@13
  void *v7; // r0@14
  __int64 v8; // kr10_8@15
  void *v9; // r0@20
  void *v10; // r0@21
  __int64 v11; // kr18_8@22
  void *v12; // r0@27
  void *v13; // r0@28
  __int64 v14; // kr20_8@29
  void *v15; // r0@34
  void *v16; // r0@35
  __int64 v17; // kr28_8@36
  void *v18; // r0@41
  void *v19; // r0@42
  __int64 v20; // kr30_8@43
  void *v21; // r0@48
  void *v22; // r0@49
  __int64 v23; // kr38_8@50
  void *v24; // r0@55
  void *v25; // r0@56
  __int64 v26; // kr40_8@57
  void *v27; // r0@62
  void *v28; // r0@63
  __int64 v29; // kr48_8@64
  void *v30; // r0@69
  void *v31; // r0@70
  __int64 v32; // kr50_8@71
  void *v33; // r0@76
  void *v34; // r0@77
  __int64 v35; // kr58_8@78
  void *v36; // r0@83
  void *v37; // r0@84
  __int64 v38; // kr60_8@85
  void *v39; // r0@90
  void *v40; // r0@91
  unsigned int *v41; // r2@93
  signed int v42; // r1@95
  unsigned int *v43; // r2@97
  signed int v44; // r1@99
  unsigned int *v45; // r2@101
  signed int v46; // r1@103
  unsigned int *v47; // r2@105
  signed int v48; // r1@107
  unsigned int *v49; // r2@109
  signed int v50; // r1@111
  unsigned int *v51; // r2@113
  signed int v52; // r1@115
  unsigned int *v53; // r2@117
  signed int v54; // r1@119
  unsigned int *v55; // r2@121
  signed int v56; // r1@123
  unsigned int *v57; // r2@125
  signed int v58; // r1@127
  unsigned int *v59; // r2@129
  signed int v60; // r1@131
  unsigned int *v61; // r2@133
  signed int v62; // r1@135
  unsigned int *v63; // r2@137
  signed int v64; // r1@139
  unsigned int *v65; // r2@141
  signed int v66; // r1@143
  unsigned int *v67; // r2@145
  signed int v68; // r1@147
  unsigned int *v69; // r2@149
  signed int v70; // r1@151
  unsigned int *v71; // r2@153
  signed int v72; // r1@155
  unsigned int *v73; // r2@157
  signed int v74; // r1@159
  unsigned int *v75; // r2@161
  signed int v76; // r1@163
  unsigned int *v77; // r2@165
  signed int v78; // r1@167
  unsigned int *v79; // r2@169
  signed int v80; // r1@171
  unsigned int *v81; // r2@173
  signed int v82; // r1@175
  unsigned int *v83; // r2@177
  signed int v84; // r1@179
  unsigned int *v85; // r2@181
  signed int v86; // r1@183
  unsigned int *v87; // r2@185
  signed int v88; // r1@187
  unsigned int *v89; // r2@189
  signed int v90; // r1@191
  unsigned int *v91; // r2@193
  signed int v92; // r1@195
  int v93; // [sp+0h] [bp-118h]@85
  int v94; // [sp+4h] [bp-114h]@85
  void *v95; // [sp+8h] [bp-110h]@88
  int v96; // [sp+14h] [bp-104h]@78
  int v97; // [sp+18h] [bp-100h]@78
  void *v98; // [sp+1Ch] [bp-FCh]@81
  int v99; // [sp+28h] [bp-F0h]@71
  int v100; // [sp+2Ch] [bp-ECh]@71
  void *v101; // [sp+30h] [bp-E8h]@74
  int v102; // [sp+3Ch] [bp-DCh]@64
  int v103; // [sp+40h] [bp-D8h]@64
  void *v104; // [sp+44h] [bp-D4h]@67
  int v105; // [sp+50h] [bp-C8h]@57
  int v106; // [sp+54h] [bp-C4h]@57
  void *v107; // [sp+58h] [bp-C0h]@60
  int v108; // [sp+64h] [bp-B4h]@50
  int v109; // [sp+68h] [bp-B0h]@50
  void *v110; // [sp+6Ch] [bp-ACh]@53
  int v111; // [sp+78h] [bp-A0h]@43
  int v112; // [sp+7Ch] [bp-9Ch]@43
  void *v113; // [sp+80h] [bp-98h]@46
  int v114; // [sp+8Ch] [bp-8Ch]@36
  int v115; // [sp+90h] [bp-88h]@36
  void *v116; // [sp+94h] [bp-84h]@39
  int v117; // [sp+A0h] [bp-78h]@29
  int v118; // [sp+A4h] [bp-74h]@29
  void *v119; // [sp+A8h] [bp-70h]@32
  int v120; // [sp+B4h] [bp-64h]@22
  int v121; // [sp+B8h] [bp-60h]@22
  void *v122; // [sp+BCh] [bp-5Ch]@25
  int v123; // [sp+C8h] [bp-50h]@15
  int v124; // [sp+CCh] [bp-4Ch]@15
  void *v125; // [sp+D0h] [bp-48h]@18
  int v126; // [sp+DCh] [bp-3Ch]@8
  int v127; // [sp+E0h] [bp-38h]@8
  void *v128; // [sp+E4h] [bp-34h]@11
  int v129; // [sp+F0h] [bp-28h]@1
  int v130; // [sp+F4h] [bp-24h]@1
  void *ptr; // [sp+F8h] [bp-20h]@4

  v1 = this;
  Remapping::getActionName((void **)&v129, 16);
  Keymapping::Keymapping(&v130, &v129, 1);
  v2 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v130);
  }
  else
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v2, &v130);
    *((_DWORD *)v1 + 5) += 16;
  if ( ptr )
    operator delete(ptr);
  v3 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v130 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    }
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  v4 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v129 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  Remapping::getActionName((void **)&v126, 0);
  Keymapping::Keymapping(&v127, &v126, -99);
  v5 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v127);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v5, &v127);
  if ( v128 )
    operator delete(v128);
  v6 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v127 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v126 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  Remapping::getActionName((void **)&v123, 2);
  Keymapping::Keymapping(&v124, &v123, 12);
  v8 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v124);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v8, &v124);
  if ( v125 )
    operator delete(v125);
  v9 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v124 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v123 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  Remapping::getActionName((void **)&v120, 14);
  Keymapping::Keymapping(&v121, &v120, 2);
  v11 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v121);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v11, &v121);
  if ( v122 )
    operator delete(v122);
  v12 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v121 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v120 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  Remapping::getActionName((void **)&v117, 25);
  Keymapping::Keymapping(&v118, &v117, 11);
  v14 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v118);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v14, &v118);
  if ( v119 )
    operator delete(v119);
  v15 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v118 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v117 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  Remapping::getActionName((void **)&v114, 26);
  Keymapping::Keymapping(&v115, &v114, -100);
  v17 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v115);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v17, &v115);
  if ( v116 )
    operator delete(v116);
  v18 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v115 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v114 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  Remapping::getActionName((void **)&v111, 15);
  Keymapping::Keymapping(&v112, &v111, 4);
  v20 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v20 == HIDWORD(v20) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v112);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v20, &v112);
  if ( v113 )
    operator delete(v113);
  v21 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v112 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v111 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  Remapping::getActionName((void **)&v108, 17);
  Keymapping::Keymapping(&v109, &v108, 3);
  v23 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v23 == HIDWORD(v23) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v109);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v23, &v109);
  if ( v110 )
    operator delete(v110);
  v24 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v109 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v108 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  Remapping::getActionName((void **)&v105, 18);
  Keymapping::Keymapping(&v106, &v105, 9);
  v26 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v106);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v26, &v106);
  if ( v107 )
    operator delete(v107);
  v27 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v106 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v105 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  Remapping::getActionName((void **)&v102, 27);
  Keymapping::Keymapping(&v103, &v102, 14);
  v29 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v103);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v29, &v103);
  if ( v104 )
    operator delete(v104);
  v30 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v103 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v102 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  Remapping::getActionName((void **)&v99, 31);
  Keymapping::Keymapping(&v100, &v99, 13);
  v32 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v100);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v32, &v100);
  if ( v101 )
    operator delete(v101);
  v33 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v100 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v99 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  Remapping::getActionName((void **)&v96, 3);
  Keymapping::Keymapping(&v97, &v96, 10);
  v35 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v35 == HIDWORD(v35) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v97);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v35, &v97);
  if ( v98 )
    operator delete(v98);
  v36 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v97 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v96 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  Remapping::getActionName((void **)&v93, 1);
  Keymapping::Keymapping(&v94, &v93, 0);
  v38 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v38 == HIDWORD(v38) )
    std::vector<Keymapping,std::allocator<Keymapping>>::_M_emplace_back_aux<Keymapping>((__int64 *)v1 + 2, &v94);
    __gnu_cxx::new_allocator<Keymapping>::construct<Keymapping,Keymapping>((int)v1 + 16, (int *)v38, &v94);
  if ( v95 )
    operator delete(v95);
  v39 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v94 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v93 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
}


int __fastcall GamePadRemappingLayout::_rawKeyToKey(int a1, int a2, int a3)
{
  if ( a3 == 5 )
  {
    ++a2;
  }
  else if ( a3 == 6 )
    return a2 - 100;
  return a2;
}


signed int __fastcall GamePadRemappingLayout::isTrigger(int a1, const void **a2)
{
  Keymapping *v2; // r4@1
  Keymapping *v3; // r6@1
  const void **v4; // r5@1
  _DWORD *v5; // r0@2
  size_t v6; // r2@2
  signed int *v7; // r1@6
  __int64 v8; // kr08_8@6
  signed int v9; // t1@7
  signed int result; // r0@9

  v3 = (Keymapping *)(*(_QWORD *)(a1 + 4) >> 32);
  v2 = (Keymapping *)*(_QWORD *)(a1 + 4);
  v4 = a2;
  if ( v2 == v3 )
    goto LABEL_9;
  while ( 1 )
  {
    v5 = *(_DWORD **)Keymapping::getAction(v2);
    v6 = *(v5 - 3);
    if ( v6 == *((_DWORD *)*v4 - 3) && !memcmp(v5, *v4, v6) )
      break;
    v2 = (Keymapping *)((char *)v2 + 16);
    if ( v3 == v2 )
      goto LABEL_9;
  }
  v8 = *(_QWORD *)Keymapping::getKeys(v2);
  v7 = (signed int *)v8;
  if ( (_DWORD)v8 == HIDWORD(v8) )
LABEL_9:
    result = 0;
  else
    while ( 1 )
    {
      v9 = *v7;
      ++v7;
      if ( v9 <= -1 )
        break;
      if ( (signed int *)HIDWORD(v8) == v7 )
        goto LABEL_9;
    }
    result = 1;
  return result;
}


int __fastcall GamePadRemappingLayout::_init(GamePadRemappingLayout *this, int a2)
{
  GamePadRemappingLayout *v2; // r4@1
  int v3; // r0@3

  v2 = this;
  if ( a2 == 1 )
  {
    GamePadRemappingLayout::_populateMotionControllerBindings(this);
  }
  else
    v3 = *((_DWORD *)this + 7);
    if ( v3 == 2 )
    {
      GamePadRemappingLayout::_populateGearVRBindings(v2);
    }
    else if ( v3 == 1 )
      GamePadRemappingLayout::_populateSingleTriggerGearVRBindings(v2);
    else
      GamePadRemappingLayout::_populateStandardBindings(v2);
  return j_j_j__ZN15RemappingLayout21resetToDefaultMappingEv(v2);
}


void __fastcall GamePadRemappingLayout::getMappedKeyName(GamePadRemappingLayout *this, int a2, signed int a3)
{
  signed int v3; // r5@1
  int *v4; // r4@1
  __int64 v5; // kr00_8@3
  unsigned int v6; // r1@3
  const void **v7; // r0@5
  void *v8; // r0@6
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  __int64 v11; // kr08_8@11
  unsigned int v12; // r1@11
  const void **v13; // r0@13
  void *v14; // r0@15
  void *v15; // r0@16
  void *v16; // r0@23
  void *v17; // r0@24
  unsigned int *v18; // r2@34
  signed int v19; // r1@36
  unsigned int *v20; // r2@38
  signed int v21; // r1@40
  unsigned int *v22; // r2@42
  signed int v23; // r1@44
  unsigned int *v24; // r2@46
  signed int v25; // r1@48
  int v26; // [sp+4h] [bp-3Ch]@3
  int v27; // [sp+Ch] [bp-34h]@3
  unsigned int v28; // [sp+10h] [bp-30h]@3
  int v29; // [sp+14h] [bp-2Ch]@11
  int v30; // [sp+1Ch] [bp-24h]@11
  unsigned int v31; // [sp+20h] [bp-20h]@11
  int v32; // [sp+28h] [bp-18h]@6

  v3 = a3;
  v4 = (int *)this;
  if ( !a3 )
  {
    sub_119C884((void **)&v32, "controllerLayoutScreen.unassigned");
    I18n::get(v4, (int **)&v32);
    v8 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) == &dword_28898C0 )
      return;
    v9 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( a3 <= -1 )
    sub_119C884((void **)&v30, "controllerLayoutScreen.trigger");
    I18n::get((int *)&v31, (int **)&v30);
    Util::toString<int,(void *)0,(void *)0>((void **)&v29, v3 + 101);
    v11 = *(_QWORD *)(v31 - 12);
    v12 = *(_DWORD *)(v29 - 12) + v11;
    if ( v12 > HIDWORD(v11) && v12 <= *(_DWORD *)(v29 - 8) )
      v13 = sub_119C984((const void **)&v29, 0, v31, (_BYTE *)v11);
    else
      v13 = sub_119C8A4((const void **)&v31, (const void **)&v29);
    *v4 = (int)*v13;
    *v13 = &unk_28898CC;
    v16 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
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
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v31 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v8 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v30 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        goto LABEL_31;
      goto LABEL_30;
  else
    sub_119C884((void **)&v27, "controllerLayoutScreen.button");
    I18n::get((int *)&v28, (int **)&v27);
    Util::toString<int,(void *)0,(void *)0>((void **)&v26, v3);
    v5 = *(_QWORD *)(v28 - 12);
    v6 = *(_DWORD *)(v26 - 12) + v5;
    if ( v6 > HIDWORD(v5) && v6 <= *(_DWORD *)(v26 - 8) )
      v7 = sub_119C984((const void **)&v26, 0, v28, (_BYTE *)v5);
      v7 = sub_119C8A4((const void **)&v28, (const void **)&v26);
    *v4 = (int)*v7;
    *v7 = &unk_28898CC;
    v14 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v26 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v28 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v8 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v27 - 4);
LABEL_30:
      v10 = (*v9)--;
LABEL_31:
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
}


void __fastcall GamePadRemappingLayout::getSaveString(const void **a1, int a2, const void **a3)
{
  GamePadRemappingLayout::getSaveString(a1, a2, a3);
}


void __fastcall GamePadRemappingLayout::setMappingWithRawInput(int a1, const void **a2)
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


void __fastcall GamePadRemappingLayout::getMappedKeyName(GamePadRemappingLayout *this, int a2, signed int a3)
{
  GamePadRemappingLayout::getMappedKeyName(this, a2, a3);
}
