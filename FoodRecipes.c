

int __fastcall FoodRecipes::addRecipes(FoodRecipes *this, Recipes *a2)
{
  FoodRecipes *v2; // r4@1
  int v3; // r5@1 OVERLAPPED
  int v4; // r6@1 OVERLAPPED
  void *v5; // r0@2
  void *v6; // r0@4
  int v7; // r0@6
  int v8; // r5@18 OVERLAPPED
  int v9; // r6@18 OVERLAPPED
  void *v10; // r0@19
  void *v11; // r0@21
  int v12; // r0@23
  void *v13; // r0@29
  void *v14; // r0@30
  void *v15; // r0@31
  int v16; // r5@38 OVERLAPPED
  int v17; // r6@38 OVERLAPPED
  void *v18; // r0@39
  void *v19; // r0@41
  int v20; // r0@43
  void *v21; // r0@55
  int v22; // r5@62 OVERLAPPED
  int v23; // r6@62 OVERLAPPED
  void *v24; // r0@63
  void *v25; // r0@65
  int v26; // r0@67
  void *v27; // r0@73
  void *v28; // r0@74
  void *v29; // r0@75
  int v30; // r5@82 OVERLAPPED
  int v31; // r6@82 OVERLAPPED
  void *v32; // r0@83
  void *v33; // r0@85
  int v34; // r0@87
  void *v35; // r0@93
  int v36; // r5@100 OVERLAPPED
  int v37; // r6@100 OVERLAPPED
  void *v38; // r0@101
  void *v39; // r0@103
  int v40; // r0@105
  void *v41; // r0@111
  int v42; // r5@118 OVERLAPPED
  int v43; // r6@118 OVERLAPPED
  void *v44; // r0@119
  void *v45; // r0@121
  int v46; // r0@123
  void *v47; // r0@129
  int v48; // r5@136 OVERLAPPED
  int v49; // r6@136 OVERLAPPED
  void *v50; // r0@137
  void *v51; // r0@139
  int v52; // r0@141
  __int64 v53; // r4@153
  void *v54; // r0@154
  void *v55; // r0@156
  int v56; // r0@158
  void *v57; // r0@164
  void *v58; // r0@165
  int result; // r0@170
  unsigned int *v60; // r2@173
  signed int v61; // r1@175
  unsigned int *v62; // r2@177
  signed int v63; // r1@179
  unsigned int *v64; // r2@181
  signed int v65; // r1@183
  unsigned int *v66; // r2@185
  signed int v67; // r1@187
  unsigned int *v68; // r2@189
  signed int v69; // r1@191
  unsigned int *v70; // r2@193
  signed int v71; // r1@195
  unsigned int *v72; // r2@197
  signed int v73; // r1@199
  unsigned int *v74; // r2@201
  signed int v75; // r1@203
  unsigned int *v76; // r2@205
  signed int v77; // r1@207
  unsigned int *v78; // r2@209
  signed int v79; // r1@211
  unsigned int *v80; // r2@213
  signed int v81; // r1@215
  unsigned int *v82; // r2@217
  signed int v83; // r1@219
  int v84; // [sp+Ch] [bp-3D4h]@153
  int v85; // [sp+10h] [bp-3D0h]@153
  int v86; // [sp+1Ch] [bp-3C4h]@153
  int v87; // [sp+24h] [bp-3BCh]@153
  char v88; // [sp+28h] [bp-3B8h]@153
  int v89; // [sp+30h] [bp-3B0h]@170
  void *v90; // [sp+4Ch] [bp-394h]@168
  void *v91; // [sp+5Ch] [bp-384h]@166
  unsigned __int64 v92; // [sp+74h] [bp-36Ch]@136
  char v93; // [sp+80h] [bp-360h]@136
  int v94; // [sp+88h] [bp-358h]@151
  void *v95; // [sp+A4h] [bp-33Ch]@149
  void *v96; // [sp+B4h] [bp-32Ch]@147
  int v97; // [sp+CCh] [bp-314h]@118
  int v98; // [sp+D0h] [bp-310h]@118
  int v99; // [sp+DCh] [bp-304h]@118
  char v100; // [sp+E0h] [bp-300h]@118
  int v101; // [sp+E8h] [bp-2F8h]@134
  void *v102; // [sp+104h] [bp-2DCh]@132
  void *v103; // [sp+114h] [bp-2CCh]@130
  int v104; // [sp+12Ch] [bp-2B4h]@100
  int v105; // [sp+130h] [bp-2B0h]@100
  int v106; // [sp+13Ch] [bp-2A4h]@100
  char v107; // [sp+140h] [bp-2A0h]@100
  int v108; // [sp+148h] [bp-298h]@116
  void *v109; // [sp+164h] [bp-27Ch]@114
  void *v110; // [sp+174h] [bp-26Ch]@112
  int v111; // [sp+18Ch] [bp-254h]@82
  int v112; // [sp+190h] [bp-250h]@82
  int v113; // [sp+19Ch] [bp-244h]@82
  char v114; // [sp+1A0h] [bp-240h]@82
  int v115; // [sp+1A8h] [bp-238h]@98
  void *v116; // [sp+1C4h] [bp-21Ch]@96
  void *v117; // [sp+1D4h] [bp-20Ch]@94
  int v118; // [sp+1ECh] [bp-1F4h]@62
  int v119; // [sp+1F0h] [bp-1F0h]@62
  int v120; // [sp+1FCh] [bp-1E4h]@62
  int v121; // [sp+204h] [bp-1DCh]@62
  int v122; // [sp+20Ch] [bp-1D4h]@62
  char v123; // [sp+210h] [bp-1D0h]@62
  int v124; // [sp+218h] [bp-1C8h]@80
  void *v125; // [sp+234h] [bp-1ACh]@78
  void *v126; // [sp+244h] [bp-19Ch]@76
  char v127; // [sp+258h] [bp-188h]@38
  int v128; // [sp+260h] [bp-180h]@53
  void *v129; // [sp+27Ch] [bp-164h]@51
  void *v130; // [sp+28Ch] [bp-154h]@49
  int v131; // [sp+2A4h] [bp-13Ch]@38
  int v132; // [sp+2A8h] [bp-138h]@38
  int v133; // [sp+2B4h] [bp-12Ch]@38
  char v134; // [sp+2B8h] [bp-128h]@38
  int v135; // [sp+2C0h] [bp-120h]@60
  void *v136; // [sp+2DCh] [bp-104h]@58
  void *v137; // [sp+2ECh] [bp-F4h]@56
  int v138; // [sp+304h] [bp-DCh]@18
  int v139; // [sp+308h] [bp-D8h]@18
  int v140; // [sp+314h] [bp-CCh]@18
  int v141; // [sp+31Ch] [bp-C4h]@18
  int v142; // [sp+324h] [bp-BCh]@18
  char v143; // [sp+328h] [bp-B8h]@18
  int v144; // [sp+330h] [bp-B0h]@36
  void *v145; // [sp+34Ch] [bp-94h]@34
  void *v146; // [sp+35Ch] [bp-84h]@32
  unsigned __int64 v147; // [sp+374h] [bp-6Ch]@1
  char v148; // [sp+380h] [bp-60h]@1
  int v149; // [sp+388h] [bp-58h]@16
  void *v150; // [sp+3A4h] [bp-3Ch]@14
  void *ptr; // [sp+3B4h] [bp-2Ch]@12

  v2 = this;
  j_ItemInstance::ItemInstance((ItemInstance *)&v148, Item::mMushroomStew);
  j_definition<Block const*,Block const*,Item *>(
    (int)&v147,
    0,
    Block::mBrownMushroom,
    Block::mRedMushroom,
    Item::mBowl);
  j_Recipes::addShapelessRecipe((int)v2, (int)&v148, &v147);
  *(_QWORD *)&v3 = v147;
  if ( (_DWORD)v147 != HIDWORD(v147) )
  {
    do
    {
      v5 = *(void **)(v3 + 60);
      if ( v5 )
        j_operator delete(v5);
      v6 = *(void **)(v3 + 44);
      if ( v6 )
        j_operator delete(v6);
      v7 = *(_DWORD *)(v3 + 16);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v3 + 16) = 0;
      v3 += 88;
    }
    while ( v4 != v3 );
    v3 = v147;
  }
  if ( v3 )
    j_operator delete((void *)v3);
  if ( ptr )
    j_operator delete(ptr);
  if ( v150 )
    j_operator delete(v150);
  if ( v149 )
    (*(void (**)(void))(*(_DWORD *)v149 + 4))();
  v149 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v143, Item::mBeetrootSoup);
  sub_21E94B4((void **)&v142, "BBB");
  sub_21E94B4((void **)&v141, "BBB");
  sub_21E94B4((void **)&v140, " # ");
  j_definition<Item *,Item *>((int)&v138, 66, Item::mBeetroot, 35, Item::mBowl);
  j_Recipes::addShapedRecipe((int)v2, (int)&v143, &v142, &v141, &v140);
  *(_QWORD *)&v8 = *(_QWORD *)&v138;
  if ( v138 != v139 )
      v10 = *(void **)(v8 + 60);
      if ( v10 )
        j_operator delete(v10);
      v11 = *(void **)(v8 + 44);
      if ( v11 )
        j_operator delete(v11);
      v12 = *(_DWORD *)(v8 + 16);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
      *(_DWORD *)(v8 + 16) = 0;
      v8 += 88;
    while ( v9 != v8 );
    v8 = v138;
  if ( v8 )
    j_operator delete((void *)v8);
  v13 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v140 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
    else
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v141 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v142 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( v146 )
    j_operator delete(v146);
  if ( v145 )
    j_operator delete(v145);
  if ( v144 )
    (*(void (**)(void))(*(_DWORD *)v144 + 4))();
  v144 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v134, Item::mCookie, 8);
  sub_21E94B4((void **)&v133, "#X#");
  j_ItemInstance::ItemInstance((ItemInstance *)&v127, Item::mDye_powder, 1, 3);
  j_definition<ItemInstance,Item *>((int)&v131, 88, (int)&v127, 35, Item::mWheat);
  j_Recipes::addShapedRecipe((int)v2, (int)&v134, &v133);
  *(_QWORD *)&v16 = *(_QWORD *)&v131;
  if ( v131 != v132 )
      v18 = *(void **)(v16 + 60);
      if ( v18 )
        j_operator delete(v18);
      v19 = *(void **)(v16 + 44);
      if ( v19 )
        j_operator delete(v19);
      v20 = *(_DWORD *)(v16 + 16);
      if ( v20 )
        (*(void (**)(void))(*(_DWORD *)v20 + 4))();
      *(_DWORD *)(v16 + 16) = 0;
      v16 += 88;
    while ( v17 != v16 );
    v16 = v131;
  if ( v16 )
    j_operator delete((void *)v16);
  if ( v130 )
    j_operator delete(v130);
  if ( v129 )
    j_operator delete(v129);
  if ( v128 )
    (*(void (**)(void))(*(_DWORD *)v128 + 4))();
  v128 = 0;
  v21 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v133 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( v137 )
    j_operator delete(v137);
  if ( v136 )
    j_operator delete(v136);
  if ( v135 )
    (*(void (**)(void))(*(_DWORD *)v135 + 4))();
  v135 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v123, Block::mMelon);
  sub_21E94B4((void **)&v122, "MMM");
  sub_21E94B4((void **)&v121, "MMM");
  sub_21E94B4((void **)&v120, "MMM");
  j_definition<Item *>((int)&v118, 77, Item::mMelonSlice);
  j_Recipes::addShapedRecipe((int)v2, (int)&v123, &v122, &v121, &v120);
  *(_QWORD *)&v22 = *(_QWORD *)&v118;
  if ( v118 != v119 )
      v24 = *(void **)(v22 + 60);
      if ( v24 )
        j_operator delete(v24);
      v25 = *(void **)(v22 + 44);
      if ( v25 )
        j_operator delete(v25);
      v26 = *(_DWORD *)(v22 + 16);
      if ( v26 )
        (*(void (**)(void))(*(_DWORD *)v26 + 4))();
      *(_DWORD *)(v22 + 16) = 0;
      v22 += 88;
    while ( v23 != v22 );
    v22 = v118;
  if ( v22 )
    j_operator delete((void *)v22);
  v27 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v120 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v121 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v122 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  if ( v126 )
    j_operator delete(v126);
  if ( v125 )
    j_operator delete(v125);
  if ( v124 )
    (*(void (**)(void))(*(_DWORD *)v124 + 4))();
  v124 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v114, Item::mMelonSlice, 9);
  sub_21E94B4((void **)&v113, "#");
  j_definition<Block const*>((int)&v111, 35, Block::mMelon);
  j_Recipes::addShapedRecipe((int)v2, (int)&v114, &v113);
  *(_QWORD *)&v30 = *(_QWORD *)&v111;
  if ( v111 != v112 )
      v32 = *(void **)(v30 + 60);
      if ( v32 )
        j_operator delete(v32);
      v33 = *(void **)(v30 + 44);
      if ( v33 )
        j_operator delete(v33);
      v34 = *(_DWORD *)(v30 + 16);
      if ( v34 )
        (*(void (**)(void))(*(_DWORD *)v34 + 4))();
      *(_DWORD *)(v30 + 16) = 0;
      v30 += 88;
    while ( v31 != v30 );
    v30 = v111;
  if ( v30 )
    j_operator delete((void *)v30);
  v35 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v113 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  if ( v117 )
    j_operator delete(v117);
  if ( v116 )
    j_operator delete(v116);
  if ( v115 )
    (*(void (**)(void))(*(_DWORD *)v115 + 4))();
  v115 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v107, Item::mSeeds_melon);
  sub_21E94B4((void **)&v106, (const char *)&aCdefghjklmnopq[9]);
  j_definition<Item *>((int)&v104, 77, Item::mMelonSlice);
  j_Recipes::addShapedRecipe((int)v2, (int)&v107, &v106);
  *(_QWORD *)&v36 = *(_QWORD *)&v104;
  if ( v104 != v105 )
      v38 = *(void **)(v36 + 60);
      if ( v38 )
        j_operator delete(v38);
      v39 = *(void **)(v36 + 44);
      if ( v39 )
        j_operator delete(v39);
      v40 = *(_DWORD *)(v36 + 16);
      if ( v40 )
        (*(void (**)(void))(*(_DWORD *)v40 + 4))();
      *(_DWORD *)(v36 + 16) = 0;
      v36 += 88;
    while ( v37 != v36 );
    v36 = v104;
  if ( v36 )
    j_operator delete((void *)v36);
  v41 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v106 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  if ( v110 )
    j_operator delete(v110);
  if ( v109 )
    j_operator delete(v109);
  if ( v108 )
    (*(void (**)(void))(*(_DWORD *)v108 + 4))();
  v108 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v100, Item::mSeeds_pumpkin, 4);
  sub_21E94B4((void **)&v99, (const char *)&aCdefghjklmnopq[9]);
  j_definition<Block const*>((int)&v97, 77, Block::mPumpkin);
  j_Recipes::addShapedRecipe((int)v2, (int)&v100, &v99);
  *(_QWORD *)&v42 = *(_QWORD *)&v97;
  if ( v97 != v98 )
      v44 = *(void **)(v42 + 60);
      if ( v44 )
        j_operator delete(v44);
      v45 = *(void **)(v42 + 44);
      if ( v45 )
        j_operator delete(v45);
      v46 = *(_DWORD *)(v42 + 16);
      if ( v46 )
        (*(void (**)(void))(*(_DWORD *)v46 + 4))();
      *(_DWORD *)(v42 + 16) = 0;
      v42 += 88;
    while ( v43 != v42 );
    v42 = v97;
  if ( v42 )
    j_operator delete((void *)v42);
  v47 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v99 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  if ( v103 )
    j_operator delete(v103);
  if ( v102 )
    j_operator delete(v102);
  if ( v101 )
    (*(void (**)(void))(*(_DWORD *)v101 + 4))();
  v101 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v93, Item::mPumpkinPie);
  j_definition<Block const*,Item *,Item *>((int)&v92, 0, Block::mPumpkin, 0, Item::mSugar, 0, Item::mEgg);
  j_Recipes::addShapelessRecipe((int)v2, (int)&v93, &v92);
  *(_QWORD *)&v48 = v92;
  if ( (_DWORD)v92 != HIDWORD(v92) )
      v50 = *(void **)(v48 + 60);
      if ( v50 )
        j_operator delete(v50);
      v51 = *(void **)(v48 + 44);
      if ( v51 )
        j_operator delete(v51);
      v52 = *(_DWORD *)(v48 + 16);
      if ( v52 )
        (*(void (**)(void))(*(_DWORD *)v52 + 4))();
      *(_DWORD *)(v48 + 16) = 0;
      v48 += 88;
    while ( v49 != v48 );
    v48 = v92;
  if ( v48 )
    j_operator delete((void *)v48);
  if ( v96 )
    j_operator delete(v96);
  if ( v95 )
    j_operator delete(v95);
  if ( v94 )
    (*(void (**)(void))(*(_DWORD *)v94 + 4))();
  v94 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v88, Item::mFermented_spider_eye);
  sub_21E94B4((void **)&v87, "RB");
  sub_21E94B4((void **)&v86, " #");
  j_definition<Item *,Item *,Block const*>(
    (int)&v84,
    82,
    Item::mSpider_eye,
    66,
    Item::mSugar,
    35,
    Block::mBrownMushroom);
  j_Recipes::addShapedRecipe((int)v2, (int)&v88, &v87, &v86);
  v53 = *(_QWORD *)&v84;
  if ( v84 != v85 )
      v54 = *(void **)(v53 + 60);
      if ( v54 )
        j_operator delete(v54);
      v55 = *(void **)(v53 + 44);
      if ( v55 )
        j_operator delete(v55);
      v56 = *(_DWORD *)(v53 + 16);
      if ( v56 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v56 + 4))(v56);
      *(_DWORD *)(v53 + 16) = 0;
      LODWORD(v53) = v53 + 88;
    while ( HIDWORD(v53) != (_DWORD)v53 );
    LODWORD(v53) = v84;
  if ( (_DWORD)v53 )
    j_operator delete((void *)v53);
  v57 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v86 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v87 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  if ( v91 )
    j_operator delete(v91);
  if ( v90 )
    j_operator delete(v90);
  result = v89;
  if ( v89 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v89 + 4))(v89);
  return result;
}
