

void __fastcall BushBlock::~BushBlock(BushBlock *this)
{
  BushBlock::~BushBlock(this);
}


_DWORD *__fastcall BushBlock::getAABB(BushBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r4@1
  AABB *v8; // r5@1
  int v9; // r0@2
  AABB *v10; // r5@2
  _DWORD *result; // r0@2
  char v12; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  v8 = a4;
  if ( a6 == 1 )
  {
    v9 = (*(int (__cdecl **)(BushBlock *))(*(_DWORD *)this + 416))(this);
    v10 = (AABB *)j_AABB::set(v8, (const Vec3 *)v9, (const Vec3 *)(v9 + 12));
    j_Vec3::Vec3((int)&v12, (int)v7);
    result = (_DWORD *)j_AABB::move(v10, (const Vec3 *)&v12);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


int __fastcall BushBlock::checkAlive(BushBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BushBlock *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int result; // r0@1
  int v7; // r0@2
  int v8; // r7@5
  void (__fastcall *v9)(BushBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@6
  unsigned int v10; // r0@6
  __int16 v11; // [sp+8h] [bp-28h]@6
  char v12; // [sp+Ch] [bp-24h]@5

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v7 = *((_BYTE *)v3 + 4);
    if ( v7 == *(_BYTE *)(Block::mTallgrass + 4)
      || v7 == *(_BYTE *)(Block::mDoublePlant + 4)
      || v7 == *(_BYTE *)(Block::mDeadBush + 4) )
    {
      v8 = j_BlockSource::getLevel(v5);
      j_Vec3::Vec3((int)&v12, (int)v4);
      j_Level::broadcastDimensionEvent(v8, v5, 2001, (int)&v12, *((_BYTE *)v3 + 4));
    }
    v9 = *(void (__fastcall **)(BushBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v3 + 276);
    v10 = j_BlockSource::getData(v5, v4);
    v9(v3, v5, v4, v10);
    v11 = FullBlock::AIR;
    result = j_BlockSource::setBlockAndData((int)v5, v4, (int)&v11, 3, 0);
  }
  return result;
}


int __fastcall BushBlock::BushBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  void (__fastcall *v6)(int, int *, int *); // r3@1
  int v7; // r2@1
  int *v13; // r2@1
  float v15; // [sp+0h] [bp-30h]@1
  int v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+8h] [bp-28h]@1
  signed int v18; // [sp+Ch] [bp-24h]@1
  signed int v19; // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@1
  int v21; // [sp+18h] [bp-18h]@1
  signed int v22; // [sp+1Ch] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  j_Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_2722AA0;
  j_Block::setTicking((Block *)v5, 1);
  v6 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v5 + 452);
  v20 = 1050253722;
  v21 = 0;
  v22 = 1050253722;
  v17 = 1060320051;
  v18 = 1058642330;
  v19 = 1060320051;
  v6(v5, &v20, &v17);
  j_Block::setSolid((Block *)v5, 0);
  v7 = v5 + 20;
  *(_DWORD *)v7 = 5;
  *(_DWORD *)(v7 + 4) = 0x2000000;
  *(_DWORD *)(v7 + 8) = 0;
  v16 = 1061997773;
  _R0 = j_Material::getTranslucency(*(Material **)(v5 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v13 = (int *)&v15;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x30+var_30]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v13 = &v16;
  Block::mTranslucency[v4] = *v13;
  return v5;
}


signed int __fastcall BushBlock::growCrops(BushBlock *this, BlockSource *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  BlockSource *v4; // r8@1
  ItemUseCallback *v5; // r9@1
  const BlockPos *v6; // r11@1
  BushBlock *v7; // r10@1
  __int64 *v8; // r5@1
  unsigned int v9; // r6@1
  __int64 v10; // r4@1
  Level *v11; // r0@1
  char *v12; // r0@1
  unsigned int v13; // r0@1
  char v14; // r7@1
  unsigned int v15; // r0@1
  char v16; // r5@1
  int v18; // r1@6
  int v19; // r2@6
  int v20; // r3@6
  int v21; // r1@7
  int v22; // r2@7
  int v23; // r3@7
  char v24; // [sp+10h] [bp-30h]@6
  char v25; // [sp+14h] [bp-2Ch]@1
  char v26; // [sp+15h] [bp-2Bh]@3
  char v27; // [sp+18h] [bp-28h]@1
  char v28; // [sp+19h] [bp-27h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (__int64 *)j_Block::getBlockState((int)this, 17);
  v9 = j_BlockSource::getData(v4, v6);
  v10 = *v8;
  v11 = (Level *)j_BlockSource::getLevel(v4);
  v12 = j_Level::getRandom(v11);
  v13 = j_Random::_genRandInt32((Random *)v12);
  v14 = *((_BYTE *)v7 + 4);
  v27 = v14;
  v25 = v14;
  v28 = (v9 >> (1 - BYTE4(v10) + v10)) & (0xFu >> (4 - BYTE4(v10)));
  v15 = v13 % 3 + ((v9 >> (1 - BYTE4(v10) + v10)) & (0xFu >> (4 - BYTE4(v10))));
  v16 = v15 + 2;
  if ( (signed int)(v15 + 2) > 7 )
    v16 = 7;
  v26 = v16;
  if ( v5 )
  {
    if ( (*(int (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)v5 + 16))(
           v5,
           v6,
           &v27,
           &v25) )
    {
      return 0;
    }
    v21 = *(_DWORD *)v6;
    v22 = *((_DWORD *)v6 + 1);
    v23 = *((_DWORD *)v6 + 2);
    v24 = *((_BYTE *)v7 + 4);
    j_BlockSource::setBlockAndData((int)v4, v21, v22, v23, &v24, v16, 3);
    (*(void (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)v5 + 20))(
      v5,
      v6,
      &v27,
      &v25);
  }
  else
    v18 = *(_DWORD *)v6;
    v19 = *((_DWORD *)v6 + 1);
    v20 = *((_DWORD *)v6 + 2);
    v24 = v14;
    j_BlockSource::setBlockAndData((int)v4, v18, v19, v20, &v24, v16, 3);
  return 1;
}


void __fastcall BushBlock::~BushBlock(BushBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall BushBlock::mayPlaceOn(BushBlock *this, const Block *a2)
{
  Block *v2; // r4@1
  signed int result; // r0@4

  v2 = a2;
  if ( j_Block::isType(a2, (const Block *)Block::mGrass)
    || j_Block::isType(v2, (const Block *)Block::mDirt)
    || j_Block::isType(v2, (const Block *)Block::mFarmland) )
  {
    result = 1;
  }
  else
    result = j_Block::isType(v2, (const Block *)Block::mPodzol);
  return result;
}


int __fastcall BushBlock::canSurvive(BushBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BushBlock *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r2@1
  int (__fastcall *v6)(BushBlock *, int); // r5@1
  int v7; // r0@1
  __int64 v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = *(_QWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(int (__fastcall **)(BushBlock *, int))(*(_DWORD *)this + 228);
  v9 = v4 - 0x100000000LL;
  v10 = v5;
  v7 = j_BlockSource::getBlock(a2, (const BlockPos *)&v9);
  return v6(v3, v7);
}
