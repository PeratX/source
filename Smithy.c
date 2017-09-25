

signed int __fastcall Smithy::getVillagerProfession(Smithy *this, int a2)
{
  return 3;
}


int __fastcall Smithy::Smithy(int result, int a2, int a3, int a4, int a5, int a6)
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
  *(_DWORD *)result = &off_2724564;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  *(_BYTE *)(result + 52) = 0;
  return result;
}


signed int __fastcall Smithy::getType(Smithy *this)
{
  return 1447646029;
}


_DWORD *__fastcall Smithy::createPiece(_DWORD *a1, int a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
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
  j_BoundingBox::orientBox((BoundingBox *)&v15, a5, a6, a7, 0, 0, 0, 10, 6, 7, a8);
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
    *result = &off_2724564;
    v14 = v15;
    result[7] = a8;
    result[1] = v14;
    result[2] = v16;
    result[3] = v17;
    result[4] = v18;
    result[5] = v19;
    result[6] = v20;
    *((_BYTE *)result + 52) = 0;
  return result;
}


signed int __fastcall Smithy::postProcess(Smithy *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  Smithy *v4; // r9@1
  const BoundingBox *v5; // r10@1
  Random *v6; // r11@1
  BlockSource *v7; // r8@1
  const BoundingBox *v8; // r8@2
  int v9; // r7@2
  int v10; // r0@2
  int v11; // r12@3
  signed int v12; // r11@3
  signed int v13; // r10@3
  int v14; // r2@4
  int v15; // r5@5
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
  signed int v27; // r4@13
  int v28; // r0@17
  int v29; // r0@24
  int v30; // r5@26
  signed int v31; // r4@26
  void (__fastcall *v32)(Smithy *, BlockSource *, const BoundingBox *, _DWORD); // r7@26
  unsigned int v33; // r0@26
  int v34; // r0@27
  int *v35; // r7@27
  int v36; // r3@27
  BlockSelector *v37; // r0@28
  BlockSelector *v38; // r0@31
  void (__fastcall *v39)(Smithy *, BlockSource *, const BoundingBox *, _DWORD); // r7@34
  void (__fastcall *v40)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r7@34
  int v41; // r11@34
  void (__fastcall *v42)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r7@34
  void (__fastcall *v43)(Smithy *, BlockSource *, const BoundingBox *, _DWORD); // r4@34
  void (__fastcall *v44)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r4@34
  void (__fastcall *v45)(Smithy *, BlockSource *, const BoundingBox *, _DWORD); // r4@34
  void (__fastcall *v46)(Smithy *, BlockSource *, char *, signed int); // r7@34
  void (__fastcall *v47)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r7@34
  void (__fastcall *v48)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r7@34
  void (__fastcall *v49)(Smithy *, BlockSource *, const BoundingBox *, _DWORD); // r7@34
  void (__fastcall *v50)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r7@34
  void (__fastcall *v51)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r7@34
  void (__fastcall *v52)(Smithy *, BlockSource *, const BoundingBox *, signed int); // r7@34
  void (__fastcall *v53)(Smithy *, BlockSource *, char *, _DWORD); // r6@34
  void (__fastcall *v54)(Smithy *, BlockSource *, char *, _DWORD); // r6@34
  void (__fastcall *v55)(Smithy *, BlockSource *, char *, signed int); // r6@34
  void (__fastcall *v56)(Smithy *, BlockSource *, char *, signed int); // r6@34
  void (__fastcall *v57)(Smithy *, BlockSource *, char *, signed int); // r7@34
  void (__fastcall *v58)(Smithy *, BlockSource *, char *, signed int); // r4@34
  int v59; // r1@34
  void (__fastcall *v60)(Smithy *, BlockSource *, char *, signed int); // r7@34
  void (__fastcall *v61)(Smithy *, BlockSource *, char *, signed int); // r4@34
  void (__fastcall *v62)(Smithy *, BlockSource *, char *, signed int); // r4@34
  int v63; // r10@35
  int v64; // r7@35
  int v65; // r0@35
  void (__fastcall *v66)(Smithy *, BlockSource *, int, Random *); // r4@41
  void *v67; // r0@41
  void (__fastcall *v68)(Smithy *, BlockSource *, char *, signed int); // r4@44
  void (__fastcall *v69)(Smithy *, BlockSource *, char *, signed int); // r6@47
  char v70; // r7@47
  char v71; // r0@47
  void (__fastcall *v72)(Smithy *, BlockSource *, char *, signed int); // r4@50
  char v73; // r5@50
  char v74; // r0@50
  const BoundingBox *v75; // r1@51
  int v76; // r10@51
  BlockSource *v77; // r9@51
  int v78; // r11@51
  int v79; // r7@52
  const BoundingBox *v80; // r8@52
  void (__fastcall *v81)(int, BlockSource *, char *, int); // r4@53
  BlockSelector *v82; // r0@55
  void (__fastcall *v83)(int, BlockSource *, char *, signed int); // r6@58
  void (__fastcall *v84)(int, BlockSource *, char *, signed int); // r6@58
  void (__fastcall *v85)(int, BlockSource *, const BoundingBox *, signed int); // r6@58
  int v86; // r5@58
  char v87; // r7@58
  void (__fastcall *v88)(int, BlockSource *, char *, signed int); // r7@59
  void (__fastcall *v89)(int, BlockSource *, char *, signed int); // r6@60
  int v90; // r1@61
  void (__fastcall *v91)(int, BlockSource *, char *, signed int); // r12@61
  void (__fastcall *v92)(int, BlockSource *, char *, signed int); // r5@61
  char v93; // r1@61
  void (__fastcall *v94)(int, BlockSource *, char *, signed int); // r7@61
  void (__fastcall *v95)(int, BlockSource *, char *, signed int); // r7@61
  void (__fastcall *v96)(int, BlockSource *, char *, signed int); // r7@61
  unsigned int *v98; // r2@64
  signed int v99; // r1@66
  int v100; // [sp+8h] [bp-14D0h]@29
  unsigned __int64 v101; // [sp+2Ch] [bp-14ACh]@2
  Random *v102; // [sp+2Ch] [bp-14ACh]@32
  char v103; // [sp+34h] [bp-14A4h]@61
  char v104; // [sp+35h] [bp-14A3h]@61
  char v105; // [sp+38h] [bp-14A0h]@61
  char v106; // [sp+39h] [bp-149Fh]@61
  char v107; // [sp+3Ch] [bp-149Ch]@61
  char v108; // [sp+3Dh] [bp-149Bh]@61
  char v109; // [sp+40h] [bp-1498h]@61
  char v110; // [sp+41h] [bp-1497h]@61
  char v111; // [sp+44h] [bp-1494h]@61
  char v112; // [sp+45h] [bp-1493h]@61
  char v113; // [sp+48h] [bp-1490h]@58
  char v114; // [sp+49h] [bp-148Fh]@58
  char v115; // [sp+4Ch] [bp-148Ch]@58
  char v116; // [sp+4Dh] [bp-148Bh]@58
  char v117; // [sp+50h] [bp-1488h]@58
  char v118; // [sp+51h] [bp-1487h]@58
  char v119; // [sp+54h] [bp-1484h]@58
  char v120; // [sp+55h] [bp-1483h]@58
  char v121; // [sp+58h] [bp-1480h]@53
  char v122; // [sp+59h] [bp-147Fh]@53
  char v123; // [sp+5Ch] [bp-147Ch]@44
  char v124; // [sp+5Dh] [bp-147Bh]@44
  char v125; // [sp+60h] [bp-1478h]@43
  char v126; // [sp+64h] [bp-1474h]@42
  int v127; // [sp+6Ch] [bp-146Ch]@41
  char v128; // [sp+70h] [bp-1468h]@34
  char v129; // [sp+71h] [bp-1467h]@34
  char v130; // [sp+74h] [bp-1464h]@34
  char v131; // [sp+75h] [bp-1463h]@34
  char v132; // [sp+78h] [bp-1460h]@34
  char v133; // [sp+79h] [bp-145Fh]@34
  char v134; // [sp+7Ch] [bp-145Ch]@34
  char v135; // [sp+7Dh] [bp-145Bh]@34
  char v136; // [sp+80h] [bp-1458h]@34
  char v137; // [sp+81h] [bp-1457h]@34
  char v138; // [sp+84h] [bp-1454h]@34
  char v139; // [sp+85h] [bp-1453h]@34
  char v140; // [sp+88h] [bp-1450h]@34
  char v141; // [sp+89h] [bp-144Fh]@34
  char v142; // [sp+8Ch] [bp-144Ch]@34
  char v143; // [sp+8Dh] [bp-144Bh]@34
  char v144; // [sp+90h] [bp-1448h]@34
  char v145; // [sp+91h] [bp-1447h]@34
  char v146; // [sp+94h] [bp-1444h]@34
  char v147; // [sp+95h] [bp-1443h]@34
  char v148; // [sp+98h] [bp-1440h]@34
  char v149; // [sp+99h] [bp-143Fh]@34
  char v150; // [sp+9Ch] [bp-143Ch]@34
  char v151; // [sp+9Dh] [bp-143Bh]@34
  char v152; // [sp+A0h] [bp-1438h]@34
  char v153; // [sp+A1h] [bp-1437h]@34
  char v154; // [sp+A4h] [bp-1434h]@34
  char v155; // [sp+A5h] [bp-1433h]@34
  char v156; // [sp+A8h] [bp-1430h]@34
  char v157; // [sp+A9h] [bp-142Fh]@34
  char v158; // [sp+ACh] [bp-142Ch]@34
  char v159; // [sp+ADh] [bp-142Bh]@34
  char v160; // [sp+B0h] [bp-1428h]@34
  char v161; // [sp+B1h] [bp-1427h]@34
  char v162; // [sp+B4h] [bp-1424h]@34
  char v163; // [sp+B5h] [bp-1423h]@34
  char v164; // [sp+B8h] [bp-1420h]@34
  char v165; // [sp+B9h] [bp-141Fh]@34
  char v166; // [sp+BCh] [bp-141Ch]@34
  char v167; // [sp+BDh] [bp-141Bh]@34
  char v168; // [sp+C0h] [bp-1418h]@34
  char v169; // [sp+C1h] [bp-1417h]@34
  char v170; // [sp+C4h] [bp-1414h]@34
  char v171; // [sp+C5h] [bp-1413h]@34
  char v172; // [sp+C8h] [bp-1410h]@34
  char v173; // [sp+C9h] [bp-140Fh]@34
  char v174; // [sp+CCh] [bp-140Ch]@34
  char v175; // [sp+CDh] [bp-140Bh]@34
  char v176; // [sp+D0h] [bp-1408h]@34
  char v177; // [sp+D1h] [bp-1407h]@34
  char v178; // [sp+D4h] [bp-1404h]@34
  char v179; // [sp+D5h] [bp-1403h]@34
  char v180; // [sp+D8h] [bp-1400h]@34
  char v181; // [sp+D9h] [bp-13FFh]@34
  char v182; // [sp+DCh] [bp-13FCh]@34
  char v183; // [sp+DDh] [bp-13FBh]@34
  char v184; // [sp+E0h] [bp-13F8h]@34
  char v185; // [sp+E1h] [bp-13F7h]@34
  char v186; // [sp+E4h] [bp-13F4h]@34
  char v187; // [sp+E5h] [bp-13F3h]@34
  char v188; // [sp+E8h] [bp-13F0h]@34
  char v189; // [sp+E9h] [bp-13EFh]@34
  char v190; // [sp+ECh] [bp-13ECh]@34
  char v191; // [sp+EDh] [bp-13EBh]@34
  char v192; // [sp+F0h] [bp-13E8h]@34
  char v193; // [sp+F1h] [bp-13E7h]@34
  char v194; // [sp+F4h] [bp-13E4h]@34
  char v195; // [sp+F5h] [bp-13E3h]@34
  unsigned int v196; // [sp+F8h] [bp-13E0h]@26
  unsigned int v197; // [sp+FCh] [bp-13DCh]@26
  int v198; // [sp+ABCh] [bp-A1Ch]@26
  char v199; // [sp+AC0h] [bp-A18h]@26
  int v200; // [sp+AC4h] [bp-A14h]@26
  int v201; // [sp+AC8h] [bp-A10h]@28
  char v202; // [sp+AD0h] [bp-A08h]@26
  char v203; // [sp+AD1h] [bp-A07h]@26
  char v204; // [sp+AD4h] [bp-A04h]@26
  char v205; // [sp+AD5h] [bp-A03h]@26
  char v206; // [sp+AD8h] [bp-A00h]@30
  char v207; // [sp+AD9h] [bp-9FFh]@30
  char v208; // [sp+14ACh] [bp-2Ch]@60
  char v209; // [sp+14ADh] [bp-2Bh]@60
  char v210; // [sp+14B0h] [bp-28h]@30
  char v211; // [sp+14B1h] [bp-27h]@30

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)this + 9) > -1 )
  {
LABEL_26:
    v30 = 0;
    v31 = 1;
    v32 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v204 = BlockID::AIR;
    v202 = BlockID::AIR;
    v205 = 0;
    v203 = 0;
    v32(v4, v7, v5, 0);
    v33 = *(_DWORD *)v6;
    v196 = v33;
    v198 = 625;
    v199 = 0;
    v200 = 0;
    v197 = v33;
    do
    {
      v34 = v33 ^ (v33 >> 30);
      v35 = (int *)(&v196 + v30);
      v36 = v30++ + 1812433253 * v34;
      v33 = v31++ + 1812433253 * v34;
      v35[2] = v36 + 1;
    }
    while ( v30 != 397 );
    v198 = 624;
    v201 = 398;
    v37 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v37 )
      j_StructurePiece::generateBox(v4, v7, v5, 0, 0, 0, 9, 0, 6, 0, (Random *)&v196, v37);
    else
      v206 = *(_BYTE *)(Block::mCobblestone + 4);
      v207 = 0;
      v210 = *(_BYTE *)(Block::mCobblestone + 4);
      v211 = 0;
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 0, 0, 9, 0, 6, (int)&v206, (int)&v210, 0);
    v38 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v38 )
      v102 = v6;
      j_StructurePiece::generateBox(v4, v7, v5, 0, 4, 0, 9, 4, 6, 0, (Random *)&v196, v38);
      j_StructurePiece::generateBox((int)v4, (int)v7, (int)v5, 0, 4, 0, v100, 4, 6, (int)&v206, (int)&v210, 0);
    v39 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v194 = *(_BYTE *)(Block::mStoneSlab + 4);
    v195 = 0;
    v192 = *(_BYTE *)(Block::mStoneSlab + 4);
    v193 = 0;
    v39(v4, v7, v5, 0);
    v40 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v190 = BlockID::AIR;
    v188 = BlockID::AIR;
    v191 = 0;
    v189 = 0;
    v40(v4, v7, v5, 1);
    v41 = (int)v5;
    v42 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v186 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v187 = 0;
    v184 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v185 = 0;
    v42(v4, v7, v5, 1);
    v43 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v182 = *(_BYTE *)(Block::mLog + 4);
    v183 = 0;
    v180 = *(_BYTE *)(Block::mLog + 4);
    v181 = 0;
    v43(v4, v7, v5, 0);
    v44 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v178 = *(_BYTE *)(Block::mLog + 4);
    v179 = 0;
    v176 = *(_BYTE *)(Block::mLog + 4);
    v177 = 0;
    v44(v4, v7, v5, 3);
    v45 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v174 = *(_BYTE *)(Block::mLog + 4);
    v175 = 0;
    v172 = *(_BYTE *)(Block::mLog + 4);
    v173 = 0;
    v45(v4, v7, v5, 0);
    v46 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v170 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v171 = 0;
    v46(v4, v7, &v170, 3);
    v47 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v168 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v169 = 0;
    v166 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v167 = 0;
    v47(v4, v7, v5, 3);
    v48 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v164 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v165 = 0;
    v162 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v163 = 0;
    v48(v4, v7, v5, 4);
    v49 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v160 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v161 = 0;
    v158 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v159 = 0;
    v49(v4, v7, v5, 0);
    v50 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v156 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v157 = 0;
    v154 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v155 = 0;
    v50(v4, v7, v5, 1);
    v51 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v152 = *(_BYTE *)(Block::mFence + 4);
    v153 = 0;
    v150 = *(_BYTE *)(Block::mFence + 4);
    v151 = 0;
    v51(v4, v7, v5, 5);
    v52 = *(void (__fastcall **)(Smithy *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v148 = *(_BYTE *)(Block::mFence + 4);
    v149 = 0;
    v146 = *(_BYTE *)(Block::mFence + 4);
    v147 = 0;
    v52(v4, v7, v5, 9);
    v53 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v144 = *(_BYTE *)(Block::mGlassPane + 4);
    v145 = 0;
    v53(v4, v7, &v144, 0);
    v54 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v142 = *(_BYTE *)(Block::mGlassPane + 4);
    v143 = 0;
    v54(v4, v7, &v142, 0);
    v55 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v140 = *(_BYTE *)(Block::mGlassPane + 4);
    v141 = 0;
    v55(v4, v7, &v140, 2);
    v56 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v138 = *(_BYTE *)(Block::mGlassPane + 4);
    v139 = 0;
    v56(v4, v7, &v138, 4);
    v57 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v136 = *(_BYTE *)(Block::mFence + 4);
    v137 = 0;
    v57(v4, v7, &v136, 2);
    v58 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v134 = *(_BYTE *)(Block::mWoolCarpet + 4);
    v135 = j_WoolCarpetBlock::getBlockDataForItemAuxValue((WoolCarpetBlock *)3, v59);
    v58(v4, v7, &v134, 2);
    v60 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v132 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v133 = 0;
    v60(v4, v7, &v132, 1);
    v61 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v130 = *(_BYTE *)(Block::mOakStairs + 4);
    v131 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mOakStairs, 3);
    v61(v4, v7, &v130, 2);
    v62 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v128 = *(_BYTE *)(Block::mOakStairs + 4);
    v129 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mOakStairs, 1);
    v62(v4, v7, &v128, 1);
    if ( !*((_BYTE *)v4 + 52) )
      v63 = j_StructurePiece::getWorldY(v4, 1);
      v64 = (*(int (__fastcall **)(Smithy *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 5, 5);
      v65 = (*(int (__fastcall **)(Smithy *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 5, 5);
      if ( *(_DWORD *)v41 <= v64
        && *(_DWORD *)(v41 + 12) >= v64
        && *(_DWORD *)(v41 + 8) <= v65
        && *(_DWORD *)(v41 + 20) >= v65
        && *(_DWORD *)(v41 + 4) <= v63
        && *(_DWORD *)(v41 + 16) >= v63 )
      {
        *((_BYTE *)v4 + 52) = 1;
        v66 = *(void (__fastcall **)(Smithy *, BlockSource *, int, Random *))(*(_DWORD *)v4 + 48);
        sub_21E94B4((void **)&v127, "loot_tables/chests/village_blacksmith.json");
        v66(v4, v7, v41, v102);
        v67 = (void *)(v127 - 12);
        if ( (int *)(v127 - 12) != &dword_28898C0 )
        {
          v98 = (unsigned int *)(v127 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v99 = __ldrex(v98);
            while ( __strex(v99 - 1, v98) );
          }
          else
            v99 = (*v98)--;
          if ( v99 <= 0 )
            j_j_j_j__ZdlPv_9(v67);
        }
      }
    j_StructurePiece::getBlock((StructurePiece *)&v126, v4, (int)v7, 6, 0, (const BoundingBox *)0xFFFFFFFF, v41);
    if ( !v126 )
      j_StructurePiece::getBlock((StructurePiece *)&v125, v4, (int)v7, 6, -1, (const BoundingBox *)0xFFFFFFFF, v41);
      if ( v125 )
        v68 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v123 = *(_BYTE *)(Block::mStoneStairs + 4);
        v124 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
        v68(v4, v7, &v123, 6);
    j_StructurePiece::getBlock((StructurePiece *)&v126, v4, (int)v7, 7, 0, (const BoundingBox *)0xFFFFFFFF, v41);
      j_StructurePiece::getBlock((StructurePiece *)&v125, v4, (int)v7, 7, -1, (const BoundingBox *)0xFFFFFFFF, v41);
        v69 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v70 = *(_BYTE *)(Block::mStoneStairs + 4);
        v71 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
        v123 = v70;
        v124 = v71;
        v69(v4, v7, &v123, 7);
    j_StructurePiece::getBlock((StructurePiece *)&v126, v4, (int)v7, 8, 0, (const BoundingBox *)0xFFFFFFFF, v41);
      j_StructurePiece::getBlock((StructurePiece *)&v125, v4, (int)v7, 8, -1, (const BoundingBox *)0xFFFFFFFF, v41);
        v72 = *(void (__fastcall **)(Smithy *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v73 = *(_BYTE *)(Block::mStoneStairs + 4);
        v74 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
        v123 = v73;
        v124 = v74;
        v72(v4, v7, &v123, 8);
    v75 = (const BoundingBox *)v41;
    v76 = (int)v4;
    v77 = v7;
    v78 = 0;
      v79 = 0;
      v80 = v75;
      do
        j_StructurePiece::generateAirColumnUp((StructurePiece *)v76, v77, v79, 6, v78, v80);
        v81 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v76 + 44);
        v121 = *(_BYTE *)(Block::mCobblestone + 4);
        v122 = 0;
        v81(v76, v77, &v121, v79++);
      while ( v79 != 10 );
      ++v78;
      v75 = v80;
    while ( v78 != 7 );
    v82 = *(BlockSelector **)(v76 + 48);
    if ( v82 )
      j_StructurePiece::generateBox((StructurePiece *)v76, v77, v80, 6, 1, 4, 9, 4, 6, 0, (Random *)&v196, v82);
      j_StructurePiece::generateBox(v76, (int)v77, (int)v80, 6, 1, 4, (int)v80, 4, 6, (int)&v206, (int)&v210, 0);
    v83 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
    v119 = *(_BYTE *)(Block::mIronFence + 4);
    v120 = 0;
    v83(v76, v77, &v119, 9);
    v84 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
    v117 = *(_BYTE *)(Block::mIronFence + 4);
    v118 = 0;
    v84(v76, v77, &v117, 9);
    v85 = *(void (__fastcall **)(int, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v76 + 40);
    v115 = BlockID::AIR;
    v113 = BlockID::AIR;
    v116 = 0;
    v114 = 0;
    v85(v76, v77, v80, 7);
    v86 = *(_DWORD *)(v76 + 48);
    v87 = *(_BYTE *)(Block::mCobblestone + 4);
    j___aeabi_memcpy8_0((int)&v206, (int)&v196, 2516);
    if ( v86 )
      (*(void (__fastcall **)(int, char *, signed int, signed int))(*(_DWORD *)v86 + 8))(v86, &v206, 6, 1);
      v88 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
      v210 = *(_BYTE *)(v86 + 4);
      v211 = *(_BYTE *)(v86 + 5);
      v88(v76, v77, &v210, 6);
      v89 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
      v208 = v87;
      v209 = 0;
      v89(v76, v77, &v208, 6);
    v90 = Direction::DIRECTION_OPPOSITE[*(_DWORD *)(v76 + 28)];
    v91 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
    v111 = *(_BYTE *)(Block::mFurnace + 4);
    v112 = Direction::DIRECTION_FACING[v90];
    v91(v76, v77, &v111, 6);
    v92 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
    v93 = Direction::DIRECTION_FACING[Direction::DIRECTION_OPPOSITE[*(_DWORD *)(v76 + 28)]];
    v109 = *(_BYTE *)(Block::mFurnace + 4);
    v110 = v93;
    v92(v76, v77, &v109, 6);
    v94 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
    v107 = *(_BYTE *)(Block::mDoubleStoneSlab + 4);
    v108 = 0;
    v94(v76, v77, &v107, 8);
    v95 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
    v105 = *(_BYTE *)(Block::mStillLava + 4);
    v106 = 0;
    v95(v76, v77, &v105, 7);
    v96 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v76 + 36);
    v103 = *(_BYTE *)(Block::mStillLava + 4);
    v104 = 0;
    v96(v76, v77, &v103, 8);
    return 1;
  }
  v101 = __PAIR__((unsigned int)a2, (unsigned int)a3);
  v8 = a4;
  v9 = *((_DWORD *)this + 3);
  v10 = *((_DWORD *)this + 6);
  if ( v9 > v10 )
    goto LABEL_73;
  v11 = *((_DWORD *)v4 + 4);
  v12 = 0;
  v13 = 0;
  do
    v14 = *((_DWORD *)v4 + 1);
    if ( v14 <= v11 )
        v15 = v14;
        v16 = *(_QWORD *)v8;
        v17 = *((_QWORD *)v8 + 1) >> 32;
        v18 = *((_QWORD *)v8 + 1);
        v20 = __OFSUB__(v17, v14);
        v19 = v17 - v14 < 0;
        v21 = 0;
        v22 = *((_QWORD *)v8 + 2);
        if ( !(v19 ^ v20) )
          v21 = 1;
        v23 = 0;
        if ( (signed int)v16 <= v15 )
          v23 = 1;
        v20 = __OFSUB__(v18, v9);
        v24 = v18 == v9;
        v19 = v18 - v9 < 0;
        v25 = 0;
        if ( (unsigned __int8)(v19 ^ v20) | v24 )
          v25 = 1;
        v26 = 0;
        if ( SHIDWORD(v22) >= v9 )
          v26 = 1;
        v27 = 0;
        if ( SHIDWORD(v16) < 65 )
          v27 = 1;
        if ( (signed int)v22 >= 64 && (v21 & v23 & v25 & v26 & v27) == 1 )
          v28 = j_BlockSource::getAboveTopSolidBlock((BlockSource *)HIDWORD(v101), v15, v9, 0, 0);
          ++v12;
          if ( v28 < 64 )
            v28 = 64;
          v11 = *((_DWORD *)v4 + 4);
          v13 += v28;
        v14 = v15 + 1;
      while ( v15 < v11 );
      v10 = *((_DWORD *)v4 + 6);
    v20 = __OFSUB__(v9, v10);
    v19 = v9++ - v10 < 0;
  while ( v19 ^ v20 );
  if ( !v12 )
LABEL_73:
    *((_DWORD *)v4 + 9) = -1;
  v29 = v13 / v12;
  *((_DWORD *)v4 + 9) = v13 / v12;
  if ( v13 / v12 >= 0 )
    v5 = v8;
    *((_DWORD *)v4 + 2) += v29 - *((_DWORD *)v4 + 5) + 5;
    *((_DWORD *)v4 + 5) = v29 + 5;
    v7 = (BlockSource *)HIDWORD(v101);
    v6 = (Random *)v101;
    goto LABEL_26;
  return 1;
}


int __fastcall Smithy::Smithy(int result)
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
  *(_DWORD *)result = &off_2724564;
  return result;
}
