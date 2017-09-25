

signed int __fastcall MelonFeature::place(MelonFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  BlockSource *v5; // r5@1
  signed int v6; // r7@1
  char v7; // r11@2
  char v8; // r9@2
  char v9; // r8@2
  char v10; // r10@2
  unsigned int v11; // r6@2
  char v12; // r0@2
  int v13; // r2@2
  int v14; // r3@2
  MelonFeature *v16; // [sp+4h] [bp-54h]@1
  const BlockPos *v17; // [sp+Ch] [bp-4Ch]@1
  char v18; // [sp+14h] [bp-44h]@4
  char v19; // [sp+15h] [bp-43h]@4
  unsigned __int8 v20; // [sp+18h] [bp-40h]@3
  unsigned int v21; // [sp+1Ch] [bp-3Ch]@3
  int v22; // [sp+20h] [bp-38h]@3
  int v23; // [sp+24h] [bp-34h]@3
  unsigned int v24; // [sp+28h] [bp-30h]@2
  int v25; // [sp+2Ch] [bp-2Ch]@2
  int v26; // [sp+30h] [bp-28h]@2

  v16 = this;
  v4 = a4;
  v5 = a2;
  v6 = 64;
  v17 = a3;
  do
  {
    v7 = j_Random::_genRandInt32(v4);
    v8 = j_Random::_genRandInt32(v4);
    v9 = j_Random::_genRandInt32(v4);
    v10 = j_Random::_genRandInt32(v4);
    v11 = j_Random::_genRandInt32(v4) & 7;
    v12 = j_Random::_genRandInt32(v4);
    v13 = *((_DWORD *)v17 + 1);
    v14 = *((_DWORD *)v17 + 2);
    v24 = v11 - (v12 & 7) + *(_DWORD *)v17;
    v25 = (v9 & 3) - (v10 & 3) + v13;
    v26 = (v7 & 7) - (v8 & 7) + v14;
    if ( (*(int (**)(void))(*(_DWORD *)Block::mMelon + 224))() == 1 )
    {
      v21 = v24;
      v22 = v25 - 1;
      v23 = v26;
      BlockSource::getBlockID((BlockSource *)&v20, v5, (int)&v21);
      if ( v20 == *(_BYTE *)(Block::mGrass + 4) )
      {
        v18 = *(_BYTE *)(Block::mMelon + 4);
        v19 = 0;
        Feature::_setBlockAndData(v16, v5, (const BlockPos *)&v24, (const FullBlock *)&v18);
      }
    }
    --v6;
  }
  while ( v6 );
  return 1;
}


void __fastcall MelonFeature::~MelonFeature(MelonFeature *this)
{
  MelonFeature::~MelonFeature(this);
}


void __fastcall MelonFeature::~MelonFeature(MelonFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}
