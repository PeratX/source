

int __fastcall OceanMonumentFeature::isFeatureChunk(OceanMonumentFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  const ChunkPos *v4; // r10@1
  OceanMonumentFeature *v5; // r9@1
  signed int v6; // r0@1
  signed int v7; // r7@1
  Random *v8; // r11@1
  signed int v9; // r6@3
  int v10; // r4@3
  BiomeSource *v11; // r5@5
  __int64 v12; // kr10_8@5
  int v13; // r8@5
  signed int v14; // r7@6
  __int64 v15; // r0@7
  int v16; // r4@8
  unsigned int v17; // r7@9
  unsigned int v18; // r1@9
  int v19; // r0@11
  int v20; // r6@12
  int v21; // r4@12
  int result; // r0@14
  unsigned int v23; // r1@16
  __int64 v24; // kr18_8@16
  __int64 v25; // r0@17
  BiomeSource *v26; // [sp+4h] [bp-2Ch]@0
  int v27; // [sp+8h] [bp-28h]@5

  v4 = a4;
  v5 = this;
  v7 = *(_QWORD *)a4 >> 32;
  v6 = *(_QWORD *)a4;
  v8 = a3;
  if ( v6 <= -1 )
    v6 = v6 + 1 - *((_DWORD *)v5 + 23);
  v9 = *((_DWORD *)v5 + 23);
  v10 = v6 / *((_DWORD *)v5 + 23);
  if ( v7 < 0 )
    v7 = (*(_QWORD *)a4 >> 32) + 1 - v9;
  v27 = v7 / v9;
  v11 = a2;
  StructureFeature::setRandomSeedFor(a3, (Random *)v10, v7 / v9, 10387313, (int)a2, v26);
  v12 = *(_QWORD *)((char *)v5 + 92);
  v13 = v12 * v10;
  if ( (_DWORD)v12 == HIDWORD(v12) )
  {
    v14 = 0;
LABEL_8:
    v16 = v13 + v14 / 2;
LABEL_9:
    v17 = 0;
    v18 = 0;
    goto LABEL_10;
  }
  v14 = j_Random::_genRandInt32(v8) % ((signed int)v12 - HIDWORD(v12));
  v15 = *(_QWORD *)((char *)v5 + 92);
  if ( (_DWORD)v15 == HIDWORD(v15) )
    goto LABEL_8;
  v23 = j_Random::_genRandInt32(v8) % ((signed int)v15 - HIDWORD(v15));
  v24 = *(_QWORD *)((char *)v5 + 92);
  v16 = v13 + (signed int)(v23 + v14) / 2;
  if ( (_DWORD)v24 == HIDWORD(v24) )
    goto LABEL_9;
  v17 = j_Random::_genRandInt32(v8) % ((signed int)v24 - HIDWORD(v24));
  v25 = *(_QWORD *)((char *)v5 + 92);
  if ( (_DWORD)v25 == HIDWORD(v25) )
  else
    v18 = j_Random::_genRandInt32(v8) % ((signed int)v25 - HIDWORD(v25));
LABEL_10:
  result = 0;
  if ( *(_DWORD *)v4 == v16 )
    v19 = *((_DWORD *)v4 + 1);
    if ( v19 == v27 * (_DWORD)v12 + (signed int)(v18 + v17) / 2 )
    {
      v20 = 16 * v19 | 8;
      v21 = 16 * v16 | 8;
      if ( (*(int (__fastcall **)(BiomeSource *, int, int, signed int))(*(_DWORD *)v11 + 28))(v11, v21, v20, 16) == 1 )
      {
        if ( (*(int (__fastcall **)(BiomeSource *, int, int, signed int))(*(_DWORD *)v11 + 28))(v11, v21, v20, 29) )
          result = 1;
      }
    }
  return result;
}


signed int __fastcall OceanMonumentFeature::createStructureStart(OceanMonumentFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4, __int64 *a5)
{
  OceanMonumentFeature *v5; // r5@1
  Random *v6; // r6@1
  Random *v7; // r7@1
  void *v8; // r0@1
  void *v9; // r4@1
  __int64 v10; // kr00_8@1
  signed int result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = j_operator new(0x34u);
  v9 = v8;
  v10 = *a5;
  *((_DWORD *)v8 + 5) = 0;
  *((_DWORD *)v8 + 6) = 0;
  *((_DWORD *)v8 + 3) = 0;
  *((_DWORD *)v8 + 4) = 0;
  *((_DWORD *)v8 + 1) = 0;
  *((_DWORD *)v8 + 2) = 0;
  *(_QWORD *)((char *)v8 + 28) = v10;
  *((_DWORD *)v8 + 9) = 0;
  *((_DWORD *)v8 + 10) = 0;
  *((_DWORD *)v8 + 11) = 0;
  *(_DWORD *)v8 = &off_2718D68;
  *((_BYTE *)v8 + 48) = 0;
  result = OceanMonumentStart::createMonument((OceanMonumentStart *)v8, (Dimension *)v7, v6, v10, SHIDWORD(v10));
  *(_DWORD *)v5 = v9;
  return result;
}


StructureFeature *__fastcall OceanMonumentFeature::~OceanMonumentFeature(OceanMonumentFeature *this)
{
  OceanMonumentFeature *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_2718D38;
  v2 = (void *)*((_DWORD *)this + 28);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 25);
  if ( v3 )
    j_operator delete(v3);
  return j_j_j__ZN16StructureFeatureD2Ev_0(v1);
}


int __fastcall OceanMonumentFeature::OceanMonumentFeature(__int64 a1)
{
  int v1; // r4@1
  int v2; // r5@1

  v1 = a1;
  StructureFeature::StructureFeature(a1);
  *(_DWORD *)v1 = &off_2718D38;
  *(_DWORD *)(v1 + 92) = 32;
  *(_DWORD *)(v1 + 96) = 5;
  *(_DWORD *)(v1 + 100) = 0;
  v2 = v1 + 100;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  std::vector<int,std::allocator<int>>::push_back(v1 + 112, (int *)(Biome::deepOcean + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 100, (int *)(Biome::deepOcean + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 100, (int *)(Biome::frozenOcean + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 100, (int *)(Biome::frozenRiver + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 100, (int *)(Biome::ocean + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 100, (int *)(Biome::river + 268));
  return v1;
}


void __fastcall OceanMonumentFeature::~OceanMonumentFeature(OceanMonumentFeature *this)
{
  OceanMonumentFeature *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_2718D38;
  v2 = (void *)*((_DWORD *)this + 28);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 25);
  if ( v3 )
    j_operator delete(v3);
  StructureFeature::~StructureFeature(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall OceanMonumentFeature::~OceanMonumentFeature(OceanMonumentFeature *this)
{
  OceanMonumentFeature::~OceanMonumentFeature(this);
}


MobSpawnerData *__fastcall OceanMonumentFeature::initMobSpawnTypes(OceanMonumentFeature *this, HardcodedSpawnAreaRegistry *a2)
{
  HardcodedSpawnAreaRegistry *v2; // r5@1
  MobSpawnRules *v3; // r0@1
  MobSpawnRules *v4; // r0@1
  MobSpawnerData *v5; // r0@1
  MobSpawnerData *v6; // r5@1
  MobSpawnerData *result; // r0@6
  char v8; // [sp+14h] [bp-F4h]@1
  int (*v9)(void); // [sp+1Ch] [bp-ECh]@1
  char v10; // [sp+24h] [bp-E4h]@1
  int (*v11)(void); // [sp+2Ch] [bp-DCh]@1
  char v12; // [sp+34h] [bp-D4h]@1
  __int64 ptr; // [sp+ACh] [bp-5Ch]@1
  int v14; // [sp+B4h] [bp-54h]@1
  char v15; // [sp+B8h] [bp-50h]@1
  int (*v16)(void); // [sp+ECh] [bp-1Ch]@10

  v2 = a2;
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)&v15);
  v3 = (MobSpawnRules *)MobSpawnRules::setUnderwaterSpawner((MobSpawnRules *)&v15);
  v4 = (MobSpawnRules *)MobSpawnRules::setSurfaceSpawner(v3);
  MobSpawnRules::setUndergroundSpawner(v4);
  v11 = 0;
  v9 = 0;
  MobSpawnerData::MobSpawnerData(&v12, 2865, 1, 2, 4, (int)&v15, (int)&v10, (int)&v8);
  ptr = 0LL;
  v14 = 0;
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::_M_range_initialize<MobSpawnerData const*>(
    (char **)&ptr,
    (int)&v12,
    (int)&ptr);
  HardcodedSpawnAreaRegistry::initMobSpawnsForType((int)v2, 3, (int)&ptr);
  v6 = (MobSpawnerData *)HIDWORD(ptr);
  v5 = (MobSpawnerData *)ptr;
  if ( (_DWORD)ptr != HIDWORD(ptr) )
  {
    do
      v5 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v5) + 120);
    while ( v6 != v5 );
    v5 = (MobSpawnerData *)ptr;
  }
  if ( v5 )
    j_operator delete((void *)v5);
  result = MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v12);
  if ( v9 )
    result = (MobSpawnerData *)v9();
  if ( v11 )
    result = (MobSpawnerData *)v11();
  if ( v16 )
    result = (MobSpawnerData *)v16();
  return result;
}


int __fastcall OceanMonumentFeature::getNearestGeneratedFeature(Dimension *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  bool v5; // [sp+18h] [bp-18h]@0

  return StructureFeature::findNearestFeaturePositionBySpacing(
           (StructureFeature *)a2,
           this,
           a3,
           a4,
           (BlockPos *)*(_QWORD *)(this + 46),
           *(_QWORD *)(this + 46) >> 32,
           10387313,
           1,
           100,
           0,
           v5);
}


int __fastcall OceanMonumentFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 8;
  *(_DWORD *)(result + 4) = "Monument";
  return result;
}
