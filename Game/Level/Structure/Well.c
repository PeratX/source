

signed int __fastcall Well::postProcess(Well *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  Well *v4; // r10@1
  const BoundingBox *v5; // r9@1
  Random *v6; // r5@1
  int v7; // r7@2
  int v8; // r0@2
  int v9; // r12@3
  signed int v10; // r11@3
  signed int v11; // r8@3
  int v12; // r2@4
  int v13; // r5@5
  __int64 v14; // kr00_8@5
  int v15; // r0@5
  int v16; // r3@5
  signed int v19; // r0@5
  __int64 v20; // kr10_8@5
  signed int v21; // r2@7
  signed int v23; // r3@9
  signed int v24; // r4@11
  signed int v25; // r6@13
  int v26; // r0@17
  int v27; // r0@24
  char v28; // r4@26
  void (__fastcall *v31)(Well *, BlockSource *, const BoundingBox *, signed int); // r7@31
  signed __int64 v32; // r4@31
  void (__fastcall *v33)(Well *, BlockSource *, __int16 *, signed int); // r6@31
  void (__fastcall *v34)(Well *, BlockSource *, __int16 *, signed int); // r6@31
  void (__fastcall *v35)(Well *, BlockSource *, __int16 *, signed int); // r6@31
  void (__fastcall *v36)(Well *, BlockSource *, __int16 *, signed int); // r6@31
  void (__fastcall *v37)(Well *, BlockSource *, char *, signed int); // r6@31
  void (__fastcall *v38)(Well *, BlockSource *, char *, signed int); // r6@31
  void (__fastcall *v39)(Well *, BlockSource *, char *, signed int); // r6@31
  void (__fastcall *v40)(Well *, BlockSource *, char *, signed int); // r6@31
  void (__fastcall *v41)(Well *, BlockSource *, char *, signed int); // r6@31
  void (__fastcall *v42)(Well *, BlockSource *, char *, signed int); // r6@31
  void (__fastcall *v43)(Well *, BlockSource *, char *, signed int); // r6@31
  void (__fastcall *v44)(Well *, BlockSource *, char *, signed int); // r6@31
  unsigned int v45; // r1@31
  int v46; // r1@32
  int *v47; // r6@32
  int v48; // r7@32
  BlockSelector *v49; // r1@33
  signed int v50; // r7@36
  void (__fastcall *v51)(Well *, BlockSource *, char *, _DWORD); // r7@37
  void (__fastcall *v52)(Well *, BlockSource *, char *, signed int); // r6@37
  void (__fastcall *v53)(Well *, BlockSource *, char *, signed int); // r6@37
  void (__fastcall *v54)(Well *, BlockSource *, char *, signed int); // r6@37
  void (__fastcall *v55)(Well *, BlockSource *, char *, signed int); // r6@37
  void (__fastcall *v56)(Well *, BlockSource *, char *, signed int); // r6@37
  void (__fastcall *v57)(Well *, BlockSource *, char *, _DWORD); // r6@40
  void (__fastcall *v58)(Well *, BlockSource *, char *, signed int); // r6@40
  void (__fastcall *v59)(Well *, BlockSource *, char *, _DWORD); // r6@42
  void (__fastcall *v60)(Well *, BlockSource *, char *, signed int); // r6@42
  void (__fastcall *v61)(Well *, BlockSource *, char *, signed int); // r6@42
  void (__fastcall *v62)(Well *, BlockSource *, char *, signed int); // r6@42
  void (__fastcall *v63)(Well *, BlockSource *, char *, signed int); // r6@42
  void (__fastcall *v64)(Well *, BlockSource *, char *, signed int); // r6@42
  Random *v66; // [sp+24h] [bp-A44h]@3
  unsigned int *v67; // [sp+24h] [bp-A44h]@27
  BlockSource *v68; // [sp+28h] [bp-A40h]@1
  char v69; // [sp+2Ch] [bp-A3Ch]@37
  char v70; // [sp+2Dh] [bp-A3Bh]@37
  unsigned int v71; // [sp+30h] [bp-A38h]@31
  unsigned int v72; // [sp+34h] [bp-A34h]@31
  int v73; // [sp+9F4h] [bp-74h]@31
  char v74; // [sp+9F8h] [bp-70h]@31
  int v75; // [sp+9FCh] [bp-6Ch]@31
  int v76; // [sp+A00h] [bp-68h]@33
  char v77; // [sp+A04h] [bp-64h]@31
  char v78; // [sp+A05h] [bp-63h]@31
  char v79; // [sp+A08h] [bp-60h]@31
  char v80; // [sp+A09h] [bp-5Fh]@31
  char v81; // [sp+A0Ch] [bp-5Ch]@31
  char v82; // [sp+A0Dh] [bp-5Bh]@31
  char v83; // [sp+A10h] [bp-58h]@31
  char v84; // [sp+A11h] [bp-57h]@31
  char v85; // [sp+A14h] [bp-54h]@31
  char v86; // [sp+A15h] [bp-53h]@31
  char v87; // [sp+A18h] [bp-50h]@31
  char v88; // [sp+A19h] [bp-4Fh]@31
  char v89; // [sp+A1Ch] [bp-4Ch]@31
  char v90; // [sp+A1Dh] [bp-4Bh]@31
  char v91; // [sp+A20h] [bp-48h]@31
  char v92; // [sp+A21h] [bp-47h]@31
  __int16 v93; // [sp+A24h] [bp-44h]@31
  __int16 v94; // [sp+A28h] [bp-40h]@31
  __int16 v95; // [sp+A2Ch] [bp-3Ch]@31
  __int16 v96; // [sp+A30h] [bp-38h]@31
  char v97; // [sp+A34h] [bp-34h]@31
  char v98; // [sp+A35h] [bp-33h]@31
  char v99; // [sp+A38h] [bp-30h]@31
  char v100; // [sp+A39h] [bp-2Fh]@31
  char v101; // [sp+A3Ch] [bp-2Ch]@35
  char v102; // [sp+A3Dh] [bp-2Bh]@35
  char v103; // [sp+A40h] [bp-28h]@35
  char v104; // [sp+A41h] [bp-27h]@35

  v4 = this;
  v5 = a4;
  v6 = a3;
  v68 = a2;
  if ( *((_DWORD *)this + 9) > -1 )
  {
LABEL_26:
    v28 = *(_BYTE *)(Block::mCobblestone + 4);
    if ( *((_BYTE *)v4 + 47) )
    {
      v67 = (unsigned int *)v6;
      _R0 = j_Random::_genRandInt32(v6);
      __asm
      {
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VLDR            S2, =0.4
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v28 = *(_BYTE *)(Block::mMossyCobblestone + 4);
    }
    else
    v31 = *(void (__fastcall **)(Well *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v99 = v28;
    v32 = 0x100000000LL;
    v100 = 0;
    v97 = *(_BYTE *)(Block::mStillWater + 4);
    v98 = 0;
    v31(v4, v68, v5, 1);
    v33 = *(void (__fastcall **)(Well *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v96 = FullBlock::AIR;
    v33(v4, v68, &v96, 2);
    v34 = *(void (__fastcall **)(Well *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v95 = FullBlock::AIR;
    v34(v4, v68, &v95, 3);
    v35 = *(void (__fastcall **)(Well *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v94 = FullBlock::AIR;
    v35(v4, v68, &v94, 2);
    v36 = *(void (__fastcall **)(Well *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v93 = FullBlock::AIR;
    v36(v4, v68, &v93, 3);
    v37 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v91 = *(_BYTE *)(Block::mFence + 4);
    v92 = 0;
    v37(v4, v68, &v91, 1);
    v38 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v89 = *(_BYTE *)(Block::mFence + 4);
    v90 = 0;
    v38(v4, v68, &v89, 1);
    v39 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v87 = *(_BYTE *)(Block::mFence + 4);
    v88 = 0;
    v39(v4, v68, &v87, 4);
    v40 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v85 = *(_BYTE *)(Block::mFence + 4);
    v86 = 0;
    v40(v4, v68, &v85, 4);
    v41 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v83 = *(_BYTE *)(Block::mFence + 4);
    v84 = 0;
    v41(v4, v68, &v83, 1);
    v42 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v81 = *(_BYTE *)(Block::mFence + 4);
    v82 = 0;
    v42(v4, v68, &v81, 1);
    v43 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v79 = *(_BYTE *)(Block::mFence + 4);
    v80 = 0;
    v43(v4, v68, &v79, 4);
    v44 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v77 = *(_BYTE *)(Block::mFence + 4);
    v78 = 0;
    v44(v4, v68, &v77, 4);
    v45 = *v67;
    v71 = v45;
    v73 = 625;
    v74 = 0;
    v75 = 0;
    v72 = v45;
    do
      v46 = v45 ^ (v45 >> 30);
      v47 = (int *)(&v71 + v32);
      v48 = v32 + 1812433253 * v46;
      LODWORD(v32) = v32 + 1;
      v45 = HIDWORD(v32)++ + 1812433253 * v46;
      v47[2] = v48 + 1;
    while ( (_DWORD)v32 != 397 );
    v73 = 624;
    v76 = 398;
    v49 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v49 )
      j_StructurePiece::generateBox(v4, v68, v5, 1, 15, 1, 4, 15, 4, 0, (Random *)&v71, v49);
      v103 = *(_BYTE *)(Block::mCobblestone + 4);
      v104 = 0;
      v101 = *(_BYTE *)(Block::mCobblestone + 4);
      v102 = 0;
      j_StructurePiece::generateBox((int)v4, (int)v68, (int)v5, 1, 15, 1, 4, 15, 4, (int)&v103, (int)&v101, 0);
    v50 = 0;
    while ( 1 )
      while ( !v50 )
        v51 = *(void (__fastcall **)(Well *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v69 = *(_BYTE *)(Block::mGrassPathBlock + 4);
        v70 = 0;
        v51(v4, v68, &v69, 0);
        j_StructurePiece::generateAirColumnUp(v4, v68, 0, 12, 0, v5);
        v50 = 1;
        v52 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v52(v4, v68, &v69, 1);
        j_StructurePiece::generateAirColumnUp(v4, v68, 1, 12, 0, v5);
        v53 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v53(v4, v68, &v69, 2);
        j_StructurePiece::generateAirColumnUp(v4, v68, 2, 12, 0, v5);
        v54 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v54(v4, v68, &v69, 3);
        j_StructurePiece::generateAirColumnUp(v4, v68, 3, 12, 0, v5);
        v55 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v55(v4, v68, &v69, 4);
        j_StructurePiece::generateAirColumnUp(v4, v68, 4, 12, 0, v5);
        v56 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v56(v4, v68, &v69, 5);
        j_StructurePiece::generateAirColumnUp(v4, v68, 5, 12, 0, v5);
      if ( v50 == 5 )
        break;
      v57 = *(void (__fastcall **)(Well *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v69 = *(_BYTE *)(Block::mGrassPathBlock + 4);
      v70 = 0;
      v57(v4, v68, &v69, 0);
      j_StructurePiece::generateAirColumnUp(v4, v68, 0, 12, v50, v5);
      v58 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v58(v4, v68, &v69, 5);
      j_StructurePiece::generateAirColumnUp(v4, v68, 5, 12, v50++, v5);
      if ( v50 == 6 )
        return 1;
    v59 = *(void (__fastcall **)(Well *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v69 = *(_BYTE *)(Block::mGrassPathBlock + 4);
    v70 = 0;
    v59(v4, v68, &v69, 0);
    j_StructurePiece::generateAirColumnUp(v4, v68, 0, 12, 5, v5);
    v60 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v60(v4, v68, &v69, 1);
    j_StructurePiece::generateAirColumnUp(v4, v68, 1, 12, 5, v5);
    v61 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v61(v4, v68, &v69, 2);
    j_StructurePiece::generateAirColumnUp(v4, v68, 2, 12, 5, v5);
    v62 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v62(v4, v68, &v69, 3);
    j_StructurePiece::generateAirColumnUp(v4, v68, 3, 12, 5, v5);
    v63 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v63(v4, v68, &v69, 4);
    j_StructurePiece::generateAirColumnUp(v4, v68, 4, 12, 5, v5);
    v64 = *(void (__fastcall **)(Well *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v64(v4, v68, &v69, 5);
    j_StructurePiece::generateAirColumnUp(v4, v68, 5, 12, 5, v5);
    return 1;
  }
  v7 = *((_DWORD *)this + 3);
  v8 = *((_DWORD *)this + 6);
  if ( v7 > v8 )
    goto LABEL_46;
  v9 = *((_DWORD *)v4 + 4);
  v10 = 0;
  v11 = 0;
  v66 = a3;
  do
    v12 = *((_DWORD *)v4 + 1);
    if ( v12 <= v9 )
      do
        v13 = v12;
        v14 = *(_QWORD *)v5;
        v15 = *((_QWORD *)v5 + 1) >> 32;
        v16 = *((_QWORD *)v5 + 1);
        _VF = __OFSUB__(v15, v12);
        _NF = v15 - v12 < 0;
        v19 = 0;
        v20 = *((_QWORD *)v5 + 2);
        if ( !(_NF ^ _VF) )
          v19 = 1;
        v21 = 0;
        if ( (signed int)v14 <= v13 )
          v21 = 1;
        _VF = __OFSUB__(v16, v7);
        _ZF = v16 == v7;
        _NF = v16 - v7 < 0;
        v23 = 0;
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v23 = 1;
        v24 = 0;
        if ( SHIDWORD(v20) >= v7 )
          v24 = 1;
        v25 = 0;
        if ( SHIDWORD(v14) < 65 )
          v25 = 1;
        if ( (signed int)v20 >= 64 && (v19 & v21 & v23 & v24 & v25) == 1 )
        {
          v26 = j_BlockSource::getAboveTopSolidBlock(v68, v13, v7, 0, 0);
          ++v10;
          if ( v26 < 64 )
            v26 = 64;
          v9 = *((_DWORD *)v4 + 4);
          v11 += v26;
        }
        v12 = v13 + 1;
      while ( v13 < v9 );
      v8 = *((_DWORD *)v4 + 6);
    _VF = __OFSUB__(v7, v8);
    _NF = v7++ - v8 < 0;
  while ( _NF ^ _VF );
  v6 = v66;
  if ( !v10 )
LABEL_46:
    *((_DWORD *)v4 + 9) = -1;
  v27 = v11 / v10;
  *((_DWORD *)v4 + 9) = v11 / v10;
  if ( v11 / v10 >= 0 )
    *((_DWORD *)v4 + 2) += v27 - *((_DWORD *)v4 + 5) + 3;
    *((_DWORD *)v4 + 5) = v27 + 3;
    goto LABEL_26;
  return 1;
}


int __fastcall Well::Well(int result, int a2, int a3, int a4, int a5, int a6)
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
  *(_DWORD *)result = &off_2724694;
  *(_DWORD *)(result + 28) = a6;
  *(_DWORD *)(result + 4) = *(_DWORD *)a5;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a5 + 20);
  return result;
}


int __fastcall Well::Well(int result)
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
  *(_DWORD *)result = &off_2724694;
  return result;
}


int __fastcall Well::Well(int a1, int a2, int a3, Random *a4, int a5, int a6)
{
  int v6; // r4@1

  v6 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 36) = -1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)a1 = &off_2724694;
  *(_DWORD *)(a1 + 28) = j_Random::_genRandInt32(a4) & 3;
  *(_DWORD *)(v6 + 4) = a5;
  *(_DWORD *)(v6 + 8) = 64;
  *(_DWORD *)(v6 + 12) = a6;
  *(_DWORD *)(v6 + 16) = a5 + 5;
  *(_DWORD *)(v6 + 20) = 78;
  *(_DWORD *)(v6 + 24) = a6 + 5;
  return v6;
}


signed int __fastcall Well::getType(Well *this)
{
  return 1447647045;
}
