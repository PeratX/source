

_DWORD *__fastcall PigHouse::createPiece(_DWORD *a1, int a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
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
  j_BoundingBox::orientBox((BoundingBox *)&v15, a5, a6, a7, 0, 0, 0, 9, 7, 11, a8);
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
    *result = &off_2724480;
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


int __fastcall PigHouse::PigHouse(int result, int a2, int a3, int a4, int a5, int a6)
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
  *(_DWORD *)result = &off_2724480;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  return result;
}


signed int __fastcall PigHouse::getType(PigHouse *this)
{
  return 1447645255;
}


signed int __fastcall PigHouse::getVillagerProfession(PigHouse *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( !a2 )
    result = 4;
  return result;
}


signed int __fastcall PigHouse::postProcess(PigHouse *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r8@1
  Random *v5; // r10@1
  PigHouse *v6; // r2@1
  int v7; // r6@2
  PigHouse *v8; // r11@2
  int v9; // r0@2
  int v10; // r12@3
  signed int v11; // r10@3
  signed int v12; // r9@3
  int v13; // r2@4
  int v14; // r4@5
  __int64 v15; // kr00_8@5
  int v16; // r0@5
  int v17; // r3@5
  bool v18; // nf@5
  unsigned __int8 v19; // vf@5
  signed int v20; // r0@5
  __int64 v21; // kr10_8@5
  signed int v22; // r2@7
  bool v23; // zf@9
  signed int v24; // r3@9
  signed int v25; // r7@11
  signed int v26; // r5@13
  int v27; // r0@17
  int v28; // r0@24
  PigHouse *v29; // r6@26
  int v30; // r4@26
  signed int v31; // r5@26
  BlockSource *v32; // r9@26
  void (__fastcall *v33)(PigHouse *); // r12@26
  void (__fastcall *v34)(PigHouse *, BlockSource *, const BoundingBox *, signed int); // r7@26
  int v35; // r11@26
  unsigned int v36; // r0@26
  int v37; // r0@27
  int *v38; // r6@27
  int v39; // r7@27
  void (__fastcall *v40)(int, BlockSource *, const BoundingBox *, signed int); // r7@28
  int v41; // r4@28
  char v42; // r7@28
  void (__cdecl *v43)(int, BlockSource *, char *, signed int, _DWORD, signed int, const BoundingBox *, _DWORD); // r7@29
  void (__cdecl *v44)(int, BlockSource *, char *, signed int, _DWORD, signed int, const BoundingBox *, _DWORD); // r4@31
  void (__fastcall *v45)(int, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v46)(int, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v47)(int, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v48)(int, BlockSource *, const BoundingBox *, signed int); // r7@32
  BlockSelector *v49; // r0@32
  Random *v50; // r4@33
  char *v51; // r5@33
  BlockSelector *v52; // r0@35
  BlockSelector *v53; // r0@38
  BlockSelector *v54; // r0@41
  int v55; // r7@44
  void (__fastcall *v56)(int, BlockSource *, const BoundingBox *, signed int); // r6@44
  void (__fastcall *v57)(int, BlockSource *, const BoundingBox *, signed int); // r6@44
  void (__fastcall *v58)(int, BlockSource *, const BoundingBox *, _DWORD); // r6@44
  void (__fastcall *v59)(int, BlockSource *, const BoundingBox *, _DWORD); // r6@44
  void (__fastcall *v60)(int, BlockSource *, const BoundingBox *, _DWORD); // r6@44
  void (__fastcall *v61)(int, BlockSource *, char *, _DWORD); // r6@44
  void (__fastcall *v62)(int, BlockSource *, char *, _DWORD); // r6@44
  void (__fastcall *v63)(int, BlockSource *, char *, signed int); // r6@44
  void (__fastcall *v64)(int, BlockSource *, char *, signed int); // r4@44
  char v65; // r10@44
  int v66; // r4@44
  void (__fastcall *v67)(int, BlockSource *, char *, int); // r5@45
  void (__fastcall *v68)(int, BlockSource *, char *, int); // r5@45
  int v69; // r7@46
  int v70; // r5@46
  void (__fastcall *v71)(int, BlockSource *, char *, int); // r12@47
  void (__fastcall *v72)(int, BlockSource *, char *, int); // r12@47
  BlockSource *v73; // r1@48
  BlockSource *v74; // r6@49
  void (__fastcall *v75)(int); // r7@49
  void (__fastcall *v76)(int, BlockSource *, char *, int); // r7@49
  int v77; // r7@50
  int v78; // r5@51
  BlockSource *v79; // r6@51
  void (__fastcall *v80)(int); // r4@51
  void (__fastcall *v81)(int, BlockSource *, char *, int); // r12@51
  BlockSource *v82; // r10@52
  void (__fastcall *v83)(int); // r5@52
  void (__fastcall *v84)(int, BlockSource *, char *, _DWORD); // r5@52
  void (__fastcall *v85)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v86)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v87)(int, BlockSource *, char *, _DWORD); // r7@52
  void (__fastcall *v88)(int, BlockSource *, char *, _DWORD); // r7@52
  void (__fastcall *v89)(int, BlockSource *, char *, signed int); // r7@52
  void (__fastcall *v90)(int, BlockSource *, char *, signed int); // r7@52
  void (__fastcall *v91)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v92)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v93)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v94)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v95)(int, BlockSource *, char *, signed int); // r7@52
  void (__fastcall *v96)(int, BlockSource *, char *, signed int); // r5@52
  int v97; // r1@52
  void (__fastcall *v98)(int, BlockSource *, char *, signed int); // r7@52
  void (__fastcall *v99)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v100)(int, BlockSource *, char *, signed int); // r5@52
  void (__fastcall *v101)(int, BlockSource *, const BoundingBox *, signed int); // r6@52
  void (__fastcall *v102)(int, BlockSource *, char *, signed int); // r6@52
  void (__fastcall *v103)(int, BlockSource *, char *, signed int); // r6@52
  void (__fastcall *v104)(int, BlockSource *, __int16 *, signed int); // r7@52
  void (__fastcall *v105)(int, BlockSource *, __int16 *, signed int); // r7@52
  void (__fastcall *v106)(int, BlockSource *, char *, signed int); // r7@53
  void (__fastcall *v107)(int, BlockSource *, const BoundingBox *); // r5@53
  void (__fastcall *v108)(int, BlockSource *, char *, signed int); // r5@56
  int v109; // r5@57
  void (__fastcall *v110)(int, BlockSource *, __int16 *, signed int); // r4@57
  void (__fastcall *v111)(int, BlockSource *, __int16 *, signed int); // r4@57
  StructurePiece *v112; // r7@57
  void (__fastcall *v113)(int, BlockSource *, char *, signed int); // r4@58
  void (__fastcall *v114)(int, BlockSource *, const BoundingBox *); // r4@58
  int v115; // r5@59
  int v116; // r6@59
  void (__fastcall *v117)(StructurePiece *, BlockSource *, char *, int); // r4@60
  int v118; // r4@61
  void (__fastcall *v119)(StructurePiece *, BlockSource *, char *, int); // r12@62
  int v120; // r5@63
  void (__fastcall *v121)(StructurePiece *, BlockSource *, char *, int); // r12@64
  void (__fastcall *v122)(StructurePiece *, BlockSource *, char *, int); // r6@65
  int v123; // r5@66
  void (__fastcall *v124)(StructurePiece *, BlockSource *, char *, int); // r12@67
  Random *v126; // [sp+28h] [bp-14D8h]@2
  BlockSource *v127; // [sp+30h] [bp-14D0h]@2
  char v128; // [sp+30h] [bp-14D0h]@44
  char v129; // [sp+34h] [bp-14CCh]@60
  char v130; // [sp+35h] [bp-14CBh]@60
  char v131; // [sp+38h] [bp-14C8h]@58
  char v132; // [sp+39h] [bp-14C7h]@58
  __int16 v133; // [sp+3Ch] [bp-14C4h]@57
  __int16 v134; // [sp+40h] [bp-14C0h]@57
  char v135; // [sp+44h] [bp-14BCh]@56
  char v136; // [sp+45h] [bp-14BBh]@56
  char v137; // [sp+48h] [bp-14B8h]@55
  char v138; // [sp+4Ch] [bp-14B4h]@54
  char v139; // [sp+50h] [bp-14B0h]@53
  char v140; // [sp+51h] [bp-14AFh]@53
  __int16 v141; // [sp+54h] [bp-14ACh]@52
  __int16 v142; // [sp+58h] [bp-14A8h]@52
  char v143; // [sp+5Ch] [bp-14A4h]@52
  char v144; // [sp+5Dh] [bp-14A3h]@52
  char v145; // [sp+60h] [bp-14A0h]@52
  char v146; // [sp+61h] [bp-149Fh]@52
  char v147; // [sp+64h] [bp-149Ch]@52
  char v148; // [sp+65h] [bp-149Bh]@52
  char v149; // [sp+68h] [bp-1498h]@52
  char v150; // [sp+69h] [bp-1497h]@52
  char v151; // [sp+6Ch] [bp-1494h]@52
  char v152; // [sp+6Dh] [bp-1493h]@52
  char v153; // [sp+70h] [bp-1490h]@52
  char v154; // [sp+71h] [bp-148Fh]@52
  char v155; // [sp+74h] [bp-148Ch]@52
  char v156; // [sp+75h] [bp-148Bh]@52
  char v157; // [sp+78h] [bp-1488h]@52
  char v158; // [sp+79h] [bp-1487h]@52
  char v159; // [sp+7Ch] [bp-1484h]@52
  char v160; // [sp+7Dh] [bp-1483h]@52
  char v161; // [sp+80h] [bp-1480h]@52
  char v162; // [sp+81h] [bp-147Fh]@52
  char v163; // [sp+84h] [bp-147Ch]@52
  char v164; // [sp+85h] [bp-147Bh]@52
  char v165; // [sp+88h] [bp-1478h]@52
  char v166; // [sp+89h] [bp-1477h]@52
  char v167; // [sp+8Ch] [bp-1474h]@52
  char v168; // [sp+8Dh] [bp-1473h]@52
  char v169; // [sp+90h] [bp-1470h]@52
  char v170; // [sp+91h] [bp-146Fh]@52
  char v171; // [sp+94h] [bp-146Ch]@52
  char v172; // [sp+95h] [bp-146Bh]@52
  char v173; // [sp+98h] [bp-1468h]@52
  char v174; // [sp+99h] [bp-1467h]@52
  char v175; // [sp+9Ch] [bp-1464h]@52
  char v176; // [sp+9Dh] [bp-1463h]@52
  char v177; // [sp+A0h] [bp-1460h]@52
  char v178; // [sp+A1h] [bp-145Fh]@52
  char v179; // [sp+A4h] [bp-145Ch]@52
  char v180; // [sp+A5h] [bp-145Bh]@52
  char v181; // [sp+A8h] [bp-1458h]@52
  char v182; // [sp+A9h] [bp-1457h]@52
  char v183; // [sp+ACh] [bp-1454h]@52
  char v184; // [sp+ADh] [bp-1453h]@52
  char v185; // [sp+B0h] [bp-1450h]@45
  char v186; // [sp+B1h] [bp-144Fh]@45
  char v187; // [sp+B4h] [bp-144Ch]@45
  char v188; // [sp+B5h] [bp-144Bh]@45
  char v189; // [sp+B8h] [bp-1448h]@44
  char v190; // [sp+B9h] [bp-1447h]@44
  char v191; // [sp+BCh] [bp-1444h]@44
  char v192; // [sp+BDh] [bp-1443h]@44
  char v193; // [sp+C0h] [bp-1440h]@44
  char v194; // [sp+C1h] [bp-143Fh]@44
  char v195; // [sp+C4h] [bp-143Ch]@44
  char v196; // [sp+C5h] [bp-143Bh]@44
  char v197; // [sp+C8h] [bp-1438h]@44
  char v198; // [sp+C9h] [bp-1437h]@44
  char v199; // [sp+CCh] [bp-1434h]@44
  char v200; // [sp+CDh] [bp-1433h]@44
  char v201; // [sp+D0h] [bp-1430h]@44
  char v202; // [sp+D1h] [bp-142Fh]@44
  char v203; // [sp+D4h] [bp-142Ch]@44
  char v204; // [sp+D5h] [bp-142Bh]@44
  char v205; // [sp+D8h] [bp-1428h]@44
  char v206; // [sp+D9h] [bp-1427h]@44
  char v207; // [sp+DCh] [bp-1424h]@44
  char v208; // [sp+DDh] [bp-1423h]@44
  char v209; // [sp+E0h] [bp-1420h]@44
  char v210; // [sp+E1h] [bp-141Fh]@44
  char v211; // [sp+E4h] [bp-141Ch]@44
  char v212; // [sp+E5h] [bp-141Bh]@44
  char v213; // [sp+E8h] [bp-1418h]@44
  char v214; // [sp+E9h] [bp-1417h]@44
  char v215; // [sp+ECh] [bp-1414h]@44
  char v216; // [sp+EDh] [bp-1413h]@44
  char v217; // [sp+F0h] [bp-1410h]@32
  char v218; // [sp+F1h] [bp-140Fh]@32
  char v219; // [sp+F4h] [bp-140Ch]@32
  char v220; // [sp+F5h] [bp-140Bh]@32
  char v221; // [sp+F8h] [bp-1408h]@32
  char v222; // [sp+F9h] [bp-1407h]@32
  char v223; // [sp+FCh] [bp-1404h]@32
  char v224; // [sp+FDh] [bp-1403h]@32
  char v225; // [sp+100h] [bp-1400h]@32
  char v226; // [sp+101h] [bp-13FFh]@32
  char v227; // [sp+104h] [bp-13FCh]@32
  char v228; // [sp+105h] [bp-13FBh]@32
  char v229; // [sp+108h] [bp-13F8h]@32
  char v230; // [sp+109h] [bp-13F7h]@32
  char v231; // [sp+10Ch] [bp-13F4h]@32
  char v232; // [sp+10Dh] [bp-13F3h]@32
  char v233; // [sp+110h] [bp-13F0h]@28
  char v234; // [sp+111h] [bp-13EFh]@28
  char v235; // [sp+114h] [bp-13ECh]@28
  char v236; // [sp+115h] [bp-13EBh]@28
  unsigned int v237; // [sp+118h] [bp-13E8h]@26
  unsigned int v238; // [sp+11Ch] [bp-13E4h]@26
  int v239; // [sp+ADCh] [bp-A24h]@26
  char v240; // [sp+AE0h] [bp-A20h]@26
  int v241; // [sp+AE4h] [bp-A1Ch]@26
  int v242; // [sp+AE8h] [bp-A18h]@28
  char v243; // [sp+AF0h] [bp-A10h]@26
  char v244; // [sp+AF1h] [bp-A0Fh]@26
  char v245; // [sp+AF4h] [bp-A0Ch]@26
  char v246; // [sp+AF5h] [bp-A0Bh]@26
  char v247; // [sp+AF8h] [bp-A08h]@26
  char v248; // [sp+AF9h] [bp-A07h]@26
  char v249; // [sp+AFCh] [bp-A04h]@26
  char v250; // [sp+AFDh] [bp-A03h]@26
  char v251; // [sp+B00h] [bp-A00h]@28
  char v252; // [sp+B01h] [bp-9FFh]@34
  char v253; // [sp+14D4h] [bp-2Ch]@31
  char v254; // [sp+14D5h] [bp-2Bh]@31
  char v255; // [sp+14D8h] [bp-28h]@29
  char v256; // [sp+14D9h] [bp-27h]@29

  v4 = a4;
  v5 = a3;
  v6 = this;
  if ( *((_DWORD *)this + 9) > -1 )
    goto LABEL_26;
  v7 = *((_DWORD *)this + 3);
  v8 = this;
  v9 = *((_DWORD *)this + 6);
  v126 = v5;
  v127 = a2;
  if ( v7 > v9 )
    goto LABEL_71;
  v10 = *((_DWORD *)v6 + 4);
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = *((_DWORD *)v8 + 1);
    if ( v13 <= v10 )
    {
      do
      {
        v14 = v13;
        v15 = *(_QWORD *)v4;
        v16 = *((_QWORD *)v4 + 1) >> 32;
        v17 = *((_QWORD *)v4 + 1);
        v19 = __OFSUB__(v16, v13);
        v18 = v16 - v13 < 0;
        v20 = 0;
        v21 = *((_QWORD *)v4 + 2);
        if ( !(v18 ^ v19) )
          v20 = 1;
        v22 = 0;
        if ( (signed int)v15 <= v14 )
          v22 = 1;
        v19 = __OFSUB__(v17, v7);
        v23 = v17 == v7;
        v18 = v17 - v7 < 0;
        v24 = 0;
        if ( (unsigned __int8)(v18 ^ v19) | v23 )
          v24 = 1;
        v25 = 0;
        if ( SHIDWORD(v21) >= v7 )
          v25 = 1;
        v26 = 0;
        if ( SHIDWORD(v15) < 65 )
          v26 = 1;
        if ( (signed int)v21 >= 64 && (v20 & v22 & v24 & v25 & v26) == 1 )
        {
          v27 = j_BlockSource::getAboveTopSolidBlock(v127, v14, v7, 0, 0);
          ++v11;
          if ( v27 < 64 )
            v27 = 64;
          v10 = *((_DWORD *)v8 + 4);
          v12 += v27;
        }
        v13 = v14 + 1;
      }
      while ( v14 < v10 );
      v9 = *((_DWORD *)v8 + 6);
    }
    v19 = __OFSUB__(v7, v9);
    v18 = v7++ - v9 < 0;
  }
  while ( v18 ^ v19 );
  if ( !v11 )
LABEL_71:
    *((_DWORD *)v8 + 9) = -1;
    return 1;
  v28 = v12 / v11;
  *((_DWORD *)v8 + 9) = v12 / v11;
  if ( v12 / v11 >= 0 )
    v5 = v126;
    v6 = v8;
    *((_DWORD *)v8 + 2) += v28 - *((_DWORD *)v8 + 5) + 6;
    a2 = v127;
    *((_DWORD *)v8 + 5) = v28 + 6;
LABEL_26:
    v29 = v6;
    v30 = 0;
    v31 = 1;
    v32 = a2;
    v33 = *(void (__fastcall **)(PigHouse *))(*(_DWORD *)v6 + 40);
    v249 = BlockID::AIR;
    v247 = BlockID::AIR;
    v250 = 0;
    v248 = 0;
    v33(v6);
    v34 = *(void (__fastcall **)(PigHouse *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v29 + 40);
    v245 = BlockID::AIR;
    v243 = BlockID::AIR;
    v246 = 0;
    v244 = 0;
    v35 = (int)v29;
    v34(v29, v32, v4, 2);
    v36 = *(_DWORD *)v5;
    v237 = v36;
    v239 = 625;
    v240 = 0;
    v241 = 0;
    v238 = v36;
    do
      v37 = v36 ^ (v36 >> 30);
      v38 = (int *)(&v237 + v30);
      v39 = v30++ + 1812433253 * v37;
      v36 = v31++ + 1812433253 * v37;
      v38[2] = v39 + 1;
    while ( v30 != 397 );
    v239 = 624;
    v242 = 398;
    v40 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v35 + 40);
    v235 = *(_BYTE *)(Block::mDirt + 4);
    v236 = 0;
    v233 = *(_BYTE *)(Block::mDirt + 4);
    v234 = 0;
    v40(v35, v32, v4, 2);
    v41 = *(_DWORD *)(v35 + 48);
    v42 = *(_BYTE *)(Block::mCobblestone + 4);
    j___aeabi_memcpy8_0((int)&v251, (int)&v237, 2516);
    if ( v41 )
      (*(void (__fastcall **)(int, char *, signed int, _DWORD))(*(_DWORD *)v41 + 8))(v41, &v251, 6, 0);
      v43 = *(void (__cdecl **)(int, BlockSource *, char *, signed int, _DWORD, signed int, const BoundingBox *, _DWORD))(*(_DWORD *)v35 + 36);
      v255 = *(_BYTE *)(v41 + 4);
      v256 = *(_BYTE *)(v41 + 5);
      v43(v35, v32, &v255, 6, 0, 6, v4, 0);
    else
      v44 = *(void (__cdecl **)(int, BlockSource *, char *, signed int, _DWORD, signed int, const BoundingBox *, _DWORD))(*(_DWORD *)v35 + 36);
      v253 = v42;
      v254 = 0;
      v44(v35, v32, &v253, 6, 0, 6, v4, 0);
    v45 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v35 + 40);
    v231 = *(_BYTE *)(Block::mFence + 4);
    v232 = 0;
    v229 = *(_BYTE *)(Block::mFence + 4);
    v230 = 0;
    v45(v35, v32, v4, 2);
    v46 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v35 + 40);
    v227 = *(_BYTE *)(Block::mFence + 4);
    v228 = 0;
    v225 = *(_BYTE *)(Block::mFence + 4);
    v226 = 0;
    v46(v35, v32, v4, 8);
    v47 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v35 + 40);
    v223 = *(_BYTE *)(Block::mFence + 4);
    v224 = 0;
    v221 = *(_BYTE *)(Block::mFence + 4);
    v222 = 0;
    v47(v35, v32, v4, 3);
    v48 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v35 + 40);
    v219 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v220 = 0;
    v217 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v218 = 0;
    v48(v35, v32, v4, 1);
    v49 = *(BlockSelector **)(v35 + 48);
    if ( v49 )
      v50 = (Random *)&v237;
      j_StructurePiece::generateBox((StructurePiece *)v35, v32, v4, 0, 0, 0, 0, 3, 5, 0, (Random *)&v237, v49);
      v51 = &v251;
      v251 = *(_BYTE *)(Block::mCobblestone + 4);
      v252 = 0;
      v255 = *(_BYTE *)(Block::mCobblestone + 4);
      v256 = 0;
      j_StructurePiece::generateBox(v35, (int)v32, (int)v4, 0, 0, 0, 0, 3, 5, (int)&v251, (int)&v255, 0);
    v52 = *(BlockSelector **)(v35 + 48);
    if ( v52 )
      j_StructurePiece::generateBox((StructurePiece *)v35, v32, v4, 8, 0, 0, 8, 3, 5, 0, v50, v52);
      j_StructurePiece::generateBox(v35, (int)v32, (int)v4, 8, 0, 0, 8, 3, 5, (int)v51, (int)&v255, 0);
    v53 = *(BlockSelector **)(v35 + 48);
    if ( v53 )
      j_StructurePiece::generateBox((StructurePiece *)v35, v32, v4, 1, 0, 0, 7, 1, 0, 0, v50, v53);
      j_StructurePiece::generateBox(v35, (int)v32, (int)v4, 1, 0, 0, 7, 1, 0, (int)v51, (int)&v255, 0);
    v54 = *(BlockSelector **)(v35 + 48);
    if ( v54 )
      j_StructurePiece::generateBox((StructurePiece *)v35, v32, v4, 1, 0, 5, 7, 1, 5, 0, v50, v54);
      j_StructurePiece::generateBox(v35, (int)v32, (int)v4, 1, 0, 5, 7, 1, 5, (int)v51, (int)&v255, 0);
    v55 = 0;
    v56 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v35 + 40);
    v215 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v216 = 0;
    v213 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v214 = 0;
    v56(v35, v32, v4, 1);
    v57 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v35 + 40);
    v211 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v212 = 0;
    v209 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v210 = 0;
    v57(v35, v32, v4, 1);
    v58 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v35 + 40);
    v207 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v208 = 0;
    v205 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v206 = 0;
    v58(v35, v32, v4, 0);
    v59 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v35 + 40);
    v203 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v204 = 0;
    v201 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v202 = 0;
    v59(v35, v32, v4, 0);
    v60 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v35 + 40);
    v199 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v200 = 0;
    v197 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v198 = 0;
    v60(v35, v32, v4, 0);
    v61 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v35 + 36);
    v195 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v196 = 0;
    v61(v35, v32, &v195, 0);
    v62 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v35 + 36);
    v193 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v194 = 0;
    v62(v35, v32, &v193, 0);
    v63 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v35 + 36);
    v191 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v192 = 0;
    v63(v35, v32, &v191, 8);
    v64 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v35 + 36);
    v189 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v190 = 0;
    v64(v35, v32, &v189, 8);
    v65 = j_StructurePiece::getOrientationData((StructurePiece *)v35, (const Block *)Block::mOakStairs, 3);
    v66 = v35;
    v128 = j_StructurePiece::getOrientationData((StructurePiece *)v35, (const Block *)Block::mOakStairs, 2);
      v67 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v35 + 36);
      v187 = *(_BYTE *)(Block::mOakStairs + 4);
      v188 = v65;
      v67(v35, v32, &v187, v55);
      v68 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v35 + 36);
      v185 = *(_BYTE *)(Block::mOakStairs + 4);
      v186 = v128;
      v68(v35, v32, &v185, v55++);
    while ( v55 != 9 );
    v69 = 0;
    v70 = 0;
      v71 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v35 + 36);
      v71(v35, v32, &v187, v69);
      v72 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v35 + 36);
      v72(v35, v32, &v185, v69++);
    while ( v69 != 9 );
    v73 = v32;
      v74 = v73;
      v75 = *(void (__fastcall **)(int))(*(_DWORD *)v35 + 36);
      v75(v35);
      v76 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v35 + 36);
      v76(v35, v74, &v185, v70++);
      v73 = v74;
    while ( v70 != 9 );
    v77 = 0;
      v78 = v66;
      v79 = v73;
      v80 = *(void (__fastcall **)(int))(*(_DWORD *)v66 + 36);
      v80(v78);
      v66 = v78;
      v81 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v78 + 36);
      v81(v78, v79, &v185, v77++);
      v73 = v79;
    while ( v77 != 9 );
    v82 = v79;
    v83 = *(void (__fastcall **)(int))(*(_DWORD *)v78 + 36);
    v183 = *(_BYTE *)(Block::mLog + 4);
    v184 = 0;
    v83(v66);
    v84 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v66 + 36);
    v181 = *(_BYTE *)(Block::mLog + 4);
    v182 = 0;
    v84(v66, v79, &v181, 0);
    v85 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v179 = *(_BYTE *)(Block::mLog + 4);
    v180 = 0;
    v85(v66, v79, &v179, 8);
    v86 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v177 = *(_BYTE *)(Block::mLog + 4);
    v178 = 0;
    v86(v66, v79, &v177, 8);
    v87 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v66 + 36);
    v175 = *(_BYTE *)(Block::mGlassPane + 4);
    v176 = 0;
    v87(v66, v79, &v175, 0);
    v88 = *(void (__fastcall **)(int, BlockSource *, char *, _DWORD))(*(_DWORD *)v66 + 36);
    v173 = *(_BYTE *)(Block::mGlassPane + 4);
    v174 = 0;
    v88(v66, v79, &v173, 0);
    v89 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v171 = *(_BYTE *)(Block::mGlassPane + 4);
    v172 = 0;
    v89(v66, v79, &v171, 8);
    v90 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v169 = *(_BYTE *)(Block::mGlassPane + 4);
    v170 = 0;
    v90(v66, v79, &v169, 8);
    v91 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v167 = *(_BYTE *)(Block::mGlassPane + 4);
    v168 = 0;
    v91(v66, v79, &v167, 2);
    v92 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v165 = *(_BYTE *)(Block::mGlassPane + 4);
    v166 = 0;
    v92(v66, v79, &v165, 3);
    v93 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v163 = *(_BYTE *)(Block::mGlassPane + 4);
    v164 = 0;
    v93(v66, v79, &v163, 5);
    v94 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v161 = *(_BYTE *)(Block::mGlassPane + 4);
    v162 = 0;
    v94(v66, v79, &v161, 6);
    v95 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v159 = *(_BYTE *)(Block::mFence + 4);
    v160 = 0;
    v95(v66, v79, &v159, 2);
    v96 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v157 = *(_BYTE *)(Block::mWoolCarpet + 4);
    v158 = j_WoolCarpetBlock::getBlockDataForItemAuxValue((WoolCarpetBlock *)3, v97);
    v96(v66, v79, &v157, 2);
    v98 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v155 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v156 = 0;
    v98(v66, v79, &v155, 1);
    v99 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v153 = *(_BYTE *)(Block::mOakStairs + 4);
    v154 = j_StructurePiece::getOrientationData((StructurePiece *)v66, (const Block *)Block::mOakStairs, 3);
    v99(v66, v79, &v153, 2);
    v100 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v151 = *(_BYTE *)(Block::mOakStairs + 4);
    v152 = j_StructurePiece::getOrientationData((StructurePiece *)v66, (const Block *)Block::mOakStairs, 1);
    v100(v66, v79, &v151, 1);
    v101 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v66 + 40);
    v149 = *(_BYTE *)(Block::mDoubleStoneSlab + 4);
    v150 = 0;
    v147 = *(_BYTE *)(Block::mDoubleStoneSlab + 4);
    v148 = 0;
    v101(v66, v82, v4, 5);
    v102 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v145 = *(_BYTE *)(Block::mDoubleStoneSlab + 4);
    v146 = 0;
    v102(v66, v82, &v145, 6);
    v103 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
    v143 = *(_BYTE *)(Block::mDoubleStoneSlab + 4);
    v144 = 0;
    v103(v66, v82, &v143, 6);
    v104 = *(void (__fastcall **)(int, BlockSource *, __int16 *, signed int))(*(_DWORD *)v66 + 36);
    v142 = FullBlock::AIR;
    v104(v66, v82, &v142, 2);
    v105 = *(void (__fastcall **)(int, BlockSource *, __int16 *, signed int))(*(_DWORD *)v66 + 36);
    v141 = FullBlock::AIR;
    v105(v66, v82, &v141, 2);
    if ( !*(_BYTE *)(v66 + 47) )
      v106 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
      v139 = *(_BYTE *)(Block::mTorch + 4);
      v140 = j_StructurePiece::getTorchData((StructurePiece *)v66, 0);
      v106(v66, v82, &v139, 2);
      v107 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *))(*(_DWORD *)v66 + 56);
      j_StructurePiece::getOrientationData((StructurePiece *)v66, (const Block *)Block::mWoodenDoor, 1);
      v107(v66, v82, v4);
    j_StructurePiece::getBlock(
      (StructurePiece *)&v138,
      (BlockSource *)v66,
      (int)v82,
      2,
      0,
      (const BoundingBox *)0xFFFFFFFF,
      (int)v4);
    if ( !v138 )
      j_StructurePiece::getBlock(
        (StructurePiece *)&v137,
        (BlockSource *)v66,
        (int)v82,
        2,
        -1,
        (const BoundingBox *)0xFFFFFFFF,
        (int)v4);
      if ( v137 )
        v108 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v66 + 36);
        v135 = *(_BYTE *)(Block::mStoneStairs + 4);
        v136 = j_StructurePiece::getOrientationData((StructurePiece *)v66, (const Block *)Block::mStoneStairs, 3);
        v108(v66, v82, &v135, 2);
    v109 = v66;
    v110 = *(void (__fastcall **)(int, BlockSource *, __int16 *, signed int))(*(_DWORD *)v66 + 36);
    v134 = FullBlock::AIR;
    v110(v109, v82, &v134, 6);
    v111 = *(void (__fastcall **)(int, BlockSource *, __int16 *, signed int))(*(_DWORD *)v109 + 36);
    v133 = FullBlock::AIR;
    v111(v109, v82, &v133, 6);
    v112 = (StructurePiece *)v109;
    if ( !*(_BYTE *)(v109 + 47) )
      v113 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v109 + 36);
      v131 = *(_BYTE *)(Block::mTorch + 4);
      v132 = j_StructurePiece::getTorchData((StructurePiece *)v109, 2);
      v113(v109, v82, &v131, 6);
      v114 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *))(*(_DWORD *)v109 + 56);
      v112 = (StructurePiece *)v109;
      j_StructurePiece::getOrientationData((StructurePiece *)v109, (const Block *)Block::mWoodenDoor, 1);
      v114(v109, v82, v4);
    v115 = 0;
    v116 = 0;
      j_StructurePiece::generateAirColumnUp(v112, v82, v116, 7, 0, v4);
      v117 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v112 + 44);
      v129 = *(_BYTE *)(Block::mCobblestone + 4);
      v130 = 0;
      v117(v112, v82, &v129, v116++);
    while ( v116 != 9 );
    v118 = 0;
      j_StructurePiece::generateAirColumnUp(v112, v82, v115, 7, 1, v4);
      v119 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v112 + 44);
      v119(v112, v82, &v129, v115++);
    while ( v115 != 9 );
    v120 = 0;
      j_StructurePiece::generateAirColumnUp(v112, v82, v118, 7, 2, v4);
      v121 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v112 + 44);
      v121(v112, v82, &v129, v118++);
    while ( v118 != 9 );
      j_StructurePiece::generateAirColumnUp(v112, v82, v120, 7, 3, v4);
      v122 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v112 + 44);
      v122(v112, v82, &v129, v120++);
    while ( v120 != 9 );
    v123 = 0;
      j_StructurePiece::generateAirColumnUp(v112, v82, v123, 7, 4, v4);
      v124 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v112 + 44);
      v124(v112, v82, &v129, v123++);
    while ( v123 != 9 );
  return 1;
}


int __fastcall PigHouse::PigHouse(int result)
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
  *(_DWORD *)result = &off_2724480;
  return result;
}
