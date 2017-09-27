

int __fastcall FixedBiomeSource::isValidSpawn(FixedBiomeSource *this, int a2)
{
  return 0;
}


int __fastcall FixedBiomeSource::findValidSpawnPosition(FixedBiomeSource *this, LayerData *a2, int a3, int a4, BlockPos *a5)
{
  return 0;
}


int __fastcall FixedBiomeSource::fillBiomeData(FixedBiomeSource *this, LevelChunk *a2, int a3, int a4)
{
  LevelChunk *v4; // r4@1
  FixedBiomeSource *v5; // r5@1
  char v6; // r7@1
  char v7; // r6@2
  const Biome *v8; // r0@3
  int result; // r0@4
  char v10; // [sp+0h] [bp-20h]@3
  char v11; // [sp+1h] [bp-1Fh]@3
  __int16 v12; // [sp+2h] [bp-1Eh]@3

  v4 = a2;
  v5 = this;
  v6 = 0;
  do
  {
    v7 = 0;
    do
    {
      v10 = v7;
      v11 = v6;
      v12 = 0;
      v8 = (const Biome *)j_Biome::getBiome(*((Biome **)v5 + 13), (int)a2);
      j_LevelChunk::setBiome(v4, v8, (const ChunkBlockPos *)&v10);
      ++v7;
    }
    while ( (unsigned __int8)v7 < 0x10u );
    result = (unsigned __int8)++v6;
  }
  while ( (unsigned __int8)v6 < 0x10u );
  return result;
}


int __fastcall FixedBiomeSource::getSpawnPosition(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


BiomeSource::BiomeArea *__fastcall FixedBiomeSource::getBiomeArea(FixedBiomeSource *this, const BoundingBox *a2, unsigned int a3, unsigned int a4)
{
  FixedBiomeSource *v4; // r6@1
  unsigned int v5; // r4@1
  const BoundingBox *v6; // r5@1
  Biome *v7; // r0@1

  v4 = this;
  v5 = a4;
  v6 = (const BoundingBox *)a3;
  v7 = (Biome *)j_Biome::getBiome(*((Biome **)a2 + 13), (int)a2);
  return j_BiomeSource::BiomeArea::BiomeArea(v4, v6, v5, v7);
}


int __fastcall FixedBiomeSource::FixedBiomeSource(int a1, int a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = j_BiomeSource::BiomeSource(a1, a2);
  *(_DWORD *)result = &off_2721BBC;
  *(_DWORD *)(result + 52) = v3;
  return result;
}


void __fastcall FixedBiomeSource::~FixedBiomeSource(FixedBiomeSource *this)
{
  FixedBiomeSource *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_2721B88;
  v2 = *((_DWORD *)this + 4);
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
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall FixedBiomeSource::~FixedBiomeSource(FixedBiomeSource *this)
{
  FixedBiomeSource::~FixedBiomeSource(this);
}
