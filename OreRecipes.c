

int __fastcall OreRecipes::addRecipes(OreRecipes *this, Recipes *a2)
{
  OreRecipes *v2; // r8@1
  ItemInstance *v3; // r5@49
  ItemInstance *v4; // r6@49
  int *v5; // r7@49
  const char *v6; // r4@49
  int v7; // r2@49
  unsigned int *v8; // r2@50
  signed int v9; // r1@52
  unsigned int *v10; // r2@54
  signed int v11; // r1@56
  char *v12; // r7@57
  int *v13; // r4@57
  unsigned int *v14; // r2@58
  signed int v15; // r1@60
  unsigned int *v16; // r2@62
  signed int v17; // r1@64
  int *v18; // r1@82
  int v19; // r9@82
  const char *v20; // r7@82
  int v21; // r4@82
  int v22; // r8@82
  void *v23; // r0@83
  void *v24; // r0@85
  int v25; // r0@87
  const char *v26; // r8@99
  void *v27; // r0@99
  void *v28; // r0@100
  void *v29; // r0@101
  int v30; // r4@108
  int v31; // r0@108
  ItemInstance *v32; // r6@108
  __int64 v33; // r4@108
  char *v34; // r9@108
  const char *v35; // r7@108
  void *v36; // r0@109
  void *v37; // r0@111
  int v38; // r0@113
  void *v39; // r0@119
  __int64 v40; // r4@133
  void *v41; // r0@134
  void *v42; // r0@136
  int v43; // r0@138
  void *v44; // r0@144
  void *v45; // r0@145
  void *v46; // r0@146
  __int64 v47; // r4@153
  void *v48; // r0@154
  void *v49; // r0@156
  int v50; // r0@158
  void *v51; // r0@164
  __int64 v52; // r4@171
  void *v53; // r0@172
  void *v54; // r0@174
  int v55; // r0@176
  void *v56; // r0@182
  void *v57; // r0@183
  void *v58; // r0@184
  __int64 v59; // r4@191
  void *v60; // r0@192
  void *v61; // r0@194
  int v62; // r0@196
  void *v63; // r0@202
  signed int v64; // r5@209
  int *v65; // r6@210
  void *v66; // r0@210
  void *v67; // r0@212
  int result; // r0@214
  unsigned int *v69; // r2@218
  signed int v70; // r1@220
  unsigned int *v71; // r2@222
  signed int v72; // r1@224
  unsigned int *v73; // r2@226
  signed int v74; // r1@228
  unsigned int *v75; // r2@230
  signed int v76; // r1@232
  unsigned int *v77; // r2@234
  signed int v78; // r1@236
  unsigned int *v79; // r2@238
  signed int v80; // r1@240
  unsigned int *v81; // r2@242
  signed int v82; // r1@244
  unsigned int *v83; // r2@246
  signed int v84; // r1@248
  int v85; // [sp+18h] [bp-7F0h]@82
  OreRecipes *v86; // [sp+1Ch] [bp-7ECh]@1
  int *v87; // [sp+20h] [bp-7E8h]@49
  int v88; // [sp+24h] [bp-7E4h]@191
  int v89; // [sp+28h] [bp-7E0h]@191
  int v90; // [sp+34h] [bp-7D4h]@191
  char v91; // [sp+38h] [bp-7D0h]@191
  int v92; // [sp+40h] [bp-7C8h]@207
  void *v93; // [sp+5Ch] [bp-7ACh]@205
  void *v94; // [sp+6Ch] [bp-79Ch]@203
  int v95; // [sp+84h] [bp-784h]@171
  int v96; // [sp+88h] [bp-780h]@171
  int v97; // [sp+94h] [bp-774h]@171
  int v98; // [sp+9Ch] [bp-76Ch]@171
  int v99; // [sp+A4h] [bp-764h]@171
  char v100; // [sp+A8h] [bp-760h]@171
  int v101; // [sp+B0h] [bp-758h]@189
  void *v102; // [sp+CCh] [bp-73Ch]@187
  void *v103; // [sp+DCh] [bp-72Ch]@185
  int v104; // [sp+F4h] [bp-714h]@153
  int v105; // [sp+F8h] [bp-710h]@153
  int v106; // [sp+104h] [bp-704h]@153
  char v107; // [sp+108h] [bp-700h]@153
  int v108; // [sp+110h] [bp-6F8h]@169
  void *v109; // [sp+12Ch] [bp-6DCh]@167
  void *v110; // [sp+13Ch] [bp-6CCh]@165
  int v111; // [sp+154h] [bp-6B4h]@133
  int v112; // [sp+158h] [bp-6B0h]@133
  int v113; // [sp+164h] [bp-6A4h]@133
  int v114; // [sp+16Ch] [bp-69Ch]@133
  int v115; // [sp+174h] [bp-694h]@133
  char v116; // [sp+178h] [bp-690h]@133
  int v117; // [sp+180h] [bp-688h]@151
  void *v118; // [sp+19Ch] [bp-66Ch]@149
  void *v119; // [sp+1ACh] [bp-65Ch]@147
  int v120; // [sp+1C4h] [bp-644h]@108
  int v121; // [sp+1C8h] [bp-640h]@108
  int v122; // [sp+1D4h] [bp-634h]@62
  char v123; // [sp+1D8h] [bp-630h]@108
  int v124; // [sp+1E0h] [bp-628h]@124
  void *v125; // [sp+1FCh] [bp-60Ch]@122
  void *v126; // [sp+20Ch] [bp-5FCh]@120
  char v127; // [sp+220h] [bp-5E8h]@49
  int v128; // [sp+228h] [bp-5E0h]@97
  void *v129; // [sp+244h] [bp-5C4h]@95
  void *v130; // [sp+254h] [bp-5B4h]@93
  int v131; // [sp+26Ch] [bp-59Ch]@49
  int v132; // [sp+270h] [bp-598h]@82
  int v133; // [sp+27Ch] [bp-58Ch]@50
  int v134; // [sp+284h] [bp-584h]@54
  int v135; // [sp+28Ch] [bp-57Ch]@58
  char v136; // [sp+290h] [bp-578h]@82
  int v137; // [sp+298h] [bp-570h]@106
  void *v138; // [sp+2B4h] [bp-554h]@104
  void *v139; // [sp+2C4h] [bp-544h]@102
  char v140; // [sp+2D8h] [bp-530h]@49
  int v141; // [sp+2E0h] [bp-528h]@130
  void *v142; // [sp+2FCh] [bp-50Ch]@128
  void *v143; // [sp+30Ch] [bp-4FCh]@126
  char v144; // [sp+320h] [bp-4E8h]@1
  int v145; // [sp+328h] [bp-4E0h]@5
  void *v146; // [sp+344h] [bp-4C4h]@3
  void *ptr; // [sp+354h] [bp-4B4h]@1
  char v148; // [sp+368h] [bp-4A0h]@1
  int v149; // [sp+370h] [bp-498h]@11
  void *v150; // [sp+38Ch] [bp-47Ch]@9
  void *v151; // [sp+39Ch] [bp-46Ch]@7
  char v152; // [sp+3B0h] [bp-458h]@1
  int v153; // [sp+3B8h] [bp-450h]@17
  void *v154; // [sp+3D4h] [bp-434h]@15
  void *v155; // [sp+3E4h] [bp-424h]@13
  char v156; // [sp+3F8h] [bp-410h]@1
  int v157; // [sp+400h] [bp-408h]@23
  void *v158; // [sp+41Ch] [bp-3ECh]@21
  void *v159; // [sp+42Ch] [bp-3DCh]@19
  char v160; // [sp+440h] [bp-3C8h]@1
  int v161; // [sp+448h] [bp-3C0h]@29
  void *v162; // [sp+464h] [bp-3A4h]@27
  void *v163; // [sp+474h] [bp-394h]@25
  char v164; // [sp+488h] [bp-380h]@1
  int v165; // [sp+490h] [bp-378h]@35
  void *v166; // [sp+4ACh] [bp-35Ch]@33
  void *v167; // [sp+4BCh] [bp-34Ch]@31
  char v168; // [sp+4D0h] [bp-338h]@1
  int v169; // [sp+4D8h] [bp-330h]@41
  void *v170; // [sp+4F4h] [bp-314h]@39
  void *v171; // [sp+504h] [bp-304h]@37
  char v172; // [sp+518h] [bp-2F0h]@1
  int v173; // [sp+520h] [bp-2E8h]@47
  void *v174; // [sp+53Ch] [bp-2CCh]@45
  void *v175; // [sp+54Ch] [bp-2BCh]@43
  int v176[20]; // [sp+560h] [bp-2A8h]@1
  int v177; // [sp+5B0h] [bp-258h]@1
  int v178; // [sp+5B8h] [bp-250h]@1
  int v179; // [sp+600h] [bp-208h]@1
  int v180; // [sp+608h] [bp-200h]@1
  int v181; // [sp+650h] [bp-1B8h]@1
  int v182; // [sp+658h] [bp-1B0h]@1
  int v183; // [sp+6A0h] [bp-168h]@1
  int v184; // [sp+6A8h] [bp-160h]@1
  int v185; // [sp+6F0h] [bp-118h]@1
  int v186; // [sp+6F8h] [bp-110h]@1
  int v187; // [sp+740h] [bp-C8h]@1
  int v188; // [sp+748h] [bp-C0h]@1
  int v189; // [sp+790h] [bp-78h]@1
  int v190; // [sp+798h] [bp-70h]@1

  v2 = this;
  v86 = this;
  j_ItemInstance::ItemInstance((ItemInstance *)&v172, Item::mGoldIngot, 1);
  v176[0] = Block::mGoldBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v176[2], (int)&v172);
  j_ItemInstance::ItemInstance((ItemInstance *)&v168, Item::mIronIngot, 1);
  v177 = Block::mIronBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v178, (int)&v168);
  j_ItemInstance::ItemInstance((ItemInstance *)&v164, Item::mDiamond, 1);
  v179 = Block::mDiamondBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v180, (int)&v164);
  j_ItemInstance::ItemInstance((ItemInstance *)&v160, Item::mEmerald, 1);
  v181 = Block::mEmeraldBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v182, (int)&v160);
  j_ItemInstance::ItemInstance((ItemInstance *)&v156, Item::mRedStone, 1);
  v183 = Block::mRedstoneBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v184, (int)&v156);
  j_ItemInstance::ItemInstance((ItemInstance *)&v152, Item::mDye_powder, 1, 4);
  v185 = Block::mLapisBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v186, (int)&v152);
  j_ItemInstance::ItemInstance((ItemInstance *)&v148, Item::mWheat, 1);
  v187 = Block::mHayBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v188, (int)&v148);
  j_ItemInstance::ItemInstance((ItemInstance *)&v144, Item::mCoal, 1, 0);
  v189 = Block::mCoalBlock;
  j_ItemInstance::ItemInstance((ItemInstance *)&v190, (int)&v144);
  if ( ptr )
    j_operator delete(ptr);
  if ( v146 )
    j_operator delete(v146);
  if ( v145 )
    (*(void (**)(void))(*(_DWORD *)v145 + 4))();
  v145 = 0;
  if ( v151 )
    j_operator delete(v151);
  if ( v150 )
    j_operator delete(v150);
  if ( v149 )
    (*(void (**)(void))(*(_DWORD *)v149 + 4))();
  v149 = 0;
  if ( v155 )
    j_operator delete(v155);
  if ( v154 )
    j_operator delete(v154);
  if ( v153 )
    (*(void (**)(void))(*(_DWORD *)v153 + 4))();
  v153 = 0;
  if ( v159 )
    j_operator delete(v159);
  if ( v158 )
    j_operator delete(v158);
  if ( v157 )
    (*(void (**)(void))(*(_DWORD *)v157 + 4))();
  v157 = 0;
  if ( v163 )
    j_operator delete(v163);
  if ( v162 )
    j_operator delete(v162);
  if ( v161 )
    (*(void (**)(void))(*(_DWORD *)v161 + 4))();
  v161 = 0;
  if ( v167 )
    j_operator delete(v167);
  if ( v166 )
    j_operator delete(v166);
  if ( v165 )
    (*(void (**)(void))(*(_DWORD *)v165 + 4))();
  v165 = 0;
  if ( v171 )
    j_operator delete(v171);
  if ( v170 )
    j_operator delete(v170);
  if ( v169 )
    (*(void (**)(void))(*(_DWORD *)v169 + 4))();
  v169 = 0;
  if ( v175 )
    j_operator delete(v175);
  if ( v174 )
    j_operator delete(v174);
  if ( v173 )
    (*(void (**)(void))(*(_DWORD *)v173 + 4))();
  v3 = (ItemInstance *)&v140;
  v4 = (ItemInstance *)&v127;
  v5 = &v131;
  v6 = "###";
  v7 = 0;
  v87 = &dword_28898C0;
  v173 = 0;
  do
  {
    v85 = v7;
    v18 = &v176[20 * v7];
    v19 = *v18;
    j_ItemInstance::ItemInstance(v3, (int)(v18 + 2));
    j_ItemInstance::ItemInstance((ItemInstance *)&v136, v19);
    sub_21E94B4((void **)&v135, v6);
    sub_21E94B4((void **)&v134, v6);
    sub_21E94B4((void **)&v133, v6);
    j_ItemInstance::ItemInstance(v4, (int)v3);
    j_definition<ItemInstance>((int)v5, 35, (int)v4);
    j_Recipes::addShapedRecipe((int)v2, (int)&v136, &v135, &v134, &v133);
    v20 = v6;
    v21 = v132;
    v22 = v131;
    if ( v131 != v132 )
    {
      do
      {
        v23 = *(void **)(v22 + 60);
        if ( v23 )
          j_operator delete(v23);
        v24 = *(void **)(v22 + 44);
        if ( v24 )
          j_operator delete(v24);
        v25 = *(_DWORD *)(v22 + 16);
        if ( v25 )
          (*(void (**)(void))(*(_DWORD *)v25 + 4))();
        *(_DWORD *)(v22 + 16) = 0;
        v22 += 88;
      }
      while ( v21 != v22 );
      v22 = v131;
    }
    if ( v22 )
      j_operator delete((void *)v22);
    v13 = v87;
    if ( v130 )
      j_operator delete(v130);
    if ( v129 )
      j_operator delete(v129);
    if ( v128 )
      (*(void (**)(void))(*(_DWORD *)v128 + 4))();
    v26 = v20;
    v128 = 0;
    v27 = (void *)(v133 - 12);
    if ( (int *)(v133 - 12) != v87 )
      v8 = (unsigned int *)(v133 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v12 = &v127;
    v28 = (void *)(v134 - 12);
    if ( (int *)(v134 - 12) != v87 )
      v10 = (unsigned int *)(v134 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v12 = &v127;
        v13 = v87;
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    v29 = (void *)(v135 - 12);
    if ( (int *)(v135 - 12) != v13 )
      v14 = (unsigned int *)(v135 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    if ( v139 )
      j_operator delete(v139);
    if ( v138 )
      j_operator delete(v138);
    v87 = v13;
    if ( v137 )
      (*(void (**)(void))(*(_DWORD *)v137 + 4))();
    v137 = 0;
    v30 = j_ItemInstance::getId(v3);
    v31 = j_ItemInstance::getAuxValue(v3);
    j_ItemInstance::ItemInstance((ItemInstance *)&v123, v30, 9, v31);
    sub_21E94B4((void **)&v122, "#");
    j_definition<Block const*>((int)&v120, 35, v19);
    j_Recipes::addShapedRecipe((int)v86, (int)&v123, &v122);
    v32 = v3;
    v33 = *(_QWORD *)&v120;
    v34 = v12;
    v35 = v26;
    if ( v120 != v121 )
        v36 = *(void **)(v33 + 60);
        if ( v36 )
          j_operator delete(v36);
        v37 = *(void **)(v33 + 44);
        if ( v37 )
          j_operator delete(v37);
        v38 = *(_DWORD *)(v33 + 16);
        if ( v38 )
          (*(void (**)(void))(*(_DWORD *)v38 + 4))();
        *(_DWORD *)(v33 + 16) = 0;
        LODWORD(v33) = v33 + 88;
      while ( HIDWORD(v33) != (_DWORD)v33 );
      LODWORD(v33) = v120;
    v3 = v32;
    v2 = v86;
    if ( (_DWORD)v33 )
      j_operator delete((void *)v33);
    v6 = v35;
    v39 = (void *)(v122 - 12);
    if ( (int *)(v122 - 12) != v87 )
      v16 = (unsigned int *)(v122 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v3 = v32;
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    v4 = (ItemInstance *)v34;
    v5 = &v131;
    if ( v126 )
      j_operator delete(v126);
    if ( v125 )
      j_operator delete(v125);
    if ( v124 )
      (*(void (**)(void))(*(_DWORD *)v124 + 4))();
    v124 = 0;
    if ( v143 )
      j_operator delete(v143);
    if ( v142 )
      j_operator delete(v142);
    if ( v141 )
      (*(void (**)(void))(*(_DWORD *)v141 + 4))();
    v7 = v85 + 1;
  }
  while ( v85 + 1 < 8 );
  j_ItemInstance::ItemInstance((ItemInstance *)&v116, Item::mGoldIngot);
  sub_21E94B4((void **)&v115, "###");
  sub_21E94B4((void **)&v114, "###");
  sub_21E94B4((void **)&v113, "###");
  j_definition<Item *>((int)&v111, 35, Item::mGold_nugget);
  j_Recipes::addShapedRecipe((int)v86, (int)&v116, &v115, &v114, &v113);
  v40 = *(_QWORD *)&v111;
  if ( v111 != v112 )
    do
      v41 = *(void **)(v40 + 60);
      if ( v41 )
        j_operator delete(v41);
      v42 = *(void **)(v40 + 44);
      if ( v42 )
        j_operator delete(v42);
      v43 = *(_DWORD *)(v40 + 16);
      if ( v43 )
        (*(void (**)(void))(*(_DWORD *)v43 + 4))();
      *(_DWORD *)(v40 + 16) = 0;
      LODWORD(v40) = v40 + 88;
    while ( HIDWORD(v40) != (_DWORD)v40 );
    LODWORD(v40) = v111;
  if ( (_DWORD)v40 )
    j_operator delete((void *)v40);
  v44 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v113 - 4);
    if ( &pthread_create )
      __dmb();
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
    else
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v114 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v115 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  if ( v119 )
    j_operator delete(v119);
  if ( v118 )
    j_operator delete(v118);
  if ( v117 )
    (*(void (**)(void))(*(_DWORD *)v117 + 4))();
  v117 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v107, Item::mGold_nugget, 9);
  sub_21E94B4((void **)&v106, "#");
  j_definition<Item *>((int)&v104, 35, Item::mGoldIngot);
  j_Recipes::addShapedRecipe((int)v86, (int)&v107, &v106);
  v47 = *(_QWORD *)&v104;
  if ( v104 != v105 )
      v48 = *(void **)(v47 + 60);
      if ( v48 )
        j_operator delete(v48);
      v49 = *(void **)(v47 + 44);
      if ( v49 )
        j_operator delete(v49);
      v50 = *(_DWORD *)(v47 + 16);
      if ( v50 )
        (*(void (**)(void))(*(_DWORD *)v50 + 4))();
      *(_DWORD *)(v47 + 16) = 0;
      LODWORD(v47) = v47 + 88;
    while ( HIDWORD(v47) != (_DWORD)v47 );
    LODWORD(v47) = v104;
  if ( (_DWORD)v47 )
    j_operator delete((void *)v47);
  v51 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v106 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  if ( v110 )
    j_operator delete(v110);
  if ( v109 )
    j_operator delete(v109);
  if ( v108 )
    (*(void (**)(void))(*(_DWORD *)v108 + 4))();
  v108 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v100, Item::mIronIngot);
  sub_21E94B4((void **)&v99, "###");
  sub_21E94B4((void **)&v98, "###");
  sub_21E94B4((void **)&v97, "###");
  j_definition<Item *>((int)&v95, 35, Item::mIron_nugget);
  j_Recipes::addShapedRecipe((int)v86, (int)&v100, &v99, &v98, &v97);
  v52 = *(_QWORD *)&v95;
  if ( v95 != v96 )
      v53 = *(void **)(v52 + 60);
      if ( v53 )
        j_operator delete(v53);
      v54 = *(void **)(v52 + 44);
      if ( v54 )
        j_operator delete(v54);
      v55 = *(_DWORD *)(v52 + 16);
      if ( v55 )
        (*(void (**)(void))(*(_DWORD *)v55 + 4))();
      *(_DWORD *)(v52 + 16) = 0;
      LODWORD(v52) = v52 + 88;
    while ( HIDWORD(v52) != (_DWORD)v52 );
    LODWORD(v52) = v95;
  if ( (_DWORD)v52 )
    j_operator delete((void *)v52);
  v56 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v97 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v98 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v99 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  if ( v103 )
    j_operator delete(v103);
  if ( v102 )
    j_operator delete(v102);
  if ( v101 )
    (*(void (**)(void))(*(_DWORD *)v101 + 4))();
  v101 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v91, Item::mIron_nugget, 9);
  sub_21E94B4((void **)&v90, "#");
  j_definition<Item *>((int)&v88, 35, Item::mIronIngot);
  j_Recipes::addShapedRecipe((int)v86, (int)&v91, &v90);
  v59 = *(_QWORD *)&v88;
  if ( v88 != v89 )
      v60 = *(void **)(v59 + 60);
      if ( v60 )
        j_operator delete(v60);
      v61 = *(void **)(v59 + 44);
      if ( v61 )
        j_operator delete(v61);
      v62 = *(_DWORD *)(v59 + 16);
      if ( v62 )
        (*(void (**)(void))(*(_DWORD *)v62 + 4))();
      *(_DWORD *)(v59 + 16) = 0;
      LODWORD(v59) = v59 + 88;
    while ( HIDWORD(v59) != (_DWORD)v59 );
    LODWORD(v59) = v88;
  if ( (_DWORD)v59 )
    j_operator delete((void *)v59);
  v63 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v90 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  if ( v94 )
    j_operator delete(v94);
  if ( v93 )
    j_operator delete(v93);
  if ( v92 )
    (*(void (**)(void))(*(_DWORD *)v92 + 4))();
  v64 = 160;
  v92 = 0;
    v65 = &v176[v64];
    v66 = (void *)v176[v64 - 5];
    if ( v66 )
      j_operator delete(v66);
    v67 = (void *)*(v65 - 9);
    if ( v67 )
      j_operator delete(v67);
    result = *(v65 - 16);
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 4))();
    v64 -= 20;
    *(v65 - 16) = 0;
  while ( v64 * 4 );
  return result;
}
