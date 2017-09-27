

void __fastcall SpruceFeature::~SpruceFeature(SpruceFeature *this)
{
  SpruceFeature::~SpruceFeature(this);
}


void __fastcall SpruceFeature::~SpruceFeature(SpruceFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


_DWORD *__fastcall SpruceFeature::SpruceFeature(TreeFeature *a1, Entity *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)TreeFeature::TreeFeature(a1, a2, 1, 1, 0);
  *result = &off_2718C30;
  return result;
}


signed int __fastcall SpruceFeature::place(SpruceFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r7@1
  TreeFeature *v5; // r6@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  unsigned int v8; // r8@1
  char v9; // r10@2
  signed int v10; // r11@2
  unsigned int v11; // kr00_4@2
  unsigned int v12; // r9@3
  char v13; // r0@3
  signed int v14; // r12@4
  int v15; // r1@4
  int v16; // r3@4
  int v17; // r2@4
  int v18; // r9@4
  signed int v19; // r7@4
  int v20; // r2@5
  int v21; // r0@7
  int v22; // r8@7
  int v23; // r10@8
  int v24; // r11@8
  int v25; // r1@9
  int v26; // r7@13
  int v27; // r1@14
  bool v28; // nf@18
  unsigned __int8 v29; // vf@18
  int v30; // r7@21
  int v31; // r7@24
  int v32; // r7@27
  signed int v33; // r0@31
  int v34; // r2@32
  int v36; // [sp+4h] [bp-4Ch]@4
  int v37; // [sp+8h] [bp-48h]@3
  int v38; // [sp+Ch] [bp-44h]@4
  int v39; // [sp+10h] [bp-40h]@6
  int v40; // [sp+14h] [bp-3Ch]@6
  int v41; // [sp+18h] [bp-38h]@6
  char v42; // [sp+1Ch] [bp-34h]@2
  int v43; // [sp+1Ch] [bp-34h]@7
  int v44; // [sp+20h] [bp-30h]@17
  int v45; // [sp+24h] [bp-2Ch]@17
  int v46; // [sp+28h] [bp-28h]@17

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = j_Random::_genRandInt32(a4) & 3;
  if ( TreeFeature::_prepareSpawn(v5, v7, v6, v8 + 6) == 1 )
  {
    v42 = j_Random::_genRandInt32(v4);
    v9 = j_Random::_genRandInt32(v4);
    v10 = 1;
    v11 = j_Random::_genRandInt32(v4);
    if ( TreeFeature::_placeTrunk(v5, v7, v6, v4, v8 + 6 - v11 % 3) == 1 )
    {
      v37 = v8 + 6;
      v12 = v42 & 1;
      v13 = j_Random::_genRandInt32(v4);
      if ( v8 + 5 >= v12 )
      {
        v14 = 1;
        v15 = *(_DWORD *)v6;
        v16 = 0;
        v17 = v37 - v12;
        v18 = v13 & 1;
        v19 = 0;
        v36 = v9 & 1 | 2;
        v38 = v17;
        do
        {
          v20 = v15 - v18;
          if ( v15 - v18 <= v15 + v18 )
          {
            v39 = v19;
            v41 = v14;
            v21 = *(_QWORD *)((char *)v6 + 4) >> 32;
            v40 = v16;
            v22 = v37 - v16 + *(_QWORD *)((char *)v6 + 4);
            v43 = ~v18;
            do
            {
              v23 = v21 - v18;
              v24 = v20;
              if ( v21 - v18 <= v21 + v18 )
              {
                v25 = v20 - v15;
                if ( v25 < 0 )
                  v25 = -v25;
                if ( v25 == v18 )
                {
                  if ( v18 <= 0 )
                  {
                    v31 = v43 + v21;
                    do
                    {
                      v44 = v24;
                      v45 = v22;
                      v46 = ++v31;
                      TreeFeature::_placeLeaf(v5, v7, (const BlockPos *)&v44);
                      v21 = *((_DWORD *)v6 + 2);
                    }
                    while ( v31 < v21 + v18 );
                  }
                  else
                    v26 = v18 - v21;
                      v27 = v23 - v21;
                      if ( v23 - v21 < 0 )
                        v27 = v26 + v21;
                      if ( v27 != v18 )
                      {
                        v44 = v24;
                        v45 = v22;
                        v46 = v23;
                        TreeFeature::_placeLeaf(v5, v7, (const BlockPos *)&v44);
                        v21 = *((_DWORD *)v6 + 2);
                      }
                      --v26;
                      v29 = __OFSUB__(v23, v21 + v18);
                      v28 = v23++ - (v21 + v18) < 0;
                    while ( v28 ^ v29 );
                }
                else if ( v18 <= 0 )
                  v32 = v43 + v21;
                  do
                    v44 = v24;
                    v45 = v22;
                    v46 = ++v32;
                    TreeFeature::_placeLeaf(v5, v7, (const BlockPos *)&v44);
                    v21 = *((_DWORD *)v6 + 2);
                  while ( v32 < v21 + v18 );
                else
                  v30 = v43 + v21;
                    v46 = ++v30;
                  while ( v30 < v21 + v18 );
              }
              v15 = *(_DWORD *)v6;
              v20 = v24 + 1;
            }
            while ( v24 < *(_DWORD *)v6 + v18 );
          }
          else
          v14 = v41;
          if ( v18 >= v41 )
            v34 = v36;
            v33 = 1;
            if ( v41 < v36 )
              v34 = v41 + 1;
            v18 = v39;
            v14 = v34;
            v33 = v39;
            ++v18;
          v19 = v33;
          v16 = v40 + 1;
        }
        while ( v40 + 1 != v38 );
      }
      v10 = 1;
    }
  }
  else
    v10 = 0;
  return v10;
}
