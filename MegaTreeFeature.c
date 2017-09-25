

int __fastcall MegaTreeFeature::_placeDoubleTrunkLeaves(MegaTreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  MegaTreeFeature *v4; // r6@1
  int result; // r0@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  unsigned int v8; // r7@2
  int v9; // r8@2
  int v10; // r9@3
  int v11; // r10@3
  int v12; // r11@3
  unsigned int v13; // r0@5
  bool v14; // cf@5
  bool v15; // zf@5
  unsigned int v16; // r1@6
  __int64 v17; // r0@10
  int v18; // r2@10
  unsigned __int8 v19; // r0@10
  int v20; // r1@11
  const Material *v21; // r0@12
  int v22; // [sp+0h] [bp-50h]@2
  int v23; // [sp+4h] [bp-4Ch]@2
  int v24; // [sp+8h] [bp-48h]@1
  int v25; // [sp+10h] [bp-40h]@3
  unsigned __int8 v26; // [sp+18h] [bp-38h]@14
  char v27; // [sp+19h] [bp-37h]@14
  unsigned __int8 v28; // [sp+1Ch] [bp-34h]@10
  unsigned __int8 v29; // [sp+1Dh] [bp-33h]@11
  __int64 v30; // [sp+20h] [bp-30h]@10
  int v31; // [sp+28h] [bp-28h]@10

  v4 = this;
  result = a4 + 2;
  v6 = a3;
  v7 = a2;
  v24 = a4 + 2;
  if ( a4 + 2 + a4 )
  {
    v8 = a4 * a4;
    v22 = 2 * a4 + 2;
    v9 = -a4;
    v23 = -a4;
    do
    {
      v10 = v9 * v9;
      v25 = (v9 - 1) * (v9 - 1);
      v11 = v23;
      v12 = v22;
      do
      {
        if ( v10 + v11 * v11 <= v8 )
          goto LABEL_19;
        v13 = v11 * v11 + v25;
        v14 = v13 >= v8;
        v15 = v13 == v8;
        if ( v13 > v8 )
        {
          v13 = v11 - 1;
          v16 = v25 + v13 * v13;
          v14 = v16 >= v8;
          v15 = v16 == v8;
        }
        if ( v15 || !v14 || v10 + v13 * v13 <= v8 )
LABEL_19:
          HIDWORD(v17) = *((_DWORD *)v6 + 1);
          v18 = *((_DWORD *)v6 + 2);
          LODWORD(v17) = *(_DWORD *)v6 + v9;
          v30 = v17;
          v31 = v11 + v18;
          Feature::_getFullBlock((Feature *)&v28, v4, v7, (const BlockPos *)&v30);
          v19 = v28;
          if ( v28 != *(_BYTE *)(Block::mLeaves + 4) || (LOBYTE(v20) = v29, v29 != *((_DWORD *)v4 + 9)) )
          {
            v21 = (const Material *)Block::getMaterial((Block *)Block::mBlocks[v28]);
            if ( TreeFeature::_isFree(v4, v21) != 1 )
              goto LABEL_15;
            v20 = *((_DWORD *)v4 + 9);
            v19 = *(_BYTE *)(Block::mLeaves + 4);
          }
          v26 = v19;
          v27 = v20;
          Feature::_setBlockAndData(v4, v7, (const BlockPos *)&v30, (const FullBlock *)&v26);
LABEL_15:
        --v12;
        ++v11;
      }
      while ( v12 );
      ++v9;
      result = v24;
    }
    while ( v9 != v24 );
  }
  return result;
}


int __fastcall MegaTreeFeature::_placeSingleTrunkLeaves(MegaTreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  MegaTreeFeature *v4; // r6@1
  int result; // r0@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  unsigned int v8; // r7@2
  int v9; // r11@2
  int v10; // r9@3 OVERLAPPED
  int v11; // r10@3 OVERLAPPED
  __int64 v12; // r0@5
  int v13; // r2@5
  const Material *v14; // r0@5
  int v15; // r1@6
  __int64 v16; // [sp+4h] [bp-44h]@2
  int v17; // [sp+Ch] [bp-3Ch]@1
  char v18; // [sp+14h] [bp-34h]@6
  char v19; // [sp+15h] [bp-33h]@6
  __int64 v20; // [sp+18h] [bp-30h]@5
  int v21; // [sp+20h] [bp-28h]@5

  v4 = this;
  result = a4 + 1;
  v6 = a3;
  v7 = a2;
  v17 = a4 + 1;
  if ( a4 + 1 + a4 )
  {
    v8 = a4 * a4;
    LODWORD(v16) = 2 * a4 | 1;
    v9 = -a4;
    HIDWORD(v16) = -a4;
    do
    {
      *(_QWORD *)&v10 = v16;
      do
      {
        if ( v9 * v9 + v11 * v11 <= v8 )
        {
          HIDWORD(v12) = *((_DWORD *)v6 + 1);
          v13 = *((_DWORD *)v6 + 2);
          LODWORD(v12) = *(_DWORD *)v6 + v9;
          v20 = v12;
          v21 = v11 + v13;
          v14 = (const Material *)Feature::_getMaterial(v4, v7, (const BlockPos *)&v20);
          if ( TreeFeature::_isFree(v4, v14) == 1 )
          {
            v15 = *((_DWORD *)v4 + 9);
            v18 = *(_BYTE *)(Block::mLeaves + 4);
            v19 = v15;
            Feature::_setBlockAndData(v4, v7, (const BlockPos *)&v20, (const FullBlock *)&v18);
          }
        }
        --v10;
        ++v11;
      }
      while ( v10 );
      ++v9;
      result = v17;
    }
    while ( v9 != v17 );
  }
  return result;
}


signed int __fastcall MegaTreeFeature::place(MegaTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
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
  v8 = j_Random::_genRandInt32(a4);
  return TreeFeature::place(v5, v7, v6, v4, v8 % 3 + 5);
}


void __fastcall MegaTreeFeature::~MegaTreeFeature(MegaTreeFeature *this)
{
  MegaTreeFeature::~MegaTreeFeature(this);
}


int __fastcall MegaTreeFeature::MegaTreeFeature(TreeFeature *a1, Entity *a2, int a3, int a4, __int64 a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int result; // r0@1

  v5 = a3;
  v6 = a4;
  result = TreeFeature::TreeFeature(a1, a2, 2, 2, 0);
  *(_DWORD *)result = &off_2718B54;
  *(_DWORD *)(result + 24) = v5;
  *(_DWORD *)(result + 28) = v6;
  *(_QWORD *)(result + 32) = a5;
  return result;
}


signed int __fastcall MegaTreeFeature::_prepareTree(MegaTreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  MegaTreeFeature *v6; // r6@1
  signed int result; // r0@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( MegaTreeFeature::_checkIsFree(this, a2, a3, a4) == 1 )
    result = MegaTreeFeature::_makeDirtFloor(v6, v5, v4);
  else
    result = 0;
  return result;
}


signed int __fastcall MegaTreeFeature::_makeDirtFloor(MegaTreeFeature *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r4@1
  Feature *v5; // r5@1
  __int64 v6; // r0@1
  int v7; // r2@1
  Block *v8; // r7@1
  signed int result; // r0@4
  signed int v10; // r1@6
  __int64 v11; // r0@8
  char v12; // [sp+4h] [bp-54h]@8
  char v13; // [sp+5h] [bp-53h]@8
  __int64 v14; // [sp+8h] [bp-50h]@8
  int v15; // [sp+10h] [bp-48h]@8
  char v16; // [sp+14h] [bp-44h]@8
  char v17; // [sp+15h] [bp-43h]@8
  __int64 v18; // [sp+18h] [bp-40h]@8
  int v19; // [sp+20h] [bp-38h]@8
  char v20; // [sp+24h] [bp-34h]@8
  char v21; // [sp+25h] [bp-33h]@8
  int v22; // [sp+28h] [bp-30h]@8
  int v23; // [sp+2Ch] [bp-2Ch]@8
  int v24; // [sp+30h] [bp-28h]@8
  char v25; // [sp+34h] [bp-24h]@8
  char v26; // [sp+35h] [bp-23h]@8
  __int64 v27; // [sp+38h] [bp-20h]@1
  int v28; // [sp+40h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  v27 = v6 - 0x100000000LL;
  v28 = v7;
  v8 = (Block *)Feature::_getBlock(v5, v4, (const BlockPos *)&v27);
  if ( Block::isType(v8, (const Block *)Block::mGrass) || Block::isType(v8, (const Block *)Block::mDirt) )
  {
    if ( *((_DWORD *)v3 + 1) < 2 )
      return 0;
LABEL_8:
    v25 = *(_BYTE *)(Block::mDirt + 4);
    v26 = 0;
    Feature::_setBlockAndData(v5, v4, (const BlockPos *)&v27, (const FullBlock *)&v25);
    v22 = v27 + 1;
    v23 = HIDWORD(v27);
    v24 = v28;
    v20 = *(_BYTE *)(Block::mDirt + 4);
    v21 = 0;
    Feature::_setBlockAndData(v5, v4, (const BlockPos *)&v22, (const FullBlock *)&v20);
    v18 = v27;
    v19 = v28 + 1;
    v16 = *(_BYTE *)(Block::mDirt + 4);
    v17 = 0;
    Feature::_setBlockAndData(v5, v4, (const BlockPos *)&v18, (const FullBlock *)&v16);
    HIDWORD(v11) = HIDWORD(v27);
    LODWORD(v11) = v27 + 1;
    v14 = v11;
    v15 = v28 + 1;
    v12 = *(_BYTE *)(Block::mDirt + 4);
    v13 = 0;
    Feature::_setBlockAndData(v5, v4, (const BlockPos *)&v14, (const FullBlock *)&v12);
    return 1;
  }
  v10 = Block::isType(v8, (const Block *)Block::mPodzol);
  result = 0;
  if ( *((_DWORD *)v3 + 1) >= 2 && !(v10 ^ 1) )
    goto LABEL_8;
  return result;
}


void __fastcall MegaTreeFeature::~MegaTreeFeature(MegaTreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall MegaTreeFeature::_checkIsFree(MegaTreeFeature *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r11@1
  signed int v6; // r0@1
  BlockSource *v7; // r5@1
  int v8; // r7@4
  char v9; // r0@4
  int v10; // r6@5
  int v11; // r9@8
  int v12; // r8@9
  int v13; // r0@10
  int v14; // r2@12
  bool v15; // nf@14
  unsigned __int8 v16; // vf@14
  int v18; // [sp+8h] [bp-38h]@3
  char v19; // [sp+Ch] [bp-34h]@12
  int v20; // [sp+10h] [bp-30h]@12
  int v21; // [sp+14h] [bp-2Ch]@12
  int v22; // [sp+18h] [bp-28h]@12

  v4 = a3;
  v5 = this;
  v6 = *((_DWORD *)a3 + 1);
  v7 = a2;
  if ( v6 < 1 )
  {
    v9 = 0;
  }
  else if ( v6 + a4 >= *((_WORD *)a2 + 12) )
  else
    v18 = a4 + 2;
    if ( a4 == -2 )
    {
      v9 = 1;
    }
    else
      v8 = 0;
      do
      {
        v10 = 2;
        if ( !v8 )
          v10 = 1;
        if ( v9 & 1 )
        {
          v11 = -v10;
          if ( v10 >= -v10 )
          {
            v12 = ~v10;
            while ( 1 )
            {
              v13 = *((_DWORD *)v4 + 1) + v8;
              if ( v13 <= -1 )
                break;
              if ( v13 >= *((_WORD *)v7 + 12) )
              v14 = *((_DWORD *)v4 + 2);
              v20 = *(_DWORD *)v4 + v11;
              v21 = v13;
              v22 = v12 + v14 + 1;
              Feature::_getBlockID((Feature *)&v19, v5, v7, (const BlockPos *)&v20);
              if ( !TreeFeature::_isFree((int)v5, &v19) )
              if ( ++v12 >= v10 )
              {
                v12 = ~v10;
                v16 = __OFSUB__(v11, v10);
                v15 = v11 - v10 < 0;
                v9 = 1;
                ++v11;
                if ( !(v15 ^ v16) )
                  goto LABEL_17;
              }
            }
            v9 = 0;
          }
        }
LABEL_17:
        ++v8;
      }
      while ( v8 != v18 );
  return v9 & 1;
}


int __fastcall MegaTreeFeature::_calcTreeHeigth(MegaTreeFeature *this, Random *a2)
{
  Random *v2; // r5@1
  MegaTreeFeature *v3; // r4@1
  unsigned int v4; // r0@1
  __int64 v5; // kr00_8@1
  int v6; // r4@1

  v2 = a2;
  v3 = this;
  v4 = j_Random::_genRandInt32(a2);
  v5 = *((_QWORD *)v3 + 3);
  v6 = v4 % 3 + v5;
  if ( SHIDWORD(v5) >= 2 )
    v6 += j_Random::_genRandInt32(v2) % HIDWORD(v5);
  return v6;
}
