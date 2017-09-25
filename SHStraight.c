

int __fastcall SHStraight::SHStraight(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  Random *v6; // r5@1
  int v7; // r7@1
  int v8; // r6@1
  unsigned int v9; // r0@1

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
  *(_DWORD *)a1 = &off_272417C;
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
  *(_BYTE *)(v5 + 40) = ~(unsigned __int8)j_Random::_genRandInt32(v6) & 1;
  *(_BYTE *)(v5 + 41) = ~(unsigned __int8)j_Random::_genRandInt32(v6) & 1;
  return v5;
}


unsigned int __fastcall SHStraight::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  unsigned int v8; // r0@1
  unsigned int result; // r0@2

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_StrongholdPiece::generateSmallDoorChildForward(a1, a2, a3, a4, 1, 1);
  v8 = *(_WORD *)(v7 + 40);
  if ( (_BYTE)v8 )
  {
    j_StrongholdPiece::generateSmallDoorChildLeft(v7, v6, v5, v4, 1, 2);
    result = *(_BYTE *)(v7 + 41);
  }
  else
    result = v8 >> 8;
  if ( result )
    result = j_StrongholdPiece::generateSmallDoorChildRight(v7, v6, v5, v4, 1, 2);
  return result;
}


signed int __fastcall SHStraight::getType(SHStraight *this)
{
  return 1397248852;
}


int __fastcall SHStraight::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  _DWORD *v10; // r10@1
  int result; // r0@1
  _DWORD *v12; // r0@4
  _DWORD *v13; // r6@4
  unsigned int v14; // r0@4
  int v15; // r0@5
  int v16; // [sp+20h] [bp-38h]@1
  int v17; // [sp+24h] [bp-34h]@1
  int v18; // [sp+28h] [bp-30h]@7
  int v19; // [sp+2Ch] [bp-2Ch]@7
  int v20; // [sp+30h] [bp-28h]@7
  int v21; // [sp+34h] [bp-24h]@7

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v16, a4, a5, a6, -1, -1, 0, 5, 5, 7, a7);
  result = v17;
  if ( v17 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v16)) != 0 )
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
    *v12 = &off_272417C;
    v12[7] = a7;
    v14 = j_Random::_genRandInt32(v8) % 5;
    if ( v14 > 3 )
      v15 = 0;
    else
      v15 = dword_2610B1C[v14];
    v13[9] = v15;
    v13[1] = v16;
    v13[2] = v17;
    v13[3] = v18;
    v13[4] = v19;
    v13[5] = v20;
    v13[6] = v21;
    *((_BYTE *)v13 + 40) = ~(unsigned __int8)j_Random::_genRandInt32(v8) & 1;
    result = ~j_Random::_genRandInt32(v8) & 1;
    *((_BYTE *)v13 + 41) = result;
    *v10 = v13;
  return result;
}


signed int __fastcall SHStraight::postProcess(SHStraight *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHStraight *v4; // r6@1
  __int16 *v5; // r9@1
  Random *v6; // r10@1
  BlockSource *v7; // r5@1
  int v8; // r2@1
  BlockState *v9; // r0@1
  void (__fastcall *v10)(SHStraight *, BlockSource *, __int16 *, signed int); // r7@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  int v14; // r0@1
  unsigned int v15; // r0@1
  void (__fastcall *v16)(SHStraight *, BlockSource *, __int16 *, _DWORD); // r7@2
  unsigned int v17; // r0@2
  void (__fastcall *v18)(SHStraight *, BlockSource *, __int16 *, signed int); // r7@5
  char v20; // [sp+24h] [bp-4Ch]@5
  char v21; // [sp+25h] [bp-4Bh]@5
  char v22; // [sp+28h] [bp-48h]@5
  char v23; // [sp+29h] [bp-47h]@5
  char v24; // [sp+2Ch] [bp-44h]@2
  char v25; // [sp+2Dh] [bp-43h]@2
  char v26; // [sp+30h] [bp-40h]@2
  char v27; // [sp+31h] [bp-3Fh]@2
  char v28; // [sp+34h] [bp-3Ch]@1
  char v29; // [sp+38h] [bp-38h]@1
  char v30; // [sp+3Ch] [bp-34h]@1
  char v31; // [sp+40h] [bp-30h]@1
  char v32; // [sp+44h] [bp-2Ch]@1
  char v33; // [sp+45h] [bp-2Bh]@1
  char v34; // [sp+48h] [bp-28h]@1
  char v35; // [sp+49h] [bp-27h]@1

  v4 = this;
  v5 = (__int16 *)a4;
  v6 = a3;
  v7 = a2;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    4,
    6,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v7, v8, v5, *((_DWORD *)v4 + 9), 1);
  v9 = (BlockState *)j_Block::getBlockState(Block::mWoodenDoor, 11);
  j_BlockState::getMask(v9);
  v10 = *(void (__fastcall **)(SHStraight *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v34 = BlockID::AIR;
  v32 = BlockID::AIR;
  v35 = 0;
  v33 = 0;
  v10(v4, v7, v5, 1);
  v31 = *(_BYTE *)(Block::mTorch + 4);
  v11 = j_StructurePiece::getTorchData(v4, 1);
  j_StructurePiece::maybeGenerateBlock(*(float *)&v4, (int)v7, (int)v5, (int)v6, 1036831949, 1, 2, 1, (int)&v31, v11);
  v30 = *(_BYTE *)(Block::mTorch + 4);
  v12 = j_StructurePiece::getTorchData(v4, 3);
  j_StructurePiece::maybeGenerateBlock(*(float *)&v4, (int)v7, (int)v5, (int)v6, 1036831949, 3, 2, 1, (int)&v30, v12);
  v29 = *(_BYTE *)(Block::mTorch + 4);
  v13 = j_StructurePiece::getTorchData(v4, 1);
  j_StructurePiece::maybeGenerateBlock(*(float *)&v4, (int)v7, (int)v5, (int)v6, 1036831949, 1, 2, 5, (int)&v29, v13);
  v28 = *(_BYTE *)(Block::mTorch + 4);
  v14 = j_StructurePiece::getTorchData(v4, 3);
  j_StructurePiece::maybeGenerateBlock(*(float *)&v4, (int)v7, (int)v5, (int)v6, 1036831949, 3, 2, 5, (int)&v28, v14);
  v15 = *((_WORD *)v4 + 20);
  if ( (_BYTE)v15 )
  {
    v16 = *(void (__fastcall **)(SHStraight *, BlockSource *, __int16 *, _DWORD))(*(_DWORD *)v4 + 40);
    v26 = BlockID::AIR;
    v24 = BlockID::AIR;
    v27 = 0;
    v25 = 0;
    v16(v4, v7, v5, 0);
    v17 = *((_BYTE *)v4 + 41);
  }
  else
    v17 = v15 >> 8;
  if ( v17 )
    v18 = *(void (__fastcall **)(SHStraight *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
    v22 = BlockID::AIR;
    v20 = BlockID::AIR;
    v23 = 0;
    v21 = 0;
    v18(v4, v7, v5, 4);
  return 1;
}


int __fastcall SHStraight::SHStraight(int result)
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
  *(_DWORD *)result = &off_272417C;
  return result;
}
