

int __fastcall DoorBlock::neighborChanged(DoorBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  DoorBlock *v6; // r6@1
  unsigned int v7; // r7@1
  BlockState *v8; // r0@1
  _BOOL4 v9; // r0@1
  __int64 v10; // kr00_8@1
  int v11; // r0@2
  int result; // r0@2
  int v13; // r8@3
  int v14; // r0@4
  int v15; // r8@5
  int v16; // r1@6
  int v17; // r2@6
  int v18; // r1@7
  int v19; // r2@7
  int v20; // r1@8
  int v21; // r2@8
  char v22; // [sp+8h] [bp-88h]@3
  __int16 v23; // [sp+14h] [bp-7Ch]@3
  unsigned __int8 v24; // [sp+18h] [bp-78h]@2
  __int64 v25; // [sp+1Ch] [bp-74h]@2
  int v26; // [sp+24h] [bp-6Ch]@2
  int v27; // [sp+28h] [bp-68h]@8
  int v28; // [sp+2Ch] [bp-64h]@8
  int v29; // [sp+30h] [bp-60h]@8
  unsigned __int8 v30; // [sp+34h] [bp-5Ch]@7
  int v31; // [sp+38h] [bp-58h]@7
  int v32; // [sp+3Ch] [bp-54h]@7
  int v33; // [sp+40h] [bp-50h]@7
  int v34; // [sp+44h] [bp-4Ch]@6
  int v35; // [sp+48h] [bp-48h]@6
  int v36; // [sp+4Ch] [bp-44h]@6
  char v37; // [sp+50h] [bp-40h]@5
  unsigned __int8 v38; // [sp+5Ch] [bp-34h]@4
  __int64 v39; // [sp+60h] [bp-30h]@4
  int v40; // [sp+68h] [bp-28h]@4
  unsigned __int8 v41; // [sp+6Fh] [bp-21h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockSource::getData(a2, a3);
  v41 = v7;
  v8 = (BlockState *)Block::getBlockState((int)v6, 11);
  v9 = BlockState::getBool(v8, &v41);
  v10 = *(_QWORD *)v4;
  if ( v9 )
  {
    v11 = *((_DWORD *)v4 + 2);
    v25 = v10 - 0x100000000LL;
    v26 = v11;
    BlockSource::getBlockID((BlockSource *)&v24, v5, (int)&v25);
    result = *((_BYTE *)v6 + 4);
    if ( v24 != result )
    {
      v23 = FullBlock::AIR;
      BlockSource::setBlockAndData((int)v5, v4, (int)&v23, 3, 0);
      v13 = BlockSource::getLevel(v5);
      Vec3::Vec3((int)&v22, (int)v4);
      result = Level::broadcastDimensionEvent(v13, v5, 2001, (int)&v22, *((_BYTE *)v6 + 4) | (v7 << 8));
    }
  }
  else
    v14 = *((_DWORD *)v4 + 2);
    v39 = v10 + 0x100000000LL;
    v40 = v14;
    BlockSource::getBlockID((BlockSource *)&v38, v5, (int)&v39);
    if ( v38 != *((_BYTE *)v6 + 4) )
      BlockSource::removeBlock(v5, v4);
      v15 = BlockSource::getLevel(v5);
      Vec3::Vec3((int)&v37, (int)v4);
      Level::broadcastDimensionEvent(v15, v5, 2001, (int)&v37, *((_BYTE *)v6 + 4) | (v7 << 8));
    v16 = *((_DWORD *)v4 + 1);
    v17 = *((_DWORD *)v4 + 2);
    v34 = *(_DWORD *)v4;
    v35 = v16 - 1;
    v36 = v17;
    result = BlockSource::canProvideSupport(v5, (int)&v34);
    if ( !result )
      (*(void (__fastcall **)(DoorBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 276))(
        v6,
        v5,
        v4,
        v7);
      v18 = *((_DWORD *)v4 + 1);
      v19 = *((_DWORD *)v4 + 2);
      v31 = *(_DWORD *)v4;
      v32 = v18 + 1;
      v33 = v19;
      BlockSource::getBlockID((BlockSource *)&v30, v5, (int)&v31);
      result = *((_BYTE *)v6 + 4);
      if ( v30 == result )
      {
        v20 = *((_DWORD *)v4 + 1);
        v21 = *((_DWORD *)v4 + 2);
        v27 = *(_DWORD *)v4;
        v28 = v20 + 1;
        v29 = v21;
        result = BlockSource::removeBlock(v5, (const BlockPos *)&v27);
      }
  return result;
}


signed int __fastcall DoorBlock::isInteractiveBlock(DoorBlock *this)
{
  return 1;
}


_BOOL4 __fastcall DoorBlock::isToggled(DoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  DoorBlock *v5; // r4@1
  BlockState *v6; // r0@1
  __int64 v7; // kr00_8@1
  __int64 v8; // r0@1
  BlockState *v9; // r0@4
  unsigned __int8 v11; // [sp+7h] [bp-29h]@1
  int v12; // [sp+8h] [bp-28h]@3
  __int64 v13; // [sp+Ch] [bp-24h]@3
  int v14; // [sp+14h] [bp-1Ch]@2
  __int64 v15; // [sp+18h] [bp-18h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v11 = BlockSource::getData(a2, a3);
  v6 = (BlockState *)Block::getBlockState((int)v5, 11);
  LODWORD(v8) = BlockState::getBool(v6, &v11);
  v7 = *(_QWORD *)v3;
  HIDWORD(v8) = *((_DWORD *)v3 + 2);
  if ( (_DWORD)v8 == 1 )
  {
    v14 = v7;
    LODWORD(v8) = HIDWORD(v7) - 1;
    v15 = v8;
    v11 = BlockSource::getData(v4, (const BlockPos *)&v14);
  }
  else
    v12 = v7;
    LODWORD(v8) = HIDWORD(v7) + 1;
    v13 = v8;
    BlockSource::getData(v4, (const BlockPos *)&v12);
  v9 = (BlockState *)Block::getBlockState((int)v5, 26);
  return BlockState::getBool(v9, &v11);
}


unsigned int __fastcall DoorBlock::getDoorData(DoorBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r4@1
  DoorBlock *v7; // r7@1
  unsigned __int8 *v8; // r5@1
  BlockState *v9; // r0@1
  int v10; // r1@2
  int v11; // r2@2
  unsigned int result; // r0@2
  int v13; // r1@3
  int v14; // r2@3
  int v15; // [sp+4h] [bp-2Ch]@3
  int v16; // [sp+8h] [bp-28h]@3
  int v17; // [sp+Ch] [bp-24h]@3
  int v18; // [sp+10h] [bp-20h]@2
  int v19; // [sp+14h] [bp-1Ch]@2
  int v20; // [sp+18h] [bp-18h]@2

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  *a4 = BlockSource::getData(a2, a3);
  v9 = (BlockState *)Block::getBlockState((int)v7, 11);
  if ( BlockState::getBool(v9, v8) == 1 )
  {
    *a5 = *v8;
    v10 = *((_DWORD *)v5 + 1);
    v11 = *((_DWORD *)v5 + 2);
    v18 = *(_DWORD *)v5;
    v19 = v10 - 1;
    v20 = v11;
    result = BlockSource::getData(v6, (const BlockPos *)&v18);
    *v8 = result;
  }
  else
    v13 = *((_DWORD *)v5 + 1);
    v14 = *((_DWORD *)v5 + 2);
    v15 = *(_DWORD *)v5;
    v16 = v13 + 1;
    v17 = v14;
    result = BlockSource::getData(v6, (const BlockPos *)&v15);
    *a5 = result;
  return result;
}


signed int __fastcall DoorBlock::getBlockedDirection(DoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r7@1
  DoorBlock *v5; // r4@1
  unsigned int v6; // r5@1
  _BOOL4 v7; // r8@1
  _BOOL4 v8; // r0@1
  signed int v9; // r1@1
  signed int result; // r0@6

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = DoorBlock::getDir(this, a2, a3);
  v7 = DoorBlock::isToggled(v5, v4, v3);
  v8 = DoorBlock::hasRightHinge(v5, v4, v3);
  v9 = v8;
  switch ( v6 )
  {
    case 0u:
      if ( v8 )
        v9 = 2;
      if ( !v7 )
        v9 = 3;
      result = v9;
      break;
    case 1u:
      result = 1;
      if ( v9 )
        result = 3;
        result = 0;
    case 2u:
      result = 2;
        result = 1;
    case 3u:
      result = 3;
        result = 2;
    default:
      result = 255;
  }
  return result;
}


int __fastcall DoorBlock::DoorBlock(int a1, const void **a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-30h]@1
  int v15; // [sp+4h] [bp-2Ch]@1
  int v16; // [sp+8h] [bp-28h]@1
  signed int v17; // [sp+Ch] [bp-24h]@1
  int v18; // [sp+10h] [bp-20h]@1
  int v19; // [sp+14h] [bp-1Ch]@1
  int v20; // [sp+18h] [bp-18h]@1
  int v21; // [sp+1Ch] [bp-14h]@1

  v5 = a3;
  v6 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v6 = &loc_2707B04;
  *(_DWORD *)(v6 + 644) = a5;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16 = 1065353216;
  v17 = 1065353216;
  v18 = 1065353216;
  Block::setVisualShape((Block *)v6, (const Vec3 *)&v19, (const Vec3 *)&v16);
  Block::setSolid((Block *)v6, 0);
  Block::setIsInteraction((Block *)v6, 1);
  *(_DWORD *)(v6 + 20) = 8;
  *(_DWORD *)(v6 + 24) = 33555456;
  *(_DWORD *)(v6 + 28) = 0;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 476))(v6, 1);
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v6 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x30+var_30]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v5] = *v12;
  return v6;
}


int __fastcall DoorBlock::canBeSilkTouched(DoorBlock *this)
{
  return 0;
}


signed int __fastcall DoorBlock::getSecondPart(DoorBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  DoorBlock *v4; // r7@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  BlockPos *v7; // r4@1
  void (__fastcall *v8)(DoorBlock *, unsigned int, const BlockPos *, BlockPos *); // r8@1
  unsigned int v9; // r0@1
  signed int result; // r0@1
  unsigned __int8 v11; // [sp+4h] [bp-1Ch]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = *(void (__fastcall **)(DoorBlock *, unsigned int, const BlockPos *, BlockPos *))(*(_DWORD *)this + 256);
  v9 = BlockSource::getData(a2, a3);
  v8(v4, v9, v5, v7);
  BlockSource::getBlockID((BlockSource *)&v11, v6, (int)v7);
  result = 0;
  if ( v11 == *((_BYTE *)v4 + 4) )
    result = 1;
  return result;
}


int __fastcall DoorBlock::onPlace(DoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  DoorBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(DoorBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


signed int __fastcall DoorBlock::isWaterBlocking(DoorBlock *this)
{
  return 1;
}


char *__fastcall DoorBlock::setToggled(DoorBlock *this, BlockSource *a2, const BlockPos *a3, int a4, Mob *a5)
{
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r4@1
  DoorBlock *v7; // r11@1
  int v8; // r9@1
  BlockState *v9; // r0@1
  __int64 v10; // kr00_8@1
  unsigned __int64 v11; // r0@1
  char v12; // r8@2
  _BOOL4 v13; // r0@4
  _BOOL4 v14; // r7@4
  char *result; // r0@4
  BlockState *v16; // r0@5
  _BOOL4 v17; // r0@5
  int v18; // r1@5 OVERLAPPED
  int v19; // r0@6
  int v20; // r2@6 OVERLAPPED
  BlockState *v21; // r0@8
  int v22; // r3@8
  unsigned __int8 v23; // r7@8
  int v24; // r5@8
  int v25; // r8@8
  int v26; // r1@8
  int v27; // r2@8
  int v28; // r0@8
  int v29; // r2@8
  unsigned int v30; // r3@8
  unsigned int v31; // r5@8
  int v32; // r3@8
  int v33; // r5@8
  int v34; // r6@8
  int v35; // r0@8
  int v36; // r3@8
  int v37; // r6@8
  int v38; // r7@8
  int v39; // r5@8
  int v40; // r7@8
  Entity **v41; // r5@8 OVERLAPPED
  Entity **v42; // r6@8 OVERLAPPED
  Entity *v43; // t1@9
  char v44; // [sp+Ch] [bp-FCh]@8
  int v45; // [sp+28h] [bp-E0h]@8
  int v46; // [sp+2Ch] [bp-DCh]@8
  int v47; // [sp+30h] [bp-D8h]@8
  int v48; // [sp+34h] [bp-D4h]@8
  int v49; // [sp+38h] [bp-D0h]@8
  Entity **v50; // [sp+3Ch] [bp-CCh]@8
  int v51; // [sp+40h] [bp-C8h]@8
  int v52; // [sp+48h] [bp-C0h]@3
  unsigned __int64 v53; // [sp+4Ch] [bp-BCh]@3
  int v54; // [sp+54h] [bp-B4h]@8
  int v55; // [sp+58h] [bp-B0h]@8
  int v56; // [sp+5Ch] [bp-ACh]@8
  int v57; // [sp+60h] [bp-A8h]@8
  int v58; // [sp+64h] [bp-A4h]@8
  int v59; // [sp+68h] [bp-A0h]@8
  int v60; // [sp+6Ch] [bp-9Ch]@8
  unsigned __int8 v61[4]; // [sp+70h] [bp-98h]@2
  unsigned __int64 v62; // [sp+74h] [bp-94h]@2
  int v63; // [sp+8Ch] [bp-7Ch]@8
  signed int v64; // [sp+90h] [bp-78h]@8
  int v65; // [sp+94h] [bp-74h]@8
  int v66; // [sp+98h] [bp-70h]@8
  int v67; // [sp+9Ch] [bp-6Ch]@8
  int v68; // [sp+A0h] [bp-68h]@8
  int v69; // [sp+A4h] [bp-64h]@8
  int v70; // [sp+A8h] [bp-60h]@8
  int v71; // [sp+ACh] [bp-5Ch]@8
  char v72; // [sp+B0h] [bp-58h]@8
  char v73; // [sp+BCh] [bp-4Ch]@8
  char v74; // [sp+BDh] [bp-4Bh]@8
  char v75; // [sp+C0h] [bp-48h]@8
  char v76; // [sp+C1h] [bp-47h]@8
  char v77; // [sp+C4h] [bp-44h]@8
  int v78; // [sp+C8h] [bp-40h]@5
  int v79; // [sp+CCh] [bp-3Ch]@5
  int v80; // [sp+D0h] [bp-38h]@5
  int v81; // [sp+D4h] [bp-34h]@5
  int v82; // [sp+D8h] [bp-30h]@5
  int v83; // [sp+DCh] [bp-2Ch]@5
  unsigned __int8 v84; // [sp+E3h] [bp-25h]@1

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v84 = BlockSource::getData(a2, a3);
  v9 = (BlockState *)Block::getBlockState((int)v7, 11);
  LODWORD(v11) = BlockState::getBool(v9, &v84);
  v10 = *(_QWORD *)v5;
  HIDWORD(v11) = *((_DWORD *)v5 + 2);
  if ( (_DWORD)v11 == 1 )
  {
    v12 = v84;
    LODWORD(v11) = HIDWORD(v10) - 1;
    *(_DWORD *)v61 = v10;
    v62 = v11;
    v84 = BlockSource::getData(v6, (const BlockPos *)v61);
  }
  else
    v52 = v10;
    LODWORD(v11) = HIDWORD(v10) + 1;
    v53 = v11;
    v12 = BlockSource::getData(v6, (const BlockPos *)&v52);
  v13 = DoorBlock::isToggled(v7, v6, v5);
  v14 = v13;
  result = (char *)(v13 ^ v8);
  if ( result == (char *)1 )
    v82 = 0;
    v83 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v61[0] = BlockSource::getData(v6, v5);
    v16 = (BlockState *)Block::getBlockState((int)v7, 11);
    v17 = BlockState::getBool(v16, v61);
    v18 = *(_DWORD *)v5;
    if ( v17 == 1 )
    {
      v19 = *(_QWORD *)((char *)v5 + 4) >> 32;
      v20 = *(_QWORD *)((char *)v5 + 4);
      v81 = *(_DWORD *)v5;
      v82 = v20 - 1;
      v83 = v19;
    }
    else
      v82 = *((_DWORD *)v5 + 1);
      v19 = *((_DWORD *)v5 + 2);
      v20 = v82 + 1;
      v83 = *((_DWORD *)v5 + 2);
    *(_QWORD *)&v78 = *(_QWORD *)&v18;
    v80 = v19;
    v21 = (BlockState *)Block::getBlockState((int)v7, 26);
    v22 = !v14;
    v23 = v84;
    v24 = v22 << (*(_QWORD *)v21 + 1 - (unsigned int)(*(_QWORD *)v21 >> 32));
    v84 = v23 & ~(unsigned __int8)BlockState::getMask(v21) | v24;
    v77 = *((_BYTE *)v7 + 4);
    BlockSource::setBlockAndData((int)v6, (BlockPos *)&v81, &v77, v84, 3, (int)a5);
    v75 = *((_BYTE *)v7 + 4);
    v73 = v75;
    v76 = v12;
    v74 = 0;
    BlockSource::fireBlockChanged((int)v6, (int)&v78, (int)&v75, (int)&v73);
    BlockSource::updateNeighborsAtExceptFromFacing(v6, (const BlockPos *)&v78, (const BlockPos *)&v78, 0);
    v25 = BlockSource::getLevel(v6);
    v63 = 1056964608;
    v64 = 1056964608;
    v65 = 1056964608;
    BlockPos::BlockPos((int)&v66, (int)&v63);
    v26 = *((_DWORD *)v5 + 1);
    v27 = *((_DWORD *)v5 + 2);
    v69 = *(_DWORD *)v5 + v66;
    v70 = v67 + v26;
    v71 = v68 + v27;
    Vec3::Vec3((int)&v72, (int)&v69);
    Level::broadcastDimensionEvent(v25, v6, 1003, (int)&v72, 0);
    AABB::AABB((AABB *)v61);
    v58 = 0;
    v59 = 0;
    v60 = 0;
    (*(void (__fastcall **)(DoorBlock *, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v7 + 260))(
      v7,
      v6,
      v5,
      &v58);
    v28 = (*(int (__fastcall **)(DoorBlock *, BlockSource *, const BlockPos *, unsigned __int8 *))(*(_DWORD *)v7 + 32))(
            v7,
            v6,
            v5,
            v61);
    v29 = *(_DWORD *)v28;
    v30 = *(_DWORD *)(v28 + 4);
    v31 = *(_DWORD *)(v28 + 8);
    v28 += 12;
    v52 = v29;
    v53 = __PAIR__(v31, v30);
    v32 = *(_DWORD *)(v28 + 4);
    v33 = *(_DWORD *)(v28 + 8);
    v34 = *(_DWORD *)(v28 + 12);
    v54 = *(_DWORD *)v28;
    v55 = v32;
    v56 = v33;
    v57 = v34;
    v35 = (*(int (__fastcall **)(DoorBlock *, BlockSource *, int *, unsigned __int8 *))(*(_DWORD *)v7 + 32))(
            &v58,
    v36 = *(_DWORD *)v35;
    v37 = *(_DWORD *)(v35 + 4);
    v38 = *(_DWORD *)(v35 + 8);
    v35 += 12;
    v45 = v36;
    v46 = v37;
    v47 = v38;
    v39 = *(_DWORD *)(v35 + 4);
    v42 = *(Entity ***)(v35 + 8);
    v40 = *(_DWORD *)(v35 + 12);
    v48 = *(_DWORD *)v35;
    v49 = v39;
    v50 = v42;
    v51 = v40;
    AABB::merge((AABB *)&v44, (const AABB *)&v52, (int)&v45);
    result = BlockSource::fetchEntities(v6, 0, (const AABB *)&v44);
    for ( *(_QWORD *)&v41 = *(_QWORD *)result; v42 != v41; result = Entity::onOnewayCollision(v43, (const AABB *)&v44) )
      v43 = *v41;
      ++v41;
  return result;
}


signed int __fastcall DoorBlock::checkIsPathable(DoorBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  Entity *v5; // r7@1
  DoorBlock *v6; // r6@1
  signed int v7; // r1@4
  float v9; // r2@5
  signed int v17; // r8@5
  BlockSource *v18; // r7@5
  unsigned int v19; // r4@5
  _BOOL4 v20; // r9@5
  signed int v21; // r0@5
  signed int v22; // r1@12

  v4 = a4;
  v5 = a2;
  v6 = this;
  if ( *(_DWORD *)a3 != *(_DWORD *)a4
    || *((_DWORD *)a3 + 1) != *((_DWORD *)a4 + 1)
    || *((_DWORD *)a3 + 2) != *((_DWORD *)a4 + 2) )
  {
    _R0 = *(_DWORD *)a3 - *(_DWORD *)a4;
    v9 = *((float *)a3 + 2);
    __asm { VMOV            S0, R0 }
    _R0 = LODWORD(v9) - *((_DWORD *)a4 + 2);
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VMOV            R0, S0
      VMOV            R1, S2
    }
    v17 = Direction::getDirection(_R0, _R1, v9);
    v18 = (BlockSource *)Entity::getRegion(v5);
    v19 = DoorBlock::getDir(v6, v18, v4);
    v20 = DoorBlock::isToggled(v6, v18, v4);
    v21 = DoorBlock::hasRightHinge(v6, v18, v4);
    switch ( v19 )
      case 0u:
        if ( v21 )
          v21 = 2;
        if ( !v20 )
          v21 = 3;
        break;
      case 1u:
        v22 = 1;
          v22 = 3;
          v22 = 0;
        goto LABEL_26;
      case 2u:
        v22 = 2;
          v22 = 1;
      case 3u:
        v22 = 3;
          v22 = 2;
LABEL_26:
        v21 = v22;
      default:
        v21 = 255;
    v7 = 0;
    if ( v21 != v17 )
      v7 = 1;
  }
  else
    v7 = 1;
  return v7;
}


_BOOL4 __fastcall DoorBlock::hasRightHinge(DoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  DoorBlock *v3; // r4@1
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r5@1
  BlockState *v6; // r0@1
  __int64 v7; // kr00_8@1
  __int64 v8; // r0@1
  BlockState *v9; // r0@4
  unsigned __int8 v11; // [sp+6h] [bp-2Ah]@1
  unsigned __int8 v12; // [sp+7h] [bp-29h]@1
  int v13; // [sp+8h] [bp-28h]@3
  __int64 v14; // [sp+Ch] [bp-24h]@3
  int v15; // [sp+14h] [bp-1Ch]@2
  __int64 v16; // [sp+18h] [bp-18h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  v11 = 0;
  v12 = BlockSource::getData(a2, a3);
  v6 = (BlockState *)Block::getBlockState((int)v3, 11);
  LODWORD(v8) = BlockState::getBool(v6, &v12);
  v7 = *(_QWORD *)v4;
  HIDWORD(v8) = *((_DWORD *)v4 + 2);
  if ( (_DWORD)v8 == 1 )
  {
    v11 = v12;
    LODWORD(v8) = HIDWORD(v7) - 1;
    v15 = v7;
    v16 = v8;
    v12 = BlockSource::getData(v5, (const BlockPos *)&v15);
  }
  else
    v13 = v7;
    LODWORD(v8) = HIDWORD(v7) + 1;
    v14 = v8;
    v11 = BlockSource::getData(v5, (const BlockPos *)&v13);
  v9 = (BlockState *)Block::getBlockState((int)v3, 10);
  return BlockState::getBool(v9, &v11);
}


void __fastcall DoorBlock::~DoorBlock(DoorBlock *this)
{
  DoorBlock::~DoorBlock(this);
}


int __fastcall DoorBlock::shouldFlipTexture(DoorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r8@1
  const BlockPos *v5; // r7@1
  BlockSource *v6; // r5@1
  DoorBlock *v7; // r4@1
  signed int v8; // r6@1
  _BOOL4 v9; // r9@1
  _BOOL4 v10; // r0@1
  int v11; // r1@5
  signed int v12; // r1@8
  bool v13; // zf@15

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = DoorBlock::getDir(this, a2, a3);
  v9 = DoorBlock::isToggled(v7, v6, v5);
  v10 = DoorBlock::hasRightHinge(v7, v6, v5);
  if ( v9 == 1 )
  {
    if ( v10 == 1 )
      --v8;
    else
      ++v8;
  }
  v11 = v8 % 4;
  if ( v8 % 4 < 0 )
    v11 += 4;
  switch ( v11 )
    case 1:
    case 2:
      v12 = 0;
      if ( (unsigned __int8)(v4 - 3) < 2u )
        v12 = 1;
      break;
    case 0:
      v12 = 1;
      if ( v4 != 3 && v4 != 5 )
        v12 = 0;
    case 3:
      v13 = v4 == 4;
      if ( v4 != 4 )
        v13 = v4 == 2;
      v12 = v13 != 0;
    default:
  return v10 ^ v12 ^ v9;
}


unsigned int __fastcall DoorBlock::getDir(DoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  DoorBlock *v5; // r4@1
  BlockState *v6; // r0@1
  __int64 v7; // kr00_8@1
  __int64 v8; // r0@1
  unsigned __int64 *v9; // r0@4
  unsigned __int8 v11; // [sp+7h] [bp-29h]@1
  int v12; // [sp+8h] [bp-28h]@3
  __int64 v13; // [sp+Ch] [bp-24h]@3
  int v14; // [sp+14h] [bp-1Ch]@2
  __int64 v15; // [sp+18h] [bp-18h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v11 = BlockSource::getData(a2, a3);
  v6 = (BlockState *)Block::getBlockState((int)v5, 11);
  LODWORD(v8) = BlockState::getBool(v6, &v11);
  v7 = *(_QWORD *)v3;
  HIDWORD(v8) = *((_DWORD *)v3 + 2);
  if ( (_DWORD)v8 == 1 )
  {
    v14 = v7;
    LODWORD(v8) = HIDWORD(v7) - 1;
    v15 = v8;
    v11 = BlockSource::getData(v4, (const BlockPos *)&v14);
  }
  else
    v12 = v7;
    LODWORD(v8) = HIDWORD(v7) + 1;
    v13 = v8;
    BlockSource::getData(v4, (const BlockPos *)&v12);
  v9 = (unsigned __int64 *)Block::getBlockState((int)v5, 12);
  return (0xFu >> (4 - (*v9 >> 32))) & (v11 >> (*v9 + 1 - (*v9 >> 32)));
}


int __fastcall DoorBlock::mayPlace(DoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r6@1
  Block *v5; // r5@1
  int v6; // r0@1
  int v7; // r2@2
  int v8; // r1@4
  int v9; // r2@4
  int result; // r0@4
  int v11; // [sp+0h] [bp-28h]@4
  int v12; // [sp+4h] [bp-24h]@4
  int v13; // [sp+8h] [bp-20h]@4
  int v14; // [sp+Ch] [bp-1Ch]@2
  int v15; // [sp+10h] [bp-18h]@2
  int v16; // [sp+14h] [bp-14h]@2

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = *((_DWORD *)a3 + 1);
  if ( v6 >= *((_WORD *)a2 + 12) - 1
    || (v7 = *((_DWORD *)a3 + 2),
        v14 = *(_DWORD *)v4,
        v15 = v6 - 1,
        v16 = v7,
        BlockSource::canProvideSupport(a2, (int)&v14) != 1)
    || Block::mayPlace(v5, v3, v4) != 1 )
  {
    result = 0;
  }
  else
    v8 = *((_DWORD *)v4 + 1);
    v9 = *((_DWORD *)v4 + 2);
    v11 = *(_DWORD *)v4;
    v12 = v8 + 1;
    v13 = v9;
    result = Block::mayPlace(v5, v3, (const BlockPos *)&v11);
  return result;
}


AABB *__fastcall DoorBlock::getVisualShape(DoorBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r4@1
  DoorBlock *v8; // r6@1
  unsigned int v9; // r7@1
  _BOOL4 v10; // r9@1
  _BOOL4 v11; // r0@1
  _BOOL4 v12; // r5@1
  char v13; // r0@8
  signed int v14; // r0@26
  __int64 v15; // r0@28
  __int64 v16; // r2@29
  AABB *result; // r0@32
  signed int v23; // [sp+0h] [bp-28h]@26
  float v24; // [sp+8h] [bp-20h]@28

  _R8 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = DoorBlock::getDir(this, a2, a3);
  v10 = DoorBlock::isToggled(v8, v7, v6);
  v11 = DoorBlock::hasRightHinge(v8, v7, v6);
  v12 = v11;
  switch ( v9 )
  {
    case 0u:
      if ( v11 )
        LOBYTE(v12) = 2;
      if ( !v10 )
        LOBYTE(v12) = 3;
      goto LABEL_23;
    case 1u:
      v13 = 1;
      if ( v12 )
        v13 = 3;
        v13 = 0;
      goto LABEL_22;
    case 2u:
      v13 = 2;
        v13 = 1;
    case 3u:
      v13 = 3;
        v13 = 2;
LABEL_22:
      LOBYTE(v12) = v13;
LABEL_23:
      AABB::set((unsigned int)_R8, 0LL, 1.0, 2.0, 1.0);
      if ( (unsigned __int8)v12 == 2 )
      {
        v23 = 1065353216;
        v24 = 1.0;
        v15 = (unsigned int)_R8;
        v16 = 4562506710152904704LL;
      }
      else
        if ( (unsigned __int8)v12 == 1 )
        {
          v23 = 1065353216;
          v24 = 1.0;
          v15 = __PAIR__(1062291374, (unsigned int)_R8);
        }
        else
          if ( (_BYTE)v12 )
          {
LABEL_27:
            v14 = 1065353216;
            v23 = 1044046152;
          }
          else
            v14 = 1044046152;
            v23 = 1065353216;
          v24 = *(float *)&v14;
          v15 = (unsigned int)_R8;
        v16 = 0LL;
      AABB::set(v15, v16, *(float *)&v23, 1.0, v24);
      __asm { VLDR            S0, [R8,#0x10] }
      _R0 = &Block::SIZE_OFFSET;
      __asm { VLDR            S2, [R0] }
      result = _R8;
      __asm
        VSUB.F32        S0, S0, S2
        VSTR            S0, [R8,#0x10]
      return result;
    default:
      goto LABEL_27;
  }
}


int __fastcall DoorBlock::getDoorPosition(DoorBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4, BlockPos *a5)
{
  const BlockPos *v5; // r4@1
  DoorBlock *v6; // r6@1
  BlockPos *v7; // r5@1
  BlockState *v8; // r0@1
  _BOOL4 v9; // r0@1
  int v10; // r2@1
  int v11; // r0@2
  int v12; // r3@2
  int result; // r0@2
  int v14; // r3@4
  unsigned __int8 v15; // [sp+7h] [bp-11h]@1

  v5 = a3;
  v6 = this;
  v7 = a4;
  v15 = BlockSource::getData(a2, a3);
  v8 = (BlockState *)Block::getBlockState((int)v6, 11);
  v9 = BlockState::getBool(v8, &v15);
  v10 = *(_DWORD *)v5;
  if ( v9 == 1 )
  {
    v12 = *(_QWORD *)((char *)v5 + 4) >> 32;
    v11 = *(_QWORD *)((char *)v5 + 4);
    *(_DWORD *)v7 = v10;
    *((_DWORD *)v7 + 1) = v11 - 1;
    *((_DWORD *)v7 + 2) = v12;
    result = *((_DWORD *)v5 + 1);
  }
  else
    *((_DWORD *)v7 + 1) = *((_DWORD *)v5 + 1);
    *((_DWORD *)v7 + 2) = *((_DWORD *)v5 + 2);
    result = *((_DWORD *)v5 + 1) + 1;
  v14 = *((_DWORD *)v5 + 2);
  *(_DWORD *)a5 = *(_DWORD *)v5;
  *((_DWORD *)a5 + 1) = result;
  *((_DWORD *)a5 + 2) = v14;
  return result;
}


ItemInstance *__fastcall DoorBlock::getSilkTouchItemInstance(DoorBlock *this, int a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r0@1

  v2 = this;
  v3 = sub_1889D6C((Block *)a2);
  return ItemInstance::ItemInstance(v2, v3, 1, 0);
}


_BOOL4 __fastcall DoorBlock::isUpper(DoorBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 11);
  return BlockState::getBool(v2, &v4);
}


signed int __fastcall DoorBlock::tick(DoorBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  DoorBlock *v6; // r6@1
  int v7; // r1@1
  int v8; // r2@1
  signed int result; // r0@1
  Level *v10; // r0@3
  char *v11; // r0@3
  unsigned __int8 v12; // [sp+0h] [bp-20h]@1
  int v13; // [sp+4h] [bp-1Ch]@1
  int v14; // [sp+8h] [bp-18h]@1
  int v15; // [sp+Ch] [bp-14h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  Block::tick(this, a2, a3, a4);
  v7 = *((_DWORD *)v4 + 1);
  v8 = *((_DWORD *)v4 + 2);
  v13 = *(_DWORD *)v4;
  v14 = v7 - 1;
  v15 = v8;
  BlockSource::getBlockID((BlockSource *)&v12, v5, (int)&v13);
  result = *((_BYTE *)v6 + 4);
  if ( v12 != result )
  {
    result = Material::isType(*((int **)v6 + 14), 2);
    if ( result == 1 )
    {
      v10 = (Level *)BlockSource::getLevel(v5);
      v11 = Level::getVillages(v10);
      result = Villages::submitFindVillageQuery(*(Villages **)v11, v4);
    }
  }
  return result;
}


signed int __fastcall DoorBlock::use(DoorBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  DoorBlock *v4; // r5@1
  Entity *v5; // r6@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r0@3
  BlockSource *v8; // r7@3
  _BOOL4 v9; // r0@3

  v4 = this;
  v5 = a2;
  v6 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::DOORS_AND_SWITCHES) == 1 && !Material::isType(*((int **)v4 + 14), 4) )
  {
    v7 = (BlockSource *)Entity::getRegion(v5);
    v8 = v7;
    v9 = DoorBlock::isToggled(v4, v7, v6);
    DoorBlock::setToggled(v4, v8, v6, !v9, v5);
  }
  return 1;
}


signed int __fastcall DoorBlock::onLoaded(DoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r7@1
  DoorBlock *v4; // r6@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@1
  signed int result; // r0@1
  Dimension *v8; // r0@2
  int v9; // r0@2
  CircuitSystem *v10; // r9@2
  signed int v11; // r4@2
  _BOOL4 v12; // r8@3
  BlockState *v13; // r0@3
  __int64 v14; // kr00_8@3
  __int64 v15; // r0@3
  int *v16; // r1@4
  int v17; // r0@6
  bool v18; // zf@6
  bool v19; // nf@6
  _DWORD *v20; // r0@6
  int v21; // [sp+0h] [bp-38h]@5
  __int64 v22; // [sp+4h] [bp-34h]@5
  int v23; // [sp+Ch] [bp-2Ch]@4
  __int64 v24; // [sp+10h] [bp-28h]@4
  unsigned __int8 v25; // [sp+1Bh] [bp-1Dh]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    v8 = (Dimension *)BlockSource::getDimension(v3);
    v9 = Dimension::getCircuitSystem(v8);
    v10 = (CircuitSystem *)v9;
    result = CircuitSystem::create<ConsumerComponent>(v9, v5, (int)v3, 0);
    v11 = result;
    if ( result )
    {
      v12 = DoorBlock::isToggled(v4, v3, v5);
      v25 = BlockSource::getData(v3, v5);
      v13 = (BlockState *)Block::getBlockState((int)v4, 11);
      LODWORD(v15) = BlockState::getBool(v13, &v25);
      v14 = *(_QWORD *)v5;
      HIDWORD(v15) = *((_DWORD *)v5 + 2);
      if ( (_DWORD)v15 == 1 )
      {
        v23 = v14;
        LODWORD(v15) = HIDWORD(v14) - 1;
        v24 = v15;
        v16 = &v23;
      }
      else
        LODWORD(v15) = HIDWORD(v14) + 1;
        v21 = v14;
        v22 = v15;
        v16 = &v21;
      v17 = CircuitSystem::getStrength(v10, (const BlockPos *)v16);
      v18 = v17 == 0;
      v19 = v17 < 0;
      v20 = &Redstone::SIGNAL_MAX;
      if ( v19 || v18 )
        v20 = &Redstone::SIGNAL_MIN;
      if ( v12 )
        v20 = &Redstone::SIGNAL_MAX;
      (*(void (__fastcall **)(signed int, _DWORD))(*(_DWORD *)v11 + 16))(v11, *v20);
      result = 1;
      *(_BYTE *)(v11 + 46) = 1;
    }
  }
  return result;
}


signed int __fastcall DoorBlock::getDoorThickness(DoorBlock *this)
{
  return 1044381696;
}


signed int __fastcall DoorBlock::getDoorFacing(DoorBlock *this, int a2)
{
  char *v2; // r0@1
  signed int result; // r0@2

  v2 = (char *)this - 2;
  if ( (unsigned int)v2 <= 3 )
    result = (unsigned __int8)(0x20103u >> 8 * (_BYTE)v2);
  else
    result = 255;
  return result;
}


ItemInstance *__fastcall DoorBlock::asItemInstance(DoorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ItemInstance *v4; // r4@1
  int v5; // r0@1

  v4 = this;
  v5 = sub_1889D6C(a2);
  return ItemInstance::ItemInstance(v4, v5, 1, 0);
}


char *__fastcall DoorBlock::onRedstoneUpdate(DoorBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockSource *v5; // r5@1
  DoorBlock *v6; // r6@1
  int v7; // r7@1
  const BlockPos *v8; // r4@1
  Level *v9; // r0@1
  char *result; // r0@1
  bool v11; // zf@1
  Dimension *v12; // r0@5
  CircuitSystem *v13; // r9@5
  _BOOL4 v14; // r8@5
  BlockState *v15; // r0@5
  __int64 v16; // kr00_8@5
  __int64 v17; // r0@5
  int v18; // r0@6
  int v19; // r1@7
  signed int v20; // r2@8
  bool v21; // nf@10
  int v22; // [sp+8h] [bp-38h]@7
  __int64 v23; // [sp+Ch] [bp-34h]@7
  int v24; // [sp+14h] [bp-2Ch]@6
  __int64 v25; // [sp+18h] [bp-28h]@6
  unsigned __int8 v26; // [sp+23h] [bp-1Dh]@5

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = (char *)Level::isClientSide(v9);
  v11 = result == 0;
  if ( !result )
  {
    result = (char *)a5;
    v11 = a5 == 0;
  }
  if ( v11 )
    v12 = (Dimension *)BlockSource::getDimension(v5);
    v13 = (CircuitSystem *)Dimension::getCircuitSystem(v12);
    v14 = DoorBlock::isToggled(v6, v5, v8);
    v26 = BlockSource::getData(v5, v8);
    v15 = (BlockState *)Block::getBlockState((int)v6, 11);
    LODWORD(v17) = BlockState::getBool(v15, &v26);
    v16 = *(_QWORD *)v8;
    HIDWORD(v17) = *((_DWORD *)v8 + 2);
    if ( (_DWORD)v17 == 1 )
    {
      v24 = v16;
      LODWORD(v17) = HIDWORD(v16) - 1;
      v25 = v17;
      v18 = CircuitSystem::getStrength(v13, (const BlockPos *)&v24);
    }
    else
      v22 = v16;
      LODWORD(v17) = HIDWORD(v16) + 1;
      v23 = v17;
      v19 = CircuitSystem::getStrength(v13, (const BlockPos *)&v22);
      v18 = v7;
      v7 = v19;
    v20 = 0;
    if ( v7 > 0 )
      v20 = 1;
    v11 = v18 == 0;
    v21 = v18 < 0;
    result = 0;
    if ( !v21 && !v11 )
      result = (char *)1;
    if ( v14 != ((unsigned int)result | v20) )
      result = DoorBlock::setToggled(v6, v5, v8, (unsigned int)result | v20, 0);
  return result;
}


void __fastcall DoorBlock::~DoorBlock(DoorBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall DoorBlock::getSecondPart(DoorBlock *this, unsigned __int8 a2, const BlockPos *a3, BlockPos *a4)
{
  BlockPos *v4; // r4@1
  const BlockPos *v5; // r5@1
  BlockState *v6; // r0@1
  bool v7; // zf@1
  int v8; // r2@1
  int v9; // r3@1
  signed int v10; // r0@1
  signed int result; // r0@3
  unsigned __int8 v12; // [sp+7h] [bp-11h]@1

  v12 = a2;
  v4 = a4;
  v5 = a3;
  v6 = (BlockState *)Block::getBlockState((int)this, 11);
  v7 = BlockState::getBool(v6, &v12) == 0;
  v8 = *((_DWORD *)v5 + 1);
  v9 = *((_DWORD *)v5 + 2);
  v10 = 1;
  if ( !v7 )
    v10 = -1;
  *(_DWORD *)v4 = *(_DWORD *)v5;
  *((_DWORD *)v4 + 1) = v10 + v8;
  result = 1;
  *((_DWORD *)v4 + 2) = v9;
  return result;
}
