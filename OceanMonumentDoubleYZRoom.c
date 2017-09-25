

signed int __fastcall OceanMonumentDoubleYZRoom::getType(OceanMonumentDoubleYZRoom *this)
{
  return 1330469210;
}


signed int __fastcall OceanMonumentDoubleYZRoom::postProcess(OceanMonumentDoubleYZRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentDoubleYZRoom *v4; // r7@1
  BlockSource *v5; // r10@1
  const BoundingBox *v6; // r4@1
  int v7; // r11@4
  const BoundingBox *v8; // r6@5
  void (__fastcall *v9)(OceanMonumentDoubleYZRoom *, BlockSource *, char *, int); // r12@7
  bool v10; // nf@8
  unsigned __int8 v11; // vf@8
  int v12; // r11@11
  const BoundingBox *v13; // r6@12
  void (__fastcall *v14)(OceanMonumentDoubleYZRoom *, BlockSource *, char *, int); // r12@14
  signed int v15; // r4@17
  char *v16; // r2@18
  char *v17; // r1@18
  void (__fastcall *v18)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, _DWORD); // r12@18
  char v19; // r10@20
  char v20; // r11@22
  void (__fastcall *v21)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int); // r12@22
  void (__fastcall *v22)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int); // r12@22
  void (__fastcall *v23)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int); // r12@22
  StructurePiece *v24; // r9@23
  signed int v25; // r4@23
  char *v26; // r2@24
  char *v27; // r1@24
  void (__fastcall *v28)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int); // r6@24
  char v29; // r2@26
  int v30; // r0@29
  int v31; // r7@30
  int v32; // r4@31
  void (__fastcall *v33)(StructurePiece *, _DWORD, char *, signed int); // r6@32
  void (__fastcall *v34)(StructurePiece *, _DWORD, char *, signed int); // r6@33
  int v35; // r4@34
  void (__fastcall *v36)(StructurePiece *, _DWORD, char *, signed int); // r6@35
  void (__fastcall *v37)(StructurePiece *, _DWORD, char *, signed int); // r6@36
  int v38; // r7@40
  int v39; // r4@41
  void (__fastcall *v40)(StructurePiece *, _DWORD, char *, signed int); // r6@42
  void (__fastcall *v41)(StructurePiece *, _DWORD, char *, signed int); // r6@43
  int v42; // r4@44
  void (__fastcall *v43)(StructurePiece *, _DWORD, char *, signed int); // r6@45
  void (__fastcall *v44)(StructurePiece *, _DWORD, char *, signed int); // r6@46
  int v45; // r7@50
  int v46; // r4@51
  void (__fastcall *v47)(StructurePiece *, _DWORD, char *, _DWORD); // r6@52
  void (__fastcall *v48)(StructurePiece *, _DWORD, char *, _DWORD); // r6@53
  int v49; // r4@54
  void (__fastcall *v50)(StructurePiece *, _DWORD, char *, _DWORD); // r6@55
  void (__fastcall *v51)(StructurePiece *, _DWORD, char *, _DWORD); // r6@56
  int v52; // r0@58
  int v53; // r7@59 OVERLAPPED
  signed int v54; // r8@59 OVERLAPPED
  int v55; // r4@60
  void (__fastcall *v56)(StructurePiece *, _DWORD, char *, signed int); // r6@61
  void (__fastcall *v57)(StructurePiece *, _DWORD, char *, signed int); // r6@62
  int v58; // r4@63
  void (__fastcall *v59)(StructurePiece *, _DWORD, char *, signed int); // r6@64
  void (__fastcall *v60)(StructurePiece *, _DWORD, char *, signed int); // r6@65
  int v61; // r7@69
  int v62; // r4@70
  void (__fastcall *v63)(StructurePiece *, _DWORD, char *, _DWORD); // r6@71
  void (__fastcall *v64)(StructurePiece *, _DWORD, char *, _DWORD); // r6@72
  int v65; // r4@73
  void (__fastcall *v66)(StructurePiece *, _DWORD, char *, _DWORD); // r6@74
  void (__fastcall *v67)(StructurePiece *, _DWORD, char *, _DWORD); // r6@75
  int v68; // r7@79
  int v69; // r4@80
  void (__fastcall *v70)(StructurePiece *, _DWORD, char *, signed int); // r6@81
  void (__fastcall *v71)(StructurePiece *, _DWORD, char *, signed int); // r6@82
  int v72; // r4@83
  void (__fastcall *v73)(StructurePiece *, _DWORD, char *, signed int); // r6@84
  void (__fastcall *v74)(StructurePiece *, _DWORD, char *, signed int); // r6@85
  int v75; // r0@87
  int v76; // r7@88
  int v77; // r4@89
  void (__fastcall *v78)(StructurePiece *, _DWORD, char *, signed int); // r6@90
  void (__fastcall *v79)(StructurePiece *, _DWORD, char *, signed int); // r6@91
  int v80; // r4@92
  void (__fastcall *v81)(StructurePiece *, _DWORD, char *, signed int); // r6@93
  void (__fastcall *v82)(StructurePiece *, _DWORD, char *, signed int); // r6@94
  int v83; // r7@98
  int v84; // r4@99
  void (__fastcall *v85)(StructurePiece *, _DWORD, char *, signed int); // r6@100
  void (__fastcall *v86)(StructurePiece *, _DWORD, char *, signed int); // r6@101
  int v87; // r4@102
  void (__fastcall *v88)(StructurePiece *, _DWORD, char *, signed int); // r6@103
  void (__fastcall *v89)(StructurePiece *, _DWORD, char *, signed int); // r6@104
  void (__fastcall *v90)(StructurePiece *, _DWORD, _DWORD, signed int); // r5@106
  void (__fastcall *v91)(StructurePiece *, _DWORD, _DWORD, signed int); // r5@106
  void (__fastcall *v92)(StructurePiece *, _DWORD, _DWORD, signed int); // r7@106
  int v93; // r7@108
  int v94; // r4@109
  void (__fastcall *v95)(StructurePiece *, _DWORD, char *, _DWORD); // r6@110
  void (__fastcall *v96)(StructurePiece *, _DWORD, char *, _DWORD); // r6@111
  int v97; // r4@112
  void (__fastcall *v98)(StructurePiece *, _DWORD, char *, _DWORD); // r6@113
  void (__fastcall *v99)(StructurePiece *, _DWORD, char *, _DWORD); // r6@114
  void (__fastcall *v100)(StructurePiece *, _DWORD, _DWORD, signed int); // r6@116
  void (__fastcall *v101)(StructurePiece *, _DWORD, _DWORD, signed int); // r4@116
  signed __int64 v102; // r5@116
  void (__fastcall *v103)(StructurePiece *, _DWORD, _DWORD, signed int); // r7@116
  int v104; // r0@117
  int v105; // r7@118 OVERLAPPED
  signed int v106; // r8@118 OVERLAPPED
  int v107; // r4@119
  void (__fastcall *v108)(StructurePiece *, _DWORD, char *, signed int); // r6@120
  void (__fastcall *v109)(StructurePiece *, _DWORD, char *, signed int); // r6@121
  int v110; // r4@122
  void (__fastcall *v111)(StructurePiece *, _DWORD, char *, signed int); // r6@123
  void (__fastcall *v112)(StructurePiece *, _DWORD, char *, signed int); // r6@124
  int v113; // r7@128
  int v114; // r4@129
  void (__fastcall *v115)(StructurePiece *, _DWORD, char *, _DWORD); // r6@130
  void (__fastcall *v116)(StructurePiece *, _DWORD, char *, _DWORD); // r6@131
  int v117; // r4@132
  void (__fastcall *v118)(StructurePiece *, _DWORD, char *, _DWORD); // r6@133
  void (__fastcall *v119)(StructurePiece *, _DWORD, char *, _DWORD); // r6@134
  void (__fastcall *v120)(StructurePiece *, _DWORD, _DWORD, signed int); // r6@136
  void (__fastcall *v121)(StructurePiece *, _DWORD, _DWORD, signed int); // r4@136
  signed __int64 v122; // r5@136
  void (__fastcall *v123)(StructurePiece *, _DWORD, _DWORD, signed int); // r7@136
  int v124; // r7@138
  int v125; // r4@139
  void (__fastcall *v126)(StructurePiece *, _DWORD, char *, signed int); // r6@140
  void (__fastcall *v127)(StructurePiece *, _DWORD, char *, signed int); // r6@141
  int v128; // r4@142
  void (__fastcall *v129)(StructurePiece *, _DWORD, char *, signed int); // r6@143
  void (__fastcall *v130)(StructurePiece *, _DWORD, char *, signed int); // r6@144
  void (__fastcall *v131)(StructurePiece *, _DWORD, _DWORD, signed int); // r6@146
  void (__fastcall *v132)(StructurePiece *, _DWORD, _DWORD, signed int); // r6@146
  void (__fastcall *v133)(StructurePiece *, _DWORD, _DWORD, signed int); // r7@146
  int v134; // r4@149
  int v135; // r6@149
  int v136; // r7@150
  unsigned int *v137; // r1@151
  unsigned int v138; // r0@153
  unsigned int *v139; // r5@157
  unsigned int v140; // r0@159
  int v141; // r0@168
  unsigned int *v142; // r2@169
  unsigned int v143; // r1@171
  int v144; // r3@171
  int v145; // r4@178
  int v146; // r6@178
  int v147; // r7@179
  unsigned int *v148; // r1@180
  unsigned int v149; // r0@182
  unsigned int *v150; // r5@186
  unsigned int v151; // r0@188
  int v152; // r0@197
  unsigned int *v153; // r2@198
  unsigned int v154; // r1@200
  int v155; // r3@200
  int v156; // r4@207
  int v157; // r6@207
  int v158; // r7@208
  unsigned int *v159; // r1@209
  unsigned int v160; // r0@211
  unsigned int *v161; // r5@215
  unsigned int v162; // r0@217
  int v163; // r0@226
  unsigned int *v164; // r2@227
  unsigned int v165; // r1@229
  int v166; // r3@229
  int v167; // r4@236
  int v168; // r6@236
  int v169; // r7@237
  unsigned int *v170; // r1@238
  unsigned int v171; // r0@240
  unsigned int *v172; // r5@244
  unsigned int v173; // r0@246
  int v174; // r0@255
  unsigned int *v175; // r2@256
  unsigned int v176; // r1@258
  int v177; // r3@258
  unsigned __int64 v179; // [sp+0h] [bp-218h]@28
  signed __int64 v180; // [sp+8h] [bp-210h]@28
  char v181; // [sp+24h] [bp-1F4h]@4
  char v182; // [sp+24h] [bp-1F4h]@11
  unsigned __int64 v183; // [sp+24h] [bp-1F4h]@17
  char v184; // [sp+28h] [bp-1F0h]@4
  char v185; // [sp+28h] [bp-1F0h]@11
  char v186; // [sp+2Ch] [bp-1ECh]@146
  char v187; // [sp+2Dh] [bp-1EBh]@146
  char v188; // [sp+30h] [bp-1E8h]@146
  char v189; // [sp+31h] [bp-1E7h]@146
  char v190; // [sp+34h] [bp-1E4h]@146
  char v191; // [sp+35h] [bp-1E3h]@146
  char v192; // [sp+38h] [bp-1E0h]@146
  char v193; // [sp+39h] [bp-1DFh]@146
  char v194; // [sp+3Ch] [bp-1DCh]@146
  char v195; // [sp+3Dh] [bp-1DBh]@146
  char v196; // [sp+40h] [bp-1D8h]@146
  char v197; // [sp+41h] [bp-1D7h]@146
  char v198; // [sp+44h] [bp-1D4h]@136
  char v199; // [sp+45h] [bp-1D3h]@136
  char v200; // [sp+48h] [bp-1D0h]@136
  char v201; // [sp+49h] [bp-1CFh]@136
  char v202; // [sp+4Ch] [bp-1CCh]@136
  char v203; // [sp+4Dh] [bp-1CBh]@136
  char v204; // [sp+50h] [bp-1C8h]@136
  char v205; // [sp+51h] [bp-1C7h]@136
  char v206; // [sp+54h] [bp-1C4h]@136
  char v207; // [sp+55h] [bp-1C3h]@136
  char v208; // [sp+58h] [bp-1C0h]@136
  char v209; // [sp+59h] [bp-1BFh]@136
  char v210; // [sp+5Ch] [bp-1BCh]@116
  char v211; // [sp+5Dh] [bp-1BBh]@116
  char v212; // [sp+60h] [bp-1B8h]@116
  char v213; // [sp+61h] [bp-1B7h]@116
  char v214; // [sp+64h] [bp-1B4h]@116
  char v215; // [sp+65h] [bp-1B3h]@116
  char v216; // [sp+68h] [bp-1B0h]@116
  char v217; // [sp+69h] [bp-1AFh]@116
  char v218; // [sp+6Ch] [bp-1ACh]@116
  char v219; // [sp+6Dh] [bp-1ABh]@116
  char v220; // [sp+70h] [bp-1A8h]@116
  char v221; // [sp+71h] [bp-1A7h]@116
  char v222; // [sp+74h] [bp-1A4h]@106
  char v223; // [sp+75h] [bp-1A3h]@106
  char v224; // [sp+78h] [bp-1A0h]@106
  char v225; // [sp+79h] [bp-19Fh]@106
  char v226; // [sp+7Ch] [bp-19Ch]@106
  char v227; // [sp+7Dh] [bp-19Bh]@106
  char v228; // [sp+80h] [bp-198h]@106
  char v229; // [sp+81h] [bp-197h]@106
  char v230; // [sp+84h] [bp-194h]@106
  char v231; // [sp+85h] [bp-193h]@106
  char v232; // [sp+88h] [bp-190h]@106
  char v233; // [sp+89h] [bp-18Fh]@106
  char v234; // [sp+8Ch] [bp-18Ch]@28
  char v235; // [sp+8Dh] [bp-18Bh]@28
  char v236; // [sp+90h] [bp-188h]@28
  char v237; // [sp+91h] [bp-187h]@28
  char v238; // [sp+94h] [bp-184h]@22
  char v239; // [sp+95h] [bp-183h]@22
  char v240; // [sp+98h] [bp-180h]@22
  char v241; // [sp+99h] [bp-17Fh]@22
  char v242; // [sp+9Ch] [bp-17Ch]@22
  char v243; // [sp+9Dh] [bp-17Bh]@22
  char v244; // [sp+A0h] [bp-178h]@22
  char v245; // [sp+A1h] [bp-177h]@22
  char v246; // [sp+A4h] [bp-174h]@22
  char v247; // [sp+A5h] [bp-173h]@22
  char v248; // [sp+A8h] [bp-170h]@22
  char v249; // [sp+A9h] [bp-16Fh]@22
  char v250; // [sp+ACh] [bp-16Ch]@22
  char v251; // [sp+ADh] [bp-16Bh]@22
  char v252; // [sp+B0h] [bp-168h]@22
  char v253; // [sp+B1h] [bp-167h]@22
  char v254; // [sp+B4h] [bp-164h]@1
  int v255; // [sp+B8h] [bp-160h]@168
  int v256; // [sp+C0h] [bp-158h]@3
  int v257; // [sp+C4h] [bp-154h]@149
  void *ptr; // [sp+CCh] [bp-14Ch]@87
  char v259; // [sp+E8h] [bp-130h]@1
  int v260; // [sp+ECh] [bp-12Ch]@197
  int v261; // [sp+F4h] [bp-124h]@10
  int v262; // [sp+F8h] [bp-120h]@178
  void *v263; // [sp+100h] [bp-118h]@117
  char v264; // [sp+11Ch] [bp-FCh]@1
  int v265; // [sp+120h] [bp-F8h]@226
  int v266; // [sp+128h] [bp-F0h]@1
  int v267; // [sp+12Ch] [bp-ECh]@207
  void *v268; // [sp+134h] [bp-E4h]@2
  char v269; // [sp+150h] [bp-C8h]@1
  int v270; // [sp+154h] [bp-C4h]@255
  int v271; // [sp+15Ch] [bp-BCh]@1
  int v272; // [sp+160h] [bp-B8h]@236
  void *v273; // [sp+168h] [bp-B0h]@2
  char v274; // [sp+184h] [bp-94h]@7
  char v275; // [sp+185h] [bp-93h]@7
  unsigned __int8 v276; // [sp+188h] [bp-90h]@6
  char v277; // [sp+18Ch] [bp-8Ch]@14
  char v278; // [sp+18Dh] [bp-8Bh]@14
  unsigned __int8 v279; // [sp+190h] [bp-88h]@13
  char v280; // [sp+194h] [bp-84h]@32
  char v281; // [sp+195h] [bp-83h]@32
  char v282; // [sp+198h] [bp-80h]@33
  char v283; // [sp+199h] [bp-7Fh]@33
  char v284; // [sp+19Ch] [bp-7Ch]@42
  char v285; // [sp+19Dh] [bp-7Bh]@42
  char v286; // [sp+1A0h] [bp-78h]@43
  char v287; // [sp+1A1h] [bp-77h]@43
  char v288; // [sp+1A4h] [bp-74h]@52
  char v289; // [sp+1A5h] [bp-73h]@52
  char v290; // [sp+1A8h] [bp-70h]@53
  char v291; // [sp+1A9h] [bp-6Fh]@53
  char v292; // [sp+1ACh] [bp-6Ch]@61
  char v293; // [sp+1ADh] [bp-6Bh]@61
  char v294; // [sp+1B0h] [bp-68h]@62
  char v295; // [sp+1B1h] [bp-67h]@62
  char v296; // [sp+1B4h] [bp-64h]@71
  char v297; // [sp+1B5h] [bp-63h]@71
  char v298; // [sp+1B8h] [bp-60h]@72
  char v299; // [sp+1B9h] [bp-5Fh]@72
  char v300; // [sp+1BCh] [bp-5Ch]@81
  char v301; // [sp+1BDh] [bp-5Bh]@81
  char v302; // [sp+1C0h] [bp-58h]@82
  char v303; // [sp+1C1h] [bp-57h]@82
  char v304; // [sp+1C4h] [bp-54h]@90
  char v305; // [sp+1C5h] [bp-53h]@90
  char v306; // [sp+1C8h] [bp-50h]@91
  char v307; // [sp+1C9h] [bp-4Fh]@91
  char v308; // [sp+1CCh] [bp-4Ch]@100
  char v309; // [sp+1CDh] [bp-4Bh]@100
  char v310; // [sp+1D0h] [bp-48h]@101
  char v311; // [sp+1D1h] [bp-47h]@101
  char v312; // [sp+1D4h] [bp-44h]@110
  char v313; // [sp+1D5h] [bp-43h]@110
  char v314; // [sp+1D8h] [bp-40h]@111
  char v315; // [sp+1D9h] [bp-3Fh]@111
  char v316; // [sp+1DCh] [bp-3Ch]@120
  char v317; // [sp+1DDh] [bp-3Bh]@120
  char v318; // [sp+1E0h] [bp-38h]@121
  char v319; // [sp+1E1h] [bp-37h]@121
  char v320; // [sp+1E4h] [bp-34h]@130
  char v321; // [sp+1E5h] [bp-33h]@130
  char v322; // [sp+1E8h] [bp-30h]@131
  char v323; // [sp+1E9h] [bp-2Fh]@131
  char v324; // [sp+1ECh] [bp-2Ch]@140
  char v325; // [sp+1EDh] [bp-2Bh]@140
  char v326; // [sp+1F0h] [bp-28h]@141
  char v327; // [sp+1F1h] [bp-27h]@141

  v4 = this;
  v5 = a2;
  v6 = a4;
  RoomDefinition::RoomDefinition((int)&v269, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 10) + 12) + 16));
  RoomDefinition::RoomDefinition((int)&v264, *((_DWORD *)v4 + 10));
  RoomDefinition::RoomDefinition((int)&v259, *(_DWORD *)(v271 + 8));
  RoomDefinition::RoomDefinition((int)&v254, *(_DWORD *)(v266 + 8));
  if ( *(_DWORD *)(*((_DWORD *)v4 + 10) + 8) >= 25 )
  {
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 0, 8, *(_DWORD *)v273 & 1);
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 0, 0, *(_DWORD *)v268 & 1);
  }
  if ( !*(_DWORD *)(v256 + 8) )
    v7 = 1;
    v184 = byte_281EAF1;
    v181 = byte_281EAF2;
    do
    {
      v8 = (const BoundingBox *)1;
      do
      {
        StructurePiece::getBlock((StructurePiece *)&v276, v4, (int)v5, v7, 8, v8, (int)v6);
        if ( v276 == (unsigned __int8)word_281EAFB )
        {
          v9 = *(void (__fastcall **)(OceanMonumentDoubleYZRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v274 = v184;
          v275 = v181;
          v9(v4, v5, &v274, v7);
        }
        v11 = __OFSUB__(v8, 7);
        v10 = (signed int)v8 - 7 < 0;
        v8 = (const BoundingBox *)((char *)v8 + 1);
      }
      while ( v10 ^ v11 );
      v11 = __OFSUB__(v7, 6);
      v10 = v7++ - 6 < 0;
    }
    while ( v10 ^ v11 );
  if ( !*(_DWORD *)(v261 + 8) )
    v12 = 1;
    v185 = byte_281EAF1;
    v182 = byte_281EAF2;
      v13 = (const BoundingBox *)8;
        StructurePiece::getBlock((StructurePiece *)&v279, v4, (int)v5, v12, 8, v13, (int)v6);
        if ( v279 == (unsigned __int8)word_281EAFB )
          v14 = *(void (__fastcall **)(OceanMonumentDoubleYZRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v277 = v185;
          v278 = v182;
          v14(v4, v5, &v277, v12);
        v11 = __OFSUB__(v13, 14);
        v10 = (signed int)v13 - 14 < 0;
        v13 = (const BoundingBox *)((char *)v13 + 1);
      v11 = __OFSUB__(v12, 6);
      v10 = v12++ - 6 < 0;
  v183 = __PAIR__((unsigned int)v5, (unsigned int)v6);
  v15 = 1;
  do
    v16 = &byte_281EAF4;
    v17 = &byte_281EAF3;
    v18 = *(void (__fastcall **)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 40);
    if ( (v15 | 4) == 6 )
      v16 = &byte_281EAF2;
    v19 = *v16;
      v17 = &byte_281EAF1;
    v20 = *v17;
    v252 = v20;
    v250 = v20;
    v253 = v19;
    v251 = v19;
    v18(v4, HIDWORD(v183), v183, 0);
    v21 = *(void (__fastcall **)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int))(*(_DWORD *)v4 + 40);
    v248 = v20;
    v246 = v20;
    v249 = v19;
    v247 = v19;
    v21(v4, HIDWORD(v183), v183, 7);
    v22 = *(void (__fastcall **)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int))(*(_DWORD *)v4 + 40);
    v244 = v20;
    v242 = v20;
    v245 = v19;
    v243 = v19;
    v22(v4, HIDWORD(v183), v183, 1);
    v23 = *(void (__fastcall **)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int))(*(_DWORD *)v4 + 40);
    v240 = v20;
    v238 = v20;
    v241 = v19;
    v239 = v19;
    v23(v4, HIDWORD(v183), v183, 1);
    ++v15;
  while ( v15 < 8 );
  v24 = v4;
  v25 = 1;
    v26 = &byte_281EAF6;
    v27 = &byte_281EAF5;
    v28 = *(void (__fastcall **)(OceanMonumentDoubleYZRoom *, _DWORD, _DWORD, signed int))(*(_DWORD *)v4 + 40);
    if ( (v25 | 4) == 6 )
      v26 = &byte_281EAFA;
    v29 = *v26;
      v27 = &byte_281EAF9;
    v236 = *v27;
    v234 = v236;
    v237 = v29;
    v235 = v29;
    v179 = __PAIR__(7, v25);
    LODWORD(v180) = 4;
    HIDWORD(v180) = v25;
    v28(v4, HIDWORD(v183), v183, 3);
    ++v25;
  while ( v25 < 8 );
  v30 = *(_DWORD *)v268;
  if ( *(_DWORD *)v268 & 8 )
    v31 = 1;
      v32 = StructurePiece::getWorldY(v24, v31);
      if ( v32 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v34 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v282 = *(_BYTE *)(Block::mAir + 4);
        v283 = 0;
        v34(v24, HIDWORD(v183), &v282, 3);
      else
        v33 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v280 = word_281EAFB;
        v281 = 0;
        v33(v24, HIDWORD(v183), &v280, 3);
      v35 = StructurePiece::getWorldY(v24, v31);
      if ( v35 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v37 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v179 = (unsigned int)v31;
        LODWORD(v180) = v183;
        v37(v24, HIDWORD(v183), &v282, 4);
        v36 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v36(v24, HIDWORD(v183), &v280, 4);
      v11 = __OFSUB__(v31, 2);
      v10 = v31++ - 2 < 0;
    v30 = *(_DWORD *)v268;
  if ( v30 & 0x20 )
    v38 = 1;
      v39 = StructurePiece::getWorldY(v24, v38);
      if ( v39 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v41 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v286 = *(_BYTE *)(Block::mAir + 4);
        v287 = 0;
        v41(v24, HIDWORD(v183), &v286, 7);
        v40 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v284 = word_281EAFB;
        v285 = 0;
        v40(v24, HIDWORD(v183), &v284, 7);
      v42 = StructurePiece::getWorldY(v24, v38);
      if ( v42 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v44 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v179 = __PAIR__(4, v38);
        v44(v24, HIDWORD(v183), &v286, 7);
        v43 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v43(v24, HIDWORD(v183), &v284, 7);
      v11 = __OFSUB__(v38, 2);
      v10 = v38++ - 2 < 0;
  if ( v30 & 0x10 )
    v45 = 1;
      v46 = StructurePiece::getWorldY(v24, v45);
      if ( v46 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v48 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v290 = *(_BYTE *)(Block::mAir + 4);
        v291 = 0;
        v48(v24, HIDWORD(v183), &v290, 0);
        v47 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v288 = word_281EAFB;
        v289 = 0;
        v47(v24, HIDWORD(v183), &v288, 0);
      v49 = StructurePiece::getWorldY(v24, v45);
      if ( v49 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v51 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v179 = __PAIR__(4, v45);
        v51(v24, HIDWORD(v183), &v290, 0);
        v50 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v50(v24, HIDWORD(v183), &v288, 0);
      v11 = __OFSUB__(v45, 2);
      v10 = v45++ - 2 < 0;
  v52 = *(_DWORD *)v273;
  if ( *(_DWORD *)v273 & 4 )
    v53 = 1;
    v54 = 15;
      v55 = StructurePiece::getWorldY(v24, v53);
      if ( v55 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v57 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v294 = *(_BYTE *)(Block::mAir + 4);
        v295 = 0;
        v57(v24, HIDWORD(v183), &v294, 3);
        v56 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v292 = word_281EAFB;
        v293 = 0;
        v56(v24, HIDWORD(v183), &v292, 3);
      v58 = StructurePiece::getWorldY(v24, v53);
      if ( v58 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v60 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v179 = *(_QWORD *)&v53;
        v60(v24, HIDWORD(v183), &v294, 4);
        v59 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v59(v24, HIDWORD(v183), &v292, 4);
      v11 = __OFSUB__(v53, 2);
      v10 = v53++ - 2 < 0;
    v52 = *(_DWORD *)v273;
  if ( v52 & 0x10 )
    v61 = 1;
      v62 = StructurePiece::getWorldY(v24, v61);
      if ( v62 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v64 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v298 = *(_BYTE *)(Block::mAir + 4);
        v299 = 0;
        v64(v24, HIDWORD(v183), &v298, 0);
        v63 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v296 = word_281EAFB;
        v297 = 0;
        v63(v24, HIDWORD(v183), &v296, 0);
      v65 = StructurePiece::getWorldY(v24, v61);
      if ( v65 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v67 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v179 = __PAIR__(12, v61);
        v67(v24, HIDWORD(v183), &v298, 0);
        v66 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v66(v24, HIDWORD(v183), &v296, 0);
      v11 = __OFSUB__(v61, 2);
      v10 = v61++ - 2 < 0;
  if ( v52 & 0x20 )
    v68 = 1;
      v69 = StructurePiece::getWorldY(v24, v68);
      if ( v69 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v71 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v302 = *(_BYTE *)(Block::mAir + 4);
        v303 = 0;
        v71(v24, HIDWORD(v183), &v302, 7);
        v70 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v300 = word_281EAFB;
        v301 = 0;
        v70(v24, HIDWORD(v183), &v300, 7);
      v72 = StructurePiece::getWorldY(v24, v68);
      if ( v72 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v74 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v179 = __PAIR__(12, v68);
        v74(v24, HIDWORD(v183), &v302, 7);
        v73 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v73(v24, HIDWORD(v183), &v300, 7);
      v11 = __OFSUB__(v68, 2);
      v10 = v68++ - 2 < 0;
  v75 = *(_DWORD *)ptr;
  if ( *(_DWORD *)ptr & 8 )
    v76 = 5;
      v77 = StructurePiece::getWorldY(v24, v76);
      if ( v77 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v79 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v306 = *(_BYTE *)(Block::mAir + 4);
        v307 = 0;
        v79(v24, HIDWORD(v183), &v306, 3);
        v78 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v304 = word_281EAFB;
        v305 = 0;
        v78(v24, HIDWORD(v183), &v304, 3);
      v80 = StructurePiece::getWorldY(v24, v76);
      if ( v80 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v82 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v179 = (unsigned int)v76;
        v82(v24, HIDWORD(v183), &v306, 4);
        v81 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v81(v24, HIDWORD(v183), &v304, 4);
      v11 = __OFSUB__(v76, 6);
      v10 = v76++ - 6 < 0;
    v75 = *(_DWORD *)ptr;
  if ( v75 & 0x20 )
    v83 = 5;
      v84 = StructurePiece::getWorldY(v24, v83);
      if ( v84 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v86 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v310 = *(_BYTE *)(Block::mAir + 4);
        v311 = 0;
        v86(v24, HIDWORD(v183), &v310, 7);
        v85 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v308 = word_281EAFB;
        v309 = 0;
        v85(v24, HIDWORD(v183), &v308, 7);
      v87 = StructurePiece::getWorldY(v24, v83);
      if ( v87 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v89 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v89(v24, HIDWORD(v183), &v310, 7);
        v88 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v88(v24, HIDWORD(v183), &v308, 7);
      v11 = __OFSUB__(v83, 6);
      v10 = v83++ - 6 < 0;
    v90 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v232 = byte_281EAF3;
    v230 = byte_281EAF3;
    v233 = byte_281EAF4;
    v231 = byte_281EAF4;
    v90(v24, HIDWORD(v183), v183, 5);
    v91 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v228 = byte_281EAF3;
    v226 = byte_281EAF3;
    v229 = byte_281EAF4;
    v227 = byte_281EAF4;
    v91(v24, HIDWORD(v183), v183, 6);
    v92 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v224 = byte_281EAF3;
    v222 = byte_281EAF3;
    v225 = byte_281EAF4;
    v223 = byte_281EAF4;
    v179 = 21474836481LL;
    v180 = 12884901894LL;
    v92(v24, HIDWORD(v183), v183, 6);
  if ( v75 & 0x10 )
    v93 = 5;
      v94 = StructurePiece::getWorldY(v24, v93);
      if ( v94 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v96 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v314 = *(_BYTE *)(Block::mAir + 4);
        v315 = 0;
        v96(v24, HIDWORD(v183), &v314, 0);
        v95 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v312 = word_281EAFB;
        v313 = 0;
        v95(v24, HIDWORD(v183), &v312, 0);
      v97 = StructurePiece::getWorldY(v24, v93);
      if ( v97 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v99 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v99(v24, HIDWORD(v183), &v314, 0);
        v98 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v98(v24, HIDWORD(v183), &v312, 0);
      v11 = __OFSUB__(v93, 6);
      v10 = v93++ - 6 < 0;
    v100 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v220 = byte_281EAF3;
    v218 = byte_281EAF3;
    v221 = byte_281EAF4;
    v219 = byte_281EAF4;
    v100(v24, HIDWORD(v183), v183, 1);
    v101 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v216 = byte_281EAF3;
    v214 = byte_281EAF3;
    v217 = byte_281EAF4;
    v215 = byte_281EAF4;
    HIDWORD(v102) = 3;
    v101(v24, HIDWORD(v183), v183, 1);
    v103 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v212 = byte_281EAF3;
    v210 = byte_281EAF3;
    v213 = byte_281EAF4;
    v211 = byte_281EAF4;
    LODWORD(v102) = 1;
    v180 = v102;
    v103(v24, HIDWORD(v183), v183, 1);
  v104 = *(_DWORD *)v263;
  if ( *(_DWORD *)v263 & 4 )
    v105 = 5;
    v106 = 15;
      v107 = StructurePiece::getWorldY(v24, v105);
      if ( v107 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v109 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v318 = *(_BYTE *)(Block::mAir + 4);
        v319 = 0;
        v109(v24, HIDWORD(v183), &v318, 3);
        v108 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v316 = word_281EAFB;
        v317 = 0;
        v108(v24, HIDWORD(v183), &v316, 3);
      v110 = StructurePiece::getWorldY(v24, v105);
      if ( v110 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v112 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v179 = *(_QWORD *)&v105;
        v112(v24, HIDWORD(v183), &v318, 4);
        v111 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v111(v24, HIDWORD(v183), &v316, 4);
      v11 = __OFSUB__(v105, 6);
      v10 = v105++ - 6 < 0;
    v104 = *(_DWORD *)v263;
  if ( v104 & 0x10 )
    v113 = 5;
      v114 = StructurePiece::getWorldY(v24, v113);
      if ( v114 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v116 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v322 = *(_BYTE *)(Block::mAir + 4);
        v323 = 0;
        v116(v24, HIDWORD(v183), &v322, 0);
        v115 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v320 = word_281EAFB;
        v321 = 0;
        v115(v24, HIDWORD(v183), &v320, 0);
      v117 = StructurePiece::getWorldY(v24, v113);
      if ( v117 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v119 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v119(v24, HIDWORD(v183), &v322, 0);
        v118 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, _DWORD))(*(_DWORD *)v24 + 36);
        v118(v24, HIDWORD(v183), &v320, 0);
      v11 = __OFSUB__(v113, 6);
      v10 = v113++ - 6 < 0;
    v120 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v208 = byte_281EAF3;
    v206 = byte_281EAF3;
    v209 = byte_281EAF4;
    v207 = byte_281EAF4;
    v120(v24, HIDWORD(v183), v183, 1);
    v121 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v204 = byte_281EAF3;
    v202 = byte_281EAF3;
    v205 = byte_281EAF4;
    v203 = byte_281EAF4;
    HIDWORD(v122) = 3;
    v121(v24, HIDWORD(v183), v183, 1);
    v123 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v200 = byte_281EAF3;
    v198 = byte_281EAF3;
    v201 = byte_281EAF4;
    v199 = byte_281EAF4;
    LODWORD(v122) = 1;
    v179 = 55834574849LL;
    v180 = v122;
    v123(v24, HIDWORD(v183), v183, 1);
  if ( v104 & 0x20 )
    v124 = 5;
      v125 = StructurePiece::getWorldY(v24, v124);
      if ( v125 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v127 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v326 = *(_BYTE *)(Block::mAir + 4);
        v327 = 0;
        v127(v24, HIDWORD(v183), &v326, 7);
        v126 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v324 = word_281EAFB;
        v325 = 0;
        v126(v24, HIDWORD(v183), &v324, 7);
      v128 = StructurePiece::getWorldY(v24, v124);
      if ( v128 >= *(_WORD *)(j_BlockSource::getDimension((BlockSource *)HIDWORD(v183)) + 20) )
        v130 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v130(v24, HIDWORD(v183), &v326, 7);
        v129 = *(void (__fastcall **)(StructurePiece *, _DWORD, char *, signed int))(*(_DWORD *)v24 + 36);
        v129(v24, HIDWORD(v183), &v324, 7);
      v11 = __OFSUB__(v124, 6);
      v10 = v124++ - 6 < 0;
    v131 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v196 = byte_281EAF3;
    v194 = byte_281EAF3;
    v197 = byte_281EAF4;
    v195 = byte_281EAF4;
    v131(v24, HIDWORD(v183), v183, 5);
    v132 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v192 = byte_281EAF3;
    v190 = byte_281EAF3;
    v193 = byte_281EAF4;
    v191 = byte_281EAF4;
    v132(v24, HIDWORD(v183), v183, 6);
    v133 = *(void (__fastcall **)(StructurePiece *, _DWORD, _DWORD, signed int))(*(_DWORD *)v24 + 40);
    v188 = byte_281EAF3;
    v186 = byte_281EAF3;
    v189 = byte_281EAF4;
    v187 = byte_281EAF4;
    v133(v24, HIDWORD(v183), v183, 6);
  if ( ptr )
    j_operator delete(ptr);
  v135 = v257;
  v134 = v256;
  if ( v256 != v257 )
      v136 = *(_DWORD *)(v134 + 4);
      if ( v136 )
        v137 = (unsigned int *)(v136 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v138 = __ldrex(v137);
          while ( __strex(v138 - 1, v137) );
        else
          v138 = (*v137)--;
        if ( v138 == 1 )
          v139 = (unsigned int *)(v136 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 8))(v136);
          if ( &pthread_create )
          {
            __dmb();
            do
              v140 = __ldrex(v139);
            while ( __strex(v140 - 1, v139) );
          }
          else
            v140 = (*v139)--;
          if ( v140 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 12))(v136);
      v134 += 8;
    while ( v134 != v135 );
    v134 = v256;
  if ( v134 )
    j_operator delete((void *)v134);
  v141 = v255;
  if ( v255 )
    v142 = (unsigned int *)(v255 + 8);
    if ( &pthread_create )
      __dmb();
        v143 = __ldrex(v142);
        v144 = v143 - 1;
      while ( __strex(v143 - 1, v142) );
    else
      v143 = *v142;
      v144 = *v142 - 1;
      *v142 = v144;
    if ( v143 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v141 + 12))(
        v141,
        *(_DWORD *)(*(_DWORD *)v141 + 12),
        v142,
        v144,
        v179,
        HIDWORD(v179),
        v180,
        HIDWORD(v180));
  if ( v263 )
    j_operator delete(v263);
  v146 = v262;
  v145 = v261;
  if ( v261 != v262 )
      v147 = *(_DWORD *)(v145 + 4);
      if ( v147 )
        v148 = (unsigned int *)(v147 + 4);
            v149 = __ldrex(v148);
          while ( __strex(v149 - 1, v148) );
          v149 = (*v148)--;
        if ( v149 == 1 )
          v150 = (unsigned int *)(v147 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v147 + 8))(v147);
              v151 = __ldrex(v150);
            while ( __strex(v151 - 1, v150) );
            v151 = (*v150)--;
          if ( v151 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v147 + 12))(v147);
      v145 += 8;
    while ( v145 != v146 );
    v145 = v261;
  if ( v145 )
    j_operator delete((void *)v145);
  v152 = v260;
  if ( v260 )
    v153 = (unsigned int *)(v260 + 8);
        v154 = __ldrex(v153);
        v155 = v154 - 1;
      while ( __strex(v154 - 1, v153) );
      v154 = *v153;
      v155 = *v153 - 1;
      *v153 = v155;
    if ( v154 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v152 + 12))(
        v152,
        *(_DWORD *)(*(_DWORD *)v152 + 12),
        v153,
        v155,
  if ( v268 )
    j_operator delete(v268);
  v157 = v267;
  v156 = v266;
  if ( v266 != v267 )
      v158 = *(_DWORD *)(v156 + 4);
      if ( v158 )
        v159 = (unsigned int *)(v158 + 4);
            v160 = __ldrex(v159);
          while ( __strex(v160 - 1, v159) );
          v160 = (*v159)--;
        if ( v160 == 1 )
          v161 = (unsigned int *)(v158 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v158 + 8))(v158);
              v162 = __ldrex(v161);
            while ( __strex(v162 - 1, v161) );
            v162 = (*v161)--;
          if ( v162 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v158 + 12))(v158);
      v156 += 8;
    while ( v156 != v157 );
    v156 = v266;
  if ( v156 )
    j_operator delete((void *)v156);
  v163 = v265;
  if ( v265 )
    v164 = (unsigned int *)(v265 + 8);
        v165 = __ldrex(v164);
        v166 = v165 - 1;
      while ( __strex(v165 - 1, v164) );
      v165 = *v164;
      v166 = *v164 - 1;
      *v164 = v166;
    if ( v165 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v163 + 12))(
        v163,
        *(_DWORD *)(*(_DWORD *)v163 + 12),
        v164,
        v166,
  if ( v273 )
    j_operator delete(v273);
  v168 = v272;
  v167 = v271;
  if ( v271 != v272 )
      v169 = *(_DWORD *)(v167 + 4);
      if ( v169 )
        v170 = (unsigned int *)(v169 + 4);
            v171 = __ldrex(v170);
          while ( __strex(v171 - 1, v170) );
          v171 = (*v170)--;
        if ( v171 == 1 )
          v172 = (unsigned int *)(v169 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v169 + 8))(v169);
              v173 = __ldrex(v172);
            while ( __strex(v173 - 1, v172) );
            v173 = (*v172)--;
          if ( v173 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v169 + 12))(v169);
      v167 += 8;
    while ( v167 != v168 );
    v167 = v271;
  if ( v167 )
    j_operator delete((void *)v167);
  v174 = v270;
  if ( v270 )
    v175 = (unsigned int *)(v270 + 8);
        v176 = __ldrex(v175);
        v177 = v176 - 1;
      while ( __strex(v176 - 1, v175) );
      v176 = *v175;
      v177 = *v175 - 1;
      *v175 = v177;
    if ( v176 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v174 + 12))(
        v174,
        *(_DWORD *)(*(_DWORD *)v174 + 12),
        v175,
        v177,
  return 1;
}


_DWORD *__fastcall OceanMonumentDoubleYZRoom::OceanMonumentDoubleYZRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 1, 2, 2);
  *result = &off_271900C;
  return result;
}


int __fastcall OceanMonumentDoubleYZRoom::OceanMonumentDoubleYZRoom(int result)
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
  *(_DWORD *)result = &off_271900C;
  return result;
}


void __fastcall OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom(OceanMonumentDoubleYZRoom *this)
{
  OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom(this);
}


void __fastcall OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom(OceanMonumentDoubleYZRoom *this)
{
  OceanMonumentDoubleYZRoom *v1; // r4@1
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
