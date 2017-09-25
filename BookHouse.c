

int __fastcall BookHouse::BookHouse(int result, int a2, int a3, int a4, int a5, int a6)
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
  *(_DWORD *)result = &off_27243E8;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  return result;
}


signed int __fastcall BookHouse::postProcess(BookHouse *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  BookHouse *v4; // r11@1
  const BoundingBox *v5; // r8@1
  Random *v6; // r10@1
  BlockSource *v7; // r9@1
  BookHouse *v8; // r6@2
  int v9; // r7@2
  int v10; // r0@2
  int v11; // r12@3
  BookHouse *v12; // r9@3
  signed int v13; // r11@3
  signed int v14; // r10@3
  int v15; // r2@4
  int v16; // r6@5
  __int64 v17; // kr00_8@5
  int v18; // r0@5
  int v19; // r3@5
  bool v20; // nf@5
  unsigned __int8 v21; // vf@5
  signed int v22; // r0@5
  __int64 v23; // kr10_8@5
  signed int v24; // r2@7
  bool v25; // zf@9
  signed int v26; // r3@9
  signed int v27; // r4@11
  signed int v28; // r5@13
  int v29; // r0@17
  int v30; // r0@24
  int v31; // r4@26
  signed int v32; // r5@26
  void (__fastcall *v33)(BookHouse *, BlockSource *, const BoundingBox *, signed int); // r7@26
  unsigned int v34; // r0@26
  int v35; // r0@27
  int *v36; // r7@27
  int v37; // r3@27
  BlockSelector *v38; // r0@28
  BlockSelector *v39; // r0@32
  BlockSelector *v40; // r0@35
  int v41; // r10@39
  BlockSelector *v42; // ST1C_4@39
  StructurePiece *v43; // r0@39
  const BoundingBox *v44; // r11@39
  int v45; // r0@40
  char v46; // r8@41
  int v47; // r6@41
  void (__fastcall *v48)(int, BlockSource *, char *, int); // r7@42
  void (__fastcall *v49)(int, BlockSource *, char *, int); // r7@42
  int v50; // r6@43
  int v51; // r7@43
  void (__fastcall *v52)(int, BlockSource *, char *, int); // r5@44
  void (__fastcall *v53)(int, BlockSource *, char *, int); // r5@44
  void (__fastcall *v54)(int, BlockSource *, char *, int); // r5@45
  void (__fastcall *v55)(int, BlockSource *, char *, int); // r5@45
  int v56; // r6@46
  void (__fastcall *v57)(int, BlockSource *, char *, int); // r5@47
  void (__fastcall *v58)(int, BlockSource *, char *, int); // r5@47
  const BoundingBox *v59; // r8@48
  int v60; // r11@48
  void (__fastcall *v61)(int, BlockSource *, char *, signed int); // r7@49
  void (__fastcall *v62)(int, BlockSource *, char *, signed int); // r7@49
  BlockSelector *v63; // r0@50
  BlockSelector *v64; // r0@53
  BlockSelector *v65; // r0@56
  BlockSelector *v66; // r0@59
  BlockSelector *v67; // r0@62
  BlockSelector *v68; // r0@65
  BlockSelector *v69; // r0@68
  BlockSelector *v70; // r0@71
  void (__fastcall *v71)(int, BlockSource *, const BoundingBox *, _DWORD); // r6@74
  void (__fastcall *v72)(int, BlockSource *, const BoundingBox *, signed int); // r6@74
  void (__fastcall *v73)(int, BlockSource *, const BoundingBox *, signed int); // r6@74
  void (__fastcall *v74)(int, BlockSource *, const BoundingBox *, signed int); // r6@74
  void (__fastcall *v75)(int, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v76)(int, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v77)(int, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v78)(int, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v79)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v80)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v81)(int, BlockSource *, char *, _DWORD); // r4@74
  void (__fastcall *v82)(int, BlockSource *, char *, _DWORD); // r4@74
  void (__fastcall *v83)(int, BlockSource *, char *, _DWORD); // r4@74
  void (__fastcall *v84)(int, BlockSource *, char *, _DWORD); // r4@74
  void (__fastcall *v85)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v86)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v87)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v88)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v89)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v90)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v91)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v92)(int, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v93)(int, BlockSource *, const BoundingBox *, signed int); // r6@74
  void (__fastcall *v94)(int, BlockSource *, const BoundingBox *, signed int); // r6@74
  void (__fastcall *v95)(int, BlockSource *, const BoundingBox *, signed int); // r6@74
  void (__fastcall *v96)(int, BlockSource *, char *, signed int); // r6@75
  void (__fastcall *v97)(int, BlockSource *, char *, signed int); // r6@75
  void (__fastcall *v98)(int, BlockSource *, char *, signed int); // r6@76
  void (__fastcall *v99)(int, BlockSource *, char *, signed int); // r6@76
  void (__fastcall *v100)(int, BlockSource *, char *, signed int); // r5@76
  void (__fastcall *v101)(int, BlockSource *, char *, signed int); // r5@76
  void (__fastcall *v102)(int, BlockSource *, char *, signed int); // r5@76
  void (__fastcall *v103)(int, BlockSource *, char *, signed int); // r5@76
  void (__fastcall *v104)(int, BlockSource *, char *, signed int); // r6@76
  void (__fastcall *v105)(int, BlockSource *, char *, signed int); // r5@76
  int v106; // r1@76
  void (__fastcall *v107)(int, BlockSource *, char *, signed int); // r7@76
  void (__fastcall *v108)(int, BlockSource *, char *, signed int); // r4@76
  int v109; // r1@76
  void (__fastcall *v110)(int, BlockSource *, char *, signed int); // r7@76
  void (__fastcall *v111)(int, BlockSource *, __int16 *, signed int); // r7@76
  void (__fastcall *v112)(int, BlockSource *, __int16 *, signed int); // r7@76
  void (__fastcall *v113)(int, BlockSource *, const BoundingBox *, Random *); // r4@77
  const BoundingBox *v114; // r9@78
  void (__fastcall *v115)(int, int, char *, signed int); // r8@80
  BlockSource *v116; // r8@81
  int v117; // r11@81
  int v118; // r7@82
  void (__fastcall *v119)(int, BlockSource *, char *, int); // r5@83
  Random *v121; // [sp+28h] [bp-AF0h]@2
  Random *v122; // [sp+28h] [bp-AF0h]@39
  BlockSource *v123; // [sp+30h] [bp-AE8h]@2
  char v124; // [sp+30h] [bp-AE8h]@41
  char v125; // [sp+34h] [bp-AE4h]@83
  char v126; // [sp+35h] [bp-AE3h]@83
  char v127; // [sp+38h] [bp-AE0h]@80
  char v128; // [sp+39h] [bp-ADFh]@80
  char v129; // [sp+3Ch] [bp-ADCh]@79
  char v130; // [sp+40h] [bp-AD8h]@78
  __int16 v131; // [sp+44h] [bp-AD4h]@76
  __int16 v132; // [sp+48h] [bp-AD0h]@76
  char v133; // [sp+4Ch] [bp-ACCh]@76
  char v134; // [sp+4Dh] [bp-ACBh]@76
  char v135; // [sp+50h] [bp-AC8h]@76
  char v136; // [sp+51h] [bp-AC7h]@76
  char v137; // [sp+54h] [bp-AC4h]@76
  char v138; // [sp+55h] [bp-AC3h]@76
  char v139; // [sp+58h] [bp-AC0h]@76
  char v140; // [sp+59h] [bp-ABFh]@76
  char v141; // [sp+5Ch] [bp-ABCh]@76
  char v142; // [sp+5Dh] [bp-ABBh]@76
  char v143; // [sp+60h] [bp-AB8h]@76
  char v144; // [sp+61h] [bp-AB7h]@76
  char v145; // [sp+64h] [bp-AB4h]@76
  char v146; // [sp+65h] [bp-AB3h]@76
  char v147; // [sp+68h] [bp-AB0h]@76
  char v148; // [sp+69h] [bp-AAFh]@76
  char v149; // [sp+6Ch] [bp-AACh]@76
  char v150; // [sp+6Dh] [bp-AABh]@76
  char v151; // [sp+70h] [bp-AA8h]@76
  char v152; // [sp+71h] [bp-AA7h]@76
  char v153; // [sp+74h] [bp-AA4h]@76
  char v154; // [sp+75h] [bp-AA3h]@76
  char v155; // [sp+78h] [bp-AA0h]@75
  char v156; // [sp+79h] [bp-A9Fh]@75
  char v157; // [sp+7Ch] [bp-A9Ch]@75
  char v158; // [sp+7Dh] [bp-A9Bh]@75
  char v159; // [sp+80h] [bp-A98h]@74
  char v160; // [sp+81h] [bp-A97h]@74
  char v161; // [sp+84h] [bp-A94h]@74
  char v162; // [sp+85h] [bp-A93h]@74
  char v163; // [sp+88h] [bp-A90h]@74
  char v164; // [sp+89h] [bp-A8Fh]@74
  char v165; // [sp+8Ch] [bp-A8Ch]@74
  char v166; // [sp+8Dh] [bp-A8Bh]@74
  char v167; // [sp+90h] [bp-A88h]@74
  char v168; // [sp+91h] [bp-A87h]@74
  char v169; // [sp+94h] [bp-A84h]@74
  char v170; // [sp+95h] [bp-A83h]@74
  char v171; // [sp+98h] [bp-A80h]@74
  char v172; // [sp+99h] [bp-A7Fh]@74
  char v173; // [sp+9Ch] [bp-A7Ch]@74
  char v174; // [sp+9Dh] [bp-A7Bh]@74
  char v175; // [sp+A0h] [bp-A78h]@74
  char v176; // [sp+A1h] [bp-A77h]@74
  char v177; // [sp+A4h] [bp-A74h]@74
  char v178; // [sp+A5h] [bp-A73h]@74
  char v179; // [sp+A8h] [bp-A70h]@74
  char v180; // [sp+A9h] [bp-A6Fh]@74
  char v181; // [sp+ACh] [bp-A6Ch]@74
  char v182; // [sp+ADh] [bp-A6Bh]@74
  char v183; // [sp+B0h] [bp-A68h]@74
  char v184; // [sp+B1h] [bp-A67h]@74
  char v185; // [sp+B4h] [bp-A64h]@74
  char v186; // [sp+B5h] [bp-A63h]@74
  char v187; // [sp+B8h] [bp-A60h]@74
  char v188; // [sp+B9h] [bp-A5Fh]@74
  char v189; // [sp+BCh] [bp-A5Ch]@74
  char v190; // [sp+BDh] [bp-A5Bh]@74
  char v191; // [sp+C0h] [bp-A58h]@74
  char v192; // [sp+C1h] [bp-A57h]@74
  char v193; // [sp+C4h] [bp-A54h]@74
  char v194; // [sp+C5h] [bp-A53h]@74
  char v195; // [sp+C8h] [bp-A50h]@74
  char v196; // [sp+C9h] [bp-A4Fh]@74
  char v197; // [sp+CCh] [bp-A4Ch]@74
  char v198; // [sp+CDh] [bp-A4Bh]@74
  char v199; // [sp+D0h] [bp-A48h]@74
  char v200; // [sp+D1h] [bp-A47h]@74
  char v201; // [sp+D4h] [bp-A44h]@74
  char v202; // [sp+D5h] [bp-A43h]@74
  char v203; // [sp+D8h] [bp-A40h]@74
  char v204; // [sp+D9h] [bp-A3Fh]@74
  char v205; // [sp+DCh] [bp-A3Ch]@74
  char v206; // [sp+DDh] [bp-A3Bh]@74
  char v207; // [sp+E0h] [bp-A38h]@74
  char v208; // [sp+E1h] [bp-A37h]@74
  char v209; // [sp+E4h] [bp-A34h]@74
  char v210; // [sp+E5h] [bp-A33h]@74
  char v211; // [sp+E8h] [bp-A30h]@74
  char v212; // [sp+E9h] [bp-A2Fh]@74
  char v213; // [sp+ECh] [bp-A2Ch]@74
  char v214; // [sp+EDh] [bp-A2Bh]@74
  char v215; // [sp+F0h] [bp-A28h]@74
  char v216; // [sp+F1h] [bp-A27h]@74
  char v217; // [sp+F4h] [bp-A24h]@74
  char v218; // [sp+F5h] [bp-A23h]@74
  char v219; // [sp+F8h] [bp-A20h]@74
  char v220; // [sp+F9h] [bp-A1Fh]@74
  char v221; // [sp+FCh] [bp-A1Ch]@74
  char v222; // [sp+FDh] [bp-A1Bh]@74
  char v223; // [sp+100h] [bp-A18h]@49
  char v224; // [sp+101h] [bp-A17h]@49
  char v225; // [sp+104h] [bp-A14h]@49
  char v226; // [sp+105h] [bp-A13h]@49
  char v227; // [sp+108h] [bp-A10h]@42
  char v228; // [sp+109h] [bp-A0Fh]@42
  char v229; // [sp+10Ch] [bp-A0Ch]@42
  char v230; // [sp+10Dh] [bp-A0Bh]@42
  unsigned int v231; // [sp+110h] [bp-A08h]@26
  unsigned int v232; // [sp+114h] [bp-A04h]@26
  int v233; // [sp+AD4h] [bp-44h]@26
  char v234; // [sp+AD8h] [bp-40h]@26
  int v235; // [sp+ADCh] [bp-3Ch]@26
  int v236; // [sp+AE0h] [bp-38h]@28
  char v237; // [sp+AE4h] [bp-34h]@26
  char v238; // [sp+AE5h] [bp-33h]@26
  char v239; // [sp+AE8h] [bp-30h]@26
  char v240; // [sp+AE9h] [bp-2Fh]@26
  char v241; // [sp+AECh] [bp-2Ch]@31
  char v242; // [sp+AEDh] [bp-2Bh]@31
  char v243; // [sp+AF0h] [bp-28h]@31
  char v244; // [sp+AF1h] [bp-27h]@31

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)this + 9) > -1 )
    goto LABEL_26;
  v8 = this;
  v121 = a3;
  v9 = *((_DWORD *)this + 3);
  v10 = *((_DWORD *)this + 6);
  v123 = a2;
  if ( v9 > v10 )
    goto LABEL_88;
  v11 = *((_DWORD *)v4 + 4);
  v12 = v4;
  v13 = 0;
  v14 = 0;
  do
  {
    v15 = *((_DWORD *)v12 + 1);
    if ( v15 <= v11 )
    {
      do
      {
        v16 = v15;
        v17 = *(_QWORD *)v5;
        v18 = *((_QWORD *)v5 + 1) >> 32;
        v19 = *((_QWORD *)v5 + 1);
        v21 = __OFSUB__(v18, v15);
        v20 = v18 - v15 < 0;
        v22 = 0;
        v23 = *((_QWORD *)v5 + 2);
        if ( !(v20 ^ v21) )
          v22 = 1;
        v24 = 0;
        if ( (signed int)v17 <= v16 )
          v24 = 1;
        v21 = __OFSUB__(v19, v9);
        v25 = v19 == v9;
        v20 = v19 - v9 < 0;
        v26 = 0;
        if ( (unsigned __int8)(v20 ^ v21) | v25 )
          v26 = 1;
        v27 = 0;
        if ( SHIDWORD(v23) >= v9 )
          v27 = 1;
        v28 = 0;
        if ( SHIDWORD(v17) < 65 )
          v28 = 1;
        if ( (signed int)v23 >= 64 && (v22 & v24 & v26 & v27 & v28) == 1 )
        {
          v29 = j_BlockSource::getAboveTopSolidBlock(v123, v16, v9, 0, 0);
          ++v13;
          if ( v29 < 64 )
            v29 = 64;
          v11 = *((_DWORD *)v12 + 4);
          v14 += v29;
        }
        v15 = v16 + 1;
      }
      while ( v16 < v11 );
      v10 = *((_DWORD *)v12 + 6);
    }
    v21 = __OFSUB__(v9, v10);
    v20 = v9++ - v10 < 0;
  }
  while ( v20 ^ v21 );
  v8 = v12;
  if ( !v13 )
LABEL_88:
    *((_DWORD *)v8 + 9) = -1;
    return 1;
  v30 = v14 / v13;
  *((_DWORD *)v12 + 9) = v14 / v13;
  if ( v14 / v13 >= 0 )
    v4 = v12;
    v7 = v123;
    v6 = v121;
    *((_DWORD *)v8 + 2) += v30 - *((_DWORD *)v8 + 5) + 8;
    *((_DWORD *)v8 + 5) = v30 + 8;
LABEL_26:
    v31 = 0;
    v32 = 1;
    v33 = *(void (__fastcall **)(BookHouse *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v239 = BlockID::AIR;
    v237 = BlockID::AIR;
    v240 = 0;
    v238 = 0;
    v33(v4, v7, v5, 1);
    v34 = *(_DWORD *)v6;
    v231 = v34;
    v233 = 625;
    v234 = 0;
    v235 = 0;
    v232 = v34;
    do
      v35 = v34 ^ (v34 >> 30);
      v36 = (int *)(&v231 + v31);
      v37 = v31++ + 1812433253 * v35;
      v34 = v32++ + 1812433253 * v35;
      v36[2] = v37 + 1;
    while ( v31 != 397 );
    v233 = 624;
    v236 = 398;
    v38 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v38 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 0, 0, 8, 0, 5, 0, (Random *)&v231, v38);
    else
      v243 = *(_BYTE *)(Block::mCobblestone + 4);
      v244 = 0;
      v241 = *(_BYTE *)(Block::mCobblestone + 4);
      v242 = 0;
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 0, 0, 8, 0, 5, (int)&v243, (int)&v241, 0);
    v39 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v39 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 5, 0, 8, 5, 5, 0, (Random *)&v231, v39);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 5, 0, 8, 5, 5, (int)&v243, (int)&v241, 0);
    v40 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v40 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 6, 1, 8, 6, 4, 0, (Random *)&v231, v40);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 6, 1, 8, 6, 4, (int)&v243, (int)&v241, 0);
    if ( *((_DWORD *)v4 + 12) )
      v122 = v6;
      v41 = (int)v4;
      v42 = (BlockSelector *)*((_DWORD *)v4 + 12);
      v43 = v4;
      v44 = v5;
      j_StructurePiece::generateBox(v43, v7, v5, 0, 7, 2, 8, 7, 3, 0, (Random *)&v231, v42);
      v45 = (int)v4;
      j_StructurePiece::generateBox(v45, (int)v7, (int)v5, 0, 7, 2, 8, 7, 3, (int)&v243, (int)&v241, 0);
    v124 = j_StructurePiece::getOrientationData((StructurePiece *)v41, (const Block *)Block::mOakStairs, 3);
    v46 = j_StructurePiece::getOrientationData((StructurePiece *)v41, (const Block *)Block::mOakStairs, 2);
    v47 = 0;
      v48 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v229 = *(_BYTE *)(Block::mOakStairs + 4);
      v230 = v124;
      v48(v41, v7, &v229, v47);
      v49 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v227 = *(_BYTE *)(Block::mOakStairs + 4);
      v228 = v46;
      v49(v41, v7, &v227, v47++);
    while ( v47 != 9 );
    v50 = 0;
    v51 = 0;
      v52 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v52(v41, v7, &v229, v50);
      v53 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v53(v41, v7, &v227, v50++);
    while ( v50 != 9 );
      v54 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v54(v41, v7, &v229, v51);
      v55 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v55(v41, v7, &v227, v51++);
    while ( v51 != 9 );
    v56 = 0;
      v57 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v57(v41, v7, &v229, v56);
      v58 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 36);
      v58(v41, v7, &v227, v56++);
    while ( v56 != 9 );
    v59 = v44;
    v60 = (int)v7;
    if ( *(_BYTE *)(v41 + 47) )
      v61 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
      v225 = *(_BYTE *)(Block::mWeb + 4);
      v226 = 0;
      v61(v41, v7, &v225, 4);
      v62 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
      v223 = *(_BYTE *)(Block::mWeb + 4);
      v224 = 0;
      v62(v41, v7, &v223, 2);
    v63 = *(BlockSelector **)(v41 + 48);
    if ( v63 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 0, 1, 0, 0, 1, 5, 0, (Random *)&v231, v63);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 0, 1, 0, 0, 1, 5, (int)&v243, (int)&v241, 0);
    v64 = *(BlockSelector **)(v41 + 48);
    if ( v64 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 1, 1, 5, 8, 1, 5, 0, (Random *)&v231, v64);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 1, 1, 5, 8, 1, 5, (int)&v243, (int)&v241, 0);
    v65 = *(BlockSelector **)(v41 + 48);
    if ( v65 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 8, 1, 0, 8, 1, 4, 0, (Random *)&v231, v65);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 8, 1, 0, 8, 1, 4, (int)&v243, (int)&v241, 0);
    v66 = *(BlockSelector **)(v41 + 48);
    if ( v66 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 2, 1, 0, 7, 1, 0, 0, (Random *)&v231, v66);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 2, 1, 0, 7, 1, 0, (int)&v243, (int)&v241, 0);
    v67 = *(BlockSelector **)(v41 + 48);
    if ( v67 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 0, 2, 0, 0, 4, 0, 0, (Random *)&v231, v67);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 0, 2, 0, 0, 4, 0, (int)&v243, (int)&v241, 0);
    v68 = *(BlockSelector **)(v41 + 48);
    if ( v68 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 0, 2, 5, 0, 4, 5, 0, (Random *)&v231, v68);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 0, 2, 5, 0, 4, 5, (int)&v243, (int)&v241, 0);
    v69 = *(BlockSelector **)(v41 + 48);
    if ( v69 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 8, 2, 5, 8, 4, 5, 0, (Random *)&v231, v69);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 8, 2, 5, 8, 4, 5, (int)&v243, (int)&v241, 0);
    v70 = *(BlockSelector **)(v41 + 48);
    if ( v70 )
      j_StructurePiece::generateBox((StructurePiece *)v41, v7, v59, 8, 2, 0, 8, 4, 0, 0, (Random *)&v231, v70);
      j_StructurePiece::generateBox(v41, (int)v7, (int)v59, 8, 2, 0, 8, 4, 0, (int)&v243, (int)&v241, 0);
    v71 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v41 + 40);
    v221 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v222 = 0;
    v219 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v220 = 0;
    v71(v41, v7, v59, 0);
    v72 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v41 + 40);
    v217 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v218 = 0;
    v215 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v216 = 0;
    v72(v41, v7, v59, 1);
    v73 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v41 + 40);
    v213 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v214 = 0;
    v211 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v212 = 0;
    v73(v41, v7, v59, 8);
    v74 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v41 + 40);
    v209 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v210 = 0;
    v207 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v208 = 0;
    v74(v41, v7, v59, 1);
    v75 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v205 = *(_BYTE *)(Block::mGlassPane + 4);
    v206 = 0;
    v75(v41, v7, &v205, 4);
    v76 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v203 = *(_BYTE *)(Block::mGlassPane + 4);
    v204 = 0;
    v76(v41, v7, &v203, 5);
    v77 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v201 = *(_BYTE *)(Block::mGlassPane + 4);
    v202 = 0;
    v77(v41, v7, &v201, 6);
    v78 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v199 = *(_BYTE *)(Block::mGlassPane + 4);
    v200 = 0;
    v78(v41, v7, &v199, 4);
    v79 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v197 = *(_BYTE *)(Block::mGlassPane + 4);
    v198 = 0;
    v79(v41, v7, &v197, 5);
    v80 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v195 = *(_BYTE *)(Block::mGlassPane + 4);
    v196 = 0;
    v80(v41, v7, &v195, 6);
    v81 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v41 + 36);
    v193 = *(_BYTE *)(Block::mGlassPane + 4);
    v194 = 0;
    v81(v41, v7, &v193, 0);
    v82 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v41 + 36);
    v191 = *(_BYTE *)(Block::mGlassPane + 4);
    v192 = 0;
    v82(v41, v7, &v191, 0);
    v83 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v41 + 36);
    v189 = *(_BYTE *)(Block::mGlassPane + 4);
    v190 = 0;
    v83(v41, v7, &v189, 0);
    v84 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v41 + 36);
    v187 = *(_BYTE *)(Block::mGlassPane + 4);
    v188 = 0;
    v84(v41, v7, &v187, 0);
    v85 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v185 = *(_BYTE *)(Block::mGlassPane + 4);
    v186 = 0;
    v85(v41, v7, &v185, 8);
    v86 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v183 = *(_BYTE *)(Block::mGlassPane + 4);
    v184 = 0;
    v86(v41, v7, &v183, 8);
    v87 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v181 = *(_BYTE *)(Block::mGlassPane + 4);
    v182 = 0;
    v87(v41, v7, &v181, 8);
    v88 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v179 = *(_BYTE *)(Block::mGlassPane + 4);
    v180 = 0;
    v88(v41, v7, &v179, 8);
    v89 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v177 = *(_BYTE *)(Block::mGlassPane + 4);
    v178 = 0;
    v89(v41, v7, &v177, 2);
    v90 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v175 = *(_BYTE *)(Block::mGlassPane + 4);
    v176 = 0;
    v90(v41, v7, &v175, 3);
    v91 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v173 = *(_BYTE *)(Block::mGlassPane + 4);
    v174 = 0;
    v91(v41, v7, &v173, 5);
    v92 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v171 = *(_BYTE *)(Block::mGlassPane + 4);
    v172 = 0;
    v92(v41, v7, &v171, 6);
    v93 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v41 + 40);
    v169 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v170 = 0;
    v167 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v168 = 0;
    v93(v41, v7, v59, 1);
    v94 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v41 + 40);
    v165 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v166 = 0;
    v163 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v164 = 0;
    v94(v41, v7, v59, 1);
    v95 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v41 + 40);
    v161 = *(_BYTE *)(Block::mBookshelf + 4);
    v162 = 0;
    v159 = *(_BYTE *)(Block::mBookshelf + 4);
    v160 = 0;
    v95(v41, v7, v59, 1);
      v96 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
      v157 = *(_BYTE *)(Block::mWeb + 4);
      v158 = 0;
      v96(v41, v7, &v157, 1);
      v97 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
      v155 = *(_BYTE *)(Block::mWeb + 4);
      v156 = 0;
      v97(v41, v7, &v155, 7);
    v98 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v153 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v154 = 0;
    v98(v41, v7, &v153, 7);
    v99 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v151 = *(_BYTE *)(Block::mOakStairs + 4);
    v152 = j_StructurePiece::getOrientationData((StructurePiece *)v41, (const Block *)Block::mOakStairs, 0);
    v99(v41, v7, &v151, 7);
    LOBYTE(v99) = j_StructurePiece::getOrientationData((StructurePiece *)v41, (const Block *)Block::mOakStairs, 3);
    v100 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v149 = *(_BYTE *)(Block::mOakStairs + 4);
    v150 = (char)v99;
    v100(v41, v7, &v149, 6);
    v101 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v147 = *(_BYTE *)(Block::mOakStairs + 4);
    v148 = (char)v99;
    v101(v41, v7, &v147, 5);
    v102 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v145 = *(_BYTE *)(Block::mOakStairs + 4);
    v146 = (char)v99;
    v102(v41, v7, &v145, 4);
    v103 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v143 = *(_BYTE *)(Block::mOakStairs + 4);
    v144 = (char)v99;
    v103(v41, v7, &v143, 3);
    v104 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v141 = *(_BYTE *)(Block::mFence + 4);
    v142 = 0;
    v104(v41, v7, &v141, 6);
    v105 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v139 = *(_BYTE *)(Block::mWoolCarpet + 4);
    v140 = j_WoolCarpetBlock::getBlockDataForItemAuxValue((WoolCarpetBlock *)3, v106);
    v105(v41, v7, &v139, 6);
    v107 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v137 = *(_BYTE *)(Block::mFence + 4);
    v138 = 0;
    v107(v41, v7, &v137, 4);
    v108 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v135 = *(_BYTE *)(Block::mWoolCarpet + 4);
    v136 = j_WoolCarpetBlock::getBlockDataForItemAuxValue((WoolCarpetBlock *)3, v109);
    v108(v41, v7, &v135, 4);
    v110 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v41 + 36);
    v133 = *(_BYTE *)(Block::mWorkBench + 4);
    v134 = 0;
    v110(v41, v7, &v133, 7);
    v111 = *(void (__fastcall **)(int, BlockSource *, __int16 *, signed int))(*(_DWORD *)v41 + 36);
    v132 = FullBlock::AIR;
    v111(v41, v7, &v132, 1);
    v112 = *(void (__fastcall **)(int, BlockSource *, __int16 *, signed int))(*(_DWORD *)v41 + 36);
    v131 = FullBlock::AIR;
    v112(v41, v7, &v131, 1);
    if ( !*(_BYTE *)(v41 + 47) )
      v113 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v41 + 56);
      j_StructurePiece::getOrientationData((StructurePiece *)v41, (const Block *)Block::mWoodenDoor, 1);
      v113(v41, v7, v59, v122);
    v114 = v59;
    j_StructurePiece::getBlock(
      (StructurePiece *)&v130,
      (BlockSource *)v41,
      v60,
      1,
      0,
      (const BoundingBox *)0xFFFFFFFF,
      (int)v59);
    if ( !v130 )
      j_StructurePiece::getBlock(
        (StructurePiece *)&v129,
        (BlockSource *)v41,
        v60,
        1,
        -1,
        (const BoundingBox *)0xFFFFFFFF,
        (int)v59);
      if ( v129 )
        v115 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v41 + 36);
        v127 = *(_BYTE *)(Block::mStoneStairs + 4);
        v128 = j_StructurePiece::getOrientationData((StructurePiece *)v41, (const Block *)Block::mStoneStairs, 3);
        v115(v41, v60, &v127, 1);
    v116 = (BlockSource *)v60;
    v117 = 0;
      v118 = 0;
        j_StructurePiece::generateAirColumnUp((StructurePiece *)v41, v116, v118, 9, v117, v114);
        v119 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v41 + 44);
        v125 = *(_BYTE *)(Block::mCobblestone + 4);
        v126 = 0;
        v119(v41, v116, &v125, v118++);
      while ( v118 != 9 );
      ++v117;
    while ( v117 != 6 );
  return 1;
}


signed int __fastcall BookHouse::getType(BookHouse *this)
{
  return 1447641672;
}


signed int __fastcall BookHouse::getVillagerProfession(BookHouse *this, int a2)
{
  return 1;
}


int __fastcall BookHouse::BookHouse(int result)
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
  *(_DWORD *)result = &off_27243E8;
  return result;
}


_DWORD *__fastcall BookHouse::createPiece(_DWORD *a1, int a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // r9@1
  __int64 *v10; // r6@1
  int v11; // r5@1
  _DWORD *result; // r0@1
  unsigned int v13; // r1@4
  int v14; // r1@6
  int v15; // [sp+1Ch] [bp+0h]@1
  int v16; // [sp+20h] [bp+4h]@6
  int v17; // [sp+24h] [bp+8h]@6
  int v18; // [sp+28h] [bp+Ch]@6
  int v19; // [sp+2Ch] [bp+10h]@6
  int v20; // [sp+30h] [bp+14h]@6

  v9 = a1;
  v10 = a3;
  v11 = a2;
  j_BoundingBox::orientBox((BoundingBox *)&v15, a5, a6, a7, 0, 0, 0, 9, 9, 6, a8);
  result = (_DWORD *)j_StructurePiece::findCollisionPiece(v10, (int)&v15);
  if ( result )
  {
    *v9 = 0;
  }
  else
    result = j_operator new(0x34u);
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
    if ( v11 )
    {
      v13 = *(_DWORD *)(v11 + 44);
      *((_BYTE *)result + 44) = v13;
      *((_BYTE *)result + 45) = BYTE1(v13);
      *((_BYTE *)result + 46) = v13 >> 16;
      *((_BYTE *)result + 47) = BYTE3(v13);
      if ( v13 >> 24 )
        result[12] = &VillagePiece::mossyStoneSelector;
    }
    *v9 = result;
    *result = &off_27243E8;
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
