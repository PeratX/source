

signed int __fastcall NBStairsRoom::getType(NBStairsRoom *this)
{
  return 1312969554;
}


signed int __fastcall NBStairsRoom::postProcess(NBStairsRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBStairsRoom *v4; // r6@1
  BlockSource *v5; // r10@1
  const BoundingBox *v6; // r9@1
  void (__cdecl *v7)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int); // r7@1
  void (__fastcall *v8)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v9)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v10)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v11)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v12)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v13)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v14)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v15)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v16)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v17)(NBStairsRoom *, BlockSource *, char *, signed int); // r7@1
  void (__fastcall *v18)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v19)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v20)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v21)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v22)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v23)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v24)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v25)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  int v26; // r4@1
  void (__fastcall *v27)(NBStairsRoom *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v28)(NBStairsRoom *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v29)(NBStairsRoom *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v30)(NBStairsRoom *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v31)(NBStairsRoom *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v32)(NBStairsRoom *, BlockSource *, char *, int); // r5@2
  int (__fastcall *v33)(NBStairsRoom *, BlockSource *, char *, int); // r5@2
  NetherFortressPiece *v34; // r0@2
  Random *v35; // r2@2
  char v37; // [sp+2Ch] [bp-BCh]@2
  char v38; // [sp+2Dh] [bp-BBh]@2
  char v39; // [sp+30h] [bp-B8h]@1
  char v40; // [sp+31h] [bp-B7h]@1
  char v41; // [sp+34h] [bp-B4h]@1
  char v42; // [sp+35h] [bp-B3h]@1
  char v43; // [sp+38h] [bp-B0h]@1
  char v44; // [sp+39h] [bp-AFh]@1
  char v45; // [sp+3Ch] [bp-ACh]@1
  char v46; // [sp+3Dh] [bp-ABh]@1
  char v47; // [sp+40h] [bp-A8h]@1
  char v48; // [sp+41h] [bp-A7h]@1
  char v49; // [sp+44h] [bp-A4h]@1
  char v50; // [sp+45h] [bp-A3h]@1
  char v51; // [sp+48h] [bp-A0h]@1
  char v52; // [sp+49h] [bp-9Fh]@1
  char v53; // [sp+4Ch] [bp-9Ch]@1
  char v54; // [sp+4Dh] [bp-9Bh]@1
  char v55; // [sp+50h] [bp-98h]@1
  char v56; // [sp+51h] [bp-97h]@1
  char v57; // [sp+54h] [bp-94h]@1
  char v58; // [sp+55h] [bp-93h]@1
  char v59; // [sp+58h] [bp-90h]@1
  char v60; // [sp+59h] [bp-8Fh]@1
  char v61; // [sp+5Ch] [bp-8Ch]@1
  char v62; // [sp+5Dh] [bp-8Bh]@1
  char v63; // [sp+60h] [bp-88h]@1
  char v64; // [sp+61h] [bp-87h]@1
  char v65; // [sp+64h] [bp-84h]@1
  char v66; // [sp+65h] [bp-83h]@1
  char v67; // [sp+68h] [bp-80h]@1
  char v68; // [sp+69h] [bp-7Fh]@1
  char v69; // [sp+6Ch] [bp-7Ch]@1
  char v70; // [sp+6Dh] [bp-7Bh]@1
  char v71; // [sp+70h] [bp-78h]@1
  char v72; // [sp+71h] [bp-77h]@1
  char v73; // [sp+74h] [bp-74h]@1
  char v74; // [sp+75h] [bp-73h]@1
  char v75; // [sp+78h] [bp-70h]@1
  char v76; // [sp+79h] [bp-6Fh]@1
  char v77; // [sp+7Ch] [bp-6Ch]@1
  char v78; // [sp+7Dh] [bp-6Bh]@1
  char v79; // [sp+80h] [bp-68h]@1
  char v80; // [sp+81h] [bp-67h]@1
  char v81; // [sp+84h] [bp-64h]@1
  char v82; // [sp+85h] [bp-63h]@1
  char v83; // [sp+88h] [bp-60h]@1
  char v84; // [sp+89h] [bp-5Fh]@1
  char v85; // [sp+8Ch] [bp-5Ch]@1
  char v86; // [sp+8Dh] [bp-5Bh]@1
  char v87; // [sp+90h] [bp-58h]@1
  char v88; // [sp+91h] [bp-57h]@1
  char v89; // [sp+94h] [bp-54h]@1
  char v90; // [sp+95h] [bp-53h]@1
  char v91; // [sp+98h] [bp-50h]@1
  char v92; // [sp+99h] [bp-4Fh]@1
  char v93; // [sp+9Ch] [bp-4Ch]@1
  char v94; // [sp+9Dh] [bp-4Bh]@1
  char v95; // [sp+A0h] [bp-48h]@1
  char v96; // [sp+A1h] [bp-47h]@1
  char v97; // [sp+A4h] [bp-44h]@1
  char v98; // [sp+A5h] [bp-43h]@1
  char v99; // [sp+A8h] [bp-40h]@1
  char v100; // [sp+A9h] [bp-3Fh]@1
  char v101; // [sp+ACh] [bp-3Ch]@1
  char v102; // [sp+ADh] [bp-3Bh]@1
  char v103; // [sp+B0h] [bp-38h]@1
  char v104; // [sp+B1h] [bp-37h]@1
  char v105; // [sp+B4h] [bp-34h]@1
  char v106; // [sp+B5h] [bp-33h]@1
  char v107; // [sp+B8h] [bp-30h]@1
  char v108; // [sp+B9h] [bp-2Fh]@1
  char v109; // [sp+BCh] [bp-2Ch]@1
  char v110; // [sp+BDh] [bp-2Bh]@1
  char v111; // [sp+C0h] [bp-28h]@1
  char v112; // [sp+C1h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v109 = *(_BYTE *)(Block::mNetherBrick + 4);
  v110 = 0;
  v107 = *(_BYTE *)(Block::mNetherBrick + 4);
  v108 = 0;
  v7(this, a2, a4, 0, 0, 0, 6, 1);
  v8 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v105 = BlockID::AIR;
  v103 = BlockID::AIR;
  v106 = 0;
  v104 = 0;
  v8(v4, v5, v6, 0);
  v9 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v101 = *(_BYTE *)(Block::mNetherBrick + 4);
  v102 = 0;
  v99 = *(_BYTE *)(Block::mNetherBrick + 4);
  v100 = 0;
  v9(v4, v5, v6, 0);
  v10 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v97 = *(_BYTE *)(Block::mNetherBrick + 4);
  v98 = 0;
  v95 = *(_BYTE *)(Block::mNetherBrick + 4);
  v96 = 0;
  v10(v4, v5, v6, 5);
  v11 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v93 = *(_BYTE *)(Block::mNetherBrick + 4);
  v94 = 0;
  v91 = *(_BYTE *)(Block::mNetherBrick + 4);
  v92 = 0;
  v11(v4, v5, v6, 0);
  v12 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v89 = *(_BYTE *)(Block::mNetherBrick + 4);
  v90 = 0;
  v87 = *(_BYTE *)(Block::mNetherBrick + 4);
  v88 = 0;
  v12(v4, v5, v6, 6);
  v13 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v85 = *(_BYTE *)(Block::mNetherBrick + 4);
  v86 = 0;
  v83 = *(_BYTE *)(Block::mNetherBrick + 4);
  v84 = 0;
  v13(v4, v5, v6, 1);
  v14 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v81 = *(_BYTE *)(Block::mNetherFence + 4);
  v82 = 0;
  v79 = *(_BYTE *)(Block::mNetherFence + 4);
  v80 = 0;
  v14(v4, v5, v6, 0);
  v15 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v77 = *(_BYTE *)(Block::mNetherFence + 4);
  v78 = 0;
  v75 = *(_BYTE *)(Block::mNetherFence + 4);
  v76 = 0;
  v15(v4, v5, v6, 6);
  v16 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v73 = *(_BYTE *)(Block::mNetherFence + 4);
  v74 = 0;
  v71 = *(_BYTE *)(Block::mNetherFence + 4);
  v72 = 0;
  v16(v4, v5, v6, 6);
  v17 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v111 = *(_BYTE *)(Block::mNetherBrick + 4);
  v112 = 0;
  v17(v4, v5, &v111, 5);
  v18 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v69 = *(_BYTE *)(Block::mNetherBrick + 4);
  v70 = 0;
  v67 = *(_BYTE *)(Block::mNetherBrick + 4);
  v68 = 0;
  v18(v4, v5, v6, 4);
  v19 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v65 = *(_BYTE *)(Block::mNetherBrick + 4);
  v66 = 0;
  v63 = *(_BYTE *)(Block::mNetherBrick + 4);
  v64 = 0;
  v19(v4, v5, v6, 3);
  v20 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v61 = *(_BYTE *)(Block::mNetherBrick + 4);
  v62 = 0;
  v59 = *(_BYTE *)(Block::mNetherBrick + 4);
  v60 = 0;
  v20(v4, v5, v6, 2);
  v21 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v57 = *(_BYTE *)(Block::mNetherBrick + 4);
  v58 = 0;
  v55 = *(_BYTE *)(Block::mNetherBrick + 4);
  v56 = 0;
  v21(v4, v5, v6, 1);
  v22 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v53 = *(_BYTE *)(Block::mNetherBrick + 4);
  v54 = 0;
  v51 = *(_BYTE *)(Block::mNetherBrick + 4);
  v52 = 0;
  v22(v4, v5, v6, 1);
  v23 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v49 = BlockID::AIR;
  v47 = BlockID::AIR;
  v50 = 0;
  v48 = 0;
  v23(v4, v5, v6, 6);
  v24 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v45 = *(_BYTE *)(Block::mNetherBrick + 4);
  v46 = 0;
  v43 = *(_BYTE *)(Block::mNetherBrick + 4);
  v44 = 0;
  v24(v4, v5, v6, 2);
  v25 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v41 = *(_BYTE *)(Block::mNetherFence + 4);
  v42 = 0;
  v39 = *(_BYTE *)(Block::mNetherFence + 4);
  v40 = 0;
  v25(v4, v5, v6, 2);
  v26 = 0;
  do
  {
    v27 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v37 = *(_BYTE *)(Block::mNetherBrick + 4);
    v38 = 0;
    v27(v4, v5, &v37, v26);
    v28 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v28(v4, v5, &v37, v26);
    v29 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v29(v4, v5, &v37, v26);
    v30 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v30(v4, v5, &v37, v26);
    v31 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v31(v4, v5, &v37, v26);
    v32 = *(void (__fastcall **)(NBStairsRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v32(v4, v5, &v37, v26);
    v33 = *(int (__fastcall **)(NBStairsRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v34 = (NetherFortressPiece *)v33(v4, v5, &v37, v26++);
  }
  while ( v26 != 7 );
  return j_NetherFortressPiece::postProcess(v34, v5, v35, v6);
}


_DWORD *__fastcall NBStairsRoom::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -2, 0, 0, 7, 11, 7, a7);
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
    *result = &off_2723B48;
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


int __fastcall NBStairsRoom::NBStairsRoom(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723B48;
  return result;
}


int __fastcall NBStairsRoom::NBStairsRoom(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723B48;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}
