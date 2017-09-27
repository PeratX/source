

int __fastcall SkinInfoData::setForceAlpha(int result, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // nf@1
  unsigned __int8 v7; // vf@1
  int v8; // lr@5
  int v9; // r1@7
  unsigned int *v10; // r3@7
  unsigned int v11; // r5@8

  v7 = __OFSUB__(a3, a5);
  v6 = a3 - a5 < 0;
  if ( a3 < a5 )
  {
    result = a6;
    v7 = __OFSUB__(a4, a6);
    v6 = a4 - a6 < 0;
  }
  if ( v6 ^ v7 )
    v8 = result - a4;
    result = *a2 + 4 * (a3 + (a4 << 6));
    do
    {
      v9 = v8;
      v10 = (unsigned int *)result;
      do
      {
        v11 = *v10 | 0xFF000000;
        if ( *v10 < 0x1A000000 )
          v11 = *v10 & 0xFFFFFF;
        --v9;
        *v10 = v11;
        v10 += 64;
      }
      while ( v9 );
      ++a3;
      result += 4;
    }
    while ( a3 != a5 );
  return result;
}


signed int __fastcall SkinInfoData::verifyIsPremiumGeometry(int a1, const void **a2)
{
  const void **v2; // r4@1
  char v3; // r0@1
  char v4; // r0@4
  _DWORD *v5; // r4@7
  size_t v6; // r5@7
  signed int result; // r0@10

  v2 = a2;
  v3 = byte_2802160;
  __dmb();
  if ( !(v3 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2802160) )
  {
    sub_21E94B4((void **)&dword_280215C, "geometry.humanoid.custom");
    _cxa_atexit(sub_21E6EDC);
    j___cxa_guard_release((unsigned int *)&byte_2802160);
  }
  v4 = byte_2802168;
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2802168) )
    sub_21E94B4((void **)&dword_2802164, "geometry.humanoid.customSlim");
    j___cxa_guard_release((unsigned int *)&byte_2802168);
  v5 = *v2;
  v6 = *(v5 - 3);
  if ( v6 == *(_DWORD *)(dword_280215C - 12) && !memcmp(v5, (const void *)dword_280215C, *(v5 - 3)) )
    result = 0;
  else if ( v6 == *(_DWORD *)(dword_2802164 - 12) )
    result = memcmp(v5, (const void *)dword_2802164, v6) != 0;
  else
    result = 1;
  return result;
}


char *__fastcall SkinInfoData::getSkinId(SkinInfoData *this)
{
  return (char *)this + 8;
}


int __fastcall SkinInfoData::updateSkin(int a1, int *a2, int a3, int a4, int *a5, int *a6)
{
  int v6; // r4@1
  int result; // r0@1

  v6 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 8), a2);
  EntityInteraction::setInteractText((int *)(v6 + 12), a5);
  EntityInteraction::setInteractText((int *)(v6 + 16), a6);
  result = *(_DWORD *)(v6 + 20);
  *(_DWORD *)(v6 + 20) = 0;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


char *__fastcall SkinInfoData::getGeometryData(SkinInfoData *this)
{
  return (char *)this + 16;
}


int __fastcall SkinInfoData::getTexturePair(SkinInfoData *this)
{
  return 0;
}


int __fastcall SkinInfoData::setNoAlpha(int result, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // nf@1
  unsigned __int8 v7; // vf@1
  int v8; // lr@5
  int v9; // r1@7
  _DWORD *v10; // r3@7

  v7 = __OFSUB__(a3, a5);
  v6 = a3 - a5 < 0;
  if ( a3 < a5 )
  {
    result = a6;
    v7 = __OFSUB__(a4, a6);
    v6 = a4 - a6 < 0;
  }
  if ( v6 ^ v7 )
    v8 = result - a4;
    result = *a2 + 4 * (a3 + (a4 << 6));
    do
    {
      v9 = v8;
      v10 = (_DWORD *)result;
      do
      {
        --v9;
        *v10 |= 0xFF000000;
        v10 += 64;
      }
      while ( v9 );
      ++a3;
      result += 4;
    }
    while ( a3 != a5 );
  return result;
}


SkinInfoData *__fastcall SkinInfoData::~SkinInfoData(SkinInfoData *this)
{
  SkinInfoData *v1; // r5@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17

  v1 = this;
  *(_DWORD *)this = &off_26FD580;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  v3 = *((_DWORD *)v1 + 4);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v5 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 2);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v1;
}


int __fastcall SkinInfoData::setVisualModel(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v2 + 20) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall SkinInfoData::validateAlpha(int a1, int a2, float a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // r0@1
  int v9; // r0@3
  int v10; // lr@3
  int v15; // r1@3
  float v16; // r5@3
  int v17; // r11@3
  int v18; // r0@3
  int v19; // r4@4
  unsigned int *v20; // r7@4
  unsigned int v21; // r8@5
  int v24; // r0@16
  _DWORD *v25; // r3@16

  result = 0;
  if ( SLODWORD(a3) < a5 && a6 > a4 )
  {
    v9 = *(_DWORD *)a2;
    v10 = a6 - a4;
    __asm { VLDR            S0, [SP,#0x24+arg_8] }
    _R6 = 0;
    v15 = LODWORD(a3) + (a4 << 6);
    v16 = a3;
    v17 = v9 + 4 * v15;
    v18 = v9 + 4 * v15;
    do
    {
      v19 = a6;
      v20 = (unsigned int *)v18;
      do
      {
        --v19;
        v21 = *v20 | 0xFF000000;
        _CF = *v20 >= 0x1A000000;
        if ( *v20 < 0x1A000000 )
          v21 = *v20 & 0xFFFFFF;
        *v20 = v21;
        v20 += 64;
        if ( !_CF )
          ++_R6;
      }
      while ( a4 != v19 );
      ++LODWORD(v16);
      v18 += 4;
    }
    while ( LODWORD(v16) != a5 );
    if ( !_R6 )
      return 0;
    _R0 = a6 + (a5 - 1 - LODWORD(a3)) * (a6 - a4) - a4;
    __asm
      VMOV            S2, R6
      VMOV            S4, R0
    result = 1;
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VDIV.F32        S2, S2, S4
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !a8 )
      result = 0;
      if ( SLODWORD(a3) < a5 && a6 > a4 )
        do
        {
          v24 = v10;
          v25 = (_DWORD *)v17;
          do
          {
            --v24;
            *v25 |= 0xFF000000;
            v25 += 64;
          }
          while ( v24 );
          ++LODWORD(a3);
          v17 += 4;
        }
        while ( LODWORD(a3) != a5 );
        return 0;
  }
  return result;
}


int __fastcall SkinInfoData::SkinInfoData(int result)
{
  *(_DWORD *)result = &off_26FD580;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


void __fastcall SkinInfoData::~SkinInfoData(SkinInfoData *this)
{
  SkinInfoData::~SkinInfoData(this);
}


char *__fastcall SkinInfoData::copySkinPart(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r11@1
  char *result; // r0@1
  signed int v12; // r7@1
  signed int v13; // r9@5
  int v14; // lr@5
  signed int v15; // r4@10
  signed int v16; // r12@10
  int v17; // r10@18
  signed int v18; // r7@18
  int v19; // r0@20
  int v20; // r1@22
  int v21; // r9@22
  int v22; // r6@23
  _DWORD *v23; // r2@23
  char *v24; // r3@23
  int v25; // [sp+0h] [bp-28h]@18

  v10 = a3;
  result = (char *)a10;
  v12 = -1;
  if ( a5 < a3 )
    v10 = a3 - 1;
  if ( a8 < a10 )
    v12 = 1;
  v13 = -1;
  v14 = a5;
  if ( a7 < a9 )
    v13 = 1;
    v14 = a5 - 1;
  if ( a3 != a5 )
  {
    v15 = 1;
    v16 = 1;
    if ( a6 < a4 )
      v15 = -1;
    if ( a5 < a3 )
      v16 = -1;
    if ( a4 == a6 )
    {
      result = (char *)(a3 - a5);
      do
        result += v16;
      while ( result );
    }
    else
      v17 = *a2;
      v18 = v12 << 8;
      v25 = a4 - a6;
      if ( a6 < a4 )
        --a4;
      v19 = a3 + (a4 << 6);
      if ( a5 < a3 )
        --v19;
      v20 = v17 + 4 * v19;
      v21 = 4 * v13;
      result = (char *)(v17 + 4 * (a7 + (a8 << 6)));
      {
        v22 = v25;
        v23 = (_DWORD *)v20;
        v24 = result;
        do
        {
          v22 += v15;
          *v23 = *(_DWORD *)v24;
          v23 += 64 * v15;
          v24 += v18;
        }
        while ( v22 );
        v10 += v16;
        v20 += 4 * v16;
        result += v21;
      }
      while ( v10 != v14 );
  }
  return result;
}


int __fastcall SkinInfoData::validateAndResizeSkinData(int a1, int a2, int a3)
{
  int v3; // r0@1
  int v4; // r10@1
  int v5; // r0@6
  int v6; // r1@6
  int v7; // r0@6
  signed int v8; // r2@6
  int v9; // lr@7
  int v10; // r6@7
  int v11; // r1@8
  int v12; // r2@8
  int v13; // r3@8
  int v14; // r7@9
  int v15; // r1@10
  signed int v16; // r2@10
  int v17; // lr@11
  int v18; // r6@11
  int v19; // r1@12
  int v20; // r2@12
  int v21; // r3@12
  int v22; // r7@13
  int v23; // r1@14
  signed int v24; // r2@14
  int v25; // r12@15
  int v26; // r6@15
  signed int v27; // r1@16
  signed int v28; // r0@16
  int v29; // r7@17
  int v30; // r2@17
  int v31; // r1@18
  signed int v32; // r2@18
  int v33; // r12@19
  int v34; // r6@19
  signed int v35; // r1@20
  signed int v36; // r0@20
  int v37; // r7@21
  int v38; // r2@21
  int v39; // lr@24
  int v41; // r3@25
  unsigned int v42; // r12@25
  unsigned int v43; // r0@25
  unsigned int v44; // r8@27
  unsigned int v45; // r0@27
  unsigned int v46; // r9@29
  unsigned int v47; // r0@29
  unsigned int v48; // r0@31
  unsigned int v49; // r2@31
  unsigned int v50; // r4@33
  unsigned int v51; // r2@33
  unsigned int v52; // r7@35
  unsigned int v53; // r2@35
  unsigned int v54; // r2@37
  unsigned int v55; // r6@37
  unsigned int v56; // r6@39
  unsigned int v57; // r5@39
  signed int v62; // r1@59
  int v63; // r0@61
  int v64; // r1@62
  int v65; // lr@64
  int v67; // r3@65
  unsigned int v68; // r12@65
  unsigned int v69; // r0@65
  unsigned int v70; // r8@67
  unsigned int v71; // r0@67
  unsigned int v72; // r9@69
  unsigned int v73; // r0@69
  unsigned int v74; // r0@71
  unsigned int v75; // r2@71
  unsigned int v76; // r4@73
  unsigned int v77; // r2@73
  unsigned int v78; // r7@75
  unsigned int v79; // r2@75
  unsigned int v80; // r2@77
  unsigned int v81; // r6@77
  unsigned int v82; // r6@79
  unsigned int v83; // r5@79
  signed int v84; // r1@99
  int v85; // r0@101
  int v86; // r1@102
  int v87; // r0@104
  int v89; // r11@105
  unsigned int v90; // r2@105
  unsigned int v91; // r0@105
  unsigned int v92; // r2@107
  unsigned int v93; // r0@107
  unsigned int v94; // r9@109
  unsigned int v95; // r0@109
  unsigned int v96; // r2@111
  unsigned int v97; // r0@111
  unsigned int v98; // r5@113
  unsigned int v99; // r0@113
  unsigned int v100; // r6@115
  unsigned int v101; // r0@115
  unsigned int v102; // r8@117
  unsigned int v103; // r0@117
  unsigned int v104; // r7@119
  unsigned int v105; // r0@119
  unsigned int v106; // lr@121
  unsigned int v107; // r0@121
  unsigned int v108; // r10@123
  unsigned int v109; // r0@123
  unsigned int v110; // r1@125
  unsigned int v111; // r3@125
  unsigned int v112; // r3@127
  unsigned int v113; // r0@127
  signed int v114; // lr@155
  int v115; // r1@157
  int v116; // r0@158
  int v117; // r7@160
  int v119; // r10@160
  int v120; // r8@160
  unsigned int v121; // r6@161
  unsigned int v122; // r5@161
  int v123; // r5@163
  unsigned int v124; // r4@163
  unsigned int v125; // r1@163
  unsigned int v126; // r1@165
  unsigned int v127; // r3@165
  unsigned int v128; // r3@167
  unsigned int v129; // r0@167
  signed int v130; // r8@179
  int v131; // r12@183
  int v132; // lr@183
  int v133; // r3@183
  unsigned int v135; // r7@184
  unsigned int v136; // r6@184
  int v137; // r6@186
  unsigned int v138; // r4@186
  unsigned int v139; // r5@186
  unsigned int v140; // r5@188
  unsigned int v141; // r0@188
  unsigned int v142; // r0@190
  unsigned int v143; // r1@190
  signed int v144; // lr@202
  int v145; // r1@204
  int v146; // r2@204
  int v147; // r0@205
  int v148; // r12@207
  int v149; // r8@207
  int v150; // r7@207
  unsigned int v152; // r6@208
  unsigned int v153; // r5@208
  int v154; // r5@210
  unsigned int v155; // r4@210
  unsigned int v156; // r3@210
  unsigned int v157; // r3@212
  unsigned int v158; // r2@212
  unsigned int v159; // r2@214
  unsigned int v160; // r0@214
  signed int v161; // r0@229
  int v163; // r0@232
  int v165; // r11@233
  unsigned int v166; // r2@233
  unsigned int v167; // r0@233
  unsigned int v168; // r2@235
  unsigned int v169; // r0@235
  unsigned int v170; // r8@237
  unsigned int v171; // r0@237
  unsigned int v172; // r4@239
  unsigned int v173; // r0@239
  unsigned int v174; // r3@241
  unsigned int v175; // r0@241
  unsigned int v176; // r1@243
  unsigned int v177; // r2@243
  unsigned int v178; // r5@245
  unsigned int v179; // r2@245
  unsigned int v180; // r6@247
  unsigned int v181; // r2@247
  unsigned int v182; // r12@249
  unsigned int v183; // r2@249
  unsigned int v184; // lr@251
  unsigned int v185; // r2@251
  unsigned int v186; // r10@253
  unsigned int v187; // r2@253
  unsigned int v188; // r2@255
  unsigned int v189; // r0@255
  signed int v190; // r2@283
  int v191; // r0@285
  int v192; // r5@286
  int v193; // r7@288
  int v194; // r10@288
  int v195; // r1@288
  unsigned int v197; // r6@289
  unsigned int v198; // r5@289
  int v199; // r7@294
  int v200; // r1@294
  unsigned int v201; // r6@295
  unsigned int v202; // r5@295
  int v203; // r7@300
  int v204; // r1@300
  unsigned int v205; // r6@301
  unsigned int v206; // r5@301
  int v207; // r7@306
  int v208; // r1@306
  unsigned int v209; // r6@307
  unsigned int v210; // r5@307
  int v211; // r7@312
  int v212; // r1@312
  unsigned int v213; // r6@313
  unsigned int v214; // r5@313
  int v215; // r7@318
  int v216; // r1@318
  unsigned int v217; // r6@319
  unsigned int v218; // r5@319
  int v219; // r7@324
  int v220; // r1@324
  unsigned int v221; // r6@325
  unsigned int v222; // r5@325
  int v223; // r7@330
  int v224; // r1@330
  unsigned int v225; // r6@331
  unsigned int v226; // r5@331
  signed int v227; // r0@337
  int v228; // r1@339
  int v229; // r0@339
  int v230; // r7@340
  int v231; // r2@342
  int v232; // r1@342
  int v233; // r7@342
  unsigned int v235; // r6@343
  unsigned int v236; // r5@343
  int v237; // r7@348
  int v238; // r1@348
  unsigned int v239; // r6@349
  unsigned int v240; // r5@349
  int v241; // r7@354
  int v242; // r1@354
  unsigned int v243; // r6@355
  unsigned int v244; // r5@355
  int v245; // r7@360
  int v246; // r1@360
  unsigned int v247; // r6@361
  unsigned int v248; // r5@361
  int v249; // r7@366
  int v250; // r1@366
  unsigned int v251; // r6@367
  unsigned int v252; // r5@367
  int v253; // r7@372
  int v254; // r1@372
  unsigned int v255; // r6@373
  unsigned int v256; // r5@373
  int v257; // r7@378
  int v258; // r1@378
  unsigned int v259; // r6@379
  unsigned int v260; // r5@379
  int v261; // r7@384
  int v262; // r1@384
  unsigned int v263; // r6@385
  unsigned int v264; // r5@385
  signed int v265; // r1@391
  int v266; // r3@393
  int v267; // r1@393
  int v268; // r7@394
  int v269; // r0@396
  int v270; // r6@396
  signed int v271; // r3@396
  signed int v272; // r7@397
  unsigned int *v273; // r2@397
  unsigned int v274; // r4@398
  int v275; // r2@402
  int v276; // r7@403
  int v277; // r10@403
  unsigned int v278; // r11@403
  unsigned int v279; // r1@403
  unsigned int v280; // r1@405
  unsigned int v281; // r3@405
  unsigned int v282; // r1@407
  unsigned int v283; // r3@407
  unsigned int v284; // r1@409
  unsigned int v285; // r3@409
  unsigned int v286; // r1@411
  unsigned int v287; // r3@411
  unsigned int v288; // r1@413
  unsigned int v289; // r3@413
  unsigned int v290; // r1@415
  unsigned int v291; // r3@415
  unsigned int v292; // r1@417
  unsigned int v293; // r3@417
  unsigned int v294; // r1@419
  unsigned int v295; // r3@419
  unsigned int v296; // r1@421
  unsigned int v297; // r3@421
  unsigned int v298; // r1@423
  unsigned int v299; // r3@423
  unsigned int v300; // r1@425
  unsigned int v301; // r3@425
  unsigned int v302; // r1@427
  unsigned int v303; // r3@427
  unsigned int v304; // r1@429
  unsigned int v305; // r3@429
  unsigned int v306; // r1@431
  unsigned int v307; // r3@431
  unsigned int v308; // r1@433
  unsigned int v309; // r3@433
  int v310; // r2@436
  int v311; // r10@437
  unsigned int v312; // r11@437
  unsigned int v313; // r1@437
  unsigned int v314; // r1@439
  unsigned int v315; // r3@439
  unsigned int v316; // r1@441
  unsigned int v317; // r3@441
  unsigned int v318; // r1@443
  unsigned int v319; // r3@443
  unsigned int v320; // r1@445
  unsigned int v321; // r3@445
  unsigned int v322; // r1@447
  unsigned int v323; // r3@447
  unsigned int v324; // r1@449
  unsigned int v325; // r3@449
  unsigned int v326; // r1@451
  unsigned int v327; // r3@451
  unsigned int v328; // r1@453
  unsigned int v329; // r3@453
  unsigned int v330; // r1@455
  unsigned int v331; // r3@455
  unsigned int v332; // r1@457
  unsigned int v333; // r3@457
  unsigned int v334; // r1@459
  unsigned int v335; // r3@459
  unsigned int v336; // r1@461
  unsigned int v337; // r3@461
  unsigned int v338; // r1@463
  unsigned int v339; // r3@463
  unsigned int v340; // r1@465
  unsigned int v341; // r3@465
  unsigned int v342; // r1@467
  unsigned int v343; // r3@467
  int v344; // r0@470
  int v345; // r1@470
  unsigned int v346; // r2@471
  unsigned int v347; // r3@471
  int v348; // r2@473
  unsigned int v349; // r3@473
  unsigned int v350; // r7@473
  unsigned int v351; // r3@475
  unsigned int v352; // r7@475
  unsigned int v353; // r3@477
  unsigned int v354; // r7@477
  unsigned int v355; // r3@479
  unsigned int v356; // r7@479
  unsigned int v357; // r3@481
  unsigned int v358; // r7@481
  unsigned int v359; // r3@483
  unsigned int v360; // r7@483
  unsigned int v361; // r3@485
  unsigned int v362; // r7@485
  unsigned int v363; // r3@487
  unsigned int v364; // r7@487
  unsigned int v365; // r3@489
  unsigned int v366; // r7@489
  unsigned int v367; // r3@491
  unsigned int v368; // r7@491
  unsigned int v369; // r3@493
  unsigned int v370; // r7@493
  unsigned int v371; // r3@495
  unsigned int v372; // r7@495
  unsigned int v373; // r3@497
  unsigned int v374; // r7@497
  unsigned int v375; // r3@499
  unsigned int v376; // r7@499
  unsigned int v377; // r3@501
  unsigned int v378; // r7@501
  int v379; // r2@504
  int v380; // r10@505
  unsigned int v381; // r11@505
  unsigned int v382; // r1@505
  unsigned int v383; // r1@507
  unsigned int v384; // r3@507
  unsigned int v385; // r1@509
  unsigned int v386; // r3@509
  unsigned int v387; // r1@511
  unsigned int v388; // r3@511
  unsigned int v389; // r1@513
  unsigned int v390; // r3@513
  unsigned int v391; // r1@515
  unsigned int v392; // r3@515
  unsigned int v393; // r1@517
  unsigned int v394; // r3@517
  unsigned int v395; // r1@519
  unsigned int v396; // r3@519
  unsigned int v397; // r1@521
  unsigned int v398; // r3@521
  unsigned int v399; // r1@523
  unsigned int v400; // r3@523
  unsigned int v401; // r1@525
  unsigned int v402; // r3@525
  unsigned int v403; // r1@527
  unsigned int v404; // r3@527
  unsigned int v405; // r1@529
  unsigned int v406; // r3@529
  unsigned int v407; // r1@531
  unsigned int v408; // r3@531
  unsigned int v409; // r1@533
  unsigned int v410; // r3@533
  unsigned int v411; // r1@535
  unsigned int v412; // r3@535
  int v413; // r2@538
  int v414; // r10@539
  unsigned int v415; // r11@539
  unsigned int v416; // r1@539
  unsigned int v417; // r1@541
  unsigned int v418; // r3@541
  unsigned int v419; // r1@543
  unsigned int v420; // r3@543
  unsigned int v421; // r1@545
  unsigned int v422; // r3@545
  unsigned int v423; // r1@547
  unsigned int v424; // r3@547
  unsigned int v425; // r1@549
  unsigned int v426; // r3@549
  unsigned int v427; // r1@551
  unsigned int v428; // r3@551
  unsigned int v429; // r1@553
  unsigned int v430; // r3@553
  unsigned int v431; // r1@555
  unsigned int v432; // r3@555
  unsigned int v433; // r1@557
  unsigned int v434; // r3@557
  unsigned int v435; // r1@559
  unsigned int v436; // r3@559
  unsigned int v437; // r1@561
  unsigned int v438; // r3@561
  unsigned int v439; // r1@563
  unsigned int v440; // r3@563
  unsigned int v441; // r1@565
  unsigned int v442; // r3@565
  unsigned int v443; // r1@567
  unsigned int v444; // r3@567
  unsigned int v445; // r1@569
  unsigned int v446; // r3@569
  signed int v447; // [sp+4h] [bp-44h]@104
  signed int v448; // [sp+4h] [bp-44h]@232
  signed int v449; // [sp+8h] [bp-40h]@64
  int v450; // [sp+8h] [bp-40h]@232
  int v451; // [sp+Ch] [bp-3Ch]@1
  int v452; // [sp+10h] [bp-38h]@1
  int v453; // [sp+14h] [bp-34h]@23
  int v454; // [sp+14h] [bp-34h]@232
  unsigned int v455; // [sp+18h] [bp-30h]@107
  unsigned int v456; // [sp+18h] [bp-30h]@235
  unsigned int v457; // [sp+1Ch] [bp-2Ch]@105
  unsigned int v458; // [sp+1Ch] [bp-2Ch]@233
  int v459; // [sp+1Ch] [bp-2Ch]@402
  int v460; // [sp+20h] [bp-28h]@105
  int v461; // [sp+20h] [bp-28h]@233
  int v462; // [sp+20h] [bp-28h]@436
  int v463; // [sp+20h] [bp-28h]@504
  int v464; // [sp+20h] [bp-28h]@538

  v451 = a3;
  v452 = a2;
  v3 = *(_QWORD *)a2 >> 32;
  v4 = *(_QWORD *)a2;
  if ( v3 - v4 == 0x2000 )
  {
    std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(a2, 0x2000u);
    v5 = *(_DWORD *)v452;
    *(_DWORD *)(v5 + 12380) = *(_DWORD *)(*(_DWORD *)v452 + 4112);
    *(_DWORD *)(v5 + 12636) = *(_DWORD *)(v5 + 4368);
    *(_DWORD *)(v5 + 12892) = *(_DWORD *)(v5 + 4624);
    *(_DWORD *)(v5 + 13148) = *(_DWORD *)(v5 + 4880);
    *(_DWORD *)(v5 + 12376) = *(_DWORD *)(v5 + 4116);
    *(_DWORD *)(v5 + 12632) = *(_DWORD *)(v5 + 4372);
    *(_DWORD *)(v5 + 12888) = *(_DWORD *)(v5 + 4628);
    *(_DWORD *)(v5 + 13144) = *(_DWORD *)(v5 + 4884);
    *(_DWORD *)(v5 + 12372) = *(_DWORD *)(v5 + 4120);
    *(_DWORD *)(v5 + 12628) = *(_DWORD *)(v5 + 4376);
    *(_DWORD *)(v5 + 12884) = *(_DWORD *)(v5 + 4632);
    *(_DWORD *)(v5 + 13140) = *(_DWORD *)(v5 + 4888);
    *(_DWORD *)(v5 + 12368) = *(_DWORD *)(v5 + 4124);
    *(_DWORD *)(v5 + 12624) = *(_DWORD *)(v5 + 4380);
    *(_DWORD *)(v5 + 12880) = *(_DWORD *)(v5 + 4636);
    *(_DWORD *)(v5 + 13136) = *(_DWORD *)(v5 + 4892);
    *(_DWORD *)(v5 + 12396) = *(_DWORD *)(v5 + 4128);
    *(_DWORD *)(v5 + 12652) = *(_DWORD *)(v5 + 4384);
    *(_DWORD *)(v5 + 12908) = *(_DWORD *)(v5 + 4640);
    *(_DWORD *)(v5 + 13164) = *(_DWORD *)(v5 + 4896);
    *(_DWORD *)(v5 + 12392) = *(_DWORD *)(v5 + 4132);
    *(_DWORD *)(v5 + 12648) = *(_DWORD *)(v5 + 4388);
    *(_DWORD *)(v5 + 12904) = *(_DWORD *)(v5 + 4644);
    *(_DWORD *)(v5 + 13160) = *(_DWORD *)(v5 + 4900);
    *(_DWORD *)(v5 + 12388) = *(_DWORD *)(v5 + 4136);
    *(_DWORD *)(v5 + 12644) = *(_DWORD *)(v5 + 4392);
    *(_DWORD *)(v5 + 12900) = *(_DWORD *)(v5 + 4648);
    *(_DWORD *)(v5 + 13156) = *(_DWORD *)(v5 + 4904);
    *(_DWORD *)(v5 + 12384) = *(_DWORD *)(v5 + 4140);
    *(_DWORD *)(v5 + 12640) = *(_DWORD *)(v5 + 4396);
    *(_DWORD *)(v5 + 12896) = *(_DWORD *)(v5 + 4652);
    *(_DWORD *)(v5 + 13152) = *(_DWORD *)(v5 + 4908);
    v6 = 0;
    v7 = *(_DWORD *)v452;
    v8 = 13388;
    do
    {
      v9 = v7 + v6;
      v6 += 4;
      *(_DWORD *)(v7 + v8) = *(_DWORD *)(v9 + 5152);
      v10 = v7 + v8;
      v8 -= 4;
      *(_DWORD *)(v10 + 256) = *(_DWORD *)(v9 + 5408);
      *(_DWORD *)(v10 + 512) = *(_DWORD *)(v9 + 5664);
      *(_DWORD *)(v10 + 768) = *(_DWORD *)(v9 + 5920);
      *(_DWORD *)(v10 + 1024) = *(_DWORD *)(v9 + 6176);
      *(_DWORD *)(v10 + 1280) = *(_DWORD *)(v9 + 6432);
      *(_DWORD *)(v10 + 1536) = *(_DWORD *)(v9 + 6688);
      *(_DWORD *)(v10 + 1792) = *(_DWORD *)(v9 + 6944);
      *(_DWORD *)(v10 + 2048) = *(_DWORD *)(v9 + 7200);
      *(_DWORD *)(v10 + 2304) = *(_DWORD *)(v9 + 7456);
      *(_DWORD *)(v10 + 2560) = *(_DWORD *)(v9 + 7712);
      *(_DWORD *)(v10 + 2816) = *(_DWORD *)(v9 + 7968);
    }
    while ( v6 != 16 );
    v11 = v7 + 13404;
    v12 = v7 + 5136;
    v13 = 0;
      *(_DWORD *)v11 = *(_DWORD *)(v12 + v13);
      v14 = v12 + v13;
      v13 += 4;
      *(_DWORD *)(v11 + 256) = *(_DWORD *)(v14 + 256);
      *(_DWORD *)(v11 + 512) = *(_DWORD *)(v14 + 512);
      *(_DWORD *)(v11 + 768) = *(_DWORD *)(v14 + 768);
      *(_DWORD *)(v11 + 1024) = *(_DWORD *)(v14 + 1024);
      *(_DWORD *)(v11 + 1280) = *(_DWORD *)(v14 + 1280);
      *(_DWORD *)(v11 + 1536) = *(_DWORD *)(v14 + 1536);
      *(_DWORD *)(v11 + 1792) = *(_DWORD *)(v14 + 1792);
      *(_DWORD *)(v11 + 2048) = *(_DWORD *)(v14 + 2048);
      *(_DWORD *)(v11 + 2304) = *(_DWORD *)(v14 + 2304);
      *(_DWORD *)(v11 + 2560) = *(_DWORD *)(v14 + 2560);
      *(_DWORD *)(v11 + 2816) = *(_DWORD *)(v14 + 2816);
      v11 -= 4;
    while ( v13 != 16 );
    v15 = 0;
    v16 = 13420;
      v17 = v7 + v15;
      v15 += 4;
      *(_DWORD *)(v7 + v16) = *(_DWORD *)(v17 + 5120);
      v18 = v7 + v16;
      v16 -= 4;
      *(_DWORD *)(v18 + 256) = *(_DWORD *)(v17 + 5376);
      *(_DWORD *)(v18 + 512) = *(_DWORD *)(v17 + 5632);
      *(_DWORD *)(v18 + 768) = *(_DWORD *)(v17 + 5888);
      *(_DWORD *)(v18 + 1024) = *(_DWORD *)(v17 + 6144);
      *(_DWORD *)(v18 + 1280) = *(_DWORD *)(v17 + 6400);
      *(_DWORD *)(v18 + 1536) = *(_DWORD *)(v17 + 6656);
      *(_DWORD *)(v18 + 1792) = *(_DWORD *)(v17 + 6912);
      *(_DWORD *)(v18 + 2048) = *(_DWORD *)(v17 + 7168);
      *(_DWORD *)(v18 + 2304) = *(_DWORD *)(v17 + 7424);
      *(_DWORD *)(v18 + 2560) = *(_DWORD *)(v17 + 7680);
      *(_DWORD *)(v18 + 2816) = *(_DWORD *)(v17 + 7936);
    while ( v15 != 16 );
    v19 = v7 + 13436;
    v20 = v7 + 5168;
    v21 = 0;
      *(_DWORD *)v19 = *(_DWORD *)(v20 + v21);
      v22 = v20 + v21;
      v21 += 4;
      *(_DWORD *)(v19 + 256) = *(_DWORD *)(v22 + 256);
      *(_DWORD *)(v19 + 512) = *(_DWORD *)(v22 + 512);
      *(_DWORD *)(v19 + 768) = *(_DWORD *)(v22 + 768);
      *(_DWORD *)(v19 + 1024) = *(_DWORD *)(v22 + 1024);
      *(_DWORD *)(v19 + 1280) = *(_DWORD *)(v22 + 1280);
      *(_DWORD *)(v19 + 1536) = *(_DWORD *)(v22 + 1536);
      *(_DWORD *)(v19 + 1792) = *(_DWORD *)(v22 + 1792);
      *(_DWORD *)(v19 + 2048) = *(_DWORD *)(v22 + 2048);
      *(_DWORD *)(v19 + 2304) = *(_DWORD *)(v22 + 2304);
      *(_DWORD *)(v19 + 2560) = *(_DWORD *)(v22 + 2560);
      *(_DWORD *)(v19 + 2816) = *(_DWORD *)(v22 + 2816);
      v19 -= 4;
    while ( v21 != 16 );
    *(_DWORD *)(v7 + 12444) = *(_DWORD *)(v7 + 4272);
    *(_DWORD *)(v7 + 12700) = *(_DWORD *)(v7 + 4528);
    *(_DWORD *)(v7 + 12956) = *(_DWORD *)(v7 + 4784);
    *(_DWORD *)(v7 + 13212) = *(_DWORD *)(v7 + 5040);
    *(_DWORD *)(v7 + 12440) = *(_DWORD *)(v7 + 4276);
    *(_DWORD *)(v7 + 12696) = *(_DWORD *)(v7 + 4532);
    *(_DWORD *)(v7 + 12952) = *(_DWORD *)(v7 + 4788);
    *(_DWORD *)(v7 + 13208) = *(_DWORD *)(v7 + 5044);
    *(_DWORD *)(v7 + 12436) = *(_DWORD *)(v7 + 4280);
    *(_DWORD *)(v7 + 12692) = *(_DWORD *)(v7 + 4536);
    *(_DWORD *)(v7 + 12948) = *(_DWORD *)(v7 + 4792);
    *(_DWORD *)(v7 + 13204) = *(_DWORD *)(v7 + 5048);
    *(_DWORD *)(v7 + 12432) = *(_DWORD *)(v7 + 4284);
    *(_DWORD *)(v7 + 12688) = *(_DWORD *)(v7 + 4540);
    *(_DWORD *)(v7 + 12944) = *(_DWORD *)(v7 + 4796);
    *(_DWORD *)(v7 + 13200) = *(_DWORD *)(v7 + 5052);
    *(_DWORD *)(v7 + 12460) = *(_DWORD *)(v7 + 4288);
    *(_DWORD *)(v7 + 12716) = *(_DWORD *)(v7 + 4544);
    *(_DWORD *)(v7 + 12972) = *(_DWORD *)(v7 + 4800);
    *(_DWORD *)(v7 + 13228) = *(_DWORD *)(v7 + 5056);
    *(_DWORD *)(v7 + 12456) = *(_DWORD *)(v7 + 4292);
    *(_DWORD *)(v7 + 12712) = *(_DWORD *)(v7 + 4548);
    *(_DWORD *)(v7 + 12968) = *(_DWORD *)(v7 + 4804);
    *(_DWORD *)(v7 + 13224) = *(_DWORD *)(v7 + 5060);
    *(_DWORD *)(v7 + 12452) = *(_DWORD *)(v7 + 4296);
    *(_DWORD *)(v7 + 12708) = *(_DWORD *)(v7 + 4552);
    *(_DWORD *)(v7 + 12964) = *(_DWORD *)(v7 + 4808);
    *(_DWORD *)(v7 + 13220) = *(_DWORD *)(v7 + 5064);
    *(_DWORD *)(v7 + 12448) = *(_DWORD *)(v7 + 4300);
    *(_DWORD *)(v7 + 12704) = *(_DWORD *)(v7 + 4556);
    *(_DWORD *)(v7 + 12960) = *(_DWORD *)(v7 + 4812);
    *(_DWORD *)(v7 + 13216) = *(_DWORD *)(v7 + 5068);
    v23 = 0;
    v24 = 13452;
    v4 = *(_DWORD *)v452;
      v25 = v4 + v23;
      v26 = v4 + v24;
      v23 += 4;
      *(_DWORD *)(v4 + v24) = *(_DWORD *)(v25 + 5312);
      v24 -= 4;
      *(_DWORD *)(v26 + 256) = *(_DWORD *)(v25 + 5568);
      *(_DWORD *)(v26 + 512) = *(_DWORD *)(v25 + 5824);
      *(_DWORD *)(v26 + 768) = *(_DWORD *)(v25 + 6080);
      *(_DWORD *)(v26 + 1024) = *(_DWORD *)(v25 + 6336);
      *(_DWORD *)(v26 + 1280) = *(_DWORD *)(v25 + 6592);
      *(_DWORD *)(v26 + 1536) = *(_DWORD *)(v25 + 6848);
      *(_DWORD *)(v26 + 1792) = *(_DWORD *)(v25 + 7104);
      *(_DWORD *)(v26 + 2048) = *(_DWORD *)(v25 + 7360);
      *(_DWORD *)(v26 + 2304) = *(_DWORD *)(v25 + 7616);
      *(_DWORD *)(v26 + 2560) = *(_DWORD *)(v25 + 7872);
      *(_DWORD *)(v26 + 2816) = *(_DWORD *)(v25 + 8128);
    while ( v23 != 16 );
    v27 = 5296;
    v28 = 13468;
      v29 = v4 + v28;
      *(_DWORD *)(v4 + v28) = *(_DWORD *)(v4 + v27);
      v30 = v4 + v27;
      v27 += 4;
      v28 -= 4;
      *(_DWORD *)(v29 + 256) = *(_DWORD *)(v30 + 256);
      *(_DWORD *)(v29 + 512) = *(_DWORD *)(v30 + 512);
      *(_DWORD *)(v29 + 768) = *(_DWORD *)(v30 + 768);
      *(_DWORD *)(v29 + 1024) = *(_DWORD *)(v30 + 1024);
      *(_DWORD *)(v29 + 1280) = *(_DWORD *)(v30 + 1280);
      *(_DWORD *)(v29 + 1536) = *(_DWORD *)(v30 + 1536);
      *(_DWORD *)(v29 + 1792) = *(_DWORD *)(v30 + 1792);
      *(_DWORD *)(v29 + 2048) = *(_DWORD *)(v30 + 2048);
      *(_DWORD *)(v29 + 2304) = *(_DWORD *)(v30 + 2304);
      *(_DWORD *)(v29 + 2560) = *(_DWORD *)(v30 + 2560);
      *(_DWORD *)(v29 + 2816) = *(_DWORD *)(v30 + 2816);
    while ( v27 != 5312 );
    v31 = 0;
    v32 = 13484;
      v33 = v4 + v31;
      v34 = v4 + v32;
      v31 += 4;
      *(_DWORD *)(v4 + v32) = *(_DWORD *)(v33 + 5280);
      v32 -= 4;
      *(_DWORD *)(v34 + 256) = *(_DWORD *)(v33 + 5536);
      *(_DWORD *)(v34 + 512) = *(_DWORD *)(v33 + 5792);
      *(_DWORD *)(v34 + 768) = *(_DWORD *)(v33 + 6048);
      *(_DWORD *)(v34 + 1024) = *(_DWORD *)(v33 + 6304);
      *(_DWORD *)(v34 + 1280) = *(_DWORD *)(v33 + 6560);
      *(_DWORD *)(v34 + 1536) = *(_DWORD *)(v33 + 6816);
      *(_DWORD *)(v34 + 1792) = *(_DWORD *)(v33 + 7072);
      *(_DWORD *)(v34 + 2048) = *(_DWORD *)(v33 + 7328);
      *(_DWORD *)(v34 + 2304) = *(_DWORD *)(v33 + 7584);
      *(_DWORD *)(v34 + 2560) = *(_DWORD *)(v33 + 7840);
      *(_DWORD *)(v34 + 2816) = *(_DWORD *)(v33 + 8096);
    while ( v31 != 16 );
    v35 = 5328;
    v36 = 13500;
      v37 = v4 + v36;
      *(_DWORD *)(v4 + v36) = *(_DWORD *)(v4 + v35);
      v38 = v4 + v35;
      v35 += 4;
      v36 -= 4;
      *(_DWORD *)(v37 + 256) = *(_DWORD *)(v38 + 256);
      *(_DWORD *)(v37 + 512) = *(_DWORD *)(v38 + 512);
      *(_DWORD *)(v37 + 768) = *(_DWORD *)(v38 + 768);
      *(_DWORD *)(v37 + 1024) = *(_DWORD *)(v38 + 1024);
      *(_DWORD *)(v37 + 1280) = *(_DWORD *)(v38 + 1280);
      *(_DWORD *)(v37 + 1536) = *(_DWORD *)(v38 + 1536);
      *(_DWORD *)(v37 + 1792) = *(_DWORD *)(v38 + 1792);
      *(_DWORD *)(v37 + 2048) = *(_DWORD *)(v38 + 2048);
      *(_DWORD *)(v37 + 2304) = *(_DWORD *)(v38 + 2304);
      *(_DWORD *)(v37 + 2560) = *(_DWORD *)(v38 + 2560);
      *(_DWORD *)(v37 + 2816) = *(_DWORD *)(v38 + 2816);
    while ( v35 != 5344 );
    v3 = *(_DWORD *)(v452 + 4);
  }
  else if ( v3 - v4 != 0x4000 )
    if ( v3 != v4 )
      *(_DWORD *)(a2 + 4) = v4;
    return 0;
  v453 = v4;
  if ( v3 - v4 != 0x4000 )
  v39 = 0;
  _R1 = 0;
  do
    v41 = v4 + v39;
    v39 += 4;
    v42 = *(_DWORD *)(v41 + 2048);
    v43 = v42 | 0xFF000000;
    if ( v42 < 0x1A000000 )
      v43 = v42 & 0xFFFFFF;
    *(_DWORD *)(v41 + 2048) = v43;
    v44 = *(_DWORD *)(v41 + 2304);
    v45 = v44 | 0xFF000000;
    if ( v44 < 0x1A000000 )
      v45 = v44 & 0xFFFFFF;
    *(_DWORD *)(v41 + 2304) = v45;
    v46 = *(_DWORD *)(v41 + 2560);
    v47 = v46 | 0xFF000000;
    if ( v46 < 0x1A000000 )
      v47 = v46 & 0xFFFFFF;
    *(_DWORD *)(v41 + 2560) = v47;
    v48 = *(_DWORD *)(v41 + 2816);
    v49 = v48 | 0xFF000000;
    if ( v48 < 0x1A000000 )
      v49 = v48 & 0xFFFFFF;
    *(_DWORD *)(v41 + 2816) = v49;
    v50 = *(_DWORD *)(v41 + 3072);
    v51 = v50 | 0xFF000000;
    if ( v50 < 0x1A000000 )
      v51 = v50 & 0xFFFFFF;
    *(_DWORD *)(v41 + 3072) = v51;
    v52 = *(_DWORD *)(v41 + 3328);
    v53 = v52 | 0xFF000000;
    if ( v52 < 0x1A000000 )
      v53 = v52 & 0xFFFFFF;
    *(_DWORD *)(v41 + 3328) = v53;
    v54 = *(_DWORD *)(v41 + 3584);
    v55 = v54 | 0xFF000000;
    if ( v54 < 0x1A000000 )
      v55 = v54 & 0xFFFFFF;
    *(_DWORD *)(v41 + 3584) = v55;
    v56 = *(_DWORD *)(v41 + 3840);
    v57 = v56 | 0xFF000000;
    if ( v56 < 0x1A000000 )
      v57 = v56 & 0xFFFFFF;
    *(_DWORD *)(v41 + 3840) = v57;
      ++_R1;
  while ( v39 != 128 );
  if ( _R1 )
    __asm
      VMOV            S0, R1
      VLDR            S2, =0.0039062
    v62 = 1;
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.6
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF || v451 )
      goto LABEL_64;
    v63 = 0;
      v64 = v4 + v63;
      v63 += 4;
      *(_DWORD *)(v64 + 2048) |= 0xFF000000;
      *(_DWORD *)(v64 + 2304) |= 0xFF000000;
      *(_DWORD *)(v64 + 2560) |= 0xFF000000;
      *(_DWORD *)(v64 + 2816) |= 0xFF000000;
      *(_DWORD *)(v64 + 3072) |= 0xFF000000;
      *(_DWORD *)(v64 + 3328) |= 0xFF000000;
      *(_DWORD *)(v64 + 3584) |= 0xFF000000;
      *(_DWORD *)(v64 + 3840) |= 0xFF000000;
    while ( v63 != 128 );
  v62 = 0;
LABEL_64:
  v449 = v62;
  v65 = 0;
    v67 = v4 + v65;
    v65 += 4;
    v68 = *(_DWORD *)(v67 + 32);
    v69 = v68 | 0xFF000000;
    if ( v68 < 0x1A000000 )
      v69 = v68 & 0xFFFFFF;
    *(_DWORD *)(v67 + 32) = v69;
    v70 = *(_DWORD *)(v67 + 288);
    v71 = v70 | 0xFF000000;
    if ( v70 < 0x1A000000 )
      v71 = v70 & 0xFFFFFF;
    *(_DWORD *)(v67 + 288) = v71;
    v72 = *(_DWORD *)(v67 + 544);
    v73 = v72 | 0xFF000000;
    if ( v72 < 0x1A000000 )
      v73 = v72 & 0xFFFFFF;
    *(_DWORD *)(v67 + 544) = v73;
    v74 = *(_DWORD *)(v67 + 800);
    v75 = v74 | 0xFF000000;
    if ( v74 < 0x1A000000 )
      v75 = v74 & 0xFFFFFF;
    *(_DWORD *)(v67 + 800) = v75;
    v76 = *(_DWORD *)(v67 + 1056);
    v77 = v76 | 0xFF000000;
    if ( v76 < 0x1A000000 )
      v77 = v76 & 0xFFFFFF;
    *(_DWORD *)(v67 + 1056) = v77;
    v78 = *(_DWORD *)(v67 + 1312);
    v79 = v78 | 0xFF000000;
    if ( v78 < 0x1A000000 )
      v79 = v78 & 0xFFFFFF;
    *(_DWORD *)(v67 + 1312) = v79;
    v80 = *(_DWORD *)(v67 + 1568);
    v81 = v80 | 0xFF000000;
    if ( v80 < 0x1A000000 )
      v81 = v80 & 0xFFFFFF;
    *(_DWORD *)(v67 + 1568) = v81;
    v82 = *(_DWORD *)(v67 + 1824);
    v83 = v82 | 0xFF000000;
    if ( v82 < 0x1A000000 )
      v83 = v82 & 0xFFFFFF;
    *(_DWORD *)(v67 + 1824) = v83;
  while ( v65 != 64 );
      VLDR            S2, =0.0078125
      VMOV.F32        S4, #1.0
    v84 = 1;
      VCMPE.F32       S0, S4
      goto LABEL_104;
    v85 = 0;
      v86 = v4 + v85;
      v85 += 4;
      *(_DWORD *)(v86 + 32) |= 0xFF000000;
      *(_DWORD *)(v86 + 288) |= 0xFF000000;
      *(_DWORD *)(v86 + 544) |= 0xFF000000;
      *(_DWORD *)(v86 + 800) |= 0xFF000000;
      *(_DWORD *)(v86 + 1056) |= 0xFF000000;
      *(_DWORD *)(v86 + 1312) |= 0xFF000000;
      *(_DWORD *)(v86 + 1568) |= 0xFF000000;
      *(_DWORD *)(v86 + 1824) |= 0xFF000000;
    while ( v85 != 64 );
  v84 = 0;
LABEL_104:
  v87 = 0;
  _R12 = 0;
  v447 = v84;
    v89 = v4 + v87;
    v460 = v87;
    v90 = *(_DWORD *)(v4 + v87 + 5120);
    v457 = v90;
    v91 = v90 | 0xFF000000;
    if ( v90 < 0x1A000000 )
      v91 = v90 & 0xFFFFFF;
    *(_DWORD *)(v89 + 5120) = v91;
    v92 = *(_DWORD *)(v89 + 5376);
    v455 = v92;
    v93 = v92 | 0xFF000000;
    if ( v92 < 0x1A000000 )
      v93 = v92 & 0xFFFFFF;
    *(_DWORD *)(v89 + 5376) = v93;
    v94 = *(_DWORD *)(v89 + 5632);
    v95 = v94 | 0xFF000000;
    if ( v94 < 0x1A000000 )
      v95 = v94 & 0xFFFFFF;
    *(_DWORD *)(v89 + 5632) = v95;
    v96 = *(_DWORD *)(v89 + 5888);
    v97 = v96 | 0xFF000000;
    if ( v96 < 0x1A000000 )
      v97 = v96 & 0xFFFFFF;
    *(_DWORD *)(v89 + 5888) = v97;
    v98 = *(_DWORD *)(v89 + 6144);
    v99 = v98 | 0xFF000000;
    if ( v98 < 0x1A000000 )
      v99 = v98 & 0xFFFFFF;
    *(_DWORD *)(v89 + 6144) = v99;
    v100 = *(_DWORD *)(v89 + 6400);
    v101 = v100 | 0xFF000000;
    if ( v100 < 0x1A000000 )
      v101 = v100 & 0xFFFFFF;
    *(_DWORD *)(v89 + 6400) = v101;
    v102 = *(_DWORD *)(v89 + 6656);
    v103 = v102 | 0xFF000000;
    if ( v102 < 0x1A000000 )
      v103 = v102 & 0xFFFFFF;
    *(_DWORD *)(v89 + 6656) = v103;
    v104 = *(_DWORD *)(v89 + 6912);
    v105 = v104 | 0xFF000000;
    if ( v104 < 0x1A000000 )
      v105 = v104 & 0xFFFFFF;
    *(_DWORD *)(v89 + 6912) = v105;
    v106 = *(_DWORD *)(v89 + 7168);
    v107 = v106 | 0xFF000000;
    if ( v106 < 0x1A000000 )
      v107 = v106 & 0xFFFFFF;
    *(_DWORD *)(v89 + 7168) = v107;
    v108 = *(_DWORD *)(v89 + 7424);
    v109 = v108 | 0xFF000000;
    if ( v108 < 0x1A000000 )
      v109 = v108 & 0xFFFFFF;
    *(_DWORD *)(v89 + 7424) = v109;
    v110 = *(_DWORD *)(v89 + 7680);
    v111 = v110 | 0xFF000000;
    if ( v110 < 0x1A000000 )
      v111 = v110 & 0xFFFFFF;
    *(_DWORD *)(v89 + 7680) = v111;
    v112 = *(_DWORD *)(v89 + 7936);
    v113 = v112 | 0xFF000000;
    if ( v112 < 0x1A000000 )
      v113 = v112 & 0xFFFFFF;
    *(_DWORD *)(v89 + 7936) = v113;
    v87 = v460 + 4;
    if ( v457 < 0x1A000000 )
      ++_R12;
    if ( v455 < 0x1A000000 )
    _CF = v108 >= 0x1A000000;
    v4 = v453;
    if ( !_CF )
  while ( v87 != 224 );
  if ( _R12 )
      VMOV            S0, R12
      VLDR            S2, =0.0014881
    v114 = 1;
      goto LABEL_160;
    v115 = 0;
      v116 = v453 + v115;
      v115 += 4;
      *(_DWORD *)(v116 + 5120) |= 0xFF000000;
      *(_DWORD *)(v116 + 5376) |= 0xFF000000;
      *(_DWORD *)(v116 + 5632) |= 0xFF000000;
      *(_DWORD *)(v116 + 5888) |= 0xFF000000;
      *(_DWORD *)(v116 + 6144) |= 0xFF000000;
      *(_DWORD *)(v116 + 6400) |= 0xFF000000;
      *(_DWORD *)(v116 + 6656) |= 0xFF000000;
      *(_DWORD *)(v116 + 6912) |= 0xFF000000;
      *(_DWORD *)(v116 + 7168) |= 0xFF000000;
      *(_DWORD *)(v116 + 7424) |= 0xFF000000;
      *(_DWORD *)(v116 + 7680) |= 0xFF000000;
      *(_DWORD *)(v116 + 7936) |= 0xFF000000;
    while ( v115 != 224 );
  v114 = 0;
LABEL_160:
  v117 = 0;
  _R2 = 0;
  v119 = *(_DWORD *)v452;
  v120 = *(_DWORD *)v452 + 4112;
    v121 = *(_DWORD *)(v120 + v117);
    v122 = v121 | 0xFF000000;
    if ( v121 < 0x1A000000 )
      v122 = v121 & 0xFFFFFF;
    *(_DWORD *)(v120 + v117) = v122;
    v123 = v120 + v117;
    v117 += 4;
    v124 = *(_DWORD *)(v123 + 256);
    v125 = v124 | 0xFF000000;
    if ( v124 < 0x1A000000 )
      v125 = v124 & 0xFFFFFF;
    *(_DWORD *)(v123 + 256) = v125;
    v126 = *(_DWORD *)(v123 + 512);
    v127 = v126 | 0xFF000000;
    if ( v126 < 0x1A000000 )
      v127 = v126 & 0xFFFFFF;
    *(_DWORD *)(v123 + 512) = v127;
    v128 = *(_DWORD *)(v123 + 768);
    v129 = v128 | 0xFF000000;
    if ( v128 < 0x1A000000 )
      v129 = v128 & 0xFFFFFF;
    *(_DWORD *)(v123 + 768) = v129;
      ++_R2;
  while ( v117 != 32 );
  if ( _R2 )
      VMOV            S0, R2
      VLDR            S2, =0.03125
    v130 = 1;
      goto LABEL_183;
    *(_DWORD *)(v119 + 4112) |= 0xFF000000;
    *(_DWORD *)(v119 + 4368) |= 0xFF000000;
    *(_DWORD *)(v119 + 4624) |= 0xFF000000;
    *(_DWORD *)(v119 + 4880) |= 0xFF000000;
    *(_DWORD *)(v119 + 4116) |= 0xFF000000;
    *(_DWORD *)(v119 + 4372) |= 0xFF000000;
    *(_DWORD *)(v119 + 4628) |= 0xFF000000;
    *(_DWORD *)(v119 + 4884) |= 0xFF000000;
    *(_DWORD *)(v119 + 4120) |= 0xFF000000;
    *(_DWORD *)(v119 + 4376) |= 0xFF000000;
    *(_DWORD *)(v119 + 4632) |= 0xFF000000;
    *(_DWORD *)(v119 + 4888) |= 0xFF000000;
    *(_DWORD *)(v119 + 4124) |= 0xFF000000;
    *(_DWORD *)(v119 + 4380) |= 0xFF000000;
    *(_DWORD *)(v119 + 4636) |= 0xFF000000;
    *(_DWORD *)(v119 + 4892) |= 0xFF000000;
    *(_DWORD *)(v119 + 4128) |= 0xFF000000;
    *(_DWORD *)(v119 + 4384) |= 0xFF000000;
    *(_DWORD *)(v119 + 4640) |= 0xFF000000;
    *(_DWORD *)(v119 + 4896) |= 0xFF000000;
    *(_DWORD *)(v119 + 4132) |= 0xFF000000;
    *(_DWORD *)(v119 + 4388) |= 0xFF000000;
    *(_DWORD *)(v119 + 4644) |= 0xFF000000;
    *(_DWORD *)(v119 + 4900) |= 0xFF000000;
    *(_DWORD *)(v119 + 4136) |= 0xFF000000;
    *(_DWORD *)(v119 + 4392) |= 0xFF000000;
    *(_DWORD *)(v119 + 4648) |= 0xFF000000;
    *(_DWORD *)(v119 + 4904) |= 0xFF000000;
    *(_DWORD *)(v119 + 4140) |= 0xFF000000;
    *(_DWORD *)(v119 + 4396) |= 0xFF000000;
    *(_DWORD *)(v119 + 4652) |= 0xFF000000;
    *(_DWORD *)(v119 + 4908) |= 0xFF000000;
    v119 = *(_DWORD *)v452;
  v130 = 0;
LABEL_183:
  v131 = v449 | v447 | v114;
  v132 = v119 + 4176;
  v133 = 0;
    v135 = *(_DWORD *)(v132 + v133);
    v136 = v135 | 0xFF000000;
    if ( v135 < 0x1A000000 )
      v136 = v135 & 0xFFFFFF;
    *(_DWORD *)(v132 + v133) = v136;
    v137 = v132 + v133;
    v133 += 4;
    v138 = *(_DWORD *)(v137 + 256);
    v139 = v138 | 0xFF000000;
    if ( v138 < 0x1A000000 )
      v139 = v138 & 0xFFFFFF;
    *(_DWORD *)(v137 + 256) = v139;
    v140 = *(_DWORD *)(v137 + 512);
    v141 = v140 | 0xFF000000;
    if ( v140 < 0x1A000000 )
      v141 = v140 & 0xFFFFFF;
    *(_DWORD *)(v137 + 512) = v141;
    v142 = *(_DWORD *)(v137 + 768);
    v143 = v142 | 0xFF000000;
    if ( v142 < 0x1A000000 )
      v143 = v142 & 0xFFFFFF;
    *(_DWORD *)(v137 + 768) = v143;
  while ( v133 != 64 );
      VLDR            S2, =0.015625
    v144 = 1;
      goto LABEL_207;
    v145 = v119 + 4176;
    v146 = 0;
      *(_DWORD *)(v145 + v146) |= 0xFF000000;
      v147 = v145 + v146;
      v146 += 4;
      *(_DWORD *)(v147 + 256) |= 0xFF000000;
      *(_DWORD *)(v147 + 512) |= 0xFF000000;
      *(_DWORD *)(v147 + 768) |= 0xFF000000;
    while ( v146 != 64 );
  v144 = 0;
LABEL_207:
  v148 = v131 | v130;
  v149 = v119 + 4272;
  v150 = 0;
    v152 = *(_DWORD *)(v149 + v150);
    v153 = v152 | 0xFF000000;
    if ( v152 < 0x1A000000 )
      v153 = v152 & 0xFFFFFF;
    *(_DWORD *)(v149 + v150) = v153;
    v154 = v149 + v150;
    v150 += 4;
    v155 = *(_DWORD *)(v154 + 256);
    v156 = v155 | 0xFF000000;
    if ( v155 < 0x1A000000 )
      v156 = v155 & 0xFFFFFF;
    *(_DWORD *)(v154 + 256) = v156;
    v157 = *(_DWORD *)(v154 + 512);
    v158 = v157 | 0xFF000000;
    if ( v157 < 0x1A000000 )
      v158 = v157 & 0xFFFFFF;
    *(_DWORD *)(v154 + 512) = v158;
    v159 = *(_DWORD *)(v154 + 768);
    v160 = v159 | 0xFF000000;
    if ( v159 < 0x1A000000 )
      v160 = v159 & 0xFFFFFF;
    *(_DWORD *)(v154 + 768) = v160;
  while ( v150 != 32 );
      v161 = 1;
      goto LABEL_232;
    *(_DWORD *)(v119 + 4272) |= 0xFF000000;
    *(_DWORD *)(v119 + 4528) |= 0xFF000000;
    *(_DWORD *)(v119 + 4784) |= 0xFF000000;
    *(_DWORD *)(v119 + 5040) |= 0xFF000000;
    *(_DWORD *)(v119 + 4276) |= 0xFF000000;
    *(_DWORD *)(v119 + 4532) |= 0xFF000000;
    *(_DWORD *)(v119 + 4788) |= 0xFF000000;
    *(_DWORD *)(v119 + 5044) |= 0xFF000000;
    *(_DWORD *)(v119 + 4280) |= 0xFF000000;
    *(_DWORD *)(v119 + 4536) |= 0xFF000000;
    *(_DWORD *)(v119 + 4792) |= 0xFF000000;
    *(_DWORD *)(v119 + 5048) |= 0xFF000000;
    *(_DWORD *)(v119 + 4284) |= 0xFF000000;
    *(_DWORD *)(v119 + 4540) |= 0xFF000000;
    *(_DWORD *)(v119 + 4796) |= 0xFF000000;
    *(_DWORD *)(v119 + 5052) |= 0xFF000000;
    *(_DWORD *)(v119 + 4288) |= 0xFF000000;
    *(_DWORD *)(v119 + 4544) |= 0xFF000000;
    *(_DWORD *)(v119 + 4800) |= 0xFF000000;
    *(_DWORD *)(v119 + 5056) |= 0xFF000000;
    *(_DWORD *)(v119 + 4292) |= 0xFF000000;
    *(_DWORD *)(v119 + 4548) |= 0xFF000000;
    *(_DWORD *)(v119 + 4804) |= 0xFF000000;
    *(_DWORD *)(v119 + 5060) |= 0xFF000000;
    *(_DWORD *)(v119 + 4296) |= 0xFF000000;
    *(_DWORD *)(v119 + 4552) |= 0xFF000000;
    *(_DWORD *)(v119 + 4808) |= 0xFF000000;
    *(_DWORD *)(v119 + 5064) |= 0xFF000000;
    *(_DWORD *)(v119 + 4300) |= 0xFF000000;
    *(_DWORD *)(v119 + 4556) |= 0xFF000000;
    *(_DWORD *)(v119 + 4812) |= 0xFF000000;
    *(_DWORD *)(v119 + 5068) |= 0xFF000000;
  v161 = 0;
LABEL_232:
  v448 = v161;
  v450 = v148 | v144;
  v163 = 0;
  _R9 = 0;
  v454 = v119;
    v165 = v119 + v163;
    v461 = v163;
    v166 = *(_DWORD *)(v119 + v163 + 13376);
    v458 = v166;
    v167 = v166 | 0xFF000000;
    if ( v166 < 0x1A000000 )
      v167 = v166 & 0xFFFFFF;
    *(_DWORD *)(v165 + 13376) = v167;
    v168 = *(_DWORD *)(v165 + 13632);
    v456 = v168;
    v169 = v168 | 0xFF000000;
    if ( v168 < 0x1A000000 )
      v169 = v168 & 0xFFFFFF;
    *(_DWORD *)(v165 + 13632) = v169;
    v170 = *(_DWORD *)(v165 + 13888);
    v171 = v170 | 0xFF000000;
    if ( v170 < 0x1A000000 )
      v171 = v170 & 0xFFFFFF;
    *(_DWORD *)(v165 + 13888) = v171;
    v172 = *(_DWORD *)(v165 + 14144);
    v173 = v172 | 0xFF000000;
    if ( v172 < 0x1A000000 )
      v173 = v172 & 0xFFFFFF;
    *(_DWORD *)(v165 + 14144) = v173;
    v174 = *(_DWORD *)(v165 + 14400);
    v175 = v174 | 0xFF000000;
    if ( v174 < 0x1A000000 )
      v175 = v174 & 0xFFFFFF;
    *(_DWORD *)(v165 + 14400) = v175;
    v176 = *(_DWORD *)(v165 + 14656);
    v177 = v176 | 0xFF000000;
    if ( v176 < 0x1A000000 )
      v177 = v176 & 0xFFFFFF;
    *(_DWORD *)(v165 + 14656) = v177;
    v178 = *(_DWORD *)(v165 + 14912);
    v179 = v178 | 0xFF000000;
    if ( v178 < 0x1A000000 )
      v179 = v178 & 0xFFFFFF;
    *(_DWORD *)(v165 + 14912) = v179;
    v180 = *(_DWORD *)(v165 + 15168);
    v181 = v180 | 0xFF000000;
    if ( v180 < 0x1A000000 )
      v181 = v180 & 0xFFFFFF;
    *(_DWORD *)(v165 + 15168) = v181;
    v182 = *(_DWORD *)(v165 + 15424);
    v183 = v182 | 0xFF000000;
    if ( v182 < 0x1A000000 )
      v183 = v182 & 0xFFFFFF;
    *(_DWORD *)(v165 + 15424) = v183;
    v184 = *(_DWORD *)(v165 + 15680);
    v185 = v184 | 0xFF000000;
    if ( v184 < 0x1A000000 )
      v185 = v184 & 0xFFFFFF;
    *(_DWORD *)(v165 + 15680) = v185;
    v186 = *(_DWORD *)(v165 + 15936);
    v187 = v186 | 0xFF000000;
    if ( v186 < 0x1A000000 )
      v187 = v186 & 0xFFFFFF;
    *(_DWORD *)(v165 + 15936) = v187;
    v188 = *(_DWORD *)(v165 + 16192);
    v189 = v188 | 0xFF000000;
    if ( v188 < 0x1A000000 )
      v189 = v188 & 0xFFFFFF;
    *(_DWORD *)(v165 + 16192) = v189;
    v163 = v461 + 4;
    if ( v458 < 0x1A000000 )
      ++_R9;
    if ( v456 < 0x1A000000 )
    _CF = v186 >= 0x1A000000;
    v119 = v454;
  while ( v163 != 128 );
  if ( _R9 )
      VMOV            S0, R9
      VLDR            S2, =0.0026042
    v190 = 1;
      goto LABEL_288;
    v191 = 0;
      v192 = v454 + v191;
      v191 += 4;
      *(_DWORD *)(v192 + 13376) |= 0xFF000000;
      *(_DWORD *)(v192 + 13632) |= 0xFF000000;
      *(_DWORD *)(v192 + 13888) |= 0xFF000000;
      *(_DWORD *)(v192 + 14144) |= 0xFF000000;
      *(_DWORD *)(v192 + 14400) |= 0xFF000000;
      *(_DWORD *)(v192 + 14656) |= 0xFF000000;
      *(_DWORD *)(v192 + 14912) |= 0xFF000000;
      *(_DWORD *)(v192 + 15168) |= 0xFF000000;
      *(_DWORD *)(v192 + 15424) |= 0xFF000000;
      *(_DWORD *)(v192 + 15680) |= 0xFF000000;
      *(_DWORD *)(v192 + 15936) |= 0xFF000000;
      *(_DWORD *)(v192 + 16192) |= 0xFF000000;
    while ( v191 != 128 );
  v190 = 0;
LABEL_288:
  v193 = 0;
  v194 = *(_DWORD *)v452;
  v195 = *(_DWORD *)v452 + 12368;
  _R0 = 0;
    v197 = *(_DWORD *)(v195 + v193);
    v198 = v197 | 0xFF000000;
    if ( v197 < 0x1A000000 )
      v198 = v197 & 0xFFFFFF;
    *(_DWORD *)(v195 + v193) = v198;
    v193 += 256;
      ++_R0;
  while ( v193 != 4096 );
  v199 = 0;
  v200 = v194 + 12372;
    v201 = *(_DWORD *)(v200 + v199);
    v202 = v201 | 0xFF000000;
    if ( v201 < 0x1A000000 )
      v202 = v201 & 0xFFFFFF;
    *(_DWORD *)(v200 + v199) = v202;
    v199 += 256;
  while ( v199 != 4096 );
  v203 = 0;
  v204 = v194 + 12376;
    v205 = *(_DWORD *)(v204 + v203);
    v206 = v205 | 0xFF000000;
    if ( v205 < 0x1A000000 )
      v206 = v205 & 0xFFFFFF;
    *(_DWORD *)(v204 + v203) = v206;
    v203 += 256;
  while ( v203 != 4096 );
  v207 = 0;
  v208 = v194 + 12380;
    v209 = *(_DWORD *)(v208 + v207);
    v210 = v209 | 0xFF000000;
    if ( v209 < 0x1A000000 )
      v210 = v209 & 0xFFFFFF;
    *(_DWORD *)(v208 + v207) = v210;
    v207 += 256;
  while ( v207 != 4096 );
  v211 = 0;
  v212 = v194 + 12384;
    v213 = *(_DWORD *)(v212 + v211);
    v214 = v213 | 0xFF000000;
    if ( v213 < 0x1A000000 )
      v214 = v213 & 0xFFFFFF;
    *(_DWORD *)(v212 + v211) = v214;
    v211 += 256;
  while ( v211 != 4096 );
  v215 = 0;
  v216 = v194 + 12388;
    v217 = *(_DWORD *)(v216 + v215);
    v218 = v217 | 0xFF000000;
    if ( v217 < 0x1A000000 )
      v218 = v217 & 0xFFFFFF;
    *(_DWORD *)(v216 + v215) = v218;
    v215 += 256;
  while ( v215 != 4096 );
  v219 = 0;
  v220 = v194 + 12392;
    v221 = *(_DWORD *)(v220 + v219);
    v222 = v221 | 0xFF000000;
    if ( v221 < 0x1A000000 )
      v222 = v221 & 0xFFFFFF;
    *(_DWORD *)(v220 + v219) = v222;
    v219 += 256;
  while ( v219 != 4096 );
  v223 = 0;
  v224 = v194 + 12396;
    v225 = *(_DWORD *)(v224 + v223);
    v226 = v225 | 0xFF000000;
    if ( v225 < 0x1A000000 )
      v226 = v225 & 0xFFFFFF;
    *(_DWORD *)(v224 + v223) = v226;
    v223 += 256;
  while ( v223 != 4096 );
  if ( _R0 )
      VMOV            S0, R0
    v227 = 1;
      goto LABEL_342;
    v228 = 0;
    v229 = v194 + 12368;
      *(_DWORD *)(v229 + v228) |= 0xFF000000;
      v230 = v229 + v228;
      v228 += 4;
      *(_DWORD *)(v230 + 256) |= 0xFF000000;
      *(_DWORD *)(v230 + 512) |= 0xFF000000;
      *(_DWORD *)(v230 + 768) |= 0xFF000000;
      *(_DWORD *)(v230 + 1024) |= 0xFF000000;
      *(_DWORD *)(v230 + 1280) |= 0xFF000000;
      *(_DWORD *)(v230 + 1536) |= 0xFF000000;
      *(_DWORD *)(v230 + 1792) |= 0xFF000000;
      *(_DWORD *)(v230 + 2048) |= 0xFF000000;
      *(_DWORD *)(v230 + 2304) |= 0xFF000000;
      *(_DWORD *)(v230 + 2560) |= 0xFF000000;
      *(_DWORD *)(v230 + 2816) |= 0xFF000000;
      *(_DWORD *)(v230 + 3072) |= 0xFF000000;
      *(_DWORD *)(v230 + 3328) |= 0xFF000000;
      *(_DWORD *)(v230 + 3584) |= 0xFF000000;
      *(_DWORD *)(v230 + 3840) |= 0xFF000000;
    while ( v228 != 32 );
  v227 = 0;
LABEL_342:
  v231 = v190 | v450 | v448;
  v232 = v194 + 12432;
  v233 = 0;
  _R3 = 0;
    v235 = *(_DWORD *)(v232 + v233);
    v236 = v235 | 0xFF000000;
    if ( v235 < 0x1A000000 )
      v236 = v235 & 0xFFFFFF;
    *(_DWORD *)(v232 + v233) = v236;
    v233 += 256;
      ++_R3;
  while ( v233 != 4096 );
  v237 = 0;
  v238 = v194 + 12436;
    v239 = *(_DWORD *)(v238 + v237);
    v240 = v239 | 0xFF000000;
    if ( v239 < 0x1A000000 )
      v240 = v239 & 0xFFFFFF;
    *(_DWORD *)(v238 + v237) = v240;
    v237 += 256;
  while ( v237 != 4096 );
  v241 = 0;
  v242 = v194 + 12440;
    v243 = *(_DWORD *)(v242 + v241);
    v244 = v243 | 0xFF000000;
    if ( v243 < 0x1A000000 )
      v244 = v243 & 0xFFFFFF;
    *(_DWORD *)(v242 + v241) = v244;
    v241 += 256;
  while ( v241 != 4096 );
  v245 = 0;
  v246 = v194 + 12444;
    v247 = *(_DWORD *)(v246 + v245);
    v248 = v247 | 0xFF000000;
    if ( v247 < 0x1A000000 )
      v248 = v247 & 0xFFFFFF;
    *(_DWORD *)(v246 + v245) = v248;
    v245 += 256;
  while ( v245 != 4096 );
  v249 = 0;
  v250 = v194 + 12448;
    v251 = *(_DWORD *)(v250 + v249);
    v252 = v251 | 0xFF000000;
    if ( v251 < 0x1A000000 )
      v252 = v251 & 0xFFFFFF;
    *(_DWORD *)(v250 + v249) = v252;
    v249 += 256;
  while ( v249 != 4096 );
  v253 = 0;
  v254 = v194 + 12452;
    v255 = *(_DWORD *)(v254 + v253);
    v256 = v255 | 0xFF000000;
    if ( v255 < 0x1A000000 )
      v256 = v255 & 0xFFFFFF;
    *(_DWORD *)(v254 + v253) = v256;
    v253 += 256;
  while ( v253 != 4096 );
  v257 = 0;
  v258 = v194 + 12456;
    v259 = *(_DWORD *)(v258 + v257);
    v260 = v259 | 0xFF000000;
    if ( v259 < 0x1A000000 )
      v260 = v259 & 0xFFFFFF;
    *(_DWORD *)(v258 + v257) = v260;
    v257 += 256;
  while ( v257 != 4096 );
  v261 = 0;
  v262 = v194 + 12460;
    v263 = *(_DWORD *)(v262 + v261);
    v264 = v263 | 0xFF000000;
    if ( v263 < 0x1A000000 )
      v264 = v263 & 0xFFFFFF;
    *(_DWORD *)(v262 + v261) = v264;
    v261 += 256;
  while ( v261 != 4096 );
  if ( !_R3 )
    goto LABEL_395;
  __asm
    VMOV            S0, R3
    VLDR            S2, =0.0078125
    VMOV.F32        S4, #1.0
  v265 = 1;
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !v451 )
    v266 = 0;
    v267 = v194 + 12432;
      *(_DWORD *)(v267 + v266) |= 0xFF000000;
      v268 = v267 + v266;
      v266 += 4;
      *(_DWORD *)(v268 + 256) |= 0xFF000000;
      *(_DWORD *)(v268 + 512) |= 0xFF000000;
      *(_DWORD *)(v268 + 768) |= 0xFF000000;
      *(_DWORD *)(v268 + 1024) |= 0xFF000000;
      *(_DWORD *)(v268 + 1280) |= 0xFF000000;
      *(_DWORD *)(v268 + 1536) |= 0xFF000000;
      *(_DWORD *)(v268 + 1792) |= 0xFF000000;
      *(_DWORD *)(v268 + 2048) |= 0xFF000000;
      *(_DWORD *)(v268 + 2304) |= 0xFF000000;
      *(_DWORD *)(v268 + 2560) |= 0xFF000000;
      *(_DWORD *)(v268 + 2816) |= 0xFF000000;
      *(_DWORD *)(v268 + 3072) |= 0xFF000000;
      *(_DWORD *)(v268 + 3328) |= 0xFF000000;
      *(_DWORD *)(v268 + 3584) |= 0xFF000000;
      *(_DWORD *)(v268 + 3840) |= 0xFF000000;
    while ( v266 != 32 );
LABEL_395:
    v265 = 0;
  v269 = v227 | v231;
  v270 = v194 + 128;
  v271 = 32;
    v272 = 32;
    v273 = (unsigned int *)v270;
      v274 = *v273 | 0xFF000000;
      if ( *v273 < 0x1A000000 )
        v274 = *v273 & 0xFFFFFF;
      --v272;
      *v273 = v274;
      v273 += 64;
    while ( v272 );
    ++v271;
    v270 += 4;
  while ( v271 != 64 );
  v459 = v269 | v265;
  v275 = 0;
    v276 = v194;
    v277 = v194 + v275;
    v278 = *(_DWORD *)(v277 + 0x2000);
    v275 += 4;
    v279 = v278 | 0xFF000000;
    if ( v278 < 0x1A000000 )
      v279 = v278 & 0xFFFFFF;
    *(_DWORD *)(v277 + 0x2000) = v279;
    v280 = *(_DWORD *)(v277 + 8448);
    v281 = v280 | 0xFF000000;
    if ( v280 < 0x1A000000 )
      v281 = v280 & 0xFFFFFF;
    *(_DWORD *)(v277 + 8448) = v281;
    v282 = *(_DWORD *)(v277 + 8704);
    v283 = v282 | 0xFF000000;
    if ( v282 < 0x1A000000 )
      v283 = v282 & 0xFFFFFF;
    *(_DWORD *)(v277 + 8704) = v283;
    v284 = *(_DWORD *)(v277 + 8960);
    v285 = v284 | 0xFF000000;
    if ( v284 < 0x1A000000 )
      v285 = v284 & 0xFFFFFF;
    *(_DWORD *)(v277 + 8960) = v285;
    v286 = *(_DWORD *)(v277 + 9216);
    v287 = v286 | 0xFF000000;
    if ( v286 < 0x1A000000 )
      v287 = v286 & 0xFFFFFF;
    *(_DWORD *)(v277 + 9216) = v287;
    v288 = *(_DWORD *)(v277 + 9472);
    v289 = v288 | 0xFF000000;
    if ( v288 < 0x1A000000 )
      v289 = v288 & 0xFFFFFF;
    *(_DWORD *)(v277 + 9472) = v289;
    v290 = *(_DWORD *)(v277 + 9728);
    v291 = v290 | 0xFF000000;
    if ( v290 < 0x1A000000 )
      v291 = v290 & 0xFFFFFF;
    *(_DWORD *)(v277 + 9728) = v291;
    v292 = *(_DWORD *)(v277 + 9984);
    v293 = v292 | 0xFF000000;
    if ( v292 < 0x1A000000 )
      v293 = v292 & 0xFFFFFF;
    *(_DWORD *)(v277 + 9984) = v293;
    v294 = *(_DWORD *)(v277 + 10240);
    v295 = v294 | 0xFF000000;
    if ( v294 < 0x1A000000 )
      v295 = v294 & 0xFFFFFF;
    *(_DWORD *)(v277 + 10240) = v295;
    v296 = *(_DWORD *)(v277 + 10496);
    v297 = v296 | 0xFF000000;
    if ( v296 < 0x1A000000 )
      v297 = v296 & 0xFFFFFF;
    *(_DWORD *)(v277 + 10496) = v297;
    v298 = *(_DWORD *)(v277 + 10752);
    v299 = v298 | 0xFF000000;
    if ( v298 < 0x1A000000 )
      v299 = v298 & 0xFFFFFF;
    *(_DWORD *)(v277 + 10752) = v299;
    v300 = *(_DWORD *)(v277 + 11008);
    v301 = v300 | 0xFF000000;
    if ( v300 < 0x1A000000 )
      v301 = v300 & 0xFFFFFF;
    *(_DWORD *)(v277 + 11008) = v301;
    v302 = *(_DWORD *)(v277 + 11264);
    v303 = v302 | 0xFF000000;
    if ( v302 < 0x1A000000 )
      v303 = v302 & 0xFFFFFF;
    *(_DWORD *)(v277 + 11264) = v303;
    v304 = *(_DWORD *)(v277 + 11520);
    v305 = v304 | 0xFF000000;
    if ( v304 < 0x1A000000 )
      v305 = v304 & 0xFFFFFF;
    *(_DWORD *)(v277 + 11520) = v305;
    v306 = *(_DWORD *)(v277 + 11776);
    v307 = v306 | 0xFF000000;
    if ( v306 < 0x1A000000 )
      v307 = v306 & 0xFFFFFF;
    *(_DWORD *)(v277 + 11776) = v307;
    v308 = *(_DWORD *)(v277 + 12032);
    v309 = v308 | 0xFF000000;
    if ( v308 < 0x1A000000 )
      v309 = v308 & 0xFFFFFF;
    *(_DWORD *)(v277 + 12032) = v309;
    v194 = v276;
  while ( v275 != 64 );
  v310 = 0;
  v462 = *(_DWORD *)v452;
    v311 = v462 + v310;
    v310 += 4;
    v312 = *(_DWORD *)(v311 + 8256);
    v313 = v312 | 0xFF000000;
    if ( v312 < 0x1A000000 )
      v313 = v312 & 0xFFFFFF;
    *(_DWORD *)(v311 + 8256) = v313;
    v314 = *(_DWORD *)(v311 + 8512);
    v315 = v314 | 0xFF000000;
    if ( v314 < 0x1A000000 )
      v315 = v314 & 0xFFFFFF;
    *(_DWORD *)(v311 + 8512) = v315;
    v316 = *(_DWORD *)(v311 + 8768);
    v317 = v316 | 0xFF000000;
    if ( v316 < 0x1A000000 )
      v317 = v316 & 0xFFFFFF;
    *(_DWORD *)(v311 + 8768) = v317;
    v318 = *(_DWORD *)(v311 + 9024);
    v319 = v318 | 0xFF000000;
    if ( v318 < 0x1A000000 )
      v319 = v318 & 0xFFFFFF;
    *(_DWORD *)(v311 + 9024) = v319;
    v320 = *(_DWORD *)(v311 + 9280);
    v321 = v320 | 0xFF000000;
    if ( v320 < 0x1A000000 )
      v321 = v320 & 0xFFFFFF;
    *(_DWORD *)(v311 + 9280) = v321;
    v322 = *(_DWORD *)(v311 + 9536);
    v323 = v322 | 0xFF000000;
    if ( v322 < 0x1A000000 )
      v323 = v322 & 0xFFFFFF;
    *(_DWORD *)(v311 + 9536) = v323;
    v324 = *(_DWORD *)(v311 + 9792);
    v325 = v324 | 0xFF000000;
    if ( v324 < 0x1A000000 )
      v325 = v324 & 0xFFFFFF;
    *(_DWORD *)(v311 + 9792) = v325;
    v326 = *(_DWORD *)(v311 + 10048);
    v327 = v326 | 0xFF000000;
    if ( v326 < 0x1A000000 )
      v327 = v326 & 0xFFFFFF;
    *(_DWORD *)(v311 + 10048) = v327;
    v328 = *(_DWORD *)(v311 + 10304);
    v329 = v328 | 0xFF000000;
    if ( v328 < 0x1A000000 )
      v329 = v328 & 0xFFFFFF;
    *(_DWORD *)(v311 + 10304) = v329;
    v330 = *(_DWORD *)(v311 + 10560);
    v331 = v330 | 0xFF000000;
    if ( v330 < 0x1A000000 )
      v331 = v330 & 0xFFFFFF;
    *(_DWORD *)(v311 + 10560) = v331;
    v332 = *(_DWORD *)(v311 + 10816);
    v333 = v332 | 0xFF000000;
    if ( v332 < 0x1A000000 )
      v333 = v332 & 0xFFFFFF;
    *(_DWORD *)(v311 + 10816) = v333;
    v334 = *(_DWORD *)(v311 + 11072);
    v335 = v334 | 0xFF000000;
    if ( v334 < 0x1A000000 )
      v335 = v334 & 0xFFFFFF;
    *(_DWORD *)(v311 + 11072) = v335;
    v336 = *(_DWORD *)(v311 + 11328);
    v337 = v336 | 0xFF000000;
    if ( v336 < 0x1A000000 )
      v337 = v336 & 0xFFFFFF;
    *(_DWORD *)(v311 + 11328) = v337;
    v338 = *(_DWORD *)(v311 + 11584);
    v339 = v338 | 0xFF000000;
    if ( v338 < 0x1A000000 )
      v339 = v338 & 0xFFFFFF;
    *(_DWORD *)(v311 + 11584) = v339;
    v340 = *(_DWORD *)(v311 + 11840);
    v341 = v340 | 0xFF000000;
    if ( v340 < 0x1A000000 )
      v341 = v340 & 0xFFFFFF;
    *(_DWORD *)(v311 + 11840) = v341;
    v342 = *(_DWORD *)(v311 + 12096);
    v343 = v342 | 0xFF000000;
    if ( v342 < 0x1A000000 )
      v343 = v342 & 0xFFFFFF;
    *(_DWORD *)(v311 + 12096) = v343;
  while ( v310 != 96 );
  v344 = *(_DWORD *)v452 + 8352;
  v345 = 0;
    v346 = *(_DWORD *)(v344 + v345);
    v347 = v346 | 0xFF000000;
    if ( v346 < 0x1A000000 )
      v347 = v346 & 0xFFFFFF;
    v348 = v344 + v345;
    *(_DWORD *)(v344 + v345) = v347;
    v345 += 4;
    v349 = *(_DWORD *)(v348 + 256);
    v350 = v349 | 0xFF000000;
    if ( v349 < 0x1A000000 )
      v350 = v349 & 0xFFFFFF;
    *(_DWORD *)(v348 + 256) = v350;
    v351 = *(_DWORD *)(v348 + 512);
    v352 = v351 | 0xFF000000;
    if ( v351 < 0x1A000000 )
      v352 = v351 & 0xFFFFFF;
    *(_DWORD *)(v348 + 512) = v352;
    v353 = *(_DWORD *)(v348 + 768);
    v354 = v353 | 0xFF000000;
    if ( v353 < 0x1A000000 )
      v354 = v353 & 0xFFFFFF;
    *(_DWORD *)(v348 + 768) = v354;
    v355 = *(_DWORD *)(v348 + 1024);
    v356 = v355 | 0xFF000000;
    if ( v355 < 0x1A000000 )
      v356 = v355 & 0xFFFFFF;
    *(_DWORD *)(v348 + 1024) = v356;
    v357 = *(_DWORD *)(v348 + 1280);
    v358 = v357 | 0xFF000000;
    if ( v357 < 0x1A000000 )
      v358 = v357 & 0xFFFFFF;
    *(_DWORD *)(v348 + 1280) = v358;
    v359 = *(_DWORD *)(v348 + 1536);
    v360 = v359 | 0xFF000000;
    if ( v359 < 0x1A000000 )
      v360 = v359 & 0xFFFFFF;
    *(_DWORD *)(v348 + 1536) = v360;
    v361 = *(_DWORD *)(v348 + 1792);
    v362 = v361 | 0xFF000000;
    if ( v361 < 0x1A000000 )
      v362 = v361 & 0xFFFFFF;
    *(_DWORD *)(v348 + 1792) = v362;
    v363 = *(_DWORD *)(v348 + 2048);
    v364 = v363 | 0xFF000000;
    if ( v363 < 0x1A000000 )
      v364 = v363 & 0xFFFFFF;
    *(_DWORD *)(v348 + 2048) = v364;
    v365 = *(_DWORD *)(v348 + 2304);
    v366 = v365 | 0xFF000000;
    if ( v365 < 0x1A000000 )
      v366 = v365 & 0xFFFFFF;
    *(_DWORD *)(v348 + 2304) = v366;
    v367 = *(_DWORD *)(v348 + 2560);
    v368 = v367 | 0xFF000000;
    if ( v367 < 0x1A000000 )
      v368 = v367 & 0xFFFFFF;
    *(_DWORD *)(v348 + 2560) = v368;
    v369 = *(_DWORD *)(v348 + 2816);
    v370 = v369 | 0xFF000000;
    if ( v369 < 0x1A000000 )
      v370 = v369 & 0xFFFFFF;
    *(_DWORD *)(v348 + 2816) = v370;
    v371 = *(_DWORD *)(v348 + 3072);
    v372 = v371 | 0xFF000000;
    if ( v371 < 0x1A000000 )
      v372 = v371 & 0xFFFFFF;
    *(_DWORD *)(v348 + 3072) = v372;
    v373 = *(_DWORD *)(v348 + 3328);
    v374 = v373 | 0xFF000000;
    if ( v373 < 0x1A000000 )
      v374 = v373 & 0xFFFFFF;
    *(_DWORD *)(v348 + 3328) = v374;
    v375 = *(_DWORD *)(v348 + 3584);
    v376 = v375 | 0xFF000000;
    if ( v375 < 0x1A000000 )
      v376 = v375 & 0xFFFFFF;
    *(_DWORD *)(v348 + 3584) = v376;
    v377 = *(_DWORD *)(v348 + 3840);
    v378 = v377 | 0xFF000000;
    if ( v377 < 0x1A000000 )
      v378 = v377 & 0xFFFFFF;
    *(_DWORD *)(v348 + 3840) = v378;
  while ( v345 != 64 );
  v379 = 0;
  v463 = *(_DWORD *)v452;
    v380 = v463 + v379;
    v379 += 4;
    v381 = *(_DWORD *)(v380 + 12288);
    v382 = v381 | 0xFF000000;
    if ( v381 < 0x1A000000 )
      v382 = v381 & 0xFFFFFF;
    *(_DWORD *)(v380 + 12288) = v382;
    v383 = *(_DWORD *)(v380 + 12544);
    v384 = v383 | 0xFF000000;
    if ( v383 < 0x1A000000 )
      v384 = v383 & 0xFFFFFF;
    *(_DWORD *)(v380 + 12544) = v384;
    v385 = *(_DWORD *)(v380 + 12800);
    v386 = v385 | 0xFF000000;
    if ( v385 < 0x1A000000 )
      v386 = v385 & 0xFFFFFF;
    *(_DWORD *)(v380 + 12800) = v386;
    v387 = *(_DWORD *)(v380 + 13056);
    v388 = v387 | 0xFF000000;
    if ( v387 < 0x1A000000 )
      v388 = v387 & 0xFFFFFF;
    *(_DWORD *)(v380 + 13056) = v388;
    v389 = *(_DWORD *)(v380 + 13312);
    v390 = v389 | 0xFF000000;
    if ( v389 < 0x1A000000 )
      v390 = v389 & 0xFFFFFF;
    *(_DWORD *)(v380 + 13312) = v390;
    v391 = *(_DWORD *)(v380 + 13568);
    v392 = v391 | 0xFF000000;
    if ( v391 < 0x1A000000 )
      v392 = v391 & 0xFFFFFF;
    *(_DWORD *)(v380 + 13568) = v392;
    v393 = *(_DWORD *)(v380 + 13824);
    v394 = v393 | 0xFF000000;
    if ( v393 < 0x1A000000 )
      v394 = v393 & 0xFFFFFF;
    *(_DWORD *)(v380 + 13824) = v394;
    v395 = *(_DWORD *)(v380 + 14080);
    v396 = v395 | 0xFF000000;
    if ( v395 < 0x1A000000 )
      v396 = v395 & 0xFFFFFF;
    *(_DWORD *)(v380 + 14080) = v396;
    v397 = *(_DWORD *)(v380 + 14336);
    v398 = v397 | 0xFF000000;
    if ( v397 < 0x1A000000 )
      v398 = v397 & 0xFFFFFF;
    *(_DWORD *)(v380 + 14336) = v398;
    v399 = *(_DWORD *)(v380 + 14592);
    v400 = v399 | 0xFF000000;
    if ( v399 < 0x1A000000 )
      v400 = v399 & 0xFFFFFF;
    *(_DWORD *)(v380 + 14592) = v400;
    v401 = *(_DWORD *)(v380 + 14848);
    v402 = v401 | 0xFF000000;
    if ( v401 < 0x1A000000 )
      v402 = v401 & 0xFFFFFF;
    *(_DWORD *)(v380 + 14848) = v402;
    v403 = *(_DWORD *)(v380 + 15104);
    v404 = v403 | 0xFF000000;
    if ( v403 < 0x1A000000 )
      v404 = v403 & 0xFFFFFF;
    *(_DWORD *)(v380 + 15104) = v404;
    v405 = *(_DWORD *)(v380 + 15360);
    v406 = v405 | 0xFF000000;
    if ( v405 < 0x1A000000 )
      v406 = v405 & 0xFFFFFF;
    *(_DWORD *)(v380 + 15360) = v406;
    v407 = *(_DWORD *)(v380 + 15616);
    v408 = v407 | 0xFF000000;
    if ( v407 < 0x1A000000 )
      v408 = v407 & 0xFFFFFF;
    *(_DWORD *)(v380 + 15616) = v408;
    v409 = *(_DWORD *)(v380 + 15872);
    v410 = v409 | 0xFF000000;
    if ( v409 < 0x1A000000 )
      v410 = v409 & 0xFFFFFF;
    *(_DWORD *)(v380 + 15872) = v410;
    v411 = *(_DWORD *)(v380 + 16128);
    v412 = v411 | 0xFF000000;
    if ( v411 < 0x1A000000 )
      v412 = v411 & 0xFFFFFF;
    *(_DWORD *)(v380 + 16128) = v412;
  while ( v379 != 64 );
  v413 = 0;
  v464 = *(_DWORD *)v452;
    v414 = v464 + v413;
    v413 += 4;
    v415 = *(_DWORD *)(v414 + 12480);
    v416 = v415 | 0xFF000000;
    if ( v415 < 0x1A000000 )
      v416 = v415 & 0xFFFFFF;
    *(_DWORD *)(v414 + 12480) = v416;
    v417 = *(_DWORD *)(v414 + 12736);
    v418 = v417 | 0xFF000000;
    if ( v417 < 0x1A000000 )
      v418 = v417 & 0xFFFFFF;
    *(_DWORD *)(v414 + 12736) = v418;
    v419 = *(_DWORD *)(v414 + 12992);
    v420 = v419 | 0xFF000000;
    if ( v419 < 0x1A000000 )
      v420 = v419 & 0xFFFFFF;
    *(_DWORD *)(v414 + 12992) = v420;
    v421 = *(_DWORD *)(v414 + 13248);
    v422 = v421 | 0xFF000000;
    if ( v421 < 0x1A000000 )
      v422 = v421 & 0xFFFFFF;
    *(_DWORD *)(v414 + 13248) = v422;
    v423 = *(_DWORD *)(v414 + 13504);
    v424 = v423 | 0xFF000000;
    if ( v423 < 0x1A000000 )
      v424 = v423 & 0xFFFFFF;
    *(_DWORD *)(v414 + 13504) = v424;
    v425 = *(_DWORD *)(v414 + 13760);
    v426 = v425 | 0xFF000000;
    if ( v425 < 0x1A000000 )
      v426 = v425 & 0xFFFFFF;
    *(_DWORD *)(v414 + 13760) = v426;
    v427 = *(_DWORD *)(v414 + 14016);
    v428 = v427 | 0xFF000000;
    if ( v427 < 0x1A000000 )
      v428 = v427 & 0xFFFFFF;
    *(_DWORD *)(v414 + 14016) = v428;
    v429 = *(_DWORD *)(v414 + 14272);
    v430 = v429 | 0xFF000000;
    if ( v429 < 0x1A000000 )
      v430 = v429 & 0xFFFFFF;
    *(_DWORD *)(v414 + 14272) = v430;
    v431 = *(_DWORD *)(v414 + 14528);
    v432 = v431 | 0xFF000000;
    if ( v431 < 0x1A000000 )
      v432 = v431 & 0xFFFFFF;
    *(_DWORD *)(v414 + 14528) = v432;
    v433 = *(_DWORD *)(v414 + 14784);
    v434 = v433 | 0xFF000000;
    if ( v433 < 0x1A000000 )
      v434 = v433 & 0xFFFFFF;
    *(_DWORD *)(v414 + 14784) = v434;
    v435 = *(_DWORD *)(v414 + 15040);
    v436 = v435 | 0xFF000000;
    if ( v435 < 0x1A000000 )
      v436 = v435 & 0xFFFFFF;
    *(_DWORD *)(v414 + 15040) = v436;
    v437 = *(_DWORD *)(v414 + 15296);
    v438 = v437 | 0xFF000000;
    if ( v437 < 0x1A000000 )
      v438 = v437 & 0xFFFFFF;
    *(_DWORD *)(v414 + 15296) = v438;
    v439 = *(_DWORD *)(v414 + 15552);
    v440 = v439 | 0xFF000000;
    if ( v439 < 0x1A000000 )
      v440 = v439 & 0xFFFFFF;
    *(_DWORD *)(v414 + 15552) = v440;
    v441 = *(_DWORD *)(v414 + 15808);
    v442 = v441 | 0xFF000000;
    if ( v441 < 0x1A000000 )
      v442 = v441 & 0xFFFFFF;
    *(_DWORD *)(v414 + 15808) = v442;
    v443 = *(_DWORD *)(v414 + 16064);
    v444 = v443 | 0xFF000000;
    if ( v443 < 0x1A000000 )
      v444 = v443 & 0xFFFFFF;
    *(_DWORD *)(v414 + 16064) = v444;
    v445 = *(_DWORD *)(v414 + 16320);
    v446 = v445 | 0xFF000000;
    if ( v445 < 0x1A000000 )
      v446 = v445 & 0xFFFFFF;
    *(_DWORD *)(v414 + 16320) = v446;
  while ( v413 != 64 );
  return v459;
}


char *__fastcall SkinInfoData::getGeometryName(SkinInfoData *this)
{
  return (char *)this + 12;
}


void __fastcall SkinInfoData::~SkinInfoData(SkinInfoData *this)
{
  SkinInfoData *v1; // r0@1

  v1 = SkinInfoData::~SkinInfoData(this);
  j_j_j__ZdlPv_6((void *)v1);
}
