

int __fastcall MesaBiome::MesaBiome(int a1, int a2, char a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  char v6; // r6@1
  int v7; // r7@1
  _DWORD *v8; // r5@1
  __int64 v9; // r2@3
  __int64 v10; // kr00_8@3
  __int64 v11; // r1@3
  int v12; // r0@3
  _DWORD *v14; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = operator new(0x100u);
  _aeabi_memclr4(v8, 256);
  BiomeDecorator::BiomeDecorator(v8);
  v14 = v8;
  *v8 = &off_2704048;
  Biome::Biome(v4, v7, 8, (int *)&v14);
  if ( v14 )
    (*(void (**)(void))(*v14 + 12))();
  v14 = 0;
  *(_DWORD *)v4 = &off_2703FD4;
  *(_BYTE *)(v4 + 280) = v6;
  *(_BYTE *)(v4 + 281) = v5;
  *(_DWORD *)(v4 + 348) = 0;
  *(_DWORD *)(v4 + 352) = 0;
  *(_DWORD *)(v4 + 356) = 0;
  Biome::setNoRain((Biome *)v4);
  LODWORD(v9) = 0;
  Biome::setTemperatureAndDownfall((Biome *)v4, 2.0, v9);
  v10 = *(_QWORD *)(v4 + 140);
  std::_Destroy<MobSpawnerData *>(*(_QWORD *)(v4 + 140), SHIDWORD(v10));
  HIDWORD(v11) = 5;
  *(_DWORD *)(v4 + 144) = v10;
  *(_BYTE *)(v4 + 188) = *(_BYTE *)(Block::mSand + 4);
  *(_BYTE *)(v4 + 189) = 1;
  *(_BYTE *)(v4 + 190) = *(_BYTE *)(Block::mHardenedClay + 4);
  v12 = *(_DWORD *)(v4 + 124);
  *(_DWORD *)(v12 + 208) = -998653952;
  *(_DWORD *)(v12 + 220) = 20;
  LODWORD(v11) = 3;
  *(_QWORD *)(v12 + 228) = v11;
  *(_DWORD *)(v12 + 212) = 0;
  if ( v5 == 1 )
    *(_DWORD *)(v12 + 208) = 1084227584;
  return v4;
}


unsigned int __fastcall MesaBiome::generateBands(MesaBiome *this, unsigned int a2, int a3, int a4)
{
  MesaBiome *v4; // r11@1
  unsigned int v5; // r5@1
  signed int v6; // r1@1
  int v7; // r0@1
  int v8; // r6@2
  int v9; // r3@2
  int *v10; // r6@2
  PerlinSimplexNoise *v11; // r5@3
  PerlinSimplexNoise *v12; // r0@3
  PerlinSimplexNoise *v13; // r0@4
  unsigned int v14; // r6@5
  signed int v15; // r5@5
  unsigned int v16; // r0@6
  bool v17; // nf@6
  unsigned int v18; // r7@9
  int v19; // r6@9
  char v20; // r0@10
  int v21; // r3@10
  int v22; // r1@10
  unsigned int v23; // r0@10
  unsigned int v24; // r6@13
  int v25; // r7@13
  char v26; // r0@14
  int v27; // r3@14
  int v28; // r1@14
  unsigned int v29; // r0@14
  unsigned int v30; // r7@17
  int v31; // r6@17
  char v32; // r0@18
  int v33; // r3@18
  int v34; // r1@18
  unsigned int v35; // r0@18
  int v36; // r6@21
  signed int v37; // r7@21
  unsigned int result; // r0@22
  int v39; // r5@23
  unsigned int v40; // [sp+0h] [bp-9F8h]@1
  unsigned int v41; // [sp+4h] [bp-9F4h]@1
  int v42; // [sp+9C4h] [bp-34h]@1
  char v43; // [sp+9C8h] [bp-30h]@1
  int v44; // [sp+9CCh] [bp-2Ch]@1
  int v45; // [sp+9D0h] [bp-28h]@3

  v4 = this;
  v5 = a2;
  _aeabi_memset((char *)this + 282, 64, 16, a4);
  v40 = v5;
  v6 = 1;
  v42 = 625;
  v7 = 0;
  v43 = 0;
  v44 = 0;
  v41 = v5;
  do
  {
    v8 = v5 ^ (v5 >> 30);
    v5 = v6++ + 1812433253 * v8;
    v9 = v7 + 1812433253 * v8;
    v10 = (int *)(&v40 + v7++);
    v10[2] = v9 + 1;
  }
  while ( v7 != 397 );
  v42 = 624;
  v45 = 398;
  v11 = (PerlinSimplexNoise *)operator new(0x14u);
  PerlinSimplexNoise::PerlinSimplexNoise(v11, (Random *)&v40, 1);
  v12 = (PerlinSimplexNoise *)*((_DWORD *)v4 + 89);
  *((_DWORD *)v4 + 89) = v11;
  if ( v12 )
    v13 = PerlinSimplexNoise::~PerlinSimplexNoise(v12);
    operator delete((void *)v13);
  v14 = Random::_genRandInt32((Random *)&v40);
  v15 = 0;
    v16 = v14 % 5 + v15 + 1;
    v17 = ((v14 % 5 + v15 - 62) & 0x80000000) != 0;
    v15 += v14 % 5 + 2;
    if ( (unsigned __int8)(v17 ^ __OFSUB__(v16, 63)) | (v16 == 63) )
      *((_BYTE *)v4 + v16 + 282) = 1;
    v14 = Random::_genRandInt32((Random *)&v40);
  while ( v15 < 64 );
  v18 = Random::_genRandInt32((Random *)&v40);
  v19 = (v14 & 3) + 2;
    v20 = Random::_genRandInt32((Random *)&v40);
    v22 = v20 & 0x3F;
    v23 = *(_DWORD *)&v20 | 0xFFFFFFC0;
    if ( v23 < ~(v18 % 3) )
      v23 = ~(v18 % 3);
    _aeabi_memset((char *)v4 + v22 + 282, -v23, 4, v21);
    --v19;
    v18 = Random::_genRandInt32((Random *)&v40);
  while ( v19 );
  v24 = Random::_genRandInt32((Random *)&v40);
  v25 = (v18 & 3) + 2;
    v26 = Random::_genRandInt32((Random *)&v40);
    v28 = v26 & 0x3F;
    v29 = *(_DWORD *)&v26 | 0xFFFFFFC0;
    if ( -2 - v24 % 3 > v29 )
      v29 = -2 - v24 % 3;
    _aeabi_memset((char *)v4 + v28 + 282, -v29, 12, v27);
    --v25;
    v24 = Random::_genRandInt32((Random *)&v40);
  while ( v25 );
  v30 = Random::_genRandInt32((Random *)&v40) % 3;
  v31 = (v24 & 3) + 2;
    v32 = Random::_genRandInt32((Random *)&v40);
    v34 = v32 & 0x3F;
    v35 = *(_DWORD *)&v32 | 0xFFFFFFC0;
    if ( v35 < ~v30 )
      v35 = ~v30;
    _aeabi_memset((char *)v4 + v34 + 282, -v35, 14, v33);
    --v31;
    v30 = Random::_genRandInt32((Random *)&v40) % 3;
  while ( v31 );
  v36 = v30 + 3;
  v37 = 0;
    result = (Random::_genRandInt32((Random *)&v40) & 0xF) + v37;
    v37 = result + 4;
    if ( (signed int)(result + 4) <= 63 )
    {
      v39 = (int)v4 + v37;
      *((_BYTE *)v4 + v37 + 282) = 0;
      if ( v37 <= 1 )
        goto LABEL_32;
      result = Random::_genRandInt32((Random *)&v40);
      if ( result & 0x8000000 )
        *(_BYTE *)(v39 + 281) = 8;
      if ( v37 <= 62 )
      {
LABEL_32:
        result = Random::_genRandInt32((Random *)&v40);
        if ( result & 0x8000000 )
          *(_BYTE *)(v39 + 283) = 8;
      }
    }
    --v36;
  while ( v36 );
  return result;
}


signed int __fastcall MesaBiome::getFoliageColor(MesaBiome *this, const BlockPos *a2)
{
  return -5331926;
}


int __fastcall MesaBiome::getTreeFeature(MesaBiome *this, Random *a2)
{
  return *((_DWORD *)this + 31) + 112;
}


void __fastcall MesaBiome::refreshBiome(MesaBiome *this, unsigned int a2, int a3, int a4)
{
  MesaBiome::refreshBiome(this, a2, a3, a4);
}


signed int __fastcall MesaBiome::getGrassColor(MesaBiome *this, const BlockPos *a2)
{
  return -7306931;
}


int __fastcall MesaBiome::getBand(MesaBiome *this, int _R1, int a3, int _R3)
{
  int v8; // r5@1
  MesaBiome *v9; // r4@1

  __asm
  {
    VMOV            S0, R1
    VLDR            S4, =0.0019531
    VMOV            S2, R3
  }
  v8 = a3;
  __asm { VCVT.F32.S32    S0, S0 }
  v9 = this;
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VMOV            R1, S0
    VMOV            R2, S2
  _R0 = PerlinSimplexNoise::getValue(*((PerlinSimplexNoise **)this + 89), _R1, _R2);
    VMOV            S0, R0
    VADD.F32        S0, S0, S0
    VMOV            R0, S0
  _R0 = nearbyintf(_R0);
    VCVTR.S32.F32   S0, S0
  return *((_BYTE *)v9 + (_R0 + v8 + 64) % 64 + 282);
}


void __fastcall MesaBiome::Decorator::~Decorator(MesaBiome::Decorator *this)
{
  MesaBiome::Decorator::~Decorator(this);
}


void __fastcall MesaBiome::~MesaBiome(MesaBiome *this)
{
  MesaBiome::~MesaBiome(this);
}


void __fastcall MesaBiome::Decorator::~Decorator(MesaBiome::Decorator *this)
{
  BiomeDecorator *v1; // r0@1

  v1 = BiomeDecorator::~BiomeDecorator(this);
  j_j_j__ZdlPv_6((void *)v1);
}


Biome *__fastcall MesaBiome::~MesaBiome(MesaBiome *this)
{
  MesaBiome *v1; // r4@1
  PerlinSimplexNoise *v2; // r0@1
  PerlinSimplexNoise *v3; // r0@2
  PerlinSimplexNoise *v4; // r0@3
  PerlinSimplexNoise *v5; // r0@4
  PerlinSimplexNoise *v6; // r0@5
  PerlinSimplexNoise *v7; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2703FD4;
  v2 = (PerlinSimplexNoise *)*((_DWORD *)this + 89);
  if ( v2 )
  {
    v3 = PerlinSimplexNoise::~PerlinSimplexNoise(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 89) = 0;
  v4 = (PerlinSimplexNoise *)*((_DWORD *)v1 + 88);
  if ( v4 )
    v5 = PerlinSimplexNoise::~PerlinSimplexNoise(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 88) = 0;
  v6 = (PerlinSimplexNoise *)*((_DWORD *)v1 + 87);
  if ( v6 )
    v7 = PerlinSimplexNoise::~PerlinSimplexNoise(v6);
    operator delete((void *)v7);
  *((_DWORD *)v1 + 87) = 0;
  return j_j_j__ZN5BiomeD2Ev_0(v1);
}


void __fastcall MesaBiome::~MesaBiome(MesaBiome *this)
{
  MesaBiome *v1; // r4@1
  PerlinSimplexNoise *v2; // r0@1
  PerlinSimplexNoise *v3; // r0@2
  PerlinSimplexNoise *v4; // r0@3
  PerlinSimplexNoise *v5; // r0@4
  PerlinSimplexNoise *v6; // r0@5
  PerlinSimplexNoise *v7; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2703FD4;
  v2 = (PerlinSimplexNoise *)*((_DWORD *)this + 89);
  if ( v2 )
  {
    v3 = PerlinSimplexNoise::~PerlinSimplexNoise(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 89) = 0;
  v4 = (PerlinSimplexNoise *)*((_DWORD *)v1 + 88);
  if ( v4 )
    v5 = PerlinSimplexNoise::~PerlinSimplexNoise(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 88) = 0;
  v6 = (PerlinSimplexNoise *)*((_DWORD *)v1 + 87);
  if ( v6 )
    v7 = PerlinSimplexNoise::~PerlinSimplexNoise(v6);
    operator delete((void *)v7);
  *((_DWORD *)v1 + 87) = 0;
  Biome::~Biome(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall MesaBiome::buildSurfaceAt(float a1, int a2, int a3, const BlockPos *a4, int a5, signed int a6)
{
  int v7; // r5@1
  Random *v8; // r7@1
  float v9; // r4@1
  float v22; // r1@5
  int v25; // r8@10
  signed __int16 v27; // r7@10
  signed int v28; // r9@10
  _DWORD *v33; // r6@10
  int *v34; // r7@11
  int v35; // r1@14
  int v36; // r4@14
  int v37; // r3@21
  int v38; // r7@21
  int v39; // r1@21
  unsigned int v40; // r0@21
  int v41; // r1@21
  char v42; // r7@21
  char v43; // r3@21
  _DWORD *v44; // r8@26
  int v46; // r6@28
  int v47; // r1@28
  int v48; // r2@28
  int v51; // ST44_4@29
  int v57; // r12@29
  __int64 v58; // kr08_8@29
  int v59; // r7@29
  int v60; // r4@29
  unsigned int v62; // r0@29
  unsigned int v63; // r7@30
  int v64; // r1@30
  unsigned int v65; // r2@30
  char v66; // r3@30
  int v67; // r4@39
  int v68; // r2@39
  __int64 v69; // kr10_8@42
  unsigned int v70; // r0@43
  int v71; // r1@43
  char v72; // r3@43
  char v73; // r4@43
  char v74; // r3@43
  int v75; // r1@49
  int v76; // r0@49
  BlockState *v77; // r0@49
  __int64 v78; // r6@49
  int v79; // r0@49
  unsigned int v80; // r4@49
  char v81; // r2@49
  int v82; // r2@50
  unsigned int v83; // r1@53
  int v91; // r3@62
  int v92; // r7@62
  int v93; // r2@62
  unsigned int v94; // r7@62
  int v95; // r0@62
  char v96; // r3@62
  char v97; // r0@67
  __int64 v98; // kr20_8@68
  unsigned int v99; // r7@69
  int v100; // r0@69
  unsigned int v101; // r2@69
  char v102; // r3@69
  int result; // r0@75
  int v104; // [sp+Ch] [bp-94h]@10
  char v105; // [sp+10h] [bp-90h]@10
  int v106; // [sp+18h] [bp-88h]@10
  int v107; // [sp+24h] [bp-7Ch]@2
  const BlockPos *v108; // [sp+28h] [bp-78h]@10
  int v109; // [sp+34h] [bp-6Ch]@10
  float v110; // [sp+38h] [bp-68h]@10
  int v111; // [sp+3Ch] [bp-64h]@10
  int v112; // [sp+40h] [bp-60h]@10
  char v113; // [sp+44h] [bp-5Ch]@10
  int v114; // [sp+48h] [bp-58h]@10
  signed int v115; // [sp+4Ch] [bp-54h]@10
  signed int v116; // [sp+50h] [bp-50h]@10
  unsigned __int16 v117; // [sp+54h] [bp-4Ch]@10
  unsigned __int16 v118; // [sp+56h] [bp-4Ah]@10

  _R6 = a4;
  v7 = a3;
  v8 = (Random *)a2;
  v9 = a1;
  Biome::_placeBedrock(SLODWORD(a1), (Random *)a2, a3, a4);
  __asm { VLDR            S16, [SP,#0xA0+arg_0] }
  if ( *(_BYTE *)(LODWORD(v9) + 280) )
  {
    __asm { VLDR            S0, [R6] }
    _R0 = *((_DWORD *)_R6 + 2);
    __asm { VMOV.F32        S2, #0.25 }
    v107 = (int)_R6 + 8;
    __asm
    {
      VMOV            S4, R0
      VCVT.F32.S32    S20, S4
      VCVT.F32.S32    S22, S0
      VMUL.F32        S0, S20, S2
      VMUL.F32        S2, S22, S2
      VMOV            R2, S0
      VMOV            R1, S2
    }
    _R0 = PerlinSimplexNoise::getValue(*(PerlinSimplexNoise **)(LODWORD(v9) + 348), _R1, _R2);
      VABS.F32        S0, S16
      VMOV            S18, R0
      VCMPE.F32       S0, S18
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S18, S0 }
      VCMPE.F32       S18, #0.0
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      _R0 = 0;
    else
      __asm
      {
        VLDR            S0, =0.0019531
        VMUL.F32        S2, S22, S0
        VMUL.F32        S0, S20, S0
        VMOV            R1, S2
        VMOV            R2, S0
      }
      _R0 = PerlinSimplexNoise::getValue(*(PerlinSimplexNoise **)(LODWORD(v9) + 352), _R1, _R2) & 0x7FFFFFFF;
        VLDR            S0, =50.0
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
        VMOV            R0, S0
      _R0 = mce::Math::ceil(_R0, v22);
        VMOV            S6, R0
        VMOV.F32        S0, #2.5
        VMUL.F32        S2, S18, S18
        VMOV.F32        S4, #14.0
        VCVT.F32.S32    S6, S6
        VADD.F32        S2, S6, S4
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S2 }
        VLDR            S2, =64.0
        VADD.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
  }
  else
    _R0 = 0;
  v116 = _R0;
  v108 = _R6;
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v117, _R6);
  v109 = *(_BYTE *)(LODWORD(v9) + 190);
  v110 = v9;
  v105 = *(_BYTE *)(Block::mHardenedClay + 4);
  v25 = *(_BYTE *)(Block::mStainedClay + 4);
  v114 = *(_BYTE *)(Block::mStainedClay + 4);
  _R0 = Random::_genRandInt32(v8);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV.F32        S6, #3.0
    VCVT.F64.U32    D0, S0
  v27 = 127;
  v28 = 0;
  _R0 = &mce::Math::PI;
  v118 = 127;
    VLDR            S4, =0.33333
    VMOV.F32        S8, #0.25
    VMUL.F64        D0, D0, D1
    VMUL.F32        S2, S16, S4
    VLDR            S4, [R0]
    VCVT.F32.F64    S0, D0
    VMUL.F32        S4, S4, S2
    VADD.F32        S2, S2, S6
    VMUL.F32        S0, S0, S8
    VMOV            R0, S4
    VADD.F32        S0, S2, S0
    VCVTR.S32.F32   S18, S0
  _R0 = cosf(_R0);
  __asm { VMOV            S16, R0 }
  v111 = v25;
    VMOV            R0, S18
    VLDR            S18, =0.0019531
  v112 = _R0;
  v106 = 2 * _R0 + 86;
  v104 = _R0 + a6 + 3;
  v115 = -1;
  v33 = &Block::mStone;
  v113 = 0;
  do
    result = v27
           + (HIBYTE(v117) + (unsigned __int8)v117 * (unsigned int)*(_QWORD *)(v7 + 16)) * (*(_QWORD *)(v7 + 16) >> 32);
    v36 = *(_BYTE *)(*(_DWORD *)v7 + result);
    if ( v36 == *(_BYTE *)(Block::mBedrock + 4) )
      break;
    v34 = (int *)Block::getMaterial((Block *)Block::mBlocks[v36]);
    if ( (Material::isType(v34, 0) || Material::isType(v34, 5) == 1) && (signed __int16)v118 < v116 )
      v35 = *v33;
      *(_BYTE *)(*(_DWORD *)v7
               + (signed __int16)v118
               + (HIBYTE(v117) + (unsigned __int8)v117 * (unsigned int)*(_QWORD *)(v7 + 16))
               * (*(_QWORD *)(v7 + 16) >> 32)) = *(_BYTE *)(*v33 + 4);
      v36 = *(_BYTE *)(v35 + 4);
    if ( v28 > 14 )
      goto LABEL_75;
    if ( v36 )
      if ( v36 == *(_BYTE *)(*v33 + 4) )
        if ( v115 != -1 )
        {
          if ( v115 >= 1 )
          {
            --v115;
            if ( v113 & 1 )
            {
              v38 = *(_QWORD *)(v7 + 16) >> 32;
              v37 = *(_QWORD *)(v7 + 16);
              v39 = (signed __int16)v118;
              *(_BYTE *)(*(_DWORD *)v7 + (signed __int16)v118 + (HIBYTE(v117) + (unsigned __int8)v117 * v37) * v38) = v114;
              v40 = v39 + ((unsigned __int8)v117 * v37 + ((unsigned int)v117 >> 8)) * v38;
              v41 = *(_DWORD *)(v7 + 8);
              LOBYTE(v37) = *(_BYTE *)(v41 + (v40 >> 1));
              v42 = v37 & 0xF0;
              v43 = v37 & 0xF | 0x10;
              v113 = 1;
              if ( !(v40 & 1) )
                v43 = v42 | 1;
              *(_BYTE *)(v41 + (v40 >> 1)) = v43;
              goto LABEL_74;
            }
            _R0 = v108;
            __asm { VLDR            S0, [R0] }
            _R0 = v107;
            __asm
              VLDR            S2, [R0]
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
            v51 = (signed __int16)v118;
              VMUL.F32        S0, S0, S18
              VMUL.F32        S2, S2, S18
              VMOV            R1, S0
              VMOV            R2, S2
            _R0 = PerlinSimplexNoise::getValue(*(PerlinSimplexNoise **)(LODWORD(v110) + 356), _R1, _R2);
              VMOV            S0, R0
              VADD.F32        S0, S0, S0
              VMOV            R0, S0
            _R0 = nearbyintf(_R0);
            v57 = *(_DWORD *)v7;
            __asm { VMOV            S0, R0 }
            v58 = *(_QWORD *)(v7 + 16);
            v59 = (signed __int16)v118;
            __asm { VCVTR.S32.F32   S0, S0 }
            v60 = (signed __int16)v118 + (HIBYTE(v117) + (unsigned __int8)v117 * (_DWORD)v58) * HIDWORD(v58);
            __asm { VMOV            R0, S0 }
            v62 = *(_BYTE *)((_R0 + v51 + 64) % 64 + LODWORD(v110) + 282);
            if ( v62 <= 0xF )
              *(_BYTE *)(v57 + v60) = v114;
              v63 = v59 + (v58 * (unsigned __int8)v117 + ((unsigned int)v117 >> 8)) * HIDWORD(v58);
              v64 = *(_DWORD *)(v7 + 8);
              v65 = v63 >> 1;
              v66 = *(_BYTE *)(v64 + (v63 >> 1));
              if ( v63 & 1 )
                *(_BYTE *)(v64 + v65) = v66 & 0xF | 16 * v62;
              else
                *(_BYTE *)(v64 + v65) = v62 & 0xF | v66 & 0xF0;
              goto LABEL_72;
LABEL_71:
            *(_BYTE *)(v57 + v60) = v105;
            goto LABEL_72;
          }
LABEL_74:
          ++v28;
          goto LABEL_75;
        }
        if ( v112 <= 0 )
          v44 = v33;
          _R0 = v118;
          v46 = v36;
          v48 = BlockID::AIR;
          v47 = v114;
        else
          if ( (signed __int16)v118 < a6 - 4 || (signed __int16)v118 > a6 + 1 )
            v47 = v114;
            v46 = v109;
            v48 = v111;
          else
            v46 = *(_BYTE *)(LODWORD(v110) + 190);
            v48 = v114;
        if ( (_BYTE)v48 )
          v111 = v48;
          v114 = v47;
          if ( (signed __int16)_R0 < a6 )
            v111 = *(_BYTE *)(Block::mStillWater + 4);
        v67 = (signed __int16)_R0;
        v68 = v112;
        if ( (signed __int16)_R0 - a6 > 0 )
          v68 = v112 + (signed __int16)_R0 - a6;
        if ( (signed __int16)_R0 < a6 - 1 )
          v115 = v68;
          v69 = *(_QWORD *)(v7 + 16);
          *(_BYTE *)(*(_DWORD *)v7
                   + (signed __int16)_R0
                   + (HIBYTE(v117) + (unsigned __int8)v117 * (_DWORD)v69) * HIDWORD(v69)) = v46;
          if ( (unsigned __int8)v46 == v114 )
            v70 = (signed __int16)_R0 + (v69 * (unsigned __int8)v117 + ((unsigned int)v117 >> 8)) * HIDWORD(v69);
            v71 = *(_DWORD *)(v7 + 8);
            v72 = *(_BYTE *)(v71 + (v70 >> 1));
            v73 = v72 & 0xF0;
            v74 = v72 & 0xF | 0x10;
            if ( !(v70 & 1) )
              v74 = v73 | 1;
            v113 = 0;
            *(_BYTE *)(v71 + (v70 >> 1)) = v74;
            v33 = v44;
            v109 = v114;
            goto LABEL_74;
          v109 = v46;
          goto LABEL_61;
        if ( *(_BYTE *)(LODWORD(v110) + 281) && (signed __int16)_R0 > v106 )
          __asm
            VCMPE.F32       S16, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            v115 = v68;
            v109 = v46;
            *(_BYTE *)(*(_DWORD *)v7
                     + (signed __int16)_R0
                     + (HIBYTE(v117) + (unsigned __int8)v117 * (unsigned int)*(_QWORD *)(v7 + 16))
                     * (*(_QWORD *)(v7 + 16) >> 32)) = *(_BYTE *)(Block::mGrass + 4);
LABEL_61:
          v75 = (signed __int16)_R0
              + (HIBYTE(v117) + (unsigned __int8)v117 * (unsigned int)*(_QWORD *)(v7 + 16))
              * (*(_QWORD *)(v7 + 16) >> 32);
          v76 = Block::mDirt;
          *(_BYTE *)(*(_DWORD *)v7 + v75) = *(_BYTE *)(Block::mDirt + 4);
          v77 = (BlockState *)Block::getBlockState(v76, 24);
          v78 = *(_QWORD *)v77;
          BlockState::getMask(v77);
          v79 = *(_DWORD *)(v7 + 8);
          v80 = (signed __int16)v118
              + (*(_QWORD *)(v7 + 16) * (unsigned __int8)v117 + ((unsigned int)v117 >> 8))
          v81 = *(_BYTE *)(v79 + (v80 >> 1));
          if ( v80 & 1 )
            v82 = v81 & 0xF | 16 * (1 << (v78 + 1 - BYTE4(v78)));
            v82 = (unsigned __int8)(v81 & 0xF0) | (1 << (v78 + 1 - BYTE4(v78))) & 0xF;
          v33 = v44;
          *(_BYTE *)(v79 + (v80 >> 1)) = v82;
LABEL_72:
          v97 = 0;
          if ( (signed __int16)_R0 > v104 )
            v83 = 16;
            if ( (_R0 & 0xFFFFFFC0) != 64 )
              v83 = 1;
              VCMPE.F32       S16, #0.0
              VMRS            APSR_nzcv, FPSCR
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              v33 = v44;
              if ( (_R0 & 0xFFFFFFC0) == 64 )
              {
                _R0 = v108;
                __asm { VLDR            S0, [R0] }
                _R0 = v107;
                __asm
                {
                  VLDR            S2, [R0]
                  VCVT.F32.S32    S0, S0
                  VCVT.F32.S32    S2, S2
                  VMUL.F32        S0, S0, S18
                  VMUL.F32        S2, S2, S18
                  VMOV            R1, S0
                  VMOV            R2, S2
                }
                _R0 = PerlinSimplexNoise::getValue(*(PerlinSimplexNoise **)(LODWORD(v110) + 356), _R1, _R2);
                  VMOV            S0, R0
                  VADD.F32        S0, S0, S0
                  VMOV            R0, S0
                _R0 = nearbyintf(_R0);
                  VCVTR.S32.F32   S0, S0
                LOWORD(_R0) = v118;
                __asm { VMOV            R1, S0 }
                v83 = *(_BYTE *)((_R1 + v67 + 64) % 64 + LODWORD(v110) + 282);
              }
            else
            _R0 = (signed __int16)_R0;
            v98 = *(_QWORD *)(v7 + 16);
            v60 = (signed __int16)_R0 + (HIBYTE(v117) + (unsigned __int8)v117 * (_DWORD)v98) * HIDWORD(v98);
            if ( v83 > 0xF )
              goto LABEL_71;
            *(_BYTE *)(v57 + v60) = v114;
            v99 = _R0 + (v98 * (unsigned __int8)v117 + ((unsigned int)v117 >> 8)) * HIDWORD(v98);
            v100 = *(_DWORD *)(v7 + 8);
            v101 = v99 >> 1;
            v102 = *(_BYTE *)(v100 + (v99 >> 1));
            if ( v99 & 1 )
              *(_BYTE *)(v100 + v101) = v102 & 0xF | 16 * v83;
              *(_BYTE *)(v100 + v101) = v83 & 0xF | v102 & 0xF0;
          v92 = *(_QWORD *)(v7 + 16) >> 32;
          v91 = *(_QWORD *)(v7 + 16);
          *(_BYTE *)(*(_DWORD *)v7 + (signed __int16)_R0 + (HIBYTE(v117) + (unsigned __int8)v117 * v91) * v92) = *(_BYTE *)(LODWORD(v110) + 188);
          v93 = *(_BYTE *)(LODWORD(v110) + 189);
          v94 = (signed __int16)_R0 + ((unsigned __int8)v117 * v91 + ((unsigned int)v117 >> 8)) * v92;
          v95 = *(_DWORD *)(v7 + 8);
          v96 = *(_BYTE *)(v95 + (v94 >> 1));
          if ( v94 & 1 )
            v93 = v96 & 0xF | 16 * v93;
            LOBYTE(v93) = v93 & 0xF | v96 & 0xF0;
          *(_BYTE *)(v95 + (v94 >> 1)) = v93;
          v97 = 1;
        v113 = v97;
        goto LABEL_74;
      v115 = -1;
LABEL_75:
    result = v118 - 1;
    v118 = result;
    v27 = result;
  while ( (signed __int16)result > 0 );
  return result;
}


int __fastcall MesaBiome::createMutatedCopy(MesaBiome *this, int a2, int a3)
{
  MesaBiome *v3; // r8@1
  int v4; // r10@1
  char v5; // r5@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r6@1
  void *v9; // r9@3
  void *v10; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  void *v13; // r0@9
  int result; // r0@10
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int v17; // [sp+0h] [bp-40h]@4
  int v18; // [sp+4h] [bp-3Ch]@9

  v3 = this;
  v4 = a2;
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 268);
  v7 = a3;
  v8 = *(_DWORD *)(Biome::mesa + 268);
  if ( v6 == v8 )
    v5 = 1;
  v9 = operator new(0x168u);
  MesaBiome::MesaBiome((int)v9, v7, v5, *(_BYTE *)(v4 + 281));
  {
    sub_21E8AF4(&v17, (int *)(v4 + 176));
    sub_21E7408((const void **)&v17, " (Bryce)", 8u);
    Biome::setName((int)v9, &v17);
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
  }
  else
    Biome::setDepthAndScale((int)v9, (int)&Biome::HEIGHTS_MOUNTAINS);
    sub_21E8AF4(&v18, (int *)(v4 + 176));
    sub_21E7408((const void **)&v18, " M", 2u);
    Biome::setName((int)v9, &v18);
    v13 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v18 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  result = (*(int (__fastcall **)(void *, _DWORD, signed int))(*(_DWORD *)v9 + 4))(v9, *(_DWORD *)(v4 + 180), 1);
  *(_DWORD *)v3 = v9;
  return result;
}


void __fastcall MesaBiome::refreshBiome(MesaBiome *this, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r5@1
  MesaBiome *v5; // r8@1
  int v6; // r0@1
  signed int v7; // r1@1
  int v8; // r5@2
  int *v9; // r7@2
  int v10; // r6@2
  PerlinSimplexNoise *v11; // r5@3
  PerlinSimplexNoise *v12; // r0@3
  PerlinSimplexNoise *v13; // r0@4
  PerlinSimplexNoise *v14; // r5@5
  PerlinSimplexNoise *v15; // r0@5
  PerlinSimplexNoise *v16; // r0@6
  unsigned int v17; // [sp+4h] [bp-9ECh]@1
  unsigned int v18; // [sp+8h] [bp-9E8h]@1
  int v19; // [sp+9C8h] [bp-28h]@1
  char v20; // [sp+9CCh] [bp-24h]@1
  int v21; // [sp+9D0h] [bp-20h]@1
  int v22; // [sp+9D4h] [bp-1Ch]@3

  v4 = a2;
  v5 = this;
  MesaBiome::generateBands(this, a2, a3, a4);
  v17 = v4;
  v19 = 625;
  v6 = 0;
  v7 = 1;
  v20 = 0;
  v21 = 0;
  v18 = v4;
  do
  {
    v8 = v4 ^ (v4 >> 30);
    v9 = (int *)(&v17 + v6);
    v10 = v6++ + 1812433253 * v8;
    v4 = v7++ + 1812433253 * v8;
    v9[2] = v10 + 1;
  }
  while ( v6 != 397 );
  v19 = 624;
  v22 = 398;
  v11 = (PerlinSimplexNoise *)operator new(0x14u);
  PerlinSimplexNoise::PerlinSimplexNoise(v11, (Random *)&v17, 4);
  v12 = (PerlinSimplexNoise *)*((_DWORD *)v5 + 87);
  *((_DWORD *)v5 + 87) = v11;
  if ( v12 )
    v13 = PerlinSimplexNoise::~PerlinSimplexNoise(v12);
    operator delete((void *)v13);
  v14 = (PerlinSimplexNoise *)operator new(0x14u);
  PerlinSimplexNoise::PerlinSimplexNoise(v14, (Random *)&v17, 1);
  v15 = (PerlinSimplexNoise *)*((_DWORD *)v5 + 88);
  *((_DWORD *)v5 + 88) = v14;
  if ( v15 )
    v16 = PerlinSimplexNoise::~PerlinSimplexNoise(v15);
    operator delete((void *)v16);
}


unsigned int __fastcall MesaBiome::Decorator::decorateOres(MesaBiome::Decorator *this, BlockSource *a2, Random *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  Random *v5; // r5@1
  BlockSource *v6; // r6@1
  MesaBiome::Decorator *v7; // r7@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  BiomeDecorator::decorateOres(this, a2, a3, a4);
  return BiomeDecorator::decorateDepthSpan((int)v7, (int)v6, v5, (int)v4, 20, (int)v7 + 44, 32, 80);
}
