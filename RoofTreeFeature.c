

void __fastcall RoofTreeFeature::~RoofTreeFeature(RoofTreeFeature *this)
{
  RoofTreeFeature::~RoofTreeFeature(this);
}


signed int __fastcall RoofTreeFeature::place(RoofTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r5@1
  Feature *v5; // r9@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r6@1
  unsigned int v8; // r8@1
  char v9; // r11@1
  int v10; // r10@1
  int v11; // r3@2
  signed int result; // r0@2
  const BlockPos *v13; // r7@3
  int v14; // r2@3
  int v15; // r1@3
  int v16; // r2@3
  int v17; // r1@3
  int v18; // r2@3
  int v19; // r1@3
  int v20; // r2@3
  unsigned int v21; // r4@3
  unsigned int v22; // r0@3
  int v23; // r11@5
  int v24; // r8@5
  unsigned int v25; // r6@5
  int v26; // r4@6
  bool v27; // nf@6
  unsigned __int8 v28; // vf@6
  int v29; // r2@9
  const Material *v30; // r0@10
  int v31; // r8@11
  int v32; // r1@11
  int v33; // r2@11
  __int64 v34; // r0@13
  int v35; // [sp+14h] [bp-C4h]@5
  int v36; // [sp+18h] [bp-C0h]@5
  int v37; // [sp+1Ch] [bp-BCh]@5
  unsigned int v38; // [sp+20h] [bp-B8h]@5
  int v39; // [sp+24h] [bp-B4h]@5
  char v40; // [sp+30h] [bp-A8h]@3
  int v41; // [sp+34h] [bp-A4h]@5
  char v42; // [sp+38h] [bp-A0h]@3
  int v43; // [sp+38h] [bp-A0h]@5
  int v44; // [sp+3Ch] [bp-9Ch]@5
  BlockSource *v45; // [sp+40h] [bp-98h]@3
  __int64 v46; // [sp+44h] [bp-94h]@13
  int v47; // [sp+4Ch] [bp-8Ch]@13
  __int64 v48; // [sp+50h] [bp-88h]@13
  int v49; // [sp+58h] [bp-80h]@13
  int v50; // [sp+5Ch] [bp-7Ch]@13
  int v51; // [sp+60h] [bp-78h]@13
  int v52; // [sp+64h] [bp-74h]@13
  __int64 v53; // [sp+68h] [bp-70h]@11
  int v54; // [sp+70h] [bp-68h]@11
  int v55; // [sp+74h] [bp-64h]@3
  int v56; // [sp+78h] [bp-60h]@3
  int v57; // [sp+7Ch] [bp-5Ch]@3
  int v58; // [sp+80h] [bp-58h]@3
  int v59; // [sp+84h] [bp-54h]@3
  int v60; // [sp+88h] [bp-50h]@3
  int v61; // [sp+8Ch] [bp-4Ch]@3
  int v62; // [sp+90h] [bp-48h]@3
  int v63; // [sp+94h] [bp-44h]@3
  int v64; // [sp+98h] [bp-40h]@3
  int v65; // [sp+9Ch] [bp-3Ch]@3
  int v66; // [sp+A0h] [bp-38h]@3
  int v67; // [sp+A4h] [bp-34h]@3
  int v68; // [sp+A8h] [bp-30h]@3
  int v69; // [sp+ACh] [bp-2Ch]@3
  char v70; // [sp+B0h] [bp-28h]@3
  char v71; // [sp+B1h] [bp-27h]@3

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = j_Random::_genRandInt32(a4) % 3;
  v9 = j_Random::_genRandInt32(v4);
  v10 = (v9 & 1) + v8 + 6;
  if ( TreeFeature::_prepareSpawn(v5, v7, v6, v10) == 1 )
  {
    v11 = *((_DWORD *)v6 + 1);
    result = 0;
    if ( v11 < *((_WORD *)v7 + 12) + ~v10 )
    {
      v13 = v6;
      v70 = *(_BYTE *)(Block::mDirt + 4);
      v71 = 0;
      v14 = *((_DWORD *)v6 + 2);
      v67 = *(_DWORD *)v6;
      v68 = v11 - 1;
      v69 = v14;
      v45 = v7;
      Feature::_placeBlock(v5, v7, (const BlockPos *)&v67, (const FullBlock *)&v70);
      v15 = *((_DWORD *)v6 + 1);
      v16 = *((_DWORD *)v6 + 2);
      v64 = *(_DWORD *)v6 + 1;
      v65 = v15 - 1;
      v66 = v16;
      Feature::_placeBlock(v5, v7, (const BlockPos *)&v64, (const FullBlock *)&v70);
      v17 = *((_DWORD *)v6 + 1);
      v18 = *((_DWORD *)v6 + 2);
      v61 = *(_DWORD *)v6 + 1;
      v62 = v17 - 1;
      v63 = v18 + 1;
      Feature::_placeBlock(v5, v7, (const BlockPos *)&v61, (const FullBlock *)&v70);
      v19 = *((_DWORD *)v6 + 1);
      v20 = *((_DWORD *)v6 + 2);
      v58 = *(_DWORD *)v6;
      v59 = v19 - 1;
      v60 = v20 + 1;
      Feature::_placeBlock(v5, v7, (const BlockPos *)&v58, (const FullBlock *)&v70);
      v40 = j_Random::_genRandInt32(v4);
      v42 = j_Random::_genRandInt32(v4);
      v21 = j_Random::_genRandInt32(v4);
      v55 = *(_DWORD *)v13;
      v56 = *((_DWORD *)v13 + 1);
      v57 = *((_DWORD *)v13 + 2);
      v22 = j_Random::_genRandInt32(v4);
      if ( v9 & 1 )
        ++v8;
      v23 = 0;
      v44 = v8 + 6;
      v24 = 0;
      v43 = v10 - (v42 & 3);
      v38 = v22 % 6;
      v25 = 2 - v21 % 3;
      v39 = VineBlock::VINE_NORTH;
      v37 = VineBlock::VINE_WEST;
      v36 = VineBlock::VINE_SOUTH;
      v41 = VineBlock::VINE_EAST;
      v35 = v40 & 3;
      do
      {
        v26 = v23 + *((_DWORD *)v13 + 1);
        v28 = __OFSUB__(v23, v43);
        v27 = v23 - v43 < 0;
        if ( v23 >= v43 )
        {
          v28 = __OFSUB__(v25, 1);
          v27 = ((v25 - 1) & 0x80000000) != 0;
        }
        if ( !(v27 ^ v28) )
          --v25;
          v29 = Direction::STEP_Z[v35];
          v55 += Direction::STEP_X[v35];
          v57 += v29;
        v56 = v26;
        v30 = (const Material *)Feature::_getMaterial(v5, v45, (const BlockPos *)&v55);
        if ( TreeFeature::_isFree(v5, v30) == 1 )
          v31 = 0;
          v32 = *((_DWORD *)v13 + 1);
          v33 = *((_DWORD *)v13 + 2);
          LODWORD(v53) = *(_DWORD *)v13;
          HIDWORD(v53) = v23 + v32;
          v54 = v33;
          if ( !v38 )
            v31 = 1;
          RoofTreeFeature::_placeVines(v5, v45, (const BlockPos *)&v53, v4, v31, v41, v36);
          v50 = v53 + 1;
          v51 = HIDWORD(v53);
          v52 = v54;
          RoofTreeFeature::_placeVines(v5, v45, (const BlockPos *)&v50, v4, v31, v37, v36);
          HIDWORD(v34) = HIDWORD(v53);
          LODWORD(v34) = v53 + 1;
          v48 = v34;
          v49 = v54 + 1;
          RoofTreeFeature::_placeVines(v5, v45, (const BlockPos *)&v48, v4, v31, v37, v39);
          v46 = v53;
          v47 = v54 + 1;
          RoofTreeFeature::_placeVines(v5, v45, (const BlockPos *)&v46, v4, v31, v41, v39);
          v24 = v26;
        ++v23;
      }
      while ( v44 != v23 );
      v56 = v24;
      RoofTreeFeature::_placeLeafs(v5, v45, (const BlockPos *)&v55, v13, v4);
      result = 1;
    }
  }
  else
  return result;
}


int __fastcall RoofTreeFeature::_placeLeafs(RoofTreeFeature *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4, Random *a5)
{
  const BlockPos *v5; // r8@1
  BlockSource *v6; // r10@1
  signed int v7; // r11@1
  signed int v8; // r6@2
  signed int v9; // r9@2
  int v10; // r1@3
  int v11; // r2@3
  int *v12; // r4@3
  int v13; // r1@6
  int v14; // r2@6
  int *v15; // r4@6
  int v16; // r1@9
  int v17; // r2@9
  int *v18; // r4@9
  int v19; // r1@12
  int v20; // r2@12
  int *v21; // r4@12
  signed int v22; // r0@15
  signed int v23; // r1@17
  signed int v24; // r2@17
  signed int v25; // r3@21
  bool v26; // zf@23
  int v27; // r1@27
  int v28; // r2@27
  int *v29; // r4@27
  int v30; // r1@30
  int v31; // r2@30
  int *v32; // r4@30
  int v33; // r1@33
  int v34; // r2@33
  int *v35; // r4@33
  int v36; // r1@36
  int v37; // r2@36
  int *v38; // r4@36
  int v39; // r1@43
  int v40; // r2@43
  int *v41; // r4@43
  int v42; // r1@46
  int v43; // r2@46
  int *v44; // r4@46
  int v45; // r1@49
  int v46; // r2@49
  int *v47; // r4@49
  int v48; // r1@52
  int v49; // r2@52
  int *v50; // r4@52
  const BlockPos *v51; // r6@55
  signed int v52; // r11@55
  int v53; // r8@56
  int v54; // r5@58
  signed int v55; // r9@58
  int v56; // r7@60
  int v57; // r0@63
  __int64 v58; // r0@66
  int v59; // r2@66
  int *v60; // r4@66
  bool v61; // zf@71
  signed int v62; // r0@75
  __int64 v63; // r0@78
  int v64; // r2@78
  int *v65; // r4@78
  signed int v66; // r0@84
  __int64 v67; // r0@87
  int v68; // r2@87
  int *v69; // r4@87
  char *v70; // r5@92
  BlockSource *v71; // r8@92
  signed int v72; // r10@92
  const BlockPos *v73; // r11@92
  int v74; // r0@93
  const FullBlock *v75; // r4@96
  signed int v76; // r5@96
  int v77; // r2@97
  int v78; // r1@97
  signed int v79; // r6@98
  int v80; // r0@98
  __int64 v81; // r0@99
  int v82; // r2@99
  int *v83; // r9@99
  __int64 v84; // r0@102
  int v85; // r2@102
  int *v86; // r4@102
  __int64 v87; // r0@105
  int v88; // r2@105
  int *v89; // r4@105
  int v90; // r1@109
  int v91; // r9@110
  int v92; // r0@110
  int v93; // r6@113
  signed int v94; // r10@113
  int v95; // r0@114
  int v96; // r1@117
  int v97; // r2@117
  int *v98; // r4@117
  signed int v99; // r5@122
  signed int v100; // r6@122
  int v101; // r1@123
  int v102; // r2@123
  int *v103; // r4@123
  int result; // r0@129
  const BlockPos *v105; // [sp+8h] [bp-118h]@1
  signed int v106; // [sp+Ch] [bp-114h]@92
  signed int v107; // [sp+14h] [bp-10Ch]@93
  int v108; // [sp+20h] [bp-100h]@94
  unsigned int v109; // [sp+24h] [bp-FCh]@96
  int v110; // [sp+24h] [bp-FCh]@99
  int v111; // [sp+24h] [bp-FCh]@113
  int v112; // [sp+28h] [bp-F8h]@2
  signed int v113; // [sp+28h] [bp-F8h]@93
  RoofTreeFeature *v114; // [sp+30h] [bp-F0h]@1
  int v115; // [sp+34h] [bp-ECh]@117
  int v116; // [sp+38h] [bp-E8h]@117
  int v117; // [sp+3Ch] [bp-E4h]@117
  __int64 v118; // [sp+40h] [bp-E0h]@99
  int v119; // [sp+48h] [bp-D8h]@99
  char v120; // [sp+4Ch] [bp-D4h]@92
  char v121; // [sp+4Dh] [bp-D3h]@97
  int v122; // [sp+50h] [bp-D0h]@97
  int v123; // [sp+54h] [bp-CCh]@97
  int v124; // [sp+58h] [bp-C8h]@97
  __int64 v125; // [sp+5Ch] [bp-C4h]@66
  int v126; // [sp+64h] [bp-BCh]@66
  int v127; // [sp+68h] [bp-B8h]@52
  int v128; // [sp+6Ch] [bp-B4h]@52
  int v129; // [sp+70h] [bp-B0h]@52
  int v130; // [sp+74h] [bp-ACh]@49
  int v131; // [sp+78h] [bp-A8h]@49
  int v132; // [sp+7Ch] [bp-A4h]@49
  int v133; // [sp+80h] [bp-A0h]@46
  int v134; // [sp+84h] [bp-9Ch]@46
  int v135; // [sp+88h] [bp-98h]@46
  int v136; // [sp+8Ch] [bp-94h]@43
  int v137; // [sp+90h] [bp-90h]@43
  int v138; // [sp+94h] [bp-8Ch]@43
  int v139; // [sp+98h] [bp-88h]@36
  int v140; // [sp+9Ch] [bp-84h]@36
  int v141; // [sp+A0h] [bp-80h]@36
  int v142; // [sp+A4h] [bp-7Ch]@33
  int v143; // [sp+A8h] [bp-78h]@33
  int v144; // [sp+ACh] [bp-74h]@33
  int v145; // [sp+B0h] [bp-70h]@30
  int v146; // [sp+B4h] [bp-6Ch]@30
  int v147; // [sp+B8h] [bp-68h]@30
  int v148; // [sp+BCh] [bp-64h]@27
  int v149; // [sp+C0h] [bp-60h]@27
  int v150; // [sp+C4h] [bp-5Ch]@27
  int v151; // [sp+C8h] [bp-58h]@12
  int v152; // [sp+CCh] [bp-54h]@12
  int v153; // [sp+D0h] [bp-50h]@12
  int v154; // [sp+D4h] [bp-4Ch]@9
  int v155; // [sp+D8h] [bp-48h]@9
  int v156; // [sp+DCh] [bp-44h]@9
  int v157; // [sp+E0h] [bp-40h]@6
  int v158; // [sp+E4h] [bp-3Ch]@6
  int v159; // [sp+E8h] [bp-38h]@6
  int v160; // [sp+ECh] [bp-34h]@3
  int v161; // [sp+F0h] [bp-30h]@3
  int v162; // [sp+F4h] [bp-2Ch]@3
  char v163; // [sp+F8h] [bp-28h]@5
  char v164; // [sp+F9h] [bp-27h]@5

  v114 = this;
  v5 = a3;
  v6 = a2;
  v7 = -2;
  v105 = a4;
  do
  {
    v8 = -2;
    v9 = 3;
    v112 = 1 - v7;
    do
    {
      v10 = *((_DWORD *)v5 + 1);
      v11 = *((_DWORD *)v5 + 2);
      v160 = *(_DWORD *)v5 + v7;
      v161 = v10 - 1;
      v162 = v8 + v11;
      v12 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v160);
      if ( Material::isType(v12, 0) || Material::isType(v12, 24) == 1 )
      {
        v163 = *(_BYTE *)(Block::mLeaves2 + 4);
        v164 = 1;
        Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v160, (const FullBlock *)&v163);
      }
      v13 = *((_DWORD *)v5 + 1);
      v14 = *((_DWORD *)v5 + 2);
      v157 = *(_DWORD *)v5 + v112;
      v158 = v13 - 1;
      v159 = v8 + v14;
      v15 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v157);
      if ( Material::isType(v15, 0) || Material::isType(v15, 24) == 1 )
        Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v157, (const FullBlock *)&v163);
      v16 = *((_DWORD *)v5 + 1);
      v17 = *((_DWORD *)v5 + 2);
      v154 = *(_DWORD *)v5 + v7;
      v155 = v16 - 1;
      v156 = v9 + v17;
      v18 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v154);
      if ( Material::isType(v18, 0) || Material::isType(v18, 24) == 1 )
        Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v154, (const FullBlock *)&v163);
      v19 = *((_DWORD *)v5 + 1);
      v20 = *((_DWORD *)v5 + 2);
      v151 = *(_DWORD *)v5 + v112;
      v152 = v19 - 1;
      v153 = v9 + v20;
      v21 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v151);
      if ( Material::isType(v21, 0) || Material::isType(v21, 24) == 1 )
        Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v151, (const FullBlock *)&v163);
      v22 = 0;
      if ( v9 == 3 )
        v22 = 1;
      v23 = 0;
      v24 = 0;
      if ( v7 == -1 )
        v23 = 1;
      if ( v8 < 0 )
        v24 = 1;
      v25 = 0;
      if ( v7 < -1 )
        v25 = 1;
      v26 = (v25 & v24) == 0;
      if ( !(v25 & v24) )
        v26 = (v22 & v23) == 0;
      if ( v26 )
        v27 = *((_DWORD *)v5 + 1);
        v28 = *((_DWORD *)v5 + 2);
        v148 = *(_DWORD *)v5 + v7;
        v149 = v27 + 1;
        v150 = v8 + v28;
        v29 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v148);
        if ( Material::isType(v29, 0) || Material::isType(v29, 24) == 1 )
        {
          v163 = *(_BYTE *)(Block::mLeaves2 + 4);
          v164 = 1;
          Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v148, (const FullBlock *)&v163);
        }
        v30 = *((_DWORD *)v5 + 1);
        v31 = *((_DWORD *)v5 + 2);
        v145 = *(_DWORD *)v5 + v112;
        v146 = v30 + 1;
        v147 = v8 + v31;
        v32 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v145);
        if ( Material::isType(v32, 0) || Material::isType(v32, 24) == 1 )
          Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v145, (const FullBlock *)&v163);
        v33 = *((_DWORD *)v5 + 1);
        v34 = *((_DWORD *)v5 + 2);
        v142 = *(_DWORD *)v5 + v7;
        v143 = v33 + 1;
        v144 = v9 + v34;
        v35 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v142);
        if ( Material::isType(v35, 0) || Material::isType(v35, 24) == 1 )
          Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v142, (const FullBlock *)&v163);
        v36 = *((_DWORD *)v5 + 1);
        v37 = *((_DWORD *)v5 + 2);
        v139 = *(_DWORD *)v5 + v112;
        v140 = v36 + 1;
        v141 = v9 + v37;
        v38 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v139);
        if ( Material::isType(v38, 0) || Material::isType(v38, 24) == 1 )
          Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v139, (const FullBlock *)&v163);
      --v9;
      ++v8;
    }
    while ( v9 );
    v26 = v7++ == 0;
  }
  while ( !v26 );
  if ( j_Random::_genRandInt32(a5) & 0x8000000 )
    v39 = *((_DWORD *)v5 + 1);
    v40 = *((_DWORD *)v5 + 2);
    v136 = *(_DWORD *)v5;
    v137 = v39 + 2;
    v138 = v40;
    v41 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v136);
    if ( Material::isType(v41, 0) || Material::isType(v41, 24) == 1 )
      v163 = *(_BYTE *)(Block::mLeaves2 + 4);
      v164 = 1;
      Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v136, (const FullBlock *)&v163);
    v42 = *((_DWORD *)v5 + 1);
    v43 = *((_DWORD *)v5 + 2);
    v133 = *(_DWORD *)v5 + 1;
    v134 = v42 + 2;
    v135 = v43;
    v44 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v133);
    if ( Material::isType(v44, 0) || Material::isType(v44, 24) == 1 )
      Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v133, (const FullBlock *)&v163);
    v45 = *((_DWORD *)v5 + 1);
    v46 = *((_DWORD *)v5 + 2);
    v130 = *(_DWORD *)v5 + 1;
    v131 = v45 + 2;
    v132 = v46 + 1;
    v47 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v130);
    if ( Material::isType(v47, 0) || Material::isType(v47, 24) == 1 )
      Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v130, (const FullBlock *)&v163);
    v48 = *((_DWORD *)v5 + 1);
    v49 = *((_DWORD *)v5 + 2);
    v127 = *(_DWORD *)v5;
    v128 = v48 + 2;
    v129 = v49 + 1;
    v50 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v127);
    if ( Material::isType(v50, 0) || Material::isType(v50, 24) == 1 )
      Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v127, (const FullBlock *)&v163);
  v51 = v5;
  v52 = -3;
    v53 = v52;
    if ( v52 < 0 )
      v53 = -v52;
    v54 = -3;
    v55 = 3;
    if ( v52 == 4 )
      do
        v61 = v54 == -3;
        if ( v54 != -3 )
          v61 = v54 == 4;
        if ( !v61 )
          if ( v53 < 3 )
            goto LABEL_132;
          v62 = v54;
          if ( v54 < 0 )
            v62 = v55;
          if ( v62 <= 2 )
          {
LABEL_132:
            HIDWORD(v63) = *((_DWORD *)v51 + 1);
            v64 = *((_DWORD *)v51 + 2);
            LODWORD(v63) = *(_DWORD *)v51 + 4;
            v125 = v63;
            v126 = v54 + v64;
            v65 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v125);
            if ( Material::isType(v65, 0) || Material::isType(v65, 24) == 1 )
            {
              v163 = *(_BYTE *)(Block::mLeaves2 + 4);
              v164 = 1;
              Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v125, (const FullBlock *)&v163);
            }
          }
        ++v54;
        --v55;
      while ( v54 != 5 );
    else if ( v52 == -3 )
        do
          v56 = v54;
          v54 = -2;
        while ( v56 == -3 );
        if ( v56 == 4 )
          break;
        if ( v53 < 3 )
          goto LABEL_133;
        v57 = v56;
        if ( v56 < 0 )
          v57 = -v56;
        if ( v57 <= 2 )
LABEL_133:
          HIDWORD(v58) = *((_DWORD *)v51 + 1);
          v59 = *((_DWORD *)v51 + 2);
          LODWORD(v58) = *(_DWORD *)v51 - 3;
          v125 = v58;
          v126 = v59 + v56;
          v60 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v125);
          if ( Material::isType(v60, 0) || Material::isType(v60, 24) == 1 )
            v163 = *(_BYTE *)(Block::mLeaves2 + 4);
            v164 = 1;
            Feature::_setBlockAndData(v114, v6, (const BlockPos *)&v125, (const FullBlock *)&v163);
        v54 = v56 + 1;
      while ( v56 != 4 );
    else
          goto LABEL_134;
        v66 = v54;
        if ( v54 < 0 )
          v66 = v55;
        if ( v66 <= 2 )
LABEL_134:
          HIDWORD(v67) = *((_DWORD *)v51 + 1);
          v68 = *((_DWORD *)v51 + 2);
          LODWORD(v67) = *(_DWORD *)v51 + v52;
          v125 = v67;
          v126 = v54 + v68;
          v69 = (int *)Feature::_getMaterial(v114, v6, (const BlockPos *)&v125);
          if ( Material::isType(v69, 0) || Material::isType(v69, 24) == 1 )
    ++v52;
  while ( v52 != 5 );
  v70 = &v120;
  v106 = -2;
  v71 = v6;
  v72 = -1;
  v73 = v51;
    v74 = -1;
    v107 = v72;
    v113 = -3;
      v108 = v74;
      if ( (v74 | (unsigned int)v72) >= 2 && !(j_Random::_genRandInt32(a5) % 3) )
        v75 = (const FullBlock *)v70;
        v76 = 2;
        v109 = -(j_Random::_genRandInt32(a5) % 3);
          v77 = *((_DWORD *)v73 + 1);
          v78 = *((_DWORD *)v105 + 2);
          v122 = *(_DWORD *)v105 + v72;
          v123 = v76 + v77 - 3;
          v124 = v78 + v108;
          v120 = *(_BYTE *)(Block::mLog2 + 4);
          v121 = 1;
          Feature::_placeBlock(v114, v71, (const BlockPos *)&v122, v75);
          --v76;
        while ( v109 != v76 );
        v79 = v106;
        v80 = 3;
          v110 = v80;
          HIDWORD(v81) = *((_DWORD *)v73 + 1);
          v82 = *((_DWORD *)v73 + 2);
          LODWORD(v81) = *(_DWORD *)v73 + v79;
          v118 = v81;
          v119 = v108 - 1 + v82;
          v83 = (int *)Feature::_getMaterial(v114, v71, (const BlockPos *)&v118);
          if ( Material::isType(v83, 0) || Material::isType(v83, 24) == 1 )
            Feature::_setBlockAndData(v114, v71, (const BlockPos *)&v118, (const FullBlock *)&v163);
          HIDWORD(v84) = *((_DWORD *)v73 + 1);
          v85 = *((_DWORD *)v73 + 2);
          LODWORD(v84) = *(_DWORD *)v73 + v79;
          v118 = v84;
          v119 = v108 + v85;
          v86 = (int *)Feature::_getMaterial(v114, v71, (const BlockPos *)&v118);
          if ( Material::isType(v86, 0) || Material::isType(v86, 24) == 1 )
          HIDWORD(v87) = *((_DWORD *)v73 + 1);
          v88 = *((_DWORD *)v73 + 2);
          LODWORD(v87) = *(_DWORD *)v73 + v79;
          v118 = v87;
          v119 = v108 + 1 + v88;
          v89 = (int *)Feature::_getMaterial(v114, v71, (const BlockPos *)&v118);
          if ( Material::isType(v89, 0) || Material::isType(v89, 24) == 1 )
          ++v79;
          v80 = v110 - 1;
        while ( v110 != 1 );
        v90 = -2;
          v91 = v90 + v72;
          v92 = v90;
          if ( v90 < 0 )
            v92 = -v90;
          if ( v92 == 2 )
            v93 = 0;
            v94 = 2;
            v111 = v90;
            do
              v95 = v93 - 2;
              if ( v93 - 2 < 0 )
                v95 = v94;
              if ( v95 != 2 )
              {
                v96 = *((_DWORD *)v73 + 1);
                v97 = *((_DWORD *)v73 + 2);
                v115 = *(_DWORD *)v73 + v91;
                v116 = v96 - 1;
                v117 = v113 + v93 + v97;
                v98 = (int *)Feature::_getMaterial(v114, v71, (const BlockPos *)&v115);
                if ( Material::isType(v98, 0) || Material::isType(v98, 24) == 1 )
                {
                  v163 = *(_BYTE *)(Block::mLeaves2 + 4);
                  v164 = 1;
                  Feature::_setBlockAndData(v114, v71, (const BlockPos *)&v115, (const FullBlock *)&v163);
                }
              }
              ++v93;
              --v94;
            while ( v93 != 5 );
          else
            v99 = v113;
            v100 = 5;
              v101 = *((_DWORD *)v73 + 1);
              v102 = *((_DWORD *)v73 + 2);
              v115 = *(_DWORD *)v73 + v91;
              v116 = v101 - 1;
              v117 = v99 + v102;
              v103 = (int *)Feature::_getMaterial(v114, v71, (const BlockPos *)&v115);
              if ( Material::isType(v103, 0) || Material::isType(v103, 24) == 1 )
                v163 = *(_BYTE *)(Block::mLeaves2 + 4);
                v164 = 1;
                Feature::_setBlockAndData(v114, v71, (const BlockPos *)&v115, (const FullBlock *)&v163);
              ++v99;
              --v100;
            while ( v100 );
          v70 = &v120;
          v72 = v107;
          v90 = v111 + 1;
        while ( v111 != 2 );
      ++v113;
      v74 = v108 + 1;
    while ( v108 != 2 );
    ++v72;
    result = v106++ + 1;
  while ( v72 != 3 );
  return result;
}


int __fastcall RoofTreeFeature::_placeLeafAt(RoofTreeFeature *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Feature *v5; // r6@1
  int *v6; // r7@1
  int result; // r0@2
  char v8; // [sp+0h] [bp-18h]@3
  char v9; // [sp+1h] [bp-17h]@3

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (int *)Feature::_getMaterial(this, a2, a3);
  if ( Material::isType(v6, 0) || (result = Material::isType(v6, 24), result == 1) )
  {
    v8 = *(_BYTE *)(Block::mLeaves2 + 4);
    v9 = 1;
    result = Feature::_setBlockAndData(v5, v4, v3, (const FullBlock *)&v8);
  }
  return result;
}


void __fastcall RoofTreeFeature::~RoofTreeFeature(RoofTreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


_DWORD *__fastcall RoofTreeFeature::RoofTreeFeature(TreeFeature *a1, Entity *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)TreeFeature::TreeFeature(a1, a2, 1, 1, 0);
  *result = &off_2718BCC;
  return result;
}


unsigned int __fastcall RoofTreeFeature::_placeVines(RoofTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5, int a6, int a7)
{
  Random *v7; // r10@1
  const BlockPos *v8; // r7@1
  BlockSource *v9; // r4@1
  TreeFeature *v10; // r5@1
  const Material *v11; // r0@1
  unsigned int result; // r0@1
  signed int v13; // r2@3
  int v14; // r3@3
  int v15; // r6@3
  int v16; // r7@3
  signed int v17; // r0@5
  int v18; // [sp+0h] [bp-40h]@5
  int v19; // [sp+4h] [bp-3Ch]@5
  int v20; // [sp+8h] [bp-38h]@7
  int v21; // [sp+Ch] [bp-34h]@5
  int v22; // [sp+10h] [bp-30h]@5
  int v23; // [sp+14h] [bp-2Ch]@5
  char v24; // [sp+18h] [bp-28h]@2
  char v25; // [sp+19h] [bp-27h]@2
  char v26; // [sp+1Ch] [bp-24h]@9
  char v27; // [sp+1Dh] [bp-23h]@9

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = this;
  v11 = (const Material *)Feature::_getMaterial(this, a2, a3);
  result = TreeFeature::_isFree(v10, v11);
  if ( result == 1 )
  {
    v24 = *(_BYTE *)(Block::mLog2 + 4);
    v25 = TreeFeature::_getTrunkType(v10);
    result = Feature::_setBlockAndData(v10, v9, v8, (const FullBlock *)&v24);
    if ( a5 == 1 )
    {
      v13 = 1;
      v14 = *(_DWORD *)v8;
      v15 = *((_DWORD *)v8 + 1);
      v16 = *((_DWORD *)v8 + 2);
      if ( VineBlock::VINE_EAST == a6 )
        v13 = -1;
      v21 = v14 + v13;
      v22 = v15;
      v23 = v16;
      v17 = -1;
      v18 = v14;
      v19 = v15;
      if ( VineBlock::VINE_NORTH == a7 )
        v17 = 1;
      v20 = v17 + v16;
      if ( j_Random::_genRandInt32(v7) % 7 && Feature::_isEmptyBlock(v10, v9, (const BlockPos *)&v21) == 1 )
      {
        v26 = *(_BYTE *)(Block::mVine + 4);
        v27 = a6;
        Feature::_setBlockAndData(v10, v9, (const BlockPos *)&v21, (const FullBlock *)&v26);
      }
      result = j_Random::_genRandInt32(v7) % 7;
      if ( result )
        result = Feature::_isEmptyBlock(v10, v9, (const BlockPos *)&v18);
        if ( result == 1 )
        {
          v26 = *(_BYTE *)(Block::mVine + 4);
          v27 = a7;
          result = Feature::_setBlockAndData(v10, v9, (const BlockPos *)&v18, (const FullBlock *)&v26);
        }
    }
  }
  return result;
}


unsigned int __fastcall RoofTreeFeature::_placeVine(RoofTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  Feature *v5; // r6@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  unsigned int result; // r0@1
  char v9; // [sp+4h] [bp-14h]@3
  char v10; // [sp+5h] [bp-13h]@3

  v5 = this;
  v6 = a3;
  v7 = a2;
  result = j_Random::_genRandInt32(a4) % 7;
  if ( result )
  {
    result = Feature::_isEmptyBlock(v5, v7, v6);
    if ( result == 1 )
    {
      v9 = *(_BYTE *)(Block::mVine + 4);
      v10 = a5;
      result = Feature::_setBlockAndData(v5, v7, v6, (const FullBlock *)&v9);
    }
  }
  return result;
}
