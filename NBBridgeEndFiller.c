

int __fastcall NBBridgeEndFiller::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  _DWORD *v10; // r10@1
  int result; // r0@1
  _DWORD *v12; // r0@4
  _DWORD *v13; // r6@4
  int v14; // r0@4
  int v15; // [sp+1Ch] [bp-3Ch]@1
  int v16; // [sp+20h] [bp-38h]@1
  int v17; // [sp+24h] [bp-34h]@4
  int v18; // [sp+28h] [bp-30h]@4
  int v19; // [sp+2Ch] [bp-2Ch]@4
  int v20; // [sp+30h] [bp-28h]@4

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v15, a4, a5, a6, -1, -3, 0, 5, 10, 8, a7);
  result = v16;
  if ( v16 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v15)) != 0 )
  {
    *v10 = 0;
  }
  else
    v12 = j_operator new(0x28u);
    v13 = v12;
    v12[3] = 0;
    v12[4] = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[8] = a8;
    *v12 = &off_2723AB8;
    v14 = v15;
    v13[7] = a7;
    v13[1] = v14;
    v13[2] = v16;
    v13[3] = v17;
    v13[4] = v18;
    v13[5] = v19;
    v13[6] = v20;
    result = j_Random::_genRandInt32(v8) >> 1;
    *v10 = v13;
    v13[9] = result;
  return result;
}


signed int __fastcall NBBridgeEndFiller::getType(NBBridgeEndFiller *this)
{
  return 1312965958;
}


int __fastcall NBBridgeEndFiller::NBBridgeEndFiller(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723AB8;
  return result;
}


int __fastcall NBBridgeEndFiller::NBBridgeEndFiller(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1

  v5 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)a1 = &off_2723AB8;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a4;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a4 + 20);
  *(_DWORD *)(a1 + 36) = j_Random::_genRandInt32(this) >> 1;
  return v5;
}


signed int __fastcall NBBridgeEndFiller::postProcess(NBBridgeEndFiller *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  unsigned int v4; // r0@1
  int v5; // r5@1
  const BoundingBox *v6; // r8@1
  BlockSource *v7; // r9@1
  signed int v8; // r2@1
  int v9; // r0@2
  int *v10; // r7@2
  int v11; // r4@2
  int v12; // r4@3
  char v13; // r0@4
  void (__fastcall *v14)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int); // r12@4
  char v15; // r0@4
  void (__fastcall *v16)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int); // r12@4
  char v17; // r0@5
  NBBridgeEndFiller *v18; // r5@5
  void (__fastcall *v19)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, _DWORD); // r12@5
  char v20; // r0@5
  void (__fastcall *v21)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int); // r12@5
  void (__fastcall *v22)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, _DWORD); // r12@5
  void (__fastcall *v23)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int); // r12@5
  void (__fastcall *v24)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int); // r7@5
  void (__fastcall *v25)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int); // r7@5
  void (__fastcall *v26)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int); // r7@5
  int v27; // r7@5
  void (__fastcall *v28)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int); // r12@6
  int (__cdecl *v29)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int, signed int, _DWORD, int, signed int); // r12@6
  NetherFortressPiece *v30; // r0@6
  Random *v31; // r2@6
  NBBridgeEndFiller *v33; // [sp+2Ch] [bp-A24h]@1
  char v34; // [sp+30h] [bp-A20h]@6
  char v35; // [sp+31h] [bp-A1Fh]@6
  char v36; // [sp+34h] [bp-A1Ch]@6
  char v37; // [sp+35h] [bp-A1Bh]@6
  char v38; // [sp+38h] [bp-A18h]@5
  char v39; // [sp+39h] [bp-A17h]@5
  char v40; // [sp+3Ch] [bp-A14h]@5
  char v41; // [sp+3Dh] [bp-A13h]@5
  char v42; // [sp+40h] [bp-A10h]@5
  char v43; // [sp+41h] [bp-A0Fh]@5
  char v44; // [sp+44h] [bp-A0Ch]@5
  char v45; // [sp+45h] [bp-A0Bh]@5
  char v46; // [sp+48h] [bp-A08h]@5
  char v47; // [sp+49h] [bp-A07h]@5
  char v48; // [sp+4Ch] [bp-A04h]@5
  char v49; // [sp+4Dh] [bp-A03h]@5
  char v50; // [sp+50h] [bp-A00h]@4
  char v51; // [sp+51h] [bp-9FFh]@4
  char v52; // [sp+54h] [bp-9FCh]@4
  char v53; // [sp+55h] [bp-9FBh]@4
  unsigned int v54; // [sp+58h] [bp-9F8h]@1
  unsigned int v55; // [sp+5Ch] [bp-9F4h]@1
  int v56; // [sp+A1Ch] [bp-34h]@1
  char v57; // [sp+A20h] [bp-30h]@1
  int v58; // [sp+A24h] [bp-2Ch]@1
  int v59; // [sp+A28h] [bp-28h]@3

  v33 = this;
  v4 = *((_DWORD *)this + 9);
  v54 = v4;
  v56 = 625;
  v5 = 0;
  v6 = a4;
  v7 = a2;
  v8 = 1;
  v57 = 0;
  v58 = 0;
  v55 = v4;
  do
  {
    v9 = v4 ^ (v4 >> 30);
    v10 = (int *)(&v54 + v5);
    v11 = v5++ + 1812433253 * v9;
    v4 = v8++ + 1812433253 * v9;
    v10[2] = v11 + 1;
  }
  while ( v5 != 397 );
  v56 = 624;
  v59 = 398;
  v12 = 0;
    v13 = j_Random::_genRandInt32((Random *)&v54);
    v14 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v33 + 40);
    v52 = *(_BYTE *)(Block::mNetherBrick + 4);
    v53 = 0;
    v50 = *(_BYTE *)(Block::mNetherBrick + 4);
    v51 = 0;
    v14(v33, v7, v6, v12);
    v15 = j_Random::_genRandInt32((Random *)&v54);
    v16 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v33 + 40);
    v16(v33, v7, v6, v12++);
  while ( v12 != 5 );
  v17 = j_Random::_genRandInt32((Random *)&v54);
  v18 = v33;
  v19 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v33 + 40);
  v48 = *(_BYTE *)(Block::mNetherBrick + 4);
  v49 = 0;
  v46 = *(_BYTE *)(Block::mNetherBrick + 4);
  v47 = 0;
  v19(v33, v7, v6, 0);
  v20 = j_Random::_genRandInt32((Random *)&v54);
  v21 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v33 + 40);
  v44 = *(_BYTE *)(Block::mNetherBrick + 4);
  v45 = 0;
  v42 = *(_BYTE *)(Block::mNetherBrick + 4);
  v43 = 0;
  v21(v33, v7, v6, 4);
  j_Random::_genRandInt32((Random *)&v54);
  v22 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v33 + 40);
  v40 = *(_BYTE *)(Block::mNetherBrick + 4);
  v41 = 0;
  v38 = *(_BYTE *)(Block::mNetherBrick + 4);
  v39 = 0;
  v22(v33, v7, v6, 0);
  v23 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v33 + 40);
  v23(v33, v7, v6, 1);
  v24 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v33 + 40);
  v24(v33, v7, v6, 2);
  v25 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v33 + 40);
  v25(v33, v7, v6, 3);
  v26 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v33 + 40);
  v26(v33, v7, v6, 4);
  v27 = 0;
    j_Random::_genRandInt32((Random *)&v54);
    v28 = *(void (__fastcall **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v18 + 40);
    v36 = *(_BYTE *)(Block::mNetherBrick + 4);
    v37 = 0;
    v34 = *(_BYTE *)(Block::mNetherBrick + 4);
    v35 = 0;
    v28(v33, v7, v6, v27);
    v29 = *(int (__cdecl **)(NBBridgeEndFiller *, BlockSource *, const BoundingBox *, int, signed int, _DWORD, int, signed int))(*(_DWORD *)v33 + 40);
    v18 = v33;
    v30 = (NetherFortressPiece *)v29(v33, v7, v6, v27, 1, 0, v27, 1);
    ++v27;
  while ( v27 != 5 );
  return j_NetherFortressPiece::postProcess(v30, v7, v31, v6);
}
