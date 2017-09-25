

int __fastcall EndPortalShape::EndPortalShape(int a1, const BlockPos *a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r0@1
  int v7; // r2@2
  int v8; // r3@2
  int v9; // r2@2 OVERLAPPED
  signed int v10; // r1@2
  int v11; // r1@4
  int v12; // r2@4
  signed int v13; // r1@4
  int v14; // r2@5
  signed int v15; // r1@5
  int v16; // r1@6
  int v17; // r2@6
  signed int v18; // r1@6
  int v19; // r0@7
  char v20; // r7@8
  char v21; // r6@8
  void *v22; // r0@8
  char v23; // r7@8
  char v24; // r8@8
  void *v25; // r0@8
  char v26; // r5@8
  char v27; // r8@8
  void *v28; // r0@8
  char v29; // r5@8
  char v30; // r8@8
  void *v31; // r0@8
  char v32; // r5@8
  char v33; // r7@8
  void *v34; // r0@8
  void *v36; // [sp+4h] [bp-74h]@8
  char *v37; // [sp+8h] [bp-70h]@8
  char *v38; // [sp+Ch] [bp-6Ch]@8
  void *v39; // [sp+10h] [bp-68h]@8
  char *v40; // [sp+14h] [bp-64h]@8
  char *v41; // [sp+18h] [bp-60h]@8
  void *v42; // [sp+1Ch] [bp-5Ch]@8
  char *v43; // [sp+20h] [bp-58h]@8
  char *v44; // [sp+24h] [bp-54h]@8
  void *v45; // [sp+28h] [bp-50h]@8
  char *v46; // [sp+2Ch] [bp-4Ch]@8
  char *v47; // [sp+30h] [bp-48h]@8
  void *ptr; // [sp+34h] [bp-44h]@8
  char *v49; // [sp+38h] [bp-40h]@8
  char *v50; // [sp+3Ch] [bp-3Ch]@8
  int v51; // [sp+40h] [bp-38h]@7
  int v52; // [sp+44h] [bp-34h]@7
  int v53; // [sp+48h] [bp-30h]@7
  int v54; // [sp+4Ch] [bp-2Ch]@1
  int v55; // [sp+50h] [bp-28h]@1
  int v56; // [sp+54h] [bp-24h]@1
  char v57; // [sp+58h] [bp-20h]@1
  unsigned __int8 v58; // [sp+59h] [bp-1Fh]@1

  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = a3;
  *(_DWORD *)(a1 + 16) = BlockPos::ZERO;
  *(_DWORD *)(a1 + 20) = unk_2816278;
  *(_DWORD *)(a1 + 24) = dword_281627C;
  *(_DWORD *)(a1 + 28) = BlockPos::ZERO;
  *(_DWORD *)(a1 + 32) = unk_2816278;
  *(_DWORD *)(a1 + 36) = dword_281627C;
  BlockSource::getBlockAndData((BlockSource *)&v57, a2, a3);
  v5 = (unsigned __int64 *)Block::getBlockState(Block::mEndPortalFrame, 12);
  v6 = (0xFu >> (4 - (*v5 >> 32))) & (v58 >> (*v5 + 1 - (*v5 >> 32)));
  *(_DWORD *)(v3 + 40) = v6;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  switch ( v6 )
  {
    case 0u:
      v7 = *(_DWORD *)(v4 + 8);
      v8 = 2;
      *(_QWORD *)&v54 = *(_QWORD *)v4;
      v56 = v7 + 1;
      v9 = 5;
      v10 = 4;
      *(_QWORD *)(v3 + 4) = *(_QWORD *)(&v9 - 1);
      *(_DWORD *)(v3 + 12) = 3;
      break;
    case 1u:
      v11 = *(_DWORD *)(v4 + 4);
      v12 = *(_DWORD *)(v4 + 8);
      v54 = *(_DWORD *)v4 - 1;
      v55 = v11;
      v56 = v12;
      v9 = 3;
      v13 = 2;
      v8 = 5;
      *(_DWORD *)(v3 + 12) = 4;
    case 2u:
      v14 = *(_DWORD *)(v4 + 8);
      v8 = 3;
      v56 = v14 - 1;
      v9 = 4;
      v15 = 5;
      *(_DWORD *)(v3 + 12) = 2;
    case 3u:
      v16 = *(_DWORD *)(v4 + 4);
      v17 = *(_DWORD *)(v4 + 8);
      v54 = *(_DWORD *)v4 + 1;
      v55 = v16;
      v56 = v17;
      v9 = 2;
      v18 = 3;
      v8 = 4;
      *(_DWORD *)(v3 + 12) = 5;
    default:
      v9 = *(_DWORD *)(v3 + 8);
      v8 = 0;
  }
  v19 = EndPortalShape::getDistanceUntilEdge((EndPortalShape *)v3, (const BlockPos *)&v54, v9, v8);
  BlockPos::relative((BlockPos *)&v51, v4, *(_BYTE *)(v3 + 8), v19);
  *(_DWORD *)(v3 + 16) = v51;
  *(_DWORD *)(v3 + 20) = v52;
  *(_DWORD *)(v3 + 24) = v53;
  if ( EndPortalShape::mPortalPattern == unk_280DEF0 )
    v20 = *(_BYTE *)(Block::mEndPortalFrame + 4);
    v21 = *(_BYTE *)(Block::mAir + 4);
    v22 = operator new(5u);
    v36 = v22;
    *(_BYTE *)v22 = v21;
    *((_BYTE *)v22 + 1) = v20;
    *((_BYTE *)v22 + 2) = v20;
    *((_BYTE *)v22 + 3) = v20;
    *((_BYTE *)v22 + 4) = v21;
    v38 = (char *)v22 + 5;
    v37 = (char *)v22 + 5;
    v23 = *(_BYTE *)(Block::mAir + 4);
    v24 = *(_BYTE *)(Block::mEndPortalFrame + 4);
    v25 = operator new(5u);
    v39 = v25;
    *(_BYTE *)v25 = v24;
    *((_BYTE *)v25 + 1) = v23;
    *((_BYTE *)v25 + 2) = v23;
    *((_BYTE *)v25 + 3) = v23;
    *((_BYTE *)v25 + 4) = v24;
    v41 = (char *)v25 + 5;
    v40 = (char *)v25 + 5;
    v26 = *(_BYTE *)(Block::mAir + 4);
    v27 = *(_BYTE *)(Block::mEndPortalFrame + 4);
    v28 = operator new(5u);
    v42 = v28;
    *(_BYTE *)v28 = v27;
    *((_BYTE *)v28 + 1) = v26;
    *((_BYTE *)v28 + 2) = v26;
    *((_BYTE *)v28 + 3) = v26;
    *((_BYTE *)v28 + 4) = v27;
    v44 = (char *)v28 + 5;
    v43 = (char *)v28 + 5;
    v29 = *(_BYTE *)(Block::mAir + 4);
    v30 = *(_BYTE *)(Block::mEndPortalFrame + 4);
    v31 = operator new(5u);
    v45 = v31;
    *(_BYTE *)v31 = v30;
    *((_BYTE *)v31 + 1) = v29;
    *((_BYTE *)v31 + 2) = v29;
    *((_BYTE *)v31 + 3) = v29;
    *((_BYTE *)v31 + 4) = v30;
    v47 = (char *)v31 + 5;
    v46 = (char *)v31 + 5;
    v32 = *(_BYTE *)(Block::mEndPortalFrame + 4);
    v33 = *(_BYTE *)(Block::mAir + 4);
    v34 = operator new(5u);
    ptr = v34;
    v50 = (char *)v34 + 5;
    *(_BYTE *)v34 = v33;
    *((_BYTE *)v34 + 1) = v32;
    *((_BYTE *)v34 + 2) = v32;
    *((_BYTE *)v34 + 3) = v32;
    *((_BYTE *)v34 + 4) = v33;
    v49 = (char *)v34 + 5;
    std::vector<std::vector<BlockID,std::allocator<BlockID>>,std::allocator<std::vector<BlockID,std::allocator<BlockID>>>>::_M_assign_aux<std::vector<BlockID,std::allocator<BlockID>> const*>(
      (int)&EndPortalShape::mPortalPattern,
      (unsigned __int64 *)&v36,
      (char *)&v51);
    if ( ptr )
      operator delete(ptr);
    if ( v45 )
      operator delete(v45);
    if ( v42 )
      operator delete(v42);
    if ( v39 )
      operator delete(v39);
    if ( v36 )
      operator delete(v36);
  return v3;
}


signed int __fastcall EndPortalShape::isEmptyBlock(int a1, _BYTE *a2)
{
  signed int result; // r0@1

  result = 0;
  if ( *a2 == BlockID::AIR )
    result = 1;
  return result;
}


signed int __fastcall EndPortalShape::isValid(EndPortalShape *this, BlockSource *a2)
{
  EndPortalShape *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r7@1
  int v5; // r11@2
  bool v6; // zf@4
  bool v7; // zf@7
  int v8; // r1@12
  unsigned __int64 *v9; // r0@13
  unsigned int v10; // r0@13
  char *v12; // [sp+0h] [bp-48h]@1
  char v13; // [sp+4h] [bp-44h]@12
  EndPortalFrameBlock *v14; // [sp+5h] [bp-43h]@10
  char v15; // [sp+Ch] [bp-3Ch]@10
  int v16; // [sp+18h] [bp-30h]@10
  int v17; // [sp+1Ch] [bp-2Ch]@23
  int v18; // [sp+20h] [bp-28h]@23

  v2 = this;
  v12 = (char *)this + 16;
  v3 = a2;
  v4 = 0;
  while ( 2 )
  {
    v5 = 0;
    do
    {
      if ( v5 | v4 )
      {
        v6 = v4 == 0;
        if ( !v4 )
          v6 = v5 == 4;
        if ( !v6 )
        {
          v7 = v4 == 4;
          if ( v4 == 4 )
            v7 = (v5 | 4) == 4;
          if ( !v7 )
          {
            BlockPos::relative((BlockPos *)&v15, (int)v12, *((_BYTE *)v2 + 4), v4);
            BlockPos::relative((BlockPos *)&v16, (int)&v15, *((_BYTE *)v2 + 12), v5);
            BlockSource::getBlockID((BlockSource *)((char *)&v14 + 3), v3, (int)&v16);
            if ( BYTE3(v14) != *(_BYTE *)(*(_DWORD *)(EndPortalShape::mPortalPattern + 12 * v4) + v5) )
              return 0;
            if ( BYTE3(v14) == *(_BYTE *)(Block::mEndPortalFrame + 4) )
            {
              BlockSource::getBlockAndData((BlockSource *)&v13, v3, (int)&v16);
              if ( EndPortalFrameBlock::hasEye((EndPortalFrameBlock *)(unsigned __int8)v14, v8) != 1 )
                return 0;
              v9 = (unsigned __int64 *)Block::getBlockState(Block::mEndPortalFrame, 12);
              v10 = (0xFu >> (4 - (*v9 >> 32))) & ((unsigned __int8)v14 >> (*v9 + 1 - (*v9 >> 32)));
              if ( !v4 && v10 != (*((_DWORD *)v2 + 10) + 1) % 4 )
              if ( v4 == 4 && v10 != (*((_DWORD *)v2 + 10) + 3) % 4
                || !v5 && v10 != *((_DWORD *)v2 + 10) % 4
                || v5 == 4 && v10 != (*((_DWORD *)v2 + 10) + 2) % 4 )
              {
              }
            }
            if ( v4 == 2 && v5 == 2 )
              *((_DWORD *)v2 + 7) = v16;
              *((_DWORD *)v2 + 8) = v17;
              *((_DWORD *)v2 + 9) = v18;
          }
        }
      }
      ++v5;
    }
    while ( v5 < 5 );
    if ( ++v4 < 5 )
      continue;
    break;
  }
  return 1;
}


int __fastcall EndPortalShape::getOrigin(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 36);
  return result;
}


int __fastcall EndPortalShape::getDistanceUntilEdge(EndPortalShape *this, const BlockPos *a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r4@1
  const BlockPos **v6; // r6@1
  const BlockPos *v7; // r9@1
  int v8; // r7@1
  int v9; // r8@2
  const BlockPos *v10; // r5@2
  const BlockPos *v11; // r4@4
  const BlockPos *v12; // r4@6
  const BlockPos *v13; // r4@8
  const BlockPos *v14; // r4@12
  char v16; // [sp+4h] [bp-4Ch]@12
  unsigned __int8 v17; // [sp+10h] [bp-40h]@2
  char v18; // [sp+14h] [bp-3Ch]@2
  unsigned __int8 v19; // [sp+20h] [bp-30h]@1
  unsigned __int8 v20; // [sp+24h] [bp-2Ch]@1

  v4 = a3;
  v5 = a4;
  v6 = (const BlockPos **)this;
  v7 = a2;
  v8 = 0;
  BlockPos::relative((BlockPos *)&v20, (int)a2, a3, 0);
  BlockSource::getBlockID((BlockSource *)&v19, *v6, (int)&v20);
  if ( v19 == BlockID::AIR )
  {
    v9 = v5;
    v10 = *v6;
    BlockPos::relative((BlockPos *)&v18, (int)&v20, v5, 1);
    BlockSource::getBlockID((BlockSource *)&v17, v10, (int)&v18);
    if ( v17 == *(_BYTE *)(Block::mEndPortalFrame + 4) )
    {
      v8 = 1;
      BlockPos::relative((BlockPos *)&v20, (int)v7, v4, 1);
      BlockSource::getBlockID((BlockSource *)&v19, *v6, (int)&v20);
      if ( v19 == BlockID::AIR )
      {
        v11 = *v6;
        v8 = 1;
        BlockPos::relative((BlockPos *)&v18, (int)&v20, v9, 1);
        BlockSource::getBlockID((BlockSource *)&v17, v11, (int)&v18);
        if ( v17 == *(_BYTE *)(Block::mEndPortalFrame + 4) )
        {
          v8 = 2;
          BlockPos::relative((BlockPos *)&v20, (int)v7, v4, 2);
          BlockSource::getBlockID((BlockSource *)&v19, *v6, (int)&v20);
          if ( v19 == BlockID::AIR )
          {
            v12 = *v6;
            BlockPos::relative((BlockPos *)&v18, (int)&v20, v9, 1);
            BlockSource::getBlockID((BlockSource *)&v17, v12, (int)&v18);
            if ( v17 == *(_BYTE *)(Block::mEndPortalFrame + 4) )
            {
              v8 = 3;
              BlockPos::relative((BlockPos *)&v20, (int)v7, v4, 3);
              BlockSource::getBlockID((BlockSource *)&v19, *v6, (int)&v20);
              if ( v19 == BlockID::AIR )
              {
                v13 = *v6;
                BlockPos::relative((BlockPos *)&v18, (int)&v20, v9, 1);
                BlockSource::getBlockID((BlockSource *)&v17, v13, (int)&v18);
                if ( v17 == *(_BYTE *)(Block::mEndPortalFrame + 4) )
                  v8 = 4;
              }
            }
            else
              v8 = 2;
          }
        }
      }
    }
    else
      v8 = 0;
  }
  v14 = *v6;
  BlockPos::relative((BlockPos *)&v16, (int)v7, v4, v8);
  BlockSource::getBlockID((BlockSource *)&v20, v14, (int)&v16);
  if ( v20 != *(_BYTE *)(Block::mEndPortalFrame + 4) )
    v8 = 0;
  return v8;
}
