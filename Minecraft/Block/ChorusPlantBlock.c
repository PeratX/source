

signed int __fastcall ChorusPlantBlock::canSurvive(ChorusPlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  signed int v8; // r8@1
  int v9; // r1@1
  int v10; // r2@1
  signed int v11; // r0@1
  int v12; // r6@1
  _BYTE *v13; // r7@1
  Block *v14; // r0@3
  Block *v15; // r0@4
  Block *v16; // r0@7
  int v17; // r1@9
  int v18; // r2@9
  Block *v19; // r0@9
  signed int result; // r0@9
  int v21; // [sp+0h] [bp-58h]@9
  int v22; // [sp+4h] [bp-54h]@9
  int v23; // [sp+8h] [bp-50h]@9
  int v24; // [sp+Ch] [bp-4Ch]@4
  int v25; // [sp+10h] [bp-48h]@4
  int v26; // [sp+14h] [bp-44h]@4
  char v27; // [sp+18h] [bp-40h]@3
  int v28; // [sp+1Ch] [bp-3Ch]@4
  int v29; // [sp+20h] [bp-38h]@4
  int v30; // [sp+24h] [bp-34h]@1
  int v31; // [sp+28h] [bp-30h]@1
  int v32; // [sp+2Ch] [bp-2Ch]@1
  int v33; // [sp+30h] [bp-28h]@1
  int v34; // [sp+34h] [bp-24h]@1
  int v35; // [sp+38h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v33 = v5;
  v34 = v6 + 1;
  v35 = v7;
  v8 = BlockSource::isEmptyBlock(v4, (const BlockPos *)&v33);
  v9 = *((_DWORD *)v3 + 1);
  v10 = *((_DWORD *)v3 + 2);
  v30 = *(_DWORD *)v3;
  v31 = v9 - 1;
  v32 = v10;
  v11 = BlockSource::isEmptyBlock(v4, (const BlockPos *)&v30);
  v12 = dword_2803214;
  v13 = (_BYTE *)Facing::Plane::HORIZONTAL;
  if ( Facing::Plane::HORIZONTAL == dword_2803214 )
  {
LABEL_9:
    v17 = *((_DWORD *)v3 + 1);
    v18 = *((_DWORD *)v3 + 2);
    v21 = *(_DWORD *)v3;
    v22 = v17 - 1;
    v23 = v18;
    v19 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v21);
    result = Block::canGrowChorus(v19);
  }
  else if ( (v11 | v8) == 1 )
    while ( 1 )
    {
      BlockPos::neighbor((BlockPos *)&v27, (int)v3, *v13);
      v14 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v27);
      if ( Block::canGrowChorus(v14) == 1 )
      {
        v24 = *(_DWORD *)&v27;
        v25 = v28 - 1;
        v26 = v29;
        v15 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v24);
        if ( Block::canGrowChorus(v15) )
          break;
      }
      if ( (_BYTE *)v12 == ++v13 )
        goto LABEL_9;
    }
    result = 1;
  else
      v16 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v27);
      if ( Block::canGrowChorus(v16) )
        break;
    result = 0;
  return result;
}


int __fastcall ChorusPlantBlock::tick(ChorusPlantBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  const BlockPos *v5; // r4@1
  int result; // r0@1
  Level *v7; // r0@2

  v4 = a2;
  v5 = a3;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v7 = (Level *)BlockSource::getLevel(v4);
    result = j_j_j__ZN5Level12destroyBlockER11BlockSourceRK8BlockPosb_0(v7, v4, v5, 1);
  }
  return result;
}


int __fastcall ChorusPlantBlock::canBeSilkTouched(ChorusPlantBlock *this)
{
  return 0;
}


LevelChunk *__fastcall ChorusPlantBlock::neighborChanged(ChorusPlantBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  ChorusPlantBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  LevelChunk *result; // r0@1
  LevelChunk **v8; // r0@3
  char v9; // [sp+Ch] [bp-24h]@3
  char v10; // [sp+10h] [bp-20h]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (LevelChunk *)(*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    ChunkPos::ChunkPos((ChunkPos *)&v10, v5);
    result = (LevelChunk *)BlockSource::getChunk(v6, (const ChunkPos *)&v10);
    if ( result )
    {
      v8 = (LevelChunk **)LevelChunk::getTickQueue(result);
      v9 = *((_BYTE *)v4 + 4);
      result = BlockTickingQueue::add(v8, v6, (int)v5, &v9, 1u, 0);
    }
  }
  return result;
}


int __fastcall ChorusPlantBlock::checkIsPathable(ChorusPlantBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 0;
}


int __fastcall ChorusPlantBlock::mayPlace(ChorusPlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  ChorusPlantBlock *v5; // r6@1
  int result; // r0@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( Block::mayPlace(this, a2, a3) == 1 )
    result = (*(int (__fastcall **)(ChorusPlantBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 324))(
               v5,
               v4,
               v3);
  else
    result = 0;
  return result;
}


void __fastcall ChorusPlantBlock::~ChorusPlantBlock(ChorusPlantBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ChorusPlantBlock::ChorusPlantBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  __int64 v7; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2705CCC;
  Block::setSolid((Block *)v3, 0);
  v7 = *(_QWORD *)(v3 + 24);
  LODWORD(v7) = v7 | 0x2000000;
  *(_QWORD *)(v3 + 24) = v7;
  return v3;
}


int __fastcall ChorusPlantBlock::isWaterBlocking(ChorusPlantBlock *this)
{
  return 0;
}


signed int __fastcall ChorusPlantBlock::connectsTo(ChorusPlantBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  Block *v4; // r4@1
  signed int result; // r0@2

  v4 = (Block *)BlockSource::getBlock(a2, a4);
  if ( Block::canGrowChorus(v4) )
    result = 1;
  else
    result = Block::isType(v4, (const Block *)Block::mChorusFlowerBlock);
  return result;
}


unsigned int __fastcall ChorusPlantBlock::getResourceCount(ChorusPlantBlock *this, Random *a2, int a3, int a4)
{
  return Random::_genRandInt32(a2) & 1;
}


AABB *__fastcall ChorusPlantBlock::getAABB(ChorusPlantBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  BlockSource *v8; // r6@1
  __int64 v9; // r0@1
  int v10; // r2@1
  AABB *v11; // r4@1
  Block *v12; // r7@1
  signed int v17; // r0@3
  int v18; // r2@5
  Block *v19; // r7@5
  int v20; // r1@9
  int v21; // r2@9
  Block *v22; // r7@9
  signed int v23; // r0@11
  int v24; // r1@13
  int v25; // r2@13
  Block *v26; // r7@13
  int v27; // r1@17
  int v28; // r2@17
  Block *v29; // r7@17
  signed int v30; // r0@19
  int v31; // r1@21
  int v32; // r2@21
  Block *v33; // r6@21
  float v37; // [sp+0h] [bp-98h]@0
  float v38; // [sp+4h] [bp-94h]@0
  float v39; // [sp+8h] [bp-90h]@0
  int v40; // [sp+10h] [bp-88h]@21
  int v41; // [sp+14h] [bp-84h]@21
  int v42; // [sp+18h] [bp-80h]@21
  int v43; // [sp+1Ch] [bp-7Ch]@17
  int v44; // [sp+20h] [bp-78h]@17
  int v45; // [sp+24h] [bp-74h]@17
  int v46; // [sp+28h] [bp-70h]@13
  int v47; // [sp+2Ch] [bp-6Ch]@13
  int v48; // [sp+30h] [bp-68h]@13
  int v49; // [sp+34h] [bp-64h]@9
  int v50; // [sp+38h] [bp-60h]@9
  int v51; // [sp+3Ch] [bp-5Ch]@9
  __int64 v52; // [sp+40h] [bp-58h]@5
  int v53; // [sp+48h] [bp-50h]@5
  __int64 v54; // [sp+4Ch] [bp-4Ch]@1
  int v55; // [sp+54h] [bp-44h]@1

  _R5 = a3;
  v8 = a2;
  v9 = *(_QWORD *)a3;
  v10 = *((_DWORD *)a3 + 2);
  v11 = a4;
  v54 = v9;
  v55 = v10 - 1;
  v12 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v54);
  if ( Block::canGrowChorus(v12) )
  {
    __asm { VLDR            S16, =0.0 }
  }
  else
    v17 = Block::isType(v12, (const Block *)Block::mChorusFlowerBlock);
    __asm
    {
      VLDR            S0, =0.0
      VMOV.F32        S16, #0.125
    }
    if ( v17 )
      __asm { VMOVNE.F32      S16, S0 }
  v18 = *((_DWORD *)_R5 + 2);
  v52 = *(_QWORD *)_R5;
  v53 = v18 + 1;
  v19 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v52);
  if ( Block::canGrowChorus(v19) )
    __asm { VMOV.F32        S18, #1.0 }
    Block::isType(v19, (const Block *)Block::mChorusFlowerBlock);
      VMOV.F32        S0, #1.0
      VMOV.F32        S18, #0.875
    if ( !_ZF )
      __asm { VMOVNE.F32      S18, S0 }
  v20 = *((_DWORD *)_R5 + 1);
  v21 = *((_DWORD *)_R5 + 2);
  v49 = *(_DWORD *)_R5 - 1;
  v50 = v20;
  v51 = v21;
  v22 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v49);
  if ( Block::canGrowChorus(v22) )
    __asm { VLDR            S20, =0.0 }
    v23 = Block::isType(v22, (const Block *)Block::mChorusFlowerBlock);
      VMOV.F32        S20, #0.125
    if ( v23 )
      __asm { VMOVNE.F32      S20, S0 }
  v24 = *((_DWORD *)_R5 + 1);
  v25 = *((_DWORD *)_R5 + 2);
  v46 = *(_DWORD *)_R5 + 1;
  v47 = v24;
  v48 = v25;
  v26 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v46);
  if ( Block::canGrowChorus(v26) )
    __asm { VMOV.F32        S22, #1.0 }
    Block::isType(v26, (const Block *)Block::mChorusFlowerBlock);
      VMOV.F32        S22, #0.875
      __asm { VMOVNE.F32      S22, S0 }
  v27 = *((_DWORD *)_R5 + 1);
  v28 = *((_DWORD *)_R5 + 2);
  v43 = *(_DWORD *)_R5;
  v44 = v27 - 1;
  v45 = v28;
  v29 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v43);
  if ( Block::canGrowChorus(v29) )
    __asm { VLDR            S24, =0.0 }
    v30 = Block::isType(v29, (const Block *)Block::mChorusFlowerBlock);
      VMOV.F32        S24, #0.125
    if ( v30 )
      __asm { VMOVNE.F32      S24, S0 }
  v31 = *((_DWORD *)_R5 + 1);
  v32 = *((_DWORD *)_R5 + 2);
  v40 = *(_DWORD *)_R5;
  v41 = v31 + 1;
  v42 = v32;
  v33 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v40);
  if ( Block::canGrowChorus(v33) )
    __asm { VMOV.F32        S0, #1.0 }
    Block::isType(v33, (const Block *)Block::mChorusFlowerBlock);
      VMOV.F32        S2, #1.0
      VMOV.F32        S0, #0.875
      __asm { VMOVNE.F32      S0, S2 }
  __asm { VLDR            S2, [R5] }
  LODWORD(_R0) = v11;
  __asm
    VLDR            S4, [R5,#4]
    VLDR            S6, [R5,#8]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VADD.F32        S8, S2, S20
    VADD.F32        S10, S4, S24
    VADD.F32        S12, S6, S16
    VADD.F32        S2, S2, S22
    VADD.F32        S6, S6, S18
    VADD.F32        S0, S4, S0
    VMOV            R1, S8
    VMOV            R2, S10
    VMOV            R3, S12
    VSTR            S2, [SP,#0x98+var_98]
    VSTR            S0, [SP,#0x98+var_94]
    VSTR            S6, [SP,#0x98+var_90]
  AABB::set(_R0, _R2, v37, v38, v39);
  return v11;
}


void __fastcall ChorusPlantBlock::~ChorusPlantBlock(ChorusPlantBlock *this)
{
  ChorusPlantBlock::~ChorusPlantBlock(this);
}
