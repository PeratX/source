

int __fastcall Farmland::createPiece(_DWORD *a1, int a2, __int64 *a3, Random *a4, int a5, int a6, int a7, int a8, int a9)
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
  j_BoundingBox::orientBox((BoundingBox *)&v15, a5, a6, a7, 0, 0, 0, 7, 4, 9, a8);
  result = j_StructurePiece::findCollisionPiece(v11, (int)&v15);
  if ( result )
  {
    *v9 = 0;
  }
  else
    v14 = j_operator new(0x38u);
    result = j_Farmland::Farmland((int)v14, v12, a9, v10, (int)&v15, a8);
    *v9 = v14;
  return result;
}


int __fastcall Farmland::Farmland(int a1, int a2, int a3, Random *a4, int a5, int a6)
{
  int v6; // r5@1
  Random *v7; // r6@1
  int v8; // r4@1
  unsigned int v9; // r1@2
  _DWORD **v10; // r0@7
  _DWORD **v11; // r0@14
  int v13; // [sp+0h] [bp-28h]@5
  int v14; // [sp+4h] [bp-24h]@5
  int v15; // [sp+8h] [bp-20h]@5

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
  *(_DWORD *)a1 = &off_2724518;
  if ( j_Random::_genRandInt32(a4) % 3 == 1 )
    j_StructurePiece::getLocatorPosition((StructurePiece *)&v13, v6);
    if ( ((unsigned int)(8976890 * v13 + 981131 * v14 + v15) >> 3) - 3 * ((8976890 * v13 + 981131 * v14 + v15) / 0x18u) == 1 )
    {
      v10 = Block::mBeetrootCrop;
    }
    else if ( (unsigned int)(8976890 * v13 + 981131 * v14 + v15) >> 3 == 3
                                                                       * ((8976890 * v13 + 981131 * v14 + v15)
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
  *(_DWORD *)(v8 + 28) = a6;
  *(_DWORD *)(v8 + 4) = *(_DWORD *)a5;
  *(_DWORD *)(v8 + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(v8 + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(v8 + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(v8 + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(v8 + 24) = *(_DWORD *)(a5 + 20);
  return v8;
}


signed int __fastcall Farmland::getType(Farmland *this)
{
  return 1447642700;
}


signed int __fastcall Farmland::postProcess(Farmland *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  StructurePiece *v4; // r8@1
  const BoundingBox *v5; // r10@1
  Random *v6; // r4@1
  BlockSource *v7; // r9@1
  int v8; // r11@2
  int v9; // r0@2
  int v10; // r1@3
  signed int v11; // r9@3
  int v12; // r2@4
  int v13; // r7@5
  __int64 v14; // kr10_8@5
  int v15; // r0@5
  int v16; // r3@5
  bool v17; // nf@5
  unsigned __int8 v18; // vf@5
  signed int v19; // r0@5
  __int64 v20; // kr20_8@5
  signed int v21; // r2@7
  bool v22; // zf@9
  signed int v23; // r3@9
  signed int v24; // r6@11
  signed int v25; // r5@13
  int v26; // r0@17
  signed int v27; // r1@23
  int v28; // r0@24
  int v29; // r2@26
  int v30; // r3@26
  __int64 v31; // kr28_8@26
  char v32; // r6@26
  void (__fastcall *v33)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r5@28
  void (__fastcall *v34)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r5@28
  void (__fastcall *v35)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r5@28
  void (__fastcall *v36)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@28
  void (__fastcall *v37)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@28
  void (__fastcall *v38)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@28
  void (__fastcall *v39)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@28
  void (__fastcall *v40)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@28
  signed int v41; // r11@29
  char v42; // r5@30
  void (__fastcall *v43)(StructurePiece *, BlockSource *, char *, signed int); // r7@30
  unsigned int v44; // r0@30
  void (__fastcall *v45)(StructurePiece *, BlockSource *, char *, signed int); // r5@30
  unsigned int v46; // r0@30
  void (__fastcall *v47)(StructurePiece *, BlockSource *, char *, signed int); // r5@30
  unsigned int v48; // r0@30
  void (__fastcall *v49)(StructurePiece *, BlockSource *, char *, signed int); // r5@30
  unsigned int v50; // r0@30
  int v51; // r5@31
  int v52; // r6@32
  void (__fastcall *v53)(StructurePiece *, BlockSource *, char *, int); // r7@33
  Random *v55; // [sp+20h] [bp-90h]@3
  BlockSource *v56; // [sp+24h] [bp-8Ch]@3
  signed int v57; // [sp+28h] [bp-88h]@3
  Biome *v58; // [sp+28h] [bp-88h]@26
  char v59; // [sp+2Ch] [bp-84h]@33
  char v60; // [sp+2Dh] [bp-83h]@33
  char v61; // [sp+30h] [bp-80h]@30
  char v62; // [sp+31h] [bp-7Fh]@30
  char v63; // [sp+34h] [bp-7Ch]@30
  char v64; // [sp+35h] [bp-7Bh]@30
  char v65; // [sp+38h] [bp-78h]@30
  char v66; // [sp+39h] [bp-77h]@30
  char v67; // [sp+3Ch] [bp-74h]@30
  char v68; // [sp+3Dh] [bp-73h]@30
  char v69; // [sp+40h] [bp-70h]@28
  char v70; // [sp+41h] [bp-6Fh]@28
  char v71; // [sp+44h] [bp-6Ch]@28
  char v72; // [sp+45h] [bp-6Bh]@28
  char v73; // [sp+48h] [bp-68h]@28
  char v74; // [sp+49h] [bp-67h]@28
  char v75; // [sp+4Ch] [bp-64h]@28
  char v76; // [sp+4Dh] [bp-63h]@28
  char v77; // [sp+50h] [bp-60h]@28
  char v78; // [sp+51h] [bp-5Fh]@28
  char v79; // [sp+54h] [bp-5Ch]@28
  char v80; // [sp+55h] [bp-5Bh]@28
  char v81; // [sp+58h] [bp-58h]@28
  char v82; // [sp+59h] [bp-57h]@28
  char v83; // [sp+5Ch] [bp-54h]@28
  char v84; // [sp+5Dh] [bp-53h]@28
  char v85; // [sp+60h] [bp-50h]@28
  char v86; // [sp+61h] [bp-4Fh]@28
  char v87; // [sp+64h] [bp-4Ch]@28
  char v88; // [sp+65h] [bp-4Bh]@28
  char v89; // [sp+68h] [bp-48h]@28
  char v90; // [sp+69h] [bp-47h]@28
  char v91; // [sp+6Ch] [bp-44h]@28
  char v92; // [sp+6Dh] [bp-43h]@28
  char v93; // [sp+70h] [bp-40h]@28
  char v94; // [sp+71h] [bp-3Fh]@28
  char v95; // [sp+74h] [bp-3Ch]@28
  char v96; // [sp+75h] [bp-3Bh]@28
  char v97; // [sp+78h] [bp-38h]@28
  char v98; // [sp+79h] [bp-37h]@28
  char v99; // [sp+7Ch] [bp-34h]@28
  char v100; // [sp+7Dh] [bp-33h]@28
  int v101; // [sp+80h] [bp-30h]@26
  int v102; // [sp+84h] [bp-2Ch]@26
  int v103; // [sp+88h] [bp-28h]@26

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)this + 9) >= 0 )
    goto LABEL_26;
  v8 = *((_DWORD *)this + 3);
  v9 = *((_DWORD *)this + 6);
  if ( v8 > v9 )
    goto LABEL_40;
  v55 = a3;
  v56 = a2;
  v10 = *((_DWORD *)v4 + 4);
  v11 = 0;
  v57 = 0;
  do
  {
    v12 = *((_DWORD *)v4 + 1);
    if ( v12 <= v10 )
    {
      do
      {
        v13 = v12;
        v14 = *(_QWORD *)v5;
        v15 = *((_QWORD *)v5 + 1) >> 32;
        v16 = *((_QWORD *)v5 + 1);
        v18 = __OFSUB__(v15, v12);
        v17 = v15 - v12 < 0;
        v19 = 0;
        v20 = *((_QWORD *)v5 + 2);
        if ( !(v17 ^ v18) )
          v19 = 1;
        v21 = 0;
        if ( (signed int)v14 <= v13 )
          v21 = 1;
        v18 = __OFSUB__(v16, v8);
        v22 = v16 == v8;
        v17 = v16 - v8 < 0;
        v23 = 0;
        if ( (unsigned __int8)(v17 ^ v18) | v22 )
          v23 = 1;
        v24 = 0;
        if ( SHIDWORD(v20) >= v8 )
          v24 = 1;
        v25 = 0;
        if ( SHIDWORD(v14) < 65 )
          v25 = 1;
        if ( (signed int)v20 >= 64 && (v19 & v21 & v23 & v24 & v25) == 1 )
        {
          v26 = j_BlockSource::getAboveTopSolidBlock(v56, v13, v8, 0, 0);
          ++v11;
          if ( v26 < 64 )
            v26 = 64;
          v10 = *((_DWORD *)v4 + 4);
          v57 += v26;
        }
        v12 = v13 + 1;
      }
      while ( v13 < v10 );
      v9 = *((_DWORD *)v4 + 6);
    }
    v18 = __OFSUB__(v8, v9);
    v17 = v8++ - v9 < 0;
  }
  while ( v17 ^ v18 );
  v6 = v55;
  v27 = v11;
  if ( !v11 )
LABEL_40:
    *((_DWORD *)v4 + 9) = -1;
    return 1;
  v7 = v56;
  v28 = v57 / v27;
  *((_DWORD *)v4 + 9) = v57 / v27;
  if ( v57 / v27 >= 0 )
    *((_DWORD *)v4 + 2) += v28 - *((_DWORD *)v4 + 5) + 3;
    *((_DWORD *)v4 + 5) = v28 + 3;
LABEL_26:
    v29 = *((_DWORD *)v5 + 1);
    v30 = *((_DWORD *)v5 + 2);
    v31 = *((_QWORD *)v5 + 2);
    v32 = *(_BYTE *)(Block::mFarmland + 4);
    v101 = *(_DWORD *)v5 + (*((_DWORD *)v5 + 3) + 1 - *(_DWORD *)v5) / 2;
    v102 = v29 + (1 - v29 + (signed int)v31) / 2;
    v103 = v30 + (1 - v30 + HIDWORD(v31)) / 2;
    v58 = (Biome *)j_BlockSource::getBiome(v7, (const BlockPos *)&v101);
    if ( j_Biome::isSnowCovered(v58) == 1 )
      v32 = *(_BYTE *)(Block::mDirt + 4);
    v33 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v99 = BlockID::AIR;
    v97 = BlockID::AIR;
    v100 = 0;
    v98 = 0;
    v33(v4, v7, v5, 0);
    v34 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v95 = v32;
    v96 = 0;
    v93 = *(_BYTE *)(Block::mFarmland + 4);
    v94 = 0;
    v34(v4, v7, v5, 1);
    v35 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v91 = v32;
    v92 = 0;
    v89 = *(_BYTE *)(Block::mFarmland + 4);
    v90 = 0;
    v35(v4, v7, v5, 4);
    v36 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v87 = *(_BYTE *)(Block::mLog + 4);
    v88 = 0;
    v85 = *(_BYTE *)(Block::mLog + 4);
    v86 = 0;
    v36(v4, v7, v5, 0);
    v37 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v83 = *(_BYTE *)(Block::mLog + 4);
    v84 = 0;
    v81 = *(_BYTE *)(Block::mLog + 4);
    v82 = 0;
    v37(v4, v7, v5, 6);
    v38 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v79 = *(_BYTE *)(Block::mLog + 4);
    v80 = 0;
    v77 = *(_BYTE *)(Block::mLog + 4);
    v78 = 0;
    v38(v4, v7, v5, 1);
    v39 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v75 = *(_BYTE *)(Block::mLog + 4);
    v76 = 0;
    v73 = *(_BYTE *)(Block::mLog + 4);
    v74 = 0;
    v39(v4, v7, v5, 1);
    v40 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v71 = *(_BYTE *)(Block::mStillWater + 4);
    v72 = 0;
    v69 = *(_BYTE *)(Block::mStillWater + 4);
    v70 = 0;
    v40(v4, v7, v5, 3);
    if ( !j_Biome::isSnowCovered(v58) )
      v41 = 1;
        v42 = *((_BYTE *)v4 + 52);
        v43 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v44 = j_Random::_genRandInt32(v6);
        v67 = v42;
        v68 = v44 % 6 + 2;
        v43(v4, v7, &v67, 1);
        LOBYTE(v43) = *((_BYTE *)v4 + 52);
        v45 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v46 = j_Random::_genRandInt32(v6);
        v65 = (char)v43;
        v66 = v46 % 6 + 2;
        v45(v4, v7, &v65, 2);
        LOBYTE(v43) = *((_BYTE *)v4 + 53);
        v47 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v48 = j_Random::_genRandInt32(v6);
        v63 = (char)v43;
        v64 = v48 % 6 + 2;
        v47(v4, v7, &v63, 4);
        v49 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v50 = j_Random::_genRandInt32(v6);
        v61 = (char)v43;
        v62 = v50 % 6 + 2;
        v49(v4, v7, &v61, 5);
        ++v41;
      while ( v41 != 8 );
    v51 = 0;
    do
      v52 = 0;
        j_StructurePiece::generateAirColumnUp(v4, v7, v52, 4, v51, v5);
        v53 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
        v59 = *(_BYTE *)(Block::mDirt + 4);
        v60 = 0;
        v53(v4, v7, &v59, v52++);
      while ( v52 != 7 );
      ++v51;
    while ( v51 != 9 );
  return 1;
}


int __fastcall Farmland::Farmland(int result)
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
  *(_QWORD *)(result + 36) = 0xFFFFFFFFLL;
  *(_DWORD *)result = &off_2724518;
  *(_BYTE *)(result + 52) = BlockID::AIR;
  *(_BYTE *)(result + 53) = BlockID::AIR;
  return result;
}


int __fastcall Farmland::selectCrops(Farmland *this, Random *a2, StartPiece *a3)
{
  Farmland *v3; // r4@1
  StartPiece *v4; // r5@1
  _DWORD **v5; // r0@4
  int result; // r0@8
  char v7; // [sp+4h] [bp-1Ch]@2
  int v8; // [sp+8h] [bp-18h]@2
  int v9; // [sp+Ch] [bp-14h]@2

  v3 = this;
  v4 = a3;
  if ( j_Random::_genRandInt32(a2) % 3 == 1 )
  {
    j_StructurePiece::getLocatorPosition((StructurePiece *)&v7, (int)v4);
    if ( ((unsigned int)(8976890 * *(_DWORD *)&v7 + 981131 * v8 + v9) >> 3)
       - 3 * ((8976890 * *(_DWORD *)&v7 + 981131 * v8 + v9) / 0x18u) == 1 )
    {
      v5 = Block::mBeetrootCrop;
    }
    else if ( (unsigned int)(8976890 * *(_DWORD *)&v7 + 981131 * v8 + v9) >> 3 == 3
                                                                                * ((8976890 * *(_DWORD *)&v7
                                                                                  + 981131 * v8
                                                                                  + v9)
                                                                                 / 0x18u) )
      v5 = Block::mPotatoCrop;
    else
      v5 = Block::mCarrotCrop;
  }
  else
    v5 = &Block::mWheatCrop;
  result = *(_BYTE *)(**v5 + 4);
  *(_BYTE *)v3 = result;
  return result;
}
