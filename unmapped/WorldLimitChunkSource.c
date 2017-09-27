

int __fastcall WorldLimitChunkSource::getExistingChunk(int result, const ChunkPos *a2, int a3)
{
  int v3; // r12@0
  signed int v4; // r3@1
  bool v5; // nf@1
  unsigned __int8 v6; // vf@1
  int v7; // r3@2
  int v8; // r3@4
  bool v9; // zf@4
  bool v10; // nf@4
  unsigned __int8 v11; // vf@4
  int v12; // r3@5
  int v13; // r3@8
  bool v14; // nf@8
  unsigned __int8 v15; // vf@8
  int v16; // r3@9
  int v17; // r1@12
  unsigned int v18; // r1@15

  v4 = *((_DWORD *)a2 + 17);
  v6 = __OFSUB__(v4, 1);
  v5 = v4 - 1 < 0;
  if ( v4 >= 1 )
  {
    v3 = *(_DWORD *)a3;
    v7 = *((_DWORD *)a2 + 8);
    v6 = __OFSUB__(*(_DWORD *)a3, v7);
    v5 = *(_DWORD *)a3 - v7 < 0;
  }
  if ( v5 ^ v6 )
    goto LABEL_21;
  v8 = *((_DWORD *)a2 + 11);
  v11 = __OFSUB__(v3, v8);
  v9 = v3 == v8;
  v10 = v3 - v8 < 0;
  if ( v3 <= v8 )
    v12 = *((_DWORD *)a2 + 9);
    v11 = 0;
    v9 = v12 == 0;
    v10 = v12 < 0;
  if ( !((unsigned __int8)(v10 ^ v11) | v9) )
  v13 = *((_DWORD *)a2 + 12);
  v15 = 0;
  v14 = v13 < 0;
  if ( v13 >= 0 )
    v3 = *(_DWORD *)(a3 + 4);
    v16 = *((_DWORD *)a2 + 10);
    v15 = __OFSUB__(v3, v16);
    v14 = v3 - v16 < 0;
  if ( v14 ^ v15 || v3 > *((_DWORD *)a2 + 13) )
LABEL_21:
    *(_DWORD *)result = *((_DWORD *)a2 + 6);
    v17 = *((_DWORD *)a2 + 7);
    *(_DWORD *)(result + 4) = v17;
    if ( v17 )
    {
      result = v17 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex((unsigned int *)result);
        while ( __strex(v18 + 1, (unsigned int *)result) );
      }
      else
        ++*(_DWORD *)result;
    }
  else
    result = (*(int (__fastcall **)(int))(**((_DWORD **)a2 + 4) + 16))(result);
  return result;
}


int __fastcall WorldLimitChunkSource::WorldLimitChunkSource(int a1, int *a2, const BlockPos *a3)
{
  int v3; // r4@1
  int v4; // r0@1
  const BlockPos *v5; // r5@1
  int v6; // r0@3
  int v7; // lr@3
  signed int v8; // r2@3
  signed int v9; // r7@3
  int v10; // r3@3
  int v11; // r0@3
  int v12; // r6@3
  int v13; // r0@3
  int v14; // r5@3
  unsigned int *v15; // r1@4
  unsigned int v16; // r0@6
  unsigned int *v17; // r6@10
  unsigned int v18; // r0@12
  LevelChunk *v19; // r0@18
  int v20; // r0@19
  int v21; // r5@19
  int v22; // r7@20
  char *v23; // r0@20
  char *v24; // r6@20
  char *v25; // r1@20
  int v26; // r0@20
  int v27; // r5@22
  int v28; // r7@24
  int v29; // r0@24
  LevelChunk *v31; // [sp+4h] [bp-64h]@3
  int v32; // [sp+8h] [bp-60h]@3
  int v33; // [sp+Ch] [bp-5Ch]@3
  int v34; // [sp+10h] [bp-58h]@3
  int v35; // [sp+14h] [bp-54h]@3
  int v36; // [sp+18h] [bp-50h]@3
  int v37; // [sp+1Ch] [bp-4Ch]@3
  int v38; // [sp+20h] [bp-48h]@3
  int v39; // [sp+24h] [bp-44h]@3
  int v40; // [sp+2Ch] [bp-3Ch]@1
  int v41; // [sp+30h] [bp-38h]@3
  signed int v42; // [sp+38h] [bp-30h]@3
  char v43; // [sp+3Ch] [bp-2Ch]@3
  int v44; // [sp+44h] [bp-24h]@3
  int v45; // [sp+48h] [bp-20h]@3
  int v46; // [sp+4Ch] [bp-1Ch]@3

  v3 = a1;
  v4 = *a2;
  v5 = a3;
  *a2 = 0;
  v40 = v4;
  j_ChunkSource::ChunkSource(v3, &v40);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  v40 = 0;
  *(_DWORD *)v3 = &off_27235B4;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  j_ChunkPos::ChunkPos((ChunkPos *)&v36, v5);
  v38 = v36 - 8;
  v39 = v37 - 8;
  j_ChunkPos::ChunkPos((ChunkPos *)&v32, v5);
  v34 = v32 + 7;
  v35 = v33 + 7;
  j_BlockPos::BlockPos((int)&v43, (__int64 *)&v38, 0);
  j_BlockPos::BlockPos((int)&v41, (__int64 *)&v34, 0);
  v6 = v3 + 32;
  v7 = v3 + 40;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  *(_DWORD *)(v3 + 76) = 16;
  v8 = v44;
  v9 = v42;
  v10 = v41 >> 4;
  v11 = (v41 >> 4) - (*(_DWORD *)&v43 >> 4);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)&v43 >> 4;
  *(_DWORD *)(v3 + 36) = 0;
  v9 >>= 4;
  ++v11;
  v12 = v9 - (v8 >> 4) + 1;
  *(_DWORD *)v7 = v8 >> 4;
  *(_DWORD *)(v7 + 4) = v10;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = v9;
  *(_DWORD *)(v3 + 56) = v11;
  *(_DWORD *)(v3 + 60) = 1;
  *(_DWORD *)(v3 + 64) = v12;
  *(_DWORD *)(v3 + 68) = v12 * v11;
  *(_DWORD *)(v3 + 72) = v12 * v11;
  j_LevelChunk::createNewNoCustomDeleter((int **)&v31, *(Dimension **)(v3 + 12), *(__int64 *)&ChunkPos::INVALID, 1);
  j_std::__shared_ptr<LevelChunk,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<LevelChunk,std::default_delete<LevelChunk>>(
    (int)&v45,
    (int *)&v31);
  v13 = v45;
  v45 = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v13;
  v14 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v3 + 28) = v46;
  v46 = v14;
  if ( v14 )
  {
    v15 = (unsigned int *)(v14 + 4);
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
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  }
  if ( v31 )
    v19 = j_LevelChunk::~LevelChunk(v31);
    j_LevelChunk::operator delete((void *)v19);
  v31 = 0;
  v20 = j_ChunkSource::getDimension((ChunkSource *)v3);
  v21 = *(_WORD *)(v20 + 120);
  if ( *(_WORD *)(v20 + 120) )
    v22 = Block::mInvisibleBedrock;
    v23 = (char *)j_operator new(v21 << 8);
    v24 = v23;
    v25 = v23;
    v26 = -256 * v21;
    do
      ++v26;
      *v25++ = *(_BYTE *)(v22 + 4);
    while ( v26 );
    v27 = (int)&v24[256 * v21];
  else
    v24 = 0;
    v27 = 0;
  v28 = *(_DWORD *)(v3 + 24);
  v29 = j_ChunkSource::getDimension((ChunkSource *)v3);
  j_LevelChunk::setAllBlockIDs(v28, (int)v24, v27, *(_WORD *)(v29 + 120));
  j_LevelChunk::changeState(*(_DWORD *)(v3 + 24), 0, 8u);
  if ( v24 )
    j_operator delete(v24);
  return v3;
}


int __fastcall WorldLimitChunkSource::shutdown(WorldLimitChunkSource *this)
{
  ChunkSource *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *((_DWORD *)this + 6) = 0;
  v2 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 7) = 0;
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return j_j_j__ZN11ChunkSource8shutdownEv_0(v1);
}


void __fastcall WorldLimitChunkSource::~WorldLimitChunkSource(WorldLimitChunkSource *this)
{
  WorldLimitChunkSource::~WorldLimitChunkSource(this);
}


ChunkSource *__fastcall WorldLimitChunkSource::~WorldLimitChunkSource(WorldLimitChunkSource *this)
{
  ChunkSource *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_27235B4;
  v2 = *((_DWORD *)this + 7);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return j_j_j__ZN11ChunkSourceD2Ev_1(v1);
}


void __fastcall WorldLimitChunkSource::~WorldLimitChunkSource(WorldLimitChunkSource *this)
{
  ChunkSource *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_27235B4;
  v2 = *((_DWORD *)this + 7);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  j_ChunkSource::~ChunkSource(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall WorldLimitChunkSource::isWithinWorldLimit(WorldLimitChunkSource *this, const ChunkPos *a2)
{
  WorldLimitChunkSource *v2; // r2@1
  signed int v3; // r0@1
  bool v4; // nf@1
  unsigned __int8 v5; // vf@1
  int v6; // r3@2
  int v7; // r3@4
  bool v8; // zf@4
  bool v9; // nf@4
  unsigned __int8 v10; // vf@4
  int v11; // r0@5
  int v12; // r1@9
  signed int result; // r0@9

  v2 = this;
  v3 = *((_DWORD *)this + 17);
  v5 = __OFSUB__(v3, 1);
  v4 = v3 - 1 < 0;
  if ( v3 >= 1 )
  {
    v3 = *(_DWORD *)a2;
    v6 = *((_DWORD *)v2 + 8);
    v5 = __OFSUB__(*(_DWORD *)a2, v6);
    v4 = *(_DWORD *)a2 - v6 < 0;
  }
  if ( v4 ^ v5 )
    goto LABEL_16;
  v7 = *((_DWORD *)v2 + 11);
  v10 = __OFSUB__(v3, v7);
  v8 = v3 == v7;
  v9 = v3 - v7 < 0;
  if ( v3 <= v7 )
    v11 = *((_DWORD *)v2 + 9);
    v10 = 0;
    v8 = v11 == 0;
    v9 = v11 < 0;
  if ( !((unsigned __int8)(v9 ^ v10) | v8) || *((_DWORD *)v2 + 12) < 0 )
LABEL_16:
    result = 0;
  else
    v12 = *((_DWORD *)a2 + 1);
    if ( v12 >= *((_DWORD *)v2 + 10) && v12 <= *((_DWORD *)v2 + 13) )
      result = 1;
  return result;
}
