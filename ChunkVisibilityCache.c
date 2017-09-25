

int __fastcall ChunkVisibilityCache::setElem(ChunkVisibilityCache *this, const SubChunkPos *a2, const VisibilityNode *a3, int a4)
{
  const SubChunkPos *v4; // r5@1
  ChunkVisibilityCache *v5; // r6@1
  int v6; // r8@1
  int v7; // r7@1
  int result; // r0@1

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = *(_DWORD *)v5
     + 16
     * ((*(_QWORD *)a2 & *((_DWORD *)v5 + 3))
      + ((*((_DWORD *)a2 + 2) & *((_DWORD *)v5 + 3)) << *((_WORD *)v5 + 8))
      + (*(_QWORD *)a2 >> 32 << (*((_WORD *)v5 + 8) >> 8)));
  ChunkVisibilityCacheElement::updateVisibilityMatrix((ChunkVisibilityCacheElement *)v7, a3);
  result = 4 * (*(_DWORD *)v4 >> *((_BYTE *)v5 + 16)) & 4 | *(_BYTE *)(v7 + 13) & 0xC2 | 32 * v6 | 8
                                                                                                 * (*((_DWORD *)v4 + 2) >> *((_BYTE *)v5 + 16)) & 8 | 0x11;
  *(_BYTE *)(v7 + 13) = result;
  return result;
}


int __fastcall ChunkVisibilityCache::invalidateAllElements(int result)
{
  int i; // r1@1
  int v2; // r12@1

  v2 = *(_QWORD *)result >> 32;
  for ( i = *(_QWORD *)result; v2 != i; i += 16 )
  {
    result = 0;
    *(_QWORD *)i = 0LL;
    *(_QWORD *)(i + 8) = 0LL;
  }
  return result;
}


int __fastcall ChunkVisibilityCache::resetViewAreaSide(ChunkVisibilityCache *this, int a2, int a3)
{
  ChunkVisibilityCache *v3; // r5@1
  int v4; // r3@1
  char v5; // r0@1
  int v6; // r4@1
  __int64 v7; // r0@3
  unsigned int v8; // r2@3
  unsigned int v9; // r3@3

  v3 = this;
  v4 = 1;
  v5 = 0;
  v6 = 0;
  if ( a2 >= 2 )
  {
    do
    {
      v6 |= v4;
      ++v5;
      v4 *= 2;
    }
    while ( v4 < a2 );
  }
  *((_DWORD *)v3 + 3) = v6;
  *((_BYTE *)v3 + 16) = v5;
  *((_BYTE *)v3 + 17) = 2 * v5;
  v7 = *(_QWORD *)v3;
  v8 = a3 * v4 * v4;
  v9 = (HIDWORD(v7) - (signed int)v7) >> 4;
  if ( v8 <= v9 )
    if ( v8 < v9 )
      HIDWORD(v7) = v7 + 16 * v8;
      *((_DWORD *)v3 + 1) = HIDWORD(v7);
  else
    std::vector<ChunkVisibilityCacheElement,std::allocator<ChunkVisibilityCacheElement>>::_M_default_append(
      (int)v3,
      v8 - v9);
    v7 = *(_QWORD *)v3;
  for ( ; HIDWORD(v7) != (_DWORD)v7; LODWORD(v7) = v7 + 16 )
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 12) = 0;
  return v7;
}


int __fastcall ChunkVisibilityCache::resetFrameCounters(int result, int a2)
{
  int v2; // lr@1
  signed int v3; // r2@1
  signed int v4; // r2@2
  signed int v5; // r3@2

  v2 = *(_QWORD *)result;
  v3 = (*(_QWORD *)result >> 32) - v2;
  if ( v3 >> 4 )
  {
    v4 = v3 >> 4;
    v5 = 14;
    do
    {
      if ( *(_BYTE *)(v2 + v5) != a2 )
      {
        *(_BYTE *)(v2 + v5 - 1) &= 0xFDu;
        v2 = *(_DWORD *)result;
      }
      *(_BYTE *)(v2 + v5) = 0;
      v5 += 16;
      --v4;
    }
    while ( v4 );
  }
  return result;
}


int __fastcall ChunkVisibilityCache::ChunkVisibilityCache(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
