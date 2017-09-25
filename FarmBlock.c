

void __fastcall FarmBlock::~FarmBlock(FarmBlock *this)
{
  FarmBlock::~FarmBlock(this);
}


int __fastcall FarmBlock::canBeSilkTouched(FarmBlock *this)
{
  return 0;
}


void __fastcall FarmBlock::~FarmBlock(FarmBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall FarmBlock::isNearWater(FarmBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r8@1
  BlockSource *v4; // r5@1
  int v5; // r9@1
  int v6; // r6@1
  int v7; // r10@2
  int v8; // r11@2
  int v9; // r4@3
  int *v10; // r0@3
  int *v11; // r0@4
  int *v12; // r0@5
  int *v13; // r0@6
  int *v14; // r0@7
  int *v15; // r0@8
  int *v16; // r0@9
  int *v17; // r0@10
  int *v18; // r0@11
  bool v19; // zf@13

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)a3 + 4;
  v6 = *(_DWORD *)a3 - 4;
  while ( 2 )
  {
    v7 = *((_DWORD *)v3 + 1);
    v8 = 0;
    do
    {
      v9 = *((_DWORD *)v3 + 2);
      v10 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 - 4);
      if ( Material::isType(v10, 5) )
        return 1;
      v11 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 - 3);
      if ( Material::isType(v11, 5) )
      v12 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 - 2);
      if ( Material::isType(v12, 5) )
      v13 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 - 1);
      if ( Material::isType(v13, 5) )
      v14 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9);
      if ( Material::isType(v14, 5) )
      v15 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 + 1);
      if ( Material::isType(v15, 5) )
      v16 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 + 2);
      if ( Material::isType(v16, 5) )
      v17 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 + 3);
      if ( Material::isType(v17, 5) )
      v18 = (int *)BlockSource::getMaterial(v4, v6, v7 + v8, v9 + 4);
      if ( Material::isType(v18, 5) )
      ++v8;
    }
    while ( v8 != 2 );
    v19 = v6++ == v5;
    if ( !v19 )
      continue;
    break;
  }
  return 0;
}


int __fastcall FarmBlock::tick(FarmBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r10@1
  FarmBlock *v6; // r7@1
  unsigned int v7; // r9@1
  Dimension *v8; // r0@2
  Weather *v9; // r0@2
  int v10; // r2@2
  int v11; // r3@2
  BlockState *v12; // r0@3
  int v13; // r5@3
  int v14; // r6@3
  char v15; // r0@3
  char *v16; // r2@3
  char v17; // r3@3
  unsigned __int64 *v18; // r0@4
  signed int v19; // r8@4
  BlockState *v20; // r0@5
  __int64 v21; // r5@5
  char v22; // r0@5
  int result; // r0@6
  int v24; // r1@7
  int v25; // r2@7
  int v26; // r0@7
  int v27; // r6@7
  char v28; // [sp+Ch] [bp-44h]@9
  char v29; // [sp+10h] [bp-40h]@5
  char v30; // [sp+14h] [bp-3Ch]@3
  int v31; // [sp+18h] [bp-38h]@2
  int v32; // [sp+1Ch] [bp-34h]@2
  int v33; // [sp+20h] [bp-30h]@2
  int v34; // [sp+24h] [bp-2Ch]@7
  int v35; // [sp+28h] [bp-28h]@7
  int v36; // [sp+2Ch] [bp-24h]@7

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockSource::getData(a2, a3);
  if ( FarmBlock::isNearWater((FarmBlock *)v7, v5, v4)
    || (v8 = (Dimension *)BlockSource::getDimension(v5),
        v9 = (Weather *)Dimension::getWeather(v8),
        v10 = *((_DWORD *)v4 + 1),
        v11 = *((_DWORD *)v4 + 2),
        v31 = *(_DWORD *)v4,
        v32 = v10 + 1,
        v33 = v11,
        Weather::isRainingAt(v9, v5, (const BlockPos *)&v31) == 1) )
  {
    v12 = (BlockState *)Block::getBlockState((int)v6, 22);
    v13 = *(_QWORD *)v12 >> 32;
    v14 = *(_QWORD *)v12;
    v15 = BlockState::getMask(v12);
    v30 = *((_BYTE *)v6 + 4);
    v16 = &v30;
    v17 = v7 & ~v15 | (7 << (v14 + 1 - v13));
    return BlockSource::setBlockAndData((int)v5, v4, v16, v17, 2, 0);
  }
  v18 = (unsigned __int64 *)Block::getBlockState((int)v6, 22);
  v19 = (v7 >> (*v18 + 1 - (*v18 >> 32))) & (0xFu >> (4 - (*v18 >> 32)));
  if ( v19 >= 1 )
    v20 = (BlockState *)Block::getBlockState((int)v6, 22);
    v21 = *(_QWORD *)v20;
    v22 = BlockState::getMask(v20);
    v29 = *((_BYTE *)v6 + 4);
    v16 = &v29;
    v17 = v7 & ~v22 | (((_BYTE)v19 - 1) << (v21 + 1 - BYTE4(v21)));
  v24 = *((_DWORD *)v4 + 1);
  v25 = *((_DWORD *)v4 + 2);
  v34 = *(_DWORD *)v4;
  v35 = v24 + 1;
  v36 = v25;
  v26 = BlockSource::getBlock(v5, (const BlockPos *)&v34);
  v27 = v26;
  result = (*(int (**)(void))(*(_DWORD *)v26 + 52))();
  if ( result != 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v27 + 56))(v27);
    if ( !result )
    {
      v28 = *(_BYTE *)(Block::mDirt + 4);
      result = BlockSource::setBlock((int)v5, v4, &v28, 3);
    }
  return result;
}


signed int __fastcall FarmBlock::getVariant(FarmBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  signed int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 22);
  v4 = (v2 >> (*v3 + 1 - (*v3 >> 32))) & (0xFu >> (4 - (*v3 >> 32)));
  result = 0;
  if ( v4 < 1 )
    result = 1;
  return result;
}


int __fastcall FarmBlock::isUnderCrops(FarmBlock *this, BlockSource *a2, const BlockPos *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  int v5; // r4@1
  int result; // r0@2
  __int64 v7; // [sp+4h] [bp-14h]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v3 = *(_QWORD *)a3;
  v4 = *((_DWORD *)a3 + 2);
  v7 = v3 + 0x100000000LL;
  v8 = v4;
  v5 = BlockSource::getBlock(a2, (const BlockPos *)&v7);
  if ( (*(int (**)(void))(*(_DWORD *)v5 + 52))() )
    result = 1;
  else
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 56))(v5);
  return result;
}


int __fastcall FarmBlock::FarmBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void (__fastcall *v7)(int, _DWORD *, int *); // r3@1
  void (__fastcall *v8)(int, char *); // r2@1
  char v10; // [sp+0h] [bp-20h]@1
  int v11; // [sp+4h] [bp-1Ch]@1
  signed int v12; // [sp+8h] [bp-18h]@1
  signed int v13; // [sp+Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(1);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270AE28;
  Block::setTicking((Block *)v3, 1);
  v7 = *(void (__fastcall **)(int, _DWORD *, int *))(*(_DWORD *)v3 + 452);
  v11 = 1065353216;
  v12 = 1064304640;
  v13 = 1065353216;
  v7(v3, &Vec3::ZERO, &v11);
  v8 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v3 + 456);
  v10 = Brightness::MAX;
  v8(v3, &v10);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  return v3;
}


int __fastcall FarmBlock::getAABB(FarmBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  AABB *v7; // r4@1
  const BlockPos *v8; // r5@1
  char v10; // [sp+Ch] [bp-1Ch]@1

  v7 = a4;
  v8 = a3;
  AABB::set((unsigned int)a4, 0LL, 1.0, 1.0, 1.0);
  Vec3::Vec3((int)&v10, (int)v8);
  return AABB::move(v7, (const Vec3 *)&v10);
}


int __fastcall FarmBlock::neighborChanged(FarmBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r1@1
  int v7; // r2@1
  Material *v8; // r0@1
  int result; // r0@1
  char v10; // [sp+0h] [bp-20h]@2
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1

  v4 = a3;
  v5 = a2;
  Block::neighborChanged(this, a2, a3, a4);
  v6 = *((_DWORD *)v4 + 1);
  v7 = *((_DWORD *)v4 + 2);
  v11 = *(_DWORD *)v4;
  v12 = v6 + 1;
  v13 = v7;
  v8 = (Material *)BlockSource::getMaterial(v5, (const BlockPos *)&v11);
  result = Material::isSolid(v8);
  if ( result == 1 )
  {
    v10 = *(_BYTE *)(Block::mDirt + 4);
    result = BlockSource::setBlock((int)v5, v4, &v10, 3);
  }
  return result;
}


int __fastcall FarmBlock::onFallOn(FarmBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, float a5)
{
  Entity *v9; // r4@1
  BlockPos *v10; // r5@1
  BlockSource *v11; // r6@1
  Block *v12; // r7@1
  __int16 v13; // r0@2
  Level *v14; // r0@3
  Level *v15; // r0@4
  char *v16; // r0@4
  Level *v18; // r0@7
  unsigned __int64 *v19; // r0@7
  float v21; // [sp+0h] [bp-28h]@0
  char v22; // [sp+4h] [bp-24h]@8

  __asm { VLDR            S16, [SP,#0x28+arg_0] }
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = this;
  if ( a4 )
  {
    v13 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a4 + 488))(a4);
    if ( EntityClassTree::isMob(v13) == 1 )
    {
      v14 = (Level *)BlockSource::getLevel(v11);
      if ( !Level::isClientSide(v14) )
      {
        v15 = (Level *)BlockSource::getLevel(v11);
        v16 = Level::getRandom(v15);
        _R0 = Random::_genRandInt32((Random *)v16);
        __asm
        {
          VMOV            S0, R0
          VLDR            D1, =2.32830644e-10
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D1
          VMOV.F32        S2, #-0.5
          VCVT.F32.F64    S0, D0
          VADD.F32        S2, S16, S2
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          if ( Entity::hasType((int)v9, 319)
            || (v18 = (Level *)BlockSource::getLevel(v11),
                v19 = (unsigned __int64 *)Level::getGameRules(v18),
                GameRules::getBool(v19, (int **)&GameRules::MOB_GRIEFING) == 1) )
          {
            v22 = *(_BYTE *)(Block::mDirt + 4);
            BlockSource::setBlock((int)v11, v10, &v22, 3);
          }
      }
    }
  }
  __asm { VSTR            S16, [SP,#0x28+var_28] }
  return Block::onFallOn(v12, v11, v10, v9, v21);
}
