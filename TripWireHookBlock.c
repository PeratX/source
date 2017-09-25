

int __fastcall TripWireHookBlock::mayPlace(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int result; // r0@2

  if ( (unsigned __int8)a4 >= 2u )
    result = ButtonBlock::canAttachTo(
               a2,
               a3,
               (const BlockPos *)Facing::OPPOSITE_FACING[a4],
               Facing::OPPOSITE_FACING[a4]);
  else
    result = 0;
  return result;
}


int __fastcall TripWireHookBlock::calculateState(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5, bool a6, int a7, int a8)
{
  int v8; // r11@1
  TripWireHookBlock *v9; // r4@1
  unsigned __int64 *v10; // r0@1
  unsigned int v11; // r6@1
  BlockState *v12; // r0@1
  int v13; // r5@1
  _BOOL4 v14; // r0@1
  int v15; // r10@1
  signed int v16; // r7@1
  BlockState *v17; // r0@1
  __int64 v18; // r8@1
  int v19; // r11@1
  const Block **v20; // r4@1
  __int64 v21; // r0@2
  int v22; // r2@2
  Block *v23; // r6@2
  signed int v24; // r0@3
  bool v25; // zf@3
  unsigned int v26; // r6@7
  BlockState *v27; // r0@9
  BlockState *v28; // r0@9
  _BOOL4 v29; // r0@9
  int v30; // r6@9
  LevelChunk **v31; // r0@14
  int v32; // r10@18
  unsigned int v33; // r4@18
  unsigned int v34; // r6@19
  unsigned __int64 *v35; // r0@19
  BlockState *v36; // r0@21
  __int64 v37; // r5@21
  BlockState *v38; // r0@21
  __int64 v39; // kr00_8@21
  unsigned int v40; // r9@21
  int v41; // r8@21
  signed int v42; // r0@21
  int v43; // r4@23
  int v44; // r5@23
  BlockState *v45; // r0@23
  int v46; // r1@23
  int v47; // r8@23
  char v48; // r6@23
  int v49; // r11@23
  int v50; // r5@23
  unsigned int v51; // r0@23
  char v52; // r1@23
  int v53; // r6@23
  int v54; // r0@23
  const BlockPos *v55; // r4@23
  int v56; // r9@23
  int v57; // r1@24
  int v58; // r2@24
  BlockState *v59; // r0@24
  char v60; // r6@24
  int v61; // r5@24
  char v62; // r0@24
  Level *v63; // r0@24
  TripWireHookBlock *v64; // r0@24
  int *v65; // r5@25
  Dimension *v66; // r0@27
  CircuitSystem *v67; // r0@27
  int result; // r0@29
  Level *v69; // r0@30
  int *v70; // r5@31
  Dimension *v71; // r0@33
  CircuitSystem *v72; // r0@33
  int v73; // r8@37
  int v74; // r11@37
  int v75; // r5@37
  char *v76; // r6@37
  __int64 v77; // r0@38
  int v78; // r2@38
  int v79; // r9@38
  int v80; // r0@39
  BlockSource *v81; // ST2C_4@39
  int v82; // ST28_4@39
  char v83; // r7@39
  int v84; // r8@42
  int v85; // r11@42
  char *v86; // r5@42
  int v87; // r7@42
  __int64 v88; // r0@43
  int v89; // r2@43
  int v90; // r9@43
  BlockState *v91; // r0@44
  char v92; // r6@44
  int v93; // [sp+Ch] [bp-11Ch]@1
  int v94; // [sp+10h] [bp-118h]@1
  int v95; // [sp+14h] [bp-114h]@1
  unsigned int v96; // [sp+18h] [bp-110h]@1
  unsigned __int8 v97; // [sp+20h] [bp-108h]@7
  TripWireHookBlock *v98; // [sp+24h] [bp-104h]@1
  int v99; // [sp+28h] [bp-100h]@7
  __int64 v100; // [sp+28h] [bp-100h]@18
  int v101; // [sp+30h] [bp-F8h]@1
  int v102; // [sp+34h] [bp-F4h]@1
  BlockPos *v103; // [sp+38h] [bp-F0h]@1
  char v104; // [sp+3Ch] [bp-ECh]@39
  char v105; // [sp+3Dh] [bp-EBh]@39
  char v106; // [sp+40h] [bp-E8h]@30
  char v107; // [sp+41h] [bp-E7h]@30
  char v108; // [sp+44h] [bp-E4h]@24
  char v109; // [sp+45h] [bp-E3h]@24
  char v110; // [sp+48h] [bp-E0h]@24
  char v111; // [sp+49h] [bp-DFh]@24
  char v112; // [sp+4Ch] [bp-DCh]@14
  unsigned __int8 v113; // [sp+4Eh] [bp-DAh]@9
  unsigned __int8 v114; // [sp+4Fh] [bp-D9h]@9
  __int64 v115; // [sp+50h] [bp-D8h]@2
  int v116; // [sp+58h] [bp-D0h]@2
  char v117[204]; // [sp+5Ch] [bp-CCh]@1

  v8 = a4;
  HIDWORD(v18) = a2;
  v9 = this;
  v94 = a4;
  v103 = a3;
  v98 = this;
  v10 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v11 = ((unsigned int)a5 >> (1 - (*v10 >> 32) + *v10)) & (0xFu >> (4 - (*v10 >> 32)));
  v117[0] = a5;
  v96 = v11;
  v12 = (BlockState *)Block::getBlockState((int)v9, 2);
  v13 = Direction::STEP_Z[v11];
  v102 = Direction::STEP_Z[v11];
  v14 = BlockState::getBool(v12, (const unsigned __int8 *)v117);
  v15 = Direction::STEP_X[v11];
  v95 = v14;
  v101 = Direction::STEP_X[v11];
  v16 = 1;
  v17 = (BlockState *)Block::getBlockState((int)v9, 30);
  v93 = BlockState::getBool(v17, (const unsigned __int8 *)v117);
  LODWORD(v18) = v8 ^ 1;
  v19 = 0;
  v20 = (const Block **)&Block::mTripwireHook;
  while ( 1 )
  {
    HIDWORD(v21) = *((_DWORD *)v103 + 1);
    v22 = *((_DWORD *)v103 + 2);
    LODWORD(v21) = *(_DWORD *)v103 + v15;
    v115 = v21;
    v116 = v13 + v22;
    v23 = (Block *)BlockSource::getBlock((BlockSource *)HIDWORD(v18), (const BlockPos *)&v115);
    if ( Block::isType(v23, *v20) )
      break;
    v24 = Block::isType(v23, (const Block *)Block::mTripwire);
    v25 = a7 == v16;
    if ( a7 != v16 )
      v25 = v24 == 1;
    if ( v25 )
    {
      v26 = a8;
      v99 = v18;
      LODWORD(v18) = HIDWORD(v18);
      v97 = v19;
      if ( a7 != v16 )
        v26 = BlockSource::getData((BlockSource *)HIDWORD(v18), (const BlockPos *)&v115);
      v27 = (BlockState *)Block::getBlockState(Block::mTripwire, 9);
      v114 = v26;
      HIDWORD(v18) = BlockState::getBool(v27, &v114);
      v28 = (BlockState *)Block::getBlockState(Block::mTripwire, 30);
      v113 = v26;
      v29 = BlockState::getBool(v28, &v113);
      *(_DWORD *)&v117[4 * v16] = v26;
      v30 = HIDWORD(v18) ^ 1;
      v25 = HIDWORD(v18) == 1;
      HIDWORD(v18) = v18;
      v19 = (unsigned __int8)v19;
      if ( !v25 )
        v19 = (unsigned __int8)v19 | 1;
      if ( !v29 )
        v19 = v97;
      if ( a7 == v16 )
      {
        v31 = (LevelChunk **)BlockSource::getTickQueue((BlockSource *)v18, v103);
        v112 = *((_BYTE *)v98 + 4);
        BlockTickingQueue::add(v31, (BlockSource *)v18, (int)v103, &v112, 0xAu, 0);
        LODWORD(v18) = v99 & v30;
      }
      else
        LODWORD(v18) = v99;
      v20 = (const Block **)&Block::mTripwireHook;
    }
    else
      LODWORD(v18) = 0;
      *(_DWORD *)&v117[4 * v16] = -1;
    ++v16;
    v13 += v102;
    v15 += v101;
    if ( v16 >= 42 )
      v100 = v18;
      v16 = 0;
      v32 = (int)v98;
      v33 = v96;
      goto LABEL_21;
  }
  v100 = v18;
  v32 = (int)v98;
  v34 = BlockSource::getData((BlockSource *)HIDWORD(v18), (const BlockPos *)&v115);
  v35 = (unsigned __int64 *)Block::getBlockState((int)v98, 12);
  v33 = v96;
  if ( ((0xFu >> (4 - (*v35 >> 32))) & (v34 >> (*v35 + 1 - (*v35 >> 32)))) != Direction::DIRECTION_OPPOSITE[v96] )
    v16 = 0;
LABEL_21:
  v36 = (BlockState *)Block::getBlockState(v32, 12);
  v37 = *(_QWORD *)v36;
  BlockState::getMask(v36);
  v38 = (BlockState *)Block::getBlockState(v32, 30);
  v39 = *(_QWORD *)v38;
  v40 = (BlockState::getMask(v38) ^ 0xFF) & (v33 << (v37 + 1 - BYTE4(v37)));
  v41 = v39 + 1 - HIDWORD(v39);
  v42 = 0;
  if ( v16 > 1 )
    v42 = 1;
  v43 = v42 & v100;
  v44 = v19 & v42 & v100;
  v45 = (BlockState *)Block::getBlockState(v32, 2);
  v46 = v44 << v41;
  v47 = v19 & v43;
  v48 = *(_QWORD *)v45 >> 32;
  v49 = *(_QWORD *)v45;
  v50 = v40 | v46;
  v51 = BlockState::getMask(v45);
  v52 = v49 + 1 - v48;
  v53 = v43;
  v54 = (v51 ^ 0xFF) & v50;
  v55 = (const BlockPos *)HIDWORD(v100);
  v56 = v54 | (v53 << v52);
  if ( v16 >= 1 )
    LODWORD(v100) = v53;
    v57 = *((_DWORD *)v103 + 1);
    v58 = *((_DWORD *)v103 + 2) + v16 * v102;
    LODWORD(v115) = *(_DWORD *)v103 + v16 * v101;
    HIDWORD(v115) = v57;
    v116 = v58;
    BlockSource::getBlockAndData((BlockSource *)&v110, (const BlockPos *)HIDWORD(v100), (int)&v115);
    v111 = v56;
    v59 = (BlockState *)Block::getBlockState(v32, 12);
    v60 = v111;
    v61 = Direction::DIRECTION_OPPOSITE[v96] << (*(_QWORD *)v59 + 1 - (unsigned int)(*(_QWORD *)v59 >> 32));
    v62 = BlockState::getMask(v59);
    v111 = v60 & ~v62 | v61;
    v108 = v110;
    v109 = v60 & ~v62 | v61;
    BlockSource::setBlockAndData(SHIDWORD(v100), (BlockPos *)&v115, (int)&v108, 3, 0);
    v63 = (Level *)BlockSource::getLevel((BlockSource *)HIDWORD(v100));
    v64 = (TripWireHookBlock *)Level::isClientSide(v63);
    if ( !v64 )
      v65 = (int *)&Redstone::SIGNAL_NONE;
      if ( v47 )
        v65 = (int *)&Redstone::SIGNAL_MAX;
      v66 = (Dimension *)BlockSource::getDimension((BlockSource *)HIDWORD(v100));
      v67 = (CircuitSystem *)Dimension::getCircuitSystem(v66);
      v64 = (TripWireHookBlock *)CircuitSystem::setStrength(v67, (const BlockPos *)&v115, *v65);
    v53 = v100;
    v54 = TripWireHookBlock::playSound(v64, (BlockSource *)HIDWORD(v100), (const BlockPos *)&v115, v100, v47, v95, v93);
  TripWireHookBlock::playSound((TripWireHookBlock *)v54, (BlockSource *)HIDWORD(v100), v103, v53, v47, v95, v93);
  result = v94;
  if ( !v94 )
    BlockSource::getBlockAndData((BlockSource *)&v115, (const BlockPos *)HIDWORD(v100), (int)v103);
    BYTE1(v115) = v56;
    v106 = v115;
    v107 = v56;
    BlockSource::setBlockAndData(SHIDWORD(v100), v103, (int)&v106, 3, 0);
    v69 = (Level *)BlockSource::getLevel((BlockSource *)HIDWORD(v100));
    result = Level::isClientSide(v69);
    if ( !result )
      v70 = (int *)&Redstone::SIGNAL_NONE;
        v70 = (int *)&Redstone::SIGNAL_MAX;
      v71 = (Dimension *)BlockSource::getDimension((BlockSource *)HIDWORD(v100));
      v72 = (CircuitSystem *)Dimension::getCircuitSystem(v71);
      result = CircuitSystem::setStrength(v72, v103, *v70);
  if ( v95 != v53 && v16 >= 2 )
    if ( v53 )
      v74 = v102;
      v73 = v101;
      v75 = v16 - 1;
      v76 = &v117[4];
      do
        HIDWORD(v77) = *((_DWORD *)v103 + 1);
        v78 = *((_DWORD *)v103 + 2);
        LODWORD(v77) = *(_DWORD *)v103 + v73;
        v115 = v77;
        v79 = *(_DWORD *)v76;
        v116 = v74 + v78;
        if ( v79 >= 0 )
        {
          v80 = Block::getBlockState(v32, 2);
          v81 = *(BlockSource **)v80;
          v82 = *(_DWORD *)(v80 + 4);
          v83 = BlockState::getMask((BlockState *)v80);
          BlockSource::getBlockAndData((BlockSource *)&v110, v55, (int)&v115);
          v111 = (1 << ((_BYTE)v81 + 1 - v82)) | v79 & ~v83;
          v104 = v110;
          v105 = (1 << ((_BYTE)v81 + 1 - v82)) | v79 & ~v83;
          BlockSource::setBlockAndData((int)v55, (BlockPos *)&v115, (int)&v104, 3, 0);
        }
        --v75;
        v76 += 4;
        v74 += v102;
        result = v101;
        v73 += v101;
      while ( v75 );
      v85 = v102;
      v84 = v101;
      v86 = &v117[4];
      v87 = v16 - 1;
        HIDWORD(v88) = *((_DWORD *)v103 + 1);
        v89 = *((_DWORD *)v103 + 2);
        LODWORD(v88) = *(_DWORD *)v103 + v84;
        v115 = v88;
        v90 = *(_DWORD *)v86;
        v116 = v85 + v89;
        if ( v90 >= 0 )
          v91 = (BlockState *)Block::getBlockState(v32, 2);
          v92 = BlockState::getMask(v91);
          BlockSource::getBlockAndData((BlockSource *)&v110, (const BlockPos *)HIDWORD(v100), (int)&v115);
          v111 = v90 & ~v92;
          v105 = v90 & ~v92;
          BlockSource::setBlockAndData(SHIDWORD(v100), (BlockPos *)&v115, (int)&v104, 3, 0);
        v86 += 4;
        --v87;
        v84 += v101;
        result = v102;
        v85 += v102;
      while ( v87 );
  return result;
}


signed int __fastcall TripWireHookBlock::getResourceCount(TripWireHookBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


int __fastcall TripWireHookBlock::onPlace(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TripWireHookBlock *v5; // r6@1
  int v6; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  (*(void (__fastcall **)(TripWireHookBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
  v6 = BlockSource::getData(v4, v3);
  return TripWireHookBlock::calculateState(v5, v4, v3, 0, v6, 0, -1, 0);
}


int __fastcall TripWireHookBlock::playSound(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5, int a6, int a7)
{
  BlockSource *v7; // r4@1
  int v8; // r6@1
  const BlockPos *v9; // r7@1
  int v10; // r8@1
  int v11; // r1@1
  int v12; // r2@1
  bool v13; // zf@1
  char *v14; // r3@5
  int v15; // r1@5
  Level *v16; // r0@5
  int v17; // r2@5
  bool v18; // zf@6
  int result; // r0@11
  bool v20; // zf@11
  bool v21; // zf@16
  int v22; // [sp+10h] [bp-48h]@1
  signed int v23; // [sp+14h] [bp-44h]@1
  signed int v24; // [sp+18h] [bp-40h]@1
  int v25; // [sp+1Ch] [bp-3Ch]@1
  int v26; // [sp+20h] [bp-38h]@1
  int v27; // [sp+24h] [bp-34h]@1
  int v28; // [sp+28h] [bp-30h]@1
  int v29; // [sp+2Ch] [bp-2Ch]@1
  int v30; // [sp+30h] [bp-28h]@1
  char v31; // [sp+34h] [bp-24h]@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = BlockSource::getLevel(a2);
  v22 = 1056964608;
  v23 = 1036831949;
  v24 = 1056964608;
  BlockPos::BlockPos((int)&v25, (int)&v22);
  v11 = *((_DWORD *)v9 + 1);
  v12 = *((_DWORD *)v9 + 2);
  v28 = *(_DWORD *)v9 + v25;
  v29 = v26 + v11;
  v30 = v27 + v12;
  Vec3::Vec3((int)&v31, (int)&v28);
  v13 = a5 == 1;
  if ( a5 == 1 )
    v13 = a7 == 0;
  if ( v13 )
  {
    v14 = &v31;
    v15 = (int)v7;
    v16 = (Level *)v10;
    v17 = 69;
    return Level::broadcastSoundEvent(v16, v15, v17, (int)v14, -1, 1, 0, 0);
  }
  v18 = a5 == 0;
  if ( !a5 )
    v18 = a7 == 1;
  if ( v18 )
    v17 = 70;
  result = a6;
  v20 = v8 == 1;
  if ( v8 == 1 )
    v20 = a6 == 0;
  if ( v20 )
    v17 = 71;
  v21 = v8 == 0;
  if ( !v8 )
    result = a6 ^ 1;
    v21 = a6 == 1;
  if ( v21 )
    v17 = 72;
  return result;
}


signed int __fastcall TripWireHookBlock::getTickDelay(TripWireHookBlock *this)
{
  return 10;
}


AABB *__fastcall TripWireHookBlock::getVisualShape(TripWireHookBlock *this, int a2, AABB *a3, bool a4)
{
  AABB *v4; // r4@1

  v4 = a3;
  TripWireHookBlock::_getShape(this, a2, a3);
  return v4;
}


int __fastcall TripWireHookBlock::_getShape(TripWireHookBlock *this, int a2, AABB *a3)
{
  unsigned int v3; // r5@1
  AABB *v4; // r4@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r0@1
  int *v7; // r1@4
  int *v8; // r2@4
  int v10; // [sp+0h] [bp-70h]@7
  int v11; // [sp+4h] [bp-6Ch]@7
  int v12; // [sp+8h] [bp-68h]@7
  int v13; // [sp+Ch] [bp-64h]@7
  int v14; // [sp+10h] [bp-60h]@7
  int v15; // [sp+14h] [bp-5Ch]@7
  int v16; // [sp+18h] [bp-58h]@5
  signed int v17; // [sp+1Ch] [bp-54h]@5
  signed int v18; // [sp+20h] [bp-50h]@5
  int v19; // [sp+24h] [bp-4Ch]@5
  int v20; // [sp+28h] [bp-48h]@5
  int v21; // [sp+2Ch] [bp-44h]@5
  int v22; // [sp+30h] [bp-40h]@6
  signed int v23; // [sp+34h] [bp-3Ch]@6
  signed int v24; // [sp+38h] [bp-38h]@6
  int v25; // [sp+3Ch] [bp-34h]@6
  int v26; // [sp+40h] [bp-30h]@6
  int v27; // [sp+44h] [bp-2Ch]@6
  int v28; // [sp+48h] [bp-28h]@4
  int v29; // [sp+4Ch] [bp-24h]@4
  int v30; // [sp+50h] [bp-20h]@4
  int v31; // [sp+54h] [bp-1Ch]@4
  int v32; // [sp+58h] [bp-18h]@4
  int v33; // [sp+5Ch] [bp-14h]@4

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v6 = (0xFu >> (4 - (*v5 >> 32))) & (v3 >> (*v5 + 1 - (*v5 >> 32)));
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v8 = &v22;
      v25 = 1059061760;
      v26 = 1031798784;
      v27 = 1052770304;
      v22 = 1065353216;
      v23 = 1058013184;
      v24 = 1059061760;
      v7 = &v25;
    }
    else if ( v6 == 3 )
      v7 = &v31;
      v31 = 0;
      v32 = 1031798784;
      v33 = 1052770304;
      v8 = &v28;
      v28 = 1052770304;
      v29 = 1058013184;
      v30 = 1059061760;
    else
      v7 = &v13;
      v13 = 1052770304;
      v14 = 1031798784;
      v8 = &v10;
      v15 = 1059061760;
      v10 = 1059061760;
      v11 = 1058013184;
      v12 = 1065353216;
  }
  else
    v19 = 1052770304;
    v8 = &v16;
    v20 = 1031798784;
    v21 = 0;
    v16 = 1059061760;
    v17 = 1058013184;
    v18 = 1052770304;
    v7 = &v19;
  return AABB::set(v4, (const Vec3 *)v7, (const Vec3 *)v8);
}


int __fastcall TripWireHookBlock::tick(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  TripWireHookBlock *v6; // r6@1
  int v7; // r0@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockSource::getData(a2, a3);
  return TripWireHookBlock::calculateState(v6, v5, v4, 0, v7, 0, -1, 0);
}


_DWORD *__fastcall TripWireHookBlock::getAABB(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  TripWireHookBlock *v7; // r6@1
  AABB *v8; // r4@1
  const BlockPos *v9; // r5@1
  int v10; // r0@2
  _DWORD *result; // r0@2
  char v12; // [sp+4h] [bp-1Ch]@2

  v7 = this;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = BlockSource::getData(a2, a3);
    TripWireHookBlock::_getShape(v7, v10, v8);
    Vec3::Vec3((int)&v12, (int)v9);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v12);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


void __fastcall TripWireHookBlock::~TripWireHookBlock(TripWireHookBlock *this)
{
  TripWireHookBlock::~TripWireHookBlock(this);
}


signed int __fastcall TripWireHookBlock::checkCanSurvive(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  BlockSource *v4; // r5@1
  TripWireHookBlock *v5; // r6@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  signed __int8 v8; // r3@1
  signed int v9; // r7@3
  void (__fastcall *v10)(TripWireHookBlock *, BlockSource *, BlockSource *, unsigned int); // r8@11
  unsigned int v11; // r0@11

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 12);
  switch ( (0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32))) )
  {
    case 0u:
      if ( !ButtonBlock::canAttachTo(v4, v3, (const BlockPos *)2, v8) )
        goto LABEL_11;
      v9 = 1;
      break;
    case 2u:
      if ( !ButtonBlock::canAttachTo(v4, v3, (const BlockPos *)3, v8) )
    case 3u:
      if ( !ButtonBlock::canAttachTo(v4, v3, (const BlockPos *)4, v8) )
    case 1u:
      if ( ButtonBlock::canAttachTo(v4, v3, (const BlockPos *)5, v8) )
      {
        v9 = 1;
      }
      else
LABEL_11:
        v10 = *(void (__fastcall **)(TripWireHookBlock *, BlockSource *, BlockSource *, unsigned int))(*(_DWORD *)v5 + 276);
        v11 = BlockSource::getData(v4, v3);
        v9 = 0;
        v10(v5, v4, v3, v11);
    default:
  }
  return v9;
}


int __fastcall TripWireHookBlock::onRemove(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TripWireHookBlock *v5; // r6@1
  unsigned int v6; // r7@1
  BlockState *v7; // r0@1
  BlockState *v8; // r0@2
  unsigned __int8 v10; // [sp+12h] [bp-16h]@1
  unsigned __int8 v11; // [sp+13h] [bp-15h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v10 = v6;
  v7 = (BlockState *)Block::getBlockState((int)v5, 2);
  if ( BlockState::getBool(v7, &v10)
    || (v11 = v6, v8 = (BlockState *)Block::getBlockState((int)v5, 30), BlockState::getBool(v8, &v11) == 1) )
  {
    TripWireHookBlock::calculateState(v5, v4, v3, 1, v6, 0, -1, 0);
  }
  return Block::onRemove(v5, v4, v3);
}


int __fastcall TripWireHookBlock::_getShape(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4)
{
  TripWireHookBlock *v4; // r5@1
  AABB *v5; // r4@1
  int v6; // r1@1

  v4 = this;
  v5 = a4;
  v6 = BlockSource::getData(a2, a3);
  return j_j_j__ZNK17TripWireHookBlock9_getShapeEhR4AABB(v4, v6, v5);
}


signed int __fastcall TripWireHookBlock::shouldConnectToRedstone(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


AABB *__fastcall TripWireHookBlock::getVisualShape(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  TripWireHookBlock *v5; // r5@1
  AABB *v6; // r4@1
  int v7; // r0@1

  v5 = this;
  v6 = a4;
  v7 = BlockSource::getData(a2, a3);
  TripWireHookBlock::_getShape(v5, v7, v6);
  return v6;
}


int __fastcall TripWireHookBlock::getPlacementDataValue(TripWireHookBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  BlockState *v6; // r0@2
  __int64 v7; // r4@2
  signed int v8; // r1@2
  int v9; // r0@2
  BlockState *v10; // r0@3
  int result; // r0@4
  BlockState *v12; // r0@5
  __int64 v13; // r4@5
  BlockState *v14; // r0@6
  __int64 v15; // r4@6

  switch ( a4 )
  {
    case 2:
      v6 = (BlockState *)Block::getBlockState((int)this, 12);
      v7 = *(_QWORD *)v6;
      BlockState::getMask(v6);
      v8 = 2;
      v9 = v7 + 1 - HIDWORD(v7);
      goto LABEL_7;
    case 3:
      v10 = (BlockState *)Block::getBlockState((int)this, 12);
      BlockState::getMask(v10);
      goto def_18DFD34;
    case 4:
      v12 = (BlockState *)Block::getBlockState((int)this, 12);
      v13 = *(_QWORD *)v12;
      BlockState::getMask(v12);
      v8 = 1;
      v9 = v13 + 1 - HIDWORD(v13);
    case 5:
      v14 = (BlockState *)Block::getBlockState((int)this, 12);
      v15 = *(_QWORD *)v14;
      BlockState::getMask(v14);
      v8 = 3;
      v9 = v15 + 1 - HIDWORD(v15);
LABEL_7:
      result = (unsigned __int8)(v8 << v9);
      break;
    default:
def_18DFD34:
      result = 0;
  }
  return result;
}


int __fastcall TripWireHookBlock::onLoaded(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  TripWireHookBlock *v5; // r6@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  unsigned int v8; // r0@1
  unsigned int v9; // r7@2
  BlockState *v10; // r0@4
  char v11; // r6@4
  char v12; // r0@4
  Level *v13; // r0@4
  int result; // r0@4
  Dimension *v15; // r0@5
  int v16; // r0@5
  unsigned int v17; // r4@5
  char v18; // [sp+4h] [bp-1Ch]@4
  char v19; // [sp+5h] [bp-1Bh]@4
  char v20; // [sp+8h] [bp-18h]@4
  char v21; // [sp+9h] [bp-17h]@4

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 12);
  v8 = (0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32)));
  if ( v8 > 3 )
    LOBYTE(v9) = 6;
  else
    v9 = 0x4030502u >> 8 * v8;
  BlockSource::getBlockAndData((BlockSource *)&v20, v4, (int)v3);
  v10 = (BlockState *)Block::getBlockState((int)v5, 30);
  v11 = v21;
  v12 = BlockState::getMask(v10);
  v21 = v11 & ~v12;
  v18 = v20;
  v19 = v11 & ~v12;
  BlockSource::setBlockAndData((int)v4, v3, (int)&v18, 3, 0);
  v13 = (Level *)BlockSource::getLevel(v4);
  result = Level::isClientSide(v13);
  if ( !result )
  {
    v15 = (Dimension *)BlockSource::getDimension(v4);
    v16 = Dimension::getCircuitSystem(v15);
    result = CircuitSystem::create<ProducerComponent>(v16, v3, (int)v4, (char)v9);
    v17 = result;
    if ( result )
    {
      (*(void (**)(void))(*(_DWORD *)result + 16))();
      result = ProducerComponent::allowAttachments((ProducerComponent *)v17, 1);
      *(_BYTE *)(v17 + 41) = 1;
    }
  }
  return result;
}


int __fastcall TripWireHookBlock::TripWireHookBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(15);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2716904;
  Block::setTicking((Block *)v3, 1);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


int __fastcall TripWireHookBlock::mayPlace(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3)
{
  TripWireHookBlock *v3; // r6@1
  const BlockPos *v4; // r7@1
  BlockSource *v5; // r5@1
  int result; // r0@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 220))()
    || (*(int (__fastcall **)(TripWireHookBlock *, BlockSource *, const BlockPos *, signed int))(*(_DWORD *)v3 + 220))(
         v3,
         v5,
         v4,
         3) == 1
    || (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, signed int))(*(_DWORD *)v3 + 220))(v3, v5, v4, 4) )
  {
    result = 1;
  }
  else
    result = (*(int (__fastcall **)(TripWireHookBlock *, BlockSource *, const BlockPos *, signed int))(*(_DWORD *)v3 + 220))(
               v3,
               v5,
               v4,
               5);
  return result;
}


unsigned int __fastcall TripWireHookBlock::getDirection(TripWireHookBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall TripWireHookBlock::neighborChanged(TripWireHookBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r7@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r8@1
  TripWireHookBlock *v7; // r6@1
  int result; // r0@3
  unsigned int v9; // r5@4
  unsigned __int64 *v10; // r0@4
  int v11; // [sp+0h] [bp-48h]@11
  int v12; // [sp+4h] [bp-44h]@12
  int v13; // [sp+8h] [bp-40h]@13
  int v14; // [sp+Ch] [bp-3Ch]@14
  int v15; // [sp+10h] [bp-38h]@15
  int v16; // [sp+14h] [bp-34h]@16
  int v17; // [sp+18h] [bp-30h]@8
  int v18; // [sp+1Ch] [bp-2Ch]@9
  int v19; // [sp+20h] [bp-28h]@10
  int v20; // [sp+24h] [bp-24h]@5
  int v21; // [sp+28h] [bp-20h]@6
  int v22; // [sp+2Ch] [bp-1Ch]@7

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *(_DWORD *)a3 != *(_DWORD *)a4
    || *((_DWORD *)a3 + 1) != *((_DWORD *)a4 + 1)
    || (result = *((_DWORD *)a4 + 2), *((_DWORD *)a3 + 2) != result) )
  {
    v9 = BlockSource::getData(a2, a3);
    v10 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
    result = (0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32)));
    switch ( result )
    {
      case 0:
        BlockPos::neighbor((BlockPos *)&v20, (int)v5, 2);
        result = *(_DWORD *)v4;
        if ( *(_DWORD *)v4 == v20 )
        {
          result = v21;
          if ( *((_DWORD *)v4 + 1) == v21 )
          {
            result = v22;
            goto LABEL_17;
          }
        }
        break;
      case 2:
        BlockPos::neighbor((BlockPos *)&v17, (int)v5, 3);
        if ( *(_DWORD *)v4 == v17 )
          result = v18;
          if ( *((_DWORD *)v4 + 1) == v18 )
            result = v19;
      case 3:
        BlockPos::neighbor((BlockPos *)&v11, (int)v5, 4);
        if ( *(_DWORD *)v4 == v11 )
          result = v12;
          if ( *((_DWORD *)v4 + 1) == v12 )
            result = v13;
      case 1:
        BlockPos::neighbor((BlockPos *)&v14, (int)v5, 5);
        if ( *(_DWORD *)v4 == v14 )
          result = v15;
          if ( *((_DWORD *)v4 + 1) == v15 )
            result = v16;
LABEL_17:
            if ( *((_DWORD *)v4 + 2) == result )
            {
              result = TripWireHookBlock::checkCanSurvive(v7, v6, v5);
              if ( !result )
                result = BlockSource::removeBlock(v6, v5);
            }
      default:
        return result;
    }
  }
  return result;
}


_BOOL4 __fastcall TripWireHookBlock::isPowered(TripWireHookBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 30);
  return BlockState::getBool(v2, &v4);
}


_BOOL4 __fastcall TripWireHookBlock::isAttached(TripWireHookBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 2);
  return BlockState::getBool(v2, &v4);
}


void __fastcall TripWireHookBlock::~TripWireHookBlock(TripWireHookBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
