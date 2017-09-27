

void __fastcall ToolRecipes::addRecipes(ToolRecipes *this, Recipes *a2)
{
  ToolRecipes::addRecipes(this, a2);
}


void __fastcall ToolRecipes::addRecipes(ToolRecipes *this, Recipes *a2)
{
  ToolRecipes *v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  void *v14; // r0@12
  int *v15; // r9@13
  int *v16; // r11@13
  signed int v17; // r6@13
  int *v18; // r2@13
  signed int v19; // r4@14
  signed int v20; // r5@14
  int v21; // r1@15
  int *v22; // r8@16
  int v23; // r6@16
  int v24; // r9@16
  void *v25; // r0@17
  void *v26; // r0@19
  int v27; // r0@21
  int v28; // r4@34
  int v29; // r6@34
  void *v30; // r0@35
  void *v31; // r0@37
  int v32; // r0@39
  int v33; // r2@54
  __int64 v34; // r4@54
  void *v35; // r0@55
  void *v36; // r0@57
  int v37; // r0@59
  void *v38; // r0@65
  unsigned int *v39; // r2@66
  void *v40; // r0@66
  void *v41; // r4@73
  void *v42; // r6@73
  unsigned int *v43; // r2@75
  signed int v44; // r1@77
  unsigned int *v45; // r2@79
  signed int v46; // r1@81
  unsigned int *v47; // r2@83
  signed int v48; // r1@85
  unsigned int *v49; // r2@87
  signed int v50; // r1@89
  unsigned int *v51; // r2@91
  signed int v52; // r1@93
  unsigned int *v53; // r2@95
  signed int v54; // r1@97
  unsigned int *v55; // r2@99
  signed int v56; // r1@101
  unsigned int *v57; // r2@103
  signed int v58; // r1@105
  unsigned int *v59; // r2@107
  signed int v60; // r1@109
  unsigned int *v61; // r2@111
  signed int v62; // r1@113
  unsigned int *v63; // r2@115
  signed int v64; // r1@117
  unsigned int *v65; // r2@119
  signed int v66; // r1@121
  unsigned int *v67; // r2@171
  signed int v68; // r1@173
  int *v69; // r0@179
  void *v70; // r4@184
  void *v71; // r6@184
  unsigned int *v72; // r2@186
  signed int v73; // r1@188
  int *v74; // r0@194
  void *v75; // r4@199
  void *v76; // r6@199
  unsigned int *v77; // r2@201
  signed int v78; // r1@203
  int *v79; // r0@209
  void *v80; // r4@214
  void *v81; // r6@214
  unsigned int *v82; // r2@216
  signed int v83; // r1@218
  int *v84; // r0@224
  unsigned int *v85; // r2@230
  signed int v86; // r1@232
  signed int v87; // r1@236
  signed int v88; // [sp+Ch] [bp-244h]@14
  signed int v89; // [sp+10h] [bp-240h]@14
  int v90; // [sp+14h] [bp-23Ch]@13
  int v91; // [sp+1Ch] [bp-234h]@54
  int v92; // [sp+20h] [bp-230h]@54
  int v93; // [sp+2Ch] [bp-224h]@54
  int v94; // [sp+34h] [bp-21Ch]@54
  char v95; // [sp+38h] [bp-218h]@54
  int v96; // [sp+40h] [bp-210h]@71
  void *v97; // [sp+5Ch] [bp-1F4h]@69
  void *v98; // [sp+6Ch] [bp-1E4h]@67
  int v99; // [sp+84h] [bp-1CCh]@13
  int v100; // [sp+88h] [bp-1C8h]@34
  char v101; // [sp+90h] [bp-1C0h]@34
  int v102; // [sp+98h] [bp-1B8h]@49
  void *v103; // [sp+B4h] [bp-19Ch]@47
  void *v104; // [sp+C4h] [bp-18Ch]@45
  int v105; // [sp+DCh] [bp-174h]@13
  int v106; // [sp+E0h] [bp-170h]@16
  char v107; // [sp+E8h] [bp-168h]@16
  int v108; // [sp+F0h] [bp-160h]@31
  void *v109; // [sp+10Ch] [bp-144h]@29
  void *ptr; // [sp+11Ch] [bp-134h]@27
  int v111; // [sp+134h] [bp-11Ch]@13
  int v112; // [sp+138h] [bp-118h]@13
  int v113; // [sp+13Ch] [bp-114h]@13
  int v114; // [sp+140h] [bp-110h]@13
  int v115; // [sp+144h] [bp-10Ch]@13
  int v116; // [sp+148h] [bp-108h]@13
  int v117; // [sp+14Ch] [bp-104h]@13
  int v118; // [sp+150h] [bp-100h]@13
  int v119; // [sp+154h] [bp-FCh]@13
  int v120; // [sp+158h] [bp-F8h]@13
  int v121; // [sp+15Ch] [bp-F4h]@13
  int v122; // [sp+160h] [bp-F0h]@13
  int v123; // [sp+164h] [bp-ECh]@13
  int v124; // [sp+168h] [bp-E8h]@13
  int v125; // [sp+16Ch] [bp-E4h]@13
  int v126; // [sp+170h] [bp-E0h]@13
  int v127; // [sp+174h] [bp-DCh]@13
  int v128; // [sp+178h] [bp-D8h]@13
  int v129; // [sp+17Ch] [bp-D4h]@13
  int v130; // [sp+180h] [bp-D0h]@13
  int v131; // [sp+184h] [bp-CCh]@13
  int v132; // [sp+188h] [bp-C8h]@13
  int v133; // [sp+18Ch] [bp-C4h]@13
  int v134; // [sp+190h] [bp-C0h]@13
  int v135; // [sp+194h] [bp-BCh]@13
  int v136; // [sp+19Ch] [bp-B4h]@1
  int v137; // [sp+1A4h] [bp-ACh]@1
  int v138; // [sp+1ACh] [bp-A4h]@1
  int v139; // [sp+1B4h] [bp-9Ch]@1
  int v140; // [sp+1BCh] [bp-94h]@1
  int v141; // [sp+1C4h] [bp-8Ch]@1
  int v142; // [sp+1CCh] [bp-84h]@1
  int v143; // [sp+1D4h] [bp-7Ch]@1
  int v144; // [sp+1DCh] [bp-74h]@1
  int v145; // [sp+1E4h] [bp-6Ch]@1
  int v146; // [sp+1ECh] [bp-64h]@1
  int v147; // [sp+1F4h] [bp-5Ch]@1
  void *v148; // [sp+1F8h] [bp-58h]@1
  void *v149; // [sp+1FCh] [bp-54h]@214
  void *v150; // [sp+204h] [bp-4Ch]@1
  void *v151; // [sp+208h] [bp-48h]@199
  void *v152; // [sp+210h] [bp-40h]@1
  void *v153; // [sp+214h] [bp-3Ch]@184
  void *v154; // [sp+21Ch] [bp-34h]@1
  void *v155; // [sp+220h] [bp-30h]@73

  v2 = this;
  sub_21E94B4((void **)&v147, "XXX");
  sub_21E94B4((void **)&v146, " # ");
  sub_21E94B4((void **)&v145, " # ");
  Recipes::Shape((int)&v148, &v147, &v146, &v145);
  sub_21E94B4((void **)&v144, "X");
  sub_21E94B4((void **)&v143, "#");
  sub_21E94B4((void **)&v142, "#");
  Recipes::Shape((int)&v150, &v144, &v143, &v142);
  sub_21E94B4((void **)&v141, "XX");
  sub_21E94B4((void **)&v140, "X#");
  sub_21E94B4((void **)&v139, " #");
  Recipes::Shape((int)&v152, &v141, &v140, &v139);
  sub_21E94B4((void **)&v138, "XX");
  sub_21E94B4((void **)&v137, " #");
  sub_21E94B4((void **)&v136, " #");
  Recipes::Shape((int)&v154, &v138, &v137, &v136);
  v3 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
  {
    v43 = (unsigned int *)(v136 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v137 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v138 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v139 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v140 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v141 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v142 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v143 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v144 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v145 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v146 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v147 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = &v105;
  v16 = &v99;
  v17 = 0;
  v90 = (int)v2;
  v131 = *(_BYTE *)(Block::mWoodPlanks + 4);
  v132 = *(_BYTE *)(Block::mCobblestone + 4);
  v133 = *(_WORD *)(Item::mIronIngot + 18);
  v134 = *(_WORD *)(Item::mDiamond + 18);
  v135 = *(_WORD *)(Item::mGoldIngot + 18);
  v111 = Item::mPickAxe_wood;
  v112 = Item::mPickAxe_stone;
  v113 = Item::mPickAxe_iron;
  v114 = Item::mPickAxe_diamond;
  v115 = Item::mPickAxe_gold;
  v116 = Item::mShovel_wood;
  v117 = Item::mShovel_stone;
  v118 = Item::mShovel_iron;
  v119 = Item::mShovel_diamond;
  v120 = Item::mShovel_gold;
  v121 = Item::mHatchet_wood;
  v122 = Item::mHatchet_stone;
  v123 = Item::mHatchet_iron;
  v124 = Item::mHatchet_diamond;
  v125 = Item::mHatchet_gold;
  v126 = Item::mHoe_wood;
  v127 = Item::mHoe_stone;
  v128 = Item::mHoe_iron;
  v18 = &v131;
  v129 = Item::mHoe_diamond;
  v130 = Item::mHoe_gold;
  do
    v19 = v18[v17];
    v20 = 0;
    v89 = v17;
    v88 = v18[v17];
    do
      v21 = *(&v111 + 5 * v20 + v17);
      if ( v19 > 255 )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v101, v21);
        definition<Item *,Item *>((int)v16, 35, Item::mStick, 88, Item::mItems[v19]);
        Recipes::addShapedRecipe();
        v28 = v100;
        v29 = v99;
        if ( v99 != v100 )
        {
          do
          {
            v30 = *(void **)(v29 + 60);
            if ( v30 )
              operator delete(v30);
            v31 = *(void **)(v29 + 44);
            if ( v31 )
              operator delete(v31);
            v32 = *(_DWORD *)(v29 + 16);
            if ( v32 )
              (*(void (**)(void))(*(_DWORD *)v32 + 4))();
            *(_DWORD *)(v29 + 16) = 0;
            v29 += 88;
          }
          while ( v28 != v29 );
          v29 = v99;
        }
        if ( v29 )
          operator delete((void *)v29);
        if ( v104 )
          operator delete(v104);
        if ( v103 )
          operator delete(v103);
        if ( v102 )
          (*(void (**)(void))(*(_DWORD *)v102 + 4))();
        v17 = v89;
        v102 = 0;
      }
      else
        ItemInstance::ItemInstance((ItemInstance *)&v107, v21);
        definition<Item *,Block const*>((int)v15, 35, Item::mStick, 88, Block::mBlocks[v19]);
        v22 = v15;
        v24 = v106;
        v23 = v105;
        if ( v105 != v106 )
            v25 = *(void **)(v23 + 60);
            if ( v25 )
              operator delete(v25);
            v26 = *(void **)(v23 + 44);
            if ( v26 )
              operator delete(v26);
            v27 = *(_DWORD *)(v23 + 16);
            if ( v27 )
              (*(void (**)(void))(*(_DWORD *)v27 + 4))();
            *(_DWORD *)(v23 + 16) = 0;
            v23 += 88;
          while ( v24 != v23 );
          v23 = v105;
        if ( v23 )
          operator delete((void *)v23);
        if ( ptr )
          operator delete(ptr);
        v15 = v22;
        if ( v109 )
          operator delete(v109);
        v16 = &v99;
        if ( v108 )
          (*(void (**)(void))(*(_DWORD *)v108 + 4))();
        v108 = 0;
      v19 = v88;
      ++v20;
    while ( v20 < 4 );
    ++v17;
    v18 = &v131;
  while ( v17 < 5 );
  ItemInstance::ItemInstance((ItemInstance *)&v95, Item::mShears);
  sub_21E94B4((void **)&v94, " #");
  sub_21E94B4((void **)&v93, "# ");
  definition<Item *>((int)&v91, 35, Item::mIronIngot);
  Recipes::addShapedRecipe(v90, (int)&v95, &v94, &v93);
  v34 = *(_QWORD *)&v91;
  if ( v91 != v92 )
      v35 = *(void **)(v34 + 60);
      if ( v35 )
        operator delete(v35);
      v36 = *(void **)(v34 + 44);
      if ( v36 )
        operator delete(v36);
      v37 = *(_DWORD *)(v34 + 16);
      if ( v37 )
        (*(void (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v37 + 4))(v37, *(_DWORD *)(*(_DWORD *)v37 + 4), v33);
      *(_DWORD *)(v34 + 16) = 0;
      LODWORD(v34) = v34 + 88;
    while ( HIDWORD(v34) != (_DWORD)v34 );
    LODWORD(v34) = v91;
  if ( (_DWORD)v34 )
    operator delete((void *)v34);
  v38 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v93 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (unsigned int *)&dword_28898C0;
  v40 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v94 - 4);
        v87 = __ldrex(v39);
      while ( __strex(v87 - 1, v39) );
      v87 = (*v39)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  if ( v98 )
    operator delete(v98);
  if ( v97 )
    operator delete(v97);
  if ( v96 )
    (*(void (__cdecl **)(int, _DWORD, unsigned int *))(*(_DWORD *)v96 + 4))(v96, *(_DWORD *)(*(_DWORD *)v96 + 4), v39);
  v96 = 0;
  v42 = v155;
  v41 = v154;
  if ( v154 != v155 )
      v69 = (int *)(*(_DWORD *)v41 - 12);
      if ( v69 != &dword_28898C0 )
        v67 = (unsigned int *)(*(_DWORD *)v41 - 4);
        if ( &pthread_create )
          __dmb();
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
        else
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j__ZdlPv_9(v69);
      v41 = (char *)v41 + 4;
    while ( v41 != v42 );
    v41 = v154;
  if ( v41 )
    operator delete(v41);
  v71 = v153;
  v70 = v152;
  if ( v152 != v153 )
      v74 = (int *)(*(_DWORD *)v70 - 12);
      if ( v74 != &dword_28898C0 )
        v72 = (unsigned int *)(*(_DWORD *)v70 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      v70 = (char *)v70 + 4;
    while ( v70 != v71 );
    v70 = v152;
  if ( v70 )
    operator delete(v70);
  v76 = v151;
  v75 = v150;
  if ( v150 != v151 )
      v79 = (int *)(*(_DWORD *)v75 - 12);
      if ( v79 != &dword_28898C0 )
        v77 = (unsigned int *)(*(_DWORD *)v75 - 4);
            v78 = __ldrex(v77);
          while ( __strex(v78 - 1, v77) );
          v78 = (*v77)--;
        if ( v78 <= 0 )
          j_j_j_j__ZdlPv_9(v79);
      v75 = (char *)v75 + 4;
    while ( v75 != v76 );
    v75 = v150;
  if ( v75 )
    operator delete(v75);
  v81 = v149;
  v80 = v148;
  if ( v148 != v149 )
      v84 = (int *)(*(_DWORD *)v80 - 12);
      if ( v84 != &dword_28898C0 )
        v82 = (unsigned int *)(*(_DWORD *)v80 - 4);
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
          v83 = (*v82)--;
        if ( v83 <= 0 )
          j_j_j_j__ZdlPv_9(v84);
      v80 = (char *)v80 + 4;
    while ( v80 != v81 );
    v80 = v148;
  if ( v80 )
    operator delete(v80);
}
