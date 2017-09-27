

AABB *__fastcall SoulSandBlock::getAABB(SoulSandBlock *this, BlockSource *a2, const BlockPos *_R2, AABB *a4, int a5, bool a6, int a7)
{
  AABB *v11; // r4@1
  float v15; // [sp+0h] [bp-18h]@0
  float v16; // [sp+4h] [bp-14h]@0
  float v17; // [sp+8h] [bp-10h]@0

  __asm { VLDR            S0, [R2] }
  v11 = a4;
  __asm
  {
    VLDR            S2, [R2,#4]
    VMOV.F32        S6, #1.0
    VLDR            S4, [R2,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  }
  LODWORD(_R0) = a4;
    VCVT.F32.S32    S4, S4
    VMOV.F32        S8, #0.875
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S4, S4, S6
    VADD.F32        S2, S2, S8
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  AABB::set(_R0, _R2, v15, v16, v17);
  return v11;
}


void __fastcall SoulSandBlock::entityInside(SoulSandBlock *this, BlockSource *a2, const BlockPos *a3, Entity *_R3)
{
  __asm
  {
    VLDR            S0, =0.4
    VLDR            S2, [R3,#0x6C]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R3,#0x6C]
    VLDR            S2, [R3,#0x74]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R3,#0x74]
  }
}


void __fastcall SoulSandBlock::~SoulSandBlock(SoulSandBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall SoulSandBlock::~SoulSandBlock(SoulSandBlock *this)
{
  SoulSandBlock::~SoulSandBlock(this);
}


_DWORD *__fastcall SoulSandBlock::SoulSandBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(14);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_27142E8;
  return v3;
}


int __fastcall SoulSandBlock::checkIsPathable(SoulSandBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  SoulSandBlock *v4; // r4@1
  const BlockPos *v5; // r5@1
  const BlockPos *v6; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  int result; // r0@2
  int v10; // [sp+0h] [bp-20h]@1
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  unsigned __int8 v13; // [sp+Ch] [bp-14h]@1

  v4 = this;
  v5 = a4;
  v6 = (const BlockPos *)Entity::getRegion(a2);
  v7 = *((_DWORD *)v5 + 1);
  v8 = *((_DWORD *)v5 + 2);
  v10 = *(_DWORD *)v5;
  v11 = v7 + 1;
  v12 = v8;
  BlockSource::getBlockID((BlockSource *)&v13, v6, (int)&v10);
  if ( v13 == BlockID::AIR )
    result = 1;
  else
    result = Material::getBlocksMotion(*((Material **)v4 + 14)) ^ 1;
  return result;
}


void __fastcall SoulSandBlock::entityInside(SoulSandBlock *this, BlockSource *a2, const BlockPos *a3, Entity *_R3)
{
  SoulSandBlock::entityInside(this, a2, a3, _R3);
}
