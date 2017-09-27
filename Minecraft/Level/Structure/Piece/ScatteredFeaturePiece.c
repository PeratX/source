

int __fastcall ScatteredFeaturePiece::ScatteredFeaturePiece(int result, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // r12@1

  *(_DWORD *)(result + 20) = 0;
  v6 = result + 4;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_271923C;
  *(_QWORD *)(result + 36) = a5;
  *(_DWORD *)(result + 44) = a6;
  *(_DWORD *)(result + 48) = -1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)v6 = a2;
  *(_DWORD *)(v6 + 4) = a3;
  *(_DWORD *)(v6 + 8) = a4;
  *(_DWORD *)(v6 + 12) = a2 + a5 - 1;
  *(_DWORD *)(result + 20) = a3 + HIDWORD(a5) - 1;
  *(_DWORD *)(result + 24) = a6 + a4 - 1;
  return result;
}


signed int __fastcall ScatteredFeaturePiece::updateAverageGroundHeight(ScatteredFeaturePiece *this, BlockSource *a2, const BoundingBox *a3, int a4)
{
  ScatteredFeaturePiece *v4; // r9@1
  const BoundingBox *v5; // r6@1
  BlockSource *v6; // r7@1
  signed int result; // r0@2
  int v8; // r8@2
  int v9; // r1@3
  signed int v10; // r11@3
  signed int v11; // r4@3
  int v12; // r0@4
  int v13; // r2@5
  int v14; // r10@5
  int v15; // r5@11
  int v16; // r0@11
  int v17; // r0@11
  int v18; // r0@15
  bool v19; // nf@15
  unsigned __int8 v20; // vf@15
  int v21; // r1@17
  int v22; // r0@17
  int v23; // [sp+4h] [bp-34h]@3
  int v24; // [sp+8h] [bp-30h]@2
  int v25; // [sp+Ch] [bp-2Ch]@2
  int v26; // [sp+10h] [bp-28h]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  if ( *((_DWORD *)this + 12) <= -1 )
  {
    result = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v8 = *((_DWORD *)v4 + 3);
    if ( v8 > *((_DWORD *)v4 + 6) )
      return result;
    v9 = *((_DWORD *)v4 + 4);
    v10 = 0;
    v11 = 0;
    v23 = a4;
    do
    {
      v12 = *((_DWORD *)v4 + 1);
      if ( v12 <= v9 )
      {
        do
        {
          v13 = *((_WORD *)v6 + 12);
          v14 = v12;
          v24 = v12;
          v25 = v13 - 1;
          v26 = v8;
          if ( v12 >= *(_DWORD *)v5
            && v12 <= *((_DWORD *)v5 + 3)
            && v8 >= *((_DWORD *)v5 + 2)
            && v8 <= *((_DWORD *)v5 + 5)
            && v13 > *((_DWORD *)v5 + 1)
            && v13 - 1 <= *((_DWORD *)v5 + 4) )
          {
            v15 = BlockSource::getAboveTopSolidBlock(v6, (const BlockPos *)&v24, 1, 0);
            v16 = j_BlockSource::getDimension(v6);
            v17 = (*(int (**)(void))(*(_DWORD *)v16 + 176))();
            ++v10;
            if ( v15 > v17 )
              v17 = v15;
            v9 = *((_DWORD *)v4 + 4);
            v11 += v17;
          }
          v12 = v14 + 1;
        }
        while ( v14 < v9 );
      }
      v18 = *((_DWORD *)v4 + 6);
      v20 = __OFSUB__(v8, v18);
      v19 = v8++ - v18 < 0;
    }
    while ( v19 ^ v20 );
    if ( !v10 )
      return 0;
    *((_DWORD *)v4 + 12) = v11 / v10;
    v21 = *((_DWORD *)v4 + 2);
    v22 = v11 / v10 + v23;
    *((_DWORD *)v4 + 2) = v22;
    *((_DWORD *)v4 + 5) += v22 - v21;
  }
  return 1;
}
