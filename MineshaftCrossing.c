

signed int __fastcall MineshaftCrossing::getType(MineshaftCrossing *this)
{
  return 1297302354;
}


int __fastcall MineshaftCrossing::findCrossing(int a1, int a2, Random *this, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r6@1
  __int64 *v9; // r8@1
  int v10; // r0@4
  int result; // r0@11
  int v12; // [sp+0h] [bp-30h]@1
  int v13; // [sp+4h] [bp-2Ch]@1
  int v14; // [sp+8h] [bp-28h]@1
  int v15; // [sp+Ch] [bp-24h]@1
  int v16; // [sp+10h] [bp-20h]@1
  int v17; // [sp+14h] [bp-1Ch]@1

  v7 = a1;
  v8 = a4;
  v9 = (__int64 *)a2;
  v12 = a4;
  v13 = a5;
  v14 = a6;
  v15 = a4;
  v16 = a5 + 2;
  v17 = a6;
  if ( !(j_Random::_genRandInt32(this) & 3) )
    v16 = a5 + 6;
  switch ( a7 )
  {
    case 0:
      v12 = v8 - 1;
      v15 = v8 + 3;
      v10 = a6 + 4;
      goto LABEL_9;
    case 1:
      v12 = v8 - 4;
      goto LABEL_8;
    case 2:
      v14 = a6 - 4;
      break;
    case 3:
      v15 = v8 + 4;
LABEL_8:
      v14 = a6 - 1;
      v10 = a6 + 3;
LABEL_9:
      v17 = v10;
    default:
  }
  if ( j_StructurePiece::findCollisionPiece(v9, (int)&v12) )
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = 0;
    result = -2147483647;
    *(_DWORD *)v7 = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 4) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 8) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 12) = -2147483647;
    *(_DWORD *)(v7 + 16) = -2147483647;
  else
    *(_DWORD *)(v7 + 12) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)v7 = v12;
    *(_DWORD *)(v7 + 4) = v13;
    *(_DWORD *)(v7 + 8) = v14;
    *(_DWORD *)(v7 + 12) = v15;
    *(_DWORD *)(v7 + 16) = v16;
    result = v17;
  *(_DWORD *)(v7 + 20) = result;
  return result;
}


int __fastcall MineshaftCrossing::_placeSupportPillar(MineshaftCrossing *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6, int a7)
{
  MineshaftCrossing *v7; // r7@1
  BlockSource *v8; // r6@1
  const BoundingBox *v9; // r5@1
  int v10; // r4@1
  int result; // r0@1
  int (__fastcall *v12)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int); // r12@2
  char v13; // [sp+20h] [bp-28h]@2
  char v14; // [sp+21h] [bp-27h]@2
  char v15; // [sp+24h] [bp-24h]@2
  char v16; // [sp+25h] [bp-23h]@2
  unsigned __int8 v17; // [sp+28h] [bp-20h]@1

  v7 = this;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  j_StructurePiece::getBlock((StructurePiece *)&v17, this, (int)a2, a4, a7 + 1, (const BoundingBox *)a6, (int)a3);
  result = v17;
  if ( v17 )
  {
    v12 = *(int (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v7 + 40);
    v15 = *((_BYTE *)v7 + 36);
    v16 = *((_BYTE *)v7 + 37);
    v13 = BlockID::AIR;
    v14 = 0;
    result = v12(v7, v8, v9, v10);
  }
  return result;
}


signed int __fastcall MineshaftCrossing::postProcess(MineshaftCrossing *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r9@1
  BlockSource *v5; // r11@1
  MineshaftCrossing *v6; // r6@1
  signed int result; // r0@2
  __int64 v8; // kr00_8@3
  void (__fastcall *v9)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int); // r12@3
  int v10; // r3@3
  int v11; // r2@3
  int v12; // r7@4
  int v13; // r0@4
  __int64 v14; // kr08_8@4
  void (__fastcall *v15)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r7@4
  int v16; // r4@4
  __int64 v17; // kr10_8@4
  int v18; // r2@4
  void (__fastcall *v19)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int); // r12@4
  int v20; // r4@4
  __int64 v21; // kr18_8@4
  int v22; // r2@4
  void (__fastcall *v23)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r12@4
  int v24; // r4@4
  __int64 v25; // kr20_8@4
  int v26; // r3@4
  void (__fastcall *v27)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int); // r7@4
  int v28; // r0@4
  __int64 v29; // kr28_8@5
  int v30; // r3@5
  int v31; // r4@5
  int v32; // r1@5
  void (__fastcall *v33)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int); // r10@5
  int v34; // r4@6
  void (__fastcall *v35)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int); // r12@7
  int v36; // r4@8
  void (__fastcall *v37)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int); // r12@9
  __int64 v38; // kr30_8@10
  void (__fastcall *v39)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r12@11
  int v40; // r8@12
  __int64 v41; // kr38_8@12
  void (__fastcall *v42)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD); // r12@13
  int v43; // r7@14
  int v44; // r1@14
  int v45; // r0@15
  int v46; // r2@16
  int v47; // r4@17
  void (__fastcall *v48)(MineshaftCrossing *, BlockSource *, char *, int); // r5@19
  BlockSource *v49; // ST00_4@19
  bool v50; // nf@22
  unsigned __int8 v51; // vf@22
  char v52; // [sp+24h] [bp-6Ch]@19
  char v53; // [sp+25h] [bp-6Bh]@19
  char v54; // [sp+28h] [bp-68h]@5
  char v55; // [sp+29h] [bp-67h]@5
  char v56; // [sp+2Ch] [bp-64h]@5
  char v57; // [sp+2Dh] [bp-63h]@5
  char v58; // [sp+30h] [bp-60h]@5
  char v59; // [sp+31h] [bp-5Fh]@5
  char v60; // [sp+34h] [bp-5Ch]@5
  char v61; // [sp+35h] [bp-5Bh]@5
  char v62; // [sp+38h] [bp-58h]@4
  char v63; // [sp+39h] [bp-57h]@4
  char v64; // [sp+3Ch] [bp-54h]@4
  char v65; // [sp+3Dh] [bp-53h]@4
  char v66; // [sp+40h] [bp-50h]@4
  char v67; // [sp+41h] [bp-4Fh]@4
  char v68; // [sp+44h] [bp-4Ch]@4
  char v69; // [sp+45h] [bp-4Bh]@4
  char v70; // [sp+48h] [bp-48h]@4
  char v71; // [sp+49h] [bp-47h]@4
  char v72; // [sp+4Ch] [bp-44h]@4
  char v73; // [sp+4Dh] [bp-43h]@4
  char v74; // [sp+50h] [bp-40h]@4
  char v75; // [sp+51h] [bp-3Fh]@4
  char v76; // [sp+54h] [bp-3Ch]@4
  char v77; // [sp+55h] [bp-3Bh]@4
  char v78; // [sp+58h] [bp-38h]@4
  char v79; // [sp+59h] [bp-37h]@4
  char v80; // [sp+5Ch] [bp-34h]@4
  char v81; // [sp+5Dh] [bp-33h]@4
  char v82; // [sp+60h] [bp-30h]@7
  char v83; // [sp+61h] [bp-2Fh]@7
  char v84; // [sp+64h] [bp-2Ch]@7
  char v85; // [sp+65h] [bp-2Bh]@7
  char v86; // [sp+68h] [bp-28h]@6

  v4 = a4;
  v5 = a2;
  v6 = this;
  if ( j_StructurePiece::edgesLiquid(this, a2, a4) )
  {
    result = 0;
  }
  else
    v8 = *((_QWORD *)v6 + 1);
    v9 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int))(*(_QWORD *)v6 + 40);
    v10 = (*(_QWORD *)v6 >> 32) + 1;
    v11 = *((_DWORD *)v6 + 4) - 1;
    if ( *((_BYTE *)v6 + 48) )
    {
      v12 = *((_DWORD *)v6 + 6);
      v80 = BlockID::AIR;
      v78 = BlockID::AIR;
      v81 = 0;
      v79 = 0;
      v9(v6, v5, v4, v10);
      v13 = *((_DWORD *)v6 + 2);
      v14 = *(_QWORD *)v6;
      v15 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_QWORD *)v6 + 40);
      v16 = *((_DWORD *)v6 + 6) - 1;
      v76 = BlockID::AIR;
      v74 = BlockID::AIR;
      v77 = 0;
      v75 = 0;
      v15(v6, v5, v4, HIDWORD(v14));
      v17 = *(_QWORD *)v6;
      v18 = *((_DWORD *)v6 + 3);
      v19 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int))(*(_QWORD *)v6 + 40);
      v20 = *((_DWORD *)v6 + 6);
      v72 = BlockID::AIR;
      v70 = BlockID::AIR;
      v73 = 0;
      v71 = 0;
      v19(v6, v5, v4, HIDWORD(v17) + 1);
      v21 = *(_QWORD *)v6;
      v22 = *((_DWORD *)v6 + 4);
      v23 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_QWORD *)v6 + 40);
      v24 = *((_DWORD *)v6 + 6) - 1;
      v68 = BlockID::AIR;
      v66 = BlockID::AIR;
      v69 = 0;
      v67 = 0;
      v23(v6, v5, v4, HIDWORD(v21));
      v25 = *(_QWORD *)v6;
      v26 = *((_DWORD *)v6 + 4) - 1;
      v27 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int))(*(_QWORD *)v6 + 40);
      v28 = *((_DWORD *)v6 + 6) - 1;
      v64 = BlockID::AIR;
      v62 = BlockID::AIR;
      v65 = 0;
      v63 = 0;
      v27(v6, v5, v4, HIDWORD(v25) + 1);
    }
    else
      v29 = *(_QWORD *)((char *)v6 + 20);
      v60 = BlockID::AIR;
      v58 = BlockID::AIR;
      v61 = 0;
      v59 = 0;
      v30 = *((_DWORD *)v6 + 1);
      v31 = *((_DWORD *)v6 + 4);
      v32 = *((_DWORD *)v6 + 6);
      v33 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
      v56 = BlockID::AIR;
      v54 = BlockID::AIR;
      v57 = 0;
      v55 = 0;
      v33(v6, v5, v4, v30);
    v34 = *(_QWORD *)((char *)v6 + 4) + 1;
    j_StructurePiece::getBlock(
      (StructurePiece *)&v86,
      v6,
      (int)v5,
      v34,
      *((_DWORD *)v6 + 5) + 1,
      (const BoundingBox *)(*((_DWORD *)v6 + 3) + 1),
      (int)v4);
    if ( v86 )
      v35 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
      v84 = *((_BYTE *)v6 + 36);
      v85 = *((_BYTE *)v6 + 37);
      v82 = BlockID::AIR;
      v83 = 0;
      v35(v6, v5, v4, v34);
    v36 = *(_QWORD *)((char *)v6 + 4) + 1;
      v36,
      *(_QWORD *)((char *)v6 + 20) + 1,
      (const BoundingBox *)((*(_QWORD *)((char *)v6 + 20) >> 32) - 1),
      v37 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
      v37(v6, v5, v4, v36);
    v38 = *((_QWORD *)v6 + 2);
      v38 - 1,
      HIDWORD(v38) + 1,
      (const BoundingBox *)((*((_QWORD *)v6 + 1) >> 32) + 1),
      v39 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
      v39(v6, v5, v4, v38 - 1);
    v40 = *((_DWORD *)v6 + 2);
    v41 = *((_QWORD *)v6 + 2);
      v41 - 1,
      HIDWORD(v41) + 1,
      (const BoundingBox *)(*((_DWORD *)v6 + 6) - 1),
      v42 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
      v42(v6, v5, v4, v41 - 1);
    v43 = *((_DWORD *)v6 + 1);
    v44 = *((_DWORD *)v6 + 4);
    if ( v43 <= v44 )
      v45 = *((_DWORD *)v6 + 6);
      do
      {
        v46 = *((_DWORD *)v6 + 3);
        if ( v46 <= v45 )
        {
          do
          {
            v47 = v46;
            if ( j_StructurePiece::isAir(v6, v5, v43, *((_DWORD *)v6 + 2) - 1, v46, v4) == 1
              && !j_StructurePiece::isAboveGround(v6, v43, *((_DWORD *)v6 + 2) - 1, v47, v5) )
            {
              v48 = *(void (__fastcall **)(MineshaftCrossing *, BlockSource *, char *, int))(*(_DWORD *)v6 + 36);
              v52 = *((_BYTE *)v6 + 36);
              v53 = *((_BYTE *)v6 + 37);
              v49 = (BlockSource *)(*((_DWORD *)v6 + 2) - 1);
              v48(v6, v5, &v52, v43);
            }
            v45 = *((_DWORD *)v6 + 6);
            v46 = v47 + 1;
          }
          while ( v47 < v45 );
          v44 = *((_DWORD *)v6 + 4);
        }
        v51 = __OFSUB__(v43, v44);
        v50 = v43++ - v44 < 0;
      }
      while ( v50 ^ v51 );
    result = 1;
  return result;
}


unsigned int __fastcall MineshaftCrossing::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  Random *v5; // r4@1
  int v6; // r8@1
  int v7; // r5@1
  int v8; // r6@1
  unsigned int result; // r0@8

  v4 = a1;
  v5 = (Random *)a4;
  v6 = a3;
  v7 = *(_DWORD *)(a1 + 32);
  v8 = a2;
  switch ( *(_DWORD *)(a1 + 44) )
  {
    case 0:
      j_MineshaftPiece::generateAndAddPiece(
        a1,
        a2,
        a3,
        a4,
        *(_QWORD *)(a1 + 4) + 1,
        *(_QWORD *)(a1 + 4) >> 32,
        *(_DWORD *)(a1 + 24) + 1,
        0,
        v7);
      goto LABEL_5;
    case 1:
        *(_DWORD *)(a1 + 4) + 1,
        *(_DWORD *)(a1 + 8),
        *(_DWORD *)(a1 + 12) - 1,
        2,
        v4,
        v8,
        v6,
        (int)v5,
        *(_QWORD *)(v4 + 4) + 1,
        *(_QWORD *)(v4 + 4) >> 32,
        *(_DWORD *)(v4 + 24) + 1,
        *(_DWORD *)(v4 + 4) - 1,
        *(_DWORD *)(v4 + 8),
        *(_DWORD *)(v4 + 12) + 1,
        1,
      break;
    case 2:
LABEL_5:
      goto LABEL_7;
    case 3:
LABEL_7:
        *(_DWORD *)(v4 + 16) + 1,
        3,
    default:
  }
  result = *(_BYTE *)(v4 + 48);
  if ( *(_BYTE *)(v4 + 48) )
    if ( j_Random::_genRandInt32(v5) & 0x8000000 )
        *(_DWORD *)(v4 + 4) + 1,
        *(_DWORD *)(v4 + 8) + 4,
        *(_DWORD *)(v4 + 12) - 1,
    result = j_Random::_genRandInt32(v5);
    if ( result & 0x8000000 )
      result = j_MineshaftPiece::generateAndAddPiece(
                 v4,
                 v8,
                 v6,
                 (int)v5,
                 *(_QWORD *)(v4 + 4) + 1,
                 (*(_QWORD *)(v4 + 4) >> 32) + 4,
                 *(_DWORD *)(v4 + 24) + 1,
                 0,
                 v7);
  return result;
}


int __fastcall MineshaftCrossing::MineshaftCrossing(int result, int a2, int a3, int a4, int a5, int a6)
{
  char v6; // r12@1

  v6 = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = a3;
  *(_BYTE *)(result + 36) = *(_BYTE *)a2;
  *(_BYTE *)(result + 37) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(result + 38) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(result + 39) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)result = &off_2723874;
  *(_DWORD *)(result + 44) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  if ( *(_DWORD *)(a5 + 16) + 1 - *(_DWORD *)(a5 + 4) > 3 )
    v6 = 1;
  *(_BYTE *)(result + 48) = v6;
  return result;
}


int __fastcall MineshaftCrossing::MineshaftCrossing(int result, int a2)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = *(_BYTE *)a2;
  *(_BYTE *)(result + 37) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(result + 38) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(result + 39) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)result = &off_2723874;
  return result;
}
