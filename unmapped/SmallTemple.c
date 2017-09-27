

int __fastcall SmallTemple::SmallTemple(int result)
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
  *(_DWORD *)result = &off_272439C;
  return result;
}


signed int __fastcall SmallTemple::postProcess(SmallTemple *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SmallTemple *v4; // r10@1
  const BoundingBox *v5; // r8@1
  Random *v6; // r11@1
  BlockSource *v7; // r9@1
  int v8; // r7@2
  SmallTemple *v9; // r4@2
  int v10; // r0@2
  int v11; // r12@3
  signed int v12; // r10@3
  SmallTemple *v13; // r11@3
  signed int v14; // r9@3
  int v15; // r2@4
  int v16; // r4@5
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
  signed int v27; // r6@11
  signed int v28; // r5@13
  int v29; // r0@17
  int v30; // r0@24
  int v31; // r5@26
  signed int v32; // r6@26
  void (__fastcall *v33)(SmallTemple *, BlockSource *, const BoundingBox *, signed int); // r12@26
  void (__fastcall *v34)(SmallTemple *, BlockSource *, const BoundingBox *, signed int); // r7@26
  unsigned int v35; // r0@26
  int v36; // r0@27
  int *v37; // r7@27
  int v38; // r3@27
  BlockSelector *v39; // r0@28
  BlockSelector *v40; // r0@32
  BlockSelector *v41; // r0@35
  BlockSelector *v42; // r0@38
  BlockSelector *v43; // r0@41
  BlockSelector *v44; // r0@44
  BlockSelector *v45; // r0@47
  BlockSelector *v46; // r0@50
  BlockSelector *v47; // r0@53
  BlockSelector *v48; // r0@56
  BlockSelector *v49; // r0@59
  int v50; // r4@62
  char v51; // r5@62
  void (__fastcall *v52)(SmallTemple *, BlockSource *, int *, _DWORD); // r7@63
  int *v53; // r4@63
  int v54; // r4@65
  char v55; // r5@65
  void (__fastcall *v56)(SmallTemple *, BlockSource *, int *, signed int); // r7@66
  int *v57; // r4@66
  int v58; // r4@68
  char v59; // r5@68
  void (__fastcall *v60)(SmallTemple *, BlockSource *, int *, signed int); // r7@69
  int *v61; // r4@69
  int v62; // r4@71
  char v63; // r5@71
  void (__fastcall *v64)(SmallTemple *, BlockSource *, int *, signed int); // r7@72
  int *v65; // r4@72
  int v66; // r4@74
  char v67; // r5@74
  void (__fastcall *v68)(SmallTemple *, BlockSource *, int *, signed int); // r7@75
  int *v69; // r4@75
  int v70; // r4@77
  char v71; // r5@77
  void (__fastcall *v72)(SmallTemple *, BlockSource *, int *, signed int); // r7@78
  int *v73; // r4@78
  int v74; // r4@80
  char v75; // r5@80
  void (__fastcall *v76)(SmallTemple *, BlockSource *, int *, signed int); // r7@81
  int *v77; // r4@81
  int v78; // r4@83
  char v79; // r5@83
  void (__fastcall *v80)(SmallTemple *, BlockSource *, int *, signed int); // r7@84
  int *v81; // r4@84
  int v82; // r4@86
  char v83; // r5@86
  int v84; // r0@87
  void (__fastcall *v85)(SmallTemple *, BlockSource *, int *, signed int); // r7@87
  int *v86; // r4@87
  int v87; // r0@88
  void (__fastcall *v88)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  char v89; // r7@89
  char v90; // r0@89
  void (__fastcall *v91)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  char v92; // r7@89
  char v93; // r0@89
  void (__fastcall *v94)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  char v95; // r7@89
  char v96; // r0@89
  void (__fastcall *v97)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  char v98; // r7@89
  char v99; // r0@89
  void (__fastcall *v100)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  char v101; // r7@89
  char v102; // r0@89
  void (__fastcall *v103)(SmallTemple *, BlockSource *, char *, _DWORD); // r6@89
  void (__fastcall *v104)(SmallTemple *, BlockSource *, char *, _DWORD); // r6@89
  void (__fastcall *v105)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v106)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v107)(SmallTemple *, BlockSource *, char *, _DWORD); // r6@89
  void (__fastcall *v108)(SmallTemple *, BlockSource *, char *, _DWORD); // r6@89
  void (__fastcall *v109)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v110)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v111)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v112)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v113)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v114)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v115)(SmallTemple *, BlockSource *, char *, _DWORD); // r6@89
  void (__fastcall *v116)(SmallTemple *, BlockSource *, char *, signed int); // r6@89
  void (__fastcall *v117)(SmallTemple *, BlockSource *, char *, signed int); // r7@89
  void (__fastcall *v118)(SmallTemple *, BlockSource *, char *, signed int); // r7@90
  char v119; // r5@90
  char v120; // r0@90
  void (__fastcall *v121)(SmallTemple *, BlockSource *, char *, signed int); // r5@90
  char v122; // r0@90
  void (__fastcall *v123)(SmallTemple *, BlockSource *, char *, signed int); // r5@90
  char v124; // r0@90
  char v125; // r6@90
  void (__fastcall *v126)(SmallTemple *, BlockSource *, char *, signed int); // r5@90
  char v127; // r0@90
  char v128; // r7@91
  void (__fastcall *v129)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v130)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v131)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v132)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v133)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v134)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v135)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v136)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v137)(SmallTemple *, BlockSource *, char *, signed int); // r5@91
  void (__fastcall *v138)(SmallTemple *, BlockSource *, __int16 *, signed int); // r7@91
  void (__fastcall *v139)(SmallTemple *, BlockSource *, __int16 *, signed int); // r7@91
  void (__fastcall *v140)(SmallTemple *, BlockSource *, const BoundingBox *, Random *); // r4@92
  void (__fastcall *v141)(SmallTemple *, BlockSource *, char *, signed int); // r5@95
  char v142; // r6@95
  char v143; // r0@95
  int v144; // r5@96
  void (__fastcall *v145)(SmallTemple *, BlockSource *, char *, _DWORD); // r4@97
  void (__fastcall *v146)(SmallTemple *, BlockSource *, char *, signed int); // r4@97
  void (__fastcall *v147)(SmallTemple *, BlockSource *, char *, signed int); // r4@97
  void (__fastcall *v148)(SmallTemple *, BlockSource *, char *, signed int); // r4@97
  void (__fastcall *v149)(SmallTemple *, BlockSource *, char *, signed int); // r4@97
  int v151; // [sp+8h] [bp-1490h]@36
  int v152; // [sp+8h] [bp-1490h]@45
  int v153; // [sp+8h] [bp-1490h]@48
  int v154; // [sp+8h] [bp-1490h]@51
  int v155; // [sp+8h] [bp-1490h]@54
  int v156; // [sp+Ch] [bp-148Ch]@26
  int v157; // [sp+10h] [bp-1488h]@26
  char *v158; // [sp+14h] [bp-1484h]@26
  char *v159; // [sp+18h] [bp-1480h]@26
  int v160; // [sp+1Ch] [bp-147Ch]@26
  Random *v161; // [sp+2Ch] [bp-146Ch]@3
  BlockSource *v162; // [sp+30h] [bp-1468h]@2
  char v163; // [sp+34h] [bp-1464h]@97
  char v164; // [sp+35h] [bp-1463h]@97
  char v165; // [sp+38h] [bp-1460h]@95
  char v166; // [sp+39h] [bp-145Fh]@95
  char v167; // [sp+3Ch] [bp-145Ch]@94
  char v168; // [sp+40h] [bp-1458h]@93
  __int16 v169; // [sp+44h] [bp-1454h]@91
  __int16 v170; // [sp+48h] [bp-1450h]@91
  char v171; // [sp+4Ch] [bp-144Ch]@91
  char v172; // [sp+4Dh] [bp-144Bh]@91
  char v173; // [sp+50h] [bp-1448h]@90
  char v174; // [sp+51h] [bp-1447h]@90
  char v175; // [sp+54h] [bp-1444h]@90
  char v176; // [sp+55h] [bp-1443h]@90
  char v177; // [sp+58h] [bp-1440h]@90
  char v178; // [sp+59h] [bp-143Fh]@90
  char v179; // [sp+5Ch] [bp-143Ch]@90
  char v180; // [sp+5Dh] [bp-143Bh]@90
  char v181; // [sp+60h] [bp-1438h]@89
  char v182; // [sp+61h] [bp-1437h]@89
  char v183; // [sp+64h] [bp-1434h]@89
  char v184; // [sp+65h] [bp-1433h]@89
  char v185; // [sp+68h] [bp-1430h]@89
  char v186; // [sp+69h] [bp-142Fh]@89
  char v187; // [sp+6Ch] [bp-142Ch]@89
  char v188; // [sp+6Dh] [bp-142Bh]@89
  char v189; // [sp+70h] [bp-1428h]@89
  char v190; // [sp+71h] [bp-1427h]@89
  char v191; // [sp+74h] [bp-1424h]@89
  char v192; // [sp+75h] [bp-1423h]@89
  char v193; // [sp+78h] [bp-1420h]@89
  char v194; // [sp+79h] [bp-141Fh]@89
  char v195; // [sp+7Ch] [bp-141Ch]@89
  char v196; // [sp+7Dh] [bp-141Bh]@89
  char v197; // [sp+80h] [bp-1418h]@89
  char v198; // [sp+81h] [bp-1417h]@89
  char v199; // [sp+84h] [bp-1414h]@89
  char v200; // [sp+85h] [bp-1413h]@89
  char v201; // [sp+88h] [bp-1410h]@89
  char v202; // [sp+89h] [bp-140Fh]@89
  char v203; // [sp+8Ch] [bp-140Ch]@89
  char v204; // [sp+8Dh] [bp-140Bh]@89
  char v205; // [sp+90h] [bp-1408h]@89
  char v206; // [sp+91h] [bp-1407h]@89
  char v207; // [sp+94h] [bp-1404h]@89
  char v208; // [sp+95h] [bp-1403h]@89
  char v209; // [sp+98h] [bp-1400h]@89
  char v210; // [sp+99h] [bp-13FFh]@89
  char v211; // [sp+9Ch] [bp-13FCh]@89
  char v212; // [sp+9Dh] [bp-13FBh]@89
  char v213; // [sp+A0h] [bp-13F8h]@89
  char v214; // [sp+A1h] [bp-13F7h]@89
  char v215; // [sp+A4h] [bp-13F4h]@89
  char v216; // [sp+A5h] [bp-13F3h]@89
  char v217; // [sp+A8h] [bp-13F0h]@89
  char v218; // [sp+A9h] [bp-13EFh]@89
  char v219; // [sp+ACh] [bp-13ECh]@89
  char v220; // [sp+ADh] [bp-13EBh]@89
  unsigned int v221; // [sp+B0h] [bp-13E8h]@26
  unsigned int v222; // [sp+B4h] [bp-13E4h]@26
  int v223; // [sp+A74h] [bp-A24h]@26
  char v224; // [sp+A78h] [bp-A20h]@26
  int v225; // [sp+A7Ch] [bp-A1Ch]@26
  int v226; // [sp+A80h] [bp-A18h]@28
  char v227; // [sp+A88h] [bp-A10h]@26
  char v228; // [sp+A89h] [bp-A0Fh]@26
  char v229; // [sp+A8Ch] [bp-A0Ch]@26
  char v230; // [sp+A8Dh] [bp-A0Bh]@26
  char v231; // [sp+A90h] [bp-A08h]@26
  char v232; // [sp+A91h] [bp-A07h]@26
  char v233; // [sp+A94h] [bp-A04h]@26
  char v234; // [sp+A95h] [bp-A03h]@26
  char v235; // [sp+A98h] [bp-A00h]@31
  char v236; // [sp+A99h] [bp-9FFh]@31
  char v237; // [sp+146Ch] [bp-2Ch]@64
  char v238; // [sp+146Dh] [bp-2Bh]@64
  char v239; // [sp+1470h] [bp-28h]@31
  char v240; // [sp+1471h] [bp-27h]@31

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)this + 9) > -1 )
    goto LABEL_26;
  v8 = *((_DWORD *)this + 3);
  v9 = this;
  v10 = *((_DWORD *)this + 6);
  v162 = a2;
  if ( v8 > v10 )
    goto LABEL_101;
  v11 = *((_DWORD *)v4 + 4);
  v12 = 0;
  v161 = a3;
  v13 = v9;
  v14 = 0;
  do
  {
    v15 = *((_DWORD *)v13 + 1);
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
        v21 = __OFSUB__(v19, v8);
        v25 = v19 == v8;
        v20 = v19 - v8 < 0;
        v26 = 0;
        if ( (unsigned __int8)(v20 ^ v21) | v25 )
          v26 = 1;
        v27 = 0;
        if ( SHIDWORD(v23) >= v8 )
          v27 = 1;
        v28 = 0;
        if ( SHIDWORD(v17) < 65 )
          v28 = 1;
        if ( (signed int)v23 >= 64 && (v22 & v24 & v26 & v27 & v28) == 1 )
        {
          v29 = j_BlockSource::getAboveTopSolidBlock(v162, v16, v8, 0, 0);
          ++v12;
          if ( v29 < 64 )
            v29 = 64;
          v11 = *((_DWORD *)v13 + 4);
          v14 += v29;
        }
        v15 = v16 + 1;
      }
      while ( v16 < v11 );
      v10 = *((_DWORD *)v13 + 6);
    }
    v21 = __OFSUB__(v8, v10);
    v20 = v8++ - v10 < 0;
  }
  while ( v20 ^ v21 );
  v9 = v13;
  v6 = v161;
  if ( !v12 )
LABEL_101:
    *((_DWORD *)v9 + 9) = -1;
    return 1;
  v30 = v14 / v12;
  v4 = v9;
  *((_DWORD *)v9 + 9) = v30;
  if ( v30 >= 0 )
    v7 = v162;
    *((_DWORD *)v9 + 2) += v30 - *((_DWORD *)v9 + 5) + 11;
    *((_DWORD *)v9 + 5) = v30 + 11;
LABEL_26:
    v31 = 0;
    v32 = 1;
    v33 = *(void (__fastcall **)(SmallTemple *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v233 = BlockID::AIR;
    v231 = BlockID::AIR;
    v234 = 0;
    v232 = 0;
    v156 = 3;
    v157 = 7;
    v158 = &v233;
    v159 = &v231;
    v160 = 0;
    v33(v4, v7, v5, 1);
    v34 = *(void (__fastcall **)(SmallTemple *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v229 = BlockID::AIR;
    v227 = BlockID::AIR;
    v230 = 0;
    v228 = 0;
    v156 = 9;
    v157 = 3;
    v158 = &v229;
    v159 = &v227;
    v34(v4, v7, v5, 1);
    v35 = *(_DWORD *)v6;
    v221 = v35;
    v223 = 625;
    v224 = 0;
    v225 = 0;
    v222 = v35;
    do
      v36 = v35 ^ (v35 >> 30);
      v37 = (int *)(&v221 + v31);
      v38 = v31++ + 1812433253 * v36;
      v35 = v32++ + 1812433253 * v36;
      v37[2] = v38 + 1;
    while ( v31 != 397 );
    v223 = 624;
    v226 = 398;
    v39 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v39 )
      j_StructurePiece::generateBox(v4, v7, v5, 1, 0, 0, 3, 0, 8, 0, (Random *)&v221, v39);
    else
      v235 = *(_BYTE *)(Block::mCobblestone + 4);
      v236 = 0;
      v239 = *(_BYTE *)(Block::mCobblestone + 4);
      v240 = 0;
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 1, 0, 0, 3, 0, 8, (int)&v235, (int)&v239, 0);
    v40 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v40 )
      j_StructurePiece::generateBox(v4, v7, v5, 1, 1, 0, 3, 10, 0, 0, (Random *)&v221, v40);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 1, 1, 0, 3, 10, 0, (int)&v235, (int)&v239, 0);
    v41 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v41 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 1, 1, 0, 10, 3, 0, (Random *)&v221, v41);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 1, 1, 0, 10, 3, (int)&v235, (int)&v239, 0);
    v42 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v42 )
      j_StructurePiece::generateBox(v4, v7, v5, 4, 1, 1, 4, 10, 3, 0, (Random *)&v221, v42);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 4, 1, 1, v151, 10, 3, (int)&v235, (int)&v239, 0);
    v43 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v43 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 0, 4, 0, 4, 7, 0, (Random *)&v221, v43);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 0, 4, 0, 4, 7, (int)&v235, (int)&v239, 0);
    v44 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v44 )
      j_StructurePiece::generateBox(v4, v7, v5, 4, 0, 4, 4, 4, 7, 0, (Random *)&v221, v44);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 4, 0, 4, 4, 4, 7, (int)&v235, (int)&v239, 0);
    v45 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v45 )
      j_StructurePiece::generateBox(v4, v7, v5, 1, 1, 8, 3, 4, 8, 0, (Random *)&v221, v45);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 1, 1, 8, v152, 4, 8, (int)&v235, (int)&v239, 0);
    v46 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v46 )
      j_StructurePiece::generateBox(v4, v7, v5, 1, 5, 4, 3, 10, 4, 0, (Random *)&v221, v46);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 1, 5, 4, v153, 10, 4, (int)&v235, (int)&v239, 0);
    v47 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v47 )
      j_StructurePiece::generateBox(v4, v7, v5, 1, 5, 5, 3, 5, 7, 0, (Random *)&v221, v47);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 1, 5, 5, v154, 5, 7, (int)&v235, (int)&v239, 0);
    v48 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v48 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 9, 0, v155, 9, 4, 0, (Random *)&v221, v48);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 9, 0, 4, 9, 4, (int)&v235, (int)&v239, 0);
    v49 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v49 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 4, 0, 4, 4, 4, 0, (Random *)&v221, v49);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 4, 0, 4, 4, 4, (int)&v235, (int)&v239, 0);
    v50 = *((_DWORD *)v4 + 12);
    v51 = *(_BYTE *)(Block::mCobblestone + 4);
    j___aeabi_memcpy8_0((int)&v235, (int)&v221, 2516);
    if ( v50 )
      (*(void (__fastcall **)(int, char *, _DWORD, signed int))(*(_DWORD *)v50 + 8))(v50, &v235, 0, 11);
      v52 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, _DWORD))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v50 + 4);
      v240 = *(_BYTE *)(v50 + 5);
      v53 = &v157;
      v237 = v51;
      v238 = 0;
      v53 = &v156;
    v52(v4, v7, v53 + 1304, 0);
    v54 = *((_DWORD *)v4 + 12);
    v55 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v54 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v54 + 8))(v54, &v235, 4, 11);
      v56 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v54 + 4);
      v240 = *(_BYTE *)(v54 + 5);
      v57 = &v157;
      v237 = v55;
      v57 = &v156;
    v56(v4, v7, v57 + 1304, 4);
    v58 = *((_DWORD *)v4 + 12);
    v59 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v58 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v58 + 8))(v58, &v235, 2, 11);
      v60 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v58 + 4);
      v240 = *(_BYTE *)(v58 + 5);
      v61 = &v157;
      v237 = v59;
      v61 = &v156;
    v60(v4, v7, v61 + 1304, 2);
    v62 = *((_DWORD *)v4 + 12);
    v63 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v62 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v62 + 8))(v62, &v235, 2, 11);
      v64 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v62 + 4);
      v240 = *(_BYTE *)(v62 + 5);
      v65 = &v157;
      v237 = v63;
      v65 = &v156;
    v64(v4, v7, v65 + 1304, 2);
    v66 = *((_DWORD *)v4 + 12);
    v67 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v66 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v66 + 8))(v66, &v235, 1, 1);
      v68 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v66 + 4);
      v240 = *(_BYTE *)(v66 + 5);
      v69 = &v157;
      v237 = v67;
      v69 = &v156;
    v68(v4, v7, v69 + 1304, 1);
    v70 = *((_DWORD *)v4 + 12);
    v71 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v70 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v70 + 8))(v70, &v235, 1, 1);
      v72 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v70 + 4);
      v240 = *(_BYTE *)(v70 + 5);
      v73 = &v157;
      v237 = v71;
      v73 = &v156;
    v72(v4, v7, v73 + 1304, 1);
    v74 = *((_DWORD *)v4 + 12);
    v75 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v74 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v74 + 8))(v74, &v235, 2, 1);
      v76 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v74 + 4);
      v240 = *(_BYTE *)(v74 + 5);
      v77 = &v157;
      v237 = v75;
      v77 = &v156;
    v76(v4, v7, v77 + 1304, 2);
    v78 = *((_DWORD *)v4 + 12);
    v79 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v78 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v78 + 8))(v78, &v235, 3, 1);
      v80 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v78 + 4);
      v240 = *(_BYTE *)(v78 + 5);
      v81 = &v157;
      v237 = v79;
      v81 = &v156;
    v80(v4, v7, v81 + 1304, 3);
    v82 = *((_DWORD *)v4 + 12);
    v83 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( v82 )
      v84 = *(_DWORD *)v82;
      v161 = v6;
      (*(void (__fastcall **)(int, char *, signed int, signed int))(v84 + 8))(v82, &v235, 3, 1);
      v85 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(*(_DWORD *)v4 + 36);
      v239 = *(_BYTE *)(v82 + 4);
      v240 = *(_BYTE *)(v82 + 5);
      v86 = &v157;
      v87 = *(_DWORD *)v4;
      v85 = *(void (__fastcall **)(SmallTemple *, BlockSource *, int *, signed int))(v87 + 36);
      v237 = v83;
      v86 = &v156;
    v85(v4, v7, v86 + 1304, 3);
    v88 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v89 = *(_BYTE *)(Block::mStoneStairs + 4);
    v90 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
    v219 = v89;
    v220 = v90;
    v88(v4, v7, &v219, 1);
    v91 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v92 = *(_BYTE *)(Block::mStoneStairs + 4);
    v93 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
    v217 = v92;
    v218 = v93;
    v91(v4, v7, &v217, 2);
    v94 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v95 = *(_BYTE *)(Block::mStoneStairs + 4);
    v96 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
    v215 = v95;
    v216 = v96;
    v94(v4, v7, &v215, 3);
    v97 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v98 = *(_BYTE *)(Block::mStoneStairs + 4);
    v99 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 1);
    v213 = v98;
    v214 = v99;
    v97(v4, v7, &v213, 1);
    v100 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v101 = *(_BYTE *)(Block::mStoneStairs + 4);
    v102 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 0);
    v211 = v101;
    v212 = v102;
    v100(v4, v7, &v211, 3);
    v103 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v209 = *(_BYTE *)(Block::mGlassPane + 4);
    v210 = 0;
    v103(v4, v7, &v209, 0);
    v104 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v207 = *(_BYTE *)(Block::mGlassPane + 4);
    v208 = 0;
    v104(v4, v7, &v207, 0);
    v105 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v205 = *(_BYTE *)(Block::mGlassPane + 4);
    v206 = 0;
    v105(v4, v7, &v205, 4);
    v106 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v203 = *(_BYTE *)(Block::mGlassPane + 4);
    v204 = 0;
    v106(v4, v7, &v203, 4);
    v107 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v201 = *(_BYTE *)(Block::mGlassPane + 4);
    v202 = 0;
    v107(v4, v7, &v201, 0);
    v108 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v199 = *(_BYTE *)(Block::mGlassPane + 4);
    v200 = 0;
    v108(v4, v7, &v199, 0);
    v109 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v197 = *(_BYTE *)(Block::mGlassPane + 4);
    v198 = 0;
    v109(v4, v7, &v197, 4);
    v110 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v195 = *(_BYTE *)(Block::mGlassPane + 4);
    v196 = 0;
    v110(v4, v7, &v195, 4);
    v111 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v193 = *(_BYTE *)(Block::mGlassPane + 4);
    v194 = 0;
    v111(v4, v7, &v193, 2);
    v112 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v191 = *(_BYTE *)(Block::mGlassPane + 4);
    v192 = 0;
    v112(v4, v7, &v191, 2);
    v113 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v189 = *(_BYTE *)(Block::mGlassPane + 4);
    v190 = 0;
    v113(v4, v7, &v189, 2);
    v114 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v187 = *(_BYTE *)(Block::mGlassPane + 4);
    v188 = 0;
    v114(v4, v7, &v187, 2);
    v115 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v185 = *(_BYTE *)(Block::mGlassPane + 4);
    v186 = 0;
    v115(v4, v7, &v185, 0);
    v116 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v183 = *(_BYTE *)(Block::mGlassPane + 4);
    v184 = 0;
    v116(v4, v7, &v183, 4);
    v117 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v181 = *(_BYTE *)(Block::mGlassPane + 4);
    v182 = 0;
    v117(v4, v7, &v181, 2);
    if ( !*((_BYTE *)v4 + 47) )
      v118 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v119 = *(_BYTE *)(Block::mTorch + 4);
      v120 = j_StructurePiece::getTorchData(v4, 2);
      v179 = v119;
      v180 = v120;
      v118(v4, v7, &v179, 2);
      v121 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      LOBYTE(v118) = *(_BYTE *)(Block::mTorch + 4);
      v122 = j_StructurePiece::getTorchData(v4, 1);
      v177 = (char)v118;
      v178 = v122;
      v121(v4, v7, &v177, 1);
      v123 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v124 = j_StructurePiece::getTorchData(v4, 3);
      v175 = (char)v118;
      v176 = v124;
      v123(v4, v7, &v175, 3);
      v125 = *(_BYTE *)(Block::mTorch + 4);
      v126 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v127 = j_StructurePiece::getTorchData(v4, 0);
      v173 = v125;
      v174 = v127;
      v126(v4, v7, &v173, 2);
    v128 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mLadder, 4);
    v129 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v171 = *(_BYTE *)(Block::mLadder + 4);
    v172 = v128;
    v129(v4, v7, &v171, 3);
    v130 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v130(v4, v7, &v171, 3);
    v131 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v131(v4, v7, &v171, 3);
    v132 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v132(v4, v7, &v171, 3);
    v133 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v133(v4, v7, &v171, 3);
    v134 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v134(v4, v7, &v171, 3);
    v135 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v135(v4, v7, &v171, 3);
    v136 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v136(v4, v7, &v171, 3);
    v137 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v137(v4, v7, &v171, 3);
    v138 = *(void (__fastcall **)(SmallTemple *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v170 = FullBlock::AIR;
    v138(v4, v7, &v170, 2);
    v139 = *(void (__fastcall **)(SmallTemple *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v169 = FullBlock::AIR;
    v139(v4, v7, &v169, 2);
      v140 = *(void (__fastcall **)(SmallTemple *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v4 + 56);
      v156 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mWoodenDoor, 1);
      v140(v4, v7, v5, v161);
    j_StructurePiece::getBlock((StructurePiece *)&v168, v4, (int)v7, 2, 0, (const BoundingBox *)0xFFFFFFFF, (int)v5);
    if ( !v168 )
      j_StructurePiece::getBlock((StructurePiece *)&v167, v4, (int)v7, 2, -1, (const BoundingBox *)0xFFFFFFFF, (int)v5);
      if ( v167 )
        v141 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v142 = *(_BYTE *)(Block::mStoneStairs + 4);
        v143 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
        v165 = v142;
        v166 = v143;
        v141(v4, v7, &v165, 2);
    v144 = 0;
      j_StructurePiece::generateAirColumnUp(v4, v7, 0, 12, v144, v5);
      v145 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 44);
      v163 = *(_BYTE *)(Block::mCobblestone + 4);
      v164 = 0;
      v145(v4, v7, &v163, 0);
      j_StructurePiece::generateAirColumnUp(v4, v7, 1, 12, v144, v5);
      v146 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v146(v4, v7, &v163, 1);
      j_StructurePiece::generateAirColumnUp(v4, v7, 2, 12, v144, v5);
      v147 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v147(v4, v7, &v163, 2);
      j_StructurePiece::generateAirColumnUp(v4, v7, 3, 12, v144, v5);
      v148 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v148(v4, v7, &v163, 3);
      j_StructurePiece::generateAirColumnUp(v4, v7, 4, 12, v144, v5);
      v149 = *(void (__fastcall **)(SmallTemple *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
      v149(v4, v7, &v163, 4);
      ++v144;
    while ( v144 != 9 );
  return 1;
}


signed int __fastcall SmallTemple::getVillagerProfession(SmallTemple *this, int a2)
{
  return 2;
}


signed int __fastcall SmallTemple::getType(SmallTemple *this)
{
  return 1447646036;
}


_DWORD *__fastcall SmallTemple::createPiece(_DWORD *a1, int a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
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
  j_BoundingBox::orientBox((BoundingBox *)&v15, a5, a6, a7, 0, 0, 0, 5, 12, 9, a8);
  result = (_DWORD *)j_StructurePiece::findCollisionPiece(v9, (int)&v15);
  if ( result )
  {
    *v11 = 0;
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
    *result = &off_272439C;
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


int __fastcall SmallTemple::SmallTemple(int result, int a2, int a3, int a4, int a5, int a6)
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
  *(_DWORD *)result = &off_272439C;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  return result;
}
