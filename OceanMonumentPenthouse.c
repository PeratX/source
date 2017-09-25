

int __fastcall OceanMonumentPenthouse::OceanMonumentPenthouse(int result)
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
  *(_DWORD *)result = &off_27190E4;
  *(_BYTE *)(result + 48) = 0;
  return result;
}


void __fastcall OceanMonumentPenthouse::~OceanMonumentPenthouse(OceanMonumentPenthouse *this)
{
  OceanMonumentPenthouse::~OceanMonumentPenthouse(this);
}


void __fastcall OceanMonumentPenthouse::~OceanMonumentPenthouse(OceanMonumentPenthouse *this)
{
  OceanMonumentPenthouse *v1; // r4@1
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


void __fastcall OceanMonumentPenthouse::postProcessMobsAt(OceanMonumentPenthouse *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentPenthouse *v4; // r4@1
  BlockSource *v5; // r5@1
  const BoundingBox *v13; // r2@2
  float v14; // [sp+8h] [bp-40h]@2
  char v15; // [sp+14h] [bp-34h]@2

  v4 = this;
  v5 = a2;
  if ( !*((_BYTE *)this + 48) )
  {
    _R6 = (*(int (__fastcall **)(OceanMonumentPenthouse *, signed int, signed int))(*(_DWORD *)this + 28))(this, 6, 3);
    _R7 = StructurePiece::getWorldY(v4, 1);
    __asm
    {
      VMOV            S0, R6
      VCVT.F32.S32    S16, S0
    }
    _R0 = (*(int (__fastcall **)(OceanMonumentPenthouse *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 6, 3);
      VMOV            S0, R7
      VMOV            S2, R0
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VSTR            S16, [SP,#0x48+var_40]
      VSTR            S0, [SP,#0x48+var_3C]
      VSTR            S2, [SP,#0x48+var_38]
    j_BlockPos::BlockPos((int)&v15, (int)&v14);
    if ( BlockSource::getChunkAt(v5, (const BlockPos *)&v15) )
      OceanMonumentPiece::spawnElder(v4, v5, v13, 6, 1, 3);
      *((_BYTE *)v4 + 48) = 1;
  }
}


void __fastcall OceanMonumentPenthouse::postProcessMobsAt(OceanMonumentPenthouse *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentPenthouse::postProcessMobsAt(this, a2, a3, a4);
}


signed int __fastcall OceanMonumentPenthouse::getType(OceanMonumentPenthouse *this)
{
  return 1330466888;
}


signed int __fastcall OceanMonumentPenthouse::postProcess(OceanMonumentPenthouse *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  StructurePiece *v4; // r6@1
  BlockSource *v5; // r8@1
  const BoundingBox *v6; // r5@1
  void (__cdecl *v7)(OceanMonumentPenthouse *, BlockSource *, const BoundingBox *, signed int, signed int, signed int, signed int, signed int); // r12@1
  signed int v8; // r7@1
  void (__fastcall *v9)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r12@1
  void (__fastcall *v10)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  void (__fastcall *v11)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  void (__fastcall *v12)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  void (__fastcall *v13)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r12@1
  void (__fastcall *v14)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  void (__fastcall *v15)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  void (__fastcall *v16)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@1
  const BoundingBox *v17; // r10@1
  void (__fastcall *v18)(StructurePiece *, BlockSource *, char *, _DWORD); // r5@2
  void (__fastcall *v19)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v20)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v21)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@3
  void (__fastcall *v22)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@3
  void (__fastcall *v23)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@3
  void (__fastcall *v24)(StructurePiece *, BlockSource *, char *, signed int); // r7@3
  void (__fastcall *v25)(StructurePiece *, BlockSource *, char *, signed int); // r7@3
  void (__fastcall *v26)(StructurePiece *, BlockSource *, char *, signed int); // r7@3
  void (__fastcall *v27)(StructurePiece *, BlockSource *, char *, signed int); // r7@3
  void (__fastcall *v28)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@3
  void (__fastcall *v29)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@3
  signed int v30; // r7@3
  void (__fastcall *v31)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v32)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v33)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v34)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v35)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v36)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v37)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v38)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v39)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v40)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@3
  int v41; // r4@4
  char v42; // r0@5
  void (__fastcall *v43)(StructurePiece *, BlockSource *, char *, signed int); // r5@7
  int v44; // r4@7
  char v45; // r0@8
  void (__fastcall *v46)(StructurePiece *, BlockSource *, char *, signed int); // r5@10
  char v48; // [sp+24h] [bp-DCh]@3
  char v49; // [sp+25h] [bp-DBh]@3
  char v50; // [sp+28h] [bp-D8h]@3
  char v51; // [sp+29h] [bp-D7h]@3
  char v52; // [sp+2Ch] [bp-D4h]@3
  char v53; // [sp+2Dh] [bp-D3h]@3
  char v54; // [sp+30h] [bp-D0h]@3
  char v55; // [sp+31h] [bp-CFh]@3
  char v56; // [sp+34h] [bp-CCh]@3
  char v57; // [sp+35h] [bp-CBh]@3
  char v58; // [sp+38h] [bp-C8h]@3
  char v59; // [sp+39h] [bp-C7h]@3
  char v60; // [sp+3Ch] [bp-C4h]@3
  char v61; // [sp+3Dh] [bp-C3h]@3
  char v62; // [sp+40h] [bp-C0h]@3
  char v63; // [sp+41h] [bp-BFh]@3
  char v64; // [sp+44h] [bp-BCh]@3
  char v65; // [sp+45h] [bp-BBh]@3
  char v66; // [sp+48h] [bp-B8h]@3
  char v67; // [sp+49h] [bp-B7h]@3
  char v68; // [sp+4Ch] [bp-B4h]@3
  char v69; // [sp+4Dh] [bp-B3h]@3
  char v70; // [sp+50h] [bp-B0h]@3
  char v71; // [sp+51h] [bp-AFh]@3
  char v72; // [sp+54h] [bp-ACh]@3
  char v73; // [sp+55h] [bp-ABh]@3
  char v74; // [sp+58h] [bp-A8h]@3
  char v75; // [sp+59h] [bp-A7h]@3
  char v76; // [sp+5Ch] [bp-A4h]@3
  char v77; // [sp+5Dh] [bp-A3h]@3
  char v78; // [sp+60h] [bp-A0h]@3
  char v79; // [sp+61h] [bp-9Fh]@3
  char v80; // [sp+64h] [bp-9Ch]@3
  char v81; // [sp+65h] [bp-9Bh]@3
  char v82; // [sp+68h] [bp-98h]@3
  char v83; // [sp+69h] [bp-97h]@3
  char v84; // [sp+6Ch] [bp-94h]@3
  char v85; // [sp+6Dh] [bp-93h]@3
  char v86; // [sp+70h] [bp-90h]@3
  char v87; // [sp+71h] [bp-8Fh]@3
  char v88; // [sp+74h] [bp-8Ch]@3
  char v89; // [sp+75h] [bp-8Bh]@3
  char v90; // [sp+78h] [bp-88h]@3
  char v91; // [sp+79h] [bp-87h]@3
  char v92; // [sp+7Ch] [bp-84h]@3
  char v93; // [sp+7Dh] [bp-83h]@3
  char v94; // [sp+80h] [bp-80h]@3
  char v95; // [sp+81h] [bp-7Fh]@3
  char v96; // [sp+84h] [bp-7Ch]@2
  char v97; // [sp+85h] [bp-7Bh]@2
  char v98; // [sp+88h] [bp-78h]@2
  char v99; // [sp+89h] [bp-77h]@2
  char v100; // [sp+8Ch] [bp-74h]@2
  char v101; // [sp+8Dh] [bp-73h]@2
  char v102; // [sp+90h] [bp-70h]@1
  char v103; // [sp+91h] [bp-6Fh]@1
  char v104; // [sp+94h] [bp-6Ch]@1
  char v105; // [sp+95h] [bp-6Bh]@1
  char v106; // [sp+98h] [bp-68h]@1
  char v107; // [sp+99h] [bp-67h]@1
  char v108; // [sp+9Ch] [bp-64h]@1
  char v109; // [sp+9Dh] [bp-63h]@1
  char v110; // [sp+A0h] [bp-60h]@1
  char v111; // [sp+A1h] [bp-5Fh]@1
  char v112; // [sp+A4h] [bp-5Ch]@1
  char v113; // [sp+A5h] [bp-5Bh]@1
  char v114; // [sp+A8h] [bp-58h]@1
  char v115; // [sp+A9h] [bp-57h]@1
  char v116; // [sp+ACh] [bp-54h]@1
  char v117; // [sp+ADh] [bp-53h]@1
  char v118; // [sp+B0h] [bp-50h]@1
  char v119; // [sp+B1h] [bp-4Fh]@1
  char v120; // [sp+B4h] [bp-4Ch]@1
  char v121; // [sp+B5h] [bp-4Bh]@1
  char v122; // [sp+B8h] [bp-48h]@1
  char v123; // [sp+B9h] [bp-47h]@1
  char v124; // [sp+BCh] [bp-44h]@1
  char v125; // [sp+BDh] [bp-43h]@1
  char v126; // [sp+C0h] [bp-40h]@1
  char v127; // [sp+C1h] [bp-3Fh]@1
  char v128; // [sp+C4h] [bp-3Ch]@1
  char v129; // [sp+C5h] [bp-3Bh]@1
  char v130; // [sp+C8h] [bp-38h]@1
  char v131; // [sp+C9h] [bp-37h]@1
  char v132; // [sp+CCh] [bp-34h]@1
  char v133; // [sp+CDh] [bp-33h]@1
  char v134; // [sp+D0h] [bp-30h]@1
  char v135; // [sp+D1h] [bp-2Fh]@1
  char v136; // [sp+D4h] [bp-2Ch]@1
  char v137; // [sp+D5h] [bp-2Bh]@1
  char v138; // [sp+D8h] [bp-28h]@7
  char v139; // [sp+D9h] [bp-27h]@7

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(OceanMonumentPenthouse *, BlockSource *, const BoundingBox *, signed int, signed int, signed int, signed int, signed int))(*(_DWORD *)this + 40);
  v8 = 2;
  v136 = byte_281EAF3;
  v134 = byte_281EAF3;
  v137 = byte_281EAF4;
  v135 = byte_281EAF4;
  v7(this, a2, a4, 2, -1, 2, 11, -1);
  v9 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v132 = byte_281EAF1;
  v130 = byte_281EAF1;
  v133 = byte_281EAF2;
  v131 = byte_281EAF2;
  v9(v4, v5, v6, 0);
  v10 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v128 = byte_281EAF1;
  v126 = byte_281EAF1;
  v129 = byte_281EAF2;
  v127 = byte_281EAF2;
  v10(v4, v5, v6, 12);
  v11 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v124 = byte_281EAF1;
  v122 = byte_281EAF1;
  v125 = byte_281EAF2;
  v123 = byte_281EAF2;
  v11(v4, v5, v6, 2);
  v12 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v120 = byte_281EAF1;
  v118 = byte_281EAF1;
  v121 = byte_281EAF2;
  v119 = byte_281EAF2;
  v12(v4, v5, v6, 2);
  v13 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v116 = byte_281EAF3;
  v114 = byte_281EAF3;
  v117 = byte_281EAF4;
  v115 = byte_281EAF4;
  v13(v4, v5, v6, 0);
  v14 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v112 = byte_281EAF3;
  v110 = byte_281EAF3;
  v113 = byte_281EAF4;
  v111 = byte_281EAF4;
  v14(v4, v5, v6, 13);
  v15 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v108 = byte_281EAF3;
  v106 = byte_281EAF3;
  v109 = byte_281EAF4;
  v107 = byte_281EAF4;
  v15(v4, v5, v6, 1);
  v16 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v104 = byte_281EAF3;
  v102 = byte_281EAF3;
  v105 = byte_281EAF4;
  v103 = byte_281EAF4;
  v17 = v6;
  v16(v4, v5, v6, 1);
  do
  {
    v18 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v100 = byte_281EAF9;
    v101 = byte_281EAFA;
    v18(v4, v5, &v100, 0);
    v19 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v98 = byte_281EAF9;
    v99 = byte_281EAFA;
    v19(v4, v5, &v98, 13);
    v20 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v96 = byte_281EAF9;
    v97 = byte_281EAFA;
    v20(v4, v5, &v96, v8);
    v8 += 3;
  }
  while ( v8 < 12 );
  v21 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v94 = byte_281EAF3;
  v92 = byte_281EAF3;
  v95 = byte_281EAF4;
  v93 = byte_281EAF4;
  v21(v4, v5, v17, 2);
  v22 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v90 = byte_281EAF3;
  v88 = byte_281EAF3;
  v91 = byte_281EAF4;
  v89 = byte_281EAF4;
  v22(v4, v5, v17, 9);
  v23 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v86 = byte_281EAF3;
  v84 = byte_281EAF3;
  v87 = byte_281EAF4;
  v85 = byte_281EAF4;
  v23(v4, v5, v17, 4);
  v24 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v82 = byte_281EAF3;
  v83 = byte_281EAF4;
  v24(v4, v5, &v82, 5);
  v25 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v80 = byte_281EAF3;
  v81 = byte_281EAF4;
  v25(v4, v5, &v80, 8);
  v26 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v78 = byte_281EAF3;
  v79 = byte_281EAF4;
  v26(v4, v5, &v78, 10);
  v27 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v76 = byte_281EAF3;
  v77 = byte_281EAF4;
  v27(v4, v5, &v76, 3);
  v28 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v74 = byte_281EAF5;
  v72 = byte_281EAF5;
  v75 = byte_281EAF6;
  v73 = byte_281EAF6;
  v28(v4, v5, v17, 3);
  v29 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v70 = byte_281EAF5;
  v68 = byte_281EAF5;
  v71 = byte_281EAF6;
  v69 = byte_281EAF6;
  v29(v4, v5, v17, 10);
  v30 = 6;
  v31 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v66 = byte_281EAF5;
  v64 = byte_281EAF5;
  v67 = byte_281EAF6;
  v65 = byte_281EAF6;
  v31(v4, v5, v17, 6);
  v32 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v62 = byte_281EAF3;
  v60 = byte_281EAF3;
  v63 = byte_281EAF4;
  v61 = byte_281EAF4;
  v32(v4, v5, v17, 3);
  v33 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v33(v4, v5, v17, 3);
  v34 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v34(v4, v5, v17, 3);
  v35 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v35(v4, v5, v17, 10);
  v36 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v36(v4, v5, v17, 10);
  v37 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v37(v4, v5, v17, 10);
  v38 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v58 = byte_281EAF3;
  v56 = byte_281EAF3;
  v59 = byte_281EAF4;
  v57 = byte_281EAF4;
  v38(v4, v5, v17, 5);
  v39 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v54 = byte_281EAF3;
  v52 = byte_281EAF3;
  v55 = byte_281EAF4;
  v53 = byte_281EAF4;
  v39(v4, v5, v17, 8);
  v40 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v50 = byte_281EAF5;
  v48 = byte_281EAF5;
  v51 = byte_281EAF6;
  v49 = byte_281EAF6;
  v40(v4, v5, v17, 6);
    v41 = StructurePiece::getWorldY(v4, -1);
    if ( v41 >= *(_WORD *)(j_BlockSource::getDimension(v5) + 20) )
      v42 = *(_BYTE *)(Block::mAir + 4);
    else
      v42 = word_281EAFB;
    v43 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v138 = v42;
    v139 = 0;
    v43(v4, v5, &v138, v30);
    v44 = StructurePiece::getWorldY(v4, -1);
    if ( v44 >= *(_WORD *)(j_BlockSource::getDimension(v5) + 20) )
      v45 = *(_BYTE *)(Block::mAir + 4);
      v45 = word_281EAFB;
    v46 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v138 = v45;
    v46(v4, v5, &v138, v30++);
  while ( v30 != 8 );
  return 1;
}


int __fastcall OceanMonumentPenthouse::OceanMonumentPenthouse(int result, _DWORD *a2, int a3)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 1;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = *a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)a3;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a3 + 20);
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
  *(_DWORD *)result = &off_27190E4;
  *(_BYTE *)(result + 48) = 0;
  return result;
}
