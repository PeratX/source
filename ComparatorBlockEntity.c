

int __fastcall ComparatorBlockEntity::ComparatorBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Comparator");
  BlockEntity::BlockEntity(v3, 12, v2);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_27095B4;
  *(_DWORD *)(v3 + 104) = 0;
  return v3;
}


signed int __fastcall ComparatorBlockEntity::save(ComparatorBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ComparatorBlockEntity *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::save(this, a2);
  sub_21E94B4((void **)&v8, "OutputSignal");
  CompoundTag::putInt((int)v2, (const void **)&v8, *((_DWORD *)v3 + 26));
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  return 1;
}


int __fastcall ComparatorBlockEntity::setOutputSignal(ComparatorBlockEntity *this, int a2)
{
  if ( a2 > 15 )
    a2 = 15;
  *((_DWORD *)this + 26) = a2;
  return j_j_j__ZN11BlockEntity10setChangedEv_0(this);
}


void __fastcall ComparatorBlockEntity::load(ComparatorBlockEntity *this, const CompoundTag *a2)
{
  ComparatorBlockEntity::load(this, a2);
}


void __fastcall ComparatorBlockEntity::load(ComparatorBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ComparatorBlockEntity *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v7, "OutputSignal");
  *((_DWORD *)v3 + 26) = CompoundTag::getInt((int)v2, (const void **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall ComparatorBlockEntity::tick(ComparatorBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  ComparatorBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  Dimension *v5; // r0@2
  unsigned int v6; // r7@3
  unsigned __int64 *v7; // r0@3
  int v8; // r6@3
  Block *v9; // r7@3
  int v10; // r10@3
  int v11; // r3@4
  char *v12; // r2@4
  int (__fastcall *v13)(Block *, BlockSource *, char *, int); // r6@4
  BlockSource *v14; // r1@4
  Block *v15; // r0@4
  int v16; // r8@5
  signed int v17; // r6@5
  int v18; // r7@8
  Dimension *v19; // r0@11
  int v20; // r0@11
  CircuitSceneGraph *v21; // r7@11
  ComparatorCapacitor *v22; // r0@11
  char v24; // [sp+4h] [bp-3Ch]@8
  char v25; // [sp+10h] [bp-30h]@3

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v4) )
    return BlockEntity::tick(v3, v2);
  v5 = (Dimension *)BlockSource::getDimension(v2);
  if ( Dimension::isRedstoneTick(v5) )
  v6 = BlockSource::getData(v2, (ComparatorBlockEntity *)((char *)v3 + 32));
  v7 = (unsigned __int64 *)Block::getBlockState(Block::mPoweredComparator, 12);
  v8 = Direction::DIRECTION_FACING[(0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32)))];
  BlockPos::relative((BlockPos *)&v25, (int)v3 + 32, v8, 1);
  v9 = (Block *)BlockSource::getBlock(v2, (const BlockPos *)&v25);
  v10 = v8;
  if ( (*(int (**)(void))(*(_DWORD *)v9 + 368))() == 1 )
  {
    BlockSource::getData(v2, (const BlockPos *)&v25);
    v11 = v8;
    v12 = &v25;
    v13 = *(int (__fastcall **)(Block *, BlockSource *, char *, int))(*(_DWORD *)v9 + 372);
    v14 = v2;
    v15 = v9;
  }
  else
    if ( Block::isSolidBlockingBlock(v9) != 1
      || (*(int (__fastcall **)(Block *))(*(_DWORD *)v9 + 100))(v9)
      || (BlockPos::relative((BlockPos *)&v24, (int)&v25, v8, 1),
          v18 = BlockSource::getBlock(v2, (const BlockPos *)&v24),
          (*(int (**)(void))(*(_DWORD *)v18 + 368))() != 1) )
    {
      v17 = 0;
      v16 = 0;
      goto LABEL_11;
    }
    BlockSource::getData(v2, (const BlockPos *)&v24);
    v12 = &v24;
    v13 = *(int (__fastcall **)(Block *, BlockSource *, char *, int))(*(_DWORD *)v18 + 372);
    v15 = (Block *)v18;
  v16 = v13(v15, v14, v12, v11);
  v17 = 1;
LABEL_11:
  v19 = (Dimension *)BlockSource::getDimension(v2);
  v20 = Dimension::getCircuitSystem(v19);
  v21 = (CircuitSceneGraph *)(v20 + 4);
  v22 = (ComparatorCapacitor *)CircuitSceneGraph::getComponent(
                                 (CircuitSceneGraph *)(v20 + 4),
                                 (ComparatorBlockEntity *)((char *)v3 + 32),
                                 0x4D434352uLL);
  if ( v22
    || (v22 = (ComparatorCapacitor *)CircuitSceneGraph::getFromPendingAdd(
                                       v21,
                                       (ComparatorBlockEntity *)((char *)v3 + 32),
                                       0x4D434352uLL)) != 0 )
    if ( v17 == 1 )
      ComparatorCapacitor::setAnalogStrength(v22, v16, v10);
    else
      ComparatorCapacitor::clearAnalogStrength(v22, v10);
  return BlockEntity::tick(v3, v2);
}


void __fastcall ComparatorBlockEntity::~ComparatorBlockEntity(ComparatorBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ComparatorBlockEntity::~ComparatorBlockEntity(ComparatorBlockEntity *this)
{
  ComparatorBlockEntity::~ComparatorBlockEntity(this);
}
