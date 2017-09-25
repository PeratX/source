

int __fastcall NBCastleSmallCorridorLeftTurnPiece::NBCastleSmallCorridorLeftTurnPiece(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723D40;
  return result;
}


signed int __fastcall NBCastleSmallCorridorLeftTurnPiece::getType(NBCastleSmallCorridorLeftTurnPiece *this)
{
  return 1313033300;
}


int __fastcall NBCastleSmallCorridorLeftTurnPiece::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  _DWORD *v10; // r10@1
  int result; // r0@1
  _DWORD *v12; // r0@4
  _DWORD *v13; // r6@4
  char v14; // r5@4
  int v15; // r0@4
  int v16; // [sp+20h] [bp-38h]@1
  int v17; // [sp+24h] [bp-34h]@1
  int v18; // [sp+28h] [bp-30h]@4
  int v19; // [sp+2Ch] [bp-2Ch]@4
  int v20; // [sp+30h] [bp-28h]@4
  int v21; // [sp+34h] [bp-24h]@4

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v16, a4, a5, a6, -1, 0, 0, 5, 7, 5, a7);
  result = v17;
  if ( v17 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v16)) != 0 )
  {
    *v10 = 0;
  }
  else
    v12 = j_operator new(0x28u);
    v13 = v12;
    v14 = 0;
    v12[3] = 0;
    v12[4] = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[8] = a8;
    *v12 = &off_2723D40;
    v15 = v16;
    v13[7] = a7;
    v13[1] = v15;
    v13[2] = v17;
    v13[3] = v18;
    v13[4] = v19;
    v13[5] = v20;
    v13[6] = v21;
    result = j_Random::_genRandInt32(v8) % 3;
    if ( !result )
      v14 = 1;
    *v10 = v13;
    *((_BYTE *)v13 + 36) = v14;
  return result;
}


int __fastcall NBCastleSmallCorridorLeftTurnPiece::NBCastleSmallCorridorLeftTurnPiece(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  char v6; // r5@1
  int result; // r0@3

  v5 = a1;
  v6 = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)a1 = &off_2723D40;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a4;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a4 + 20);
  if ( !(j_Random::_genRandInt32(this) % 3) )
    v6 = 1;
  result = v5;
  *(_BYTE *)(v5 + 36) = v6;
  return result;
}


signed int __fastcall NBCastleSmallCorridorLeftTurnPiece::postProcess(NBCastleSmallCorridorLeftTurnPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBCastleSmallCorridorLeftTurnPiece *v4; // r6@1
  BlockSource *v5; // r9@1
  const BoundingBox *v6; // r10@1
  void (__cdecl *v7)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int, signed int); // r7@1
  void (__fastcall *v8)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v9)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v10)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v11)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v12)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  void (__fastcall *v13)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD); // r5@1
  void (__fastcall *v14)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v15)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int); // r5@1
  int v16; // r7@2
  int v17; // r5@2
  int v18; // r0@2
  void (__fastcall *v19)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *); // r5@8
  void *v20; // r0@8
  void (__fastcall *v21)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@9
  int v22; // r5@9
  void (__fastcall *v23)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int); // r4@10
  void (__fastcall *v24)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int); // r4@10
  void (__fastcall *v25)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int); // r4@10
  void (__fastcall *v26)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int); // r4@10
  int (__fastcall *v27)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int); // r4@10
  NetherFortressPiece *v28; // r0@10
  Random *v29; // r2@10
  unsigned int *v31; // r2@12
  signed int v32; // r1@14
  char v33; // [sp+2Ch] [bp-84h]@10
  char v34; // [sp+2Dh] [bp-83h]@10
  char v35; // [sp+30h] [bp-80h]@9
  char v36; // [sp+31h] [bp-7Fh]@9
  char v37; // [sp+34h] [bp-7Ch]@9
  char v38; // [sp+35h] [bp-7Bh]@9
  int v39; // [sp+3Ch] [bp-74h]@8
  char v40; // [sp+40h] [bp-70h]@1
  char v41; // [sp+41h] [bp-6Fh]@1
  char v42; // [sp+44h] [bp-6Ch]@1
  char v43; // [sp+45h] [bp-6Bh]@1
  char v44; // [sp+48h] [bp-68h]@1
  char v45; // [sp+49h] [bp-67h]@1
  char v46; // [sp+4Ch] [bp-64h]@1
  char v47; // [sp+4Dh] [bp-63h]@1
  char v48; // [sp+50h] [bp-60h]@1
  char v49; // [sp+51h] [bp-5Fh]@1
  char v50; // [sp+54h] [bp-5Ch]@1
  char v51; // [sp+55h] [bp-5Bh]@1
  char v52; // [sp+58h] [bp-58h]@1
  char v53; // [sp+59h] [bp-57h]@1
  char v54; // [sp+5Ch] [bp-54h]@1
  char v55; // [sp+5Dh] [bp-53h]@1
  char v56; // [sp+60h] [bp-50h]@1
  char v57; // [sp+61h] [bp-4Fh]@1
  char v58; // [sp+64h] [bp-4Ch]@1
  char v59; // [sp+65h] [bp-4Bh]@1
  char v60; // [sp+68h] [bp-48h]@1
  char v61; // [sp+69h] [bp-47h]@1
  char v62; // [sp+6Ch] [bp-44h]@1
  char v63; // [sp+6Dh] [bp-43h]@1
  char v64; // [sp+70h] [bp-40h]@1
  char v65; // [sp+71h] [bp-3Fh]@1
  char v66; // [sp+74h] [bp-3Ch]@1
  char v67; // [sp+75h] [bp-3Bh]@1
  char v68; // [sp+78h] [bp-38h]@1
  char v69; // [sp+79h] [bp-37h]@1
  char v70; // [sp+7Ch] [bp-34h]@1
  char v71; // [sp+7Dh] [bp-33h]@1
  char v72; // [sp+80h] [bp-30h]@1
  char v73; // [sp+81h] [bp-2Fh]@1
  char v74; // [sp+84h] [bp-2Ch]@1
  char v75; // [sp+85h] [bp-2Bh]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD, _DWORD, _DWORD, signed int, signed int, signed int))(*(_DWORD *)this + 40);
  v74 = *(_BYTE *)(Block::mNetherBrick + 4);
  v75 = 0;
  v72 = *(_BYTE *)(Block::mNetherBrick + 4);
  v73 = 0;
  v7(this, a2, a4, 0, 0, 0, 4, 1, 4);
  v8 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v70 = BlockID::AIR;
  v68 = BlockID::AIR;
  v71 = 0;
  v69 = 0;
  v8(v4, v5, v6, 0);
  v9 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v66 = *(_BYTE *)(Block::mNetherBrick + 4);
  v67 = 0;
  v64 = *(_BYTE *)(Block::mNetherBrick + 4);
  v65 = 0;
  v9(v4, v5, v6, 4);
  v10 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v62 = *(_BYTE *)(Block::mNetherFence + 4);
  v63 = 0;
  v60 = *(_BYTE *)(Block::mNetherFence + 4);
  v61 = 0;
  v10(v4, v5, v6, 4);
  v11 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v58 = *(_BYTE *)(Block::mNetherFence + 4);
  v59 = 0;
  v56 = *(_BYTE *)(Block::mNetherFence + 4);
  v57 = 0;
  v11(v4, v5, v6, 4);
  v12 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v54 = *(_BYTE *)(Block::mNetherBrick + 4);
  v55 = 0;
  v52 = *(_BYTE *)(Block::mNetherBrick + 4);
  v53 = 0;
  v12(v4, v5, v6, 0);
  v13 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v50 = *(_BYTE *)(Block::mNetherBrick + 4);
  v51 = 0;
  v48 = *(_BYTE *)(Block::mNetherBrick + 4);
  v49 = 0;
  v13(v4, v5, v6, 0);
  v14 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v46 = *(_BYTE *)(Block::mNetherFence + 4);
  v47 = 0;
  v44 = *(_BYTE *)(Block::mNetherBrick + 4);
  v45 = 0;
  v14(v4, v5, v6, 1);
  v15 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v42 = *(_BYTE *)(Block::mNetherFence + 4);
  v43 = 0;
  v40 = *(_BYTE *)(Block::mNetherBrick + 4);
  v41 = 0;
  v15(v4, v5, v6, 3);
  if ( *((_BYTE *)v4 + 36) )
  {
    v16 = (*(int (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, signed int, signed int))(*(_DWORD *)v4 + 28))(
            v4,
            3,
            3);
    v17 = j_StructurePiece::getWorldY(v4, 2);
    v18 = (*(int (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, signed int, signed int))(*(_DWORD *)v4 + 32))(
    if ( v16 >= *(_DWORD *)v6
      && v16 <= *((_DWORD *)v6 + 3)
      && v18 >= *((_DWORD *)v6 + 2)
      && v18 <= *((_DWORD *)v6 + 5)
      && v17 >= *((_DWORD *)v6 + 1)
      && v17 <= *((_DWORD *)v6 + 4) )
    {
      *((_BYTE *)v4 + 36) = 0;
      v19 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v4 + 48);
      sub_21E94B4((void **)&v39, "loot_tables/chests/nether_bridge.json");
      v19(v4, v5, v6);
      v20 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
      {
        v31 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        }
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      }
    }
  }
  v21 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v37 = *(_BYTE *)(Block::mNetherBrick + 4);
  v38 = 0;
  v35 = *(_BYTE *)(Block::mNetherBrick + 4);
  v36 = 0;
  v21(v4, v5, v6, 0);
  v22 = 0;
  do
    v23 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v33 = *(_BYTE *)(Block::mNetherBrick + 4);
    v34 = 0;
    v23(v4, v5, &v33, v22);
    v24 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v24(v4, v5, &v33, v22);
    v25 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v25(v4, v5, &v33, v22);
    v26 = *(void (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v26(v4, v5, &v33, v22);
    v27 = *(int (__fastcall **)(NBCastleSmallCorridorLeftTurnPiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
    v28 = (NetherFortressPiece *)v27(v4, v5, &v33, v22++);
  while ( v22 != 5 );
  return j_NetherFortressPiece::postProcess(v28, v5, v29, v6);
}
