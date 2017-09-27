

void __fastcall DesertWellFeature::~DesertWellFeature(DesertWellFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall DesertWellFeature::~DesertWellFeature(DesertWellFeature *this)
{
  DesertWellFeature::~DesertWellFeature(this);
}


signed int __fastcall DesertWellFeature::place(DesertWellFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Feature *v4; // r5@1
  BlockSource *v5; // r4@1
  int v6; // r0@2
  int v7; // r7@6
  signed int v8; // r6@18
  signed int v9; // r6@20
  __int64 v10; // r0@21
  __int64 v11; // r0@21
  __int64 v12; // r0@21
  __int64 v13; // r0@21
  signed int v14; // r6@22
  bool v15; // zf@23
  int v16; // r0@26
  signed int v17; // r6@29
  BlockSource *v18; // r1@31
  Feature *v19; // r0@31
  int *v20; // r2@31
  char *v21; // r3@31
  signed int v22; // r6@34
  int v24; // [sp+0h] [bp-118h]@35
  int v25; // [sp+4h] [bp-114h]@35
  int v26; // [sp+8h] [bp-110h]@35
  int v27; // [sp+Ch] [bp-10Ch]@35
  int v28; // [sp+10h] [bp-108h]@35
  int v29; // [sp+14h] [bp-104h]@35
  int v30; // [sp+18h] [bp-100h]@35
  int v31; // [sp+1Ch] [bp-FCh]@35
  int v32; // [sp+20h] [bp-F8h]@35
  int v33; // [sp+24h] [bp-F4h]@35
  int v34; // [sp+28h] [bp-F0h]@35
  int v35; // [sp+2Ch] [bp-ECh]@35
  int v36; // [sp+30h] [bp-E8h]@30
  int v37; // [sp+34h] [bp-E4h]@30
  int v38; // [sp+38h] [bp-E0h]@30
  int v39; // [sp+3Ch] [bp-DCh]@32
  int v40; // [sp+40h] [bp-D8h]@32
  int v41; // [sp+44h] [bp-D4h]@32
  __int64 v42; // [sp+48h] [bp-D0h]@29
  int v43; // [sp+50h] [bp-C8h]@29
  __int64 v44; // [sp+54h] [bp-C4h]@29
  int v45; // [sp+5Ch] [bp-BCh]@29
  int v46; // [sp+60h] [bp-B8h]@29
  int v47; // [sp+64h] [bp-B4h]@29
  int v48; // [sp+68h] [bp-B0h]@29
  int v49; // [sp+6Ch] [bp-ACh]@29
  int v50; // [sp+70h] [bp-A8h]@29
  int v51; // [sp+74h] [bp-A4h]@29
  int v52; // [sp+78h] [bp-A0h]@26
  int v53; // [sp+7Ch] [bp-9Ch]@26
  int v54; // [sp+80h] [bp-98h]@27
  __int64 v55; // [sp+84h] [bp-94h]@22
  int v56; // [sp+8Ch] [bp-8Ch]@22
  __int64 v57; // [sp+90h] [bp-88h]@22
  int v58; // [sp+98h] [bp-80h]@22
  int v59; // [sp+9Ch] [bp-7Ch]@22
  int v60; // [sp+A0h] [bp-78h]@22
  int v61; // [sp+A4h] [bp-74h]@22
  int v62; // [sp+A8h] [bp-70h]@22
  int v63; // [sp+ACh] [bp-6Ch]@22
  int v64; // [sp+B0h] [bp-68h]@22
  int v65; // [sp+B4h] [bp-64h]@19
  int v66; // [sp+B8h] [bp-60h]@19
  int v67; // [sp+BCh] [bp-5Ch]@19
  char v68; // [sp+C0h] [bp-58h]@18
  char v69; // [sp+C1h] [bp-57h]@18
  char v70; // [sp+C4h] [bp-54h]@18
  char v71; // [sp+C5h] [bp-53h]@18
  char v72; // [sp+C8h] [bp-50h]@18
  char v73; // [sp+C9h] [bp-4Fh]@18
  int v74; // [sp+CCh] [bp-4Ch]@8
  int v75; // [sp+D0h] [bp-48h]@8
  int v76; // [sp+D4h] [bp-44h]@8
  int v77; // [sp+D8h] [bp-40h]@7
  int v78; // [sp+DCh] [bp-3Ch]@7
  int v79; // [sp+E0h] [bp-38h]@7
  unsigned __int8 v80; // [sp+E4h] [bp-34h]@5
  __int64 v81; // [sp+E8h] [bp-30h]@1
  int v82; // [sp+F0h] [bp-28h]@1

  v4 = this;
  LODWORD(v81) = *(_DWORD *)a3;
  v5 = a2;
  HIDWORD(v81) = *((_DWORD *)a3 + 1);
  v82 = *((_DWORD *)a3 + 2);
  if ( BlockSource::isEmptyBlock(a2, (const BlockPos *)&v81) == 1 )
  {
    v6 = HIDWORD(v81);
    if ( SHIDWORD(v81) >= 3 )
    {
      do
      {
        HIDWORD(v81) = v6 - 1;
        if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v81) != 1 )
          break;
        v6 = HIDWORD(v81);
      }
      while ( SHIDWORD(v81) > 2 );
    }
  }
  BlockSource::getBlockID((BlockSource *)&v80, v5, (int)&v81);
  if ( v80 == *(_BYTE *)(Block::mSand + 4) )
    v7 = 0;
    while ( 1 )
      v77 = v81 + v7 - 2;
      v78 = HIDWORD(v81) - 1;
      v79 = v82 - 2;
      if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v77) == 1 )
        v74 = v81 + v7 - 2;
        v75 = HIDWORD(v81) - 2;
        v76 = v82 - 2;
        if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v74) )
      v79 = v82 - 1;
      if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v77) )
        v76 = v82 - 1;
      v79 = v82;
        v76 = v82;
      v79 = v82 + 1;
        v76 = v82 + 1;
      v79 = v82 + 2;
        v76 = v82 + 2;
      if ( ++v7 == 5 )
        v8 = -2;
        v72 = *(_BYTE *)(Block::mSandStone + 4);
        v73 = 0;
        v70 = *(_BYTE *)(Block::mStillWater + 4);
        v71 = 0;
        v68 = *(_BYTE *)(Block::mStoneSlab + 4);
        v69 = 1;
        do
        {
          v65 = v81 + v8;
          v66 = HIDWORD(v81) - 1;
          v67 = v82 - 2;
          Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v65, (const FullBlock *)&v72);
          v67 = v82 - 1;
          v67 = v82;
          v67 = v82 + 1;
          v67 = v82 + 2;
          ++v8;
        }
        while ( v8 != 3 );
        v9 = -2;
          HIDWORD(v10) = HIDWORD(v81);
          LODWORD(v10) = v81 + v9;
          *(_QWORD *)&v65 = v10;
          HIDWORD(v11) = HIDWORD(v81);
          LODWORD(v11) = v81 + v9;
          *(_QWORD *)&v65 = v11;
          v65 = v81 + v9;
          v66 = HIDWORD(v81);
          HIDWORD(v12) = HIDWORD(v81);
          LODWORD(v12) = v81 + v9;
          *(_QWORD *)&v65 = v12;
          HIDWORD(v13) = HIDWORD(v81);
          LODWORD(v13) = v81 + v9;
          *(_QWORD *)&v65 = v13;
          ++v9;
        while ( v9 != 3 );
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v81, (const FullBlock *)&v70);
        v62 = v81 - 1;
        v63 = HIDWORD(v81);
        v64 = v82;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v62, (const FullBlock *)&v70);
        v59 = v81 + 1;
        v60 = HIDWORD(v81);
        v61 = v82;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v59, (const FullBlock *)&v70);
        v57 = v81;
        v58 = v82 - 1;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v57, (const FullBlock *)&v70);
        v55 = v81;
        v56 = v82 + 1;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v55, (const FullBlock *)&v70);
        v14 = -2;
          v15 = v14 == 2;
          if ( v14 != 2 )
            v15 = v14 == -2;
          if ( v15 )
          {
            v52 = v81 + v14;
            v53 = HIDWORD(v81) + 1;
            v54 = v82 - 2;
            Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v52, (const FullBlock *)&v72);
            v54 = v82 - 1;
            v54 = v82;
            v16 = v82 + 1;
          }
          else
            v16 = v82 - 2;
          v54 = v16;
          Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v52, (const FullBlock *)&v72);
          v52 = v81 + v14;
          v53 = HIDWORD(v81) + 1;
          v54 = v82 + 2;
          ++v14;
        while ( v14 != 3 );
        v49 = v81 + 2;
        v50 = HIDWORD(v81) + 1;
        v51 = v82;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v49, (const FullBlock *)&v68);
        v46 = v81 - 2;
        v47 = HIDWORD(v81) + 1;
        v48 = v82;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v46, (const FullBlock *)&v68);
        v44 = v81 + 0x100000000LL;
        v45 = v82 + 2;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v44, (const FullBlock *)&v68);
        v42 = v81 + 0x100000000LL;
        v43 = v82 - 2;
        Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v42, (const FullBlock *)&v68);
        v17 = -1;
          v36 = v81 + v17;
          v37 = HIDWORD(v81) + 4;
          v38 = v82 - 1;
          Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v36, (const FullBlock *)&v68);
          if ( v17 )
            v36 = v17 + v81;
            v37 = HIDWORD(v81) + 4;
            v18 = v5;
            v38 = v82;
            v19 = v4;
            v20 = &v36;
            v21 = &v68;
            v39 = v81;
            v40 = HIDWORD(v81) + 4;
            v41 = v82;
            v20 = &v39;
            v21 = &v72;
          Feature::_setBlockAndData(v19, v18, (const BlockPos *)v20, (const FullBlock *)v21);
          v38 = v82 + 1;
          ++v17;
        while ( v17 != 2 );
        v22 = 1;
          v33 = v81 - 1;
          v34 = v22 + HIDWORD(v81);
          v35 = v82 - 1;
          Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v33, (const FullBlock *)&v72);
          v30 = v81 - 1;
          v31 = v22 + HIDWORD(v81);
          v32 = v82 + 1;
          Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v30, (const FullBlock *)&v72);
          v27 = v81 + 1;
          v28 = v22 + HIDWORD(v81);
          v29 = v82 - 1;
          Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v27, (const FullBlock *)&v72);
          v24 = v81 + 1;
          v25 = v22 + HIDWORD(v81);
          v26 = v82 + 1;
          Feature::_setBlockAndData(v4, v5, (const BlockPos *)&v24, (const FullBlock *)&v72);
          ++v22;
        while ( v22 != 4 );
        return 1;
  return 0;
}
