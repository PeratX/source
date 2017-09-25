

int __fastcall VillageStart::VillageStart(int a1, int a2, Random *a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r8@1
  Random *v8; // r9@1
  unsigned int v9; // r4@1
  int v10; // r11@1
  int v11; // r10@1
  int v12; // r5@1
  unsigned int v13; // r1@3
  char v14; // r5@6
  unsigned int v15; // r5@6
  int v16; // r0@6
  int v17; // r5@6
  unsigned int v18; // r1@8
  unsigned int v19; // r5@11
  int v20; // r5@11
  unsigned int v21; // r1@13
  unsigned int v22; // r5@16
  int v23; // r0@19
  int v24; // r4@19
  unsigned int v25; // r1@21
  char *v26; // r0@24
  char *v27; // r0@25
  char *v28; // r0@26
  char *v29; // r0@27
  char *v30; // r0@28
  char *v31; // r0@29
  char *v32; // r0@30
  char *v33; // r0@31
  char *v34; // r0@32
  void *v35; // r0@33
  void *v36; // r0@34
  void *v37; // r0@35
  void *v38; // r0@36
  void *v39; // r0@37
  void *v40; // r0@38
  void *v41; // r0@39
  void *v42; // r0@40
  void *v43; // r0@41
  void *v44; // r8@42
  int v45; // r0@42
  unsigned int *v46; // r2@44
  signed int v47; // r1@46
  signed int v48; // r1@55
  int v49; // r6@56
  int v50; // r0@56
  int v51; // r5@57
  int v52; // r1@57
  int v53; // r3@57
  int v54; // r4@57
  int v55; // r7@57
  int v56; // r1@59
  void *v57; // r0@59
  unsigned int v58; // r0@62
  signed int v59; // r2@62
  int v60; // r1@62
  int v61; // r0@63
  int *v62; // r4@63
  int v63; // r5@63
  unsigned int v64; // r5@64
  void *v65; // r4@64
  char v66; // r2@64
  __int64 v67; // r0@66
  int *v68; // r0@71
  int *v69; // r2@71
  unsigned int v70; // r1@72
  int *v71; // r0@74
  int v72; // r1@74
  int v73; // r7@74
  bool v74; // zf@74
  int *v75; // r0@79
  int *v76; // r2@79
  unsigned int v77; // r1@80
  int *v78; // r0@82
  int v79; // r1@82
  int v80; // r7@82
  bool v81; // zf@82
  void *v82; // r4@87
  void *v83; // r6@87
  unsigned int *v84; // r2@89
  signed int v85; // r1@91
  int *v86; // r0@97
  unsigned int *v88; // r2@103
  signed int v89; // r1@105
  unsigned int *v90; // r2@107
  signed int v91; // r1@109
  unsigned int *v92; // r2@111
  signed int v93; // r1@113
  unsigned int *v94; // r2@115
  signed int v95; // r1@117
  unsigned int *v96; // r2@119
  signed int v97; // r1@121
  unsigned int *v98; // r2@123
  signed int v99; // r1@125
  unsigned int *v100; // r2@127
  signed int v101; // r1@129
  unsigned int *v102; // r2@131
  signed int v103; // r1@133
  unsigned int *v104; // r2@135
  signed int v105; // r1@137
  unsigned int *v106; // r2@139
  signed int v107; // r1@141
  unsigned int *v108; // r2@143
  signed int v109; // r1@145
  unsigned int *v110; // r2@147
  signed int v111; // r1@149
  unsigned int *v112; // r2@151
  signed int v113; // r1@153
  unsigned int *v114; // r2@155
  signed int v115; // r1@157
  unsigned int *v116; // r2@159
  signed int v117; // r1@161
  unsigned int *v118; // r2@163
  signed int v119; // r1@165
  unsigned int *v120; // r2@167
  signed int v121; // r1@169
  unsigned int *v122; // r2@171
  signed int v123; // r1@173
  int v124; // [sp+18h] [bp-B38h]@1
  int v125; // [sp+1Ch] [bp-B34h]@6
  int v126; // [sp+20h] [bp-B30h]@1
  void *v127; // [sp+24h] [bp-B2Ch]@66
  unsigned int v128; // [sp+28h] [bp-B28h]@62
  unsigned int v129; // [sp+2Ch] [bp-B24h]@62
  int v130; // [sp+9ECh] [bp-164h]@62
  char v131; // [sp+9F0h] [bp-160h]@62
  int v132; // [sp+9F4h] [bp-15Ch]@62
  int v133; // [sp+9F8h] [bp-158h]@64
  int v134; // [sp+A00h] [bp-150h]@19
  int v135; // [sp+A08h] [bp-148h]@16
  int v136; // [sp+A10h] [bp-140h]@11
  int v137; // [sp+A18h] [bp-138h]@11
  int v138; // [sp+A20h] [bp-130h]@11
  int v139; // [sp+A28h] [bp-128h]@6
  int v140; // [sp+A30h] [bp-120h]@6
  int v141; // [sp+A38h] [bp-118h]@6
  int v142; // [sp+A40h] [bp-110h]@1
  char *v143; // [sp+A44h] [bp-10Ch]@6
  int v144; // [sp+A48h] [bp-108h]@6
  int v145; // [sp+A4Ch] [bp-104h]@6
  int v146; // [sp+A50h] [bp-100h]@6
  int v147; // [sp+A54h] [bp-FCh]@6
  char v148; // [sp+A58h] [bp-F8h]@6
  char *v149; // [sp+A5Ch] [bp-F4h]@6
  int v150; // [sp+A60h] [bp-F0h]@6
  int v151; // [sp+A64h] [bp-ECh]@6
  int v152; // [sp+A68h] [bp-E8h]@6
  int v153; // [sp+A6Ch] [bp-E4h]@6
  char v154; // [sp+A70h] [bp-E0h]@6
  char *v155; // [sp+A74h] [bp-DCh]@6
  int v156; // [sp+A78h] [bp-D8h]@6
  int v157; // [sp+A7Ch] [bp-D4h]@6
  unsigned int v158; // [sp+A80h] [bp-D0h]@6
  int v159; // [sp+A84h] [bp-CCh]@6
  char v160; // [sp+A88h] [bp-C8h]@6
  char *v161; // [sp+A8Ch] [bp-C4h]@11
  int v162; // [sp+A90h] [bp-C0h]@11
  int v163; // [sp+A94h] [bp-BCh]@11
  int v164; // [sp+A98h] [bp-B8h]@11
  int v165; // [sp+A9Ch] [bp-B4h]@11
  char v166; // [sp+AA0h] [bp-B0h]@11
  char *v167; // [sp+AA4h] [bp-ACh]@11
  int v168; // [sp+AA8h] [bp-A8h]@11
  int v169; // [sp+AACh] [bp-A4h]@11
  unsigned int v170; // [sp+AB0h] [bp-A0h]@11
  int v171; // [sp+AB4h] [bp-9Ch]@11
  char v172; // [sp+AB8h] [bp-98h]@11
  char *v173; // [sp+ABCh] [bp-94h]@11
  int v174; // [sp+AC0h] [bp-90h]@11
  int v175; // [sp+AC4h] [bp-8Ch]@11
  unsigned int v176; // [sp+AC8h] [bp-88h]@11
  int v177; // [sp+ACCh] [bp-84h]@11
  char v178; // [sp+AD0h] [bp-80h]@11
  char *v179; // [sp+AD4h] [bp-7Ch]@16
  int v180; // [sp+AD8h] [bp-78h]@16
  int v181; // [sp+ADCh] [bp-74h]@16
  int v182; // [sp+AE0h] [bp-70h]@16
  int v183; // [sp+AE4h] [bp-6Ch]@16
  char v184; // [sp+AE8h] [bp-68h]@16
  char *v185; // [sp+AECh] [bp-64h]@19
  int v186; // [sp+AF0h] [bp-60h]@19
  int v187; // [sp+AF4h] [bp-5Ch]@19
  unsigned int v188; // [sp+AF8h] [bp-58h]@19
  int v189; // [sp+AFCh] [bp-54h]@19
  char v190; // [sp+B00h] [bp-50h]@19
  char *v191; // [sp+B04h] [bp-4Ch]@24
  int v192; // [sp+B08h] [bp-48h]@24
  int v193; // [sp+B0Ch] [bp-44h]@24
  int v194; // [sp+B10h] [bp-40h]@24
  int v195; // [sp+B14h] [bp-3Ch]@24
  char v196; // [sp+B18h] [bp-38h]@24
  void *ptr; // [sp+B1Ch] [bp-34h]@1
  void *v198; // [sp+B20h] [bp-30h]@1
  int v199; // [sp+B24h] [bp-2Ch]@1

  v6 = a4;
  v7 = a2;
  v8 = a3;
  v126 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)a1 = &off_272429C;
  ptr = 0;
  v198 = 0;
  v199 = 0;
  sub_21E94B4((void **)&v142, "SimpleHouse");
  v124 = v6;
  v9 = a6 + 2;
  v10 = 2 * a6 + 2;
  v11 = 2 * a6 + 5;
  v12 = a6 + 2;
  if ( v10 >= a6 )
  {
    if ( v11 == v9 )
      v13 = 0;
    else
      v13 = j_Random::_genRandInt32(v8) % (v11 - v9);
    v12 = v13 + v9;
  }
  v125 = v7;
  v143 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v143, &v142);
  v144 = 4;
  v146 = v12;
  v145 = 0;
  v147 = 0;
  v148 = 0;
  sub_21E94B4((void **)&v141, "SmallTemple");
  v14 = j_Random::_genRandInt32(v8);
  v149 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v149, &v141);
  v150 = 20;
  v152 = (v14 & 1) + a6;
  v151 = 0;
  v153 = 0;
  v154 = 0;
  sub_21E94B4((void **)&v140, "BookHouse");
  v15 = j_Random::_genRandInt32(v8);
  v155 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v155, &v140);
  v156 = 20;
  v158 = v15 % 3 + a6;
  v157 = 0;
  v159 = 0;
  v160 = 0;
  sub_21E94B4((void **)&v139, "SmallHut");
  v16 = 3 * a6;
  v17 = a6 + 2;
  if ( 3 * a6 + 3 >= a6 )
    if ( v16 + 6 == v9 )
      v18 = 0;
      v18 = j_Random::_genRandInt32(v8) % (v16 + 6 - v9);
    v17 = v18 + v9;
  v161 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v161, &v139);
  v162 = 3;
  v164 = v17;
  v163 = 0;
  v165 = 0;
  v166 = 0;
  sub_21E94B4((void **)&v138, "PigHouse");
  v19 = j_Random::_genRandInt32(v8);
  v167 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v167, &v138);
  v168 = 15;
  v170 = v19 % 3 + a6;
  v169 = 0;
  v171 = 0;
  v172 = 0;
  sub_21E94B4((void **)&v137, "DoubleFarmland");
  LOBYTE(v19) = j_Random::_genRandInt32(v8);
  v173 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v173, &v137);
  v174 = 3;
  v176 = a6 + 1 + (v19 & 3);
  v175 = 0;
  v177 = 0;
  v178 = 0;
  sub_21E94B4((void **)&v136, "Farmland");
  v20 = a6 + 2;
      v21 = 0;
      v21 = j_Random::_genRandInt32(v8) % (v11 - v9);
    v20 = v21 + v9;
  v179 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v179, &v136);
  v180 = 3;
  v182 = v20;
  v181 = 0;
  v183 = 0;
  v184 = 0;
  sub_21E94B4((void **)&v135, "Smithy");
  v22 = 0;
  if ( a6 >= -1 && a6 != -2 )
    v22 = j_Random::_genRandInt32(v8) % v9;
  v185 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v185, &v135);
  v186 = 15;
  v188 = v22;
  v187 = 0;
  v189 = 0;
  v190 = 0;
  sub_21E94B4((void **)&v134, "TwoRoomHouse");
  v23 = 2 * a6;
  v24 = a6;
  if ( 2 * a6 + 3 >= a6 )
    if ( v23 + 4 == a6 )
      v25 = 0;
      v25 = j_Random::_genRandInt32(v8) % (v23 + 4 - a6);
    v24 = v25 + a6;
  v191 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v191, &v134);
  v192 = 8;
  v194 = v24;
  v193 = 0;
  v195 = 0;
  v196 = 0;
  j_std::vector<PieceWeight,std::allocator<PieceWeight>>::_M_assign_aux<PieceWeight const*>(
    (int)&ptr,
    (int)&v143,
    (int)&ptr);
  v26 = v191 - 12;
  if ( (int *)(v191 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v191 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
    }
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = v185 - 12;
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v185 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = v179 - 12;
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v179 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v173 - 12;
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v173 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = v167 - 12;
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v167 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = v161 - 12;
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v161 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = v155 - 12;
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v155 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = v149 - 12;
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v149 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = v143 - 12;
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v143 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v134 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v135 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v136 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v137 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v138 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v139 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v140 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v141 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v142 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = ptr;
  v45 = (int)v198;
  while ( v44 != (void *)v45 )
    if ( *((_DWORD *)v44 + 3) )
      v44 = (char *)v44 + 24;
      if ( (char *)v44 + 24 != (void *)v45 )
      {
        v48 = v45 - ((_DWORD)v44 + 24);
        if ( v48 >= 1 )
        {
          v49 = -1431655765 * (v48 >> 3) + 1;
          v50 = (int)v44;
          do
          {
            v51 = v50 + 24;
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)v50,
              (int *)(v50 + 24));
            v52 = v51 - 20;
            --v49;
            v53 = *(_DWORD *)(v51 + 8);
            v54 = *(_DWORD *)(v51 + 12);
            v55 = *(_DWORD *)(v51 + 16);
            *(_DWORD *)v52 = *(_DWORD *)(v51 + 4);
            *(_DWORD *)(v52 + 4) = v53;
            *(_DWORD *)(v52 + 8) = v54;
            *(_DWORD *)(v52 + 12) = v55;
            *(_BYTE *)(v51 - 4) = *(_BYTE *)(v51 + 20);
            v50 = v51;
          }
          while ( v49 > 1 );
          v45 = (int)v198;
        }
      }
      v198 = (void *)(v45 - 24);
      v56 = *(_DWORD *)(v45 - 24);
      v57 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v56 - 4);
        if ( &pthread_create )
          __dmb();
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
        else
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v57);
      v45 = (int)v198;
  v58 = *(_DWORD *)v8;
  v128 = v58;
  v59 = 1;
  v130 = 625;
  v60 = 0;
  v131 = 0;
  v132 = 0;
  v129 = v58;
  do
    v61 = v58 ^ (v58 >> 30);
    v62 = (int *)(&v128 + v60);
    v63 = v60++ + 1812433253 * v61;
    v58 = v59++ + 1812433253 * v61;
    v62[2] = v63 + 1;
  while ( v60 != 397 );
  v130 = 624;
  v133 = 398;
  v64 = j_Random::_genRandInt32((Random *)&v128);
  v65 = j_operator new(0x64u);
  v66 = 0;
  if ( !(v64 % 0x32) )
    v66 = 1;
  j_StartPiece::StartPiece((int)v65, v125, 0, v8, 16 * v124 | 2, 16 * a5 | 2, (int)&ptr, a6, v66);
  v127 = v65;
  v67 = *(_QWORD *)(v126 + 40);
  if ( (_DWORD)v67 == HIDWORD(v67) )
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
      (_QWORD *)(v126 + 36),
      (int *)&v127);
    if ( v127 )
      (*(void (**)(void))(*(_DWORD *)v127 + 4))();
  else
    v127 = 0;
    *(_DWORD *)v67 = v65;
    *(_DWORD *)(v126 + 40) = v67 + 4;
  v127 = 0;
  (*(void (__fastcall **)(void *, void *, int, Random *))(*(_DWORD *)v65 + 16))(v65, v65, v126 + 36, v8);
  while ( 1 )
    while ( 1 )
      v69 = (int *)(*(_QWORD *)((char *)v65 + 68) >> 32);
      v68 = (int *)*(_QWORD *)((char *)v65 + 68);
      if ( v68 == v69 )
        break;
      v70 = 0;
      if ( v69 - v68 )
        v70 = j_Random::_genRandInt32(v8) % (v69 - v68);
        v69 = (int *)(*(_QWORD *)((char *)v65 + 68) >> 32);
        v68 = (int *)*(_QWORD *)((char *)v65 + 68);
      v71 = &v68[v70];
      v72 = (int)(v71 + 1);
      v73 = *v71;
      v74 = v71 + 1 == v69;
      if ( v71 + 1 != v69 )
        v74 = v69 == (int *)v72;
      if ( !v74 )
        j___aeabi_memmove4_0((int)v71, v72);
        v69 = (int *)*((_DWORD *)v65 + 18);
      *((_DWORD *)v65 + 18) = v69 - 1;
      (*(void (__fastcall **)(int, void *, int, Random *))(*(_DWORD *)v73 + 16))(v73, v65, v126 + 36, v8);
    v76 = (int *)(*((_QWORD *)v65 + 7) >> 32);
    v75 = (int *)*((_QWORD *)v65 + 7);
    if ( v75 == v76 )
      break;
    v77 = 0;
    if ( v76 - v75 )
      v77 = j_Random::_genRandInt32(v8) % (v76 - v75);
      v76 = (int *)(*((_QWORD *)v65 + 7) >> 32);
      v75 = (int *)*((_QWORD *)v65 + 7);
    v78 = &v75[v77];
    v79 = (int)(v78 + 1);
    v80 = *v78;
    v81 = v78 + 1 == v76;
    if ( v78 + 1 != v76 )
      v81 = v76 == (int *)v79;
    if ( !v81 )
      j___aeabi_memmove4_0((int)v78, v79);
      v76 = (int *)*((_DWORD *)v65 + 15);
    *((_DWORD *)v65 + 15) = v76 - 1;
    (*(void (__fastcall **)(int, void *, int, Random *))(*(_DWORD *)v80 + 16))(v80, v65, v126 + 36, v8);
  j_StructureStart::calculateBoundingBox((StructureStart *)v126);
  *(_BYTE *)(v126 + 48) = 1;
  v82 = ptr;
  v83 = v198;
  if ( ptr != v198 )
    do
      v86 = (int *)(*(_DWORD *)v82 - 12);
      if ( v86 != &dword_28898C0 )
        v84 = (unsigned int *)(*(_DWORD *)v82 - 4);
            v85 = __ldrex(v84);
          while ( __strex(v85 - 1, v84) );
          v85 = (*v84)--;
        if ( v85 <= 0 )
          j_j_j_j__ZdlPv_9(v86);
      v82 = (char *)v82 + 24;
    while ( v82 != v83 );
    v82 = ptr;
  if ( v82 )
    j_operator delete(v82);
  return v126;
}


void __fastcall VillageStart::~VillageStart(VillageStart *this)
{
  VillageStart *v1; // r4@1
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


void __fastcall VillageStart::~VillageStart(VillageStart *this)
{
  VillageStart::~VillageStart(this);
}


signed int __fastcall VillageStart::getType(VillageStart *this)
{
  return 7;
}
