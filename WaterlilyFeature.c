

signed int __fastcall WaterlilyFeature::place(WaterlilyFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  BlockSource *v5; // r7@1
  signed int v6; // r11@1
  char v7; // ST10_1@2
  char v8; // ST0C_1@2
  char v9; // r9@2
  char v10; // r8@2
  char v11; // r10@2
  char v12; // r0@2
  int v13; // r2@2
  int v14; // r3@2
  WaterlilyFeature *v16; // [sp+0h] [bp-48h]@1
  const BlockPos *v17; // [sp+8h] [bp-40h]@1
  char v18; // [sp+14h] [bp-34h]@4
  char v19; // [sp+15h] [bp-33h]@4
  int v20; // [sp+18h] [bp-30h]@2
  int v21; // [sp+1Ch] [bp-2Ch]@2
  int v22; // [sp+20h] [bp-28h]@2

  v16 = this;
  v4 = a4;
  v5 = a2;
  v6 = 10;
  v17 = a3;
  do
  {
    v7 = j_Random::_genRandInt32(v4);
    v8 = j_Random::_genRandInt32(v4);
    v9 = j_Random::_genRandInt32(v4);
    v10 = j_Random::_genRandInt32(v4);
    v11 = j_Random::_genRandInt32(v4);
    v12 = j_Random::_genRandInt32(v4);
    v13 = *((_DWORD *)v17 + 1);
    v14 = *((_DWORD *)v17 + 2);
    v20 = (v11 & 7) - (v12 & 7) + *(_DWORD *)v17;
    v21 = (v9 & 3) - (v10 & 3) + v13;
    v22 = (v7 & 7) - (v8 & 7) + v14;
    if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v20) == 1
      && (*(int (**)(void))(*(_DWORD *)Block::mWaterlily + 224))() == 1 )
    {
      v18 = *(_BYTE *)(Block::mWaterlily + 4);
      v19 = 0;
      Feature::_setBlockAndData(v16, v5, (const BlockPos *)&v20, (const FullBlock *)&v18);
    }
    --v6;
  }
  while ( v6 );
  return 1;
}


void __fastcall WaterlilyFeature::~WaterlilyFeature(WaterlilyFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall WaterlilyFeature::~WaterlilyFeature(WaterlilyFeature *this)
{
  WaterlilyFeature::~WaterlilyFeature(this);
}
