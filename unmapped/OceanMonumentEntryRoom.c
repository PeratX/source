

void __fastcall OceanMonumentEntryRoom::~OceanMonumentEntryRoom(OceanMonumentEntryRoom *this)
{
  OceanMonumentEntryRoom *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2718D84;
  v2 = *((_DWORD *)this + 11);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall OceanMonumentEntryRoom::getType(OceanMonumentEntryRoom *this)
{
  return 1330464082;
}


int __fastcall OceanMonumentEntryRoom::OceanMonumentEntryRoom(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  *(_DWORD *)result = &off_2718E14;
  return result;
}


void __fastcall OceanMonumentEntryRoom::~OceanMonumentEntryRoom(OceanMonumentEntryRoom *this)
{
  OceanMonumentEntryRoom::~OceanMonumentEntryRoom(this);
}


signed int __fastcall OceanMonumentEntryRoom::postProcess(OceanMonumentEntryRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentEntryRoom *v4; // r6@1
  BlockSource *v5; // r10@1
  const BoundingBox *v6; // r8@1
  void (__cdecl *v7)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int); // r7@1
  void (__fastcall *v8)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v9)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v10)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v11)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v12)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v13)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v14)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  void (__fastcall *v15)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int); // r7@1
  int v16; // r0@1
  int v17; // r4@2
  int v18; // r7@3
  char v19; // r0@4
  void (__fastcall *v20)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int); // r7@6
  int v21; // r7@6
  char v22; // r0@7
  void (__fastcall *v23)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int); // r7@9
  int v24; // r7@12
  int v25; // r4@13
  int v26; // r5@14
  char v27; // r0@15
  void (__fastcall *v28)(OceanMonumentEntryRoom *, BlockSource *, char *, int); // r5@17
  int v29; // r5@17
  char v30; // r0@18
  void (__fastcall *v31)(OceanMonumentEntryRoom *, BlockSource *, char *, int); // r5@20
  int v32; // r7@24
  signed int v33; // r4@25
  int v34; // r5@26
  char v35; // r0@27
  void (__fastcall *v36)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int); // r5@29
  int v37; // r5@29
  char v38; // r0@30
  void (__fastcall *v39)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int); // r5@32
  char v41; // [sp+20h] [bp-70h]@1
  char v42; // [sp+21h] [bp-6Fh]@1
  char v43; // [sp+24h] [bp-6Ch]@1
  char v44; // [sp+25h] [bp-6Bh]@1
  char v45; // [sp+28h] [bp-68h]@1
  char v46; // [sp+29h] [bp-67h]@1
  char v47; // [sp+2Ch] [bp-64h]@1
  char v48; // [sp+2Dh] [bp-63h]@1
  char v49; // [sp+30h] [bp-60h]@1
  char v50; // [sp+31h] [bp-5Fh]@1
  char v51; // [sp+34h] [bp-5Ch]@1
  char v52; // [sp+35h] [bp-5Bh]@1
  char v53; // [sp+38h] [bp-58h]@1
  char v54; // [sp+39h] [bp-57h]@1
  char v55; // [sp+3Ch] [bp-54h]@1
  char v56; // [sp+3Dh] [bp-53h]@1
  char v57; // [sp+40h] [bp-50h]@1
  char v58; // [sp+41h] [bp-4Fh]@1
  char v59; // [sp+44h] [bp-4Ch]@1
  char v60; // [sp+45h] [bp-4Bh]@1
  char v61; // [sp+48h] [bp-48h]@1
  char v62; // [sp+49h] [bp-47h]@1
  char v63; // [sp+4Ch] [bp-44h]@1
  char v64; // [sp+4Dh] [bp-43h]@1
  char v65; // [sp+50h] [bp-40h]@1
  char v66; // [sp+51h] [bp-3Fh]@1
  char v67; // [sp+54h] [bp-3Ch]@1
  char v68; // [sp+55h] [bp-3Bh]@1
  char v69; // [sp+58h] [bp-38h]@1
  char v70; // [sp+59h] [bp-37h]@1
  char v71; // [sp+5Ch] [bp-34h]@1
  char v72; // [sp+5Dh] [bp-33h]@1
  char v73; // [sp+60h] [bp-30h]@1
  char v74; // [sp+61h] [bp-2Fh]@1
  char v75; // [sp+64h] [bp-2Ch]@1
  char v76; // [sp+65h] [bp-2Bh]@1
  char v77; // [sp+68h] [bp-28h]@6
  char v78; // [sp+69h] [bp-27h]@6

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v75 = byte_281EAF3;
  v73 = byte_281EAF3;
  v76 = byte_281EAF4;
  v74 = byte_281EAF4;
  v7(this, a2, a4, 0, 3, 0, 2, 3);
  v8 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v71 = byte_281EAF3;
  v69 = byte_281EAF3;
  v72 = byte_281EAF4;
  v70 = byte_281EAF4;
  v8(v4, v5, v6, 5);
  v9 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v67 = byte_281EAF3;
  v65 = byte_281EAF3;
  v68 = byte_281EAF4;
  v66 = byte_281EAF4;
  v9(v4, v5, v6, 0);
  v10 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v63 = byte_281EAF3;
  v61 = byte_281EAF3;
  v64 = byte_281EAF4;
  v62 = byte_281EAF4;
  v10(v4, v5, v6, 6);
  v11 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v59 = byte_281EAF3;
  v57 = byte_281EAF3;
  v60 = byte_281EAF4;
  v58 = byte_281EAF4;
  v11(v4, v5, v6, 0);
  v12 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v55 = byte_281EAF3;
  v53 = byte_281EAF3;
  v56 = byte_281EAF4;
  v54 = byte_281EAF4;
  v12(v4, v5, v6, 7);
  v13 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v51 = byte_281EAF3;
  v49 = byte_281EAF3;
  v52 = byte_281EAF4;
  v50 = byte_281EAF4;
  v13(v4, v5, v6, 0);
  v14 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v47 = byte_281EAF3;
  v45 = byte_281EAF3;
  v48 = byte_281EAF4;
  v46 = byte_281EAF4;
  v14(v4, v5, v6, 1);
  v15 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v43 = byte_281EAF3;
  v41 = byte_281EAF3;
  v44 = byte_281EAF4;
  v42 = byte_281EAF4;
  v15(v4, v5, v6, 5);
  v16 = **(_DWORD **)(*((_DWORD *)v4 + 10) + 24);
  if ( v16 & 4 )
  {
    v17 = 1;
    do
    {
      v18 = StructurePiece::getWorldY(v4, v17);
      if ( v18 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v19 = *(_BYTE *)(Block::mAir + 4);
      else
        v19 = word_281EAFB;
      v20 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v77 = v19;
      v78 = 0;
      v20(v4, v5, &v77, 3);
      v21 = StructurePiece::getWorldY(v4, v17);
      if ( v21 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v22 = *(_BYTE *)(Block::mAir + 4);
        v22 = word_281EAFB;
      v23 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v77 = v22;
      v23(v4, v5, &v77, 4);
      ++v17;
    }
    while ( v17 != 3 );
    v16 = **(_DWORD **)(*((_DWORD *)v4 + 10) + 24);
  }
  if ( v16 & 0x10 )
    v24 = 1;
      v25 = 0;
      do
      {
        v26 = StructurePiece::getWorldY(v4, v24);
        if ( v26 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v27 = *(_BYTE *)(Block::mAir + 4);
        else
          v27 = word_281EAFB;
        v28 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
        v77 = v27;
        v78 = 0;
        v28(v4, v5, &v77, v25);
        v29 = StructurePiece::getWorldY(v4, v24);
        if ( v29 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v30 = *(_BYTE *)(Block::mAir + 4);
          v30 = word_281EAFB;
        v31 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
        v77 = v30;
        v31(v4, v5, &v77, v25++);
      }
      while ( v25 != 2 );
      ++v24;
    while ( v24 != 3 );
  if ( v16 & 0x20 )
    v32 = 1;
      v33 = 6;
        v34 = StructurePiece::getWorldY(v4, v32);
        if ( v34 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v35 = *(_BYTE *)(Block::mAir + 4);
          v35 = word_281EAFB;
        v36 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v77 = v35;
        v36(v4, v5, &v77, v33);
        v37 = StructurePiece::getWorldY(v4, v32);
        if ( v37 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v38 = *(_BYTE *)(Block::mAir + 4);
          v38 = word_281EAFB;
        v39 = *(void (__fastcall **)(OceanMonumentEntryRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v77 = v38;
        v39(v4, v5, &v77, v33++);
      while ( v33 != 8 );
      ++v32;
    while ( v32 != 3 );
  return 1;
}


_DWORD *__fastcall OceanMonumentEntryRoom::OceanMonumentEntryRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 1, 1, 1);
  *result = &off_2718E14;
  return result;
}
