

signed int __fastcall RenderChunkBuilder::_sortBlocks(RenderChunkBuilder *this, BlockSource *a2, RenderChunk *a3, VisibilityExtimator *a4, bool a5)
{
  RenderChunkBuilder *v5; // r6@1
  BlockSource *v6; // r5@1
  VisibilityExtimator *v7; // r8@1
  int v8; // r10@1
  int v9; // r3@3
  int v10; // r7@3
  int v11; // r4@3
  int v12; // r3@9
  int v13; // r1@13
  signed __int64 v14; // r0@16
  const Block **v15; // r7@17
  char v16; // r1@24
  int v17; // r0@26
  int i; // r1@32
  const Block *v19; // r4@35
  VisibilityExtimator *v20; // r7@38
  int v21; // r11@38
  int v22; // r0@39
  Block *v23; // r0@40
  int v24; // r0@41
  int v25; // r0@42
  __int16 v26; // r8@42
  char v27; // r1@66
  int v28; // r11@75
  int v30; // [sp+4h] [bp-8Ch]@1
  int v31; // [sp+Ch] [bp-84h]@1
  int v32; // [sp+18h] [bp-78h]@22
  signed __int64 v33; // [sp+1Ch] [bp-74h]@22
  int v34; // [sp+24h] [bp-6Ch]@16
  int v35; // [sp+28h] [bp-68h]@16
  int v36; // [sp+2Ch] [bp-64h]@16
  char v37; // [sp+30h] [bp-60h]@9
  int v38; // [sp+34h] [bp-5Ch]@11
  int v39; // [sp+38h] [bp-58h]@9
  char v40; // [sp+3Ch] [bp-54h]@3
  int v41; // [sp+40h] [bp-50h]@5
  int v42; // [sp+44h] [bp-4Ch]@7
  int v43; // [sp+48h] [bp-48h]@1
  int v44; // [sp+4Ch] [bp-44h]@1
  int v45; // [sp+50h] [bp-40h]@1
  unsigned __int8 v46; // [sp+54h] [bp-3Ch]@76
  char v47; // [sp+58h] [bp-38h]@76
  int v48; // [sp+5Ch] [bp-34h]@24
  int v49; // [sp+60h] [bp-30h]@76
  int v50; // [sp+64h] [bp-2Ch]@76
  char v51; // [sp+68h] [bp-28h]@76

  v5 = this;
  v6 = a2;
  v7 = a4;
  RenderChunk::getPosition((RenderChunk *)&v43, (int)a3);
  v8 = v44 + 16;
  v31 = v45 + 16;
  v30 = v43 + 16;
  if ( *((_BYTE *)v5 + 416) && !AABB::isEmpty((RenderChunkBuilder *)((char *)v5 + 420)) )
  {
    BlockPos::BlockPos((int)&v40, (int)v5 + 420);
    v9 = v43;
    v10 = v44;
    v11 = v45;
    if ( v43 < *(_DWORD *)&v40 )
      v9 = *(_DWORD *)&v40;
    v43 = v9;
    if ( v44 < v41 )
      v10 = v41;
    v44 = v10;
    if ( v45 < v42 )
      v11 = v42;
    v45 = v11;
    BlockPos::BlockPos((int)&v37, (int)v5 + 432);
    v12 = v31;
    if ( v39 < v31 )
      v12 = v39;
    v31 = v12;
    if ( v38 < v8 )
      v8 = v38;
    v13 = v30;
    if ( *(_DWORD *)&v37 < v30 )
      v13 = *(_DWORD *)&v37;
    v30 = v13;
  }
  v14 = __PAIR__(v45, v43);
  v34 = v43;
  v35 = v44;
  v36 = v45;
  if ( v43 < v30 )
    v15 = (const Block **)&Block::mAir;
    while ( 1 )
    {
      v36 = HIDWORD(v14);
      while ( SHIDWORD(v14) < v31 )
      {
        v32 = v14;
        LODWORD(v14) = v35 + 1;
        v33 = v14;
        if ( *((_BYTE *)v5 + 10) && !*((_BYTE *)v5 + 9) )
        {
          v17 = 0;
        }
        else
          BlockSource::getBrightnessPair((BlockSource *)&v48, v6, (const BlockPos *)&v32);
          v16 = v48;
          if ( (_BYTE)v48 )
            *((_BYTE *)v5 + 10) = 1;
          v17 = *((_BYTE *)v5 + 9);
          if ( *((_BYTE *)v5 + 9) )
          {
            if ( (unsigned __int8)(v16 + BYTE1(v48)) >= 3u )
            {
              v17 = 0;
              *((_BYTE *)v5 + 9) = 0;
            }
          }
          else
            v17 = 0;
        for ( i = v44; ; i = v35 + 1 )
          v35 = i;
          if ( i >= v8 )
            break;
          v19 = (const Block *)BlockSource::getBlock(v6, (const BlockPos *)&v34);
          if ( !Block::isType(v19, *v15) )
            if ( v7 )
              VisibilityExtimator::setBlock(v7, (const BlockPos *)&v34, v19);
            v20 = v7;
            v21 = (*(int (__fastcall **)(const Block *, BlockSource *, int *))(*(_DWORD *)v19 + 408))(v19, v6, &v34);
            if ( (*(int (__fastcall **)(const Block *))(*(_DWORD *)v19 + 364))(v19) == 1 )
              v22 = BlockSource::getExtraData(v6, (const BlockPos *)&v34);
              if ( v22 )
              {
                v23 = (Block *)Block::mBlocks[(unsigned __int8)v22];
                if ( v23 )
                {
                  v24 = Block::getRenderLayer(v23);
                  BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 49160 * v24), (const BlockPos *)&v34);
                }
              }
            v25 = (*(int (__fastcall **)(const Block *))(*(_DWORD *)v19 + 412))(v19);
            v26 = v25;
            if ( v25 )
              if ( v25 & 1 )
                BlockQueue::add(*((BlockQueue **)v5 + 47), (const BlockPos *)&v34);
              if ( v26 & 2 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 49160), (const BlockPos *)&v34);
              if ( v26 & 4 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 98320), (const BlockPos *)&v34);
              if ( v26 & 8 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 147480), (const BlockPos *)&v34);
              if ( v26 & 0x10 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 196640), (const BlockPos *)&v34);
              if ( v26 & 0x20 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 245800), (const BlockPos *)&v34);
              if ( v26 & 0x40 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 294960), (const BlockPos *)&v34);
              if ( v26 & 0x80 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 344120), (const BlockPos *)&v34);
              if ( v26 & 0x100 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 393280), (const BlockPos *)&v34);
              if ( v26 & 0x200 )
                BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 442440), (const BlockPos *)&v34);
            BlockQueue::add((BlockQueue *)(*((_DWORD *)v5 + 47) + 49160 * v21), (const BlockPos *)&v34);
            v7 = v20;
            v15 = (const Block **)&Block::mAir;
          if ( *((_BYTE *)v5 + 10) && !*((_BYTE *)v5 + 9) )
            BlockSource::getBrightnessPair((BlockSource *)&v48, v6, (const BlockPos *)&v34);
            v27 = v48;
            if ( (_BYTE)v48 )
              *((_BYTE *)v5 + 10) = 1;
            v17 = *((_BYTE *)v5 + 9);
            if ( *((_BYTE *)v5 + 9) )
              if ( (unsigned __int8)(v27 + BYTE1(v48)) >= 3u )
                v17 = 0;
                *((_BYTE *)v5 + 9) = 0;
            else
        if ( v17 )
          v28 = BlockSource::getChunkAt(v6, (const BlockPos *)&v34);
          if ( v28 )
            v48 = v34;
            v49 = v35 + 1;
            v50 = v36;
            ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v51, (const BlockPos *)&v48);
            v47 = Brightness::MIN;
            LevelChunk::getRawBrightness(&v46, v28, (int)&v51, &v47);
            if ( v46 >= 3u )
        HIDWORD(v14) = v36++ + 1;
        LODWORD(v14) = v34;
      }
      LODWORD(v14) = v14 + 1;
      v34 = v14;
      if ( (signed int)v14 >= v30 )
        break;
      HIDWORD(v14) = v45;
    }
  return 1;
}


signed int __fastcall RenderChunkBuilder::_tessellateQueues(RenderChunkBuilder *this, RenderChunk *a2, BlockSource *a3)
{
  BlockSource *v8; // r10@1
  int v9; // r8@1
  Tessellator *v10; // r9@4
  bool v11; // r1@5
  BlockTessellator *v12; // r5@9
  int v13; // r3@9
  int v14; // r5@9
  int v15; // r2@9
  int v16; // r0@15
  int v17; // r1@15
  int v18; // r2@15
  const BlockPos *v19; // r0@22
  const BlockPos *v20; // r5@22
  BlockTessellator *v21; // r9@22
  const Block *v22; // r0@22
  int v23; // r5@24
  const BlockPos *v24; // r5@25
  int v25; // r0@26
  int v26; // r0@26
  AABB *v28; // [sp+1Ch] [bp-3Ch]@1
  RenderChunk *v29; // [sp+24h] [bp-34h]@1
  int v30; // [sp+28h] [bp-30h]@5
  char v31; // [sp+30h] [bp-28h]@21
  int v32; // [sp+58h] [bp+0h]@21
  char v33; // [sp+80h] [bp+28h]@21
  float v34; // [sp+A8h] [bp+50h]@15
  char v35; // [sp+B4h] [bp+5Ch]@15
  int v36; // [sp+B8h] [bp+60h]@15
  int v37; // [sp+BCh] [bp+64h]@15
  int v38; // [sp+C0h] [bp+68h]@17
  int v39; // [sp+C4h] [bp+6Ch]@19
  int v40; // [sp+C8h] [bp+70h]@21
  int v41; // [sp+CCh] [bp+74h]@9
  int v42; // [sp+D0h] [bp+78h]@9
  int v43; // [sp+D4h] [bp+7Ch]@9
  unsigned __int8 v44[4]; // [sp+D8h] [bp+80h]@11
  int v45; // [sp+DCh] [bp+84h]@13
  int v46; // [sp+E0h] [bp+88h]@15
  char v47; // [sp+E4h] [bp+8Ch]@9
  char v48; // [sp+F0h] [bp+98h]@7
  int v49; // [sp+F4h] [bp+9Ch]@11
  int v50; // [sp+F8h] [bp+A0h]@13
  char v51; // [sp+FCh] [bp+A4h]@4
  int v52; // [sp+100h] [bp+A8h]@4
  int v53; // [sp+104h] [bp+ACh]@4
  int v54; // [sp+108h] [bp+B0h]@4
  int v55; // [sp+10Ch] [bp+B4h]@4
  int v56; // [sp+110h] [bp+B8h]@4
  char v57; // [sp+114h] [bp+BCh]@4

  _R6 = this;
  __asm { VMOV.F32        S16, #-1.0 }
  v28 = (RenderChunkBuilder *)((char *)this + 420);
  v8 = a3;
  v29 = a2;
  v9 = 0;
  do
  {
    if ( !BlockQueue::empty((BlockQueue *)(*((_DWORD *)_R6 + 47) + 49160 * v9)) )
    {
      if ( !Tessellator::isTessellating(*((Tessellator **)_R6 + 49)) )
      {
        Tessellator::begin(*((Tessellator **)_R6 + 49), 12000, 1);
        v10 = (Tessellator *)*((_DWORD *)_R6 + 49);
        RenderChunk::getPosition((RenderChunk *)&v51, (int)v29);
        v54 = -*(_DWORD *)&v51;
        v55 = -v52;
        v56 = -v53;
        Vec3::Vec3((int)&v57, (int)&v54);
        Tessellator::setOffset(v10, (const Vec3 *)&v57);
      }
      v30 = Tessellator::getVertexCount(*((Tessellator **)_R6 + 49));
      BlockTessellator::setRenderLayer(*((BlockTessellator **)_R6 + 1), v9);
      v11 = 0;
      if ( !v9 )
        v11 = 1;
      BlockTessellator::setForceOpaque(*((BlockTessellator **)_R6 + 1), v11);
      RenderChunk::getPosition((RenderChunk *)&v48, (int)v29);
      BlockTessellator::resetCache(*((BlockTessellator **)_R6 + 1), (const BlockPos *)&v48, v8);
      if ( *((_BYTE *)_R6 + 416) && !AABB::isEmpty(v28) )
        v12 = (BlockTessellator *)*((_DWORD *)_R6 + 1);
        RenderChunk::getPosition((RenderChunk *)&v47, (int)v29);
        BlockTessellator::resetCacheToAir(v12, (const BlockPos *)&v47, v8);
        BlockPos::BlockPos((int)&v41, (int)v28);
        v14 = v42;
        v13 = v41;
        v15 = v43;
        if ( v41 < *(_DWORD *)&v48 )
          v13 = *(_DWORD *)&v48;
        *(_DWORD *)v44 = v13;
        if ( v42 < v49 )
          v14 = v49;
        v45 = v14;
        if ( v43 < v50 )
          v15 = v50;
        v46 = v15;
        __asm
        {
          VLDR            S0, [R6,#0x1B0]
          VLDR            S2, [R6,#0x1B4]
          VLDR            S4, [R6,#0x1B8]
          VADD.F32        S0, S0, S16
          VADD.F32        S2, S2, S16
          VADD.F32        S4, S4, S16
          VSTR            S0, [SP,#0x12C+var_84]
          VSTR            S2, [SP,#0x12C+var_80]
          VSTR            S4, [SP,#0x12C+var_7C]
        }
        BlockPos::BlockPos((int)&v35, (int)&v34);
        v16 = *(_DWORD *)&v35;
        v17 = v36;
        v18 = v37;
        if ( *(_DWORD *)&v48 + 16 < *(_DWORD *)&v35 )
          v16 = *(_DWORD *)&v48 + 16;
        v38 = v16;
        if ( v49 + 16 < v36 )
          v17 = v49 + 16;
        v39 = v17;
        if ( v50 + 16 < v37 )
          v18 = v50 + 16;
        v40 = v18;
        BlockPosIterator::BlockPosIterator((BlockPosIterator *)&v33, (const BlockPos *)v44, (const BlockPos *)&v38);
        BlockPosIterator::begin((BlockPosIterator *)&v32, (int)&v33);
        BlockPosIterator::end((BlockPosIterator *)&v31, (int)&v33);
        while ( BlockPosIterator::operator!=((int)&v32, (int)&v31) )
          v19 = (const BlockPos *)BlockPosIterator::operator*((int)&v32);
          v20 = v19;
          v21 = (BlockTessellator *)*((_DWORD *)_R6 + 1);
          v22 = (const Block *)BlockSource::getBlock(v8, v19);
          BlockTessellator::updateCache(v21, v22, v20);
          BlockPosIterator::operator++((int)&v32);
      v23 = *((_DWORD *)_R6 + 47) + 49160 * v9;
      BlockQueue::begin((BlockQueue *)&v32, v23);
      BlockQueue::end((BlockQueue *)&v31, v23);
      while ( BlockQueue::Iterator::operator!=((int)&v32, (int)&v31) )
        v24 = (const BlockPos *)BlockQueue::Iterator::operator*((unsigned __int64 *)&v32);
        BlockSource::getBlockAndData((BlockSource *)v44, v8, (int)v24);
        BlockTessellator::tessellateInWorld(
          *((BlockTessellator **)_R6 + 1),
          *((Tessellator **)_R6 + 49),
          (const Block *)Block::mBlocks[v44[0]],
          v24,
          v44[1],
          0);
        BlockQueue::Iterator::operator++(&v32);
      BlockTessellator::setForceOpaque(*((BlockTessellator **)_R6 + 1), 0);
      v25 = Tessellator::getVertexCount(*((Tessellator **)_R6 + 49));
      v26 = mce::PolygonHelper::calculateIndexCountForQuads((mce::PolygonHelper *)(v25 - v30), v30);
      BlockQueue::setIndexCount((BlockQueue *)(*((_DWORD *)_R6 + 47) + 49160 * v9), v26);
    }
    ++v9;
  }
  while ( v9 != 10 );
  return 1;
}


RenderChunkBuilder *__fastcall RenderChunkBuilder::~RenderChunkBuilder(RenderChunkBuilder *this)
{
  RenderChunkBuilder *v1; // r4@1
  Tessellator *v2; // r0@1
  Tessellator *v3; // r0@2
  BlockTessellator *v4; // r0@3
  BlockTessellator *v5; // r0@4

  v1 = this;
  RenderChunkSorter::~RenderChunkSorter((RenderChunkBuilder *)((char *)this + 200));
  v2 = (Tessellator *)*((_DWORD *)v1 + 48);
  if ( v2 )
  {
    v3 = Tessellator::~Tessellator(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 48) = 0;
  std::array<std::vector<RenderChunkQuadInfo,std::allocator<RenderChunkQuadInfo>>,7u>::~array((int)v1 + 24);
  v4 = (BlockTessellator *)*((_DWORD *)v1 + 1);
  if ( v4 )
    v5 = BlockTessellator::~BlockTessellator(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 1) = 0;
  if ( *(_DWORD *)v1 )
    (*(void (**)(void))(**(_DWORD **)v1 + 4))();
  *(_DWORD *)v1 = 0;
  return v1;
}


int __fastcall RenderChunkBuilder::trim(RenderChunkBuilder *this)
{
  RenderChunkBuilder *v1; // r4@1
  Tessellator *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = (Tessellator *)*((_DWORD *)this + 48);
  if ( v2 )
    Tessellator::trim(v2);
  *((_DWORD *)v1 + 7) = *((_DWORD *)v1 + 6);
  *((_DWORD *)v1 + 10) = *((_DWORD *)v1 + 9);
  *((_DWORD *)v1 + 13) = *((_DWORD *)v1 + 12);
  *((_DWORD *)v1 + 16) = *((_DWORD *)v1 + 15);
  *((_DWORD *)v1 + 19) = *((_DWORD *)v1 + 18);
  *((_DWORD *)v1 + 22) = *((_DWORD *)v1 + 21);
  result = *((_DWORD *)v1 + 24);
  *((_DWORD *)v1 + 25) = result;
  return result;
}


int __fastcall RenderChunkBuilder::_updateFacesMetadata(RenderChunkBuilder *this)
{
  RenderChunkBuilder *v1; // r8@1
  int v2; // r10@1
  char *v3; // r7@1
  signed int v4; // r4@1
  void *v5; // r1@2
  signed int v6; // r2@2
  signed __int64 v7; // kr00_8@2
  unsigned int v8; // r6@3
  char *v9; // r5@5
  __int64 v10; // r0@11
  int v11; // r7@12
  unsigned int v12; // r5@12
  __int64 v13; // r2@13
  int v14; // r2@13
  int v15; // r0@13
  int v16; // r0@13
  int v17; // r1@13
  int v18; // t1@13
  int v19; // r3@14
  int v20; // r6@14
  int v21; // r4@14
  unsigned int v23; // [sp+0h] [bp-38h]@13
  int v24; // [sp+4h] [bp-34h]@14
  int v25; // [sp+8h] [bp-30h]@14
  int v26; // [sp+Ch] [bp-2Ch]@14

  v1 = this;
  v2 = *((_DWORD *)this + 49);
  v3 = (char *)this + 24;
  v4 = 0;
  do
  {
    v5 = *(void **)v3;
    *((_DWORD *)v3 + 1) = *(_DWORD *)v3;
    v6 = (*(_QWORD *)(v2 + 140) >> 32) - *(_QWORD *)(v2 + 140);
    v7 = 613566757LL * (unsigned int)(v6 >> 4);
    if ( (unsigned int)(v6 >> 4) >= 0x70000000 )
      sub_21E5A04("vector::reserve");
    v8 = (HIDWORD(v7) + ((unsigned int)((v6 >> 4) - HIDWORD(v7)) >> 1)) >> 2;
    if ( (*((_DWORD *)v3 + 2) - (signed int)v5) >> 4 < v8 )
    {
      if ( (unsigned int)(v6 >> 4) >= 7 )
        v9 = (char *)operator new(16 * v8);
      else
        v9 = 0;
      if ( *(_DWORD *)v3 )
        operator delete(*(void **)v3);
      *(_DWORD *)v3 = v9;
      *((_DWORD *)v3 + 1) = v9;
      *((_DWORD *)v3 + 2) = &v9[16 * v8];
    }
    ++v4;
    v3 += 12;
  }
  while ( v4 < 7 );
  v10 = *(_QWORD *)(v2 + 140);
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = 0;
    v12 = 0;
    do
      HIDWORD(v10) = *(_BYTE *)(v10 + v11);
      LODWORD(v10) = v10 + v11;
      v23 = v12;
      v13 = *(_QWORD *)(v10 + 4);
      LODWORD(v10) = *(_DWORD *)(v10 + 12);
      *(_QWORD *)((unsigned int)&v23 | 4) = v13;
      *(_DWORD *)(((unsigned int)&v23 | 4) + 8) = v10;
      v14 = (int)v1 + 12 * HIDWORD(v10);
      v15 = (int)v1 + 12 * HIDWORD(v10);
      v18 = *(_DWORD *)(v15 + 28);
      v16 = v15 + 28;
      v17 = v18;
      if ( v18 == *(_DWORD *)(v16 + 4) )
      {
        std::vector<RenderChunkQuadInfo,std::allocator<RenderChunkQuadInfo>>::_M_emplace_back_aux<RenderChunkQuadInfo>(
          (unsigned __int64 *)(v14 + 24),
          (int)&v23);
      }
        v19 = v24;
        v20 = v25;
        v21 = v26;
        *(_DWORD *)v17 = v23;
        *(_DWORD *)(v17 + 4) = v19;
        *(_DWORD *)(v17 + 8) = v20;
        *(_DWORD *)(v17 + 12) = v21;
        *(_DWORD *)v16 += 16;
      v10 = *(_QWORD *)(v2 + 140);
      v11 += 16;
      ++v12;
    while ( v12 < (HIDWORD(v10) - (signed int)v10) >> 4 );
  return v10;
}


void *__fastcall RenderChunkBuilder::_getVisibilityHelper(RenderChunkBuilder *this)
{
  void *result; // r0@2

  if ( *((_BYTE *)this + 8) )
    result = ThreadLocal<VisibilityExtimator>::getLocal((int)&VisibilityExtimator::pool);
  else
    result = 0;
  return result;
}


int __fastcall RenderChunkBuilder::RenderChunkBuilder(int a1, ChunkSource *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  ChunkSource *v5; // r7@1
  void *v6; // r5@1
  void *v7; // r5@1
  void *v8; // r7@1
  int v9; // r0@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r5@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r6@14
  unsigned int v16; // r0@16
  int v18; // [sp+0h] [bp-20h]@1
  int v19; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0xA0u);
  ChunkViewSource::ChunkViewSource((int)v6, v5, 0);
  *(_DWORD *)v3 = v6;
  v7 = operator new(0xDE00u);
  BlockTessellator::BlockTessellator((int)v7, 0);
  *(_DWORD *)(v3 + 4) = v7;
  *(_BYTE *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 9) = 0;
  *(_BYTE *)(v3 + 10) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  VisibilityNode::VisibilityNode((VisibilityNode *)(v3 + 16), 0);
  _aeabi_memclr4(v3 + 24, 168);
  v8 = operator new(0x10Cu);
  Tessellator::Tessellator((int)v8);
  *(_DWORD *)(v3 + 192) = v8;
  *(_DWORD *)(v3 + 196) = v8;
  v18 = *(_DWORD *)v4;
  v9 = *(_DWORD *)(v4 + 4);
  v19 = v9;
  if ( v9 )
  {
    v10 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  RenderChunkSorter::RenderChunkSorter(v3 + 200, (int)&v18);
  v12 = v19;
  if ( v19 )
    v13 = (unsigned int *)(v19 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  *(_BYTE *)(v3 + 416) = 0;
  AABB::AABB((AABB *)(v3 + 420));
  return v3;
}


BlockSource *__fastcall RenderChunkBuilder::build(RenderChunkBuilder *this, RenderChunk *a2, bool a3, bool a4)
{
  RenderChunkBuilder *v4; // r4@1
  bool v5; // r7@1
  RenderChunk *v6; // r5@1
  BlockSourceListener *v7; // r6@1
  int v8; // r0@1
  LevelChunk *v9; // r0@1
  VisibilityExtimator *v10; // r6@4
  signed int v11; // r8@4
  int v12; // r0@6
  BlockQueue *v13; // r0@6
  int v18; // r0@9
  char v20; // [sp+Ch] [bp-BCh]@10
  char v21; // [sp+18h] [bp-B0h]@10
  int v22; // [sp+24h] [bp-A4h]@9
  __int16 v23; // [sp+28h] [bp-A0h]@9
  char v24; // [sp+2Ch] [bp-9Ch]@1
  char v25; // [sp+38h] [bp-90h]@1
  char v26; // [sp+40h] [bp-88h]@1

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (BlockSourceListener *)ChunkSource::getLevel(*(ChunkSource **)this);
  v8 = ChunkSource::getDimension(*(ChunkSource **)v4);
  BlockSource::BlockSource((int)&v26, v7, v8, *(_DWORD *)v4, 0, 0);
  RenderChunk::getCenter((RenderChunk *)&v24, (int)v6);
  ChunkPos::ChunkPos((ChunkPos *)&v25, (const BlockPos *)&v24);
  v9 = (LevelChunk *)BlockSource::getChunk((BlockSource *)&v26, (const ChunkPos *)&v25);
  if ( v9 )
    LevelChunk::updateCachedData(v9, (BlockSource *)&v26);
  if ( *((_BYTE *)v4 + 8) )
  {
    v10 = (VisibilityExtimator *)ThreadLocal<VisibilityExtimator>::getLocal((int)&VisibilityExtimator::pool);
    VisibilityExtimator::start(v10, v6);
    v11 = 1;
  }
  else
    v11 = 0;
    v10 = 0;
  BlockTessellator::setRegion(*((BlockTessellator **)v4 + 1), (BlockSource *)&v26);
  v12 = *((_DWORD *)v4 + 1);
  *(_BYTE *)(v12 + 51) = v5;
  *((_BYTE *)v4 + 10) = RenderChunkBuilder::_seesSkyDirectly((RenderChunkBuilder *)v12, v6, (BlockSource *)&v26);
  *((_BYTE *)v4 + 9) = 1;
  v13 = (BlockQueue *)ThreadLocal<std::array<BlockQueue,10u>>::getLocal((int)&unk_27E3C24);
  *((_DWORD *)v4 + 47) = v13;
  BlockQueue::reset(v13);
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 49160));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 98320));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 147480));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 196640));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 245800));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 294960));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 344120));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 393280));
  BlockQueue::reset((BlockQueue *)(*((_DWORD *)v4 + 47) + 442440));
  RenderChunkBuilder::_sortBlocks(v4, (BlockSource *)&v26, v6, v10, 0);
  __asm
    VMOV.F32        S2, #15.0
    VLDR            S0, =0.0
  if ( *((_BYTE *)v4 + 10) )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VSTR            S0, [R4,#0xC] }
  RenderChunkBuilder::_tessellateQueues(v4, v6, (BlockSource *)&v26);
  RenderChunkBuilder::_buildRanges(v4);
  if ( v11 == 1 )
    VisibilityExtimator::finish((VisibilityExtimator *)&v22, (int)v10);
    v18 = v22;
    *((_WORD *)v4 + 10) = v23;
    *((_DWORD *)v4 + 4) = v18;
  RenderChunkBuilder::_updateFacesMetadata(v4);
  Tessellator::setOffset(*((Tessellator **)v4 + 49), 0.0, 0.0, 0.0);
  RenderChunkSorter::setSourceLayers((int)v4 + 200, (int)v4 + 108, (int)v4 + 188);
  RenderChunk::getPosition((RenderChunk *)&v20, (int)v6);
  SubChunkPos::SubChunkPos((SubChunkPos *)&v21, (const BlockPos *)&v20);
  RenderChunkSorter::sortAndCullFaces(
    (int)v4 + 200,
    (int)&v21,
    (_QWORD *)v4 + 3,
    (RenderChunkBuilder *)((char *)v4 + 108));
  return BlockSource::~BlockSource((BlockSource *)&v26);
}


int __fastcall RenderChunkBuilder::setGUIRendering(int result, bool a2)
{
  *(_BYTE *)(result + 416) = a2;
  return result;
}


int __fastcall RenderChunkBuilder::_checkAllDark(RenderChunkBuilder *this, BlockSource *a2, const BlockPos *a3)
{
  RenderChunkBuilder *v3; // r4@1
  const BlockPos *v4; // r6@1
  int result; // r0@1
  int v6; // r5@2
  int v7; // r1@3
  int v8; // r2@3
  unsigned __int8 v9; // [sp+0h] [bp-28h]@3
  char v10; // [sp+4h] [bp-24h]@3
  int v11; // [sp+8h] [bp-20h]@3
  int v12; // [sp+Ch] [bp-1Ch]@3
  int v13; // [sp+10h] [bp-18h]@3
  char v14; // [sp+14h] [bp-14h]@3

  v3 = this;
  v4 = a3;
  result = *((_BYTE *)this + 9);
  if ( result )
  {
    result = BlockSource::getChunkAt(a2, a3);
    v6 = result;
    if ( result )
    {
      v7 = *((_DWORD *)v4 + 1);
      v8 = *((_DWORD *)v4 + 2);
      v11 = *(_DWORD *)v4;
      v12 = v7 + 1;
      v13 = v8;
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v14, (const BlockPos *)&v11);
      v10 = Brightness::MIN;
      LevelChunk::getRawBrightness(&v9, v6, (int)&v14, &v10);
      result = v9;
      if ( v9 >= 3u )
      {
        result = 0;
        *((_BYTE *)v3 + 9) = 0;
      }
    }
  }
  return result;
}


int __fastcall RenderChunkBuilder::applyBuildBoundingBox(int result, const AABB *a2)
{
  *(_DWORD *)(result + 420) = *(_DWORD *)a2;
  *(_DWORD *)(result + 424) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 428) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 432) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 436) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(result + 440) = *((_DWORD *)a2 + 5);
  *(_BYTE *)(result + 444) = *((_BYTE *)a2 + 24);
  return result;
}


int __fastcall RenderChunkBuilder::_buildRanges(RenderChunkBuilder *this)
{
  RenderChunkBuilder *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r5@1
  int v8; // r0@1
  int v9; // r5@1
  int v10; // r0@1
  int v11; // r5@1
  int v12; // r0@1
  int v13; // r5@1
  int v14; // r0@1
  int v15; // r5@1
  int v16; // r0@1
  int v17; // r5@1
  int v18; // r0@1
  int v19; // r5@1
  int v20; // r0@1
  int v22; // [sp+0h] [bp-60h]@1
  int v23; // [sp+Ch] [bp-54h]@1
  int v24; // [sp+10h] [bp-50h]@1
  int v25; // [sp+14h] [bp-4Ch]@1
  int v26; // [sp+18h] [bp-48h]@1
  int v27; // [sp+1Ch] [bp-44h]@1
  int v28; // [sp+20h] [bp-40h]@1
  int v29; // [sp+24h] [bp-3Ch]@1
  int v30; // [sp+28h] [bp-38h]@1
  int v31; // [sp+2Ch] [bp-34h]@1
  int v32; // [sp+30h] [bp-30h]@1
  int v33; // [sp+34h] [bp-2Ch]@1
  int v34; // [sp+38h] [bp-28h]@1
  int v35; // [sp+3Ch] [bp-24h]@1
  int v36; // [sp+40h] [bp-20h]@1
  int v37; // [sp+44h] [bp-1Ch]@1
  int v38; // [sp+48h] [bp-18h]@1
  int v39; // [sp+4Ch] [bp-14h]@1

  v1 = this;
  _aeabi_memclr8(&v22, 76);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  _aeabi_memcpy4((char *)v1 + 108, &v22, 80);
  v2 = BlockQueue::getIndexCount(*((BlockQueue **)v1 + 47));
  v3 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 108), 0, v2);
  v4 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 49160));
  v5 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 116), v3, v4);
  v6 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 98320));
  v7 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 124), v5, v6);
  v8 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 147480));
  v9 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 132), v7, v8);
  v10 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 196640));
  v11 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 140), v9, v10);
  v12 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 245800));
  v13 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 148), v11, v12);
  v14 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 294960));
  v15 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 156), v13, v14);
  v16 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 344120));
  v17 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 164), v15, v16);
  v18 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 393280));
  v19 = RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 172), v17, v18);
  v20 = BlockQueue::getIndexCount((BlockQueue *)(*((_DWORD *)v1 + 47) + 442440));
  return RangeIndices::set((RenderChunkBuilder *)((char *)v1 + 180), v19, v20);
}


int __fastcall RenderChunkBuilder::RenderChunkBuilder(int a1, ChunkSource *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  ChunkSource *v5; // r7@1
  void *v6; // r5@1
  void *v7; // r5@1
  int v8; // r5@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r6@8
  unsigned int v12; // r0@10
  int v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0xA0u);
  ChunkViewSource::ChunkViewSource((int)v6, v5, 0);
  *(_DWORD *)v3 = v6;
  v7 = operator new(0xDE00u);
  BlockTessellator::BlockTessellator((int)v7, 0);
  *(_DWORD *)(v3 + 4) = v7;
  *(_BYTE *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 9) = 0;
  *(_BYTE *)(v3 + 10) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  VisibilityNode::VisibilityNode((VisibilityNode *)(v3 + 16), 0);
  _aeabi_memclr4(v3 + 24, 172);
  *(_DWORD *)(v3 + 196) = v4;
  v14 = 0;
  v15 = 0;
  RenderChunkSorter::RenderChunkSorter(v3 + 200, (int)&v14);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  *(_BYTE *)(v3 + 416) = 0;
  AABB::AABB((AABB *)(v3 + 420));
  return v3;
}


signed int __fastcall RenderChunkBuilder::_seesSkyDirectly(RenderChunkBuilder *this, RenderChunk *a2, BlockSource *a3)
{
  BlockSource *v3; // r4@1
  int v4; // r0@1
  int v5; // r9@1
  int v6; // r1@1
  int v7; // r8@1
  int v8; // r10@1
  int v9; // r0@4
  unsigned __int8 v16; // [sp+4h] [bp-3Ch]@5
  __int64 v17; // [sp+8h] [bp-38h]@1
  int v18; // [sp+10h] [bp-30h]@1
  __int64 v19; // [sp+14h] [bp-2Ch]@1
  int v20; // [sp+1Ch] [bp-24h]@1

  v3 = a3;
  RenderChunk::getPosition((RenderChunk *)&v19, (int)a2);
  v4 = v19;
  v5 = HIDWORD(v19) + 16;
  v6 = v20;
  v17 = v19;
  v7 = v19 + 15;
  v8 = v20 + 16;
  v18 = v20;
  while ( 1 )
  {
    v18 = v6;
    if ( v6 < v8 )
      break;
LABEL_11:
    LODWORD(v17) = v4 + 1;
    if ( v4 >= v7 )
      return 0;
    v6 = v20;
    ++v4;
  }
    v9 = BlockSource::getHeightmap(v3, (const BlockPos *)&v17);
    do
    {
      HIDWORD(v17) = v9;
      BlockSource::getBlockID((BlockSource *)&v16, v3, (int)&v17);
      _R0 = &Block::mTranslucency[v16];
      __asm
      {
        VLDR            S0, [R0]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        break;
      v9 = HIDWORD(v17) - 1;
    }
    while ( SHIDWORD(v17) > 0 );
    if ( SHIDWORD(v17) <= v5 && SHIDWORD(v17) >= SHIDWORD(v19) )
      return 1;
    if ( ++v18 >= v8 )
      v4 = v17;
      goto LABEL_11;
}


unsigned int __fastcall RenderChunkBuilder::_checkPropagatedBrightness(RenderChunkBuilder *this, BlockSource *a2, const BlockPos *a3)
{
  RenderChunkBuilder *v3; // r4@1
  unsigned int result; // r0@2
  unsigned __int8 v5; // [sp+4h] [bp-Ch]@3
  char v6; // [sp+5h] [bp-Bh]@6

  v3 = this;
  if ( !*((_BYTE *)this + 10) || (result = *((_BYTE *)this + 9), *((_BYTE *)v3 + 9)) )
  {
    BlockSource::getBrightnessPair((BlockSource *)&v5, a2, a3);
    result = v5;
    if ( v5 )
      *((_BYTE *)v3 + 10) = 1;
    if ( *((_BYTE *)v3 + 9) )
    {
      result = (unsigned __int8)(result + v6);
      if ( result >= 3 )
      {
        result = 0;
        *((_BYTE *)v3 + 9) = 0;
      }
    }
  }
  return result;
}
