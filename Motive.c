

char *__fastcall Motive::getAllMotivesAsList(Motive *this)
{
  Motive *v1; // r9@1
  char *v2; // r10@1
  __int64 v3; // kr00_8@1
  char *v4; // r5@1
  char *v5; // r7@3
  int v6; // r0@5
  char *v7; // r7@6
  unsigned int v8; // r1@7
  unsigned int v9; // r0@9
  unsigned int v10; // r6@9
  char *v11; // r8@15
  char *v12; // r7@23
  unsigned int v13; // r1@24
  unsigned int v14; // r0@26
  unsigned int v15; // r6@26
  char *v16; // r8@32
  char *v17; // r7@40
  int v18; // r0@40
  unsigned int v19; // r1@41
  unsigned int v20; // r0@43
  unsigned int v21; // r6@43
  char *v22; // r8@49
  char *v23; // r7@57
  int v24; // r0@57
  unsigned int v25; // r1@58
  unsigned int v26; // r0@60
  unsigned int v27; // r6@60
  char *v28; // r8@66
  char *v29; // r7@74
  int v30; // r0@74
  unsigned int v31; // r1@75
  unsigned int v32; // r0@77
  unsigned int v33; // r6@77
  char *v34; // r8@83
  char *v35; // r7@91
  int v36; // r0@91
  unsigned int v37; // r1@92
  unsigned int v38; // r0@94
  unsigned int v39; // r6@94
  char *v40; // r8@100
  char *v41; // r7@108
  int v42; // r0@108
  unsigned int v43; // r1@109
  unsigned int v44; // r0@111
  unsigned int v45; // r6@111
  char *v46; // r8@117
  char *v47; // r7@125
  int v48; // r0@125
  unsigned int v49; // r1@126
  unsigned int v50; // r0@128
  unsigned int v51; // r6@128
  char *v52; // r8@134
  char *v53; // r7@142
  int v54; // r0@142
  unsigned int v55; // r1@143
  unsigned int v56; // r0@145
  unsigned int v57; // r6@145
  char *v58; // r8@151
  char *v59; // r7@159
  int v60; // r0@159
  unsigned int v61; // r1@160
  unsigned int v62; // r0@162
  unsigned int v63; // r6@162
  char *v64; // r8@168
  char *v65; // r7@176
  int v66; // r0@176
  unsigned int v67; // r1@177
  unsigned int v68; // r0@179
  unsigned int v69; // r6@179
  char *v70; // r8@185
  char *v71; // r7@193
  int v72; // r0@193
  unsigned int v73; // r1@194
  unsigned int v74; // r0@196
  unsigned int v75; // r6@196
  char *v76; // r8@202
  char *v77; // r7@210
  int v78; // r0@210
  unsigned int v79; // r1@211
  unsigned int v80; // r0@213
  unsigned int v81; // r6@213
  char *v82; // r8@219
  char *v83; // r7@227
  int v84; // r0@227
  unsigned int v85; // r1@228
  unsigned int v86; // r0@230
  unsigned int v87; // r6@230
  char *v88; // r8@236
  char *v89; // r7@244
  int v90; // r0@244
  unsigned int v91; // r1@245
  unsigned int v92; // r0@247
  unsigned int v93; // r6@247
  char *v94; // r8@253
  char *v95; // r7@261
  int v96; // r0@261
  unsigned int v97; // r1@262
  unsigned int v98; // r0@264
  unsigned int v99; // r6@264
  char *v100; // r8@270
  char *v101; // r7@278
  int v102; // r0@278
  unsigned int v103; // r1@279
  unsigned int v104; // r0@281
  unsigned int v105; // r6@281
  char *v106; // r8@287
  char *v107; // r7@295
  int v108; // r0@295
  unsigned int v109; // r1@296
  unsigned int v110; // r0@298
  unsigned int v111; // r6@298
  char *v112; // r8@304
  char *v113; // r7@312
  int v114; // r0@312
  unsigned int v115; // r1@313
  unsigned int v116; // r0@315
  unsigned int v117; // r6@315
  char *v118; // r8@321
  char *v119; // r7@329
  int v120; // r0@329
  unsigned int v121; // r1@330
  unsigned int v122; // r0@332
  unsigned int v123; // r6@332
  char *v124; // r8@338
  char *v125; // r7@346
  int v126; // r0@346
  unsigned int v127; // r1@347
  unsigned int v128; // r0@349
  unsigned int v129; // r6@349
  char *v130; // r8@355
  char *v131; // r7@363
  int v132; // r0@363
  unsigned int v133; // r1@364
  unsigned int v134; // r0@366
  unsigned int v135; // r6@366
  char *v136; // r8@372
  char *v137; // r7@380
  int v138; // r0@380
  unsigned int v139; // r1@381
  unsigned int v140; // r0@383
  unsigned int v141; // r6@383
  char *v142; // r8@389
  char *v143; // r7@397
  int v144; // r0@397
  unsigned int v145; // r1@398
  unsigned int v146; // r0@400
  unsigned int v147; // r6@400
  char *v148; // r8@406
  char *v149; // r7@414
  int v150; // r0@414
  unsigned int v151; // r1@415
  unsigned int v152; // r0@417
  unsigned int v153; // r6@417
  char *v154; // r8@423
  char *v155; // r7@431
  int v156; // r0@431
  unsigned int v157; // r1@432
  unsigned int v158; // r0@434
  unsigned int v159; // r6@434
  char *v160; // r8@440
  char *v161; // r7@448
  int v162; // r0@448
  unsigned int v163; // r1@449
  unsigned int v164; // r0@451
  unsigned int v165; // r6@451
  char *v166; // r8@457
  char *v167; // r7@465
  int v168; // r0@465
  unsigned int v169; // r1@466
  unsigned int v170; // r0@468
  unsigned int v171; // r6@468
  char *v172; // r8@474
  char *result; // r0@482
  unsigned int v174; // r1@483
  unsigned int v175; // r0@485
  unsigned int v176; // r4@485
  char *v177; // r6@491

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v2 = (char *)operator new(4u);
  v3 = *(_QWORD *)v1;
  v4 = &v2[HIDWORD(v3) - v3];
  *(_DWORD *)v4 = &Motive::mKebab;
  if ( 0 != (HIDWORD(v3) - (signed int)v3) >> 2 )
    _aeabi_memmove4(v2, v3);
  v5 = v4 + 4;
  if ( (_DWORD)v3 )
    operator delete((void *)v3);
  v6 = (int)(v2 + 4);
  *(_DWORD *)v1 = v2;
  *((_DWORD *)v1 + 1) = v5;
  *((_DWORD *)v1 + 2) = v2 + 4;
  if ( (HIDWORD(v3) - (signed int)v3) >> 2 )
  {
    *(_DWORD *)v5 = &Motive::mAztec;
    v7 = v4 + 8;
    *((_DWORD *)v1 + 1) = v4 + 8;
  }
  else
    v8 = (v5 - v2) >> 2;
    if ( !v8 )
      v8 = 1;
    v9 = v8 + ((v5 - v2) >> 2);
    v10 = v8 + ((v5 - v2) >> 2);
    if ( 0 != v9 >> 30 )
      v10 = 0x3FFFFFFF;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x40000000 )
        sub_21E57F4();
      v2 = (char *)operator new(4 * v10);
      v5 = (char *)(*(_QWORD *)v1 >> 32);
      v11 = (char *)*(_QWORD *)v1;
    }
    else
      v11 = v2;
      v2 = 0;
    *(_DWORD *)&v2[v5 - v11] = &Motive::mAztec;
    if ( 0 != (v5 - v11) >> 2 )
      _aeabi_memmove4(v2, v11);
    v7 = &v2[v5 - v11 + 4];
    if ( v11 )
      operator delete(v11);
    v6 = (int)&v2[4 * v10];
    *(_DWORD *)v1 = v2;
    *((_DWORD *)v1 + 1) = v7;
    *((_DWORD *)v1 + 2) = v6;
  if ( v7 == (char *)v6 )
    v13 = (v7 - v2) >> 2;
    if ( !v13 )
      v13 = 1;
    v14 = v13 + ((v7 - v2) >> 2);
    v15 = v13 + ((v7 - v2) >> 2);
    if ( 0 != v14 >> 30 )
      v15 = 0x3FFFFFFF;
    if ( v14 < v13 )
    if ( v15 )
      if ( v15 >= 0x40000000 )
      v2 = (char *)operator new(4 * v15);
      v7 = (char *)(*(_QWORD *)v1 >> 32);
      v16 = (char *)*(_QWORD *)v1;
      v16 = v2;
    *(_DWORD *)&v2[v7 - v16] = &Motive::mAztec2;
    if ( 0 != (v7 - v16) >> 2 )
      _aeabi_memmove4(v2, v16);
    v12 = &v2[v7 - v16 + 4];
    if ( v16 )
      operator delete(v16);
    v6 = (int)&v2[4 * v15];
    *((_DWORD *)v1 + 1) = v12;
    *(_DWORD *)v7 = &Motive::mAztec2;
    v12 = v7 + 4;
  if ( v12 == (char *)v6 )
    v19 = (v12 - v2) >> 2;
    if ( !v19 )
      v19 = 1;
    v20 = v19 + ((v12 - v2) >> 2);
    v21 = v19 + ((v12 - v2) >> 2);
    if ( 0 != v20 >> 30 )
      v21 = 0x3FFFFFFF;
    if ( v20 < v19 )
    if ( v21 )
      if ( v21 >= 0x40000000 )
      v2 = (char *)operator new(4 * v21);
      v12 = (char *)(*(_QWORD *)v1 >> 32);
      v22 = (char *)*(_QWORD *)v1;
      v22 = v2;
    *(_DWORD *)&v2[v12 - v22] = &Motive::mAlban;
    if ( 0 != (v12 - v22) >> 2 )
      _aeabi_memmove4(v2, v22);
    v17 = &v2[v12 - v22 + 4];
    if ( v22 )
      operator delete(v22);
    v18 = (int)&v2[4 * v21];
    *((_DWORD *)v1 + 1) = v17;
    *((_DWORD *)v1 + 2) = v18;
    *(_DWORD *)v12 = &Motive::mAlban;
    v17 = v12 + 4;
    v18 = *((_DWORD *)v1 + 2);
  if ( v17 == (char *)v18 )
    v25 = (v17 - v2) >> 2;
    if ( !v25 )
      v25 = 1;
    v26 = v25 + ((v17 - v2) >> 2);
    v27 = v25 + ((v17 - v2) >> 2);
    if ( 0 != v26 >> 30 )
      v27 = 0x3FFFFFFF;
    if ( v26 < v25 )
    if ( v27 )
      if ( v27 >= 0x40000000 )
      v2 = (char *)operator new(4 * v27);
      v17 = (char *)(*(_QWORD *)v1 >> 32);
      v28 = (char *)*(_QWORD *)v1;
      v28 = v2;
    *(_DWORD *)&v2[v17 - v28] = &Motive::mBomb;
    if ( 0 != (v17 - v28) >> 2 )
      _aeabi_memmove4(v2, v28);
    v23 = &v2[v17 - v28 + 4];
    if ( v28 )
      operator delete(v28);
    v24 = (int)&v2[4 * v27];
    *((_DWORD *)v1 + 1) = v23;
    *((_DWORD *)v1 + 2) = v24;
    *(_DWORD *)v17 = &Motive::mBomb;
    v23 = v17 + 4;
    v24 = *((_DWORD *)v1 + 2);
  if ( v23 == (char *)v24 )
    v31 = (v23 - v2) >> 2;
    if ( !v31 )
      v31 = 1;
    v32 = v31 + ((v23 - v2) >> 2);
    v33 = v31 + ((v23 - v2) >> 2);
    if ( 0 != v32 >> 30 )
      v33 = 0x3FFFFFFF;
    if ( v32 < v31 )
    if ( v33 )
      if ( v33 >= 0x40000000 )
      v2 = (char *)operator new(4 * v33);
      v23 = (char *)(*(_QWORD *)v1 >> 32);
      v34 = (char *)*(_QWORD *)v1;
      v34 = v2;
    *(_DWORD *)&v2[v23 - v34] = &Motive::mPlant;
    if ( 0 != (v23 - v34) >> 2 )
      _aeabi_memmove4(v2, v34);
    v29 = &v2[v23 - v34 + 4];
    if ( v34 )
      operator delete(v34);
    v30 = (int)&v2[4 * v33];
    *((_DWORD *)v1 + 1) = v29;
    *((_DWORD *)v1 + 2) = v30;
    *(_DWORD *)v23 = &Motive::mPlant;
    v29 = v23 + 4;
    v30 = *((_DWORD *)v1 + 2);
  if ( v29 == (char *)v30 )
    v37 = (v29 - v2) >> 2;
    if ( !v37 )
      v37 = 1;
    v38 = v37 + ((v29 - v2) >> 2);
    v39 = v37 + ((v29 - v2) >> 2);
    if ( 0 != v38 >> 30 )
      v39 = 0x3FFFFFFF;
    if ( v38 < v37 )
    if ( v39 )
      if ( v39 >= 0x40000000 )
      v2 = (char *)operator new(4 * v39);
      v29 = (char *)(*(_QWORD *)v1 >> 32);
      v40 = (char *)*(_QWORD *)v1;
      v40 = v2;
    *(_DWORD *)&v2[v29 - v40] = &Motive::mWasteland;
    if ( 0 != (v29 - v40) >> 2 )
      _aeabi_memmove4(v2, v40);
    v35 = &v2[v29 - v40 + 4];
    if ( v40 )
      operator delete(v40);
    v36 = (int)&v2[4 * v39];
    *((_DWORD *)v1 + 1) = v35;
    *((_DWORD *)v1 + 2) = v36;
    *(_DWORD *)v29 = &Motive::mWasteland;
    v35 = v29 + 4;
    v36 = *((_DWORD *)v1 + 2);
  if ( v35 == (char *)v36 )
    v43 = (v35 - v2) >> 2;
    if ( !v43 )
      v43 = 1;
    v44 = v43 + ((v35 - v2) >> 2);
    v45 = v43 + ((v35 - v2) >> 2);
    if ( 0 != v44 >> 30 )
      v45 = 0x3FFFFFFF;
    if ( v44 < v43 )
    if ( v45 )
      if ( v45 >= 0x40000000 )
      v2 = (char *)operator new(4 * v45);
      v35 = (char *)(*(_QWORD *)v1 >> 32);
      v46 = (char *)*(_QWORD *)v1;
      v46 = v2;
    *(_DWORD *)&v2[v35 - v46] = &Motive::mPool;
    if ( 0 != (v35 - v46) >> 2 )
      _aeabi_memmove4(v2, v46);
    v41 = &v2[v35 - v46 + 4];
    if ( v46 )
      operator delete(v46);
    v42 = (int)&v2[4 * v45];
    *((_DWORD *)v1 + 1) = v41;
    *((_DWORD *)v1 + 2) = v42;
    *(_DWORD *)v35 = &Motive::mPool;
    v41 = v35 + 4;
    v42 = *((_DWORD *)v1 + 2);
  if ( v41 == (char *)v42 )
    v49 = (v41 - v2) >> 2;
    if ( !v49 )
      v49 = 1;
    v50 = v49 + ((v41 - v2) >> 2);
    v51 = v49 + ((v41 - v2) >> 2);
    if ( 0 != v50 >> 30 )
      v51 = 0x3FFFFFFF;
    if ( v50 < v49 )
    if ( v51 )
      if ( v51 >= 0x40000000 )
      v2 = (char *)operator new(4 * v51);
      v41 = (char *)(*(_QWORD *)v1 >> 32);
      v52 = (char *)*(_QWORD *)v1;
      v52 = v2;
    *(_DWORD *)&v2[v41 - v52] = &Motive::mCourbet;
    if ( 0 != (v41 - v52) >> 2 )
      _aeabi_memmove4(v2, v52);
    v47 = &v2[v41 - v52 + 4];
    if ( v52 )
      operator delete(v52);
    v48 = (int)&v2[4 * v51];
    *((_DWORD *)v1 + 1) = v47;
    *((_DWORD *)v1 + 2) = v48;
    *(_DWORD *)v41 = &Motive::mCourbet;
    v47 = v41 + 4;
    v48 = *((_DWORD *)v1 + 2);
  if ( v47 == (char *)v48 )
    v55 = (v47 - v2) >> 2;
    if ( !v55 )
      v55 = 1;
    v56 = v55 + ((v47 - v2) >> 2);
    v57 = v55 + ((v47 - v2) >> 2);
    if ( 0 != v56 >> 30 )
      v57 = 0x3FFFFFFF;
    if ( v56 < v55 )
    if ( v57 )
      if ( v57 >= 0x40000000 )
      v2 = (char *)operator new(4 * v57);
      v47 = (char *)(*(_QWORD *)v1 >> 32);
      v58 = (char *)*(_QWORD *)v1;
      v58 = v2;
    *(_DWORD *)&v2[v47 - v58] = &Motive::mSea;
    if ( 0 != (v47 - v58) >> 2 )
      _aeabi_memmove4(v2, v58);
    v53 = &v2[v47 - v58 + 4];
    if ( v58 )
      operator delete(v58);
    v54 = (int)&v2[4 * v57];
    *((_DWORD *)v1 + 1) = v53;
    *((_DWORD *)v1 + 2) = v54;
    *(_DWORD *)v47 = &Motive::mSea;
    v53 = v47 + 4;
    v54 = *((_DWORD *)v1 + 2);
  if ( v53 == (char *)v54 )
    v61 = (v53 - v2) >> 2;
    if ( !v61 )
      v61 = 1;
    v62 = v61 + ((v53 - v2) >> 2);
    v63 = v61 + ((v53 - v2) >> 2);
    if ( 0 != v62 >> 30 )
      v63 = 0x3FFFFFFF;
    if ( v62 < v61 )
    if ( v63 )
      if ( v63 >= 0x40000000 )
      v2 = (char *)operator new(4 * v63);
      v53 = (char *)(*(_QWORD *)v1 >> 32);
      v64 = (char *)*(_QWORD *)v1;
      v64 = v2;
    *(_DWORD *)&v2[v53 - v64] = &Motive::mSunset;
    if ( 0 != (v53 - v64) >> 2 )
      _aeabi_memmove4(v2, v64);
    v59 = &v2[v53 - v64 + 4];
    if ( v64 )
      operator delete(v64);
    v60 = (int)&v2[4 * v63];
    *((_DWORD *)v1 + 1) = v59;
    *((_DWORD *)v1 + 2) = v60;
    *(_DWORD *)v53 = &Motive::mSunset;
    v59 = v53 + 4;
    v60 = *((_DWORD *)v1 + 2);
  if ( v59 == (char *)v60 )
    v67 = (v59 - v2) >> 2;
    if ( !v67 )
      v67 = 1;
    v68 = v67 + ((v59 - v2) >> 2);
    v69 = v67 + ((v59 - v2) >> 2);
    if ( 0 != v68 >> 30 )
      v69 = 0x3FFFFFFF;
    if ( v68 < v67 )
    if ( v69 )
      if ( v69 >= 0x40000000 )
      v2 = (char *)operator new(4 * v69);
      v59 = (char *)(*(_QWORD *)v1 >> 32);
      v70 = (char *)*(_QWORD *)v1;
      v70 = v2;
    *(_DWORD *)&v2[v59 - v70] = &Motive::mCreebet;
    if ( 0 != (v59 - v70) >> 2 )
      _aeabi_memmove4(v2, v70);
    v65 = &v2[v59 - v70 + 4];
    if ( v70 )
      operator delete(v70);
    v66 = (int)&v2[4 * v69];
    *((_DWORD *)v1 + 1) = v65;
    *((_DWORD *)v1 + 2) = v66;
    *(_DWORD *)v59 = &Motive::mCreebet;
    v65 = v59 + 4;
    v66 = *((_DWORD *)v1 + 2);
  if ( v65 == (char *)v66 )
    v73 = (v65 - v2) >> 2;
    if ( !v73 )
      v73 = 1;
    v74 = v73 + ((v65 - v2) >> 2);
    v75 = v73 + ((v65 - v2) >> 2);
    if ( 0 != v74 >> 30 )
      v75 = 0x3FFFFFFF;
    if ( v74 < v73 )
    if ( v75 )
      if ( v75 >= 0x40000000 )
      v2 = (char *)operator new(4 * v75);
      v65 = (char *)(*(_QWORD *)v1 >> 32);
      v76 = (char *)*(_QWORD *)v1;
      v76 = v2;
    *(_DWORD *)&v2[v65 - v76] = &Motive::mWanderer;
    if ( 0 != (v65 - v76) >> 2 )
      _aeabi_memmove4(v2, v76);
    v71 = &v2[v65 - v76 + 4];
    if ( v76 )
      operator delete(v76);
    v72 = (int)&v2[4 * v75];
    *((_DWORD *)v1 + 1) = v71;
    *((_DWORD *)v1 + 2) = v72;
    *(_DWORD *)v65 = &Motive::mWanderer;
    v71 = v65 + 4;
    v72 = *((_DWORD *)v1 + 2);
  if ( v71 == (char *)v72 )
    v79 = (v71 - v2) >> 2;
    if ( !v79 )
      v79 = 1;
    v80 = v79 + ((v71 - v2) >> 2);
    v81 = v79 + ((v71 - v2) >> 2);
    if ( 0 != v80 >> 30 )
      v81 = 0x3FFFFFFF;
    if ( v80 < v79 )
    if ( v81 )
      if ( v81 >= 0x40000000 )
      v2 = (char *)operator new(4 * v81);
      v71 = (char *)(*(_QWORD *)v1 >> 32);
      v82 = (char *)*(_QWORD *)v1;
      v82 = v2;
    *(_DWORD *)&v2[v71 - v82] = &Motive::mGraham;
    if ( 0 != (v71 - v82) >> 2 )
      _aeabi_memmove4(v2, v82);
    v77 = &v2[v71 - v82 + 4];
    if ( v82 )
      operator delete(v82);
    v78 = (int)&v2[4 * v81];
    *((_DWORD *)v1 + 1) = v77;
    *((_DWORD *)v1 + 2) = v78;
    *(_DWORD *)v71 = &Motive::mGraham;
    v77 = v71 + 4;
    v78 = *((_DWORD *)v1 + 2);
  if ( v77 == (char *)v78 )
    v85 = (v77 - v2) >> 2;
    if ( !v85 )
      v85 = 1;
    v86 = v85 + ((v77 - v2) >> 2);
    v87 = v85 + ((v77 - v2) >> 2);
    if ( 0 != v86 >> 30 )
      v87 = 0x3FFFFFFF;
    if ( v86 < v85 )
    if ( v87 )
      if ( v87 >= 0x40000000 )
      v2 = (char *)operator new(4 * v87);
      v77 = (char *)(*(_QWORD *)v1 >> 32);
      v88 = (char *)*(_QWORD *)v1;
      v88 = v2;
    *(_DWORD *)&v2[v77 - v88] = &Motive::mMatch;
    if ( 0 != (v77 - v88) >> 2 )
      _aeabi_memmove4(v2, v88);
    v83 = &v2[v77 - v88 + 4];
    if ( v88 )
      operator delete(v88);
    v84 = (int)&v2[4 * v87];
    *((_DWORD *)v1 + 1) = v83;
    *((_DWORD *)v1 + 2) = v84;
    *(_DWORD *)v77 = &Motive::mMatch;
    v83 = v77 + 4;
    v84 = *((_DWORD *)v1 + 2);
  if ( v83 == (char *)v84 )
    v91 = (v83 - v2) >> 2;
    if ( !v91 )
      v91 = 1;
    v92 = v91 + ((v83 - v2) >> 2);
    v93 = v91 + ((v83 - v2) >> 2);
    if ( 0 != v92 >> 30 )
      v93 = 0x3FFFFFFF;
    if ( v92 < v91 )
    if ( v93 )
      if ( v93 >= 0x40000000 )
      v2 = (char *)operator new(4 * v93);
      v83 = (char *)(*(_QWORD *)v1 >> 32);
      v94 = (char *)*(_QWORD *)v1;
      v94 = v2;
    *(_DWORD *)&v2[v83 - v94] = &Motive::mBust;
    if ( 0 != (v83 - v94) >> 2 )
      _aeabi_memmove4(v2, v94);
    v89 = &v2[v83 - v94 + 4];
    if ( v94 )
      operator delete(v94);
    v90 = (int)&v2[4 * v93];
    *((_DWORD *)v1 + 1) = v89;
    *((_DWORD *)v1 + 2) = v90;
    *(_DWORD *)v83 = &Motive::mBust;
    v89 = v83 + 4;
    v90 = *((_DWORD *)v1 + 2);
  if ( v89 == (char *)v90 )
    v97 = (v89 - v2) >> 2;
    if ( !v97 )
      v97 = 1;
    v98 = v97 + ((v89 - v2) >> 2);
    v99 = v97 + ((v89 - v2) >> 2);
    if ( 0 != v98 >> 30 )
      v99 = 0x3FFFFFFF;
    if ( v98 < v97 )
    if ( v99 )
      if ( v99 >= 0x40000000 )
      v2 = (char *)operator new(4 * v99);
      v89 = (char *)(*(_QWORD *)v1 >> 32);
      v100 = (char *)*(_QWORD *)v1;
      v100 = v2;
    *(_DWORD *)&v2[v89 - v100] = &Motive::mStage;
    if ( 0 != (v89 - v100) >> 2 )
      _aeabi_memmove4(v2, v100);
    v95 = &v2[v89 - v100 + 4];
    if ( v100 )
      operator delete(v100);
    v96 = (int)&v2[4 * v99];
    *((_DWORD *)v1 + 1) = v95;
    *((_DWORD *)v1 + 2) = v96;
    *(_DWORD *)v89 = &Motive::mStage;
    v95 = v89 + 4;
    v96 = *((_DWORD *)v1 + 2);
  if ( v95 == (char *)v96 )
    v103 = (v95 - v2) >> 2;
    if ( !v103 )
      v103 = 1;
    v104 = v103 + ((v95 - v2) >> 2);
    v105 = v103 + ((v95 - v2) >> 2);
    if ( 0 != v104 >> 30 )
      v105 = 0x3FFFFFFF;
    if ( v104 < v103 )
    if ( v105 )
      if ( v105 >= 0x40000000 )
      v2 = (char *)operator new(4 * v105);
      v95 = (char *)(*(_QWORD *)v1 >> 32);
      v106 = (char *)*(_QWORD *)v1;
      v106 = v2;
    *(_DWORD *)&v2[v95 - v106] = &Motive::mVoid;
    if ( 0 != (v95 - v106) >> 2 )
      _aeabi_memmove4(v2, v106);
    v101 = &v2[v95 - v106 + 4];
    if ( v106 )
      operator delete(v106);
    v102 = (int)&v2[4 * v105];
    *((_DWORD *)v1 + 1) = v101;
    *((_DWORD *)v1 + 2) = v102;
    *(_DWORD *)v95 = &Motive::mVoid;
    v101 = v95 + 4;
    v102 = *((_DWORD *)v1 + 2);
  if ( v101 == (char *)v102 )
    v109 = (v101 - v2) >> 2;
    if ( !v109 )
      v109 = 1;
    v110 = v109 + ((v101 - v2) >> 2);
    v111 = v109 + ((v101 - v2) >> 2);
    if ( 0 != v110 >> 30 )
      v111 = 0x3FFFFFFF;
    if ( v110 < v109 )
    if ( v111 )
      if ( v111 >= 0x40000000 )
      v2 = (char *)operator new(4 * v111);
      v101 = (char *)(*(_QWORD *)v1 >> 32);
      v112 = (char *)*(_QWORD *)v1;
      v112 = v2;
    *(_DWORD *)&v2[v101 - v112] = &Motive::mSkullAndRoses;
    if ( 0 != (v101 - v112) >> 2 )
      _aeabi_memmove4(v2, v112);
    v107 = &v2[v101 - v112 + 4];
    if ( v112 )
      operator delete(v112);
    v108 = (int)&v2[4 * v111];
    *((_DWORD *)v1 + 1) = v107;
    *((_DWORD *)v1 + 2) = v108;
    *(_DWORD *)v101 = &Motive::mSkullAndRoses;
    v107 = v101 + 4;
    v108 = *((_DWORD *)v1 + 2);
  if ( v107 == (char *)v108 )
    v115 = (v107 - v2) >> 2;
    if ( !v115 )
      v115 = 1;
    v116 = v115 + ((v107 - v2) >> 2);
    v117 = v115 + ((v107 - v2) >> 2);
    if ( 0 != v116 >> 30 )
      v117 = 0x3FFFFFFF;
    if ( v116 < v115 )
    if ( v117 )
      if ( v117 >= 0x40000000 )
      v2 = (char *)operator new(4 * v117);
      v107 = (char *)(*(_QWORD *)v1 >> 32);
      v118 = (char *)*(_QWORD *)v1;
      v118 = v2;
    *(_DWORD *)&v2[v107 - v118] = &Motive::mWither;
    if ( 0 != (v107 - v118) >> 2 )
      _aeabi_memmove4(v2, v118);
    v113 = &v2[v107 - v118 + 4];
    if ( v118 )
      operator delete(v118);
    v114 = (int)&v2[4 * v117];
    *((_DWORD *)v1 + 1) = v113;
    *((_DWORD *)v1 + 2) = v114;
    *(_DWORD *)v107 = &Motive::mWither;
    v113 = v107 + 4;
    v114 = *((_DWORD *)v1 + 2);
  if ( v113 == (char *)v114 )
    v121 = (v113 - v2) >> 2;
    if ( !v121 )
      v121 = 1;
    v122 = v121 + ((v113 - v2) >> 2);
    v123 = v121 + ((v113 - v2) >> 2);
    if ( 0 != v122 >> 30 )
      v123 = 0x3FFFFFFF;
    if ( v122 < v121 )
    if ( v123 )
      if ( v123 >= 0x40000000 )
      v2 = (char *)operator new(4 * v123);
      v113 = (char *)(*(_QWORD *)v1 >> 32);
      v124 = (char *)*(_QWORD *)v1;
      v124 = v2;
    *(_DWORD *)&v2[v113 - v124] = &Motive::mFighters;
    if ( 0 != (v113 - v124) >> 2 )
      _aeabi_memmove4(v2, v124);
    v119 = &v2[v113 - v124 + 4];
    if ( v124 )
      operator delete(v124);
    v120 = (int)&v2[4 * v123];
    *((_DWORD *)v1 + 1) = v119;
    *((_DWORD *)v1 + 2) = v120;
    *(_DWORD *)v113 = &Motive::mFighters;
    v119 = v113 + 4;
    v120 = *((_DWORD *)v1 + 2);
  if ( v119 == (char *)v120 )
    v127 = (v119 - v2) >> 2;
    if ( !v127 )
      v127 = 1;
    v128 = v127 + ((v119 - v2) >> 2);
    v129 = v127 + ((v119 - v2) >> 2);
    if ( 0 != v128 >> 30 )
      v129 = 0x3FFFFFFF;
    if ( v128 < v127 )
    if ( v129 )
      if ( v129 >= 0x40000000 )
      v2 = (char *)operator new(4 * v129);
      v119 = (char *)(*(_QWORD *)v1 >> 32);
      v130 = (char *)*(_QWORD *)v1;
      v130 = v2;
    *(_DWORD *)&v2[v119 - v130] = &Motive::mPointer;
    if ( 0 != (v119 - v130) >> 2 )
      _aeabi_memmove4(v2, v130);
    v125 = &v2[v119 - v130 + 4];
    if ( v130 )
      operator delete(v130);
    v126 = (int)&v2[4 * v129];
    *((_DWORD *)v1 + 1) = v125;
    *((_DWORD *)v1 + 2) = v126;
    *(_DWORD *)v119 = &Motive::mPointer;
    v125 = v119 + 4;
    v126 = *((_DWORD *)v1 + 2);
  if ( v125 == (char *)v126 )
    v133 = (v125 - v2) >> 2;
    if ( !v133 )
      v133 = 1;
    v134 = v133 + ((v125 - v2) >> 2);
    v135 = v133 + ((v125 - v2) >> 2);
    if ( 0 != v134 >> 30 )
      v135 = 0x3FFFFFFF;
    if ( v134 < v133 )
    if ( v135 )
      if ( v135 >= 0x40000000 )
      v2 = (char *)operator new(4 * v135);
      v125 = (char *)(*(_QWORD *)v1 >> 32);
      v136 = (char *)*(_QWORD *)v1;
      v136 = v2;
    *(_DWORD *)&v2[v125 - v136] = &Motive::mPigscene;
    if ( 0 != (v125 - v136) >> 2 )
      _aeabi_memmove4(v2, v136);
    v131 = &v2[v125 - v136 + 4];
    if ( v136 )
      operator delete(v136);
    v132 = (int)&v2[4 * v135];
    *((_DWORD *)v1 + 1) = v131;
    *((_DWORD *)v1 + 2) = v132;
    *(_DWORD *)v125 = &Motive::mPigscene;
    v131 = v125 + 4;
    v132 = *((_DWORD *)v1 + 2);
  if ( v131 == (char *)v132 )
    v139 = (v131 - v2) >> 2;
    if ( !v139 )
      v139 = 1;
    v140 = v139 + ((v131 - v2) >> 2);
    v141 = v139 + ((v131 - v2) >> 2);
    if ( 0 != v140 >> 30 )
      v141 = 0x3FFFFFFF;
    if ( v140 < v139 )
    if ( v141 )
      if ( v141 >= 0x40000000 )
      v2 = (char *)operator new(4 * v141);
      v131 = (char *)(*(_QWORD *)v1 >> 32);
      v142 = (char *)*(_QWORD *)v1;
      v142 = v2;
    *(_DWORD *)&v2[v131 - v142] = &Motive::mBurningSkull;
    if ( 0 != (v131 - v142) >> 2 )
      _aeabi_memmove4(v2, v142);
    v137 = &v2[v131 - v142 + 4];
    if ( v142 )
      operator delete(v142);
    v138 = (int)&v2[4 * v141];
    *((_DWORD *)v1 + 1) = v137;
    *((_DWORD *)v1 + 2) = v138;
    *(_DWORD *)v131 = &Motive::mBurningSkull;
    v137 = v131 + 4;
    v138 = *((_DWORD *)v1 + 2);
  if ( v137 == (char *)v138 )
    v145 = (v137 - v2) >> 2;
    if ( !v145 )
      v145 = 1;
    v146 = v145 + ((v137 - v2) >> 2);
    v147 = v145 + ((v137 - v2) >> 2);
    if ( 0 != v146 >> 30 )
      v147 = 0x3FFFFFFF;
    if ( v146 < v145 )
    if ( v147 )
      if ( v147 >= 0x40000000 )
      v2 = (char *)operator new(4 * v147);
      v137 = (char *)(*(_QWORD *)v1 >> 32);
      v148 = (char *)*(_QWORD *)v1;
      v148 = v2;
    *(_DWORD *)&v2[v137 - v148] = &Motive::mSkeleton;
    if ( 0 != (v137 - v148) >> 2 )
      _aeabi_memmove4(v2, v148);
    v143 = &v2[v137 - v148 + 4];
    if ( v148 )
      operator delete(v148);
    v144 = (int)&v2[4 * v147];
    *((_DWORD *)v1 + 1) = v143;
    *((_DWORD *)v1 + 2) = v144;
    *(_DWORD *)v137 = &Motive::mSkeleton;
    v143 = v137 + 4;
    v144 = *((_DWORD *)v1 + 2);
  if ( v143 == (char *)v144 )
    v151 = (v143 - v2) >> 2;
    if ( !v151 )
      v151 = 1;
    v152 = v151 + ((v143 - v2) >> 2);
    v153 = v151 + ((v143 - v2) >> 2);
    if ( 0 != v152 >> 30 )
      v153 = 0x3FFFFFFF;
    if ( v152 < v151 )
    if ( v153 )
      if ( v153 >= 0x40000000 )
      v2 = (char *)operator new(4 * v153);
      v143 = (char *)(*(_QWORD *)v1 >> 32);
      v154 = (char *)*(_QWORD *)v1;
      v154 = v2;
    *(_DWORD *)&v2[v143 - v154] = &Motive::mDonkeyKong;
    if ( 0 != (v143 - v154) >> 2 )
      _aeabi_memmove4(v2, v154);
    v149 = &v2[v143 - v154 + 4];
    if ( v154 )
      operator delete(v154);
    v150 = (int)&v2[4 * v153];
    *((_DWORD *)v1 + 1) = v149;
    *((_DWORD *)v1 + 2) = v150;
    *(_DWORD *)v143 = &Motive::mDonkeyKong;
    v149 = v143 + 4;
    v150 = *((_DWORD *)v1 + 2);
  if ( v149 == (char *)v150 )
    v157 = (v149 - v2) >> 2;
    if ( !v157 )
      v157 = 1;
    v158 = v157 + ((v149 - v2) >> 2);
    v159 = v157 + ((v149 - v2) >> 2);
    if ( 0 != v158 >> 30 )
      v159 = 0x3FFFFFFF;
    if ( v158 < v157 )
    if ( v159 )
      if ( v159 >= 0x40000000 )
      v2 = (char *)operator new(4 * v159);
      v149 = (char *)(*(_QWORD *)v1 >> 32);
      v160 = (char *)*(_QWORD *)v1;
      v160 = v2;
    *(_DWORD *)&v2[v149 - v160] = &Motive::mEarth;
    if ( 0 != (v149 - v160) >> 2 )
      _aeabi_memmove4(v2, v160);
    v155 = &v2[v149 - v160 + 4];
    if ( v160 )
      operator delete(v160);
    v156 = (int)&v2[4 * v159];
    *((_DWORD *)v1 + 1) = v155;
    *((_DWORD *)v1 + 2) = v156;
    *(_DWORD *)v149 = &Motive::mEarth;
    v155 = v149 + 4;
    v156 = *((_DWORD *)v1 + 2);
  if ( v155 == (char *)v156 )
    v163 = (v155 - v2) >> 2;
    if ( !v163 )
      v163 = 1;
    v164 = v163 + ((v155 - v2) >> 2);
    v165 = v163 + ((v155 - v2) >> 2);
    if ( 0 != v164 >> 30 )
      v165 = 0x3FFFFFFF;
    if ( v164 < v163 )
    if ( v165 )
      if ( v165 >= 0x40000000 )
      v2 = (char *)operator new(4 * v165);
      v155 = (char *)(*(_QWORD *)v1 >> 32);
      v166 = (char *)*(_QWORD *)v1;
      v166 = v2;
    *(_DWORD *)&v2[v155 - v166] = &Motive::mWind;
    if ( 0 != (v155 - v166) >> 2 )
      _aeabi_memmove4(v2, v166);
    v161 = &v2[v155 - v166 + 4];
    if ( v166 )
      operator delete(v166);
    v162 = (int)&v2[4 * v165];
    *((_DWORD *)v1 + 1) = v161;
    *((_DWORD *)v1 + 2) = v162;
    *(_DWORD *)v155 = &Motive::mWind;
    v161 = v155 + 4;
    v162 = *((_DWORD *)v1 + 2);
  if ( v161 == (char *)v162 )
    v169 = (v161 - v2) >> 2;
    if ( !v169 )
      v169 = 1;
    v170 = v169 + ((v161 - v2) >> 2);
    v171 = v169 + ((v161 - v2) >> 2);
    if ( 0 != v170 >> 30 )
      v171 = 0x3FFFFFFF;
    if ( v170 < v169 )
    if ( v171 )
      if ( v171 >= 0x40000000 )
      v2 = (char *)operator new(4 * v171);
      v161 = (char *)(*(_QWORD *)v1 >> 32);
      v172 = (char *)*(_QWORD *)v1;
      v172 = v2;
    *(_DWORD *)&v2[v161 - v172] = &Motive::mFire;
    if ( 0 != (v161 - v172) >> 2 )
      _aeabi_memmove4(v2, v172);
    v167 = &v2[v161 - v172 + 4];
    if ( v172 )
      operator delete(v172);
    v168 = (int)&v2[4 * v171];
    *((_DWORD *)v1 + 1) = v167;
    *((_DWORD *)v1 + 2) = v168;
    *(_DWORD *)v161 = &Motive::mFire;
    v167 = v161 + 4;
    v168 = *((_DWORD *)v1 + 2);
  if ( v167 == (char *)v168 )
    v174 = (v167 - v2) >> 2;
    if ( !v174 )
      v174 = 1;
    v175 = v174 + ((v167 - v2) >> 2);
    v176 = v174 + ((v167 - v2) >> 2);
    if ( 0 != v175 >> 30 )
      v176 = 0x3FFFFFFF;
    if ( v175 < v174 )
    if ( v176 )
      if ( v176 >= 0x40000000 )
      v177 = (char *)operator new(4 * v176);
      v167 = (char *)(*(_QWORD *)v1 >> 32);
      v2 = (char *)*(_QWORD *)v1;
      v177 = 0;
    *(_DWORD *)&v177[v167 - v2] = &Motive::mWater;
    if ( 0 != (v167 - v2) >> 2 )
      _aeabi_memmove4(v177, v2);
    if ( v2 )
      operator delete(v2);
    result = &v177[4 * v176];
    *(_DWORD *)v1 = v177;
    *((_DWORD *)v1 + 1) = &v177[v167 - v2 + 4];
    *((_DWORD *)v1 + 2) = result;
    result = (char *)&Motive::mWater;
    *(_DWORD *)v167 = &Motive::mWater;
    *((_DWORD *)v1 + 1) = v167 + 4;
  return result;
}


Motive *__fastcall Motive::~Motive(Motive *this)
{
  Motive *v1; // r5@1
  int v2; // r1@1
  int *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = (int *)(*(_DWORD *)this - 12);
  if ( v3 != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
  return v1;
}


void *__fastcall Motive::getDefaultImage(Motive *this)
{
  return &Motive::mKebab;
}


const void **__fastcall Motive::getMotiveByName(const void **a1)
{
  const void **v1; // r5@1
  __int64 v2; // kr00_8@1
  const void ***v3; // r6@2
  const void *v4; // r10@2
  size_t v5; // r7@2
  const void **v6; // r5@3
  _DWORD *v7; // r0@3
  const void ***v9; // [sp+4h] [bp-2Ch]@1
  const void ***v10; // [sp+8h] [bp-28h]@1

  v1 = a1;
  Motive::getAllMotivesAsList((Motive *)&v9);
  v2 = *(_QWORD *)&v9;
  if ( v9 == v10 )
  {
    v6 = (const void **)&Motive::mKebab;
  }
  else
    v3 = v9;
    v4 = *v1;
    v5 = *((_DWORD *)*v1 - 3);
    while ( 1 )
    {
      v6 = *v3;
      v7 = **v3;
      if ( *(v7 - 3) == v5 && !memcmp(v7, v4, v5) )
        break;
      ++v3;
      if ( (const void ***)HIDWORD(v2) == v3 )
      {
        v6 = (const void **)&Motive::mKebab;
      }
    }
  if ( (_DWORD)v2 )
    operator delete((void *)v2);
  return v6;
}


int *__fastcall Motive::Motive(int *a1, int *a2, int a3, int a4, int a5, int a6, char a7)
{
  int v7; // r4@1
  int v8; // r5@1
  int *result; // r0@1

  v7 = a4;
  v8 = a3;
  result = sub_21E8AF4(a1, a2);
  result[1] = v8;
  result[2] = v7;
  result[3] = a5;
  result[4] = a6;
  *((_BYTE *)result + 20) = a7;
  return result;
}
