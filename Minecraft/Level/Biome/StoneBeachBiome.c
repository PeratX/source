

void __fastcall StoneBeachBiome::~StoneBeachBiome(StoneBeachBiome *this)
{
  StoneBeachBiome::~StoneBeachBiome(this);
}


int __fastcall StoneBeachBiome::StoneBeachBiome(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@3
  int v4; // r0@3
  int v5; // r0@3
  int v7; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v7 = 0;
  Biome::Biome(a1, a2, 14, &v7);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  *(_DWORD *)v2 = &loc_27042A4;
  v3 = *(_QWORD *)(v2 + 140);
  std::_Destroy<MobSpawnerData *>(*(_QWORD *)(v2 + 140), SHIDWORD(v3));
  *(_DWORD *)(v2 + 144) = v3;
  v4 = Block::mStone;
  *(_BYTE *)(v2 + 188) = *(_BYTE *)(Block::mStone + 4);
  *(_BYTE *)(v2 + 190) = *(_BYTE *)(v4 + 4);
  v5 = *(_DWORD *)(v2 + 124);
  *(_DWORD *)(v5 + 208) = -998653952;
  *(_DWORD *)(v5 + 220) = 0;
  *(_DWORD *)(v5 + 228) = 0;
  *(_DWORD *)(v5 + 232) = 0;
  return v2;
}


void __fastcall StoneBeachBiome::~StoneBeachBiome(StoneBeachBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}
