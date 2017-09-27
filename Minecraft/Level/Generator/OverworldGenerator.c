

ChunkSource *__fastcall OverworldGenerator::~OverworldGenerator(OverworldGenerator *this)
{
  OverworldGenerator *v1; // r4@1
  char *v2; // r5@1
  void *v3; // r0@1
  void *v4; // r0@3
  void *v5; // r0@5
  void *v6; // r0@7
  void *v7; // r0@9
  PerlinNoise *v8; // r0@11
  PerlinNoise *v9; // r0@12
  PerlinNoise *v10; // r0@13
  PerlinNoise *v11; // r0@14
  PerlinNoise *v12; // r0@15
  PerlinNoise *v13; // r0@16
  PerlinSimplexNoise *v14; // r0@17
  PerlinSimplexNoise *v15; // r0@18
  PerlinNoise *v16; // r0@19
  PerlinNoise *v17; // r0@20
  PerlinNoise *v18; // r0@21
  PerlinNoise *v19; // r0@22
  PerlinNoise *v20; // r0@23
  PerlinNoise *v21; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_2719588;
  *((_DWORD *)this + 6) = &off_27195F4;
  v2 = (char *)this + 24;
  *((_DWORD *)this + 203) = &off_27246F4;
  v3 = (void *)*((_DWORD *)this + 228);
  if ( v3 )
    j_operator delete(v3);
  StructureFeature::~StructureFeature((StructureFeature *)(v2 + 788));
  *((_DWORD *)v1 + 172) = &off_2718D38;
  v4 = (void *)*((_DWORD *)v1 + 200);
  if ( v4 )
    j_operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 197);
  if ( v5 )
    j_operator delete(v5);
  StructureFeature::~StructureFeature((OverworldGenerator *)((char *)v1 + 688));
  Feature::~Feature((OverworldGenerator *)((char *)v1 + 676));
  StructureFeature::~StructureFeature((OverworldGenerator *)((char *)v1 + 584));
  *((_DWORD *)v1 + 118) = &off_271920C;
  v6 = (void *)*((_DWORD *)v1 + 141);
  if ( v6 )
    j_operator delete(v6);
  StructureFeature::~StructureFeature((OverworldGenerator *)((char *)v1 + 472));
  StructureFeature::~StructureFeature((OverworldGenerator *)((char *)v1 + 320));
  *((_DWORD *)v1 + 51) = &off_272426C;
  v7 = (void *)*((_DWORD *)v1 + 74);
  if ( v7 )
    j_operator delete(v7);
  StructureFeature::~StructureFeature((OverworldGenerator *)((char *)v1 + 204));
  ThreadLocal<OverworldGenerator::ThreadData>::~ThreadLocal((int)v1 + 164);
  v8 = (PerlinNoise *)*((_DWORD *)v1 + 15);
  if ( v8 )
  {
    v9 = PerlinNoise::~PerlinNoise(v8);
    j_operator delete((void *)v9);
  }
  *((_DWORD *)v1 + 15) = 0;
  v10 = (PerlinNoise *)*((_DWORD *)v1 + 14);
  if ( v10 )
    v11 = PerlinNoise::~PerlinNoise(v10);
    j_operator delete((void *)v11);
  *((_DWORD *)v1 + 14) = 0;
  v12 = (PerlinNoise *)*((_DWORD *)v1 + 13);
  if ( v12 )
    v13 = PerlinNoise::~PerlinNoise(v12);
    j_operator delete((void *)v13);
  *((_DWORD *)v1 + 13) = 0;
  v14 = (PerlinSimplexNoise *)*((_DWORD *)v1 + 12);
  if ( v14 )
    v15 = j_PerlinSimplexNoise::~PerlinSimplexNoise(v14);
    j_operator delete((void *)v15);
  *((_DWORD *)v1 + 12) = 0;
  v16 = (PerlinNoise *)*((_DWORD *)v1 + 11);
  if ( v16 )
    v17 = PerlinNoise::~PerlinNoise(v16);
    j_operator delete((void *)v17);
  *((_DWORD *)v1 + 11) = 0;
  v18 = (PerlinNoise *)*((_DWORD *)v1 + 10);
  if ( v18 )
    v19 = PerlinNoise::~PerlinNoise(v18);
    j_operator delete((void *)v19);
  *((_DWORD *)v1 + 10) = 0;
  v20 = (PerlinNoise *)*((_DWORD *)v1 + 9);
  if ( v20 )
    v21 = PerlinNoise::~PerlinNoise(v20);
    j_operator delete((void *)v21);
  *((_DWORD *)v1 + 9) = 0;
  WorldGenerator::~WorldGenerator((WorldGenerator *)v2);
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


int (**__fastcall OverworldGenerator::addHardcodedSpawnAreas(OverworldGenerator *this, LevelChunk *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  OverworldGenerator *v2; // r5@1
  LevelChunk *v3; // r4@1

  v2 = this;
  v3 = a2;
  StructureFeature::generateHardcodedMobSpawns((OverworldGenerator *)((char *)this + 688), a2);
  return j_j_j__ZN16StructureFeature26generateHardcodedMobSpawnsER10LevelChunk(
           (OverworldGenerator *)((char *)v2 + 472),
           v3);
}


void __fastcall OverworldGenerator::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3)
{
  OverworldGenerator::garbageCollectBlueprints(a1, a2, a3);
}


void __fastcall OverworldGenerator::~OverworldGenerator(OverworldGenerator *this)
{
  ChunkSource *v1; // r0@1

  v1 = OverworldGenerator::~OverworldGenerator(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall OverworldGenerator::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3)
{
  int v3; // r6@1
  unsigned __int64 *v4; // r4@1
  void *v5; // r5@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  StructureFeature::garbageCollectBlueprints(a1 + 204, a2, a3, 2);
  StructureFeature::garbageCollectBlueprints(v3 + 320, v5, v4, 2);
  StructureFeature::garbageCollectBlueprints(v3 + 472, v5, v4, 2);
  StructureFeature::garbageCollectBlueprints(v3 + 584, v5, v4, 2);
  StructureFeature::garbageCollectBlueprints(v3 + 688, v5, v4, 2);
  j_j_j__ZN16StructureFeature24garbageCollectBlueprintsE11buffer_spanI8ChunkPosEj(v3 + 812, v5, v4, 2);
}


int __fastcall OverworldGenerator::findNearestFeature(ChunkSource *a1, int a2, const BlockPos *a3, BlockPos *a4)
{
  BlockPos *v4; // r4@1
  const BlockPos *v5; // r5@1
  int v6; // r7@1
  ChunkSource *v7; // r6@1
  Dimension *v8; // r1@1
  int result; // r0@2

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = (Dimension *)ChunkSource::getDimension(a1);
  switch ( v6 )
  {
    case 3:
      result = (*(int (__fastcall **)(char *, Dimension *, const BlockPos *, BlockPos *))(*((_DWORD *)v7 + 146) + 20))(
                 (char *)v7 + 584,
                 v8,
                 v5,
                 v4);
      break;
    case 4:
      result = OceanMonumentFeature::getNearestGeneratedFeature((Dimension *)v7 + 344, v8, v5, v4);
    case 5:
      result = StrongholdFeature::getNearestGeneratedFeature((ChunkSource *)((char *)v7 + 320), v8, v5, v4);
    case 6:
      result = RandomScatteredLargeFeature::getNearestGeneratedFeature((Dimension *)v7 + 236, v8, v5, v4);
    case 7:
      result = VillageFeature::getNearestGeneratedFeature((ChunkSource *)((char *)v7 + 204), v8, v5, v4);
    case 8:
      result = WoodlandMansionFeature::getNearestGeneratedFeature((ChunkSource *)((char *)v7 + 812), v8, v5, v4);
    default:
      result = 0;
  }
  return result;
}


float *__fastcall OverworldGenerator::getHeights(OverworldGenerator *this, float *a2, Biome **a3, int _R3, int a5, int a6)
{
  Biome **v11; // r7@1
  float *v12; // r9@1
  OverworldGenerator *v13; // r6@1
  int v14; // r0@1
  PerlinNoise *v16; // r0@1
  PerlinNoise *v17; // r0@1
  float *v18; // r11@1
  PerlinNoise *v19; // r0@1
  float *v20; // r8@1
  float *result; // r0@1
  int v22; // r10@1
  int v23; // r5@1
  int v24; // r3@1
  int v25; // r4@2
  int v26; // r12@2
  int v27; // r7@2
  float *v29; // r8@2
  int v30; // r0@3
  int v31; // r12@3
  int v33; // r1@3
  int v34; // r0@3
  int v49; // [sp+10h] [bp-1620h]@2
  int v50; // [sp+14h] [bp-161Ch]@2
  int v51; // [sp+18h] [bp-1618h]@2
  float *v52; // [sp+1Ch] [bp-1614h]@2
  float *v53; // [sp+20h] [bp-1610h]@2
  float *v54; // [sp+24h] [bp-160Ch]@2
  float *v55; // [sp+28h] [bp-1608h]@2
  Biome **v56; // [sp+2Ch] [bp-1604h]@1
  int v57; // [sp+30h] [bp-1600h]@2
  int v58; // [sp+34h] [bp-15FCh]@16
  int v59; // [sp+38h] [bp-15F8h]@16
  int v60; // [sp+3Ch] [bp-15F4h]@22
  float *v61; // [sp+40h] [bp-15F0h]@22
  int v62; // [sp+44h] [bp-15ECh]@22
  int v63; // [sp+48h] [bp-15E8h]@1
  signed int v64; // [sp+4Ch] [bp-15E4h]@1
  int v65; // [sp+50h] [bp-15E0h]@1
  float v66; // [sp+54h] [bp-15DCh]@1
  int v67; // [sp+6F8h] [bp-F38h]@1
  int v68; // [sp+6FCh] [bp-F34h]@1
  int v69; // [sp+700h] [bp-F30h]@1
  float v70; // [sp+704h] [bp-F2Ch]@1
  int v71; // [sp+DA8h] [bp-888h]@1
  int v72; // [sp+DACh] [bp-884h]@1
  int v73; // [sp+DB0h] [bp-880h]@1
  float v74; // [sp+DB4h] [bp-87Ch]@1
  char v75; // [sp+1400h] [bp-230h]@1
  int v76; // [sp+1458h] [bp-1D8h]@1
  signed int v77; // [sp+1464h] [bp-1CCh]@1
  signed int v78; // [sp+1468h] [bp-1C8h]@1
  int v79; // [sp+146Ch] [bp-1C4h]@1
  char v80; // [sp+15C0h] [bp-70h]@1

  _R4 = &v75;
  __asm { VMOV            S2, R3 }
  v11 = a3;
  __asm { VLDR            S0, [R4,#0x234] }
  v56 = a3;
  __asm
  {
    VCVT.F32.S32    S16, S2
    VCVT.F32.S32    S18, S0
  }
  v12 = a2;
  v13 = this;
    VSTR            S16, [R5,#0x164]
    VSTR            S18, [R5,#0x168]
  v14 = *((_DWORD *)this + 14);
  v77 = 1128792064;
  v78 = 1128792064;
  PerlinNoise::getRegion(v14, (float *)&v79, (__int64 *)&v80, COERCE_FLOAT(5), 5, (int)&v77);
  _R11 = &v75;
    VLDR            S0, [R11,#0x230]
    VCVT.F32.S32    S0, S0
    VSTR            S16, [R5,#-4]
    VSTR            S0, [R5]
    VSTR            S18, [R5,#4]
  v16 = (PerlinNoise *)*((_DWORD *)v13 + 11);
  v71 = 1091101157;
  v72 = 1082712549;
  v73 = 1091101157;
  PerlinNoise::getRegion(v16, &v74, (const Vec3 *)&v76, 5, 17, 5, (const Vec3 *)&v71);
  v17 = (PerlinNoise *)*((_DWORD *)v13 + 9);
  v18 = &v70;
  v67 = 1143675486;
  v68 = 1146478838;
  v69 = 1143675486;
  PerlinNoise::getRegion(v17, &v70, (const Vec3 *)&v76, 5, 17, 5, (const Vec3 *)&v67);
  v19 = (PerlinNoise *)*((_DWORD *)v13 + 10);
  v63 = 1143675486;
  v64 = 1143675486;
  v65 = 1143675486;
  v20 = &v66;
  PerlinNoise::getRegion(v19, &v66, (const Vec3 *)&v76, 5, 17, 5, (const Vec3 *)&v63);
  __asm { VMOV.F32        S18, #2.0 }
  result = &v74;
  __asm { VMOV.F32        S20, #0.5 }
  v22 = (int)(v11 + 21);
    VMOV.F32        S23, #-1.0
    VLDR            S16, =0.0
    VMOV.F32        S29, #-4.25
    VLDR            S21, =0.05
    VMOV.F32        S31, #-8.5
    VLDR            S25, =0.0019531
    VMOV.F32        S24, #12.0
    VLDR            S22, =0.0039062
    VMOV.F32        S26, #4.0
    VLDR            S28, =-0.33333
    VMOV.F32        S30, #1.0
    VLDR            S17, =-3.3333
  v23 = 0;
  v24 = 0;
  do
    v50 = v24;
    v51 = v22;
    v52 = v20;
    v53 = v18;
    v25 = (int)v20;
    v54 = result;
    v55 = v12;
    v26 = 0;
    v49 = v23 + 5;
    v27 = (int)v12;
    _R9 = result;
    v29 = v18;
    v57 = v24 + 22;
    do
    {
      v30 = 5 * v26;
      __asm { VMOV.F32        S2, S16 }
      v31 = v26 + 1;
      __asm
      {
        VMOV.F32        S4, S16
        VMOV.F32        S6, S16
      }
      _R0 = v56[v57 + 2 * v30];
      v33 = v22;
      __asm { VLDR            S0, [R0,#0xDC] }
      v34 = 0;
      do
        _R2 = *(_DWORD *)(v33 - 40);
        _R3 = *(float *)(v33 + 40);
        __asm
        {
          VLDR            S8, [R2,#0xDC]
          VLDR            S10, [R2,#0xE0]
        }
        _R2 = *(_DWORD *)v33;
          VADD.F32        S12, S8, S18
          VCMPE.F32       S8, S0
          VLDR            S3, [R3,#0xDC]
          VMRS            APSR_nzcv, FPSCR
        v33 += 4;
          VLDR            S14, [R2,#0xDC]
          VADD.F32        S15, S3, S18
          VLDR            S1, [R2,#0xE0]
        _R2 = (int)v13 + v34;
          VADD.F32        S13, S14, S18
          VLDR            S5, [R3,#0xE0]
          VLDR            S7, [R2,#0x58]
          VCMPE.F32       S14, S0
          VLDR            S9, [R2,#0x6C]
        v34 += 4;
          VDIV.F32        S12, S7, S12
          VLDR            S11, [R2,#0x80]
          VDIV.F32        S7, S9, S13
          VDIV.F32        S9, S11, S15
          VMUL.F32        S11, S12, S20
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S12, S11 }
          VMUL.F32        S11, S7, S20
          VCMPE.F32       S3, S0
          VMUL.F32        S8, S12, S8
          VMUL.F32        S10, S12, S10
          VADD.F32        S6, S12, S6
          VADD.F32        S4, S8, S4
          VADD.F32        S2, S10, S2
          __asm { VMOVGT.F32      S7, S11 }
          VMUL.F32        S11, S9, S20
          VMUL.F32        S12, S7, S14
          VMUL.F32        S8, S7, S1
          VADD.F32        S6, S7, S6
          VADD.F32        S4, S12, S4
          VADD.F32        S2, S8, S2
          __asm { VMOVGT.F32      S9, S11 }
          VMUL.F32        S10, S9, S3
          VMUL.F32        S12, S9, S5
          VADD.F32        S6, S9, S6
          VADD.F32        S4, S10, S4
          VADD.F32        S2, S12, S2
      while ( !_ZF );
      __asm { VDIV.F32        S0, S4, S6 }
      _R0 = &v79 + v23;
        VDIV.F32        S2, S2, S6
        VLDR            S6, [R0]
        VMUL.F32        S0, S0, S20
        VLDR            S4, =0.000125
        VLDR            S8, =-0.0000375
        VMUL.F32        S4, S6, S4
        VMUL.F32        S6, S6, S8
        VLDR            S8, =0.9
        VMUL.F32        S2, S2, S8
        VMOV.F32        S8, #-2.0
        VCMPE.F32       S4, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S4, S6 }
        VMOV.F32        S6, #3.0
        VMUL.F32        S6, S4, S6
        VADD.F32        S6, S6, S8
        VMOV.F32        S8, #-0.125
        VCMPE.F32       S6, #0.0
        VADD.F32        S0, S0, S8
        __asm { VMOV.F32        S6, #1.5 }
        v58 = v31;
        v59 = v23;
          VMUL.F32        S4, S4, S6
          VLDR            S6, =0.35714
          VADD.F32        S4, S4, S23
          VCMPE.F32       S4, S23
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S4, S23 }
        __asm { VMUL.F32        S4, S4, S6 }
      else
        __asm { VCMPE.F32       S6, S30 }
          VMOV.F32        S4, #0.125
          __asm { VMOVGT.F32      S6, S30 }
        __asm { VMUL.F32        S4, S6, S4 }
      __asm { VLDR            S6, =0.1 }
      _R11 = 0;
      v61 = _R9;
      v62 = v27;
      _R5 = v27;
        VADD.F32        S19, S2, S6
        VLDR            S2, =0.2
      _R7 = v25;
      v60 = v25;
      __asm { VMUL.F32        S2, S4, S2 }
      _R4 = v29;
        VADD.F32        S0, S0, S2
        VMUL.F32        S0, S0, S29
        VADD.F32        S27, S0, S31
          VLDR            S0, [R9]
          VLDR            S2, [R4]
          VMUL.F32        S0, S0, S21
          VLDR            S4, [R7]
          VMUL.F32        S2, S2, S22
          VMUL.F32        S4, S4, S25
          VADD.F32        S0, S0, S20
          VMOV            R0, S2
          VMOV            R1, S4
          VMOV            R2, S0
        _R0 = j_mce::Math::clampedLerp(_R0, _R1, _R2, _R3);
          VMOV            S0, R11
          VCVT.F32.S32    S0, S0
          VADD.F32        S0, S27, S0
          VMUL.F32        S0, S0, S24
          VDIV.F32        S0, S0, S19
          VCMPE.F32       S0, #0.0
          VMUL.F32        S2, S0, S26
          __asm { VMOVLT.F32      S0, S2 }
          VMOV            S2, R0
          VSUB.F32        S0, S2, S0
        if ( !(_NF ^ _VF) )
          _R0 = _R11 - 13;
          __asm
          {
            VMOV            S2, R0
            VCVT.F32.S32    S2, S2
            VMUL.F32        S4, S2, S28
            VMUL.F32        S2, S2, S17
            VADD.F32        S4, S4, S30
            VMUL.F32        S0, S0, S4
            VADD.F32        S0, S0, S2
          }
        ++_R11;
        __asm { VSTMIA          R5!, {S0} }
        ++_R9;
        _R7 += 4;
        ++_R4;
      while ( _R11 != 17 );
      v29 += 17;
      v22 += 40;
      v27 = v62 + 68;
      _R9 = v61 + 17;
      v26 = v58;
      v25 = v60 + 68;
      v23 = v59 + 1;
    }
    while ( v58 != 5 );
    v12 = v55 + 85;
    result = v54 + 85;
    v20 = v52 + 85;
    v18 = v53 + 85;
    v23 = v49;
    v22 = v51 + 4;
    v24 = v50 + 1;
  while ( v50 != 4 );
  return result;
}


int __fastcall OverworldGenerator::prepareHeights(ChunkSource *a1, int a2, int a3, int a4)
{
  ChunkSource *v4; // r6@1
  int v5; // r7@1
  int v6; // r9@1
  int v7; // r4@1
  Dimension *v8; // r0@1
  Dimension *v9; // r0@1
  void *v10; // r0@1
  float v17; // r1@1
  int v19; // r9@1
  int result; // r0@1
  int v22; // r2@2
  int v23; // r5@3
  int v28; // r1@4
  int v29; // r8@5
  int v30; // r10@5
  signed int v31; // r6@5
  int v32; // r11@6
  int v33; // r0@7
  int v34; // r0@8
  char v35; // r2@9
  int v36; // r1@13
  int v37; // r5@13
  int v38; // r0@14
  char v39; // r1@16
  int v40; // r1@19
  int v41; // r5@19
  int v42; // r0@20
  char v43; // r1@22
  int v44; // r0@26
  int v45; // r1@26
  int v46; // r0@26
  int v47; // [sp+8h] [bp-8E8h]@2
  char v48; // [sp+Ch] [bp-8E4h]@1
  int v49; // [sp+10h] [bp-8E0h]@2
  int v50; // [sp+14h] [bp-8DCh]@2
  int v51; // [sp+18h] [bp-8D8h]@3
  int v52; // [sp+20h] [bp-8D0h]@3
  int v53; // [sp+28h] [bp-8C8h]@3
  int v54; // [sp+2Ch] [bp-8C4h]@4
  int v55; // [sp+30h] [bp-8C0h]@1
  int v56; // [sp+34h] [bp-8BCh]@3
  int v57; // [sp+38h] [bp-8B8h]@4
  int v58; // [sp+3Ch] [bp-8B4h]@5
  char v59; // [sp+48h] [bp-8A8h]@1
  int v60; // [sp+4Ch] [bp-8A4h]@5
  ChunkSource *v61; // [sp+50h] [bp-8A0h]@1
  char v62; // [sp+54h] [bp-89Ch]@1
  float v63; // [sp+1E4h] [bp-70Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v61 = a1;
  v8 = (Dimension *)ChunkSource::getDimension(a1);
  v9 = Dimension::getBiomes(v8);
  v10 = ThreadLocal<BiomeSource>::getLocal((int)v9);
  (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  v55 = 0;
  OverworldGenerator::getHeights(v4, &v63, (Biome **)&v62, 4 * v6, 0, 4 * v5);
  _R0 = *(_DWORD *)(v7 + 20);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::log2(_R0, v17);
    VMOV.F32        S16, #0.125
    VCVTR.S32.F32   S0, S0
  v19 = *(_DWORD *)(v7 + 20);
    VMOV.F32        S18, #0.25
  v48 = _R0;
  v59 = _R0 + 4;
  result = 0;
  do
    v47 = result;
    v22 = 0;
    v50 = 5 * result;
    v49 = 5 * result + 5;
    do
    {
      v23 = 0;
      v51 = v22;
      v56 = 4 * v22 << v48;
      v53 = 17 * (v49 + v22);
      v52 = 17 * (v50 + v22);
      do
      {
        _R0 = &v63 + v52 + v23;
        _R3 = &v63 + v53 + 17 + v23;
        _R2 = &v63 + v53 + v23;
        _R1 = &v63 + v52 + 17 + v23;
        __asm
        {
          VLDR            S26, [R0]
          VLDR            S6, [R0,#4]
          VLDR            S20, [R3]
          VLDR            S0, [R3,#4]
          VSUB.F32        S6, S6, S26
          VLDR            S22, [R2]
          VLDR            S2, [R2,#4]
          VSUB.F32        S0, S0, S20
          VLDR            S24, [R1]
          VLDR            S4, [R1,#4]
          VSUB.F32        S2, S2, S22
        }
        v28 = 0;
        v54 = v23;
        __asm { VSUB.F32        S4, S4, S24 }
        v57 = 8 * v23;
          VMUL.F32        S19, S6, S16
          VMUL.F32        S28, S0, S16
          VMUL.F32        S30, S2, S16
          VMUL.F32        S17, S4, S16
        do
          __asm
          {
            VSUB.F32        S0, S20, S24
            VSUB.F32        S2, S22, S26
          }
          v29 = v55;
          __asm { VMOV.F32        S25, S26 }
          v30 = v28 + v57;
          __asm { VMOV.F32        S27, S24 }
          v31 = 4;
          v58 = v28;
          v60 = v56 | (v28 + v57);
            VMUL.F32        S21, S0, S18
            VMUL.F32        S23, S2, S18
          do
            __asm
            {
              VSUB.F32        S0, S27, S25
              VCMPE.F32       S25, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            v32 = v60 | (v29 << v59);
            __asm { VMUL.F32        S29, S0, S18 }
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              v34 = ChunkSource::getDimension(v61);
              v32 = *(_DWORD *)(v7 + 20) + v32 - v19;
              if ( v30 >= *(_WORD *)(v34 + 20) )
              {
                v33 = *(_DWORD *)v7;
                v35 = BlockID::AIR;
              }
              else
                v35 = *(_BYTE *)(Block::mStillWater + 4);
              v19 = *(_DWORD *)(v7 + 20);
              *(_BYTE *)(v33 + v32) = v35;
            else
              v33 = *(_DWORD *)v7;
              *(_BYTE *)(*(_DWORD *)v7 + v32) = *(_BYTE *)(Block::mStone + 4);
              VADD.F32        S31, S25, S29
              VCMPE.F32       S31, #0.0
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v36 = Block::mStone;
              v37 = v19 + v32;
LABEL_16:
              v39 = *(_BYTE *)(v36 + 4);
              goto LABEL_18;
            v38 = ChunkSource::getDimension(v61);
            v19 = *(_DWORD *)(v7 + 20);
            v37 = v19 + v32;
            if ( v30 < *(_WORD *)(v38 + 20) )
              v36 = Block::mStillWater;
              goto LABEL_16;
            v33 = *(_DWORD *)v7;
            v39 = BlockID::AIR;
LABEL_18:
            __asm { VADD.F32        S31, S31, S29 }
            *(_BYTE *)(v33 + v37) = v39;
              v40 = Block::mStone;
              v41 = v37 + v19;
LABEL_22:
              v43 = *(_BYTE *)(v40 + 4);
              goto LABEL_24;
            v42 = ChunkSource::getDimension(v61);
            v41 = v37 + v19;
            if ( v30 < *(_WORD *)(v42 + 20) )
              v40 = Block::mStillWater;
              goto LABEL_22;
            v43 = BlockID::AIR;
LABEL_24:
            __asm { VADD.F32        S0, S31, S29 }
            *(_BYTE *)(v33 + v41) = v43;
              VCMPE.F32       S0, #0.0
              v44 = ChunkSource::getDimension(v61);
              v45 = *(_WORD *)(v44 + 20);
              v46 = v19 + v41;
              if ( v30 >= v45 )
                *(_BYTE *)(*(_DWORD *)v7 + v46) = BlockID::AIR;
                *(_BYTE *)(*(_DWORD *)v7 + v46) = *(_BYTE *)(Block::mStillWater + 4);
              *(_BYTE *)(v33 + v19 + v41) = *(_BYTE *)(Block::mStone + 4);
            __asm { VADD.F32        S27, S27, S21 }
            ++v29;
            __asm { VADD.F32        S25, S25, S23 }
            --v31;
          while ( v31 );
            VADD.F32        S20, S20, S28
            VADD.F32        S22, S22, S30
            VADD.F32        S24, S24, S17
          v28 = v58 + 1;
          __asm { VADD.F32        S26, S26, S19 }
        while ( v58 != 7 );
        v23 = v54 + 1;
      }
      while ( v54 != 15 );
      v22 = v51 + 1;
    }
    while ( v51 != 3 );
    v55 += 4;
    result = v47 + 1;
  while ( v47 != 3 );
  return result;
}


unsigned __int8 *__fastcall OverworldGenerator::loadChunk(OverworldGenerator *this, LevelChunk *a2, bool a3)
{
  LevelChunk *v3; // r8@1
  OverworldGenerator *v4; // r10@1
  __int64 *v5; // r9@1
  void *v6; // r0@1
  int v7; // r7@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r0@1
  signed int v11; // r6@1
  unsigned int v12; // r0@1
  signed int v13; // r3@1
  signed int v14; // r2@1
  int v15; // r0@2
  int v16; // r1@2
  Dimension *v17; // r0@3
  Dimension *v18; // r0@3
  void *v19; // r6@3
  void (__fastcall *v20)(void *, LevelChunk *, int, _DWORD); // r4@3
  int v21; // r5@3
  char *v22; // r0@3
  Dimension *v23; // r3@4
  __int64 v24; // r0@4
  Dimension *v25; // r3@4
  __int64 v26; // r0@4
  Random *v28; // [sp+4h] [bp-44h]@1
  int v29; // [sp+8h] [bp-40h]@3
  int v30; // [sp+Ch] [bp-3Ch]@3
  int v31; // [sp+10h] [bp-38h]@3
  int v32; // [sp+14h] [bp-34h]@3
  int v33; // [sp+18h] [bp-30h]@3
  int v34; // [sp+1Ch] [bp-2Ch]@3
  signed int v35; // [sp+20h] [bp-28h]@3

  v3 = a2;
  v4 = this;
  v5 = (__int64 *)LevelChunk::getPosition(a2);
  v6 = ThreadLocal<OverworldGenerator::ThreadData>::getLocal((int)v4 + 164);
  v7 = (int)v6;
  v8 = (unsigned __int64)*v5 >> 32;
  v9 = *v5;
  v28 = (Random *)((char *)v6 + 55304);
  j_Random::_checkThreadId((Random *)((char *)v6 + 55304));
  v10 = 341872712 * v9;
  v11 = 55312;
  v12 = v10 + 132899541 * v8;
  *(_DWORD *)(v7 + 55304) = v12;
  *(_DWORD *)(v7 + 57804) = 625;
  *(_BYTE *)(v7 + 57808) = 0;
  *(_DWORD *)(v7 + 57812) = 0;
  v13 = -397;
  *(_DWORD *)(v7 + 55308) = v12;
  v14 = 1;
  do
  {
    v15 = v12 ^ (v12 >> 30);
    v16 = v13++ + 1812433253 * v15;
    v12 = v14++ + 1812433253 * v15;
    *(_DWORD *)(v7 + v11) = v16 + 398;
    v11 += 4;
  }
  while ( v13 );
  *(_DWORD *)(v7 + 57804) = 624;
  *(_DWORD *)(v7 + 57816) = 398;
  j___aeabi_memclr(v7 + 6144, 49152);
  v33 = 16;
  v34 = 128;
  v35 = 16;
  v29 = v7 + 6144;
  v30 = v7 + 38912;
  v31 = v7 + 38912;
  v32 = v7 + 55296;
  v17 = (Dimension *)ChunkSource::getDimension(v4);
  v18 = Dimension::getBiomes(v17);
  v19 = ThreadLocal<BiomeSource>::getLocal((int)v18);
  v20 = *(void (__fastcall **)(void *, LevelChunk *, int, _DWORD))(*(_DWORD *)v19 + 8);
  v21 = *(_DWORD *)j_LevelChunk::getMin(v3);
  v22 = j_LevelChunk::getMin(v3);
  v20(v19, v3, v21, *((_DWORD *)v22 + 2));
  (*(void (__fastcall **)(OverworldGenerator *, int *, _DWORD, _DWORD))(*(_DWORD *)v4 + 76))(
    v4,
    &v29,
    *v5,
    (unsigned __int64)*v5 >> 32);
  OverworldGenerator::buildSurfaces((int)v4, v7, (int)&v29, v3, v5);
  if ( !*((_BYTE *)v4 + 32) )
    v23 = (Dimension *)ChunkSource::getDimension(v4);
    LODWORD(v24) = (char *)v4 + 928;
    LargeCaveFeature::apply(v24, (int)v5, v23, v28);
    v25 = (Dimension *)ChunkSource::getDimension(v4);
    LODWORD(v26) = (char *)v4 + 929;
    CanyonFeature::apply(v26, (int)v5, v25, v28);
  LevelChunk::setAllBlockIDs((int)v3, v29, v30, (signed __int16)v34);
  LevelChunk::setAllBlockData((int)v3, v31, v32, (signed __int16)v34);
  j_LevelChunk::recomputeHeightMap((unsigned int)v3);
  if ( !LevelChunk::getGenerator(v3) )
    LevelChunk::_setGenerator(v3, v4);
  return LevelChunk::changeState((int)v3, 1, 2u);
}


int __fastcall OverworldGenerator::OverworldGenerator(int a1, Dimension *a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10@1
  char v5; // r5@1
  int v6; // r11@1
  int v7; // r9@1
  __int64 v8; // r0@1
  __int64 v9; // r0@3
  __int64 v10; // r0@3
  __int64 v11; // r0@3
  __int64 v12; // r0@3
  __int64 v13; // r0@3
  int v14; // r0@3
  signed int v15; // r1@3
  int v16; // r6@4
  int v17; // r6@4
  int *v18; // r5@4
  PerlinNoise *v19; // r5@5
  PerlinNoise *v20; // r0@5
  PerlinNoise *v21; // r0@6
  PerlinNoise *v22; // r5@7
  PerlinNoise *v23; // r0@7
  PerlinNoise *v24; // r0@8
  PerlinNoise *v25; // r5@9
  PerlinNoise *v26; // r0@9
  PerlinNoise *v27; // r0@10
  PerlinSimplexNoise *v28; // r5@11
  PerlinSimplexNoise *v29; // r0@11
  PerlinSimplexNoise *v30; // r0@12
  PerlinNoise *v31; // r5@13
  PerlinNoise *v32; // r0@13
  PerlinNoise *v33; // r0@14
  PerlinNoise *v34; // r5@15
  PerlinNoise *v35; // r0@15
  PerlinNoise *v36; // r0@16
  PerlinNoise *v37; // r5@17
  float v38; // r1@17
  PerlinNoise *v39; // r0@17
  PerlinNoise *v40; // r0@18
  signed int v41; // r6@19
  signed int v42; // r10@19
  float v53; // r1@20
  float v56; // r1@20
  float v58; // r1@20
  float v60; // r1@20
  unsigned int v63; // [sp+24h] [bp-A1Ch]@3
  unsigned int v64; // [sp+28h] [bp-A18h]@3
  int v65; // [sp+9E8h] [bp-58h]@3
  char v66; // [sp+9ECh] [bp-54h]@3
  int v67; // [sp+9F0h] [bp-50h]@3
  int v68; // [sp+9F4h] [bp-4Ch]@5
  void *v69; // [sp+9F8h] [bp-48h]@1
  void (*v70)(void); // [sp+A00h] [bp-40h]@1
  signed int (__fastcall *v71)(_DWORD *); // [sp+A04h] [bp-3Ch]@1

  v4 = a3;
  v5 = a4;
  v6 = a1;
  ChunkSource::ChunkSource(a1, a2, 16);
  WorldGenerator::WorldGenerator((WorldGenerator *)(v6 + 24));
  *(_DWORD *)v6 = &off_2719588;
  *(_DWORD *)(v6 + 24) = &off_27195F4;
  *(_BYTE *)(v6 + 32) = v5;
  *(_DWORD *)(v6 + 36) = 0;
  v7 = v6 + 36;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  v69 = j_operator new(1u);
  v71 = sub_1956AF0;
  v70 = (void (*)(void))sub_1956B94;
  ThreadLocal<OverworldGenerator::ThreadData>::ThreadLocal(v6 + 164, (int)&v69);
  if ( v70 )
    v70();
  LODWORD(v8) = v6 + 204;
  VillageFeature::VillageFeature(v8);
  LODWORD(v9) = v6 + 320;
  HIDWORD(v9) = v6 + 204;
  StrongholdFeature::StrongholdFeature(v9, v4);
  LODWORD(v10) = v6 + 472;
  v11 = __PAIR__(v4, RandomScatteredLargeFeature::RandomScatteredLargeFeature(v10));
  LODWORD(v11) = v6 + 584;
  StructureFeature::StructureFeature(v11);
  *(_DWORD *)(v6 + 584) = &off_27237B4;
  MonsterRoomFeature::MonsterRoomFeature((MonsterRoomFeature *)(v6 + 676));
  LODWORD(v12) = v6 + 688;
  v13 = __PAIR__(v4, OceanMonumentFeature::OceanMonumentFeature(v12));
  LODWORD(v13) = v6 + 812;
  WoodlandMansionFeature::WoodlandMansionFeature(v13, v4);
  v63 = v4;
  v65 = 625;
  v14 = 0;
  v15 = 1;
  v66 = 0;
  v67 = 0;
  v64 = v4;
  do
  {
    v16 = v4 ^ (v4 >> 30);
    v4 = v15++ + 1812433253 * v16;
    v17 = v14 + 1812433253 * v16 + 1;
    v18 = (int *)(&v63 + v14++);
    v18[2] = v17;
  }
  while ( v14 != 397 );
  v65 = 624;
  v68 = 398;
  v19 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v19, (Random *)&v63, 16LL);
  v20 = *(PerlinNoise **)v7;
  *(_DWORD *)v7 = v19;
  if ( v20 )
    v21 = PerlinNoise::~PerlinNoise(v20);
    j_operator delete((void *)v21);
  v22 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v22, (Random *)&v63, 16LL);
  v23 = *(PerlinNoise **)(v6 + 40);
  *(_DWORD *)(v6 + 40) = v22;
  if ( v23 )
    v24 = PerlinNoise::~PerlinNoise(v23);
    j_operator delete((void *)v24);
  v25 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v25, (Random *)&v63, 8LL);
  v26 = *(PerlinNoise **)(v6 + 44);
  *(_DWORD *)(v6 + 44) = v25;
  if ( v26 )
    v27 = PerlinNoise::~PerlinNoise(v26);
    j_operator delete((void *)v27);
  v28 = (PerlinSimplexNoise *)j_operator new(0x14u);
  PerlinSimplexNoise::PerlinSimplexNoise(v28, (Random *)&v63, 4);
  v29 = *(PerlinSimplexNoise **)(v6 + 48);
  *(_DWORD *)(v6 + 48) = v28;
  if ( v29 )
    v30 = j_PerlinSimplexNoise::~PerlinSimplexNoise(v29);
    j_operator delete((void *)v30);
  v31 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v31, (Random *)&v63, 10LL);
  v32 = *(PerlinNoise **)(v6 + 52);
  *(_DWORD *)(v6 + 52) = v31;
  if ( v32 )
    v33 = PerlinNoise::~PerlinNoise(v32);
    j_operator delete((void *)v33);
  v34 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v34, (Random *)&v63, 16LL);
  v35 = *(PerlinNoise **)(v6 + 56);
  *(_DWORD *)(v6 + 56) = v34;
  if ( v35 )
    v36 = PerlinNoise::~PerlinNoise(v35);
    j_operator delete((void *)v36);
  v37 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v37, (Random *)&v63, 8LL);
  v39 = *(PerlinNoise **)(v6 + 60);
  *(_DWORD *)(v6 + 60) = v37;
  if ( v39 )
    v40 = PerlinNoise::~PerlinNoise(v39);
    j_operator delete((void *)v40);
  v41 = -2;
  v42 = 64;
    _R8 = v41 * v41;
    __asm { VLDR            S18, =0.2 }
    _R0 = v41 * v41 + 4;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VADD.F32        S0, S0, S18
      VMOV            R5, S0
    }
    _R0 = j_mce::Math::sqrt(_R5, v38);
    __asm { VMOV            S0, R0 }
    _R0 = v41 * v41 + 1;
      VMOV.F32        S16, #10.0
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S16, S0
      VADD.F32        S2, S2, S18
      VSTR            S0, [R4]
      VMOV            R7, S2
    _R0 = j_mce::Math::sqrt(_R7, v53);
      VMOV            S2, R8
      VSTR            S0, [R4,#0x14]
      VMOV            R0, S2
    _R0 = j_mce::Math::sqrt(_R0, v56);
      VSTR            S0, [R4,#0x28]
    _R0 = j_mce::Math::sqrt(_R7, v58);
      VSTR            S0, [R4,#0x3C]
    _R0 = j_mce::Math::sqrt(_R5, v60);
    ++v41;
    v42 += 4;
      VSTR            S0, [R4,#0x50]
  while ( !_ZF );
  RandomScatteredLargeFeature::initMobSpawnTypes(
    (RandomScatteredLargeFeature *)(v6 + 472),
    *(HardcodedSpawnAreaRegistry **)(v6 + 28));
  OceanMonumentFeature::initMobSpawnTypes((OceanMonumentFeature *)(v6 + 688), *(HardcodedSpawnAreaRegistry **)(v6 + 28));
  return v6;
}


int (**__fastcall OverworldGenerator::postProcessMobsAt(OverworldGenerator *this, BlockSource *a2, int a3, int a4, Random *a5))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  OverworldGenerator *v5; // r7@1
  int v6; // r8@1
  int v7; // r5@1
  BlockSource *v8; // r6@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  StructureFeature::postProcessMobsAt((OverworldGenerator *)((char *)this + 204), a2, a3, a4, a5);
  StructureFeature::postProcessMobsAt((OverworldGenerator *)((char *)v5 + 472), v8, v7, v6, a5);
  StructureFeature::postProcessMobsAt((OverworldGenerator *)((char *)v5 + 584), v8, v7, v6, a5);
  StructureFeature::postProcessMobsAt((OverworldGenerator *)((char *)v5 + 688), v8, v7, v6, a5);
  return j_j_j__ZN16StructureFeature17postProcessMobsAtEP11BlockSourceiiR6Random(
           (OverworldGenerator *)((char *)v5 + 812),
           v8,
           v7,
           v6,
           a5);
}


void __fastcall OverworldGenerator::prepareStructureBlueprints(OverworldGenerator *this, const ChunkPos *a2)
{
  const ChunkPos *v2; // r4@1
  OverworldGenerator *v3; // r5@1
  Dimension *v4; // r0@1
  Dimension *v5; // r0@2
  Dimension *v6; // r0@2
  Dimension *v7; // r0@2
  Dimension *v8; // r0@2
  Dimension *v9; // r1@2

  v2 = a2;
  v3 = this;
  v4 = (Dimension *)ChunkSource::getDimension(this);
  StructureFeature::createBlueprints((OverworldGenerator *)((char *)v3 + 204), v4, v2);
  if ( !*((_BYTE *)v3 + 32) )
  {
    v5 = (Dimension *)ChunkSource::getDimension(v3);
    StructureFeature::createBlueprints((OverworldGenerator *)((char *)v3 + 584), v5, v2);
    v6 = (Dimension *)ChunkSource::getDimension(v3);
    StructureFeature::createBlueprints((OverworldGenerator *)((char *)v3 + 320), v6, v2);
    v7 = (Dimension *)ChunkSource::getDimension(v3);
    StructureFeature::createBlueprints((OverworldGenerator *)((char *)v3 + 472), v7, v2);
    v8 = (Dimension *)ChunkSource::getDimension(v3);
    StructureFeature::createBlueprints((OverworldGenerator *)((char *)v3 + 688), v8, v2);
    v9 = (Dimension *)ChunkSource::getDimension(v3);
    j_j_j__ZN16StructureFeature16createBlueprintsER9DimensionRK8ChunkPos(
      (OverworldGenerator *)((char *)v3 + 812),
      v9,
      v2);
  }
}


int __fastcall OverworldGenerator::getFeatureTypeAt(OverworldGenerator *this, const BlockPos *a2)
{
  const BlockPos *v2; // r5@1
  OverworldGenerator *v3; // r4@1
  int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( StructureFeature::isInsideBoundingFeature(
         (OverworldGenerator *)((char *)this + 688),
         *(_DWORD *)a2,
         *((_DWORD *)v2 + 1),
         *((_DWORD *)v2 + 2)) )
  {
    result = 4;
  }
  else if ( StructureFeature::isInsideBoundingFeature(
              (OverworldGenerator *)((char *)v3 + 584),
              *(_DWORD *)v2,
              *((_DWORD *)v2 + 1),
              *((_DWORD *)v2 + 2)) )
    result = 3;
              (OverworldGenerator *)((char *)v3 + 320),
    result = 5;
              (OverworldGenerator *)((char *)v3 + 204),
    result = 7;
              (OverworldGenerator *)((char *)v3 + 472),
    result = 6;
  else
    result = StructureFeature::isInsideBoundingFeature(
               (OverworldGenerator *)((char *)v3 + 812),
               *(_DWORD *)v2,
               *((_DWORD *)v2 + 1),
               *((_DWORD *)v2 + 2));
    if ( result )
      result = 8;
  return result;
}


void __fastcall OverworldGenerator::prepareStructureBlueprints(OverworldGenerator *this, const ChunkPos *a2)
{
  OverworldGenerator::prepareStructureBlueprints(this, a2);
}


signed int __fastcall OverworldGenerator::postProcess(OverworldGenerator *this, ChunkViewSource *a2)
{
  ChunkViewSource *v2; // r6@1
  char *v3; // r0@1
  int v4; // r1@1
  int v5; // r0@1
  int v6; // r0@1
  BlockSourceListener *v7; // r4@2
  int v8; // r0@2
  char *v9; // r0@2
  void *v10; // r8@2
  unsigned __int64 v11; // kr00_8@2
  unsigned int v12; // r5@2
  Random *v13; // r10@2
  _DWORD *v14; // r0@2
  signed int v15; // r1@2
  signed int v16; // r2@2
  int v17; // r3@3
  int v18; // r7@3
  unsigned int v19; // r9@4
  unsigned int v20; // r5@4
  unsigned __int64 v21; // kr08_8@4
  int v22; // r6@4
  signed int v23; // r3@4
  unsigned int v24; // r0@4
  signed int v25; // r2@4
  _DWORD *v26; // r1@4
  int v27; // r0@5
  int v28; // r7@5
  int v29; // r0@6
  unsigned int v30; // r4@9
  signed __int64 v31; // kr10_8@9
  char v32; // r5@9
  unsigned int v33; // r0@9
  signed __int64 v34; // kr18_8@9
  unsigned int v35; // r9@13
  unsigned int v36; // r4@13
  unsigned int v37; // r4@13
  unsigned int v38; // r0@13
  unsigned int v39; // r5@13
  signed __int64 v40; // kr28_8@14
  char *v41; // r0@16
  signed int v42; // r4@17
  int v43; // r5@18
  unsigned int *v44; // r1@19
  unsigned int v45; // r0@21
  unsigned int *v46; // r6@25
  unsigned int v47; // r0@27
  unsigned int v49; // r4@35
  signed int v50; // r2@35
  _DWORD *v51; // r0@35
  signed int v52; // r1@35
  int v53; // r3@36
  int v54; // r7@36
  unsigned int v55; // r8@37
  unsigned int v56; // r5@37
  unsigned __int64 v57; // kr30_8@37
  int v58; // r6@37
  int v59; // r2@37
  signed int v60; // r3@37
  unsigned int v61; // r0@37
  _DWORD *v62; // r1@37
  signed int v63; // r2@37
  int v64; // r0@38
  int v65; // r7@38
  OverworldGenerator *v66; // r4@40
  signed int v67; // r9@40
  char v68; // r8@41
  char v69; // r6@41
  char v70; // r0@41
  Level *v71; // r0@42
  char *v72; // r0@42
  Level *v73; // r0@43
  char *v74; // r0@43
  char *v75; // r0@44
  char *v76; // r0@44
  unsigned __int64 v77; // kr38_8@45
  int v78; // r4@45
  signed int v79; // r3@45
  unsigned int v80; // r0@45
  _DWORD *v81; // r1@45
  signed int v82; // r2@45
  int v83; // r0@46
  int v84; // r7@46
  void (__fastcall *v85)(int, char *, Random *, char *); // r4@47
  char *v86; // r3@47
  int v87; // r0@47
  int v88; // r1@47
  int v89; // r10@48
  int v90; // r8@48
  OverworldGenerator *v91; // r0@51
  int v92; // [sp+8h] [bp-1A0h]@37
  int v93; // [sp+Ch] [bp-19Ch]@37
  _DWORD *v94; // [sp+10h] [bp-198h]@4
  int v95; // [sp+14h] [bp-194h]@2
  void *v96; // [sp+18h] [bp-190h]@4
  int v97; // [sp+1Ch] [bp-18Ch]@2
  _DWORD *v98; // [sp+20h] [bp-188h]@4
  _BYTE *v99; // [sp+24h] [bp-184h]@2
  _DWORD *v100; // [sp+28h] [bp-180h]@2
  unsigned int *v101; // [sp+2Ch] [bp-17Ch]@2
  int v102; // [sp+30h] [bp-178h]@2
  unsigned __int64 *v103; // [sp+34h] [bp-174h]@1
  OverworldGenerator *v104; // [sp+38h] [bp-170h]@1
  int v105; // [sp+38h] [bp-170h]@48
  char v106; // [sp+3Ch] [bp-16Ch]@52
  char v107; // [sp+3Dh] [bp-16Bh]@52
  char v108; // [sp+40h] [bp-168h]@50
  char v109; // [sp+41h] [bp-167h]@50
  int v110; // [sp+44h] [bp-164h]@49
  int v111; // [sp+48h] [bp-160h]@49
  int v112; // [sp+4Ch] [bp-15Ch]@49
  int v113; // [sp+50h] [bp-158h]@49
  int v114; // [sp+54h] [bp-154h]@49
  int v115; // [sp+58h] [bp-150h]@49
  char v116; // [sp+5Ch] [bp-14Ch]@49
  int v117; // [sp+60h] [bp-148h]@49
  int v118; // [sp+64h] [bp-144h]@49
  void **v119; // [sp+68h] [bp-140h]@44
  int v120; // [sp+74h] [bp-134h]@41
  int v121; // [sp+78h] [bp-130h]@41
  int v122; // [sp+7Ch] [bp-12Ch]@41
  char v123; // [sp+80h] [bp-128h]@16
  char v124; // [sp+84h] [bp-124h]@16
  unsigned int v125; // [sp+94h] [bp-114h]@16
  unsigned int v126; // [sp+98h] [bp-110h]@16
  unsigned int v127; // [sp+9Ch] [bp-10Ch]@16
  char v128; // [sp+A0h] [bp-108h]@33
  char v129; // [sp+A4h] [bp-104h]@33
  unsigned int v130; // [sp+B4h] [bp-F4h]@33
  int v131; // [sp+B8h] [bp-F0h]@33
  unsigned int v132; // [sp+BCh] [bp-ECh]@33
  int v133; // [sp+C0h] [bp-E8h]@2
  signed int v134; // [sp+C8h] [bp-E0h]@2
  int v135; // [sp+CCh] [bp-DCh]@2
  void *v136; // [sp+D0h] [bp-D8h]@59
  void *ptr; // [sp+DCh] [bp-CCh]@57
  char v138; // [sp+F0h] [bp-B8h]@2
  char v139; // [sp+160h] [bp-48h]@1
  LevelChunk *v140; // [sp+170h] [bp-38h]@1
  int v141; // [sp+174h] [bp-34h]@18
  int v142; // [sp+178h] [bp-30h]@1
  int v143; // [sp+17Ch] [bp-2Ch]@1

  v2 = a2;
  v104 = this;
  v3 = ChunkViewSource::getArea(a2);
  v4 = *((_DWORD *)v3 + 12);
  v5 = *((_DWORD *)v3 + 14);
  v142 = v4 + 1;
  v143 = v5 + 1;
  (*(void (__fastcall **)(LevelChunk **, ChunkViewSource *, int *))(*(_DWORD *)v2 + 16))(&v140, v2, &v142);
  v103 = (unsigned __int64 *)LevelChunk::getPosition(v140);
  v6 = LevelChunk::getDimension(v140);
  PostprocessingManager::tryLock((PostprocessingManager *)&v139, *(const ChunkPos **)(v6 + 192), v103);
  if ( PostprocessingManager::Owns::operator bool(&v139) != 1 )
  {
    v42 = 0;
    goto LABEL_18;
  }
  v7 = (BlockSourceListener *)ChunkSource::getLevel(v2);
  v8 = ChunkSource::getDimension(v2);
  j_BlockSource::BlockSource((int)&v138, v7, v8, (int)v2, 0, 1);
  v133 = 0;
  j___aeabi_memclr8((int)&v134, 33);
  v134 = 1;
  v135 = 0;
  BlockSource::setTickingQueue((BlockSource *)&v138, (BlockTickingQueue *)&v133);
  v9 = j_LevelChunk::getMax(v140);
  v95 = j_BlockSource::getBiome((BlockSource *)&v138, (const BlockPos *)v9);
  v10 = ThreadLocal<OverworldGenerator::ThreadData>::getLocal((int)v104 + 164);
  v11 = *v103;
  v12 = j_Level::getSeed(*((Level **)v104 + 2));
  v13 = (Random *)((char *)v10 + 55304);
  j_Random::_checkThreadId((Random *)((char *)v10 + 55304));
  v102 = 16 * HIDWORD(v11);
  v97 = 16 * v11;
  *((_DWORD *)v10 + 13826) = v12;
  *((_DWORD *)v10 + 14451) = 625;
  *((_BYTE *)v10 + 57808) = 0;
  *((_DWORD *)v10 + 14453) = 0;
  *((_DWORD *)v10 + 13827) = v12;
  v14 = (char *)v10 + 55312;
  v101 = (unsigned int *)((char *)v10 + 55308);
  v99 = (char *)v10 + 57808;
  v15 = 1;
  v16 = -397;
  v100 = (char *)v10 + 57812;
  do
    v17 = v12 ^ (v12 >> 30);
    v18 = v16++ + 1812433253 * v17;
    v12 = v15++ + 1812433253 * v17;
    *v14 = v18 + 398;
    ++v14;
  while ( v16 );
  *((_DWORD *)v10 + 14451) = 624;
  v94 = (char *)v10 + 57804;
  *((_DWORD *)v10 + 14454) = 398;
  v19 = j_Random::_genRandInt32((Random *)((char *)v10 + 55304));
  v20 = j_Random::_genRandInt32((Random *)((char *)v10 + 55304));
  v21 = *v103;
  v22 = j_Level::getSeed(*((Level **)v104 + 2));
  v98 = (char *)v10 + 57816;
  v23 = -397;
  v96 = v10;
  v24 = (((v19 >> 1) | 1) * v21 + HIDWORD(v21) * ((v20 >> 1) | 1)) ^ v22;
  *(_DWORD *)v13 = v24;
  *v99 = 0;
  *v100 = 0;
  v25 = 1;
  *v101 = v24;
  v26 = (char *)v10 + 55312;
    v27 = v24 ^ (v24 >> 30);
    v28 = v23++ + 1812433253 * v27;
    v24 = v25++ + 1812433253 * v27;
    *v26 = v28 + 398;
    ++v26;
  while ( v23 );
  *v94 = 624;
  *v98 = 398;
  v29 = *(_DWORD *)(v95 + 268);
  if ( *(_DWORD *)(Biome::desert + 268) == v29
    || *(_DWORD *)(Biome::desertHills + 268) == v29
    || j_Random::_genRandInt32(v13) & 3
    || (v30 = j_Random::_genRandInt32(v13),
        v31 = 954437177LL * v30,
        v32 = j_Random::_genRandInt32(v13),
        v33 = j_Random::_genRandInt32(v13),
        v34 = 954437177LL * v33,
        (v32 & 0x7Fu) <= 0x3B)
    && *((_BYTE *)v104 + 32) )
    if ( *((_BYTE *)v104 + 32) )
      goto LABEL_35;
    if ( j_Random::_genRandInt32(v13) & 7 )
    v35 = j_Random::_genRandInt32(v13);
    v36 = j_Random::_genRandInt32(v13);
    v37 = j_Random::_genRandInt32(v13) % (v36 % 0x78 + 8);
    v38 = j_Random::_genRandInt32(v13);
    v39 = v38;
    if ( v37 < 0x3C )
    v40 = 954437177LL * v38;
    if ( v37 >= 0x40 )
    {
      if ( j_Random::_genRandInt32(v13) % 0xA )
        goto LABEL_35;
    }
    v125 = v35 % 9 + (v97 | 3);
    v126 = v37;
    v127 = (v102 | 3) + v39 - 9 * (HIDWORD(v40) >> 1);
    v123 = *(_BYTE *)(Block::mStillLava + 4);
    LakeFeature::LakeFeature((Feature *)&v124, &v123);
    LakeFeature::place((LakeFeature *)&v124, (BlockSource *)&v138, (const BlockPos *)&v125, v13);
    v41 = &v124;
  else
    v130 = v30 - 9 * (HIDWORD(v31) >> 1) + (v97 | 3);
    v131 = v32 & 0x7F;
    v132 = v33 - 9 * (HIDWORD(v34) >> 1) + (v102 | 3);
    v128 = *(_BYTE *)(Block::mStillWater + 4);
    LakeFeature::LakeFeature((Feature *)&v129, &v128);
    LakeFeature::place((LakeFeature *)&v129, (BlockSource *)&v138, (const BlockPos *)&v130, v13);
    v41 = &v129;
  Feature::~Feature((Feature *)v41);
LABEL_35:
  v49 = j_Level::getSeed(*((Level **)v104 + 2));
  j_Random::_checkThreadId(v13);
  *(_DWORD *)v13 = v49;
  v50 = -397;
  *v94 = 625;
  *v101 = v49;
  v51 = (char *)v10 + 55312;
  v52 = 1;
    v53 = v49 ^ (v49 >> 30);
    v54 = v50++ + 1812433253 * v53;
    v49 = v52++ + 1812433253 * v53;
    *v51 = v54 + 398;
    ++v51;
  while ( v50 );
  v55 = j_Random::_genRandInt32(v13);
  v56 = j_Random::_genRandInt32(v13);
  v57 = *v103;
  v58 = j_Level::getSeed(*((Level **)v104 + 2));
  v59 = (v56 >> 1) | 1;
  v92 = v59;
  v93 = (v55 >> 1) | 1;
  v60 = -397;
  v61 = (v57 * v93 + HIDWORD(v57) * v59) ^ v58;
  *(_DWORD *)v13 = v61;
  *v101 = v61;
  v62 = (char *)v96 + 55312;
  v63 = 1;
    v64 = v61 ^ (v61 >> 30);
    v65 = v60++ + 1812433253 * v64;
    v61 = v63++ + 1812433253 * v64;
    *v62 = v65 + 398;
    ++v62;
  while ( v60 );
  (*(void (__fastcall **)(char *, char *, Random *, _DWORD))(*((_DWORD *)v104 + 51) + 16))(
    (char *)v104 + 204,
    &v138,
    v13,
    *v103);
  if ( !*((_BYTE *)v104 + 32) )
    v66 = v104;
    (*(void (__fastcall **)(char *, char *, Random *, _DWORD))(*((_DWORD *)v104 + 146) + 16))(
      (char *)v104 + 584,
      &v138,
      v13,
      *v103);
    (*(void (__fastcall **)(char *, char *, Random *, _DWORD))(*((_DWORD *)v66 + 80) + 16))(
      (char *)v66 + 320,
    (*(void (__fastcall **)(char *, char *, Random *, _DWORD))(*((_DWORD *)v66 + 118) + 16))(
      (char *)v66 + 472,
    (*(void (__fastcall **)(char *, char *, Random *, _DWORD))(*((_DWORD *)v66 + 172) + 16))(
      (char *)v66 + 688,
    (*(void (__fastcall **)(char *, char *, Random *, _DWORD))(*((_DWORD *)v66 + 203) + 16))(
      (char *)v66 + 812,
    v67 = 8;
    do
      v68 = j_Random::_genRandInt32(v13);
      v69 = j_Random::_genRandInt32(v13);
      v70 = j_Random::_genRandInt32(v13);
      v120 = (v68 & 0xF | v97) + 8;
      v121 = v69 & 0x7F;
      v122 = (v70 & 0xF | v102) + 8;
      MonsterRoomFeature::place(
        (OverworldGenerator *)((char *)v104 + 676),
        (BlockSource *)&v138,
        (const BlockPos *)&v120,
        v13);
      --v67;
    while ( v67 );
  (*(void (__cdecl **)(OverworldGenerator *))(*(_DWORD *)v104 + 96))(v104);
  v71 = (Level *)j_BlockSource::getLevel((BlockSource *)&v138);
  v72 = j_Level::getLevelData(v71);
  if ( j_LevelData::hasBonusChestEnabled((LevelData *)v72) == 1 )
    v73 = (Level *)j_BlockSource::getLevel((BlockSource *)&v138);
    v74 = j_Level::getLevelData(v73);
    if ( !LevelData::getBonusChestSpawned((LevelData *)v74) )
      Feature::Feature((Feature *)&v119, 0);
      v119 = &off_2723624;
      v75 = j_Level::getLevelData(*((Level **)v104 + 2));
      v76 = LevelData::getSpawn((LevelData *)v75);
      BonusChestFeature::place((BonusChestFeature *)&v119, (BlockSource *)&v138, (const BlockPos *)v76, v13);
      Feature::~Feature((Feature *)&v119);
  v77 = *v103;
  v78 = j_Level::getSeed(*((Level **)v104 + 2));
  v79 = -397;
  v80 = (v93 * v77 + HIDWORD(v77) * v92) ^ v78;
  *(_DWORD *)v13 = v80;
  *v101 = v80;
  v81 = (char *)v96 + 55312;
  v82 = 1;
    v83 = v80 ^ (v80 >> 30);
    v84 = v79++ + 1812433253 * v83;
    v80 = v82++ + 1812433253 * v83;
    *v81 = v84 + 398;
    ++v81;
  while ( v79 );
  v85 = *(void (__fastcall **)(int, char *, Random *, char *))(*(_DWORD *)v95 + 72);
  v86 = j_LevelChunk::getMin(v140);
  v87 = *((_BYTE *)v104 + 32);
  v85(v95, &v138, v13, v86);
  v88 = 0;
    v89 = 0;
    v105 = v88;
    v90 = v88 + v97;
      v113 = v90;
      v114 = 0;
      v115 = v102 + v89;
      j_BlockSource::getTopRainBlockPos((BlockSource *)&v116, (const BlockPos *)&v138, (const BlockPos *)&v113);
      v110 = *(_DWORD *)&v116;
      v111 = v117 - 1;
      v112 = v118;
      if ( BlockSource::shouldFreezeIgnoreNeighbors((BlockSource *)&v138, (const BlockPos *)&v110) == 1 )
      {
        v108 = *(_BYTE *)(Block::mIce + 4);
        v109 = 0;
        j_BlockSource::setBlockAndData((int)&v138, (BlockPos *)&v110, (int)&v108, 2, 0);
      }
      v91 = (OverworldGenerator *)BlockSource::shouldSnow((BlockSource *)&v138, (const BlockPos *)&v116);
      if ( v91 == (OverworldGenerator *)1 )
        v106 = *(_BYTE *)(Block::mTopSnow + 4);
        v107 = 0;
        v91 = (OverworldGenerator *)j_BlockSource::setBlockAndData((int)&v138, (BlockPos *)&v116, (int)&v106, 2, 0);
      ++v89;
    while ( v89 != 16 );
    v88 = v105 + 1;
  while ( v105 != 15 );
  OverworldGenerator::_fixWaterAlongEdges(v91, v140, (BlockSource *)&v138, (BlockTickingQueue *)&v133);
  if ( LevelChunk::checkSeasonsPostProcessDirty(v140) == 1 )
    j_LevelChunk::recomputeHeightMap((unsigned int)v140);
    LevelChunk::applySeasonsPostProcess(v140, (BlockSource *)&v138);
  BlockTickingQueue::tickAllPendingTicks((BlockTickingQueue *)&v133, (BlockSource *)&v138);
  if ( ptr )
    j_operator delete(ptr);
  if ( v136 )
    j_operator delete(v136);
  BlockSource::~BlockSource((BlockSource *)&v138);
  v42 = 1;
LABEL_18:
  PostprocessingManager::Owns::~Owns((PostprocessingManager::Owns *)&v139);
  v43 = v141;
  if ( v141 )
    v44 = (unsigned int *)(v141 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
    else
      v45 = (*v44)--;
    if ( v45 == 1 )
      v46 = (unsigned int *)(v43 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
      if ( &pthread_create )
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
      else
        v47 = (*v46)--;
      if ( v47 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
  return v42;
}


int __fastcall OverworldGenerator::buildSurfaces(int a1, int a2, int a3, LevelChunk *a4, __int64 *a5)
{
  int v5; // r10@1
  int v6; // r11@1
  LevelChunk *v7; // r4@1
  __int64 v8; // r1@1
  int v9; // r0@1
  char *v10; // r2@1
  int v11; // r5@2
  char *v12; // r0@3
  char *v13; // r7@3
  int v14; // r5@3
  void (__fastcall *v15)(int, int, int, char *); // r8@3
  __int16 v21; // ST04_2@3
  int v22; // r0@3
  int result; // r0@4
  int v24; // [sp+14h] [bp-6Ch]@1
  char v25; // [sp+18h] [bp-68h]@1
  int v26; // [sp+24h] [bp-5Ch]@1
  int v27; // [sp+28h] [bp-58h]@1
  signed int v28; // [sp+2Ch] [bp-54h]@1
  __int64 v29; // [sp+30h] [bp-50h]@1
  char v30; // [sp+38h] [bp-48h]@1
  int v31; // [sp+44h] [bp-3Ch]@1
  int v32; // [sp+4Ch] [bp-34h]@1

  v5 = a2;
  v6 = a1;
  v24 = a3;
  v7 = a4;
  j_BlockPos::BlockPos((int)&v30, a5, 0);
  j_Vec3::Vec3((int)&v31, (int)&v30);
  HIDWORD(v8) = v32;
  LODWORD(v8) = v31;
  v9 = *(_DWORD *)(v6 + 48);
  v29 = v8;
  v27 = 1040187392;
  v28 = 1040187392;
  PerlinSimplexNoise::getRegion(
    v9,
    v5 + 4096,
    COERCE_FLOAT(&v29),
    COERCE_FLOAT(16),
    16,
    (int)&v27,
    1065353216,
    1056964608);
  v26 = 0;
  v10 = &v25;
  do
  {
    v11 = (int)v10;
    BYTE1(v26) = 0;
    do
    {
      v12 = j_LevelChunk::getMin(v7);
      ChunkBlockPos::operator+(v11, (int)&v26, (int)v12);
      v13 = (char *)v11;
      v14 = LevelChunk::getBiome(v7, (const ChunkBlockPos *)&v26);
      v15 = *(void (__fastcall **)(int, int, int, char *))(*(_DWORD *)v14 + 76);
      _R0 = v5 + 4 * (unsigned __int8)(v26 + 16 * BYTE1(v26)) + 4096;
      __asm { VLDR            S16, [R0] }
      v21 = *(_WORD *)(ChunkSource::getDimension((ChunkSource *)v6) + 20);
      v22 = v14;
      v11 = (int)v13;
      __asm { VSTR            S16, [SP,#0x80+var_80] }
      v15(v22, v5 + 55304, v24, v13);
      ++BYTE1(v26);
    }
    while ( BYTE1(v26) < 0x10u );
    v10 = v13;
    LOBYTE(v26) = v26 + 1;
    result = (unsigned __int8)v26;
  }
  while ( (unsigned __int8)v26 < 0x10u );
  return result;
}


void __fastcall OverworldGenerator::~OverworldGenerator(OverworldGenerator *this)
{
  OverworldGenerator::~OverworldGenerator(this);
}


char *__fastcall OverworldGenerator::_fixWaterAlongEdges(OverworldGenerator *this, LevelChunk *a2, BlockSource *a3, BlockTickingQueue *a4)
{
  LevelChunk **v4; // r6@1
  BlockSource *v5; // r5@1
  char v6; // r0@1
  char *v7; // r10@4
  char *v8; // r0@5
  __int64 v9; // kr00_8@5
  LevelChunk **v10; // r2@5
  int v11; // r0@5
  __int64 v12; // r3@5
  int v13; // r6@5
  int v14; // r4@5
  signed int v15; // r11@6
  int v16; // r2@7
  signed int v17; // r0@7
  int v18; // r0@9
  char v19; // r1@10
  char *result; // r0@14
  LevelChunk *v21; // [sp+10h] [bp-40h]@1
  char v22; // [sp+14h] [bp-3Ch]@11
  char v23; // [sp+18h] [bp-38h]@11
  char v24; // [sp+19h] [bp-37h]@11
  unsigned __int8 v25; // [sp+1Ch] [bp-34h]@7
  int v26; // [sp+20h] [bp-30h]@5
  int v27; // [sp+24h] [bp-2Ch]@5
  int v28; // [sp+28h] [bp-28h]@5

  v4 = (LevelChunk **)a4;
  v21 = a2;
  v5 = a3;
  v6 = byte_281FC50;
  __dmb();
  if ( !(v6 & 1) && j_j___cxa_guard_acquire((unsigned int *)&byte_281FC50) )
  {
    dword_281F990 = 0;
    dword_281F988 = 0;
    *(_DWORD *)algn_281F98C = 0;
    unk_281F980 = 0;
    unk_281F984 = 0;
    unk_281F994 = 1;
    unk_281F998 = 0;
    dword_281F99C = 0;
    unk_281F9A0 = 2;
    unk_281F9A4 = 0;
    dword_281F9A8 = 0;
    unk_281F9AC = 3;
    unk_281F9B0 = 0;
    dword_281F9B4 = 0;
    *(_DWORD *)algn_281F9B8 = 4;
    *(_DWORD *)&algn_281F9B8[4] = 0;
    dword_281F9C0 = 0;
    unk_281F9C4 = 5;
    unk_281F9C8 = 0;
    dword_281F9CC = 0;
    unk_281F9D0 = 6;
    unk_281F9D4 = 0;
    dword_281F9D8 = 0;
    unk_281F9DC = 7;
    unk_281F9E0 = 0;
    dword_281F9E4 = 0;
    *(_DWORD *)algn_281F9E8 = 8;
    *(_DWORD *)&algn_281F9E8[4] = 0;
    dword_281F9F0 = 0;
    unk_281F9F4 = 9;
    unk_281F9F8 = 0;
    dword_281F9FC = 0;
    unk_281FA00 = 10;
    unk_281FA04 = 0;
    dword_281FA08 = 0;
    unk_281FA0C = 11;
    unk_281FA10 = 0;
    dword_281FA14 = 0;
    *(_DWORD *)algn_281FA18 = 12;
    *(_DWORD *)&algn_281FA18[4] = 0;
    dword_281FA20 = 0;
    unk_281FA24 = 13;
    unk_281FA28 = 0;
    dword_281FA2C = 0;
    unk_281FA30 = 14;
    unk_281FA34 = 0;
    dword_281FA38 = 0;
    unk_281FA3C = 15;
    unk_281FA40 = 1;
    unk_281FA44 = 0;
    unk_281FA48 = 0;
    unk_281FA4C = 1;
    unk_281FA50 = 0;
    dword_281FA54 = 15;
    unk_281FA58 = 2;
    unk_281FA5C = 0;
    unk_281FA60 = 0x200000000LL;
    unk_281FA68 = 0;
    unk_281FA6C = 15;
    unk_281FA70 = 3;
    unk_281FA74 = 0;
    unk_281FA78 = 12884901888LL;
    unk_281FA80 = 0;
    unk_281FA84 = 15;
    unk_281FA88 = 4;
    unk_281FA8C = 0;
    unk_281FA90 = 0x400000000LL;
    unk_281FA98 = 0;
    unk_281FA9C = 15;
    unk_281FAA0 = 5;
    unk_281FAA4 = 0;
    unk_281FAA8 = 21474836480LL;
    unk_281FAB0 = 0;
    unk_281FAB4 = 15;
    unk_281FAB8 = 6;
    unk_281FABC = 0;
    unk_281FAC0 = 25769803776LL;
    unk_281FAC8 = 0;
    unk_281FACC = 15;
    unk_281FAD0 = 7;
    unk_281FAD4 = 0;
    unk_281FAD8 = 0;
    unk_281FADC = 7;
    unk_281FAE0 = 0;
    unk_281FAE4 = 15;
    unk_281FAE8 = 8;
    unk_281FAEC = 0;
    unk_281FAF0 = 0;
    unk_281FAF4 = 8;
    unk_281FAF8 = 0;
    unk_281FAFC = 15;
    unk_281FB00 = 9;
    unk_281FB04 = 0;
    unk_281FB08 = 0;
    unk_281FB0C = 9;
    unk_281FB10 = 0;
    unk_281FB14 = 15;
    unk_281FB18 = 10;
    unk_281FB1C = 0;
    unk_281FB20 = 0;
    unk_281FB24 = 10;
    unk_281FB28 = 0;
    unk_281FB2C = 15;
    unk_281FB30 = 11;
    unk_281FB34 = 0;
    unk_281FB38 = 0;
    unk_281FB3C = 11;
    unk_281FB40 = 0;
    unk_281FB44 = 15;
    unk_281FB48 = 12;
    unk_281FB4C = 0;
    unk_281FB50 = 0;
    unk_281FB54 = 12;
    unk_281FB58 = 0;
    unk_281FB5C = 15;
    unk_281FB60 = 13;
    unk_281FB64 = 0;
    unk_281FB68 = 0;
    unk_281FB6C = 13;
    unk_281FB70 = 0;
    unk_281FB74 = 15;
    unk_281FB78 = 14;
    unk_281FB7C = 0;
    unk_281FB80 = 0;
    unk_281FB84 = 14;
    unk_281FB88 = 0;
    unk_281FB8C = 15;
    unk_281FB90 = 15;
    unk_281FB94 = 0;
    unk_281FB98 = 0;
    unk_281FB9C = 15;
    unk_281FBA0 = 0;
    unk_281FBA4 = 1;
    unk_281FBA8 = 15;
    unk_281FBAC = 0;
    unk_281FBB0 = 2;
    unk_281FBB4 = 15;
    dword_281FBB8 = 0;
    unk_281FBBC = 3;
    unk_281FBC0 = 15;
    dword_281FBC4 = 0;
    *(_DWORD *)algn_281FBC8 = 4;
    *(_DWORD *)&algn_281FBC8[4] = 15;
    dword_281FBD0 = 0;
    unk_281FBD4 = 5;
    unk_281FBD8 = 15;
    dword_281FBDC = 0;
    unk_281FBE0 = 6;
    unk_281FBE4 = 15;
    unk_281FBE8 = 0;
    unk_281FBEC = 7;
    unk_281FBF0 = 15;
    unk_281FBF4 = 0;
    unk_281FBF8 = 8;
    unk_281FBFC = 15;
    unk_281FC00 = 0;
    unk_281FC04 = 9;
    unk_281FC08 = 15;
    unk_281FC0C = 0;
    unk_281FC10 = 10;
    unk_281FC14 = 15;
    unk_281FC18 = 0;
    unk_281FC1C = 11;
    unk_281FC20 = 15;
    unk_281FC24 = 0;
    unk_281FC28 = 12;
    unk_281FC2C = 15;
    unk_281FC30 = 0;
    unk_281FC34 = 13;
    unk_281FC38 = 15;
    unk_281FC3C = 0;
    unk_281FC40 = 14;
    unk_281FC44 = 15;
    unk_281FC48 = 0;
    dword_281FC4C = 15;
    j_j___cxa_guard_release((unsigned int *)&byte_281FC50);
  }
  v7 = (char *)&unk_281F980;
  do
    v8 = j_LevelChunk::getMin(v21);
    v9 = *(_QWORD *)v8;
    v10 = v4;
    v11 = *((_DWORD *)v8 + 2);
    v12 = *(_QWORD *)v7;
    v13 = *((_DWORD *)v7 + 2);
    v26 = v9 + *(_QWORD *)v7;
    v27 = HIDWORD(v12) + HIDWORD(v9);
    v28 = v11 + v13;
    v4 = v10;
    v14 = BlockSource::getHeightmap(v5, (const BlockPos *)&v26);
    if ( v27 < v14 )
    {
      v15 = 1;
      do
      {
        j_BlockSource::getBlockID((BlockSource *)&v25, v5, (int)&v26);
        v16 = *(_BYTE *)(Block::mStillWater + 4);
        v17 = 0;
        if ( v25 != v16 )
          v17 = 1;
        v18 = v17 | v15;
        if ( v25 == v16 )
        {
          v19 = v15 ^ 1;
          v15 = v18;
          if ( !(v19 & 1) )
          {
            v15 = 0;
            v23 = *(_BYTE *)(Block::mFlowingWater + 4);
            v24 = 0;
            j_BlockSource::setBlockAndData((int)v5, (BlockPos *)&v26, (int)&v23, 0, 0);
            v22 = *(_BYTE *)(Block::mFlowingWater + 4);
            BlockTickingQueue::add(v4, v5, (int)&v26, &v22, 1u, 0);
          }
        }
        else
        ++v27;
      }
      while ( v27 < v14 );
    }
    v7 += 12;
    result = &byte_281FC50;
  while ( v7 != &byte_281FC50 );
  return result;
}
