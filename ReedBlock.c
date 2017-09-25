

void __fastcall ReedBlock::~ReedBlock(ReedBlock *this)
{
  ReedBlock::~ReedBlock(this);
}


int __fastcall ReedBlock::onGraphicsModeChanged(ReedBlock *this, bool a2, bool a3, bool a4)
{
  ReedBlock *v4; // r4@1
  int result; // r0@1
  signed int v6; // r1@1

  v4 = this;
  Block::onGraphicsModeChanged(this, a2, a3, a4);
  result = *((_BYTE *)v4 + 16);
  v6 = 5;
  if ( *((_BYTE *)v4 + 16) )
    v6 = 4;
  *((_DWORD *)v4 + 5) = v6;
  return result;
}


void __fastcall ReedBlock::~ReedBlock(ReedBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall ReedBlock::mayPlace(ReedBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  ReedBlock *v5; // r7@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r6@1
  int v10; // r1@6
  int v11; // r2@6
  int v12; // r0@6
  int v13; // r1@7
  int v14; // r2@7
  int v15; // r1@8
  int v16; // r2@8
  int v17; // r0@8
  int v18; // r1@9
  int v19; // r2@9
  int v20; // r1@10
  int v21; // r2@10
  int v22; // r0@10
  int v23; // r1@11
  int v24; // r2@11
  int v25; // r1@12
  int v26; // r2@12
  int v27; // r0@12
  signed int result; // r0@13
  int v29; // r1@15
  int v30; // r2@15
  unsigned __int8 v31; // [sp+4h] [bp-94h]@15
  int v32; // [sp+8h] [bp-90h]@15
  int v33; // [sp+Ch] [bp-8Ch]@15
  int v34; // [sp+10h] [bp-88h]@15
  int v35; // [sp+14h] [bp-84h]@12
  int v36; // [sp+18h] [bp-80h]@12
  int v37; // [sp+1Ch] [bp-7Ch]@12
  unsigned __int8 v38; // [sp+20h] [bp-78h]@11
  int v39; // [sp+24h] [bp-74h]@11
  int v40; // [sp+28h] [bp-70h]@11
  int v41; // [sp+2Ch] [bp-6Ch]@11
  int v42; // [sp+30h] [bp-68h]@10
  int v43; // [sp+34h] [bp-64h]@10
  int v44; // [sp+38h] [bp-60h]@10
  unsigned __int8 v45; // [sp+3Ch] [bp-5Ch]@9
  int v46; // [sp+40h] [bp-58h]@9
  int v47; // [sp+44h] [bp-54h]@9
  int v48; // [sp+48h] [bp-50h]@9
  int v49; // [sp+4Ch] [bp-4Ch]@8
  int v50; // [sp+50h] [bp-48h]@8
  int v51; // [sp+54h] [bp-44h]@8
  unsigned __int8 v52; // [sp+58h] [bp-40h]@7
  int v53; // [sp+5Ch] [bp-3Ch]@7
  int v54; // [sp+60h] [bp-38h]@7
  int v55; // [sp+64h] [bp-34h]@7
  int v56; // [sp+68h] [bp-30h]@6
  int v57; // [sp+6Ch] [bp-2Ch]@6
  int v58; // [sp+70h] [bp-28h]@6
  int v59; // [sp+74h] [bp-24h]@1
  int v60; // [sp+78h] [bp-20h]@1
  int v61; // [sp+7Ch] [bp-1Ch]@1
  unsigned __int8 v62; // [sp+80h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v59 = v6;
  v60 = v7 - 1;
  v61 = v8;
  BlockSource::getBlockID((BlockSource *)&v62, v4, (int)&v59);
  v9 = Material::getMaterial(5);
  if ( v62 == *((_BYTE *)v5 + 4) )
    return 1;
  if ( v62 != *(_BYTE *)(Block::mGrass + 4)
    && v62 != *(_BYTE *)(Block::mDirt + 4)
    && v62 != *(_BYTE *)(Block::mSand + 4)
    && v62 != *(_BYTE *)(Block::mPodzol + 4) )
  {
    result = 0;
  }
  else
    v10 = *((_DWORD *)v3 + 1);
    v11 = *((_DWORD *)v3 + 2);
    v56 = *(_DWORD *)v3 - 1;
    v57 = v10 - 1;
    v58 = v11;
    v12 = BlockSource::getMaterial(v4, (const BlockPos *)&v56);
    if ( Material::operator==(v12, v9) )
      return 1;
    v13 = *((_DWORD *)v3 + 1);
    v14 = *((_DWORD *)v3 + 2);
    v53 = *(_DWORD *)v3 - 1;
    v54 = v13 - 1;
    v55 = v14;
    BlockSource::getBlockID((BlockSource *)&v52, v4, (int)&v53);
    if ( v52 == *(_BYTE *)(Block::mFrostedIce + 4) )
    v15 = *((_DWORD *)v3 + 1);
    v16 = *((_DWORD *)v3 + 2);
    v49 = *(_DWORD *)v3 + 1;
    v50 = v15 - 1;
    v51 = v16;
    v17 = BlockSource::getMaterial(v4, (const BlockPos *)&v49);
    if ( Material::operator==(v17, v9) )
    v18 = *((_DWORD *)v3 + 1);
    v19 = *((_DWORD *)v3 + 2);
    v46 = *(_DWORD *)v3 + 1;
    v47 = v18 - 1;
    v48 = v19;
    BlockSource::getBlockID((BlockSource *)&v45, v4, (int)&v46);
    if ( v45 == *(_BYTE *)(Block::mFrostedIce + 4) )
    v20 = *((_DWORD *)v3 + 1);
    v21 = *((_DWORD *)v3 + 2);
    v42 = *(_DWORD *)v3;
    v43 = v20 - 1;
    v44 = v21 - 1;
    v22 = BlockSource::getMaterial(v4, (const BlockPos *)&v42);
    if ( Material::operator==(v22, v9) )
    v23 = *((_DWORD *)v3 + 1);
    v24 = *((_DWORD *)v3 + 2);
    v39 = *(_DWORD *)v3;
    v40 = v23 - 1;
    v41 = v24 - 1;
    BlockSource::getBlockID((BlockSource *)&v38, v4, (int)&v39);
    if ( v38 == *(_BYTE *)(Block::mFrostedIce + 4) )
    v25 = *((_DWORD *)v3 + 1);
    v26 = *((_DWORD *)v3 + 2);
    v35 = *(_DWORD *)v3;
    v36 = v25 - 1;
    v37 = v26 + 1;
    v27 = BlockSource::getMaterial(v4, (const BlockPos *)&v35);
    if ( Material::operator==(v27, v9) )
    v29 = *((_DWORD *)v3 + 1);
    v30 = *((_DWORD *)v3 + 2);
    v32 = *(_DWORD *)v3;
    v33 = v29 - 1;
    v34 = v30 + 1;
    BlockSource::getBlockID((BlockSource *)&v31, v4, (int)&v32);
    if ( v31 == *(_BYTE *)(Block::mFrostedIce + 4) )
      result = 1;
  return result;
}


int __fastcall ReedBlock::canBeSilkTouched(ReedBlock *this)
{
  return 0;
}


signed int __fastcall ReedBlock::onFertilized(ReedBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  const BlockPos *v5; // r4@1
  signed int v6; // r6@1
  BlockSource *v7; // r8@1
  ReedBlock *v8; // r11@1
  int v9; // r7@1
  signed int v10; // r5@2
  int v11; // r6@7
  int v12; // r1@10
  int (__fastcall *v13)(ItemUseCallback *, int *, _DWORD *, char *); // r12@11
  int v14; // r1@12
  int v15; // r3@12
  void (__fastcall *v16)(ItemUseCallback *, int *, _DWORD *, char *); // r5@12
  signed int result; // r0@14
  int v18; // r1@15
  int v19; // r1@16
  int v20; // r3@16
  signed int v21; // r1@17
  char v22; // [sp+Ch] [bp-44h]@12
  char v23; // [sp+Dh] [bp-43h]@12
  char v24; // [sp+10h] [bp-40h]@12
  char v25; // [sp+11h] [bp-3Fh]@12
  char v26; // [sp+14h] [bp-3Ch]@11
  char v27; // [sp+15h] [bp-3Bh]@11
  int v28; // [sp+18h] [bp-38h]@10
  int v29; // [sp+1Ch] [bp-34h]@10
  int v30; // [sp+20h] [bp-30h]@10
  unsigned __int8 v31; // [sp+24h] [bp-2Ch]@5
  unsigned __int8 v32; // [sp+28h] [bp-28h]@3

  v5 = a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = a2;
  v8 = this;
  v9 = v6 + 1;
  do
  {
    v10 = v6;
    if ( v6 < 2 )
      break;
    --v6;
    BlockSource::getBlockID((BlockSource *)&v32, (int)v7, *(_DWORD *)v5, v10 - 1, *((_DWORD *)v5 + 2));
  }
  while ( v32 == *((_BYTE *)v8 + 4) );
  for ( ; v9 < *((_WORD *)v7 + 12); ++v9 )
    BlockSource::getBlockID((BlockSource *)&v31, (int)v7, *(_DWORD *)v5, v9, *((_DWORD *)v5 + 2));
    if ( v31 != *((_BYTE *)v8 + 4) )
  v11 = v10 + 3;
  if ( v10 + 3 - v9 < 1 )
    result = 0;
  else
    if ( v11 != v9 )
    {
      if ( a5 )
      {
        do
        {
          v12 = *((_DWORD *)v5 + 2);
          v28 = *(_DWORD *)v5;
          v29 = v9;
          v30 = v12;
          if ( BlockSource::isEmptyBlock(v7, (const BlockPos *)&v28) != 1 )
            break;
          v13 = *(int (__fastcall **)(ItemUseCallback *, int *, _DWORD *, char *))(*(_DWORD *)a5 + 16);
          v26 = *((_BYTE *)v8 + 4);
          v27 = 0;
          if ( v13(a5, &v28, &FullBlock::AIR, &v26) )
          {
            v21 = 1;
            goto LABEL_18;
          }
          v14 = *(_DWORD *)v5;
          v15 = *((_DWORD *)v5 + 2);
          v24 = *((_BYTE *)v8 + 4);
          v25 = 0;
          BlockSource::setBlockAndData((int)v7, v14, v9, v15, (int)&v24, 3);
          v16 = *(void (__fastcall **)(ItemUseCallback *, int *, _DWORD *, char *))(*(_DWORD *)a5 + 20);
          v22 = *((_BYTE *)v8 + 4);
          v23 = 0;
          v16(a5, &v28, &FullBlock::AIR, &v22);
          ++v9;
        }
        while ( v11 != v9 );
      }
      else
          v18 = *((_DWORD *)v5 + 2);
          v30 = v18;
          v19 = *(_DWORD *)v5;
          v20 = *((_DWORD *)v5 + 2);
          BlockSource::setBlockAndData((int)v7, v19, v9++, v20, (int)&v24, 3);
    }
    v21 = 8;
LABEL_18:
    if ( v21 == 8 )
      result = 1;
  return result;
}


unsigned int __fastcall ReedBlock::getAge(ReedBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 1);
  return (0xFu >> (4 - (*v3 >> 32))) & (*v2 >> (*v3 + 1 - (*v3 >> 32)));
}


signed int __fastcall ReedBlock::isWaterBlocking(ReedBlock *this)
{
  return 1;
}


int __fastcall ReedBlock::checkAlive(ReedBlock *this, BlockSource *a2, const BlockPos *a3)
{
  Block *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int result; // r0@1
  char v7; // [sp+4h] [bp-64h]@8
  char v8; // [sp+8h] [bp-60h]@2
  int v9; // [sp+10h] [bp-58h]@6
  void *v10; // [sp+2Ch] [bp-3Ch]@4
  void *ptr; // [sp+3Ch] [bp-2Ch]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v8, Item::mReeds);
    Block::popResource(v3, v5, v4, (const ItemInstance *)&v8);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    v9 = 0;
    v7 = BlockID::AIR;
    result = BlockSource::setBlock((int)v5, v4, &v7, 3);
  }
  return result;
}


_DWORD *__fastcall ReedBlock::getAABB(ReedBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r4@1
  AABB *v8; // r5@2
  _DWORD *result; // r0@2
  char v10; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  if ( a6 == 1 )
  {
    v8 = (AABB *)AABB::set(a4, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
    Vec3::Vec3((int)&v10, (int)v7);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v10);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


signed int __fastcall ReedBlock::tick(ReedBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r8@1
  ReedBlock *v6; // r9@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  signed int result; // r0@1
  signed int v11; // r5@2
  signed int v12; // r7@2
  int v13; // r1@3
  int v14; // r2@3
  unsigned int v15; // r4@5
  unsigned __int64 *v16; // r0@5
  unsigned int v17; // r4@5
  int v18; // r0@6
  int v19; // r1@6
  int v20; // r3@6
  int v21; // r1@6
  int v22; // r2@6
  int v23; // r3@6
  BlockState *v24; // r0@7
  int v25; // r5@7
  int v26; // r7@7
  int v27; // r1@7
  int v28; // r2@7
  int v29; // r3@7
  char v30; // [sp+10h] [bp-48h]@7
  char v31; // [sp+14h] [bp-44h]@6
  char v32; // [sp+15h] [bp-43h]@6
  char v33; // [sp+18h] [bp-40h]@6
  unsigned __int8 v34; // [sp+1Ch] [bp-3Ch]@3
  int v35; // [sp+20h] [bp-38h]@3
  int v36; // [sp+24h] [bp-34h]@3
  int v37; // [sp+28h] [bp-30h]@3
  int v38; // [sp+2Ch] [bp-2Ch]@1
  int v39; // [sp+30h] [bp-28h]@1
  int v40; // [sp+34h] [bp-24h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v38 = v7;
  v39 = v8 + 1;
  v40 = v9;
  result = BlockSource::isEmptyBlock(v5, (const BlockPos *)&v38);
  if ( result == 1 )
  {
    v11 = 0;
    v12 = -1;
    do
    {
      v13 = *((_DWORD *)v4 + 1);
      v14 = *((_DWORD *)v4 + 2);
      v35 = *(_DWORD *)v4;
      v36 = v12 + v13;
      v37 = v14;
      BlockSource::getBlockID((BlockSource *)&v34, v5, (int)&v35);
      --v12;
      ++v11;
      result = *((_BYTE *)v6 + 4);
    }
    while ( v34 == result );
    if ( v11 <= 2 )
      v15 = BlockSource::getData(v5, v4);
      v16 = (unsigned __int64 *)Block::getBlockState((int)v6, 1);
      v17 = (v15 >> (*v16 + 1 - (*v16 >> 32))) & (0xFu >> (4 - (*v16 >> 32)));
      if ( v17 == 15 )
      {
        v18 = *(_QWORD *)v4 >> 32;
        v19 = *(_QWORD *)v4;
        v20 = *((_DWORD *)v4 + 2);
        v33 = *((_BYTE *)v6 + 4);
        BlockSource::setBlock((int)v5, v19, v18 + 1, v20, &v33, 3);
        v21 = *(_DWORD *)v4;
        v22 = *((_DWORD *)v4 + 1);
        v23 = *((_DWORD *)v4 + 2);
        v31 = *((_BYTE *)v6 + 4);
        v32 = 0;
        result = BlockSource::setBlockAndData((int)v5, v21, v22, v23, (int)&v31, 4);
      }
      else
        v24 = (BlockState *)Block::getBlockState((int)v6, 1);
        v26 = *(_QWORD *)v24 >> 32;
        v25 = *(_QWORD *)v24;
        BlockState::getMask(v24);
        v27 = *(_DWORD *)v4;
        v28 = *((_DWORD *)v4 + 1);
        v29 = *((_DWORD *)v4 + 2);
        v30 = *((_BYTE *)v6 + 4);
        result = BlockSource::setBlockAndData((int)v5, v27, v28, v29, &v30, (v17 + 1) << (v25 + 1 - v26), 4);
  }
  return result;
}


int __fastcall ReedBlock::ReedBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-30h]@1
  int v15; // [sp+4h] [bp-2Ch]@1
  int v16; // [sp+8h] [bp-28h]@1
  signed int v17; // [sp+Ch] [bp-24h]@1
  signed int v18; // [sp+10h] [bp-20h]@1
  int v19; // [sp+14h] [bp-1Ch]@1
  int v20; // [sp+18h] [bp-18h]@1
  signed int v21; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(8);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2712894;
  v19 = 1040187392;
  v20 = 0;
  v21 = 1040187392;
  v16 = 1063256064;
  v17 = 1065353216;
  v18 = 1063256064;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v19, (const Vec3 *)&v16);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  Block::setSolid((Block *)v3, 0);
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
    VSTR            S0, [SP,#0x30+var_30]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}
