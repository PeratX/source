

signed int __fastcall RedstoneTorchBlock::getTickDelay(RedstoneTorchBlock *this)
{
  return 2;
}


RedstoneTorchCapacitor *__fastcall RedstoneTorchBlock::installCircuit(RedstoneTorchBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r6@1
  RedstoneTorchBlock *v5; // r4@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  RedstoneTorchCapacitor *result; // r0@1
  Dimension *v10; // r0@2
  CircuitSystem *v11; // r0@2
  int v12; // r7@2
  unsigned __int64 *v13; // r4@3
  unsigned int v14; // r1@3
  unsigned int v15; // r0@4
  RedstoneTorchCapacitor *v16; // r4@7
  bool v17; // r1@8
  unsigned __int8 v18; // [sp+0h] [bp-20h]@8

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = (RedstoneTorchCapacitor *)Level::isClientSide(v8);
  if ( !result )
  {
    v10 = (Dimension *)BlockSource::getDimension(v4);
    v11 = (CircuitSystem *)Dimension::getCircuitSystem(v10);
    v12 = (int)v11;
    result = (RedstoneTorchCapacitor *)CircuitSystem::isAvailableAt(v11, v7);
    if ( !result )
    {
      v13 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
      v14 = (0xFu >> (4 - (*v13 >> 32))) & (BlockSource::getData(v4, v7) >> (*v13 + 1 - (*v13 >> 32)));
      if ( v14 - 1 >= 3 )
      {
        LOBYTE(v15) = 0;
        if ( v14 == 4 )
          LOBYTE(v15) = 3;
      }
      else
        v15 = 0x20504u >> (8 * (v14 - 1) & 0xF8);
      result = (RedstoneTorchCapacitor *)CircuitSystem::create<RedstoneTorchCapacitor>(v12, v7, (int)v4, (char)v15);
      v16 = result;
      if ( result )
        BlockSource::getBlockID((BlockSource *)&v18, v4, (int)v7);
        v17 = 0;
        if ( v18 == *(_BYTE *)(Block::mLitRedStoneTorch + 4) )
          v17 = 1;
        result = (RedstoneTorchCapacitor *)RedstoneTorchCapacitor::setOn(v16, v17, v6);
    }
  }
  return result;
}


void __fastcall RedstoneTorchBlock::~RedstoneTorchBlock(RedstoneTorchBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


RedstoneTorchCapacitor *__fastcall RedstoneTorchBlock::onPlace(RedstoneTorchBlock *this, BlockSource *a2, const BlockPos *a3)
{
  RedstoneTorchBlock *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 188))();
  return j_j_j__ZNK18RedstoneTorchBlock14installCircuitER11BlockSourceRK8BlockPosb(v3, v5, v4, 0);
}


int __fastcall RedstoneTorchBlock::RedstoneTorchBlock(int a1, const void **a2, int a3, char a4)
{
  char v4; // r5@1
  int v5; // r4@1

  v4 = a4;
  v5 = a1;
  TorchBlock::TorchBlock(a1, a2, a3);
  *(_DWORD *)v5 = &off_2712490;
  *(_BYTE *)(v5 + 641) = v4;
  Block::setTicking((Block *)v5, 0);
  *(_DWORD *)(v5 + 20) = 8;
  return v5;
}


int __fastcall RedstoneTorchBlock::onRedstoneUpdate(RedstoneTorchBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r5@1
  int v6; // r6@1
  const BlockPos *v7; // r4@1
  Level *v8; // r0@1
  int result; // r0@1
  char v10; // r8@2
  Dimension *v11; // r0@2
  int v12; // r7@2
  int v13; // r1@3
  char *v14; // r2@4
  unsigned int v15; // r0@6
  int v16; // r6@9
  char v17; // [sp+14h] [bp-34h]@4
  char v18; // [sp+18h] [bp-30h]@10
  char v19; // [sp+1Ch] [bp-2Ch]@9
  unsigned __int8 v20; // [sp+28h] [bp-20h]@2

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    v10 = BlockSource::getData(v5, v7);
    BlockSource::getBlockID((BlockSource *)&v20, v5, (int)v7);
    v11 = (Dimension *)BlockSource::getDimension(v5);
    v12 = Dimension::getCircuitSystem(v11);
    *(_BYTE *)v12 = 1;
    if ( v6 )
    {
      v13 = *(_BYTE *)(Block::mLitRedStoneTorch + 4);
      if ( v20 != v13 )
      {
        v14 = &v17;
        v17 = *(_BYTE *)(Block::mLitRedStoneTorch + 4);
LABEL_11:
        BlockSource::setBlockAndData((int)v5, v7, v14, v10, 3, 0);
        goto LABEL_12;
      }
    }
    else if ( v20 != *(_BYTE *)(Block::mUnlitRedStoneTorch + 4) )
      v15 = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(v12 + 4), v7, 0x4D435443uLL);
      if ( v15 || (v15 = CircuitSceneGraph::getFromPendingAdd((CircuitSceneGraph *)(v12 + 4), v7, 0x4D435443uLL)) != 0 )
        if ( *(_DWORD *)(v15 + 56) >= 16 )
        {
          v16 = BlockSource::getLevel(v5);
          Vec3::Vec3((int)&v19, (int)v7);
          Level::playSynchronizedSound(v16, (int)v5, 27, (int)&v19, -1, 1, 0, 0);
        }
      v14 = &v18;
      v18 = *(_BYTE *)(Block::mUnlitRedStoneTorch + 4);
      goto LABEL_11;
LABEL_12:
    result = 0;
    *(_BYTE *)v12 = 0;
  }
  return result;
}


int __fastcall RedstoneTorchBlock::animateTick(RedstoneTorchBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  RedstoneTorchBlock *v4; // r4@1
  Random *v5; // r6@1
  int result; // r0@1
  BlockSource *v8; // r5@1
  int v9; // r8@2
  unsigned __int64 *v10; // r4@2
  unsigned int v11; // r0@2
  unsigned int v16; // r10@2
  int v17; // r4@2
  unsigned __int64 v18; // kr00_8@2
  float *v24; // r2@3
  float v25; // [sp+Ch] [bp-84h]@4
  float v26; // [sp+18h] [bp-78h]@7
  float v27; // [sp+24h] [bp-6Ch]@6
  float v28; // [sp+30h] [bp-60h]@5
  float v29; // [sp+3Ch] [bp-54h]@3

  v4 = this;
  v5 = a4;
  result = *((_BYTE *)this + 641);
  _R7 = a3;
  v8 = a2;
  if ( result )
  {
    v9 = BlockSource::getLevel(a2);
    v10 = (unsigned __int64 *)Block::getBlockState((int)v4, 15);
    v11 = BlockSource::getData(v8, _R7);
    __asm { VLDR            S0, [R7] }
    v16 = v11;
    v18 = *v10;
    v17 = *v10 >> 32;
    __asm { VCVT.F32.S32    S16, S0 }
    _R0 = Random::_genRandInt32(v5);
    __asm { VMOV            S0, R0 }
    _R5 = *((_DWORD *)_R7 + 1);
    __asm { VCVT.F64.U32    D9, S0 }
    __asm
    {
      VMOV            S0, R0
      VLDR            D11, =2.32830644e-10
      VCVT.F64.U32    D10, S0
    }
    _R7 = *((_DWORD *)_R7 + 2);
      VLDR            S14, =0.7
      VMUL.F64        D1, D9, D11
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D11
      VMUL.F64        D2, D10, D11
      VMOV.F32        S6, #-0.5
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VMOV            S10, R5
      VMOV            S12, R7
      VCVT.F32.S32    S10, S10
      VMOV.F32        S8, #0.5
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S6
      VADD.F32        S0, S0, S6
      VLDR            S6, =0.2
      VCVT.F32.S32    S12, S12
      VADD.F32        S10, S10, S14
      VADD.F32        S1, S16, S8
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VMUL.F32        S0, S0, S6
      VADD.F32        S8, S12, S8
      VADD.F32        S2, S1, S2
      VADD.F32        S4, S10, S4
      VADD.F32        S0, S8, S0
    switch ( (v16 >> (1 - v17 + v18)) & (0xFu >> (4 - v17)) )
      case 1u:
        __asm { VLDR            S6, =-0.27; jumptable 018D289E case 1 }
        v24 = &v29;
        __asm
        {
          VLDR            S8, =0.22
          VADD.F32        S2, S2, S6
          VADD.F32        S4, S4, S8
          VSTR            S2, [SP,#0x90+var_54]
          VSTR            S4, [SP,#0x90+var_50]
          VSTR            S0, [SP,#0x90+var_4C]
        }
        break;
      case 2u:
        __asm { VLDR            S6, =0.27; jumptable 018D289E case 2 }
        v24 = &v28;
          VSTR            S2, [SP,#0x90+var_60]
          VSTR            S4, [SP,#0x90+var_5C]
          VSTR            S0, [SP,#0x90+var_58]
      case 3u:
        __asm { VLDR            S6, =0.22; jumptable 018D289E case 3 }
        v24 = &v27;
          VLDR            S8, =-0.27
          VADD.F32        S4, S4, S6
          VADD.F32        S0, S0, S8
          VSTR            S2, [SP,#0x90+var_6C]
          VSTR            S4, [SP,#0x90+var_68]
          VSTR            S0, [SP,#0x90+var_64]
      case 4u:
        __asm { VLDR            S6, =0.22; jumptable 018D289E case 4 }
        v24 = &v26;
          VLDR            S8, =0.27
          VSTR            S2, [SP,#0x90+var_78]
          VSTR            S4, [SP,#0x90+var_74]
          VSTR            S0, [SP,#0x90+var_70]
      default:
        v24 = &v25;
          VSTR            S2, [SP,#0x90+var_84]
          VSTR            S4, [SP,#0x90+var_80]
          VSTR            S0, [SP,#0x90+var_7C]
    result = Level::addParticle(v9, 10, (int)v24);
  }
  return result;
}


void __fastcall RedstoneTorchBlock::~RedstoneTorchBlock(RedstoneTorchBlock *this)
{
  RedstoneTorchBlock::~RedstoneTorchBlock(this);
}


signed int __fastcall RedstoneTorchBlock::shouldConnectToRedstone(RedstoneTorchBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}
