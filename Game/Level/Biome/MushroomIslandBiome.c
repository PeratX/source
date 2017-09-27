

void __fastcall MushroomIslandBiome::~MushroomIslandBiome(MushroomIslandBiome *this)
{
  MushroomIslandBiome::~MushroomIslandBiome(this);
}


int __fastcall MushroomIslandBiome::MushroomIslandBiome(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@3
  MobSpawnerData *v4; // r5@3 OVERLAPPED
  MobSpawnerData *v5; // r6@3 OVERLAPPED
  MobSpawnerData *v6; // r0@4
  MobSpawnerData *v7; // r6@6
  MobSpawnerData *v8; // r5@6
  MobSpawnerData *v9; // r0@7
  __int64 v10; // kr00_8@9
  MobSpawnerData *v11; // r0@10
  char v13; // [sp+14h] [bp-B4h]@13
  void (*v14)(void); // [sp+1Ch] [bp-ACh]@13
  char v15; // [sp+24h] [bp-A4h]@13
  void (*v16)(void); // [sp+2Ch] [bp-9Ch]@13
  char v17; // [sp+34h] [bp-94h]@13
  int v18; // [sp+ACh] [bp-1Ch]@1

  v2 = a1;
  v18 = 0;
  Biome::Biome(a1, a2, 9, &v18);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  *(_DWORD *)v2 = &off_2704060;
  v3 = *(_DWORD *)(v2 + 124);
  *(_DWORD *)(v3 + 208) = -1027080192;
  *(_DWORD *)(v3 + 212) = -100;
  *(_DWORD *)(v3 + 216) = -100;
  *(_DWORD *)(v3 + 224) = 1;
  *(_DWORD *)(v3 + 248) = 1;
  *(_BYTE *)(v2 + 188) = *(_BYTE *)(Block::mMycelium + 4);
  *(_QWORD *)&v4 = *(_QWORD *)(v2 + 128);
  if ( v5 != v4 )
  {
    v6 = v4;
    do
      v6 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v6) + 120);
    while ( v5 != v6 );
  }
  *(_DWORD *)(v2 + 132) = v4;
  v7 = *(MobSpawnerData **)(v2 + 140);
  v8 = *(MobSpawnerData **)(v2 + 144);
  if ( v8 != v7 )
    v9 = *(MobSpawnerData **)(v2 + 140);
      v9 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v9) + 120);
    while ( v8 != v9 );
  *(_DWORD *)(v2 + 144) = v7;
  v10 = *(_QWORD *)(v2 + 152);
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = (MobSpawnerData *)v10;
      v11 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v11) + 120);
    while ( (MobSpawnerData *)HIDWORD(v10) != v11 );
    v7 = *(MobSpawnerData **)(v2 + 144);
  *(_DWORD *)(v2 + 156) = v10;
  v16 = 0;
  v14 = 0;
  MobSpawnerData::MobSpawnerData(&v17, 4880, 8, 4, 8, v2 + 4, (int)&v15, (int)&v13);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 140, v7, &v17);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v17);
  if ( v14 )
    v14();
  if ( v16 )
    v16();
  return v2;
}


void __fastcall MushroomIslandBiome::~MushroomIslandBiome(MushroomIslandBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}
