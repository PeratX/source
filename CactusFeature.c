

void __fastcall CactusFeature::~CactusFeature(CactusFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall CactusFeature::~CactusFeature(CactusFeature *this)
{
  CactusFeature::~CactusFeature(this);
}


signed int __fastcall CactusFeature::place(CactusFeature *this, BlockSource *a2, __int64 a3)
{
  Feature *v3; // r10@1
  BlockSource *v4; // r6@1
  int v5; // r0@1
  char v6; // r7@2
  char v7; // ST0C_1@2
  char v8; // ST08_1@2
  char v9; // r5@2
  char v10; // r8@2
  char v11; // r0@2
  int v12; // r2@2
  int v13; // r3@2
  unsigned int v14; // r8@3
  unsigned int v15; // r8@3
  int v16; // r4@3
  int (*v17)(void); // r5@4
  bool v18; // nf@6
  unsigned __int8 v19; // vf@6
  __int64 v21; // [sp+0h] [bp-24h]@1
  int v22; // [sp+10h] [bp-14h]@2
  char v23; // [sp+14h] [bp-10h]@5
  char v24; // [sp+15h] [bp-Fh]@5
  int v25; // [sp+18h] [bp-Ch]@5
  int v26; // [sp+1Ch] [bp-8h]@5
  int v27; // [sp+20h] [bp-4h]@5
  int v28; // [sp+24h] [bp+0h]@4
  int v29; // [sp+28h] [bp+4h]@4
  int v30; // [sp+2Ch] [bp+8h]@4
  int v31; // [sp+30h] [bp+Ch]@2
  int v32; // [sp+34h] [bp+10h]@2
  int v33; // [sp+38h] [bp+14h]@2

  v3 = this;
  v4 = a2;
  v21 = a3;
  v5 = 0;
  do
  {
    v22 = v5;
    v6 = Random::_genRandInt32((Random *)HIDWORD(v21));
    v7 = Random::_genRandInt32((Random *)HIDWORD(v21));
    v8 = Random::_genRandInt32((Random *)HIDWORD(v21));
    v9 = Random::_genRandInt32((Random *)HIDWORD(v21));
    v10 = Random::_genRandInt32((Random *)HIDWORD(v21));
    v11 = Random::_genRandInt32((Random *)HIDWORD(v21));
    v12 = *(_DWORD *)(v21 + 4);
    v13 = *(_DWORD *)(v21 + 8);
    v31 = (v10 & 7) - (v11 & 7) + *(_DWORD *)v21;
    v32 = (v8 & 3) - (v9 & 3) + v12;
    v33 = (v6 & 7) - (v7 & 7) + v13;
    if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v31) == 1 )
    {
      v14 = Random::_genRandInt32((Random *)HIDWORD(v21)) % 3 + 1;
      v15 = Random::_genRandInt32((Random *)HIDWORD(v21)) % v14;
      v16 = 0;
      do
      {
        v17 = *(int (**)(void))(*(_DWORD *)Block::mCactus + 324);
        v28 = v31;
        v29 = v16 + v32;
        v30 = v33;
        if ( v17() == 1 )
        {
          v25 = v31;
          v26 = v16 + v32;
          v27 = v33;
          v23 = *(_BYTE *)(Block::mCactus + 4);
          v24 = 0;
          Feature::_setBlockAndData(v3, v4, (const BlockPos *)&v25, (const FullBlock *)&v23);
        }
        v19 = __OFSUB__(v16, v15);
        v18 = ((v16++ - v15) & 0x80000000) != 0;
      }
      while ( v18 ^ v19 );
    }
    v5 = v22 + 1;
  }
  while ( v22 != 9 );
  return 1;
}
