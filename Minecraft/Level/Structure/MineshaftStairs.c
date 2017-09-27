

signed int __fastcall MineshaftStairs::postProcess(MineshaftStairs *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r4@1
  BlockSource *v5; // r5@1
  MineshaftStairs *v6; // r6@1
  signed int v7; // r7@1
  void (__fastcall *v8)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  void (__fastcall *v9)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  void (__fastcall *v10)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  void (__fastcall *v11)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  void (__fastcall *v12)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  void (__fastcall *v13)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  void (__fastcall *v14)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD); // r12@2
  char v16; // [sp+24h] [bp-3Ch]@2
  char v17; // [sp+25h] [bp-3Bh]@2
  char v18; // [sp+28h] [bp-38h]@2
  char v19; // [sp+29h] [bp-37h]@2
  char v20; // [sp+2Ch] [bp-34h]@2
  char v21; // [sp+2Dh] [bp-33h]@2
  char v22; // [sp+30h] [bp-30h]@2
  char v23; // [sp+31h] [bp-2Fh]@2
  char v24; // [sp+34h] [bp-2Ch]@2
  char v25; // [sp+35h] [bp-2Bh]@2
  char v26; // [sp+38h] [bp-28h]@2
  char v27; // [sp+39h] [bp-27h]@2

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = 0;
  if ( !j_StructurePiece::edgesLiquid(this, a2, a4) )
  {
    v8 = *(void (__fastcall **)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
    v26 = BlockID::AIR;
    v24 = BlockID::AIR;
    v27 = 0;
    v25 = 0;
    v8(v6, v5, v4, 0);
    v9 = *(void (__fastcall **)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
    v22 = BlockID::AIR;
    v20 = BlockID::AIR;
    v23 = 0;
    v21 = 0;
    v9(v6, v5, v4, 0);
    v10 = *(void (__fastcall **)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
    v18 = BlockID::AIR;
    v16 = BlockID::AIR;
    v19 = 0;
    v17 = 0;
    v10(v6, v5, v4, 0);
    v11 = *(void (__fastcall **)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
    v11(v6, v5, v4, 0);
    v12 = *(void (__fastcall **)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
    v12(v6, v5, v4, 0);
    v13 = *(void (__fastcall **)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
    v13(v6, v5, v4, 0);
    v14 = *(void (__fastcall **)(MineshaftStairs *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v6 + 40);
    v14(v6, v5, v4, 0);
    v7 = 1;
  }
  return v7;
}


int __fastcall MineshaftStairs::MineshaftStairs(int result, int a2, int a3, int a4, int a5, int a6)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a3;
  *(_BYTE *)(result + 36) = *(_BYTE *)a2;
  *(_BYTE *)(result + 37) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(result + 38) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(result + 39) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)result = &off_27238BC;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  return result;
}


int __fastcall MineshaftStairs::addChildren(int result, int a2, int a3, int a4)
{
  int v4; // r12@1
  int v5; // lr@2
  int v6; // r4@2
  _BYTE v7[12]; // [sp+0h] [bp-28h]@2

  v4 = *(_DWORD *)(result + 32);
  switch ( *(_DWORD *)(result + 28) )
  {
    case 0:
      v5 = 0;
      *(_QWORD *)v7 = *(_QWORD *)(result + 4);
      v6 = *(_DWORD *)(result + 24) + 1;
      goto LABEL_4;
    case 1:
      v5 = 1;
      v6 = *(_DWORD *)(result + 12);
      *(_DWORD *)v7 = *(_QWORD *)(result + 4) - 1;
      *(_DWORD *)&v7[4] = *(_QWORD *)(result + 4) >> 32;
LABEL_4:
      *(_DWORD *)&v7[8] = v6;
      goto LABEL_7;
    case 2:
      result = j_MineshaftPiece::generateAndAddPiece(
                 result,
                 a2,
                 a3,
                 a4,
                 *(_QWORD *)(result + 4),
                 *(_QWORD *)(result + 4) >> 32,
                 *(_DWORD *)(result + 12) - 1,
                 2,
                 v4);
      break;
    case 3:
      v5 = 3;
      *(_DWORD *)v7 = *(_DWORD *)(result + 16) + 1;
      *(_QWORD *)&v7[4] = *(_QWORD *)(result + 8);
LABEL_7:
                 *(int *)v7,
                 *(int *)&v7[4],
                 *(int *)&v7[8],
                 v5,
    default:
      return result;
  }
  return result;
}


signed int __fastcall MineshaftStairs::findStairs(int a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r0@2
  signed int result; // r0@9
  int v10; // [sp+0h] [bp-20h]@1
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1
  int v14; // [sp+10h] [bp-10h]@1
  int v15; // [sp+14h] [bp-Ch]@1

  v7 = a1;
  v10 = a4;
  v11 = a5 - 5;
  v12 = a6;
  v13 = a4;
  v14 = a5 + 2;
  v15 = a6;
  switch ( a7 )
  {
    case 0:
      v13 = a4 + 2;
      v8 = a6 + 8;
      goto LABEL_7;
    case 1:
      v10 = a4 - 8;
      goto LABEL_6;
    case 2:
      v12 = a6 - 8;
      break;
    case 3:
      v13 = a4 + 8;
LABEL_6:
      v8 = a6 + 2;
LABEL_7:
      v15 = v8;
    default:
  }
  if ( j_StructurePiece::findCollisionPiece(a2, (int)&v10) )
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
    *(_DWORD *)v7 = v10;
    *(_DWORD *)(v7 + 4) = v11;
    *(_DWORD *)(v7 + 8) = v12;
    *(_DWORD *)(v7 + 12) = v13;
    *(_DWORD *)(v7 + 16) = v14;
    result = v15;
  *(_DWORD *)(v7 + 20) = result;
  return result;
}


signed int __fastcall MineshaftStairs::getType(MineshaftStairs *this)
{
  return 1297306452;
}


int __fastcall MineshaftStairs::MineshaftStairs(int result, int a2)
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
  *(_DWORD *)result = &off_27238BC;
  return result;
}
