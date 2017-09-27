

int __fastcall LightPost::LightPost(int result, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // r1@2

  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = a3;
  *(_DWORD *)result = &off_27242B8;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 36) = 0xFFFFFFFFLL;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 44);
    *(_BYTE *)(result + 44) = v6;
    *(_BYTE *)(result + 45) = BYTE1(v6);
    *(_BYTE *)(result + 46) = v6 >> 16;
    *(_BYTE *)(result + 47) = BYTE3(v6);
    if ( 0 != v6 >> 24 )
      *(_DWORD *)(result + 48) = &VillagePiece::mossyStoneSelector;
  }
  *(_DWORD *)result = &off_27245FC;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  return result;
}


int __fastcall LightPost::LightPost(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 36) = -1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)result = &off_27245FC;
  return result;
}


signed int __fastcall LightPost::getType(LightPost *this)
{
  return 1447644240;
}


signed int __fastcall LightPost::postProcess(LightPost *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  LightPost *v4; // r5@1
  const BoundingBox *v5; // r11@1
  int v6; // r9@2
  int v7; // r0@2
  int v8; // r12@3
  signed int v9; // r10@3
  signed int v10; // r8@3
  int v11; // r2@4
  __int64 v12; // kr00_8@5
  int v13; // r5@5
  int v14; // r0@5
  int v15; // r3@5
  bool v16; // nf@5
  unsigned __int8 v17; // vf@5
  signed int v18; // r0@5
  __int64 v19; // kr10_8@5
  bool v20; // zf@7
  signed int v21; // r2@7
  signed int v22; // r1@7
  signed int v23; // r3@9
  signed int v24; // r4@11
  int v25; // r0@17
  int v26; // r0@24
  BlockSource *v27; // r10@26
  void (__fastcall *v28)(LightPost *); // r4@26
  void (__fastcall *v29)(LightPost *, BlockSource *, char *, signed int); // r6@26
  void (__fastcall *v30)(LightPost *, BlockSource *, char *, signed int); // r6@26
  void (__fastcall *v31)(LightPost *, BlockSource *, char *, signed int); // r6@26
  void (__fastcall *v32)(LightPost *, BlockSource *, char *, signed int); // r7@26
  void (__fastcall *v33)(LightPost *, BlockSource *, char *, _DWORD); // r4@27
  void (__fastcall *v34)(LightPost *, BlockSource *, char *, signed int); // r4@27
  void (__fastcall *v35)(LightPost *, BlockSource *, char *, signed int); // r4@27
  void (__fastcall *v36)(LightPost *, BlockSource *, char *, signed int); // r4@27
  BlockSource *v38; // [sp+24h] [bp-54h]@2
  LightPost *v39; // [sp+28h] [bp-50h]@3
  char v40; // [sp+2Ch] [bp-4Ch]@27
  char v41; // [sp+2Dh] [bp-4Bh]@27
  char v42; // [sp+30h] [bp-48h]@27
  char v43; // [sp+31h] [bp-47h]@27
  char v44; // [sp+34h] [bp-44h]@27
  char v45; // [sp+35h] [bp-43h]@27
  char v46; // [sp+38h] [bp-40h]@27
  char v47; // [sp+39h] [bp-3Fh]@27
  char v48; // [sp+3Ch] [bp-3Ch]@26
  char v49; // [sp+3Dh] [bp-3Bh]@26
  char v50; // [sp+40h] [bp-38h]@26
  char v51; // [sp+41h] [bp-37h]@26
  char v52; // [sp+44h] [bp-34h]@26
  char v53; // [sp+45h] [bp-33h]@26
  char v54; // [sp+48h] [bp-30h]@26
  char v55; // [sp+49h] [bp-2Fh]@26
  char v56; // [sp+4Ch] [bp-2Ch]@26
  char v57; // [sp+4Dh] [bp-2Bh]@26
  char v58; // [sp+50h] [bp-28h]@26
  char v59; // [sp+51h] [bp-27h]@26

  v4 = this;
  v5 = a4;
  if ( *((_DWORD *)this + 9) > -1 )
  {
LABEL_26:
    v27 = a2;
    v28 = *(void (__fastcall **)(LightPost *))(*(_DWORD *)v4 + 40);
    v58 = BlockID::AIR;
    v56 = BlockID::AIR;
    v59 = 0;
    v57 = 0;
    v28(v4);
    v29 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v54 = *(_BYTE *)(Block::mFence + 4);
    v55 = 0;
    v29(v4, v27, &v54, 1);
    v30 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v52 = *(_BYTE *)(Block::mFence + 4);
    v53 = 0;
    v30(v4, v27, &v52, 1);
    v31 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v50 = *(_BYTE *)(Block::mFence + 4);
    v51 = 0;
    v31(v4, v27, &v50, 1);
    v32 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v48 = *(_BYTE *)(Block::mWool + 4);
    v49 = 15;
    v32(v4, v27, &v48, 1);
    if ( !*((_BYTE *)v4 + 47) )
    {
      v33 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v46 = *(_BYTE *)(Block::mTorch + 4);
      v47 = j_StructurePiece::getTorchData(v4, 3);
      v33(v4, v27, &v46, 0);
      v34 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v44 = *(_BYTE *)(Block::mTorch + 4);
      v45 = j_StructurePiece::getTorchData(v4, 0);
      v34(v4, v27, &v44, 1);
      v35 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v42 = *(_BYTE *)(Block::mTorch + 4);
      v43 = j_StructurePiece::getTorchData(v4, 1);
      v35(v4, v27, &v42, 2);
      v36 = *(void (__fastcall **)(LightPost *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v40 = *(_BYTE *)(Block::mTorch + 4);
      v41 = j_StructurePiece::getTorchData(v4, 2);
      v36(v4, v27, &v40, 1);
    }
    return 1;
  }
  v6 = *((_DWORD *)this + 3);
  v7 = *((_DWORD *)this + 6);
  v38 = a2;
  if ( v6 > v7 )
    goto LABEL_32;
  v8 = *((_DWORD *)v4 + 4);
  v9 = 0;
  v10 = 0;
  v39 = v4;
  do
    v11 = *((_DWORD *)v39 + 1);
    if ( v11 <= v8 )
      do
      {
        v12 = *(_QWORD *)v5;
        v13 = v11;
        v14 = *((_QWORD *)v5 + 1) >> 32;
        v15 = *((_QWORD *)v5 + 1);
        v17 = __OFSUB__(v14, v11);
        v16 = v14 - v11 < 0;
        v18 = 0;
        v19 = *((_QWORD *)v5 + 2);
        if ( !(v16 ^ v17) )
          v18 = 1;
        v17 = __OFSUB__((_DWORD)v12, v11);
        v20 = (_DWORD)v12 == v11;
        v16 = (signed int)v12 - v11 < 0;
        v21 = 0;
        v22 = 0;
        if ( (unsigned __int8)(v16 ^ v17) | v20 )
          v21 = 1;
        v17 = __OFSUB__(v15, v6);
        v20 = v15 == v6;
        v16 = v15 - v6 < 0;
        v23 = 0;
          v23 = 1;
        v24 = 0;
        if ( SHIDWORD(v19) >= v6 )
          v24 = 1;
        if ( SHIDWORD(v12) < 65 )
          v22 = 1;
        if ( (signed int)v19 >= 64 && (v18 & v21 & v23 & v24 & v22) == 1 )
        {
          v25 = j_BlockSource::getAboveTopSolidBlock(v38, v13, v6, 0, 0);
          ++v9;
          if ( v25 < 64 )
            v25 = 64;
          v10 += v25;
          v8 = *((_DWORD *)v39 + 4);
        }
        v11 = v13 + 1;
      }
      while ( v13 < v8 );
      v7 = *((_DWORD *)v39 + 6);
    v17 = __OFSUB__(v6, v7);
    v16 = v6++ - v7 < 0;
  while ( v16 ^ v17 );
  v4 = v39;
  if ( !v9 )
LABEL_32:
    *((_DWORD *)v4 + 9) = -1;
  v26 = v10 / v9;
  *((_DWORD *)v39 + 9) = v10 / v9;
  if ( v10 / v9 >= 0 )
    *((_DWORD *)v39 + 2) += v26 - *((_DWORD *)v39 + 5) + 3;
    a2 = v38;
    *((_DWORD *)v39 + 5) = v26 + 3;
    goto LABEL_26;
  return 1;
}


signed int __fastcall LightPost::findPieceBox(int a1, int a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 *v8; // r5@1
  int v9; // r4@1
  signed int result; // r0@2
  int v11; // [sp+1Ch] [bp-2Ch]@1
  int v12; // [sp+20h] [bp-28h]@3
  int v13; // [sp+24h] [bp-24h]@3
  int v14; // [sp+28h] [bp-20h]@3
  int v15; // [sp+2Ch] [bp-1Ch]@3
  int v16; // [sp+30h] [bp-18h]@3

  v8 = a3;
  v9 = a1;
  j_BoundingBox::orientBox((BoundingBox *)&v11, a5, a6, a7, 0, 0, 0, 3, 4, 2, a8);
  if ( j_StructurePiece::findCollisionPiece(v8, (int)&v11) )
  {
    result = -2147483647;
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)v9 = 0x7FFFFFFF;
    *(_DWORD *)(v9 + 4) = 0x7FFFFFFF;
    *(_DWORD *)(v9 + 8) = 0x7FFFFFFF;
    *(_DWORD *)(v9 + 12) = -2147483647;
    *(_DWORD *)(v9 + 16) = -2147483647;
  }
  else
    *(_DWORD *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 20) = 0;
    *(_DWORD *)v9 = v11;
    *(_DWORD *)(v9 + 4) = v12;
    *(_DWORD *)(v9 + 8) = v13;
    *(_DWORD *)(v9 + 12) = v14;
    *(_DWORD *)(v9 + 16) = v15;
    result = v16;
  *(_DWORD *)(v9 + 20) = result;
  return result;
}
