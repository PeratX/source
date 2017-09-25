

Biome *__fastcall TheEndBiome::~TheEndBiome(TheEndBiome *this)
{
  Biome *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &loc_2704400;
  v2 = (void (*)(void))*((_DWORD *)this + 83);
  if ( v2 )
    v2();
  return j_j_j__ZN5BiomeD2Ev_0(v1);
}


int __fastcall TheEndBiome::getSkyColor(int result, float a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r1@1

  v2 = unk_283E634;
  v3 = unk_283E638;
  v4 = unk_283E63C;
  *(float *)result = Color::BLACK;
  *(_DWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 12) = v4;
  return result;
}


void __fastcall TheEndBiome::~TheEndBiome(TheEndBiome *this)
{
  Biome *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &loc_2704400;
  v2 = (void (*)(void))*((_DWORD *)this + 83);
  if ( v2 )
    v2();
  Biome::~Biome(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall TheEndBiome::TheEndBiome(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r6@1
  MobSpawnerData *v5; // r7@3
  MobSpawnerData *v6; // r5@3
  MobSpawnerData *v7; // r0@4
  __int64 v8; // kr00_8@6
  MobSpawnerData *v9; // r0@7
  __int64 v10; // kr08_8@9
  MobSpawnerData *v11; // r0@10
  __int64 v12; // kr10_8@12
  MobSpawnerData *v13; // r0@13
  __int64 v14; // r2@15
  MobSpawnerData *v15; // r7@15
  int v16; // r0@19
  char v18; // [sp+14h] [bp-B4h]@15
  void (*v19)(void); // [sp+1Ch] [bp-ACh]@15
  char v20; // [sp+24h] [bp-A4h]@15
  void (*v21)(void); // [sp+2Ch] [bp-9Ch]@15
  char v22; // [sp+34h] [bp-94h]@15
  _DWORD *v23; // [sp+ACh] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = operator new(0x100u);
  _aeabi_memclr4(v4, 256);
  BiomeDecorator::BiomeDecorator(v4);
  v23 = v4;
  *v4 = &loc_2704474;
  Biome::Biome(v2, v3, 17, (int *)&v23);
  if ( v23 )
    (*(void (**)(void))(*v23 + 12))();
  v23 = 0;
  *(_DWORD *)v2 = &loc_2704400;
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)(v2 + 280));
  v5 = *(MobSpawnerData **)(v2 + 128);
  v6 = *(MobSpawnerData **)(v2 + 132);
  if ( v6 != v5 )
  {
    v7 = *(MobSpawnerData **)(v2 + 128);
    do
      v7 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v7) + 120);
    while ( v6 != v7 );
  }
  *(_DWORD *)(v2 + 132) = v5;
  v8 = *(_QWORD *)(v2 + 140);
  if ( HIDWORD(v8) != (_DWORD)v8 )
    v9 = (MobSpawnerData *)v8;
      v9 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v9) + 120);
    while ( (MobSpawnerData *)HIDWORD(v8) != v9 );
  *(_DWORD *)(v2 + 144) = v8;
  v10 = *(_QWORD *)(v2 + 152);
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = (MobSpawnerData *)v10;
      v11 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v11) + 120);
    while ( (MobSpawnerData *)HIDWORD(v10) != v11 );
  *(_DWORD *)(v2 + 156) = v10;
  v12 = *(_QWORD *)(v2 + 164);
  if ( HIDWORD(v12) != (_DWORD)v12 )
    v13 = (MobSpawnerData *)v12;
      v13 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v13) + 120);
    while ( (MobSpawnerData *)HIDWORD(v12) != v13 );
  *(_DWORD *)(v2 + 168) = v12;
  MobSpawnRules::setSurfaceSpawner((MobSpawnRules *)(v2 + 280));
  LODWORD(v14) = 3;
  MobSpawnRules::setDifficultyRange(v2 + 280, 1, v14);
  v15 = *(MobSpawnerData **)(v2 + 132);
  v21 = 0;
  v19 = 0;
  MobSpawnerData::MobSpawnerData(&v22, 2854, 10, 4, 4, v2 + 280, (int)&v20, (int)&v18);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 128, v15, &v22);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v22);
  if ( v19 )
    v19();
  if ( v21 )
    v21();
  v16 = Block::mDirt;
  *(_BYTE *)(v2 + 188) = *(_BYTE *)(Block::mDirt + 4);
  *(_BYTE *)(v2 + 190) = *(_BYTE *)(v16 + 4);
  return v2;
}


void __fastcall TheEndBiome::~TheEndBiome(TheEndBiome *this)
{
  TheEndBiome::~TheEndBiome(this);
}
