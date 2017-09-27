

signed int __fastcall BedBlock::playerWillDestroy(BedBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r4@1
  Block *v5; // r7@1
  int v6; // r8@1
  const BlockPos *v7; // r9@1
  BlockSource *v8; // r5@1
  Level *v9; // r0@1
  __int16 v11; // [sp+Ch] [bp-2Ch]@4
  int v12; // [sp+10h] [bp-28h]@1
  int v13; // [sp+14h] [bp-24h]@1
  int v14; // [sp+18h] [bp-20h]@1

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)Entity::getRegion(a2);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  (*(void (__fastcall **)(Block *, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v5 + 260))(v5, v8, v7, &v12);
  v9 = (Level *)BlockSource::getLevel(v8);
  if ( !Level::isClientSide(v9) )
  {
    if ( !Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD) )
      (*(void (__fastcall **)(Block *, BlockSource *, const BlockPos *, int))(*(_DWORD *)v5 + 276))(v5, v8, v7, v6);
    v11 = FullBlock::AIR;
    BlockSource::setBlockAndData((int)v8, (BlockPos *)&v12, (int)&v11, 3, 0);
  }
  if ( Block::playerWillDestroy(v5, v4, v7, v6) == 1 )
    Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD);
  return 1;
}


_BOOL4 __fastcall BedBlock::isOccupied(BedBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = (unsigned __int8)this;
  v3 = (BlockState *)Block::getBlockState(Block::mBed, 25);
  v5 = v2;
  return BlockState::getBool(v3, &v5);
}


int __fastcall BedBlock::canFillAtPos(BedBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  BlockSource *v4; // r4@1
  const BlockPos *v5; // r6@1
  unsigned __int8 v6; // r5@1
  BlockEntity *v7; // r0@1
  __int64 v8; // r1@3
  int v9; // r3@3
  int v10; // r0@3
  BlockEntity *v11; // r0@3
  int result; // r0@5
  __int64 v13; // [sp+4h] [bp-1Ch]@3
  int v14; // [sp+Ch] [bp-14h]@3

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  result = 0;
  if ( !v7 || *(_DWORD *)BlockEntity::getType(v7) != 27 )
  {
    HIDWORD(v8) = *((_DWORD *)v5 + 1);
    v9 = *((_DWORD *)v5 + 2);
    v10 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * (v6 & 3) + 1];
    LODWORD(v8) = *(_DWORD *)v5 - BedBlock::HEAD_DIRECTION_OFFSETS[2 * (v6 & 3)];
    v13 = v8;
    v14 = v9 - v10;
    v11 = (BlockEntity *)BlockSource::getBlockEntity(v4, (const BlockPos *)&v13);
    if ( !v11 || *(_DWORD *)BlockEntity::getType(v11) != 27 )
      result = 1;
  }
  return result;
}


_BOOL4 __fastcall BedBlock::isHeadPiece(BedBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = (unsigned __int8)this;
  v3 = (BlockState *)Block::getBlockState(Block::mBed, 18);
  v5 = v2;
  return BlockState::getBool(v3, &v5);
}


signed int __fastcall BedBlock::checkIsPathable(BedBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


signed int __fastcall BedBlock::use(BedBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r8@1
  BedBlock *v5; // r10@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  BlockSource *v8; // r9@2
  unsigned int v9; // r7@2
  BlockState *v10; // r0@2
  unsigned __int64 *v11; // r0@3
  unsigned int v12; // r0@3
  int v13; // r2@3
  int v14; // r0@3
  int v15; // r0@5
  int *v16; // r4@6 OVERLAPPED
  unsigned __int64 *v19; // r0@7
  unsigned int v20; // r0@7
  int v21; // r2@7
  int v22; // r0@7
  int v27; // r0@10
  BlockState *v29; // r0@12
  int v30; // r5@13
  _QWORD *v31; // r0@13
  int *v32; // r3@13
  void (__fastcall *v33)(Entity *, int *, __int64 *, _DWORD); // r4@16
  int *v34; // r0@16
  void *v35; // r4@16
  void *v36; // r6@16
  unsigned int *v37; // r2@18
  signed int v38; // r1@20
  int *v39; // r0@26
  char *v40; // r0@31
  unsigned int *v41; // r2@32
  signed int v42; // r1@34
  BlockState *v43; // r0@36
  char v44; // r4@36
  char v45; // r0@36
  BlockState *v46; // r0@38
  char v47; // r4@38
  signed int v48; // r5@38
  char v49; // r0@38
  void (__fastcall *v50)(Entity *, void **, __int64 *, _DWORD); // r4@39
  int *v51; // r0@39
  void *v52; // r4@39
  void *v53; // r6@39
  unsigned int *v54; // r2@41
  signed int v55; // r1@43
  int *v56; // r0@49
  void (__fastcall *v57)(Entity *, int *, __int64 *, _DWORD); // r4@59
  int *v58; // r0@59
  void *v59; // r4@59
  void *v60; // r6@59
  unsigned int *v61; // r2@61
  signed int v62; // r1@63
  int *v63; // r0@69
  void (__fastcall *v64)(Entity *, int *, __int64 *, _DWORD); // r4@79
  int *v65; // r0@79
  void *v66; // r4@79
  void *v67; // r6@79
  unsigned int *v68; // r2@81
  signed int v69; // r1@83
  int *v70; // r0@89
  int v71; // [sp+10h] [bp-D0h]@0
  __int64 v72; // [sp+14h] [bp-CCh]@10
  int v73; // [sp+1Ch] [bp-C4h]@10
  void *v74; // [sp+20h] [bp-C0h]@10
  __int64 v75; // [sp+24h] [bp-BCh]@10
  int v76; // [sp+2Ch] [bp-B4h]@79
  int v77; // [sp+30h] [bp-B0h]@79
  __int64 v78; // [sp+34h] [bp-ACh]@59
  int v79; // [sp+3Ch] [bp-A4h]@59
  int v80; // [sp+40h] [bp-A0h]@59
  __int64 v81; // [sp+44h] [bp-9Ch]@16
  int v82; // [sp+4Ch] [bp-94h]@16
  int v83; // [sp+50h] [bp-90h]@16
  _QWORD *v84; // [sp+54h] [bp-8Ch]@13
  void (*v85)(void); // [sp+5Ch] [bp-84h]@13
  signed int (__fastcall *v86)(int *, int); // [sp+60h] [bp-80h]@13
  int v87; // [sp+64h] [bp-7Ch]@13
  float v88; // [sp+68h] [bp-78h]@10
  char v89; // [sp+74h] [bp-6Ch]@8
  unsigned __int8 v90; // [sp+78h] [bp-68h]@7
  char v91; // [sp+7Ch] [bp-64h]@7
  unsigned __int8 v92; // [sp+80h] [bp-60h]@3
  int v93; // [sp+84h] [bp-5Ch]@2
  int v94; // [sp+88h] [bp-58h]@2
  int v95; // [sp+8Ch] [bp-54h]@2
  unsigned __int8 v96; // [sp+90h] [bp-50h]@36
  char v97; // [sp+91h] [bp-4Fh]@36
  unsigned __int8 v98; // [sp+94h] [bp-4Ch]@2
  char v99; // [sp+95h] [bp-4Bh]@36

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)Entity::getLevel(a2);
  if ( Level::isClientSide(v7) )
    return 1;
  v93 = *(_DWORD *)v6;
  v94 = *((_DWORD *)v6 + 1);
  v95 = *((_DWORD *)v6 + 2);
  v8 = (BlockSource *)Entity::getRegion(v4);
  v9 = BlockSource::getData(v8, v6);
  v10 = (BlockState *)Block::getBlockState(Block::mBed, 18);
  v98 = v9;
  if ( !BlockState::getBool(v10, &v98) )
  {
    v11 = (unsigned __int64 *)Block::getBlockState(Block::mBed, 12);
    v12 = (0xFu >> (4 - (*v11 >> 32))) & (v9 >> (*v11 + 1 - (*v11 >> 32)));
    v13 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v12];
    v14 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v12 + 1];
    v93 += v13;
    v95 += v14;
    BlockSource::getBlockID((BlockSource *)&v92, v8, (int)&v93);
    if ( v92 != *((_BYTE *)v5 + 4) )
      return 1;
    v9 = BlockSource::getData(v8, (const BlockPos *)&v93);
  }
  v15 = BlockSource::getDimension(v8);
  if ( (*(int (**)(void))(*(_DWORD *)v15 + 164))() != 1
    || (v16 = &v93,
        *(_DWORD *)(Biome::hell + 268) == *(_DWORD *)(BlockSource::getBiome(v8, (const BlockPos *)&v93) + 268)) )
    _KR00_8 = *(_QWORD *)&v93;
    _R6 = v95;
    v91 = BlockID::AIR;
    BlockSource::setBlock((int)v8, v93, v94, v95, &v91, 3);
    v19 = (unsigned __int64 *)Block::getBlockState(Block::mBed, 12);
    v20 = (0xFu >> (4 - (*v19 >> 32))) & (v9 >> (*v19 + 1 - (*v19 >> 32)));
    v21 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v20];
    v22 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v20 + 1];
    v93 += v21;
    v95 += v22;
    BlockSource::getBlockID((BlockSource *)&v90, v8, (int)&v93);
    __asm
    {
      VMOV            S0, R6
      VMOV.F32        S16, #0.5
      VCVT.F32.S32    S22, S0
      VMOV            S0, R5
      VCVT.F32.S32    S20, S0
      VMOV            S0, R11
      VCVT.F32.S32    S18, S0
    }
    if ( v90 == *((_BYTE *)v5 + 4) )
      v89 = BlockID::AIR;
      BlockSource::setBlock((int)v8, v93, v94, v95, &v89, 3);
      __asm
      {
        VMOV.F32        S0, #1.0
        VLDR            S2, [SP,#0xE0+var_5C]
        VLDR            S4, [SP,#0xE0+var_58]
        VLDR            S6, [SP,#0xE0+var_54]
        VCVT.F32.S32    S6, S6
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S2, S2
        VADD.F32        S8, S22, S0
        VADD.F32        S10, S20, S0
        VADD.F32        S0, S18, S0
        VADD.F32        S6, S8, S6
        VADD.F32        S4, S10, S4
        VADD.F32        S0, S0, S2
        VMUL.F32        S22, S6, S16
        VMUL.F32        S20, S4, S16
        VMUL.F32        S16, S0, S16
      }
    else
        VADD.F32        S22, S22, S16
        VADD.F32        S20, S20, S16
        VADD.F32        S16, S18, S16
    v27 = Entity::getLevel(v4);
      VSTR            S16, [SP,#0xE0+var_78]
      VSTR            S20, [SP,#0xE0+var_74]
      VSTR            S22, [SP,#0xE0+var_70]
    Level::explode(
      v27,
      (int)v8,
      0,
      (int)&v88,
      (void *)0x40A00000,
      1,
      2139095039,
      v71,
      v72,
      SHIDWORD(v72),
      v73,
      v74,
      v75,
      (void *)HIDWORD(v75));
  v29 = (BlockState *)Block::getBlockState(Block::mBed, 25);
  if ( BlockState::getBool(v29, &v98) == 1 )
    v87 = 0;
    v30 = Entity::getDimension(v4);
    v31 = operator new(8u);
    v32 = &v87;
    *v31 = *(_QWORD *)(&v16 - 1);
    v84 = v31;
    v85 = (void (*)(void))sub_1855A64;
    v86 = sub_1855A1E;
    Dimension::forEachPlayer(v30, (int)&v84);
    if ( v85 )
      v85();
    if ( v87 )
      v33 = *(void (__fastcall **)(Entity *, int *, __int64 *, _DWORD))(*(_DWORD *)v4 + 1376);
      v34 = sub_21E8AF4(&v83, (int *)&unk_280AA74);
      sub_21E7408((const void **)v34, "%tile.bed.occupied", 0x12u);
      v81 = 0LL;
      v82 = 0;
      v33(v4, &v83, &v81, 0);
      v36 = (void *)HIDWORD(v81);
      v35 = (void *)v81;
      if ( (_DWORD)v81 != HIDWORD(v81) )
        do
        {
          v39 = (int *)(*(_DWORD *)v35 - 12);
          if ( v39 != &dword_28898C0 )
          {
            v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
            }
            else
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j__ZdlPv_9(v39);
          }
          v35 = (char *)v35 + 4;
        }
        while ( v35 != v36 );
        v35 = (void *)v81;
      if ( v35 )
        operator delete(v35);
      v40 = (char *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v83 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        else
LABEL_99:
          v42 = (*v41)--;
LABEL_100:
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
    BlockSource::getBlockAndData((BlockSource *)&v98, v8, (int)&v93);
    v43 = (BlockState *)Block::getBlockState(Block::mBed, 25);
    v44 = v99;
    v45 = BlockState::getMask(v43);
    v99 = v44 & ~v45;
    v96 = v98;
    v97 = v44 & ~v45;
    BlockSource::setBlockAndData((int)v8, v93, v94, v95, (int)&v96, 2);
  switch ( (*(int (__fastcall **)(Entity *, int *))(*(_DWORD *)v4 + 1384))(v4, &v93) )
    case 0:
      BlockSource::getBlockAndData((BlockSource *)&v98, v8, (int)&v93);
      v46 = (BlockState *)Block::getBlockState(Block::mBed, 25);
      v47 = v99;
      v48 = 1 << (*(_QWORD *)v46 + 1 - (unsigned int)(*(_QWORD *)v46 >> 32));
      v49 = BlockState::getMask(v46);
      v99 = v47 & ~v49 | v48;
      v96 = v98;
      v97 = v47 & ~v49 | v48;
      BlockSource::setBlockAndData((int)v8, v93, v94, v95, (int)&v96, 2);
      break;
    case 3:
      v50 = *(void (__fastcall **)(Entity *, void **, __int64 *, _DWORD))(*(_DWORD *)v4 + 1376);
      v51 = sub_21E8AF4((int *)&v74, (int *)&unk_280AA74);
      sub_21E7408((const void **)v51, "%tile.bed.tooFar", 0x10u);
      v72 = 0LL;
      v73 = 0;
      v50(v4, &v74, &v72, 0);
      v53 = (void *)HIDWORD(v72);
      v52 = (void *)v72;
      if ( (_DWORD)v72 != HIDWORD(v72) )
          v56 = (int *)(*(_DWORD *)v52 - 12);
          if ( v56 != &dword_28898C0 )
            v54 = (unsigned int *)(*(_DWORD *)v52 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v56);
          v52 = (char *)v52 + 4;
        while ( v52 != v53 );
        v52 = (void *)v72;
      if ( v52 )
        operator delete(v52);
      v40 = (char *)v74 - 12;
      if ( (int *)((char *)v74 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)((char *)v74 - 4);
        if ( !&pthread_create )
          goto LABEL_99;
        __dmb();
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        goto LABEL_100;
    case 2:
      v57 = *(void (__fastcall **)(Entity *, int *, __int64 *, _DWORD))(*(_DWORD *)v4 + 1376);
      v58 = sub_21E8AF4(&v80, (int *)&unk_280AA74);
      sub_21E7408((const void **)v58, "%tile.bed.noSleep", 0x11u);
      v78 = 0LL;
      v79 = 0;
      v57(v4, &v80, &v78, 0);
      v60 = (void *)HIDWORD(v78);
      v59 = (void *)v78;
      if ( (_DWORD)v78 != HIDWORD(v78) )
          v63 = (int *)(*(_DWORD *)v59 - 12);
          if ( v63 != &dword_28898C0 )
            v61 = (unsigned int *)(*(_DWORD *)v59 - 4);
                v62 = __ldrex(v61);
              while ( __strex(v62 - 1, v61) );
              v62 = (*v61)--;
            if ( v62 <= 0 )
              j_j_j_j__ZdlPv_9(v63);
          v59 = (char *)v59 + 4;
        while ( v59 != v60 );
        v59 = (void *)v78;
      if ( v59 )
        operator delete(v59);
      v40 = (char *)(v80 - 12);
      if ( (int *)(v80 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v80 - 4);
    case 5:
      v64 = *(void (__fastcall **)(Entity *, int *, __int64 *, _DWORD))(*(_DWORD *)v4 + 1376);
      v65 = sub_21E8AF4(&v77, (int *)&unk_280AA74);
      sub_21E7408((const void **)v65, "%tile.bed.notSafe", 0x11u);
      v75 = 0LL;
      v76 = 0;
      v64(v4, &v77, &v75, 0);
      v67 = (void *)HIDWORD(v75);
      v66 = (void *)v75;
      if ( (_DWORD)v75 != HIDWORD(v75) )
          v70 = (int *)(*(_DWORD *)v66 - 12);
          if ( v70 != &dword_28898C0 )
            v68 = (unsigned int *)(*(_DWORD *)v66 - 4);
                v69 = __ldrex(v68);
              while ( __strex(v69 - 1, v68) );
              v69 = (*v68)--;
            if ( v69 <= 0 )
              j_j_j_j__ZdlPv_9(v70);
          v66 = (char *)v66 + 4;
        while ( v66 != v67 );
        v66 = (void *)v75;
      if ( v66 )
        operator delete(v66);
      v40 = (char *)(v77 - 12);
      if ( (int *)(v77 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v77 - 4);
    case 1:
    case 4:
  return 1;
}


int __fastcall BedBlock::BedBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-1Ch]@1
  signed int v9; // [sp+8h] [bp-18h]@1
  signed int v10; // [sp+Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(12);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_27048C0;
  v8 = 1065353216;
  v9 = 1058013184;
  v10 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v8);
  Block::setSolid((Block *)v3, 0);
  Block::setIsInteraction((Block *)v3, 1);
  *(_QWORD *)(v3 + 20) = 0x200000000000000LL;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 27;
  return v3;
}


signed int __fastcall BedBlock::findStandUpPosition(BedBlock *this, BlockSource *a2, const BlockPos *a3, int a4, BlockPos *a5)
{
  const BlockPos *v5; // r9@1
  BlockSource *v6; // r5@1
  BlockSource *v7; // r7@1
  unsigned int v8; // r4@1
  unsigned __int64 *v9; // r0@1
  unsigned int v10; // r0@1
  int v11; // r3@1
  int v12; // r8@2
  int v13; // r10@2
  int v14; // r11@2
  int v15; // r0@2
  int v16; // r4@2
  int v17; // r6@3
  int v18; // r0@9
  signed int result; // r0@23
  int v20; // r0@25
  int v21; // [sp+4h] [bp-34h]@1
  int v22; // [sp+8h] [bp-30h]@1
  int v23; // [sp+Ch] [bp-2Ch]@1
  int v24; // [sp+10h] [bp-28h]@2

  v21 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = BlockSource::getData(this, a2);
  v9 = (unsigned __int64 *)Block::getBlockState(Block::mBed, 12);
  v10 = (0xFu >> (4 - (*v9 >> 32))) & (v8 >> (*v9 + 1 - (*v9 >> 32)));
  v11 = 0;
  v23 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v10];
  v22 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v10 + 1];
LABEL_2:
  v12 = *((_DWORD *)v6 + 2) - v22 * v11;
  v24 = v11;
  v13 = *(_DWORD *)v6 - v23 * v11;
  v14 = v12 - 1;
  v15 = v12 - 1;
  v16 = v13 - 1;
  while ( 1 )
  {
    v17 = v15;
    if ( BlockSource::isSolidBlockingBlock(v7, v13 - 1, *((_DWORD *)v6 + 1) - 1, v15) != 1
      || BlockSource::isEmptyBlock(v7, v13 - 1, *((_DWORD *)v6 + 1), v17) != 1
      || BlockSource::isEmptyBlock(v7, v13 - 1, *((_DWORD *)v6 + 1) + 1, v17) != 1 )
    {
      goto LABEL_8;
    }
    if ( (signed int)v5 < 1 )
      break;
    v5 = (const BlockPos *)((char *)v5 - 1);
LABEL_8:
    v15 = v17 + 1;
    if ( v17 > v12 )
      v16 = v13 + 1;
      v18 = v12 - 1;
      do
      {
        v17 = v18;
        if ( BlockSource::isSolidBlockingBlock(v7, v13, *((_DWORD *)v6 + 1) - 1, v18) == 1
          && BlockSource::isEmptyBlock(v7, v13, *((_DWORD *)v6 + 1), v17) == 1
          && BlockSource::isEmptyBlock(v7, v13, *((_DWORD *)v6 + 1) + 1, v17) == 1 )
        {
          if ( (signed int)v5 < 1 )
          {
            v16 = v13;
            goto LABEL_25;
          }
          v5 = (const BlockPos *)((char *)v5 - 1);
        }
        v18 = v17 + 1;
      }
      while ( v17 <= v12 );
        v17 = v14;
        if ( BlockSource::isSolidBlockingBlock(v7, v13 + 1, *((_DWORD *)v6 + 1) - 1, v14) == 1
          && BlockSource::isEmptyBlock(v7, v13 + 1, *((_DWORD *)v6 + 1), v14) == 1
          && BlockSource::isEmptyBlock(v7, v13 + 1, *((_DWORD *)v6 + 1) + 1, v14) == 1 )
        ++v14;
      v11 = v24 + 1;
      if ( v24 == 1 )
        return 0;
      goto LABEL_2;
  }
LABEL_25:
  v20 = *((_DWORD *)v6 + 1);
  *(_DWORD *)v21 = v16;
  *(_DWORD *)(v21 + 4) = v20;
  result = 1;
  *(_DWORD *)(v21 + 8) = v17;
  return result;
}


void __fastcall BedBlock::~BedBlock(BedBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall BedBlock::setOccupied(BedBlock *this, BlockSource *a2, const BlockPos *a3, bool a4)
{
  BedBlock *v4; // r4@1
  BlockSource *v5; // r5@1
  const BlockPos *v6; // r6@1
  BlockState *v7; // r0@1
  int v8; // r6@2
  int v9; // r7@2
  unsigned int v10; // r0@2
  int v11; // r6@3
  int v12; // r1@4
  int v13; // r2@4
  int v14; // r3@4
  char v16; // [sp+Ch] [bp-1Ch]@4
  char v17; // [sp+Dh] [bp-1Bh]@4
  char v18; // [sp+10h] [bp-18h]@1
  unsigned __int8 v19; // [sp+11h] [bp-17h]@2

  v4 = this;
  v5 = a2;
  v6 = a3;
  BlockSource::getBlockAndData((BlockSource *)&v18, this, (int)a2);
  v7 = (BlockState *)Block::getBlockState(Block::mBed, 25);
  if ( v6 == (const BlockPos *)1 )
  {
    v8 = v19;
    v9 = *(_QWORD *)v7 + 1 - (*(_QWORD *)v7 >> 32);
    v10 = v8 & ~BlockState::getMask(v7) | (1 << v9);
  }
  else
    v11 = v19;
    v10 = v11 & ~BlockState::getMask(v7);
  v19 = v10;
  v12 = *(_DWORD *)v5;
  v13 = *((_DWORD *)v5 + 1);
  v14 = *((_DWORD *)v5 + 2);
  v16 = v18;
  v17 = v10;
  return BlockSource::setBlockAndData((int)v4, v12, v13, v14, (int)&v16, 2);
}


int __fastcall BedBlock::onFillBlock(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r1@1
  BlockState *v8; // r0@1
  int v9; // r4@1
  unsigned int v10; // r0@1
  char v12; // [sp+4h] [bp-2Ch]@1
  char v13; // [sp+5h] [bp-2Bh]@1
  int v14; // [sp+8h] [bp-28h]@1
  int v15; // [sp+Ch] [bp-24h]@1
  int v16; // [sp+10h] [bp-20h]@1

  v4 = a1;
  v14 = 0;
  v15 = 0;
  v5 = a4;
  v16 = 0;
  v6 = a2;
  v7 = *(_BYTE *)(a4 + 1);
  (*(void (**)(void))(*(_DWORD *)a1 + 256))();
  v8 = (BlockState *)Block::getBlockState(v4, 18);
  v9 = *(_BYTE *)(v5 + 1);
  v10 = v9 & ~BlockState::getMask(v8);
  *(_BYTE *)(v5 + 1) = v10;
  v12 = *(_BYTE *)v5;
  v13 = v10;
  return BlockSource::setBlockAndData(v6, (BlockPos *)&v14, (int)&v12, 2, 0);
}


int __fastcall BedBlock::spawnResources(BedBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r4@1
  BedBlock *v7; // r6@1
  Level *v9; // r0@1
  Level *v10; // r7@1
  int result; // r0@1
  unsigned __int64 *v12; // r0@3
  int (__fastcall *v13)(BedBlock *, char *); // r10@4
  Level *v14; // r0@4
  char *v15; // r0@4
  signed int v16; // r0@4
  Spawner *v17; // r9@5
  float v22; // [sp+Ch] [bp-84h]@5
  char v23; // [sp+18h] [bp-78h]@5
  int v24; // [sp+20h] [bp-70h]@9
  void *v25; // [sp+3Ch] [bp-54h]@7
  void *ptr; // [sp+4Ch] [bp-44h]@5
  char v27; // [sp+64h] [bp-2Ch]@4

  v6 = a2;
  v7 = this;
  _R5 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  v10 = v9;
  result = Level::isClientSide(v9);
  if ( !result )
  {
    result = BlockSource::getBlockEntity(v6, _R5);
    if ( result )
    {
      v12 = (unsigned __int64 *)Level::getGameRules(v10);
      result = GameRules::getBool(v12, (int **)&GameRules::DO_TILE_DROPS);
      if ( result == 1 )
      {
        Vec3::Vec3((int)&v27, (int)_R5);
        v13 = *(int (__fastcall **)(BedBlock *, char *))(*(_DWORD *)v7 + 328);
        v14 = (Level *)BlockSource::getLevel(v6);
        v15 = Level::getRandom(v14);
        v16 = v13(v7, v15);
        ExperienceOrb::spawnOrbs(v6, (const Vec3 *)&v27, v16, 1, 0);
        result = Level::isClientSide(v10);
        if ( !result )
        {
          v17 = (Spawner *)Level::getSpawner(v10);
          (*(void (__fastcall **)(char *, BedBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v7 + 272))(
            &v23,
            v7,
            v6,
            _R5);
          __asm
          {
            VLDR            S0, [R5]
            VMOV.F32        S6, #0.5
            VLDR            S2, [R5,#4]
            VLDR            S4, [R5,#8]
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S4, S4
            VADD.F32        S0, S0, S6
            VADD.F32        S2, S2, S6
            VADD.F32        S4, S4, S6
            VSTR            S0, [SP,#0x90+var_84]
            VSTR            S2, [SP,#0x90+var_80]
            VSTR            S4, [SP,#0x90+var_7C]
          }
          Spawner::spawnItem(v17, v6, (const ItemInstance *)&v23, 0, (const Vec3 *)&v22, 10);
          if ( ptr )
            operator delete(ptr);
          if ( v25 )
            operator delete(v25);
          if ( v24 )
            (*(void (**)(void))(*(_DWORD *)v24 + 4))();
          result = 0;
        }
      }
    }
  }
  return result;
}


unsigned int __fastcall BedBlock::sanitizeFillBlock(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  BlockState *v7; // r0@1
  char v8; // r7@1
  BlockState *v9; // r0@1
  int v10; // r5@1
  signed int v11; // r7@1
  unsigned int result; // r0@1

  v5 = a1;
  v6 = a2;
  *(_BYTE *)(a5 + 1) &= 3u;
  v7 = (BlockState *)Block::getBlockState(a2, 25);
  v8 = *(_BYTE *)(a5 + 1);
  *(_BYTE *)(a5 + 1) = v8 & ~(unsigned __int8)BlockState::getMask(v7);
  v9 = (BlockState *)Block::getBlockState(v6, 18);
  v10 = *(_BYTE *)(a5 + 1);
  v11 = 1 << (*(_QWORD *)v9 + 1 - (unsigned int)(*(_QWORD *)v9 >> 32));
  result = v10 & ~BlockState::getMask(v9) | v11;
  *(_BYTE *)(a5 + 1) = result;
  *(_BYTE *)v5 = *(_BYTE *)a5;
  *(_BYTE *)(v5 + 1) = result;
  return result;
}


signed int __fastcall BedBlock::isInteractiveBlock(BedBlock *this)
{
  return 1;
}


int __fastcall BedBlock::onPlace(BedBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  BlockPos *v4; // r7@1
  int result; // r0@1
  __int16 v6; // [sp+4h] [bp-24h]@2
  int v7; // [sp+8h] [bp-20h]@1
  int v8; // [sp+Ch] [bp-1Ch]@1
  int v9; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v4 = a3;
  result = (*(int (**)(void))(*(_DWORD *)this + 260))();
  if ( !result )
  {
    v6 = FullBlock::AIR;
    result = BlockSource::setBlockAndData((int)v3, v4, (int)&v6, 3, 0);
  }
  return result;
}


signed int __fastcall BedBlock::getSecondPart(BedBlock *this, int a2, const BlockPos *a3, BlockPos *a4)
{
  unsigned int v4; // r9@1
  BlockPos *v5; // r8@1
  const BlockPos *v6; // r5@1
  unsigned __int64 *v7; // r0@1
  unsigned int v8; // r4@1
  int v9; // r6@1
  BlockState *v10; // r0@1
  int v11; // r4@1
  _BOOL4 v12; // r0@1
  int v13; // r3@1
  __int64 v14; // r1@5
  unsigned __int8 v16; // [sp+3h] [bp-1Dh]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v8 = (v4 >> (1 - (*v7 >> 32) + *v7)) & (0xFu >> (4 - (*v7 >> 32)));
  v9 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v8];
  v10 = (BlockState *)Block::getBlockState(Block::mBed, 18);
  v16 = v4;
  v11 = BedBlock::HEAD_DIRECTION_OFFSETS[2 * v8 + 1];
  v12 = BlockState::getBool(v10, &v16);
  v13 = *((_DWORD *)v6 + 2);
  if ( v12 )
    v9 = -v9;
    v11 = -v11;
  LODWORD(v14) = *(_DWORD *)v6 + v9;
  HIDWORD(v14) = *((_DWORD *)v6 + 1);
  *(_QWORD *)v5 = v14;
  *((_DWORD *)v5 + 2) = v13 + v11;
  return 1;
}


void __fastcall BedBlock::~BedBlock(BedBlock *this)
{
  BedBlock::~BedBlock(this);
}


signed int __fastcall BedBlock::getMappedFace(BedBlock *this, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r5@1
  __int64 v5; // kr00_8@2
  BlockState *v6; // r0@2
  int v7; // r4@2
  signed int result; // r0@4
  unsigned __int8 v9; // [sp+7h] [bp-19h]@2

  v3 = a2;
  v4 = a3;
  if ( !(_BYTE)a2 )
    return 0;
  v5 = *(_QWORD *)Block::getBlockState(Block::mBed, 12);
  v6 = (BlockState *)Block::getBlockState(Block::mBed, 18);
  v9 = v4;
  v7 = *(&Direction::RELATIVE_DIRECTION_FACING[6 * ((v4 >> (1 - BYTE4(v5) + v5)) & (0xFu >> (4 - BYTE4(v5))))] + v3);
  if ( BlockState::getBool(v6, &v9) == 1 )
  {
    if ( v7 == 2 )
      return 2;
  }
  else if ( v7 == 3 )
    return 3;
  result = 1;
  if ( (v7 | 1) == 5 )
    result = 4;
  return result;
}


int __fastcall BedBlock::neighborChanged(BedBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r10@1
  BedBlock *v6; // r7@1
  const BlockPos *v7; // r5@1
  unsigned int v8; // r8@1
  BlockState *v9; // r0@5
  int result; // r0@5
  unsigned __int64 *v11; // r0@6
  unsigned int v12; // r0@6
  int v13; // r9@6
  char *v14; // r7@8
  int v15; // r5@8
  int v16; // r0@10
  BlockSource *v17; // r1@10
  char *v18; // r3@10
  int v19; // r5@13
  int v20; // [sp+0h] [bp-78h]@10
  char v21; // [sp+Ch] [bp-6Ch]@8
  char v22; // [sp+18h] [bp-60h]@8
  unsigned __int8 v23; // [sp+1Ch] [bp-5Ch]@7
  char v24; // [sp+20h] [bp-58h]@9
  char v25; // [sp+2Ch] [bp-4Ch]@9
  unsigned __int8 v26; // [sp+30h] [bp-48h]@6
  char v27; // [sp+34h] [bp-44h]@13
  char v28; // [sp+40h] [bp-38h]@13
  unsigned __int8 v29; // [sp+44h] [bp-34h]@4
  int v30; // [sp+48h] [bp-30h]@1
  int v31; // [sp+4Ch] [bp-2Ch]@1
  int v32; // [sp+50h] [bp-28h]@1
  unsigned __int8 v33; // [sp+57h] [bp-21h]@5

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v30 = 0;
  v31 = 0;
  v32 = 0;
  (*(void (__fastcall **)(BedBlock *, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v6 + 260))(v6, v5, v4, &v30);
  if ( *(_DWORD *)v7 == v30
    && *((_DWORD *)v7 + 1) == v31
    && *((_DWORD *)v7 + 2) == v32
    && (BlockSource::getBlockID((BlockSource *)&v29, v5, (int)&v30), v29 != *((_BYTE *)v6 + 4)) )
  {
    v28 = BlockID::AIR;
    BlockSource::setBlock((int)v5, v4, &v28, 3);
    v19 = BlockSource::getLevel(v5);
    Vec3::Vec3((int)&v27, (int)v4);
    v18 = &v27;
    v20 = *((_BYTE *)v6 + 4) | (v8 << 8);
    v16 = v19;
    v17 = v5;
  }
  else
    v9 = (BlockState *)Block::getBlockState(Block::mBed, 18);
    v33 = v8;
    result = BlockState::getBool(v9, &v33);
    if ( result != 1 )
      return result;
    v11 = (unsigned __int64 *)Block::getBlockState(Block::mBed, 12);
    v12 = (0xFu >> (4 - (*v11 >> 32))) & (v8 >> (*v11 + 1 - (*v11 >> 32)));
    v13 = *((_BYTE *)v6 + 4);
    BlockSource::getBlockID(
      (BlockSource *)&v26,
      (int)v5,
      *(_QWORD *)v4 - BedBlock::HEAD_DIRECTION_OFFSETS[2 * v12],
      *(_QWORD *)v4 >> 32,
      *((_DWORD *)v4 + 2) - BedBlock::HEAD_DIRECTION_OFFSETS[2 * v12 + 1]);
    if ( v26 == *((_BYTE *)v6 + 4) )
    {
      BlockSource::getBlockID((BlockSource *)&v23, v5, (int)&v30);
      result = *((_BYTE *)v6 + 4);
      if ( v23 == result )
        return result;
      v22 = BlockID::AIR;
      BlockSource::setBlock((int)v5, v4, &v22, 3);
      v14 = &v21;
      v15 = BlockSource::getLevel(v5);
    }
    else
      v25 = BlockID::AIR;
      BlockSource::setBlock((int)v5, v4, &v25, 3);
      v14 = &v24;
    Vec3::Vec3((int)v14, (int)v4);
    v20 = v13 | (v8 << 8);
    v16 = v15;
    v18 = v14;
  return Level::broadcastDimensionEvent(v16, v17, 2001, (int)v18, v20);
}


_BOOL4 __fastcall BedBlock::getVariant(BedBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState(Block::mBed, 18);
  v5 = v2;
  return BlockState::getBool(v3, &v5);
}


int __fastcall BedBlock::onFallOn(BedBlock *this, BlockSource *a2, const BlockPos *a3, Entity *_R3, float a5)
{
  float v10; // [sp+0h] [bp-10h]@0

  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R3,#0xE0]
    VLDR            S4, [SP,#0x10+arg_0]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S4, S0
    VSTR            S2, [R3,#0xE0]
    VSTR            S0, [SP,#0x10+var_10]
  }
  return Block::onFallOn(this, a2, a3, _R3, v10);
}


int __fastcall BedBlock::updateEntityAfterFallOn(BedBlock *this, Entity *a2)
{
  BedBlock *v3; // r5@1
  int result; // r0@1
  int *v9; // r0@5
  int (__fastcall *v10)(Entity *, char *, char *); // r7@7
  int v11; // r0@7
  char v12; // [sp+0h] [bp-28h]@7
  char v13; // [sp+1h] [bp-27h]@7
  char v14; // [sp+4h] [bp-24h]@7
  int v15; // [sp+10h] [bp-18h]@5

  _R4 = a2;
  v3 = this;
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 312))(a2);
  if ( result == 1 )
  {
    result = j_j_j__ZNK5Block23updateEntityAfterFallOnER6Entity(v3, _R4);
  }
  else
    __asm
    {
      VLDR            S0, [R4,#0x70]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VMOV.F32        S2, #-0.75
        VMUL.F32        S0, S0, S2
        VMOV.F32        S2, #0.75
        VSTR            S0, [R4,#0x70]
        VCMPE.F32       S0, S2
      }
      v15 = 1061158912;
      __asm { VMRS            APSR_nzcv, FPSCR }
      v9 = &v15;
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v9 = (int *)((char *)_R4 + 112);
      *((_DWORD *)_R4 + 28) = *v9;
      v10 = *(int (__fastcall **)(Entity *, char *, char *))(*(_DWORD *)_R4 + 420);
      v11 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 52))(_R4);
      BlockPos::BlockPos((int)&v14, v11);
      v12 = *((_BYTE *)v3 + 4);
      v13 = 0;
      result = v10(_R4, &v14, &v12);
  return result;
}


int __fastcall BedBlock::canBeSilkTouched(BedBlock *this)
{
  return 0;
}


int __fastcall BedBlock::asItemInstance(BedBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ItemInstance *v4; // r4@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  int result; // r0@1

  v4 = this;
  v5 = (const BlockPos *)a4;
  v6 = a3;
  ItemInstance::ItemInstance(this, Item::mBed, 1, 14);
  result = BlockSource::getBlockEntity(v6, v5);
  if ( result )
    result = ItemInstance::setAuxValue(v4, *(_WORD *)(result + 104));
  return result;
}
