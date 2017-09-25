

signed int __fastcall ClayFeature::place(ClayFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r11@1
  Random *v6; // r6@1
  Block *v7; // r0@1
  Block *v8; // r7@1
  int *v9; // r0@1
  int v10; // r0@3
  unsigned int v11; // r1@4
  int v12; // r6@6
  unsigned int v13; // r2@7
  int v14; // r0@8
  int v15; // r8@8
  int v16; // r7@8
  int v17; // r10@12
  int v18; // r10@14
  signed int result; // r0@21
  int v20; // [sp+4h] [bp-5Ch]@7
  int v21; // [sp+8h] [bp-58h]@6
  int v22; // [sp+Ch] [bp-54h]@6
  unsigned int v23; // [sp+10h] [bp-50h]@6
  int v24; // [sp+18h] [bp-48h]@7
  const BlockPos *v25; // [sp+1Ch] [bp-44h]@1
  ClayFeature *v26; // [sp+24h] [bp-3Ch]@1
  char v27; // [sp+28h] [bp-38h]@13
  char v28; // [sp+29h] [bp-37h]@13
  unsigned __int8 v29; // [sp+2Ch] [bp-34h]@12
  int v30; // [sp+30h] [bp-30h]@12
  int v31; // [sp+34h] [bp-2Ch]@12
  int v32; // [sp+38h] [bp-28h]@12

  v4 = a3;
  v5 = a2;
  v26 = this;
  v6 = a4;
  v25 = a3;
  v7 = (Block *)BlockSource::getBlock(a2, a3);
  v8 = v7;
  v9 = (int *)Block::getMaterial(v7);
  if ( Material::isType(v9, 5) || Block::isType(v8, (const Block *)Block::mClay) == 1 )
  {
    v10 = *((_DWORD *)v26 + 3);
    if ( v10 == 2 )
      v11 = 2;
    else
      v11 = Random::_genRandInt32(v6) % (v10 - 2) + 2;
    v22 = v11 + 1;
    v12 = *(_DWORD *)v4 - v11;
    v23 = v11;
    v21 = v11 + 1 + *(_DWORD *)v4;
    if ( v12 != v21 )
    {
      v13 = v11 * v11;
      v20 = 2 * v11;
      v24 = v11 * v11;
      do
      {
        v14 = *((_DWORD *)v4 + 2);
        v15 = v20;
        v16 = v14 - v11;
        if ( v14 - v11 != v22 + v14 )
        {
          while ( 1 )
          {
            if ( (v12 - *(_DWORD *)v4) * (v12 - *(_DWORD *)v4) + (v16 - v14) * (v16 - v14) <= v13 )
            {
              v17 = *((_DWORD *)v4 + 1);
              v30 = v12;
              v31 = v17 - 1;
              v32 = v16;
              BlockSource::getBlockID((BlockSource *)&v29, v5, (int)&v30);
              if ( v29 == *(_BYTE *)(Block::mDirt + 4) )
              {
                v27 = *(_BYTE *)(Block::mClay + 4);
                v28 = 0;
                Feature::_setBlockAndData(v26, v5, (const BlockPos *)&v30, (const FullBlock *)&v27);
              }
              v31 = v17;
              v18 = v17 + 1;
              v31 = v18;
              v13 = v24;
              v4 = v25;
            }
            if ( !v15 )
              break;
            ++v16;
            v14 = *((_DWORD *)v4 + 2);
            --v15;
          }
        }
        v11 = v23;
        ++v12;
      }
      while ( v12 != v21 );
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall ClayFeature::~ClayFeature(ClayFeature *this)
{
  ClayFeature::~ClayFeature(this);
}


void __fastcall ClayFeature::~ClayFeature(ClayFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall ClayFeature::ClayFeature(Feature *a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718A00;
  *(_DWORD *)(result + 12) = v2;
  return result;
}
