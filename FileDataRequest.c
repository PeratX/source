

int __fastcall FileDataRequest::FileDataRequest(int a1, int a2, int *a3, int *a4, int a5)
{
  int v5; // r4@1
  int *v6; // r6@1
  int *v7; // r7@1
  void (__fastcall *v8)(int, int, signed int); // r3@1
  int v9; // r6@3

  v5 = a1;
  v6 = a4;
  v7 = a3;
  RequestHandler::RequestHandler(a1, a2, -1, -1, 15);
  *(_DWORD *)v5 = &off_26DDB70;
  sub_119C854((int *)(v5 + 60), v7);
  *(_DWORD *)(v5 + 72) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v8 )
  {
    v8(v5 + 64, a5, 2);
    *(_DWORD *)(v5 + 76) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 72) = *(_DWORD *)(a5 + 8);
  }
  sub_119C854((int *)(v5 + 80), v6);
  *(_DWORD *)(v5 + 84) = 0;
  v9 = v5 + 84;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  j__ZNSt12__shared_ptrI16FileDataResponseLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v5 + 96);
  return v5;
}


int __fastcall FileDataRequest::onComplete(FileDataRequest *this)
{
  FileDataRequest *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 18);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 19))((char *)v1 + 64, *((_DWORD *)v1 + 24));
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 18);
    if ( v3 )
    {
      v3((char *)v1 + 64, (char *)v1 + 64, 3);
      result = 0;
      *((_DWORD *)v1 + 18) = 0;
      *((_DWORD *)v1 + 19) = 0;
    }
  }
  return result;
}


RakNet *__fastcall FileDataRequest::send(FileDataRequest *this)
{
  FileDataRequest *v1; // r8@1
  int *v2; // r11@1
  void *v3; // r0@1
  int *v4; // r9@2
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  const void **v8; // r0@5
  const void **v9; // r0@5
  const void **v10; // r0@5
  int v11; // r6@5
  char *v12; // r0@6
  char *v13; // r0@7
  void *v14; // r0@8
  __int64 v15; // r0@11
  int v16; // r5@11
  unsigned int *v17; // r1@12
  unsigned int v18; // r0@14
  __int64 v19; // r0@20
  int v20; // r5@20
  unsigned int *v21; // r1@21
  unsigned int v22; // r0@23
  unsigned int *v23; // r4@27
  unsigned int v24; // r0@29
  unsigned int *v25; // r4@33
  unsigned int v26; // r0@35
  void *v27; // r0@37
  int v28; // r3@40
  unsigned int v29; // r7@40
  unsigned int *v30; // r0@41
  unsigned int v31; // r1@43
  unsigned int *v32; // r2@45
  signed int v33; // r1@47
  unsigned int *v34; // r2@49
  signed int v35; // r1@51
  unsigned int *v36; // r2@53
  signed int v37; // r1@55
  unsigned int *v38; // r2@57
  signed int v39; // r1@59
  unsigned int *v40; // r1@61
  signed int v41; // r0@63
  unsigned int *v42; // r2@65
  signed int v43; // r1@67
  unsigned int *v44; // r2@69
  signed int v45; // r1@71
  unsigned int *v46; // r2@73
  signed int v47; // r1@75
  int v48; // r5@80
  unsigned int *v49; // r1@81
  unsigned int v50; // r0@83
  unsigned int *v51; // r4@87
  unsigned int v52; // r0@89
  int v53; // r0@96
  unsigned int *v54; // r1@97
  unsigned int v55; // r2@98
  int v56; // r5@101
  unsigned int *v57; // r1@102
  unsigned int v58; // r0@104
  unsigned int *v59; // r4@108
  unsigned int v60; // r0@110
  int v61; // r5@115
  unsigned int *v62; // r1@116
  unsigned int v63; // r0@118
  unsigned int *v64; // r4@122
  unsigned int v65; // r0@124
  int v66; // r0@131
  unsigned int *v67; // r1@132
  unsigned int v68; // r2@133
  unsigned int *v69; // r1@137
  unsigned int v70; // r0@139
  __int64 v71; // r0@182
  int v72; // r0@182
  int v73; // r6@183
  const char *v74; // r10@183
  size_t v75; // r0@183
  size_t v76; // r4@183
  unsigned int v77; // r5@183
  __int64 v78; // r0@190
  int v79; // r6@190
  unsigned int *v80; // r1@191
  unsigned int v81; // r0@193
  unsigned int *v82; // r4@197
  unsigned int v83; // r0@199
  __int64 v84; // kr08_8@204
  unsigned int *v85; // r0@205
  unsigned int v86; // r1@207
  int v87; // r5@210
  unsigned int *v88; // r1@211
  unsigned int v89; // r0@213
  unsigned int *v90; // r6@217
  unsigned int v91; // r0@219
  void *v92; // r0@224
  int v93; // r3@225
  __int64 v94; // r0@225
  unsigned int v95; // r5@225
  void *v96; // r2@225
  unsigned int *v97; // r0@229
  unsigned int v98; // r1@231
  void *v99; // r5@234
  int v100; // r1@234
  unsigned int v101; // r6@234
  void *v102; // r2@234
  int v103; // r3@237
  int v104; // r6@237
  unsigned int *v105; // r0@238
  unsigned int v106; // r1@240
  unsigned int *v107; // r0@244
  unsigned int v108; // r1@246
  unsigned int *v109; // r0@250
  unsigned int v110; // r1@252
  int v111; // r3@255
  unsigned int *v112; // r0@256
  unsigned int v113; // r1@258
  unsigned int *v114; // r0@262
  unsigned int v115; // r1@264
  __int64 v116; // r0@268
  int v117; // r5@268
  unsigned int *v118; // r1@269
  unsigned int v119; // r0@271
  unsigned int *v120; // r4@275
  unsigned int v121; // r0@277
  int v122; // r5@282
  unsigned int *v123; // r1@283
  unsigned int v124; // r0@285
  unsigned int *v125; // r4@289
  unsigned int v126; // r0@291
  int v127; // r5@296
  unsigned int *v128; // r1@297
  unsigned int v129; // r0@299
  unsigned int *v130; // r4@303
  unsigned int v131; // r0@305
  void *v132; // r5@310
  unsigned int *v133; // r1@311
  unsigned int v134; // r0@313
  unsigned int *v135; // r4@317
  unsigned int v136; // r0@319
  void *v137; // r0@324
  int v138; // r0@325
  unsigned int *v139; // r2@326
  unsigned int v140; // r1@328
  int v141; // r5@333
  unsigned int *v142; // r1@334
  unsigned int v143; // r0@336
  unsigned int *v144; // r4@340
  unsigned int v145; // r0@342
  void *v146; // r5@347
  unsigned int *v147; // r1@348
  unsigned int v148; // r0@350
  unsigned int *v149; // r4@354
  unsigned int v150; // r0@356
  int v151; // r0@361
  unsigned int *v152; // r2@362
  unsigned int v153; // r1@364
  int v154; // r5@369
  unsigned int *v155; // r1@370
  unsigned int v156; // r0@372
  unsigned int *v157; // r4@376
  unsigned int v158; // r0@378
  int v159; // r0@383
  unsigned int *v160; // r1@384
  unsigned int v161; // r2@385
  int v162; // r5@388
  unsigned int *v163; // r1@389
  unsigned int v164; // r0@391
  unsigned int *v165; // r4@395
  unsigned int v166; // r0@397
  void *v167; // r5@402
  unsigned int *v168; // r1@403
  unsigned int v169; // r0@405
  unsigned int *v170; // r4@409
  unsigned int v171; // r0@411
  unsigned int *v172; // r1@417
  unsigned int v173; // r0@419
  unsigned int *v174; // r1@425
  unsigned int v175; // r0@427
  unsigned int *v176; // r4@431
  unsigned int v177; // r0@433
  int v178; // r5@438
  unsigned int *v179; // r1@439
  unsigned int v180; // r0@441
  unsigned int *v181; // r4@445
  unsigned int v182; // r0@447
  void *v183; // r0@453
  void *v184; // r0@454
  void *v185; // r0@455
  void *v186; // r0@456
  void *v187; // r0@457
  void *v188; // r0@458
  void *v189; // r0@459
  void *v190; // r0@460
  RakNet *v191; // r1@461
  RakNet *result; // r0@461
  unsigned int *v193; // r2@463
  signed int v194; // r1@465
  unsigned int *v195; // r2@467
  signed int v196; // r1@469
  unsigned int *v197; // r2@471
  signed int v198; // r1@473
  unsigned int *v199; // r2@475
  signed int v200; // r1@477
  unsigned int *v201; // r2@479
  signed int v202; // r1@481
  unsigned int *v203; // r2@483
  signed int v204; // r1@485
  unsigned int *v205; // r2@487
  signed int v206; // r1@489
  unsigned int *v207; // r2@491
  signed int v208; // r1@493
  unsigned int *v209; // r2@527
  signed int v210; // r1@529
  unsigned int *v211; // r2@531
  signed int v212; // r1@533
  unsigned int *v213; // r2@535
  signed int v214; // r1@537
  void *v215; // [sp+0h] [bp-1438h]@0
  void *v216; // [sp+0h] [bp-1438h]@249
  int v217; // [sp+4h] [bp-1434h]@0
  int v218; // [sp+4h] [bp-1434h]@249
  int v219; // [sp+8h] [bp-1430h]@182
  int v220; // [sp+8h] [bp-1430h]@249
  int v221; // [sp+Ch] [bp-142Ch]@0
  int v222; // [sp+Ch] [bp-142Ch]@249
  __int64 v223; // [sp+10h] [bp-1428h]@249
  int v224; // [sp+18h] [bp-1420h]@249
  int v225; // [sp+1Ch] [bp-141Ch]@249
  void *v226; // [sp+20h] [bp-1418h]@249
  unsigned __int64 v227; // [sp+24h] [bp-1414h]@261
  void *v228; // [sp+2Ch] [bp-140Ch]@234
  int v229; // [sp+30h] [bp-1408h]@234
  char *v230; // [sp+34h] [bp-1404h]@234
  __int64 v231; // [sp+38h] [bp-1400h]@237
  int v232; // [sp+40h] [bp-13F8h]@243
  void *v233; // [sp+44h] [bp-13F4h]@243
  int v234; // [sp+48h] [bp-13F0h]@234
  int v235; // [sp+4Ch] [bp-13ECh]@228
  int v236; // [sp+50h] [bp-13E8h]@228
  char v237; // [sp+54h] [bp-13E4h]@234
  int v238; // [sp+58h] [bp-13E0h]@369
  char v239; // [sp+5Ch] [bp-13DCh]@249
  int v240; // [sp+60h] [bp-13D8h]@333
  char v241; // [sp+64h] [bp-13D4h]@267
  int v242; // [sp+68h] [bp-13D0h]@268
  void *v243; // [sp+6Ch] [bp-13CCh]@225
  _BYTE *v244; // [sp+70h] [bp-13C8h]@225
  char *v245; // [sp+74h] [bp-13C4h]@225
  int v246; // [sp+78h] [bp-13C0h]@225
  void *v247; // [sp+7Ch] [bp-13BCh]@243
  int v248; // [sp+80h] [bp-13B8h]@190
  int v249; // [sp+84h] [bp-13B4h]@182
  char v250; // [sp+88h] [bp-13B0h]@190
  int v251; // [sp+8Ch] [bp-13ACh]@190
  int v252; // [sp+90h] [bp-13A8h]@38
  int v253; // [sp+94h] [bp-13A4h]@38
  char v254; // [sp+98h] [bp-13A0h]@38
  void (*v255)(void); // [sp+A0h] [bp-1398h]@38
  int v256; // [sp+ACh] [bp-138Ch]@37
  int v257; // [sp+B0h] [bp-1388h]@37
  int v258; // [sp+B4h] [bp-1384h]@228
  int *v259[2]; // [sp+B8h] [bp-1380h]@37
  int v260; // [sp+C0h] [bp-1378h]@19
  int v261; // [sp+C4h] [bp-1374h]@19
  int v262; // [sp+C8h] [bp-1370h]@19
  int v263; // [sp+CCh] [bp-136Ch]@19
  char v264; // [sp+D4h] [bp-1364h]@19
  int v265; // [sp+D8h] [bp-1360h]@19
  void *v266; // [sp+DCh] [bp-135Ch]@19
  int v267; // [sp+E0h] [bp-1358h]@19
  int v268; // [sp+E4h] [bp-1354h]@19
  __int16 v269; // [sp+E8h] [bp-1350h]@19
  char v270; // [sp+F0h] [bp-1348h]@19
  int v271; // [sp+F4h] [bp-1344h]@20
  int v272; // [sp+F8h] [bp-1340h]@10
  int v273; // [sp+FCh] [bp-133Ch]@10
  int v274; // [sp+100h] [bp-1338h]@10
  int v275; // [sp+104h] [bp-1334h]@10
  char v276; // [sp+10Ch] [bp-132Ch]@10
  int v277; // [sp+110h] [bp-1328h]@10
  void *ptr; // [sp+114h] [bp-1324h]@10
  int v279; // [sp+118h] [bp-1320h]@10
  int v280; // [sp+11Ch] [bp-131Ch]@10
  __int16 v281; // [sp+120h] [bp-1318h]@10
  char v282; // [sp+128h] [bp-1310h]@10
  int v283; // [sp+12Ch] [bp-130Ch]@11
  int v284; // [sp+130h] [bp-1308h]@9
  int v285; // [sp+134h] [bp-1304h]@9
  int v286; // [sp+138h] [bp-1300h]@5
  char *v287; // [sp+13Ch] [bp-12FCh]@5
  char *v288; // [sp+140h] [bp-12F8h]@5
  int v289; // [sp+144h] [bp-12F4h]@5
  int v290; // [sp+148h] [bp-12F0h]@5
  int v291; // [sp+14Ch] [bp-12ECh]@5
  int v292; // [sp+150h] [bp-12E8h]@4
  int v293; // [sp+154h] [bp-12E4h]@4
  int v294; // [sp+158h] [bp-12E0h]@4
  int v295; // [sp+15Ch] [bp-12DCh]@4
  int v296; // [sp+160h] [bp-12D8h]@4
  int v297; // [sp+164h] [bp-12D4h]@4
  int v298; // [sp+168h] [bp-12D0h]@3
  int v299; // [sp+16Ch] [bp-12CCh]@3
  int v300; // [sp+170h] [bp-12C8h]@2
  int v301; // [sp+174h] [bp-12C4h]@2
  char v302; // [sp+178h] [bp-12C0h]@2
  int v303; // [sp+17Ch] [bp-12BCh]@17
  int v304; // [sp+184h] [bp-12B4h]@2
  int v305; // [sp+188h] [bp-12B0h]@3
  int v306; // [sp+194h] [bp-12A4h]@2
  int v307; // [sp+198h] [bp-12A0h]@1
  int v308; // [sp+19Ch] [bp-129Ch]@1
  int v309; // [sp+1C4h] [bp-1274h]@10
  int v310; // [sp+1C8h] [bp-1270h]@10
  int v311; // [sp+1CCh] [bp-126Ch]@19
  int v312; // [sp+1D0h] [bp-1268h]@19
  char v313; // [sp+1D4h] [bp-1264h]@37
  __int64 v314; // [sp+1D8h] [bp-1260h]@182
  char v315; // [sp+1E4h] [bp-1254h]@190
  int v316; // [sp+1F0h] [bp-1248h]@183
  char v317; // [sp+1F4h] [bp-1244h]@183
  int v318; // [sp+5F4h] [bp-E44h]@183
  char v319; // [sp+5F8h] [bp-E40h]@5
  int v320; // [sp+5FCh] [bp-E3Ch]@5
  char v321; // [sp+A00h] [bp-A38h]@4
  int v322; // [sp+A04h] [bp-A34h]@4
  int v323; // [sp+E04h] [bp-634h]@4
  char v324; // [sp+E08h] [bp-630h]@182
  int v325; // [sp+1408h] [bp-30h]@1
  RakNet *v326; // [sp+140Ch] [bp-2Ch]@1

  v1 = this;
  v2 = &v325;
  v326 = _stack_chk_guard;
  utility::conversions::to_string_t(&v307, (int *)this + 15);
  web::uri::uri((int)&v308, &v307);
  v3 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v307 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = &v308;
  sub_119C854(&v306, &v308);
  web::details::uri_components::uri_components((web::details::uri_components *)&v302);
  web::details::uri_parser::parse((web::details::uri_parser **)&v306, (int)&v302);
  sub_119C854(&v300, &v304);
  utility::conversions::to_utf8string(&v301, &v300);
  v5 = (void *)(v300 - 12);
  if ( (int *)(v300 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v300 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C854(&v298, &v305);
  utility::conversions::to_utf8string(&v299, &v298);
  v6 = (void *)(v298 - 12);
  if ( (int *)(v298 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v298 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v295 = v301;
  v296 = *(_DWORD *)(v301 - 12);
  Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v321, (__int64 *)&v295);
  sub_119CCEC((void **)&v297, (unsigned int)&v322, v323);
  sub_119C854(&v294, &v301);
  sub_119C8A4((const void **)&v294, (const void **)&v299);
  Crypto::Hash::hash((Crypto *)&v292, 1, v294, *(_DWORD *)(v294 - 12));
  Util::toHex((const void **)&v293, &v292);
  v7 = (void *)(v292 - 12);
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v292 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C854(&v286, (int *)v1 + 20);
  sub_119C894((const void **)&v286, "/", 1u);
  v8 = sub_119C8A4((const void **)&v286, (const void **)&v293);
  v287 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_119C894((const void **)&v287, ".", 1u);
  v288 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_119C8A4((const void **)&v288, (const void **)&v297);
  v11 = (int)*v10;
  *v10 = &unk_28898CC;
  v289 = v11;
  v290 = *(_DWORD *)(v11 - 12);
  File::cleanPath((int)&v319, (__int64 *)&v289);
  sub_119C884((void **)&v291, (const char *)&v320);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v11 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1((void *)(v11 - 12));
  v12 = v288 - 12;
  if ( (int *)(v288 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v288 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v287 - 12;
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v287 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (void *)(v286 - 12);
  if ( (int *)(v286 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v286 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v284 = v291;
  v285 = *(_DWORD *)(v291 - 12);
  if ( Core::FileSystem::fileExists((__int64 *)&v284) == 1 )
    EntityInteraction::setInteractText(*((int **)v1 + 24), &v291);
    pplx::get_ambient_scheduler((pplx *)&v309);
    v272 = v309;
    v273 = v310;
    v274 = v309;
    v275 = 0;
    v276 = 0;
    v281 = 0;
    v279 = 0;
    v280 = 0;
    v277 = 0;
    ptr = 0;
    pplx::task_from_result((pplx *)&v282, (const pplx::task_options *)&v272);
    if ( (char *)v1 + 44 != &v282 )
      v15 = *(_QWORD *)&v282;
      *(_DWORD *)&v282 = 0;
      v283 = 0;
      *((_DWORD *)v1 + 11) = v15;
      v16 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v15);
      if ( v16 )
      {
        v17 = (unsigned int *)(v16 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 == 1 )
          v23 = (unsigned int *)(v16 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          }
          else
            v24 = (*v23)--;
          if ( v24 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
      }
    v48 = v283;
    if ( v283 )
      v49 = (unsigned int *)(v283 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      else
        v50 = (*v49)--;
      if ( v50 == 1 )
        v51 = (unsigned int *)(v48 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
    if ( ptr )
      operator delete(ptr);
    v53 = v275;
    if ( v275 )
      v54 = (unsigned int *)(v275 + 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      if ( v55 == 1 )
        (*(void (**)(void))(*(_DWORD *)v53 + 8))();
    v56 = v273;
    if ( v273 )
      v57 = (unsigned int *)(v273 + 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        v59 = (unsigned int *)(v56 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 8))(v56);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          goto LABEL_148;
        goto LABEL_147;
  else if ( web::uri::validate() == 1
         && *(_DWORD *)(v303 - 12)
         && ServiceClient::getForceOfflineResponses(*((ServiceClient **)v1 + 3)) != 1 )
    web::http::client::http_client::http_client((web::http::client::http_client *)v259, (const web::uri *)&v308);
    sub_119C854(&v256, (int *)&web::http::methods::GET);
    std::__shared_ptr<web::http::details::_http_request,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::details::_http_request>,std::string>(
      (int)&v257,
      (int)&v313,
      &v256);
    v27 = (void *)(v256 - 12);
    if ( (int *)(v256 - 12) != &dword_28898C0 )
      v209 = (unsigned int *)(v256 - 4);
          v210 = __ldrex(v209);
        while ( __strex(v210 - 1, v209) );
        v210 = (*v209)--;
      if ( v210 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v27);
    v252 = *((_DWORD *)v1 + 20);
    v253 = *(_DWORD *)(v252 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v254, (__int64 *)&v252);
    if ( v255 )
      v255();
    v28 = *((_QWORD *)v1 + 12) >> 32;
    v29 = *((_QWORD *)v1 + 12);
    if ( v28 )
      v30 = (unsigned int *)(v28 + 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 + 1, v30) );
        ++*v30;
    v219 = v28;
    v249 = 2;
    LODWORD(v71) = *((_DWORD *)v1 + 15);
    HIDWORD(v71) = *(_DWORD *)(v71 - 12);
    v314 = v71;
    v72 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v324, (const char **)&v314);
    if ( v325 )
      v73 = 0;
      v316 = 1023;
      v74 = *(const char **)(v72 + 8 * v325 + 1016);
      v317 = 0;
      v318 = 0;
      v75 = strlen(v74);
      v76 = v75;
      v77 = (unsigned int)&v316 | 4;
      if ( v75 < 0x400 )
        if ( v75 )
          _aeabi_memcpy((unsigned int)&v316 | 4, v74, v75);
        *((_BYTE *)&v316 + v76 + 4) = 0;
        v73 = v318 + v76;
        v317 = 0;
      v4 = &v308;
      v2 = &v325;
      v318 = v73;
      _aeabi_memclr8(&v316, 1028);
    sub_119CCEC((void **)&v248, v77, v73);
    std::__shared_ptr<RequestTelemetry,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RequestTelemetry>,RequestType,std::string>(
      (int)&v250,
      (int)&v315,
      &v249,
      &v248);
    v78 = *(_QWORD *)&v250;
    *(_DWORD *)&v250 = 0;
    v251 = 0;
    *((_DWORD *)v1 + 13) = v78;
    v79 = *((_DWORD *)v1 + 14);
    *((_DWORD *)v1 + 14) = HIDWORD(v78);
    if ( v79 )
      v80 = (unsigned int *)(v79 + 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 == 1 )
        v82 = (unsigned int *)(v79 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
          v83 = (*v82)--;
        if ( v83 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
    v84 = *(_QWORD *)((char *)v1 + 52);
    if ( HIDWORD(v84) )
      v85 = (unsigned int *)(HIDWORD(v84) + 8);
          v86 = __ldrex(v85);
        while ( __strex(v86 + 1, v85) );
        ++*v85;
    v87 = v251;
    if ( v251 )
      v88 = (unsigned int *)(v251 + 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 == 1 )
        v90 = (unsigned int *)(v87 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 8))(v87);
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
          v91 = (*v90)--;
        if ( v91 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 12))(v87);
    v92 = (void *)(v248 - 12);
    if ( (int *)(v248 - 12) != &dword_28898C0 )
      v211 = (unsigned int *)(v248 - 4);
          v212 = __ldrex(v211);
        while ( __strex(v212 - 1, v211) );
        v212 = (*v211)--;
      if ( v212 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v92);
    j__ZNSt12__shared_ptrIN11Concurrency7streams16container_bufferISt6vectorIcSaIcEEEELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS6_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v246);
    v94 = *(_QWORD *)((char *)v1 + 84);
    v93 = HIDWORD(v94);
    LODWORD(v94) = HIDWORD(v94) - v94;
    v95 = -858993459 * ((signed int)v94 >> 2);
    v96 = 0;
    v243 = 0;
    v244 = 0;
    v245 = 0;
    if ( (_DWORD)v94 )
      if ( v95 >= 0xCCCCCCD )
        sub_119C874();
      v96 = operator new(v94);
      HIDWORD(v94) = *(_QWORD *)((char *)v1 + 84) >> 32;
      v93 = *(_QWORD *)((char *)v1 + 84);
    v243 = v96;
    v245 = (char *)v96 + 20 * v95;
    v244 = (_BYTE *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::basic_regex<char,std::regex_traits<char>> const*,std::vector<std::basic_regex<char,std::regex_traits<char>>,std::allocator<std::basic_regex<char,std::regex_traits<char>>>>>,std::basic_regex<char,std::regex_traits<char>>*>(
                      v93,
                      SHIDWORD(v94),
                      (int)v96);
    v235 = v257;
    v236 = v258;
    if ( v258 )
      v97 = (unsigned int *)(v258 + 4);
          v98 = __ldrex(v97);
        while ( __strex(v98 + 1, v97) );
        ++*v97;
    v99 = 0;
    v234 = 0;
    web::http::client::http_client::request((pplx::details::platform *)&v237, v259, (int)&v235, &v234);
    v100 = (int)v244;
    v228 = 0;
    v229 = 0;
    v230 = 0;
    v101 = -858993459 * ((v244 - (_BYTE *)v243) >> 2);
    v102 = v244;
    if ( v244 != v243 )
      if ( v101 >= 0xCCCCCCD )
      v99 = operator new(v244 - (_BYTE *)v243);
      v100 = (int)v244;
      v102 = v243;
    v228 = v99;
    v230 = (char *)v99 + 20 * v101;
    v229 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::basic_regex<char,std::regex_traits<char>> const*,std::vector<std::basic_regex<char,std::regex_traits<char>>,std::allocator<std::basic_regex<char,std::regex_traits<char>>>>>,std::basic_regex<char,std::regex_traits<char>>*>(
             (int)v102,
             v100,
             (int)v99);
    v231 = v84;
    v104 = v219;
      v105 = (unsigned int *)(HIDWORD(v84) + 8);
          v106 = __ldrex(v105);
        while ( __strex(v106 + 1, v105) );
        ++*v105;
    v232 = v246;
    v233 = v247;
    if ( v247 )
      v107 = (unsigned int *)((char *)v247 + 4);
          v108 = __ldrex(v107);
        while ( __strex(v108 + 1, v107) );
        ++*v107;
    sub_FA6DC4((int)&v239, (int)&v237, (int)&v228, v103, v215, v217, v219, v221, v223, SHIDWORD(v223), v224, v225, v226);
    v223 = v84;
      v109 = (unsigned int *)(HIDWORD(v84) + 8);
          v110 = __ldrex(v109);
        while ( __strex(v110 + 1, v109) );
        ++*v109;
    sub_119C854(&v224, &v291);
    v225 = v246;
    v226 = v247;
      v112 = (unsigned int *)((char *)v247 + 4);
          v113 = __ldrex(v112);
        while ( __strex(v113 + 1, v112) );
        ++*v112;
    v227 = __PAIR__(v104, v29);
    if ( v104 )
      v114 = (unsigned int *)(v104 + 4);
          v115 = __ldrex(v114);
        while ( __strex(v115 + 1, v114) );
        ++*v114;
    sub_FA7854((int)&v241, (int)&v239, (int)&v223, v111, v216, v218, v220, v222, v223, SHIDWORD(v223), v224, v225, v226);
    if ( (char *)v1 + 44 != &v241 )
      v116 = *(_QWORD *)&v241;
      *(_DWORD *)&v241 = 0;
      v242 = 0;
      *((_DWORD *)v1 + 11) = v116;
      v117 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v116);
      if ( v117 )
        v118 = (unsigned int *)(v117 + 4);
            v119 = __ldrex(v118);
          while ( __strex(v119 - 1, v118) );
          v119 = (*v118)--;
        if ( v119 == 1 )
          v120 = (unsigned int *)(v117 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v117 + 8))(v117);
              v121 = __ldrex(v120);
            while ( __strex(v121 - 1, v120) );
            v121 = (*v120)--;
          if ( v121 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v117 + 12))(v117);
    v122 = v242;
    if ( v242 )
      v123 = (unsigned int *)(v242 + 4);
          v124 = __ldrex(v123);
        while ( __strex(v124 - 1, v123) );
        v124 = (*v123)--;
      if ( v124 == 1 )
        v125 = (unsigned int *)(v122 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v122 + 8))(v122);
            v126 = __ldrex(v125);
          while ( __strex(v126 - 1, v125) );
          v126 = (*v125)--;
        if ( v126 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v122 + 12))(v122);
    v127 = HIDWORD(v227);
    if ( HIDWORD(v227) )
      v128 = (unsigned int *)(HIDWORD(v227) + 4);
          v129 = __ldrex(v128);
        while ( __strex(v129 - 1, v128) );
        v129 = (*v128)--;
      if ( v129 == 1 )
        v130 = (unsigned int *)(v127 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v127 + 8))(v127);
            v131 = __ldrex(v130);
          while ( __strex(v131 - 1, v130) );
          v131 = (*v130)--;
        if ( v131 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v127 + 12))(v127);
    v132 = v226;
    if ( v226 )
      v133 = (unsigned int *)((char *)v226 + 4);
          v134 = __ldrex(v133);
        while ( __strex(v134 - 1, v133) );
        v134 = (*v133)--;
      if ( v134 == 1 )
        v135 = (unsigned int *)((char *)v132 + 8);
        (*(void (__fastcall **)(void *))(*(_DWORD *)v132 + 8))(v132);
            v136 = __ldrex(v135);
          while ( __strex(v136 - 1, v135) );
          v136 = (*v135)--;
        if ( v136 == 1 )
          (*(void (__fastcall **)(void *))(*(_DWORD *)v132 + 12))(v132);
    v137 = (void *)(v224 - 12);
    if ( (int *)(v224 - 12) != &dword_28898C0 )
      v213 = (unsigned int *)(v224 - 4);
          v214 = __ldrex(v213);
        while ( __strex(v214 - 1, v213) );
        v214 = (*v213)--;
      if ( v214 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v137);
    v138 = HIDWORD(v223);
    if ( HIDWORD(v223) )
      v139 = (unsigned int *)(HIDWORD(v223) + 8);
          v140 = __ldrex(v139);
        while ( __strex(v140 - 1, v139) );
        v140 = (*v139)--;
      if ( v140 == 1 )
        (*(void (**)(void))(*(_DWORD *)v138 + 12))();
    v141 = v240;
    if ( v240 )
      v142 = (unsigned int *)(v240 + 4);
          v143 = __ldrex(v142);
        while ( __strex(v143 - 1, v142) );
        v143 = (*v142)--;
      if ( v143 == 1 )
        v144 = (unsigned int *)(v141 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 8))(v141);
            v145 = __ldrex(v144);
          while ( __strex(v145 - 1, v144) );
          v145 = (*v144)--;
        if ( v145 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 12))(v141);
    v146 = v233;
    if ( v233 )
      v147 = (unsigned int *)((char *)v233 + 4);
          v148 = __ldrex(v147);
        while ( __strex(v148 - 1, v147) );
        v148 = (*v147)--;
      if ( v148 == 1 )
        v149 = (unsigned int *)((char *)v146 + 8);
        (*(void (__fastcall **)(void *))(*(_DWORD *)v146 + 8))(v146);
            v150 = __ldrex(v149);
          while ( __strex(v150 - 1, v149) );
          v150 = (*v149)--;
        if ( v150 == 1 )
          (*(void (__fastcall **)(void *))(*(_DWORD *)v146 + 12))(v146);
    v151 = HIDWORD(v231);
    if ( HIDWORD(v231) )
      v152 = (unsigned int *)(HIDWORD(v231) + 8);
          v153 = __ldrex(v152);
        while ( __strex(v153 - 1, v152) );
        v153 = (*v152)--;
      if ( v153 == 1 )
        (*(void (**)(void))(*(_DWORD *)v151 + 12))();
    std::vector<std::basic_regex<char,std::regex_traits<char>>,std::allocator<std::basic_regex<char,std::regex_traits<char>>>>::~vector((int *)&v228);
    v154 = v238;
    if ( v238 )
      v155 = (unsigned int *)(v238 + 4);
          v156 = __ldrex(v155);
        while ( __strex(v156 - 1, v155) );
        v156 = (*v155)--;
      if ( v156 == 1 )
        v157 = (unsigned int *)(v154 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v154 + 8))(v154);
            v158 = __ldrex(v157);
          while ( __strex(v158 - 1, v157) );
          v158 = (*v157)--;
        if ( v158 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v154 + 12))(v154);
    v159 = v234;
    if ( v234 )
      v160 = (unsigned int *)(v234 + 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      if ( v161 == 1 )
        (*(void (**)(void))(*(_DWORD *)v159 + 8))();
    v162 = v236;
    if ( v236 )
      v163 = (unsigned int *)(v236 + 4);
          v164 = __ldrex(v163);
        while ( __strex(v164 - 1, v163) );
        v164 = (*v163)--;
      if ( v164 == 1 )
        v165 = (unsigned int *)(v162 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v162 + 8))(v162);
            v166 = __ldrex(v165);
          while ( __strex(v166 - 1, v165) );
          v166 = (*v165)--;
        if ( v166 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v162 + 12))(v162);
    std::vector<std::basic_regex<char,std::regex_traits<char>>,std::allocator<std::basic_regex<char,std::regex_traits<char>>>>::~vector((int *)&v243);
    v167 = v247;
      v168 = (unsigned int *)((char *)v247 + 4);
          v169 = __ldrex(v168);
        while ( __strex(v169 - 1, v168) );
        v169 = (*v168)--;
      if ( v169 == 1 )
        v170 = (unsigned int *)((char *)v167 + 8);
        (*(void (__fastcall **)(void *))(*(_DWORD *)v167 + 8))(v167);
            v171 = __ldrex(v170);
          while ( __strex(v171 - 1, v170) );
          v171 = (*v170)--;
        if ( v171 == 1 )
          (*(void (__fastcall **)(void *))(*(_DWORD *)v167 + 12))(v167);
      v172 = (unsigned int *)(HIDWORD(v84) + 8);
          v173 = __ldrex(v172);
        while ( __strex(v173 - 1, v172) );
        v173 = (*v172)--;
      if ( v173 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v84) + 12))(HIDWORD(v84));
      v174 = (unsigned int *)(v104 + 4);
          v175 = __ldrex(v174);
        while ( __strex(v175 - 1, v174) );
        v175 = (*v174)--;
      if ( v175 == 1 )
        v176 = (unsigned int *)(v104 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v104 + 8))(v104);
            v177 = __ldrex(v176);
          while ( __strex(v177 - 1, v176) );
          v177 = (*v176)--;
        if ( v177 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v104 + 12))(v104);
    v178 = v258;
      v179 = (unsigned int *)(v258 + 4);
          v180 = __ldrex(v179);
        while ( __strex(v180 - 1, v179) );
        v180 = (*v179)--;
      if ( v180 == 1 )
        v181 = (unsigned int *)(v178 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v178 + 8))(v178);
            v182 = __ldrex(v181);
          while ( __strex(v182 - 1, v181) );
          v182 = (*v181)--;
        if ( v182 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v178 + 12))(v178);
    web::http::client::http_client::~http_client((web::http::client::http_client *)v259);
  else
    pplx::get_ambient_scheduler((pplx *)&v311);
    v260 = v311;
    v261 = v312;
    v262 = v311;
    v263 = 0;
    v264 = 0;
    v269 = 0;
    v267 = 0;
    v268 = 0;
    v265 = 0;
    v266 = 0;
    pplx::task_from_result((pplx *)&v270, (const pplx::task_options *)&v260);
    if ( (char *)v1 + 44 != &v270 )
      v19 = *(_QWORD *)&v270;
      *(_DWORD *)&v270 = 0;
      v271 = 0;
      *((_DWORD *)v1 + 11) = v19;
      v20 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v19);
      if ( v20 )
        v21 = (unsigned int *)(v20 + 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 == 1 )
          v25 = (unsigned int *)(v20 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    v61 = v271;
    if ( v271 )
      v62 = (unsigned int *)(v271 + 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 == 1 )
        v64 = (unsigned int *)(v61 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
    if ( v266 )
      operator delete(v266);
    v66 = v263;
    if ( v263 )
      v67 = (unsigned int *)(v263 + 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      if ( v68 == 1 )
        (*(void (**)(void))(*(_DWORD *)v66 + 8))();
    v56 = v261;
    if ( v261 )
      v69 = (unsigned int *)(v261 + 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 == 1 )
LABEL_148:
          if ( v60 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 12))(v56);
          goto LABEL_453;
LABEL_147:
        v60 = (*v59)--;
        goto LABEL_148;
LABEL_453:
  v183 = (void *)(v291 - 12);
  if ( (int *)(v291 - 12) != &dword_28898C0 )
    v193 = (unsigned int *)(v291 - 4);
        v194 = __ldrex(v193);
      while ( __strex(v194 - 1, v193) );
      v194 = (*v193)--;
    if ( v194 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v183);
  v184 = (void *)(v293 - 12);
  if ( (int *)(v293 - 12) != &dword_28898C0 )
    v195 = (unsigned int *)(v293 - 4);
        v196 = __ldrex(v195);
      while ( __strex(v196 - 1, v195) );
      v196 = (*v195)--;
    if ( v196 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v184);
  v185 = (void *)(v294 - 12);
  if ( (int *)(v294 - 12) != &dword_28898C0 )
    v197 = (unsigned int *)(v294 - 4);
        v198 = __ldrex(v197);
      while ( __strex(v198 - 1, v197) );
      v198 = (*v197)--;
    if ( v198 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v185);
  v186 = (void *)(v297 - 12);
  if ( (int *)(v297 - 12) != &dword_28898C0 )
    v199 = (unsigned int *)(v297 - 4);
        v200 = __ldrex(v199);
      while ( __strex(v200 - 1, v199) );
      v200 = (*v199)--;
    if ( v200 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v186);
  v187 = (void *)(v299 - 12);
  if ( (int *)(v299 - 12) != &dword_28898C0 )
    v201 = (unsigned int *)(v299 - 4);
        v202 = __ldrex(v201);
      while ( __strex(v202 - 1, v201) );
      v202 = (*v201)--;
    if ( v202 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v187);
  v188 = (void *)(v301 - 12);
  if ( (int *)(v301 - 12) != &dword_28898C0 )
    v203 = (unsigned int *)(v301 - 4);
        v204 = __ldrex(v203);
      while ( __strex(v204 - 1, v203) );
      v204 = (*v203)--;
    if ( v204 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v188);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v302);
  v189 = (void *)(v306 - 12);
  if ( (int *)(v306 - 12) != &dword_28898C0 )
    v205 = (unsigned int *)(v306 - 4);
        v206 = __ldrex(v205);
      while ( __strex(v206 - 1, v205) );
      v206 = (*v205)--;
    if ( v206 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v189);
  web::details::uri_components::~uri_components((web::details::uri_components *)(v4 + 1));
  v190 = (void *)(v308 - 12);
  if ( (int *)(v308 - 12) != &dword_28898C0 )
    v207 = (unsigned int *)(v308 - 4);
        v208 = __ldrex(v207);
      while ( __strex(v208 - 1, v207) );
      v208 = (*v207)--;
    if ( v208 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v190);
  v191 = (RakNet *)v2[1];
  result = (RakNet *)(_stack_chk_guard - v191);
  if ( _stack_chk_guard != v191 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall FileDataRequest::~FileDataRequest(FileDataRequest *this)
{
  FileDataRequest::~FileDataRequest(this);
}


void __fastcall FileDataRequest::~FileDataRequest(FileDataRequest *this)
{
  FileDataRequest *v1; // r0@1

  v1 = FileDataRequest::~FileDataRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


char *__fastcall FileDataRequest::addRequiredContentType(int a1, _DWORD *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 88);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorISt11basic_regexIcSt12regex_traitsIcEESaIS3_EE19_M_emplace_back_auxIJRKS3_EEEvDpOT_(
               (unsigned __int64 *)(a1 + 84),
               a2);
  }
  else
    std::basic_regex<char,std::regex_traits<char>>::basic_regex(v3, a2);
    result = (char *)(*(_DWORD *)(v2 + 88) + 20);
    *(_DWORD *)(v2 + 88) = result;
  return result;
}


FileDataRequest *__fastcall FileDataRequest::~FileDataRequest(FileDataRequest *this)
{
  FileDataRequest *v1; // r9@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r4@8
  unsigned int v6; // r0@10
  int v7; // r5@15 OVERLAPPED
  int v8; // r6@15 OVERLAPPED
  unsigned int *v9; // r2@17
  signed int v10; // r1@19
  int v11; // r4@25
  unsigned int *v12; // r1@26
  unsigned int v13; // r0@28
  unsigned int *v14; // r7@32
  unsigned int v15; // r0@34
  int v16; // r1@39
  void *v17; // r0@39
  int v18; // r1@44
  void *v19; // r0@44
  void (*v20)(void); // r3@45
  int v21; // r1@47
  void *v22; // r0@47
  unsigned int *v24; // r2@49
  signed int v25; // r1@51
  unsigned int *v26; // r2@53
  signed int v27; // r1@55

  v1 = this;
  *(_DWORD *)this = &off_26DDB70;
  v2 = *((_DWORD *)this + 25);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  *(_QWORD *)&v7 = *(_QWORD *)((char *)v1 + 84);
  if ( v7 != v8 )
    do
      v11 = *(_DWORD *)(v7 + 16);
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
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
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
          else
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v16 = *(_DWORD *)(v7 + 8);
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v16 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      sub_119C954((unsigned int **)(v7 + 4));
      v7 += 20;
    while ( v7 != v8 );
    v7 = *((_DWORD *)v1 + 21);
  if ( v7 )
    operator delete((void *)v7);
  v18 = *((_DWORD *)v1 + 20);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v18 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = (void (*)(void))*((_DWORD *)v1 + 18);
  if ( v20 )
    v20();
  v21 = *((_DWORD *)v1 + 15);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v21 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  RequestHandler::~RequestHandler(v1);
  return v1;
}
