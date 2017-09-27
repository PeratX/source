

int __fastcall AirBlock::mayPick(AirBlock *this)
{
  return 0;
}


void __fastcall AirBlock::~AirBlock(AirBlock *this)
{
  AirBlock::~AirBlock(this);
}


_DWORD *__fastcall AirBlock::getVisualShape(AirBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  return &AABB::EMPTY;
}


int __fastcall AirBlock::isWaterBlocking(AirBlock *this)
{
  return 0;
}


int __fastcall AirBlock::mayPick(AirBlock *this, BlockSource *a2, int a3, bool a4)
{
  return 0;
}


int __fastcall AirBlock::canHaveExtraData(AirBlock *this)
{
  return 0;
}


int __fastcall AirBlock::mayPlace(AirBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return 0;
}


int __fastcall AirBlock::canBeSilkTouched(AirBlock *this)
{
  return 0;
}


void __fastcall AirBlock::~AirBlock(AirBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall AirBlock::AirBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int *v11; // r2@1
  float v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  j_Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_2721E68;
  j_Block::setSolid((Block *)v5, 0);
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 20) = 3;
  *(_BYTE *)(v5 + 17) = 1;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  *(_BYTE *)(v5 + 48) = 0;
  *(_BYTE *)(v5 + 49) = 0;
  v14 = 1061997773;
  _R0 = j_Material::getTranslucency(*(Material **)(v5 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v11 = (int *)&v13;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v11 = &v14;
  Block::mTranslucency[v4] = *v11;
  *(_DWORD *)(v5 + 92) = 0;
  return v5;
}


_DWORD *__fastcall AirBlock::getVisualShape(AirBlock *this, unsigned __int8 a2, AABB *a3, bool a4)
{
  return &AABB::EMPTY;
}


_DWORD *__fastcall AirBlock::getAABB(AirBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  return &AABB::EMPTY;
}


int __fastcall AirBlock::mayPlace(AirBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  return 0;
}


int __fastcall AirBlock::isObstructingChests(AirBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return 0;
}


signed int __fastcall AirBlock::checkIsPathable(AirBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


int __fastcall AirBlock::getCollisionShape(AirBlock *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  return 0;
}


int __fastcall AirBlock::tryToPlace(AirBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  return 0;
}


int __fastcall AirBlock::playerWillDestroy(AirBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  return 0;
}
