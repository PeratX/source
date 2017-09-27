

void __fastcall MineshaftRoom::~MineshaftRoom(MineshaftRoom *this)
{
  MineshaftRoom::~MineshaftRoom(this);
}


void __fastcall MineshaftRoom::~MineshaftRoom(MineshaftRoom *this)
{
  MineshaftRoom *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27237E4;
  v2 = (void *)*((_DWORD *)this + 11);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall MineshaftRoom::addChildren(int a1, int a2, int a3, Random *a4)
{
  Random *v4; // r11@1
  int v6; // r6@1
  signed int result; // r0@1
  int v12; // r1@3 OVERLAPPED
  int v13; // r0@3
  int v14; // r2@3
  signed int v15; // r2@3
  int v16; // r4@3
  signed int v17; // r5@3
  int v18; // r10@6
  int v19; // r6@7
  unsigned int v20; // r1@9
  int v21; // r9@11
  int v22; // r5@12
  unsigned int v23; // r1@12
  int v24; // r0@12
  __int64 v25; // kr08_8@13
  __int64 v26; // kr10_8@13
  int v27; // r6@13
  __int64 v28; // kr18_8@13
  int v29; // r6@19
  unsigned int v30; // r1@21
  int v31; // r6@23
  int v32; // r0@24
  __int64 v33; // kr20_8@25
  __int64 v34; // kr28_8@25
  int v35; // r5@25
  __int64 v36; // r0@25
  int v37; // r4@32
  signed int v38; // r5@32
  signed int *v39; // r9@33
  int v40; // r6@33
  unsigned int v41; // r1@35
  int v42; // r6@37
  int v43; // r5@38
  unsigned int v44; // r1@38
  int v45; // r0@38
  __int64 v46; // kr30_8@39
  __int64 v47; // kr38_8@39
  int v48; // r3@39
  __int64 v49; // r0@39
  unsigned int v50; // r1@45
  int v51; // r6@47
  int v52; // r0@48
  __int64 v53; // kr40_8@49
  __int64 v54; // kr48_8@49
  int v55; // r3@49
  __int64 v56; // r0@49
  int v57; // r2@55
  int v58; // r3@55
  unsigned int v59; // r5@55
  int v60; // r6@56
  unsigned int v61; // r1@58
  int v62; // r6@60
  __int64 v63; // r4@61
  unsigned int v64; // r1@61
  int v65; // r0@61
  __int64 v66; // kr50_8@62
  __int64 v67; // kr58_8@62
  int v68; // r5@62
  __int64 v69; // r0@62
  unsigned int v70; // r1@68
  int v71; // r6@70
  int v72; // r0@71
  __int64 v73; // kr60_8@72
  __int64 v74; // kr68_8@72
  int v75; // r5@72
  __int64 v76; // r0@72
  int v77; // r3@78
  unsigned int v78; // r5@78
  int v79; // r4@80
  unsigned int v80; // r1@82
  int v81; // r4@84
  int v82; // r5@85
  int v83; // r6@85
  unsigned int v84; // r1@85
  int v85; // r0@85
  __int64 v86; // kr70_8@86
  __int64 v87; // kr78_8@86
  int v88; // r5@86
  __int64 v89; // r0@86
  int v90; // r4@91
  unsigned int v91; // r1@93
  int v92; // r8@95
  int v93; // r0@96
  __int64 v94; // kr80_8@97
  __int64 v95; // kr88_8@97
  int v96; // r5@97
  __int64 v97; // kr90_8@97
  unsigned __int64 *v98; // [sp+14h] [bp-9Ch]@79
  unsigned __int64 *v99; // [sp+18h] [bp-98h]@6
  unsigned __int64 *v100; // [sp+18h] [bp-98h]@33
  unsigned __int64 *v101; // [sp+18h] [bp-98h]@56
  unsigned int v102; // [sp+1Ch] [bp-94h]@7
  int v103; // [sp+20h] [bp-90h]@3
  int v104; // [sp+24h] [bp-8Ch]@1
  int v105; // [sp+28h] [bp-88h]@86
  __int64 v106; // [sp+2Ch] [bp-84h]@86
  int v107; // [sp+34h] [bp-7Ch]@86
  __int64 v108; // [sp+38h] [bp-78h]@86
  int v109; // [sp+40h] [bp-70h]@62
  __int64 v110; // [sp+44h] [bp-6Ch]@62
  int v111; // [sp+4Ch] [bp-64h]@62
  __int64 v112; // [sp+50h] [bp-60h]@62
  __int64 v113; // [sp+58h] [bp-58h]@39
  int v114; // [sp+60h] [bp-50h]@39
  __int64 v115; // [sp+64h] [bp-4Ch]@39
  int v116; // [sp+6Ch] [bp-44h]@39
  __int64 v117; // [sp+70h] [bp-40h]@13
  int v118; // [sp+78h] [bp-38h]@13
  __int64 v119; // [sp+7Ch] [bp-34h]@13
  int v120; // [sp+84h] [bp-2Ch]@13

  v4 = a4;
  _R7 = a1;
  v6 = a3;
  v104 = a2;
  result = j_Random::_genRandInt32(a4);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, [R7,#0x28]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    *(_QWORD *)&v12 = *(_QWORD *)(_R7 + 4);
    v13 = *(_QWORD *)(_R7 + 16);
    v15 = (*(_QWORD *)(_R7 + 16) >> 32) - 3 - v14;
    v16 = v13 + 1;
    v103 = *(_DWORD *)(_R7 + 32);
    v17 = v13 + 1 - v12;
    if ( v15 < 1 )
      v15 = 1;
    if ( v17 < 1 )
    {
      v102 = v15;
      v18 = v6;
    }
    else
      v99 = (unsigned __int64 *)(_R7 + 44);
      if ( v15 )
      {
        v19 = 0;
        v102 = v15;
        while ( 1 )
        {
          if ( v16 == v12 )
          {
            v20 = 0;
          }
          else
            v20 = j_Random::_genRandInt32(v4) % v17;
            v16 = *(_DWORD *)(_R7 + 4);
            v13 = *(_DWORD *)(_R7 + 16);
          v21 = v20 + v19;
          if ( (signed int)(v20 + v19 + 3) > v13 + 1 - v16 )
            break;
          v22 = *(_DWORD *)(_R7 + 8);
          v23 = j_Random::_genRandInt32(v4) % v102;
          v24 = j_MineshaftPiece::generateAndAddPiece(
                  _R7,
                  v104,
                  v18,
                  (int)v4,
                  v16 + v21,
                  v23 + v22 + 1,
                  *(_DWORD *)(_R7 + 12) - 1,
                  2,
                  v103);
          if ( v24 )
            v25 = *(_QWORD *)(v24 + 4);
            v26 = *(_QWORD *)(v24 + 16);
            v27 = *(_DWORD *)(_R7 + 12);
            v117 = *(_QWORD *)(v24 + 4);
            v118 = v27;
            v119 = v26;
            v120 = v27 + 1;
            v28 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v28 == HIDWORD(v28) )
            {
              j_std::vector<BoundingBox,std::allocator<BoundingBox>>::_M_emplace_back_aux<BoundingBox>(v99, (int)&v117);
            }
            else
              *(_QWORD *)v28 = 0LL;
              *(_DWORD *)(v28 + 8) = 0;
              *(_DWORD *)(v28 + 12) = 0;
              *(_DWORD *)(v28 + 16) = 0;
              *(_QWORD *)v28 = v25;
              *(_DWORD *)(v28 + 8) = v27;
              *(_QWORD *)(v28 + 12) = v26;
              *(_DWORD *)(v28 + 20) = v27 + 1;
              *(_DWORD *)(_R7 + 48) += 24;
          v13 = *(_DWORD *)(_R7 + 16);
          v19 = v21 + 4;
          v12 = *(_DWORD *)(_R7 + 4);
          v16 = v13 + 1;
          v17 = v13 + 1 - v12;
          if ( v21 + 4 >= v17 )
            goto LABEL_32;
        }
        v12 = v16;
      }
      else
        v29 = 0;
        v102 = 0;
            v30 = 0;
            v30 = j_Random::_genRandInt32(v4) % v17;
          v31 = v29 + v30;
          if ( v31 + 3 > v13 + 1 - v16 )
          v32 = j_MineshaftPiece::generateAndAddPiece(
                  v16 + v31,
                  *(_QWORD *)(_R7 + 8) + 1,
                  (*(_QWORD *)(_R7 + 8) >> 32) - 1,
          if ( v32 )
            v33 = *(_QWORD *)(v32 + 4);
            v34 = *(_QWORD *)(v32 + 16);
            v35 = *(_DWORD *)(_R7 + 12);
            v117 = *(_QWORD *)(v32 + 4);
            v118 = v35;
            v119 = v34;
            v120 = v35 + 1;
            v36 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v36 == HIDWORD(v36) )
              *(_QWORD *)v36 = 0LL;
              *(_DWORD *)(v36 + 8) = 0;
              *(_DWORD *)(v36 + 12) = 0;
              *(_DWORD *)(v36 + 16) = 0;
              *(_QWORD *)v36 = v33;
              *(_DWORD *)(v36 + 8) = v35;
              *(_QWORD *)(v36 + 12) = v34;
              *(_DWORD *)(v36 + 20) = v35 + 1;
          v29 = v31 + 4;
          if ( v29 >= v17 )
LABEL_32:
    v37 = v13 + 1;
    v38 = v13 + 1 - v12;
    if ( v38 <= 0 )
      v39 = (signed int *)(_R7 + 24);
      v100 = (unsigned __int64 *)(_R7 + 44);
      v40 = 0;
      if ( v102 )
        do
          if ( v37 == v12 )
            v41 = 0;
            v41 = j_Random::_genRandInt32(v4) % v38;
            v37 = *(_DWORD *)(_R7 + 4);
          v42 = v40 + v41;
          if ( v42 + 3 > v13 + 1 - v37 )
          v43 = *(_DWORD *)(_R7 + 8);
          v44 = j_Random::_genRandInt32(v4) % v102;
          v45 = j_MineshaftPiece::generateAndAddPiece(
                  v37 + v42,
                  v44 + v43 + 1,
                  *(_DWORD *)(_R7 + 24) + 1,
                  0,
          if ( v45 )
            v46 = *(_QWORD *)(v45 + 4);
            v47 = *(_QWORD *)(v45 + 16);
            v48 = *(_DWORD *)(_R7 + 24);
            v113 = *(_QWORD *)(v45 + 4);
            v114 = v48 - 1;
            v115 = v47;
            v116 = v48;
            v49 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v49 == HIDWORD(v49) )
              j_std::vector<BoundingBox,std::allocator<BoundingBox>>::_M_emplace_back_aux<BoundingBox>(v100, (int)&v113);
              *(_QWORD *)v49 = 0LL;
              *(_DWORD *)(v49 + 8) = 0;
              *(_DWORD *)(v49 + 12) = 0;
              *(_DWORD *)(v49 + 16) = 0;
              *(_QWORD *)v49 = v46;
              *(_DWORD *)(v49 + 8) = v48 - 1;
              *(_QWORD *)(v49 + 12) = v47;
              *(_DWORD *)(v49 + 20) = v48;
          v40 = v42 + 4;
          v37 = v13 + 1;
          v38 = v13 + 1 - v12;
        while ( v40 < v38 );
            v50 = 0;
            v50 = j_Random::_genRandInt32(v4) % v38;
          v51 = v40 + v50;
          if ( v51 + 3 > v13 + 1 - v37 )
          v52 = j_MineshaftPiece::generateAndAddPiece(
                  v37 + v51,
                  *(_DWORD *)(_R7 + 8) + 1,
          if ( v52 )
            v53 = *(_QWORD *)(v52 + 4);
            v54 = *(_QWORD *)(v52 + 16);
            v55 = *(_DWORD *)(_R7 + 24);
            v113 = *(_QWORD *)(v52 + 4);
            v114 = v55 - 1;
            v115 = v54;
            v116 = v55;
            v56 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v56 == HIDWORD(v56) )
              *(_QWORD *)v56 = 0LL;
              *(_DWORD *)(v56 + 8) = 0;
              *(_DWORD *)(v56 + 12) = 0;
              *(_DWORD *)(v56 + 16) = 0;
              *(_QWORD *)v56 = v53;
              *(_DWORD *)(v56 + 8) = v55 - 1;
              *(_QWORD *)(v56 + 12) = v54;
              *(_DWORD *)(v56 + 20) = v55;
          v40 = v51 + 4;
    result = *v39;
    v57 = *(_DWORD *)(_R7 + 12);
    v58 = *v39 + 1;
    v59 = v58 - v57;
    if ( v58 - v57 >= 1 )
      v101 = (unsigned __int64 *)(_R7 + 44);
      v60 = 0;
          if ( v58 == v57 )
            v61 = 0;
            v57 = v58;
            v61 = j_Random::_genRandInt32(v4) % v59;
            v57 = *(_DWORD *)(_R7 + 12);
            result = *v39;
          v62 = v60 + v61;
          if ( v62 + 3 > result + 1 - v57 )
          v63 = *(_QWORD *)(_R7 + 4);
          v64 = j_Random::_genRandInt32(v4) % v102;
          v65 = j_MineshaftPiece::generateAndAddPiece(
                  v63 - 1,
                  v64 + HIDWORD(v63) + 1,
                  *(_DWORD *)(_R7 + 12) + v62,
                  1,
          if ( v65 )
            v66 = *(_QWORD *)(v65 + 8);
            v67 = *(_QWORD *)(v65 + 20);
            v109 = *(_DWORD *)(_R7 + 4);
            v68 = v109;
            v110 = v66;
            v111 = v109 + 1;
            v112 = v67;
            v69 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v69 == HIDWORD(v69) )
              j_std::vector<BoundingBox,std::allocator<BoundingBox>>::_M_emplace_back_aux<BoundingBox>(v101, (int)&v109);
              *(_QWORD *)v69 = 0LL;
              *(_DWORD *)(v69 + 8) = 0;
              *(_DWORD *)(v69 + 12) = 0;
              *(_DWORD *)(v69 + 16) = 0;
              *(_DWORD *)v69 = v68;
              *(_QWORD *)(v69 + 4) = v66;
              *(_DWORD *)(v69 + 12) = v68 + 1;
              *(_QWORD *)(v69 + 16) = v67;
          result = *v39;
          v60 = v62 + 4;
          v57 = *(_DWORD *)(_R7 + 12);
          v58 = *v39 + 1;
          v59 = v58 - v57;
        while ( v60 < v58 - v57 );
            v70 = 0;
            v70 = j_Random::_genRandInt32(v4) % v59;
            v58 = *(_DWORD *)(_R7 + 12);
          v71 = v60 + v70;
          if ( v71 + 3 > result + 1 - v58 )
          v72 = j_MineshaftPiece::generateAndAddPiece(
                  *(_QWORD *)(_R7 + 4) - 1,
                  (*(_QWORD *)(_R7 + 4) >> 32) + 1,
                  v58 + v71,
          if ( v72 )
            v73 = *(_QWORD *)(v72 + 8);
            v74 = *(_QWORD *)(v72 + 20);
            v75 = v109;
            v110 = v73;
            v112 = v74;
            v76 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v76 == HIDWORD(v76) )
              *(_QWORD *)v76 = 0LL;
              *(_DWORD *)(v76 + 8) = 0;
              *(_DWORD *)(v76 + 12) = 0;
              *(_DWORD *)(v76 + 16) = 0;
              *(_DWORD *)v76 = v75;
              *(_QWORD *)(v76 + 4) = v73;
              *(_DWORD *)(v76 + 12) = v75 + 1;
              *(_QWORD *)(v76 + 16) = v74;
          v60 = v71 + 4;
          if ( v60 >= v58 - v57 )
            goto LABEL_78;
        v57 = v58;
LABEL_78:
    v77 = result + 1;
    v78 = result + 1 - v57;
    if ( (signed int)v78 >= 1 )
      v98 = (unsigned __int64 *)(_R7 + 44);
        v79 = 0;
          if ( v77 == v57 )
            v80 = 0;
            v80 = j_Random::_genRandInt32(v4) % v78;
            v77 = *(_DWORD *)(_R7 + 12);
          v81 = v79 + v80;
          result = result + 1 - v77;
          if ( v81 + 3 > result )
          v82 = *(_DWORD *)(_R7 + 8);
          v83 = *(_DWORD *)(_R7 + 16);
          v84 = j_Random::_genRandInt32(v4) % v102;
          v85 = j_MineshaftPiece::generateAndAddPiece(
                  v83 + 1,
                  v84 + v82 + 1,
                  *(_DWORD *)(_R7 + 12) + v81,
                  3,
          if ( v85 )
            v86 = *(_QWORD *)(v85 + 8);
            v87 = *(_QWORD *)(v85 + 20);
            v88 = *(_DWORD *)(_R7 + 16);
            v105 = v88 - 1;
            v106 = v86;
            v107 = v88;
            v108 = v87;
            v89 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v89 == HIDWORD(v89) )
              j_std::vector<BoundingBox,std::allocator<BoundingBox>>::_M_emplace_back_aux<BoundingBox>(v98, (int)&v105);
              *(_QWORD *)v89 = 0LL;
              *(_DWORD *)(v89 + 8) = 0;
              *(_DWORD *)(v89 + 12) = 0;
              *(_DWORD *)(v89 + 16) = 0;
              *(_DWORD *)v89 = v88 - 1;
              *(_QWORD *)(v89 + 4) = v86;
              *(_DWORD *)(v89 + 12) = v88;
              *(_QWORD *)(v89 + 16) = v87;
          v79 = v81 + 4;
          v77 = *v39 + 1;
          v78 = v77 - v57;
        while ( v79 < v77 - v57 );
        v90 = 0;
            v91 = 0;
            v91 = j_Random::_genRandInt32(v4) % v78;
          v92 = v91 + v90;
          if ( (signed int)(v91 + v90 + 3) > result )
          v93 = j_MineshaftPiece::generateAndAddPiece(
                  *(_DWORD *)(_R7 + 16) + 1,
                  v77 + v92,
          if ( v93 )
            v94 = *(_QWORD *)(v93 + 8);
            v95 = *(_QWORD *)(v93 + 20);
            v96 = *(_DWORD *)(_R7 + 16);
            v105 = v96 - 1;
            v106 = v94;
            v107 = v96;
            v108 = v95;
            v97 = *(_QWORD *)(_R7 + 48);
            if ( (_DWORD)v97 == HIDWORD(v97) )
              *(_QWORD *)v97 = 0LL;
              *(_DWORD *)(v97 + 8) = 0;
              *(_DWORD *)(v97 + 12) = 0;
              *(_DWORD *)(v97 + 16) = 0;
              *(_DWORD *)v97 = v96 - 1;
              *(_QWORD *)(v97 + 4) = v94;
              *(_DWORD *)(v97 + 12) = v96;
              *(_QWORD *)(v97 + 16) = v95;
          v90 = v92 + 4;
        while ( v92 + 4 < v77 - v57 );
  return result;
}


signed int __fastcall MineshaftRoom::postProcess(MineshaftRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r11@1
  BlockSource *v5; // r5@1
  MineshaftRoom *v6; // r8@1
  signed int v7; // r7@1
  __int64 v8; // kr00_8@2
  int v9; // r12@2
  __int64 v10; // kr08_8@2
  int v11; // r9@2
  void (__fastcall *v12)(MineshaftRoom *, BlockSource *, const BoundingBox *, _DWORD); // r10@2
  int v13; // r3@2
  __int64 v14; // kr18_8@2
  __int64 v15; // kr20_8@2
  void (__fastcall *v16)(MineshaftRoom *, BlockSource *, const BoundingBox *, int); // r10@2
  int v17; // r9@2
  __int64 v18; // r0@2
  int v19; // r9@3
  unsigned int v20; // r10@3
  int v21; // r3@4
  int v22; // r0@4
  int v23; // r2@4
  int v24; // r4@4
  void (__fastcall *v25)(MineshaftRoom *, BlockSource *, const BoundingBox *, int); // r7@4
  int v26; // r0@4
  __int64 v27; // kr30_8@5
  int v28; // r2@5
  int v29; // r7@5
  __int64 v30; // kr40_8@5
  char v32; // [sp+28h] [bp-40h]@5
  char v33; // [sp+2Ch] [bp-3Ch]@4
  char v34; // [sp+2Dh] [bp-3Bh]@4
  char v35; // [sp+30h] [bp-38h]@4
  char v36; // [sp+31h] [bp-37h]@4
  char v37; // [sp+34h] [bp-34h]@2
  char v38; // [sp+35h] [bp-33h]@2
  char v39; // [sp+38h] [bp-30h]@2
  char v40; // [sp+39h] [bp-2Fh]@2
  char v41; // [sp+3Ch] [bp-2Ch]@2
  char v42; // [sp+3Dh] [bp-2Bh]@2
  char v43; // [sp+40h] [bp-28h]@2
  char v44; // [sp+41h] [bp-27h]@2

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = 0;
  if ( !j_StructurePiece::edgesLiquid(this, a2, a4) )
  {
    v8 = *((_QWORD *)v6 + 1);
    v9 = *((_DWORD *)v6 + 4);
    v10 = *(_QWORD *)v6;
    v11 = *((_DWORD *)v6 + 6);
    v12 = *(void (__fastcall **)(MineshaftRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_QWORD *)v6 + 40);
    v43 = *(_BYTE *)(Block::mDirt + 4);
    v41 = BlockID::AIR;
    v44 = 0;
    v42 = 0;
    v12(v6, v5, v4, HIDWORD(v10));
    v13 = *(_QWORD *)v6 >> 32;
    v14 = *((_QWORD *)v6 + 1);
    v15 = *((_QWORD *)v6 + 2);
    v16 = *(void (__fastcall **)(MineshaftRoom *, BlockSource *, const BoundingBox *, int))(*(_QWORD *)v6 + 40);
    v17 = *((_DWORD *)v6 + 6);
    v39 = BlockID::AIR;
    v37 = BlockID::AIR;
    v40 = 0;
    v38 = 0;
    v16(v6, v5, v4, v13);
    v18 = *(_QWORD *)((char *)v6 + 44);
    if ( HIDWORD(v18) != (_DWORD)v18 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = *(_DWORD *)(v18 + v19);
        v22 = v18 + v19;
        v23 = *(_DWORD *)(v22 + 8);
        v24 = *(_QWORD *)(v22 + 12) >> 32;
        v25 = *(void (__fastcall **)(MineshaftRoom *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
        v26 = *(_DWORD *)(v22 + 20);
        v35 = BlockID::AIR;
        v33 = BlockID::AIR;
        v36 = 0;
        v34 = 0;
        v25(v6, v5, v4, v21);
        v18 = *(_QWORD *)((char *)v6 + 44);
        v19 += 24;
        ++v20;
      }
      while ( v20 < -1431655765 * ((HIDWORD(v18) - (signed int)v18) >> 3) );
    }
    v27 = *(_QWORD *)((char *)v6 + 4);
    v29 = *(_QWORD *)((char *)v6 + 12) >> 32;
    v28 = *(_QWORD *)((char *)v6 + 12);
    v30 = *(_QWORD *)((char *)v6 + 20);
    v32 = BlockID::AIR;
    j_StructurePiece::generateUpperHalfSphere(
      (int)v6,
      v5,
      (int)v4,
      v27,
      HIDWORD(v27) + 4,
      v28,
      v29,
      v30,
      SHIDWORD(v30),
      &v32);
    v7 = 1;
  }
  return v7;
}


MineshaftRoom *__fastcall MineshaftRoom::~MineshaftRoom(MineshaftRoom *this)
{
  MineshaftRoom *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27237E4;
  v2 = (void *)*((_DWORD *)this + 11);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


int __fastcall MineshaftRoom::MineshaftRoom(int result, int a2)
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
  *(_DWORD *)result = &off_27237E4;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  return result;
}


int __fastcall MineshaftRoom::moveBoundingBox(int result, int a2, int a3, int a4)
{
  int i; // r12@1
  int v5; // lr@1

  *(_DWORD *)(result + 4) += a2;
  *(_DWORD *)(result + 8) += a3;
  *(_DWORD *)(result + 12) += a4;
  *(_DWORD *)(result + 16) += a2;
  *(_DWORD *)(result + 20) += a3;
  *(_DWORD *)(result + 24) += a4;
  v5 = *(_QWORD *)(result + 44) >> 32;
  for ( i = *(_QWORD *)(result + 44); i != v5; i += 24 )
  {
    *(_DWORD *)i += a2;
    *(_DWORD *)(i + 4) += a3;
    *(_DWORD *)(i + 8) += a4;
    *(_DWORD *)(i + 12) += a2;
    *(_DWORD *)(i + 16) += a3;
    result = *(_DWORD *)(i + 20) + a4;
    *(_DWORD *)(i + 20) = result;
  }
  return result;
}


int __fastcall MineshaftRoom::MineshaftRoom(int a1, int a2, int a3, Random *a4, int a5, int a6)
{
  Random *v6; // r5@1
  int v7; // r4@1
  unsigned int v8; // r0@1
  unsigned int v9; // r7@1
  unsigned int v10; // kr08_4@1
  unsigned int v11; // r6@1
  unsigned int v12; // r0@1
  int v13; // lr@1
  int v14; // r2@1

  v6 = a4;
  v7 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = a3;
  *(_BYTE *)(a1 + 36) = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 37) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 38) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 39) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)a1 = &off_27237E4;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  v8 = j_Random::_genRandInt32(a4);
  v9 = v8;
  v10 = v8;
  v11 = j_Random::_genRandInt32(v6);
  v12 = j_Random::_genRandInt32(v6);
  v13 = v7 + 4;
  *(_DWORD *)v13 = a5;
  *(_DWORD *)(v13 + 4) = 50;
  *(_DWORD *)(v13 + 8) = a6;
  v14 = v7 + 16;
  *(_DWORD *)v14 = v12 % 6 + a5 + 7;
  *(_DWORD *)(v14 + 4) = v11 % 6 + 54;
  *(_DWORD *)(v14 + 8) = v9 - 6 * (v10 / 6) + a6 + 7;
  return v7;
}


signed int __fastcall MineshaftRoom::getType(MineshaftRoom *this)
{
  return 1297306189;
}
