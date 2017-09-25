

void __fastcall ReedsFeature::~ReedsFeature(ReedsFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall ReedsFeature::~ReedsFeature(ReedsFeature *this)
{
  ReedsFeature::~ReedsFeature(this);
}


signed int __fastcall ReedsFeature::place(ReedsFeature *this, BlockSource *a2, __int64 a3)
{
  Feature *v3; // r11@1
  BlockSource *v4; // r6@1
  int v5; // r0@1
  char v6; // r8@2
  char v7; // r7@2
  char v8; // r5@2
  char v9; // r0@2
  int v10; // r3@2
  int v11; // r4@2
  int v12; // r4@3
  int v13; // r7@3
  int v14; // r5@3
  int *v15; // r0@3
  int *v16; // r0@4
  int *v17; // r0@5
  int *v18; // r0@6
  unsigned int v19; // r4@7
  unsigned int v20; // r8@7
  int v21; // r4@7
  int (*v22)(void); // r5@8
  bool v23; // zf@10
  bool v24; // nf@10
  unsigned __int8 v25; // vf@10
  __int64 v27; // [sp+0h] [bp-88h]@1
  int v28; // [sp+8h] [bp-80h]@2
  char v29; // [sp+Ch] [bp-7Ch]@9
  char v30; // [sp+Dh] [bp-7Bh]@9
  int v31; // [sp+10h] [bp-78h]@9
  int v32; // [sp+14h] [bp-74h]@9
  int v33; // [sp+18h] [bp-70h]@9
  int v34; // [sp+1Ch] [bp-6Ch]@8
  int v35; // [sp+20h] [bp-68h]@8
  int v36; // [sp+24h] [bp-64h]@8
  int v37; // [sp+28h] [bp-60h]@6
  int v38; // [sp+2Ch] [bp-5Ch]@6
  int v39; // [sp+30h] [bp-58h]@6
  int v40; // [sp+34h] [bp-54h]@5
  int v41; // [sp+38h] [bp-50h]@5
  int v42; // [sp+3Ch] [bp-4Ch]@5
  int v43; // [sp+40h] [bp-48h]@4
  int v44; // [sp+44h] [bp-44h]@4
  int v45; // [sp+48h] [bp-40h]@4
  int v46; // [sp+4Ch] [bp-3Ch]@3
  int v47; // [sp+50h] [bp-38h]@3
  int v48; // [sp+54h] [bp-34h]@3
  int v49; // [sp+58h] [bp-30h]@2
  int v50; // [sp+5Ch] [bp-2Ch]@2
  int v51; // [sp+60h] [bp-28h]@2

  v3 = this;
  v4 = a2;
  v27 = a3;
  v5 = 0;
  do
  {
    v28 = v5;
    v6 = j_Random::_genRandInt32((Random *)HIDWORD(v27));
    v7 = j_Random::_genRandInt32((Random *)HIDWORD(v27));
    v8 = j_Random::_genRandInt32((Random *)HIDWORD(v27));
    v9 = j_Random::_genRandInt32((Random *)HIDWORD(v27));
    v10 = *(_DWORD *)(v27 + 4);
    v11 = *(_DWORD *)(v27 + 8);
    v49 = (v6 & 7) - (v7 & 7) + *(_DWORD *)v27;
    v50 = v10;
    v51 = (v8 & 7) - (v9 & 7) + v11;
    if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v49) == 1 )
    {
      v12 = v49;
      v13 = v50 - 1;
      v14 = v51;
      v46 = v49 - 1;
      v47 = v50 - 1;
      v48 = v51;
      v15 = (int *)BlockSource::getMaterial(v4, (const BlockPos *)&v46);
      if ( Material::isType(v15, 5)
        || (v43 = v12 + 1,
            v44 = v13,
            v45 = v14,
            v16 = (int *)BlockSource::getMaterial(v4, (const BlockPos *)&v43),
            Material::isType(v16, 5))
        || (v40 = v12,
            v41 = v13,
            v42 = v14 - 1,
            v17 = (int *)BlockSource::getMaterial(v4, (const BlockPos *)&v40),
            Material::isType(v17, 5))
        || (v37 = v12,
            v38 = v13,
            v39 = v14 + 1,
            v18 = (int *)BlockSource::getMaterial(v4, (const BlockPos *)&v37),
            Material::isType(v18, 5) == 1) )
      {
        v19 = j_Random::_genRandInt32((Random *)HIDWORD(v27)) % 3 + 1;
        v20 = j_Random::_genRandInt32((Random *)HIDWORD(v27)) % v19;
        v21 = 0;
        do
        {
          v22 = *(int (**)(void))(*(_DWORD *)Block::mReeds + 324);
          v34 = v49;
          v35 = v21 + v50;
          v36 = v51;
          if ( v22() == 1 )
          {
            v31 = v49;
            v32 = v21 + v50;
            v33 = v51;
            v29 = *(_BYTE *)(Block::mReeds + 4);
            v30 = 0;
            Feature::_setBlockAndData(v3, v4, (const BlockPos *)&v31, (const FullBlock *)&v29);
          }
          v25 = __OFSUB__(v21, v20);
          v23 = v21 == v20;
          v24 = ((v21++ - v20) & 0x80000000) != 0;
        }
        while ( (unsigned __int8)(v24 ^ v25) | v23 );
      }
    }
    v5 = v28 + 1;
  }
  while ( v28 != 19 );
  return 1;
}
