

BlockEntity *__fastcall PistonBlockEntity::~PistonBlockEntity(PistonBlockEntity *this)
{
  PistonBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_270A404;
  v2 = (void *)*((_DWORD *)this + 33);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 30);
  if ( v3 )
    operator delete(v3);
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


signed int __fastcall PistonBlockEntity::isMoving(PistonBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 115) | 2;
  result = 0;
  if ( v1 == 3 )
    result = 1;
  return result;
}


int __fastcall PistonBlockEntity::_attachedBlockWalker(PistonBlockEntity *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  PistonBlockEntity *v5; // r5@1
  BlockSource *v6; // r8@1
  __int64 v7; // r0@1
  int v8; // r9@1
  const BlockPos *v9; // r4@1
  int v10; // r2@2
  int v11; // r3@2
  int v12; // r7@4
  bool v13; // zf@4
  char *v14; // r6@8
  unsigned int v15; // r11@8
  int v16; // r1@9
  Block *v17; // r10@9
  int v18; // r1@11
  unsigned __int64 *v19; // r0@13
  int v20; // r2@13
  int v21; // r3@13
  signed int v22; // r0@13
  signed int v23; // r3@13
  signed int v24; // r6@20
  int v25; // r1@23
  int v26; // r0@24
  int v27; // r0@24
  int v28; // r1@30
  int v29; // r1@32
  int v30; // r1@34
  unsigned __int64 *v31; // r0@35
  __int64 v32; // r0@36
  int v33; // r0@37
  int v34; // r1@38
  int v35; // r0@42
  _DWORD *v36; // r3@44
  int v37; // r1@44
  int v38; // r2@44
  bool v39; // zf@44
  __int64 v40; // kr00_8@48
  int v41; // r0@52
  int v42; // r0@56
  int v43; // r12@56
  int v44; // r2@57
  int v45; // r1@57
  bool v46; // zf@58
  int v47; // r2@71
  int v48; // r3@71
  __int64 v49; // kr10_8@71
  int v51; // [sp+4h] [bp-3Ch]@71
  int v52; // [sp+8h] [bp-38h]@71
  int v53; // [sp+Ch] [bp-34h]@71
  int v54; // [sp+10h] [bp-30h]@42
  int v55; // [sp+14h] [bp-2Ch]@42
  int v56; // [sp+18h] [bp-28h]@42

  v5 = this;
  v6 = a2;
  v7 = *((_QWORD *)this + 15);
  v8 = a4;
  v9 = a3;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    v10 = *(_DWORD *)a3;
    v11 = *((_DWORD *)v9 + 1);
    do
    {
      if ( *(_DWORD *)v7 == v10 )
      {
        v12 = *(_DWORD *)(v7 + 4);
        v13 = v12 == v11;
        if ( v12 == v11 )
          v13 = *(_DWORD *)(v7 + 8) == *((_DWORD *)v9 + 2);
        if ( v13 )
          return 1;
      }
      LODWORD(v7) = v7 + 12;
    }
    while ( HIDWORD(v7) != (_DWORD)v7 );
  }
  v14 = BlockEntity::getPosition(v5);
  v15 = BlockSource::getData(v6, (const BlockPos *)v14);
  if ( BlockSource::hasBlock(v6, v9) != 1 )
    return 0;
  v17 = (Block *)BlockSource::getBlock(v6, v9);
  if ( *((_BYTE *)v5 + 116) == 3 && *((_BYTE *)v5 + 102) )
    if ( Block::hasProperty((int)v17, v16, 0x1000000LL) || Block::hasProperty((int)v17, v18, 0x80000000LL) == 1 )
      v19 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
      v20 = 3 * (char)((0xFu >> (4 - (*v19 >> 32))) & (v15 >> (*v19 + 1 - (*v19 >> 32))));
      v21 = *(_DWORD *)v14
          + PistonBlock::ARM_DIRECTION_OFFSETS[3
                                             * (char)((0xFu >> (4 - (*v19 >> 32))) & (v15 >> (*v19 + 1 - (*v19 >> 32))))];
      v22 = 0;
      v13 = *(_DWORD *)v9 == v21;
      v23 = 0;
      if ( v13 )
        v23 = 0;
        if ( *((_DWORD *)v9 + 1) == *((_DWORD *)v14 + 1) + PistonBlock::ARM_DIRECTION_OFFSETS[v20 + 1]
          && *((_DWORD *)v9 + 2) == PistonBlock::ARM_DIRECTION_OFFSETS[v20 + 2] + *((_DWORD *)v14 + 2) )
        {
          v23 = 1;
        }
      if ( v8 != a5 )
        v22 = 1;
      return v22 | v23;
    if ( Block::hasBlockEntity(v17) == 1 )
      v26 = BlockSource::getBlockEntity(v6, v9);
      v27 = (*(int (**)(void))(*(_DWORD *)v26 + 44))();
      v24 = 0;
        v24 = 1;
      if ( !v27 )
        return v24;
    else if ( Block::hasProperty((int)v17, v25, 0x2000000LL) )
      return 1;
  if ( Block::isType(v17, (const Block *)Block::mAir) )
    return 1;
  if ( Block::hasProperty((int)v17, v28, 0x40000LL) == 1 )
    return PistonBlockEntity::_handleSlimeConnections(v5, v6, v9, v8, a5);
  if ( Block::hasProperty((int)v17, v29, 0x2000000LL) == 1 )
    v31 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
    if ( ((0xFu >> (4 - (*v31 >> 32))) & (unsigned __int8)(v15 >> (*v31 + 1 - (*v31 >> 32)))) == v8 )
      v32 = *((_QWORD *)v5 + 17);
      if ( (_DWORD)v32 == HIDWORD(v32) )
        std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
          (unsigned __int64 *)((char *)v5 + 132),
          (int)v9);
        return 1;
      *(_DWORD *)v32 = *(_DWORD *)v9;
      *(_DWORD *)(v32 + 4) = *((_DWORD *)v9 + 1);
      *(_DWORD *)(v32 + 8) = *((_DWORD *)v9 + 2);
      v33 = v32 + 12;
      goto LABEL_50;
    v35 = BlockSource::getBlock(v6, v9);
    v54 = *(_DWORD *)v9;
    v55 = *((_DWORD *)v9 + 1);
    v56 = *((_DWORD *)v9 + 2);
    if ( (*(int (**)(void))(*(_DWORD *)v35 + 304))() == 1
      && v54 == PistonBlock::ARM_DIRECTION_OFFSETS[3 * Facing::OPPOSITE_FACING[v8]] + *(_DWORD *)v9 )
      v36 = &PistonBlock::ARM_DIRECTION_OFFSETS[3 * Facing::OPPOSITE_FACING[v8]];
      v37 = *((_DWORD *)v9 + 1);
      v38 = v36[1] + v37;
      v39 = v55 == v38;
      if ( v55 == v38 )
        v38 = *((_DWORD *)v9 + 2);
        v39 = v56 == v36[2] + v38;
      if ( v39 )
        v40 = *((_QWORD *)v5 + 17);
        if ( (_DWORD)v40 != HIDWORD(v40) )
          *(_DWORD *)v40 = *(_DWORD *)v9;
          *(_DWORD *)(v40 + 4) = v37;
          *(_DWORD *)(v40 + 8) = v38;
          v33 = v40 + 12;
LABEL_50:
          *((_DWORD *)v5 + 34) = v33;
  v24 = 0;
  if ( Block::hasProperty((int)v17, v30, 0x1000000LL) == 1 )
    if ( v8 != a5 )
      v24 = 1;
  else
    if ( Block::hasProperty((int)v17, v34, 0x4000000LL) != 1 )
      goto LABEL_85;
    v41 = BlockSource::getBlockEntity(v6, v9);
    if ( !v41 )
    v24 = 0;
    if ( (*(int (**)(void))(*(_DWORD *)v41 + 44))() == 1 )
LABEL_85:
      v42 = *((_QWORD *)v5 + 15) >> 32;
      v43 = *((_QWORD *)v5 + 15);
      if ( v43 == v42 )
LABEL_64:
        if ( v42 == *((_DWORD *)v5 + 32) )
          std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
            (unsigned __int64 *)v5 + 15,
            (int)v9);
        else
          *(_DWORD *)v42 = *(_DWORD *)v9;
          *(_DWORD *)(v42 + 4) = *((_DWORD *)v9 + 1);
          *(_DWORD *)(v42 + 8) = *((_DWORD *)v9 + 2);
          *((_DWORD *)v5 + 31) = v42 + 12;
        v54 = 0;
        v55 = 0;
        v56 = 0;
        if ( !(*(int (__fastcall **)(Block *, BlockSource *, const BlockPos *))(*(_DWORD *)v17 + 184))(v17, v6, v9)
          && (*(int (__fastcall **)(Block *, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v17 + 260))(
               v17,
               v6,
               v9,
               &v54) == 1
          && !PistonBlockEntity::_attachedBlockWalker(v5, v6, (const BlockPos *)&v54, v8, a5) )
          return 0;
        v47 = *((_DWORD *)v9 + 1);
        v48 = *((_DWORD *)v9 + 2);
        v49 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[3 * a5 + 1];
        v51 = PistonBlock::ARM_DIRECTION_OFFSETS[3 * a5] + *(_DWORD *)v9;
        v52 = v49 + v47;
        v53 = HIDWORD(v49) + v48;
        if ( (signed int)v49 + v47 < 0
          || (signed int)v49 + v47 >= *((_WORD *)v6 + 12)
          || !PistonBlockEntity::_attachedBlockWalker(v5, v6, (const BlockPos *)&v51, a5, a5) )
        v42 = *((_QWORD *)v5 + 15) >> 32;
        v43 = *((_QWORD *)v5 + 15);
      else
        v44 = *(_DWORD *)v9;
        v45 = *((_QWORD *)v5 + 15);
        while ( 1 )
          v46 = *(_DWORD *)v45 == v44;
          if ( *(_DWORD *)v45 == v44 )
            v46 = *(_DWORD *)(v45 + 4) == *((_DWORD *)v9 + 1);
          if ( v46 && *(_DWORD *)(v45 + 8) == *((_DWORD *)v9 + 2) )
            break;
          v45 += 12;
          if ( v42 == v45 )
            goto LABEL_64;
      if ( (unsigned int)(-1431655765 * ((v42 - v43) >> 2)) < 0xD )
  return v24;
}


signed int __fastcall PistonBlockEntity::isExpanded(PistonBlockEntity *this)
{
  PistonBlockEntity *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( *((_BYTE *)v1 + 115) == 2 && *((_BYTE *)v1 + 116) == 2 )
    result = 1;
  return result;
}


signed int __fastcall PistonBlockEntity::save(PistonBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  PistonBlockEntity *v3; // r5@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r6@7
  __int64 v10; // r10@7
  int v11; // r0@8
  int v12; // r0@10
  int v13; // r4@12
  int v14; // r0@12
  void *v15; // r0@17
  void *v16; // r6@18
  int v17; // r8@18
  int v18; // r9@18
  int v19; // r0@19
  int v20; // r0@21
  int v21; // r4@23
  int v22; // r0@23
  void *v23; // r0@28
  signed int result; // r0@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  unsigned int *v33; // r2@47
  signed int v34; // r1@49
  unsigned int *v35; // r2@51
  signed int v36; // r1@53
  unsigned int *v37; // r2@55
  signed int v38; // r1@57
  int v39; // [sp+4h] [bp-9Ch]@7
  void *v40; // [sp+8h] [bp-98h]@26
  int v41; // [sp+10h] [bp-90h]@26
  int v42; // [sp+14h] [bp-8Ch]@23
  int v43; // [sp+18h] [bp-88h]@23
  int v44; // [sp+1Ch] [bp-84h]@21
  int v45; // [sp+20h] [bp-80h]@21
  int v46; // [sp+24h] [bp-7Ch]@19
  int v47; // [sp+28h] [bp-78h]@19
  void *v48; // [sp+2Ch] [bp-74h]@15
  int v49; // [sp+34h] [bp-6Ch]@15
  int v50; // [sp+38h] [bp-68h]@12
  int v51; // [sp+3Ch] [bp-64h]@12
  int v52; // [sp+40h] [bp-60h]@10
  int v53; // [sp+44h] [bp-5Ch]@10
  int v54; // [sp+48h] [bp-58h]@8
  int v55; // [sp+4Ch] [bp-54h]@8
  int v56; // [sp+54h] [bp-4Ch]@6
  int v57; // [sp+5Ch] [bp-44h]@5
  int v58; // [sp+64h] [bp-3Ch]@4
  int v59; // [sp+6Ch] [bp-34h]@3
  int v60; // [sp+74h] [bp-2Ch]@2

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v60, "Progress");
    CompoundTag::putFloat((int)v2, (const void **)&v60, *((_DWORD *)v3 + 26));
    v4 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v60 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    sub_21E94B4((void **)&v59, "LastProgress");
    CompoundTag::putFloat((int)v2, (const void **)&v59, *((_DWORD *)v3 + 27));
    v5 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v59 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    sub_21E94B4((void **)&v58, "State");
    CompoundTag::putByte((int)v2, (const void **)&v58, *((_BYTE *)v3 + 115));
    v6 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v58 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v57, "NewState");
    CompoundTag::putByte((int)v2, (const void **)&v57, *((_BYTE *)v3 + 116));
    v7 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v57 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v56, "Sticky");
    CompoundTag::putBoolean((int)v2, (const void **)&v56, *((_BYTE *)v3 + 102));
    v8 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v56 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v39 = (int)v2;
    v9 = operator new(0x14u);
    ListTag::ListTag((int)v9);
    v10 = *((_QWORD *)v3 + 15);
    if ( (_DWORD)v10 != HIDWORD(v10) )
      do
        std::make_unique<IntTag,char const(&)[1],int const&>(&v54, (const char *)&unk_257BC67, (int *)v10);
        v11 = v54;
        v54 = 0;
        v55 = v11;
        ListTag::add((int)v9, &v55);
        if ( v55 )
          (*(void (**)(void))(*(_DWORD *)v55 + 4))();
        v55 = 0;
        std::make_unique<IntTag,char const(&)[1],int const&>(&v52, (const char *)&unk_257BC67, (int *)(v10 + 4));
        v12 = v52;
        v52 = 0;
        v53 = v12;
        ListTag::add((int)v9, &v53);
        if ( v53 )
          (*(void (**)(void))(*(_DWORD *)v53 + 4))();
        v13 = v10 + 8;
        v53 = 0;
        std::make_unique<IntTag,char const(&)[1],int const&>(&v50, (const char *)&unk_257BC67, (int *)(v10 + 8));
        v14 = v50;
        v50 = 0;
        v51 = v14;
        ListTag::add((int)v9, &v51);
        if ( v51 )
          (*(void (**)(void))(*(_DWORD *)v51 + 4))();
        LODWORD(v10) = v10 + 12;
        v51 = 0;
      while ( v13 + 4 != HIDWORD(v10) );
    sub_21E94B4((void **)&v49, "AttachedBlocks");
    v48 = v9;
    CompoundTag::put(v39, (const void **)&v49, (int *)&v48);
    if ( v48 )
      (*(void (**)(void))(*(_DWORD *)v48 + 4))();
    v48 = 0;
    v15 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v49 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = operator new(0x14u);
    ListTag::ListTag((int)v16);
    v17 = *(_QWORD *)((char *)v3 + 132) >> 32;
    v18 = *(_QWORD *)((char *)v3 + 132);
    if ( v18 != v17 )
        std::make_unique<IntTag,char const(&)[1],int const&>(&v46, (const char *)&unk_257BC67, (int *)v18);
        v19 = v46;
        v46 = 0;
        v47 = v19;
        ListTag::add((int)v16, &v47);
        if ( v47 )
          (*(void (**)(void))(*(_DWORD *)v47 + 4))();
        v47 = 0;
        std::make_unique<IntTag,char const(&)[1],int const&>(&v44, (const char *)&unk_257BC67, (int *)(v18 + 4));
        v20 = v44;
        v44 = 0;
        v45 = v20;
        ListTag::add((int)v16, &v45);
        if ( v45 )
          (*(void (**)(void))(*(_DWORD *)v45 + 4))();
        v21 = v18 + 8;
        v45 = 0;
        std::make_unique<IntTag,char const(&)[1],int const&>(&v42, (const char *)&unk_257BC67, (int *)(v18 + 8));
        v22 = v42;
        v42 = 0;
        v43 = v22;
        ListTag::add((int)v16, &v43);
        if ( v43 )
          (*(void (**)(void))(*(_DWORD *)v43 + 4))();
        v18 += 12;
        v43 = 0;
      while ( v21 + 4 != v17 );
    sub_21E94B4((void **)&v41, "BreakBlocks");
    v40 = v16;
    CompoundTag::put(v39, (const void **)&v41, (int *)&v40);
    if ( v40 )
      (*(void (**)(void))(*(_DWORD *)v40 + 4))();
    v40 = 0;
    v23 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v41 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall PistonBlockEntity::_sortAttachedBlocks(PistonBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  PistonBlockEntity *v3; // r4@1
  char *v4; // r0@1
  unsigned int v5; // r5@1
  unsigned __int64 *v6; // r0@1
  int v7; // r0@1
  __int64 v12; // kr00_8@6
  int v13; // r10@8
  int v14; // r9@9
  float *v15; // r0@9
  int v16; // r4@9
  __int64 v17; // kr08_8@10
  int v18; // r8@10
  int v19; // r6@10
  int v20; // r2@11
  int v21; // r3@11
  float v22; // [sp+8h] [bp-48h]@1
  int v25; // [sp+14h] [bp-3Ch]@11
  int v26; // [sp+18h] [bp-38h]@11
  int v27; // [sp+1Ch] [bp-34h]@11
  float v28; // [sp+20h] [bp-30h]@9

  v2 = a2;
  v3 = this;
  v4 = BlockEntity::getPosition(this);
  v5 = BlockSource::getData(v2, (const BlockPos *)v4);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  Vec3::Vec3(
    (int)&v22,
    (int)&PistonBlock::ARM_DIRECTION_OFFSETS[3
                                           * ((0xFu >> (4 - (*v6 >> 32))) & (unsigned __int8)(v5 >> (*v6 + 1 - (*v6 >> 32))))]);
  v7 = *((_BYTE *)v3 + 116);
  _ZF = v7 == 3;
  if ( v7 != 3 )
    _ZF = v7 == 0;
  if ( _ZF )
  {
    __asm
    {
      VLDR            S0, [SP,#0x50+var_48]
      VLDR            S2, [SP,#0x50+var_44]
      VLDR            S4, [SP,#0x50+var_40]
      VNEG.F32        S0, S0
      VNEG.F32        S2, S2
      VNEG.F32        S4, S4
      VSTR            S0, [SP,#0x50+var_48]
      VSTR            S2, [SP,#0x50+var_44]
      VSTR            S4, [SP,#0x50+var_40]
    }
  }
  v12 = *((_QWORD *)v3 + 15);
  if ( (_DWORD)v12 != HIDWORD(v12) )
    sub_18B46E0(v12, HIDWORD(v12), 2 * (31 - __clz(-1431655765 * ((HIDWORD(v12) - (signed int)v12) >> 2))), (int)&v22);
    if ( HIDWORD(v12) - (signed int)v12 < 193 )
      sub_18B4D8A(v12, SHIDWORD(v12), (int)&v22);
    else
      v13 = v12 + 192;
      sub_18B4D8A(v12, v12 + 192, (int)&v22);
      if ( (_DWORD)v12 + 192 != HIDWORD(v12) )
      {
        v14 = v12 + 180;
        v15 = &v28;
        v16 = v12 + 192;
        do
        {
          v17 = *(_QWORD *)v13;
          v18 = v14;
          v19 = *(_DWORD *)(v13 + 8);
          while ( 1 )
          {
            v20 = *(_DWORD *)(v18 + 4);
            v21 = *(_DWORD *)(v18 + 8);
            v25 = v17 - *(_DWORD *)v18;
            v26 = HIDWORD(v17) - v20;
            v27 = v19 - v21;
            Vec3::Vec3((int)v15, (int)&v25);
            __asm
            {
              VLDR            S0, [SP,#0x50+var_48]
              VLDR            S6, [SP,#0x50+var_30]
              VLDR            S2, [SP,#0x50+var_44]
              VLDR            S8, [SP,#0x50+var_2C]
              VMUL.F32        S0, S6, S0
              VLDR            S4, [SP,#0x50+var_40]
              VMUL.F32        S2, S8, S2
              VLDR            S10, [SP,#0x50+var_28]
              VMUL.F32        S4, S10, S4
              VADD.F32        S0, S2, S0
              VADD.F32        S0, S0, S4
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              break;
            *(_DWORD *)v16 = *(_DWORD *)v18;
            *(_DWORD *)(v16 + 4) = *(_DWORD *)(v18 + 4);
            *(_DWORD *)(v16 + 8) = *(_DWORD *)(v18 + 8);
            v16 = v18;
            v18 -= 12;
          }
          *(_QWORD *)v16 = v17;
          v13 += 12;
          v14 += 12;
          *(_DWORD *)(v16 + 8) = v19;
          v16 = v13;
        }
        while ( v13 != HIDWORD(v12) );
      }
}


void __fastcall PistonBlockEntity::onUpdatePacket(PistonBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  PistonBlockEntity::onUpdatePacket(this, a2, a3);
}


void __fastcall PistonBlockEntity::tick(PistonBlockEntity *this, BlockSource *a2)
{
  BlockSource *v3; // r9@1
  char *v4; // r6@2
  char *v5; // r0@2
  unsigned int v6; // r7@2
  unsigned __int64 *v7; // r0@2
  int v8; // r2@2
  int v9; // r3@2
  int v10; // r6@2
  int v11; // r0@2
  __int64 v12; // kr00_8@2
  int v13; // r0@3
  char *v14; // r0@4
  int v15; // r0@6
  int v17; // r0@12
  Dimension *v18; // r0@14
  CircuitSystem *v19; // r6@14
  char *v20; // r0@14
  int v21; // r6@20
  char *v22; // r0@20
  char *v23; // r7@20
  int v24; // r1@20
  Level *v25; // r0@20
  int v26; // r2@20
  int v27; // r6@21
  char *v28; // r0@21
  char *v29; // r0@23
  unsigned int v30; // r6@23
  unsigned __int64 *v31; // r0@23
  int *v32; // r5@23
  int v33; // r0@23
  int v34; // r2@23
  _DWORD *v35; // r0@23
  int v36; // r1@23
  int v37; // r2@23
  int v38; // r0@23
  float *v42; // r1@23
  float *v43; // r3@23
  float *v44; // r4@23
  float *v45; // r7@23
  int *v46; // r6@23
  int v47; // r12@25
  int v48; // r7@27
  int v49; // r2@33
  int v50; // r1@33
  Level *v55; // r0@35
  Dimension *v56; // r0@36
  Dimension *v57; // r0@37
  CircuitSystem *v58; // r6@37
  char *v59; // r0@37
  int v60; // r0@37
  int v61; // r1@38
  bool v62; // zf@39
  char v63; // r0@43
  bool v64; // zf@44
  char *v65; // r0@50
  _QWORD *v66; // r0@50
  _QWORD *v67; // r7@50
  Entity **v68; // r6@50
  int v69; // r1@50 OVERLAPPED
  int v70; // r2@50 OVERLAPPED
  signed int v71; // r0@50
  Entity **v72; // r0@52
  signed int v73; // r7@53
  int v74; // r1@55
  signed int v75; // r7@55
  Dimension *v76; // r0@56
  signed int v77; // r0@56
  bool v78; // zf@58
  int v79; // r7@62
  void (__fastcall *v80)(int); // r5@62
  bool v81; // zf@65
  int v82; // r5@70
  Entity **v83; // r7@70
  ProjectileComponent *v84; // r0@71
  int v85; // r0@74
  char *v86; // r0@75
  char *v87; // r7@78
  unsigned int v88; // r5@78
  unsigned __int64 *v89; // r0@78
  int v90; // r3@78
  int v91; // r4@78
  int v92; // r7@78
  int v93; // r0@78
  __int64 v94; // kr08_8@78
  char *v95; // r0@78
  int v96; // r7@79
  void (__fastcall *v97)(int); // r5@79
  char *v98; // r0@82
  char *v99; // r8@84
  unsigned int v100; // r10@84
  unsigned __int64 *v101; // r0@84
  int v102; // r4@84
  int v103; // lr@84
  int v104; // r0@84
  __int64 v105; // kr10_8@84
  char *v106; // r0@84
  int v107; // r5@85
  Entity **v108; // r7@85
  ProjectileComponent *v109; // r0@86
  int v110; // r7@103
  void (__fastcall *v111)(int); // r5@103
  int v112; // r7@107
  void (__fastcall *v113)(int); // r5@107
  signed int v114; // r0@111
  int v115; // [sp+14h] [bp-104h]@107
  int v116; // [sp+18h] [bp-100h]@103
  int v117; // [sp+1Ch] [bp-FCh]@62
  int v118; // [sp+20h] [bp-F8h]@79
  char v119; // [sp+24h] [bp-F4h]@84
  int v120; // [sp+28h] [bp-F0h]@84
  int v121; // [sp+2Ch] [bp-ECh]@84
  int v122; // [sp+30h] [bp-E8h]@84
  char v123; // [sp+34h] [bp-E4h]@82
  unsigned __int8 v124; // [sp+35h] [bp-E3h]@84
  char v125; // [sp+38h] [bp-E0h]@78
  unsigned __int8 v126; // [sp+39h] [bp-DFh]@78
  int v127; // [sp+3Ch] [bp-DCh]@78
  int v128; // [sp+40h] [bp-D8h]@78
  int v129; // [sp+44h] [bp-D4h]@78
  char v130; // [sp+48h] [bp-D0h]@75
  unsigned __int8 v131; // [sp+49h] [bp-CFh]@78
  float v132; // [sp+4Ch] [bp-CCh]@50
  float v135; // [sp+58h] [bp-C0h]@50
  int v138; // [sp+64h] [bp-B4h]@2
  int v139; // [sp+68h] [bp-B0h]@2
  int v140; // [sp+6Ch] [bp-ACh]@2
  int v141; // [sp+80h] [bp-98h]@23
  int v142; // [sp+84h] [bp-94h]@23
  int v143; // [sp+88h] [bp-90h]@23
  float v144; // [sp+8Ch] [bp-8Ch]@23
  float v147; // [sp+98h] [bp-80h]@23
  float v148; // [sp+9Ch] [bp-7Ch]@23
  float v149; // [sp+A0h] [bp-78h]@23
  int v150; // [sp+A4h] [bp-74h]@35
  int v151; // [sp+A8h] [bp-70h]@35
  int v152; // [sp+ACh] [bp-6Ch]@35
  int v153; // [sp+B0h] [bp-68h]@35
  int v154; // [sp+B4h] [bp-64h]@35
  int v155; // [sp+B8h] [bp-60h]@35
  char v156; // [sp+BCh] [bp-5Ch]@35
  int v157; // [sp+C0h] [bp-58h]@23
  int v158; // [sp+C4h] [bp-54h]@23
  int v159; // [sp+C8h] [bp-50h]@23
  char v160; // [sp+CCh] [bp-4Ch]@21
  char v161; // [sp+D8h] [bp-40h]@20
  char v162; // [sp+E4h] [bp-34h]@10
  int v163; // [sp+E8h] [bp-30h]@4
  int v164; // [sp+ECh] [bp-2Ch]@4
  int v165; // [sp+F0h] [bp-28h]@4

  _R11 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 117) )
  {
    v4 = BlockEntity::getPosition(this);
    v5 = BlockEntity::getPosition(_R11);
    v6 = BlockSource::getData(v3, (const BlockPos *)v5);
    v7 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
    v8 = *(_DWORD *)v4;
    v9 = *((_DWORD *)v4 + 1);
    v10 = *((_DWORD *)v4 + 2);
    v11 = 3 * (char)((0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32))));
    v12 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v11 + 1];
    v138 = PistonBlock::ARM_DIRECTION_OFFSETS[v11] + v8;
    v139 = v12 + v9;
    v140 = HIDWORD(v12) + v10;
    if ( BlockSource::hasBlock(v3, (const BlockPos *)&v138) == 1 )
    {
      v13 = BlockSource::getBlock(v3, (const BlockPos *)&v138);
      if ( *(_BYTE *)(v13 + 4) == *(_BYTE *)(Block::mPistonArm + 4) )
      {
        v163 = 0;
        v164 = 0;
        v165 = 0;
        (*(void (**)(void))(*(_DWORD *)v13 + 260))();
        v14 = BlockEntity::getPosition(_R11);
        if ( v163 == *(_DWORD *)v14 && v164 == *((_DWORD *)v14 + 1) )
        {
          v15 = *((_DWORD *)v14 + 2);
          _ZF = v165 == v15;
          if ( v165 == v15 )
            _ZF = *((_BYTE *)_R11 + 115) == 0;
          if ( _ZF )
          {
            v162 = *(_BYTE *)(Block::mAir + 4);
            BlockSource::setBlock((int)v3, (BlockPos *)&v138, &v162, 3);
          }
        }
      }
      *((_BYTE *)_R11 + 117) = 0;
    }
    return;
  }
  *((_DWORD *)this + 27) = *((_DWORD *)this + 26);
  v17 = *((_BYTE *)this + 115);
  if ( *((_BYTE *)_R11 + 116) == 1 && 1 != v17 )
    v18 = (Dimension *)BlockSource::getDimension(a2);
    v19 = (CircuitSystem *)Dimension::getCircuitSystem(v18);
    v20 = BlockEntity::getPosition(_R11);
    if ( !CircuitSystem::getStrength(v19, (const BlockPos *)v20) )
      *((_BYTE *)_R11 + 116) = *((_BYTE *)_R11 + 115);
      BlockEntity::setMovable(_R11, 1);
    v17 = *((_BYTE *)_R11 + 115);
  if ( *((_BYTE *)_R11 + 114) != v17 )
    if ( v17 == 3 )
      v27 = BlockSource::getLevel(v3);
      v28 = BlockEntity::getPosition(_R11);
      v23 = &v160;
      Vec3::Vec3((int)&v160, (int)v28);
      v24 = (int)v3;
      v25 = (Level *)v27;
      v26 = 79;
    else
      if ( v17 != 1 )
        goto LABEL_23;
      v21 = BlockSource::getLevel(v3);
      v22 = BlockEntity::getPosition(_R11);
      v23 = &v161;
      Vec3::Vec3((int)&v161, (int)v22);
      v25 = (Level *)v21;
      v26 = 80;
    Level::broadcastSoundEvent(v25, v24, v26, (int)v23, -1, 1, 0, 0);
LABEL_23:
  *((_BYTE *)_R11 + 114) = *((_BYTE *)_R11 + 115);
  v29 = BlockEntity::getPosition(_R11);
  v30 = BlockSource::getData(v3, (const BlockPos *)v29);
  v31 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v32 = (int *)&v147;
  v33 = 3 * (char)((0xFu >> (4 - (*v31 >> 32))) & (v30 >> (*v31 + 1 - (*v31 >> 32))));
  v34 = PistonBlock::ARM_DIRECTION_OFFSETS[v33];
  v35 = &PistonBlock::ARM_DIRECTION_OFFSETS[v33];
  v157 = v34;
  v158 = v35[1];
  v159 = v35[2];
  Vec3::Vec3((int)&v147, (int)_R11 + 32);
  v36 = *((_DWORD *)_R11 + 9);
  v37 = *((_DWORD *)_R11 + 10);
  v141 = *((_DWORD *)_R11 + 8) + v157;
  v142 = v158 + v36;
  v143 = v159 + v37;
  Vec3::Vec3((int)&v144, (int)&v141);
  __asm { VLDR            S4, [SP,#0x118+var_78] }
  v42 = &v149;
  __asm
    VLDR            S10, [SP,#0x118+var_84]
    VLDR            S2, [SP,#0x118+var_7C]
  v43 = &v149;
    VCMPE.F32       S10, S4
    VLDR            S8, [SP,#0x118+var_88]
    VMRS            APSR_nzcv, FPSCR
  v44 = &v148;
    VCMPE.F32       S8, S2
    VLDR            S0, [SP,#0x118+var_80]
    VLDR            S6, [SP,#0x118+var_8C]
  v45 = &v148;
  v46 = (int *)&v147;
  if ( _NF ^ _VF )
    v43 = (float *)(v38 + 8);
  __asm { VMRS            APSR_nzcv, FPSCR }
  v47 = *(_DWORD *)v43;
  __asm { VCMPE.F32       S6, S0 }
    v45 = (float *)(v38 + 4);
    VCMPE.F32       S2, S8
  v48 = *(_DWORD *)v45;
    v46 = (int *)v38;
    VCMPE.F32       S4, S10
  v138 = *v46;
  v139 = v48;
  v140 = v47;
    v44 = (float *)(v38 + 4);
    VCMPE.F32       S0, S6
    v42 = (float *)(v38 + 8);
  v49 = *(_DWORD *)v44;
  v50 = *(_DWORD *)v42;
    v32 = (int *)v38;
  v163 = *v32;
  v164 = v49;
  v165 = v50;
  AABB::AABB((int)&v150, (int)&v138, (int)&v163);
  *((_DWORD *)_R11 + 11) = v150;
  *((_DWORD *)_R11 + 12) = v151;
  *((_DWORD *)_R11 + 13) = v152;
  _R0 = v153;
  *((_DWORD *)_R11 + 14) = v153;
  _R2 = v154;
  *((_DWORD *)_R11 + 15) = v154;
  __asm { VMOV            S0, R0 }
  _R3 = v155;
  *((_DWORD *)_R11 + 16) = v155;
  _R1 = &Vec3::ONE;
  *((_BYTE *)_R11 + 68) = v156;
    VLDR            S2, [R1]
    VADD.F32        S0, S0, S2
    VMOV            S2, R2
    VSTR            S0, [R11,#0x38]
    VLDR            S0, [R1,#4]
    VADD.F32        S0, S2, S0
    VMOV            S2, R3
    VSTR            S0, [R11,#0x3C]
    VLDR            S0, [R1,#8]
    VSTR            S0, [R11,#0x40]
  v55 = (Level *)BlockSource::getLevel(v3);
  if ( !Level::isClientSide(v55) )
    v56 = (Dimension *)BlockSource::getDimension(v3);
    if ( Dimension::isRedstoneTick(v56) != 1 )
      goto LABEL_50;
    v57 = (Dimension *)BlockSource::getDimension(v3);
    v58 = (CircuitSystem *)Dimension::getCircuitSystem(v57);
    v59 = BlockEntity::getPosition(_R11);
    v138 = *(_DWORD *)v59;
    v139 = *((_DWORD *)v59 + 1);
    v140 = *((_DWORD *)v59 + 2);
    v60 = CircuitSystem::getStrength(v58, (const BlockPos *)&v138);
    if ( v60 == -1 )
    v61 = *((_BYTE *)_R11 + 115);
    if ( v60 < 1 )
      v64 = v61 == 2;
      if ( v61 == 2 )
        v64 = *((_BYTE *)_R11 + 116) == 2;
      if ( !v64 )
LABEL_50:
        AABB::AABB((int)&v138, (int)&Vec3::ZERO, (int)&Vec3::ONE);
        v65 = BlockEntity::getPosition(_R11);
        Vec3::Vec3((int)&v135, (int)v65);
        Vec3::Vec3((int)&v132, (int)&v157);
        __asm
          VLDR            S0, [SP,#0x118+var_CC]
          VLDR            S6, [R11,#0x68]
          VLDR            S2, [SP,#0x118+var_C8]
          VLDR            S4, [SP,#0x118+var_C4]
          VMUL.F32        S0, S0, S6
          VMUL.F32        S2, S2, S6
          VLDR            S8, [SP,#0x118+var_BC]
          VMUL.F32        S4, S4, S6
          VLDR            S6, [SP,#0x118+var_C0]
          VLDR            S10, [SP,#0x118+var_B8]
          VADD.F32        S0, S6, S0
          VADD.F32        S2, S8, S2
          VADD.F32        S4, S10, S4
          VSTR            S0, [SP,#0x118+var_30]
          VSTR            S2, [SP,#0x118+var_2C]
          VSTR            S4, [SP,#0x118+var_28]
        AABB::move((AABB *)&v138, (const Vec3 *)&v163);
        v66 = (_QWORD *)BlockSource::fetchEntities((int)v3, 4194384, (int)&v138, 0);
        v67 = v66;
        v68 = 0;
        *(_QWORD *)&v69 = *v66;
        v71 = v70 - v69;
        if ( 0 != (v70 - v69) >> 2 )
          if ( (unsigned int)(v71 >> 2) >= 0x40000000 )
            sub_21E57F4();
          v72 = (Entity **)operator new(v71);
          *(_QWORD *)&v69 = *v67;
          v68 = v72;
        v73 = v70 - v69;
          _aeabi_memmove4(v68, v69);
        v74 = *((_BYTE *)_R11 + 116);
        v75 = v73 >> 2;
        if ( v74 == *((_BYTE *)_R11 + 115)
          || (v76 = (Dimension *)BlockSource::getDimension(v3),
              v77 = Dimension::isRedstoneTick(v76),
              v74 = *((_BYTE *)_R11 + 116),
              v77 != 1) )
          v81 = v74 == 2;
          if ( v74 == 2 )
            v81 = *((_BYTE *)_R11 + 114) == 2;
          if ( v81 && v75 )
            v82 = 4 * v75;
            v83 = v68;
            do
            {
              v84 = (ProjectileComponent *)Entity::getProjectileComponent(*v83);
              if ( v84 )
                ProjectileComponent::setInGround(v84, 1);
              v82 -= 4;
              ++v83;
            }
            while ( v82 );
          v85 = *((_BYTE *)_R11 + 115);
        else
          switch ( v74 )
            case 0:
              BlockEntity::setMovable(_R11, 1);
              v78 = *((_BYTE *)_R11 + 102) == 0;
              if ( *((_BYTE *)_R11 + 102) )
                v78 = (unsigned int)*((_QWORD *)_R11 + 15) == *((_QWORD *)_R11 + 15) >> 32;
              if ( !v78 )
                PistonBlockEntity::_spawnBlocks(_R11, v3);
              *((_BYTE *)_R11 + 115) = *((_BYTE *)_R11 + 116);
              v79 = BlockSource::getDimension(v3);
              v80 = *(void (__fastcall **)(int))(*(_DWORD *)v79 + 212);
              (*(void (__fastcall **)(int *, PistonBlockEntity *, BlockSource *))(*(_DWORD *)_R11 + 52))(
                &v117,
                _R11,
                v3);
              *(_DWORD *)(v117 + 8) = 1;
              v80(v79);
              if ( v117 )
                (*(void (**)(void))(*(_DWORD *)v117 + 4))();
              v117 = 0;
              goto def_18B2F70;
            case 1:
              v86 = BlockEntity::getPosition(_R11);
              BlockSource::getBlockAndData((BlockSource *)&v130, v3, (int)v86);
              if ( *(_BYTE *)(FullBlock::getBlock((FullBlock *)&v130) + 4) != *(_BYTE *)(Block::mPiston + 4)
                && *(_BYTE *)(FullBlock::getBlock((FullBlock *)&v130) + 4) != *(_BYTE *)(Block::mStickyPiston + 4) )
              {
                goto def_18B2F70;
              }
              BlockEntity::setMovable(_R11, 0);
              if ( !PistonBlockEntity::_checkAttachedBlocks(_R11, v3) )
                BlockEntity::setMovable(_R11, 1);
                *((_DWORD *)_R11 + 31) = *((_DWORD *)_R11 + 30);
                goto LABEL_116;
              PistonBlockEntity::_spawnMovingBlocks(_R11, v3);
              v87 = BlockEntity::getPosition(_R11);
              v88 = v131;
              v89 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
              v90 = *(_DWORD *)v87;
              v91 = *((_DWORD *)v87 + 1);
              v92 = *((_DWORD *)v87 + 2);
              v93 = 3 * (char)((0xFu >> (4 - (*v89 >> 32))) & (v88 >> (*v89 + 1 - (*v89 >> 32))));
              v94 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v93 + 1];
              v127 = PistonBlock::ARM_DIRECTION_OFFSETS[v93] + v90;
              v128 = v94 + v91;
              v129 = HIDWORD(v94) + v92;
              v95 = BlockEntity::getPosition(_R11);
              BlockSource::updateNeighborsAt(v3, (const BlockPos *)v95);
              v125 = *(_BYTE *)(Block::mPistonArm + 4);
              v126 = v131;
              BlockSource::setBlockAndData((int)v3, (BlockPos *)&v127, (int)&v125, 3, 0);
def_18B2F70:
              v85 = *((_BYTE *)_R11 + 116);
              *((_BYTE *)_R11 + 115) = v85;
              break;
            case 2:
              PistonBlockEntity::_spawnBlocks(_R11, v3);
              v96 = BlockSource::getDimension(v3);
              v97 = *(void (__fastcall **)(int))(*(_DWORD *)v96 + 212);
                &v118,
              *(_DWORD *)(v118 + 8) = 1;
              v97(v96);
              if ( v118 )
                (*(void (**)(void))(*(_DWORD *)v118 + 4))();
              v118 = 0;
            case 3:
              v98 = BlockEntity::getPosition(_R11);
              BlockSource::getBlockAndData((BlockSource *)&v123, v3, (int)v98);
              if ( *(_BYTE *)(FullBlock::getBlock((FullBlock *)&v123) + 4) == *(_BYTE *)(Block::mPiston + 4)
                || *(_BYTE *)(FullBlock::getBlock((FullBlock *)&v123) + 4) == *(_BYTE *)(Block::mStickyPiston + 4) )
                *((_BYTE *)_R11 + 115) = *((_BYTE *)_R11 + 116);
                v99 = BlockEntity::getPosition(_R11);
                v100 = v124;
                v101 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
                v102 = *((_DWORD *)v99 + 1);
                v103 = *((_DWORD *)v99 + 2);
                v104 = 3 * (char)((0xFu >> (4 - (*v101 >> 32))) & (v100 >> (*v101 + 1 - (*v101 >> 32))));
                v105 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v104 + 1];
                v120 = PistonBlock::ARM_DIRECTION_OFFSETS[v104] + *(_DWORD *)v99;
                v121 = v105 + v102;
                v122 = HIDWORD(v105) + v103;
                v106 = BlockEntity::getPosition(_R11);
                BlockSource::updateNeighborsAt(v3, (const BlockPos *)v106);
                v119 = *(_BYTE *)(Block::mAir + 4);
                BlockSource::setBlock((int)v3, (BlockPos *)&v120, &v119, 3);
                if ( v75 )
                {
                  v107 = 4 * v75;
                  v108 = v68;
                  do
                  {
                    v109 = (ProjectileComponent *)Entity::getProjectileComponent(*v108);
                    if ( v109 )
                      ProjectileComponent::setInGround(v109, 0);
                    v107 -= 4;
                    ++v108;
                  }
                  while ( v107 );
                }
                if ( *((_BYTE *)_R11 + 102) )
                  if ( PistonBlockEntity::_checkAttachedBlocks(_R11, v3) == 1 )
                    PistonBlockEntity::_spawnMovingBlocks(_R11, v3);
                  else
                    *((_DWORD *)_R11 + 31) = *((_DWORD *)_R11 + 30);
            default:
        if ( v85 == 3 )
          __asm
            VLDR            S0, [R11,#0x68]
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            *((_DWORD *)_R11 + 26) = 0;
            *((_BYTE *)_R11 + 116) = 0;
          else
            __asm
              VMOV.F32        S2, #-0.5
              VADD.F32        S0, S0, S2
              VSTR            S0, [R11,#0x68]
            if ( *((_BYTE *)_R11 + 102) )
              PistonBlockEntity::_moveCollidedEntities(_R11, v3);
          v112 = BlockSource::getDimension(v3);
          v113 = *(void (__fastcall **)(int))(*(_DWORD *)v112 + 212);
          (*(void (__fastcall **)(int *, _DWORD, _DWORD))(*(_DWORD *)_R11 + 52))(&v115, _R11, v3);
          *(_DWORD *)(v115 + 8) = 1;
          v113(v112);
          if ( v115 )
            (*(void (**)(void))(*(_DWORD *)v115 + 4))();
          v115 = 0;
          if ( v85 != 1 )
            goto LABEL_116;
            VMOV.F32        S2, #1.0
            VCMPE.F32       S0, S2
          if ( _NF ^ _VF )
              VMOV.F32        S2, #0.5
            PistonBlockEntity::_moveCollidedEntities(_R11, v3);
            *((_DWORD *)_R11 + 26) = 1065353216;
            *((_BYTE *)_R11 + 116) = 2;
          v110 = BlockSource::getDimension(v3);
          v111 = *(void (__fastcall **)(int))(*(_DWORD *)v110 + 212);
          (*(void (__fastcall **)(int *, _DWORD, _DWORD))(*(_DWORD *)_R11 + 52))(&v116, _R11, v3);
          *(_DWORD *)(v116 + 8) = 1;
          v111(v110);
          if ( v116 )
            (*(void (**)(void))(*(_DWORD *)v116 + 4))();
          v116 = 0;
          VMOV.F32        S2, #1.0
          VLDR            S0, [R11,#0x68]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          if ( !(_NF ^ _VF) )
LABEL_116:
            if ( v68 )
              operator delete(v68);
            return;
          v114 = 0;
          v114 = 1065353216;
        *((_DWORD *)_R11 + 26) = v114;
        goto LABEL_116;
      v63 = 3;
      v62 = v61 == 0;
      if ( !*((_BYTE *)_R11 + 115) )
        v62 = *((_BYTE *)_R11 + 116) == 0;
      if ( !v62 )
        goto LABEL_50;
      v63 = 1;
    *((_BYTE *)_R11 + 116) = v63;
    goto LABEL_50;
}


void __fastcall PistonBlockEntity::_moveCollidedEntitiesHelper(PistonBlockEntity *this, BlockSource *a2, const AABB *a3, const BlockPos *a4, Entity *a5, unsigned int a6)
{
  const BlockPos *v6; // r9@1
  PistonBlockEntity *v7; // r10@2
  char *v8; // r2@2
  int v9; // r5@2
  int v10; // r6@2
  int v11; // r7@2
  int v12; // r5@2
  int v13; // r6@2
  int v14; // r7@2
  char *v15; // r0@2
  char *v16; // r5@2
  int v17; // r1@2 OVERLAPPED
  int v18; // r2@2 OVERLAPPED
  char *v19; // r7@2
  signed int v20; // r0@2
  char *v21; // r0@4
  signed int v22; // r2@5
  unsigned int v23; // r6@5
  signed int v24; // r5@6
  int v25; // r10@6
  int v26; // r11@6
  int v27; // r5@8
  int v28; // r5@11
  const AABB *v29; // r0@12
  Entity *v30; // r8@13
  BlockSource *v31; // [sp+Ch] [bp-8Ch]@2
  PistonBlockEntity *v32; // [sp+10h] [bp-88h]@5
  char v33; // [sp+14h] [bp-84h]@13
  char v34; // [sp+1Ch] [bp-7Ch]@12
  int v35; // [sp+28h] [bp-70h]@11
  int v36; // [sp+2Ch] [bp-6Ch]@11
  int v37; // [sp+30h] [bp-68h]@11
  char v38; // [sp+34h] [bp-64h]@11
  int v39; // [sp+3Ch] [bp-5Ch]@12
  int v40; // [sp+40h] [bp-58h]@8
  int v41; // [sp+44h] [bp-54h]@8
  int v42; // [sp+48h] [bp-50h]@8
  char v43; // [sp+4Ch] [bp-4Ch]@8
  int v44; // [sp+54h] [bp-44h]@9
  int v45; // [sp+58h] [bp-40h]@2
  int v46; // [sp+5Ch] [bp-3Ch]@2
  int v47; // [sp+60h] [bp-38h]@2
  int v48; // [sp+64h] [bp-34h]@2
  int v49; // [sp+68h] [bp-30h]@2
  int v50; // [sp+6Ch] [bp-2Ch]@2
  int v51; // [sp+70h] [bp-28h]@2

  v6 = a4;
  if ( a6 <= 0xC )
  {
    v7 = this;
    v31 = a2;
    v9 = *(_DWORD *)a3;
    v10 = *((_DWORD *)a3 + 1);
    v11 = *((_DWORD *)a3 + 2);
    v8 = (char *)a3 + 12;
    v45 = v9;
    v46 = v10;
    v47 = v11;
    v12 = *((_DWORD *)v8 + 1);
    v13 = *((_DWORD *)v8 + 2);
    v14 = *((_DWORD *)v8 + 3);
    v48 = *(_DWORD *)v8;
    v49 = v12;
    v50 = v13;
    v51 = v14;
    v15 = BlockSource::fetchEntities(a2, a5, (const AABB *)&v45);
    v16 = v15;
    *(_QWORD *)&v17 = *(_QWORD *)v15;
    v19 = 0;
    v20 = v18 - v17;
    if ( (v18 - v17) >> 2 )
    {
      if ( (unsigned int)(v20 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v21 = (char *)operator new(v20);
      *(_QWORD *)&v17 = *(_QWORD *)v16;
      v19 = v21;
    }
    v22 = v18 - v17;
    v23 = a6;
    v32 = v7;
    if ( 0 != v22 >> 2 )
      v24 = v22 >> 2;
      _aeabi_memmove4(v19, v17);
      v25 = 4 * v24;
      v26 = 0;
      do
      {
        if ( (*(int (**)(void))(**(_DWORD **)&v19[v26] + 304))() == 1 )
        {
          v27 = *(_DWORD *)&v19[v26];
          Vec3::Vec3((int)&v40, (int)v6);
          AABB::axisInside((int)&v43, (int)&v45, v27 + 264, v40, v41, v42);
          if ( Entity::isControlledByLocalInstance(*(Entity **)&v19[v26]) == 1 )
            PistonBlockEntity::moveEntityLastProgress((int)v32, *(Entity **)&v19[v26], *(__int64 *)&v43, v44);
        }
        else if ( (*(int (**)(void))(**(_DWORD **)&v19[v26] + 488))() == 66 )
          v28 = *(_DWORD *)&v19[v26];
          Vec3::Vec3((int)&v35, (int)v6);
          AABB::axisInside((int)&v38, (int)&v45, v28 + 264, v35, v36, v37);
          {
            PistonBlockEntity::moveEntityLastProgress((int)v32, *(Entity **)&v19[v26], *(__int64 *)&v38, v39);
            Vec3::Vec3((int)&v34, (int)v6);
            v29 = (const AABB *)AABB::move((AABB *)&v45, (const Vec3 *)&v34);
            PistonBlockEntity::_moveCollidedEntitiesHelper(v32, v31, v29, v6, *(Entity **)&v19[v26], ++v23);
          }
        else
          v30 = *(Entity **)&v19[v26];
          EntityDamageSource::EntityDamageSource((int)&v33, 20);
          Entity::hurt(v30, (const EntityDamageSource *)&v33, 0, 1, 0);
          EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v33);
        v26 += 4;
      }
      while ( v25 != v26 );
    if ( v19 )
      operator delete(v19);
  }
}


void __fastcall PistonBlockEntity::_moveCollidedEntitiesHelper(PistonBlockEntity *this, BlockSource *a2, const AABB *a3, const BlockPos *a4, Entity *a5, unsigned int a6)
{
  PistonBlockEntity::_moveCollidedEntitiesHelper(this, a2, a3, a4, a5, a6);
}


void __fastcall PistonBlockEntity::_sortAttachedBlocks(PistonBlockEntity *this, BlockSource *a2)
{
  PistonBlockEntity::_sortAttachedBlocks(this, a2);
}


int __fastcall PistonBlockEntity::getProgress(PistonBlockEntity *this, float _R1)
{
  int result; // r0@3

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R0,#0x68]
    VMOV            S6, R1
    VLDR            S4, [R0,#0x6C]
    VSUB.F32        S2, S2, S4
    VCMPE.F32       S6, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S0 }
    VMUL.F32        S0, S2, S6
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  return result;
}


int __fastcall PistonBlockEntity::moveEntityLastProgress(int a1, Entity *a2, __int64 a3, int a4)
{
  int v4; // r10@1
  Entity *v5; // r5@1
  int v6; // r9@1
  Level *v7; // r0@1
  int result; // r0@1
  Dimension *v9; // r8@2
  Entity *v10; // r0@2
  int v11; // r3@2
  int v12; // r4@2
  int v13; // r6@2
  int v14; // r7@2
  int v15; // r4@2
  int v16; // r6@2
  int v17; // r7@2
  int v18; // [sp+0h] [bp-80h]@2
  void **v19; // [sp+20h] [bp-60h]@2
  int v20; // [sp+24h] [bp-5Ch]@2
  int v21; // [sp+28h] [bp-58h]@2
  char v22; // [sp+2Ch] [bp-54h]@2
  int v23; // [sp+30h] [bp-50h]@2
  int v24; // [sp+34h] [bp-4Ch]@2
  int v25; // [sp+38h] [bp-48h]@2
  int v26; // [sp+3Ch] [bp-44h]@2
  int v27; // [sp+40h] [bp-40h]@2
  int v28; // [sp+44h] [bp-3Ch]@2
  int v29; // [sp+48h] [bp-38h]@2
  int v30; // [sp+4Ch] [bp-34h]@2
  __int64 v31; // [sp+54h] [bp-2Ch]@1
  int v32; // [sp+5Ch] [bp-24h]@1

  v4 = a1;
  v31 = a3;
  v5 = a2;
  v32 = a4;
  v6 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 104) = *(_QWORD *)(a1 + 104) >> 32;
  (*(void (__fastcall **)(Entity *, __int64 *))(*(_DWORD *)v5 + 76))(v5, &v31);
  v7 = (Level *)Entity::getLevel(v5);
  result = Level::isClientSide(v7);
  if ( !result )
  {
    v9 = (Dimension *)Entity::getDimension(v5);
    v10 = MoveEntityPacketData::MoveEntityPacketData((Entity *)&v18, (int)v5);
    v20 = 2;
    v21 = 1;
    v22 = 0;
    v19 = &off_26E94A4;
    v11 = *(_DWORD *)v10;
    v12 = *((_DWORD *)v10 + 1);
    v13 = *((_DWORD *)v10 + 2);
    v14 = *((_DWORD *)v10 + 3);
    v10 = (Entity *)((char *)v10 + 16);
    v23 = v11;
    v24 = v12;
    v25 = v13;
    v26 = v14;
    v15 = *((_DWORD *)v10 + 1);
    v16 = *((_DWORD *)v10 + 2);
    v17 = *((_DWORD *)v10 + 3);
    v27 = *(_DWORD *)v10;
    v28 = v15;
    v29 = v16;
    v30 = v17;
    result = Dimension::sendPacketForEntity(v9, v5, (const Packet *)&v19, 0);
  }
  *(_DWORD *)(v4 + 104) = v6;
  return result;
}


signed int __fastcall PistonBlockEntity::isRetracting(PistonBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 115);
  result = 0;
  if ( v1 == 3 )
    result = 1;
  return result;
}


CompoundTag *__fastcall PistonBlockEntity::getUpdatePacket(PistonBlockEntity *this, BlockSource *a2)
{
  PistonBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
  v4 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v10, (int)&v9);
  v4[1] = 2;
  v4[2] = 1;
  v5 = (int)(v4 + 4);
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E97EC;
  v6 = *((_DWORD *)v3 + 9);
  v7 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


signed int __fastcall PistonBlockEntity::_handleSlimeConnections(PistonBlockEntity *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  PistonBlockEntity *v5; // r11@1
  int v6; // r0@1
  int v7; // r1@1
  __int64 v8; // kr00_8@1
  int v9; // r7@1
  const BlockPos *v10; // r9@1
  int v11; // r2@2
  bool v12; // zf@3
  int v13; // r0@12
  int v14; // r5@12
  _BYTE *v15; // r7@13
  int v16; // r2@14
  int v17; // r3@14
  __int64 v18; // kr08_8@14
  int v19; // t1@14
  signed int result; // r0@16
  BlockSource *v21; // [sp+4h] [bp-34h]@1
  int v22; // [sp+8h] [bp-30h]@14
  int v23; // [sp+Ch] [bp-2Ch]@14
  int v24; // [sp+10h] [bp-28h]@14

  v5 = this;
  v21 = a2;
  v8 = *((_QWORD *)this + 15);
  v6 = *((_QWORD *)this + 15) >> 32;
  v7 = v8;
  v9 = a4;
  v10 = a3;
  if ( (_DWORD)v8 == v6 )
  {
LABEL_9:
    if ( v6 == *((_DWORD *)v5 + 32) )
    {
      std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
        (unsigned __int64 *)v5 + 15,
        (int)v10);
    }
    else
      *(_DWORD *)v6 = *(_DWORD *)v10;
      *(_DWORD *)(v6 + 4) = *((_DWORD *)v10 + 1);
      *(_DWORD *)(v6 + 8) = *((_DWORD *)v10 + 2);
      *((_DWORD *)v5 + 31) = v6 + 12;
  }
  else
    v11 = *(_DWORD *)a3;
    while ( 1 )
      v12 = *(_DWORD *)v7 == v11;
      if ( *(_DWORD *)v7 == v11 )
        v12 = *(_DWORD *)(v7 + 4) == *((_DWORD *)v10 + 1);
      if ( v12 && *(_DWORD *)(v7 + 8) == *((_DWORD *)v10 + 2) )
        break;
      v7 += 12;
      if ( v6 == v7 )
        goto LABEL_9;
  v13 = Facing::OPPOSITE_FACING[v9];
  v14 = Facing::ALL_EXCEPT[2 * v13 + 1];
  if ( v14 )
    v15 = (_BYTE *)Facing::ALL_EXCEPT[2 * v13];
      v16 = *((_DWORD *)v10 + 1);
      v17 = *((_DWORD *)v10 + 2);
      v18 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[3 * *v15 + 1];
      v22 = *(_DWORD *)v10 + PistonBlock::ARM_DIRECTION_OFFSETS[3 * *v15];
      v23 = v18 + v16;
      v24 = HIDWORD(v18) + v17;
      v19 = *v15++;
      if ( !PistonBlockEntity::_attachedBlockWalker(v5, v21, (const BlockPos *)&v22, v19, a5) )
      if ( !--v14 )
        goto LABEL_16;
    result = 0;
LABEL_16:
    result = 1;
  return result;
}


int __fastcall PistonBlockEntity::onRemoved(PistonBlockEntity *this, BlockSource *a2)
{
  PistonBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r0@1
  char v5; // r1@1

  v2 = this;
  v3 = a2;
  v4 = *((_BYTE *)this + 116);
  v5 = 2;
  if ( v4 == 3 )
    v5 = 0;
  if ( !v4 )
  *((_BYTE *)v2 + 116) = v5;
  PistonBlockEntity::_spawnBlocks(v2, v3);
  return j_j_j__ZN11BlockEntity9onRemovedER11BlockSource(v2, v3);
}


_DWORD *__fastcall PistonBlockEntity::_checkInceptionAchievement(PistonBlockEntity *this, BlockEntity *a2, BlockSource *a3, const BlockPos *a4)
{
  BlockEntity *v4; // r4@1
  PistonBlockEntity *v5; // r5@1
  const BlockPos *v6; // r6@1
  BlockSource *v7; // r7@1
  _DWORD *result; // r0@1
  char *v9; // r0@4
  unsigned int v10; // r9@4
  unsigned __int64 *v11; // r0@4
  char v12; // r2@4
  int v13; // r2@4
  int v14; // r3@4
  bool v15; // zf@4
  bool v16; // zf@8
  char *v17; // r0@14
  unsigned int v18; // r8@14
  unsigned __int64 *v19; // r0@14
  int v20; // lr@14
  int v21; // r2@14
  bool v22; // zf@14
  bool v23; // zf@18
  Level *v24; // r0@25
  int v25; // r0@25

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  result = (_DWORD *)BlockEntity::isType((int)a2, 18);
  if ( result == (_DWORD *)1 )
  {
    if ( *((_BYTE *)v4 + 102) )
    {
      *((_BYTE *)v4 + 112) = 0;
      result = (_DWORD *)*((_BYTE *)v5 + 102);
      if ( !*((_BYTE *)v5 + 102) )
      {
        v9 = BlockEntity::getPosition(v4);
        v10 = BlockSource::getData(v7, (const BlockPos *)v9);
        v11 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
        v12 = (0xFu >> (4 - (*v11 >> 32))) & (v10 >> (*v11 + 1 - (*v11 >> 32)));
        result = PistonBlock::ARM_DIRECTION_OFFSETS;
        v13 = 3 * v12;
        v14 = PistonBlock::ARM_DIRECTION_OFFSETS[v13] + *(_DWORD *)v6;
        v15 = v14 == BlockPos::ZERO;
        if ( v14 == BlockPos::ZERO )
        {
          result = &PistonBlock::ARM_DIRECTION_OFFSETS[v13];
          v15 = result[1] + *((_DWORD *)v6 + 1) == unk_2816278;
        }
        if ( v15 )
          result = (_DWORD *)(result[2] + *((_DWORD *)v6 + 2));
          v16 = result == (_DWORD *)dword_281627C;
          if ( result == (_DWORD *)dword_281627C )
          {
            result = (_DWORD *)*((_BYTE *)v5 + 115);
            v16 = result == 0;
          }
          if ( v16 )
            result = (_DWORD *)1;
            *((_BYTE *)v4 + 112) = 1;
      }
    }
    else
      if ( *((_BYTE *)v5 + 102) )
        v17 = BlockEntity::getPosition(v4);
        v18 = BlockSource::getData(v7, (const BlockPos *)v17);
        v19 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
        v20 = *v19;
        v21 = 3 * (char)((0xFu >> (4 - (*v19 >> 32))) & (v18 >> (1 - (*v19 >> 32) + v20)));
        result = (_DWORD *)(*(_DWORD *)v6
                          + PistonBlock::ARM_DIRECTION_OFFSETS[3
                                                             * (char)((0xFu >> (4 - (*v19 >> 32))) & (v18 >> (1 - (*v19 >> 32) + v20)))]);
        v22 = result == (_DWORD *)BlockPos::ZERO;
        if ( result == (_DWORD *)BlockPos::ZERO )
          result = &PistonBlock::ARM_DIRECTION_OFFSETS[v21];
          v22 = result[1] + *((_DWORD *)v6 + 1) == unk_2816278;
        if ( v22 )
          v23 = result == (_DWORD *)dword_281627C;
            v23 = result == (_DWORD *)3;
          if ( v23 )
            result = (_DWORD *)*((_BYTE *)v5 + 112);
            if ( *((_BYTE *)v5 + 112) )
            {
              result = (_DWORD *)*((_BYTE *)v4 + 113);
              if ( !*((_BYTE *)v4 + 113) )
              {
                *((_BYTE *)v4 + 113) = 1;
                v24 = (Level *)BlockSource::getLevel(v7);
                v25 = Level::getPrimaryLocalPlayer(v24);
                result = (_DWORD *)j_j_j__ZN17MinecraftEventing25fireEventAwardAchievementEP6PlayerNS_14AchievementIdsE_0(
                                     v25,
                                     58);
              }
            }
  }
  return result;
}


void __fastcall PistonBlockEntity::tick(PistonBlockEntity *this, BlockSource *a2)
{
  PistonBlockEntity::tick(this, a2);
}


signed int __fastcall PistonBlockEntity::isRetracted(PistonBlockEntity *this)
{
  PistonBlockEntity *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( !*((_BYTE *)v1 + 115) && !*((_BYTE *)v1 + 116) )
    result = 1;
  return result;
}


signed int __fastcall PistonBlockEntity::_hasBlockAttached(PistonBlockEntity *this, const BlockPos *a2)
{
  int v2; // r0@1
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  int v5; // r3@2
  bool v6; // zf@3
  signed int result; // r0@9

  v4 = *((_QWORD *)this + 15);
  v2 = *((_QWORD *)this + 15) >> 32;
  v3 = v4;
  if ( (_DWORD)v4 == v2 )
  {
LABEL_9:
    result = 0;
  }
  else
    v5 = *(_DWORD *)a2;
    while ( 1 )
    {
      v6 = *(_DWORD *)v3 == v5;
      if ( *(_DWORD *)v3 == v5 )
        v6 = *(_DWORD *)(v3 + 4) == *((_DWORD *)a2 + 1);
      if ( v6 && *(_DWORD *)(v3 + 8) == *((_DWORD *)a2 + 2) )
        break;
      v3 += 12;
      if ( v2 == v3 )
        goto LABEL_9;
    }
    result = 1;
  return result;
}


void __fastcall PistonBlockEntity::~PistonBlockEntity(PistonBlockEntity *this)
{
  PistonBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_270A404;
  v2 = (void *)*((_DWORD *)this + 33);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 30);
  if ( v3 )
    operator delete(v3);
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall PistonBlockEntity::_tryExpand(int result)
{
  if ( !*(_BYTE *)(result + 115) && !*(_BYTE *)(result + 116) )
    *(_BYTE *)(result + 116) = 1;
  return result;
}


void __fastcall PistonBlockEntity::~PistonBlockEntity(PistonBlockEntity *this)
{
  PistonBlockEntity::~PistonBlockEntity(this);
}


char *__fastcall PistonBlockEntity::getFacingDir(PistonBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  char *v3; // r0@1
  unsigned int v4; // r4@1
  unsigned __int64 *v5; // r0@1

  v2 = a2;
  v3 = BlockEntity::getPosition(this);
  v4 = BlockSource::getData(v2, (const BlockPos *)v3);
  v5 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  return (char *)&PistonBlock::ARM_DIRECTION_OFFSETS[3
                                                   * ((0xFu >> (4 - (*v5 >> 32))) & (unsigned __int8)(v4 >> (*v5 + 1 - (*v5 >> 32))))];
}


int __fastcall PistonBlockEntity::PistonBlockEntity(int a1, int a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  int v5; // r5@1
  void *v6; // r0@1
  int result; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v10, "Piston");
  BlockEntity::BlockEntity(v5, 18, v3);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  *(_DWORD *)v5 = &off_270A404;
  *(_BYTE *)(v5 + 117) = 0;
  *(_WORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_DWORD *)(v5 + 108) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  *(_DWORD *)(v5 + 124) = 0;
  *(_DWORD *)(v5 + 128) = 0;
  *(_DWORD *)(v5 + 132) = 0;
  *(_DWORD *)(v5 + 136) = 0;
  *(_DWORD *)(v5 + 140) = 0;
  *(_DWORD *)(v5 + 84) = 6;
  *(_BYTE *)(v5 + 114) = 0;
  *(_BYTE *)(v5 + 115) = 0;
  *(_BYTE *)(v5 + 116) = 0;
  result = v5;
  *(_BYTE *)(v5 + 102) = v4;
  return result;
}


int __fastcall PistonBlockEntity::_handleRedstoneSignal(PistonBlockEntity *this, BlockSource *a2)
{
  PistonBlockEntity *v2; // r4@1
  Dimension *v3; // r0@1
  CircuitSystem *v4; // r5@1
  char *v5; // r0@1
  int result; // r0@1
  int v7; // r1@2
  bool v8; // zf@3
  bool v9; // zf@8
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = (Dimension *)BlockSource::getDimension(a2);
  v4 = (CircuitSystem *)Dimension::getCircuitSystem(v3);
  v5 = BlockEntity::getPosition(v2);
  v10 = *(_DWORD *)v5;
  v11 = *((_DWORD *)v5 + 1);
  v12 = *((_DWORD *)v5 + 2);
  result = CircuitSystem::getStrength(v4, (const BlockPos *)&v10);
  if ( result == -1 )
    return result;
  v7 = *((_BYTE *)v2 + 115);
  if ( result >= 1 )
  {
    v8 = v7 == 0;
    if ( !*((_BYTE *)v2 + 115) )
    {
      result = *((_BYTE *)v2 + 116);
      v8 = result == 0;
    }
    if ( !v8 )
      return result;
    result = 1;
LABEL_13:
    *((_BYTE *)v2 + 116) = result;
  }
  v9 = v7 == 2;
  if ( v7 == 2 )
    result = *((_BYTE *)v2 + 116);
    v9 = result == 2;
  if ( v9 )
    result = 3;
    goto LABEL_13;
  return result;
}


int __fastcall PistonBlockEntity::_tryRetract(int result)
{
  if ( *(_BYTE *)(result + 115) == 2 && *(_BYTE *)(result + 116) == 2 )
    *(_BYTE *)(result + 116) = 3;
  return result;
}


void __fastcall PistonBlockEntity::_moveCollidedEntities(PistonBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r9@1
  char *v4; // r0@1
  unsigned int v5; // r6@1
  unsigned __int64 *v6; // r0@1
  int v7; // r0@1
  int v8; // r2@1
  _DWORD *v9; // r0@1
  int v10; // r1@1
  int v11; // r0@1
  int v12; // r4@1
  int i; // r6@1
  int v14; // r2@2
  int v15; // r1@2
  int v16; // r0@2
  int v17; // r3@2
  int v19; // r0@7
  BlockEntity *v20; // r0@10
  MovingBlockEntity *v21; // r7@10
  char *v22; // r0@14
  float v26; // [sp+8h] [bp-68h]@14
  float v29; // [sp+14h] [bp-5Ch]@14
  float v32; // [sp+20h] [bp-50h]@14
  int v33; // [sp+2Ch] [bp-44h]@2
  int v34; // [sp+30h] [bp-40h]@2
  int v35; // [sp+34h] [bp-3Ch]@2
  int v36; // [sp+48h] [bp-28h]@1
  int v37; // [sp+4Ch] [bp-24h]@1
  int v38; // [sp+50h] [bp-20h]@1

  v2 = a2;
  _R5 = this;
  v4 = BlockEntity::getPosition(this);
  v5 = BlockSource::getData(v2, (const BlockPos *)v4);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v7 = 3 * (char)((0xFu >> (4 - (*v6 >> 32))) & (v5 >> (*v6 + 1 - (*v6 >> 32))));
  v8 = PistonBlock::ARM_DIRECTION_OFFSETS[v7];
  v9 = &PistonBlock::ARM_DIRECTION_OFFSETS[v7];
  v36 = v8;
  v10 = v9[1];
  v11 = v9[2];
  v37 = v10;
  v38 = v11;
  v12 = *((_QWORD *)_R5 + 15) >> 32;
  for ( i = *((_QWORD *)_R5 + 15); i != v12; i += 12 )
  {
    v14 = *(_DWORD *)i;
    v33 = *(_DWORD *)i;
    v15 = *(_DWORD *)(i + 4);
    v34 = *(_DWORD *)(i + 4);
    v16 = *(_DWORD *)(i + 8);
    v35 = *(_DWORD *)(i + 8);
    v17 = *((_BYTE *)_R5 + 116);
    if ( (unsigned int)(v17 - 1) < 2 )
    {
      v33 = v14 + v36;
      v34 = v15 + v37;
      v19 = v16 + v38;
    }
    else
      _ZF = v17 == 0;
      if ( *((_BYTE *)_R5 + 116) )
        _ZF = v17 == 3;
      if ( !_ZF )
        goto LABEL_10;
      v33 = v14 - v36;
      v34 = v15 - v37;
      v19 = v16 - v38;
    v35 = v19;
LABEL_10:
    v20 = (BlockEntity *)BlockSource::getBlockEntity(v2, (const BlockPos *)&v33);
    v21 = v20;
    if ( v20 && *(_DWORD *)BlockEntity::getType(v20) == 19 )
      MovingBlockEntity::moveCollidedEntities(v21, _R5, v2);
  }
  AABB::AABB((int)&v33, (int)&Vec3::ZERO, (int)&Vec3::ONE);
  v22 = BlockEntity::getPosition(_R5);
  Vec3::Vec3((int)&v29, (int)v22);
  Vec3::Vec3((int)&v26, (int)&v36);
  __asm
    VLDR            S0, [SP,#0x70+var_68]
    VLDR            S6, [R5,#0x68]
    VLDR            S2, [SP,#0x70+var_64]
    VLDR            S4, [SP,#0x70+var_60]
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VLDR            S8, [SP,#0x70+var_58]
    VMUL.F32        S4, S4, S6
    VLDR            S6, [SP,#0x70+var_5C]
    VLDR            S10, [SP,#0x70+var_54]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x70+var_50]
    VSTR            S2, [SP,#0x70+var_4C]
    VSTR            S4, [SP,#0x70+var_48]
  AABB::move((AABB *)&v33, (const Vec3 *)&v32);
  PistonBlockEntity::_moveCollidedEntitiesHelper(_R5, v2, (const AABB *)&v33, (const BlockPos *)&v36, 0, 0);
}


void __fastcall PistonBlockEntity::_moveCollidedEntities(PistonBlockEntity *this, BlockSource *a2)
{
  PistonBlockEntity::_moveCollidedEntities(this, a2);
}


int __fastcall PistonBlockEntity::_spawnBlocks(PistonBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  PistonBlockEntity *v3; // r7@1
  char *v4; // r0@1
  unsigned int v5; // r6@1
  unsigned __int64 *v6; // r0@1
  int v7; // r0@1
  int v8; // r8@1
  __int64 v9; // r10@1
  PistonBlockEntity *v10; // r5@1
  int result; // r0@1
  int v12; // r9@1
  int v13; // r7@2
  int v14; // r6@2
  int v15; // r3@2
  int v16; // r2@2
  int v17; // r1@2
  int v18; // r0@2
  int v19; // r0@4
  MovingBlockEntity *v20; // r0@7
  int v21; // r6@7
  char *v22; // r0@8
  int v23; // [sp+Ch] [bp-4Ch]@1
  BlockSource *v24; // [sp+10h] [bp-48h]@1
  int v25; // [sp+14h] [bp-44h]@8
  char v26; // [sp+18h] [bp-40h]@8
  char v27; // [sp+19h] [bp-3Fh]@8
  int v28; // [sp+1Ch] [bp-3Ch]@2
  int v29; // [sp+20h] [bp-38h]@2
  int v30; // [sp+24h] [bp-34h]@2
  int v31; // [sp+28h] [bp-30h]@2
  int v32; // [sp+2Ch] [bp-2Ch]@2
  int v33; // [sp+30h] [bp-28h]@2

  v2 = a2;
  v3 = this;
  v24 = a2;
  v4 = BlockEntity::getPosition(this);
  v5 = BlockSource::getData(v2, (const BlockPos *)v4);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v7 = 3 * (char)((0xFu >> (4 - (*v6 >> 32))) & (v5 >> (*v6 + 1 - (*v6 >> 32))));
  v8 = PistonBlock::ARM_DIRECTION_OFFSETS[v7];
  v9 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v7 + 1];
  PistonBlockEntity::_sortAttachedBlocks(v3, v2);
  v10 = v3;
  result = *((_QWORD *)v3 + 15) >> 32;
  v12 = *((_QWORD *)v3 + 15);
  v23 = result;
  if ( v12 == result )
    goto LABEL_14;
  do
  {
    v13 = *(_DWORD *)v12;
    v31 = *(_DWORD *)v12;
    v14 = *(_DWORD *)(v12 + 4);
    v32 = *(_DWORD *)(v12 + 4);
    v15 = *(_DWORD *)(v12 + 8);
    v33 = *(_DWORD *)(v12 + 8);
    v16 = *(_DWORD *)v12;
    v28 = *(_DWORD *)v12;
    v17 = *(_DWORD *)(v12 + 4);
    v29 = *(_DWORD *)(v12 + 4);
    v18 = *(_DWORD *)(v12 + 8);
    v30 = *(_DWORD *)(v12 + 8);
    if ( *((_BYTE *)v10 + 116) == 2 )
    {
      v19 = v18 + HIDWORD(v9);
      v31 = v13 + v8;
      v28 = v16 + v8;
      v32 = v14 + v9;
      v33 = v15 + HIDWORD(v9);
      v29 = v17 + v9;
    }
    else
      if ( *((_BYTE *)v10 + 116) )
        goto LABEL_7;
      v31 = v13 - v8;
      v32 = v14 - v9;
      v33 = v15 - HIDWORD(v9);
      v28 = v16 - v8;
      v19 = v18 - HIDWORD(v9);
      v29 = v17 - v9;
    v30 = v19;
LABEL_7:
    v20 = (MovingBlockEntity *)BlockSource::getBlockEntity(v24, (const BlockPos *)&v31);
    v21 = (int)v20;
    if ( v20 )
      v22 = MovingBlockEntity::getBlock(v20);
      v26 = *v22;
      v27 = v22[1];
      MovingBlockEntity::aquireBlockEntity((MovingBlockEntity *)&v25, v21);
      BlockSource::setBlockAndData((int)v24, (BlockPos *)&v28, (int)&v26, 3, 0, (int)&v25);
      if ( v25 )
        (*(void (**)(void))(*(_DWORD *)v25 + 4))();
      v25 = 0;
      result = *((_BYTE *)v10 + 114) | 2;
      if ( result != 3 )
        return result;
    v12 += 12;
    result = v23;
  }
  while ( v12 != v23 );
  v12 = *((_DWORD *)v10 + 30);
LABEL_14:
  *((_DWORD *)v10 + 31) = v12;
  return result;
}


void __fastcall PistonBlockEntity::onUpdatePacket(PistonBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  BlockSource *v4; // r4@1
  int v9; // [sp+Ch] [bp-Ch]@0

  _R5 = this;
  v4 = a3;
  __asm { VLDR            S16, [R5,#0x68] }
  (*(void (**)(void))(*(_DWORD *)this + 8))();
  __asm
  {
    VLDR            S0, [R5,#0x68]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    JUMPOUT(__CS__, v9);
  j_j_j__ZN17PistonBlockEntity21_moveCollidedEntitiesER11BlockSource(_R5, v4);
}


signed int __fastcall PistonBlockEntity::_clearBlockInfront(PistonBlockEntity *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r9@1
  PistonBlockEntity *v6; // r10@1
  BlockPos *v7; // r8@1
  int v8; // r1@1
  int v9; // r0@1
  char *v10; // r2@2
  __int64 v11; // r4@3
  int v12; // r1@4
  char v13; // r7@4
  signed int result; // r0@7
  bool v15; // zf@10
  char v16; // [sp+0h] [bp-28h]@16
  char v17; // [sp+4h] [bp-24h]@2

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = *(_BYTE *)(BlockSource::getBlock(a2, a4) + 4);
  v9 = *(_BYTE *)(Block::mAir + 4);
  if ( v8 == v9 )
  {
    v17 = v8;
    v10 = &v17;
    return BlockSource::setBlock((int)v5, v7, v10, 3);
  }
  v11 = *((_QWORD *)v6 + 15);
  if ( (_DWORD)v11 == HIDWORD(v11) )
LABEL_16:
    v10 = &v16;
    v16 = v9;
  v12 = *(_DWORD *)v4;
  v13 = 0;
  while ( 1 )
    if ( *(_DWORD *)v11 == v12 && *(_DWORD *)(v11 + 4) == *((_DWORD *)v4 + 1) )
    {
      result = *((_DWORD *)v4 + 2);
      if ( *(_DWORD *)(v11 + 8) == result )
        return result;
    }
    result = (signed int)BlockEntity::getPosition(v6);
    v12 = *(_DWORD *)v4;
    if ( *(_DWORD *)result != *(_DWORD *)v4 || *(_DWORD *)(result + 4) != *((_DWORD *)v4 + 1) )
      goto LABEL_20;
    v15 = *(_DWORD *)(result + 8) == *((_DWORD *)v4 + 2);
    result = 0;
    if ( v15 )
      result = 1;
    v13 |= result;
    if ( !v15 )
LABEL_20:
      LODWORD(v11) = v11 + 12;
      if ( HIDWORD(v11) != (_DWORD)v11 )
        continue;
    if ( v13 & 1 )
      return result;
    LOBYTE(v9) = *(_BYTE *)(Block::mAir + 4);
    goto LABEL_16;
}


int __fastcall PistonBlockEntity::isExpanding(PistonBlockEntity *this)
{
  int result; // r0@1

  result = *((_BYTE *)this + 115);
  if ( result != 1 )
    result = 0;
  return result;
}


BlockEntity *__fastcall PistonBlockEntity::_spawnMovingBlocks(PistonBlockEntity *this, BlockSource *a2)
{
  PistonBlockEntity *v2; // r4@1
  BlockSource *v3; // r9@1
  char *v4; // r0@1
  unsigned int v5; // r6@1
  unsigned __int64 *v6; // r0@1
  int v7; // r0@1
  int v8; // r2@1
  _DWORD *v9; // r0@1
  int v10; // r1@1
  int v11; // r0@1
  const BlockPos *i; // r6@1
  const BlockPos *v13; // r11@1
  int v14; // r5@2
  int v15; // r7@2
  PistonBlockEntity *v16; // r4@5
  BlockEntity *result; // r0@5
  int v18; // r10@5
  int v19; // r8@5
  int v20; // r11@5
  int v21; // r0@7
  BlockEntity *v22; // r7@7
  int v23; // r0@9
  int v24; // r1@9
  int v25; // r2@9
  PistonBlockEntity *v26; // r6@9
  __int64 v27; // kr18_8@11
  bool v28; // zf@11
  int v29; // r1@11
  int v30; // r4@11
  void (__cdecl *v31)(int, BlockSource *); // r5@11
  int v32; // r1@13
  int v33; // r0@15
  int v34; // r1@17
  int v35; // r2@17
  int v36; // r6@17
  int v37; // r1@17
  int v38; // r2@17
  int v39; // r0@17
  int v40; // r1@18
  int v41; // r2@18
  int v42; // r5@19
  MovingBlockEntity *v43; // r11@21
  char *v44; // r0@22
  const BlockPos *v45; // r2@22
  int v46; // r8@26
  void (__fastcall *v47)(int); // r7@26
  signed int v48; // r7@30
  unsigned __int64 v49; // [sp+8h] [bp-88h]@1
  PistonBlockEntity *v50; // [sp+10h] [bp-80h]@1
  char *v51; // [sp+1Ch] [bp-74h]@6
  int v52; // [sp+20h] [bp-70h]@1
  char v53; // [sp+24h] [bp-6Ch]@30
  int v54; // [sp+28h] [bp-68h]@26
  BlockEntity *v55; // [sp+2Ch] [bp-64h]@23
  char v56; // [sp+30h] [bp-60h]@21
  unsigned __int8 v57; // [sp+34h] [bp-5Ch]@2
  unsigned __int8 v58; // [sp+35h] [bp-5Bh]@2
  int v59; // [sp+38h] [bp-58h]@15
  int v60; // [sp+3Ch] [bp-54h]@15
  BlockEntity *v61; // [sp+40h] [bp-50h]@15
  int v62; // [sp+44h] [bp-4Ch]@11
  int v63; // [sp+48h] [bp-48h]@13
  int v64; // [sp+4Ch] [bp-44h]@15
  char v65; // [sp+50h] [bp-40h]@9
  char v66; // [sp+51h] [bp-3Fh]@21
  int v67; // [sp+54h] [bp-3Ch]@2
  int v68; // [sp+58h] [bp-38h]@2
  int v69; // [sp+5Ch] [bp-34h]@2
  int v70; // [sp+60h] [bp-30h]@1
  int v71; // [sp+64h] [bp-2Ch]@1
  int v72; // [sp+68h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v50 = this;
  v4 = BlockEntity::getPosition(this);
  v5 = BlockSource::getData(v3, (const BlockPos *)v4);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v7 = 3 * (char)((0xFu >> (4 - (*v6 >> 32))) & (v5 >> (*v6 + 1 - (*v6 >> 32))));
  v8 = PistonBlock::ARM_DIRECTION_OFFSETS[v7];
  v9 = &PistonBlock::ARM_DIRECTION_OFFSETS[v7];
  v70 = v8;
  v10 = v9[1];
  v11 = v9[2];
  v71 = v10;
  v49 = __PAIR__(v8, v10);
  v52 = v11;
  v72 = v11;
  PistonBlockEntity::_sortAttachedBlocks(v2, v3);
  v13 = (const BlockPos *)(*(_QWORD *)((char *)v2 + 132) >> 32);
  for ( i = (const BlockPos *)*(_QWORD *)((char *)v2 + 132); v13 != i; i = (const BlockPos *)((char *)i + 12) )
  {
    BlockSource::getBlockAndData((BlockSource *)&v57, v3, (int)i);
    v14 = Block::mBlocks[v57];
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v15 = (*(int (__fastcall **)(int, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v14 + 260))(v14, v3, i, &v67);
    (*(void (__fastcall **)(int, BlockSource *, const BlockPos *, _DWORD))(*(_DWORD *)v14 + 276))(v14, v3, i, v58);
    BlockSource::removeBlock(v3, i);
    if ( v15 == 1 )
      BlockSource::removeBlock(v3, (const BlockPos *)&v67);
  }
  v16 = v50;
  result = (BlockEntity *)(*((_QWORD *)v50 + 15) >> 32);
  v18 = *((_QWORD *)v50 + 15);
  v19 = HIDWORD(v49);
  v20 = v49;
  if ( (BlockEntity *)v18 != result )
    v51 = (char *)result - 12;
    while ( 1 )
    {
      v21 = BlockSource::getBlockEntity(v3, (const BlockPos *)v18);
      v22 = (BlockEntity *)v21;
      if ( v21 )
      {
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v21 + 64))(v21, *(_DWORD *)(*(_DWORD *)v21 + 64));
        PistonBlockEntity::_checkInceptionAchievement(v16, v22, v3, (const BlockPos *)&v70);
      }
      BlockSource::getBlockAndData((BlockSource *)&v65, v3, v18);
      v23 = BlockSource::getBlock(v3, (const BlockPos *)v18);
      v24 = *((_BYTE *)v16 + 116);
      v25 = v19;
      v26 = v16;
      if ( v24 != 1 )
        v25 = -v19;
      v27 = *(_QWORD *)v18;
      v28 = v24 == 1;
      v29 = v20;
      v30 = *(_DWORD *)(v18 + 8);
      v31 = *(void (__cdecl **)(int, BlockSource *))(*(_DWORD *)v23 + 180);
      v62 = v25 + *(_QWORD *)v18;
      if ( !v28 )
        v29 = -v20;
      v63 = v29 + HIDWORD(v27);
      v32 = v52;
        v32 = -v52;
      v64 = v32 + v30;
      v16 = v26;
      v31(v23, v3);
      BlockSource::removeBlockEntity((BlockSource *)&v61, v3, (const BlockPos *)v18);
      v67 = 0;
      v68 = 0;
      v69 = 0;
      *(_DWORD *)&v57 = 0;
      v59 = 0;
      v60 = 0;
      v33 = *((_BYTE *)v26 + 116);
      if ( v33 == 1 )
        break;
      if ( v33 == 3 )
        v34 = *(_DWORD *)(v18 + 4);
        v35 = *(_DWORD *)(v18 + 8);
        v36 = v20;
        v67 = *(_DWORD *)v18 - v19;
        v68 = v34 - v20;
        v69 = v35 - v52;
        v37 = (*(_QWORD *)v18 >> 32) + v20;
        v38 = *(_QWORD *)v18 + v19;
        v39 = *(_DWORD *)(v18 + 8) + v52;
LABEL_19:
        *(_DWORD *)&v57 = v38;
        v59 = v37;
        v42 = v19;
        v60 = v39;
        if ( v61 )
          BlockEntity::moveTo(v61, (const BlockPos *)&v67);
        v56 = *(_BYTE *)(Block::mMovingBlock + 4);
        BlockSource::setBlockAndData((int)v3, (BlockPos *)&v67, &v56, v66, 3, 0);
        v43 = (MovingBlockEntity *)BlockSource::getBlockEntity(v3, (const BlockPos *)&v67);
        if ( v43 )
        {
          v44 = BlockEntity::getPosition(v16);
          MovingBlockEntity::registerPiston(v43, v3, (const BlockPos *)v44);
          MovingBlockEntity::setBlock(v43, (FullBlock *)&v65);
          if ( v61 )
          {
            v55 = v61;
            v61 = 0;
            MovingBlockEntity::setBlockEntity((int)v43, (int *)&v55);
            if ( v55 )
              (*(void (**)(void))(*(_DWORD *)v55 + 4))();
            v55 = 0;
          }
          Entity::checkEntityOnewayCollision(v3, (BlockSource *)&v67, v45);
          v46 = BlockSource::getDimension(v3);
          v47 = *(void (__fastcall **)(int))(*(_DWORD *)v46 + 212);
          (*(void (__fastcall **)(int *, MovingBlockEntity *, BlockSource *))(*(_DWORD *)v43 + 52))(&v54, v43, v3);
          *(_DWORD *)(v54 + 8) = 1;
          v47(v46);
          if ( v54 )
            (*(void (**)(void))(*(_DWORD *)v54 + 4))();
          v54 = 0;
          if ( *((_BYTE *)v16 + 116) == 1 )
            PistonBlockEntity::_clearBlockInfront(v16, v3, (const BlockPos *)v18, (const BlockPos *)&v57);
        }
        v53 = *(_BYTE *)(Block::mAir + 4);
        BlockSource::setBlock((int)v3, (BlockPos *)v18, &v53, 3);
        v48 = 0;
        v19 = v42;
        v20 = v36;
        goto LABEL_32;
      v48 = 1;
LABEL_32:
      result = v61;
      if ( v61 )
        result = (BlockEntity *)(*(int (__cdecl **)(BlockEntity *, _DWORD))(*(_DWORD *)v61 + 4))(
                                  v61,
                                  *(_DWORD *)(*(_DWORD *)v61 + 4));
      if ( !v48 )
        result = (BlockEntity *)(v18 + 12);
        v28 = v51 == (char *)v18;
        v18 += 12;
        if ( !v28 )
          continue;
      return result;
    }
    v40 = *(_DWORD *)(v18 + 4);
    v41 = *(_DWORD *)(v18 + 8);
    v36 = v20;
    v67 = *(_DWORD *)v18 + v19;
    v68 = v20 + v40;
    v69 = v52 + v41;
    v37 = (*(_QWORD *)v18 >> 32) - v20;
    v38 = *(_QWORD *)v18 - v19;
    v39 = *(_DWORD *)(v18 + 8) - v52;
    goto LABEL_19;
  return result;
}


signed int __fastcall PistonBlockEntity::_checkAttachedBlocks(PistonBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r8@1
  PistonBlockEntity *v3; // r4@1
  char *v4; // r6@1
  unsigned int v5; // r7@1
  unsigned __int64 *v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // r3@1
  __int64 v9; // kr00_8@1
  int v10; // r5@1
  int v11; // r1@1
  int v12; // r9@1
  int v13; // r6@1
  int v14; // r1@4
  signed int result; // r0@4
  int v16; // [sp+8h] [bp-28h]@1
  int v17; // [sp+Ch] [bp-24h]@1
  int v18; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  v4 = BlockEntity::getPosition(this);
  v5 = BlockSource::getData(v2, (const BlockPos *)v4);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v7 = (0xFu >> (4 - (*v6 >> 32))) & (v5 >> (*v6 + 1 - (*v6 >> 32)));
  v8 = (char)v7;
  v9 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[3 * (char)v7 + 1];
  v10 = PistonBlock::ARM_DIRECTION_OFFSETS[3 * (char)v7];
  v11 = v10 + *(_QWORD *)v4;
  v12 = HIDWORD(v9) + *((_DWORD *)v4 + 2);
  v13 = v9 + (*(_QWORD *)v4 >> 32);
  v16 = v11;
  v17 = v13;
  v18 = v12;
  if ( *((_BYTE *)v3 + 116) == 3 )
  {
    if ( !*((_BYTE *)v3 + 102) )
      return 1;
    v16 = v11 + v10;
    v17 = v13 + v9;
    v18 = v12 + HIDWORD(v9);
    LOBYTE(v7) = Facing::OPPOSITE_FACING[(char)v7];
  }
  *((_DWORD *)v3 + 31) = *((_DWORD *)v3 + 30);
  *((_DWORD *)v3 + 34) = *((_DWORD *)v3 + 33);
  v14 = PistonBlockEntity::_attachedBlockWalker(v3, v2, (const BlockPos *)&v16, v8, (char)v7);
  result = 0;
  if ( v14 == 1
    && (unsigned int)(-1431655765 * ((signed int)((*((_QWORD *)v3 + 15) >> 32) - *((_QWORD *)v3 + 15)) >> 2)) < 0xD )
    result = 1;
  return result;
}


signed int __fastcall PistonBlockEntity::load(PistonBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  PistonBlockEntity *v3; // r11@1
  void *v9; // r0@1
  void *v11; // r0@2
  void *v12; // r0@3
  char v13; // r0@4
  void *v14; // r0@4
  void *v15; // r0@5
  ListTag *v16; // r7@6
  void *v17; // r0@6
  int v18; // r5@9
  int v19; // r6@10
  int v20; // r4@10
  int v21; // r0@10
  int v22; // r1@10 OVERLAPPED
  int v23; // r2@10
  ListTag *v24; // r5@14
  void *v25; // r0@14
  int v26; // r7@17
  int v27; // r6@18
  int v28; // r4@18
  int v29; // r0@18
  int v30; // r1@18 OVERLAPPED
  int v31; // r2@18
  signed int result; // r0@22
  unsigned int *v33; // r2@25
  signed int v34; // r1@27
  unsigned int *v35; // r2@29
  signed int v36; // r1@31
  unsigned int *v37; // r2@33
  signed int v38; // r1@35
  unsigned int *v39; // r2@37
  signed int v40; // r1@39
  unsigned int *v41; // r2@41
  signed int v42; // r1@43
  unsigned int *v43; // r2@45
  signed int v44; // r1@47
  unsigned int *v45; // r2@49
  signed int v46; // r1@51
  int v47; // [sp+4h] [bp-64h]@14
  int v48; // [sp+8h] [bp-60h]@10
  int v49; // [sp+Ch] [bp-5Ch]@10
  int v50; // [sp+10h] [bp-58h]@10
  int v51; // [sp+18h] [bp-50h]@6
  int v52; // [sp+20h] [bp-48h]@5
  int v53; // [sp+28h] [bp-40h]@4
  int v54; // [sp+30h] [bp-38h]@3
  int v55; // [sp+38h] [bp-30h]@2
  int v56; // [sp+40h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v56, "Progress");
  _R0 = CompoundTag::getFloat((int)v2, (const void **)&v56);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R11,#0x68]
  }
  v9 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v55, "LastProgress");
  _R0 = CompoundTag::getFloat((int)v2, (const void **)&v55);
    VSTR            S0, [R11,#0x6C]
  v11 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v55 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v54, "State");
  *((_BYTE *)v3 + 115) = CompoundTag::getByte((int)v2, (const void **)&v54);
  v12 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v54 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v53, "NewState");
  v13 = CompoundTag::getByte((int)v2, (const void **)&v53);
  *((_BYTE *)v3 + 116) = v13;
  *((_BYTE *)v3 + 114) = v13;
  v14 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v53 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v52, "Sticky");
  *((_BYTE *)v3 + 102) = CompoundTag::getBoolean((int)v2, (const void **)&v52);
  v15 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v52 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  *((_DWORD *)v3 + 31) = *((_DWORD *)v3 + 30);
  sub_21E94B4((void **)&v51, "AttachedBlocks");
  v16 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v51);
  v17 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v51 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v16 && ListTag::size(v16) >= 3 )
    v18 = 2;
    do
      v19 = ListTag::getInt(v16, v18 - 2);
      v20 = ListTag::getInt(v16, v18 - 1);
      v21 = ListTag::getInt(v16, v18);
      v48 = v19;
      v49 = v20;
      v50 = v21;
      *(_QWORD *)&v22 = *(_QWORD *)((char *)v3 + 124);
      if ( v22 == v23 )
      {
        std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
          (unsigned __int64 *)v3 + 15,
          (int)&v48);
      }
      else
        *(_DWORD *)v22 = v19;
        *(_DWORD *)(v22 + 4) = v20;
        *(_DWORD *)(v22 + 8) = v21;
        *((_DWORD *)v3 + 31) = v22 + 12;
      v18 += 3;
    while ( v18 < ListTag::size(v16) );
  *((_DWORD *)v3 + 34) = *((_DWORD *)v3 + 33);
  sub_21E94B4((void **)&v47, "BreakBlocks");
  v24 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v47);
  v25 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v47 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  if ( v24 && ListTag::size(v24) >= 3 )
    v26 = 2;
      v27 = ListTag::getInt(v24, v26 - 2);
      v28 = ListTag::getInt(v24, v26 - 1);
      v29 = ListTag::getInt(v24, v26);
      v48 = v27;
      v49 = v28;
      v50 = v29;
      *(_QWORD *)&v30 = *((_QWORD *)v3 + 17);
      if ( v30 == v31 )
          (unsigned __int64 *)((char *)v3 + 132),
        *(_DWORD *)v30 = v27;
        *(_DWORD *)(v30 + 4) = v28;
        *(_DWORD *)(v30 + 8) = v29;
        *((_DWORD *)v3 + 34) = v30 + 12;
      v26 += 3;
    while ( v26 < ListTag::size(v24) );
  result = *((_BYTE *)v3 + 116);
  if ( !*((_BYTE *)v3 + 116) )
    result = 1;
    *((_BYTE *)v3 + 117) = 1;
  return result;
}
