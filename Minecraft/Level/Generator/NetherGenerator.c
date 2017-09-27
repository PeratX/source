

int __fastcall NetherGenerator::findNearestFeature(int a1, char a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@2
  int (__fastcall *v7)(int, int, int, int); // r7@2
  int v8; // r0@2
  int result; // r0@2

  v4 = a4;
  v5 = a3;
  if ( a2 == 2 )
  {
    v6 = a1 + 100;
    v7 = *(int (__fastcall **)(int, int, int, int))(*(_DWORD *)(a1 + 100) + 20);
    v8 = ChunkSource::getDimension((ChunkSource *)a1);
    result = v7(v6, v8, v5, v4);
  }
  else
    result = 0;
  return result;
}


int __fastcall NetherGenerator::NetherGenerator(int a1, Dimension *a2, unsigned int a3)
{
  int v3; // r9@1
  int v4; // r8@1
  __int64 v5; // r0@3
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
  PerlinNoise *v21; // r5@11
  PerlinNoise *v22; // r0@11
  PerlinNoise *v23; // r0@12
  PerlinNoise *v24; // r5@13
  PerlinNoise *v25; // r0@13
  PerlinNoise *v26; // r0@14
  PerlinNoise *v27; // r5@15
  PerlinNoise *v28; // r0@15
  PerlinNoise *v29; // r0@16
  PerlinNoise *v30; // r5@17
  PerlinNoise *v31; // r0@17
  PerlinNoise *v32; // r0@18
  unsigned int v34; // [sp+4h] [bp-A0Ch]@3
  unsigned int v35; // [sp+8h] [bp-A08h]@3
  int v36; // [sp+9C8h] [bp-48h]@3
  char v37; // [sp+9CCh] [bp-44h]@3
  int v38; // [sp+9D0h] [bp-40h]@3
  int v39; // [sp+9D4h] [bp-3Ch]@5
  void *v40; // [sp+9D8h] [bp-38h]@1
  void (*v41)(void); // [sp+9E0h] [bp-30h]@1
  signed int (__fastcall *v42)(_DWORD *); // [sp+9E4h] [bp-2Ch]@1
  unsigned int v43; // [sp+9E8h] [bp-28h]@1

  v43 = a3;
  v3 = a1;
  ChunkSource::ChunkSource(a1, a2, 16);
  WorldGenerator::WorldGenerator((WorldGenerator *)(v3 + 24));
  *(_DWORD *)v3 = &off_27194F4;
  *(_DWORD *)(v3 + 24) = &off_2719560;
  *(_DWORD *)(v3 + 32) = 0;
  v4 = v3 + 32;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  v40 = j_operator new(1u);
  v42 = sub_19547CC;
  v41 = (void (*)(void))sub_1954860;
  ThreadLocal<NetherGenerator::ThreadData>::ThreadLocal(v3 + 60, (int)&v40);
  if ( v41 )
    v41();
  HIDWORD(v5) = &v43;
  LODWORD(v5) = v3 + 100;
  NetherFortressFeature::NetherFortressFeature(v5);
  v6 = v43;
  v34 = v43;
  v7 = 1;
  v36 = 625;
  v8 = 0;
  v37 = 0;
  v38 = 0;
  v35 = v43;
  do
  {
    v9 = v6 ^ (v6 >> 30);
    v10 = (int *)(&v34 + v8);
    v11 = v8++ + 1812433253 * v9;
    v6 = v7++ + 1812433253 * v9;
    v10[2] = v11 + 1;
  }
  while ( v8 != 397 );
  v36 = 624;
  v39 = 398;
  v12 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v12, (Random *)&v34, 16LL);
  v13 = *(PerlinNoise **)v4;
  *(_DWORD *)v4 = v12;
  if ( v13 )
    v14 = PerlinNoise::~PerlinNoise(v13);
    j_operator delete((void *)v14);
  v15 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v15, (Random *)&v34, 16LL);
  v16 = *(PerlinNoise **)(v3 + 36);
  *(_DWORD *)(v3 + 36) = v15;
  if ( v16 )
    v17 = PerlinNoise::~PerlinNoise(v16);
    j_operator delete((void *)v17);
  v18 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v18, (Random *)&v34, 8LL);
  v19 = *(PerlinNoise **)(v3 + 40);
  *(_DWORD *)(v3 + 40) = v18;
  if ( v19 )
    v20 = PerlinNoise::~PerlinNoise(v19);
    j_operator delete((void *)v20);
  v21 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v21, (Random *)&v34, 4LL);
  v22 = *(PerlinNoise **)(v3 + 44);
  *(_DWORD *)(v3 + 44) = v21;
  if ( v22 )
    v23 = PerlinNoise::~PerlinNoise(v22);
    j_operator delete((void *)v23);
  v24 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v24, (Random *)&v34, 4LL);
  v25 = *(PerlinNoise **)(v3 + 48);
  *(_DWORD *)(v3 + 48) = v24;
  if ( v25 )
    v26 = PerlinNoise::~PerlinNoise(v25);
    j_operator delete((void *)v26);
  v27 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v27, (Random *)&v34, 10LL);
  v28 = *(PerlinNoise **)(v3 + 52);
  *(_DWORD *)(v3 + 52) = v27;
  if ( v28 )
    v29 = PerlinNoise::~PerlinNoise(v28);
    j_operator delete((void *)v29);
  v30 = (PerlinNoise *)j_operator new(0x14u);
  PerlinNoise::PerlinNoise(v30, (Random *)&v34, 16LL);
  v31 = *(PerlinNoise **)(v3 + 56);
  *(_DWORD *)(v3 + 56) = v30;
  if ( v31 )
    v32 = PerlinNoise::~PerlinNoise(v31);
    j_operator delete((void *)v32);
  NetherFortressFeature::initMobSpawnTypes(
    (NetherFortressFeature *)(v3 + 100),
    *(HardcodedSpawnAreaRegistry **)(v3 + 28));
  return v3;
}


void __fastcall NetherGenerator::~NetherGenerator(NetherGenerator *this)
{
  NetherGenerator::~NetherGenerator(this);
}


void __fastcall NetherGenerator::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3)
{
  j_j_j__ZN16StructureFeature24garbageCollectBlueprintsE11buffer_spanI8ChunkPosEj(a1 + 100, a2, a3, 2);
}


unsigned __int8 *__fastcall NetherGenerator::loadChunk(NetherGenerator *this, LevelChunk *a2, bool a3)
{
  LevelChunk *v3; // r4@1
  ChunkSource *v4; // r9@1
  __int64 *v5; // r8@1
  void *v6; // r6@1
  __int64 v7; // kr00_8@1
  signed int v8; // r2@1
  signed int v9; // r3@1
  unsigned int v10; // r0@1
  _DWORD *v11; // r1@1
  int v12; // r0@2
  int v13; // r5@2
  Dimension *v14; // r0@3
  Dimension *v15; // r0@3
  void *v16; // r7@3
  void (__fastcall *v17)(void *, LevelChunk *, int, _DWORD); // r10@3
  int v18; // r5@3
  char *v19; // r0@3
  Dimension *v20; // r3@3
  __int64 v21; // r0@3
  char *v23; // [sp+8h] [bp-40h]@3
  int v24; // [sp+Ch] [bp-3Ch]@3
  int v25; // [sp+10h] [bp-38h]@3
  char *v26; // [sp+14h] [bp-34h]@3
  int v27; // [sp+18h] [bp-30h]@3
  signed int v28; // [sp+1Ch] [bp-2Ch]@3
  signed int v29; // [sp+20h] [bp-28h]@3

  v3 = a2;
  v4 = this;
  v5 = (__int64 *)LevelChunk::getPosition(a2);
  v6 = ThreadLocal<NetherGenerator::ThreadData>::getLocal((int)v4 + 60);
  v7 = *v5;
  j_Random::_checkThreadId((Random *)v6);
  v8 = 1;
  v9 = -397;
  v10 = -1724254968 * v7 + -245998635 * HIDWORD(v7);
  *(_DWORD *)v6 = v10;
  *((_DWORD *)v6 + 625) = 625;
  *((_BYTE *)v6 + 2504) = 0;
  *((_DWORD *)v6 + 627) = 0;
  v11 = (char *)v6 + 8;
  *((_DWORD *)v6 + 1) = v10;
  do
  {
    v12 = v10 ^ (v10 >> 30);
    v13 = v9++ + 1812433253 * v12;
    v10 = v8++ + 1812433253 * v12;
    *v11 = v13 + 398;
    ++v11;
  }
  while ( v9 );
  *((_DWORD *)v6 + 625) = 624;
  *((_DWORD *)v6 + 628) = 398;
  j___aeabi_memclr((int)v6 + 2516, 49152);
  v27 = 16;
  v28 = 128;
  v29 = 16;
  v23 = (char *)v6 + 2516;
  v24 = (int)v6 + 35284;
  v25 = (int)v6 + 35284;
  v26 = (char *)v6 + 51668;
  v14 = (Dimension *)ChunkSource::getDimension(v4);
  v15 = Dimension::getBiomes(v14);
  v16 = ThreadLocal<BiomeSource>::getLocal((int)v15);
  v17 = *(void (__fastcall **)(void *, LevelChunk *, int, _DWORD))(*(_DWORD *)v16 + 8);
  v18 = *(_DWORD *)j_LevelChunk::getMin(v3);
  v19 = j_LevelChunk::getMin(v3);
  v17(v16, v3, v18, *((_DWORD *)v19 + 2));
  (*(void (__fastcall **)(ChunkSource *, char **, _DWORD, _DWORD))(*(_DWORD *)v4 + 80))(
    v4,
    &v23,
    *v5,
    (unsigned __int64)*v5 >> 32);
  NetherGenerator::buildSurfaces((int)v4, (int)&v23, v5);
  v20 = (Dimension *)ChunkSource::getDimension(v4);
  LODWORD(v21) = (char *)v4 + 204;
  LargeHellCaveFeature::apply(v21, (int)v3, v20, (Random *)v6);
  LevelChunk::setAllBlockIDs((int)v3, (int)v23, v24, 128);
  j_LevelChunk::recomputeHeightMap((unsigned int)v3);
  if ( !LevelChunk::getGenerator(v3) )
    LevelChunk::_setGenerator(v3, v4);
  return LevelChunk::changeState((int)v3, 1, 2u);
}


int __fastcall NetherGenerator::buildSurfaces(int a1, int a2, __int64 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  __int64 *v6; // r7@1
  int v7; // r5@1
  PerlinNoise *v12; // r0@1
  PerlinNoise *v13; // r0@1
  PerlinNoise *v14; // r0@1
  int v15; // r6@2
  int v16; // r4@3
  int v23; // r7@3
  __int64 v25; // kr00_8@7
  int v26; // r10@7
  unsigned int v27; // r6@7
  unsigned int v28; // r0@7
  signed __int64 v29; // kr08_8@7
  int v30; // r0@9
  __int64 v31; // kr10_8@15
  int v32; // r4@15
  int v33; // r11@15
  unsigned int v34; // r6@15
  unsigned int v35; // r0@15
  signed __int64 v36; // kr18_8@15
  int v37; // r5@23
  int v38; // r10@23
  unsigned int v39; // r6@23
  unsigned int v40; // r0@23
  signed __int64 v41; // kr20_8@23
  int v42; // r0@11
  int v43; // r10@37
  int v44; // r5@45
  int *v45; // r0@47
  char v46; // r1@50
  int result; // r0@54
  int v48; // [sp+20h] [bp-878h]@1
  int v49; // [sp+24h] [bp-874h]@1
  int v50; // [sp+2Ch] [bp-86Ch]@1
  int v51; // [sp+30h] [bp-868h]@1
  int v52; // [sp+34h] [bp-864h]@4
  signed int v53; // [sp+38h] [bp-860h]@4
  char v54; // [sp+3Ch] [bp-85Ch]@4
  int v55; // [sp+40h] [bp-858h]@1
  signed int v56; // [sp+4Ch] [bp-84Ch]@4
  int v57; // [sp+4Ch] [bp-84Ch]@23
  Random *v58; // [sp+50h] [bp-848h]@1
  int v59; // [sp+54h] [bp-844h]@1
  int v60; // [sp+58h] [bp-840h]@1
  signed int v61; // [sp+5Ch] [bp-83Ch]@1
  int v62; // [sp+60h] [bp-838h]@1
  float v63; // [sp+64h] [bp-834h]@1
  int v64; // [sp+6Ch] [bp-82Ch]@1
  float v65[256]; // [sp+70h] [bp-828h]@1
  int v66; // [sp+470h] [bp-428h]@1
  int v67; // [sp+474h] [bp-424h]@1
  int v68; // [sp+478h] [bp-420h]@1
  char v69; // [sp+47Ch] [bp-41Ch]@1
  int v70; // [sp+480h] [bp-418h]@1
  float v71[256]; // [sp+488h] [bp-410h]@1
  int v72; // [sp+888h] [bp-10h]@1
  int v73; // [sp+88Ch] [bp-Ch]@1
  int v74; // [sp+890h] [bp-8h]@1
  float v75; // [sp+894h] [bp-4h]@1
  int v76; // [sp+89Ch] [bp+4h]@1
  float v77[256]; // [sp+8A0h] [bp+8h]@1
  char v78; // [sp+CA0h] [bp+408h]@1
  char v79; // [sp+CACh] [bp+414h]@1
  char v80; // [sp+CB4h] [bp+41Ch]@1

  v3 = a1;
  v4 = a2;
  _R9 = &v80;
  v6 = a3;
  v55 = a2;
  v58 = (Random *)ThreadLocal<NetherGenerator::ThreadData>::getLocal(a1 + 60);
  v7 = *(_DWORD *)(v4 + 20);
  j_BlockPos::BlockPos((int)&v78, v6, 0);
  j_Vec3::Vec3((int)&v79, (int)&v78);
  __asm
  {
    VMOV.F32        S0, #16.0
    VLDR            S2, [R9,#-8]
    VLDR            S4, [R9]
  }
  v12 = *(PerlinNoise **)(v3 + 44);
    VMUL.F32        S16, S2, S0
    VMUL.F32        S18, S4, S0
    VSTR            S16, [R11,#0x464+var_468]
    VSTR            S18, [R11,#0x464+var_464]
  v76 = 0;
  v72 = 1065353216;
  v73 = 1065353216;
  v74 = 1065353216;
  PerlinNoise::getRegion(v12, v77, (const Vec3 *)&v75, 16, 16, 1, (const Vec3 *)&v72);
  v13 = *(PerlinNoise **)(v3 + 44);
  __asm { VSTR            S16, [R10] }
  v70 = 1121583104;
  v66 = 1065353216;
  v67 = 1065353216;
  v68 = 1065353216;
  __asm { VSTR            S18, [R10,#8] }
  PerlinNoise::getRegion(v13, v71, (const Vec3 *)&v69, 16, 1, 16, (const Vec3 *)&v66);
  v14 = *(PerlinNoise **)(v3 + 48);
  v59 = 0;
    VSTR            S16, [SP,#0xCFC+var_C98]
    VSTR            S18, [SP,#0xCFC+var_C94]
  v64 = 0;
  v60 = 0x40000000;
  v61 = 0x40000000;
  v62 = 0x40000000;
  PerlinNoise::getRegion(v14, v65, (const Vec3 *)&v63, 16, 16, 1, (const Vec3 *)&v60);
  v48 = v7 - 63;
  v49 = v7 - 68;
  v51 = v7 - 65;
  v50 = v7 - 64;
    VMOV.F32        S20, #3.0
    VMOV.F32        S22, #0.25
    VLDR            D8, =2.32830644e-10
    VLDR            S18, =0.33333
    VLDR            S24, =0.2
  do
    v15 = 0;
    do
    {
      v16 = v59 + 16 * v15;
      _R0 = &v77[v16];
      __asm { VLDR            S26, [R0] }
      _R9 = &v71[v16];
      _R11 = j_Random::_genRandInt32(v58);
      _R4 = &v65[v16];
      __asm { VLDR            S28, [R9] }
      _R10 = j_Random::_genRandInt32(v58);
      __asm { VLDR            S30, [R4] }
      _R0 = j_Random::_genRandInt32(v58);
      __asm
      {
        VMOV            S0, R0
        VMUL.F32        S6, S30, S18
        VCVT.F64.U32    D1, S0
        VMUL.F64        D1, D1, D8
        VCVT.F32.F64    S2, D1
        VADD.F32        S6, S6, S20
        VMUL.F32        S2, S2, S22
        VMOV            S0, R11
        VMOV            S4, R10
        VCVT.F64.U32    D0, S0
        VADD.F32        S2, S6, S2
        VCVT.F64.U32    D2, S4
      }
      v23 = *(_DWORD *)(v55 + 20) - 1;
      __asm { VCVTR.S32.F32   S2, S2 }
      if ( _NF ^ _VF )
        goto LABEL_53;
      __asm { VMUL.F64        D0, D0, D8 }
      v52 = *(_BYTE *)(Block::mNetherrack + 4);
      v54 = *(_BYTE *)(Block::mNetherrack + 4);
        VMUL.F64        D2, D2, D8
        VCVT.F32.F64    S0, D0
        VCVT.F32.F64    S4, D2
        VMOV            R0, S2
        VMUL.F32        S0, S0, S24
        VMUL.F32        S4, S4, S24
        VADD.F32        S26, S0, S26
        VADD.F32        S28, S4, S28
      v53 = _R0;
      v56 = -1;
      while ( 2 )
        while ( v56 == -1 )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)(v55 + 16);
            v32 = v15;
            v33 = v15 + v59 * v31;
            v34 = j_Random::_genRandInt32(v58);
            v35 = j_Random::_genRandInt32(v58);
            v36 = 3435973837LL * v35;
            if ( v23 < HIDWORD(v31) - 1 - v34 % 5 && v23 > (signed int)(v35 - 5 * (HIDWORD(v36) >> 2)) )
              break;
            *(_BYTE *)(*(_DWORD *)v55 + HIDWORD(v31) * v33 + v23) = *(_BYTE *)(Block::mBedrock + 4);
LABEL_21:
            --v23;
            v15 = v32;
            if ( v23 <= -1 )
              goto LABEL_53;
          }
          if ( !*(_BYTE *)(*(_DWORD *)v55 + HIDWORD(v31) * v33 + v23) )
            v56 = -1;
            goto LABEL_33;
          if ( *(_BYTE *)(*(_DWORD *)v55 + HIDWORD(v31) * v33 + v23) != *(_BYTE *)(Block::mNetherrack + 4) )
            goto LABEL_21;
          if ( v53 <= 0 )
            v54 = *(_BYTE *)(*(_DWORD *)v55 + HIDWORD(v31) * v33 + v23);
            v43 = BlockID::AIR;
          else if ( v23 < v49 )
            v43 = v52;
          else
            if ( v23 <= v48 )
            {
              __asm { VCMPE.F32       S28, #0.0 }
              v43 = *(_BYTE *)(*(_DWORD *)v55 + HIDWORD(v31) * v33 + v23);
              __asm
              {
                VMRS            APSR_nzcv, FPSCR
                VCMPE.F32       S26, #0.0
              }
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                v43 = *(_BYTE *)(Block::mGravel + 4);
              __asm { VMRS            APSR_nzcv, FPSCR }
              v54 = *(_BYTE *)(*(_DWORD *)v55 + HIDWORD(v31) * v33 + v23);
                v43 = *(_BYTE *)(Block::mSoulSand + 4);
                v54 = *(_BYTE *)(Block::mSoulSand + 4);
            }
          v44 = v23 + HIDWORD(v31) * v33;
          if ( v23 >= v50 )
            if ( v43 == BlockID::AIR
              || (v45 = (int *)j_Block::getMaterial((Block *)Block::mBlocks[v43]), j_Material::isType(v45, 0) == 1) )
              v43 = *(_BYTE *)(Block::mStillLava + 4);
          v46 = v43;
          v52 = v43;
          if ( v23 < v51 )
            v46 = v54;
          --v23;
          *(_BYTE *)(*(_DWORD *)v55 + v44) = v46;
          v56 = v53;
          if ( v23 <= -1 )
            goto LABEL_53;
        }
        if ( v56 >= 1 )
            v25 = *(_QWORD *)(v55 + 16);
            v26 = v15;
            v27 = j_Random::_genRandInt32(v58);
            v28 = j_Random::_genRandInt32(v58);
            v29 = 3435973837LL * v28;
            if ( v23 >= HIDWORD(v25) - 1 - v27 % 5 || v23 <= (signed int)(v28 - 5 * (HIDWORD(v29) >> 2)) )
              v15 = v26;
              *(_BYTE *)(*(_DWORD *)v55 + HIDWORD(v25) * (v26 + v59 * v25) + v23) = *(_BYTE *)(Block::mBedrock + 4);
            else
              v30 = *(_DWORD *)v55 + HIDWORD(v25) * (v26 + v59 * v25);
              if ( !*(_BYTE *)(v30 + v23) )
                goto LABEL_30;
              if ( *(_BYTE *)(v30 + v23) == *(_BYTE *)(Block::mNetherrack + 4) )
                *(_BYTE *)(v30 + v23) = v54;
                v42 = v56 - 1;
                goto LABEL_31;
            if ( --v23 <= -1 )
        while ( 1 )
          v37 = *(_DWORD *)(v55 + 20);
          v38 = v15;
          v57 = *(_DWORD *)(v55 + 16);
          v39 = j_Random::_genRandInt32(v58);
          v40 = j_Random::_genRandInt32(v58);
          v41 = 3435973837LL * v40;
          if ( v23 >= v37 - 1 - v39 % 5 || v23 <= (signed int)(v40 - 5 * (HIDWORD(v41) >> 2)) )
            v15 = v38;
            *(_BYTE *)(*(_DWORD *)v55 + v37 * (v38 + v59 * v57) + v23) = *(_BYTE *)(Block::mBedrock + 4);
            goto LABEL_28;
          v15 = v38;
          if ( !*(_BYTE *)(*(_DWORD *)v55 + v37 * (v38 + v59 * v57) + v23) )
            break;
LABEL_28:
          if ( --v23 <= -1 )
LABEL_30:
        v42 = -1;
LABEL_31:
        v56 = v42;
LABEL_33:
        if ( --v23 > -1 )
          continue;
        break;
LABEL_53:
      ++v15;
    }
    while ( v15 != 16 );
    result = v59 + 1;
    v59 = result;
  while ( result != 16 );
  return result;
}


int __fastcall NetherGenerator::getFeatureTypeAt(NetherGenerator *this, const BlockPos *a2)
{
  int result; // r0@1

  result = StructureFeature::isInsideBoundingFeature(
             (NetherGenerator *)((char *)this + 100),
             *(_QWORD *)a2,
             *(_QWORD *)a2 >> 32,
             *((_DWORD *)a2 + 2));
  if ( result )
    result = 2;
  return result;
}


signed int __fastcall NetherGenerator::postProcess(NetherGenerator *this, ChunkViewSource *a2)
{
  ChunkViewSource *v2; // r4@1
  char *v3; // r0@1
  int v4; // r1@1
  int v5; // r0@1
  unsigned __int64 *v6; // r7@1
  int v7; // r0@1
  BlockSourceListener *v8; // r6@2
  int v9; // r0@2
  void *v10; // r11@2
  unsigned __int64 v11; // r4@2
  unsigned int v12; // r7@2
  int v13; // r0@2
  _DWORD *v14; // r5@2
  signed int v15; // r1@2
  signed int v16; // r0@2
  _DWORD *v17; // r2@2
  int v18; // r3@3
  int v19; // r4@3
  unsigned int v20; // r10@4
  unsigned int v21; // r7@4
  unsigned __int64 v22; // kr00_8@4
  int v23; // r4@4
  unsigned int v24; // r0@4
  signed int v25; // r1@4
  signed int v26; // r2@4
  int v27; // r0@5
  int v28; // r3@5
  int v29; // ST00_4@6
  signed int v30; // r10@6
  char v31; // r5@7
  unsigned int v32; // r4@7
  char v33; // r0@7
  unsigned int v34; // r4@8
  signed int v35; // r5@8
  signed int v36; // r10@8
  char v37; // r7@9
  unsigned int v38; // r4@9
  char v39; // r0@9
  unsigned int v40; // r4@10
  signed int v41; // r5@10
  signed int v42; // r6@11
  char v43; // r7@12
  unsigned int v44; // r4@12
  char v45; // r0@12
  signed int v46; // r6@13
  char v47; // r5@14
  char v48; // r4@14
  char v49; // r0@14
  signed int v50; // r6@15
  char v51; // r5@16
  unsigned int v52; // r4@16
  char v53; // r0@16
  signed int v54; // r8@17
  char v55; // r5@18
  unsigned int v56; // r4@18
  char v57; // r0@18
  signed int v58; // r4@19
  char v59; // r5@20
  unsigned int v60; // r6@20
  char v61; // r0@20
  signed int v62; // r4@25
  int v63; // r5@27
  unsigned int *v64; // r1@28
  unsigned int v65; // r0@30
  unsigned int *v66; // r6@34
  unsigned int v67; // r0@36
  int v69; // [sp+Ch] [bp-214h]@2
  int v70; // [sp+10h] [bp-210h]@2
  unsigned __int64 *v71; // [sp+14h] [bp-20Ch]@2
  int v72; // [sp+14h] [bp-20Ch]@6
  NetherGenerator *v73; // [sp+18h] [bp-208h]@1
  int v74; // [sp+18h] [bp-208h]@6
  int v75; // [sp+1Ch] [bp-204h]@20
  unsigned int v76; // [sp+20h] [bp-200h]@20
  int v77; // [sp+24h] [bp-1FCh]@20
  char v78; // [sp+28h] [bp-1F8h]@19
  char v79; // [sp+2Ch] [bp-1F4h]@19
  char v80; // [sp+48h] [bp-1D8h]@18
  int v81; // [sp+4Ch] [bp-1D4h]@18
  unsigned int v82; // [sp+50h] [bp-1D0h]@18
  int v83; // [sp+54h] [bp-1CCh]@18
  char v84; // [sp+58h] [bp-1C8h]@17
  char v85; // [sp+5Ch] [bp-1C4h]@17
  int v86; // [sp+6Ch] [bp-1B4h]@16
  unsigned int v87; // [sp+70h] [bp-1B0h]@16
  int v88; // [sp+74h] [bp-1ACh]@16
  char v89; // [sp+78h] [bp-1A8h]@15
  char v90; // [sp+7Ch] [bp-1A4h]@15
  unsigned int v91; // [sp+98h] [bp-188h]@15
  int v92; // [sp+9Ch] [bp-184h]@15
  unsigned int v93; // [sp+A0h] [bp-180h]@15
  char v94; // [sp+A4h] [bp-17Ch]@15
  char v95; // [sp+A8h] [bp-178h]@15
  unsigned int v96; // [sp+B8h] [bp-168h]@15
  int v97; // [sp+BCh] [bp-164h]@15
  unsigned int v98; // [sp+C0h] [bp-160h]@15
  char v99; // [sp+C4h] [bp-15Ch]@15
  char v100; // [sp+C8h] [bp-158h]@15
  int v101; // [sp+D8h] [bp-148h]@14
  int v102; // [sp+DCh] [bp-144h]@14
  int v103; // [sp+E0h] [bp-140h]@14
  int v104; // [sp+E4h] [bp-13Ch]@12
  unsigned int v105; // [sp+E8h] [bp-138h]@12
  int v106; // [sp+ECh] [bp-134h]@12
  void **v107; // [sp+F0h] [bp-130h]@10
  int v108; // [sp+FCh] [bp-124h]@9
  unsigned int v109; // [sp+100h] [bp-120h]@9
  int v110; // [sp+104h] [bp-11Ch]@9
  void **v111; // [sp+108h] [bp-118h]@8
  char v112; // [sp+114h] [bp-10Ch]@7
  int v113; // [sp+118h] [bp-108h]@7
  unsigned int v114; // [sp+11Ch] [bp-104h]@7
  int v115; // [sp+120h] [bp-100h]@7
  char v116; // [sp+124h] [bp-FCh]@6
  char v117; // [sp+128h] [bp-F8h]@6
  int v118; // [sp+138h] [bp-E8h]@2
  int v119; // [sp+140h] [bp-E0h]@2
  void *v120; // [sp+148h] [bp-D8h]@23
  void *ptr; // [sp+154h] [bp-CCh]@21
  char v122; // [sp+168h] [bp-B8h]@2
  char v123; // [sp+1D8h] [bp-48h]@1
  LevelChunk *v124; // [sp+1E8h] [bp-38h]@1
  int v125; // [sp+1ECh] [bp-34h]@27
  int v126; // [sp+1F0h] [bp-30h]@1
  int v127; // [sp+1F4h] [bp-2Ch]@1

  v2 = a2;
  v73 = this;
  v3 = ChunkViewSource::getArea(a2);
  v4 = *((_DWORD *)v3 + 12);
  v5 = *((_DWORD *)v3 + 14);
  v126 = v4 + 1;
  v127 = v5 + 1;
  (*(void (__fastcall **)(LevelChunk **, ChunkViewSource *, int *))(*(_DWORD *)v2 + 16))(&v124, v2, &v126);
  v6 = (unsigned __int64 *)LevelChunk::getPosition(v124);
  v7 = LevelChunk::getDimension(v124);
  PostprocessingManager::tryLock((PostprocessingManager *)&v123, *(const ChunkPos **)(v7 + 192), v6);
  if ( PostprocessingManager::Owns::operator bool(&v123) )
  {
    v8 = (BlockSourceListener *)ChunkSource::getLevel(v2);
    v9 = ChunkSource::getDimension(v2);
    j_BlockSource::BlockSource((int)&v122, v8, v9, (int)v2, 0, 1);
    v71 = v6;
    v118 = 0;
    j___aeabi_memclr8((int)&v119, 33);
    BlockSource::setTickingQueue((BlockSource *)&v122, (BlockTickingQueue *)&v118);
    v10 = ThreadLocal<NetherGenerator::ThreadData>::getLocal((int)v73 + 60);
    v11 = *v6;
    v12 = j_Level::getSeed(*((Level **)v73 + 2));
    j_Random::_checkThreadId((Random *)v10);
    v13 = 16 * HIDWORD(v11);
    v14 = (char *)v10 + 8;
    v70 = v13;
    v69 = 16 * v11;
    *(_DWORD *)v10 = v12;
    *((_DWORD *)v10 + 625) = 625;
    *((_BYTE *)v10 + 2504) = 0;
    v15 = -397;
    *((_DWORD *)v10 + 627) = 0;
    v16 = 1;
    v17 = (char *)v10 + 8;
    *((_DWORD *)v10 + 1) = v12;
    do
    {
      v18 = v12 ^ (v12 >> 30);
      v19 = v15++ + 1812433253 * v18;
      v12 = v16++ + 1812433253 * v18;
      *v17 = v19 + 398;
      ++v17;
    }
    while ( v15 );
    *((_DWORD *)v10 + 625) = 624;
    *((_DWORD *)v10 + 628) = 398;
    v20 = j_Random::_genRandInt32((Random *)v10);
    v21 = j_Random::_genRandInt32((Random *)v10);
    v22 = *v71;
    v23 = j_Level::getSeed(*((Level **)v73 + 2));
    v24 = (v22 * ((v20 >> 1) | 1) + HIDWORD(v22) * ((v21 >> 1) | 1)) ^ v23;
    *(_DWORD *)v10 = v24;
    v25 = 1;
    v26 = -397;
    *((_DWORD *)v10 + 1) = v24;
      v27 = v24 ^ (v24 >> 30);
      v28 = v26++ + 1812433253 * v27;
      v24 = v25++ + 1812433253 * v27;
      *v14 = v28 + 398;
      ++v14;
    while ( v26 );
    v29 = *v71 >> 32;
    (*(void (__cdecl **)(char *))(*((_DWORD *)v73 + 25) + 16))((char *)v73 + 100);
    StructureFeature::generateHardcodedMobSpawns((NetherGenerator *)((char *)v73 + 100), v124);
    v116 = *(_BYTE *)(Block::mFlowingLava + 4);
    HellSpringFeature::HellSpringFeature((Feature *)&v117, &v116, 0);
    v30 = 0;
    v74 = v70 | 8;
    v72 = v69 | 8;
      v31 = j_Random::_genRandInt32((Random *)v10);
      v32 = j_Random::_genRandInt32((Random *)v10);
      v33 = j_Random::_genRandInt32((Random *)v10);
      v113 = (v31 & 0xF) + v72;
      v114 = v32 % 0x78 + 4;
      v115 = (v33 & 0xF) + v74;
      HellSpringFeature::place((HellSpringFeature *)&v117, (BlockSource *)&v122, (const BlockPos *)&v113, (Random *)v10);
      v112 = *(_BYTE *)(Block::mFlowingLava + 4);
      BlockTickingQueue::add((LevelChunk **)&v118, (BlockSource *)&v122, (int)&v113, &v112, 0, 0);
      ++v30;
    while ( v30 < 8 );
    Feature::Feature((Feature *)&v111, 0);
    v111 = &off_2723660;
    v34 = j_Random::_genRandInt32((Random *)v10);
    v35 = j_Random::_genRandInt32((Random *)v10) % (v34 % 0xA + 1);
    v36 = -1;
      v37 = j_Random::_genRandInt32((Random *)v10);
      v38 = j_Random::_genRandInt32((Random *)v10);
      v39 = j_Random::_genRandInt32((Random *)v10);
      v108 = (v37 & 0xF) + v72;
      v109 = v38 % 0x78 + 4;
      v110 = (v39 & 0xF) + v74;
      HellFireFeature::place((HellFireFeature *)&v111, (BlockSource *)&v122, (const BlockPos *)&v108, (Random *)v10);
      ++v36;
    while ( v36 < v35 );
    Feature::Feature((Feature *)&v107, 0);
    v107 = &off_272364C;
    v40 = j_Random::_genRandInt32((Random *)v10);
    v41 = j_Random::_genRandInt32((Random *)v10) % (v40 % 0xA + 1);
    if ( v41 )
      v42 = 0;
      do
      {
        v43 = j_Random::_genRandInt32((Random *)v10);
        v44 = j_Random::_genRandInt32((Random *)v10);
        v45 = j_Random::_genRandInt32((Random *)v10);
        v104 = (v43 & 0xF) + v72;
        v105 = v44 % 0x78 + 4;
        v106 = (v45 & 0xF) + v74;
        GlowStoneFeature::place((GlowStoneFeature *)&v107, (BlockSource *)&v122, (const BlockPos *)&v104, (Random *)v10);
        ++v42;
      }
      while ( v42 < v41 );
    v46 = 0;
      v47 = j_Random::_genRandInt32((Random *)v10);
      v48 = j_Random::_genRandInt32((Random *)v10);
      v49 = j_Random::_genRandInt32((Random *)v10);
      v101 = (v47 & 0xF) + v72;
      v102 = v48 & 0x7F;
      v103 = (v49 & 0xF) + v74;
      GlowStoneFeature::place((GlowStoneFeature *)&v107, (BlockSource *)&v122, (const BlockPos *)&v101, (Random *)v10);
      ++v46;
    while ( v46 < 10 );
    v99 = *(_BYTE *)(Block::mBrownMushroom + 4);
    FlowerFeature::FlowerFeature((Feature *)&v100, &v99);
    j_Random::_genRandInt32((Random *)v10);
    v96 = (j_Random::_genRandInt32((Random *)v10) & 0xF) + v72;
    LOBYTE(v97) = j_Random::_genRandInt32((Random *)v10) & 0x7F;
    v97 = (unsigned __int8)v97;
    v98 = (j_Random::_genRandInt32((Random *)v10) & 0xF) + v74;
    FlowerFeature::place((FlowerFeature *)&v100, (BlockSource *)&v122, (const BlockPos *)&v96, (Random *)v10);
    v94 = *(_BYTE *)(Block::mRedMushroom + 4);
    FlowerFeature::FlowerFeature((Feature *)&v95, &v94);
    v91 = (j_Random::_genRandInt32((Random *)v10) & 0xF) + v72;
    LOBYTE(v92) = j_Random::_genRandInt32((Random *)v10) & 0x7F;
    v92 = (unsigned __int8)v92;
    v93 = (j_Random::_genRandInt32((Random *)v10) & 0xF) + v74;
    FlowerFeature::place((FlowerFeature *)&v95, (BlockSource *)&v122, (const BlockPos *)&v91, (Random *)v10);
    v89 = *(_BYTE *)(Block::mQuartzOre + 4);
    OreFeature::OreFeature((Feature *)&v90, &v89, 14);
    v50 = 0;
      v51 = j_Random::_genRandInt32((Random *)v10);
      v52 = j_Random::_genRandInt32((Random *)v10);
      v53 = j_Random::_genRandInt32((Random *)v10);
      v86 = v51 & 0xF | v69;
      v87 = v52 % 0x6C + 10;
      v88 = v53 & 0xF | v70;
      OreFeature::place((OreFeature *)&v90, (BlockSource *)&v122, (const BlockPos *)&v86, (Random *)v10);
      ++v50;
    while ( v50 < 16 );
    v84 = *(_BYTE *)(Block::mFlowingLava + 4);
    HellSpringFeature::HellSpringFeature((Feature *)&v85, &v84, 1);
    v54 = 0;
      v55 = j_Random::_genRandInt32((Random *)v10);
      v56 = j_Random::_genRandInt32((Random *)v10);
      v57 = j_Random::_genRandInt32((Random *)v10);
      v81 = v55 & 0xF | v69;
      v82 = v56 % 0x6C + 10;
      v83 = v57 & 0xF | v70;
      HellSpringFeature::place((HellSpringFeature *)&v85, (BlockSource *)&v122, (const BlockPos *)&v81, (Random *)v10);
      v80 = *(_BYTE *)(Block::mFlowingLava + 4);
      BlockTickingQueue::add((LevelChunk **)&v118, (BlockSource *)&v122, (int)&v81, &v80, 0, 0);
      ++v54;
    while ( v54 < 16 );
    v78 = *(_BYTE *)(Block::mMagmaBlock + 4);
    OreFeature::OreFeature((Feature *)&v79, &v78, 28);
    v58 = 0;
      v59 = j_Random::_genRandInt32((Random *)v10);
      v60 = j_Random::_genRandInt32((Random *)v10);
      v61 = j_Random::_genRandInt32((Random *)v10);
      v75 = v59 & 0xF | v69;
      v76 = v60 % 0xE + 23;
      v77 = v61 & 0xF | v70;
      OreFeature::place((OreFeature *)&v79, (BlockSource *)&v122, (const BlockPos *)&v75, (Random *)v10);
      ++v58;
    while ( v58 < 9 );
    BlockTickingQueue::tickAllPendingTicks((BlockTickingQueue *)&v118, (BlockSource *)&v122);
    Feature::~Feature((Feature *)&v79);
    Feature::~Feature((Feature *)&v85);
    Feature::~Feature((Feature *)&v90);
    Feature::~Feature((Feature *)&v95);
    Feature::~Feature((Feature *)&v100);
    Feature::~Feature((Feature *)&v107);
    Feature::~Feature((Feature *)&v111);
    Feature::~Feature((Feature *)&v117);
    if ( ptr )
      j_operator delete(ptr);
    if ( v120 )
      j_operator delete(v120);
    BlockSource::~BlockSource((BlockSource *)&v122);
    v62 = 1;
  }
  else
    v62 = 0;
  PostprocessingManager::Owns::~Owns((PostprocessingManager::Owns *)&v123);
  v63 = v125;
  if ( v125 )
    v64 = (unsigned int *)(v125 + 4);
    if ( &pthread_create )
      __dmb();
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
    else
      v65 = (*v64)--;
    if ( v65 == 1 )
      v66 = (unsigned int *)(v63 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 8))(v63);
      if ( &pthread_create )
        __dmb();
        do
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
      else
        v67 = (*v66)--;
      if ( v67 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
  return v62;
}


ChunkSource *__fastcall NetherGenerator::~NetherGenerator(NetherGenerator *this)
{
  NetherGenerator *v1; // r4@1
  WorldGenerator *v2; // r5@1
  char *v3; // r6@1
  void *v4; // r0@1
  PerlinNoise *v5; // r0@3
  PerlinNoise *v6; // r0@4
  PerlinNoise *v7; // r0@5
  PerlinNoise *v8; // r0@6
  PerlinNoise *v9; // r0@7
  PerlinNoise *v10; // r0@8
  PerlinNoise *v11; // r0@9
  PerlinNoise *v12; // r0@10
  PerlinNoise *v13; // r0@11
  PerlinNoise *v14; // r0@12
  PerlinNoise *v15; // r0@13
  PerlinNoise *v16; // r0@14
  PerlinNoise *v17; // r0@15
  PerlinNoise *v18; // r0@16

  v1 = this;
  *(_DWORD *)this = &off_27194F4;
  *((_DWORD *)this + 6) = &off_2719560;
  v2 = (NetherGenerator *)((char *)this + 24);
  *((_DWORD *)this + 25) = &off_272394C;
  v3 = (char *)this + 100;
  std::_Destroy<MobSpawnerData *>(*((_QWORD *)this + 24), *((_QWORD *)this + 24) >> 32);
  v4 = (void *)*((_DWORD *)v3 + 23);
  if ( v4 )
    j_operator delete(v4);
  StructureFeature::~StructureFeature((StructureFeature *)v3);
  ThreadLocal<NetherGenerator::ThreadData>::~ThreadLocal((int)v1 + 60);
  v5 = (PerlinNoise *)*((_DWORD *)v1 + 14);
  if ( v5 )
  {
    v6 = PerlinNoise::~PerlinNoise(v5);
    j_operator delete((void *)v6);
  }
  *((_DWORD *)v1 + 14) = 0;
  v7 = (PerlinNoise *)*((_DWORD *)v1 + 13);
  if ( v7 )
    v8 = PerlinNoise::~PerlinNoise(v7);
    j_operator delete((void *)v8);
  *((_DWORD *)v1 + 13) = 0;
  v9 = (PerlinNoise *)*((_DWORD *)v1 + 12);
  if ( v9 )
    v10 = PerlinNoise::~PerlinNoise(v9);
    j_operator delete((void *)v10);
  *((_DWORD *)v1 + 12) = 0;
  v11 = (PerlinNoise *)*((_DWORD *)v1 + 11);
  if ( v11 )
    v12 = PerlinNoise::~PerlinNoise(v11);
    j_operator delete((void *)v12);
  *((_DWORD *)v1 + 11) = 0;
  v13 = (PerlinNoise *)*((_DWORD *)v1 + 10);
  if ( v13 )
    v14 = PerlinNoise::~PerlinNoise(v13);
    j_operator delete((void *)v14);
  *((_DWORD *)v1 + 10) = 0;
  v15 = (PerlinNoise *)*((_DWORD *)v1 + 9);
  if ( v15 )
    v16 = PerlinNoise::~PerlinNoise(v15);
    j_operator delete((void *)v16);
  *((_DWORD *)v1 + 9) = 0;
  v17 = (PerlinNoise *)*((_DWORD *)v1 + 8);
  if ( v17 )
    v18 = PerlinNoise::~PerlinNoise(v17);
    j_operator delete((void *)v18);
  *((_DWORD *)v1 + 8) = 0;
  WorldGenerator::~WorldGenerator(v2);
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


void __fastcall NetherGenerator::garbageCollectBlueprints(int a1, void *a2, unsigned __int64 *a3)
{
  NetherGenerator::garbageCollectBlueprints(a1, a2, a3);
}


void __fastcall NetherGenerator::prepareStructureBlueprints(NetherGenerator *this, const ChunkPos *a2)
{
  const ChunkPos *v2; // r4@1
  StructureFeature *v3; // r5@1
  Dimension *v4; // r1@1

  v2 = a2;
  v3 = (NetherGenerator *)((char *)this + 100);
  v4 = (Dimension *)ChunkSource::getDimension(this);
  j_j_j__ZN16StructureFeature16createBlueprintsER9DimensionRK8ChunkPos(v3, v4, v2);
}


unsigned int __fastcall NetherGenerator::prepareHeights(int a1, int a2, int a3, int a4)
{
  ChunkSource *v4; // r7@1
  int v5; // r5@1
  float v12; // r1@1
  unsigned int result; // r0@1
  signed int v16; // r10@1
  int v17; // r1@1
  int v18; // r3@2
  int v19; // lr@4
  int v28; // r1@5
  int v29; // r8@6
  signed int v30; // r11@6
  char v31; // r6@7
  int v32; // r0@7
  int v33; // r9@7
  char v34; // r4@11
  int v35; // r0@11
  int v36; // r6@11
  char v37; // r4@15
  int v38; // r0@15
  int v39; // r6@15
  char v40; // r4@19
  int v41; // r0@19
  int v42; // [sp+8h] [bp-760h]@2
  char v43; // [sp+Ch] [bp-75Ch]@1
  int v44; // [sp+10h] [bp-758h]@2
  int v45; // [sp+14h] [bp-754h]@2
  int v46; // [sp+18h] [bp-750h]@4
  int v47; // [sp+1Ch] [bp-74Ch]@4
  int v48; // [sp+20h] [bp-748h]@4
  int v49; // [sp+24h] [bp-744h]@4
  int v50; // [sp+28h] [bp-740h]@4
  unsigned int v51; // [sp+2Ch] [bp-73Ch]@5
  int v52; // [sp+34h] [bp-734h]@1
  int v53; // [sp+38h] [bp-730h]@4
  int v54; // [sp+3Ch] [bp-72Ch]@5
  int v55; // [sp+40h] [bp-728h]@6
  char v56; // [sp+44h] [bp-724h]@1
  int v57; // [sp+48h] [bp-720h]@6
  unsigned int v58; // [sp+58h] [bp-710h]@6
  float v59; // [sp+5Ch] [bp-70Ch]@1

  v4 = (ChunkSource *)a1;
  v5 = a2;
  v52 = 0;
  NetherGenerator::getHeights((NetherGenerator *)a1, &v59, 4 * a3, 0, 4 * a4);
  _R0 = *(_DWORD *)(v5 + 20);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::log2(_R0, v12);
    VMOV.F32        S16, #0.125
    VCVTR.S32.F32   S0, S0
  result = *(_DWORD *)(v5 + 20);
    VMOV.F32        S18, #0.25
    VMOV            R2, S0
  v43 = _R2;
  v16 = 1 << _R2;
  v56 = _R2 + 4;
  v17 = 0;
  do
    v42 = v17;
    v18 = 0;
    v45 = 5 * v17;
    v44 = 5 * v17 + 5;
    do
    {
      if ( result <= 7 )
      {
        ++v18;
      }
      else
        v19 = 0;
        v53 = 4 * v18 << v43;
        v50 = 17 * (v18 + v44);
        v46 = v18 + 1;
        v49 = 17 * (v18 + v45);
        v48 = 17 * (v18 + 1 + v44);
        v47 = 17 * (v18 + 1 + v45);
        do
        {
          _R4 = &v59 + v49 + v19;
          _R0 = &v59 + v19 + 1 + v49;
          _R6 = &v59 + v47 + v19;
          __asm { VLDR            S20, [R4] }
          _R2 = &v59 + v19 + 1 + v48;
          __asm { VLDR            S22, [R6] }
          _R1 = &v59 + v19 + 1 + v47;
          _R3 = &v59 + v48 + v19;
          __asm { VLDR            S0, [R2] }
          _R4 = &v59 + v50 + v19;
          _R2 = &v59 + v19 + 1 + v50;
          __asm { VLDR            S4, [R1] }
          v28 = 0;
          __asm
          {
            VLDR            S6, [R0]
            VLDR            S26, [R3]
            VSUB.F32        S4, S4, S22
            VLDR            S24, [R4]
            VSUB.F32        S6, S6, S20
            VLDR            S2, [R2]
            VSUB.F32        S0, S0, S26
          }
          v51 = v19 + 1;
          __asm { VSUB.F32        S2, S2, S24 }
          v54 = 8 * v19;
            VMUL.F32        S17, S4, S16
            VMUL.F32        S19, S6, S16
            VMUL.F32        S28, S0, S16
            VMUL.F32        S30, S2, S16
          do
            __asm
            {
              VSUB.F32        S0, S26, S22
              VSUB.F32        S2, S24, S20
            }
            v29 = v52;
            __asm { VMOV.F32        S25, S22 }
            v55 = v28;
            __asm { VMOV.F32        S27, S20 }
            v30 = 4;
            v58 = v28 + v54;
            v57 = v53 | (v28 + v54);
              VMUL.F32        S21, S0, S18
              VMUL.F32        S23, S2, S18
            do
              __asm { VSUB.F32        S29, S25, S27 }
              v31 = BlockID::AIR;
              v32 = ChunkSource::getDimension(v4);
              __asm
              {
                VCMPE.F32       S27, #0.0
                VMUL.F32        S29, S29, S18
              }
              v33 = v57 | (v29 << v56);
              if ( v58 < *(_WORD *)(v32 + 20) )
                v31 = *(_BYTE *)(Block::mStillLava + 4);
                VMRS            APSR_nzcv, FPSCR
                VADD.F32        S31, S27, S29
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                v31 = *(_BYTE *)(Block::mNetherrack + 4);
              *(_BYTE *)(*(_DWORD *)v5 + v33) = v31;
              v34 = BlockID::AIR;
              v35 = ChunkSource::getDimension(v4);
              __asm { VCMPE.F32       S31, #0.0 }
              v36 = v33 + v16;
              __asm { VADD.F32        S31, S31, S29 }
              if ( v58 < *(_WORD *)(v35 + 20) )
                v34 = *(_BYTE *)(Block::mStillLava + 4);
              __asm { VMRS            APSR_nzcv, FPSCR }
                v34 = *(_BYTE *)(Block::mNetherrack + 4);
              *(_BYTE *)(*(_DWORD *)v5 + v36) = v34;
              v37 = BlockID::AIR;
              v38 = ChunkSource::getDimension(v4);
              v39 = v36 + v16;
              __asm { VADD.F32        S29, S31, S29 }
              if ( v58 < *(_WORD *)(v38 + 20) )
                v37 = *(_BYTE *)(Block::mStillLava + 4);
                v37 = *(_BYTE *)(Block::mNetherrack + 4);
              *(_BYTE *)(*(_DWORD *)v5 + v39) = v37;
              v40 = BlockID::AIR;
              v41 = ChunkSource::getDimension(v4);
                VCMPE.F32       S29, #0.0
                VADD.F32        S25, S25, S21
                VADD.F32        S27, S27, S23
              ++v29;
              if ( v58 < *(_WORD *)(v41 + 20) )
                v40 = *(_BYTE *)(Block::mStillLava + 4);
                v40 = *(_BYTE *)(Block::mNetherrack + 4);
              --v30;
              *(_BYTE *)(*(_DWORD *)v5 + v39 + v16) = v40;
            while ( v30 );
              VADD.F32        S26, S26, S28
              VADD.F32        S24, S24, S30
              VADD.F32        S22, S22, S17
            v28 = v55 + 1;
            __asm { VADD.F32        S20, S20, S19 }
          while ( v55 != 7 );
          result = *(_DWORD *)(v5 + 20);
          ++v19;
        }
        while ( v51 < result >> 3 );
        v18 = v46;
    }
    while ( v18 != 4 );
    v52 += 4;
    v17 = v42 + 1;
  while ( v42 != 3 );
  return result;
}


float *__fastcall NetherGenerator::getHeights(NetherGenerator *this, float *a2, int _R2, int _R3, int a5)
{
  float *v10; // r11@1
  NetherGenerator *v11; // r5@1
  PerlinNoise *v13; // r0@1
  PerlinNoise *v14; // r0@1
  PerlinNoise *v15; // r0@1
  PerlinNoise *v16; // r0@1
  PerlinNoise *v17; // r0@1
  float v18; // r1@1
  float *v23; // r12@8
  float *v24; // r9@8
  float *v25; // r10@8
  int v26; // r1@8
  float *result; // r0@8
  int v28; // r11@9
  int v29; // r3@9
  float *v30; // r7@9
  float *v31; // r8@9
  unsigned int v33; // r1@10
  int v34; // r6@10
  float *v39; // [sp+14h] [bp-1784h]@9
  int v40; // [sp+18h] [bp-1780h]@9
  int v41; // [sp+1Ch] [bp-177Ch]@9
  char v42; // [sp+20h] [bp-1778h]@1
  int v43; // [sp+64h] [bp-1734h]@1
  signed int v44; // [sp+68h] [bp-1730h]@1
  int v45; // [sp+6Ch] [bp-172Ch]@1
  float v46; // [sp+70h] [bp-1728h]@1
  int v47; // [sp+714h] [bp-1084h]@1
  int v48; // [sp+718h] [bp-1080h]@1
  int v49; // [sp+71Ch] [bp-107Ch]@1
  float v50; // [sp+720h] [bp-1078h]@1
  int v51; // [sp+DC4h] [bp-9D4h]@1
  int v52; // [sp+DC8h] [bp-9D0h]@1
  int v53; // [sp+DCCh] [bp-9CCh]@1
  float v54; // [sp+DD0h] [bp-9C8h]@1
  char v55; // [sp+1400h] [bp-398h]@1
  signed int v56; // [sp+1474h] [bp-324h]@1
  int v57; // [sp+1478h] [bp-320h]@1
  signed int v58; // [sp+147Ch] [bp-31Ch]@1
  float v59; // [sp+1480h] [bp-318h]@1
  signed int v60; // [sp+15D4h] [bp-1C4h]@1
  int v61; // [sp+15D8h] [bp-1C0h]@1
  signed int v62; // [sp+15DCh] [bp-1BCh]@1
  float v63; // [sp+15E0h] [bp-1B8h]@1
  int v64; // [sp+1734h] [bp-64h]@1

  __asm { VMOV            S2, R2 }
  _LR = &v55;
  __asm { VMOV            S4, R3 }
  v10 = a2;
  __asm
  {
    VLDR            S0, [LR,#0x398]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
  }
  v11 = this;
  __asm { VCVT.F32.S32    S0, S0 }
  _R7 = 0;
    VSTR            S2, [R4,#0x2BC]
    VSTR            S4, [R4,#0x2C0]
    VSTR            S0, [R4,#0x2C4]
  v13 = (PerlinNoise *)*((_DWORD *)this + 13);
  v60 = 1065353216;
  v61 = 0;
  v62 = 1065353216;
  PerlinNoise::getRegion(v13, &v63, (const Vec3 *)&v64, 5, 1, 5, (const Vec3 *)&v60);
  v14 = (PerlinNoise *)*((_DWORD *)v11 + 14);
  v56 = 1120403456;
  v57 = 0;
  v58 = 1120403456;
  PerlinNoise::getRegion(v14, &v59, (const Vec3 *)&v64, 5, 1, 5, (const Vec3 *)&v56);
  v15 = (PerlinNoise *)*((_DWORD *)v11 + 10);
  v51 = 1091101157;
  v52 = 1107878372;
  v53 = 1091101157;
  PerlinNoise::getRegion(v15, &v54, (const Vec3 *)&v64, 5, 17, 5, (const Vec3 *)&v51);
  v16 = (PerlinNoise *)*((_DWORD *)v11 + 8);
  v47 = 1143675486;
  v48 = 1157649350;
  v49 = 1143675486;
  PerlinNoise::getRegion(v16, &v50, (const Vec3 *)&v64, 5, 17, 5, (const Vec3 *)&v47);
  v17 = (PerlinNoise *)*((_DWORD *)v11 + 9);
  v43 = 1143675486;
  v44 = 1157649350;
  v45 = 1143675486;
  PerlinNoise::getRegion(v17, &v46, (const Vec3 *)&v64, 5, 17, 5, (const Vec3 *)&v43);
    VMOV.F32        S20, #16.0
    VMOV.F32        S22, #4.0
  _R4 = &v42;
    VMOV.F32        S24, #-10.0
    VLDR            S18, =0.35294
  _R0 = &mce::Math::PI;
  __asm { VLDR            S16, [R0] }
  do
    __asm
    {
      VMOV            S0, R7
      VCVT.F32.S32    S26, S0
      VMUL.F32        S0, S26, S18
      VMUL.F32        S0, S0, S16
      VMOV            R0, S0
    }
    _R0 = j_mce::Math::cos(_R0, v18);
    __asm { VSUB.F32        S0, S20, S26 }
    if ( _R7 > 8 )
      __asm { VMOVHI.F32      S26, S0 }
      VMOV            S0, R0
      VCMPE.F32       S26, S22
      VADD.F32        S0, S0, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm
      {
        VSUB.F32        S2, S22, S26
        VMUL.F32        S4, S2, S2
        VMUL.F32        S4, S4, S24
        VMUL.F32        S2, S4, S2
        VADD.F32        S0, S0, S2
      }
    ++_R7;
    __asm { VSTMIA          R4!, {S0} }
  while ( _R7 != 17 );
  __asm { VMOV.F32        S2, #0.5 }
  v23 = &v50;
  __asm { VMOV.F32        S8, #1.0 }
  v24 = &v46;
  v25 = &v54;
    VLDR            S0, =0.05
    VLDR            S4, =0.0019531
  v26 = 0;
  __asm { VLDR            S6, =-0.33333 }
  result = v10;
  __asm { VLDR            S10, =-3.3333 }
    v28 = 0;
    v29 = (int)result;
    v30 = v25;
    v31 = v24;
    v39 = v23;
    v40 = v26;
    v41 = (int)result;
    do
      _R2 = &v42;
      v33 = 0;
      v34 = v29;
      _R5 = v30;
      _R4 = v31;
      _R0 = v23;
      do
        __asm
        {
          VLDR            S12, [R5]
          VLDR            S3, [R0]
          VMUL.F32        S12, S12, S0
          VMUL.F32        S14, S3, S4
          VADD.F32        S1, S12, S2
          VLDR            S12, [R2]
          VCMPE.F32       S1, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !(_NF ^ _VF) )
          __asm
          {
            VLDR            S5, [R4]
            VCMPE.F32       S1, S8
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VSUB.F32        S3, S5, S3
              VMUL.F32        S3, S3, S4
              VMUL.F32        S1, S3, S1
              VADD.F32        S14, S1, S14
            }
          else
            __asm { VMUL.F32        S14, S5, S4 }
        __asm { VSUB.F32        S12, S14, S12 }
        if ( v33 >= 0xE )
          _LR = v33 - 13;
            VMOV            S14, LR
            VCVT.F32.U32    S14, S14
            VMUL.F32        S1, S14, S6
            VMUL.F32        S14, S14, S10
            VADD.F32        S1, S1, S8
            VMUL.F32        S12, S12, S1
            VADD.F32        S12, S12, S14
        __asm { VSTR            S12, [R6] }
        ++v33;
        _R2 += 4;
        v34 += 4;
        ++_R5;
        ++_R4;
        ++_R0;
      while ( v33 != 17 );
      ++v28;
      v29 += 68;
      v30 += 17;
      v31 += 17;
      v23 += 17;
    while ( v28 != 5 );
    v25 += 85;
    v24 += 85;
    result = (float *)(v41 + 340);
    v23 = v39 + 85;
    v26 = v40 + 1;
  while ( v40 != 4 );
  return result;
}


void __fastcall NetherGenerator::~NetherGenerator(NetherGenerator *this)
{
  ChunkSource *v1; // r0@1

  v1 = NetherGenerator::~NetherGenerator(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall NetherGenerator::prepareStructureBlueprints(NetherGenerator *this, const ChunkPos *a2)
{
  NetherGenerator::prepareStructureBlueprints(this, a2);
}


int (**__fastcall NetherGenerator::addHardcodedSpawnAreas(NetherGenerator *this, LevelChunk *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  return j_j_j__ZN16StructureFeature26generateHardcodedMobSpawnsER10LevelChunk(
           (NetherGenerator *)((char *)this + 100),
           a2);
}
