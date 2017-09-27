

_DWORD *__fastcall NBCastleSmallCorridorPiece::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -1, 0, 0, 5, 7, 5, a7);
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
    *result = &off_2723C68;
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


signed int __fastcall NBCastleSmallCorridorPiece::postProcess(NBCastleSmallCorridorPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBCastleSmallCorridorPiece *v4; // r6@1
  BlockSource *v5; // r10@1
  const BoundingBox *v6; // r9@1
  void (__cdecl *v7)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int); // r7@1
  void (__fastcall *v8)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v9)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v10)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v11)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v12)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v13)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v14)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v15)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  int v16; // r4@1
  void (__fastcall *v17)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v18)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v19)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v20)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int); // r5@2
  int (__fastcall *v21)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int); // r5@2
  NetherFortressPiece *v22; // r0@2
  Random *v23; // r2@2
  char v25; // [sp+28h] [bp-70h]@2
  char v26; // [sp+29h] [bp-6Fh]@2
  char v27; // [sp+2Ch] [bp-6Ch]@1
  char v28; // [sp+2Dh] [bp-6Bh]@1
  char v29; // [sp+30h] [bp-68h]@1
  char v30; // [sp+31h] [bp-67h]@1
  char v31; // [sp+34h] [bp-64h]@1
  char v32; // [sp+35h] [bp-63h]@1
  char v33; // [sp+38h] [bp-60h]@1
  char v34; // [sp+39h] [bp-5Fh]@1
  char v35; // [sp+3Ch] [bp-5Ch]@1
  char v36; // [sp+3Dh] [bp-5Bh]@1
  char v37; // [sp+40h] [bp-58h]@1
  char v38; // [sp+41h] [bp-57h]@1
  char v39; // [sp+44h] [bp-54h]@1
  char v40; // [sp+45h] [bp-53h]@1
  char v41; // [sp+48h] [bp-50h]@1
  char v42; // [sp+49h] [bp-4Fh]@1
  char v43; // [sp+4Ch] [bp-4Ch]@1
  char v44; // [sp+4Dh] [bp-4Bh]@1
  char v45; // [sp+50h] [bp-48h]@1
  char v46; // [sp+51h] [bp-47h]@1
  char v47; // [sp+54h] [bp-44h]@1
  char v48; // [sp+55h] [bp-43h]@1
  char v49; // [sp+58h] [bp-40h]@1
  char v50; // [sp+59h] [bp-3Fh]@1
  char v51; // [sp+5Ch] [bp-3Ch]@1
  char v52; // [sp+5Dh] [bp-3Bh]@1
  char v53; // [sp+60h] [bp-38h]@1
  char v54; // [sp+61h] [bp-37h]@1
  char v55; // [sp+64h] [bp-34h]@1
  char v56; // [sp+65h] [bp-33h]@1
  char v57; // [sp+68h] [bp-30h]@1
  char v58; // [sp+69h] [bp-2Fh]@1
  char v59; // [sp+6Ch] [bp-2Ch]@1
  char v60; // [sp+6Dh] [bp-2Bh]@1
  char v61; // [sp+70h] [bp-28h]@1
  char v62; // [sp+71h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v61 = *(_BYTE *)(Block::mNetherBrick + 4);
  v62 = 0;
  v59 = *(_BYTE *)(Block::mNetherBrick + 4);
  v60 = 0;
  v7(this, a2, a4, 0, 0, 0, 4, 1);
  v8 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v57 = BlockID::AIR;
  v55 = BlockID::AIR;
  v58 = 0;
  v56 = 0;
  v8(v4, v5, v6, 0);
  v9 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v53 = *(_BYTE *)(Block::mNetherBrick + 4);
  v54 = 0;
  v51 = *(_BYTE *)(Block::mNetherBrick + 4);
  v52 = 0;
  v9(v4, v5, v6, 0);
  v10 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v49 = *(_BYTE *)(Block::mNetherBrick + 4);
  v50 = 0;
  v47 = *(_BYTE *)(Block::mNetherBrick + 4);
  v48 = 0;
  v10(v4, v5, v6, 4);
  v11 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v45 = *(_BYTE *)(Block::mNetherFence + 4);
  v46 = 0;
  v43 = *(_BYTE *)(Block::mNetherFence + 4);
  v44 = 0;
  v11(v4, v5, v6, 0);
  v12 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v41 = *(_BYTE *)(Block::mNetherFence + 4);
  v42 = 0;
  v39 = *(_BYTE *)(Block::mNetherFence + 4);
  v40 = 0;
  v12(v4, v5, v6, 0);
  v13 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v37 = *(_BYTE *)(Block::mNetherFence + 4);
  v38 = 0;
  v35 = *(_BYTE *)(Block::mNetherFence + 4);
  v36 = 0;
  v13(v4, v5, v6, 4);
  v14 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v33 = *(_BYTE *)(Block::mNetherFence + 4);
  v34 = 0;
  v31 = *(_BYTE *)(Block::mNetherFence + 4);
  v32 = 0;
  v14(v4, v5, v6, 4);
  v15 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v29 = *(_BYTE *)(Block::mNetherBrick + 4);
  v30 = 0;
  v27 = *(_BYTE *)(Block::mNetherBrick + 4);
  v28 = 0;
  v15(v4, v5, v6, 0);
  v16 = 0;
  do
  {
    v17 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v25 = *(_BYTE *)(Block::mNetherBrick + 4);
    v26 = 0;
    v17(v4, v5, &v25, v16);
    v18 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v18(v4, v5, &v25, v16);
    v19 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v19(v4, v5, &v25, v16);
    v20 = *(void (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v20(v4, v5, &v25, v16);
    v21 = *(int (__fastcall **)(NBCastleSmallCorridorPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v22 = (NetherFortressPiece *)v21(v4, v5, &v25, v16++);
  }
  while ( v16 != 5 );
  return j_NetherFortressPiece::postProcess(v22, v5, v23, v6);
}


int __fastcall NBCastleSmallCorridorPiece::NBCastleSmallCorridorPiece(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723C68;
  return result;
}


signed int __fastcall NBCastleSmallCorridorPiece::getType(NBCastleSmallCorridorPiece *this)
{
  return 1313035075;
}


int __fastcall NBCastleSmallCorridorPiece::NBCastleSmallCorridorPiece(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723C68;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}
