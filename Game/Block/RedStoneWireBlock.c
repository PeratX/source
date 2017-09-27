

signed int __fastcall RedStoneWireBlock::canSurvive(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  Block *v8; // r4@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r2@2
  signed int v14; // r6@2
  int v16; // [sp+4h] [bp-34h]@2
  int v17; // [sp+8h] [bp-30h]@2
  int v18; // [sp+Ch] [bp-2Ch]@2
  int v19; // [sp+10h] [bp-28h]@1
  int v20; // [sp+14h] [bp-24h]@1
  int v21; // [sp+18h] [bp-20h]@1
  int v22; // [sp+1Ch] [bp-1Ch]@1
  int v23; // [sp+20h] [bp-18h]@1
  int v24; // [sp+24h] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v22 = v5;
  v23 = v6 - 1;
  v24 = v7;
  v8 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v22);
  v9 = *((_DWORD *)v3 + 1);
  v10 = *((_DWORD *)v3 + 2);
  v19 = *(_DWORD *)v3;
  v20 = v9 - 1;
  v21 = v10;
  if ( BlockSource::canProvideSupport(v4, (int)&v19) != 1
    || (v11 = *(_DWORD *)v3,
        v12 = *((_DWORD *)v3 + 1),
        v13 = *((_DWORD *)v3 + 2),
        v14 = 1,
        v16 = v11,
        v17 = v12 - 1,
        v18 = v13,
        !BlockSource::canProvideSupport(v4, (int)&v16)) )
  {
    if ( Block::isType(v8, (const Block *)Block::mGlowStone) )
    {
      v14 = 1;
    }
    else if ( Block::isType(v8, (const Block *)Block::mUnlitRedStoneLamp) )
    else
      v14 = Block::isType(v8, (const Block *)Block::mLitRedStoneLamp);
  }
  return v14;
}


int __fastcall RedStoneWireBlock::RedStoneWireBlock(int a1, const void **a2, int a3)
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
  v6 = Material::getMaterial(28);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2712694;
  v16 = 1065353216;
  v17 = 1031798784;
  v18 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v16);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 44) = 1032805417;
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


signed int __fastcall RedStoneWireBlock::shouldConnectToRedstone(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


void __fastcall RedStoneWireBlock::~RedStoneWireBlock(RedStoneWireBlock *this)
{
  RedStoneWireBlock::~RedStoneWireBlock(this);
}


signed int __fastcall RedStoneWireBlock::animateTick(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v5; // r8@1
  RedStoneWireBlock *v6; // r7@1
  Random *v7; // r5@1
  unsigned int v8; // r4@1
  unsigned __int64 *v9; // r0@1
  signed int result; // r0@1
  int v18; // r0@2
  float v19; // [sp+1Ch] [bp-3Ch]@2

  _R6 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = (unsigned __int64 *)Block::getBlockState((int)v6, 33);
  result = (0xFu >> (4 - (*v9 >> 32))) & (v8 >> (*v9 + 1 - (*v9 >> 32)));
  if ( result >= 1 )
  {
    _R4 = *(_DWORD *)_R6;
    _R0 = Random::_genRandInt32(v7);
    __asm
    {
      VLDR            S0, [R6,#4]
      VLDR            S2, [R6,#8]
      VCVT.F32.S32    S16, S0
      VMOV            S0, R0
      VCVT.F32.S32    S18, S2
      VCVT.F64.U32    D10, S0
    }
      VMOV            S2, R0
      VLDR            D0, =2.32830644e-10
      VMOV            S8, R4
      VCVT.F64.U32    D1, S2
      VMUL.F64        D2, D10, D0
      VMUL.F64        D0, D1, D0
      VMOV.F32        S2, #-0.5
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VMOV.F32        S6, #0.5
      VCVT.F32.S32    S8, S8
      VADD.F32        S4, S4, S2
      VADD.F32        S0, S0, S2
      VLDR            S2, =0.2
      VADD.F32        S8, S8, S6
      VMUL.F32        S4, S4, S2
      VADD.F32        S6, S18, S6
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.0625
      VADD.F32        S16, S16, S2
      VADD.F32        S18, S8, S4
      VADD.F32        S20, S6, S0
    v18 = BlockSource::getLevel(v5);
      VSTR            S18, [SP,#0x58+var_3C]
      VSTR            S16, [SP,#0x58+var_38]
      VSTR            S20, [SP,#0x58+var_34]
    result = Level::addParticle(v18, 10, (int)&v19);
  }
  return result;
}


int __fastcall RedStoneWireBlock::shouldConnectTo(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r0@1

  v4 = BlockSource::getBlock(this, a2);
  return (*(int (**)(void))(*(_DWORD *)v4 + 132))();
}


_DWORD *__fastcall RedStoneWireBlock::getAABB(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  int v9; // r0@2
  _DWORD *result; // r0@2
  char v11; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  v8 = a4;
  if ( a6 == 1 )
  {
    v9 = (*(int (__cdecl **)(RedStoneWireBlock *))(*(_DWORD *)this + 416))(this);
    *(_DWORD *)v8 = *(_DWORD *)v9;
    *((_DWORD *)v8 + 1) = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v8 + 2) = *(_DWORD *)(v9 + 8);
    *((_DWORD *)v8 + 3) = *(_DWORD *)(v9 + 12);
    *((_DWORD *)v8 + 4) = *(_DWORD *)(v9 + 16);
    *((_DWORD *)v8 + 5) = *(_DWORD *)(v9 + 20);
    *((_BYTE *)v8 + 24) = *(_BYTE *)(v9 + 24);
    Vec3::Vec3((int)&v11, (int)v7);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v11);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


int __fastcall RedStoneWireBlock::onLoaded(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2
  int v9; // r6@2
  char v10; // r0@2
  char v11; // [sp+Ch] [bp-1Ch]@2
  char v12; // [sp+10h] [bp-18h]@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    v9 = CircuitSystem::create<TransporterComponent>(v8, v4, (int)v3, 0);
    BlockSource::getBlockAndData((BlockSource *)&v12, v3, (int)v4);
    v11 = v12;
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
    result = BlockSource::setBlockAndData((int)v3, v4, &v11, v10, 3, 0);
  }
  return result;
}


void __fastcall RedStoneWireBlock::~RedStoneWireBlock(RedStoneWireBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall RedStoneWireBlock::onPlace(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  RedStoneWireBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(RedStoneWireBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


int __fastcall RedStoneWireBlock::getColor(RedStoneWireBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  float v10; // [sp+0h] [bp-18h]@3
  float v11; // [sp+4h] [bp-14h]@3
  float v12; // [sp+8h] [bp-10h]@3
  int v13; // [sp+Ch] [bp-Ch]@3

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 33);
  __asm
  {
    VLDR            S2, =0.066667
    VLDR            S4, =0.04
    VMOV.F32        S8, #-0.5
    VLDR            S6, =0.7
  }
  _R0 = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
    VLDR            S10, =-0.7
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S2, S0, S2
    VMUL.F32        S0, S0, S4
    VLDR            S4, =0.4
    VMUL.F32        S2, S2, S2
    VADD.F32        S4, S0, S4
    VLDR            S0, =0.6
    VMUL.F32        S6, S2, S6
    VMUL.F32        S0, S2, S0
    VLDR            S2, =0.3
  if ( _ZF )
    __asm { VMOVEQ.F32      S4, S2 }
  v12 = 0.0;
  v13 = 0;
  v10 = 0.0;
  v11 = 0.0;
    VSTR            S4, [SP,#0x18+var_18]
    VADD.F32        S2, S6, S8
    VADD.F32        S0, S0, S10
    VCMPE.F32       S2, #0.0
    VSTR            S2, [SP,#0x18+var_14]
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, #0.0
    VSTR            S0, [SP,#0x18+var_10]
  if ( _NF ^ _VF )
    v11 = 0.0;
  __asm { VMRS            APSR_nzcv, FPSCR }
    v12 = 0.0;
  return Color::toARGB((Color *)&v10);
}


int __fastcall RedStoneWireBlock::onRedstoneUpdate(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r5@1
  char v6; // r6@1
  BlockPos *v7; // r4@1
  Level *v8; // r0@1
  int result; // r0@1
  char v10; // [sp+8h] [bp-18h]@2
  char v11; // [sp+Ch] [bp-14h]@2

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    BlockSource::getBlockAndData((BlockSource *)&v11, v5, (int)v7);
    v10 = v11;
    result = BlockSource::setBlockAndData((int)v5, v7, &v10, v6, 3, 0);
  }
  return result;
}


int __fastcall RedStoneWireBlock::neighborChanged(RedStoneWireBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r5@1
  RedStoneWireBlock *v5; // r6@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  int result; // r0@1

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v7);
  if ( !result )
  {
    result = (*(int (__fastcall **)(RedStoneWireBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 324))(
               v5,
               v4,
               v6);
    if ( !result )
    {
      (*(void (__fastcall **)(RedStoneWireBlock *, BlockSource *, const BlockPos *, _DWORD))(*(_DWORD *)v5 + 276))(
        v5,
        v4,
        v6,
        0);
      result = j_j_j__ZN11BlockSource11removeBlockERK8BlockPos_0(v4, v6);
    }
  }
  return result;
}
