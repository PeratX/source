

int __fastcall SHRoomCrossing::SHRoomCrossing(int result)
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
  *(_DWORD *)result = &off_2724134;
  return result;
}


int __fastcall SHRoomCrossing::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  _DWORD *v10; // r10@1
  int result; // r0@1
  _DWORD *v12; // r0@4
  _DWORD *v13; // r6@4
  unsigned int v14; // r0@4
  int v15; // r0@5
  unsigned int v16; // r0@7
  int v17; // [sp+20h] [bp-38h]@1
  int v18; // [sp+24h] [bp-34h]@1
  int v19; // [sp+28h] [bp-30h]@7
  int v20; // [sp+2Ch] [bp-2Ch]@7
  int v21; // [sp+30h] [bp-28h]@7
  int v22; // [sp+34h] [bp-24h]@7

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v17, a4, a5, a6, -4, -1, 0, 11, 7, 11, a7);
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
    *v12 = &off_2724134;
    v12[7] = a7;
    v14 = j_Random::_genRandInt32(v8) % 5;
    if ( v14 > 3 )
      v15 = 0;
    else
      v15 = dword_2610B1C[v14];
    v13[9] = v15;
    v13[1] = v17;
    v13[2] = v18;
    v13[3] = v19;
    v13[4] = v20;
    v13[5] = v21;
    v13[6] = v22;
    v16 = j_Random::_genRandInt32(v8);
    *v10 = v13;
    result = v16 % 5;
    v13[10] = result;
  return result;
}


int __fastcall SHRoomCrossing::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_StrongholdPiece::generateSmallDoorChildForward(a1, a2, a3, a4, 4, 1);
  j_StrongholdPiece::generateSmallDoorChildLeft(v7, v6, v5, v4, 1, 4);
  return j_StrongholdPiece::generateSmallDoorChildRight(v7, v6, v5, v4, 1, 4);
}


signed int __fastcall SHRoomCrossing::getType(SHRoomCrossing *this)
{
  return 1397248579;
}


signed int __fastcall SHRoomCrossing::postProcess(SHRoomCrossing *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHRoomCrossing *v4; // r10@1
  __int16 *v5; // r5@1
  BlockSource *v6; // r4@1
  void (__fastcall *v7)(SHRoomCrossing *, BlockSource *, __int16 *, signed int); // r7@1
  void (__fastcall *v8)(SHRoomCrossing *, BlockSource *, __int16 *, _DWORD); // r7@1
  void (__fastcall *v9)(SHRoomCrossing *, BlockSource *, __int16 *, signed int); // r7@1
  BlockSource *v10; // r6@1
  __int16 *v11; // r4@1
  int v12; // r0@1
  signed int v13; // r5@4
  __int16 *v14; // r7@4
  void (__fastcall *v15)(SHRoomCrossing *, BlockSource *, char *, signed int); // r4@5
  void (__fastcall *v16)(SHRoomCrossing *, BlockSource *, char *, signed int); // r4@5
  __int16 *v17; // r11@6
  signed int v18; // r7@6
  char v19; // r0@6
  void (__fastcall *v20)(SHRoomCrossing *, BlockSource *, char *, signed int); // r4@7
  void (__fastcall *v21)(SHRoomCrossing *, BlockSource *, char *, signed int); // r4@7
  StructurePiece *v22; // r9@8
  signed int v23; // r7@8
  void (__fastcall *v24)(SHRoomCrossing *, BlockSource *, char *, signed int); // r4@8
  void (__fastcall *v25)(SHRoomCrossing *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v26)(SHRoomCrossing *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v27)(SHRoomCrossing *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v28)(SHRoomCrossing *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v29)(SHRoomCrossing *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v30)(SHRoomCrossing *, BlockSource *, char *, signed int); // r12@8
  void (__fastcall *v31)(SHRoomCrossing *); // r12@8
  void (__fastcall *v32)(SHRoomCrossing *, BlockSource *, char *, signed int); // r5@9
  void (__fastcall *v33)(SHRoomCrossing *, BlockSource *, char *, signed int); // r5@9
  void (__fastcall *v34)(SHRoomCrossing *, BlockSource *, char *, signed int); // r5@9
  void (__fastcall *v35)(SHRoomCrossing *, BlockSource *, char *, signed int); // r5@9
  __int16 *v36; // r5@10
  void (__fastcall *v37)(SHRoomCrossing *, BlockSource *, char *, signed int); // r12@10
  unsigned int v38; // r11@10
  _DWORD *v39; // r10@10
  _DWORD *v40; // r8@11
  int v41; // r1@11
  BlockSource *v42; // r10@11
  void (__fastcall *v43)(StructurePiece *, BlockSource *, char *, signed int); // r12@11
  void (__fastcall *v44)(StructurePiece *, BlockSource *, char *, signed int); // r7@11
  void (__fastcall *v45)(StructurePiece *, BlockSource *, char *, signed int); // r12@12
  void (__fastcall *v46)(StructurePiece *, BlockSource *, char *, signed int); // r12@12
  void (__fastcall *v47)(StructurePiece *, BlockSource *, char *, signed int); // r7@12
  void (__fastcall *v48)(StructurePiece *, BlockSource *, char *, signed int); // r12@13
  void (__fastcall *v49)(StructurePiece *, BlockSource *, char *, signed int); // r7@13
  char v50; // r4@14
  char v51; // r0@14
  void (__fastcall *v52)(StructurePiece *, BlockSource *, char *, signed int); // r12@14
  __int16 *v53; // r4@14
  BlockSource *v54; // r5@14
  char v55; // r6@14
  char v56; // r0@14
  void (__fastcall *v57)(StructurePiece *, BlockSource *, char *, signed int); // r12@14
  char v58; // r6@14
  char v59; // r0@14
  void (__fastcall *v60)(StructurePiece *, BlockSource *, char *, signed int); // r12@14
  __int16 *v61; // r6@14
  void (__fastcall *v62)(StructurePiece *, BlockSource *, __int16 *, Random *); // r4@14
  void *v63; // r0@14
  unsigned int *v64; // r2@15
  signed int v65; // r1@17
  signed int v66; // r4@19
  char v67; // r0@19
  void (__fastcall *v68)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@20
  void (__fastcall *v69)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@20
  void (__fastcall *v70)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@20
  void (__fastcall *v71)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@20
  BlockSource *v72; // r5@21
  void (__fastcall *v73)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@21
  void (__fastcall *v74)(SHRoomCrossing *, BlockSource *, char *, signed int); // r6@21
  void (__fastcall *v75)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@21
  char *v76; // r2@21
  void (__fastcall *v77)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@21
  BlockSource *v78; // r1@21
  SHRoomCrossing *v79; // r0@21
  void (__fastcall *v80)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v81)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v82)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  char v83; // r0@22
  void (__fastcall *v84)(SHRoomCrossing *, BlockSource *, char *, signed int); // r5@22
  char v85; // r0@22
  void (__fastcall *v86)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  char v87; // r0@22
  void (__fastcall *v88)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  char v89; // r0@22
  void (__fastcall *v90)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v91)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v92)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v93)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v94)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v95)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v96)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  void (__fastcall *v97)(SHRoomCrossing *, BlockSource *, char *, signed int); // r7@22
  Random *v99; // [sp+20h] [bp-50h]@1
  int v100; // [sp+2Ch] [bp-44h]@14
  char v101; // [sp+30h] [bp-40h]@1
  char v102; // [sp+31h] [bp-3Fh]@1
  char v103; // [sp+34h] [bp-3Ch]@1
  char v104; // [sp+35h] [bp-3Bh]@1
  char v105; // [sp+38h] [bp-38h]@1
  char v106; // [sp+39h] [bp-37h]@1
  char v107; // [sp+3Ch] [bp-34h]@1
  char v108; // [sp+3Dh] [bp-33h]@1
  char v109; // [sp+40h] [bp-30h]@1
  char v110; // [sp+41h] [bp-2Fh]@1
  char v111; // [sp+44h] [bp-2Ch]@1
  char v112; // [sp+45h] [bp-2Bh]@1
  char v113; // [sp+48h] [bp-28h]@5
  char v114; // [sp+49h] [bp-27h]@5

  v4 = this;
  v5 = (__int16 *)a4;
  v6 = a2;
  v99 = a3;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    10,
    6,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v6, 4, v5, *((_DWORD *)v4 + 9), 4);
  v7 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v111 = BlockID::AIR;
  v109 = BlockID::AIR;
  v112 = 0;
  v110 = 0;
  v7(v4, v6, v5, 4);
  v8 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, __int16 *, _DWORD))(*(_DWORD *)v4 + 40);
  v107 = BlockID::AIR;
  v105 = BlockID::AIR;
  v108 = 0;
  v106 = 0;
  v8(v4, v6, v5, 0);
  v9 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  v10 = v6;
  v103 = BlockID::AIR;
  v11 = v5;
  v101 = BlockID::AIR;
  v104 = 0;
  v102 = 0;
  v9(v4, v10, v5, 10);
  v12 = *((_DWORD *)v4 + 10);
  if ( !v12 )
  {
    v80 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v113 = *(_BYTE *)(Block::mStoneBrick + 4);
    v114 = 0;
    v80(v4, v10, &v113, 5);
    v81 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v81(v4, v10, &v113, 5);
    v82 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v82(v4, v10, &v113, 5);
    LOBYTE(v82) = *(_BYTE *)(Block::mTorch + 4);
    v83 = j_StructurePiece::getTorchData(v4, 3);
    v84 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v113 = (char)v82;
    v114 = v83;
    v84(v4, v10, &v113, 4);
    LOBYTE(v84) = *(_BYTE *)(Block::mTorch + 4);
    v85 = j_StructurePiece::getTorchData(v4, 1);
    v86 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v113 = (char)v84;
    v114 = v85;
    v86(v4, v10, &v113, 6);
    v87 = j_StructurePiece::getTorchData(v4, 2);
    v88 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v114 = v87;
    v88(v4, v10, &v113, 5);
    v89 = j_StructurePiece::getTorchData(v4, 0);
    v90 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v114 = v89;
    v90(v4, v10, &v113, 5);
    v91 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v113 = *(_BYTE *)(Block::mStoneSlab + 4);
    v91(v4, v10, &v113, 4);
    v92 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v92(v4, v10, &v113, 4);
    v93 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v93(v4, v10, &v113, 4);
    v94 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v94(v4, v10, &v113, 6);
    v95 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v95(v4, v10, &v113, 6);
    v96 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v96(v4, v10, &v113, 6);
    v97 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v97(v4, v10, &v113, 5);
    v76 = &v113;
    v77 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v78 = v10;
    v79 = v4;
LABEL_23:
    v77(v79, v78, v76, 5);
    return 1;
  }
  if ( v12 == 1 )
    v66 = 3;
    v67 = *(_BYTE *)(Block::mStoneBrick + 4);
    do
    {
      v68 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v113 = v67;
      v114 = 0;
      v68(v4, v10, &v113, 3);
      v69 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v113 = *(_BYTE *)(Block::mStoneBrick + 4);
      v69(v4, v10, &v113, 7);
      v70 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v70(v4, v10, &v113, v66);
      v71 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v71(v4, v10, &v113, v66++);
      v67 = *(_BYTE *)(Block::mStoneBrick + 4);
    }
    while ( v66 != 8 );
    v72 = v10;
    v73 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v73(v4, v10, &v113, 5);
    v74 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v74(v4, v72, &v113, 5);
    v75 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v75(v4, v72, &v113, 5);
    v78 = v72;
    v113 = *(_BYTE *)(Block::mFlowingWater + 4);
    goto LABEL_23;
  if ( v12 == 2 )
    v13 = 1;
    v14 = v11;
      v15 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v113 = *(_BYTE *)(Block::mCobblestone + 4);
      v15(v4, v10, &v113, 1);
      v16 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v16(v4, v10, &v113, 9);
      ++v13;
    while ( v13 != 10 );
    v17 = v14;
    v18 = 1;
    v19 = *(_BYTE *)(Block::mCobblestone + 4);
      v20 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v113 = v19;
      v20(v4, v10, &v113, v18);
      v21 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v21(v4, v10, &v113, v18++);
      v19 = *(_BYTE *)(Block::mCobblestone + 4);
    while ( v18 != 10 );
    v22 = v4;
    v23 = 1;
    v24 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v113 = *(_BYTE *)(Block::mCobblestone + 4);
    v24(v4, v10, &v113, 5);
    v25 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v25(v4, v10, &v113, 5);
    v26 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v26(v4, v10, &v113, 5);
    v27 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v27(v4, v10, &v113, 5);
    v28 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v28(v4, v10, &v113, 4);
    v29 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v29(v4, v10, &v113, 6);
    v30 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v30(v4, v10, &v113, 4);
    v31 = *(void (__fastcall **)(SHRoomCrossing *))(*(_DWORD *)v4 + 36);
    v31(v4);
      v32 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v32(v4, v10, &v113, 4);
      v33 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v33(v4, v10, &v113, 6);
      v34 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v34(v4, v10, &v113, 4);
      v35 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v35(v4, v10, &v113, 6);
      ++v23;
    while ( v23 != 4 );
    v36 = v17;
    v37 = *(void (__fastcall **)(SHRoomCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v113 = *(_BYTE *)(Block::mTorch + 4);
    v37(v4, v10, &v113, 5);
    v38 = -2;
    v39 = &Block::mWoodPlanks;
      v40 = v39;
      v41 = *v39;
      v42 = v10;
      v43 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
      v113 = *(_BYTE *)(v41 + 4);
      v43(v22, v10, &v113, 2);
      v44 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
      v113 = *(_BYTE *)(*v40 + 4);
      v44(v22, v10, &v113, 3);
      if ( v38 >= 3 )
      {
        v45 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
        v113 = *(_BYTE *)(Block::mWoodPlanks + 4);
        v114 = 0;
        v45(v22, v10, &v113, 4);
        v46 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
        v46(v22, v10, &v113, 5);
        v47 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
        v42 = v10;
        v47(v22, v10, &v113, 6);
      }
      v10 = v42;
      v48 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
      v113 = *(_BYTE *)(Block::mWoodPlanks + 4);
      v48(v22, v42, &v113, 7);
      v39 = &Block::mWoodPlanks;
      v49 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
      v49(v22, v10, &v113, 8);
      ++v38;
    while ( v38 != 5 );
    v50 = *(_BYTE *)(Block::mLadder + 4);
    v51 = j_StructurePiece::getOrientationData(v22, (const Block *)Block::mLadder, 4);
    v52 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
    v113 = v50;
    v53 = v36;
    v54 = v10;
    v114 = v51;
    v52(v22, v10, &v113, 9);
    v55 = *(_BYTE *)(Block::mLadder + 4);
    v56 = j_StructurePiece::getOrientationData(v22, (const Block *)Block::mLadder, 4);
    v57 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
    v113 = v55;
    v114 = v56;
    v57(v22, v54, &v113, 9);
    v58 = *(_BYTE *)(Block::mLadder + 4);
    v59 = j_StructurePiece::getOrientationData(v22, (const Block *)Block::mLadder, 4);
    v60 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v22 + 36);
    v113 = v58;
    v61 = v53;
    v114 = v59;
    v60(v22, v54, &v113, 9);
    v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, __int16 *, Random *))(*(_DWORD *)v22 + 48);
    sub_21E94B4((void **)&v100, "loot_tables/chests/stronghold_crossing.json");
    v62(v22, v54, v61, v99);
    v63 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v100 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
      else
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v63);
  return 1;
}


int __fastcall SHRoomCrossing::SHRoomCrossing(int a1, int a2, Random *this, int a4, int a5)
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
  *(_DWORD *)a1 = &off_2724134;
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
  *(_DWORD *)(v5 + 40) = j_Random::_genRandInt32(v6) % 5;
  return v5;
}
