

int __fastcall SHPortalRoom::SHPortalRoom(int result)
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
  *(_DWORD *)result = &off_27240A4;
  return result;
}


signed int __fastcall SHPortalRoom::postProcess(SHPortalRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  StructurePiece *v4; // r4@1
  BlockSource *v5; // r5@1
  Random *v6; // r11@1
  const BoundingBox *v7; // r8@1
  int v8; // r2@1
  void (__fastcall *v9)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  void (__fastcall *v10)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  BlockSource *v11; // r10@1
  void (__fastcall *v12)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  StructurePiece *v13; // r7@1
  signed int v14; // r5@1
  void (__fastcall *v15)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r4@2
  void (__fastcall *v16)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@2
  BlockSource *v17; // r11@3
  void (__fastcall *v18)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@3
  void (__fastcall *v19)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@3
  void (__fastcall *v20)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@3
  void (__fastcall *v21)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@3
  char v22; // r10@3
  void (__fastcall *v23)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v24)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v25)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v26)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v27)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v28)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v29)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v30)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  void (__fastcall *v31)(StructurePiece *, BlockSource *, char *, signed int); // r6@3
  unsigned int v32; // r0@3
  int v33; // r5@4
  char v39; // r0@6
  char v41; // r0@8
  char v43; // r0@10
  char v45; // r0@12
  char v47; // r0@14
  char v49; // r0@16
  char v51; // r0@18
  char v53; // r0@20
  char v55; // r0@22
  char v57; // r0@24
  char v59; // r0@26
  char v61; // r0@28
  void (__fastcall *v62)(StructurePiece *, BlockSource *, char *, signed int); // r6@30
  char v63; // r0@30
  void (__fastcall *v64)(StructurePiece *, BlockSource *, char *, signed int); // r6@32
  char v65; // r0@32
  void (__fastcall *v66)(StructurePiece *, BlockSource *, char *, signed int); // r6@34
  char v67; // r5@36
  void (__fastcall *v68)(StructurePiece *, BlockSource *, char *, signed int); // r6@36
  char v69; // r0@36
  void (__fastcall *v70)(StructurePiece *, BlockSource *, char *, signed int); // r6@38
  char v71; // r0@38
  void (__fastcall *v72)(StructurePiece *, BlockSource *, char *, signed int); // r6@40
  char v73; // r6@42
  void (__fastcall *v74)(StructurePiece *, BlockSource *, char *, signed int); // r5@42
  char v75; // r0@42
  void (__fastcall *v76)(StructurePiece *, BlockSource *, char *, signed int); // r5@44
  char v77; // r0@44
  void (__fastcall *v78)(StructurePiece *, BlockSource *, char *, signed int); // r5@46
  char v79; // r4@48
  void (__fastcall *v80)(StructurePiece *, BlockSource *, char *, signed int); // r6@48
  char v81; // r0@48
  void (__fastcall *v82)(StructurePiece *, BlockSource *, char *, signed int); // r6@50
  char v83; // r0@50
  void (__fastcall *v84)(StructurePiece *, BlockSource *, char *, signed int); // r6@52
  void (__fastcall *v85)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v86)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v87)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v88)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v89)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v90)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v91)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v92)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  void (__fastcall *v93)(StructurePiece *, BlockSource *, char *, signed int); // r6@70
  int v94; // r4@72
  int v95; // r5@72
  int v96; // r9@72
  MobSpawnerBlockEntity *v97; // r0@78
  int v98; // r0@79
  int v100; // [sp+20h] [bp-F0h]@4
  int v101; // [sp+24h] [bp-ECh]@4
  int v102; // [sp+28h] [bp-E8h]@4
  Random *v103; // [sp+30h] [bp-E0h]@1
  BlockSource *v104; // [sp+34h] [bp-DCh]@3
  char v105; // [sp+38h] [bp-D8h]@78
  char v106; // [sp+39h] [bp-D7h]@78
  char v107; // [sp+3Ch] [bp-D4h]@70
  char v108; // [sp+3Dh] [bp-D3h]@70
  char v109; // [sp+40h] [bp-D0h]@70
  char v110; // [sp+41h] [bp-CFh]@70
  char v111; // [sp+44h] [bp-CCh]@70
  char v112; // [sp+45h] [bp-CBh]@70
  char v113; // [sp+48h] [bp-C8h]@70
  char v114; // [sp+49h] [bp-C7h]@70
  char v115; // [sp+4Ch] [bp-C4h]@70
  char v116; // [sp+4Dh] [bp-C3h]@70
  char v117; // [sp+50h] [bp-C0h]@70
  char v118; // [sp+51h] [bp-BFh]@70
  char v119; // [sp+54h] [bp-BCh]@70
  char v120; // [sp+55h] [bp-BBh]@70
  char v121; // [sp+58h] [bp-B8h]@70
  char v122; // [sp+59h] [bp-B7h]@70
  char v123; // [sp+5Ch] [bp-B4h]@70
  char v124; // [sp+5Dh] [bp-B3h]@70
  char v125; // [sp+60h] [bp-B0h]@3
  char v126; // [sp+61h] [bp-AFh]@3
  char v127; // [sp+64h] [bp-ACh]@3
  char v128; // [sp+65h] [bp-ABh]@3
  char v129; // [sp+68h] [bp-A8h]@2
  char v130; // [sp+69h] [bp-A7h]@2
  char v131; // [sp+6Ch] [bp-A4h]@2
  char v132; // [sp+6Dh] [bp-A3h]@2
  char v133; // [sp+70h] [bp-A0h]@2
  char v134; // [sp+71h] [bp-9Fh]@2
  char v135; // [sp+74h] [bp-9Ch]@2
  char v136; // [sp+75h] [bp-9Bh]@2
  char v137; // [sp+78h] [bp-98h]@1
  char v138; // [sp+79h] [bp-97h]@1
  char v139; // [sp+7Ch] [bp-94h]@1
  char v140; // [sp+7Dh] [bp-93h]@1
  char v141; // [sp+80h] [bp-90h]@1
  char v142; // [sp+81h] [bp-8Fh]@1
  char v143; // [sp+84h] [bp-8Ch]@1
  char v144; // [sp+85h] [bp-8Bh]@1
  char v145; // [sp+88h] [bp-88h]@1
  char v146; // [sp+89h] [bp-87h]@1
  char v147; // [sp+8Ch] [bp-84h]@1
  char v148; // [sp+8Dh] [bp-83h]@1
  char v149; // [sp+90h] [bp-80h]@3
  char v150; // [sp+91h] [bp-7Fh]@3
  char v151; // [sp+94h] [bp-7Ch]@3
  char v152; // [sp+95h] [bp-7Bh]@3
  char v153; // [sp+98h] [bp-78h]@3
  char v154; // [sp+99h] [bp-77h]@3
  char v155; // [sp+9Ah] [bp-76h]@12
  char v156; // [sp+9Bh] [bp-75h]@14
  char v157; // [sp+9Ch] [bp-74h]@16
  char v158; // [sp+9Dh] [bp-73h]@18
  char v159; // [sp+9Eh] [bp-72h]@20
  char v160; // [sp+9Fh] [bp-71h]@22
  char v161; // [sp+A0h] [bp-70h]@24
  char v162; // [sp+A1h] [bp-6Fh]@26
  char v163; // [sp+A2h] [bp-6Eh]@28
  char v164; // [sp+A3h] [bp-6Dh]@30
  RakNet *v165; // [sp+A4h] [bp-6Ch]@1

  v4 = this;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v103 = a3;
  v165 = _stack_chk_guard;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    10,
    7,
    15,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v5, v8, (__int16 *)v7, 2, 4);
    v4,
    v5,
    v7,
    1,
    6,
    14,
    v6,
    9,
    2,
    8,
    4,
  v9 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v147 = *(_BYTE *)(Block::mStillLava + 4);
  v148 = 0;
  v145 = *(_BYTE *)(Block::mStillLava + 4);
  v146 = 0;
  v9(v4, v5, v7, 1);
  v10 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v143 = *(_BYTE *)(Block::mStillLava + 4);
  v144 = 0;
  v141 = *(_BYTE *)(Block::mStillLava + 4);
  v142 = 0;
  v10(v4, v5, v7, 9);
    3,
    12,
  v11 = v5;
  v12 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v139 = *(_BYTE *)(Block::mStillLava + 4);
  v140 = 0;
  v137 = *(_BYTE *)(Block::mStillLava + 4);
  v138 = 0;
  v13 = v4;
  v12(v4, v5, v7, 4);
  v14 = 3;
  do
  {
    v15 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v13 + 40);
    v135 = *(_BYTE *)(Block::mIronFence + 4);
    v136 = 0;
    v133 = *(_BYTE *)(Block::mIronFence + 4);
    v134 = 0;
    v15(v13, v11, v7, 0);
    v16 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v13 + 40);
    v131 = *(_BYTE *)(Block::mIronFence + 4);
    v132 = 0;
    v129 = *(_BYTE *)(Block::mIronFence + 4);
    v130 = 0;
    v16(v13, v11, v7, 10);
    v14 += 2;
  }
  while ( v14 < 14 );
  v17 = v11;
  v18 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v13 + 40);
  v127 = *(_BYTE *)(Block::mIronFence + 4);
  v128 = 0;
  v125 = *(_BYTE *)(Block::mIronFence + 4);
  v126 = 0;
  v104 = v11;
  v18(v13, v11, v7, 2);
  v19 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v13 + 40);
  v19(v13, v11, v7, 4);
  v20 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v13 + 40);
  v20(v13, v11, v7, 6);
  v21 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v13 + 40);
  v21(v13, v11, v7, 8);
  v22 = j_StructurePiece::getOrientationData(v13, (const Block *)Block::mStoneBrickStairs, 3);
    v13,
    v17,
    5,
    v103,
  v23 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v151 = *(_BYTE *)(Block::mStoneBrickStairs + 4);
  v152 = v22;
  v23(v13, v17, &v151, 4);
  v24 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v153 = *(_BYTE *)(Block::mStoneBrickStairs + 4);
  v154 = v22;
  v24(v13, v17, &v153, 4);
  v25 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v149 = *(_BYTE *)(Block::mStoneBrickStairs + 4);
  v150 = v22;
  v25(v13, v17, &v149, 4);
  v26 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v26(v13, v17, &v151, 5);
  v27 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v27(v13, v17, &v153, 5);
  v28 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v28(v13, v17, &v149, 5);
  v29 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v29(v13, v17, &v151, 6);
  v30 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v30(v13, v17, &v153, 6);
  v31 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v31(v13, v17, &v149, 6);
  v32 = *((_DWORD *)v13 + 7);
  if ( v32 >= 4 )
    LOBYTE(v33) = 2;
    LOBYTE(v100) = 0;
    LOBYTE(v101) = 3;
    LOBYTE(v102) = 1;
  else
    v33 = *((_DWORD *)v13 + 7);
    v102 = dword_2610B3C[v32];
    v101 = dword_2610B2C[v32];
    v100 = dword_26109BC[v32];
  _R0 = j_Random::_genRandInt32(v103);
  __asm
    VMOV            S0, R0
    VLDR            D12, =2.32830644e-10
    VLDR            S16, =0.9
  v39 = 0;
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D12
    VCVT.F32.F64    S18, D0
    VCMPE.F32       S18, S16
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v39 = 1;
  v153 = v39;
  __asm { VMOV            S0, R0 }
  v41 = 0;
    VCVT.F32.F64    S20, D0
    VCMPE.F32       S20, S16
    v41 = 1;
  v154 = v41;
  v43 = 0;
    VCVT.F32.F64    S22, D0
    VCMPE.F32       S22, S16
    v43 = 1;
  v155 = v43;
  v45 = 0;
    VCVT.F32.F64    S27, D0
    VCMPE.F32       S27, S16
    v45 = 1;
  v156 = v45;
  v47 = 0;
    VCVT.F32.F64    S26, D0
    VCMPE.F32       S26, S16
    v47 = 1;
  v157 = v47;
  v49 = 0;
    VCVT.F32.F64    S28, D0
    VCMPE.F32       S28, S16
    v49 = 1;
  v158 = v49;
  v51 = 0;
    VCVT.F32.F64    S30, D0
    VCMPE.F32       S30, S16
    v51 = 1;
  v159 = v51;
  v53 = 0;
    VCVT.F32.F64    S17, D0
    VCMPE.F32       S17, S16
    v53 = 1;
  v160 = v53;
  v55 = 0;
    VCVT.F32.F64    S19, D0
    VCMPE.F32       S19, S16
    v55 = 1;
  v161 = v55;
  v57 = 0;
    VCVT.F32.F64    S21, D0
    VCMPE.F32       S21, S16
    v57 = 1;
  v162 = v57;
  v59 = 0;
    VCVT.F32.F64    S23, D0
    VCMPE.F32       S23, S16
    v59 = 1;
  v163 = v59;
  v61 = 0;
    VCVT.F32.F64    S25, D0
    VCMPE.F32       S25, S16
    v61 = 1;
  v164 = v61;
  v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v151 = *(_BYTE *)(Block::mEndPortalFrame + 4);
  v63 = v33;
  if ( v153 )
    v63 = v33 | 4;
  v152 = v63;
  v62(v13, v104, &v151, 4);
  v64 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v65 = v33;
  if ( v154 )
    v65 = v33 | 4;
  v152 = v65;
  v64(v13, v104, &v151, 5);
  v66 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  if ( v155 )
    LOBYTE(v33) = v33 | 4;
  v152 = v33;
  v66(v13, v104, &v151, 6);
  v67 = v100;
  v68 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v69 = v100;
  if ( v156 )
    v69 = v100 | 4;
  v152 = v69;
  v68(v13, v104, &v151, 4);
  v70 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v71 = v100;
  if ( v157 )
    v71 = v100 | 4;
  v152 = v71;
  v70(v13, v104, &v151, 5);
  v72 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  if ( v158 )
    v67 = v100 | 4;
  v152 = v67;
  v72(v13, v104, &v151, 6);
  v73 = v101;
  v74 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v75 = v101;
  if ( v159 )
    v75 = v101 | 4;
  v152 = v75;
  v74(v13, v104, &v151, 3);
  v76 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v77 = v101;
  if ( v160 )
    v77 = v101 | 4;
  v152 = v77;
  v76(v13, v104, &v151, 3);
  v78 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  if ( v161 )
    v73 = v101 | 4;
  v152 = v73;
  v78(v13, v104, &v151, 3);
  v79 = v102;
  v80 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v81 = v102;
  if ( v162 )
    v81 = v102 | 4;
  v152 = v81;
  v80(v13, v104, &v151, 7);
  v82 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  v83 = v102;
  if ( v163 )
    v83 = v102 | 4;
  v152 = v83;
  v82(v13, v104, &v151, 7);
  v84 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
  if ( v164 )
    v79 = v102 | 4;
  v152 = v79;
  v84(v13, v104, &v151, 7);
    __asm
    {
      VCMPEGT.F32     S20, S16
      VMRSGT          APSR_nzcv, FPSCR
      VCMPE.F32       S22, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VCMPEGT.F32     S27, S16
        VMRSGT          APSR_nzcv, FPSCR
        VCMPE.F32       S26, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VCMPEGT.F32     S28, S16
          VMRSGT          APSR_nzcv, FPSCR
          VCMPE.F32       S30, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm
          {
            VCMPEGT.F32     S17, S16
            VMRSGT          APSR_nzcv, FPSCR
            VCMPE.F32       S19, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm
            {
              VCMPEGT.F32     S21, S16
              VMRSGT          APSR_nzcv, FPSCR
              VCMPE.F32       S23, S16
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm
              {
                VCMPEGT.F32     S25, S16
                VMRSGT          APSR_nzcv, FPSCR
              }
              v85 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v123 = *(_BYTE *)(Block::mEndPortal + 4);
              v124 = 0;
              v85(v13, v104, &v123, 4);
              v86 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v121 = *(_BYTE *)(Block::mEndPortal + 4);
              v122 = 0;
              v86(v13, v104, &v121, 5);
              v87 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v119 = *(_BYTE *)(Block::mEndPortal + 4);
              v120 = 0;
              v87(v13, v104, &v119, 6);
              v88 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v117 = *(_BYTE *)(Block::mEndPortal + 4);
              v118 = 0;
              v88(v13, v104, &v117, 4);
              v89 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v115 = *(_BYTE *)(Block::mEndPortal + 4);
              v116 = 0;
              v89(v13, v104, &v115, 5);
              v90 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v113 = *(_BYTE *)(Block::mEndPortal + 4);
              v114 = 0;
              v90(v13, v104, &v113, 6);
              v91 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v111 = *(_BYTE *)(Block::mEndPortal + 4);
              v112 = 0;
              v91(v13, v104, &v111, 4);
              v92 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v109 = *(_BYTE *)(Block::mEndPortal + 4);
              v110 = 0;
              v92(v13, v104, &v109, 5);
              v93 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
              v107 = *(_BYTE *)(Block::mEndPortal + 4);
              v108 = 0;
              v93(v13, v104, &v107, 6);
  if ( !*((_BYTE *)v13 + 40) )
    v94 = j_StructurePiece::getWorldY(v13, 3);
    v95 = (*(int (__fastcall **)(StructurePiece *, signed int, signed int))(*(_DWORD *)v13 + 28))(v13, 5, 6);
    v96 = (*(int (__fastcall **)(StructurePiece *, signed int, signed int))(*(_DWORD *)v13 + 32))(v13, 5, 6);
    if ( *(_DWORD *)v7 <= v95
      && *((_DWORD *)v7 + 3) >= v95
      && *((_DWORD *)v7 + 2) <= v96
      && *((_DWORD *)v7 + 5) >= v96
      && *((_DWORD *)v7 + 1) <= v94
      && *((_DWORD *)v7 + 4) >= v94 )
      *((_BYTE *)v13 + 40) = 1;
      v105 = *(_BYTE *)(Block::mMobSpawner + 4);
      v106 = 0;
      j_BlockSource::setBlockAndData((int)v104, v95, v94, v96, (int)&v105, 4);
      v97 = (MobSpawnerBlockEntity *)j_BlockSource::getBlockEntity(v104, v95, v94, v96);
      if ( v97 )
        v98 = j_MobSpawnerBlockEntity::getSpawner(v97);
        j_BaseMobSpawner::setEntityId(v98, 264999);
  if ( _stack_chk_guard != v165 )
    j___stack_chk_fail_0(_stack_chk_guard - v165);
  return 1;
}


int __fastcall SHPortalRoom::SHPortalRoom(int result, unsigned int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_27240A4;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  *(_BYTE *)(result + 40) = 0;
  return result;
}


signed int __fastcall SHPortalRoom::getType(SHPortalRoom *this)
{
  return 1397248082;
}


int __fastcall SHPortalRoom::addChildren(int result, int a2)
{
  if ( a2 )
    *(_DWORD *)(a2 + 56) = result;
  return result;
}


_DWORD *__fastcall SHPortalRoom::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 *v8; // r5@1
  _DWORD *v9; // r9@1
  _DWORD *result; // r0@1
  int v11; // r1@4
  int v12; // [sp+20h] [bp-38h]@1
  _DWORD *v13; // [sp+24h] [bp-34h]@1
  int v14; // [sp+28h] [bp-30h]@4
  int v15; // [sp+2Ch] [bp-2Ch]@4
  int v16; // [sp+30h] [bp-28h]@4
  int v17; // [sp+34h] [bp-24h]@4

  v8 = (__int64 *)a2;
  v9 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -4, -1, 0, 11, 8, 16, a7);
  result = v13;
  if ( (signed int)v13 < 11 || (result = (_DWORD *)j_StructurePiece::findCollisionPiece(v8, (int)&v12)) != 0 )
  {
    *v9 = 0;
  }
  else
    result = j_operator new(0x2Cu);
    result[3] = 0;
    result[4] = 0;
    result[1] = 0;
    result[2] = 0;
    result[8] = a8;
    result[9] = 0;
    *v9 = result;
    *result = &off_27240A4;
    v11 = v12;
    result[7] = a7;
    result[1] = v11;
    result[2] = v13;
    result[3] = v14;
    result[4] = v15;
    result[5] = v16;
    result[6] = v17;
    *((_BYTE *)result + 40) = 0;
  return result;
}
