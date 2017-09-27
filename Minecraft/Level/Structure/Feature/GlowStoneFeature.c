

signed int __fastcall GlowStoneFeature::place(GlowStoneFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r7@1
  BlockSource *v5; // r6@1
  GlowStoneFeature *v6; // r5@1
  Random *v7; // r4@1
  int v8; // r1@2
  int v9; // r2@2
  signed int result; // r0@2
  Random *v11; // r5@3
  char *v12; // r9@3
  int v13; // r1@3
  char v14; // ST10_1@4
  BlockSource *v15; // r8@4
  char v16; // r9@4
  unsigned int v17; // kr00_4@4
  char v18; // r7@4
  char v19; // r0@4
  int v20; // r2@4
  int v21; // r3@4
  int v22; // r1@4
  int *v23; // r0@4
  int v24; // r7@4
  int v25; // r4@4
  int v26; // r0@6
  int v27; // r1@13
  Feature *v28; // [sp+4h] [bp-BCh]@2
  const BlockPos *v29; // [sp+Ch] [bp-B4h]@3
  int v30; // [sp+14h] [bp-ACh]@4
  char v31; // [sp+18h] [bp-A8h]@17
  char v32; // [sp+19h] [bp-A7h]@17
  __int64 v33; // [sp+1Ch] [bp-A4h]@12
  int v34; // [sp+24h] [bp-9Ch]@12
  unsigned __int8 v35; // [sp+28h] [bp-98h]@12
  __int64 v36; // [sp+2Ch] [bp-94h]@11
  int v37; // [sp+34h] [bp-8Ch]@11
  unsigned __int8 v38; // [sp+38h] [bp-88h]@11
  __int64 v39; // [sp+3Ch] [bp-84h]@10
  int v40; // [sp+44h] [bp-7Ch]@10
  unsigned __int8 v41; // [sp+48h] [bp-78h]@10
  __int64 v42; // [sp+4Ch] [bp-74h]@9
  int v43; // [sp+54h] [bp-6Ch]@9
  unsigned __int8 v44; // [sp+58h] [bp-68h]@9
  int v45; // [sp+5Ch] [bp-64h]@8
  int v46; // [sp+60h] [bp-60h]@8
  int v47; // [sp+64h] [bp-5Ch]@8
  unsigned __int8 v48; // [sp+68h] [bp-58h]@8
  int v49; // [sp+6Ch] [bp-54h]@6
  int v50; // [sp+70h] [bp-50h]@6
  int v51; // [sp+74h] [bp-4Ch]@6
  unsigned __int8 v52; // [sp+78h] [bp-48h]@3
  __int64 v53; // [sp+7Ch] [bp-44h]@4
  int v54; // [sp+84h] [bp-3Ch]@4
  char v55; // [sp+88h] [bp-38h]@3
  char v56; // [sp+89h] [bp-37h]@3
  unsigned __int8 v57; // [sp+8Ch] [bp-34h]@2
  int v58; // [sp+90h] [bp-30h]@2
  int v59; // [sp+94h] [bp-2Ch]@2
  int v60; // [sp+98h] [bp-28h]@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  if ( j_BlockSource::isEmptyBlock(a2, a3) == 1 )
  {
    v28 = v6;
    v8 = *((_DWORD *)v4 + 1);
    v9 = *((_DWORD *)v4 + 2);
    v58 = *(_DWORD *)v4;
    v59 = v8 + 1;
    v60 = v9;
    j_BlockSource::getBlockID((BlockSource *)&v57, v5, (int)&v58);
    result = 0;
    if ( v57 == *(_BYTE *)(Block::mNetherrack + 4) )
    {
      v11 = v7;
      v29 = v4;
      v55 = *(_BYTE *)(Block::mGlowStone + 4);
      v56 = 0;
      j_Feature::_setBlockAndData(v28, v5, v4, (const FullBlock *)&v55);
      v12 = (char *)&v52;
      v13 = 0;
      do
      {
        v30 = v13;
        v14 = j_Random::_genRandInt32(v11);
        v15 = (BlockSource *)v12;
        v16 = j_Random::_genRandInt32(v11);
        v17 = j_Random::_genRandInt32(v11);
        v18 = j_Random::_genRandInt32(v11);
        v19 = j_Random::_genRandInt32(v11);
        v20 = *((_DWORD *)v29 + 1);
        v21 = *((_DWORD *)v29 + 2);
        LODWORD(v53) = (v18 & 7) - (v19 & 7) + *(_DWORD *)v29;
        v22 = v16 & 7;
        v12 = (char *)v15;
        HIDWORD(v53) = v20 - v17 % 0xC;
        v54 = (v14 & 7) - v22 + v21;
        v23 = (int *)j_BlockSource::getMaterial(v5, (const BlockPos *)&v53);
        v24 = 0;
        v25 = 0;
        if ( j_Material::isType(v23, 0) )
        {
          do
          {
            switch ( v24 )
            {
              case 0:
                v49 = v53 - 1;
                v50 = HIDWORD(v53);
                v51 = v54;
                j_BlockSource::getBlockID(v15, v5, (int)&v49);
                v26 = v52;
                break;
              case 1:
                v45 = v53 + 1;
                v46 = HIDWORD(v53);
                v47 = v54;
                j_BlockSource::getBlockID((BlockSource *)&v48, v5, (int)&v45);
                v26 = v48;
              case 2:
                v42 = v53 - 0x100000000LL;
                v43 = v54;
                j_BlockSource::getBlockID((BlockSource *)&v44, v5, (int)&v42);
                v26 = v44;
              case 3:
                v39 = v53 + 0x100000000LL;
                v40 = v54;
                j_BlockSource::getBlockID((BlockSource *)&v41, v5, (int)&v39);
                v26 = v41;
              case 4:
                v36 = v53;
                v37 = v54 - 1;
                j_BlockSource::getBlockID((BlockSource *)&v38, v5, (int)&v36);
                v26 = v38;
              case 5:
                v33 = v53;
                v34 = v54 + 1;
                j_BlockSource::getBlockID((BlockSource *)&v35, v5, (int)&v33);
                v26 = v35;
              default:
                v26 = BlockID::AIR;
            }
            ++v24;
            v27 = *(_BYTE *)(Block::mGlowStone + 4);
            if ( v26 == v27 )
              ++v25;
          }
          while ( v24 != 6 );
          if ( v25 == 1 )
            v31 = *(_BYTE *)(Block::mGlowStone + 4);
            v32 = 0;
            j_Feature::_setBlockAndData(v28, v5, (const BlockPos *)&v53, (const FullBlock *)&v31);
        }
        v13 = v30 + 1;
      }
      while ( v30 != 1499 );
      result = 1;
    }
  }
  else
  return result;
}


void __fastcall GlowStoneFeature::~GlowStoneFeature(GlowStoneFeature *this)
{
  GlowStoneFeature::~GlowStoneFeature(this);
}


void __fastcall GlowStoneFeature::~GlowStoneFeature(GlowStoneFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Feature::~Feature(this);
  j_j_j__ZdlPv_7(v1);
}
