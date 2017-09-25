

signed int __fastcall TwoRoomHouse::postProcess(TwoRoomHouse *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  TwoRoomHouse *v4; // r11@1
  const BoundingBox *v5; // r9@1
  Random *v6; // r4@1
  int v7; // r5@2
  int v8; // r0@2
  int v9; // r12@3
  signed int v10; // r8@3
  signed int v11; // r10@3
  int v12; // r2@4
  int v13; // r6@5
  __int64 v14; // kr08_8@5
  int v15; // r0@5
  int v16; // r3@5
  bool v17; // nf@5
  unsigned __int8 v18; // vf@5
  signed int v19; // r0@5
  __int64 v20; // kr18_8@5
  signed int v21; // r2@7
  bool v22; // zf@9
  signed int v23; // r3@9
  signed int v24; // r4@11
  signed int v25; // r7@13
  int v26; // r0@17
  int v27; // r0@24
  unsigned int v28; // r0@26
  signed int v29; // r2@26
  int v30; // r1@26
  int v31; // r0@27
  int *v32; // r4@27
  int v33; // r6@27
  int v34; // r10@28
  void (__fastcall *v35)(int, BlockSource *, const BoundingBox *, signed int); // r7@28
  const BoundingBox *v36; // r11@28
  void (__fastcall *v37)(int, BlockSource *, const BoundingBox *, signed int); // r7@28
  void (__fastcall *v38)(int, BlockSource *, const BoundingBox *, signed int); // r7@28
  void (__fastcall *v39)(int, BlockSource *, const BoundingBox *, signed int); // r7@28
  BlockSelector *v40; // r0@28
  BlockSelector *v41; // r0@31
  BlockSelector *v42; // r0@34
  BlockSelector *v43; // r0@37
  BlockSelector *v44; // r0@40
  BlockSelector *v45; // r0@43
  StructurePiece *v46; // r9@46
  void (__fastcall *v47)(int, BlockSource *, const BoundingBox *, signed int); // r7@46
  void (__fastcall *v48)(int, BlockSource *, const BoundingBox *, signed int); // r7@46
  void (__fastcall *v49)(int, BlockSource *, const BoundingBox *, _DWORD); // r4@46
  void (__fastcall *v50)(int, BlockSource *, const BoundingBox *, _DWORD); // r4@46
  void (__fastcall *v51)(int, BlockSource *, const BoundingBox *, _DWORD); // r4@46
  void (__fastcall *v52)(int, BlockSource *, char *, _DWORD); // r4@46
  void (__fastcall *v53)(int, BlockSource *, char *, _DWORD); // r4@46
  void (__fastcall *v54)(int, BlockSource *, char *, signed int); // r4@46
  void (__fastcall *v55)(int, BlockSource *, char *, signed int); // r4@46
  int v56; // r10@46
  void (__fastcall *v57)(StructurePiece *, BlockSource *, char *, signed int); // r4@46
  BlockSource *v58; // r5@46
  StructurePiece *v59; // r6@46
  char v60; // r0@46
  signed int v61; // r9@46
  signed int v62; // r8@47
  void (__fastcall *v63)(StructurePiece *, BlockSource *, char *, signed int); // r7@48
  signed int v64; // r0@48
  signed int v65; // r1@50
  __int64 v66; // r2@50
  void (__fastcall *v67)(StructurePiece *, BlockSource *, char *, signed int); // r7@58
  void (__fastcall *v68)(StructurePiece *, BlockSource *, char *, signed int); // r7@61
  signed int v69; // r0@61
  signed int v70; // r1@63
  void (__fastcall *v71)(StructurePiece *, BlockSource *, char *, signed int); // r7@67
  StructurePiece *v72; // r11@70
  void (__fastcall *v73)(StructurePiece *, BlockSource *, int, signed int); // r12@70
  int v74; // r7@70
  void (__fastcall *v75)(StructurePiece *, int, int, signed int); // r5@70
  void (__fastcall *v76)(StructurePiece *, int, int, signed int); // r5@70
  void (__fastcall *v77)(StructurePiece *, int, int, signed int); // r5@70
  void (__fastcall *v78)(StructurePiece *, int, int, signed int); // r5@70
  int v79; // r8@70
  char v80; // r5@70
  void (__fastcall *v81)(StructurePiece *, int, char *, signed int); // r12@71
  void (__fastcall *v82)(StructurePiece *, int, char *, signed int); // r12@71
  void (__fastcall *v83)(StructurePiece *, int, char *, signed int); // r4@71
  void (__fastcall *v84)(StructurePiece *, int, char *, signed int); // r7@72
  signed int v85; // r4@72
  void (__fastcall *v86)(StructurePiece *, int, char *, signed int); // r6@73
  void (__fastcall *v87)(StructurePiece *, int, char *, signed int); // r7@74
  signed int v88; // r4@74
  void (__fastcall *v89)(StructurePiece *, int, char *, signed int); // r6@75
  void (__fastcall *v90)(StructurePiece *, int, char *, signed int); // r7@76
  signed int v91; // r7@76
  void (__fastcall *v92)(StructurePiece *, int, char *, signed int); // r6@77
  void (__fastcall *v93)(StructurePiece *, int, char *, signed int); // r7@78
  signed int v94; // r7@78
  void (__fastcall *v95)(StructurePiece *, int, char *, signed int); // r6@79
  char v96; // r9@80
  void (__fastcall *v97)(StructurePiece *, int, char *, signed int); // r12@80
  void (__fastcall *v98)(StructurePiece *, int, char *, signed int); // r12@80
  char v99; // r4@80
  void (__fastcall *v100)(StructurePiece *, int, char *, signed int); // r6@80
  BlockSource *v101; // r9@80
  StructurePiece *v102; // r6@80
  signed int v103; // r11@80
  signed int v104; // r7@80
  void (__fastcall *v105)(StructurePiece *, int, char *, signed int); // r12@81
  void (__fastcall *v106)(StructurePiece *, int, char *, signed int); // r12@81
  void (__fastcall *v107)(StructurePiece *, int, char *, signed int); // r12@81
  void (__fastcall *v108)(StructurePiece *, int, char *, signed int); // r12@81
  void (__fastcall *v109)(StructurePiece *, int, char *, signed int); // r12@81
  void (__fastcall *v110)(StructurePiece *, int, char *, signed int); // r12@81
  void (__fastcall *v111)(StructurePiece *, int, char *, _DWORD); // r4@82
  void (__fastcall *v112)(StructurePiece *, int, char *, _DWORD); // r4@82
  void (__fastcall *v113)(StructurePiece *, int, char *, _DWORD); // r4@82
  void (__fastcall *v114)(StructurePiece *, int, char *, _DWORD); // r4@82
  void (__fastcall *v115)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v116)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v117)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v118)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v119)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v120)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v121)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v122)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v123)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v124)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v125)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v126)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v127)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v128)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v129)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v130)(StructurePiece *, int, char *, signed int); // r4@82
  void (__fastcall *v131)(StructurePiece *, int, char *, signed int); // r7@82
  void (__fastcall *v132)(StructurePiece *, int, char *, signed int); // r7@82
  void (__fastcall *v133)(StructurePiece *, int, char *, signed int); // r7@82
  void (__fastcall *v134)(StructurePiece *, int, char *, signed int); // r7@82
  void (__fastcall *v135)(StructurePiece *, int, __int16 *, signed int); // r7@82
  void (__fastcall *v136)(StructurePiece *, int, __int16 *, signed int); // r7@82
  BlockSource *v137; // r11@82
  void (__fastcall *v138)(StructurePiece *, int, char *, signed int); // r4@83
  void (__fastcall *v139)(StructurePiece *, int, int, Random *); // r4@83
  void (__fastcall *v140)(StructurePiece *, int, int, signed int); // r7@84
  void (__fastcall *v141)(StructurePiece *, int, char *, signed int); // r4@86
  int v142; // r5@87
  StructurePiece *v143; // r8@87
  int v144; // r7@87
  void (__fastcall *v145)(StructurePiece *, BlockSource *, char *, int); // r6@88
  int v146; // r6@89
  void (__fastcall *v147)(StructurePiece *, BlockSource *, char *, int); // r4@90
  int v148; // r5@91
  void (__fastcall *v149)(StructurePiece *, BlockSource *, char *, int); // r4@92
  void (__fastcall *v150)(StructurePiece *, BlockSource *, char *, int); // r7@93
  int v151; // r6@94
  void (__fastcall *v152)(StructurePiece *, BlockSource *, char *, int); // r7@95
  StructurePiece *v153; // r9@96
  BlockSource *v154; // r8@96
  int v155; // r11@96
  int v156; // r4@96
  int v157; // r6@97
  void (__fastcall *v158)(StructurePiece *, BlockSource *, char *, int); // r5@98
  int v159; // r1@100
  int v160; // r2@100
  int v161; // r7@100
  int v162; // r6@100
  BlockSource *v163; // r5@100
  Biome *v164; // r0@100
  int v165; // r8@102
  int v166; // r7@102
  int v167; // r0@102
  __int64 v168; // kr20_8@102
  signed int v169; // r1@102
  int v170; // r2@102
  int v171; // r10@102
  signed int v172; // r2@102
  __int64 v173; // kr30_8@102
  signed int v174; // r3@104
  signed int v175; // r7@104
  signed int v176; // r0@108
  void (__fastcall *v177)(StructurePiece *, BlockSource *, int, Random *); // r4@114
  void *v178; // r0@114
  unsigned int *v180; // r2@118
  signed int v181; // r1@120
  Random *v182; // [sp+24h] [bp-B5Ch]@3
  Random *v183; // [sp+24h] [bp-B5Ch]@26
  char v184; // [sp+28h] [bp-B58h]@46
  BlockSource *v185; // [sp+30h] [bp-B50h]@1
  char v186; // [sp+30h] [bp-B50h]@46
  int v187; // [sp+38h] [bp-B48h]@114
  int v188; // [sp+3Ch] [bp-B44h]@100
  int v189; // [sp+40h] [bp-B40h]@100
  int v190; // [sp+44h] [bp-B3Ch]@100
  char v191; // [sp+48h] [bp-B38h]@98
  char v192; // [sp+49h] [bp-B37h]@98
  char v193; // [sp+4Ch] [bp-B34h]@88
  char v194; // [sp+4Dh] [bp-B33h]@88
  char v195; // [sp+50h] [bp-B30h]@86
  char v196; // [sp+51h] [bp-B2Fh]@86
  char v197; // [sp+54h] [bp-B2Ch]@85
  char v198; // [sp+58h] [bp-B28h]@84
  char v199; // [sp+5Ch] [bp-B24h]@84
  char v200; // [sp+5Dh] [bp-B23h]@84
  char v201; // [sp+60h] [bp-B20h]@84
  char v202; // [sp+61h] [bp-B1Fh]@84
  char v203; // [sp+64h] [bp-B1Ch]@83
  char v204; // [sp+65h] [bp-B1Bh]@83
  __int16 v205; // [sp+68h] [bp-B18h]@82
  __int16 v206; // [sp+6Ch] [bp-B14h]@82
  char v207; // [sp+70h] [bp-B10h]@82
  char v208; // [sp+71h] [bp-B0Fh]@82
  char v209; // [sp+74h] [bp-B0Ch]@82
  char v210; // [sp+75h] [bp-B0Bh]@82
  char v211; // [sp+78h] [bp-B08h]@82
  char v212; // [sp+79h] [bp-B07h]@82
  char v213; // [sp+7Ch] [bp-B04h]@82
  char v214; // [sp+7Dh] [bp-B03h]@82
  char v215; // [sp+80h] [bp-B00h]@82
  char v216; // [sp+81h] [bp-AFFh]@82
  char v217; // [sp+84h] [bp-AFCh]@82
  char v218; // [sp+85h] [bp-AFBh]@82
  char v219; // [sp+88h] [bp-AF8h]@82
  char v220; // [sp+89h] [bp-AF7h]@82
  char v221; // [sp+8Ch] [bp-AF4h]@82
  char v222; // [sp+8Dh] [bp-AF3h]@82
  char v223; // [sp+90h] [bp-AF0h]@82
  char v224; // [sp+91h] [bp-AEFh]@82
  char v225; // [sp+94h] [bp-AECh]@82
  char v226; // [sp+95h] [bp-AEBh]@82
  char v227; // [sp+98h] [bp-AE8h]@82
  char v228; // [sp+99h] [bp-AE7h]@82
  char v229; // [sp+9Ch] [bp-AE4h]@82
  char v230; // [sp+9Dh] [bp-AE3h]@82
  char v231; // [sp+A0h] [bp-AE0h]@82
  char v232; // [sp+A1h] [bp-ADFh]@82
  char v233; // [sp+A4h] [bp-ADCh]@82
  char v234; // [sp+A5h] [bp-ADBh]@82
  char v235; // [sp+A8h] [bp-AD8h]@82
  char v236; // [sp+A9h] [bp-AD7h]@82
  char v237; // [sp+ACh] [bp-AD4h]@82
  char v238; // [sp+ADh] [bp-AD3h]@82
  char v239; // [sp+B0h] [bp-AD0h]@82
  char v240; // [sp+B1h] [bp-ACFh]@82
  char v241; // [sp+B4h] [bp-ACCh]@82
  char v242; // [sp+B5h] [bp-ACBh]@82
  char v243; // [sp+B8h] [bp-AC8h]@82
  char v244; // [sp+B9h] [bp-AC7h]@82
  char v245; // [sp+BCh] [bp-AC4h]@82
  char v246; // [sp+BDh] [bp-AC3h]@82
  char v247; // [sp+C0h] [bp-AC0h]@82
  char v248; // [sp+C1h] [bp-ABFh]@82
  char v249; // [sp+C4h] [bp-ABCh]@82
  char v250; // [sp+C5h] [bp-ABBh]@82
  char v251; // [sp+C8h] [bp-AB8h]@82
  char v252; // [sp+C9h] [bp-AB7h]@82
  char v253; // [sp+CCh] [bp-AB4h]@82
  char v254; // [sp+CDh] [bp-AB3h]@82
  char v255; // [sp+D0h] [bp-AB0h]@81
  char v256; // [sp+D1h] [bp-AAFh]@81
  char v257; // [sp+D4h] [bp-AACh]@80
  char v258; // [sp+D5h] [bp-AABh]@80
  char v259; // [sp+D8h] [bp-AA8h]@80
  char v260; // [sp+D9h] [bp-AA7h]@80
  char v261; // [sp+DCh] [bp-AA4h]@80
  char v262; // [sp+DDh] [bp-AA3h]@80
  char v263; // [sp+E0h] [bp-AA0h]@73
  char v264; // [sp+E1h] [bp-A9Fh]@73
  char v265; // [sp+E4h] [bp-A9Ch]@72
  char v266; // [sp+E5h] [bp-A9Bh]@72
  char v267; // [sp+E8h] [bp-A98h]@71
  char v268; // [sp+E9h] [bp-A97h]@71
  char v269; // [sp+ECh] [bp-A94h]@71
  char v270; // [sp+EDh] [bp-A93h]@71
  char v271; // [sp+F0h] [bp-A90h]@71
  char v272; // [sp+F1h] [bp-A8Fh]@71
  char v273; // [sp+F4h] [bp-A8Ch]@70
  char v274; // [sp+F5h] [bp-A8Bh]@70
  char v275; // [sp+F8h] [bp-A88h]@70
  char v276; // [sp+F9h] [bp-A87h]@70
  char v277; // [sp+FCh] [bp-A84h]@70
  char v278; // [sp+FDh] [bp-A83h]@70
  char v279; // [sp+100h] [bp-A80h]@70
  char v280; // [sp+101h] [bp-A7Fh]@70
  char v281; // [sp+104h] [bp-A7Ch]@70
  char v282; // [sp+105h] [bp-A7Bh]@70
  char v283; // [sp+108h] [bp-A78h]@70
  char v284; // [sp+109h] [bp-A77h]@70
  char v285; // [sp+10Ch] [bp-A74h]@70
  char v286; // [sp+10Dh] [bp-A73h]@70
  char v287; // [sp+110h] [bp-A70h]@70
  char v288; // [sp+111h] [bp-A6Fh]@70
  char v289; // [sp+114h] [bp-A6Ch]@70
  char v290; // [sp+115h] [bp-A6Bh]@70
  char v291; // [sp+118h] [bp-A68h]@70
  char v292; // [sp+119h] [bp-A67h]@70
  char v293; // [sp+11Ch] [bp-A64h]@58
  char v294; // [sp+11Dh] [bp-A63h]@58
  char v295; // [sp+120h] [bp-A60h]@48
  char v296; // [sp+121h] [bp-A5Fh]@48
  char v297; // [sp+124h] [bp-A5Ch]@46
  char v298; // [sp+125h] [bp-A5Bh]@46
  char v299; // [sp+128h] [bp-A58h]@46
  char v300; // [sp+129h] [bp-A57h]@46
  char v301; // [sp+12Ch] [bp-A54h]@46
  char v302; // [sp+12Dh] [bp-A53h]@46
  char v303; // [sp+130h] [bp-A50h]@46
  char v304; // [sp+131h] [bp-A4Fh]@46
  char v305; // [sp+134h] [bp-A4Ch]@46
  char v306; // [sp+135h] [bp-A4Bh]@46
  char v307; // [sp+138h] [bp-A48h]@46
  char v308; // [sp+139h] [bp-A47h]@46
  char v309; // [sp+13Ch] [bp-A44h]@46
  char v310; // [sp+13Dh] [bp-A43h]@46
  char v311; // [sp+140h] [bp-A40h]@46
  char v312; // [sp+141h] [bp-A3Fh]@46
  char v313; // [sp+144h] [bp-A3Ch]@46
  char v314; // [sp+145h] [bp-A3Bh]@46
  char v315; // [sp+148h] [bp-A38h]@46
  char v316; // [sp+149h] [bp-A37h]@46
  char v317; // [sp+14Ch] [bp-A34h]@46
  char v318; // [sp+14Dh] [bp-A33h]@46
  char v319; // [sp+150h] [bp-A30h]@46
  char v320; // [sp+151h] [bp-A2Fh]@46
  char v321; // [sp+154h] [bp-A2Ch]@46
  char v322; // [sp+155h] [bp-A2Bh]@46
  char v323; // [sp+158h] [bp-A28h]@46
  char v324; // [sp+159h] [bp-A27h]@46
  char v325; // [sp+15Ch] [bp-A24h]@46
  char v326; // [sp+15Dh] [bp-A23h]@46
  char v327; // [sp+160h] [bp-A20h]@28
  char v328; // [sp+161h] [bp-A1Fh]@28
  char v329; // [sp+164h] [bp-A1Ch]@28
  char v330; // [sp+165h] [bp-A1Bh]@28
  char v331; // [sp+168h] [bp-A18h]@28
  char v332; // [sp+169h] [bp-A17h]@28
  char v333; // [sp+16Ch] [bp-A14h]@28
  char v334; // [sp+16Dh] [bp-A13h]@28
  char v335; // [sp+170h] [bp-A10h]@28
  char v336; // [sp+171h] [bp-A0Fh]@28
  char v337; // [sp+174h] [bp-A0Ch]@28
  char v338; // [sp+175h] [bp-A0Bh]@28
  char v339; // [sp+178h] [bp-A08h]@28
  char v340; // [sp+179h] [bp-A07h]@28
  char v341; // [sp+17Ch] [bp-A04h]@28
  char v342; // [sp+17Dh] [bp-A03h]@28
  unsigned int v343; // [sp+180h] [bp-A00h]@26
  unsigned int v344; // [sp+184h] [bp-9FCh]@26
  int v345; // [sp+B44h] [bp-3Ch]@26
  char v346; // [sp+B48h] [bp-38h]@26
  int v347; // [sp+B4Ch] [bp-34h]@26
  int v348; // [sp+B50h] [bp-30h]@28
  char v349; // [sp+B54h] [bp-2Ch]@30
  char v350; // [sp+B55h] [bp-2Bh]@30
  char v351; // [sp+B58h] [bp-28h]@30
  char v352; // [sp+B59h] [bp-27h]@30

  v4 = this;
  v5 = a4;
  v6 = a3;
  v185 = a2;
  if ( *((_DWORD *)this + 9) > -1 )
  {
LABEL_26:
    v28 = *(_DWORD *)v6;
    v343 = v28;
    v29 = 1;
    v345 = 625;
    v30 = 0;
    v346 = 0;
    v347 = 0;
    v183 = v6;
    v344 = v28;
    do
    {
      v31 = v28 ^ (v28 >> 30);
      v32 = (int *)(&v343 + v30);
      v33 = v30++ + 1812433253 * v31;
      v28 = v29++ + 1812433253 * v31;
      v32[2] = v33 + 1;
    }
    while ( v30 != 397 );
    v345 = 624;
    v348 = 398;
    v34 = (int)v4;
    v35 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v36 = v5;
    v341 = BlockID::AIR;
    v339 = BlockID::AIR;
    v342 = 0;
    v340 = 0;
    v35(v34, v185, v5, 1);
    v37 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v34 + 40);
    v337 = BlockID::AIR;
    v335 = BlockID::AIR;
    v338 = 0;
    v336 = 0;
    v37(v34, v185, v5, 2);
    v38 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v34 + 40);
    v333 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v334 = 0;
    v331 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v332 = 0;
    v38(v34, v185, v5, 2);
    v39 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v34 + 40);
    v329 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v330 = 0;
    v327 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v328 = 0;
    v39(v34, v185, v5, 1);
    v40 = *(BlockSelector **)(v34 + 48);
    if ( v40 )
      j_StructurePiece::generateBox((StructurePiece *)v34, v185, v5, 0, 0, 0, 0, 3, 5, 0, (Random *)&v343, v40);
    else
      v351 = *(_BYTE *)(Block::mCobblestone + 4);
      v352 = 0;
      v349 = *(_BYTE *)(Block::mCobblestone + 4);
      v350 = 0;
      j_StructurePiece::generateBox(v34, (int)v185, (int)v5, 0, 0, 0, 0, 3, 5, (int)&v351, (int)&v349, 0);
    v41 = *(BlockSelector **)(v34 + 48);
    if ( v41 )
      j_StructurePiece::generateBox((StructurePiece *)v34, v185, v5, 8, 0, 0, 8, 3, 10, 0, (Random *)&v343, v41);
      j_StructurePiece::generateBox(v34, (int)v185, (int)v5, 8, 0, 0, 8, 3, 10, (int)&v351, (int)&v349, 0);
    v42 = *(BlockSelector **)(v34 + 48);
    if ( v42 )
      j_StructurePiece::generateBox((StructurePiece *)v34, v185, v5, 1, 0, 0, 7, 2, 0, 0, (Random *)&v343, v42);
      j_StructurePiece::generateBox(v34, (int)v185, (int)v5, 1, 0, 0, 7, 2, 0, (int)&v351, (int)&v349, 0);
    v43 = *(BlockSelector **)(v34 + 48);
    if ( v43 )
      j_StructurePiece::generateBox((StructurePiece *)v34, v185, v5, 1, 0, 5, 2, 1, 5, 0, (Random *)&v343, v43);
      j_StructurePiece::generateBox(v34, (int)v185, (int)v5, 1, 0, 5, 2, 1, 5, (int)&v351, (int)&v349, 0);
    v44 = *(BlockSelector **)(v34 + 48);
    if ( v44 )
      j_StructurePiece::generateBox((StructurePiece *)v34, v185, v5, 2, 0, 6, 2, 3, 10, 0, (Random *)&v343, v44);
      j_StructurePiece::generateBox(v34, (int)v185, (int)v5, 2, 0, 6, 2, 3, 10, (int)&v351, (int)&v349, 0);
    v45 = *(BlockSelector **)(v34 + 48);
    if ( v45 )
      j_StructurePiece::generateBox((StructurePiece *)v34, v185, v5, 3, 0, 10, 7, 3, 10, 0, (Random *)&v343, v45);
      j_StructurePiece::generateBox(v34, (int)v185, (int)v5, 3, 0, 10, 7, 3, 10, (int)&v351, (int)&v349, 0);
    v46 = (StructurePiece *)v34;
    v47 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v34 + 40);
    v325 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v326 = 0;
    v323 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v324 = 0;
    v47(v34, v185, v36, 1);
    v48 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v34 + 40);
    v321 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v322 = 0;
    v319 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v320 = 0;
    v48(v34, v185, v36, 1);
    v49 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v34 + 40);
    v317 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v318 = 0;
    v315 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v316 = 0;
    v49(v34, v185, v36, 0);
    v50 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v34 + 40);
    v313 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v314 = 0;
    v311 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v312 = 0;
    v50(v34, v185, v36, 0);
    v51 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v34 + 40);
    v309 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v310 = 0;
    v307 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v308 = 0;
    v51(v34, v185, v36, 0);
    v52 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v34 + 36);
    v305 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v306 = 0;
    v52(v34, v185, &v305, 0);
    v53 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v34 + 36);
    v303 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v304 = 0;
    v53(v34, v185, &v303, 0);
    v54 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v301 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v302 = 0;
    v54(v34, v185, &v301, 8);
    v55 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v299 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v300 = 0;
    v55(v34, v185, &v299, 8);
    v56 = (int)v36;
    v57 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 36);
    v58 = v185;
    v297 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v298 = 0;
    v57(v46, v185, &v297, 8);
    v186 = j_StructurePiece::getOrientationData(v46, (const Block *)Block::mOakStairs, 3);
    v59 = v46;
    v60 = j_StructurePiece::getOrientationData(v46, (const Block *)Block::mOakStairs, 2);
    v61 = -1;
    v184 = v60;
      v62 = 0;
      if ( v61 < 0 )
      {
        do
        {
          v68 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v59 + 36);
          v295 = *(_BYTE *)(Block::mOakStairs + 4);
          v296 = v186;
          v68(v59, v58, &v295, v62);
          v69 = 0;
          if ( v62 != 5 )
            v69 = 1;
          v70 = 0;
          if ( v61 > 1 )
            v70 = 1;
          if ( v62 <= 1 && (v69 | v70) == 1 )
          {
            v71 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v59 + 36);
            v293 = *(_BYTE *)(Block::mOakStairs + 4);
            v294 = v184;
            v71(v59, v58, &v293, v62);
          }
          ++v62;
        }
        while ( v62 != 9 );
      }
      else
          v63 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v59 + 36);
          v63(v59, v58, &v295, v62);
          v64 = 0;
            v64 = 1;
          v65 = 0;
          LODWORD(v66) = 0;
            v65 = 1;
          if ( v62 < 4 )
            LODWORD(v66) = 1;
          HIDWORD(v66) = 0;
          if ( v61 > 0 )
            HIDWORD(v66) = 1;
          if ( v66 && (v64 | v65) == 1 )
            v67 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v59 + 36);
            v67(v59, v58, &v293, v62);
      ++v61;
    while ( v61 != 3 );
    v72 = v59;
    v73 = *(void (__fastcall **)(StructurePiece *, BlockSource *, int, signed int))(*(_DWORD *)v59 + 40);
    v291 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v292 = 0;
    v289 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v290 = 0;
    v74 = (int)v58;
    v73(v59, v58, v56, 3);
    v75 = *(void (__fastcall **)(StructurePiece *, int, int, signed int))(*(_DWORD *)v59 + 40);
    v287 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v288 = 0;
    v285 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v286 = 0;
    v75(v59, v74, v56, 7);
    v76 = *(void (__fastcall **)(StructurePiece *, int, int, signed int))(*(_DWORD *)v59 + 40);
    v283 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v284 = 0;
    v281 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v282 = 0;
    v76(v59, v74, v56, 4);
    v77 = *(void (__fastcall **)(StructurePiece *, int, int, signed int))(*(_DWORD *)v59 + 40);
    v279 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v280 = 0;
    v277 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v278 = 0;
    v77(v59, v74, v56, 6);
    v78 = *(void (__fastcall **)(StructurePiece *, int, int, signed int))(*(_DWORD *)v59 + 40);
    v275 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v276 = 0;
    v273 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v274 = 0;
    v79 = v74;
    v78(v59, v74, v56, 5);
    v80 = j_StructurePiece::getOrientationData(v59, (const Block *)Block::mOakStairs, 0);
    if ( *((_BYTE *)v59 + 47) )
      v81 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v59 + 36);
      v271 = *(_BYTE *)(Block::mWeb + 4);
      v272 = 0;
      v81(v59, v74, &v271, 5);
      v82 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v59 + 36);
      v269 = *(_BYTE *)(Block::mWeb + 4);
      v270 = 0;
      v82(v59, v74, &v269, 5);
      v83 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v59 + 36);
      v267 = *(_BYTE *)(Block::mWeb + 4);
      v268 = 0;
      v83(v59, v74, &v267, 5);
    v84 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v59 + 36);
    v265 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v85 = 4;
    v266 = 0;
    v84(v59, v79, &v265, 4);
      v86 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
      v263 = *(_BYTE *)(Block::mOakStairs + 4);
      v264 = v80;
      v86(v72, v79, &v263, 4);
      ++v85;
    while ( v85 != 11 );
    v87 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
    v87(v72, v79, &v265, 3);
    v88 = 5;
      v89 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
      v89(v72, v79, &v263, 3);
      ++v88;
    while ( v88 != 11 );
    v90 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
    v90(v72, v79, &v265, 2);
    v91 = 6;
      v92 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
      v92(v72, v79, &v263, 2);
      ++v91;
    while ( v91 != 11 );
    v93 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
    v93(v72, v79, &v265, 1);
    v94 = 7;
      v95 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
      v95(v72, v79, &v263, 1);
      ++v94;
    while ( v94 != 11 );
    v96 = j_StructurePiece::getOrientationData(v72, (const Block *)Block::mOakStairs, 1);
    v97 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
    v261 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v262 = 0;
    v97(v72, v79, &v261, 6);
    v98 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
    v259 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v260 = 0;
    v98(v72, v79, &v259, 7);
    v99 = v96;
    v100 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v72 + 36);
    v257 = *(_BYTE *)(Block::mOakStairs + 4);
    v258 = v96;
    v101 = (BlockSource *)v79;
    v100(v72, v79, &v257, 6);
    v102 = v72;
    v103 = 6;
    v104 = 6;
      v105 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
      v255 = *(_BYTE *)(Block::mOakStairs + 4);
      v256 = v99;
      v105(v102, v79, &v255, v104);
      v106 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
      v106(v102, v79, &v255, v104);
      v107 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
      v107(v102, v79, &v255, v104);
      v108 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
      v108(v102, v79, &v255, v104);
      v109 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
      v109(v102, v79, &v255, v104);
      v110 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
      v110(v102, v79, &v255, v104++);
      --v103;
    while ( v104 != 9 );
    v111 = *(void (__fastcall **)(StructurePiece *, int, char *, _DWORD))(*(_DWORD *)v102 + 36);
    v253 = *(_BYTE *)(Block::mLog + 4);
    v254 = 0;
    v111(v102, v79, &v253, 0);
    v112 = *(void (__fastcall **)(StructurePiece *, int, char *, _DWORD))(*(_DWORD *)v102 + 36);
    v251 = *(_BYTE *)(Block::mLog + 4);
    v252 = 0;
    v112(v102, v79, &v251, 0);
    v113 = *(void (__fastcall **)(StructurePiece *, int, char *, _DWORD))(*(_DWORD *)v102 + 36);
    v249 = *(_BYTE *)(Block::mGlassPane + 4);
    v250 = 0;
    v113(v102, v79, &v249, 0);
    v114 = *(void (__fastcall **)(StructurePiece *, int, char *, _DWORD))(*(_DWORD *)v102 + 36);
    v247 = *(_BYTE *)(Block::mGlassPane + 4);
    v248 = 0;
    v114(v102, v79, &v247, 0);
    v115 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v245 = *(_BYTE *)(Block::mLog + 4);
    v246 = 0;
    v115(v102, v79, &v245, 4);
    v116 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v243 = *(_BYTE *)(Block::mGlassPane + 4);
    v244 = 0;
    v116(v102, v79, &v243, 5);
    v117 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v241 = *(_BYTE *)(Block::mLog + 4);
    v242 = 0;
    v117(v102, v79, &v241, 6);
    v118 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v239 = *(_BYTE *)(Block::mLog + 4);
    v240 = 0;
    v118(v102, v79, &v239, 8);
    v119 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v237 = *(_BYTE *)(Block::mGlassPane + 4);
    v238 = 0;
    v119(v102, v79, &v237, 8);
    v120 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v235 = *(_BYTE *)(Block::mGlassPane + 4);
    v236 = 0;
    v120(v102, v79, &v235, 8);
    v121 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v233 = *(_BYTE *)(Block::mLog + 4);
    v234 = 0;
    v121(v102, v79, &v233, 8);
    v122 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v231 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v232 = 0;
    v122(v102, v79, &v231, 8);
    v123 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v229 = *(_BYTE *)(Block::mLog + 4);
    v230 = 0;
    v123(v102, v79, &v229, 8);
    v124 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v227 = *(_BYTE *)(Block::mGlassPane + 4);
    v228 = 0;
    v124(v102, v79, &v227, 8);
    v125 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v225 = *(_BYTE *)(Block::mGlassPane + 4);
    v226 = 0;
    v125(v102, v79, &v225, 8);
    v126 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v223 = *(_BYTE *)(Block::mLog + 4);
    v224 = 0;
    v126(v102, v79, &v223, 8);
    v127 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v221 = *(_BYTE *)(Block::mLog + 4);
    v222 = 0;
    v127(v102, v79, &v221, 2);
    v128 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v219 = *(_BYTE *)(Block::mGlassPane + 4);
    v220 = 0;
    v128(v102, v79, &v219, 2);
    v129 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v217 = *(_BYTE *)(Block::mGlassPane + 4);
    v218 = 0;
    v129(v102, v79, &v217, 2);
    v130 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v215 = *(_BYTE *)(Block::mLog + 4);
    v216 = 0;
    v130(v102, v79, &v215, 2);
    v131 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v213 = *(_BYTE *)(Block::mLog + 4);
    v214 = 0;
    v131(v102, v79, &v213, 4);
    v132 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v211 = *(_BYTE *)(Block::mGlassPane + 4);
    v212 = 0;
    v132(v102, v79, &v211, 5);
    v133 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v209 = *(_BYTE *)(Block::mLog + 4);
    v210 = 0;
    v133(v102, v79, &v209, 6);
    v134 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
    v207 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v208 = 0;
    v134(v102, v79, &v207, 5);
    v135 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, signed int))(*(_DWORD *)v102 + 36);
    v206 = FullBlock::AIR;
    v135(v102, v79, &v206, 2);
    v136 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, signed int))(*(_DWORD *)v102 + 36);
    v205 = FullBlock::AIR;
    v136(v102, v79, &v205, 2);
    v137 = (BlockSource *)v79;
    if ( !*((_BYTE *)v102 + 47) )
      v138 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
      v203 = *(_BYTE *)(Block::mTorch + 4);
      v204 = j_StructurePiece::getTorchData(v102, 0);
      v138(v102, v79, &v203, 2);
      v139 = *(void (__fastcall **)(StructurePiece *, int, int, Random *))(*(_DWORD *)v102 + 56);
      j_StructurePiece::getOrientationData(v102, (const Block *)Block::mWoodenDoor, 1);
      v139(v102, v79, v56, v183);
    v140 = *(void (__fastcall **)(StructurePiece *, int, int, signed int))(*(_DWORD *)v102 + 40);
    v201 = BlockID::AIR;
    v199 = BlockID::AIR;
    v202 = 0;
    v200 = 0;
    v140(v102, v79, v56, 1);
    j_StructurePiece::getBlock((StructurePiece *)&v198, v102, v79, 2, 0, (const BoundingBox *)0xFFFFFFFF, v56);
    if ( !v198 )
      j_StructurePiece::getBlock((StructurePiece *)&v197, v102, v79, 2, -1, (const BoundingBox *)0xFFFFFFFF, v56);
      if ( v197 )
        v141 = *(void (__fastcall **)(StructurePiece *, int, char *, signed int))(*(_DWORD *)v102 + 36);
        v195 = *(_BYTE *)(Block::mStoneStairs + 4);
        v196 = j_StructurePiece::getOrientationData(v102, (const Block *)Block::mStoneStairs, 3);
        v141(v102, v79, &v195, 2);
    v142 = 0;
    v143 = v102;
    v144 = 0;
      j_StructurePiece::generateAirColumnUp(v143, v101, v144, 7, 0, (const BoundingBox *)v56);
      v145 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v143 + 44);
      v193 = *(_BYTE *)(Block::mCobblestone + 4);
      v194 = 0;
      v145(v143, v101, &v193, v144++);
    while ( v144 != 9 );
    v146 = 0;
      j_StructurePiece::generateAirColumnUp(v143, v101, v142, 7, 1, (const BoundingBox *)v56);
      v147 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v143 + 44);
      v147(v143, v101, &v193, v142++);
    while ( v142 != 9 );
    v148 = 0;
      j_StructurePiece::generateAirColumnUp(v143, v101, v146, 7, 2, (const BoundingBox *)v56);
      v149 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v143 + 44);
      v149(v143, v101, &v193, v146++);
    while ( v146 != 9 );
      j_StructurePiece::generateAirColumnUp(v143, v101, v148, 7, 3, (const BoundingBox *)v56);
      v150 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v143 + 44);
      v150(v143, v101, &v193, v148++);
    while ( v148 != 9 );
    v151 = 0;
      j_StructurePiece::generateAirColumnUp(v143, v101, v151, 7, 4, (const BoundingBox *)v56);
      v152 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v143 + 44);
      v152(v143, v101, &v193, v151++);
    while ( v151 != 9 );
    v153 = v143;
    v154 = v137;
    v155 = v56;
    v156 = 5;
      v157 = 2;
      do
        j_StructurePiece::generateAirColumnUp(v153, v154, v157, 7, v156, (const BoundingBox *)v56);
        v158 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v153 + 44);
        v191 = *(_BYTE *)(Block::mCobblestone + 4);
        v192 = 0;
        v158(v153, v154, &v191, v157++);
      while ( v157 != 9 );
      ++v156;
    while ( v156 != 11 );
    v159 = *(_DWORD *)(v56 + 4);
    v160 = *(_DWORD *)(v56 + 8);
    v161 = *(_DWORD *)(v56 + 16);
    v162 = *(_DWORD *)(v56 + 20);
    v163 = v154;
    v188 = *(_DWORD *)v56 + (*(_DWORD *)(v56 + 12) + 1 - *(_DWORD *)v56) / 2;
    v189 = v159 + (1 - v159 + v161) / 2;
    v190 = v160 + (1 - v160 + v162) / 2;
    v164 = (Biome *)j_BlockSource::getBiome(v154, (const BlockPos *)&v188);
    if ( j_Biome::isSnowCovered(v164) && !*((_BYTE *)v153 + 52) )
      v165 = j_StructurePiece::getWorldY(v153, 1);
      v166 = (*(int (__fastcall **)(StructurePiece *, signed int, signed int))(*(_DWORD *)v153 + 28))(v153, 5, 9);
      v167 = (*(int (__fastcall **)(StructurePiece *, signed int, signed int))(*(_DWORD *)v153 + 32))(v153, 5, 9);
      v168 = *(_QWORD *)v56;
      v169 = 0;
      v170 = *(_QWORD *)(v56 + 8) >> 32;
      v171 = *(_QWORD *)(v56 + 8);
      v18 = __OFSUB__(v170, v166);
      v17 = v170 - v166 < 0;
      v172 = 0;
      v173 = *(_QWORD *)(v155 + 16);
      if ( !(v17 ^ v18) )
        v172 = 1;
      v18 = __OFSUB__((_DWORD)v168, v166);
      v22 = (_DWORD)v168 == v166;
      v17 = (signed int)v168 - v166 < 0;
      v174 = 0;
      v175 = 0;
      if ( (unsigned __int8)(v17 ^ v18) | v22 )
        v174 = 1;
      if ( v171 <= v167 )
        v175 = 1;
      v18 = __OFSUB__(HIDWORD(v173), v167);
      v17 = HIDWORD(v173) - v167 < 0;
      v176 = 0;
        v176 = 1;
      if ( SHIDWORD(v168) <= v165 )
        v169 = 1;
      if ( (signed int)v173 >= v165 && (v176 & v172 & v174 & v175 & v169) == 1 )
        v177 = *(void (__fastcall **)(StructurePiece *, BlockSource *, int, Random *))(*(_DWORD *)v153 + 48);
        sub_21E94B4((void **)&v187, "loot_tables/chests/village_two_room_house.json");
        v177(v153, v163, v155, v183);
        v178 = (void *)(v187 - 12);
        if ( (int *)(v187 - 12) != &dword_28898C0 )
          v180 = (unsigned int *)(v187 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v181 = __ldrex(v180);
            while ( __strex(v181 - 1, v180) );
          else
            v181 = (*v180)--;
          if ( v181 <= 0 )
            j_j_j_j__ZdlPv_9(v178);
        *((_BYTE *)v153 + 52) = 1;
    return 1;
  }
  v7 = *((_DWORD *)this + 3);
  v8 = *((_DWORD *)this + 6);
  if ( v7 > v8 )
    goto LABEL_128;
  v9 = *((_DWORD *)v4 + 4);
  v10 = 0;
  v11 = 0;
  v182 = a3;
  do
    v12 = *((_DWORD *)v4 + 1);
    if ( v12 <= v9 )
        v13 = v12;
        v14 = *(_QWORD *)v5;
        v15 = *((_QWORD *)v5 + 1) >> 32;
        v16 = *((_QWORD *)v5 + 1);
        v18 = __OFSUB__(v15, v12);
        v17 = v15 - v12 < 0;
        v19 = 0;
        v20 = *((_QWORD *)v5 + 2);
        if ( !(v17 ^ v18) )
          v19 = 1;
        v21 = 0;
        if ( (signed int)v14 <= v13 )
          v21 = 1;
        v18 = __OFSUB__(v16, v7);
        v22 = v16 == v7;
        v17 = v16 - v7 < 0;
        v23 = 0;
        if ( (unsigned __int8)(v17 ^ v18) | v22 )
          v23 = 1;
        v24 = 0;
        if ( SHIDWORD(v20) >= v7 )
          v24 = 1;
        v25 = 0;
        if ( SHIDWORD(v14) < 65 )
          v25 = 1;
        if ( (signed int)v20 >= 64 && (v19 & v21 & v23 & v24 & v25) == 1 )
          v26 = j_BlockSource::getAboveTopSolidBlock(v185, v13, v7, 0, 0);
          ++v10;
          if ( v26 < 64 )
            v26 = 64;
          v9 = *((_DWORD *)v4 + 4);
          v11 += v26;
        v12 = v13 + 1;
      while ( v13 < v9 );
      v8 = *((_DWORD *)v4 + 6);
    v18 = __OFSUB__(v7, v8);
    v17 = v7++ - v8 < 0;
  while ( v17 ^ v18 );
  v6 = v182;
  if ( !v10 )
LABEL_128:
    *((_DWORD *)v4 + 9) = -1;
  v27 = v11 / v10;
  *((_DWORD *)v4 + 9) = v11 / v10;
  if ( v11 / v10 >= 0 )
    *((_DWORD *)v4 + 2) += v27 - *((_DWORD *)v4 + 5) + 6;
    *((_DWORD *)v4 + 5) = v27 + 6;
    goto LABEL_26;
  return 1;
}


int __fastcall TwoRoomHouse::TwoRoomHouse(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 36) = -1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)result = &off_27245B0;
  *(_BYTE *)(result + 52) = 0;
  return result;
}


signed int __fastcall TwoRoomHouse::getType(TwoRoomHouse *this)
{
  return 1447637586;
}


int __fastcall TwoRoomHouse::TwoRoomHouse(int result, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // r1@2

  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = a3;
  *(_DWORD *)result = &off_27242B8;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 36) = 0xFFFFFFFFLL;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 44);
    *(_BYTE *)(result + 44) = v6;
    *(_BYTE *)(result + 45) = BYTE1(v6);
    *(_BYTE *)(result + 46) = v6 >> 16;
    *(_BYTE *)(result + 47) = BYTE3(v6);
    if ( 0 != v6 >> 24 )
      *(_DWORD *)(result + 48) = &VillagePiece::mossyStoneSelector;
  }
  *(_DWORD *)result = &off_27245B0;
  *(_BYTE *)(result + 52) = 0;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  return result;
}


_DWORD *__fastcall TwoRoomHouse::createPiece(_DWORD *a1, int a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 *v9; // r6@1
  int v10; // r10@1
  _DWORD *v11; // r9@1
  _DWORD *result; // r0@1
  unsigned int v13; // r1@4
  int v14; // r1@6
  int v15; // [sp+20h] [bp+0h]@1
  int v16; // [sp+24h] [bp+4h]@6
  int v17; // [sp+28h] [bp+8h]@6
  int v18; // [sp+2Ch] [bp+Ch]@6
  int v19; // [sp+30h] [bp+10h]@6
  int v20; // [sp+34h] [bp+14h]@6

  v9 = a3;
  v10 = a2;
  v11 = a1;
  j_BoundingBox::orientBox((BoundingBox *)&v15, a5, a6, a7, 0, 0, 0, 9, 7, 12, a8);
  result = (_DWORD *)j_StructurePiece::findCollisionPiece(v9, (int)&v15);
  if ( result )
  {
    *v11 = 0;
  }
  else
    result = j_operator new(0x38u);
    result[5] = 0;
    result[6] = 0;
    result[3] = 0;
    result[4] = 0;
    result[1] = 0;
    result[2] = 0;
    result[7] = 255;
    result[8] = a9;
    *result = &off_27242B8;
    result[11] = 0;
    result[12] = 0;
    result[9] = -1;
    result[10] = 0;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 44);
      *((_BYTE *)result + 44) = v13;
      *((_BYTE *)result + 45) = BYTE1(v13);
      *((_BYTE *)result + 46) = v13 >> 16;
      *((_BYTE *)result + 47) = BYTE3(v13);
      if ( v13 >> 24 )
        result[12] = &VillagePiece::mossyStoneSelector;
    }
    *v11 = result;
    *result = &off_27245B0;
    *((_BYTE *)result + 52) = 0;
    v14 = v15;
    result[7] = a8;
    result[1] = v14;
    result[2] = v16;
    result[3] = v17;
    result[4] = v18;
    result[5] = v19;
    result[6] = v20;
  return result;
}
