

signed int __fastcall CakeBlock::checkIsPathable(CakeBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


int __fastcall CakeBlock::canBeSilkTouched(CakeBlock *this)
{
  return 0;
}


signed int __fastcall CakeBlock::hasComparatorSignal(CakeBlock *this)
{
  return 1;
}


unsigned int __fastcall CakeBlock::getComparatorSignal(CakeBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  BlockSource *v5; // r5@1
  const BlockPos *v6; // r4@1
  unsigned __int64 *v7; // r6@1

  v5 = a2;
  v6 = a3;
  v7 = (unsigned __int64 *)Block::getBlockState((int)this, 4);
  return 2 * (7 - ((BlockSource::getData(v5, v6) >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32)))));
}


int __fastcall CakeBlock::CakeBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(26);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_27052C0;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  Block::setIsInteraction((Block *)v3, 1);
  return v3;
}


void __fastcall CakeBlock::~CakeBlock(CakeBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall CakeBlock::~CakeBlock(CakeBlock *this)
{
  CakeBlock::~CakeBlock(this);
}


int __fastcall CakeBlock::mayPlace(CakeBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  CakeBlock *v6; // r6@1
  int result; // r0@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( Block::mayPlace(this, a2, a3, a4) == 1 )
    result = (*(int (__fastcall **)(CakeBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v6 + 324))(v6, v5, v4);
  else
    result = 0;
  return result;
}


int __fastcall CakeBlock::canSurvive(CakeBlock *this, BlockSource *a2, const BlockPos *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  Material *v5; // r0@1
  __int64 v7; // [sp+4h] [bp-14h]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v3 = *(_QWORD *)a3;
  v4 = *((_DWORD *)a3 + 2);
  v7 = v3 - 0x100000000LL;
  v8 = v4;
  v5 = (Material *)BlockSource::getMaterial(a2, (const BlockPos *)&v7);
  return Material::isSolid(v5);
}


AABB *__fastcall CakeBlock::getVisualShape(CakeBlock *this, int a2, AABB *a3, bool a4)
{
  unsigned int v4; // r5@1
  AABB *v5; // r4@1
  unsigned __int64 *v6; // r0@1

  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState((int)this, 4);
  __asm { VLDR            S2, =0.0625 }
  _R0 = 2 * ((0xFu >> (4 - (*v6 >> 32))) & (v4 >> (*v6 + 1 - (*v6 >> 32)))) | 1;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  }
  LODWORD(_R0) = v5;
    VMUL.F32        S0, S0, S2
    VMOV            R1, S0
  AABB::set(_R0, 4431542033332568064LL, 0.9375, 0.5, 0.9375);
  return v5;
}


int __fastcall CakeBlock::getResourceCount(CakeBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall CakeBlock::neighborChanged(CakeBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  CakeBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  int v8; // r7@2
  char v9; // [sp+Ch] [bp-24h]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v8 = BlockSource::getLevel(v6);
    Vec3::Vec3((int)&v9, (int)v5);
    Level::broadcastDimensionEvent(v8, v6, 2001, (int)&v9, *((_BYTE *)v4 + 4));
    result = BlockSource::removeBlock(v6, v5);
  }
  return result;
}


signed int __fastcall CakeBlock::use(CakeBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r6@1
  CakeBlock *v5; // r7@1
  const BlockPos *v6; // r4@1
  const BlockPos *v7; // r8@1
  unsigned __int64 *v8; // r0@3
  signed int v9; // r5@3
  BlockState *v10; // r0@5
  int v11; // r3@5
  unsigned __int8 v12; // r5@5
  int v13; // r7@5
  char v14; // r0@5
  char v16; // [sp+8h] [bp-20h]@5
  char v17; // [sp+9h] [bp-1Fh]@5
  char v18; // [sp+Ch] [bp-1Ch]@3
  unsigned __int8 v19; // [sp+Dh] [bp-1Bh]@3

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (const BlockPos *)Entity::getRegion(a2);
  if ( !Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INVULNERABLE) && Player::isHungry(v4) == 1 )
  {
    Player::eat(v4, 2, 0.1);
    BlockSource::getBlockAndData((BlockSource *)&v18, v7, (int)v6);
    v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 4);
    v9 = (v19 >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)));
    if ( v9 < 6 )
    {
      v10 = (BlockState *)Block::getBlockState((int)v5, 4);
      v11 = v9 + 1;
      v12 = v19;
      v13 = v11 << (*(_QWORD *)v10 + 1 - (unsigned int)(*(_QWORD *)v10 >> 32));
      v14 = BlockState::getMask(v10);
      v19 = v12 & ~v14 | v13;
      v16 = v18;
      v17 = v12 & ~v14 | v13;
      BlockSource::setBlockAndData((int)v7, v6, (int)&v16, 3, (int)v4);
    }
    else
      BlockSource::removeBlock(v7, *(_DWORD *)v6, *((_DWORD *)v6 + 1), *((_DWORD *)v6 + 2));
  }
  return 1;
}
