

ItemInstance *__fastcall ObserverBlock::asItemInstance(ObserverBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ItemInstance *v4; // r4@1
  BlockState *v5; // r0@1
  __int64 v6; // r5@1

  v4 = this;
  v5 = (BlockState *)Block::getBlockState((int)a2, 15);
  v6 = *(_QWORD *)v5;
  BlockState::getMask(v5);
  return ItemInstance::ItemInstance(v4, Block::mObserver, 1, (unsigned __int8)(3 << (v6 + 1 - BYTE4(v6))));
}


int __fastcall ObserverBlock::ObserverBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  FaceDirectionalBlock::FaceDirectionalBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270FE64;
  Block::setTicking((Block *)v3, 0);
  Block::setSolid((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 0x200000;
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
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


unsigned int __fastcall ObserverBlock::getVariant(ObserverBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 30);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


ProducerComponent *__fastcall ObserverBlock::onPlace(ObserverBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r10@1
  BlockSource *v4; // r5@1
  ObserverBlock *v5; // r9@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  int v8; // r7@1
  Dimension *v9; // r0@1
  int v10; // r0@1
  ProducerComponent *result; // r0@1
  ProducerComponent *v12; // r7@1
  BlockState *v13; // r0@2
  char v14; // r6@2
  signed int v15; // r4@2
  char v16; // r0@2
  LevelChunk **v17; // r0@2
  char v18; // [sp+Ch] [bp-2Ch]@2
  char v19; // [sp+10h] [bp-28h]@2
  char v20; // [sp+11h] [bp-27h]@2
  char v21; // [sp+14h] [bp-24h]@2
  char v22; // [sp+15h] [bp-23h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  v8 = (char)((0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32))));
  v9 = (Dimension *)BlockSource::getDimension(v4);
  v10 = Dimension::getCircuitSystem(v9);
  result = (ProducerComponent *)CircuitSystem::create<PulseCapacitor>(v10, v3, (int)v4, v8);
  v12 = result;
  if ( result )
  {
    ProducerComponent::allowAttachments(result, 1);
    *((_BYTE *)v12 + 41) = 1;
    BlockSource::getBlockAndData((BlockSource *)&v21, v4, (int)v3);
    v13 = (BlockState *)Block::getBlockState((int)v5, 30);
    v14 = v22;
    v15 = 1 << (*(_QWORD *)v13 + 1 - (unsigned int)(*(_QWORD *)v13 >> 32));
    v16 = BlockState::getMask(v13);
    v22 = v14 & ~v16 | v15;
    v19 = v21;
    v20 = v14 & ~v16 | v15;
    BlockSource::setBlockAndData((int)v4, v3, (int)&v19, 3, 0);
    (*(void (__fastcall **)(ProducerComponent *, signed int))(*(_DWORD *)v12 + 16))(v12, 15);
    v17 = (LevelChunk **)BlockSource::getTickQueue(v4, v3);
    v18 = *((_BYTE *)v5 + 4);
    result = BlockTickingQueue::add(v17, v4, (int)v3, &v18, 2u, 0);
  }
  return result;
}


int __fastcall ObserverBlock::tick(ObserverBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  ObserverBlock *v4; // r6@1
  BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  Dimension *v7; // r0@1
  CircuitSceneGraph *v8; // r7@1
  int result; // r0@2
  BlockState *v10; // r0@4
  int v11; // r6@4
  unsigned int v12; // r0@4
  char v13; // [sp+4h] [bp-1Ch]@4
  char v14; // [sp+5h] [bp-1Bh]@4
  char v15; // [sp+8h] [bp-18h]@1
  unsigned __int8 v16; // [sp+9h] [bp-17h]@3

  v4 = this;
  v5 = a3;
  v6 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v15, a2, (int)a3);
  v7 = (Dimension *)BlockSource::getDimension(v6);
  v8 = (CircuitSceneGraph *)(Dimension::getCircuitSystem(v7) + 4);
  if ( CircuitSceneGraph::getComponent(v8, v5, 0x4D435043uLL)
    || (result = CircuitSceneGraph::getFromPendingAdd(v8, v5, 0x4D435043uLL)) != 0 )
  {
    result = (*(int (__fastcall **)(ObserverBlock *, _DWORD))(*(_DWORD *)v4 + 424))(v4, v16);
    if ( result )
    {
      v10 = (BlockState *)Block::getBlockState((int)v4, 30);
      v11 = v16;
      v12 = v11 & ~BlockState::getMask(v10);
      v16 = v12;
      v13 = v15;
      v14 = v12;
      result = BlockSource::setBlockAndData((int)v6, v5, (int)&v13, 3, 0);
    }
  }
  return result;
}


signed int __fastcall ObserverBlock::shouldConnectToRedstone(ObserverBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ObserverBlock *v4; // r5@1
  int v5; // r4@1
  unsigned int v6; // r6@1
  unsigned __int64 *v7; // r0@1
  unsigned int v8; // r1@1
  signed int result; // r0@1

  v4 = this;
  v5 = a4;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v4, 15);
  v8 = (v6 >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32)));
  result = 0;
  if ( v8 == v5 )
    result = 1;
  return result;
}


ProducerComponent *__fastcall ObserverBlock::onLoaded(ObserverBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  ObserverBlock *v5; // r6@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  int v8; // r6@1
  Dimension *v9; // r0@1
  int v10; // r0@1
  ProducerComponent *result; // r0@1
  ProducerComponent *v12; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  v8 = (char)((0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32))));
  v9 = (Dimension *)BlockSource::getDimension(v4);
  v10 = Dimension::getCircuitSystem(v9);
  result = (ProducerComponent *)CircuitSystem::create<PulseCapacitor>(v10, v3, (int)v4, v8);
  v12 = result;
  if ( result )
  {
    ProducerComponent::allowAttachments(result, 1);
    *((_BYTE *)v12 + 41) = 1;
    result = (ProducerComponent *)(*(int (__fastcall **)(ProducerComponent *, _DWORD))(*(_DWORD *)v12 + 16))(v12, 0);
  }
  return result;
}


LevelChunk *__fastcall ObserverBlock::neighborChanged(ObserverBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r5@1
  ObserverBlock *v5; // r9@1
  const BlockPos *v6; // r7@1
  const BlockPos *v7; // r10@1
  Level *v8; // r0@1
  LevelChunk *result; // r0@1
  unsigned int v10; // r6@2
  unsigned __int64 *v11; // r0@2
  Dimension *v12; // r0@5
  CircuitSceneGraph *v13; // r7@5
  LevelChunk *v14; // r8@5
  BlockState *v15; // r0@7
  char v16; // r4@7
  signed int v17; // r7@7
  char v18; // r0@7
  LevelChunk **v19; // r0@7
  int v20; // [sp+8h] [bp-38h]@2
  LevelChunk *v21; // [sp+Ch] [bp-34h]@3
  LevelChunk *v22; // [sp+10h] [bp-30h]@4
  char v23; // [sp+14h] [bp-2Ch]@7
  char v24; // [sp+18h] [bp-28h]@7
  char v25; // [sp+19h] [bp-27h]@7
  char v26; // [sp+1Ch] [bp-24h]@7
  char v27; // [sp+1Dh] [bp-23h]@7

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = (LevelChunk *)Level::isClientSide(v8);
  if ( !result )
  {
    v10 = BlockSource::getData(v4, v7);
    v11 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
    BlockPos::neighbor(
      (BlockPos *)&v20,
      (int)v7,
      (char)((0xFu >> (4 - (*v11 >> 32))) & (v10 >> (*v11 + 1 - (*v11 >> 32)))));
    result = *(LevelChunk **)v6;
    if ( v20 == *(_DWORD *)v6 )
    {
      result = v21;
      if ( v21 == *((LevelChunk **)v6 + 1) )
      {
        result = v22;
        if ( v22 == *((LevelChunk **)v6 + 2) )
        {
          v12 = (Dimension *)BlockSource::getDimension(v4);
          v13 = (CircuitSceneGraph *)(Dimension::getCircuitSystem(v12) + 4);
          v14 = (LevelChunk *)CircuitSceneGraph::getComponent(v13, v7, 0x4D435043uLL);
          if ( v14
            || (result = (LevelChunk *)CircuitSceneGraph::getFromPendingAdd(v13, v7, 0x4D435043uLL), (v14 = result) != 0) )
          {
            BlockSource::getBlockAndData((BlockSource *)&v26, v4, (int)v7);
            v15 = (BlockState *)Block::getBlockState((int)v5, 30);
            v16 = v27;
            v17 = 1 << (*(_QWORD *)v15 + 1 - (unsigned int)(*(_QWORD *)v15 >> 32));
            v18 = BlockState::getMask(v15);
            v27 = v16 & ~v18 | v17;
            v24 = v26;
            v25 = v16 & ~v18 | v17;
            BlockSource::setBlockAndData((int)v4, v7, (int)&v24, 3, 0);
            (*(void (__fastcall **)(LevelChunk *, signed int))(*(_DWORD *)v14 + 16))(v14, 15);
            v19 = (LevelChunk **)BlockSource::getTickQueue(v4, v7);
            v23 = *((_BYTE *)v5 + 4);
            result = BlockTickingQueue::add(v19, v4, (int)v7, &v23, 2u, 0);
          }
        }
      }
    }
  }
  return result;
}


void __fastcall ObserverBlock::~ObserverBlock(ObserverBlock *this)
{
  ObserverBlock::~ObserverBlock(this);
}


void __fastcall ObserverBlock::~ObserverBlock(ObserverBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


LevelChunk *__fastcall ObserverBlock::_powerOnObserver(ObserverBlock *this, BlockSource *a2, const BlockPos *a3, PulseCapacitor *a4)
{
  ObserverBlock *v4; // r9@1
  PulseCapacitor *v5; // r10@1
  BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  BlockState *v8; // r0@1
  char v9; // r6@1
  signed int v10; // r7@1
  char v11; // r0@1
  LevelChunk **v12; // r0@1
  char v14; // [sp+Ch] [bp-2Ch]@1
  char v15; // [sp+10h] [bp-28h]@1
  char v16; // [sp+11h] [bp-27h]@1
  char v17; // [sp+14h] [bp-24h]@1
  char v18; // [sp+15h] [bp-23h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v17, a2, (int)a3);
  v8 = (BlockState *)Block::getBlockState((int)v4, 30);
  v9 = v18;
  v10 = 1 << (*(_QWORD *)v8 + 1 - (unsigned int)(*(_QWORD *)v8 >> 32));
  v11 = BlockState::getMask(v8);
  v18 = v9 & ~v11 | v10;
  v15 = v17;
  v16 = v9 & ~v11 | v10;
  BlockSource::setBlockAndData((int)v7, v6, (int)&v15, 3, 0);
  (*(void (__fastcall **)(PulseCapacitor *, signed int))(*(_DWORD *)v5 + 16))(v5, 15);
  v12 = (LevelChunk **)BlockSource::getTickQueue(v7, v6);
  v14 = *((_BYTE *)v4 + 4);
  return BlockTickingQueue::add(v12, v7, (int)v6, &v14, 2u, 0);
}
