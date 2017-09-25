

Seasons *__fastcall Seasons::~Seasons(Seasons *this)
{
  Seasons *v1; // r4@1

  v1 = this;
  j_PerlinSimplexNoise::~PerlinSimplexNoise((Seasons *)((char *)this + 4));
  return v1;
}


int __fastcall Seasons::Seasons(int a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)a1 = a2;
  j_PerlinSimplexNoise::PerlinSimplexNoise((PerlinSimplexNoise *)(a1 + 4), 0x15CF0u, 5);
  return v2;
}


void __fastcall Seasons::postProcess(Seasons *this, LevelChunk *a2, BlockSource *a3, const ChunkPos *a4)
{
  BlockSource *v4; // r6@1
  int v5; // r2@1
  char *v6; // r1@1
  int v7; // r12@1
  int v8; // r9@2
  char *v9; // r7@2
  char *v10; // r5@2
  char *v11; // r11@2
  _QWORD *v12; // r10@3
  char *v13; // r4@5
  int v14; // r9@5
  unsigned int v15; // r1@5
  unsigned int v16; // r0@7
  unsigned int v17; // r8@7
  int v18; // r7@12
  unsigned int v19; // r1@15
  char *v20; // r2@15
  int v21; // r2@16
  Dimension *v22; // r0@26
  __int16 v23; // r5@26
  int v28; // r0@26
  int v29; // r1@26
  LevelChunk *v30; // r4@26
  int v31; // r10@26
  int v36; // r4@31
  _BYTE *v37; // r5@31
  int v39; // r0@34
  int v41; // r0@44
  signed int v44; // r3@47
  unsigned int v45; // r7@47
  signed int v46; // r2@47
  char *v47; // r1@49
  int v48; // r3@50
  int v49; // r4@52
  char *v50; // r3@52
  int v51; // t1@53
  __int64 v52; // kr08_8@53
  char *v53; // [sp+Ch] [bp-B4h]@2
  char *ptr; // [sp+10h] [bp-B0h]@26
  int v55; // [sp+14h] [bp-ACh]@26
  int v56; // [sp+18h] [bp-A8h]@26
  Seasons *v57; // [sp+1Ch] [bp-A4h]@2
  PerlinSimplexNoise *v58; // [sp+20h] [bp-A0h]@2
  LevelChunk *v59; // [sp+24h] [bp-9Ch]@1
  Weather *v60; // [sp+28h] [bp-98h]@2
  Weather *v61; // [sp+28h] [bp-98h]@26
  char v62; // [sp+2Ch] [bp-94h]@32
  int v63; // [sp+30h] [bp-90h]@32
  char v64; // [sp+38h] [bp-88h]@32
  char v65; // [sp+44h] [bp-7Ch]@31
  int v66; // [sp+50h] [bp-70h]@29
  int v67; // [sp+54h] [bp-6Ch]@29
  int v68; // [sp+58h] [bp-68h]@29
  char v69; // [sp+5Ch] [bp-64h]@29
  __int16 v70; // [sp+5Eh] [bp-62h]@29
  int v71; // [sp+60h] [bp-60h]@26
  int v72; // [sp+68h] [bp-58h]@26
  int v73; // [sp+6Ch] [bp-54h]@26
  int v74; // [sp+70h] [bp-50h]@26
  int v75; // [sp+74h] [bp-4Ch]@26

  v4 = a3;
  v5 = *((_DWORD *)a2 + 35);
  v59 = a2;
  v6 = (char *)a2 + 76;
  v7 = 0;
  if ( 4 * v5 )
  {
    v8 = (int)&v6[4 * v5];
    v9 = 0;
    v10 = 0;
    v11 = v6;
    v57 = this;
    v58 = a4;
    v60 = (Weather *)&v6[4 * v5];
    v53 = v6;
    do
    {
      v12 = (_QWORD *)(*(_DWORD *)v11 + 10240);
      if ( v9 == (char *)v7 )
      {
        v13 = 0;
        v14 = (v9 - v10) >> 3;
        v15 = (v9 - v10) >> 3;
        if ( !v14 )
          v15 = 1;
        v16 = v15 + ((v9 - v10) >> 3);
        v17 = v15 + ((v9 - v10) >> 3);
        if ( 0 != v16 >> 29 )
          v17 = 0x1FFFFFFF;
        if ( v16 < v15 )
        if ( v17 )
        {
          v18 = v7;
          if ( v17 >= 0x20000000 )
            sub_21E57F4();
          v13 = (char *)j_operator new(8 * v17);
          v7 = v18;
        }
        *(_QWORD *)&v13[8 * v14] = *v12;
        if ( v10 == (char *)v7 )
          v10 = (char *)v7;
          v9 = v13;
          v8 = (int)v60;
        else
          v19 = 0;
          v20 = v10;
          do
          {
            *(_QWORD *)&v13[v19] = *(_QWORD *)v20;
            v21 = (int)&v10[v19];
            v19 += 8;
            v20 = (char *)(v21 + 8);
          }
          while ( v7 - (_DWORD)v10 != v19 );
          v9 = &v13[((v7 - 8 - (_DWORD)v10) & 0xFFFFFFF8) + 8];
        if ( v10 )
          j_operator delete(v10);
        v7 = (int)&v13[8 * v17];
        v10 = v13;
      }
      else
        *(_QWORD *)v9 = *v12;
      v11 += 4;
      v9 += 8;
    }
    while ( (char *)v8 != v11 );
  }
  else
  ptr = v10;
  v22 = (Dimension *)j_BlockSource::getDimension(v4);
  v61 = (Weather *)j_Dimension::getWeather(v22);
  v23 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  j_BlockPos::BlockPos((int)&v71, (__int64 *)v58, 0);
  __asm { VMOV.F32        S16, #26.0 }
  v28 = v72;
  __asm { VMOV.F32        S18, #8.0 }
  v55 = v72 + 15;
  v29 = v71;
  v30 = v59;
  v31 = v71 + 15;
  __asm
    VLDR            S20, =0.019231
    VLDR            S22, =-0.17
  v75 = v72;
  v56 = v71 + 15;
  while ( 1 )
    v73 = v29;
    if ( v29 <= v31 )
      do
        j_ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v69, (const BlockPos *)&v73);
        LevelChunk::getTopRainBlockPos((LevelChunk *)&v66, v30, &v69);
        v73 = v66;
        v74 = v67;
        v75 = v68;
        v70 = v23;
        _R11 = (Biome *)LevelChunk::getBiome(v30, (const ChunkBlockPos *)&v69);
        if ( Biome::canHaveSnowfall(_R11, v4, (const BlockPos *)&v73) == 1
          && Weather::canPlaceTopSnow(v61, v4, (const BlockPos *)&v73, 1, 0, 0) == 1 )
          j_Vec3::Vec3((int)&v65, (int)&v73);
          _R0 = PerlinSimplexNoise::getValue((Seasons *)((char *)v57 + 4), (const Vec3 *)&v65);
          __asm
            VMOV            S0, R0
            VLDR            S2, [R11,#0xD4]
            VADD.F32        S0, S0, S16
            VMUL.F32        S2, S2, S18
            VMUL.F32        S0, S0, S20
            VCVTR.S32.F32   S2, S2
            VADD.F32        S0, S0, S22
            VCVT.F32.S32    S2, S2
            VMUL.F32        S0, S2, S0
            VMOV            R0, S0
          _R0 = j_ceilf(_R0);
          __asm { VMOV            S0, R0 }
          v36 = dword_2803214;
          v37 = (_BYTE *)Facing::Plane::HORIZONTAL;
            VCVTR.S32.F32   S0, S0
            VMOV            R10, S0
          if ( !_ZF )
            do
            {
              j_BlockPos::relative((BlockPos *)&v64, (int)&v73, *v37, 1);
              j_BlockSource::getTopRainBlockPos((BlockSource *)&v62, v4, (const BlockPos *)&v64);
              if ( v63 <= v74 )
              {
                v39 = _R10;
                if ( v63 < v74 )
                  v39 = _R10 - 1;
                if ( _R10 > 1 )
                  _R10 = v39;
              }
              else
                ++_R10;
              ++v37;
            }
            while ( (_BYTE *)v36 != v37 );
            VLDR            S0, [R11,#0xD8]
            VMUL.F32        S0, S0, S18
          if ( _NF ^ _VF )
            _R10 = 0;
          __asm { VMOV            R0, S0 }
          if ( _R0 < 0 )
            _R10 = _R0;
          Weather::rebuildTopSnowToDepth(v61, v4, (const BlockPos *)&v73, _R10);
          v30 = v59;
          v23 = 0;
          v31 = v56;
        v41 = v73++;
      while ( v41 < v31 );
      v28 = v75;
    v75 = v28 + 1;
    if ( v28 >= v55 )
      break;
    v29 = v71;
    ++v28;
  _R2 = *((_DWORD *)v30 + 35);
  __asm { SBFX.W          R6, R2, #0, #0x1E }
  v44 = v9 - ptr;
  v45 = (v9 - ptr) >> 3;
  _CF = v45 >= 4 * _R2 >> 2;
  v46 = _R6;
  if ( !_CF )
    v46 = v44 >> 3;
  v47 = v53;
  if ( v46 )
    v48 = ~_R6;
    if ( ~v45 > ~_R6 )
      v48 = ~v45;
    v49 = ~v48;
    v50 = ptr;
      v51 = *(_DWORD *)v47;
      v47 += 4;
      --v49;
      v52 = *(_QWORD *)v50;
      v50 += 8;
      *(_QWORD *)(v51 + 10240) = v52;
    while ( v49 );
  if ( ptr )
    j_operator delete(ptr);
}


void __fastcall Seasons::postProcess(Seasons *this, LevelChunk *a2, BlockSource *a3, const ChunkPos *a4)
{
  Seasons::postProcess(this, a2, a3, a4);
}


Biome *__fastcall Seasons::tick(Seasons *this)
{
  Dimension **v1; // r4@1
  Level *v2; // r0@1
  unsigned __int64 *v3; // r0@1
  Biome *result; // r0@1
  int v5; // r1@2
  Weather *v6; // r8@2
  Biome *v11; // r5@2

  v1 = (Dimension **)this;
  v2 = (Level *)Dimension::getLevel(*(Dimension **)this);
  v3 = (unsigned __int64 *)j_Level::getGameRules(v2);
  result = (Biome *)j_GameRules::getBool(v3, (int **)&GameRules::DO_WEATHER_CYCLE);
  if ( result == (Biome *)1 )
  {
    v6 = (Weather *)j_Dimension::getWeather(*v1);
    __asm
    {
      VMOV.F32        S26, #1.0
      VLDR            S18, =0.002
      VLDR            S20, =0.08
      VLDR            S22, =0.05
    }
    v11 = 0;
    _R0 = &Biome::RAIN_TEMP_THRESHOLD;
      VLDR            S24, =0.0
      VLDR            S28, =0.001
      VLDR            S16, [R0]
      VLDR            S30, =0.04
      VLDR            S17, =-0.00005
      VLDR            S19, =-0.002
    do
      result = (Biome *)j_Biome::getBiome(v11, v5);
      _R6 = result;
      if ( result )
      {
        result = (Biome *)Weather::isRaining(v6);
        if ( result == (Biome *)1 )
        {
          _R0 = j_Biome::getDefaultBiomeTemperature(_R6);
          __asm
          {
            VMOV            S0, R0
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            _R4 = j_Weather::getRainLevel(v6, 0.0);
            __asm { VLDR            S21, [R6,#0xC8] }
            result = (Biome *)j_Weather::getRainLevel(v6, 0.0);
            __asm
            {
              VMOV            S0, R4
              VLDR            S6, [R6,#0xC8]
              VMOV            S2, R0
              VMUL.F32        S0, S0, S28
              VMUL.F32        S4, S2, S30
              VMUL.F32        S2, S0, S21
              VMUL.F32        S0, S4, S6
            }
          else
            _R7 = j_Biome::getDefaultBiomeTemperature(_R6);
              VLDR            S21, [R6,#0xC8]
              VMOV            S23, R7
            _R0 = j_Biome::getDefaultBiomeTemperature(_R6);
              VMOV            S0, R0
              VSUB.F32        S2, S16, S23
              VSUB.F32        S0, S16, S0
              VMOV            S27, R4
              VMUL.F32        S23, S2, S18
              VMUL.F32        S25, S0, S20
              VLDR            S4, [R6,#0xC8]
              VMUL.F32        S2, S23, S27
              VMUL.F32        S0, S25, S0
              VMUL.F32        S2, S2, S21
              VMUL.F32        S0, S0, S4
            VMUL.F32        S2, S2, S22
            VLDR            S4, [R6,#0xCC]
            VLDR            S6, [R6,#0xD4]
            VMUL.F32        S0, S0, S22
            VLDR            S8, [R6,#0xD8]
            VADD.F32        S2, S4, S2
            VCMPE.F32       S2, S6
            VCMPE.F32       S2, S8
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S6, S2 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S6, S8 }
            VSTR            S6, [R6,#0xCC]
            VLDR            S2, [R6,#0xD0]
            VADD.F32        S0, S2, S0
        }
        else
            VLDR            S0, [R6,#0xCC]
            VLDR            S2, [R6,#0xD4]
            VADD.F32        S0, S0, S17
            VLDR            S4, [R6,#0xD8]
            VCMPE.F32       S0, S2
            VCMPE.F32       S0, S4
            __asm { VMOVGT.F32      S2, S0 }
            __asm { VMOVGT.F32      S2, S4 }
            VSTR            S2, [R6,#0xCC]
            VLDR            S0, [R6,#0xD0]
            VADD.F32        S0, S0, S19
        __asm
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
          VMOV.F32        S2, S24
          VCMPE.F32       S0, S26
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S2, S0 }
        __asm { VMRS            APSR_nzcv, FPSCR }
          __asm { VMOVGT.F32      S2, S26 }
        __asm { VSTR            S2, [R6,#0xD0] }
      }
      v11 = (Biome *)((char *)v11 + 1);
    while ( v11 != (Biome *)256 );
  }
  return result;
}
