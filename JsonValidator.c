

JsonValidator::Property *__fastcall JsonValidator::Property::~Property(JsonValidator::Property *this)
{
  JsonValidator::Property *v1; // r8@1
  char *v2; // r0@1
  int v3; // r5@4
  int v4; // r7@4
  int v5; // r4@5
  unsigned int *v6; // r1@6
  unsigned int v7; // r0@8
  unsigned int *v8; // r6@12
  unsigned int v9; // r0@14
  int v10; // r5@23
  int v11; // r7@23
  int v12; // r4@24
  unsigned int *v13; // r1@25
  unsigned int v14; // r0@27
  unsigned int *v15; // r6@31
  unsigned int v16; // r0@33
  int v17; // r5@42
  unsigned int *v18; // r1@43
  unsigned int v19; // r0@45
  unsigned int *v20; // r4@49
  unsigned int v21; // r0@51
  int v22; // r1@56
  void *v23; // r0@56
  unsigned int *v25; // r2@60
  signed int v26; // r1@62

  v1 = this;
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>,std::allocator<std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 52);
  v2 = (char *)*((_DWORD *)v1 + 13);
  if ( v2 && (char *)v1 + 76 != v2 )
    operator delete(v2);
  v4 = *((_QWORD *)v1 + 5) >> 32;
  v3 = *((_QWORD *)v1 + 5);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *(_DWORD *)(v3 + 8);
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 == 1 )
          v8 = (unsigned int *)(v5 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      }
      v3 += 12;
    }
    while ( v3 != v4 );
    v3 = *((_DWORD *)v1 + 10);
  }
  if ( v3 )
    operator delete((void *)v3);
  v11 = *(_QWORD *)((char *)v1 + 28) >> 32;
  v10 = *(_QWORD *)((char *)v1 + 28);
  if ( v10 != v11 )
      v12 = *(_DWORD *)(v10 + 20);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      Json::Value::~Value((Json::Value *)v10);
      v10 += 24;
    while ( v10 != v11 );
    v10 = *((_DWORD *)v1 + 7);
  if ( v10 )
    operator delete((void *)v10);
  v17 = *((_DWORD *)v1 + 6);
  if ( v17 )
    v18 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v22 = *((_DWORD *)v1 + 4);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v22 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  if ( *(_DWORD *)v1 )
    operator delete(*(void **)v1);
  return v1;
}


int __fastcall JsonValidator::validate(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r4@1
  int v5; // r9@1
  unsigned int v6; // r1@1
  void **v7; // r5@1
  int v8; // r6@1
  void **v9; // r7@1
  void *v10; // r0@2
  bool v11; // cf@2
  __int64 v12; // r2@4
  void *v13; // r0@4
  void *v14; // r0@4
  signed int v15; // r5@5
  signed int v16; // r9@5
  void **v17; // r11@6
  int *v18; // r10@6
  int v19; // r0@6
  unsigned int *v20; // r2@7
  signed int v21; // r1@9
  unsigned int *v22; // r2@15
  signed int v23; // r1@17
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  unsigned int *v32; // r2@39
  signed int v33; // r1@41
  int v34; // r2@63
  Json::Value *v35; // r3@63
  int v36; // r7@63
  int v37; // r1@63
  void *v38; // r0@64
  void *v39; // r0@65
  void *v40; // r0@66
  _QWORD *v41; // r4@69
  int v42; // r0@69
  int *v43; // r1@69 OVERLAPPED
  int *v44; // r2@69 OVERLAPPED
  int v45; // r3@72
  bool v46; // zf@72
  int v47; // r0@77
  int v48; // t1@77
  bool v49; // zf@77
  int v50; // t1@82
  int v51; // r7@85
  void *v52; // r0@85
  void *v53; // r6@85
  __int64 v54; // kr00_8@85
  char *v55; // r1@86
  char *v56; // r0@88
  int v57; // r4@89
  char *v58; // r6@89
  unsigned int *v59; // r2@91
  signed int v60; // r1@93
  int *v61; // r0@99
  void *v62; // r0@104
  void *v63; // r0@105
  void *v64; // r0@106
  void *v65; // r0@109
  signed int v66; // r4@112
  int i; // r5@112
  Json::Value *v68; // r6@116
  unsigned int v69; // r6@116
  int v70; // r0@117
  __int64 v71; // kr10_8@117
  unsigned int v72; // r1@117
  const void **v73; // r0@119
  char *v74; // r0@121
  void *v75; // r0@122
  void *v76; // r0@123
  unsigned int *v77; // r2@125
  signed int v78; // r1@127
  unsigned int *v79; // r2@129
  signed int v80; // r1@131
  unsigned int *v81; // r2@133
  signed int v82; // r1@135
  int v83; // r0@151
  signed int v84; // r7@151
  int v85; // r4@151
  int v86; // r6@151
  unsigned int *v87; // r2@153
  signed int v88; // r1@155
  unsigned int *v89; // r2@157
  signed int v90; // r1@159
  _BYTE *v91; // r0@170
  void *v92; // r0@170
  void *v93; // r0@171
  int v94; // r4@175
  int v95; // r6@175
  unsigned int *v96; // r2@177
  signed int v97; // r1@179
  unsigned int *v98; // r2@181
  signed int v99; // r1@183
  int v100; // r0@193
  int v101; // r1@193
  bool v102; // zf@193
  int v103; // r3@196
  signed int v104; // r2@196
  bool v105; // zf@200
  _BYTE *v106; // r0@204
  void *v107; // r0@204
  void *v108; // r0@205
  signed int v109; // r1@209
  int v110; // r1@211
  signed int v111; // r9@213
  const Json::Value *v112; // r6@213
  const Json::Value *v113; // r10@213
  int v114; // r0@214
  int v115; // r2@214
  char *v116; // r1@215
  char *v117; // r0@217
  void *v118; // r0@218
  void *v119; // r0@219
  unsigned int *v120; // r2@222
  signed int v121; // r1@224
  unsigned int *v122; // r2@226
  signed int v123; // r1@228
  unsigned int *v124; // r2@230
  signed int v125; // r1@232
  unsigned int *v126; // r2@247
  signed int v127; // r1@249
  unsigned int *v128; // r2@251
  signed int v129; // r1@253
  unsigned int *v130; // r2@255
  signed int v131; // r1@257
  unsigned int *v132; // r2@259
  signed int v133; // r1@261
  unsigned int *v134; // r2@263
  signed int v135; // r1@265
  unsigned int *v136; // r2@267
  signed int v137; // r1@269
  unsigned int *v138; // r2@271
  signed int v139; // r1@273
  unsigned int *v140; // r2@275
  signed int v141; // r1@277
  int *v142; // r7@307
  Json::Value *v143; // r6@307
  bool v144; // zf@308
  signed int v145; // r0@308
  int v146; // r4@313
  __int64 v147; // kr30_8@313
  char *v148; // r1@314
  const void **v149; // r0@315
  void *v150; // r0@315
  void *v151; // r0@316
  char *v152; // r0@317
  char *v153; // r0@320
  int v154; // r5@321
  char *v155; // r6@321
  unsigned int *v156; // r2@323
  signed int v157; // r1@325
  int *v158; // r0@331
  void *v159; // r0@336
  void *v160; // r0@337
  void *v161; // r0@338
  unsigned int *v162; // r2@342
  signed int v163; // r1@344
  unsigned int *v164; // r2@350
  signed int v165; // r1@352
  unsigned int *v166; // r2@354
  signed int v167; // r1@356
  unsigned int *v168; // r2@358
  signed int v169; // r1@360
  unsigned int *v170; // r2@362
  signed int v171; // r1@364
  unsigned int *v172; // r2@366
  signed int v173; // r1@368
  int *v174; // r5@394
  unsigned int *v175; // r2@396
  signed int v176; // r1@398
  unsigned int *v177; // r2@400
  signed int v178; // r1@402
  int v179; // r4@412
  const char *v180; // r7@412
  void *v181; // r0@414
  void *v182; // r6@414
  const void **v183; // r0@414
  char *v184; // r0@414
  void *v185; // r0@415
  __int64 v186; // kr48_8@419
  char *v187; // r1@420
  char *v188; // r0@422
  int v189; // r4@423
  char *v190; // r6@423
  unsigned int *v191; // r2@425
  signed int v192; // r1@427
  int *v193; // r0@433
  void *v194; // r0@438
  void *v195; // r0@439
  void *v196; // r0@440
  char *v197; // r0@441
  void *v198; // r0@443
  int *v200; // [sp+14h] [bp-1D4h]@213
  int *j; // [sp+18h] [bp-1D0h]@394
  int v202; // [sp+50h] [bp-198h]@4
  int v203; // [sp+54h] [bp-194h]@31
  int v204; // [sp+58h] [bp-190h]@27
  char *v205; // [sp+5Ch] [bp-18Ch]@419
  char *v206; // [sp+60h] [bp-188h]@419
  char *v207; // [sp+64h] [bp-184h]@419
  int v208; // [sp+6Ch] [bp-17Ch]@35
  char *v209; // [sp+70h] [bp-178h]@419
  void *v210; // [sp+74h] [bp-174h]@412
  void *v211; // [sp+78h] [bp-170h]@412
  void *v212; // [sp+7Ch] [bp-16Ch]@412
  int v213; // [sp+80h] [bp-168h]@400
  char *v214; // [sp+84h] [bp-164h]@396
  char *v215; // [sp+88h] [bp-160h]@215
  int v216; // [sp+8Ch] [bp-15Ch]@214
  void **v217; // [sp+90h] [bp-158h]@214
  int v218; // [sp+94h] [bp-154h]@219
  char *v219; // [sp+9Ch] [bp-14Ch]@39
  int v220; // [sp+A0h] [bp-148h]@204
  int v221; // [sp+A4h] [bp-144h]@204
  int v222; // [sp+A8h] [bp-140h]@204
  char v223; // [sp+ACh] [bp-13Ch]@204
  int v224; // [sp+B0h] [bp-138h]@177
  int v225; // [sp+B4h] [bp-134h]@181
  int v226; // [sp+B8h] [bp-130h]@170
  int v227; // [sp+BCh] [bp-12Ch]@170
  int v228; // [sp+C0h] [bp-128h]@170
  char v229; // [sp+C4h] [bp-124h]@170
  int v230; // [sp+C8h] [bp-120h]@153
  int v231; // [sp+CCh] [bp-11Ch]@6
  int v232; // [sp+D0h] [bp-118h]@117
  unsigned int v233; // [sp+D4h] [bp-114h]@117
  int v234; // [sp+D8h] [bp-110h]@117
  int v235; // [sp+DCh] [bp-10Ch]@117
  Json::Value *v236; // [sp+E0h] [bp-108h]@117
  char v237; // [sp+E4h] [bp-104h]@117
  char *v238; // [sp+E8h] [bp-100h]@121
  char v239; // [sp+ECh] [bp-FCh]@116
  char v240; // [sp+F4h] [bp-F4h]@116
  int v241; // [sp+FCh] [bp-ECh]@271
  int v242; // [sp+100h] [bp-E8h]@267
  char *v243; // [sp+104h] [bp-E4h]@313
  char *v244; // [sp+108h] [bp-E0h]@313
  char *v245; // [sp+10Ch] [bp-DCh]@313
  int v246; // [sp+114h] [bp-D4h]@275
  char *v247; // [sp+118h] [bp-D0h]@313
  int v248; // [sp+11Ch] [bp-CCh]@316
  Json::Value *v249; // [sp+120h] [bp-C8h]@316
  Json::Value *v250; // [sp+124h] [bp-C4h]@316
  char v251; // [sp+128h] [bp-C0h]@316
  int v252; // [sp+12Ch] [bp-BCh]@255
  int v253; // [sp+130h] [bp-B8h]@251
  char *v254; // [sp+134h] [bp-B4h]@259
  void *v255; // [sp+138h] [bp-B0h]@85
  void *v256; // [sp+13Ch] [bp-ACh]@85
  void *v257; // [sp+140h] [bp-A8h]@85
  int v258; // [sp+144h] [bp-A4h]@85
  int v259; // [sp+148h] [bp-A0h]@85
  int v260; // [sp+14Ch] [bp-9Ch]@85
  char *v261; // [sp+150h] [bp-98h]@85
  char *v262; // [sp+154h] [bp-94h]@85
  char *v263; // [sp+158h] [bp-90h]@85
  int v264; // [sp+160h] [bp-88h]@85
  char *v265; // [sp+164h] [bp-84h]@85
  int v266; // [sp+168h] [bp-80h]@63
  Json::Value *v267; // [sp+16Ch] [bp-7Ch]@63
  int v268; // [sp+170h] [bp-78h]@63
  char v269; // [sp+174h] [bp-74h]@63
  int v270; // [sp+178h] [bp-70h]@6
  int v271; // [sp+184h] [bp-64h]@4
  int v272; // [sp+188h] [bp-60h]@4
  int v273; // [sp+18Ch] [bp-5Ch]@4
  char v274; // [sp+190h] [bp-58h]@4
  int v275; // [sp+194h] [bp-54h]@4
  char *v276; // [sp+198h] [bp-50h]@1
  int v277; // [sp+19Ch] [bp-4Ch]@1
  char *v278; // [sp+1A0h] [bp-48h]@4
  void *ptr; // [sp+1A4h] [bp-44h]@4
  char *v280; // [sp+1A8h] [bp-40h]@4
  void **v281; // [sp+1ACh] [bp-3Ch]@4
  char *v282; // [sp+1B0h] [bp-38h]@4
  void *v283; // [sp+1B4h] [bp-34h]@4
  __int64 v284; // [sp+1B8h] [bp-30h]@4

  v3 = a1;
  v4 = a2;
  v5 = a3;
  _aeabi_memclr8(&v276, 40);
  v277 = 8;
  v276 = (char *)operator new(0x20u);
  v6 = (2 * v277 - 2) & 0xFFFFFFFC;
  v7 = (void **)&v276[v6];
  v8 = (int)&v276[v6 + 4];
  v9 = (void **)&v276[v6];
  do
  {
    v10 = operator new(0x1F4u);
    v11 = v9 >= v7;
    *v9 = v10;
    ++v9;
  }
  while ( !v11 );
  HIDWORD(v12) = v8 - 4;
  v13 = *v7;
  v281 = v7;
  ptr = v13;
  LODWORD(v12) = (char *)v13 + 500;
  v280 = (char *)v13 + 500;
  v284 = v12;
  v278 = (char *)v13;
  v282 = (char *)v13;
  v283 = v13;
  v271 = v3;
  v272 = v4;
  v273 = v4;
  v274 = 1;
  sub_21E94B4((void **)&v275, (const char *)&unk_257BC67);
  sub_148EFE0((int)&v276, (int)&v271);
  v202 = v5;
  v14 = (void *)(v275 - 12);
  if ( (int *)(v275 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v275 - 4);
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
      j_j_j_j__ZdlPv_9(v14);
  v15 = 1;
  LOBYTE(v16) = 1;
  if ( v282 != v278 )
    v17 = (void **)&v231;
    v16 = 1;
    v18 = &v270;
    v19 = (int)v278;
    do
      v34 = *(_DWORD *)v19;
      v35 = *(Json::Value **)(v19 + 4);
      v36 = *(_DWORD *)(v19 + 8);
      v269 = *(_BYTE *)(v19 + 12);
      v266 = v34;
      v267 = v35;
      v268 = v36;
      sub_21E8AF4(v18, (int *)(v19 + 16));
      v37 = *((_DWORD *)v278 + 4);
      if ( v278 == v280 - 20 )
      {
        v40 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
        {
          v162 = (unsigned int *)(v37 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v163 = __ldrex(v162);
            while ( __strex(v163 - 1, v162) );
          }
          else
            v163 = (*v162)--;
          if ( v163 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        }
        operator delete(ptr);
        ++v281;
        v39 = *v281;
        ptr = v39;
        v280 = (char *)v39 + 500;
      }
      else
        v38 = (void *)(v37 - 12);
          v126 = (unsigned int *)(v37 - 4);
              v127 = __ldrex(v126);
            while ( __strex(v127 - 1, v126) );
            v127 = (*v126)--;
          if ( v127 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        v39 = v278 + 20;
      v278 = (char *)v39;
      if ( v269 )
        v41 = (_QWORD *)v266;
        v42 = Json::Value::type(v267);
        *(_QWORD *)&v43 = *v41;
        if ( v43 == v44 )
LABEL_84:
          if ( v202 )
            sub_21E94B4((void **)&v264, "jsonValidationError.typeError");
            sub_21E8AF4(&v258, v18);
            gatherTypeStrings((const void **)&v259, (unsigned __int64 *)v266);
            v51 = Json::Value::type(v267);
            v255 = 0;
            v256 = 0;
            v257 = 0;
            v52 = operator new(4u);
            v53 = v52;
            v52 = (char *)v52 + 4;
            v255 = v53;
            v257 = v52;
            *(_DWORD *)v53 = v51;
            v256 = v52;
            gatherTypeStrings((const void **)&v260, (unsigned __int64 *)&v255);
            v261 = 0;
            v262 = 0;
            v263 = 0;
            v261 = (char *)operator new(0xCu);
            v263 = v261 + 12;
            v262 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                             (int)&v258,
                             (int)&v261,
                             (int)v261);
            I18n::get((int *)&v265, &v264, (unsigned __int64 *)&v261);
            v54 = *(_QWORD *)(v202 + 4);
            if ( (_DWORD)v54 == HIDWORD(v54) )
            {
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                (unsigned __int64 *)v202,
                &v265);
              v55 = v265;
            }
            else
              *(_DWORD *)v54 = v265;
              v55 = (char *)&unk_28898CC;
              v265 = (char *)&unk_28898CC;
              *(_DWORD *)(v202 + 4) = v54 + 4;
            v56 = v55 - 12;
            v15 = 1;
            if ( (int *)(v55 - 12) != &dword_28898C0 )
              v164 = (unsigned int *)(v55 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v165 = __ldrex(v164);
                while ( __strex(v165 - 1, v164) );
              }
              else
                v165 = (*v164)--;
              if ( v165 <= 0 )
                j_j_j_j__ZdlPv_9(v56);
            v57 = (int)v262;
            v58 = v261;
            if ( v261 != v262 )
              do
                v61 = (int *)(*(_DWORD *)v58 - 12);
                if ( v61 != &dword_28898C0 )
                {
                  v59 = (unsigned int *)(*(_DWORD *)v58 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v60 = __ldrex(v59);
                    while ( __strex(v60 - 1, v59) );
                  }
                  else
                    v60 = (*v59)--;
                  if ( v60 <= 0 )
                    j_j_j_j__ZdlPv_9(v61);
                }
                v58 += 4;
              while ( v58 != (char *)v57 );
              v58 = v261;
            if ( v58 )
              operator delete(v58);
            v62 = (void *)(v260 - 12);
            if ( (int *)(v260 - 12) != &dword_28898C0 )
              v166 = (unsigned int *)(v260 - 4);
                  v167 = __ldrex(v166);
                while ( __strex(v167 - 1, v166) );
                v167 = (*v166)--;
              if ( v167 <= 0 )
                j_j_j_j__ZdlPv_9(v62);
            v63 = (void *)(v259 - 12);
            if ( (int *)(v259 - 12) != &dword_28898C0 )
              v168 = (unsigned int *)(v259 - 4);
                  v169 = __ldrex(v168);
                while ( __strex(v169 - 1, v168) );
                v169 = (*v168)--;
              if ( v169 <= 0 )
                j_j_j_j__ZdlPv_9(v63);
            v64 = (void *)(v258 - 12);
            if ( (int *)(v258 - 12) != &dword_28898C0 )
              v170 = (unsigned int *)(v258 - 4);
                  v171 = __ldrex(v170);
                while ( __strex(v171 - 1, v170) );
                v171 = (*v170)--;
              if ( v171 <= 0 )
                j_j_j_j__ZdlPv_9(v64);
            if ( v255 )
              operator delete(v255);
            v65 = (void *)(v264 - 12);
            if ( (int *)(v264 - 12) != &dword_28898C0 )
              v172 = (unsigned int *)(v264 - 4);
                  v173 = __ldrex(v172);
                while ( __strex(v173 - 1, v172) );
                v173 = (*v172)--;
              if ( v173 <= 0 )
                j_j_j_j__ZdlPv_9(v65);
          v16 = 0;
        else if ( v42 == 1 )
          while ( 1 )
            v48 = *v43;
            ++v43;
            v47 = v48;
            v49 = v48 == 1;
            if ( v48 != 1 )
              v49 = (v47 | 1) == 3;
            if ( v49 )
              break;
            if ( v44 == v43 )
              goto LABEL_84;
        else if ( v42 == 2 )
            v45 = *v43 | 2;
            v46 = v45 == 3;
            if ( v45 != 3 )
              v46 = *v43 == 2;
            if ( v46 )
        else
            v50 = *v43;
            if ( v50 == v42 )
      if ( Json::Value::type(v267) == 7 )
        v66 = v15;
        for ( i = *(_DWORD *)(v266 + 60); i; i = *(_DWORD *)i )
          v142 = (int *)(i + 4);
          v143 = (Json::Value *)Json::Value::operator[]((int)v267, (const char **)(i + 4));
          if ( Json::Value::isNull(v143) )
            v144 = *(_BYTE *)(*(_DWORD *)(i + 8) + 12) == 0;
            v145 = 0;
            if ( !*(_BYTE *)(*(_DWORD *)(i + 8) + 12) )
              v145 = 1;
            v16 &= v145;
            if ( *(_BYTE *)(*(_DWORD *)(i + 8) + 12) )
              v144 = v202 == 0;
            if ( !v144 )
              sub_21E94B4((void **)&v246, "jsonValidationError.requiredPropertyError");
              v146 = i;
              sub_21E8AF4(&v241, v18);
              sub_21E8AF4(&v242, v142);
              v243 = 0;
              v244 = 0;
              v245 = 0;
              v243 = (char *)operator new(8u);
              v245 = v243 + 8;
              v244 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                               (int)&v241,
                               (int)&v243,
                               (int)v243);
              I18n::get((int *)&v247, &v246, (unsigned __int64 *)&v243);
              v147 = *(_QWORD *)(v202 + 4);
              if ( (_DWORD)v147 == HIDWORD(v147) )
                std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                  (unsigned __int64 *)v202,
                  &v247);
                v148 = v247;
                *(_DWORD *)v147 = v247;
                v148 = (char *)&unk_28898CC;
                v247 = (char *)&unk_28898CC;
                *(_DWORD *)(v202 + 4) = v147 + 4;
              v153 = v148 - 12;
              if ( (int *)(v148 - 12) != &dword_28898C0 )
                v134 = (unsigned int *)(v148 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v135 = __ldrex(v134);
                  while ( __strex(v135 - 1, v134) );
                else
                  v135 = (*v134)--;
                if ( v135 <= 0 )
                  j_j_j_j__ZdlPv_9(v153);
              v154 = (int)v244;
              v155 = v243;
              if ( v243 != v244 )
                  v158 = (int *)(*(_DWORD *)v155 - 12);
                  if ( v158 != &dword_28898C0 )
                    v156 = (unsigned int *)(*(_DWORD *)v155 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v157 = __ldrex(v156);
                      while ( __strex(v157 - 1, v156) );
                    }
                    else
                      v157 = (*v156)--;
                    if ( v157 <= 0 )
                      j_j_j_j__ZdlPv_9(v158);
                  v155 += 4;
                while ( v155 != (char *)v154 );
                v155 = v243;
              if ( v155 )
                operator delete(v155);
              i = v146;
              v159 = (void *)(v242 - 12);
              if ( (int *)(v242 - 12) != &dword_28898C0 )
                v136 = (unsigned int *)(v242 - 4);
                    v137 = __ldrex(v136);
                  while ( __strex(v137 - 1, v136) );
                  v137 = (*v136)--;
                if ( v137 <= 0 )
                  j_j_j_j__ZdlPv_9(v159);
              v17 = (void **)&v231;
              v160 = (void *)(v241 - 12);
              if ( (int *)(v241 - 12) != &dword_28898C0 )
                v138 = (unsigned int *)(v241 - 4);
                    v139 = __ldrex(v138);
                  while ( __strex(v139 - 1, v138) );
                  v139 = (*v138)--;
                if ( v139 <= 0 )
                  j_j_j_j__ZdlPv_9(v160);
              v66 = 1;
              v161 = (void *)(v246 - 12);
              if ( (int *)(v246 - 12) != &dword_28898C0 )
                v140 = (unsigned int *)(v246 - 4);
                    v141 = __ldrex(v140);
                  while ( __strex(v141 - 1, v140) );
                  v141 = (*v140)--;
                if ( v141 <= 0 )
                  j_j_j_j__ZdlPv_9(v161);
              v16 = 0;
            sub_21E8AF4(&v253, v18);
            sub_21E7408((const void **)&v253, "/", 1u);
            v149 = sub_21E72F0((const void **)&v253, (const void **)v142);
            v254 = (char *)*v149;
            *v149 = &unk_28898CC;
            v150 = (void *)(v253 - 12);
            if ( (int *)(v253 - 12) != &dword_28898C0 )
              v128 = (unsigned int *)(v253 - 4);
                  v129 = __ldrex(v128);
                while ( __strex(v129 - 1, v128) );
                v129 = (*v128)--;
              if ( v129 <= 0 )
                j_j_j_j__ZdlPv_9(v150);
            v248 = *(_DWORD *)(i + 8);
            v249 = v143;
            v250 = v267;
            v251 = v66;
            sub_21E8AF4(&v252, (int *)&v254);
            sub_148EFE0((int)&v276, (int)&v248);
            v151 = (void *)(v252 - 12);
            if ( (int *)(v252 - 12) != &dword_28898C0 )
              v130 = (unsigned int *)(v252 - 4);
                  v131 = __ldrex(v130);
                while ( __strex(v131 - 1, v130) );
                v131 = (*v130)--;
              if ( v131 <= 0 )
                j_j_j_j__ZdlPv_9(v151);
            v17 = (void **)&v231;
            v152 = v254 - 12;
            if ( (int *)(v254 - 12) != &dword_28898C0 )
              v132 = (unsigned int *)(v254 - 4);
                  v133 = __ldrex(v132);
                while ( __strex(v133 - 1, v132) );
                v133 = (*v132)--;
              if ( v133 <= 0 )
                j_j_j_j__ZdlPv_9(v152);
        if ( Json::Value::type(v267) == 6 && *(_DWORD *)(v266 + 20) )
          v68 = v267;
          Json::Value::begin((Json::Value *)&v240, (int)v267);
          Json::Value::end((Json::Value *)&v239, (int)v68);
          v69 = 0;
          while ( Json::ValueIteratorBase::isEqual(
                    (Json::ValueIteratorBase *)&v240,
                    (const Json::ValueIteratorBase *)&v239) != 1 )
            v70 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v240);
            v234 = *(_DWORD *)(v266 + 20);
            v235 = v70;
            v236 = v267;
            v237 = v15;
            sub_21E8AF4((int *)&v233, v18);
            sub_21E7408((const void **)&v233, "/", 1u);
            Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v232, v69);
            v71 = *(_QWORD *)(v233 - 12);
            v72 = *(_DWORD *)(v232 - 12) + v71;
            if ( v72 > HIDWORD(v71) && v72 <= *(_DWORD *)(v232 - 8) )
              v73 = sub_21E82D8((const void **)&v232, 0, v233, (_BYTE *)v71);
              v73 = sub_21E72F0((const void **)&v233, (const void **)&v232);
            v238 = (char *)*v73;
            *v73 = &unk_28898CC;
            sub_148EFE0((int)&v276, (int)&v234);
            v74 = v238 - 12;
            if ( (int *)(v238 - 12) != &dword_28898C0 )
              v77 = (unsigned int *)(v238 - 4);
                  v78 = __ldrex(v77);
                while ( __strex(v78 - 1, v77) );
                v78 = (*v77)--;
              if ( v78 <= 0 )
                j_j_j_j__ZdlPv_9(v74);
            v75 = (void *)(v232 - 12);
            if ( (int *)(v232 - 12) != &dword_28898C0 )
              v79 = (unsigned int *)(v232 - 4);
                  v80 = __ldrex(v79);
                while ( __strex(v80 - 1, v79) );
                v80 = (*v79)--;
              if ( v80 <= 0 )
                j_j_j_j__ZdlPv_9(v75);
            v76 = (void *)(v233 - 12);
            if ( (int *)(v233 - 12) != &dword_28898C0 )
              v81 = (unsigned int *)(v233 - 4);
                  v82 = __ldrex(v81);
                while ( __strex(v82 - 1, v81) );
                v82 = (*v81)--;
              if ( v82 <= 0 )
                j_j_j_j__ZdlPv_9(v76);
            ++v69;
            Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v240);
      v83 = v266;
      v15 = v66;
      v84 = 0;
      v85 = *(_QWORD *)(v266 + 28) >> 32;
      v86 = *(_QWORD *)(v266 + 28);
      if ( v86 != v85 )
        do
          if ( !Json::Value::compare((Json::Value *)v86, v267) )
            v91 = sub_21E78D0(v18, 47, 0xFFFFFFFF);
            sub_21E9040(v17, v18, 0, (unsigned int)v91);
            v226 = *(_DWORD *)(v86 + 16);
            v227 = v268;
            v228 = v268;
            v229 = 0;
            sub_21E8AF4(&v230, (int *)v17);
            sub_148EFE0((int)&v276, (int)&v226);
            v92 = (void *)(v230 - 12);
            if ( (int *)(v230 - 12) != &dword_28898C0 )
              v87 = (unsigned int *)(v230 - 4);
                  v88 = __ldrex(v87);
                while ( __strex(v88 - 1, v87) );
                v88 = (*v87)--;
              if ( v88 <= 0 )
                j_j_j_j__ZdlPv_9(v92);
            v93 = (void *)(v231 - 12);
            if ( (int *)(v231 - 12) != &dword_28898C0 )
              v89 = (unsigned int *)(v231 - 4);
                  v90 = __ldrex(v89);
                while ( __strex(v90 - 1, v89) );
                v90 = (*v89)--;
              if ( v90 <= 0 )
                j_j_j_j__ZdlPv_9(v93);
            v84 = 1;
          v86 += 24;
        while ( v86 != v85 );
        v83 = v266;
      v95 = *(_QWORD *)(v83 + 40) >> 32;
      v94 = *(_QWORD *)(v83 + 40);
      if ( v94 != v95 )
          v100 = Json::Value::type(v267);
          v101 = *(_DWORD *)v94;
          v102 = v100 == 2;
          if ( v100 == 2 )
            v102 = (v101 | 2) == 3;
          if ( v102 )
            goto LABEL_448;
          v103 = v100;
          v104 = 0;
          if ( (v101 | 1) == 3 )
            v104 = 1;
          if ( v100 != 1 )
            v103 = 0;
          v105 = v101 == v100;
          if ( v101 != v100 )
            v105 = (v103 & v104) == 1;
          if ( v105 )
LABEL_448:
            v106 = sub_21E78D0(v18, 47, 0xFFFFFFFF);
            sub_21E9040((void **)&v225, v18, 0, (unsigned int)v106);
            v220 = *(_DWORD *)(v94 + 4);
            v221 = v268;
            v222 = v268;
            v223 = 0;
            sub_21E8AF4(&v224, &v225);
            sub_148EFE0((int)&v276, (int)&v220);
            v107 = (void *)(v224 - 12);
            if ( (int *)(v224 - 12) != &dword_28898C0 )
              v96 = (unsigned int *)(v224 - 4);
                  v97 = __ldrex(v96);
                while ( __strex(v97 - 1, v96) );
                v97 = (*v96)--;
              if ( v97 <= 0 )
                j_j_j_j__ZdlPv_9(v107);
            v108 = (void *)(v225 - 12);
            if ( (int *)(v225 - 12) != &dword_28898C0 )
              v98 = (unsigned int *)(v225 - 4);
                  v99 = __ldrex(v98);
                while ( __strex(v99 - 1, v98) );
                v99 = (*v98)--;
              if ( v99 <= 0 )
                j_j_j_j__ZdlPv_9(v108);
          v94 += 12;
        while ( v94 != v95 );
      v109 = 0;
      if ( !*(_BYTE *)(v83 + 13) )
        v109 = 1;
      v110 = v109 | v84;
      v16 &= v110;
      if ( !(v110 & 1) && v202 )
        v200 = v18;
        v111 = 1;
        v219 = (char *)&unk_28898CC;
        v113 = (const Json::Value *)(*(_QWORD *)(v83 + 28) >> 32);
        v112 = (const Json::Value *)*(_QWORD *)(v83 + 28);
        if ( v112 != v113 )
          do
            Json::FastWriter::FastWriter((Json::FastWriter *)&v217);
            Json::FastWriter::write((Json::FastWriter *)&v216, (const Json::Value *)&v217, v112);
            v114 = *(_DWORD *)(v216 - 12);
            v115 = v114 - 1;
            if ( !v114 )
              sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v115, 0);
            sub_21E7EE0((const void **)&v216, v115, (_BYTE *)1, 0);
            v215 = (char *)&unk_28898CC;
            sub_21E6FCC((const void **)&v215, *(_DWORD *)(v216 - 12) + (~v111 & 1));
            v116 = ",";
            if ( v111 & 1 )
              v116 = (char *)&unk_257BC67;
            sub_21E7408((const void **)&v215, v116, ~v111 & 1);
            sub_21E72F0((const void **)&v215, (const void **)&v216);
            sub_21E72F0((const void **)&v219, (const void **)&v215);
            v117 = v215 - 12;
            if ( (int *)(v215 - 12) != &dword_28898C0 )
              v120 = (unsigned int *)(v215 - 4);
                  v121 = __ldrex(v120);
                while ( __strex(v121 - 1, v120) );
                v121 = (*v120)--;
              if ( v121 <= 0 )
                j_j_j_j__ZdlPv_9(v117);
            v118 = (void *)(v216 - 12);
            if ( (int *)(v216 - 12) != &dword_28898C0 )
              v122 = (unsigned int *)(v216 - 4);
                  v123 = __ldrex(v122);
                while ( __strex(v123 - 1, v122) );
                v123 = (*v122)--;
              if ( v123 <= 0 )
                j_j_j_j__ZdlPv_9(v118);
            v217 = &off_2725B14;
            v119 = (void *)(v218 - 12);
            if ( (int *)(v218 - 12) != &dword_28898C0 )
              v124 = (unsigned int *)(v218 - 4);
                  v125 = __ldrex(v124);
                while ( __strex(v125 - 1, v124) );
                v125 = (*v124)--;
              if ( v125 <= 0 )
                j_j_j_j__ZdlPv_9(v119);
            Json::Writer::~Writer((Json::Writer *)&v217);
            v112 = (const Json::Value *)((char *)v112 + 24);
            v111 = 0;
          while ( v112 != v113 );
          v83 = v266;
          v111 = 0;
        v174 = (int *)*(_QWORD *)(v83 + 40);
        v17 = (void **)&v231;
        v18 = v200;
        for ( j = (int *)(*(_QWORD *)(v83 + 40) >> 32); v174 != j; v111 = 0 )
          v179 = *v174;
          v210 = 0;
          v211 = 0;
          v212 = 0;
          v180 = ",";
          if ( v111 & 1 )
            v180 = (const char *)&unk_257BC67;
          v181 = operator new(4u);
          v182 = v181;
          v181 = (char *)v181 + 4;
          v210 = v182;
          v212 = v181;
          *(_DWORD *)v182 = v179;
          v211 = v181;
          gatherTypeStrings((const void **)&v213, (unsigned __int64 *)&v210);
          v183 = sub_21E82D8((const void **)&v213, 0, (unsigned int)v180, (_BYTE *)(~v111 & 1));
          v214 = (char *)*v183;
          *v183 = &unk_28898CC;
          sub_21E72F0((const void **)&v219, (const void **)&v214);
          v184 = v214 - 12;
          if ( (int *)(v214 - 12) != &dword_28898C0 )
            v175 = (unsigned int *)(v214 - 4);
            if ( &pthread_create )
              __dmb();
                v176 = __ldrex(v175);
              while ( __strex(v176 - 1, v175) );
              v176 = (*v175)--;
            if ( v176 <= 0 )
              j_j_j_j__ZdlPv_9(v184);
          v185 = (void *)(v213 - 12);
          if ( (int *)(v213 - 12) != &dword_28898C0 )
            v177 = (unsigned int *)(v213 - 4);
                v178 = __ldrex(v177);
              while ( __strex(v178 - 1, v177) );
              v178 = (*v177)--;
            if ( v178 <= 0 )
              j_j_j_j__ZdlPv_9(v185);
          if ( v210 )
            operator delete(v210);
          v174 += 3;
        sub_21E94B4((void **)&v208, "jsonValidationError.invalidValueError");
        sub_21E8AF4(&v203, v200);
        sub_21E8AF4(&v204, (int *)&v219);
        v205 = 0;
        v206 = 0;
        v207 = 0;
        v205 = (char *)operator new(8u);
        v207 = v205 + 8;
        v206 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                         (int)&v203,
                         (int)&v205,
                         (int)v205);
        I18n::get((int *)&v209, &v208, (unsigned __int64 *)&v205);
        v186 = *(_QWORD *)(v202 + 4);
        if ( (_DWORD)v186 == HIDWORD(v186) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)v202,
            &v209);
          v187 = v209;
          *(_DWORD *)v186 = v209;
          v187 = (char *)&unk_28898CC;
          v209 = (char *)&unk_28898CC;
          *(_DWORD *)(v202 + 4) = v186 + 4;
        v188 = v187 - 12;
        v15 = 1;
        if ( (int *)(v187 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v187 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v188);
        v189 = (int)v206;
        v190 = v205;
        if ( v205 != v206 )
            v193 = (int *)(*(_DWORD *)v190 - 12);
            if ( v193 != &dword_28898C0 )
              v191 = (unsigned int *)(*(_DWORD *)v190 - 4);
                  v192 = __ldrex(v191);
                while ( __strex(v192 - 1, v191) );
                v192 = (*v191)--;
              if ( v192 <= 0 )
                j_j_j_j__ZdlPv_9(v193);
            v190 += 4;
          while ( v190 != (char *)v189 );
          v190 = v205;
        if ( v190 )
          operator delete(v190);
        v194 = (void *)(v204 - 12);
        if ( (int *)(v204 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v204 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v194);
        v195 = (void *)(v203 - 12);
        if ( (int *)(v203 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v203 - 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v195);
        v196 = (void *)(v208 - 12);
        if ( (int *)(v208 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v208 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v196);
        v197 = v219 - 12;
        if ( (int *)(v219 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v219 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v197);
        v16 = 0;
      v198 = (void *)(v270 - 12);
      if ( (int *)(v270 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v270 - 4);
        if ( &pthread_create )
          __dmb();
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v198);
      v19 = (int)v278;
    while ( v282 != v278 );
  sub_148F130((int)&v276);
  return v16 & 1;
}


int __fastcall JsonValidator::Property::required(int result)
{
  *(_BYTE *)(result + 12) = 1;
  return result;
}


void __fastcall JsonValidator::generateDocs(JsonValidator *this, const JsonValidator::Property *a2)
{
  const JsonValidator::Property *v2; // r5@1
  JsonValidator *v3; // r8@1
  void *v4; // r6@1
  char *v5; // r7@1
  void *v6; // r0@2
  bool v7; // cf@2
  char *v8; // r0@4
  const void **v9; // r4@5
  char *v10; // r5@5
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  __int64 v13; // r8@14
  void *v14; // r0@15
  int v15; // r7@18
  int v16; // r6@20
  unsigned int v17; // r0@21
  int v18; // r7@22
  unsigned int v19; // r0@22
  bool *v20; // r4@22
  int v21; // r7@25
  int v22; // r6@27
  int i; // r4@28
  int v24; // r6@30
  Json::Value *v25; // r5@31
  int v26; // r7@31
  Json::FastWriter *v27; // r6@31
  Json::FastWriter *v28; // r4@32
  int v29; // r0@32
  int v30; // r2@32
  int v31; // r6@33
  void *v32; // r0@33
  void *v33; // r0@34
  unsigned int *v34; // r2@37
  signed int v35; // r1@39
  unsigned int *v36; // r2@41
  signed int v37; // r1@43
  int v38; // r7@54
  unsigned int *v39; // r2@56
  signed int v40; // r1@58
  Json::FastWriter *v41; // r8@64
  int v42; // r6@64
  void *v43; // r0@64
  signed int v44; // r0@66
  void *v45; // r0@68
  void *v46; // r0@70
  void *v47; // r0@71
  void *v48; // r4@72
  unsigned int v49; // r5@73
  unsigned int v50; // r6@74
  void *v51; // t1@75
  unsigned int *v52; // r2@78
  signed int v53; // r1@80
  unsigned int *v54; // r2@82
  signed int v55; // r1@84
  int j; // [sp+18h] [bp-148h]@31
  int k; // [sp+18h] [bp-148h]@54
  JsonValidator *v58; // [sp+24h] [bp-13Ch]@14
  int v59; // [sp+28h] [bp-138h]@70
  void **v60; // [sp+2Ch] [bp-134h]@70
  int v61; // [sp+30h] [bp-130h]@71
  char v62; // [sp+38h] [bp-128h]@67
  int v63; // [sp+48h] [bp-118h]@64
  int v64; // [sp+4Ch] [bp-114h]@64
  char v65; // [sp+50h] [bp-110h]@64
  int v66; // [sp+64h] [bp-FCh]@56
  int v67; // [sp+68h] [bp-F8h]@33
  int v68; // [sp+6Ch] [bp-F4h]@33
  char v69; // [sp+70h] [bp-F0h]@33
  int v70; // [sp+80h] [bp-E0h]@32
  void **v71; // [sp+84h] [bp-DCh]@31
  int v72; // [sp+88h] [bp-D8h]@34
  int v73; // [sp+90h] [bp-D0h]@30
  int v74; // [sp+94h] [bp-CCh]@30
  char v75; // [sp+98h] [bp-C8h]@5
  int v76; // [sp+A8h] [bp-B8h]@27
  int v77; // [sp+ACh] [bp-B4h]@27
  char v78; // [sp+B0h] [bp-B0h]@27
  char v79; // [sp+C0h] [bp-A0h]@25
  char v80; // [sp+D0h] [bp-90h]@22
  char v81; // [sp+E0h] [bp-80h]@20
  char v82; // [sp+F0h] [bp-70h]@18
  int v83; // [sp+104h] [bp-5Ch]@5
  const JsonValidator::Property *v84; // [sp+108h] [bp-58h]@4
  JsonValidator *v85; // [sp+10Ch] [bp-54h]@4
  void *ptr; // [sp+110h] [bp-50h]@1
  int v87; // [sp+114h] [bp-4Ch]@1
  char *v88; // [sp+118h] [bp-48h]@4
  void *v89; // [sp+11Ch] [bp-44h]@4
  char *v90; // [sp+120h] [bp-40h]@4
  void **v91; // [sp+124h] [bp-3Ch]@4
  char *v92; // [sp+128h] [bp-38h]@4
  void *v93; // [sp+12Ch] [bp-34h]@4
  char *v94; // [sp+130h] [bp-30h]@4
  char *v95; // [sp+134h] [bp-2Ch]@4

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  _aeabi_memclr8(&ptr, 40);
  v87 = 8;
  v4 = operator new(0x20u);
  ptr = v4;
  v5 = (char *)v4 + 12;
  do
  {
    v6 = operator new(0x200u);
    v7 = v5 >= (char *)v4 + 12;
    *(_DWORD *)v5 = v6;
    v5 += 4;
  }
  while ( !v7 );
  v91 = (void **)((char *)v4 + 12);
  v89 = (void *)*((_DWORD *)v4 + 3);
  v90 = (char *)v89 + 512;
  v94 = (char *)v89 + 512;
  v95 = (char *)v4 + 12;
  v88 = (char *)v89;
  v92 = (char *)v89;
  v93 = v89;
  v84 = v2;
  v85 = v3;
  sub_148FB34((int)&ptr, &v84);
  v8 = v88;
  if ( v92 != v88 )
    v9 = (const void **)&v83;
    v10 = &v75;
    do
    {
      v58 = v3;
      v13 = *(_QWORD *)v8;
      if ( v8 == v90 - 8 )
      {
        operator delete(v89);
        ++v91;
        v14 = *v91;
        v89 = v14;
        v90 = (char *)v14 + 512;
      }
      else
        v14 = v8 + 8;
      v88 = (char *)v14;
      gatherTypeStrings(v9, (unsigned __int64 *)v13);
      if ( *(_DWORD *)(v83 - 12) )
        v15 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), "validTypes");
        Json::Value::Value((int)&v82, (const char **)v9);
        Json::Value::operator=(v15, (const Json::Value *)&v82);
        Json::Value::~Value((Json::Value *)&v82);
      if ( *(_DWORD *)(*(_DWORD *)(v13 + 16) - 12) )
        v16 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), "description");
        Json::Value::Value((int)&v81, (const char **)(v13 + 16));
        Json::Value::operator=(v16, (const Json::Value *)&v81);
        Json::Value::~Value((Json::Value *)&v81);
      v17 = *(_WORD *)(v13 + 12);
      if ( (_BYTE)v17 )
        v18 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), "required");
        Json::Value::Value((Json::Value *)&v80, *(_BYTE *)(v13 + 12));
        Json::Value::operator=(v18, (const Json::Value *)&v80);
        Json::Value::~Value((Json::Value *)&v80);
        v20 = (bool *)(v13 + 13);
        v19 = *(_BYTE *)(v13 + 13);
        v19 = v17 >> 8;
      if ( v19 )
        v21 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), "requiresConditionalProperty");
        Json::Value::Value((Json::Value *)&v79, *v20);
        Json::Value::operator=(v21, (const Json::Value *)&v79);
        Json::Value::~Value((Json::Value *)&v79);
      if ( *(_DWORD *)(v13 + 20) )
        v22 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), "childProperty");
        Json::Value::Value(&v78, 0);
        Json::Value::operator=(v22, (const Json::Value *)&v78);
        Json::Value::~Value((Json::Value *)&v78);
        v76 = *(_DWORD *)(v13 + 20);
        v77 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), "childProperty");
        sub_148FB34((int)&ptr, &v76);
      for ( i = *(_DWORD *)(v13 + 60); i; i = *(_DWORD *)i )
        v24 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), (const char **)(i + 4));
        Json::Value::Value(v10, 0);
        Json::Value::operator=(v24, (const Json::Value *)v10);
        Json::Value::~Value((Json::Value *)v10);
        v73 = *(_DWORD *)(i + 8);
        v74 = Json::Value::operator[]((Json::Value *)HIDWORD(v13), (const char **)(i + 4));
        sub_148FB34((int)&ptr, &v73);
      v25 = (Json::Value *)Json::Value::operator[]((Json::Value *)HIDWORD(v13), "conditional");
      v26 = *(_QWORD *)(v13 + 28);
      v27 = (Json::FastWriter *)&v71;
      for ( j = *(_QWORD *)(v13 + 28) >> 32; v26 != j; v26 += 24 )
        Json::FastWriter::FastWriter(v27);
        Json::FastWriter::write((Json::FastWriter *)&v70, v27, (const Json::Value *)v26);
        v28 = v27;
        v29 = *(_DWORD *)(v70 - 12);
        v30 = v29 - 1;
        if ( !v29 )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v30, 0);
        sub_21E7EE0((const void **)&v70, v30, (_BYTE *)1, 0);
        v31 = Json::Value::operator[](v25, (const char **)&v70);
        Json::Value::Value(&v69, 0);
        Json::Value::operator=(v31, (const Json::Value *)&v69);
        Json::Value::~Value((Json::Value *)&v69);
        v67 = *(_DWORD *)(v26 + 16);
        v68 = Json::Value::operator[](v25, (const char **)&v70);
        sub_148FB34((int)&ptr, &v67);
        v27 = v28;
        v32 = (void *)(v70 - 12);
        if ( (int *)(v70 - 12) != &dword_28898C0 )
        {
          v34 = (unsigned int *)(v70 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v27 = v28;
          }
          else
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        }
        v71 = &off_2725B14;
        v33 = (void *)(v72 - 12);
        if ( (int *)(v72 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v72 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        Json::Writer::~Writer(v27);
      v38 = *(_QWORD *)(v13 + 40);
      for ( k = *(_QWORD *)(v13 + 40) >> 32; v38 != k; v38 += 12 )
        getJsonTypeString((void **)&v66, (_DWORD *)v38);
        v41 = v27;
        v42 = Json::Value::operator[](v25, (const char **)&v66);
        Json::Value::Value(&v65, 0);
        Json::Value::operator=(v42, (const Json::Value *)&v65);
        Json::Value::~Value((Json::Value *)&v65);
        v63 = *(_DWORD *)(v38 + 4);
        v64 = Json::Value::operator[](v25, (const char **)&v66);
        sub_148FB34((int)&ptr, &v63);
        v27 = v41;
        v43 = (void *)(v66 - 12);
        if ( (int *)(v66 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v66 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v27 = v41;
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
      v44 = Json::Value::isNull(v25);
      v9 = (const void **)&v83;
      v10 = &v75;
      if ( v44 == 1 )
        Json::Value::removeMember((Json::Value *)&v62, (const char *)HIDWORD(v13), "conditional");
        Json::Value::~Value((Json::Value *)&v62);
      v3 = v58;
      v45 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v83 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v45);
      v8 = v88;
    }
    while ( v92 != v88 );
  Json::FastWriter::FastWriter((Json::FastWriter *)&v60);
  Json::FastWriter::write((Json::FastWriter *)&v59, (const Json::Value *)&v60, v3);
  v46 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v59 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
    else
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v60 = &off_2725B14;
  v47 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v61 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  Json::Writer::~Writer((Json::Writer *)&v60);
  v48 = ptr;
  if ( ptr )
    v49 = (unsigned int)v95;
    if ( v91 < (void **)v95 + 1 )
      v50 = (unsigned int)(v91 - 1);
        v51 = *(void **)(v50 + 4);
        v50 += 4;
        operator delete(v51);
      while ( v50 < v49 );
    operator delete(v48);
}


void __fastcall JsonValidator::generateDocs(JsonValidator *this, const JsonValidator::Property *a2)
{
  JsonValidator::generateDocs(this, a2);
}


int __fastcall JsonValidator::Property::requireConditionalProperty(int result)
{
  *(_BYTE *)(result + 13) = 1;
  return result;
}


JsonValidator::Property *__fastcall JsonValidator::Property::Property(JsonValidator::Property *this, const JsonValidator::Property *a2)
{
  const JsonValidator::Property *v2; // r6@1
  JsonValidator::Property *v3; // r11@1
  __int64 v4; // r0@1
  char *v5; // r5@1
  signed int v6; // r0@1
  unsigned int v7; // r4@1
  __int64 v8; // kr00_8@4
  int v9; // r4@4
  int v10; // r0@6
  unsigned int *v11; // r0@7
  unsigned int v12; // r1@9
  signed int v13; // r1@12
  void *v14; // r0@12
  unsigned int v15; // r5@12
  int v16; // r1@15 OVERLAPPED
  int v17; // r2@15 OVERLAPPED
  int v18; // r5@16
  unsigned int *v19; // r5@17
  unsigned int v20; // r4@19
  int v21; // r0@23
  JsonValidator::Property *v23; // [sp+4h] [bp-2Ch]@23

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)a2;
  v5 = 0;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  v6 = HIDWORD(v4) - v4;
  *((_DWORD *)v3 + 2) = 0;
  v7 = v6 >> 2;
  if ( v6 >> 2 )
  {
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v5 = (char *)operator new(v6);
  }
  *(_DWORD *)v3 = v5;
  *((_DWORD *)v3 + 1) = v5;
  *((_DWORD *)v3 + 2) = &v5[4 * v7];
  v8 = *(_QWORD *)v2;
  v9 = (HIDWORD(v8) - (signed int)v8) >> 2;
  if ( 0 != v9 )
    _aeabi_memmove4(v5, v8);
  *((_DWORD *)v3 + 1) = &v5[4 * v9];
  *((_WORD *)v3 + 6) = *((_WORD *)v2 + 6);
  sub_21E8AF4((int *)v3 + 4, (int *)v2 + 4);
  *((_DWORD *)v3 + 5) = *((_DWORD *)v2 + 5);
  v10 = *((_DWORD *)v2 + 6);
  *((_DWORD *)v3 + 6) = v10;
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    }
    else
      ++*v11;
  std::vector<std::pair<Json::Value,std::shared_ptr<JsonValidator::Property>>,std::allocator<std::pair<Json::Value,std::shared_ptr<JsonValidator::Property>>>>::vector(
    (int)v3 + 28,
    (unsigned __int64 *)((char *)v2 + 28));
  v13 = (*((_QWORD *)v2 + 5) >> 32) - *((_QWORD *)v2 + 5);
  v14 = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_DWORD *)v3 + 11) = 0;
  *((_DWORD *)v3 + 12) = 0;
  v15 = -1431655765 * (v13 >> 2);
  if ( v13 )
    if ( v15 >= 0x15555556 )
    v14 = operator new(v13);
  *((_DWORD *)v3 + 10) = v14;
  *((_DWORD *)v3 + 11) = v14;
  *((_DWORD *)v3 + 12) = (char *)v14 + 12 * v15;
  for ( *(_QWORD *)&v16 = *((_QWORD *)v2 + 5); v16 != v17; v14 = (char *)v14 + 12 )
    *(_DWORD *)v14 = *(_DWORD *)v16;
    *((_DWORD *)v14 + 1) = *(_DWORD *)(v16 + 4);
    v18 = *(_DWORD *)(v16 + 8);
    *((_DWORD *)v14 + 2) = v18;
    if ( v18 )
      v19 = (unsigned int *)(v18 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
      }
      else
        ++*v19;
    v16 += 12;
  *((_DWORD *)v3 + 13) = 0;
  v21 = (int)v3 + 52;
  *(_DWORD *)(v21 + 4) = *((_DWORD *)v2 + 14);
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = *((_DWORD *)v2 + 16);
  *(_QWORD *)(v21 + 16) = *(_QWORD *)((char *)v2 + 68);
  v23 = (JsonValidator::Property *)((char *)v3 + 52);
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>,std::allocator<std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>,std::allocator<std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>,std::allocator<std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,std::shared_ptr<JsonValidator::Property>>,true> const*)#1}>(
    (unsigned int *)v3 + 13,
    (int)v2 + 52,
    (int *)&v23);
  return v3;
}


int __fastcall JsonValidator::Property::description(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 16), a2);
  return v2;
}


int __fastcall JsonValidator::Property::Property(__int64 this)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3

  v1 = this;
  *(_WORD *)(this + 12) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_QWORD *)(this + 16) = (unsigned int)&unk_28898CC;
  *(_DWORD *)(this + 68) = 1065353216;
  LODWORD(this) = this + 68;
  v2 = sub_21E6254(*(double *)&this);
  *(_DWORD *)(v1 + 56) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 76) = 0;
    v4 = (void *)(v1 + 76);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 52) = v4;
  return v1;
}


JsonValidator::Property *__fastcall JsonValidator::Property::addConditionalProperty(JsonValidator::Property *this, const Json::Value *a2, const JsonValidator::Property *a3)
{
  const Json::Value *v3; // r5@1
  JsonValidator::Property *v4; // r4@1
  __int64 v5; // r0@1
  Json::Value *v6; // r0@2
  int v7; // r1@2
  int v8; // r5@4
  unsigned int *v9; // r1@5
  unsigned int v10; // r0@7
  unsigned int *v11; // r6@11
  unsigned int v12; // r0@13
  int v13; // r5@18
  unsigned int *v14; // r1@19
  unsigned int v15; // r0@21
  unsigned int *v16; // r6@25
  unsigned int v17; // r0@27
  unsigned int v19; // [sp+0h] [bp-38h]@1
  int v20; // [sp+4h] [bp-34h]@1
  char v21; // [sp+8h] [bp-30h]@1
  unsigned int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@1
  char v24; // [sp+24h] [bp-14h]@1

  v3 = a2;
  v4 = this;
  std::__shared_ptr<JsonValidator::Property,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<JsonValidator::Property>,JsonValidator::Property const&>(
    (int)&v19,
    (int)&v24,
    a3);
  Json::Value::Value((Json::Value *)&v21, v3);
  v22 = v19;
  v23 = v20;
  v19 = 0;
  v20 = 0;
  v5 = *((_QWORD *)v4 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    std::vector<std::pair<Json::Value,std::shared_ptr<JsonValidator::Property>>,std::allocator<std::pair<Json::Value,std::shared_ptr<JsonValidator::Property>>>>::_M_emplace_back_aux<std::pair<Json::Value,std::shared_ptr<JsonValidator::Property>>>(
      (unsigned __int64 *)((char *)v4 + 28),
      (int)&v21);
  }
  else
    v6 = Json::Value::Value((Json::Value *)v5, (const Json::Value *)&v21);
    *((_QWORD *)v6 + 2) = v22;
    v7 = v23;
    v23 = 0;
    *((_DWORD *)v6 + 5) = v7;
    v22 = 0;
    *((_DWORD *)v4 + 8) += 24;
  v8 = v23;
  if ( v23 )
    v9 = (unsigned int *)(v23 + 4);
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
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  Json::Value::~Value((Json::Value *)&v21);
  v13 = v20;
  if ( v20 )
    v14 = (unsigned int *)(v20 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return v4;
}


JsonValidator::Property *__fastcall JsonValidator::Property::addChildProperty(JsonValidator::Property *this, const JsonValidator::Property *a2)
{
  JsonValidator::Property *v2; // r4@1
  __int64 v3; // r0@1
  int v4; // r5@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r6@22
  unsigned int v13; // r0@24
  char v15; // [sp+4h] [bp-1Ch]@1
  int v16; // [sp+8h] [bp-18h]@1
  char v17; // [sp+Ch] [bp-14h]@1

  v2 = this;
  std::__shared_ptr<JsonValidator::Property,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<JsonValidator::Property>,JsonValidator::Property const&>(
    (int)&v15,
    (int)&v17,
    a2);
  v3 = *(_QWORD *)&v15;
  *(_DWORD *)&v15 = 0;
  v16 = 0;
  *((_DWORD *)v2 + 5) = v3;
  v4 = *((_DWORD *)v2 + 6);
  *((_DWORD *)v2 + 6) = HIDWORD(v3);
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
  v9 = v16;
  if ( v16 )
    v10 = (unsigned int *)(v16 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return v2;
}


int __fastcall JsonValidator::Property::addType(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1
  void *v5; // r6@3
  signed int v6; // r1@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r5@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v5 = *(void **)v2;
    v6 = v4 - *(_DWORD *)v2;
    v7 = v6 >> 2;
    if ( !(v6 >> 2) )
      v7 = 1;
    v8 = v7 + (v6 >> 2);
    v9 = v8;
    if ( 0 != v8 >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)v2 >> 32;
      v5 = (void *)*(_QWORD *)v2;
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v5] = v3;
    v11 = &v10[v4 - (_DWORD)v5];
    if ( 0 != ((signed int)v4 - (signed int)v5) >> 2 )
      _aeabi_memmove4(v10, v5);
    v12 = (int)(v11 + 4);
    if ( v5 )
      operator delete(v5);
    *(_QWORD *)v2 = *(_QWORD *)&v10;
    *(_DWORD *)(v2 + 8) = &v10[4 * v9];
  }
  else
    *(_DWORD *)v4 = v3;
    *(_DWORD *)(v2 + 4) = v4 + 4;
  return v2;
}


int __fastcall JsonValidator::Property::addConditionalProperty(int a1, int a2, const JsonValidator::Property *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r1@1
  __int64 v7; // kr00_8@1
  int v8; // r5@3
  unsigned int *v9; // r1@4
  unsigned int v10; // r0@6
  unsigned int *v11; // r6@10
  unsigned int v12; // r0@12
  int v13; // r5@17
  unsigned int *v14; // r1@18
  unsigned int v15; // r0@20
  unsigned int *v16; // r6@24
  unsigned int v17; // r0@26
  int v19; // [sp+0h] [bp-28h]@1
  int v20; // [sp+4h] [bp-24h]@1
  int v21; // [sp+8h] [bp-20h]@1
  int v22; // [sp+Ch] [bp-1Ch]@1
  int v23; // [sp+10h] [bp-18h]@1
  char v24; // [sp+14h] [bp-14h]@1

  v3 = a2;
  v4 = a1;
  std::__shared_ptr<JsonValidator::Property,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<JsonValidator::Property>,JsonValidator::Property const&>(
    (int)&v19,
    (int)&v24,
    a3);
  v5 = v19;
  v6 = v20;
  v21 = v3;
  v22 = v19;
  v23 = v20;
  v19 = 0;
  v20 = 0;
  v7 = *(_QWORD *)(v4 + 44);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<std::pair<Json::ValueType,std::shared_ptr<JsonValidator::Property>>,std::allocator<std::pair<Json::ValueType,std::shared_ptr<JsonValidator::Property>>>>::_M_emplace_back_aux<std::pair<Json::ValueType,std::shared_ptr<JsonValidator::Property>>>(
      (unsigned __int64 *)(v4 + 40),
      (int)&v21);
    v8 = v23;
    if ( v23 )
    {
      v9 = (unsigned int *)(v23 + 4);
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
        v11 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
  }
  else
    *(_DWORD *)v7 = v3;
    *(_DWORD *)(v7 + 4) = v5;
    v23 = 0;
    *(_DWORD *)(v7 + 8) = v6;
    v22 = 0;
    *(_DWORD *)(v4 + 44) = v7 + 12;
  v13 = v20;
  if ( v20 )
    v14 = (unsigned int *)(v20 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return v4;
}
