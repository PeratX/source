

signed int __fastcall TallGrassFeature::place(TallGrassFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4, __int64 a5)
{
  BlockSource *v5; // r4@1
  int v6; // r6@1
  unsigned int v7; // r9@1
  int v8; // r1@3
  unsigned int v9; // ST18_4@8
  unsigned int v10; // ST1C_4@8
  char v11; // r7@8
  char v12; // r11@8
  unsigned int v13; // r8@8
  unsigned int v14; // r9@8
  unsigned int v15; // r1@8
  int v16; // r2@8
  int v17; // r5@8
  char v18; // r7@13
  char v19; // r0@13
  int v20; // r2@13
  int v21; // r3@13
  TallGrassFeature *v23; // [sp+0h] [bp-38h]@1
  FullBlock *v24; // [sp+Ch] [bp-2Ch]@7
  Random *v25; // [sp+10h] [bp-28h]@1
  const BlockPos *v26; // [sp+14h] [bp-24h]@1
  unsigned __int8 v27; // [sp+20h] [bp-18h]@8
  unsigned int v28; // [sp+24h] [bp-14h]@8
  int v29; // [sp+28h] [bp-10h]@8
  int v30; // [sp+2Ch] [bp-Ch]@8
  char v31; // [sp+30h] [bp-8h]@3
  char v32; // [sp+34h] [bp-4h]@1
  int v33; // [sp+38h] [bp+0h]@1
  int v34; // [sp+3Ch] [bp+4h]@1
  int v35; // [sp+40h] [bp+8h]@1

  v25 = a4;
  v26 = a3;
  v5 = a2;
  v23 = this;
  v33 = *(_DWORD *)a3;
  v34 = *((_DWORD *)a3 + 1);
  v7 = HIDWORD(a5);
  v6 = a5;
  v35 = *((_DWORD *)a3 + 2);
  v32 = BlockID::AIR;
  while ( 1 )
  {
    BlockSource::getBlockID((BlockSource *)&v31, v5, (int)&v33);
    v32 = v31;
    if ( v31 )
    {
      if ( BlockID::hasProperty(&v32, v8, 32, 0) != 1 )
        break;
    }
    if ( v34 <= 0 )
      break;
    --v34;
  }
  if ( (signed int)a5 >= 1 )
    v24 = (TallGrassFeature *)((char *)v23 + 12);
    if ( HIDWORD(a5) )
      do
      {
        v9 = j_Random::_genRandInt32(v25);
        v10 = j_Random::_genRandInt32(v25);
        v11 = j_Random::_genRandInt32(v25);
        v12 = j_Random::_genRandInt32(v25);
        v13 = v7;
        v14 = j_Random::_genRandInt32(v25) % v7;
        v15 = j_Random::_genRandInt32(v25) % v13;
        v16 = *((_DWORD *)v26 + 1);
        v17 = *((_DWORD *)v26 + 2);
        v28 = v14 - v15 + *(_DWORD *)v26;
        v29 = (v11 & 3) - (v12 & 3) + v16;
        v7 = v13;
        v30 = v9 % v13 - v10 % v13 + v17;
        BlockSource::getBlockID((BlockSource *)&v27, v5, (int)&v28);
        if ( v27 == BlockID::AIR && (*(int (**)(void))(*(_DWORD *)Block::mBlocks[*(_BYTE *)v24] + 324))() == 1 )
          Feature::_setBlockAndData(v23, v5, (const BlockPos *)&v28, v24);
        --v6;
      }
      while ( v6 );
    else
        v18 = j_Random::_genRandInt32(v25);
        v19 = j_Random::_genRandInt32(v25);
        v20 = *((_DWORD *)v26 + 1);
        v21 = *((_DWORD *)v26 + 2);
        v28 = *(_DWORD *)v26;
        v29 = (v18 & 3) - (v19 & 3) + v20;
        v30 = v21;
  return 1;
}


int __fastcall TallGrassFeature::TallGrassFeature(Feature *a1, _BYTE *a2, char a3)
{
  _BYTE *v3; // r5@1
  char v4; // r4@1
  int result; // r0@1

  v3 = a2;
  v4 = a3;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718C58;
  *(_BYTE *)(result + 12) = *v3;
  *(_BYTE *)(result + 13) = v4;
  return result;
}


void __fastcall TallGrassFeature::~TallGrassFeature(TallGrassFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall TallGrassFeature::~TallGrassFeature(TallGrassFeature *this)
{
  TallGrassFeature::~TallGrassFeature(this);
}


signed int __fastcall TallGrassFeature::place(TallGrassFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  TallGrassFeature::place(this, a2, a3, a4, 34359738458LL);
  return 1;
}
