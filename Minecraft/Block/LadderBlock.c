

int __fastcall LadderBlock::getAABB(LadderBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  LadderBlock *v7; // r7@1
  unsigned __int8 v8; // r0@1
  AABB *v9; // r4@1
  const BlockPos *v10; // r5@1
  char v12; // [sp+4h] [bp-24h]@3

  v7 = this;
  v8 = a5;
  v9 = a4;
  v10 = a3;
  if ( !a5 )
    v8 = BlockSource::getData(a2, a3);
  (*(void (__fastcall **)(LadderBlock *, _DWORD, AABB *, int))(*(_DWORD *)v7 + 420))(v7, v8, v9, a6);
  Vec3::Vec3((int)&v12, (int)v10);
  return AABB::move(v9, (const Vec3 *)&v12);
}


void __fastcall LadderBlock::~LadderBlock(LadderBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall LadderBlock::mayPlace(LadderBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  int result; // r0@2
  Block *v7; // r0@3
  int v8; // r7@3
  Material *v9; // r0@3
  int v10; // r6@3
  int v11; // r1@3
  int v12; // r1@3
  _BOOL4 v13; // r0@4
  Block *v14; // r0@7
  int v15; // r7@7
  Material *v16; // r0@7
  int v17; // r6@7
  int v18; // r1@7
  int v19; // r1@7
  _BOOL4 v20; // r0@8
  Block *v21; // r0@11
  int v22; // r7@11
  Material *v23; // r0@11
  int v24; // r6@11
  int v25; // r1@11
  int v26; // r1@11
  _BOOL4 v27; // r0@12
  Block *v28; // r0@16
  int v29; // r5@16
  Material *v30; // r0@16
  int v31; // r4@16
  int v32; // r1@16
  int v33; // r1@16
  _BOOL4 v34; // r0@17
  int v35; // [sp+0h] [bp-20h]@3

  v4 = a3;
  v5 = a2;
  if ( (unsigned __int8)a4 >= 2u )
  {
    BlockPos::neighbor((BlockPos *)&v35, (int)a3, 2);
    v7 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v35);
    v8 = (int)v7;
    v9 = (Material *)Block::getMaterial(v7);
    v10 = Material::isSolidBlocking(v9);
    if ( Block::hasProperty(v8, v11, 0x200000LL) )
      v13 = 1;
    else
      v13 = Block::hasProperty(v8, v12, 0x100000LL);
    if ( (v13 & v10) == 1
      || ((BlockPos::neighbor((BlockPos *)&v35, (int)v4, 3),
           v14 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v35),
           v15 = (int)v14,
           v16 = (Material *)Block::getMaterial(v14),
           v17 = Material::isSolidBlocking(v16),
           !Block::hasProperty(v15, v18, 0x200000LL)) ? (v20 = Block::hasProperty(v15, v19, 0x100000LL)) : (v20 = 1),
          v17 & v20
       || ((BlockPos::neighbor((BlockPos *)&v35, (int)v4, 4),
            v21 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v35),
            v22 = (int)v21,
            v23 = (Material *)Block::getMaterial(v21),
            v24 = Material::isSolidBlocking(v23),
            !Block::hasProperty(v22, v25, 0x200000LL)) ? (v27 = Block::hasProperty(v22, v26, 0x100000LL)) : (v27 = 1),
           v24 & v27)) )
    {
      result = 1;
    }
      BlockPos::neighbor((BlockPos *)&v35, (int)v4, 5);
      v28 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v35);
      v29 = (int)v28;
      v30 = (Material *)Block::getMaterial(v28);
      v31 = Material::isSolidBlocking(v30);
      if ( Block::hasProperty(v29, v32, 0x200000LL) )
        v34 = 1;
      else
        v34 = Block::hasProperty(v29, v33, 0x100000LL);
      result = v34 & v31;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall LadderBlock::getPlacementDataValue(LadderBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  LadderBlock *v6; // r4@1
  int v7; // r6@1
  const BlockPos *v8; // r5@1
  BlockSource *v9; // r0@1
  __int64 v10; // r1@2
  int v11; // r3@2
  BlockState *v12; // r0@3
  __int64 v13; // r4@3
  signed int v14; // r1@3
  int v15; // r0@3
  int v16; // r2@4
  int v17; // r3@4
  BlockState *v18; // r0@5
  __int64 v19; // r4@5
  int v20; // r2@6
  int v21; // r3@6
  BlockState *v22; // r0@7
  __int64 v23; // r4@7
  signed int result; // r0@8
  __int64 v25; // r1@9
  int v26; // r3@9
  BlockState *v27; // r0@10
  __int64 v28; // r4@10
  int v29; // [sp+0h] [bp-40h]@6
  int v30; // [sp+4h] [bp-3Ch]@6
  int v31; // [sp+8h] [bp-38h]@6
  int v32; // [sp+Ch] [bp-34h]@4
  int v33; // [sp+10h] [bp-30h]@4
  int v34; // [sp+14h] [bp-2Ch]@4
  __int64 v35; // [sp+18h] [bp-28h]@9
  int v36; // [sp+20h] [bp-20h]@9
  __int64 v37; // [sp+24h] [bp-1Ch]@2
  int v38; // [sp+2Ch] [bp-14h]@2

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (BlockSource *)Entity::getRegion(a2);
  switch ( v7 )
  {
    case 2:
      LODWORD(v10) = *(_DWORD *)v8;
      HIDWORD(v10) = *((_DWORD *)v8 + 1);
      v11 = *((_DWORD *)v8 + 2);
      v37 = v10;
      v38 = v11 + 1;
      if ( BlockSource::isSolidBlockingBlock(v9, (const BlockPos *)&v37) == 1 )
      {
        v12 = (BlockState *)Block::getBlockState((int)v6, 15);
        v13 = *(_QWORD *)v12;
        BlockState::getMask(v12);
        v14 = 2;
        v15 = v13 + 1 - HIDWORD(v13);
        goto LABEL_11;
      }
      LOBYTE(result) = 0;
      break;
    case 4:
      v16 = *((_DWORD *)v8 + 1);
      v17 = *((_DWORD *)v8 + 2);
      v32 = *(_DWORD *)v8 + 1;
      v33 = v16;
      v34 = v17;
      if ( BlockSource::isSolidBlockingBlock(v9, (const BlockPos *)&v32) == 1 )
        v18 = (BlockState *)Block::getBlockState((int)v6, 15);
        v19 = *(_QWORD *)v18;
        BlockState::getMask(v18);
        v14 = 4;
        v15 = v19 + 1 - HIDWORD(v19);
    case 5:
      v20 = *((_DWORD *)v8 + 1);
      v21 = *((_DWORD *)v8 + 2);
      v29 = *(_DWORD *)v8 - 1;
      v30 = v20;
      v31 = v21;
      if ( BlockSource::isSolidBlockingBlock(v9, (const BlockPos *)&v29) == 1 )
        v22 = (BlockState *)Block::getBlockState((int)v6, 15);
        v23 = *(_QWORD *)v22;
        BlockState::getMask(v22);
        v14 = 5;
        v15 = v23 + 1 - HIDWORD(v23);
    case 3:
      LODWORD(v25) = *(_DWORD *)v8;
      HIDWORD(v25) = *((_DWORD *)v8 + 1);
      v26 = *((_DWORD *)v8 + 2);
      v35 = v25;
      v36 = v26 - 1;
      if ( BlockSource::isSolidBlockingBlock(v9, (const BlockPos *)&v35) == 1 )
        v27 = (BlockState *)Block::getBlockState((int)v6, 15);
        v28 = *(_QWORD *)v27;
        BlockState::getMask(v27);
        v14 = 3;
        v15 = v28 + 1 - HIDWORD(v28);
LABEL_11:
        result = v14 << v15;
      else
        LOBYTE(result) = 0;
    default:
  }
  return (unsigned __int8)result;
}


AABB *__fastcall LadderBlock::getVisualShape(LadderBlock *this, int a2, AABB *a3, bool a4)
{
  AABB *v4; // r4@1
  int *v5; // r1@2
  int *v6; // r2@2
  int **v7; // r0@3
  int v9; // [sp+0h] [bp-38h]@5
  signed int v10; // [sp+4h] [bp-34h]@5
  signed int v11; // [sp+8h] [bp-30h]@5
  int v12; // [sp+Ch] [bp-2Ch]@4
  int v13; // [sp+10h] [bp-28h]@4
  int v14; // [sp+14h] [bp-24h]@4
  int v15; // [sp+18h] [bp-20h]@3
  signed int v16; // [sp+1Ch] [bp-1Ch]@3
  int v17; // [sp+20h] [bp-18h]@3
  int v18; // [sp+24h] [bp-14h]@2
  int v19; // [sp+28h] [bp-10h]@2
  int v20; // [sp+2Ch] [bp-Ch]@2

  v4 = a3;
  switch ( a2 )
  {
    case 2:
      v18 = 0;
      v19 = 0;
      v20 = 1062207488;
      v5 = &v18;
      v6 = (int *)&Vec3::ONE;
      goto LABEL_7;
    case 3:
      v15 = 1065353216;
      v16 = 1065353216;
      v7 = &Vec3::ZERO;
      v17 = 1044381696;
      v6 = &v15;
      goto LABEL_6;
    case 4:
      v12 = 1062207488;
      v13 = 0;
      v14 = 0;
      v5 = &v12;
    case 5:
      v9 = 1044381696;
      v6 = &v9;
      v10 = 1065353216;
      v11 = 1065353216;
LABEL_6:
      v5 = *v7;
LABEL_7:
      AABB::set(v4, (const Vec3 *)v5, (const Vec3 *)v6);
      break;
    default:
      return v4;
  }
  return v4;
}


signed int __fastcall LadderBlock::isWaterBlocking(LadderBlock *this)
{
  return 1;
}


void __fastcall LadderBlock::~LadderBlock(LadderBlock *this)
{
  LadderBlock::~LadderBlock(this);
}


int __fastcall LadderBlock::canBeSilkTouched(LadderBlock *this)
{
  return 0;
}


int __fastcall LadderBlock::getVisualShape(LadderBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  LadderBlock *v5; // r5@1
  AABB *v6; // r4@1
  int (__fastcall *v7)(LadderBlock *, unsigned int, AABB *, int); // r6@1
  unsigned int v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = *(int (__fastcall **)(LadderBlock *, unsigned int, AABB *, int))(*(_DWORD *)this + 420);
  v8 = BlockSource::getData(a2, a3);
  return v7(v5, v8, v6, a5);
}


int __fastcall LadderBlock::LadderBlock(int a1, const void **a2, int a3)
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
  v6 = Material::getMaterial(15);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270D854;
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
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


signed int __fastcall LadderBlock::getResourceCount(LadderBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


int __fastcall LadderBlock::neighborChanged(LadderBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r9@1
  const BlockPos *v5; // r4@1
  const BlockPos *v6; // r5@1
  Block *v7; // r8@1
  unsigned __int64 *v8; // r7@1
  unsigned int v9; // r7@1
  int result; // r0@1
  int v11; // r2@5
  __int64 *v12; // r1@5
  int v13; // r2@6
  int v14; // r1@7
  int v15; // r2@7
  int v16; // r1@8
  int v17; // r2@8
  char v18; // [sp+4h] [bp-A4h]@16
  char v19; // [sp+8h] [bp-A0h]@10
  int v20; // [sp+10h] [bp-98h]@14
  void *v21; // [sp+2Ch] [bp-7Ch]@12
  void *ptr; // [sp+3Ch] [bp-6Ch]@10
  int v23; // [sp+50h] [bp-58h]@8
  int v24; // [sp+54h] [bp-54h]@8
  int v25; // [sp+58h] [bp-50h]@8
  int v26; // [sp+5Ch] [bp-4Ch]@7
  int v27; // [sp+60h] [bp-48h]@7
  int v28; // [sp+64h] [bp-44h]@7
  __int64 v29; // [sp+68h] [bp-40h]@6
  int v30; // [sp+70h] [bp-38h]@6
  __int64 v31; // [sp+74h] [bp-34h]@5
  int v32; // [sp+7Ch] [bp-2Ch]@5
  int v33; // [sp+80h] [bp-28h]@1
  int v34; // [sp+84h] [bp-24h]@2
  int v35; // [sp+88h] [bp-20h]@3

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  v9 = (BlockSource::getData(v4, v6) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)));
  BlockPos::neighbor((BlockPos *)&v33, (int)v6, Facing::OPPOSITE_FACING[(char)v9]);
  result = *(_DWORD *)v5;
  if ( v33 == *(_DWORD *)v5 )
  {
    result = v34;
    if ( v34 == *((_DWORD *)v5 + 1) )
    {
      result = v35;
      if ( v35 == *((_DWORD *)v5 + 2) )
      {
        switch ( v9 )
        {
          case 2u:
            v11 = *((_DWORD *)v6 + 2);
            v31 = *(_QWORD *)v6;
            v32 = v11 + 1;
            v12 = &v31;
            goto LABEL_9;
          case 3u:
            v13 = *((_DWORD *)v6 + 2);
            v29 = *(_QWORD *)v6;
            v30 = v13 - 1;
            v12 = &v29;
          case 4u:
            v14 = *((_DWORD *)v6 + 1);
            v15 = *((_DWORD *)v6 + 2);
            v26 = *(_DWORD *)v6 + 1;
            v27 = v14;
            v28 = v15;
            v12 = (__int64 *)&v26;
          case 5u:
            v16 = *((_DWORD *)v6 + 1);
            v17 = *((_DWORD *)v6 + 2);
            v23 = *(_DWORD *)v6 - 1;
            v24 = v16;
            v25 = v17;
            v12 = (__int64 *)&v23;
LABEL_9:
            if ( !BlockSource::isSolidBlockingBlock(v4, (const BlockPos *)v12) )
              goto def_18C562A;
            break;
          default:
def_18C562A:
            ItemInstance::ItemInstance((ItemInstance *)&v19, Block::mLadder);
            Block::popResource(v7, v4, v6, (const ItemInstance *)&v19);
            if ( ptr )
              operator delete(ptr);
            if ( v21 )
              operator delete(v21);
            if ( v20 )
              (*(void (**)(void))(*(_DWORD *)v20 + 4))();
            v20 = 0;
            v18 = BlockID::AIR;
            BlockSource::setBlock((int)v4, v6, &v18, 3);
        }
        result = Block::neighborChanged(v7, v4, v6, v5);
      }
    }
  }
  return result;
}
