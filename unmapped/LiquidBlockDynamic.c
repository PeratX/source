

LevelChunk *__fastcall LiquidBlockDynamic::onPlace(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  LiquidBlockDynamic *v5; // r6@1
  LevelChunk *result; // r0@1
  LevelChunk **v7; // r7@2
  signed int v8; // r0@2
  char v9; // [sp+Ch] [bp-1Ch]@2
  unsigned __int8 v10; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  LiquidBlock::onPlace(this, a2, a3);
  BlockSource::getBlockID((BlockSource *)&v10, v4, (int)v3);
  result = (LevelChunk *)*((_BYTE *)v5 + 4);
  if ( (LevelChunk *)v10 == result )
  {
    v7 = (LevelChunk **)BlockSource::getTickQueue(v4, v3);
    v9 = *((_BYTE *)v5 + 4);
    v8 = LiquidBlock::getTickDelay(v5, v4);
    result = BlockTickingQueue::add(v7, v4, (int)v3, &v9, v8, 0);
  }
  return result;
}


LevelChunk *__fastcall LiquidBlockDynamic::_spread(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  LiquidBlockDynamic *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  BlockTickingQueue *v7; // r0@1
  LevelChunk **v8; // r7@3
  signed int v9; // r0@3
  char v11; // [sp+8h] [bp-20h]@3
  char v12; // [sp+Ch] [bp-1Ch]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v12 = *((_BYTE *)this + 4);
  BlockSource::setBlockAndData((int)a2, a3, &v12, a4, 3, 0);
  v7 = (BlockTickingQueue *)BlockSource::getTickQueue(v6, v5);
  if ( BlockTickingQueue::isInstaticking(v7) == 1 )
    BlockSource::updateNeighborsAt(v6, v5);
  v8 = (LevelChunk **)BlockSource::getTickQueue(v6, v5);
  v11 = *((_BYTE *)v4 + 4);
  v9 = LiquidBlock::getTickDelay(v4, v6);
  return BlockTickingQueue::add(v8, v6, (int)v5, &v11, v9, 0);
}


BlockTickingQueue *__fastcall LiquidBlockDynamic::_trySpreadTo(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r5@1
  LiquidBlockDynamic *v5; // r7@1
  BlockTickingQueue *result; // r0@1
  int v7; // r8@1
  BlockSource *v8; // r6@1
  int v9; // r0@3
  int *v10; // r4@3
  int v11; // r0@5
  int v12; // r4@12
  void (__fastcall *v13)(int, BlockSource *, const BlockPos *, unsigned int); // r9@12
  unsigned int v14; // r0@12
  unsigned __int8 v15; // [sp+8h] [bp-20h]@8

  v4 = a3;
  v5 = this;
  result = (BlockTickingQueue *)*((_DWORD *)a3 + 1);
  v7 = a4;
  v8 = a2;
  if ( (signed int)result >= 0 )
  {
    result = (BlockTickingQueue *)BlockSource::hasBlock(a2, a3);
    if ( result == (BlockTickingQueue *)1 )
    {
      v9 = BlockSource::getMaterial(v8, v4);
      v10 = (int *)v9;
      result = (BlockTickingQueue *)Material::operator==(v9, *((_DWORD *)v5 + 14));
      if ( !result )
      {
        result = (BlockTickingQueue *)Material::isType(v10, 6);
        if ( !result )
        {
          v11 = BlockSource::getBlock(v8, v4);
          result = (BlockTickingQueue *)(*(int (**)(void))(*(_DWORD *)v11 + 72))();
          if ( !result )
          {
            result = (BlockTickingQueue *)BlockSource::getTickQueue(v8, v4);
            if ( result )
            {
              if ( !BlockTickingQueue::isInstaticking(result) )
              {
                BlockSource::getBlockID((BlockSource *)&v15, v8, (int)v4);
                if ( v15 )
                {
                  if ( Material::isType(*((int **)v5 + 14), 6) == 1 )
                  {
                    LiquidBlock::emitFizzParticle(v5, v8, v4);
                  }
                  else if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v15] + 128))() == 1 )
                    v12 = Block::mBlocks[v15];
                    v13 = *(void (__fastcall **)(int, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v12 + 276);
                    v14 = BlockSource::getData(v8, v4);
                    v13(v12, v8, v4, v14);
                }
              }
              result = LiquidBlockDynamic::_spread(v5, v8, v4, v7);
            }
          }
        }
      }
    }
  }
  return result;
}


Block *__fastcall LiquidBlockDynamic::LiquidBlockDynamic(int a1, const void **a2, int a3, int a4)
{
  Block *v4; // r4@1

  v4 = (Block *)a1;
  LiquidBlock::LiquidBlock(a1, a2, a3, a4);
  *(_DWORD *)v4 = &off_270E058;
  Block::setTicking(v4, 1);
  return v4;
}


int __fastcall LiquidBlockDynamic::_getSpread(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  LiquidBlockDynamic *v5; // r10@1
  int v6; // r8@1
  int v7; // r0@2
  int v8; // r1@2
  int v9; // r0@5
  unsigned __int64 *v10; // r6@8
  unsigned int v11; // r7@8
  int v12; // r6@8
  unsigned __int64 v13; // kr00_8@8
  int v14; // r0@8
  int v15; // r0@9
  signed int v16; // r0@9
  int v17; // r0@11
  int v18; // r0@12
  int v19; // r1@16
  char v20; // r6@16
  char v21; // r0@22
  char v22; // r0@24
  char v23; // r0@26
  const BlockPos *v25; // [sp+Ch] [bp-54h]@1
  int v26; // [sp+10h] [bp-50h]@11
  int v27; // [sp+14h] [bp-4Ch]@11
  int v28; // [sp+18h] [bp-48h]@11
  int v29; // [sp+1Ch] [bp-44h]@2
  int v30; // [sp+20h] [bp-40h]@2
  int v31; // [sp+24h] [bp-3Ch]@2
  int v32[2]; // [sp+28h] [bp-38h]@2
  int v33; // [sp+30h] [bp-30h]@18
  int v34; // [sp+34h] [bp-2Ch]@20
  int v35; // [sp+38h] [bp-28h]@24

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0;
  v25 = a3;
  do
  {
    v32[v6] = 1000;
    v7 = *(_DWORD *)v3;
    v29 = *(_DWORD *)v3;
    v30 = *((_DWORD *)v3 + 1);
    v8 = *((_DWORD *)v3 + 2);
    v31 = *((_DWORD *)v3 + 2);
    switch ( v6 )
    {
      case 0:
        v29 = v7 - 1;
        break;
      case 1:
        v29 = v7 + 1;
      case 2:
        v9 = v8 - 1;
        goto LABEL_7;
      case 3:
        v9 = v8 + 1;
LABEL_7:
        v31 = v9;
      default:
    }
    v10 = (unsigned __int64 *)Block::getBlockState((int)v5, 21);
    v11 = BlockSource::getData(v4, (const BlockPos *)&v29);
    v13 = *v10;
    v12 = *v10 >> 32;
    v14 = BlockSource::getBlock(v4, (const BlockPos *)&v29);
    if ( !(*(int (**)(void))(*(_DWORD *)v14 + 72))() )
      v15 = BlockSource::getMaterial(v4, (const BlockPos *)&v29);
      v16 = Material::operator==(v15, *((_DWORD *)v5 + 14));
      v3 = v25;
      if ( (v11 >> (1 - v12 + v13)) & (0xFu >> (4 - v12)) || !v16 )
      {
        v26 = v29;
        v27 = v30 - 1;
        v28 = v31;
        v17 = BlockSource::getBlock(v4, (const BlockPos *)&v26);
        if ( (*(int (**)(void))(*(_DWORD *)v17 + 72))() )
          v18 = LiquidBlockDynamic::_getSlopeDistance(v5, v4, (const BlockPos *)&v29, 1, v6);
        else
          v18 = 0;
        v32[v6] = v18;
      }
    ++v6;
  }
  while ( v6 != 4 );
  v19 = v32[1];
  v20 = 0;
  if ( v32[1] > v32[0] )
    v19 = v32[0];
  if ( v33 <= v19 )
    v19 = v33;
  if ( v34 <= v19 )
    v19 = v34;
  v21 = 0;
  if ( v32[0] == v19 )
    v21 = 1;
  LOBYTE(v35) = v21;
  v22 = 0;
  if ( v32[1] == v19 )
    v22 = 1;
  BYTE1(v35) = v22;
  v23 = 0;
  if ( v33 == v19 )
    v23 = 1;
  BYTE2(v35) = v23;
  if ( v34 == v19 )
    v20 = 1;
  BYTE3(v35) = v20;
  return v35;
}


int __fastcall LiquidBlockDynamic::_isWaterBlocking(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3)
{
  int v3; // r0@1

  v3 = BlockSource::getBlock(a2, a3);
  return (*(int (**)(void))(*(_DWORD *)v3 + 72))();
}


void __fastcall LiquidBlockDynamic::~LiquidBlockDynamic(LiquidBlockDynamic *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall LiquidBlockDynamic::~LiquidBlockDynamic(LiquidBlockDynamic *this)
{
  LiquidBlockDynamic::~LiquidBlockDynamic(this);
}


signed int __fastcall LiquidBlockDynamic::_tick(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r4@1
  LiquidBlockDynamic *v7; // r10@1
  int v8; // r0@1
  int v9; // r1@1
  int v10; // r2@1
  Random *v11; // r7@1
  signed int v12; // r11@1
  int v13; // r5@1
  Dimension *v14; // r0@2
  signed int v15; // r9@2
  signed int v16; // r0@7
  int v17; // r1@12
  int v18; // r2@12
  signed int v19; // r5@12
  signed int v20; // r0@12
  signed int v21; // r9@12
  signed int v22; // r8@12
  int v23; // r1@19
  int v24; // r2@19
  signed int v25; // r0@19
  signed int v26; // r7@22
  int v27; // r2@30
  signed int v28; // r0@30
  signed int v29; // r5@35
  int v30; // r2@41
  signed int v31; // r0@41
  BlockSource *v32; // r3@41
  signed int v33; // r4@46
  int v34; // r1@52
  int v35; // r2@52
  BlockSource *v36; // r5@52
  signed int v37; // r0@52
  int v38; // r7@52
  int v39; // r1@57
  int v40; // r2@57
  signed int v41; // r0@57
  Material *v42; // r0@61
  signed int v43; // r8@66
  bool v44; // zf@71
  int v45; // r0@71
  int v46; // r0@75
  char v47; // r0@83
  BlockState *v48; // r0@86
  int v49; // r5@86
  char v50; // r11@86
  LevelChunk **v51; // r0@86
  int *v52; // r7@90
  int v53; // r0@92
  int v54; // r0@95
  int v55; // r0@96
  int v56; // r7@96
  unsigned int v57; // r9@98
  int v58; // r1@100
  int v59; // r2@100
  int v60; // r1@102
  int v61; // r2@102
  int v62; // r2@104
  int v63; // r2@106
  int v64; // r3@106
  int v65; // r0@106
  const BlockPos *v66; // r2@106
  LiquidBlockDynamic *v67; // r0@106
  BlockSource *v68; // r1@106
  int *v70; // r0@110
  Random *v71; // [sp+Ch] [bp-C4h]@20
  int v72; // [sp+10h] [bp-C0h]@12
  unsigned int v73; // [sp+10h] [bp-C0h]@85
  __int64 v74; // [sp+14h] [bp-BCh]@106
  int v75; // [sp+1Ch] [bp-B4h]@106
  __int64 v76; // [sp+20h] [bp-B0h]@104
  int v77; // [sp+28h] [bp-A8h]@104
  int v78; // [sp+2Ch] [bp-A4h]@102
  int v79; // [sp+30h] [bp-A0h]@102
  int v80; // [sp+34h] [bp-9Ch]@102
  int v81; // [sp+38h] [bp-98h]@100
  int v82; // [sp+3Ch] [bp-94h]@100
  int v83; // [sp+40h] [bp-90h]@100
  char v84; // [sp+44h] [bp-8Ch]@111
  char v85; // [sp+45h] [bp-8Bh]@111
  char v86; // [sp+48h] [bp-88h]@86
  char v87; // [sp+4Ch] [bp-84h]@86
  __int16 v88; // [sp+50h] [bp-80h]@87
  int v89; // [sp+54h] [bp-7Ch]@57
  int v90; // [sp+58h] [bp-78h]@57
  int v91; // [sp+5Ch] [bp-74h]@57
  int v92; // [sp+60h] [bp-70h]@52
  int v93; // [sp+64h] [bp-6Ch]@52
  int v94; // [sp+68h] [bp-68h]@52
  __int64 v95; // [sp+6Ch] [bp-64h]@41
  int v96; // [sp+74h] [bp-5Ch]@41
  __int64 v97; // [sp+78h] [bp-58h]@30
  int v98; // [sp+80h] [bp-50h]@30
  int v99; // [sp+84h] [bp-4Ch]@19
  int v100; // [sp+88h] [bp-48h]@19
  int v101; // [sp+8Ch] [bp-44h]@19
  int v102; // [sp+90h] [bp-40h]@12
  int v103; // [sp+94h] [bp-3Ch]@12
  int v104; // [sp+98h] [bp-38h]@12
  int v105; // [sp+9Ch] [bp-34h]@1
  int v106; // [sp+A0h] [bp-30h]@1
  int v107; // [sp+A4h] [bp-2Ch]@1
  char v108; // [sp+A8h] [bp-28h]@83

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 2);
  v11 = a4;
  v105 = v8;
  v106 = v9 - 1;
  v107 = v10;
  v12 = LiquidBlock::getDepth(v7, v6, v5);
  v13 = a5;
  if ( Material::isType(*((int **)v7 + 14), 6) == 1 )
  {
    v14 = (Dimension *)BlockSource::getDimensionConst(v6);
    v15 = 2;
    if ( Dimension::isUltraWarm(v14) )
      v15 = 1;
  }
  else
    v15 = 1;
  if ( a5 )
    v16 = 1;
    if ( Material::isType(*((int **)v7 + 14), 6) == 1 )
      LiquidBlock::trySpreadFire(v7, v6, v5, v11);
    v16 = LiquidBlock::getTickDelay(v7, v6);
  if ( v12 >= 1 )
    v72 = v16;
    v17 = *((_DWORD *)v5 + 1);
    v18 = *((_DWORD *)v5 + 2);
    v19 = v15;
    v102 = *(_DWORD *)v5 - 1;
    v103 = v17;
    v104 = v18;
    v20 = LiquidBlock::getDepth(v7, v6, (const BlockPos *)&v102);
    v21 = v20;
    v22 = 0;
    if ( v20 < 0 )
    {
      v21 = -100;
    }
    else
      if ( !v20 )
        v22 = 1;
      if ( v20 > 7 )
        v21 = 0;
    v23 = *((_DWORD *)v5 + 1);
    v24 = *((_DWORD *)v5 + 2);
    v99 = *(_DWORD *)v5 + 1;
    v100 = v23;
    v101 = v24;
    v25 = LiquidBlock::getDepth(v7, v6, (const BlockPos *)&v99);
    if ( v25 < 0 )
      v71 = v11;
      v26 = v21;
      if ( !v25 )
        ++v22;
      if ( v25 > 7 )
        v25 = 0;
      if ( v25 < v21 )
        v26 = v25;
      if ( v21 < 0 )
    v27 = *((_DWORD *)v5 + 2);
    v97 = *(_QWORD *)v5;
    v98 = v27 + 1;
    v28 = LiquidBlock::getDepth(v7, v6, (const BlockPos *)&v97);
    v15 = v19;
    if ( v28 < 0 )
      v29 = v26;
      if ( !v28 )
      if ( v28 > 7 )
        v28 = 0;
      if ( v28 < v26 )
        v29 = v28;
      if ( v26 < 0 )
    v30 = *((_DWORD *)v5 + 2);
    v95 = *(_QWORD *)v5;
    v96 = v30 - 1;
    v31 = LiquidBlock::getDepth(v7, v6, (const BlockPos *)&v95);
    v32 = v6;
    if ( v31 < 0 )
      v33 = v29;
      if ( !v31 )
      if ( v31 > 7 )
        v31 = 0;
      if ( v31 < v29 )
        v33 = v31;
      if ( v29 < 0 )
    v34 = *((_DWORD *)v5 + 1);
    v35 = *((_DWORD *)v5 + 2);
    v36 = v32;
    v92 = *(_DWORD *)v5;
    v93 = v34 + 1;
    v94 = v35;
    v37 = LiquidBlock::getDepth(v7, v32, (const BlockPos *)&v92);
    v38 = v33 + v15;
    if ( v33 + v15 > 7 )
      v38 = -1;
    if ( v33 < 0 )
    if ( v37 >= 0 )
      v39 = *((_DWORD *)v5 + 1);
      v40 = *((_DWORD *)v5 + 2);
      v89 = *(_DWORD *)v5;
      v90 = v39 + 1;
      v91 = v40;
      v41 = LiquidBlock::getDepth(v7, v36, (const BlockPos *)&v89);
      v38 = v41;
      if ( v41 <= 7 )
        v38 = v41 + 8;
    if ( v22 < 2 || Material::isType(*((int **)v7 + 14), 5) != 1 )
      v6 = v36;
      v42 = (Material *)BlockSource::getMaterial(v36, (const BlockPos *)&v105);
      if ( Material::isSolid(v42) )
      {
        v38 = 0;
      }
      else
        v46 = BlockSource::getMaterial(v36, (const BlockPos *)&v105);
        if ( Material::operator==(v46, *((_DWORD *)v7 + 14)) == 1 && !BlockSource::getData(v36, (const BlockPos *)&v105) )
          v38 = 0;
    v13 = a5;
    if ( a5 == 1 )
      if ( v38 != v12 )
        return 0;
      if ( Material::isType(*((int **)v7 + 14), 6) == 1 )
        if ( v38 <= v12 )
        {
          v45 = v72;
        }
        else if ( v12 > 7 )
        else if ( v38 > 7 )
        else
          v44 = (Random::_genRandInt32(v71) & 3) == 0;
          if ( !v44 )
            v45 = 4 * v72;
        v45 = v72;
        v73 = v45;
        if ( v38 <= -1 )
          v43 = 0;
          v88 = FullBlock::AIR;
          BlockSource::setBlockAndData((int)v6, v5, (int)&v88, 3, 0);
          v12 = v38;
          v48 = (BlockState *)Block::getBlockState((int)v7, 21);
          v49 = *(_QWORD *)v48 >> 32;
          v50 = *(_QWORD *)v48;
          BlockState::getMask(v48);
          v87 = *((_BYTE *)v7 + 4);
          BlockSource::setBlockAndData((int)v6, v5, &v87, v38 << (v50 + 1 - v49), 3, 0);
          BlockSource::updateNeighborsAt(v6, v5);
          v51 = (LevelChunk **)BlockSource::getTickQueue(v6, v5);
          v86 = *((_BYTE *)v7 + 4);
          BlockTickingQueue::add(v51, v6, (int)v5, &v86, v73, 0);
        goto LABEL_88;
  v108 = *((_BYTE *)v7 + 4) + 1;
  v47 = BlockSource::getData(v6, v5);
  BlockSource::setBlockAndData((int)v6, v5, &v108, v47, 2, 0);
  v43 = 1;
  if ( v13 )
    return v43;
LABEL_88:
  if ( v106 >= 0 && BlockSource::hasBlock(v6, (const BlockPos *)&v105) == 1 )
    v52 = (int *)BlockSource::getMaterial(v6, (const BlockPos *)&v105);
    if ( !Material::operator==((int)v52, *((_DWORD *)v7 + 14)) && !Material::isType(v52, 6) )
      v53 = BlockSource::getBlock(v6, (const BlockPos *)&v105);
      if ( !(*(int (**)(void))(*(_DWORD *)v53 + 72))() )
        if ( Material::isType(*((int **)v7 + 14), 6) == 1 )
          v70 = (int *)BlockSource::getMaterial(v6, (const BlockPos *)&v105);
          if ( Material::isType(v70, 5) == 1 )
          {
            v84 = *(_BYTE *)(Block::mStone + 4);
            v85 = 0;
            BlockSource::setBlockAndData((int)v6, (BlockPos *)&v105, (int)&v84, 3, 0);
            LiquidBlock::emitFizzParticle(v7, v6, (const BlockPos *)&v105);
            return v43;
          }
        if ( v12 < 8 )
          v64 = v12 + 8;
          v66 = (const BlockPos *)&v105;
          v67 = v7;
          v68 = v6;
          v64 = v12;
        goto LABEL_107;
  if ( v12 >= 0 )
    if ( !v12
      || (v54 = BlockSource::getBlock(v6, (const BlockPos *)&v105), (*(int (**)(void))(*(_DWORD *)v54 + 72))() == 1) )
      v55 = LiquidBlockDynamic::_getSpread(v7, v6, v5);
      v56 = v12 + v15;
      if ( v12 > 7 )
        v56 = 1;
      v57 = v55;
      if ( v56 <= 7 )
        if ( (_BYTE)v55 )
          v58 = *((_DWORD *)v5 + 1);
          v59 = *((_DWORD *)v5 + 2);
          v81 = *(_DWORD *)v5 - 1;
          v82 = v58;
          v83 = v59;
          LiquidBlockDynamic::_trySpreadTo(v7, v6, (const BlockPos *)&v81, v56);
        if ( v57 & 0xFF00 )
          v60 = *((_DWORD *)v5 + 1);
          v61 = *((_DWORD *)v5 + 2);
          v78 = *(_DWORD *)v5 + 1;
          v79 = v60;
          v80 = v61;
          LiquidBlockDynamic::_trySpreadTo(v7, v6, (const BlockPos *)&v78, v56);
        if ( v57 & 0xFF0000 )
          v62 = *((_DWORD *)v5 + 2);
          v76 = *(_QWORD *)v5;
          v77 = v62 - 1;
          LiquidBlockDynamic::_trySpreadTo(v7, v6, (const BlockPos *)&v76, v56);
        if ( v57 >= 0x1000000 )
          v63 = *((_DWORD *)v5 + 2);
          v64 = v56;
          v74 = *(_QWORD *)v5;
          v65 = v63 + 1;
          v66 = (const BlockPos *)&v74;
          v75 = v65;
LABEL_107:
          LiquidBlockDynamic::_trySpreadTo(v67, v68, v66, v64);
          return v43;
  return v43;
}


int __fastcall LiquidBlockDynamic::_setStatic(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3)
{
  BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  char v5; // r0@1
  char v7; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v7 = *((_BYTE *)this + 4) + 1;
  v5 = BlockSource::getData(a2, a3);
  return BlockSource::setBlockAndData((int)v4, v3, &v7, v5, 2, 0);
}


int __fastcall LiquidBlockDynamic::_canSpreadTo(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  LiquidBlockDynamic *v4; // r6@1
  BlockSource *v5; // r5@1
  int *v6; // r7@3
  int result; // r0@5
  int v8; // r0@6

  v3 = a3;
  v4 = this;
  v5 = a2;
  if ( *((_DWORD *)a3 + 1) < 0
    || BlockSource::hasBlock(a2, a3) != 1
    || (v6 = (int *)BlockSource::getMaterial(v5, v3), Material::operator==((int)v6, *((_DWORD *)v4 + 14)))
    || Material::isType(v6, 6) )
  {
    result = 0;
  }
  else
    v8 = BlockSource::getBlock(v5, v3);
    result = (*(int (**)(void))(*(_DWORD *)v8 + 72))() ^ 1;
  return result;
}


int __fastcall LiquidBlockDynamic::_getSlopeDistance(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  int v5; // r11@1
  LiquidBlockDynamic *v6; // r8@1
  const BlockPos *v7; // r5@1
  int v8; // r10@1
  signed int v9; // r7@1
  bool v10; // zf@2
  bool v11; // zf@5
  bool v12; // zf@8
  bool v13; // zf@11
  int v14; // r2@14
  int v15; // r0@14
  int v16; // r0@22
  int v17; // r0@23
  int v18; // ST08_4@24
  unsigned __int64 *v19; // r11@24
  unsigned int v20; // r0@24
  unsigned __int64 v21; // r1@24
  int v22; // r3@24
  int v23; // r0@25
  signed int v24; // r0@26
  int v25; // r0@29
  int v27; // [sp+Ch] [bp-44h]@1
  BlockSource *v28; // [sp+10h] [bp-40h]@1
  int v29; // [sp+14h] [bp-3Ch]@25
  int v30; // [sp+18h] [bp-38h]@25
  int v31; // [sp+1Ch] [bp-34h]@25
  int v32; // [sp+20h] [bp-30h]@14
  int v33; // [sp+24h] [bp-2Ch]@14
  int v34; // [sp+28h] [bp-28h]@14

  v5 = a4;
  v6 = this;
  v7 = a3;
  v8 = 0;
  v9 = 1000;
  v28 = a2;
  v27 = a4 + 1;
  while ( 1 )
  {
    v10 = a5 == 1;
    if ( a5 == 1 )
      v10 = v8 == 0;
    if ( v10 )
      goto LABEL_31;
    v11 = a5 == 0;
    if ( !a5 )
      v11 = v8 == 1;
    if ( v11 )
    v12 = a5 == 3;
    if ( a5 == 3 )
      v12 = v8 == 2;
    if ( v12 )
    v13 = a5 == 2;
    if ( a5 == 2 )
      v13 = v8 == 3;
    if ( v13 )
    v14 = *(_DWORD *)v7;
    v32 = *(_DWORD *)v7;
    v33 = *((_DWORD *)v7 + 1);
    v15 = *((_DWORD *)v7 + 2);
    v34 = *((_DWORD *)v7 + 2);
    if ( !v8 )
      v32 = --v14;
    if ( v8 == 1 )
      v32 = v14 + 1;
    if ( v8 == 2 )
      v34 = --v15;
    if ( v8 == 3 )
      v34 = v15 + 1;
    v16 = BlockSource::getBlock(v28, (const BlockPos *)&v32);
    if ( (*(int (**)(void))(*(_DWORD *)v16 + 72))() )
    v17 = BlockSource::getMaterial(v28, (const BlockPos *)&v32);
    if ( Material::operator==(v17, *((_DWORD *)v6 + 14)) == 1 )
    {
      v18 = v5;
      v19 = (unsigned __int64 *)Block::getBlockState((int)v6, 21);
      v20 = BlockSource::getData(v28, (const BlockPos *)&v32);
      v21 = *v19;
      v22 = 1 - (*v19 >> 32);
      v5 = v18;
      if ( !((v20 >> (v21 + v22)) & (0xFu >> (4 - BYTE4(v21)))) )
        goto LABEL_31;
    }
    v29 = v32;
    v30 = v33 - 1;
    v31 = v34;
    v23 = BlockSource::getBlock(v28, (const BlockPos *)&v29);
    if ( (*(int (**)(void))(*(_DWORD *)v23 + 72))() != 1 )
      return v5;
    v10 = Material::isType(*((int **)v6 + 14), 6) == 0;
    v24 = 4;
    if ( !v10 )
      v24 = 2;
    if ( v24 > v5 )
      v25 = LiquidBlockDynamic::_getSlopeDistance(v6, v28, (const BlockPos *)&v32, v27, v8);
      if ( v25 < v9 )
        v9 = v25;
LABEL_31:
    if ( ++v8 >= 4 )
      return v9;
  }
}


int __fastcall LiquidBlockDynamic::_getHighest(LiquidBlockDynamic *this, BlockSource *a2, const BlockPos *a3, int a4, int *a5)
{
  int v5; // r4@1
  signed int v6; // r0@1
  int v7; // r1@4
  int result; // r0@10

  v5 = a4;
  v6 = LiquidBlock::getDepth(this, a2, a3);
  if ( v6 < 0 )
  {
    result = v5;
  }
  else
    if ( !v6 )
      ++*a5;
    v7 = v5;
    if ( v6 > 7 )
      v6 = 0;
    if ( v6 < v5 )
      v7 = v6;
    if ( v5 < 0 )
    result = v7;
  return result;
}
