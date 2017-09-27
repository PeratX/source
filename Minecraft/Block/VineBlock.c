

InstantaneousAttributeBuff *__fastcall VineBlock::playerDestroy(VineBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r7@1
  Block *v5; // r5@1
  int v6; // r6@1
  const BlockPos *v7; // r8@1
  Level *v8; // r0@1
  ItemInstance *v9; // r0@2
  ItemInstance *v10; // r4@2
  int v11; // r0@2
  bool v12; // zf@2
  BlockSource *v13; // r4@8
  InstantaneousAttributeBuff *result; // r0@14
  int v15; // [sp+0h] [bp-60h]@8
  int v16; // [sp+8h] [bp-58h]@12
  void *v17; // [sp+24h] [bp-3Ch]@10
  void *ptr; // [sp+34h] [bp-2Ch]@8

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)Entity::getLevel(a2);
  if ( Level::isClientSide(v8) )
    goto LABEL_18;
  v9 = (ItemInstance *)Player::getSelectedItem(v4);
  v10 = v9;
  v11 = *((_BYTE *)v9 + 15);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)v10 == 0;
  if ( v12
    || ItemInstance::isNull(v10)
    || !*((_BYTE *)v10 + 14)
    || *(_WORD *)(*(_DWORD *)Player::getSelectedItem(v4) + 18) != *(_WORD *)(Item::mShears + 18) )
  {
LABEL_18:
    result = j_j_j__ZNK5Block13playerDestroyER6PlayerRK8BlockPosi(v5, v4, v7, v6);
  }
  else
    v13 = (BlockSource *)Entity::getRegion(v4);
    ItemInstance::ItemInstance((ItemInstance *)&v15, Block::mVine, 1, 0);
    Block::popResource(v5, v13, v7, (const ItemInstance *)&v15);
    if ( ptr )
      operator delete(ptr);
    if ( v17 )
      operator delete(v17);
    if ( v16 )
      (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    result = 0;
    v16 = 0;
  return result;
}


signed int __fastcall VineBlock::_getFacingData(VineBlock *this, int a2)
{
  signed int result; // r0@2

  if ( ((unsigned int)this | 1) == 1 )
    result = 0;
  else
    result = 1 << *((_BYTE *)this + (_DWORD)Direction::FACING_DIRECTION);
  return result;
}


int __fastcall VineBlock::getPlacementDataValue(VineBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  int v6; // r4@1
  int v7; // r5@2
  BlockState *v8; // r0@7
  __int64 v9; // r6@7

  v6 = a6;
  switch ( a4 )
  {
    case 2:
      v7 = VineBlock::VINE_SOUTH;
      break;
    case 3:
      v7 = VineBlock::VINE_NORTH;
    case 4:
      v7 = VineBlock::VINE_EAST;
    case 5:
      v7 = VineBlock::VINE_WEST;
    default:
      v7 = 0;
  }
  v8 = (BlockState *)Block::getBlockState((int)this, 41);
  v9 = *(_QWORD *)v8;
  BlockState::getMask(v8);
  if ( (unsigned __int8)(v7 << (v9 + 1 - BYTE4(v9))) )
    v6 = (unsigned __int8)(v7 << (v9 + 1 - BYTE4(v9)));
  return v6;
}


void __fastcall VineBlock::~VineBlock(VineBlock *this)
{
  VineBlock::~VineBlock(this);
}


int __fastcall VineBlock::_isAcceptableNeighbor(VineBlock *this, const Block *a2)
{
  Block *v2; // r4@1
  int v3; // r1@1
  int v4; // r1@2
  Material *v5; // r0@4
  int result; // r0@6

  v2 = a2;
  result = 0;
  if ( !Block::isType(a2, (const Block *)Block::mAir)
    && (Block::hasProperty((int)v2, v3, 0x200000LL) || Block::hasProperty((int)v2, v4, 0x100000LL) == 1) )
  {
    v5 = (Material *)Block::getMaterial(v2);
    if ( Material::getBlocksMotion(v5) == 1 && Block::isType(v2, (const Block *)Block::mInvisibleBedrock) != 1 )
      result = 1;
  }
  return result;
}


int __fastcall VineBlock::neighborChanged(VineBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r5@1
  VineBlock *v5; // r6@1
  const BlockPos *v6; // r7@1
  const BlockPos *v7; // r4@1
  Level *v8; // r0@1
  int result; // r0@1
  int v10; // r7@4
  void (__fastcall *v11)(VineBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@4
  unsigned int v12; // r0@4
  char v13; // [sp+8h] [bp-28h]@4

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    result = VineBlock::_isAttachedPosition(0, v4, v7, v6);
    if ( result == 1 )
    {
      result = VineBlock::updateSurvival(v5, v4, v7);
      if ( !result )
      {
        v10 = BlockSource::getLevel(v4);
        Vec3::Vec3((int)&v13, (int)v7);
        Level::broadcastDimensionEvent(v10, v4, 2001, (int)&v13, *((_BYTE *)v5 + 4));
        v11 = *(void (__fastcall **)(VineBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v5 + 276);
        v12 = BlockSource::getData(v4, v7);
        v11(v5, v4, v7, v12);
        result = BlockSource::removeBlock(v4, v7);
      }
    }
  }
  return result;
}


signed int __fastcall VineBlock::updateSurvival(VineBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  unsigned int v5; // r7@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r8@2
  _BYTE *v9; // r9@2
  unsigned int v10; // r5@3
  int v11; // r0@4
  signed int v12; // r10@5
  Block *v13; // r6@8
  int v14; // r1@8
  int v15; // r1@9
  Material *v16; // r0@11
  signed int result; // r0@25
  VineBlock *v18; // [sp+18h] [bp-50h]@1
  BlockSource *v19; // [sp+1Ch] [bp-4Ch]@1
  char v20; // [sp+20h] [bp-48h]@24
  unsigned __int8 v21; // [sp+24h] [bp-44h]@8
  char v22; // [sp+28h] [bp-40h]@8
  unsigned __int8 v23; // [sp+34h] [bp-34h]@1
  unsigned __int8 v24; // [sp+35h] [bp-33h]@14
  int v25; // [sp+38h] [bp-30h]@1
  int v26; // [sp+3Ch] [bp-2Ch]@1
  int v27; // [sp+40h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v18 = this;
  v19 = a2;
  v5 = BlockSource::getData(a2, a3);
  v6 = *((_DWORD *)v4 + 1);
  v7 = *((_DWORD *)v4 + 2);
  v25 = *(_DWORD *)v4;
  v26 = v6 + 1;
  v27 = v7;
  BlockSource::getBlockAndData((BlockSource *)&v23, v3, (int)&v25);
  if ( v5 )
  {
    v8 = dword_2803214;
    v9 = (_BYTE *)Facing::Plane::HORIZONTAL;
    if ( Facing::Plane::HORIZONTAL == dword_2803214 )
    {
      v10 = v5;
    }
    else
      do
      {
        v11 = *v9;
        if ( (v11 | 1) == 1 )
          v12 = 0;
        else
          v12 = 1 << Direction::FACING_DIRECTION[v11];
        if ( v12 & v5 )
        {
          if ( (BlockPos::relative((BlockPos *)&v22, (int)v4, (char)v11, 1),
                BlockSource::getBlockID((BlockSource *)&v21, v19, (int)&v22),
                v13 = (Block *)Block::mBlocks[v21],
                Block::isType((Block *)Block::mBlocks[v21], (const Block *)Block::mAir))
            || !Block::hasProperty((int)v13, v14, 0x200000LL) && Block::hasProperty((int)v13, v15, 0x100000LL) != 1
            || (v16 = (Material *)Block::getMaterial(v13), Material::getBlocksMotion(v16) != 1)
            || Block::isType(v13, (const Block *)Block::mInvisibleBedrock) == 1 )
          {
            if ( v23 == *((_BYTE *)v18 + 4) )
            {
              if ( !(v24 & (unsigned __int8)v12) )
                v10 &= ~v12;
            }
            else
              v10 &= ~v12;
          }
        }
        ++v9;
      }
      while ( (_BYTE *)v8 != v9 );
  }
  else
    v10 = 0;
  if ( v10 )
    if ( v10 != v5 )
      v20 = *((_BYTE *)v18 + 4);
      BlockSource::setBlockAndData((int)v19, v4, &v20, v10, 2, 0);
    result = 1;
    result = 0;
  return result;
}


void __fastcall VineBlock::~VineBlock(VineBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall VineBlock::getResourceCount(VineBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall VineBlock::VineBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(9);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2716D04;
  Block::setTicking((Block *)v3, 1);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 17) = 1;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


int __fastcall VineBlock::getColor(VineBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  const BlockPos *v8; // r4@1
  BlockSource *v9; // r5@1
  signed int v10; // r7@1
  __int64 v11; // r0@2
  int v12; // r2@2
  int v13; // r0@2
  unsigned int v14; // r0@2
  int v18; // r1@3
  int v19; // r2@3
  int v20; // r0@3
  unsigned int v21; // r0@3
  __int64 v25; // r0@4
  int v26; // r2@4
  int v27; // r0@4
  unsigned int v28; // r0@4
  float v33; // [sp+4h] [bp-54h]@6
  int v34; // [sp+10h] [bp-48h]@6
  __int64 v35; // [sp+14h] [bp-44h]@2
  int v36; // [sp+1Ch] [bp-3Ch]@2

  __asm
  {
    VLDR            S22, =0.0
    VLDR            S16, =0.0039216
  }
  v8 = a3;
  __asm { VMOV.F32        S20, S22 }
  v9 = a2;
  __asm { VMOV.F32        S18, S22 }
  v10 = -4;
  do
    HIDWORD(v11) = *((_DWORD *)v8 + 1);
    v12 = *((_DWORD *)v8 + 2);
    LODWORD(v11) = *(_DWORD *)v8 + v10;
    v35 = v11;
    v36 = v12 - 4;
    v13 = BlockSource::getBiome(v9, (const BlockPos *)&v35);
    v14 = (*(int (**)(void))(*(_DWORD *)v13 + 44))();
    _R2 = (unsigned __int16)v14 >> 8;
    _R1 = (unsigned __int8)v14;
    __asm
    {
      VMOV            S0, R1
      VMOV            S2, R2
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    }
    _R0 = (v14 >> 16) & 0xFF;
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VADD.F32        S22, S0, S22
      VADD.F32        S20, S2, S20
      VADD.F32        S18, S4, S18
    if ( !_ZF )
      v18 = *((_DWORD *)v8 + 1);
      v19 = *((_DWORD *)v8 + 2);
      LODWORD(v35) = *(_DWORD *)v8 + v10;
      HIDWORD(v35) = v18;
      v36 = v19;
      v20 = BlockSource::getBiome(v9, (const BlockPos *)&v35);
      v21 = (*(int (**)(void))(*(_DWORD *)v20 + 44))();
      _R2 = (unsigned __int16)v21 >> 8;
      _R1 = (unsigned __int8)v21;
      __asm
      {
        VMOV            S0, R1
        VMOV            S2, R2
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
      }
      _R0 = (v21 >> 16) & 0xFF;
        VMOV            S4, R0
        VCVT.F32.S32    S4, S4
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VADD.F32        S22, S0, S22
        VADD.F32        S20, S2, S20
        VADD.F32        S18, S4, S18
    HIDWORD(v25) = *((_DWORD *)v8 + 1);
    v26 = *((_DWORD *)v8 + 2);
    LODWORD(v25) = *(_DWORD *)v8 + v10;
    v35 = v25;
    v36 = v26 + 4;
    v27 = BlockSource::getBiome(v9, (const BlockPos *)&v35);
    v28 = (*(int (**)(void))(*(_DWORD *)v27 + 44))();
    _R2 = (unsigned __int16)v28 >> 8;
    _R1 = (unsigned __int8)v28;
    __asm { VMOV            S0, R1 }
    v10 += 4;
    _R0 = (v28 >> 16) & 0xFF;
  while ( !_ZF );
    VMOV.F32        S0, #0.125
    VMUL.F32        S2, S18, S0
    VMUL.F32        S4, S20, S0
    VMUL.F32        S0, S22, S0
    VSTR            S2, [SP,#0x58+var_54]
    VSTR            S4, [SP,#0x58+var_50]
    VSTR            S0, [SP,#0x58+var_4C]
  v34 = 1065353216;
  return Color::toARGB((Color *)&v33);
}


signed int __fastcall VineBlock::mayPlace(VineBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  __int64 v4; // kr00_8@2
  int v5; // r2@2
  Block *v6; // r4@2
  int v7; // r1@2
  int v8; // r1@3
  Material *v9; // r0@5
  const Block ***v10; // r0@6
  __int64 v11; // kr08_8@7
  int v12; // r2@7
  int v13; // r1@7
  int v14; // r1@8
  Material *v15; // r0@10
  __int64 v16; // kr10_8@12
  int v17; // r2@12
  int v18; // r1@12
  int v19; // r1@13
  Material *v20; // r0@15
  __int64 v21; // kr18_8@17
  int v22; // r2@17
  int v23; // r1@17
  int v24; // r1@18
  Material *v25; // r0@20
  __int64 v26; // kr20_8@22
  int v27; // r2@22
  int v28; // r1@22
  int v29; // r1@23
  Material *v30; // r0@25
  signed int result; // r0@28
  int v32; // [sp+4h] [bp-44h]@17
  int v33; // [sp+8h] [bp-40h]@17
  int v34; // [sp+Ch] [bp-3Ch]@17
  int v35; // [sp+10h] [bp-38h]@22
  int v36; // [sp+14h] [bp-34h]@22
  int v37; // [sp+18h] [bp-30h]@22
  __int64 v38; // [sp+1Ch] [bp-2Ch]@12
  int v39; // [sp+24h] [bp-24h]@12
  __int64 v40; // [sp+28h] [bp-20h]@7
  int v41; // [sp+30h] [bp-18h]@7
  __int64 v42; // [sp+34h] [bp-14h]@2
  int v43; // [sp+3Ch] [bp-Ch]@2

  switch ( a4 )
  {
    case 1:
      v4 = *(_QWORD *)a3;
      v5 = *((_DWORD *)a3 + 2);
      v42 = v4 + 0x100000000LL;
      v43 = v5;
      v6 = (Block *)BlockSource::getBlock(a2, (const BlockPos *)&v42);
      if ( Block::isType(v6, (const Block *)Block::mAir)
        || !Block::hasProperty((int)v6, v7, 0x200000LL) && Block::hasProperty((int)v6, v8, 0x100000LL) != 1 )
      {
        goto def_18E0C90;
      }
      v9 = (Material *)Block::getMaterial(v6);
      if ( Material::getBlocksMotion(v9) != 1 )
      v10 = (const Block ***)Block::mInvisibleBedrock;
      goto LABEL_27;
    case 2:
      v11 = *(_QWORD *)a3;
      v12 = *((_DWORD *)a3 + 2);
      v40 = v11;
      v41 = v12 + 1;
      v6 = (Block *)BlockSource::getBlock(a2, (const BlockPos *)&v40);
        || !Block::hasProperty((int)v6, v13, 0x200000LL) && Block::hasProperty((int)v6, v14, 0x100000LL) != 1 )
      v15 = (Material *)Block::getMaterial(v6);
      if ( Material::getBlocksMotion(v15) != 1 )
    case 3:
      v16 = *(_QWORD *)a3;
      v17 = *((_DWORD *)a3 + 2);
      v38 = v16;
      v39 = v17 - 1;
      v6 = (Block *)BlockSource::getBlock(a2, (const BlockPos *)&v38);
        || !Block::hasProperty((int)v6, v18, 0x200000LL) && Block::hasProperty((int)v6, v19, 0x100000LL) != 1 )
      v20 = (Material *)Block::getMaterial(v6);
      if ( Material::getBlocksMotion(v20) != 1 )
    case 4:
      v21 = *(_QWORD *)a3;
      v22 = *((_DWORD *)a3 + 2);
      v32 = v21 + 1;
      v33 = HIDWORD(v21);
      v34 = v22;
      v6 = (Block *)BlockSource::getBlock(a2, (const BlockPos *)&v32);
        || !Block::hasProperty((int)v6, v23, 0x200000LL) && Block::hasProperty((int)v6, v24, 0x100000LL) != 1 )
      v25 = (Material *)Block::getMaterial(v6);
      if ( Material::getBlocksMotion(v25) != 1 )
    case 5:
      v26 = *(_QWORD *)a3;
      v27 = *((_DWORD *)a3 + 2);
      v35 = v26 - 1;
      v36 = HIDWORD(v26);
      v37 = v27;
      v6 = (Block *)BlockSource::getBlock(a2, (const BlockPos *)&v35);
        || !Block::hasProperty((int)v6, v28, 0x200000LL) && Block::hasProperty((int)v6, v29, 0x100000LL) != 1 )
      v30 = (Material *)Block::getMaterial(v6);
      if ( Material::getBlocksMotion(v30) != 1 )
LABEL_27:
      if ( Block::isType(v6, **v10) == 1 )
      result = 1;
      break;
    default:
def_18E0C90:
      result = 0;
  }
  return result;
}


signed int __fastcall VineBlock::_isAttachedPosition(VineBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r9@1
  const BlockPos *v5; // r4@1
  unsigned int v6; // r6@1
  int v7; // r5@2
  _BYTE *v8; // r7@2
  int v9; // r0@3
  signed int v10; // r1@4
  int v12; // [sp+0h] [bp-30h]@7
  int v13; // [sp+4h] [bp-2Ch]@8
  int v14; // [sp+8h] [bp-28h]@9

  v4 = a3;
  v5 = a4;
  v6 = BlockSource::getData(a2, a3);
  if ( v6 )
  {
    v7 = dword_2803214;
    v8 = (_BYTE *)Facing::Plane::HORIZONTAL;
    if ( Facing::Plane::HORIZONTAL != dword_2803214 )
    {
      while ( 1 )
      {
        v9 = *v8;
        v10 = (v9 | 1) == 1 ? 0 : 1 << Direction::FACING_DIRECTION[v9];
        if ( v10 & v6 )
        {
          BlockPos::relative((BlockPos *)&v12, (int)v4, (char)v9, 1);
          if ( v12 == *(_DWORD *)v5 && v13 == *((_DWORD *)v5 + 1) && v14 == *((_DWORD *)v5 + 2) )
            break;
        }
        if ( (_BYTE *)v7 == ++v8 )
          return 0;
      }
      return 1;
    }
  }
  else if ( *(_DWORD *)v4 == *(_DWORD *)v5
         && *((_DWORD *)v4 + 1) + 1 == *((_DWORD *)v5 + 1)
         && *((_DWORD *)v4 + 2) == *((_DWORD *)v5 + 2) )
    return 1;
  return 0;
}


_DWORD *__fastcall VineBlock::getAABB(VineBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  _DWORD *result; // r0@2
  char v10; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  v8 = a4;
  if ( a6 == 1 )
  {
    (*(void (__cdecl **)(VineBlock *))(*(_DWORD *)this + 416))(this);
    Vec3::Vec3((int)&v10, (int)v7);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v10);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


AABB *__fastcall VineBlock::getVisualShape(VineBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  const BlockPos *v5; // r10@1
  BlockSource *v6; // r9@1
  VineBlock *v7; // r7@1
  AABB *v8; // r8@1
  unsigned int v9; // r4@1
  unsigned __int64 *v10; // r0@1
  signed int v11; // r0@1
  int *v16; // r3@5
  int *v17; // r3@10
  int *v18; // r2@15
  Block *v19; // r7@20
  int v20; // r1@20
  int v21; // r1@21
  Material *v22; // r0@23
  int *v23; // r1@25
  int v24; // r2@25 OVERLAPPED
  signed int v26; // r1@27
  Block *v27; // r5@28
  int v28; // r1@28
  int v29; // r1@29
  Material *v30; // r0@31
  int *v31; // r2@33
  float v38; // [sp+0h] [bp-98h]@0
  float v39; // [sp+4h] [bp-94h]@0
  float v40; // [sp+8h] [bp-90h]@0
  unsigned __int8 v41; // [sp+10h] [bp-88h]@28
  int v42; // [sp+14h] [bp-84h]@25
  unsigned __int8 v43; // [sp+18h] [bp-80h]@20
  int v44; // [sp+1Ch] [bp-7Ch]@15
  int v45; // [sp+20h] [bp-78h]@5
  int v46; // [sp+24h] [bp-74h]@1
  int v47; // [sp+28h] [bp-70h]@1
  int v48; // [sp+2Ch] [bp-6Ch]@1
  int v49; // [sp+30h] [bp-68h]@1
  int v50; // [sp+34h] [bp-64h]@1
  int v51; // [sp+38h] [bp-60h]@1
  int v52; // [sp+3Ch] [bp-5Ch]@1

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v52 = 1031798784;
  v9 = BlockSource::getData(a2, a3);
  v51 = 1065353216;
  v49 = 1065353216;
  v50 = 1065353216;
  v48 = 0;
  v46 = 0;
  v47 = 0;
  v10 = (unsigned __int64 *)Block::getBlockState((int)v7, 41);
  v11 = (0xFu >> (4 - (*v10 >> 32))) & (v9 >> (1 - (*v10 >> 32) + *v10));
  if ( v11 & VineBlock::VINE_WEST )
  {
    __asm
    {
      VMOV.F32        S16, #1.0
      VLDR            S20, =0.0
      VLDR            S22, =0.0625
    }
    v50 = 0;
    v51 = 0;
    v48 = 1031798784;
    v49 = 0;
    v46 = 1065353216;
    v47 = 1065353216;
  }
  else
      VLDR            S22, =0.0
      VMOV.F32        S20, #1.0
      VMOV.F32        S16, S22
  if ( v11 & VineBlock::VINE_EAST )
      VMOV.F32        S0, #0.9375
      VMOV.F32        S22, #1.0
    v45 = 1064304640;
    v16 = &v45;
      VLDR            S18, =0.0
      VCMPE.F32       S20, S0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v16 = &v51;
    v51 = *v16;
    v48 = 1065353216;
    __asm { VMOV            S20, R1 }
    __asm { VMOV.F32        S18, S20 }
  if ( VineBlock::VINE_NORTH & v11 )
      VLDR            S0, =0.0625
      VCMPE.F32       S16, S0
    v17 = &v52;
      VMOV.F32        S18, S20
      VMOV.F32        S24, S22
    if ( !(_NF ^ _VF) )
      v17 = &v46;
    v46 = *v17;
    __asm { VMOV            S16, R2 }
    __asm { VMOV.F32        S24, S16 }
  if ( v11 & VineBlock::VINE_SOUTH )
    v18 = &v44;
    v44 = 1064304640;
      VMOV.F32        S26, S20
      VCMPE.F32       S18, S0
      VMOV.F32        S22, S16
      VMOV.F32        S24, S16
      v18 = &v49;
    v49 = *v18;
    __asm { VMOV            S18, R1 }
    __asm { VMOV.F32        S26, S18 }
  if ( v11 <= 0 )
    BlockSource::getBlockID((BlockSource *)&v43, (int)v6, *(_QWORD *)v5, (*(_QWORD *)v5 >> 32) + 1, *((_DWORD *)v5 + 2));
    v19 = (Block *)Block::mBlocks[v43];
    if ( !Block::isType((Block *)Block::mBlocks[v43], (const Block *)Block::mAir)
      && (Block::hasProperty((int)v19, v20, 0x200000LL) || Block::hasProperty((int)v19, v21, 0x100000LL) == 1) )
      v22 = (Material *)Block::getMaterial(v19);
      if ( Material::getBlocksMotion(v22) == 1 && !Block::isType(v19, (const Block *)Block::mInvisibleBedrock) )
      {
        __asm
        {
          VMOV.F32        S0, #0.9375
          VMOV.F32        S16, #1.0
          VLDR            S18, =0.0
        }
        v23 = &v42;
        v42 = 1064304640;
        __asm { VMOV.F32        S20, S18 }
        v24 = 0;
          VCMPE.F32       S26, S0
          VMRS            APSR_nzcv, FPSCR
          VMOV.F32        S22, S16
          VMOV.F32        S24, S16
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v23 = &v50;
        v51 = 0;
        _R0 = *v23;
        v26 = 1065353216;
        v50 = _R0;
        v47 = 1065353216;
        __asm { VMOV            S26, R0 }
        *(_QWORD *)&v48 = *(_QWORD *)(&v24 - 1);
        v46 = 1065353216;
      }
    BlockSource::getBlockID((BlockSource *)&v41, (int)v6, *(_QWORD *)v5, (*(_QWORD *)v5 >> 32) - 1, *((_DWORD *)v5 + 2));
    v27 = (Block *)Block::mBlocks[v41];
    if ( !Block::isType((Block *)Block::mBlocks[v41], (const Block *)Block::mAir)
      && (Block::hasProperty((int)v27, v28, 0x200000LL) || Block::hasProperty((int)v27, v29, 0x100000LL) == 1) )
      v30 = (Material *)Block::getMaterial(v27);
      if ( Material::getBlocksMotion(v30) == 1 && !Block::isType(v27, (const Block *)Block::mInvisibleBedrock) )
          VLDR            S0, =0.0625
          VCMPE.F32       S24, S0
        v31 = &v52;
        __asm { VMOV.F32        S26, S18 }
        v50 = 0;
          VMOV.F32        S20, S18
        if ( !(_NF ^ _VF) )
          v31 = &v47;
        v47 = *v31;
        v48 = 1065353216;
        __asm { VMOV            S24, R1 }
        v49 = 0;
  __asm
    VCMPE.F32       S22, S20
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S0, S20
    VCMPE.F32       S24, S26
  _R7 = &v47;
  __asm { VMOV.F32        S2, S26 }
  _R6 = &v48;
  __asm { VMOV.F32        S4, S18 }
  _R5 = &v46;
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S22 }
    VCMPE.F32       S16, S18
    VMOV            R1, S0
    __asm { VMOVLT.F32      S2, S24 }
    VCMPE.F32       S26, S24
    VMOV            R2, S2
    __asm { VMOVLT.F32      S4, S16 }
    VCMPE.F32       S20, S22
    VMOV            R3, S4
  if ( !(_NF ^ _VF) )
    _R7 = &v50;
    VCMPE.F32       S18, S16
    _R6 = &v51;
    VLDR            S0, [R6]
    VLDR            S2, [R7]
    _R5 = &v49;
  LODWORD(_R0) = v8;
    VLDR            S4, [R5]
    VSTR            S0, [SP,#0x98+var_98]
    VSTR            S2, [SP,#0x98+var_94]
    VSTR            S4, [SP,#0x98+var_90]
  AABB::set(_R0, _R2, v38, v39, v40);
  return v8;
}


int __fastcall VineBlock::getMapColor(VineBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v8; // r5@1
  BlockSource *v9; // r6@1
  VineBlock *v10; // r8@1
  signed int v11; // r4@1
  __int64 v12; // r0@2
  int v13; // r2@2
  int v14; // r0@2
  unsigned int v15; // r0@2
  int v19; // r1@3
  int v20; // r2@3
  int v21; // r0@3
  unsigned int v22; // r0@3
  __int64 v26; // r0@4
  int v27; // r2@4
  int v28; // r0@4
  unsigned int v29; // r0@4
  int result; // r0@6
  __int64 v34; // [sp+4h] [bp+0h]@2
  int v35; // [sp+Ch] [bp+8h]@2

  __asm
  {
    VLDR            S22, =0.0
    VLDR            S16, =0.0039216
  }
  v8 = a4;
  __asm { VMOV.F32        S20, S22 }
  v9 = a3;
  __asm { VMOV.F32        S18, S22 }
  v10 = this;
  v11 = -4;
  do
    HIDWORD(v12) = *(_DWORD *)(v8 + 4);
    v13 = *(_DWORD *)(v8 + 8);
    LODWORD(v12) = *(_DWORD *)v8 + v11;
    v34 = v12;
    v35 = v13 - 4;
    v14 = BlockSource::getBiome(v9, (const BlockPos *)&v34);
    v15 = (*(int (**)(void))(*(_DWORD *)v14 + 56))();
    _R2 = (unsigned __int16)v15 >> 8;
    _R1 = (unsigned __int8)v15;
    __asm
    {
      VMOV            S0, R1
      VMOV            S2, R2
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    }
    _R0 = (v15 >> 16) & 0xFF;
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VADD.F32        S22, S0, S22
      VADD.F32        S20, S2, S20
      VADD.F32        S18, S4, S18
    if ( !_ZF )
      v19 = *(_DWORD *)(v8 + 4);
      v20 = *(_DWORD *)(v8 + 8);
      LODWORD(v34) = *(_DWORD *)v8 + v11;
      HIDWORD(v34) = v19;
      v35 = v20;
      v21 = BlockSource::getBiome(v9, (const BlockPos *)&v34);
      v22 = (*(int (**)(void))(*(_DWORD *)v21 + 56))();
      _R2 = (unsigned __int16)v22 >> 8;
      _R1 = (unsigned __int8)v22;
      __asm
      {
        VMOV            S0, R1
        VMOV            S2, R2
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
      }
      _R0 = (v22 >> 16) & 0xFF;
        VMOV            S4, R0
        VCVT.F32.S32    S4, S4
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VADD.F32        S22, S0, S22
        VADD.F32        S20, S2, S20
        VADD.F32        S18, S4, S18
    HIDWORD(v26) = *(_DWORD *)(v8 + 4);
    v27 = *(_DWORD *)(v8 + 8);
    LODWORD(v26) = *(_DWORD *)v8 + v11;
    v34 = v26;
    v35 = v27 + 4;
    v28 = BlockSource::getBiome(v9, (const BlockPos *)&v34);
    v29 = (*(int (**)(void))(*(_DWORD *)v28 + 56))();
    _R2 = (unsigned __int16)v29 >> 8;
    _R1 = (unsigned __int8)v29;
    __asm { VMOV            S0, R1 }
    v11 += 4;
    _R0 = (v29 >> 16) & 0xFF;
  while ( !_ZF );
  __asm { VLDR            S0, =0.083333 }
  result = 0;
  *((_DWORD *)v10 + 3) = 0;
    VMUL.F32        S2, S18, S0
    VMUL.F32        S4, S20, S0
    VMUL.F32        S0, S22, S0
    VSTR            S2, [R8]
    VSTR            S4, [R8,#4]
    VSTR            S0, [R8,#8]
  return result;
}


int __fastcall VineBlock::getResource(VineBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


signed int __fastcall VineBlock::tick(VineBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r11@1
  VineBlock *v5; // r10@1
  Random *v6; // r4@1
  const BlockPos *v7; // r8@1
  Level *v8; // r0@1
  signed int result; // r0@1
  int v10; // r0@3
  signed int v11; // r6@3
  int v12; // r7@3
  int v13; // r9@4
  int v14; // r4@5
  bool v15; // nf@10
  unsigned __int8 v16; // vf@10
  int v17; // r1@11
  signed int v18; // r7@12
  unsigned int v19; // r6@14
  unsigned int v20; // r0@14
  int v21; // r0@15
  int v22; // r2@16
  int v23; // r4@18
  int v24; // r7@19
  Block *v25; // r5@20
  int v26; // r1@20
  int v27; // r1@21
  Material *v28; // r0@23
  int v29; // r0@28
  int v30; // r1@28
  int v31; // r3@28
  int v32; // r9@30
  int v33; // r2@32
  unsigned __int8 v34; // r0@34
  int v35; // r1@35
  int v36; // r2@35
  int v37; // r3@35
  char *v38; // r6@35
  Block *v39; // r0@42
  Material *v40; // r0@43
  int v41; // r1@45
  int v42; // r2@45
  int v43; // r3@45
  int v44; // r4@46
  Block *v45; // r5@47
  int v46; // r1@47
  int v47; // r1@48
  Material *v48; // r0@50
  int v49; // r7@52
  Block *v50; // r5@53
  int v51; // r1@53
  int v52; // r1@54
  Material *v53; // r0@56
  int v54; // r6@59
  int v55; // r4@59
  Block *v56; // r5@60
  int v57; // r1@60
  int v58; // r1@61
  Material *v59; // r0@63
  int v60; // r4@66
  int v61; // r6@66
  Block *v62; // r5@67
  int v63; // r1@67
  int v64; // r1@68
  Material *v65; // r0@70
  Block *v66; // r0@72
  Block *v67; // r5@72
  int v68; // r1@72
  int v69; // r1@73
  Material *v70; // r0@75
  int v71; // r0@78
  int v72; // r2@78
  int v73; // r3@78
  char *v74; // r6@78
  char v75; // r7@78
  int v76; // r0@82
  int v77; // r2@82
  int v78; // r3@82
  int v79; // r0@83
  int v80; // r2@83
  int v81; // r3@83
  signed int v82; // [sp+10h] [bp-78h]@46
  int v83; // [sp+10h] [bp-78h]@52
  int v84; // [sp+18h] [bp-70h]@41
  Random *v85; // [sp+1Ch] [bp-6Ch]@3
  Random *v86; // [sp+1Ch] [bp-6Ch]@41
  char v87; // [sp+20h] [bp-68h]@35
  char v88; // [sp+24h] [bp-64h]@37
  int v89; // [sp+28h] [bp-60h]@32
  int v90; // [sp+2Ch] [bp-5Ch]@32
  int v91; // [sp+30h] [bp-58h]@32
  unsigned __int8 v92; // [sp+34h] [bp-54h]@32
  unsigned __int8 v93; // [sp+35h] [bp-53h]@34
  char v94; // [sp+38h] [bp-50h]@45
  char v95; // [sp+3Ch] [bp-4Ch]@78
  char v96; // [sp+40h] [bp-48h]@83
  char v97; // [sp+44h] [bp-44h]@82
  char v98; // [sp+48h] [bp-40h]@80
  char v99; // [sp+4Ch] [bp-3Ch]@79
  char v100; // [sp+50h] [bp-38h]@28
  int v101; // [sp+54h] [bp-34h]@16
  int v102; // [sp+58h] [bp-30h]@16
  int v103; // [sp+5Ch] [bp-2Ch]@16
  unsigned __int8 v104; // [sp+60h] [bp-28h]@6

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( result )
    return result;
  result = Random::_genRandInt32(v6);
  if ( result & 3 )
  v10 = *((_DWORD *)v7 + 2);
  v11 = 5;
  v12 = *(_DWORD *)v7 - 4;
  v85 = v6;
LABEL_4:
  v13 = v10 - 4;
LABEL_5:
  v14 = *((_DWORD *)v7 + 1) - 2;
  while ( 1 )
  {
    BlockSource::getBlockID((BlockSource *)&v104, (int)v4, v12, ++v14, v13);
    if ( v104 == *((_BYTE *)v5 + 4) )
      break;
LABEL_9:
    if ( v14 > *((_DWORD *)v7 + 1) )
    {
      v10 = *((_DWORD *)v7 + 2);
      v16 = __OFSUB__(v13, v10 + 4);
      v15 = v13++ - (v10 + 4) < 0;
      if ( v15 ^ v16 )
        goto LABEL_5;
      v17 = *(_DWORD *)v7 + 4;
      v16 = __OFSUB__(v12, v17);
      v15 = v12++ - v17 < 0;
      if ( !(v15 ^ v16) )
      {
        v18 = 0;
        goto LABEL_14;
      }
      goto LABEL_4;
    }
  }
  if ( v11 >= 2 )
    --v11;
    goto LABEL_9;
  v18 = 1;
LABEL_14:
  v19 = BlockSource::getData(v4, v7);
  v20 = Random::_genRandInt32(v85) % 6;
  if ( v20 == 1 )
    v21 = *((_DWORD *)v7 + 1);
    if ( v21 < *((_WORD *)v4 + 12) - 1 )
      v22 = *((_DWORD *)v7 + 2);
      v101 = *(_DWORD *)v7;
      v102 = v21 + 1;
      v103 = v22;
      result = BlockSource::isEmptyBlock(v4, (const BlockPos *)&v101);
      if ( result == 1 )
        if ( !v18 )
        {
          result = Random::_genRandInt32(v85) & v19;
          v23 = result & 0xF;
          if ( result & 0xF )
          {
            v24 = 0;
            do
            {
              v25 = (Block *)BlockSource::getBlock(
                               v4,
                               Direction::STEP_X[v24] + *(_DWORD *)v7,
                               *((_DWORD *)v7 + 1) + 1,
                               *((_DWORD *)v7 + 2) + Direction::STEP_Z[v24]);
              if ( Block::isType(v25, (const Block *)Block::mAir)
                || !Block::hasProperty((int)v25, v26, 0x200000LL) && Block::hasProperty((int)v25, v27, 0x100000LL) != 1
                || (v28 = (Material *)Block::getMaterial(v25), Material::getBlocksMotion(v28) != 1)
                || (result = Block::isType(v25, (const Block *)Block::mInvisibleBedrock), result == 1) )
              {
                result = 1 << v24;
                v23 &= ~(1 << v24);
              }
              ++v24;
            }
            while ( v24 != 4 );
            if ( v23 > 0 )
              v29 = *(_QWORD *)v7 >> 32;
              v30 = *(_QWORD *)v7;
              v31 = *((_DWORD *)v7 + 2);
              v100 = *((_BYTE *)v5 + 4);
              result = BlockSource::setBlockAndData((int)v4, v30, v29 + 1, v31, &v100, v23, 2);
          }
        }
        return result;
LABEL_31:
    result = *((_DWORD *)v7 + 1);
    if ( result < 2 )
      return result;
    v33 = *((_DWORD *)v7 + 2);
    v89 = *(_DWORD *)v7;
    v90 = result - 1;
    v91 = v33;
    BlockSource::getBlockAndData((BlockSource *)&v92, v4, (int)&v89);
    result = v92;
    if ( v92 )
      if ( v92 != *((_BYTE *)v5 + 4) )
      v34 = Random::_genRandInt32(v85);
      result = v34 & (unsigned __int8)v19 & 0xF | v93;
      if ( v93 == result )
      v35 = *(_DWORD *)v7;
      v36 = *((_DWORD *)v7 + 1);
      v37 = *((_DWORD *)v7 + 2);
      v38 = &v87;
      v87 = *((_BYTE *)v5 + 4);
    else
      result = (unsigned __int8)Random::_genRandInt32(v85) & (unsigned __int8)v19 & 0xF;
      if ( !result )
      v38 = &v88;
      v88 = *((_BYTE *)v5 + 4);
    return BlockSource::setBlockAndData((int)v4, v35, v36 - 1, v37, v38, result, 2);
  if ( v20 - 2 > 3 )
    goto LABEL_31;
  v32 = Direction::FACING_DIRECTION[v20];
  result = 1;
  if ( (1 << v32) & v19 )
  if ( v18 )
  v86 = (Random *)Direction::STEP_Z[v32];
  v84 = Direction::STEP_X[v32];
  BlockSource::getBlockID(
    (BlockSource *)&v92,
    (int)v4,
    *(_DWORD *)v7 + Direction::STEP_X[v32],
    *((_DWORD *)v7 + 1),
    (int)v86 + *((_DWORD *)v7 + 2));
  if ( v92 )
    v39 = (Block *)Block::mBlocks[v92];
    if ( v39 )
      v40 = (Material *)Block::getMaterial(v39);
      result = Material::isSolidBlocking(v40);
        result = Block::mSolid[v92];
        if ( Block::mSolid[v92] )
          v41 = *(_DWORD *)v7;
          v42 = *((_DWORD *)v7 + 1);
          v43 = *((_DWORD *)v7 + 2);
          v94 = *((_BYTE *)v5 + 4);
          result = BlockSource::setBlockAndData((int)v4, v41, v42, v43, &v94, (1 << v32) | v19, 2);
  v44 = ((_BYTE)v32 + 1) & 3;
  v82 = 1 << v44;
  if ( (1 << v44) & v19 )
    v45 = (Block *)BlockSource::getBlock(
                     v4,
                     *(_QWORD *)v7 + v84 + Direction::STEP_X[v44],
                     *(_QWORD *)v7 >> 32,
                     (int)v86 + *((_DWORD *)v7 + 2) + Direction::STEP_Z[v44]);
    if ( !Block::isType(v45, (const Block *)Block::mAir)
      && (Block::hasProperty((int)v45, v46, 0x200000LL) || Block::hasProperty((int)v45, v47, 0x100000LL) == 1) )
      v48 = (Material *)Block::getMaterial(v45);
      if ( Material::getBlocksMotion(v48) == 1 && !Block::isType(v45, (const Block *)Block::mInvisibleBedrock) )
        v71 = *(_DWORD *)v7;
        v72 = *((_DWORD *)v7 + 1);
        v73 = *((_DWORD *)v7 + 2);
        v74 = &v99;
        v99 = *((_BYTE *)v5 + 4);
        v75 = v82;
        return BlockSource::setBlockAndData((int)v4, v84 + v71, v72, (int)v86 + v73, v74, v75, 2);
  v49 = ((_BYTE)v32 + 3) & 3;
  v83 = (1 << v49) & v19;
  if ( v83 )
    v50 = (Block *)BlockSource::getBlock(
                     *(_QWORD *)v7 + v84 + Direction::STEP_X[v49],
                     (int)v86 + *((_DWORD *)v7 + 2) + Direction::STEP_Z[v49]);
    if ( !Block::isType(v50, (const Block *)Block::mAir)
      && (Block::hasProperty((int)v50, v51, 0x200000LL) || Block::hasProperty((int)v50, v52, 0x100000LL) == 1) )
      v53 = (Material *)Block::getMaterial(v50);
      if ( Material::getBlocksMotion(v53) == 1 && !Block::isType(v50, (const Block *)Block::mInvisibleBedrock) )
        v74 = &v98;
        v98 = *((_BYTE *)v5 + 4);
        v75 = 1 << v49;
    v54 = Direction::STEP_X[v44];
    v55 = Direction::STEP_Z[v44];
    if ( BlockSource::isEmptyBlock(
           v4,
           v84 + *(_QWORD *)v7 + v54,
           *(_QWORD *)v7 >> 32,
           (int)v86 + *((_DWORD *)v7 + 2) + v55) == 1 )
      v56 = (Block *)BlockSource::getBlock(v4, v54 + *(_DWORD *)v7, *((_DWORD *)v7 + 1), *((_DWORD *)v7 + 2) + v55);
      if ( !Block::isType(v56, (const Block *)Block::mAir)
        && (Block::hasProperty((int)v56, v57, 0x200000LL) || Block::hasProperty((int)v56, v58, 0x100000LL) == 1) )
        v59 = (Material *)Block::getMaterial(v56);
        if ( Material::getBlocksMotion(v59) == 1 && !Block::isType(v56, (const Block *)Block::mInvisibleBedrock) )
          v76 = *(_DWORD *)v7;
          v77 = *((_DWORD *)v7 + 1);
          v78 = *((_DWORD *)v7 + 2);
          v97 = *((_BYTE *)v5 + 4);
          return BlockSource::setBlockAndData(
                   (int)v4,
                   v76 + v84 + v54,
                   v77,
                   (int)v86 + v78 + v55,
                   &v97,
                   1 << ((v32 + 2) & 3),
                   2);
    v60 = Direction::STEP_X[v49];
    v61 = Direction::STEP_Z[v49];
           v84 + *(_QWORD *)v7 + v60,
           (int)v86 + *((_DWORD *)v7 + 2) + v61) == 1 )
      v62 = (Block *)BlockSource::getBlock(v4, v60 + *(_DWORD *)v7, *((_DWORD *)v7 + 1), *((_DWORD *)v7 + 2) + v61);
      if ( !Block::isType(v62, (const Block *)Block::mAir)
        && (Block::hasProperty((int)v62, v63, 0x200000LL) || Block::hasProperty((int)v62, v64, 0x100000LL) == 1) )
        v65 = (Material *)Block::getMaterial(v62);
        if ( Material::getBlocksMotion(v65) == 1 && !Block::isType(v62, (const Block *)Block::mInvisibleBedrock) )
          v79 = *(_DWORD *)v7;
          v80 = *((_DWORD *)v7 + 1);
          v81 = *((_DWORD *)v7 + 2);
          v96 = *((_BYTE *)v5 + 4);
                   v79 + v84 + v60,
                   v80,
                   (int)v86 + v81 + v61,
                   &v96,
  v66 = (Block *)BlockSource::getBlock(v4, v84 + *(_DWORD *)v7, *((_DWORD *)v7 + 1) + 1, (int)v86 + *((_DWORD *)v7 + 2));
  v67 = v66;
  result = Block::isType(v66, (const Block *)Block::mAir);
  if ( !result )
    if ( Block::hasProperty((int)v67, v68, 0x200000LL)
      || (result = Block::hasProperty((int)v67, v69, 0x100000LL), result == 1) )
      v70 = (Material *)Block::getMaterial(v67);
      result = Material::getBlocksMotion(v70);
        result = Block::isType(v67, (const Block *)Block::mInvisibleBedrock);
        if ( !result )
          v71 = *(_DWORD *)v7;
          v72 = *((_DWORD *)v7 + 1);
          v73 = *((_DWORD *)v7 + 2);
          v74 = &v95;
          v75 = 0;
          v95 = *((_BYTE *)v5 + 4);
          return BlockSource::setBlockAndData((int)v4, v84 + v71, v72, (int)v86 + v73, v74, v75, 2);
  return result;
}
