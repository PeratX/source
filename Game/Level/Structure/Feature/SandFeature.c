

signed int __fastcall SandFeature::place(SandFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  SandFeature *v6; // r6@1
  Random *v7; // r8@1
  int v8; // r7@1
  int v9; // r0@1
  signed int result; // r0@2
  int v11; // r0@3
  unsigned int v12; // r1@4
  int v13; // r2@6
  int v14; // r11@6
  unsigned int v15; // r3@7
  int v16; // r0@8
  int v17; // r9@8
  int v18; // r8@8
  int v19; // r7@12
  int v20; // [sp+4h] [bp-54h]@7
  int v21; // [sp+8h] [bp-50h]@6
  int v22; // [sp+Ch] [bp-4Ch]@6
  unsigned int v23; // [sp+10h] [bp-48h]@6
  int v24; // [sp+14h] [bp-44h]@7
  FullBlock *v25; // [sp+1Ch] [bp-3Ch]@7
  unsigned __int8 v26; // [sp+24h] [bp-34h]@12
  int v27; // [sp+28h] [bp-30h]@12
  int v28; // [sp+2Ch] [bp-2Ch]@12
  int v29; // [sp+30h] [bp-28h]@12

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getMaterial(a2, a3);
  v9 = Material::getMaterial(5);
  if ( Material::operator!=(v8, v9) )
  {
    result = 0;
  }
  else
    v11 = *((_DWORD *)v6 + 4);
    if ( v11 == 2 )
      v12 = 2;
    else
      v12 = j_Random::_genRandInt32(v7) % (v11 - 2) + 2;
    v13 = v12 + 1;
    v23 = v12;
    v14 = *(_DWORD *)v4 - v12;
    v22 = v12 + 1;
    v21 = v12 + 1 + *(_DWORD *)v4;
    if ( v14 != v21 )
    {
      v15 = v12 * v12;
      v20 = 2 * v12;
      v24 = v12 * v12;
      v25 = (SandFeature *)((char *)v6 + 12);
      do
      {
        v16 = *((_DWORD *)v4 + 2);
        v17 = v20;
        v18 = v16 - v12;
        if ( v16 - v12 != v13 + v16 )
        {
          while ( 1 )
          {
            if ( (v14 - *(_DWORD *)v4) * (v14 - *(_DWORD *)v4) + (v18 - v16) * (v18 - v16) <= v15 )
            {
              v19 = *((_DWORD *)v4 + 1);
              v27 = v14;
              v28 = v19 - 2;
              v29 = v18;
              BlockSource::getBlockID((BlockSource *)&v26, v5, (int)&v27);
              if ( v26 == *(_BYTE *)(Block::mDirt + 4) || v26 == *(_BYTE *)(Block::mGrass + 4) )
                Feature::_setBlockAndData(v6, v5, (const BlockPos *)&v27, v25);
              v28 = v19 - 1;
              v28 = v19;
              v28 = v19 + 1;
              v28 = v19 + 2;
              v15 = v24;
            }
            if ( !v17 )
              break;
            ++v18;
            v16 = *((_DWORD *)v4 + 2);
            --v17;
          }
        }
        ++v14;
        v12 = v23;
        v13 = v22;
      }
      while ( v14 != v21 );
    }
    result = 1;
  return result;
}


void __fastcall SandFeature::~SandFeature(SandFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall SandFeature::SandFeature(Feature *a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r5@1
  int v4; // r4@1
  int result; // r0@1

  v3 = a2;
  v4 = a3;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718BE0;
  *(_BYTE *)(result + 12) = *v3;
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)(result + 16) = v4;
  return result;
}


void __fastcall SandFeature::~SandFeature(SandFeature *this)
{
  SandFeature::~SandFeature(this);
}
