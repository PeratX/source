

void __fastcall GroundBushFeature::~GroundBushFeature(GroundBushFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall GroundBushFeature::place(GroundBushFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  TreeFeature *v4; // r4@1
  BlockSource *v5; // r10@1
  const Material *v6; // r0@1
  int v7; // r0@2
  const Material *v8; // r0@3
  int v9; // r0@7
  const BlockPos *v10; // r5@7
  __int64 v11; // r8@7
  int v12; // r1@9
  int v13; // r0@12
  int v14; // r4@12
  int v15; // r1@13
  int v16; // r6@15
  int v17; // r4@16
  int v18; // r11@16
  Block *v19; // r0@17
  int v20; // r11@19
  char v21; // r5@19
  char v22; // r0@19
  const BlockPos *v23; // r2@19
  int v24; // r1@23
  Block *v25; // r0@27
  char v26; // r6@29
  char v27; // r0@29
  int v29; // [sp+0h] [bp-90h]@7
  int v30; // [sp+4h] [bp-8Ch]@7
  int v31; // [sp+8h] [bp-88h]@7
  int v32; // [sp+Ch] [bp-84h]@7
  int v33; // [sp+10h] [bp-80h]@7
  int v34; // [sp+14h] [bp-7Ch]@10
  int v35; // [sp+18h] [bp-78h]@10
  int v36; // [sp+1Ch] [bp-74h]@10
  int v37; // [sp+20h] [bp-70h]@10
  int v38; // [sp+24h] [bp-6Ch]@9
  Random *v39; // [sp+28h] [bp-68h]@1
  int v40; // [sp+2Ch] [bp-64h]@10
  int v41; // [sp+30h] [bp-60h]@16
  int v42; // [sp+34h] [bp-5Ch]@9
  TreeFeature *v43; // [sp+3Ch] [bp-54h]@7
  char v44; // [sp+44h] [bp-4Ch]@19
  char v45; // [sp+45h] [bp-4Bh]@19
  unsigned __int8 v46; // [sp+48h] [bp-48h]@17
  char v47; // [sp+4Ch] [bp-44h]@7
  int v48; // [sp+54h] [bp-3Ch]@17
  char v49; // [sp+58h] [bp-38h]@7
  char v50; // [sp+59h] [bp-37h]@7
  unsigned __int8 v51; // [sp+5Ch] [bp-34h]@5
  int v52; // [sp+60h] [bp-30h]@1
  int v53; // [sp+64h] [bp-2Ch]@1
  int v54; // [sp+68h] [bp-28h]@1

  v4 = this;
  v52 = *(_DWORD *)a3;
  v5 = a2;
  v53 = *((_DWORD *)a3 + 1);
  v54 = *((_DWORD *)a3 + 2);
  v39 = a4;
  v6 = (const Material *)BlockSource::getMaterial(a2, (const BlockPos *)&v52);
  if ( TreeFeature::_isFree(v4, v6) == 1 )
  {
    v7 = v53;
    if ( v53 >= 1 )
    {
      do
      {
        v53 = v7 - 1;
        v8 = (const Material *)BlockSource::getMaterial(v5, (const BlockPos *)&v52);
        if ( TreeFeature::_isFree(v4, v8) != 1 )
          break;
        v7 = v53;
      }
      while ( v53 > 0 );
    }
  }
  BlockSource::getBlockID((BlockSource *)&v51, v5, (int)&v52);
  if ( v51 == *(_BYTE *)(Block::mDirt + 4) || v51 == *(_BYTE *)(Block::mGrass + 4) )
    v43 = v4;
    v49 = *(_BYTE *)(Block::mLog + 4);
    v50 = TreeFeature::_getLeafType(v4);
    Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v52, (const FullBlock *)&v49);
    v9 = v53;
    v10 = (const BlockPos *)&v47;
    v33 = 4 - 2 * v53;
    HIDWORD(v11) = v53;
    v32 = 5 - 2 * v53;
    v31 = 2 - v53;
    v30 = v53 - 2;
    v29 = v53 + 2;
    while ( 1 )
      v12 = v52;
      v42 = v9 - HIDWORD(v11) + 2;
      LODWORD(v11) = v52 - v42;
      v38 = v42 + v52 + 1;
      if ( v52 - v42 != v38 )
        v35 = v31 + v9;
        v34 = v30 - v9;
        v40 = v33 + 2 * v9;
        v36 = v32 + 2 * v9;
        v37 = v9 - HIDWORD(v11) + 3;
        while ( 1 )
        {
          v13 = v54;
          v14 = v54 - v42;
          if ( v54 - v42 != v37 + v54 )
          {
            v15 = v11 - v12;
            if ( v15 < 0 )
              v15 = -v15;
            v16 = v36;
            if ( v15 == v42 )
            {
              v17 = 0;
              v18 = v35 - v54;
              v41 = v34 + v54;
              while ( 1 )
              {
                v24 = v41 + v17 - v13;
                if ( v24 < 0 )
                  v24 = v18 + v13;
                if ( v24 != v42 || Random::_genRandInt32(v39) & 1 )
                {
                  *(_QWORD *)&v47 = v11;
                  v48 = v41 + v17;
                  BlockSource::getBlockID((BlockSource *)&v46, v5, (int)v10);
                  v25 = (Block *)Block::mBlocks[v46];
                  if ( !v25 || !Block::isSolid(v25) )
                  {
                    v26 = *(_BYTE *)(Block::mLeaves + 4);
                    v27 = TreeFeature::_getLeafType(v43);
                    v44 = v26;
                    v45 = v27;
                    Feature::_setBlockAndData(v43, v5, v10, (const FullBlock *)&v44);
                  }
                }
                if ( v40 == v17 )
                  break;
                v13 = v54;
                --v18;
                ++v17;
              }
            }
            else
              do
                *(_QWORD *)&v47 = v11;
                v48 = v14;
                BlockSource::getBlockID((BlockSource *)&v46, v5, (int)v10);
                v19 = (Block *)Block::mBlocks[v46];
                if ( !v19 || !Block::isSolid(v19) )
                  v20 = HIDWORD(v11);
                  HIDWORD(v11) = v10;
                  v21 = *(_BYTE *)(Block::mLeaves + 4);
                  v22 = TreeFeature::_getLeafType(v43);
                  v44 = v21;
                  v10 = (const BlockPos *)HIDWORD(v11);
                  v45 = v22;
                  v23 = (const BlockPos *)HIDWORD(v11);
                  HIDWORD(v11) = v20;
                  Feature::_setBlockAndData(v43, v5, v23, (const FullBlock *)&v44);
                --v16;
                ++v14;
              while ( v16 );
          }
          LODWORD(v11) = v11 + 1;
          if ( (_DWORD)v11 == v38 )
            break;
          v12 = v52;
        }
      if ( HIDWORD(v11) == v29 )
        break;
      ++HIDWORD(v11);
      v9 = v53;
      --v31;
      ++v30;
      v33 -= 2;
      v32 -= 2;
  return 1;
}


_DWORD *__fastcall GroundBushFeature::GroundBushFeature(TreeFeature *a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)TreeFeature::TreeFeature(a1, 0, a2, a3, 0);
  *result = &off_2718AC8;
  return result;
}


void __fastcall GroundBushFeature::~GroundBushFeature(GroundBushFeature *this)
{
  GroundBushFeature::~GroundBushFeature(this);
}
