

int __fastcall RandomScatteredLargeFeature::createStructureStart(RandomScatteredLargeFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4, unsigned __int64 *a5)
{
  RandomScatteredLargeFeature *v5; // r4@1
  Random *v6; // r6@1
  ScatteredFeatureStart *v7; // r5@1
  Random *v8; // r2@1
  int result; // r0@1

  v5 = this;
  v6 = a3;
  v7 = (ScatteredFeatureStart *)j_operator new(0x30u);
  result = ScatteredFeatureStart::ScatteredFeatureStart(v7, (Dimension *)v6, v8, *a5, *a5 >> 32);
  *(_DWORD *)v5 = v7;
  return result;
}


StructureFeature *__fastcall RandomScatteredLargeFeature::~RandomScatteredLargeFeature(RandomScatteredLargeFeature *this)
{
  RandomScatteredLargeFeature *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271920C;
  v2 = (void *)*((_DWORD *)this + 23);
  if ( v2 )
    j_operator delete(v2);
  return j_j_j__ZN16StructureFeatureD2Ev_0(v1);
}


signed int __fastcall RandomScatteredLargeFeature::isFeatureChunk(RandomScatteredLargeFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  __int64 v4; // kr00_8@1
  RandomScatteredLargeFeature *v5; // r11@1
  Random *v6; // r8@1
  signed int v7; // r0@1
  signed int v8; // r7@3
  int v9; // r5@3
  signed int v10; // r0@3
  int v11; // r4@5
  __int64 v12; // kr08_8@5
  Random *v13; // r6@5
  int v14; // r8@5
  unsigned int v15; // r1@6
  unsigned int v16; // r1@7
  __int64 v17; // kr10_8@7
  signed int v18; // r6@11
  int (*v19)(void); // r2@12
  int v20; // r0@12
  int *v21; // r1@13 OVERLAPPED
  int *v22; // r2@13 OVERLAPPED
  int v23; // r0@14
  int v24; // t1@15
  int v26; // [sp+4h] [bp-34h]@5
  int v27; // [sp+8h] [bp-30h]@12
  int v28; // [sp+Ch] [bp-2Ch]@12
  int v29; // [sp+10h] [bp-28h]@12

  v4 = *(_QWORD *)a4;
  v5 = this;
  v6 = a3;
  v7 = *(_QWORD *)a4;
  if ( v7 <= -1 )
    v7 = v4 + 1 - *((_DWORD *)v5 + 26);
  v8 = *((_DWORD *)v5 + 26);
  v9 = v7 / *((_DWORD *)v5 + 26);
  v10 = HIDWORD(v4);
  if ( SHIDWORD(v4) < 0 )
    v10 = (*(_QWORD *)a4 >> 32) + 1 - v8;
  v11 = v10 / v8;
  StructureFeature::setRandomSeedFor(a3, (Random *)v9, v10 / v8, 14357617, (int)a2, a2);
  v12 = *((_QWORD *)v5 + 13);
  v13 = v6;
  v14 = v12 * v9;
  if ( (_DWORD)v12 == HIDWORD(v12) )
  {
    v15 = 0;
  }
  else
    v16 = j_Random::_genRandInt32(v13) % ((signed int)v12 - HIDWORD(v12));
    v17 = *((_QWORD *)v5 + 13);
    v14 += v16;
    if ( (_DWORD)v17 == HIDWORD(v17) )
      v15 = 0;
    else
      v15 = j_Random::_genRandInt32(v13) % ((signed int)v17 - HIDWORD(v17));
  if ( (_DWORD)v4 == v14 )
    v18 = 0;
    if ( HIDWORD(v4) == v15 + (_DWORD)v12 * v11 )
    {
      v19 = *(int (**)(void))(*(_DWORD *)v26 + 36);
      v27 = 16 * v4 | 8;
      v28 = 0;
      v29 = 16 * HIDWORD(v4) | 8;
      v20 = v19();
      if ( v20 )
      {
        *(_QWORD *)&v21 = *(_QWORD *)((char *)v5 + 92);
        if ( v21 == v22 )
        {
          v18 = 0;
        }
        else
          v23 = *(_DWORD *)(v20 + 268);
          while ( 1 )
          {
            v24 = *v21;
            ++v21;
            if ( v23 == v24 )
              break;
            if ( v22 == v21 )
              return 0;
          }
          v18 = 1;
      }
    }
  return v18;
}


int __fastcall RandomScatteredLargeFeature::getNearestGeneratedFeature(Dimension *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  bool v5; // [sp+18h] [bp-10h]@0

  return StructureFeature::findNearestFeaturePositionBySpacing(
           (StructureFeature *)a2,
           this,
           a3,
           a4,
           (BlockPos *)*((_QWORD *)this + 13),
           *((_QWORD *)this + 13) >> 32,
           14357617,
           0,
           100,
           v5);
}


MobSpawnerData *__fastcall RandomScatteredLargeFeature::initMobSpawnTypes(RandomScatteredLargeFeature *this, HardcodedSpawnAreaRegistry *a2)
{
  HardcodedSpawnAreaRegistry *v2; // r5@1
  MobSpawnerData *v3; // r0@1
  MobSpawnerData *v4; // r5@1
  MobSpawnerData *result; // r0@6
  bool v6; // [sp+0h] [bp-108h]@0
  char v7; // [sp+14h] [bp-F4h]@1
  int (*v8)(void); // [sp+1Ch] [bp-ECh]@1
  char v9; // [sp+24h] [bp-E4h]@1
  int (*v10)(void); // [sp+2Ch] [bp-DCh]@1
  char v11; // [sp+34h] [bp-D4h]@1
  __int64 ptr; // [sp+ACh] [bp-5Ch]@1
  int v13; // [sp+B4h] [bp-54h]@1
  char v14; // [sp+B8h] [bp-50h]@1
  int (*v15)(void); // [sp+ECh] [bp-1Ch]@10

  v2 = a2;
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)&v14);
  MobSpawnRules::setBrightnessRange((MobSpawnRules *)&v14, 0, 4294967304LL, v6);
  v10 = 0;
  v8 = 0;
  MobSpawnerData::MobSpawnerData(&v11, 2861, 1, 1, 1, (int)&v14, (int)&v9, (int)&v7);
  ptr = 0LL;
  v13 = 0;
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::_M_range_initialize<MobSpawnerData const*>(
    (char **)&ptr,
    (int)&v11,
    (int)&ptr);
  HardcodedSpawnAreaRegistry::initMobSpawnsForType((int)v2, 2, (int)&ptr);
  v4 = (MobSpawnerData *)HIDWORD(ptr);
  v3 = (MobSpawnerData *)ptr;
  if ( (_DWORD)ptr != HIDWORD(ptr) )
  {
    do
      v3 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v3) + 120);
    while ( v4 != v3 );
    v3 = (MobSpawnerData *)ptr;
  }
  if ( v3 )
    j_operator delete((void *)v3);
  result = MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v11);
  if ( v8 )
    result = (MobSpawnerData *)v8();
  if ( v10 )
    result = (MobSpawnerData *)v10();
  if ( v15 )
    result = (MobSpawnerData *)v15();
  return result;
}


int __fastcall RandomScatteredLargeFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 6;
  *(_DWORD *)(result + 4) = "Temple";
  return result;
}


void __fastcall RandomScatteredLargeFeature::~RandomScatteredLargeFeature(RandomScatteredLargeFeature *this)
{
  RandomScatteredLargeFeature *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271920C;
  v2 = (void *)*((_DWORD *)this + 23);
  if ( v2 )
    j_operator delete(v2);
  StructureFeature::~StructureFeature(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall RandomScatteredLargeFeature::~RandomScatteredLargeFeature(RandomScatteredLargeFeature *this)
{
  RandomScatteredLargeFeature::~RandomScatteredLargeFeature(this);
}


int __fastcall RandomScatteredLargeFeature::RandomScatteredLargeFeature(__int64 a1)
{
  int v1; // r4@1
  int v2; // r5@1

  v1 = a1;
  StructureFeature::StructureFeature(a1);
  *(_DWORD *)v1 = &off_271920C;
  *(_DWORD *)(v1 + 92) = 0;
  v2 = v1 + 92;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 12) = 34359738400LL;
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::desert + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::desertHills + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::jungle + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::jungleHills + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::swampland + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::swamplandMutated + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::iceFlats + 268));
  std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::taigaCold + 268));
  return v1;
}
