

int __fastcall OceanBiome::OceanBiome(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r6@3
  MobSpawnerData *v4; // r0@4
  MobSpawnRules *v5; // r0@6
  MobSpawnerData *v6; // r6@6
  char v8; // [sp+10h] [bp-B0h]@6
  void (*v9)(void); // [sp+18h] [bp-A8h]@6
  char v10; // [sp+20h] [bp-A0h]@6
  void (*v11)(void); // [sp+28h] [bp-98h]@6
  char v12; // [sp+30h] [bp-90h]@6
  int v13; // [sp+A8h] [bp-18h]@1

  v2 = a1;
  v13 = 0;
  Biome::Biome(a1, a2, 10, &v13);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  *(_DWORD *)v2 = &off_2703C08;
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)(v2 + 280));
  v3 = *(_QWORD *)(v2 + 140);
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = (MobSpawnerData *)v3;
    do
      v4 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v4) + 120);
    while ( (MobSpawnerData *)HIDWORD(v3) != v4 );
  }
  *(_DWORD *)(v2 + 144) = v3;
  v5 = (MobSpawnRules *)MobSpawnRules::setSurfaceSpawner((MobSpawnRules *)(v2 + 280));
  MobSpawnRules::setUnderwaterSpawner(v5);
  v6 = *(MobSpawnerData **)(v2 + 156);
  v11 = 0;
  v9 = 0;
  MobSpawnerData::MobSpawnerData(&v12, 8977, 10, 2, 4, v2 + 280, (int)&v10, (int)&v8);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 152, v6, &v12);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v12);
  if ( v9 )
    v9();
  if ( v11 )
    v11();
  return v2;
}


void __fastcall OceanBiome::~OceanBiome(OceanBiome *this)
{
  OceanBiome::~OceanBiome(this);
}


void __fastcall OceanBiome::~OceanBiome(OceanBiome *this)
{
  Biome *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2703C08;
  v2 = (void (*)(void))*((_DWORD *)this + 83);
  if ( v2 )
    v2();
  Biome::~Biome(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall OceanBiome::getTemperatureCategory(OceanBiome *this)
{
  return 0;
}


Biome *__fastcall OceanBiome::~OceanBiome(OceanBiome *this)
{
  Biome *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2703C08;
  v2 = (void (*)(void))*((_DWORD *)this + 83);
  if ( v2 )
    v2();
  return j_j_j__ZN5BiomeD2Ev_0(v1);
}


signed int __fastcall OceanBiome::getCreatureProbability(OceanBiome *this)
{
  return 1036831949;
}
