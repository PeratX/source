

void __fastcall FossilFeature::~FossilFeature(FossilFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall FossilFeature::place(FossilFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r8@1
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r4@1
  char v7; // r10@1
  char v8; // r5@1
  Level *v9; // r0@1
  pthread_mutex_t *v10; // r7@1
  _DWORD *v11; // r5@1
  LevelChunk *v12; // r7@1
  char *v13; // r5@1
  char *v14; // r0@1
  unsigned int v15; // r11@1
  unsigned int v16; // r7@2
  unsigned int v17; // r7@4
  int v18; // r0@6
  int v19; // r1@6
  int v20; // r5@6
  int v21; // r0@7
  int v22; // r9@7
  int v23; // r10@9
  int v24; // r0@10
  unsigned int v25; // r0@15
  int v26; // r3@15
  int v27; // r7@15
  signed int v28; // r0@15
  float v29; // r1@15
  unsigned int v31; // [sp+Ch] [bp-A4h]@4
  StructureTemplate *v32; // [sp+10h] [bp-A0h]@1
  StructureTemplate *v33; // [sp+14h] [bp-9Ch]@1
  unsigned int v34; // [sp+18h] [bp-98h]@15
  int v35; // [sp+1Ch] [bp-94h]@17
  unsigned int v36; // [sp+20h] [bp-90h]@17
  int v37; // [sp+24h] [bp-8Ch]@1
  int v38; // [sp+2Ch] [bp-84h]@3
  char v39; // [sp+30h] [bp-80h]@1
  int v40; // [sp+68h] [bp-48h]@1
  int v41; // [sp+6Ch] [bp-44h]@1
  int v42; // [sp+70h] [bp-40h]@1
  int v43; // [sp+74h] [bp-3Ch]@1
  int v44; // [sp+78h] [bp-38h]@1
  int v45; // [sp+7Ch] [bp-34h]@1
  char v46; // [sp+80h] [bp-30h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = Random::_genRandInt32(a4);
  v8 = Random::_genRandInt32(v4);
  v9 = (Level *)BlockSource::getLevel(v6);
  v10 = (pthread_mutex_t *)Level::getStructureManager(v9);
  v11 = &FossilFeature::STRUCTURE_LOCATION_FOSSIL[v8 & 7];
  v32 = (StructureTemplate *)StructureManager::getOrCreate(v10, (int **)v11);
  v33 = (StructureTemplate *)StructureManager::getOrCreate(v10, (int **)v11 + 8);
  ChunkPos::ChunkPos((ChunkPos *)&v46, v5);
  v12 = (LevelChunk *)BlockSource::getChunk(v6, (const ChunkPos *)&v46);
  v13 = LevelChunk::getMin(v12);
  v14 = LevelChunk::getMax(v12);
  v40 = *(_DWORD *)v13;
  v15 = 0;
  v41 = *((_DWORD *)v13 + 1);
  v42 = *((_DWORD *)v13 + 2);
  v43 = *(_DWORD *)v14;
  v44 = *((_DWORD *)v14 + 1);
  v45 = *((_DWORD *)v14 + 2);
  StructureSettings::StructureSettings((int)&v39, 0, v7 & 3, 0, Block::mAir, (int)&v40);
  StructureTemplate::getSize((StructureTemplate *)&v37, (int)v32, v7 & 3);
  if ( 16 != v37 )
  {
    v16 = 16 - v37;
    v15 = Random::_genRandInt32(v4) % v16;
  }
  if ( 16 == v38 )
    v31 = 0;
  else
    v17 = 16 - v38;
    v31 = Random::_genRandInt32(v4) % v17;
  v18 = BlockSource::getDimension(v6);
  v19 = v37;
  v20 = *(_WORD *)(v18 + 120);
  if ( v37 >= 1 )
    v21 = v38;
    v22 = 0;
    do
    {
      if ( v21 > 0 )
      {
        v23 = 0;
        do
        {
          v24 = BlockSource::getAboveTopSolidBlock(v6, *(_DWORD *)v5 + v22, *((_DWORD *)v5 + 2) + v23++, 0, 0);
          if ( v24 <= v20 )
            v20 = v24;
          v21 = v38;
        }
        while ( v23 < v38 );
        v19 = v37;
      }
      ++v22;
    }
    while ( v22 < v19 );
  v25 = Random::_genRandInt32(v4);
  v26 = *((_DWORD *)v5 + 1);
  v27 = *((_DWORD *)v5 + 2);
  v34 = *(_DWORD *)v5 + v15;
  v28 = v20 - 15 - v25 % 0xA;
  LOWORD(v29) = 26214;
  if ( v28 <= 10 )
    v28 = 10;
  HIWORD(v29) = 16230;
  v35 = v28 + v26;
  v36 = v31 + v27;
  StructureSettings::setIntegrity((StructureSettings *)&v39, v29);
  StructureTemplate::placeInWorldChunk(v32, v6, (const BlockPos *)&v34, (StructureSettings *)&v39);
  StructureSettings::setIntegrity((StructureSettings *)&v39, 0.1);
  StructureTemplate::placeInWorldChunk(v33, v6, (const BlockPos *)&v34, (StructureSettings *)&v39);
  return 1;
}


void __fastcall FossilFeature::~FossilFeature(FossilFeature *this)
{
  FossilFeature::~FossilFeature(this);
}
