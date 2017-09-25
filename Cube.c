

int __fastcall Cube::Cube(int a1, int a2, int a3, int _R3, int a5, int a6, unsigned __int64 *a7, int a8)
{
  int v8; // ST40_4@1
  float v14; // r10@1
  __int64 v15; // kr08_8@1
  _DWORD *v16; // r6@1
  int v21; // r3@1
  int v22; // r8@3
  void *v29; // r9@4
  void *v30; // r0@4
  void *v31; // r5@6
  void *v32; // r5@6
  unsigned __int64 *v33; // r9@6
  void *v34; // r5@6
  void *v35; // r5@6
  int v36; // r5@6
  void *v37; // r7@6
  float v38; // r0@6
  void *v39; // r5@7
  void *v40; // r0@7
  void *v41; // r5@9
  PolygonQuad *v42; // r5@11 OVERLAPPED
  PolygonQuad *v43; // r6@11 OVERLAPPED
  int v45; // [sp+28h] [bp-2E8h]@4
  float v46; // [sp+2Ch] [bp-2E4h]@1
  float v47; // [sp+30h] [bp-2E0h]@1
  float v48; // [sp+34h] [bp-2DCh]@1
  float v49; // [sp+38h] [bp-2D8h]@1
  float v50; // [sp+3Ch] [bp-2D4h]@1
  signed int v51; // [sp+40h] [bp-2D0h]@3
  _DWORD *v52; // [sp+44h] [bp-2CCh]@1
  _DWORD *v53; // [sp+48h] [bp-2C8h]@1
  char v54; // [sp+4Ch] [bp-2C4h]@6
  int v55; // [sp+50h] [bp-2C0h]@6
  int v56; // [sp+54h] [bp-2BCh]@6
  int v57; // [sp+58h] [bp-2B8h]@6
  __int64 v58; // [sp+5Ch] [bp-2B4h]@6
  int v59; // [sp+64h] [bp-2ACh]@6
  int v60; // [sp+68h] [bp-2A8h]@6
  int v61; // [sp+6Ch] [bp-2A4h]@6
  __int64 v62; // [sp+70h] [bp-2A0h]@6
  int v63; // [sp+78h] [bp-298h]@6
  int v64; // [sp+7Ch] [bp-294h]@6
  int v65; // [sp+80h] [bp-290h]@6
  __int64 v66; // [sp+84h] [bp-28Ch]@6
  int v67; // [sp+8Ch] [bp-284h]@6
  int v68; // [sp+90h] [bp-280h]@6
  int v69; // [sp+94h] [bp-27Ch]@6
  __int64 v70; // [sp+98h] [bp-278h]@6
  char v71; // [sp+A0h] [bp-270h]@6
  int v72; // [sp+A4h] [bp-26Ch]@6
  int v73; // [sp+A8h] [bp-268h]@6
  int v74; // [sp+ACh] [bp-264h]@6
  __int64 v75; // [sp+B0h] [bp-260h]@6
  int v76; // [sp+B8h] [bp-258h]@6
  int v77; // [sp+BCh] [bp-254h]@6
  int v78; // [sp+C0h] [bp-250h]@6
  __int64 v79; // [sp+C4h] [bp-24Ch]@6
  int v80; // [sp+CCh] [bp-244h]@6
  int v81; // [sp+D0h] [bp-240h]@6
  int v82; // [sp+D4h] [bp-23Ch]@6
  __int64 v83; // [sp+D8h] [bp-238h]@6
  int v84; // [sp+E0h] [bp-230h]@6
  int v85; // [sp+E4h] [bp-22Ch]@6
  int v86; // [sp+E8h] [bp-228h]@6
  __int64 v87; // [sp+ECh] [bp-224h]@6
  char v88; // [sp+F4h] [bp-21Ch]@6
  int v89; // [sp+F8h] [bp-218h]@6
  int v90; // [sp+FCh] [bp-214h]@6
  int v91; // [sp+100h] [bp-210h]@6
  __int64 v92; // [sp+104h] [bp-20Ch]@6
  int v93; // [sp+10Ch] [bp-204h]@6
  int v94; // [sp+110h] [bp-200h]@6
  int v95; // [sp+114h] [bp-1FCh]@6
  __int64 v96; // [sp+118h] [bp-1F8h]@6
  int v97; // [sp+120h] [bp-1F0h]@6
  int v98; // [sp+124h] [bp-1ECh]@6
  int v99; // [sp+128h] [bp-1E8h]@6
  __int64 v100; // [sp+12Ch] [bp-1E4h]@6
  int v101; // [sp+134h] [bp-1DCh]@6
  int v102; // [sp+138h] [bp-1D8h]@6
  int v103; // [sp+13Ch] [bp-1D4h]@6
  __int64 v104; // [sp+140h] [bp-1D0h]@6
  char v105; // [sp+148h] [bp-1C8h]@6
  int v106; // [sp+14Ch] [bp-1C4h]@6
  int v107; // [sp+150h] [bp-1C0h]@6
  int v108; // [sp+154h] [bp-1BCh]@6
  __int64 v109; // [sp+158h] [bp-1B8h]@6
  int v110; // [sp+160h] [bp-1B0h]@6
  int v111; // [sp+164h] [bp-1ACh]@6
  int v112; // [sp+168h] [bp-1A8h]@6
  __int64 v113; // [sp+16Ch] [bp-1A4h]@6
  int v114; // [sp+174h] [bp-19Ch]@6
  int v115; // [sp+178h] [bp-198h]@6
  int v116; // [sp+17Ch] [bp-194h]@6
  __int64 v117; // [sp+180h] [bp-190h]@6
  int v118; // [sp+188h] [bp-188h]@6
  int v119; // [sp+18Ch] [bp-184h]@6
  int v120; // [sp+190h] [bp-180h]@6
  __int64 v121; // [sp+194h] [bp-17Ch]@6
  char v122; // [sp+19Ch] [bp-174h]@6
  int v123; // [sp+1A0h] [bp-170h]@6
  int v124; // [sp+1A4h] [bp-16Ch]@6
  int v125; // [sp+1A8h] [bp-168h]@6
  __int64 v126; // [sp+1ACh] [bp-164h]@6
  int v127; // [sp+1B4h] [bp-15Ch]@6
  int v128; // [sp+1B8h] [bp-158h]@6
  int v129; // [sp+1BCh] [bp-154h]@6
  __int64 v130; // [sp+1C0h] [bp-150h]@6
  int v131; // [sp+1C8h] [bp-148h]@6
  int v132; // [sp+1CCh] [bp-144h]@6
  int v133; // [sp+1D0h] [bp-140h]@6
  __int64 v134; // [sp+1D4h] [bp-13Ch]@6
  int v135; // [sp+1DCh] [bp-134h]@6
  int v136; // [sp+1E0h] [bp-130h]@6
  int v137; // [sp+1E4h] [bp-12Ch]@6
  __int64 v138; // [sp+1E8h] [bp-128h]@6
  char v139; // [sp+1F0h] [bp-120h]@6
  int v140; // [sp+1F4h] [bp-11Ch]@6
  int v141; // [sp+1F8h] [bp-118h]@6
  int v142; // [sp+1FCh] [bp-114h]@6
  __int64 v143; // [sp+200h] [bp-110h]@6
  int v144; // [sp+208h] [bp-108h]@6
  int v145; // [sp+20Ch] [bp-104h]@6
  int v146; // [sp+210h] [bp-100h]@6
  __int64 v147; // [sp+214h] [bp-FCh]@6
  int v148; // [sp+21Ch] [bp-F4h]@6
  int v149; // [sp+220h] [bp-F0h]@6
  int v150; // [sp+224h] [bp-ECh]@6
  __int64 v151; // [sp+228h] [bp-E8h]@6
  int v152; // [sp+230h] [bp-E0h]@6
  int v153; // [sp+234h] [bp-DCh]@6
  int v154; // [sp+238h] [bp-D8h]@6
  __int64 v155; // [sp+23Ch] [bp-D4h]@6
  char v156; // [sp+244h] [bp-CCh]@9
  int v157; // [sp+248h] [bp-C8h]@9
  int v158; // [sp+24Ch] [bp-C4h]@9
  int v159; // [sp+250h] [bp-C0h]@9
  __int64 v160; // [sp+254h] [bp-BCh]@9
  int v161; // [sp+25Ch] [bp-B4h]@9
  int v162; // [sp+260h] [bp-B0h]@9
  int v163; // [sp+264h] [bp-ACh]@9
  __int64 v164; // [sp+268h] [bp-A8h]@9
  int v165; // [sp+270h] [bp-A0h]@9
  int v166; // [sp+274h] [bp-9Ch]@9
  int v167; // [sp+278h] [bp-98h]@9
  __int64 v168; // [sp+27Ch] [bp-94h]@9
  int v169; // [sp+284h] [bp-8Ch]@9
  int v170; // [sp+288h] [bp-88h]@9
  int v171; // [sp+28Ch] [bp-84h]@9
  __int64 v172; // [sp+290h] [bp-80h]@9
  char v173; // [sp+298h] [bp-78h]@9
  int v174; // [sp+29Ch] [bp-74h]@9
  int v175; // [sp+2A0h] [bp-70h]@9
  int v176; // [sp+2A4h] [bp-6Ch]@9
  __int64 v177; // [sp+2A8h] [bp-68h]@9
  int v178; // [sp+2B0h] [bp-60h]@9
  int v179; // [sp+2B4h] [bp-5Ch]@9
  int v180; // [sp+2B8h] [bp-58h]@9
  __int64 v181; // [sp+2BCh] [bp-54h]@9
  int v182; // [sp+2C4h] [bp-4Ch]@9
  int v183; // [sp+2C8h] [bp-48h]@9
  int v184; // [sp+2CCh] [bp-44h]@9
  __int64 v185; // [sp+2D0h] [bp-40h]@9
  int v186; // [sp+2D8h] [bp-38h]@9
  int v187; // [sp+2DCh] [bp-34h]@9
  int v188; // [sp+2E0h] [bp-30h]@9
  __int64 v189; // [sp+2E4h] [bp-2Ch]@9

  v8 = a3;
  _R2 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  __asm { VMOV            S0, R3 }
  *(_DWORD *)(a1 + 12) = 0;
  LODWORD(v49) = a1 + 12;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  LODWORD(v50) = a1 + 32;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  LODWORD(v48) = a1 + 52;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  LODWORD(v46) = a1 + 72;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  v52 = (_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  v53 = (_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  LODWORD(v47) = a1 + 132;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  LODWORD(v14) = a1 + 152;
  *(_DWORD *)(LODWORD(v14) + 4) = 0;
  *(_DWORD *)(LODWORD(v14) + 8) = 0;
  v15 = *(_QWORD *)(a8 + 8);
  *(_QWORD *)(LODWORD(v14) + 20) = *(_QWORD *)a8;
  *(_DWORD *)(LODWORD(v14) + 28) = v15;
  v16 = (_DWORD *)(a1 + 132);
  *(_DWORD *)(LODWORD(v14) + 32) = HIDWORD(v15);
  __asm
  {
    VLDR            S2, [R2]
    VLDR            S4, [R2,#4]
    VADD.F32        S8, S2, S0
    VLDR            S6, [R2,#8]
  }
  _R2 = v8;
    VSUB.F32        S2, S2, S0
    VLDR            S10, [R2]
  _R4 = v8;
    VLDR            S12, [R2,#4]
    VLDR            S14, [R2,#8]
    VADD.F32        S8, S8, S10
    VMOV            R2, S2
    VADD.F32        S2, S6, S0
    VMOV            R7, S8
    VADD.F32        S8, S4, S0
    VSUB.F32        S4, S4, S0
    VSUB.F32        S0, S6, S0
    VADD.F32        S2, S2, S14
    VADD.F32        S6, S8, S12
  v21 = _R7;
  if ( !_ZF )
    v21 = _R2;
    _R2 = _R7;
  *(_DWORD *)(a1 + 12) = _R2;
  v22 = a1;
    VSTR            S4, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = v21;
    VSTR            S4, [R0,#0x24]
    VSTR            S0, [R0,#0x28]
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 1090519040;
  *(_DWORD *)(a1 + 52) = v21;
    VSTR            S6, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  *(_DWORD *)(a1 + 64) = 1090519040;
  *(_DWORD *)(a1 + 68) = 1090519040;
  *(_DWORD *)(a1 + 72) = _R2;
    VSTR            S6, [R0,#0x4C]
    VSTR            S0, [R0,#0x50]
  *(_DWORD *)(a1 + 84) = 1090519040;
  *(_DWORD *)(a1 + 88) = 0;
  *v52 = _R2;
    VSTR            S4, [R0,#0x60]
    VSTR            S2, [R0,#0x64]
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *v53 = v21;
    VSTR            S4, [R0,#0x74]
    VSTR            S2, [R0,#0x78]
  _R0 = a6;
  *(_DWORD *)(LODWORD(v14) - 28) = 0;
  *(_DWORD *)(LODWORD(v14) - 24) = 1090519040;
  *v16 = v21;
    VSTR            S6, [R8,#0x88]
    VSTR            S2, [R8,#0x8C]
  *(_DWORD *)(LODWORD(v14) - 8) = 1090519040;
  *(_DWORD *)(LODWORD(v14) - 4) = 1090519040;
  *(_DWORD *)LODWORD(v14) = _R2;
    VSTR            S6, [R10,#4]
    VSTR            S2, [R10,#8]
  *(_DWORD *)(LODWORD(v14) + 12) = 1090519040;
  *(_DWORD *)(LODWORD(v14) + 16) = 0;
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R4]
    VLDR            S6, [R4,#4]
    VLDR            S8, [R4,#8]
    VCVTR.S32.F32   S8, S8
    VCVTR.S32.F32   S6, S6
    VCVTR.S32.F32   S4, S4
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R11, S8
    VMOV            R0, S6
    VMOV            R4, S4
    VMOV            R7, S2
    VMOV            R9, S0
  v51 = _R0;
  if ( _R0 < 1 )
    v39 = operator new(0xA8u);
    PolygonQuad::PolygonQuad((PolygonQuad *)v39);
    PolygonQuad::PolygonQuad((PolygonQuad *)((char *)v39 + 84));
    v40 = *(void **)v22;
    *(_DWORD *)v22 = v39;
    *(_DWORD *)(v22 + 4) = (char *)v39 + 168;
    *(_DWORD *)(v22 + 8) = (char *)v39 + 168;
    if ( v40 )
    {
      operator delete(v40);
      v39 = *(void **)v22;
    }
    PolygonQuad::PolygonQuad(
      (int)&v173,
      *(float *)&v53,
      *(float *)&v52,
      v49,
      v50,
      COERCE_FLOAT(*a7 + _R11),
      COERCE_FLOAT(*a7 >> 32),
      *a7 + _R11 + _R4,
      (*a7 >> 32) + _R11,
      _R9,
      _R7);
    *(_BYTE *)v39 = v173;
    *((_DWORD *)v39 + 1) = v174;
    *((_DWORD *)v39 + 2) = v175;
    *((_DWORD *)v39 + 3) = v176;
    *((_QWORD *)v39 + 2) = v177;
    *((_DWORD *)v39 + 6) = v178;
    *((_DWORD *)v39 + 7) = v179;
    *((_DWORD *)v39 + 8) = v180;
    *(_QWORD *)((char *)v39 + 36) = v181;
    *((_DWORD *)v39 + 11) = v182;
    *((_DWORD *)v39 + 12) = v183;
    *((_DWORD *)v39 + 13) = v184;
    *((_QWORD *)v39 + 7) = v185;
    *((_DWORD *)v39 + 16) = v186;
    *((_DWORD *)v39 + 17) = v187;
    *((_DWORD *)v39 + 18) = v188;
    *(_QWORD *)((char *)v39 + 76) = v189;
    v41 = *(void **)v22;
      (int)&v156,
      v48,
      v46,
      v14,
      v47,
      COERCE_FLOAT(*a7 + _R11 + _R4),
      COERCE_FLOAT((*a7 >> 32) + _R11),
      *a7 + _R11 + _R4 + _R4,
      *a7 >> 32,
    *((_BYTE *)v41 + 84) = v156;
    *((_DWORD *)v41 + 22) = v157;
    *((_DWORD *)v41 + 23) = v158;
    *((_DWORD *)v41 + 24) = v159;
    *(_QWORD *)((char *)v41 + 100) = v160;
    *((_DWORD *)v41 + 27) = v161;
    *((_DWORD *)v41 + 28) = v162;
    *((_DWORD *)v41 + 29) = v163;
    *((_QWORD *)v41 + 15) = v164;
    *((_DWORD *)v41 + 32) = v165;
    *((_DWORD *)v41 + 33) = v166;
    *((_DWORD *)v41 + 34) = v167;
    *(_QWORD *)((char *)v41 + 140) = v168;
    *((_DWORD *)v41 + 37) = v169;
    *((_DWORD *)v41 + 38) = v170;
    *((_DWORD *)v41 + 39) = v171;
    *((_QWORD *)v41 + 20) = v172;
  else
    v45 = _R9;
    v29 = operator new(0x1F8u);
    PolygonQuad::PolygonQuad((PolygonQuad *)v29);
    PolygonQuad::PolygonQuad((PolygonQuad *)((char *)v29 + 84));
    PolygonQuad::PolygonQuad((PolygonQuad *)((char *)v29 + 168));
    PolygonQuad::PolygonQuad((PolygonQuad *)((char *)v29 + 252));
    PolygonQuad::PolygonQuad((PolygonQuad *)((char *)v29 + 336));
    PolygonQuad::PolygonQuad((PolygonQuad *)((char *)v29 + 420));
    v30 = *(void **)v22;
    *(_DWORD *)v22 = v29;
    *(_DWORD *)(v22 + 4) = (char *)v29 + 504;
    *(_DWORD *)(v22 + 8) = (char *)v29 + 504;
    if ( v30 )
      operator delete(v30);
      v29 = *(void **)v22;
      (int)&v139,
      *a7 + _R11 + _R4 + _R11,
      v51 + (*a7 >> 32) + _R11,
      v45,
    *(_BYTE *)v29 = v139;
    *((_DWORD *)v29 + 1) = v140;
    *((_DWORD *)v29 + 2) = v141;
    *((_DWORD *)v29 + 3) = v142;
    *((_QWORD *)v29 + 2) = v143;
    *((_DWORD *)v29 + 6) = v144;
    *((_DWORD *)v29 + 7) = v145;
    *((_DWORD *)v29 + 8) = v146;
    *(_QWORD *)((char *)v29 + 36) = v147;
    *((_DWORD *)v29 + 11) = v148;
    *((_DWORD *)v29 + 12) = v149;
    *((_DWORD *)v29 + 13) = v150;
    *((_QWORD *)v29 + 7) = v151;
    *((_DWORD *)v29 + 16) = v152;
    *((_DWORD *)v29 + 17) = v153;
    *((_DWORD *)v29 + 18) = v154;
    *(_QWORD *)((char *)v29 + 76) = v155;
    v31 = *(void **)v22;
      (int)&v122,
      COERCE_FLOAT(*a7),
      *a7 + _R11,
    *((_BYTE *)v31 + 84) = v122;
    *((_DWORD *)v31 + 22) = v123;
    *((_DWORD *)v31 + 23) = v124;
    *((_DWORD *)v31 + 24) = v125;
    *(_QWORD *)((char *)v31 + 100) = v126;
    *((_DWORD *)v31 + 27) = v127;
    *((_DWORD *)v31 + 28) = v128;
    *((_DWORD *)v31 + 29) = v129;
    *((_QWORD *)v31 + 15) = v130;
    *((_DWORD *)v31 + 32) = v131;
    *((_DWORD *)v31 + 33) = v132;
    *((_DWORD *)v31 + 34) = v133;
    *(_QWORD *)((char *)v31 + 140) = v134;
    *((_DWORD *)v31 + 37) = v135;
    *((_DWORD *)v31 + 38) = v136;
    *((_DWORD *)v31 + 39) = v137;
    *((_QWORD *)v31 + 20) = v138;
    v32 = *(void **)v22;
      (int)&v105,
      _R4 + *a7 + _R11,
    v33 = a7;
    *((_BYTE *)v32 + 168) = v105;
    *((_DWORD *)v32 + 43) = v106;
    *((_DWORD *)v32 + 44) = v107;
    *((_DWORD *)v32 + 45) = v108;
    *((_QWORD *)v32 + 23) = v109;
    *((_DWORD *)v32 + 48) = v110;
    *((_DWORD *)v32 + 49) = v111;
    *((_DWORD *)v32 + 50) = v112;
    *(_QWORD *)((char *)v32 + 204) = v113;
    *((_DWORD *)v32 + 53) = v114;
    *((_DWORD *)v32 + 54) = v115;
    *((_DWORD *)v32 + 55) = v116;
    *((_QWORD *)v32 + 28) = v117;
    *((_DWORD *)v32 + 58) = v118;
    *((_DWORD *)v32 + 59) = v119;
    *((_DWORD *)v32 + 60) = v120;
    *(_QWORD *)((char *)v32 + 244) = v121;
    v34 = *(void **)v22;
      (int)&v88,
      COERCE_FLOAT(*v33 + _R11 + _R4),
      COERCE_FLOAT((*v33 >> 32) + _R11),
      _R4 + *v33 + _R11 + _R4,
      *v33 >> 32,
    *((_BYTE *)v34 + 252) = v88;
    *((_DWORD *)v34 + 64) = v89;
    *((_DWORD *)v34 + 65) = v90;
    *((_DWORD *)v34 + 66) = v91;
    *(_QWORD *)((char *)v34 + 268) = v92;
    *((_DWORD *)v34 + 69) = v93;
    *((_DWORD *)v34 + 70) = v94;
    *((_DWORD *)v34 + 71) = v95;
    *((_QWORD *)v34 + 36) = v96;
    *((_DWORD *)v34 + 74) = v97;
    *((_DWORD *)v34 + 75) = v98;
    *((_DWORD *)v34 + 76) = v99;
    *(_QWORD *)((char *)v34 + 308) = v100;
    *((_DWORD *)v34 + 79) = v101;
    *((_DWORD *)v34 + 80) = v102;
    *((_DWORD *)v34 + 81) = v103;
    *((_QWORD *)v34 + 41) = v104;
    v35 = *(void **)v22;
      (int)&v71,
      COERCE_FLOAT(*v33 + _R11),
      *v33 + _R11 + _R4,
      (*v33 >> 32) + _R11 + v51,
    *((_BYTE *)v35 + 336) = v71;
    *((_DWORD *)v35 + 85) = v72;
    *((_DWORD *)v35 + 86) = v73;
    *((_DWORD *)v35 + 87) = v74;
    *((_QWORD *)v35 + 44) = v75;
    *((_DWORD *)v35 + 90) = v76;
    *((_DWORD *)v35 + 91) = v77;
    *((_DWORD *)v35 + 92) = v78;
    *(_QWORD *)((char *)v35 + 372) = v79;
    *((_DWORD *)v35 + 95) = v80;
    *((_DWORD *)v35 + 96) = v81;
    *((_DWORD *)v35 + 97) = v82;
    *((_QWORD *)v35 + 49) = v83;
    *((_DWORD *)v35 + 100) = v84;
    *((_DWORD *)v35 + 101) = v85;
    *((_DWORD *)v35 + 102) = v86;
    *(_QWORD *)((char *)v35 + 412) = v87;
    v36 = _R7;
    v37 = *(void **)v22;
    LODWORD(v38) = *a7 + _R4 + 2 * _R11;
      (int)&v54,
      v38,
      LODWORD(v38) + _R4,
      v51 + (*v33 >> 32) + _R11,
      v36);
    *((_BYTE *)v37 + 420) = v54;
    *((_DWORD *)v37 + 106) = v55;
    *((_DWORD *)v37 + 107) = v56;
    *((_DWORD *)v37 + 108) = v57;
    *(_QWORD *)((char *)v37 + 436) = v58;
    *((_DWORD *)v37 + 111) = v59;
    *((_DWORD *)v37 + 112) = v60;
    *((_DWORD *)v37 + 113) = v61;
    *((_QWORD *)v37 + 57) = v62;
    *((_DWORD *)v37 + 116) = v63;
    *((_DWORD *)v37 + 117) = v64;
    *((_DWORD *)v37 + 118) = v65;
    *(_QWORD *)((char *)v37 + 476) = v66;
    *((_DWORD *)v37 + 121) = v67;
    *((_DWORD *)v37 + 122) = v68;
    *((_DWORD *)v37 + 123) = v69;
    *((_QWORD *)v37 + 62) = v70;
  if ( a5 == 1 )
    for ( *(_QWORD *)&v42 = *(_QWORD *)v22; v43 != v42; v42 = (PolygonQuad *)((char *)v42 + 84) )
      PolygonQuad::mirror(v42);
  return v22;
}


int __fastcall Cube::expandAABB(int result, AABB *a2)
{
  PolygonQuad *v2; // r5@1 OVERLAPPED
  PolygonQuad *v3; // r6@1 OVERLAPPED
  AABB *i; // r4@1

  *(_QWORD *)&v2 = *(_QWORD *)result;
  for ( i = a2; v3 != v2; v2 = (PolygonQuad *)((char *)v2 + 84) )
    result = PolygonQuad::expandAABB(v2, i);
  return result;
}


int __fastcall Cube::compile(int result, Tessellator *a2, float a3)
{
  __int64 v3; // r6@1
  float v4; // r4@1
  Tessellator *i; // r5@1

  v3 = *(_QWORD *)result;
  v4 = a3;
  for ( i = a2; HIDWORD(v3) != (_DWORD)v3; LODWORD(v3) = v3 + 84 )
    result = PolygonQuad::compile((PolygonQuad *)v3, i, v4);
  return result;
}


int __fastcall Cube::Cube(int a1)
{
  int v1; // r4@1
  int v2; // lr@1
  __int64 v3; // kr00_8@1
  int v4; // r1@1
  void *v5; // r0@1

  v1 = a1;
  v2 = a1 + 172;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  v3 = *(_QWORD *)&qword_283E614;
  v4 = unk_283E61C;
  *(_DWORD *)v2 = Color::WHITE;
  *(_QWORD *)(v2 + 4) = v3;
  *(_DWORD *)(a1 + 184) = v4;
  _aeabi_memclr4(a1 + 12, 160);
  v5 = *(void **)v1;
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  if ( v5 )
    operator delete(v5);
  return v1;
}
