

int __fastcall SHPrisonHall::SHPrisonHall(int a1, int a2, Random *this, int a4, int a5)
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
  *(_DWORD *)a1 = &off_27240EC;
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


signed int __fastcall SHPrisonHall::getType(SHPrisonHall *this)
{
  return 1397248072;
}


int __fastcall SHPrisonHall::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  j_BoundingBox::orientBox((BoundingBox *)&v17, a4, a5, a6, -1, -1, 0, 9, 5, 11, a7);
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
    *v12 = &off_27240EC;
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


int __fastcall SHPrisonHall::SHPrisonHall(int result)
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
  *(_DWORD *)result = &off_27240EC;
  return result;
}


signed int __fastcall SHPrisonHall::postProcess(SHPrisonHall *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHPrisonHall *v4; // r6@1
  unsigned __int64 v5; // r8@1
  BlockSource *v6; // r11@1
  __int16 *v7; // r5@1
  int v8; // r2@1
  void (__fastcall *v9)(SHPrisonHall *, BlockSource *, __int16 *, signed int); // r12@1
  void (__fastcall *v10)(SHPrisonHall *, BlockSource *, __int16 *, signed int); // r12@1
  void (__fastcall *v11)(SHPrisonHall *, BlockSource *, __int16 *, signed int); // r12@1
  void (__fastcall *v12)(SHPrisonHall *, BlockSource *, char *, signed int); // r4@1
  void (__fastcall *v13)(SHPrisonHall *, BlockSource *, char *, signed int); // r7@1
  char v15; // [sp+20h] [bp-40h]@1
  char v16; // [sp+21h] [bp-3Fh]@1
  char v17; // [sp+24h] [bp-3Ch]@1
  char v18; // [sp+25h] [bp-3Bh]@1
  char v19; // [sp+28h] [bp-38h]@1
  char v20; // [sp+29h] [bp-37h]@1
  char v21; // [sp+2Ch] [bp-34h]@1
  char v22; // [sp+2Dh] [bp-33h]@1
  char v23; // [sp+30h] [bp-30h]@1
  char v24; // [sp+31h] [bp-2Fh]@1
  char v25; // [sp+34h] [bp-2Ch]@1
  char v26; // [sp+35h] [bp-2Bh]@1
  char v27; // [sp+38h] [bp-28h]@1
  char v28; // [sp+39h] [bp-27h]@1

  v4 = this;
  v5 = __PAIR__(&StrongholdPiece::smoothStoneSelector, (unsigned int)a3);
  v6 = a2;
  v7 = (__int16 *)a4;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    8,
    4,
    10,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v6, v8, v7, *((_DWORD *)v4 + 9), 1);
  v9 = *(void (__fastcall **)(SHPrisonHall *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v25 = BlockID::AIR;
  v23 = BlockID::AIR;
  v26 = 0;
  v24 = 0;
  v9(v4, v6, v7, 1);
    v4,
    v6,
    (const BoundingBox *)v7,
    1,
    3,
    (Random *)v5,
    (BlockSelector *)HIDWORD(v5));
    7,
    9,
  v10 = *(void (__fastcall **)(SHPrisonHall *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v21 = *(_BYTE *)(Block::mIronFence + 4);
  v22 = 0;
  v19 = *(_BYTE *)(Block::mIronFence + 4);
  v20 = 0;
  v10(v4, v6, v7, 4);
  v11 = *(void (__fastcall **)(SHPrisonHall *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v17 = *(_BYTE *)(Block::mIronFence + 4);
  v18 = 0;
  v15 = *(_BYTE *)(Block::mIronFence + 4);
  v16 = 0;
  v11(v4, v6, v7, 5);
  v12 = *(void (__fastcall **)(SHPrisonHall *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v27 = *(_BYTE *)(Block::mIronFence + 4);
  v28 = 0;
  v12(v4, v6, &v27, 4);
  v13 = *(void (__fastcall **)(SHPrisonHall *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v13(v4, v6, &v27, 4);
  return 1;
}
