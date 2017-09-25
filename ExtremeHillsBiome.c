

int __fastcall ExtremeHillsBiome::ExtremeHillsBiome(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  MobSpawnerData *v5; // r6@3
  int v6; // r7@7
  Feature *v7; // r6@7
  int v8; // r0@7
  signed int v9; // r2@10
  char v11; // [sp+14h] [bp-B4h]@3
  void (*v12)(void); // [sp+1Ch] [bp-ACh]@3
  char v13; // [sp+24h] [bp-A4h]@3
  void (*v14)(void); // [sp+2Ch] [bp-9Ch]@3
  char v15; // [sp+34h] [bp-94h]@3
  int v16; // [sp+ACh] [bp-1Ch]@1
  char v17; // [sp+B0h] [bp-18h]@7

  v3 = a1;
  v4 = a3;
  v16 = 0;
  Biome::Biome(a1, a2, 2, &v16);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  *(_DWORD *)v3 = &off_2703D90;
  *(_DWORD *)(v3 + 284) = 0;
  v5 = *(MobSpawnerData **)(v3 + 144);
  v14 = 0;
  v12 = 0;
  MobSpawnerData::MobSpawnerData(&v15, 4893, 5, 4, 6, v3 + 4, (int)&v13, (int)&v11);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v3 + 140, v5, &v15);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v15);
  if ( v12 )
    v12();
  if ( v14 )
    v14();
  v6 = Block::mMonsterStoneEgg;
  v7 = (Feature *)operator new(0x1Cu);
  v17 = *(_BYTE *)(v6 + 4);
  OreFeature::OreFeature(v7, &v17, 8);
  v8 = *(_DWORD *)(v3 + 284);
  *(_DWORD *)(v3 + 284) = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  if ( v4 == 1 )
  {
    v9 = 1;
    *(_DWORD *)(*(_DWORD *)(v3 + 124) + 208) = 1077936128;
  }
  else
    v9 = 0;
  *(_DWORD *)(v3 + 280) = v9;
  return v3;
}


Biome *__fastcall ExtremeHillsBiome::createMutatedCopy(ExtremeHillsBiome *this, int a2, int a3)
{
  ExtremeHillsBiome *v3; // r5@1
  int v4; // r7@1
  Biome *v5; // r6@1
  ExtremeHillsBiome *v6; // r4@1
  Biome *result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = (Biome *)a2;
  v6 = (ExtremeHillsBiome *)operator new(0x120u);
  ExtremeHillsBiome::ExtremeHillsBiome((int)v6, v4, 0);
  result = ExtremeHillsBiome::setMutated(v6, v5);
  *(_DWORD *)v3 = v6;
  return result;
}


Biome *__fastcall ExtremeHillsBiome::~ExtremeHillsBiome(ExtremeHillsBiome *this)
{
  ExtremeHillsBiome *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2703D90;
  v2 = *((_DWORD *)this + 71);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 71) = 0;
  return j_j_j__ZN5BiomeD2Ev_0(v1);
}


int __fastcall ExtremeHillsBiome::getTreeFeature(ExtremeHillsBiome *this, Random *a2)
{
  Random *v2; // r4@1
  ExtremeHillsBiome *v3; // r5@1
  int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( Random::_genRandInt32(a2) % 3 )
    result = *((_DWORD *)v3 + 31) + 116;
  else
    result = j_j_j__ZN5Biome14getTreeFeatureEP6Random(v3, v2);
  return result;
}


void __fastcall ExtremeHillsBiome::~ExtremeHillsBiome(ExtremeHillsBiome *this)
{
  ExtremeHillsBiome *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2703D90;
  v2 = *((_DWORD *)this + 71);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 71) = 0;
  Biome::~Biome(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


Random *__fastcall ExtremeHillsBiome::buildSurfaceAt(float a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // lr@4
  float v12; // [sp+0h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [SP,#0x10+arg_0]
    VLDR            S2, =-0.1
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  *(_BYTE *)(LODWORD(a1) + 188) = *(_BYTE *)(Block::mGrass + 4);
  *(_BYTE *)(LODWORD(a1) + 189) = 0;
  *(_BYTE *)(LODWORD(a1) + 190) = *(_BYTE *)(Block::mDirt + 4);
  if ( _NF ^ _VF )
    goto LABEL_12;
    VLDR            S2, =0.2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_12:
    if ( *(_DWORD *)(LODWORD(a1) + 280) == 2 )
    {
      v10 = Block::mGravel;
LABEL_8:
      *(_BYTE *)(LODWORD(a1) + 188) = *(_BYTE *)(v10 + 4);
      *(_BYTE *)(LODWORD(a1) + 190) = *(_BYTE *)(v10 + 4);
      goto LABEL_9;
    }
    VMOV.F32        S2, #1.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && *(_DWORD *)(LODWORD(a1) + 280) != 1 )
    v10 = Block::mStone;
    goto LABEL_8;
LABEL_9:
  __asm { VSTR            S0, [SP,#0x10+var_10] }
  return Biome::buildSurfaceAtDefault(SLODWORD(a1), (Random *)a2, a3, a4, v12, a6);
}


int __fastcall ExtremeHillsBiome::decorate(ExtremeHillsBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  BlockSource *v10; // r9@1
  const BlockPos *v11; // r11@1
  Random *v12; // r8@1
  unsigned int v13; // r6@1
  char v14; // r7@2
  unsigned int v15; // r10@2
  char v16; // r0@2
  int v17; // r2@2
  int v18; // r3@2
  signed int v19; // r4@5
  char v20; // r7@6
  char v21; // r6@6
  char v22; // r0@6
  int v23; // r1@6
  int (__fastcall *v24)(int, BlockSource *, int *, Random *); // r12@6
  int v25; // r3@6
  int v26; // r5@6
  int result; // r0@6
  float v28; // [sp+4h] [bp-54h]@0
  ExtremeHillsBiome *v29; // [sp+Ch] [bp-4Ch]@1
  int v30; // [sp+14h] [bp-44h]@6
  int v31; // [sp+18h] [bp-40h]@6
  int v32; // [sp+1Ch] [bp-3Ch]@6
  char v33; // [sp+20h] [bp-38h]@3
  char v34; // [sp+21h] [bp-37h]@3
  unsigned __int8 v35; // [sp+24h] [bp-34h]@2
  int v36; // [sp+28h] [bp-30h]@2
  unsigned int v37; // [sp+2Ch] [bp-2Ch]@2
  int v38; // [sp+30h] [bp-28h]@2

  __asm { VLDR            S0, [SP,#0x58+arg_4] }
  v10 = a2;
  v11 = a4;
  __asm { VSTR            S0, [SP,#0x58+var_54] }
  v12 = a3;
  v29 = this;
  Biome::decorate(this, a2, a3, a4, a5, v28);
  v13 = Random::_genRandInt32(v12) % 6 + 3;
  do
  {
    v14 = Random::_genRandInt32(v12);
    v15 = Random::_genRandInt32(v12);
    v16 = Random::_genRandInt32(v12);
    v17 = *((_DWORD *)v11 + 1);
    v18 = *((_DWORD *)v11 + 2);
    v36 = *(_DWORD *)v11 + (v14 & 0xF);
    v37 = v15 % 0x1C + v17 + 4;
    v38 = (v16 & 0xF) + v18;
    BlockSource::getBlockID((BlockSource *)&v35, v10, (int)&v36);
    if ( v35 == *(_BYTE *)(Block::mStone + 4) )
    {
      v33 = *(_BYTE *)(Block::mEmeraldOre + 4);
      v34 = 0;
      BlockSource::setBlockAndData((int)v10, (BlockPos *)&v36, (int)&v33, 2, 0);
    }
    --v13;
  }
  while ( v13 );
  v19 = 7;
    v20 = Random::_genRandInt32(v12);
    v21 = Random::_genRandInt32(v12);
    v22 = Random::_genRandInt32(v12);
    v23 = *((_DWORD *)v29 + 71);
    v24 = *(int (__fastcall **)(int, BlockSource *, int *, Random *))(*(_DWORD *)v23 + 8);
    v25 = *((_DWORD *)v11 + 1);
    v26 = *((_DWORD *)v11 + 2);
    v30 = *(_DWORD *)v11 + (v20 & 0xF);
    v31 = (v21 & 0x1F) + v25;
    v32 = (v22 & 0xF) + v26;
    result = v24(v23, v10, &v30, v12);
    --v19;
  while ( v19 );
  return result;
}


void __fastcall ExtremeHillsBiome::~ExtremeHillsBiome(ExtremeHillsBiome *this)
{
  ExtremeHillsBiome::~ExtremeHillsBiome(this);
}


Biome *__fastcall ExtremeHillsBiome::setMutated(ExtremeHillsBiome *this, Biome *a2)
{
  Biome *v2; // r4@1
  Biome *v3; // r5@1
  int v4; // r1@1
  int *v5; // r0@1
  void *v6; // r0@1
  __int64 v7; // r1@2 OVERLAPPED
  unsigned int *v9; // r12@3
  signed int v10; // r1@5
  __int64 v11; // [sp+0h] [bp-28h]@2
  int v12; // [sp+8h] [bp-20h]@1

  v2 = this;
  *((_DWORD *)this + 70) = 2;
  v3 = a2;
  v4 = *((_DWORD *)a2 + 45);
  (*(void (**)(void))(*(_DWORD *)this + 4))();
  v5 = sub_21E8AF4(&v12, (int *)v3 + 44);
  sub_21E7408((const void **)v5, " M", 2u);
  Biome::setName((int)v2, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v11 = *(_QWORD *)((char *)v3 + 220);
  Biome::setDepthAndScale((int)v2, (int)&v11);
  v7 = *(_QWORD *)((char *)v3 + 196);
  Biome::setTemperatureAndDownfall(v2, COERCE_FLOAT(*(_QWORD *)((char *)v3 + 196)), *(__int64 *)((char *)&v7 + 4));
  return v2;
}
