

int __fastcall AmbientOcclusionCalculator::setTouchEdge(int result, bool a2)
{
  *(_BYTE *)(result + 2) = a2;
  return result;
}


int __fastcall AmbientOcclusionCalculator::_blend(int result, int a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf@1
  int v7; // r7@6
  int v8; // r5@10
  int v9; // lr@10
  unsigned int v10; // r1@14

  v6 = *(_BYTE *)a3 == 0;
  if ( !*(_BYTE *)a3 )
    v6 = *(_BYTE *)(a3 + 1) == 0;
  if ( v6 )
  {
    *(_BYTE *)a3 = *(_BYTE *)a6;
    *(_BYTE *)(a3 + 1) = *(_BYTE *)(a6 + 1);
  }
  v7 = *(_BYTE *)a4;
  if ( !*(_BYTE *)a4 )
    if ( *(_BYTE *)(a4 + 1) )
    {
      v7 = 0;
    }
    else
      v7 = *(_BYTE *)a6;
      *(_BYTE *)a4 = v7;
      *(_BYTE *)(a4 + 1) = *(_BYTE *)(a6 + 1);
  v8 = *(_BYTE *)a5;
  v9 = *(_BYTE *)(a5 + 1);
  if ( !*(_BYTE *)a5 )
    if ( *(_BYTE *)(a5 + 1) )
      v8 = 0;
      v8 = *(_BYTE *)a6;
      *(_BYTE *)a5 = v8;
      v9 = *(_BYTE *)(a6 + 1);
      *(_BYTE *)(a5 + 1) = v9;
      v7 = *(_BYTE *)a4;
  v10 = (*(_BYTE *)(a6 + 1) + *(_BYTE *)(a3 + 1) + (unsigned int)*(_BYTE *)(a4 + 1) + v9) >> 2;
  *(_BYTE *)result = (v7 + *(_BYTE *)a3 + v8 + (unsigned int)*(_BYTE *)a6) >> 2;
  *(_BYTE *)(result + 1) = v10;
  return result;
}


int __fastcall AmbientOcclusionCalculator::setBaseColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 40) = v2;
  *(_DWORD *)(result + 44) = v3;
  *(_DWORD *)(result + 48) = v4;
  *(_DWORD *)(result + 52) = v5;
  return result;
}


signed int __fastcall AmbientOcclusionCalculator::isTranslucent(AmbientOcclusionCalculator *this, const BlockPos *a2)
{
  Block *v2; // r0@1
  Material *v3; // r0@1
  signed int result; // r0@1

  v2 = (Block *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 7), a2);
  v3 = (Material *)Block::getMaterial(v2);
  _R0 = Material::getTranslucency(v3);
  __asm { VMOV            S0, R0 }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    result = 1;
  return result;
}


int __fastcall AmbientOcclusionCalculator::setOutputLightTexturePositions(int result, int a2)
{
  *(_DWORD *)(result + 56) = a2;
  return result;
}


float __fastcall AmbientOcclusionCalculator::calculate(AmbientOcclusionCalculator *this, int a2, int a3)
{
  int v4; // r5@1
  int v5; // r10@1
  int *v6; // r6@2
  const BlockPos **v7; // r9@2
  Block *v8; // r0@2
  const BlockPos *v9; // r5@3
  int v10; // r7@3
  float v11; // r0@3
  Block *v12; // r0@6
  int v13; // r1@6
  int v14; // r1@10
  int v15; // r2@10
  int v16; // r3@10
  int v17; // r5@10
  int v18; // r6@10
  int v19; // r0@10
  int v20; // r1@13
  int v21; // r2@13
  int v22; // r3@13
  int v23; // r5@13
  int v24; // r6@13
  int v25; // r0@13
  int v26; // r0@16
  int v27; // r3@16
  int v28; // r5@16
  int v29; // r6@16
  int v30; // r1@16
  Block *v31; // r0@19
  Block *v32; // r0@19
  int v34; // r7@19
  Block *v35; // r0@19
  Block *v40; // r0@19
  Block *v42; // r0@19
  Block *v43; // r0@20
  int v44; // r0@20
  float v45; // r10@20
  Block *v46; // r0@21
  int v47; // r6@21
  Block *v50; // r0@22
  Block *v51; // r0@23
  int v52; // r0@23
  float v53; // r8@23
  Block *v54; // r0@24
  int v55; // r6@24
  Block *v57; // r0@25
  Block *v58; // r0@26
  int v59; // r0@26
  float v60; // r0@26
  int v61; // r1@26
  Block *v62; // r0@28
  Block *v66; // r0@29
  Block *v67; // r0@30
  int v68; // r0@30
  int v69; // r0@30
  float v70; // r1@30
  Block *v71; // r0@32
  int v73; // r6@33
  float v74; // r3@33
  int v75; // r12@33
  float v76; // lr@38
  float v77; // r2@38
  int v78; // r0@39
  float v79; // r8@43
  int v80; // r10@43
  float v81; // r5@43
  int v82; // r0@43
  int v83; // r1@51
  float v84; // r11@51
  int v85; // r5@52
  float v86; // r3@56
  int v87; // r0@56
  float v88; // r0@62
  int v89; // r6@66
  int v90; // r2@66
  float v91; // lr@66
  float v92; // r1@66
  float v93; // r3@70
  int v94; // r0@70
  int v95; // r6@78
  int v96; // r7@78
  float v97; // r1@78
  BlockTessellatorCache *v99; // r0@86
  __int64 v100; // kr10_8@86
  int v101; // r1@86
  int v103; // r9@88
  int v108; // r5@89
  int v109; // r11@89
  float result; // r0@98
  int v115; // r0@102
  int v117; // r2@106
  signed int v121; // r5@109
  int v122; // r8@109
  int v126; // r2@117
  int v129; // r2@126
  float v130; // [sp+0h] [bp-178h]@6
  int v131; // [sp+4h] [bp-174h]@3
  int v132; // [sp+Ch] [bp-16Ch]@19
  int v133; // [sp+Ch] [bp-16Ch]@33
  int v134; // [sp+10h] [bp-168h]@29
  float v135; // [sp+14h] [bp-164h]@29
  int v136; // [sp+1Ch] [bp-15Ch]@6
  float v137; // [sp+1Ch] [bp-15Ch]@47
  float v138; // [sp+20h] [bp-158h]@19
  int *v139; // [sp+24h] [bp-154h]@9
  int v140; // [sp+28h] [bp-150h]@19
  int v141; // [sp+2Ch] [bp-14Ch]@19
  int v142; // [sp+2Ch] [bp-14Ch]@23
  int v143; // [sp+34h] [bp-144h]@19
  float v144; // [sp+38h] [bp-140h]@19
  int v145; // [sp+3Ch] [bp-13Ch]@19
  float v146; // [sp+40h] [bp-138h]@19
  int v147; // [sp+44h] [bp-134h]@19
  int v148; // [sp+48h] [bp-130h]@20
  int v149; // [sp+4Ch] [bp-12Ch]@9
  float y; // [sp+50h] [bp-128h]@19
  float ya; // [sp+50h] [bp-128h]@89
  float yb; // [sp+50h] [bp-128h]@109
  int v153; // [sp+54h] [bp-124h]@86
  int v154; // [sp+58h] [bp-120h]@86
  int v155; // [sp+5Ch] [bp-11Ch]@86
  unsigned __int8 v156; // [sp+60h] [bp-118h]@32
  unsigned __int8 v157; // [sp+61h] [bp-117h]@32
  unsigned __int8 v158; // [sp+64h] [bp-114h]@28
  unsigned __int8 v159; // [sp+65h] [bp-113h]@28
  unsigned __int8 v160; // [sp+68h] [bp-110h]@24
  unsigned __int8 v161; // [sp+69h] [bp-10Fh]@24
  unsigned __int8 v162; // [sp+6Ch] [bp-10Ch]@21
  unsigned __int8 v163; // [sp+6Dh] [bp-10Bh]@21
  unsigned __int8 v164; // [sp+70h] [bp-108h]@19
  unsigned __int8 v165; // [sp+71h] [bp-107h]@19
  __int64 v166; // [sp+74h] [bp-104h]@7
  int v167; // [sp+7Ch] [bp-FCh]@8
  int v168; // [sp+80h] [bp-F8h]@6
  int v169; // [sp+84h] [bp-F4h]@6
  int v170; // [sp+88h] [bp-F0h]@6
  int v171; // [sp+8Ch] [bp-ECh]@6
  int v172; // [sp+90h] [bp-E8h]@6
  int v173; // [sp+94h] [bp-E4h]@6
  int v174; // [sp+98h] [bp-E0h]@6
  int v175; // [sp+9Ch] [bp-DCh]@6
  int v176; // [sp+A0h] [bp-D8h]@6
  int v177; // [sp+A4h] [bp-D4h]@6
  int v178; // [sp+A8h] [bp-D0h]@6
  int v179; // [sp+ACh] [bp-CCh]@6
  __int64 v180; // [sp+B0h] [bp-C8h]@6
  int v181; // [sp+B8h] [bp-C0h]@6
  __int64 v182; // [sp+BCh] [bp-BCh]@6
  int v183; // [sp+C4h] [bp-B4h]@6
  __int64 v184; // [sp+C8h] [bp-B0h]@6
  int v185; // [sp+D0h] [bp-A8h]@6
  int v186; // [sp+D4h] [bp-A4h]@6
  int v187; // [sp+D8h] [bp-A0h]@6
  int v188; // [sp+DCh] [bp-9Ch]@6
  char v189; // [sp+E0h] [bp-98h]@6
  char v190; // [sp+ECh] [bp-8Ch]@3
  unsigned __int8 v191; // [sp+F8h] [bp-80h]@3
  unsigned __int8 v192; // [sp+F9h] [bp-7Fh]@3
  unsigned __int8 v193; // [sp+FCh] [bp-7Ch]@5
  unsigned __int8 v194; // [sp+FDh] [bp-7Bh]@5
  float v195; // [sp+104h] [bp-74h]@89

  _R4 = this;
  v4 = a3;
  v5 = a2;
  if ( *((_BYTE *)this + 2) )
  {
    v6 = (int *)((char *)this + 32);
    v7 = (const BlockPos **)((char *)this + 28);
    v8 = (Block *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 7), *((const BlockPos **)this + 8));
    if ( Block::isSolid(v8) )
    {
      v131 = v4;
      v9 = *v7;
      BlockPos::neighbor((BlockPos *)&v190, *v6, v5);
      BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v191, v9, (int)&v190);
      v10 = v191;
      LODWORD(v11) = v192;
      goto LABEL_6;
    }
  }
  else
  v131 = v4;
  BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v193, *v7, *v6);
  v10 = v193;
  LODWORD(v11) = v194;
LABEL_6:
  v130 = v11;
  BlockPos::neighbor((BlockPos *)&v189, *v6, v5);
  v12 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v189);
  v136 = Block::getShadeBrightness(v12);
  v181 = 0;
  v182 = 0LL;
  v180 = 0LL;
  v183 = 0;
  v184 = 0LL;
  v185 = 0;
  v186 = 0;
  v187 = 0;
  v188 = 0;
  v170 = 0;
  v171 = 0;
  v168 = 0;
  v169 = 0;
  v172 = 0;
  v173 = 0;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v177 = 0;
  v178 = 0;
  v179 = 0;
  v13 = *v6;
  if ( *((_BYTE *)_R4 + 2) )
    BlockPos::neighbor((BlockPos *)&v166, v13, v5);
    v166 = *(_QWORD *)v13;
    v167 = *(_DWORD *)(v13 + 8);
  v149 = v10;
  v139 = v6;
  switch ( v5 )
    case 0:
      v14 = HIDWORD(v166);
      v15 = v167;
      v16 = v167 - 1;
      v17 = v166 - 1;
      v180 = v166;
      v18 = v167 + 1;
      v181 = v167 - 1;
      LODWORD(v182) = v166 - 1;
      HIDWORD(v182) = HIDWORD(v166);
      v183 = v167;
      v184 = v166;
      v19 = v166 + 1;
      v185 = v167 + 1;
      goto LABEL_12;
    case 1:
      v17 = v166 + 1;
      LODWORD(v182) = v166 + 1;
      v19 = v166 - 1;
LABEL_12:
      v186 = v19;
      v187 = v14;
      v188 = v15;
      v168 = v17;
      v169 = v14;
      v170 = v16;
      v171 = v17;
      v172 = v14;
      v173 = v18;
      v174 = v19;
      v175 = v14;
      v176 = v18;
      v177 = v19;
      v178 = v14;
      v179 = v16;
      break;
    case 2:
      v20 = HIDWORD(v166);
      v21 = v167;
      v22 = HIDWORD(v166) + 1;
      v180 = v166 + 0x100000000LL;
      v181 = v167;
      v23 = v166 - 1;
      v24 = HIDWORD(v166) - 1;
      v25 = v166 + 1;
      v184 = v166 - 0x100000000LL;
      v185 = v167;
      goto LABEL_15;
    case 3:
      v23 = v166 + 1;
      v25 = v166 - 1;
LABEL_15:
      v186 = v25;
      v187 = v20;
      v188 = v21;
      v168 = v23;
      v169 = v22;
      v170 = v21;
      v171 = v23;
      v172 = v24;
      v173 = v21;
      v174 = v25;
      v175 = v24;
      v176 = v21;
      v177 = v25;
      v178 = v22;
      v179 = v21;
    case 4:
      v26 = v166;
      v27 = HIDWORD(v166) + 1;
      v28 = v167 + 1;
      v182 = v166;
      v29 = HIDWORD(v166) - 1;
      v183 = v167 + 1;
      *(_QWORD *)&v186 = v166;
      v30 = v167 - 1;
      goto LABEL_18;
    case 5:
      v28 = v167 - 1;
      v183 = v167 - 1;
      v30 = v167 + 1;
LABEL_18:
      v188 = v30;
      v168 = v26;
      v169 = v27;
      v170 = v28;
      v171 = v26;
      v172 = v29;
      v173 = v28;
      v174 = v26;
      v175 = v29;
      v176 = v30;
      v177 = v26;
      v178 = v27;
      v179 = v30;
    default:
  v140 = v5;
  BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v164, *v7, (int)&v180);
  v147 = v164;
  LODWORD(v138) = v165;
  v31 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v180);
  v132 = Block::getShadeBrightness(v31);
  BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v164, *v7, (int)&v182);
  v143 = v164;
  LODWORD(v144) = v165;
  v32 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v182);
  _R11 = Block::getShadeBrightness(v32);
  BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v164, *v7, (int)&v184);
  LODWORD(y) = v165;
  v34 = v164;
  v35 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v184);
  v141 = Block::getShadeBrightness(v35);
  BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v164, *v7, (int)&v186);
  v145 = v164;
  __asm { VMOV            S16, R11 }
  LODWORD(v146) = v165;
  v40 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v186);
  _R11 = Block::getShadeBrightness(v40);
  v42 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v180);
  if ( Block::isSolid(v42) != 1 )
    goto LABEL_130;
  v43 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v182);
  v44 = Block::isSolid(v43);
  __asm { VMOV.F32        S18, S16 }
  v45 = v144;
  v148 = v143;
  if ( !v44 )
LABEL_130:
    v46 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v168);
    v47 = v34;
    _R7 = Block::getShadeBrightness(v46);
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v162, *v7, (int)&v168);
    LODWORD(v45) = v163;
    __asm { VMOV            S18, R7 }
    v34 = v47;
    v148 = v162;
  _R0 = v141;
  __asm { VMOV            S20, R0 }
  v50 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v182);
  if ( Block::isSolid(v50) != 1 )
    goto LABEL_131;
  v51 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v184);
  v52 = Block::isSolid(v51);
  __asm { VMOV.F32        S22, S20 }
  v53 = y;
  v142 = v34;
  if ( !v52 )
LABEL_131:
    v54 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v171);
    v55 = v34;
    _R7 = Block::getShadeBrightness(v54);
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v160, *v7, (int)&v171);
    LODWORD(v53) = v161;
    __asm { VMOV            S22, R7 }
    v34 = v55;
    v142 = v160;
  __asm { VMOV            S24, R11 }
  v57 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v184);
  if ( Block::isSolid(v57) != 1 )
    goto LABEL_132;
  v58 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v186);
  v59 = Block::isSolid(v58);
  __asm { VMOV.F32        S26, S24 }
  _ZF = v59 == 0;
  v60 = v146;
  v61 = v145;
  if ( _ZF )
LABEL_132:
    v62 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v174);
    _R6 = Block::getShadeBrightness(v62);
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v158, *v7, (int)&v174);
    v61 = v158;
    __asm { VMOV            S26, R6 }
    LODWORD(v60) = v159;
  v134 = v61;
  v135 = v60;
  _R0 = v136;
  __asm { VMOV            S30, R0 }
  _R0 = v132;
  __asm { VMOV            S28, R0 }
  v66 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v186);
  if ( Block::isSolid(v66) != 1 )
    goto LABEL_133;
  v67 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v180);
  v68 = Block::isSolid(v67);
  __asm { VMOV.F32        S0, S28 }
  _ZF = v68 == 0;
  v69 = v147;
  v70 = v138;
LABEL_133:
    v71 = (Block *)BlockTessellatorCache::getBlock(*v7, (const BlockPos *)&v177);
    _R6 = Block::getShadeBrightness(v71);
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v156, *v7, (int)&v177);
    v69 = v156;
    __asm { VMOV            S0, R6 }
    LODWORD(v70) = v157;
  __asm { VADD.F32        S2, S18, S30 }
  v133 = v69;
  __asm
    VADD.F32        S4, S22, S30
    VADD.F32        S6, S26, S30
    VADD.F32        S0, S0, S30
    VMOV.F32        S8, #0.25
  v73 = v147;
  v74 = v138;
    VADD.F32        S2, S2, S28
    VADD.F32        S4, S4, S16
    VADD.F32        S6, S6, S20
    VADD.F32        S0, S0, S24
    VADD.F32        S2, S2, S16
    VADD.F32        S4, S4, S20
    VADD.F32        S6, S6, S24
    VADD.F32        S0, S0, S28
    VMUL.F32        S18, S2, S8
    VMUL.F32        S2, S4, S8
    VMUL.F32        S4, S6, S8
    VMUL.F32        S0, S0, S8
    VSTR            S18, [SP,#0x178+var_78]
    VSTR            S2, [SP,#0x178+var_74]
    VSTR            S4, [SP,#0x178+var_70]
    VSTR            S0, [SP,#0x178+var_6C]
  v75 = *((_DWORD *)_R4 + 14);
    v73 = v149;
    v74 = v138;
    if ( v138 == 0.0 )
      v74 = v130;
    else
      v73 = 0;
  v76 = v53;
  v77 = v144;
  if ( !v148 )
    v78 = v149;
    if ( v45 != 0.0 )
      v78 = 0;
    v148 = v78;
    if ( v45 == 0.0 )
      v45 = v130;
  v79 = v45;
  v80 = v143;
  v81 = v144;
  v82 = v143;
  if ( !v143 )
    v82 = v149;
    v81 = v144;
    if ( v144 == 0.0 )
      v81 = v130;
      v82 = 0;
  v137 = v70;
  *(_BYTE *)v75 = (unsigned int)(v82 + v73 + v149 + v148) >> 2;
  *(_BYTE *)(v75 + 1) = (unsigned int)(LODWORD(v74) + LODWORD(v130) + LODWORD(v79) + LODWORD(v81)) >> 2;
    v80 = v149;
      v77 = v130;
      v80 = 0;
  v83 = v142;
  v84 = v138;
  if ( v142 )
    v85 = v149;
    v83 = v149;
    if ( v76 == 0.0 )
      v76 = v130;
      v83 = 0;
  v86 = y;
  v87 = v34;
  if ( !v34 )
    v87 = v85;
    v86 = y;
    if ( y != 0.0 )
      v87 = 0;
    if ( y == 0.0 )
      v86 = v130;
  *(_BYTE *)(v75 + 2) = (unsigned int)(v87 + v80 + v85 + v83) >> 2;
  *(_BYTE *)(v75 + 3) = (unsigned int)(LODWORD(v77) + LODWORD(v130) + LODWORD(v76) + LODWORD(v86)) >> 2;
    v88 = y;
    v34 = v85;
      v88 = v130;
      v34 = 0;
    y = v88;
  v89 = v134;
  v91 = v146;
  v90 = v145;
  v92 = v135;
  if ( !v134 )
    v89 = v85;
    if ( v135 == 0.0 )
      v92 = v130;
      v89 = 0;
  v93 = v146;
  v94 = v145;
  if ( !v145 )
    v94 = v85;
    if ( v146 == 0.0 )
      v93 = v130;
      v94 = 0;
  *(_BYTE *)(v75 + 4) = (unsigned int)(v94 + v34 + v85 + v89) >> 2;
  *(_BYTE *)(v75 + 5) = (unsigned int)(LODWORD(y) + LODWORD(v130) + LODWORD(v92) + LODWORD(v93)) >> 2;
    v90 = v85;
      v91 = v130;
      v90 = 0;
  v95 = v133;
  v96 = v147;
  v97 = v137;
  if ( !v133 )
    v95 = v85;
    if ( v137 == 0.0 )
      v97 = v130;
      v95 = 0;
  if ( !v147 )
    v96 = v85;
      v84 = v130;
      v96 = 0;
  *(_BYTE *)(v75 + 6) = (unsigned int)(v90 + v85 + v96 + v95) >> 2;
  *(_BYTE *)(v75 + 7) = (unsigned int)(LODWORD(v91) + LODWORD(v130) + LODWORD(v97) + LODWORD(v84)) >> 2;
  _R2 = *((_DWORD *)_R4 + 9);
  v99 = *v7;
  v100 = *(_QWORD *)*v139;
  v101 = *(_DWORD *)(*v139 + 8);
  __asm { VLDR            S16, [R2,#0x28] }
  v153 = *(_QWORD *)*v139;
  v154 = HIDWORD(v100) + 1;
  v155 = v101;
  _R5 = BlockTessellatorCache::getBlock(v99, (const BlockPos *)&v153);
  BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(_R5 + 4)]);
  __asm { VMOV.F32        S20, S16 }
  if ( !_ZF )
    __asm { VLDRNE          S20, [R5,#0x28] }
  v103 = *((_DWORD *)_R4 + 15);
  _R10 = (int)_R4 + 4 * v140 + 4;
  if ( v131 )
    __asm { VMOV            R8, S16 }
    _R6 = &v195;
    __asm
      VMOV            R0, S20
      VMOV.F32        S22, #1.0
      VLDR            S24, =0.0
    v108 = 0;
    v109 = *((_DWORD *)_R4 + 15);
    ya = _R0;
    while ( 1 )
      __asm
      {
        VLDR            S0, [R10]
        VMUL.F32        S0, S18, S0
        VMOV            R7, S0
      }
      _R0 = powf(_R7, _R8);
      __asm { VMOV            S0, R0 }
      if ( *((_BYTE *)_R4 + 1) )
        __asm
        {
          VMOV.F32        S2, S24
          VMOV.F32        S4, S0
        }
        if ( *(_BYTE *)_R4 )
          __asm { VMOVNE.F32      S2, S22 }
        LODWORD(_R0) = *((_QWORD *)_R4 + 5) >> 32;
        LODWORD(_R1) = *((_QWORD *)_R4 + 5);
      else if ( *(_BYTE *)_R4 )
          VLDR            S2, [R4,#0x28]
          VLDR            S4, [R4,#0x2C]
          VMUL.F32        S2, S2, S0
          VLDR            S6, [R4,#0x30]
          VMUL.F32        S4, S4, S0
          VLDR            S8, [R4,#0x34]
          VMOV            R1, S2
          VMOV            R0, S4
          VMUL.F32        S4, S8, S0
          VMUL.F32        S2, S6, S0
      else
        __asm { VMOV.F32        S4, S22 }
        _R1 = _R0;
        __asm { VMOV.F32        S2, S0 }
      *(float *)(v109 + v108) = _R1;
      __asm { VCMPE.F32       S20, S16 }
      *(float *)(v109 + v108 + 4) = _R0;
        VMRS            APSR_nzcv, FPSCR
        VSTR            S2, [R1,#8]
        VSTR            S4, [R1,#0xC]
      if ( _ZF )
        v115 = *((_DWORD *)_R4 + 15);
        _R1 = *(float *)(v115 + v108);
        _R0 = v115 + v108;
          VLDR            S0, [R0,#8]
          VLDR            S2, [R0,#0xC]
        result = *(float *)(_R0 + 4);
        result = powf(_R7, ya);
        __asm { VMOV            S4, R0 }
        if ( *((_BYTE *)_R4 + 1) )
          __asm
          {
            VMOV.F32        S0, S24
            VMOV.F32        S2, S4
          }
          if ( *(_BYTE *)_R4 )
            __asm { VMOVNE.F32      S0, S22 }
          LODWORD(result) = *((_QWORD *)_R4 + 5) >> 32;
          LODWORD(_R1) = *((_QWORD *)_R4 + 5);
        else if ( *(_BYTE *)_R4 )
            VLDR            S0, [R4,#0x28]
            VLDR            S2, [R4,#0x2C]
            VMUL.F32        S0, S0, S4
            VLDR            S6, [R4,#0x30]
            VMUL.F32        S2, S2, S4
            VLDR            S8, [R4,#0x34]
            VMOV            R1, S0
            VMOV            R0, S2
            VMUL.F32        S2, S8, S4
            VMUL.F32        S0, S6, S4
        else
          __asm { VMOV.F32        S2, S22 }
          _R1 = result;
          __asm { VMOV.F32        S0, S4 }
      v117 = v103 + v108;
      v108 += 16;
      *(float *)(v117 + 64) = _R1;
      *(float *)(v117 + 68) = result;
        VSTR            S0, [R2,#0x48]
        VSTR            S2, [R2,#0x4C]
        break;
      __asm { VLDR            S18, [R6] }
      v109 = *((_DWORD *)_R4 + 15);
      ++_R6;
    __asm { VMOV            R11, S16 }
      VMOV.F32        S24, #1.0
      VLDR            S22, =0.0
    v121 = 76;
    v122 = *((_DWORD *)_R4 + 15);
    yb = _R0;
      _R0 = powf(_R7, _R11);
          VMOV.F32        S4, S22
          VMOV.F32        S2, S0
          __asm { VMOVNE.F32      S4, S24 }
        __asm { VMOV.F32        S0, S4 }
          VMUL.F32        S2, S8, S0
          VMUL.F32        S0, S6, S0
      v126 = v122 + v121;
        VCMPE.F32       S20, S16
      *(float *)(v126 - 76) = _R1;
      *(float *)(v126 - 72) = _R0;
        VSTR            S0, [R2,#-0x44]
        VSTR            S2, [R2,#-0x40]
        _R2 = *((_DWORD *)_R4 + 15) + v121;
        LODWORD(result) = *(_QWORD *)(_R2 - 76) >> 32;
        LODWORD(_R1) = *(_QWORD *)(_R2 - 76);
          VLDR            S0, [R2,#-0x44]
          VLDR            S2, [R2,#-0x40]
        result = powf(_R7, yb);
        __asm { VMOV            S0, R0 }
            VMOV.F32        S4, S22
            VMOV.F32        S2, S0
            __asm { VMOVNE.F32      S4, S24 }
            VLDR            S2, [R4,#0x28]
            VLDR            S4, [R4,#0x2C]
            VMUL.F32        S2, S2, S0
            VMUL.F32        S4, S4, S0
            VMOV            R1, S2
            VMUL.F32        S2, S8, S0
            VMOV            R0, S4
            VMUL.F32        S0, S6, S0
          __asm { VMOV.F32        S2, S0 }
      v129 = v103 + v121;
      v121 += 16;
      *(float *)(v129 - 12) = _R1;
      *(float *)(v129 - 8) = result;
        VSTR            S0, [R2,#-4]
        VSTR            S2, [R2]
      v122 = *((_DWORD *)_R4 + 15);
  return result;
}


int __fastcall AmbientOcclusionCalculator::setSeasons(int result, bool a2)
{
  *(_BYTE *)(result + 1) = a2;
  return result;
}


int __fastcall AmbientOcclusionCalculator::setOutputColors(int result, Color *a2)
{
  *(_DWORD *)(result + 60) = a2;
  return result;
}


int __fastcall AmbientOcclusionCalculator::AmbientOcclusionCalculator(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  __int64 v5; // kr00_8@1
  int v6; // r5@1
  BlockSource *v7; // r0@1
  int v8; // r5@1
  Dimension *v9; // r0@2
  int result; // r0@9

  v4 = a1;
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = 0;
  *(_BYTE *)(a1 + 2) = 1;
  *(_DWORD *)(a1 + 28) = a4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&a2;
  v5 = *(_QWORD *)&Color::WHITE;
  v6 = HIDWORD(qword_283E618);
  *(_DWORD *)(a1 + 48) = qword_283E618;
  *(_DWORD *)(a1 + 52) = v6;
  *(_QWORD *)(a1 + 40) = v5;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  v7 = *(BlockSource **)(a4 + 12);
  v8 = Block::mLightEmission[*(_BYTE *)(a3 + 4)];
  if ( v7 && (v9 = (Dimension *)BlockSource::getDimensionConst(v7), Dimension::hasCeiling(v9) == 1) )
  {
    *(_DWORD *)(v4 + 4) = 1064514355;
    *(_DWORD *)(v4 + 8) = 1060320051;
  }
  else
    __asm
    {
      VMOV.F32        S2, #0.875
      VMOV.F32        S0, #0.5
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
    *(_DWORD *)(v4 + 8) = 1065353216;
    __asm { VSTR            S0, [R4,#4] }
  _R0 = sub_133E728;
  _R1 = &loc_133E730;
  if ( v8 )
    _R0 = (int (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))&loc_133E72C;
    _R1 = &loc_133E734;
  __asm
    VLDR            S0, [R0]
    VLDR            S2, [R1]
  result = v4;
    VSTR            S0, [R4,#0xC]
    VSTR            S0, [R4,#0x10]
    VSTR            S2, [R4,#0x14]
    VSTR            S2, [R4,#0x18]
  return result;
}


int __fastcall AmbientOcclusionCalculator::_computeAOColor(AmbientOcclusionCalculator *this, float a2, float x, float a4, float y)
{
  AmbientOcclusionCalculator *v6; // r4@1
  __int64 v12; // r0@4

  _R5 = a2;
  v6 = this;
  _R0 = powf(x, y);
  __asm { VMOV            S0, R0 }
  if ( *(_BYTE *)(LODWORD(_R5) + 1) )
  {
    __asm
    {
      VMOV.F32        S4, #1.0
      VLDR            S2, =0.0
    }
    if ( *(_BYTE *)LODWORD(_R5) )
      __asm { VMOVNE.F32      S2, S4 }
    v12 = *(_QWORD *)(LODWORD(_R5) + 40);
    *(_QWORD *)v6 = v12;
      VSTR            S2, [R4,#8]
      VSTR            S0, [R4,#0xC]
  }
  else
    LODWORD(v12) = *(_BYTE *)LODWORD(_R5);
      __asm
      {
        VLDR            S2, [R5,#0x28]
        VLDR            S4, [R5,#0x2C]
        VLDR            S6, [R5,#0x30]
        VMUL.F32        S2, S2, S0
        VLDR            S8, [R5,#0x34]
        VMUL.F32        S4, S4, S0
        VMUL.F32        S6, S6, S0
        VMUL.F32        S0, S8, S0
        VSTR            S2, [R4]
        VSTR            S4, [R4,#4]
        VSTR            S6, [R4,#8]
        VSTR            S0, [R4,#0xC]
      }
    else
        VMOV.F32        S2, #1.0
        VMOV.F32        S4, S0
      if ( !_ZF )
        __asm { VMOVNE.F32      S4, S2 }
        VSTR            S0, [R4]
        VSTR            S0, [R4,#4]
        VSTR            S0, [R4,#8]
        VSTR            S4, [R4,#0xC]
  return v12;
}


int __fastcall AmbientOcclusionCalculator::_notOccludedBy(AmbientOcclusionCalculator *this, const BlockPos *a2, const BlockPos *a3)
{
  AmbientOcclusionCalculator *v3; // r5@1
  const BlockPos *v4; // r4@1
  Block *v5; // r0@1
  int result; // r0@2
  Block *v7; // r0@3

  v3 = this;
  v4 = a3;
  v5 = (Block *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 7), a2);
  if ( Block::isSolid(v5) == 1 )
  {
    v7 = (Block *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v3 + 7), v4);
    result = Block::isSolid(v7) ^ 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall AmbientOcclusionCalculator::_getShadeBrightness(AmbientOcclusionCalculator *this, const BlockPos *a2)
{
  Block *v2; // r0@1

  v2 = (Block *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 7), a2);
  return j_j_j__ZNK5Block18getShadeBrightnessEv(v2);
}


int __fastcall AmbientOcclusionCalculator::_isSolidRender(AmbientOcclusionCalculator *this, const BlockPos *a2)
{
  Block *v2; // r0@1

  v2 = (Block *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 7), a2);
  return j_j_j__ZNK5Block7isSolidEv_1(v2);
}


int __fastcall AmbientOcclusionCalculator::setTintSides(int result, bool a2)
{
  *(_BYTE *)result = a2;
  return result;
}
