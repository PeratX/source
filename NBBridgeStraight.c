

int __fastcall NBBridgeStraight::NBBridgeStraight(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723A70;
  return result;
}


int __fastcall NBBridgeStraight::NBBridgeStraight(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723A70;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}


_DWORD *__fastcall NBBridgeStraight::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 *v8; // r5@1
  _DWORD *v9; // r9@1
  _DWORD *result; // r0@1
  int v11; // r1@4
  int v12; // [sp+20h] [bp-38h]@1
  _DWORD *v13; // [sp+24h] [bp-34h]@1
  int v14; // [sp+28h] [bp-30h]@4
  int v15; // [sp+2Ch] [bp-2Ch]@4
  int v16; // [sp+30h] [bp-28h]@4
  int v17; // [sp+34h] [bp-24h]@4

  v8 = (__int64 *)a2;
  v9 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -1, -3, 0, 5, 10, 19, a7);
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
    *result = &off_2723A70;
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


signed int __fastcall NBBridgeStraight::postProcess(NBBridgeStraight *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBBridgeStraight *v4; // r6@1
  BlockSource *v5; // r11@1
  const BoundingBox *v6; // r10@1
  void (__cdecl *v7)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int); // r4@1
  void (__fastcall *v8)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v9)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v10)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v11)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v12)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v13)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v14)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  int v15; // r7@1
  void (__fastcall *v16)(NBBridgeStraight *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v17)(NBBridgeStraight *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v18)(NBBridgeStraight *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v19)(NBBridgeStraight *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v20)(NBBridgeStraight *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v21)(NBBridgeStraight *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v22)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r7@3
  void (__fastcall *v23)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r7@3
  void (__fastcall *v24)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r7@3
  void (__fastcall *v25)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD); // r7@3
  void (__fastcall *v26)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int); // r7@3
  void (__fastcall *v27)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int); // r7@3
  void (__fastcall *v28)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int); // r7@3
  int (__fastcall *v29)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int); // r7@3
  NetherFortressPiece *v30; // r0@3
  Random *v31; // r2@3
  char v33; // [sp+24h] [bp-ACh]@3
  char v34; // [sp+25h] [bp-ABh]@3
  char v35; // [sp+28h] [bp-A8h]@3
  char v36; // [sp+29h] [bp-A7h]@3
  char v37; // [sp+2Ch] [bp-A4h]@3
  char v38; // [sp+2Dh] [bp-A3h]@3
  char v39; // [sp+30h] [bp-A0h]@3
  char v40; // [sp+31h] [bp-9Fh]@3
  char v41; // [sp+34h] [bp-9Ch]@3
  char v42; // [sp+35h] [bp-9Bh]@3
  char v43; // [sp+38h] [bp-98h]@3
  char v44; // [sp+39h] [bp-97h]@3
  char v45; // [sp+3Ch] [bp-94h]@3
  char v46; // [sp+3Dh] [bp-93h]@3
  char v47; // [sp+40h] [bp-90h]@3
  char v48; // [sp+41h] [bp-8Fh]@3
  char v49; // [sp+44h] [bp-8Ch]@3
  char v50; // [sp+45h] [bp-8Bh]@3
  char v51; // [sp+48h] [bp-88h]@3
  char v52; // [sp+49h] [bp-87h]@3
  char v53; // [sp+4Ch] [bp-84h]@3
  char v54; // [sp+4Dh] [bp-83h]@3
  char v55; // [sp+50h] [bp-80h]@3
  char v56; // [sp+51h] [bp-7Fh]@3
  char v57; // [sp+54h] [bp-7Ch]@3
  char v58; // [sp+55h] [bp-7Bh]@3
  char v59; // [sp+58h] [bp-78h]@3
  char v60; // [sp+59h] [bp-77h]@3
  char v61; // [sp+5Ch] [bp-74h]@3
  char v62; // [sp+5Dh] [bp-73h]@3
  char v63; // [sp+60h] [bp-70h]@3
  char v64; // [sp+61h] [bp-6Fh]@3
  char v65; // [sp+64h] [bp-6Ch]@2
  char v66; // [sp+65h] [bp-6Bh]@2
  char v67; // [sp+68h] [bp-68h]@2
  char v68; // [sp+69h] [bp-67h]@2
  char v69; // [sp+6Ch] [bp-64h]@1
  char v70; // [sp+6Dh] [bp-63h]@1
  char v71; // [sp+70h] [bp-60h]@1
  char v72; // [sp+71h] [bp-5Fh]@1
  char v73; // [sp+74h] [bp-5Ch]@1
  char v74; // [sp+75h] [bp-5Bh]@1
  char v75; // [sp+78h] [bp-58h]@1
  char v76; // [sp+79h] [bp-57h]@1
  char v77; // [sp+7Ch] [bp-54h]@1
  char v78; // [sp+7Dh] [bp-53h]@1
  char v79; // [sp+80h] [bp-50h]@1
  char v80; // [sp+81h] [bp-4Fh]@1
  char v81; // [sp+84h] [bp-4Ch]@1
  char v82; // [sp+85h] [bp-4Bh]@1
  char v83; // [sp+88h] [bp-48h]@1
  char v84; // [sp+89h] [bp-47h]@1
  char v85; // [sp+8Ch] [bp-44h]@1
  char v86; // [sp+8Dh] [bp-43h]@1
  char v87; // [sp+90h] [bp-40h]@1
  char v88; // [sp+91h] [bp-3Fh]@1
  char v89; // [sp+94h] [bp-3Ch]@1
  char v90; // [sp+95h] [bp-3Bh]@1
  char v91; // [sp+98h] [bp-38h]@1
  char v92; // [sp+99h] [bp-37h]@1
  char v93; // [sp+9Ch] [bp-34h]@1
  char v94; // [sp+9Dh] [bp-33h]@1
  char v95; // [sp+A0h] [bp-30h]@1
  char v96; // [sp+A1h] [bp-2Fh]@1
  char v97; // [sp+A4h] [bp-2Ch]@1
  char v98; // [sp+A5h] [bp-2Bh]@1
  char v99; // [sp+A8h] [bp-28h]@1
  char v100; // [sp+A9h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v99 = *(_BYTE *)(Block::mNetherBrick + 4);
  v100 = 0;
  v97 = *(_BYTE *)(Block::mNetherBrick + 4);
  v98 = 0;
  v7(this, a2, a4, 0, 3, 0, 4, 4);
  v8 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v95 = BlockID::AIR;
  v93 = BlockID::AIR;
  v96 = 0;
  v94 = 0;
  v8(v4, v5, v6, 1);
  v9 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v91 = *(_BYTE *)(Block::mNetherBrick + 4);
  v92 = 0;
  v89 = *(_BYTE *)(Block::mNetherBrick + 4);
  v90 = 0;
  v9(v4, v5, v6, 0);
  v10 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v87 = *(_BYTE *)(Block::mNetherBrick + 4);
  v88 = 0;
  v85 = *(_BYTE *)(Block::mNetherBrick + 4);
  v86 = 0;
  v10(v4, v5, v6, 4);
  v11 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v83 = *(_BYTE *)(Block::mNetherBrick + 4);
  v84 = 0;
  v81 = *(_BYTE *)(Block::mNetherBrick + 4);
  v82 = 0;
  v11(v4, v5, v6, 0);
  v12 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v79 = *(_BYTE *)(Block::mNetherBrick + 4);
  v80 = 0;
  v77 = *(_BYTE *)(Block::mNetherBrick + 4);
  v78 = 0;
  v12(v4, v5, v6, 0);
  v13 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v75 = *(_BYTE *)(Block::mNetherBrick + 4);
  v76 = 0;
  v73 = *(_BYTE *)(Block::mNetherBrick + 4);
  v74 = 0;
  v13(v4, v5, v6, 0);
  v14 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v71 = *(_BYTE *)(Block::mNetherBrick + 4);
  v72 = 0;
  v69 = *(_BYTE *)(Block::mNetherBrick + 4);
  v70 = 0;
  v14(v4, v5, v6, 0);
  v15 = 0;
  do
  {
    v16 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v67 = *(_BYTE *)(Block::mNetherBrick + 4);
    v68 = 0;
    v16(v4, v5, &v67, v15);
    v17 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v65 = *(_BYTE *)(Block::mNetherBrick + 4);
    v66 = 0;
    v17(v4, v5, &v65, v15);
    v18 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v18(v4, v5, &v67, v15);
    v19 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v19(v4, v5, &v65, v15);
    v20 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v20(v4, v5, &v67, v15);
    v21 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v21(v4, v5, &v65, v15++);
  }
  while ( v15 != 5 );
  v22 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v63 = *(_BYTE *)(Block::mNetherFence + 4);
  v64 = 0;
  v61 = *(_BYTE *)(Block::mNetherFence + 4);
  v62 = 0;
  v22(v4, v5, v6, 0);
  v23 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v59 = *(_BYTE *)(Block::mNetherFence + 4);
  v60 = 0;
  v57 = *(_BYTE *)(Block::mNetherFence + 4);
  v58 = 0;
  v23(v4, v5, v6, 0);
  v24 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v55 = *(_BYTE *)(Block::mNetherFence + 4);
  v56 = 0;
  v53 = *(_BYTE *)(Block::mNetherFence + 4);
  v54 = 0;
  v24(v4, v5, v6, 0);
  v25 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v51 = *(_BYTE *)(Block::mNetherFence + 4);
  v52 = 0;
  v49 = *(_BYTE *)(Block::mNetherFence + 4);
  v50 = 0;
  v25(v4, v5, v6, 0);
  v26 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v47 = *(_BYTE *)(Block::mNetherFence + 4);
  v48 = 0;
  v45 = *(_BYTE *)(Block::mNetherFence + 4);
  v46 = 0;
  v26(v4, v5, v6, 4);
  v27 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v43 = *(_BYTE *)(Block::mNetherFence + 4);
  v44 = 0;
  v41 = *(_BYTE *)(Block::mNetherFence + 4);
  v42 = 0;
  v27(v4, v5, v6, 4);
  v28 = *(void (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v39 = *(_BYTE *)(Block::mNetherFence + 4);
  v40 = 0;
  v37 = *(_BYTE *)(Block::mNetherFence + 4);
  v38 = 0;
  v28(v4, v5, v6, 4);
  v29 = *(int (__fastcall **)(NBBridgeStraight *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v35 = *(_BYTE *)(Block::mNetherFence + 4);
  v36 = 0;
  v33 = *(_BYTE *)(Block::mNetherFence + 4);
  v34 = 0;
  v30 = (NetherFortressPiece *)v29(v4, v5, v6, 4);
  return j_NetherFortressPiece::postProcess(v30, v5, v31, v6);
}


signed int __fastcall NBBridgeStraight::getType(NBBridgeStraight *this)
{
  return 1312969556;
}
