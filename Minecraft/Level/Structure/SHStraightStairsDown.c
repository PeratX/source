

int __fastcall SHStraightStairsDown::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  _DWORD *v10; // r10@1
  int result; // r0@1
  _DWORD *v12; // r0@4
  _DWORD *v13; // r6@4
  unsigned int v14; // r0@4
  int v15; // r2@5
  int v16; // r0@7
  int v17; // [sp+1Ch] [bp-3Ch]@1
  int v18; // [sp+20h] [bp-38h]@1
  int v19; // [sp+24h] [bp-34h]@7
  int v20; // [sp+28h] [bp-30h]@7
  int v21; // [sp+2Ch] [bp-2Ch]@7
  int v22; // [sp+30h] [bp-28h]@7

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v17, a4, a5, a6, -1, -7, 0, 5, 11, 8, a7);
  result = v18;
  if ( v18 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v17)) != 0 )
  {
    *v10 = 0;
  }
  else
    v12 = j_operator new(0x28u);
    v13 = v12;
    v12[5] = 0;
    v12[6] = 0;
    v12[3] = 0;
    v12[4] = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[8] = a8;
    v12[9] = 0;
    *v12 = &off_27241C4;
    v12[7] = a7;
    v14 = j_Random::_genRandInt32(v8) % 5;
    if ( v14 > 3 )
      v15 = 0;
    else
      v15 = dword_2610B1C[v14];
    v16 = v17;
    v13[9] = v15;
    v13[1] = v16;
    v13[2] = v18;
    v13[3] = v19;
    v13[4] = v20;
    v13[5] = v21;
    result = v22;
    v13[6] = v22;
    *v10 = v13;
  return result;
}


int __fastcall SHStraightStairsDown::SHStraightStairsDown(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  unsigned int v8; // r0@1

  v5 = a1;
  v6 = 0;
  v7 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_27241C4;
  *(_DWORD *)(a1 + 28) = a5;
  v8 = j_Random::_genRandInt32(this) % 5;
  if ( v8 <= 3 )
    v6 = dword_2610B1C[v8];
  *(_DWORD *)(v5 + 36) = v6;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)v7;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v5 + 20) = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v7 + 20);
  return v5;
}


int __fastcall SHStraightStairsDown::SHStraightStairsDown(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)result = &off_27241C4;
  return result;
}


signed int __fastcall SHStraightStairsDown::getType(SHStraightStairsDown *this)
{
  return 1397248836;
}


signed int __fastcall SHStraightStairsDown::postProcess(SHStraightStairsDown *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHStraightStairsDown *v4; // r6@1
  BlockSource *v5; // r4@1
  __int16 *v6; // r10@1
  int v7; // r2@1
  BlockState *v8; // r0@1
  void (__fastcall *v9)(SHStraightStairsDown *, BlockSource *, __int16 *, signed int); // r12@1
  SHStraightStairsDown *v10; // r8@1
  signed int v11; // r9@1
  int v12; // r2@1
  int v13; // r11@2
  signed int v14; // ST30_4@2
  void (__fastcall *v15)(SHStraightStairsDown *, BlockSource *, char *, signed int); // r12@2
  void (__fastcall *v16)(SHStraightStairsDown *, BlockSource *, char *, signed int); // r12@2
  void (__fastcall *v17)(SHStraightStairsDown *, BlockSource *, char *, signed int); // r6@2
  void (__fastcall *v18)(SHStraightStairsDown *, BlockSource *, char *, signed int); // r12@3
  void (__fastcall *v19)(SHStraightStairsDown *, BlockSource *, char *, signed int); // r12@3
  void (__fastcall *v20)(SHStraightStairsDown *, BlockSource *, char *, signed int); // r12@3
  char v22; // [sp+28h] [bp-38h]@1
  char v23; // [sp+34h] [bp-2Ch]@1
  char v24; // [sp+35h] [bp-2Bh]@1
  char v25; // [sp+38h] [bp-28h]@1
  char v26; // [sp+39h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v6 = (__int16 *)a4;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    4,
    10,
    7,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v5, v7, v6, *((_DWORD *)v4 + 9), 1);
  v8 = (BlockState *)j_Block::getBlockState(Block::mWoodenDoor, 11);
  j_BlockState::getMask(v8);
  v9 = *(void (__fastcall **)(SHStraightStairsDown *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v25 = BlockID::AIR;
  v23 = BlockID::AIR;
  v26 = 0;
  v24 = 0;
  v9(v4, v5, v6, 1);
  v10 = v4;
  v22 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 2);
  v11 = 6;
  v12 = 0;
  do
  {
    v13 = v12 + 1;
    v14 = v12;
    v15 = *(void (__fastcall **)(SHStraightStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v10 + 36);
    v25 = *(_BYTE *)(Block::mStoneStairs + 4);
    v26 = v22;
    v15(v10, v5, &v25, 1);
    v16 = *(void (__fastcall **)(SHStraightStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v10 + 36);
    v16(v10, v5, &v25, 2);
    v17 = *(void (__fastcall **)(SHStraightStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v10 + 36);
    v17(v10, v5, &v25, 3);
    if ( v14 < 5 )
    {
      v18 = *(void (__fastcall **)(SHStraightStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v10 + 36);
      v25 = *(_BYTE *)(Block::mStoneBrick + 4);
      v26 = 0;
      v18(v10, v5, &v25, 1);
      v19 = *(void (__fastcall **)(SHStraightStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v10 + 36);
      v19(v10, v5, &v25, 2);
      v20 = *(void (__fastcall **)(SHStraightStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v10 + 36);
      v20(v10, v5, &v25, 3);
    }
    --v11;
    v12 = v13;
  }
  while ( v11 );
  return 1;
}
