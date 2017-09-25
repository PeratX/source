

signed int __fastcall DiodeBlock::isDiode(DiodeBlock *this, const Block *a2)
{
  DiodeBlock *v2; // r4@1
  int v3; // r1@1
  signed int result; // r0@1

  v2 = this;
  v3 = (*(int (**)(void))(*(_DWORD *)Block::mUnpoweredRepeater + 512))();
  result = 1;
  if ( !v3 && (DiodeBlock *)Block::mUnpoweredComparator != v2 )
  {
    result = 0;
    if ( (DiodeBlock *)Block::mPoweredComparator == v2 )
      result = 1;
  }
  return result;
}


signed int __fastcall DiodeBlock::isSignalSource(DiodeBlock *this)
{
  return 1;
}


int __fastcall DiodeBlock::getSignal(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  DiodeBlock *v6; // r6@1
  int v7; // r8@1
  unsigned int v8; // r7@1
  unsigned __int64 *v9; // r0@2
  bool v10; // zf@2
  unsigned int v11; // r0@2
  bool v12; // zf@5
  bool v13; // zf@8
  bool v14; // zf@11
  void **v15; // r0@14

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = j_BlockSource::getData(a2, a3);
  if ( !(*(int (__fastcall **)(DiodeBlock *, unsigned int))(*(_DWORD *)v6 + 520))(v6, v8) )
  {
    v15 = &Redstone::SIGNAL_NONE;
    return *(_DWORD *)*v15;
  }
  v9 = (unsigned __int64 *)j_Block::getBlockState((int)v6, 12);
  v10 = v7 == 3;
  v11 = (0xFu >> (4 - (*v9 >> 32))) & (v8 >> (*v9 + 1 - (*v9 >> 32)));
  if ( v7 == 3 )
    v10 = v11 == 0;
  if ( !v10 )
    v12 = v7 == 4;
    if ( v7 == 4 )
      v12 = v11 == 1;
    if ( !v12 )
    {
      v13 = v7 == 2;
      if ( v7 == 2 )
        v13 = v11 == 2;
      if ( !v13 )
      {
        v14 = v7 == 5;
        if ( v7 == 5 )
          v14 = v11 == 3;
        if ( !v14 )
        {
          v15 = &Redstone::SIGNAL_NONE;
          return *(_DWORD *)*v15;
        }
      }
    }
  return (*(int (__fastcall **)(DiodeBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 544))(
           v6,
           v5,
           v4,
           v8);
}


int __fastcall DiodeBlock::mayPlace(DiodeBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int result; // r0@2
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v10 = v6;
  v11 = v7 - 1;
  v12 = v8;
  if ( j_BlockSource::canProvideSupport(v4, (int)&v10) == 1 )
    result = j_Block::mayPlace(v5, v4, v3);
  else
    result = 0;
  return result;
}


signed int __fastcall DiodeBlock::shouldPrioritize(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r11@1
  unsigned __int8 v5; // r4@1
  const BlockPos *v6; // r6@1
  unsigned __int64 *v7; // r0@1
  int v8; // r10@1
  int v9; // lr@1
  unsigned int v10; // r8@1
  int v11; // r9@1
  int v12; // r5@1
  int v13; // r4@1
  signed int v14; // r7@1
  __int64 v15; // r0@4
  int v16; // r2@4
  unsigned int v17; // r4@4
  unsigned __int64 *v18; // r0@4
  DiodeBlock *v20; // [sp+0h] [bp-40h]@1
  __int64 v21; // [sp+4h] [bp-3Ch]@4
  int v22; // [sp+Ch] [bp-34h]@4
  int v23; // [sp+10h] [bp-30h]@1
  int v24; // [sp+14h] [bp-2Ch]@1
  int v25; // [sp+18h] [bp-28h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v20 = this;
  v7 = (unsigned __int64 *)j_Block::getBlockState((int)this, 12);
  v8 = *((_DWORD *)v6 + 1);
  v9 = *((_DWORD *)v6 + 2);
  v10 = (v5 >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32)));
  v11 = Direction::STEP_X[v10];
  v12 = Direction::STEP_Z[v10];
  v23 = *(_DWORD *)v6 - v11;
  v24 = v8;
  v25 = v9 - v12;
  v13 = j_BlockSource::getBlock(v4, (const BlockPos *)&v23);
  v14 = 0;
  if ( (*(int (**)(void))(*(_DWORD *)Block::mUnpoweredRepeater + 512))()
    || Block::mUnpoweredComparator == v13
    || Block::mPoweredComparator == v13 )
  {
    HIDWORD(v15) = *((_DWORD *)v6 + 1);
    v16 = *((_DWORD *)v6 + 2);
    LODWORD(v15) = *(_DWORD *)v6 - v11;
    v21 = v15;
    v22 = v16 - v12;
    v17 = j_BlockSource::getData(v4, (const BlockPos *)&v21);
    v18 = (unsigned __int64 *)j_Block::getBlockState((int)v20, 12);
    if ( ((0xFu >> (4 - (*v18 >> 32))) & (v17 >> (*v18 + 1 - (*v18 >> 32)))) != v10 )
      v14 = 1;
  }
  return v14;
}


int __fastcall DiodeBlock::neighborChanged(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  DiodeBlock *v4; // r6@1
  const BlockPos *v5; // r7@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  int (__fastcall *v8)(DiodeBlock *, BlockSource *, const BlockPos *, char *); // r9@2
  int result; // r0@2
  void (__fastcall *v10)(DiodeBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@3
  unsigned int v11; // r0@3
  char v12; // [sp+8h] [bp-20h]@2

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 324))() )
  {
    v8 = *(int (__fastcall **)(DiodeBlock *, BlockSource *, const BlockPos *, char *))(*(_DWORD *)v4 + 528);
    j_BlockSource::getBlockID((BlockSource *)&v12, v7, (int)v5);
    result = v8(v4, v7, v6, &v12);
  }
  else
    v10 = *(void (__fastcall **)(DiodeBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v4 + 276);
    v11 = j_BlockSource::getData(v7, v6);
    v10(v4, v7, v6, v11);
    result = j_j_j__ZN11BlockSource11removeBlockERK8BlockPos_1(v7, v6);
  return result;
}


void __fastcall DiodeBlock::~DiodeBlock(DiodeBlock *this)
{
  DiodeBlock::~DiodeBlock(this);
}


int __fastcall DiodeBlock::onRedstoneUpdate(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r5@1
  DiodeBlock *v6; // r6@1
  int v7; // r7@1
  const BlockPos *v8; // r10@1
  Level *v9; // r0@1
  int result; // r0@1
  char v11; // r8@2
  Dimension *v12; // r0@2
  _BYTE *v13; // r0@2
  _BYTE *v14; // r9@2
  int v15; // r0@2
  int v16; // r4@2
  int v17; // r0@4
  char *v18; // r2@4
  char v19; // [sp+Ch] [bp-2Ch]@4
  char v20; // [sp+10h] [bp-28h]@6
  unsigned __int8 v21; // [sp+14h] [bp-24h]@2

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)j_BlockSource::getLevel(a2);
  result = j_Level::isClientSide(v9);
  if ( !result )
  {
    v11 = j_BlockSource::getData(v5, v8);
    j_BlockSource::getBlockID((BlockSource *)&v21, v5, (int)v8);
    v12 = (Dimension *)j_BlockSource::getDimension(v5);
    v13 = (_BYTE *)j_Dimension::getCircuitSystem(v12);
    v14 = v13;
    *v13 = 1;
    v15 = *(_DWORD *)v6;
    v16 = v21;
    if ( v7 )
    {
      if ( v16 != *(_BYTE *)((*(int (__fastcall **)(DiodeBlock *))(v15 + 556))(v6) + 4) )
      {
        v17 = (*(int (__fastcall **)(DiodeBlock *))(*(_DWORD *)v6 + 556))(v6);
        v18 = &v19;
        v19 = *(_BYTE *)(v17 + 4);
LABEL_7:
        j_BlockSource::setBlockAndData((int)v5, v8, v18, v11, 3, 0);
        goto LABEL_8;
      }
    }
    else if ( v16 != *(_BYTE *)((*(int (__fastcall **)(DiodeBlock *))(v15 + 560))(v6) + 4) )
      v20 = *(_BYTE *)((*(int (__fastcall **)(DiodeBlock *))(*(_DWORD *)v6 + 560))(v6) + 4);
      v18 = &v20;
      goto LABEL_7;
LABEL_8:
    result = 0;
    *v14 = 0;
  }
  return result;
}


void __fastcall DiodeBlock::~DiodeBlock(DiodeBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


LevelChunk *__fastcall DiodeBlock::checkTickOnNeighbor(int a1, BlockSource *a2, const BlockPos *a3, char *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r6@1
  char *v7; // r8@1
  unsigned int v8; // r0@1
  unsigned int v9; // r11@1
  LevelChunk *result; // r0@1
  int v11; // r0@2
  signed int v12; // r1@2
  int v13; // r0@6
  int v14; // r10@8
  LevelChunk **v15; // r9@11
  unsigned int v16; // r0@11
  char v17; // [sp+Ch] [bp-2Ch]@11
  char v18; // [sp+10h] [bp-28h]@6

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = j_BlockSource::getData(a2, a3);
  v9 = v8;
  result = (LevelChunk *)(*(int (__fastcall **)(int, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 508))(
                           v6,
                           v5,
                           v4,
                           v8);
  if ( !result )
  {
    v11 = (*(int (__fastcall **)(int, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 524))(
            v6,
            v5,
            v4,
            v9);
    v12 = 0;
    if ( !*(_BYTE *)(v6 + 641) )
      v12 = 1;
    if ( v11 & v12 || (result = (LevelChunk *)((v11 | v12) ^ 1), result == (LevelChunk *)1) )
    {
      v13 = j_BlockSource::getTickQueue(v5, v4);
      v18 = *(_BYTE *)(v6 + 4);
      result = (LevelChunk *)j_BlockTickingQueue::hasTickInCurrentTick(v13, (int)v4);
      if ( !result )
      {
        if ( (*(int (__fastcall **)(int, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 516))(
               v6,
               v5,
               v4,
               v9) )
        {
          v14 = -3;
        }
        else
          v14 = -2;
          if ( !*(_BYTE *)(v6 + 641) )
            v14 = -1;
        v15 = (LevelChunk **)j_BlockSource::getTickQueue(v5, v4);
        v17 = *v7;
        v16 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v6 + 552))(v6, v9);
        result = j_BlockTickingQueue::add(v15, v5, (int)v4, &v17, v16, v14);
      }
    }
  }
  return result;
}


int __fastcall DiodeBlock::DiodeBlock(int a1, const void **a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r6@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int *v14; // r2@1
  float v16; // [sp+4h] [bp-1Ch]@1
  int v17; // [sp+8h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = j_Material::getMaterial(15);
  j_Block::Block(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_2722EA4;
  *(_BYTE *)(v4 + 641) = v5;
  j_Block::setSolid((Block *)v4, 0);
  v17 = 1061997773;
  _R0 = j_Material::getTranslucency(*(Material **)(v4 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v14 = (int *)&v16;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x20+var_1C]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v14 = &v17;
  Block::mTranslucency[v6] = *v14;
  return v4;
}


signed int __fastcall DiodeBlock::canSurvive(DiodeBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  signed int result; // r0@2
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v10 = v6;
  v11 = v7 - 1;
  v12 = v8;
  if ( j_BlockSource::canProvideSupport(v4, (int)&v10) == 1 )
    result = j_Block::canSurvive(v5, v4, v3);
  else
    result = 0;
  return result;
}


int __fastcall DiodeBlock::isLocked(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 0;
}


int __fastcall DiodeBlock::getAlternateSignal(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r4@1
  unsigned __int8 v5; // r7@1
  const BlockPos *v6; // r6@1
  DiodeBlock *v7; // r5@1
  unsigned __int64 *v8; // r0@1
  int v9; // r1@2
  int v10; // r2@2
  Block *v11; // r7@2
  signed int v12; // r7@4
  int v13; // r2@5
  Block *v14; // r7@5
  int *v15; // r1@8
  int v16; // r1@12
  int v17; // r2@12
  Block *v18; // r6@12
  signed int v19; // r0@14
  int v20; // r2@17
  Block *v21; // r6@17
  int *v22; // r2@22
  __int64 v24; // [sp+4h] [bp-54h]@17
  int v25; // [sp+Ch] [bp-4Ch]@17
  int v26; // [sp+10h] [bp-48h]@24
  __int64 v27; // [sp+14h] [bp-44h]@5
  int v28; // [sp+1Ch] [bp-3Ch]@5
  int v29; // [sp+20h] [bp-38h]@17
  int v30; // [sp+24h] [bp-34h]@12
  int v31; // [sp+28h] [bp-30h]@12
  int v32; // [sp+2Ch] [bp-2Ch]@12
  int v33; // [sp+30h] [bp-28h]@22
  int v34; // [sp+34h] [bp-24h]@2
  int v35; // [sp+38h] [bp-20h]@2
  int v36; // [sp+3Ch] [bp-1Ch]@2
  int v37; // [sp+40h] [bp-18h]@12

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)j_Block::getBlockState((int)this, 12);
  switch ( (0xFu >> (4 - (*v8 >> 32))) & (v5 >> (*v8 + 1 - (*v8 >> 32))) )
  {
    case 0u:
    case 2u:
      v9 = *((_DWORD *)v6 + 1);
      v10 = *((_DWORD *)v6 + 2);
      v34 = *(_DWORD *)v6 - 1;
      v35 = v9;
      v36 = v10;
      v11 = (Block *)j_BlockSource::getBlock(v4, (const BlockPos *)&v34);
      if ( (*(int (__fastcall **)(DiodeBlock *, Block *))(*(_DWORD *)v7 + 536))(v7, v11) == 1 )
      {
        if ( j_Block::isType(v11, (const Block *)Block::mRedStoneDust) == 1 )
          v12 = j_BlockSource::getData(v4, (const BlockPos *)&v34);
        else
          v12 = (*(int (__fastcall **)(Block *, BlockSource *, int *, signed int))(*(_DWORD *)v11 + 124))(
                  v11,
                  v4,
                  &v34,
                  4);
      }
      else
        v12 = 0;
      v37 = v12;
      v16 = *((_DWORD *)v6 + 1);
      v17 = *((_DWORD *)v6 + 2);
      v30 = *(_DWORD *)v6 + 1;
      v31 = v16;
      v32 = v17;
      v18 = (Block *)j_BlockSource::getBlock(v4, (const BlockPos *)&v30);
      if ( (*(int (__fastcall **)(DiodeBlock *, Block *))(*(_DWORD *)v7 + 536))(v7, v18) == 1 )
        if ( j_Block::isType(v18, (const Block *)Block::mRedStoneDust) == 1 )
          v19 = j_BlockSource::getData(v4, (const BlockPos *)&v30);
          v19 = (*(int (__fastcall **)(Block *, BlockSource *, int *, signed int))(*(_DWORD *)v18 + 124))(
                  v18,
                  &v30,
                  5);
        v19 = 0;
      v33 = v19;
      v22 = &v37;
      v15 = &v33;
      goto LABEL_25;
    case 1u:
    case 3u:
      v13 = *((_DWORD *)v6 + 2);
      v27 = *(_QWORD *)v6;
      v28 = v13 + 1;
      v14 = (Block *)j_BlockSource::getBlock(v4, (const BlockPos *)&v27);
      if ( (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 536))(v7, v14) == 1 )
        if ( j_Block::isType(v14, (const Block *)Block::mRedStoneDust) == 1 )
          v12 = j_BlockSource::getData(v4, (const BlockPos *)&v27);
          v12 = (*(int (__fastcall **)(Block *, BlockSource *, __int64 *, signed int))(*(_DWORD *)v14 + 124))(
                  v14,
                  &v27,
                  3);
      v29 = v12;
      v20 = *((_DWORD *)v6 + 2);
      v24 = *(_QWORD *)v6;
      v25 = v20 - 1;
      v21 = (Block *)j_BlockSource::getBlock(v4, (const BlockPos *)&v24);
      if ( (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 536))(v7, v21) == 1 )
        if ( j_Block::isType(v21, (const Block *)Block::mRedStoneDust) == 1 )
          v19 = j_BlockSource::getData(v4, (const BlockPos *)&v24);
          v19 = (*(int (__fastcall **)(Block *, BlockSource *, __int64 *, signed int))(*(_DWORD *)v21 + 124))(
                  v21,
                  &v24,
                  2);
      v22 = &v29;
      v15 = &v26;
      v26 = v19;
LABEL_25:
      if ( v12 >= v19 )
        v15 = v22;
      break;
    default:
      v15 = (int *)&Redstone::SIGNAL_NONE;
  }
  return *v15;
}


int __fastcall DiodeBlock::getInputSignal(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r8@1
  unsigned __int8 v5; // r5@1
  const BlockPos *v6; // r6@1
  unsigned __int64 *v7; // r0@1
  unsigned int v8; // r0@1
  int v9; // r2@1
  __int64 v10; // r0@1
  int v11; // r12@1
  Dimension *v12; // r0@1
  CircuitSystem *v13; // r0@1
  int v14; // r5@1
  signed int v15; // r0@3
  unsigned __int8 v17; // [sp+0h] [bp-28h]@2
  __int64 v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+Ch] [bp-1Ch]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)j_Block::getBlockState((int)this, 12);
  v8 = (0xFu >> (4 - (*v7 >> 32))) & (v5 >> (*v7 + 1 - (*v7 >> 32)));
  v9 = Direction::STEP_Z[v8];
  HIDWORD(v10) = *((_DWORD *)v6 + 1);
  v11 = *((_DWORD *)v6 + 2);
  LODWORD(v10) = Direction::STEP_X[v8] + *(_DWORD *)v6;
  v18 = v10;
  v19 = v9 + v11;
  v12 = (Dimension *)j_BlockSource::getDimension(v4);
  v13 = (CircuitSystem *)j_Dimension::getCircuitSystem(v12);
  v14 = j_CircuitSystem::getStrength(v13, (const BlockPos *)&v18);
  if ( v14 < 15 )
  {
    j_BlockSource::getBlockID((BlockSource *)&v17, v4, (int)&v18);
    if ( v17 == *(_BYTE *)(Block::mRedStoneDust + 4) )
      v15 = j_BlockSource::getData(v4, (const BlockPos *)&v18);
    else
      v15 = 0;
    if ( v14 < v15 )
      v14 = v15;
  }
  return v14;
}


signed int __fastcall DiodeBlock::shouldTurnOn(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r0@1
  signed int v5; // r1@1

  v4 = (*(int (**)(void))(*(_DWORD *)this + 532))();
  v5 = 0;
  if ( v4 > 0 )
    v5 = 1;
  return v5;
}


signed int __fastcall DiodeBlock::getOutputSignal(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 15;
}


int __fastcall DiodeBlock::isAlternateInput(DiodeBlock *this, const Block *a2)
{
  const Block *v2; // r4@1
  int result; // r0@2

  v2 = a2;
  if ( j_Block::isType(a2, (const Block *)Block::mAir) )
    result = 0;
  else
    result = (*(int (__fastcall **)(const Block *))(*(_DWORD *)v2 + 100))(v2);
  return result;
}


signed int __fastcall DiodeBlock::isSameDiode(DiodeBlock *this, const Block *a2)
{
  DiodeBlock *v2; // r5@1
  const Block *v3; // r4@1
  int v4; // r1@2
  signed int result; // r0@2

  v2 = this;
  v3 = a2;
  if ( (const Block *)(*(int (**)(void))(*(_DWORD *)this + 556))() == a2 )
  {
    result = 1;
  }
  else
    v4 = (*(int (__fastcall **)(DiodeBlock *))(*(_DWORD *)v2 + 560))(v2);
    result = 0;
    if ( (const Block *)v4 == v3 )
      result = 1;
  return result;
}


unsigned int __fastcall DiodeBlock::getAlternateSignalAt(DiodeBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r6@1
  DiodeBlock *v6; // r5@1
  int v7; // r8@1
  Block *v8; // r7@1
  unsigned int result; // r0@3

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = (Block *)j_BlockSource::getBlock(a2, a3);
  if ( (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v6 + 536))(v6, v8) == 1 )
  {
    if ( j_Block::isType(v8, (const Block *)Block::mRedStoneDust) == 1 )
      result = j_BlockSource::getData(v5, v4);
    else
      result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 124))(v8, v5, v4, v7);
  }
  else
    result = 0;
  return result;
}


int __fastcall DiodeBlock::getPlacementDataValue(DiodeBlock *this, Entity *_R1, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [R1,#0x7C]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return ((unsigned __int8)j_mce::Math::floor(_R0, *(float *)&_R1) + 2) & 3;
}
