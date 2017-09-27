

signed int __fastcall BlockTessellatorCache::getLightColor(BlockTessellatorCache *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r5@1
  int v4; // r11@1
  int v5; // r7@1
  BlockTessellatorCache *v6; // r10@1
  signed int result; // r0@1
  int v8; // r12@2
  int v9; // lr@2
  int v10; // r3@2
  char *v11; // r2@2
  int v12; // r6@2
  bool v13; // zf@2
  char *v14; // r0@7
  int v15; // r8@7
  int *v16; // r4@8
  int v17; // r1@11
  char v18; // r0@11
  int v19; // r1@15
  signed int v20; // r3@15
  unsigned __int8 v21; // vf@15
  int v22; // r0@15
  int v23; // r2@15 OVERLAPPED
  int v24; // r8@15
  char *v25; // r6@17
  int v26; // r0@17
  int v27; // r1@21
  int v28; // [sp+0h] [bp-50h]@21
  int v29; // [sp+4h] [bp-4Ch]@21
  __int64 v30; // [sp+8h] [bp-48h]@21
  char v31; // [sp+10h] [bp-40h]@21
  unsigned __int8 v32; // [sp+11h] [bp-3Fh]@21
  int v33; // [sp+14h] [bp-3Ch]@15
  int v34; // [sp+18h] [bp-38h]@15
  int v35; // [sp+1Ch] [bp-34h]@15
  char v36; // [sp+20h] [bp-30h]@11
  char v37; // [sp+24h] [bp-2Ch]@11
  unsigned __int8 v38; // [sp+25h] [bp-2Bh]@12
  char v39; // [sp+28h] [bp-28h]@11

  v3 = a2;
  v4 = a3;
  v5 = *((_DWORD *)a2 + 3);
  v6 = this;
  result = *(_DWORD *)(a3 + 4);
  if ( result >= *(_WORD *)(v5 + 24) )
  {
    result = (unsigned __int8)Brightness::MIN;
    *(_BYTE *)v6 = Brightness::MAX;
  }
  else
    v8 = *((_DWORD *)a2 + 2);
    v9 = *(_DWORD *)(a3 + 8);
    v10 = 400 * (*(_DWORD *)a3 - *(_DWORD *)a2);
    v11 = (char *)a2 + 2 * (v10 + 20 * (result - *((_DWORD *)a2 + 1)) + v9 - v8);
    v12 = (unsigned __int8)v11[17];
    v13 = v12 == Brightness::INVALID;
    if ( v12 != Brightness::INVALID )
    {
      v11 = (char *)(unsigned __int8)v11[16];
      v13 = v11 == (char *)Brightness::INVALID;
    }
    if ( !v13 )
      *(_BYTE *)v6 = (_BYTE)v11;
      *((_BYTE *)v6 + 1) = v12;
      return result;
    if ( result <= -1 )
      v15 = Block::mAir;
    else
      v14 = (char *)a2 + 4 * (20 * (result - *((_DWORD *)a2 + 1)) + v9 + v10 - v8);
      v15 = *((_DWORD *)v14 + 4004);
      if ( v15 == BlockTessellatorCache::mUnsetBlockValue )
      {
        v16 = (int *)(v14 + 16016);
        v15 = BlockSource::getBlock((BlockSource *)v5, (const BlockPos *)v4);
        *v16 = v15;
        v5 = *((_DWORD *)v3 + 3);
      }
    v39 = *(_BYTE *)(v15 + 4);
    Block::getLightEmission(&v36, &v39);
    BlockSource::getLightColor((int)&v37, v5, v4, &v36);
    v18 = v37;
    if ( !v37 )
      if ( v38 )
        v18 = 0;
      else if ( Block::hasProperty(v15, v17, 2LL) )
        v20 = *(_QWORD *)v4 >> 32;
        v19 = *(_QWORD *)v4;
        v21 = __OFSUB__(v20, 1);
        v22 = v20 - 1;
        v23 = *(_DWORD *)(v4 + 8);
        v33 = *(_QWORD *)v4;
        v34 = v22;
        v35 = v23;
        v24 = *((_DWORD *)v3 + 3);
        if ( (v22 < 0) ^ v21 || v20 > *(_WORD *)(v24 + 24) )
        {
          v26 = Block::mAir;
        }
        else
          v25 = (char *)v3
              + 4 * (v23 + 400 * (v19 - *(_QWORD *)v3) - *((_DWORD *)v3 + 2) + 20 * (v22 - (*(_QWORD *)v3 >> 32)));
          v26 = *((_DWORD *)v25 + 4004);
          if ( v26 == BlockTessellatorCache::mUnsetBlockValue )
          {
            v26 = BlockSource::getBlock(*((BlockSource **)v3 + 3), (const BlockPos *)&v33);
            *((_DWORD *)v25 + 4004) = v26;
            v20 = *(_QWORD *)v4 >> 32;
            v19 = *(_QWORD *)v4;
            v23 = *(_DWORD *)(v4 + 8);
            v24 = *((_DWORD *)v3 + 3);
          }
        v29 = v19;
        v27 = v20 - 1;
        v30 = *(_QWORD *)(&v23 - 1);
        v39 = *(_BYTE *)(v26 + 4);
        Block::getLightEmission(&v28, &v39);
        BlockSource::getLightColor((int)&v31, v24, (int)&v29, &v28);
        v18 = v31;
        v37 = v31;
        v38 = v32;
      else
        v18 = v37;
    *(_BYTE *)v6 = v18;
    result = v38;
  *((_BYTE *)v6 + 1) = result;
  return result;
}


unsigned int __fastcall BlockTessellatorCache::getData(BlockTessellatorCache *this, const BlockPos *a2)
{
  BlockTessellatorCache *v2; // r2@1
  signed int v3; // r12@1
  int v4; // r0@1
  unsigned int result; // r0@3
  char *v6; // r3@4
  unsigned int v7; // r2@4
  _BYTE *v8; // r4@5

  v2 = this;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)this + 3);
  if ( v3 > -1 || v3 < *(_WORD *)(v4 + 24) )
  {
    v6 = (char *)v2
       + *((_DWORD *)a2 + 2)
       + 400 * (*(_DWORD *)a2 - *(_QWORD *)v2)
       + 20 * (v3 - (*(_QWORD *)v2 >> 32))
       - *((_DWORD *)v2 + 2);
    v7 = (unsigned __int8)v6[48016];
    if ( v7 == 255 )
    {
      v8 = v6 + 48016;
      v7 = BlockSource::getData((BlockSource *)v4, a2);
      *v8 = v7;
    }
    result = v7;
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockTessellatorCache::reset(BlockTessellatorCache *this, BlockSource *a2, const BlockPos *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  char *v5; // r2@1
  char v6; // r1@2
  int v7; // r2@3

  *((_DWORD *)this + 3) = a2;
  v3 = *(_QWORD *)a3;
  v4 = *((_DWORD *)a3 + 2);
  *(_DWORD *)this = v3 - 2;
  *((_DWORD *)this + 1) = HIDWORD(v3) - 2;
  *((_DWORD *)this + 2) = v4 - 2;
  v5 = (char *)this + 16;
  do
  {
    v6 = Brightness::INVALID;
    *v5 = Brightness::INVALID;
    v5[1] = v6;
    v5 += 2;
  }
  while ( v5 != (char *)this + 16016 );
  v7 = 0;
    *(_DWORD *)((char *)this + v7 + 16016) = BlockTessellatorCache::mUnsetBlockValue;
    v7 += 4;
  while ( v7 != 32000 );
  return _aeabi_memset((char *)this + 48016, 8000, 255, &BlockTessellatorCache::mUnsetBlockValue);
}


int __fastcall BlockTessellatorCache::_getPosInArray(int result, const BlockPos *a2, int a3)
{
  int v3; // r12@1
  int v4; // lr@1
  __int64 v5; // kr00_8@1
  int v6; // r1@1
  int v7; // r2@1

  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *(_QWORD *)a3;
  v6 = *(_QWORD *)a3 - *(_DWORD *)a2;
  v7 = *(_DWORD *)(a3 + 8) - v4;
  *(_DWORD *)result = v6;
  *(_DWORD *)(result + 4) = HIDWORD(v5) - v3;
  *(_DWORD *)(result + 8) = v7;
  return result;
}


int __fastcall BlockTessellatorCache::getBlock(BlockTessellatorCache *this, const BlockPos *a2)
{
  signed int v2; // r12@1
  BlockTessellatorCache *v3; // r2@1
  int v4; // r0@2
  char *v5; // r3@3
  int v6; // r2@3
  int *v7; // r4@4

  v2 = *((_DWORD *)a2 + 1);
  v3 = this;
  if ( v2 < 0 || (v4 = *((_DWORD *)this + 3), v2 >= *(_WORD *)(v4 + 24)) )
  {
    v6 = Block::mAir;
  }
  else
    v5 = (char *)v3
       + 4
       * (*((_DWORD *)a2 + 2)
        + 400 * (*(_DWORD *)a2 - *(_QWORD *)v3)
        + 20 * (v2 - (*(_QWORD *)v3 >> 32))
        - *((_DWORD *)v3 + 2));
    v6 = *((_DWORD *)v5 + 4004);
    if ( v6 == BlockTessellatorCache::mUnsetBlockValue )
    {
      v7 = (int *)(v5 + 16016);
      v6 = BlockSource::getBlock((BlockSource *)v4, a2);
      *v7 = v6;
    }
  return v6;
}


_BYTE *__fastcall BlockTessellatorCache::_getLightEmission(BlockTessellatorCache *this, const Block *a2, int a3)
{
  char v4; // [sp+4h] [bp-Ch]@1

  v4 = *(_BYTE *)(a3 + 4);
  return Block::getLightEmission(this, &v4);
}


char *__fastcall BlockTessellatorCache::setBlockAtPosition(BlockTessellatorCache *this, const Block *a2, const BlockPos *a3)
{
  char *result; // r0@1

  result = (char *)this
         + 4
         * (*((_DWORD *)a3 + 2)
          + 400 * (*(_QWORD *)a3 - *(_DWORD *)this)
          + 20 * ((*(_QWORD *)a3 >> 32) - *((_DWORD *)this + 1))
          - *((_DWORD *)this + 2));
  *((_DWORD *)result + 4004) = a2;
  return result;
}


int __fastcall BlockTessellatorCache::resetToAir(BlockTessellatorCache *this, BlockSource *a2, const BlockPos *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  char *v5; // r2@1
  char v6; // r1@2
  int v7; // r2@3

  *((_DWORD *)this + 3) = a2;
  v3 = *(_QWORD *)a3;
  v4 = *((_DWORD *)a3 + 2);
  *(_DWORD *)this = v3 - 2;
  *((_DWORD *)this + 1) = HIDWORD(v3) - 2;
  *((_DWORD *)this + 2) = v4 - 2;
  v5 = (char *)this + 16;
  do
  {
    v6 = Brightness::MAX;
    *v5 = Brightness::MAX;
    v5[1] = v6;
    v5 += 2;
  }
  while ( v5 != (char *)this + 16016 );
  v7 = 0;
    *(_DWORD *)((char *)this + v7 + 16016) = Block::mAir;
    v7 += 4;
  while ( v7 != 32000 );
  return _aeabi_memset((char *)this + 48016, 8000, 255, &Block::mAir);
}
