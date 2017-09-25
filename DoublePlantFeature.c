

void __fastcall DoublePlantFeature::~DoublePlantFeature(DoublePlantFeature *this)
{
  DoublePlantFeature::~DoublePlantFeature(this);
}


void __fastcall DoublePlantFeature::~DoublePlantFeature(DoublePlantFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall DoublePlantFeature::place(DoublePlantFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  BlockSource *v5; // r11@1
  Random *v6; // r4@1
  signed int v7; // r10@1
  char v8; // ST1C_1@2
  char v9; // r6@2
  char v10; // r5@2
  char v11; // r8@2
  char v12; // r9@2
  char v13; // r0@2
  int v14; // r2@2
  int v15; // r3@2
  char v17; // [sp+10h] [bp-40h]@1
  const BlockPos *v18; // [sp+18h] [bp-38h]@1
  int v19; // [sp+20h] [bp-30h]@2
  int v20; // [sp+24h] [bp-2Ch]@2
  int v21; // [sp+28h] [bp-28h]@2

  v5 = a2;
  v6 = a4;
  v7 = 64;
  v18 = a3;
  v17 = 0;
  do
  {
    v8 = Random::_genRandInt32(v6);
    v9 = Random::_genRandInt32(v6);
    v10 = Random::_genRandInt32(v6);
    v11 = Random::_genRandInt32(v6);
    v12 = Random::_genRandInt32(v6);
    v13 = Random::_genRandInt32(v6);
    v14 = *((_DWORD *)v18 + 1);
    v15 = *((_DWORD *)v18 + 2);
    v19 = (v12 & 7) - (v13 & 7) + *(_DWORD *)v18;
    v20 = (v10 & 3) - (v11 & 3) + v14;
    v21 = (v8 & 7) - (v9 & 7) + v15;
    if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v19) == 1
      && v20 < *((_WORD *)v5 + 12) - 2
      && (*(int (**)(void))(*(_DWORD *)Block::mDoublePlant + 224))() == 1 )
    {
      DoublePlantBlock::placeAt((DoublePlantBlock *)Block::mDoublePlant, v5, (const BlockPos *)&v19, a5, 2, 0, 0);
      v17 = 1;
    }
    --v7;
  }
  while ( v7 );
  return v17 & 1;
}
