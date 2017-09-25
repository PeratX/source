

int __fastcall OceanMonumentDoubleZRoom::OceanMonumentDoubleZRoom(int result)
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
  *(_DWORD *)result = &off_2718F7C;
  return result;
}


_DWORD *__fastcall OceanMonumentDoubleZRoom::OceanMonumentDoubleZRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 1, 1, 2);
  *result = &off_2718F7C;
  return result;
}


signed int __fastcall OceanMonumentDoubleZRoom::postProcess(OceanMonumentDoubleZRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentDoubleZRoom *v4; // r6@1
  BlockSource *v5; // r10@1
  const BoundingBox *v6; // r7@1
  BlockSource *v7; // r4@3
  int v8; // r11@4
  int v9; // r7@4
  _BYTE *v10; // r6@4
  const BoundingBox *v11; // r8@5
  _BYTE *v12; // r5@7
  void (__fastcall *v13)(BlockSource *, BlockSource *, char *, int); // r6@7
  bool v14; // nf@8
  unsigned __int8 v15; // vf@8
  const BoundingBox *v16; // r2@12
  StructurePiece *v17; // r11@13
  void (__fastcall *v18)(BlockSource *, BlockSource *); // r7@13
  BlockSource *v19; // r9@13
  const BoundingBox *v20; // r10@13
  void (__fastcall *v21)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r5@13
  void (__fastcall *v22)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r5@13
  void (__fastcall *v23)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v24)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD); // r7@13
  void (__fastcall *v25)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v26)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v27)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v28)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD); // r7@13
  void (__fastcall *v29)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v30)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v31)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v32)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v33)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r5@13
  void (__fastcall *v34)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@13
  void (__fastcall *v35)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v36)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@13
  void (__fastcall *v37)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@13
  void (__fastcall *v38)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r5@13
  void (__fastcall *v39)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r6@13
  void (__fastcall *v40)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@13
  void (__fastcall *v41)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r5@13
  void (__fastcall *v42)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@13
  void (__fastcall *v43)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@13
  void (__fastcall *v44)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v45)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v46)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@13
  void (__fastcall *v47)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r5@13
  void (__fastcall *v48)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v49)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v50)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v51)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v52)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v53)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v54)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v55)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  int v56; // r0@13
  int v57; // r7@14
  int v58; // r4@15
  void (__fastcall *v59)(StructurePiece *, BlockSource *, char *, signed int); // r4@16
  void (__fastcall *v60)(StructurePiece *, BlockSource *, char *, signed int); // r4@17
  int v61; // r4@18
  void (__fastcall *v62)(StructurePiece *, BlockSource *, char *, signed int); // r4@19
  void (__fastcall *v63)(StructurePiece *, BlockSource *, char *, signed int); // r4@20
  int v64; // r7@24
  int v65; // r4@25
  void (__fastcall *v66)(StructurePiece *, BlockSource *, char *, signed int); // r4@26
  void (__fastcall *v67)(StructurePiece *, BlockSource *, char *, signed int); // r4@27
  int v68; // r4@28
  void (__fastcall *v69)(StructurePiece *, BlockSource *, char *, signed int); // r4@29
  void (__fastcall *v70)(StructurePiece *, BlockSource *, char *, signed int); // r4@30
  int v71; // r7@34
  int v72; // r4@35
  void (__fastcall *v73)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@36
  void (__fastcall *v74)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@37
  int v75; // r4@38
  void (__fastcall *v76)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@39
  void (__fastcall *v77)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@40
  int v78; // r0@42
  int v79; // r7@43
  int v80; // r4@44
  void (__fastcall *v81)(StructurePiece *, BlockSource *, char *, signed int); // r4@45
  void (__fastcall *v82)(StructurePiece *, BlockSource *, char *, signed int); // r4@46
  int v83; // r4@47
  void (__fastcall *v84)(StructurePiece *, BlockSource *, char *, signed int); // r4@48
  void (__fastcall *v85)(StructurePiece *, BlockSource *, char *, signed int); // r4@49
  int v86; // r7@53
  int v87; // r4@54
  void (__fastcall *v88)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@55
  void (__fastcall *v89)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@56
  int v90; // r4@57
  void (__fastcall *v91)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@58
  void (__fastcall *v92)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@59
  int v93; // r7@63
  int v94; // r4@64
  void (__fastcall *v95)(StructurePiece *, BlockSource *, char *, signed int); // r4@65
  void (__fastcall *v96)(StructurePiece *, BlockSource *, char *, signed int); // r4@66
  int v97; // r4@67
  void (__fastcall *v98)(StructurePiece *, BlockSource *, char *, signed int); // r4@68
  void (__fastcall *v99)(StructurePiece *, BlockSource *, char *, signed int); // r4@69
  int v100; // r4@73
  int v101; // r6@73
  int v102; // r7@74
  unsigned int *v103; // r1@75
  unsigned int v104; // r0@77
  unsigned int *v105; // r5@81
  unsigned int v106; // r0@83
  int v107; // r0@92
  unsigned int *v108; // r2@93
  unsigned int v109; // r1@95
  int v110; // r3@95
  int v111; // r11@97
  int v112; // r7@97
  const BoundingBox *v113; // r8@98
  void (__fastcall *v114)(BlockSource *, BlockSource *, char *, int); // r5@100
  int v115; // r4@109
  int v116; // r6@109
  int v117; // r7@110
  unsigned int *v118; // r1@111
  unsigned int v119; // r0@113
  unsigned int *v120; // r5@117
  unsigned int v121; // r0@119
  int v122; // r0@128
  unsigned int *v123; // r2@129
  unsigned int v124; // r1@131
  int v125; // r3@131
  signed int v127; // [sp+0h] [bp-1F8h]@13
  signed int v128; // [sp+4h] [bp-1F4h]@13
  const BoundingBox *v129; // [sp+8h] [bp-1F0h]@13
  signed int v130; // [sp+Ch] [bp-1ECh]@13
  char v131; // [sp+24h] [bp-1D4h]@4
  char v132; // [sp+24h] [bp-1D4h]@97
  char v133; // [sp+28h] [bp-1D0h]@4
  char v134; // [sp+28h] [bp-1D0h]@97
  char v135; // [sp+2Ch] [bp-1CCh]@13
  char v136; // [sp+2Dh] [bp-1CBh]@13
  char v137; // [sp+30h] [bp-1C8h]@13
  char v138; // [sp+31h] [bp-1C7h]@13
  char v139; // [sp+34h] [bp-1C4h]@13
  char v140; // [sp+35h] [bp-1C3h]@13
  char v141; // [sp+38h] [bp-1C0h]@13
  char v142; // [sp+39h] [bp-1BFh]@13
  char v143; // [sp+3Ch] [bp-1BCh]@13
  char v144; // [sp+3Dh] [bp-1BBh]@13
  char v145; // [sp+40h] [bp-1B8h]@13
  char v146; // [sp+41h] [bp-1B7h]@13
  char v147; // [sp+44h] [bp-1B4h]@13
  char v148; // [sp+45h] [bp-1B3h]@13
  char v149; // [sp+48h] [bp-1B0h]@13
  char v150; // [sp+49h] [bp-1AFh]@13
  char v151; // [sp+4Ch] [bp-1ACh]@13
  char v152; // [sp+4Dh] [bp-1ABh]@13
  char v153; // [sp+50h] [bp-1A8h]@13
  char v154; // [sp+51h] [bp-1A7h]@13
  char v155; // [sp+54h] [bp-1A4h]@13
  char v156; // [sp+55h] [bp-1A3h]@13
  char v157; // [sp+58h] [bp-1A0h]@13
  char v158; // [sp+59h] [bp-19Fh]@13
  char v159; // [sp+5Ch] [bp-19Ch]@13
  char v160; // [sp+5Dh] [bp-19Bh]@13
  char v161; // [sp+60h] [bp-198h]@13
  char v162; // [sp+61h] [bp-197h]@13
  char v163; // [sp+64h] [bp-194h]@13
  char v164; // [sp+65h] [bp-193h]@13
  char v165; // [sp+68h] [bp-190h]@13
  char v166; // [sp+69h] [bp-18Fh]@13
  char v167; // [sp+6Ch] [bp-18Ch]@13
  char v168; // [sp+6Dh] [bp-18Bh]@13
  char v169; // [sp+70h] [bp-188h]@13
  char v170; // [sp+71h] [bp-187h]@13
  char v171; // [sp+74h] [bp-184h]@13
  char v172; // [sp+75h] [bp-183h]@13
  char v173; // [sp+78h] [bp-180h]@13
  char v174; // [sp+79h] [bp-17Fh]@13
  char v175; // [sp+7Ch] [bp-17Ch]@13
  char v176; // [sp+7Dh] [bp-17Bh]@13
  char v177; // [sp+80h] [bp-178h]@13
  char v178; // [sp+81h] [bp-177h]@13
  char v179; // [sp+84h] [bp-174h]@13
  char v180; // [sp+85h] [bp-173h]@13
  char v181; // [sp+88h] [bp-170h]@13
  char v182; // [sp+89h] [bp-16Fh]@13
  char v183; // [sp+8Ch] [bp-16Ch]@13
  char v184; // [sp+8Dh] [bp-16Bh]@13
  char v185; // [sp+90h] [bp-168h]@13
  char v186; // [sp+91h] [bp-167h]@13
  char v187; // [sp+94h] [bp-164h]@13
  char v188; // [sp+95h] [bp-163h]@13
  char v189; // [sp+98h] [bp-160h]@13
  char v190; // [sp+99h] [bp-15Fh]@13
  char v191; // [sp+9Ch] [bp-15Ch]@13
  char v192; // [sp+9Dh] [bp-15Bh]@13
  char v193; // [sp+A0h] [bp-158h]@13
  char v194; // [sp+A1h] [bp-157h]@13
  char v195; // [sp+A4h] [bp-154h]@13
  char v196; // [sp+A5h] [bp-153h]@13
  char v197; // [sp+A8h] [bp-150h]@13
  char v198; // [sp+A9h] [bp-14Fh]@13
  char v199; // [sp+ACh] [bp-14Ch]@13
  char v200; // [sp+ADh] [bp-14Bh]@13
  char v201; // [sp+B0h] [bp-148h]@13
  char v202; // [sp+B1h] [bp-147h]@13
  char v203; // [sp+B4h] [bp-144h]@13
  char v204; // [sp+B5h] [bp-143h]@13
  char v205; // [sp+B8h] [bp-140h]@13
  char v206; // [sp+B9h] [bp-13Fh]@13
  char v207; // [sp+BCh] [bp-13Ch]@13
  char v208; // [sp+BDh] [bp-13Bh]@13
  char v209; // [sp+C0h] [bp-138h]@13
  char v210; // [sp+C1h] [bp-137h]@13
  char v211; // [sp+C4h] [bp-134h]@13
  char v212; // [sp+C5h] [bp-133h]@13
  char v213; // [sp+C8h] [bp-130h]@13
  char v214; // [sp+C9h] [bp-12Fh]@13
  char v215; // [sp+CCh] [bp-12Ch]@13
  char v216; // [sp+CDh] [bp-12Bh]@13
  char v217; // [sp+D0h] [bp-128h]@13
  char v218; // [sp+D1h] [bp-127h]@13
  char v219; // [sp+D4h] [bp-124h]@13
  char v220; // [sp+D5h] [bp-123h]@13
  char v221; // [sp+D8h] [bp-120h]@13
  char v222; // [sp+D9h] [bp-11Fh]@13
  char v223; // [sp+DCh] [bp-11Ch]@13
  char v224; // [sp+DDh] [bp-11Bh]@13
  char v225; // [sp+E0h] [bp-118h]@13
  char v226; // [sp+E1h] [bp-117h]@13
  char v227; // [sp+E4h] [bp-114h]@13
  char v228; // [sp+E5h] [bp-113h]@13
  char v229; // [sp+E8h] [bp-110h]@13
  char v230; // [sp+E9h] [bp-10Fh]@13
  char v231; // [sp+ECh] [bp-10Ch]@13
  char v232; // [sp+EDh] [bp-10Bh]@13
  char v233; // [sp+F0h] [bp-108h]@13
  char v234; // [sp+F1h] [bp-107h]@13
  char v235; // [sp+F4h] [bp-104h]@13
  char v236; // [sp+F5h] [bp-103h]@13
  char v237; // [sp+F8h] [bp-100h]@13
  char v238; // [sp+F9h] [bp-FFh]@13
  char v239; // [sp+FCh] [bp-FCh]@13
  char v240; // [sp+FDh] [bp-FBh]@13
  char v241; // [sp+100h] [bp-F8h]@13
  char v242; // [sp+101h] [bp-F7h]@13
  char v243; // [sp+104h] [bp-F4h]@13
  char v244; // [sp+105h] [bp-F3h]@13
  char v245; // [sp+108h] [bp-F0h]@13
  char v246; // [sp+109h] [bp-EFh]@13
  char v247; // [sp+10Ch] [bp-ECh]@13
  char v248; // [sp+10Dh] [bp-EBh]@13
  char v249; // [sp+110h] [bp-E8h]@13
  char v250; // [sp+111h] [bp-E7h]@13
  char v251; // [sp+114h] [bp-E4h]@13
  char v252; // [sp+115h] [bp-E3h]@13
  char v253; // [sp+118h] [bp-E0h]@13
  char v254; // [sp+119h] [bp-DFh]@13
  char v255; // [sp+11Ch] [bp-DCh]@13
  char v256; // [sp+11Dh] [bp-DBh]@13
  char v257; // [sp+120h] [bp-D8h]@13
  char v258; // [sp+121h] [bp-D7h]@13
  char v259; // [sp+124h] [bp-D4h]@13
  char v260; // [sp+125h] [bp-D3h]@13
  char v261; // [sp+128h] [bp-D0h]@13
  char v262; // [sp+129h] [bp-CFh]@13
  char v263; // [sp+12Ch] [bp-CCh]@1
  int v264; // [sp+130h] [bp-C8h]@92
  int v265; // [sp+138h] [bp-C0h]@3
  int v266; // [sp+13Ch] [bp-BCh]@73
  void *ptr; // [sp+144h] [bp-B4h]@2
  char v268; // [sp+160h] [bp-98h]@1
  int v269; // [sp+164h] [bp-94h]@128
  int v270; // [sp+16Ch] [bp-8Ch]@11
  int v271; // [sp+170h] [bp-88h]@109
  void *v272; // [sp+178h] [bp-80h]@2
  char v273; // [sp+194h] [bp-64h]@7
  char v274; // [sp+195h] [bp-63h]@7
  unsigned __int8 v275; // [sp+198h] [bp-60h]@6
  char v276; // [sp+19Ch] [bp-5Ch]@100
  char v277; // [sp+19Dh] [bp-5Bh]@100
  unsigned __int8 v278; // [sp+1A0h] [bp-58h]@99
  char v279; // [sp+1A4h] [bp-54h]@65
  char v280; // [sp+1A5h] [bp-53h]@65
  char v281; // [sp+1A8h] [bp-50h]@66
  char v282; // [sp+1A9h] [bp-4Fh]@66
  char v283; // [sp+1ACh] [bp-4Ch]@55
  char v284; // [sp+1ADh] [bp-4Bh]@55
  char v285; // [sp+1B0h] [bp-48h]@56
  char v286; // [sp+1B1h] [bp-47h]@56
  char v287; // [sp+1B4h] [bp-44h]@45
  char v288; // [sp+1B5h] [bp-43h]@45
  char v289; // [sp+1B8h] [bp-40h]@46
  char v290; // [sp+1B9h] [bp-3Fh]@46
  char v291; // [sp+1BCh] [bp-3Ch]@36
  char v292; // [sp+1BDh] [bp-3Bh]@36
  char v293; // [sp+1C0h] [bp-38h]@37
  char v294; // [sp+1C1h] [bp-37h]@37
  char v295; // [sp+1C4h] [bp-34h]@26
  char v296; // [sp+1C5h] [bp-33h]@26
  char v297; // [sp+1C8h] [bp-30h]@27
  char v298; // [sp+1C9h] [bp-2Fh]@27
  char v299; // [sp+1CCh] [bp-2Ch]@16
  char v300; // [sp+1CDh] [bp-2Bh]@16
  char v301; // [sp+1D0h] [bp-28h]@17
  char v302; // [sp+1D1h] [bp-27h]@17

  v4 = this;
  v5 = a2;
  v6 = a4;
  RoomDefinition::RoomDefinition((int)&v268, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 10) + 12) + 16));
  RoomDefinition::RoomDefinition((int)&v263, *((_DWORD *)v4 + 10));
  if ( *(_DWORD *)(*((_DWORD *)v4 + 10) + 8) >= 25 )
  {
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 0, 8, *(_DWORD *)v272 & 1);
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 0, 0, *(_DWORD *)ptr & 1);
  }
  v7 = v4;
  if ( !*(_DWORD *)(v265 + 8) )
    v8 = (int)v6;
    v9 = 1;
    v10 = &unk_281EAF0;
    v133 = byte_281EAF1;
    v131 = byte_281EAF2;
    do
    {
      v11 = (const BoundingBox *)1;
      do
      {
        StructurePiece::getBlock((StructurePiece *)&v275, v7, (int)v5, v9, 4, v11, v8);
        if ( v275 == v10[11] )
        {
          v12 = v10;
          v13 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, int))(*(_DWORD *)v7 + 36);
          v273 = v133;
          v274 = v131;
          v13(v7, v5, &v273, v9);
          v10 = v12;
        }
        v15 = __OFSUB__(v11, 7);
        v14 = (signed int)v11 - 7 < 0;
        v11 = (const BoundingBox *)((char *)v11 + 1);
      }
      while ( v14 ^ v15 );
      v15 = __OFSUB__(v9, 6);
      v14 = v9++ - 6 < 0;
    }
    while ( v14 ^ v15 );
    v6 = (const BoundingBox *)v8;
  if ( *(_DWORD *)(v270 + 8) )
    v16 = v6;
  else
    v111 = (int)v6;
    v112 = 1;
    v134 = byte_281EAF1;
    v132 = byte_281EAF2;
      v113 = (const BoundingBox *)8;
        StructurePiece::getBlock((StructurePiece *)&v278, v7, (int)v5, v112, 4, v113, v111);
        if ( v278 == (unsigned __int8)word_281EAFB )
          v114 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, int))(*(_DWORD *)v7 + 36);
          v276 = v134;
          v277 = v132;
          v114(v7, v5, &v276, v112);
        v15 = __OFSUB__(v113, 14);
        v14 = (signed int)v113 - 14 < 0;
        v113 = (const BoundingBox *)((char *)v113 + 1);
      v15 = __OFSUB__(v112, 6);
      v14 = v112++ - 6 < 0;
    v16 = (const BoundingBox *)v111;
  v17 = v7;
  v18 = *(void (__fastcall **)(BlockSource *, BlockSource *))(*(_DWORD *)v7 + 40);
  v261 = byte_281EAF3;
  v259 = byte_281EAF3;
  v262 = byte_281EAF4;
  v260 = byte_281EAF4;
  v19 = v5;
  v20 = v16;
  v18(v7, v19);
  v21 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v257 = byte_281EAF3;
  v255 = byte_281EAF3;
  v258 = byte_281EAF4;
  v256 = byte_281EAF4;
  v21(v7, v19, v20, 7);
  v22 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v253 = byte_281EAF3;
  v251 = byte_281EAF3;
  v254 = byte_281EAF4;
  v252 = byte_281EAF4;
  v22(v7, v19, v20, 1);
  v23 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v249 = byte_281EAF3;
  v247 = byte_281EAF3;
  v250 = byte_281EAF4;
  v248 = byte_281EAF4;
  v23(v7, v19, v20, 1);
  v24 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v7 + 40);
  v245 = byte_281EAF1;
  v243 = byte_281EAF1;
  v246 = byte_281EAF2;
  v244 = byte_281EAF2;
  v24(v7, v19, v20, 0);
  v25 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v241 = byte_281EAF1;
  v239 = byte_281EAF1;
  v242 = byte_281EAF2;
  v240 = byte_281EAF2;
  v25(v7, v19, v20, 7);
  v26 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v237 = byte_281EAF1;
  v235 = byte_281EAF1;
  v238 = byte_281EAF2;
  v236 = byte_281EAF2;
  v26(v7, v19, v20, 1);
  v27 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v233 = byte_281EAF1;
  v231 = byte_281EAF1;
  v234 = byte_281EAF2;
  v232 = byte_281EAF2;
  v27(v7, v19, v20, 1);
  v28 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v7 + 40);
  v229 = byte_281EAF3;
  v227 = byte_281EAF3;
  v230 = byte_281EAF4;
  v228 = byte_281EAF4;
  v28(v7, v19, v20, 0);
  v29 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v225 = byte_281EAF3;
  v223 = byte_281EAF3;
  v226 = byte_281EAF4;
  v224 = byte_281EAF4;
  v29(v7, v19, v20, 7);
  v30 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v221 = byte_281EAF3;
  v219 = byte_281EAF3;
  v222 = byte_281EAF4;
  v220 = byte_281EAF4;
  v30(v7, v19, v20, 1);
  v31 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v217 = byte_281EAF3;
  v215 = byte_281EAF3;
  v218 = byte_281EAF4;
  v216 = byte_281EAF4;
  v31(v7, v19, v20, 1);
  v32 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v213 = byte_281EAF3;
  v211 = byte_281EAF3;
  v214 = byte_281EAF4;
  v212 = byte_281EAF4;
  v32(v7, v19, v20, 1);
  v33 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v209 = byte_281EAF3;
  v207 = byte_281EAF3;
  v210 = byte_281EAF4;
  v208 = byte_281EAF4;
  v33(v7, v19, v20, 6);
  v34 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v205 = byte_281EAF3;
  v203 = byte_281EAF3;
  v206 = byte_281EAF4;
  v204 = byte_281EAF4;
  v34(v7, v19, v20, 1);
  v35 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v201 = byte_281EAF3;
  v199 = byte_281EAF3;
  v202 = byte_281EAF4;
  v200 = byte_281EAF4;
  v35(v7, v19, v20, 6);
  v36 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v7 + 40);
  v197 = byte_281EAF3;
  v195 = byte_281EAF3;
  v198 = byte_281EAF4;
  v196 = byte_281EAF4;
  v36(v17, v19, v20, 1);
  v37 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v193 = byte_281EAF3;
  v191 = byte_281EAF3;
  v194 = byte_281EAF4;
  v192 = byte_281EAF4;
  v37(v17, v19, v20, 6);
  v38 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v189 = byte_281EAF3;
  v187 = byte_281EAF3;
  v190 = byte_281EAF4;
  v188 = byte_281EAF4;
  v38(v17, v19, v20, 1);
  v39 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v185 = byte_281EAF3;
  v183 = byte_281EAF3;
  v186 = byte_281EAF4;
  v184 = byte_281EAF4;
  v39(v17, v19, v20, 6);
  v40 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v181 = byte_281EAF3;
  v179 = byte_281EAF3;
  v182 = byte_281EAF4;
  v180 = byte_281EAF4;
  v40(v17, v19, v20, 2);
  v41 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v177 = byte_281EAF3;
  v175 = byte_281EAF3;
  v178 = byte_281EAF4;
  v176 = byte_281EAF4;
  v41(v17, v19, v20, 5);
  v42 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v173 = byte_281EAF3;
  v171 = byte_281EAF3;
  v174 = byte_281EAF4;
  v172 = byte_281EAF4;
  v42(v17, v19, v20, 2);
  v43 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v169 = byte_281EAF3;
  v167 = byte_281EAF3;
  v170 = byte_281EAF4;
  v168 = byte_281EAF4;
  v43(v17, v19, v20, 5);
  v44 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v165 = byte_281EAF3;
  v163 = byte_281EAF3;
  v166 = byte_281EAF4;
  v164 = byte_281EAF4;
  v44(v17, v19, v20, 3);
  v45 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v161 = byte_281EAF3;
  v159 = byte_281EAF3;
  v162 = byte_281EAF4;
  v160 = byte_281EAF4;
  v45(v17, v19, v20, 3);
  v46 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v157 = byte_281EAF3;
  v155 = byte_281EAF3;
  v158 = byte_281EAF4;
  v156 = byte_281EAF4;
  v46(v17, v19, v20, 2);
  v47 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v17 + 40);
  v153 = byte_281EAF3;
  v151 = byte_281EAF3;
  v154 = byte_281EAF4;
  v152 = byte_281EAF4;
  v130 = 2;
  v47(v17, v19, v20, 5);
  v48 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v149 = byte_281EAF9;
  v150 = byte_281EAFA;
  v48(v17, v19, &v149, 2);
  v49 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v147 = byte_281EAF9;
  v148 = byte_281EAFA;
  v49(v17, v19, &v147, 5);
  v50 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v145 = byte_281EAF9;
  v146 = byte_281EAFA;
  v50(v17, v19, &v145, 2);
  v51 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v143 = byte_281EAF9;
  v144 = byte_281EAFA;
  v51(v17, v19, &v143, 5);
  v52 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v141 = byte_281EAF3;
  v142 = byte_281EAF4;
  v52(v17, v19, &v141, 2);
  v53 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v139 = byte_281EAF3;
  v140 = byte_281EAF4;
  v53(v17, v19, &v139, 5);
  v54 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v137 = byte_281EAF3;
  v138 = byte_281EAF4;
  v54(v17, v19, &v137, 2);
  v55 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
  v135 = byte_281EAF3;
  v136 = byte_281EAF4;
  v127 = 3;
  v128 = 10;
  v129 = v20;
  v55(v17, v19, &v135, 5);
  v56 = *(_DWORD *)ptr;
  if ( *(_DWORD *)ptr & 8 )
    v57 = 1;
      v58 = StructurePiece::getWorldY(v17, v57);
      if ( v58 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v60 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v301 = *(_BYTE *)(Block::mAir + 4);
        v302 = 0;
        v60(v17, v19, &v301, 3);
      else
        v59 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v299 = word_281EAFB;
        v300 = 0;
        v59(v17, v19, &v299, 3);
      v61 = StructurePiece::getWorldY(v17, v57);
      if ( v61 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v63 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v127 = v57;
        v128 = 0;
        v129 = v20;
        v63(v17, v19, &v301, 4);
        v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v62(v17, v19, &v299, 4);
      v15 = __OFSUB__(v57, 2);
      v14 = v57++ - 2 < 0;
    v56 = *(_DWORD *)ptr;
  if ( v56 & 0x20 )
    v64 = 1;
      v65 = StructurePiece::getWorldY(v17, v64);
      if ( v65 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v67 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v297 = *(_BYTE *)(Block::mAir + 4);
        v298 = 0;
        v67(v17, v19, &v297, 7);
        v66 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v295 = word_281EAFB;
        v296 = 0;
        v66(v17, v19, &v295, 7);
      v68 = StructurePiece::getWorldY(v17, v64);
      if ( v68 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v70 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v127 = v64;
        v128 = 4;
        v70(v17, v19, &v297, 7);
        v69 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v69(v17, v19, &v295, 7);
      v15 = __OFSUB__(v64, 2);
      v14 = v64++ - 2 < 0;
  if ( v56 & 0x10 )
    v71 = 1;
      v72 = StructurePiece::getWorldY(v17, v71);
      if ( v72 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v74 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v293 = *(_BYTE *)(Block::mAir + 4);
        v294 = 0;
        v74(v17, v19, &v293, 0);
        v73 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v291 = word_281EAFB;
        v292 = 0;
        v73(v17, v19, &v291, 0);
      v75 = StructurePiece::getWorldY(v17, v71);
      if ( v75 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v77 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v127 = v71;
        v77(v17, v19, &v293, 0);
        v76 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v76(v17, v19, &v291, 0);
      v15 = __OFSUB__(v71, 2);
      v14 = v71++ - 2 < 0;
  v78 = *(_DWORD *)v272;
  if ( *(_DWORD *)v272 & 4 )
    v79 = 1;
      v80 = StructurePiece::getWorldY(v17, v79);
      if ( v80 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v82 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v289 = *(_BYTE *)(Block::mAir + 4);
        v290 = 0;
        v82(v17, v19, &v289, 3);
        v81 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v287 = word_281EAFB;
        v288 = 0;
        v81(v17, v19, &v287, 3);
      v83 = StructurePiece::getWorldY(v17, v79);
      if ( v83 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v85 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v127 = v79;
        v128 = 15;
        v85(v17, v19, &v289, 4);
        v84 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v84(v17, v19, &v287, 4);
      v15 = __OFSUB__(v79, 2);
      v14 = v79++ - 2 < 0;
    v78 = *(_DWORD *)v272;
  if ( v78 & 0x10 )
    v86 = 1;
      v87 = StructurePiece::getWorldY(v17, v86);
      if ( v87 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v89 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v285 = *(_BYTE *)(Block::mAir + 4);
        v286 = 0;
        v89(v17, v19, &v285, 0);
        v88 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v283 = word_281EAFB;
        v284 = 0;
        v88(v17, v19, &v283, 0);
      v90 = StructurePiece::getWorldY(v17, v86);
      if ( v90 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v92 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v127 = v86;
        v128 = 12;
        v92(v17, v19, &v285, 0);
        v91 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v17 + 36);
        v91(v17, v19, &v283, 0);
      v15 = __OFSUB__(v86, 2);
      v14 = v86++ - 2 < 0;
  if ( v78 & 0x20 )
    v93 = 1;
      v94 = StructurePiece::getWorldY(v17, v93);
      if ( v94 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v96 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v281 = *(_BYTE *)(Block::mAir + 4);
        v282 = 0;
        v96(v17, v19, &v281, 7);
        v95 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v279 = word_281EAFB;
        v280 = 0;
        v95(v17, v19, &v279, 7);
      v97 = StructurePiece::getWorldY(v17, v93);
      if ( v97 >= *(_WORD *)(BlockSource::getDimension(v19) + 20) )
        v99 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v127 = v93;
        v99(v17, v19, &v281, 7);
        v98 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v17 + 36);
        v98(v17, v19, &v279, 7);
      v15 = __OFSUB__(v93, 2);
      v14 = v93++ - 2 < 0;
  if ( ptr )
    j_operator delete(ptr);
  v101 = v266;
  v100 = v265;
  if ( v265 != v266 )
      v102 = *(_DWORD *)(v100 + 4);
      if ( v102 )
        v103 = (unsigned int *)(v102 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
        else
          v104 = (*v103)--;
        if ( v104 == 1 )
          v105 = (unsigned int *)(v102 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v102 + 8))(v102);
          if ( &pthread_create )
          {
            __dmb();
            do
              v106 = __ldrex(v105);
            while ( __strex(v106 - 1, v105) );
          }
          else
            v106 = (*v105)--;
          if ( v106 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v102 + 12))(v102);
      v100 += 8;
    while ( v100 != v101 );
    v100 = v265;
  if ( v100 )
    j_operator delete((void *)v100);
  v107 = v264;
  if ( v264 )
    v108 = (unsigned int *)(v264 + 8);
    if ( &pthread_create )
      __dmb();
        v109 = __ldrex(v108);
        v110 = v109 - 1;
      while ( __strex(v109 - 1, v108) );
    else
      v109 = *v108;
      v110 = *v108 - 1;
      *v108 = v110;
    if ( v109 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, signed int, signed int, const BoundingBox *, signed int))(*(_DWORD *)v107 + 12))(
        v107,
        *(_DWORD *)(*(_DWORD *)v107 + 12),
        v108,
        v110,
        v127,
        v128,
        v129,
        2);
  if ( v272 )
    j_operator delete(v272);
  v116 = v271;
  v115 = v270;
  if ( v270 != v271 )
      v117 = *(_DWORD *)(v115 + 4);
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
      v115 += 8;
    while ( v115 != v116 );
    v115 = v270;
  if ( v115 )
    j_operator delete((void *)v115);
  v122 = v269;
  if ( v269 )
    v123 = (unsigned int *)(v269 + 8);
        v124 = __ldrex(v123);
        v125 = v124 - 1;
      while ( __strex(v124 - 1, v123) );
      v124 = *v123;
      v125 = *v123 - 1;
      *v123 = v125;
    if ( v124 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, signed int, signed int, const BoundingBox *, signed int))(*(_DWORD *)v122 + 12))(
        v122,
        *(_DWORD *)(*(_DWORD *)v122 + 12),
        v123,
        v125,
        v130);
  return 1;
}


void __fastcall OceanMonumentDoubleZRoom::~OceanMonumentDoubleZRoom(OceanMonumentDoubleZRoom *this)
{
  OceanMonumentDoubleZRoom *v1; // r4@1
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


void __fastcall OceanMonumentDoubleZRoom::~OceanMonumentDoubleZRoom(OceanMonumentDoubleZRoom *this)
{
  OceanMonumentDoubleZRoom::~OceanMonumentDoubleZRoom(this);
}


signed int __fastcall OceanMonumentDoubleZRoom::getType(OceanMonumentDoubleZRoom *this)
{
  return 1330459226;
}
