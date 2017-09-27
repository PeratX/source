

int __fastcall SeaLanternBlock::SeaLanternBlock(int a1, const void **a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(16);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_27134E8;
  *(_DWORD *)(v3 + 60) = 1065353216;
  *(_DWORD *)(v3 + 64) = 1065353216;
  *(_DWORD *)(v3 + 68) = 1065353216;
  *(_DWORD *)(v3 + 72) = 1065353216;
  return v3;
}


void __fastcall SeaLanternBlock::~SeaLanternBlock(SeaLanternBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall SeaLanternBlock::canBeSilkTouched(SeaLanternBlock *this)
{
  return 1;
}


void __fastcall SeaLanternBlock::~SeaLanternBlock(SeaLanternBlock *this)
{
  SeaLanternBlock::~SeaLanternBlock(this);
}


int __fastcall SeaLanternBlock::getSpawnResourcesAuxValue(SeaLanternBlock *this, int a2)
{
  return a2;
}


unsigned int __fastcall SeaLanternBlock::getResourceCount(SeaLanternBlock *this, Random *a2, int a3, int a4)
{
  return Random::_genRandInt32(a2) & 1 | 2;
}
