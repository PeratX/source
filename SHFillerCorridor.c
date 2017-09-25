

signed int __fastcall SHFillerCorridor::postProcess(SHFillerCorridor *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHFillerCorridor *v4; // r6@1
  BlockSource *v5; // r9@1
  int v6; // r5@2
  void (__fastcall *v7)(SHFillerCorridor *, BlockSource *, char *, _DWORD); // r12@3
  BlockSource *v8; // r4@3
  signed int v9; // r9@3
  void (__fastcall *v10)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@3
  void (__fastcall *v11)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@3
  void (__fastcall *v12)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@3
  void (__fastcall *v13)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@3
  char v14; // r0@3
  void (__fastcall *v15)(SHFillerCorridor *, BlockSource *, char *, _DWORD); // r12@4
  void (__fastcall *v16)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v17)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v18)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v19)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@4
  void (__fastcall *v20)(SHFillerCorridor *, BlockSource *, char *, _DWORD); // r12@5
  void (__fastcall *v21)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@5
  void (__fastcall *v22)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@5
  void (__fastcall *v23)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@5
  void (__fastcall *v24)(SHFillerCorridor *, BlockSource *, char *, signed int); // r12@5
  char v26; // [sp+10h] [bp-28h]@3
  char v27; // [sp+11h] [bp-27h]@3

  v4 = this;
  v5 = a2;
  if ( *((_DWORD *)this + 10) >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v26 = *(_BYTE *)(Block::mStoneBrick + 4);
      v27 = 0;
      v7(v4, v5, &v26, 0);
      v8 = v5;
      v9 = 1;
      v10 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v10(v4, v8, &v26, 1);
      v11 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v11(v4, v8, &v26, 2);
      v12 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v12(v4, v8, &v26, 3);
      v13 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v13(v4, v8, &v26, 4);
      v14 = *(_BYTE *)(Block::mStoneBrick + 4);
      do
      {
        v15 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v26 = v14;
        v27 = 0;
        v15(v4, v8, &v26, 0);
        v16 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v26 = BlockID::AIR;
        v16(v4, v8, &v26, 1);
        v17 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v17(v4, v8, &v26, 2);
        v18 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v18(v4, v8, &v26, 3);
        v19 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v26 = *(_BYTE *)(Block::mStoneBrick + 4);
        v19(v4, v8, &v26, 4);
        ++v9;
        v14 = *(_BYTE *)(Block::mStoneBrick + 4);
      }
      while ( v9 != 4 );
      v5 = v8;
      v20 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v20(v4, v8, &v26, 0);
      v21 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v21(v4, v8, &v26, 1);
      v22 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v22(v4, v8, &v26, 2);
      v23 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v23(v4, v8, &v26, 3);
      v24 = *(void (__fastcall **)(SHFillerCorridor *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v24(v4, v8, &v26, 4);
      ++v6;
    }
    while ( v6 < *((_DWORD *)v4 + 10) );
  }
  return 1;
}


signed int __fastcall SHFillerCorridor::getType(SHFillerCorridor *this)
{
  return 1397245513;
}


int __fastcall SHFillerCorridor::SHFillerCorridor(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)result = &off_2723F3C;
  *(_DWORD *)(result + 40) = 0;
  return result;
}


int __fastcall SHFillerCorridor::SHFillerCorridor(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r5@1
  unsigned int v8; // r0@1
  int v9; // r0@4
  int v10; // r1@4

  v5 = a1;
  v6 = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v7 = a4;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_2723F3C;
  *(_DWORD *)(a1 + 28) = a5;
  v8 = j_Random::_genRandInt32(this) % 5;
  if ( v8 <= 3 )
    v6 = dword_2610B1C[v8];
  *(_DWORD *)(v5 + 36) = v6;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)v7;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v5 + 20) = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v7 + 20);
  if ( (a5 | 2) == 2 )
  {
    v9 = *(_DWORD *)(v7 + 8);
    v10 = *(_DWORD *)(v7 + 20);
  }
  else
    v9 = *(_DWORD *)v7;
    v10 = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v5 + 40) = v10 + 1 - v9;
  return v5;
}


int __fastcall SHFillerCorridor::findPieceBox(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r11@1
  __int64 *v8; // r6@1
  int v9; // r9@1
  int v10; // r6@1
  signed int v11; // r10@3
  int v12; // r8@4
  int result; // r0@11
  int v14; // [sp+1Ch] [bp-18h]@5
  int v15; // [sp+20h] [bp-14h]@5
  int v16; // [sp+24h] [bp-10h]@5
  int v17; // [sp+28h] [bp-Ch]@5
  int v18; // [sp+2Ch] [bp-8h]@5
  int v19; // [sp+30h] [bp-4h]@5
  int v20; // [sp+34h] [bp+0h]@1
  int v21; // [sp+38h] [bp+4h]@2
  int v22; // [sp+3Ch] [bp+8h]@5
  int v23; // [sp+40h] [bp+Ch]@5
  int v24; // [sp+44h] [bp+10h]@5
  int v25; // [sp+48h] [bp+14h]@5

  v7 = a4;
  v8 = (__int64 *)a2;
  v9 = a1;
  j_BoundingBox::orientBox((BoundingBox *)&v20, a4, a5, a6, -1, -1, 0, 5, 5, 4, a7);
  v10 = j_StructurePiece::findCollisionPiece(v8, (int)&v20);
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 8) == v21 )
    {
      v11 = 3;
      while ( 1 )
      {
        v12 = v11;
        if ( !v11 )
          break;
        --v11;
        j_BoundingBox::orientBox((BoundingBox *)&v14, v7, a5, a6, -1, -1, 0, 5, 5, v12 - 1, a7);
        v20 = v14;
        v21 = v15;
        v22 = v16;
        v23 = v17;
        v24 = v18;
        v25 = v19;
        if ( *(_DWORD *)(v10 + 16) < v14
          || *(_DWORD *)(v10 + 4) > v17
          || *(_DWORD *)(v10 + 24) < v16
          || *(_DWORD *)(v10 + 12) > v19
          || *(_DWORD *)(v10 + 20) < v15
          || *(_DWORD *)(v10 + 8) > v18 )
        {
          return j_BoundingBox::orientBox((BoundingBox *)v9, v7, a5, a6, -1, -1, 0, 5, 5, v12, a7);
        }
      }
    }
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 8) = 0;
  }
  else
  result = 0x7FFFFFFF;
  *(_DWORD *)v9 = 0x7FFFFFFF;
  *(_DWORD *)(v9 + 4) = 0x7FFFFFFF;
  *(_DWORD *)(v9 + 8) = 0x7FFFFFFF;
  *(_DWORD *)(v9 + 12) = -2147483647;
  *(_DWORD *)(v9 + 16) = -2147483647;
  *(_DWORD *)(v9 + 20) = -2147483647;
  return result;
}
