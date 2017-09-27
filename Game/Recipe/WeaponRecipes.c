

void __fastcall WeaponRecipes::addRecipes(WeaponRecipes *this, Recipes *a2)
{
  WeaponRecipes::addRecipes(this, a2);
}


void __fastcall WeaponRecipes::addRecipes(WeaponRecipes *this, Recipes *a2)
{
  void *v2; // r0@1
  void *v3; // r0@2
  void *v4; // r0@3
  int v5; // r9@4
  signed int v6; // r5@4
  int v7; // r1@6
  int v8; // r5@7
  int v9; // r7@7
  void *v10; // r0@8
  void *v11; // r0@10
  int v12; // r0@12
  int v13; // r5@25
  int v14; // r7@25
  void *v15; // r0@26
  void *v16; // r0@28
  int v17; // r0@30
  __int64 v18; // r4@44
  void *v19; // r0@45
  void *v20; // r0@47
  int v21; // r0@49
  void *v22; // r0@55
  void *v23; // r0@56
  void *v24; // r0@57
  __int64 v25; // r4@64
  void *v26; // r0@65
  void *v27; // r0@67
  int v28; // r0@69
  void *v29; // r0@75
  void *v30; // r0@76
  void *v31; // r0@77
  ItemInstance *v32; // r11@84
  int *v33; // r5@84
  signed int v34; // r4@84
  int (**v35)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@84
  int v36; // r8@93
  int v37; // r7@93
  int v38; // r11@93
  ItemInstance *v39; // r0@93
  int *v40; // r7@93
  __int64 v41; // r4@93
  void *v42; // r0@94
  void *v43; // r0@96
  int v44; // r0@98
  void *v45; // r0@110
  void *v46; // r0@111
  void *v47; // r0@112
  unsigned int *v48; // r2@113
  signed int v49; // r1@115
  unsigned int *v50; // r2@117
  signed int v51; // r1@119
  unsigned int *v52; // r2@121
  signed int v53; // r1@123
  unsigned int *v54; // r2@137
  signed int v55; // r1@139
  unsigned int *v56; // r2@141
  signed int v57; // r1@143
  unsigned int *v58; // r2@145
  signed int v59; // r1@147
  void *v60; // r4@161
  void *v61; // r6@161
  unsigned int *v62; // r2@163
  signed int v63; // r1@165
  int *v64; // r0@171
  unsigned int *v65; // r2@177
  signed int v66; // r1@179
  unsigned int *v67; // r2@181
  signed int v68; // r1@183
  unsigned int *v69; // r2@185
  signed int v70; // r1@187
  unsigned int *v71; // r2@189
  signed int v72; // r1@191
  unsigned int *v73; // r2@193
  signed int v74; // r1@195
  unsigned int *v75; // r2@197
  signed int v76; // r1@199
  WeaponRecipes *v77; // [sp+24h] [bp-2C4h]@1
  char v78; // [sp+28h] [bp-2C0h]@93
  int v79; // [sp+30h] [bp-2B8h]@108
  void *v80; // [sp+4Ch] [bp-29Ch]@106
  void *v81; // [sp+5Ch] [bp-28Ch]@104
  int v82; // [sp+74h] [bp-274h]@84
  int v83; // [sp+78h] [bp-270h]@93
  int v84; // [sp+84h] [bp-264h]@93
  int v85; // [sp+8Ch] [bp-25Ch]@93
  int v86; // [sp+94h] [bp-254h]@93
  char v87; // [sp+98h] [bp-250h]@84
  int (**v88)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+A0h] [bp-248h]@89
  void *v89; // [sp+BCh] [bp-22Ch]@87
  void *v90; // [sp+CCh] [bp-21Ch]@85
  int v91; // [sp+E4h] [bp-204h]@64
  int v92; // [sp+E8h] [bp-200h]@64
  int v93; // [sp+F4h] [bp-1F4h]@64
  int v94; // [sp+FCh] [bp-1ECh]@64
  int v95; // [sp+104h] [bp-1E4h]@64
  char v96; // [sp+108h] [bp-1E0h]@64
  int v97; // [sp+110h] [bp-1D8h]@82
  void *v98; // [sp+12Ch] [bp-1BCh]@80
  void *v99; // [sp+13Ch] [bp-1ACh]@78
  int v100; // [sp+154h] [bp-194h]@44
  int v101; // [sp+158h] [bp-190h]@44
  int v102; // [sp+164h] [bp-184h]@44
  int v103; // [sp+16Ch] [bp-17Ch]@44
  int v104; // [sp+174h] [bp-174h]@44
  char v105; // [sp+178h] [bp-170h]@44
  int v106; // [sp+180h] [bp-168h]@62
  void *v107; // [sp+19Ch] [bp-14Ch]@60
  void *v108; // [sp+1ACh] [bp-13Ch]@58
  int v109; // [sp+1C4h] [bp-124h]@25
  int v110; // [sp+1C8h] [bp-120h]@25
  char v111; // [sp+1D0h] [bp-118h]@25
  int v112; // [sp+1D8h] [bp-110h]@40
  void *v113; // [sp+1F4h] [bp-F4h]@38
  void *v114; // [sp+204h] [bp-E4h]@36
  int v115; // [sp+21Ch] [bp-CCh]@7
  int v116; // [sp+220h] [bp-C8h]@7
  char v117; // [sp+228h] [bp-C0h]@7
  int v118; // [sp+230h] [bp-B8h]@22
  void *v119; // [sp+24Ch] [bp-9Ch]@20
  void *ptr; // [sp+25Ch] [bp-8Ch]@18
  int v121; // [sp+274h] [bp-74h]@4
  int v122; // [sp+278h] [bp-70h]@4
  int v123; // [sp+27Ch] [bp-6Ch]@4
  int v124; // [sp+280h] [bp-68h]@4
  int v125; // [sp+284h] [bp-64h]@4
  int v126; // [sp+288h] [bp-60h]@4
  int v127; // [sp+28Ch] [bp-5Ch]@4
  int v128; // [sp+290h] [bp-58h]@4
  int v129; // [sp+294h] [bp-54h]@4
  int v130; // [sp+298h] [bp-50h]@4
  int v131; // [sp+2A0h] [bp-48h]@1
  int v132; // [sp+2A8h] [bp-40h]@1
  int v133; // [sp+2B0h] [bp-38h]@1
  void *v134; // [sp+2B4h] [bp-34h]@1
  void *v135; // [sp+2B8h] [bp-30h]@161

  v77 = this;
  sub_21E94B4((void **)&v133, "X");
  sub_21E94B4((void **)&v132, "X");
  sub_21E94B4((void **)&v131, "#");
  Recipes::Shape((int)&v134, &v133, &v132, &v131);
  v2 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
  {
    v54 = (unsigned int *)(v131 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
    }
    else
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v132 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  v4 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v133 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = 0;
  v6 = *(_BYTE *)(Block::mWoodPlanks + 4);
  v126 = *(_BYTE *)(Block::mWoodPlanks + 4);
  v127 = *(_BYTE *)(Block::mCobblestone + 4);
  v128 = *(_WORD *)(Item::mIronIngot + 18);
  v129 = *(_WORD *)(Item::mDiamond + 18);
  v130 = *(_WORD *)(Item::mGoldIngot + 18);
  v121 = Item::mSword_wood;
  v122 = Item::mSword_stone;
  v123 = Item::mSword_iron;
  v124 = Item::mSword_diamond;
  v125 = Item::mSword_gold;
  while ( 1 )
    v7 = *(&v121 + v5);
    if ( v6 > 255 )
      ItemInstance::ItemInstance((ItemInstance *)&v111, v7);
      definition<Item *,Item *>((int)&v109, 35, Item::mStick, 88, Item::mItems[v6]);
      Recipes::addShapedRecipe();
      v14 = v110;
      v13 = v109;
      if ( v109 != v110 )
      {
        do
        {
          v15 = *(void **)(v13 + 60);
          if ( v15 )
            operator delete(v15);
          v16 = *(void **)(v13 + 44);
          if ( v16 )
            operator delete(v16);
          v17 = *(_DWORD *)(v13 + 16);
          if ( v17 )
            (*(void (**)(void))(*(_DWORD *)v17 + 4))();
          *(_DWORD *)(v13 + 16) = 0;
          v13 += 88;
        }
        while ( v14 != v13 );
        v13 = v109;
      }
      if ( v13 )
        operator delete((void *)v13);
      if ( v114 )
        operator delete(v114);
      if ( v113 )
        operator delete(v113);
      if ( v112 )
        (*(void (**)(void))(*(_DWORD *)v112 + 4))();
      v112 = 0;
      ItemInstance::ItemInstance((ItemInstance *)&v117, v7);
      definition<Item *,Block const*>((int)&v115, 35, Item::mStick, 88, Block::mBlocks[v6]);
      v9 = v116;
      v8 = v115;
      if ( v115 != v116 )
          v10 = *(void **)(v8 + 60);
          if ( v10 )
            operator delete(v10);
          v11 = *(void **)(v8 + 44);
          if ( v11 )
            operator delete(v11);
          v12 = *(_DWORD *)(v8 + 16);
          if ( v12 )
            (*(void (**)(void))(*(_DWORD *)v12 + 4))();
          *(_DWORD *)(v8 + 16) = 0;
          v8 += 88;
        while ( v9 != v8 );
        v8 = v115;
      if ( v8 )
        operator delete((void *)v8);
      if ( ptr )
        operator delete(ptr);
      if ( v119 )
        operator delete(v119);
      if ( v118 )
        (*(void (**)(void))(*(_DWORD *)v118 + 4))();
      v118 = 0;
    if ( ++v5 > 4 )
      break;
    v6 = *(&v126 + v5);
  ItemInstance::ItemInstance((ItemInstance *)&v105, Item::mBow, 1);
  sub_21E94B4((void **)&v104, " #X");
  sub_21E94B4((void **)&v103, "# X");
  sub_21E94B4((void **)&v102, " #X");
  definition<Item *,Item *>((int)&v100, 88, Item::mString, 35, Item::mStick);
  Recipes::addShapedRecipe((int)v77, (int)&v105, &v104, &v103, &v102);
  v18 = *(_QWORD *)&v100;
  if ( v100 != v101 )
    do
      v19 = *(void **)(v18 + 60);
      if ( v19 )
        operator delete(v19);
      v20 = *(void **)(v18 + 44);
      if ( v20 )
        operator delete(v20);
      v21 = *(_DWORD *)(v18 + 16);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      *(_DWORD *)(v18 + 16) = 0;
      LODWORD(v18) = v18 + 88;
    while ( HIDWORD(v18) != (_DWORD)v18 );
    LODWORD(v18) = v100;
  if ( (_DWORD)v18 )
    operator delete((void *)v18);
  v22 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v102 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v103 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v104 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  if ( v108 )
    operator delete(v108);
  if ( v107 )
    operator delete(v107);
  if ( v106 )
    (*(void (**)(void))(*(_DWORD *)v106 + 4))();
  v106 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v96, Item::mArrow, 4);
  sub_21E94B4((void **)&v95, "X");
  sub_21E94B4((void **)&v94, "#");
  sub_21E94B4((void **)&v93, "Y");
  definition<Item *,Item *,Item *>((int)&v91, 89, Item::mFeather, 88, Item::mFlint, 35, Item::mStick);
  Recipes::addShapedRecipe((int)v77, (int)&v96, &v95, &v94, &v93);
  v25 = *(_QWORD *)&v91;
  if ( v91 != v92 )
      v26 = *(void **)(v25 + 60);
      if ( v26 )
        operator delete(v26);
      v27 = *(void **)(v25 + 44);
      if ( v27 )
        operator delete(v27);
      v28 = *(_DWORD *)(v25 + 16);
      if ( v28 )
        (*(void (**)(void))(*(_DWORD *)v28 + 4))();
      *(_DWORD *)(v25 + 16) = 0;
      LODWORD(v25) = v25 + 88;
    while ( HIDWORD(v25) != (_DWORD)v25 );
    LODWORD(v25) = v91;
  if ( (_DWORD)v25 )
    operator delete((void *)v25);
  v29 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v93 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v94 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v95 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  if ( v99 )
    operator delete(v99);
  if ( v98 )
    operator delete(v98);
  if ( v97 )
    (*(void (**)(void))(*(_DWORD *)v97 + 4))();
  v32 = (ItemInstance *)&v87;
  v33 = &v82;
  v34 = 5;
  v97 = 0;
  v35 = &pthread_create;
  while ( v34 < Potion::getPotionCount((Potion *)v35) )
    v36 = v34 + 1;
    ItemInstance::ItemInstance(v32, Item::mArrow, 8, v34 + 1);
    sub_21E94B4((void **)&v86, "XXX");
    sub_21E94B4((void **)&v85, "X#X");
    sub_21E94B4((void **)&v84, "XXX");
    v37 = (int)v32;
    v38 = Item::mArrow;
    v39 = ItemInstance::ItemInstance((ItemInstance *)&v78, Item::mLingering_potion, 1, v34);
    definition<Item *,ItemInstance>((int)v33, 88, v38, 35, (int)v39);
    Recipes::addShapedRecipe((int)v77, v37, &v86, &v85, &v84);
    v40 = v33;
    v41 = *(_QWORD *)&v82;
    if ( v82 != v83 )
        v42 = *(void **)(v41 + 60);
        if ( v42 )
          operator delete(v42);
        v43 = *(void **)(v41 + 44);
        if ( v43 )
          operator delete(v43);
        v44 = *(_DWORD *)(v41 + 16);
        if ( v44 )
          (*(void (**)(void))(*(_DWORD *)v44 + 4))();
        *(_DWORD *)(v41 + 16) = 0;
        LODWORD(v41) = v41 + 88;
      while ( HIDWORD(v41) != (_DWORD)v41 );
      LODWORD(v41) = v82;
    v33 = v40;
    if ( (_DWORD)v41 )
      operator delete((void *)v41);
    if ( v81 )
      operator delete(v81);
    v32 = (ItemInstance *)&v87;
    if ( v80 )
      operator delete(v80);
    if ( v79 )
      (*(void (**)(void))(*(_DWORD *)v79 + 4))();
    v79 = 0;
    v45 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v84 - 4);
      if ( &pthread_create )
        __dmb();
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    v46 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v85 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
    v47 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v86 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
    if ( v90 )
      operator delete(v90);
    if ( v89 )
      operator delete(v89);
    v35 = v88;
    if ( v88 )
      v35 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))(*((int (**)(void))*v88 + 1))();
    v88 = 0;
    v34 = v36;
  v61 = v135;
  v60 = v134;
  if ( v134 != v135 )
      v64 = (int *)(*(_DWORD *)v60 - 12);
      if ( v64 != &dword_28898C0 )
        v62 = (unsigned int *)(*(_DWORD *)v60 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
        else
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v64);
      v60 = (char *)v60 + 4;
    while ( v60 != v61 );
    v60 = v134;
  if ( v60 )
    operator delete(v60);
}
