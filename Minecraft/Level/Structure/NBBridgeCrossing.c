

signed int __fastcall NBBridgeCrossing::getType(NBBridgeCrossing *this)
{
  return 1312965458;
}


int __fastcall NBBridgeCrossing::NBBridgeCrossing(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_27239E0;
  return result;
}


int __fastcall NBBridgeCrossing::NBBridgeCrossing(int a1, Random *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int result; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)a1 = &off_27239E0;
  *(_DWORD *)(a1 + 28) = j_Random::_genRandInt32(a2) & 3;
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = 64;
  result = v4;
  *(_DWORD *)(v4 + 12) = v5;
  *(_DWORD *)(v4 + 16) = v6 + 18;
  *(_DWORD *)(v4 + 20) = 73;
  *(_DWORD *)(v4 + 24) = v5 + 18;
  return result;
}


int __fastcall NBBridgeCrossing::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_NetherFortressPiece::generateChildForward(a1, a2, a3, a4, 8, 3, 0);
  j_NetherFortressPiece::generateChildLeft(v7, v6, v5, v4, 3, 8, 0);
  return j_NetherFortressPiece::generateChildRight(v7, v6, v5, v4, 3, 8, 0);
}


_DWORD *__fastcall NBBridgeCrossing::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -8, -3, 0, 19, 10, 19, a7);
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
    *result = &off_27239E0;
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


signed int __fastcall NBBridgeCrossing::postProcess(NBBridgeCrossing *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBBridgeCrossing *v4; // r8@1
  BlockSource *v5; // r7@1
  const BoundingBox *v6; // r10@1
  void (__cdecl *v7)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int, signed int, _DWORD, signed int, signed int); // r5@1
  void (__fastcall *v8)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  void (__fastcall *v9)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v10)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  void (__fastcall *v11)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v12)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v13)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v14)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v15)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  void (__fastcall *v16)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v17)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  signed int v18; // r11@1
  void (__fastcall *v19)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v20)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v21)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v22)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r5@1
  const BoundingBox *v23; // r5@1
  void (__fastcall *v24)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r12@1
  NBBridgeCrossing *v25; // r4@1
  NBBridgeCrossing *v26; // r10@2
  void (__fastcall *v27)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v28)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v29)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v30)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v31)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v32)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r12@2
  void (__fastcall *v33)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r12@3
  void (__fastcall *v34)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r12@3
  void (__fastcall *v35)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r12@3
  void (__fastcall *v36)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int); // r12@3
  const BoundingBox *v37; // r11@3
  int v38; // r4@3
  void (__fastcall *v39)(NBBridgeCrossing *, BlockSource *, char *, int); // r5@4
  void (__fastcall *v40)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r6@4
  void (__fastcall *v41)(NBBridgeCrossing *, BlockSource *, char *, int); // r6@4
  void (__fastcall *v42)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r6@4
  void (__fastcall *v43)(NBBridgeCrossing *, BlockSource *, char *, int); // r6@4
  void (__fastcall *v44)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r6@4
  void (__fastcall *v45)(NBBridgeCrossing *, BlockSource *, char *, int); // r6@4
  void (__fastcall *v46)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r6@4
  void (__fastcall *v47)(NBBridgeCrossing *, BlockSource *, char *, int); // r6@4
  int (__fastcall *v48)(NBBridgeCrossing *, BlockSource *, char *, signed int); // r12@4
  NetherFortressPiece *v49; // r0@4
  Random *v50; // r2@4
  signed int v52; // [sp+28h] [bp-D8h]@3
  char v53; // [sp+2Ch] [bp-D4h]@4
  char v54; // [sp+2Dh] [bp-D3h]@4
  char v55; // [sp+30h] [bp-D0h]@4
  char v56; // [sp+31h] [bp-CFh]@4
  char v57; // [sp+34h] [bp-CCh]@3
  char v58; // [sp+35h] [bp-CBh]@3
  char v59; // [sp+38h] [bp-C8h]@3
  char v60; // [sp+39h] [bp-C7h]@3
  char v61; // [sp+3Ch] [bp-C4h]@3
  char v62; // [sp+3Dh] [bp-C3h]@3
  char v63; // [sp+40h] [bp-C0h]@3
  char v64; // [sp+41h] [bp-BFh]@3
  char v65; // [sp+44h] [bp-BCh]@3
  char v66; // [sp+45h] [bp-BBh]@3
  char v67; // [sp+48h] [bp-B8h]@3
  char v68; // [sp+49h] [bp-B7h]@3
  char v69; // [sp+4Ch] [bp-B4h]@3
  char v70; // [sp+4Dh] [bp-B3h]@3
  char v71; // [sp+50h] [bp-B0h]@3
  char v72; // [sp+51h] [bp-AFh]@3
  char v73; // [sp+54h] [bp-ACh]@2
  char v74; // [sp+55h] [bp-ABh]@2
  char v75; // [sp+58h] [bp-A8h]@2
  char v76; // [sp+59h] [bp-A7h]@2
  char v77; // [sp+5Ch] [bp-A4h]@1
  char v78; // [sp+5Dh] [bp-A3h]@1
  char v79; // [sp+60h] [bp-A0h]@1
  char v80; // [sp+61h] [bp-9Fh]@1
  char v81; // [sp+64h] [bp-9Ch]@1
  char v82; // [sp+65h] [bp-9Bh]@1
  char v83; // [sp+68h] [bp-98h]@1
  char v84; // [sp+69h] [bp-97h]@1
  char v85; // [sp+6Ch] [bp-94h]@1
  char v86; // [sp+6Dh] [bp-93h]@1
  char v87; // [sp+70h] [bp-90h]@1
  char v88; // [sp+71h] [bp-8Fh]@1
  char v89; // [sp+74h] [bp-8Ch]@1
  char v90; // [sp+75h] [bp-8Bh]@1
  char v91; // [sp+78h] [bp-88h]@1
  char v92; // [sp+79h] [bp-87h]@1
  char v93; // [sp+7Ch] [bp-84h]@1
  char v94; // [sp+7Dh] [bp-83h]@1
  char v95; // [sp+80h] [bp-80h]@1
  char v96; // [sp+81h] [bp-7Fh]@1
  char v97; // [sp+84h] [bp-7Ch]@1
  char v98; // [sp+85h] [bp-7Bh]@1
  char v99; // [sp+88h] [bp-78h]@1
  char v100; // [sp+89h] [bp-77h]@1
  char v101; // [sp+8Ch] [bp-74h]@1
  char v102; // [sp+8Dh] [bp-73h]@1
  char v103; // [sp+90h] [bp-70h]@1
  char v104; // [sp+91h] [bp-6Fh]@1
  char v105; // [sp+94h] [bp-6Ch]@1
  char v106; // [sp+95h] [bp-6Bh]@1
  char v107; // [sp+98h] [bp-68h]@1
  char v108; // [sp+99h] [bp-67h]@1
  char v109; // [sp+9Ch] [bp-64h]@1
  char v110; // [sp+9Dh] [bp-63h]@1
  char v111; // [sp+A0h] [bp-60h]@1
  char v112; // [sp+A1h] [bp-5Fh]@1
  char v113; // [sp+A4h] [bp-5Ch]@1
  char v114; // [sp+A5h] [bp-5Bh]@1
  char v115; // [sp+A8h] [bp-58h]@1
  char v116; // [sp+A9h] [bp-57h]@1
  char v117; // [sp+ACh] [bp-54h]@1
  char v118; // [sp+ADh] [bp-53h]@1
  char v119; // [sp+B0h] [bp-50h]@1
  char v120; // [sp+B1h] [bp-4Fh]@1
  char v121; // [sp+B4h] [bp-4Ch]@1
  char v122; // [sp+B5h] [bp-4Bh]@1
  char v123; // [sp+B8h] [bp-48h]@1
  char v124; // [sp+B9h] [bp-47h]@1
  char v125; // [sp+BCh] [bp-44h]@1
  char v126; // [sp+BDh] [bp-43h]@1
  char v127; // [sp+C0h] [bp-40h]@1
  char v128; // [sp+C1h] [bp-3Fh]@1
  char v129; // [sp+C4h] [bp-3Ch]@1
  char v130; // [sp+C5h] [bp-3Bh]@1
  char v131; // [sp+C8h] [bp-38h]@1
  char v132; // [sp+C9h] [bp-37h]@1
  char v133; // [sp+CCh] [bp-34h]@1
  char v134; // [sp+CDh] [bp-33h]@1
  char v135; // [sp+D0h] [bp-30h]@1
  char v136; // [sp+D1h] [bp-2Fh]@1
  char v137; // [sp+D4h] [bp-2Ch]@1
  char v138; // [sp+D5h] [bp-2Bh]@1
  char v139; // [sp+D8h] [bp-28h]@1
  char v140; // [sp+D9h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int, signed int, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v139 = *(_BYTE *)(Block::mNetherBrick + 4);
  v140 = 0;
  v137 = *(_BYTE *)(Block::mNetherBrick + 4);
  v138 = 0;
  v7(this, a2, a4, 7, 3, 0, 11, 4);
  v8 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v135 = *(_BYTE *)(Block::mNetherBrick + 4);
  v136 = 0;
  v133 = *(_BYTE *)(Block::mNetherBrick + 4);
  v134 = 0;
  v8(v4, v5, v6, 0);
  v9 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v131 = BlockID::AIR;
  v129 = BlockID::AIR;
  v132 = 0;
  v130 = 0;
  v9(v4, v5, v6, 8);
  v10 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v127 = BlockID::AIR;
  v125 = BlockID::AIR;
  v128 = 0;
  v126 = 0;
  v10(v4, v5, v6, 0);
  v11 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v123 = *(_BYTE *)(Block::mNetherBrick + 4);
  v124 = 0;
  v121 = *(_BYTE *)(Block::mNetherBrick + 4);
  v122 = 0;
  v11(v4, v5, v6, 7);
  v12 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v119 = *(_BYTE *)(Block::mNetherBrick + 4);
  v120 = 0;
  v117 = *(_BYTE *)(Block::mNetherBrick + 4);
  v118 = 0;
  v12(v4, v5, v6, 7);
  v13 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v115 = *(_BYTE *)(Block::mNetherBrick + 4);
  v116 = 0;
  v113 = *(_BYTE *)(Block::mNetherBrick + 4);
  v114 = 0;
  v13(v4, v5, v6, 11);
  v14 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v111 = *(_BYTE *)(Block::mNetherBrick + 4);
  v112 = 0;
  v109 = *(_BYTE *)(Block::mNetherBrick + 4);
  v110 = 0;
  v14(v4, v5, v6, 11);
  v15 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v107 = *(_BYTE *)(Block::mNetherBrick + 4);
  v108 = 0;
  v105 = *(_BYTE *)(Block::mNetherBrick + 4);
  v106 = 0;
  v15(v4, v5, v6, 0);
  v16 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v103 = *(_BYTE *)(Block::mNetherBrick + 4);
  v104 = 0;
  v101 = *(_BYTE *)(Block::mNetherBrick + 4);
  v102 = 0;
  v16(v4, v5, v6, 11);
  v17 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v99 = *(_BYTE *)(Block::mNetherBrick + 4);
  v100 = 0;
  v97 = *(_BYTE *)(Block::mNetherBrick + 4);
  v98 = 0;
  v18 = 7;
  v17(v4, v5, v6, 0);
  v19 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v95 = *(_BYTE *)(Block::mNetherBrick + 4);
  v96 = 0;
  v93 = *(_BYTE *)(Block::mNetherBrick + 4);
  v94 = 0;
  v19(v4, v5, v6, 11);
  v20 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v91 = *(_BYTE *)(Block::mNetherBrick + 4);
  v92 = 0;
  v89 = *(_BYTE *)(Block::mNetherBrick + 4);
  v90 = 0;
  v20(v4, v5, v6, 7);
  v21 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v87 = *(_BYTE *)(Block::mNetherBrick + 4);
  v88 = 0;
  v85 = *(_BYTE *)(Block::mNetherBrick + 4);
  v86 = 0;
  v21(v4, v5, v6, 7);
  v22 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v83 = *(_BYTE *)(Block::mNetherBrick + 4);
  v84 = 0;
  v81 = *(_BYTE *)(Block::mNetherBrick + 4);
  v82 = 0;
  v22(v4, v5, v6, 7);
  v23 = v6;
  v24 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v79 = *(_BYTE *)(Block::mNetherBrick + 4);
  v80 = 0;
  v77 = *(_BYTE *)(Block::mNetherBrick + 4);
  v78 = 0;
  v25 = v4;
  v24(v4, v5, v6, 7);
  do
  {
    v26 = v25;
    v27 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v25 + 44);
    v75 = *(_BYTE *)(Block::mNetherBrick + 4);
    v76 = 0;
    v27(v26, v5, &v75, v18);
    v28 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v73 = *(_BYTE *)(Block::mNetherBrick + 4);
    v74 = 0;
    v28(v26, v5, &v73, v18);
    v29 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v29(v26, v5, &v75, v18);
    v30 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v30(v26, v5, &v73, v18);
    v31 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v31(v26, v5, &v75, v18);
    v25 = v26;
    v32 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v32(v26, v5, &v73, v18++);
  }
  while ( v18 != 12 );
  v33 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v26 + 40);
  v71 = *(_BYTE *)(Block::mNetherBrick + 4);
  v72 = 0;
  v69 = *(_BYTE *)(Block::mNetherBrick + 4);
  v70 = 0;
  v33(v26, v5, v23, 0);
  v34 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v26 + 40);
  v67 = *(_BYTE *)(Block::mNetherBrick + 4);
  v68 = 0;
  v65 = *(_BYTE *)(Block::mNetherBrick + 4);
  v66 = 0;
  v34(v26, v5, v23, 13);
  v35 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v26 + 40);
  v63 = *(_BYTE *)(Block::mNetherBrick + 4);
  v64 = 0;
  v61 = *(_BYTE *)(Block::mNetherBrick + 4);
  v62 = 0;
  v35(v26, v5, v23, 0);
  v36 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v26 + 40);
  v59 = *(_BYTE *)(Block::mNetherBrick + 4);
  v60 = 0;
  v57 = *(_BYTE *)(Block::mNetherBrick + 4);
  v58 = 0;
  v37 = v23;
  v52 = 18;
  v36(v26, v5, v23, 15);
  v38 = 0;
    v39 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, int))(*(_DWORD *)v26 + 44);
    v55 = *(_BYTE *)(Block::mNetherBrick + 4);
    v56 = 0;
    v39(v26, v5, &v55, v38);
    v40 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v53 = *(_BYTE *)(Block::mNetherBrick + 4);
    v54 = 0;
    v40(v26, v5, &v53, v52);
    v41 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, int))(*(_DWORD *)v26 + 44);
    v41(v26, v5, &v55, v38);
    v42 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v42(v26, v5, &v53, v52);
    v43 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, int))(*(_DWORD *)v26 + 44);
    v43(v26, v5, &v55, v38);
    v44 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v44(v26, v5, &v53, v52);
    v45 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, int))(*(_DWORD *)v26 + 44);
    v45(v26, v5, &v55, v38);
    v46 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v46(v26, v5, &v53, v52);
    v47 = *(void (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, int))(*(_DWORD *)v26 + 44);
    v47(v26, v5, &v55, v38);
    v48 = *(int (__fastcall **)(NBBridgeCrossing *, BlockSource *, char *, signed int))(*(_DWORD *)v26 + 44);
    v49 = (NetherFortressPiece *)v48(v26, v5, &v53, v52);
    ++v38;
    --v52;
  while ( v38 != 3 );
  return j_NetherFortressPiece::postProcess(v49, v5, v50, v37);
}


int __fastcall NBBridgeCrossing::NBBridgeCrossing(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_27239E0;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}
