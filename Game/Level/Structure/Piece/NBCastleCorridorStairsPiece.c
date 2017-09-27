

int __fastcall NBCastleCorridorStairsPiece::NBCastleCorridorStairsPiece(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723D88;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}


int __fastcall NBCastleCorridorStairsPiece::NBCastleCorridorStairsPiece(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723D88;
  return result;
}


signed int __fastcall NBCastleCorridorStairsPiece::postProcess(NBCastleCorridorStairsPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBCastleCorridorStairsPiece *v4; // r10@1
  BlockSource *v5; // r7@1
  const BoundingBox *v6; // r11@1
  char v7; // r6@1
  int v8; // r3@1
  signed int v9; // r9@1
  _DWORD *v10; // r8@1
  int v11; // r0@2
  int v12; // r4@2
  int v13; // r1@2
  signed int v14; // r5@2
  void (__fastcall *v15)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  void (__fastcall *v16)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, signed int); // r12@4
  char v17; // r0@4
  int v18; // r0@4
  _DWORD *v19; // r4@4
  int v20; // r8@4
  const BoundingBox *v21; // r5@8
  _DWORD *v22; // r6@9
  char v23; // r11@9
  void (__fastcall *v24)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int); // r12@9
  void (__fastcall *v25)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int); // r12@9
  int v26; // r0@9
  void (__fastcall *v27)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int); // r12@9
  _DWORD *v28; // r11@10
  int v29; // r1@10
  void (__fastcall *v30)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD); // r4@10
  void (__fastcall *v31)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD); // r12@10
  int v32; // r0@10
  int v33; // r4@10
  void (__fastcall *v34)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, signed int); // r12@10
  int v35; // r0@10
  _DWORD *v36; // r8@11
  int v37; // r1@11
  void (__fastcall *v38)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD); // r12@11
  int v39; // r11@11
  void (__fastcall *v40)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, signed int); // r12@11
  int v41; // r0@11
  void (__fastcall *v42)(NBCastleCorridorStairsPiece *, BlockSource *, char *, _DWORD); // r12@12
  void (__fastcall *v43)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int); // r12@12
  void (__fastcall *v44)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int); // r12@12
  void (__fastcall *v45)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int); // r12@12
  void (__fastcall *v46)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int); // r12@12
  const BoundingBox *v48; // [sp+8h] [bp-A8h]@4
  int v49; // [sp+Ch] [bp-A4h]@4
  int v50; // [sp+10h] [bp-A0h]@4
  char *v51; // [sp+14h] [bp-9Ch]@4
  char *v52; // [sp+18h] [bp-98h]@4
  int v53; // [sp+1Ch] [bp-94h]@4
  _DWORD *v54; // [sp+28h] [bp-88h]@1
  int v55; // [sp+2Ch] [bp-84h]@1
  _DWORD *v56; // [sp+30h] [bp-80h]@1
  _DWORD *v57; // [sp+34h] [bp-7Ch]@1
  char *v58; // [sp+38h] [bp-78h]@1
  int v59; // [sp+3Ch] [bp-74h]@4
  int v60; // [sp+40h] [bp-70h]@8
  int v61; // [sp+44h] [bp-6Ch]@2
  int v62; // [sp+48h] [bp-68h]@8
  char v63; // [sp+4Ch] [bp-64h]@12
  char v64; // [sp+4Dh] [bp-63h]@12
  char v65; // [sp+50h] [bp-60h]@11
  char v66; // [sp+51h] [bp-5Fh]@11
  char v67; // [sp+54h] [bp-5Ch]@11
  char v68; // [sp+55h] [bp-5Bh]@11
  char v69; // [sp+58h] [bp-58h]@11
  char v70; // [sp+59h] [bp-57h]@11
  char v71; // [sp+5Ch] [bp-54h]@11
  char v72; // [sp+5Dh] [bp-53h]@11
  char v73; // [sp+60h] [bp-50h]@10
  char v74; // [sp+61h] [bp-4Fh]@10
  char v75; // [sp+64h] [bp-4Ch]@10
  char v76; // [sp+65h] [bp-4Bh]@10
  char v77; // [sp+68h] [bp-48h]@10
  char v78; // [sp+69h] [bp-47h]@10
  char v79; // [sp+6Ch] [bp-44h]@10
  char v80; // [sp+6Dh] [bp-43h]@10
  char v81; // [sp+70h] [bp-40h]@10
  char v82; // [sp+71h] [bp-3Fh]@10
  char v83; // [sp+74h] [bp-3Ch]@10
  char v84; // [sp+75h] [bp-3Bh]@10
  char v85; // [sp+78h] [bp-38h]@4
  char v86; // [sp+79h] [bp-37h]@4
  char v87; // [sp+7Ch] [bp-34h]@4
  char v88; // [sp+7Dh] [bp-33h]@4
  char v89; // [sp+80h] [bp-30h]@2
  char v90; // [sp+81h] [bp-2Fh]@2
  char v91; // [sp+84h] [bp-2Ch]@2
  char v92; // [sp+85h] [bp-2Bh]@2
  char v93; // [sp+88h] [bp-28h]@9
  char v94; // [sp+89h] [bp-27h]@9

  v4 = this;
  v5 = a2;
  v6 = a4;
  v56 = &Block::mNetherBrickStairs;
  v55 = j_StructurePiece::getOrientationData(this, (const Block *)Block::mNetherBrickStairs, 2);
  v7 = 0;
  v8 = 7;
  v9 = 0;
  v10 = &Block::mNetherBrick;
  v57 = &Block::mNetherBrick;
  v58 = (char *)&BlockID::AIR;
  v54 = &Block::mNetherFence;
  do
  {
    v11 = *(_DWORD *)v4;
    v12 = v8;
    v13 = *v10;
    v14 = 1;
    v61 = v8;
    v15 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD))(v11 + 40);
    v91 = *(_BYTE *)(v13 + 4);
    v92 = v7;
    v89 = *(_BYTE *)(v13 + 4);
    v90 = v7;
    if ( v8 > 1 )
      v14 = v8;
    v59 = v14;
    v48 = (const BoundingBox *)4;
    v49 = v14;
    v50 = v9;
    v51 = &v91;
    v52 = &v89;
    v53 = 0;
    v15(v4, v5, v6, 0);
    v16 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v17 = *v58;
    v87 = v17;
    v85 = v17;
    v18 = v12 + 7;
    v19 = v10;
    v20 = v14 + 5;
    v88 = 0;
    v86 = 0;
    if ( v14 + 5 < v18 )
      v20 = v18;
    if ( v20 > 13 )
      v20 = 13;
    v62 = v14 + 1;
    v60 = v20 - 1;
    v48 = (const BoundingBox *)3;
    v49 = v20 - 1;
    v51 = &v87;
    v52 = &v85;
    v21 = v6;
    v16(v4, v5, v6, 1);
    if ( v9 <= 6 )
    {
      v22 = v56;
      v23 = v55;
      v24 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v93 = *(_BYTE *)(*v56 + 4);
      v94 = v55;
      v48 = v21;
      v24(v4, v5, &v93, 1);
      v25 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v93 = *(_BYTE *)(*v22 + 4);
      v94 = v23;
      v25(v4, v5, &v93, 2);
      v26 = *v22;
      v7 = 0;
      v27 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v93 = *(_BYTE *)(v26 + 4);
      v27(v4, v5, &v93, 3);
      v19 = v57;
    }
    v28 = v19;
    v29 = *v19;
    v30 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v83 = *(_BYTE *)(v29 + 4);
    v84 = 0;
    v81 = *(_BYTE *)(v29 + 4);
    v82 = 0;
    v49 = v20;
    v51 = &v83;
    v52 = &v81;
    v30(v4, v5, v21, 0);
    v31 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v32 = *v28;
    v79 = *(_BYTE *)(*v28 + 4);
    v80 = 0;
    v77 = *(_BYTE *)(v32 + 4);
    v78 = 0;
    v33 = v60;
    v48 = 0;
    v49 = v60;
    v51 = &v79;
    v52 = &v77;
    v31(v4, v5, v21, 0);
    v34 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v35 = *v28;
    v75 = *(_BYTE *)(*v28 + 4);
    v76 = 0;
    v73 = *(_BYTE *)(v35 + 4);
    v74 = 0;
    v49 = v33;
    v51 = &v75;
    v52 = &v73;
    v34(v4, v5, v21, 4);
    v10 = v28;
    if ( !(v9 & 1) )
      v36 = v54;
      v37 = *v54;
      v38 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v71 = *(_BYTE *)(*v54 + 4);
      v72 = 0;
      v69 = *(_BYTE *)(v37 + 4);
      v70 = 0;
      v39 = v59 + 3;
      v48 = 0;
      v49 = v59 + 3;
      v50 = v9;
      v51 = &v71;
      v52 = &v69;
      v53 = 0;
      v38(v4, v5, v21, 0);
      v40 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v41 = *v36;
      v67 = *(_BYTE *)(*v36 + 4);
      v68 = 0;
      v65 = *(_BYTE *)(v41 + 4);
      v66 = 0;
      v48 = (const BoundingBox *)4;
      v49 = v39;
      v51 = &v67;
      v10 = v57;
      v52 = &v65;
      v40(v4, v5, v21, 4);
    v42 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 44);
    v63 = *(_BYTE *)(*v10 + 4);
    v64 = v7;
    v48 = v21;
    v42(v4, v5, &v63, 0);
    v43 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
    v43(v4, v5, &v63, 1);
    v44 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
    v44(v4, v5, &v63, 2);
    v45 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
    v45(v4, v5, &v63, 3);
    v46 = *(void (__fastcall **)(NBCastleCorridorStairsPiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 44);
    v6 = v21;
    v46(v4, v5, &v63, 4);
    ++v9;
    v8 = v61 - 1;
  }
  while ( v61 != -2 );
  return j_NetherFortressPiece::postProcess((NetherFortressPiece *)0xFFFFFFFD, v5, (Random *)4, v21);
}


_DWORD *__fastcall NBCastleCorridorStairsPiece::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -1, -7, 0, 5, 14, 10, a7);
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
    *result = &off_2723D88;
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


signed int __fastcall NBCastleCorridorStairsPiece::getType(NBCastleCorridorStairsPiece *this)
{
  return 1313035092;
}
