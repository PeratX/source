

_DWORD *__fastcall StrongholdPiece::findAndCreatePieceFactory(SHFiveCrossing **a1, int a2, const void **a3, __int64 *a4, Random *a5, int a6, int a7, int a8, int a9, int a10)
{
  const void **v10; // r7@1
  SHFiveCrossing **v11; // r4@1
  __int64 *v12; // r6@1
  _DWORD *result; // r0@12
  SHFiveCrossing *v14; // r7@20
  int v15; // r1@27
  SHFiveCrossing *v16; // [sp+20h] [bp-60h]@24
  SHFiveCrossing *v17; // [sp+24h] [bp-5Ch]@23
  SHFiveCrossing *v18; // [sp+28h] [bp-58h]@19
  SHFiveCrossing *v19; // [sp+2Ch] [bp-54h]@18
  SHFiveCrossing *v20; // [sp+30h] [bp-50h]@17
  SHFiveCrossing *v21; // [sp+34h] [bp-4Ch]@16
  SHFiveCrossing *v22; // [sp+38h] [bp-48h]@15
  SHFiveCrossing *v23; // [sp+3Ch] [bp-44h]@14
  SHFiveCrossing *v24; // [sp+40h] [bp-40h]@13
  int v25; // [sp+44h] [bp-3Ch]@20
  _DWORD *v26; // [sp+48h] [bp-38h]@20
  int v27; // [sp+4Ch] [bp-34h]@27
  int v28; // [sp+50h] [bp-30h]@27
  int v29; // [sp+54h] [bp-2Ch]@27
  int v30; // [sp+58h] [bp-28h]@27

  v10 = a3;
  v11 = a1;
  v12 = a4;
  if ( !sub_21E7D6C(a3, "Straight") )
  {
    j_SHStraight::createPiece((int)&v24, (int)v12, (int)a5, a6, a7, a8, a9, a10);
    *v11 = v24;
    result = 0;
    v24 = 0;
    return result;
  }
  if ( !sub_21E7D6C(v10, "PrisonHall") )
    j_SHPrisonHall::createPiece((int)&v23, (int)v12, (int)a5, a6, a7, a8, a9, a10);
    *v11 = v23;
    v23 = 0;
  if ( !sub_21E7D6C(v10, "LeftTurn") )
    j_SHLeftTurn::createPiece((int)&v22, (int)v12, (int)a5, a6, a7, a8, a9, a10);
    *v11 = v22;
    v22 = 0;
  if ( !sub_21E7D6C(v10, "RightTurn") )
    j_SHRightTurn::createPiece((int)&v21, (int)v12, (int)a5, a6, a7, a8, a9, a10);
    *v11 = v21;
    v21 = 0;
  if ( !sub_21E7D6C(v10, "RoomCrossing") )
    j_SHRoomCrossing::createPiece((int)&v20, (int)v12, (int)a5, a6, a7, a8, a9, a10);
    *v11 = v20;
    v20 = 0;
  if ( !sub_21E7D6C(v10, "StraightStairsDown") )
    j_SHStraightStairsDown::createPiece((int)&v19, (int)v12, (int)a5, a6, a7, a8, a9, a10);
    *v11 = v19;
    v19 = 0;
  if ( !sub_21E7D6C(v10, "StairsDown") )
    j_SHStairsDown::createPiece((int)&v18, (int)v12, (int)a5, a6, a7, a8, a9, a10);
    *v11 = v18;
    v18 = 0;
  if ( sub_21E7D6C(v10, "FiveCrossing") )
    if ( !sub_21E7D6C(v10, "ChestCorridor") )
    {
      j_SHChestCorridor::createPiece((int)&v17, (int)v12, (int)a5, a6, a7, a8, a9, a10);
      *v11 = v17;
      result = 0;
      v17 = 0;
      return result;
    }
    if ( !sub_21E7D6C(v10, "Library") )
      j_SHLibrary::createPiece((int)&v16, (int)v12, (int)a5, a6, a7, a8, a9, a10);
      *v11 = v16;
      v16 = 0;
    if ( sub_21E7D6C(v10, "PortalRoom") )
      *v11 = 0;
    v14 = 0;
    j_BoundingBox::orientBox((BoundingBox *)&v25, a6, a7, a8, -4, -1, 0, 11, 8, 16, a9);
    result = v26;
    if ( (signed int)v26 >= 11 )
      result = (_DWORD *)j_StructurePiece::findCollisionPiece(v12, (int)&v25);
      v14 = 0;
      if ( !result )
      {
        result = j_operator new(0x2Cu);
        result[3] = 0;
        result[1] = 0;
        result[2] = 0;
        result[8] = a10;
        result[9] = 0;
        *result = &off_27240A4;
        v15 = v25;
        result[7] = a9;
        result[1] = v15;
        result[2] = v26;
        result[3] = v27;
        result[4] = v28;
        result[5] = v29;
        result[6] = v30;
        *((_BYTE *)result + 40) = 0;
        v14 = (SHFiveCrossing *)result;
      }
  else
    j_BoundingBox::orientBox((BoundingBox *)&v25, a6, a7, a8, -4, -3, 0, 10, 9, 11, a9);
      if ( result )
        v14 = 0;
      else
        v14 = (SHFiveCrossing *)j_operator new(0x2Cu);
        result = (_DWORD *)j_SHFiveCrossing::SHFiveCrossing(v14, a10, a5, (const BoundingBox *)&v25, a9);
  *v11 = v14;
  return result;
}


int __fastcall StrongholdPiece::generateAndAddPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, signed int a9)
{
  int v9; // r6@1
  int v10; // r4@1
  int v11; // r2@2
  int v12; // r7@5
  int result; // r0@8
  int v14; // r5@9
  __int64 v15; // r0@10
  __int64 v16; // r0@14
  void *v17; // r8@16
  unsigned int v18; // r2@16
  unsigned int v19; // r1@18
  unsigned int v20; // r6@18
  char *v21; // r7@24
  char *v22; // r10@26
  int v23; // [sp+1Ch] [bp-24h]@9

  v9 = a3;
  v10 = a2;
  if ( a9 > 50 )
    goto LABEL_37;
  v11 = a5 - *(_DWORD *)(a2 + 4);
  if ( v11 < 0 )
    v11 = -v11;
  if ( v11 > 112 )
  v12 = a7 - *(_DWORD *)(a2 + 12);
  if ( v12 < 0 )
    v12 = -v12;
  if ( v12 <= 112 )
  {
    j_StrongholdPiece::generatePieceFromSmallDoor(
      (SHFiveCrossing **)&v23,
      a5,
      a2,
      (__int64 *)v9,
      a4,
      a6,
      a7,
      a8,
      a9 + 1);
    v14 = v23;
    if ( v23 )
    {
      v15 = *(_QWORD *)(v9 + 4);
      if ( (_DWORD)v15 == HIDWORD(v15) )
      {
        j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
          (_QWORD *)v9,
          &v23);
      }
      else
        v23 = 0;
        *(_DWORD *)v15 = v14;
        *(_DWORD *)(v9 + 4) = v15 + 4;
      v16 = *(_QWORD *)(v10 + 48);
      if ( (_DWORD)v16 == HIDWORD(v16) )
        v17 = *(void **)(v10 + 44);
        v18 = ((signed int)v16 - (signed int)v17) >> 2;
        if ( !v18 )
          v18 = 1;
        HIDWORD(v16) = v18 + (((signed int)v16 - (signed int)v17) >> 2);
        v20 = v18 + (((signed int)v16 - (signed int)v17) >> 2);
        if ( 0 != HIDWORD(v16) >> 30 )
          v20 = 0x3FFFFFFF;
        if ( v19 < v18 )
        if ( v20 )
        {
          if ( v20 >= 0x40000000 )
            sub_21E57F4();
          v21 = (char *)j_operator new(4 * v20);
          LODWORD(v16) = *(_QWORD *)(v10 + 44) >> 32;
          v17 = (void *)*(_QWORD *)(v10 + 44);
        }
        else
          v21 = 0;
        v22 = &v21[v16 - (_DWORD)v17];
        *(_DWORD *)&v21[v16 - (_DWORD)v17] = v14;
        if ( 0 != ((signed int)v16 - (signed int)v17) >> 2 )
          j___aeabi_memmove4_0((int)v21, (int)v17);
        if ( v17 )
          j_operator delete(v17);
        *(_DWORD *)(v10 + 44) = v21;
        *(_DWORD *)(v10 + 48) = v22 + 4;
        *(_DWORD *)(v10 + 52) = &v21[4 * v20];
        *(_DWORD *)v16 = v14;
        *(_DWORD *)(v10 + 48) += 4;
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    }
    else
      v14 = 0;
    result = v14;
  }
  else
LABEL_37:
    result = 0;
  return result;
}


int __fastcall StrongholdPiece::generateSmallDoor(StructurePiece *a1, int a2, int a3, __int16 *a4, int a5, int a6)
{
  StructurePiece *v6; // r5@1
  int v7; // r11@1
  __int16 *v8; // r6@1
  BlockState *v9; // r0@1
  int v10; // r4@1
  int v11; // r7@1
  int v12; // r3@1
  void (__fastcall *v13)(StructurePiece *, int, __int16 *); // r4@4
  void (__fastcall *v14)(StructurePiece *, int, __int16 *, int); // r4@4
  void (__fastcall *v15)(StructurePiece *, int, __int16 *, int); // r12@4
  void (__fastcall *v16)(StructurePiece *, int, __int16 *); // r12@4
  void (__fastcall *v17)(StructurePiece *, int, __int16 *, int); // r12@4
  void (__fastcall *v18)(StructurePiece *, int, __int16 *, int); // r4@4
  void (__fastcall *v19)(StructurePiece *, int, __int16 *, int); // r7@4
  void (__fastcall *v20)(StructurePiece *, int, __int16 *, int); // r7@4
  char v21; // r0@4
  void (__fastcall *v22)(StructurePiece *, int, __int16 *, int); // r12@4
  char v23; // r0@4
  __int16 *v24; // r2@4
  int (__fastcall *v25)(StructurePiece *, int, __int16 *, int); // r7@4
  int v26; // r1@4
  StructurePiece *v27; // r0@4
  char v28; // ST2C_1@5
  void (__fastcall *v29)(StructurePiece *, int, __int16 *); // r7@5
  void (__fastcall *v30)(StructurePiece *, int, __int16 *, int); // r7@5
  char v31; // ST28_1@5
  void (__fastcall *v32)(StructurePiece *, int, __int16 *, int); // r4@5
  void (__fastcall *v33)(StructurePiece *, int, __int16 *); // r4@5
  void (__fastcall *v34)(StructurePiece *, int, __int16 *, int); // r4@5
  void (__fastcall *v35)(StructurePiece *, int, __int16 *, int); // r4@5
  void (__fastcall *v36)(StructurePiece *, int, __int16 *, int); // r4@5
  void (__fastcall *v37)(StructurePiece *, int, __int16 *, int); // r12@5
  int v38; // r7@5
  int (__fastcall *v39)(StructurePiece *, int, __int16 *, int); // r4@5
  void (__fastcall *v40)(StructurePiece *, int, __int16 *, int); // r10@6
  void (__fastcall *v41)(StructurePiece *, int, __int16 *, int); // r4@6
  void (__fastcall *v42)(StructurePiece *, int, __int16 *, int); // r7@6
  void (__fastcall *v43)(StructurePiece *, int, __int16 *, int); // r7@6
  void (__fastcall *v44)(StructurePiece *, int, __int16 *, int); // r7@6
  void (__fastcall *v45)(StructurePiece *, int, __int16 *, int); // r7@6
  void (__fastcall *v46)(StructurePiece *, int, __int16 *, int); // r12@6
  void (__fastcall *v47)(StructurePiece *, int, __int16 *, int); // r12@6
  char v49; // [sp+30h] [bp-30h]@8
  char v50; // [sp+31h] [bp-2Fh]@8
  char v51; // [sp+34h] [bp-2Ch]@8
  char v52; // [sp+35h] [bp-2Bh]@8
  __int16 v53; // [sp+38h] [bp-28h]@4

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = (BlockState *)j_Block::getBlockState(Block::mWoodenDoor, 11);
  v11 = *(_QWORD *)v9 >> 32;
  v10 = *(_QWORD *)v9;
  j_BlockState::getMask(v9);
  v12 = a6;
  if ( a5 == 1 )
  {
    v28 = v11;
    v29 = *(void (__fastcall **)(StructurePiece *, int, __int16 *))(*(_DWORD *)v6 + 36);
    v53 = *(_BYTE *)(Block::mStoneBrick + 4);
    v29(v6, v7, &v53);
    v30 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v30(v6, v7, &v53, a6);
    v31 = v10;
    v32 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v32(v6, v7, &v53, a6);
    v33 = *(void (__fastcall **)(StructurePiece *, int, __int16 *))(*(_DWORD *)v6 + 36);
    v33(v6, v7, &v53);
    v34 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v34(v6, v7, &v53, a6 + 2);
    v35 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v35(v6, v7, &v53, a6 + 2);
    v36 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v36(v6, v7, &v53, a6 + 2);
    v37 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v53 = *(_BYTE *)(Block::mWoodenDoor + 4);
    v38 = a6 + 1;
    v37(v6, v7, &v53, a6 + 1);
    v39 = *(int (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    LOBYTE(v53) = *(_BYTE *)(Block::mWoodenDoor + 4);
    HIBYTE(v53) = 1 << (v31 + 1 - v28);
    return v39(v6, v7, &v53, v38);
  }
  if ( a5 == 2 )
    v40 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v53 = BlockID::AIR;
    v40(v6, v7, &v53, a6 + 1);
    v41 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v41(v6, v7, &v53, a6 + 1);
    v42 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v53 = *(_BYTE *)(Block::mIronFence + 4);
    v42(v6, v7, &v53, a6);
    v43 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v43(v6, v7, &v53, a6);
    v44 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v44(v6, v7, &v53, a6);
    v45 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v45(v6, v7, &v53, a6 + 1);
    v46 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v38 = a6 + 2;
    v46(v6, v7, &v53, a6 + 2);
    v47 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v47(v6, v7, &v53, a6 + 2);
  if ( a5 == 3 )
    v13 = *(void (__fastcall **)(StructurePiece *, int, __int16 *))(*(_DWORD *)v6 + 36);
    v13(v6, v7, &v53);
    v14 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v14(v6, v7, &v53, a6);
    v15 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v15(v6, v7, &v53, a6);
    v16 = *(void (__fastcall **)(StructurePiece *, int, __int16 *))(*(_DWORD *)v6 + 36);
    v16(v6, v7, &v53);
    v17 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v17(v6, v7, &v53, a6 + 2);
    v18 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v18(v6, v7, &v53, a6 + 2);
    v19 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v19(v6, v7, &v53, a6 + 2);
    v20 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v53 = *(_BYTE *)(Block::mIronDoor + 4);
    v20(v6, v7, &v53, a6 + 1);
    LOBYTE(v20) = *(_BYTE *)(Block::mWoodButton + 4);
    v21 = j_StructurePiece::getOrientationData(v6, (const Block *)Block::mWoodButton, 4);
    v22 = *(void (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    LOBYTE(v53) = (_BYTE)v20;
    HIBYTE(v53) = v21;
    v22(v6, v7, &v53, a6 + 2);
    LOBYTE(v18) = *(_BYTE *)(Block::mWoodButton + 4);
    v23 = j_StructurePiece::getOrientationData(v6, (const Block *)Block::mWoodButton, 3);
    v24 = &v53;
    v12 = a6 + 2;
    v25 = *(int (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 36);
    v26 = v7;
    LOBYTE(v53) = (_BYTE)v18;
    HIBYTE(v53) = v23;
    v27 = v6;
  else
    v25 = *(int (__fastcall **)(StructurePiece *, int, __int16 *, int))(*(_DWORD *)v6 + 40);
    v51 = BlockID::AIR;
    v49 = BlockID::AIR;
    v52 = 0;
    v50 = 0;
    v24 = v8;
  return v25(v27, v26, v24, v12);
}


void __fastcall StrongholdPiece::generatePieceFromSmallDoor(SHFiveCrossing **a1, int a2, int a3, __int64 *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  SHFiveCrossing **v10; // r8@1
  int v11; // r7@1
  int v12; // r1@1
  int v13; // r10@5
  unsigned int v14; // r0@6
  int v15; // r2@6
  int v16; // r5@6 OVERLAPPED
  int v17; // r6@6 OVERLAPPED
  int v18; // r5@7
  int v19; // r11@7
  int v20; // r0@9
  _DWORD *v21; // r0@12
  size_t v22; // r2@12
  const void *v23; // r1@12
  bool v24; // zf@17
  bool v25; // nf@22
  unsigned __int8 v26; // vf@22
  SHFiveCrossing *v27; // r0@25
  SHFiveCrossing *v28; // r5@25
  unsigned int v29; // r0@25
  int v30; // r2@26
  int v31; // r6@27
  int v32; // r0@27
  int v33; // r8@27
  int v34; // r1@29
  int v35; // r0@29
  signed int v36; // r2@30
  int v37; // r5@31
  int v38; // r7@32
  int v39; // r1@32
  int v40; // r2@32
  int v41; // r3@32
  int v42; // r4@32
  int v43; // r6@32
  int v44; // r1@34
  void *v45; // r0@34
  unsigned int *v46; // r2@35
  signed int v47; // r1@37
  int v48; // r0@42
  int v49; // r1@42
  int v50; // r2@42
  int v51; // r0@42
  int v52; // r1@42
  int v53; // r1@42
  int v54; // r3@42
  signed int v55; // [sp+18h] [bp-A28h]@4
  int *v56; // [sp+20h] [bp-A20h]@5
  __int64 *v57; // [sp+24h] [bp-A1Ch]@1
  int v58; // [sp+28h] [bp-A18h]@20
  int v59; // [sp+2Ch] [bp-A14h]@21
  int v60; // [sp+30h] [bp-A10h]@22
  int v61; // [sp+34h] [bp-A0Ch]@20
  int v62; // [sp+38h] [bp-A08h]@21
  int v63; // [sp+3Ch] [bp-A04h]@22
  char v64; // [sp+40h] [bp-A00h]@1

  v10 = a1;
  v11 = a3;
  v57 = a4;
  j___aeabi_memcpy4_0((int)&v64, a5, 2516);
  if ( sub_21E7D6C((const void **)(v11 + 60), (const char *)&unk_257BC67) )
  {
    j_StrongholdPiece::findAndCreatePieceFactory(
      v10,
      v12,
      (const void **)(v11 + 60),
      v57,
      (Random *)&v64,
      a6,
      a7,
      a8,
      a9,
      a10);
    sub_21E8190((void **)(v11 + 60), (char *)&unk_257BC67, 0);
    if ( *v10 )
      return;
    *v10 = 0;
  }
  v55 = j_StructurePiece::getTotalWeight((__int64 *)(v11 + 68));
  if ( v55 < 1 )
    goto LABEL_39;
  v56 = (int *)(v11 + 64);
  v13 = 0;
  while ( 1 )
    v14 = j_Random::_genRandInt32((Random *)&v64);
    *(_QWORD *)&v16 = *(_QWORD *)(v11 + 68);
    if ( v16 != v17 )
      break;
LABEL_19:
    if ( ++v13 > 4 )
    {
      j_SHFillerCorridor::findPieceBox((int)&v58, (int)v57, v15, a6, a7, a8, a9);
      if ( v61 >= v58 && v62 >= v59 )
      {
        v26 = __OFSUB__(v63, v60);
        v25 = v63 - v60 < 0;
        if ( v63 >= v60 )
        {
          v26 = __OFSUB__(v59, 2);
          v25 = v59 - 2 < 0;
        }
        if ( !(v25 ^ v26) )
          v27 = (SHFiveCrossing *)j_operator new(0x2Cu);
          v28 = v27;
          *((_DWORD *)v27 + 5) = 0;
          *((_DWORD *)v27 + 6) = 0;
          *((_DWORD *)v27 + 3) = 0;
          *((_DWORD *)v27 + 4) = 0;
          *((_DWORD *)v27 + 1) = 0;
          *((_DWORD *)v27 + 2) = 0;
          *((_DWORD *)v27 + 8) = a10;
          *((_DWORD *)v27 + 9) = 0;
          *(_DWORD *)v27 = &off_2723F3C;
          *((_DWORD *)v27 + 7) = a9;
          v29 = j_Random::_genRandInt32((Random *)&v64) % 5;
          if ( v29 > 3 )
            v30 = 0;
          else
            v30 = dword_2610B1C[v29];
          v48 = v58;
          *((_DWORD *)v28 + 9) = v30;
          v49 = v59;
          v50 = v61;
          *((_DWORD *)v28 + 1) = v48;
          *((_DWORD *)v28 + 2) = v49;
          v51 = 1 - v48 + v50;
          v52 = v60;
          *((_DWORD *)v28 + 3) = v60;
          *((_DWORD *)v28 + 4) = v50;
          v53 = 1 - v52;
          *((_DWORD *)v28 + 5) = v62;
          v54 = v63;
          *((_DWORD *)v28 + 6) = v63;
          if ( (a9 | 2) == 2 )
            v51 = v53 + v54;
          *v10 = v28;
          *((_DWORD *)v28 + 10) = v51;
          return;
      }
LABEL_39:
      *v10 = 0;
    }
  v18 = v16 + 8;
  v19 = v14 % v55;
    v19 -= *(_DWORD *)(v18 - 4);
    if ( v19 <= -1 )
LABEL_17:
    v24 = v18 + 16 == v17;
    v18 += 24;
    if ( v24 )
      goto LABEL_19;
  v20 = *(_DWORD *)(v18 + 4);
  if ( v20 && *(_DWORD *)v18 >= v20 )
    goto LABEL_19;
  if ( *(_DWORD *)(v18 + 8) > a10 )
  v21 = *(_DWORD **)(v18 - 8);
  v22 = *(v21 - 3);
  v23 = (const void *)*v56;
  if ( v22 == *(_DWORD *)(*v56 - 12) && !j_memcmp_0(v21, v23, v22) )
    v23 = (const void *)-1431655765;
    if ( (unsigned int)(-1431655765 * ((v17 - *(_DWORD *)(v11 + 68)) >> 3)) > 1 )
  j_StrongholdPiece::findAndCreatePieceFactory(
    v10,
    (int)v23,
    (const void **)(v18 - 8),
    v57,
    (Random *)&v64,
    a6,
    a7,
    a8,
    a9,
    a10);
  if ( !*v10 )
    v17 = *(_DWORD *)(v11 + 72);
    goto LABEL_17;
  v31 = v18 - 8;
  ++*(_DWORD *)v18;
  EntityInteraction::setInteractText(v56, (int *)(v18 - 8));
  v32 = *(_DWORD *)(v18 + 4);
  v33 = v11;
  if ( v32 && *(_DWORD *)v18 >= v32 )
    v34 = *(_DWORD *)(v11 + 72);
    v35 = v18 + 16;
    if ( v18 + 16 != v34 )
      v36 = v34 - v35;
      v35 = *(_DWORD *)(v11 + 72);
      if ( v36 >= 1 )
        v37 = -1431655765 * (v36 >> 3) + 1;
        do
          v38 = v31 + 24;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v31,
            (int *)(v31 + 24));
          v39 = v31 + 4;
          --v37;
          v40 = *(_DWORD *)(v31 + 28);
          v41 = *(_DWORD *)(v31 + 32);
          v42 = *(_DWORD *)(v31 + 36);
          v43 = *(_DWORD *)(v31 + 40);
          *(_DWORD *)v39 = v40;
          *(_DWORD *)(v39 + 4) = v41;
          *(_DWORD *)(v39 + 8) = v42;
          *(_DWORD *)(v39 + 12) = v43;
          v31 = v38;
          *(_BYTE *)(v38 - 4) = *(_BYTE *)(v38 + 20);
        while ( v37 > 1 );
        v35 = *(_DWORD *)(v33 + 72);
    *(_DWORD *)(v33 + 72) = v35 - 24;
    v44 = *(_DWORD *)(v35 - 24);
    v45 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v44 - 4);
      if ( &pthread_create )
        __dmb();
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
      else
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
}


int __fastcall StrongholdPiece::randomSmallDoor(StrongholdPiece *this, Random *a2)
{
  unsigned int v2; // r0@1
  int result; // r0@2

  v2 = j_Random::_genRandInt32(a2) % 5;
  if ( v2 <= 3 )
    result = dword_2610B1C[v2];
  else
    result = 0;
  return result;
}


void __fastcall StrongholdPiece::generatePieceFromSmallDoor(SHFiveCrossing **a1, int a2, int a3, __int64 *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  StrongholdPiece::generatePieceFromSmallDoor(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


int __fastcall StrongholdPiece::generateSmallDoorChildLeft(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7@2
  int v7; // r5@2
  int v8; // r6@2
  int v9; // r4@2
  int v10; // r0@2
  int v11; // r5@2
  int v12; // r6@2
  int v13; // r5@3
  int v14; // r6@3
  int result; // r0@4

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
    case 2:
      v6 = 1;
      v7 = *(_DWORD *)(a1 + 12);
      v8 = *(_DWORD *)(a1 + 4);
      v9 = *(_DWORD *)(a1 + 8) + a5;
      v10 = *(_DWORD *)(a1 + 32);
      v11 = v7 + a6;
      v12 = v8 - 1;
      goto LABEL_4;
    case 1:
    case 3:
      v6 = 2;
      v13 = *(_DWORD *)(a1 + 12);
      v14 = *(_DWORD *)(a1 + 4);
      v11 = v13 - 1;
      v12 = v14 + a6;
LABEL_4:
      result = j_StrongholdPiece::generateAndAddPiece(v10, a2, a3, a4, v12, v9, v11, v6, v10);
      break;
    default:
      result = 0;
  }
  return result;
}


int __fastcall StrongholdPiece::generateSmallDoorChildRight(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0@2

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
    case 2:
      result = j_StrongholdPiece::generateAndAddPiece(
                 *(_DWORD *)(a1 + 32),
                 a2,
                 a3,
                 a4,
                 *(_DWORD *)(a1 + 16) + 1,
                 *(_DWORD *)(a1 + 8) + a5,
                 *(_DWORD *)(a1 + 12) + a6,
                 3,
                 *(_DWORD *)(a1 + 32));
      break;
    case 1:
    case 3:
                 *(_DWORD *)(a1 + 4) + a6,
                 *(_DWORD *)(a1 + 24) + 1,
                 0,
    default:
      result = 0;
  }
  return result;
}


int __fastcall StrongholdPiece::generateSmallDoorChildForward(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r5@4
  int v7; // r7@4
  int v8; // r4@4
  int v9; // r6@4
  int v10; // r0@4
  int v11; // r5@4
  int v12; // r4@4
  int v13; // r6@4
  int v14; // r5@5
  int v15; // r4@5
  int v16; // r6@5
  int result; // r0@2

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
      result = j_StrongholdPiece::generateAndAddPiece(
                 *(_DWORD *)(a1 + 32),
                 a2,
                 a3,
                 a4,
                 *(_QWORD *)(a1 + 4) + a5,
                 (*(_QWORD *)(a1 + 4) >> 32) + a6,
                 *(_DWORD *)(a1 + 24) + 1,
                 0,
                 *(_DWORD *)(a1 + 32));
      break;
    case 1:
      v6 = *(_DWORD *)(a1 + 12);
      v7 = 1;
      v8 = *(_QWORD *)(a1 + 4) >> 32;
      v9 = *(_QWORD *)(a1 + 4);
      v10 = *(_DWORD *)(a1 + 32);
      v11 = v6 + a5;
      v12 = v8 + a6;
      v13 = v9 - 1;
      goto LABEL_6;
    case 2:
      v14 = *(_DWORD *)(a1 + 12);
      v7 = 2;
      v15 = *(_QWORD *)(a1 + 4) >> 32;
      v16 = *(_QWORD *)(a1 + 4);
      v11 = v14 - 1;
      v12 = v15 + a6;
      v13 = v16 + a5;
LABEL_6:
      result = j_StrongholdPiece::generateAndAddPiece(v10, a2, a3, a4, v13, v12, v11, v7, v10);
    case 3:
                 *(_DWORD *)(a1 + 16) + 1,
                 *(_QWORD *)(a1 + 8) + a6,
                 (*(_QWORD *)(a1 + 8) >> 32) + a5,
                 3,
    default:
      result = 0;
  }
  return result;
}
