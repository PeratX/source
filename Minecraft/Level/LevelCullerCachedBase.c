

int __fastcall LevelCullerCachedBase::invalidateChunk(LevelCullerCachedBase *this, const SubChunkPos *a2)
{
  LevelCullerCachedBase *v2; // r4@1
  unsigned __int8 *v3; // r7@1
  unsigned int v4; // r2@2
  unsigned __int64 *v5; // r0@4
  int v6; // r5@4
  __int64 v7; // kr00_8@4
  int v8; // r9@7
  __int64 v9; // r0@7
  void *v10; // r8@9
  unsigned int v11; // r2@9
  unsigned int v12; // r1@11
  unsigned int v13; // r5@11
  char *v14; // r6@17
  char *v15; // r11@19
  int result; // r0@24

  v2 = this;
  v3 = (unsigned __int8 *)this + 96;
  do
  {
    do
      v4 = __ldrex(v3);
    while ( __strex(1u, v3) );
    __dmb();
  }
  while ( v4 );
  v5 = (unsigned __int64 *)((char *)this + 60);
  v6 = *((_DWORD *)v2 + 15);
  v7 = *((_QWORD *)v2 + 8);
  if ( (_DWORD)v7 == HIDWORD(v7) )
    std::vector<SubChunkPos,std::allocator<SubChunkPos>>::_M_emplace_back_aux<SubChunkPos const&>(v5, (int)a2);
  else
    *(_DWORD *)v7 = *(_DWORD *)a2;
    *(_DWORD *)(v7 + 4) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(v7 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)v2 + 16) = v7 + 12;
  v8 = -1431655765 * (((signed int)v7 - v6) >> 2);
  v9 = *((_QWORD *)v2 + 5);
  if ( (_DWORD)v9 == HIDWORD(v9) )
    v10 = (void *)*((_DWORD *)v2 + 9);
    v11 = ((signed int)v9 - (signed int)v10) >> 3;
    if ( !v11 )
      v11 = 1;
    HIDWORD(v9) = v11 + (((signed int)v9 - (signed int)v10) >> 3);
    v13 = v11 + (((signed int)v9 - (signed int)v10) >> 3);
    if ( 0 != HIDWORD(v9) >> 29 )
      v13 = 0x1FFFFFFF;
    if ( v12 < v11 )
    if ( v13 )
    {
      if ( v13 >= 0x20000000 )
        sub_21E57F4();
      v14 = (char *)operator new(8 * v13);
      LODWORD(v9) = *(_QWORD *)((char *)v2 + 36) >> 32;
      v10 = (void *)*(_QWORD *)((char *)v2 + 36);
    }
    else
      v14 = 0;
    v15 = &v14[v9 - (_DWORD)v10];
    *(_DWORD *)v15 = 3;
    *((_DWORD *)v15 + 1) = v8;
    if ( 0 != ((signed int)v9 - (signed int)v10) >> 3 )
      _aeabi_memmove4(v14, v10);
    if ( v10 )
      operator delete(v10);
    *((_DWORD *)v2 + 9) = v14;
    *((_DWORD *)v2 + 10) = v15 + 8;
    *((_DWORD *)v2 + 11) = &v14[8 * v13];
    *(_DWORD *)v9 = 3;
    *(_DWORD *)(v9 + 4) = v8;
    *((_DWORD *)v2 + 10) += 8;
  result = 0;
  __dmb();
  *v3 = 0;
  return result;
}


int __fastcall LevelCullerCachedBase::resetCullingWorldDimensions(LevelCullerCachedBase *this, int a2, int a3, int a4)
{
  LevelCullerCachedBase *v4; // r4@1
  unsigned __int8 *v5; // r7@1
  int v6; // r8@1
  int v7; // r9@1
  int v8; // r10@1
  unsigned int v9; // r1@2
  __int64 v10; // kr00_8@4
  int v11; // r3@4
  unsigned int v12; // r1@6
  unsigned int v13; // r0@8
  bool v14; // cf@10
  char *v15; // r5@13
  __int64 v16; // kr08_8@13
  char *v17; // r0@13
  __int64 v18; // r0@18
  void *v19; // r8@20
  unsigned int v20; // r2@20
  unsigned int v21; // r1@22
  unsigned int v22; // r5@22
  int v23; // r10@27
  char *v24; // r6@28
  char *v25; // r10@30
  int result; // r0@35
  int v27; // [sp+4h] [bp-2Ch]@13

  v4 = this;
  v5 = (unsigned __int8 *)this + 96;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  do
  {
    do
      v9 = __ldrex(v5);
    while ( __strex(1u, v5) );
    __dmb();
  }
  while ( v9 );
  v10 = *(_QWORD *)((char *)this + 84);
  v11 = -1431655765 * ((HIDWORD(v10) - (signed int)v10) >> 2);
  if ( HIDWORD(v10) == *((_DWORD *)this + 23) )
    v12 = -1431655765 * ((HIDWORD(v10) - (signed int)v10) >> 2);
    if ( HIDWORD(v10) == (_DWORD)v10 )
      v12 = 1;
    v13 = v12 + v11;
    if ( v12 + v11 > 0x15555555 )
      v13 = 357913941;
    v14 = v12 + v11 >= v12;
    LOWORD(v12) = 21846;
    if ( !v14 )
    HIWORD(v12) = 5461;
    if ( v13 >= v12 )
      sub_21E57F4();
    v27 = 3 * v13;
    v15 = (char *)operator new(12 * v13);
    v16 = *(_QWORD *)((char *)v4 + 84);
    *(_DWORD *)&v15[HIDWORD(v16) - v16] = v8;
    v17 = &v15[HIDWORD(v16) - v16];
    *((_DWORD *)v17 + 1) = v7;
    *((_DWORD *)v17 + 2) = v6;
    if ( HIDWORD(v16) != (_DWORD)v16 )
      _aeabi_memmove4(v15, v16);
    if ( (_DWORD)v16 )
      operator delete((void *)v16);
    *((_DWORD *)v4 + 21) = v15;
    *((_DWORD *)v4 + 22) = &v15[4 * ((HIDWORD(v16) - (signed int)v16) >> 2) + 12];
    v11 = -1431655765 * ((HIDWORD(v10) - (signed int)v10) >> 2);
    *((_DWORD *)v4 + 23) = &v15[4 * v27];
  else
    *(_DWORD *)HIDWORD(v10) = v8;
    *(_DWORD *)(HIDWORD(v10) + 4) = a3;
    *(_DWORD *)(HIDWORD(v10) + 8) = v6;
    *((_DWORD *)this + 22) += 12;
  v18 = *((_QWORD *)v4 + 5);
  if ( (_DWORD)v18 == HIDWORD(v18) )
    v19 = (void *)*((_DWORD *)v4 + 9);
    v20 = ((signed int)v18 - (signed int)v19) >> 3;
    if ( !v20 )
      v20 = 1;
    HIDWORD(v18) = v20 + (((signed int)v18 - (signed int)v19) >> 3);
    v22 = v20 + (((signed int)v18 - (signed int)v19) >> 3);
    if ( 0 != HIDWORD(v18) >> 29 )
      v22 = 0x1FFFFFFF;
    if ( v21 < v20 )
    if ( v22 )
    {
      v23 = v11;
      if ( v22 >= 0x20000000 )
        sub_21E57F4();
      v24 = (char *)operator new(8 * v22);
      LODWORD(v18) = *(_QWORD *)((char *)v4 + 36) >> 32;
      v19 = (void *)*(_QWORD *)((char *)v4 + 36);
      v11 = v23;
    }
    else
      v24 = 0;
    v25 = &v24[v18 - (_DWORD)v19];
    *(_DWORD *)&v24[v18 - (_DWORD)v19] = 0;
    *((_DWORD *)v25 + 1) = v11;
    if ( 0 != ((signed int)v18 - (signed int)v19) >> 3 )
      _aeabi_memmove4(v24, v19);
    if ( v19 )
      operator delete(v19);
    *((_DWORD *)v4 + 9) = v24;
    *((_DWORD *)v4 + 10) = v25 + 8;
    *((_DWORD *)v4 + 11) = &v24[8 * v22];
    *(_DWORD *)v18 = 0;
    *(_DWORD *)(v18 + 4) = v11;
    *((_DWORD *)v4 + 10) += 8;
  result = 0;
  __dmb();
  *v5 = 0;
  return result;
}


LevelCullerCachedBase *__fastcall LevelCullerCachedBase::~LevelCullerCachedBase(LevelCullerCachedBase *this)
{
  LevelCullerCachedBase *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  void *v5; // r0@7
  void *v6; // r0@9
  void **v7; // r5@11

  v1 = this;
  *(_DWORD *)this = &off_26E8404;
  *((_DWORD *)this + 6) = 0x7FFFFFFF;
  *((_DWORD *)this + 7) = 0x7FFFFFFF;
  v2 = (void *)*((_DWORD *)this + 21);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 18);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 15);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 12);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 9);
  if ( v6 )
    operator delete(v6);
  v7 = (void **)*((_DWORD *)v1 + 1);
  if ( v7 )
  {
    if ( *v7 )
      operator delete(*v7);
    operator delete(v7);
  }
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall LevelCullerCachedBase::LevelCullerCachedBase(int a1)
{
  int v1; // r4@1
  ChunkVisibilityCache *v2; // r7@1
  void **v3; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26E8404;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = -1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  _aeabi_memclr4(a1 + 36, 60);
  __dmb();
  *(_BYTE *)(v1 + 96) = 0;
  v2 = (ChunkVisibilityCache *)operator new(0x14u);
  ChunkVisibilityCache::ChunkVisibilityCache(v2);
  v3 = *(void ***)(v1 + 4);
  *(_DWORD *)(v1 + 4) = v2;
  if ( v3 )
  {
    if ( *v3 )
      operator delete(*v3);
    operator delete(v3);
  }
  return v1;
}


void __fastcall LevelCullerCachedBase::~LevelCullerCachedBase(LevelCullerCachedBase *this)
{
  LevelCullerCachedBase::~LevelCullerCachedBase(this);
}


int __fastcall LevelCullerCachedBase::updateChunkData(int result, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  int v4; // r1@1
  char v5; // r7@2
  unsigned __int8 *v6; // r7@4
  int v7; // r0@4
  unsigned int v8; // r2@5
  int v9; // r5@7
  __int64 v10; // kr00_8@7
  int v11; // r9@10
  __int64 v12; // r0@10
  void *v13; // r8@12
  unsigned int v14; // r2@12
  unsigned int v15; // r1@14
  unsigned int v16; // r5@14
  char *v17; // r6@20
  char *v18; // r11@22
  int v19; // [sp+0h] [bp-50h]@2
  int v20; // [sp+4h] [bp-4Ch]@2
  int v21; // [sp+8h] [bp-48h]@2
  char v22; // [sp+Ch] [bp-44h]@4
  int v23; // [sp+Dh] [bp-43h]@2
  __int16 v24; // [sp+11h] [bp-3Fh]@4
  char v25; // [sp+13h] [bp-3Dh]@4
  char v26; // [sp+14h] [bp-3Ch]@2
  int v27; // [sp+20h] [bp-30h]@2
  int v28; // [sp+24h] [bp-2Ch]@2
  int v29; // [sp+28h] [bp-28h]@2

  v2 = a2;
  v3 = result;
  v4 = *a2;
  if ( v4 )
  {
    RenderChunk::getPosition((RenderChunk *)&v26, v4);
    SubChunkPos::SubChunkPos((SubChunkPos *)&v27, (const BlockPos *)&v26);
    v5 = 0;
    VisibilityNode::VisibilityNode((VisibilityNode *)&v23, 0);
    v19 = v27;
    v20 = v28;
    v21 = v29;
    if ( RenderChunk::isAllDark((RenderChunk *)*v2) == 1 )
      v5 = RenderChunk::isSkyLit((RenderChunk *)*v2) ^ 1;
    v22 = v5;
    v25 = RenderChunk::isEmpty((RenderChunk *)*v2);
    v6 = (unsigned __int8 *)(v3 + 96);
    v7 = *(_DWORD *)(*v2 + 212);
    v24 = *(_WORD *)(*v2 + 216);
    v23 = v7;
    do
    {
      do
        v8 = __ldrex(v6);
      while ( __strex(1u, v6) );
      __dmb();
    }
    while ( v8 );
    v9 = *(_DWORD *)(v3 + 72);
    v10 = *(_QWORD *)(v3 + 76);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      std::vector<LevelCullerCachedBase::UpdateChunkData,std::allocator<LevelCullerCachedBase::UpdateChunkData>>::_M_emplace_back_aux<LevelCullerCachedBase::UpdateChunkData const&>(
        (unsigned __int64 *)(v3 + 72),
        (int)&v19);
    else
      *(_DWORD *)v10 = v19;
      *(_DWORD *)(v10 + 4) = v20;
      *(_DWORD *)(v10 + 8) = v21;
      *(_QWORD *)(v10 + 12) = *(_QWORD *)&v22;
      *(_DWORD *)(v3 + 76) += 20;
    v11 = -858993459 * (((signed int)v10 - v9) >> 2);
    v12 = *(_QWORD *)(v3 + 40);
    if ( (_DWORD)v12 == HIDWORD(v12) )
      v13 = *(void **)(v3 + 36);
      v14 = ((signed int)v12 - (signed int)v13) >> 3;
      if ( !v14 )
        v14 = 1;
      HIDWORD(v12) = v14 + (((signed int)v12 - (signed int)v13) >> 3);
      v16 = v14 + (((signed int)v12 - (signed int)v13) >> 3);
      if ( 0 != HIDWORD(v12) >> 29 )
        v16 = 0x1FFFFFFF;
      if ( v15 < v14 )
      if ( v16 )
      {
        if ( v16 >= 0x20000000 )
          sub_21E57F4();
        v17 = (char *)operator new(8 * v16);
        LODWORD(v12) = *(_QWORD *)(v3 + 36) >> 32;
        v13 = (void *)*(_QWORD *)(v3 + 36);
      }
      else
        v17 = 0;
      v18 = &v17[v12 - (_DWORD)v13];
      *(_DWORD *)v18 = 1;
      *((_DWORD *)v18 + 1) = v11;
      if ( 0 != ((signed int)v12 - (signed int)v13) >> 3 )
        _aeabi_memmove4(v17, v13);
      if ( v13 )
        operator delete(v13);
      *(_DWORD *)(v3 + 36) = v17;
      *(_DWORD *)(v3 + 40) = v18 + 8;
      *(_DWORD *)(v3 + 44) = &v17[8 * v16];
      *(_DWORD *)v12 = 1;
      *(_DWORD *)(v12 + 4) = v11;
      *(_DWORD *)(v3 + 40) += 8;
    result = 0;
    __dmb();
    *v6 = 0;
  }
  return result;
}


unsigned int __fastcall LevelCullerCachedBase::isBlockPosVisible(LevelCullerCachedBase *this, const BlockPos *a2)
{
  LevelCullerCachedBase *v2; // r4@1
  unsigned __int8 *v3; // r5@1
  unsigned int v4; // r2@2
  int v5; // r7@4
  unsigned int result; // r0@4
  int v7; // r1@5
  int v8; // r0@5
  int v9; // r2@5
  signed int v10; // r1@6
  int v11; // r3@7
  int v12; // [sp+4h] [bp-24h]@5
  int v13; // [sp+8h] [bp-20h]@5
  int v14; // [sp+Ch] [bp-1Ch]@5

  v2 = this;
  v3 = (unsigned __int8 *)this + 96;
  do
  {
    do
      v4 = __ldrex(v3);
    while ( __strex(1u, v3) );
    __dmb();
  }
  while ( v4 );
  v5 = *((_DWORD *)this + 1);
  result = 0;
  if ( *(_QWORD *)v5 >> 32 != (unsigned int)*(_QWORD *)v5 )
    SubChunkPos::SubChunkPos((SubChunkPos *)&v12, a2);
    v7 = *((_BYTE *)v2 + 32);
    v8 = *(_DWORD *)v5
       + 16
       * ((v12 & *(_DWORD *)(v5 + 12))
        + ((*(_DWORD *)(v5 + 12) & v14) << *(_WORD *)(v5 + 16))
        + (v13 << (*(_WORD *)(v5 + 16) >> 8)));
    v9 = *(_BYTE *)(v8 + 14);
    if ( v9 == v7 )
    {
      v10 = 1;
    }
    else
      v11 = v7 - 1;
      v10 = 0;
      if ( v9 == v11 )
        v10 = 1;
    result = v10 & ((*(_BYTE *)(v8 + 13) & 2u) >> 1);
  __dmb();
  *v3 = 0;
  return result;
}


int __fastcall LevelCullerCachedBase::_applyChunkCacheChanges(LevelCullerCachedBase *this)
{
  LevelCullerCachedBase *v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  int v4; // r6@4
  int v5; // r9@4
  int v6; // r2@6
  int v7; // r1@6
  int v8; // r0@6
  int v9; // r2@6
  int v10; // r1@7
  int v11; // r0@7
  int v12; // r1@7
  int v13; // r3@7
  unsigned int v14; // r0@7
  int v15; // r1@7
  int v16; // r2@8
  int v17; // r0@8
  int v18; // r1@8
  int v19; // r3@8
  int v20; // r1@8
  int v21; // r0@9
  int result; // r0@13

  v1 = this;
  v2 = (unsigned __int8 *)this + 96;
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v5 = *(_QWORD *)((char *)this + 36) >> 32;
  v4 = *(_QWORD *)((char *)this + 36);
  if ( v4 != v5 )
    {
      switch ( *(_DWORD *)v4 )
      {
        case 0:
          v6 = *((_DWORD *)v1 + 21);
          v7 = *(_DWORD *)(v6 + 12 * *(_DWORD *)(v4 + 4));
          v8 = v6 + 12 * *(_DWORD *)(v4 + 4);
          *((_DWORD *)v1 + 2) = v7;
          v9 = *(_DWORD *)(v8 + 4);
          *((_DWORD *)v1 + 3) = v9;
          *((_DWORD *)v1 + 6) = 0x7FFFFFFF;
          *((_DWORD *)v1 + 7) = 0x7FFFFFFF;
          ChunkVisibilityCache::resetViewAreaSide(*((ChunkVisibilityCache **)v1 + 1), v7, v9);
          *((_DWORD *)v1 + 4) = *(_DWORD *)(*((_DWORD *)v1 + 21) + 12 * *(_DWORD *)(v4 + 4) + 8);
          break;
        case 1:
          v10 = *((_DWORD *)v1 + 18) + 20 * *(_DWORD *)(v4 + 4);
          ChunkVisibilityCache::setElem(
            *((ChunkVisibilityCache **)v1 + 1),
            (const SubChunkPos *)v10,
            (const VisibilityNode *)(v10 + 13),
            *(_BYTE *)(v10 + 12));
          v11 = *((_DWORD *)v1 + 1);
          v12 = *((_DWORD *)v1 + 18);
          v13 = *(_DWORD *)(v12 + 20 * *(_DWORD *)(v4 + 4));
          v15 = v12 + 20 * *(_DWORD *)(v4 + 4);
          v14 = *(_DWORD *)v11
              + 16
              * (((unsigned int)*(_QWORD *)(v15 + 4) << (*(_WORD *)(v11 + 16) >> 8))
               + (((unsigned int)(*(_QWORD *)(v15 + 4) >> 32) & *(_DWORD *)(v11 + 12)) << *(_WORD *)(v11 + 16))
               + (v13 & *(_DWORD *)(v11 + 12)));
          LOBYTE(v15) = *(_BYTE *)(v15 + 19) | *(_BYTE *)(v14 + 13) & 0xFE;
          goto LABEL_10;
        case 2:
          v16 = *(_DWORD *)(v4 + 4);
          v17 = *((_DWORD *)v1 + 1);
          v18 = *((_DWORD *)v1 + 12);
          v19 = *(_DWORD *)(v18 + 16 * v16);
          v20 = v18 + 16 * v16;
          v14 = *(_DWORD *)v17
              * (((unsigned int)*(_QWORD *)(v20 + 4) << (*(_WORD *)(v17 + 16) >> 8))
               + (((unsigned int)(*(_QWORD *)(v20 + 4) >> 32) & *(_DWORD *)(v17 + 12)) << *(_WORD *)(v17 + 16))
               + (v19 & *(_DWORD *)(v17 + 12)));
          v15 = (*(_BYTE *)(v14 + 13) & 0x7F | (*(_BYTE *)(v20 + 12) << 7)) ^ 0x80;
        case 3:
          v21 = *((_DWORD *)v1 + 1);
          v15 = *((_DWORD *)v1 + 15);
          v14 = *(_DWORD *)v21
              * (((unsigned int)*(_QWORD *)(v15 + 12 * *(_DWORD *)(v4 + 4) + 4) << (*(_WORD *)(v21 + 16) >> 8))
               + (((unsigned int)(*(_QWORD *)(v15 + 12 * *(_DWORD *)(v4 + 4) + 4) >> 32) & *(_DWORD *)(v21 + 12)) << *(_WORD *)(v21 + 16))
               + (*(_DWORD *)(v15 + 12 * *(_DWORD *)(v4 + 4)) & *(_DWORD *)(v21 + 12)));
          LOBYTE(v15) = *(_BYTE *)(v14 + 13) & 0xEF;
LABEL_10:
          *(_BYTE *)(v14 + 13) = v15;
        default:
      }
      v4 += 8;
    }
    while ( v5 != v4 );
    v4 = *((_DWORD *)v1 + 9);
  *((_DWORD *)v1 + 13) = *((_DWORD *)v1 + 12);
  *((_DWORD *)v1 + 16) = *((_DWORD *)v1 + 15);
  *((_DWORD *)v1 + 22) = *((_DWORD *)v1 + 21);
  *((_DWORD *)v1 + 19) = *((_DWORD *)v1 + 18);
  result = 0;
  *((_DWORD *)v1 + 10) = v4;
  __dmb();
  *((_BYTE *)v1 + 96) = 0;
  return result;
}


int __fastcall LevelCullerCachedBase::setDirty(LevelCullerCachedBase *this, const SubChunkPos *a2, bool a3)
{
  LevelCullerCachedBase *v3; // r4@1
  unsigned __int8 *v4; // r7@1
  unsigned int v5; // r1@2
  unsigned __int64 *v6; // r0@4
  int v7; // r5@4
  __int64 v8; // kr00_8@4
  int v9; // r9@7
  __int64 v10; // r0@7
  void *v11; // r8@9
  unsigned int v12; // r2@9
  unsigned int v13; // r1@11
  unsigned int v14; // r5@11
  char *v15; // r6@17
  char *v16; // r11@19
  int result; // r0@24
  int v18; // [sp+4h] [bp-34h]@1
  int v19; // [sp+8h] [bp-30h]@1
  int v20; // [sp+Ch] [bp-2Ch]@1
  bool v21; // [sp+10h] [bp-28h]@1

  v3 = this;
  v18 = *(_DWORD *)a2;
  v4 = (unsigned __int8 *)this + 96;
  v19 = *((_DWORD *)a2 + 1);
  v20 = *((_DWORD *)a2 + 2);
  v21 = a3;
  do
  {
    do
      v5 = __ldrex(v4);
    while ( __strex(1u, v4) );
    __dmb();
  }
  while ( v5 );
  v6 = (unsigned __int64 *)((char *)this + 48);
  v7 = *((_DWORD *)v3 + 12);
  v8 = *(_QWORD *)((char *)v3 + 52);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<LevelCullerCachedBase::ApplyDirty,std::allocator<LevelCullerCachedBase::ApplyDirty>>::_M_emplace_back_aux<LevelCullerCachedBase::ApplyDirty const&>(
      v6,
      (int)&v18);
  else
    *(_DWORD *)v8 = v18;
    *(_DWORD *)(v8 + 4) = v19;
    *(_DWORD *)(v8 + 8) = v20;
    *(_BYTE *)(v8 + 12) = v21;
    *((_DWORD *)v3 + 13) = v8 + 16;
  v9 = ((signed int)v8 - v7) >> 4;
  v10 = *((_QWORD *)v3 + 5);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    v11 = (void *)*((_DWORD *)v3 + 9);
    v12 = ((signed int)v10 - (signed int)v11) >> 3;
    if ( !v12 )
      v12 = 1;
    HIDWORD(v10) = v12 + (((signed int)v10 - (signed int)v11) >> 3);
    v14 = v12 + (((signed int)v10 - (signed int)v11) >> 3);
    if ( 0 != HIDWORD(v10) >> 29 )
      v14 = 0x1FFFFFFF;
    if ( v13 < v12 )
    if ( v14 )
    {
      if ( v14 >= 0x20000000 )
        sub_21E57F4();
      v15 = (char *)operator new(8 * v14);
      LODWORD(v10) = *(_QWORD *)((char *)v3 + 36) >> 32;
      v11 = (void *)*(_QWORD *)((char *)v3 + 36);
    }
    else
      v15 = 0;
    v16 = &v15[v10 - (_DWORD)v11];
    *(_DWORD *)v16 = 2;
    *((_DWORD *)v16 + 1) = v9;
    if ( 0 != ((signed int)v10 - (signed int)v11) >> 3 )
      _aeabi_memmove4(v15, v11);
    if ( v11 )
      operator delete(v11);
    *((_DWORD *)v3 + 9) = v15;
    *((_DWORD *)v3 + 10) = v16 + 8;
    *((_DWORD *)v3 + 11) = &v15[8 * v14];
    *(_DWORD *)v10 = 2;
    *(_DWORD *)(v10 + 4) = v9;
    *((_DWORD *)v3 + 10) += 8;
  result = 0;
  __dmb();
  *v4 = 0;
  return result;
}


void __fastcall LevelCullerCachedBase::~LevelCullerCachedBase(LevelCullerCachedBase *this)
{
  LevelCullerCachedBase *v1; // r0@1

  v1 = LevelCullerCachedBase::~LevelCullerCachedBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}
