

int __fastcall MutatedBirchForest::getTreeFeature(MutatedBirchForest *this, Random *a2)
{
  MutatedBirchForest *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r2@1
  int v5; // r1@1

  v2 = this;
  v3 = Random::_genRandInt32(a2);
  v4 = *((_DWORD *)v2 + 31);
  v5 = v4 + 120;
  if ( v3 & 0x8000000 )
    v5 = v4 + 196;
  return v5;
}


void __fastcall MutatedBirchForest::~MutatedBirchForest(MutatedBirchForest *this)
{
  MutatedBirchForest::~MutatedBirchForest(this);
}


_DWORD *__fastcall MutatedBirchForest::MutatedBirchForest(int a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)MutatedBiome::MutatedBiome(a1, a2, a3);
  *result = &off_2704148;
  return result;
}


void __fastcall MutatedBirchForest::~MutatedBirchForest(MutatedBirchForest *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}
