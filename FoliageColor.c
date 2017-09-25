

signed int __fastcall FoliageColor::getMapBirchColor(FoliageColor *this, float a2, float a3)
{
  return 8431445;
}


signed int __fastcall FoliageColor::_getX(FoliageColor *this, float _R1, float a3)
{
  signed int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #1.0
    VMOV            S2, R1
    VSUB.F32        S0, S0, S2
    VLDR            S2, =255.0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  }
  result = _R1;
  if ( _R1 <= 0 )
    result = 0;
  if ( _R1 > 255 )
    result = 255;
  return result;
}


void __fastcall FoliageColor::setGrassColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  j_j_j__ZN12FoliageColor11_setPaletteERN3mce16TextureContainerERSt6vectorIiSaIiEE(
    this,
    (int)&FoliageColor::grassColors);
}


int __fastcall FoliageColor::_index(FoliageColor *this, float _R1, float a3)
{
  signed int v7; // r2@1
  signed int v8; // r1@1
  signed int v11; // r1@7

  __asm { VMOV.F32        S0, #1.0 }
  v7 = 0;
  __asm { VMOV            S4, R1 }
  v8 = 0;
  __asm
  {
    VMOV            S2, R0
    VMUL.F32        S2, S4, S2
    VSUB.F32        S4, S0, S4
    VSUB.F32        S0, S0, S2
    VLDR            S2, =255.0
    VMUL.F32        S4, S4, S2
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S2, S4
    VMOV            R0, S2
  }
  if ( _R0 > 0 )
    v7 = _R0;
  __asm { VCVTR.S32.F32   S0, S0 }
  if ( _R0 > 255 )
    v7 = 255;
  __asm { VMOV            R0, S0 }
    v8 = _R0;
  v11 = v8 << 8;
    v11 = 65280;
  return v11 | v7;
}


int __fastcall FoliageColor::getGrassColor(FoliageColor *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r7@1
  BlockSource *v4; // r4@1
  signed int v8; // r9@2
  signed int v9; // r10@2
  int v10; // ST10_4@3
  int v11; // r6@3
  int v12; // r2@3
  int v13; // r0@3
  int v14; // r3@3
  int v15; // r6@3
  int (*v16)(void); // r7@3
  unsigned int v17; // r0@3
  int v19; // r4@5
  int v27; // r1@5
  int v28; // r2@7
  signed int v29; // r2@11
  int v30; // r1@13
  int v31; // r0@13
  signed int v32; // r0@15
  FoliageColor *v34; // [sp+4h] [bp-4Ch]@1
  signed int v35; // [sp+Ch] [bp-44h]@1
  int v36; // [sp+14h] [bp-3Ch]@3
  int v37; // [sp+18h] [bp-38h]@3
  int v38; // [sp+1Ch] [bp-34h]@3
  int v39; // [sp+20h] [bp-30h]@3
  int v40; // [sp+24h] [bp-2Ch]@3
  int v41; // [sp+28h] [bp-28h]@3

  v3 = this;
  v4 = a2;
  _R6 = 0;
  _R11 = 0;
  _R5 = 0;
  v34 = this;
  v35 = -2;
  do
  {
    v8 = -2;
    v9 = -8;
    do
    {
      v10 = _R6;
      v11 = *(_QWORD *)v4 >> 32;
      v12 = *((_DWORD *)v4 + 2);
      v39 = *(_QWORD *)v4 + v9;
      v40 = v11;
      v41 = 4 * v35 + v12;
      v13 = BlockSource::getBiome(v3, (const BlockPos *)&v39);
      v14 = *((_DWORD *)v4 + 1);
      v15 = *((_DWORD *)v4 + 2);
      v16 = *(int (**)(void))(*(_DWORD *)v13 + 80);
      v36 = v8 + *(_DWORD *)v4;
      v37 = v14;
      v38 = v35 + v15;
      v17 = v16();
      v3 = v34;
      _R5 += 4 * v17 & 0x3FC;
      v9 += 4;
      _R11 += 4 * ((unsigned __int16)v17 >> 8);
      ++v8;
      _R6 = v10 + 4 * ((v17 >> 16) & 0xFF);
    }
    while ( v9 != 12 );
    ++v35;
  }
  while ( v35 != 3 );
  _R0 = 715827883;
  v19 = 0;
  __asm
    SMMUL.W         R1, R5, R0
    SMMUL.W         R2, R11, R0
    SMMUL.W         R0, R6, R0
  v27 = ((signed int)_R1 >> 4) + (_R1 >> 31);
  if ( v27 <= 0 )
    v27 = 0;
  v28 = ((signed int)_R2 >> 4) + (_R2 >> 31);
  if ( _R5 >= 24576 )
    v27 = 255;
  if ( v28 <= 0 )
    v28 = 0;
  v29 = v28 << 8;
  if ( _R11 >= 24576 )
    v29 = 65280;
  v30 = v27 | v29;
  v31 = ((signed int)_R0 >> 4) + (_R0 >> 31);
  if ( v31 > 0 )
    v19 = v31;
  v32 = v19 << 16;
  if ( _R6 >= 24576 )
    v32 = 16711680;
  return v32 | v30;
}


int __fastcall FoliageColor::getMapGrassColor(FoliageColor *this, float _R1, float a3)
{
  float v14; // [sp+0h] [bp-38h]@9

  __asm { VMOV.F32        S0, #1.0 }
  _R2 = 0;
  __asm { VMOV            S2, R0 }
  _R0 = 0;
  __asm
  {
    VMOV            S4, R1
    VLDR            S8, =0.99609
    VSUB.F32        S6, S0, S2
    VMUL.F32        S2, S4, S2
    VLDR            S4, =255.0
    VMUL.F32        S6, S6, S4
    VSUB.F32        S2, S0, S2
    VCVTR.S32.F32   S6, S6
    VMUL.F32        S2, S2, S4
    VMOV            R1, S6
    VLDR            S6, =0.0039062
  }
  if ( _R1 > 0 )
    _R2 = _R1;
    VMOV            S4, R2
    VCVT.F32.S32    S4, S4
    VCVTR.S32.F32   S2, S2
    VMOV            R2, S2
    VMUL.F32        S2, S4, S6
  if ( _R2 > 0 )
    _R0 = _R2;
    VMOV            S4, R0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S8 }
  _R1 = &FoliageColor::GRASS_BOTTOM_RIGHT;
  _R0 = &FoliageColor::GRASS_NOISE;
    VLDR            S12, [R1,#4]
    VLDR            S10, [R1]
    VLDR            S14, [R1,#8]
    VLDR            S3, [R0,#0x60]
    VMUL.F32        S10, S10, S2
    VMUL.F32        S4, S4, S6
    VLDR            S1, [R1,#0xC]
    __asm { VMOVGT.F32      S4, S8 }
    VLDR            S5, [R0,#0x70]
    VMUL.F32        S8, S12, S2
    VLDR            S12, [R0,#0x5C]
    VMUL.F32        S3, S3, S2
    VLDR            S7, [R0,#0x64]
    VMUL.F32        S14, S14, S2
    VLDR            S9, [R0,#0x4C]
    VMUL.F32        S12, S12, S2
    VLDR            S11, [R0,#0x50]
    VMUL.F32        S7, S7, S2
    VLDR            S13, [R0,#0x54]
    VSUB.F32        S0, S0, S4
    VLDR            S15, [R0,#0x58]
    VMUL.F32        S5, S5, S6
    VLDR            S16, [R0,#0x6C]
    VMUL.F32        S9, S9, S6
    VLDR            S18, [R0,#0x74]
    VMUL.F32        S13, S13, S6
    VLDR            S20, [R0,#0x68]
    VMUL.F32        S16, S16, S6
    VLDR            S22, [R0,#0x78]
    VMUL.F32        S18, S18, S6
    VMUL.F32        S20, S20, S2
    VMUL.F32        S11, S11, S6
    VMUL.F32        S15, S15, S6
    VMUL.F32        S2, S1, S2
    VMUL.F32        S6, S22, S6
    VADD.F32        S8, S8, S5
    VADD.F32        S10, S10, S16
    VADD.F32        S14, S14, S18
    VADD.F32        S1, S3, S11
    VADD.F32        S12, S12, S9
    VADD.F32        S3, S7, S13
    VADD.F32        S2, S2, S6
    VADD.F32        S5, S20, S15
    VMUL.F32        S10, S10, S4
    VMUL.F32        S8, S8, S4
    VMUL.F32        S14, S14, S4
    VMUL.F32        S6, S12, S0
    VMUL.F32        S12, S1, S0
    VMUL.F32        S1, S3, S0
    VMUL.F32        S0, S5, S0
    VADD.F32        S4, S10, S6
    VADD.F32        S6, S8, S12
    VADD.F32        S8, S14, S1
    VADD.F32        S0, S2, S0
    VSTR            S4, [SP,#0x38+var_38]
    VSTR            S6, [SP,#0x38+var_34]
    VSTR            S8, [SP,#0x38+var_30]
    VSTR            S0, [SP,#0x38+var_2C]
  return Color::toARGB((Color *)&v14) & 0xFFFFFF;
}


int __fastcall FoliageColor::buildGrassColor(int result, const BlockPos *a2, const BlockPos *a3, BlockSource *a4, Random *a5)
{
  const BlockPos *v5; // r5@1
  int v6; // r6@1
  int v7; // r3@1
  const BlockPos *v8; // r2@1
  BlockSource *v13; // r4@2
  int v14; // r1@2
  FoliageColor *v15; // r0@5
  BlockSource *v16; // r5@5
  int v17; // r0@5
  PerlinSimplexNoise *v18; // r8@5
  unsigned int v19; // r6@5
  PerlinSimplexNoise *v20; // r0@6
  PerlinSimplexNoise *v21; // r0@7
  int v22; // r0@8
  char v26; // r0@8
  signed int v27; // r2@8
  int v28; // r3@8
  int v29; // r0@8
  int v30; // r1@8
  int v31; // r1@10
  int v32; // r0@14
  signed int v33; // r3@14
  int v34; // r1@16
  int v35; // r2@16
  int v38; // [sp+0h] [bp-58h]@1
  const BlockPos *v39; // [sp+4h] [bp-54h]@1
  BlockSource *v40; // [sp+8h] [bp-50h]@1
  const BlockPos *v41; // [sp+Ch] [bp-4Ch]@1
  char v42; // [sp+10h] [bp-48h]@8
  int v43; // [sp+1Ch] [bp-3Ch]@1
  int v44; // [sp+20h] [bp-38h]@1
  int v45; // [sp+24h] [bp-34h]@1

  v5 = a3;
  v40 = a4;
  v41 = a2;
  v38 = result;
  v39 = a3;
  v6 = *(_DWORD *)result;
  v43 = v6;
  v44 = *(_DWORD *)(result + 4);
  v7 = *(_DWORD *)(result + 8);
  v45 = *(_DWORD *)(result + 8);
  v8 = *(const BlockPos **)a2;
  if ( v6 < *(_DWORD *)a2 )
  {
    __asm { VMOV.F32        S16, #0.5 }
    v13 = (BlockSource *)&v43;
    v14 = *((_DWORD *)a2 + 2);
    while ( 1 )
    {
      v45 = v7;
      if ( v7 < v14 )
      {
        do
        {
          v15 = v5;
          v16 = v13;
          v17 = FoliageColor::getGrassColor(v15, v13, v8);
          v18 = (PerlinSimplexNoise *)FoliageColor::GRASS_NOISE;
          v19 = v17;
          if ( !FoliageColor::GRASS_NOISE )
          {
            v18 = (PerlinSimplexNoise *)operator new(0x14u);
            PerlinSimplexNoise::PerlinSimplexNoise(v18, 0x15CF0u, 5);
            v20 = (PerlinSimplexNoise *)FoliageColor::GRASS_NOISE;
            FoliageColor::GRASS_NOISE = v18;
            if ( v20 )
            {
              v21 = PerlinSimplexNoise::~PerlinSimplexNoise(v20);
              operator delete((void *)v21);
              v18 = (PerlinSimplexNoise *)FoliageColor::GRASS_NOISE;
            }
          }
          Vec3::Vec3((int)&v42, (int)v13);
          v22 = PerlinSimplexNoise::getValue(v18, (const Vec3 *)&v42);
          _R0 = floorf(*(float *)&v22);
          __asm
            VMOV            S0, R0
            VCVTR.S32.F32   S0, S0
            VMOV            R0, S0
          _R0 -= 30;
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S0, S16
            VMOV            R4, S0
          v26 = Random::_genRandInt32(v40);
          LOBYTE(v27) = 0;
          LOWORD(v28) = 0;
          v29 = (v26 & 7) + _R4 - 4;
          v13 = v16;
          v30 = v29 + v19;
          if ( (signed int)(v29 + v19) > 0 )
            LOBYTE(v27) = v29 + v19;
          _VF = __OFSUB__(v30, 255);
          _ZF = v30 == 255;
          _NF = v30 - 255 < 0;
          v27 = (unsigned __int8)v27;
          v31 = v29 + (v19 >> 8);
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            v27 = 255;
          if ( v31 > 0 )
            v28 = v29 + (v19 >> 8);
          v32 = v29 + (v19 >> 16);
          v33 = (unsigned __int16)((_WORD)v28 << 8);
          if ( v31 > 255 )
            v33 = 65280;
          v34 = v33 | v27;
          v35 = 0;
          if ( v32 > 0 )
            v35 = v32;
          _R2 = v35 << 16;
          __asm { UXTB16.W        R2, R2 }
            _R2 = 16711680;
          v5 = v39;
          BlockSource::setGrassColor(v39, v34 | _R2, v13, 0);
          result = v45 + 1;
          v45 = result;
          v14 = *((_DWORD *)v41 + 2);
        }
        while ( result < v14 );
        v6 = v43;
        v8 = *(const BlockPos **)v41;
      }
      v43 = ++v6;
      if ( v6 >= (signed int)v8 )
        break;
      result = v38;
      v7 = *(_DWORD *)(v38 + 8);
    }
  }
  return result;
}


int __fastcall FoliageColor::getBirchColor(FoliageColor *this, float _R1, float a3)
{
  signed int v7; // r3@1
  signed int v8; // r1@1
  signed int v11; // r1@7

  __asm { VMOV.F32        S0, #1.0 }
  v7 = 0;
  __asm
  {
    VMOV            S2, R0
    VMOV            S4, R1
  }
  v8 = 0;
    VMUL.F32        S4, S4, S2
    VSUB.F32        S2, S0, S2
    VSUB.F32        S0, S0, S4
    VLDR            S4, =255.0
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S2, S2
    VMOV            R2, S2
  if ( _R2 > 0 )
    v7 = _R2;
  __asm { VCVTR.S32.F32   S0, S0 }
  if ( _R2 > 255 )
    v7 = 255;
  __asm { VMOV            R2, S0 }
    v8 = _R2;
  v11 = v8 << 8;
    v11 = 65280;
  return *(_DWORD *)(FoliageColor::foliageBirchColors + 4 * (v11 | v7));
}


PerlinSimplexNoise *__fastcall FoliageColor::getGrassNoise(FoliageColor *this)
{
  PerlinSimplexNoise *v1; // r4@1
  PerlinSimplexNoise *v2; // r0@2
  PerlinSimplexNoise *v3; // r0@3

  v1 = (PerlinSimplexNoise *)FoliageColor::GRASS_NOISE;
  if ( !FoliageColor::GRASS_NOISE )
  {
    v1 = (PerlinSimplexNoise *)operator new(0x14u);
    PerlinSimplexNoise::PerlinSimplexNoise(v1, 0x15CF0u, 5);
    v2 = (PerlinSimplexNoise *)FoliageColor::GRASS_NOISE;
    FoliageColor::GRASS_NOISE = v1;
    if ( v2 )
    {
      v3 = PerlinSimplexNoise::~PerlinSimplexNoise(v2);
      operator delete((void *)v3);
      v1 = (PerlinSimplexNoise *)FoliageColor::GRASS_NOISE;
    }
  }
  return v1;
}


void __fastcall FoliageColor::setFoliageBirchColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  j_j_j__ZN12FoliageColor11_setPaletteERN3mce16TextureContainerERSt6vectorIiSaIiEE(
    this,
    (int)&FoliageColor::foliageBirchColors);
}


signed int __fastcall FoliageColor::getDefaultColor(FoliageColor *this)
{
  return 4764952;
}


signed int __fastcall FoliageColor::getMapEvergreenColor(FoliageColor *this, float a2, float a3)
{
  return 6396257;
}


signed int __fastcall FoliageColor::_getY(FoliageColor *this, float _R1, float a3)
{
  signed int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R1
    VMOV.F32        S4, #1.0
    VMUL.F32        S0, S2, S0
    VLDR            S2, =255.0
    VSUB.F32        S0, S4, S0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  }
  result = _R1;
  if ( _R1 <= 0 )
    result = 0;
  if ( _R1 > 255 )
    result = 255;
  return result;
}


void __fastcall FoliageColor::setFoliageEvergreenColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  j_j_j__ZN12FoliageColor11_setPaletteERN3mce16TextureContainerERSt6vectorIiSaIiEE(
    this,
    (int)&FoliageColor::foliageEvergreenColors);
}


int __fastcall FoliageColor::getGrassColor(FoliageColor *this, float _R1, float a3)
{
  signed int v7; // r3@1
  signed int v8; // r1@1
  signed int v11; // r1@7

  __asm { VMOV.F32        S0, #1.0 }
  v7 = 0;
  __asm
  {
    VMOV            S2, R0
    VMOV            S4, R1
  }
  v8 = 0;
    VMUL.F32        S4, S4, S2
    VSUB.F32        S2, S0, S2
    VSUB.F32        S0, S0, S4
    VLDR            S4, =255.0
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S2, S2
    VMOV            R2, S2
  if ( _R2 > 0 )
    v7 = _R2;
  __asm { VCVTR.S32.F32   S0, S0 }
  if ( _R2 > 255 )
    v7 = 255;
  __asm { VMOV            R2, S0 }
    v8 = _R2;
  v11 = v8 << 8;
    v11 = 65280;
  return *(_DWORD *)(FoliageColor::grassColors + 4 * (v11 | v7));
}


void __fastcall FoliageColor::setFoliageColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  j_j_j__ZN12FoliageColor11_setPaletteERN3mce16TextureContainerERSt6vectorIiSaIiEE(
    this,
    (int)&FoliageColor::foliageColors);
}


int __fastcall FoliageColor::getSwampGrassColor(FoliageColor *this, float a2)
{
  int v6; // r1@1

  __asm
  {
    VMOV            S2, R0
    VLDR            S0, =255.0
  }
  v6 = 65280;
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
  if ( _R2 > 0 )
    v6 = _R2 | 0xFF00;
  if ( _R2 > 255 )
    v6 = 0xFFFF;
  return *(_DWORD *)(FoliageColor::swampGrassColors + 4 * v6);
}


void __fastcall FoliageColor::setFoliageBirchColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  FoliageColor::setFoliageBirchColorPalette(this, a2);
}


void __fastcall FoliageColor::setFoliageSwampColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  FoliageColor::setFoliageSwampColorPalette(this, a2);
}


void __fastcall FoliageColor::setSwampGrassColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  FoliageColor::setSwampGrassColorPalette(this, a2);
}


int __fastcall FoliageColor::getFoliageColor(FoliageColor *this, float _R1, float a3)
{
  signed int v7; // r3@1
  signed int v8; // r1@1
  signed int v11; // r1@7

  __asm { VMOV.F32        S0, #1.0 }
  v7 = 0;
  __asm
  {
    VMOV            S2, R0
    VMOV            S4, R1
  }
  v8 = 0;
    VMUL.F32        S4, S4, S2
    VSUB.F32        S2, S0, S2
    VSUB.F32        S0, S0, S4
    VLDR            S4, =255.0
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S2, S2
    VMOV            R2, S2
  if ( _R2 > 0 )
    v7 = _R2;
  __asm { VCVTR.S32.F32   S0, S0 }
  if ( _R2 > 255 )
    v7 = 255;
  __asm { VMOV            R2, S0 }
    v8 = _R2;
  v11 = v8 << 8;
    v11 = 65280;
  return *(_DWORD *)(FoliageColor::foliageColors + 4 * (v11 | v7));
}


int __fastcall FoliageColor::getEvergreenColor(FoliageColor *this, float _R1, float a3)
{
  signed int v7; // r3@1
  signed int v8; // r1@1
  signed int v11; // r1@7

  __asm { VMOV.F32        S0, #1.0 }
  v7 = 0;
  __asm
  {
    VMOV            S2, R0
    VMOV            S4, R1
  }
  v8 = 0;
    VMUL.F32        S4, S4, S2
    VSUB.F32        S2, S0, S2
    VSUB.F32        S0, S0, S4
    VLDR            S4, =255.0
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S2, S2
    VMOV            R2, S2
  if ( _R2 > 0 )
    v7 = _R2;
  __asm { VCVTR.S32.F32   S0, S0 }
  if ( _R2 > 255 )
    v7 = 255;
  __asm { VMOV            R2, S0 }
    v8 = _R2;
  v11 = v8 << 8;
    v11 = 65280;
  return *(_DWORD *)(FoliageColor::foliageEvergreenColors + 4 * (v11 | v7));
}


void __fastcall FoliageColor::setFoliageColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  FoliageColor::setFoliageColorPalette(this, a2);
}


void __fastcall FoliageColor::setSwampGrassColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  j_j_j__ZN12FoliageColor11_setPaletteERN3mce16TextureContainerERSt6vectorIiSaIiEE(
    this,
    (int)&FoliageColor::swampGrassColors);
}


void __fastcall FoliageColor::_setPalette(mce::TextureContainer *this, int a2)
{
  FoliageColor::_setPalette(this, a2);
}


unsigned int __fastcall FoliageColor::getMapGrassColor(FoliageColor *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  BlockSource *v4; // r5@1
  __int64 v5; // r0@1
  int v6; // r2@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r7@1
  int (__cdecl *v11)(int, int *, int, int, int, int); // r6@1
  unsigned int v12; // r8@1
  __int64 v13; // r0@1
  int v14; // r2@1
  int v15; // r0@1
  int v16; // r2@1
  int v17; // r3@1
  int v18; // r7@1
  int (__cdecl *v19)(int, int *, int, int, int, int); // r6@1
  unsigned int v20; // r9@1
  __int64 v21; // r0@1
  int v22; // r2@1
  int v23; // r0@1
  int (__cdecl *v24)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r2@1
  int v25; // r3@1
  int v26; // r7@1
  unsigned int v27; // r6@1
  __int64 v28; // r0@1
  int v29; // r2@1
  int v30; // r0@1
  int (__cdecl *v31)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r2@1
  int v32; // r3@1
  int v33; // r7@1
  unsigned int v34; // r7@1
  int v35; // r1@1
  int v36; // r2@1
  int v37; // r0@1
  int (__cdecl *v38)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r2@1
  int v39; // r3@1
  int v40; // r5@1
  int v41; // r10@1
  int v42; // r5@1
  int v43; // r3@1
  int v44; // r6@1
  unsigned int v45; // r0@1
  unsigned int v46; // r1@1
  unsigned int v47; // r3@1
  unsigned int v48; // r0@1
  signed __int64 v49; // kr00_8@1
  unsigned int v50; // r3@1
  int v51; // r6@1
  unsigned int v52; // r0@1
  unsigned int v53; // r2@1
  unsigned int v54; // r1@3
  int v55; // r1@5
  unsigned int v56; // r2@5
  int v58; // [sp+0h] [bp-38h]@1
  int v59; // [sp+4h] [bp-34h]@1
  int v60; // [sp+8h] [bp-30h]@1
  __int64 v61; // [sp+Ch] [bp-2Ch]@1
  int v62; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = this;
  v5 = *(_QWORD *)a2;
  v6 = *((_DWORD *)v3 + 2);
  LODWORD(v5) = v5 - 8;
  v61 = v5;
  v62 = v6 - 8;
  v7 = BlockSource::getBiome(v4, (const BlockPos *)&v61);
  v8 = *(_DWORD *)v3;
  v9 = *((_DWORD *)v3 + 1);
  v10 = *((_DWORD *)v3 + 2);
  v11 = *(int (__cdecl **)(int, int *, int, int, int, int))(*(_DWORD *)v7 + 84);
  v58 = *(_DWORD *)v3 - 2;
  v60 = v10 - 2;
  v12 = v11(v7, &v58, v8, v9, v58, v9);
  HIDWORD(v13) = *((_DWORD *)v3 + 1);
  v14 = *((_DWORD *)v3 + 2);
  LODWORD(v13) = *(_DWORD *)v3 + 8;
  v61 = v13;
  v62 = v14 - 8;
  v15 = BlockSource::getBiome(v4, (const BlockPos *)&v61);
  v16 = *(_DWORD *)v3;
  v17 = *((_DWORD *)v3 + 1);
  v18 = *((_DWORD *)v3 + 2);
  v19 = *(int (__cdecl **)(int, int *, int, int, int, int))(*(_DWORD *)v15 + 84);
  v58 = *(_DWORD *)v3 + 2;
  v60 = v18 - 2;
  v20 = v19(v15, &v58, v16, v17, v58, v17);
  HIDWORD(v21) = *((_DWORD *)v3 + 1);
  v22 = *((_DWORD *)v3 + 2);
  LODWORD(v21) = *(_DWORD *)v3 - 8;
  v61 = v21;
  v62 = v22 + 8;
  v23 = BlockSource::getBiome(v4, (const BlockPos *)&v61);
  v24 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v23 + 84);
  v25 = *((_DWORD *)v3 + 1);
  v26 = *((_DWORD *)v3 + 2);
  v60 = v26 + 2;
  v27 = v24(v23, &v58, v24, v25, v58, v25);
  HIDWORD(v28) = *((_DWORD *)v3 + 1);
  v29 = *((_DWORD *)v3 + 2);
  LODWORD(v28) = *(_DWORD *)v3 + 8;
  v61 = v28;
  v62 = v29 + 8;
  v30 = BlockSource::getBiome(v4, (const BlockPos *)&v61);
  v31 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v30 + 84);
  v32 = *((_DWORD *)v3 + 1);
  v33 = *((_DWORD *)v3 + 2);
  v60 = v33 + 2;
  v34 = v31(v30, &v58, v31, v32, v58, v32);
  v35 = *((_DWORD *)v3 + 1);
  v36 = *((_DWORD *)v3 + 2);
  LODWORD(v61) = *(_DWORD *)v3;
  HIDWORD(v61) = v35;
  v62 = v36;
  v37 = BlockSource::getBiome(v4, (const BlockPos *)&v61);
  v38 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v37 + 84);
  v39 = *((_DWORD *)v3 + 1);
  v40 = *((_DWORD *)v3 + 2);
  v58 = *(_DWORD *)v3;
  v59 = v39;
  v60 = v40;
  v41 = ((v20 >> 14) & 0x3FC) + 4 * ((v12 >> 16) & 0xFF) + 4 * ((v27 >> 16) & 0xFF) + 4 * ((v34 >> 16) & 0xFF);
  v42 = ((v20 >> 6) & 0x3FC)
      + 4 * ((unsigned __int16)v12 >> 8)
      + 4 * ((unsigned __int16)v27 >> 8)
      + 4 * ((unsigned __int16)v34 >> 8);
  v43 = 4 * v34 & 0x3FC;
  v44 = (4 * v12 & 0x3FC) + (4 * v20 & 0x3FC) + (4 * v27 & 0x3FC) + v43;
  v45 = v38(v37, &v58, v38, v43, v58, v59);
  v46 = (4 * v45 & 0x3FC) + v44;
  v47 = v42 + 4 * ((unsigned __int16)v45 >> 8);
  v48 = v41 + 4 * ((v45 >> 16) & 0xFF);
  v49 = 3435973837LL * v47;
  v50 = v47 >> 10;
  v51 = 3435973837u * (unsigned __int64)v48 >> 32;
  v52 = v48 >> 10;
  v53 = v46 / 0x14;
  if ( v46 >> 10 > 4 )
    v53 = 255;
  v54 = 16 * HIDWORD(v49) & 0xFFFFFF00;
  if ( v50 > 4 )
    v54 = 65280;
  v55 = v54 | v53;
  v56 = (v51 << 12) & 0xFFFF0000;
  if ( v52 > 4 )
    v56 = 16711680;
  return v55 | v56;
}


void __fastcall FoliageColor::_setPalette(mce::TextureContainer *this, int a2)
{
  ImageUtils *v2; // r5@1
  int v3; // r8@1
  bool v4; // r2@1
  mce::ImageBuffer *v5; // r6@3
  unsigned int v6; // r5@3
  int v7; // r7@3
  int v8; // r4@3
  char *v9; // r0@3
  int v10; // r6@3
  int v11; // r0@3
  _DWORD *v12; // r0@7
  int v13; // r1@8
  int v14; // r2@8
  int v15; // r3@8
  _DWORD *v16; // r0@11
  int v17; // r1@12
  int v18; // r2@12
  int v19; // r3@12
  _DWORD *v20; // r0@15
  int v21; // r1@15
  int v22; // r7@16
  int v23; // r3@16
  int v24; // r2@16
  char *v25; // r5@17 OVERLAPPED
  char *v26; // r6@17 OVERLAPPED
  unsigned int v27; // r0@17
  __int64 v28; // r0@20
  void *ptr; // [sp+4h] [bp-24h]@1
  char *v30; // [sp+8h] [bp-20h]@1
  int v31; // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  ptr = 0;
  v30 = 0;
  v31 = 0;
  if ( !mce::TextureContainer::isValid(this) )
    ImageUtils::uncompress(v2, 0, v4);
  v5 = (mce::ImageBuffer *)mce::TextureContainer::getImage(v2, 0);
  v6 = mce::ImageBuffer::get(v5, 0);
  v7 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v5);
  v8 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v5) + 1);
  v9 = mce::ImageBuffer::getImageDescription(v5);
  v10 = v8 * v7;
  v11 = *((_DWORD *)v9 + 2);
  if ( v11 == 28 )
  {
    if ( v10 )
    {
      std::vector<int,std::allocator<int>>::_M_default_append((int)&ptr, v8 * v7);
      v16 = ptr;
      do
      {
        v17 = *(_BYTE *)v6;
        --v10;
        v18 = *(_BYTE *)(v6 + 1);
        v19 = *(_BYTE *)(v6 + 2);
        v6 += 4;
        *v16 = (v17 << 16) | (v18 << 8) | v19 | 0xFF000000;
        ++v16;
      }
      while ( v10 );
    }
  }
  else if ( v11 == 87 )
      v20 = ptr;
      v21 = v6 + 1;
        v22 = *(_BYTE *)(v21 + 1);
        v23 = *(_BYTE *)v21;
        v24 = *(_BYTE *)(v21 - 1);
        v21 += 4;
        *v20 = v24 | (v22 << 16) | (v23 << 8) | 0xFF000000;
        ++v20;
  else if ( v11 == 116 && v10 )
    std::vector<int,std::allocator<int>>::_M_default_append((int)&ptr, v8 * v7);
    v12 = ptr;
    do
      v13 = *(_BYTE *)v6;
      --v10;
      v14 = *(_BYTE *)(v6 + 1);
      v15 = *(_BYTE *)(v6 + 2);
      v6 += 3;
      *v12 = (v13 << 16) | (v14 << 8) | v15 | 0xFF000000;
      ++v12;
    while ( v10 );
  *(_QWORD *)&v25 = *(_QWORD *)&ptr;
  v27 = (v30 - (_BYTE *)ptr) >> 2;
  if ( v27 >= 0x10000 )
    if ( v27 >= 0x10001 )
      v26 = (char *)ptr + 0x40000;
      v30 = (char *)ptr + 0x40000;
    v28 = *(_QWORD *)v3;
    HIDWORD(v28) = (HIDWORD(v28) - (signed int)v28) >> 2;
    if ( 0 == HIDWORD(v28) >> 16 )
      std::vector<int,std::allocator<int>>::_M_default_append(v3, 0x10000 - HIDWORD(v28));
    else if ( HIDWORD(v28) >= 0x10001 )
      *(_DWORD *)(v3 + 4) = v28 + 0x40000;
    if ( v26 != v25 )
      _aeabi_memmove4(*(_DWORD *)v3, v25);
  if ( v25 )
    operator delete(v25);
}


int __fastcall FoliageColor::getMapFoliageColor(FoliageColor *this, float _R1, float a3)
{
  float v13; // [sp+0h] [bp-38h]@9

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S6, =255.0
    VMOV            S4, R1
  }
  _R2 = 0;
  __asm { VMOV            S2, R0 }
  _R1 = 0;
    VLDR            S8, =0.99609
    VMUL.F32        S4, S4, S2
    VSUB.F32        S2, S0, S2
    VSUB.F32        S4, S0, S4
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VLDR            S6, =0.0039062
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S2
  if ( _R0 > 0 )
    _R2 = _R0;
    VMOV            S2, R2
    VCVT.F32.S32    S2, S2
    VCVTR.S32.F32   S4, S4
    VMOV            R2, S4
  if ( _R2 > 0 )
    _R1 = _R2;
    VCVT.F32.S32    S4, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S8 }
  __asm { VSUB.F32        S10, S0, S2 }
  _R0 = &FoliageColor::GRASS_BOTTOM_RIGHT;
    VLDR            S6, [R0,#0x28]
    __asm { VMOVGT.F32      S4, S8 }
    VLDR            S8, [R0,#0x44]
    VLDR            S12, [R0,#0x24]
    VMUL.F32        S6, S6, S2
    VLDR            S14, [R0,#0x40]
    VMUL.F32        S8, S8, S2
    VLDR            S1, [R0,#0x20]
    VMUL.F32        S12, S12, S2
    VLDR            S3, [R0,#0x48]
    VMUL.F32        S14, S14, S2
    VLDR            S5, [R0,#0x10]
    VMUL.F32        S1, S1, S2
    VLDR            S7, [R0,#0x14]
    VMUL.F32        S3, S3, S2
    VLDR            S9, [R0,#0x18]
    VMUL.F32        S5, S5, S10
    VLDR            S11, [R0,#0x1C]
    VMUL.F32        S7, S7, S10
    VLDR            S13, [R0,#0x34]
    VMUL.F32        S9, S9, S10
    VLDR            S15, [R0,#0x38]
    VMUL.F32        S11, S11, S10
    VLDR            S16, [R0,#0x2C]
    VMUL.F32        S13, S13, S10
    VLDR            S18, [R0,#0x30]
    VMUL.F32        S15, S15, S10
    VLDR            S20, [R0,#0x4C]
    VMUL.F32        S16, S16, S2
    VLDR            S22, [R0,#0x3C]
    VMUL.F32        S18, S18, S10
    VMUL.F32        S2, S20, S2
    VMUL.F32        S10, S22, S10
    VADD.F32        S1, S1, S5
    VADD.F32        S8, S8, S13
    VSUB.F32        S0, S0, S4
    VADD.F32        S12, S12, S7
    VADD.F32        S14, S14, S18
    VADD.F32        S6, S6, S9
    VADD.F32        S2, S2, S10
    VADD.F32        S3, S3, S15
    VADD.F32        S5, S16, S11
    VMUL.F32        S10, S1, S0
    VMUL.F32        S12, S12, S0
    VMUL.F32        S8, S8, S4
    VMUL.F32        S6, S6, S0
    VMUL.F32        S14, S14, S4
    VMUL.F32        S1, S3, S4
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S5, S0
    VADD.F32        S8, S8, S12
    VADD.F32        S4, S14, S10
    VADD.F32        S6, S1, S6
    VADD.F32        S0, S2, S0
    VSTR            S4, [SP,#0x38+var_38]
    VSTR            S8, [SP,#0x38+var_34]
    VSTR            S6, [SP,#0x38+var_30]
    VSTR            S0, [SP,#0x38+var_2C]
  return Color::toARGB((Color *)&v13) & 0xFFFFFF;
}


void __fastcall FoliageColor::setFoliageEvergreenColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  FoliageColor::setFoliageEvergreenColorPalette(this, a2);
}


int __fastcall FoliageColor::getSwampFoliageColor(FoliageColor *this, float _R1, float a3)
{
  signed int v7; // r3@1
  signed int v8; // r1@1
  signed int v11; // r1@7

  __asm { VMOV.F32        S0, #1.0 }
  v7 = 0;
  __asm
  {
    VMOV            S2, R0
    VMOV            S4, R1
  }
  v8 = 0;
    VMUL.F32        S4, S4, S2
    VSUB.F32        S2, S0, S2
    VSUB.F32        S0, S0, S4
    VLDR            S4, =255.0
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S2, S2
    VMOV            R2, S2
  if ( _R2 > 0 )
    v7 = _R2;
  __asm { VCVTR.S32.F32   S0, S0 }
  if ( _R2 > 255 )
    v7 = 255;
  __asm { VMOV            R2, S0 }
    v8 = _R2;
  v11 = v8 << 8;
    v11 = 65280;
  return *(_DWORD *)(FoliageColor::foliageSwampColors + 4 * (v11 | v7));
}


void __fastcall FoliageColor::setFoliageSwampColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  j_j_j__ZN12FoliageColor11_setPaletteERN3mce16TextureContainerERSt6vectorIiSaIiEE(
    this,
    (int)&FoliageColor::foliageSwampColors);
}


void __fastcall FoliageColor::setGrassColorPalette(FoliageColor *this, mce::TextureContainer *a2)
{
  FoliageColor::setGrassColorPalette(this, a2);
}


int __fastcall FoliageColor::calculateMapGrassColorHelper(FoliageColor *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4, int *a5, int *a6, int *a7)
{
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r6@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r12@1
  const BlockPos *v12; // r8@1
  __int64 v13; // kr00_8@1
  int v14; // r3@1
  int v15; // r0@1
  int v16; // r2@1
  int v17; // r3@1
  __int64 v18; // kr08_8@1
  int (__cdecl *v19)(int, int *, int, int, _DWORD, int); // r12@1
  unsigned int v20; // r0@1
  int result; // r0@1
  int v22; // [sp+0h] [bp-30h]@1
  int v23; // [sp+8h] [bp-28h]@1
  int v24; // [sp+Ch] [bp-24h]@1
  int v25; // [sp+10h] [bp-20h]@1
  int v26; // [sp+14h] [bp-1Ch]@1

  v7 = a3;
  v8 = a2;
  v9 = *(_DWORD *)a3;
  v10 = *((_DWORD *)a3 + 1);
  v11 = *((_DWORD *)v7 + 2);
  v12 = a4;
  v13 = *(_QWORD *)v8;
  v14 = *((_DWORD *)v8 + 2);
  v24 = *(_QWORD *)v8 + 4 * v9;
  v25 = HIDWORD(v13) + 4 * v10;
  v26 = v14 + 4 * v11;
  v15 = BlockSource::getBiome(this, (const BlockPos *)&v24);
  v16 = *(_DWORD *)v8;
  v17 = *((_DWORD *)v8 + 1);
  v18 = *(_QWORD *)v7;
  v19 = *(int (__cdecl **)(int, int *, int, int, _DWORD, int))(*(_DWORD *)v15 + 84);
  v23 = *((_DWORD *)v7 + 2) + *((_DWORD *)v8 + 2);
  v20 = v19(v15, &v22, v16, v17, v18 + v16, HIDWORD(v18) + v17);
  *(_DWORD *)v12 += 4 * ((v20 >> 16) & 0xFF);
  *a5 += 4 * ((unsigned __int16)v20 >> 8);
  result = (4 * v20 & 0x3FC) + *a6;
  *a6 = result;
  return result;
}
