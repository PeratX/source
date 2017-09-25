

int __fastcall SwampTreeFeature::_addVine(Feature *this, BlockSource *a2, const BlockPos *a3, char a4)
{
  Feature *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int *v7; // r0@1
  int result; // r0@1
  signed int v9; // r7@2
  int *v10; // r0@3
  char v11; // [sp+4h] [bp-1Ch]@1
  char v12; // [sp+5h] [bp-1Bh]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v11 = *(_BYTE *)(Block::mVine + 4);
  v12 = a4;
  Feature::_setBlockAndData(this, a2, a3, (const FullBlock *)&v11);
  --*((_DWORD *)v5 + 1);
  v7 = (int *)Feature::_getMaterial(v4, v6, v5);
  result = Material::isType(v7, 0);
  if ( result == 1 )
  {
    v9 = 4;
    do
    {
      Feature::_setBlockAndData(v4, v6, v5, (const FullBlock *)&v11);
      --*((_DWORD *)v5 + 1);
      v10 = (int *)Feature::_getMaterial(v4, v6, v5);
      result = Material::isType(v10, 0);
      if ( v9 < 2 )
        break;
      --v9;
    }
    while ( result );
  }
  return result;
}


signed int __fastcall SwampTreeFeature::place(SwampTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Feature *v4; // r10@1
  BlockSource *v5; // r5@1
  int v6; // r6@1
  int v7; // r9@1
  int v8; // r7@1
  signed int v9; // r8@2
  int *v10; // r0@2
  int v11; // r10@4
  int v12; // lr@5
  int v13; // r4@5
  int v14; // r3@6
  char *v15; // r12@7
  signed int v16; // r11@7
  int v17; // r7@7
  int v18; // r0@7
  signed int v19; // r1@8
  BlockSource *v20; // r8@12
  int v21; // r6@12
  int v22; // r5@14
  int v23; // r1@14
  int v24; // r10@16
  const BlockPos *v25; // r4@16
  Block *v26; // r7@18
  const Material *v27; // r0@20
  const BlockPos *v28; // r6@22
  signed int v29; // r4@22
  int *v30; // r0@24
  signed int v31; // r1@27
  int v32; // r11@34
  signed int result; // r0@36
  BlockSource *v34; // r10@37
  int v35; // r8@38
  int v36; // r2@39
  int v37; // r0@40
  int v38; // r0@42
  int v39; // r4@44
  int v40; // r9@44
  int v41; // r11@44
  int v42; // r0@45
  char v43; // r0@48
  bool v44; // zf@48
  int v45; // r7@55
  int v46; // r5@55
  int v47; // r4@55
  int v48; // r6@55
  BlockSource *v49; // r5@65
  int v50; // r4@65
  int v51; // r7@65
  const Material *v52; // r10@66
  int v53; // r10@70
  int v54; // r0@72
  int v55; // r11@72
  int v56; // r9@74
  int v57; // r8@74
  int *v58; // r0@75
  int *v59; // r0@77
  int *v60; // r0@80
  int *v61; // r0@83
  int *v62; // r0@86
  int v63; // [sp+0h] [bp-148h]@37
  int v64; // [sp+8h] [bp-140h]@38
  int v65; // [sp+Ch] [bp-13Ch]@37
  int v66; // [sp+14h] [bp-134h]@40
  int v67; // [sp+18h] [bp-130h]@6
  int v68; // [sp+18h] [bp-130h]@40
  int v69; // [sp+18h] [bp-130h]@71
  int v70; // [sp+1Ch] [bp-12Ch]@6
  int v71; // [sp+20h] [bp-128h]@4
  int v72; // [sp+20h] [bp-128h]@37
  int v73; // [sp+20h] [bp-128h]@73
  unsigned int v74; // [sp+24h] [bp-124h]@1
  int v75; // [sp+24h] [bp-124h]@40
  int v76; // [sp+24h] [bp-124h]@73
  int v77; // [sp+28h] [bp-120h]@40
  int v78; // [sp+2Ch] [bp-11Ch]@6
  int v79; // [sp+2Ch] [bp-11Ch]@39
  int v80; // [sp+2Ch] [bp-11Ch]@72
  int v81; // [sp+30h] [bp-118h]@14
  int v82; // [sp+30h] [bp-118h]@40
  char v83; // [sp+30h] [bp-118h]@71
  Random *v84; // [sp+34h] [bp-114h]@1
  int v85; // [sp+38h] [bp-110h]@6
  int v86; // [sp+3Ch] [bp-10Ch]@12
  char v87; // [sp+3Ch] [bp-10Ch]@71
  Feature *v88; // [sp+40h] [bp-108h]@4
  int v89; // [sp+44h] [bp-104h]@7
  int v90; // [sp+44h] [bp-104h]@37
  int v91; // [sp+48h] [bp-100h]@16
  int v92; // [sp+48h] [bp-100h]@40
  char v93; // [sp+48h] [bp-100h]@71
  int v94; // [sp+4Ch] [bp-FCh]@39
  char v95; // [sp+4Ch] [bp-FCh]@71
  unsigned __int64 v96; // [sp+50h] [bp-F8h]@87
  int v97; // [sp+58h] [bp-F0h]@87
  unsigned __int64 v98; // [sp+5Ch] [bp-ECh]@84
  int v99; // [sp+64h] [bp-E4h]@84
  int v100; // [sp+68h] [bp-E0h]@81
  int v101; // [sp+6Ch] [bp-DCh]@81
  int v102; // [sp+70h] [bp-D8h]@81
  int v103; // [sp+74h] [bp-D4h]@78
  int v104; // [sp+78h] [bp-D0h]@78
  int v105; // [sp+7Ch] [bp-CCh]@78
  unsigned __int64 v106; // [sp+80h] [bp-C8h]@76
  int v107; // [sp+88h] [bp-C0h]@76
  unsigned __int64 v108; // [sp+8Ch] [bp-BCh]@76
  int v109; // [sp+94h] [bp-B4h]@76
  int v110; // [sp+98h] [bp-B0h]@76
  int v111; // [sp+9Ch] [bp-ACh]@76
  int v112; // [sp+A0h] [bp-A8h]@76
  int v113; // [sp+A4h] [bp-A4h]@76
  int v114; // [sp+A8h] [bp-A0h]@76
  int v115; // [sp+ACh] [bp-9Ch]@76
  char v116; // [sp+B0h] [bp-98h]@68
  char v117; // [sp+B1h] [bp-97h]@68
  int v118; // [sp+B4h] [bp-94h]@68
  int v119; // [sp+B8h] [bp-90h]@68
  int v120; // [sp+BCh] [bp-8Ch]@68
  int v121; // [sp+C0h] [bp-88h]@66
  int v122; // [sp+C4h] [bp-84h]@66
  int v123; // [sp+C8h] [bp-80h]@66
  char v124; // [sp+CCh] [bp-7Ch]@52
  char v125; // [sp+CDh] [bp-7Bh]@52
  unsigned __int64 v126; // [sp+D0h] [bp-78h]@51
  int v127; // [sp+D8h] [bp-70h]@51
  char v128; // [sp+DCh] [bp-6Ch]@37
  char v129; // [sp+DDh] [bp-6Bh]@37
  int v130; // [sp+E0h] [bp-68h]@37
  int v131; // [sp+E4h] [bp-64h]@37
  int v132; // [sp+E8h] [bp-60h]@37
  int v133; // [sp+ECh] [bp-5Ch]@34
  int v134; // [sp+F0h] [bp-58h]@34
  int v135; // [sp+F4h] [bp-54h]@34
  unsigned __int8 v136; // [sp+F8h] [bp-50h]@34
  char v137; // [sp+FCh] [bp-4Ch]@7
  signed int v138; // [sp+100h] [bp-48h]@18
  int v139; // [sp+104h] [bp-44h]@18
  unsigned __int8 v140; // [sp+108h] [bp-40h]@3
  int v141; // [sp+10Ch] [bp-3Ch]@3
  int v142; // [sp+110h] [bp-38h]@3
  int v143; // [sp+114h] [bp-34h]@3
  int v144; // [sp+118h] [bp-30h]@2
  int v145; // [sp+11Ch] [bp-2Ch]@2
  int v146; // [sp+120h] [bp-28h]@2

  v4 = this;
  v84 = a4;
  v5 = a2;
  v7 = *(_QWORD *)a3 >> 32;
  v6 = *(_QWORD *)a3;
  v8 = *((_DWORD *)a3 + 2);
  v74 = j_Random::_genRandInt32(a4) & 3;
  do
  {
    do
    {
      v9 = v7;
      v144 = v6;
      v145 = --v7;
      v146 = v8;
      v10 = (int *)Feature::_getMaterial(v4, v5, (const BlockPos *)&v144);
    }
    while ( Material::isType(v10, 5) );
    v141 = v6;
    v142 = v7;
    v143 = v8;
    Feature::_getBlockID((Feature *)&v140, v4, v5, (const BlockPos *)&v141);
  }
  while ( v140 == *(_BYTE *)(Block::mLog + 4) );
  v88 = v4;
  v11 = v9;
  v71 = v9;
  if ( v9 < 1 )
    goto LABEL_95;
  v12 = v74 + 5;
  v13 = v9 + v74 + 5;
  if ( v13 >= *((_WORD *)v5 + 12) )
  v85 = v8;
  v14 = v74 + v9 + 7;
  v70 = v6;
  v67 = v74 + v9;
  v78 = v74 + v9 + 7;
  if ( v9 != v14 )
    v15 = &v137;
    v16 = v9;
    v89 = v9 + v74 + 5;
    v17 = v67 + 4;
    LOBYTE(v18) = 1;
      v19 = 1;
      if ( v16 >= v17 )
        v19 = 3;
      if ( v16 == v11 )
        v19 = 0;
      v20 = v5;
      v21 = v70 - v19;
      v86 = v19 + v70;
      if ( v70 - v19 <= v19 + v70 && v18 & 1 )
      {
        v22 = v19 + v85;
        v23 = v85 - v19;
        v81 = v23;
        if ( v23 <= v22 )
        {
LABEL_16:
          v24 = v23;
          v25 = (const BlockPos *)v15;
          v91 = v21;
          if ( v16 >= 0 )
          {
            while ( v16 < *((_WORD *)v20 + 12) )
            {
              *(_DWORD *)&v137 = v21;
              v138 = v16;
              v139 = v24;
              v26 = (Block *)BlockSource::getBlock(v20, v25);
              if ( Block::isType(v26, (const Block *)Block::mLog) )
              {
                v18 = 1;
              }
              else
                v27 = (const Material *)Block::getMaterial(v26);
                if ( TreeFeature::_isFree(v88, v27) )
                {
                  v18 = 1;
                }
                else
                  v28 = v25;
                  v29 = 0;
                  if ( v16 <= v71 )
                    v29 = 1;
                  v30 = (int *)Block::getMaterial(v26);
                  v18 = Material::isType(v30, 5) & v29;
                  v25 = v28;
                  v21 = v91;
              if ( v24 < v22 )
                ++v24;
                if ( v18 )
                  continue;
              v15 = (char *)v25;
              v31 = 0;
              if ( v21 < v86 )
                v31 = 1;
              v11 = v71;
              v12 = v74 + 5;
              v44 = (v31 & v18) == 1;
              v14 = v78;
              v17 = v67 + 4;
              v23 = v81;
              ++v21;
              if ( v44 )
                goto LABEL_16;
              goto LABEL_32;
            }
          }
          v15 = (char *)v25;
          LOBYTE(v18) = 0;
          v11 = v71;
          v12 = v74 + 5;
          v14 = v78;
          v17 = v67 + 4;
        }
        else
          LOBYTE(v18) = 1;
      }
LABEL_32:
      ++v16;
      v5 = v20;
    while ( v16 != v14 );
    v13 = v89;
    if ( !(v18 & 1) )
      goto LABEL_95;
  v32 = v70;
  v133 = v70;
  v134 = v7;
  v135 = v85;
  Feature::_getBlockID((Feature *)&v136, v88, v5, (const BlockPos *)&v133);
  if ( v136 == *(_BYTE *)(Block::mGrass + 4) || v136 == *(_BYTE *)(Block::mDirt + 4) )
    result = 0;
    if ( v11 < (signed int)(*((_WORD *)v5 + 12) + -5 - v74 - 1) )
      v130 = v70;
      v131 = v7;
      v132 = v85;
      v72 = v11;
      v34 = v5;
      v128 = *(_BYTE *)(Block::mDirt + 4);
      v129 = 0;
      Feature::_setBlockAndData(v88, v5, (const BlockPos *)&v130, (const FullBlock *)&v128);
      v65 = v13 + 1;
      v63 = v67 + 2;
      v90 = v13;
      if ( v67 + 2 != v13 + 1 )
        v35 = v67 + 2;
        v64 = v70 + 1;
        do
          v36 = 2 - (v35 - v90) / 2;
          v94 = v32 - v36;
          v79 = v64 + v36;
          if ( v32 - v36 != v64 + v36 )
            v37 = (v35 - v90) / 2;
            v75 = 5 - 2 * v37;
            v92 = 2 - v37;
            v77 = v85 + 1 + v36;
            v82 = v85 - v36;
            v68 = 2 - v37;
            v66 = v37 - 2;
            do
              if ( v82 != v77 )
                v38 = v94 - v70;
                if ( v94 - v70 < 0 )
                  v38 = -v38;
                v40 = v68;
                v39 = v66;
                v41 = v75;
                if ( v38 == v92 )
                  do
                  {
                    v42 = v39;
                    if ( v39 < 0 )
                      v42 = v40;
                    if ( v42 != v92 )
                      goto LABEL_96;
                    v43 = j_Random::_genRandInt32(v84);
                    v44 = v35 == v90;
                    if ( v35 != v90 )
                      v44 = (v43 & 1) == 0;
                    if ( !v44 )
                    {
LABEL_96:
                      v126 = __PAIR__(v35, v94);
                      v127 = v85 + v39;
                      if ( !BlockSource::isSolidBlockingBlock(v34, (const BlockPos *)&v126) )
                      {
                        v124 = *(_BYTE *)(Block::mLeaves + 4);
                        v125 = 0;
                        Feature::_setBlockAndData(v88, v34, (const BlockPos *)&v126, (const FullBlock *)&v124);
                      }
                    }
                    --v40;
                    ++v39;
                    --v41;
                  }
                  while ( v41 );
                  v45 = v82;
                  v46 = v82;
                  v47 = v75;
                  v48 = v75;
                  if ( v35 == v90 )
                    do
                      v126 = __PAIR__(v90, v94);
                      v127 = v45;
                      --v47;
                      ++v45;
                    while ( v47 );
                  else
                      v127 = v46;
                      --v48;
                      ++v46;
                    while ( v48 );
              ++v94;
            while ( v94 != v79 );
          v32 = v70;
          ++v35;
        while ( v35 != v65 );
      v49 = v34;
      v50 = v72;
      v51 = v12;
      do
        v121 = v32;
        v122 = v50;
        v123 = v85;
        v52 = (const Material *)Feature::_getMaterial(v88, v49, (const BlockPos *)&v121);
        if ( TreeFeature::_isFree(v88, v52) || Material::isType((int *)v52, 5) == 1 )
          v118 = v32;
          v119 = v50;
          v120 = v85;
          v116 = *(_BYTE *)(Block::mLog + 4);
          v117 = 0;
          Feature::_setBlockAndData(v88, v49, (const BlockPos *)&v118, (const FullBlock *)&v116);
        ++v50;
        --v51;
      while ( v51 );
      v53 = v63;
      if ( v63 != v65 )
        v95 = VineBlock::VINE_NORTH;
        v93 = VineBlock::VINE_SOUTH;
        v87 = VineBlock::VINE_WEST;
        v83 = VineBlock::VINE_EAST;
        v69 = v32 + 1;
          v54 = 2 - (v53 - v90) / 2;
          v55 = v32 - v54;
          v80 = v69 + v54;
          if ( v55 != v69 + v54 )
            v76 = v85 + 1 + v54;
            v73 = v85 - v54;
              v56 = v73;
              v57 = 5 - 2 * ((v53 - v90) / 2);
              if ( v73 != v76 )
                do
                  v126 = __PAIR__(v53, v55);
                  v127 = v56;
                  v58 = (int *)Feature::_getMaterial(v88, v49, (const BlockPos *)&v126);
                  if ( Material::isType(v58, 7) == 1 )
                    v113 = v126 - 1;
                    v114 = HIDWORD(v126);
                    v115 = v127;
                    v110 = v126 + 1;
                    v111 = HIDWORD(v126);
                    v112 = v127;
                    v108 = v126;
                    v109 = v127 - 1;
                    v106 = v126;
                    v107 = v127 + 1;
                    if ( !(j_Random::_genRandInt32(v84) & 3) )
                      v59 = (int *)Feature::_getMaterial(v88, v49, (const BlockPos *)&v113);
                      if ( Material::isType(v59, 0) == 1 )
                        v103 = v113;
                        v104 = v114;
                        v105 = v115;
                        SwampTreeFeature::_addVine(v88, v49, (const BlockPos *)&v103, v83);
                      v60 = (int *)Feature::_getMaterial(v88, v49, (const BlockPos *)&v110);
                      if ( Material::isType(v60, 0) == 1 )
                        v100 = v110;
                        v101 = v111;
                        v102 = v112;
                        SwampTreeFeature::_addVine(v88, v49, (const BlockPos *)&v100, v87);
                      v61 = (int *)Feature::_getMaterial(v88, v49, (const BlockPos *)&v108);
                      if ( Material::isType(v61, 0) == 1 )
                        v98 = v108;
                        v99 = v109;
                        SwampTreeFeature::_addVine(v88, v49, (const BlockPos *)&v98, v93);
                      v62 = (int *)Feature::_getMaterial(v88, v49, (const BlockPos *)&v106);
                      if ( Material::isType(v62, 0) == 1 )
                        v96 = v106;
                        v97 = v107;
                        SwampTreeFeature::_addVine(v88, v49, (const BlockPos *)&v96, v95);
                  --v57;
                  ++v56;
                while ( v57 );
              ++v55;
            while ( v55 != v80 );
          ++v53;
        while ( v53 != v65 );
      result = 1;
  else
LABEL_95:
  return result;
}


_DWORD *__fastcall SwampTreeFeature::SwampTreeFeature(TreeFeature *a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)TreeFeature::TreeFeature(a1, 0, 0, 0, 0);
  *result = &off_2718C44;
  return result;
}


void __fastcall SwampTreeFeature::~SwampTreeFeature(SwampTreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall SwampTreeFeature::~SwampTreeFeature(SwampTreeFeature *this)
{
  SwampTreeFeature::~SwampTreeFeature(this);
}
