

int __fastcall JungleBiome::getGrassFeature(JungleBiome *this, Random *a2)
{
  JungleBiome *v2; // r4@1
  char v3; // r0@1
  int v4; // r2@1
  int v5; // r1@1

  v2 = this;
  v3 = Random::_genRandInt32(a2);
  v4 = *((_DWORD *)v2 + 31);
  v5 = v4 + 144;
  if ( !(v3 & 3) )
    v5 = v4 + 148;
  return v5;
}


void __fastcall JungleBiome::~JungleBiome(JungleBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall JungleBiome::JungleBiome(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v9; // r1@5
  int v10; // r6@6
  int v11; // r5@6
  char v13; // [sp+14h] [bp-1DCh]@16
  void (*v14)(void); // [sp+1Ch] [bp-1D4h]@16
  char v15; // [sp+24h] [bp-1CCh]@16
  void (*v16)(void); // [sp+2Ch] [bp-1C4h]@16
  char v17; // [sp+34h] [bp-1BCh]@16
  char v18; // [sp+ACh] [bp-144h]@12
  void (*v19)(void); // [sp+B4h] [bp-13Ch]@12
  char v20; // [sp+BCh] [bp-134h]@12
  void (*v21)(void); // [sp+C4h] [bp-12Ch]@12
  char v22; // [sp+CCh] [bp-124h]@12
  char v23; // [sp+144h] [bp-ACh]@6
  void (*v24)(void); // [sp+14Ch] [bp-A4h]@6
  char v25; // [sp+154h] [bp-9Ch]@6
  void (*v26)(void); // [sp+15Ch] [bp-94h]@6
  char v27; // [sp+164h] [bp-8Ch]@6
  int v28; // [sp+1DCh] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v28 = 0;
  Biome::Biome(a1, a2, 7, &v28);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 12))();
  __asm
  {
    VMOV.F32        S2, #2.0
    VMOV.F32        S0, #25.0
  }
  if ( v4 )
    __asm { VMOVNE.F32      S0, S2 }
  *(_DWORD *)v3 = &off_2703F60;
  *(_BYTE *)(v3 + 280) = v4;
  v9 = *(_DWORD *)(v3 + 124);
  __asm { VSTR            S0, [R1,#0xD0] }
  *(_DWORD *)(v9 + 212) = 4;
  *(_DWORD *)(v9 + 216) = 25;
  if ( _ZF )
    v10 = v3 + 4;
    v11 = v3 + 140;
  else
    v26 = 0;
    v24 = 0;
    MobSpawnerData::MobSpawnerData(&v27, 21270, 2, 1, 1, v3 + 4, (int)&v25, (int)&v23);
    std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::push_back(v3 + 140, &v27);
    MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v27);
    if ( v24 )
      v24();
    if ( v26 )
      v26();
  v21 = 0;
  v19 = 0;
  MobSpawnerData::MobSpawnerData(&v22, 21278, 40, 1, 2, v10, (int)&v20, (int)&v18);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::push_back(v11, &v22);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v22);
  if ( v19 )
    v19();
  if ( v21 )
    v21();
  v16 = 0;
  v14 = 0;
  MobSpawnerData::MobSpawnerData(&v17, 4874, 10, 4, 4, v10, (int)&v15, (int)&v13);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::push_back(v11, &v17);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v17);
  if ( v14 )
    v14();
  if ( v16 )
    v16();
  return v3;
}


int __fastcall JungleBiome::decorate(JungleBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  JungleBiome *v10; // r9@1
  const BlockPos *v11; // r4@1
  Random *v12; // r5@1
  BlockSource *v13; // r10@1
  char v14; // r8@1
  char v15; // r0@1
  __int64 v16; // r1@1
  int v17; // r3@1
  int v18; // r8@1
  unsigned int v19; // r1@2
  signed int v20; // r6@4
  char v21; // r7@5
  char v22; // r0@5
  int v23; // r2@5
  int v24; // r0@5
  int result; // r0@5
  float v26; // [sp+4h] [bp-34h]@0
  __int64 v27; // [sp+Ch] [bp-2Ch]@1
  int v28; // [sp+14h] [bp-24h]@1

  __asm { VLDR            S0, [SP,#0x38+arg_4] }
  v10 = this;
  v11 = a4;
  __asm { VSTR            S0, [SP,#0x38+var_34] }
  v12 = a3;
  v13 = a2;
  Biome::decorate(this, a2, a3, a4, a5, v26);
  v14 = Random::_genRandInt32(v12);
  v15 = Random::_genRandInt32(v12);
  HIDWORD(v16) = *((_DWORD *)v11 + 1);
  v17 = *((_DWORD *)v11 + 2);
  LODWORD(v16) = *(_DWORD *)v11 + (v14 & 0xF);
  v27 = v16;
  v28 = v17 + (v15 & 0xF);
  v18 = BlockSource::getHeightmap(v13, v16, v28);
  if ( (_WORD)v18 )
    v19 = Random::_genRandInt32(v12) % (2 * v18);
  else
    v19 = 0;
  HIDWORD(v27) = v19;
  (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v10 + 31) + 184) + 8))();
  v20 = 50;
  do
  {
    v21 = Random::_genRandInt32(v12);
    v22 = Random::_genRandInt32(v12);
    v23 = *((_DWORD *)v11 + 1);
    v24 = (v22 & 0xF) + *((_DWORD *)v11 + 2);
    LODWORD(v27) = *(_DWORD *)v11 + (v21 & 0xF) + 8;
    HIDWORD(v27) = v23 + 64;
    v28 = v24 + 8;
    result = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v10 + 31) + 188) + 8))();
    --v20;
  }
  while ( v20 );
  return result;
}


void __fastcall JungleBiome::~JungleBiome(JungleBiome *this)
{
  JungleBiome::~JungleBiome(this);
}


int __fastcall JungleBiome::getTreeFeature(JungleBiome *this, Random *a2)
{
  Random *v2; // r5@1
  JungleBiome *v3; // r4@1
  int result; // r0@3

  v2 = a2;
  v3 = this;
  if ( Random::_genRandInt32(a2) % 0xA )
  {
    if ( Random::_genRandInt32(v2) & 1 )
    {
      if ( *((_BYTE *)v3 + 280) || Random::_genRandInt32(v2) % 0xA )
        result = *((_DWORD *)v3 + 31) + 176;
      else
        result = *((_DWORD *)v3 + 31) + 180;
    }
    else
      result = *((_DWORD *)v3 + 31) + 172;
  }
  else
    result = *((_DWORD *)v3 + 31) + 152;
  return result;
}
