

void __fastcall FlatWorldGenerator::_generatePrototypeBlockValues(FlatWorldGenerator *this, int a2, const FlatWorldGeneratorOptions *a3)
{
  FlatWorldGenerator::_generatePrototypeBlockValues(this, a2, a3);
}


void __fastcall FlatWorldGenerator::_generatePrototypeDataValues(FlatWorldGenerator *this, int a2, const FlatWorldGeneratorOptions *a3)
{
  FlatWorldGenerator::_generatePrototypeDataValues(this, a2, a3);
}


unsigned __int8 *__fastcall FlatWorldGenerator::loadChunk(FlatWorldGenerator *this, LevelChunk *a2, bool a3)
{
  FlatWorldGenerator *v3; // r5@1
  LevelChunk *v4; // r4@1
  __int64 v5; // r6@1
  int v6; // r0@1
  __int64 v7; // r6@1
  int v8; // r0@1
  unsigned __int8 v10; // [sp+0h] [bp-18h]@1
  unsigned __int8 v11; // [sp+1h] [bp-17h]@1
  __int16 v12; // [sp+2h] [bp-16h]@1

  v3 = this;
  v4 = a2;
  v5 = *((_QWORD *)this + 4);
  v6 = ChunkSource::getDimension(this);
  LevelChunk::setAllBlockIDs((int)v4, v5, SHIDWORD(v5), *(_WORD *)(v6 + 120));
  v7 = *(_QWORD *)((char *)v3 + 44);
  v8 = ChunkSource::getDimension(v3);
  LevelChunk::setAllBlockData((int)v4, v7, SHIDWORD(v7), *(_WORD *)(v8 + 120));
  LevelChunk::recomputeHeightMap((unsigned int)v4);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  do
  {
    v11 = 0;
    do
    {
      LevelChunk::setBiome(v4, *((const Biome **)v3 + 14), (const ChunkBlockPos *)&v10);
      ++v11;
    }
    while ( v11 < 0x10u );
    ++v10;
  }
  while ( v10 < 0x10u );
  LevelChunk::setSaved(v4);
  return LevelChunk::changeState((int)v4, 1, 2u);
}


int __fastcall FlatWorldGenerator::getFeatureTypeAt(FlatWorldGenerator *this, const BlockPos *a2)
{
  return 0;
}


void __fastcall FlatWorldGenerator::_generatePrototypeDataValues(FlatWorldGenerator *this, int a2, const FlatWorldGeneratorOptions *a3)
{
  const FlatWorldGeneratorOptions *v3; // r7@1
  FlatWorldGenerator *v4; // r8@1
  int v5; // r0@1
  int v6; // r10@1
  char *v7; // r4@2
  int v8; // r9@2
  int v9; // r6@3
  int v10; // r0@4
  int v11; // r12@4
  int v12; // r2@5
  int v13; // r3@7
  int v14; // r6@8
  int v15; // r7@8
  char v16; // r5@8
  int v17; // r7@14
  int v18; // r1@14
  signed int v19; // r6@18

  v3 = a3;
  v4 = this;
  v5 = *((_DWORD *)a3 + 10);
  v6 = a2;
  if ( (unsigned int)(v5 + 2) >= 3 )
  {
    v9 = (v5 + 1) / 2;
    v7 = (char *)j_operator new(v9);
    _aeabi_memclr(v7, v9);
    v8 = (int)&v7[v9];
  }
  else
    v7 = 0;
    v8 = 0;
  v11 = *(_QWORD *)v3 >> 32;
  v10 = *(_QWORD *)v3;
  if ( v10 != v11 )
    v12 = 0;
    do
    {
      if ( *(_DWORD *)(v10 + 4) >= 1 )
      {
        v13 = 0;
        do
        {
          v14 = *(_BYTE *)(v10 + 1);
          v15 = (v12 + v13) / 2;
          v16 = v7[v15];
          if ( (v12 + v13) & 1 )
            v14 = v16 & 0xF | 16 * v14;
          else
            LOBYTE(v14) = v16 & 0xF0 | v14 & 0xF;
          v7[v15] = v14;
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v10 + 4) );
        v12 += v13;
      }
      v10 += 8;
    }
    while ( v10 != v11 );
  v17 = *((_DWORD *)v4 + 11);
  v18 = *((_DWORD *)v4 + 12);
  if ( v6 << 7 <= (unsigned int)(v18 - v17) )
    if ( v6 << 7 < (unsigned int)(*((_DWORD *)v4 + 12) - v17) )
      *((_DWORD *)v4 + 12) = (v6 << 7) + v17;
    std::vector<NibblePair,std::allocator<NibblePair>>::_M_fill_insert(
      (int)v4 + 44,
      v18,
      (v6 << 7) - (v18 - v17),
      (char *)&unk_262E9E4);
    v17 = *((_DWORD *)v4 + 11);
  v19 = 256;
  do
    j___aeabi_memcpy(v17, (int)v7, v8 - (_DWORD)v7);
    v17 += v6 / 2;
    --v19;
  while ( v19 );
  if ( v7 )
    j_j_j__ZdlPv_6(v7);
}


void __fastcall FlatWorldGenerator::_generatePrototypeBlockValues(FlatWorldGenerator *this, int a2, const FlatWorldGeneratorOptions *a3)
{
  const FlatWorldGeneratorOptions *v3; // r7@1
  int v4; // r10@1
  int v5; // r11@1
  FlatWorldGenerator *v6; // r8@1
  _BYTE *v7; // r4@2
  int v8; // r0@4
  int v9; // r2@4
  int v10; // r3@5
  signed int v11; // r1@6
  signed int v12; // r7@7
  int v13; // r0@11
  int v14; // r7@11
  char *v15; // r1@11
  signed int v16; // r5@15

  v3 = a3;
  v4 = a2;
  v5 = *((_DWORD *)a3 + 10);
  v6 = this;
  if ( v5 )
    v7 = j_operator new(*((_DWORD *)a3 + 10));
  else
    v7 = 0;
  v8 = *(_QWORD *)v3 >> 32;
  v9 = *(_QWORD *)v3;
  if ( v9 != v8 )
  {
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)(v9 + 4);
      if ( v11 >= 1 )
      {
        v12 = 0;
        do
          *(&v7[v10] + v12++) = *(_BYTE *)v9;
        while ( v12 < v11 );
        v10 += v12;
      }
      v9 += 8;
    }
    while ( v9 != v8 );
  }
  v13 = v4 << 8;
  v14 = *((_DWORD *)v6 + 8);
  v15 = (char *)*((_DWORD *)v6 + 9);
  if ( v4 << 8 <= (unsigned int)&v15[-v14] )
    if ( v4 << 8 < (unsigned int)&v15[-v14] )
      *((_DWORD *)v6 + 9) = v13 + v14;
    std::vector<BlockID,std::allocator<BlockID>>::_M_fill_insert(
      (int)v6 + 32,
      v15,
      v13 - (_DWORD)&v15[-v14],
      (char *)&BlockID::AIR);
    v14 = *((_DWORD *)v6 + 8);
  v16 = 256;
  do
    j___aeabi_memcpy(v14, (int)v7, v5);
    v14 += v4;
    --v16;
  while ( v16 );
  if ( v7 )
    j_j_j__ZdlPv_6(v7);
}


void __fastcall FlatWorldGenerator::~FlatWorldGenerator(FlatWorldGenerator *this)
{
  FlatWorldGenerator::~FlatWorldGenerator(this);
}


ChunkSource *__fastcall FlatWorldGenerator::~FlatWorldGenerator(FlatWorldGenerator *this)
{
  FlatWorldGenerator *v1; // r4@1
  WorldGenerator *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@3
  void *v5; // r0@5
  void *v6; // r0@7

  v1 = this;
  *(_DWORD *)this = &off_2718CA8;
  *((_DWORD *)this + 6) = &off_2718D10;
  v2 = (FlatWorldGenerator *)((char *)this + 24);
  v3 = *((_DWORD *)this + 21);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 21) = 0;
  v4 = *((_DWORD *)v1 + 20);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  PerlinSimplexNoise::~PerlinSimplexNoise((FlatWorldGenerator *)((char *)v1 + 60));
  v5 = (void *)*((_DWORD *)v1 + 11);
  if ( v5 )
    j_operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 8);
  if ( v6 )
    j_operator delete(v6);
  WorldGenerator::~WorldGenerator(v2);
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


void __fastcall FlatWorldGenerator::~FlatWorldGenerator(FlatWorldGenerator *this)
{
  FlatWorldGenerator *v1; // r4@1
  WorldGenerator *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@3
  void *v5; // r0@5
  void *v6; // r0@7

  v1 = this;
  *(_DWORD *)this = &off_2718CA8;
  *((_DWORD *)this + 6) = &off_2718D10;
  v2 = (FlatWorldGenerator *)((char *)this + 24);
  v3 = *((_DWORD *)this + 21);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 21) = 0;
  v4 = *((_DWORD *)v1 + 20);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  PerlinSimplexNoise::~PerlinSimplexNoise((FlatWorldGenerator *)((char *)v1 + 60));
  v5 = (void *)*((_DWORD *)v1 + 11);
  if ( v5 )
    j_operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 8);
  if ( v6 )
    j_operator delete(v6);
  WorldGenerator::~WorldGenerator(v2);
  ChunkSource::~ChunkSource(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FlatWorldGenerator::FlatWorldGenerator(int a1, Dimension *a2, int a3, int a4)
{
  int v4; // r10@1
  Dimension *v5; // r11@1
  int v6; // r4@1
  int v7; // r5@1
  __int64 v8; // r0@1
  int v9; // r7@1
  __int64 v10; // r0@1
  int v11; // r7@1
  int v12; // r1@1
  int v13; // r1@1
  int v14; // r1@1

  v4 = a4;
  v5 = a2;
  v6 = a1;
  ChunkSource::ChunkSource(a1, a2, 16);
  WorldGenerator::WorldGenerator((WorldGenerator *)(v6 + 24));
  *(_DWORD *)v6 = &off_2718CA8;
  *(_DWORD *)(v6 + 24) = &off_2718D10;
  *(_DWORD *)(v6 + 32) = 0;
  v7 = v6 + 32;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = 0;
  PerlinSimplexNoise::PerlinSimplexNoise((PerlinSimplexNoise *)(v6 + 60), 0x15CF0u, 5);
  LODWORD(v8) = j_operator new(0x70u);
  v9 = v8;
  RandomScatteredLargeFeature::RandomScatteredLargeFeature(v8);
  *(_DWORD *)(v6 + 80) = v9;
  LODWORD(v10) = j_operator new(0x7Cu);
  v11 = v10;
  OceanMonumentFeature::OceanMonumentFeature(v10);
  *(_DWORD *)(v6 + 84) = v11;
  v12 = *(_DWORD *)(v6 + 28);
  (*(void (**)(void))(**(_DWORD **)(v6 + 80) + 8))();
  v13 = *(_DWORD *)(v6 + 28);
  (*(void (**)(void))(**(_DWORD **)(v6 + 84) + 8))();
  *(_DWORD *)(v6 + 56) = Biome::getBiome(*(Biome **)(v4 + 16), v14);
  FlatWorldGenerator::_generatePrototypeBlockValues(
    (FlatWorldGenerator *)v6,
    (signed __int16)v5[60],
    (const FlatWorldGeneratorOptions *)v4);
  FlatWorldGenerator::_generatePrototypeDataValues(
  return v6;
}


signed int __fastcall FlatWorldGenerator::postProcess(FlatWorldGenerator *this, ChunkViewSource *a2)
{
  FlatWorldGenerator *v2; // r11@1
  ChunkViewSource *v3; // r9@1
  char *v4; // r0@1
  char *v5; // r0@2
  signed int v6; // r4@3
  char *v8; // r0@5
  int v9; // r1@5
  int v10; // r0@5
  unsigned __int64 *v11; // r10@5
  int v12; // r0@5
  unsigned int v13; // r0@6
  int v14; // r1@6
  signed int v15; // r3@6
  int v16; // r0@7
  int *v17; // r4@7
  int v18; // r5@7
  unsigned int v19; // ST0C_4@8
  unsigned int v20; // r5@8
  unsigned __int64 v21; // kr00_8@8
  int v22; // r10@8
  unsigned int v23; // r0@8
  int v24; // r1@8
  signed int v25; // r2@8
  int v26; // r0@9
  int *v27; // r4@9
  int v28; // r5@9
  BlockSourceListener *v29; // r6@10
  int v30; // r0@10
  char *v31; // r0@10
  char *v32; // r0@10
  int v33; // r5@12
  unsigned int *v34; // r1@13
  unsigned int v35; // r0@15
  unsigned int *v36; // r6@19
  unsigned int v37; // r0@21
  void **v38; // [sp+14h] [bp-A9Ch]@10
  char v39; // [sp+20h] [bp-A90h]@10
  int v40; // [sp+94h] [bp-A1Ch]@6
  int v41; // [sp+98h] [bp-A18h]@6
  int v42; // [sp+A58h] [bp-58h]@6
  char v43; // [sp+A5Ch] [bp-54h]@6
  int v44; // [sp+A60h] [bp-50h]@6
  int v45; // [sp+A64h] [bp-4Ch]@8
  char v46; // [sp+A68h] [bp-48h]@5
  LevelChunk *v47; // [sp+A78h] [bp-38h]@5
  int v48; // [sp+A7Ch] [bp-34h]@12
  int v49; // [sp+A80h] [bp-30h]@5
  int v50; // [sp+A84h] [bp-2Ch]@5

  v2 = this;
  v3 = a2;
  v4 = j_Level::getLevelData(*((Level **)this + 2));
  if ( LevelData::hasBonusChestEnabled((LevelData *)v4) != 1
    || (v5 = j_Level::getLevelData(*((Level **)v2 + 2)), LevelData::getBonusChestSpawned((LevelData *)v5)) )
  {
    v6 = 1;
  }
  else
    v8 = ChunkViewSource::getArea(v3);
    v9 = *((_DWORD *)v8 + 12);
    v10 = *((_DWORD *)v8 + 14);
    v49 = v9 + 1;
    v50 = v10 + 1;
    (*(void (__fastcall **)(LevelChunk **, ChunkViewSource *, int *))(*(_DWORD *)v3 + 16))(&v47, v3, &v49);
    v11 = (unsigned __int64 *)LevelChunk::getPosition(v47);
    v12 = LevelChunk::getDimension(v47);
    PostprocessingManager::tryLock((PostprocessingManager *)&v46, *(const ChunkPos **)(v12 + 192), v11);
    if ( PostprocessingManager::Owns::operator bool(&v46) == 1 )
    {
      v13 = Level::getSeed(*((Level **)v2 + 2));
      v40 = v13;
      v42 = 625;
      v14 = 0;
      v15 = 1;
      v43 = 0;
      v44 = 0;
      v41 = v13;
      do
      {
        v16 = v13 ^ (v13 >> 30);
        v17 = &v40 + v14;
        v18 = v14++ + 1812433253 * v16;
        v13 = v15++ + 1812433253 * v16;
        v17[2] = v18 + 1;
      }
      while ( v14 != 397 );
      v42 = 624;
      v45 = 398;
      v19 = j_Random::_genRandInt32((Random *)&v40);
      v20 = j_Random::_genRandInt32((Random *)&v40);
      v21 = *v11;
      v22 = Level::getSeed(*((Level **)v2 + 2));
      j_Random::_checkThreadId((Random *)&v40);
      v23 = (v21 * ((v19 >> 1) | 1) + HIDWORD(v21) * ((v20 >> 1) | 1)) ^ v22;
      v40 = (v21 * ((v19 >> 1) | 1) + HIDWORD(v21) * ((v20 >> 1) | 1)) ^ v22;
      v24 = 0;
      v25 = 1;
      v41 = (v21 * ((v19 >> 1) | 1) + HIDWORD(v21) * ((v20 >> 1) | 1)) ^ v22;
        v26 = v23 ^ (v23 >> 30);
        v27 = &v40 + v24;
        v28 = v24++ + 1812433253 * v26;
        v23 = v25++ + 1812433253 * v26;
        v27[2] = v28 + 1;
      while ( v24 != 397 );
      v29 = (BlockSourceListener *)ChunkSource::getLevel(v3);
      v30 = ChunkSource::getDimension(v3);
      BlockSource::BlockSource((int)&v39, v29, v30, (int)v3, 0, 1);
      Feature::Feature((Feature *)&v38, 0);
      v38 = &off_2723624;
      v31 = j_Level::getLevelData(*((Level **)v2 + 2));
      v32 = LevelData::getSpawn((LevelData *)v31);
      BonusChestFeature::place((BonusChestFeature *)&v38, (BlockSource *)&v39, (const BlockPos *)v32, (Random *)&v40);
      Feature::~Feature((Feature *)&v38);
      BlockSource::~BlockSource((BlockSource *)&v39);
      v6 = 1;
    }
    else
      v6 = 0;
    PostprocessingManager::Owns::~Owns((PostprocessingManager::Owns *)&v46);
    v33 = v48;
    if ( v48 )
      v34 = (unsigned int *)(v48 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
      else
        v35 = (*v34)--;
      if ( v35 == 1 )
        v36 = (unsigned int *)(v33 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
        if ( &pthread_create )
        {
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
        }
        else
          v37 = (*v36)--;
        if ( v37 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
  return v6;
}
