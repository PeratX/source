

void __fastcall NetherFortressPiece::generatePiece(int a1, int a2, int a3, int a4, int a5, Random *a6, int a7, int a8, int a9, int a10, int a11)
{
  NetherFortressPiece::generatePiece(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


int __fastcall NetherFortressPiece::generateChildRight(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // r0@2

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
    case 2:
      result = j_NetherFortressPiece::generateAndAddPiece(
                 *(_DWORD *)(a1 + 32),
                 a2,
                 a3,
                 a4,
                 *(_DWORD *)(a1 + 16) + 1,
                 *(_DWORD *)(a1 + 8) + a5,
                 *(_DWORD *)(a1 + 12) + a6,
                 3,
                 a7);
      break;
    case 1:
    case 3:
                 *(_DWORD *)(a1 + 4) + a6,
                 a5 + *(_DWORD *)(a1 + 8),
                 *(_DWORD *)(a1 + 24) + 1,
                 0,
    default:
      result = 0;
  }
  return result;
}


char *__fastcall NetherFortressPiece::addHardcodedSpawnAreas(NetherFortressPiece *this, LevelChunk *a2)
{
  return j_j_j__ZN10LevelChunk24addHardcodedSpawningAreaERK11BoundingBox22HardcodedSpawnAreaType_0(
           (int)a2,
           (int)this + 4,
           1);
}


int __fastcall NetherFortressPiece::NetherFortressPiece(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723998;
  return result;
}


_DWORD *__fastcall NetherFortressPiece::findAndCreateBridgePieceFactory(_DWORD *a1, int a2, const void **a3, __int64 *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  const void **v10; // r6@1
  _DWORD *v11; // r9@1
  __int64 *v12; // r10@1
  int v13; // r7@1
  _DWORD *result; // r0@14
  void **v15; // r1@20
  char *v16; // r1@28
  int v17; // [sp+1Ch] [bp-3Ch]@15
  _DWORD *v18; // [sp+20h] [bp-38h]@15
  int v19; // [sp+24h] [bp-34h]@30
  int v20; // [sp+28h] [bp-30h]@30
  int v21; // [sp+2Ch] [bp-2Ch]@30
  int v22; // [sp+30h] [bp-28h]@30

  v10 = a3;
  v11 = a1;
  v12 = a4;
  v13 = a9;
  if ( !sub_21E7D6C(a3, "BridgeStraight") )
  {
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -1, -3, 0, 5, 10, 19, a9);
    result = v18;
    if ( (signed int)v18 < 11 || (result = (_DWORD *)j_StructurePiece::findCollisionPiece(v12, (int)&v17)) != 0 )
    {
      *v11 = 0;
      return result;
    }
    result = j_operator new(0x24u);
    v15 = &`vtable for'NBBridgeStraight;
    goto LABEL_28;
  }
  if ( !sub_21E7D6C(v10, "BridgeCrossing") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -8, -3, 0, 19, 10, 19, a9);
    if ( (signed int)v18 < 11 )
      goto LABEL_54;
    result = (_DWORD *)j_StructurePiece::findCollisionPiece(v12, (int)&v17);
    if ( result )
    v15 = &`vtable for'NBBridgeCrossing;
  if ( !sub_21E7D6C(v10, "RoomCrossing") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -2, 0, 0, 7, 9, 7, a9);
    v15 = &`vtable for'NBRoomCrossing;
  if ( !sub_21E7D6C(v10, "StairsRoom") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -2, 0, 0, 7, 11, 7, a9);
    v15 = &`vtable for'NBStairsRoom;
  if ( !sub_21E7D6C(v10, "MonsterThrone") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -2, 0, 0, 7, 8, 9, a9);
    if ( (signed int)v18 >= 11 )
      result = (_DWORD *)j_StructurePiece::findCollisionPiece(v12, (int)&v17);
      if ( !result )
      {
        result = j_operator new(0x28u);
        result[3] = 0;
        result[1] = 0;
        result[2] = 0;
        result[8] = a10;
        *result = &off_2723B90;
        *((_BYTE *)result + 36) = 0;
        goto LABEL_29;
      }
    goto LABEL_54;
  if ( !sub_21E7D6C(v10, "CastleEntrance") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -5, -3, 0, 13, 14, 13, a9);
    v15 = &`vtable for'NBCastleEntrance;
  if ( !sub_21E7D6C(v10, "CastleSmallCorridorPiece") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -1, 0, 0, 5, 7, 5, a9);
    v15 = &`vtable for'NBCastleSmallCorridorPiece;
  if ( !sub_21E7D6C(v10, "CastleSmallCorridorRightTurnPiece") )
    return (_DWORD *)j_NBCastleSmallCorridorRightTurnPiece::createPiece((int)v11, (int)v12, a5, a6, a7, a8, a9, a10);
  if ( !sub_21E7D6C(v10, "CastleSmallCorridorLeftTurnPiece") )
    return (_DWORD *)j_NBCastleSmallCorridorLeftTurnPiece::createPiece((int)v11, (int)v12, a5, a6, a7, a8, a9, a10);
  if ( !sub_21E7D6C(v10, "CastleCorridorStairsPiece") )
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -1, -7, 0, 5, 14, 10, a9);
        result = j_operator new(0x24u);
        *result = &off_2723D88;
        result[7] = a9;
        goto LABEL_30;
  if ( !sub_21E7D6C(v10, "CastleCorridorTBalconyPiece") )
    v13 = a9;
    j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -3, 0, 0, 9, 7, 9, a9);
    v15 = &`vtable for'NBCastleCorridorTBalconyPiece;
LABEL_28:
    v16 = (char *)*v15;
    result[3] = 0;
    result[2] = 0;
    result[1] = 0;
    result[8] = a10;
    *result = v16 + 8;
LABEL_29:
    result[7] = v13;
LABEL_30:
    result[1] = v17;
    result[2] = v18;
    result[3] = v19;
    result[4] = v20;
    result[5] = v21;
    result[6] = v22;
    goto LABEL_31;
  if ( sub_21E7D6C(v10, "CastleSmallCorridorCrossingPiece") )
    if ( sub_21E7D6C(v10, "CastleStalkRoom") )
      result = 0;
LABEL_31:
      *v11 = result;
    v15 = &`vtable for'NBCastleStalkRoom;
  j_BoundingBox::orientBox((BoundingBox *)&v17, a6, a7, a8, -1, 0, 0, 5, 7, 5, a9);
  result = v18;
  if ( (signed int)v18 >= 11 )
    if ( !result )
      result = j_operator new(0x24u);
      v15 = &`vtable for'NBCastleSmallCorridorCrossingPiece;
      goto LABEL_28;
LABEL_54:
  *v11 = 0;
  return result;
}


int __fastcall NetherFortressPiece::generateChildForward(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r6@4
  int v8; // r8@4
  __int64 v9; // kr00_8@4
  int v10; // r0@4
  int v11; // r4@4
  __int64 v12; // r6@6
  __int64 v13; // kr08_8@6
  int result; // r0@2
  __int64 v15; // [sp+0h] [bp-30h]@4

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
      result = j_NetherFortressPiece::generateAndAddPiece(
                 *(_DWORD *)(a1 + 32),
                 a2,
                 a3,
                 a4,
                 *(_QWORD *)(a1 + 4) + a5,
                 (*(_QWORD *)(a1 + 4) >> 32) + a6,
                 *(_DWORD *)(a1 + 24) + 1,
                 0,
                 a7);
      break;
    case 1:
      v7 = *(_DWORD *)(a1 + 12);
      v8 = 1;
      v9 = *(_QWORD *)(a1 + 4);
      v10 = *(_DWORD *)(a1 + 32);
      v11 = a5 + v7;
      LODWORD(v15) = v9 - 1;
      HIDWORD(v15) = HIDWORD(v9) + a6;
      goto LABEL_7;
    case 2:
                 *(_DWORD *)(a1 + 12) - 1,
                 2,
    case 3:
      LODWORD(v12) = *(_DWORD *)(a1 + 16);
      v8 = 3;
      v13 = *(_QWORD *)(a1 + 8);
      v11 = a5 + HIDWORD(v13);
      LODWORD(v12) = v12 + 1;
      HIDWORD(v12) = v13 + a6;
      v15 = v12;
LABEL_7:
      result = j_NetherFortressPiece::generateAndAddPiece(v10, a2, a3, a4, v15, SHIDWORD(v15), v11, v8, v10, a7);
    default:
      result = 0;
  }
  return result;
}


signed int __fastcall NetherFortressPiece::generateLightPost(NetherFortressPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4, int a5, int a6, int a7, int a8, int a9)
{
  StructurePiece *v9; // r5@1
  const BoundingBox *v10; // r6@1
  BlockSource *v11; // r8@1
  int v12; // r4@1
  int v13; // r7@1
  signed int result; // r0@1
  void (__fastcall *v15)(StructurePiece *, BlockSource *, char *, int); // r12@11
  int (__fastcall *v16)(StructurePiece *, BlockSource *, char *, int); // r12@11
  char v17; // [sp+10h] [bp-68h]@11
  char v18; // [sp+14h] [bp-64h]@11
  char v19; // [sp+18h] [bp-60h]@11
  char v20; // [sp+1Ch] [bp-5Ch]@11
  int v21; // [sp+20h] [bp-58h]@7
  int v22; // [sp+24h] [bp-54h]@7
  signed int v23; // [sp+28h] [bp-50h]@7
  int v24; // [sp+2Ch] [bp-4Ch]@7
  int v25; // [sp+30h] [bp-48h]@7
  signed int v26; // [sp+34h] [bp-44h]@7
  int v27; // [sp+38h] [bp-40h]@7
  int v28; // [sp+3Ch] [bp-3Ch]@7
  signed int v29; // [sp+40h] [bp-38h]@7
  int v30; // [sp+44h] [bp-34h]@1
  int v31; // [sp+48h] [bp-30h]@1
  int v32; // [sp+4Ch] [bp-2Ch]@1
  char v33; // [sp+50h] [bp-28h]@11
  char v34; // [sp+51h] [bp-27h]@11

  v9 = this;
  v10 = a4;
  v11 = a2;
  v12 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v13 = j_StructurePiece::getWorldY(v9, a6);
  result = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v9 + 32))(v9, a5, a7);
  v30 = v12;
  v31 = v13;
  v32 = result;
  if ( v12 >= *(_DWORD *)v10
    && v12 <= *((_DWORD *)v10 + 3)
    && result >= *((_DWORD *)v10 + 2)
    && result <= *((_DWORD *)v10 + 5)
    && v13 >= *((_DWORD *)v10 + 1)
    && v13 <= *((_DWORD *)v10 + 4) )
  {
    v27 = v12;
    v28 = v13 + 1;
    v29 = result;
    v24 = v12;
    v25 = v13 + 2;
    v26 = result;
    v21 = v12;
    v22 = v13 + 3;
    v23 = result;
    result = j_BlockSource::isEmptyBlock(v11, (const BlockPos *)&v30);
    if ( result == 1 )
    {
      result = j_BlockSource::isEmptyBlock(v11, (const BlockPos *)&v27);
      if ( result == 1 )
      {
        result = j_BlockSource::isEmptyBlock(v11, (const BlockPos *)&v24);
        if ( result == 1 )
        {
          result = j_BlockSource::isEmptyBlock(v11, (const BlockPos *)&v21);
          if ( result == 1 )
          {
            v20 = *(_BYTE *)(Block::mNetherFence + 4);
            j_BlockSource::setBlockAndData((int)v11, (BlockPos *)&v30, &v20, 0, 2, 0);
            v19 = *(_BYTE *)(Block::mNetherFence + 4);
            j_BlockSource::setBlockAndData((int)v11, (BlockPos *)&v27, &v19, 0, 2, 0);
            v18 = *(_BYTE *)(Block::mNetherFence + 4);
            j_BlockSource::setBlockAndData((int)v11, (BlockPos *)&v24, &v18, 0, 2, 0);
            v17 = *(_BYTE *)(Block::mNetherFence + 4);
            j_BlockSource::setBlockAndData((int)v11, (BlockPos *)&v21, &v17, 0, 2, 0);
            v15 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v9 + 36);
            v33 = *(_BYTE *)(Block::mNetherFence + 4);
            v34 = 0;
            v15(v9, v11, &v33, a8 + a5);
            v16 = *(int (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v9 + 36);
            v33 = *(_BYTE *)(Block::mGlowStone + 4);
            result = v16(v9, v11, &v33, a8 + a5);
          }
        }
      }
    }
  }
  return result;
}


int __fastcall NetherFortressPiece::generateAndAddPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r4@1
  int v11; // r6@1
  int v12; // r0@1
  int v13; // r0@4
  int v14; // r5@7
  __int64 v15; // r0@8
  int v16; // r3@11
  __int64 v17; // r0@14
  __int64 v18; // r0@17
  void *v19; // r8@19
  unsigned int v20; // r2@19
  unsigned int v21; // r1@21
  unsigned int v22; // r6@21
  char *v23; // r7@27
  char *v24; // r10@30
  int v25; // r0@35
  __int64 v26; // r0@37
  void *v27; // r8@39
  unsigned int v28; // r2@39
  unsigned int v29; // r1@41
  unsigned int v30; // r6@41
  char *v31; // r7@47
  char *v32; // r10@49
  Random *v34; // [sp+4h] [bp-44h]@11
  int v35; // [sp+20h] [bp-28h]@13
  int v36; // [sp+24h] [bp-24h]@7

  v10 = a2;
  v11 = a3;
  v12 = a5 - *(_DWORD *)(a2 + 4);
  if ( v12 < 0 )
    v12 = -v12;
  if ( v12 > 112 )
    goto LABEL_61;
  v13 = a7 - *(_DWORD *)(a2 + 12);
  if ( v13 < 0 )
    v13 = -v13;
  if ( v13 < 113 )
  {
    v34 = (Random *)a4;
    v16 = a2 + 40;
    if ( a10 )
      v16 = a2 + 52;
    j_NetherFortressPiece::generatePiece((int)&v35, a7, a2, v16, a3, v34, a5, a6, a7, a8, a9 + 1);
    v14 = v35;
    if ( !v35 )
      return 0;
    v17 = *(_QWORD *)(v11 + 4);
    if ( (_DWORD)v17 == HIDWORD(v17) )
    {
      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<NetherFortressPiece,std::default_delete<NetherFortressPiece>>>(
        (_QWORD *)v11,
        &v35);
    }
    else
      v35 = 0;
      *(_DWORD *)v17 = v14;
      *(_DWORD *)(v11 + 4) = v17 + 4;
    v26 = *(_QWORD *)(v10 + 68);
    if ( (_DWORD)v26 == HIDWORD(v26) )
      v27 = *(void **)(v10 + 64);
      v28 = ((signed int)v26 - (signed int)v27) >> 2;
      if ( !v28 )
        v28 = 1;
      HIDWORD(v26) = v28 + (((signed int)v26 - (signed int)v27) >> 2);
      v30 = v28 + (((signed int)v26 - (signed int)v27) >> 2);
      if ( 0 != HIDWORD(v26) >> 30 )
        v30 = 0x3FFFFFFF;
      if ( v29 < v28 )
      if ( v30 )
      {
        if ( v30 >= 0x40000000 )
          sub_21E57F4();
        v31 = (char *)j_operator new(4 * v30);
        LODWORD(v26) = *(_QWORD *)(v10 + 64) >> 32;
        v27 = (void *)*(_QWORD *)(v10 + 64);
      }
      else
        v31 = 0;
      v32 = &v31[v26 - (_DWORD)v27];
      *(_DWORD *)&v31[v26 - (_DWORD)v27] = v14;
      if ( 0 != ((signed int)v26 - (signed int)v27) >> 2 )
        j___aeabi_memmove4_0((int)v31, (int)v27);
      if ( v27 )
        j_operator delete(v27);
      *(_DWORD *)(v10 + 64) = v31;
      *(_DWORD *)(v10 + 68) = v32 + 4;
      *(_DWORD *)(v10 + 72) = &v31[4 * v30];
      v25 = v35;
      *(_DWORD *)v26 = v14;
      *(_DWORD *)(v10 + 68) += 4;
  }
  else
LABEL_61:
    j_NBBridgeEndFiller::createPiece((int)&v36, a3, a4, a5, a6, a7, a8, a9);
    v14 = v36;
    if ( !v36 )
    v15 = *(_QWORD *)(v11 + 4);
    if ( (_DWORD)v15 == HIDWORD(v15) )
        &v36);
      v36 = 0;
      *(_DWORD *)v15 = v14;
      *(_DWORD *)(v11 + 4) = v15 + 4;
    v18 = *(_QWORD *)(v10 + 68);
    if ( (_DWORD)v18 == HIDWORD(v18) )
      v19 = *(void **)(v10 + 64);
      v20 = ((signed int)v18 - (signed int)v19) >> 2;
      if ( !v20 )
        v20 = 1;
      HIDWORD(v18) = v20 + (((signed int)v18 - (signed int)v19) >> 2);
      v22 = v20 + (((signed int)v18 - (signed int)v19) >> 2);
      if ( 0 != HIDWORD(v18) >> 30 )
        v22 = 0x3FFFFFFF;
      if ( v21 < v20 )
      if ( v22 )
        if ( v22 >= 0x40000000 )
        v23 = (char *)j_operator new(4 * v22);
        LODWORD(v18) = *(_QWORD *)(v10 + 64) >> 32;
        v19 = (void *)*(_QWORD *)(v10 + 64);
        v23 = 0;
      v24 = &v23[v18 - (_DWORD)v19];
      *(_DWORD *)&v23[v18 - (_DWORD)v19] = v14;
      if ( 0 != ((signed int)v18 - (signed int)v19) >> 2 )
        j___aeabi_memmove4_0((int)v23, (int)v19);
      if ( v19 )
        j_operator delete(v19);
      *(_DWORD *)(v10 + 64) = v23;
      *(_DWORD *)(v10 + 68) = v24 + 4;
      *(_DWORD *)(v10 + 72) = &v23[4 * v22];
      *(_DWORD *)v18 = v14;
    v25 = v36;
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  return v14;
}


int __fastcall NetherFortressPiece::NetherFortressPiece(int result, int a2)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723998;
  return result;
}


signed int __fastcall NetherFortressPiece::postProcess(NetherFortressPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  BlockSource *v4; // r11@1
  const BoundingBox *v5; // r10@1
  int v6; // r6@2
  int v7; // r1@2
  int v8; // r0@3
  _BYTE *v9; // r4@3
  int v10; // r5@4
  int v11; // r1@5
  int v12; // r9@6
  int v13; // r7@6
  unsigned int v14; // r1@7
  _BYTE *v15; // r2@7
  int v16; // r1@8
  int v17; // r0@10
  int v18; // r4@12
  const BoundingBox *v19; // r5@12
  int v20; // r10@12
  void (__fastcall *v21)(int, BlockSource *, int *, int *); // r7@12
  void (__fastcall *v22)(int, BlockSource *, int *, int *); // r7@12
  void (__fastcall *v23)(int, BlockSource *, int *, int *); // r7@12
  void (__fastcall *v24)(int, BlockSource *, int *, int *); // r7@12
  __int64 v25; // r1@12
  void (__fastcall *v26)(int, BlockSource *, int *, __int64 *); // r7@12
  __int64 v27; // r1@12
  void (__fastcall *v28)(int, BlockSource *, int *, __int64 *); // r7@12
  int v29; // r0@12
  bool v30; // nf@15
  unsigned __int8 v31; // vf@15
  signed int result; // r0@18
  __int64 v33; // [sp+14h] [bp-7Ch]@12
  int v34; // [sp+1Ch] [bp-74h]@12
  __int64 v35; // [sp+20h] [bp-70h]@12
  int v36; // [sp+28h] [bp-68h]@12
  int v37; // [sp+2Ch] [bp-64h]@12
  int v38; // [sp+30h] [bp-60h]@12
  int v39; // [sp+34h] [bp-5Ch]@12
  int v40; // [sp+38h] [bp-58h]@12
  int v41; // [sp+3Ch] [bp-54h]@12
  int v42; // [sp+40h] [bp-50h]@12
  int v43; // [sp+44h] [bp-4Ch]@12
  int v44; // [sp+48h] [bp-48h]@12
  int v45; // [sp+4Ch] [bp-44h]@12
  int v46; // [sp+50h] [bp-40h]@12
  int v47; // [sp+54h] [bp-3Ch]@12
  int v48; // [sp+58h] [bp-38h]@12
  unsigned __int16 v49; // [sp+5Ch] [bp-34h]@7
  __int16 v50; // [sp+5Eh] [bp-32h]@7
  int v51; // [sp+60h] [bp-30h]@6
  int v52; // [sp+64h] [bp-2Ch]@6
  int v53; // [sp+68h] [bp-28h]@6

  v4 = a2;
  v5 = a4;
  if ( a2 )
  {
    v6 = *(_DWORD *)a4;
    v7 = *((_DWORD *)a4 + 3);
    if ( *(_DWORD *)a4 <= v7 )
    {
      v8 = *((_DWORD *)a4 + 4);
      v9 = &BlockID::AIR;
      do
      {
        v10 = *((_DWORD *)v5 + 1);
        if ( v10 <= v8 )
        {
          do
          {
            v11 = *((_DWORD *)v5 + 2);
            if ( v11 <= *((_DWORD *)v5 + 5) )
            {
              do
              {
                v12 = v11;
                v51 = v6;
                v52 = v10;
                v53 = v11;
                v13 = j_BlockSource::getChunkAt(v4, (const BlockPos *)&v51);
                if ( v13 )
                {
                  j_ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v49, (const BlockPos *)&v51);
                  v14 = v50 >> 4;
                  v15 = v9;
                  if ( v14 < *(_DWORD *)(v13 + 140) )
                  {
                    v15 = v9;
                    v16 = *(_DWORD *)(v13 + 4 * v14 + 76);
                    if ( v16 )
                      v15 = (_BYTE *)(v16 + (v50 & 0xF | ((unsigned int)v49 >> 4) & 0xFF0) + (v49 << 8));
                  }
                  v17 = *v15;
                  if ( v17 == *(_BYTE *)(Block::mStillLava + 4) || v17 == *(_BYTE *)(Block::mFlowingLava + 4) )
                    v18 = v10;
                    v19 = v5;
                    v20 = Block::mBlocks[v17];
                    v21 = *(void (__fastcall **)(int, BlockSource *, int *, int *))(*(_DWORD *)v20 + 252);
                    v46 = v51;
                    v47 = v52 + 1;
                    v48 = v53;
                    v21(v20, v4, &v51, &v46);
                    v22 = *(void (__fastcall **)(int, BlockSource *, int *, int *))(*(_DWORD *)v20 + 252);
                    v43 = v51;
                    v44 = v52 - 1;
                    v45 = v53;
                    v22(v20, v4, &v51, &v43);
                    v23 = *(void (__fastcall **)(int, BlockSource *, int *, int *))(*(_DWORD *)v20 + 252);
                    v40 = v51 + 1;
                    v41 = v52;
                    v42 = v53;
                    v23(v20, v4, &v51, &v40);
                    v24 = *(void (__fastcall **)(int, BlockSource *, int *, int *))(*(_DWORD *)v20 + 252);
                    v37 = v51 - 1;
                    v38 = v52;
                    v39 = v53;
                    v24(v20, v4, &v51, &v37);
                    LODWORD(v25) = v51;
                    HIDWORD(v25) = v52;
                    v26 = *(void (__fastcall **)(int, BlockSource *, int *, __int64 *))(*(_DWORD *)v20 + 252);
                    v35 = v25;
                    v36 = v53 - 1;
                    v26(v20, v4, &v51, &v35);
                    LODWORD(v27) = v51;
                    HIDWORD(v27) = v52;
                    v28 = *(void (__fastcall **)(int, BlockSource *, int *, __int64 *))(*(_DWORD *)v20 + 252);
                    v33 = v27;
                    v34 = v53 + 1;
                    v29 = v20;
                    v5 = v19;
                    v10 = v18;
                    v9 = &BlockID::AIR;
                    v28(v29, v4, &v51, &v33);
                }
                v11 = v12 + 1;
              }
              while ( v12 < *((_DWORD *)v5 + 5) );
              v8 = *((_DWORD *)v5 + 4);
            }
            v31 = __OFSUB__(v10, v8);
            v30 = v10++ - v8 < 0;
          }
          while ( v30 ^ v31 );
          v7 = *((_DWORD *)v5 + 3);
        }
        v31 = __OFSUB__(v6, v7);
        v30 = v6++ - v7 < 0;
      }
      while ( v30 ^ v31 );
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall NetherFortressPiece::generatePiece(int a1, int a2, int a3, int a4, int a5, Random *a6, int a7, int a8, int a9, int a10, int a11)
{
  _DWORD *v11; // r11@1
  int v12; // r0@1
  _BYTE *v13; // r5@1
  char v14; // r1@2
  unsigned int v15; // r7@2
  int v16; // r3@2
  signed int v17; // r6@3
  int v18; // r4@4
  bool v19; // nf@4
  unsigned __int8 v20; // vf@4
  char v21; // r6@4
  int v22; // r6@7
  signed int v23; // r10@13
  unsigned int v24; // r0@14
  int v25; // r4@14
  int v26; // r5@14
  int v27; // r9@15
  int v28; // r6@15
  _DWORD *v29; // r0@20
  size_t v30; // r2@20
  const void *v31; // r1@20
  int v32; // r0@21
  bool v33; // zf@21
  int v34; // r6@30
  int v35; // r8@31
  _BYTE *v36; // r7@34
  signed int v37; // r4@34
  int v38; // r0@36
  _DWORD *v39; // r0@39
  size_t v40; // r2@39
  const void *v41; // r1@39
  int v42; // r0@40
  bool v43; // zf@40
  int v44; // r1@53
  int v45; // r0@53
  signed int v46; // r2@54
  int v47; // r4@55
  int v48; // r7@56
  int v49; // r1@56
  int v50; // r2@56
  int v51; // r3@56
  int v52; // r5@56
  int v53; // r6@56
  int v54; // r1@58
  void *v55; // r0@58
  unsigned int *v56; // r2@59
  signed int v57; // r1@61
  int *v58; // [sp+18h] [bp-30h]@12
  int v59; // [sp+1Ch] [bp-2Ch]@1

  v59 = a4;
  v11 = (_DWORD *)a1;
  v13 = (_BYTE *)(*(_QWORD *)a4 >> 32);
  v12 = *(_QWORD *)a4;
  if ( (_BYTE *)v12 == v13 )
    goto LABEL_48;
  v14 = 0;
  v15 = 0;
  v16 = *(_QWORD *)a4;
  do
  {
    v17 = *(_DWORD *)(v16 + 12);
    if ( v17 >= 1 )
    {
      v18 = *(_DWORD *)(v16 + 8);
      v20 = __OFSUB__(v18, v17);
      v19 = v18 - v17 < 0;
      v21 = 0;
      if ( v19 ^ v20 )
        v21 = 1;
      v14 |= v21;
    }
    v22 = *(_DWORD *)(v16 + 4);
    v16 += 24;
    v15 += v22;
  }
  while ( v13 != (_BYTE *)v16 );
  if ( !(v14 & 1) )
    v15 = -1;
  if ( a11 > 30 || (signed int)v15 < 1 )
LABEL_48:
    j_NBBridgeEndFiller::createPiece((int)v11, a5, (int)a6, a7, a8, a9, a10, a11);
    return;
  v58 = (int *)(a3 + 36);
  if ( v15 )
    v23 = 0;
    do
      v24 = j_Random::_genRandInt32(a6);
      v25 = *(_QWORD *)v59 >> 32;
      v26 = *(_QWORD *)v59;
      if ( v26 != v25 )
      {
        v27 = v26 + 12;
        v28 = v24 % v15;
        do
        {
          v28 -= *(_DWORD *)(v27 - 8);
          if ( v28 <= -1 )
          {
            if ( *(_DWORD *)v27 && *(_DWORD *)(v27 - 4) >= *(_DWORD *)v27 || *(_DWORD *)(v27 + 4) > a11 )
              break;
            v29 = *(_DWORD **)(v27 - 12);
            v30 = *(v29 - 3);
            v31 = (const void *)*v58;
            if ( v30 == *(_DWORD *)(*v58 - 12) )
            {
              v32 = j_memcmp_0(v29, v31, v30);
              v33 = v32 == 0;
              if ( !v32 )
                v33 = *(_BYTE *)(v27 + 8) == 0;
              if ( v33 )
                break;
            }
            j_NetherFortressPiece::findAndCreateBridgePieceFactory(
              v11,
              (int)v31,
              (const void **)(v27 - 12),
              (__int64 *)a5,
              (int)a6,
              a7,
              a8,
              a9,
              a10,
              a11);
            if ( *v11 )
              v34 = v27 - 12;
              goto LABEL_51;
            v25 = *(_DWORD *)(v59 + 4);
            *v11 = 0;
          }
          v33 = v27 + 12 == v25;
          v27 += 24;
        }
        while ( !v33 );
      }
      ++v23;
    while ( v23 <= 4 );
  v35 = 0;
  while ( (_BYTE *)v12 == v13 )
LABEL_47:
    if ( ++v35 > 4 )
      goto LABEL_48;
    v12 = *(_DWORD *)v59;
  v36 = (_BYTE *)(v12 + 20);
  v37 = 0;
  while ( 1 )
    v37 -= *((_DWORD *)v36 - 4);
    if ( v37 <= -1 )
      break;
LABEL_45:
    v33 = v36 + 4 == v13;
    v36 += 24;
    if ( v33 )
      goto LABEL_47;
  v38 = *((_DWORD *)v36 - 2);
  if ( v38 && *((_DWORD *)v36 - 3) >= v38 || *((_DWORD *)v36 - 1) > a11 )
    goto LABEL_47;
  v39 = (_DWORD *)*((_DWORD *)v36 - 5);
  v40 = *(v39 - 3);
  v41 = (const void *)*v58;
  if ( v40 == *(_DWORD *)(*v58 - 12) )
    v42 = j_memcmp_0(v39, v41, v40);
    v43 = v42 == 0;
    if ( !v42 )
      v43 = *v36 == 0;
    if ( v43 )
  j_NetherFortressPiece::findAndCreateBridgePieceFactory(
    v11,
    (int)v41,
    (const void **)v36 - 5,
    (__int64 *)a5,
    (int)a6,
    a7,
    a8,
    a9,
    a10,
    a11);
  if ( !*v11 )
    v13 = *(_BYTE **)(v59 + 4);
    *v11 = 0;
    goto LABEL_45;
  v27 = (int)(v36 - 8);
  v34 = (int)(v36 - 20);
LABEL_51:
  ++*(_DWORD *)(v34 + 8);
  EntityInteraction::setInteractText(v58, (int *)v34);
  if ( *(_DWORD *)v27 && *(_DWORD *)(v34 + 8) >= *(_DWORD *)v27 )
    v44 = *(_DWORD *)(v59 + 4);
    v45 = v34 + 24;
    if ( v34 + 24 != v44 )
      v46 = v44 - v45;
      v45 = *(_DWORD *)(v59 + 4);
      if ( v46 >= 1 )
        v47 = -1431655765 * (v46 >> 3) + 1;
          v48 = v34 + 24;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v34,
            (int *)(v34 + 24));
          v49 = v34 + 4;
          --v47;
          v50 = *(_DWORD *)(v34 + 28);
          v51 = *(_DWORD *)(v34 + 32);
          v52 = *(_DWORD *)(v34 + 36);
          v53 = *(_DWORD *)(v34 + 40);
          *(_DWORD *)v49 = v50;
          *(_DWORD *)(v49 + 4) = v51;
          *(_DWORD *)(v49 + 8) = v52;
          *(_DWORD *)(v49 + 12) = v53;
          v34 = v48;
          *(_BYTE *)(v48 - 4) = *(_BYTE *)(v48 + 20);
        while ( v47 > 1 );
        v45 = *(_DWORD *)(v59 + 4);
    *(_DWORD *)(v59 + 4) = v45 - 24;
    v54 = *(_DWORD *)(v45 - 24);
    v55 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v54 - 4);
      if ( &pthread_create )
        __dmb();
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
      else
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v55);
}


signed int __fastcall NetherFortressPiece::updatePieceWeight(int a1, unsigned __int64 *a2)
{
  int v2; // r2@1
  int v3; // r12@1
  char v4; // lr@1
  signed int result; // r0@1
  signed int v6; // r3@2
  int v7; // r1@3
  bool v8; // nf@3
  unsigned __int8 v9; // vf@3
  char v10; // r1@3
  int v11; // r1@6

  v3 = *a2 >> 32;
  v2 = *a2;
  v4 = 0;
  for ( result = 0; v3 != v2; result += v11 )
  {
    v6 = *(_DWORD *)(v2 + 12);
    if ( v6 >= 1 )
    {
      v7 = *(_DWORD *)(v2 + 8);
      v9 = __OFSUB__(v7, v6);
      v8 = v7 - v6 < 0;
      v10 = 0;
      if ( v8 ^ v9 )
        v10 = 1;
      v4 |= v10;
    }
    v11 = *(_DWORD *)(v2 + 4);
    v2 += 24;
  }
  if ( !(v4 & 1) )
    result = -1;
  return result;
}


int __fastcall NetherFortressPiece::generateChildLeft(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // r0@2

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
    case 2:
      result = j_NetherFortressPiece::generateAndAddPiece(
                 *(_DWORD *)(a1 + 32),
                 a2,
                 a3,
                 a4,
                 *(_DWORD *)(a1 + 4) - 1,
                 *(_DWORD *)(a1 + 8) + a5,
                 *(_DWORD *)(a1 + 12) + a6,
                 1,
                 a7);
      break;
    case 1:
    case 3:
                 *(_DWORD *)(a1 + 4) + a6,
                 a5 + *(_DWORD *)(a1 + 8),
                 *(_DWORD *)(a1 + 12) - 1,
                 2,
    default:
      result = 0;
  }
  return result;
}


signed int __fastcall NetherFortressPiece::isOkBox(int a1)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_DWORD *)(a1 + 4);
  result = 0;
  if ( v1 > 10 )
    result = 1;
  return result;
}
