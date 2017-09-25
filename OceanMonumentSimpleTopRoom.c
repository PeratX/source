

int __fastcall OceanMonumentSimpleTopRoom::OceanMonumentSimpleTopRoom(int result)
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
  *(_DWORD *)result = &off_2718EA4;
  return result;
}


_DWORD *__fastcall OceanMonumentSimpleTopRoom::OceanMonumentSimpleTopRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 1, 1, 1);
  *result = &off_2718EA4;
  return result;
}


signed int __fastcall OceanMonumentSimpleTopRoom::getType(OceanMonumentSimpleTopRoom *this)
{
  return 1330467922;
}


void __fastcall OceanMonumentSimpleTopRoom::~OceanMonumentSimpleTopRoom(OceanMonumentSimpleTopRoom *this)
{
  OceanMonumentSimpleTopRoom::~OceanMonumentSimpleTopRoom(this);
}


void __fastcall OceanMonumentSimpleTopRoom::~OceanMonumentSimpleTopRoom(OceanMonumentSimpleTopRoom *this)
{
  OceanMonumentSimpleTopRoom *v1; // r4@1
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


signed int __fastcall OceanMonumentSimpleTopRoom::postProcess(OceanMonumentSimpleTopRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentSimpleTopRoom *v4; // r9@1
  BlockSource *v5; // r11@1
  int v6; // r0@1
  const BoundingBox *v7; // r5@1
  Random *v8; // r7@1
  int v9; // r10@5
  const BoundingBox *v10; // r8@6
  void (__fastcall *v11)(OceanMonumentSimpleTopRoom *, BlockSource *, char *, int); // r6@8
  signed int v12; // r4@12
  signed int v13; // r10@13
  unsigned int v14; // r0@14
  bool v15; // zf@15
  void (__fastcall *v16)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r5@15
  void (__fastcall *v17)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@18
  void (__fastcall *v18)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v19)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v20)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v21)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@18
  void (__fastcall *v22)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v23)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v24)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v25)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@18
  void (__fastcall *v26)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v27)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v28)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v29)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@18
  void (__fastcall *v30)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r7@18
  void (__fastcall *v31)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r7@18
  void (__fastcall *v32)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int); // r7@18
  int v33; // r7@19
  int v34; // r4@20
  char v35; // r0@21
  void (__fastcall *v36)(OceanMonumentSimpleTopRoom *, BlockSource *, char *, signed int); // r4@23
  int v37; // r4@23
  char v38; // r0@24
  void (__fastcall *v39)(OceanMonumentSimpleTopRoom *, BlockSource *, char *, signed int); // r4@26
  BlockSource *v41; // [sp+24h] [bp-BCh]@4
  char v42; // [sp+24h] [bp-BCh]@5
  const BoundingBox *v43; // [sp+28h] [bp-B8h]@4
  char v44; // [sp+28h] [bp-B8h]@5
  char v45; // [sp+2Ch] [bp-B4h]@18
  char v46; // [sp+2Dh] [bp-B3h]@18
  char v47; // [sp+30h] [bp-B0h]@18
  char v48; // [sp+31h] [bp-AFh]@18
  char v49; // [sp+34h] [bp-ACh]@18
  char v50; // [sp+35h] [bp-ABh]@18
  char v51; // [sp+38h] [bp-A8h]@18
  char v52; // [sp+39h] [bp-A7h]@18
  char v53; // [sp+3Ch] [bp-A4h]@18
  char v54; // [sp+3Dh] [bp-A3h]@18
  char v55; // [sp+40h] [bp-A0h]@18
  char v56; // [sp+41h] [bp-9Fh]@18
  char v57; // [sp+44h] [bp-9Ch]@18
  char v58; // [sp+45h] [bp-9Bh]@18
  char v59; // [sp+48h] [bp-98h]@18
  char v60; // [sp+49h] [bp-97h]@18
  char v61; // [sp+4Ch] [bp-94h]@18
  char v62; // [sp+4Dh] [bp-93h]@18
  char v63; // [sp+50h] [bp-90h]@18
  char v64; // [sp+51h] [bp-8Fh]@18
  char v65; // [sp+54h] [bp-8Ch]@18
  char v66; // [sp+55h] [bp-8Bh]@18
  char v67; // [sp+58h] [bp-88h]@18
  char v68; // [sp+59h] [bp-87h]@18
  char v69; // [sp+5Ch] [bp-84h]@18
  char v70; // [sp+5Dh] [bp-83h]@18
  char v71; // [sp+60h] [bp-80h]@18
  char v72; // [sp+61h] [bp-7Fh]@18
  char v73; // [sp+64h] [bp-7Ch]@18
  char v74; // [sp+65h] [bp-7Bh]@18
  char v75; // [sp+68h] [bp-78h]@18
  char v76; // [sp+69h] [bp-77h]@18
  char v77; // [sp+6Ch] [bp-74h]@18
  char v78; // [sp+6Dh] [bp-73h]@18
  char v79; // [sp+70h] [bp-70h]@18
  char v80; // [sp+71h] [bp-6Fh]@18
  char v81; // [sp+74h] [bp-6Ch]@18
  char v82; // [sp+75h] [bp-6Bh]@18
  char v83; // [sp+78h] [bp-68h]@18
  char v84; // [sp+79h] [bp-67h]@18
  char v85; // [sp+7Ch] [bp-64h]@18
  char v86; // [sp+7Dh] [bp-63h]@18
  char v87; // [sp+80h] [bp-60h]@18
  char v88; // [sp+81h] [bp-5Fh]@18
  char v89; // [sp+84h] [bp-5Ch]@18
  char v90; // [sp+85h] [bp-5Bh]@18
  char v91; // [sp+88h] [bp-58h]@18
  char v92; // [sp+89h] [bp-57h]@18
  char v93; // [sp+8Ch] [bp-54h]@18
  char v94; // [sp+8Dh] [bp-53h]@18
  char v95; // [sp+90h] [bp-50h]@18
  char v96; // [sp+91h] [bp-4Fh]@18
  char v97; // [sp+94h] [bp-4Ch]@18
  char v98; // [sp+95h] [bp-4Bh]@18
  char v99; // [sp+98h] [bp-48h]@18
  char v100; // [sp+99h] [bp-47h]@18
  char v101; // [sp+9Ch] [bp-44h]@18
  char v102; // [sp+9Dh] [bp-43h]@18
  char v103; // [sp+A0h] [bp-40h]@18
  char v104; // [sp+A1h] [bp-3Fh]@18
  char v105; // [sp+A4h] [bp-3Ch]@18
  char v106; // [sp+A5h] [bp-3Bh]@18
  char v107; // [sp+A8h] [bp-38h]@18
  char v108; // [sp+A9h] [bp-37h]@18
  char v109; // [sp+ACh] [bp-34h]@15
  char v110; // [sp+ADh] [bp-33h]@15
  char v111; // [sp+B0h] [bp-30h]@15
  char v112; // [sp+B1h] [bp-2Fh]@15
  char v113; // [sp+B4h] [bp-2Ch]@8
  char v114; // [sp+B5h] [bp-2Bh]@8
  unsigned __int8 v115; // [sp+B8h] [bp-28h]@7

  v4 = this;
  v5 = a2;
  v6 = *((_DWORD *)this + 10);
  v7 = a4;
  v8 = a3;
  if ( *(_DWORD *)(v6 + 8) >= 25 )
  {
    OceanMonumentPiece::generateDefaultFloor(v4, a2, a4, 0, 0, **(_DWORD **)(v6 + 24) & 1);
    v6 = *((_DWORD *)v4 + 10);
  }
  if ( *(_DWORD *)(*(_DWORD *)(v6 + 12) + 8) )
    v41 = v5;
    v43 = v7;
  else
    v9 = 1;
    v44 = byte_281EAF1;
    v42 = byte_281EAF2;
    do
    {
      v10 = (const BoundingBox *)1;
      do
      {
        StructurePiece::getBlock((StructurePiece *)&v115, v4, (int)v5, v9, 4, v10, (int)v7);
        if ( v115 == (unsigned __int8)word_281EAFB )
        {
          v11 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v113 = v44;
          v114 = v42;
          v11(v4, v5, &v113, v9);
        }
        v10 = (const BoundingBox *)((char *)v10 + 1);
      }
      while ( v10 != (const BoundingBox *)7 );
      ++v9;
    }
    while ( v9 != 7 );
  v12 = 1;
  do
    v13 = 1;
      v14 = j_Random::_genRandInt32(v8);
      if ( v14 != 3 * (v14 / 3) )
        v15 = (j_Random::_genRandInt32(v8) & 3) == 0;
        v16 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v111 = *(_BYTE *)(Block::mSponge + 4);
        v109 = v111;
        v112 = 1;
        v110 = 1;
        v16(v4, v41, v43, v12);
      ++v13;
    while ( v13 != 7 );
    ++v12;
  while ( v12 != 7 );
  v17 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v107 = byte_281EAF3;
  v105 = byte_281EAF3;
  v108 = byte_281EAF4;
  v106 = byte_281EAF4;
  v17(v4, v41, v43, 0);
  v18 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v103 = byte_281EAF3;
  v101 = byte_281EAF3;
  v104 = byte_281EAF4;
  v102 = byte_281EAF4;
  v18(v4, v41, v43, 7);
  v19 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v99 = byte_281EAF3;
  v97 = byte_281EAF3;
  v100 = byte_281EAF4;
  v98 = byte_281EAF4;
  v19(v4, v41, v43, 1);
  v20 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v95 = byte_281EAF3;
  v93 = byte_281EAF3;
  v96 = byte_281EAF4;
  v94 = byte_281EAF4;
  v20(v4, v41, v43, 1);
  v21 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v91 = byte_281EAF5;
  v89 = byte_281EAF5;
  v92 = byte_281EAF6;
  v90 = byte_281EAF6;
  v21(v4, v41, v43, 0);
  v22 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v87 = byte_281EAF5;
  v85 = byte_281EAF5;
  v88 = byte_281EAF6;
  v86 = byte_281EAF6;
  v22(v4, v41, v43, 7);
  v23 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v83 = byte_281EAF5;
  v81 = byte_281EAF5;
  v84 = byte_281EAF6;
  v82 = byte_281EAF6;
  v23(v4, v41, v43, 1);
  v24 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v79 = byte_281EAF5;
  v77 = byte_281EAF5;
  v80 = byte_281EAF6;
  v78 = byte_281EAF6;
  v24(v4, v41, v43, 1);
  v25 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v75 = byte_281EAF3;
  v73 = byte_281EAF3;
  v76 = byte_281EAF4;
  v74 = byte_281EAF4;
  v25(v4, v41, v43, 0);
  v26 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v71 = byte_281EAF3;
  v69 = byte_281EAF3;
  v72 = byte_281EAF4;
  v70 = byte_281EAF4;
  v26(v4, v41, v43, 7);
  v27 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v67 = byte_281EAF3;
  v65 = byte_281EAF3;
  v68 = byte_281EAF4;
  v66 = byte_281EAF4;
  v27(v4, v41, v43, 1);
  v28 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v63 = byte_281EAF3;
  v61 = byte_281EAF3;
  v64 = byte_281EAF4;
  v62 = byte_281EAF4;
  v28(v4, v41, v43, 1);
  v29 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v59 = byte_281EAF5;
  v57 = byte_281EAF5;
  v60 = byte_281EAF6;
  v58 = byte_281EAF6;
  v29(v4, v41, v43, 0);
  v30 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v55 = byte_281EAF5;
  v53 = byte_281EAF5;
  v56 = byte_281EAF6;
  v54 = byte_281EAF6;
  v30(v4, v41, v43, 7);
  v31 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v51 = byte_281EAF5;
  v49 = byte_281EAF5;
  v52 = byte_281EAF6;
  v50 = byte_281EAF6;
  v31(v4, v41, v43, 3);
  v32 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v47 = byte_281EAF5;
  v45 = byte_281EAF5;
  v48 = byte_281EAF6;
  v46 = byte_281EAF6;
  v32(v4, v41, v43, 3);
  if ( **(_BYTE **)(*((_DWORD *)v4 + 10) + 24) & 8 )
    v33 = 1;
      v34 = StructurePiece::getWorldY(v4, v33);
      if ( v34 >= *(_WORD *)(BlockSource::getDimension(v41) + 20) )
        v35 = *(_BYTE *)(Block::mAir + 4);
      else
        v35 = word_281EAFB;
      v36 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v113 = v35;
      v114 = 0;
      v36(v4, v41, &v113, 3);
      v37 = StructurePiece::getWorldY(v4, v33);
      if ( v37 >= *(_WORD *)(BlockSource::getDimension(v41) + 20) )
        v38 = *(_BYTE *)(Block::mAir + 4);
        v38 = word_281EAFB;
      v39 = *(void (__fastcall **)(OceanMonumentSimpleTopRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v113 = v38;
      v39(v4, v41, &v113, 4);
      ++v33;
    while ( v33 != 3 );
  return 1;
}
