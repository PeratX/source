

int __fastcall TheEndGenerator::findNearestFeature(ChunkSource *a1, char a2, const BlockPos *a3, BlockPos *a4)
{
  ChunkSource *v4; // r6@1
  BlockPos *v5; // r4@1
  const BlockPos *v6; // r5@1
  int result; // r0@2
  Dimension *v8; // r0@3

  v4 = a1;
  v5 = a4;
  v6 = a3;
  if ( a2 == 1 )
  {
    v8 = (Dimension *)ChunkSource::getDimension(a1);
    result = EndCityFeature::getNearestGeneratedFeature((ChunkSource *)((char *)v4 + 88), v8, v6, v5);
  }
  else
    result = 0;
  return result;
}


int __fastcall TheEndGenerator::getFeatureTypeAt(TheEndGenerator *this, const BlockPos *a2)
{
  return StructureFeature::isInsideBoundingFeature(
           (TheEndGenerator *)((char *)this + 88),
           *(_QWORD *)a2,
           *(_QWORD *)a2 >> 32,
           *((_DWORD *)a2 + 2));
}


void __fastcall TheEndGenerator::postProcessMobsAt(__int64 this, int a2, int a3, Random *a4)
{
  TheEndGenerator::postProcessMobsAt(this, a2, a3, a4);
}


void __fastcall TheEndGenerator::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3)
{
  TheEndGenerator::garbageCollectBlueprints(a1, a2, a3);
}


void __fastcall TheEndGenerator::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3)
{
  j_j_j__ZN16StructureFeature24garbageCollectBlueprintsE11buffer_spanI8ChunkPosEj(a1 + 88, a2, a3, 2);
}


void __fastcall TheEndGenerator::postProcessMobsAt(__int64 this, int a2, int a3, Random *a4)
{
  int v4; // r11@1
  int v5; // r5@1
  Level *v6; // r0@1
  const SpikeFeature::EndSpike *v7; // r7@1 OVERLAPPED
  const SpikeFeature::EndSpike *v8; // r8@1 OVERLAPPED
  int v9; // r9@3
  int v10; // r0@3
  __int64 v11; // [sp+8h] [bp-70h]@1
  int v12; // [sp+10h] [bp-68h]@3
  signed int v13; // [sp+14h] [bp-64h]@3
  int v14; // [sp+18h] [bp-60h]@3
  char v15; // [sp+1Ch] [bp-5Ch]@3
  int v16; // [sp+3Ch] [bp-3Ch]@2
  int v17; // [sp+40h] [bp-38h]@2
  int v18; // [sp+44h] [bp-34h]@2
  void *ptr; // [sp+48h] [bp-30h]@1
  void *v20; // [sp+4Ch] [bp-2Ch]@1

  v11 = this;
  v4 = a3;
  v5 = a2;
  v6 = (Level *)j_BlockSource::getLevel((BlockSource *)HIDWORD(this));
  TheEndBiomeDecorator::getSpikesForLevel((TheEndBiomeDecorator *)&ptr, v6);
  *(_QWORD *)&v7 = *(_QWORD *)&ptr;
  if ( ptr != v20 )
  {
    do
    {
      v16 = v5;
      v17 = 0;
      v18 = v4;
      if ( SpikeFeature::EndSpike::startsInChunk(v7, (const BlockPos *)&v16) == 1 )
      {
        SpikeFeature::SpikeFeature((SpikeFeature *)&v15, v7);
        v9 = SpikeFeature::EndSpike::getCenterX(v7);
        v10 = SpikeFeature::EndSpike::getCenterZ(v7);
        v12 = v9;
        v13 = 45;
        v14 = v10;
        SpikeFeature::postProcessMobsAt((SpikeFeature *)&v15, (BlockSource *)HIDWORD(v11), (const BlockPos *)&v12, a4);
        Feature::~Feature((Feature *)&v15);
      }
      v7 = (const SpikeFeature::EndSpike *)((char *)v7 + 48);
    }
    while ( v8 != v7 );
  }
  StructureFeature::postProcessMobsAt((StructureFeature *)(v11 + 88), (BlockSource *)HIDWORD(v11), v5, v4, a4);
  if ( ptr )
    j_operator delete(ptr);
}


int __fastcall TheEndGenerator::prepareHeights(TheEndGenerator *a1, float a2, int a3, int a4)
{
  TheEndGenerator *v4; // r8@1
  int v6; // r5@1
  int v7; // r6@1
  signed int v15; // r1@1
  char v16; // r2@1
  int result; // r0@1
  int v18; // r7@2
  int v19; // r8@3
  int v20; // r0@3
  int v21; // r10@4
  int v23; // r12@4
  int v26; // r0@4
  int v28; // r12@4
  int v29; // r6@5
  int v30; // lr@5
  signed int v31; // r5@5
  int v32; // r8@5
  _BYTE *v33; // r7@6
  int v34; // r3@6
  _BYTE *v35; // r7@8
  int v36; // r3@8
  _BYTE *v37; // r7@10
  int v38; // r3@10
  _BYTE *v39; // r7@12
  int v40; // r3@12
  _BYTE *v41; // r7@14
  int v42; // r3@14
  _BYTE *v43; // r7@16
  int v44; // r3@16
  _BYTE *v45; // r7@18
  int v46; // r3@18
  _BYTE *v47; // r7@20
  int v48; // r3@20
  int v49; // [sp+8h] [bp-520h]@2
  char v50; // [sp+Ch] [bp-51Ch]@1
  int v51; // [sp+10h] [bp-518h]@2
  int v52; // [sp+14h] [bp-514h]@2
  int v53; // [sp+18h] [bp-510h]@3
  int v54; // [sp+20h] [bp-508h]@3
  int v55; // [sp+28h] [bp-500h]@3
  int v56; // [sp+2Ch] [bp-4FCh]@4
  int *v57; // [sp+34h] [bp-4F4h]@1
  int v58; // [sp+38h] [bp-4F0h]@1
  float v59; // [sp+3Ch] [bp-4ECh]@1

  v4 = a1;
  _R0 = *(_DWORD *)(LODWORD(a2) + 20);
  v57 = (int *)LODWORD(a2);
  v6 = a4;
  v7 = a3;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VMOV            R0, S0
  }
  _R7 = mce::Math::log2(_R0, a2);
  v58 = 0;
  TheEndGenerator::getHeights(v4, &v59, 2 * v7, 0, 2 * v6);
    VMOV            S0, R7
    VMOV.F32        S2, #0.125
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
    VMOV.F32        S0, #0.25
  v50 = _R2;
  v15 = 1 << _R2;
  v16 = _R2 + 4;
  result = 0;
  do
    v49 = result;
    v18 = 0;
    v52 = 3 * result;
    v51 = 3 * result + 3;
    do
    {
      v53 = v18;
      v19 = 8 * v18 << v50;
      v20 = 0;
      v55 = 33 * (v51 + v18);
      v54 = 33 * (v18 + v52);
      do
      {
        v21 = 4 * v20;
        _LR = &v59 + v20 + v54;
        v23 = v20 + v55;
        _R5 = &v59 + v54 + 33 + v20;
        __asm
        {
          VLDR            S3, [LR,#4]
          VLDR            S8, [R5]
        }
        _R6 = &v59 + v55 + 33 + v20;
        __asm { VLDR            S14, [R5,#4] }
        v56 = v20;
        v26 = v19;
          VLDR            S4, [R6]
          VSUB.F32        S7, S14, S8
          VLDR            S10, [R6,#4]
        _R6 = &v59 + v23;
        v28 = 0;
          VSUB.F32        S1, S10, S4
          VLDR            S10, [LR]
          VLDR            S6, [R6]
          VLDR            S12, [R6,#4]
          VSUB.F32        S3, S3, S10
          VSUB.F32        S5, S12, S6
          VMUL.F32        S12, S1, S0
          VMUL.F32        S1, S7, S0
          VMUL.F32        S3, S3, S0
          VMUL.F32        S14, S5, S0
        do
          __asm
          {
            VSUB.F32        S5, S4, S8
            VSUB.F32        S7, S6, S10
            VMOV.F32        S9, S8
            VMOV.F32        S13, S10
          }
          v29 = v58;
          v30 = Block::mEndStone + 4;
          v31 = 8;
          __asm { VMUL.F32        S5, S5, S2 }
          v32 = *v57;
          __asm { VMUL.F32        S7, S7, S2 }
          do
            __asm { VSUB.F32        S11, S9, S13 }
            v33 = &BlockID::AIR;
            __asm
            {
              VCMPE.F32       S13, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            v34 = (v28 + v21) | v26 | (v29 << v16);
            __asm { VADD.F32        S9, S9, S5 }
            ++v29;
              VMUL.F32        S15, S11, S2
              VADD.F32        S11, S13, S7
              VADD.F32        S16, S13, S15
              VCMPE.F32       S16, #0.0
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v33 = (_BYTE *)v30;
              VADD.F32        S18, S16, S15
            *(_BYTE *)(v32 + v34) = *v33;
            v35 = &BlockID::AIR;
            v36 = v34 + v15;
              VCMPE.F32       S18, #0.0
              VADD.F32        S20, S18, S15
              VADD.F32        S22, S20, S15
              v35 = (_BYTE *)v30;
              VCMPE.F32       S20, #0.0
            *(_BYTE *)(v32 + v36) = *v35;
            v37 = &BlockID::AIR;
            v38 = v36 + v15;
              VADD.F32        S13, S22, S15
              VADD.F32        S15, S16, S15
              v37 = (_BYTE *)v30;
              VCMPE.F32       S22, #0.0
            *(_BYTE *)(v32 + v38) = *v37;
            v39 = &BlockID::AIR;
            v40 = v38 + v15;
              v39 = (_BYTE *)v30;
            *(_BYTE *)(v32 + v40) = *v39;
            v41 = &BlockID::AIR;
            v42 = v40 + v15;
            __asm { VMOV.F32        S13, S11 }
              v41 = (_BYTE *)v30;
            *(_BYTE *)(v32 + v42) = *v41;
            v43 = &BlockID::AIR;
            v44 = v42 + v15;
              v43 = (_BYTE *)v30;
              VCMPE.F32       S15, #0.0
            *(_BYTE *)(v32 + v44) = *v43;
            v45 = &BlockID::AIR;
            v46 = v44 + v15;
              v45 = (_BYTE *)v30;
            __asm { VMRS            APSR_nzcv, FPSCR }
            *(_BYTE *)(v32 + v46) = *v45;
            v47 = &BlockID::AIR;
            v48 = v46 + v15;
              v47 = (_BYTE *)v30;
            --v31;
            *(_BYTE *)(v32 + v48) = *v47;
          while ( v31 );
          __asm { VADD.F32        S4, S4, S12 }
          ++v28;
            VADD.F32        S6, S6, S14
            VADD.F32        S8, S8, S1
            VADD.F32        S10, S10, S3
        while ( !_ZF );
        v19 = v26;
        v20 = v56 + 1;
      }
      while ( v56 != 31 );
      v18 = v53 + 1;
    }
    while ( v53 != 1 );
    v58 += 8;
    result = v49 + 1;
  while ( v49 != 1 );
  return result;
}


int __fastcall TheEndGenerator::getIslandHeightValue(TheEndGenerator *this, int a2, int a3, int a4, int a5)
{
  TheEndGenerator *v5; // r7@1
  int v7; // r5@1
  int v15; // r2@1
  int v18; // r1@5
  int v19; // r2@5
  signed __int64 v20; // kr00_8@7
  signed __int64 v21; // kr08_8@7
  signed int v23; // r6@9
  unsigned int v25; // r1@10
  signed int v26; // r1@10
  __int64 v28; // r0@17
  __int64 v29; // r2@19
  int result; // r0@27
  int v34; // [sp+4h] [bp-84h]@1
  int v35; // [sp+8h] [bp-80h]@1
  int v36; // [sp+Ch] [bp-7Ch]@5
  int v37; // [sp+10h] [bp-78h]@9
  int v38; // [sp+14h] [bp-74h]@7
  float v39; // [sp+18h] [bp-70h]@15

  v5 = this;
  _R0 = a4 + 2 * a2;
  v7 = a3;
  __asm { VMOV            S0, R0 }
  v35 = a4;
  _R0 = a5 + 2 * a3;
  v34 = a2;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = j_mce::Math::sqrt(_R0, *(float *)&a2);
    VMOV.F32        S0, #-8.0
    VLDR            S16, =100.0
    VLDR            S18, =-100.0
    VLDR            S22, =80.0
    VMOV.F32        S20, S18
    VLDR            S24, =-0.9
  v15 = -12;
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S16
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S22
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S20, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S20, S22 }
  do
    _R1 = v35 - 2 * v15;
    v36 = v15;
    _R0 = v34 + v15;
    __asm { VMOV            S0, R1 }
    v18 = -(v34 + v15);
    v19 = -(((v34 + v15) >> 31) + ((unsigned int)(v34 + v15) > 0));
    __asm { VCVT.F32.S32    S0, S0 }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v18 = _R0;
    v20 = 3439LL * (unsigned int)v18;
    __asm { VMOV            S2, R0 }
    v21 = _R0 * (signed __int64)_R0;
    v38 = 3439 * v18;
    __asm { VCVT.F32.S32    S26, S2 }
      v19 = _R0 >> 31;
    __asm { VMUL.F32        S28, S0, S0 }
    _R10 = a5 + 24;
    v23 = -12;
    v37 = HIDWORD(v20) + 3439 * v19;
    do
    {
      _R9 = v7 + v23;
      v25 = _R9 * _R9 + v21;
      _CF = v25 >= 0x1000;
      _ZF = v25 == 4096;
      v26 = 0;
      if ( _ZF || !_CF )
        v26 = 1;
      if ( (unsigned __int64)(_R9 * (signed __int64)_R9 + v21) >> 32 )
        v26 = 0;
      if ( !v26 )
      {
        __asm
        {
          VMOV            S0, R9
          VCVT.F32.S32    S0, S0
          VSTR            S26, [SP,#0x88+var_70]
          VSTR            S0, [SP,#0x88+var_6C]
        }
        _R0 = SimplexNoise::_getValue(*((_DWORD *)v5 + 11), (int)&v39);
          VMOV            S0, R0
          VCMPE.F32       S0, S24
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          LODWORD(v28) = -_R9;
          HIDWORD(v28) = -((_R9 >> 31) + ((unsigned int)_R9 > 0));
          if ( _R9 > -1 )
            v28 = v7 + v23;
          j_j___aeabi_ldivmod(147 * v28 + __PAIR__(v37, v38), 13LL);
          _R0 = j___aeabi_l2f(v29 + 9, (unsigned __int64)(v29 + 9) >> 32);
          __asm
          {
            VMOV            S0, R10
            VMOV            S30, R0
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S0, S0
            VADD.F32        S0, S0, S28
            VMOV            R1, S0
          }
          _R0 = j_mce::Math::sqrt(_R1, *(float *)&_R1);
            VMOV            S0, R0
            VMOV.F32        S2, S18
            VMUL.F32        S0, S0, S30
            VSUB.F32        S0, S16, S0
            VCMPE.F32       S0, S18
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S0, S22
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S2, S0 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S2, S22 }
            VCMPE.F32       S2, S20
            __asm { VMOVGT.F32      S20, S2 }
      }
      ++v23;
      _R10 -= 2;
    }
    while ( v23 != 13 );
    v15 = v36 + 1;
  while ( v36 != 12 );
  __asm { VMOV            R0, S20 }
  return result;
}


ChunkSource *__fastcall TheEndGenerator::~TheEndGenerator(TheEndGenerator *this)
{
  TheEndGenerator *v1; // r4@1
  char *v2; // r5@1
  void *v3; // r0@1
  PerlinNoise *v4; // r0@3
  PerlinNoise *v5; // r0@4
  PerlinNoise *v6; // r0@5
  PerlinNoise *v7; // r0@6
  PerlinNoise *v8; // r0@7
  PerlinNoise *v9; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_271961C;
  *((_DWORD *)this + 6) = &off_2719684;
  v2 = (char *)this + 24;
  StructureFeature::~StructureFeature((TheEndGenerator *)((char *)this + 88));
  ThreadLocal<TheEndGenerator::ThreadData>::~ThreadLocal((int)(v2 + 24));
  v3 = (void *)*((_DWORD *)v2 + 5);
  if ( v3 )
    j_operator delete(v3);
  *((_DWORD *)v1 + 11) = 0;
  v4 = (PerlinNoise *)*((_DWORD *)v1 + 10);
  if ( v4 )
  {
    v5 = PerlinNoise::~PerlinNoise(v4);
    j_operator delete((void *)v5);
  }
  *((_DWORD *)v1 + 10) = 0;
  v6 = (PerlinNoise *)*((_DWORD *)v1 + 9);
  if ( v6 )
    v7 = PerlinNoise::~PerlinNoise(v6);
    j_operator delete((void *)v7);
  *((_DWORD *)v1 + 9) = 0;
  v8 = (PerlinNoise *)*((_DWORD *)v1 + 8);
  if ( v8 )
    v9 = PerlinNoise::~PerlinNoise(v8);
    j_operator delete((void *)v9);
  *((_DWORD *)v1 + 8) = 0;
  WorldGenerator::~WorldGenerator((WorldGenerator *)v2);
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


void __fastcall TheEndGenerator::~TheEndGenerator(TheEndGenerator *this)
{
  ChunkSource *v1; // r0@1

  v1 = TheEndGenerator::~TheEndGenerator(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall TheEndGenerator::prepareStructureBlueprints(TheEndGenerator *this, const ChunkPos *a2)
{
  TheEndGenerator::prepareStructureBlueprints(this, a2);
}


int __fastcall TheEndGenerator::buildSurfaces(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r9@1
  int result; // r0@2
  int v5; // r5@3
  signed int v6; // r6@4
  int v7; // r8@7
  int v8; // r7@7
  int *v9; // r0@7
  int v10; // r7@11
  int v11; // r6@11
  int *v12; // r0@11
  int *v13; // r0@15
  int v14; // [sp+4h] [bp-34h]@2
  char v15; // [sp+Ch] [bp-2Ch]@4
  int v16; // [sp+10h] [bp-28h]@3

  v2 = a2;
  v3 = 0;
  do
  {
    result = 0;
    v14 = v3;
    do
    {
      v16 = result;
      v5 = *(_DWORD *)(v2 + 20) - 1;
      if ( v5 >= 0 )
      {
        v6 = -1;
        v15 = *(_BYTE *)(Block::mEndStone + 4);
        do
        {
          if ( v6 == -1 )
          {
            while ( 1 )
            {
              v10 = *(_DWORD *)(v2 + 20);
              v11 = *(_BYTE *)(*(_DWORD *)v2 + v3 * v10 + v5);
              v12 = (int *)j_Block::getMaterial((Block *)Block::mBlocks[v11]);
              if ( j_Material::isType(v12, 0) )
              {
                v6 = -1;
                goto LABEL_23;
              }
              if ( v11 == *(_BYTE *)(Block::mStone + 4) )
                break;
              if ( --v5 <= -1 )
                goto LABEL_24;
            }
            v6 = 1;
            *(_BYTE *)(*(_DWORD *)v2 + v5 + v3 * v10) = v15;
          }
          else if ( v6 < 1 )
              v13 = (int *)j_Block::getMaterial((Block *)Block::mBlocks[*(_BYTE *)(*(_DWORD *)v2
                                                                                 + v3 * *(_DWORD *)(v2 + 20)
                                                                                 + v5)]);
              if ( j_Material::isType(v13, 0) )
            v6 = -1;
          else
              v7 = *(_DWORD *)(v2 + 20);
              v8 = *(_BYTE *)(*(_DWORD *)v2 + v3 * v7 + v5);
              v9 = (int *)j_Block::getMaterial((Block *)Block::mBlocks[v8]);
              if ( j_Material::isType(v9, 0) )
              if ( v8 == *(_BYTE *)(Block::mStone + 4) )
            --v6;
            *(_BYTE *)(*(_DWORD *)v2 + v5 + v3 * v7) = v15;
LABEL_23:
          --v5;
        }
        while ( v5 > -1 );
      }
LABEL_24:
      v3 += 16;
      result = v16 + 1;
    }
    while ( v16 != 15 );
    v3 = v14 + 1;
  }
  while ( v14 != 15 );
  return result;
}


signed int __fastcall TheEndGenerator::postProcess(TheEndGenerator *this, ChunkViewSource *a2)
{
  ChunkViewSource *v2; // r6@1
  signed int *v3; // r5@1
  char *v4; // r0@1
  int v5; // r1@1
  int v6; // r0@1
  int v7; // r0@1
  BlockSourceListener *v8; // r4@2
  int v9; // r0@2
  int v10; // r4@2
  unsigned int v11; // r0@2
  signed int v12; // r2@2
  int v13; // r0@3
  int *v14; // r6@3
  int v15; // r7@3
  unsigned int v16; // r6@4
  int v17; // r0@4
  signed int v18; // r1@4
  int v19; // r3@5
  int v20; // r3@5
  int *v21; // r5@5
  unsigned int v22; // r7@6
  unsigned int v23; // r4@6
  unsigned __int64 v24; // kr08_8@6
  int v25; // r5@6
  signed int v26; // r2@6
  unsigned int v27; // r0@6
  int v28; // r1@6
  int v29; // r0@7
  int *v30; // r5@7
  int v31; // r7@7
  char *v32; // r0@8
  int v33; // r6@8
  void (__fastcall *v34)(int, int *, unsigned int *, char *); // r4@8
  char *v35; // r3@8
  int v36; // r1@8 OVERLAPPED
  int v37; // r2@8 OVERLAPPED
  unsigned int v43; // r0@11
  char v44; // r4@12
  char v45; // r6@12
  char v46; // r0@12
  __int64 v47; // r0@12
  __int64 v48; // r0@12
  unsigned int v50; // r0@16
  signed int v51; // r8@16
  signed int v52; // r7@17
  unsigned int v53; // r4@18
  unsigned int v54; // r6@18
  int v55; // r0@18
  int v56; // r11@18
  unsigned int v57; // r6@24
  unsigned int v58; // r4@24
  int v59; // r5@24
  unsigned int v60; // r0@25
  BlockEntity *v61; // r0@25
  EndGatewayBlockEntity *v62; // r5@25
  TheEndDimension *v63; // r8@28
  char *v64; // r5@28
  char *v65; // r0@28
  int v66; // r1@28
  int v67; // r0@28
  int v68; // r3@28
  EndGatewayChunkSource *v69; // r5@28
  int v70; // r6@32
  int v71; // r0@32
  int v72; // r6@32
  __int64 v73; // r0@32
  int *v74; // r4@33
  int v75; // r7@33
  char *v76; // r5@35
  int v77; // r4@35
  void (__fastcall *v78)(BlockPos **, int, char *); // r6@35
  BlockPos *v79; // ST00_4@35
  int v80; // r4@35
  unsigned int *v81; // r1@36
  unsigned int v82; // r0@38
  signed int v83; // r4@40
  unsigned int *v84; // r5@43
  unsigned int v85; // r0@45
  signed int v86; // r5@55
  unsigned int *v87; // r1@56
  unsigned int v88; // r0@58
  unsigned int *v89; // r6@62
  unsigned int v90; // r0@64
  BlockPos *v92; // [sp+0h] [bp-1580h]@15
  TheEndGenerator *v93; // [sp+10h] [bp-1570h]@1
  unsigned __int64 *v94; // [sp+14h] [bp-156Ch]@1
  char v95; // [sp+18h] [bp-1568h]@35
  BlockPos *v96; // [sp+20h] [bp-1560h]@35
  int v97; // [sp+24h] [bp-155Ch]@35
  int v98; // [sp+28h] [bp-1558h]@35
  int v99; // [sp+2Ch] [bp-1554h]@35
  int v100; // [sp+30h] [bp-1550h]@35
  int v101; // [sp+34h] [bp-154Ch]@32
  int v102; // [sp+38h] [bp-1548h]@32
  int v103; // [sp+9F8h] [bp-B88h]@32
  char v104; // [sp+9FCh] [bp-B84h]@32
  int v105; // [sp+A00h] [bp-B80h]@32
  int v106; // [sp+A04h] [bp-B7Ch]@34
  void **v107; // [sp+A08h] [bp-B78h]@32
  int v108; // [sp+A14h] [bp-B6Ch]@29
  int v109; // [sp+A18h] [bp-B68h]@30
  int v110; // [sp+A1Ch] [bp-B64h]@31
  int v111; // [sp+A20h] [bp-B60h]@28
  int v112; // [sp+A24h] [bp-B5Ch]@28
  int v113; // [sp+A28h] [bp-B58h]@28
  int v114; // [sp+A2Ch] [bp-B54h]@28
  int v115; // [sp+A30h] [bp-B50h]@28
  int v116; // [sp+A34h] [bp-B4Ch]@28
  char v117; // [sp+A3Ch] [bp-B44h]@27
  void **v118; // [sp+A48h] [bp-B38h]@25
  int v119; // [sp+A4Ch] [bp-B34h]@25
  int v120; // [sp+A50h] [bp-B30h]@25
  unsigned int v121; // [sp+A54h] [bp-B2Ch]@25
  unsigned int v122; // [sp+A58h] [bp-B28h]@25
  unsigned int v123; // [sp+A5Ch] [bp-B24h]@25
  unsigned int v124; // [sp+A60h] [bp-B20h]@24
  int v125; // [sp+A64h] [bp-B1Ch]@24
  unsigned int v126; // [sp+A68h] [bp-B18h]@24
  unsigned int v127; // [sp+A6Ch] [bp-B14h]@21
  int v128; // [sp+A70h] [bp-B10h]@21
  unsigned int v129; // [sp+A74h] [bp-B0Ch]@21
  unsigned __int8 v130; // [sp+A78h] [bp-B08h]@20
  unsigned int v131; // [sp+A7Ch] [bp-B04h]@20
  int v132; // [sp+A80h] [bp-B00h]@20
  unsigned int v133; // [sp+A84h] [bp-AFCh]@20
  unsigned int v134; // [sp+A88h] [bp-AF8h]@19
  int v135; // [sp+A8Ch] [bp-AF4h]@19
  unsigned int v136; // [sp+A90h] [bp-AF0h]@19
  unsigned int v137; // [sp+A94h] [bp-AECh]@18
  int v138; // [sp+A98h] [bp-AE8h]@18
  unsigned int v139; // [sp+A9Ch] [bp-AE4h]@18
  void **v140; // [sp+AA0h] [bp-AE0h]@12
  int v141; // [sp+AACh] [bp-AD4h]@12
  int v142; // [sp+AB0h] [bp-AD0h]@12
  int v143; // [sp+AB4h] [bp-ACCh]@12
  unsigned int v144; // [sp+AB8h] [bp-AC8h]@2
  unsigned int v145; // [sp+ABCh] [bp-AC4h]@2
  signed int v146; // [sp+147Ch] [bp-104h]@1
  char v147; // [sp+1480h] [bp-100h]@2
  int v148; // [sp+1484h] [bp-FCh]@2
  signed int v149; // [sp+1488h] [bp-F8h]@4
  int v150; // [sp+148Ch] [bp-F4h]@2
  int v151; // [sp+1490h] [bp-F0h]@12
  int v152; // [sp+1494h] [bp-ECh]@12
  int v153; // [sp+1498h] [bp-E8h]@2
  int v154; // [sp+14A0h] [bp-E0h]@2
  void *v155; // [sp+14A8h] [bp-D8h]@52
  void *v156; // [sp+14B4h] [bp-CCh]@50
  int v157; // [sp+14C8h] [bp-B8h]@2
  int v158; // [sp+1538h] [bp-48h]@1
  LevelChunk *v159; // [sp+1548h] [bp-38h]@1
  int v160; // [sp+1550h] [bp-30h]@1
  int v161; // [sp+1554h] [bp-2Ch]@1

  v2 = a2;
  v93 = this;
  v3 = &v146;
  v4 = ChunkViewSource::getArea(a2);
  v5 = *((_DWORD *)v4 + 12);
  v6 = *((_DWORD *)v4 + 14) + 1;
  v160 = v5 + 1;
  v161 = v6;
  (*(void (__fastcall **)(LevelChunk **, ChunkViewSource *, int *))(*(_DWORD *)v2 + 16))(&v159, v2, &v160);
  v94 = (unsigned __int64 *)LevelChunk::getPosition(v159);
  v7 = LevelChunk::getDimension(v159);
  PostprocessingManager::tryLock((PostprocessingManager *)&v158, *(const ChunkPos **)(v7 + 192), v94);
  if ( PostprocessingManager::Owns::operator bool(&v158) )
  {
    v8 = (BlockSourceListener *)ChunkSource::getLevel(v2);
    v9 = ChunkSource::getDimension(v2);
    j_BlockSource::BlockSource((int)&v157, v8, v9, (int)v2, 0, 1);
    v153 = 0;
    j___aeabi_memclr8((int)&v154, 33);
    BlockSource::setTickingQueue((BlockSource *)&v157, (BlockTickingQueue *)&v153);
    v10 = 0;
    j_BlockPos::BlockPos((int)&v150, (__int64 *)v94, 0);
    v12 = 1;
    v144 = -1724254968 * *v94 + -245998635 * (*v94 >> 32);
    v11 = v144;
    v146 = 625;
    v147 = 0;
    v148 = 0;
    v145 = v144;
    do
    {
      v13 = v11 ^ (v11 >> 30);
      v14 = (int *)(&v144 + v10);
      v15 = v10++ + 1812433253 * v13;
      v11 = v12++ + 1812433253 * v13;
      v14[2] = v15 + 1;
    }
    while ( v10 != 397 );
    v146 = 624;
    v149 = 398;
    v16 = j_Level::getSeed(*((Level **)v93 + 2));
    j_Random::_checkThreadId((Random *)&v144);
    v144 = v16;
    v17 = 0;
    v18 = 1;
    v145 = v16;
      v19 = v16 ^ (v16 >> 30);
      v16 = v18++ + 1812433253 * v19;
      v20 = v17 + 1812433253 * v19 + 1;
      v21 = (int *)(&v144 + v17++);
      v21[2] = v20;
    while ( v17 != 397 );
    v22 = j_Random::_genRandInt32((Random *)&v144);
    v23 = j_Random::_genRandInt32((Random *)&v144);
    v24 = *v94;
    v25 = j_Level::getSeed(*((Level **)v93 + 2));
    v26 = 1;
    v27 = (v24 * ((v22 >> 1) | 1) + HIDWORD(v24) * ((v23 >> 1) | 1)) ^ v25;
    v144 = (v24 * ((v22 >> 1) | 1) + HIDWORD(v24) * ((v23 >> 1) | 1)) ^ v25;
    v28 = 0;
    v145 = (v24 * ((v22 >> 1) | 1) + HIDWORD(v24) * ((v23 >> 1) | 1)) ^ v25;
      v29 = v27 ^ (v27 >> 30);
      v30 = (int *)(&v144 + v28);
      v31 = v28++ + 1812433253 * v29;
      v27 = v26++ + 1812433253 * v29;
      v30[2] = v31 + 1;
    while ( v28 != 397 );
    (*(void (__fastcall **)(char *, int *, unsigned int *, _DWORD))(*((_DWORD *)v93 + 22) + 16))(
      (char *)v93 + 88,
      &v157,
      &v144,
      *v94);
    v32 = j_LevelChunk::getMax(v159);
    v33 = j_BlockSource::getBiome((BlockSource *)&v157, (const BlockPos *)v32);
    v34 = *(void (__fastcall **)(int, int *, unsigned int *, char *))(*(_DWORD *)v33 + 72);
    v35 = j_LevelChunk::getMin(v159);
    v34(v33, &v157, &v144, v35);
    *(_QWORD *)&v36 = *v94;
    if ( (unsigned int)(v36 * v36 + v37 * v37) > 0x1000 )
      _R0 = TheEndGenerator::getIslandHeightValue(v93, v36, v37, 1, 1);
      __asm
      {
        VMOV.F32        S2, #-20.0
        VMOV            S0, R0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v43 = j_Random::_genRandInt32((Random *)&v144);
        if ( v43 == 14 * (v43 / 0xE) )
        {
          v44 = j_Random::_genRandInt32((Random *)&v144);
          v45 = j_Random::_genRandInt32((Random *)&v144);
          v46 = j_Random::_genRandInt32((Random *)&v144);
          v141 = (v44 & 0xF) + 8 + v150;
          v142 = (v45 & 0xF) + v151 + 55;
          v143 = (v46 & 0xF) + v152 + 8;
          Feature::Feature((Feature *)&v140, 0);
          v140 = &off_2723638;
          LODWORD(v47) = &v140;
          EndIslandFeature::place(v47, (const BlockPos *)&v141, (Random *)&v144);
          if ( !(j_Random::_genRandInt32((Random *)&v144) & 3) )
          {
            LODWORD(v48) = &v140;
            EndIslandFeature::place(v48, (const BlockPos *)&v141, (Random *)&v144);
          }
          Feature::~Feature((Feature *)&v140);
        }
      _R0 = TheEndGenerator::getIslandHeightValue(v93, *v94, *v94 >> 32, 1, 1);
        VLDR            S2, =40.0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v50 = j_Random::_genRandInt32((Random *)&v144);
        v51 = v50 % 5;
        if ( v50 != 5 * (v50 / 5) )
          v52 = 0;
          do
            v53 = (j_Random::_genRandInt32((Random *)&v144) & 0xF) + 8;
            v54 = (j_Random::_genRandInt32((Random *)&v144) & 0xF) + 8;
            v137 = v150 + v53;
            v138 = v151;
            v139 = v152 + v54;
            v55 = BlockSource::getHeightmap((BlockSource *)&v157, (const BlockPos *)&v137);
            v56 = v55;
            if ( v55 >= 1 )
            {
              v134 = v150 + v53;
              v135 = v151 + v55;
              v136 = v152 + v54;
              if ( j_BlockSource::isEmptyBlock((BlockSource *)&v157, (const BlockPos *)&v134) == 1 )
              {
                v131 = v150 + v53;
                v132 = v56 - 1 + v151;
                v133 = v152 + v54;
                j_BlockSource::getBlockID((BlockSource *)&v130, (const BlockPos *)&v157, (int)&v131);
                if ( v130 == *(_BYTE *)(Block::mEndStone + 4) )
                {
                  v127 = v150 + v53;
                  v128 = v151 + v56;
                  v129 = v152 + v54;
                  ChorusFlowerBlock::generatePlant(
                    (ChorusFlowerBlock *)&v157,
                    (BlockSource *)&v127,
                    (const BlockPos *)&v144,
                    (Random *)8,
                    (int)v92);
                }
              }
            }
            ++v52;
          while ( v52 < v51 );
        if ( !(j_Random::_genRandInt32((Random *)&v144) % 0x2BC) )
          v57 = (j_Random::_genRandInt32((Random *)&v144) & 0xF) + 8;
          v58 = (j_Random::_genRandInt32((Random *)&v144) & 0xF) + 8;
          v124 = v150 + v57;
          v125 = v151;
          v126 = v152 + v58;
          v59 = BlockSource::getHeightmap((BlockSource *)&v157, (const BlockPos *)&v124);
          if ( v59 >= 1 )
            v60 = j_Random::_genRandInt32((Random *)&v144);
            v121 = v150 + v57;
            v122 = v60 % 7 + v59 + v151 + 3;
            v123 = v152 + v58;
            v120 = 0;
            v119 = 0;
            v118 = 0;
            Feature::Feature((Feature *)&v118, 0);
            v118 = &off_2718A50;
            EndGatewayFeature::place(
              (EndGatewayFeature *)&v118,
              (BlockSource *)&v157,
              (const BlockPos *)&v121,
              (Random *)&v144);
            Feature::~Feature((Feature *)&v118);
            v61 = (BlockEntity *)j_BlockSource::getBlockEntity((BlockSource *)&v157, (const BlockPos *)&v121);
            v62 = v61;
            if ( v61 )
              if ( *(_DWORD *)j_BlockEntity::getType(v61) == 24 )
                (*(void (__fastcall **)(char *))(**((_DWORD **)v93 + 3) + 172))(&v117);
                EndGatewayBlockEntity::setExitPosition(v62, (const BlockPos *)&v117, 1);
    v63 = (TheEndDimension *)*((_DWORD *)v93 + 3);
    v64 = j_LevelChunk::getMin(v159);
    v65 = j_LevelChunk::getMax(v159);
    v66 = *(_DWORD *)v65;
    v67 = *((_DWORD *)v65 + 2);
    v68 = *((_DWORD *)v64 + 2);
    v111 = *(_DWORD *)v64;
    v112 = 0;
    v113 = v68;
    v114 = v66;
    v115 = 128;
    v116 = v67;
    v69 = (EndGatewayChunkSource *)TheEndDimension::getGatewayChunk(v63, (const BoundingBox *)&v111);
    if ( v69 )
      EndGatewayBlockEntity::findValidSpawnInChunk((EndGatewayBlockEntity *)&v108, v159);
      if ( v108 == BlockPos::ZERO && v109 == unk_2816278 && v110 == dword_281627C )
        v70 = *(_DWORD *)EndGatewayChunkSource::getExitOrigin(v69);
        v71 = *((_DWORD *)EndGatewayChunkSource::getExitOrigin(v69) + 2);
        v108 = v70;
        v109 = 75;
        v110 = v71;
        v72 = 0;
        Feature::Feature((Feature *)&v107, 0);
        v107 = &off_2723638;
        LODWORD(v73) = 8976890 * v108 + 981131 * v109 + v110;
        v101 = 8976890 * v108 + 981131 * v109 + v110;
        v103 = 625;
        HIDWORD(v73) = 1;
        v104 = 0;
        v105 = 0;
        v102 = 8976890 * v108 + 981131 * v109 + v110;
        do
          LODWORD(v73) = v73 ^ ((unsigned int)v73 >> 30);
          v74 = &v101 + v72;
          v75 = v72++ + 1812433253 * v73;
          LODWORD(v73) = HIDWORD(v73)++ + 1812433253 * v73;
          v74[2] = v75 + 1;
        while ( v72 != 397 );
        v103 = 624;
        v106 = 398;
        LODWORD(v73) = &v107;
        EndIslandFeature::place(v73, (const BlockPos *)&v108, (Random *)&v101);
        Feature::~Feature((Feature *)&v107);
      EndGatewayBlockEntity::findTallestBlock(
        (EndGatewayBlockEntity *)&v98,
        (BlockSource *)&v157,
        (const BlockPos *)&v108,
        16,
        1);
      v108 = v98;
      v109 = v99 + 10;
      v110 = v100;
      v76 = EndGatewayChunkSource::getEntryPos(v69);
      v77 = TheEndDimension::getGatewayChunkAt(v63, (const BlockPos *)v76);
      v78 = *(void (__fastcall **)(BlockPos **, int, char *))(*(_DWORD *)v77 + 16);
      j_ChunkPos::ChunkPos((ChunkPos *)&v95, (const BlockPos *)v76);
      v78(&v96, v77, &v95);
      EndGatewayBlockEntity::createExitPortal(
        (EndGatewayBlockEntity *)&v157,
        (BlockSource *)&v108,
        v96,
        (LevelChunk *)v76,
        v79);
      v80 = v97;
      if ( v97 )
        v81 = (unsigned int *)(v97 + 4);
        if ( &pthread_create )
          __dmb();
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
        else
          v82 = (*v81)--;
        if ( v82 == 1 )
          v84 = (unsigned int *)(v80 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 8))(v80);
          if ( &pthread_create )
            __dmb();
            do
              v85 = __ldrex(v84);
            while ( __strex(v85 - 1, v84) );
          else
            v85 = (*v84)--;
          if ( v85 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 12))(v80);
    BlockTickingQueue::tickAllPendingTicks((BlockTickingQueue *)&v153, (BlockSource *)&v157);
    v3 = &v146;
    if ( v156 )
      j_operator delete(v156);
    if ( v155 )
      j_operator delete(v155);
    BlockSource::~BlockSource((BlockSource *)&v157);
    v83 = 1;
  }
  else
    v83 = 0;
  PostprocessingManager::Owns::~Owns((PostprocessingManager::Owns *)&v158);
  v86 = v3[52];
  if ( v86 )
    v87 = (unsigned int *)(v86 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
    else
      v88 = (*v87)--;
    if ( v88 == 1 )
      v89 = (unsigned int *)(v86 + 8);
      (*(void (__fastcall **)(signed int))(*(_DWORD *)v86 + 8))(v86);
      if ( &pthread_create )
        __dmb();
          v90 = __ldrex(v89);
        while ( __strex(v90 - 1, v89) );
      else
        v90 = (*v89)--;
      if ( v90 == 1 )
        (*(void (__fastcall **)(signed int))(*(_DWORD *)v86 + 12))(v86);
  return v83;
}


void __fastcall TheEndGenerator::~TheEndGenerator(TheEndGenerator *this)
{
  TheEndGenerator::~TheEndGenerator(this);
}


int __fastcall TheEndGenerator::TheEndGenerator(int a1, Dimension *a2, unsigned int a3)
{
  int v3; // r9@1
  int v4; // r8@1
  __int64 v5; // r0@1
  unsigned int v6; // r0@3
  signed int v7; // r2@3
  int v8; // r1@3
  int v9; // r0@4
  int *v10; // r4@4
  int v11; // r6@4
  PerlinNoise *v12; // r5@5
  PerlinNoise *v13; // r0@5
  PerlinNoise *v14; // r0@6
  PerlinNoise *v15; // r5@7
  PerlinNoise *v16; // r0@7
  PerlinNoise *v17; // r0@8
  PerlinNoise *v18; // r5@9
  PerlinNoise *v19; // r0@9
  PerlinNoise *v20; // r0@10
  SimplexNoise *v21; // r5@11
  void *v22; // r0@11
  unsigned int v24; // [sp+4h] [bp-A0Ch]@3
  unsigned int v25; // [sp+8h] [bp-A08h]@3
  int v26; // [sp+9C8h] [bp-48h]@3
  char v27; // [sp+9CCh] [bp-44h]@3
  int v28; // [sp+9D0h] [bp-40h]@3
  int v29; // [sp+9D4h] [bp-3Ch]@5
  void *v30; // [sp+9D8h] [bp-38h]@1
  void (*v31)(void); // [sp+9E0h] [bp-30h]@1
  int (__fastcall *v32)(_DWORD *); // [sp+9E4h] [bp-2Ch]@1
  unsigned int v33; // [sp+9E8h] [bp-28h]@1

  v33 = a3;
  v3 = a1;
  ChunkSource::ChunkSource(a1, a2, 16);
  WorldGenerator::WorldGenerator((WorldGenerator *)(v3 + 24));
  *(_DWORD *)v3 = &off_271961C;
  *(_DWORD *)(v3 + 24) = &off_2719684;
  *(_DWORD *)(v3 + 32) = 0;
  v4 = v3 + 32;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  v30 = j_operator new(1u);
  v32 = sub_1958780;
  v31 = (void (*)(void))sub_195879A;
  ThreadLocal<TheEndGenerator::ThreadData>::ThreadLocal(v3 + 48, (int)&v30);
  if ( v31 )
    v31();
  LODWORD(v5) = v3 + 88;
  EndCityFeature::EndCityFeature(v5, &v33);
  v6 = v33;
  v24 = v33;
  v7 = 1;
  v26 = 625;
  v8 = 0;
  v27 = 0;
  v28 = 0;
  v25 = v33;
  do
  {
    v9 = v6 ^ (v6 >> 30);
    v10 = (int *)(&v24 + v8);
    v11 = v8++ + 1812433253 * v9;
    v6 = v7++ + 1812433253 * v9;
    v10[2] = v11 + 1;
  }
  while ( v8 != 397 );
  v26 = 624;
  v29 = 398;
  v12 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v12, (Random *)&v24, 16LL);
  v13 = *(PerlinNoise **)v4;
  *(_DWORD *)v4 = v12;
  if ( v13 )
    v14 = PerlinNoise::~PerlinNoise(v13);
    j_operator delete((void *)v14);
  v15 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v15, (Random *)&v24, 16LL);
  v16 = *(PerlinNoise **)(v3 + 36);
  *(_DWORD *)(v3 + 36) = v15;
  if ( v16 )
    v17 = PerlinNoise::~PerlinNoise(v16);
    j_operator delete((void *)v17);
  v18 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v18, (Random *)&v24, 8LL);
  v19 = *(PerlinNoise **)(v3 + 40);
  *(_DWORD *)(v3 + 40) = v18;
  if ( v19 )
    v20 = PerlinNoise::~PerlinNoise(v19);
    j_operator delete((void *)v20);
  v21 = (SimplexNoise *)j_operator new(0x80Cu);
  SimplexNoise::SimplexNoise(v21, (Random *)&v24);
  v22 = *(void **)(v3 + 44);
  *(_DWORD *)(v3 + 44) = v21;
  if ( v22 )
    j_operator delete(v22);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)(v3 + 88) + 8))(v3 + 88, *(_DWORD *)(v3 + 28));
  return v3;
}


void __fastcall TheEndGenerator::prepareStructureBlueprints(TheEndGenerator *this, const ChunkPos *a2)
{
  const ChunkPos *v2; // r4@1
  StructureFeature *v3; // r5@1
  Dimension *v4; // r1@1

  v2 = a2;
  v3 = (TheEndGenerator *)((char *)this + 88);
  v4 = (Dimension *)ChunkSource::getDimension(this);
  j_j_j__ZN16StructureFeature16createBlueprintsER9DimensionRK8ChunkPos(v3, v4, v2);
}


unsigned __int8 *__fastcall TheEndGenerator::loadChunk(TheEndGenerator *this, LevelChunk *a2, bool a3)
{
  LevelChunk *v3; // r4@1
  ChunkSource *v4; // r9@1
  char *v5; // r8@1
  char *v6; // r7@1
  Dimension *v7; // r0@1
  Dimension *v8; // r0@1
  void *v9; // r6@1
  void (__fastcall *v10)(void *, LevelChunk *, int, _DWORD); // r10@1
  int v11; // r5@1
  char *v12; // r0@1
  int v13; // r0@1
  char *v15; // [sp+0h] [bp-40h]@1
  char *v16; // [sp+4h] [bp-3Ch]@1
  int v17; // [sp+8h] [bp-38h]@1
  int v18; // [sp+Ch] [bp-34h]@1
  int v19; // [sp+10h] [bp-30h]@1
  int v20; // [sp+14h] [bp-2Ch]@1
  signed int v21; // [sp+18h] [bp-28h]@1

  v3 = a2;
  v4 = this;
  v5 = LevelChunk::getPosition(a2);
  v6 = (char *)ThreadLocal<TheEndGenerator::ThreadData>::getLocal((int)v4 + 48);
  v7 = (Dimension *)ChunkSource::getDimension(v4);
  v8 = Dimension::getBiomes(v7);
  v9 = ThreadLocal<BiomeSource>::getLocal((int)v8);
  v10 = *(void (__fastcall **)(void *, LevelChunk *, int, _DWORD))(*(_DWORD *)v9 + 8);
  v11 = *(_DWORD *)j_LevelChunk::getMin(v3);
  v12 = j_LevelChunk::getMin(v3);
  v10(v9, v3, v11, *((_DWORD *)v12 + 2));
  j___aeabi_memclr((int)v6, 0x8000);
  v17 = 0;
  v18 = 0;
  v19 = 16;
  v20 = 128;
  v21 = 16;
  v15 = v6;
  v16 = v6 + 0x8000;
  v13 = (*(int (__fastcall **)(ChunkSource *, char **, _DWORD, _DWORD))(*(_DWORD *)v4 + 80))(
          v4,
          &v15,
          *(_QWORD *)v5,
          *(_QWORD *)v5 >> 32);
  TheEndGenerator::buildSurfaces(v13, (int)&v15);
  LevelChunk::setAllBlockIDs((int)v3, (int)v15, (int)v16, (signed __int16)v20);
  j_LevelChunk::recomputeHeightMap((unsigned int)v3);
  if ( !LevelChunk::getGenerator(v3) )
    LevelChunk::_setGenerator(v3, v4);
  return LevelChunk::changeState((int)v3, 1, 2u);
}


signed int __fastcall TheEndGenerator::getHeights(TheEndGenerator *this, float *a2, int a3, int a4, int a5)
{
  TheEndGenerator *v5; // r11@1
  int v6; // r4@1
  float *v7; // ST1C_4@1
  PerlinNoise *v8; // r7@1
  PerlinNoise *v9; // r6@1
  PerlinNoise *v10; // r6@1
  float *v11; // r11@1
  float *v16; // r7@1
  float *v17; // r10@1
  int v18; // r9@1
  int v19; // r8@2
  signed int result; // r0@3
  int v23; // r2@3
  int v27; // r4@4
  float *v28; // [sp+10h] [bp-EC8h]@2
  float *v29; // [sp+14h] [bp-EC4h]@2
  float *v30; // [sp+18h] [bp-EC0h]@2
  int v31; // [sp+1Ch] [bp-EBCh]@2
  int v32; // [sp+24h] [bp-EB4h]@1
  TheEndGenerator *v33; // [sp+28h] [bp-EB0h]@1
  int v34; // [sp+2Ch] [bp-EACh]@1
  int v35; // [sp+30h] [bp-EA8h]@1
  signed int v36; // [sp+34h] [bp-EA4h]@1
  int v37; // [sp+38h] [bp-EA0h]@1
  char v38; // [sp+3Ch] [bp-E9Ch]@1
  float v39; // [sp+48h] [bp-E90h]@1
  int v40; // [sp+4ECh] [bp-9ECh]@1
  int v41; // [sp+4F0h] [bp-9E8h]@1
  int v42; // [sp+4F4h] [bp-9E4h]@1
  char v43; // [sp+4F8h] [bp-9E0h]@1
  float v44; // [sp+504h] [bp-9D4h]@1
  int v45; // [sp+9A8h] [bp-530h]@1
  int v46; // [sp+9ACh] [bp-52Ch]@1
  int v47; // [sp+9B0h] [bp-528h]@1
  char v48; // [sp+9B4h] [bp-524h]@1
  float v49; // [sp+9C0h] [bp-518h]@1
  int v50; // [sp+E64h] [bp-74h]@1
  int v51; // [sp+E68h] [bp-70h]@1
  int v52; // [sp+E6Ch] [bp-6Ch]@1

  v5 = this;
  v6 = a3;
  v7 = a2;
  v50 = a3;
  v51 = a4;
  v52 = a5;
  v33 = this;
  v8 = (PerlinNoise *)*((_DWORD *)this + 10);
  j_Vec3::Vec3((int)&v48, (int)&v50);
  v45 = 1099489765;
  v46 = 1082712549;
  v47 = 1099489765;
  PerlinNoise::getRegion(v8, &v49, (const Vec3 *)&v48, 3, 33, 3, (const Vec3 *)&v45);
  v9 = (PerlinNoise *)*((_DWORD *)v5 + 8);
  j_Vec3::Vec3((int)&v43, (int)&v50);
  v40 = 1152064094;
  v41 = 1143675486;
  v42 = 1152064094;
  PerlinNoise::getRegion(v9, &v44, (const Vec3 *)&v43, 3, 33, 3, (const Vec3 *)&v40);
  v10 = (PerlinNoise *)*((_DWORD *)v5 + 9);
  j_Vec3::Vec3((int)&v38, (int)&v50);
  v11 = &v39;
  v35 = 1152064094;
  v36 = 1143675486;
  v37 = 1152064094;
  PerlinNoise::getRegion(v10, &v39, (const Vec3 *)&v38, 3, 33, 3, (const Vec3 *)&v35);
  __asm
  {
    VMOV.F32        S16, #-8.0
    VMOV.F32        S20, #0.5
  }
  v16 = &v44;
  __asm { VMOV.F32        S28, #1.0 }
  v32 = v6 / 2;
  v17 = &v49;
  v18 = (int)v7;
    VLDR            S18, =0.05
    VLDR            S22, =0.0019531
    VLDR            S24, =0.015625
    VLDR            S26, =0.0
    VLDR            S30, =-3000.0
    VLDR            S17, =-0.14286
    VLDR            S19, =-4.2857
  v34 = 0;
  do
    v19 = 0;
    v28 = v11;
    v29 = v16;
    v30 = v17;
    v31 = v18;
    do
    {
      _R0 = TheEndGenerator::getIslandHeightValue(v33, v32, a5 / 2, v34, v19);
      __asm { VMOV            S0, R0 }
      result = -14;
      _R1 = 8;
      v23 = v18;
      __asm { VADD.F32        S0, S0, S16 }
      _R3 = v17;
      _R6 = v11;
      _R5 = v16;
      do
      {
        __asm { VLDR            S2, [R3] }
        v27 = result + 14;
        __asm
        {
          VLDR            S6, [R5]
          VMUL.F32        S2, S2, S18
          VADD.F32        S4, S2, S20
          VMUL.F32        S2, S6, S22
          VCMPE.F32       S4, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !(_NF ^ _VF) )
          __asm
          {
            VLDR            S8, [R6]
            VCMPE.F32       S4, S28
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VSUB.F32        S6, S8, S6
              VMUL.F32        S6, S6, S22
              VMUL.F32        S4, S6, S4
              VADD.F32        S2, S4, S2
            }
          else
            __asm { VMUL.F32        S2, S8, S22 }
        __asm { VADD.F32        S2, S0, S2 }
        if ( v27 < 15 )
          if ( v27 <= 7 )
              VMOV            S4, R1
              VCVT.F32.S32    S4, S4
              VMUL.F32        S6, S4, S17
              VMUL.F32        S4, S4, S19
              VADD.F32        S6, S6, S28
              VMUL.F32        S2, S2, S6
              VADD.F32        S2, S2, S4
        else
            VMOV            S4, R0
            VMOV.F32        S6, S26
            VCVT.F32.S32    S4, S4
            VMUL.F32        S4, S4, S24
            VCMPE.F32       S4, #0.0
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S6, S4 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S6, S28 }
            VSUB.F32        S4, S28, S6
            VMUL.F32        S6, S6, S30
            VMUL.F32        S2, S2, S4
            VADD.F32        S2, S2, S6
        __asm { VSTR            S2, [R2] }
        ++result;
        --_R1;
        v23 += 4;
        ++_R3;
        ++_R6;
        ++_R5;
      }
      while ( result != 19 );
      ++v19;
      v18 += 132;
      v17 += 33;
      v11 += 33;
      v16 += 33;
    }
    while ( v19 != 3 );
    v18 = v31 + 396;
    v17 = v30 + 99;
    v11 = v28 + 99;
    v16 = v29 + 99;
    ++v34;
  while ( v34 != 3 );
  return result;
}


signed int __fastcall TheEndGenerator::isIslandChunk(TheEndGenerator *this, int a2, int a3)
{
  signed int v3; // r5@1
  unsigned int v4; // r3@1
  signed int v7; // r3@1

  v3 = 0;
  v4 = a3 * a3 + a2 * a2;
  _CF = v4 >= 0x1000;
  _ZF = v4 == 4096;
  v7 = 0;
  if ( _ZF || !_CF )
    v7 = 1;
  if ( (unsigned __int64)(a3 * (signed __int64)a3 + a2 * (signed __int64)a2) >> 32 )
    v7 = 0;
  if ( !v7 )
  {
    _R0 = TheEndGenerator::getIslandHeightValue(this, a2, a3, 1, 1);
    __asm
    {
      VMOV            S0, R0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      v3 = 1;
  }
  return v3;
}
