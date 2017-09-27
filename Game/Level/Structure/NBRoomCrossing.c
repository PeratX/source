

int __fastcall NBRoomCrossing::NBRoomCrossing(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723B00;
  return result;
}


int __fastcall NBRoomCrossing::NBRoomCrossing(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723B00;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}


signed int __fastcall NBRoomCrossing::postProcess(NBRoomCrossing *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBRoomCrossing *v4; // r6@1
  BlockSource *v5; // r11@1
  const BoundingBox *v6; // r10@1
  void (__cdecl *v7)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int); // r7@1
  void (__fastcall *v8)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v9)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v10)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v11)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v12)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v13)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v14)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v15)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v16)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v17)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v18)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v19)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v20)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v21)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v22)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v23)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v24)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int); // r4@1
  int v25; // r4@1
  void (__fastcall *v26)(NBRoomCrossing *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v27)(NBRoomCrossing *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v28)(NBRoomCrossing *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v29)(NBRoomCrossing *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v30)(NBRoomCrossing *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v31)(NBRoomCrossing *, BlockSource *, char *, int); // r5@2
  int (__fastcall *v32)(NBRoomCrossing *, BlockSource *, char *, int); // r5@2
  NetherFortressPiece *v33; // r0@2
  Random *v34; // r2@2
  char v36; // [sp+28h] [bp-B8h]@2
  char v37; // [sp+29h] [bp-B7h]@2
  char v38; // [sp+2Ch] [bp-B4h]@1
  char v39; // [sp+2Dh] [bp-B3h]@1
  char v40; // [sp+30h] [bp-B0h]@1
  char v41; // [sp+31h] [bp-AFh]@1
  char v42; // [sp+34h] [bp-ACh]@1
  char v43; // [sp+35h] [bp-ABh]@1
  char v44; // [sp+38h] [bp-A8h]@1
  char v45; // [sp+39h] [bp-A7h]@1
  char v46; // [sp+3Ch] [bp-A4h]@1
  char v47; // [sp+3Dh] [bp-A3h]@1
  char v48; // [sp+40h] [bp-A0h]@1
  char v49; // [sp+41h] [bp-9Fh]@1
  char v50; // [sp+44h] [bp-9Ch]@1
  char v51; // [sp+45h] [bp-9Bh]@1
  char v52; // [sp+48h] [bp-98h]@1
  char v53; // [sp+49h] [bp-97h]@1
  char v54; // [sp+4Ch] [bp-94h]@1
  char v55; // [sp+4Dh] [bp-93h]@1
  char v56; // [sp+50h] [bp-90h]@1
  char v57; // [sp+51h] [bp-8Fh]@1
  char v58; // [sp+54h] [bp-8Ch]@1
  char v59; // [sp+55h] [bp-8Bh]@1
  char v60; // [sp+58h] [bp-88h]@1
  char v61; // [sp+59h] [bp-87h]@1
  char v62; // [sp+5Ch] [bp-84h]@1
  char v63; // [sp+5Dh] [bp-83h]@1
  char v64; // [sp+60h] [bp-80h]@1
  char v65; // [sp+61h] [bp-7Fh]@1
  char v66; // [sp+64h] [bp-7Ch]@1
  char v67; // [sp+65h] [bp-7Bh]@1
  char v68; // [sp+68h] [bp-78h]@1
  char v69; // [sp+69h] [bp-77h]@1
  char v70; // [sp+6Ch] [bp-74h]@1
  char v71; // [sp+6Dh] [bp-73h]@1
  char v72; // [sp+70h] [bp-70h]@1
  char v73; // [sp+71h] [bp-6Fh]@1
  char v74; // [sp+74h] [bp-6Ch]@1
  char v75; // [sp+75h] [bp-6Bh]@1
  char v76; // [sp+78h] [bp-68h]@1
  char v77; // [sp+79h] [bp-67h]@1
  char v78; // [sp+7Ch] [bp-64h]@1
  char v79; // [sp+7Dh] [bp-63h]@1
  char v80; // [sp+80h] [bp-60h]@1
  char v81; // [sp+81h] [bp-5Fh]@1
  char v82; // [sp+84h] [bp-5Ch]@1
  char v83; // [sp+85h] [bp-5Bh]@1
  char v84; // [sp+88h] [bp-58h]@1
  char v85; // [sp+89h] [bp-57h]@1
  char v86; // [sp+8Ch] [bp-54h]@1
  char v87; // [sp+8Dh] [bp-53h]@1
  char v88; // [sp+90h] [bp-50h]@1
  char v89; // [sp+91h] [bp-4Fh]@1
  char v90; // [sp+94h] [bp-4Ch]@1
  char v91; // [sp+95h] [bp-4Bh]@1
  char v92; // [sp+98h] [bp-48h]@1
  char v93; // [sp+99h] [bp-47h]@1
  char v94; // [sp+9Ch] [bp-44h]@1
  char v95; // [sp+9Dh] [bp-43h]@1
  char v96; // [sp+A0h] [bp-40h]@1
  char v97; // [sp+A1h] [bp-3Fh]@1
  char v98; // [sp+A4h] [bp-3Ch]@1
  char v99; // [sp+A5h] [bp-3Bh]@1
  char v100; // [sp+A8h] [bp-38h]@1
  char v101; // [sp+A9h] [bp-37h]@1
  char v102; // [sp+ACh] [bp-34h]@1
  char v103; // [sp+ADh] [bp-33h]@1
  char v104; // [sp+B0h] [bp-30h]@1
  char v105; // [sp+B1h] [bp-2Fh]@1
  char v106; // [sp+B4h] [bp-2Ch]@1
  char v107; // [sp+B5h] [bp-2Bh]@1
  char v108; // [sp+B8h] [bp-28h]@1
  char v109; // [sp+B9h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v108 = *(_BYTE *)(Block::mNetherBrick + 4);
  v109 = 0;
  v106 = *(_BYTE *)(Block::mNetherBrick + 4);
  v107 = 0;
  v7(this, a2, a4, 0, 0, 0, 6, 1);
  v8 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v104 = BlockID::AIR;
  v102 = BlockID::AIR;
  v105 = 0;
  v103 = 0;
  v8(v4, v5, v6, 0);
  v9 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v100 = *(_BYTE *)(Block::mNetherBrick + 4);
  v101 = 0;
  v98 = *(_BYTE *)(Block::mNetherBrick + 4);
  v99 = 0;
  v9(v4, v5, v6, 0);
  v10 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v96 = *(_BYTE *)(Block::mNetherBrick + 4);
  v97 = 0;
  v94 = *(_BYTE *)(Block::mNetherBrick + 4);
  v95 = 0;
  v10(v4, v5, v6, 0);
  v11 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v92 = *(_BYTE *)(Block::mNetherBrick + 4);
  v93 = 0;
  v90 = *(_BYTE *)(Block::mNetherBrick + 4);
  v91 = 0;
  v11(v4, v5, v6, 5);
  v12 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v88 = *(_BYTE *)(Block::mNetherBrick + 4);
  v89 = 0;
  v86 = *(_BYTE *)(Block::mNetherBrick + 4);
  v87 = 0;
  v12(v4, v5, v6, 5);
  v13 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v84 = *(_BYTE *)(Block::mNetherBrick + 4);
  v85 = 0;
  v82 = *(_BYTE *)(Block::mNetherBrick + 4);
  v83 = 0;
  v13(v4, v5, v6, 0);
  v14 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v80 = *(_BYTE *)(Block::mNetherBrick + 4);
  v81 = 0;
  v78 = *(_BYTE *)(Block::mNetherBrick + 4);
  v79 = 0;
  v14(v4, v5, v6, 0);
  v15 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v76 = *(_BYTE *)(Block::mNetherBrick + 4);
  v77 = 0;
  v74 = *(_BYTE *)(Block::mNetherBrick + 4);
  v75 = 0;
  v15(v4, v5, v6, 6);
  v16 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v72 = *(_BYTE *)(Block::mNetherBrick + 4);
  v73 = 0;
  v70 = *(_BYTE *)(Block::mNetherBrick + 4);
  v71 = 0;
  v16(v4, v5, v6, 6);
  v17 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v68 = *(_BYTE *)(Block::mNetherBrick + 4);
  v69 = 0;
  v66 = *(_BYTE *)(Block::mNetherBrick + 4);
  v67 = 0;
  v17(v4, v5, v6, 2);
  v18 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v64 = *(_BYTE *)(Block::mNetherFence + 4);
  v65 = 0;
  v62 = *(_BYTE *)(Block::mNetherFence + 4);
  v63 = 0;
  v18(v4, v5, v6, 2);
  v19 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v60 = *(_BYTE *)(Block::mNetherBrick + 4);
  v61 = 0;
  v58 = *(_BYTE *)(Block::mNetherBrick + 4);
  v59 = 0;
  v19(v4, v5, v6, 2);
  v20 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v56 = *(_BYTE *)(Block::mNetherFence + 4);
  v57 = 0;
  v54 = *(_BYTE *)(Block::mNetherFence + 4);
  v55 = 0;
  v20(v4, v5, v6, 2);
  v21 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v52 = *(_BYTE *)(Block::mNetherBrick + 4);
  v53 = 0;
  v50 = *(_BYTE *)(Block::mNetherBrick + 4);
  v51 = 0;
  v21(v4, v5, v6, 0);
  v22 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v48 = *(_BYTE *)(Block::mNetherFence + 4);
  v49 = 0;
  v46 = *(_BYTE *)(Block::mNetherFence + 4);
  v47 = 0;
  v22(v4, v5, v6, 0);
  v23 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v44 = *(_BYTE *)(Block::mNetherBrick + 4);
  v45 = 0;
  v42 = *(_BYTE *)(Block::mNetherBrick + 4);
  v43 = 0;
  v23(v4, v5, v6, 6);
  v24 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v40 = *(_BYTE *)(Block::mNetherFence + 4);
  v41 = 0;
  v38 = *(_BYTE *)(Block::mNetherFence + 4);
  v39 = 0;
  v24(v4, v5, v6, 6);
  v25 = 0;
  do
  {
    v26 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v36 = *(_BYTE *)(Block::mNetherBrick + 4);
    v37 = 0;
    v26(v4, v5, &v36, v25);
    v27 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v27(v4, v5, &v36, v25);
    v28 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v28(v4, v5, &v36, v25);
    v29 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v29(v4, v5, &v36, v25);
    v30 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v30(v4, v5, &v36, v25);
    v31 = *(void (__fastcall **)(NBRoomCrossing *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v31(v4, v5, &v36, v25);
    v32 = *(int (__fastcall **)(NBRoomCrossing *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v33 = (NetherFortressPiece *)v32(v4, v5, &v36, v25++);
  }
  while ( v25 != 7 );
  return j_NetherFortressPiece::postProcess(v33, v5, v34, v6);
}


signed int __fastcall NBRoomCrossing::getType(NBRoomCrossing *this)
{
  return 1312969283;
}


int __fastcall NBRoomCrossing::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_NetherFortressPiece::generateChildForward(a1, a2, a3, a4, 2, 0, 0);
  j_NetherFortressPiece::generateChildLeft(v7, v6, v5, v4, 0, 2, 0);
  return j_NetherFortressPiece::generateChildRight(v7, v6, v5, v4, 0, 2, 0);
}


_DWORD *__fastcall NBRoomCrossing::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 *v8; // r5@1
  _DWORD *v9; // r9@1
  _DWORD *result; // r0@1
  int v11; // r1@4
  int v12; // [sp+1Ch] [bp-34h]@1
  _DWORD *v13; // [sp+20h] [bp-30h]@1
  int v14; // [sp+24h] [bp-2Ch]@4
  int v15; // [sp+28h] [bp-28h]@4
  int v16; // [sp+2Ch] [bp-24h]@4
  int v17; // [sp+30h] [bp-20h]@4

  v8 = (__int64 *)a2;
  v9 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -2, 0, 0, 7, 9, 7, a7);
  result = v13;
  if ( (signed int)v13 < 11 || (result = (_DWORD *)j_StructurePiece::findCollisionPiece(v8, (int)&v12)) != 0 )
  {
    *v9 = 0;
  }
  else
    result = j_operator new(0x24u);
    result[3] = 0;
    result[4] = 0;
    result[1] = 0;
    result[2] = 0;
    result[8] = a8;
    *v9 = result;
    *result = &off_2723B00;
    v11 = v12;
    result[7] = a7;
    result[1] = v11;
    result[2] = v13;
    result[3] = v14;
    result[4] = v15;
    result[5] = v16;
    result[6] = v17;
  return result;
}
