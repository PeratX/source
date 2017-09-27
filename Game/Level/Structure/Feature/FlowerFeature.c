

void __fastcall FlowerFeature::~FlowerFeature(FlowerFeature *this)
{
  FlowerFeature::~FlowerFeature(this);
}


signed int __fastcall FlowerFeature::place(FlowerFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  char v5; // [sp+4h] [bp-Ch]@1
  char v6; // [sp+5h] [bp-Bh]@1

  v5 = *((_BYTE *)this + 12);
  v6 = *((_BYTE *)this + 13);
  FlowerFeature::_placeMushroom(this, a2, (int)a3, (FullBlock *)&v5, a4);
  return 1;
}


int __fastcall FlowerFeature::FlowerFeature(Feature *a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718AA0;
  *(_BYTE *)(result + 12) = *v2;
  *(_BYTE *)(result + 13) = 0;
  return result;
}


int __fastcall FlowerFeature::_placeMushroom(Random *a1, BlockSource *a2, int a3, FullBlock *a4, Random *a5)
{
  BlockSource *v5; // r7@1
  signed int v6; // r6@1
  char v7; // r4@2
  char v8; // r10@2
  char v9; // r8@2
  char v10; // r9@2
  char v11; // r11@2
  char v12; // r0@2
  int v13; // r2@2
  int v14; // r3@2
  int v15; // r4@3
  signed int v16; // r8@6
  int v17; // r0@6
  Random *v19; // [sp+Ch] [bp-4Ch]@1
  const FullBlock *v20; // [sp+10h] [bp-48h]@1
  int v21; // [sp+18h] [bp-40h]@1
  int v22; // [sp+1Ch] [bp-3Ch]@3
  int v23; // [sp+20h] [bp-38h]@3
  int v24; // [sp+24h] [bp-34h]@3
  int v25; // [sp+28h] [bp-30h]@2
  int v26; // [sp+2Ch] [bp-2Ch]@2
  int v27; // [sp+30h] [bp-28h]@2

  v19 = a1;
  v5 = a2;
  v6 = 64;
  v20 = a4;
  v21 = a3;
  do
  {
    v7 = Random::_genRandInt32(a5);
    v8 = Random::_genRandInt32(a5);
    v9 = Random::_genRandInt32(a5);
    v10 = Random::_genRandInt32(a5);
    v11 = Random::_genRandInt32(a5);
    v12 = Random::_genRandInt32(a5);
    v13 = *(_DWORD *)(v21 + 4);
    v14 = *(_DWORD *)(v21 + 8);
    v25 = (v11 & 7) - (v12 & 7) + *(_DWORD *)v21;
    v26 = (v9 & 3) - (v10 & 3) + v13;
    v27 = (v7 & 7) - (v8 & 7) + v14;
    if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v25) == 1 )
    {
      v22 = v25;
      v23 = v26 - 1;
      v24 = v27;
      v15 = BlockSource::getBlock(v5, (const BlockPos *)&v22);
      if ( *(_BYTE *)(v15 + 4) )
      {
        if ( Block::isType((Block *)v15, (const Block *)Block::mPodzol) == 1 )
        {
          BlockSource::getHeightmap(v5, (const BlockPos *)&v25);
LABEL_9:
          Feature::_setBlockAndData(v19, v5, (const BlockPos *)&v25, v20);
          goto LABEL_10;
        }
        v16 = Block::isType((Block *)v15, (const Block *)Block::mMycelium);
        v17 = BlockSource::getHeightmap(v5, (const BlockPos *)&v25);
        if ( v16 || v17 > v26 && (*(int (**)(void))(*(_DWORD *)Block::mBlocks[*(_BYTE *)v20] + 228))() == 1 )
          goto LABEL_9;
      }
    }
LABEL_10:
    --v6;
  }
  while ( v6 );
  return 1;
}


void __fastcall FlowerFeature::~FlowerFeature(FlowerFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall FlowerFeature::placeFlower(Random *a1, BlockSource *a2, int a3, FullBlock *a4, Random *a5)
{
  BlockSource *v5; // r7@1
  signed int v6; // r11@1
  char v7; // ST14_1@2
  char v8; // r4@2
  char v9; // r8@2
  char v10; // r9@2
  char v11; // r10@2
  char v12; // r0@2
  int v13; // r2@2
  int v14; // r3@2
  Random *v16; // [sp+4h] [bp-44h]@1
  const FullBlock *v17; // [sp+Ch] [bp-3Ch]@1
  int v18; // [sp+10h] [bp-38h]@1
  int v19; // [sp+18h] [bp-30h]@2
  int v20; // [sp+1Ch] [bp-2Ch]@2
  int v21; // [sp+20h] [bp-28h]@2

  v17 = a4;
  v18 = a3;
  v16 = a1;
  v5 = a2;
  v6 = 64;
  do
  {
    v7 = Random::_genRandInt32(a5);
    v8 = Random::_genRandInt32(a5);
    v9 = Random::_genRandInt32(a5);
    v10 = Random::_genRandInt32(a5);
    v11 = Random::_genRandInt32(a5);
    v12 = Random::_genRandInt32(a5);
    v13 = *(_DWORD *)(v18 + 4);
    v14 = *(_DWORD *)(v18 + 8);
    v19 = (v11 & 7) - (v12 & 7) + *(_DWORD *)v18;
    v20 = (v9 & 3) - (v10 & 3) + v13;
    v21 = (v7 & 7) - (v8 & 7) + v14;
    if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v19) == 1
      && (*(int (**)(void))(*(_DWORD *)Block::mBlocks[*(_BYTE *)v17] + 324))() == 1 )
    {
      Feature::_setBlockAndData(v16, v5, (const BlockPos *)&v19, v17);
    }
    --v6;
  }
  while ( v6 );
  return 1;
}
