

int __fastcall SHLibrary::SHLibrary(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)result = &off_272405C;
  return result;
}


_DWORD *__fastcall SHLibrary::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r7@1
  __int64 *v9; // r6@1
  _DWORD *result; // r0@5
  _DWORD *v11; // r0@6
  _DWORD *v12; // r6@6
  unsigned int v13; // r0@6
  int v14; // r2@6
  unsigned int v15; // r1@6
  char v16; // r0@6
  int v17; // r1@8
  int v18; // r1@8
  int v19; // r2@8
  int v20; // r3@8
  int v21; // r1@8
  Random *v22; // [sp+1Ch] [bp-5Ch]@1
  _DWORD *v23; // [sp+20h] [bp-58h]@1
  int v24; // [sp+24h] [bp-54h]@3
  int v25; // [sp+28h] [bp-50h]@3
  int v26; // [sp+2Ch] [bp-4Ch]@3
  int v27; // [sp+30h] [bp-48h]@3
  int v28; // [sp+34h] [bp-44h]@3
  int v29; // [sp+38h] [bp-40h]@3
  int v30; // [sp+3Ch] [bp-3Ch]@1
  int v31; // [sp+40h] [bp-38h]@1
  int v32; // [sp+44h] [bp-34h]@3
  int v33; // [sp+48h] [bp-30h]@3
  int v34; // [sp+4Ch] [bp-2Ch]@3
  int v35; // [sp+50h] [bp-28h]@3

  v23 = (_DWORD *)a1;
  v22 = (Random *)a3;
  v8 = a4;
  v9 = (__int64 *)a2;
  j_BoundingBox::orientBox((BoundingBox *)&v30, a4, a5, a6, -4, -1, 0, 14, 11, 15, a7);
  if ( (v31 < 11 || j_StructurePiece::findCollisionPiece(v9, (int)&v30))
    && ((j_BoundingBox::orientBox((BoundingBox *)&v24, v8, a5, a6, -4, -1, 0, 14, 6, 15, a7),
         v30 = v24,
         v31 = v25,
         v32 = v26,
         v33 = v27,
         v34 = v28,
         v35 = v29,
         v25 < 11)
     || j_StructurePiece::findCollisionPiece(v9, (int)&v30)) )
  {
    result = 0;
    *v23 = 0;
  }
  else
    v11 = j_operator new(0x2Cu);
    v12 = v11;
    v11[5] = 0;
    v11[6] = 0;
    v11[3] = 0;
    v11[4] = 0;
    v11[1] = 0;
    v11[2] = 0;
    v11[8] = a8;
    v11[9] = 0;
    *v11 = &off_272405C;
    v11[7] = a7;
    v13 = j_Random::_genRandInt32(v22);
    v14 = 0;
    v15 = v13 % 5;
    v16 = 0;
    if ( v15 <= 3 )
      v14 = dword_2610B1C[v15];
    v17 = v30;
    v12[9] = v14;
    v12[1] = v17;
    v18 = v31;
    v19 = v32;
    v12[2] = v31;
    v12[3] = v19;
    v12[4] = v33;
    v20 = v35;
    v21 = 1 - v18 + v34;
    v12[5] = v34;
    v12[6] = v20;
    if ( v21 > 6 )
      v16 = 1;
    *((_BYTE *)v12 + 40) = v16;
    result = v23;
    *v23 = v12;
  return result;
}


signed int __fastcall SHLibrary::postProcess(SHLibrary *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHLibrary *v4; // r4@1
  BlockSource *v5; // r7@1
  Random *v6; // r9@1
  __int16 *v7; // r11@1
  int v8; // r2@1
  int v9; // r2@3
  signed int v10; // r9@3
  void (__fastcall *v11)(SHLibrary *, BlockSource *, __int16 *, signed int); // r12@4
  __int16 *v12; // r5@5
  void (__fastcall *v13)(SHLibrary *, BlockSource *, __int16 *, signed int); // r6@5
  void (__fastcall *v14)(SHLibrary *, BlockSource *, __int16 *, signed int); // r12@6
  void (__fastcall *v15)(SHLibrary *, BlockSource *, __int16 *, signed int); // r12@6
  void (__fastcall *v16)(SHLibrary *, BlockSource *, __int16 *, signed int); // r12@7
  char v17; // r5@7
  char v18; // r0@7
  void (__fastcall *v19)(SHLibrary *, BlockSource *, char *, signed int); // r12@7
  char v20; // r5@7
  char v21; // r0@7
  void (__fastcall *v22)(SHLibrary *, BlockSource *, char *, signed int); // r12@7
  void (__fastcall *v23)(SHLibrary *, BlockSource *, __int16 *, signed int); // r12@8
  __int16 *v24; // r10@11
  signed int v25; // r9@11
  BlockSource *v26; // r11@11
  void (__fastcall *v27)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@12
  void (__fastcall *v28)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@12
  void (__fastcall *v29)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@12
  void (__fastcall *v30)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  void (__fastcall *v31)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  void (__fastcall *v32)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  void (__fastcall *v33)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  StructurePiece *v34; // r11@14
  void (__fastcall *v35)(SHLibrary *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v36)(SHLibrary *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v37)(SHLibrary *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v38)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  void (__fastcall *v39)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  void (__fastcall *v40)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  void (__fastcall *v41)(SHLibrary *, BlockSource *, __int16 *, signed int); // r7@14
  void (__fastcall *v42)(SHLibrary *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v43)(SHLibrary *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v44)(SHLibrary *, BlockSource *, char *, signed int); // r7@14
  char v45; // r4@14
  void (__fastcall *v46)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v47)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v48)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v49)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v50)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v51)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v52)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v53)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v54)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v55)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v56)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v57)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v58)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v59)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v60)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v61)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v62)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v63)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  void (__fastcall *v64)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  char v65; // r5@14
  char v66; // r0@14
  void (__fastcall *v67)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  char v68; // r5@14
  char v69; // r0@14
  void (__fastcall *v70)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  char v71; // r4@14
  char v72; // r0@14
  void (__fastcall *v73)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  char v74; // r4@14
  char v75; // r0@14
  void (__fastcall *v76)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  char v77; // r4@14
  char v78; // r0@14
  void (__fastcall *v79)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  char v80; // r4@14
  char v81; // r0@14
  void (__fastcall *v82)(StructurePiece *, BlockSource *, char *, signed int); // r7@14
  SHLibrary *v83; // r6@15
  int v84; // r4@15
  int v85; // r9@15
  int v86; // r0@15
  void (__fastcall *v87)(SHLibrary *, BlockSource *, __int16 *, Random *); // r4@21
  void *v88; // r0@21
  int v89; // r4@23
  int v90; // r9@23
  int v91; // r0@23
  void (__fastcall *v92)(SHLibrary *, BlockSource *, __int16 *, Random *); // r4@29
  void *v93; // r0@29
  unsigned int *v95; // r2@31
  signed int v96; // r1@33
  unsigned int *v97; // r2@35
  signed int v98; // r1@37
  Random *v99; // [sp+18h] [bp-108h]@1
  Random *v100; // [sp+34h] [bp-ECh]@1
  BlockSource *v101; // [sp+38h] [bp-E8h]@13
  int v102; // [sp+4Ch] [bp-D4h]@29
  int v103; // [sp+54h] [bp-CCh]@21
  char v104; // [sp+58h] [bp-C8h]@14
  char v105; // [sp+59h] [bp-C7h]@14
  char v106; // [sp+5Ch] [bp-C4h]@14
  char v107; // [sp+5Dh] [bp-C3h]@14
  char v108; // [sp+60h] [bp-C0h]@14
  char v109; // [sp+61h] [bp-BFh]@14
  char v110; // [sp+64h] [bp-BCh]@14
  char v111; // [sp+65h] [bp-BBh]@14
  char v112; // [sp+68h] [bp-B8h]@14
  char v113; // [sp+69h] [bp-B7h]@14
  char v114; // [sp+6Ch] [bp-B4h]@14
  char v115; // [sp+6Dh] [bp-B3h]@14
  char v116; // [sp+70h] [bp-B0h]@14
  char v117; // [sp+71h] [bp-AFh]@14
  char v118; // [sp+74h] [bp-ACh]@14
  char v119; // [sp+75h] [bp-ABh]@14
  char v120; // [sp+78h] [bp-A8h]@14
  char v121; // [sp+79h] [bp-A7h]@14
  char v122; // [sp+7Ch] [bp-A4h]@14
  char v123; // [sp+7Dh] [bp-A3h]@14
  char v124; // [sp+80h] [bp-A0h]@14
  char v125; // [sp+81h] [bp-9Fh]@14
  char v126; // [sp+84h] [bp-9Ch]@14
  char v127; // [sp+85h] [bp-9Bh]@14
  char v128; // [sp+88h] [bp-98h]@14
  char v129; // [sp+89h] [bp-97h]@14
  char v130; // [sp+8Ch] [bp-94h]@14
  char v131; // [sp+8Dh] [bp-93h]@14
  char v132; // [sp+90h] [bp-90h]@14
  char v133; // [sp+91h] [bp-8Fh]@14
  char v134; // [sp+94h] [bp-8Ch]@14
  char v135; // [sp+95h] [bp-8Bh]@14
  char v136; // [sp+98h] [bp-88h]@12
  char v137; // [sp+99h] [bp-87h]@12
  char v138; // [sp+9Ch] [bp-84h]@12
  char v139; // [sp+9Dh] [bp-83h]@12
  char v140; // [sp+A0h] [bp-80h]@12
  char v141; // [sp+A1h] [bp-7Fh]@12
  char v142; // [sp+A4h] [bp-7Ch]@12
  char v143; // [sp+A5h] [bp-7Bh]@12
  char v144; // [sp+A8h] [bp-78h]@12
  char v145; // [sp+A9h] [bp-77h]@12
  char v146; // [sp+ACh] [bp-74h]@12
  char v147; // [sp+ADh] [bp-73h]@12
  char v148; // [sp+B0h] [bp-70h]@6
  char v149; // [sp+B1h] [bp-6Fh]@6
  char v150; // [sp+B4h] [bp-6Ch]@6
  char v151; // [sp+B5h] [bp-6Bh]@6
  char v152; // [sp+B8h] [bp-68h]@6
  char v153; // [sp+B9h] [bp-67h]@6
  char v154; // [sp+BCh] [bp-64h]@6
  char v155; // [sp+BDh] [bp-63h]@6
  char v156; // [sp+C0h] [bp-60h]@5
  char v157; // [sp+C1h] [bp-5Fh]@5
  char v158; // [sp+C4h] [bp-5Ch]@5
  char v159; // [sp+C5h] [bp-5Bh]@5
  char v160; // [sp+C8h] [bp-58h]@5
  char v161; // [sp+C9h] [bp-57h]@5
  char v162; // [sp+CCh] [bp-54h]@5
  char v163; // [sp+CDh] [bp-53h]@5
  char v164; // [sp+D0h] [bp-50h]@8
  char v165; // [sp+D1h] [bp-4Fh]@8
  char v166; // [sp+D4h] [bp-4Ch]@8
  char v167; // [sp+D5h] [bp-4Bh]@8
  char v168; // [sp+D8h] [bp-48h]@8
  char v169; // [sp+D9h] [bp-47h]@8
  char v170; // [sp+DCh] [bp-44h]@8
  char v171; // [sp+DDh] [bp-43h]@8
  char v172; // [sp+E0h] [bp-40h]@7
  char v173; // [sp+E1h] [bp-3Fh]@7
  char v174; // [sp+E4h] [bp-3Ch]@7
  char v175; // [sp+E5h] [bp-3Bh]@7
  char v176; // [sp+E8h] [bp-38h]@7
  char v177; // [sp+E9h] [bp-37h]@7
  char v178; // [sp+ECh] [bp-34h]@7
  char v179; // [sp+EDh] [bp-33h]@7
  char v180; // [sp+F0h] [bp-30h]@3
  char v181; // [sp+F4h] [bp-2Ch]@3
  char v182; // [sp+F8h] [bp-28h]@7
  char v183; // [sp+F9h] [bp-27h]@7

  v4 = this;
  v5 = a2;
  v6 = a3;
  v99 = a3;
  v7 = (__int16 *)a4;
  v8 = 5;
  v100 = v99;
  if ( *((_BYTE *)this + 40) )
    v8 = 10;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    13,
    v8,
    14,
    v99,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v5, v9, v7, *((_DWORD *)v4 + 9), 4);
  v181 = *(_BYTE *)(Block::mWeb + 4);
  v180 = *(_BYTE *)(Block::mWeb + 4);
  j_StructurePiece::generateMaybeBox(
    *(float *)&v4,
    (int)v5,
    (int)v7,
    (int)v6,
    1032805417,
    2,
    1,
    11,
    4,
    (int)&v181,
    (int)&v180,
    0);
  v10 = 4;
  do
  {
    v11 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    if ( v10 & 3 )
    {
      v162 = *(_BYTE *)(Block::mBookshelf + 4);
      v163 = 0;
      v160 = *(_BYTE *)(Block::mBookshelf + 4);
      v161 = 0;
      v11(v4, v5, v7, 1);
      v12 = v7;
      v13 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
      v158 = *(_BYTE *)(Block::mBookshelf + 4);
      v159 = 0;
      v156 = *(_BYTE *)(Block::mBookshelf + 4);
      v157 = 0;
      v13(v4, v5, v7, 12);
      if ( !*((_BYTE *)v4 + 40) )
        goto LABEL_10;
      v14 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
      v154 = *(_BYTE *)(Block::mBookshelf + 4);
      v155 = 0;
      v152 = *(_BYTE *)(Block::mBookshelf + 4);
      v153 = 0;
      v14(v4, v5, v7, 1);
      v15 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
      v150 = *(_BYTE *)(Block::mBookshelf + 4);
      v151 = 0;
      v148 = *(_BYTE *)(Block::mBookshelf + 4);
      v149 = 0;
    }
    else
      v178 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v179 = 0;
      v176 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v177 = 0;
      v16 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
      v174 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v175 = 0;
      v172 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v173 = 0;
      v16(v4, v5, v7, 12);
      v17 = *(_BYTE *)(Block::mTorch + 4);
      v18 = j_StructurePiece::getTorchData(v4, 1);
      v19 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v182 = v17;
      v183 = v18;
      v19(v4, v5, &v182, 2);
      v20 = *(_BYTE *)(Block::mTorch + 4);
      v21 = j_StructurePiece::getTorchData(v4, 3);
      v22 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v182 = v20;
      v183 = v21;
      v22(v4, v5, &v182, 11);
      v23 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
      v170 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v171 = 0;
      v168 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v169 = 0;
      v23(v4, v5, v7, 1);
      v166 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v167 = 0;
      v164 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v165 = 0;
    v15(v4, v5, v12, 12);
LABEL_10:
    ++v10;
    v7 = v12;
  }
  while ( v10 != 17 );
  v24 = v12;
  v25 = 3;
  v26 = v5;
    v27 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v146 = *(_BYTE *)(Block::mBookshelf + 4);
    v147 = 0;
    v144 = *(_BYTE *)(Block::mBookshelf + 4);
    v145 = 0;
    v27(v4, v26, v12, 3);
    v28 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v142 = *(_BYTE *)(Block::mBookshelf + 4);
    v143 = 0;
    v140 = *(_BYTE *)(Block::mBookshelf + 4);
    v141 = 0;
    v28(v4, v26, v12, 6);
    v29 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v138 = *(_BYTE *)(Block::mBookshelf + 4);
    v139 = 0;
    v136 = *(_BYTE *)(Block::mBookshelf + 4);
    v137 = 0;
    v29(v4, v26, v12, 9);
    v25 += 2;
  while ( v25 < 12 );
  v101 = v26;
  if ( *((_BYTE *)v4 + 40) )
    v30 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v134 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v135 = 0;
    v132 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v133 = 0;
    v30(v4, v26, v12, 1);
    v31 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v130 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v131 = 0;
    v128 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v129 = 0;
    v31(v4, v26, v12, 10);
    v32 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v126 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v127 = 0;
    v124 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v125 = 0;
    v32(v4, v26, v12, 4);
    v33 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v122 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v123 = 0;
    v120 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v121 = 0;
    v33(v4, v26, v12, 4);
    v34 = v4;
    v35 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v182 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v183 = 0;
    v35(v4, v101, &v182, 9);
    v36 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v36(v4, v101, &v182, 8);
    v37 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v37(v4, v101, &v182, 9);
    v38 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v118 = *(_BYTE *)(Block::mFence + 4);
    v119 = 0;
    v116 = *(_BYTE *)(Block::mFence + 4);
    v117 = 0;
    v38(v4, v101, v12, 3);
    v39 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v114 = *(_BYTE *)(Block::mFence + 4);
    v115 = 0;
    v112 = *(_BYTE *)(Block::mFence + 4);
    v113 = 0;
    v39(v4, v101, v12, 10);
    v40 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v110 = *(_BYTE *)(Block::mFence + 4);
    v111 = 0;
    v108 = *(_BYTE *)(Block::mFence + 4);
    v109 = 0;
    v40(v4, v101, v12, 4);
    v41 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v106 = *(_BYTE *)(Block::mFence + 4);
    v107 = 0;
    v104 = *(_BYTE *)(Block::mFence + 4);
    v105 = 0;
    v41(v4, v101, v12, 4);
    v42 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v182 = *(_BYTE *)(Block::mFence + 4);
    v42(v4, v101, &v182, 9);
    v43 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v43(v4, v101, &v182, 8);
    v44 = *(void (__fastcall **)(SHLibrary *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v44(v4, v101, &v182, 9);
    v45 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mLadder, 3);
    v46 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v182 = *(_BYTE *)(Block::mLadder + 4);
    v183 = v45;
    v46(v34, v101, &v182, 10);
    v47 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v47(v34, v101, &v182, 10);
    v48 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v48(v34, v101, &v182, 10);
    v49 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v49(v34, v101, &v182, 10);
    v50 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v50(v34, v101, &v182, 10);
    v51 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v51(v34, v101, &v182, 10);
    v52 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v52(v34, v101, &v182, 10);
    v53 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v53(v34, v101, &v182, 6);
    v54 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v54(v34, v101, &v182, 7);
    v55 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v55(v34, v101, &v182, 6);
    v56 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v56(v34, v101, &v182, 7);
    v57 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v57(v34, v101, &v182, 6);
    v58 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v58(v34, v101, &v182, 7);
    v59 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v59(v34, v101, &v182, 5);
    v60 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v60(v34, v101, &v182, 8);
    v61 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v61(v34, v101, &v182, 6);
    v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v62(v34, v101, &v182, 6);
    v63 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v63(v34, v101, &v182, 7);
    v64 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v64(v34, v101, &v182, 7);
    v65 = *(_BYTE *)(Block::mTorch + 4);
    v66 = j_StructurePiece::getTorchData(v34, 255);
    v67 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v182 = v65;
    v183 = v66;
    v67(v34, v101, &v182, 5);
    v68 = *(_BYTE *)(Block::mTorch + 4);
    v69 = j_StructurePiece::getTorchData(v34, 255);
    v70 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v182 = v68;
    v12 = v24;
    v183 = v69;
    v70(v34, v101, &v182, 8);
    v71 = *(_BYTE *)(Block::mTorch + 4);
    v72 = j_StructurePiece::getTorchData(v34, 255);
    v73 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v182 = v71;
    v183 = v72;
    v73(v34, v101, &v182, 6);
    v74 = *(_BYTE *)(Block::mTorch + 4);
    v75 = j_StructurePiece::getTorchData(v34, 255);
    v76 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v182 = v74;
    v183 = v75;
    v76(v34, v101, &v182, 6);
    v77 = *(_BYTE *)(Block::mTorch + 4);
    v78 = j_StructurePiece::getTorchData(v34, 255);
    v79 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v182 = v77;
    v183 = v78;
    v79(v34, v101, &v182, 7);
    v80 = *(_BYTE *)(Block::mTorch + 4);
    v81 = j_StructurePiece::getTorchData(v34, 255);
    v82 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v34 + 36);
    v182 = v80;
    v4 = v34;
    v183 = v81;
    v82(v34, v101, &v182, 7);
  v83 = v4;
  v84 = (*(int (__fastcall **)(SHLibrary *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 3, 5);
  v85 = j_StructurePiece::getWorldY(v83, 3);
  v86 = (*(int (__fastcall **)(SHLibrary *, signed int, signed int))(*(_DWORD *)v83 + 32))(v83, 3, 5);
  if ( *(_DWORD *)v12 <= v84
    && *((_DWORD *)v12 + 3) >= v84
    && *((_DWORD *)v12 + 2) <= v86
    && *((_DWORD *)v12 + 5) >= v86
    && *((_DWORD *)v12 + 1) <= v85
    && *((_DWORD *)v12 + 4) >= v85 )
    v87 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, Random *))(*(_DWORD *)v83 + 48);
    sub_21E94B4((void **)&v103, "loot_tables/chests/stronghold_library.json");
    v87(v83, v101, v12, v100);
    v88 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v103 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
      }
      else
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j__ZdlPv_9(v88);
  if ( *((_BYTE *)v83 + 40) )
    v89 = (*(int (__fastcall **)(SHLibrary *, signed int, signed int))(*(_DWORD *)v83 + 28))(v83, 12, 1);
    v90 = j_StructurePiece::getWorldY(v83, 8);
    v91 = (*(int (__fastcall **)(SHLibrary *, signed int, signed int))(*(_DWORD *)v83 + 32))(v83, 12, 1);
    if ( *(_DWORD *)v12 <= v89
      && *((_DWORD *)v12 + 3) >= v89
      && *((_DWORD *)v12 + 2) <= v91
      && *((_DWORD *)v12 + 5) >= v91
      && *((_DWORD *)v12 + 1) <= v90
      && *((_DWORD *)v12 + 4) >= v90 )
      v92 = *(void (__fastcall **)(SHLibrary *, BlockSource *, __int16 *, Random *))(*(_DWORD *)v83 + 48);
      sub_21E94B4((void **)&v102, "loot_tables/chests/stronghold_library.json");
      v92(v83, v101, v12, v100);
      v93 = (void *)(v102 - 12);
      if ( (int *)(v102 - 12) != &dword_28898C0 )
        v97 = (unsigned int *)(v102 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
        }
        else
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j__ZdlPv_9(v93);
  return 1;
}


signed int __fastcall SHLibrary::getType(SHLibrary *this)
{
  return 1397247049;
}


int __fastcall SHLibrary::SHLibrary(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  char v6; // r6@1
  int v7; // r5@1
  unsigned int v8; // r0@1
  int v9; // r1@1
  int v10; // r0@3
  bool v11; // zf@3
  bool v12; // nf@3
  unsigned __int8 v13; // vf@3
  int result; // r0@3

  v5 = a1;
  v6 = 0;
  v7 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_272405C;
  *(_DWORD *)(a1 + 28) = a5;
  v8 = j_Random::_genRandInt32(this) % 5;
  v9 = 0;
  if ( v8 <= 3 )
    v9 = dword_2610B1C[v8];
  *(_DWORD *)(v5 + 36) = v9;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)v7;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v5 + 20) = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v7 + 20);
  v10 = *(_DWORD *)(v7 + 16) + 1 - *(_DWORD *)(v7 + 4);
  v13 = __OFSUB__(v10, 6);
  v11 = v10 == 6;
  v12 = v10 - 6 < 0;
  result = v5;
  if ( !((unsigned __int8)(v12 ^ v13) | v11) )
    v6 = 1;
  *(_BYTE *)(v5 + 40) = v6;
  return result;
}
