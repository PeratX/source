

_DWORD *__fastcall SavannaTreeFeature::SavannaTreeFeature(TreeFeature *a1, Entity *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)TreeFeature::TreeFeature(a1, a2, 0, 0, 0);
  *result = &off_2718BF4;
  return result;
}


signed int __fastcall SavannaTreeFeature::_placeLeafAt(SavannaTreeFeature *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TreeFeature *v5; // r6@1
  const Material *v6; // r0@1
  signed int result; // r0@1
  char v8; // [sp+4h] [bp-14h]@2
  char v9; // [sp+5h] [bp-13h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (const Material *)Feature::_getMaterial(this, a2, a3);
  result = TreeFeature::_isFree(v5, v6);
  if ( result == 1 )
  {
    v8 = *(_BYTE *)(Block::mLeaves2 + 4);
    v9 = 0;
    result = Feature::_setBlockAndData(v5, v4, v3, (const FullBlock *)&v8);
  }
  return result;
}


void __fastcall SavannaTreeFeature::~SavannaTreeFeature(SavannaTreeFeature *this)
{
  SavannaTreeFeature::~SavannaTreeFeature(this);
}


void __fastcall SavannaTreeFeature::~SavannaTreeFeature(SavannaTreeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall SavannaTreeFeature::place(SavannaTreeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r9@1
  Feature *v5; // r5@1
  const BlockPos *v6; // r8@1
  BlockSource *v7; // r4@1
  unsigned int v8; // r6@1
  unsigned int v9; // r7@1
  int v10; // r6@1
  int v11; // r3@2
  signed int result; // r0@2
  int v13; // r12@3
  char v14; // r11@3
  char v15; // r0@3
  Random *v16; // r1@3
  char v17; // r9@3
  unsigned int v18; // r0@3
  int v19; // r1@3
  int v20; // r10@3
  int v21; // r6@3
  int v22; // r9@3
  unsigned int v23; // r7@3
  int v24; // r8@3
  int v25; // r11@5
  bool v26; // nf@5
  unsigned __int8 v27; // vf@5
  int v28; // r2@8
  const Material *v29; // r0@9
  signed int v30; // r7@12
  const Material *v31; // r0@14
  const Material *v32; // r0@16
  const Material *v33; // r0@18
  const Material *v34; // r0@21
  const Material *v35; // r0@23
  const Material *v36; // r0@25
  const Material *v37; // r0@27
  signed int v38; // r6@29
  int v39; // r0@30
  signed int v40; // r10@32
  signed int v41; // r8@33
  signed int v42; // r0@34
  __int64 v43; // r0@37
  const Material *v44; // r0@37
  __int64 v45; // r0@41
  const Material *v46; // r0@41
  unsigned int v47; // r10@45
  signed int v48; // r6@46
  unsigned int v49; // r0@46
  int v50; // r8@47
  signed int v51; // r7@47
  int v52; // r3@49
  int v53; // r11@49
  const Material *v54; // r0@49
  signed int v55; // r7@55
  const Material *v56; // r0@57
  const Material *v57; // r0@59
  const Material *v58; // r0@61
  signed int v59; // r7@64
  int v60; // r0@65
  signed int v61; // r6@68
  signed int v62; // r10@68
  signed int v63; // r0@69
  __int64 v64; // r0@72
  const Material *v65; // r0@72
  __int64 v66; // r0@76
  const Material *v67; // r0@76
  __int64 v68; // r0@78
  const Material *v69; // r0@78
  const Material *v70; // r0@80
  __int64 v71; // r0@82
  const Material *v72; // r0@82
  __int64 v73; // r0@84
  const Material *v74; // r0@84
  int v75; // [sp+4h] [bp-CCh]@3
  Random *v76; // [sp+8h] [bp-C8h]@3
  int v77; // [sp+Ch] [bp-C4h]@3
  int v78; // [sp+1Ch] [bp-B4h]@3
  const BlockPos *v79; // [sp+20h] [bp-B0h]@3
  __int64 v80; // [sp+24h] [bp-ACh]@72
  int v81; // [sp+2Ch] [bp-A4h]@72
  int v82; // [sp+30h] [bp-A0h]@57
  int v83; // [sp+34h] [bp-9Ch]@57
  int v84; // [sp+38h] [bp-98h]@57
  char v85; // [sp+3Ch] [bp-94h]@50
  char v86; // [sp+3Dh] [bp-93h]@50
  __int64 v87; // [sp+40h] [bp-90h]@37
  int v88; // [sp+48h] [bp-88h]@37
  int v89; // [sp+4Ch] [bp-84h]@27
  int v90; // [sp+50h] [bp-80h]@27
  int v91; // [sp+54h] [bp-7Ch]@27
  int v92; // [sp+58h] [bp-78h]@25
  int v93; // [sp+5Ch] [bp-74h]@25
  int v94; // [sp+60h] [bp-70h]@25
  int v95; // [sp+64h] [bp-6Ch]@23
  int v96; // [sp+68h] [bp-68h]@23
  int v97; // [sp+6Ch] [bp-64h]@23
  int v98; // [sp+70h] [bp-60h]@21
  int v99; // [sp+74h] [bp-5Ch]@21
  int v100; // [sp+78h] [bp-58h]@21
  int v101; // [sp+7Ch] [bp-54h]@14
  int v102; // [sp+80h] [bp-50h]@14
  int v103; // [sp+84h] [bp-4Ch]@14
  char v104; // [sp+88h] [bp-48h]@10
  char v105; // [sp+89h] [bp-47h]@10
  int v106; // [sp+8Ch] [bp-44h]@3
  int i; // [sp+90h] [bp-40h]@3
  int v108; // [sp+94h] [bp-3Ch]@3
  char v109; // [sp+98h] [bp-38h]@3
  char v110; // [sp+99h] [bp-37h]@3
  int v111; // [sp+9Ch] [bp-34h]@3
  int v112; // [sp+A0h] [bp-30h]@3
  int v113; // [sp+A4h] [bp-2Ch]@3
  char v114; // [sp+A8h] [bp-28h]@15
  char v115; // [sp+A9h] [bp-27h]@15

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = j_Random::_genRandInt32(a4);
  v9 = v8 % 3 + j_Random::_genRandInt32(v4) % 3;
  v10 = v9 + 5;
  if ( TreeFeature::_prepareSpawn(v5, v7, v6, v9 + 5) == 1 )
  {
    v11 = *((_DWORD *)v6 + 1);
    result = 0;
    if ( v11 < *((_WORD *)v7 + 12) + ~v10 )
    {
      v13 = *((_DWORD *)v6 + 2);
      v111 = *(_DWORD *)v6;
      v112 = v11 - 1;
      v113 = v13;
      v109 = *(_BYTE *)(Block::mDirt + 4);
      v110 = 0;
      Feature::_placeBlock(v5, v7, (const BlockPos *)&v111, (const FullBlock *)&v109);
      v14 = j_Random::_genRandInt32(v4);
      v15 = j_Random::_genRandInt32(v4);
      v16 = v4;
      v17 = v15;
      v76 = v16;
      v18 = j_Random::_genRandInt32(v16);
      v106 = *(_DWORD *)v6;
      v19 = *((_DWORD *)v6 + 1);
      i = *((_DWORD *)v6 + 1);
      v20 = v9 + 4;
      v108 = *((_DWORD *)v6 + 2);
      v77 = v9 + 5;
      v75 = v10 - (v17 & 3);
      v21 = v75 - 1;
      v79 = v6;
      v22 = 0;
      v23 = v18 % 3 ^ 3;
      v78 = v14 & 3;
      v24 = 0;
      while ( 1 )
      {
        v25 = v24 + v19;
        v27 = __OFSUB__(v24, v21);
        v26 = v24 - v21 < 0;
        if ( v24 >= v21 )
        {
          v27 = __OFSUB__(v23, 1);
          v26 = ((v23 - 1) & 0x80000000) != 0;
        }
        if ( !(v26 ^ v27) )
          --v23;
          v28 = Direction::STEP_Z[v78];
          v106 += Direction::STEP_X[v78];
          v108 += v28;
        i = v24 + v19;
        v29 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v106);
        if ( TreeFeature::_isFree(v5, v29) == 1 )
          v104 = *(_BYTE *)(Block::mLog2 + 4);
          v105 = 0;
          Feature::_placeBlock(v5, v7, (const BlockPos *)&v106, (const FullBlock *)&v104);
          v22 = v25;
        if ( v20 == v24 )
          break;
        ++v24;
        v19 = *((_DWORD *)v79 + 1);
      }
      v30 = -1;
      for ( i = v22; ; v22 = i )
        v101 = v106 + v30;
        v102 = v22 + 1;
        v103 = v108 - 1;
        v31 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v101);
        if ( TreeFeature::_isFree(v5, v31) )
          v114 = *(_BYTE *)(Block::mLeaves2 + 4);
          v115 = 0;
          Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v101, (const FullBlock *)&v114);
        v102 = i + 1;
        v103 = v108;
        v32 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v101);
        if ( TreeFeature::_isFree(v5, v32) )
        v103 = v108 + 1;
        v33 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v101);
        if ( TreeFeature::_isFree(v5, v33) == 1 )
        if ( ++v30 == 2 )
      v98 = v106 + 2;
      v99 = i + 1;
      v100 = v108;
      v34 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v98);
      if ( TreeFeature::_isFree(v5, v34) == 1 )
        v114 = *(_BYTE *)(Block::mLeaves2 + 4);
        v115 = 0;
        Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v98, (const FullBlock *)&v114);
      v95 = v106 - 2;
      v96 = i + 1;
      v97 = v108;
      v35 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v95);
      if ( TreeFeature::_isFree(v5, v35) == 1 )
        Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v95, (const FullBlock *)&v114);
      v92 = v106;
      v93 = i + 1;
      v94 = v108 + 2;
      v36 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v92);
      if ( TreeFeature::_isFree(v5, v36) == 1 )
        Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v92, (const FullBlock *)&v114);
      v89 = v106;
      v90 = i + 1;
      v91 = v108 - 2;
      v37 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v89);
      if ( TreeFeature::_isFree(v5, v37) == 1 )
        Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v89, (const FullBlock *)&v114);
      v38 = -3;
      do
        v39 = v38;
        if ( v38 < 0 )
          v39 = -v38;
        v40 = -3;
        if ( v39 == 3 )
          v41 = 3;
          do
          {
            v42 = v40;
            if ( v40 < 0 )
              v42 = v41;
            if ( v42 != 3 )
            {
              HIDWORD(v43) = i;
              LODWORD(v43) = v106 + v38;
              v87 = v43;
              v88 = v40 + v108;
              v44 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v87);
              if ( TreeFeature::_isFree(v5, v44) == 1 )
              {
                v114 = *(_BYTE *)(Block::mLeaves2 + 4);
                v115 = 0;
                Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v87, (const FullBlock *)&v114);
              }
            }
            --v41;
            ++v40;
          }
          while ( v41 != -4 );
        else
            HIDWORD(v45) = i;
            LODWORD(v45) = v106 + v38;
            v87 = v45;
            v88 = v40 + v108;
            v46 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v87);
            if ( TreeFeature::_isFree(v5, v46) == 1 )
              v114 = *(_BYTE *)(Block::mLeaves2 + 4);
              v115 = 0;
              Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v87, (const FullBlock *)&v114);
          while ( v40 != 4 );
        ++v38;
      while ( v38 != 4 );
      v106 = *(_DWORD *)v79;
      v108 = *((_DWORD *)v79 + 2);
      v47 = j_Random::_genRandInt32(v76) & 3;
      if ( v47 != v78 )
        v48 = v75 - 2 - (j_Random::_genRandInt32(v76) & 1);
        v49 = j_Random::_genRandInt32(v76);
        if ( v48 < v77 )
          v50 = 0;
          v51 = v49 % 3 + 1;
            if ( v48 >= 1 )
              v52 = *((_DWORD *)v79 + 1);
              v106 += Direction::STEP_X[v47];
              v53 = v48 + v52;
              v108 += Direction::STEP_Z[v47];
              i = v48 + v52;
              v54 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v106);
              if ( TreeFeature::_isFree(v5, v54) == 1 )
                v85 = *(_BYTE *)(Block::mLog2 + 4);
                v86 = 0;
                Feature::_placeBlock(v5, v7, (const BlockPos *)&v106, (const FullBlock *)&v85);
                v50 = v53;
            if ( ++v48 >= v77 )
              break;
            v27 = __OFSUB__(v51--, 1);
          while ( !((unsigned __int8)((v51 < 0) ^ v27) | (v51 == 0)) );
          if ( v50 > 0 )
            v55 = -1;
            for ( i = v50; ; v50 = i )
              v82 = v106 + v55;
              v83 = v50 + 1;
              v84 = v108 - 1;
              v56 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v82);
              if ( TreeFeature::_isFree(v5, v56) )
                Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v82, (const FullBlock *)&v114);
              v83 = i + 1;
              v84 = v108;
              v57 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v82);
              if ( TreeFeature::_isFree(v5, v57) )
              v84 = v108 + 1;
              v58 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v82);
              if ( TreeFeature::_isFree(v5, v58) == 1 )
              if ( ++v55 == 2 )
                break;
            v59 = -2;
            do
              v60 = v59;
              if ( v59 < 0 )
                v60 = -v59;
              if ( v60 == 2 )
                v61 = -2;
                v62 = 2;
                do
                {
                  v63 = v61;
                  if ( v61 < 0 )
                    v63 = v62;
                  if ( v63 != 2 )
                  {
                    HIDWORD(v64) = i;
                    LODWORD(v64) = v106 + v59;
                    v80 = v64;
                    v81 = v61 + v108;
                    v65 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v80);
                    if ( TreeFeature::_isFree(v5, v65) == 1 )
                    {
                      v114 = *(_BYTE *)(Block::mLeaves2 + 4);
                      v115 = 0;
                      Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v80, (const FullBlock *)&v114);
                    }
                  }
                  --v62;
                  ++v61;
                }
                while ( v62 != -3 );
              else
                HIDWORD(v66) = i;
                LODWORD(v66) = v106 + v59;
                v80 = v66;
                v81 = v108 - 2;
                v67 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v80);
                if ( TreeFeature::_isFree(v5, v67) )
                  v114 = *(_BYTE *)(Block::mLeaves2 + 4);
                  v115 = 0;
                  Feature::_setBlockAndData(v5, v7, (const BlockPos *)&v80, (const FullBlock *)&v114);
                HIDWORD(v68) = i;
                LODWORD(v68) = v106 + v59;
                v80 = v68;
                v81 = v108 - 1;
                v69 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v80);
                if ( TreeFeature::_isFree(v5, v69) )
                LODWORD(v80) = v106 + v59;
                HIDWORD(v80) = i;
                v81 = v108;
                v70 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v80);
                if ( TreeFeature::_isFree(v5, v70) == 1 )
                HIDWORD(v71) = i;
                LODWORD(v71) = v106 + v59;
                v80 = v71;
                v81 = v108 + 1;
                v72 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v80);
                if ( TreeFeature::_isFree(v5, v72) == 1 )
                HIDWORD(v73) = i;
                LODWORD(v73) = v106 + v59;
                v80 = v73;
                v81 = v108 + 2;
                v74 = (const Material *)Feature::_getMaterial(v5, v7, (const BlockPos *)&v80);
                if ( TreeFeature::_isFree(v5, v74) == 1 )
              ++v59;
            while ( v59 != 3 );
      result = 1;
    }
  }
  else
  return result;
}
