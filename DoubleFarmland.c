

signed int __fastcall DoubleFarmland::postProcess(DoubleFarmland *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  DoubleFarmland *v4; // r10@1
  const BoundingBox *v5; // r9@1
  Random *v6; // r4@1
  BlockSource *v7; // r8@1
  int v8; // r11@2
  int v9; // r0@2
  int v10; // r1@3
  signed int v11; // r8@3
  signed int v12; // r10@3
  int v13; // r2@4
  int v14; // r7@5
  __int64 v15; // kr20_8@5
  int v16; // r0@5
  int v17; // r3@5
  bool v18; // nf@5
  unsigned __int8 v19; // vf@5
  signed int v20; // r0@5
  signed int v21; // r5@5 OVERLAPPED
  int v22; // r6@5 OVERLAPPED
  signed int v23; // r2@7
  bool v24; // zf@9
  signed int v25; // r3@9
  signed int v26; // r6@11
  signed int v27; // r4@13
  int v28; // r0@17
  signed int v29; // r1@23
  int v30; // r0@24
  void (__fastcall *v31)(DoubleFarmland *, BlockSource *, const BoundingBox *, _DWORD); // r6@26
  int v32; // r2@26
  int v33; // r3@26
  __int64 v34; // kr30_8@26
  BlockSource *v35; // r5@26
  char v36; // r8@26
  void (__fastcall *v37)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v38)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v39)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v40)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v41)(DoubleFarmland *, BlockSource *, const BoundingBox *, _DWORD); // r4@28
  void (__fastcall *v42)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v43)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v44)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v45)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r4@28
  void (__fastcall *v46)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r6@28
  BlockSource *v47; // r4@28
  void (__fastcall *v48)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int); // r6@28
  signed int v49; // r5@29
  char v50; // r6@30
  void (__fastcall *v51)(DoubleFarmland *, BlockSource *, char *, signed int); // r7@30
  unsigned int v52; // r0@30
  void (__fastcall *v53)(DoubleFarmland *, BlockSource *, char *, signed int); // r6@30
  unsigned int v54; // r0@30
  void (__fastcall *v55)(DoubleFarmland *, BlockSource *, char *, signed int); // r6@30
  unsigned int v56; // r0@30
  void (__fastcall *v57)(DoubleFarmland *, BlockSource *, char *, signed int); // r6@30
  unsigned int v58; // r0@30
  void (__fastcall *v59)(DoubleFarmland *, BlockSource *, char *, signed int); // r6@30
  unsigned int v60; // r0@30
  void (__fastcall *v61)(DoubleFarmland *, BlockSource *, char *, signed int); // r6@30
  unsigned int v62; // r0@30
  void (__fastcall *v63)(DoubleFarmland *, BlockSource *, char *, signed int); // r6@30
  unsigned int v64; // r0@30
  void (__fastcall *v65)(DoubleFarmland *, BlockSource *, char *, signed int); // r6@30
  unsigned int v66; // r0@30
  StructurePiece *v67; // r11@31
  const BoundingBox *v68; // r10@31
  int v69; // r8@31
  int v70; // r6@32
  BlockSource *v71; // r9@32
  void (__fastcall *v72)(StructurePiece *, BlockSource *, char *, int); // r4@33
  Random *v74; // [sp+20h] [bp-C0h]@3
  Random *v75; // [sp+20h] [bp-C0h]@26
  BlockSource *v76; // [sp+24h] [bp-BCh]@2
  Biome *v77; // [sp+28h] [bp-B8h]@3
  Biome *v78; // [sp+28h] [bp-B8h]@26
  char v79; // [sp+2Ch] [bp-B4h]@33
  char v80; // [sp+2Dh] [bp-B3h]@33
  char v81; // [sp+30h] [bp-B0h]@30
  char v82; // [sp+31h] [bp-AFh]@30
  char v83; // [sp+34h] [bp-ACh]@30
  char v84; // [sp+35h] [bp-ABh]@30
  char v85; // [sp+38h] [bp-A8h]@30
  char v86; // [sp+39h] [bp-A7h]@30
  char v87; // [sp+3Ch] [bp-A4h]@30
  char v88; // [sp+3Dh] [bp-A3h]@30
  char v89; // [sp+40h] [bp-A0h]@30
  char v90; // [sp+41h] [bp-9Fh]@30
  char v91; // [sp+44h] [bp-9Ch]@30
  char v92; // [sp+45h] [bp-9Bh]@30
  char v93; // [sp+48h] [bp-98h]@30
  char v94; // [sp+49h] [bp-97h]@30
  char v95; // [sp+4Ch] [bp-94h]@30
  char v96; // [sp+4Dh] [bp-93h]@30
  char v97; // [sp+50h] [bp-90h]@28
  char v98; // [sp+51h] [bp-8Fh]@28
  char v99; // [sp+54h] [bp-8Ch]@28
  char v100; // [sp+55h] [bp-8Bh]@28
  char v101; // [sp+58h] [bp-88h]@28
  char v102; // [sp+59h] [bp-87h]@28
  char v103; // [sp+5Ch] [bp-84h]@28
  char v104; // [sp+5Dh] [bp-83h]@28
  char v105; // [sp+60h] [bp-80h]@28
  char v106; // [sp+61h] [bp-7Fh]@28
  char v107; // [sp+64h] [bp-7Ch]@28
  char v108; // [sp+65h] [bp-7Bh]@28
  char v109; // [sp+68h] [bp-78h]@28
  char v110; // [sp+69h] [bp-77h]@28
  char v111; // [sp+6Ch] [bp-74h]@28
  char v112; // [sp+6Dh] [bp-73h]@28
  char v113; // [sp+70h] [bp-70h]@28
  char v114; // [sp+71h] [bp-6Fh]@28
  char v115; // [sp+74h] [bp-6Ch]@28
  char v116; // [sp+75h] [bp-6Bh]@28
  char v117; // [sp+78h] [bp-68h]@28
  char v118; // [sp+79h] [bp-67h]@28
  char v119; // [sp+7Ch] [bp-64h]@28
  char v120; // [sp+7Dh] [bp-63h]@28
  char v121; // [sp+80h] [bp-60h]@28
  char v122; // [sp+81h] [bp-5Fh]@28
  char v123; // [sp+84h] [bp-5Ch]@28
  char v124; // [sp+85h] [bp-5Bh]@28
  char v125; // [sp+88h] [bp-58h]@28
  char v126; // [sp+89h] [bp-57h]@28
  char v127; // [sp+8Ch] [bp-54h]@28
  char v128; // [sp+8Dh] [bp-53h]@28
  char v129; // [sp+90h] [bp-50h]@28
  char v130; // [sp+91h] [bp-4Fh]@28
  char v131; // [sp+94h] [bp-4Ch]@28
  char v132; // [sp+95h] [bp-4Bh]@28
  char v133; // [sp+98h] [bp-48h]@28
  char v134; // [sp+99h] [bp-47h]@28
  char v135; // [sp+9Ch] [bp-44h]@28
  char v136; // [sp+9Dh] [bp-43h]@28
  char v137; // [sp+A0h] [bp-40h]@28
  char v138; // [sp+A1h] [bp-3Fh]@28
  char v139; // [sp+A4h] [bp-3Ch]@28
  char v140; // [sp+A5h] [bp-3Bh]@28
  int v141; // [sp+A8h] [bp-38h]@26
  int v142; // [sp+ACh] [bp-34h]@26
  int v143; // [sp+B0h] [bp-30h]@26
  char v144; // [sp+B4h] [bp-2Ch]@26
  char v145; // [sp+B5h] [bp-2Bh]@26
  char v146; // [sp+B8h] [bp-28h]@26
  char v147; // [sp+B9h] [bp-27h]@26

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)this + 9) >= 0 )
    goto LABEL_26;
  v8 = *((_DWORD *)this + 3);
  v9 = *((_DWORD *)this + 6);
  v76 = a2;
  if ( v8 > v9 )
    goto LABEL_40;
  v10 = *((_DWORD *)v4 + 4);
  v11 = 0;
  v77 = v4;
  v12 = 0;
  v74 = a3;
  do
  {
    v13 = *((_DWORD *)v77 + 1);
    if ( v13 <= v10 )
    {
      do
      {
        v14 = v13;
        v15 = *(_QWORD *)v5;
        v16 = *((_QWORD *)v5 + 1) >> 32;
        v17 = *((_QWORD *)v5 + 1);
        v19 = __OFSUB__(v16, v13);
        v18 = v16 - v13 < 0;
        v20 = 0;
        *(_QWORD *)&v21 = *((_QWORD *)v5 + 2);
        if ( !(v18 ^ v19) )
          v20 = 1;
        v23 = 0;
        if ( (signed int)v15 <= v14 )
          v23 = 1;
        v19 = __OFSUB__(v17, v8);
        v24 = v17 == v8;
        v18 = v17 - v8 < 0;
        v25 = 0;
        if ( (unsigned __int8)(v18 ^ v19) | v24 )
          v25 = 1;
        v19 = __OFSUB__(v22, v8);
        v18 = v22 - v8 < 0;
        v26 = 0;
          v26 = 1;
        v27 = 0;
        if ( SHIDWORD(v15) < 65 )
          v27 = 1;
        if ( v21 >= 64 && (v20 & v23 & v25 & v26 & v27) == 1 )
        {
          v28 = j_BlockSource::getAboveTopSolidBlock(v76, v14, v8, 0, 0);
          ++v12;
          if ( v28 < 64 )
            v28 = 64;
          v11 += v28;
          v10 = *((_DWORD *)v77 + 4);
        }
        v13 = v14 + 1;
      }
      while ( v14 < v10 );
      v9 = *((_DWORD *)v77 + 6);
    }
    v19 = __OFSUB__(v8, v9);
    v18 = v8++ - v9 < 0;
  }
  while ( v18 ^ v19 );
  v29 = v12;
  v6 = v74;
  v4 = v77;
  if ( !v29 )
LABEL_40:
    *((_DWORD *)v4 + 9) = -1;
    return 1;
  v30 = v11 / v29;
  *((_DWORD *)v77 + 9) = v11 / v29;
  if ( v11 / v29 >= 0 )
    v7 = v76;
    *((_DWORD *)v77 + 2) += v30 - *((_DWORD *)v77 + 5) + 3;
    *((_DWORD *)v77 + 5) = v30 + 3;
LABEL_26:
    v31 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v75 = v6;
    v146 = BlockID::AIR;
    v144 = BlockID::AIR;
    v147 = 0;
    v145 = 0;
    v31(v4, v7, v5, 0);
    v32 = *((_DWORD *)v5 + 1);
    v33 = *((_DWORD *)v5 + 2);
    v34 = *((_QWORD *)v5 + 2);
    v35 = v7;
    v36 = *(_BYTE *)(Block::mFarmland + 4);
    v141 = *(_DWORD *)v5 + (*((_DWORD *)v5 + 3) + 1 - *(_DWORD *)v5) / 2;
    v142 = v32 + (1 - v32 + (signed int)v34) / 2;
    v143 = v33 + (1 - v33 + HIDWORD(v34)) / 2;
    v78 = (Biome *)j_BlockSource::getBiome(v35, (const BlockPos *)&v141);
    if ( j_Biome::isSnowCovered(v78) == 1 )
      v36 = *(_BYTE *)(Block::mDirt + 4);
    v37 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v139 = v36;
    v140 = 0;
    v137 = *(_BYTE *)(Block::mFarmland + 4);
    v138 = 0;
    v37(v4, v35, v5, 1);
    v38 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v135 = v36;
    v136 = 0;
    v133 = *(_BYTE *)(Block::mFarmland + 4);
    v134 = 0;
    v38(v4, v35, v5, 4);
    v39 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v131 = v36;
    v132 = 0;
    v129 = *(_BYTE *)(Block::mFarmland + 4);
    v130 = 0;
    v39(v4, v35, v5, 7);
    v40 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v127 = v36;
    v128 = 0;
    v125 = *(_BYTE *)(Block::mFarmland + 4);
    v126 = 0;
    v40(v4, v35, v5, 10);
    v41 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v123 = *(_BYTE *)(Block::mLog + 4);
    v124 = 0;
    v121 = *(_BYTE *)(Block::mLog + 4);
    v122 = 0;
    v41(v4, v35, v5, 0);
    v42 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v119 = *(_BYTE *)(Block::mLog + 4);
    v120 = 0;
    v117 = *(_BYTE *)(Block::mLog + 4);
    v118 = 0;
    v42(v4, v35, v5, 6);
    v43 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v115 = *(_BYTE *)(Block::mLog + 4);
    v116 = 0;
    v113 = *(_BYTE *)(Block::mLog + 4);
    v114 = 0;
    v43(v4, v35, v5, 12);
    v44 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v111 = *(_BYTE *)(Block::mLog + 4);
    v112 = 0;
    v109 = *(_BYTE *)(Block::mLog + 4);
    v110 = 0;
    v44(v4, v35, v5, 1);
    v45 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v107 = *(_BYTE *)(Block::mLog + 4);
    v108 = 0;
    v105 = *(_BYTE *)(Block::mLog + 4);
    v106 = 0;
    v45(v4, v35, v5, 1);
    v46 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v103 = *(_BYTE *)(Block::mStillWater + 4);
    v104 = 0;
    v101 = *(_BYTE *)(Block::mStillWater + 4);
    v102 = 0;
    v46(v4, v35, v5, 3);
    v47 = v35;
    v48 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v99 = *(_BYTE *)(Block::mStillWater + 4);
    v100 = 0;
    v97 = *(_BYTE *)(Block::mStillWater + 4);
    v98 = 0;
    v48(v4, v35, v5, 9);
    if ( !j_Biome::isSnowCovered(v78) )
      v49 = 1;
        v50 = *((_BYTE *)v4 + 52);
        v51 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v52 = j_Random::_genRandInt32(v75);
        v95 = v50;
        v96 = v52 % 6 + 2;
        v51(v4, v47, &v95, 1);
        LOBYTE(v51) = *((_BYTE *)v4 + 52);
        v53 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v54 = j_Random::_genRandInt32(v75);
        v93 = (char)v51;
        v94 = v54 % 6 + 2;
        v53(v4, v47, &v93, 2);
        LOBYTE(v51) = *((_BYTE *)v4 + 53);
        v55 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v56 = j_Random::_genRandInt32(v75);
        v91 = (char)v51;
        v92 = v56 % 6 + 2;
        v55(v4, v47, &v91, 4);
        v57 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v58 = j_Random::_genRandInt32(v75);
        v89 = (char)v51;
        v90 = v58 % 6 + 2;
        v57(v4, v47, &v89, 5);
        LOBYTE(v51) = *((_BYTE *)v4 + 54);
        v59 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v60 = j_Random::_genRandInt32(v75);
        v87 = (char)v51;
        v88 = v60 % 6 + 2;
        v59(v4, v47, &v87, 7);
        v61 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v62 = j_Random::_genRandInt32(v75);
        v85 = (char)v51;
        v86 = v62 % 6 + 2;
        v61(v4, v47, &v85, 8);
        LOBYTE(v51) = *((_BYTE *)v4 + 55);
        v63 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v64 = j_Random::_genRandInt32(v75);
        v83 = (char)v51;
        v84 = v64 % 6 + 2;
        v63(v4, v47, &v83, 10);
        v65 = *(void (__fastcall **)(DoubleFarmland *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v66 = j_Random::_genRandInt32(v75);
        v81 = (char)v51;
        v82 = v66 % 6 + 2;
        v65(v4, v47, &v81, 11);
        ++v49;
      while ( v49 != 8 );
    v67 = v4;
    v68 = v5;
    v69 = 0;
    do
      v70 = 0;
      v71 = v47;
        j_StructurePiece::generateAirColumnUp(v67, v71, v70, 4, v69, v68);
        v72 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v67 + 44);
        v79 = *(_BYTE *)(Block::mDirt + 4);
        v80 = 0;
        v72(v67, v71, &v79, v70++);
      while ( v70 != 13 );
      ++v69;
      v47 = v71;
    while ( v69 != 9 );
  return 1;
}


int __fastcall DoubleFarmland::DoubleFarmland(int a1, int a2, int a3, Random *a4, int a5, int a6)
{
  int v6; // r5@1
  Random *v7; // r6@1
  int v8; // r4@1
  unsigned int v9; // r1@2
  _DWORD **v10; // r0@7
  _DWORD **v11; // r0@14
  _DWORD **v12; // r0@21
  _DWORD **v13; // r0@28
  int v15; // [sp+0h] [bp-28h]@5
  int v16; // [sp+4h] [bp-24h]@5
  int v17; // [sp+8h] [bp-20h]@5

  v6 = a2;
  v7 = a4;
  v8 = a1;
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
    v9 = *(_DWORD *)(a2 + 44);
    *(_BYTE *)(a1 + 44) = v9;
    *(_BYTE *)(a1 + 45) = BYTE1(v9);
    *(_BYTE *)(a1 + 46) = v9 >> 16;
    *(_BYTE *)(a1 + 47) = BYTE3(v9);
    if ( 0 != v9 >> 24 )
      *(_DWORD *)(a1 + 48) = &VillagePiece::mossyStoneSelector;
  }
  *(_DWORD *)a1 = &off_27244CC;
  if ( j_Random::_genRandInt32(a4) % 3 == 1 )
    j_StructurePiece::getLocatorPosition((StructurePiece *)&v15, v6);
    if ( ((unsigned int)(8976890 * v15 + 981131 * v16 + v17) >> 3) - 3 * ((8976890 * v15 + 981131 * v16 + v17) / 0x18u) == 1 )
    {
      v10 = Block::mBeetrootCrop;
    }
    else if ( (unsigned int)(8976890 * v15 + 981131 * v16 + v17) >> 3 == 3
                                                                       * ((8976890 * v15 + 981131 * v16 + v17)
                                                                        / 0x18u) )
      v10 = Block::mPotatoCrop;
    else
      v10 = Block::mCarrotCrop;
  else
    v10 = &Block::mWheatCrop;
  *(_BYTE *)(v8 + 52) = *(_BYTE *)(**v10 + 4);
  if ( j_Random::_genRandInt32(v7) % 3 == 1 )
      v11 = Block::mBeetrootCrop;
      v11 = Block::mPotatoCrop;
      v11 = Block::mCarrotCrop;
    v11 = &Block::mWheatCrop;
  *(_BYTE *)(v8 + 53) = *(_BYTE *)(**v11 + 4);
      v12 = Block::mBeetrootCrop;
      v12 = Block::mPotatoCrop;
      v12 = Block::mCarrotCrop;
    v12 = &Block::mWheatCrop;
  *(_BYTE *)(v8 + 54) = *(_BYTE *)(**v12 + 4);
      v13 = Block::mBeetrootCrop;
      v13 = Block::mPotatoCrop;
      v13 = Block::mCarrotCrop;
    v13 = &Block::mWheatCrop;
  *(_BYTE *)(v8 + 55) = *(_BYTE *)(**v13 + 4);
  *(_DWORD *)(v8 + 28) = a6;
  *(_DWORD *)(v8 + 4) = *(_DWORD *)a5;
  *(_DWORD *)(v8 + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(v8 + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(v8 + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(v8 + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(v8 + 24) = *(_DWORD *)(a5 + 20);
  return v8;
}


signed int __fastcall DoubleFarmland::getType(DoubleFarmland *this)
{
  return 1447642182;
}


int __fastcall DoubleFarmland::createPiece(_DWORD *a1, int a2, __int64 *a3, Random *a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // r9@1
  Random *v10; // r8@1
  __int64 *v11; // r5@1
  int v12; // r11@1
  int result; // r0@1
  void *v14; // r5@3
  int v15; // [sp+1Ch] [bp+0h]@1

  v9 = a1;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  j_BoundingBox::orientBox((BoundingBox *)&v15, a5, a6, a7, 0, 0, 0, 13, 4, 9, a8);
  result = j_StructurePiece::findCollisionPiece(v11, (int)&v15);
  if ( result )
  {
    *v9 = 0;
  }
  else
    v14 = j_operator new(0x38u);
    result = j_DoubleFarmland::DoubleFarmland((int)v14, v12, a9, v10, (int)&v15, a8);
    *v9 = v14;
  return result;
}


int __fastcall DoubleFarmland::DoubleFarmland(int result)
{
  char v1; // r2@1

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
  *(_QWORD *)(result + 36) = 0xFFFFFFFFLL;
  *(_DWORD *)result = &off_27244CC;
  *(_BYTE *)(result + 52) = BlockID::AIR;
  v1 = BlockID::AIR;
  *(_BYTE *)(result + 53) = BlockID::AIR;
  *(_BYTE *)(result + 54) = v1;
  *(_BYTE *)(result + 55) = BlockID::AIR;
  return result;
}
