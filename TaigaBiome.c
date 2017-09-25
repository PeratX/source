

int __fastcall TaigaBiome::createMutatedCopy(TaigaBiome *this, int a2, int a3)
{
  TaigaBiome *v3; // r5@1
  int v4; // r6@1
  int v5; // r7@1
  Biome *v6; // r4@2
  void *v7; // r0@2
  __int64 v8; // r2@3
  int result; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  __int64 v12; // [sp+4h] [bp-2Ch]@3
  int v13; // [sp+10h] [bp-20h]@2

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( *(_DWORD *)(a2 + 268) == *(_DWORD *)(Biome::redwoodTaiga + 268) )
  {
    v6 = (Biome *)operator new(0x11Cu);
    TaigaBiome::TaigaBiome((int)v6, v5, 2);
    (*(void (__fastcall **)(Biome *))(*(_DWORD *)v6 + 4))(v6);
    sub_21E94B4((void **)&v13, "Mega Spruce Taiga");
    Biome::setName((int)v6, &v13);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    Biome::setLeafColor(v6, 5159473);
    LODWORD(v8) = 1061997773;
    Biome::setTemperatureAndDownfall(v6, 0.25, v8);
    v12 = *(_QWORD *)(v4 + 220);
    result = Biome::setDepthAndScale((int)v6, (int)&v12);
    *(_DWORD *)v3 = v6;
  }
  else
    result = Biome::createMutatedCopy(this, a2, a3);
  return result;
}


int __fastcall TaigaBiome::decorate(TaigaBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  TaigaBiome *v6; // r8@1
  const BlockPos *v11; // r4@1
  Random *v12; // r5@1
  BlockSource *v13; // r6@1
  signed int v14; // r11@2
  signed int v15; // r10@3
  char v16; // r7@4
  char v17; // r0@4
  int v18; // r2@4
  int v19; // r3@4
  int v20; // r9@5
  char v21; // r10@5
  int v22; // r7@5
  float v24; // [sp+4h] [bp-4Ch]@0
  char v25; // [sp+8h] [bp-48h]@5
  int v26; // [sp+14h] [bp-3Ch]@4
  int v27; // [sp+18h] [bp-38h]@4
  int v28; // [sp+1Ch] [bp-34h]@4

  v6 = this;
  __asm { VLDR            S16, [SP,#0x50+arg_4] }
  v11 = a4;
  v12 = a3;
  v13 = a2;
  if ( (unsigned int)(*((_DWORD *)this + 70) - 1) <= 1 )
  {
    v14 = Random::_genRandInt32(a3) % 3;
    if ( v14 )
    {
      v15 = 0;
      do
      {
        v16 = Random::_genRandInt32(v12);
        v17 = Random::_genRandInt32(v12);
        v18 = *((_DWORD *)v11 + 1);
        v19 = *((_DWORD *)v11 + 2);
        v26 = (v17 & 0xF) + *(_DWORD *)v11;
        v27 = v18;
        v28 = (v16 & 0xF) + v19;
        v27 = BlockSource::getHeightmap(v13, (const BlockPos *)&v26);
        (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v6 + 31) + 156) + 8))();
        ++v15;
      }
      while ( v15 < v14 );
    }
  }
  v20 = *(_DWORD *)v11;
  v21 = Random::_genRandInt32(v12);
  v22 = *((_DWORD *)v11 + 2);
  v26 = (Random::_genRandInt32(v12) & 0xF) + v22;
  v27 = 0;
  v28 = (v21 & 0xF) + v20;
  BlockSource::getHeightmapPos((BlockSource *)&v25, v13, (const BlockPos *)&v26);
  DoublePlantFeature::place(*(DoublePlantFeature **)(*((_DWORD *)v6 + 31) + 128), v13, (const BlockPos *)&v25, v12, 3);
  __asm { VSTR            S16, [SP,#0x50+var_4C] }
  return Biome::decorate(v6, v13, v12, v11, a5, v24);
}


void __fastcall TaigaBiome::~TaigaBiome(TaigaBiome *this)
{
  TaigaBiome::~TaigaBiome(this);
}


int __fastcall TaigaBiome::getTreeFeature(TaigaBiome *this, Random *a2)
{
  TaigaBiome *v2; // r4@1
  Random *v3; // r5@1
  unsigned int v4; // r0@3
  int v5; // r1@3
  int result; // r0@4

  v2 = this;
  v3 = a2;
  if ( (unsigned int)(*((_DWORD *)this + 70) - 1) > 1 || Random::_genRandInt32(a2) % 3 )
  {
    v4 = Random::_genRandInt32(v3);
    v5 = *((_DWORD *)v2 + 31);
    if ( v4 % 3 )
      result = v5 + 116;
    else
      result = v5 + 132;
  }
  else if ( *((_DWORD *)v2 + 70) != 2 && Random::_genRandInt32(v3) % 0xD )
    result = *((_DWORD *)v2 + 31) + 136;
  else
    result = *((_DWORD *)v2 + 31) + 140;
  return result;
}


void __fastcall TaigaBiome::~TaigaBiome(TaigaBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall TaigaBiome::TaigaBiome(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  MobSpawnerData *v5; // r7@3
  int v6; // r0@7
  int v7; // r0@8
  MobSpawnerData *v8; // r5@9
  char v10; // [sp+14h] [bp-14Ch]@9
  void (*v11)(void); // [sp+1Ch] [bp-144h]@9
  char v12; // [sp+24h] [bp-13Ch]@9
  void (*v13)(void); // [sp+2Ch] [bp-134h]@9
  char v14; // [sp+34h] [bp-12Ch]@9
  char v15; // [sp+ACh] [bp-B4h]@3
  void (*v16)(void); // [sp+B4h] [bp-ACh]@3
  char v17; // [sp+BCh] [bp-A4h]@3
  void (*v18)(void); // [sp+C4h] [bp-9Ch]@3
  char v19; // [sp+CCh] [bp-94h]@3
  int v20; // [sp+144h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v20 = 0;
  Biome::Biome(a1, a2, 16, &v20);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  *(_DWORD *)v3 = &loc_270438C;
  *(_DWORD *)(v3 + 280) = v4;
  v5 = *(MobSpawnerData **)(v3 + 144);
  v18 = 0;
  v16 = 0;
  MobSpawnerData::MobSpawnerData(&v19, 21262, 8, 4, 4, v3 + 4, (int)&v17, (int)&v15);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v3 + 140, v5, &v19);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v19);
  if ( v16 )
    v16();
  if ( v18 )
    v18();
  v6 = *(_DWORD *)(v3 + 124);
  *(_DWORD *)(v6 + 208) = 1092616192;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    *(_DWORD *)(v6 + 216) = 1;
    *(_DWORD *)(v6 + 224) = 1;
    v8 = *(MobSpawnerData **)(v3 + 144);
    v13 = 0;
    v11 = 0;
    MobSpawnerData::MobSpawnerData(&v14, 4882, 4, 2, 3, v3 + 4, (int)&v12, (int)&v10);
    std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v3 + 140, v8, &v14);
    MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v14);
    if ( v11 )
      v11();
    if ( v13 )
      v13();
  }
  else
    v7 = v6 + 216;
    *(_DWORD *)v7 = 7;
    *(_DWORD *)(v7 + 4) = 1;
    *(_DWORD *)(v7 + 8) = 3;
  return v3;
}


int __fastcall TaigaBiome::getGrassFeature(TaigaBiome *this, Random *a2)
{
  TaigaBiome *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r1@1
  bool v5; // zf@1
  int result; // r0@1

  v2 = this;
  v3 = Random::_genRandInt32(a2);
  v4 = *((_DWORD *)v2 + 31);
  v5 = v3 % 5 == 0;
  result = v4 + 144;
  if ( !v5 )
    result = v4 + 148;
  return result;
}


Random *__fastcall TaigaBiome::buildSurfaceAt(int a1, Random *this, int a3, int a4, float a5, int a6)
{
  int v6; // r7@1
  int v7; // r4@1
  int v12; // r5@1
  Random *v13; // r6@1
  int v14; // r0@2
  BlockState *v15; // r0@3
  int v16; // r9@3
  signed int v17; // r10@3
  unsigned int v18; // r0@3
  float v20; // [sp+0h] [bp-30h]@0

  v6 = a1;
  v7 = a4;
  __asm { VLDR            S16, [SP,#0x30+arg_0] }
  v12 = a3;
  v13 = this;
  if ( (unsigned int)(*(_DWORD *)(a1 + 280) - 1) <= 1 )
  {
    __asm
    {
      VMOV.F32        S0, #1.75
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    }
    *(_BYTE *)(a1 + 188) = *(_BYTE *)(Block::mGrass + 4);
    *(_BYTE *)(a1 + 189) = 0;
    v14 = Block::mDirt;
    *(_BYTE *)(v6 + 190) = *(_BYTE *)(Block::mDirt + 4);
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      *(_BYTE *)(v6 + 188) = *(_BYTE *)(v14 + 4);
      v15 = (BlockState *)Block::getBlockState(v14, 24);
      v16 = *(_BYTE *)(v6 + 189);
      v17 = 1 << (*(_QWORD *)v15 + 1 - (unsigned int)(*(_QWORD *)v15 >> 32));
      v18 = v16 & ~BlockState::getMask(v15) | v17;
LABEL_6:
      *(_BYTE *)(v6 + 189) = v18;
      goto LABEL_7;
      VLDR            D0, =-0.95
      VCVT.F64.F32    D1, S16
      VCMPE.F64       D1, D0
      *(_BYTE *)(v6 + 188) = *(_BYTE *)(Block::mPodzol + 4);
      LOBYTE(v18) = 0;
      goto LABEL_6;
  }
LABEL_7:
  __asm { VSTR            S16, [SP,#0x30+var_30] }
  return Biome::buildSurfaceAtDefault(v6, v13, v12, v7, v20, a6);
}
