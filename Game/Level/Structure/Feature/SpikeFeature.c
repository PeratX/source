

int __fastcall SpikeFeature::EndSpike::getCenterX(SpikeFeature::EndSpike *this)
{
  return *(_DWORD *)this;
}


int __fastcall SpikeFeature::setCrystalBeamTarget(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 16) = *(_DWORD *)a2;
  *(_DWORD *)(result + 20) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 2);
  return result;
}


signed int __fastcall SpikeFeature::EndSpike::startsInChunk(SpikeFeature::EndSpike *this, const BlockPos *a2)
{
  SpikeFeature::EndSpike *v2; // r2@1
  int v3; // r12@1
  unsigned int v4; // r3@1
  signed int result; // r0@1

  v2 = this;
  v3 = *((_DWORD *)this + 2);
  v4 = (*(_DWORD *)this - v3) & 0xFFFFFFF0;
  result = 0;
  if ( *(_DWORD *)a2 == v4 && *((_DWORD *)a2 + 2) == ((*((_DWORD *)v2 + 1) - v3) & 0xFFFFFFF0) )
    result = 1;
  return result;
}


char *__fastcall SpikeFeature::EndSpike::getTopBoundingBox(SpikeFeature::EndSpike *this, int a2)
{
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r12@1
  char *result; // r0@1
  int v7; // r3@1
  int v8; // r12@1
  int v9; // lr@1

  v2 = a2 + 20;
  v3 = *(_DWORD *)v2;
  v4 = *(_DWORD *)(v2 + 4);
  v5 = *(_DWORD *)(v2 + 8);
  v2 += 12;
  *(_DWORD *)this = v3;
  *((_DWORD *)this + 1) = v4;
  *((_DWORD *)this + 2) = v5;
  result = (char *)this + 12;
  v7 = *(_DWORD *)(v2 + 4);
  v8 = *(_DWORD *)(v2 + 8);
  v9 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)result = *(_DWORD *)v2;
  *((_DWORD *)result + 1) = v7;
  *((_DWORD *)result + 2) = v8;
  *((_DWORD *)result + 3) = v9;
  return result;
}


void __fastcall SpikeFeature::~SpikeFeature(SpikeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall SpikeFeature::setCrystalInvulnerable(int result, bool a2)
{
  *(_BYTE *)(result + 28) = a2;
  return result;
}


signed int __fastcall SpikeFeature::place(SpikeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  int v4; // r6@1
  SpikeFeature *v5; // r4@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r7@1
  int v9; // r0@1
  int v15; // r2@3
  __int64 v16; // kr00_8@3
  const FullBlock *v19; // r3@6
  BlockSource *v20; // r1@6
  Feature *v21; // r0@6
  SpikeFeature *v22; // r11@11
  const BlockPos *v23; // r6@12
  const FullBlock *v24; // r7@12
  signed int v25; // r5@12
  int v26; // r0@13
  signed int v27; // r9@15
  int v28; // r0@16
  int v29; // r2@16
  signed int v30; // r10@18
  signed int v31; // r3@19
  int v32; // r0@19
  int v33; // r2@19
  int v34; // r7@19
  int v35; // r4@19
  const BlockPos *v36; // r2@22
  BlockSource *v37; // r1@22
  const BlockPos *v39; // [sp+0h] [bp-100h]@1
  BlockSource *v40; // [sp+4h] [bp-FCh]@1
  char v41; // [sp+8h] [bp-F8h]@12
  char v42; // [sp+9h] [bp-F7h]@16
  int v43; // [sp+Ch] [bp-F4h]@12
  int v44; // [sp+10h] [bp-F0h]@16
  int v45; // [sp+14h] [bp-ECh]@16
  char v46; // [sp+18h] [bp-E8h]@16
  char v47; // [sp+19h] [bp-E7h]@16
  int v48; // [sp+1Ch] [bp-E4h]@16
  int v49; // [sp+20h] [bp-E0h]@16
  int v50; // [sp+24h] [bp-DCh]@16
  char v51; // [sp+28h] [bp-D8h]@16
  char v52; // [sp+29h] [bp-D7h]@16
  int v53; // [sp+2Ch] [bp-D4h]@16
  int v54; // [sp+30h] [bp-D0h]@16
  int v55; // [sp+34h] [bp-CCh]@16
  char v56; // [sp+38h] [bp-C8h]@16
  char v57; // [sp+39h] [bp-C7h]@16
  char v58; // [sp+3Ch] [bp-C4h]@6
  char v59; // [sp+3Dh] [bp-C3h]@6
  char v60; // [sp+40h] [bp-C0h]@1
  int v61; // [sp+68h] [bp-98h]@1
  int v62; // [sp+6Ch] [bp-94h]@16
  int v63; // [sp+70h] [bp-90h]@16
  char v64; // [sp+90h] [bp-70h]@1
  int v65; // [sp+B8h] [bp-48h]@1
  int v66; // [sp+BCh] [bp-44h]@1
  int v67; // [sp+C0h] [bp-40h]@1
  int v68; // [sp+C4h] [bp-3Ch]@1
  int v69; // [sp+C8h] [bp-38h]@1
  int v70; // [sp+CCh] [bp-34h]@1

  v39 = a3;
  v40 = a2;
  v4 = *((_DWORD *)this + 3);
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  v8 = *(_DWORD *)(v4 + 8);
  v68 = v6 - v8;
  v69 = 0;
  v70 = v7 - v8;
  v9 = *(_DWORD *)(v4 + 12);
  v65 = v6 + v8;
  v66 = v9 + 10;
  v67 = v7 + v8;
  BlockPosIterator::BlockPosIterator((BlockPosIterator *)&v64, (const BlockPos *)&v68, (const BlockPos *)&v65);
  BlockPosIterator::begin((BlockPosIterator *)&v61, (int)&v64);
  BlockPosIterator::end((BlockPosIterator *)&v60, (int)&v64);
  if ( BlockPosIterator::operator!=((int)&v61, (int)&v60) == 1 )
  {
    _R0 = v8 * v8 + 1;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
    while ( 1 )
      v15 = BlockPosIterator::operator*((int)&v61);
      v16 = *(_QWORD *)v15;
      _R1 = *(_QWORD *)v15 - *(_DWORD *)v39;
      _R0 = *(_DWORD *)(v15 + 8) - *((_DWORD *)v39 + 2);
      __asm
      {
        VMOV            S0, R1
        VMOV            S2, R0
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VADD.F32        S0, S2, S0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        if ( SHIDWORD(v16) < *(_DWORD *)(*((_DWORD *)v5 + 3) + 12) )
          break;
      if ( SHIDWORD(v16) >= 66 )
        v20 = v40;
        v21 = v5;
        v19 = (const FullBlock *)&FullBlock::AIR;
        goto LABEL_9;
LABEL_10:
      BlockPosIterator::operator++((int)&v61);
      if ( !BlockPosIterator::operator!=((int)&v61, (int)&v60) )
        goto LABEL_11;
    v19 = (const FullBlock *)&v58;
    v20 = v40;
    v58 = *(_BYTE *)(Block::mObsidian + 4);
    v21 = v5;
    v59 = 0;
LABEL_9:
    Feature::_placeBlock(v21, v20, (const BlockPos *)v15, v19);
    goto LABEL_10;
  }
LABEL_11:
  v22 = v5;
  if ( *(_BYTE *)(*((_DWORD *)v5 + 3) + 16) )
    v23 = (const BlockPos *)&v43;
    v24 = (const FullBlock *)&v41;
    v25 = -2;
    do
      v26 = v25;
      if ( v25 < 0 )
        v26 = -v25;
      v27 = -2;
      if ( v26 == 2 )
        do
        {
          v28 = *(_DWORD *)(*((_DWORD *)v22 + 3) + 12);
          v29 = *((_DWORD *)v39 + 2);
          v61 = *(_DWORD *)v39 + v25;
          v62 = v28;
          v63 = v27 + v29;
          v56 = *(_BYTE *)(Block::mIronFence + 4);
          v57 = 0;
          Feature::_placeBlock(v22, v40, (const BlockPos *)&v61, (const FullBlock *)&v56);
          v53 = v61;
          v54 = v62 + 1;
          v55 = v63;
          v51 = *(_BYTE *)(Block::mIronFence + 4);
          v52 = 0;
          Feature::_placeBlock(v22, v40, (const BlockPos *)&v53, (const FullBlock *)&v51);
          v48 = v61;
          v49 = v62 + 2;
          v50 = v63;
          v46 = *(_BYTE *)(Block::mIronFence + 4);
          v47 = 0;
          Feature::_placeBlock(v22, v40, (const BlockPos *)&v48, (const FullBlock *)&v46);
          v43 = v61;
          v44 = v62 + 3;
          v45 = v63;
          v41 = *(_BYTE *)(Block::mIronFence + 4);
          v42 = 0;
          Feature::_placeBlock(v22, v40, v23, v24);
          ++v27;
        }
        while ( v27 != 3 );
      else
        v30 = 2;
          v31 = v27;
          v32 = *(_DWORD *)(*((_DWORD *)v22 + 3) + 12);
          v33 = *((_DWORD *)v39 + 2);
          v34 = *(_DWORD *)v39 + v25;
          v62 = v32;
          v35 = v27 + v33;
          v63 = v27 + v33;
          if ( v27 < 0 )
            v31 = v30;
          if ( v31 == 2 )
          {
            v56 = *(_BYTE *)(Block::mIronFence + 4);
            v57 = 0;
            Feature::_placeBlock(v22, v40, (const BlockPos *)&v61, (const FullBlock *)&v56);
            v53 = v61;
            v54 = v62 + 1;
            v55 = v63;
            v51 = *(_BYTE *)(Block::mIronFence + 4);
            v52 = 0;
            Feature::_placeBlock(v22, v40, (const BlockPos *)&v53, (const FullBlock *)&v51);
            v48 = v61;
            v49 = v62 + 2;
            v50 = v63;
            v46 = *(_BYTE *)(Block::mIronFence + 4);
            v47 = 0;
            Feature::_placeBlock(v22, v40, (const BlockPos *)&v48, (const FullBlock *)&v46);
            v32 = v62;
            v34 = v61;
            v36 = (const BlockPos *)&v43;
            v35 = v63;
            v37 = v40;
          }
          else
          v40 = v37;
          v43 = v34;
          v44 = v32 + 3;
          v45 = v35;
          v24 = (const FullBlock *)&v41;
          v23 = v36;
          Feature::_placeBlock(v22, v37, v36, (const FullBlock *)&v41);
          --v30;
        while ( v30 != -3 );
      ++v25;
    while ( v25 != 3 );
  return 1;
}


void __fastcall SpikeFeature::~SpikeFeature(SpikeFeature *this)
{
  SpikeFeature::~SpikeFeature(this);
}


SpikeFeature::EndSpike *__fastcall SpikeFeature::EndSpike::EndSpike(SpikeFeature::EndSpike *this, int a2, int a3, int a4, int a5, bool a6)
{
  int v6; // r7@1
  SpikeFeature::EndSpike *v7; // r4@1
  int v8; // r6@1
  int v9; // r5@1
  int v11; // [sp+0h] [bp-48h]@1
  int v12; // [sp+4h] [bp-44h]@1
  int v13; // [sp+8h] [bp-40h]@1
  char v14; // [sp+Ch] [bp-3Ch]@1
  int v15; // [sp+18h] [bp-30h]@1
  int v16; // [sp+1Ch] [bp-2Ch]@1
  int v17; // [sp+20h] [bp-28h]@1
  char v18; // [sp+24h] [bp-24h]@1

  v6 = a2;
  v7 = this;
  v8 = a3;
  v9 = a4;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  *((_BYTE *)this + 16) = a6;
  v15 = a2 - a4;
  v16 = 0;
  v17 = a3 - a4;
  Vec3::Vec3((int)&v18, (int)&v15);
  v11 = v9 + v6;
  v12 = 128;
  v13 = v9 + v8;
  Vec3::Vec3((int)&v14, (int)&v11);
  j_AABB::AABB((int)v7 + 20, (int)&v18, (int)&v14);
  return v7;
}


Entity *__fastcall SpikeFeature::postProcessMobsAt(SpikeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  SpikeFeature *v4; // r5@1
  BlockSource *v5; // r4@1
  Random *v6; // r7@1
  void *v14; // r0@1
  void *v15; // r0@2
  void *v16; // r0@3
  Entity *v17; // r0@4
  int v18; // r0@4
  Entity *v19; // r2@4
  void (*v20)(void); // r3@4
  int v21; // r1@6
  int v22; // r3@6
  Entity *result; // r0@6
  unsigned int *v24; // r2@9
  signed int v25; // r1@11
  unsigned int *v26; // r2@13
  signed int v27; // r1@15
  unsigned int *v28; // r2@17
  signed int v29; // r1@19
  char v30; // [sp+8h] [bp-50h]@6
  char v31; // [sp+9h] [bp-4Fh]@6
  int v32; // [sp+Ch] [bp-4Ch]@6
  int v33; // [sp+10h] [bp-48h]@6
  int v34; // [sp+14h] [bp-44h]@6
  Entity *v35; // [sp+18h] [bp-40h]@4
  int v36; // [sp+1Ch] [bp-3Ch]@1
  float v37; // [sp+24h] [bp-34h]@1
  int v38; // [sp+30h] [bp-28h]@1
  int v39; // [sp+34h] [bp-24h]@2
  int v40; // [sp+38h] [bp-20h]@1
  Entity *v41; // [sp+3Ch] [bp-1Ch]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  _R6 = a3;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v38, 71);
  _R0 = *((_DWORD *)v4 + 3);
  __asm
  {
    VMOV.F32        S4, #0.5
    VLDR            S0, [R6]
    VMOV.F32        S8, #1.0
    VLDR            S2, [R6,#8]
    VLDR            S6, [R0,#0xC]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S2, S2
    VADD.F32        S0, S0, S4
    VADD.F32        S6, S6, S8
    VADD.F32        S2, S2, S4
    VSTR            S0, [SP,#0x58+var_34]
    VSTR            S6, [SP,#0x58+var_30]
    VSTR            S2, [SP,#0x58+var_2C]
  }
  _R0 = j_Random::_genRandInt32(v6);
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  v36 = 0;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =360.0
    VMUL.F32        S0, S0, S2
    VSTR            S0, [SP,#0x58+var_38]
  EntityFactory::createSpawnedEntity(&v41, (const void **)&v38, 0, (int)&v37, &v36);
  v14 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v38 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  Entity::setStatusFlag((int)v41, 36, 1);
  v17 = v41;
  *((_BYTE *)v41 + 426) = *((_BYTE *)v4 + 28);
  Entity::setBlockTarget(v17, (SpikeFeature *)((char *)v4 + 16));
  v18 = BlockSource::getLevel(v5);
  v19 = v41;
  v20 = *(void (**)(void))(*(_DWORD *)v18 + 48);
  v41 = 0;
  v35 = v19;
  v20();
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 32))();
  v35 = 0;
  v21 = *(_DWORD *)(*((_DWORD *)v4 + 3) + 12);
  v22 = *((_DWORD *)_R6 + 2);
  v32 = *(_DWORD *)_R6;
  v33 = v21;
  v34 = v22;
  v30 = *(_BYTE *)(Block::mBedrock + 4);
  v31 = 1;
  Feature::_placeBlock(v4, v5, (const BlockPos *)&v32, (const FullBlock *)&v30);
  result = v41;
  if ( v41 )
    result = (Entity *)(*(int (**)(void))(*(_DWORD *)v41 + 32))();
  return result;
}


int __fastcall SpikeFeature::SpikeFeature(Feature *a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718C08;
  *(_DWORD *)(result + 12) = v2;
  *(_BYTE *)(result + 28) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall SpikeFeature::placeManually(SpikeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, Entity *a5)
{
  BlockSource *v5; // r6@1
  Random *v6; // r8@1
  const BlockPos *v7; // r5@1
  Feature *v8; // r7@1
  int v9; // r4@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = this;
  Feature::_setManuallyPlaced(this, a5);
  v9 = (*(int (__fastcall **)(Feature *, BlockSource *, const BlockPos *, Random *))(*(_DWORD *)v8 + 8))(v8, v5, v7, v6);
  Feature::_setManuallyPlaced(v8, 0);
  return v9;
}
