

signed int __fastcall OceanMonumentDoubleXYRoom::postProcess(OceanMonumentDoubleXYRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentDoubleXYRoom *v4; // r7@1
  BlockSource *v5; // r5@1
  const BoundingBox *v6; // r4@1
  int v7; // r11@4
  const BoundingBox *v8; // r6@5
  void (__fastcall *v9)(OceanMonumentDoubleXYRoom *, BlockSource *, char *, int); // r12@7
  bool v10; // nf@8
  unsigned __int8 v11; // vf@8
  int v12; // r11@11
  const BoundingBox *v13; // r6@12
  void (__fastcall *v14)(OceanMonumentDoubleXYRoom *, BlockSource *, char *, int); // r12@14
  const BoundingBox *v15; // r12@17
  signed int v16; // r4@17
  char *v17; // r2@18
  char *v18; // r1@18
  void (__fastcall *v19)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, _DWORD); // lr@18
  char v20; // r10@20
  char v21; // r11@22
  const BoundingBox *v22; // r9@22
  void (__fastcall *v23)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r12@22
  void (__fastcall *v24)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r12@22
  void (__fastcall *v25)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r12@22
  void (__fastcall *v26)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@23
  StructurePiece *v27; // r10@23
  BlockSource *v28; // r8@23
  void (__fastcall *v29)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r5@23
  void (__fastcall *v30)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@23
  void (__fastcall *v31)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@23
  void (__fastcall *v32)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@23
  void (__fastcall *v33)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r5@23
  void (__fastcall *v34)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r5@23
  void (__fastcall *v35)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r5@23
  void (__fastcall *v36)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@23
  void (__fastcall *v37)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@23
  void (__fastcall *v38)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v39)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v40)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v41)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v42)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v43)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v44)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v45)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v46)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v47)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v48)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v49)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v50)(StructurePiece *, BlockSource *, char *, signed int); // r7@23
  int v51; // r0@23
  int v52; // r7@24
  int v53; // r4@25
  void (__fastcall *v54)(StructurePiece *, BlockSource *, char *, signed int); // r6@26
  void (__fastcall *v55)(StructurePiece *, BlockSource *, char *, signed int); // r6@27
  int v56; // r4@28
  void (__fastcall *v57)(StructurePiece *, BlockSource *, char *, signed int); // r6@29
  void (__fastcall *v58)(StructurePiece *, BlockSource *, char *, signed int); // r6@30
  int v59; // r7@34 OVERLAPPED
  signed int v60; // r8@34 OVERLAPPED
  int v61; // r4@35
  void (__fastcall *v62)(StructurePiece *, BlockSource *, char *, signed int); // r6@36
  void (__fastcall *v63)(StructurePiece *, BlockSource *, char *, signed int); // r6@37
  int v64; // r4@38
  void (__fastcall *v65)(StructurePiece *, BlockSource *, char *, signed int); // r6@39
  void (__fastcall *v66)(StructurePiece *, BlockSource *, char *, signed int); // r6@40
  int v67; // r7@44
  int v68; // r4@45
  void (__fastcall *v69)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@46
  void (__fastcall *v70)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@47
  int v71; // r4@48
  void (__fastcall *v72)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@49
  void (__fastcall *v73)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@50
  int v74; // r0@52
  int v75; // r7@53
  int v76; // r4@54
  void (__fastcall *v77)(StructurePiece *, BlockSource *, char *, signed int); // r6@55
  void (__fastcall *v78)(StructurePiece *, BlockSource *, char *, signed int); // r6@56
  int v79; // r4@57
  void (__fastcall *v80)(StructurePiece *, BlockSource *, char *, signed int); // r6@58
  void (__fastcall *v81)(StructurePiece *, BlockSource *, char *, signed int); // r6@59
  int v82; // r7@63 OVERLAPPED
  signed int v83; // r8@63 OVERLAPPED
  int v84; // r4@64
  void (__fastcall *v85)(StructurePiece *, BlockSource *, char *, signed int); // r6@65
  void (__fastcall *v86)(StructurePiece *, BlockSource *, char *, signed int); // r6@66
  int v87; // r4@67
  void (__fastcall *v88)(StructurePiece *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v89)(StructurePiece *, BlockSource *, char *, signed int); // r6@69
  int v90; // r7@73
  int v91; // r4@74
  void (__fastcall *v92)(StructurePiece *, BlockSource *, char *, signed int); // r6@75
  void (__fastcall *v93)(StructurePiece *, BlockSource *, char *, signed int); // r6@76
  int v94; // r4@77
  void (__fastcall *v95)(StructurePiece *, BlockSource *, char *, signed int); // r6@78
  void (__fastcall *v96)(StructurePiece *, BlockSource *, char *, signed int); // r6@79
  int v97; // r0@81
  int v98; // r7@82
  int v99; // r4@83
  void (__fastcall *v100)(StructurePiece *, BlockSource *, char *, signed int); // r6@84
  void (__fastcall *v101)(StructurePiece *, BlockSource *, char *, signed int); // r6@85
  int v102; // r4@86
  void (__fastcall *v103)(StructurePiece *, BlockSource *, char *, signed int); // r6@87
  void (__fastcall *v104)(StructurePiece *, BlockSource *, char *, signed int); // r6@88
  int v105; // r7@92 OVERLAPPED
  signed int v106; // r8@92 OVERLAPPED
  int v107; // r4@93
  void (__fastcall *v108)(StructurePiece *, BlockSource *, char *, signed int); // r6@94
  void (__fastcall *v109)(StructurePiece *, BlockSource *, char *, signed int); // r6@95
  int v110; // r4@96
  void (__fastcall *v111)(StructurePiece *, BlockSource *, char *, signed int); // r6@97
  void (__fastcall *v112)(StructurePiece *, BlockSource *, char *, signed int); // r6@98
  int v113; // r7@102
  int v114; // r4@103
  void (__fastcall *v115)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@104
  void (__fastcall *v116)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@105
  int v117; // r4@106
  void (__fastcall *v118)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@107
  void (__fastcall *v119)(StructurePiece *, BlockSource *, char *, _DWORD); // r6@108
  void *v120; // r0@110
  int v121; // r1@110
  int v122; // r7@111
  int v123; // r4@112
  void (__fastcall *v124)(StructurePiece *, BlockSource *, char *, signed int); // r6@113
  void (__fastcall *v125)(StructurePiece *, BlockSource *, char *, signed int); // r6@114
  int v126; // r4@115
  void (__fastcall *v127)(StructurePiece *, BlockSource *, char *, signed int); // r6@116
  void (__fastcall *v128)(StructurePiece *, BlockSource *, char *, signed int); // r6@117
  int v129; // r7@121 OVERLAPPED
  signed int v130; // r8@121 OVERLAPPED
  int v131; // r4@122
  void (__fastcall *v132)(StructurePiece *, BlockSource *, char *, signed int); // r6@123
  void (__fastcall *v133)(StructurePiece *, BlockSource *, char *, signed int); // r6@124
  int v134; // r4@125
  void (__fastcall *v135)(StructurePiece *, BlockSource *, char *, signed int); // r6@126
  void (__fastcall *v136)(StructurePiece *, BlockSource *, char *, signed int); // r6@127
  int v137; // r7@131
  int v138; // r4@132
  void (__fastcall *v139)(StructurePiece *, BlockSource *, char *, signed int); // r6@133
  void (__fastcall *v140)(StructurePiece *, BlockSource *, char *, signed int); // r6@134
  int v141; // r4@135
  void (__fastcall *v142)(StructurePiece *, BlockSource *, char *, signed int); // r6@136
  void (__fastcall *v143)(StructurePiece *, BlockSource *, char *, signed int); // r6@137
  int v144; // r4@142
  int v145; // r6@142
  int v146; // r7@143
  unsigned int *v147; // r1@144
  unsigned int v148; // r0@146
  unsigned int *v149; // r5@150
  unsigned int v150; // r0@152
  int v151; // r0@161
  unsigned int *v152; // r2@162
  unsigned int v153; // r1@164
  int v154; // r3@164
  int v155; // r4@171
  int v156; // r6@171
  int v157; // r7@172
  unsigned int *v158; // r1@173
  unsigned int v159; // r0@175
  unsigned int *v160; // r5@179
  unsigned int v161; // r0@181
  int v162; // r0@190
  unsigned int *v163; // r2@191
  unsigned int v164; // r1@193
  int v165; // r3@193
  int v166; // r4@200
  int v167; // r6@200
  int v168; // r7@201
  unsigned int *v169; // r1@202
  unsigned int v170; // r0@204
  unsigned int *v171; // r5@208
  unsigned int v172; // r0@210
  int v173; // r0@219
  unsigned int *v174; // r2@220
  unsigned int v175; // r1@222
  int v176; // r3@222
  int v177; // r4@229
  int v178; // r6@229
  int v179; // r7@230
  unsigned int *v180; // r1@231
  unsigned int v181; // r0@233
  unsigned int *v182; // r5@237
  unsigned int v183; // r0@239
  int v184; // r0@248
  unsigned int *v185; // r2@249
  unsigned int v186; // r1@251
  int v187; // r3@251
  unsigned __int64 v189; // [sp+0h] [bp-248h]@23
  const BoundingBox *v190; // [sp+8h] [bp-240h]@23
  signed int v191; // [sp+Ch] [bp-23Ch]@23
  char v192; // [sp+24h] [bp-224h]@4
  char v193; // [sp+24h] [bp-224h]@11
  char v194; // [sp+28h] [bp-220h]@4
  char v195; // [sp+28h] [bp-220h]@11
  BlockSource *v196; // [sp+28h] [bp-220h]@23
  char v197; // [sp+2Ch] [bp-21Ch]@23
  char v198; // [sp+2Dh] [bp-21Bh]@23
  char v199; // [sp+30h] [bp-218h]@23
  char v200; // [sp+31h] [bp-217h]@23
  char v201; // [sp+34h] [bp-214h]@23
  char v202; // [sp+35h] [bp-213h]@23
  char v203; // [sp+38h] [bp-210h]@23
  char v204; // [sp+39h] [bp-20Fh]@23
  char v205; // [sp+3Ch] [bp-20Ch]@23
  char v206; // [sp+3Dh] [bp-20Bh]@23
  char v207; // [sp+40h] [bp-208h]@23
  char v208; // [sp+41h] [bp-207h]@23
  char v209; // [sp+44h] [bp-204h]@23
  char v210; // [sp+45h] [bp-203h]@23
  char v211; // [sp+48h] [bp-200h]@23
  char v212; // [sp+49h] [bp-1FFh]@23
  char v213; // [sp+4Ch] [bp-1FCh]@23
  char v214; // [sp+4Dh] [bp-1FBh]@23
  char v215; // [sp+50h] [bp-1F8h]@23
  char v216; // [sp+51h] [bp-1F7h]@23
  char v217; // [sp+54h] [bp-1F4h]@23
  char v218; // [sp+55h] [bp-1F3h]@23
  char v219; // [sp+58h] [bp-1F0h]@23
  char v220; // [sp+59h] [bp-1EFh]@23
  char v221; // [sp+5Ch] [bp-1ECh]@23
  char v222; // [sp+5Dh] [bp-1EBh]@23
  char v223; // [sp+60h] [bp-1E8h]@23
  char v224; // [sp+61h] [bp-1E7h]@23
  char v225; // [sp+64h] [bp-1E4h]@23
  char v226; // [sp+65h] [bp-1E3h]@23
  char v227; // [sp+68h] [bp-1E0h]@23
  char v228; // [sp+69h] [bp-1DFh]@23
  char v229; // [sp+6Ch] [bp-1DCh]@23
  char v230; // [sp+6Dh] [bp-1DBh]@23
  char v231; // [sp+70h] [bp-1D8h]@23
  char v232; // [sp+71h] [bp-1D7h]@23
  char v233; // [sp+74h] [bp-1D4h]@23
  char v234; // [sp+75h] [bp-1D3h]@23
  char v235; // [sp+78h] [bp-1D0h]@23
  char v236; // [sp+79h] [bp-1CFh]@23
  char v237; // [sp+7Ch] [bp-1CCh]@23
  char v238; // [sp+7Dh] [bp-1CBh]@23
  char v239; // [sp+80h] [bp-1C8h]@23
  char v240; // [sp+81h] [bp-1C7h]@23
  char v241; // [sp+84h] [bp-1C4h]@23
  char v242; // [sp+85h] [bp-1C3h]@23
  char v243; // [sp+88h] [bp-1C0h]@23
  char v244; // [sp+89h] [bp-1BFh]@23
  char v245; // [sp+8Ch] [bp-1BCh]@23
  char v246; // [sp+8Dh] [bp-1BBh]@23
  char v247; // [sp+90h] [bp-1B8h]@23
  char v248; // [sp+91h] [bp-1B7h]@23
  char v249; // [sp+94h] [bp-1B4h]@23
  char v250; // [sp+95h] [bp-1B3h]@23
  char v251; // [sp+98h] [bp-1B0h]@23
  char v252; // [sp+99h] [bp-1AFh]@23
  char v253; // [sp+9Ch] [bp-1ACh]@23
  char v254; // [sp+9Dh] [bp-1ABh]@23
  char v255; // [sp+A0h] [bp-1A8h]@23
  char v256; // [sp+A1h] [bp-1A7h]@23
  char v257; // [sp+A4h] [bp-1A4h]@23
  char v258; // [sp+A5h] [bp-1A3h]@23
  char v259; // [sp+A8h] [bp-1A0h]@23
  char v260; // [sp+A9h] [bp-19Fh]@23
  char v261; // [sp+ACh] [bp-19Ch]@23
  char v262; // [sp+ADh] [bp-19Bh]@23
  char v263; // [sp+B0h] [bp-198h]@23
  char v264; // [sp+B1h] [bp-197h]@23
  char v265; // [sp+B4h] [bp-194h]@23
  char v266; // [sp+B5h] [bp-193h]@23
  char v267; // [sp+B8h] [bp-190h]@23
  char v268; // [sp+B9h] [bp-18Fh]@23
  char v269; // [sp+BCh] [bp-18Ch]@23
  char v270; // [sp+BDh] [bp-18Bh]@23
  char v271; // [sp+C0h] [bp-188h]@23
  char v272; // [sp+C1h] [bp-187h]@23
  char v273; // [sp+C4h] [bp-184h]@22
  char v274; // [sp+C5h] [bp-183h]@22
  char v275; // [sp+C8h] [bp-180h]@22
  char v276; // [sp+C9h] [bp-17Fh]@22
  char v277; // [sp+CCh] [bp-17Ch]@22
  char v278; // [sp+CDh] [bp-17Bh]@22
  char v279; // [sp+D0h] [bp-178h]@22
  char v280; // [sp+D1h] [bp-177h]@22
  char v281; // [sp+D4h] [bp-174h]@22
  char v282; // [sp+D5h] [bp-173h]@22
  char v283; // [sp+D8h] [bp-170h]@22
  char v284; // [sp+D9h] [bp-16Fh]@22
  char v285; // [sp+DCh] [bp-16Ch]@22
  char v286; // [sp+DDh] [bp-16Bh]@22
  char v287; // [sp+E0h] [bp-168h]@22
  char v288; // [sp+E1h] [bp-167h]@22
  char v289; // [sp+E4h] [bp-164h]@1
  int v290; // [sp+E8h] [bp-160h]@161
  int v291; // [sp+F0h] [bp-158h]@10
  int v292; // [sp+F4h] [bp-154h]@142
  void *ptr; // [sp+FCh] [bp-14Ch]@110
  char v294; // [sp+118h] [bp-130h]@1
  int v295; // [sp+11Ch] [bp-12Ch]@190
  int v296; // [sp+124h] [bp-124h]@3
  int v297; // [sp+128h] [bp-120h]@171
  void *v298; // [sp+130h] [bp-118h]@81
  char v299; // [sp+14Ch] [bp-FCh]@1
  int v300; // [sp+150h] [bp-F8h]@219
  int v301; // [sp+158h] [bp-F0h]@1
  int v302; // [sp+15Ch] [bp-ECh]@200
  void *v303; // [sp+164h] [bp-E4h]@2
  char v304; // [sp+180h] [bp-C8h]@1
  int v305; // [sp+184h] [bp-C4h]@248
  int v306; // [sp+18Ch] [bp-BCh]@1
  int v307; // [sp+190h] [bp-B8h]@229
  void *v308; // [sp+198h] [bp-B0h]@2
  char v309; // [sp+1B4h] [bp-94h]@7
  char v310; // [sp+1B5h] [bp-93h]@7
  unsigned __int8 v311; // [sp+1B8h] [bp-90h]@6
  char v312; // [sp+1BCh] [bp-8Ch]@14
  char v313; // [sp+1BDh] [bp-8Bh]@14
  unsigned __int8 v314; // [sp+1C0h] [bp-88h]@13
  char v315; // [sp+1C4h] [bp-84h]@133
  char v316; // [sp+1C5h] [bp-83h]@133
  char v317; // [sp+1C8h] [bp-80h]@134
  char v318; // [sp+1C9h] [bp-7Fh]@134
  char v319; // [sp+1CCh] [bp-7Ch]@123
  char v320; // [sp+1CDh] [bp-7Bh]@123
  char v321; // [sp+1D0h] [bp-78h]@124
  char v322; // [sp+1D1h] [bp-77h]@124
  char v323; // [sp+1D4h] [bp-74h]@113
  char v324; // [sp+1D5h] [bp-73h]@113
  char v325; // [sp+1D8h] [bp-70h]@114
  char v326; // [sp+1D9h] [bp-6Fh]@114
  char v327; // [sp+1DCh] [bp-6Ch]@104
  char v328; // [sp+1DDh] [bp-6Bh]@104
  char v329; // [sp+1E0h] [bp-68h]@105
  char v330; // [sp+1E1h] [bp-67h]@105
  char v331; // [sp+1E4h] [bp-64h]@94
  char v332; // [sp+1E5h] [bp-63h]@94
  char v333; // [sp+1E8h] [bp-60h]@95
  char v334; // [sp+1E9h] [bp-5Fh]@95
  char v335; // [sp+1ECh] [bp-5Ch]@84
  char v336; // [sp+1EDh] [bp-5Bh]@84
  char v337; // [sp+1F0h] [bp-58h]@85
  char v338; // [sp+1F1h] [bp-57h]@85
  char v339; // [sp+1F4h] [bp-54h]@75
  char v340; // [sp+1F5h] [bp-53h]@75
  char v341; // [sp+1F8h] [bp-50h]@76
  char v342; // [sp+1F9h] [bp-4Fh]@76
  char v343; // [sp+1FCh] [bp-4Ch]@65
  char v344; // [sp+1FDh] [bp-4Bh]@65
  char v345; // [sp+200h] [bp-48h]@66
  char v346; // [sp+201h] [bp-47h]@66
  char v347; // [sp+204h] [bp-44h]@26
  char v348; // [sp+205h] [bp-43h]@26
  char v349; // [sp+208h] [bp-40h]@27
  char v350; // [sp+209h] [bp-3Fh]@27
  char v351; // [sp+20Ch] [bp-3Ch]@36
  char v352; // [sp+20Dh] [bp-3Bh]@36
  char v353; // [sp+210h] [bp-38h]@37
  char v354; // [sp+211h] [bp-37h]@37
  char v355; // [sp+214h] [bp-34h]@46
  char v356; // [sp+215h] [bp-33h]@46
  char v357; // [sp+218h] [bp-30h]@47
  char v358; // [sp+219h] [bp-2Fh]@47
  char v359; // [sp+21Ch] [bp-2Ch]@55
  char v360; // [sp+21Dh] [bp-2Bh]@55
  char v361; // [sp+220h] [bp-28h]@56
  char v362; // [sp+221h] [bp-27h]@56

  v4 = this;
  v5 = a2;
  v6 = a4;
  RoomDefinition::RoomDefinition((int)&v304, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 10) + 12) + 40));
  RoomDefinition::RoomDefinition((int)&v299, *((_DWORD *)v4 + 10));
  RoomDefinition::RoomDefinition((int)&v294, *(_DWORD *)(v301 + 8));
  RoomDefinition::RoomDefinition((int)&v289, *(_DWORD *)(v306 + 8));
  if ( *(_DWORD *)(*((_DWORD *)v4 + 10) + 8) >= 25 )
  {
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 8, 0, *(_DWORD *)v308 & 1);
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 0, 0, *(_DWORD *)v303 & 1);
  }
  if ( !*(_DWORD *)(v296 + 8) )
    v7 = 1;
    v194 = byte_281EAF1;
    v192 = byte_281EAF2;
    do
    {
      v8 = (const BoundingBox *)1;
      do
      {
        StructurePiece::getBlock((StructurePiece *)&v311, v4, (int)v5, v7, 8, v8, (int)v6);
        if ( v311 == (unsigned __int8)word_281EAFB )
        {
          v9 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v309 = v194;
          v310 = v192;
          v9(v4, v5, &v309, v7);
        }
        v11 = __OFSUB__(v8, 6);
        v10 = (signed int)v8 - 6 < 0;
        v8 = (const BoundingBox *)((char *)v8 + 1);
      }
      while ( v10 ^ v11 );
      v11 = __OFSUB__(v7, 7);
      v10 = v7++ - 7 < 0;
    }
    while ( v10 ^ v11 );
  if ( !*(_DWORD *)(v291 + 8) )
    v12 = 8;
    v195 = byte_281EAF1;
    v193 = byte_281EAF2;
      v13 = (const BoundingBox *)1;
        StructurePiece::getBlock((StructurePiece *)&v314, v4, (int)v5, v12, 8, v13, (int)v6);
        if ( v314 == (unsigned __int8)word_281EAFB )
          v14 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v312 = v195;
          v313 = v193;
          v14(v4, v5, &v312, v12);
        v11 = __OFSUB__(v13, 6);
        v10 = (signed int)v13 - 6 < 0;
        v13 = (const BoundingBox *)((char *)v13 + 1);
      v11 = __OFSUB__(v12, 14);
      v10 = v12++ - 14 < 0;
  v15 = v6;
  v16 = 1;
  do
    v17 = &byte_281EAF4;
    v18 = &byte_281EAF3;
    v19 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    if ( (v16 | 4) == 6 )
      v17 = &byte_281EAF2;
    v20 = *v17;
      v18 = &byte_281EAF1;
    v21 = *v18;
    v287 = v21;
    v285 = v21;
    v288 = v20;
    v286 = v20;
    v22 = v15;
    v19(v4, v5, v15, 0);
    v23 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v283 = v21;
    v281 = v21;
    v284 = v20;
    v282 = v20;
    v23(v4, v5, v22, 15);
    v24 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v279 = v21;
    v277 = v21;
    v280 = v20;
    v278 = v20;
    v24(v4, v5, v22, 1);
    v25 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v275 = v21;
    v273 = v21;
    v276 = v20;
    v274 = v20;
    v25(v4, v5, v22, 1);
    ++v16;
    v15 = v22;
  while ( v16 < 8 );
  v26 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v271 = byte_281EAF3;
  v269 = byte_281EAF3;
  v272 = byte_281EAF4;
  v270 = byte_281EAF4;
  v27 = v4;
  v28 = v5;
  v26(v4, v5, v22, 2);
  v29 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v267 = byte_281EAF3;
  v265 = byte_281EAF3;
  v268 = byte_281EAF4;
  v266 = byte_281EAF4;
  v29(v4, v28, v22, 3);
  v30 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v263 = byte_281EAF3;
  v261 = byte_281EAF3;
  v264 = byte_281EAF4;
  v262 = byte_281EAF4;
  v30(v4, v28, v22, 3);
  v31 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v259 = byte_281EAF3;
  v257 = byte_281EAF3;
  v260 = byte_281EAF4;
  v258 = byte_281EAF4;
  v31(v4, v28, v22, 13);
  v32 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v255 = byte_281EAF3;
  v253 = byte_281EAF3;
  v256 = byte_281EAF4;
  v254 = byte_281EAF4;
  v32(v4, v28, v22, 11);
  v33 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v251 = byte_281EAF3;
  v249 = byte_281EAF3;
  v252 = byte_281EAF4;
  v250 = byte_281EAF4;
  v33(v4, v28, v22, 11);
  v34 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v247 = byte_281EAF3;
  v245 = byte_281EAF3;
  v248 = byte_281EAF4;
  v246 = byte_281EAF4;
  v34(v4, v28, v22, 5);
  v35 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v243 = byte_281EAF3;
  v241 = byte_281EAF3;
  v244 = byte_281EAF4;
  v242 = byte_281EAF4;
  v35(v4, v28, v22, 10);
  v36 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v239 = byte_281EAF3;
  v237 = byte_281EAF3;
  v240 = byte_281EAF4;
  v238 = byte_281EAF4;
  v36(v4, v28, v22, 5);
  v37 = *(void (__fastcall **)(OceanMonumentDoubleXYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v235 = byte_281EAF3;
  v233 = byte_281EAF3;
  v236 = byte_281EAF4;
  v234 = byte_281EAF4;
  v37(v4, v28, v22, 5);
  v38 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v231 = byte_281EAF3;
  v229 = byte_281EAF3;
  v232 = byte_281EAF4;
  v230 = byte_281EAF4;
  v38(v27, v28, v22, 10);
  v39 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v27 + 40);
  v227 = byte_281EAF3;
  v225 = byte_281EAF3;
  v228 = byte_281EAF4;
  v226 = byte_281EAF4;
  v39(v27, v28, v22, 5);
  v40 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v27 + 40);
  v223 = byte_281EAF3;
  v221 = byte_281EAF3;
  v224 = byte_281EAF4;
  v222 = byte_281EAF4;
  v40(v27, v28, v22, 10);
  v41 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v219 = byte_281EAF3;
  v220 = byte_281EAF4;
  v41(v27, v28, &v219, 6);
  v42 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v217 = byte_281EAF3;
  v218 = byte_281EAF4;
  v42(v27, v28, &v217, 9);
  v43 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v215 = byte_281EAF3;
  v216 = byte_281EAF4;
  v43(v27, v28, &v215, 6);
  v44 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v213 = byte_281EAF3;
  v214 = byte_281EAF4;
  v44(v27, v28, &v213, 9);
  v45 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v27 + 40);
  v211 = byte_281EAF3;
  v209 = byte_281EAF3;
  v212 = byte_281EAF4;
  v210 = byte_281EAF4;
  v45(v27, v28, v22, 5);
  v46 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v27 + 40);
  v207 = byte_281EAF3;
  v205 = byte_281EAF3;
  v208 = byte_281EAF4;
  v206 = byte_281EAF4;
  v191 = 4;
  v46(v27, v28, v22, 9);
  v47 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v203 = byte_281EAF9;
  v204 = byte_281EAFA;
  v47(v27, v28, &v203, 5);
  v48 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v201 = byte_281EAF9;
  v202 = byte_281EAFA;
  v48(v27, v28, &v201, 5);
  v49 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v199 = byte_281EAF9;
  v200 = byte_281EAFA;
  v49(v27, v28, &v199, 10);
  v50 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
  v197 = byte_281EAF9;
  v198 = byte_281EAFA;
  v189 = 21474836484LL;
  v190 = v22;
  v50(v27, v28, &v197, 10);
  v196 = v28;
  v51 = *(_DWORD *)v303;
  if ( *(_DWORD *)v303 & 8 )
    v52 = 1;
      v53 = StructurePiece::getWorldY(v27, v52);
      if ( v53 >= *(_WORD *)(j_BlockSource::getDimension(v28) + 20) )
        v55 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v349 = *(_BYTE *)(Block::mAir + 4);
        v350 = 0;
        v55(v27, v28, &v349, 3);
      else
        v54 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v347 = word_281EAFB;
        v348 = 0;
        v54(v27, v28, &v347, 3);
      v56 = StructurePiece::getWorldY(v27, v52);
      if ( v56 >= *(_WORD *)(j_BlockSource::getDimension(v28) + 20) )
        v58 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = (unsigned int)v52;
        v190 = v22;
        v58(v27, v28, &v349, 4);
        v57 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v57(v27, v28, &v347, 4);
      v11 = __OFSUB__(v52, 2);
      v10 = v52++ - 2 < 0;
    v51 = *(_DWORD *)v303;
  if ( v51 & 4 )
    v59 = 1;
    v60 = 7;
      v61 = StructurePiece::getWorldY(v27, v59);
      if ( v61 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v63 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v353 = *(_BYTE *)(Block::mAir + 4);
        v354 = 0;
        v63(v27, v196, &v353, 3);
        v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v351 = word_281EAFB;
        v352 = 0;
        v62(v27, v196, &v351, 3);
      v64 = StructurePiece::getWorldY(v27, v59);
      if ( v64 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v66 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = *(_QWORD *)&v59;
        v66(v27, v196, &v353, 4);
        v65 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v65(v27, v196, &v351, 4);
      v11 = __OFSUB__(v59, 2);
      v10 = v59++ - 2 < 0;
  if ( v51 & 0x10 )
    v67 = 1;
      v68 = StructurePiece::getWorldY(v27, v67);
      if ( v68 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v70 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v357 = *(_BYTE *)(Block::mAir + 4);
        v358 = 0;
        v70(v27, v196, &v357, 0);
        v69 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v355 = word_281EAFB;
        v356 = 0;
        v69(v27, v196, &v355, 0);
      v71 = StructurePiece::getWorldY(v27, v67);
      if ( v71 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v73 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v189 = __PAIR__(4, v67);
        v73(v27, v196, &v357, 0);
        v72 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v72(v27, v196, &v355, 0);
      v11 = __OFSUB__(v67, 2);
      v10 = v67++ - 2 < 0;
  v74 = *(_DWORD *)v308;
  if ( *(_DWORD *)v308 & 8 )
    v75 = 1;
      v76 = StructurePiece::getWorldY(v27, v75);
      if ( v76 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v78 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v361 = *(_BYTE *)(Block::mAir + 4);
        v362 = 0;
        v78(v27, v196, &v361, 11);
        v77 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v359 = word_281EAFB;
        v360 = 0;
        v77(v27, v196, &v359, 11);
      v79 = StructurePiece::getWorldY(v27, v75);
      if ( v79 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v81 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = (unsigned int)v75;
        v81(v27, v196, &v361, 12);
        v80 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v80(v27, v196, &v359, 12);
      v11 = __OFSUB__(v75, 2);
      v10 = v75++ - 2 < 0;
    v74 = *(_DWORD *)v308;
  if ( v74 & 4 )
    v82 = 1;
    v83 = 7;
      v84 = StructurePiece::getWorldY(v27, v82);
      if ( v84 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v86 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v345 = *(_BYTE *)(Block::mAir + 4);
        v346 = 0;
        v86(v27, v196, &v345, 11);
        v85 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v343 = word_281EAFB;
        v344 = 0;
        v85(v27, v196, &v343, 11);
      v87 = StructurePiece::getWorldY(v27, v82);
      if ( v87 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v89 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = *(_QWORD *)&v82;
        v89(v27, v196, &v345, 12);
        v88 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v88(v27, v196, &v343, 12);
      v11 = __OFSUB__(v82, 2);
      v10 = v82++ - 2 < 0;
  if ( v74 & 0x20 )
    v90 = 1;
      v91 = StructurePiece::getWorldY(v27, v90);
      if ( v91 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v93 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v341 = *(_BYTE *)(Block::mAir + 4);
        v342 = 0;
        v93(v27, v196, &v341, 15);
        v92 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v339 = word_281EAFB;
        v340 = 0;
        v92(v27, v196, &v339, 15);
      v94 = StructurePiece::getWorldY(v27, v90);
      if ( v94 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v96 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = __PAIR__(4, v90);
        v96(v27, v196, &v341, 15);
        v95 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v95(v27, v196, &v339, 15);
      v11 = __OFSUB__(v90, 2);
      v10 = v90++ - 2 < 0;
  v97 = *(_DWORD *)v298;
  if ( *(_DWORD *)v298 & 8 )
    v98 = 5;
      v99 = StructurePiece::getWorldY(v27, v98);
      if ( v99 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v101 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v337 = *(_BYTE *)(Block::mAir + 4);
        v338 = 0;
        v101(v27, v196, &v337, 3);
        v100 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v335 = word_281EAFB;
        v336 = 0;
        v100(v27, v196, &v335, 3);
      v102 = StructurePiece::getWorldY(v27, v98);
      if ( v102 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v104 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = (unsigned int)v98;
        v104(v27, v196, &v337, 4);
        v103 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v103(v27, v196, &v335, 4);
      v11 = __OFSUB__(v98, 6);
      v10 = v98++ - 6 < 0;
    v97 = *(_DWORD *)v298;
  if ( v97 & 4 )
    v105 = 5;
    v106 = 7;
      v107 = StructurePiece::getWorldY(v27, v105);
      if ( v107 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v109 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v333 = *(_BYTE *)(Block::mAir + 4);
        v334 = 0;
        v109(v27, v196, &v333, 3);
        v108 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v331 = word_281EAFB;
        v332 = 0;
        v108(v27, v196, &v331, 3);
      v110 = StructurePiece::getWorldY(v27, v105);
      if ( v110 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v112 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = *(_QWORD *)&v105;
        v112(v27, v196, &v333, 4);
        v111 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v111(v27, v196, &v331, 4);
      v11 = __OFSUB__(v105, 6);
      v10 = v105++ - 6 < 0;
  if ( v97 & 0x10 )
    v113 = 5;
      v114 = StructurePiece::getWorldY(v27, v113);
      if ( v114 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v116 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v329 = *(_BYTE *)(Block::mAir + 4);
        v330 = 0;
        v116(v27, v196, &v329, 0);
        v115 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v327 = word_281EAFB;
        v328 = 0;
        v115(v27, v196, &v327, 0);
      v117 = StructurePiece::getWorldY(v27, v113);
      if ( v117 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v119 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v189 = __PAIR__(4, v113);
        v119(v27, v196, &v329, 0);
        v118 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v27 + 36);
        v118(v27, v196, &v327, 0);
      v11 = __OFSUB__(v113, 6);
      v10 = v113++ - 6 < 0;
  v120 = ptr;
  v121 = *(_DWORD *)ptr;
  if ( *(_DWORD *)ptr & 8 )
    v122 = 5;
      v123 = StructurePiece::getWorldY(v27, v122);
      if ( v123 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v125 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v325 = *(_BYTE *)(Block::mAir + 4);
        v326 = 0;
        v125(v27, v196, &v325, 11);
        v124 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v323 = word_281EAFB;
        v324 = 0;
        v124(v27, v196, &v323, 11);
      v126 = StructurePiece::getWorldY(v27, v122);
      if ( v126 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v128 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = (unsigned int)v122;
        v128(v27, v196, &v325, 12);
        v127 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v127(v27, v196, &v323, 12);
      v11 = __OFSUB__(v122, 6);
      v10 = v122++ - 6 < 0;
    v120 = ptr;
    v121 = *(_DWORD *)ptr;
  if ( v121 & 4 )
    v129 = 5;
    v130 = 7;
      v131 = StructurePiece::getWorldY(v27, v129);
      if ( v131 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v133 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v321 = *(_BYTE *)(Block::mAir + 4);
        v322 = 0;
        v133(v27, v196, &v321, 11);
        v132 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v319 = word_281EAFB;
        v320 = 0;
        v132(v27, v196, &v319, 11);
      v134 = StructurePiece::getWorldY(v27, v129);
      if ( v134 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v136 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = *(_QWORD *)&v129;
        v136(v27, v196, &v321, 12);
        v135 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v135(v27, v196, &v319, 12);
      v11 = __OFSUB__(v129, 6);
      v10 = v129++ - 6 < 0;
  if ( v121 & 0x20 )
    v137 = 5;
      v138 = StructurePiece::getWorldY(v27, v137);
      if ( v138 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v140 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v317 = *(_BYTE *)(Block::mAir + 4);
        v318 = 0;
        v140(v27, v196, &v317, 15);
        v139 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v315 = word_281EAFB;
        v316 = 0;
        v139(v27, v196, &v315, 15);
      v141 = StructurePiece::getWorldY(v27, v137);
      if ( v141 >= *(_WORD *)(j_BlockSource::getDimension(v196) + 20) )
        v143 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v189 = __PAIR__(4, v137);
        v143(v27, v196, &v317, 15);
        v142 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v27 + 36);
        v142(v27, v196, &v315, 15);
      v11 = __OFSUB__(v137, 6);
      v10 = v137++ - 6 < 0;
  if ( v120 )
    j_operator delete(v120);
  v145 = v292;
  v144 = v291;
  if ( v291 != v292 )
      v146 = *(_DWORD *)(v144 + 4);
      if ( v146 )
        v147 = (unsigned int *)(v146 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v148 = __ldrex(v147);
          while ( __strex(v148 - 1, v147) );
        else
          v148 = (*v147)--;
        if ( v148 == 1 )
          v149 = (unsigned int *)(v146 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v146 + 8))(v146);
          if ( &pthread_create )
          {
            __dmb();
            do
              v150 = __ldrex(v149);
            while ( __strex(v150 - 1, v149) );
          }
          else
            v150 = (*v149)--;
          if ( v150 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v146 + 12))(v146);
      v144 += 8;
    while ( v144 != v145 );
    v144 = v291;
  if ( v144 )
    j_operator delete((void *)v144);
  v151 = v290;
  if ( v290 )
    v152 = (unsigned int *)(v290 + 8);
    if ( &pthread_create )
      __dmb();
        v153 = __ldrex(v152);
        v154 = v153 - 1;
      while ( __strex(v153 - 1, v152) );
    else
      v153 = *v152;
      v154 = *v152 - 1;
      *v152 = v154;
    if ( v153 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v151 + 12))(
        v151,
        *(_DWORD *)(*(_DWORD *)v151 + 12),
        v152,
        v154,
        v189,
        HIDWORD(v189),
        v190,
        4);
  if ( v298 )
    j_operator delete(v298);
  v156 = v297;
  v155 = v296;
  if ( v296 != v297 )
      v157 = *(_DWORD *)(v155 + 4);
      if ( v157 )
        v158 = (unsigned int *)(v157 + 4);
            v159 = __ldrex(v158);
          while ( __strex(v159 - 1, v158) );
          v159 = (*v158)--;
        if ( v159 == 1 )
          v160 = (unsigned int *)(v157 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v157 + 8))(v157);
              v161 = __ldrex(v160);
            while ( __strex(v161 - 1, v160) );
            v161 = (*v160)--;
          if ( v161 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v157 + 12))(v157);
      v155 += 8;
    while ( v155 != v156 );
    v155 = v296;
  if ( v155 )
    j_operator delete((void *)v155);
  v162 = v295;
  if ( v295 )
    v163 = (unsigned int *)(v295 + 8);
        v164 = __ldrex(v163);
        v165 = v164 - 1;
      while ( __strex(v164 - 1, v163) );
      v164 = *v163;
      v165 = *v163 - 1;
      *v163 = v165;
    if ( v164 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v162 + 12))(
        v162,
        *(_DWORD *)(*(_DWORD *)v162 + 12),
        v163,
        v165,
        v191);
  if ( v303 )
    j_operator delete(v303);
  v167 = v302;
  v166 = v301;
  if ( v301 != v302 )
      v168 = *(_DWORD *)(v166 + 4);
      if ( v168 )
        v169 = (unsigned int *)(v168 + 4);
            v170 = __ldrex(v169);
          while ( __strex(v170 - 1, v169) );
          v170 = (*v169)--;
        if ( v170 == 1 )
          v171 = (unsigned int *)(v168 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v168 + 8))(v168);
              v172 = __ldrex(v171);
            while ( __strex(v172 - 1, v171) );
            v172 = (*v171)--;
          if ( v172 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v168 + 12))(v168);
      v166 += 8;
    while ( v166 != v167 );
    v166 = v301;
  if ( v166 )
    j_operator delete((void *)v166);
  v173 = v300;
  if ( v300 )
    v174 = (unsigned int *)(v300 + 8);
        v175 = __ldrex(v174);
        v176 = v175 - 1;
      while ( __strex(v175 - 1, v174) );
      v175 = *v174;
      v176 = *v174 - 1;
      *v174 = v176;
    if ( v175 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v173 + 12))(
        v173,
        *(_DWORD *)(*(_DWORD *)v173 + 12),
        v174,
        v176,
  if ( v308 )
    j_operator delete(v308);
  v178 = v307;
  v177 = v306;
  if ( v306 != v307 )
      v179 = *(_DWORD *)(v177 + 4);
      if ( v179 )
        v180 = (unsigned int *)(v179 + 4);
            v181 = __ldrex(v180);
          while ( __strex(v181 - 1, v180) );
          v181 = (*v180)--;
        if ( v181 == 1 )
          v182 = (unsigned int *)(v179 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v179 + 8))(v179);
              v183 = __ldrex(v182);
            while ( __strex(v183 - 1, v182) );
            v183 = (*v182)--;
          if ( v183 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v179 + 12))(v179);
      v177 += 8;
    while ( v177 != v178 );
    v177 = v306;
  if ( v177 )
    j_operator delete((void *)v177);
  v184 = v305;
  if ( v305 )
    v185 = (unsigned int *)(v305 + 8);
        v186 = __ldrex(v185);
        v187 = v186 - 1;
      while ( __strex(v186 - 1, v185) );
      v186 = *v185;
      v187 = *v185 - 1;
      *v185 = v187;
    if ( v186 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v184 + 12))(
        v184,
        *(_DWORD *)(*(_DWORD *)v184 + 12),
        v185,
        v187,
  return 1;
}


_DWORD *__fastcall OceanMonumentDoubleXYRoom::OceanMonumentDoubleXYRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 2, 2, 1);
  *result = &off_2718FC4;
  return result;
}


signed int __fastcall OceanMonumentDoubleXYRoom::getType(OceanMonumentDoubleXYRoom *this)
{
  return 1330468953;
}


void __fastcall OceanMonumentDoubleXYRoom::~OceanMonumentDoubleXYRoom(OceanMonumentDoubleXYRoom *this)
{
  OceanMonumentDoubleXYRoom *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2718D84;
  v2 = *((_DWORD *)this + 11);
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
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall OceanMonumentDoubleXYRoom::~OceanMonumentDoubleXYRoom(OceanMonumentDoubleXYRoom *this)
{
  OceanMonumentDoubleXYRoom::~OceanMonumentDoubleXYRoom(this);
}


int __fastcall OceanMonumentDoubleXYRoom::OceanMonumentDoubleXYRoom(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  *(_DWORD *)result = &off_2718FC4;
  return result;
}
