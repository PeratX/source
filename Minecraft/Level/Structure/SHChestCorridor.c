

int __fastcall SHChestCorridor::SHChestCorridor(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  unsigned int v7; // r0@1
  int v8; // r1@1
  int result; // r0@3

  v5 = a1;
  v6 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_2723EF4;
  *(_DWORD *)(a1 + 28) = a5;
  v7 = j_Random::_genRandInt32(this) % 5;
  v8 = 0;
  if ( v7 <= 3 )
    v8 = dword_2610B1C[v7];
  *(_DWORD *)(v5 + 36) = v8;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)v6;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v5 + 20) = *(_DWORD *)(v6 + 16);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v6 + 20);
  result = v5;
  *(_BYTE *)(v5 + 40) = 0;
  return result;
}


int __fastcall SHChestCorridor::SHChestCorridor(int result)
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
  *(_DWORD *)result = &off_2723EF4;
  return result;
}


signed int __fastcall SHChestCorridor::getType(SHChestCorridor *this)
{
  return 1397244744;
}


signed int __fastcall SHChestCorridor::postProcess(SHChestCorridor *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHChestCorridor *v4; // r7@1
  const BoundingBox *v5; // r10@1
  BlockSource *v6; // r11@1
  int v7; // r2@1
  BlockState *v8; // r0@1
  void (__fastcall *v9)(SHChestCorridor *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v10)(SHChestCorridor *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v11)(SHChestCorridor *, BlockSource *, char *, signed int); // r5@1
  void (__fastcall *v12)(SHChestCorridor *, BlockSource *, char *, signed int); // r5@1
  void (__fastcall *v13)(SHChestCorridor *, BlockSource *, char *, signed int); // r5@1
  void (__fastcall *v14)(SHChestCorridor *, BlockSource *, char *, signed int); // r5@1
  void (__fastcall *v15)(SHChestCorridor *, BlockSource *, char *, signed int); // r5@1
  void (__fastcall *v16)(SHChestCorridor *, BlockSource *, char *, signed int); // r6@1
  void (__fastcall *v17)(SHChestCorridor *, BlockSource *, char *, signed int); // r6@1
  int v18; // r9@2
  int v19; // r4@2
  int v20; // r0@2
  void (__fastcall *v21)(SHChestCorridor *, BlockSource *, const BoundingBox *, Random *); // r4@8
  void *v22; // r0@8
  unsigned int *v24; // r2@10
  signed int v25; // r1@12
  Random *v26; // [sp+20h] [bp-40h]@1
  int v27; // [sp+28h] [bp-38h]@8
  char v28; // [sp+2Ch] [bp-34h]@1
  char v29; // [sp+2Dh] [bp-33h]@1
  char v30; // [sp+30h] [bp-30h]@1
  char v31; // [sp+31h] [bp-2Fh]@1
  char v32; // [sp+34h] [bp-2Ch]@1
  char v33; // [sp+35h] [bp-2Bh]@1
  char v34; // [sp+38h] [bp-28h]@1
  char v35; // [sp+39h] [bp-27h]@1

  v4 = this;
  v5 = a4;
  v6 = a2;
  v26 = a3;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    4,
    6,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v6, v7, (__int16 *)v5, *((_DWORD *)v4 + 9), 1);
  v8 = (BlockState *)j_Block::getBlockState(Block::mWoodenDoor, 11);
  j_BlockState::getMask(v8);
  v9 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v34 = BlockID::AIR;
  v32 = BlockID::AIR;
  v35 = 0;
  v33 = 0;
  v9(v4, v6, v5, 1);
  v10 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v30 = *(_BYTE *)(Block::mStoneBrick + 4);
  v28 = BlockID::AIR;
  v31 = 0;
  v29 = 0;
  v10(v4, v6, v5, 3);
  v11 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v34 = *(_BYTE *)(Block::mStoneSlab + 4);
  v35 = 5;
  v11(v4, v6, &v34, 3);
  v12 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v12(v4, v6, &v34, 3);
  v13 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v13(v4, v6, &v34, 3);
  v14 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v14(v4, v6, &v34, 3);
  v15 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v15(v4, v6, &v34, 2);
  v16 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v16(v4, v6, &v34, 2);
  v17 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v17(v4, v6, &v34, 2);
  if ( !*((_BYTE *)v4 + 40) )
  {
    v18 = j_StructurePiece::getWorldY(v4, 2);
    v19 = (*(int (__fastcall **)(SHChestCorridor *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 3, 3);
    v20 = (*(int (__fastcall **)(SHChestCorridor *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 3, 3);
    if ( *(_DWORD *)v5 <= v19
      && *((_DWORD *)v5 + 3) >= v19
      && *((_DWORD *)v5 + 2) <= v20
      && *((_DWORD *)v5 + 5) >= v20
      && *((_DWORD *)v5 + 1) <= v18
      && *((_DWORD *)v5 + 4) >= v18 )
    {
      *((_BYTE *)v4 + 40) = 1;
      v21 = *(void (__fastcall **)(SHChestCorridor *, BlockSource *, const BoundingBox *, Random *))(*(_DWORD *)v4 + 48);
      sub_21E94B4((void **)&v27, "loot_tables/chests/stronghold_corridor.json");
      v21(v4, v6, v5, v26);
      v22 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v24 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      }
    }
  }
  return 1;
}


int __fastcall SHChestCorridor::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  _DWORD *v10; // r10@1
  int result; // r0@1
  _DWORD *v12; // r0@4
  _DWORD *v13; // r6@4
  unsigned int v14; // r0@4
  int v15; // r2@4
  unsigned int v16; // r1@4
  int v17; // r1@6
  int v18; // [sp+20h] [bp-38h]@1
  int v19; // [sp+24h] [bp-34h]@1
  int v20; // [sp+28h] [bp-30h]@6
  int v21; // [sp+2Ch] [bp-2Ch]@6
  int v22; // [sp+30h] [bp-28h]@6
  int v23; // [sp+34h] [bp-24h]@6

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v18, a4, a5, a6, -1, -1, 0, 5, 5, 7, a7);
  result = v19;
  if ( v19 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v18)) != 0 )
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
    *v12 = &off_2723EF4;
    v12[7] = a7;
    v14 = j_Random::_genRandInt32(v8);
    v15 = 0;
    v16 = v14 % 5;
    result = 0;
    if ( v16 <= 3 )
      v15 = dword_2610B1C[v16];
    v17 = v18;
    v13[9] = v15;
    v13[1] = v17;
    v13[2] = v19;
    v13[3] = v20;
    v13[4] = v21;
    v13[5] = v22;
    v13[6] = v23;
    *((_BYTE *)v13 + 40) = 0;
    *v10 = v13;
  return result;
}
