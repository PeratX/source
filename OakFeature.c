

signed int __fastcall OakFeature::place(OakFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  TreeFeature *v5; // r7@1
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r6@1
  unsigned int v8; // kr00_4@1

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = Random::_genRandInt32(a4);
  return TreeFeature::place(v5, v7, v6, v4, v8 % 3 | 4);
}


void __fastcall OakFeature::~OakFeature(OakFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall OakFeature::~OakFeature(OakFeature *this)
{
  OakFeature::~OakFeature(this);
}
