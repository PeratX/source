

void __fastcall StrongholdStart::~StrongholdStart(StrongholdStart *this)
{
  StrongholdStart::~StrongholdStart(this);
}


void __fastcall StrongholdStart::~StrongholdStart(StrongholdStart *this)
{
  StrongholdStart *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_271946C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall StrongholdStart::StrongholdStart(int a1, int a2, Random *a3, int a4, int a5)
{
  int v5; // r9@1
  int v6; // r8@1
  int v7; // r4@1
  Random *v8; // r11@1
  _QWORD *v9; // r10@1
  SHStartPiece *v10; // r6@1
  __int64 v11; // r0@1
  int v12; // r6@5
  __int64 v13; // r0@5
  int v14; // r0@6
  int v15; // r3@6
  int v16; // r5@6
  int v17; // r7@6
  char *v18; // r0@8
  void *v19; // r0@9
  __int64 v20; // r0@10
  int v21; // r0@11
  int v22; // r3@11
  int v23; // r5@11
  int v24; // r7@11
  char *v25; // r0@13
  void *v26; // r0@14
  __int64 v27; // r0@15
  int v28; // r0@16
  int v29; // r3@16
  int v30; // r5@16
  int v31; // r7@16
  char *v32; // r0@18
  void *v33; // r0@19
  __int64 v34; // r0@20
  int v35; // r0@21
  int v36; // r3@21
  int v37; // r5@21
  int v38; // r7@21
  char *v39; // r0@23
  void *v40; // r0@24
  __int64 v41; // r0@25
  int v42; // r0@26
  int v43; // r3@26
  int v44; // r5@26
  int v45; // r7@26
  char *v46; // r0@28
  void *v47; // r0@29
  __int64 v48; // r0@30
  int v49; // r0@31
  int v50; // r3@31
  int v51; // r5@31
  int v52; // r7@31
  char *v53; // r0@33
  void *v54; // r0@34
  __int64 v55; // r0@35
  int v56; // r0@36
  int v57; // r3@36
  int v58; // r5@36
  int v59; // r7@36
  char *v60; // r0@38
  void *v61; // r0@39
  __int64 v62; // r0@40
  int v63; // r0@41
  int v64; // r3@41
  int v65; // r5@41
  int v66; // r7@41
  char *v67; // r0@43
  void *v68; // r0@44
  __int64 v69; // r0@45
  int v70; // r0@46
  int v71; // r3@46
  int v72; // r5@46
  int v73; // r7@46
  char *v74; // r0@48
  void *v75; // r0@49
  __int64 v76; // r0@50
  int v77; // r0@51
  int v78; // r3@51
  int v79; // r5@51
  int v80; // r7@51
  char *v81; // r0@53
  void *v82; // r0@54
  __int64 v83; // r0@55
  int v84; // r0@56
  int v85; // r3@56
  int v86; // r5@56
  int v87; // r7@56
  char *v88; // r0@58
  void *v89; // r0@59
  int *v90; // r0@61
  int *v91; // r2@61
  unsigned int v92; // r1@62
  int *v93; // r0@64
  int v94; // r1@64
  int v95; // r4@64
  bool v96; // zf@64
  unsigned int *v98; // r2@70
  signed int v99; // r1@72
  unsigned int *v100; // r2@74
  signed int v101; // r1@76
  unsigned int *v102; // r2@78
  signed int v103; // r1@80
  unsigned int *v104; // r2@82
  signed int v105; // r1@84
  unsigned int *v106; // r2@86
  signed int v107; // r1@88
  unsigned int *v108; // r2@90
  signed int v109; // r1@92
  unsigned int *v110; // r2@94
  signed int v111; // r1@96
  unsigned int *v112; // r2@98
  signed int v113; // r1@100
  unsigned int *v114; // r2@102
  signed int v115; // r1@104
  unsigned int *v116; // r2@106
  signed int v117; // r1@108
  unsigned int *v118; // r2@110
  signed int v119; // r1@112
  unsigned int *v120; // r2@114
  signed int v121; // r1@116
  unsigned int *v122; // r2@118
  signed int v123; // r1@120
  unsigned int *v124; // r2@122
  signed int v125; // r1@124
  unsigned int *v126; // r2@126
  signed int v127; // r1@128
  unsigned int *v128; // r2@130
  signed int v129; // r1@132
  unsigned int *v130; // r2@134
  signed int v131; // r1@136
  unsigned int *v132; // r2@138
  signed int v133; // r1@140
  unsigned int *v134; // r2@142
  signed int v135; // r1@144
  unsigned int *v136; // r2@146
  signed int v137; // r1@148
  unsigned int *v138; // r2@150
  signed int v139; // r1@152
  unsigned int *v140; // r2@154
  signed int v141; // r1@156
  int v142; // [sp+Ch] [bp-18Ch]@55
  char *v143; // [sp+10h] [bp-188h]@55
  int v144; // [sp+14h] [bp-184h]@55
  int v145; // [sp+18h] [bp-180h]@55
  int v146; // [sp+1Ch] [bp-17Ch]@55
  int v147; // [sp+20h] [bp-178h]@55
  char v148; // [sp+24h] [bp-174h]@55
  int v149; // [sp+2Ch] [bp-16Ch]@50
  char *v150; // [sp+30h] [bp-168h]@50
  int v151; // [sp+34h] [bp-164h]@50
  int v152; // [sp+38h] [bp-160h]@50
  int v153; // [sp+3Ch] [bp-15Ch]@50
  int v154; // [sp+40h] [bp-158h]@50
  char v155; // [sp+44h] [bp-154h]@50
  int v156; // [sp+4Ch] [bp-14Ch]@45
  char *v157; // [sp+50h] [bp-148h]@45
  int v158; // [sp+54h] [bp-144h]@45
  int v159; // [sp+58h] [bp-140h]@45
  int v160; // [sp+5Ch] [bp-13Ch]@45
  int v161; // [sp+60h] [bp-138h]@45
  char v162; // [sp+64h] [bp-134h]@45
  int v163; // [sp+6Ch] [bp-12Ch]@40
  char *v164; // [sp+70h] [bp-128h]@40
  int v165; // [sp+74h] [bp-124h]@40
  int v166; // [sp+78h] [bp-120h]@40
  int v167; // [sp+7Ch] [bp-11Ch]@40
  int v168; // [sp+80h] [bp-118h]@40
  char v169; // [sp+84h] [bp-114h]@40
  int v170; // [sp+8Ch] [bp-10Ch]@35
  char *v171; // [sp+90h] [bp-108h]@35
  int v172; // [sp+94h] [bp-104h]@35
  int v173; // [sp+98h] [bp-100h]@35
  int v174; // [sp+9Ch] [bp-FCh]@35
  int v175; // [sp+A0h] [bp-F8h]@35
  char v176; // [sp+A4h] [bp-F4h]@35
  int v177; // [sp+ACh] [bp-ECh]@30
  char *v178; // [sp+B0h] [bp-E8h]@30
  int v179; // [sp+B4h] [bp-E4h]@30
  int v180; // [sp+B8h] [bp-E0h]@30
  int v181; // [sp+BCh] [bp-DCh]@30
  int v182; // [sp+C0h] [bp-D8h]@30
  char v183; // [sp+C4h] [bp-D4h]@30
  int v184; // [sp+CCh] [bp-CCh]@25
  char *v185; // [sp+D0h] [bp-C8h]@25
  int v186; // [sp+D4h] [bp-C4h]@25
  int v187; // [sp+D8h] [bp-C0h]@25
  int v188; // [sp+DCh] [bp-BCh]@25
  int v189; // [sp+E0h] [bp-B8h]@25
  char v190; // [sp+E4h] [bp-B4h]@25
  int v191; // [sp+ECh] [bp-ACh]@20
  char *v192; // [sp+F0h] [bp-A8h]@20
  int v193; // [sp+F4h] [bp-A4h]@20
  int v194; // [sp+F8h] [bp-A0h]@20
  int v195; // [sp+FCh] [bp-9Ch]@20
  int v196; // [sp+100h] [bp-98h]@20
  char v197; // [sp+104h] [bp-94h]@20
  int v198; // [sp+10Ch] [bp-8Ch]@15
  char *v199; // [sp+110h] [bp-88h]@15
  int v200; // [sp+114h] [bp-84h]@15
  int v201; // [sp+118h] [bp-80h]@15
  int v202; // [sp+11Ch] [bp-7Ch]@15
  int v203; // [sp+120h] [bp-78h]@15
  char v204; // [sp+124h] [bp-74h]@15
  int v205; // [sp+12Ch] [bp-6Ch]@10
  char *v206; // [sp+130h] [bp-68h]@10
  int v207; // [sp+134h] [bp-64h]@10
  int v208; // [sp+138h] [bp-60h]@10
  int v209; // [sp+13Ch] [bp-5Ch]@10
  int v210; // [sp+140h] [bp-58h]@10
  char v211; // [sp+144h] [bp-54h]@10
  int v212; // [sp+14Ch] [bp-4Ch]@5
  char *v213; // [sp+150h] [bp-48h]@5
  int v214; // [sp+154h] [bp-44h]@5
  int v215; // [sp+158h] [bp-40h]@5
  int v216; // [sp+15Ch] [bp-3Ch]@5
  int v217; // [sp+160h] [bp-38h]@5
  char v218; // [sp+164h] [bp-34h]@5
  SHStartPiece *v219; // [sp+16Ch] [bp-2Ch]@1

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 36) = 0;
  v9 = (_QWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)a1 = &off_2723E48;
  v10 = (SHStartPiece *)j_operator new(0x50u);
  j_SHStartPiece::SHStartPiece(v10, 0, v8, 16 * v7 | 2, 16 * a5 | 2);
  v219 = v10;
  v11 = *(_QWORD *)(v5 + 40);
  if ( (_DWORD)v11 == HIDWORD(v11) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
      v9,
      (int *)&v219);
    if ( v219 )
      (*(void (**)(void))(*(_DWORD *)v219 + 4))();
  }
  else
    v219 = 0;
    *(_DWORD *)v11 = v10;
    *(_DWORD *)(v5 + 40) = v11 + 4;
  v219 = 0;
  v12 = *(_DWORD *)(*(_DWORD *)(v5 + 40) - 4);
  sub_21E94B4((void **)&v212, "Straight");
  v213 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v213, &v212);
  v214 = 40;
  v218 = 0;
  v217 = 0;
  v215 = 0;
  v216 = 0;
  v13 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v13 == HIDWORD(v13) )
    j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_emplace_back_aux<PieceWeight>(
      (unsigned __int64 *)(v12 + 68),
      &v213);
    *(_DWORD *)v13 = v213;
    v14 = v13 + 4;
    v213 = (char *)&unk_28898CC;
    v15 = *(_DWORD *)(((unsigned int)&v213 | 4) + 4);
    v16 = *(_DWORD *)(((unsigned int)&v213 | 4) + 8);
    v17 = *(_DWORD *)(((unsigned int)&v213 | 4) + 0xC);
    *(_DWORD *)v14 = *(_DWORD *)((unsigned int)&v213 | 4);
    *(_DWORD *)(v14 + 4) = v15;
    *(_DWORD *)(v14 + 8) = v16;
    *(_DWORD *)(v14 + 12) = v17;
    *(_BYTE *)(v14 + 16) = *(_BYTE *)(((unsigned int)&v213 | 4) + 0x10);
    *(_DWORD *)(v12 + 72) += 24;
  v18 = v213 - 12;
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v213 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
    }
    else
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v212 - 12);
  if ( (int *)(v212 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v212 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v205, "PrisonHall");
  v206 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v206, &v205);
  v207 = 5;
  v209 = 5;
  v208 = 0;
  v210 = 0;
  v211 = 0;
  v20 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v20 == HIDWORD(v20) )
      &v206);
    *(_DWORD *)v20 = v206;
    v21 = v20 + 4;
    v206 = (char *)&unk_28898CC;
    v22 = v208;
    v23 = v209;
    v24 = v210;
    *(_DWORD *)v21 = v207;
    *(_DWORD *)(v21 + 4) = v22;
    *(_DWORD *)(v21 + 8) = v23;
    *(_DWORD *)(v21 + 12) = v24;
    *(_BYTE *)(v21 + 16) = v211;
  v25 = v206 - 12;
  if ( (int *)(v206 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v206 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v205 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v198, "LeftTurn");
  v199 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v199, &v198);
  v200 = 20;
  v204 = 0;
  v203 = 0;
  v201 = 0;
  v202 = 0;
  v27 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v27 == HIDWORD(v27) )
      &v199);
    *(_DWORD *)v27 = v199;
    v28 = v27 + 4;
    v199 = (char *)&unk_28898CC;
    v29 = *(_DWORD *)(((unsigned int)&v199 | 4) + 4);
    v30 = *(_DWORD *)(((unsigned int)&v199 | 4) + 8);
    v31 = *(_DWORD *)(((unsigned int)&v199 | 4) + 0xC);
    *(_DWORD *)v28 = *(_DWORD *)((unsigned int)&v199 | 4);
    *(_DWORD *)(v28 + 4) = v29;
    *(_DWORD *)(v28 + 8) = v30;
    *(_DWORD *)(v28 + 12) = v31;
    *(_BYTE *)(v28 + 16) = *(_BYTE *)(((unsigned int)&v199 | 4) + 0x10);
  v32 = v199 - 12;
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v199 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v198 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v191, "RightTurn");
  v192 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v192, &v191);
  v193 = 20;
  v197 = 0;
  v196 = 0;
  v194 = 0;
  v195 = 0;
  v34 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v34 == HIDWORD(v34) )
      &v192);
    *(_DWORD *)v34 = v192;
    v35 = v34 + 4;
    v192 = (char *)&unk_28898CC;
    v36 = *(_DWORD *)(((unsigned int)&v192 | 4) + 4);
    v37 = *(_DWORD *)(((unsigned int)&v192 | 4) + 8);
    v38 = *(_DWORD *)(((unsigned int)&v192 | 4) + 0xC);
    *(_DWORD *)v35 = *(_DWORD *)((unsigned int)&v192 | 4);
    *(_DWORD *)(v35 + 4) = v36;
    *(_DWORD *)(v35 + 8) = v37;
    *(_DWORD *)(v35 + 12) = v38;
    *(_BYTE *)(v35 + 16) = *(_BYTE *)(((unsigned int)&v192 | 4) + 0x10);
  v39 = v192 - 12;
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v192 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v191 - 12);
  if ( (int *)(v191 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v191 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v184, "RoomCrossing");
  v185 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v185, &v184);
  v186 = 10;
  v188 = 6;
  v187 = 0;
  v189 = 0;
  v190 = 0;
  v41 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v41 == HIDWORD(v41) )
      &v185);
    *(_DWORD *)v41 = v185;
    v42 = v41 + 4;
    v185 = (char *)&unk_28898CC;
    v43 = v187;
    v44 = v188;
    v45 = v189;
    *(_DWORD *)v42 = v186;
    *(_DWORD *)(v42 + 4) = v43;
    *(_DWORD *)(v42 + 8) = v44;
    *(_DWORD *)(v42 + 12) = v45;
    *(_BYTE *)(v42 + 16) = v190;
  v46 = v185 - 12;
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v185 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v184 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v177, "StraightStairsDown");
  v178 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v178, &v177);
  v179 = 5;
  v181 = 5;
  v180 = 0;
  v182 = 0;
  v183 = 0;
  v48 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v48 == HIDWORD(v48) )
      &v178);
    *(_DWORD *)v48 = v178;
    v49 = v48 + 4;
    v178 = (char *)&unk_28898CC;
    v50 = v180;
    v51 = v181;
    v52 = v182;
    *(_DWORD *)v49 = v179;
    *(_DWORD *)(v49 + 4) = v50;
    *(_DWORD *)(v49 + 8) = v51;
    *(_DWORD *)(v49 + 12) = v52;
    *(_BYTE *)(v49 + 16) = v183;
  v53 = v178 - 12;
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v178 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v177 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  sub_21E94B4((void **)&v170, "StairsDown");
  v171 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v171, &v170);
  v172 = 5;
  v174 = 5;
  v173 = 0;
  v175 = 0;
  v176 = 0;
  v55 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v55 == HIDWORD(v55) )
      &v171);
    *(_DWORD *)v55 = v171;
    v56 = v55 + 4;
    v171 = (char *)&unk_28898CC;
    v57 = v173;
    v58 = v174;
    v59 = v175;
    *(_DWORD *)v56 = v172;
    *(_DWORD *)(v56 + 4) = v57;
    *(_DWORD *)(v56 + 8) = v58;
    *(_DWORD *)(v56 + 12) = v59;
    *(_BYTE *)(v56 + 16) = v176;
  v60 = v171 - 12;
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v171 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v170 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  sub_21E94B4((void **)&v163, "FiveCrossing");
  v164 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v164, &v163);
  v165 = 5;
  v167 = 4;
  v166 = 0;
  v168 = 0;
  v169 = 0;
  v62 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v62 == HIDWORD(v62) )
      &v164);
    *(_DWORD *)v62 = v164;
    v63 = v62 + 4;
    v164 = (char *)&unk_28898CC;
    v64 = v166;
    v65 = v167;
    v66 = v168;
    *(_DWORD *)v63 = v165;
    *(_DWORD *)(v63 + 4) = v64;
    *(_DWORD *)(v63 + 8) = v65;
    *(_DWORD *)(v63 + 12) = v66;
    *(_BYTE *)(v63 + 16) = v169;
  v67 = v164 - 12;
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v164 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v163 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  sub_21E94B4((void **)&v156, "ChestCorridor");
  v157 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v157, &v156);
  v158 = 5;
  v160 = 4;
  v159 = 0;
  v161 = 0;
  v162 = 0;
  v69 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v69 == HIDWORD(v69) )
      &v157);
    *(_DWORD *)v69 = v157;
    v70 = v69 + 4;
    v157 = (char *)&unk_28898CC;
    v71 = v159;
    v72 = v160;
    v73 = v161;
    *(_DWORD *)v70 = v158;
    *(_DWORD *)(v70 + 4) = v71;
    *(_DWORD *)(v70 + 8) = v72;
    *(_DWORD *)(v70 + 12) = v73;
    *(_BYTE *)(v70 + 16) = v162;
  v74 = v157 - 12;
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v157 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  v75 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v156 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  sub_21E94B4((void **)&v149, "Library");
  v150 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v150, &v149);
  v151 = 10;
  v153 = 2;
  v152 = 0;
  v154 = 5;
  v155 = 0;
  v76 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v76 == HIDWORD(v76) )
      &v150);
    *(_DWORD *)v76 = v150;
    v77 = v76 + 4;
    v150 = (char *)&unk_28898CC;
    v78 = v152;
    v79 = v153;
    v80 = v154;
    *(_DWORD *)v77 = v151;
    *(_DWORD *)(v77 + 4) = v78;
    *(_DWORD *)(v77 + 8) = v79;
    *(_DWORD *)(v77 + 12) = v80;
    *(_BYTE *)(v77 + 16) = v155;
  v81 = v150 - 12;
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v150 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  v82 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v149 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  sub_21E94B4((void **)&v142, "PortalRoom");
  v143 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v143, &v142);
  v144 = 10;
  v146 = 1;
  v145 = 0;
  v147 = 6;
  v148 = 0;
  v83 = *(_QWORD *)(v12 + 72);
  if ( (_DWORD)v83 == HIDWORD(v83) )
      &v143);
    *(_DWORD *)v83 = v143;
    v84 = v83 + 4;
    v143 = (char *)&unk_28898CC;
    v85 = v145;
    v86 = v146;
    v87 = v147;
    *(_DWORD *)v84 = v144;
    *(_DWORD *)(v84 + 4) = v85;
    *(_DWORD *)(v84 + 8) = v86;
    *(_DWORD *)(v84 + 12) = v87;
    *(_BYTE *)(v84 + 16) = v148;
  v88 = v143 - 12;
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v143 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v89 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v142 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  (*(void (__fastcall **)(int, int, _QWORD *, Random *))(*(_DWORD *)v12 + 16))(v12, v12, v9, v8);
  while ( 1 )
    v91 = (int *)(*(_QWORD *)(v12 + 44) >> 32);
    v90 = (int *)*(_QWORD *)(v12 + 44);
    if ( v90 == v91 )
      break;
    v92 = 0;
    if ( v91 - v90 )
      v92 = j_Random::_genRandInt32(v8) % (v91 - v90);
      v91 = (int *)(*(_QWORD *)(v12 + 44) >> 32);
      v90 = (int *)*(_QWORD *)(v12 + 44);
    v93 = &v90[v92];
    v94 = (int)(v93 + 1);
    v95 = *v93;
    v96 = v93 + 1 == v91;
    if ( v93 + 1 != v91 )
      v96 = v91 == (int *)v94;
    if ( !v96 )
      j___aeabi_memmove4_0((int)v93, v94);
      v91 = *(int **)(v12 + 48);
    *(_DWORD *)(v12 + 48) = v91 - 1;
    (*(void (__fastcall **)(int, int, _QWORD *, Random *))(*(_DWORD *)v95 + 16))(v95, v12, v9, v8);
  j_StructureStart::calculateBoundingBox((StructureStart *)v5);
  j_StructureStart::moveToLevel((StructureStart *)v5, v8, *(_WORD *)(v6 + 20) - 5);
  *(_BYTE *)(v5 + 48) = 1;
  return v5;
}


signed int __fastcall StrongholdStart::getType(StrongholdStart *this)
{
  return 5;
}
