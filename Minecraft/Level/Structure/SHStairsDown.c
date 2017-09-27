

int __fastcall SHStairsDown::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  int v17; // [sp+20h] [bp-38h]@1
  int v18; // [sp+24h] [bp-34h]@1
  int v19; // [sp+28h] [bp-30h]@7
  int v20; // [sp+2Ch] [bp-2Ch]@7
  int v21; // [sp+30h] [bp-28h]@7
  int v22; // [sp+34h] [bp-24h]@7

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v17, a4, a5, a6, -1, -7, 0, 5, 11, 5, a7);
  result = v18;
  if ( v18 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v17)) != 0 )
  {
    *v10 = 0;
  }
  else
    v12 = j_operator new(0x2Cu);
    v13 = v12;
    v12[5] = 0;
    v12[6] = 0;
    v12[3] = 0;
    v12[4] = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[8] = a8;
    v12[9] = 0;
    *v12 = &off_2723E64;
    *((_BYTE *)v12 + 40) = 0;
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


int __fastcall SHStairsDown::SHStairsDown(int a1, int a2, Random *this, int a4, int a5)
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
  *(_DWORD *)a1 = &off_2723E64;
  *(_BYTE *)(a1 + 40) = 0;
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


int __fastcall SHStairsDown::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)(a1 + 40) )
    sub_21E8190((void **)(a2 + 60), "FiveCrossing", (_BYTE *)0xC);
  return j_StrongholdPiece::generateSmallDoorChildForward(v4, v7, v6, v5, 1, 1);
}


signed int __fastcall SHStairsDown::getType(SHStairsDown *this)
{
  return 1397248836;
}


int __fastcall SHStairsDown::SHStairsDown(int result)
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
  *(_DWORD *)result = &off_2723E64;
  *(_BYTE *)(result + 40) = 0;
  return result;
}


signed int __fastcall SHStairsDown::postProcess(SHStairsDown *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHStairsDown *v4; // r6@1
  __int16 *v5; // r5@1
  BlockSource *v6; // r4@1
  BlockState *v7; // r0@1
  void (__fastcall *v8)(SHStairsDown *, BlockSource *, __int16 *, signed int); // r7@1
  void (__fastcall *v9)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v10)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v11)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v12)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v13)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v14)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v15)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v16)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v17)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v18)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v19)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v20)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v21)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v22)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v23)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v24)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v25)(SHStairsDown *, BlockSource *, char *, signed int); // r7@1
  char v27; // [sp+24h] [bp-2Ch]@1
  char v28; // [sp+25h] [bp-2Bh]@1
  char v29; // [sp+28h] [bp-28h]@1
  char v30; // [sp+29h] [bp-27h]@1

  v4 = this;
  v5 = (__int16 *)a4;
  v6 = a2;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    4,
    10,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v6, 1, v5, *((_DWORD *)v4 + 9), 1);
  v7 = (BlockState *)j_Block::getBlockState(Block::mWoodenDoor, 11);
  j_BlockState::getMask(v7);
  v8 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v29 = BlockID::AIR;
  v27 = BlockID::AIR;
  v30 = 0;
  v28 = 0;
  v8(v4, v6, v5, 1);
  v9 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v29 = *(_BYTE *)(Block::mStoneBrick + 4);
  v9(v4, v6, &v29, 2);
  v10 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v10(v4, v6, &v29, 1);
  v11 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v29 = *(_BYTE *)(Block::mStoneSlab + 4);
  v30 = 5;
  v11(v4, v6, &v29, 1);
  v12 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v12(v4, v6, &v29, 1);
  v13 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v13(v4, v6, &v29, 1);
  v14 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v14(v4, v6, &v29, 1);
  v15 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v15(v4, v6, &v29, 2);
  v16 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v16(v4, v6, &v29, 3);
  v17 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v17(v4, v6, &v29, 3);
  v18 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v18(v4, v6, &v29, 3);
  v19 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v19(v4, v6, &v29, 3);
  v20 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v20(v4, v6, &v29, 3);
  v21 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v21(v4, v6, &v29, 2);
  v22 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v22(v4, v6, &v29, 1);
  v23 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v23(v4, v6, &v29, 1);
  v24 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v24(v4, v6, &v29, 1);
  v25 = *(void (__fastcall **)(SHStairsDown *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v25(v4, v6, &v29, 1);
  return 1;
}


int __fastcall SHStairsDown::SHStairsDown(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int result; // r0@1

  v5 = a1;
  v6 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_2723E64;
  *(_BYTE *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 28) = j_Random::_genRandInt32(this) & 3;
  *(_DWORD *)(v5 + 36) = 0;
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = 64;
  result = v5;
  *(_DWORD *)(v5 + 12) = a5;
  *(_DWORD *)(v5 + 16) = v6 + 4;
  *(_DWORD *)(v5 + 20) = 74;
  *(_DWORD *)(v5 + 24) = a5 + 4;
  return result;
}
