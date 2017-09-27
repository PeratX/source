

signed int __fastcall PortalShape::isValid(PortalShape *this)
{
  unsigned int v1; // r1@3
  signed int result; // r0@3

  if ( *((_BYTE *)this + 32) && (unsigned int)(*((_DWORD *)this + 10) - 2) <= 0x13 )
  {
    v1 = *((_DWORD *)this + 9) - 3;
    result = 0;
    if ( v1 < 0x13 )
      result = 1;
  }
  else
  return result;
}


signed int __fastcall PortalShape::createPortalBlocks(PortalShape *this, WorldChangeTransaction *a2)
{
  PortalShape *v2; // r5@1
  WorldChangeTransaction *v3; // r4@1
  signed int result; // r0@1
  int v5; // r10@2
  int v6; // r8@4
  int v7; // r1@5
  int v8; // [sp+0h] [bp-40h]@5
  int v9; // [sp+4h] [bp-3Ch]@5
  int v10; // [sp+8h] [bp-38h]@5
  char v11; // [sp+Ch] [bp-34h]@5
  char v12; // [sp+Dh] [bp-33h]@5
  char v13; // [sp+10h] [bp-30h]@3
  int v14; // [sp+14h] [bp-2Ch]@5
  int v15; // [sp+18h] [bp-28h]@5

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 10);
  if ( result >= 1 )
  {
    v5 = 0;
    do
    {
      BlockPos::relative((BlockPos *)&v13, (int)v2 + 20, *((_BYTE *)v2 + 8), v5);
      if ( *((_DWORD *)v2 + 9) > 0 )
      {
        v6 = 0;
        do
        {
          v7 = *((_DWORD *)v2 + 1);
          v11 = *(_BYTE *)(Block::mPortal + 4);
          v12 = v7;
          v8 = *(_DWORD *)&v13;
          v9 = v6 + v14;
          v10 = v15;
          WorldChangeTransaction::setBlock(v3, (const BlockPos *)&v8, (const FullBlock *)&v11, 2);
          ++v6;
        }
        while ( v6 < *((_DWORD *)v2 + 9) );
      }
      ++v5;
      result = *((_DWORD *)v2 + 10);
    }
    while ( v5 < result );
  }
  return result;
}


signed int __fastcall PortalShape::isEmptyBlock(int a1, _BYTE *a2)
{
  int v2; // r1@1
  signed int result; // r0@3

  v2 = *a2;
  if ( v2 != BlockID::AIR && v2 != *(_BYTE *)(Block::mFire + 4) )
  {
    result = 0;
    if ( v2 == *(_BYTE *)(Block::mPortal + 4) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


PortalShape *__fastcall PortalShape::PortalShape(PortalShape *this, const BlockPos *a2, int a3, int a4)
{
  PortalShape *v4; // r4@1
  int v5; // r5@1
  signed int v6; // r0@1
  int v7; // r2@1
  int v8; // r0@3
  int v9; // r6@4
  int v10; // r2@4 OVERLAPPED
  signed int v11; // r1@9 OVERLAPPED
  int v12; // r0@12
  int v13; // r0@13
  int v15; // [sp+0h] [bp-40h]@13
  int v16; // [sp+4h] [bp-3Ch]@13
  int v17; // [sp+8h] [bp-38h]@13
  int v18; // [sp+Ch] [bp-34h]@6
  int v19; // [sp+10h] [bp-30h]@6
  int v20; // [sp+14h] [bp-2Ch]@6
  unsigned __int8 v21; // [sp+18h] [bp-28h]@6

  v4 = this;
  v5 = a3;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = BlockPos::ZERO;
  *((_DWORD *)this + 6) = unk_2816278;
  *((_DWORD *)this + 7) = dword_281627C;
  v6 = 3;
  *((_BYTE *)v4 + 32) = 0;
  *((_DWORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 10) = 0;
  v7 = 2;
  if ( a4 == 1 )
  {
    v7 = 5;
    v6 = 4;
  }
  *((_DWORD *)v4 + 1) = a4;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v7;
  v8 = *(_DWORD *)(v5 + 4);
  if ( v8 >= 1 )
    v9 = v8 - 20;
    v10 = *(_DWORD *)(v5 + 8);
    while ( 1 )
    {
      v18 = *(_DWORD *)v5;
      v19 = v8 - 1;
      v20 = v10;
      BlockSource::getBlockID((BlockSource *)&v21, a2, (int)&v18);
      if ( v21 != BlockID::AIR && v21 != *(_BYTE *)(Block::mFire + 4) && v21 != *(_BYTE *)(Block::mPortal + 4) )
        break;
      *(_QWORD *)(&v10 - 1) = *(_QWORD *)(v5 + 4);
      v8 = v11 - 1;
      *(_DWORD *)(v5 + 4) = v11 - 1;
      if ( v11 <= v9 || v11 < 2 )
      a2 = *(const BlockPos **)v4;
    }
    v7 = *((_DWORD *)v4 + 3);
  v12 = PortalShape::getDistanceUntilEdge(v4, (const BlockPos *)v5, v7);
  if ( v12 >= 1 )
    BlockPos::relative((BlockPos *)&v15, v5, *((_BYTE *)v4 + 12), v12 - 1);
    *((_DWORD *)v4 + 5) = v15;
    *((_DWORD *)v4 + 6) = v16;
    *((_DWORD *)v4 + 7) = v17;
    *((_BYTE *)v4 + 32) = 1;
    v13 = PortalShape::getDistanceUntilEdge(v4, (PortalShape *)((char *)v4 + 20), *((_DWORD *)v4 + 2));
    *((_DWORD *)v4 + 10) = v13;
    if ( (unsigned int)(v13 - 2) >= 0x14 )
      *((_BYTE *)v4 + 32) = 0;
      *((_DWORD *)v4 + 10) = 0;
  if ( *((_BYTE *)v4 + 32) )
    *((_DWORD *)v4 + 9) = PortalShape::calculatePortalHeight(v4);
  return v4;
}


int __fastcall PortalShape::calculatePortalHeight(PortalShape *this)
{
  PortalShape *v1; // r4@1
  signed int v2; // r1@1
  char *v3; // r5@1
  signed int v4; // r0@1
  BlockPos *v5; // r7@1
  BlockSource *v6; // r6@1
  int v7; // r10@3
  int v8; // r3@4
  char *v9; // r11@11
  BlockSource *v10; // r5@11
  BlockPos *v11; // r6@11
  const BlockPos *v12; // r7@11
  const BlockPos *v13; // r1@11
  int v14; // r0@11
  const BlockPos *v15; // r11@12
  int v16; // r6@20
  const BlockPos *v17; // r7@21
  int v18; // r3@21
  int result; // r0@25
  unsigned __int8 v20; // [sp+14h] [bp-40h]@21
  char v21; // [sp+18h] [bp-3Ch]@21
  int v22; // [sp+1Ch] [bp-38h]@21
  int v23; // [sp+20h] [bp-34h]@21
  int v24; // [sp+24h] [bp-30h]@21
  int v25; // [sp+28h] [bp-2Ch]@21
  int v26; // [sp+2Ch] [bp-28h]@21
  char v27; // [sp+30h] [bp-24h]@11
  unsigned __int8 v28; // [sp+3Ch] [bp-18h]@11
  char v29; // [sp+40h] [bp-14h]@12
  unsigned __int8 v30; // [sp+4Ch] [bp-8h]@12
  unsigned __int8 v31; // [sp+50h] [bp-4h]@1
  char v32; // [sp+54h] [bp+0h]@1
  int v33; // [sp+58h] [bp+4h]@4
  int v34; // [sp+5Ch] [bp+8h]@4
  int v35; // [sp+60h] [bp+Ch]@4
  int v36; // [sp+64h] [bp+10h]@4
  int v37; // [sp+68h] [bp+14h]@4

  v1 = this;
  v2 = 0;
  v3 = (char *)this + 20;
  *((_DWORD *)this + 9) = 0;
  v4 = *((_DWORD *)this + 10);
  v5 = (BlockPos *)&v32;
  v6 = (BlockSource *)&v31;
  do
  {
    if ( v4 >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        BlockPos::relative(v5, (int)v3, *((_BYTE *)v1 + 8), v7);
        v8 = *((_DWORD *)v1 + 9);
        v35 = *(_DWORD *)&v32;
        v36 = v33 + v8;
        v37 = v34;
        BlockSource::getBlockID(v6, *(const BlockPos **)v1, (int)&v35);
        if ( v31 != BlockID::AIR && v31 != *(_BYTE *)(Block::mFire + 4) && v31 != *(_BYTE *)(Block::mPortal + 4) )
        {
LABEL_18:
          v4 = *((_DWORD *)v1 + 10);
          goto LABEL_19;
        }
        if ( v31 == *(_BYTE *)(Block::mPortal + 4) )
          ++*((_DWORD *)v1 + 4);
        if ( v7 )
          if ( v7 != *((_DWORD *)v1 + 10) - 1 )
            goto LABEL_14;
          v9 = v3;
          v10 = v6;
          v11 = v5;
          v12 = *(const BlockPos **)v1;
          BlockPos::relative((BlockPos *)&v27, (int)&v35, *((_BYTE *)v1 + 8), 1);
          v13 = v12;
          v5 = v11;
          v6 = v10;
          v3 = v9;
          BlockSource::getBlockID((BlockSource *)&v28, v13, (int)&v27);
          v14 = v28;
        else
          v15 = *(const BlockPos **)v1;
          BlockPos::relative((BlockPos *)&v29, (int)&v35, *((_BYTE *)v1 + 12), 1);
          BlockSource::getBlockID((BlockSource *)&v30, v15, (int)&v29);
          v14 = v30;
        v31 = v14;
        if ( v14 != *(_BYTE *)(Block::mObsidian + 4) )
          goto LABEL_18;
LABEL_14:
        v4 = *((_DWORD *)v1 + 10);
        if ( ++v7 >= v4 )
          v2 = *((_DWORD *)v1 + 9);
          break;
      }
    }
    *((_DWORD *)v1 + 9) = ++v2;
  }
  while ( v2 < 21 );
LABEL_19:
  if ( v4 >= 1 )
    v16 = 0;
    while ( 1 )
      v17 = *(const BlockPos **)v1;
      BlockPos::relative((BlockPos *)&v21, (int)v3, *((_BYTE *)v1 + 8), v16);
      v18 = *((_DWORD *)v1 + 9);
      v24 = *(_DWORD *)&v21;
      v25 = v22 + v18;
      v26 = v23;
      BlockSource::getBlockID((BlockSource *)&v20, v17, (int)&v24);
      if ( v20 != *(_BYTE *)(Block::mObsidian + 4) )
        break;
      if ( ++v16 >= *((_DWORD *)v1 + 10) )
        goto LABEL_25;
    *((_DWORD *)v1 + 9) = 0;
LABEL_25:
  result = *((_DWORD *)v1 + 9);
  if ( (unsigned int)(result - 3) >= 0x13 )
    result = 0;
    *((_BYTE *)v1 + 32) = 0;
    *((_DWORD *)v1 + 10) = 0;
  return result;
}


int __fastcall PortalShape::getDistanceUntilEdge(PortalShape *this, const BlockPos *a2, int a3)
{
  const BlockPos **v3; // r6@1
  int v4; // r10@1
  const BlockPos *v5; // r8@1
  int v6; // r4@1
  const BlockPos *v7; // r1@5
  const BlockPos *v8; // r5@7
  char v10; // [sp+8h] [bp-50h]@7
  unsigned __int8 v11; // [sp+14h] [bp-44h]@5
  int v12; // [sp+18h] [bp-40h]@5
  int v13; // [sp+1Ch] [bp-3Ch]@5
  int v14; // [sp+20h] [bp-38h]@5
  unsigned __int8 v15; // [sp+24h] [bp-34h]@2
  unsigned __int8 v16; // [sp+28h] [bp-30h]@2
  int v17; // [sp+2Ch] [bp-2Ch]@5
  int v18; // [sp+30h] [bp-28h]@5

  v3 = (const BlockPos **)this;
  v4 = a3;
  v5 = a2;
  v6 = 0;
  do
  {
    BlockPos::relative((BlockPos *)&v16, (int)v5, v4, v6);
    BlockSource::getBlockID((BlockSource *)&v15, *v3, (int)&v16);
    if ( v15 != BlockID::AIR && v15 != *(_BYTE *)(Block::mFire + 4) && v15 != *(_BYTE *)(Block::mPortal + 4) )
      break;
    v7 = *v3;
    v12 = *(_DWORD *)&v16;
    v13 = v17 - 1;
    v14 = v18;
    BlockSource::getBlockID((BlockSource *)&v11, v7, (int)&v12);
    if ( v11 != *(_BYTE *)(Block::mObsidian + 4) )
    ++v6;
  }
  while ( v6 < 22 );
  v8 = *v3;
  BlockPos::relative((BlockPos *)&v10, (int)v5, v4, v6);
  BlockSource::getBlockID((BlockSource *)&v16, v8, (int)&v10);
  if ( v16 != *(_BYTE *)(Block::mObsidian + 4) )
    v6 = 0;
  return v6;
}


int __fastcall PortalShape::updateNeighboringBlocks(int a1, BlockSource *a2, __int64 a3, int a4)
{
  int v4; // r4@1
  BlockSource *v5; // r10@1
  int result; // r0@1
  int *v7; // r6@2
  int *v8; // r11@2
  int v9; // r3@2
  const BlockPos *v10; // r7@3
  int v11; // r11@4
  int v12; // [sp+4h] [bp-7Ch]@3
  char v13; // [sp+8h] [bp-78h]@5
  int v14; // [sp+Ch] [bp-74h]@5
  int v15; // [sp+10h] [bp-70h]@5
  int v16; // [sp+14h] [bp-6Ch]@2
  int v17; // [sp+18h] [bp-68h]@5
  int v18; // [sp+1Ch] [bp-64h]@5
  int v19; // [sp+20h] [bp-60h]@2
  int v20; // [sp+24h] [bp-5Ch]@5
  int v21; // [sp+28h] [bp-58h]@5
  int v22; // [sp+2Ch] [bp-54h]@5
  int v23; // [sp+30h] [bp-50h]@5
  int v24; // [sp+34h] [bp-4Ch]@5
  int v25; // [sp+38h] [bp-48h]@5
  int v26; // [sp+3Ch] [bp-44h]@5
  int v27; // [sp+40h] [bp-40h]@5
  char v28; // [sp+44h] [bp-3Ch]@3
  int v29; // [sp+48h] [bp-38h]@5
  int v30; // [sp+4Ch] [bp-34h]@5
  __int64 v31; // [sp+50h] [bp-30h]@1
  int v32; // [sp+58h] [bp-28h]@1

  v4 = a1;
  v31 = a3;
  v5 = a2;
  v32 = a4;
  result = *(_DWORD *)(a1 + 40);
  if ( result >= 1 )
  {
    v7 = &v19;
    v8 = &v16;
    v9 = 0;
    do
    {
      v12 = v9;
      BlockPos::relative((BlockPos *)&v28, v4 + 20, *(_BYTE *)(v4 + 8), v9);
      v10 = (const BlockPos *)v8;
      if ( *(_DWORD *)(v4 + 36) > 0 )
      {
        v11 = 0;
        do
        {
          v25 = *(_DWORD *)&v28;
          v26 = v11 + v29;
          v27 = v30;
          BlockPos::BlockPos((int)v7, (int)&v31);
          v22 = v25 + v19;
          v23 = v20 + v26;
          v24 = v21 + v27;
          BlockSource::neighborChanged(v5, (const BlockPos *)&v22, (const BlockPos *)&v25);
          BlockPos::BlockPos((int)&v13, (int)&v31);
          v16 = v25 - *(_DWORD *)&v13;
          v17 = v26 - v14;
          v18 = v27 - v15;
          v7 = &v19;
          BlockSource::neighborChanged(v5, v10, (const BlockPos *)&v25);
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v4 + 36) );
      }
      v8 = (int *)v10;
      result = *(_DWORD *)(v4 + 40);
      v9 = v12 + 1;
    }
    while ( v12 + 1 < result );
  }
  return result;
}
