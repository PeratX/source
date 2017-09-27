

signed int __fastcall HugeMushroomFeature::_canSurvive(int a1, _BYTE *a2)
{
  int v2; // r1@1
  signed int result; // r0@4

  v2 = *a2;
  if ( v2 != *(_BYTE *)(Block::mDirt + 4)
    && v2 != *(_BYTE *)(Block::mGrass + 4)
    && v2 != *(_BYTE *)(Block::mMycelium + 4) )
  {
    result = 0;
    if ( v2 == *(_BYTE *)(Block::mPodzol + 4) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall HugeMushroomFeature::HugeMushroomFeature(Feature *a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718ADC;
  *(_DWORD *)(result + 12) = v2;
  return result;
}


void __fastcall HugeMushroomFeature::~HugeMushroomFeature(HugeMushroomFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall HugeMushroomFeature::place(HugeMushroomFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  int v4; // r5@1
  Random *v5; // r6@1
  BlockSource *v6; // r7@1
  signed int v7; // r4@1
  const BlockPos *v8; // r10@1
  int v9; // r9@1
  unsigned int v10; // r8@3
  unsigned int v11; // r2@3
  signed int result; // r0@3
  char v13; // r2@3
  unsigned int v14; // r0@6
  int v15; // r0@6
  signed int v16; // r0@8
  int v17; // r11@8
  signed int v18; // r6@10
  int v19; // r8@13
  const BlockPos *v20; // r4@13
  int v21; // r10@14
  int *v22; // r5@18
  int v23; // r0@23
  bool v24; // zf@23
  int v25; // r0@27
  bool v26; // nf@32
  unsigned __int8 v27; // vf@32
  Biome *v28; // r0@48
  BlockSource *v29; // r4@49
  int v30; // r2@50
  int v31; // r3@51
  int v32; // r7@52
  int v33; // r6@53
  bool v34; // zf@56
  signed int v35; // r3@61
  int v36; // r0@64
  int v37; // r12@64
  signed int v38; // r2@68
  int v39; // r8@72
  int v40; // lr@74
  int v41; // r10@74
  int v42; // r0@74
  signed int v43; // r4@77
  int v44; // r5@77
  int v45; // r11@77
  int v46; // r3@77
  int v47; // r9@77
  signed int v48; // r0@87
  signed int v49; // r6@89
  signed int v50; // r1@89
  signed int v51; // r2@93
  bool v52; // zf@95
  int v53; // r1@95
  signed int v54; // r0@99
  int v55; // r1@101
  signed int v56; // r6@106
  int v57; // r7@106
  signed int v58; // r0@113
  int v59; // r6@134
  int v60; // r4@140
  int v61; // [sp+0h] [bp-B0h]@64
  int v62; // [sp+4h] [bp-ACh]@73
  int v63; // [sp+8h] [bp-A8h]@73
  int v64; // [sp+Ch] [bp-A4h]@72
  HugeMushroomFeature *v65; // [sp+18h] [bp-98h]@1
  BlockSource *v66; // [sp+1Ch] [bp-94h]@64
  int v67; // [sp+20h] [bp-90h]@7
  int v68; // [sp+20h] [bp-90h]@73
  unsigned int v69; // [sp+24h] [bp-8Ch]@6
  signed int v70; // [sp+28h] [bp-88h]@73
  signed int v71; // [sp+2Ch] [bp-84h]@1
  int v72; // [sp+30h] [bp-80h]@77
  char v73; // [sp+34h] [bp-7Ch]@142
  char v74; // [sp+35h] [bp-7Bh]@142
  char v75; // [sp+38h] [bp-78h]@135
  char v76; // [sp+39h] [bp-77h]@135
  int v77; // [sp+3Ch] [bp-74h]@49
  int v78; // [sp+40h] [bp-70h]@134
  int v79; // [sp+44h] [bp-6Ch]@134
  int v80; // [sp+48h] [bp-68h]@49
  int v81; // [sp+4Ch] [bp-64h]@49
  int v82; // [sp+50h] [bp-60h]@49
  unsigned __int8 v83; // [sp+54h] [bp-5Ch]@49
  int v84; // [sp+58h] [bp-58h]@49
  int v85; // [sp+5Ch] [bp-54h]@49
  int v86; // [sp+60h] [bp-50h]@49
  int v87; // [sp+64h] [bp-4Ch]@44
  int v88; // [sp+68h] [bp-48h]@44
  int v89; // [sp+6Ch] [bp-44h]@44
  unsigned __int8 v90; // [sp+70h] [bp-40h]@44
  int v91; // [sp+74h] [bp-3Ch]@18
  int v92; // [sp+78h] [bp-38h]@18
  int v93; // [sp+7Ch] [bp-34h]@18
  int v94; // [sp+80h] [bp-30h]@1
  int v95; // [sp+84h] [bp-2Ch]@1
  int v96; // [sp+88h] [bp-28h]@1

  v4 = *(_DWORD *)a3;
  v5 = a4;
  v94 = *(_DWORD *)a3;
  v6 = a2;
  v7 = *((_DWORD *)a3 + 1);
  v8 = a3;
  v95 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v96 = *((_DWORD *)a3 + 2);
  v65 = this;
  v71 = *((_DWORD *)this + 3);
  if ( v71 <= -1 )
    v71 = Random::_genRandInt32(a4) & 1;
  v10 = Random::_genRandInt32(v5);
  v11 = Random::_genRandInt32(v5) % 0xC;
  result = 0;
  v24 = v11 == 0;
  v13 = 0;
  if ( v24 )
    v13 = 1;
  if ( v7 >= 1 )
  {
    v14 = (v10 % 3 | 4) << v13;
    v69 = v14;
    v15 = v14 + v7;
    if ( v15 + 1 >= *((_WORD *)v6 + 12) )
      return 0;
    v67 = v15 + 2;
    if ( v7 != v15 + 2 )
    {
      LOBYTE(v16) = 1;
      v17 = v7;
      while ( 1 )
      {
        v18 = 3;
        if ( v17 <= v7 + 3 )
          v18 = 0;
        if ( !(v16 & 1) )
        {
          v20 = v8;
          goto LABEL_41;
        }
        v19 = v4 - v18;
        v20 = v8;
        if ( v4 - v18 > v4 + v18 )
        while ( 1 )
          v21 = v9 - v18;
          if ( v9 - v18 <= v9 + v18 )
            break;
          v16 = 1;
LABEL_36:
          if ( v16 == 1 )
          {
            v27 = __OFSUB__(v19, v4 + v18);
            v26 = v19++ - (v4 + v18) < 0;
            if ( v26 ^ v27 )
              continue;
          }
        if ( v17 >= 0 )
          break;
        LOBYTE(v16) = 0;
LABEL_41:
        if ( ++v17 == v67 )
          if ( v16 & 1 )
            v7 = v95;
            goto LABEL_44;
          return 0;
        v8 = v20;
        v7 = v95;
      }
      while ( v17 < *((_WORD *)v6 + 12) )
        v91 = v19;
        v92 = v17;
        v93 = v21;
        v22 = (int *)BlockSource::getMaterial(v6, (const BlockPos *)&v91);
        if ( Material::isType(v22, 0) )
        else if ( Material::isType(v22, 7) )
        else
          if ( v19 != *(_DWORD *)v20 )
          v23 = *((_DWORD *)v20 + 1);
          v24 = v17 == v23;
          if ( v17 == v23 )
            v24 = v21 == *((_DWORD *)v20 + 2);
          if ( !v24 )
          v25 = *(_BYTE *)(BlockSource::getBlock(v6, v20) + 4);
          if ( v25 == *(_BYTE *)(Block::mBrownMushroom + 4) )
            v16 = 1;
          else
            v24 = v25 == *(_BYTE *)(Block::mRedMushroom + 4);
            v16 = 0;
            if ( v24 )
              v16 = 1;
        v9 = v96;
        if ( v16 == 1 )
          v27 = __OFSUB__(v21, v96 + v18);
          v26 = v21++ - (v96 + v18) < 0;
          if ( v26 ^ v27 )
            continue;
        goto LABEL_35;
      v9 = v96;
      v16 = 0;
LABEL_35:
      v4 = v94;
      goto LABEL_36;
    }
LABEL_44:
    v87 = v4;
    v88 = v7 - 1;
    v89 = v9;
    BlockSource::getBlockID((BlockSource *)&v90, v6, (int)&v87);
    if ( v90 != *(_BYTE *)(Block::mDirt + 4)
      && v90 != *(_BYTE *)(Block::mGrass + 4)
      && v90 != *(_BYTE *)(Block::mMycelium + 4)
      && v90 != *(_BYTE *)(Block::mPodzol + 4) )
      v28 = (Biome *)BlockSource::getBiome(v6, (const BlockPos *)&v94);
      if ( Biome::getBiomeType(v28) != 15 )
        return 0;
      v84 = v94;
      v85 = v95 - 2;
      v86 = v96;
      BlockSource::getBlockID((BlockSource *)&v77, v6, (int)&v84);
      v29 = v6;
      v80 = v94;
      v81 = v95 - 3;
      v82 = v96;
      BlockSource::getBlockID((BlockSource *)&v83, v6, (int)&v80);
      if ( v90 != *(_BYTE *)(Block::mStillWater + 4) )
      v30 = *(_BYTE *)(Block::mDirt + 4);
      if ( (unsigned __int8)v77 != v30 )
        v31 = *(_BYTE *)(Block::mGrass + 4);
        if ( (unsigned __int8)v77 != v31 )
          v32 = *(_BYTE *)(Block::mMycelium + 4);
          if ( (unsigned __int8)v77 != v32 )
            v33 = *(_BYTE *)(Block::mPodzol + 4);
            if ( (unsigned __int8)v77 != v33 )
            {
              if ( (unsigned __int8)v77 != v90 )
                return 0;
              if ( v83 != v30 )
              {
                v34 = v83 == v31;
                if ( v83 != v31 )
                  v34 = v83 == v32;
                if ( !v34 && v83 != v33 )
                  return 0;
              }
            }
      v35 = 1;
      v6 = v29;
      if ( (unsigned __int8)v77 == v90 )
        v35 = 2;
      v95 -= v35;
      v69 += v35;
    v36 = v95;
    v66 = v6;
    v37 = v95 + v69;
    v61 = v95 + v69;
    if ( v71 == 1 )
      v37 -= 3;
    while ( 1 )
      v38 = 1;
      if ( v37 < (signed int)(v36 + v69) )
        v38 = 2;
      if ( !v71 )
        v38 = 3;
      v39 = v94 - v38;
      v64 = v94 + v38 + 1;
      if ( v94 - v38 != v64 )
        break;
LABEL_139:
      if ( v37 == v61 )
        v60 = 0;
        do
          v77 = v94;
          v78 = v60 + v95;
          v79 = v96;
          if ( !BlockSource::isSolidBlockingBlock(v66, (const BlockPos *)&v77) )
            v73 = *(_BYTE *)(Block::mBrownMushroomBlock + 4) + v71;
            v74 = 10;
            Feature::_setBlockAndData(v65, v66, (const BlockPos *)&v77, (const FullBlock *)&v73);
          ++v60;
        while ( v69 != v60 );
        return 1;
      v36 = v95;
      ++v37;
    v70 = v38;
    v63 = 2 * v38;
    v68 = v38 - 1;
    v62 = v38 + 1;
      v40 = v96;
      v41 = v96 - v70;
      v42 = v63;
      if ( v96 - v70 != v62 + v96 )
LABEL_138:
      if ( ++v39 == v64 )
        goto LABEL_139;
      v72 = v42;
      v43 = 5;
      v44 = v40 - v70;
      v45 = v40 + v70;
      v46 = v94 - v70;
      v47 = v94 + v70;
      if ( v39 == v94 - v70 )
        v43 = 4;
      if ( v39 == v47 )
        ++v43;
      if ( v41 == v44 )
        v43 -= 3;
      if ( v41 == v45 )
        v43 += 3;
      if ( v71 && v37 >= (signed int)(v95 + v69) )
        goto LABEL_128;
      v48 = 0;
        v48 = 1;
      v49 = 0;
      v50 = 0;
        v49 = 1;
        v50 = 1;
      v51 = 0;
      if ( v39 == v46 )
        v51 = 1;
      v53 = v50 | v51;
      v52 = v53 == 0;
      if ( v53 )
        v52 = (v48 | v49) == 0;
      if ( v52 )
LABEL_137:
      if ( !v72 )
        goto LABEL_138;
      ++v41;
      v42 = v72 - 1;
    v54 = v43;
    if ( v41 == v44 )
      v54 = 1;
    v55 = v68;
    if ( v39 != v94 - v68 )
      v54 = v43;
    if ( v39 == v46 )
      v55 = v68;
      if ( v41 == v40 - v68 )
        v54 = 1;
    v56 = v54;
    v57 = v94 + v55;
      v56 = 3;
    if ( v39 != v57 )
      v56 = v54;
    if ( v39 == v47 && v41 == v40 - v55 )
    v58 = v56;
    if ( v41 == v45 )
      v58 = 7;
      v58 = v56;
    if ( v39 == v46 && v41 == v40 + v55 )
    v43 = v58;
      v43 = 9;
      v43 = v58;
    if ( v39 == v47 )
      v68 = v55;
      if ( v41 == v40 + v55 )
        LOBYTE(v43) = 9;
LABEL_134:
        v77 = v39;
        v78 = v37;
        v59 = v37;
        v79 = v41;
        if ( !BlockSource::isSolidBlockingBlock(v66, (const BlockPos *)&v77) )
          v75 = *(_BYTE *)(Block::mBrownMushroomBlock + 4) + v71;
          v76 = v43;
          Feature::_setBlockAndData(v65, v66, (const BlockPos *)&v77, (const FullBlock *)&v75);
        v37 = v59;
        goto LABEL_137;
    else
LABEL_128:
    if ( v43 )
      if ( v43 != 5 )
        goto LABEL_134;
      if ( v37 >= (signed int)(v95 + v69) )
        LOBYTE(v43) = 5;
    if ( v95 < (signed int)(v69 - 1 + v95) )
      goto LABEL_137;
    LOBYTE(v43) = 0;
    goto LABEL_134;
  }
  return result;
}


int __fastcall HugeMushroomFeature::HugeMushroomFeature(Feature *a1)
{
  int result; // r0@1

  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718ADC;
  *(_DWORD *)(result + 12) = -1;
  return result;
}


void __fastcall HugeMushroomFeature::~HugeMushroomFeature(HugeMushroomFeature *this)
{
  HugeMushroomFeature::~HugeMushroomFeature(this);
}
