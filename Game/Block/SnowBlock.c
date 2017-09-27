

int __fastcall SnowBlock::SnowBlock(int a1, const void **a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1
  __int64 v7; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(21);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_27140E8;
  v7 = *(_QWORD *)(v3 + 24);
  LODWORD(v7) = v7 | 0x82000;
  *(_QWORD *)(v3 + 24) = v7;
  *(_DWORD *)(v3 + 40) = 1055286886;
  return v3;
}


void __fastcall SnowBlock::~SnowBlock(SnowBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall SnowBlock::waterSpreadCausesSpawn(SnowBlock *this)
{
  return 0;
}


void __fastcall SnowBlock::~SnowBlock(SnowBlock *this)
{
  SnowBlock::~SnowBlock(this);
}


signed int __fastcall SnowBlock::getResourceCount(SnowBlock *this, Random *a2, int a3, int a4)
{
  return 4;
}


signed int __fastcall SnowBlock::getCollisionShape(SnowBlock *this, AABB *a2, BlockSource *a3, const BlockPos *_R3, Entity *a5)
{
  __int64 v9; // r0@1
  float v13; // [sp+0h] [bp-18h]@0
  float v14; // [sp+4h] [bp-14h]@0
  float v15; // [sp+8h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [R3]
    VMOV.F32        S6, #1.0
    VLDR            S2, [R3,#4]
  }
  LODWORD(v9) = a2;
    VLDR            S4, [R3,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMOV            R12, S0
    VMOV            R2, S2
    VMOV            R3, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S4, S4, S6
    VADD.F32        S2, S2, S6
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  HIDWORD(v9) = _R12;
  AABB::set(v9, _R2, v13, v14, v15);
  return 1;
}


signed int __fastcall SnowBlock::calcGroundFriction(SnowBlock *this, Mob *a2, const BlockPos *a3)
{
  return 1058642330;
}
