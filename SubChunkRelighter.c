

int __fastcall SubChunkRelighter::_createSubChunk(SubChunkRelighter *this, unsigned int a2, unsigned int a3, unsigned int a4)
{
  SubChunkRelighter *v4; // r6@1
  unsigned int v5; // r5@1
  __int64 v6; // r0@1
  unsigned int v7; // r8@1
  unsigned int v8; // r7@1
  int v9; // r4@1
  int result; // r0@1
  unsigned int v12; // r1@1
  unsigned int v18; // r1@5
  int v19; // [sp+0h] [bp-20h]@1
  unsigned int v20; // [sp+4h] [bp-1Ch]@1

  v4 = this;
  v5 = a2;
  v6 = *((_QWORD *)this + 36);
  v7 = a4;
  v8 = a3;
  v19 = v6 + v5 - 1;
  v20 = a4 + HIDWORD(v6) - 1;
  v9 = BlockSource::getChunk(*((BlockSource **)v4 + 75), (const ChunkPos *)&v19);
  LevelChunk::createSubchunk((LevelChunk *)v9, *((_DWORD *)v4 + 74) + v8 - 1, 1);
  _R3 = *(_DWORD *)(v9 + 140);
  result = v9 + 76;
  v12 = *((_DWORD *)v4 + 74);
  __asm { SBFX.W          R2, R3, #0, #0x1E }
  if ( v12 - 1 < 4 * _R3 >> 2 )
    *((_DWORD *)v4 + 16 * v5 + 4 * v7) = *(_DWORD *)(result + 4 * (v12 - 1));
  if ( v12 < _R2 )
    *((_DWORD *)v4 + 16 * v5 + 4 * v7 + 1) = *(_DWORD *)(result + 4 * v12);
  v18 = v12 + 1;
  if ( v18 < _R2 )
  {
    result = *(_DWORD *)(result + 4 * v18);
    *((_DWORD *)v4 + 16 * v5 + 4 * v7 + 2) = result;
  }
  return result;
}


unsigned int __fastcall SubChunkRelighter::_setLightPair(SubChunkRelighter *this, unsigned int a2, int a3, int a4)
{
  SubChunkRelighter *v4; // r6@1
  unsigned int v5; // r7@1
  int v6; // r8@1
  unsigned int v7; // r9@1
  int v8; // r3@1
  unsigned int v9; // r11@1
  __int64 v10; // r4@1
  int v11; // r10@1
  int v12; // r2@1
  int v13; // lr@1
  char *v14; // r12@1
  int v15; // r0@1
  unsigned int result; // r0@2
  int v18; // r9@5
  __int64 v19; // r0@5
  int v20; // r4@5
  int v22; // r0@5
  unsigned int v23; // r1@5
  unsigned int v28; // r1@9
  unsigned int v29; // r2@12
  unsigned int v30; // r7@12
  int v31; // r2@14
  int v32; // [sp+0h] [bp-58h]@2
  int v33; // [sp+4h] [bp-54h]@5
  __int64 v34; // [sp+8h] [bp-50h]@5
  unsigned __int64 v35; // [sp+14h] [bp-44h]@2
  int v36; // [sp+20h] [bp-38h]@1
  int v37; // [sp+24h] [bp-34h]@1
  int v38; // [sp+28h] [bp-30h]@5
  int v39; // [sp+2Ch] [bp-2Ch]@5

  v4 = this;
  HIDWORD(v10) = a3;
  v37 = a4;
  v5 = a2;
  v36 = *((_DWORD *)this + 81);
  v6 = *((_DWORD *)this + 82);
  v7 = *((_DWORD *)this + 80);
  v8 = *((_QWORD *)this + 42) >> 32;
  v9 = *((_QWORD *)this + 42);
  LODWORD(v10) = *((_DWORD *)this + 87);
  v11 = (a2 >> *((_DWORD *)this + 90)) & v10;
  v12 = (a2 >> *((_DWORD *)this + 91)) & v10;
  v13 = (a2 >> *((_DWORD *)this + 89)) & v10;
  v14 = (char *)this + 64 * v12;
  v15 = *((_DWORD *)&v14[16 * v11] + v13);
  if ( v15 )
  {
LABEL_12:
    result = v15 + (v7 & v5 | ((v36 & v5) >> v6) | ((v9 & v5) >> v8));
    *((_BYTE *)v4 + 16 * v12 + 4 * v11 + v13 + 240) = 1;
    v29 = *(_BYTE *)(result + 6144);
    v30 = v29 >> 4;
    if ( (signed int)(v29 >> 4) < SHIDWORD(v10) )
      LOBYTE(v30) = BYTE4(v10);
    v31 = v29 & 0xF;
    if ( v31 < v37 )
      LOBYTE(v31) = v37;
    *(_BYTE *)(result + 6144) = v31 & 0xF | 16 * v30;
    return result;
  }
  v32 = (int)v4 + 64 * v12;
  LODWORD(v10) = v8;
  v35 = __PAIR__(v9, v7);
  result = *((_BYTE *)v4 + 317);
  _ZF = HIDWORD(v10) == result >> 4;
  if ( HIDWORD(v10) == result >> 4 )
    result &= 0xFu;
    _ZF = result == v37;
  if ( !_ZF )
    v34 = v10;
    v18 = (int)&v14[16 * v11];
    v19 = *((_QWORD *)v4 + 36);
    v33 = v12;
    v38 = v19 + v12 - 1;
    v39 = v11 + HIDWORD(v19) - 1;
    v20 = BlockSource::getChunk(*((BlockSource **)v4 + 75), (const ChunkPos *)&v38);
    LevelChunk::createSubchunk((LevelChunk *)v20, *((_DWORD *)v4 + 74) + v13 - 1, 1);
    _R3 = *(_DWORD *)(v20 + 140);
    v22 = v20 + 76;
    v23 = *((_DWORD *)v4 + 74);
    __asm { SBFX.W          R2, R3, #0, #0x1E }
    if ( v23 - 1 < 4 * _R3 >> 2 )
      *(_DWORD *)(v32 + 16 * v11) = *(_DWORD *)(v22 + 4 * (v23 - 1));
    if ( v23 < _R2 )
      *(_DWORD *)(v18 + 4) = *(_DWORD *)(v22 + 4 * v23);
    v28 = v23 + 1;
    if ( v28 < _R2 )
      *(_DWORD *)(v18 + 8) = *(_DWORD *)(v22 + 4 * v28);
    v15 = *(_DWORD *)(v18 + 4 * v13);
    HIDWORD(v10) = HIDWORD(v34);
    v9 = HIDWORD(v35);
    v7 = v35;
    v12 = v33;
    LOBYTE(v8) = v34;
    goto LABEL_12;
  return result;
}


int __fastcall SubChunkRelighter::_propagateLight(SubChunkRelighter *this, unsigned int a2)
{
  SubChunkRelighter *v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r2@1
  char v5; // r1@1
  int v6; // r3@1
  int result; // r0@1
  unsigned int v8; // r1@1
  bool v9; // cf@1
  bool v10; // zf@1
  unsigned int v11; // r7@2
  int v12; // r3@4
  int v13; // r0@5
  _BYTE *v14; // r1@5
  unsigned int v15; // r0@7
  int v16; // r6@7
  int v17; // r7@7

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 88);
  v5 = *((_QWORD *)this + 43);
  v6 = *((_QWORD *)this + 43) >> 32;
  result = (v3 >> *((_DWORD *)this + 91)) & v6;
  v8 = ((v3 >> v5) & v4) + 16 * result;
  v9 = v8 >= 0x2F;
  v10 = v8 == 47;
  if ( v8 <= 0x2F )
  {
    v8 = (v3 >> *((_DWORD *)v2 + 89)) & v6;
    v11 = (v4 & v3) + 16 * v8;
    v9 = v11 >= 0x2F;
    v10 = v11 == 47;
  }
  if ( v10 || !v9 )
    v12 = v6 & (v3 >> *((_DWORD *)v2 + 90));
    if ( (v4 & (v3 >> *((_DWORD *)v2 + 83))) + 16 * v12 <= 0x2F )
    {
      v13 = *((_DWORD *)v2 + 16 * result + 4 * v12 + v8);
      v14 = (_BYTE *)(((((unsigned int)(*((_QWORD *)v2 + 40) >> 32) & v3) >> *((_DWORD *)v2 + 82)) | *((_QWORD *)v2 + 40) & v3 | ((*((_DWORD *)v2 + 84) & v3) >> *((_DWORD *)v2 + 85)))
                    + v13
                    + 6144);
      if ( !v13 )
        v14 = (char *)v2 + 317;
      v15 = *v14;
      v16 = v15 & 0xF;
      v17 = v15 >> 4;
      SubChunkRelighter::_checkAndAddToQueue(v2, v3 - *((_DWORD *)v2 + 95), v15 >> 4, v16);
      SubChunkRelighter::_checkAndAddToQueue(v2, *((_DWORD *)v2 + 95) + v3, v17, v16);
      SubChunkRelighter::_checkAndAddToQueue(v2, v3 - *((_DWORD *)v2 + 94), v17, v16);
      SubChunkRelighter::_checkAndAddToQueue(v2, *((_DWORD *)v2 + 94) + v3, v17, v16);
      SubChunkRelighter::_checkAndAddToQueue(v2, v3 - *((_DWORD *)v2 + 96), v17, v16);
      result = j_j_j__ZN17SubChunkRelighter19_checkAndAddToQueueEjii(v2, *((_DWORD *)v2 + 96) + v3, v17, v16);
    }
  return result;
}


int __fastcall SubChunkRelighter::_setLightPair(int a1, unsigned int a2, _BYTE *a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r3@1
  int v6; // r9@1
  int v7; // r10@1
  int v8; // r5@1
  int v9; // r8@1
  int v10; // r11@1
  int v11; // r0@1
  __int64 v12; // r0@2
  int v13; // r6@2
  int v15; // r0@2
  unsigned int v16; // r1@2
  unsigned int v22; // r1@6
  int result; // r0@9
  int v24; // [sp+0h] [bp-38h]@2
  _BYTE *v25; // [sp+4h] [bp-34h]@2
  int v26; // [sp+8h] [bp-30h]@2
  int v27; // [sp+Ch] [bp-2Ch]@2

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 348);
  v5 = ((*(_DWORD *)(v3 + 336) & a2) >> *(_DWORD *)(v3 + 340)) | (((unsigned int)(*(_QWORD *)(a1 + 320) >> 32) & a2) >> *(_DWORD *)(a1 + 328)) | *(_QWORD *)(a1 + 320) & a2;
  v6 = (a2 >> (*(_QWORD *)(a1 + 356) >> 32)) & v4;
  v7 = (a2 >> *(_DWORD *)(a1 + 364)) & v4;
  v8 = (a2 >> *(_QWORD *)(a1 + 356)) & v4;
  v9 = a1 + (v7 << 6);
  v10 = v9 + 16 * v6;
  v11 = *(_DWORD *)(v10 + 4 * v8);
  if ( !v11 )
  {
    v24 = v5;
    v25 = a3;
    v12 = *(_QWORD *)(v3 + 288);
    v26 = v12 + v7 - 1;
    v27 = v6 + HIDWORD(v12) - 1;
    v13 = BlockSource::getChunk(*(BlockSource **)(v3 + 300), (const ChunkPos *)&v26);
    LevelChunk::createSubchunk((LevelChunk *)v13, *(_DWORD *)(v3 + 296) + v8 - 1, 1);
    _R3 = *(_DWORD *)(v13 + 140);
    v15 = v13 + 76;
    v16 = *(_DWORD *)(v3 + 296);
    __asm { SBFX.W          R6, R3, #0, #0x1E }
    if ( v16 - 1 < 4 * _R3 >> 2 )
      *(_DWORD *)(v9 + 16 * v6) = *(_DWORD *)(v15 + 4 * (v16 - 1));
    a3 = v25;
    if ( v16 < _R6 )
      *(_DWORD *)(v10 + 4) = *(_DWORD *)(v15 + 4 * v16);
    v22 = v16 + 1;
    if ( v22 < _R6 )
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(v15 + 4 * v22);
    v11 = *(_DWORD *)(v10 + 4 * v8);
    v5 = v24;
  }
  *(_BYTE *)(v11 + v5 + 6144) = *a3;
  result = v3 + 16 * v7 + 4 * v6 + v8;
  *(_BYTE *)(result + 240) = 1;
  return result;
}


int __fastcall SubChunkRelighter::SubChunkRelighter(int a1, BlockSource *a2, unsigned int a3, __int64 *a4, char a5, int a6)
{
  __int64 *v6; // r6@1
  BlockSource *v7; // r5@1
  int v8; // r4@1
  unsigned int v9; // r7@1
  int v10; // r2@1
  int v11; // r8@1
  void *v12; // r0@1
  int v13; // r1@3
  int v14; // r11@4
  signed int v15; // r9@4
  __int64 v16; // r0@5
  LevelChunk *v17; // r0@5
  LevelChunk *v18; // r7@5
  int v19; // r10@6
  int v20; // r0@8
  void *v21; // r1@8
  void *v22; // r1@10
  int v23; // r0@27
  void *v24; // r1@27
  int v30; // r0@36
  void *v31; // r1@36
  int v33; // r0@58
  int v35; // [sp+10h] [bp-48h]@4
  int v36; // [sp+14h] [bp-44h]@4
  unsigned int v37; // [sp+18h] [bp-40h]@3
  unsigned int v38; // [sp+1Ch] [bp-3Ch]@1
  unsigned int v39; // [sp+20h] [bp-38h]@3
  void *v40; // [sp+24h] [bp-34h]@3
  int v41; // [sp+28h] [bp-30h]@5
  int v42; // [sp+2Ch] [bp-2Ch]@5

  v6 = a4;
  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = a1 + 288;
  v38 = v9;
  *(_QWORD *)v10 = *a4;
  *(_DWORD *)(v10 + 8) = v9;
  *(_DWORD *)(a1 + 300) = a2;
  *(_BYTE *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  *(_DWORD *)(a1 + 320) = 15;
  *(_DWORD *)(a1 + 324) = 960;
  *(_DWORD *)(a1 + 328) = 2;
  *(_DWORD *)(a1 + 332) = 6;
  *(_DWORD *)(a1 + 336) = 61440;
  *(_DWORD *)(a1 + 340) = 4;
  *(_DWORD *)(a1 + 344) = 12;
  *(_DWORD *)(a1 + 348) = 3;
  *(_DWORD *)(a1 + 352) = 15;
  *(_DWORD *)(a1 + 356) = 4;
  *(_DWORD *)(a1 + 360) = 10;
  *(_DWORD *)(a1 + 364) = 16;
  *(_DWORD *)(a1 + 368) = 0x20000000;
  *(_DWORD *)(a1 + 372) = 0x40000000;
  *(_DWORD *)(a1 + 376) = 4096;
  *(_DWORD *)(a1 + 380) = 1;
  *(_DWORD *)(a1 + 384) = 64;
  _aeabi_memclr8(a1, 288);
  v11 = 0;
  v12 = &unk_2816E2C;
  if ( a6 )
    v12 = &unk_2819634;
  v13 = 0;
  v40 = v12;
  v37 = v9 + 1;
  v39 = v9 - 1;
  do
  {
    v14 = v13 - 1;
    v15 = 0;
    v35 = v13;
    v36 = v11;
    do
    {
      v16 = *v6;
      v41 = (unsigned __int64)*v6 + v14;
      v42 = v15 + HIDWORD(v16) - 1;
      v17 = (LevelChunk *)BlockSource::getChunk(v7, (const ChunkPos *)&v41);
      v18 = v17;
      if ( v17 )
      {
        v19 = (int)v17 + 76;
        if ( a6 )
        {
          if ( LevelChunk::isReadOnly(v17) )
          {
            v20 = 16 * v11;
            v21 = &unk_2819634;
          }
          else
            if ( v39 <= 0xF )
            {
              if ( v39 >= 4 * *((_DWORD *)v18 + 35) >> 2 )
                *(_DWORD *)(v8 + 16 * v11) = 0;
              else
                *(_DWORD *)(v8 + 16 * v11) = *(_DWORD *)(v19 + 4 * v39);
              *(_BYTE *)(v8 + 4 * v11 + 192) = 1;
LABEL_26:
              if ( LevelChunk::isReadOnly(v18) )
              {
                v23 = v8 + 16 * v11;
                v24 = &unk_2819634;
              }
                if ( v38 <= 0xF )
                {
                  _R0 = *((_DWORD *)v18 + 35);
                  __asm { SBFX.W          R0, R0, #0, #0x1E }
                  if ( _R0 <= v38 )
                    *(_DWORD *)(v8 + 16 * v11 + 4) = 0;
                  else
                    *(_DWORD *)(v8 + 16 * v11 + 4) = *(_DWORD *)(v19 + 4 * v38);
                  *(_BYTE *)(v8 + 4 * v11 + 193) = 1;
LABEL_44:
                  if ( LevelChunk::isReadOnly(v18) )
                  {
                    *(_DWORD *)(v8 + 16 * v11 + 8) = &unk_2819634;
                    goto LABEL_56;
                  }
LABEL_50:
                  if ( v37 <= 0xF )
                    if ( v37 >= 4 * *((_DWORD *)v18 + 35) >> 2 )
                      *(_DWORD *)(v8 + 16 * v11 + 8) = 0;
                    else
                      *(_DWORD *)(v8 + 16 * v11 + 8) = *(_DWORD *)(v19 + 4 * v37);
                    *(_BYTE *)(v8 + 4 * v11 + 194) = 1;
                    *(_DWORD *)(v8 + 16 * v11 + 8) = v40;
                  goto LABEL_56;
                }
                v24 = v40;
              *(_DWORD *)(v23 + 4) = v24;
              goto LABEL_44;
            }
            v21 = v40;
          *(_DWORD *)(v8 + v20) = v21;
          goto LABEL_26;
        }
        if ( LevelChunk::isReadOnly(v17) == 1 )
          *(_DWORD *)(v8 + 16 * v11) = &unk_2816E2C;
        else if ( v39 < 0x10 )
          if ( v39 >= 4 * *((_DWORD *)v18 + 35) >> 2 )
            *(_DWORD *)(v8 + 16 * v11) = 0;
            *(_DWORD *)(v8 + 16 * v11) = *(_DWORD *)(v19 + 4 * v39);
          *(_BYTE *)(v8 + 4 * v11 + 192) = 1;
        else
          *(_DWORD *)(v8 + 16 * v11) = v40;
        if ( LevelChunk::isReadOnly(v18) )
          v30 = v8 + 16 * v11;
          v31 = &unk_2816E2C;
          if ( v38 <= 0xF )
            _R0 = *((_DWORD *)v18 + 35);
            __asm { SBFX.W          R0, R0, #0, #0x1E }
            if ( _R0 <= v38 )
              *(_DWORD *)(v8 + 16 * v11 + 4) = 0;
            else
              *(_DWORD *)(v8 + 16 * v11 + 4) = *(_DWORD *)(v19 + 4 * v38);
            *(_BYTE *)(v8 + 4 * v11 + 193) = 1;
LABEL_48:
            if ( LevelChunk::isReadOnly(v18) )
              *(_DWORD *)(v8 + 16 * v11 + 8) = &unk_2816E2C;
              goto LABEL_56;
            goto LABEL_50;
          v31 = v40;
        *(_DWORD *)(v30 + 4) = v31;
        goto LABEL_48;
      }
      if ( a6 )
        v22 = &unk_2819634;
      else
        v22 = &unk_2816E2C;
      *(_DWORD *)(v8 + 16 * v11) = v22;
      *(_DWORD *)(v8 + 16 * v11 + 4) = v22;
      *(_DWORD *)(v8 + 16 * v11 + 8) = v22;
LABEL_56:
      ++v15;
      ++v11;
    }
    while ( v15 < 3 );
    v11 = v36 + 4;
    v13 = v35 + 1;
  }
  while ( v35 + 1 < 3 );
  *(_BYTE *)(v8 + 316) = a5;
  v33 = BlockSource::getDimension(v7);
  *(_BYTE *)(v8 + 317) = *(_BYTE *)(v33 + 109) & 0xF | 16 * *(_BYTE *)(v33 + 108);
  *(_BYTE *)(v8 + 318) = *(_BYTE *)(Block::mAir + 4);
  return v8;
}


int __fastcall SubChunkRelighter::runInvariantPropagation(SubChunkRelighter *this)
{
  SubChunkRelighter *v1; // r4@1
  __int64 v2; // r0@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r5@2

  v1 = this;
  v3 = *((_QWORD *)this + 38);
  LODWORD(v2) = *((_QWORD *)this + 38) >> 32;
  if ( (_DWORD)v2 != (_DWORD)v3 )
  {
    v4 = 0;
    LODWORD(v2) = v3;
    do
    {
      SubChunkRelighter::_enforceLightingInvariantAndPropagate(v1, *(_DWORD *)(v2 + 4 * v4), 0);
      v2 = *((_QWORD *)v1 + 38);
      ++v4;
    }
    while ( v4 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  *((_DWORD *)v1 + 77) = v2;
  return v2;
}


int __fastcall SubChunkRelighter::getTouchedSubChunks(int a1, int a2)
{
  int v2; // r4@1
  _BYTE *v3; // r8@1
  int v4; // r7@1
  int v5; // r6@2
  __int64 v6; // r0@4
  __int64 v7; // r0@8
  int result; // r0@11
  __int64 v9; // r0@12
  _BYTE *v10; // [sp+4h] [bp-34h]@2
  int v11; // [sp+8h] [bp-30h]@4
  signed int v12; // [sp+Ch] [bp-2Ch]@4
  int v13; // [sp+10h] [bp-28h]@4

  v2 = a2;
  v3 = (_BYTE *)(a1 + 242);
  v4 = 0;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  do
  {
    v5 = 0;
    v10 = v3;
    do
    {
      if ( *(v3 - 2) )
      {
        v11 = v4;
        v12 = 0;
        v13 = v5;
        v6 = *(_QWORD *)(v2 + 4);
        if ( (_DWORD)v6 == HIDWORD(v6) )
        {
          std::vector<Pos,std::allocator<Pos>>::_M_emplace_back_aux<Pos>((unsigned __int64 *)v2, (int)&v11);
        }
        else
          *(_QWORD *)v6 = (unsigned int)v4;
          *(_DWORD *)(v6 + 8) = v5;
          *(_DWORD *)(v2 + 4) = v6 + 12;
      }
      if ( *(v3 - 1) )
        v12 = 1;
        v7 = *(_QWORD *)(v2 + 4);
        if ( (_DWORD)v7 == HIDWORD(v7) )
          *(_DWORD *)v7 = v4;
          *(_DWORD *)(v7 + 4) = 1;
          *(_DWORD *)(v7 + 8) = v5;
          *(_DWORD *)(v2 + 4) = v7 + 12;
      result = *v3;
      if ( *v3 )
        v12 = 2;
        v9 = *(_QWORD *)(v2 + 4);
        if ( (_DWORD)v9 == HIDWORD(v9) )
          result = std::vector<Pos,std::allocator<Pos>>::_M_emplace_back_aux<Pos>((unsigned __int64 *)v2, (int)&v11);
          *(_DWORD *)v9 = v4;
          *(_DWORD *)(v9 + 4) = 2;
          *(_DWORD *)(v9 + 8) = v5;
          result = v9 + 12;
          *(_DWORD *)(v2 + 4) = result;
      ++v5;
      v3 += 4;
    }
    while ( v5 != 3 );
    ++v4;
    v3 = v10 + 16;
  }
  while ( v4 != 3 );
  return result;
}


int __fastcall SubChunkRelighter::runPropagation(SubChunkRelighter *this)
{
  SubChunkRelighter *v1; // r4@1
  __int64 v2; // r0@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r5@2

  v1 = this;
  v3 = *((_QWORD *)this + 38);
  LODWORD(v2) = *((_QWORD *)this + 38) >> 32;
  if ( (_DWORD)v2 != (_DWORD)v3 )
  {
    v4 = 0;
    LODWORD(v2) = v3;
    do
    {
      SubChunkRelighter::_propagateLight(v1, *(_DWORD *)(v2 + 4 * v4));
      v2 = *((_QWORD *)v1 + 38);
      ++v4;
    }
    while ( v4 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  *((_DWORD *)v1 + 77) = v2;
  return v2;
}


int __fastcall SubChunkRelighter::_enforceLightingInvariantAndPropagate(SubChunkRelighter *this, unsigned int a2, int a3)
{
  SubChunkRelighter *v3; // r4@1
  unsigned int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@2
  unsigned int v7; // r6@2
  int v8; // r3@2
  int result; // r0@2
  unsigned int v10; // r8@2
  int v11; // lr@3
  unsigned int v12; // r5@3
  bool v13; // cf@3
  bool v14; // zf@3
  bool v15; // zf@7
  unsigned int v16; // r0@13
  unsigned int v17; // r3@13
  int v18; // r0@14
  int v19; // r1@14
  int v20; // r6@14
  int v21; // r11@14
  int v22; // r3@14
  __int64 v23; // kr18_8@14
  int v24; // r8@14
  bool v25; // zf@14
  int v26; // r7@14
  int v27; // r5@14
  unsigned int v28; // r2@14
  _BYTE *v29; // r3@14
  int v30; // r9@16
  _BYTE *v31; // r3@16
  unsigned int v32; // r3@18
  int v33; // r2@18
  int v34; // r6@18
  int v35; // r3@18
  int v36; // r7@18
  int v37; // r2@18
  _BYTE *v38; // r7@18
  int v39; // r2@20
  unsigned int v40; // r0@20
  int v41; // r7@20
  unsigned int v42; // r6@20
  unsigned int v43; // r2@20
  int v44; // r3@20
  int v45; // r7@20
  int v46; // r2@20
  int v47; // r5@20
  int v48; // r6@20
  int v49; // r8@20
  __int64 v50; // r10@20
  unsigned int v51; // r2@20
  unsigned int v52; // r3@20
  _BYTE *v53; // r8@20
  int v54; // r10@20
  int v55; // r2@20
  _BYTE *v56; // r3@20
  unsigned int v57; // r1@22
  unsigned int v58; // r0@22
  int v59; // r3@22
  int v60; // r7@22
  int v61; // r2@22
  int v62; // r3@22
  int v63; // r6@22
  int v64; // r2@22
  int v65; // r5@22
  int v66; // r7@22
  int v67; // lr@22
  int v68; // r11@22
  _BYTE *v69; // r2@22
  unsigned int v70; // r0@22
  int v71; // r2@24
  int v72; // r3@24
  int v73; // r0@24
  int v74; // r2@24
  int v75; // r6@24
  int v76; // r5@24
  __int64 v77; // kr20_8@24
  int v78; // r11@24
  int v79; // lr@24
  _BYTE *v80; // r1@24
  int v81; // r1@26
  int v82; // r3@26
  int v83; // r0@26
  int v84; // r1@26
  int v85; // r6@26
  int v86; // r5@26
  __int64 v87; // kr30_8@26
  int v88; // r11@26
  int v89; // lr@26
  unsigned int v90; // r11@28
  unsigned int v91; // r9@28
  int v92; // r3@28
  int v93; // r2@28
  int v94; // r1@28
  int v95; // r0@28
  int v96; // r5@28
  int v97; // r1@28
  int v98; // r6@28
  int v99; // r2@28
  int v100; // r5@28
  int v101; // r12@28
  int v102; // lr@28
  unsigned int v103; // r3@28
  int v104; // r2@28
  int v105; // r8@28
  unsigned int v106; // r2@30
  signed int v107; // r7@30
  _BYTE *v108; // r3@38
  unsigned int v109; // r3@40
  signed int v110; // r6@42
  int v111; // r3@42
  int v112; // r2@46
  int v113; // r2@58
  bool v114; // zf@62
  int v115; // r0@67
  unsigned int *v116; // r8@67
  unsigned int *v117; // r8@68
  _BYTE *v118; // r5@69
  unsigned int v119; // r1@69
  unsigned int v120; // r0@71
  unsigned int v121; // r7@71
  char *v122; // r0@77
  char *v123; // r6@77
  signed int v124; // r2@79
  int v125; // r8@79
  int *v126; // r8@85
  _BYTE *v127; // r5@86
  unsigned int v128; // r1@86
  unsigned int v129; // r0@88
  unsigned int v130; // r7@88
  char *v131; // r0@94
  char *v132; // r6@94
  signed int v133; // r2@96
  int v134; // r8@96
  unsigned int *v135; // r8@102
  _BYTE *v136; // r5@103
  unsigned int v137; // r1@103
  unsigned int v138; // r0@105
  unsigned int v139; // r7@105
  char *v140; // r0@111
  char *v141; // r6@111
  signed int v142; // r2@113
  int v143; // r8@113
  unsigned int *v144; // r8@119
  _BYTE *v145; // r5@120
  unsigned int v146; // r1@120
  unsigned int v147; // r0@122
  unsigned int v148; // r7@122
  char *v149; // r0@128
  char *v150; // r6@128
  signed int v151; // r2@130
  int v152; // r8@130
  unsigned int *v153; // r8@136
  _BYTE *v154; // r5@137
  unsigned int v155; // r1@137
  unsigned int v156; // r0@139
  unsigned int v157; // r7@139
  char *v158; // r0@145
  char *v159; // r6@145
  signed int v160; // r2@147
  int v161; // r8@147
  _BYTE *v162; // r5@154
  unsigned int v163; // r1@154
  unsigned int v164; // r0@156
  unsigned int v165; // r7@156
  char *v166; // r0@162
  char *v167; // r6@162
  signed int v168; // r2@164
  int v169; // r8@164
  int v170; // r8@166
  unsigned int v171; // [sp+4h] [bp-6Ch]@26
  int v172; // [sp+8h] [bp-68h]@22
  unsigned int v173; // [sp+Ch] [bp-64h]@24
  unsigned int v174; // [sp+10h] [bp-60h]@20
  unsigned int v175; // [sp+14h] [bp-5Ch]@18
  unsigned int v176; // [sp+18h] [bp-58h]@28
  unsigned int v177; // [sp+20h] [bp-50h]@26
  unsigned int v178; // [sp+24h] [bp-4Ch]@24
  unsigned int v179; // [sp+28h] [bp-48h]@20
  int v180; // [sp+2Ch] [bp-44h]@18
  signed int v181; // [sp+30h] [bp-40h]@18
  int v182; // [sp+34h] [bp-3Ch]@18
  char v183; // [sp+3Ch] [bp-34h]@14
  unsigned int v184; // [sp+3Ch] [bp-34h]@22
  unsigned int v185; // [sp+40h] [bp-30h]@18
  int v186; // [sp+44h] [bp-2Ch]@1
  char v187; // [sp+48h] [bp-28h]@18

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 91);
  v186 = a3;
  if ( *((_BYTE *)this + 316) )
  {
    v7 = *(_QWORD *)((char *)this + 348) >> 32;
    v6 = *(_QWORD *)((char *)this + 348);
    v8 = *((_DWORD *)this + 90);
    result = (v4 >> *((_DWORD *)this + 83)) & v7;
    v10 = result + 16 * ((v4 >> v8) & v6);
    if ( v10 > 0x2E )
      return result;
    v11 = *((_DWORD *)v3 + 89);
    v12 = (v7 & v4) + 16 * ((v4 >> v11) & v6);
    v13 = v12 >= 0x2E;
    v14 = v12 == 46;
    if ( v12 <= 0x2E )
    {
      result = (v4 >> v5) & v6;
      v7 = (v7 & (v4 >> *((_DWORD *)v3 + 86))) + 16 * result;
      v13 = v7 >= 0x2E;
      v14 = v7 == 46;
    }
    if ( !v14 && v13 || !v7 )
    v15 = v12 == 0;
    if ( v12 )
      v15 = v10 == 0;
    if ( v15 )
  }
  else
    v6 = *((_DWORD *)this + 87);
    v8 = *(_QWORD *)((char *)this + 356) >> 32;
    v11 = *(_QWORD *)((char *)this + 356);
  v16 = v4 >> v8;
  v17 = v4 >> v5;
  result = *((_BYTE *)v3 + 16 * ((v4 >> v5) & v6) + 4 * (v16 & v6) + (v6 & (v4 >> v11)) + 192);
  if ( result )
    v18 = *((_DWORD *)v3 + 87);
    v183 = v5;
    v19 = *(_QWORD *)((char *)v3 + 356) >> 32;
    v20 = *(_QWORD *)((char *)v3 + 356);
    v21 = *((_DWORD *)v3 + 82);
    v22 = *((_DWORD *)v3 + 16 * (v17 & v18) + 4 * ((v4 >> v19) & v18) + ((v4 >> v20) & v18));
    v23 = *((_QWORD *)v3 + 40);
    v24 = *((_DWORD *)v3 + 84);
    v25 = v22 == 0;
    v26 = v23 & v4 | ((HIDWORD(v23) & v4) >> v21);
    v27 = *((_DWORD *)v3 + 85);
    v28 = (((v24 & v4) >> v27) | v26) + v22;
    v29 = (_BYTE *)((((v24 & v4) >> v27) | v26) + v22);
    if ( v25 )
      v29 = (char *)v3 + 318;
    v30 = *v29;
    v31 = (char *)v3 + 317;
    if ( !v25 )
      v31 = (_BYTE *)(v28 + 6144);
    v32 = *v31;
    v187 = v32;
    v185 = v32;
    v182 = Block::mLightEmission[v30];
    v181 = Block::mLightBlock[v30];
    v175 = v4 - *((_DWORD *)v3 + 95);
    v33 = (v175 >> v19) & v18;
    v34 = (v175 >> v20) & v18;
    v35 = (v175 >> v183) & v18;
    v36 = *((_DWORD *)v3 + 16 * v35 + 4 * v33 + v34);
    v14 = v36 == 0;
    v180 = (unsigned __int8)Brightness::MAX;
    *((_BYTE *)v3 + 16 * v35 + 4 * v33 + v34 + 240) = 1;
    v37 = (v23 & v175 | ((HIDWORD(v23) & v175) >> v21) | ((v24 & v175) >> v27)) + v36;
    v38 = (char *)v3 + 317;
    if ( !v14 )
      v38 = (_BYTE *)(v37 + 6144);
    v39 = *((_DWORD *)v3 + 95);
    v179 = *v38;
    v40 = v39 + v4;
    v41 = *((_DWORD *)v3 + 87);
    v42 = ((v39 + v4) >> *((_DWORD *)v3 + 91)) & v41;
    v43 = ((v39 + v4) >> *((_DWORD *)v3 + 90)) & v41;
    v174 = v40;
    v44 = (v40 >> *((_DWORD *)v3 + 89)) & v41;
    v45 = *((_DWORD *)v3 + 16 * v42 + 4 * v43 + v44);
    v46 = (int)v3 + 16 * v42 + 4 * v43 + 240;
    v47 = *((_DWORD *)v3 + 80);
    v48 = *((_DWORD *)v3 + 81);
    v49 = *((_DWORD *)v3 + 82);
    v50 = *((_QWORD *)v3 + 42);
    *(_BYTE *)(v46 + v44) = 1;
    v51 = v47 & v40 | ((v48 & v40) >> v49);
    v52 = v50 & v40;
    v53 = (char *)v3 + 317;
    v54 = (int)v3 + 240;
    v55 = (v51 | (v52 >> SBYTE4(v50))) + v45;
    v56 = (char *)v3 + 317;
    if ( v45 )
      v56 = (_BYTE *)(v55 + 6144);
    v57 = v4 - *((_DWORD *)v3 + 94);
    v58 = *v56;
    v59 = *((_DWORD *)v3 + 87);
    v60 = (v57 >> *((_DWORD *)v3 + 91)) & v59;
    v61 = (v57 >> *((_DWORD *)v3 + 90)) & v59;
    v184 = v58;
    v62 = v59 & (v57 >> *((_DWORD *)v3 + 89));
    v172 = v4 - *((_DWORD *)v3 + 94);
    v63 = *((_DWORD *)v3 + 16 * v60 + 4 * v61 + v62);
    v64 = v54 + 16 * v60 + 4 * v61;
    v65 = *((_DWORD *)v3 + 80);
    v66 = *((_DWORD *)v3 + 81);
    v67 = *((_DWORD *)v3 + 82);
    v68 = *((_QWORD *)v3 + 42);
    LOBYTE(v58) = *((_QWORD *)v3 + 42) >> 32;
    *(_BYTE *)(v64 + v62) = 1;
    v69 = (char *)v3 + 317;
    v70 = (((v68 & v57) >> v58) | v65 & v57 | ((v66 & v57) >> v67)) + v63;
    if ( v63 )
      v69 = (_BYTE *)(v70 + 6144);
    v178 = *v69;
    v71 = *((_DWORD *)v3 + 87);
    v173 = *((_DWORD *)v3 + 94) + v4;
    v72 = (v173 >> *((_DWORD *)v3 + 91)) & v71;
    v73 = (v173 >> *((_DWORD *)v3 + 90)) & v71;
    v74 = v71 & (v173 >> *((_DWORD *)v3 + 89));
    v75 = *((_DWORD *)v3 + 82);
    v76 = *((_DWORD *)v3 + 16 * v72 + 4 * v73 + v74);
    v77 = *((_QWORD *)v3 + 40);
    v79 = *((_QWORD *)v3 + 42) >> 32;
    v78 = *((_QWORD *)v3 + 42);
    *(_BYTE *)(v54 + 16 * v72 + 4 * v73 + v74) = 1;
    v80 = (char *)v3 + 317;
    if ( v76 )
      v80 = (_BYTE *)((v77 & v173 | ((HIDWORD(v77) & v173) >> v75) | ((v78 & v173) >> v79)) + v76 + 6144);
    v177 = *v80;
    v81 = *((_DWORD *)v3 + 87);
    v171 = v4 - *((_DWORD *)v3 + 96);
    v82 = (v171 >> *((_DWORD *)v3 + 91)) & v81;
    v83 = (v171 >> *((_DWORD *)v3 + 90)) & v81;
    v84 = v81 & (v171 >> *((_DWORD *)v3 + 89));
    v85 = *((_DWORD *)v3 + 82);
    v86 = *((_DWORD *)v3 + 16 * v82 + 4 * v83 + v84);
    v87 = *((_QWORD *)v3 + 40);
    v89 = *((_QWORD *)v3 + 42) >> 32;
    v88 = *((_QWORD *)v3 + 42);
    *(_BYTE *)(v54 + 16 * v82 + 4 * v83 + v84) = 1;
    if ( v86 )
      v53 = (_BYTE *)((v87 & v171 | ((HIDWORD(v87) & v171) >> v85) | ((v88 & v171) >> v89)) + v86 + 6144);
    v90 = *v53;
    v91 = *((_DWORD *)v3 + 96) + v4;
    v176 = v4;
    v92 = *((_DWORD *)v3 + 87);
    v93 = (v91 >> *((_DWORD *)v3 + 91)) & v92;
    v94 = (v91 >> *((_DWORD *)v3 + 90)) & v92;
    v95 = (v91 >> *((_DWORD *)v3 + 89)) & v92;
    v96 = (int)v3 + 64 * v93 + 16 * v94;
    v97 = v54 + 16 * v93 + 4 * v94;
    v98 = *(_DWORD *)(v96 + 4 * v95);
    v99 = *((_DWORD *)v3 + 80);
    v100 = *((_DWORD *)v3 + 82);
    v102 = *((_QWORD *)v3 + 42) >> 32;
    v101 = *((_QWORD *)v3 + 42);
    v103 = *((_DWORD *)v3 + 81) & v91;
    *(_BYTE *)(v97 + v95) = 1;
    v104 = v99 & v91 | (v103 >> v100);
    v105 = v185 >> 4;
    if ( v180 != v185 >> 4 )
      v105 = 0;
    v106 = (v104 | ((v101 & v91) >> v102)) + v98;
    v107 = v179 >> 4;
    if ( v179 >> 4 < v184 >> 4 )
      v107 = v184 >> 4;
    if ( v107 < (signed int)(v178 >> 4) )
      v107 = v178 >> 4;
    if ( v107 < (signed int)(v177 >> 4) )
      v107 = v177 >> 4;
    if ( v107 < (signed int)(v90 >> 4) )
      v107 = v90 >> 4;
    v108 = (char *)v3 + 317;
    if ( v98 )
      v108 = (_BYTE *)(v106 + 6144);
    v109 = *v108;
    if ( v107 < (signed int)(v109 >> 4) )
      v107 = v109 >> 4;
    v110 = v181;
    v111 = v109 & 0xF;
    if ( !v181 )
      v110 = 1;
    if ( v107 - v110 >= v105 )
      v105 = v107 - v110;
    v112 = v179 & 0xF;
    if ( v105 < 0 )
    if ( v112 < (v184 & 0xF) )
      v112 = v184 & 0xF;
    if ( v112 < (unsigned __int8)(v178 & 0xF) )
      v112 = v178 & 0xF;
    if ( v112 < (unsigned __int8)(v177 & 0xF) )
      v112 = v177 & 0xF;
    if ( v112 < (unsigned __int8)(v90 & 0xF) )
      v112 = v90 & 0xF;
    if ( v112 < v111 )
      v112 = v111;
    v113 = v112 - v110;
    if ( v113 < v182 )
      v113 = v182;
    if ( v113 < 0 )
      v113 = 0;
    result = v185;
    v114 = (v185 & 0xF) == v113;
    if ( (v185 & 0xF) == v113 )
      result = v185 >> 4;
      v114 = v185 >> 4 == v105;
    if ( !v114 || v186 == 1 )
      v187 = v113 & 0xF | 16 * v105;
      SubChunkRelighter::_setLightPair((int)v3, v176, &v187);
      v115 = *(_QWORD *)((char *)v3 + 308) >> 32;
      v116 = (unsigned int *)*(_QWORD *)((char *)v3 + 308);
      if ( v116 == (unsigned int *)v115 )
      {
        v118 = (_BYTE *)*((_DWORD *)v3 + 76);
        v119 = ((char *)v116 - v118) >> 2;
        if ( !v119 )
          v119 = 1;
        v120 = v119 + (((char *)v116 - v118) >> 2);
        v121 = v119 + (((char *)v116 - v118) >> 2);
        if ( 0 != v120 >> 30 )
          v121 = 0x3FFFFFFF;
        if ( v120 < v119 )
        if ( v121 )
        {
          if ( v121 >= 0x40000000 )
            goto LABEL_170;
          v122 = (char *)operator new(4 * v121);
          v116 = (unsigned int *)(*((_QWORD *)v3 + 38) >> 32);
          v118 = (_BYTE *)*((_QWORD *)v3 + 38);
          v123 = v122;
        }
        else
          v123 = 0;
        v124 = (char *)v116 - v118;
        v125 = (int)&v123[(char *)v116 - v118];
        *(_DWORD *)&v123[v124] = v175;
        if ( 0 != v124 >> 2 )
          _aeabi_memmove4(v123, v118);
        v117 = (unsigned int *)(v125 + 4);
        if ( v118 )
          operator delete(v118);
        v115 = (int)&v123[4 * v121];
        *((_DWORD *)v3 + 76) = v123;
        *((_DWORD *)v3 + 77) = v117;
        *((_DWORD *)v3 + 78) = v115;
      }
      else
        *v116 = v175;
        v117 = v116 + 1;
      if ( v117 == (unsigned int *)v115 )
        v127 = (_BYTE *)*((_DWORD *)v3 + 76);
        v128 = ((char *)v117 - v127) >> 2;
        if ( !v128 )
          v128 = 1;
        v129 = v128 + (((char *)v117 - v127) >> 2);
        v130 = v128 + (((char *)v117 - v127) >> 2);
        if ( 0 != v129 >> 30 )
          v130 = 0x3FFFFFFF;
        if ( v129 < v128 )
        if ( v130 )
          if ( v130 >= 0x40000000 )
          v131 = (char *)operator new(4 * v130);
          v117 = (unsigned int *)(*((_QWORD *)v3 + 38) >> 32);
          v127 = (_BYTE *)*((_QWORD *)v3 + 38);
          v132 = v131;
          v132 = 0;
        v133 = (char *)v117 - v127;
        v134 = (int)&v132[(char *)v117 - v127];
        *(_DWORD *)&v132[v133] = v174;
        if ( 0 != v133 >> 2 )
          _aeabi_memmove4(v132, v127);
        v126 = (int *)(v134 + 4);
        if ( v127 )
          operator delete(v127);
        v115 = (int)&v132[4 * v130];
        *((_DWORD *)v3 + 76) = v132;
        *((_DWORD *)v3 + 77) = v126;
        *v117 = v174;
        v126 = (int *)(v117 + 1);
      if ( v126 == (int *)v115 )
        v136 = (_BYTE *)*((_DWORD *)v3 + 76);
        v137 = ((char *)v126 - v136) >> 2;
        if ( !v137 )
          v137 = 1;
        v138 = v137 + (((char *)v126 - v136) >> 2);
        v139 = v137 + (((char *)v126 - v136) >> 2);
        if ( 0 != v138 >> 30 )
          v139 = 0x3FFFFFFF;
        if ( v138 < v137 )
        if ( v139 )
          if ( v139 >= 0x40000000 )
          v140 = (char *)operator new(4 * v139);
          v126 = (int *)(*((_QWORD *)v3 + 38) >> 32);
          v136 = (_BYTE *)*((_QWORD *)v3 + 38);
          v141 = v140;
          v141 = 0;
        v142 = (char *)v126 - v136;
        v143 = (int)&v141[(char *)v126 - v136];
        *(_DWORD *)&v141[v142] = v172;
        if ( 0 != v142 >> 2 )
          _aeabi_memmove4(v141, v136);
        v135 = (unsigned int *)(v143 + 4);
        if ( v136 )
          operator delete(v136);
        v115 = (int)&v141[4 * v139];
        *((_DWORD *)v3 + 76) = v141;
        *((_DWORD *)v3 + 77) = v135;
        *v126 = v172;
        v135 = (unsigned int *)(v126 + 1);
      if ( v135 == (unsigned int *)v115 )
        v145 = (_BYTE *)*((_DWORD *)v3 + 76);
        v146 = ((char *)v135 - v145) >> 2;
        if ( !v146 )
          v146 = 1;
        v147 = v146 + (((char *)v135 - v145) >> 2);
        v148 = v146 + (((char *)v135 - v145) >> 2);
        if ( 0 != v147 >> 30 )
          v148 = 0x3FFFFFFF;
        if ( v147 < v146 )
        if ( v148 )
          if ( v148 >= 0x40000000 )
          v149 = (char *)operator new(4 * v148);
          v135 = (unsigned int *)(*((_QWORD *)v3 + 38) >> 32);
          v145 = (_BYTE *)*((_QWORD *)v3 + 38);
          v150 = v149;
          v150 = 0;
        v151 = (char *)v135 - v145;
        v152 = (int)&v150[(char *)v135 - v145];
        *(_DWORD *)&v150[v151] = v173;
        if ( 0 != v151 >> 2 )
          _aeabi_memmove4(v150, v145);
        v144 = (unsigned int *)(v152 + 4);
        if ( v145 )
          operator delete(v145);
        v115 = (int)&v150[4 * v148];
        *((_DWORD *)v3 + 76) = v150;
        *((_DWORD *)v3 + 77) = v144;
        *v135 = v173;
        v144 = v135 + 1;
      if ( v144 == (unsigned int *)v115 )
        v154 = (_BYTE *)*((_DWORD *)v3 + 76);
        v155 = ((char *)v144 - v154) >> 2;
        if ( !v155 )
          v155 = 1;
        v156 = v155 + (((char *)v144 - v154) >> 2);
        v157 = v155 + (((char *)v144 - v154) >> 2);
        if ( 0 != v156 >> 30 )
          v157 = 0x3FFFFFFF;
        if ( v156 < v155 )
        if ( v157 )
          if ( v157 >= 0x40000000 )
          v158 = (char *)operator new(4 * v157);
          v144 = (unsigned int *)(*((_QWORD *)v3 + 38) >> 32);
          v154 = (_BYTE *)*((_QWORD *)v3 + 38);
          v159 = v158;
          v159 = 0;
        v160 = (char *)v144 - v154;
        v161 = (int)&v159[(char *)v144 - v154];
        *(_DWORD *)&v159[v160] = v171;
        if ( 0 != v160 >> 2 )
          _aeabi_memmove4(v159, v154);
        v153 = (unsigned int *)(v161 + 4);
        if ( v154 )
          operator delete(v154);
        v115 = (int)&v159[4 * v157];
        *((_DWORD *)v3 + 76) = v159;
        *((_DWORD *)v3 + 77) = v153;
        *v144 = v171;
        v153 = v144 + 1;
      if ( v153 != (unsigned int *)v115 )
        result = v91;
        *v153 = v91;
        *((_DWORD *)v3 + 77) = v153 + 1;
        return result;
      v162 = (_BYTE *)*((_DWORD *)v3 + 76);
      v163 = ((char *)v153 - v162) >> 2;
      if ( !v163 )
        v163 = 1;
      v164 = v163 + (((char *)v153 - v162) >> 2);
      v165 = v163 + (((char *)v153 - v162) >> 2);
      if ( 0 != v164 >> 30 )
        v165 = 0x3FFFFFFF;
      if ( v164 < v163 )
      if ( !v165 )
        v167 = 0;
        goto LABEL_164;
      if ( v165 < 0x40000000 )
        v166 = (char *)operator new(4 * v165);
        v153 = (unsigned int *)(*((_QWORD *)v3 + 38) >> 32);
        v162 = (_BYTE *)*((_QWORD *)v3 + 38);
        v167 = v166;
LABEL_164:
        v168 = (char *)v153 - v162;
        v169 = (int)&v167[(char *)v153 - v162];
        *(_DWORD *)&v167[v168] = v91;
        if ( 0 != v168 >> 2 )
          _aeabi_memmove4(v167, v162);
        v170 = v169 + 4;
        if ( v162 )
          operator delete(v162);
        result = (int)&v167[4 * v165];
        *((_DWORD *)v3 + 76) = v167;
        *((_DWORD *)v3 + 77) = v170;
        *((_DWORD *)v3 + 78) = result;
LABEL_170:
      sub_21E57F4();
  return result;
}


int __fastcall SubChunkRelighter::_checkAndAddToQueue(SubChunkRelighter *this, unsigned int a2, int a3, int a4)
{
  SubChunkRelighter *v4; // r4@1
  int v5; // lr@1
  unsigned int v6; // r5@1
  int v7; // r3@1
  char v8; // r1@1
  int v9; // r7@1
  int result; // r0@1
  int v11; // r12@1
  int v12; // r1@2
  unsigned int v13; // r6@2
  bool v14; // cf@2
  bool v15; // zf@2
  int v16; // r1@5
  bool v17; // zf@5
  _BYTE *v18; // r0@5
  _BYTE *v19; // r1@5
  int v20; // r0@7
  unsigned int v21; // r1@9
  __int64 v22; // kr00_8@9
  signed int v23; // r0@9
  int v24; // r3@9
  int v25; // r12@9
  int v26; // r1@11
  int v27; // r2@11
  signed int v28; // r7@17
  __int64 v29; // r0@27
  void *v30; // r8@29
  unsigned int v31; // r2@29
  unsigned int v32; // r1@31
  unsigned int v33; // r6@31
  char *v34; // r7@37
  char *v35; // r5@39
  int v36; // r5@41

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = *((_DWORD *)this + 88);
  v8 = *((_QWORD *)this + 43);
  v9 = *((_QWORD *)this + 43) >> 32;
  result = v6 >> *((_DWORD *)this + 91);
  v11 = result & v9;
  if ( ((v6 >> v8) & v7) + 16 * (result & v9) > 0x2F )
    return result;
  v12 = (v6 >> *((_DWORD *)v4 + 89)) & v9;
  v13 = (v7 & v6) + 16 * v12;
  v14 = v13 >= 0x2F;
  v15 = v13 == 47;
  if ( v13 <= 0x2F )
  {
    v9 &= v6 >> *((_DWORD *)v4 + 90);
    result = ((v6 >> *((_DWORD *)v4 + 83)) & v7) + 16 * v9;
    v14 = (unsigned int)result >= 0x2F;
    v15 = result == 47;
  }
  if ( !v15 && v14 )
  v16 = *((_DWORD *)v4 + 16 * v11 + 4 * v9 + v12);
  v17 = v16 == 0;
  v18 = (_BYTE *)(((((unsigned int)(*((_QWORD *)v4 + 40) >> 32) & v6) >> *((_DWORD *)v4 + 82)) | *((_QWORD *)v4 + 40) & v6 | ((*((_DWORD *)v4 + 84) & v6) >> *((_DWORD *)v4 + 85)))
                + v16);
  v19 = v18 + 6144;
  if ( v17 )
    v18 = (char *)v4 + 318;
  v20 = *v18;
    v19 = (char *)v4 + 317;
  v21 = *v19;
  v22 = *((_QWORD *)v4 + 46);
  v23 = Block::mLightBlock[v20];
  v24 = v21 & 0xF;
  v25 = v21 >> 4;
  if ( !v23 )
    v23 = 1;
  v26 = v5 - v23;
  result = a3 - v23;
  v27 = v22 & v6;
  if ( v26 < 0 )
    v26 = 0;
  if ( result < 0 )
    result = 0;
  if ( !(HIDWORD(v22) & v6) )
    goto LABEL_19;
  if ( v25 >= result )
    v6 &= ~HIDWORD(v22);
LABEL_19:
    v28 = 0;
    goto LABEL_20;
  v28 = 1;
  v25 = result;
LABEL_20:
  if ( v27 )
    if ( v24 >= v26 )
    {
      if ( !v28 )
        return result;
      v6 &= ~(_DWORD)v22;
    }
    else
      v24 = v26;
  else if ( v28 != 1 )
  SubChunkRelighter::_setLightPair(v4, v6, v25, v24);
  v29 = *(_QWORD *)((char *)v4 + 308);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    v30 = (void *)*((_DWORD *)v4 + 76);
    v31 = ((signed int)v29 - (signed int)v30) >> 2;
    if ( !v31 )
      v31 = 1;
    HIDWORD(v29) = v31 + (((signed int)v29 - (signed int)v30) >> 2);
    v33 = v31 + (((signed int)v29 - (signed int)v30) >> 2);
    if ( 0 != HIDWORD(v29) >> 30 )
      v33 = 0x3FFFFFFF;
    if ( v32 < v31 )
    if ( v33 )
      if ( v33 >= 0x40000000 )
        sub_21E57F4();
      v34 = (char *)operator new(4 * v33);
      LODWORD(v29) = *((_QWORD *)v4 + 38) >> 32;
      v30 = (void *)*((_QWORD *)v4 + 38);
      v34 = 0;
    *(_DWORD *)&v34[v29 - (_DWORD)v30] = v6;
    v35 = &v34[v29 - (_DWORD)v30];
    if ( 0 != ((signed int)v29 - (signed int)v30) >> 2 )
      _aeabi_memmove4(v34, v30);
    v36 = (int)(v35 + 4);
    if ( v30 )
      operator delete(v30);
    result = (int)&v34[4 * v33];
    *((_DWORD *)v4 + 76) = v34;
    *((_DWORD *)v4 + 77) = v36;
    *((_DWORD *)v4 + 78) = result;
  else
    *(_DWORD *)v29 = v6;
    result = v29 + 4;
    *((_DWORD *)v4 + 77) = result;
  return result;
}


SubChunkRelighter *__fastcall SubChunkRelighter::~SubChunkRelighter(SubChunkRelighter *this)
{
  SubChunkRelighter *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 76);
  if ( v2 )
    operator delete(v2);
  return v1;
}
