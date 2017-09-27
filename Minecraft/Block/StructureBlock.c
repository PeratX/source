

int __fastcall StructureBlock::StructureBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(4);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_27158EC;
  *(_DWORD *)(v3 + 24) = 0x1000000;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 32;
  Block::setIsInteraction((Block *)v3, 1);
  return v3;
}


int __fastcall StructureBlock::getResourceCount(StructureBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


void __fastcall StructureBlock::~StructureBlock(StructureBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall StructureBlock::use(StructureBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r4@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@1
  BlockSource *v7; // r0@2
  int v8; // r0@2
  BlockEntity *v9; // r5@2
  void (__fastcall *v10)(Entity *, char *); // r6@4
  char *v11; // r0@4

  v4 = a2;
  v5 = a3;
  v6 = (Level *)Entity::getLevel(a2);
  if ( !Level::isClientSide(v6) )
  {
    v7 = (BlockSource *)Entity::getRegion(v4);
    v8 = BlockSource::getBlockEntity(v7, v5);
    v9 = (BlockEntity *)v8;
    if ( v8 )
    {
      if ( BlockEntity::isType(v8, 32) == 1 )
      {
        v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v4 + 1364);
        v11 = BlockEntity::getPosition(v9);
        v10(v4, v11);
      }
    }
  }
  return 1;
}


signed int __fastcall StructureBlock::isInteractiveBlock(StructureBlock *this)
{
  return 1;
}


StructureBlockEntity *__fastcall StructureBlock::onRedstoneUpdate(StructureBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  StructureBlockEntity *result; // r0@1
  int v6; // r6@1
  const BlockPos *v7; // r4@1
  BlockSource *v8; // r5@1
  StructureBlockEntity *v9; // r7@2
  int v10; // r3@4

  result = (StructureBlockEntity *)a5;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( !a5 )
  {
    result = (StructureBlockEntity *)BlockSource::getBlockEntity(a2, a3);
    v9 = result;
    if ( result )
    {
      result = (StructureBlockEntity *)BlockEntity::isType((int)result, 32);
      if ( result == (StructureBlockEntity *)1 )
      {
        v10 = 0;
        if ( v6 > 0 )
          v10 = 1;
        result = (StructureBlockEntity *)j_j_j__ZN20StructureBlockEntity10setPoweredER11BlockSourceRK8BlockPosb_0(
                                           v9,
                                           v8,
                                           v7,
                                           v10);
      }
    }
  }
  return result;
}


int __fastcall StructureBlock::onLoaded(StructureBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ConsumerComponent>(v8, v4, (int)v3, 0);
    if ( result )
      *(_BYTE *)(result + 41) = 1;
  }
  return result;
}


void __fastcall StructureBlock::~StructureBlock(StructureBlock *this)
{
  StructureBlock::~StructureBlock(this);
}
