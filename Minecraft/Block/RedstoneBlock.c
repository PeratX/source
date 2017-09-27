

_DWORD *__fastcall RedstoneBlock::RedstoneBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(4);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_2711E90;
  return v3;
}


void __fastcall RedstoneBlock::~RedstoneBlock(RedstoneBlock *this)
{
  RedstoneBlock::~RedstoneBlock(this);
}


void __fastcall RedstoneBlock::~RedstoneBlock(RedstoneBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall RedstoneBlock::shouldConnectToRedstone(RedstoneBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


signed int __fastcall RedstoneBlock::isSignalSource(RedstoneBlock *this)
{
  return 1;
}


int __fastcall RedstoneBlock::onLoaded(RedstoneBlock *this, BlockSource *a2, const BlockPos *a3)
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
    result = CircuitSystem::create<ProducerComponent>(v8, v4, (int)v3, 6);
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 16))();
  }
  return result;
}
