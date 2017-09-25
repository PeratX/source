

unsigned int __fastcall BaseRailBlock::onLoaded(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  BlockSource *v4; // r5@1
  unsigned __int8 v5; // r3@1
  char v7; // [sp+4h] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v7, a2, (int)a3);
  return BaseRailBlock::_createCircuitComponent(v4, v3, 0, v5);
}


unsigned int __fastcall BaseRailBlock::_createCircuitComponent(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  BlockSource *v4; // r5@1
  BlockSource *v5; // r4@1
  int v6; // r6@3
  BlockState *v7; // r0@4
  unsigned __int64 *v8; // r0@5
  unsigned int v9; // r0@5
  unsigned int result; // r0@7
  BlockState *v11; // r0@8
  unsigned __int64 *v12; // r0@9
  Level *v13; // r0@10
  Dimension *v14; // r0@11
  CircuitSystem *v15; // r0@11
  int v16; // r6@11
  int v17; // r6@14
  Level *v18; // r0@18
  Dimension *v19; // r0@19
  CircuitSystem *v20; // r7@19
  unsigned __int8 v21; // [sp+4h] [bp-1Ch]@1
  unsigned __int8 v22; // [sp+5h] [bp-1Bh]@9
  unsigned __int8 v23; // [sp+8h] [bp-18h]@3
  unsigned __int8 v24; // [sp+9h] [bp-17h]@5

  v4 = a2;
  v5 = this;
  BlockSource::getBlockAndData((BlockSource *)&v21, this, (int)a2);
  if ( v21 != *(_BYTE *)(Block::mGoldenRail + 4) && v21 != *(_BYTE *)(Block::mActivatorRail + 4) )
  {
    result = Block::mBlocks[v21];
    if ( result )
    {
      v11 = (BlockState *)Block::getBlockState(result, 32);
      result = BlockState::isInitialized(v11);
      if ( result == 1 )
      {
        v12 = (unsigned __int64 *)Block::getBlockState(Block::mBlocks[v21], 32);
        result = (0xFu >> (4 - (*v12 >> 32))) & (unsigned __int8)(v22 >> (*v12 + 1 - (*v12 >> 32)));
        if ( result >= 6 )
        {
          v13 = (Level *)BlockSource::getLevel(v5);
          result = Level::isClientSide(v13);
          if ( !result )
          {
            v14 = (Dimension *)BlockSource::getDimension(v5);
            v15 = (CircuitSystem *)Dimension::getCircuitSystem(v14);
            v16 = (int)v15;
            result = CircuitSystem::isAvailableAt(v15, v4);
            if ( !result )
              result = CircuitSystem::create<ConsumerComponent>(v16, v4, (int)v5, 1);
          }
        }
      }
    }
  }
  else
    BlockSource::getBlockAndData((BlockSource *)&v23, v5, (int)v4);
    v6 = Block::mBlocks[v23];
    if ( v6 )
      v7 = (BlockState *)Block::getBlockState(Block::mBlocks[v23], 32);
      if ( BlockState::isInitialized(v7) == 1 )
        v8 = (unsigned __int64 *)Block::getBlockState(v6, 32);
        v9 = (0xFu >> (4 - (*v8 >> 32))) & (v24 >> (*v8 + 1 - (*v8 >> 32)));
      else
        v9 = 0;
    else
      v9 = 0;
    v17 = 3;
    if ( (v9 | 1) == 3 )
      v17 = 4;
    if ( v9 == 1 )
    v18 = (Level *)BlockSource::getLevel(v5);
    result = Level::isClientSide(v18);
    if ( !result )
      v19 = (Dimension *)BlockSource::getDimension(v5);
      v20 = (CircuitSystem *)Dimension::getCircuitSystem(v19);
      if ( CircuitSystem::isAvailableAt(v20, v4) == 1 )
        CircuitSystem::removeComponents(v20, v4);
      result = CircuitSystem::create<BaseRailTransporter>((int)v20, v4, (int)v5, v17);
      if ( result )
        *(_DWORD *)(result + 44) = v21 == *(_BYTE *)(Block::mGoldenRail + 4);
  return result;
}


int __fastcall BaseRailBlock::Rail::removeSoftConnections(BaseRailBlock::Rail *this)
{
  int v1; // r7@0
  BaseRailBlock::Rail *v2; // r4@1
  int result; // r0@1
  int i; // r11@1
  __int64 v5; // kr00_8@1
  int v6; // r1@2
  int v7; // r0@2
  bool v8; // zf@2
  signed int v9; // r1@5
  int v10; // r2@5
  _DWORD *v11; // r7@5
  unsigned int v12; // r6@5
  unsigned int v13; // r1@5
  int v14; // r5@6
  bool v15; // zf@6
  int v16; // r0@10
  signed int v17; // r1@11
  int v18; // r2@12
  int v19; // r1@12
  unsigned int *v20; // r1@16
  unsigned int v21; // r0@18
  unsigned int *v22; // r6@22
  unsigned int v23; // r0@24
  int v24; // [sp+4h] [bp-2Ch]@2
  int v25; // [sp+8h] [bp-28h]@15

  v2 = this;
  v5 = *(_QWORD *)((char *)this + 20);
  result = *(_QWORD *)((char *)this + 20) >> 32;
  for ( i = v5; i != result; result = *((_DWORD *)v2 + 6) )
  {
    BaseRailBlock::Rail::getRail((BaseRailBlock::Rail *)&v24, v2, i);
    v7 = v24;
    v8 = v24 == 0;
    if ( v24 )
    {
      v6 = *(_QWORD *)(v24 + 20) >> 32;
      v1 = *(_QWORD *)(v24 + 20);
      v8 = v6 == v1;
    }
    if ( v8 )
LABEL_10:
      v16 = *((_DWORD *)v2 + 6);
      if ( i + 12 != v16 )
      {
        v17 = v16 - (i + 12);
        if ( v17 >= 1 )
        {
          v18 = i;
          v19 = -1431655765 * (v17 >> 2) + 1;
          do
          {
            --v19;
            *(_DWORD *)v18 = *(_DWORD *)(v18 + 12);
            *(_DWORD *)(v18 + 4) = *(_DWORD *)(v18 + 16);
            *(_DWORD *)(v18 + 8) = *(_DWORD *)(v18 + 20);
            v18 += 12;
          }
          while ( v19 > 1 );
        }
      }
      *((_DWORD *)v2 + 6) = v16 - 12;
    else
      v9 = v6 - v1;
      v10 = *((_DWORD *)v2 + 1);
      v11 = (_DWORD *)(v1 + 8);
      v12 = 0;
      v13 = -1431655765 * (v9 >> 2);
      while ( 1 )
        v14 = *(v11 - 2);
        v15 = v14 == v10;
        if ( v14 == v10 )
          v15 = *v11 == *((_DWORD *)v2 + 3);
        if ( v15 )
          break;
        ++v12;
        v11 += 3;
        if ( v12 >= v13 )
          goto LABEL_10;
      *(_DWORD *)i = *(_DWORD *)(v24 + 4);
      *(_DWORD *)(i + 4) = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(i + 8) = *(_DWORD *)(v7 + 12);
      i += 12;
    v1 = v25;
    if ( v25 )
      v20 = (unsigned int *)(v25 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v1 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
        if ( &pthread_create )
          __dmb();
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        else
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  }
  return result;
}


void __fastcall BaseRailBlock::onRedstoneUpdate(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BaseRailBlock::onRedstoneUpdate(this, a2, a3, a4, a5);
}


void __fastcall BaseRailBlock::~BaseRailBlock(BaseRailBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall BaseRailBlock::Rail::hasConnection(BaseRailBlock::Rail *this, const BlockPos *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@2
  _DWORD *v4; // r3@2
  int v5; // r2@2
  unsigned int v6; // r1@2
  int v7; // r0@3
  bool v8; // zf@3
  signed int result; // r0@7

  v2 = *(_QWORD *)((char *)this + 20);
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
LABEL_7:
    result = 0;
  }
  else
    v3 = *((_DWORD *)a2 + 2);
    v4 = (_DWORD *)(v2 + 8);
    v5 = *(_DWORD *)a2;
    v6 = 0;
    while ( 1 )
    {
      v7 = *(v4 - 2);
      v8 = v7 == v5;
      if ( v7 == v5 )
        v8 = *v4 == v3;
      if ( v8 )
        break;
      ++v6;
      v4 += 3;
      if ( v6 >= -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) )
        goto LABEL_7;
    }
    result = 1;
  return result;
}


int __fastcall BaseRailBlock::BaseRailBlock(int a1, const void **a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r6@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int *v14; // r2@1
  float v16; // [sp+0h] [bp-28h]@1
  int v17; // [sp+4h] [bp-24h]@1
  int v18; // [sp+8h] [bp-20h]@1
  signed int v19; // [sp+Ch] [bp-1Ch]@1
  signed int v20; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(15);
  Block::Block(v4, v7, v6, v8);
  *(_DWORD *)v4 = &loc_27046A0;
  *(_BYTE *)(v4 + 641) = v5;
  v18 = 1065353216;
  v19 = 1040187392;
  v20 = 1065353216;
  Block::setVisualShape((Block *)v4, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v18);
  Block::setSolid((Block *)v4, 0);
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 20) = 1;
  *(_DWORD *)(v4 + 44) = 1032805417;
  v17 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v4 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v14 = (int *)&v16;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x28+var_28]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v14 = &v17;
  Block::mTranslucency[v6] = *v14;
  return v4;
}


signed int __fastcall BaseRailBlock::neighborChanged(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r7@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  BaseRailBlock *v7; // r6@1
  signed int result; // r0@1
  int v9; // [sp+0h] [bp-18h]@2

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  result = BaseRailBlock::_isAttachedPosition(this, a2, a3, a4);
  if ( result == 1 )
  {
    BlockSource::getBlockID((BlockSource *)&v9, v6, (int)v4);
    result = BaseRailBlock::_updatePlacement(v7, v6, v5, (unsigned __int8)v9);
  }
  return result;
}


int __fastcall BaseRailBlock::Rail::getRail(BaseRailBlock::Rail *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r6@1
  BaseRailBlock::Rail *v4; // r4@1
  int v5; // r5@1
  BlockSource *v6; // r2@4
  int result; // r0@5
  int v8; // r1@7
  int v9; // r3@7
  BlockSource *v10; // r2@10
  int v11; // r1@11
  int v12; // r3@11
  char *v13; // r1@11
  int *v14; // r3@11
  int v15; // r1@14
  int v16; // r3@14
  int v17; // r1@18
  int v18; // r3@18
  int v19; // [sp+4h] [bp-44h]@18
  int v20; // [sp+8h] [bp-40h]@18
  int v21; // [sp+Ch] [bp-3Ch]@18
  int v22; // [sp+10h] [bp-38h]@14
  int v23; // [sp+14h] [bp-34h]@14
  int v24; // [sp+18h] [bp-30h]@14
  int v25; // [sp+1Ch] [bp-2Ch]@11
  int v26; // [sp+20h] [bp-28h]@11
  int v27; // [sp+24h] [bp-24h]@11
  int v28; // [sp+28h] [bp-20h]@7
  int v29; // [sp+2Ch] [bp-1Ch]@7
  int v30; // [sp+30h] [bp-18h]@7
  unsigned __int8 v31; // [sp+34h] [bp-14h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  BlockSource::getBlockID((BlockSource *)&v31, *(const BlockPos **)a2, a3);
  if ( *(_BYTE *)(Block::mRail + 4) == v31
    || *(_BYTE *)(Block::mGoldenRail + 4) == v31
    || *(_BYTE *)(Block::mDetectorRail + 4) == v31 )
  {
    v6 = *(BlockSource **)v3;
    return std::__shared_ptr<BaseRailBlock::Rail,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BaseRailBlock::Rail>,BlockSource &,BlockPos const&>(
             (int)v4,
             (int)&v31,
             v6,
             (const BlockPos *)v5);
  }
  v6 = *(BlockSource **)v3;
  if ( *(_BYTE *)(Block::mActivatorRail + 4) == v31 )
  v8 = *(_DWORD *)(v5 + 4);
  v9 = *(_DWORD *)(v5 + 8);
  v28 = *(_DWORD *)v5;
  v29 = v8 + 1;
  v30 = v9;
  BlockSource::getBlockID((BlockSource *)&v31, v6, (int)&v28);
    v10 = *(BlockSource **)v3;
LABEL_11:
    v11 = *(_DWORD *)(v5 + 4);
    v12 = *(_DWORD *)(v5 + 8);
    v25 = *(_DWORD *)v5;
    v26 = v11 + 1;
    v27 = v12;
    v13 = (char *)&v31;
    v14 = &v25;
    return std::__shared_ptr<BaseRailBlock::Rail,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BaseRailBlock::Rail>,BlockSource &,BlockPos>(
             (int)v13,
             v10,
             (const BlockPos *)v14);
  v10 = *(BlockSource **)v3;
    goto LABEL_11;
  v15 = *(_DWORD *)(v5 + 4);
  v16 = *(_DWORD *)(v5 + 8);
  v22 = *(_DWORD *)v5;
  v23 = v15 - 1;
  v24 = v16;
  BlockSource::getBlockID((BlockSource *)&v31, v10, (int)&v22);
    || *(_BYTE *)(Block::mDetectorRail + 4) == v31
    || *(_BYTE *)(Block::mActivatorRail + 4) == v31 )
    v17 = *(_DWORD *)(v5 + 4);
    v18 = *(_DWORD *)(v5 + 8);
    v19 = *(_DWORD *)v5;
    v20 = v17 - 1;
    v21 = v18;
    v14 = &v19;
  result = 0;
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v4 + 1) = 0;
  return result;
}


int __fastcall BaseRailBlock::_updatePlacement(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r5@1
  BaseRailBlock *v5; // r10@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  int result; // r0@1
  int v9; // r9@2
  int v10; // r7@3
  BlockState *v11; // r0@3
  BlockState *v12; // r0@4
  int v13; // r1@5
  int v14; // r2@5
  int v15; // r1@7
  int v16; // r2@7
  __int64 *v17; // r1@7
  int v18; // r1@8
  int v19; // r2@8
  int v20; // r2@9
  int v21; // r2@10
  __int16 v22; // [sp+Ch] [bp-64h]@14
  __int64 v23; // [sp+10h] [bp-60h]@10
  int v24; // [sp+18h] [bp-58h]@10
  __int64 v25; // [sp+1Ch] [bp-54h]@9
  int v26; // [sp+24h] [bp-4Ch]@9
  int v27; // [sp+28h] [bp-48h]@8
  int v28; // [sp+2Ch] [bp-44h]@8
  int v29; // [sp+30h] [bp-40h]@8
  int v30; // [sp+34h] [bp-3Ch]@7
  int v31; // [sp+38h] [bp-38h]@7
  int v32; // [sp+3Ch] [bp-34h]@7
  int v33; // [sp+40h] [bp-30h]@5
  int v34; // [sp+44h] [bp-2Ch]@5
  int v35; // [sp+48h] [bp-28h]@5
  unsigned __int8 v36; // [sp+4Ch] [bp-24h]@2
  unsigned __int8 v37; // [sp+4Dh] [bp-23h]@2

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v7);
  if ( !result )
  {
    BlockSource::getBlockAndData((BlockSource *)&v36, v4, (int)v6);
    v9 = v37;
    if ( *((_BYTE *)v5 + 641) )
    {
      v10 = Block::mBlocks[v36];
      v11 = (BlockState *)Block::getBlockState(Block::mBlocks[v36], 31);
      if ( BlockState::isInitialized(v11) == 1 )
      {
        v12 = (BlockState *)Block::getBlockState(v10, 31);
        v9 &= ~BlockState::getMask(v12);
      }
    }
    v13 = *((_DWORD *)v6 + 1);
    v14 = *((_DWORD *)v6 + 2);
    v33 = *(_DWORD *)v6;
    v34 = v13 - 1;
    v35 = v14;
    if ( BlockSource::canProvideSupport(v4, (int)&v33) == 1 )
      switch ( v9 )
        case 2:
          v15 = *((_DWORD *)v6 + 1);
          v16 = *((_DWORD *)v6 + 2);
          v30 = *(_DWORD *)v6 + 1;
          v31 = v15;
          v32 = v16;
          v17 = (__int64 *)&v30;
          goto LABEL_11;
        case 3:
          v18 = *((_DWORD *)v6 + 1);
          v19 = *((_DWORD *)v6 + 2);
          v27 = *(_DWORD *)v6 - 1;
          v28 = v18;
          v29 = v19;
          v17 = (__int64 *)&v27;
        case 4:
          v20 = *((_DWORD *)v6 + 2);
          v25 = *(_QWORD *)v6;
          v26 = v20 - 1;
          v17 = &v25;
        case 5:
          v21 = *((_DWORD *)v6 + 2);
          v23 = *(_QWORD *)v6;
          v17 = &v23;
          v24 = v21 + 1;
LABEL_11:
          if ( BlockSource::canProvideSupport(v4, (int)v17) )
            goto def_1853F62;
          goto LABEL_14;
        default:
def_1853F62:
          result = (*(int (__fastcall **)(BaseRailBlock *, BlockSource *, const BlockPos *, _DWORD))(*(_DWORD *)v5 + 504))(
                     v5,
                     v4,
                     v6,
                     v37);
          break;
    else
LABEL_14:
      (*(void (__fastcall **)(BaseRailBlock *, BlockSource *, const BlockPos *, _DWORD))(*(_DWORD *)v5 + 276))(
        v5,
        v4,
        v6,
        v37);
      v22 = 0;
      result = BlockSource::setBlockAndData((int)v4, v6, (int)&v22, 3, 0);
  }
  return result;
}


signed int __fastcall BaseRailBlock::isRail(BaseRailBlock *this, int a2)
{
  signed int result; // r0@4
  signed int v3; // r1@5

  if ( (BaseRailBlock *)*(_BYTE *)(Block::mRail + 4) != this
    && (BaseRailBlock *)*(_BYTE *)(Block::mGoldenRail + 4) != this
    && (BaseRailBlock *)*(_BYTE *)(Block::mDetectorRail + 4) != this )
  {
    v3 = 0;
    if ( (BaseRailBlock *)*(_BYTE *)(Block::mActivatorRail + 4) == this )
      v3 = 1;
    result = v3;
  }
  else
    result = 1;
  return result;
}


int __fastcall BaseRailBlock::_isFacingWestEast(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3)
{
  signed int v3; // r5@1
  int v4; // r4@1
  unsigned int v5; // r0@1
  BlockState *v6; // r0@2
  unsigned __int64 *v7; // r0@3
  unsigned __int8 v9; // [sp+4h] [bp-14h]@1
  unsigned __int8 v10; // [sp+5h] [bp-13h]@3

  BlockSource::getBlockAndData((BlockSource *)&v9, this, (int)a2);
  v3 = 0;
  v4 = Block::mBlocks[v9];
  v5 = 0;
  if ( v4 )
  {
    v6 = (BlockState *)Block::getBlockState(Block::mBlocks[v9], 32);
    if ( BlockState::isInitialized(v6) == 1 )
    {
      v7 = (unsigned __int64 *)Block::getBlockState(v4, 32);
      v5 = (0xFu >> (4 - (*v7 >> 32))) & (v10 >> (*v7 + 1 - (*v7 >> 32)));
    }
    else
      v5 = 0;
  }
  if ( (v5 | 1) == 3 )
    v3 = 1;
  if ( v5 != 1 )
    v5 = 0;
  return v5 | v3;
}


signed int __fastcall BaseRailBlock::_isAttachedPosition(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r7@1
  int v10; // r1@6
  int v11; // r2@6
  int v12; // r1@7
  int v13; // r0@7
  int v14; // r2@8
  int v15; // r0@11
  int v16; // r2@12
  int v17; // r1@16
  int v18; // r2@16
  signed int result; // r0@22
  __int64 v20; // [sp+4h] [bp-54h]@12
  int v21; // [sp+Ch] [bp-4Ch]@12
  __int64 v22; // [sp+10h] [bp-48h]@8
  int v23; // [sp+18h] [bp-40h]@8
  int v24; // [sp+1Ch] [bp-3Ch]@16
  int v25; // [sp+20h] [bp-38h]@16
  int v26; // [sp+24h] [bp-34h]@16
  int v27; // [sp+28h] [bp-30h]@6
  int v28; // [sp+2Ch] [bp-2Ch]@6
  int v29; // [sp+30h] [bp-28h]@6
  int v30; // [sp+34h] [bp-24h]@1
  int v31; // [sp+38h] [bp-20h]@1
  int v32; // [sp+3Ch] [bp-1Ch]@1
  char v33; // [sp+40h] [bp-18h]@1
  unsigned __int8 v34; // [sp+41h] [bp-17h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v33, a2, (int)a3);
  v7 = *((_DWORD *)v5 + 1);
  v8 = *((_DWORD *)v5 + 2);
  v30 = *(_DWORD *)v5;
  v9 = v34;
  v31 = v7 - 1;
  v32 = v8;
  if ( BlockSource::canProvideSupport(v6, (int)&v30) == 1
    && *(_DWORD *)v5 == *(_DWORD *)v4
    && *((_DWORD *)v5 + 1) - 1 == *((_DWORD *)v4 + 1)
    && *((_DWORD *)v5 + 2) == *((_DWORD *)v4 + 2) )
  {
LABEL_22:
    result = 1;
  }
  else
    switch ( v9 )
    {
      case 2:
        v10 = *((_DWORD *)v5 + 1);
        v11 = *((_DWORD *)v5 + 2);
        v27 = *(_DWORD *)v5 + 1;
        v28 = v10;
        v29 = v11;
        if ( BlockSource::canProvideSupport(v6, (int)&v27) != 1 )
          break;
        v12 = *(_DWORD *)v4;
        v13 = *(_DWORD *)v5 + 1;
        goto LABEL_18;
      case 4:
        v14 = *((_DWORD *)v5 + 2);
        v22 = *(_QWORD *)v5;
        v23 = v14 - 1;
        if ( BlockSource::canProvideSupport(v6, (int)&v22) != 1
          || *(_DWORD *)v5 != *(_DWORD *)v4
          || *((_DWORD *)v5 + 1) != *((_DWORD *)v4 + 1) )
        {
        }
        v15 = *((_DWORD *)v5 + 2) - 1;
        goto LABEL_21;
      case 5:
        v16 = *((_DWORD *)v5 + 2);
        v20 = *(_QWORD *)v5;
        v21 = v16 + 1;
        if ( BlockSource::canProvideSupport(v6, (int)&v20) != 1
        v15 = *((_DWORD *)v5 + 2) + 1;
      case 3:
        v17 = *((_DWORD *)v5 + 1);
        v18 = *((_DWORD *)v5 + 2);
        v24 = *(_DWORD *)v5 - 1;
        v25 = v17;
        v26 = v18;
        if ( BlockSource::canProvideSupport(v6, (int)&v24) == 1 )
          v12 = *(_DWORD *)v4;
          v13 = *(_DWORD *)v5 - 1;
LABEL_18:
          if ( v13 == v12 && *((_DWORD *)v5 + 1) == *((_DWORD *)v4 + 1) )
          {
            v15 = *((_DWORD *)v5 + 2);
LABEL_21:
            if ( v15 == *((_DWORD *)v4 + 2) )
              goto LABEL_22;
          }
        break;
      default:
    }
    result = 0;
  return result;
}


void __fastcall BaseRailBlock::onRedstoneUpdate(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockSource *v5; // r6@1
  int v6; // r4@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  int v9; // r0@1
  bool v10; // zf@1
  Dimension *v11; // r0@5
  _BYTE *v12; // r7@5
  BaseRailBlock::Rail *v13; // r0@5
  char v14; // [sp+4h] [bp-34h]@5
  void *ptr; // [sp+18h] [bp-20h]@5

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  v9 = Level::isClientSide(v8);
  v10 = v9 == 0;
  if ( !v9 )
    v10 = a5 == 0;
  if ( v10 )
  {
    v11 = (Dimension *)BlockSource::getDimension(v5);
    v12 = (_BYTE *)Dimension::getCircuitSystem(v11);
    *v12 = 1;
    v13 = BaseRailBlock::Rail::Rail((BaseRailBlock::Rail *)&v14, v5, v7);
    BaseRailBlock::Rail::place(v13, v6, 1);
    *v12 = 0;
    if ( ptr )
      operator delete(ptr);
  }
}


signed int __fastcall BaseRailBlock::getResourceCount(BaseRailBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


signed int __fastcall BaseRailBlock::Rail::hasNeighborRail(BaseRailBlock::Rail *this, const BlockPos *a2)
{
  BaseRailBlock::Rail *v2; // r4@1
  __int64 v3; // kr00_8@2
  signed int v4; // r4@3
  signed int v5; // r0@5
  int v6; // r3@5
  _DWORD *v7; // r5@5
  int v8; // r2@5
  unsigned int v9; // r4@5
  int v10; // r6@6
  bool v11; // zf@6
  int v12; // r5@14
  unsigned int *v13; // r1@15
  unsigned int v14; // r0@17
  unsigned int *v15; // r6@21
  unsigned int v16; // r0@23
  BaseRailBlock::Rail *v18; // [sp+0h] [bp-18h]@1
  int v19; // [sp+4h] [bp-14h]@14

  v2 = this;
  BaseRailBlock::Rail::getRail((BaseRailBlock::Rail *)&v18, this, (int)a2);
  if ( v18 )
  {
    BaseRailBlock::Rail::removeSoftConnections(v18);
    v3 = *(_QWORD *)((char *)v18 + 20);
    if ( HIDWORD(v3) == (_DWORD)v3 )
    {
      v4 = 1;
    }
    else
      v5 = HIDWORD(v3) - v3;
      v6 = *((_DWORD *)v2 + 3);
      v7 = (_DWORD *)(v3 + 8);
      v8 = *((_DWORD *)v2 + 1);
      v9 = 0;
      do
      {
        v10 = *(v7 - 2);
        v11 = v10 == v8;
        if ( v10 == v8 )
          v11 = *v7 == v6;
        if ( v11 )
        {
          v4 = 1;
          goto LABEL_14;
        }
        ++v9;
        v7 += 3;
      }
      while ( v9 < -1431655765 * (v5 >> 2) );
      v4 = 0;
      if ( v5 != 24 )
        v4 = 1;
  }
  else
    v4 = 0;
LABEL_14:
  v12 = v19;
  if ( v19 )
    v13 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
      __dmb();
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return v4;
}


int __fastcall BaseRailBlock::onPlace(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  BaseRailBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  int result; // r0@4
  unsigned __int8 v8; // [sp+4h] [bp-14h]@4

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v6) )
  {
    BaseRailBlock::updateDir(0, v3, v5, 1);
    if ( *((_BYTE *)v4 + 641) )
      BaseRailBlock::_updatePlacement(v4, v3, v5, *((_BYTE *)v4 + 4));
  }
  BlockSource::getBlockID((BlockSource *)&v8, v3, (int)v5);
  result = *((_BYTE *)v4 + 4);
  if ( v8 == result )
    (*(void (__fastcall **)(BaseRailBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v4 + 188))(v4, v3, v5);
    result = BaseRailBlock::_updatePlacement(v4, v3, v5, *((_BYTE *)v4 + 4));
  return result;
}


int __fastcall BaseRailBlock::Rail::place(BaseRailBlock::Rail *this, int a2, int a3)
{
  BaseRailBlock::Rail *v3; // r9@1
  __int64 v4; // r0@1
  int v5; // r4@1
  BlockPos *v6; // r10@1
  signed int v7; // r11@1
  __int64 v8; // r0@1
  signed int v9; // r6@1
  __int64 v10; // r1@1
  signed int v11; // r5@1
  __int64 v12; // r1@1
  signed int v14; // r0@1
  int v15; // r12@1
  signed int v17; // r2@1
  int v18; // r3@8
  char v19; // r1@8
  int v20; // lr@10
  char v21; // r3@12
  char v25; // r1@31
  char v26; // r3@35
  char v27; // r1@39
  int v28; // r0@51
  char v29; // r1@51
  char v30; // r2@55
  char v31; // r1@59
  unsigned int v32; // r6@72
  unsigned int v33; // r5@72
  int v34; // r11@72
  const BlockPos *v35; // r1@74
  const BlockPos *v36; // r1@79
  const BlockPos *v37; // r1@83
  const BlockPos *v38; // r1@88
  int v39; // r6@96
  __int64 v40; // r0@96
  int v41; // r5@96
  BlockState *v42; // r0@97
  BlockState *v43; // r0@98
  int v44; // r8@98
  char v45; // r4@98
  int v46; // r7@98
  char v47; // r0@98
  int v48; // r6@98
  int v49; // r7@103
  BlockState *v50; // r0@103
  BlockState *v51; // r0@104
  signed int v52; // r4@104
  __int64 v53; // r0@107
  int v54; // r5@108
  unsigned __int8 v55; // r3@108
  unsigned int v56; // r7@109
  __int64 v57; // kr20_8@111
  signed int v58; // r12@112
  int v59; // r3@112
  _DWORD *v60; // r5@112
  unsigned int v61; // r4@112
  int v62; // r1@113
  int v64; // r6@119
  unsigned int *v65; // r1@120
  unsigned int v66; // r0@122
  unsigned int *v67; // r4@126
  unsigned int v68; // r0@128
  int v70; // [sp+14h] [bp-9Ch]@1
  BaseRailBlock::Rail *v71; // [sp+18h] [bp-98h]@74
  int v72; // [sp+1Ch] [bp-94h]@119
  char v73; // [sp+20h] [bp-90h]@108
  char v74; // [sp+24h] [bp-8Ch]@108
  char v75; // [sp+25h] [bp-8Bh]@108
  unsigned __int8 v76; // [sp+28h] [bp-88h]@96
  unsigned int v77; // [sp+2Ch] [bp-84h]@88
  unsigned int v78; // [sp+30h] [bp-80h]@88
  int v79; // [sp+34h] [bp-7Ch]@88
  unsigned int v80; // [sp+38h] [bp-78h]@83
  unsigned int v81; // [sp+3Ch] [bp-74h]@83
  int v82; // [sp+40h] [bp-70h]@83
  unsigned __int64 v83; // [sp+44h] [bp-6Ch]@79
  int v84; // [sp+4Ch] [bp-64h]@79
  unsigned __int64 v85; // [sp+50h] [bp-60h]@74
  int v86; // [sp+58h] [bp-58h]@74
  int v87; // [sp+5Ch] [bp-54h]@1
  unsigned __int64 v88; // [sp+60h] [bp-50h]@1
  int v89; // [sp+68h] [bp-48h]@1
  unsigned __int64 v90; // [sp+6Ch] [bp-44h]@1
  int v91; // [sp+74h] [bp-3Ch]@1
  __int64 v92; // [sp+78h] [bp-38h]@1
  int v93; // [sp+80h] [bp-30h]@1
  __int64 v94; // [sp+84h] [bp-2Ch]@1

  v3 = this;
  v70 = a2;
  v4 = *((_QWORD *)this + 1);
  v5 = a3;
  v6 = (BaseRailBlock::Rail *)((char *)v3 + 4);
  v93 = *((_DWORD *)v3 + 1);
  v94 = v4 - 0x100000000LL;
  v7 = BaseRailBlock::Rail::hasNeighborRail(v3, (const BlockPos *)&v93);
  v8 = *((_QWORD *)v3 + 1);
  v91 = *((_DWORD *)v3 + 1);
  v92 = v8 + 0x100000000LL;
  v9 = BaseRailBlock::Rail::hasNeighborRail(v3, (const BlockPos *)&v91);
  v10 = *((_QWORD *)v3 + 1);
  v89 = *((_DWORD *)v3 + 1) - 1;
  v90 = __PAIR__(HIDWORD(v10), (unsigned int)v10);
  v11 = BaseRailBlock::Rail::hasNeighborRail(v3, (const BlockPos *)&v89);
  v12 = *((_QWORD *)v3 + 1);
  v87 = *((_DWORD *)v3 + 1) + 1;
  v88 = __PAIR__(HIDWORD(v12), (unsigned int)v12);
  _R8 = (v7 | v9) ^ 1;
  v14 = BaseRailBlock::Rail::hasNeighborRail(v3, (const BlockPos *)&v87);
  v15 = v11 | v14;
  LOBYTE(_R7) = 1;
  v17 = (v11 | _R8 | v14) << 31;
  if ( (v11 | v14) != 1 )
    _R7 = v17 >> 31;
  if ( v7 )
  if ( v9 )
  if ( !*((_BYTE *)v3 + 16) )
  {
    v18 = v11 ^ 1 | v7 ^ 1 | v9;
    v19 = 7;
    if ( v9 ^ 1 | v11 ^ 1 | v7 | v14 )
      v19 = 6;
    v20 = v18 | v14;
    if ( !(v18 | v14) )
      v19 = 8;
    v21 = v19;
    if ( v14 != 1 )
      v21 = _R7;
    if ( v9 ^ 1 )
    if ( v7 )
    if ( v11 )
    if ( !(v9 ^ 1 | v11 ^ 1 | v7 | v14) )
      v21 = v19;
    if ( !v20 )
    if ( (v14 ^ 1 | v7 ^ 1 | v9 | v11) != 1 )
    {
      LOBYTE(_R7) = 9;
      v6 = (BaseRailBlock::Rail *)((char *)v3 + 4);
      goto LABEL_96;
    }
    v6 = (BaseRailBlock::Rail *)((char *)v3 + 4);
    LOBYTE(_R7) = v21;
  }
  if ( (unsigned __int8)_R7 == 255 )
    __asm { SBFX.W          R7, R8, #0, #1 }
    if ( v15 )
      LOBYTE(_R7) = 1;
    if ( !*((_BYTE *)v3 + 16) )
      if ( v70 < 1 )
      {
        v28 = v14 ^ 1;
        v29 = 9;
        if ( v28 )
          v29 = 8;
        if ( v7 != 1 )
        v30 = v29;
        if ( v11 == 1 )
          v30 = 7;
        if ( v9 != 1 )
          v30 = v29;
        v31 = _R7;
        if ( v15 )
          v31 = v30;
        if ( !v7 )
          v31 = _R7;
        if ( !v11 )
          v30 = v31;
        if ( !v9 )
        if ( v9 ^ 1 )
        {
          LOBYTE(_R7) = v30;
        }
        else
          if ( v28 != 1 )
          {
            LOBYTE(_R7) = 6;
            goto LABEL_96;
          }
      }
      else
        v25 = 7;
        if ( v11 != 1 )
          v25 = 6;
        v26 = v25;
        if ( v14 == 1 )
          v26 = 9;
          v26 = v25;
        v27 = _R7;
          v27 = v26;
          v27 = _R7;
        if ( !v14 )
          v26 = v27;
        if ( v7 ^ 1 )
          LOBYTE(_R7) = v26;
          if ( !(v11 ^ 1) )
            LOBYTE(_R7) = 8;
  v32 = *(_QWORD *)((char *)v3 + 4);
  v33 = (*(_QWORD *)((char *)v3 + 4) >> 32) + 1;
  v34 = *((_DWORD *)v3 + 3);
  if ( (unsigned __int8)_R7 == 1 )
    v37 = *(const BlockPos **)v3;
    v80 = v32 + 1;
    v81 = v33;
    v82 = v34;
    BlockSource::getBlockID((BlockSource *)&v71, v37, (int)&v80);
    if ( *(_BYTE *)(Block::mRail + 4) != (unsigned __int8)v71
      && *(_BYTE *)(Block::mGoldenRail + 4) != (unsigned __int8)v71
      && *(_BYTE *)(Block::mDetectorRail + 4) != (unsigned __int8)v71
      && *(_BYTE *)(Block::mActivatorRail + 4) != (unsigned __int8)v71 )
    else
      LOBYTE(_R7) = 2;
    v38 = *(const BlockPos **)v3;
    v77 = v32 - 1;
    v78 = v33;
    v79 = v34;
    BlockSource::getBlockID((BlockSource *)&v71, v38, (int)&v77);
      && *(_BYTE *)(Block::mDetectorRail + 4) != (unsigned __int8)v71 )
      if ( *(_BYTE *)(Block::mActivatorRail + 4) == (unsigned __int8)v71 )
        LOBYTE(_R7) = 3;
      LOBYTE(_R7) = 3;
  else
    if ( (_BYTE)_R7 )
      goto LABEL_143;
    v35 = *(const BlockPos **)v3;
    v85 = __PAIR__(v33, v32);
    v86 = v34 - 1;
    BlockSource::getBlockID((BlockSource *)&v71, v35, (int)&v85);
      LOBYTE(_R7) = 0;
      LOBYTE(_R7) = 4;
    v36 = *(const BlockPos **)v3;
    v83 = __PAIR__(v33, v32);
    v84 = v34 + 1;
    BlockSource::getBlockID((BlockSource *)&v71, v36, (int)&v83);
    if ( *(_BYTE *)(Block::mRail + 4) == (unsigned __int8)v71
      || *(_BYTE *)(Block::mGoldenRail + 4) == (unsigned __int8)v71
      || *(_BYTE *)(Block::mDetectorRail + 4) == (unsigned __int8)v71 )
      LOBYTE(_R7) = 5;
    if ( *(_BYTE *)(Block::mActivatorRail + 4) != (unsigned __int8)v71 )
LABEL_143:
      if ( (unsigned __int8)_R7 > 0xFu )
        LOBYTE(_R7) = 0;
LABEL_96:
  v39 = (unsigned __int8)_R7;
  LODWORD(v40) = v3;
  HIDWORD(v40) = (unsigned __int8)_R7;
  BaseRailBlock::Rail::updateConnections(v40);
  BlockSource::getBlockAndData((BlockSource *)&v76, *(const BlockPos **)v3, (int)v6);
  v41 = Block::mBlocks[v76];
  if ( v41 )
    v42 = (BlockState *)Block::getBlockState(Block::mBlocks[v76], 32);
    if ( BlockState::isInitialized(v42) == 1 )
      v43 = (BlockState *)Block::getBlockState(v41, 32);
      v44 = v5;
      v46 = *(_QWORD *)v43 >> 32;
      v45 = *(_QWORD *)v43;
      BlockState::getMask(v43);
      v47 = v45 + 1;
      v5 = v44;
      v48 = v39 << (v47 - v46);
      LOBYTE(v48) = 0;
    if ( v70 >= 1 && *((_BYTE *)v3 + 16) )
      v49 = v5;
      v50 = (BlockState *)Block::getBlockState(v41, 31);
      if ( BlockState::isInitialized(v50) == 1 )
        v51 = (BlockState *)Block::getBlockState(v41, 31);
        v52 = 1 << (*(_QWORD *)v51 + 1 - (unsigned int)(*(_QWORD *)v51 >> 32));
        LOBYTE(v48) = v48 & ~(unsigned __int8)BlockState::getMask(v51) | v52;
      v5 = v49;
    LOBYTE(v48) = 0;
  if ( v5 || (LODWORD(v53) = BlockSource::getData(*(BlockSource **)v3, v6), (_DWORD)v53 != (unsigned __int8)v48) )
    v54 = *(_DWORD *)v3;
    BlockSource::getBlockID((BlockSource *)&v73, *(const BlockPos **)v3, (int)v6);
    v74 = v73;
    v75 = v48;
    BlockSource::setBlockAndData(v54, v6, (int)&v74, 2, 0);
    BaseRailBlock::_createCircuitComponent(*(BaseRailBlock **)v3, v6, 0, v55);
    v53 = *(_QWORD *)((char *)v3 + 20);
    if ( HIDWORD(v53) != (_DWORD)v53 )
      v56 = 0;
      do
        BaseRailBlock::Rail::getRail((BaseRailBlock::Rail *)&v71, v3, v53 + 12 * v56);
        if ( v71 )
          BaseRailBlock::Rail::removeSoftConnections(v71);
          v57 = *(_QWORD *)((char *)v71 + 20);
          if ( HIDWORD(v57) != (_DWORD)v57 )
            v58 = HIDWORD(v57) - v57;
            v59 = *((_DWORD *)v3 + 1);
            v60 = (_DWORD *)(v57 + 8);
            v61 = 0;
            while ( 1 )
            {
              v62 = *(v60 - 2);
              _ZF = v62 == v59;
              if ( v62 == v59 )
                _ZF = *v60 == *((_DWORD *)v3 + 3);
              if ( _ZF )
                break;
              ++v61;
              v60 += 3;
              if ( v61 >= -1431655765 * (v58 >> 2) )
              {
                if ( v58 == 24 )
                  goto LABEL_119;
              }
            }
          BaseRailBlock::Rail::connectTo(v71, v3);
LABEL_119:
        v64 = v72;
        if ( v72 )
          v65 = (unsigned int *)(v72 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
          else
            v66 = (*v65)--;
          if ( v66 == 1 )
            v67 = (unsigned int *)(v64 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 8))(v64);
            if ( &pthread_create )
              __dmb();
              do
                v68 = __ldrex(v67);
              while ( __strex(v68 - 1, v67) );
            else
              v68 = (*v67)--;
            if ( v68 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 12))(v64);
        v53 = *(_QWORD *)((char *)v3 + 20);
        ++v56;
      while ( v56 < -1431655765 * ((HIDWORD(v53) - (signed int)v53) >> 2) );
  return v53;
}


signed int __fastcall BaseRailBlock::isRailBlock(BaseRailBlock *this)
{
  return 1;
}


_DWORD *__fastcall BaseRailBlock::getAABB(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  BlockSource *v7; // r6@1
  AABB *v8; // r5@1
  const BlockPos *v9; // r4@1
  unsigned __int64 *v10; // r7@2
  unsigned int v11; // r0@2
  AABB *v16; // r5@4
  _DWORD *result; // r0@4
  char v18; // [sp+4h] [bp-2Ch]@4
  int v19; // [sp+10h] [bp-20h]@4
  int v20; // [sp+18h] [bp-18h]@4

  v7 = a2;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = (unsigned __int64 *)Block::getBlockState((int)this, 32);
    v11 = BlockSource::getData(v7, v9);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, =0.0625
    }
    if ( ((v11 >> (*v10 + 1 - (*v10 >> 32))) & (0xFu >> (4 - (*v10 >> 32)))) - 2 < 5 )
      __asm { VMOVCC.F32      S2, S0 }
    v19 = 1065353216;
    __asm { VSTR            S2, [SP,#0x30+var_1C] }
    v20 = 1065353216;
    v16 = (AABB *)AABB::set(v8, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v19);
    Vec3::Vec3((int)&v18, (int)v9);
    result = (_DWORD *)AABB::move(v16, (const Vec3 *)&v18);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


void __fastcall BaseRailBlock::~BaseRailBlock(BaseRailBlock *this)
{
  BaseRailBlock::~BaseRailBlock(this);
}


signed int __fastcall BaseRailBlock::Rail::canConnectTo(BaseRailBlock::Rail *this, BaseRailBlock::Rail *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@2
  int v4; // lr@3
  _DWORD *v5; // r2@3
  int v6; // r3@3
  unsigned int v7; // r1@3
  int v8; // r4@4
  bool v9; // zf@4
  signed int result; // r0@8

  v2 = *(_QWORD *)((char *)this + 20);
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
    v3 = HIDWORD(v2) - v2;
LABEL_8:
    result = 0;
    if ( v3 != 24 )
      result = 1;
  }
  else
    v4 = *((_DWORD *)a2 + 3);
    v5 = (_DWORD *)(v2 + 8);
    v6 = *((_DWORD *)a2 + 1);
    v7 = 0;
    while ( 1 )
    {
      v8 = *(v5 - 2);
      v9 = v8 == v6;
      if ( v8 == v6 )
        v9 = *v5 == v4;
      if ( v9 )
        break;
      ++v7;
      v5 += 3;
      if ( v7 >= -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


BaseRailBlock::Rail *__fastcall BaseRailBlock::Rail::Rail(BaseRailBlock::Rail *this, BlockSource *a2, const BlockPos *a3)
{
  BaseRailBlock::Rail *v3; // r4@1
  int v4; // r5@1
  bool v5; // zf@1
  BlockState *v6; // r0@4
  BlockState *v7; // r0@5
  int v8; // r5@5
  __int64 v9; // r0@5
  unsigned __int8 v11; // [sp+4h] [bp-14h]@1
  int v12; // [sp+5h] [bp-13h]@5

  v3 = this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = *(_DWORD *)a3;
  *((_DWORD *)this + 2) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  BlockSource::getBlockAndData((BlockSource *)&v11, a2, (int)a3);
  v4 = Block::mBlocks[v11];
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(_BYTE *)(v4 + 641) == 0;
  if ( v5 || (v6 = (BlockState *)Block::getBlockState(Block::mBlocks[v11], 31), BlockState::isInitialized(v6) != 1) )
  {
    *((_BYTE *)v3 + 16) = 0;
    HIDWORD(v9) = (unsigned __int8)v12;
  }
  else
    *((_BYTE *)v3 + 16) = 1;
    v7 = (BlockState *)Block::getBlockState(v4, 31);
    v8 = (unsigned __int8)v12;
    LODWORD(v9) = BlockState::getMask(v7);
    HIDWORD(v9) = v8 & ~(_DWORD)v9;
    LOBYTE(v12) = v8 & ~(_BYTE)v9;
  LODWORD(v9) = v3;
  BaseRailBlock::Rail::updateConnections(v9);
  return v3;
}


void __fastcall BaseRailBlock::updateDir(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r6@1
  int v5; // r4@1
  const BlockPos *v6; // r5@1
  Level *v7; // r0@1
  Dimension *v8; // r0@2
  CircuitSystem *v9; // r7@2
  int v10; // r0@2
  char v11; // [sp+4h] [bp-34h]@2
  void *ptr; // [sp+18h] [bp-20h]@2

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v7) )
  {
    v8 = (Dimension *)BlockSource::getDimension(v4);
    v9 = (CircuitSystem *)Dimension::getCircuitSystem(v8);
    BaseRailBlock::Rail::Rail((BaseRailBlock::Rail *)&v11, v4, v6);
    v10 = CircuitSystem::getStrength(v9, v6);
    BaseRailBlock::Rail::place((BaseRailBlock::Rail *)&v11, v10, v5);
    if ( ptr )
      operator delete(ptr);
  }
}


AABB *__fastcall BaseRailBlock::getVisualShape(BaseRailBlock *this, int a2, AABB *a3, bool a4)
{
  unsigned int v4; // r5@1
  AABB *v5; // r4@1
  unsigned __int64 *v6; // r0@2
  signed int v7; // r1@4

  v4 = a2;
  v5 = a3;
  if ( *((_BYTE *)this + 641) )
  {
    v6 = (unsigned __int64 *)Block::getBlockState((int)this, 32);
    v4 = (v4 >> (*v6 + 1 - (*v6 >> 32))) & (0xFu >> (4 - (*v6 >> 32)));
  }
  if ( (unsigned __int8)(v4 - 2) <= 3u )
    v7 = 1059061760;
  else
    v7 = 1040187392;
  AABB::set((unsigned int)v5, 0LL, 1.0, *(float *)&v7, 1.0);
  return v5;
}


unsigned int __fastcall BaseRailBlock::Rail::connectTo(BaseRailBlock::Rail *this, BaseRailBlock::Rail *a2)
{
  BaseRailBlock::Rail *v2; // r8@1
  int v3; // r0@1
  char *v4; // r4@1
  int v5; // r1@2
  int v6; // r6@4
  int v7; // r3@4
  int v8; // lr@4
  unsigned int v9; // r7@5
  unsigned int v10; // r1@5
  _DWORD *v11; // r2@5
  int v12; // r5@6
  signed int v14; // r0@10
  int v15; // r12@12
  __int64 v16; // r10@13
  BaseRailBlock::Rail *v17; // r0@14
  unsigned int v18; // r7@14
  _DWORD *v19; // r8@14
  unsigned int v20; // r2@14
  _DWORD *v21; // r1@14
  int v22; // r4@15
  bool v23; // zf@15
  int v24; // r2@23
  signed int v25; // r4@23
  signed int v26; // r1@23
  unsigned int v27; // r2@24
  _DWORD *v28; // r1@24
  int v29; // r5@25
  bool v30; // zf@25
  unsigned int v31; // r3@32
  int v32; // r1@33
  bool v33; // zf@33
  int v39; // r5@45
  int v40; // r12@45
  signed int v41; // r11@45
  int v42; // r8@45
  int v43; // r0@45
  char v44; // r0@45
  int v45; // r3@47
  int v46; // r1@49
  char v47; // r1@49
  BlockPos *v48; // r10@64
  const BlockPos *v49; // r1@65
  const BlockPos *v50; // r1@70
  const BlockPos *v51; // r1@74
  const BlockPos *v52; // r1@79
  BaseRailBlock::Rail *v53; // r11@84
  int v54; // r5@84
  int v55; // r6@84
  BlockState *v56; // r0@85
  BlockState *v57; // r0@86
  char v58; // r5@86
  int v59; // r8@86
  BlockPos *v60; // r8@89
  BlockState *v61; // r0@89
  __int64 v62; // kr08_8@90
  unsigned int v63; // r10@90
  BlockState *v64; // r0@90
  unsigned int v65; // r4@90
  const BlockPos *v66; // r6@92
  unsigned __int8 v67; // r3@92
  BaseRailBlock::Rail *v69; // [sp+4h] [bp-74h]@45
  int v70; // [sp+8h] [bp-70h]@49
  signed int v71; // [sp+Ch] [bp-6Ch]@14
  int v72; // [sp+Ch] [bp-6Ch]@45
  int v73; // [sp+10h] [bp-68h]@4
  int v74; // [sp+14h] [bp-64h]@4
  char v75; // [sp+18h] [bp-60h]@92
  char v76; // [sp+1Ch] [bp-5Ch]@92
  char v77; // [sp+1Dh] [bp-5Bh]@92
  unsigned __int8 v78; // [sp+20h] [bp-58h]@65
  unsigned __int8 v79; // [sp+21h] [bp-57h]@90
  __int64 v80; // [sp+24h] [bp-54h]@79
  int v81; // [sp+2Ch] [bp-4Ch]@79
  int v82; // [sp+30h] [bp-48h]@74
  int v83; // [sp+34h] [bp-44h]@74
  int v84; // [sp+38h] [bp-40h]@74
  int v85; // [sp+3Ch] [bp-3Ch]@70
  int v86; // [sp+40h] [bp-38h]@70
  int v87; // [sp+44h] [bp-34h]@70
  int v88; // [sp+48h] [bp-30h]@65
  int v89; // [sp+4Ch] [bp-2Ch]@65
  int v90; // [sp+50h] [bp-28h]@65

  v2 = this;
  v4 = (char *)this + 24;
  v3 = *((_DWORD *)this + 6);
  if ( v3 == *((_DWORD *)v4 + 1) )
  {
    std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
      (unsigned __int64 *)(v4 - 4),
      (int)a2 + 4);
    v5 = *(_DWORD *)v4;
  }
  else
    *(_DWORD *)v3 = *((_DWORD *)a2 + 1);
    *(_DWORD *)(v3 + 4) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 3);
    v5 = v3 + 12;
    *(_DWORD *)v4 = v3 + 12;
  v6 = *((_DWORD *)v2 + 1);
  v73 = (int)v2 + 4;
  v7 = *((_DWORD *)v2 + 5);
  v8 = *((_DWORD *)v2 + 3) - 1;
  v74 = *((_DWORD *)v2 + 3);
  if ( v5 == v7 )
LABEL_10:
    v14 = 0;
    v9 = 0;
    v10 = -1431655765 * ((v5 - v7) >> 2);
    v11 = (_DWORD *)(v7 + 8);
    while ( 1 )
    {
      v12 = *(v11 - 2);
      _ZF = v12 == v6;
      if ( v12 == v6 )
        _ZF = *v11 == v8;
      if ( _ZF )
        break;
      ++v9;
      v11 += 3;
      if ( v9 >= v10 )
        goto LABEL_10;
    }
    v14 = 1;
  v15 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == v7 )
    v16 = (unsigned int)(v6 - 1);
LABEL_23:
    v24 = v6 + 1;
    v25 = 0;
    v26 = 0;
    goto LABEL_40;
  v71 = v14;
  v17 = v2;
  v18 = -1431655765 * ((v15 - v7) >> 2);
  v19 = (_DWORD *)(v7 + 8);
  v20 = 0;
  v21 = (_DWORD *)(v7 + 8);
  while ( 1 )
    v22 = *(v21 - 2);
    v23 = v22 == v6;
    if ( v22 == v6 )
      v23 = *v21 == v74 + 1;
    if ( v23 )
      break;
    ++v20;
    v21 += 3;
    if ( v20 >= v18 )
      HIDWORD(v16) = 0;
      goto LABEL_21;
  HIDWORD(v16) = 1;
LABEL_21:
  LODWORD(v16) = v6 - 1;
  if ( v15 == v7 )
    v2 = v17;
    v14 = v71;
    goto LABEL_23;
  v27 = 0;
  v28 = (_DWORD *)(v7 + 8);
    v29 = *(v28 - 2);
    v30 = v29 == (_DWORD)v16;
    if ( v29 == (_DWORD)v16 )
      v30 = *v28 == v74;
    if ( v30 )
    ++v27;
    v28 += 3;
    if ( v27 >= v18 )
      v25 = 0;
      goto LABEL_31;
  v25 = 1;
LABEL_31:
  v24 = v6 + 1;
LABEL_37:
    v31 = 0;
      v32 = *(v19 - 2);
      v33 = v32 == v24;
      if ( v32 == v24 )
        v33 = *v19 == v74;
      if ( v33 )
      ++v31;
      v19 += 3;
      if ( v31 >= v18 )
        goto LABEL_37;
    v26 = 1;
  v2 = v17;
  v14 = v71;
LABEL_40:
  _R3 = ~(v14 | HIDWORD(v16));
  __asm { SBFX.W          R7, R3, #0, #1 }
  if ( !_ZF )
    LOBYTE(_R7) = 1;
  if ( v25 )
  if ( !*((_BYTE *)v2 + 16) )
    v39 = HIDWORD(v16) ^ 1;
    v40 = HIDWORD(v16);
    v41 = v14;
    v69 = v2;
    v42 = v14 ^ 1;
    v43 = v39 | v25 ^ 1 | v14 | v26;
    _ZF = v43 == 0;
    v72 = v43;
    v44 = 7;
    if ( !_ZF )
      v44 = 6;
    v45 = v25 ^ 1 | v42 | v40 | v26;
    if ( !v45 )
      v44 = 8;
    v46 = v26 ^ 1;
    _ZF = v46 == 0;
    v70 = v46;
    v47 = v44;
      v47 = _R7;
    if ( v39 )
    if ( v41 )
    if ( v25 )
    if ( !v72 )
      v47 = v44;
    if ( (v70 | v42 | v40 | v25) != 1 )
      LOBYTE(_R7) = 9;
      v2 = v69;
      v48 = (BlockPos *)v73;
      goto LABEL_84;
    v2 = v69;
    LOBYTE(_R7) = v47;
  HIDWORD(v16) = *((_DWORD *)v2 + 2) + 1;
  if ( (unsigned __int8)_R7 == 1 )
    v51 = *(const BlockPos **)v2;
    v82 = v24;
    v83 = HIDWORD(v16);
    v84 = v74;
    BlockSource::getBlockID((BlockSource *)&v78, v51, (int)&v82);
    if ( *(_BYTE *)(Block::mRail + 4) != v78
      && *(_BYTE *)(Block::mGoldenRail + 4) != v78
      && *(_BYTE *)(Block::mDetectorRail + 4) != v78
      && *(_BYTE *)(Block::mActivatorRail + 4) != v78 )
      LOBYTE(_R7) = 1;
    else
      LOBYTE(_R7) = 2;
    v52 = *(const BlockPos **)v2;
    v80 = v16;
    v81 = v74;
    BlockSource::getBlockID((BlockSource *)&v78, v52, (int)&v80);
      && *(_BYTE *)(Block::mDetectorRail + 4) != v78 )
      if ( *(_BYTE *)(Block::mActivatorRail + 4) == v78 )
        LOBYTE(_R7) = 3;
      LOBYTE(_R7) = 3;
    v48 = (BlockPos *)v73;
    if ( !(_BYTE)_R7 )
      v49 = *(const BlockPos **)v2;
      v88 = v6;
      v89 = HIDWORD(v16);
      v90 = v8;
      BlockSource::getBlockID((BlockSource *)&v78, v49, (int)&v88);
      if ( *(_BYTE *)(Block::mRail + 4) != v78
        && *(_BYTE *)(Block::mGoldenRail + 4) != v78
        && *(_BYTE *)(Block::mDetectorRail + 4) != v78
        && *(_BYTE *)(Block::mActivatorRail + 4) != v78 )
      {
        LOBYTE(_R7) = 0;
      }
      else
        LOBYTE(_R7) = 4;
      v50 = *(const BlockPos **)v2;
      v85 = v6;
      v86 = HIDWORD(v16);
      v87 = v74 + 1;
      BlockSource::getBlockID((BlockSource *)&v78, v50, (int)&v85);
        && *(_BYTE *)(Block::mDetectorRail + 4) != v78 )
        if ( *(_BYTE *)(Block::mActivatorRail + 4) == v78 )
          LOBYTE(_R7) = 5;
        LOBYTE(_R7) = 5;
LABEL_84:
  v53 = v2;
  BlockSource::getBlockAndData((BlockSource *)&v78, *(const BlockPos **)v2, (int)v48);
  LOBYTE(v54) = 0;
  v55 = Block::mBlocks[v78];
  if ( v55 )
    v56 = (BlockState *)Block::getBlockState(Block::mBlocks[v78], 32);
    if ( BlockState::isInitialized(v56) == 1 )
      v57 = (BlockState *)Block::getBlockState(Block::mBlocks[v78], 32);
      v59 = *(_QWORD *)v57 >> 32;
      v58 = *(_QWORD *)v57;
      BlockState::getMask(v57);
      v54 = (unsigned __int8)_R7 << (v58 + 1 - v59);
      LOBYTE(v54) = 0;
    if ( *((_BYTE *)v53 + 16) )
      v60 = v48;
      v61 = (BlockState *)Block::getBlockState(v55, 31);
      if ( BlockState::isInitialized(v61) == 1 )
        v62 = *(_QWORD *)Block::getBlockState(v55, 31);
        v63 = v79;
        v64 = (BlockState *)Block::getBlockState(v55, 31);
        v65 = ((v63 >> (1 - BYTE4(v62) + v62)) & (0xFu >> (4 - BYTE4(v62)))) << (*(_QWORD *)v64
                                                                               + 1
                                                                               - (unsigned int)(*(_QWORD *)v64 >> 32));
        LOBYTE(v54) = v54 & ~(unsigned __int8)BlockState::getMask(v64) | v65;
      v48 = v60;
  v66 = *(const BlockPos **)v53;
  BlockSource::getBlockID((BlockSource *)&v75, *(const BlockPos **)v53, (int)v48);
  v76 = v75;
  v77 = v54;
  BlockSource::setBlockAndData((int)v66, v48, (int)&v76, 3, 0);
  return BaseRailBlock::_createCircuitComponent(*(BaseRailBlock **)v53, v48, 0, v67);
}


int __fastcall BaseRailBlock::Rail::updateConnections(__int64 this)
{
  int v1; // r8@1
  int v2; // r9@1
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r2@1
  int v6; // r4@1
  int v7; // r3@1
  int v8; // r12@1
  int v9; // r10@1
  int v10; // r7@6
  int *v11; // r1@7
  int *v12; // r1@27
  __int64 *v13; // r1@34
  int *v14; // r1@46
  int v16; // [sp+0h] [bp-80h]@37
  int v17; // [sp+4h] [bp-7Ch]@37
  int v18; // [sp+8h] [bp-78h]@37
  int v19; // [sp+Ch] [bp-74h]@11
  int v20; // [sp+10h] [bp-70h]@11
  int v21; // [sp+14h] [bp-6Ch]@11
  int v22; // [sp+18h] [bp-68h]@8
  int v23; // [sp+1Ch] [bp-64h]@8
  int v24; // [sp+20h] [bp-60h]@8
  int v25; // [sp+24h] [bp-5Ch]@6
  int v26; // [sp+28h] [bp-58h]@6
  int v27; // [sp+2Ch] [bp-54h]@6
  int v28; // [sp+30h] [bp-50h]@1
  int v29; // [sp+34h] [bp-4Ch]@1
  int v30; // [sp+38h] [bp-48h]@1
  int v31; // [sp+3Ch] [bp-44h]@1
  int v32; // [sp+40h] [bp-40h]@1
  int v33; // [sp+44h] [bp-3Ch]@1
  unsigned __int64 v34; // [sp+48h] [bp-38h]@1
  int v35; // [sp+50h] [bp-30h]@1
  __int64 v36; // [sp+54h] [bp-2Ch]@1
  int v37; // [sp+5Ch] [bp-24h]@1

  v1 = this;
  v2 = this + 20;
  LODWORD(this) = *(_DWORD *)(this + 20);
  *(_DWORD *)(v2 + 4) = this;
  v4 = *(_QWORD *)(v2 - 16);
  v5 = *(_DWORD *)(v2 - 8);
  v6 = v4 + 1;
  v7 = v4 - 1;
  v8 = v5 - 1;
  v9 = v5 + 1;
  v36 = *(_QWORD *)(v2 - 16);
  v3 = HIDWORD(v36);
  v37 = v5 - 1;
  v34 = __PAIR__(HIDWORD(v36), v4);
  v35 = v5 + 1;
  v31 = v4 + 1;
  v32 = HIDWORD(v36);
  v33 = v5;
  v28 = v4 - 1;
  v29 = HIDWORD(v36);
  v30 = v5;
  switch ( HIDWORD(this) )
  {
    case 0:
      HIDWORD(this) = *(_DWORD *)(v1 + 28);
      if ( (_DWORD)this != HIDWORD(this) )
      {
        *(_DWORD *)this = v4;
        *(_DWORD *)(this + 4) = v3;
        goto LABEL_13;
      }
      v12 = (int *)&v36;
      goto LABEL_41;
    case 1:
        *(_DWORD *)this = v7;
        goto LABEL_10;
      std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
        (unsigned __int64 *)v2,
        (int)&v28);
      goto LABEL_31;
    case 2:
      v25 = v4 - 1;
      v10 = HIDWORD(v36) + 1;
      v26 = HIDWORD(v36) + 1;
      v27 = v5;
        goto LABEL_9;
      v11 = &v25;
      goto LABEL_30;
    case 3:
      v22 = v4 - 1;
      v23 = HIDWORD(v36) + 1;
      v24 = v5;
      if ( (_DWORD)this == HIDWORD(this) )
        v11 = &v22;
LABEL_30:
        std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>((unsigned __int64 *)v2, (int)v11);
LABEL_31:
        this = *(_QWORD *)(v1 + 24);
      else
LABEL_9:
        *(_DWORD *)(this + 4) = v10;
LABEL_10:
        *(_DWORD *)(this + 8) = v5;
        LODWORD(this) = this + 12;
        *(_DWORD *)(v1 + 24) = this;
        *(_DWORD *)this = v31;
        *(_DWORD *)(this + 4) = v32;
        HIDWORD(this) = v33;
        goto LABEL_51;
      v13 = (__int64 *)&v31;
      goto LABEL_54;
    case 4:
      v19 = v4;
      v20 = HIDWORD(v36) + 1;
      v21 = v5 - 1;
        std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>((unsigned __int64 *)v2, (int)&v19);
        goto LABEL_42;
      *(_DWORD *)this = v4;
      *(_DWORD *)(this + 4) = v3 + 1;
LABEL_13:
      *(_DWORD *)(this + 8) = v8;
      goto LABEL_21;
    case 5:
        std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
          (unsigned __int64 *)v2,
          (int)&v36);
        *(_DWORD *)(this + 8) = v8;
        v3 = HIDWORD(v34);
        v4 = v34;
        v9 = v35;
      v16 = v4;
      v17 = v3 + 1;
      v18 = v9;
        *(_DWORD *)(this + 4) = v3 + 1;
        *(_DWORD *)(this + 8) = v9;
        goto LABEL_52;
      LODWORD(this) = std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>(
                        (unsigned __int64 *)v2,
                        (int)&v16);
      return this;
    case 6:
        *(_DWORD *)this = v6;
        goto LABEL_20;
      v12 = &v31;
    case 7:
        v12 = &v28;
LABEL_41:
          (int)v12);
LABEL_42:
LABEL_20:
LABEL_21:
        *(_QWORD *)this = v34;
        HIDWORD(this) = v35;
      v13 = (__int64 *)&v34;
    case 8:
        goto LABEL_26;
      v14 = &v28;
      goto LABEL_48;
    case 9:
        v14 = &v31;
LABEL_48:
          (int)v14);
LABEL_26:
        v13 = &v36;
LABEL_54:
        LODWORD(this) = std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
                          (unsigned __int64 *)v2,
                          (int)v13);
        *(_QWORD *)this = v36;
        HIDWORD(this) = v37;
LABEL_51:
        *(_DWORD *)(this + 8) = HIDWORD(this);
LABEL_52:
    default:
  }
}


int __fastcall BaseRailBlock::mayPlace(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  __int64 v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+Ch] [bp-Ch]@1

  v3 = *(_QWORD *)a3;
  v4 = *((_DWORD *)a3 + 2);
  v6 = v3 - 0x100000000LL;
  v7 = v4;
  return BlockSource::canProvideSupport(a2, (int)&v6);
}


signed int __fastcall BaseRailBlock::Rail::connectsTo(BaseRailBlock::Rail *this, BaseRailBlock::Rail *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@2
  _DWORD *v4; // r3@2
  int v5; // r2@2
  unsigned int v6; // r1@2
  int v7; // r0@3
  bool v8; // zf@3
  signed int result; // r0@7

  v2 = *(_QWORD *)((char *)this + 20);
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
LABEL_7:
    result = 0;
  }
  else
    v3 = *((_DWORD *)a2 + 3);
    v4 = (_DWORD *)(v2 + 8);
    v5 = *((_DWORD *)a2 + 1);
    v6 = 0;
    while ( 1 )
    {
      v7 = *(v4 - 2);
      v8 = v7 == v5;
      if ( v7 == v5 )
        v8 = *v4 == v3;
      if ( v8 )
        break;
      ++v6;
      v4 += 3;
      if ( v6 >= -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) )
        goto LABEL_7;
    }
    result = 1;
  return result;
}


void __fastcall BaseRailBlock::updateDir(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BaseRailBlock::updateDir(this, a2, a3, a4);
}


signed int __fastcall BaseRailBlock::isRail(BaseRailBlock *this, BlockSource *a2, const BlockPos *a3)
{
  signed int result; // r0@4
  unsigned __int8 v4; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v4, this, (int)a2);
  if ( *(_BYTE *)(Block::mRail + 4) != v4
    && *(_BYTE *)(Block::mGoldenRail + 4) != v4
    && *(_BYTE *)(Block::mDetectorRail + 4) != v4 )
  {
    result = 0;
    if ( *(_BYTE *)(Block::mActivatorRail + 4) == v4 )
      result = 1;
  }
  else
    result = 1;
  return result;
}
