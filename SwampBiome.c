

int __fastcall SwampBiome::getRandomFlowerTypeAndData(int result, Random *a2, const BlockPos *a3)
{
  *(_BYTE *)result = *(_BYTE *)(Block::mRedFlower + 4);
  *(_BYTE *)(result + 1) = 1;
  return result;
}


void __fastcall SwampBiome::~SwampBiome(SwampBiome *this)
{
  SwampBiome::~SwampBiome(this);
}


signed int __fastcall SwampBiome::getMapFoliageColor(SwampBiome *this, const BlockPos *a2)
{
  return 6975545;
}


int __fastcall SwampBiome::SwampBiome(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r2@3
  MobSpawnerData *v4; // r5@3
  char v6; // [sp+10h] [bp-B0h]@3
  void (*v7)(void); // [sp+18h] [bp-A8h]@3
  char v8; // [sp+20h] [bp-A0h]@3
  void (*v9)(void); // [sp+28h] [bp-98h]@3
  char v10; // [sp+30h] [bp-90h]@3
  int v11; // [sp+A8h] [bp-18h]@1

  v2 = a1;
  v11 = 0;
  Biome::Biome(a1, a2, 15, &v11);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  *(_DWORD *)v2 = &loc_2704318;
  v3 = *(_DWORD *)(v2 + 124);
  *(_DWORD *)(v3 + 208) = 0x40000000;
  *(_DWORD *)(v3 + 212) = 1;
  *(_DWORD *)(v3 + 220) = 1;
  *(_DWORD *)(v3 + 224) = 8;
  *(_DWORD *)(v3 + 228) = 10;
  *(_DWORD *)(v3 + 244) = 1;
  *(_DWORD *)(v3 + 204) = 4;
  *(_DWORD *)(v3 + 236) = 0;
  *(_DWORD *)(v3 + 240) = 0;
  *(_DWORD *)(v3 + 216) = 5;
  *(_DWORD *)(v2 + 228) = 1061734602;
  *(_DWORD *)(v2 + 232) = 1060089776;
  *(_DWORD *)(v2 + 236) = 1050056343;
  *(_DWORD *)(v2 + 240) = 1061997773;
  *(_DWORD *)(v2 + 244) = 1038674154;
  *(_DWORD *)(v2 + 248) = 1038674154;
  *(_QWORD *)(v2 + 252) = 4557642823939425413LL;
  v4 = *(MobSpawnerData **)(v2 + 132);
  v9 = 0;
  v7 = 0;
  MobSpawnerData::MobSpawnerData(&v10, 2853, 1, 1, 1, v2 + 64, (int)&v8, (int)&v6);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 128, v4, &v10);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v10);
  if ( v7 )
    v7();
  if ( v9 )
    v9();
  return v2;
}


int __fastcall SwampBiome::getFoliageColor(SwampBiome *this, const BlockPos *a2)
{
  Biome *v2; // r4@1
  float v9; // r2@1

  v2 = this;
  _R0 = Biome::getDefaultBiomeTemperature(this);
  __asm { VMOV            S16, R0 }
  _R0 = Biome::getDownfall(v2);
  __asm
  {
    VCMPE.F32       S16, #0.0
    VLDR            S0, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV            S2, R0
    VMOV.F32        S6, S0
    VCMPE.F32       S2, #0.0
    VMOV.F32        S4, #1.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S16 }
    VCMPE.F32       S16, S4
    __asm { VMOVGT.F32      S0, S2 }
    VCMPE.F32       S2, S4
    __asm { VMOVGT.F32      S6, S4 }
    VMOV            R0, S6
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor20getSwampFoliageColorEff(_R0, _R1, v9);
}


unsigned int __fastcall SwampBiome::decorate(SwampBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  SwampBiome *v10; // r7@1
  Random *v11; // r4@1
  unsigned int result; // r0@1
  float v13; // [sp+4h] [bp-1Ch]@0

  __asm { VLDR            S0, [SP,#0x20+arg_4] }
  v10 = this;
  __asm { VSTR            S0, [SP,#0x20+var_1C] }
  v11 = a3;
  Biome::decorate(this, a2, a3, a4, a5, v13);
  result = Random::_genRandInt32(v11);
  if ( !(result & 0x3F) )
    result = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v10 + 31) + 108) + 8))();
  return result;
}


signed int __fastcall SwampBiome::getMapGrassColor(SwampBiome *this, const BlockPos *_R1)
{
  signed int result; // r0@1

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R1,#8]
    VCVT.F32.S32    S0, S0
    VLDR            S4, =0.0225
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VMOV            R1, S0
    VMOV            R2, S2
  }
  _R0 = PerlinSimplexNoise::getValue(*((PerlinSimplexNoise **)this + 68), _R1, _R2);
    VMOV            S2, R0
    VLDR            S0, =-0.1
  result = 6975545;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 5011004;
  return result;
}


int __fastcall SwampBiome::getGrassColor(SwampBiome *this, const BlockPos *_R1)
{
  float v10; // r1@1

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R1,#8]
    VCVT.F32.S32    S0, S0
    VLDR            S4, =0.0225
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VMOV            R1, S0
    VMOV            R2, S2
  }
  _R0 = PerlinSimplexNoise::getValue(*((PerlinSimplexNoise **)this + 68), _R1, _R2);
    VLDR            S0, =0.6
    VMOV            S2, R0
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  return j_j_j__ZN12FoliageColor18getSwampGrassColorEf(_R0, v10);
}


Random *__fastcall SwampBiome::buildSurfaceAt(float a1, int a2, int a3, const BlockPos *a4, int a5, int a6)
{
  int v11; // r5@1
  Random *v12; // r9@1
  int v13; // r10@1
  signed int v17; // r6@2
  int v18; // r4@3
  int *v19; // r0@3
  int v20; // r2@7
  int v21; // r0@8
  __int64 v22; // kr00_8@8
  __int16 v23; // r7@8
  float v25; // [sp+0h] [bp-48h]@0
  unsigned __int16 v26; // [sp+Ch] [bp-3Ch]@2
  __int16 v27; // [sp+Eh] [bp-3Ah]@3

  _R11 = a4;
  __asm
  {
    VMOV.F32        S4, #0.25
    VLDR            S0, [R11]
  }
  v11 = a3;
  __asm { VLDR            S2, [R11,#8] }
  v12 = (Random *)a2;
  __asm { VCVT.F32.S32    S0, S0 }
  v13 = LODWORD(a1);
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VMOV            R1, S0
    VMOV            R2, S2
  _R0 = PerlinSimplexNoise::getValue(*(PerlinSimplexNoise **)(LODWORD(a1) + 272), _R1, _R2);
    VMOV            S18, R0
    VLDR            S16, [SP,#0x48+arg_0]
    VCMPE.F32       S18, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v26, _R11);
    v17 = 127;
    while ( 1 )
    {
      v27 = v17;
      v18 = *(_BYTE *)(*(_DWORD *)v11
                     + (*(_QWORD *)(v11 + 16) >> 32) * (HIBYTE(v26) + *(_QWORD *)(v11 + 16) * (unsigned __int8)v26)
                     + v17);
      v19 = (int *)Block::getMaterial((Block *)Block::mBlocks[v18]);
      if ( Material::isType(v19, 0) == 1 )
        break;
      if ( --v17 == -1 )
        goto LABEL_11;
    }
    if ( v17 == 62 )
      v20 = *(_BYTE *)(Block::mStillWater + 4);
      if ( v18 != v20 )
      {
        v21 = *(_DWORD *)v11;
        v22 = *(_QWORD *)(v11 + 16);
        __asm { VLDR            S0, =0.12 }
        v23 = v27;
        __asm
        {
          VCMPE.F32       S18, S0
          VMRS            APSR_nzcv, FPSCR
        }
        *(_BYTE *)(*(_DWORD *)v11 + v27 + (HIBYTE(v26) + (unsigned __int8)v26 * (_DWORD)v22) * HIDWORD(v22)) = v20;
        if ( _NF ^ _VF )
          *(_BYTE *)(v21
                   + HIDWORD(v22) * (v22 * (unsigned __int8)v26 + ((unsigned int)v26 >> 8))
                   + ((((unsigned __int16)v23 << 16) + 0x10000) >> 16)) = *(_BYTE *)(Block::mWaterlily + 4);
      }
LABEL_11:
  __asm { VSTR            S16, [SP,#0x48+var_48] }
  return Biome::buildSurfaceAtDefault(v13, v12, v11, (int)_R11, v25, a6);
}


void __fastcall SwampBiome::~SwampBiome(SwampBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall SwampBiome::getTreeFeature(SwampBiome *this, Random *a2)
{
  SwampBiome *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r1@1
  unsigned int v5; // r2@1
  int result; // r0@1

  v2 = this;
  v3 = Random::_genRandInt32(a2);
  v4 = *((_DWORD *)v2 + 31);
  v5 = v3 % 0x14;
  result = v4 + 160;
  if ( !v5 )
    result = v4 + 72;
  return result;
}
