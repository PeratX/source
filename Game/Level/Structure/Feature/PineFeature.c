

void __fastcall PineFeature::~PineFeature(PineFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


_DWORD *__fastcall PineFeature::PineFeature(TreeFeature *a1, Entity *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)TreeFeature::TreeFeature(a1, a2, 1, 1, 0);
  *result = &off_2718B90;
  return result;
}


void __fastcall PineFeature::~PineFeature(PineFeature *this)
{
  PineFeature::~PineFeature(this);
}


signed int __fastcall PineFeature::place(PineFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  const BlockPos *v5; // r8@1
  BlockSource *v6; // r5@1
  unsigned int v7; // r10@1
  int v8; // r7@1
  unsigned int v9; // r11@1
  int v10; // r0@1
  unsigned int v11; // r4@2
  int v12; // r1@4
  int v13; // r3@6
  int v14; // r0@7
  const BlockPos *v15; // r9@7
  int v16; // r2@8
  int v17; // r1@10
  signed int result; // r0@10
  int v19; // r6@11
  int v20; // r1@12 OVERLAPPED
  int v21; // r8@12
  signed int v22; // r11@12
  int v23; // r2@13
  int v24; // r0@14
  int v25; // r6@15
  int v26; // r2@15
  int v27; // r1@16
  int v28; // r7@19
  int v29; // r4@20
  int v30; // r1@20
  int v31; // r4@29
  int v32; // r4@34
  int v33; // r7@45
  int v34; // r4@45
  int v35; // r1@46
  int v36; // r2@46
  bool v37; // zf@46
  int v38; // r1@50
  int v39; // r2@50
  bool v40; // nf@51
  unsigned __int8 v41; // vf@51
  signed int v42; // r10@54
  int v43; // r4@54
  int v44; // r8@55
  int v45; // r7@57
  signed int v46; // r2@58
  int v47; // r3@59
  int v48; // r4@60
  bool v49; // zf@63
  int v50; // r7@76
  int v51; // r3@76
  int v52; // r4@76
  unsigned __int64 v53; // [sp+4h] [bp-A4h]@54
  int v54; // [sp+Ch] [bp-9Ch]@12
  int v55; // [sp+Ch] [bp-9Ch]@54
  signed int v56; // [sp+10h] [bp-98h]@11
  unsigned int v57; // [sp+10h] [bp-98h]@54
  int v58; // [sp+14h] [bp-94h]@12
  int v59; // [sp+14h] [bp-94h]@54
  int v60; // [sp+18h] [bp-90h]@14
  int v61; // [sp+18h] [bp-90h]@54
  const BlockPos *v62; // [sp+1Ch] [bp-8Ch]@11
  const BlockPos *v63; // [sp+1Ch] [bp-8Ch]@54
  PineFeature *v64; // [sp+24h] [bp-84h]@1
  char v65; // [sp+28h] [bp-80h]@50
  char v66; // [sp+29h] [bp-7Fh]@50
  int v67; // [sp+2Ch] [bp-7Ch]@50
  int v68; // [sp+30h] [bp-78h]@50
  int v69; // [sp+34h] [bp-74h]@50
  int v70; // [sp+38h] [bp-70h]@46
  int v71; // [sp+3Ch] [bp-6Ch]@46
  int v72; // [sp+40h] [bp-68h]@46
  char v73; // [sp+44h] [bp-64h]@25
  char v74; // [sp+45h] [bp-63h]@25
  unsigned __int8 v75; // [sp+48h] [bp-60h]@24
  int v76; // [sp+4Ch] [bp-5Ch]@20
  int v77; // [sp+50h] [bp-58h]@20
  int v78; // [sp+54h] [bp-54h]@20
  char v79; // [sp+58h] [bp-50h]@11
  char v80; // [sp+59h] [bp-4Fh]@11
  int v81; // [sp+5Ch] [bp-4Ch]@11
  int v82; // [sp+60h] [bp-48h]@11
  int v83; // [sp+64h] [bp-44h]@11
  int v84; // [sp+68h] [bp-40h]@8
  int v85; // [sp+6Ch] [bp-3Ch]@8
  int v86; // [sp+70h] [bp-38h]@8
  unsigned __int8 v87; // [sp+74h] [bp-34h]@8
  int v88; // [sp+78h] [bp-30h]@63
  signed int v89; // [sp+7Ch] [bp-2Ch]@63
  int v90; // [sp+80h] [bp-28h]@63

  v4 = a4;
  v64 = this;
  v5 = a3;
  v6 = a2;
  v7 = j_Random::_genRandInt32(a4) % 5;
  v8 = v7 + 7;
  v9 = v7 + 7 - (j_Random::_genRandInt32(v4) & 1);
  v10 = v7 + 7 - (v9 - 3);
  if ( v10 == -1 )
    v11 = 0;
  else
    v11 = j_Random::_genRandInt32(v4) % (v10 + 1);
  v12 = *((_DWORD *)v5 + 1);
  if ( v12 < 1 || v12 + v8 >= *((_WORD *)v6 + 12) )
    return 0;
  v13 = v7 | 8;
  if ( v12 <= (signed int)((v7 | 8) + v12) )
  {
    v55 = v7 + 7;
    v53 = __PAIR__(v7, v9);
    v57 = v11;
    v61 = v11 + 1;
    v42 = *((_DWORD *)v5 + 1);
    v63 = v5;
    v43 = v13;
    v15 = (const BlockPos *)((char *)v5 + 8);
    v14 = *(_DWORD *)v5;
    v59 = v13;
    do
    {
      v44 = v61;
      if ( v42 - v12 < (signed int)(v9 - 3) )
        v44 = 0;
      v45 = v14 - v44;
      if ( v14 - v44 <= v14 + v44 )
      {
        v47 = *(_DWORD *)v15;
        if ( v42 <= -1 )
        {
          v50 = v47 + v44;
          v51 = v47 - v44;
          v52 = v14 - 1 - v44;
          while ( v51 > v50 )
          {
            if ( ++v52 >= v14 + v44 )
            {
              v46 = 1;
              v43 = v59;
              goto LABEL_80;
            }
          }
          return 0;
        }
        do
          v48 = v47 - v44;
          if ( v47 - v44 <= v47 + v44 )
            while ( v42 < *((_WORD *)v6 + 12) )
              v88 = v45;
              v89 = v42;
              v90 = v48;
              BlockSource::getBlockID((BlockSource *)&v76, v6, (int)&v88);
              v49 = (unsigned __int8)v76 == 0;
              if ( (_BYTE)v76 )
                v49 = (unsigned __int8)v76 == *(_BYTE *)(Block::mLeaves + 4);
              v46 = v49 != 0;
              v47 = *(_DWORD *)v15;
              if ( v46 == 1 )
              {
                v41 = __OFSUB__(v48, v47 + v44);
                v40 = v48++ - (v47 + v44) < 0;
                if ( v40 ^ v41 )
                  continue;
              }
              goto LABEL_72;
            v46 = 0;
LABEL_72:
            v14 = *(_DWORD *)v63;
          else
            v46 = 1;
          if ( v46 != 1 )
            break;
          v41 = __OFSUB__(v45, v14 + v44);
          v40 = v45++ - (v14 + v44) < 0;
        while ( v40 ^ v41 );
        v43 = v59;
        v12 = *((_DWORD *)v63 + 1);
      }
      else
        v46 = 1;
LABEL_80:
      if ( v46 != 1 )
        break;
      v41 = __OFSUB__(v42, v43 + v12);
      v40 = v42++ - (v43 + v12) < 0;
    }
    while ( v40 ^ v41 );
    v5 = v63;
    v11 = v57;
    v8 = v55;
    v7 = HIDWORD(v53);
    v9 = v53;
    if ( v46 )
      goto LABEL_8;
  }
  v15 = (const BlockPos *)((char *)v5 + 8);
  v14 = *(_DWORD *)v5;
LABEL_8:
  v16 = *(_DWORD *)v15;
  v84 = v14;
  v85 = v12 - 1;
  v86 = v16;
  BlockSource::getBlockID((BlockSource *)&v87, v6, (int)&v84);
  if ( v87 != *(_BYTE *)(Block::mGrass + 4) && v87 != *(_BYTE *)(Block::mDirt + 4) )
  v17 = *((_DWORD *)v5 + 1);
  result = 0;
  if ( v17 < (signed int)(*((_WORD *)v6 + 12) + -7 - v7 - 1) )
    v19 = *((_DWORD *)v5 + 2);
    v81 = *(_DWORD *)v5;
    v56 = v11;
    v62 = v5;
    v82 = v17 - 1;
    v83 = v19;
    v79 = *(_BYTE *)(Block::mDirt + 4);
    v80 = 0;
    Feature::_placeBlock(v64, v6, (const BlockPos *)&v81, (const FullBlock *)&v79);
    if ( v8 != v9 - 4 )
      *(_QWORD *)&v20 = *(_QWORD *)v5;
      v58 = v9 - 4 + (*(_QWORD *)v5 >> 32);
      v54 = v9 - 2;
      v21 = (*(_QWORD *)v5 >> 32) + v8;
      v22 = 0;
      do
        v23 = v20 - v22;
        if ( v20 - v22 <= v20 + v22 )
          v24 = *(_DWORD *)v15;
          v60 = ~v22;
          do
            v25 = v23;
            v26 = v24 - v22;
            if ( v24 - v22 <= v24 + v22 )
              v27 = v25 - v20;
              if ( v27 < 0 )
                v27 = -v27;
              if ( v27 == v22 )
                v28 = v22 - v24;
                do
                {
                  v29 = v26;
                  v30 = v26 - v24;
                  v76 = v25;
                  v77 = v21;
                  v78 = v26;
                  if ( v26 - v24 < 0 )
                    v30 = v28 + v24;
                  if ( v22 < 1 || v30 != v22 )
                  {
                    BlockSource::getBlockID((BlockSource *)&v75, v6, (int)&v76);
                    if ( !Block::mSolid[v75] )
                    {
                      v73 = *(_BYTE *)(Block::mLeaves + 4);
                      v74 = 1;
                      Feature::_placeBlock(v64, v6, (const BlockPos *)&v76, (const FullBlock *)&v73);
                    }
                  }
                  v24 = *(_DWORD *)v15;
                  --v28;
                  v26 = v29 + 1;
                }
                while ( v29 < *(_DWORD *)v15 + v22 );
              else if ( v22 <= 0 )
                v32 = v60 + v24;
                  v78 = ++v32;
                  BlockSource::getBlockID((BlockSource *)&v75, v6, (int)&v76);
                  if ( !Block::mSolid[v75] )
                    v73 = *(_BYTE *)(Block::mLeaves + 4);
                    v74 = 1;
                    Feature::_placeBlock(v64, v6, (const BlockPos *)&v76, (const FullBlock *)&v73);
                while ( v32 < *(_DWORD *)v15 + v22 );
              else
                v31 = v60 + v24;
                  v78 = ++v31;
                while ( v31 < *(_DWORD *)v15 + v22 );
            v23 = v25 + 1;
            v20 = *(_DWORD *)v62;
          while ( v25 < *(_DWORD *)v62 + v22 );
        if ( v22 <= 0 || v21 != *((_DWORD *)v62 + 1) + v54 )
          if ( v22 <= v56 )
            ++v22;
        else
          --v22;
        --v21;
      while ( v21 != v58 );
    v33 = v7 + 5;
    v34 = 0;
      v35 = *((_DWORD *)v62 + 1);
      v36 = *((_DWORD *)v62 + 2);
      v70 = *(_DWORD *)v62;
      v71 = v34 + v35;
      v72 = v36;
      BlockSource::getBlockID((BlockSource *)&v76, v6, (int)&v70);
      v37 = (unsigned __int8)v76 == 0;
      if ( (_BYTE)v76 )
        v37 = (unsigned __int8)v76 == *(_BYTE *)(Block::mLeaves + 4);
      if ( v37 )
        v38 = *((_DWORD *)v62 + 1);
        v39 = *((_DWORD *)v62 + 2);
        v67 = *(_DWORD *)v62;
        v68 = v34 + v38;
        v69 = v39;
        v65 = *(_BYTE *)(Block::mLog + 4);
        v66 = 1;
        Feature::_placeBlock(v64, v6, (const BlockPos *)&v67, (const FullBlock *)&v65);
      v41 = __OFSUB__(v34, v33);
      v40 = v34++ - v33 < 0;
    result = 1;
  return result;
}
