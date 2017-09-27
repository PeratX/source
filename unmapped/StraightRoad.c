

int __fastcall StraightRoad::StraightRoad(int result, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // r1@2
  __int64 v7; // kr00_8@4
  int v8; // r5@4
  int v9; // r1@4

  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = a3;
  *(_DWORD *)result = &off_27242B8;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 36) = 0xFFFFFFFFLL;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 44);
    *(_BYTE *)(result + 44) = v6;
    *(_BYTE *)(result + 45) = BYTE1(v6);
    *(_BYTE *)(result + 46) = v6 >> 16;
    *(_BYTE *)(result + 47) = BYTE3(v6);
    if ( 0 != v6 >> 24 )
      *(_DWORD *)(result + 48) = &VillagePiece::mossyStoneSelector;
  }
  *(_DWORD *)result = &off_2724648;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  v7 = *(_QWORD *)(a5 + 8);
  v8 = *(_DWORD *)(a5 + 20);
  v9 = HIDWORD(v7) + 1 - *(_DWORD *)a5;
  if ( v9 < v8 + 1 - (signed int)v7 )
    v9 = v8 + 1 - v7;
  *(_DWORD *)(result + 52) = v9;
  return result;
}


signed int __fastcall StraightRoad::postProcess(StraightRoad *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  StraightRoad *v4; // r8@1
  BlockSource *v5; // r9@1
  const BoundingBox *v6; // r4@1
  int v7; // r10@1
  int v8; // r0@2
  int v9; // r1@3
  int v10; // r6@4
  __int64 v11; // kr00_8@4
  int v12; // r0@4
  int v13; // r2@4
  bool v14; // nf@4
  unsigned __int8 v15; // vf@4
  signed int v16; // r0@4
  __int64 v17; // kr10_8@4
  signed int v18; // r1@6
  bool v19; // zf@8
  signed int v20; // r2@8
  signed int v21; // r3@10
  signed int v22; // r5@12
  int v23; // r0@16
  int v24; // r5@16
  Material *v25; // r0@16
  char *v26; // r0@17
  int v27; // r1@21
  char v29; // [sp+Ch] [bp-3Ch]@18
  char v30; // [sp+Dh] [bp-3Bh]@18
  char v31; // [sp+10h] [bp-38h]@17
  char v32; // [sp+11h] [bp-37h]@17
  char v33; // [sp+14h] [bp-34h]@1
  char v34; // [sp+15h] [bp-33h]@1
  char v35; // [sp+18h] [bp-30h]@1
  char v36; // [sp+19h] [bp-2Fh]@17
  char v37; // [sp+1Ch] [bp-2Ch]@1
  char v38; // [sp+1Dh] [bp-2Bh]@1
  char v39; // [sp+20h] [bp-28h]@1
  char v40; // [sp+21h] [bp-27h]@18

  v4 = this;
  v5 = a2;
  v6 = a4;
  v37 = *(_BYTE *)(Block::mGrassPathBlock + 4);
  v38 = 0;
  j_VillagePiece::biomeBlock((int)&v39, (int)this, (int)&v37);
  v33 = *(_BYTE *)(Block::mWoodPlanks + 4);
  v34 = 0;
  j_VillagePiece::biomeBlock((int)&v35, (int)v4, (int)&v33);
  v7 = *((_DWORD *)v4 + 1);
  if ( v7 <= *((_DWORD *)v4 + 4) )
  {
    v8 = *((_DWORD *)v4 + 6);
    do
    {
      v9 = *((_DWORD *)v4 + 3);
      if ( v9 <= v8 )
      {
        do
        {
          v10 = v9;
          v11 = *(_QWORD *)v6;
          v12 = *((_QWORD *)v6 + 1) >> 32;
          v13 = *((_QWORD *)v6 + 1);
          v15 = __OFSUB__(v12, v7);
          v14 = v12 - v7 < 0;
          v16 = 0;
          v17 = *((_QWORD *)v6 + 2);
          if ( !(v14 ^ v15) )
            v16 = 1;
          v18 = 0;
          if ( (signed int)v11 <= v7 )
            v18 = 1;
          v15 = __OFSUB__(v13, v10);
          v19 = v13 == v10;
          v14 = v13 - v10 < 0;
          v20 = 0;
          if ( (unsigned __int8)(v14 ^ v15) | v19 )
            v20 = 1;
          v21 = 0;
          if ( SHIDWORD(v17) >= v10 )
            v21 = 1;
          v22 = 0;
          if ( SHIDWORD(v11) < 65 )
            v22 = 1;
          if ( (signed int)v17 >= 64 && (v16 & v18 & v20 & v21 & v22) == 1 )
          {
            v23 = j_BlockSource::getAboveTopSolidBlock(v5, v7, v10, 1, 0);
            v24 = v23 - 1;
            v25 = (Material *)j_BlockSource::getMaterial(v5, v7, v23 - 1, v10);
            if ( j_Material::isLiquid(v25) == 1 )
            {
              v31 = v35;
              v32 = v36;
              v26 = &v31;
            }
            else
              v29 = v39;
              v30 = v40;
              v26 = &v29;
            j_BlockSource::setBlockAndData((int)v5, v7, v24, v10, (int)v26, 4);
          }
          v8 = *((_DWORD *)v4 + 6);
          v9 = v10 + 1;
        }
        while ( v10 < v8 );
      }
      v27 = *((_DWORD *)v4 + 4);
      v15 = __OFSUB__(v7, v27);
      v14 = v7++ - v27 < 0;
    }
    while ( v14 ^ v15 );
  }
  return 1;
}


int __fastcall StraightRoad::StraightRoad(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 36) = -1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)result = &off_2724648;
  return result;
}


int __fastcall StraightRoad::findPieceBox(int a1, int a2, int a3, Random *this, int a5, int a6, int a7, int a8)
{
  int v8; // r4@1
  __int64 *v9; // r5@1
  int v10; // r7@1
  int result; // r0@2

  v8 = a1;
  v9 = (__int64 *)a3;
  v10 = 7 * (j_Random::_genRandInt32(this) % 3) + 21;
  while ( 1 )
  {
    j_BoundingBox::orientBox((BoundingBox *)v8, a5, a6, a7, 0, 0, 0, 3, 3, v10, a8);
    result = j_StructurePiece::findCollisionPiece(v9, v8);
    if ( !result )
      break;
    v10 -= 7;
    if ( v10 < 7 )
    {
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      result = 0x7FFFFFFF;
      *(_DWORD *)v8 = 0x7FFFFFFF;
      *(_DWORD *)(v8 + 4) = 0x7FFFFFFF;
      *(_QWORD *)(v8 + 8) = -9223372030412324865LL;
      *(_DWORD *)(v8 + 16) = -2147483647;
      *(_DWORD *)(v8 + 20) = -2147483647;
      return result;
    }
  }
  return result;
}


int __fastcall StraightRoad::addChildren(int a1, int a2, int a3, Random *a4)
{
  Random *v4; // r4@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r9@1
  char v8; // r6@1
  int v9; // r5@1
  int v10; // r0@3
  __int64 v11; // kr10_8@4
  int v12; // r1@4
  int v13; // r0@4
  int v14; // r5@8
  int result; // r0@8
  int v16; // r0@9
  __int64 v17; // kr18_8@10
  int v18; // r1@10
  int v19; // r0@10
  int v20; // r6@18
  int v21; // r0@18
  int v22; // r2@18
  int v23; // r3@18
  int v24; // r1@18
  int v25; // r2@24
  int v26; // r0@24
  int v27; // r1@24
  int v28; // r3@24
  int v29; // r7@24
  int v30; // r2@24
  int v31; // r2@25
  int v32; // r2@27

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = 0;
  v9 = j_Random::_genRandInt32(a4) % 5;
  if ( v9 < *(_DWORD *)(v5 + 52) - 8 )
  {
    v8 = 0;
    do
    {
      v10 = j_VillagePiece::generateHouseNorthernLeft(v5, v7, v6, (int)v4, 0, v9);
      if ( v10 )
      {
        v8 = 1;
        v11 = *(_QWORD *)(v10 + 12);
        v12 = HIDWORD(v11) + 1 - *(_DWORD *)(v10 + 4);
        v13 = *(_DWORD *)(v10 + 24) + 1 - v11;
        if ( v12 < v13 )
          v12 = v13;
        v9 += v12;
      }
      v9 += j_Random::_genRandInt32(v4) % 5 + 2;
    }
    while ( v9 < *(_DWORD *)(v5 + 52) - 8 );
  }
  v14 = j_Random::_genRandInt32(v4) % 5;
  for ( result = *(_DWORD *)(v5 + 52) - 8; v14 < result; result = *(_DWORD *)(v5 + 52) - 8 )
    v16 = j_VillagePiece::generateHouseNorthernRight(v5, v7, v6, (int)v4, 0, v14);
    if ( v16 )
      v8 = 1;
      v17 = *(_QWORD *)(v16 + 12);
      v18 = HIDWORD(v17) + 1 - *(_DWORD *)(v16 + 4);
      v19 = *(_DWORD *)(v16 + 24) + 1 - v17;
      if ( v18 < v19 )
        v18 = v19;
      v14 += v18;
    v14 += j_Random::_genRandInt32(v4) % 5 + 2;
  if ( v8 & 1 )
    if ( j_Random::_genRandInt32(v4) % 3 )
      switch ( *(_DWORD *)(v5 + 28) )
        case 0:
          j_VillagePiece::generateAndAddRoadPiece(
            *(_QWORD *)(v5 + 4) >> 32,
            v7,
            v6,
            v4,
            *(_QWORD *)(v5 + 4) - 1,
            *(_DWORD *)(v5 + 24) - 2,
            1,
            *(_DWORD *)(v5 + 32));
          break;
        case 1:
          v20 = 2;
          v21 = *(_QWORD *)(v5 + 4) >> 32;
          v22 = *(_QWORD *)(v5 + 4);
          v23 = *(_DWORD *)(v5 + 32);
          v24 = *(_DWORD *)(v5 + 12) - 1;
          goto LABEL_20;
        case 2:
          v24 = *(_DWORD *)(v5 + 12);
          v20 = 1;
          v22 = *(_QWORD *)(v5 + 4) - 1;
LABEL_20:
          j_VillagePiece::generateAndAddRoadPiece(v21, v7, v6, v4, v22, v21, v24, v20, v23);
        case 3:
            (*(_QWORD *)(v5 + 8) >> 32) - 1,
            *(_DWORD *)(v5 + 16) - 2,
            *(_QWORD *)(v5 + 8),
            2,
        default:
    result = j_Random::_genRandInt32(v4) % 3;
    if ( result )
      result = *(_DWORD *)(v5 + 28);
      switch ( result )
          v25 = *(_DWORD *)(v5 + 24);
          v26 = *(_DWORD *)(v5 + 8);
          v27 = *(_DWORD *)(v5 + 16) + 1;
          v28 = *(_DWORD *)(v5 + 32);
          v29 = 3;
          v30 = v25 - 2;
          goto LABEL_28;
          v26 = *(_QWORD *)(v5 + 4) >> 32;
          v27 = *(_QWORD *)(v5 + 4);
          v31 = *(_DWORD *)(v5 + 24);
          v29 = 0;
          v30 = v31 + 1;
          result = (int)j_VillagePiece::generateAndAddRoadPiece(
                          *(_QWORD *)(v5 + 8) >> 32,
                          v7,
                          v6,
                          v4,
                          *(_DWORD *)(v5 + 16) + 1,
                          *(_QWORD *)(v5 + 8),
                          3,
                          *(_DWORD *)(v5 + 32));
          v32 = *(_DWORD *)(v5 + 24);
          v27 = *(_DWORD *)(v5 + 16) - 2;
          v30 = v32 + 1;
LABEL_28:
          result = (int)j_VillagePiece::generateAndAddRoadPiece(v26, v7, v6, v4, v27, v26, v30, v29, v28);
          return result;
  return result;
}


signed int __fastcall StraightRoad::getType(StraightRoad *this)
{
  return 1447646034;
}
