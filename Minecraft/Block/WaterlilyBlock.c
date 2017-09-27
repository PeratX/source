

int __fastcall WaterlilyBlock::WaterlilyBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1
  signed int v17; // [sp+10h] [bp-18h]@1
  signed int v18; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(8);
  BushBlock::BushBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2717108;
  v16 = 1065353216;
  v17 = 1015021568;
  v18 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v16);
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
    VSTR            S0, [SP,#0x28+var_24]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


signed int __fastcall WaterlilyBlock::getColor(WaterlilyBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return 0xFFFFFF;
}


signed int __fastcall WaterlilyBlock::getColor(WaterlilyBlock *this, int a2)
{
  return 0xFFFFFF;
}


void __fastcall WaterlilyBlock::~WaterlilyBlock(WaterlilyBlock *this)
{
  WaterlilyBlock::~WaterlilyBlock(this);
}


signed int __fastcall WaterlilyBlock::entityInside(WaterlilyBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  BlockSource *v4; // r5@1
  WaterlilyBlock *v6; // r6@1
  BlockPos *v7; // r4@1
  signed int result; // r0@1
  __int16 v13; // [sp+Ch] [bp-1Ch]@2

  v4 = a2;
  _R7 = a4;
  v6 = this;
  v7 = a3;
  result = Entity::hasCategory((int)a4, 131328);
  if ( result == 1 )
  {
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R7,#0x6C]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R7,#0x6C]
      VLDR            S2, [R7,#0x70]
      VSTR            S2, [R7,#0x70]
      VLDR            S2, [R7,#0x74]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R7,#0x74]
    }
    (*(void (__fastcall **)(WaterlilyBlock *, BlockSource *, BlockPos *, _DWORD))(*(_DWORD *)v6 + 276))(v6, v4, v7, 0);
    v13 = FullBlock::AIR;
    result = BlockSource::setBlockAndData((int)v4, v7, (int)&v13, 3, 0);
  }
  return result;
}


void __fastcall WaterlilyBlock::~WaterlilyBlock(WaterlilyBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall WaterlilyBlock::canSurvive(WaterlilyBlock *this, BlockSource *a2, const BlockPos *a3)
{
  signed int v3; // r0@1
  int v4; // r3@3
  int v5; // r2@3
  Block *v6; // r4@3
  int *v7; // r0@4
  unsigned __int64 *v8; // r0@5
  int v9; // r0@5
  char v10; // r1@5
  unsigned int v11; // r1@5
  unsigned int v12; // r2@5
  signed int result; // r0@5
  int *v14; // r0@9
  int v15; // [sp+0h] [bp-18h]@3
  int v16; // [sp+4h] [bp-14h]@3
  int v17; // [sp+8h] [bp-10h]@3
  unsigned __int8 v18; // [sp+Ch] [bp-Ch]@3
  unsigned __int8 v19; // [sp+Dh] [bp-Bh]@5

  v3 = *((_DWORD *)a3 + 1);
  if ( v3 < 0 || v3 >= *((_WORD *)a2 + 12) )
  {
    result = 0;
  }
  else
    v4 = *(_DWORD *)a3;
    v5 = *((_DWORD *)a3 + 2);
    v15 = v4;
    v16 = v3 - 1;
    v17 = v5;
    BlockSource::getBlockAndData((BlockSource *)&v18, a2, (int)&v15);
    v6 = (Block *)Block::mBlocks[v18];
    if ( v6 && (v7 = (int *)Block::getMaterial((Block *)Block::mBlocks[v18]), Material::isType(v7, 5) == 1) )
    {
      v8 = (unsigned __int64 *)Block::getBlockState((int)v6, 21);
      v10 = *v8;
      v9 = *v8 >> 32;
      v11 = (unsigned int)v19 >> (v10 + 1 - v9);
      v12 = 0xFu >> (4 - v9);
      result = 0;
      if ( !(v11 & v12) )
        result = 1;
    }
    else
      v14 = (int *)Block::getMaterial(v6);
      result = Material::isType(v14, 18);
  return result;
}
