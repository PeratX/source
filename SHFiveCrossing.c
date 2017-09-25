

int __fastcall SHFiveCrossing::SHFiveCrossing(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  Random *v6; // r5@1
  int v7; // r7@1
  int v8; // r6@1
  unsigned int v9; // r0@1
  unsigned int v10; // r0@3

  v5 = a1;
  v6 = this;
  v7 = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v8 = a4;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_2723F84;
  *(_DWORD *)(a1 + 28) = a5;
  v9 = j_Random::_genRandInt32(this) % 5;
  if ( v9 <= 3 )
    v7 = dword_2610B1C[v9];
  *(_DWORD *)(v5 + 36) = v7;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)v8;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v5 + 20) = *(_DWORD *)(v8 + 16);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v8 + 20);
  *(_BYTE *)(v5 + 41) = (j_Random::_genRandInt32(v6) >> 27) & 1;
  *(_BYTE *)(v5 + 40) = (j_Random::_genRandInt32(v6) >> 27) & 1;
  *(_BYTE *)(v5 + 43) = (j_Random::_genRandInt32(v6) >> 27) & 1;
  v10 = j_Random::_genRandInt32(v6) % 3;
  if ( v10 )
    LOBYTE(v10) = 1;
  *(_BYTE *)(v5 + 42) = v10;
  return v5;
}


int __fastcall SHFiveCrossing::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r8@1
  int v8; // r9@1
  int v9; // r6@1
  unsigned int v10; // r0@1
  int v11; // r5@1
  unsigned int v12; // r0@7
  unsigned int v13; // r0@8
  int result; // r0@12

  v4 = a1;
  v5 = 5;
  v6 = *(_DWORD *)(a1 + 28);
  v7 = a4;
  v8 = a3;
  v9 = a2;
  j_StrongholdPiece::generateSmallDoorChildForward(a1, a2, a3, a4, 5, 1);
  v10 = v6 - 1;
  v11 = 3;
  if ( v10 < 2 )
    v5 = 3;
    v11 = 5;
  if ( *(_BYTE *)(v4 + 41) )
    j_StrongholdPiece::generateSmallDoorChildLeft(v4, v9, v8, v7, v11, 1);
  v12 = *(_DWORD *)(v4 + 40);
  if ( (_BYTE)v12 )
  {
    j_StrongholdPiece::generateSmallDoorChildLeft(v4, v9, v8, v7, v5, 7);
    v13 = *(_BYTE *)(v4 + 43);
  }
  else
    v13 = v12 >> 24;
  if ( v13 )
    j_StrongholdPiece::generateSmallDoorChildRight(v4, v9, v8, v7, v11, 1);
  result = *(_BYTE *)(v4 + 42);
  if ( *(_BYTE *)(v4 + 42) )
    result = j_StrongholdPiece::generateSmallDoorChildRight(v4, v9, v8, v7, v5, 7);
  return result;
}


signed int __fastcall SHFiveCrossing::getType(SHFiveCrossing *this)
{
  return 1397241155;
}


int __fastcall SHFiveCrossing::SHFiveCrossing(int result)
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
  *(_DWORD *)result = &off_2723F84;
  return result;
}


int __fastcall SHFiveCrossing::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  SHFiveCrossing **v10; // r10@1
  int result; // r0@1
  SHFiveCrossing *v12; // r6@4
  char v13; // [sp+1Ch] [bp-3Ch]@1
  int v14; // [sp+20h] [bp-38h]@1

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (SHFiveCrossing **)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v13, a4, a5, a6, -4, -3, 0, 10, 9, 11, a7);
  result = v14;
  if ( v14 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v13)) != 0 )
  {
    *v10 = 0;
  }
  else
    v12 = (SHFiveCrossing *)j_operator new(0x2Cu);
    result = j_SHFiveCrossing::SHFiveCrossing(v12, a8, v8, (const BoundingBox *)&v13, a7);
    *v10 = v12;
  return result;
}


signed int __fastcall SHFiveCrossing::postProcess(SHFiveCrossing *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHFiveCrossing *v4; // r6@1
  Random *v5; // r9@1
  BlockSource *v6; // r11@1
  __int16 *v7; // r5@1
  int v8; // r2@1
  void (__fastcall *v9)(SHFiveCrossing *, BlockSource *, __int16 *, _DWORD); // r12@2
  void (__fastcall *v10)(SHFiveCrossing *, BlockSource *, __int16 *, signed int); // r7@4
  unsigned int v11; // r0@5
  void (__fastcall *v12)(SHFiveCrossing *, BlockSource *, __int16 *, _DWORD); // r7@6
  unsigned int v13; // r0@6
  void (__fastcall *v14)(SHFiveCrossing *, BlockSource *, __int16 *, signed int); // r7@9
  void (__fastcall *v15)(SHFiveCrossing *, BlockSource *, __int16 *, signed int); // r4@10
  char v16; // r0@10
  void (__fastcall *v17)(SHFiveCrossing *, BlockSource *, char *, signed int); // r7@10
  char v19; // [sp+30h] [bp-88h]@10
  char v20; // [sp+34h] [bp-84h]@10
  char v21; // [sp+38h] [bp-80h]@10
  char v22; // [sp+3Ch] [bp-7Ch]@10
  char v23; // [sp+40h] [bp-78h]@10
  char v24; // [sp+44h] [bp-74h]@10
  char v25; // [sp+48h] [bp-70h]@10
  char v26; // [sp+4Ch] [bp-6Ch]@10
  char v27; // [sp+50h] [bp-68h]@10
  char v28; // [sp+54h] [bp-64h]@10
  char v29; // [sp+58h] [bp-60h]@10
  char v30; // [sp+5Ch] [bp-5Ch]@10
  char v31; // [sp+60h] [bp-58h]@10
  char v32; // [sp+64h] [bp-54h]@10
  char v33; // [sp+68h] [bp-50h]@10
  char v34; // [sp+69h] [bp-4Fh]@10
  char v35; // [sp+6Ch] [bp-4Ch]@10
  char v36; // [sp+6Dh] [bp-4Bh]@10
  char v37; // [sp+70h] [bp-48h]@9
  char v38; // [sp+71h] [bp-47h]@9
  char v39; // [sp+74h] [bp-44h]@9
  char v40; // [sp+75h] [bp-43h]@9
  char v41; // [sp+78h] [bp-40h]@6
  char v42; // [sp+79h] [bp-3Fh]@6
  char v43; // [sp+7Ch] [bp-3Ch]@6
  char v44; // [sp+7Dh] [bp-3Bh]@6
  char v45; // [sp+80h] [bp-38h]@4
  char v46; // [sp+81h] [bp-37h]@4
  char v47; // [sp+84h] [bp-34h]@4
  char v48; // [sp+85h] [bp-33h]@4
  char v49; // [sp+88h] [bp-30h]@2
  char v50; // [sp+89h] [bp-2Fh]@2
  char v51; // [sp+8Ch] [bp-2Ch]@2
  char v52; // [sp+8Dh] [bp-2Bh]@2
  char v53; // [sp+90h] [bp-28h]@10
  char v54; // [sp+91h] [bp-27h]@10

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = (__int16 *)a4;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    9,
    8,
    10,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v6, v8, v7, *((_DWORD *)v4 + 9), 4);
  if ( *((_BYTE *)v4 + 41) )
  {
    v9 = *(void (__fastcall **)(SHFiveCrossing *, BlockSource *, __int16 *, _DWORD))(*(_DWORD *)v4 + 40);
    v51 = BlockID::AIR;
    v49 = BlockID::AIR;
    v52 = 0;
    v50 = 0;
    v9(v4, v6, v7, 0);
  }
  if ( *((_BYTE *)v4 + 43) )
    v10 = *(void (__fastcall **)(SHFiveCrossing *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v47 = BlockID::AIR;
    v45 = BlockID::AIR;
    v48 = 0;
    v46 = 0;
    v10(v4, v6, v7, 9);
  v11 = *((_DWORD *)v4 + 10);
  if ( (_BYTE)v11 )
    v12 = *(void (__fastcall **)(SHFiveCrossing *, BlockSource *, __int16 *, _DWORD))(*(_DWORD *)v4 + 40);
    v43 = BlockID::AIR;
    v41 = BlockID::AIR;
    v44 = 0;
    v42 = 0;
    v12(v4, v6, v7, 0);
    LOBYTE(v13) = *((_BYTE *)v4 + 42);
  else
    v13 = v11 >> 16;
  if ( (_BYTE)v13 )
    v14 = *(void (__fastcall **)(SHFiveCrossing *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v39 = BlockID::AIR;
    v37 = BlockID::AIR;
    v40 = 0;
    v38 = 0;
    v14(v4, v6, v7, 9);
  v15 = *(void (__fastcall **)(SHFiveCrossing *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v35 = BlockID::AIR;
  v33 = BlockID::AIR;
  v36 = 0;
  v34 = 0;
  v15(v4, v6, v7, 5);
    v4,
    v6,
    (const BoundingBox *)v7,
    1,
    2,
    6,
    v5,
    4,
    5,
    7,
    3,
  v32 = *(_BYTE *)(Block::mStoneSlab + 4);
  v31 = BlockID::AIR;
  j_StructurePiece::generateBox((int)v4, (int)v6, (int)v7, 1, 3, 4, 3, 3, 4, &v32, 5, &v31, 0);
  v30 = *(_BYTE *)(Block::mStoneSlab + 4);
  v29 = BlockID::AIR;
  j_StructurePiece::generateBox((int)v4, (int)v6, (int)v7, 1, 4, 6, 3, 4, 6, &v30, 5, &v29, 0);
  v28 = *(_BYTE *)(Block::mStoneSlab + 4);
  v27 = BlockID::AIR;
  j_StructurePiece::generateBox((int)v4, (int)v6, (int)v7, 5, 1, 9, 7, 1, 9, &v28, 5, &v27, 0);
  v26 = *(_BYTE *)(Block::mStoneSlab + 4);
  v25 = BlockID::AIR;
  j_StructurePiece::generateBox((int)v4, (int)v6, (int)v7, 5, 2, 7, 7, 2, 7, &v26, 5, &v25, 0);
  v24 = *(_BYTE *)(Block::mStoneSlab + 4);
  v23 = BlockID::AIR;
  j_StructurePiece::generateBox((int)v4, (int)v6, (int)v7, 4, 5, 7, 4, 5, 9, &v24, 5, &v23, 0);
  v22 = *(_BYTE *)(Block::mStoneSlab + 4);
  v21 = BlockID::AIR;
  j_StructurePiece::generateBox((int)v4, (int)v6, (int)v7, 8, 5, 7, 8, 5, 9, &v22, 5, &v21, 0);
  v20 = *(_BYTE *)(Block::mDoubleStoneSlab + 4);
  v19 = BlockID::AIR;
  j_StructurePiece::generateBox((int)v4, (int)v6, (int)v7, 5, 5, 7, 7, 5, 9, &v20, 0, &v19, 0);
  LOBYTE(v15) = *(_BYTE *)(Block::mTorch + 4);
  v16 = j_StructurePiece::getTorchData(v4, 2);
  v17 = *(void (__fastcall **)(SHFiveCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v53 = (char)v15;
  v54 = v16;
  v17(v4, v6, &v53, 6);
  return 1;
}
