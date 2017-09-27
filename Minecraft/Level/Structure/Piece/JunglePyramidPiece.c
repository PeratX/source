

int __fastcall JunglePyramidPiece::JunglePyramidPiece(int result, int a2, int a3)
{
  int v3; // r12@1

  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 48) = -1;
  *(_DWORD *)(result + 36) = 12;
  *(_DWORD *)(result + 40) = 10;
  *(_DWORD *)(result + 44) = 15;
  v3 = result + 8;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)v3 = 64;
  *(_DWORD *)(v3 + 4) = a3;
  *(_DWORD *)(v3 + 8) = a2 + 11;
  *(_DWORD *)(result + 20) = 73;
  *(_DWORD *)(result + 24) = a3 + 14;
  *(_DWORD *)result = &off_27192CC;
  *(_DWORD *)(result + 52) = 0;
  return result;
}


signed int __fastcall JunglePyramidPiece::postProcess(JunglePyramidPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r7@1
  Random *v5; // r9@1
  BlockSource *v6; // r4@1
  JunglePyramidPiece *v7; // r6@1
  signed int v8; // r5@1
  void (__fastcall *v9)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@2
  void (__fastcall *v10)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@2
  void (__fastcall *v11)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@2
  void (__fastcall *v12)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@2
  const BoundingBox *v13; // r5@2
  int v14; // r11@2
  int v15; // r8@4
  JunglePyramidPiece *v16; // r7@4
  void (__fastcall *v17)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v18)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v19)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@4
  void (__fastcall *v20)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@4
  void (__fastcall *v21)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v22)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v23)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v24)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v25)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v26)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v27)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v28)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v29)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v30)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v31)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@4
  void (__fastcall *v32)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@4
  int v33; // r6@4
  void (__fastcall *v34)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@5
  void (__fastcall *v35)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@5
  int v36; // r0@5
  const BoundingBox *v37; // r10@6
  int v38; // r0@6
  int v39; // ST3C_4@6
  int v40; // ST38_4@6
  BlockState *v41; // r5@6
  signed int v42; // r8@6
  char v43; // r4@6
  char v44; // r9@6
  unsigned int v45; // r0@6
  void (__fastcall *v46)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r5@6
  int v47; // r9@6
  BlockState *v48; // r5@6
  char v49; // r4@6
  int v50; // r11@6
  unsigned int v51; // r0@6
  void (__fastcall *v52)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r5@6
  BlockState *v53; // r0@6
  char v54; // r6@6
  int v55; // r8@6
  void (__fastcall *v56)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@6
  void (__fastcall *v57)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@6
  void (__fastcall *v58)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v59)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v60)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v61)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v62)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v63)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v64)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v65)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  void (__fastcall *v66)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@6
  JunglePyramidPiece *v67; // r4@6
  int (__fastcall *v68)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *); // r5@7
  void *v69; // r0@7
  void (__fastcall *v70)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@8
  BlockState *v71; // r5@8
  signed int v72; // r8@8
  char v73; // r9@8
  unsigned int v74; // r0@8
  void (__fastcall *v75)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r5@8
  int v76; // r9@8
  BlockState *v77; // r5@8
  char v78; // r10@8
  unsigned int v79; // r0@8
  void (__fastcall *v80)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r5@8
  BlockState *v81; // r0@8
  char v82; // r6@8
  int v83; // r10@8
  void (__fastcall *v84)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@8
  signed int v85; // r6@8
  void (__fastcall *v86)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@8
  void (__fastcall *v87)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@8
  void (__fastcall *v88)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v89)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v90)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@8
  void (__fastcall *v91)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@8
  void (__fastcall *v92)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@8
  int (__fastcall *v93)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *); // r5@9
  void *v94; // r0@9
  void (__fastcall *v95)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r12@10
  char v96; // r6@10
  void (__fastcall *v97)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r5@10
  int (__fastcall *v98)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *); // r5@11
  void *v99; // r0@11
  void (__fastcall *v100)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v101)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v102)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v103)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v104)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v105)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v106)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v107)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v108)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v109)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v110)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v111)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v112)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r9@12
  void (__fastcall *v113)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r9@12
  void (__fastcall *v114)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v115)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v116)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v117)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v118)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v119)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v120)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r8@12
  void (__fastcall *v121)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v122)(JunglePyramidPiece *, BlockSource *, char *, signed int); // r6@12
  int (__fastcall *v123)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *); // r5@13
  void *v124; // r0@13
  unsigned int *v126; // r2@16
  signed int v127; // r1@18
  unsigned int *v128; // r2@20
  signed int v129; // r1@22
  unsigned int *v130; // r2@24
  signed int v131; // r1@26
  unsigned int *v132; // r2@28
  signed int v133; // r1@30
  char v134; // [sp+30h] [bp-138h]@2
  char v135; // [sp+34h] [bp-134h]@2
  char v136; // [sp+38h] [bp-130h]@2
  char v137; // [sp+3Ch] [bp-12Ch]@2
  signed int v138; // [sp+3Ch] [bp-12Ch]@6
  const BoundingBox *v139; // [sp+40h] [bp-128h]@8
  BlockSource *v140; // [sp+44h] [bp-124h]@4
  Random *v141; // [sp+48h] [bp-120h]@4
  int v142; // [sp+50h] [bp-118h]@13
  char v143; // [sp+54h] [bp-114h]@12
  char v144; // [sp+55h] [bp-113h]@12
  char v145; // [sp+58h] [bp-110h]@12
  char v146; // [sp+59h] [bp-10Fh]@12
  char v147; // [sp+5Ch] [bp-10Ch]@12
  char v148; // [sp+5Dh] [bp-10Bh]@12
  char v149; // [sp+60h] [bp-108h]@12
  char v150; // [sp+61h] [bp-107h]@12
  char v151; // [sp+64h] [bp-104h]@12
  char v152; // [sp+65h] [bp-103h]@12
  char v153; // [sp+68h] [bp-100h]@12
  char v154; // [sp+69h] [bp-FFh]@12
  char v155; // [sp+6Ch] [bp-FCh]@12
  char v156; // [sp+6Dh] [bp-FBh]@12
  char v157; // [sp+70h] [bp-F8h]@12
  char v158; // [sp+71h] [bp-F7h]@12
  char v159; // [sp+74h] [bp-F4h]@12
  char v160; // [sp+75h] [bp-F3h]@12
  char v161; // [sp+78h] [bp-F0h]@12
  char v162; // [sp+79h] [bp-EFh]@12
  char v163; // [sp+7Ch] [bp-ECh]@12
  char v164; // [sp+7Dh] [bp-EBh]@12
  char v165; // [sp+80h] [bp-E8h]@12
  char v166; // [sp+81h] [bp-E7h]@12
  char v167; // [sp+84h] [bp-E4h]@12
  char v168; // [sp+85h] [bp-E3h]@12
  char v169; // [sp+88h] [bp-E0h]@12
  char v170; // [sp+89h] [bp-DFh]@12
  char v171; // [sp+8Ch] [bp-DCh]@12
  char v172; // [sp+8Dh] [bp-DBh]@12
  char v173; // [sp+90h] [bp-D8h]@12
  char v174; // [sp+91h] [bp-D7h]@12
  char v175; // [sp+94h] [bp-D4h]@12
  char v176; // [sp+95h] [bp-D3h]@12
  char v177; // [sp+98h] [bp-D0h]@12
  char v178; // [sp+99h] [bp-CFh]@12
  char v179; // [sp+9Ch] [bp-CCh]@12
  char v180; // [sp+9Dh] [bp-CBh]@12
  char v181; // [sp+A0h] [bp-C8h]@12
  char v182; // [sp+A1h] [bp-C7h]@12
  char v183; // [sp+A4h] [bp-C4h]@12
  char v184; // [sp+A5h] [bp-C3h]@12
  char v185; // [sp+A8h] [bp-C0h]@12
  char v186; // [sp+A9h] [bp-BFh]@12
  char v187; // [sp+ACh] [bp-BCh]@12
  char v188; // [sp+ADh] [bp-BBh]@12
  int v189; // [sp+B4h] [bp-B4h]@11
  char v190; // [sp+B8h] [bp-B0h]@10
  char v191; // [sp+B9h] [bp-AFh]@10
  char v192; // [sp+BCh] [bp-ACh]@10
  char v193; // [sp+BDh] [bp-ABh]@10
  int v194; // [sp+C4h] [bp-A4h]@9
  char v195; // [sp+C8h] [bp-A0h]@8
  char v196; // [sp+C9h] [bp-9Fh]@8
  char v197; // [sp+CCh] [bp-9Ch]@8
  char v198; // [sp+CDh] [bp-9Bh]@8
  char v199; // [sp+D0h] [bp-98h]@8
  char v200; // [sp+D1h] [bp-97h]@8
  char v201; // [sp+D4h] [bp-94h]@8
  char v202; // [sp+D5h] [bp-93h]@8
  char v203; // [sp+D8h] [bp-90h]@8
  char v204; // [sp+D9h] [bp-8Fh]@8
  char v205; // [sp+DCh] [bp-8Ch]@8
  char v206; // [sp+DDh] [bp-8Bh]@8
  char v207; // [sp+E0h] [bp-88h]@8
  char v208; // [sp+E1h] [bp-87h]@8
  char v209; // [sp+E4h] [bp-84h]@8
  char v210; // [sp+E5h] [bp-83h]@8
  char v211; // [sp+E8h] [bp-80h]@8
  char v212; // [sp+E9h] [bp-7Fh]@8
  char v213; // [sp+ECh] [bp-7Ch]@8
  char v214; // [sp+EDh] [bp-7Bh]@8
  char v215; // [sp+F0h] [bp-78h]@8
  char v216; // [sp+F1h] [bp-77h]@8
  int v217; // [sp+F8h] [bp-70h]@7
  char v218; // [sp+FCh] [bp-6Ch]@6
  char v219; // [sp+FDh] [bp-6Bh]@6
  char v220; // [sp+100h] [bp-68h]@6
  char v221; // [sp+101h] [bp-67h]@6
  char v222; // [sp+104h] [bp-64h]@6
  char v223; // [sp+105h] [bp-63h]@6
  char v224; // [sp+108h] [bp-60h]@6
  char v225; // [sp+109h] [bp-5Fh]@6
  char v226; // [sp+10Ch] [bp-5Ch]@6
  char v227; // [sp+10Dh] [bp-5Bh]@6
  char v228; // [sp+110h] [bp-58h]@6
  char v229; // [sp+111h] [bp-57h]@6
  char v230; // [sp+114h] [bp-54h]@6
  char v231; // [sp+115h] [bp-53h]@6
  char v232; // [sp+118h] [bp-50h]@6
  char v233; // [sp+119h] [bp-4Fh]@6
  char v234; // [sp+11Ch] [bp-4Ch]@6
  char v235; // [sp+11Dh] [bp-4Bh]@6
  char v236; // [sp+120h] [bp-48h]@6
  char v237; // [sp+121h] [bp-47h]@6
  char v238; // [sp+124h] [bp-44h]@6
  char v239; // [sp+125h] [bp-43h]@6
  char v240; // [sp+128h] [bp-40h]@6
  char v241; // [sp+129h] [bp-3Fh]@6
  char v242; // [sp+12Ch] [bp-3Ch]@6
  char v243; // [sp+12Dh] [bp-3Bh]@6
  char v244; // [sp+130h] [bp-38h]@2
  char v245; // [sp+131h] [bp-37h]@2
  char v246; // [sp+134h] [bp-34h]@2
  char v247; // [sp+135h] [bp-33h]@2
  char v248; // [sp+138h] [bp-30h]@2
  char v249; // [sp+139h] [bp-2Fh]@2
  char v250; // [sp+13Ch] [bp-2Ch]@2
  char v251; // [sp+13Dh] [bp-2Bh]@2
  char v252; // [sp+140h] [bp-28h]@4
  char v253; // [sp+141h] [bp-27h]@4

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = 0;
  if ( ScatteredFeaturePiece::updateAverageGroundHeight(this, a2, a4, 0) == 1 )
  {
    v137 = StructurePiece::getOrientationData(v7, (const Block *)Block::mStoneStairs, 3);
    v136 = StructurePiece::getOrientationData(v7, (const Block *)Block::mStoneStairs, 2);
    v134 = StructurePiece::getOrientationData(v7, (const Block *)Block::mStoneStairs, 0);
    v135 = StructurePiece::getOrientationData(v7, (const Block *)Block::mStoneStairs, 1);
    StructurePiece::generateBox(
      v7,
      v6,
      v4,
      0,
      -4,
      *((_DWORD *)v7 + 9) - 1,
      *((_DWORD *)v7 + 11) - 1,
      v5,
      (BlockSelector *)&JunglePyramidPiece::stoneSelector);
      2,
      1,
      9,
      12,
      3,
      11,
      10,
      6,
      13,
      7,
      8,
      4,
    StructurePiece::generateAirBox(v7, v6, v4, 3, 1, 3, 8, 2, 11);
    StructurePiece::generateAirBox(v7, v6, v4, 4, 3, 6, 7, 3, 9);
    StructurePiece::generateAirBox(v7, v6, v4, 2, 4, 2, 9, 5, 12);
    StructurePiece::generateAirBox(v7, v6, v4, 4, 6, 5, 7, 6, 9);
    StructurePiece::generateAirBox(v7, v6, v4, 5, 7, 6, 6, 7, 8);
    StructurePiece::generateAirBox(v7, v6, v4, 5, 1, 2, 6, 2, 2);
    StructurePiece::generateAirBox(v7, v6, v4, 5, 2, 12, 6, 2, 12);
    StructurePiece::generateAirBox(v7, v6, v4, 5, 5, 1, 6, 5, 1);
    StructurePiece::generateAirBox(v7, v6, v4, 5, 5, 13, 6, 5, 13);
    v9 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v250 = *(_BYTE *)(Block::mAir + 4);
    v251 = 0;
    v9(v7, v6, &v250, 1);
    v10 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v248 = *(_BYTE *)(Block::mAir + 4);
    v249 = 0;
    v10(v7, v6, &v248, 10);
    v11 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v246 = *(_BYTE *)(Block::mAir + 4);
    v247 = 0;
    v11(v7, v6, &v246, 1);
    v12 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v244 = *(_BYTE *)(Block::mAir + 4);
    v245 = 0;
    v12(v7, v6, &v244, 10);
      5,
      14,
    v13 = v4;
    v14 = 0;
    do
    {
      StructurePiece::generateBox(
        v7,
        v6,
        v4,
        v14,
        4,
        2,
        5,
        0,
        v5,
        (BlockSelector *)&JunglePyramidPiece::stoneSelector);
        6,
        8,
        10,
        12,
        9,
      v14 += 11;
    }
    while ( v14 < 12 );
    v15 = 0;
    v16 = v7;
    v141 = v5;
    v140 = v6;
      v13,
    v17 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v252 = *(_BYTE *)(Block::mStoneStairs + 4);
    v253 = v137;
    v17(v7, v6, &v252, 5);
    v18 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v18(v7, v6, &v252, 6);
    v19 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 36);
    v253 = v136;
    v19(v16, v6, &v252, 5);
    v20 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v20(v16, v6, &v252, 6);
    v21 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v21(v16, v6, &v252, 4);
    v22 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v22(v16, v6, &v252, 5);
    v23 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v23(v16, v6, &v252, 6);
    v24 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v24(v16, v6, &v252, 7);
    v25 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v25(v16, v6, &v252, 4);
    v26 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v26(v16, v6, &v252, 4);
    v27 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v27(v16, v6, &v252, 4);
    v28 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v28(v16, v6, &v252, 7);
    v29 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v29(v16, v6, &v252, 7);
    v30 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v30(v16, v6, &v252, 7);
      v16,
    v31 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v253 = v134;
    v31(v16, v6, &v252, 4);
    v32 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v253 = v135;
    v32(v16, v6, &v252, 7);
    v33 = 6;
      v34 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
      v252 = *(_BYTE *)(Block::mStoneStairs + 4);
      v253 = v136;
      v34(v16, v6, &v252, 5);
      v35 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
      v35(v16, v6, &v252, 6);
      v36 = v33++ + 3;
      StructurePiece::generateAirBox(v16, v6, v13, 5, v15, v33, 6, v15, v36);
      --v15;
    while ( v15 != -4 );
    v37 = v13;
    StructurePiece::generateAirBox(v16, v6, v13, 1, -3, 12, 10, -1, 13);
    StructurePiece::generateAirBox(v16, v6, v13, 1, -3, 1, 3, -1, 13);
    StructurePiece::generateAirBox(v16, v6, v13, 1, -3, 1, 9, -1, 5);
      -3,
      -2,
      -1,
    v38 = j_Block::getBlockState(Block::mTripwireHook, 2);
    v39 = *(_DWORD *)v38;
    v40 = *(_DWORD *)(v38 + 4);
    j_BlockState::getMask((BlockState *)v38);
    v41 = (BlockState *)j_Block::getBlockState(Block::mTripwireHook, 12);
    v42 = StructurePiece::getOrientationData(v16, (const Block *)Block::mTripwireHook, 3);
    v43 = *(_QWORD *)v41 >> 32;
    v44 = *(_QWORD *)v41;
    v45 = j_BlockState::getMask(v41);
    v46 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v242 = *(_BYTE *)(Block::mTripwireHook + 4);
    v47 = (v45 ^ 0xFF) & (1 << (v39 + 1 - v40)) | (v42 << (v44 + 1 - v43));
    v243 = v47;
    v46(v16, v140, &v242, 1);
    v48 = (BlockState *)j_Block::getBlockState(Block::mTripwireHook, 12);
    LOBYTE(v42) = StructurePiece::getOrientationData(v16, (const Block *)Block::mTripwireHook, 1);
    v50 = *(_QWORD *)v48 >> 32;
    v49 = *(_QWORD *)v48;
    v51 = v47 & ~j_BlockState::getMask(v48);
    v52 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v240 = *(_BYTE *)(Block::mTripwireHook + 4);
    v241 = v51 | ((_BYTE)v42 << (v49 + 1 - v50));
    v52(v16, v140, &v240, 4);
    v53 = (BlockState *)j_Block::getBlockState(Block::mTripwire, 2);
    v55 = *(_QWORD *)v53 >> 32;
    v54 = *(_QWORD *)v53;
    j_BlockState::getMask(v53);
    v56 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v238 = *(_BYTE *)(Block::mTripwire + 4);
    v138 = 1 << (v54 + 1 - v55);
    v239 = 1 << (v54 + 1 - v55);
    v56(v16, v140, &v238, 2);
    v57 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v236 = *(_BYTE *)(Block::mTripwire + 4);
    v237 = 1 << (v54 + 1 - v55);
    v57(v16, v140, &v236, 3);
    v58 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v234 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v235 = 0;
    v58(v16, v140, &v234, 5);
    v59 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v232 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v233 = 0;
    v59(v16, v140, &v232, 5);
    v60 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v230 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v231 = 0;
    v60(v16, v140, &v230, 5);
    v61 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v228 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v229 = 0;
    v61(v16, v140, &v228, 5);
    v62 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v226 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v227 = 0;
    v62(v16, v140, &v226, 5);
    v63 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v224 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v225 = 0;
    v63(v16, v140, &v224, 5);
    v64 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v222 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v223 = 0;
    v64(v16, v140, &v222, 5);
    v65 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v220 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v221 = 0;
    v65(v16, v140, &v220, 4);
    v66 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v218 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v219 = 0;
    v66(v16, v140, &v218, 3);
    v67 = v16;
    if ( !*((_BYTE *)v16 + 54) )
      v68 = *(int (__fastcall **)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v16 + 52);
      sub_21E94B4((void **)&v217, "loot_tables/chests/dispenser_trap.json");
      *((_BYTE *)v16 + 54) = v68(v16, v140, v37, v141);
      v69 = (void *)(v217 - 12);
      if ( (int *)(v217 - 12) != &dword_28898C0 )
      {
        v126 = (unsigned int *)(v217 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v127 = __ldrex(v126);
          while ( __strex(v127 - 1, v126) );
        }
        else
          v127 = (*v126)--;
        if ( v127 <= 0 )
          j_j_j_j__ZdlPv_9(v69);
      }
    v139 = v37;
    v70 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
    v215 = *(_BYTE *)(Block::mVine + 4);
    v216 = VineBlock::VINE_ALL;
    v70(v67, v140, &v215, 3);
    v71 = (BlockState *)j_Block::getBlockState(Block::mTripwireHook, 12);
    v72 = StructurePiece::getOrientationData(v67, (const Block *)Block::mTripwireHook, 0);
    v73 = *(_QWORD *)v71 >> 32;
    LOBYTE(v70) = *(_QWORD *)v71;
    v74 = j_BlockState::getMask(v71);
    v75 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v213 = *(_BYTE *)(Block::mTripwireHook + 4);
    v76 = (v74 ^ 0xFF) & v138 | (v72 << ((_BYTE)v70 + 1 - v73));
    v214 = v76;
    v75(v67, v140, &v213, 7);
    v77 = (BlockState *)j_Block::getBlockState(Block::mTripwireHook, 12);
    LOBYTE(v72) = StructurePiece::getOrientationData(v67, (const Block *)Block::mTripwireHook, 2);
    v78 = *(_QWORD *)v77 >> 32;
    LOBYTE(v70) = *(_QWORD *)v77;
    v79 = v76 & ~j_BlockState::getMask(v77);
    v80 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v211 = *(_BYTE *)(Block::mTripwireHook + 4);
    v212 = v79 | ((_BYTE)v72 << ((_BYTE)v70 + 1 - v78));
    v80(v67, v140, &v211, 7);
    v81 = (BlockState *)j_Block::getBlockState(Block::mTripwire, 2);
    v83 = *(_QWORD *)v81 >> 32;
    v82 = *(_QWORD *)v81;
    j_BlockState::getMask(v81);
    v84 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v209 = *(_BYTE *)(Block::mTripwire + 4);
    v85 = 1 << (v82 + 1 - v83);
    v210 = v85;
    v84(v67, v140, &v209, 7);
    v86 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v207 = *(_BYTE *)(Block::mTripwire + 4);
    v208 = v85;
    v86(v67, v140, &v207, 7);
    v87 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v205 = *(_BYTE *)(Block::mTripwire + 4);
    v206 = v85;
    v87(v67, v140, &v205, 7);
    v88 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v203 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v204 = 0;
    v88(v67, v140, &v203, 8);
    v89 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v201 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v202 = 0;
    v89(v67, v140, &v201, 9);
    v90 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v199 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v200 = 0;
    v90(v67, v140, &v199, 9);
    v91 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v197 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v198 = 0;
    v91(v67, v140, &v197, 9);
    v92 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v195 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v196 = 0;
    v92(v67, v140, &v195, 9);
    if ( !*((_BYTE *)v67 + 55) )
      v93 = *(int (__fastcall **)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v67 + 52);
      sub_21E94B4((void **)&v194, "loot_tables/chests/dispenser_trap.json");
      *((_BYTE *)v67 + 55) = v93(v67, v140, v139, v141);
      v94 = (void *)(v194 - 12);
      if ( (int *)(v194 - 12) != &dword_28898C0 )
        v128 = (unsigned int *)(v194 - 4);
            v129 = __ldrex(v128);
          while ( __strex(v129 - 1, v128) );
          v129 = (*v128)--;
        if ( v129 <= 0 )
          j_j_j_j__ZdlPv_9(v94);
    v95 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v96 = VineBlock::VINE_ALL;
    v192 = *(_BYTE *)(Block::mVine + 4);
    v193 = VineBlock::VINE_ALL;
    v95(v67, v140, &v192, 8);
    v97 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v190 = *(_BYTE *)(Block::mVine + 4);
    v191 = v96;
    v97(v67, v140, &v190, 8);
    if ( !*((_BYTE *)v67 + 52) )
      v98 = *(int (__fastcall **)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v67 + 48);
      sub_21E94B4((void **)&v189, "loot_tables/chests/jungle_temple.json");
      *((_BYTE *)v67 + 52) = v98(v67, v140, v139, v141);
      v99 = (void *)(v189 - 12);
      if ( (int *)(v189 - 12) != &dword_28898C0 )
        v130 = (unsigned int *)(v189 - 4);
            v131 = __ldrex(v130);
          while ( __strex(v131 - 1, v130) );
          v131 = (*v130)--;
        if ( v131 <= 0 )
          j_j_j_j__ZdlPv_9(v99);
    v100 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v187 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v188 = 0;
    v100(v67, v140, &v187, 9);
    v101 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v185 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v186 = 0;
    v101(v67, v140, &v185, 8);
    v102 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v183 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v184 = 0;
    v102(v67, v140, &v183, 4);
    v103 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v181 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v182 = 0;
    v103(v67, v140, &v181, 5);
    v104 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v179 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v180 = 0;
    v104(v67, v140, &v179, 5);
    v105 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v177 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v178 = 0;
    v105(v67, v140, &v177, 6);
    v106 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v175 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v176 = 0;
    v106(v67, v140, &v175, 7);
    v107 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v173 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v174 = 0;
    v107(v67, v140, &v173, 7);
    v108 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v171 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v172 = 0;
    v108(v67, v140, &v171, 8);
      v67,
      v140,
      v139,
      v141,
    StructurePiece::generateAirBox(v67, v140, v139, 8, -3, 8, 10, -1, 10);
    v109 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v169 = *(_BYTE *)(Block::mStoneBrick + 4);
    v170 = 3;
    v109(v67, v140, &v169, 8);
    v110 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v167 = *(_BYTE *)(Block::mStoneBrick + 4);
    v168 = 3;
    v110(v67, v140, &v167, 9);
    v111 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v165 = *(_BYTE *)(Block::mStoneBrick + 4);
    v166 = 3;
    v111(v67, v140, &v165, 10);
    v112 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v163 = *(_BYTE *)(Block::mLever + 4);
    v164 = StructurePiece::getOrientationData(v67, (const Block *)Block::mLever, 3);
    v112(v67, v140, &v163, 8);
    v113 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v161 = *(_BYTE *)(Block::mLever + 4);
    v162 = StructurePiece::getOrientationData(v67, (const Block *)Block::mLever, 3);
    v113(v67, v140, &v161, 9);
    v114 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v159 = *(_BYTE *)(Block::mLever + 4);
    v160 = StructurePiece::getOrientationData(v67, (const Block *)Block::mLever, 3);
    v114(v67, v140, &v159, 10);
    v115 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v157 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    v158 = 0;
    v115(v67, v140, &v157, 10);
    v116 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v155 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v156 = 0;
    v116(v67, v140, &v155, 8);
    v117 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v153 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v154 = 0;
    v117(v67, v140, &v153, 8);
    v118 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v151 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v152 = 0;
    v118(v67, v140, &v151, 10);
    v8 = 1;
    v119 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v149 = *(_BYTE *)(Block::mStickyPiston + 4);
    v150 = 1;
    v119(v67, v140, &v149, 9);
    v120 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v147 = *(_BYTE *)(Block::mStickyPiston + 4);
    v148 = StructurePiece::getOrientationData(v67, (const Block *)Block::mStickyPiston, 5);
    v120(v67, v140, &v147, 10);
    v121 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v145 = *(_BYTE *)(Block::mStickyPiston + 4);
    v146 = StructurePiece::getOrientationData(v67, (const Block *)Block::mStickyPiston, 5);
    v121(v67, v140, &v145, 10);
    v122 = *(void (__fastcall **)(JunglePyramidPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v67 + 36);
    v143 = *(_BYTE *)(Block::mUnpoweredRepeater + 4);
    v144 = StructurePiece::getOrientationData(v67, (const Block *)Block::mUnpoweredRepeater, 0);
    v122(v67, v140, &v143, 10);
    if ( !*((_BYTE *)v67 + 53) )
      v123 = *(int (__fastcall **)(JunglePyramidPiece *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v67 + 48);
      sub_21E94B4((void **)&v142, "loot_tables/chests/jungle_temple.json");
      *((_BYTE *)v67 + 53) = v123(v67, v140, v139, v141);
      v124 = (void *)(v142 - 12);
      if ( (int *)(v142 - 12) != &dword_28898C0 )
        v132 = (unsigned int *)(v142 - 4);
            v133 = __ldrex(v132);
          while ( __strex(v133 - 1, v132) );
          v133 = (*v132)--;
        if ( v133 <= 0 )
          j_j_j_j__ZdlPv_9(v124);
      v8 = 1;
  }
  return v8;
}


signed int __fastcall JunglePyramidPiece::getType(JunglePyramidPiece *this)
{
  return 1246644044;
}
