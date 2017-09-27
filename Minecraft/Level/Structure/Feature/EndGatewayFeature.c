

signed int __fastcall EndGatewayFeature::place(EndGatewayFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Feature *v4; // r9@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r6@1
  signed int v7; // r8@1
  signed int v8; // r10@2
  __int64 v9; // r0@3
  int v10; // r2@3
  signed int v11; // r0@4
  signed int v12; // r1@6
  int v13; // r11@6
  signed int v14; // r7@9
  int v15; // r1@10
  int v16; // r2@10
  signed int v17; // r0@11
  BlockSource *v18; // r1@14
  const BlockPos *v19; // r2@14
  char *v20; // r3@14
  Feature *v21; // r0@14
  bool v22; // zf@16
  bool v23; // zf@20
  __int64 v24; // r0@28
  int v25; // r2@28
  int v26; // r1@28
  int v27; // r2@28
  BlockSource *v28; // r1@29
  const BlockPos *v29; // r2@29
  char *v30; // r3@29
  Feature *v31; // r0@29
  int v33; // [sp+18h] [bp-48h]@9
  char v34; // [sp+1Ch] [bp-44h]@23
  char v35; // [sp+1Dh] [bp-43h]@23
  char v36; // [sp+20h] [bp-40h]@24
  char v37; // [sp+21h] [bp-3Fh]@24
  char v38; // [sp+24h] [bp-3Ch]@14
  char v39; // [sp+25h] [bp-3Bh]@14
  char v40; // [sp+28h] [bp-38h]@3
  char v41; // [sp+29h] [bp-37h]@3
  char v42; // [sp+2Ch] [bp-34h]@15
  char v43; // [sp+2Dh] [bp-33h]@15
  __int64 v44; // [sp+30h] [bp-30h]@3
  int v45; // [sp+38h] [bp-28h]@3

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = -1;
  do
  {
    v8 = -2;
    do
    {
      while ( 1 )
      {
        v11 = 0;
        if ( v8 == 2 )
          v11 = 1;
        v12 = 0;
        v13 = v8 | v7;
        if ( v8 == -2 )
          v12 = 1;
        if ( v8 )
          break;
        HIDWORD(v24) = *((_DWORD *)v5 + 1);
        v25 = *((_DWORD *)v5 + 2);
        LODWORD(v24) = *(_DWORD *)v5 + v7;
        v44 = v24;
        v45 = v25 - 1;
        v40 = *(_BYTE *)(Block::mAir + 4);
        v41 = 0;
        Feature::_setBlockAndData(v4, v6, (const BlockPos *)&v44, (const FullBlock *)&v40);
        v26 = *((_DWORD *)v5 + 1);
        v27 = *((_DWORD *)v5 + 2);
        LODWORD(v44) = *(_DWORD *)v5 + v7;
        HIDWORD(v44) = v26;
        v45 = v27;
        if ( v13 )
        {
          v28 = v6;
          v29 = (const BlockPos *)&v44;
          v30 = &v40;
          v40 = *(_BYTE *)(Block::mAir + 4);
          v31 = v4;
          v41 = 0;
        }
        else
          v30 = &v42;
          v42 = *(_BYTE *)(Block::mEndGateway + 4);
          v43 = 0;
        Feature::_setBlockAndData(v31, v28, v29, (const FullBlock *)v30);
        HIDWORD(v9) = *((_DWORD *)v5 + 1);
        v10 = *((_DWORD *)v5 + 2);
        LODWORD(v9) = *(_DWORD *)v5 + v7;
        v44 = v9;
        v45 = v10 + 1;
        v8 = 1;
      }
      v14 = -1;
      v33 = v11 | v12;
      do
        v15 = *((_DWORD *)v5 + 1);
        v16 = *((_DWORD *)v5 + 2);
        HIDWORD(v44) = v15 + v8;
        v45 = v14 + v16;
        if ( v13 | v14 )
          v17 = 0;
          if ( !(v14 | v7) )
            v17 = 1;
          if ( (v17 & v33) == 1 )
          {
            v18 = v6;
            v19 = (const BlockPos *)&v44;
            v20 = &v38;
            v38 = *(_BYTE *)(Block::mBedrock + 4);
            v39 = 1;
            v21 = v4;
          }
          else
            v22 = v7 == 0;
            if ( v7 )
              v22 = v14 == 0;
            if ( !v22 )
              goto LABEL_35;
            v23 = v8 == 2;
            if ( v8 != 2 )
              v23 = v8 == -2;
            if ( v23 )
            {
LABEL_35:
              v18 = v6;
              v19 = (const BlockPos *)&v44;
              v20 = &v36;
              v36 = *(_BYTE *)(Block::mAir + 4);
              v37 = 0;
              v21 = v4;
            }
            else
              v20 = &v34;
              v34 = *(_BYTE *)(Block::mBedrock + 4);
              v35 = 1;
          v18 = v6;
          v19 = (const BlockPos *)&v44;
          v20 = &v42;
          v21 = v4;
        Feature::_setBlockAndData(v21, v18, v19, (const FullBlock *)v20);
        ++v14;
      while ( v14 != 2 );
      ++v8;
    }
    while ( v8 != 3 );
    ++v7;
  }
  while ( v7 != 2 );
  return 1;
}


void __fastcall EndGatewayFeature::~EndGatewayFeature(EndGatewayFeature *this)
{
  EndGatewayFeature::~EndGatewayFeature(this);
}


void __fastcall EndGatewayFeature::~EndGatewayFeature(EndGatewayFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall EndGatewayFeature::testEnd(EndGatewayFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Feature *v4; // r9@1
  signed int v5; // r7@1
  const BlockPos *v6; // r4@1
  const BlockPos *v7; // r2@1
  const FullBlock *v8; // r3@1
  BlockSource *v9; // r11@1
  int v10; // r8@2
  int v11; // r1@3
  const BlockPos *v12; // r6@3
  const FullBlock *v13; // r5@3
  int v14; // r1@5
  const BlockPos *v15; // r6@5
  const FullBlock *v16; // r5@5
  signed int result; // r0@6
  char v18; // [sp+4h] [bp-34h]@1
  char v19; // [sp+5h] [bp-33h]@3
  char v20; // [sp+8h] [bp-30h]@1
  signed int v21; // [sp+Ch] [bp-2Ch]@3
  int v22; // [sp+10h] [bp-28h]@3

  v4 = this;
  v5 = -300;
  v6 = a3;
  v7 = (const BlockPos *)&v20;
  v8 = (const FullBlock *)&v18;
  v9 = a2;
  do
  {
    v10 = 0;
    if ( (unsigned int)(v5 + 2) > 4 )
    {
      do
      {
        v14 = *((_DWORD *)v6 + 2);
        *(_DWORD *)&v20 = *(_DWORD *)v6 + v5;
        v21 = 4;
        v22 = v10 + v14 - 300;
        v15 = v7;
        v18 = *(_BYTE *)(Block::mAir + 4);
        v19 = 0;
        v16 = v8;
        Feature::_setBlockAndData(v4, v9, v7, v8);
        ++v10;
        v8 = v16;
        v7 = v15;
      }
      while ( v10 != 601 );
    }
    else
        v11 = *((_DWORD *)v6 + 2);
        v22 = v10 + v11 - 300;
        v12 = v7;
        v13 = v8;
        v8 = v13;
        v7 = v12;
    ++v5;
    result = 301;
  }
  while ( v5 != 301 );
  return result;
}
