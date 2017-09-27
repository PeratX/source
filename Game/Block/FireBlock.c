

int __fastcall FireBlock::getResourceCount(FireBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


signed int __fastcall FireBlock::mayPlace(FireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  FireBlock *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  signed int result; // r0@2
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v10 = v6;
  v11 = v7 - 1;
  v12 = v8;
  if ( BlockSource::isSolidBlockingBlock(v4, (const BlockPos *)&v10) )
    result = 1;
  else
    result = FireBlock::isValidFireLocation(v5, v4, v3);
  return result;
}


FireBlock *__fastcall FireBlock::checkBurn(FireBlock *this, BlockSource *a2, const BlockPos *a3, int a4, Random *a5, int a6)
{
  FireBlock *v6; // r9@1
  unsigned int v7; // r7@1
  BlockPos *v8; // r4@1
  BlockSource *v9; // r5@1
  FireBlock *result; // r0@1
  int v11; // r6@1
  unsigned int v12; // r0@2
  int v13; // r1@2
  int v14; // r10@5
  int v15; // r11@5
  Dimension *v16; // r0@5
  Weather *v17; // r7@5
  unsigned int v18; // r7@9
  int v19; // r0@9
  int v20; // r8@9
  signed int v21; // r0@10
  int v22; // [sp+Ch] [bp-3Ch]@9
  __int16 v23; // [sp+10h] [bp-38h]@8
  char v24; // [sp+14h] [bp-34h]@10
  __int16 v25; // [sp+18h] [bp-30h]@9
  unsigned __int8 v26; // [sp+1Ch] [bp-2Ch]@5
  unsigned __int8 v27; // [sp+20h] [bp-28h]@1

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  BlockSource::getBlockID((BlockSource *)&v27, a2, (int)a3);
  result = (FireBlock *)((char *)v6 + 4 * v27);
  v11 = *((_DWORD *)result + 424);
  if ( v7 )
  {
    v12 = Random::_genRandInt32(a5);
    v13 = v12 % v7;
    result = (FireBlock *)(v12 / v7);
  }
  else
    v13 = 0;
  if ( v13 < v11 )
    BlockSource::getBlockID((BlockSource *)&v26, v9, (int)v8);
    v14 = v26;
    v15 = *(_BYTE *)(Block::mTNT + 4);
    v16 = (Dimension *)BlockSource::getDimension(v9);
    v17 = (Weather *)Dimension::getWeather(v16);
    if ( a6 != -10 && (signed int)(Random::_genRandInt32(a5) % (a6 + 10)) > 4 || Weather::isRainingAt(v17, v9, v8) )
    {
      v23 = FullBlock::AIR;
      result = (FireBlock *)BlockSource::setBlockAndData((int)v9, v8, (int)&v23, 3, 0);
    }
    else
      v18 = Random::_genRandInt32(a5);
      v19 = Block::getBlockState((int)v6, 1);
      v22 = *(_DWORD *)v19;
      v20 = *(_DWORD *)(v19 + 4);
      BlockState::getMask((BlockState *)v19);
      v25 = FullBlock::AIR;
      BlockSource::setBlockAndData((int)v9, v8, (int)&v25, 3, 0);
      result = (FireBlock *)FireBlock::isValidFireLocation(v6, v9, v8);
      if ( result == (FireBlock *)1 )
      {
        v21 = a6 + (v18 % 5 >> 2);
        v24 = *((_BYTE *)v6 + 4);
        if ( v21 > 15 )
          v21 = 15;
        result = (FireBlock *)BlockSource::setBlockAndData((int)v9, v8, &v24, v21 << (v22 + 1 - v20), 3, 0);
      }
    if ( v14 == v15 )
      result = (FireBlock *)(*(int (__cdecl **)(_DWORD))(*(_DWORD *)Block::mTNT + 240))(Block::mTNT);
  return result;
}


int __fastcall FireBlock::tick(FireBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  FireBlock *v5; // r10@1
  Random *v6; // r11@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  unsigned __int64 *v9; // r0@1
  int result; // r0@1
  int v11; // r1@2
  int v12; // r2@2
  int v13; // r0@2
  int v14; // r8@2
  Level *v15; // r0@4
  unsigned __int64 *v16; // r7@4
  Dimension *v17; // r0@6
  Weather *v18; // r0@6
  Weather *v19; // r6@6
  int v20; // r1@9
  int v21; // r2@9
  int v22; // r1@10
  int v23; // r2@10
  int v24; // r2@11
  int v25; // r2@12
  BlockState *v26; // r7@14
  int v27; // r9@14
  unsigned int v28; // r0@16
  FireBlock *v29; // ST1C_4@16
  int v30; // ST24_4@16
  Random *v31; // r10@16
  unsigned __int8 v32; // r4@16
  int v33; // r11@16
  int v34; // r8@16
  unsigned __int8 v35; // r0@16
  LevelChunk **v36; // r7@17
  unsigned int v37; // kr00_4@19
  signed int v38; // r0@21
  int v39; // r1@21
  __int64 v40; // r2@21
  BlockSource *v41; // r8@25
  __int64 v42; // kr08_8@25
  signed int v43; // r4@25
  int v44; // r2@25
  int v45; // r1@27
  int v46; // r2@27
  int v47; // r1@27
  int v48; // r2@27
  int v49; // r1@27
  int v50; // r2@27
  int v51; // r2@27
  int v52; // r4@27
  int v53; // r2@27
  FireBlock *v54; // r0@27
  BlockSource *v55; // r10@27
  signed int v56; // r11@28
  signed int v57; // r5@29
  signed int v58; // r8@29
  int v59; // r1@31
  int v60; // r2@31
  unsigned int v61; // r4@31
  int v62; // r7@33
  Level *v63; // r0@34
  unsigned int v64; // r0@34
  int v65; // r9@36
  signed int v66; // r1@40
  int v67; // r7@44
  signed int v68; // r0@52
  BlockSource *v69; // r0@59
  BlockPos *v70; // r4@59
  BlockSource *v71; // r5@59
  _BOOL4 v72; // r0@59
  __int16 *v73; // r2@61
  BlockPos *v74; // r1@61
  int v75; // r0@61
  Random *v76; // [sp+Ch] [bp-13Ch]@27
  signed int v77; // [sp+10h] [bp-138h]@27
  int v78; // [sp+14h] [bp-134h]@25
  const BlockPos *v79; // [sp+18h] [bp-130h]@27
  FireBlock *v80; // [sp+1Ch] [bp-12Ch]@27
  signed int v81; // [sp+20h] [bp-128h]@27
  char v82; // [sp+28h] [bp-120h]@54
  unsigned __int8 v83; // [sp+29h] [bp-11Fh]@54
  __int64 v84; // [sp+2Ch] [bp-11Ch]@51
  int v85; // [sp+34h] [bp-114h]@51
  __int64 v86; // [sp+38h] [bp-110h]@49
  int v87; // [sp+40h] [bp-108h]@49
  int v88; // [sp+44h] [bp-104h]@47
  int v89; // [sp+48h] [bp-100h]@47
  int v90; // [sp+4Ch] [bp-FCh]@47
  int v91; // [sp+50h] [bp-F8h]@45
  int v92; // [sp+54h] [bp-F4h]@45
  int v93; // [sp+58h] [bp-F0h]@45
  __int64 v94; // [sp+5Ch] [bp-ECh]@22
  int v95; // [sp+64h] [bp-E4h]@31
  __int64 v96; // [sp+68h] [bp-E0h]@27
  int v97; // [sp+70h] [bp-D8h]@27
  __int64 v98; // [sp+74h] [bp-D4h]@27
  int v99; // [sp+7Ch] [bp-CCh]@27
  int v100; // [sp+80h] [bp-C8h]@27
  int v101; // [sp+84h] [bp-C4h]@27
  int v102; // [sp+88h] [bp-C0h]@27
  int v103; // [sp+8Ch] [bp-BCh]@27
  int v104; // [sp+90h] [bp-B8h]@27
  int v105; // [sp+94h] [bp-B4h]@27
  int v106; // [sp+98h] [bp-B0h]@27
  int v107; // [sp+9Ch] [bp-ACh]@27
  int v108; // [sp+A0h] [bp-A8h]@27
  int v109; // [sp+A4h] [bp-A4h]@25
  int v110; // [sp+A8h] [bp-A0h]@25
  int v111; // [sp+ACh] [bp-9Ch]@25
  __int16 v112; // [sp+B0h] [bp-98h]@62
  __int64 v113; // [sp+B4h] [bp-94h]@22
  int v114; // [sp+BCh] [bp-8Ch]@22
  char v115; // [sp+C0h] [bp-88h]@61
  char v116; // [sp+C1h] [bp-87h]@61
  __int64 v117; // [sp+C4h] [bp-84h]@59
  int v118; // [sp+CCh] [bp-7Ch]@59
  char v119; // [sp+D0h] [bp-78h]@19
  char v120; // [sp+D4h] [bp-74h]@18
  char v121; // [sp+D8h] [bp-70h]@16
  unsigned __int8 v122; // [sp+D9h] [bp-6Fh]@16
  char v123; // [sp+DCh] [bp-6Ch]@14
  unsigned __int8 v124; // [sp+DDh] [bp-6Bh]@14
  __int64 v125; // [sp+E0h] [bp-68h]@12
  int v126; // [sp+E8h] [bp-60h]@12
  __int64 v127; // [sp+ECh] [bp-5Ch]@11
  int v128; // [sp+F4h] [bp-54h]@11
  int v129; // [sp+F8h] [bp-50h]@10
  int v130; // [sp+FCh] [bp-4Ch]@10
  int v131; // [sp+100h] [bp-48h]@10
  int v132; // [sp+104h] [bp-44h]@9
  int v133; // [sp+108h] [bp-40h]@9
  int v134; // [sp+10Ch] [bp-3Ch]@9
  __int16 v135; // [sp+110h] [bp-38h]@3
  int v136; // [sp+114h] [bp-34h]@2
  int v137; // [sp+118h] [bp-30h]@2
  int v138; // [sp+11Ch] [bp-2Ch]@2
  char v139; // [sp+120h] [bp-28h]@2

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  v9 = (unsigned __int64 *)Level::getGameRules(v8);
  result = GameRules::getBool(v9, (int **)&GameRules::DO_FIRE_TICK);
  if ( result != 1 )
    return result;
  v11 = *((_DWORD *)v7 + 1);
  v12 = *((_DWORD *)v7 + 2);
  v136 = *(_DWORD *)v7;
  v137 = v11 - 1;
  v138 = v12;
  BlockSource::getBlockAndData((BlockSource *)&v139, v4, (int)&v136);
  v13 = FullBlock::getBlock((FullBlock *)&v139);
  v14 = (*(int (**)(void))(*(_DWORD *)v13 + 48))();
  if ( !(*(int (__fastcall **)(FireBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 224))(v5, v4, v7) )
  {
    v135 = FullBlock::AIR;
    BlockSource::setBlockAndData((int)v4, v7, (int)&v135, 3, 0);
  }
  v15 = (Level *)BlockSource::getLevel(v4);
  v16 = (unsigned __int64 *)Level::getGameRules(v15);
  if ( GameRules::hasRule(v16, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) == 1
    && !GameRules::getBool(v16, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) )
    return BlockSource::removeBlock(v4, v7);
  v17 = (Dimension *)BlockSource::getDimension(v4);
  v18 = (Weather *)Dimension::getWeather(v17);
  v19 = v18;
  if ( !v14 && Weather::isRaining(v18) == 1 )
    if ( Weather::isRainingAt(v19, v4, v7) )
      return BlockSource::removeBlock(v4, v7);
    v20 = *((_DWORD *)v7 + 1);
    v21 = *((_DWORD *)v7 + 2);
    v132 = *(_DWORD *)v7 + 1;
    v133 = v20;
    v134 = v21;
    if ( Weather::isRainingAt(v19, v4, (const BlockPos *)&v132) )
    v22 = *((_DWORD *)v7 + 1);
    v23 = *((_DWORD *)v7 + 2);
    v129 = *(_DWORD *)v7 - 1;
    v130 = v22;
    v131 = v23;
    if ( Weather::isRainingAt(v19, v4, (const BlockPos *)&v129) )
    v24 = *((_DWORD *)v7 + 2);
    v127 = *(_QWORD *)v7;
    v128 = v24 - 1;
    if ( Weather::isRainingAt(v19, v4, (const BlockPos *)&v127) )
    v25 = *((_DWORD *)v7 + 2);
    v125 = *(_QWORD *)v7;
    v126 = v25 + 1;
    if ( Weather::isRainingAt(v19, v4, (const BlockPos *)&v125) == 1 )
  BlockSource::getBlockAndData((BlockSource *)&v123, v4, (int)v7);
  v26 = (BlockState *)Block::getBlockState((int)v5, 1);
  v27 = (v124 >> (*(_QWORD *)v26 + 1 - (unsigned int)(*(_QWORD *)v26 >> 32))) & (0xFu >> (4
                                                                                        - (unsigned int)(*(_QWORD *)v26 >> 32)));
  if ( v27 <= 14 && (v14 ^ 1) == 1 )
    v28 = Random::_genRandInt32(v6);
    v29 = v5;
    v30 = (int)v4;
    v31 = v6;
    v32 = v124;
    v33 = v14;
    v27 += v28 % 3 >> 1;
    v34 = v27 << (*(_QWORD *)v26 + 1 - (unsigned int)(*(_QWORD *)v26 >> 32));
    v35 = v32 & ~(unsigned __int8)BlockState::getMask(v26) | v34;
    v4 = (BlockSource *)v30;
    v124 = v35;
    v14 = v33;
    v6 = v31;
    v5 = v29;
    v121 = v123;
    v122 = v35;
    BlockSource::setBlockAndData(v30, v7, (int)&v121, 4, 0);
  v36 = (LevelChunk **)BlockSource::getTickQueue(v4, v7);
  if ( !BlockTickingQueue::isInstaticking((BlockTickingQueue *)v36) )
    v120 = *((_BYTE *)v5 + 4);
    if ( !BlockTickingQueue::hasTickNextTick((int)v36, (int)v7) )
    {
      v119 = *((_BYTE *)v5 + 4);
      v37 = Random::_genRandInt32(v6);
      BlockTickingQueue::add(v36, v4, (int)v7, &v119, v37 % 0xA + 30, 0);
    }
  if ( !v14 )
    v38 = FireBlock::isValidFireLocation(v5, v4, v7);
    v40 = *(_QWORD *)v7;
    v39 = *((_DWORD *)v7 + 2);
    HIDWORD(v40) = (*(_QWORD *)v7 >> 32) - 1;
    if ( v38 )
      v113 = v40;
      v114 = v39;
      BlockSource::getBlockID((BlockSource *)&v94, v4, (int)&v113);
      if ( v27 != 15 || *((_DWORD *)v5 + (unsigned __int8)v94 + 168) > 0 || Random::_genRandInt32(v6) & 3 )
        goto LABEL_25;
      v73 = &v112;
      v112 = FullBlock::AIR;
      v74 = v7;
      v75 = (int)v4;
    else
      v117 = v40;
      v69 = v4;
      v118 = v39;
      v70 = v7;
      v71 = v69;
      v72 = BlockSource::isSolidBlockingBlock(v69, (const BlockPos *)&v117);
      if ( v27 <= 3 )
      {
        result = !v72;
        if ( result != 1 )
          return result;
      }
      v73 = (__int16 *)&v115;
      v74 = v70;
      v115 = BlockID::AIR;
      v116 = 0;
      v75 = (int)v71;
    return BlockSource::setBlockAndData(v75, v74, (int)v73, 3, 0);
LABEL_25:
  v78 = BlockSource::isHumidAt(v4, v7);
  v41 = v4;
  v42 = *(_QWORD *)v7;
  v43 = v78;
  v44 = *((_DWORD *)v7 + 2);
  v109 = *(_QWORD *)v7 + 1;
  v110 = HIDWORD(v42);
  v111 = v44;
  if ( v78 )
    v43 = -50;
  FireBlock::checkBurn(v5, v41, (const BlockPos *)&v109, v43 + 300, v6, v27);
  v45 = *((_DWORD *)v7 + 1);
  v46 = *((_DWORD *)v7 + 2);
  v106 = *(_DWORD *)v7 - 1;
  v107 = v45;
  v108 = v46;
  FireBlock::checkBurn(v5, v41, (const BlockPos *)&v106, v43 + 300, v6, v27);
  v47 = *((_DWORD *)v7 + 1);
  v48 = *((_DWORD *)v7 + 2);
  v103 = *(_DWORD *)v7;
  v104 = v47 - 1;
  v105 = v48;
  FireBlock::checkBurn(v5, v41, (const BlockPos *)&v103, v43 + 250, v6, v27);
  v49 = *((_DWORD *)v7 + 1);
  v50 = *((_DWORD *)v7 + 2);
  v100 = *(_DWORD *)v7;
  v101 = v49 + 1;
  v102 = v50;
  FireBlock::checkBurn(v5, v41, (const BlockPos *)&v100, v43 + 250, v6, v27);
  v51 = *((_DWORD *)v7 + 2);
  v98 = *(_QWORD *)v7;
  v99 = v51 - 1;
  v52 = v43 + 300;
  FireBlock::checkBurn(v5, v41, (const BlockPos *)&v98, v52, v6, v27);
  v53 = *((_DWORD *)v7 + 2);
  v76 = v6;
  v79 = v7;
  v96 = *(_QWORD *)v7;
  v97 = v53 + 1;
  v54 = v5;
  v80 = v5;
  v55 = v41;
  FireBlock::checkBurn(v54, v41, (const BlockPos *)&v96, v52, v6, v27);
  v77 = v27 + 30;
  v81 = -1;
  do
    v56 = -1;
    do
      v57 = -1;
      v58 = -100;
      do
        if ( v81 | v56 | v57 )
        {
          v59 = *((_DWORD *)v79 + 1);
          v60 = *((_DWORD *)v79 + 2);
          v61 = v58;
          LODWORD(v94) = *(_DWORD *)v79 + v81;
          HIDWORD(v94) = v57 + v59;
          v95 = v60 + v56;
          if ( v57 <= 1 )
            v61 = 100;
          v62 = FireBlock::getFireOdds(v80, v55, (const BlockPos *)&v94);
          if ( v62 >= 1 )
          {
            v63 = (Level *)BlockSource::getLevel(v55);
            v64 = Level::getDifficulty(v63);
            if ( v64 < 4 )
              v62 += 7 * v64;
            v65 = (v62 + 40) / v77;
            if ( v78 )
              v65 = (v62 + 40) / v77 / 2;
            if ( v65 >= 1 )
            {
              v66 = v61 ? Random::_genRandInt32(v76) % v61 : 0;
              if ( v66 <= v65 )
              {
                if ( Weather::isRainingAt(v19, v55, (const BlockPos *)&v94) )
                {
                  v67 = 1;
                }
                else
                  v91 = v94 - 1;
                  v92 = HIDWORD(v94);
                  v93 = v95;
                  if ( Weather::isRainingAt(v19, v55, (const BlockPos *)&v91) )
                  {
                    v67 = 1;
                  }
                  else
                    v88 = v94 + 1;
                    v89 = HIDWORD(v94);
                    v90 = v95;
                    if ( Weather::isRainingAt(v19, v55, (const BlockPos *)&v88) )
                    {
                      v67 = 1;
                    }
                    else
                      v86 = v94;
                      v87 = v95 - 1;
                      if ( Weather::isRainingAt(v19, v55, (const BlockPos *)&v86) )
                      {
                        v67 = 1;
                      }
                      else
                        v84 = v94;
                        v85 = v95 + 1;
                        v67 = Weather::isRainingAt(v19, v55, (const BlockPos *)&v84);
                v68 = Weather::isRaining(v19);
                if ( v67 != 1 || !v68 )
                  v82 = v123;
                  v83 = v124;
                  BlockSource::setBlockAndData((int)v55, (BlockPos *)&v94, (int)&v82, 3, 0);
              }
            }
          }
        }
        v58 += 100;
        ++v57;
      while ( v58 != 500 );
      ++v56;
    while ( v56 != 2 );
    result = v81 + 1;
    v81 = result;
  while ( result != 2 );
  return result;
}


int __fastcall FireBlock::getFlammability(FireBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  FireBlock *v4; // r5@1
  int v5; // r4@1
  int result; // r0@1
  unsigned __int8 v7; // [sp+4h] [bp-14h]@1

  v4 = this;
  v5 = a4;
  BlockSource::getBlockID((BlockSource *)&v7, a2, (int)a3);
  result = *((_DWORD *)v4 + v7 + 168);
  if ( result <= v5 )
    result = v5;
  return result;
}


int __fastcall FireBlock::mayPick(FireBlock *this)
{
  return 0;
}


int __fastcall FireBlock::ignite(FireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  FireBlock *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int result; // r0@1
  int *v10; // r1@3
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r1@7
  int v14; // r2@7
  int v15; // r2@10
  int v16; // r2@13
  int v17; // r1@16
  int v18; // r2@16
  char *v19; // r2@19
  int v20; // r0@19
  char v21; // [sp+4h] [bp-64h]@22
  int v22; // [sp+8h] [bp-60h]@16
  int v23; // [sp+Ch] [bp-5Ch]@16
  int v24; // [sp+10h] [bp-58h]@16
  __int64 v25; // [sp+14h] [bp-54h]@13
  int v26; // [sp+1Ch] [bp-4Ch]@13
  __int64 v27; // [sp+20h] [bp-48h]@10
  int v28; // [sp+28h] [bp-40h]@10
  int v29; // [sp+2Ch] [bp-3Ch]@7
  int v30; // [sp+30h] [bp-38h]@7
  int v31; // [sp+34h] [bp-34h]@7
  int v32; // [sp+38h] [bp-30h]@4
  int v33; // [sp+3Ch] [bp-2Ch]@4
  int v34; // [sp+40h] [bp-28h]@4
  int v35; // [sp+44h] [bp-24h]@1
  int v36; // [sp+48h] [bp-20h]@1
  int v37; // [sp+4Ch] [bp-1Ch]@1
  char v38; // [sp+50h] [bp-18h]@3
  unsigned __int8 v39; // [sp+54h] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v35 = v6;
  v36 = v7 + 1;
  v37 = v8;
  BlockSource::getBlockID((BlockSource *)&v39, v4, (int)&v35);
  result = *((_BYTE *)v5 + 4);
  if ( v39 != result )
  {
    if ( v39 == BlockID::AIR )
    {
      v10 = &v35;
      v38 = result;
    }
    else
      v11 = *((_DWORD *)v3 + 1);
      v12 = *((_DWORD *)v3 + 2);
      v32 = *(_DWORD *)v3 - 1;
      v33 = v11;
      v34 = v12;
      BlockSource::getBlockID((BlockSource *)&v39, v4, (int)&v32);
      result = *((_BYTE *)v5 + 4);
      if ( v39 == result )
        return result;
      if ( v39 == BlockID::AIR )
      {
        v38 = result;
        v10 = &v32;
      }
      else
        v13 = *((_DWORD *)v3 + 1);
        v14 = *((_DWORD *)v3 + 2);
        v29 = *(_DWORD *)v3 + 1;
        v30 = v13;
        v31 = v14;
        BlockSource::getBlockID((BlockSource *)&v39, v4, (int)&v29);
        result = *((_BYTE *)v5 + 4);
        if ( v39 == result )
          return result;
        if ( v39 == BlockID::AIR )
        {
          v38 = result;
          v10 = &v29;
        }
        else
          v15 = *((_DWORD *)v3 + 2);
          v27 = *(_QWORD *)v3;
          v28 = v15 - 1;
          BlockSource::getBlockID((BlockSource *)&v39, v4, (int)&v27);
          result = *((_BYTE *)v5 + 4);
          if ( v39 == result )
            return result;
          if ( v39 == BlockID::AIR )
          {
            v38 = result;
            v10 = (int *)&v27;
          }
          else
            v16 = *((_DWORD *)v3 + 2);
            v25 = *(_QWORD *)v3;
            v26 = v16 + 1;
            BlockSource::getBlockID((BlockSource *)&v39, v4, (int)&v25);
            result = *((_BYTE *)v5 + 4);
            if ( v39 == result )
              return result;
            if ( v39 == BlockID::AIR )
            {
              v38 = result;
              v10 = (int *)&v25;
            }
            else
              v17 = *((_DWORD *)v3 + 1);
              v18 = *((_DWORD *)v3 + 2);
              v22 = *(_DWORD *)v3;
              v23 = v17 - 1;
              v24 = v18;
              BlockSource::getBlockID((BlockSource *)&v39, v4, (int)&v22);
              result = *((_BYTE *)v5 + 4);
              if ( v39 == result )
                return result;
              if ( v39 != BlockID::AIR )
              {
                v19 = &v21;
                v21 = result;
                v20 = (int)v4;
                v10 = (int *)v3;
                goto LABEL_20;
              }
              v10 = &v22;
    v19 = &v38;
    v20 = (int)v4;
LABEL_20:
    result = BlockSource::setBlock(v20, (BlockPos *)v10, v19, 3);
  }
  return result;
}


signed int __fastcall FireBlock::animateTick(FireBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r7@1
  FireBlock *v5; // r5@1
  Random *v6; // r6@1
  const BlockPos *v7; // r11@1
  int v8; // r10@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r1@2
  int v12; // r2@2
  int v26; // r7@3
  Random *v27; // r10@3
  int v29; // ST1C_4@3
  Random *v34; // r0@3
  float *v39; // r2@3
  int v40; // r0@3
  signed int result; // r0@4
  int v42; // r1@6
  int v43; // r2@6
  FireBlock *v46; // ST18_4@7
  int v51; // ST10_4@7
  int v53; // ST0C_4@7
  int v59; // r1@8
  int v60; // r2@8
  int v61; // r8@9
  FireBlock *v63; // ST18_4@9
  int v71; // ST1C_4@9
  int v74; // ST10_4@9
  int v77; // r2@10
  int v78; // ST1C_4@11
  FireBlock *v82; // ST18_4@11
  int v92; // r2@12
  int v93; // ST1C_4@13
  FireBlock *v97; // ST18_4@13
  int v99; // r10@13
  int v106; // r9@13
  int v109; // r1@14
  int v110; // r2@14
  int v113; // r7@15
  int v118; // ST1C_4@15
  int v121; // r10@15
  Random *v126; // [sp+14h] [bp-13Ch]@6
  float v127; // [sp+2Ch] [bp-124h]@15
  int v128; // [sp+38h] [bp-118h]@14
  int v129; // [sp+3Ch] [bp-114h]@14
  int v130; // [sp+40h] [bp-110h]@14
  int v131; // [sp+44h] [bp-10Ch]@13
  int v132; // [sp+48h] [bp-108h]@13
  int v133; // [sp+4Ch] [bp-104h]@13
  float v134; // [sp+50h] [bp-100h]@13
  __int64 v135; // [sp+5Ch] [bp-F4h]@12
  int v136; // [sp+64h] [bp-ECh]@12
  int v137; // [sp+68h] [bp-E8h]@11
  int v138; // [sp+6Ch] [bp-E4h]@11
  int v139; // [sp+70h] [bp-E0h]@11
  float v140; // [sp+74h] [bp-DCh]@11
  __int64 v141; // [sp+80h] [bp-D0h]@10
  int v142; // [sp+88h] [bp-C8h]@10
  int v143; // [sp+8Ch] [bp-C4h]@9
  int v144; // [sp+90h] [bp-C0h]@9
  int v145; // [sp+94h] [bp-BCh]@9
  float v146; // [sp+98h] [bp-B8h]@9
  int v147; // [sp+A4h] [bp-ACh]@8
  int v148; // [sp+A8h] [bp-A8h]@8
  int v149; // [sp+ACh] [bp-A4h]@8
  int v150; // [sp+B0h] [bp-A0h]@7
  int v151; // [sp+B4h] [bp-9Ch]@7
  int v152; // [sp+B8h] [bp-98h]@7
  float v153; // [sp+BCh] [bp-94h]@7
  int v154; // [sp+C8h] [bp-88h]@6
  int v155; // [sp+CCh] [bp-84h]@6
  int v156; // [sp+D0h] [bp-80h]@6
  float v157; // [sp+D4h] [bp-7Ch]@3
  int v158; // [sp+E0h] [bp-70h]@2
  int v159; // [sp+E4h] [bp-6Ch]@2
  int v160; // [sp+E8h] [bp-68h]@2
  int v161; // [sp+ECh] [bp-64h]@1
  int v162; // [sp+F0h] [bp-60h]@1
  int v163; // [sp+F4h] [bp-5Ch]@1
  char v164; // [sp+F8h] [bp-58h]@1
  unsigned __int8 v165; // [sp+104h] [bp-4Ch]@2

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = BlockSource::getLevel(a2);
  Vec3::Vec3((int)&v164, (int)v7);
  Level::playSound(v8, 47, (int)&v164);
  v9 = *((_DWORD *)v7 + 1);
  v10 = *((_DWORD *)v7 + 2);
  v161 = *(_DWORD *)v7;
  v162 = v9 - 1;
  v163 = v10;
  if ( BlockSource::isSolidBlockingBlock(v4, (const BlockPos *)&v161)
    || (v11 = *((_DWORD *)v7 + 1),
        v12 = *((_DWORD *)v7 + 2),
        v158 = *(_DWORD *)v7,
        v159 = v11 - 1,
        v160 = v12,
        BlockSource::getBlockID((BlockSource *)&v165, v4, (int)&v158),
        *((_DWORD *)v5 + v165 + 168) >= 1) )
  {
    _R5 = *(_DWORD *)v7;
    _R4 = Random::_genRandInt32(v6);
    _R7 = *((_DWORD *)v7 + 1);
    _R0 = Random::_genRandInt32(v6);
    __asm
    {
      VMOV            S0, R0
      VLDR            D8, =2.32830644e-10
      VCVT.F64.U32    D9, S0
      VMOV            S0, R4
      VCVT.F64.U32    D10, S0
    }
    _R4 = *((_DWORD *)v7 + 2);
      VMUL.F64        D1, D9, D8
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VMUL.F64        D2, D10, D8
      VMOV            S6, R7
      VMOV.F32        S18, #0.5
      VCVT.F32.S32    S6, S6
      VCVT.F32.F64    S2, D1
      VMOV            S8, R5
      VMOV            S10, R4
      VCVT.F32.S32    S8, S8
      VCVT.F32.F64    S4, D2
      VADD.F32        S6, S6, S18
      VMUL.F32        S2, S2, S18
      VCVT.F32.S32    S10, S10
      VCVT.F32.F64    S0, D0
      VADD.F32        S4, S4, S8
      VADD.F32        S2, S6, S2
      VADD.F32        S0, S0, S10
      VSTR            S4, [SP,#0x150+var_7C]
      VSTR            S2, [SP,#0x150+var_78]
      VSTR            S0, [SP,#0x150+var_74]
    Level::addParticle(v8, 4, (int)&v157);
    _R0 = *(_DWORD *)v7;
    __asm { VMOV            S20, R0 }
    _R0 = *((_DWORD *)v7 + 1);
    __asm { VMOV            S22, R0 }
    v26 = v8;
    v27 = v6;
    _R5 = Random::_genRandInt32(v6);
    v29 = v26;
    _R8 = *((_DWORD *)v7 + 2);
      VMOV            S4, R5
      VCVT.F64.U32    D2, S4
      VMOV            S2, R4
      VMUL.F64        D2, D2, D8
      VCVT.F64.U32    D1, S2
      VMUL.F64        D1, D1, D8
      VCVT.F32.S32    S6, S22
      VMOV            S10, R8
      VCVT.F32.S32    S8, S20
      VMUL.F32        S4, S4, S18
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S6, S4
      VSTR            S2, [SP,#0x150+var_7C]
      VSTR            S4, [SP,#0x150+var_78]
    Level::addParticle(v26, 4, (int)&v157);
    _R8 = *(_DWORD *)v7;
    v34 = v6;
    _R6 = *((_DWORD *)v7 + 1);
    _R5 = Random::_genRandInt32(v34);
    _R7 = *((_DWORD *)v7 + 2);
    _R0 = Random::_genRandInt32(v27);
    v39 = &v157;
      VMOV            S6, R6
      VMOV            S8, R8
      VMOV            S10, R7
    v40 = v29;
    return Level::addParticle(v40, 4, (int)v39);
  }
  v126 = v6;
  v42 = *((_DWORD *)v7 + 1);
  v43 = *((_DWORD *)v7 + 2);
  v154 = *(_DWORD *)v7 - 1;
  v155 = v42;
  v156 = v43;
  BlockSource::getBlockID((BlockSource *)&v165, v4, (int)&v154);
  if ( *((_DWORD *)v5 + v165 + 168) >= 1 )
    __asm { VMOV            S0, R0 }
    v46 = v5;
    _R5 = *((_DWORD *)v7 + 1);
    __asm { VCVT.F64.U32    D9, S0 }
    __asm { VMUL.F64        D9, D9, D8 }
      VMUL.F64        D1, D10, D8
      VCVT.F32.F64    S4, D9
      VMOV            S6, R8
      VLDR            S18, =0.1
      VADD.F32        S4, S4, S6
      VSTR            S4, [SP,#0x150+var_94]
      VSTR            S2, [SP,#0x150+var_90]
      VSTR            S0, [SP,#0x150+var_8C]
    v150 = 0;
    v151 = 0;
    v152 = 0;
    Level::addParticle(v8, 4, (int)&v153);
    v51 = *(_DWORD *)v7;
    _R9 = Random::_genRandInt32(v6);
    v53 = *((_DWORD *)v7 + 1);
      VMOV            S4, R9
    _R0 = v51;
      VMOV            S6, R0
    _R0 = v53;
      VMOV            S8, R0
    v5 = v46;
  v59 = *((_DWORD *)v7 + 1);
  v60 = *((_DWORD *)v7 + 2);
  v147 = *(_DWORD *)v7 + 1;
  v148 = v59;
  v149 = v60;
  BlockSource::getBlockID((BlockSource *)&v165, v4, (int)&v147);
    v61 = *(_DWORD *)v7;
    v63 = v5;
    _R0 = v61 + 1;
      VSUB.F32        S4, S6, S4
      VSTR            S4, [SP,#0x150+var_B8]
      VSTR            S2, [SP,#0x150+var_B4]
      VSTR            S0, [SP,#0x150+var_B0]
    v143 = 0;
    v144 = 0;
    v145 = 0;
    Level::addParticle(v8, 4, (int)&v146);
    v71 = v8;
    _R10 = *((_DWORD *)v7 + 1);
    v74 = *((_DWORD *)v7 + 2);
    ++_R8;
      VMOV            S8, R10
    v8 = v71;
    __asm { VCVT.F32.S32    S8, S8 }
    _R0 = v74;
      VMOV            S10, R0
    v5 = v63;
    Level::addParticle(v71, 4, (int)&v146);
  v77 = *((_DWORD *)v7 + 2);
  v141 = *(_QWORD *)v7;
  v142 = v77 - 1;
  BlockSource::getBlockID((BlockSource *)&v165, v4, (int)&v141);
    v78 = v8;
    _R9 = *((_DWORD *)v7 + 1);
    v82 = v5;
    _R10 = *((_DWORD *)v7 + 2);
      VMOV            S8, R9
      VMOV            S10, R10
      VMUL.F32        S0, S0, S18
      VADD.F32        S2, S2, S6
      VSTR            S2, [SP,#0x150+var_DC]
      VSTR            S4, [SP,#0x150+var_D8]
      VSTR            S0, [SP,#0x150+var_D4]
    v137 = 0;
    v138 = 0;
    v139 = 0;
    Level::addParticle(v78, 4, (int)&v140);
    _R10 = *(_DWORD *)v7;
    _R8 = *((_DWORD *)v7 + 1);
      VMOV            S20, R0
      VMOV            S22, R5
    _R9 = *((_DWORD *)v7 + 2);
    v5 = v82;
      VMOV            S6, R10
      VCVT.F64.U32    D1, S22
      VCVT.F64.U32    D2, S20
    v8 = v78;
      VMOV            S10, R9
  v92 = *((_DWORD *)v7 + 2);
  v135 = *(_QWORD *)v7;
  v136 = v92 + 1;
  BlockSource::getBlockID((BlockSource *)&v165, v4, (int)&v135);
    v93 = v8;
    v97 = v5;
    v99 = *((_DWORD *)v7 + 2);
    _R0 = v99 + 1;
      VSUB.F32        S0, S10, S0
      VSTR            S2, [SP,#0x150+var_100]
      VSTR            S4, [SP,#0x150+var_FC]
      VSTR            S0, [SP,#0x150+var_F8]
    v131 = 0;
    v132 = 0;
    v133 = 0;
    Level::addParticle(v93, 4, (int)&v134);
    v106 = *((_DWORD *)v7 + 2);
    v5 = v97;
    _R0 = v106 + 1;
    v8 = v93;
  v109 = *((_DWORD *)v7 + 1);
  v110 = *((_DWORD *)v7 + 2);
  v128 = *(_DWORD *)v7;
  v129 = v109 + 1;
  v130 = v110;
  BlockSource::getBlockID((BlockSource *)&v165, v4, (int)&v128);
  result = *((_DWORD *)v5 + v165 + 168);
  if ( result >= 1 )
    v113 = *((_DWORD *)v7 + 1);
    _R0 = v113 + 1;
      VMOV            S6, R5
      VSUB.F32        S2, S8, S2
      VSTR            S4, [SP,#0x150+var_124]
      VSTR            S2, [SP,#0x150+var_120]
      VSTR            S0, [SP,#0x150+var_11C]
    Level::addParticle(v8, 4, (int)&v127);
    v118 = v8;
    v121 = *((_DWORD *)v7 + 1);
    _R6 = *((_DWORD *)v7 + 2);
    _R0 = Random::_genRandInt32(v126);
    __asm { VMOV            S4, R4 }
    v39 = &v127;
    _R0 = v121 + 1;
      VMOV            S2, R5
      VMOV            S10, R6
      VSUB.F32        S4, S8, S4
      VSTR            S2, [SP,#0x150+var_124]
      VSTR            S4, [SP,#0x150+var_120]
    v40 = v118;
  return result;
}


int __fastcall FireBlock::canBeSilkTouched(FireBlock *this)
{
  return 0;
}


int __fastcall FireBlock::getFireOdds(FireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  FireBlock *v5; // r7@1
  int v6; // r4@1
  int v7; // r1@2
  int v8; // r2@2
  int v9; // r7@2
  int v10; // r1@2
  int v11; // r2@2
  int v12; // r9@2
  int v13; // r1@2
  int v14; // r2@2
  int v15; // r10@2
  int v16; // r1@2
  int v17; // r2@2
  int v18; // r11@2
  int v19; // r2@2
  int v20; // r8@2
  int v21; // r2@2
  int v23; // [sp+4h] [bp-74h]@2
  __int64 v24; // [sp+8h] [bp-70h]@2
  int v25; // [sp+10h] [bp-68h]@2
  __int64 v26; // [sp+14h] [bp-64h]@2
  int v27; // [sp+1Ch] [bp-5Ch]@2
  int v28; // [sp+20h] [bp-58h]@2
  int v29; // [sp+24h] [bp-54h]@2
  int v30; // [sp+28h] [bp-50h]@2
  int v31; // [sp+2Ch] [bp-4Ch]@2
  int v32; // [sp+30h] [bp-48h]@2
  int v33; // [sp+34h] [bp-44h]@2
  int v34; // [sp+38h] [bp-40h]@2
  int v35; // [sp+3Ch] [bp-3Ch]@2
  int v36; // [sp+40h] [bp-38h]@2
  int v37; // [sp+44h] [bp-34h]@2
  int v38; // [sp+48h] [bp-30h]@2
  int v39; // [sp+4Ch] [bp-2Ch]@2
  unsigned __int8 v40; // [sp+50h] [bp-28h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0;
  if ( BlockSource::isEmptyBlock(a2, a3) == 1 )
  {
    v7 = *((_DWORD *)v3 + 1);
    v8 = *((_DWORD *)v3 + 2);
    v37 = *(_DWORD *)v3 + 1;
    v38 = v7;
    v39 = v8;
    BlockSource::getBlockID((BlockSource *)&v40, v4, (int)&v37);
    v9 = (int)v5 + 672;
    v23 = *(_DWORD *)(v9 + 4 * v40);
    v10 = *((_DWORD *)v3 + 1);
    v11 = *((_DWORD *)v3 + 2);
    v34 = *(_DWORD *)v3 - 1;
    v35 = v10;
    v36 = v11;
    BlockSource::getBlockID((BlockSource *)&v40, v4, (int)&v34);
    v12 = *(_DWORD *)(v9 + 4 * v40);
    v13 = *((_DWORD *)v3 + 1);
    v14 = *((_DWORD *)v3 + 2);
    v31 = *(_DWORD *)v3;
    v32 = v13 - 1;
    v33 = v14;
    BlockSource::getBlockID((BlockSource *)&v40, v4, (int)&v31);
    v15 = *(_DWORD *)(v9 + 4 * v40);
    v16 = *((_DWORD *)v3 + 1);
    v17 = *((_DWORD *)v3 + 2);
    v28 = *(_DWORD *)v3;
    v29 = v16 + 1;
    v30 = v17;
    BlockSource::getBlockID((BlockSource *)&v40, v4, (int)&v28);
    v18 = *(_DWORD *)(v9 + 4 * v40);
    v19 = *((_DWORD *)v3 + 2);
    v26 = *(_QWORD *)v3;
    v27 = v19 - 1;
    BlockSource::getBlockID((BlockSource *)&v40, v4, (int)&v26);
    v20 = *(_DWORD *)(v9 + 4 * v40);
    v21 = *((_DWORD *)v3 + 2);
    v24 = *(_QWORD *)v3;
    v25 = v21 + 1;
    BlockSource::getBlockID((BlockSource *)&v40, v4, (int)&v24);
    if ( v23 > 0 )
      v6 = v23;
    if ( v12 > v6 )
      v6 = v12;
    if ( v15 > v6 )
      v6 = v15;
    if ( v18 > v6 )
      v6 = v18;
    if ( v20 > v6 )
      v6 = v20;
    if ( *(_DWORD *)(v9 + 4 * v40) > v6 )
      v6 = *(_DWORD *)(v9 + 4 * v40);
  }
  return v6;
}


LevelChunk *__fastcall FireBlock::onPlace(FireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  FireBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  Dimension *v6; // r7@1
  LevelChunk *result; // r0@3
  int v8; // r1@4
  int v9; // r2@4
  LevelChunk **v10; // r0@6
  char v11; // [sp+8h] [bp-28h]@6
  char v12; // [sp+Ch] [bp-24h]@8
  char v13; // [sp+Dh] [bp-23h]@8
  int v14; // [sp+10h] [bp-20h]@4
  int v15; // [sp+14h] [bp-1Ch]@4
  int v16; // [sp+18h] [bp-18h]@4

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Dimension *)BlockSource::getDimension(a2);
  if ( Dimension::getId(v6) && Dimension::getId(v6) != 1
    || (result = (LevelChunk *)PortalBlock::trySpawnPortal((PortalBlock *)Block::mPortal, v3, v5, 0)) == 0 )
  {
    v8 = *((_DWORD *)v5 + 1);
    v9 = *((_DWORD *)v5 + 2);
    v14 = *(_DWORD *)v5;
    v15 = v8 - 1;
    v16 = v9;
    if ( BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v14) || FireBlock::isValidFireLocation(v4, v3, v5) )
    {
      v10 = (LevelChunk **)BlockSource::getTickQueue(v3, v5);
      v11 = *((_BYTE *)v4 + 4);
      result = BlockTickingQueue::add(v10, v3, (int)v5, &v11, 0x1Eu, 0);
    }
    else
      v12 = BlockID::AIR;
      v13 = 0;
      result = (LevelChunk *)BlockSource::setBlockAndData((int)v3, v5, (int)&v12, 3, 0);
  }
  return result;
}


void __fastcall FireBlock::~FireBlock(FireBlock *this)
{
  FireBlock::~FireBlock(this);
}


void __fastcall FireBlock::~FireBlock(FireBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FireBlock::FireBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r8@1
  const void **v5; // r6@1
  int v6; // r0@1
  signed int v7; // r0@1
  int v8; // r7@3
  int v9; // r7@3
  int v10; // r7@3
  int v11; // r7@3
  int v12; // r7@3
  int v13; // r7@3
  int v14; // r7@3
  int v15; // r7@3
  int v16; // r7@3
  int v17; // r7@3
  int v18; // r7@3
  int v19; // r7@3
  int v20; // r7@3
  int v21; // r7@3
  int v22; // r7@3
  int v23; // r7@3
  int v24; // r7@3
  int v25; // r7@3
  int v26; // r7@3
  int v27; // r7@3
  int v28; // r7@3
  int v29; // r5@3
  int v30; // r5@3
  int v31; // r5@3
  int v32; // r5@3
  int v33; // r5@3
  int v34; // r5@3
  int v35; // r5@3
  int v36; // r5@3
  int v37; // r5@3
  int v38; // r3@3
  int v39; // r2@3
  int *v45; // r2@3
  float v47; // [sp+4h] [bp-24h]@3
  int v48; // [sp+8h] [bp-20h]@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(13);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270B428;
  AABB::AABB((AABB *)(v3 + 644));
  v7 = 672;
  do
  {
    *(_DWORD *)(v3 + v7 + 1024) = 0;
    *(_DWORD *)(v3 + v7) = 0;
    v7 += 4;
  }
  while ( v7 != 1696 );
  *(_BYTE *)(v3 + 36) = 1;
  v8 = *(_BYTE *)(Block::mWoodPlanks + 4);
  *(_DWORD *)(v3 + 672 + 4 * v8) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v8) = 20;
  v9 = *(_BYTE *)(Block::mDoubleWoodenSlab + 4);
  *(_DWORD *)(v3 + 672 + 4 * v9) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v9) = 20;
  v10 = *(_BYTE *)(Block::mWoodenSlab + 4);
  *(_DWORD *)(v3 + 672 + 4 * v10) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v10) = 20;
  v11 = *(_BYTE *)(Block::mFence + 4);
  *(_DWORD *)(v3 + 672 + 4 * v11) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v11) = 20;
  v12 = *(_BYTE *)(Block::mFenceGateOak + 4);
  *(_DWORD *)(v3 + 672 + 4 * v12) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v12) = 20;
  v13 = *(_BYTE *)(Block::mSpuceFenceGate + 4);
  *(_DWORD *)(v3 + 672 + 4 * v13) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v13) = 20;
  v14 = *(_BYTE *)(Block::mBirchFenceGate + 4);
  *(_DWORD *)(v3 + 672 + 4 * v14) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v14) = 20;
  v15 = *(_BYTE *)(Block::mJungleFenceGate + 4);
  *(_DWORD *)(v3 + 672 + 4 * v15) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v15) = 20;
  v16 = *(_BYTE *)(Block::mAcaciaFenceGate + 4);
  *(_DWORD *)(v3 + 672 + 4 * v16) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v16) = 20;
  v17 = *(_BYTE *)(Block::mDarkOakFenceGate + 4);
  *(_DWORD *)(v3 + 672 + 4 * v17) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v17) = 20;
  v18 = *(_BYTE *)(Block::mOakStairs + 4);
  *(_DWORD *)(v3 + 672 + 4 * v18) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v18) = 20;
  v19 = *(_BYTE *)(Block::mBirchStairs + 4);
  *(_DWORD *)(v3 + 672 + 4 * v19) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v19) = 20;
  v20 = *(_BYTE *)(Block::mSpruceStairs + 4);
  *(_DWORD *)(v3 + 672 + 4 * v20) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v20) = 20;
  v21 = *(_BYTE *)(Block::mJungleStairs + 4);
  *(_DWORD *)(v3 + 672 + 4 * v21) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v21) = 20;
  v22 = *(_BYTE *)(Block::mAcaciaStairs + 4);
  *(_DWORD *)(v3 + 672 + 4 * v22) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v22) = 20;
  v23 = *(_BYTE *)(Block::mDarkOakStairs + 4);
  *(_DWORD *)(v3 + 672 + 4 * v23) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v23) = 20;
  v24 = *(_BYTE *)(Block::mLog + 4);
  *(_DWORD *)(v3 + 672 + 4 * v24) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v24) = 5;
  v25 = *(_BYTE *)(Block::mLog2 + 4);
  *(_DWORD *)(v3 + 672 + 4 * v25) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v25) = 5;
  v26 = *(_BYTE *)(Block::mLeaves + 4);
  *(_DWORD *)(v3 + 672 + 4 * v26) = 30;
  *(_DWORD *)(v3 + 1696 + 4 * v26) = 60;
  v27 = *(_BYTE *)(Block::mLeaves2 + 4);
  *(_DWORD *)(v3 + 672 + 4 * v27) = 30;
  *(_DWORD *)(v3 + 1696 + 4 * v27) = 60;
  v28 = *(_BYTE *)(Block::mBookshelf + 4);
  *(_DWORD *)(v3 + 672 + 4 * v28) = 30;
  *(_DWORD *)(v3 + 1696 + 4 * v28) = 20;
  v29 = *(_BYTE *)(Block::mTNT + 4);
  *(_DWORD *)(v3 + 672 + 4 * v29) = 15;
  *(_DWORD *)(v3 + 1696 + 4 * v29) = 100;
  v30 = *(_BYTE *)(Block::mTallgrass + 4);
  *(_DWORD *)(v3 + 672 + 4 * v30) = 60;
  *(_DWORD *)(v3 + 1696 + 4 * v30) = 100;
  v31 = *(_BYTE *)(Block::mDeadBush + 4);
  *(_DWORD *)(v3 + 672 + 4 * v31) = 60;
  *(_DWORD *)(v3 + 1696 + 4 * v31) = 100;
  v32 = *(_BYTE *)(Block::mDoublePlant + 4);
  *(_DWORD *)(v3 + 672 + 4 * v32) = 60;
  *(_DWORD *)(v3 + 1696 + 4 * v32) = 100;
  v33 = *(_BYTE *)(Block::mYellowFlower + 4);
  *(_DWORD *)(v3 + 672 + 4 * v33) = 60;
  *(_DWORD *)(v3 + 1696 + 4 * v33) = 100;
  v34 = *(_BYTE *)(Block::mRedFlower + 4);
  *(_DWORD *)(v3 + 672 + 4 * v34) = 60;
  *(_DWORD *)(v3 + 1696 + 4 * v34) = 100;
  v35 = *(_BYTE *)(Block::mWool + 4);
  *(_DWORD *)(v3 + 672 + 4 * v35) = 30;
  *(_DWORD *)(v3 + 1696 + 4 * v35) = 60;
  v36 = *(_BYTE *)(Block::mWoolCarpet + 4);
  *(_DWORD *)(v3 + 672 + 4 * v36) = 30;
  *(_DWORD *)(v3 + 1696 + 4 * v36) = 20;
  v37 = *(_BYTE *)(Block::mVine + 4);
  *(_DWORD *)(v3 + 672 + 4 * v37) = 15;
  *(_DWORD *)(v3 + 1696 + 4 * v37) = 100;
  v38 = *(_BYTE *)(Block::mCoalBlock + 4);
  *(_DWORD *)(v3 + 672 + 4 * v38) = 5;
  *(_DWORD *)(v3 + 1696 + 4 * v38) = 5;
  v39 = *(_BYTE *)(Block::mHayBlock + 4);
  *(_DWORD *)(v3 + 672 + 4 * v39) = 60;
  *(_DWORD *)(v3 + 1696 + 4 * v39) = 20;
  Block::setSolid((Block *)v3, 0);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 570425344;
  *(_DWORD *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 17) = 1;
  v48 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  v45 = (int *)&v47;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x28+var_24]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v45 = &v48;
  Block::mTranslucency[v4] = *v45;
  return v3;
}


signed int __fastcall FireBlock::tryIgnite(FireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  FireBlock *v3; // r6@1
  BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r0@1
  char v8; // [sp+0h] [bp-18h]@3
  unsigned __int8 v9; // [sp+4h] [bp-14h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockSource::getBlockID((BlockSource *)&v9, a2, (int)a3);
  v6 = *((_BYTE *)v3 + 4);
  if ( v9 == v6 )
    return 1;
  if ( v9 == BlockID::AIR )
  {
    v8 = v6;
    BlockSource::setBlock((int)v5, v4, &v8, 3);
  }
  return 0;
}


char *__fastcall FireBlock::getAABB(FireBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  return (char *)this + 644;
}


signed int __fastcall FireBlock::getTickDelay(FireBlock *this)
{
  return 30;
}


signed int __fastcall FireBlock::canBurn(FireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  FireBlock *v3; // r4@1
  signed int result; // r0@1
  unsigned __int8 v5; // [sp+4h] [bp-Ch]@1

  v3 = this;
  BlockSource::getBlockID((BlockSource *)&v5, a2, (int)a3);
  result = 0;
  if ( *((_DWORD *)v3 + v5 + 168) > 0 )
    result = 1;
  return result;
}


signed int __fastcall FireBlock::isValidFireLocation(FireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  FireBlock *v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r1@2
  int v10; // r2@2
  int v11; // r1@3
  int v12; // r2@3
  int v13; // r1@4
  int v14; // r2@4
  int v15; // r2@5
  signed int result; // r0@6
  int v17; // r2@7
  __int64 v18; // [sp+4h] [bp-5Ch]@7
  int v19; // [sp+Ch] [bp-54h]@7
  __int64 v20; // [sp+10h] [bp-50h]@5
  int v21; // [sp+18h] [bp-48h]@5
  int v22; // [sp+1Ch] [bp-44h]@4
  int v23; // [sp+20h] [bp-40h]@4
  int v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+28h] [bp-38h]@3
  int v26; // [sp+2Ch] [bp-34h]@3
  int v27; // [sp+30h] [bp-30h]@3
  int v28; // [sp+34h] [bp-2Ch]@2
  int v29; // [sp+38h] [bp-28h]@2
  int v30; // [sp+3Ch] [bp-24h]@2
  int v31; // [sp+40h] [bp-20h]@1
  int v32; // [sp+44h] [bp-1Ch]@1
  int v33; // [sp+48h] [bp-18h]@1
  unsigned __int8 v34; // [sp+4Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v31 = v6 + 1;
  v32 = v7;
  v33 = v8;
  BlockSource::getBlockID((BlockSource *)&v34, v4, (int)&v31);
  if ( *((_DWORD *)v5 + v34 + 168) <= 0
    && (v9 = *((_DWORD *)v3 + 1),
        v10 = *((_DWORD *)v3 + 2),
        v28 = *(_DWORD *)v3 - 1,
        v29 = v9,
        v30 = v10,
        BlockSource::getBlockID((BlockSource *)&v34, v4, (int)&v28),
        *((_DWORD *)v5 + v34 + 168) <= 0)
    && (v11 = *((_DWORD *)v3 + 1),
        v12 = *((_DWORD *)v3 + 2),
        v25 = *(_DWORD *)v3,
        v26 = v11 - 1,
        v27 = v12,
        BlockSource::getBlockID((BlockSource *)&v34, v4, (int)&v25),
    && (v13 = *((_DWORD *)v3 + 1),
        v14 = *((_DWORD *)v3 + 2),
        v22 = *(_DWORD *)v3,
        v23 = v13 + 1,
        v24 = v14,
        BlockSource::getBlockID((BlockSource *)&v34, v4, (int)&v22),
    && (v15 = *((_DWORD *)v3 + 2),
        v20 = *(_QWORD *)v3,
        v21 = v15 - 1,
        BlockSource::getBlockID((BlockSource *)&v34, v4, (int)&v20),
        *((_DWORD *)v5 + v34 + 168) <= 0) )
  {
    v17 = *((_DWORD *)v3 + 2);
    v18 = *(_QWORD *)v3;
    v19 = v17 + 1;
    BlockSource::getBlockID((BlockSource *)&v34, v4, (int)&v18);
    result = 0;
    if ( *((_DWORD *)v5 + v34 + 168) > 0 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall FireBlock::neighborChanged(FireBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  FireBlock *v6; // r6@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  int result; // r0@1
  char v11; // [sp+0h] [bp-20h]@3
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v12 = v7;
  v13 = v8 - 1;
  v14 = v9;
  result = BlockSource::isSolidBlockingBlock(v5, (const BlockPos *)&v12);
  if ( !result )
  {
    result = FireBlock::isValidFireLocation(v6, v5, v4);
    if ( !result )
    {
      v11 = BlockID::AIR;
      result = BlockSource::setBlock((int)v5, v4, &v11, 3);
    }
  }
  return result;
}


int __fastcall FireBlock::setFlammable(int a1, _BYTE *a2, int a3, int a4)
{
  int result; // r0@1

  *(_DWORD *)(a1 + 4 * *a2 + 672) = a3;
  result = a1 + 4 * *a2;
  *(_DWORD *)(result + 1696) = a4;
  return result;
}
