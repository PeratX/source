

void __fastcall PumpkinFeature::~PumpkinFeature(PumpkinFeature *this)
{
  PumpkinFeature::~PumpkinFeature(this);
}


void __fastcall PumpkinFeature::~PumpkinFeature(PumpkinFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall PumpkinFeature::place(PumpkinFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  BlockSource *v5; // r11@1
  signed int v6; // r8@1
  char v7; // r5@2
  char v8; // r9@2
  char v9; // ST10_1@2
  char v10; // r10@2
  char v11; // r7@2
  char v12; // r0@2
  int v13; // r2@2
  int v14; // r3@2
  char v15; // r5@5
  char v16; // r0@5
  PumpkinFeature *v18; // [sp+0h] [bp-58h]@1
  const BlockPos *v19; // [sp+Ch] [bp-4Ch]@1
  char v20; // [sp+14h] [bp-44h]@5
  char v21; // [sp+15h] [bp-43h]@5
  unsigned __int8 v22; // [sp+18h] [bp-40h]@3
  int v23; // [sp+1Ch] [bp-3Ch]@3
  int v24; // [sp+20h] [bp-38h]@3
  int v25; // [sp+24h] [bp-34h]@3
  int v26; // [sp+28h] [bp-30h]@2
  int v27; // [sp+2Ch] [bp-2Ch]@2
  int v28; // [sp+30h] [bp-28h]@2

  v18 = this;
  v4 = a4;
  v5 = a2;
  v6 = 64;
  v19 = a3;
  do
  {
    v7 = j_Random::_genRandInt32(v4);
    v8 = j_Random::_genRandInt32(v4);
    v9 = j_Random::_genRandInt32(v4);
    v10 = j_Random::_genRandInt32(v4);
    v11 = j_Random::_genRandInt32(v4);
    v12 = j_Random::_genRandInt32(v4);
    v13 = *((_DWORD *)v19 + 1);
    v14 = *((_DWORD *)v19 + 2);
    v26 = *(_DWORD *)v19 + (v7 & 7) - (v8 & 7);
    v27 = (v11 & 3) - (v12 & 3) + v13;
    v28 = (v9 & 7) - (v10 & 7) + v14;
    if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v26) == 1 )
    {
      v23 = v26;
      v24 = v27 - 1;
      v25 = v28;
      BlockSource::getBlockID((BlockSource *)&v22, v5, (int)&v23);
      if ( v22 == *(_BYTE *)(Block::mGrass + 4) && (*(int (**)(void))(*(_DWORD *)Block::mPumpkin + 224))() == 1 )
      {
        v15 = *(_BYTE *)(Block::mPumpkin + 4);
        v16 = j_Random::_genRandInt32(v4);
        v20 = v15;
        v21 = v16 & 3;
        Feature::_setBlockAndData(v18, v5, (const BlockPos *)&v26, (const FullBlock *)&v20);
      }
    }
    --v6;
  }
  while ( v6 );
  return 1;
}
