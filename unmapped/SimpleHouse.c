

int __fastcall SimpleHouse::SimpleHouse(int a1, int a2, int a3, Random *a4, int a5, int a6)
{
  int v6; // r4@1
  unsigned int v7; // r1@2

  v6 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)a1 = &off_27242B8;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 36) = -1;
  *(_DWORD *)(a1 + 40) = 0;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a2 + 44);
    *(_BYTE *)(a1 + 44) = v7;
    *(_BYTE *)(a1 + 45) = BYTE1(v7);
    *(_BYTE *)(a1 + 46) = v7 >> 16;
    *(_BYTE *)(a1 + 47) = BYTE3(v7);
    if ( 0 != v7 >> 24 )
      *(_DWORD *)(a1 + 48) = &VillagePiece::mossyStoneSelector;
  }
  *(_DWORD *)a1 = &off_2724350;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a5;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a5 + 20);
  *(_BYTE *)(a1 + 52) = (j_Random::_genRandInt32(a4) >> 27) & 1;
  return v6;
}


signed int __fastcall SimpleHouse::getType(SimpleHouse *this)
{
  return 1447646024;
}


signed int __fastcall SimpleHouse::postProcess(SimpleHouse *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SimpleHouse *v4; // r9@1
  const BoundingBox *v5; // r11@1
  Random *v6; // r5@1
  BlockSource *v7; // r8@1
  int v8; // r7@2
  SimpleHouse *v9; // r10@2
  int v10; // r0@2
  int v11; // r12@3
  signed int v12; // r9@3
  signed int v13; // r8@3
  int v14; // r2@4
  int v15; // r4@5
  __int64 v16; // kr00_8@5
  int v17; // r0@5
  int v18; // r3@5
  bool v19; // nf@5
  unsigned __int8 v20; // vf@5
  signed int v21; // r0@5
  __int64 v22; // kr10_8@5
  signed int v23; // r2@7
  bool v24; // zf@9
  signed int v25; // r3@9
  signed int v26; // r6@11
  signed int v27; // r5@13
  int v28; // r0@17
  int v29; // r0@24
  unsigned int v30; // r1@26
  int v31; // r2@26
  signed int v32; // r3@26
  int v33; // r1@27
  int *v34; // r4@27
  int v35; // r5@27
  BlockSelector *v36; // r1@28
  void (__fastcall *v37)(SimpleHouse *, BlockSource *, const BoundingBox *, _DWORD); // r7@32
  void (__fastcall *v38)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int); // r7@32
  int v39; // r4@32
  char v40; // r7@32
  void (__fastcall *v41)(SimpleHouse *, BlockSource *, char *, _DWORD); // r7@33
  void (__fastcall *v42)(SimpleHouse *, BlockSource *, char *, _DWORD); // r4@34
  int v43; // r4@35
  char v44; // r5@35
  char *v45; // r2@36
  void (__fastcall *v46)(SimpleHouse *, BlockSource *, char *, _DWORD); // r7@36
  int v47; // r4@38
  char v48; // r5@38
  char *v49; // r2@39
  void (__fastcall *v50)(SimpleHouse *, BlockSource *, char *, _DWORD); // r7@39
  int v51; // r4@41
  char v52; // r5@41
  char *v53; // r2@42
  void (__fastcall *v54)(SimpleHouse *, BlockSource *, char *, signed int); // r7@42
  int v55; // r4@44
  char v56; // r5@44
  char *v57; // r2@45
  void (__fastcall *v58)(SimpleHouse *, BlockSource *, char *, signed int); // r7@45
  int v59; // r4@47
  char v60; // r5@47
  char *v61; // r2@48
  void (__fastcall *v62)(SimpleHouse *, BlockSource *, char *, signed int); // r7@48
  int v63; // r4@50
  char v64; // r5@50
  char *v65; // r2@51
  void (__fastcall *v66)(SimpleHouse *, BlockSource *, char *, _DWORD); // r7@51
  int v67; // r4@53
  char v68; // r5@53
  char *v69; // r2@54
  void (__fastcall *v70)(SimpleHouse *, BlockSource *, char *, _DWORD); // r7@54
  int v71; // r4@56
  char v72; // r5@56
  char *v73; // r2@57
  void (__fastcall *v74)(SimpleHouse *, BlockSource *, char *, _DWORD); // r7@57
  int v75; // r4@59
  char v76; // r5@59
  char *v77; // r2@60
  void (__fastcall *v78)(SimpleHouse *, BlockSource *, char *, signed int); // r7@60
  int v79; // r4@62
  char v80; // r5@62
  char *v81; // r2@63
  void (__fastcall *v82)(SimpleHouse *, BlockSource *, char *, signed int); // r7@63
  int v83; // r4@65
  char v84; // r5@65
  char *v85; // r2@66
  void (__fastcall *v86)(SimpleHouse *, BlockSource *, char *, signed int); // r7@66
  void (__fastcall *v87)(SimpleHouse *, BlockSource *, const BoundingBox *, _DWORD); // r5@68
  void (__fastcall *v88)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int); // r5@68
  void (__fastcall *v89)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int); // r5@68
  void (__fastcall *v90)(SimpleHouse *, BlockSource *, char *, _DWORD); // r6@68
  void (__fastcall *v91)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v92)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v93)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v94)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v95)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v96)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v97)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v98)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  BlockSource *v99; // r5@68
  void (__fastcall *v100)(SimpleHouse *, BlockSource *, char *, signed int); // r6@68
  void (__fastcall *v101)(SimpleHouse *, BlockSource *, char *, signed int); // r7@70
  void (__fastcall *v102)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int); // r7@71
  void (__fastcall *v103)(SimpleHouse *, BlockSource *, char *, int); // r10@72
  char v104; // r0@72
  void (__fastcall *v105)(SimpleHouse *, BlockSource *, char *, signed int); // r7@72
  unsigned int v106; // ST04_4@72
  void (__fastcall *v107)(SimpleHouse *, BlockSource *, char *, _DWORD); // r6@74
  void (__fastcall *v108)(SimpleHouse *, BlockSource *, char *, signed int); // r6@74
  void (__fastcall *v109)(SimpleHouse *, BlockSource *, char *, signed int); // r6@74
  void (__fastcall *v110)(SimpleHouse *, BlockSource *, char *, signed int); // r6@74
  void (__fastcall *v111)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v112)(SimpleHouse *, BlockSource *, char *, _DWORD); // r5@74
  void (__fastcall *v113)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v114)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v115)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v116)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v117)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v118)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v119)(SimpleHouse *, BlockSource *, char *, signed int); // r5@74
  void (__fastcall *v120)(SimpleHouse *, BlockSource *, char *, _DWORD); // r5@74
  void (__fastcall *v121)(SimpleHouse *, BlockSource *, char *, _DWORD); // r5@74
  void (__fastcall *v122)(SimpleHouse *, BlockSource *, char *, _DWORD); // r6@74
  char v123; // r6@75
  void (__fastcall *v124)(SimpleHouse *, BlockSource *, char *, signed int); // r12@75
  void (__fastcall *v125)(SimpleHouse *, BlockSource *, char *, signed int); // r12@75
  void (__fastcall *v126)(SimpleHouse *, BlockSource *, char *, signed int); // r12@75
  void (__fastcall *v127)(SimpleHouse *, BlockSource *, char *, signed int); // r7@75
  void (__fastcall *v128)(SimpleHouse *, BlockSource *, char *, signed int); // r7@77
  int v129; // r4@78
  void (__fastcall *v130)(SimpleHouse *, BlockSource *, char *, _DWORD); // r6@79
  void (__fastcall *v131)(SimpleHouse *, BlockSource *, char *, signed int); // r6@79
  void (__fastcall *v132)(SimpleHouse *, BlockSource *, char *, signed int); // r6@79
  void (__fastcall *v133)(SimpleHouse *, BlockSource *, char *, signed int); // r6@79
  void (__fastcall *v134)(SimpleHouse *, BlockSource *, char *, signed int); // r6@79
  Random *v136; // [sp+18h] [bp-14B0h]@0
  Random *v137; // [sp+24h] [bp-14A4h]@3
  Random *v138; // [sp+24h] [bp-14A4h]@26
  BlockSource *v139; // [sp+28h] [bp-14A0h]@2
  char v140; // [sp+2Ch] [bp-149Ch]@79
  char v141; // [sp+2Dh] [bp-149Bh]@79
  char v142; // [sp+30h] [bp-1498h]@77
  char v143; // [sp+31h] [bp-1497h]@77
  char v144; // [sp+34h] [bp-1494h]@75
  char v145; // [sp+35h] [bp-1493h]@75
  char v146; // [sp+38h] [bp-1490h]@75
  char v147; // [sp+39h] [bp-148Fh]@75
  char v148; // [sp+3Ch] [bp-148Ch]@75
  char v149; // [sp+3Dh] [bp-148Bh]@75
  char v150; // [sp+40h] [bp-1488h]@75
  char v151; // [sp+41h] [bp-1487h]@75
  char v152; // [sp+44h] [bp-1484h]@74
  char v153; // [sp+45h] [bp-1483h]@74
  char v154; // [sp+48h] [bp-1480h]@74
  char v155; // [sp+49h] [bp-147Fh]@74
  char v156; // [sp+4Ch] [bp-147Ch]@74
  char v157; // [sp+4Dh] [bp-147Bh]@74
  char v158; // [sp+50h] [bp-1478h]@74
  char v159; // [sp+51h] [bp-1477h]@74
  char v160; // [sp+54h] [bp-1474h]@74
  char v161; // [sp+55h] [bp-1473h]@74
  char v162; // [sp+58h] [bp-1470h]@74
  char v163; // [sp+59h] [bp-146Fh]@74
  char v164; // [sp+5Ch] [bp-146Ch]@74
  char v165; // [sp+5Dh] [bp-146Bh]@74
  char v166; // [sp+60h] [bp-1468h]@74
  char v167; // [sp+61h] [bp-1467h]@74
  char v168; // [sp+64h] [bp-1464h]@74
  char v169; // [sp+65h] [bp-1463h]@74
  char v170; // [sp+68h] [bp-1460h]@74
  char v171; // [sp+69h] [bp-145Fh]@74
  char v172; // [sp+6Ch] [bp-145Ch]@74
  char v173; // [sp+6Dh] [bp-145Bh]@74
  char v174; // [sp+70h] [bp-1458h]@74
  char v175; // [sp+71h] [bp-1457h]@74
  char v176; // [sp+74h] [bp-1454h]@74
  char v177; // [sp+75h] [bp-1453h]@74
  char v178; // [sp+78h] [bp-1450h]@74
  char v179; // [sp+79h] [bp-144Fh]@74
  char v180; // [sp+7Ch] [bp-144Ch]@74
  char v181; // [sp+7Dh] [bp-144Bh]@74
  char v182; // [sp+80h] [bp-1448h]@74
  char v183; // [sp+81h] [bp-1447h]@74
  char v184; // [sp+84h] [bp-1444h]@72
  char v185; // [sp+85h] [bp-1443h]@72
  char v186; // [sp+88h] [bp-1440h]@72
  char v187; // [sp+89h] [bp-143Fh]@72
  char v188; // [sp+8Ch] [bp-143Ch]@71
  char v189; // [sp+8Dh] [bp-143Bh]@71
  char v190; // [sp+90h] [bp-1438h]@71
  char v191; // [sp+91h] [bp-1437h]@71
  char v192; // [sp+94h] [bp-1434h]@70
  char v193; // [sp+95h] [bp-1433h]@70
  char v194; // [sp+98h] [bp-1430h]@69
  char v195; // [sp+9Ch] [bp-142Ch]@68
  char v196; // [sp+A0h] [bp-1428h]@68
  char v197; // [sp+A1h] [bp-1427h]@68
  char v198; // [sp+A4h] [bp-1424h]@68
  char v199; // [sp+A5h] [bp-1423h]@68
  char v200; // [sp+A8h] [bp-1420h]@68
  char v201; // [sp+A9h] [bp-141Fh]@68
  char v202; // [sp+ACh] [bp-141Ch]@68
  char v203; // [sp+ADh] [bp-141Bh]@68
  char v204; // [sp+B0h] [bp-1418h]@68
  char v205; // [sp+B1h] [bp-1417h]@68
  char v206; // [sp+B4h] [bp-1414h]@68
  char v207; // [sp+B5h] [bp-1413h]@68
  char v208; // [sp+B8h] [bp-1410h]@68
  char v209; // [sp+B9h] [bp-140Fh]@68
  char v210; // [sp+BCh] [bp-140Ch]@68
  char v211; // [sp+BDh] [bp-140Bh]@68
  char v212; // [sp+C0h] [bp-1408h]@68
  char v213; // [sp+C1h] [bp-1407h]@68
  char v214; // [sp+C4h] [bp-1404h]@68
  char v215; // [sp+C5h] [bp-1403h]@68
  char v216; // [sp+C8h] [bp-1400h]@68
  char v217; // [sp+C9h] [bp-13FFh]@68
  char v218; // [sp+CCh] [bp-13FCh]@68
  char v219; // [sp+CDh] [bp-13FBh]@68
  char v220; // [sp+D0h] [bp-13F8h]@68
  char v221; // [sp+D1h] [bp-13F7h]@68
  char v222; // [sp+D4h] [bp-13F4h]@68
  char v223; // [sp+D5h] [bp-13F3h]@68
  char v224; // [sp+D8h] [bp-13F0h]@68
  char v225; // [sp+D9h] [bp-13EFh]@68
  char v226; // [sp+DCh] [bp-13ECh]@68
  char v227; // [sp+DDh] [bp-13EBh]@68
  char v228; // [sp+E0h] [bp-13E8h]@32
  char v229; // [sp+E1h] [bp-13E7h]@32
  char v230; // [sp+E4h] [bp-13E4h]@32
  char v231; // [sp+E5h] [bp-13E3h]@32
  char v232; // [sp+E8h] [bp-13E0h]@32
  char v233; // [sp+E9h] [bp-13DFh]@32
  char v234; // [sp+ECh] [bp-13DCh]@32
  char v235; // [sp+EDh] [bp-13DBh]@32
  unsigned int v236; // [sp+F0h] [bp-13D8h]@26
  unsigned int v237; // [sp+F4h] [bp-13D4h]@26
  int v238; // [sp+AB4h] [bp-A14h]@26
  char v239; // [sp+AB8h] [bp-A10h]@26
  int v240; // [sp+ABCh] [bp-A0Ch]@26
  int v241; // [sp+AC0h] [bp-A08h]@28
  char v242; // [sp+AC8h] [bp-A00h]@31
  char v243; // [sp+AC9h] [bp-9FFh]@31
  char v244; // [sp+149Ch] [bp-2Ch]@34
  char v245; // [sp+149Dh] [bp-2Bh]@34
  char v246; // [sp+14A0h] [bp-28h]@31
  char v247; // [sp+14A1h] [bp-27h]@31

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)this + 9) > -1 )
    goto LABEL_26;
  v8 = *((_DWORD *)this + 3);
  v9 = this;
  v10 = *((_DWORD *)this + 6);
  v139 = a2;
  if ( v8 > v10 )
    goto LABEL_83;
  v11 = *((_DWORD *)v4 + 4);
  v12 = 0;
  v13 = 0;
  v137 = a3;
  do
  {
    v14 = *((_DWORD *)v9 + 1);
    if ( v14 <= v11 )
    {
      do
      {
        v15 = v14;
        v16 = *(_QWORD *)v5;
        v17 = *((_QWORD *)v5 + 1) >> 32;
        v18 = *((_QWORD *)v5 + 1);
        v20 = __OFSUB__(v17, v14);
        v19 = v17 - v14 < 0;
        v21 = 0;
        v22 = *((_QWORD *)v5 + 2);
        if ( !(v19 ^ v20) )
          v21 = 1;
        v23 = 0;
        if ( (signed int)v16 <= v15 )
          v23 = 1;
        v20 = __OFSUB__(v18, v8);
        v24 = v18 == v8;
        v19 = v18 - v8 < 0;
        v25 = 0;
        if ( (unsigned __int8)(v19 ^ v20) | v24 )
          v25 = 1;
        v26 = 0;
        if ( SHIDWORD(v22) >= v8 )
          v26 = 1;
        v27 = 0;
        if ( SHIDWORD(v16) < 65 )
          v27 = 1;
        if ( (signed int)v22 >= 64 && (v21 & v23 & v25 & v26 & v27) == 1 )
        {
          v28 = j_BlockSource::getAboveTopSolidBlock(v139, v15, v8, 0, 0);
          ++v12;
          if ( v28 < 64 )
            v28 = 64;
          v11 = *((_DWORD *)v9 + 4);
          v13 += v28;
        }
        v14 = v15 + 1;
      }
      while ( v15 < v11 );
      v10 = *((_DWORD *)v9 + 6);
    }
    v20 = __OFSUB__(v8, v10);
    v19 = v8++ - v10 < 0;
  }
  while ( v19 ^ v20 );
  v6 = v137;
  if ( !v12 )
LABEL_83:
    *((_DWORD *)v9 + 9) = -1;
    return 1;
  v29 = v13 / v12;
  v4 = v9;
  *((_DWORD *)v9 + 9) = v29;
  if ( v29 >= 0 )
    v7 = v139;
    *((_DWORD *)v9 + 2) += v29 - *((_DWORD *)v9 + 5) + 5;
    *((_DWORD *)v9 + 5) = v29 + 5;
LABEL_26:
    v30 = *(_DWORD *)v6;
    v236 = v30;
    v238 = 625;
    v31 = 0;
    v32 = 1;
    v239 = 0;
    v240 = 0;
    v138 = v6;
    v237 = v30;
    do
      v33 = v30 ^ (v30 >> 30);
      v34 = (int *)(&v236 + v31);
      v35 = v31++ + 1812433253 * v33;
      v30 = v32++ + 1812433253 * v33;
      v34[2] = v35 + 1;
    while ( v31 != 397 );
    v238 = 624;
    v241 = 398;
    v36 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v36 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 0, 0, 4, 0, 4, 0, v136, v36);
    else
      v242 = *(_BYTE *)(Block::mCobblestone + 4);
      v243 = 0;
      v246 = *(_BYTE *)(Block::mCobblestone + 4);
      v247 = 0;
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 0, 0, 4, 0, 4, (int)&v242, (int)v136, 0);
    v37 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v234 = *(_BYTE *)(Block::mLog + 4);
    v235 = 0;
    v232 = *(_BYTE *)(Block::mLog + 4);
    v233 = 0;
    v37(v4, v7, v5, 0);
    v38 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v230 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v231 = 0;
    v228 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v229 = 0;
    v38(v4, v7, v5, 1);
    v39 = *((_DWORD *)v4 + 12);
    v40 = *(_BYTE *)(Block::mCobblestone + 4);
    j___aeabi_memcpy8_0((int)&v242, (int)&v236, 2516);
    if ( v39 )
      (*(void (__fastcall **)(int, char *, _DWORD, signed int))(*(_DWORD *)v39 + 8))(v39, &v242, 0, 1);
      v41 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v39 + 4);
      v247 = *(_BYTE *)(v39 + 5);
      v41(v4, v7, &v246, 0);
      v42 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v244 = v40;
      v245 = 0;
      v42(v4, v7, &v244, 0);
    v43 = *((_DWORD *)v4 + 12);
    v44 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v43 )
      (*(void (__fastcall **)(int, char *, _DWORD, signed int))(*(_DWORD *)v43 + 8))(v43, &v242, 0, 2);
      v45 = &v246;
      v46 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v43 + 4);
      v247 = *(_BYTE *)(v43 + 5);
      v244 = v44;
      v45 = &v244;
    v46(v4, v7, v45, 0);
    v47 = *((_DWORD *)v4 + 12);
    v48 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v47 )
      (*(void (__fastcall **)(int, char *, _DWORD, signed int))(*(_DWORD *)v47 + 8))(v47, &v242, 0, 3);
      v49 = &v246;
      v50 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v47 + 4);
      v247 = *(_BYTE *)(v47 + 5);
      v244 = v48;
      v49 = &v244;
    v50(v4, v7, v49, 0);
    v51 = *((_DWORD *)v4 + 12);
    v52 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v51 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v51 + 8))(v51, &v242, 4, 1);
      v53 = &v246;
      v54 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v51 + 4);
      v247 = *(_BYTE *)(v51 + 5);
      v244 = v52;
      v53 = &v244;
    v54(v4, v7, v53, 4);
    v55 = *((_DWORD *)v4 + 12);
    v56 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v55 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v55 + 8))(v55, &v242, 4, 2);
      v57 = &v246;
      v58 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v55 + 4);
      v247 = *(_BYTE *)(v55 + 5);
      v244 = v56;
      v57 = &v244;
    v58(v4, v7, v57, 4);
    v59 = *((_DWORD *)v4 + 12);
    v60 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v59 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v59 + 8))(v59, &v242, 4, 3);
      v61 = &v246;
      v62 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v59 + 4);
      v247 = *(_BYTE *)(v59 + 5);
      v244 = v60;
      v61 = &v244;
    v62(v4, v7, v61, 4);
    v63 = *((_DWORD *)v4 + 12);
    v64 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v63 )
      (*(void (__fastcall **)(int, char *, _DWORD, signed int))(*(_DWORD *)v63 + 8))(v63, &v242, 0, 1);
      v65 = &v246;
      v66 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v63 + 4);
      v247 = *(_BYTE *)(v63 + 5);
      v244 = v64;
      v65 = &v244;
    v66(v4, v7, v65, 0);
    v67 = *((_DWORD *)v4 + 12);
    v68 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v67 )
      (*(void (__fastcall **)(int, char *, _DWORD, signed int))(*(_DWORD *)v67 + 8))(v67, &v242, 0, 2);
      v69 = &v246;
      v70 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v67 + 4);
      v247 = *(_BYTE *)(v67 + 5);
      v244 = v68;
      v69 = &v244;
    v70(v4, v7, v69, 0);
    v71 = *((_DWORD *)v4 + 12);
    v72 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v71 )
      (*(void (__fastcall **)(int, char *, _DWORD, signed int))(*(_DWORD *)v71 + 8))(v71, &v242, 0, 3);
      v73 = &v246;
      v74 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v71 + 4);
      v247 = *(_BYTE *)(v71 + 5);
      v244 = v72;
      v73 = &v244;
    v74(v4, v7, v73, 0);
    v75 = *((_DWORD *)v4 + 12);
    v76 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v75 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v75 + 8))(v75, &v242, 4, 1);
      v77 = &v246;
      v78 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v75 + 4);
      v247 = *(_BYTE *)(v75 + 5);
      v244 = v76;
      v77 = &v244;
    v78(v4, v7, v77, 4);
    v79 = *((_DWORD *)v4 + 12);
    v80 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v79 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v79 + 8))(v79, &v242, 4, 2);
      v81 = &v246;
      v82 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v79 + 4);
      v247 = *(_BYTE *)(v79 + 5);
      v244 = v80;
      v81 = &v244;
    v82(v4, v7, v81, 4);
    v83 = *((_DWORD *)v4 + 12);
    v84 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v83 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v83 + 8))(v83, &v242, 4, 3);
      v85 = &v246;
      v86 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v246 = *(_BYTE *)(v83 + 4);
      v247 = *(_BYTE *)(v83 + 5);
      v244 = v84;
      v85 = &v244;
    v86(v4, v7, v85, 4);
    v87 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v226 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v227 = 0;
    v224 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v225 = 0;
    v87(v4, v7, v5, 0);
    v88 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v222 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v223 = 0;
    v220 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v221 = 0;
    v88(v4, v7, v5, 4);
    v89 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v218 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v219 = 0;
    v216 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v217 = 0;
    v89(v4, v7, v5, 1);
    v90 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v214 = *(_BYTE *)(Block::mGlassPane + 4);
    v215 = 0;
    v90(v4, v7, &v214, 0);
    v91 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v212 = *(_BYTE *)(Block::mGlassPane + 4);
    v213 = 0;
    v91(v4, v7, &v212, 2);
    v92 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v210 = *(_BYTE *)(Block::mGlassPane + 4);
    v211 = 0;
    v92(v4, v7, &v210, 4);
    v93 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v208 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v209 = 0;
    v93(v4, v7, &v208, 1);
    v94 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v206 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v207 = 0;
    v94(v4, v7, &v206, 1);
    v95 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v204 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v205 = 0;
    v95(v4, v7, &v204, 1);
    v96 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v202 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v203 = 0;
    v96(v4, v7, &v202, 2);
    v97 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v200 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v201 = 0;
    v97(v4, v7, &v200, 3);
    v98 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v99 = v7;
    v198 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v199 = 0;
    v98(v4, v7, &v198, 3);
    v100 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v196 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v197 = 0;
    v100(v4, v7, &v196, 3);
    j_StructurePiece::getBlock((StructurePiece *)&v195, v4, (int)v7, 2, 0, (const BoundingBox *)0xFFFFFFFF, (int)v5);
    if ( !v195 )
      j_StructurePiece::getBlock((StructurePiece *)&v194, v4, (int)v7, 2, -1, (const BoundingBox *)0xFFFFFFFF, (int)v5);
      if ( v194 )
        v101 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v192 = *(_BYTE *)(Block::mStoneStairs + 4);
        v193 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
        v101(v4, v7, &v192, 2);
    v102 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v190 = BlockID::AIR;
    v188 = BlockID::AIR;
    v191 = 0;
    v189 = 0;
    v102(v4, v7, v5, 1);
    if ( *((_BYTE *)v4 + 47) )
      v103 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
      v186 = *(_BYTE *)(Block::mWeb + 4);
      v187 = 0;
      v104 = j_Random::_genRandInt32(v138);
      v103(v4, v7, &v186, (v104 & 1) + 1);
      v105 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v184 = *(_BYTE *)(Block::mWeb + 4);
      v185 = 0;
      v106 = (j_Random::_genRandInt32(v138) & 1) + 1;
      v105(v4, v7, &v184, 1);
    if ( *((_BYTE *)v4 + 52) )
      v107 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v182 = *(_BYTE *)(Block::mFence + 4);
      v183 = 0;
      v107(v4, v7, &v182, 0);
      v108 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v180 = *(_BYTE *)(Block::mFence + 4);
      v181 = 0;
      v108(v4, v7, &v180, 1);
      v109 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v178 = *(_BYTE *)(Block::mFence + 4);
      v179 = 0;
      v109(v4, v7, &v178, 2);
      v110 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v176 = *(_BYTE *)(Block::mFence + 4);
      v177 = 0;
      v110(v4, v7, &v176, 3);
      v111 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v174 = *(_BYTE *)(Block::mFence + 4);
      v175 = 0;
      v111(v4, v7, &v174, 4);
      v112 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v172 = *(_BYTE *)(Block::mFence + 4);
      v173 = 0;
      v112(v4, v7, &v172, 0);
      v113 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v170 = *(_BYTE *)(Block::mFence + 4);
      v171 = 0;
      v113(v4, v7, &v170, 1);
      v114 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v168 = *(_BYTE *)(Block::mFence + 4);
      v169 = 0;
      v114(v4, v7, &v168, 2);
      v115 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v166 = *(_BYTE *)(Block::mFence + 4);
      v167 = 0;
      v115(v4, v7, &v166, 3);
      v116 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v164 = *(_BYTE *)(Block::mFence + 4);
      v165 = 0;
      v116(v4, v7, &v164, 4);
      v117 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v162 = *(_BYTE *)(Block::mFence + 4);
      v163 = 0;
      v117(v4, v7, &v162, 4);
      v118 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v160 = *(_BYTE *)(Block::mFence + 4);
      v161 = 0;
      v118(v4, v7, &v160, 4);
      v119 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v158 = *(_BYTE *)(Block::mFence + 4);
      v159 = 0;
      v119(v4, v7, &v158, 4);
      v120 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v156 = *(_BYTE *)(Block::mFence + 4);
      v157 = 0;
      v120(v4, v7, &v156, 0);
      v121 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v154 = *(_BYTE *)(Block::mFence + 4);
      v155 = 0;
      v121(v4, v7, &v154, 0);
      v99 = v7;
      v122 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v152 = *(_BYTE *)(Block::mFence + 4);
      v153 = 0;
      v122(v4, v7, &v152, 0);
      if ( *((_BYTE *)v4 + 52) )
        v123 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mLadder, 3);
        v124 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v150 = *(_BYTE *)(Block::mLadder + 4);
        v151 = v123;
        v124(v4, v7, &v150, 3);
        v125 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v148 = *(_BYTE *)(Block::mLadder + 4);
        v149 = v123;
        v125(v4, v7, &v148, 3);
        v126 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v146 = *(_BYTE *)(Block::mLadder + 4);
        v147 = v123;
        v126(v4, v7, &v146, 3);
        v127 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v144 = *(_BYTE *)(Block::mLadder + 4);
        v145 = v123;
        v127(v4, v7, &v144, 3);
    if ( !*((_BYTE *)v4 + 47) )
      v128 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v142 = *(_BYTE *)(Block::mTorch + 4);
      v143 = j_StructurePiece::getTorchData(v4, 0);
      v128(v4, v99, &v142, 2);
    v129 = 0;
      j_StructurePiece::generateAirColumnUp(v4, v99, 0, 6, v129, v5);
      v130 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 44);
      v140 = *(_BYTE *)(Block::mCobblestone + 4);
      v141 = 0;
      v130(v4, v99, &v140, 0);
      j_StructurePiece::generateAirColumnUp(v4, v99, 1, 6, v129, v5);
      v131 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v131(v4, v99, &v140, 1);
      j_StructurePiece::generateAirColumnUp(v4, v99, 2, 6, v129, v5);
      v132 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v132(v4, v99, &v140, 2);
      j_StructurePiece::generateAirColumnUp(v4, v99, 3, 6, v129, v5);
      v133 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v133(v4, v99, &v140, 3);
      j_StructurePiece::generateAirColumnUp(v4, v99, 4, 6, v129, v5);
      v134 = *(void (__fastcall **)(SimpleHouse *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v134(v4, v99, &v140, 4);
      ++v129;
    while ( v129 != 5 );
  return 1;
}


int __fastcall SimpleHouse::SimpleHouse(int result)
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
  *(_DWORD *)result = &off_2724350;
  return result;
}


unsigned int __fastcall SimpleHouse::createPiece(_DWORD *a1, int a2, __int64 *a3, Random *a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // r10@1
  Random *v10; // r8@1
  __int64 *v11; // r6@1
  int v12; // r7@1
  unsigned int result; // r0@1
  _DWORD *v14; // r6@3
  unsigned int v15; // r0@4
  int v16; // r0@6
  int v17; // [sp+20h] [bp-38h]@1
  int v18; // [sp+24h] [bp-34h]@6
  int v19; // [sp+28h] [bp-30h]@6
  int v20; // [sp+2Ch] [bp-2Ch]@6
  int v21; // [sp+30h] [bp-28h]@6
  int v22; // [sp+34h] [bp-24h]@6

  v9 = a1;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  j_BoundingBox::orientBox((BoundingBox *)&v17, a5, a6, a7, 0, 0, 0, 5, 6, 5, a8);
  result = j_StructurePiece::findCollisionPiece(v11, (int)&v17);
  if ( result )
  {
    *v9 = 0;
  }
  else
    v14 = j_operator new(0x38u);
    v14[5] = 0;
    v14[6] = 0;
    v14[3] = 0;
    v14[4] = 0;
    v14[1] = 0;
    v14[2] = 0;
    v14[7] = 255;
    v14[8] = a9;
    *v14 = &off_27242B8;
    v14[11] = 0;
    v14[12] = 0;
    v14[9] = -1;
    v14[10] = 0;
    if ( v12 )
    {
      v15 = *(_DWORD *)(v12 + 44);
      *((_BYTE *)v14 + 44) = v15;
      *((_BYTE *)v14 + 45) = BYTE1(v15);
      *((_BYTE *)v14 + 46) = v15 >> 16;
      *((_BYTE *)v14 + 47) = BYTE3(v15);
      if ( v15 >> 24 )
        v14[12] = &VillagePiece::mossyStoneSelector;
    }
    *v14 = &off_2724350;
    v16 = v17;
    v14[7] = a8;
    v14[1] = v16;
    v14[2] = v18;
    v14[3] = v19;
    v14[4] = v20;
    v14[5] = v21;
    v14[6] = v22;
    result = (j_Random::_genRandInt32(v10) >> 27) & 1;
    *((_BYTE *)v14 + 52) = result;
    *v9 = v14;
  return result;
}
