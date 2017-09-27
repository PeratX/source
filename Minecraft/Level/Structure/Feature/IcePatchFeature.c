

signed int __fastcall IcePatchFeature::place(IcePatchFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  Random *v5; // r6@1
  int v6; // r0@2
  signed int result; // r0@7
  int v8; // r0@8
  unsigned int v9; // r1@9
  int v10; // r2@11
  __int64 v11; // r10@11
  unsigned int v12; // r3@12
  int v13; // r0@13
  int v14; // r5@13
  int v15; // r8@13
  int v16; // [sp+4h] [bp-6Ch]@12
  int v17; // [sp+8h] [bp-68h]@11
  int v18; // [sp+Ch] [bp-64h]@11
  unsigned int v19; // [sp+10h] [bp-60h]@11
  int v20; // [sp+18h] [bp-58h]@12
  FullBlock *v21; // [sp+20h] [bp-50h]@12
  Feature *v22; // [sp+24h] [bp-4Ch]@1
  unsigned __int8 v23; // [sp+2Ch] [bp-44h]@17
  __int64 v24; // [sp+30h] [bp-40h]@17
  int v25; // [sp+38h] [bp-38h]@17
  unsigned __int8 v26; // [sp+3Ch] [bp-34h]@5
  int v27; // [sp+40h] [bp-30h]@1
  int v28; // [sp+44h] [bp-2Ch]@1
  int v29; // [sp+48h] [bp-28h]@1

  v22 = this;
  v4 = a2;
  v27 = *(_DWORD *)a3;
  v5 = a4;
  v28 = *((_DWORD *)a3 + 1);
  v29 = *((_DWORD *)a3 + 2);
  if ( BlockSource::isEmptyBlock(a2, (const BlockPos *)&v27) == 1 )
  {
    v6 = v28;
    if ( v28 >= 3 )
    {
      do
      {
        v28 = v6 - 1;
        if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v27) != 1 )
          break;
        v6 = v28;
      }
      while ( v28 > 2 );
    }
  }
  BlockSource::getBlockID((BlockSource *)&v26, v4, (int)&v27);
  if ( v26 == *(_BYTE *)(Block::mSnow + 4) && v26 != *(_BYTE *)(Block::mPackedIce + 4) )
    v8 = *((_DWORD *)v22 + 4);
    if ( v8 == 2 )
      v9 = 2;
    else
      v9 = j_Random::_genRandInt32(v5) % (v8 - 2) + 2;
    v10 = v9 + 1;
    v19 = v9;
    LODWORD(v11) = v27 - v9;
    v18 = v9 + 1;
    v17 = v9 + 1 + v27;
    if ( v27 - v9 != v17 )
      v12 = v9 * v9;
      v16 = 2 * v9;
      v21 = (Feature *)((char *)v22 + 12);
      v20 = v9 * v9;
        v13 = v29;
        v14 = v16;
        v15 = v29 - v9;
        if ( v29 - v9 != v10 + v29 )
        {
          while ( 1 )
          {
            if ( ((signed int)v11 - v27) * ((signed int)v11 - v27) + (v15 - v13) * (v15 - v13) <= v12 )
            {
              HIDWORD(v11) = v28;
              LODWORD(v24) = v11;
              HIDWORD(v24) = v28 - 1;
              v25 = v15;
              BlockSource::getBlockID((BlockSource *)&v23, v4, (int)&v24);
              if ( v23 == *(_BYTE *)(Block::mDirt + 4)
                || v23 == *(_BYTE *)(Block::mSnow + 4)
                || v23 == *(_BYTE *)(Block::mIce + 4) )
              {
                Feature::_setBlockAndData(v22, v4, (const BlockPos *)&v24, v21);
              }
              v24 = v11;
              v24 = v11 + 0x100000000LL;
              v12 = v20;
            }
            if ( !v14 )
              break;
            ++v15;
            v13 = v29;
            --v14;
          }
        }
        LODWORD(v11) = v11 + 1;
        v9 = v19;
        v10 = v18;
      while ( (_DWORD)v11 != v17 );
    result = 1;
  else
    result = 0;
  return result;
}


int __fastcall IcePatchFeature::IcePatchFeature(Feature *a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718AF0;
  *(_BYTE *)(result + 12) = *(_BYTE *)(Block::mPackedIce + 4);
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)(result + 16) = v2;
  return result;
}


void __fastcall IcePatchFeature::~IcePatchFeature(IcePatchFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall IcePatchFeature::~IcePatchFeature(IcePatchFeature *this)
{
  IcePatchFeature::~IcePatchFeature(this);
}
