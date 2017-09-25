

void __fastcall BirchFeature::~BirchFeature(BirchFeature *this)
{
  BirchFeature::~BirchFeature(this);
}


void __fastcall BirchFeature::~BirchFeature(BirchFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall BirchFeature::place(BirchFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  BirchFeature *v5; // r7@1
  const BlockPos *v6; // r8@1
  BlockSource *v7; // r6@1
  int v8; // r5@1

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = Random::_genRandInt32(a4) % 3 + 5;
  if ( *((_BYTE *)v5 + 21) )
    v8 += Random::_genRandInt32(v4) % 7;
  return TreeFeature::place(v5, v7, v6, v4, v8);
}


int __fastcall BirchFeature::BirchFeature(TreeFeature *a1, Entity *a2, char a3)
{
  char v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = TreeFeature::TreeFeature(a1, a2, 2, 2, 0);
  *(_DWORD *)result = &off_27189C4;
  *(_BYTE *)(result + 21) = v3;
  return result;
}
