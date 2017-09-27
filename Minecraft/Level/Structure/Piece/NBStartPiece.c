

void __fastcall NBStartPiece::~NBStartPiece(NBStartPiece *this)
{
  NBStartPiece::~NBStartPiece(this);
}


signed int __fastcall NBStartPiece::getType(NBStartPiece *this)
{
  return 1312969552;
}


NBStartPiece *__fastcall NBStartPiece::~NBStartPiece(NBStartPiece *this)
{
  NBStartPiece *v1; // r10@1
  void *v2; // r0@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13
  void *v8; // r5@18
  void *v9; // r7@18
  unsigned int *v10; // r2@20
  signed int v11; // r1@22
  int *v12; // r0@28
  int v13; // r1@33
  void *v14; // r0@33
  unsigned int *v16; // r2@35
  signed int v17; // r1@37

  v1 = this;
  *(_DWORD *)this = &off_2723A28;
  v2 = (void *)*((_DWORD *)this + 16);
  if ( v2 )
    j_operator delete(v2);
  v4 = (void *)(*(_QWORD *)((char *)v1 + 52) >> 32);
  v3 = (void *)*(_QWORD *)((char *)v1 + 52);
  if ( v3 != v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 24;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 13);
  }
  if ( v3 )
    j_operator delete(v3);
  v9 = (void *)(*((_QWORD *)v1 + 5) >> 32);
  v8 = (void *)*((_QWORD *)v1 + 5);
  if ( v8 != v9 )
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v8 = (char *)v8 + 24;
    while ( v8 != v9 );
    v8 = (void *)*((_DWORD *)v1 + 10);
  if ( v8 )
    j_operator delete(v8);
  v13 = *((_DWORD *)v1 + 9);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v1;
}


int __fastcall NBStartPiece::NBStartPiece(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)a1 = &off_2723A28;
  *(_DWORD *)(a1 + 36) = &unk_28898CC;
  j___aeabi_memclr4_0(a1 + 40, 36);
  return v1;
}


void __fastcall NBStartPiece::~NBStartPiece(NBStartPiece *this)
{
  NBStartPiece *v1; // r0@1

  v1 = j_NBStartPiece::~NBStartPiece(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall NBStartPiece::NBStartPiece(int a1, Random *a2, int a3, int a4)
{
  int v4; // r9@1
  int v5; // r5@1
  int v6; // r6@1
  __int64 v7; // r0@1
  int v8; // r0@2
  int v9; // r3@2
  int v10; // r6@2
  int v11; // r7@2
  char *v12; // r0@4
  void *v13; // r0@5
  __int64 v14; // r0@6
  int v15; // r0@7
  int v16; // r3@7
  int v17; // r6@7
  int v18; // r7@7
  char *v19; // r0@9
  void *v20; // r0@10
  __int64 v21; // r0@11
  int v22; // r0@12
  int v23; // r3@12
  int v24; // r6@12
  int v25; // r7@12
  char *v26; // r0@14
  void *v27; // r0@15
  __int64 v28; // r0@16
  int v29; // r0@17
  int v30; // r3@17
  int v31; // r6@17
  int v32; // r7@17
  char *v33; // r0@19
  void *v34; // r0@20
  __int64 v35; // r0@21
  int v36; // r0@22
  int v37; // r3@22
  int v38; // r6@22
  int v39; // r7@22
  char *v40; // r0@24
  void *v41; // r0@25
  __int64 v42; // r0@26
  int v43; // r0@27
  int v44; // r3@27
  int v45; // r6@27
  int v46; // r7@27
  char *v47; // r0@29
  void *v48; // r0@30
  __int64 v49; // kr00_8@31
  _DWORD *v50; // r6@32
  unsigned int *v51; // r2@33
  signed int v52; // r1@35
  int *v53; // r0@41
  __int64 v54; // r0@43
  int v55; // r0@44
  int v56; // r3@44
  int v57; // r6@44
  int v58; // r7@44
  char *v59; // r0@46
  void *v60; // r0@47
  __int64 v61; // r0@48
  int v62; // r0@49
  int v63; // r3@49
  int v64; // r6@49
  int v65; // r7@49
  char *v66; // r0@51
  void *v67; // r0@52
  __int64 v68; // r0@53
  int v69; // r0@54
  int v70; // r3@54
  int v71; // r6@54
  int v72; // r7@54
  char *v73; // r0@56
  void *v74; // r0@57
  __int64 v75; // r0@58
  int v76; // r0@59
  int v77; // r3@59
  int v78; // r6@59
  int v79; // r7@59
  char *v80; // r0@61
  void *v81; // r0@62
  __int64 v82; // r0@63
  int v83; // r0@64
  int v84; // r3@64
  int v85; // r6@64
  int v86; // r7@64
  char *v87; // r0@66
  void *v88; // r0@67
  __int64 v89; // r0@68
  int v90; // r0@69
  int v91; // r3@69
  int v92; // r6@69
  int v93; // r7@69
  char *v94; // r0@71
  void *v95; // r0@72
  __int64 v96; // r0@73
  int v97; // r0@74
  int v98; // r3@74
  int v99; // r6@74
  int v100; // r7@74
  char *v101; // r0@76
  void *v102; // r0@77
  unsigned int *v104; // r2@79
  signed int v105; // r1@81
  unsigned int *v106; // r2@83
  signed int v107; // r1@85
  unsigned int *v108; // r2@87
  signed int v109; // r1@89
  unsigned int *v110; // r2@91
  signed int v111; // r1@93
  unsigned int *v112; // r2@95
  signed int v113; // r1@97
  unsigned int *v114; // r2@99
  signed int v115; // r1@101
  unsigned int *v116; // r2@103
  signed int v117; // r1@105
  unsigned int *v118; // r2@107
  signed int v119; // r1@109
  unsigned int *v120; // r2@111
  signed int v121; // r1@113
  unsigned int *v122; // r2@115
  signed int v123; // r1@117
  unsigned int *v124; // r2@119
  signed int v125; // r1@121
  unsigned int *v126; // r2@123
  signed int v127; // r1@125
  unsigned int *v128; // r2@127
  signed int v129; // r1@129
  unsigned int *v130; // r2@131
  signed int v131; // r1@133
  unsigned int *v132; // r2@135
  signed int v133; // r1@137
  unsigned int *v134; // r2@139
  signed int v135; // r1@141
  unsigned int *v136; // r2@143
  signed int v137; // r1@145
  unsigned int *v138; // r2@147
  signed int v139; // r1@149
  unsigned int *v140; // r2@151
  signed int v141; // r1@153
  unsigned int *v142; // r2@155
  signed int v143; // r1@157
  unsigned int *v144; // r2@159
  signed int v145; // r1@161
  unsigned int *v146; // r2@163
  signed int v147; // r1@165
  unsigned int *v148; // r2@167
  signed int v149; // r1@169
  unsigned int *v150; // r2@171
  signed int v151; // r1@173
  unsigned int *v152; // r2@175
  signed int v153; // r1@177
  unsigned int *v154; // r2@179
  signed int v155; // r1@181
  unsigned __int64 *v156; // [sp+4h] [bp-1CCh]@30
  int v157; // [sp+Ch] [bp-1C4h]@73
  char *v158; // [sp+10h] [bp-1C0h]@73
  int v159; // [sp+14h] [bp-1BCh]@73
  int v160; // [sp+18h] [bp-1B8h]@73
  int v161; // [sp+1Ch] [bp-1B4h]@73
  int v162; // [sp+20h] [bp-1B0h]@73
  char v163; // [sp+24h] [bp-1ACh]@73
  int v164; // [sp+2Ch] [bp-1A4h]@68
  char *v165; // [sp+30h] [bp-1A0h]@68
  int v166; // [sp+34h] [bp-19Ch]@68
  int v167; // [sp+38h] [bp-198h]@68
  int v168; // [sp+3Ch] [bp-194h]@68
  int v169; // [sp+40h] [bp-190h]@68
  char v170; // [sp+44h] [bp-18Ch]@68
  int v171; // [sp+4Ch] [bp-184h]@63
  char *v172; // [sp+50h] [bp-180h]@63
  int v173; // [sp+54h] [bp-17Ch]@63
  int v174; // [sp+58h] [bp-178h]@63
  int v175; // [sp+5Ch] [bp-174h]@63
  int v176; // [sp+60h] [bp-170h]@63
  char v177; // [sp+64h] [bp-16Ch]@63
  int v178; // [sp+6Ch] [bp-164h]@58
  char *v179; // [sp+70h] [bp-160h]@58
  int v180; // [sp+74h] [bp-15Ch]@58
  int v181; // [sp+78h] [bp-158h]@58
  int v182; // [sp+7Ch] [bp-154h]@58
  int v183; // [sp+80h] [bp-150h]@58
  char v184; // [sp+84h] [bp-14Ch]@58
  int v185; // [sp+8Ch] [bp-144h]@53
  char *v186; // [sp+90h] [bp-140h]@53
  int v187; // [sp+94h] [bp-13Ch]@53
  int v188; // [sp+98h] [bp-138h]@53
  int v189; // [sp+9Ch] [bp-134h]@53
  int v190; // [sp+A0h] [bp-130h]@53
  char v191; // [sp+A4h] [bp-12Ch]@53
  int v192; // [sp+ACh] [bp-124h]@48
  char *v193; // [sp+B0h] [bp-120h]@48
  int v194; // [sp+B4h] [bp-11Ch]@48
  int v195; // [sp+B8h] [bp-118h]@48
  int v196; // [sp+BCh] [bp-114h]@48
  int v197; // [sp+C0h] [bp-110h]@48
  char v198; // [sp+C4h] [bp-10Ch]@48
  int v199; // [sp+CCh] [bp-104h]@43
  char *v200; // [sp+D0h] [bp-100h]@43
  int v201; // [sp+D4h] [bp-FCh]@43
  int v202; // [sp+D8h] [bp-F8h]@43
  int v203; // [sp+DCh] [bp-F4h]@43
  int v204; // [sp+E0h] [bp-F0h]@43
  char v205; // [sp+E4h] [bp-ECh]@43
  int v206; // [sp+ECh] [bp-E4h]@26
  char *v207; // [sp+F0h] [bp-E0h]@26
  int v208; // [sp+F4h] [bp-DCh]@26
  int v209; // [sp+F8h] [bp-D8h]@26
  int v210; // [sp+FCh] [bp-D4h]@26
  int v211; // [sp+100h] [bp-D0h]@26
  char v212; // [sp+104h] [bp-CCh]@26
  int v213; // [sp+10Ch] [bp-C4h]@21
  char *v214; // [sp+110h] [bp-C0h]@21
  int v215; // [sp+114h] [bp-BCh]@21
  int v216; // [sp+118h] [bp-B8h]@21
  int v217; // [sp+11Ch] [bp-B4h]@21
  int v218; // [sp+120h] [bp-B0h]@21
  char v219; // [sp+124h] [bp-ACh]@21
  int v220; // [sp+12Ch] [bp-A4h]@16
  char *v221; // [sp+130h] [bp-A0h]@16
  int v222; // [sp+134h] [bp-9Ch]@16
  int v223; // [sp+138h] [bp-98h]@16
  int v224; // [sp+13Ch] [bp-94h]@16
  int v225; // [sp+140h] [bp-90h]@16
  char v226; // [sp+144h] [bp-8Ch]@16
  int v227; // [sp+14Ch] [bp-84h]@11
  char *v228; // [sp+150h] [bp-80h]@11
  int v229; // [sp+154h] [bp-7Ch]@11
  int v230; // [sp+158h] [bp-78h]@11
  int v231; // [sp+15Ch] [bp-74h]@11
  int v232; // [sp+160h] [bp-70h]@11
  char v233; // [sp+164h] [bp-6Ch]@11
  int v234; // [sp+16Ch] [bp-64h]@6
  char *v235; // [sp+170h] [bp-60h]@6
  int v236; // [sp+174h] [bp-5Ch]@6
  int v237; // [sp+178h] [bp-58h]@6
  int v238; // [sp+17Ch] [bp-54h]@6
  int v239; // [sp+180h] [bp-50h]@6
  char v240; // [sp+184h] [bp-4Ch]@6
  int v241; // [sp+18Ch] [bp-44h]@1
  char *v242; // [sp+190h] [bp-40h]@1
  int v243; // [sp+194h] [bp-3Ch]@1
  int v244; // [sp+198h] [bp-38h]@1
  int v245; // [sp+19Ch] [bp-34h]@1
  int v246; // [sp+1A0h] [bp-30h]@1
  char v247; // [sp+1A4h] [bp-2Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)a1 = &off_27239E0;
  *(_DWORD *)(a1 + 28) = j_Random::_genRandInt32(a2) & 3;
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = 64;
  *(_DWORD *)(v4 + 12) = v5;
  *(_DWORD *)(v4 + 16) = v6 + 18;
  *(_DWORD *)(v4 + 20) = 73;
  *(_DWORD *)(v4 + 24) = v5 + 18;
  *(_DWORD *)v4 = &off_2723A28;
  *(_DWORD *)(v4 + 36) = &unk_28898CC;
  j___aeabi_memclr4_0(v4 + 40, 36);
  *(_DWORD *)(v4 + 44) = 0;
  sub_21E94B4((void **)&v241, "BridgeStraight");
  v242 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v242, &v241);
  v243 = 30;
  v244 = 0;
  v245 = 0;
  v246 = 0;
  v247 = 1;
  v7 = *(_QWORD *)(v4 + 44);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(
      (unsigned __int64 *)(v4 + 40),
      &v242);
  }
  else
    *(_DWORD *)v7 = v242;
    v8 = v7 + 4;
    v242 = (char *)&unk_28898CC;
    v9 = v244;
    v10 = v245;
    v11 = v246;
    *(_DWORD *)v8 = v243;
    *(_DWORD *)(v8 + 4) = v9;
    *(_DWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 12) = v11;
    *(_BYTE *)(v8 + 16) = v247;
    *(_DWORD *)(v4 + 44) += 24;
  v12 = v242 - 12;
  if ( (int *)(v242 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v242 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
    }
    else
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v241 - 12);
  if ( (int *)(v241 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v241 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v234, "BridgeCrossing");
  v235 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v235, &v234);
  v236 = 10;
  v238 = 4;
  v237 = 0;
  v239 = 0;
  v240 = 0;
  v14 = *(_QWORD *)(v4 + 44);
  if ( (_DWORD)v14 == HIDWORD(v14) )
      &v235);
    *(_DWORD *)v14 = v235;
    v15 = v14 + 4;
    v235 = (char *)&unk_28898CC;
    v16 = v237;
    v17 = v238;
    v18 = v239;
    *(_DWORD *)v15 = v236;
    *(_DWORD *)(v15 + 4) = v16;
    *(_DWORD *)(v15 + 8) = v17;
    *(_DWORD *)(v15 + 12) = v18;
    *(_BYTE *)(v15 + 16) = v240;
  v19 = v235 - 12;
  if ( (int *)(v235 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v235 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v234 - 12);
  if ( (int *)(v234 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v234 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v227, "RoomCrossing");
  v228 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v228, &v227);
  v229 = 10;
  v231 = 4;
  v230 = 0;
  v232 = 0;
  v233 = 0;
  v21 = *(_QWORD *)(v4 + 44);
  if ( (_DWORD)v21 == HIDWORD(v21) )
      &v228);
    *(_DWORD *)v21 = v228;
    v22 = v21 + 4;
    v228 = (char *)&unk_28898CC;
    v23 = v230;
    v24 = v231;
    v25 = v232;
    *(_DWORD *)v22 = v229;
    *(_DWORD *)(v22 + 4) = v23;
    *(_DWORD *)(v22 + 8) = v24;
    *(_DWORD *)(v22 + 12) = v25;
    *(_BYTE *)(v22 + 16) = v233;
  v26 = v228 - 12;
  if ( (int *)(v228 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v228 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v227 - 12);
  if ( (int *)(v227 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v227 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v220, "StairsRoom");
  v221 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v221, &v220);
  v222 = 10;
  v224 = 3;
  v223 = 0;
  v225 = 0;
  v226 = 0;
  v28 = *(_QWORD *)(v4 + 44);
  if ( (_DWORD)v28 == HIDWORD(v28) )
      &v221);
    *(_DWORD *)v28 = v221;
    v29 = v28 + 4;
    v221 = (char *)&unk_28898CC;
    v30 = v223;
    v31 = v224;
    v32 = v225;
    *(_DWORD *)v29 = v222;
    *(_DWORD *)(v29 + 4) = v30;
    *(_DWORD *)(v29 + 8) = v31;
    *(_DWORD *)(v29 + 12) = v32;
    *(_BYTE *)(v29 + 16) = v226;
  v33 = v221 - 12;
  if ( (int *)(v221 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v221 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v220 - 12);
  if ( (int *)(v220 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v220 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v213, "MonsterThrone");
  v214 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v214, &v213);
  v215 = 5;
  v217 = 2;
  v216 = 0;
  v218 = 0;
  v219 = 0;
  v35 = *(_QWORD *)(v4 + 44);
  if ( (_DWORD)v35 == HIDWORD(v35) )
      &v214);
    *(_DWORD *)v35 = v214;
    v36 = v35 + 4;
    v214 = (char *)&unk_28898CC;
    v37 = v216;
    v38 = v217;
    v39 = v218;
    *(_DWORD *)v36 = v215;
    *(_DWORD *)(v36 + 4) = v37;
    *(_DWORD *)(v36 + 8) = v38;
    *(_DWORD *)(v36 + 12) = v39;
    *(_BYTE *)(v36 + 16) = v219;
  v40 = v214 - 12;
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v214 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v213 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v206, "CastleEntrance");
  v207 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v207, &v206);
  v208 = 5;
  v210 = 1;
  v209 = 0;
  v211 = 0;
  v212 = 0;
  v42 = *(_QWORD *)(v4 + 44);
  if ( (_DWORD)v42 == HIDWORD(v42) )
      &v207);
    *(_DWORD *)v42 = v207;
    v43 = v42 + 4;
    v207 = (char *)&unk_28898CC;
    v44 = v209;
    v45 = v210;
    v46 = v211;
    *(_DWORD *)v43 = v208;
    *(_DWORD *)(v43 + 4) = v44;
    *(_DWORD *)(v43 + 8) = v45;
    *(_DWORD *)(v43 + 12) = v46;
    *(_BYTE *)(v43 + 16) = v212;
  v47 = v207 - 12;
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v207 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v156 = (unsigned __int64 *)(v4 + 52);
  v48 = (void *)(v206 - 12);
  if ( (int *)(v206 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v206 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = *(_QWORD *)(v4 + 52);
  if ( HIDWORD(v49) != (_DWORD)v49 )
    v50 = (_DWORD *)v49;
    do
      v53 = (int *)(*v50 - 12);
      if ( v53 != &dword_28898C0 )
      {
        v51 = (unsigned int *)(*v50 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
        }
        else
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      }
      v50 += 6;
    while ( v50 != (_DWORD *)HIDWORD(v49) );
  *(_DWORD *)(v4 + 56) = v49;
  sub_21E94B4((void **)&v199, "CastleSmallCorridorPiece");
  v200 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v200, &v199);
  v201 = 25;
  v202 = 0;
  v203 = 0;
  v204 = 0;
  v205 = 1;
  v54 = *(_QWORD *)(v4 + 56);
  if ( (_DWORD)v54 == HIDWORD(v54) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(v156, &v200);
    *(_DWORD *)v54 = v200;
    v55 = v54 + 4;
    v200 = (char *)&unk_28898CC;
    v56 = v202;
    v57 = v203;
    v58 = v204;
    *(_DWORD *)v55 = v201;
    *(_DWORD *)(v55 + 4) = v56;
    *(_DWORD *)(v55 + 8) = v57;
    *(_DWORD *)(v55 + 12) = v58;
    *(_BYTE *)(v55 + 16) = v205;
    *(_DWORD *)(v4 + 56) += 24;
  v59 = v200 - 12;
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v200 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v199 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4((void **)&v192, "CastleSmallCorridorCrossingPiece");
  v193 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v193, &v192);
  v194 = 15;
  v196 = 5;
  v195 = 0;
  v197 = 0;
  v198 = 0;
  v61 = *(_QWORD *)(v4 + 56);
  if ( (_DWORD)v61 == HIDWORD(v61) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(v156, &v193);
    *(_DWORD *)v61 = v193;
    v62 = v61 + 4;
    v193 = (char *)&unk_28898CC;
    v63 = v195;
    v64 = v196;
    v65 = v197;
    *(_DWORD *)v62 = v194;
    *(_DWORD *)(v62 + 4) = v63;
    *(_DWORD *)(v62 + 8) = v64;
    *(_DWORD *)(v62 + 12) = v65;
    *(_BYTE *)(v62 + 16) = v198;
  v66 = v193 - 12;
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v193 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v192 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  sub_21E94B4((void **)&v185, "CastleSmallCorridorRightTurnPiece");
  v186 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v186, &v185);
  v187 = 5;
  v189 = 10;
  v188 = 0;
  v190 = 0;
  v191 = 0;
  v68 = *(_QWORD *)(v4 + 56);
  if ( (_DWORD)v68 == HIDWORD(v68) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(v156, &v186);
    *(_DWORD *)v68 = v186;
    v69 = v68 + 4;
    v186 = (char *)&unk_28898CC;
    v70 = v188;
    v71 = v189;
    v72 = v190;
    *(_DWORD *)v69 = v187;
    *(_DWORD *)(v69 + 4) = v70;
    *(_DWORD *)(v69 + 8) = v71;
    *(_DWORD *)(v69 + 12) = v72;
    *(_BYTE *)(v69 + 16) = v191;
  v73 = v186 - 12;
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v186 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (void *)(v185 - 12);
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v185 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  sub_21E94B4((void **)&v178, "CastleSmallCorridorLeftTurnPiece");
  v179 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v179, &v178);
  v180 = 5;
  v182 = 10;
  v181 = 0;
  v183 = 0;
  v184 = 0;
  v75 = *(_QWORD *)(v4 + 56);
  if ( (_DWORD)v75 == HIDWORD(v75) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(v156, &v179);
    *(_DWORD *)v75 = v179;
    v76 = v75 + 4;
    v179 = (char *)&unk_28898CC;
    v77 = v181;
    v78 = v182;
    v79 = v183;
    *(_DWORD *)v76 = v180;
    *(_DWORD *)(v76 + 4) = v77;
    *(_DWORD *)(v76 + 8) = v78;
    *(_DWORD *)(v76 + 12) = v79;
    *(_BYTE *)(v76 + 16) = v184;
  v80 = v179 - 12;
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v179 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  v81 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v178 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  sub_21E94B4((void **)&v171, "CastleCorridorStairsPiece");
  v172 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v172, &v171);
  v173 = 10;
  v175 = 3;
  v174 = 0;
  v176 = 0;
  v177 = 1;
  v82 = *(_QWORD *)(v4 + 56);
  if ( (_DWORD)v82 == HIDWORD(v82) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(v156, &v172);
    *(_DWORD *)v82 = v172;
    v83 = v82 + 4;
    v172 = (char *)&unk_28898CC;
    v84 = v174;
    v85 = v175;
    v86 = v176;
    *(_DWORD *)v83 = v173;
    *(_DWORD *)(v83 + 4) = v84;
    *(_DWORD *)(v83 + 8) = v85;
    *(_DWORD *)(v83 + 12) = v86;
    *(_BYTE *)(v83 + 16) = v177;
  v87 = v172 - 12;
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v172 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v87);
  v88 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v171 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  sub_21E94B4((void **)&v164, "CastleCorridorTBalconyPiece");
  v165 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v165, &v164);
  v166 = 7;
  v168 = 2;
  v167 = 0;
  v169 = 0;
  v170 = 0;
  v89 = *(_QWORD *)(v4 + 56);
  if ( (_DWORD)v89 == HIDWORD(v89) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(v156, &v165);
    *(_DWORD *)v89 = v165;
    v90 = v89 + 4;
    v165 = (char *)&unk_28898CC;
    v91 = v167;
    v92 = v168;
    v93 = v169;
    *(_DWORD *)v90 = v166;
    *(_DWORD *)(v90 + 4) = v91;
    *(_DWORD *)(v90 + 8) = v92;
    *(_DWORD *)(v90 + 12) = v93;
    *(_BYTE *)(v90 + 16) = v170;
  v94 = v165 - 12;
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v165 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  v95 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v164 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  sub_21E94B4((void **)&v157, "CastleStalkRoom");
  v158 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v158, &v157);
  v159 = 5;
  v161 = 2;
  v160 = 0;
  v162 = 0;
  v163 = 0;
  v96 = *(_QWORD *)(v4 + 56);
  if ( (_DWORD)v96 == HIDWORD(v96) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(v156, &v158);
    *(_DWORD *)v96 = v158;
    v97 = v96 + 4;
    v158 = (char *)&unk_28898CC;
    v98 = v160;
    v99 = v161;
    v100 = v162;
    *(_DWORD *)v97 = v159;
    *(_DWORD *)(v97 + 4) = v98;
    *(_DWORD *)(v97 + 8) = v99;
    *(_DWORD *)(v97 + 12) = v100;
    *(_BYTE *)(v97 + 16) = v163;
  v101 = v158 - 12;
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v158 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j__ZdlPv_9(v101);
  v102 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v157 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  return v4;
}
