

void __fastcall HellBiome::~HellBiome(HellBiome *this)
{
  Biome *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2703E78;
  v2 = (void (*)(void))*((_DWORD *)this + 83);
  if ( v2 )
    v2();
  Biome::~Biome(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall HellBiome::getCreatureProbability(HellBiome *this)
{
  return 1050253722;
}


Biome *__fastcall HellBiome::~HellBiome(HellBiome *this)
{
  Biome *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2703E78;
  v2 = (void (*)(void))*((_DWORD *)this + 83);
  if ( v2 )
    v2();
  return j_j_j__ZN5BiomeD2Ev_0(v1);
}


int __fastcall HellBiome::HellBiome(int a1, int a2)
{
  int v2; // r8@1
  MobSpawnerData *v3; // r6@3
  MobSpawnerData *v4; // r7@3
  MobSpawnerData *v5; // r0@4
  __int64 v6; // r6@6
  MobSpawnerData *v7; // r0@7
  __int64 v8; // r6@9
  MobSpawnerData *v9; // r0@10
  __int64 v10; // r6@12
  MobSpawnerData *v11; // r0@13
  MobSpawnRules *v12; // r0@15
  int v13; // r0@15
  __int64 v14; // r2@15
  MobSpawnerData *v15; // r10@15
  int v16; // r4@15
  int v17; // r5@15
  int v18; // r6@15
  int v19; // r7@15
  int v20; // r4@15
  int v21; // r5@15
  int v22; // r6@15
  int v23; // r7@15
  __int64 v24; // r2@15
  int v25; // r0@17
  MobSpawnerData *v26; // r7@23
  MobSpawnerData *v27; // r7@27
  MobSpawnerData *v28; // r7@31
  char v30; // [sp+10h] [bp-2C8h]@31
  void (*v31)(void); // [sp+18h] [bp-2C0h]@31
  char v32; // [sp+20h] [bp-2B8h]@31
  void (*v33)(void); // [sp+28h] [bp-2B0h]@31
  char v34; // [sp+30h] [bp-2A8h]@31
  char v35; // [sp+A8h] [bp-230h]@27
  void (*v36)(void); // [sp+B0h] [bp-228h]@27
  char v37; // [sp+B8h] [bp-220h]@27
  void (*v38)(void); // [sp+C0h] [bp-218h]@27
  char v39; // [sp+C8h] [bp-210h]@27
  char v40; // [sp+140h] [bp-198h]@23
  void (*v41)(void); // [sp+148h] [bp-190h]@23
  char v42; // [sp+150h] [bp-188h]@23
  void (*v43)(void); // [sp+158h] [bp-180h]@23
  char v44; // [sp+160h] [bp-178h]@23
  char v45; // [sp+1D8h] [bp-100h]@17
  void (*v46)(void); // [sp+1E0h] [bp-F8h]@17
  char v47; // [sp+1E8h] [bp-F0h]@17
  void (*v48)(void); // [sp+1F0h] [bp-E8h]@17
  int v49; // [sp+1F8h] [bp-E0h]@15
  int v50; // [sp+1FCh] [bp-DCh]@15
  int v51; // [sp+200h] [bp-D8h]@15
  int v52; // [sp+204h] [bp-D4h]@15
  int v53; // [sp+208h] [bp-D0h]@15
  int v54; // [sp+20Ch] [bp-CCh]@15
  int v55; // [sp+210h] [bp-C8h]@15
  int v56; // [sp+214h] [bp-C4h]@15
  int v57; // [sp+218h] [bp-C0h]@15
  int v58; // [sp+21Ch] [bp-BCh]@15
  int v59; // [sp+220h] [bp-B8h]@15
  int v60; // [sp+224h] [bp-B4h]@16
  void (*v61)(void); // [sp+22Ch] [bp-ACh]@15
  int v62; // [sp+230h] [bp-A8h]@16
  char v63; // [sp+238h] [bp-A0h]@17
  int v64; // [sp+2B0h] [bp-28h]@1

  v2 = a1;
  v64 = 0;
  Biome::Biome(a1, a2, 5, &v64);
  if ( v64 )
    (*(void (**)(void))(*(_DWORD *)v64 + 12))();
  *(_DWORD *)v2 = &off_2703E78;
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)(v2 + 280));
  v3 = *(MobSpawnerData **)(v2 + 128);
  v4 = *(MobSpawnerData **)(v2 + 132);
  if ( v4 != v3 )
  {
    v5 = *(MobSpawnerData **)(v2 + 128);
    do
      v5 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v5) + 120);
    while ( v4 != v5 );
  }
  *(_DWORD *)(v2 + 132) = v3;
  v6 = *(_QWORD *)(v2 + 140);
  if ( HIDWORD(v6) != (_DWORD)v6 )
    v7 = (MobSpawnerData *)v6;
      v7 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v7) + 120);
    while ( (MobSpawnerData *)HIDWORD(v6) != v7 );
  *(_DWORD *)(v2 + 144) = v6;
  v8 = *(_QWORD *)(v2 + 152);
  if ( HIDWORD(v8) != (_DWORD)v8 )
    v9 = (MobSpawnerData *)v8;
      v9 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v9) + 120);
    while ( (MobSpawnerData *)HIDWORD(v8) != v9 );
  *(_DWORD *)(v2 + 156) = v8;
  v10 = *(_QWORD *)(v2 + 164);
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = (MobSpawnerData *)v10;
      v11 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v11) + 120);
    while ( (MobSpawnerData *)HIDWORD(v10) != v11 );
  *(_DWORD *)(v2 + 168) = v10;
  v12 = (MobSpawnRules *)MobSpawnRules::setSurfaceSpawner((MobSpawnRules *)(v2 + 280));
  v13 = MobSpawnRules::setUndergroundSpawner(v12);
  LODWORD(v14) = 3;
  MobSpawnRules::setDifficultyRange(v13, 1, v14);
  v15 = *(MobSpawnerData **)(v2 + 132);
  v16 = *(_DWORD *)(v2 + 284);
  v17 = *(_DWORD *)(v2 + 288);
  v18 = *(_DWORD *)(v2 + 292);
  v19 = *(_DWORD *)(v2 + 296);
  v49 = *(_DWORD *)(v2 + 280);
  v50 = v16;
  v51 = v17;
  v52 = v18;
  v53 = v19;
  HIDWORD(v24) = *(_DWORD *)(v2 + 304);
  v20 = *(_DWORD *)(v2 + 308);
  v21 = *(_DWORD *)(v2 + 312);
  v22 = *(_DWORD *)(v2 + 316);
  v23 = *(_DWORD *)(v2 + 320);
  v54 = *(_DWORD *)(v2 + 300);
  v55 = HIDWORD(v24);
  v56 = v20;
  v57 = v21;
  v58 = v22;
  v59 = v23;
  v61 = 0;
  HIDWORD(v24) = *(_DWORD *)(v2 + 332);
  if ( HIDWORD(v24) )
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v24))(&v60, v2 + 324, 2);
    v62 = *(_DWORD *)(v2 + 336);
    v61 = *(void (**)(void))(v2 + 332);
  LODWORD(v24) = 3;
  v25 = MobSpawnRules::setPopulationCap((MobSpawnRules *)&v49, 0, v24);
  v48 = 0;
  v46 = 0;
  MobSpawnerData::MobSpawnerData(&v63, 2857, 6, 1, 1, v25, (int)&v47, (int)&v45);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 128, v15, &v63);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v63);
  if ( v46 )
    v46();
  if ( v48 )
    v48();
  if ( v61 )
    v61();
  v26 = *(MobSpawnerData **)(v2 + 132);
  v43 = 0;
  v41 = 0;
  MobSpawnerData::MobSpawnerData(&v44, 68388, 100, 2, 4, v2 + 280, (int)&v42, (int)&v40);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 128, v26, &v44);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v44);
  if ( v41 )
    v41();
  if ( v43 )
    v43();
  v27 = *(MobSpawnerData **)(v2 + 132);
  v38 = 0;
  v36 = 0;
  MobSpawnerData::MobSpawnerData(&v39, 2858, 10, 1, 4, v2 + 280, (int)&v37, (int)&v35);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 128, v27, &v39);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v39);
  if ( v36 )
    v36();
  if ( v38 )
    v38();
  v28 = *(MobSpawnerData **)(v2 + 132);
  v33 = 0;
  v31 = 0;
  MobSpawnerData::MobSpawnerData(&v34, 2854, 6, 1, 1, v2 + 280, (int)&v32, (int)&v30);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 128, v28, &v34);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v34);
  if ( v31 )
    v31();
  if ( v33 )
    v33();
  return v2;
}


void __fastcall HellBiome::~HellBiome(HellBiome *this)
{
  HellBiome::~HellBiome(this);
}
