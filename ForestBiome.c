

void __fastcall ForestBiome::~ForestBiome(ForestBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ForestBiome::~ForestBiome(ForestBiome *this)
{
  ForestBiome::~ForestBiome(this);
}


void *__fastcall ForestBiome::createMutatedCopy(ForestBiome *this, int a2, int a3)
{
  ForestBiome *v3; // r8@1
  int v5; // r7@1
  int v6; // r0@1
  void *v7; // r9@2
  void *v12; // r0@2
  MobSpawnerData *v13; // r5@3
  MobSpawnerData *v14; // r4@3
  MobSpawnerData *v15; // r0@4
  void *result; // r0@6
  MutatedBiome *v17; // r4@13
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  char v20; // [sp+10h] [bp-C8h]@6
  int (*v21)(void); // [sp+18h] [bp-C0h]@6
  char v22; // [sp+20h] [bp-B8h]@6
  int (*v23)(void); // [sp+28h] [bp-B0h]@6
  char v24; // [sp+30h] [bp-A8h]@6
  int v25; // [sp+ACh] [bp-2Ch]@2
  int v26; // [sp+B0h] [bp-28h]@2

  v3 = this;
  _R6 = a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 268);
  if ( v6 == *(_DWORD *)(Biome::forest + 268) )
  {
    v7 = operator new(0x11Cu);
    ForestBiome::ForestBiome((int)v7, v5, 1);
    __asm
    {
      VLDR            S0, =0.2
      VLDR            S2, [R6,#0xE0]
      VADD.F32        S0, S2, S0
    }
    v26 = *(_DWORD *)(_R6 + 220);
    __asm { VSTR            S0, [SP,#0xD8+var_24] }
    Biome::setDepthAndScale((int)v7, (int)&v26);
    sub_21E94B4((void **)&v25, "Flower Forest");
    Biome::setName((int)v7, &v25);
    v12 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    (*(void (__fastcall **)(void *))(*(_DWORD *)v7 + 4))(v7);
    Biome::setLeafColor((Biome *)v7, 8233509);
    v13 = (MobSpawnerData *)*((_DWORD *)v7 + 35);
    v14 = (MobSpawnerData *)*((_DWORD *)v7 + 36);
    if ( v14 != v13 )
      v15 = (MobSpawnerData *)*((_DWORD *)v7 + 35);
      do
        v15 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v15) + 120);
      while ( v14 != v15 );
    *((_DWORD *)v7 + 36) = v13;
    v23 = 0;
    v21 = 0;
    MobSpawnerData::MobSpawnerData(&v24, 4882, 20, 2, 4, _R6 + 4, (int)&v22, (int)&v20);
    std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>((int)v7 + 140, v13, &v24);
    result = (void *)MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v24);
    if ( v21 )
      result = (void *)v21();
    if ( v23 )
      result = (void *)v23();
    *(_DWORD *)v3 = v7;
  }
  else
    if ( v6 != *(_DWORD *)(Biome::birchForest + 268) && v6 != *(_DWORD *)(Biome::birchForestHills + 268) )
      v17 = (MutatedBiome *)operator new(0x11Cu);
      result = (void *)MutatedBiome::MutatedBiome(v17, v5, (Biome *)_R6);
    else
      result = MutatedBirchForest::MutatedBirchForest(v17, v5, (Biome *)_R6);
    *(_DWORD *)v3 = v17;
  return result;
}


int __fastcall ForestBiome::decorate(ForestBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, int a5, float a6)
{
  const BlockPos *v6; // r9@1
  Random *v7; // r5@1
  BlockSource *v8; // r11@1
  int v9; // r1@2
  signed int v10; // r10@3
  signed int v11; // r8@3
  unsigned int v12; // kr08_4@4
  unsigned int v13; // r0@4
  int v14; // r3@4
  int v15; // r4@4
  int v16; // r0@5
  unsigned int v17; // kr0C_4@9
  unsigned int v18; // r0@9
  int v19; // r3@9
  int v20; // r6@9
  int v21; // r0@10
  unsigned int v26; // r0@14
  signed int v27; // r3@14
  int v28; // r1@17
  int v29; // r4@18
  signed int v30; // r10@18
  unsigned int v31; // r0@18
  char v32; // r7@22
  char v33; // r0@22
  int v34; // r8@22
  int v35; // r0@22
  unsigned int v36; // r1@23
  int v37; // r3@25
  DoublePlantFeature *v38; // r0@25
  int v40; // [sp+4h] [bp-7Ch]@0
  int v41; // [sp+14h] [bp-6Ch]@3
  signed int v42; // [sp+18h] [bp-68h]@16
  int v43; // [sp+1Ch] [bp-64h]@3
  int v44; // [sp+1Ch] [bp-64h]@18
  ForestBiome *v45; // [sp+20h] [bp-60h]@1
  int v46; // [sp+24h] [bp-5Ch]@25
  unsigned int v47; // [sp+28h] [bp-58h]@25
  int v48; // [sp+2Ch] [bp-54h]@25
  char v49; // [sp+30h] [bp-50h]@10
  char v50; // [sp+34h] [bp-4Ch]@10
  int v51; // [sp+44h] [bp-3Ch]@4
  int v52; // [sp+48h] [bp-38h]@4
  int v53; // [sp+4Ch] [bp-34h]@4

  v45 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_DWORD *)this + 70) == 3 )
  {
    v9 = 0;
    do
    {
      v10 = 1;
      v43 = 4 * v9 | 1;
      v11 = 1;
      v41 = v9;
      if ( a5 == 1 )
      {
        do
        {
          v12 = Random::_genRandInt32(v7);
          v13 = Random::_genRandInt32(v7);
          v14 = *((_DWORD *)v6 + 1);
          v15 = *((_DWORD *)v6 + 2);
          v51 = *(_DWORD *)v6 + v12 % 3 + v43;
          v52 = v14;
          v53 = v10 + v13 % 3 + v15;
          v52 = BlockSource::getHeightmap(v8, v51, v53);
          if ( Random::_genRandInt32(v7) % 0x14 )
            v16 = *(_DWORD *)(*(int (**)(void))(*(_DWORD *)v45 + 16))();
          else
            v16 = *(_DWORD *)(*((_DWORD *)v45 + 31) + 72);
          (*(void (**)(void))(*(_DWORD *)v16 + 8))();
          v10 += 4;
        }
        while ( v10 != 17 );
      }
      else
          v17 = Random::_genRandInt32(v7);
          v18 = Random::_genRandInt32(v7);
          v19 = *((_DWORD *)v6 + 1);
          v20 = *((_DWORD *)v6 + 2);
          v51 = *(_DWORD *)v6 + v17 % 3 + v43;
          v52 = v19;
          v53 = v11 + v18 % 3 + v20;
          {
            v21 = (*(int (**)(void))(*(_DWORD *)v45 + 16))();
            (*(void (**)(void))(**(_DWORD **)v21 + 8))();
            v49 = *(_BYTE *)(Block::mTallgrass + 4);
            TallGrassFeature::TallGrassFeature((Feature *)&v50, &v49, 1);
            TallGrassFeature::place((TallGrassFeature *)&v50, v8, (const BlockPos *)&v51, v7, 12884901908LL);
            Feature::~Feature((Feature *)&v50);
          }
            (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v45 + 31) + 72) + 8))();
          v11 += 4;
        while ( v11 != 17 );
      v9 = v41 + 1;
    }
    while ( v41 != 3 );
  }
  __asm { VLDR            S16, [SP,#0x80+arg_4] }
  v26 = Random::_genRandInt32(v7);
  v27 = -3;
  if ( *((_DWORD *)v45 + 70) == 1 )
    v27 = -1;
  v42 = v26 % 5 + v27;
  if ( v42 >= 1 )
    v28 = 0;
      v44 = v28;
      v29 = 5;
      v30 = 4;
      v31 = Random::_genRandInt32(v7) % 3;
      if ( v31 == 1 )
        v29 = 4;
      if ( !v31 )
        v29 = 1;
      do
        v32 = Random::_genRandInt32(v7);
        v33 = Random::_genRandInt32(v7);
        v34 = v33 & 0xF;
        v35 = BlockSource::getHeightmap(v8, *(_DWORD *)v6 + (v32 & 0xF), *((_DWORD *)v6 + 2) + v34);
        if ( v35 == -32 )
          v36 = 0;
        else
          v36 = Random::_genRandInt32(v7) % (v35 + 32);
        v37 = *((_DWORD *)v6 + 2);
        v38 = *(DoublePlantFeature **)(*((_DWORD *)v45 + 31) + 128);
        v46 = *(_DWORD *)v6 + (v32 & 0xF);
        v47 = v36;
        v48 = v37 + v34;
        if ( DoublePlantFeature::place(v38, v8, (const BlockPos *)&v46, v7, v29) )
          break;
      while ( v30-- != 0 );
      v28 = v44 + 1;
    while ( v44 + 1 != v42 );
  __asm { VSTR            S16, [SP,#0x80+var_7C] }
  return Biome::decorate(v45, v8, v7, v6, a5, *(float *)&v40);
}


int __fastcall ForestBiome::getRandomFlowerTypeAndData(ForestBiome *this, Random *a2, const BlockPos *a3, int _R3)
{
  ForestBiome *v4; // r4@1
  int v13; // r0@8
  int result; // r0@8

  v4 = this;
  if ( *((_DWORD *)a2 + 70) == 1 )
  {
    __asm { VLDR            S4, =0.020833 }
    *(_WORD *)this = 0;
    __asm
    {
      VLDR            S0, [R3]
      VLDR            S2, [R3,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VMOV            R3, S0
      VMOV            R2, S2
    }
    _R0 = PerlinSimplexNoise::getValue(*((PerlinSimplexNoise **)a2 + 68), _R3, _R2);
      VMOV.F32        S0, #1.0
      VMOV            S2, R0
      VMOV.F32        S4, #0.5
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.0
      VMOV.F32        S4, #9.0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
      VLDR            S4, =0.9999
      VCMPE.F32       S0, S4
      VCVTR.S32.F32   S2, S2
      VMOV            R1, S2
      LOBYTE(_R1) = 8;
    if ( (unsigned __int8)_R1 == 1 )
      LOBYTE(_R1) = 0;
    v13 = Block::mRedFlower;
    *((_BYTE *)v4 + 1) = _R1;
    result = *(_BYTE *)(v13 + 4);
    *(_BYTE *)v4 = result;
  }
  else
    result = Biome::getRandomFlowerTypeAndData(this, a2, a3);
  return result;
}


int __fastcall ForestBiome::ForestBiome(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@3
  int v6; // r0@4
  __int64 v7; // r2@5
  __int64 v8; // r2@5
  int v9; // r0@5
  MobSpawnerData *v10; // r5@8
  char v12; // [sp+14h] [bp-ACh]@8
  void (*v13)(void); // [sp+1Ch] [bp-A4h]@8
  char v14; // [sp+24h] [bp-9Ch]@8
  void (*v15)(void); // [sp+2Ch] [bp-94h]@8
  char v16; // [sp+34h] [bp-8Ch]@8
  int v17; // [sp+ACh] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v17 = 0;
  Biome::Biome(a1, a2, 4, &v17);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  *(_DWORD *)v3 = &off_2703E04;
  *(_DWORD *)(v3 + 280) = v4;
  v5 = *(_DWORD *)(v3 + 124);
  *(_DWORD *)(v5 + 208) = 1092616192;
  *(_DWORD *)(v5 + 216) = 0;
  if ( v4 == 1 )
  {
    v6 = v5 + 208;
    *(_DWORD *)v6 = 1065353216;
    *(_DWORD *)(v6 + 4) = 100;
    *(_DWORD *)(v6 + 8) = 1;
  }
  Biome::setLeafColor((Biome *)v3, 5159473);
  LODWORD(v7) = 1061997773;
  Biome::setTemperatureAndDownfall((Biome *)v3, 0.7, v7);
  v9 = *(_DWORD *)(v3 + 280);
  if ( v9 == 2 )
    *(_DWORD *)(v3 + 180) = 3175492;
    *(_DWORD *)(v3 + 184) = 353825;
    LODWORD(v8) = 1058642330;
    Biome::setTemperatureAndDownfall((Biome *)v3, 0.6, v8);
    v9 = *(_DWORD *)(v3 + 280);
  if ( !v9 )
    v10 = *(MobSpawnerData **)(v3 + 144);
    v15 = 0;
    v13 = 0;
    MobSpawnerData::MobSpawnerData(&v16, 4877, 5, 4, 4, v3 + 4, (int)&v14, (int)&v12);
    std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v3 + 140, v10, &v16);
    MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v16);
    if ( v13 )
      v13();
    if ( v15 )
      v15();
  if ( *(_DWORD *)(v3 + 280) == 3 )
    *(_DWORD *)(*(_DWORD *)(v3 + 124) + 208) = -998653952;
  return v3;
}


int __fastcall ForestBiome::getTreeFeature(ForestBiome *this, Random *a2)
{
  ForestBiome *v2; // r4@1
  Random *v3; // r5@1
  int v4; // r0@1
  int result; // r0@6

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 70);
  if ( v4 == 3 )
  {
    if ( !(Random::_genRandInt32(a2) % 3) )
      return *((_DWORD *)v2 + 31) + 124;
    v4 = *((_DWORD *)v2 + 70);
  }
  if ( v4 != 2 && Random::_genRandInt32(v3) % 5 )
    result = j_j_j__ZN5Biome14getTreeFeatureEP6Random(v2, v3);
  else
    result = *((_DWORD *)v2 + 31) + 120;
  return result;
}


signed int __fastcall ForestBiome::isHumid(ForestBiome *this)
{
  signed int result; // r0@2

  if ( *((_DWORD *)this + 70) == 3 )
    result = 1;
  else
    result = Biome::isHumid(this);
  return result;
}


int __fastcall ForestBiome::setColor(int result, int a2, int a3)
{
  if ( *(_DWORD *)(result + 280) == 2 )
  {
    *(_DWORD *)(result + 180) = a2;
    *(_DWORD *)(result + 184) = 353825;
    if ( a3 == 1 )
      *(_DWORD *)(result + 184) = 144144;
  }
  else
    result = j_j_j__ZN5Biome8setColorEib((Biome *)result, a2, a3);
  return result;
}
