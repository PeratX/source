

void __fastcall ArmorRecipes::addRecipes(ArmorRecipes *this, Recipes *a2)
{
  int *v2; // r5@1
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
  ItemInstance *v13; // r6@11
  int v14; // r9@11
  signed int v15; // r11@13
  ItemInstance *v16; // r7@14
  int *v17; // r6@14
  int v18; // r5@14
  int v19; // r10@14
  void *v20; // r0@15
  void *v21; // r0@17
  int v22; // r0@19
  void *v23; // r4@33
  void *v24; // r6@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  unsigned int *v29; // r2@43
  signed int v30; // r1@45
  unsigned int *v31; // r2@47
  signed int v32; // r1@49
  unsigned int *v33; // r2@51
  signed int v34; // r1@53
  unsigned int *v35; // r2@55
  signed int v36; // r1@57
  unsigned int *v37; // r2@59
  signed int v38; // r1@61
  unsigned int *v39; // r2@63
  signed int v40; // r1@65
  unsigned int *v41; // r2@67
  signed int v42; // r1@69
  unsigned int *v43; // r2@71
  signed int v44; // r1@73
  unsigned int *v45; // r2@115
  signed int v46; // r1@117
  int *v47; // r0@123
  void *v48; // r4@128
  void *v49; // r6@128
  unsigned int *v50; // r2@130
  signed int v51; // r1@132
  int *v52; // r0@138
  void *v53; // r4@143
  void *v54; // r6@143
  unsigned int *v55; // r2@145
  signed int v56; // r1@147
  int *v57; // r0@153
  void *v58; // r4@158
  void *v59; // r6@158
  unsigned int *v60; // r2@160
  signed int v61; // r1@162
  int *v62; // r0@168
  int v63; // [sp+8h] [bp-150h]@11
  int v64; // [sp+Ch] [bp-14Ch]@14
  int v65; // [sp+10h] [bp-148h]@14
  char v66; // [sp+18h] [bp-140h]@11
  int v67; // [sp+20h] [bp-138h]@29
  void *v68; // [sp+3Ch] [bp-11Ch]@27
  void *ptr; // [sp+4Ch] [bp-10Ch]@25
  int v70; // [sp+60h] [bp-F8h]@11
  int v71; // [sp+64h] [bp-F4h]@11
  int v72; // [sp+68h] [bp-F0h]@11
  int v73; // [sp+6Ch] [bp-ECh]@11
  int v74; // [sp+70h] [bp-E8h]@11
  int v75; // [sp+74h] [bp-E4h]@11
  int v76; // [sp+78h] [bp-E0h]@11
  int v77; // [sp+7Ch] [bp-DCh]@11
  int v78; // [sp+80h] [bp-D8h]@11
  int v79; // [sp+84h] [bp-D4h]@11
  int v80; // [sp+88h] [bp-D0h]@11
  int v81; // [sp+8Ch] [bp-CCh]@11
  int v82; // [sp+90h] [bp-C8h]@11
  int v83; // [sp+94h] [bp-C4h]@11
  int v84; // [sp+98h] [bp-C0h]@11
  int v85; // [sp+9Ch] [bp-BCh]@11
  int v86; // [sp+A0h] [bp-B8h]@11
  int v87; // [sp+A4h] [bp-B4h]@11
  int v88; // [sp+A8h] [bp-B0h]@11
  int v89; // [sp+ACh] [bp-ACh]@11
  int v90; // [sp+B4h] [bp-A4h]@1
  int v91; // [sp+BCh] [bp-9Ch]@1
  int v92; // [sp+C4h] [bp-94h]@1
  int v93; // [sp+CCh] [bp-8Ch]@1
  int v94; // [sp+D4h] [bp-84h]@1
  int v95; // [sp+DCh] [bp-7Ch]@1
  int v96; // [sp+E4h] [bp-74h]@1
  int v97; // [sp+ECh] [bp-6Ch]@1
  int v98; // [sp+F4h] [bp-64h]@1
  int v99; // [sp+FCh] [bp-5Ch]@1
  void *v100; // [sp+100h] [bp-58h]@1
  void *v101; // [sp+104h] [bp-54h]@158
  void *v102; // [sp+10Ch] [bp-4Ch]@1
  void *v103; // [sp+110h] [bp-48h]@143
  void *v104; // [sp+118h] [bp-40h]@1
  void *v105; // [sp+11Ch] [bp-3Ch]@128
  void *v106; // [sp+124h] [bp-34h]@1
  void *v107; // [sp+128h] [bp-30h]@33

  sub_21E94B4((void **)&v99, "XXX");
  sub_21E94B4((void **)&v98, "X X");
  v2 = (int *)&v100;
  j_Recipes::Shape((int)&v100, &v99, &v98);
  sub_21E94B4((void **)&v97, "X X");
  sub_21E94B4((void **)&v96, "XXX");
  sub_21E94B4((void **)&v95, "XXX");
  j_Recipes::Shape((int)&v102, &v97, &v96, &v95);
  sub_21E94B4((void **)&v94, "XXX");
  sub_21E94B4((void **)&v93, "X X");
  sub_21E94B4((void **)&v92, "X X");
  j_Recipes::Shape((int)&v104, &v94, &v93, &v92);
  sub_21E94B4((void **)&v91, "X X");
  sub_21E94B4((void **)&v90, "X X");
  j_Recipes::Shape((int)&v106, &v91, &v90);
  v3 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v90 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v91 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v92 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v93 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v94 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v95 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v96 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v97 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v98 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v99 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (ItemInstance *)&v66;
  v14 = 0;
  v63 = *(_WORD *)(Item::mLeather + 18);
  v86 = *(_WORD *)(Item::mLeather + 18);
  v87 = *(_WORD *)(Item::mIronIngot + 18);
  v88 = *(_WORD *)(Item::mDiamond + 18);
  v89 = *(_WORD *)(Item::mGoldIngot + 18);
  v70 = Item::mHelmet_leather;
  v71 = Item::mHelmet_iron;
  v72 = Item::mHelmet_diamond;
  v73 = Item::mHelmet_gold;
  v74 = Item::mChestplate_leather;
  v75 = Item::mChestplate_iron;
  v76 = Item::mChestplate_diamond;
  v77 = Item::mChestplate_gold;
  v78 = Item::mLeggings_leather;
  v79 = Item::mLeggings_iron;
  v80 = Item::mLeggings_diamond;
  v81 = Item::mLeggings_gold;
  v82 = Item::mBoots_leather;
  v83 = Item::mBoots_iron;
  v84 = Item::mBoots_diamond;
  v85 = Item::mBoots_gold;
  while ( 1 )
    v15 = 0;
    do
      j_ItemInstance::ItemInstance(v13, *(&v70 + 4 * v15 + v14));
      j_definition<Item *>((int)&v64, 88, Item::mItems[v63]);
      j_Recipes::addShapedRecipe();
      v16 = v13;
      v17 = v2;
      v19 = v65;
      v18 = v64;
      if ( v64 != v65 )
      {
        do
        {
          v20 = *(void **)(v18 + 60);
          if ( v20 )
            j_operator delete(v20);
          v21 = *(void **)(v18 + 44);
          if ( v21 )
            j_operator delete(v21);
          v22 = *(_DWORD *)(v18 + 16);
          if ( v22 )
            (*(void (**)(void))(*(_DWORD *)v22 + 4))();
          *(_DWORD *)(v18 + 16) = 0;
          v18 += 88;
        }
        while ( v19 != v18 );
        v18 = v64;
      }
      if ( v18 )
        j_operator delete((void *)v18);
      if ( ptr )
        j_operator delete(ptr);
      v2 = v17;
      if ( v68 )
        j_operator delete(v68);
      v13 = v16;
      if ( v67 )
        (*(void (**)(void))(*(_DWORD *)v67 + 4))();
      ++v15;
      v67 = 0;
    while ( v15 < 4 );
    if ( ++v14 > 3 )
      break;
    v63 = *(&v86 + v14);
  v24 = v107;
  v23 = v106;
  if ( v106 != v107 )
      v47 = (int *)(*(_DWORD *)v23 - 12);
      if ( v47 != &dword_28898C0 )
        v45 = (unsigned int *)(*(_DWORD *)v23 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
        else
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      v23 = (char *)v23 + 4;
    while ( v23 != v24 );
    v23 = v106;
  if ( v23 )
    j_operator delete(v23);
  v49 = v105;
  v48 = v104;
  if ( v104 != v105 )
      v52 = (int *)(*(_DWORD *)v48 - 12);
      if ( v52 != &dword_28898C0 )
        v50 = (unsigned int *)(*(_DWORD *)v48 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v48 = (char *)v48 + 4;
    while ( v48 != v49 );
    v48 = v104;
  if ( v48 )
    j_operator delete(v48);
  v54 = v103;
  v53 = v102;
  if ( v102 != v103 )
      v57 = (int *)(*(_DWORD *)v53 - 12);
      if ( v57 != &dword_28898C0 )
        v55 = (unsigned int *)(*(_DWORD *)v53 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v57);
      v53 = (char *)v53 + 4;
    while ( v53 != v54 );
    v53 = v102;
  if ( v53 )
    j_operator delete(v53);
  v59 = v101;
  v58 = v100;
  if ( v100 != v101 )
      v62 = (int *)(*(_DWORD *)v58 - 12);
      if ( v62 != &dword_28898C0 )
        v60 = (unsigned int *)(*(_DWORD *)v58 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v62);
      v58 = (char *)v58 + 4;
    while ( v58 != v59 );
    v58 = v100;
  if ( v58 )
    j_operator delete(v58);
}


void __fastcall ArmorRecipes::addRecipes(ArmorRecipes *this, Recipes *a2)
{
  ArmorRecipes::addRecipes(this, a2);
}
