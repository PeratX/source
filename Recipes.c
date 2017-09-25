

void __fastcall Recipes::teardownRecipes(Recipes *this)
{
  FurnaceRecipes *v1; // r0@1
  int v2; // r4@1
  char *v3; // r5@2 OVERLAPPED
  char *v4; // r6@2 OVERLAPPED

  v1 = (FurnaceRecipes *)&Recipes::mInstance;
  v2 = Recipes::mInstance;
  Recipes::mInstance = 0;
  if ( v2 )
  {
    std::_Rb_tree<ItemInstance,std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>,std::_Select1st<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>,SortItemInstanceIdAux,std::allocator<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>>::_M_erase(
      v2 + 12,
      *(_DWORD *)(v2 + 20));
    *(_QWORD *)&v3 = *(_QWORD *)v2;
    if ( v3 != v4 )
    {
      do
      {
        if ( *(_DWORD *)v3 )
          (*(void (**)(void))(**(_DWORD **)v3 + 4))();
        *(_DWORD *)v3 = 0;
        v3 += 4;
      }
      while ( v4 != v3 );
      v3 = *(char **)v2;
    }
    if ( v3 )
      operator delete(v3);
    operator delete((void *)v2);
  }
  j_j_j__ZN14FurnaceRecipes22teardownFurnaceRecipesEv(v1);
}


Recipes *__fastcall Recipes::getInstance(Recipes *this)
{
  Recipes *v1; // r4@1
  int v2; // r5@2
  char *v3; // r4@3
  char *v4; // r6@3

  v1 = (Recipes *)Recipes::mInstance;
  if ( !Recipes::mInstance )
  {
    v1 = (Recipes *)operator new(0x24u);
    *(_DWORD *)v1 = 0;
    *((_DWORD *)v1 + 1) = 0;
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 5) = 0;
    *((_DWORD *)v1 + 6) = 0;
    *((_DWORD *)v1 + 7) = 0;
    *((_DWORD *)v1 + 8) = 0;
    *((_DWORD *)v1 + 4) = 0;
    *((_DWORD *)v1 + 6) = (char *)v1 + 16;
    *((_DWORD *)v1 + 7) = (char *)v1 + 16;
    Recipes::init(v1);
    v2 = Recipes::mInstance;
    Recipes::mInstance = v1;
    if ( v2 )
    {
      std::_Rb_tree<ItemInstance,std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>,std::_Select1st<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>,SortItemInstanceIdAux,std::allocator<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>>::_M_erase(
        v2 + 12,
        *(_DWORD *)(v2 + 20));
      v4 = (char *)(*(_QWORD *)v2 >> 32);
      v3 = (char *)*(_QWORD *)v2;
      if ( v3 != v4 )
      {
        do
        {
          if ( *(_DWORD *)v3 )
            (*(void (**)(void))(**(_DWORD **)v3 + 4))();
          *(_DWORD *)v3 = 0;
          v3 += 4;
        }
        while ( v4 != v3 );
        v3 = *(char **)v2;
      }
      if ( v3 )
        operator delete(v3);
      operator delete((void *)v2);
      v1 = (Recipes *)Recipes::mInstance;
    }
  }
  return v1;
}


void __fastcall Recipes::init(Recipes *this)
{
  Recipes::init(this);
}


void __fastcall Recipes::addShapelessRecipe(int a1, int a2, unsigned __int64 *a3)
{
  Recipes::addShapelessRecipe(a1, a2, a3);
}


int __fastcall Recipes::getRecipeFor(Recipes *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r10@1
  char *v3; // r1@1
  char *v4; // r9@1
  char *v5; // r7@1
  char *v6; // r8@3
  unsigned int v7; // r6@4
  int v8; // r5@4
  unsigned int v9; // r4@4
  int v10; // r0@4
  unsigned int v11; // r5@11 OVERLAPPED
  int v12; // r8@11
  unsigned int v13; // r6@11 OVERLAPPED
  int v14; // r0@11
  bool v15; // nf@12
  unsigned __int8 v16; // vf@12
  char *v17; // r0@12
  bool v18; // zf@16
  __int64 v19; // kr00_8@19
  int result; // r0@22

  v2 = a2;
  v3 = (char *)*((_DWORD *)this + 5);
  v4 = (char *)this + 16;
  v5 = (char *)this + 16;
  if ( v3 )
  {
    v5 = (char *)this + 16;
    do
    {
      v6 = v5;
      v5 = v3;
      while ( 1 )
      {
        v7 = *((_DWORD *)v5 + 4);
        v8 = ItemInstance::getAuxValue((ItemInstance *)(v5 + 16));
        v9 = *(_DWORD *)v2;
        v10 = ItemInstance::getAuxValue(v2);
        if ( v7 >= v9 && (v9 < v7 || v8 >= v10) )
          break;
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v6;
          goto LABEL_10;
        }
      }
      v3 = (char *)*((_DWORD *)v5 + 2);
    }
    while ( v3 );
  }
LABEL_10:
  if ( v5 == v4 )
    goto LABEL_27;
  v11 = *(_DWORD *)v2;
  v12 = ItemInstance::getAuxValue(v2);
  v13 = *((_DWORD *)v5 + 4);
  v14 = ItemInstance::getAuxValue((ItemInstance *)(v5 + 16));
  if ( v11 < v13 )
  v16 = __OFSUB__(v12, v14);
  v15 = v12 - v14 < 0;
  v17 = v5;
  if ( v15 ^ v16 )
    v17 = v4;
  if ( v13 < v11 )
    v17 = v5;
  v18 = v17 == v4;
  if ( v17 != v4 )
    *(_QWORD *)&v11 = *((_QWORD *)v17 + 11);
    v18 = v11 == v13;
  if ( v18 )
LABEL_27:
    result = 0;
  else
    while ( 1 )
      v19 = *(_QWORD *)(*(int (**)(void))(**(_DWORD **)v11 + 20))();
      if ( (_DWORD)v19 != HIDWORD(v19) )
        if ( ItemInstance::matchesItem(v2, (const ItemInstance *)v19) )
      v11 += 4;
      if ( v13 == v11 )
        return 0;
    result = *(_DWORD *)v11;
  return result;
}


void __fastcall Recipes::addSingleIngredientRecipeItem(Recipes *this, const ItemInstance *a2, const ItemInstance *a3)
{
  Recipes::addSingleIngredientRecipeItem(this, a2, a3);
}


int __fastcall Recipes::_addWoodDoorRecipes(Recipes *this)
{
  Recipes *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  void *v7; // r0@18
  void *v8; // r0@19
  void *v9; // r0@20
  int v10; // r5@27 OVERLAPPED
  int v11; // r6@27 OVERLAPPED
  void *v12; // r0@28
  void *v13; // r0@30
  int v14; // r0@32
  void *v15; // r0@44
  void *v16; // r0@45
  void *v17; // r0@46
  int v18; // r5@53 OVERLAPPED
  int v19; // r6@53 OVERLAPPED
  void *v20; // r0@54
  void *v21; // r0@56
  int v22; // r0@58
  void *v23; // r0@70
  void *v24; // r0@71
  void *v25; // r0@72
  int v26; // r5@79 OVERLAPPED
  int v27; // r6@79 OVERLAPPED
  void *v28; // r0@80
  void *v29; // r0@82
  int v30; // r0@84
  void *v31; // r0@96
  void *v32; // r0@97
  void *v33; // r0@98
  int v34; // r5@105 OVERLAPPED
  int v35; // r6@105 OVERLAPPED
  void *v36; // r0@106
  void *v37; // r0@108
  int v38; // r0@110
  void *v39; // r0@122
  void *v40; // r0@123
  void *v41; // r0@124
  __int64 v42; // r4@131
  void *v43; // r0@132
  void *v44; // r0@134
  int v45; // r0@136
  void *v46; // r0@148
  void *v47; // r0@149
  void *v48; // r0@150
  int result; // r0@155
  unsigned int *v50; // r2@158
  signed int v51; // r1@160
  unsigned int *v52; // r2@162
  signed int v53; // r1@164
  unsigned int *v54; // r2@166
  signed int v55; // r1@168
  unsigned int *v56; // r2@170
  signed int v57; // r1@172
  unsigned int *v58; // r2@174
  signed int v59; // r1@176
  unsigned int *v60; // r2@178
  signed int v61; // r1@180
  unsigned int *v62; // r2@182
  signed int v63; // r1@184
  unsigned int *v64; // r2@186
  signed int v65; // r1@188
  unsigned int *v66; // r2@190
  signed int v67; // r1@192
  unsigned int *v68; // r2@194
  signed int v69; // r1@196
  unsigned int *v70; // r2@198
  signed int v71; // r1@200
  unsigned int *v72; // r2@202
  signed int v73; // r1@204
  unsigned int *v74; // r2@206
  signed int v75; // r1@208
  unsigned int *v76; // r2@210
  signed int v77; // r1@212
  unsigned int *v78; // r2@214
  signed int v79; // r1@216
  unsigned int *v80; // r2@218
  signed int v81; // r1@220
  unsigned int *v82; // r2@222
  signed int v83; // r1@224
  unsigned int *v84; // r2@226
  signed int v85; // r1@228
  char v86; // [sp+8h] [bp-468h]@131
  int v87; // [sp+10h] [bp-460h]@146
  void *v88; // [sp+2Ch] [bp-444h]@144
  void *v89; // [sp+3Ch] [bp-434h]@142
  int v90; // [sp+54h] [bp-41Ch]@131
  int v91; // [sp+58h] [bp-418h]@131
  int v92; // [sp+64h] [bp-40Ch]@131
  int v93; // [sp+6Ch] [bp-404h]@131
  int v94; // [sp+74h] [bp-3FCh]@131
  char v95; // [sp+78h] [bp-3F8h]@131
  int v96; // [sp+80h] [bp-3F0h]@155
  void *v97; // [sp+9Ch] [bp-3D4h]@153
  void *v98; // [sp+ACh] [bp-3C4h]@151
  char v99; // [sp+C0h] [bp-3B0h]@105
  int v100; // [sp+C8h] [bp-3A8h]@120
  void *v101; // [sp+E4h] [bp-38Ch]@118
  void *v102; // [sp+F4h] [bp-37Ch]@116
  int v103; // [sp+10Ch] [bp-364h]@105
  int v104; // [sp+110h] [bp-360h]@105
  int v105; // [sp+11Ch] [bp-354h]@105
  int v106; // [sp+124h] [bp-34Ch]@105
  int v107; // [sp+12Ch] [bp-344h]@105
  char v108; // [sp+130h] [bp-340h]@105
  int v109; // [sp+138h] [bp-338h]@129
  void *v110; // [sp+154h] [bp-31Ch]@127
  void *v111; // [sp+164h] [bp-30Ch]@125
  char v112; // [sp+178h] [bp-2F8h]@79
  int v113; // [sp+180h] [bp-2F0h]@94
  void *v114; // [sp+19Ch] [bp-2D4h]@92
  void *v115; // [sp+1ACh] [bp-2C4h]@90
  int v116; // [sp+1C4h] [bp-2ACh]@79
  int v117; // [sp+1C8h] [bp-2A8h]@79
  int v118; // [sp+1D4h] [bp-29Ch]@79
  int v119; // [sp+1DCh] [bp-294h]@79
  int v120; // [sp+1E4h] [bp-28Ch]@79
  char v121; // [sp+1E8h] [bp-288h]@79
  int v122; // [sp+1F0h] [bp-280h]@103
  void *v123; // [sp+20Ch] [bp-264h]@101
  void *v124; // [sp+21Ch] [bp-254h]@99
  char v125; // [sp+230h] [bp-240h]@53
  int v126; // [sp+238h] [bp-238h]@68
  void *v127; // [sp+254h] [bp-21Ch]@66
  void *v128; // [sp+264h] [bp-20Ch]@64
  int v129; // [sp+27Ch] [bp-1F4h]@53
  int v130; // [sp+280h] [bp-1F0h]@53
  int v131; // [sp+28Ch] [bp-1E4h]@53
  int v132; // [sp+294h] [bp-1DCh]@53
  int v133; // [sp+29Ch] [bp-1D4h]@53
  char v134; // [sp+2A0h] [bp-1D0h]@53
  int v135; // [sp+2A8h] [bp-1C8h]@77
  void *v136; // [sp+2C4h] [bp-1ACh]@75
  void *v137; // [sp+2D4h] [bp-19Ch]@73
  char v138; // [sp+2E8h] [bp-188h]@27
  int v139; // [sp+2F0h] [bp-180h]@42
  void *v140; // [sp+30Ch] [bp-164h]@40
  void *v141; // [sp+31Ch] [bp-154h]@38
  int v142; // [sp+334h] [bp-13Ch]@27
  int v143; // [sp+338h] [bp-138h]@27
  int v144; // [sp+344h] [bp-12Ch]@27
  int v145; // [sp+34Ch] [bp-124h]@27
  int v146; // [sp+354h] [bp-11Ch]@27
  char v147; // [sp+358h] [bp-118h]@27
  int v148; // [sp+360h] [bp-110h]@51
  void *v149; // [sp+37Ch] [bp-F4h]@49
  void *v150; // [sp+38Ch] [bp-E4h]@47
  char v151; // [sp+3A0h] [bp-D0h]@1
  int v152; // [sp+3A8h] [bp-C8h]@16
  void *v153; // [sp+3C4h] [bp-ACh]@14
  void *ptr; // [sp+3D4h] [bp-9Ch]@12
  int v155; // [sp+3ECh] [bp-84h]@1
  int v156; // [sp+3F0h] [bp-80h]@1
  int v157; // [sp+3FCh] [bp-74h]@1
  int v158; // [sp+404h] [bp-6Ch]@1
  int v159; // [sp+40Ch] [bp-64h]@1
  char v160; // [sp+410h] [bp-60h]@1
  int v161; // [sp+418h] [bp-58h]@25
  void *v162; // [sp+434h] [bp-3Ch]@23
  void *v163; // [sp+444h] [bp-2Ch]@21

  v1 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v160, Item::mDoor_wood, 3);
  sub_21E94B4((void **)&v159, "##");
  sub_21E94B4((void **)&v158, "##");
  sub_21E94B4((void **)&v157, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v151, Block::mWoodPlanks, 1, 0);
  definition<ItemInstance>((int)&v155, 35, (int)&v151);
  Recipes::addShapedRecipe((int)v1, (int)&v160, &v159, &v158, &v157);
  *(_QWORD *)&v2 = *(_QWORD *)&v155;
  if ( v155 != v156 )
  {
    do
    {
      v4 = *(void **)(v2 + 60);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 44);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 16);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 16) = 0;
      v2 += 88;
    }
    while ( v3 != v2 );
    v2 = v155;
  }
  if ( v2 )
    operator delete((void *)v2);
  if ( ptr )
    operator delete(ptr);
  if ( v153 )
    operator delete(v153);
  if ( v152 )
    (*(void (**)(void))(*(_DWORD *)v152 + 4))();
  v152 = 0;
  v7 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v157 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v158 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v159 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v163 )
    operator delete(v163);
  if ( v162 )
    operator delete(v162);
  if ( v161 )
    (*(void (**)(void))(*(_DWORD *)v161 + 4))();
  v161 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v147, Item::mDoor_spruce, 3);
  sub_21E94B4((void **)&v146, "##");
  sub_21E94B4((void **)&v145, "##");
  sub_21E94B4((void **)&v144, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v138, Block::mWoodPlanks, 1, 1);
  definition<ItemInstance>((int)&v142, 35, (int)&v138);
  Recipes::addShapedRecipe((int)v1, (int)&v147, &v146, &v145, &v144);
  *(_QWORD *)&v10 = *(_QWORD *)&v142;
  if ( v142 != v143 )
      v12 = *(void **)(v10 + 60);
      if ( v12 )
        operator delete(v12);
      v13 = *(void **)(v10 + 44);
      if ( v13 )
        operator delete(v13);
      v14 = *(_DWORD *)(v10 + 16);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v10 + 16) = 0;
      v10 += 88;
    while ( v11 != v10 );
    v10 = v142;
  if ( v10 )
    operator delete((void *)v10);
  if ( v141 )
    operator delete(v141);
  if ( v140 )
    operator delete(v140);
  if ( v139 )
    (*(void (**)(void))(*(_DWORD *)v139 + 4))();
  v139 = 0;
  v15 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v144 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v145 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v146 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v150 )
    operator delete(v150);
  if ( v149 )
    operator delete(v149);
  if ( v148 )
    (*(void (**)(void))(*(_DWORD *)v148 + 4))();
  v148 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v134, Item::mDoor_birch, 3);
  sub_21E94B4((void **)&v133, "##");
  sub_21E94B4((void **)&v132, "##");
  sub_21E94B4((void **)&v131, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v125, Block::mWoodPlanks, 1, 2);
  definition<ItemInstance>((int)&v129, 35, (int)&v125);
  Recipes::addShapedRecipe((int)v1, (int)&v134, &v133, &v132, &v131);
  *(_QWORD *)&v18 = *(_QWORD *)&v129;
  if ( v129 != v130 )
      v20 = *(void **)(v18 + 60);
      if ( v20 )
        operator delete(v20);
      v21 = *(void **)(v18 + 44);
      if ( v21 )
        operator delete(v21);
      v22 = *(_DWORD *)(v18 + 16);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      *(_DWORD *)(v18 + 16) = 0;
      v18 += 88;
    while ( v19 != v18 );
    v18 = v129;
  if ( v18 )
    operator delete((void *)v18);
  if ( v128 )
    operator delete(v128);
  if ( v127 )
    operator delete(v127);
  if ( v126 )
    (*(void (**)(void))(*(_DWORD *)v126 + 4))();
  v126 = 0;
  v23 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v131 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v132 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v133 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  if ( v137 )
    operator delete(v137);
  if ( v136 )
    operator delete(v136);
  if ( v135 )
    (*(void (**)(void))(*(_DWORD *)v135 + 4))();
  v135 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v121, Item::mDoor_jungle, 3);
  sub_21E94B4((void **)&v120, "##");
  sub_21E94B4((void **)&v119, "##");
  sub_21E94B4((void **)&v118, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v112, Block::mWoodPlanks, 1, 3);
  definition<ItemInstance>((int)&v116, 35, (int)&v112);
  Recipes::addShapedRecipe((int)v1, (int)&v121, &v120, &v119, &v118);
  *(_QWORD *)&v26 = *(_QWORD *)&v116;
  if ( v116 != v117 )
      v28 = *(void **)(v26 + 60);
      if ( v28 )
        operator delete(v28);
      v29 = *(void **)(v26 + 44);
      if ( v29 )
        operator delete(v29);
      v30 = *(_DWORD *)(v26 + 16);
      if ( v30 )
        (*(void (**)(void))(*(_DWORD *)v30 + 4))();
      *(_DWORD *)(v26 + 16) = 0;
      v26 += 88;
    while ( v27 != v26 );
    v26 = v116;
  if ( v26 )
    operator delete((void *)v26);
  if ( v115 )
    operator delete(v115);
  if ( v114 )
    operator delete(v114);
  if ( v113 )
    (*(void (**)(void))(*(_DWORD *)v113 + 4))();
  v113 = 0;
  v31 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v118 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v119 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v120 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  if ( v124 )
    operator delete(v124);
  if ( v123 )
    operator delete(v123);
  if ( v122 )
    (*(void (**)(void))(*(_DWORD *)v122 + 4))();
  v122 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v108, Item::mDoor_acacia, 3);
  sub_21E94B4((void **)&v107, "##");
  sub_21E94B4((void **)&v106, "##");
  sub_21E94B4((void **)&v105, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v99, Block::mWoodPlanks, 1, 4);
  definition<ItemInstance>((int)&v103, 35, (int)&v99);
  Recipes::addShapedRecipe((int)v1, (int)&v108, &v107, &v106, &v105);
  *(_QWORD *)&v34 = *(_QWORD *)&v103;
  if ( v103 != v104 )
      v36 = *(void **)(v34 + 60);
      if ( v36 )
        operator delete(v36);
      v37 = *(void **)(v34 + 44);
      if ( v37 )
        operator delete(v37);
      v38 = *(_DWORD *)(v34 + 16);
      if ( v38 )
        (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      *(_DWORD *)(v34 + 16) = 0;
      v34 += 88;
    while ( v35 != v34 );
    v34 = v103;
  if ( v34 )
    operator delete((void *)v34);
  if ( v102 )
    operator delete(v102);
  if ( v101 )
    operator delete(v101);
  if ( v100 )
    (*(void (**)(void))(*(_DWORD *)v100 + 4))();
  v100 = 0;
  v39 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v105 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v106 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v107 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  if ( v111 )
    operator delete(v111);
  if ( v110 )
    operator delete(v110);
  if ( v109 )
    (*(void (**)(void))(*(_DWORD *)v109 + 4))();
  v109 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v95, Item::mDoor_darkoak, 3);
  sub_21E94B4((void **)&v94, "##");
  sub_21E94B4((void **)&v93, "##");
  sub_21E94B4((void **)&v92, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v86, Block::mWoodPlanks, 1, 5);
  definition<ItemInstance>((int)&v90, 35, (int)&v86);
  Recipes::addShapedRecipe((int)v1, (int)&v95, &v94, &v93, &v92);
  v42 = *(_QWORD *)&v90;
  if ( v90 != v91 )
      v43 = *(void **)(v42 + 60);
      if ( v43 )
        operator delete(v43);
      v44 = *(void **)(v42 + 44);
      if ( v44 )
        operator delete(v44);
      v45 = *(_DWORD *)(v42 + 16);
      if ( v45 )
        (*(void (**)(void))(*(_DWORD *)v45 + 4))();
      *(_DWORD *)(v42 + 16) = 0;
      LODWORD(v42) = v42 + 88;
    while ( HIDWORD(v42) != (_DWORD)v42 );
    LODWORD(v42) = v90;
  if ( (_DWORD)v42 )
    operator delete((void *)v42);
  if ( v89 )
    operator delete(v89);
  if ( v88 )
    operator delete(v88);
  if ( v87 )
    (*(void (**)(void))(*(_DWORD *)v87 + 4))();
  v87 = 0;
  v46 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v92 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v93 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v94 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  if ( v98 )
    operator delete(v98);
  if ( v97 )
    operator delete(v97);
  result = v96;
  if ( v96 )
    result = (*(int (**)(void))(*(_DWORD *)v96 + 4))();
  return result;
}


int __fastcall Recipes::_addWoodStairsRecipes(Recipes *this)
{
  Recipes *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  void *v7; // r0@18
  void *v8; // r0@19
  void *v9; // r0@20
  int v10; // r5@27 OVERLAPPED
  int v11; // r6@27 OVERLAPPED
  void *v12; // r0@28
  void *v13; // r0@30
  int v14; // r0@32
  void *v15; // r0@44
  void *v16; // r0@45
  void *v17; // r0@46
  int v18; // r5@53 OVERLAPPED
  int v19; // r6@53 OVERLAPPED
  void *v20; // r0@54
  void *v21; // r0@56
  int v22; // r0@58
  void *v23; // r0@70
  void *v24; // r0@71
  void *v25; // r0@72
  int v26; // r5@79 OVERLAPPED
  int v27; // r6@79 OVERLAPPED
  void *v28; // r0@80
  void *v29; // r0@82
  int v30; // r0@84
  void *v31; // r0@96
  void *v32; // r0@97
  void *v33; // r0@98
  int v34; // r5@105 OVERLAPPED
  int v35; // r6@105 OVERLAPPED
  void *v36; // r0@106
  void *v37; // r0@108
  int v38; // r0@110
  void *v39; // r0@122
  void *v40; // r0@123
  void *v41; // r0@124
  __int64 v42; // r4@131
  void *v43; // r0@132
  void *v44; // r0@134
  int v45; // r0@136
  void *v46; // r0@148
  void *v47; // r0@149
  void *v48; // r0@150
  int result; // r0@155
  unsigned int *v50; // r2@158
  signed int v51; // r1@160
  unsigned int *v52; // r2@162
  signed int v53; // r1@164
  unsigned int *v54; // r2@166
  signed int v55; // r1@168
  unsigned int *v56; // r2@170
  signed int v57; // r1@172
  unsigned int *v58; // r2@174
  signed int v59; // r1@176
  unsigned int *v60; // r2@178
  signed int v61; // r1@180
  unsigned int *v62; // r2@182
  signed int v63; // r1@184
  unsigned int *v64; // r2@186
  signed int v65; // r1@188
  unsigned int *v66; // r2@190
  signed int v67; // r1@192
  unsigned int *v68; // r2@194
  signed int v69; // r1@196
  unsigned int *v70; // r2@198
  signed int v71; // r1@200
  unsigned int *v72; // r2@202
  signed int v73; // r1@204
  unsigned int *v74; // r2@206
  signed int v75; // r1@208
  unsigned int *v76; // r2@210
  signed int v77; // r1@212
  unsigned int *v78; // r2@214
  signed int v79; // r1@216
  unsigned int *v80; // r2@218
  signed int v81; // r1@220
  unsigned int *v82; // r2@222
  signed int v83; // r1@224
  unsigned int *v84; // r2@226
  signed int v85; // r1@228
  char v86; // [sp+8h] [bp-468h]@131
  int v87; // [sp+10h] [bp-460h]@146
  void *v88; // [sp+2Ch] [bp-444h]@144
  void *v89; // [sp+3Ch] [bp-434h]@142
  int v90; // [sp+54h] [bp-41Ch]@131
  int v91; // [sp+58h] [bp-418h]@131
  int v92; // [sp+64h] [bp-40Ch]@131
  int v93; // [sp+6Ch] [bp-404h]@131
  int v94; // [sp+74h] [bp-3FCh]@131
  char v95; // [sp+78h] [bp-3F8h]@131
  int v96; // [sp+80h] [bp-3F0h]@155
  void *v97; // [sp+9Ch] [bp-3D4h]@153
  void *v98; // [sp+ACh] [bp-3C4h]@151
  char v99; // [sp+C0h] [bp-3B0h]@105
  int v100; // [sp+C8h] [bp-3A8h]@120
  void *v101; // [sp+E4h] [bp-38Ch]@118
  void *v102; // [sp+F4h] [bp-37Ch]@116
  int v103; // [sp+10Ch] [bp-364h]@105
  int v104; // [sp+110h] [bp-360h]@105
  int v105; // [sp+11Ch] [bp-354h]@105
  int v106; // [sp+124h] [bp-34Ch]@105
  int v107; // [sp+12Ch] [bp-344h]@105
  char v108; // [sp+130h] [bp-340h]@105
  int v109; // [sp+138h] [bp-338h]@129
  void *v110; // [sp+154h] [bp-31Ch]@127
  void *v111; // [sp+164h] [bp-30Ch]@125
  char v112; // [sp+178h] [bp-2F8h]@79
  int v113; // [sp+180h] [bp-2F0h]@94
  void *v114; // [sp+19Ch] [bp-2D4h]@92
  void *v115; // [sp+1ACh] [bp-2C4h]@90
  int v116; // [sp+1C4h] [bp-2ACh]@79
  int v117; // [sp+1C8h] [bp-2A8h]@79
  int v118; // [sp+1D4h] [bp-29Ch]@79
  int v119; // [sp+1DCh] [bp-294h]@79
  int v120; // [sp+1E4h] [bp-28Ch]@79
  char v121; // [sp+1E8h] [bp-288h]@79
  int v122; // [sp+1F0h] [bp-280h]@103
  void *v123; // [sp+20Ch] [bp-264h]@101
  void *v124; // [sp+21Ch] [bp-254h]@99
  char v125; // [sp+230h] [bp-240h]@53
  int v126; // [sp+238h] [bp-238h]@68
  void *v127; // [sp+254h] [bp-21Ch]@66
  void *v128; // [sp+264h] [bp-20Ch]@64
  int v129; // [sp+27Ch] [bp-1F4h]@53
  int v130; // [sp+280h] [bp-1F0h]@53
  int v131; // [sp+28Ch] [bp-1E4h]@53
  int v132; // [sp+294h] [bp-1DCh]@53
  int v133; // [sp+29Ch] [bp-1D4h]@53
  char v134; // [sp+2A0h] [bp-1D0h]@53
  int v135; // [sp+2A8h] [bp-1C8h]@77
  void *v136; // [sp+2C4h] [bp-1ACh]@75
  void *v137; // [sp+2D4h] [bp-19Ch]@73
  char v138; // [sp+2E8h] [bp-188h]@27
  int v139; // [sp+2F0h] [bp-180h]@42
  void *v140; // [sp+30Ch] [bp-164h]@40
  void *v141; // [sp+31Ch] [bp-154h]@38
  int v142; // [sp+334h] [bp-13Ch]@27
  int v143; // [sp+338h] [bp-138h]@27
  int v144; // [sp+344h] [bp-12Ch]@27
  int v145; // [sp+34Ch] [bp-124h]@27
  int v146; // [sp+354h] [bp-11Ch]@27
  char v147; // [sp+358h] [bp-118h]@27
  int v148; // [sp+360h] [bp-110h]@51
  void *v149; // [sp+37Ch] [bp-F4h]@49
  void *v150; // [sp+38Ch] [bp-E4h]@47
  char v151; // [sp+3A0h] [bp-D0h]@1
  int v152; // [sp+3A8h] [bp-C8h]@16
  void *v153; // [sp+3C4h] [bp-ACh]@14
  void *ptr; // [sp+3D4h] [bp-9Ch]@12
  int v155; // [sp+3ECh] [bp-84h]@1
  int v156; // [sp+3F0h] [bp-80h]@1
  int v157; // [sp+3FCh] [bp-74h]@1
  int v158; // [sp+404h] [bp-6Ch]@1
  int v159; // [sp+40Ch] [bp-64h]@1
  char v160; // [sp+410h] [bp-60h]@1
  int v161; // [sp+418h] [bp-58h]@25
  void *v162; // [sp+434h] [bp-3Ch]@23
  void *v163; // [sp+444h] [bp-2Ch]@21

  v1 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v160, Block::mOakStairs, 4, 0);
  sub_21E94B4((void **)&v159, "#  ");
  sub_21E94B4((void **)&v158, "## ");
  sub_21E94B4((void **)&v157, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v151, Block::mWoodPlanks, 1, 0);
  definition<ItemInstance>((int)&v155, 35, (int)&v151);
  Recipes::addShapedRecipe((int)v1, (int)&v160, &v159, &v158, &v157);
  *(_QWORD *)&v2 = *(_QWORD *)&v155;
  if ( v155 != v156 )
  {
    do
    {
      v4 = *(void **)(v2 + 60);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 44);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 16);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 16) = 0;
      v2 += 88;
    }
    while ( v3 != v2 );
    v2 = v155;
  }
  if ( v2 )
    operator delete((void *)v2);
  if ( ptr )
    operator delete(ptr);
  if ( v153 )
    operator delete(v153);
  if ( v152 )
    (*(void (**)(void))(*(_DWORD *)v152 + 4))();
  v152 = 0;
  v7 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v157 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v158 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v159 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v163 )
    operator delete(v163);
  if ( v162 )
    operator delete(v162);
  if ( v161 )
    (*(void (**)(void))(*(_DWORD *)v161 + 4))();
  v161 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v147, Block::mSpruceStairs, 4);
  sub_21E94B4((void **)&v146, "#  ");
  sub_21E94B4((void **)&v145, "## ");
  sub_21E94B4((void **)&v144, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v138, Block::mWoodPlanks, 1, 1);
  definition<ItemInstance>((int)&v142, 35, (int)&v138);
  Recipes::addShapedRecipe((int)v1, (int)&v147, &v146, &v145, &v144);
  *(_QWORD *)&v10 = *(_QWORD *)&v142;
  if ( v142 != v143 )
      v12 = *(void **)(v10 + 60);
      if ( v12 )
        operator delete(v12);
      v13 = *(void **)(v10 + 44);
      if ( v13 )
        operator delete(v13);
      v14 = *(_DWORD *)(v10 + 16);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v10 + 16) = 0;
      v10 += 88;
    while ( v11 != v10 );
    v10 = v142;
  if ( v10 )
    operator delete((void *)v10);
  if ( v141 )
    operator delete(v141);
  if ( v140 )
    operator delete(v140);
  if ( v139 )
    (*(void (**)(void))(*(_DWORD *)v139 + 4))();
  v139 = 0;
  v15 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v144 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v145 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v146 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v150 )
    operator delete(v150);
  if ( v149 )
    operator delete(v149);
  if ( v148 )
    (*(void (**)(void))(*(_DWORD *)v148 + 4))();
  v148 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v134, Block::mBirchStairs, 4);
  sub_21E94B4((void **)&v133, "#  ");
  sub_21E94B4((void **)&v132, "## ");
  sub_21E94B4((void **)&v131, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v125, Block::mWoodPlanks, 1, 2);
  definition<ItemInstance>((int)&v129, 35, (int)&v125);
  Recipes::addShapedRecipe((int)v1, (int)&v134, &v133, &v132, &v131);
  *(_QWORD *)&v18 = *(_QWORD *)&v129;
  if ( v129 != v130 )
      v20 = *(void **)(v18 + 60);
      if ( v20 )
        operator delete(v20);
      v21 = *(void **)(v18 + 44);
      if ( v21 )
        operator delete(v21);
      v22 = *(_DWORD *)(v18 + 16);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      *(_DWORD *)(v18 + 16) = 0;
      v18 += 88;
    while ( v19 != v18 );
    v18 = v129;
  if ( v18 )
    operator delete((void *)v18);
  if ( v128 )
    operator delete(v128);
  if ( v127 )
    operator delete(v127);
  if ( v126 )
    (*(void (**)(void))(*(_DWORD *)v126 + 4))();
  v126 = 0;
  v23 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v131 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v132 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v133 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  if ( v137 )
    operator delete(v137);
  if ( v136 )
    operator delete(v136);
  if ( v135 )
    (*(void (**)(void))(*(_DWORD *)v135 + 4))();
  v135 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v121, Block::mJungleStairs, 4);
  sub_21E94B4((void **)&v120, "#  ");
  sub_21E94B4((void **)&v119, "## ");
  sub_21E94B4((void **)&v118, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v112, Block::mWoodPlanks, 1, 3);
  definition<ItemInstance>((int)&v116, 35, (int)&v112);
  Recipes::addShapedRecipe((int)v1, (int)&v121, &v120, &v119, &v118);
  *(_QWORD *)&v26 = *(_QWORD *)&v116;
  if ( v116 != v117 )
      v28 = *(void **)(v26 + 60);
      if ( v28 )
        operator delete(v28);
      v29 = *(void **)(v26 + 44);
      if ( v29 )
        operator delete(v29);
      v30 = *(_DWORD *)(v26 + 16);
      if ( v30 )
        (*(void (**)(void))(*(_DWORD *)v30 + 4))();
      *(_DWORD *)(v26 + 16) = 0;
      v26 += 88;
    while ( v27 != v26 );
    v26 = v116;
  if ( v26 )
    operator delete((void *)v26);
  if ( v115 )
    operator delete(v115);
  if ( v114 )
    operator delete(v114);
  if ( v113 )
    (*(void (**)(void))(*(_DWORD *)v113 + 4))();
  v113 = 0;
  v31 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v118 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v119 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v120 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  if ( v124 )
    operator delete(v124);
  if ( v123 )
    operator delete(v123);
  if ( v122 )
    (*(void (**)(void))(*(_DWORD *)v122 + 4))();
  v122 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v108, Block::mAcaciaStairs, 4);
  sub_21E94B4((void **)&v107, "#  ");
  sub_21E94B4((void **)&v106, "## ");
  sub_21E94B4((void **)&v105, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v99, Block::mWoodPlanks, 1, 4);
  definition<ItemInstance>((int)&v103, 35, (int)&v99);
  Recipes::addShapedRecipe((int)v1, (int)&v108, &v107, &v106, &v105);
  *(_QWORD *)&v34 = *(_QWORD *)&v103;
  if ( v103 != v104 )
      v36 = *(void **)(v34 + 60);
      if ( v36 )
        operator delete(v36);
      v37 = *(void **)(v34 + 44);
      if ( v37 )
        operator delete(v37);
      v38 = *(_DWORD *)(v34 + 16);
      if ( v38 )
        (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      *(_DWORD *)(v34 + 16) = 0;
      v34 += 88;
    while ( v35 != v34 );
    v34 = v103;
  if ( v34 )
    operator delete((void *)v34);
  if ( v102 )
    operator delete(v102);
  if ( v101 )
    operator delete(v101);
  if ( v100 )
    (*(void (**)(void))(*(_DWORD *)v100 + 4))();
  v100 = 0;
  v39 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v105 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v106 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v107 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  if ( v111 )
    operator delete(v111);
  if ( v110 )
    operator delete(v110);
  if ( v109 )
    (*(void (**)(void))(*(_DWORD *)v109 + 4))();
  v109 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v95, Block::mDarkOakStairs, 4);
  sub_21E94B4((void **)&v94, "#  ");
  sub_21E94B4((void **)&v93, "## ");
  sub_21E94B4((void **)&v92, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v86, Block::mWoodPlanks, 1, 5);
  definition<ItemInstance>((int)&v90, 35, (int)&v86);
  Recipes::addShapedRecipe((int)v1, (int)&v95, &v94, &v93, &v92);
  v42 = *(_QWORD *)&v90;
  if ( v90 != v91 )
      v43 = *(void **)(v42 + 60);
      if ( v43 )
        operator delete(v43);
      v44 = *(void **)(v42 + 44);
      if ( v44 )
        operator delete(v44);
      v45 = *(_DWORD *)(v42 + 16);
      if ( v45 )
        (*(void (**)(void))(*(_DWORD *)v45 + 4))();
      *(_DWORD *)(v42 + 16) = 0;
      LODWORD(v42) = v42 + 88;
    while ( HIDWORD(v42) != (_DWORD)v42 );
    LODWORD(v42) = v90;
  if ( (_DWORD)v42 )
    operator delete((void *)v42);
  if ( v89 )
    operator delete(v89);
  if ( v88 )
    operator delete(v88);
  if ( v87 )
    (*(void (**)(void))(*(_DWORD *)v87 + 4))();
  v87 = 0;
  v46 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v92 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v93 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v94 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  if ( v98 )
    operator delete(v98);
  if ( v97 )
    operator delete(v97);
  result = v96;
  if ( v96 )
    result = (*(int (**)(void))(*(_DWORD *)v96 + 4))();
  return result;
}


int __fastcall Recipes::_addOneStoneStairRecipe(Recipes *this, const Block *a2, const Block *a3)
{
  Recipes *v3; // r4@1
  const Block *v4; // r5@1
  __int64 v5; // r4@1
  void *v6; // r0@2
  void *v7; // r0@4
  int v8; // r0@6
  void *v9; // r0@12
  void *v10; // r0@13
  void *v11; // r0@14
  int result; // r0@19
  unsigned int *v13; // r2@22
  signed int v14; // r1@24
  unsigned int *v15; // r2@26
  signed int v16; // r1@28
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  int v19; // [sp+Ch] [bp-84h]@1
  int v20; // [sp+10h] [bp-80h]@1
  int v21; // [sp+1Ch] [bp-74h]@1
  int v22; // [sp+24h] [bp-6Ch]@1
  int v23; // [sp+2Ch] [bp-64h]@1
  char v24; // [sp+30h] [bp-60h]@1
  int v25; // [sp+38h] [bp-58h]@19
  void *v26; // [sp+54h] [bp-3Ch]@17
  void *ptr; // [sp+64h] [bp-2Ch]@15

  v3 = this;
  v4 = a3;
  ItemInstance::ItemInstance((ItemInstance *)&v24, (int)a2, 4);
  sub_21E94B4((void **)&v23, "#  ");
  sub_21E94B4((void **)&v22, "## ");
  sub_21E94B4((void **)&v21, "###");
  definition<Block const*>((int)&v19, 35, (int)v4);
  Recipes::addShapedRecipe((int)v3, (int)&v24, &v23, &v22, &v21);
  v5 = *(_QWORD *)&v19;
  if ( v19 != v20 )
  {
    do
    {
      v6 = *(void **)(v5 + 60);
      if ( v6 )
        operator delete(v6);
      v7 = *(void **)(v5 + 44);
      if ( v7 )
        operator delete(v7);
      v8 = *(_DWORD *)(v5 + 16);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      *(_DWORD *)(v5 + 16) = 0;
      LODWORD(v5) = v5 + 88;
    }
    while ( HIDWORD(v5) != (_DWORD)v5 );
    LODWORD(v5) = v19;
  }
  if ( (_DWORD)v5 )
    operator delete((void *)v5);
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v22 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( ptr )
    operator delete(ptr);
  if ( v26 )
    operator delete(v26);
  result = v25;
  if ( v25 )
    result = (*(int (**)(void))(*(_DWORD *)v25 + 4))();
  return result;
}


void __fastcall Recipes::addShulkerBoxRecipe(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r10@2
  unsigned int v7; // r11@2
  int v8; // r1@3
  int v9; // r0@11
  int v10; // r1@11
  int v11; // r5@19
  _DWORD *v12; // r5@34
  int v13; // r4@36
  ItemInstance *v14; // r6@36
  void *v15; // r0@37
  void *v16; // r0@39
  int v17; // r0@41
  __int64 v18; // r4@47
  void *v19; // r0@48
  void *v20; // r0@50
  int v21; // r0@52
  signed __int64 v22; // [sp+4h] [bp-124h]@2
  _DWORD *v23; // [sp+Ch] [bp-11Ch]@34
  char v24; // [sp+10h] [bp-118h]@12
  int v25; // [sp+18h] [bp-110h]@16
  void *v26; // [sp+34h] [bp-F4h]@14
  void *v27; // [sp+44h] [bp-E4h]@12
  char v28; // [sp+58h] [bp-D0h]@4
  int v29; // [sp+60h] [bp-C8h]@8
  void *v30; // [sp+7Ch] [bp-ACh]@6
  void *ptr; // [sp+8Ch] [bp-9Ch]@4
  char v32; // [sp+A0h] [bp-88h]@3
  int v33; // [sp+A8h] [bp-80h]@28
  void *v34; // [sp+C4h] [bp-64h]@26
  void *v35; // [sp+D4h] [bp-54h]@24
  ItemInstance *v36; // [sp+ECh] [bp-3Ch]@1
  ItemInstance *v37; // [sp+F0h] [bp-38h]@1
  ItemInstance *v38; // [sp+F4h] [bp-34h]@1
  ItemInstance *v39; // [sp+F8h] [bp-30h]@1
  ItemInstance *v40; // [sp+FCh] [bp-2Ch]@1
  ItemInstance *v41; // [sp+100h] [bp-28h]@1

  v3 = a3;
  v40 = 0;
  v41 = 0;
  v4 = a1;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v5 = *a3;
  if ( *a3 >> 32 == v5 )
    goto LABEL_60;
  v22 = __PAIR__(a1, a2);
  v6 = 0;
  v7 = 0;
  do
  {
    ItemInstance::ItemInstance((int)&v32);
    v8 = *(_DWORD *)(v5 + v6);
    if ( v8 )
    {
      ItemInstance::ItemInstance((ItemInstance *)&v28, v8);
      ItemInstance::operator=((int)&v32, (int)&v28);
      if ( ptr )
        operator delete(ptr);
      if ( v30 )
        operator delete(v30);
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      v29 = 0;
    }
    else
      v9 = v5 + v6;
      v10 = *(_DWORD *)(v5 + v6 + 4);
      if ( v10 )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v24, v10, 1, 0x7FFF);
        ItemInstance::operator=((int)&v32, (int)&v24);
        if ( v27 )
          operator delete(v27);
        if ( v26 )
          operator delete(v26);
        if ( v25 )
          (*(void (**)(void))(*(_DWORD *)v25 + 4))();
        v25 = 0;
      }
      else
        v11 = v9 + 8;
        if ( !ItemInstance::isNull((ItemInstance *)(v9 + 8)) )
          ItemInstance::operator=((int)&v32, v11);
    if ( v40 == v41 )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)&v39,
        (int)&v32);
      ItemInstance::ItemInstance(v40, (int)&v32);
      v40 = (ItemInstance *)((char *)v40 + 72);
    if ( v35 )
      operator delete(v35);
    if ( v34 )
      operator delete(v34);
    if ( v33 )
      (*(void (**)(void))(*(_DWORD *)v33 + 4))();
    v5 = *v3;
    v6 += 88;
    ++v7;
  }
  while ( v7 < -1171354717 * ((signed int)((*v3 >> 32) - v5) >> 3) );
  v4 = HIDWORD(v22);
  a2 = v22;
  if ( v37 == v38 )
LABEL_60:
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&v36,
      a2);
  else
    ItemInstance::ItemInstance(v37, v22);
    v37 = (ItemInstance *)((char *)v37 + 72);
  v12 = operator new(0x68u);
  ShulkerBoxRecipe::ShulkerBoxRecipe(v12, (unsigned __int64 *)&v39, (unsigned __int64 *)&v36, 0);
  v23 = v12;
  Recipes::_addItemRecipe(v4, (int *)&v23);
  if ( v23 )
    (*(void (**)(void))(*v23 + 4))();
  v23 = 0;
  v14 = v37;
  v13 = (int)v36;
  if ( v36 != v37 )
    do
      v15 = *(void **)(v13 + 52);
      if ( v15 )
        operator delete(v15);
      v16 = *(void **)(v13 + 36);
      if ( v16 )
        operator delete(v16);
      v17 = *(_DWORD *)(v13 + 8);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      *(_DWORD *)(v13 + 8) = 0;
      v13 += 72;
    while ( v14 != (ItemInstance *)v13 );
    v13 = (int)v36;
  if ( v13 )
    operator delete((void *)v13);
  v18 = *(_QWORD *)&v39;
  if ( v39 != v40 )
      v19 = *(void **)(v18 + 52);
      if ( v19 )
        operator delete(v19);
      v20 = *(void **)(v18 + 36);
      if ( v20 )
        operator delete(v20);
      v21 = *(_DWORD *)(v18 + 8);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      *(_DWORD *)(v18 + 8) = 0;
      LODWORD(v18) = v18 + 72;
    while ( HIDWORD(v18) != (_DWORD)v18 );
    LODWORD(v18) = v39;
  if ( (_DWORD)v18 )
    operator delete((void *)v18);
}


int __fastcall Recipes::addRepairItemRecipe(int a1, int *a2)
{
  int v2; // r2@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-Ch]@1

  v2 = *a2;
  *a2 = 0;
  v4 = v2;
  Recipes::_addItemRecipe(a1, &v4);
  result = v4;
  if ( v4 )
    result = (*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


int __fastcall Recipes::_addStairRecipies(Recipes *this)
{
  Recipes *v1; // r4@1

  v1 = this;
  Recipes::_addWoodStairsRecipes(this);
  return j_j_j__ZN7Recipes22_addStoneStairsRecipesEv(v1);
}


void __fastcall Recipes::addShapedRecipe(int a1, int a2, int *a3, int *a4)
{
  void *v4; // r4@1
  void *v5; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int *v8; // r0@11
  void *v9; // [sp+4h] [bp-34h]@1
  void *v10; // [sp+8h] [bp-30h]@1

  Recipes::Shape((int)&v9, a3, a4);
  Recipes::addShapedRecipe();
  v5 = v10;
  v4 = v9;
  if ( v9 != v10 )
  {
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 4;
    }
    while ( v4 != v5 );
    v4 = v9;
  }
  if ( v4 )
    operator delete(v4);
}


int __fastcall Recipes::_addFenceRecipes(Recipes *this)
{
  void **v1; // r11@1
  ItemInstance *v2; // r9@1
  int *v3; // r5@1
  int v4; // r10@1
  int *v5; // r4@1
  unsigned int *v6; // r2@2
  signed int v7; // r1@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int *v10; // r6@18
  int v11; // r4@18
  int v12; // r4@18
  int v13; // r9@18
  void *v14; // r0@19
  void *v15; // r0@21
  int v16; // r0@23
  void *v17; // r0@35
  void *v18; // r0@36
  int result; // r0@41
  Recipes *v20; // [sp+10h] [bp-6Ch]@1
  char v21; // [sp+20h] [bp-5Ch]@1
  int v22; // [sp+28h] [bp-54h]@33
  void *v23; // [sp+44h] [bp-38h]@31
  void *ptr; // [sp+54h] [bp-28h]@29
  int v25; // [sp+6Ch] [bp-10h]@1
  int v26; // [sp+70h] [bp-Ch]@18
  int v27; // [sp+7Ch] [bp+0h]@1
  int v28; // [sp+84h] [bp+8h]@6
  char v29; // [sp+88h] [bp+Ch]@18
  int v30; // [sp+90h] [bp+14h]@41
  void *v31; // [sp+ACh] [bp+30h]@39
  void *v32; // [sp+BCh] [bp+40h]@37

  v20 = this;
  v1 = (void **)&v27;
  v2 = (ItemInstance *)&v21;
  v3 = &v25;
  v4 = 0;
  v5 = &dword_28898C0;
  do
  {
    ItemInstance::ItemInstance((ItemInstance *)&v29, Block::mFence, 3, v4);
    sub_21E94B4((void **)&v28, "W#W");
    sub_21E94B4(v1, "W#W");
    v10 = v5;
    v11 = Item::mStick;
    ItemInstance::ItemInstance(v2, Block::mWoodPlanks, 1, v4);
    definition<Item *,ItemInstance>((int)v3, 35, v11, 87, (int)v2);
    Recipes::addShapedRecipe((int)v20, (int)&v29, &v28, (int *)v1);
    v12 = v26;
    v13 = v25;
    if ( v25 != v26 )
    {
      do
      {
        v14 = *(void **)(v13 + 60);
        if ( v14 )
          operator delete(v14);
        v15 = *(void **)(v13 + 44);
        if ( v15 )
          operator delete(v15);
        v16 = *(_DWORD *)(v13 + 16);
        if ( v16 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 4))(v16);
        *(_DWORD *)(v13 + 16) = 0;
        v13 += 88;
      }
      while ( v12 != v13 );
      v13 = v25;
    }
    if ( v13 )
      operator delete((void *)v13);
    v5 = v10;
    if ( ptr )
      operator delete(ptr);
    v1 = (void **)&v27;
    if ( v23 )
      operator delete(v23);
    v2 = (ItemInstance *)&v21;
    v3 = &v25;
    if ( v22 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v22 + 4))(v22);
    v22 = 0;
    v17 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != v10 )
      v6 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v5 = v10;
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != v5 )
      v8 = (unsigned int *)(v28 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    if ( v32 )
      operator delete(v32);
    if ( v31 )
      operator delete(v31);
    result = v30;
    if ( v30 )
      result = (*(int (__cdecl **)(int))(*(_DWORD *)v30 + 4))(v30);
    ++v4;
    v30 = 0;
  }
  while ( v4 < 6 );
  return result;
}


int __fastcall Recipes::addMultiRecipe(int a1, int *a2)
{
  int v2; // r2@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-Ch]@1

  v2 = *a2;
  *a2 = 0;
  v4 = v2;
  Recipes::_addItemRecipe(a1, &v4);
  result = v4;
  if ( v4 )
    result = (*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


int __fastcall Recipes::_addStoneStairsRecipes(Recipes *this)
{
  Recipes *v1; // r4@1

  v1 = this;
  Recipes::_addOneStoneStairRecipe(this, (const Block *)Block::mStoneStairs, (const Block *)Block::mCobblestone);
  Recipes::_addOneStoneStairRecipe(v1, (const Block *)Block::mBrickStairs, (const Block *)Block::mBrick);
  Recipes::_addOneStoneStairRecipe(v1, (const Block *)Block::mSandstoneStairs, (const Block *)Block::mSandStone);
  Recipes::_addOneStoneStairRecipe(v1, (const Block *)Block::mRedSandstoneStairs, (const Block *)Block::mRedSandstone);
  Recipes::_addOneStoneStairRecipe(v1, (const Block *)Block::mStoneBrickStairs, (const Block *)Block::mStoneBrick);
  Recipes::_addOneStoneStairRecipe(v1, (const Block *)Block::mQuartzStairs, (const Block *)Block::mQuartzBlock);
  Recipes::_addOneStoneStairRecipe(v1, (const Block *)Block::mNetherBrickStairs, (const Block *)Block::mNetherBrick);
  return j_j_j__ZN7Recipes23_addOneStoneStairRecipeERK5BlockS2_(
           v1,
           (const Block *)Block::mPurpurStairs,
           (const Block *)Block::mPurpurBlock);
}


_DWORD *__fastcall Recipes::_addMapRecipes(Recipes *this)
{
  Recipes *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  void *v7; // r0@18
  void *v8; // r0@19
  void *v9; // r0@20
  ItemInstance *v10; // r0@27
  int v11; // r5@27 OVERLAPPED
  int v12; // r6@27 OVERLAPPED
  void *v13; // r0@28
  void *v14; // r0@30
  int v15; // r0@32
  void *v16; // r0@50
  void *v17; // r0@51
  void *v18; // r0@52
  int v19; // r5@59 OVERLAPPED
  int v20; // r6@59 OVERLAPPED
  void *v21; // r0@60
  void *v22; // r0@62
  int v23; // r0@64
  int v24; // r5@82 OVERLAPPED
  int v25; // r6@82 OVERLAPPED
  void *v26; // r0@83
  void *v27; // r0@85
  int v28; // r0@87
  _DWORD *v29; // r5@105
  _DWORD *v30; // r5@107
  _DWORD *v31; // r5@109
  _DWORD *result; // r0@109
  unsigned int *v33; // r2@112
  signed int v34; // r1@114
  unsigned int *v35; // r2@116
  signed int v36; // r1@118
  unsigned int *v37; // r2@120
  signed int v38; // r1@122
  unsigned int *v39; // r2@124
  signed int v40; // r1@126
  unsigned int *v41; // r2@128
  signed int v42; // r1@130
  unsigned int *v43; // r2@132
  signed int v44; // r1@134
  _DWORD *v45; // [sp+Ch] [bp-31Ch]@109
  _DWORD *v46; // [sp+10h] [bp-318h]@107
  _DWORD *v47; // [sp+14h] [bp-314h]@105
  char v48; // [sp+18h] [bp-310h]@82
  int v49; // [sp+20h] [bp-308h]@97
  void *v50; // [sp+3Ch] [bp-2ECh]@95
  void *v51; // [sp+4Ch] [bp-2DCh]@93
  unsigned __int64 v52; // [sp+64h] [bp-2C4h]@82
  char v53; // [sp+70h] [bp-2B8h]@82
  int v54; // [sp+78h] [bp-2B0h]@103
  void *v55; // [sp+94h] [bp-294h]@101
  void *v56; // [sp+A4h] [bp-284h]@99
  char v57; // [sp+B8h] [bp-270h]@59
  int v58; // [sp+C0h] [bp-268h]@74
  void *v59; // [sp+DCh] [bp-24Ch]@72
  void *v60; // [sp+ECh] [bp-23Ch]@70
  unsigned __int64 v61; // [sp+104h] [bp-224h]@59
  char v62; // [sp+110h] [bp-218h]@59
  int v63; // [sp+118h] [bp-210h]@80
  void *v64; // [sp+134h] [bp-1F4h]@78
  void *v65; // [sp+144h] [bp-1E4h]@76
  char v66; // [sp+158h] [bp-1D0h]@27
  int v67; // [sp+160h] [bp-1C8h]@42
  void *v68; // [sp+17Ch] [bp-1ACh]@40
  void *v69; // [sp+18Ch] [bp-19Ch]@38
  char v70; // [sp+1A0h] [bp-188h]@27
  int v71; // [sp+1A8h] [bp-180h]@48
  void *v72; // [sp+1C4h] [bp-164h]@46
  void *v73; // [sp+1D4h] [bp-154h]@44
  int v74; // [sp+1ECh] [bp-13Ch]@27
  int v75; // [sp+1F0h] [bp-138h]@27
  int v76; // [sp+1FCh] [bp-12Ch]@27
  int v77; // [sp+204h] [bp-124h]@27
  int v78; // [sp+20Ch] [bp-11Ch]@27
  char v79; // [sp+210h] [bp-118h]@27
  int v80; // [sp+218h] [bp-110h]@57
  void *v81; // [sp+234h] [bp-F4h]@55
  void *v82; // [sp+244h] [bp-E4h]@53
  char v83; // [sp+258h] [bp-D0h]@1
  int v84; // [sp+260h] [bp-C8h]@16
  void *v85; // [sp+27Ch] [bp-ACh]@14
  void *ptr; // [sp+28Ch] [bp-9Ch]@12
  int v87; // [sp+2A4h] [bp-84h]@1
  int v88; // [sp+2A8h] [bp-80h]@1
  int v89; // [sp+2B4h] [bp-74h]@1
  int v90; // [sp+2BCh] [bp-6Ch]@1
  int v91; // [sp+2C4h] [bp-64h]@1
  char v92; // [sp+2C8h] [bp-60h]@1
  int v93; // [sp+2D0h] [bp-58h]@25
  void *v94; // [sp+2ECh] [bp-3Ch]@23
  void *v95; // [sp+2FCh] [bp-2Ch]@21

  v1 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v92, Item::mEmptyMap, 1, 0);
  sub_21E94B4((void **)&v91, "###");
  sub_21E94B4((void **)&v90, "###");
  sub_21E94B4((void **)&v89, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v83, Item::mPaper, 1);
  definition<ItemInstance>((int)&v87, 35, (int)&v83);
  Recipes::addShapedRecipe((int)v1, (int)&v92, &v91, &v90, &v89);
  *(_QWORD *)&v2 = *(_QWORD *)&v87;
  if ( v87 != v88 )
  {
    do
    {
      v4 = *(void **)(v2 + 60);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 44);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 16);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 16) = 0;
      v2 += 88;
    }
    while ( v3 != v2 );
    v2 = v87;
  }
  if ( v2 )
    operator delete((void *)v2);
  if ( ptr )
    operator delete(ptr);
  if ( v85 )
    operator delete(v85);
  if ( v84 )
    (*(void (**)(void))(*(_DWORD *)v84 + 4))();
  v84 = 0;
  v7 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v89 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v90 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v91 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v95 )
    operator delete(v95);
  if ( v94 )
    operator delete(v94);
  if ( v93 )
    (*(void (**)(void))(*(_DWORD *)v93 + 4))();
  v93 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v79, Item::mEmptyMap, 1, 2);
  sub_21E94B4((void **)&v78, "###");
  sub_21E94B4((void **)&v77, "#W#");
  sub_21E94B4((void **)&v76, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v70, Item::mPaper, 1);
  v10 = ItemInstance::ItemInstance((ItemInstance *)&v66, Item::mCompass, 1);
  definition<ItemInstance,ItemInstance>((int)&v74, 35, (int)&v70, 87, (int)v10);
  Recipes::addShapedRecipe((int)v1, (int)&v79, &v78, &v77, &v76);
  *(_QWORD *)&v11 = *(_QWORD *)&v74;
  if ( v74 != v75 )
      v13 = *(void **)(v11 + 60);
      if ( v13 )
        operator delete(v13);
      v14 = *(void **)(v11 + 44);
      if ( v14 )
        operator delete(v14);
      v15 = *(_DWORD *)(v11 + 16);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      *(_DWORD *)(v11 + 16) = 0;
      v11 += 88;
    while ( v12 != v11 );
    v11 = v74;
  if ( v11 )
    operator delete((void *)v11);
  if ( v69 )
    operator delete(v69);
  if ( v68 )
    operator delete(v68);
  if ( v67 )
    (*(void (**)(void))(*(_DWORD *)v67 + 4))();
  v67 = 0;
  if ( v73 )
    operator delete(v73);
  if ( v72 )
    operator delete(v72);
  if ( v71 )
    (*(void (**)(void))(*(_DWORD *)v71 + 4))();
  v71 = 0;
  v16 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v76 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v77 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v78 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( v82 )
    operator delete(v82);
  if ( v81 )
    operator delete(v81);
  if ( v80 )
    (*(void (**)(void))(*(_DWORD *)v80 + 4))();
  v80 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v62, Item::mEmptyMap, 1, 2);
  ItemInstance::ItemInstance((ItemInstance *)&v57, Item::mEmptyMap, 1, 0);
  definition<ItemInstance,Item *>((int)&v61, 0, (int)&v57, 0, Item::mCompass);
  Recipes::addShapelessRecipe((int)v1, (int)&v62, &v61);
  *(_QWORD *)&v19 = v61;
  if ( (_DWORD)v61 != HIDWORD(v61) )
      v21 = *(void **)(v19 + 60);
      if ( v21 )
        operator delete(v21);
      v22 = *(void **)(v19 + 44);
      if ( v22 )
        operator delete(v22);
      v23 = *(_DWORD *)(v19 + 16);
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      *(_DWORD *)(v19 + 16) = 0;
      v19 += 88;
    while ( v20 != v19 );
    v19 = v61;
  if ( v19 )
    operator delete((void *)v19);
  if ( v60 )
    operator delete(v60);
  if ( v59 )
    operator delete(v59);
  if ( v58 )
    (*(void (**)(void))(*(_DWORD *)v58 + 4))();
  v58 = 0;
  if ( v65 )
    operator delete(v65);
  if ( v64 )
    operator delete(v64);
  if ( v63 )
    (*(void (**)(void))(*(_DWORD *)v63 + 4))();
  v63 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v53, Item::mEmptyMap, 1, 2);
  ItemInstance::ItemInstance((ItemInstance *)&v48, Item::mEmptyMap, 1, 1);
  definition<ItemInstance,Item *>((int)&v52, 0, (int)&v48, 0, Item::mCompass);
  Recipes::addShapelessRecipe((int)v1, (int)&v53, &v52);
  *(_QWORD *)&v24 = v52;
  if ( (_DWORD)v52 != HIDWORD(v52) )
      v26 = *(void **)(v24 + 60);
      if ( v26 )
        operator delete(v26);
      v27 = *(void **)(v24 + 44);
      if ( v27 )
        operator delete(v27);
      v28 = *(_DWORD *)(v24 + 16);
      if ( v28 )
        (*(void (**)(void))(*(_DWORD *)v28 + 4))();
      *(_DWORD *)(v24 + 16) = 0;
      v24 += 88;
    while ( v25 != v24 );
    v24 = v52;
  if ( v24 )
    operator delete((void *)v24);
  if ( v51 )
    operator delete(v51);
  if ( v50 )
    operator delete(v50);
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v49 = 0;
  if ( v56 )
    operator delete(v56);
  if ( v55 )
    operator delete(v55);
  if ( v54 )
    (*(void (**)(void))(*(_DWORD *)v54 + 4))();
  v54 = 0;
  v29 = operator new(0x50u);
  MapCloningRecipe::MapCloningRecipe(v29);
  v47 = v29;
  Recipes::_addItemRecipe((int)v1, (int *)&v47);
  if ( v47 )
    (*(void (**)(void))(*v47 + 4))();
  v47 = 0;
  v30 = operator new(0x58u);
  MapExtendingRecipe::MapExtendingRecipe(v30);
  v46 = v30;
  Recipes::_addItemRecipe((int)v1, (int *)&v46);
  if ( v46 )
    (*(void (**)(void))(*v46 + 4))();
  v46 = 0;
  v31 = operator new(0x50u);
  MapUpgradingRecipe::MapUpgradingRecipe(v31);
  v45 = v31;
  Recipes::_addItemRecipe((int)v1, (int *)&v45);
  result = v45;
  if ( v45 )
    result = (_DWORD *)(*(int (**)(void))(*v45 + 4))();
  return result;
}


int __fastcall Recipes::addDirectShapelessRecipe(int a1, int *a2)
{
  int v2; // r2@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-Ch]@1

  v2 = *a2;
  *a2 = 0;
  v4 = v2;
  Recipes::_addItemRecipe(a1, &v4);
  result = v4;
  if ( v4 )
    result = (*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


void __fastcall Recipes::addShapedRecipe(int a1, int a2, int *a3, int *a4, int *a5)
{
  Recipes::addShapedRecipe(a1, a2, a3, a4, a5);
}


int __fastcall Recipes::_addItemRecipe(int a1, int *a2)
{
  int v2; // r5@1
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  int result; // r0@4
  __int64 v6; // kr08_8@5
  int v7; // r7@6
  int v8; // r0@6
  char *v9; // r0@6
  char *v10; // r5@6
  __int64 v11; // r0@6
  void *v12; // r8@8
  signed int v13; // r1@8
  unsigned int v14; // r2@8
  unsigned int v15; // r1@10
  unsigned int v16; // r6@10
  char *v17; // r7@16
  char *v18; // r4@18
  int v19; // r4@20
  int v20; // [sp+0h] [bp-68h]@6
  int v21; // [sp+8h] [bp-60h]@27
  void *v22; // [sp+24h] [bp-44h]@25
  void *ptr; // [sp+34h] [bp-34h]@23

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 4);
  v4 = *a2;
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::unique_ptr<Recipe,std::default_delete<Recipe>>,std::allocator<std::unique_ptr<Recipe,std::default_delete<Recipe>>>>::_M_emplace_back_aux<std::unique_ptr<Recipe,std::default_delete<Recipe>>>(
      (_QWORD *)a1,
      a2);
  }
  else
    *a2 = 0;
    *(_DWORD *)v3 = v4;
    *(_DWORD *)(a1 + 4) += 4;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  if ( !result )
    v6 = *(_QWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
    result = HIDWORD(v6);
    if ( (_DWORD)v6 != HIDWORD(v6) )
    {
      v7 = ItemInstance::getId((ItemInstance *)v6);
      v8 = ItemInstance::getAuxValue((ItemInstance *)v6);
      ItemInstance::ItemInstance((ItemInstance *)&v20, v7, 1, v8);
      v9 = std::map<ItemInstance,std::vector<Recipe *,std::allocator<Recipe *>>,SortItemInstanceIdAux,std::allocator<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>>::operator[](
             v2 + 12,
             (ItemInstance *)&v20);
      v10 = v9;
      v11 = *(_QWORD *)(v9 + 4);
      if ( (_DWORD)v11 == HIDWORD(v11) )
      {
        v12 = *(void **)v10;
        v13 = v11 - *(_DWORD *)v10;
        v14 = v13 >> 2;
        if ( !(v13 >> 2) )
          v14 = 1;
        v15 = v14 + (v13 >> 2);
        v16 = v15;
        if ( 0 != v15 >> 30 )
          v16 = 0x3FFFFFFF;
        if ( v15 < v14 )
        if ( v16 )
        {
          if ( v16 >= 0x40000000 )
            sub_21E57F4();
          v17 = (char *)operator new(4 * v16);
          LODWORD(v11) = *(_QWORD *)v10 >> 32;
          v12 = (void *)*(_QWORD *)v10;
        }
        else
          v17 = 0;
        *(_DWORD *)&v17[v11 - (_DWORD)v12] = v4;
        v18 = &v17[v11 - (_DWORD)v12];
        if ( 0 != ((signed int)v11 - (signed int)v12) >> 2 )
          _aeabi_memmove4(v17, v12);
        v19 = (int)(v18 + 4);
        if ( v12 )
          operator delete(v12);
        *(_DWORD *)v10 = v17;
        *((_DWORD *)v10 + 1) = v19;
        *((_DWORD *)v10 + 2) = &v17[4 * v16];
      }
      else
        *(_DWORD *)v11 = v4;
        *((_DWORD *)v10 + 1) += 4;
      if ( ptr )
        operator delete(ptr);
      if ( v22 )
        operator delete(v22);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      result = 0;
      v21 = 0;
    }
  return result;
}


void __fastcall Recipes::addShapedRecipe(int a1, int a2, int *a3)
{
  Recipes::addShapedRecipe(a1, a2, a3);
}


int __fastcall Recipes::_addFenceAndGateRecipes(Recipes *this)
{
  Recipes *v1; // r4@1

  v1 = this;
  Recipes::_addFenceRecipes(this);
  return j_j_j__ZN7Recipes15_addGateRecipesEv(v1);
}


void __fastcall Recipes::addShapedRecipe(int a1, int a2, int *a3, int *a4)
{
  Recipes::addShapedRecipe(a1, a2, a3, a4);
}


char *__fastcall Recipes::Shape(int a1, int *a2)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
           (unsigned __int64 *)a1,
           a2);
}


char *__fastcall Recipes::Shape(int a1, int *a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r5@1
  int *v6; // r6@1
  int *v7; // r0@1
  int *v8; // r7@1
  int *v9; // r0@2
  char *result; // r0@5

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
    (unsigned __int64 *)a1,
    a2);
  v8 = (int *)(*(_QWORD *)(v4 + 4) >> 32);
  v7 = (int *)*(_QWORD *)(v4 + 4);
  if ( v7 == v8 )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)v4,
      v6);
    v8 = (int *)(*(_QWORD *)(v4 + 4) >> 32);
    v9 = (int *)*(_QWORD *)(v4 + 4);
  }
  else
    v9 = sub_21E8AF4(v7, v6) + 1;
    *(_DWORD *)(v4 + 4) = v9;
  if ( v9 == v8 )
    result = std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
               (unsigned __int64 *)v4,
               v5);
    result = (char *)(sub_21E8AF4(v9, v5) + 1);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


void __fastcall Recipes::addShapedRecipe(int a1, int a2, int *a3)
{
  void *v3; // r4@1
  void *v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  __int64 v8; // [sp+0h] [bp-38h]@1
  int v9; // [sp+8h] [bp-30h]@1

  v8 = 0LL;
  v9 = 0;
  std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
    (unsigned __int64 *)&v8,
    a3);
  Recipes::addShapedRecipe();
  v4 = (void *)HIDWORD(v8);
  v3 = (void *)v8;
  if ( (_DWORD)v8 != HIDWORD(v8) )
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
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)v8;
  }
  if ( v3 )
    operator delete(v3);
}


void __fastcall Recipes::addShapedRecipe(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, void *a14, int a15, int a16, int a17, void *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, void *a50, int a51, int a52, int a53, void *a54)
{
  int v54; // r4@1
  __int64 v55; // r10@1
  unsigned __int64 *v56; // r9@1
  __int64 v57; // r0@3
  int v58; // r7@3
  unsigned int v59; // r5@3
  int v60; // r5@5
  char *v61; // r8@6
  unsigned int v62; // r11@6
  int v63; // r7@7
  unsigned __int8 v64; // r6@7
  int v65; // r1@7
  int v66; // r1@15
  int v67; // r0@25
  char *v68; // r5@25
  int *v69; // r8@25
  unsigned int v70; // r1@26
  int *v71; // r0@27
  unsigned int v72; // r2@27
  int v73; // r0@30
  int v74; // r9@49
  int v75; // r6@49
  __int64 v76; // r0@50
  int v77; // r5@51
  int v78; // r0@52
  unsigned int v79; // r0@54
  int *v80; // r2@54
  int v81; // r3@54
  int *i; // r1@54
  ShapedRecipe *v83; // r6@66
  int v84; // r4@68
  int v85; // r6@68
  void *v86; // r0@69
  void *v87; // r0@71
  int v88; // r0@73
  void *v89; // r0@79
  unsigned int *v90; // r2@81
  signed int v91; // r1@83
  __int64 v92; // [sp+8h] [bp-198h]@5
  int v93; // [sp+10h] [bp-190h]@2
  int v94; // [sp+14h] [bp-18Ch]@2
  _DWORD *v95; // [sp+18h] [bp-188h]@2
  ShapedRecipe *v96; // [sp+20h] [bp-180h]@66
  unsigned __int64 v97; // [sp+24h] [bp-17Ch]@49
  int v98; // [sp+2Ch] [bp-174h]@49
  unsigned __int8 v99; // [sp+30h] [bp-170h]@25
  int v100; // [sp+38h] [bp-168h]@25
  int v101; // [sp+40h] [bp-160h]@40
  void *v102; // [sp+5Ch] [bp-144h]@38
  void *v103; // [sp+6Ch] [bp-134h]@36
  char v104; // [sp+80h] [bp-120h]@16
  int v105; // [sp+88h] [bp-118h]@20
  void *v106; // [sp+A4h] [bp-FCh]@18
  void *v107; // [sp+B4h] [bp-ECh]@16
  char v108; // [sp+C8h] [bp-D8h]@8
  int v109; // [sp+D0h] [bp-D0h]@12
  void *v110; // [sp+ECh] [bp-B4h]@10
  void *ptr; // [sp+FCh] [bp-A4h]@8
  char v112; // [sp+110h] [bp-90h]@6
  int v113; // [sp+118h] [bp-88h]@46
  void *v114; // [sp+134h] [bp-6Ch]@44
  void *v115; // [sp+144h] [bp-5Ch]@42
  char v116; // [sp+158h] [bp-48h]@35
  int v117; // [sp+15Ch] [bp-44h]@5
  int v118; // [sp+160h] [bp-40h]@5
  int *v119; // [sp+164h] [bp-3Ch]@5
  int *v120; // [sp+168h] [bp-38h]@5
  int v121; // [sp+16Ch] [bp-34h]@5
  int v122; // [sp+174h] [bp-2Ch]@2

  v54 = a2;
  v55 = a1;
  v56 = (unsigned __int64 *)a3;
  if ( (unsigned int)*(_QWORD *)a2 != *(_QWORD *)a2 >> 32 )
  {
    sub_21E94B4((void **)&v122, (const char *)&unk_257BC67);
    v95 = *(_DWORD **)v54;
    v93 = *(_DWORD *)(v54 + 4);
    v94 = *(_DWORD *)(**(_DWORD **)v54 - 12);
    if ( *(_DWORD *)(v54 + 4) != *(_DWORD *)v54 )
    {
      LODWORD(v57) = *(_DWORD *)v54;
      v58 = 0;
      v59 = 0;
      do
      {
        sub_21E72F0((const void **)&v122, (const void **)(v57 + v58));
        v57 = *(_QWORD *)v54;
        v58 += 4;
        ++v59;
      }
      while ( v59 < (HIDWORD(v57) - (signed int)v57) >> 2 );
    }
    v92 = v55;
    v121 = 0;
    v117 = 0;
    v118 = 0;
    v119 = &v117;
    v120 = &v117;
    v60 = *v56;
    if ( *v56 >> 32 != v60 )
      v61 = &v112;
      v62 = 0;
        v63 = v60 + 88 * v62;
        v64 = *(_BYTE *)(v63 + 80);
        ItemInstance::ItemInstance((int)v61);
        v65 = *(_DWORD *)(v60 + 88 * v62);
        if ( v65 )
        {
          ItemInstance::ItemInstance((ItemInstance *)&v108, v65);
          ItemInstance::operator=((int)v61, (int)&v108);
          if ( ptr )
            operator delete(ptr);
          if ( v110 )
            operator delete(v110);
          if ( v109 )
            (*(void (**)(void))(*(_DWORD *)v109 + 4))();
          v109 = 0;
        }
        else
          v66 = *(_DWORD *)(v63 + 4);
          if ( v66 )
          {
            ItemInstance::ItemInstance((ItemInstance *)&v104, v66, 1, 0x7FFF);
            ItemInstance::operator=((int)v61, (int)&v104);
            if ( v107 )
              operator delete(v107);
            if ( v106 )
              operator delete(v106);
            if ( v105 )
              (*(void (**)(void))(*(_DWORD *)v105 + 4))();
            v105 = 0;
          }
          else if ( !ItemInstance::isNull((ItemInstance *)(v63 + 8)) )
            ItemInstance::operator=((int)v61, v63 + 8);
        v99 = v64;
        ItemInstance::ItemInstance((ItemInstance *)&v100, (int)v61);
        v67 = v118;
        v68 = v61;
        v69 = &v117;
        if ( !v118 )
          goto LABEL_91;
        v70 = v99;
        do
          v69 = (int *)v67;
          v71 = (int *)(v67 + 12);
          v72 = *((_BYTE *)v69 + 16);
          if ( v99 < v72 )
            v71 = v69 + 2;
          v67 = *v71;
        while ( v67 );
        v73 = (int)v69;
        if ( v99 < v72 )
LABEL_91:
          if ( v69 == v119 )
            goto LABEL_34;
          v73 = sub_21D4858((int)v69);
          v70 = v99;
        if ( *(_BYTE *)(v73 + 16) < v70 )
LABEL_34:
          if ( v69 )
            std::_Rb_tree<char,std::pair<char const,ItemInstance>,std::_Select1st<std::pair<char const,ItemInstance>>,std::less<char>,std::allocator<std::pair<char const,ItemInstance>>>::_M_insert_<std::pair<char,ItemInstance>>(
              (int)&v116,
              0,
              (int)v69,
              &v99);
        if ( v103 )
          operator delete(v103);
        v61 = v68;
        if ( v102 )
          operator delete(v102);
        if ( v101 )
          (*(void (**)(void))(*(_DWORD *)v101 + 4))();
        v101 = 0;
        if ( v115 )
          operator delete(v115);
        if ( v114 )
          operator delete(v114);
        if ( v113 )
          (*(void (**)(void))(*(_DWORD *)v113 + 4))();
        v60 = *v56;
        ++v62;
      while ( v62 < -1171354717 * ((signed int)((*v56 >> 32) - v60) >> 3) );
    v74 = (v93 - (signed int)v95) >> 2;
    v75 = v74 * v94;
    v97 = 0LL;
    v98 = 0;
    if ( v74 * v94 )
      LODWORD(v76) = &v97;
      HIDWORD(v76) = v74 * v94;
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_default_append(v76);
      if ( v75 >= 1 )
        v77 = 0;
          v78 = v122;
          if ( *(_DWORD *)(v122 - 4) >= 0 )
            sub_21E8010((const void **)&v122);
            v78 = v122;
          v79 = *(_BYTE *)(v78 + v77);
          v80 = &v117;
          v81 = v118;
          for ( i = &v117; v81; v80 = i )
            i = (int *)v81;
            while ( *((_BYTE *)i + 16) < v79 )
            {
              i = (int *)i[3];
              if ( !i )
              {
                i = v80;
                goto LABEL_60;
              }
            }
            v81 = i[2];
LABEL_60:
          if ( i != &v117 )
            if ( v79 < *((_BYTE *)i + 16) )
              i = &v117;
            if ( i != &v117 )
              ItemInstance::operator=(v97 + 72 * v77, (int)(i + 6));
          ++v77;
        while ( v77 < v75 );
    v83 = (ShapedRecipe *)operator new(0x60u);
    ShapedRecipe::ShapedRecipe(v83, v94, v74, &v97, (unsigned __int64 *)HIDWORD(v92), 0);
    ShapedRecipe::generateUUID(v83);
    v96 = v83;
    Recipes::_addItemRecipe(v92, (int *)&v96);
    if ( v96 )
      (*(void (**)(void))(*(_DWORD *)v96 + 4))();
    v96 = 0;
    v85 = HIDWORD(v97);
    v84 = v97;
    if ( (_DWORD)v97 != HIDWORD(v97) )
        v86 = *(void **)(v84 + 52);
        if ( v86 )
          operator delete(v86);
        v87 = *(void **)(v84 + 36);
        if ( v87 )
          operator delete(v87);
        v88 = *(_DWORD *)(v84 + 8);
        if ( v88 )
          (*(void (**)(void))(*(_DWORD *)v88 + 4))();
        *(_DWORD *)(v84 + 8) = 0;
        v84 += 72;
      while ( v85 != v84 );
      v84 = v97;
    if ( v84 )
      operator delete((void *)v84);
    std::_Rb_tree<char,std::pair<char const,ItemInstance>,std::_Select1st<std::pair<char const,ItemInstance>>,std::less<char>,std::allocator<std::pair<char const,ItemInstance>>>::_M_erase(
      (int)&v116,
      v118);
    v89 = (void *)(v122 - 12);
    if ( (int *)(v122 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v122 - 4);
      if ( &pthread_create )
        __dmb();
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
      else
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j__ZdlPv_9(v89);
  }
}


char *__fastcall Recipes::Shape(int a1, int *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  __int64 v5; // r0@1
  char *result; // r0@2

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
    (unsigned __int64 *)a1,
    a2);
  v5 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    result = std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
               (unsigned __int64 *)v3,
               v4);
  }
  else
    result = (char *)(sub_21E8AF4((int *)v5, v4) + 1);
    *(_DWORD *)(v3 + 4) = result;
  return result;
}


void __fastcall Recipes::addShapelessRecipe(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r10@2
  unsigned int v7; // r11@2
  int v8; // r1@3
  int v9; // r0@11
  int v10; // r1@11
  int v11; // r5@19
  ShapelessRecipe *v12; // r5@34
  int v13; // r4@36
  ItemInstance *v14; // r6@36
  void *v15; // r0@37
  void *v16; // r0@39
  int v17; // r0@41
  __int64 v18; // r4@47
  void *v19; // r0@48
  void *v20; // r0@50
  int v21; // r0@52
  signed __int64 v22; // [sp+4h] [bp-124h]@2
  ShapelessRecipe *v23; // [sp+Ch] [bp-11Ch]@34
  char v24; // [sp+10h] [bp-118h]@12
  int v25; // [sp+18h] [bp-110h]@16
  void *v26; // [sp+34h] [bp-F4h]@14
  void *v27; // [sp+44h] [bp-E4h]@12
  char v28; // [sp+58h] [bp-D0h]@4
  int v29; // [sp+60h] [bp-C8h]@8
  void *v30; // [sp+7Ch] [bp-ACh]@6
  void *ptr; // [sp+8Ch] [bp-9Ch]@4
  char v32; // [sp+A0h] [bp-88h]@3
  int v33; // [sp+A8h] [bp-80h]@28
  void *v34; // [sp+C4h] [bp-64h]@26
  void *v35; // [sp+D4h] [bp-54h]@24
  ItemInstance *v36; // [sp+ECh] [bp-3Ch]@1
  ItemInstance *v37; // [sp+F0h] [bp-38h]@1
  ItemInstance *v38; // [sp+F4h] [bp-34h]@1
  ItemInstance *v39; // [sp+F8h] [bp-30h]@1
  ItemInstance *v40; // [sp+FCh] [bp-2Ch]@1
  ItemInstance *v41; // [sp+100h] [bp-28h]@1

  v3 = a3;
  v40 = 0;
  v41 = 0;
  v4 = a1;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v5 = *a3;
  if ( *a3 >> 32 == v5 )
    goto LABEL_60;
  v22 = __PAIR__(a1, a2);
  v6 = 0;
  v7 = 0;
  do
  {
    ItemInstance::ItemInstance((int)&v32);
    v8 = *(_DWORD *)(v5 + v6);
    if ( v8 )
    {
      ItemInstance::ItemInstance((ItemInstance *)&v28, v8);
      ItemInstance::operator=((int)&v32, (int)&v28);
      if ( ptr )
        operator delete(ptr);
      if ( v30 )
        operator delete(v30);
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      v29 = 0;
    }
    else
      v9 = v5 + v6;
      v10 = *(_DWORD *)(v5 + v6 + 4);
      if ( v10 )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v24, v10, 1, 0x7FFF);
        ItemInstance::operator=((int)&v32, (int)&v24);
        if ( v27 )
          operator delete(v27);
        if ( v26 )
          operator delete(v26);
        if ( v25 )
          (*(void (**)(void))(*(_DWORD *)v25 + 4))();
        v25 = 0;
      }
      else
        v11 = v9 + 8;
        if ( !ItemInstance::isNull((ItemInstance *)(v9 + 8)) )
          ItemInstance::operator=((int)&v32, v11);
    if ( v40 == v41 )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)&v39,
        (int)&v32);
      ItemInstance::ItemInstance(v40, (int)&v32);
      v40 = (ItemInstance *)((char *)v40 + 72);
    if ( v35 )
      operator delete(v35);
    if ( v34 )
      operator delete(v34);
    if ( v33 )
      (*(void (**)(void))(*(_DWORD *)v33 + 4))();
    v5 = *v3;
    v6 += 88;
    ++v7;
  }
  while ( v7 < -1171354717 * ((signed int)((*v3 >> 32) - v5) >> 3) );
  v4 = HIDWORD(v22);
  a2 = v22;
  if ( v37 == v38 )
LABEL_60:
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&v36,
      a2);
  else
    ItemInstance::ItemInstance(v37, v22);
    v37 = (ItemInstance *)((char *)v37 + 72);
  v12 = (ShapelessRecipe *)operator new(0x60u);
  ShapelessRecipe::ShapelessRecipe(v12, (unsigned __int64 *)&v39, (unsigned __int64 *)&v36, 0);
  ShapelessRecipe::generateUUID(v12);
  v23 = v12;
  Recipes::_addItemRecipe(v4, (int *)&v23);
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v23 = 0;
  v14 = v37;
  v13 = (int)v36;
  if ( v36 != v37 )
    do
      v15 = *(void **)(v13 + 52);
      if ( v15 )
        operator delete(v15);
      v16 = *(void **)(v13 + 36);
      if ( v16 )
        operator delete(v16);
      v17 = *(_DWORD *)(v13 + 8);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      *(_DWORD *)(v13 + 8) = 0;
      v13 += 72;
    while ( v14 != (ItemInstance *)v13 );
    v13 = (int)v36;
  if ( v13 )
    operator delete((void *)v13);
  v18 = *(_QWORD *)&v39;
  if ( v39 != v40 )
      v19 = *(void **)(v18 + 52);
      if ( v19 )
        operator delete(v19);
      v20 = *(void **)(v18 + 36);
      if ( v20 )
        operator delete(v20);
      v21 = *(_DWORD *)(v18 + 8);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      *(_DWORD *)(v18 + 8) = 0;
      LODWORD(v18) = v18 + 72;
    while ( HIDWORD(v18) != (_DWORD)v18 );
    LODWORD(v18) = v39;
  if ( (_DWORD)v18 )
    operator delete((void *)v18);
}


Recipes *__fastcall Recipes::Recipes(Recipes *this)
{
  Recipes *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = (char *)this + 16;
  *((_DWORD *)this + 7) = (char *)this + 16;
  Recipes::init(this);
  return v1;
}


void __fastcall Recipes::init(Recipes *this)
{
  Recipes *v1; // r8@1
  _QWORD v2; // r4@1
  _DWORD v3; // r7@2
  Recipes *v4; // r1@6
  Recipes *v5; // r1@6
  Recipes *v6; // r1@6
  Recipes *v7; // r1@6
  Recipes *v8; // r1@6
  Recipes *v9; // r1@6
  Recipes *v10; // r1@6
  _DWORD *v11; // r5@6
  _DWORD *v12; // r10@6
  _DWORD *v13; // r5@8
  FireworksRecipe *v14; // r5@10
  RepairItemRecipe *v15; // r5@12
  _DWORD *v16; // r5@14
  _DWORD v17; // r4@16
  _DWORD v18; // r5@16
  void *v19; // r0@17
  void *v20; // r0@19
  _DWORD v21; // r0@21
  void *v22; // r0@27
  _DWORD v23; // r4@34
  _DWORD v24; // r5@34
  void *v25; // r0@35
  void *v26; // r0@37
  _DWORD v27; // r0@39
  _DWORD v28; // r4@51
  _DWORD v29; // r5@51
  void *v30; // r0@52
  void *v31; // r0@54
  _DWORD v32; // r0@56
  void *v33; // r0@62
  void *v34; // r0@63
  _DWORD v35; // r4@70
  _DWORD v36; // r5@70
  void *v37; // r0@71
  void *v38; // r0@73
  _DWORD v39; // r0@75
  void *v40; // r0@81
  void *v41; // r0@82
  _DWORD v42; // r4@89
  _DWORD v43; // r5@89
  void *v44; // r0@90
  void *v45; // r0@92
  _DWORD v46; // r0@94
  void *v47; // r0@100
  void *v48; // r0@101
  _DWORD v49; // r4@108
  _DWORD v50; // r5@108
  void *v51; // r0@109
  void *v52; // r0@111
  _DWORD v53; // r0@113
  void *v54; // r0@119
  void *v55; // r0@120
  void *v56; // r0@121
  _DWORD v57; // r4@128
  _DWORD v58; // r5@128
  void *v59; // r0@129
  void *v60; // r0@131
  _DWORD v61; // r0@133
  void *v62; // r0@139
  void *v63; // r0@140
  void *v64; // r0@141
  _DWORD v65; // r4@148
  _DWORD v66; // r5@148
  void *v67; // r0@149
  void *v68; // r0@151
  _DWORD v69; // r0@153
  void *v70; // r0@159
  void *v71; // r0@160
  _DWORD v72; // r4@167
  _DWORD v73; // r5@167
  void *v74; // r0@168
  void *v75; // r0@170
  _DWORD v76; // r0@172
  void *v77; // r0@178
  _DWORD v78; // r4@185
  _DWORD v79; // r5@185
  void *v80; // r0@186
  void *v81; // r0@188
  _DWORD v82; // r0@190
  void *v83; // r0@196
  void *v84; // r0@197
  _DWORD v85; // r4@204
  _DWORD v86; // r5@204
  void *v87; // r0@205
  void *v88; // r0@207
  _DWORD v89; // r0@209
  void *v90; // r0@215
  void *v91; // r0@216
  _DWORD v92; // r4@223
  _DWORD v93; // r5@223
  void *v94; // r0@224
  void *v95; // r0@226
  _DWORD v96; // r0@228
  void *v97; // r0@234
  void *v98; // r0@235
  _DWORD v99; // r4@242
  _DWORD v100; // r5@242
  void *v101; // r0@243
  void *v102; // r0@245
  _DWORD v103; // r0@247
  void *v104; // r0@253
  void *v105; // r0@254
  _DWORD v106; // r4@261
  _DWORD v107; // r5@261
  void *v108; // r0@262
  void *v109; // r0@264
  _DWORD v110; // r0@266
  void *v111; // r0@272
  void *v112; // r0@273
  void *v113; // r0@274
  _DWORD v114; // r4@281
  _DWORD v115; // r5@281
  void *v116; // r0@282
  void *v117; // r0@284
  _DWORD v118; // r0@286
  void *v119; // r0@292
  _DWORD v120; // r4@299
  _DWORD v121; // r5@299
  void *v122; // r0@300
  void *v123; // r0@302
  _DWORD v124; // r0@304
  void *v125; // r0@316
  _DWORD v126; // r4@323
  _DWORD v127; // r5@323
  void *v128; // r0@324
  void *v129; // r0@326
  _DWORD v130; // r0@328
  void *v131; // r0@334
  _DWORD v132; // r4@341
  _DWORD v133; // r5@341
  void *v134; // r0@342
  void *v135; // r0@344
  _DWORD v136; // r0@346
  void *v137; // r0@352
  _DWORD v138; // r4@359
  _DWORD v139; // r5@359
  void *v140; // r0@360
  void *v141; // r0@362
  _DWORD v142; // r0@364
  void *v143; // r0@376
  void *v144; // r0@377
  ItemInstance *v145; // r7@384
  _DWORD *v146; // r6@384
  int v147; // r5@384
  unsigned int *v148; // r2@385
  signed int v149; // r1@387
  _DWORD *v150; // r7@392
  _DWORD v151; // r4@392
  _DWORD v152; // r10@392
  void *v153; // r0@393
  void *v154; // r0@395
  _DWORD v155; // r0@397
  void *v156; // r0@403
  void *v157; // r0@405
  _DWORD v158; // r0@407
  _DWORD v159; // r1@409
  void *v160; // r0@409
  void *v161; // r0@410
  void *v162; // r0@412
  _DWORD v163; // r0@414
  _QWORD v164; // r4@417
  void *v165; // r0@418
  void *v166; // r0@420
  _DWORD v167; // r0@422
  _DWORD v168; // r1@428
  void *v169; // r0@428
  void *v170; // r0@429
  void *v171; // r0@431
  _DWORD v172; // r0@433
  _QWORD v173; // r4@435
  void *v174; // r0@436
  void *v175; // r0@438
  _DWORD v176; // r0@440
  _DWORD v177; // r1@446
  void *v178; // r0@446
  void *v179; // r0@447
  void *v180; // r0@449
  _DWORD v181; // r0@451
  _QWORD v182; // r4@453
  void *v183; // r0@454
  void *v184; // r0@456
  _DWORD v185; // r0@458
  _DWORD v186; // r1@464
  void *v187; // r0@464
  void *v188; // r0@465
  void *v189; // r0@467
  _DWORD v190; // r0@469
  _QWORD v191; // r4@471
  void *v192; // r0@472
  void *v193; // r0@474
  _DWORD v194; // r0@476
  _DWORD v195; // r1@482
  void *v196; // r0@482
  void *v197; // r0@483
  void *v198; // r0@485
  _DWORD v199; // r0@487
  _QWORD v200; // r4@489
  void *v201; // r0@490
  void *v202; // r0@492
  _DWORD v203; // r0@494
  _DWORD v204; // r1@500
  void *v205; // r0@500
  void *v206; // r0@501
  void *v207; // r0@503
  _DWORD v208; // r0@505
  _QWORD v209; // r4@507
  void *v210; // r0@508
  void *v211; // r0@510
  _DWORD v212; // r0@512
  _DWORD v213; // r1@518
  void *v214; // r0@518
  _DWORD v215; // r1@519
  void *v216; // r0@519
  void *v217; // r0@520
  void *v218; // r0@522
  _DWORD v219; // r0@524
  _QWORD v220; // r4@526
  void *v221; // r0@527
  void *v222; // r0@529
  _DWORD v223; // r0@531
  _DWORD v224; // r1@537
  void *v225; // r0@537
  _DWORD v226; // r1@538
  void *v227; // r0@538
  void *v228; // r0@539
  void *v229; // r0@541
  _DWORD v230; // r0@543
  _QWORD v231; // r4@545
  void *v232; // r0@546
  void *v233; // r0@548
  _DWORD v234; // r0@550
  _DWORD v235; // r1@556
  void *v236; // r0@556
  _DWORD v237; // r1@557
  void *v238; // r0@557
  void *v239; // r0@558
  void *v240; // r0@560
  _DWORD v241; // r0@562
  _DWORD v242; // r4@564
  _DWORD v243; // r5@564
  void *v244; // r0@565
  void *v245; // r0@567
  _DWORD v246; // r0@569
  void *v247; // r0@575
  void *v248; // r0@576
  void *v249; // r0@577
  void *v250; // r0@578
  _DWORD v251; // r0@582
  _DWORD v252; // r4@584
  _DWORD v253; // r5@584
  void *v254; // r0@585
  void *v255; // r0@587
  _DWORD v256; // r0@589
  void *v257; // r0@595
  void *v258; // r0@596
  _DWORD v259; // r4@603
  _DWORD v260; // r5@603
  void *v261; // r0@604
  void *v262; // r0@606
  _DWORD v263; // r0@608
  void *v264; // r0@614
  void *v265; // r0@615
  _DWORD v266; // r4@622
  _DWORD v267; // r5@622
  void *v268; // r0@623
  void *v269; // r0@625
  _DWORD v270; // r0@627
  void *v271; // r0@633
  void *v272; // r0@634
  void *v273; // r0@635
  _DWORD v274; // r4@642
  _DWORD v275; // r5@642
  void *v276; // r0@643
  void *v277; // r0@645
  _DWORD v278; // r0@647
  void *v279; // r0@653
  void *v280; // r0@654
  void *v281; // r0@655
  _DWORD v282; // r4@662
  _DWORD v283; // r5@662
  void *v284; // r0@663
  void *v285; // r0@665
  _DWORD v286; // r0@667
  void *v287; // r0@673
  void *v288; // r0@674
  void *v289; // r0@675
  _DWORD v290; // r4@682
  _DWORD v291; // r5@682
  void *v292; // r0@683
  void *v293; // r0@685
  _DWORD v294; // r0@687
  void *v295; // r0@693
  void *v296; // r0@694
  void *v297; // r0@695
  _DWORD v298; // r4@702
  _DWORD v299; // r5@702
  void *v300; // r0@703
  void *v301; // r0@705
  _DWORD v302; // r0@707
  void *v303; // r0@713
  void *v304; // r0@714
  void *v305; // r0@715
  int v306; // ST278_4@734
  int v307; // ST27C_4@734
  int v308; // ST280_4@734
  int v309; // ST284_4@734
  int v310; // ST288_4@734
  _DWORD v311; // r4@734
  _DWORD v312; // r5@734
  void *v313; // r0@735
  void *v314; // r0@737
  _DWORD v315; // r0@739
  void *v316; // r4@751
  void *v317; // r6@751
  unsigned int *v318; // r2@753
  signed int v319; // r1@755
  int *v320; // r0@761
  void *v321; // r0@766
  void *v322; // r0@767
  void *v323; // r0@768
  _DWORD v324; // r4@769
  _DWORD v325; // r5@769
  void *v326; // r0@770
  void *v327; // r0@772
  _DWORD v328; // r0@774
  void *v329; // r0@780
  _DWORD v330; // r4@787
  _DWORD v331; // r5@787
  void *v332; // r0@788
  void *v333; // r0@790
  _DWORD v334; // r0@792
  void *v335; // r0@798
  void *v336; // r0@799
  void *v337; // r0@800
  _DWORD v338; // r4@807
  _DWORD v339; // r5@807
  void *v340; // r0@808
  void *v341; // r0@810
  _DWORD v342; // r0@812
  void *v343; // r0@818
  void *v344; // r0@819
  void *v345; // r0@820
  _DWORD v346; // r4@827
  _DWORD v347; // r5@827
  void *v348; // r0@828
  void *v349; // r0@830
  _DWORD v350; // r0@832
  void *v351; // r4@838
  void *v352; // r6@838
  unsigned int *v353; // r2@840
  signed int v354; // r1@842
  int *v355; // r0@848
  void *v356; // r0@853
  _DWORD v357; // r4@860
  _DWORD v358; // r5@860
  void *v359; // r0@861
  void *v360; // r0@863
  _DWORD v361; // r0@865
  _DWORD v362; // r4@877
  _DWORD v363; // r5@877
  void *v364; // r0@878
  void *v365; // r0@880
  _DWORD v366; // r0@882
  _DWORD v367; // r4@894
  _DWORD v368; // r5@894
  void *v369; // r0@895
  void *v370; // r0@897
  _DWORD v371; // r0@899
  void *v372; // r4@911
  void *v373; // r6@911
  unsigned int *v374; // r2@913
  signed int v375; // r1@915
  int *v376; // r0@921
  void *v377; // r0@926
  _DWORD v378; // r4@933
  _DWORD v379; // r5@933
  void *v380; // r0@934
  void *v381; // r0@936
  _DWORD v382; // r0@938
  void *v383; // r4@950
  void *v384; // r6@950
  unsigned int *v385; // r2@952
  signed int v386; // r1@954
  int *v387; // r0@960
  void *v388; // r0@965
  _DWORD v389; // r4@972
  _DWORD v390; // r5@972
  void *v391; // r0@973
  void *v392; // r0@975
  _DWORD v393; // r0@977
  void *v394; // r4@989
  void *v395; // r6@989
  unsigned int *v396; // r2@991
  signed int v397; // r1@993
  int *v398; // r0@999
  void *v399; // r0@1004
  _DWORD v400; // r4@1011
  _DWORD v401; // r5@1011
  void *v402; // r0@1012
  void *v403; // r0@1014
  _DWORD v404; // r0@1016
  void *v405; // r4@1028
  void *v406; // r6@1028
  unsigned int *v407; // r2@1030
  signed int v408; // r1@1032
  int *v409; // r0@1038
  void *v410; // r0@1043
  _DWORD v411; // r4@1050
  _DWORD v412; // r5@1050
  void *v413; // r0@1051
  void *v414; // r0@1053
  _DWORD v415; // r0@1055
  void *v416; // r4@1067
  void *v417; // r6@1067
  unsigned int *v418; // r2@1069
  signed int v419; // r1@1071
  int *v420; // r0@1077
  void *v421; // r0@1082
  _DWORD v422; // r4@1089
  _DWORD v423; // r5@1089
  void *v424; // r0@1090
  void *v425; // r0@1092
  _DWORD v426; // r0@1094
  void *v427; // r4@1106
  void *v428; // r6@1106
  unsigned int *v429; // r2@1108
  signed int v430; // r1@1110
  int *v431; // r0@1116
  void *v432; // r0@1121
  _DWORD v433; // r4@1128
  _DWORD v434; // r5@1128
  void *v435; // r0@1129
  void *v436; // r0@1131
  _DWORD v437; // r0@1133
  void *v438; // r0@1139
  void *v439; // r0@1140
  _DWORD v440; // r4@1147
  _DWORD v441; // r5@1147
  void *v442; // r0@1148
  void *v443; // r0@1150
  _DWORD v444; // r0@1152
  void *v445; // r0@1164
  void *v446; // r0@1165
  _QWORD v447; // r4@1172
  void *v448; // r0@1173
  void *v449; // r0@1175
  _DWORD v450; // r0@1177
  void *v451; // r0@1183
  void *v452; // r0@1184
  _QWORD v453; // r4@1191
  void *v454; // r0@1192
  void *v455; // r0@1194
  _DWORD v456; // r0@1196
  void *v457; // r0@1202
  void *v458; // r0@1203
  void *v459; // r0@1204
  _QWORD v460; // r4@1211
  void *v461; // r0@1212
  void *v462; // r0@1214
  _DWORD v463; // r0@1216
  void *v464; // r0@1222
  void *v465; // r0@1223
  void *v466; // r0@1224
  _QWORD v467; // r4@1231
  void *v468; // r0@1232
  void *v469; // r0@1234
  _DWORD v470; // r0@1236
  void *v471; // r0@1242
  void *v472; // r0@1243
  _QWORD v473; // r4@1250
  void *v474; // r0@1251
  void *v475; // r0@1253
  _DWORD v476; // r0@1255
  void *v477; // r0@1261
  void *v478; // r0@1262
  _QWORD v479; // r4@1269
  void *v480; // r0@1270
  void *v481; // r0@1272
  _DWORD v482; // r0@1274
  void *v483; // r0@1280
  void *v484; // r0@1281
  void *v485; // r0@1282
  _QWORD v486; // r4@1289
  void *v487; // r0@1290
  void *v488; // r0@1292
  _DWORD v489; // r0@1294
  void *v490; // r0@1300
  void *v491; // r0@1301
  void *v492; // r0@1302
  _QWORD v493; // r4@1309
  void *v494; // r0@1310
  void *v495; // r0@1312
  _DWORD v496; // r0@1314
  void *v497; // r0@1320
  void *v498; // r0@1321
  void *v499; // r0@1322
  _QWORD v500; // r4@1329
  void *v501; // r0@1330
  void *v502; // r0@1332
  _DWORD v503; // r0@1334
  void *v504; // r0@1340
  void *v505; // r0@1341
  void *v506; // r0@1342
  _DWORD v507; // r4@1349
  _DWORD v508; // r5@1349
  void *v509; // r0@1350
  void *v510; // r0@1352
  _DWORD v511; // r0@1354
  _DWORD *v512; // r5@1357
  _DWORD v513; // r1@1361
  void *v514; // r0@1361
  void *v515; // r0@1362
  _DWORD *v516; // r0@1369
  _DWORD v517; // r4@1369
  _DWORD v518; // r5@1369
  _DWORD *v519; // r7@1369
  void *v520; // r0@1370
  void *v521; // r0@1372
  _DWORD v522; // r0@1374
  _DWORD *v523; // r5@1377
  _DWORD v524; // r1@1381
  void *v525; // r0@1381
  _DWORD v526; // r1@1382
  void *v527; // r0@1382
  void *v528; // r0@1383
  void *v529; // r0@1385
  _DWORD v530; // r0@1387
  _DWORD *v531; // r0@1389
  _DWORD v532; // r4@1389
  _DWORD v533; // r5@1389
  _DWORD *v534; // r7@1389
  void *v535; // r0@1390
  void *v536; // r0@1392
  _DWORD v537; // r0@1394
  _DWORD *v538; // r5@1397
  _DWORD v539; // r1@1401
  void *v540; // r0@1401
  _DWORD v541; // r1@1402
  void *v542; // r0@1402
  void *v543; // r0@1403
  void *v544; // r0@1405
  _DWORD v545; // r0@1407
  _DWORD *v546; // r6@1409
  _DWORD v547; // r4@1409
  _DWORD *v548; // r7@1409
  _DWORD v549; // r5@1409
  void *v550; // r0@1410
  void *v551; // r0@1412
  _DWORD v552; // r0@1414
  _DWORD *v553; // r5@1417
  _DWORD v554; // r1@1421
  void *v555; // r0@1421
  _DWORD v556; // r1@1422
  void *v557; // r0@1422
  _DWORD v558; // r1@1423
  void *v559; // r0@1423
  void *v560; // r0@1424
  void *v561; // r0@1426
  _DWORD v562; // r0@1428
  _DWORD *v563; // r0@1430
  _DWORD v564; // r4@1430
  _DWORD v565; // r5@1430
  _DWORD *v566; // r7@1430
  void *v567; // r0@1431
  void *v568; // r0@1433
  _DWORD v569; // r0@1435
  _DWORD *v570; // r5@1438
  _DWORD v571; // r1@1442
  void *v572; // r0@1442
  _DWORD v573; // r1@1443
  void *v574; // r0@1443
  void *v575; // r0@1444
  void *v576; // r0@1446
  _DWORD v577; // r0@1448
  _DWORD *v578; // r0@1450
  _DWORD v579; // r4@1450
  _DWORD v580; // r5@1450
  _DWORD v581; // r7@1450
  void *v582; // r0@1451
  void *v583; // r0@1453
  _DWORD v584; // r0@1455
  _DWORD v585; // r5@1458
  _DWORD v586; // r1@1462
  void *v587; // r0@1462
  _DWORD v588; // r1@1463
  void *v589; // r0@1463
  void *v590; // r0@1464
  void *v591; // r0@1466
  _DWORD v592; // r0@1468
  ItemInstance *v593; // r4@1470
  ItemInstance *v594; // r11@1470
  ItemInstance *v595; // r7@1470
  int v596; // r10@1470
  _DWORD *v597; // r6@1470
  unsigned int *v598; // r2@1471
  signed int v599; // r1@1473
  unsigned int *v600; // r2@1475
  signed int v601; // r1@1477
  unsigned int *v602; // r2@1479
  signed int v603; // r1@1481
  unsigned int *v604; // r2@1483
  signed int v605; // r1@1485
  unsigned int *v606; // r2@1487
  signed int v607; // r1@1489
  unsigned int *v608; // r2@1491
  signed int v609; // r1@1493
  unsigned int *v610; // r2@1495
  signed int v611; // r1@1497
  unsigned int *v612; // r2@1499
  signed int v613; // r1@1501
  unsigned int *v614; // r2@1503
  signed int v615; // r1@1505
  unsigned int *v616; // r2@1507
  signed int v617; // r1@1509
  unsigned int *v618; // r2@1511
  signed int v619; // r1@1513
  unsigned int *v620; // r2@1515
  signed int v621; // r1@1517
  unsigned int *v622; // r2@1519
  signed int v623; // r1@1521
  unsigned int *v624; // r2@1523
  signed int v625; // r1@1525
  unsigned int *v626; // r2@1527
  signed int v627; // r1@1529
  unsigned int *v628; // r2@1531
  signed int v629; // r1@1533
  unsigned int *v630; // r2@1535
  signed int v631; // r1@1537
  unsigned int *v632; // r2@1539
  signed int v633; // r1@1541
  unsigned int *v634; // r2@1543
  signed int v635; // r1@1545
  unsigned int *v636; // r2@1547
  signed int v637; // r1@1549
  unsigned int *v638; // r2@1551
  signed int v639; // r1@1553
  unsigned int *v640; // r2@1555
  signed int v641; // r1@1557
  unsigned int *v642; // r2@1559
  signed int v643; // r1@1561
  unsigned int *v644; // r2@1563
  signed int v645; // r1@1565
  unsigned int *v646; // r2@1567
  signed int v647; // r1@1569
  unsigned int *v648; // r2@1571
  signed int v649; // r1@1573
  unsigned int *v650; // r2@1575
  signed int v651; // r1@1577
  unsigned int *v652; // r2@1579
  signed int v653; // r1@1581
  unsigned int *v654; // r2@1583
  signed int v655; // r1@1585
  unsigned int *v656; // r2@1587
  signed int v657; // r1@1589
  unsigned int *v658; // r2@1591
  signed int v659; // r1@1593
  unsigned int *v660; // r2@1595
  signed int v661; // r1@1597
  unsigned int *v662; // r2@1599
  signed int v663; // r1@1601
  unsigned int *v664; // r2@1603
  signed int v665; // r1@1605
  unsigned int *v666; // r2@1607
  signed int v667; // r1@1609
  _DWORD v668; // r7@1617
  _DWORD v669; // r4@1617
  _DWORD v670; // r5@1617
  void *v671; // r0@1618
  void *v672; // r0@1620
  _DWORD v673; // r0@1622
  void *v674; // r0@1628
  void *v675; // r0@1630
  _DWORD v676; // r0@1632
  void *v677; // r0@1634
  void *v678; // r0@1636
  _DWORD v679; // r0@1638
  _DWORD v680; // r1@1640
  void *v681; // r0@1640
  _DWORD v682; // r1@1641
  void *v683; // r0@1641
  void *v684; // r0@1642
  void *v685; // r0@1644
  _DWORD v686; // r0@1646
  _DWORD v687; // r0@1649
  _DWORD v688; // r4@1649
  _DWORD v689; // r5@1649
  _DWORD v690; // r7@1649
  void *v691; // r0@1650
  void *v692; // r0@1652
  _DWORD v693; // r0@1654
  _DWORD v694; // r5@1657
  unsigned int *v695; // r2@1757
  signed int v696; // r1@1759
  unsigned int *v697; // r2@1761
  signed int v698; // r1@1763
  unsigned int *v699; // r2@1765
  signed int v700; // r1@1767
  unsigned int *v701; // r2@1769
  signed int v702; // r1@1771
  unsigned int *v703; // r2@1773
  signed int v704; // r1@1775
  unsigned int *v705; // r2@1777
  signed int v706; // r1@1779
  unsigned int *v707; // r2@1781
  signed int v708; // r1@1783
  unsigned int *v709; // r2@1785
  signed int v710; // r1@1787
  unsigned int *v711; // r2@1789
  signed int v712; // r1@1791
  unsigned int *v713; // r2@1793
  signed int v714; // r1@1795
  unsigned int *v715; // r2@1797
  signed int v716; // r1@1799
  unsigned int *v717; // r2@1801
  signed int v718; // r1@1803
  unsigned int *v719; // r2@1805
  signed int v720; // r1@1807
  unsigned int *v721; // r2@1809
  signed int v722; // r1@1811
  unsigned int *v723; // r2@1813
  signed int v724; // r1@1815
  unsigned int *v725; // r2@1817
  signed int v726; // r1@1819
  unsigned int *v727; // r2@1821
  signed int v728; // r1@1823
  unsigned int *v729; // r2@1825
  signed int v730; // r1@1827
  unsigned int *v731; // r2@1829
  signed int v732; // r1@1831
  unsigned int *v733; // r2@1833
  signed int v734; // r1@1835
  unsigned int *v735; // r2@1837
  signed int v736; // r1@1839
  unsigned int *v737; // r2@1841
  signed int v738; // r1@1843
  unsigned int *v739; // r2@1845
  signed int v740; // r1@1847
  unsigned int *v741; // r2@1849
  signed int v742; // r1@1851
  unsigned int *v743; // r2@1853
  signed int v744; // r1@1855
  unsigned int *v745; // r2@1857
  signed int v746; // r1@1859
  unsigned int *v747; // r2@1861
  signed int v748; // r1@1863
  unsigned int *v749; // r2@1865
  signed int v750; // r1@1867
  unsigned int *v751; // r2@1869
  signed int v752; // r1@1871
  unsigned int *v753; // r2@1873
  signed int v754; // r1@1875
  unsigned int *v755; // r2@1877
  signed int v756; // r1@1879
  unsigned int *v757; // r2@1881
  signed int v758; // r1@1883
  unsigned int *v759; // r2@1885
  signed int v760; // r1@1887
  unsigned int *v761; // r2@1889
  signed int v762; // r1@1891
  unsigned int *v763; // r2@1893
  signed int v764; // r1@1895
  unsigned int *v765; // r2@1897
  signed int v766; // r1@1899
  unsigned int *v767; // r2@1901
  signed int v768; // r1@1903
  unsigned int *v769; // r2@1905
  signed int v770; // r1@1907
  unsigned int *v771; // r2@1909
  signed int v772; // r1@1911
  unsigned int *v773; // r2@1913
  signed int v774; // r1@1915
  unsigned int *v775; // r2@1917
  signed int v776; // r1@1919
  unsigned int *v777; // r2@1921
  signed int v778; // r1@1923
  unsigned int *v779; // r2@1925
  signed int v780; // r1@1927
  unsigned int *v781; // r2@1929
  signed int v782; // r1@1931
  unsigned int *v783; // r2@1933
  signed int v784; // r1@1935
  unsigned int *v785; // r2@1937
  signed int v786; // r1@1939
  unsigned int *v787; // r2@1941
  signed int v788; // r1@1943
  unsigned int *v789; // r2@1945
  signed int v790; // r1@1947
  unsigned int *v791; // r2@1949
  signed int v792; // r1@1951
  unsigned int *v793; // r2@1953
  signed int v794; // r1@1955
  unsigned int *v795; // r2@1957
  signed int v796; // r1@1959
  unsigned int *v797; // r2@1961
  signed int v798; // r1@1963
  unsigned int *v799; // r2@1965
  signed int v800; // r1@1967
  unsigned int *v801; // r2@1969
  signed int v802; // r1@1971
  unsigned int *v803; // r2@1973
  signed int v804; // r1@1975
  unsigned int *v805; // r2@1977
  signed int v806; // r1@1979
  unsigned int *v807; // r2@1981
  signed int v808; // r1@1983
  unsigned int *v809; // r2@1985
  signed int v810; // r1@1987
  unsigned int *v811; // r2@1989
  signed int v812; // r1@1991
  unsigned int *v813; // r2@1993
  signed int v814; // r1@1995
  unsigned int *v815; // r2@1997
  signed int v816; // r1@1999
  unsigned int *v817; // r2@2001
  signed int v818; // r1@2003
  unsigned int *v819; // r2@2005
  signed int v820; // r1@2007
  unsigned int *v821; // r2@2009
  signed int v822; // r1@2011
  unsigned int *v823; // r2@2013
  signed int v824; // r1@2015
  unsigned int *v825; // r2@2017
  signed int v826; // r1@2019
  unsigned int *v827; // r2@2021
  signed int v828; // r1@2023
  unsigned int *v829; // r2@2025
  signed int v830; // r1@2027
  unsigned int *v831; // r2@2029
  signed int v832; // r1@2031
  unsigned int *v833; // r2@2033
  signed int v834; // r1@2035
  unsigned int *v835; // r2@2037
  signed int v836; // r1@2039
  unsigned int *v837; // r2@2041
  signed int v838; // r1@2043
  unsigned int *v839; // r2@2045
  signed int v840; // r1@2047
  unsigned int *v841; // r2@2049
  signed int v842; // r1@2051
  unsigned int *v843; // r2@2053
  signed int v844; // r1@2055
  unsigned int *v845; // r2@2057
  signed int v846; // r1@2059
  unsigned int *v847; // r2@2061
  signed int v848; // r1@2063
  unsigned int *v849; // r2@2065
  signed int v850; // r1@2067
  unsigned int *v851; // r2@2069
  signed int v852; // r1@2071
  unsigned int *v853; // r2@2073
  signed int v854; // r1@2075
  unsigned int *v855; // r2@2077
  signed int v856; // r1@2079
  unsigned int *v857; // r2@2081
  signed int v858; // r1@2083
  unsigned int *v859; // r2@2085
  signed int v860; // r1@2087
  unsigned int *v861; // r2@2089
  signed int v862; // r1@2091
  unsigned int *v863; // r2@2093
  signed int v864; // r1@2095
  unsigned int *v865; // r2@2097
  signed int v866; // r1@2099
  unsigned int *v867; // r2@2101
  signed int v868; // r1@2103
  unsigned int *v869; // r2@2105
  signed int v870; // r1@2107
  unsigned int *v871; // r2@2109
  signed int v872; // r1@2111
  unsigned int *v873; // r2@2113
  signed int v874; // r1@2115
  unsigned int *v875; // r2@2117
  signed int v876; // r1@2119
  _DWORD v877; // r1@2124
  void *v878; // r0@2124
  _DWORD v879; // r1@2125
  void *v880; // r0@2125
  void *v881; // r0@2126
  void *v882; // r0@2128
  _DWORD v883; // r0@2130
  _DWORD v884; // r0@2132
  _DWORD v885; // r4@2132
  _DWORD v886; // r5@2132
  _DWORD v887; // r7@2132
  void *v888; // r0@2133
  void *v889; // r0@2135
  _DWORD v890; // r0@2137
  _DWORD v891; // r5@2140
  void *v892; // r0@2144
  void *v893; // r0@2146
  _DWORD v894; // r0@2148
  _DWORD v895; // r0@2150
  _DWORD v896; // r4@2150
  _DWORD v897; // r5@2150
  _DWORD v898; // r7@2150
  void *v899; // r0@2151
  void *v900; // r0@2153
  _DWORD v901; // r0@2155
  _DWORD v902; // r5@2158
  _DWORD v903; // r1@2162
  void *v904; // r0@2162
  void *v905; // r0@2163
  void *v906; // r0@2165
  _DWORD v907; // r0@2167
  _DWORD v908; // r6@2169
  _DWORD v909; // r4@2169
  _DWORD v910; // r7@2169
  _DWORD v911; // r5@2169
  void *v912; // r0@2170
  void *v913; // r0@2172
  _DWORD v914; // r0@2174
  _DWORD v915; // r5@2177
  _DWORD v916; // r1@2181
  void *v917; // r0@2181
  _DWORD v918; // r1@2182
  void *v919; // r0@2182
  _DWORD v920; // r1@2183
  void *v921; // r0@2183
  void *v922; // r0@2184
  void *v923; // r0@2186
  _DWORD v924; // r0@2188
  _DWORD v925; // r0@2190
  _DWORD v926; // r4@2190
  _DWORD v927; // r5@2190
  _DWORD v928; // r7@2190
  void *v929; // r0@2191
  void *v930; // r0@2193
  _DWORD v931; // r0@2195
  _DWORD v932; // r5@2198
  _DWORD v933; // r1@2202
  void *v934; // r0@2202
  _DWORD v935; // r1@2203
  void *v936; // r0@2203
  void *v937; // r0@2204
  void *v938; // r0@2206
  _DWORD v939; // r0@2208
  _DWORD v940; // r6@2210
  _DWORD v941; // r4@2210
  _DWORD v942; // r7@2210
  _DWORD v943; // r5@2210
  void *v944; // r0@2211
  void *v945; // r0@2213
  _DWORD v946; // r0@2215
  _DWORD v947; // r5@2218
  _DWORD v948; // r1@2222
  void *v949; // r0@2222
  _DWORD v950; // r1@2223
  void *v951; // r0@2223
  _DWORD v952; // r1@2224
  void *v953; // r0@2224
  void *v954; // r0@2225
  void *v955; // r0@2227
  _DWORD v956; // r0@2229
  _DWORD v957; // r6@2231
  _DWORD v958; // r4@2231
  _DWORD v959; // r7@2231
  _DWORD v960; // r5@2231
  void *v961; // r0@2232
  void *v962; // r0@2234
  _DWORD v963; // r0@2236
  _DWORD v964; // r5@2239
  _DWORD v965; // r1@2243
  void *v966; // r0@2243
  _DWORD v967; // r1@2244
  void *v968; // r0@2244
  _DWORD v969; // r1@2245
  void *v970; // r0@2245
  void *v971; // r0@2246
  void *v972; // r0@2248
  _DWORD v973; // r0@2250
  _DWORD v974; // r6@2252
  _DWORD v975; // r4@2252
  _DWORD v976; // r7@2252
  _DWORD v977; // r5@2252
  void *v978; // r0@2253
  void *v979; // r0@2255
  _DWORD v980; // r0@2257
  _DWORD v981; // r5@2260
  _DWORD v982; // r1@2264
  void *v983; // r0@2264
  _DWORD v984; // r1@2265
  void *v985; // r0@2265
  _DWORD v986; // r1@2266
  void *v987; // r0@2266
  void *v988; // r0@2267
  void *v989; // r0@2269
  _DWORD v990; // r0@2271
  _DWORD v991; // r0@2273
  _DWORD v992; // r4@2273
  _DWORD v993; // r5@2273
  _DWORD v994; // r7@2273
  void *v995; // r0@2274
  void *v996; // r0@2276
  _DWORD v997; // r0@2278
  _DWORD v998; // r5@2281
  _DWORD v999; // r1@2285
  void *v1000; // r0@2285
  _DWORD v1001; // r1@2286
  void *v1002; // r0@2286
  void *v1003; // r0@2287
  void *v1004; // r0@2289
  _DWORD v1005; // r0@2291
  _DWORD v1006; // r0@2293
  _DWORD v1007; // r4@2293
  _DWORD v1008; // r5@2293
  _DWORD v1009; // r7@2293
  void *v1010; // r0@2294
  void *v1011; // r0@2296
  _DWORD v1012; // r0@2298
  _DWORD v1013; // r5@2301
  _DWORD v1014; // r1@2305
  void *v1015; // r0@2305
  _DWORD v1016; // r1@2306
  void *v1017; // r0@2306
  void *v1018; // r0@2307
  void *v1019; // r0@2309
  _DWORD v1020; // r0@2311
  _DWORD v1021; // r6@2313
  _DWORD v1022; // r4@2313
  _DWORD v1023; // r7@2313
  _DWORD v1024; // r5@2313
  void *v1025; // r0@2314
  void *v1026; // r0@2316
  _DWORD v1027; // r0@2318
  _DWORD v1028; // r5@2321
  _DWORD v1029; // r1@2325
  void *v1030; // r0@2325
  _DWORD v1031; // r1@2326
  void *v1032; // r0@2326
  _DWORD v1033; // r1@2327
  void *v1034; // r0@2327
  void *v1035; // r0@2328
  void *v1036; // r0@2330
  _DWORD v1037; // r0@2332
  _DWORD v1038; // r0@2334
  _DWORD v1039; // r4@2334
  _DWORD v1040; // r5@2334
  _DWORD v1041; // r7@2334
  void *v1042; // r0@2335
  void *v1043; // r0@2337
  _DWORD v1044; // r0@2339
  _DWORD v1045; // r5@2342
  _DWORD v1046; // r1@2346
  void *v1047; // r0@2346
  _DWORD v1048; // r1@2347
  void *v1049; // r0@2347
  void *v1050; // r0@2348
  void *v1051; // r0@2350
  _DWORD v1052; // r0@2352
  _DWORD v1053; // r6@2354
  _DWORD v1054; // r4@2354
  _DWORD v1055; // r7@2354
  _DWORD v1056; // r5@2354
  void *v1057; // r0@2355
  void *v1058; // r0@2357
  _DWORD v1059; // r0@2359
  _DWORD v1060; // r5@2362
  _DWORD v1061; // r1@2366
  void *v1062; // r0@2366
  _DWORD v1063; // r1@2367
  void *v1064; // r0@2367
  _DWORD v1065; // r1@2368
  void *v1066; // r0@2368
  void *v1067; // r0@2369
  void *v1068; // r0@2371
  _DWORD v1069; // r0@2373
  _DWORD v1070; // r6@2375
  _DWORD v1071; // r4@2375
  _DWORD v1072; // r7@2375
  _DWORD v1073; // r5@2375
  void *v1074; // r0@2376
  void *v1075; // r0@2378
  _DWORD v1076; // r0@2380
  _DWORD v1077; // r5@2383
  _DWORD v1078; // r1@2387
  void *v1079; // r0@2387
  _DWORD v1080; // r1@2388
  void *v1081; // r0@2388
  _DWORD v1082; // r1@2389
  void *v1083; // r0@2389
  void *v1084; // r0@2390
  void *v1085; // r0@2392
  _DWORD v1086; // r0@2394
  _DWORD v1087; // r6@2396
  _DWORD v1088; // r4@2396
  _DWORD v1089; // r7@2396
  _DWORD v1090; // r5@2396
  void *v1091; // r0@2397
  void *v1092; // r0@2399
  _DWORD v1093; // r0@2401
  _DWORD v1094; // r5@2404
  _DWORD v1095; // r1@2408
  void *v1096; // r0@2408
  _DWORD v1097; // r1@2409
  void *v1098; // r0@2409
  _DWORD v1099; // r1@2410
  void *v1100; // r0@2410
  void *v1101; // r0@2411
  void *v1102; // r0@2413
  _DWORD v1103; // r0@2415
  _DWORD v1104; // r0@2417
  _DWORD v1105; // r4@2417
  _DWORD v1106; // r5@2417
  _DWORD v1107; // r7@2417
  void *v1108; // r0@2418
  void *v1109; // r0@2420
  _DWORD v1110; // r0@2422
  _DWORD v1111; // r5@2425
  void *v1112; // r0@2429
  void *v1113; // r0@2431
  _DWORD v1114; // r0@2433
  _DWORD v1115; // r1@2435
  void *v1116; // r0@2435
  void *v1117; // r0@2436
  void *v1118; // r0@2438
  _DWORD v1119; // r0@2440
  _DWORD v1120; // r0@2442
  _DWORD v1121; // r4@2442
  _DWORD v1122; // r5@2442
  _DWORD v1123; // r7@2442
  void *v1124; // r0@2443
  void *v1125; // r0@2445
  _DWORD v1126; // r0@2447
  _DWORD v1127; // r5@2450
  _DWORD v1128; // r1@2454
  void *v1129; // r0@2454
  void *v1130; // r0@2455
  void *v1131; // r0@2457
  _DWORD v1132; // r0@2459
  _DWORD v1133; // r0@2461
  _DWORD v1134; // r4@2461
  _DWORD v1135; // r5@2461
  _DWORD v1136; // r7@2461
  void *v1137; // r0@2462
  void *v1138; // r0@2464
  _DWORD v1139; // r0@2466
  _DWORD v1140; // r5@2469
  void *v1141; // r0@2473
  void *v1142; // r0@2475
  _DWORD v1143; // r0@2477
  _DWORD v1144; // r1@2479
  void *v1145; // r0@2479
  void *v1146; // r0@2480
  void *v1147; // r0@2482
  _DWORD v1148; // r0@2484
  _DWORD v1149; // r0@2486
  _DWORD v1150; // r4@2486
  _DWORD v1151; // r5@2486
  _DWORD v1152; // r7@2486
  void *v1153; // r0@2487
  void *v1154; // r0@2489
  _DWORD v1155; // r0@2491
  _DWORD v1156; // r5@2494
  _DWORD v1157; // r1@2498
  void *v1158; // r0@2498
  void *v1159; // r0@2499
  void *v1160; // r0@2501
  _DWORD v1161; // r0@2503
  _DWORD v1162; // r0@2505
  _DWORD v1163; // r4@2505
  _DWORD v1164; // r5@2505
  _DWORD v1165; // r7@2505
  void *v1166; // r0@2506
  void *v1167; // r0@2508
  _DWORD v1168; // r0@2510
  _DWORD v1169; // r5@2513
  _DWORD v1170; // r1@2517
  void *v1171; // r0@2517
  void *v1172; // r0@2518
  void *v1173; // r0@2520
  _DWORD v1174; // r0@2522
  _DWORD v1175; // r0@2524
  _DWORD v1176; // r4@2524
  _DWORD v1177; // r5@2524
  _DWORD v1178; // r7@2524
  void *v1179; // r0@2525
  void *v1180; // r0@2527
  _DWORD v1181; // r0@2529
  _DWORD v1182; // r5@2532
  _DWORD v1183; // r1@2536
  void *v1184; // r0@2536
  void *v1185; // r0@2537
  void *v1186; // r0@2539
  _DWORD v1187; // r0@2541
  _DWORD v1188; // r9@2543
  int v1189; // r5@2543
  ItemInstance *v1190; // r0@2543
  _DWORD *v1191; // r10@2543
  _DWORD v1192; // r4@2543
  _DWORD v1193; // r5@2543
  void *v1194; // r0@2544
  void *v1195; // r0@2546
  _DWORD v1196; // r0@2548
  void *v1197; // r0@2554
  void *v1198; // r0@2556
  _DWORD v1199; // r0@2558
  _DWORD v1200; // r1@2560
  void *v1201; // r0@2560
  _DWORD v1202; // r1@2561
  void *v1203; // r0@2561
  _DWORD v1204; // r1@2562
  void *v1205; // r0@2562
  void *v1206; // r0@2563
  void *v1207; // r0@2565
  _DWORD v1208; // r0@2567
  _QWORD v1209; // r4@2569
  void *v1210; // r0@2570
  void *v1211; // r0@2572
  _DWORD v1212; // r0@2574
  _DWORD v1213; // r1@2580
  void *v1214; // r0@2580
  _DWORD v1215; // r1@2581
  void *v1216; // r0@2581
  _DWORD v1217; // r1@2582
  void *v1218; // r0@2582
  void *v1219; // r0@2583
  void *v1220; // r0@2585
  _DWORD v1221; // r0@2587
  _QWORD v1222; // r4@2589
  void *v1223; // r0@2590
  void *v1224; // r0@2592
  _DWORD v1225; // r0@2594
  _DWORD v1226; // r1@2600
  void *v1227; // r0@2600
  _DWORD v1228; // r1@2601
  void *v1229; // r0@2601
  _DWORD v1230; // r1@2602
  void *v1231; // r0@2602
  void *v1232; // r0@2603
  void *v1233; // r0@2605
  _DWORD v1234; // r0@2607
  _QWORD v1235; // r4@2609
  void *v1236; // r0@2610
  void *v1237; // r0@2612
  _DWORD v1238; // r0@2614
  _DWORD v1239; // r1@2620
  void *v1240; // r0@2620
  _DWORD v1241; // r1@2621
  void *v1242; // r0@2621
  _DWORD v1243; // r1@2622
  void *v1244; // r0@2622
  void *v1245; // r0@2623
  void *v1246; // r0@2625
  _DWORD v1247; // r0@2627
  _QWORD v1248; // r4@2629
  void *v1249; // r0@2630
  void *v1250; // r0@2632
  _DWORD v1251; // r0@2634
  _DWORD v1252; // r1@2640
  void *v1253; // r0@2640
  _DWORD v1254; // r1@2641
  void *v1255; // r0@2641
  _DWORD v1256; // r1@2642
  void *v1257; // r0@2642
  void *v1258; // r0@2643
  void *v1259; // r0@2645
  _DWORD v1260; // r0@2647
  _QWORD v1261; // r4@2649
  void *v1262; // r0@2650
  void *v1263; // r0@2652
  _DWORD v1264; // r0@2654
  _DWORD v1265; // r1@2660
  void *v1266; // r0@2660
  _DWORD v1267; // r1@2661
  void *v1268; // r0@2661
  void *v1269; // r0@2662
  void *v1270; // r0@2664
  _DWORD v1271; // r0@2666
  ItemInstance *v1272; // r8@2668
  const char *v1273; // r7@2668
  _DWORD *v1274; // r11@2668
  int *v1275; // r1@2668
  int v1276; // r5@2668
  unsigned int *v1277; // r2@2942
  signed int v1278; // r1@2944
  unsigned int *v1279; // r2@2946
  signed int v1280; // r1@2948
  int v1281; // r8@2956
  _QWORD v1282; // r4@2956
  void *v1283; // r0@2957
  void *v1284; // r0@2959
  _DWORD v1285; // r0@2961
  int v1286; // r5@2965
  void *v1287; // r0@2967
  _DWORD *v1288; // r8@2967
  void *v1289; // r0@2969
  int *v1290; // r11@2969
  _DWORD v1291; // r0@2971
  _DWORD v1292; // r1@2973
  void *v1293; // r0@2973
  _DWORD v1294; // r1@2974
  void *v1295; // r0@2974
  void *v1296; // r0@2975
  void *v1297; // r0@2977
  _DWORD v1298; // r0@2979
  int v1299; // r4@2981
  ItemInstance *v1300; // r0@2983
  int v1301; // r7@2983
  void *v1302; // r5@2983
  void *v1303; // r10@2983
  void *v1304; // r0@2984
  void *v1305; // r0@2986
  _DWORD v1306; // r0@2988
  void *v1307; // r4@3015
  void *v1308; // r5@3015
  void *v1309; // r0@3016
  void *v1310; // r0@3018
  _DWORD v1311; // r0@3020
  void *v1312; // r0@3026
  void *v1313; // r0@3027
  void *v1314; // r0@3028
  void *v1315; // r4@3035
  void *v1316; // r5@3035
  void *v1317; // r0@3036
  void *v1318; // r0@3038
  _DWORD v1319; // r0@3040
  void *v1320; // r0@3046
  void *v1321; // r0@3047
  void *v1322; // r4@3054
  void *v1323; // r5@3054
  void *v1324; // r0@3055
  void *v1325; // r0@3057
  _DWORD v1326; // r0@3059
  void *v1327; // r0@3065
  void *v1328; // r0@3066
  void *v1329; // r0@3067
  void *v1330; // r4@3074
  void *v1331; // r5@3074
  void *v1332; // r0@3075
  void *v1333; // r0@3077
  _DWORD v1334; // r0@3079
  void *v1335; // r0@3085
  void *v1336; // r0@3086
  void *v1337; // r4@3093
  void *v1338; // r5@3093
  void *v1339; // r0@3094
  void *v1340; // r0@3096
  _DWORD v1341; // r0@3098
  void *v1342; // r0@3104
  void *v1343; // r0@3105
  void *v1344; // r0@3106
  void *v1345; // r4@3113
  void *v1346; // r5@3113
  void *v1347; // r0@3114
  void *v1348; // r0@3116
  _DWORD v1349; // r0@3118
  void *v1350; // r4@3130
  void *v1351; // r5@3130
  void *v1352; // r0@3131
  void *v1353; // r0@3133
  _DWORD v1354; // r0@3135
  void *v1355; // r0@3141
  void *v1356; // r0@3142
  void *v1357; // r0@3143
  void *v1358; // r4@3150
  void *v1359; // r5@3150
  void *v1360; // r0@3151
  void *v1361; // r0@3153
  _DWORD v1362; // r0@3155
  void *v1363; // r4@3167
  void *v1364; // r5@3167
  void *v1365; // r0@3168
  void *v1366; // r0@3170
  _DWORD v1367; // r0@3172
  ItemInstance *v1368; // r3@3178
  ItemInstance *v1369; // r5@3178
  int v1370; // r9@3178
  int *v1371; // r2@3178
  unsigned int *v1372; // r2@3179
  signed int v1373; // r1@3181
  unsigned int *v1374; // r2@3183
  signed int v1375; // r1@3185
  unsigned int *v1376; // r2@3187
  signed int v1377; // r1@3189
  unsigned int *v1378; // r2@3191
  signed int v1379; // r1@3193
  unsigned int *v1380; // r2@3195
  signed int v1381; // r1@3197
  unsigned int *v1382; // r2@3199
  signed int v1383; // r1@3201
  unsigned int *v1384; // r2@3203
  signed int v1385; // r1@3205
  unsigned int *v1386; // r2@3207
  signed int v1387; // r1@3209
  unsigned int *v1388; // r2@3211
  signed int v1389; // r1@3213
  unsigned int *v1390; // r2@3215
  signed int v1391; // r1@3217
  unsigned int *v1392; // r2@3219
  signed int v1393; // r1@3221
  unsigned int *v1394; // r2@3223
  signed int v1395; // r1@3225
  unsigned int *v1396; // r2@3227
  signed int v1397; // r1@3229
  unsigned int *v1398; // r2@3231
  signed int v1399; // r1@3233
  unsigned int *v1400; // r2@3235
  signed int v1401; // r1@3237
  unsigned int *v1402; // r2@3239
  signed int v1403; // r1@3241
  unsigned int *v1404; // r2@3243
  signed int v1405; // r1@3245
  unsigned int *v1406; // r2@3247
  signed int v1407; // r1@3249
  unsigned int *v1408; // r2@3251
  signed int v1409; // r1@3253
  unsigned int *v1410; // r2@3255
  signed int v1411; // r1@3257
  unsigned int *v1412; // r2@3259
  signed int v1413; // r1@3261
  unsigned int *v1414; // r2@3263
  signed int v1415; // r1@3265
  unsigned int *v1416; // r2@3267
  signed int v1417; // r1@3269
  unsigned int *v1418; // r2@3271
  signed int v1419; // r1@3273
  unsigned int *v1420; // r2@3275
  signed int v1421; // r1@3277
  unsigned int *v1422; // r2@3279
  signed int v1423; // r1@3281
  unsigned int *v1424; // r2@3283
  signed int v1425; // r1@3285
  unsigned int *v1426; // r2@3287
  signed int v1427; // r1@3289
  unsigned int *v1428; // r2@3291
  signed int v1429; // r1@3293
  unsigned int *v1430; // r2@3295
  signed int v1431; // r1@3297
  unsigned int *v1432; // r2@3299
  signed int v1433; // r1@3301
  unsigned int *v1434; // r2@3303
  signed int v1435; // r1@3305
  unsigned int *v1436; // r2@3307
  signed int v1437; // r1@3309
  unsigned int *v1438; // r2@3311
  signed int v1439; // r1@3313
  unsigned int *v1440; // r2@3315
  signed int v1441; // r1@3317
  unsigned int *v1442; // r2@3319
  signed int v1443; // r1@3321
  unsigned int *v1444; // r2@3323
  signed int v1445; // r1@3325
  unsigned int *v1446; // r2@3327
  signed int v1447; // r1@3329
  unsigned int *v1448; // r2@3331
  signed int v1449; // r1@3333
  unsigned int *v1450; // r2@3335
  signed int v1451; // r1@3337
  unsigned int *v1452; // r2@3339
  signed int v1453; // r1@3341
  unsigned int *v1454; // r2@3343
  signed int v1455; // r1@3345
  unsigned int *v1456; // r2@3347
  signed int v1457; // r1@3349
  unsigned int *v1458; // r2@3351
  signed int v1459; // r1@3353
  unsigned int *v1460; // r2@3355
  signed int v1461; // r1@3357
  unsigned int *v1462; // r2@3359
  signed int v1463; // r1@3361
  unsigned int *v1464; // r2@3363
  signed int v1465; // r1@3365
  unsigned int *v1466; // r2@3367
  signed int v1467; // r1@3369
  unsigned int *v1468; // r2@3371
  signed int v1469; // r1@3373
  unsigned int *v1470; // r2@3375
  signed int v1471; // r1@3377
  unsigned int *v1472; // r2@3379
  signed int v1473; // r1@3381
  unsigned int *v1474; // r2@3383
  signed int v1475; // r1@3385
  unsigned int *v1476; // r2@3387
  signed int v1477; // r1@3389
  unsigned int *v1478; // r2@3391
  signed int v1479; // r1@3393
  unsigned int *v1480; // r2@3395
  signed int v1481; // r1@3397
  unsigned int *v1482; // r2@3399
  signed int v1483; // r1@3401
  unsigned int *v1484; // r2@3403
  signed int v1485; // r1@3405
  unsigned int *v1486; // r2@3407
  signed int v1487; // r1@3409
  unsigned int *v1488; // r2@3585
  signed int v1489; // r1@3587
  unsigned int *v1490; // r2@3589
  signed int v1491; // r1@3591
  unsigned int *v1492; // r2@3593
  signed int v1493; // r1@3595
  unsigned int *v1494; // r2@3597
  signed int v1495; // r1@3599
  unsigned int *v1496; // r2@3601
  signed int v1497; // r1@3603
  unsigned int *v1498; // r2@3605
  signed int v1499; // r1@3607
  unsigned int *v1500; // r2@3609
  signed int v1501; // r1@3611
  unsigned int *v1502; // r2@3613
  signed int v1503; // r1@3615
  unsigned int *v1504; // r2@3617
  signed int v1505; // r1@3619
  void *v1506; // r4@3648
  void *v1507; // r7@3648
  void *v1508; // r0@3649
  void *v1509; // r0@3651
  _DWORD v1510; // r0@3653
  void *v1511; // r0@3665
  int v1512; // r4@3672
  void *v1513; // r4@3672
  void *v1514; // r7@3672
  void *v1515; // r0@3673
  void *v1516; // r0@3675
  _DWORD v1517; // r0@3677
  void *v1518; // r0@3689
  void *v1519; // r0@3690
  void *v1520; // r0@3691
  int v1521; // r4@3698
  void *v1522; // r4@3698
  void *v1523; // r7@3698
  void *v1524; // r0@3699
  void *v1525; // r0@3701
  _DWORD v1526; // r0@3703
  void *v1527; // r0@3715
  void *v1528; // r0@3716
  void *v1529; // r0@3717
  void *v1530; // r4@3724
  void *v1531; // r7@3724
  void *v1532; // r0@3725
  void *v1533; // r0@3727
  _DWORD v1534; // r0@3729
  void *v1535; // r0@3741
  void *v1536; // r0@3742
  void *v1537; // r5@3749
  int v1538; // r1@3749
  void *v1539; // r0@3749
  _BYTE v1540; // r2@3749
  ItemInstance *v1541; // r1@3749
  int v1542; // r0@3756
  void *v1543; // r4@3756
  int v1544; // r7@3756
  void *v1545; // r4@3756
  void *v1546; // r7@3756
  void *v1547; // r0@3757
  void *v1548; // r0@3759
  _DWORD v1549; // r0@3761
  int v1550; // r4@3773
  void *v1551; // r4@3773
  void *v1552; // r7@3773
  void *v1553; // r0@3774
  void *v1554; // r0@3776
  _DWORD v1555; // r0@3778
  ItemInstance *v1556; // r4@3802
  ItemInstance *v1557; // r7@3802
  void *v1558; // r0@3803
  void *v1559; // r0@3805
  _DWORD v1560; // r0@3807
  void *v1561; // r4@3816
  void *v1562; // r5@3816
  void *v1563; // r0@3817
  void *v1564; // r0@3819
  _DWORD v1565; // r0@3821
  void *v1566; // r0@3827
  void *v1567; // r0@3828
  void *v1568; // r0@3829
  void *v1569; // r4@3836
  void *v1570; // r5@3836
  void *v1571; // r0@3837
  void *v1572; // r0@3839
  _DWORD v1573; // r0@3841
  void *v1574; // r0@3847
  void *v1575; // r0@3848
  void *v1576; // r4@3855
  void *v1577; // r5@3855
  void *v1578; // r0@3856
  void *v1579; // r0@3858
  _DWORD v1580; // r0@3860
  void *v1581; // r0@3866
  void *v1582; // r0@3867
  void *v1583; // r0@3868
  void *v1584; // r4@3887
  void *v1585; // r5@3887
  void *v1586; // r0@3888
  void *v1587; // r0@3890
  _DWORD v1588; // r0@3892
  int v1589; // r4@3904
  ItemInstance *v1590; // r0@3904
  void *v1591; // r4@3904
  void *v1592; // r5@3904
  void *v1593; // r0@3905
  void *v1594; // r0@3907
  _DWORD v1595; // r0@3909
  void *v1596; // r4@3927
  void *v1597; // r5@3927
  void *v1598; // r0@3928
  void *v1599; // r0@3930
  _DWORD v1600; // r0@3932
  void *v1601; // r0@3938
  void *v1602; // r0@3939
  void *v1603; // r0@3940
  void *v1604; // r4@3947
  void *v1605; // r5@3947
  void *v1606; // r0@3948
  void *v1607; // r0@3950
  _DWORD v1608; // r0@3952
  void *v1609; // r0@3958
  void *v1610; // r0@3959
  void *v1611; // r0@3960
  _QWORD v1612; // r4@3967
  void *v1613; // r0@3968
  void *v1614; // r0@3970
  _DWORD v1615; // r0@3972
  void *v1616; // r0@3978
  void *v1617; // r0@3979
  _QWORD v1618; // r4@3986
  void *v1619; // r0@3987
  void *v1620; // r0@3989
  _DWORD v1621; // r0@3991
  void *v1622; // r0@3997
  void *v1623; // r0@3998
  void *v1624; // r0@3999
  _QWORD v1625; // r4@4006
  void *v1626; // r0@4007
  void *v1627; // r0@4009
  _DWORD v1628; // r0@4011
  void *v1629; // r0@4017
  int v1630; // r5@4024
  ItemInstance *v1631; // r0@4024
  _QWORD v1632; // r4@4024
  void *v1633; // r0@4025
  void *v1634; // r0@4027
  _DWORD v1635; // r0@4029
  void *v1636; // r0@4041
  void *v1637; // r0@4042
  void *v1638; // r0@4043
  _QWORD v1639; // r4@4050
  void *v1640; // r0@4051
  void *v1641; // r0@4053
  _DWORD v1642; // r0@4055
  void *v1643; // r0@4061
  void *v1644; // r0@4062
  void *v1645; // r0@4063
  int v1646; // r4@4070
  ItemInstance *v1647; // r0@4070
  _QWORD v1648; // r4@4070
  void *v1649; // r0@4071
  void *v1650; // r0@4073
  _DWORD v1651; // r0@4075
  int v1652; // r5@4093
  ItemInstance *v1653; // r0@4093
  _QWORD v1654; // r4@4093
  void *v1655; // r0@4094
  void *v1656; // r0@4096
  _DWORD v1657; // r0@4098
  void *v1658; // r0@4110
  void *v1659; // r0@4111
  void *v1660; // r0@4112
  char *v1661; // r4@4119
  int v1662; // r6@4119
  void *v1663; // r0@4120
  void *v1664; // r0@4122
  _DWORD v1665; // r0@4124
  unsigned int *v1666; // r2@4131
  signed int v1667; // r1@4133
  unsigned int *v1668; // r2@4135
  signed int v1669; // r1@4137
  unsigned int *v1670; // r2@4139
  signed int v1671; // r1@4141
  unsigned int *v1672; // r2@4143
  signed int v1673; // r1@4145
  unsigned int *v1674; // r2@4147
  signed int v1675; // r1@4149
  unsigned int *v1676; // r2@4151
  signed int v1677; // r1@4153
  unsigned int *v1678; // r2@4155
  signed int v1679; // r1@4157
  unsigned int *v1680; // r2@4159
  signed int v1681; // r1@4161
  unsigned int *v1682; // r2@4163
  signed int v1683; // r1@4165
  unsigned int *v1684; // r2@4167
  signed int v1685; // r1@4169
  unsigned int *v1686; // r2@4171
  signed int v1687; // r1@4173
  unsigned int *v1688; // r2@4175
  signed int v1689; // r1@4177
  unsigned int *v1690; // r2@4179
  signed int v1691; // r1@4181
  unsigned int *v1692; // r2@4183
  signed int v1693; // r1@4185
  unsigned int *v1694; // r2@4187
  signed int v1695; // r1@4189
  unsigned int *v1696; // r2@4191
  signed int v1697; // r1@4193
  unsigned int *v1698; // r2@4243
  signed int v1699; // r1@4245
  unsigned int *v1700; // r2@4247
  signed int v1701; // r1@4249
  unsigned int *v1702; // r2@4251
  signed int v1703; // r1@4253
  unsigned int *v1704; // r2@4255
  signed int v1705; // r1@4257
  unsigned int *v1706; // r2@4259
  signed int v1707; // r1@4261
  unsigned int *v1708; // r2@4263
  signed int v1709; // r1@4265
  unsigned int *v1710; // r2@4267
  signed int v1711; // r1@4269
  unsigned int *v1712; // r2@4271
  signed int v1713; // r1@4273
  unsigned int *v1714; // r2@4275
  signed int v1715; // r1@4277
  unsigned int *v1716; // r2@4279
  signed int v1717; // r1@4281
  unsigned int *v1718; // r2@4283
  signed int v1719; // r1@4285
  unsigned int *v1720; // r2@4287
  signed int v1721; // r1@4289
  unsigned int *v1722; // r2@4291
  signed int v1723; // r1@4293
  unsigned int *v1724; // r2@4295
  signed int v1725; // r1@4297
  unsigned int *v1726; // r2@4299
  signed int v1727; // r1@4301
  unsigned int *v1728; // r2@4303
  signed int v1729; // r1@4305
  unsigned int *v1730; // r2@4307
  signed int v1731; // r1@4309
  unsigned int *v1732; // r2@4311
  signed int v1733; // r1@4313
  unsigned int *v1734; // r2@4315
  signed int v1735; // r1@4317
  unsigned int *v1736; // r2@4319
  signed int v1737; // r1@4321
  unsigned int *v1738; // r2@4323
  signed int v1739; // r1@4325
  unsigned int *v1740; // r2@4327
  signed int v1741; // r1@4329
  unsigned int *v1742; // r2@4331
  signed int v1743; // r1@4333
  unsigned int *v1744; // r2@4335
  signed int v1745; // r1@4337
  unsigned int *v1746; // r2@4339
  signed int v1747; // r1@4341
  unsigned int *v1748; // r2@4343
  signed int v1749; // r1@4345
  unsigned int *v1750; // r2@4347
  signed int v1751; // r1@4349
  unsigned int *v1752; // r2@4351
  signed int v1753; // r1@4353
  unsigned int *v1754; // r2@4355
  signed int v1755; // r1@4357
  int v1756; // [sp+184h] [bp-3C60h]@3756
  int v1757; // [sp+198h] [bp-3C4Ch]@0
  int v1758; // [sp+19Ch] [bp-3C48h]@0
  int v1759; // [sp+1A0h] [bp-3C44h]@0
  int v1760; // [sp+1A4h] [bp-3C40h]@0
  int v1761; // [sp+1A8h] [bp-3C3Ch]@0
  void *v1762; // [sp+1ACh] [bp-3C38h]@0
  int v1763; // [sp+1B0h] [bp-3C34h]@0
  int v1764; // [sp+1B4h] [bp-3C30h]@0
  int v1765; // [sp+1B8h] [bp-3C2Ch]@0
  void *v1766; // [sp+1BCh] [bp-3C28h]@0
  int v1767; // [sp+1C0h] [bp-3C24h]@0
  int v1768; // [sp+1C4h] [bp-3C20h]@0
  int v1769; // [sp+1C8h] [bp-3C1Ch]@0
  int v1770; // [sp+1CCh] [bp-3C18h]@0
  int v1771; // [sp+1D0h] [bp-3C14h]@0
  int v1772; // [sp+1D4h] [bp-3C10h]@0
  int v1773; // [sp+1D8h] [bp-3C0Ch]@0
  int v1774; // [sp+1DCh] [bp-3C08h]@0
  int v1775; // [sp+1E0h] [bp-3C04h]@0
  int v1776; // [sp+1E4h] [bp-3C00h]@0
  int v1777; // [sp+1E8h] [bp-3BFCh]@0
  int v1778; // [sp+1ECh] [bp-3BF8h]@0
  int v1779; // [sp+1F8h] [bp-3BECh]@2981
  Recipes *v1780; // [sp+200h] [bp-3BE4h]@734
  int v1781; // [sp+204h] [bp-3BE0h]@734
  int v1782; // [sp+208h] [bp-3BDCh]@734
  int v1783; // [sp+20Ch] [bp-3BD8h]@734
  int v1784; // [sp+210h] [bp-3BD4h]@734
  int v1785; // [sp+214h] [bp-3BD0h]@734
  int v1786; // [sp+218h] [bp-3BCCh]@734
  int v1787; // [sp+21Ch] [bp-3BC8h]@734
  int v1788; // [sp+220h] [bp-3BC4h]@734
  int v1789; // [sp+224h] [bp-3BC0h]@734
  void *v1790; // [sp+228h] [bp-3BBCh]@734
  int v1791; // [sp+22Ch] [bp-3BB8h]@734
  int v1792; // [sp+230h] [bp-3BB4h]@734
  int v1793; // [sp+234h] [bp-3BB0h]@734
  void *v1794; // [sp+238h] [bp-3BACh]@734
  void *v1795; // [sp+23Ch] [bp-3BA8h]@734
  int v1796; // [sp+240h] [bp-3BA4h]@734
  int v1797; // [sp+244h] [bp-3BA0h]@734
  int v1798; // [sp+248h] [bp-3B9Ch]@734
  void *v1799; // [sp+24Ch] [bp-3B98h]@734
  int v1800; // [sp+250h] [bp-3B94h]@4093
  _DWORD v1801; // [sp+254h] [bp-3B90h]@4093
  int v1802; // [sp+260h] [bp-3B84h]@4093
  int v1803; // [sp+268h] [bp-3B7Ch]@4093
  int v1804; // [sp+270h] [bp-3B74h]@4093
  char v1805; // [sp+274h] [bp-3B70h]@4093
  int v1806; // [sp+27Ch] [bp-3B68h]@4117
  void *v1807; // [sp+298h] [bp-3B4Ch]@4115
  void *v1808; // [sp+2A8h] [bp-3B3Ch]@4113
  char v1809; // [sp+2BCh] [bp-3B28h]@4070
  int v1810; // [sp+2C4h] [bp-3B20h]@4085
  void *v1811; // [sp+2E0h] [bp-3B04h]@4083
  void *v1812; // [sp+2F0h] [bp-3AF4h]@4081
  int v1813; // [sp+308h] [bp-3ADCh]@4070
  _DWORD v1814; // [sp+30Ch] [bp-3AD8h]@4070
  char v1815; // [sp+314h] [bp-3AD0h]@4070
  int v1816; // [sp+31Ch] [bp-3AC8h]@4091
  void *v1817; // [sp+338h] [bp-3AACh]@4089
  void *v1818; // [sp+348h] [bp-3A9Ch]@4087
  int v1819; // [sp+360h] [bp-3A84h]@4050
  _DWORD v1820; // [sp+364h] [bp-3A80h]@4050
  int v1821; // [sp+370h] [bp-3A74h]@4050
  int v1822; // [sp+378h] [bp-3A6Ch]@4050
  int v1823; // [sp+380h] [bp-3A64h]@4050
  char v1824; // [sp+384h] [bp-3A60h]@4050
  int v1825; // [sp+38Ch] [bp-3A58h]@4068
  void *v1826; // [sp+3A8h] [bp-3A3Ch]@4066
  void *v1827; // [sp+3B8h] [bp-3A2Ch]@4064
  char v1828; // [sp+3CCh] [bp-3A18h]@4024
  int v1829; // [sp+3D4h] [bp-3A10h]@4039
  void *v1830; // [sp+3F0h] [bp-39F4h]@4037
  void *v1831; // [sp+400h] [bp-39E4h]@4035
  int v1832; // [sp+418h] [bp-39CCh]@4024
  _DWORD v1833; // [sp+41Ch] [bp-39C8h]@4024
  int v1834; // [sp+428h] [bp-39BCh]@4024
  int v1835; // [sp+430h] [bp-39B4h]@4024
  int v1836; // [sp+438h] [bp-39ACh]@4024
  char v1837; // [sp+43Ch] [bp-39A8h]@4024
  int v1838; // [sp+444h] [bp-39A0h]@4048
  void *v1839; // [sp+460h] [bp-3984h]@4046
  void *v1840; // [sp+470h] [bp-3974h]@4044
  int v1841; // [sp+488h] [bp-395Ch]@4006
  _DWORD v1842; // [sp+48Ch] [bp-3958h]@4006
  int v1843; // [sp+498h] [bp-394Ch]@4006
  char v1844; // [sp+49Ch] [bp-3948h]@4006
  int v1845; // [sp+4A4h] [bp-3940h]@4022
  void *v1846; // [sp+4C0h] [bp-3924h]@4020
  void *v1847; // [sp+4D0h] [bp-3914h]@4018
  int v1848; // [sp+4E8h] [bp-38FCh]@3986
  _DWORD v1849; // [sp+4ECh] [bp-38F8h]@3986
  int v1850; // [sp+4F8h] [bp-38ECh]@3986
  int v1851; // [sp+500h] [bp-38E4h]@3986
  int v1852; // [sp+508h] [bp-38DCh]@3986
  char v1853; // [sp+50Ch] [bp-38D8h]@3986
  int v1854; // [sp+514h] [bp-38D0h]@4004
  void *v1855; // [sp+530h] [bp-38B4h]@4002
  void *v1856; // [sp+540h] [bp-38A4h]@4000
  int v1857; // [sp+558h] [bp-388Ch]@3967
  _DWORD v1858; // [sp+55Ch] [bp-3888h]@3967
  int v1859; // [sp+568h] [bp-387Ch]@3967
  int v1860; // [sp+570h] [bp-3874h]@3967
  char v1861; // [sp+574h] [bp-3870h]@3967
  int v1862; // [sp+57Ch] [bp-3868h]@3984
  void *v1863; // [sp+598h] [bp-384Ch]@3982
  void *v1864; // [sp+5A8h] [bp-383Ch]@3980
  void *v1865; // [sp+5C0h] [bp-3824h]@3947
  void *v1866; // [sp+5C4h] [bp-3820h]@3947
  int v1867; // [sp+5D0h] [bp-3814h]@3947
  int v1868; // [sp+5D8h] [bp-380Ch]@3947
  int v1869; // [sp+5E0h] [bp-3804h]@3947
  char v1870; // [sp+5E4h] [bp-3800h]@3947
  int v1871; // [sp+5ECh] [bp-37F8h]@3965
  void *v1872; // [sp+608h] [bp-37DCh]@3963
  void *v1873; // [sp+618h] [bp-37CCh]@3961
  void *v1874; // [sp+630h] [bp-37B4h]@3927
  void *v1875; // [sp+634h] [bp-37B0h]@3927
  int v1876; // [sp+640h] [bp-37A4h]@3927
  int v1877; // [sp+648h] [bp-379Ch]@3927
  int v1878; // [sp+650h] [bp-3794h]@3927
  char v1879; // [sp+654h] [bp-3790h]@3927
  int v1880; // [sp+65Ch] [bp-3788h]@3945
  void *v1881; // [sp+678h] [bp-376Ch]@3943
  void *v1882; // [sp+688h] [bp-375Ch]@3941
  char v1883; // [sp+69Ch] [bp-3748h]@3904
  int v1884; // [sp+6A4h] [bp-3740h]@3919
  void *v1885; // [sp+6C0h] [bp-3724h]@3917
  void *v1886; // [sp+6D0h] [bp-3714h]@3915
  void *v1887; // [sp+6E8h] [bp-36FCh]@3904
  void *v1888; // [sp+6ECh] [bp-36F8h]@3904
  char v1889; // [sp+6F4h] [bp-36F0h]@3904
  int v1890; // [sp+6FCh] [bp-36E8h]@3925
  void *v1891; // [sp+718h] [bp-36CCh]@3923
  void *v1892; // [sp+728h] [bp-36BCh]@3921
  void *v1893; // [sp+740h] [bp-36A4h]@3887
  void *v1894; // [sp+744h] [bp-36A0h]@3887
  char v1895; // [sp+74Ch] [bp-3698h]@3887
  int v1896; // [sp+754h] [bp-3690h]@3902
  void *v1897; // [sp+770h] [bp-3674h]@3900
  void *v1898; // [sp+780h] [bp-3664h]@3898
  char v1899; // [sp+794h] [bp-3650h]@3875
  int v1900; // [sp+79Ch] [bp-3648h]@3879
  void *v1901; // [sp+7B8h] [bp-362Ch]@3877
  void *v1902; // [sp+7C8h] [bp-361Ch]@3875
  char v1903; // [sp+7DCh] [bp-3608h]@3875
  int v1904; // [sp+7E4h] [bp-3600h]@3885
  void *v1905; // [sp+800h] [bp-35E4h]@3883
  void *v1906; // [sp+810h] [bp-35D4h]@3881
  void *v1907; // [sp+828h] [bp-35BCh]@3855
  void *v1908; // [sp+82Ch] [bp-35B8h]@3855
  int v1909; // [sp+838h] [bp-35ACh]@3855
  int v1910; // [sp+840h] [bp-35A4h]@3855
  int v1911; // [sp+848h] [bp-359Ch]@3855
  char v1912; // [sp+84Ch] [bp-3598h]@3855
  int v1913; // [sp+854h] [bp-3590h]@3873
  void *v1914; // [sp+870h] [bp-3574h]@3871
  void *v1915; // [sp+880h] [bp-3564h]@3869
  void *v1916; // [sp+898h] [bp-354Ch]@3836
  void *v1917; // [sp+89Ch] [bp-3548h]@3836
  int v1918; // [sp+8A8h] [bp-353Ch]@3836
  int v1919; // [sp+8B0h] [bp-3534h]@3836
  char v1920; // [sp+8B4h] [bp-3530h]@3836
  int v1921; // [sp+8BCh] [bp-3528h]@3853
  void *v1922; // [sp+8D8h] [bp-350Ch]@3851
  void *v1923; // [sp+8E8h] [bp-34FCh]@3849
  void *v1924; // [sp+900h] [bp-34E4h]@3816
  void *v1925; // [sp+904h] [bp-34E0h]@3816
  int v1926; // [sp+910h] [bp-34D4h]@3816
  int v1927; // [sp+918h] [bp-34CCh]@3816
  int v1928; // [sp+920h] [bp-34C4h]@3816
  char v1929; // [sp+924h] [bp-34C0h]@3816
  int v1930; // [sp+92Ch] [bp-34B8h]@3834
  void *v1931; // [sp+948h] [bp-349Ch]@3832
  void *v1932; // [sp+958h] [bp-348Ch]@3830
  char v1933; // [sp+96Ch] [bp-3478h]@3773
  int v1934; // [sp+974h] [bp-3470h]@3788
  void *v1935; // [sp+990h] [bp-3454h]@3786
  void *v1936; // [sp+9A0h] [bp-3444h]@3784
  void *v1937; // [sp+9B8h] [bp-342Ch]@3773
  void *v1938; // [sp+9BCh] [bp-3428h]@3773
  char v1939; // [sp+9C4h] [bp-3420h]@3756
  int v1940; // [sp+9CCh] [bp-3418h]@3771
  void *v1941; // [sp+9E8h] [bp-33FCh]@3769
  void *v1942; // [sp+9F8h] [bp-33ECh]@3767
  void *v1943; // [sp+A10h] [bp-33D4h]@3756
  void *v1944; // [sp+A14h] [bp-33D0h]@3756
  void *v1945; // [sp+A1Ch] [bp-33C8h]@3749
  int v1946; // [sp+A20h] [bp-33C4h]@3749
  int v1947; // [sp+A24h] [bp-33C0h]@3749
  void *v1948; // [sp+A28h] [bp-33BCh]@3749
  char *v1949; // [sp+A2Ch] [bp-33B8h]@3749
  char *v1950; // [sp+A30h] [bp-33B4h]@3749
  char v1951; // [sp+A34h] [bp-33B0h]@3749
  int v1952; // [sp+A3Ch] [bp-33A8h]@3794
  void *v1953; // [sp+A58h] [bp-338Ch]@3792
  void *v1954; // [sp+A68h] [bp-337Ch]@3790
  char v1955; // [sp+A7Ch] [bp-3368h]@3749
  int v1956; // [sp+A84h] [bp-3360h]@3800
  void *v1957; // [sp+AA0h] [bp-3344h]@3798
  void *v1958; // [sp+AB0h] [bp-3334h]@3796
  void *v1959; // [sp+AC8h] [bp-331Ch]@3749
  ItemInstance *v1960; // [sp+ACCh] [bp-3318h]@3749
  ItemInstance *v1961; // [sp+AD0h] [bp-3314h]@3749
  char v1962; // [sp+AD4h] [bp-3310h]@3724
  int v1963; // [sp+ADCh] [bp-3308h]@3739
  void *v1964; // [sp+AF8h] [bp-32ECh]@3737
  void *v1965; // [sp+B08h] [bp-32DCh]@3735
  void *v1966; // [sp+B20h] [bp-32C4h]@3724
  void *v1967; // [sp+B24h] [bp-32C0h]@3724
  int v1968; // [sp+B30h] [bp-32B4h]@3613
  int v1969; // [sp+B38h] [bp-32ACh]@3617
  char v1970; // [sp+B3Ch] [bp-32A8h]@3724
  int v1971; // [sp+B44h] [bp-32A0h]@3747
  void *v1972; // [sp+B60h] [bp-3284h]@3745
  void *v1973; // [sp+B70h] [bp-3274h]@3743
  char v1974; // [sp+B84h] [bp-3260h]@3698
  int v1975; // [sp+B8Ch] [bp-3258h]@3713
  void *v1976; // [sp+BA8h] [bp-323Ch]@3711
  void *v1977; // [sp+BB8h] [bp-322Ch]@3709
  void *v1978; // [sp+BD0h] [bp-3214h]@3698
  void *v1979; // [sp+BD4h] [bp-3210h]@3698
  int v1980; // [sp+BE0h] [bp-3204h]@3601
  int v1981; // [sp+BE8h] [bp-31FCh]@3605
  int v1982; // [sp+BF0h] [bp-31F4h]@3609
  char v1983; // [sp+BF4h] [bp-31F0h]@3698
  int v1984; // [sp+BFCh] [bp-31E8h]@3722
  void *v1985; // [sp+C18h] [bp-31CCh]@3720
  void *v1986; // [sp+C28h] [bp-31BCh]@3718
  char v1987; // [sp+C3Ch] [bp-31A8h]@3178
  int v1988; // [sp+C44h] [bp-31A0h]@3687
  void *v1989; // [sp+C60h] [bp-3184h]@3685
  void *v1990; // [sp+C70h] [bp-3174h]@3683
  void *v1991; // [sp+C88h] [bp-315Ch]@3672
  void *v1992; // [sp+C8Ch] [bp-3158h]@3672
  int v1993; // [sp+C98h] [bp-314Ch]@3589
  int v1994; // [sp+CA0h] [bp-3144h]@3593
  int v1995; // [sp+CA8h] [bp-313Ch]@3597
  char v1996; // [sp+CACh] [bp-3138h]@3672
  int v1997; // [sp+CB4h] [bp-3130h]@3696
  void *v1998; // [sp+CD0h] [bp-3114h]@3694
  void *v1999; // [sp+CE0h] [bp-3104h]@3692
  char v2000; // [sp+CF4h] [bp-30F0h]@3648
  int v2001; // [sp+CFCh] [bp-30E8h]@3663
  void *v2002; // [sp+D18h] [bp-30CCh]@3661
  void *v2003; // [sp+D28h] [bp-30BCh]@3659
  void *v2004; // [sp+D40h] [bp-30A4h]@3648
  void *v2005; // [sp+D44h] [bp-30A0h]@3648
  int v2006; // [sp+D50h] [bp-3094h]@3585
  char v2007; // [sp+D54h] [bp-3090h]@3178
  int v2008; // [sp+D5Ch] [bp-3088h]@3670
  void *v2009; // [sp+D78h] [bp-306Ch]@3668
  void *v2010; // [sp+D88h] [bp-305Ch]@3666
  void *v2011; // [sp+DA0h] [bp-3044h]@3150
  void *v2012; // [sp+DA4h] [bp-3040h]@3150
  char v2013; // [sp+DACh] [bp-3038h]@3150
  int v2014; // [sp+DB4h] [bp-3030h]@3165
  void *v2015; // [sp+DD0h] [bp-3014h]@3163
  void *v2016; // [sp+DE0h] [bp-3004h]@3161
  void *v2017; // [sp+DF4h] [bp-2FF0h]@3150
  void *v2018; // [sp+DF8h] [bp-2FECh]@3150
  int v2019; // [sp+DFCh] [bp-2FE8h]@3150
  void *v2020; // [sp+E00h] [bp-2FE4h]@3130
  void *v2021; // [sp+E04h] [bp-2FE0h]@3130
  int v2022; // [sp+E10h] [bp-2FD4h]@3130
  int v2023; // [sp+E18h] [bp-2FCCh]@3130
  int v2024; // [sp+E20h] [bp-2FC4h]@3130
  char v2025; // [sp+E24h] [bp-2FC0h]@3130
  int v2026; // [sp+E2Ch] [bp-2FB8h]@3148
  void *v2027; // [sp+E48h] [bp-2F9Ch]@3146
  void *v2028; // [sp+E58h] [bp-2F8Ch]@3144
  void *v2029; // [sp+E70h] [bp-2F74h]@3113
  void *v2030; // [sp+E74h] [bp-2F70h]@3113
  char v2031; // [sp+E7Ch] [bp-2F68h]@3113
  int v2032; // [sp+E84h] [bp-2F60h]@3128
  void *v2033; // [sp+EA0h] [bp-2F44h]@3126
  void *v2034; // [sp+EB0h] [bp-2F34h]@3124
  void *v2035; // [sp+EC8h] [bp-2F1Ch]@3093
  void *v2036; // [sp+ECCh] [bp-2F18h]@3093
  int v2037; // [sp+ED8h] [bp-2F0Ch]@3093
  int v2038; // [sp+EE0h] [bp-2F04h]@3093
  int v2039; // [sp+EE8h] [bp-2EFCh]@3093
  char v2040; // [sp+EECh] [bp-2EF8h]@3093
  int v2041; // [sp+EF4h] [bp-2EF0h]@3111
  void *v2042; // [sp+F10h] [bp-2ED4h]@3109
  void *v2043; // [sp+F20h] [bp-2EC4h]@3107
  void *v2044; // [sp+F38h] [bp-2EACh]@3074
  void *v2045; // [sp+F3Ch] [bp-2EA8h]@3074
  int v2046; // [sp+F48h] [bp-2E9Ch]@3074
  int v2047; // [sp+F50h] [bp-2E94h]@3074
  char v2048; // [sp+F54h] [bp-2E90h]@3074
  int v2049; // [sp+F5Ch] [bp-2E88h]@3091
  void *v2050; // [sp+F78h] [bp-2E6Ch]@3089
  void *v2051; // [sp+F88h] [bp-2E5Ch]@3087
  void *v2052; // [sp+FA0h] [bp-2E44h]@3054
  void *v2053; // [sp+FA4h] [bp-2E40h]@3054
  int v2054; // [sp+FB0h] [bp-2E34h]@3054
  int v2055; // [sp+FB8h] [bp-2E2Ch]@3054
  int v2056; // [sp+FC0h] [bp-2E24h]@3054
  char v2057; // [sp+FC4h] [bp-2E20h]@3054
  int v2058; // [sp+FCCh] [bp-2E18h]@3072
  void *v2059; // [sp+FE8h] [bp-2DFCh]@3070
  void *v2060; // [sp+FF8h] [bp-2DECh]@3068
  void *v2061; // [sp+1010h] [bp-2DD4h]@3035
  void *v2062; // [sp+1014h] [bp-2DD0h]@3035
  int v2063; // [sp+1020h] [bp-2DC4h]@3035
  int v2064; // [sp+1028h] [bp-2DBCh]@3035
  char v2065; // [sp+102Ch] [bp-2DB8h]@3035
  int v2066; // [sp+1034h] [bp-2DB0h]@3052
  void *v2067; // [sp+1050h] [bp-2D94h]@3050
  void *v2068; // [sp+1060h] [bp-2D84h]@3048
  void *v2069; // [sp+1078h] [bp-2D6Ch]@3015
  void *v2070; // [sp+107Ch] [bp-2D68h]@3015
  int v2071; // [sp+1088h] [bp-2D5Ch]@3015
  int v2072; // [sp+1090h] [bp-2D54h]@3015
  int v2073; // [sp+1098h] [bp-2D4Ch]@3015
  char v2074; // [sp+109Ch] [bp-2D48h]@3015
  int v2075; // [sp+10A4h] [bp-2D40h]@3033
  void *v2076; // [sp+10C0h] [bp-2D24h]@3031
  void *v2077; // [sp+10D0h] [bp-2D14h]@3029
  char v2078; // [sp+10E4h] [bp-2D00h]@2983
  int v2079; // [sp+10ECh] [bp-2CF8h]@2998
  void *v2080; // [sp+1108h] [bp-2CDCh]@2996
  void *v2081; // [sp+1118h] [bp-2CCCh]@2994
  char v2082; // [sp+112Ch] [bp-2CB8h]@2983
  int v2083; // [sp+1134h] [bp-2CB0h]@3004
  void *v2084; // [sp+1150h] [bp-2C94h]@3002
  void *v2085; // [sp+1160h] [bp-2C84h]@3000
  void *ptr; // [sp+1178h] [bp-2C6Ch]@2983
  void *v2087; // [sp+117Ch] [bp-2C68h]@2983
  char v2088; // [sp+1184h] [bp-2C60h]@2983
  _DWORD v2089; // [sp+118Ch] [bp-2C58h]@1357
  void *v2090; // [sp+11A8h] [bp-2C3Ch]@3008
  void *v2091; // [sp+11B8h] [bp-2C2Ch]@3006
  _DWORD v2092; // [sp+11CCh] [bp-2C18h]@2956
  _DWORD v2093; // [sp+1218h] [bp-2BCCh]@2668
  _DWORD v2094; // [sp+1228h] [bp-2BBCh]@2956
  _DWORD v2095; // [sp+1230h] [bp-2BB4h]@2956
  _DWORD v2096; // [sp+1234h] [bp-2BB0h]@2668
  _DWORD v2097; // [sp+1280h] [bp-2B64h]@2649
  _DWORD v2098; // [sp+1290h] [bp-2B54h]@2649
  _DWORD v2099; // [sp+1298h] [bp-2B4Ch]@2649
  _DWORD v2100; // [sp+129Ch] [bp-2B48h]@2649
  _DWORD v2101; // [sp+12E8h] [bp-2AFCh]@2629
  _DWORD v2102; // [sp+12F8h] [bp-2AECh]@2629
  _DWORD v2103; // [sp+1300h] [bp-2AE4h]@2629
  _DWORD v2104; // [sp+1308h] [bp-2ADCh]@2629
  _DWORD v2105; // [sp+130Ch] [bp-2AD8h]@2629
  _DWORD v2106; // [sp+1358h] [bp-2A8Ch]@2609
  _DWORD v2107; // [sp+1368h] [bp-2A7Ch]@2609
  _DWORD v2108; // [sp+1370h] [bp-2A74h]@2609
  _DWORD v2109; // [sp+1378h] [bp-2A6Ch]@2609
  _DWORD v2110; // [sp+137Ch] [bp-2A68h]@2609
  _DWORD v2111; // [sp+13C8h] [bp-2A1Ch]@2589
  _DWORD v2112; // [sp+13D8h] [bp-2A0Ch]@2589
  _DWORD v2113; // [sp+13E0h] [bp-2A04h]@2589
  _DWORD v2114; // [sp+13E8h] [bp-29FCh]@2589
  _DWORD v2115; // [sp+13ECh] [bp-29F8h]@2589
  _DWORD v2116; // [sp+1438h] [bp-29ACh]@2569
  _DWORD v2117; // [sp+1448h] [bp-299Ch]@2569
  _DWORD v2118; // [sp+1450h] [bp-2994h]@2569
  _DWORD v2119; // [sp+1458h] [bp-298Ch]@2569
  _DWORD v2120; // [sp+145Ch] [bp-2988h]@2569
  char v2121; // [sp+14A4h] [bp-2940h]@2543
  _DWORD v2122; // [sp+14F0h] [bp-28F4h]@2543
  _DWORD v2123; // [sp+1500h] [bp-28E4h]@2543
  _DWORD v2124; // [sp+1508h] [bp-28DCh]@2543
  _DWORD v2125; // [sp+1510h] [bp-28D4h]@2543
  _DWORD v2126; // [sp+1514h] [bp-28D0h]@2543
  _DWORD v2127; // [sp+1560h] [bp-2884h]@2524
  _DWORD v2128; // [sp+1570h] [bp-2874h]@2524
  _DWORD v2129; // [sp+1574h] [bp-2870h]@2524
  _DWORD v2130; // [sp+15C0h] [bp-2824h]@2505
  _DWORD v2131; // [sp+15D0h] [bp-2814h]@2505
  _DWORD v2132; // [sp+15D4h] [bp-2810h]@2505
  _DWORD v2133; // [sp+1620h] [bp-27C4h]@2486
  _DWORD v2134; // [sp+1630h] [bp-27B4h]@2486
  _DWORD v2135; // [sp+1634h] [bp-27B0h]@2486
  _DWORD v2136; // [sp+167Ch] [bp-2768h]@2461
  _DWORD v2137; // [sp+16C8h] [bp-271Ch]@2461
  _DWORD v2138; // [sp+16D8h] [bp-270Ch]@2461
  _DWORD v2139; // [sp+16DCh] [bp-2708h]@2461
  _DWORD v2140; // [sp+1728h] [bp-26BCh]@2442
  _DWORD v2141; // [sp+1738h] [bp-26ACh]@2442
  _DWORD v2142; // [sp+173Ch] [bp-26A8h]@2442
  char v2143; // [sp+1784h] [bp-2660h]@2417
  _DWORD v2144; // [sp+17D0h] [bp-2614h]@2417
  _DWORD v2145; // [sp+17E0h] [bp-2604h]@2417
  char v2146; // [sp+17E4h] [bp-2600h]@2417
  _DWORD v2147; // [sp+1830h] [bp-25B4h]@2396
  _DWORD v2148; // [sp+1840h] [bp-25A4h]@2396
  _DWORD v2149; // [sp+1848h] [bp-259Ch]@2396
  _DWORD v2150; // [sp+1850h] [bp-2594h]@2396
  _DWORD v2151; // [sp+1854h] [bp-2590h]@2396
  _DWORD v2152; // [sp+18A0h] [bp-2544h]@2375
  _DWORD v2153; // [sp+18B0h] [bp-2534h]@2375
  _DWORD v2154; // [sp+18B8h] [bp-252Ch]@2375
  _DWORD v2155; // [sp+18C0h] [bp-2524h]@2375
  char v2156; // [sp+18C4h] [bp-2520h]@2375
  _DWORD v2157; // [sp+1910h] [bp-24D4h]@2354
  _DWORD v2158; // [sp+1920h] [bp-24C4h]@2354
  _DWORD v2159; // [sp+1928h] [bp-24BCh]@2354
  _DWORD v2160; // [sp+1930h] [bp-24B4h]@2354
  _DWORD v2161; // [sp+1934h] [bp-24B0h]@2354
  _DWORD v2162; // [sp+1980h] [bp-2464h]@2334
  _DWORD v2163; // [sp+1990h] [bp-2454h]@2334
  _DWORD v2164; // [sp+1998h] [bp-244Ch]@2334
  _DWORD v2165; // [sp+199Ch] [bp-2448h]@2334
  _DWORD v2166; // [sp+19E8h] [bp-23FCh]@2313
  _DWORD v2167; // [sp+19F8h] [bp-23ECh]@2313
  _DWORD v2168; // [sp+1A00h] [bp-23E4h]@2313
  _DWORD v2169; // [sp+1A08h] [bp-23DCh]@2313
  _DWORD v2170; // [sp+1A0Ch] [bp-23D8h]@2313
  _DWORD v2171; // [sp+1A58h] [bp-238Ch]@2293
  _DWORD v2172; // [sp+1A68h] [bp-237Ch]@2293
  _DWORD v2173; // [sp+1A70h] [bp-2374h]@2293
  _DWORD v2174; // [sp+1A74h] [bp-2370h]@2293
  _DWORD v2175; // [sp+1AC0h] [bp-2324h]@2273
  _DWORD v2176; // [sp+1AD0h] [bp-2314h]@2273
  _DWORD v2177; // [sp+1AD8h] [bp-230Ch]@2273
  _DWORD v2178; // [sp+1ADCh] [bp-2308h]@2273
  _DWORD v2179; // [sp+1B28h] [bp-22BCh]@2252
  _DWORD v2180; // [sp+1B38h] [bp-22ACh]@2252
  _DWORD v2181; // [sp+1B40h] [bp-22A4h]@2252
  _DWORD v2182; // [sp+1B48h] [bp-229Ch]@2252
  _DWORD v2183; // [sp+1B4Ch] [bp-2298h]@2252
  _DWORD v2184; // [sp+1B98h] [bp-224Ch]@2231
  _DWORD v2185; // [sp+1BA8h] [bp-223Ch]@2231
  _DWORD v2186; // [sp+1BB0h] [bp-2234h]@2231
  _DWORD v2187; // [sp+1BB8h] [bp-222Ch]@2231
  _DWORD v2188; // [sp+1BBCh] [bp-2228h]@2231
  _DWORD v2189; // [sp+1C08h] [bp-21DCh]@2210
  _DWORD v2190; // [sp+1C18h] [bp-21CCh]@2210
  _DWORD v2191; // [sp+1C20h] [bp-21C4h]@2210
  _DWORD v2192; // [sp+1C28h] [bp-21BCh]@2210
  _DWORD v2193; // [sp+1C2Ch] [bp-21B8h]@2210
  _DWORD v2194; // [sp+1C78h] [bp-216Ch]@2190
  _DWORD v2195; // [sp+1C88h] [bp-215Ch]@2190
  _DWORD v2196; // [sp+1C90h] [bp-2154h]@2190
  _DWORD v2197; // [sp+1C94h] [bp-2150h]@2190
  _DWORD v2198; // [sp+1CE0h] [bp-2104h]@2169
  _DWORD v2199; // [sp+1CF0h] [bp-20F4h]@2169
  _DWORD v2200; // [sp+1CF8h] [bp-20ECh]@2169
  _DWORD v2201; // [sp+1D00h] [bp-20E4h]@2169
  char v2202; // [sp+1D04h] [bp-20E0h]@2169
  _DWORD v2203; // [sp+1D50h] [bp-2094h]@2150
  _DWORD v2204; // [sp+1D60h] [bp-2084h]@2150
  char v2205; // [sp+1D64h] [bp-2080h]@2150
  _DWORD v2206; // [sp+1DB0h] [bp-2034h]@2132
  _DWORD v2207; // [sp+1DBCh] [bp-2028h]@2132
  _DWORD v2208; // [sp+1E08h] [bp-1FDCh]@1649
  _DWORD v2209; // [sp+1E18h] [bp-1FCCh]@1649
  _DWORD v2210; // [sp+1E20h] [bp-1FC4h]@1649
  char v2211; // [sp+1E24h] [bp-1FC0h]@1649
  _DWORD v2212; // [sp+1E6Ch] [bp-1F78h]@1470
  _DWORD v2213; // [sp+1EB4h] [bp-1F30h]@1470
  _DWORD v2214; // [sp+1F00h] [bp-1EE4h]@1470
  _DWORD v2215; // [sp+1F10h] [bp-1ED4h]@1617
  _DWORD v2216; // [sp+1F18h] [bp-1ECCh]@1617
  _DWORD v2217; // [sp+1F1Ch] [bp-1EC8h]@1470
  _DWORD v2218; // [sp+1F68h] [bp-1E7Ch]@1450
  _DWORD v2219; // [sp+1F78h] [bp-1E6Ch]@1450
  _DWORD v2220; // [sp+1F80h] [bp-1E64h]@1450
  char v2221; // [sp+1F84h] [bp-1E60h]@1450
  _DWORD v2222; // [sp+1FD0h] [bp-1E14h]@1430
  _DWORD v2223; // [sp+1FE0h] [bp-1E04h]@1430
  _DWORD v2224; // [sp+1FE8h] [bp-1DFCh]@1430
  _DWORD v2225; // [sp+1FECh] [bp-1DF8h]@1430
  _DWORD v2226; // [sp+2038h] [bp-1DACh]@1409
  _DWORD v2227; // [sp+2048h] [bp-1D9Ch]@1409
  _DWORD v2228; // [sp+2050h] [bp-1D94h]@1409
  _DWORD v2229; // [sp+2058h] [bp-1D8Ch]@1409
  _DWORD v2230; // [sp+205Ch] [bp-1D88h]@1409
  _DWORD v2231; // [sp+20A8h] [bp-1D3Ch]@1389
  _DWORD v2232; // [sp+20B8h] [bp-1D2Ch]@1389
  _DWORD v2233; // [sp+20C0h] [bp-1D24h]@1389
  char v2234; // [sp+20C4h] [bp-1D20h]@1389
  _DWORD v2235; // [sp+2110h] [bp-1CD4h]@1369
  _DWORD v2236; // [sp+2120h] [bp-1CC4h]@1369
  _DWORD v2237; // [sp+2128h] [bp-1CBCh]@1369
  _DWORD v2238; // [sp+212Ch] [bp-1CB8h]@1369
  _DWORD v2239; // [sp+2178h] [bp-1C6Ch]@1349
  _DWORD v2240; // [sp+217Ch] [bp-1C68h]@1349
  _DWORD v2241; // [sp+2188h] [bp-1C5Ch]@1349
  _DWORD v2242; // [sp+2190h] [bp-1C54h]@1349
  _DWORD v2243; // [sp+2194h] [bp-1C50h]@1349
  _DWORD v2244; // [sp+219Ch] [bp-1C48h]@1367
  void *v2245; // [sp+21B8h] [bp-1C2Ch]@1365
  void *v2246; // [sp+21C8h] [bp-1C1Ch]@1363
  int v2247; // [sp+21E0h] [bp-1C04h]@1329
  _DWORD v2248; // [sp+21E4h] [bp-1C00h]@1329
  _DWORD v2249; // [sp+21F0h] [bp-1BF4h]@1329
  _DWORD v2250; // [sp+21F8h] [bp-1BECh]@1329
  _DWORD v2251; // [sp+2200h] [bp-1BE4h]@1329
  char v2252; // [sp+2204h] [bp-1BE0h]@1329
  _DWORD v2253; // [sp+220Ch] [bp-1BD8h]@1347
  void *v2254; // [sp+2228h] [bp-1BBCh]@1345
  void *v2255; // [sp+2238h] [bp-1BACh]@1343
  int v2256; // [sp+2250h] [bp-1B94h]@1309
  _DWORD v2257; // [sp+2254h] [bp-1B90h]@1309
  _DWORD v2258; // [sp+2260h] [bp-1B84h]@1309
  _DWORD v2259; // [sp+2268h] [bp-1B7Ch]@1309
  _DWORD v2260; // [sp+2270h] [bp-1B74h]@1309
  _DWORD v2261; // [sp+2274h] [bp-1B70h]@1309
  _DWORD v2262; // [sp+227Ch] [bp-1B68h]@1327
  void *v2263; // [sp+2298h] [bp-1B4Ch]@1325
  void *v2264; // [sp+22A8h] [bp-1B3Ch]@1323
  int v2265; // [sp+22C0h] [bp-1B24h]@1289
  _DWORD v2266; // [sp+22C4h] [bp-1B20h]@1289
  _DWORD v2267; // [sp+22D0h] [bp-1B14h]@1289
  _DWORD v2268; // [sp+22D8h] [bp-1B0Ch]@1289
  _DWORD v2269; // [sp+22E0h] [bp-1B04h]@1289
  _DWORD v2270; // [sp+22E4h] [bp-1B00h]@1289
  _DWORD v2271; // [sp+22ECh] [bp-1AF8h]@1307
  void *v2272; // [sp+2308h] [bp-1ADCh]@1305
  void *v2273; // [sp+2318h] [bp-1ACCh]@1303
  int v2274; // [sp+2330h] [bp-1AB4h]@1269
  _DWORD v2275; // [sp+2334h] [bp-1AB0h]@1269
  _DWORD v2276; // [sp+2340h] [bp-1AA4h]@1269
  _DWORD v2277; // [sp+2348h] [bp-1A9Ch]@1269
  _DWORD v2278; // [sp+2350h] [bp-1A94h]@1269
  _DWORD v2279; // [sp+2354h] [bp-1A90h]@1269
  _DWORD v2280; // [sp+235Ch] [bp-1A88h]@1287
  void *v2281; // [sp+2378h] [bp-1A6Ch]@1285
  void *v2282; // [sp+2388h] [bp-1A5Ch]@1283
  int v2283; // [sp+23A0h] [bp-1A44h]@1250
  _DWORD v2284; // [sp+23A4h] [bp-1A40h]@1250
  _DWORD v2285; // [sp+23B0h] [bp-1A34h]@1250
  _DWORD v2286; // [sp+23B8h] [bp-1A2Ch]@1250
  _DWORD v2287; // [sp+23BCh] [bp-1A28h]@1250
  _DWORD v2288; // [sp+23C4h] [bp-1A20h]@1267
  void *v2289; // [sp+23E0h] [bp-1A04h]@1265
  void *v2290; // [sp+23F0h] [bp-19F4h]@1263
  int v2291; // [sp+2408h] [bp-19DCh]@1231
  _DWORD v2292; // [sp+240Ch] [bp-19D8h]@1231
  _DWORD v2293; // [sp+2418h] [bp-19CCh]@1231
  _DWORD v2294; // [sp+2420h] [bp-19C4h]@1231
  _DWORD v2295; // [sp+2424h] [bp-19C0h]@1231
  _DWORD v2296; // [sp+242Ch] [bp-19B8h]@1248
  void *v2297; // [sp+2448h] [bp-199Ch]@1246
  void *v2298; // [sp+2458h] [bp-198Ch]@1244
  int v2299; // [sp+2470h] [bp-1974h]@1211
  _DWORD v2300; // [sp+2474h] [bp-1970h]@1211
  _DWORD v2301; // [sp+2480h] [bp-1964h]@1211
  _DWORD v2302; // [sp+2488h] [bp-195Ch]@1211
  _DWORD v2303; // [sp+2490h] [bp-1954h]@1211
  _DWORD v2304; // [sp+2494h] [bp-1950h]@1211
  _DWORD v2305; // [sp+249Ch] [bp-1948h]@1229
  void *v2306; // [sp+24B8h] [bp-192Ch]@1227
  void *v2307; // [sp+24C8h] [bp-191Ch]@1225
  int v2308; // [sp+24E0h] [bp-1904h]@1191
  _DWORD v2309; // [sp+24E4h] [bp-1900h]@1191
  _DWORD v2310; // [sp+24F0h] [bp-18F4h]@1191
  _DWORD v2311; // [sp+24F8h] [bp-18ECh]@1191
  _DWORD v2312; // [sp+2500h] [bp-18E4h]@1191
  char v2313; // [sp+2504h] [bp-18E0h]@1191
  _DWORD v2314; // [sp+250Ch] [bp-18D8h]@1209
  void *v2315; // [sp+2528h] [bp-18BCh]@1207
  void *v2316; // [sp+2538h] [bp-18ACh]@1205
  int v2317; // [sp+2550h] [bp-1894h]@1172
  _DWORD v2318; // [sp+2554h] [bp-1890h]@1172
  _DWORD v2319; // [sp+2560h] [bp-1884h]@1172
  _DWORD v2320; // [sp+2568h] [bp-187Ch]@1172
  _DWORD v2321; // [sp+256Ch] [bp-1878h]@1172
  _DWORD v2322; // [sp+2574h] [bp-1870h]@1189
  void *v2323; // [sp+2590h] [bp-1854h]@1187
  void *v2324; // [sp+25A0h] [bp-1844h]@1185
  _DWORD v2325; // [sp+25B4h] [bp-1830h]@1147
  _DWORD v2326; // [sp+25BCh] [bp-1828h]@1162
  void *v2327; // [sp+25D8h] [bp-180Ch]@1160
  void *v2328; // [sp+25E8h] [bp-17FCh]@1158
  _DWORD v2329; // [sp+2600h] [bp-17E4h]@1147
  _DWORD v2330; // [sp+2604h] [bp-17E0h]@1147
  _DWORD v2331; // [sp+2610h] [bp-17D4h]@1147
  _DWORD v2332; // [sp+2618h] [bp-17CCh]@1147
  _DWORD v2333; // [sp+261Ch] [bp-17C8h]@1147
  _DWORD v2334; // [sp+2624h] [bp-17C0h]@1170
  void *v2335; // [sp+2640h] [bp-17A4h]@1168
  void *v2336; // [sp+2650h] [bp-1794h]@1166
  _DWORD v2337; // [sp+2668h] [bp-177Ch]@1128
  _DWORD v2338; // [sp+266Ch] [bp-1778h]@1128
  _DWORD v2339; // [sp+2678h] [bp-176Ch]@1128
  _DWORD v2340; // [sp+2680h] [bp-1764h]@1128
  char v2341; // [sp+2684h] [bp-1760h]@1128
  _DWORD v2342; // [sp+268Ch] [bp-1758h]@1145
  void *v2343; // [sp+26A8h] [bp-173Ch]@1143
  void *v2344; // [sp+26B8h] [bp-172Ch]@1141
  _DWORD v2345; // [sp+26CCh] [bp-1718h]@1089
  _DWORD v2346; // [sp+26D4h] [bp-1710h]@1104
  void *v2347; // [sp+26F0h] [bp-16F4h]@1102
  void *v2348; // [sp+2700h] [bp-16E4h]@1100
  _DWORD v2349; // [sp+2714h] [bp-16D0h]@1089
  _DWORD v2350; // [sp+2718h] [bp-16CCh]@1089
  _DWORD v2351; // [sp+2724h] [bp-16C0h]@1089
  void *v2352; // [sp+2728h] [bp-16BCh]@1089
  void *v2353; // [sp+272Ch] [bp-16B8h]@1089
  _DWORD v2354; // [sp+2730h] [bp-16B4h]@1089
  _DWORD v2355; // [sp+2734h] [bp-16B0h]@1089
  _DWORD v2356; // [sp+273Ch] [bp-16A8h]@1126
  void *v2357; // [sp+2758h] [bp-168Ch]@1124
  void *v2358; // [sp+2768h] [bp-167Ch]@1122
  _DWORD v2359; // [sp+277Ch] [bp-1668h]@1050
  _DWORD v2360; // [sp+2784h] [bp-1660h]@1065
  void *v2361; // [sp+27A0h] [bp-1644h]@1063
  void *v2362; // [sp+27B0h] [bp-1634h]@1061
  char v2363; // [sp+27C4h] [bp-1620h]@1050
  _DWORD v2364; // [sp+27C8h] [bp-161Ch]@1050
  _DWORD v2365; // [sp+27D4h] [bp-1610h]@1050
  void *v2366; // [sp+27D8h] [bp-160Ch]@1050
  void *v2367; // [sp+27DCh] [bp-1608h]@1050
  _DWORD v2368; // [sp+27E0h] [bp-1604h]@1050
  _DWORD v2369; // [sp+27E4h] [bp-1600h]@1050
  _DWORD v2370; // [sp+27ECh] [bp-15F8h]@1087
  void *v2371; // [sp+2808h] [bp-15DCh]@1085
  void *v2372; // [sp+2818h] [bp-15CCh]@1083
  _DWORD v2373; // [sp+282Ch] [bp-15B8h]@1011
  _DWORD v2374; // [sp+2834h] [bp-15B0h]@1026
  void *v2375; // [sp+2850h] [bp-1594h]@1024
  void *v2376; // [sp+2860h] [bp-1584h]@1022
  _DWORD v2377; // [sp+2874h] [bp-1570h]@1011
  _DWORD v2378; // [sp+2878h] [bp-156Ch]@1011
  char v2379; // [sp+2884h] [bp-1560h]@1011
  void *v2380; // [sp+2888h] [bp-155Ch]@1011
  void *v2381; // [sp+288Ch] [bp-1558h]@1011
  _DWORD v2382; // [sp+2890h] [bp-1554h]@1011
  _DWORD v2383; // [sp+2894h] [bp-1550h]@1011
  _DWORD v2384; // [sp+289Ch] [bp-1548h]@1048
  void *v2385; // [sp+28B8h] [bp-152Ch]@1046
  void *v2386; // [sp+28C8h] [bp-151Ch]@1044
  _DWORD v2387; // [sp+28DCh] [bp-1508h]@972
  _DWORD v2388; // [sp+28E4h] [bp-1500h]@987
  void *v2389; // [sp+2900h] [bp-14E4h]@985
  void *v2390; // [sp+2910h] [bp-14D4h]@983
  _DWORD v2391; // [sp+2924h] [bp-14C0h]@972
  _DWORD v2392; // [sp+2928h] [bp-14BCh]@972
  _DWORD v2393; // [sp+2934h] [bp-14B0h]@972
  void *v2394; // [sp+2938h] [bp-14ACh]@972
  void *v2395; // [sp+293Ch] [bp-14A8h]@972
  _DWORD v2396; // [sp+2940h] [bp-14A4h]@972
  char v2397; // [sp+2944h] [bp-14A0h]@972
  _DWORD v2398; // [sp+294Ch] [bp-1498h]@1009
  void *v2399; // [sp+2968h] [bp-147Ch]@1007
  void *v2400; // [sp+2978h] [bp-146Ch]@1005
  _DWORD v2401; // [sp+298Ch] [bp-1458h]@933
  _DWORD v2402; // [sp+2994h] [bp-1450h]@948
  void *v2403; // [sp+29B0h] [bp-1434h]@946
  void *v2404; // [sp+29C0h] [bp-1424h]@944
  _DWORD v2405; // [sp+29D4h] [bp-1410h]@933
  _DWORD v2406; // [sp+29D8h] [bp-140Ch]@933
  _DWORD v2407; // [sp+29E4h] [bp-1400h]@933
  void *v2408; // [sp+29E8h] [bp-13FCh]@933
  void *v2409; // [sp+29ECh] [bp-13F8h]@933
  _DWORD v2410; // [sp+29F0h] [bp-13F4h]@933
  _DWORD v2411; // [sp+29F4h] [bp-13F0h]@933
  _DWORD v2412; // [sp+29FCh] [bp-13E8h]@970
  void *v2413; // [sp+2A18h] [bp-13CCh]@968
  void *v2414; // [sp+2A28h] [bp-13BCh]@966
  _DWORD v2415; // [sp+2A3Ch] [bp-13A8h]@894
  _DWORD v2416; // [sp+2A44h] [bp-13A0h]@909
  void *v2417; // [sp+2A60h] [bp-1384h]@907
  void *v2418; // [sp+2A70h] [bp-1374h]@905
  char v2419; // [sp+2A84h] [bp-1360h]@894
  _DWORD v2420; // [sp+2A88h] [bp-135Ch]@894
  _DWORD v2421; // [sp+2A94h] [bp-1350h]@894
  void *v2422; // [sp+2A98h] [bp-134Ch]@894
  void *v2423; // [sp+2A9Ch] [bp-1348h]@894
  _DWORD v2424; // [sp+2AA0h] [bp-1344h]@894
  _DWORD v2425; // [sp+2AA4h] [bp-1340h]@894
  _DWORD v2426; // [sp+2AACh] [bp-1338h]@931
  void *v2427; // [sp+2AC8h] [bp-131Ch]@929
  void *v2428; // [sp+2AD8h] [bp-130Ch]@927
  _DWORD v2429; // [sp+2AF0h] [bp-12F4h]@877
  _DWORD v2430; // [sp+2AF4h] [bp-12F0h]@877
  _DWORD v2431; // [sp+2AFCh] [bp-12E8h]@877
  _DWORD v2432; // [sp+2B04h] [bp-12E0h]@892
  void *v2433; // [sp+2B20h] [bp-12C4h]@890
  void *v2434; // [sp+2B30h] [bp-12B4h]@888
  _DWORD v2435; // [sp+2B48h] [bp-129Ch]@860
  _DWORD v2436; // [sp+2B4Ch] [bp-1298h]@860
  _DWORD v2437; // [sp+2B54h] [bp-1290h]@860
  _DWORD v2438; // [sp+2B5Ch] [bp-1288h]@875
  void *v2439; // [sp+2B78h] [bp-126Ch]@873
  void *v2440; // [sp+2B88h] [bp-125Ch]@871
  _DWORD v2441; // [sp+2B9Ch] [bp-1248h]@827
  _DWORD v2442; // [sp+2BA0h] [bp-1244h]@827
  _DWORD v2443; // [sp+2BACh] [bp-1238h]@827
  void *v2444; // [sp+2BB0h] [bp-1234h]@827
  void *v2445; // [sp+2BB4h] [bp-1230h]@827
  _DWORD v2446; // [sp+2BB8h] [bp-122Ch]@827
  _DWORD v2447; // [sp+2BBCh] [bp-1228h]@827
  _DWORD v2448; // [sp+2BC4h] [bp-1220h]@858
  void *v2449; // [sp+2BE0h] [bp-1204h]@856
  void *v2450; // [sp+2BF0h] [bp-11F4h]@854
  _DWORD v2451; // [sp+2C08h] [bp-11DCh]@807
  _DWORD v2452; // [sp+2C0Ch] [bp-11D8h]@807
  _DWORD v2453; // [sp+2C18h] [bp-11CCh]@807
  _DWORD v2454; // [sp+2C20h] [bp-11C4h]@807
  _DWORD v2455; // [sp+2C28h] [bp-11BCh]@807
  _DWORD v2456; // [sp+2C2Ch] [bp-11B8h]@807
  _DWORD v2457; // [sp+2C34h] [bp-11B0h]@825
  void *v2458; // [sp+2C50h] [bp-1194h]@823
  void *v2459; // [sp+2C60h] [bp-1184h]@821
  _DWORD v2460; // [sp+2C78h] [bp-116Ch]@787
  _DWORD v2461; // [sp+2C7Ch] [bp-1168h]@787
  _DWORD v2462; // [sp+2C88h] [bp-115Ch]@787
  _DWORD v2463; // [sp+2C90h] [bp-1154h]@787
  _DWORD v2464; // [sp+2C98h] [bp-114Ch]@787
  _DWORD v2465; // [sp+2C9Ch] [bp-1148h]@787
  _DWORD v2466; // [sp+2CA4h] [bp-1140h]@805
  void *v2467; // [sp+2CC0h] [bp-1124h]@803
  void *v2468; // [sp+2CD0h] [bp-1114h]@801
  _DWORD v2469; // [sp+2CE8h] [bp-10FCh]@769
  _DWORD v2470; // [sp+2CECh] [bp-10F8h]@769
  _DWORD v2471; // [sp+2CF8h] [bp-10ECh]@769
  _DWORD v2472; // [sp+2CFCh] [bp-10E8h]@769
  _DWORD v2473; // [sp+2D04h] [bp-10E0h]@785
  void *v2474; // [sp+2D20h] [bp-10C4h]@783
  void *v2475; // [sp+2D30h] [bp-10B4h]@781
  char v2476; // [sp+2D44h] [bp-10A0h]@734
  _DWORD v2477; // [sp+2D4Ch] [bp-1098h]@749
  void *v2478; // [sp+2D68h] [bp-107Ch]@747
  void *v2479; // [sp+2D78h] [bp-106Ch]@745
  _DWORD v2480; // [sp+2D8Ch] [bp-1058h]@734
  _DWORD v2481; // [sp+2D90h] [bp-1054h]@734
  _DWORD v2482; // [sp+2D9Ch] [bp-1048h]@734
  _DWORD v2483; // [sp+2DA4h] [bp-1040h]@734
  _DWORD v2484; // [sp+2DACh] [bp-1038h]@734
  void *v2485; // [sp+2DB0h] [bp-1034h]@734
  void *v2486; // [sp+2DB4h] [bp-1030h]@751
  _DWORD v2487; // [sp+2DBCh] [bp-1028h]@722
  _DWORD v2488; // [sp+2DC4h] [bp-1020h]@732
  void *v2489; // [sp+2DE0h] [bp-1004h]@730
  void *v2490; // [sp+2DF0h] [bp-FF4h]@728
  _DWORD v2491; // [sp+2E04h] [bp-FE0h]@722
  _DWORD v2492; // [sp+2E0Ch] [bp-FD8h]@726
  void *v2493; // [sp+2E28h] [bp-FBCh]@724
  void *v2494; // [sp+2E38h] [bp-FACh]@722
  char *v2495; // [sp+2E4Ch] [bp-F98h]@722
  int v2496; // [sp+2E50h] [bp-F94h]@722
  int v2497; // [sp+2E54h] [bp-F90h]@722
  _DWORD v2498; // [sp+2E58h] [bp-F8Ch]@702
  _DWORD v2499; // [sp+2E5Ch] [bp-F88h]@702
  _DWORD v2500; // [sp+2E68h] [bp-F7Ch]@702
  _DWORD v2501; // [sp+2E70h] [bp-F74h]@702
  _DWORD v2502; // [sp+2E78h] [bp-F6Ch]@702
  _DWORD v2503; // [sp+2E7Ch] [bp-F68h]@702
  _DWORD v2504; // [sp+2E84h] [bp-F60h]@720
  void *v2505; // [sp+2EA0h] [bp-F44h]@718
  void *v2506; // [sp+2EB0h] [bp-F34h]@716
  _DWORD v2507; // [sp+2EC8h] [bp-F1Ch]@682
  _DWORD v2508; // [sp+2ECCh] [bp-F18h]@682
  _DWORD v2509; // [sp+2ED8h] [bp-F0Ch]@682
  _DWORD v2510; // [sp+2EE0h] [bp-F04h]@682
  _DWORD v2511; // [sp+2EE8h] [bp-EFCh]@682
  _DWORD v2512; // [sp+2EECh] [bp-EF8h]@682
  _DWORD v2513; // [sp+2EF4h] [bp-EF0h]@700
  void *v2514; // [sp+2F10h] [bp-ED4h]@698
  void *v2515; // [sp+2F20h] [bp-EC4h]@696
  _DWORD v2516; // [sp+2F38h] [bp-EACh]@662
  _DWORD v2517; // [sp+2F3Ch] [bp-EA8h]@662
  _DWORD v2518; // [sp+2F48h] [bp-E9Ch]@662
  _DWORD v2519; // [sp+2F50h] [bp-E94h]@662
  _DWORD v2520; // [sp+2F58h] [bp-E8Ch]@662
  _DWORD v2521; // [sp+2F5Ch] [bp-E88h]@662
  _DWORD v2522; // [sp+2F64h] [bp-E80h]@680
  void *v2523; // [sp+2F80h] [bp-E64h]@678
  void *v2524; // [sp+2F90h] [bp-E54h]@676
  _DWORD v2525; // [sp+2FA8h] [bp-E3Ch]@642
  _DWORD v2526; // [sp+2FACh] [bp-E38h]@642
  _DWORD v2527; // [sp+2FB8h] [bp-E2Ch]@642
  _DWORD v2528; // [sp+2FC0h] [bp-E24h]@642
  _DWORD v2529; // [sp+2FC8h] [bp-E1Ch]@642
  _DWORD v2530; // [sp+2FCCh] [bp-E18h]@642
  _DWORD v2531; // [sp+2FD4h] [bp-E10h]@660
  void *v2532; // [sp+2FF0h] [bp-DF4h]@658
  void *v2533; // [sp+3000h] [bp-DE4h]@656
  _DWORD v2534; // [sp+3018h] [bp-DCCh]@622
  _DWORD v2535; // [sp+301Ch] [bp-DC8h]@622
  _DWORD v2536; // [sp+3028h] [bp-DBCh]@622
  _DWORD v2537; // [sp+3030h] [bp-DB4h]@622
  _DWORD v2538; // [sp+3038h] [bp-DACh]@622
  _DWORD v2539; // [sp+303Ch] [bp-DA8h]@622
  _DWORD v2540; // [sp+3044h] [bp-DA0h]@640
  void *v2541; // [sp+3060h] [bp-D84h]@638
  void *v2542; // [sp+3070h] [bp-D74h]@636
  _DWORD v2543; // [sp+3088h] [bp-D5Ch]@603
  _DWORD v2544; // [sp+308Ch] [bp-D58h]@603
  _DWORD v2545; // [sp+3098h] [bp-D4Ch]@603
  _DWORD v2546; // [sp+30A0h] [bp-D44h]@603
  _DWORD v2547; // [sp+30A4h] [bp-D40h]@603
  _DWORD v2548; // [sp+30ACh] [bp-D38h]@620
  void *v2549; // [sp+30C8h] [bp-D1Ch]@618
  void *v2550; // [sp+30D8h] [bp-D0Ch]@616
  _DWORD v2551; // [sp+30F0h] [bp-CF4h]@584
  _DWORD v2552; // [sp+30F4h] [bp-CF0h]@584
  _DWORD v2553; // [sp+3100h] [bp-CE4h]@584
  _DWORD v2554; // [sp+3108h] [bp-CDCh]@584
  _DWORD v2555; // [sp+310Ch] [bp-CD8h]@584
  _DWORD v2556; // [sp+3114h] [bp-CD0h]@601
  void *v2557; // [sp+3130h] [bp-CB4h]@599
  void *v2558; // [sp+3140h] [bp-CA4h]@597
  _DWORD v2559; // [sp+3158h] [bp-C8Ch]@564
  _DWORD v2560; // [sp+315Ch] [bp-C88h]@564
  _DWORD v2561; // [sp+3168h] [bp-C7Ch]@564
  _DWORD v2562; // [sp+3170h] [bp-C74h]@564
  _DWORD v2563; // [sp+3178h] [bp-C6Ch]@564
  _DWORD v2564; // [sp+317Ch] [bp-C68h]@564
  _DWORD v2565; // [sp+31A0h] [bp-C44h]@6
  _DWORD v2566; // [sp+31C8h] [bp-C1Ch]@545
  _DWORD v2567; // [sp+31D8h] [bp-C0Ch]@545
  _DWORD v2568; // [sp+31E0h] [bp-C04h]@545
  _DWORD v2569; // [sp+31E4h] [bp-C00h]@545
  _DWORD v2570; // [sp+3230h] [bp-BB4h]@526
  _DWORD v2571; // [sp+3240h] [bp-BA4h]@526
  _DWORD v2572; // [sp+3248h] [bp-B9Ch]@526
  _DWORD v2573; // [sp+324Ch] [bp-B98h]@526
  _DWORD v2574; // [sp+3298h] [bp-B4Ch]@507
  _DWORD v2575; // [sp+32A8h] [bp-B3Ch]@507
  _DWORD v2576; // [sp+32B0h] [bp-B34h]@507
  _DWORD v2577; // [sp+32B4h] [bp-B30h]@507
  _DWORD v2578; // [sp+3300h] [bp-AE4h]@489
  _DWORD v2579; // [sp+3310h] [bp-AD4h]@489
  _DWORD v2580; // [sp+3314h] [bp-AD0h]@489
  _DWORD v2581; // [sp+3360h] [bp-A84h]@471
  _DWORD v2582; // [sp+3370h] [bp-A74h]@471
  _DWORD v2583; // [sp+3374h] [bp-A70h]@471
  _DWORD v2584; // [sp+33C0h] [bp-A24h]@453
  _DWORD v2585; // [sp+33D0h] [bp-A14h]@453
  _DWORD v2586; // [sp+33D4h] [bp-A10h]@453
  _DWORD v2587; // [sp+3420h] [bp-9C4h]@435
  _DWORD v2588; // [sp+3430h] [bp-9B4h]@435
  _DWORD v2589; // [sp+3434h] [bp-9B0h]@435
  _DWORD v2590; // [sp+3480h] [bp-964h]@417
  _DWORD v2591; // [sp+3490h] [bp-954h]@417
  _DWORD v2592; // [sp+3494h] [bp-950h]@417
  _DWORD v2593; // [sp+34DCh] [bp-908h]@384
  _DWORD v2594; // [sp+3528h] [bp-8BCh]@384
  _DWORD v2595; // [sp+3538h] [bp-8ACh]@392
  _DWORD v2596; // [sp+353Ch] [bp-8A8h]@392
  char v2597; // [sp+3584h] [bp-860h]@359
  _DWORD v2598; // [sp+358Ch] [bp-858h]@374
  void *v2599; // [sp+35A8h] [bp-83Ch]@372
  void *v2600; // [sp+35B8h] [bp-82Ch]@370
  _DWORD v2601; // [sp+35D0h] [bp-814h]@359
  _DWORD v2602; // [sp+35D4h] [bp-810h]@359
  _DWORD v2603; // [sp+35E0h] [bp-804h]@359
  _DWORD v2604; // [sp+35E8h] [bp-7FCh]@359
  _DWORD v2605; // [sp+35ECh] [bp-7F8h]@359
  _DWORD v2606; // [sp+35F4h] [bp-7F0h]@382
  void *v2607; // [sp+3610h] [bp-7D4h]@380
  void *v2608; // [sp+3620h] [bp-7C4h]@378
  _DWORD v2609; // [sp+3638h] [bp-7ACh]@341
  _DWORD v2610; // [sp+363Ch] [bp-7A8h]@341
  _DWORD v2611; // [sp+3648h] [bp-79Ch]@341
  _DWORD v2612; // [sp+364Ch] [bp-798h]@341
  _DWORD v2613; // [sp+3654h] [bp-790h]@357
  void *v2614; // [sp+3670h] [bp-774h]@355
  void *v2615; // [sp+3680h] [bp-764h]@353
  _DWORD v2616; // [sp+3698h] [bp-74Ch]@323
  _DWORD v2617; // [sp+369Ch] [bp-748h]@323
  _DWORD v2618; // [sp+36A8h] [bp-73Ch]@323
  _DWORD v2619; // [sp+36ACh] [bp-738h]@323
  _DWORD v2620; // [sp+36B4h] [bp-730h]@339
  void *v2621; // [sp+36D0h] [bp-714h]@337
  void *v2622; // [sp+36E0h] [bp-704h]@335
  _DWORD v2623; // [sp+36F4h] [bp-6F0h]@299
  _DWORD v2624; // [sp+36FCh] [bp-6E8h]@314
  void *v2625; // [sp+3718h] [bp-6CCh]@312
  void *v2626; // [sp+3728h] [bp-6BCh]@310
  _DWORD v2627; // [sp+3740h] [bp-6A4h]@299
  _DWORD v2628; // [sp+3744h] [bp-6A0h]@299
  _DWORD v2629; // [sp+3750h] [bp-694h]@299
  _DWORD v2630; // [sp+3754h] [bp-690h]@299
  _DWORD v2631; // [sp+375Ch] [bp-688h]@321
  void *v2632; // [sp+3778h] [bp-66Ch]@319
  void *v2633; // [sp+3788h] [bp-65Ch]@317
  _DWORD v2634; // [sp+37A0h] [bp-644h]@281
  _DWORD v2635; // [sp+37A4h] [bp-640h]@281
  _DWORD v2636; // [sp+37B0h] [bp-634h]@281
  _DWORD v2637; // [sp+37B4h] [bp-630h]@281
  _DWORD v2638; // [sp+37BCh] [bp-628h]@297
  void *v2639; // [sp+37D8h] [bp-60Ch]@295
  void *v2640; // [sp+37E8h] [bp-5FCh]@293
  _DWORD v2641; // [sp+3800h] [bp-5E4h]@261
  _DWORD v2642; // [sp+3804h] [bp-5E0h]@261
  _DWORD v2643; // [sp+3810h] [bp-5D4h]@261
  _DWORD v2644; // [sp+3818h] [bp-5CCh]@261
  _DWORD v2645; // [sp+3820h] [bp-5C4h]@261
  _DWORD v2646; // [sp+3824h] [bp-5C0h]@261
  _DWORD v2647; // [sp+382Ch] [bp-5B8h]@279
  void *v2648; // [sp+3848h] [bp-59Ch]@277
  void *v2649; // [sp+3858h] [bp-58Ch]@275
  _DWORD v2650; // [sp+3870h] [bp-574h]@242
  _DWORD v2651; // [sp+3874h] [bp-570h]@242
  _DWORD v2652; // [sp+3880h] [bp-564h]@242
  _DWORD v2653; // [sp+3888h] [bp-55Ch]@242
  _DWORD v2654; // [sp+388Ch] [bp-558h]@242
  _DWORD v2655; // [sp+3894h] [bp-550h]@259
  void *v2656; // [sp+38B0h] [bp-534h]@257
  void *v2657; // [sp+38C0h] [bp-524h]@255
  _DWORD v2658; // [sp+38D8h] [bp-50Ch]@223
  _DWORD v2659; // [sp+38DCh] [bp-508h]@223
  _DWORD v2660; // [sp+38E8h] [bp-4FCh]@223
  _DWORD v2661; // [sp+38F0h] [bp-4F4h]@223
  _DWORD v2662; // [sp+38F4h] [bp-4F0h]@223
  _DWORD v2663; // [sp+38FCh] [bp-4E8h]@240
  void *v2664; // [sp+3918h] [bp-4CCh]@238
  void *v2665; // [sp+3928h] [bp-4BCh]@236
  _DWORD v2666; // [sp+3940h] [bp-4A4h]@204
  _DWORD v2667; // [sp+3944h] [bp-4A0h]@204
  _DWORD v2668; // [sp+3950h] [bp-494h]@204
  _DWORD v2669; // [sp+3958h] [bp-48Ch]@204
  _DWORD v2670; // [sp+395Ch] [bp-488h]@204
  _DWORD v2671; // [sp+3964h] [bp-480h]@221
  void *v2672; // [sp+3980h] [bp-464h]@219
  void *v2673; // [sp+3990h] [bp-454h]@217
  _DWORD v2674; // [sp+39A8h] [bp-43Ch]@185
  _DWORD v2675; // [sp+39ACh] [bp-438h]@185
  _DWORD v2676; // [sp+39B8h] [bp-42Ch]@185
  _DWORD v2677; // [sp+39C0h] [bp-424h]@185
  char v2678; // [sp+39C4h] [bp-420h]@185
  _DWORD v2679; // [sp+39CCh] [bp-418h]@202
  void *v2680; // [sp+39E8h] [bp-3FCh]@200
  void *v2681; // [sp+39F8h] [bp-3ECh]@198
  _DWORD v2682; // [sp+3A10h] [bp-3D4h]@167
  _DWORD v2683; // [sp+3A14h] [bp-3D0h]@167
  _DWORD v2684; // [sp+3A20h] [bp-3C4h]@167
  _DWORD v2685; // [sp+3A24h] [bp-3C0h]@167
  _DWORD v2686; // [sp+3A2Ch] [bp-3B8h]@183
  void *v2687; // [sp+3A48h] [bp-39Ch]@181
  void *v2688; // [sp+3A58h] [bp-38Ch]@179
  _DWORD v2689; // [sp+3A70h] [bp-374h]@148
  _DWORD v2690; // [sp+3A74h] [bp-370h]@148
  _DWORD v2691; // [sp+3A80h] [bp-364h]@148
  _DWORD v2692; // [sp+3A88h] [bp-35Ch]@148
  _DWORD v2693; // [sp+3A8Ch] [bp-358h]@148
  _DWORD v2694; // [sp+3A94h] [bp-350h]@165
  void *v2695; // [sp+3AB0h] [bp-334h]@163
  void *v2696; // [sp+3AC0h] [bp-324h]@161
  _DWORD v2697; // [sp+3AD8h] [bp-30Ch]@128
  _DWORD v2698; // [sp+3ADCh] [bp-308h]@128
  _DWORD v2699; // [sp+3AE8h] [bp-2FCh]@128
  _DWORD v2700; // [sp+3AF0h] [bp-2F4h]@128
  _DWORD v2701; // [sp+3AF8h] [bp-2ECh]@128
  _DWORD v2702; // [sp+3AFCh] [bp-2E8h]@128
  _DWORD v2703; // [sp+3B04h] [bp-2E0h]@146
  void *v2704; // [sp+3B20h] [bp-2C4h]@144
  void *v2705; // [sp+3B30h] [bp-2B4h]@142
  _DWORD v2706; // [sp+3B48h] [bp-29Ch]@108
  _DWORD v2707; // [sp+3B4Ch] [bp-298h]@108
  _DWORD v2708; // [sp+3B58h] [bp-28Ch]@108
  _DWORD v2709; // [sp+3B60h] [bp-284h]@108
  _DWORD v2710; // [sp+3B68h] [bp-27Ch]@108
  _DWORD v2711; // [sp+3B6Ch] [bp-278h]@108
  _DWORD v2712; // [sp+3B74h] [bp-270h]@126
  void *v2713; // [sp+3B90h] [bp-254h]@124
  void *v2714; // [sp+3BA0h] [bp-244h]@122
  _DWORD v2715; // [sp+3BB8h] [bp-22Ch]@89
  _DWORD v2716; // [sp+3BBCh] [bp-228h]@89
  _DWORD v2717; // [sp+3BC8h] [bp-21Ch]@89
  _DWORD v2718; // [sp+3BD0h] [bp-214h]@89
  _DWORD v2719; // [sp+3BD4h] [bp-210h]@89
  _DWORD v2720; // [sp+3BDCh] [bp-208h]@106
  void *v2721; // [sp+3BF8h] [bp-1ECh]@104
  void *v2722; // [sp+3C08h] [bp-1DCh]@102
  _DWORD v2723; // [sp+3C20h] [bp-1C4h]@70
  _DWORD v2724; // [sp+3C24h] [bp-1C0h]@70
  _DWORD v2725; // [sp+3C30h] [bp-1B4h]@70
  _DWORD v2726; // [sp+3C38h] [bp-1ACh]@70
  _DWORD v2727; // [sp+3C3Ch] [bp-1A8h]@70
  _DWORD v2728; // [sp+3C44h] [bp-1A0h]@87
  void *v2729; // [sp+3C60h] [bp-184h]@85
  void *v2730; // [sp+3C70h] [bp-174h]@83
  _DWORD v2731; // [sp+3C88h] [bp-15Ch]@51
  _DWORD v2732; // [sp+3C8Ch] [bp-158h]@51
  _DWORD v2733; // [sp+3C98h] [bp-14Ch]@51
  _DWORD v2734; // [sp+3CA0h] [bp-144h]@51
  _DWORD v2735; // [sp+3CA4h] [bp-140h]@51
  _DWORD v2736; // [sp+3CACh] [bp-138h]@68
  void *v2737; // [sp+3CC8h] [bp-11Ch]@66
  void *v2738; // [sp+3CD8h] [bp-10Ch]@64
  _DWORD v2739; // [sp+3CF0h] [bp-F4h]@34
  _DWORD v2740; // [sp+3CF4h] [bp-F0h]@34
  _DWORD v2741; // [sp+3CFCh] [bp-E8h]@34
  _DWORD v2742; // [sp+3D04h] [bp-E0h]@49
  void *v2743; // [sp+3D20h] [bp-C4h]@47
  void *v2744; // [sp+3D30h] [bp-B4h]@45
  _DWORD v2745; // [sp+3D48h] [bp-9Ch]@16
  _DWORD v2746; // [sp+3D4Ch] [bp-98h]@16
  _DWORD v2747; // [sp+3D58h] [bp-8Ch]@16
  _DWORD v2748; // [sp+3D5Ch] [bp-88h]@16
  _DWORD v2749; // [sp+3D64h] [bp-80h]@32
  void *v2750; // [sp+3D80h] [bp-64h]@30
  void *v2751; // [sp+3D90h] [bp-54h]@28
  _DWORD *v2752; // [sp+3DA4h] [bp-40h]@14
  FireworksRecipe *v2753; // [sp+3DA8h] [bp-3Ch]@10
  _DWORD *v2754; // [sp+3DACh] [bp-38h]@6
  _DWORD *v2755; // [sp+3DB0h] [bp-34h]@8
  RepairItemRecipe *v2756; // [sp+3DB4h] [bp-30h]@12

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = *(_QWORD *)this;
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 1) = v2;
  std::_Rb_tree<ItemInstance,std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>,std::_Select1st<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>,SortItemInstanceIdAux,std::allocator<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>>::_M_erase(
    (int)v1 + 12,
    *((_DWORD *)v1 + 5));
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = (char *)v1 + 16;
  *(_QWORD *)((char *)v1 + 28) = (unsigned int)v1 + 16;
  ToolRecipes::addRecipes(v1, 0);
  WeaponRecipes::addRecipes(v1, v4);
  OreRecipes::addRecipes(v1, v5);
  FoodRecipes::addRecipes(v1, v6);
  StructureRecipes::addRecipes(v1, v7);
  ArmorRecipes::addRecipes(v1, v8);
  ClothDyeRecipes::addRecipes(v1, v9);
  BannerRecipes::addRecipes(v1, v10);
  v11 = operator new(0x50u);
  BannerDuplicateRecipe::BannerDuplicateRecipe(v11);
  v12 = &v2565;
  v2754 = v11;
  Recipes::_addItemRecipe((int)v1, (int *)&v2754);
  if ( v2754 )
    (*(void (**)(void))(*v2754 + 4))();
  v13 = operator new(0x50u);
  BannerAddPatternRecipe::BannerAddPatternRecipe(v13);
  v2755 = v13;
  Recipes::_addItemRecipe((int)v1, (int *)&v2755);
  if ( v2755 )
    (*(void (**)(void))(*v2755 + 4))();
  v14 = (FireworksRecipe *)operator new(0x50u);
  FireworksRecipe::FireworksRecipe(v14, 0);
  v2753 = v14;
  Recipes::_addItemRecipe((int)v1, (int *)&v2753);
  if ( v2753 )
    (*(void (**)(void))(*(_DWORD *)v2753 + 4))();
  v2753 = 0;
  Recipes::_addMapRecipes(v1);
  v15 = (RepairItemRecipe *)operator new(0x50u);
  RepairItemRecipe::RepairItemRecipe(v15, 0);
  v2756 = v15;
  Recipes::_addItemRecipe((int)v1, (int *)&v2756);
  if ( v2756 )
    (*(void (**)(void))(*(_DWORD *)v2756 + 4))();
  v16 = operator new(0x50u);
  BookCloningRecipe::BookCloningRecipe(v16);
  v2752 = v16;
  Recipes::_addItemRecipe((int)v1, (int *)&v2752);
  if ( v2752 )
    (*(void (**)(void))(*v2752 + 4))();
  v2752 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2748, Item::mPaper, 3);
  sub_21E94B4((void **)&v2747, "###");
  definition<Item *>((int)&v2745, 35, Item::mReeds);
  Recipes::addShapedRecipe((int)v1, (int)&v2748, &v2747);
  v17 = v2745;
  v18 = v2746;
  if ( v2745 != v2746 )
      v19 = *(void **)(v17 + 60);
      if ( v19 )
        operator delete(v19);
      v20 = *(void **)(v17 + 44);
      if ( v20 )
        operator delete(v20);
      v21 = *(_DWORD *)(v17 + 16);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      *(_DWORD *)(v17 + 16) = 0;
      v17 += 88;
    while ( v18 != v17 );
    v17 = v2745;
  if ( v17 )
    operator delete((void *)v17);
  v22 = (void *)(v2747 - 12);
  if ( (int *)(v2747 - 12) != &dword_28898C0 )
    v598 = (unsigned int *)(v2747 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v599 = __ldrex(v598);
      while ( __strex(v599 - 1, v598) );
    else
      v599 = (*v598)--;
    if ( v599 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  if ( v2751 )
    operator delete(v2751);
  if ( v2750 )
    operator delete(v2750);
  if ( v2749 )
    (*(void (**)(void))(*(_DWORD *)v2749 + 4))();
  v2749 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2741, Item::mBook, 1);
  definition<Item *,Item *,Item *,Item *>(
    (int)&v2739,
    0,
    Item::mPaper,
    Item::mLeather);
  Recipes::addShapelessRecipe((int)v1, (int)&v2741, (unsigned __int64 *)&v2739);
  v23 = v2739;
  v24 = v2740;
  if ( v2739 != v2740 )
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
    v23 = v2739;
  if ( v23 )
    operator delete((void *)v23);
  if ( v2744 )
    operator delete(v2744);
  if ( v2743 )
    operator delete(v2743);
  if ( v2742 )
    (*(void (**)(void))(*(_DWORD *)v2742 + 4))();
  v2742 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2735, Block::mCobblestoneWall, 6, 0);
  sub_21E94B4((void **)&v2734, "###");
  sub_21E94B4((void **)&v2733, "###");
  definition<Block const*>((int)&v2731, 35, Block::mCobblestone);
  Recipes::addShapedRecipe((int)v1, (int)&v2735, &v2734, &v2733);
  v28 = v2731;
  v29 = v2732;
  if ( v2731 != v2732 )
      v30 = *(void **)(v28 + 60);
      if ( v30 )
        operator delete(v30);
      v31 = *(void **)(v28 + 44);
      if ( v31 )
        operator delete(v31);
      v32 = *(_DWORD *)(v28 + 16);
      if ( v32 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v32 + 4))(v32);
      *(_DWORD *)(v28 + 16) = 0;
      v28 += 88;
    while ( v29 != v28 );
    v28 = v2731;
  if ( v28 )
    operator delete((void *)v28);
  v33 = (void *)(v2733 - 12);
  if ( (int *)(v2733 - 12) != &dword_28898C0 )
    v600 = (unsigned int *)(v2733 - 4);
        v601 = __ldrex(v600);
      while ( __strex(v601 - 1, v600) );
      v601 = (*v600)--;
    if ( v601 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v2734 - 12);
  if ( (int *)(v2734 - 12) != &dword_28898C0 )
    v602 = (unsigned int *)(v2734 - 4);
        v603 = __ldrex(v602);
      while ( __strex(v603 - 1, v602) );
      v603 = (*v602)--;
    if ( v603 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  if ( v2738 )
    operator delete(v2738);
  if ( v2737 )
    operator delete(v2737);
  if ( v2736 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2736 + 4))(v2736);
  v2736 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2727, Block::mCobblestoneWall, 6, 1);
  sub_21E94B4((void **)&v2726, "###");
  sub_21E94B4((void **)&v2725, "###");
  definition<Block const*>((int)&v2723, 35, Block::mMossyCobblestone);
  Recipes::addShapedRecipe((int)v1, (int)&v2727, &v2726, &v2725);
  v35 = v2723;
  v36 = v2724;
  if ( v2723 != v2724 )
      v37 = *(void **)(v35 + 60);
      if ( v37 )
        operator delete(v37);
      v38 = *(void **)(v35 + 44);
      if ( v38 )
        operator delete(v38);
      v39 = *(_DWORD *)(v35 + 16);
      if ( v39 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v39 + 4))(v39);
      *(_DWORD *)(v35 + 16) = 0;
      v35 += 88;
    while ( v36 != v35 );
    v35 = v2723;
  if ( v35 )
    operator delete((void *)v35);
  v40 = (void *)(v2725 - 12);
  if ( (int *)(v2725 - 12) != &dword_28898C0 )
    v604 = (unsigned int *)(v2725 - 4);
        v605 = __ldrex(v604);
      while ( __strex(v605 - 1, v604) );
      v605 = (*v604)--;
    if ( v605 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v2726 - 12);
  if ( (int *)(v2726 - 12) != &dword_28898C0 )
    v606 = (unsigned int *)(v2726 - 4);
        v607 = __ldrex(v606);
      while ( __strex(v607 - 1, v606) );
      v607 = (*v606)--;
    if ( v607 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  if ( v2730 )
    operator delete(v2730);
  if ( v2729 )
    operator delete(v2729);
  if ( v2728 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2728 + 4))(v2728);
  v2728 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2719, Block::mNetherFence, 6);
  sub_21E94B4((void **)&v2718, "###");
  sub_21E94B4((void **)&v2717, "###");
  definition<Block const*>((int)&v2715, 35, Block::mNetherBrick);
  Recipes::addShapedRecipe((int)v1, (int)&v2719, &v2718, &v2717);
  v42 = v2715;
  v43 = v2716;
  if ( v2715 != v2716 )
      v44 = *(void **)(v42 + 60);
      if ( v44 )
        operator delete(v44);
      v45 = *(void **)(v42 + 44);
      if ( v45 )
        operator delete(v45);
      v46 = *(_DWORD *)(v42 + 16);
      if ( v46 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v46 + 4))(v46);
      *(_DWORD *)(v42 + 16) = 0;
      v42 += 88;
    while ( v43 != v42 );
    v42 = v2715;
  if ( v42 )
    operator delete((void *)v42);
  v47 = (void *)(v2717 - 12);
  if ( (int *)(v2717 - 12) != &dword_28898C0 )
    v608 = (unsigned int *)(v2717 - 4);
        v609 = __ldrex(v608);
      while ( __strex(v609 - 1, v608) );
      v609 = (*v608)--;
    if ( v609 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v2718 - 12);
  if ( (int *)(v2718 - 12) != &dword_28898C0 )
    v610 = (unsigned int *)(v2718 - 4);
        v611 = __ldrex(v610);
      while ( __strex(v611 - 1, v610) );
      v611 = (*v610)--;
    if ( v611 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  if ( v2722 )
    operator delete(v2722);
  if ( v2721 )
    operator delete(v2721);
  if ( v2720 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2720 + 4))(v2720);
  v2720 = 0;
  Recipes::_addFenceRecipes(v1);
  Recipes::_addGateRecipes(v1);
  ItemInstance::ItemInstance((ItemInstance *)&v2711, Block::mAnvil, 1, 0);
  sub_21E94B4((void **)&v2710, "###");
  sub_21E94B4((void **)&v2709, " X ");
  sub_21E94B4((void **)&v2708, "XXX");
  definition<Block const*,Item *>((int)&v2706, 35, Block::mIronBlock, 88, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v1, (int)&v2711, &v2710, &v2709, &v2708);
  v49 = v2706;
  v50 = v2707;
  if ( v2706 != v2707 )
      v51 = *(void **)(v49 + 60);
      if ( v51 )
        operator delete(v51);
      v52 = *(void **)(v49 + 44);
      if ( v52 )
        operator delete(v52);
      v53 = *(_DWORD *)(v49 + 16);
      if ( v53 )
        (*(void (**)(void))(*(_DWORD *)v53 + 4))();
      *(_DWORD *)(v49 + 16) = 0;
      v49 += 88;
    while ( v50 != v49 );
    v49 = v2706;
  if ( v49 )
    operator delete((void *)v49);
  v54 = (void *)(v2708 - 12);
  if ( (int *)(v2708 - 12) != &dword_28898C0 )
    v612 = (unsigned int *)(v2708 - 4);
        v613 = __ldrex(v612);
      while ( __strex(v613 - 1, v612) );
      v613 = (*v612)--;
    if ( v613 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v2709 - 12);
  if ( (int *)(v2709 - 12) != &dword_28898C0 )
    v614 = (unsigned int *)(v2709 - 4);
        v615 = __ldrex(v614);
      while ( __strex(v615 - 1, v614) );
      v615 = (*v614)--;
    if ( v615 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v2710 - 12);
  if ( (int *)(v2710 - 12) != &dword_28898C0 )
    v616 = (unsigned int *)(v2710 - 4);
        v617 = __ldrex(v616);
      while ( __strex(v617 - 1, v616) );
      v617 = (*v616)--;
    if ( v617 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  if ( v2714 )
    operator delete(v2714);
  if ( v2713 )
    operator delete(v2713);
  if ( v2712 )
    (*(void (**)(void))(*(_DWORD *)v2712 + 4))();
  v2712 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2702, Block::mBookshelf, 1);
  sub_21E94B4((void **)&v2701, "###");
  sub_21E94B4((void **)&v2700, "XXX");
  sub_21E94B4((void **)&v2699, "###");
  definition<Block const*,Item *>((int)&v2697, 35, Block::mWoodPlanks, 88, Item::mBook);
  Recipes::addShapedRecipe((int)v1, (int)&v2702, &v2701, &v2700, &v2699);
  v57 = v2697;
  v58 = v2698;
  if ( v2697 != v2698 )
      v59 = *(void **)(v57 + 60);
      if ( v59 )
        operator delete(v59);
      v60 = *(void **)(v57 + 44);
      if ( v60 )
        operator delete(v60);
      v61 = *(_DWORD *)(v57 + 16);
      if ( v61 )
        (*(void (**)(void))(*(_DWORD *)v61 + 4))();
      *(_DWORD *)(v57 + 16) = 0;
      v57 += 88;
    while ( v58 != v57 );
    v57 = v2697;
  if ( v57 )
    operator delete((void *)v57);
  v62 = (void *)(v2699 - 12);
  if ( (int *)(v2699 - 12) != &dword_28898C0 )
    v618 = (unsigned int *)(v2699 - 4);
        v619 = __ldrex(v618);
      while ( __strex(v619 - 1, v618) );
      v619 = (*v618)--;
    if ( v619 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v2700 - 12);
  if ( (int *)(v2700 - 12) != &dword_28898C0 )
    v620 = (unsigned int *)(v2700 - 4);
        v621 = __ldrex(v620);
      while ( __strex(v621 - 1, v620) );
      v621 = (*v620)--;
    if ( v621 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v2701 - 12);
  if ( (int *)(v2701 - 12) != &dword_28898C0 )
    v622 = (unsigned int *)(v2701 - 4);
        v623 = __ldrex(v622);
      while ( __strex(v623 - 1, v622) );
      v623 = (*v622)--;
    if ( v623 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  if ( v2705 )
    operator delete(v2705);
  if ( v2704 )
    operator delete(v2704);
  if ( v2703 )
    (*(void (**)(void))(*(_DWORD *)v2703 + 4))();
  v2703 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2693, Block::mSnow, 1);
  sub_21E94B4((void **)&v2692, "##");
  sub_21E94B4((void **)&v2691, "##");
  definition<Item *>((int)&v2689, 35, Item::mSnowBall);
  Recipes::addShapedRecipe((int)v1, (int)&v2693, &v2692, &v2691);
  v65 = v2689;
  v66 = v2690;
  if ( v2689 != v2690 )
      v67 = *(void **)(v65 + 60);
      if ( v67 )
        operator delete(v67);
      v68 = *(void **)(v65 + 44);
      if ( v68 )
        operator delete(v68);
      v69 = *(_DWORD *)(v65 + 16);
      if ( v69 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v69 + 4))(v69, *(_DWORD *)(*(_DWORD *)v69 + 4));
      *(_DWORD *)(v65 + 16) = 0;
      v65 += 88;
    while ( v66 != v65 );
    v65 = v2689;
  if ( v65 )
    operator delete((void *)v65);
  v70 = (void *)(v2691 - 12);
  if ( (int *)(v2691 - 12) != &dword_28898C0 )
    v624 = (unsigned int *)(v2691 - 4);
        v625 = __ldrex(v624);
      while ( __strex(v625 - 1, v624) );
      v625 = (*v624)--;
    if ( v625 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  v71 = (void *)(v2692 - 12);
  if ( (int *)(v2692 - 12) != &dword_28898C0 )
    v626 = (unsigned int *)(v2692 - 4);
        v627 = __ldrex(v626);
      while ( __strex(v627 - 1, v626) );
      v627 = (*v626)--;
    if ( v627 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  if ( v2696 )
    operator delete(v2696);
  if ( v2695 )
    operator delete(v2695);
  if ( v2694 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2694 + 4))(v2694, *(_DWORD *)(*(_DWORD *)v2694 + 4));
  v2694 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2685, Block::mTopSnow, 6);
  sub_21E94B4((void **)&v2684, "###");
  definition<Block const*>((int)&v2682, 35, Block::mSnow);
  Recipes::addShapedRecipe((int)v1, (int)&v2685, &v2684);
  v72 = v2682;
  v73 = v2683;
  if ( v2682 != v2683 )
      v74 = *(void **)(v72 + 60);
      if ( v74 )
        operator delete(v74);
      v75 = *(void **)(v72 + 44);
      if ( v75 )
        operator delete(v75);
      v76 = *(_DWORD *)(v72 + 16);
      if ( v76 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v76 + 4))(v76, *(_DWORD *)(*(_DWORD *)v76 + 4));
      *(_DWORD *)(v72 + 16) = 0;
      v72 += 88;
    while ( v73 != v72 );
    v72 = v2682;
  if ( v72 )
    operator delete((void *)v72);
  v77 = (void *)(v2684 - 12);
  if ( (int *)(v2684 - 12) != &dword_28898C0 )
    v628 = (unsigned int *)(v2684 - 4);
        v629 = __ldrex(v628);
      while ( __strex(v629 - 1, v628) );
      v629 = (*v628)--;
    if ( v629 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  if ( v2688 )
    operator delete(v2688);
  if ( v2687 )
    operator delete(v2687);
  if ( v2686 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2686 + 4))(v2686, *(_DWORD *)(*(_DWORD *)v2686 + 4));
  v2686 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2678, Block::mClay, 1);
  sub_21E94B4((void **)&v2677, "##");
  sub_21E94B4((void **)&v2676, "##");
  definition<Item *>((int)&v2674, 35, Item::mClay);
  Recipes::addShapedRecipe((int)v1, (int)&v2678, &v2677, &v2676);
  v78 = v2674;
  v79 = v2675;
  if ( v2674 != v2675 )
      v80 = *(void **)(v78 + 60);
      if ( v80 )
        operator delete(v80);
      v81 = *(void **)(v78 + 44);
      if ( v81 )
        operator delete(v81);
      v82 = *(_DWORD *)(v78 + 16);
      if ( v82 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v82 + 4))(v82, *(_DWORD *)(*(_DWORD *)v82 + 4));
      *(_DWORD *)(v78 + 16) = 0;
      v78 += 88;
    while ( v79 != v78 );
    v78 = v2674;
  if ( v78 )
    operator delete((void *)v78);
  v83 = (void *)(v2676 - 12);
  if ( (int *)(v2676 - 12) != &dword_28898C0 )
    v630 = (unsigned int *)(v2676 - 4);
        v631 = __ldrex(v630);
      while ( __strex(v631 - 1, v630) );
      v631 = (*v630)--;
    if ( v631 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = (void *)(v2677 - 12);
  if ( (int *)(v2677 - 12) != &dword_28898C0 )
    v632 = (unsigned int *)(v2677 - 4);
        v633 = __ldrex(v632);
      while ( __strex(v633 - 1, v632) );
      v633 = (*v632)--;
    if ( v633 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  if ( v2681 )
    operator delete(v2681);
  if ( v2680 )
    operator delete(v2680);
  if ( v2679 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2679 + 4))(v2679, *(_DWORD *)(*(_DWORD *)v2679 + 4));
  v2679 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2670, Block::mBrick, 1);
  sub_21E94B4((void **)&v2669, "##");
  sub_21E94B4((void **)&v2668, "##");
  definition<Item *>((int)&v2666, 35, Item::mBrick);
  Recipes::addShapedRecipe((int)v1, (int)&v2670, &v2669, &v2668);
  v85 = v2666;
  v86 = v2667;
  if ( v2666 != v2667 )
      v87 = *(void **)(v85 + 60);
      if ( v87 )
        operator delete(v87);
      v88 = *(void **)(v85 + 44);
      if ( v88 )
        operator delete(v88);
      v89 = *(_DWORD *)(v85 + 16);
      if ( v89 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v89 + 4))(v89, *(_DWORD *)(*(_DWORD *)v89 + 4));
      *(_DWORD *)(v85 + 16) = 0;
      v85 += 88;
    while ( v86 != v85 );
    v85 = v2666;
  if ( v85 )
    operator delete((void *)v85);
  v90 = (void *)(v2668 - 12);
  if ( (int *)(v2668 - 12) != &dword_28898C0 )
    v634 = (unsigned int *)(v2668 - 4);
        v635 = __ldrex(v634);
      while ( __strex(v635 - 1, v634) );
      v635 = (*v634)--;
    if ( v635 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v91 = (void *)(v2669 - 12);
  if ( (int *)(v2669 - 12) != &dword_28898C0 )
    v636 = (unsigned int *)(v2669 - 4);
        v637 = __ldrex(v636);
      while ( __strex(v637 - 1, v636) );
      v637 = (*v636)--;
    if ( v637 <= 0 )
      j_j_j_j__ZdlPv_9(v91);
  if ( v2673 )
    operator delete(v2673);
  if ( v2672 )
    operator delete(v2672);
  if ( v2671 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2671 + 4))(v2671, *(_DWORD *)(*(_DWORD *)v2671 + 4));
  v2671 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2662, Block::mGlowStone, 1);
  sub_21E94B4((void **)&v2661, "##");
  sub_21E94B4((void **)&v2660, "##");
  definition<Item *>((int)&v2658, 35, Item::mYellowDust);
  Recipes::addShapedRecipe((int)v1, (int)&v2662, &v2661, &v2660);
  v92 = v2658;
  v93 = v2659;
  if ( v2658 != v2659 )
      v94 = *(void **)(v92 + 60);
      if ( v94 )
        operator delete(v94);
      v95 = *(void **)(v92 + 44);
      if ( v95 )
        operator delete(v95);
      v96 = *(_DWORD *)(v92 + 16);
      if ( v96 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v96 + 4))(v96, *(_DWORD *)(*(_DWORD *)v96 + 4));
      *(_DWORD *)(v92 + 16) = 0;
      v92 += 88;
    while ( v93 != v92 );
    v92 = v2658;
  if ( v92 )
    operator delete((void *)v92);
  v97 = (void *)(v2660 - 12);
  if ( (int *)(v2660 - 12) != &dword_28898C0 )
    v638 = (unsigned int *)(v2660 - 4);
        v639 = __ldrex(v638);
      while ( __strex(v639 - 1, v638) );
      v639 = (*v638)--;
    if ( v639 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  v98 = (void *)(v2661 - 12);
  if ( (int *)(v2661 - 12) != &dword_28898C0 )
    v640 = (unsigned int *)(v2661 - 4);
        v641 = __ldrex(v640);
      while ( __strex(v641 - 1, v640) );
      v641 = (*v640)--;
    if ( v641 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  if ( v2665 )
    operator delete(v2665);
  if ( v2664 )
    operator delete(v2664);
  if ( v2663 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2663 + 4))(v2663, *(_DWORD *)(*(_DWORD *)v2663 + 4));
  v2663 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2654, Block::mWool, 1);
  sub_21E94B4((void **)&v2653, "##");
  sub_21E94B4((void **)&v2652, "##");
  definition<Item *>((int)&v2650, 35, Item::mString);
  Recipes::addShapedRecipe((int)v1, (int)&v2654, &v2653, &v2652);
  v99 = v2650;
  v100 = v2651;
  if ( v2650 != v2651 )
      v101 = *(void **)(v99 + 60);
      if ( v101 )
        operator delete(v101);
      v102 = *(void **)(v99 + 44);
      if ( v102 )
        operator delete(v102);
      v103 = *(_DWORD *)(v99 + 16);
      if ( v103 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v103 + 4))(v103, *(_DWORD *)(*(_DWORD *)v103 + 4));
      *(_DWORD *)(v99 + 16) = 0;
      v99 += 88;
    while ( v100 != v99 );
    v99 = v2650;
  if ( v99 )
    operator delete((void *)v99);
  v104 = (void *)(v2652 - 12);
  if ( (int *)(v2652 - 12) != &dword_28898C0 )
    v642 = (unsigned int *)(v2652 - 4);
        v643 = __ldrex(v642);
      while ( __strex(v643 - 1, v642) );
      v643 = (*v642)--;
    if ( v643 <= 0 )
      j_j_j_j__ZdlPv_9(v104);
  v105 = (void *)(v2653 - 12);
  if ( (int *)(v2653 - 12) != &dword_28898C0 )
    v644 = (unsigned int *)(v2653 - 4);
        v645 = __ldrex(v644);
      while ( __strex(v645 - 1, v644) );
      v645 = (*v644)--;
    if ( v645 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
  if ( v2657 )
    operator delete(v2657);
  if ( v2656 )
    operator delete(v2656);
  if ( v2655 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2655 + 4))(v2655, *(_DWORD *)(*(_DWORD *)v2655 + 4));
  v2655 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2646, Block::mTNT, 1);
  sub_21E94B4((void **)&v2645, "X#X");
  sub_21E94B4((void **)&v2644, "#X#");
  sub_21E94B4((void **)&v2643, "X#X");
  definition<Item *,Block const*>((int)&v2641, 88, Item::mSulphur, 35, Block::mSand);
  Recipes::addShapedRecipe((int)v1, (int)&v2646, &v2645, &v2644, &v2643);
  v106 = v2641;
  v107 = v2642;
  if ( v2641 != v2642 )
      v108 = *(void **)(v106 + 60);
      if ( v108 )
        operator delete(v108);
      v109 = *(void **)(v106 + 44);
      if ( v109 )
        operator delete(v109);
      v110 = *(_DWORD *)(v106 + 16);
      if ( v110 )
        (*(void (**)(void))(*(_DWORD *)v110 + 4))();
      *(_DWORD *)(v106 + 16) = 0;
      v106 += 88;
    while ( v107 != v106 );
    v106 = v2641;
  if ( v106 )
    operator delete((void *)v106);
  v111 = (void *)(v2643 - 12);
  if ( (int *)(v2643 - 12) != &dword_28898C0 )
    v646 = (unsigned int *)(v2643 - 4);
        v647 = __ldrex(v646);
      while ( __strex(v647 - 1, v646) );
      v647 = (*v646)--;
    if ( v647 <= 0 )
      j_j_j_j__ZdlPv_9(v111);
  v112 = (void *)(v2644 - 12);
  if ( (int *)(v2644 - 12) != &dword_28898C0 )
    v648 = (unsigned int *)(v2644 - 4);
        v649 = __ldrex(v648);
      while ( __strex(v649 - 1, v648) );
      v649 = (*v648)--;
    if ( v649 <= 0 )
      j_j_j_j__ZdlPv_9(v112);
  v113 = (void *)(v2645 - 12);
  if ( (int *)(v2645 - 12) != &dword_28898C0 )
    v650 = (unsigned int *)(v2645 - 4);
        v651 = __ldrex(v650);
      while ( __strex(v651 - 1, v650) );
      v651 = (*v650)--;
    if ( v651 <= 0 )
      j_j_j_j__ZdlPv_9(v113);
  if ( v2649 )
    operator delete(v2649);
  if ( v2648 )
    operator delete(v2648);
  if ( v2647 )
    (*(void (**)(void))(*(_DWORD *)v2647 + 4))();
  v2647 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2637, Block::mStoneSlab, 6, 3);
  sub_21E94B4((void **)&v2636, "###");
  definition<Block const*>((int)&v2634, 35, Block::mCobblestone);
  Recipes::addShapedRecipe((int)v1, (int)&v2637, &v2636);
  v114 = v2634;
  v115 = v2635;
  if ( v2634 != v2635 )
      v116 = *(void **)(v114 + 60);
      if ( v116 )
        operator delete(v116);
      v117 = *(void **)(v114 + 44);
      if ( v117 )
        operator delete(v117);
      v118 = *(_DWORD *)(v114 + 16);
      if ( v118 )
        (*(void (**)(void))(*(_DWORD *)v118 + 4))();
      *(_DWORD *)(v114 + 16) = 0;
      v114 += 88;
    while ( v115 != v114 );
    v114 = v2634;
  if ( v114 )
    operator delete((void *)v114);
  v119 = (void *)(v2636 - 12);
  if ( (int *)(v2636 - 12) != &dword_28898C0 )
    v652 = (unsigned int *)(v2636 - 4);
        v653 = __ldrex(v652);
      while ( __strex(v653 - 1, v652) );
      v653 = (*v652)--;
    if ( v653 <= 0 )
      j_j_j_j__ZdlPv_9(v119);
  if ( v2640 )
    operator delete(v2640);
  if ( v2639 )
    operator delete(v2639);
  if ( v2638 )
    (*(void (**)(void))(*(_DWORD *)v2638 + 4))();
  v2638 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2630, Block::mStoneSlab, 6, 0);
  sub_21E94B4((void **)&v2629, "###");
  ItemInstance::ItemInstance((ItemInstance *)&v2623, Block::mStone, 1, 0);
  definition<ItemInstance>((int)&v2627, 35, (int)&v2623);
  Recipes::addShapedRecipe((int)v1, (int)&v2630, &v2629);
  v120 = v2627;
  v121 = v2628;
  if ( v2627 != v2628 )
      v122 = *(void **)(v120 + 60);
      if ( v122 )
        operator delete(v122);
      v123 = *(void **)(v120 + 44);
      if ( v123 )
        operator delete(v123);
      v124 = *(_DWORD *)(v120 + 16);
      if ( v124 )
        (*(void (**)(void))(*(_DWORD *)v124 + 4))();
      *(_DWORD *)(v120 + 16) = 0;
      v120 += 88;
    while ( v121 != v120 );
    v120 = v2627;
  if ( v120 )
    operator delete((void *)v120);
  if ( v2626 )
    operator delete(v2626);
  if ( v2625 )
    operator delete(v2625);
  if ( v2624 )
    (*(void (**)(void))(*(_DWORD *)v2624 + 4))();
  v2624 = 0;
  v125 = (void *)(v2629 - 12);
  if ( (int *)(v2629 - 12) != &dword_28898C0 )
    v654 = (unsigned int *)(v2629 - 4);
        v655 = __ldrex(v654);
      while ( __strex(v655 - 1, v654) );
      v655 = (*v654)--;
    if ( v655 <= 0 )
      j_j_j_j__ZdlPv_9(v125);
  if ( v2633 )
    operator delete(v2633);
  if ( v2632 )
    operator delete(v2632);
  if ( v2631 )
    (*(void (**)(void))(*(_DWORD *)v2631 + 4))();
  v2631 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2619, Block::mStoneSlab, 6, 1);
  sub_21E94B4((void **)&v2618, "###");
  definition<Block const*>((int)&v2616, 35, Block::mSandStone);
  Recipes::addShapedRecipe((int)v1, (int)&v2619, &v2618);
  v126 = v2616;
  v127 = v2617;
  if ( v2616 != v2617 )
      v128 = *(void **)(v126 + 60);
      if ( v128 )
        operator delete(v128);
      v129 = *(void **)(v126 + 44);
      if ( v129 )
        operator delete(v129);
      v130 = *(_DWORD *)(v126 + 16);
      if ( v130 )
        (*(void (**)(void))(*(_DWORD *)v130 + 4))();
      *(_DWORD *)(v126 + 16) = 0;
      v126 += 88;
    while ( v127 != v126 );
    v126 = v2616;
  if ( v126 )
    operator delete((void *)v126);
  v131 = (void *)(v2618 - 12);
  if ( (int *)(v2618 - 12) != &dword_28898C0 )
    v656 = (unsigned int *)(v2618 - 4);
        v657 = __ldrex(v656);
      while ( __strex(v657 - 1, v656) );
      v657 = (*v656)--;
    if ( v657 <= 0 )
      j_j_j_j__ZdlPv_9(v131);
  if ( v2622 )
    operator delete(v2622);
  if ( v2621 )
    operator delete(v2621);
  if ( v2620 )
    (*(void (**)(void))(*(_DWORD *)v2620 + 4))();
  v2620 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2612, Block::mStoneSlab2, 6, 0);
  sub_21E94B4((void **)&v2611, "###");
  definition<Block const*>((int)&v2609, 35, Block::mRedSandstone);
  Recipes::addShapedRecipe((int)v1, (int)&v2612, &v2611);
  v132 = v2609;
  v133 = v2610;
  if ( v2609 != v2610 )
      v134 = *(void **)(v132 + 60);
      if ( v134 )
        operator delete(v134);
      v135 = *(void **)(v132 + 44);
      if ( v135 )
        operator delete(v135);
      v136 = *(_DWORD *)(v132 + 16);
      if ( v136 )
        (*(void (**)(void))(*(_DWORD *)v136 + 4))();
      *(_DWORD *)(v132 + 16) = 0;
      v132 += 88;
    while ( v133 != v132 );
    v132 = v2609;
  if ( v132 )
    operator delete((void *)v132);
  v137 = (void *)(v2611 - 12);
  if ( (int *)(v2611 - 12) != &dword_28898C0 )
    v658 = (unsigned int *)(v2611 - 4);
        v659 = __ldrex(v658);
      while ( __strex(v659 - 1, v658) );
      v659 = (*v658)--;
    if ( v659 <= 0 )
      j_j_j_j__ZdlPv_9(v137);
  if ( v2615 )
    operator delete(v2615);
  if ( v2614 )
    operator delete(v2614);
  if ( v2613 )
    (*(void (**)(void))(*(_DWORD *)v2613 + 4))();
  v2613 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2605, Block::mDirt, 4, 1);
  sub_21E94B4((void **)&v2604, "#X");
  sub_21E94B4((void **)&v2603, "X#");
  ItemInstance::ItemInstance((ItemInstance *)&v2597, Block::mDirt, 1, 0);
  definition<ItemInstance,Block const*>((int)&v2601, 35, (int)&v2597, 88, Block::mGravel);
  Recipes::addShapedRecipe((int)v1, (int)&v2605, &v2604, &v2603);
  v138 = v2601;
  v139 = v2602;
  if ( v2601 != v2602 )
      v140 = *(void **)(v138 + 60);
      if ( v140 )
        operator delete(v140);
      v141 = *(void **)(v138 + 44);
      if ( v141 )
        operator delete(v141);
      v142 = *(_DWORD *)(v138 + 16);
      if ( v142 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v142 + 4))(v142, *(_DWORD *)(*(_DWORD *)v142 + 4));
      *(_DWORD *)(v138 + 16) = 0;
      v138 += 88;
    while ( v139 != v138 );
    v138 = v2601;
  if ( v138 )
    operator delete((void *)v138);
  if ( v2600 )
    operator delete(v2600);
  if ( v2599 )
    operator delete(v2599);
  if ( v2598 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2598 + 4))(v2598, *(_DWORD *)(*(_DWORD *)v2598 + 4));
  v2598 = 0;
  v143 = (void *)(v2603 - 12);
  if ( (int *)(v2603 - 12) != &dword_28898C0 )
    v660 = (unsigned int *)(v2603 - 4);
        v661 = __ldrex(v660);
      while ( __strex(v661 - 1, v660) );
      v661 = (*v660)--;
    if ( v661 <= 0 )
      j_j_j_j__ZdlPv_9(v143);
  v144 = (void *)(v2604 - 12);
  if ( (int *)(v2604 - 12) != &dword_28898C0 )
    v662 = (unsigned int *)(v2604 - 4);
        v663 = __ldrex(v662);
      while ( __strex(v663 - 1, v662) );
      v663 = (*v662)--;
    if ( v663 <= 0 )
      j_j_j_j__ZdlPv_9(v144);
  if ( v2608 )
    operator delete(v2608);
  if ( v2607 )
    operator delete(v2607);
  if ( v2606 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2606 + 4))(v2606, *(_DWORD *)(*(_DWORD *)v2606 + 4));
  v145 = (ItemInstance *)&v2593;
  v146 = &v2594;
  v147 = 0;
  v2606 = 0;
  do
    ItemInstance::ItemInstance((ItemInstance *)&v2596, Block::mWoodenSlab, 6, v147);
    sub_21E94B4((void **)&v2595, "###");
    ItemInstance::ItemInstance(v145, Block::mWoodPlanks, 1, v147);
    definition<ItemInstance>((int)v146, 35, (int)v145);
    Recipes::addShapedRecipe((int)v1, (int)&v2596, &v2595);
    v150 = v12;
    v151 = *((_QWORD *)v12 + 113) >> 32;
    v152 = *((_QWORD *)v12 + 113);
    if ( v152 != v151 )
      {
        v153 = *(void **)(v152 + 60);
        if ( v153 )
          operator delete(v153);
        v154 = *(void **)(v152 + 44);
        if ( v154 )
          operator delete(v154);
        v155 = *(_DWORD *)(v152 + 16);
        if ( v155 )
          (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v155 + 4))(v155, *(_DWORD *)(*(_DWORD *)v155 + 4));
        *(_DWORD *)(v152 + 16) = 0;
        v152 += 88;
      }
      while ( v151 != v152 );
      v152 = v150[226];
    if ( v152 )
      operator delete((void *)v152);
    v12 = v150;
    v156 = (void *)v150[220];
    if ( v156 )
      operator delete(v156);
    v157 = (void *)v150[216];
    if ( v157 )
      operator delete(v157);
    v158 = v150[209];
    if ( v158 )
      (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v158 + 4))(v158, *(_DWORD *)(*(_DWORD *)v158 + 4));
    v159 = v150[230];
    v145 = (ItemInstance *)&v2593;
    v160 = (void *)(v159 - 12);
    v146 = &v2594;
    v12[209] = 0;
    if ( (int *)(v159 - 12) != &dword_28898C0 )
      v148 = (unsigned int *)(v159 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v149 = __ldrex(v148);
        while ( __strex(v149 - 1, v148) );
      else
        v149 = (*v148)--;
      if ( v149 <= 0 )
        j_j_j_j__ZdlPv_9(v160);
    v161 = (void *)v12[244];
    if ( v161 )
      operator delete(v161);
    v162 = (void *)v12[240];
    if ( v162 )
      operator delete(v162);
    v163 = v12[233];
    if ( v163 )
      (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v163 + 4))(v163, *(_DWORD *)(*(_DWORD *)v163 + 4));
    ++v147;
    v12[233] = 0;
  while ( v147 != 6 );
  ItemInstance::ItemInstance((ItemInstance *)&v2592, Block::mStoneSlab, 6, 4);
  sub_21E94B4((void **)&v2591, "###");
  definition<Block const*>((int)&v2590, 35, Block::mBrick);
  Recipes::addShapedRecipe((int)v1, (int)&v2592, &v2591);
  v164 = *((_QWORD *)v12 + 92);
  if ( (_DWORD)v164 != HIDWORD(v164) )
      v165 = *(void **)(v164 + 60);
      if ( v165 )
        operator delete(v165);
      v166 = *(void **)(v164 + 44);
      if ( v166 )
        operator delete(v166);
      v167 = *(_DWORD *)(v164 + 16);
      if ( v167 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v167 + 4))(v167, *(_DWORD *)(*(_DWORD *)v167 + 4));
      *(_DWORD *)(v164 + 16) = 0;
      LODWORD(v164) = v164 + 88;
    while ( HIDWORD(v164) != (_DWORD)v164 );
    LODWORD(v164) = v12[184];
  if ( (_DWORD)v164 )
    operator delete((void *)v164);
  v168 = v12[188];
  v169 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v695 = (unsigned int *)(v168 - 4);
        v696 = __ldrex(v695);
      while ( __strex(v696 - 1, v695) );
      v696 = (*v695)--;
    if ( v696 <= 0 )
      j_j_j_j__ZdlPv_9(v169);
  v170 = (void *)v12[202];
  if ( v170 )
    operator delete(v170);
  v171 = (void *)v12[198];
  if ( v171 )
    operator delete(v171);
  v172 = v12[191];
  if ( v172 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v172 + 4))(v172, *(_DWORD *)(*(_DWORD *)v172 + 4));
  v12[191] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2589, Block::mStoneSlab, 6, 5);
  sub_21E94B4((void **)&v2588, "###");
  definition<Block const*>((int)&v2587, 35, Block::mStoneBrick);
  Recipes::addShapedRecipe((int)v1, (int)&v2589, &v2588);
  v173 = *((_QWORD *)v12 + 80);
  if ( (_DWORD)v173 != HIDWORD(v173) )
      v174 = *(void **)(v173 + 60);
      if ( v174 )
        operator delete(v174);
      v175 = *(void **)(v173 + 44);
      if ( v175 )
        operator delete(v175);
      v176 = *(_DWORD *)(v173 + 16);
      if ( v176 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v176 + 4))(v176, *(_DWORD *)(*(_DWORD *)v176 + 4));
      *(_DWORD *)(v173 + 16) = 0;
      LODWORD(v173) = v173 + 88;
    while ( HIDWORD(v173) != (_DWORD)v173 );
    LODWORD(v173) = v12[160];
  if ( (_DWORD)v173 )
    operator delete((void *)v173);
  v177 = v12[164];
  v178 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v697 = (unsigned int *)(v177 - 4);
        v698 = __ldrex(v697);
      while ( __strex(v698 - 1, v697) );
      v698 = (*v697)--;
    if ( v698 <= 0 )
      j_j_j_j__ZdlPv_9(v178);
  v179 = (void *)v12[178];
  if ( v179 )
    operator delete(v179);
  v180 = (void *)v12[174];
  if ( v180 )
    operator delete(v180);
  v181 = v12[167];
  if ( v181 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v181 + 4))(v181, *(_DWORD *)(*(_DWORD *)v181 + 4));
  v12[167] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2586, Block::mStoneSlab, 6, 7);
  sub_21E94B4((void **)&v2585, "###");
  definition<Block const*>((int)&v2584, 35, Block::mNetherBrick);
  Recipes::addShapedRecipe((int)v1, (int)&v2586, &v2585);
  v182 = *((_QWORD *)v12 + 68);
  if ( (_DWORD)v182 != HIDWORD(v182) )
      v183 = *(void **)(v182 + 60);
      if ( v183 )
        operator delete(v183);
      v184 = *(void **)(v182 + 44);
      if ( v184 )
        operator delete(v184);
      v185 = *(_DWORD *)(v182 + 16);
      if ( v185 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v185 + 4))(v185, *(_DWORD *)(*(_DWORD *)v185 + 4));
      *(_DWORD *)(v182 + 16) = 0;
      LODWORD(v182) = v182 + 88;
    while ( HIDWORD(v182) != (_DWORD)v182 );
    LODWORD(v182) = v12[136];
  if ( (_DWORD)v182 )
    operator delete((void *)v182);
  v186 = v12[140];
  v187 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v699 = (unsigned int *)(v186 - 4);
        v700 = __ldrex(v699);
      while ( __strex(v700 - 1, v699) );
      v700 = (*v699)--;
    if ( v700 <= 0 )
      j_j_j_j__ZdlPv_9(v187);
  v188 = (void *)v12[154];
  if ( v188 )
    operator delete(v188);
  v189 = (void *)v12[150];
  if ( v189 )
    operator delete(v189);
  v190 = v12[143];
  if ( v190 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v190 + 4))(v190, *(_DWORD *)(*(_DWORD *)v190 + 4));
  v12[143] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2583, Block::mStoneSlab, 6, 6);
  sub_21E94B4((void **)&v2582, "###");
  definition<Block const*>((int)&v2581, 35, Block::mQuartzBlock);
  Recipes::addShapedRecipe((int)v1, (int)&v2583, &v2582);
  v191 = *((_QWORD *)v12 + 56);
  if ( (_DWORD)v191 != HIDWORD(v191) )
      v192 = *(void **)(v191 + 60);
      if ( v192 )
        operator delete(v192);
      v193 = *(void **)(v191 + 44);
      if ( v193 )
        operator delete(v193);
      v194 = *(_DWORD *)(v191 + 16);
      if ( v194 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v194 + 4))(v194, *(_DWORD *)(*(_DWORD *)v194 + 4));
      *(_DWORD *)(v191 + 16) = 0;
      LODWORD(v191) = v191 + 88;
    while ( HIDWORD(v191) != (_DWORD)v191 );
    LODWORD(v191) = v12[112];
  if ( (_DWORD)v191 )
    operator delete((void *)v191);
  v195 = v12[116];
  v196 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v701 = (unsigned int *)(v195 - 4);
        v702 = __ldrex(v701);
      while ( __strex(v702 - 1, v701) );
      v702 = (*v701)--;
    if ( v702 <= 0 )
      j_j_j_j__ZdlPv_9(v196);
  v197 = (void *)v12[130];
  if ( v197 )
    operator delete(v197);
  v198 = (void *)v12[126];
  if ( v198 )
    operator delete(v198);
  v199 = v12[119];
  if ( v199 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v199 + 4))(v199, *(_DWORD *)(*(_DWORD *)v199 + 4));
  v12[119] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2580, Block::mStoneSlab2, 6, 1);
  sub_21E94B4((void **)&v2579, "###");
  definition<Block const*>((int)&v2578, 35, Block::mPurpurBlock);
  Recipes::addShapedRecipe((int)v1, (int)&v2580, &v2579);
  v200 = *((_QWORD *)v12 + 44);
  if ( (_DWORD)v200 != HIDWORD(v200) )
      v201 = *(void **)(v200 + 60);
      if ( v201 )
        operator delete(v201);
      v202 = *(void **)(v200 + 44);
      if ( v202 )
        operator delete(v202);
      v203 = *(_DWORD *)(v200 + 16);
      if ( v203 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v203 + 4))(v203, *(_DWORD *)(*(_DWORD *)v203 + 4));
      *(_DWORD *)(v200 + 16) = 0;
      LODWORD(v200) = v200 + 88;
    while ( HIDWORD(v200) != (_DWORD)v200 );
    LODWORD(v200) = v12[88];
  if ( (_DWORD)v200 )
    operator delete((void *)v200);
  v204 = v12[92];
  v205 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v703 = (unsigned int *)(v204 - 4);
        v704 = __ldrex(v703);
      while ( __strex(v704 - 1, v703) );
      v704 = (*v703)--;
    if ( v704 <= 0 )
      j_j_j_j__ZdlPv_9(v205);
  v206 = (void *)v12[106];
  if ( v206 )
    operator delete(v206);
  v207 = (void *)v12[102];
  if ( v207 )
    operator delete(v207);
  v208 = v12[95];
  if ( v208 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v208 + 4))(v208, *(_DWORD *)(*(_DWORD *)v208 + 4));
  v12[95] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2577, Block::mPurpurBlock, 4);
  sub_21E94B4((void **)&v2576, "##");
  sub_21E94B4((void **)&v2575, "##");
  definition<Item *>((int)&v2574, 35, Item::mChorusFruitPopped);
  Recipes::addShapedRecipe((int)v1, (int)&v2577, &v2576, &v2575);
  v209 = *((_QWORD *)v12 + 31);
  if ( (_DWORD)v209 != HIDWORD(v209) )
      v210 = *(void **)(v209 + 60);
      if ( v210 )
        operator delete(v210);
      v211 = *(void **)(v209 + 44);
      if ( v211 )
        operator delete(v211);
      v212 = *(_DWORD *)(v209 + 16);
      if ( v212 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v212 + 4))(v212, *(_DWORD *)(*(_DWORD *)v212 + 4));
      *(_DWORD *)(v209 + 16) = 0;
      LODWORD(v209) = v209 + 88;
    while ( HIDWORD(v209) != (_DWORD)v209 );
    LODWORD(v209) = v12[62];
  if ( (_DWORD)v209 )
    operator delete((void *)v209);
  v213 = v12[66];
  v214 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v705 = (unsigned int *)(v213 - 4);
        v706 = __ldrex(v705);
      while ( __strex(v706 - 1, v705) );
      v706 = (*v705)--;
    if ( v706 <= 0 )
      j_j_j_j__ZdlPv_9(v214);
  v215 = v12[68];
  v216 = (void *)(v215 - 12);
  if ( (int *)(v215 - 12) != &dword_28898C0 )
    v707 = (unsigned int *)(v215 - 4);
        v708 = __ldrex(v707);
      while ( __strex(v708 - 1, v707) );
      v708 = (*v707)--;
    if ( v708 <= 0 )
      j_j_j_j__ZdlPv_9(v216);
  v217 = (void *)v12[82];
  if ( v217 )
    operator delete(v217);
  v218 = (void *)v12[78];
  if ( v218 )
    operator delete(v218);
  v219 = v12[71];
  if ( v219 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v219 + 4))(v219, *(_DWORD *)(*(_DWORD *)v219 + 4));
  v12[71] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2573, Block::mEndRod, 4);
  sub_21E94B4((void **)&v2572, "B");
  sub_21E94B4((void **)&v2571, "#");
  definition<Item *,Item *>((int)&v2570, 66, Item::mBlazeRod, 35, Item::mChorusFruitPopped);
  Recipes::addShapedRecipe((int)v1, (int)&v2573, &v2572, &v2571);
  v220 = *((_QWORD *)v12 + 18);
  if ( (_DWORD)v220 != HIDWORD(v220) )
      v221 = *(void **)(v220 + 60);
      if ( v221 )
        operator delete(v221);
      v222 = *(void **)(v220 + 44);
      if ( v222 )
        operator delete(v222);
      v223 = *(_DWORD *)(v220 + 16);
      if ( v223 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v223 + 4))(v223, *(_DWORD *)(*(_DWORD *)v223 + 4));
      *(_DWORD *)(v220 + 16) = 0;
      LODWORD(v220) = v220 + 88;
    while ( HIDWORD(v220) != (_DWORD)v220 );
    LODWORD(v220) = v12[36];
  if ( (_DWORD)v220 )
    operator delete((void *)v220);
  v224 = v12[40];
  v225 = (void *)(v224 - 12);
  if ( (int *)(v224 - 12) != &dword_28898C0 )
    v709 = (unsigned int *)(v224 - 4);
        v710 = __ldrex(v709);
      while ( __strex(v710 - 1, v709) );
      v710 = (*v709)--;
    if ( v710 <= 0 )
      j_j_j_j__ZdlPv_9(v225);
  v226 = v12[42];
  v227 = (void *)(v226 - 12);
  if ( (int *)(v226 - 12) != &dword_28898C0 )
    v711 = (unsigned int *)(v226 - 4);
        v712 = __ldrex(v711);
      while ( __strex(v712 - 1, v711) );
      v712 = (*v711)--;
    if ( v712 <= 0 )
      j_j_j_j__ZdlPv_9(v227);
  v228 = (void *)v12[56];
  if ( v228 )
    operator delete(v228);
  v229 = (void *)v12[52];
  if ( v229 )
    operator delete(v229);
  v230 = v12[45];
  if ( v230 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v230 + 4))(v230, *(_DWORD *)(*(_DWORD *)v230 + 4));
  v12[45] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2569, Block::mEndBrick, 4);
  sub_21E94B4((void **)&v2568, "##");
  sub_21E94B4((void **)&v2567, "##");
  definition<Block const*>((int)&v2566, 35, Block::mEndStone);
  Recipes::addShapedRecipe((int)v1, (int)&v2569, &v2568, &v2567);
  v231 = *((_QWORD *)v12 + 5);
  if ( (_DWORD)v231 != HIDWORD(v231) )
      v232 = *(void **)(v231 + 60);
      if ( v232 )
        operator delete(v232);
      v233 = *(void **)(v231 + 44);
      if ( v233 )
        operator delete(v233);
      v234 = *(_DWORD *)(v231 + 16);
      if ( v234 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v234 + 4))(v234, *(_DWORD *)(*(_DWORD *)v234 + 4));
      *(_DWORD *)(v231 + 16) = 0;
      LODWORD(v231) = v231 + 88;
    while ( HIDWORD(v231) != (_DWORD)v231 );
    LODWORD(v231) = v12[10];
  if ( (_DWORD)v231 )
    operator delete((void *)v231);
  v235 = v12[14];
  v236 = (void *)(v235 - 12);
  if ( (int *)(v235 - 12) != &dword_28898C0 )
    v713 = (unsigned int *)(v235 - 4);
        v714 = __ldrex(v713);
      while ( __strex(v714 - 1, v713) );
      v714 = (*v713)--;
    if ( v714 <= 0 )
      j_j_j_j__ZdlPv_9(v236);
  v237 = v12[16];
  v238 = (void *)(v237 - 12);
  if ( (int *)(v237 - 12) != &dword_28898C0 )
    v715 = (unsigned int *)(v237 - 4);
        v716 = __ldrex(v715);
      while ( __strex(v716 - 1, v715) );
      v716 = (*v715)--;
    if ( v716 <= 0 )
      j_j_j_j__ZdlPv_9(v238);
  v239 = (void *)v12[30];
  if ( v239 )
    operator delete(v239);
  v240 = (void *)v12[26];
  if ( v240 )
    operator delete(v240);
  v241 = v12[19];
  if ( v241 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v241 + 4))(v241, *(_DWORD *)(*(_DWORD *)v241 + 4));
  v12[19] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2564, Block::mLadder, 3);
  sub_21E94B4((void **)&v2563, "# #");
  sub_21E94B4((void **)&v2562, "###");
  sub_21E94B4((void **)&v2561, "# #");
  definition<Item *>((int)&v2559, 35, Item::mStick);
  Recipes::addShapedRecipe((int)v1, (int)&v2564, &v2563, &v2562, &v2561);
  v242 = v2559;
  v243 = v2560;
  if ( v2559 != v2560 )
      v244 = *(void **)(v242 + 60);
      if ( v244 )
        operator delete(v244);
      v245 = *(void **)(v242 + 44);
      if ( v245 )
        operator delete(v245);
      v246 = *(_DWORD *)(v242 + 16);
      if ( v246 )
        (*(void (**)(void))(*(_DWORD *)v246 + 4))();
      *(_DWORD *)(v242 + 16) = 0;
      v242 += 88;
    while ( v243 != v242 );
    v242 = v2559;
  if ( v242 )
    operator delete((void *)v242);
  v247 = (void *)(v2561 - 12);
  if ( (int *)(v2561 - 12) != &dword_28898C0 )
    v717 = (unsigned int *)(v2561 - 4);
        v718 = __ldrex(v717);
      while ( __strex(v718 - 1, v717) );
      v718 = (*v717)--;
    if ( v718 <= 0 )
      j_j_j_j__ZdlPv_9(v247);
  v248 = (void *)(v2562 - 12);
  if ( (int *)(v2562 - 12) != &dword_28898C0 )
    v719 = (unsigned int *)(v2562 - 4);
        v720 = __ldrex(v719);
      while ( __strex(v720 - 1, v719) );
      v720 = (*v719)--;
    if ( v720 <= 0 )
      j_j_j_j__ZdlPv_9(v248);
  v249 = (void *)(v2563 - 12);
  if ( (int *)(v2563 - 12) != &dword_28898C0 )
    v721 = (unsigned int *)(v2563 - 4);
        v722 = __ldrex(v721);
      while ( __strex(v722 - 1, v721) );
      v722 = (*v721)--;
    if ( v722 <= 0 )
      j_j_j_j__ZdlPv_9(v249);
  v250 = (void *)v12[4];
  if ( v250 )
    operator delete(v250);
  if ( *v12 )
    operator delete((void *)*v12);
  v251 = *(v12 - 7);
  if ( v251 )
    (*(void (**)(void))(*(_DWORD *)v251 + 4))();
  *(v12 - 7) = 0;
  Recipes::_addWoodDoorRecipes(v1);
  ItemInstance::ItemInstance((ItemInstance *)&v2555, Block::mTrapdoor, 2);
  sub_21E94B4((void **)&v2554, "###");
  sub_21E94B4((void **)&v2553, "###");
  definition<Block const*>((int)&v2551, 35, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1, (int)&v2555, &v2554, &v2553);
  v252 = v2551;
  v253 = v2552;
  if ( v2551 != v2552 )
      v254 = *(void **)(v252 + 60);
      if ( v254 )
        operator delete(v254);
      v255 = *(void **)(v252 + 44);
      if ( v255 )
        operator delete(v255);
      v256 = *(_DWORD *)(v252 + 16);
      if ( v256 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v256 + 4))(v256, *(_DWORD *)(*(_DWORD *)v256 + 4));
      *(_DWORD *)(v252 + 16) = 0;
      v252 += 88;
    while ( v253 != v252 );
    v252 = v2551;
  if ( v252 )
    operator delete((void *)v252);
  v257 = (void *)(v2553 - 12);
  if ( (int *)(v2553 - 12) != &dword_28898C0 )
    v723 = (unsigned int *)(v2553 - 4);
        v724 = __ldrex(v723);
      while ( __strex(v724 - 1, v723) );
      v724 = (*v723)--;
    if ( v724 <= 0 )
      j_j_j_j__ZdlPv_9(v257);
  v258 = (void *)(v2554 - 12);
  if ( (int *)(v2554 - 12) != &dword_28898C0 )
    v725 = (unsigned int *)(v2554 - 4);
        v726 = __ldrex(v725);
      while ( __strex(v726 - 1, v725) );
      v726 = (*v725)--;
    if ( v726 <= 0 )
      j_j_j_j__ZdlPv_9(v258);
  if ( v2558 )
    operator delete(v2558);
  if ( v2557 )
    operator delete(v2557);
  if ( v2556 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2556 + 4))(v2556, *(_DWORD *)(*(_DWORD *)v2556 + 4));
  v2556 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2547, Block::mIronTrapdoor, 1);
  sub_21E94B4((void **)&v2546, "##");
  sub_21E94B4((void **)&v2545, "##");
  definition<Item *>((int)&v2543, 35, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v1, (int)&v2547, &v2546, &v2545);
  v259 = v2543;
  v260 = v2544;
  if ( v2543 != v2544 )
      v261 = *(void **)(v259 + 60);
      if ( v261 )
        operator delete(v261);
      v262 = *(void **)(v259 + 44);
      if ( v262 )
        operator delete(v262);
      v263 = *(_DWORD *)(v259 + 16);
      if ( v263 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v263 + 4))(v263, *(_DWORD *)(*(_DWORD *)v263 + 4));
      *(_DWORD *)(v259 + 16) = 0;
      v259 += 88;
    while ( v260 != v259 );
    v259 = v2543;
  if ( v259 )
    operator delete((void *)v259);
  v264 = (void *)(v2545 - 12);
  if ( (int *)(v2545 - 12) != &dword_28898C0 )
    v727 = (unsigned int *)(v2545 - 4);
        v728 = __ldrex(v727);
      while ( __strex(v728 - 1, v727) );
      v728 = (*v727)--;
    if ( v728 <= 0 )
      j_j_j_j__ZdlPv_9(v264);
  v265 = (void *)(v2546 - 12);
  if ( (int *)(v2546 - 12) != &dword_28898C0 )
    v729 = (unsigned int *)(v2546 - 4);
        v730 = __ldrex(v729);
      while ( __strex(v730 - 1, v729) );
      v730 = (*v729)--;
    if ( v730 <= 0 )
      j_j_j_j__ZdlPv_9(v265);
  if ( v2550 )
    operator delete(v2550);
  if ( v2549 )
    operator delete(v2549);
  if ( v2548 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2548 + 4))(v2548, *(_DWORD *)(*(_DWORD *)v2548 + 4));
  v2548 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2539, Block::mTripwireHook, 2);
  sub_21E94B4((void **)&v2538, "I");
  sub_21E94B4((void **)&v2537, (const char *)&aCdefghjklmnopq[15]);
  sub_21E94B4((void **)&v2536, (const char *)&aCdefghjklmnopq[18]);
  definition<Item *,Item *,Block const*>((int)&v2534, 73, Item::mIronIngot, 83, Item::mStick, 87, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1, (int)&v2539, &v2538, &v2537, &v2536);
  v266 = v2534;
  v267 = v2535;
  if ( v2534 != v2535 )
      v268 = *(void **)(v266 + 60);
      if ( v268 )
        operator delete(v268);
      v269 = *(void **)(v266 + 44);
      if ( v269 )
        operator delete(v269);
      v270 = *(_DWORD *)(v266 + 16);
      if ( v270 )
        (*(void (**)(void))(*(_DWORD *)v270 + 4))();
      *(_DWORD *)(v266 + 16) = 0;
      v266 += 88;
    while ( v267 != v266 );
    v266 = v2534;
  if ( v266 )
    operator delete((void *)v266);
  v271 = (void *)(v2536 - 12);
  if ( (int *)(v2536 - 12) != &dword_28898C0 )
    v731 = (unsigned int *)(v2536 - 4);
        v732 = __ldrex(v731);
      while ( __strex(v732 - 1, v731) );
      v732 = (*v731)--;
    if ( v732 <= 0 )
      j_j_j_j__ZdlPv_9(v271);
  v272 = (void *)(v2537 - 12);
  if ( (int *)(v2537 - 12) != &dword_28898C0 )
    v733 = (unsigned int *)(v2537 - 4);
        v734 = __ldrex(v733);
      while ( __strex(v734 - 1, v733) );
      v734 = (*v733)--;
    if ( v734 <= 0 )
      j_j_j_j__ZdlPv_9(v272);
  v273 = (void *)(v2538 - 12);
  if ( (int *)(v2538 - 12) != &dword_28898C0 )
    v735 = (unsigned int *)(v2538 - 4);
        v736 = __ldrex(v735);
      while ( __strex(v736 - 1, v735) );
      v736 = (*v735)--;
    if ( v736 <= 0 )
      j_j_j_j__ZdlPv_9(v273);
  if ( v2542 )
    operator delete(v2542);
  if ( v2541 )
    operator delete(v2541);
  if ( v2540 )
    (*(void (**)(void))(*(_DWORD *)v2540 + 4))();
  v2540 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2530, Block::mNote, 1);
  sub_21E94B4((void **)&v2529, "WWW");
  sub_21E94B4((void **)&v2528, "WRW");
  sub_21E94B4((void **)&v2527, "WWW");
  definition<Item *,Block const*>((int)&v2525, 82, Item::mRedStone, 87, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1, (int)&v2530, &v2529, &v2528, &v2527);
  v274 = v2525;
  v275 = v2526;
  if ( v2525 != v2526 )
      v276 = *(void **)(v274 + 60);
      if ( v276 )
        operator delete(v276);
      v277 = *(void **)(v274 + 44);
      if ( v277 )
        operator delete(v277);
      v278 = *(_DWORD *)(v274 + 16);
      if ( v278 )
        (*(void (**)(void))(*(_DWORD *)v278 + 4))();
      *(_DWORD *)(v274 + 16) = 0;
      v274 += 88;
    while ( v275 != v274 );
    v274 = v2525;
  if ( v274 )
    operator delete((void *)v274);
  v279 = (void *)(v2527 - 12);
  if ( (int *)(v2527 - 12) != &dword_28898C0 )
    v737 = (unsigned int *)(v2527 - 4);
        v738 = __ldrex(v737);
      while ( __strex(v738 - 1, v737) );
      v738 = (*v737)--;
    if ( v738 <= 0 )
      j_j_j_j__ZdlPv_9(v279);
  v280 = (void *)(v2528 - 12);
  if ( (int *)(v2528 - 12) != &dword_28898C0 )
    v739 = (unsigned int *)(v2528 - 4);
        v740 = __ldrex(v739);
      while ( __strex(v740 - 1, v739) );
      v740 = (*v739)--;
    if ( v740 <= 0 )
      j_j_j_j__ZdlPv_9(v280);
  v281 = (void *)(v2529 - 12);
  if ( (int *)(v2529 - 12) != &dword_28898C0 )
    v741 = (unsigned int *)(v2529 - 4);
        v742 = __ldrex(v741);
      while ( __strex(v742 - 1, v741) );
      v742 = (*v741)--;
    if ( v742 <= 0 )
      j_j_j_j__ZdlPv_9(v281);
  if ( v2533 )
    operator delete(v2533);
  if ( v2532 )
    operator delete(v2532);
  if ( v2531 )
    (*(void (**)(void))(*(_DWORD *)v2531 + 4))();
  v2531 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2521, Block::mJukebox, 1);
  sub_21E94B4((void **)&v2520, "WWW");
  sub_21E94B4((void **)&v2519, "WDW");
  sub_21E94B4((void **)&v2518, "WWW");
  definition<Item *,Block const*>((int)&v2516, 68, Item::mDiamond, 87, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1, (int)&v2521, &v2520, &v2519, &v2518);
  v282 = v2516;
  v283 = v2517;
  if ( v2516 != v2517 )
      v284 = *(void **)(v282 + 60);
      if ( v284 )
        operator delete(v284);
      v285 = *(void **)(v282 + 44);
      if ( v285 )
        operator delete(v285);
      v286 = *(_DWORD *)(v282 + 16);
      if ( v286 )
        (*(void (**)(void))(*(_DWORD *)v286 + 4))();
      *(_DWORD *)(v282 + 16) = 0;
      v282 += 88;
    while ( v283 != v282 );
    v282 = v2516;
  if ( v282 )
    operator delete((void *)v282);
  v287 = (void *)(v2518 - 12);
  if ( (int *)(v2518 - 12) != &dword_28898C0 )
    v743 = (unsigned int *)(v2518 - 4);
        v744 = __ldrex(v743);
      while ( __strex(v744 - 1, v743) );
      v744 = (*v743)--;
    if ( v744 <= 0 )
      j_j_j_j__ZdlPv_9(v287);
  v288 = (void *)(v2519 - 12);
  if ( (int *)(v2519 - 12) != &dword_28898C0 )
    v745 = (unsigned int *)(v2519 - 4);
        v746 = __ldrex(v745);
      while ( __strex(v746 - 1, v745) );
      v746 = (*v745)--;
    if ( v746 <= 0 )
      j_j_j_j__ZdlPv_9(v288);
  v289 = (void *)(v2520 - 12);
  if ( (int *)(v2520 - 12) != &dword_28898C0 )
    v747 = (unsigned int *)(v2520 - 4);
        v748 = __ldrex(v747);
      while ( __strex(v748 - 1, v747) );
      v748 = (*v747)--;
    if ( v748 <= 0 )
      j_j_j_j__ZdlPv_9(v289);
  if ( v2524 )
    operator delete(v2524);
  if ( v2523 )
    operator delete(v2523);
  if ( v2522 )
    (*(void (**)(void))(*(_DWORD *)v2522 + 4))();
  v2522 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2512, Item::mDoor_iron, 3);
  sub_21E94B4((void **)&v2511, "##");
  sub_21E94B4((void **)&v2510, "##");
  sub_21E94B4((void **)&v2509, "##");
  definition<Item *>((int)&v2507, 35, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v1, (int)&v2512, &v2511, &v2510, &v2509);
  v290 = v2507;
  v291 = v2508;
  if ( v2507 != v2508 )
      v292 = *(void **)(v290 + 60);
      if ( v292 )
        operator delete(v292);
      v293 = *(void **)(v290 + 44);
      if ( v293 )
        operator delete(v293);
      v294 = *(_DWORD *)(v290 + 16);
      if ( v294 )
        (*(void (**)(void))(*(_DWORD *)v294 + 4))();
      *(_DWORD *)(v290 + 16) = 0;
      v290 += 88;
    while ( v291 != v290 );
    v290 = v2507;
  if ( v290 )
    operator delete((void *)v290);
  v295 = (void *)(v2509 - 12);
  if ( (int *)(v2509 - 12) != &dword_28898C0 )
    v749 = (unsigned int *)(v2509 - 4);
        v750 = __ldrex(v749);
      while ( __strex(v750 - 1, v749) );
      v750 = (*v749)--;
    if ( v750 <= 0 )
      j_j_j_j__ZdlPv_9(v295);
  v296 = (void *)(v2510 - 12);
  if ( (int *)(v2510 - 12) != &dword_28898C0 )
    v751 = (unsigned int *)(v2510 - 4);
        v752 = __ldrex(v751);
      while ( __strex(v752 - 1, v751) );
      v752 = (*v751)--;
    if ( v752 <= 0 )
      j_j_j_j__ZdlPv_9(v296);
  v297 = (void *)(v2511 - 12);
  if ( (int *)(v2511 - 12) != &dword_28898C0 )
    v753 = (unsigned int *)(v2511 - 4);
        v754 = __ldrex(v753);
      while ( __strex(v754 - 1, v753) );
      v754 = (*v753)--;
    if ( v754 <= 0 )
      j_j_j_j__ZdlPv_9(v297);
  if ( v2515 )
    operator delete(v2515);
  if ( v2514 )
    operator delete(v2514);
  if ( v2513 )
    (*(void (**)(void))(*(_DWORD *)v2513 + 4))();
  v2513 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2503, Item::mSign, 3);
  sub_21E94B4((void **)&v2502, "###");
  sub_21E94B4((void **)&v2501, "###");
  sub_21E94B4((void **)&v2500, " X ");
  definition<Block const*,Item *>((int)&v2498, 35, Block::mWoodPlanks, 88, Item::mStick);
  Recipes::addShapedRecipe((int)v1, (int)&v2503, &v2502, &v2501, &v2500);
  v298 = v2498;
  v299 = v2499;
  if ( v2498 != v2499 )
      v300 = *(void **)(v298 + 60);
      if ( v300 )
        operator delete(v300);
      v301 = *(void **)(v298 + 44);
      if ( v301 )
        operator delete(v301);
      v302 = *(_DWORD *)(v298 + 16);
      if ( v302 )
        (*(void (**)(void))(*(_DWORD *)v302 + 4))();
      *(_DWORD *)(v298 + 16) = 0;
      v298 += 88;
    while ( v299 != v298 );
    v298 = v2498;
  if ( v298 )
    operator delete((void *)v298);
  v303 = (void *)(v2500 - 12);
  if ( (int *)(v2500 - 12) != &dword_28898C0 )
    v755 = (unsigned int *)(v2500 - 4);
        v756 = __ldrex(v755);
      while ( __strex(v756 - 1, v755) );
      v756 = (*v755)--;
    if ( v756 <= 0 )
      j_j_j_j__ZdlPv_9(v303);
  v304 = (void *)(v2501 - 12);
  if ( (int *)(v2501 - 12) != &dword_28898C0 )
    v757 = (unsigned int *)(v2501 - 4);
        v758 = __ldrex(v757);
      while ( __strex(v758 - 1, v757) );
      v758 = (*v757)--;
    if ( v758 <= 0 )
      j_j_j_j__ZdlPv_9(v304);
  v305 = (void *)(v2502 - 12);
  if ( (int *)(v2502 - 12) != &dword_28898C0 )
    v759 = (unsigned int *)(v2502 - 4);
        v760 = __ldrex(v759);
      while ( __strex(v760 - 1, v759) );
      v760 = (*v759)--;
    if ( v760 <= 0 )
      j_j_j_j__ZdlPv_9(v305);
  if ( v2506 )
    operator delete(v2506);
  if ( v2505 )
    operator delete(v2505);
  if ( v2504 )
    (*(void (**)(void))(*(_DWORD *)v2504 + 4))();
  v2504 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2487, Item::mCake, 1);
  ItemInstance::ItemInstance((ItemInstance *)&v2491, Item::mBucket, 3);
  v2495 = 0;
  v2496 = 0;
  v2497 = 0;
  v2495 = (char *)operator new(0x90u);
  v2497 = (int)(v2495 + 144);
  v2496 = std::__uninitialized_copy<false>::__uninit_copy<ItemInstance const*,ItemInstance*>(
            (int)&v2487,
            (int)&v2495,
            (int)v2495);
  if ( v2494 )
    operator delete(v2494);
  if ( v2493 )
    operator delete(v2493);
  if ( v2492 )
    (*(void (**)(void))(*(_DWORD *)v2492 + 4))();
  v2492 = 0;
  if ( v2490 )
    operator delete(v2490);
  if ( v2489 )
    operator delete(v2489);
  if ( v2488 )
    (*(void (**)(void))(*(_DWORD *)v2488 + 4))();
  v2488 = 0;
  sub_21E94B4((void **)&v2484, "AAA");
  sub_21E94B4((void **)&v2483, "BEB");
  sub_21E94B4((void **)&v2482, "CCC");
  Recipes::Shape((int)&v2485, &v2484, &v2483, &v2482);
  ItemInstance::ItemInstance((ItemInstance *)&v2476, Item::mBucket, 1, 1);
  definition<ItemInstance,Item *,Item *,Item *>(
    (int)&v2480,
    65,
    (int)&v2476,
    66,
    Item::mSugar,
    67,
    Item::mWheat,
    69,
    Item::mEgg);
  Recipes::addShapedRecipe(
    __PAIR__(&v2495, (unsigned int)v1),
    (int)&v2485,
    v306,
    v307,
    v308,
    v309,
    v310,
    v1757,
    v1758,
    v1759,
    v1760,
    v1761,
    v1762,
    v1763,
    v1764,
    v1765,
    v1766,
    v1767,
    v1768,
    v1769,
    v1770,
    v1771,
    v1772,
    v1773,
    v1774,
    v1775,
    v1776,
    v1777,
    v1778,
    (int)&pthread_create,
    (int)&dword_28898C0,
    (int)&Block::mWoodPlanks,
    (int)&Block::mWoodenSlab,
    (int)v1,
    v1781,
    v1782,
    v1783,
    v1784,
    v1785,
    v1786,
    v1787,
    v1788,
    v1789,
    (int)v1790,
    v1791,
    v1792,
    v1793,
    (int)v1794,
    v1795,
    v1796,
    v1797,
    v1798,
    v1799);
  v311 = v2480;
  v312 = v2481;
  if ( v2480 != v2481 )
      v313 = *(void **)(v311 + 60);
      if ( v313 )
        operator delete(v313);
      v314 = *(void **)(v311 + 44);
      if ( v314 )
        operator delete(v314);
      v315 = *(_DWORD *)(v311 + 16);
      if ( v315 )
        (*(void (**)(void))(*(_DWORD *)v315 + 4))();
      *(_DWORD *)(v311 + 16) = 0;
      v311 += 88;
    while ( v312 != v311 );
    v311 = v2480;
  if ( v311 )
    operator delete((void *)v311);
  if ( v2479 )
    operator delete(v2479);
  if ( v2478 )
    operator delete(v2478);
  if ( v2477 )
    (*(void (**)(void))(*(_DWORD *)v2477 + 4))();
  v316 = v2485;
  v317 = v2486;
  v2477 = 0;
  if ( v2485 != v2486 )
      v320 = (int *)(*(_DWORD *)v316 - 12);
      if ( v320 != &dword_28898C0 )
        v318 = (unsigned int *)(*(_DWORD *)v316 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v319 = __ldrex(v318);
          while ( __strex(v319 - 1, v318) );
        }
        else
          v319 = (*v318)--;
        if ( v319 <= 0 )
          j_j_j_j__ZdlPv_9(v320);
      v316 = (char *)v316 + 4;
    while ( v316 != v317 );
    v316 = v2485;
  if ( v316 )
    operator delete(v316);
  v321 = (void *)(v2482 - 12);
  if ( (int *)(v2482 - 12) != &dword_28898C0 )
    v761 = (unsigned int *)(v2482 - 4);
        v762 = __ldrex(v761);
      while ( __strex(v762 - 1, v761) );
      v762 = (*v761)--;
    if ( v762 <= 0 )
      j_j_j_j__ZdlPv_9(v321);
  v322 = (void *)(v2483 - 12);
  if ( (int *)(v2483 - 12) != &dword_28898C0 )
    v763 = (unsigned int *)(v2483 - 4);
        v764 = __ldrex(v763);
      while ( __strex(v764 - 1, v763) );
      v764 = (*v763)--;
    if ( v764 <= 0 )
      j_j_j_j__ZdlPv_9(v322);
  v323 = (void *)(v2484 - 12);
  if ( (int *)(v2484 - 12) != &dword_28898C0 )
    v765 = (unsigned int *)(v2484 - 4);
        v766 = __ldrex(v765);
      while ( __strex(v766 - 1, v765) );
      v766 = (*v765)--;
    if ( v766 <= 0 )
      j_j_j_j__ZdlPv_9(v323);
  ItemInstance::ItemInstance((ItemInstance *)&v2472, Item::mSugar, 1);
  sub_21E94B4((void **)&v2471, "#");
  definition<Item *>((int)&v2469, 35, Item::mReeds);
  Recipes::addShapedRecipe((int)v1, (int)&v2472, &v2471);
  v324 = v2469;
  v325 = v2470;
  if ( v2469 != v2470 )
      v326 = *(void **)(v324 + 60);
      if ( v326 )
        operator delete(v326);
      v327 = *(void **)(v324 + 44);
      if ( v327 )
        operator delete(v327);
      v328 = *(_DWORD *)(v324 + 16);
      if ( v328 )
        (*(void (**)(void))(*(_DWORD *)v328 + 4))();
      *(_DWORD *)(v324 + 16) = 0;
      v324 += 88;
    while ( v325 != v324 );
    v324 = v2469;
  if ( v324 )
    operator delete((void *)v324);
  v329 = (void *)(v2471 - 12);
  if ( (int *)(v2471 - 12) != &dword_28898C0 )
    v767 = (unsigned int *)(v2471 - 4);
        v768 = __ldrex(v767);
      while ( __strex(v768 - 1, v767) );
      v768 = (*v767)--;
    if ( v768 <= 0 )
      j_j_j_j__ZdlPv_9(v329);
  if ( v2475 )
    operator delete(v2475);
  if ( v2474 )
    operator delete(v2474);
  if ( v2473 )
    (*(void (**)(void))(*(_DWORD *)v2473 + 4))();
  v2473 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2465, Item::mGoldenCarrot, 1);
  sub_21E94B4((void **)&v2464, "###");
  sub_21E94B4((void **)&v2463, "#X#");
  sub_21E94B4((void **)&v2462, "###");
  definition<Item *,Item *>((int)&v2460, 35, Item::mGold_nugget, 88, Item::mCarrot);
  Recipes::addShapedRecipe((int)v1, (int)&v2465, &v2464, &v2463, &v2462);
  v330 = v2460;
  v331 = v2461;
  if ( v2460 != v2461 )
      v332 = *(void **)(v330 + 60);
      if ( v332 )
        operator delete(v332);
      v333 = *(void **)(v330 + 44);
      if ( v333 )
        operator delete(v333);
      v334 = *(_DWORD *)(v330 + 16);
      if ( v334 )
        (*(void (**)(void))(*(_DWORD *)v334 + 4))();
      *(_DWORD *)(v330 + 16) = 0;
      v330 += 88;
    while ( v331 != v330 );
    v330 = v2460;
  if ( v330 )
    operator delete((void *)v330);
  v335 = (void *)(v2462 - 12);
  if ( (int *)(v2462 - 12) != &dword_28898C0 )
    v769 = (unsigned int *)(v2462 - 4);
        v770 = __ldrex(v769);
      while ( __strex(v770 - 1, v769) );
      v770 = (*v769)--;
    if ( v770 <= 0 )
      j_j_j_j__ZdlPv_9(v335);
  v336 = (void *)(v2463 - 12);
  if ( (int *)(v2463 - 12) != &dword_28898C0 )
    v771 = (unsigned int *)(v2463 - 4);
        v772 = __ldrex(v771);
      while ( __strex(v772 - 1, v771) );
      v772 = (*v771)--;
    if ( v772 <= 0 )
      j_j_j_j__ZdlPv_9(v336);
  v337 = (void *)(v2464 - 12);
  if ( (int *)(v2464 - 12) != &dword_28898C0 )
    v773 = (unsigned int *)(v2464 - 4);
        v774 = __ldrex(v773);
      while ( __strex(v774 - 1, v773) );
      v774 = (*v773)--;
    if ( v774 <= 0 )
      j_j_j_j__ZdlPv_9(v337);
  if ( v2468 )
    operator delete(v2468);
  if ( v2467 )
    operator delete(v2467);
  if ( v2466 )
    (*(void (**)(void))(*(_DWORD *)v2466 + 4))();
  v2466 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2456, Item::mSpeckled_melon, 1);
  sub_21E94B4((void **)&v2455, "###");
  sub_21E94B4((void **)&v2454, "#X#");
  sub_21E94B4((void **)&v2453, "###");
  definition<Item *,Item *>((int)&v2451, 35, Item::mGold_nugget, 88, Item::mMelonSlice);
  Recipes::addShapedRecipe((int)v1, (int)&v2456, &v2455, &v2454, &v2453);
  v338 = v2451;
  v339 = v2452;
  if ( v2451 != v2452 )
      v340 = *(void **)(v338 + 60);
      if ( v340 )
        operator delete(v340);
      v341 = *(void **)(v338 + 44);
      if ( v341 )
        operator delete(v341);
      v342 = *(_DWORD *)(v338 + 16);
      if ( v342 )
        (*(void (**)(void))(*(_DWORD *)v342 + 4))();
      *(_DWORD *)(v338 + 16) = 0;
      v338 += 88;
    while ( v339 != v338 );
    v338 = v2451;
  if ( v338 )
    operator delete((void *)v338);
  v343 = (void *)(v2453 - 12);
  if ( (int *)(v2453 - 12) != &dword_28898C0 )
    v775 = (unsigned int *)(v2453 - 4);
        v776 = __ldrex(v775);
      while ( __strex(v776 - 1, v775) );
      v776 = (*v775)--;
    if ( v776 <= 0 )
      j_j_j_j__ZdlPv_9(v343);
  v344 = (void *)(v2454 - 12);
  if ( (int *)(v2454 - 12) != &dword_28898C0 )
    v777 = (unsigned int *)(v2454 - 4);
        v778 = __ldrex(v777);
      while ( __strex(v778 - 1, v777) );
      v778 = (*v777)--;
    if ( v778 <= 0 )
      j_j_j_j__ZdlPv_9(v344);
  v345 = (void *)(v2455 - 12);
  if ( (int *)(v2455 - 12) != &dword_28898C0 )
    v779 = (unsigned int *)(v2455 - 4);
        v780 = __ldrex(v779);
      while ( __strex(v780 - 1, v779) );
      v780 = (*v779)--;
    if ( v780 <= 0 )
      j_j_j_j__ZdlPv_9(v345);
  if ( v2459 )
    operator delete(v2459);
  if ( v2458 )
    operator delete(v2458);
  if ( v2457 )
    (*(void (**)(void))(*(_DWORD *)v2457 + 4))();
  v2457 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2447, Item::mBlazePowder, 2);
  sub_21E94B4((void **)&v2443, "#");
  v2444 = 0;
  v2445 = 0;
  v2446 = 0;
  std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
    (unsigned __int64 *)&v2444,
    &v2443);
  definition<Item *>((int)&v2441, 35, Item::mBlazeRod);
  Recipes::addShapedRecipe();
  v346 = v2441;
  v347 = v2442;
  if ( v2441 != v2442 )
      v348 = *(void **)(v346 + 60);
      if ( v348 )
        operator delete(v348);
      v349 = *(void **)(v346 + 44);
      if ( v349 )
        operator delete(v349);
      v350 = *(_DWORD *)(v346 + 16);
      if ( v350 )
        (*(void (**)(void))(*(_DWORD *)v350 + 4))();
      *(_DWORD *)(v346 + 16) = 0;
      v346 += 88;
    while ( v347 != v346 );
    v346 = v2441;
  if ( v346 )
    operator delete((void *)v346);
  v351 = v2444;
  v352 = v2445;
  if ( v2444 != v2445 )
      v355 = (int *)(*(_DWORD *)v351 - 12);
      if ( v355 != &dword_28898C0 )
        v353 = (unsigned int *)(*(_DWORD *)v351 - 4);
            v354 = __ldrex(v353);
          while ( __strex(v354 - 1, v353) );
          v354 = (*v353)--;
        if ( v354 <= 0 )
          j_j_j_j__ZdlPv_9(v355);
      v351 = (char *)v351 + 4;
    while ( v351 != v352 );
    v351 = v2444;
  if ( v351 )
    operator delete(v351);
  v356 = (void *)(v2443 - 12);
  if ( (int *)(v2443 - 12) != &dword_28898C0 )
    v781 = (unsigned int *)(v2443 - 4);
        v782 = __ldrex(v781);
      while ( __strex(v782 - 1, v781) );
      v782 = (*v781)--;
    if ( v782 <= 0 )
      j_j_j_j__ZdlPv_9(v356);
  if ( v2450 )
    operator delete(v2450);
  if ( v2449 )
    operator delete(v2449);
  if ( v2448 )
    (*(void (**)(void))(*(_DWORD *)v2448 + 4))();
  v2448 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2437, Item::mMagma_cream);
  definition<Item *,Item *>((int)&v2435, 0, Item::mBlazePowder, 0, Item::mSlimeBall);
  Recipes::addShapelessRecipe((int)v1, (int)&v2437, (unsigned __int64 *)&v2435);
  v357 = v2435;
  v358 = v2436;
  if ( v2435 != v2436 )
      v359 = *(void **)(v357 + 60);
      if ( v359 )
        operator delete(v359);
      v360 = *(void **)(v357 + 44);
      if ( v360 )
        operator delete(v360);
      v361 = *(_DWORD *)(v357 + 16);
      if ( v361 )
        (*(void (**)(void))(*(_DWORD *)v361 + 4))();
      *(_DWORD *)(v357 + 16) = 0;
      v357 += 88;
    while ( v358 != v357 );
    v357 = v2435;
  if ( v357 )
    operator delete((void *)v357);
  if ( v2440 )
    operator delete(v2440);
  if ( v2439 )
    operator delete(v2439);
  if ( v2438 )
    (*(void (**)(void))(*(_DWORD *)v2438 + 4))();
  v2438 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2431, Item::mFermented_spider_eye);
  definition<Block const*,Item *,Item *>((int)&v2429, 0, Block::mBrownMushroom, 0, Item::mSugar, 0, Item::mSpider_eye);
  Recipes::addShapelessRecipe((int)v1, (int)&v2431, (unsigned __int64 *)&v2429);
  v362 = v2429;
  v363 = v2430;
  if ( v2429 != v2430 )
      v364 = *(void **)(v362 + 60);
      if ( v364 )
        operator delete(v364);
      v365 = *(void **)(v362 + 44);
      if ( v365 )
        operator delete(v365);
      v366 = *(_DWORD *)(v362 + 16);
      if ( v366 )
        (*(void (**)(void))(*(_DWORD *)v366 + 4))();
      *(_DWORD *)(v362 + 16) = 0;
      v362 += 88;
    while ( v363 != v362 );
    v362 = v2429;
  if ( v362 )
    operator delete((void *)v362);
  if ( v2434 )
    operator delete(v2434);
  if ( v2433 )
    operator delete(v2433);
  if ( v2432 )
    (*(void (**)(void))(*(_DWORD *)v2432 + 4))();
  v2432 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2425, Block::mWoodPlanks, 4, 0);
  sub_21E94B4((void **)&v2421, "#");
  v2422 = 0;
  v2423 = 0;
  v2424 = 0;
    (unsigned __int64 *)&v2422,
    &v2421);
  ItemInstance::ItemInstance((ItemInstance *)&v2415, Block::mLog, 1, 0);
  definition<ItemInstance>((int)&v2419, 35, (int)&v2415);
  v367 = *(_DWORD *)&v2419;
  v368 = v2420;
  if ( *(_DWORD *)&v2419 != v2420 )
      v369 = *(void **)(v367 + 60);
      if ( v369 )
        operator delete(v369);
      v370 = *(void **)(v367 + 44);
      if ( v370 )
        operator delete(v370);
      v371 = *(_DWORD *)(v367 + 16);
      if ( v371 )
        (*(void (**)(void))(*(_DWORD *)v371 + 4))();
      *(_DWORD *)(v367 + 16) = 0;
      v367 += 88;
    while ( v368 != v367 );
    v367 = *(_DWORD *)&v2419;
  if ( v367 )
    operator delete((void *)v367);
  if ( v2418 )
    operator delete(v2418);
  if ( v2417 )
    operator delete(v2417);
  if ( v2416 )
    (*(void (**)(void))(*(_DWORD *)v2416 + 4))();
  v372 = v2422;
  v373 = v2423;
  v2416 = 0;
  if ( v2422 != v2423 )
      v376 = (int *)(*(_DWORD *)v372 - 12);
      if ( v376 != &dword_28898C0 )
        v374 = (unsigned int *)(*(_DWORD *)v372 - 4);
            v375 = __ldrex(v374);
          while ( __strex(v375 - 1, v374) );
          v375 = (*v374)--;
        if ( v375 <= 0 )
          j_j_j_j__ZdlPv_9(v376);
      v372 = (char *)v372 + 4;
    while ( v372 != v373 );
    v372 = v2422;
  if ( v372 )
    operator delete(v372);
  v377 = (void *)(v2421 - 12);
  if ( (int *)(v2421 - 12) != &dword_28898C0 )
    v783 = (unsigned int *)(v2421 - 4);
        v784 = __ldrex(v783);
      while ( __strex(v784 - 1, v783) );
      v784 = (*v783)--;
    if ( v784 <= 0 )
      j_j_j_j__ZdlPv_9(v377);
  if ( v2428 )
    operator delete(v2428);
  if ( v2427 )
    operator delete(v2427);
  if ( v2426 )
    (*(void (**)(void))(*(_DWORD *)v2426 + 4))();
  v2426 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2411, Block::mWoodPlanks, 4, 1);
  sub_21E94B4((void **)&v2407, "#");
  v2408 = 0;
  v2409 = 0;
  v2410 = 0;
    (unsigned __int64 *)&v2408,
    &v2407);
  ItemInstance::ItemInstance((ItemInstance *)&v2401, Block::mLog, 1, 1);
  definition<ItemInstance>((int)&v2405, 35, (int)&v2401);
  v378 = v2405;
  v379 = v2406;
  if ( v2405 != v2406 )
      v380 = *(void **)(v378 + 60);
      if ( v380 )
        operator delete(v380);
      v381 = *(void **)(v378 + 44);
      if ( v381 )
        operator delete(v381);
      v382 = *(_DWORD *)(v378 + 16);
      if ( v382 )
        (*(void (**)(void))(*(_DWORD *)v382 + 4))();
      *(_DWORD *)(v378 + 16) = 0;
      v378 += 88;
    while ( v379 != v378 );
    v378 = v2405;
  if ( v378 )
    operator delete((void *)v378);
  if ( v2404 )
    operator delete(v2404);
  if ( v2403 )
    operator delete(v2403);
  if ( v2402 )
    (*(void (**)(void))(*(_DWORD *)v2402 + 4))();
  v383 = v2408;
  v384 = v2409;
  v2402 = 0;
  if ( v2408 != v2409 )
      v387 = (int *)(*(_DWORD *)v383 - 12);
      if ( v387 != &dword_28898C0 )
        v385 = (unsigned int *)(*(_DWORD *)v383 - 4);
            v386 = __ldrex(v385);
          while ( __strex(v386 - 1, v385) );
          v386 = (*v385)--;
        if ( v386 <= 0 )
          j_j_j_j__ZdlPv_9(v387);
      v383 = (char *)v383 + 4;
    while ( v383 != v384 );
    v383 = v2408;
  if ( v383 )
    operator delete(v383);
  v388 = (void *)(v2407 - 12);
  if ( (int *)(v2407 - 12) != &dword_28898C0 )
    v785 = (unsigned int *)(v2407 - 4);
        v786 = __ldrex(v785);
      while ( __strex(v786 - 1, v785) );
      v786 = (*v785)--;
    if ( v786 <= 0 )
      j_j_j_j__ZdlPv_9(v388);
  if ( v2414 )
    operator delete(v2414);
  if ( v2413 )
    operator delete(v2413);
  if ( v2412 )
    (*(void (**)(void))(*(_DWORD *)v2412 + 4))();
  v2412 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2397, Block::mWoodPlanks, 4, 2);
  sub_21E94B4((void **)&v2393, "#");
  v2394 = 0;
  v2395 = 0;
  v2396 = 0;
    (unsigned __int64 *)&v2394,
    &v2393);
  ItemInstance::ItemInstance((ItemInstance *)&v2387, Block::mLog, 1, 2);
  definition<ItemInstance>((int)&v2391, 35, (int)&v2387);
  v389 = v2391;
  v390 = v2392;
  if ( v2391 != v2392 )
      v391 = *(void **)(v389 + 60);
      if ( v391 )
        operator delete(v391);
      v392 = *(void **)(v389 + 44);
      if ( v392 )
        operator delete(v392);
      v393 = *(_DWORD *)(v389 + 16);
      if ( v393 )
        (*(void (**)(void))(*(_DWORD *)v393 + 4))();
      *(_DWORD *)(v389 + 16) = 0;
      v389 += 88;
    while ( v390 != v389 );
    v389 = v2391;
  if ( v389 )
    operator delete((void *)v389);
  if ( v2390 )
    operator delete(v2390);
  if ( v2389 )
    operator delete(v2389);
  if ( v2388 )
    (*(void (**)(void))(*(_DWORD *)v2388 + 4))();
  v394 = v2394;
  v395 = v2395;
  v2388 = 0;
  if ( v2394 != v2395 )
      v398 = (int *)(*(_DWORD *)v394 - 12);
      if ( v398 != &dword_28898C0 )
        v396 = (unsigned int *)(*(_DWORD *)v394 - 4);
            v397 = __ldrex(v396);
          while ( __strex(v397 - 1, v396) );
          v397 = (*v396)--;
        if ( v397 <= 0 )
          j_j_j_j__ZdlPv_9(v398);
      v394 = (char *)v394 + 4;
    while ( v394 != v395 );
    v394 = v2394;
  if ( v394 )
    operator delete(v394);
  v399 = (void *)(v2393 - 12);
  if ( (int *)(v2393 - 12) != &dword_28898C0 )
    v787 = (unsigned int *)(v2393 - 4);
        v788 = __ldrex(v787);
      while ( __strex(v788 - 1, v787) );
      v788 = (*v787)--;
    if ( v788 <= 0 )
      j_j_j_j__ZdlPv_9(v399);
  if ( v2400 )
    operator delete(v2400);
  if ( v2399 )
    operator delete(v2399);
  if ( v2398 )
    (*(void (**)(void))(*(_DWORD *)v2398 + 4))();
  v2398 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2383, Block::mWoodPlanks, 4, 3);
  sub_21E94B4((void **)&v2379, "#");
  v2380 = 0;
  v2381 = 0;
  v2382 = 0;
    (unsigned __int64 *)&v2380,
    (int *)&v2379);
  ItemInstance::ItemInstance((ItemInstance *)&v2373, Block::mLog, 1, 3);
  definition<ItemInstance>((int)&v2377, 35, (int)&v2373);
  v400 = v2377;
  v401 = v2378;
  if ( v2377 != v2378 )
      v402 = *(void **)(v400 + 60);
      if ( v402 )
        operator delete(v402);
      v403 = *(void **)(v400 + 44);
      if ( v403 )
        operator delete(v403);
      v404 = *(_DWORD *)(v400 + 16);
      if ( v404 )
        (*(void (**)(void))(*(_DWORD *)v404 + 4))();
      *(_DWORD *)(v400 + 16) = 0;
      v400 += 88;
    while ( v401 != v400 );
    v400 = v2377;
  if ( v400 )
    operator delete((void *)v400);
  if ( v2376 )
    operator delete(v2376);
  if ( v2375 )
    operator delete(v2375);
  if ( v2374 )
    (*(void (**)(void))(*(_DWORD *)v2374 + 4))();
  v405 = v2380;
  v406 = v2381;
  v2374 = 0;
  if ( v2380 != v2381 )
      v409 = (int *)(*(_DWORD *)v405 - 12);
      if ( v409 != &dword_28898C0 )
        v407 = (unsigned int *)(*(_DWORD *)v405 - 4);
            v408 = __ldrex(v407);
          while ( __strex(v408 - 1, v407) );
          v408 = (*v407)--;
        if ( v408 <= 0 )
          j_j_j_j__ZdlPv_9(v409);
      v405 = (char *)v405 + 4;
    while ( v405 != v406 );
    v405 = v2380;
  if ( v405 )
    operator delete(v405);
  v410 = (void *)(*(_DWORD *)&v2379 - 12);
  if ( (int *)(*(_DWORD *)&v2379 - 12) != &dword_28898C0 )
    v789 = (unsigned int *)(*(_DWORD *)&v2379 - 4);
        v790 = __ldrex(v789);
      while ( __strex(v790 - 1, v789) );
      v790 = (*v789)--;
    if ( v790 <= 0 )
      j_j_j_j__ZdlPv_9(v410);
  if ( v2386 )
    operator delete(v2386);
  if ( v2385 )
    operator delete(v2385);
  if ( v2384 )
    (*(void (**)(void))(*(_DWORD *)v2384 + 4))();
  v2384 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2369, Block::mWoodPlanks, 4, 4);
  sub_21E94B4((void **)&v2365, "#");
  v2366 = 0;
  v2367 = 0;
  v2368 = 0;
    (unsigned __int64 *)&v2366,
    &v2365);
  ItemInstance::ItemInstance((ItemInstance *)&v2359, Block::mLog2, 1, 0);
  definition<ItemInstance>((int)&v2363, 35, (int)&v2359);
  v411 = *(_DWORD *)&v2363;
  v412 = v2364;
  if ( *(_DWORD *)&v2363 != v2364 )
      v413 = *(void **)(v411 + 60);
      if ( v413 )
        operator delete(v413);
      v414 = *(void **)(v411 + 44);
      if ( v414 )
        operator delete(v414);
      v415 = *(_DWORD *)(v411 + 16);
      if ( v415 )
        (*(void (**)(void))(*(_DWORD *)v415 + 4))();
      *(_DWORD *)(v411 + 16) = 0;
      v411 += 88;
    while ( v412 != v411 );
    v411 = *(_DWORD *)&v2363;
  if ( v411 )
    operator delete((void *)v411);
  if ( v2362 )
    operator delete(v2362);
  if ( v2361 )
    operator delete(v2361);
  if ( v2360 )
    (*(void (**)(void))(*(_DWORD *)v2360 + 4))();
  v416 = v2366;
  v417 = v2367;
  v2360 = 0;
  if ( v2366 != v2367 )
      v420 = (int *)(*(_DWORD *)v416 - 12);
      if ( v420 != &dword_28898C0 )
        v418 = (unsigned int *)(*(_DWORD *)v416 - 4);
            v419 = __ldrex(v418);
          while ( __strex(v419 - 1, v418) );
          v419 = (*v418)--;
        if ( v419 <= 0 )
          j_j_j_j__ZdlPv_9(v420);
      v416 = (char *)v416 + 4;
    while ( v416 != v417 );
    v416 = v2366;
  if ( v416 )
    operator delete(v416);
  v421 = (void *)(v2365 - 12);
  if ( (int *)(v2365 - 12) != &dword_28898C0 )
    v791 = (unsigned int *)(v2365 - 4);
        v792 = __ldrex(v791);
      while ( __strex(v792 - 1, v791) );
      v792 = (*v791)--;
    if ( v792 <= 0 )
      j_j_j_j__ZdlPv_9(v421);
  if ( v2372 )
    operator delete(v2372);
  if ( v2371 )
    operator delete(v2371);
  if ( v2370 )
    (*(void (**)(void))(*(_DWORD *)v2370 + 4))();
  v2370 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2355, Block::mWoodPlanks, 4, 5);
  sub_21E94B4((void **)&v2351, "#");
  v2352 = 0;
  v2353 = 0;
  v2354 = 0;
    (unsigned __int64 *)&v2352,
    &v2351);
  ItemInstance::ItemInstance((ItemInstance *)&v2345, Block::mLog2, 1, 1);
  definition<ItemInstance>((int)&v2349, 35, (int)&v2345);
  v422 = v2349;
  v423 = v2350;
  if ( v2349 != v2350 )
      v424 = *(void **)(v422 + 60);
      if ( v424 )
        operator delete(v424);
      v425 = *(void **)(v422 + 44);
      if ( v425 )
        operator delete(v425);
      v426 = *(_DWORD *)(v422 + 16);
      if ( v426 )
        (*(void (**)(void))(*(_DWORD *)v426 + 4))();
      *(_DWORD *)(v422 + 16) = 0;
      v422 += 88;
    while ( v423 != v422 );
    v422 = v2349;
  if ( v422 )
    operator delete((void *)v422);
  if ( v2348 )
    operator delete(v2348);
  if ( v2347 )
    operator delete(v2347);
  if ( v2346 )
    (*(void (**)(void))(*(_DWORD *)v2346 + 4))();
  v427 = v2352;
  v428 = v2353;
  v2346 = 0;
  if ( v2352 != v2353 )
      v431 = (int *)(*(_DWORD *)v427 - 12);
      if ( v431 != &dword_28898C0 )
        v429 = (unsigned int *)(*(_DWORD *)v427 - 4);
            v430 = __ldrex(v429);
          while ( __strex(v430 - 1, v429) );
          v430 = (*v429)--;
        if ( v430 <= 0 )
          j_j_j_j__ZdlPv_9(v431);
      v427 = (char *)v427 + 4;
    while ( v427 != v428 );
    v427 = v2352;
  if ( v427 )
    operator delete(v427);
  v432 = (void *)(v2351 - 12);
  if ( (int *)(v2351 - 12) != &dword_28898C0 )
    v793 = (unsigned int *)(v2351 - 4);
        v794 = __ldrex(v793);
      while ( __strex(v794 - 1, v793) );
      v794 = (*v793)--;
    if ( v794 <= 0 )
      j_j_j_j__ZdlPv_9(v432);
  if ( v2358 )
    operator delete(v2358);
  if ( v2357 )
    operator delete(v2357);
  if ( v2356 )
    (*(void (**)(void))(*(_DWORD *)v2356 + 4))();
  v2356 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2341, Item::mStick, 4);
  sub_21E94B4((void **)&v2340, "#");
  sub_21E94B4((void **)&v2339, "#");
  definition<Block const*>((int)&v2337, 35, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1, (int)&v2341, &v2340, &v2339);
  v433 = v2337;
  v434 = v2338;
  if ( v2337 != v2338 )
      v435 = *(void **)(v433 + 60);
      if ( v435 )
        operator delete(v435);
      v436 = *(void **)(v433 + 44);
      if ( v436 )
        operator delete(v436);
      v437 = *(_DWORD *)(v433 + 16);
      if ( v437 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v437 + 4))(v437);
      *(_DWORD *)(v433 + 16) = 0;
      v433 += 88;
    while ( v434 != v433 );
    v433 = v2337;
  if ( v433 )
    operator delete((void *)v433);
  v438 = (void *)(v2339 - 12);
  if ( (int *)(v2339 - 12) != &dword_28898C0 )
    v795 = (unsigned int *)(v2339 - 4);
        v796 = __ldrex(v795);
      while ( __strex(v796 - 1, v795) );
      v796 = (*v795)--;
    if ( v796 <= 0 )
      j_j_j_j__ZdlPv_9(v438);
  v439 = (void *)(v2340 - 12);
  if ( (int *)(v2340 - 12) != &dword_28898C0 )
    v797 = (unsigned int *)(v2340 - 4);
        v798 = __ldrex(v797);
      while ( __strex(v798 - 1, v797) );
      v798 = (*v797)--;
    if ( v798 <= 0 )
      j_j_j_j__ZdlPv_9(v439);
  if ( v2344 )
    operator delete(v2344);
  if ( v2343 )
    operator delete(v2343);
  if ( v2342 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2342 + 4))(v2342);
  v2342 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2333, Block::mTorch, 4);
  sub_21E94B4((void **)&v2332, "X");
  sub_21E94B4((void **)&v2331, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v2325, Item::mCoal, 1, 0x7FFF);
  definition<ItemInstance,Item *>((int)&v2329, 88, (int)&v2325, 35, Item::mStick);
  Recipes::addShapedRecipe((int)v1, (int)&v2333, &v2332, &v2331);
  v440 = v2329;
  v441 = v2330;
  if ( v2329 != v2330 )
      v442 = *(void **)(v440 + 60);
      if ( v442 )
        operator delete(v442);
      v443 = *(void **)(v440 + 44);
      if ( v443 )
        operator delete(v443);
      v444 = *(_DWORD *)(v440 + 16);
      if ( v444 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v444 + 4))(v444);
      *(_DWORD *)(v440 + 16) = 0;
      v440 += 88;
    while ( v441 != v440 );
    v440 = v2329;
  if ( v440 )
    operator delete((void *)v440);
  if ( v2328 )
    operator delete(v2328);
  if ( v2327 )
    operator delete(v2327);
  if ( v2326 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2326 + 4))(v2326);
  v2326 = 0;
  v445 = (void *)(v2331 - 12);
  if ( (int *)(v2331 - 12) != &dword_28898C0 )
    v799 = (unsigned int *)(v2331 - 4);
        v800 = __ldrex(v799);
      while ( __strex(v800 - 1, v799) );
      v800 = (*v799)--;
    if ( v800 <= 0 )
      j_j_j_j__ZdlPv_9(v445);
  v446 = (void *)(v2332 - 12);
  if ( (int *)(v2332 - 12) != &dword_28898C0 )
    v801 = (unsigned int *)(v2332 - 4);
        v802 = __ldrex(v801);
      while ( __strex(v802 - 1, v801) );
      v802 = (*v801)--;
    if ( v802 <= 0 )
      j_j_j_j__ZdlPv_9(v446);
  if ( v2336 )
    operator delete(v2336);
  if ( v2335 )
    operator delete(v2335);
  if ( v2334 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2334 + 4))(v2334);
  v2334 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2321, Item::mBowl, 4);
  sub_21E94B4((void **)&v2320, "# #");
  sub_21E94B4((void **)&v2319, " # ");
  definition<Block const*>((int)&v2317, 35, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1, (int)&v2321, &v2320, &v2319);
  v447 = *(_QWORD *)&v2317;
  if ( v2317 != v2318 )
      v448 = *(void **)(v447 + 60);
      if ( v448 )
        operator delete(v448);
      v449 = *(void **)(v447 + 44);
      if ( v449 )
        operator delete(v449);
      v450 = *(_DWORD *)(v447 + 16);
      if ( v450 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v450 + 4))(v450);
      *(_DWORD *)(v447 + 16) = 0;
      LODWORD(v447) = v447 + 88;
    while ( HIDWORD(v447) != (_DWORD)v447 );
    LODWORD(v447) = v2317;
  if ( (_DWORD)v447 )
    operator delete((void *)v447);
  v451 = (void *)(v2319 - 12);
  if ( (int *)(v2319 - 12) != &dword_28898C0 )
    v803 = (unsigned int *)(v2319 - 4);
        v804 = __ldrex(v803);
      while ( __strex(v804 - 1, v803) );
      v804 = (*v803)--;
    if ( v804 <= 0 )
      j_j_j_j__ZdlPv_9(v451);
  v452 = (void *)(v2320 - 12);
  if ( (int *)(v2320 - 12) != &dword_28898C0 )
    v805 = (unsigned int *)(v2320 - 4);
        v806 = __ldrex(v805);
      while ( __strex(v806 - 1, v805) );
      v806 = (*v805)--;
    if ( v806 <= 0 )
      j_j_j_j__ZdlPv_9(v452);
  if ( v2324 )
    operator delete(v2324);
  if ( v2323 )
    operator delete(v2323);
  if ( v2322 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v2322 + 4))(v2322);
  v2322 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2313, Item::mRabbitStew, 1);
  sub_21E94B4((void **)&v2312, " R ");
  sub_21E94B4((void **)&v2311, "CPM");
  sub_21E94B4((void **)&v2310, " B ");
  definition<Item *,Item *,Item *,Block const*,Item *>(
    (int)&v2308,
    82,
    Item::mRabbitCooked,
    Item::mCarrot,
    80,
    Item::mPotatoBaked,
    77,
    Block::mBrownMushroom,
    Item::mBowl);
  Recipes::addShapedRecipe((int)v1, (int)&v2313, &v2312, &v2311, &v2310);
  v453 = *(_QWORD *)&v2308;
  if ( v2308 != v2309 )
      v454 = *(void **)(v453 + 60);
      if ( v454 )
        operator delete(v454);
      v455 = *(void **)(v453 + 44);
      if ( v455 )
        operator delete(v455);
      v456 = *(_DWORD *)(v453 + 16);
      if ( v456 )
        (*(void (**)(void))(*(_DWORD *)v456 + 4))();
      *(_DWORD *)(v453 + 16) = 0;
      LODWORD(v453) = v453 + 88;
    while ( HIDWORD(v453) != (_DWORD)v453 );
    LODWORD(v453) = v2308;
  if ( (_DWORD)v453 )
    operator delete((void *)v453);
  v457 = (void *)(v2310 - 12);
  if ( (int *)(v2310 - 12) != &dword_28898C0 )
    v807 = (unsigned int *)(v2310 - 4);
        v808 = __ldrex(v807);
      while ( __strex(v808 - 1, v807) );
      v808 = (*v807)--;
    if ( v808 <= 0 )
      j_j_j_j__ZdlPv_9(v457);
  v458 = (void *)(v2311 - 12);
  if ( (int *)(v2311 - 12) != &dword_28898C0 )
    v809 = (unsigned int *)(v2311 - 4);
        v810 = __ldrex(v809);
      while ( __strex(v810 - 1, v809) );
      v810 = (*v809)--;
    if ( v810 <= 0 )
      j_j_j_j__ZdlPv_9(v458);
  v459 = (void *)(v2312 - 12);
  if ( (int *)(v2312 - 12) != &dword_28898C0 )
    v811 = (unsigned int *)(v2312 - 4);
        v812 = __ldrex(v811);
      while ( __strex(v812 - 1, v811) );
      v812 = (*v811)--;
    if ( v812 <= 0 )
      j_j_j_j__ZdlPv_9(v459);
  if ( v2316 )
    operator delete(v2316);
  if ( v2315 )
    operator delete(v2315);
  if ( v2314 )
    (*(void (**)(void))(*(_DWORD *)v2314 + 4))();
  v2314 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2304, Item::mRabbitStew, 1);
  sub_21E94B4((void **)&v2303, " R ");
  sub_21E94B4((void **)&v2302, "CPM");
  sub_21E94B4((void **)&v2301, " B ");
    (int)&v2299,
    Block::mRedMushroom,
  Recipes::addShapedRecipe((int)v1, (int)&v2304, &v2303, &v2302, &v2301);
  v460 = *(_QWORD *)&v2299;
  if ( v2299 != v2300 )
      v461 = *(void **)(v460 + 60);
      if ( v461 )
        operator delete(v461);
      v462 = *(void **)(v460 + 44);
      if ( v462 )
        operator delete(v462);
      v463 = *(_DWORD *)(v460 + 16);
      if ( v463 )
        (*(void (**)(void))(*(_DWORD *)v463 + 4))();
      *(_DWORD *)(v460 + 16) = 0;
      LODWORD(v460) = v460 + 88;
    while ( HIDWORD(v460) != (_DWORD)v460 );
    LODWORD(v460) = v2299;
  if ( (_DWORD)v460 )
    operator delete((void *)v460);
  v464 = (void *)(v2301 - 12);
  if ( (int *)(v2301 - 12) != &dword_28898C0 )
    v813 = (unsigned int *)(v2301 - 4);
        v814 = __ldrex(v813);
      while ( __strex(v814 - 1, v813) );
      v814 = (*v813)--;
    if ( v814 <= 0 )
      j_j_j_j__ZdlPv_9(v464);
  v465 = (void *)(v2302 - 12);
  if ( (int *)(v2302 - 12) != &dword_28898C0 )
    v815 = (unsigned int *)(v2302 - 4);
        v816 = __ldrex(v815);
      while ( __strex(v816 - 1, v815) );
      v816 = (*v815)--;
    if ( v816 <= 0 )
      j_j_j_j__ZdlPv_9(v465);
  v466 = (void *)(v2303 - 12);
  if ( (int *)(v2303 - 12) != &dword_28898C0 )
    v817 = (unsigned int *)(v2303 - 4);
        v818 = __ldrex(v817);
      while ( __strex(v818 - 1, v817) );
      v818 = (*v817)--;
    if ( v818 <= 0 )
      j_j_j_j__ZdlPv_9(v466);
  if ( v2307 )
    operator delete(v2307);
  if ( v2306 )
    operator delete(v2306);
  if ( v2305 )
    (*(void (**)(void))(*(_DWORD *)v2305 + 4))();
  v2305 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2295, Item::mGlass_bottle, 3);
  sub_21E94B4((void **)&v2294, "# #");
  sub_21E94B4((void **)&v2293, " # ");
  definition<Block const*>((int)&v2291, 35, Block::mGlass);
  Recipes::addShapedRecipe((int)v1, (int)&v2295, &v2294, &v2293);
  v467 = *(_QWORD *)&v2291;
  if ( v2291 != v2292 )
      v468 = *(void **)(v467 + 60);
      if ( v468 )
        operator delete(v468);
      v469 = *(void **)(v467 + 44);
      if ( v469 )
        operator delete(v469);
      v470 = *(_DWORD *)(v467 + 16);
      if ( v470 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v470 + 4))(v470, *(_DWORD *)(*(_DWORD *)v470 + 4));
      *(_DWORD *)(v467 + 16) = 0;
      LODWORD(v467) = v467 + 88;
    while ( HIDWORD(v467) != (_DWORD)v467 );
    LODWORD(v467) = v2291;
  if ( (_DWORD)v467 )
    operator delete((void *)v467);
  v471 = (void *)(v2293 - 12);
  if ( (int *)(v2293 - 12) != &dword_28898C0 )
    v819 = (unsigned int *)(v2293 - 4);
        v820 = __ldrex(v819);
      while ( __strex(v820 - 1, v819) );
      v820 = (*v819)--;
    if ( v820 <= 0 )
      j_j_j_j__ZdlPv_9(v471);
  v472 = (void *)(v2294 - 12);
  if ( (int *)(v2294 - 12) != &dword_28898C0 )
    v821 = (unsigned int *)(v2294 - 4);
        v822 = __ldrex(v821);
      while ( __strex(v822 - 1, v821) );
      v822 = (*v821)--;
    if ( v822 <= 0 )
      j_j_j_j__ZdlPv_9(v472);
  if ( v2298 )
    operator delete(v2298);
  if ( v2297 )
    operator delete(v2297);
  if ( v2296 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2296 + 4))(v2296, *(_DWORD *)(*(_DWORD *)v2296 + 4));
  v2296 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2287, Item::mFlowerPot, 1);
  sub_21E94B4((void **)&v2286, "# #");
  sub_21E94B4((void **)&v2285, " # ");
  definition<Item *>((int)&v2283, 35, Item::mBrick);
  Recipes::addShapedRecipe((int)v1, (int)&v2287, &v2286, &v2285);
  v473 = *(_QWORD *)&v2283;
  if ( v2283 != v2284 )
      v474 = *(void **)(v473 + 60);
      if ( v474 )
        operator delete(v474);
      v475 = *(void **)(v473 + 44);
      if ( v475 )
        operator delete(v475);
      v476 = *(_DWORD *)(v473 + 16);
      if ( v476 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v476 + 4))(v476, *(_DWORD *)(*(_DWORD *)v476 + 4));
      *(_DWORD *)(v473 + 16) = 0;
      LODWORD(v473) = v473 + 88;
    while ( HIDWORD(v473) != (_DWORD)v473 );
    LODWORD(v473) = v2283;
  if ( (_DWORD)v473 )
    operator delete((void *)v473);
  v477 = (void *)(v2285 - 12);
  if ( (int *)(v2285 - 12) != &dword_28898C0 )
    v823 = (unsigned int *)(v2285 - 4);
        v824 = __ldrex(v823);
      while ( __strex(v824 - 1, v823) );
      v824 = (*v823)--;
    if ( v824 <= 0 )
      j_j_j_j__ZdlPv_9(v477);
  v478 = (void *)(v2286 - 12);
  if ( (int *)(v2286 - 12) != &dword_28898C0 )
    v825 = (unsigned int *)(v2286 - 4);
        v826 = __ldrex(v825);
      while ( __strex(v826 - 1, v825) );
      v826 = (*v825)--;
    if ( v826 <= 0 )
      j_j_j_j__ZdlPv_9(v478);
  if ( v2290 )
    operator delete(v2290);
  if ( v2289 )
    operator delete(v2289);
  if ( v2288 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2288 + 4))(v2288, *(_DWORD *)(*(_DWORD *)v2288 + 4));
  v2288 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2279, Block::mRail, 16);
  sub_21E94B4((void **)&v2278, "X X");
  sub_21E94B4((void **)&v2277, "X#X");
  sub_21E94B4((void **)&v2276, "X X");
  definition<Item *,Item *>((int)&v2274, 88, Item::mIronIngot, 35, Item::mStick);
  Recipes::addShapedRecipe((int)v1, (int)&v2279, &v2278, &v2277, &v2276);
  v479 = *(_QWORD *)&v2274;
  if ( v2274 != v2275 )
      v480 = *(void **)(v479 + 60);
      if ( v480 )
        operator delete(v480);
      v481 = *(void **)(v479 + 44);
      if ( v481 )
        operator delete(v481);
      v482 = *(_DWORD *)(v479 + 16);
      if ( v482 )
        (*(void (**)(void))(*(_DWORD *)v482 + 4))();
      *(_DWORD *)(v479 + 16) = 0;
      LODWORD(v479) = v479 + 88;
    while ( HIDWORD(v479) != (_DWORD)v479 );
    LODWORD(v479) = v2274;
  if ( (_DWORD)v479 )
    operator delete((void *)v479);
  v483 = (void *)(v2276 - 12);
  if ( (int *)(v2276 - 12) != &dword_28898C0 )
    v827 = (unsigned int *)(v2276 - 4);
        v828 = __ldrex(v827);
      while ( __strex(v828 - 1, v827) );
      v828 = (*v827)--;
    if ( v828 <= 0 )
      j_j_j_j__ZdlPv_9(v483);
  v484 = (void *)(v2277 - 12);
  if ( (int *)(v2277 - 12) != &dword_28898C0 )
    v829 = (unsigned int *)(v2277 - 4);
        v830 = __ldrex(v829);
      while ( __strex(v830 - 1, v829) );
      v830 = (*v829)--;
    if ( v830 <= 0 )
      j_j_j_j__ZdlPv_9(v484);
  v485 = (void *)(v2278 - 12);
  if ( (int *)(v2278 - 12) != &dword_28898C0 )
    v831 = (unsigned int *)(v2278 - 4);
        v832 = __ldrex(v831);
      while ( __strex(v832 - 1, v831) );
      v832 = (*v831)--;
    if ( v832 <= 0 )
      j_j_j_j__ZdlPv_9(v485);
  if ( v2282 )
    operator delete(v2282);
  if ( v2281 )
    operator delete(v2281);
  if ( v2280 )
    (*(void (**)(void))(*(_DWORD *)v2280 + 4))();
  v2280 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2270, Block::mGoldenRail, 6);
  sub_21E94B4((void **)&v2269, "X X");
  sub_21E94B4((void **)&v2268, "X#X");
  sub_21E94B4((void **)&v2267, "XRX");
  definition<Item *,Item *,Item *>((int)&v2265, 88, Item::mGoldIngot, 82, Item::mRedStone, 35, Item::mStick);
  Recipes::addShapedRecipe((int)v1, (int)&v2270, &v2269, &v2268, &v2267);
  v486 = *(_QWORD *)&v2265;
  if ( v2265 != v2266 )
      v487 = *(void **)(v486 + 60);
      if ( v487 )
        operator delete(v487);
      v488 = *(void **)(v486 + 44);
      if ( v488 )
        operator delete(v488);
      v489 = *(_DWORD *)(v486 + 16);
      if ( v489 )
        (*(void (**)(void))(*(_DWORD *)v489 + 4))();
      *(_DWORD *)(v486 + 16) = 0;
      LODWORD(v486) = v486 + 88;
    while ( HIDWORD(v486) != (_DWORD)v486 );
    LODWORD(v486) = v2265;
  if ( (_DWORD)v486 )
    operator delete((void *)v486);
  v490 = (void *)(v2267 - 12);
  if ( (int *)(v2267 - 12) != &dword_28898C0 )
    v833 = (unsigned int *)(v2267 - 4);
        v834 = __ldrex(v833);
      while ( __strex(v834 - 1, v833) );
      v834 = (*v833)--;
    if ( v834 <= 0 )
      j_j_j_j__ZdlPv_9(v490);
  v491 = (void *)(v2268 - 12);
  if ( (int *)(v2268 - 12) != &dword_28898C0 )
    v835 = (unsigned int *)(v2268 - 4);
        v836 = __ldrex(v835);
      while ( __strex(v836 - 1, v835) );
      v836 = (*v835)--;
    if ( v836 <= 0 )
      j_j_j_j__ZdlPv_9(v491);
  v492 = (void *)(v2269 - 12);
  if ( (int *)(v2269 - 12) != &dword_28898C0 )
    v837 = (unsigned int *)(v2269 - 4);
        v838 = __ldrex(v837);
      while ( __strex(v838 - 1, v837) );
      v838 = (*v837)--;
    if ( v838 <= 0 )
      j_j_j_j__ZdlPv_9(v492);
  if ( v2273 )
    operator delete(v2273);
  if ( v2272 )
    operator delete(v2272);
  if ( v2271 )
    (*(void (**)(void))(*(_DWORD *)v2271 + 4))();
  v2271 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2261, Block::mDetectorRail, 6);
  sub_21E94B4((void **)&v2260, "X X");
  sub_21E94B4((void **)&v2259, "X#X");
  sub_21E94B4((void **)&v2258, "XRX");
  definition<Item *,Item *,Block const*>(
    (int)&v2256,
    88,
    Item::mIronIngot,
    Item::mRedStone,
    35,
    Block::mStonePressurePlate);
  Recipes::addShapedRecipe((int)v1, (int)&v2261, &v2260, &v2259, &v2258);
  v493 = *(_QWORD *)&v2256;
  if ( v2256 != v2257 )
      v494 = *(void **)(v493 + 60);
      if ( v494 )
        operator delete(v494);
      v495 = *(void **)(v493 + 44);
      if ( v495 )
        operator delete(v495);
      v496 = *(_DWORD *)(v493 + 16);
      if ( v496 )
        (*(void (**)(void))(*(_DWORD *)v496 + 4))();
      *(_DWORD *)(v493 + 16) = 0;
      LODWORD(v493) = v493 + 88;
    while ( HIDWORD(v493) != (_DWORD)v493 );
    LODWORD(v493) = v2256;
  if ( (_DWORD)v493 )
    operator delete((void *)v493);
  v497 = (void *)(v2258 - 12);
  if ( (int *)(v2258 - 12) != &dword_28898C0 )
    v839 = (unsigned int *)(v2258 - 4);
        v840 = __ldrex(v839);
      while ( __strex(v840 - 1, v839) );
      v840 = (*v839)--;
    if ( v840 <= 0 )
      j_j_j_j__ZdlPv_9(v497);
  v498 = (void *)(v2259 - 12);
  if ( (int *)(v2259 - 12) != &dword_28898C0 )
    v841 = (unsigned int *)(v2259 - 4);
        v842 = __ldrex(v841);
      while ( __strex(v842 - 1, v841) );
      v842 = (*v841)--;
    if ( v842 <= 0 )
      j_j_j_j__ZdlPv_9(v498);
  v499 = (void *)(v2260 - 12);
  if ( (int *)(v2260 - 12) != &dword_28898C0 )
    v843 = (unsigned int *)(v2260 - 4);
        v844 = __ldrex(v843);
      while ( __strex(v844 - 1, v843) );
      v844 = (*v843)--;
    if ( v844 <= 0 )
      j_j_j_j__ZdlPv_9(v499);
  if ( v2264 )
    operator delete(v2264);
  if ( v2263 )
    operator delete(v2263);
  if ( v2262 )
    (*(void (**)(void))(*(_DWORD *)v2262 + 4))();
  v2262 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2252, Block::mActivatorRail, 6);
  sub_21E94B4((void **)&v2251, "XSX");
  sub_21E94B4((void **)&v2250, "XRX");
  sub_21E94B4((void **)&v2249, "XSX");
  definition<Item *,Block const*,Item *>(
    (int)&v2247,
    Block::mLitRedStoneTorch,
    83,
    Item::mStick);
  Recipes::addShapedRecipe((int)v1, (int)&v2252, &v2251, &v2250, &v2249);
  v500 = *(_QWORD *)&v2247;
  if ( v2247 != v2248 )
      v501 = *(void **)(v500 + 60);
      if ( v501 )
        operator delete(v501);
      v502 = *(void **)(v500 + 44);
      if ( v502 )
        operator delete(v502);
      v503 = *(_DWORD *)(v500 + 16);
      if ( v503 )
        (*(void (**)(void))(*(_DWORD *)v503 + 4))();
      *(_DWORD *)(v500 + 16) = 0;
      LODWORD(v500) = v500 + 88;
    while ( HIDWORD(v500) != (_DWORD)v500 );
    LODWORD(v500) = v2247;
  if ( (_DWORD)v500 )
    operator delete((void *)v500);
  v504 = (void *)(v2249 - 12);
  if ( (int *)(v2249 - 12) != &dword_28898C0 )
    v845 = (unsigned int *)(v2249 - 4);
        v846 = __ldrex(v845);
      while ( __strex(v846 - 1, v845) );
      v846 = (*v845)--;
    if ( v846 <= 0 )
      j_j_j_j__ZdlPv_9(v504);
  v505 = (void *)(v2250 - 12);
  if ( (int *)(v2250 - 12) != &dword_28898C0 )
    v847 = (unsigned int *)(v2250 - 4);
        v848 = __ldrex(v847);
      while ( __strex(v848 - 1, v847) );
      v848 = (*v847)--;
    if ( v848 <= 0 )
      j_j_j_j__ZdlPv_9(v505);
  v506 = (void *)(v2251 - 12);
  if ( (int *)(v2251 - 12) != &dword_28898C0 )
    v849 = (unsigned int *)(v2251 - 4);
        v850 = __ldrex(v849);
      while ( __strex(v850 - 1, v849) );
      v850 = (*v849)--;
    if ( v850 <= 0 )
      j_j_j_j__ZdlPv_9(v506);
  if ( v2255 )
    operator delete(v2255);
  if ( v2254 )
    operator delete(v2254);
  if ( v2253 )
    (*(void (**)(void))(*(_DWORD *)v2253 + 4))();
  v2253 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2243, Item::mMinecart, 1);
  sub_21E94B4((void **)&v2242, "# #");
  sub_21E94B4((void **)&v2241, "###");
  definition<Item *>((int)&v2239, 35, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v1, (int)&v2243, &v2242, &v2241);
  v507 = v2239;
  v508 = v2240;
  if ( v2239 == v2240 )
    v512 = &v2089;
  else
      v509 = *(void **)(v507 + 60);
      if ( v509 )
        operator delete(v509);
      v510 = *(void **)(v507 + 44);
      if ( v510 )
        operator delete(v510);
      v511 = *(_DWORD *)(v507 + 16);
      if ( v511 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v511 + 4))(v511, *(_DWORD *)(*(_DWORD *)v511 + 4));
      *(_DWORD *)(v507 + 16) = 0;
      v507 += 88;
    while ( v508 != v507 );
    v507 = v2239;
  if ( v507 )
    operator delete((void *)v507);
  v513 = v512[1023];
  v514 = (void *)(v513 - 12);
  if ( (int *)(v513 - 12) != &dword_28898C0 )
    v851 = (unsigned int *)(v513 - 4);
        v852 = __ldrex(v851);
      while ( __strex(v852 - 1, v851) );
      v852 = (*v851)--;
    if ( v852 <= 0 )
      j_j_j_j__ZdlPv_9(v514);
  v515 = (void *)(v2242 - 12);
  if ( (int *)(v2242 - 12) != &dword_28898C0 )
    v853 = (unsigned int *)(v2242 - 4);
        v854 = __ldrex(v853);
      while ( __strex(v854 - 1, v853) );
      v854 = (*v853)--;
    if ( v854 <= 0 )
      j_j_j_j__ZdlPv_9(v515);
  if ( v2246 )
    operator delete(v2246);
  if ( v2245 )
    operator delete(v2245);
  if ( v2244 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v2244 + 4))(v2244, *(_DWORD *)(*(_DWORD *)v2244 + 4));
  v2244 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2238, Item::mChestMinecart, 1);
  sub_21E94B4((void **)&v2237, (const char *)aCdefghjklmnopq);
  sub_21E94B4((void **)&v2236, (const char *)&aCdefghjklmnopq[9]);
  definition<Block const*,Item *>((int)&v2235, 67, Block::mChest, 77, Item::mMinecart);
  Recipes::addShapedRecipe((int)v1, (int)&v2238, &v2237, &v2236);
  v516 = v512;
  v517 = v512[993];
  v518 = v512[994];
  v519 = v516;
  if ( v517 == v518 )
    v523 = v516;
      v520 = *(void **)(v517 + 60);
      if ( v520 )
        operator delete(v520);
      v521 = *(void **)(v517 + 44);
      if ( v521 )
        operator delete(v521);
      v522 = *(_DWORD *)(v517 + 16);
      if ( v522 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v522 + 4))(v522, *(_DWORD *)(*(_DWORD *)v522 + 4));
      *(_DWORD *)(v517 + 16) = 0;
      v517 += 88;
    while ( v518 != v517 );
    v523 = v519;
    v517 = v519[993];
  if ( v517 )
    operator delete((void *)v517);
  v524 = v523[997];
  v525 = (void *)(v524 - 12);
  if ( (int *)(v524 - 12) != &dword_28898C0 )
    v855 = (unsigned int *)(v524 - 4);
        v856 = __ldrex(v855);
      while ( __strex(v856 - 1, v855) );
      v856 = (*v855)--;
    if ( v856 <= 0 )
      j_j_j_j__ZdlPv_9(v525);
  v526 = v523[999];
  v527 = (void *)(v526 - 12);
  if ( (int *)(v526 - 12) != &dword_28898C0 )
    v857 = (unsigned int *)(v526 - 4);
        v858 = __ldrex(v857);
      while ( __strex(v858 - 1, v857) );
      v858 = (*v857)--;
    if ( v858 <= 0 )
      j_j_j_j__ZdlPv_9(v527);
  v528 = (void *)v523[1013];
  if ( v528 )
    operator delete(v528);
  v529 = (void *)v523[1009];
  if ( v529 )
    operator delete(v529);
  v530 = v523[1002];
  if ( v530 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v530 + 4))(v530, *(_DWORD *)(*(_DWORD *)v530 + 4));
  v523[1002] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2234, Item::mHopperMinecart, 1);
  sub_21E94B4((void **)&v2233, (const char *)&aCdefghjklmnopq[5]);
  sub_21E94B4((void **)&v2232, (const char *)&aCdefghjklmnopq[9]);
  definition<Item *,Item *>((int)&v2231, 72, Item::mHopper, 77, Item::mMinecart);
  Recipes::addShapedRecipe((int)v1, (int)&v2234, &v2233, &v2232);
  v531 = v523;
  v532 = v523[967];
  v533 = v523[968];
  v534 = v531;
  if ( v532 == v533 )
    v538 = v531;
      v535 = *(void **)(v532 + 60);
      if ( v535 )
        operator delete(v535);
      v536 = *(void **)(v532 + 44);
      if ( v536 )
        operator delete(v536);
      v537 = *(_DWORD *)(v532 + 16);
      if ( v537 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v537 + 4))(v537, *(_DWORD *)(*(_DWORD *)v537 + 4));
      *(_DWORD *)(v532 + 16) = 0;
      v532 += 88;
    while ( v533 != v532 );
    v538 = v534;
    v532 = v534[967];
  if ( v532 )
    operator delete((void *)v532);
  v539 = v538[971];
  v540 = (void *)(v539 - 12);
  if ( (int *)(v539 - 12) != &dword_28898C0 )
    v859 = (unsigned int *)(v539 - 4);
        v860 = __ldrex(v859);
      while ( __strex(v860 - 1, v859) );
      v860 = (*v859)--;
    if ( v860 <= 0 )
      j_j_j_j__ZdlPv_9(v540);
  v541 = v538[973];
  v542 = (void *)(v541 - 12);
  if ( (int *)(v541 - 12) != &dword_28898C0 )
    v861 = (unsigned int *)(v541 - 4);
        v862 = __ldrex(v861);
      while ( __strex(v862 - 1, v861) );
      v862 = (*v861)--;
    if ( v862 <= 0 )
      j_j_j_j__ZdlPv_9(v542);
  v543 = (void *)v538[987];
  if ( v543 )
    operator delete(v543);
  v544 = (void *)v538[983];
  if ( v544 )
    operator delete(v544);
  v545 = v538[976];
  if ( v545 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v545 + 4))(v545, *(_DWORD *)(*(_DWORD *)v545 + 4));
  v538[976] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2230, Item::mCauldron, 1);
  sub_21E94B4((void **)&v2229, "# #");
  sub_21E94B4((void **)&v2228, "# #");
  v546 = v538;
  sub_21E94B4((void **)&v2227, "###");
  definition<Item *>((int)&v2226, 35, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v1, (int)&v2230, &v2229, &v2228, &v2227);
  v547 = v538[939];
  v548 = v538;
  v549 = v538[940];
  if ( v547 == v549 )
    v553 = v546;
      v550 = *(void **)(v547 + 60);
      if ( v550 )
        operator delete(v550);
      v551 = *(void **)(v547 + 44);
      if ( v551 )
        operator delete(v551);
      v552 = *(_DWORD *)(v547 + 16);
      if ( v552 )
        (*(void (**)(void))(*(_DWORD *)v552 + 4))();
      *(_DWORD *)(v547 + 16) = 0;
      v547 += 88;
    while ( v549 != v547 );
    v553 = v548;
    v547 = v548[939];
  if ( v547 )
    operator delete((void *)v547);
  v554 = v553[943];
  v555 = (void *)(v554 - 12);
  if ( (int *)(v554 - 12) != &dword_28898C0 )
    v863 = (unsigned int *)(v554 - 4);
        v864 = __ldrex(v863);
      while ( __strex(v864 - 1, v863) );
      v864 = (*v863)--;
    if ( v864 <= 0 )
      j_j_j_j__ZdlPv_9(v555);
  v556 = v553[945];
  v557 = (void *)(v556 - 12);
  if ( (int *)(v556 - 12) != &dword_28898C0 )
    v865 = (unsigned int *)(v556 - 4);
        v866 = __ldrex(v865);
      while ( __strex(v866 - 1, v865) );
      v866 = (*v865)--;
    if ( v866 <= 0 )
      j_j_j_j__ZdlPv_9(v557);
  v558 = v553[947];
  v559 = (void *)(v558 - 12);
  if ( (int *)(v558 - 12) != &dword_28898C0 )
    v867 = (unsigned int *)(v558 - 4);
        v868 = __ldrex(v867);
      while ( __strex(v868 - 1, v867) );
      v868 = (*v867)--;
    if ( v868 <= 0 )
      j_j_j_j__ZdlPv_9(v559);
  v560 = (void *)v553[961];
  if ( v560 )
    operator delete(v560);
  v561 = (void *)v553[957];
  if ( v561 )
    operator delete(v561);
  v562 = v553[950];
  if ( v562 )
    (*(void (**)(void))(*(_DWORD *)v562 + 4))();
  v553[950] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2225, Item::mBrewing_stand, 1);
  sub_21E94B4((void **)&v2224, " B ");
  sub_21E94B4((void **)&v2223, "###");
  definition<Block const*,Item *>((int)&v2222, 35, Block::mCobblestone, 66, Item::mBlazeRod);
  Recipes::addShapedRecipe((int)v1, (int)&v2225, &v2224, &v2223);
  v563 = v553;
  v564 = v553[913];
  v565 = v553[914];
  v566 = v563;
  if ( v564 == v565 )
    v570 = v563;
      v567 = *(void **)(v564 + 60);
      if ( v567 )
        operator delete(v567);
      v568 = *(void **)(v564 + 44);
      if ( v568 )
        operator delete(v568);
      v569 = *(_DWORD *)(v564 + 16);
      if ( v569 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v569 + 4))(v569, *(_DWORD *)(*(_DWORD *)v569 + 4));
      *(_DWORD *)(v564 + 16) = 0;
      v564 += 88;
    while ( v565 != v564 );
    v570 = v566;
    v564 = v566[913];
  if ( v564 )
    operator delete((void *)v564);
  v571 = v570[917];
  v572 = (void *)(v571 - 12);
  if ( (int *)(v571 - 12) != &dword_28898C0 )
    v869 = (unsigned int *)(v571 - 4);
        v870 = __ldrex(v869);
      while ( __strex(v870 - 1, v869) );
      v870 = (*v869)--;
    if ( v870 <= 0 )
      j_j_j_j__ZdlPv_9(v572);
  v573 = v570[919];
  v574 = (void *)(v573 - 12);
  if ( (int *)(v573 - 12) != &dword_28898C0 )
    v871 = (unsigned int *)(v573 - 4);
        v872 = __ldrex(v871);
      while ( __strex(v872 - 1, v871) );
      v872 = (*v871)--;
    if ( v872 <= 0 )
      j_j_j_j__ZdlPv_9(v574);
  v575 = (void *)v570[933];
  if ( v575 )
    operator delete(v575);
  v576 = (void *)v570[929];
  if ( v576 )
    operator delete(v576);
  v577 = v570[922];
  if ( v577 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v577 + 4))(v577, *(_DWORD *)(*(_DWORD *)v577 + 4));
  v570[922] = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2221, Block::mLitPumpkin, 1);
  sub_21E94B4((void **)&v2220, "A");
  sub_21E94B4((void **)&v2219, "B");
  definition<Block const*,Block const*>((int)&v2218, 65, Block::mPumpkin, 66, Block::mTorch);
  Recipes::addShapedRecipe((int)v1, (int)&v2221, &v2220, &v2219);
  v578 = v570;
  v579 = v570[887];
  v580 = v570[888];
  v581 = v578;
  if ( v579 == v580 )
    v585 = v578;
      v582 = *(void **)(v579 + 60);
      if ( v582 )
        operator delete(v582);
      v583 = *(void **)(v579 + 44);
      if ( v583 )
        operator delete(v583);
      v584 = *(_DWORD *)(v579 + 16);
      if ( v584 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v584 + 4))(v584, *(_DWORD *)(*(_DWORD *)v584 + 4));
      *(_DWORD *)(v579 + 16) = 0;
      v579 += 88;
    while ( v580 != v579 );
    v585 = v581;
    v579 = *(_DWORD *)(v581 + 3548);
  if ( v579 )
    operator delete((void *)v579);
  v586 = *(_DWORD *)(v585 + 3564);
  v587 = (void *)(v586 - 12);
  if ( (int *)(v586 - 12) != &dword_28898C0 )
    v873 = (unsigned int *)(v586 - 4);
        v874 = __ldrex(v873);
      while ( __strex(v874 - 1, v873) );
      v874 = (*v873)--;
    if ( v874 <= 0 )
      j_j_j_j__ZdlPv_9(v587);
  v588 = *(_DWORD *)(v585 + 3572);
  v589 = (void *)(v588 - 12);
  if ( (int *)(v588 - 12) != &dword_28898C0 )
    v875 = (unsigned int *)(v588 - 4);
        v876 = __ldrex(v875);
      while ( __strex(v876 - 1, v875) );
      v876 = (*v875)--;
    if ( v876 <= 0 )
      j_j_j_j__ZdlPv_9(v589);
  v590 = *(void **)(v585 + 3628);
  if ( v590 )
    operator delete(v590);
  v591 = *(void **)(v585 + 3612);
  if ( v591 )
    operator delete(v591);
  v592 = *(_DWORD *)(v585 + 3584);
  if ( v592 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v592 + 4))(v592, *(_DWORD *)(*(_DWORD *)v592 + 4));
  v593 = (ItemInstance *)&v2217;
  v594 = (ItemInstance *)&v2213;
  v595 = (ItemInstance *)&v2212;
  v596 = 0;
  v597 = &v2214;
  *(_DWORD *)(v585 + 3584) = 0;
    ItemInstance::ItemInstance(v593, Item::mBoat, 1, v596);
    sub_21E94B4((void **)&v2216, "#P#");
    sub_21E94B4((void **)&v2215, "###");
    ItemInstance::ItemInstance(v594, Block::mWoodPlanks, 1, v596);
    ItemInstance::ItemInstance(v595, Item::mShovel_wood, 1, 0x7FFF);
    definition<ItemInstance,ItemInstance>((int)v597, 35, (int)v594, 80, (int)v595);
    Recipes::addShapedRecipe((int)v1780, (int)v593, &v2216, &v2215);
    v668 = v585;
    v669 = *(_DWORD *)(v585 + 3444);
    v670 = *(_DWORD *)(v585 + 3448);
    if ( v669 != v670 )
        v671 = *(void **)(v669 + 60);
        if ( v671 )
          operator delete(v671);
        v672 = *(void **)(v669 + 44);
        if ( v672 )
          operator delete(v672);
        v673 = *(_DWORD *)(v669 + 16);
        if ( v673 )
          (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v673 + 4))(v673, *(_DWORD *)(*(_DWORD *)v673 + 4));
        *(_DWORD *)(v669 + 16) = 0;
        v669 += 88;
      while ( v670 != v669 );
      v669 = *(_DWORD *)(v668 + 3444);
    if ( v669 )
      operator delete((void *)v669);
    v585 = v668;
    v674 = *(void **)(v668 + 3348);
    if ( v674 )
      operator delete(v674);
    v675 = *(void **)(v668 + 3332);
    if ( v675 )
      operator delete(v675);
    v676 = *(_DWORD *)(v668 + 3304);
    if ( v676 )
      (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v676 + 4))(v676, *(_DWORD *)(*(_DWORD *)v676 + 4));
    v677 = *(void **)(v668 + 3420);
    *(_DWORD *)(v668 + 3304) = 0;
    if ( v677 )
      operator delete(v677);
    v678 = *(void **)(v668 + 3404);
    v594 = (ItemInstance *)&v2213;
    v595 = (ItemInstance *)&v2212;
    v597 = &v2214;
    if ( v678 )
      operator delete(v678);
    v679 = *(_DWORD *)(v585 + 3376);
    if ( v679 )
      (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v679 + 4))(v679, *(_DWORD *)(*(_DWORD *)v679 + 4));
    v680 = *(_DWORD *)(v585 + 3460);
    v681 = (void *)(v680 - 12);
    *(_DWORD *)(v585 + 3376) = 0;
    if ( (int *)(v680 - 12) != &dword_28898C0 )
      v664 = (unsigned int *)(v680 - 4);
          v665 = __ldrex(v664);
        while ( __strex(v665 - 1, v664) );
        v665 = (*v664)--;
      if ( v665 <= 0 )
        j_j_j_j__ZdlPv_9(v681);
    v682 = *(_DWORD *)(v585 + 3468);
    v683 = (void *)(v682 - 12);
    if ( (int *)(v682 - 12) != &dword_28898C0 )
      v666 = (unsigned int *)(v682 - 4);
          v667 = __ldrex(v666);
        while ( __strex(v667 - 1, v666) );
        v667 = (*v666)--;
      if ( v667 <= 0 )
        j_j_j_j__ZdlPv_9(v683);
    v684 = *(void **)(v585 + 3524);
    if ( v684 )
      operator delete(v684);
    v685 = *(void **)(v585 + 3508);
    v593 = (ItemInstance *)&v2217;
    if ( v685 )
      operator delete(v685);
    v686 = *(_DWORD *)(v585 + 3480);
    if ( v686 )
      (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v686 + 4))(v686, *(_DWORD *)(*(_DWORD *)v686 + 4));
    ++v596;
    *(_DWORD *)(v585 + 3480) = 0;
  while ( v596 != 6 );
  ItemInstance::ItemInstance((ItemInstance *)&v2211, Item::mBucket, 1, 0);
  sub_21E94B4((void **)&v2210, "# #");
  sub_21E94B4((void **)&v2209, " # ");
  definition<Item *>((int)&v2208, 35, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v1780, (int)&v2211, &v2210, &v2209);
  v687 = v585;
  v688 = *(_DWORD *)(v585 + 3196);
  v689 = *(_DWORD *)(v585 + 3200);
  v690 = v687;
  if ( v688 == v689 )
    v694 = v687;
      v691 = *(void **)(v688 + 60);
      if ( v691 )
        operator delete(v691);
      v692 = *(void **)(v688 + 44);
      if ( v692 )
        operator delete(v692);
      v693 = *(_DWORD *)(v688 + 16);
      if ( v693 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v693 + 4))(v693, *(_DWORD *)(*(_DWORD *)v693 + 4));
      *(_DWORD *)(v688 + 16) = 0;
      v688 += 88;
    while ( v689 != v688 );
    v694 = v690;
    v688 = *(_DWORD *)(v690 + 3196);
  if ( v688 )
    operator delete((void *)v688);
  v877 = *(_DWORD *)(v694 + 3212);
  v878 = (void *)(v877 - 12);
  if ( (int *)(v877 - 12) != &dword_28898C0 )
    v1372 = (unsigned int *)(v877 - 4);
        v1373 = __ldrex(v1372);
      while ( __strex(v1373 - 1, v1372) );
      v1373 = (*v1372)--;
    if ( v1373 <= 0 )
      j_j_j_j__ZdlPv_9(v878);
  v879 = *(_DWORD *)(v694 + 3220);
  v880 = (void *)(v879 - 12);
  if ( (int *)(v879 - 12) != &dword_28898C0 )
    v1374 = (unsigned int *)(v879 - 4);
        v1375 = __ldrex(v1374);
      while ( __strex(v1375 - 1, v1374) );
      v1375 = (*v1374)--;
    if ( v1375 <= 0 )
      j_j_j_j__ZdlPv_9(v880);
  v881 = *(void **)(v694 + 3276);
  if ( v881 )
    operator delete(v881);
  v882 = *(void **)(v694 + 3260);
  if ( v882 )
    operator delete(v882);
  v883 = *(_DWORD *)(v694 + 3232);
  if ( v883 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v883 + 4))(v883, *(_DWORD *)(*(_DWORD *)v883 + 4));
  *(_DWORD *)(v694 + 3232) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2207, Item::mFlintAndSteel, 1);
  definition<Item *,Item *>((int)&v2206, 0, Item::mIronIngot, 0, Item::mFlint);
  Recipes::addShapelessRecipe((int)v1780, (int)&v2207, (unsigned __int64 *)&v2206);
  v884 = v694;
  v885 = *(_DWORD *)(v694 + 3108);
  v886 = *(_DWORD *)(v694 + 3112);
  v887 = v884;
  if ( v885 == v886 )
    v891 = v884;
      v888 = *(void **)(v885 + 60);
      if ( v888 )
        operator delete(v888);
      v889 = *(void **)(v885 + 44);
      if ( v889 )
        operator delete(v889);
      v890 = *(_DWORD *)(v885 + 16);
      if ( v890 )
        (*(void (**)(void))(*(_DWORD *)v890 + 4))();
      *(_DWORD *)(v885 + 16) = 0;
      v885 += 88;
    while ( v886 != v885 );
    v891 = v887;
    v885 = *(_DWORD *)(v887 + 3108);
  if ( v885 )
    operator delete((void *)v885);
  v892 = *(void **)(v891 + 3172);
  if ( v892 )
    operator delete(v892);
  v893 = *(void **)(v891 + 3156);
  if ( v893 )
    operator delete(v893);
  v894 = *(_DWORD *)(v891 + 3128);
  if ( v894 )
    (*(void (**)(void))(*(_DWORD *)v894 + 4))();
  *(_DWORD *)(v891 + 3128) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2205, Item::mBread, 1);
  sub_21E94B4((void **)&v2204, "###");
  definition<Item *>((int)&v2203, 35, Item::mWheat);
  Recipes::addShapedRecipe((int)v1780, (int)&v2205, &v2204);
  v895 = v891;
  v896 = *(_DWORD *)(v891 + 3012);
  v897 = *(_DWORD *)(v891 + 3016);
  v898 = v895;
  if ( v896 == v897 )
    v902 = v895;
      v899 = *(void **)(v896 + 60);
      if ( v899 )
        operator delete(v899);
      v900 = *(void **)(v896 + 44);
      if ( v900 )
        operator delete(v900);
      v901 = *(_DWORD *)(v896 + 16);
      if ( v901 )
        (*(void (**)(void))(*(_DWORD *)v901 + 4))();
      *(_DWORD *)(v896 + 16) = 0;
      v896 += 88;
    while ( v897 != v896 );
    v902 = v898;
    v896 = *(_DWORD *)(v898 + 3012);
  if ( v896 )
    operator delete((void *)v896);
  v903 = *(_DWORD *)(v902 + 3028);
  v904 = (void *)(v903 - 12);
  if ( (int *)(v903 - 12) != &dword_28898C0 )
    v1376 = (unsigned int *)(v903 - 4);
        v1377 = __ldrex(v1376);
      while ( __strex(v1377 - 1, v1376) );
      v1377 = (*v1376)--;
    if ( v1377 <= 0 )
      j_j_j_j__ZdlPv_9(v904);
  v905 = *(void **)(v902 + 3084);
  if ( v905 )
    operator delete(v905);
  v906 = *(void **)(v902 + 3068);
  if ( v906 )
    operator delete(v906);
  v907 = *(_DWORD *)(v902 + 3040);
  if ( v907 )
    (*(void (**)(void))(*(_DWORD *)v907 + 4))();
  *(_DWORD *)(v902 + 3040) = 0;
  Recipes::_addWoodStairsRecipes(v1780);
  Recipes::_addStoneStairsRecipes(v1780);
  ItemInstance::ItemInstance((ItemInstance *)&v2202, Item::mFishingRod, 1);
  sub_21E94B4((void **)&v2201, "  #");
  sub_21E94B4((void **)&v2200, " #X");
  v908 = v902;
  sub_21E94B4((void **)&v2199, "# X");
  definition<Item *,Item *>((int)&v2198, 35, Item::mStick, 88, Item::mString);
  Recipes::addShapedRecipe((int)v1780, (int)&v2202, &v2201, &v2200, &v2199);
  v909 = *(_DWORD *)(v902 + 2900);
  v910 = v902;
  v911 = *(_DWORD *)(v902 + 2904);
  if ( v909 == v911 )
    v915 = v908;
      v912 = *(void **)(v909 + 60);
      if ( v912 )
        operator delete(v912);
      v913 = *(void **)(v909 + 44);
      if ( v913 )
        operator delete(v913);
      v914 = *(_DWORD *)(v909 + 16);
      if ( v914 )
        (*(void (**)(void))(*(_DWORD *)v914 + 4))();
      *(_DWORD *)(v909 + 16) = 0;
      v909 += 88;
    while ( v911 != v909 );
    v915 = v910;
    v909 = *(_DWORD *)(v910 + 2900);
  if ( v909 )
    operator delete((void *)v909);
  v916 = *(_DWORD *)(v915 + 2916);
  v917 = (void *)(v916 - 12);
  if ( (int *)(v916 - 12) != &dword_28898C0 )
    v1378 = (unsigned int *)(v916 - 4);
        v1379 = __ldrex(v1378);
      while ( __strex(v1379 - 1, v1378) );
      v1379 = (*v1378)--;
    if ( v1379 <= 0 )
      j_j_j_j__ZdlPv_9(v917);
  v918 = *(_DWORD *)(v915 + 2924);
  v919 = (void *)(v918 - 12);
  if ( (int *)(v918 - 12) != &dword_28898C0 )
    v1380 = (unsigned int *)(v918 - 4);
        v1381 = __ldrex(v1380);
      while ( __strex(v1381 - 1, v1380) );
      v1381 = (*v1380)--;
    if ( v1381 <= 0 )
      j_j_j_j__ZdlPv_9(v919);
  v920 = *(_DWORD *)(v915 + 2932);
  v921 = (void *)(v920 - 12);
  if ( (int *)(v920 - 12) != &dword_28898C0 )
    v1382 = (unsigned int *)(v920 - 4);
        v1383 = __ldrex(v1382);
      while ( __strex(v1383 - 1, v1382) );
      v1383 = (*v1382)--;
    if ( v1383 <= 0 )
      j_j_j_j__ZdlPv_9(v921);
  v922 = *(void **)(v915 + 2988);
  if ( v922 )
    operator delete(v922);
  v923 = *(void **)(v915 + 2972);
  if ( v923 )
    operator delete(v923);
  v924 = *(_DWORD *)(v915 + 2944);
  if ( v924 )
    (*(void (**)(void))(*(_DWORD *)v924 + 4))();
  *(_DWORD *)(v915 + 2944) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2197, Item::mCarrotOnAStick, 1);
  sub_21E94B4((void **)&v2196, "# ");
  sub_21E94B4((void **)&v2195, " X");
  definition<Item *,Item *>((int)&v2194, 35, Item::mFishingRod, 88, Item::mCarrot);
  Recipes::addShapedRecipe((int)v1780, (int)&v2197, &v2196, &v2195);
  v925 = v915;
  v926 = *(_DWORD *)(v915 + 2796);
  v927 = *(_DWORD *)(v915 + 2800);
  v928 = v925;
  if ( v926 == v927 )
    v932 = v925;
      v929 = *(void **)(v926 + 60);
      if ( v929 )
        operator delete(v929);
      v930 = *(void **)(v926 + 44);
      if ( v930 )
        operator delete(v930);
      v931 = *(_DWORD *)(v926 + 16);
      if ( v931 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v931 + 4))(v931, *(_DWORD *)(*(_DWORD *)v931 + 4));
      *(_DWORD *)(v926 + 16) = 0;
      v926 += 88;
    while ( v927 != v926 );
    v932 = v928;
    v926 = *(_DWORD *)(v928 + 2796);
  if ( v926 )
    operator delete((void *)v926);
  v933 = *(_DWORD *)(v932 + 2812);
  v934 = (void *)(v933 - 12);
  if ( (int *)(v933 - 12) != &dword_28898C0 )
    v1384 = (unsigned int *)(v933 - 4);
        v1385 = __ldrex(v1384);
      while ( __strex(v1385 - 1, v1384) );
      v1385 = (*v1384)--;
    if ( v1385 <= 0 )
      j_j_j_j__ZdlPv_9(v934);
  v935 = *(_DWORD *)(v932 + 2820);
  v936 = (void *)(v935 - 12);
  if ( (int *)(v935 - 12) != &dword_28898C0 )
    v1386 = (unsigned int *)(v935 - 4);
        v1387 = __ldrex(v1386);
      while ( __strex(v1387 - 1, v1386) );
      v1387 = (*v1386)--;
    if ( v1387 <= 0 )
      j_j_j_j__ZdlPv_9(v936);
  v937 = *(void **)(v932 + 2876);
  if ( v937 )
    operator delete(v937);
  v938 = *(void **)(v932 + 2860);
  if ( v938 )
    operator delete(v938);
  v939 = *(_DWORD *)(v932 + 2832);
  if ( v939 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v939 + 4))(v939, *(_DWORD *)(*(_DWORD *)v939 + 4));
  *(_DWORD *)(v932 + 2832) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2193, Item::mPainting, 1);
  sub_21E94B4((void **)&v2192, "###");
  sub_21E94B4((void **)&v2191, "#X#");
  v940 = v932;
  sub_21E94B4((void **)&v2190, "###");
  definition<Item *,Block const*>((int)&v2189, 35, Item::mStick, 88, Block::mWool);
  Recipes::addShapedRecipe((int)v1780, (int)&v2193, &v2192, &v2191, &v2190);
  v941 = *(_DWORD *)(v932 + 2684);
  v942 = v932;
  v943 = *(_DWORD *)(v932 + 2688);
  if ( v941 == v943 )
    v947 = v940;
      v944 = *(void **)(v941 + 60);
      if ( v944 )
        operator delete(v944);
      v945 = *(void **)(v941 + 44);
      if ( v945 )
        operator delete(v945);
      v946 = *(_DWORD *)(v941 + 16);
      if ( v946 )
        (*(void (**)(void))(*(_DWORD *)v946 + 4))();
      *(_DWORD *)(v941 + 16) = 0;
      v941 += 88;
    while ( v943 != v941 );
    v947 = v942;
    v941 = *(_DWORD *)(v942 + 2684);
  if ( v941 )
    operator delete((void *)v941);
  v948 = *(_DWORD *)(v947 + 2700);
  v949 = (void *)(v948 - 12);
  if ( (int *)(v948 - 12) != &dword_28898C0 )
    v1388 = (unsigned int *)(v948 - 4);
        v1389 = __ldrex(v1388);
      while ( __strex(v1389 - 1, v1388) );
      v1389 = (*v1388)--;
    if ( v1389 <= 0 )
      j_j_j_j__ZdlPv_9(v949);
  v950 = *(_DWORD *)(v947 + 2708);
  v951 = (void *)(v950 - 12);
  if ( (int *)(v950 - 12) != &dword_28898C0 )
    v1390 = (unsigned int *)(v950 - 4);
        v1391 = __ldrex(v1390);
      while ( __strex(v1391 - 1, v1390) );
      v1391 = (*v1390)--;
    if ( v1391 <= 0 )
      j_j_j_j__ZdlPv_9(v951);
  v952 = *(_DWORD *)(v947 + 2716);
  v953 = (void *)(v952 - 12);
  if ( (int *)(v952 - 12) != &dword_28898C0 )
    v1392 = (unsigned int *)(v952 - 4);
        v1393 = __ldrex(v1392);
      while ( __strex(v1393 - 1, v1392) );
      v1393 = (*v1392)--;
    if ( v1393 <= 0 )
      j_j_j_j__ZdlPv_9(v953);
  v954 = *(void **)(v947 + 2772);
  if ( v954 )
    operator delete(v954);
  v955 = *(void **)(v947 + 2756);
  if ( v955 )
    operator delete(v955);
  v956 = *(_DWORD *)(v947 + 2728);
  if ( v956 )
    (*(void (**)(void))(*(_DWORD *)v956 + 4))();
  *(_DWORD *)(v947 + 2728) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2188, Item::mApple_gold, 1, 0);
  sub_21E94B4((void **)&v2187, "###");
  sub_21E94B4((void **)&v2186, "#X#");
  v957 = v947;
  sub_21E94B4((void **)&v2185, "###");
  definition<Item *,Item *>((int)&v2184, 35, Item::mGoldIngot, 88, Item::mApple);
  Recipes::addShapedRecipe((int)v1780, (int)&v2188, &v2187, &v2186, &v2185);
  v958 = *(_DWORD *)(v947 + 2572);
  v959 = v947;
  v960 = *(_DWORD *)(v947 + 2576);
  if ( v958 == v960 )
    v964 = v957;
      v961 = *(void **)(v958 + 60);
      if ( v961 )
        operator delete(v961);
      v962 = *(void **)(v958 + 44);
      if ( v962 )
        operator delete(v962);
      v963 = *(_DWORD *)(v958 + 16);
      if ( v963 )
        (*(void (**)(void))(*(_DWORD *)v963 + 4))();
      *(_DWORD *)(v958 + 16) = 0;
      v958 += 88;
    while ( v960 != v958 );
    v964 = v959;
    v958 = *(_DWORD *)(v959 + 2572);
  if ( v958 )
    operator delete((void *)v958);
  v965 = *(_DWORD *)(v964 + 2588);
  v966 = (void *)(v965 - 12);
  if ( (int *)(v965 - 12) != &dword_28898C0 )
    v1394 = (unsigned int *)(v965 - 4);
        v1395 = __ldrex(v1394);
      while ( __strex(v1395 - 1, v1394) );
      v1395 = (*v1394)--;
    if ( v1395 <= 0 )
      j_j_j_j__ZdlPv_9(v966);
  v967 = *(_DWORD *)(v964 + 2596);
  v968 = (void *)(v967 - 12);
  if ( (int *)(v967 - 12) != &dword_28898C0 )
    v1396 = (unsigned int *)(v967 - 4);
        v1397 = __ldrex(v1396);
      while ( __strex(v1397 - 1, v1396) );
      v1397 = (*v1396)--;
    if ( v1397 <= 0 )
      j_j_j_j__ZdlPv_9(v968);
  v969 = *(_DWORD *)(v964 + 2604);
  v970 = (void *)(v969 - 12);
  if ( (int *)(v969 - 12) != &dword_28898C0 )
    v1398 = (unsigned int *)(v969 - 4);
        v1399 = __ldrex(v1398);
      while ( __strex(v1399 - 1, v1398) );
      v1399 = (*v1398)--;
    if ( v1399 <= 0 )
      j_j_j_j__ZdlPv_9(v970);
  v971 = *(void **)(v964 + 2660);
  if ( v971 )
    operator delete(v971);
  v972 = *(void **)(v964 + 2644);
  if ( v972 )
    operator delete(v972);
  v973 = *(_DWORD *)(v964 + 2616);
  if ( v973 )
    (*(void (**)(void))(*(_DWORD *)v973 + 4))();
  *(_DWORD *)(v964 + 2616) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2183, Item::mApple_enchanted, 1, 1);
  sub_21E94B4((void **)&v2182, "###");
  sub_21E94B4((void **)&v2181, "#X#");
  v974 = v964;
  sub_21E94B4((void **)&v2180, "###");
  definition<Block const*,Item *>((int)&v2179, 35, Block::mGoldBlock, 88, Item::mApple);
  Recipes::addShapedRecipe((int)v1780, (int)&v2183, &v2182, &v2181, &v2180);
  v975 = *(_DWORD *)(v964 + 2460);
  v976 = v964;
  v977 = *(_DWORD *)(v964 + 2464);
  if ( v975 == v977 )
    v981 = v974;
      v978 = *(void **)(v975 + 60);
      if ( v978 )
        operator delete(v978);
      v979 = *(void **)(v975 + 44);
      if ( v979 )
        operator delete(v979);
      v980 = *(_DWORD *)(v975 + 16);
      if ( v980 )
        (*(void (**)(void))(*(_DWORD *)v980 + 4))();
      *(_DWORD *)(v975 + 16) = 0;
      v975 += 88;
    while ( v977 != v975 );
    v981 = v976;
    v975 = *(_DWORD *)(v976 + 2460);
  if ( v975 )
    operator delete((void *)v975);
  v982 = *(_DWORD *)(v981 + 2476);
  v983 = (void *)(v982 - 12);
  if ( (int *)(v982 - 12) != &dword_28898C0 )
    v1400 = (unsigned int *)(v982 - 4);
        v1401 = __ldrex(v1400);
      while ( __strex(v1401 - 1, v1400) );
      v1401 = (*v1400)--;
    if ( v1401 <= 0 )
      j_j_j_j__ZdlPv_9(v983);
  v984 = *(_DWORD *)(v981 + 2484);
  v985 = (void *)(v984 - 12);
  if ( (int *)(v984 - 12) != &dword_28898C0 )
    v1402 = (unsigned int *)(v984 - 4);
        v1403 = __ldrex(v1402);
      while ( __strex(v1403 - 1, v1402) );
      v1403 = (*v1402)--;
    if ( v1403 <= 0 )
      j_j_j_j__ZdlPv_9(v985);
  v986 = *(_DWORD *)(v981 + 2492);
  v987 = (void *)(v986 - 12);
  if ( (int *)(v986 - 12) != &dword_28898C0 )
    v1404 = (unsigned int *)(v986 - 4);
        v1405 = __ldrex(v1404);
      while ( __strex(v1405 - 1, v1404) );
      v1405 = (*v1404)--;
    if ( v1405 <= 0 )
      j_j_j_j__ZdlPv_9(v987);
  v988 = *(void **)(v981 + 2548);
  if ( v988 )
    operator delete(v988);
  v989 = *(void **)(v981 + 2532);
  if ( v989 )
    operator delete(v989);
  v990 = *(_DWORD *)(v981 + 2504);
  if ( v990 )
    (*(void (**)(void))(*(_DWORD *)v990 + 4))();
  *(_DWORD *)(v981 + 2504) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2178, Block::mLever, 1);
  sub_21E94B4((void **)&v2177, "X");
  sub_21E94B4((void **)&v2176, "#");
  definition<Block const*,Item *>((int)&v2175, 35, Block::mCobblestone, 88, Item::mStick);
  Recipes::addShapedRecipe((int)v1780, (int)&v2178, &v2177, &v2176);
  v991 = v981;
  v992 = *(_DWORD *)(v981 + 2356);
  v993 = *(_DWORD *)(v981 + 2360);
  v994 = v991;
  if ( v992 == v993 )
    v998 = v991;
      v995 = *(void **)(v992 + 60);
      if ( v995 )
        operator delete(v995);
      v996 = *(void **)(v992 + 44);
      if ( v996 )
        operator delete(v996);
      v997 = *(_DWORD *)(v992 + 16);
      if ( v997 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v997 + 4))(v997, *(_DWORD *)(*(_DWORD *)v997 + 4));
      *(_DWORD *)(v992 + 16) = 0;
      v992 += 88;
    while ( v993 != v992 );
    v998 = v994;
    v992 = *(_DWORD *)(v994 + 2356);
  if ( v992 )
    operator delete((void *)v992);
  v999 = *(_DWORD *)(v998 + 2372);
  v1000 = (void *)(v999 - 12);
  if ( (int *)(v999 - 12) != &dword_28898C0 )
    v1406 = (unsigned int *)(v999 - 4);
        v1407 = __ldrex(v1406);
      while ( __strex(v1407 - 1, v1406) );
      v1407 = (*v1406)--;
    if ( v1407 <= 0 )
      j_j_j_j__ZdlPv_9(v1000);
  v1001 = *(_DWORD *)(v998 + 2380);
  v1002 = (void *)(v1001 - 12);
  if ( (int *)(v1001 - 12) != &dword_28898C0 )
    v1408 = (unsigned int *)(v1001 - 4);
        v1409 = __ldrex(v1408);
      while ( __strex(v1409 - 1, v1408) );
      v1409 = (*v1408)--;
    if ( v1409 <= 0 )
      j_j_j_j__ZdlPv_9(v1002);
  v1003 = *(void **)(v998 + 2436);
  if ( v1003 )
    operator delete(v1003);
  v1004 = *(void **)(v998 + 2420);
  if ( v1004 )
    operator delete(v1004);
  v1005 = *(_DWORD *)(v998 + 2392);
  if ( v1005 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1005 + 4))(v1005, *(_DWORD *)(*(_DWORD *)v1005 + 4));
  *(_DWORD *)(v998 + 2392) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2174, Block::mLitRedStoneTorch, 1);
  sub_21E94B4((void **)&v2173, "X");
  sub_21E94B4((void **)&v2172, "#");
  definition<Item *,Item *>((int)&v2171, 35, Item::mStick, 88, Item::mRedStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2174, &v2173, &v2172);
  v1006 = v998;
  v1007 = *(_DWORD *)(v998 + 2252);
  v1008 = *(_DWORD *)(v998 + 2256);
  v1009 = v1006;
  if ( v1007 == v1008 )
    v1013 = v1006;
      v1010 = *(void **)(v1007 + 60);
      if ( v1010 )
        operator delete(v1010);
      v1011 = *(void **)(v1007 + 44);
      if ( v1011 )
        operator delete(v1011);
      v1012 = *(_DWORD *)(v1007 + 16);
      if ( v1012 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1012 + 4))(v1012, *(_DWORD *)(*(_DWORD *)v1012 + 4));
      *(_DWORD *)(v1007 + 16) = 0;
      v1007 += 88;
    while ( v1008 != v1007 );
    v1013 = v1009;
    v1007 = *(_DWORD *)(v1009 + 2252);
  if ( v1007 )
    operator delete((void *)v1007);
  v1014 = *(_DWORD *)(v1013 + 2268);
  v1015 = (void *)(v1014 - 12);
  if ( (int *)(v1014 - 12) != &dword_28898C0 )
    v1410 = (unsigned int *)(v1014 - 4);
        v1411 = __ldrex(v1410);
      while ( __strex(v1411 - 1, v1410) );
      v1411 = (*v1410)--;
    if ( v1411 <= 0 )
      j_j_j_j__ZdlPv_9(v1015);
  v1016 = *(_DWORD *)(v1013 + 2276);
  v1017 = (void *)(v1016 - 12);
  if ( (int *)(v1016 - 12) != &dword_28898C0 )
    v1412 = (unsigned int *)(v1016 - 4);
        v1413 = __ldrex(v1412);
      while ( __strex(v1413 - 1, v1412) );
      v1413 = (*v1412)--;
    if ( v1413 <= 0 )
      j_j_j_j__ZdlPv_9(v1017);
  v1018 = *(void **)(v1013 + 2332);
  if ( v1018 )
    operator delete(v1018);
  v1019 = *(void **)(v1013 + 2316);
  if ( v1019 )
    operator delete(v1019);
  v1020 = *(_DWORD *)(v1013 + 2288);
  if ( v1020 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1020 + 4))(v1020, *(_DWORD *)(*(_DWORD *)v1020 + 4));
  *(_DWORD *)(v1013 + 2288) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2170, Block::mDaylightDetector, 1);
  sub_21E94B4((void **)&v2169, "GGG");
  sub_21E94B4((void **)&v2168, "QQQ");
  v1021 = v1013;
  sub_21E94B4((void **)&v2167, "WWW");
  definition<Block const*,Item *,Block const*>(
    (int)&v2166,
    71,
    Block::mGlass,
    81,
    Item::mNetherQuartz,
    87,
    Block::mWoodenSlab);
  Recipes::addShapedRecipe((int)v1780, (int)&v2170, &v2169, &v2168, &v2167);
  v1022 = *(_DWORD *)(v1013 + 2140);
  v1023 = v1013;
  v1024 = *(_DWORD *)(v1013 + 2144);
  if ( v1022 == v1024 )
    v1028 = v1021;
      v1025 = *(void **)(v1022 + 60);
      if ( v1025 )
        operator delete(v1025);
      v1026 = *(void **)(v1022 + 44);
      if ( v1026 )
        operator delete(v1026);
      v1027 = *(_DWORD *)(v1022 + 16);
      if ( v1027 )
        (*(void (**)(void))(*(_DWORD *)v1027 + 4))();
      *(_DWORD *)(v1022 + 16) = 0;
      v1022 += 88;
    while ( v1024 != v1022 );
    v1028 = v1023;
    v1022 = *(_DWORD *)(v1023 + 2140);
  if ( v1022 )
    operator delete((void *)v1022);
  v1029 = *(_DWORD *)(v1028 + 2156);
  v1030 = (void *)(v1029 - 12);
  if ( (int *)(v1029 - 12) != &dword_28898C0 )
    v1414 = (unsigned int *)(v1029 - 4);
        v1415 = __ldrex(v1414);
      while ( __strex(v1415 - 1, v1414) );
      v1415 = (*v1414)--;
    if ( v1415 <= 0 )
      j_j_j_j__ZdlPv_9(v1030);
  v1031 = *(_DWORD *)(v1028 + 2164);
  v1032 = (void *)(v1031 - 12);
  if ( (int *)(v1031 - 12) != &dword_28898C0 )
    v1416 = (unsigned int *)(v1031 - 4);
        v1417 = __ldrex(v1416);
      while ( __strex(v1417 - 1, v1416) );
      v1417 = (*v1416)--;
    if ( v1417 <= 0 )
      j_j_j_j__ZdlPv_9(v1032);
  v1033 = *(_DWORD *)(v1028 + 2172);
  v1034 = (void *)(v1033 - 12);
  if ( (int *)(v1033 - 12) != &dword_28898C0 )
    v1418 = (unsigned int *)(v1033 - 4);
        v1419 = __ldrex(v1418);
      while ( __strex(v1419 - 1, v1418) );
      v1419 = (*v1418)--;
    if ( v1419 <= 0 )
      j_j_j_j__ZdlPv_9(v1034);
  v1035 = *(void **)(v1028 + 2228);
  if ( v1035 )
    operator delete(v1035);
  v1036 = *(void **)(v1028 + 2212);
  if ( v1036 )
    operator delete(v1036);
  v1037 = *(_DWORD *)(v1028 + 2184);
  if ( v1037 )
    (*(void (**)(void))(*(_DWORD *)v1037 + 4))();
  *(_DWORD *)(v1028 + 2184) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2165, Item::mRepeater, 1);
  sub_21E94B4((void **)&v2164, "#X#");
  sub_21E94B4((void **)&v2163, "III");
    (int)&v2162,
    73,
    Block::mStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2165, &v2164, &v2163);
  v1038 = v1028;
  v1039 = *(_DWORD *)(v1028 + 2036);
  v1040 = *(_DWORD *)(v1028 + 2040);
  v1041 = v1038;
  if ( v1039 == v1040 )
    v1045 = v1038;
      v1042 = *(void **)(v1039 + 60);
      if ( v1042 )
        operator delete(v1042);
      v1043 = *(void **)(v1039 + 44);
      if ( v1043 )
        operator delete(v1043);
      v1044 = *(_DWORD *)(v1039 + 16);
      if ( v1044 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1044 + 4))(v1044);
      *(_DWORD *)(v1039 + 16) = 0;
      v1039 += 88;
    while ( v1040 != v1039 );
    v1045 = v1041;
    v1039 = *(_DWORD *)(v1041 + 2036);
  if ( v1039 )
    operator delete((void *)v1039);
  v1046 = *(_DWORD *)(v1045 + 2052);
  v1047 = (void *)(v1046 - 12);
  if ( (int *)(v1046 - 12) != &dword_28898C0 )
    v1420 = (unsigned int *)(v1046 - 4);
        v1421 = __ldrex(v1420);
      while ( __strex(v1421 - 1, v1420) );
      v1421 = (*v1420)--;
    if ( v1421 <= 0 )
      j_j_j_j__ZdlPv_9(v1047);
  v1048 = *(_DWORD *)(v1045 + 2060);
  v1049 = (void *)(v1048 - 12);
  if ( (int *)(v1048 - 12) != &dword_28898C0 )
    v1422 = (unsigned int *)(v1048 - 4);
        v1423 = __ldrex(v1422);
      while ( __strex(v1423 - 1, v1422) );
      v1423 = (*v1422)--;
    if ( v1423 <= 0 )
      j_j_j_j__ZdlPv_9(v1049);
  v1050 = *(void **)(v1045 + 2116);
  if ( v1050 )
    operator delete(v1050);
  v1051 = *(void **)(v1045 + 2100);
  if ( v1051 )
    operator delete(v1051);
  v1052 = *(_DWORD *)(v1045 + 2072);
  if ( v1052 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1052 + 4))(v1052);
  *(_DWORD *)(v1045 + 2072) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2161, Block::mUnlitRedStoneLamp, 1);
  sub_21E94B4((void **)&v2160, " X ");
  sub_21E94B4((void **)&v2159, "X#X");
  v1053 = v1045;
  sub_21E94B4((void **)&v2158, " X ");
  definition<Item *,Block const*>((int)&v2157, 88, Item::mRedStone, 35, Block::mGlowStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2161, &v2160, &v2159, &v2158);
  v1054 = *(_DWORD *)(v1045 + 1924);
  v1055 = v1045;
  v1056 = *(_DWORD *)(v1045 + 1928);
  if ( v1054 == v1056 )
    v1060 = v1053;
      v1057 = *(void **)(v1054 + 60);
      if ( v1057 )
        operator delete(v1057);
      v1058 = *(void **)(v1054 + 44);
      if ( v1058 )
        operator delete(v1058);
      v1059 = *(_DWORD *)(v1054 + 16);
      if ( v1059 )
        (*(void (**)(void))(*(_DWORD *)v1059 + 4))();
      *(_DWORD *)(v1054 + 16) = 0;
      v1054 += 88;
    while ( v1056 != v1054 );
    v1060 = v1055;
    v1054 = *(_DWORD *)(v1055 + 1924);
  if ( v1054 )
    operator delete((void *)v1054);
  v1061 = *(_DWORD *)(v1060 + 1940);
  v1062 = (void *)(v1061 - 12);
  if ( (int *)(v1061 - 12) != &dword_28898C0 )
    v1424 = (unsigned int *)(v1061 - 4);
        v1425 = __ldrex(v1424);
      while ( __strex(v1425 - 1, v1424) );
      v1425 = (*v1424)--;
    if ( v1425 <= 0 )
      j_j_j_j__ZdlPv_9(v1062);
  v1063 = *(_DWORD *)(v1060 + 1948);
  v1064 = (void *)(v1063 - 12);
  if ( (int *)(v1063 - 12) != &dword_28898C0 )
    v1426 = (unsigned int *)(v1063 - 4);
        v1427 = __ldrex(v1426);
      while ( __strex(v1427 - 1, v1426) );
      v1427 = (*v1426)--;
    if ( v1427 <= 0 )
      j_j_j_j__ZdlPv_9(v1064);
  v1065 = *(_DWORD *)(v1060 + 1956);
  v1066 = (void *)(v1065 - 12);
  if ( (int *)(v1065 - 12) != &dword_28898C0 )
    v1428 = (unsigned int *)(v1065 - 4);
        v1429 = __ldrex(v1428);
      while ( __strex(v1429 - 1, v1428) );
      v1429 = (*v1428)--;
    if ( v1429 <= 0 )
      j_j_j_j__ZdlPv_9(v1066);
  v1067 = *(void **)(v1060 + 2012);
  if ( v1067 )
    operator delete(v1067);
  v1068 = *(void **)(v1060 + 1996);
  if ( v1068 )
    operator delete(v1068);
  v1069 = *(_DWORD *)(v1060 + 1968);
  if ( v1069 )
    (*(void (**)(void))(*(_DWORD *)v1069 + 4))();
  *(_DWORD *)(v1060 + 1968) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2156, Item::mClock, 1);
  sub_21E94B4((void **)&v2155, " # ");
  sub_21E94B4((void **)&v2154, "#X#");
  v1070 = v1060;
  sub_21E94B4((void **)&v2153, " # ");
  definition<Item *,Item *>((int)&v2152, 35, Item::mGoldIngot, 88, Item::mRedStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2156, &v2155, &v2154, &v2153);
  v1071 = *(_DWORD *)(v1060 + 1812);
  v1072 = v1060;
  v1073 = *(_DWORD *)(v1060 + 1816);
  if ( v1071 == v1073 )
    v1077 = v1070;
      v1074 = *(void **)(v1071 + 60);
      if ( v1074 )
        operator delete(v1074);
      v1075 = *(void **)(v1071 + 44);
      if ( v1075 )
        operator delete(v1075);
      v1076 = *(_DWORD *)(v1071 + 16);
      if ( v1076 )
        (*(void (**)(void))(*(_DWORD *)v1076 + 4))();
      *(_DWORD *)(v1071 + 16) = 0;
      v1071 += 88;
    while ( v1073 != v1071 );
    v1077 = v1072;
    v1071 = *(_DWORD *)(v1072 + 1812);
  if ( v1071 )
    operator delete((void *)v1071);
  v1078 = *(_DWORD *)(v1077 + 1828);
  v1079 = (void *)(v1078 - 12);
  if ( (int *)(v1078 - 12) != &dword_28898C0 )
    v1430 = (unsigned int *)(v1078 - 4);
        v1431 = __ldrex(v1430);
      while ( __strex(v1431 - 1, v1430) );
      v1431 = (*v1430)--;
    if ( v1431 <= 0 )
      j_j_j_j__ZdlPv_9(v1079);
  v1080 = *(_DWORD *)(v1077 + 1836);
  v1081 = (void *)(v1080 - 12);
  if ( (int *)(v1080 - 12) != &dword_28898C0 )
    v1432 = (unsigned int *)(v1080 - 4);
        v1433 = __ldrex(v1432);
      while ( __strex(v1433 - 1, v1432) );
      v1433 = (*v1432)--;
    if ( v1433 <= 0 )
      j_j_j_j__ZdlPv_9(v1081);
  v1082 = *(_DWORD *)(v1077 + 1844);
  v1083 = (void *)(v1082 - 12);
  if ( (int *)(v1082 - 12) != &dword_28898C0 )
    v1434 = (unsigned int *)(v1082 - 4);
        v1435 = __ldrex(v1434);
      while ( __strex(v1435 - 1, v1434) );
      v1435 = (*v1434)--;
    if ( v1435 <= 0 )
      j_j_j_j__ZdlPv_9(v1083);
  v1084 = *(void **)(v1077 + 1900);
  if ( v1084 )
    operator delete(v1084);
  v1085 = *(void **)(v1077 + 1884);
  if ( v1085 )
    operator delete(v1085);
  v1086 = *(_DWORD *)(v1077 + 1856);
  if ( v1086 )
    (*(void (**)(void))(*(_DWORD *)v1086 + 4))();
  *(_DWORD *)(v1077 + 1856) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2151, Item::mCompass, 1);
  sub_21E94B4((void **)&v2150, " # ");
  sub_21E94B4((void **)&v2149, "#X#");
  v1087 = v1077;
  sub_21E94B4((void **)&v2148, " # ");
  definition<Item *,Item *>((int)&v2147, 35, Item::mIronIngot, 88, Item::mRedStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2151, &v2150, &v2149, &v2148);
  v1088 = *(_DWORD *)(v1077 + 1700);
  v1089 = v1077;
  v1090 = *(_DWORD *)(v1077 + 1704);
  if ( v1088 == v1090 )
    v1094 = v1087;
      v1091 = *(void **)(v1088 + 60);
      if ( v1091 )
        operator delete(v1091);
      v1092 = *(void **)(v1088 + 44);
      if ( v1092 )
        operator delete(v1092);
      v1093 = *(_DWORD *)(v1088 + 16);
      if ( v1093 )
        (*(void (**)(void))(*(_DWORD *)v1093 + 4))();
      *(_DWORD *)(v1088 + 16) = 0;
      v1088 += 88;
    while ( v1090 != v1088 );
    v1094 = v1089;
    v1088 = *(_DWORD *)(v1089 + 1700);
  if ( v1088 )
    operator delete((void *)v1088);
  v1095 = *(_DWORD *)(v1094 + 1716);
  v1096 = (void *)(v1095 - 12);
  if ( (int *)(v1095 - 12) != &dword_28898C0 )
    v1436 = (unsigned int *)(v1095 - 4);
        v1437 = __ldrex(v1436);
      while ( __strex(v1437 - 1, v1436) );
      v1437 = (*v1436)--;
    if ( v1437 <= 0 )
      j_j_j_j__ZdlPv_9(v1096);
  v1097 = *(_DWORD *)(v1094 + 1724);
  v1098 = (void *)(v1097 - 12);
  if ( (int *)(v1097 - 12) != &dword_28898C0 )
    v1438 = (unsigned int *)(v1097 - 4);
        v1439 = __ldrex(v1438);
      while ( __strex(v1439 - 1, v1438) );
      v1439 = (*v1438)--;
    if ( v1439 <= 0 )
      j_j_j_j__ZdlPv_9(v1098);
  v1099 = *(_DWORD *)(v1094 + 1732);
  v1100 = (void *)(v1099 - 12);
  if ( (int *)(v1099 - 12) != &dword_28898C0 )
    v1440 = (unsigned int *)(v1099 - 4);
        v1441 = __ldrex(v1440);
      while ( __strex(v1441 - 1, v1440) );
      v1441 = (*v1440)--;
    if ( v1441 <= 0 )
      j_j_j_j__ZdlPv_9(v1100);
  v1101 = *(void **)(v1094 + 1788);
  if ( v1101 )
    operator delete(v1101);
  v1102 = *(void **)(v1094 + 1772);
  if ( v1102 )
    operator delete(v1102);
  v1103 = *(_DWORD *)(v1094 + 1744);
  if ( v1103 )
    (*(void (**)(void))(*(_DWORD *)v1103 + 4))();
  *(_DWORD *)(v1094 + 1744) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2146, Block::mStoneButton, 1, 5);
  sub_21E94B4((void **)&v2145, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v2143, Block::mStone);
  definition<ItemInstance>((int)&v2144, 35, (int)&v2143);
  Recipes::addShapedRecipe((int)v1780, (int)&v2146, &v2145);
  v1104 = v1094;
  v1105 = *(_DWORD *)(v1094 + 1604);
  v1106 = *(_DWORD *)(v1094 + 1608);
  v1107 = v1104;
  if ( v1105 == v1106 )
    v1111 = v1104;
      v1108 = *(void **)(v1105 + 60);
      if ( v1108 )
        operator delete(v1108);
      v1109 = *(void **)(v1105 + 44);
      if ( v1109 )
        operator delete(v1109);
      v1110 = *(_DWORD *)(v1105 + 16);
      if ( v1110 )
        (*(void (**)(void))(*(_DWORD *)v1110 + 4))();
      *(_DWORD *)(v1105 + 16) = 0;
      v1105 += 88;
    while ( v1106 != v1105 );
    v1111 = v1107;
    v1105 = *(_DWORD *)(v1107 + 1604);
  if ( v1105 )
    operator delete((void *)v1105);
  v1112 = *(void **)(v1111 + 1580);
  if ( v1112 )
    operator delete(v1112);
  v1113 = *(void **)(v1111 + 1564);
  if ( v1113 )
    operator delete(v1113);
  v1114 = *(_DWORD *)(v1111 + 1536);
  if ( v1114 )
    (*(void (**)(void))(*(_DWORD *)v1114 + 4))();
  *(_DWORD *)(v1111 + 1536) = 0;
  v1115 = *(_DWORD *)(v1111 + 1620);
  v1116 = (void *)(v1115 - 12);
  if ( (int *)(v1115 - 12) != &dword_28898C0 )
    v1442 = (unsigned int *)(v1115 - 4);
        v1443 = __ldrex(v1442);
      while ( __strex(v1443 - 1, v1442) );
      v1443 = (*v1442)--;
    if ( v1443 <= 0 )
      j_j_j_j__ZdlPv_9(v1116);
  v1117 = *(void **)(v1111 + 1676);
  if ( v1117 )
    operator delete(v1117);
  v1118 = *(void **)(v1111 + 1660);
  if ( v1118 )
    operator delete(v1118);
  v1119 = *(_DWORD *)(v1111 + 1632);
  if ( v1119 )
    (*(void (**)(void))(*(_DWORD *)v1119 + 4))();
  *(_DWORD *)(v1111 + 1632) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2142, Block::mWoodButton, 1, 5);
  sub_21E94B4((void **)&v2141, "#");
  definition<Block const*>((int)&v2140, 35, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1780, (int)&v2142, &v2141);
  v1120 = v1111;
  v1121 = *(_DWORD *)(v1111 + 1436);
  v1122 = *(_DWORD *)(v1111 + 1440);
  v1123 = v1120;
  if ( v1121 == v1122 )
    v1127 = v1120;
      v1124 = *(void **)(v1121 + 60);
      if ( v1124 )
        operator delete(v1124);
      v1125 = *(void **)(v1121 + 44);
      if ( v1125 )
        operator delete(v1125);
      v1126 = *(_DWORD *)(v1121 + 16);
      if ( v1126 )
        (*(void (**)(void))(*(_DWORD *)v1126 + 4))();
      *(_DWORD *)(v1121 + 16) = 0;
      v1121 += 88;
    while ( v1122 != v1121 );
    v1127 = v1123;
    v1121 = *(_DWORD *)(v1123 + 1436);
  if ( v1121 )
    operator delete((void *)v1121);
  v1128 = *(_DWORD *)(v1127 + 1452);
  v1129 = (void *)(v1128 - 12);
  if ( (int *)(v1128 - 12) != &dword_28898C0 )
    v1444 = (unsigned int *)(v1128 - 4);
        v1445 = __ldrex(v1444);
      while ( __strex(v1445 - 1, v1444) );
      v1445 = (*v1444)--;
    if ( v1445 <= 0 )
      j_j_j_j__ZdlPv_9(v1129);
  v1130 = *(void **)(v1127 + 1508);
  if ( v1130 )
    operator delete(v1130);
  v1131 = *(void **)(v1127 + 1492);
  if ( v1131 )
    operator delete(v1131);
  v1132 = *(_DWORD *)(v1127 + 1464);
  if ( v1132 )
    (*(void (**)(void))(*(_DWORD *)v1132 + 4))();
  *(_DWORD *)(v1127 + 1464) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2139, Block::mStonePressurePlate, 1);
  sub_21E94B4((void **)&v2138, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v2136, Block::mStone);
  definition<ItemInstance>((int)&v2137, 35, (int)&v2136);
  Recipes::addShapedRecipe((int)v1780, (int)&v2139, &v2138);
  v1133 = v1127;
  v1134 = *(_DWORD *)(v1127 + 1340);
  v1135 = *(_DWORD *)(v1127 + 1344);
  v1136 = v1133;
  if ( v1134 == v1135 )
    v1140 = v1133;
      v1137 = *(void **)(v1134 + 60);
      if ( v1137 )
        operator delete(v1137);
      v1138 = *(void **)(v1134 + 44);
      if ( v1138 )
        operator delete(v1138);
      v1139 = *(_DWORD *)(v1134 + 16);
      if ( v1139 )
        (*(void (**)(void))(*(_DWORD *)v1139 + 4))();
      *(_DWORD *)(v1134 + 16) = 0;
      v1134 += 88;
    while ( v1135 != v1134 );
    v1140 = v1136;
    v1134 = *(_DWORD *)(v1136 + 1340);
  if ( v1134 )
    operator delete((void *)v1134);
  v1141 = *(void **)(v1140 + 1316);
  if ( v1141 )
    operator delete(v1141);
  v1142 = *(void **)(v1140 + 1300);
  if ( v1142 )
    operator delete(v1142);
  v1143 = *(_DWORD *)(v1140 + 1272);
  if ( v1143 )
    (*(void (**)(void))(*(_DWORD *)v1143 + 4))();
  *(_DWORD *)(v1140 + 1272) = 0;
  v1144 = *(_DWORD *)(v1140 + 1356);
  v1145 = (void *)(v1144 - 12);
  if ( (int *)(v1144 - 12) != &dword_28898C0 )
    v1446 = (unsigned int *)(v1144 - 4);
        v1447 = __ldrex(v1446);
      while ( __strex(v1447 - 1, v1446) );
      v1447 = (*v1446)--;
    if ( v1447 <= 0 )
      j_j_j_j__ZdlPv_9(v1145);
  v1146 = *(void **)(v1140 + 1412);
  if ( v1146 )
    operator delete(v1146);
  v1147 = *(void **)(v1140 + 1396);
  if ( v1147 )
    operator delete(v1147);
  v1148 = *(_DWORD *)(v1140 + 1368);
  if ( v1148 )
    (*(void (**)(void))(*(_DWORD *)v1148 + 4))();
  *(_DWORD *)(v1140 + 1368) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2135, Block::mWoodPressurePlate, 1);
  sub_21E94B4((void **)&v2134, "##");
  definition<Block const*>((int)&v2133, 35, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1780, (int)&v2135, &v2134);
  v1149 = v1140;
  v1150 = *(_DWORD *)(v1140 + 1172);
  v1151 = *(_DWORD *)(v1140 + 1176);
  v1152 = v1149;
  if ( v1150 == v1151 )
    v1156 = v1149;
      v1153 = *(void **)(v1150 + 60);
      if ( v1153 )
        operator delete(v1153);
      v1154 = *(void **)(v1150 + 44);
      if ( v1154 )
        operator delete(v1154);
      v1155 = *(_DWORD *)(v1150 + 16);
      if ( v1155 )
        (*(void (**)(void))(*(_DWORD *)v1155 + 4))();
      *(_DWORD *)(v1150 + 16) = 0;
      v1150 += 88;
    while ( v1151 != v1150 );
    v1156 = v1152;
    v1150 = *(_DWORD *)(v1152 + 1172);
  if ( v1150 )
    operator delete((void *)v1150);
  v1157 = *(_DWORD *)(v1156 + 1188);
  v1158 = (void *)(v1157 - 12);
  if ( (int *)(v1157 - 12) != &dword_28898C0 )
    v1448 = (unsigned int *)(v1157 - 4);
        v1449 = __ldrex(v1448);
      while ( __strex(v1449 - 1, v1448) );
      v1449 = (*v1448)--;
    if ( v1449 <= 0 )
      j_j_j_j__ZdlPv_9(v1158);
  v1159 = *(void **)(v1156 + 1244);
  if ( v1159 )
    operator delete(v1159);
  v1160 = *(void **)(v1156 + 1228);
  if ( v1160 )
    operator delete(v1160);
  v1161 = *(_DWORD *)(v1156 + 1200);
  if ( v1161 )
    (*(void (**)(void))(*(_DWORD *)v1161 + 4))();
  *(_DWORD *)(v1156 + 1200) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2132, Block::mLightWeightedPressurePlate, 1);
  sub_21E94B4((void **)&v2131, "GG");
  definition<Item *>((int)&v2130, 71, Item::mGoldIngot);
  Recipes::addShapedRecipe((int)v1780, (int)&v2132, &v2131);
  v1162 = v1156;
  v1163 = *(_DWORD *)(v1156 + 1076);
  v1164 = *(_DWORD *)(v1156 + 1080);
  v1165 = v1162;
  if ( v1163 == v1164 )
    v1169 = v1162;
      v1166 = *(void **)(v1163 + 60);
      if ( v1166 )
        operator delete(v1166);
      v1167 = *(void **)(v1163 + 44);
      if ( v1167 )
        operator delete(v1167);
      v1168 = *(_DWORD *)(v1163 + 16);
      if ( v1168 )
        (*(void (**)(void))(*(_DWORD *)v1168 + 4))();
      *(_DWORD *)(v1163 + 16) = 0;
      v1163 += 88;
    while ( v1164 != v1163 );
    v1169 = v1165;
    v1163 = *(_DWORD *)(v1165 + 1076);
  if ( v1163 )
    operator delete((void *)v1163);
  v1170 = *(_DWORD *)(v1169 + 1092);
  v1171 = (void *)(v1170 - 12);
  if ( (int *)(v1170 - 12) != &dword_28898C0 )
    v1450 = (unsigned int *)(v1170 - 4);
        v1451 = __ldrex(v1450);
      while ( __strex(v1451 - 1, v1450) );
      v1451 = (*v1450)--;
    if ( v1451 <= 0 )
      j_j_j_j__ZdlPv_9(v1171);
  v1172 = *(void **)(v1169 + 1148);
  if ( v1172 )
    operator delete(v1172);
  v1173 = *(void **)(v1169 + 1132);
  if ( v1173 )
    operator delete(v1173);
  v1174 = *(_DWORD *)(v1169 + 1104);
  if ( v1174 )
    (*(void (**)(void))(*(_DWORD *)v1174 + 4))();
  *(_DWORD *)(v1169 + 1104) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2129, Block::mHeavyWeightedPressurePlate, 1);
  sub_21E94B4((void **)&v2128, "II");
  definition<Item *>((int)&v2127, 73, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v1780, (int)&v2129, &v2128);
  v1175 = v1169;
  v1176 = *(_DWORD *)(v1169 + 980);
  v1177 = *(_DWORD *)(v1169 + 984);
  v1178 = v1175;
  if ( v1176 == v1177 )
    v1182 = v1175;
      v1179 = *(void **)(v1176 + 60);
      if ( v1179 )
        operator delete(v1179);
      v1180 = *(void **)(v1176 + 44);
      if ( v1180 )
        operator delete(v1180);
      v1181 = *(_DWORD *)(v1176 + 16);
      if ( v1181 )
        (*(void (**)(void))(*(_DWORD *)v1181 + 4))();
      *(_DWORD *)(v1176 + 16) = 0;
      v1176 += 88;
    while ( v1177 != v1176 );
    v1182 = v1178;
    v1176 = *(_DWORD *)(v1178 + 980);
  if ( v1176 )
    operator delete((void *)v1176);
  v1183 = *(_DWORD *)(v1182 + 996);
  v1184 = (void *)(v1183 - 12);
  if ( (int *)(v1183 - 12) != &dword_28898C0 )
    v1452 = (unsigned int *)(v1183 - 4);
        v1453 = __ldrex(v1452);
      while ( __strex(v1453 - 1, v1452) );
      v1453 = (*v1452)--;
    if ( v1453 <= 0 )
      j_j_j_j__ZdlPv_9(v1184);
  v1185 = *(void **)(v1182 + 1052);
  if ( v1185 )
    operator delete(v1185);
  v1186 = *(void **)(v1182 + 1036);
  if ( v1186 )
    operator delete(v1186);
  v1187 = *(_DWORD *)(v1182 + 1008);
  if ( v1187 )
    (*(void (**)(void))(*(_DWORD *)v1187 + 4))();
  *(_DWORD *)(v1182 + 1008) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2126, Block::mDispenser, 1, 3);
  sub_21E94B4((void **)&v2125, "###");
  sub_21E94B4((void **)&v2124, "#X#");
  v1188 = v1182;
  sub_21E94B4((void **)&v2123, "#R#");
  v1189 = Block::mCobblestone;
  v1190 = ItemInstance::ItemInstance((ItemInstance *)&v2121, Item::mBow, 1, 0x7FFF);
  definition<Block const*,ItemInstance,Item *>((int)&v2122, 35, v1189, 88, (int)v1190, 82, Item::mRedStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2126, &v2125, &v2124, &v2123);
  v1191 = (_DWORD *)v1188;
  v1192 = *(_DWORD *)(v1188 + 868);
  v1193 = *(_DWORD *)(v1188 + 872);
  if ( v1192 != v1193 )
      v1194 = *(void **)(v1192 + 60);
      if ( v1194 )
        operator delete(v1194);
      v1195 = *(void **)(v1192 + 44);
      if ( v1195 )
        operator delete(v1195);
      v1196 = *(_DWORD *)(v1192 + 16);
      if ( v1196 )
        (*(void (**)(void))(*(_DWORD *)v1196 + 4))();
      *(_DWORD *)(v1192 + 16) = 0;
      v1192 += 88;
    while ( v1193 != v1192 );
    v1192 = *(_DWORD *)(v1188 + 868);
  if ( v1192 )
    operator delete((void *)v1192);
  v1197 = *(void **)(v1188 + 844);
  if ( v1197 )
    operator delete(v1197);
  v1198 = *(void **)(v1188 + 828);
  if ( v1198 )
    operator delete(v1198);
  v1199 = *(_DWORD *)(v1188 + 800);
  if ( v1199 )
    (*(void (**)(void))(*(_DWORD *)v1199 + 4))();
  *(_DWORD *)(v1188 + 800) = 0;
  v1200 = *(_DWORD *)(v1188 + 884);
  v1201 = (void *)(v1200 - 12);
  if ( (int *)(v1200 - 12) != &dword_28898C0 )
    v1454 = (unsigned int *)(v1200 - 4);
        v1455 = __ldrex(v1454);
      while ( __strex(v1455 - 1, v1454) );
      v1455 = (*v1454)--;
    if ( v1455 <= 0 )
      j_j_j_j__ZdlPv_9(v1201);
  v1202 = *(_DWORD *)(v1188 + 892);
  v1203 = (void *)(v1202 - 12);
  if ( (int *)(v1202 - 12) != &dword_28898C0 )
    v1456 = (unsigned int *)(v1202 - 4);
        v1457 = __ldrex(v1456);
      while ( __strex(v1457 - 1, v1456) );
      v1457 = (*v1456)--;
    if ( v1457 <= 0 )
      j_j_j_j__ZdlPv_9(v1203);
  v1204 = *(_DWORD *)(v1188 + 900);
  v1205 = (void *)(v1204 - 12);
  if ( (int *)(v1204 - 12) != &dword_28898C0 )
    v1458 = (unsigned int *)(v1204 - 4);
        v1459 = __ldrex(v1458);
      while ( __strex(v1459 - 1, v1458) );
      v1459 = (*v1458)--;
    if ( v1459 <= 0 )
      j_j_j_j__ZdlPv_9(v1205);
  v1206 = *(void **)(v1188 + 956);
  if ( v1206 )
    operator delete(v1206);
  v1207 = *(void **)(v1188 + 940);
  if ( v1207 )
    operator delete(v1207);
  v1208 = *(_DWORD *)(v1188 + 912);
  if ( v1208 )
    (*(void (**)(void))(*(_DWORD *)v1208 + 4))();
  *(_DWORD *)(v1188 + 912) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2120, Block::mDropper, 1, 3);
  sub_21E94B4((void **)&v2119, "###");
  sub_21E94B4((void **)&v2118, "# #");
  sub_21E94B4((void **)&v2117, "#R#");
  definition<Block const*,Item *>((int)&v2116, 35, Block::mCobblestone, 82, Item::mRedStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2120, &v2119, &v2118, &v2117);
  v1209 = *(_QWORD *)(v1188 + 684);
  if ( (_DWORD)v1209 != HIDWORD(v1209) )
      v1210 = *(void **)(v1209 + 60);
      if ( v1210 )
        operator delete(v1210);
      v1211 = *(void **)(v1209 + 44);
      if ( v1211 )
        operator delete(v1211);
      v1212 = *(_DWORD *)(v1209 + 16);
      if ( v1212 )
        (*(void (**)(void))(*(_DWORD *)v1212 + 4))();
      *(_DWORD *)(v1209 + 16) = 0;
      LODWORD(v1209) = v1209 + 88;
    while ( HIDWORD(v1209) != (_DWORD)v1209 );
    LODWORD(v1209) = *(_DWORD *)(v1188 + 684);
  if ( (_DWORD)v1209 )
    operator delete((void *)v1209);
  v1213 = *(_DWORD *)(v1188 + 700);
  v1214 = (void *)(v1213 - 12);
  if ( (int *)(v1213 - 12) != &dword_28898C0 )
    v1460 = (unsigned int *)(v1213 - 4);
        v1461 = __ldrex(v1460);
      while ( __strex(v1461 - 1, v1460) );
      v1461 = (*v1460)--;
    if ( v1461 <= 0 )
      j_j_j_j__ZdlPv_9(v1214);
  v1215 = *(_DWORD *)(v1188 + 708);
  v1216 = (void *)(v1215 - 12);
  if ( (int *)(v1215 - 12) != &dword_28898C0 )
    v1462 = (unsigned int *)(v1215 - 4);
        v1463 = __ldrex(v1462);
      while ( __strex(v1463 - 1, v1462) );
      v1463 = (*v1462)--;
    if ( v1463 <= 0 )
      j_j_j_j__ZdlPv_9(v1216);
  v1217 = *(_DWORD *)(v1188 + 716);
  v1218 = (void *)(v1217 - 12);
  if ( (int *)(v1217 - 12) != &dword_28898C0 )
    v1464 = (unsigned int *)(v1217 - 4);
        v1465 = __ldrex(v1464);
      while ( __strex(v1465 - 1, v1464) );
      v1465 = (*v1464)--;
    if ( v1465 <= 0 )
      j_j_j_j__ZdlPv_9(v1218);
  v1219 = *(void **)(v1188 + 772);
  if ( v1219 )
    operator delete(v1219);
  v1220 = *(void **)(v1188 + 756);
  if ( v1220 )
    operator delete(v1220);
  v1221 = *(_DWORD *)(v1188 + 728);
  if ( v1221 )
    (*(void (**)(void))(*(_DWORD *)v1221 + 4))();
  *(_DWORD *)(v1188 + 728) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2115, Item::mHopper, 1);
  sub_21E94B4((void **)&v2114, "I I");
  sub_21E94B4((void **)&v2113, "ICI");
  sub_21E94B4((void **)&v2112, " I ");
  definition<Item *,Block const*>((int)&v2111, 73, Item::mIronIngot, 67, Block::mChest);
  Recipes::addShapedRecipe((int)v1780, (int)&v2115, &v2114, &v2113, &v2112);
  v1222 = *(_QWORD *)(v1188 + 572);
  if ( (_DWORD)v1222 != HIDWORD(v1222) )
      v1223 = *(void **)(v1222 + 60);
      if ( v1223 )
        operator delete(v1223);
      v1224 = *(void **)(v1222 + 44);
      if ( v1224 )
        operator delete(v1224);
      v1225 = *(_DWORD *)(v1222 + 16);
      if ( v1225 )
        (*(void (**)(void))(*(_DWORD *)v1225 + 4))();
      *(_DWORD *)(v1222 + 16) = 0;
      LODWORD(v1222) = v1222 + 88;
    while ( HIDWORD(v1222) != (_DWORD)v1222 );
    LODWORD(v1222) = *(_DWORD *)(v1188 + 572);
  if ( (_DWORD)v1222 )
    operator delete((void *)v1222);
  v1226 = *(_DWORD *)(v1188 + 588);
  v1227 = (void *)(v1226 - 12);
  if ( (int *)(v1226 - 12) != &dword_28898C0 )
    v1466 = (unsigned int *)(v1226 - 4);
        v1467 = __ldrex(v1466);
      while ( __strex(v1467 - 1, v1466) );
      v1467 = (*v1466)--;
    if ( v1467 <= 0 )
      j_j_j_j__ZdlPv_9(v1227);
  v1228 = *(_DWORD *)(v1188 + 596);
  v1229 = (void *)(v1228 - 12);
  if ( (int *)(v1228 - 12) != &dword_28898C0 )
    v1468 = (unsigned int *)(v1228 - 4);
        v1469 = __ldrex(v1468);
      while ( __strex(v1469 - 1, v1468) );
      v1469 = (*v1468)--;
    if ( v1469 <= 0 )
      j_j_j_j__ZdlPv_9(v1229);
  v1230 = *(_DWORD *)(v1188 + 604);
  v1231 = (void *)(v1230 - 12);
  if ( (int *)(v1230 - 12) != &dword_28898C0 )
    v1470 = (unsigned int *)(v1230 - 4);
        v1471 = __ldrex(v1470);
      while ( __strex(v1471 - 1, v1470) );
      v1471 = (*v1470)--;
    if ( v1471 <= 0 )
      j_j_j_j__ZdlPv_9(v1231);
  v1232 = *(void **)(v1188 + 660);
  if ( v1232 )
    operator delete(v1232);
  v1233 = *(void **)(v1188 + 644);
  if ( v1233 )
    operator delete(v1233);
  v1234 = *(_DWORD *)(v1188 + 616);
  if ( v1234 )
    (*(void (**)(void))(*(_DWORD *)v1234 + 4))();
  *(_DWORD *)(v1188 + 616) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2110, Block::mObserver, 1);
  sub_21E94B4((void **)&v2109, "###");
  sub_21E94B4((void **)&v2108, "RRQ");
  sub_21E94B4((void **)&v2107, "###");
  definition<Block const*,Item *,Item *>(
    (int)&v2106,
    Block::mCobblestone,
    Item::mRedStone);
  Recipes::addShapedRecipe((int)v1780, (int)&v2110, &v2109, &v2108, &v2107);
  v1235 = *(_QWORD *)(v1188 + 460);
  if ( (_DWORD)v1235 != HIDWORD(v1235) )
      v1236 = *(void **)(v1235 + 60);
      if ( v1236 )
        operator delete(v1236);
      v1237 = *(void **)(v1235 + 44);
      if ( v1237 )
        operator delete(v1237);
      v1238 = *(_DWORD *)(v1235 + 16);
      if ( v1238 )
        (*(void (**)(void))(*(_DWORD *)v1238 + 4))();
      *(_DWORD *)(v1235 + 16) = 0;
      LODWORD(v1235) = v1235 + 88;
    while ( HIDWORD(v1235) != (_DWORD)v1235 );
    LODWORD(v1235) = *(_DWORD *)(v1188 + 460);
  if ( (_DWORD)v1235 )
    operator delete((void *)v1235);
  v1239 = *(_DWORD *)(v1188 + 476);
  v1240 = (void *)(v1239 - 12);
  if ( (int *)(v1239 - 12) != &dword_28898C0 )
    v1472 = (unsigned int *)(v1239 - 4);
        v1473 = __ldrex(v1472);
      while ( __strex(v1473 - 1, v1472) );
      v1473 = (*v1472)--;
    if ( v1473 <= 0 )
      j_j_j_j__ZdlPv_9(v1240);
  v1241 = *(_DWORD *)(v1188 + 484);
  v1242 = (void *)(v1241 - 12);
  if ( (int *)(v1241 - 12) != &dword_28898C0 )
    v1474 = (unsigned int *)(v1241 - 4);
        v1475 = __ldrex(v1474);
      while ( __strex(v1475 - 1, v1474) );
      v1475 = (*v1474)--;
    if ( v1475 <= 0 )
      j_j_j_j__ZdlPv_9(v1242);
  v1243 = *(_DWORD *)(v1188 + 492);
  v1244 = (void *)(v1243 - 12);
  if ( (int *)(v1243 - 12) != &dword_28898C0 )
    v1476 = (unsigned int *)(v1243 - 4);
        v1477 = __ldrex(v1476);
      while ( __strex(v1477 - 1, v1476) );
      v1477 = (*v1476)--;
    if ( v1477 <= 0 )
      j_j_j_j__ZdlPv_9(v1244);
  v1245 = *(void **)(v1188 + 548);
  if ( v1245 )
    operator delete(v1245);
  v1246 = *(void **)(v1188 + 532);
  if ( v1246 )
    operator delete(v1246);
  v1247 = *(_DWORD *)(v1188 + 504);
  if ( v1247 )
    (*(void (**)(void))(*(_DWORD *)v1247 + 4))();
  *(_DWORD *)(v1188 + 504) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2105, Block::mPiston, 1, 1);
  sub_21E94B4((void **)&v2104, "TTT");
  sub_21E94B4((void **)&v2103, "#X#");
  sub_21E94B4((void **)&v2102, "#R#");
  definition<Block const*,Item *,Item *,Block const*>(
    (int)&v2101,
    84,
    Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v1780, (int)&v2105, &v2104, &v2103, &v2102);
  v1248 = *(_QWORD *)(v1188 + 348);
  if ( (_DWORD)v1248 != HIDWORD(v1248) )
      v1249 = *(void **)(v1248 + 60);
      if ( v1249 )
        operator delete(v1249);
      v1250 = *(void **)(v1248 + 44);
      if ( v1250 )
        operator delete(v1250);
      v1251 = *(_DWORD *)(v1248 + 16);
      if ( v1251 )
        (*(void (**)(void))(*(_DWORD *)v1251 + 4))();
      *(_DWORD *)(v1248 + 16) = 0;
      LODWORD(v1248) = v1248 + 88;
    while ( HIDWORD(v1248) != (_DWORD)v1248 );
    LODWORD(v1248) = *(_DWORD *)(v1188 + 348);
  if ( (_DWORD)v1248 )
    operator delete((void *)v1248);
  v1252 = *(_DWORD *)(v1188 + 364);
  v1253 = (void *)(v1252 - 12);
  if ( (int *)(v1252 - 12) != &dword_28898C0 )
    v1478 = (unsigned int *)(v1252 - 4);
        v1479 = __ldrex(v1478);
      while ( __strex(v1479 - 1, v1478) );
      v1479 = (*v1478)--;
    if ( v1479 <= 0 )
      j_j_j_j__ZdlPv_9(v1253);
  v1254 = *(_DWORD *)(v1188 + 372);
  v1255 = (void *)(v1254 - 12);
  if ( (int *)(v1254 - 12) != &dword_28898C0 )
    v1480 = (unsigned int *)(v1254 - 4);
        v1481 = __ldrex(v1480);
      while ( __strex(v1481 - 1, v1480) );
      v1481 = (*v1480)--;
    if ( v1481 <= 0 )
      j_j_j_j__ZdlPv_9(v1255);
  v1256 = *(_DWORD *)(v1188 + 380);
  v1257 = (void *)(v1256 - 12);
  if ( (int *)(v1256 - 12) != &dword_28898C0 )
    v1482 = (unsigned int *)(v1256 - 4);
        v1483 = __ldrex(v1482);
      while ( __strex(v1483 - 1, v1482) );
      v1483 = (*v1482)--;
    if ( v1483 <= 0 )
      j_j_j_j__ZdlPv_9(v1257);
  v1258 = *(void **)(v1188 + 436);
  if ( v1258 )
    operator delete(v1258);
  v1259 = *(void **)(v1188 + 420);
  if ( v1259 )
    operator delete(v1259);
  v1260 = *(_DWORD *)(v1188 + 392);
  if ( v1260 )
    (*(void (**)(void))(*(_DWORD *)v1260 + 4))();
  *(_DWORD *)(v1188 + 392) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2100, Block::mStickyPiston, 1, 1);
  sub_21E94B4((void **)&v2099, (const char *)&aCdefghjklmnopq[15]);
  sub_21E94B4((void **)&v2098, (const char *)&aCdefghjklmnopq[12]);
  definition<Item *,Block const*>((int)&v2097, 83, Item::mSlimeBall, 80, Block::mPiston);
  Recipes::addShapedRecipe((int)v1780, (int)&v2100, &v2099, &v2098);
  v1261 = *(_QWORD *)(v1188 + 244);
  if ( (_DWORD)v1261 != HIDWORD(v1261) )
      v1262 = *(void **)(v1261 + 60);
      if ( v1262 )
        operator delete(v1262);
      v1263 = *(void **)(v1261 + 44);
      if ( v1263 )
        operator delete(v1263);
      v1264 = *(_DWORD *)(v1261 + 16);
      if ( v1264 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1264 + 4))(v1264, *(_DWORD *)(*(_DWORD *)v1264 + 4));
      *(_DWORD *)(v1261 + 16) = 0;
      LODWORD(v1261) = v1261 + 88;
    while ( HIDWORD(v1261) != (_DWORD)v1261 );
    LODWORD(v1261) = *(_DWORD *)(v1188 + 244);
  if ( (_DWORD)v1261 )
    operator delete((void *)v1261);
  v1265 = *(_DWORD *)(v1188 + 260);
  v1266 = (void *)(v1265 - 12);
  if ( (int *)(v1265 - 12) != &dword_28898C0 )
    v1484 = (unsigned int *)(v1265 - 4);
        v1485 = __ldrex(v1484);
      while ( __strex(v1485 - 1, v1484) );
      v1485 = (*v1484)--;
    if ( v1485 <= 0 )
      j_j_j_j__ZdlPv_9(v1266);
  v1267 = *(_DWORD *)(v1188 + 268);
  v1268 = (void *)(v1267 - 12);
  if ( (int *)(v1267 - 12) != &dword_28898C0 )
    v1486 = (unsigned int *)(v1267 - 4);
        v1487 = __ldrex(v1486);
      while ( __strex(v1487 - 1, v1486) );
      v1487 = (*v1486)--;
    if ( v1487 <= 0 )
      j_j_j_j__ZdlPv_9(v1268);
  v1269 = *(void **)(v1188 + 324);
  if ( v1269 )
    operator delete(v1269);
  v1270 = *(void **)(v1188 + 308);
  if ( v1270 )
    operator delete(v1270);
  v1271 = *(_DWORD *)(v1188 + 280);
  if ( v1271 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1271 + 4))(v1271, *(_DWORD *)(*(_DWORD *)v1271 + 4));
  v1272 = (ItemInstance *)&v2096;
  v1273 = "###";
  v1274 = &v2093;
  v1275 = &Item::mBed;
  v1276 = 0;
  *(_DWORD *)(v1188 + 280) = 0;
    ItemInstance::ItemInstance(v1272, *v1275, 1, v1276);
    sub_21E94B4((void **)&v2095, v1273);
    sub_21E94B4((void **)&v2094, "XXX");
    ItemInstance::ItemInstance((ItemInstance *)&v2092, Block::mWool, 1, v1276);
    definition<ItemInstance,Block const*>((int)v1274, 35, (int)&v2092, 88, Block::mWoodPlanks);
    Recipes::addShapedRecipe((int)v1780, (int)v1272, &v2095, &v2094);
    v1281 = v1276;
    v1282 = *(_QWORD *)(v1191 + 35);
    if ( (_DWORD)v1282 != HIDWORD(v1282) )
        v1283 = *(void **)(v1282 + 60);
        if ( v1283 )
          operator delete(v1283);
        v1284 = *(void **)(v1282 + 44);
        if ( v1284 )
          operator delete(v1284);
        v1285 = *(_DWORD *)(v1282 + 16);
        if ( v1285 )
          (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1285 + 4))(v1285, *(_DWORD *)(*(_DWORD *)v1285 + 4));
        *(_DWORD *)(v1282 + 16) = 0;
        LODWORD(v1282) = v1282 + 88;
      while ( HIDWORD(v1282) != (_DWORD)v1282 );
      LODWORD(v1282) = v1191[35];
    HIDWORD(v1282) = v1281;
    if ( (_DWORD)v1282 )
      operator delete((void *)v1282);
    v1287 = (void *)v1191[29];
    v1288 = v1274;
    if ( v1287 )
      operator delete(v1287);
    v1289 = (void *)v1191[25];
    v1290 = &Item::mBed;
    if ( v1289 )
      operator delete(v1289);
    v1291 = v1191[18];
    if ( v1291 )
      (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1291 + 4))(v1291, *(_DWORD *)(*(_DWORD *)v1291 + 4));
    v1292 = v1191[39];
    v1191[18] = 0;
    v1293 = (void *)(v1292 - 12);
    if ( (int *)(v1292 - 12) != &dword_28898C0 )
      v1277 = (unsigned int *)(v1292 - 4);
          v1278 = __ldrex(v1277);
        while ( __strex(v1278 - 1, v1277) );
        v1278 = (*v1277)--;
      if ( v1278 <= 0 )
        j_j_j_j__ZdlPv_9(v1293);
    v1294 = v1191[41];
    v1295 = (void *)(v1294 - 12);
    if ( (int *)(v1294 - 12) != &dword_28898C0 )
      v1279 = (unsigned int *)(v1294 - 4);
          v1280 = __ldrex(v1279);
        while ( __strex(v1280 - 1, v1279) );
        v1280 = (*v1279)--;
      if ( v1280 <= 0 )
        j_j_j_j__ZdlPv_9(v1295);
    v1296 = (void *)v1191[55];
    if ( v1296 )
      operator delete(v1296);
    v1297 = (void *)v1191[51];
    if ( v1297 )
      operator delete(v1297);
    v1298 = v1191[44];
    if ( v1298 )
      (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1298 + 4))(v1298, *(_DWORD *)(*(_DWORD *)v1298 + 4));
    v1299 = 0;
    v1191[44] = 0;
    v1779 = 15 - v1286;
      if ( v1299 != v1286 )
        ItemInstance::ItemInstance((ItemInstance *)&v2088, *v1290, 1, v1286);
        ItemInstance::ItemInstance((ItemInstance *)&v2082, *v1290, 1, v1299);
        v1300 = ItemInstance::ItemInstance((ItemInstance *)&v2078, Item::mDye_powder, 1, v1779);
        v1301 = v1286;
        definition<ItemInstance,ItemInstance>((int)&ptr, 0, (int)&v2082, 0, (int)v1300);
        Recipes::addShapelessRecipe((int)v1780, (int)&v2088, (unsigned __int64 *)&ptr);
        v1302 = ptr;
        v1303 = v2087;
        if ( ptr != v2087 )
          {
            v1304 = (void *)*((_DWORD *)v1302 + 15);
            if ( v1304 )
              operator delete(v1304);
            v1305 = (void *)*((_DWORD *)v1302 + 11);
            if ( v1305 )
              operator delete(v1305);
            v1306 = *((_DWORD *)v1302 + 4);
            if ( v1306 )
              (*(void (**)(void))(*(_DWORD *)v1306 + 4))();
            *((_DWORD *)v1302 + 4) = 0;
            v1302 = (char *)v1302 + 88;
          }
          while ( v1303 != v1302 );
          v1302 = ptr;
        if ( v1302 )
          operator delete(v1302);
        v1290 = &Item::mBed;
        if ( v2081 )
          operator delete(v2081);
        v1191 = &v2089;
        v1286 = v1301;
        if ( v2080 )
          operator delete(v2080);
        if ( v2079 )
          (*(void (**)(void))(*(_DWORD *)v2079 + 4))();
        v2079 = 0;
        if ( v2085 )
          operator delete(v2085);
        if ( v2084 )
          operator delete(v2084);
        if ( v2083 )
          (*(void (**)(void))(*(_DWORD *)v2083 + 4))();
        v2083 = 0;
        if ( v2091 )
          operator delete(v2091);
        if ( v2090 )
          operator delete(v2090);
        if ( v2089 )
          (*(void (**)(void))(*(_DWORD *)v2089 + 4))();
        v2089 = 0;
      ++v1299;
    while ( v1299 < 16 );
    v1276 = v1286 + 1;
    v1273 = "###";
    v1275 = v1290;
    v1274 = v1288;
    v1272 = (ItemInstance *)&v2096;
  while ( v1276 < 16 );
  ItemInstance::ItemInstance((ItemInstance *)&v2074, Block::mEnchantingTable, 1);
  sub_21E94B4((void **)&v2073, " B ");
  sub_21E94B4((void **)&v2072, "D#D");
  sub_21E94B4((void **)&v2071, "###");
  definition<Block const*,Item *,Item *>((int)&v2069, 35, Block::mObsidian, 66, Item::mBook, 68, Item::mDiamond);
  Recipes::addShapedRecipe((int)v1780, (int)&v2074, &v2073, &v2072, &v2071);
  v1307 = v2069;
  v1308 = v2070;
  if ( v2069 != v2070 )
      v1309 = (void *)*((_DWORD *)v1307 + 15);
      if ( v1309 )
        operator delete(v1309);
      v1310 = (void *)*((_DWORD *)v1307 + 11);
      if ( v1310 )
        operator delete(v1310);
      v1311 = *((_DWORD *)v1307 + 4);
      if ( v1311 )
        (*(void (**)(void))(*(_DWORD *)v1311 + 4))();
      *((_DWORD *)v1307 + 4) = 0;
      v1307 = (char *)v1307 + 88;
    while ( v1308 != v1307 );
    v1307 = v2069;
  if ( v1307 )
    operator delete(v1307);
  v1312 = (void *)(v2071 - 12);
  if ( (int *)(v2071 - 12) != &dword_28898C0 )
    v1666 = (unsigned int *)(v2071 - 4);
        v1667 = __ldrex(v1666);
      while ( __strex(v1667 - 1, v1666) );
      v1667 = (*v1666)--;
    if ( v1667 <= 0 )
      j_j_j_j__ZdlPv_9(v1312);
  v1313 = (void *)(v2072 - 12);
  if ( (int *)(v2072 - 12) != &dword_28898C0 )
    v1668 = (unsigned int *)(v2072 - 4);
        v1669 = __ldrex(v1668);
      while ( __strex(v1669 - 1, v1668) );
      v1669 = (*v1668)--;
    if ( v1669 <= 0 )
      j_j_j_j__ZdlPv_9(v1313);
  v1314 = (void *)(v2073 - 12);
  if ( (int *)(v2073 - 12) != &dword_28898C0 )
    v1670 = (unsigned int *)(v2073 - 4);
        v1671 = __ldrex(v1670);
      while ( __strex(v1671 - 1, v1670) );
      v1671 = (*v1670)--;
    if ( v1671 <= 0 )
      j_j_j_j__ZdlPv_9(v1314);
  if ( v2077 )
    operator delete(v2077);
  if ( v2076 )
    operator delete(v2076);
  if ( v2075 )
    (*(void (**)(void))(*(_DWORD *)v2075 + 4))();
  v2075 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2065, Item::mLeather, 1);
  sub_21E94B4((void **)&v2064, "##");
  sub_21E94B4((void **)&v2063, "##");
  definition<Item *>((int)&v2061, 35, Item::mRabbitHide);
  Recipes::addShapedRecipe((int)v1780, (int)&v2065, &v2064, &v2063);
  v1315 = v2061;
  v1316 = v2062;
  if ( v2061 != v2062 )
      v1317 = (void *)*((_DWORD *)v1315 + 15);
      if ( v1317 )
        operator delete(v1317);
      v1318 = (void *)*((_DWORD *)v1315 + 11);
      if ( v1318 )
        operator delete(v1318);
      v1319 = *((_DWORD *)v1315 + 4);
      if ( v1319 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1319 + 4))(v1319, *(_DWORD *)(*(_DWORD *)v1319 + 4));
      *((_DWORD *)v1315 + 4) = 0;
      v1315 = (char *)v1315 + 88;
    while ( v1316 != v1315 );
    v1315 = v2061;
  if ( v1315 )
    operator delete(v1315);
  v1320 = (void *)(v2063 - 12);
  if ( (int *)(v2063 - 12) != &dword_28898C0 )
    v1672 = (unsigned int *)(v2063 - 4);
        v1673 = __ldrex(v1672);
      while ( __strex(v1673 - 1, v1672) );
      v1673 = (*v1672)--;
    if ( v1673 <= 0 )
      j_j_j_j__ZdlPv_9(v1320);
  v1321 = (void *)(v2064 - 12);
  if ( (int *)(v2064 - 12) != &dword_28898C0 )
    v1674 = (unsigned int *)(v2064 - 4);
        v1675 = __ldrex(v1674);
      while ( __strex(v1675 - 1, v1674) );
      v1675 = (*v1674)--;
    if ( v1675 <= 0 )
      j_j_j_j__ZdlPv_9(v1321);
  if ( v2068 )
    operator delete(v2068);
  if ( v2067 )
    operator delete(v2067);
  if ( v2066 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v2066 + 4))(v2066, *(_DWORD *)(*(_DWORD *)v2066 + 4));
  v2066 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2057, Item::mComparator, 1);
  sub_21E94B4((void **)&v2056, " # ");
  sub_21E94B4((void **)&v2055, "#X#");
  sub_21E94B4((void **)&v2054, "III");
    (int)&v2052,
  Recipes::addShapedRecipe((int)v1780, (int)&v2057, &v2056, &v2055, &v2054);
  v1322 = v2052;
  v1323 = v2053;
  if ( v2052 != v2053 )
      v1324 = (void *)*((_DWORD *)v1322 + 15);
      if ( v1324 )
        operator delete(v1324);
      v1325 = (void *)*((_DWORD *)v1322 + 11);
      if ( v1325 )
        operator delete(v1325);
      v1326 = *((_DWORD *)v1322 + 4);
      if ( v1326 )
        (*(void (**)(void))(*(_DWORD *)v1326 + 4))();
      *((_DWORD *)v1322 + 4) = 0;
      v1322 = (char *)v1322 + 88;
    while ( v1323 != v1322 );
    v1322 = v2052;
  if ( v1322 )
    operator delete(v1322);
  v1327 = (void *)(v2054 - 12);
  if ( (int *)(v2054 - 12) != &dword_28898C0 )
    v1676 = (unsigned int *)(v2054 - 4);
        v1677 = __ldrex(v1676);
      while ( __strex(v1677 - 1, v1676) );
      v1677 = (*v1676)--;
    if ( v1677 <= 0 )
      j_j_j_j__ZdlPv_9(v1327);
  v1328 = (void *)(v2055 - 12);
  if ( (int *)(v2055 - 12) != &dword_28898C0 )
    v1678 = (unsigned int *)(v2055 - 4);
        v1679 = __ldrex(v1678);
      while ( __strex(v1679 - 1, v1678) );
      v1679 = (*v1678)--;
    if ( v1679 <= 0 )
      j_j_j_j__ZdlPv_9(v1328);
  v1329 = (void *)(v2056 - 12);
  if ( (int *)(v2056 - 12) != &dword_28898C0 )
    v1680 = (unsigned int *)(v2056 - 4);
        v1681 = __ldrex(v1680);
      while ( __strex(v1681 - 1, v1680) );
      v1681 = (*v1680)--;
    if ( v1681 <= 0 )
      j_j_j_j__ZdlPv_9(v1329);
  if ( v2060 )
    operator delete(v2060);
  if ( v2059 )
    operator delete(v2059);
  if ( v2058 )
    (*(void (**)(void))(*(_DWORD *)v2058 + 4))();
  v2058 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2048, Item::mTNTMinecart, 1);
  sub_21E94B4((void **)&v2047, "#");
  sub_21E94B4((void **)&v2046, "X");
  definition<Block const*,Item *>((int)&v2044, 35, Block::mTNT, 88, Item::mMinecart);
  Recipes::addShapedRecipe((int)v1780, (int)&v2048, &v2047, &v2046);
  v1330 = v2044;
  v1331 = v2045;
  if ( v2044 != v2045 )
      v1332 = (void *)*((_DWORD *)v1330 + 15);
      if ( v1332 )
        operator delete(v1332);
      v1333 = (void *)*((_DWORD *)v1330 + 11);
      if ( v1333 )
        operator delete(v1333);
      v1334 = *((_DWORD *)v1330 + 4);
      if ( v1334 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1334 + 4))(v1334, *(_DWORD *)(*(_DWORD *)v1334 + 4));
      *((_DWORD *)v1330 + 4) = 0;
      v1330 = (char *)v1330 + 88;
    while ( v1331 != v1330 );
    v1330 = v2044;
  if ( v1330 )
    operator delete(v1330);
  v1335 = (void *)(v2046 - 12);
  if ( (int *)(v2046 - 12) != &dword_28898C0 )
    v1682 = (unsigned int *)(v2046 - 4);
        v1683 = __ldrex(v1682);
      while ( __strex(v1683 - 1, v1682) );
      v1683 = (*v1682)--;
    if ( v1683 <= 0 )
      j_j_j_j__ZdlPv_9(v1335);
  v1336 = (void *)(v2047 - 12);
  if ( (int *)(v2047 - 12) != &dword_28898C0 )
    v1684 = (unsigned int *)(v2047 - 4);
        v1685 = __ldrex(v1684);
      while ( __strex(v1685 - 1, v1684) );
      v1685 = (*v1684)--;
    if ( v1685 <= 0 )
      j_j_j_j__ZdlPv_9(v1336);
  if ( v2051 )
    operator delete(v2051);
  if ( v2050 )
    operator delete(v2050);
  if ( v2049 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v2049 + 4))(v2049, *(_DWORD *)(*(_DWORD *)v2049 + 4));
  v2049 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2040, Item::mItemFrame, 1);
  sub_21E94B4((void **)&v2039, "###");
  sub_21E94B4((void **)&v2038, "#X#");
  sub_21E94B4((void **)&v2037, "###");
  definition<Item *,Item *>((int)&v2035, 35, Item::mStick, 88, Item::mLeather);
  Recipes::addShapedRecipe((int)v1780, (int)&v2040, &v2039, &v2038, &v2037);
  v1337 = v2035;
  v1338 = v2036;
  if ( v2035 != v2036 )
      v1339 = (void *)*((_DWORD *)v1337 + 15);
      if ( v1339 )
        operator delete(v1339);
      v1340 = (void *)*((_DWORD *)v1337 + 11);
      if ( v1340 )
        operator delete(v1340);
      v1341 = *((_DWORD *)v1337 + 4);
      if ( v1341 )
        (*(void (**)(void))(*(_DWORD *)v1341 + 4))();
      *((_DWORD *)v1337 + 4) = 0;
      v1337 = (char *)v1337 + 88;
    while ( v1338 != v1337 );
    v1337 = v2035;
  if ( v1337 )
    operator delete(v1337);
  v1342 = (void *)(v2037 - 12);
  if ( (int *)(v2037 - 12) != &dword_28898C0 )
    v1686 = (unsigned int *)(v2037 - 4);
        v1687 = __ldrex(v1686);
      while ( __strex(v1687 - 1, v1686) );
      v1687 = (*v1686)--;
    if ( v1687 <= 0 )
      j_j_j_j__ZdlPv_9(v1342);
  v1343 = (void *)(v2038 - 12);
  if ( (int *)(v2038 - 12) != &dword_28898C0 )
    v1688 = (unsigned int *)(v2038 - 4);
        v1689 = __ldrex(v1688);
      while ( __strex(v1689 - 1, v1688) );
      v1689 = (*v1688)--;
    if ( v1689 <= 0 )
      j_j_j_j__ZdlPv_9(v1343);
  v1344 = (void *)(v2039 - 12);
  if ( (int *)(v2039 - 12) != &dword_28898C0 )
    v1690 = (unsigned int *)(v2039 - 4);
        v1691 = __ldrex(v1690);
      while ( __strex(v1691 - 1, v1690) );
      v1691 = (*v1690)--;
    if ( v1691 <= 0 )
      j_j_j_j__ZdlPv_9(v1344);
  if ( v2043 )
    operator delete(v2043);
  if ( v2042 )
    operator delete(v2042);
  if ( v2041 )
    (*(void (**)(void))(*(_DWORD *)v2041 + 4))();
  v2041 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2031, Item::mEnderEye, 1);
  definition<Item *,Item *>((int)&v2029, 0, Item::mBlazePowder, 0, Item::mEnderpearl);
  Recipes::addShapelessRecipe((int)v1780, (int)&v2031, (unsigned __int64 *)&v2029);
  v1345 = v2029;
  v1346 = v2030;
  if ( v2029 != v2030 )
      v1347 = (void *)*((_DWORD *)v1345 + 15);
      if ( v1347 )
        operator delete(v1347);
      v1348 = (void *)*((_DWORD *)v1345 + 11);
      if ( v1348 )
        operator delete(v1348);
      v1349 = *((_DWORD *)v1345 + 4);
      if ( v1349 )
        (*(void (**)(void))(*(_DWORD *)v1349 + 4))();
      *((_DWORD *)v1345 + 4) = 0;
      v1345 = (char *)v1345 + 88;
    while ( v1346 != v1345 );
    v1345 = v2029;
  if ( v1345 )
    operator delete(v1345);
  if ( v2034 )
    operator delete(v2034);
  if ( v2033 )
    operator delete(v2033);
  if ( v2032 )
    (*(void (**)(void))(*(_DWORD *)v2032 + 4))();
  v2032 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2025, Item::mEndCrystal, 1);
  sub_21E94B4((void **)&v2024, "###");
  sub_21E94B4((void **)&v2023, "#E#");
  sub_21E94B4((void **)&v2022, "#G#");
  definition<Block const*,Item *,Item *>((int)&v2020, 35, Block::mGlass, 69, Item::mEnderEye, 71, Item::mGhast_tear);
  Recipes::addShapedRecipe((int)v1780, (int)&v2025, &v2024, &v2023, &v2022);
  v1350 = v2020;
  v1351 = v2021;
  if ( v2020 != v2021 )
      v1352 = (void *)*((_DWORD *)v1350 + 15);
      if ( v1352 )
        operator delete(v1352);
      v1353 = (void *)*((_DWORD *)v1350 + 11);
      if ( v1353 )
        operator delete(v1353);
      v1354 = *((_DWORD *)v1350 + 4);
      if ( v1354 )
        (*(void (**)(void))(*(_DWORD *)v1354 + 4))();
      *((_DWORD *)v1350 + 4) = 0;
      v1350 = (char *)v1350 + 88;
    while ( v1351 != v1350 );
    v1350 = v2020;
  if ( v1350 )
    operator delete(v1350);
  v1355 = (void *)(v2022 - 12);
  if ( (int *)(v2022 - 12) != &dword_28898C0 )
    v1692 = (unsigned int *)(v2022 - 4);
        v1693 = __ldrex(v1692);
      while ( __strex(v1693 - 1, v1692) );
      v1693 = (*v1692)--;
    if ( v1693 <= 0 )
      j_j_j_j__ZdlPv_9(v1355);
  v1356 = (void *)(v2023 - 12);
  if ( (int *)(v2023 - 12) != &dword_28898C0 )
    v1694 = (unsigned int *)(v2023 - 4);
        v1695 = __ldrex(v1694);
      while ( __strex(v1695 - 1, v1694) );
      v1695 = (*v1694)--;
    if ( v1695 <= 0 )
      j_j_j_j__ZdlPv_9(v1356);
  v1357 = (void *)(v2024 - 12);
  if ( (int *)(v2024 - 12) != &dword_28898C0 )
    v1696 = (unsigned int *)(v2024 - 4);
        v1697 = __ldrex(v1696);
      while ( __strex(v1697 - 1, v1696) );
      v1697 = (*v1696)--;
    if ( v1697 <= 0 )
      j_j_j_j__ZdlPv_9(v1357);
  if ( v2028 )
    operator delete(v2028);
  if ( v2027 )
    operator delete(v2027);
  if ( v2026 )
    (*(void (**)(void))(*(_DWORD *)v2026 + 4))();
  v2017 = 0;
  v2018 = 0;
  v2026 = 0;
  v2019 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v2013, Item::mFireworksItem, 3);
  FireworksItem::initFireworksRocketItem((int)&v2013, (unsigned __int64 *)&v2017, 1);
  definition<Item *,Item *>((int)&v2011, 0, Item::mPaper, 0, Item::mSulphur);
  Recipes::addShapelessRecipe((int)v1780, (int)&v2013, (unsigned __int64 *)&v2011);
  v1358 = v2011;
  v1359 = v2012;
  if ( v2011 != v2012 )
      v1360 = (void *)*((_DWORD *)v1358 + 15);
      if ( v1360 )
        operator delete(v1360);
      v1361 = (void *)*((_DWORD *)v1358 + 11);
      if ( v1361 )
        operator delete(v1361);
      v1362 = *((_DWORD *)v1358 + 4);
      if ( v1362 )
        (*(void (**)(void))(*(_DWORD *)v1362 + 4))();
      *((_DWORD *)v1358 + 4) = 0;
      v1358 = (char *)v1358 + 88;
    while ( v1359 != v1358 );
    v1358 = v2011;
  if ( v1358 )
    operator delete(v1358);
  if ( v2016 )
    operator delete(v2016);
  if ( v2015 )
    operator delete(v2015);
  if ( v2014 )
    (*(void (**)(void))(*(_DWORD *)v2014 + 4))();
  v1363 = v2017;
  v1364 = v2018;
  if ( v2017 != v2018 )
      v1365 = (void *)*((_DWORD *)v1363 + 13);
      if ( v1365 )
        operator delete(v1365);
      v1366 = (void *)*((_DWORD *)v1363 + 9);
      if ( v1366 )
        operator delete(v1366);
      v1367 = *((_DWORD *)v1363 + 2);
      if ( v1367 )
        (*(void (**)(void))(*(_DWORD *)v1367 + 4))();
      *((_DWORD *)v1363 + 2) = 0;
      v1363 = (char *)v1363 + 72;
    while ( v1364 != v1363 );
    v1363 = v2017;
  if ( v1363 )
    operator delete(v1363);
  v1368 = (ItemInstance *)&v2007;
  v1369 = (ItemInstance *)&v1987;
  v1370 = 0;
  v1371 = &Block::mWoolCarpet;
    ItemInstance::ItemInstance(v1368, *v1371, 3, v1370);
    sub_21E94B4((void **)&v2006, "##");
    ItemInstance::ItemInstance((ItemInstance *)&v2000, Block::mWool, 1, v1370);
    definition<ItemInstance>((int)&v2004, 35, (int)&v2000);
    Recipes::addShapedRecipe((int)v1780, (int)&v2007, &v2006);
    v1506 = v2004;
    v1507 = v2005;
    if ( v2004 != v2005 )
        v1508 = (void *)*((_DWORD *)v1506 + 15);
        if ( v1508 )
          operator delete(v1508);
        v1509 = (void *)*((_DWORD *)v1506 + 11);
        if ( v1509 )
          operator delete(v1509);
        v1510 = *((_DWORD *)v1506 + 4);
        if ( v1510 )
          (*(void (**)(void))(*(_DWORD *)v1510 + 4))();
        *((_DWORD *)v1506 + 4) = 0;
        v1506 = (char *)v1506 + 88;
      while ( v1507 != v1506 );
      v1506 = v2004;
    if ( v1506 )
      operator delete(v1506);
    if ( v2003 )
      operator delete(v2003);
    if ( v2002 )
      operator delete(v2002);
    if ( v2001 )
      (*(void (**)(void))(*(_DWORD *)v2001 + 4))();
    v2001 = 0;
    v1511 = (void *)(v2006 - 12);
    if ( (int *)(v2006 - 12) != &dword_28898C0 )
      v1488 = (unsigned int *)(v2006 - 4);
          v1489 = __ldrex(v1488);
        while ( __strex(v1489 - 1, v1488) );
        v1489 = (*v1488)--;
      if ( v1489 <= 0 )
        j_j_j_j__ZdlPv_9(v1511);
    if ( v2010 )
      operator delete(v2010);
    if ( v2009 )
      operator delete(v2009);
    if ( v2008 )
      (*(void (**)(void))(*(_DWORD *)v2008 + 4))();
    v2008 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v1996, Block::mStainedClay, 8, 15 - v1370);
    sub_21E94B4((void **)&v1995, "###");
    sub_21E94B4((void **)&v1994, "#X#");
    sub_21E94B4((void **)&v1993, "###");
    v1512 = Block::mHardenedClay;
    ItemInstance::ItemInstance(v1369, Item::mDye_powder, 1, v1370);
    definition<Block const*,ItemInstance>((int)&v1991, 35, v1512, 88, (int)v1369);
    Recipes::addShapedRecipe((int)v1780, (int)&v1996, &v1995, &v1994, &v1993);
    v1513 = v1991;
    v1514 = v1992;
    if ( v1991 != v1992 )
        v1515 = (void *)*((_DWORD *)v1513 + 15);
        if ( v1515 )
          operator delete(v1515);
        v1516 = (void *)*((_DWORD *)v1513 + 11);
        if ( v1516 )
          operator delete(v1516);
        v1517 = *((_DWORD *)v1513 + 4);
        if ( v1517 )
          (*(void (**)(void))(*(_DWORD *)v1517 + 4))();
        *((_DWORD *)v1513 + 4) = 0;
        v1513 = (char *)v1513 + 88;
      while ( v1514 != v1513 );
      v1513 = v1991;
    if ( v1513 )
      operator delete(v1513);
    if ( v1990 )
      operator delete(v1990);
    if ( v1989 )
      operator delete(v1989);
    if ( v1988 )
      (*(void (**)(void))(*(_DWORD *)v1988 + 4))();
    v1988 = 0;
    v1518 = (void *)(v1993 - 12);
    if ( (int *)(v1993 - 12) != &dword_28898C0 )
      v1490 = (unsigned int *)(v1993 - 4);
          v1491 = __ldrex(v1490);
        while ( __strex(v1491 - 1, v1490) );
        v1491 = (*v1490)--;
      if ( v1491 <= 0 )
        j_j_j_j__ZdlPv_9(v1518);
    v1519 = (void *)(v1994 - 12);
    if ( (int *)(v1994 - 12) != &dword_28898C0 )
      v1492 = (unsigned int *)(v1994 - 4);
          v1493 = __ldrex(v1492);
        while ( __strex(v1493 - 1, v1492) );
        v1493 = (*v1492)--;
      if ( v1493 <= 0 )
        j_j_j_j__ZdlPv_9(v1519);
    v1520 = (void *)(v1995 - 12);
    if ( (int *)(v1995 - 12) != &dword_28898C0 )
      v1494 = (unsigned int *)(v1995 - 4);
          v1495 = __ldrex(v1494);
        while ( __strex(v1495 - 1, v1494) );
        v1495 = (*v1494)--;
      if ( v1495 <= 0 )
        j_j_j_j__ZdlPv_9(v1520);
    if ( v1999 )
      operator delete(v1999);
    if ( v1998 )
      operator delete(v1998);
    if ( v1997 )
      (*(void (**)(void))(*(_DWORD *)v1997 + 4))();
    v1997 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v1983, Block::mStainedGlass, 8, 15 - v1370);
    sub_21E94B4((void **)&v1982, "###");
    sub_21E94B4((void **)&v1981, "#X#");
    sub_21E94B4((void **)&v1980, "###");
    v1521 = Block::mGlass;
    ItemInstance::ItemInstance((ItemInstance *)&v1974, Item::mDye_powder, 1, v1370);
    definition<Block const*,ItemInstance>((int)&v1978, 35, v1521, 88, (int)&v1974);
    Recipes::addShapedRecipe((int)v1780, (int)&v1983, &v1982, &v1981, &v1980);
    v1522 = v1978;
    v1523 = v1979;
    if ( v1978 != v1979 )
        v1524 = (void *)*((_DWORD *)v1522 + 15);
        if ( v1524 )
          operator delete(v1524);
        v1525 = (void *)*((_DWORD *)v1522 + 11);
        if ( v1525 )
          operator delete(v1525);
        v1526 = *((_DWORD *)v1522 + 4);
        if ( v1526 )
          (*(void (**)(void))(*(_DWORD *)v1526 + 4))();
        *((_DWORD *)v1522 + 4) = 0;
        v1522 = (char *)v1522 + 88;
      while ( v1523 != v1522 );
      v1522 = v1978;
    if ( v1522 )
      operator delete(v1522);
    if ( v1977 )
      operator delete(v1977);
    if ( v1976 )
      operator delete(v1976);
    if ( v1975 )
      (*(void (**)(void))(*(_DWORD *)v1975 + 4))();
    v1975 = 0;
    v1527 = (void *)(v1980 - 12);
    if ( (int *)(v1980 - 12) != &dword_28898C0 )
      v1496 = (unsigned int *)(v1980 - 4);
          v1497 = __ldrex(v1496);
        while ( __strex(v1497 - 1, v1496) );
        v1497 = (*v1496)--;
      if ( v1497 <= 0 )
        j_j_j_j__ZdlPv_9(v1527);
    v1528 = (void *)(v1981 - 12);
    if ( (int *)(v1981 - 12) != &dword_28898C0 )
      v1498 = (unsigned int *)(v1981 - 4);
          v1499 = __ldrex(v1498);
        while ( __strex(v1499 - 1, v1498) );
        v1499 = (*v1498)--;
      if ( v1499 <= 0 )
        j_j_j_j__ZdlPv_9(v1528);
    v1529 = (void *)(v1982 - 12);
    if ( (int *)(v1982 - 12) != &dword_28898C0 )
      v1500 = (unsigned int *)(v1982 - 4);
          v1501 = __ldrex(v1500);
        while ( __strex(v1501 - 1, v1500) );
        v1501 = (*v1500)--;
      if ( v1501 <= 0 )
        j_j_j_j__ZdlPv_9(v1529);
    if ( v1986 )
      operator delete(v1986);
    if ( v1985 )
      operator delete(v1985);
    if ( v1984 )
      (*(void (**)(void))(*(_DWORD *)v1984 + 4))();
    v1984 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v1970, Block::mStainedGlassPane, 16, 15 - v1370);
    sub_21E94B4((void **)&v1969, "XXX");
    sub_21E94B4((void **)&v1968, "XXX");
    ItemInstance::ItemInstance((ItemInstance *)&v1962, Block::mStainedGlass, 1, 15 - v1370);
    definition<ItemInstance>((int)&v1966, 88, (int)&v1962);
    Recipes::addShapedRecipe((int)v1780, (int)&v1970, &v1969, &v1968);
    v1530 = v1966;
    v1531 = v1967;
    if ( v1966 != v1967 )
        v1532 = (void *)*((_DWORD *)v1530 + 15);
        if ( v1532 )
          operator delete(v1532);
        v1533 = (void *)*((_DWORD *)v1530 + 11);
        if ( v1533 )
          operator delete(v1533);
        v1534 = *((_DWORD *)v1530 + 4);
        if ( v1534 )
          (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1534 + 4))(v1534, *(_DWORD *)(*(_DWORD *)v1534 + 4));
        *((_DWORD *)v1530 + 4) = 0;
        v1530 = (char *)v1530 + 88;
      while ( v1531 != v1530 );
      v1530 = v1966;
    if ( v1530 )
      operator delete(v1530);
    if ( v1965 )
      operator delete(v1965);
    if ( v1964 )
      operator delete(v1964);
    if ( v1963 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v1963 + 4))(v1963, *(_DWORD *)(*(_DWORD *)v1963 + 4));
    v1963 = 0;
    v1535 = (void *)(v1968 - 12);
    if ( (int *)(v1968 - 12) != &dword_28898C0 )
      v1502 = (unsigned int *)(v1968 - 4);
          v1503 = __ldrex(v1502);
        while ( __strex(v1503 - 1, v1502) );
        v1503 = (*v1502)--;
      if ( v1503 <= 0 )
        j_j_j_j__ZdlPv_9(v1535);
    v1536 = (void *)(v1969 - 12);
    if ( (int *)(v1969 - 12) != &dword_28898C0 )
      v1504 = (unsigned int *)(v1969 - 4);
          v1505 = __ldrex(v1504);
        while ( __strex(v1505 - 1, v1504) );
        v1505 = (*v1504)--;
      if ( v1505 <= 0 )
        j_j_j_j__ZdlPv_9(v1536);
    if ( v1973 )
      operator delete(v1973);
    if ( v1972 )
      operator delete(v1972);
    if ( v1971 )
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v1971 + 4))(v1971, *(_DWORD *)(*(_DWORD *)v1971 + 4));
    v1971 = 0;
    v1537 = operator new(1u);
    v1959 = 0;
    v1960 = 0;
    v1538 = Item::mFireworkCharge;
    *(_BYTE *)v1537 = 15 - v1370;
    v1961 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v1955, v1538, 1);
    ItemInstance::ItemInstance((ItemInstance *)&v1951, Item::mFireworksItem, 3);
    v1948 = 0;
    v1949 = 0;
    v1950 = 0;
    v1539 = operator new(1u);
    v1540 = *(_BYTE *)v1537;
    v1948 = v1539;
    v1950 = (char *)v1539 + 1;
    v1947 = 0;
    v1946 = 0;
    *(_BYTE *)v1539 = v1540;
    v1949 = (char *)v1539 + 1;
    v1945 = 0;
    v1541 = FireworkChargeItem::initFireworkChargeItem(
              (ItemInstance *)&v1955,
              0,
              (__int64 *)&v1948,
              (__int64 *)&v1945,
              0);
    if ( v1960 == v1961 )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)&v1959,
        (int)v1541);
      ItemInstance::ItemInstance(v1960, (int)v1541);
      v1960 = (ItemInstance *)((char *)v1960 + 72);
    if ( v1945 )
      operator delete(v1945);
    if ( v1948 )
      operator delete(v1948);
    v1542 = FireworksItem::initFireworksRocketItem((int)&v1951, (unsigned __int64 *)&v1959, 1);
    ItemInstance::operator=((int)&v1951, v1542);
    v1543 = v1959;
    v1544 = Item::mSulphur;
    ItemInstance::ItemInstance((ItemInstance *)&v1939, Item::mDye_powder, 1, 15 - v1370);
    definition<Item *,ItemInstance>((int)&v1943, 0, v1544, 0, (int)&v1939);
    Recipes::addShapelessRecipe((int)v1780, (int)v1543, (unsigned __int64 *)&v1943);
    v1545 = v1943;
    v1546 = v1944;
    if ( v1943 != v1944 )
        v1547 = (void *)*((_DWORD *)v1545 + 15);
        if ( v1547 )
          operator delete(v1547);
        v1548 = (void *)*((_DWORD *)v1545 + 11);
        if ( v1548 )
          operator delete(v1548);
        v1549 = *((_DWORD *)v1545 + 4);
        if ( v1549 )
          (*(void (**)(void))(*(_DWORD *)v1549 + 4))();
        *((_DWORD *)v1545 + 4) = 0;
        v1545 = (char *)v1545 + 88;
      while ( v1546 != v1545 );
      v1545 = v1943;
    if ( v1545 )
      operator delete(v1545);
    if ( v1942 )
      operator delete(v1942);
    if ( v1941 )
      operator delete(v1941);
    if ( v1940 )
      (*(void (**)(void))(*(_DWORD *)v1940 + 4))();
    v1940 = 0;
    v1550 = Item::mPaper;
    ItemInstance::ItemInstance((ItemInstance *)&v1933, (int)&v1955);
    definition<Item *,Item *,ItemInstance>((int)&v1937, 0, v1550, 0, v1756, 0, (int)&v1933);
    Recipes::addShapelessRecipe((int)v1780, (int)&v1951, (unsigned __int64 *)&v1937);
    v1551 = v1937;
    v1552 = v1938;
    if ( v1937 != v1938 )
        v1553 = (void *)*((_DWORD *)v1551 + 15);
        if ( v1553 )
          operator delete(v1553);
        v1554 = (void *)*((_DWORD *)v1551 + 11);
        if ( v1554 )
          operator delete(v1554);
        v1555 = *((_DWORD *)v1551 + 4);
        if ( v1555 )
          (*(void (**)(void))(*(_DWORD *)v1555 + 4))();
        *((_DWORD *)v1551 + 4) = 0;
        v1551 = (char *)v1551 + 88;
      while ( v1552 != v1551 );
      v1551 = v1937;
    if ( v1551 )
      operator delete(v1551);
    if ( v1936 )
      operator delete(v1936);
    if ( v1935 )
      operator delete(v1935);
    if ( v1934 )
      (*(void (**)(void))(*(_DWORD *)v1934 + 4))();
    v1934 = 0;
    if ( v1954 )
      operator delete(v1954);
    if ( v1953 )
      operator delete(v1953);
    if ( v1952 )
      (*(void (**)(void))(*(_DWORD *)v1952 + 4))();
    if ( v1958 )
      operator delete(v1958);
    if ( v1957 )
      operator delete(v1957);
    if ( v1956 )
      (*(void (**)(void))(*(_DWORD *)v1956 + 4))();
    v1556 = (ItemInstance *)v1959;
    v1557 = v1960;
    if ( v1959 != (void *)v1960 )
        v1558 = (void *)*((_DWORD *)v1556 + 13);
        if ( v1558 )
          operator delete(v1558);
        v1559 = (void *)*((_DWORD *)v1556 + 9);
        if ( v1559 )
          operator delete(v1559);
        v1560 = *((_DWORD *)v1556 + 2);
        if ( v1560 )
          (*(void (**)(void))(*(_DWORD *)v1560 + 4))();
        *((_DWORD *)v1556 + 2) = 0;
        v1556 = (ItemInstance *)((char *)v1556 + 72);
      while ( v1557 != v1556 );
      v1556 = (ItemInstance *)v1959;
    if ( v1556 )
      operator delete((void *)v1556);
    if ( v1537 )
      operator delete(v1537);
    v1371 = &Block::mWoolCarpet;
    ++v1370;
    v1368 = (ItemInstance *)&v2007;
    v1369 = (ItemInstance *)&v1987;
  while ( v1370 < 16 );
  ItemInstance::ItemInstance((ItemInstance *)&v1929, Block::mSlimeBlock, 1);
  sub_21E94B4((void **)&v1928, "SSS");
  sub_21E94B4((void **)&v1927, "SSS");
  sub_21E94B4((void **)&v1926, "SSS");
  definition<Item *>((int)&v1924, 83, Item::mSlimeBall);
  Recipes::addShapedRecipe((int)v1780, (int)&v1929, &v1928, &v1927, &v1926);
  v1561 = v1924;
  v1562 = v1925;
  if ( v1924 != v1925 )
      v1563 = (void *)*((_DWORD *)v1561 + 15);
      if ( v1563 )
        operator delete(v1563);
      v1564 = (void *)*((_DWORD *)v1561 + 11);
      if ( v1564 )
        operator delete(v1564);
      v1565 = *((_DWORD *)v1561 + 4);
      if ( v1565 )
        (*(void (**)(void))(*(_DWORD *)v1565 + 4))();
      *((_DWORD *)v1561 + 4) = 0;
      v1561 = (char *)v1561 + 88;
    while ( v1562 != v1561 );
    v1561 = v1924;
  if ( v1561 )
    operator delete(v1561);
  v1566 = (void *)(v1926 - 12);
  if ( (int *)(v1926 - 12) != &dword_28898C0 )
    v1698 = (unsigned int *)(v1926 - 4);
        v1699 = __ldrex(v1698);
      while ( __strex(v1699 - 1, v1698) );
      v1699 = (*v1698)--;
    if ( v1699 <= 0 )
      j_j_j_j__ZdlPv_9(v1566);
  v1567 = (void *)(v1927 - 12);
  if ( (int *)(v1927 - 12) != &dword_28898C0 )
    v1700 = (unsigned int *)(v1927 - 4);
        v1701 = __ldrex(v1700);
      while ( __strex(v1701 - 1, v1700) );
      v1701 = (*v1700)--;
    if ( v1701 <= 0 )
      j_j_j_j__ZdlPv_9(v1567);
  v1568 = (void *)(v1928 - 12);
  if ( (int *)(v1928 - 12) != &dword_28898C0 )
    v1702 = (unsigned int *)(v1928 - 4);
        v1703 = __ldrex(v1702);
      while ( __strex(v1703 - 1, v1702) );
      v1703 = (*v1702)--;
    if ( v1703 <= 0 )
      j_j_j_j__ZdlPv_9(v1568);
  if ( v1932 )
    operator delete(v1932);
  if ( v1931 )
    operator delete(v1931);
  if ( v1930 )
    (*(void (**)(void))(*(_DWORD *)v1930 + 4))();
  v1930 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1920, Block::mMagmaBlock, 1);
  sub_21E94B4((void **)&v1919, "MM");
  sub_21E94B4((void **)&v1918, "MM");
  definition<Item *>((int)&v1916, 77, Item::mMagma_cream);
  Recipes::addShapedRecipe((int)v1780, (int)&v1920, &v1919, &v1918);
  v1569 = v1916;
  v1570 = v1917;
  if ( v1916 != v1917 )
      v1571 = (void *)*((_DWORD *)v1569 + 15);
      if ( v1571 )
        operator delete(v1571);
      v1572 = (void *)*((_DWORD *)v1569 + 11);
      if ( v1572 )
        operator delete(v1572);
      v1573 = *((_DWORD *)v1569 + 4);
      if ( v1573 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1573 + 4))(v1573, *(_DWORD *)(*(_DWORD *)v1573 + 4));
      *((_DWORD *)v1569 + 4) = 0;
      v1569 = (char *)v1569 + 88;
    while ( v1570 != v1569 );
    v1569 = v1916;
  if ( v1569 )
    operator delete(v1569);
  v1574 = (void *)(v1918 - 12);
  if ( (int *)(v1918 - 12) != &dword_28898C0 )
    v1704 = (unsigned int *)(v1918 - 4);
        v1705 = __ldrex(v1704);
      while ( __strex(v1705 - 1, v1704) );
      v1705 = (*v1704)--;
    if ( v1705 <= 0 )
      j_j_j_j__ZdlPv_9(v1574);
  v1575 = (void *)(v1919 - 12);
  if ( (int *)(v1919 - 12) != &dword_28898C0 )
    v1706 = (unsigned int *)(v1919 - 4);
        v1707 = __ldrex(v1706);
      while ( __strex(v1707 - 1, v1706) );
      v1707 = (*v1706)--;
    if ( v1707 <= 0 )
      j_j_j_j__ZdlPv_9(v1575);
  if ( v1923 )
    operator delete(v1923);
  if ( v1922 )
    operator delete(v1922);
  if ( v1921 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v1921 + 4))(v1921, *(_DWORD *)(*(_DWORD *)v1921 + 4));
  v1921 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1912, Block::mNetherWartBlock, 1);
  sub_21E94B4((void **)&v1911, "WWW");
  sub_21E94B4((void **)&v1910, "WWW");
  sub_21E94B4((void **)&v1909, "WWW");
  definition<Item *>((int)&v1907, 87, Item::mNether_wart);
  Recipes::addShapedRecipe((int)v1780, (int)&v1912, &v1911, &v1910, &v1909);
  v1576 = v1907;
  v1577 = v1908;
  if ( v1907 != v1908 )
      v1578 = (void *)*((_DWORD *)v1576 + 15);
      if ( v1578 )
        operator delete(v1578);
      v1579 = (void *)*((_DWORD *)v1576 + 11);
      if ( v1579 )
        operator delete(v1579);
      v1580 = *((_DWORD *)v1576 + 4);
      if ( v1580 )
        (*(void (**)(void))(*(_DWORD *)v1580 + 4))();
      *((_DWORD *)v1576 + 4) = 0;
      v1576 = (char *)v1576 + 88;
    while ( v1577 != v1576 );
    v1576 = v1907;
  if ( v1576 )
    operator delete(v1576);
  v1581 = (void *)(v1909 - 12);
  if ( (int *)(v1909 - 12) != &dword_28898C0 )
    v1708 = (unsigned int *)(v1909 - 4);
        v1709 = __ldrex(v1708);
      while ( __strex(v1709 - 1, v1708) );
      v1709 = (*v1708)--;
    if ( v1709 <= 0 )
      j_j_j_j__ZdlPv_9(v1581);
  v1582 = (void *)(v1910 - 12);
  if ( (int *)(v1910 - 12) != &dword_28898C0 )
    v1710 = (unsigned int *)(v1910 - 4);
        v1711 = __ldrex(v1710);
      while ( __strex(v1711 - 1, v1710) );
      v1711 = (*v1710)--;
    if ( v1711 <= 0 )
      j_j_j_j__ZdlPv_9(v1582);
  v1583 = (void *)(v1911 - 12);
  if ( (int *)(v1911 - 12) != &dword_28898C0 )
    v1712 = (unsigned int *)(v1911 - 4);
        v1713 = __ldrex(v1712);
      while ( __strex(v1713 - 1, v1712) );
      v1713 = (*v1712)--;
    if ( v1713 <= 0 )
      j_j_j_j__ZdlPv_9(v1583);
  if ( v1915 )
    operator delete(v1915);
  if ( v1914 )
    operator delete(v1914);
  if ( v1913 )
    (*(void (**)(void))(*(_DWORD *)v1913 + 4))();
  v1913 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1903, Item::mSlimeBall, 9);
  ItemInstance::ItemInstance((ItemInstance *)&v1899, Block::mSlimeBlock);
  Recipes::addSingleIngredientRecipeItem(v1780, (const ItemInstance *)&v1903, (const ItemInstance *)&v1899);
  if ( v1902 )
    operator delete(v1902);
  if ( v1901 )
    operator delete(v1901);
  if ( v1900 )
    (*(void (**)(void))(*(_DWORD *)v1900 + 4))();
  v1900 = 0;
  if ( v1906 )
    operator delete(v1906);
  if ( v1905 )
    operator delete(v1905);
  if ( v1904 )
    (*(void (**)(void))(*(_DWORD *)v1904 + 4))();
  v1904 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1895, Item::mFireCharge, 3);
  definition<Item *,Item *,Item *>((int)&v1893, 0, Item::mBlazePowder, 0, Item::mCoal, 0, Item::mSulphur);
  Recipes::addShapelessRecipe((int)v1780, (int)&v1895, (unsigned __int64 *)&v1893);
  v1584 = v1893;
  v1585 = v1894;
  if ( v1893 != v1894 )
      v1586 = (void *)*((_DWORD *)v1584 + 15);
      if ( v1586 )
        operator delete(v1586);
      v1587 = (void *)*((_DWORD *)v1584 + 11);
      if ( v1587 )
        operator delete(v1587);
      v1588 = *((_DWORD *)v1584 + 4);
      if ( v1588 )
        (*(void (**)(void))(*(_DWORD *)v1588 + 4))();
      *((_DWORD *)v1584 + 4) = 0;
      v1584 = (char *)v1584 + 88;
    while ( v1585 != v1584 );
    v1584 = v1893;
  if ( v1584 )
    operator delete(v1584);
  if ( v1898 )
    operator delete(v1898);
  if ( v1897 )
    operator delete(v1897);
  if ( v1896 )
    (*(void (**)(void))(*(_DWORD *)v1896 + 4))();
  v1896 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1889, Item::mFireCharge, 3);
  v1589 = Item::mBlazePowder;
  v1590 = ItemInstance::ItemInstance((ItemInstance *)&v1883, Item::mCoal, 1, 1);
  definition<Item *,ItemInstance,Item *>((int)&v1887, 0, v1589, 0, (int)v1590, 0, Item::mSulphur);
  Recipes::addShapelessRecipe((int)v1780, (int)&v1889, (unsigned __int64 *)&v1887);
  v1591 = v1887;
  v1592 = v1888;
  if ( v1887 != v1888 )
      v1593 = (void *)*((_DWORD *)v1591 + 15);
      if ( v1593 )
        operator delete(v1593);
      v1594 = (void *)*((_DWORD *)v1591 + 11);
      if ( v1594 )
        operator delete(v1594);
      v1595 = *((_DWORD *)v1591 + 4);
      if ( v1595 )
        (*(void (**)(void))(*(_DWORD *)v1595 + 4))();
      *((_DWORD *)v1591 + 4) = 0;
      v1591 = (char *)v1591 + 88;
    while ( v1592 != v1591 );
    v1591 = v1887;
  if ( v1591 )
    operator delete(v1591);
  if ( v1886 )
    operator delete(v1886);
  if ( v1885 )
    operator delete(v1885);
  if ( v1884 )
    (*(void (**)(void))(*(_DWORD *)v1884 + 4))();
  v1884 = 0;
  if ( v1892 )
    operator delete(v1892);
  if ( v1891 )
    operator delete(v1891);
  if ( v1890 )
    (*(void (**)(void))(*(_DWORD *)v1890 + 4))();
  v1890 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1879, Item::mLead, 2);
  sub_21E94B4((void **)&v1878, "~~ ");
  sub_21E94B4((void **)&v1877, "~O ");
  sub_21E94B4((void **)&v1876, "  ~");
  definition<Item *,Item *>((int)&v1874, 126, Item::mString, 79, Item::mSlimeBall);
  Recipes::addShapedRecipe((int)v1780, (int)&v1879, &v1878, &v1877, &v1876);
  v1596 = v1874;
  v1597 = v1875;
  if ( v1874 != v1875 )
      v1598 = (void *)*((_DWORD *)v1596 + 15);
      if ( v1598 )
        operator delete(v1598);
      v1599 = (void *)*((_DWORD *)v1596 + 11);
      if ( v1599 )
        operator delete(v1599);
      v1600 = *((_DWORD *)v1596 + 4);
      if ( v1600 )
        (*(void (**)(void))(*(_DWORD *)v1600 + 4))();
      *((_DWORD *)v1596 + 4) = 0;
      v1596 = (char *)v1596 + 88;
    while ( v1597 != v1596 );
    v1596 = v1874;
  if ( v1596 )
    operator delete(v1596);
  v1601 = (void *)(v1876 - 12);
  if ( (int *)(v1876 - 12) != &dword_28898C0 )
    v1714 = (unsigned int *)(v1876 - 4);
        v1715 = __ldrex(v1714);
      while ( __strex(v1715 - 1, v1714) );
      v1715 = (*v1714)--;
    if ( v1715 <= 0 )
      j_j_j_j__ZdlPv_9(v1601);
  v1602 = (void *)(v1877 - 12);
  if ( (int *)(v1877 - 12) != &dword_28898C0 )
    v1716 = (unsigned int *)(v1877 - 4);
        v1717 = __ldrex(v1716);
      while ( __strex(v1717 - 1, v1716) );
      v1717 = (*v1716)--;
    if ( v1717 <= 0 )
      j_j_j_j__ZdlPv_9(v1602);
  v1603 = (void *)(v1878 - 12);
  if ( (int *)(v1878 - 12) != &dword_28898C0 )
    v1718 = (unsigned int *)(v1878 - 4);
        v1719 = __ldrex(v1718);
      while ( __strex(v1719 - 1, v1718) );
      v1719 = (*v1718)--;
    if ( v1719 <= 0 )
      j_j_j_j__ZdlPv_9(v1603);
  if ( v1882 )
    operator delete(v1882);
  if ( v1881 )
    operator delete(v1881);
  if ( v1880 )
    (*(void (**)(void))(*(_DWORD *)v1880 + 4))();
  v1880 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1870, Item::mLeatherHorseArmor, 1);
  sub_21E94B4((void **)&v1869, "X X");
  sub_21E94B4((void **)&v1868, "XXX");
  sub_21E94B4((void **)&v1867, "X X");
  definition<Item *>((int)&v1865, 88, Item::mLeather);
  Recipes::addShapedRecipe((int)v1780, (int)&v1870, &v1869, &v1868, &v1867);
  v1604 = v1865;
  v1605 = v1866;
  if ( v1865 != v1866 )
      v1606 = (void *)*((_DWORD *)v1604 + 15);
      if ( v1606 )
        operator delete(v1606);
      v1607 = (void *)*((_DWORD *)v1604 + 11);
      if ( v1607 )
        operator delete(v1607);
      v1608 = *((_DWORD *)v1604 + 4);
      if ( v1608 )
        (*(void (**)(void))(*(_DWORD *)v1608 + 4))();
      *((_DWORD *)v1604 + 4) = 0;
      v1604 = (char *)v1604 + 88;
    while ( v1605 != v1604 );
    v1604 = v1865;
  if ( v1604 )
    operator delete(v1604);
  v1609 = (void *)(v1867 - 12);
  if ( (int *)(v1867 - 12) != &dword_28898C0 )
    v1720 = (unsigned int *)(v1867 - 4);
        v1721 = __ldrex(v1720);
      while ( __strex(v1721 - 1, v1720) );
      v1721 = (*v1720)--;
    if ( v1721 <= 0 )
      j_j_j_j__ZdlPv_9(v1609);
  v1610 = (void *)(v1868 - 12);
  if ( (int *)(v1868 - 12) != &dword_28898C0 )
    v1722 = (unsigned int *)(v1868 - 4);
        v1723 = __ldrex(v1722);
      while ( __strex(v1723 - 1, v1722) );
      v1723 = (*v1722)--;
    if ( v1723 <= 0 )
      j_j_j_j__ZdlPv_9(v1610);
  v1611 = (void *)(v1869 - 12);
  if ( (int *)(v1869 - 12) != &dword_28898C0 )
    v1724 = (unsigned int *)(v1869 - 4);
        v1725 = __ldrex(v1724);
      while ( __strex(v1725 - 1, v1724) );
      v1725 = (*v1724)--;
    if ( v1725 <= 0 )
      j_j_j_j__ZdlPv_9(v1611);
  if ( v1873 )
    operator delete(v1873);
  if ( v1872 )
    operator delete(v1872);
  if ( v1871 )
    (*(void (**)(void))(*(_DWORD *)v1871 + 4))();
  v1871 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1861, Block::mPrismarine, 1);
  sub_21E94B4((void **)&v1860, "##");
  sub_21E94B4((void **)&v1859, "##");
  definition<Item *>((int)&v1857, 35, Item::mPrismarineShard);
  Recipes::addShapedRecipe((int)v1780, (int)&v1861, &v1860, &v1859);
  v1612 = *(_QWORD *)&v1857;
  if ( v1857 != v1858 )
      v1613 = *(void **)(v1612 + 60);
      if ( v1613 )
        operator delete(v1613);
      v1614 = *(void **)(v1612 + 44);
      if ( v1614 )
        operator delete(v1614);
      v1615 = *(_DWORD *)(v1612 + 16);
      if ( v1615 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)v1615 + 4))(v1615, *(_DWORD *)(*(_DWORD *)v1615 + 4));
      *(_DWORD *)(v1612 + 16) = 0;
      LODWORD(v1612) = v1612 + 88;
    while ( HIDWORD(v1612) != (_DWORD)v1612 );
    LODWORD(v1612) = v1857;
  if ( (_DWORD)v1612 )
    operator delete((void *)v1612);
  v1616 = (void *)(v1859 - 12);
  if ( (int *)(v1859 - 12) != &dword_28898C0 )
    v1726 = (unsigned int *)(v1859 - 4);
        v1727 = __ldrex(v1726);
      while ( __strex(v1727 - 1, v1726) );
      v1727 = (*v1726)--;
    if ( v1727 <= 0 )
      j_j_j_j__ZdlPv_9(v1616);
  v1617 = (void *)(v1860 - 12);
  if ( (int *)(v1860 - 12) != &dword_28898C0 )
    v1728 = (unsigned int *)(v1860 - 4);
        v1729 = __ldrex(v1728);
      while ( __strex(v1729 - 1, v1728) );
      v1729 = (*v1728)--;
    if ( v1729 <= 0 )
      j_j_j_j__ZdlPv_9(v1617);
  if ( v1864 )
    operator delete(v1864);
  if ( v1863 )
    operator delete(v1863);
  if ( v1862 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v1862 + 4))(v1862, *(_DWORD *)(*(_DWORD *)v1862 + 4));
  v1862 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1853, Block::mPrismarine, 1, 2);
  sub_21E94B4((void **)&v1852, "###");
  sub_21E94B4((void **)&v1851, "###");
  sub_21E94B4((void **)&v1850, "###");
  definition<Item *>((int)&v1848, 35, Item::mPrismarineShard);
  Recipes::addShapedRecipe((int)v1780, (int)&v1853, &v1852, &v1851, &v1850);
  v1618 = *(_QWORD *)&v1848;
  if ( v1848 != v1849 )
      v1619 = *(void **)(v1618 + 60);
      if ( v1619 )
        operator delete(v1619);
      v1620 = *(void **)(v1618 + 44);
      if ( v1620 )
        operator delete(v1620);
      v1621 = *(_DWORD *)(v1618 + 16);
      if ( v1621 )
        (*(void (**)(void))(*(_DWORD *)v1621 + 4))();
      *(_DWORD *)(v1618 + 16) = 0;
      LODWORD(v1618) = v1618 + 88;
    while ( HIDWORD(v1618) != (_DWORD)v1618 );
    LODWORD(v1618) = v1848;
  if ( (_DWORD)v1618 )
    operator delete((void *)v1618);
  v1622 = (void *)(v1850 - 12);
  if ( (int *)(v1850 - 12) != &dword_28898C0 )
    v1730 = (unsigned int *)(v1850 - 4);
        v1731 = __ldrex(v1730);
      while ( __strex(v1731 - 1, v1730) );
      v1731 = (*v1730)--;
    if ( v1731 <= 0 )
      j_j_j_j__ZdlPv_9(v1622);
  v1623 = (void *)(v1851 - 12);
  if ( (int *)(v1851 - 12) != &dword_28898C0 )
    v1732 = (unsigned int *)(v1851 - 4);
        v1733 = __ldrex(v1732);
      while ( __strex(v1733 - 1, v1732) );
      v1733 = (*v1732)--;
    if ( v1733 <= 0 )
      j_j_j_j__ZdlPv_9(v1623);
  v1624 = (void *)(v1852 - 12);
  if ( (int *)(v1852 - 12) != &dword_28898C0 )
    v1734 = (unsigned int *)(v1852 - 4);
        v1735 = __ldrex(v1734);
      while ( __strex(v1735 - 1, v1734) );
      v1735 = (*v1734)--;
    if ( v1735 <= 0 )
      j_j_j_j__ZdlPv_9(v1624);
  if ( v1856 )
    operator delete(v1856);
  if ( v1855 )
    operator delete(v1855);
  if ( v1854 )
    (*(void (**)(void))(*(_DWORD *)v1854 + 4))();
  v1854 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1844, Item::mString, 9);
  sub_21E94B4((void **)&v1843, "#");
  definition<Block const*>((int)&v1841, 35, Block::mWeb);
  Recipes::addShapedRecipe((int)v1780, (int)&v1844, &v1843);
  v1625 = *(_QWORD *)&v1841;
  if ( v1841 != v1842 )
      v1626 = *(void **)(v1625 + 60);
      if ( v1626 )
        operator delete(v1626);
      v1627 = *(void **)(v1625 + 44);
      if ( v1627 )
        operator delete(v1627);
      v1628 = *(_DWORD *)(v1625 + 16);
      if ( v1628 )
        (*(void (**)(void))(*(_DWORD *)v1628 + 4))();
      *(_DWORD *)(v1625 + 16) = 0;
      LODWORD(v1625) = v1625 + 88;
    while ( HIDWORD(v1625) != (_DWORD)v1625 );
    LODWORD(v1625) = v1841;
  if ( (_DWORD)v1625 )
    operator delete((void *)v1625);
  v1629 = (void *)(v1843 - 12);
  if ( (int *)(v1843 - 12) != &dword_28898C0 )
    v1736 = (unsigned int *)(v1843 - 4);
        v1737 = __ldrex(v1736);
      while ( __strex(v1737 - 1, v1736) );
      v1737 = (*v1736)--;
    if ( v1737 <= 0 )
      j_j_j_j__ZdlPv_9(v1629);
  if ( v1847 )
    operator delete(v1847);
  if ( v1846 )
    operator delete(v1846);
  if ( v1845 )
    (*(void (**)(void))(*(_DWORD *)v1845 + 4))();
  v1845 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1837, Block::mPrismarine, 1, 1);
  sub_21E94B4((void **)&v1836, "###");
  sub_21E94B4((void **)&v1835, "#S#");
  sub_21E94B4((void **)&v1834, "###");
  v1630 = Item::mPrismarineShard;
  v1631 = ItemInstance::ItemInstance((ItemInstance *)&v1828, Item::mDye_powder, 1, 0);
  definition<Item *,ItemInstance>((int)&v1832, 35, v1630, 83, (int)v1631);
  Recipes::addShapedRecipe((int)v1780, (int)&v1837, &v1836, &v1835, &v1834);
  v1632 = *(_QWORD *)&v1832;
  if ( v1832 != v1833 )
      v1633 = *(void **)(v1632 + 60);
      if ( v1633 )
        operator delete(v1633);
      v1634 = *(void **)(v1632 + 44);
      if ( v1634 )
        operator delete(v1634);
      v1635 = *(_DWORD *)(v1632 + 16);
      if ( v1635 )
        (*(void (**)(void))(*(_DWORD *)v1635 + 4))();
      *(_DWORD *)(v1632 + 16) = 0;
      LODWORD(v1632) = v1632 + 88;
    while ( HIDWORD(v1632) != (_DWORD)v1632 );
    LODWORD(v1632) = v1832;
  if ( (_DWORD)v1632 )
    operator delete((void *)v1632);
  if ( v1831 )
    operator delete(v1831);
  if ( v1830 )
    operator delete(v1830);
  if ( v1829 )
    (*(void (**)(void))(*(_DWORD *)v1829 + 4))();
  v1829 = 0;
  v1636 = (void *)(v1834 - 12);
  if ( (int *)(v1834 - 12) != &dword_28898C0 )
    v1738 = (unsigned int *)(v1834 - 4);
        v1739 = __ldrex(v1738);
      while ( __strex(v1739 - 1, v1738) );
      v1739 = (*v1738)--;
    if ( v1739 <= 0 )
      j_j_j_j__ZdlPv_9(v1636);
  v1637 = (void *)(v1835 - 12);
  if ( (int *)(v1835 - 12) != &dword_28898C0 )
    v1740 = (unsigned int *)(v1835 - 4);
        v1741 = __ldrex(v1740);
      while ( __strex(v1741 - 1, v1740) );
      v1741 = (*v1740)--;
    if ( v1741 <= 0 )
      j_j_j_j__ZdlPv_9(v1637);
  v1638 = (void *)(v1836 - 12);
  if ( (int *)(v1836 - 12) != &dword_28898C0 )
    v1742 = (unsigned int *)(v1836 - 4);
        v1743 = __ldrex(v1742);
      while ( __strex(v1743 - 1, v1742) );
      v1743 = (*v1742)--;
    if ( v1743 <= 0 )
      j_j_j_j__ZdlPv_9(v1638);
  if ( v1840 )
    operator delete(v1840);
  if ( v1839 )
    operator delete(v1839);
  if ( v1838 )
    (*(void (**)(void))(*(_DWORD *)v1838 + 4))();
  v1838 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1824, Block::mSeaLantern, 1);
  sub_21E94B4((void **)&v1823, "#S#");
  sub_21E94B4((void **)&v1822, "SSS");
  sub_21E94B4((void **)&v1821, "#S#");
  definition<Item *,Item *>((int)&v1819, 35, Item::mPrismarineShard, 83, Item::mPrismarineCrystals);
  Recipes::addShapedRecipe((int)v1780, (int)&v1824, &v1823, &v1822, &v1821);
  v1639 = *(_QWORD *)&v1819;
  if ( v1819 != v1820 )
      v1640 = *(void **)(v1639 + 60);
      if ( v1640 )
        operator delete(v1640);
      v1641 = *(void **)(v1639 + 44);
      if ( v1641 )
        operator delete(v1641);
      v1642 = *(_DWORD *)(v1639 + 16);
      if ( v1642 )
        (*(void (**)(void))(*(_DWORD *)v1642 + 4))();
      *(_DWORD *)(v1639 + 16) = 0;
      LODWORD(v1639) = v1639 + 88;
    while ( HIDWORD(v1639) != (_DWORD)v1639 );
    LODWORD(v1639) = v1819;
  if ( (_DWORD)v1639 )
    operator delete((void *)v1639);
  v1643 = (void *)(v1821 - 12);
  if ( (int *)(v1821 - 12) != &dword_28898C0 )
    v1744 = (unsigned int *)(v1821 - 4);
        v1745 = __ldrex(v1744);
      while ( __strex(v1745 - 1, v1744) );
      v1745 = (*v1744)--;
    if ( v1745 <= 0 )
      j_j_j_j__ZdlPv_9(v1643);
  v1644 = (void *)(v1822 - 12);
  if ( (int *)(v1822 - 12) != &dword_28898C0 )
    v1746 = (unsigned int *)(v1822 - 4);
        v1747 = __ldrex(v1746);
      while ( __strex(v1747 - 1, v1746) );
      v1747 = (*v1746)--;
    if ( v1747 <= 0 )
      j_j_j_j__ZdlPv_9(v1644);
  v1645 = (void *)(v1823 - 12);
  if ( (int *)(v1823 - 12) != &dword_28898C0 )
    v1748 = (unsigned int *)(v1823 - 4);
        v1749 = __ldrex(v1748);
      while ( __strex(v1749 - 1, v1748) );
      v1749 = (*v1748)--;
    if ( v1749 <= 0 )
      j_j_j_j__ZdlPv_9(v1645);
  if ( v1827 )
    operator delete(v1827);
  if ( v1826 )
    operator delete(v1826);
  if ( v1825 )
    (*(void (**)(void))(*(_DWORD *)v1825 + 4))();
  v1825 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1815, Item::mWritable_book, 1);
  v1646 = Item::mBook;
  v1647 = ItemInstance::ItemInstance((ItemInstance *)&v1809, Item::mDye_powder, 1, 0);
  definition<Item *,ItemInstance,Item *>((int)&v1813, 0, v1646, 0, (int)v1647, 0, Item::mFeather);
  Recipes::addShapelessRecipe((int)v1780, (int)&v1815, (unsigned __int64 *)&v1813);
  v1648 = *(_QWORD *)&v1813;
  if ( v1813 != v1814 )
      v1649 = *(void **)(v1648 + 60);
      if ( v1649 )
        operator delete(v1649);
      v1650 = *(void **)(v1648 + 44);
      if ( v1650 )
        operator delete(v1650);
      v1651 = *(_DWORD *)(v1648 + 16);
      if ( v1651 )
        (*(void (**)(void))(*(_DWORD *)v1651 + 4))();
      *(_DWORD *)(v1648 + 16) = 0;
      LODWORD(v1648) = v1648 + 88;
    while ( HIDWORD(v1648) != (_DWORD)v1648 );
    LODWORD(v1648) = v1813;
  if ( (_DWORD)v1648 )
    operator delete((void *)v1648);
  if ( v1812 )
    operator delete(v1812);
  if ( v1811 )
    operator delete(v1811);
  if ( v1810 )
    (*(void (**)(void))(*(_DWORD *)v1810 + 4))();
  v1810 = 0;
  if ( v1818 )
    operator delete(v1818);
  if ( v1817 )
    operator delete(v1817);
  if ( v1816 )
    (*(void (**)(void))(*(_DWORD *)v1816 + 4))();
  v1816 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v1805, Item::mArmorStand, 1);
  sub_21E94B4((void **)&v1804, "###");
  sub_21E94B4((void **)&v1803, " # ");
  sub_21E94B4((void **)&v1802, "#X#");
  v1652 = Item::mStick;
  v1653 = ItemInstance::ItemInstance((ItemInstance *)&v1781, Block::mStoneSlab, 1, 0);
  definition<Item *,ItemInstance>((int)&v1800, 35, v1652, 88, (int)v1653);
  Recipes::addShapedRecipe((int)v1780, (int)&v1805, &v1804, &v1803, &v1802);
  v1654 = *(_QWORD *)&v1800;
  if ( v1800 != v1801 )
      v1655 = *(void **)(v1654 + 60);
      if ( v1655 )
        operator delete(v1655);
      v1656 = *(void **)(v1654 + 44);
      if ( v1656 )
        operator delete(v1656);
      v1657 = *(_DWORD *)(v1654 + 16);
      if ( v1657 )
        (*(void (**)(void))(*(_DWORD *)v1657 + 4))();
      *(_DWORD *)(v1654 + 16) = 0;
      LODWORD(v1654) = v1654 + 88;
    while ( HIDWORD(v1654) != (_DWORD)v1654 );
    LODWORD(v1654) = v1800;
  if ( (_DWORD)v1654 )
    operator delete((void *)v1654);
  if ( v1794 )
    operator delete(v1794);
  if ( v1790 )
    operator delete(v1790);
  if ( v1783 )
    (*(void (**)(void))(*(_DWORD *)v1783 + 4))();
  v1783 = 0;
  v1658 = (void *)(v1802 - 12);
  if ( (int *)(v1802 - 12) != &dword_28898C0 )
    v1750 = (unsigned int *)(v1802 - 4);
        v1751 = __ldrex(v1750);
      while ( __strex(v1751 - 1, v1750) );
      v1751 = (*v1750)--;
    if ( v1751 <= 0 )
      j_j_j_j__ZdlPv_9(v1658);
  v1659 = (void *)(v1803 - 12);
  if ( (int *)(v1803 - 12) != &dword_28898C0 )
    v1752 = (unsigned int *)(v1803 - 4);
        v1753 = __ldrex(v1752);
      while ( __strex(v1753 - 1, v1752) );
      v1753 = (*v1752)--;
    if ( v1753 <= 0 )
      j_j_j_j__ZdlPv_9(v1659);
  v1660 = (void *)(v1804 - 12);
  if ( (int *)(v1804 - 12) != &dword_28898C0 )
    v1754 = (unsigned int *)(v1804 - 4);
        v1755 = __ldrex(v1754);
      while ( __strex(v1755 - 1, v1754) );
      v1755 = (*v1754)--;
    if ( v1755 <= 0 )
      j_j_j_j__ZdlPv_9(v1660);
  if ( v1808 )
    operator delete(v1808);
  if ( v1807 )
    operator delete(v1807);
  if ( v1806 )
    (*(void (**)(void))(*(_DWORD *)v1806 + 4))();
  v1806 = 0;
  v1661 = v2495;
  v1662 = v2496;
  if ( v2495 != (char *)v2496 )
      v1663 = (void *)*((_DWORD *)v1661 + 13);
      if ( v1663 )
        operator delete(v1663);
      v1664 = (void *)*((_DWORD *)v1661 + 9);
      if ( v1664 )
        operator delete(v1664);
      v1665 = *((_DWORD *)v1661 + 2);
      if ( v1665 )
        (*(void (**)(void))(*(_DWORD *)v1665 + 4))();
      *((_DWORD *)v1661 + 2) = 0;
      v1661 += 72;
    while ( (char *)v1662 != v1661 );
    v1661 = v2495;
  if ( v1661 )
    operator delete(v1661);
}


void __fastcall Recipes::addShapedRecipe(int a1, int a2, int *a3, int *a4, int *a5)
{
  void *v5; // r4@1
  void *v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int *v9; // r0@11
  void *v10; // [sp+4h] [bp-34h]@1
  void *v11; // [sp+8h] [bp-30h]@1

  Recipes::Shape((int)&v10, a3, a4, a5);
  Recipes::addShapedRecipe();
  v6 = v11;
  v5 = v10;
  if ( v10 != v11 )
  {
    do
    {
      v9 = (int *)(*(_DWORD *)v5 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v5 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      v5 = (char *)v5 + 4;
    }
    while ( v5 != v6 );
    v5 = v10;
  }
  if ( v5 )
    operator delete(v5);
}


void __fastcall Recipes::addSingleIngredientRecipeItem(Recipes *this, const ItemInstance *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  const ItemInstance *v4; // r6@1
  Recipes *v5; // r5@1
  __int64 v6; // r4@1
  void *v7; // r0@2
  void *v8; // r0@4
  int v9; // r0@6
  void *v10; // r0@18
  unsigned int *v11; // r2@20
  signed int v12; // r1@22
  int v13; // [sp+0h] [bp-78h]@1
  int v14; // [sp+8h] [bp-70h]@16
  void *v15; // [sp+24h] [bp-54h]@14
  void *ptr; // [sp+34h] [bp-44h]@12
  int v17; // [sp+4Ch] [bp-2Ch]@1
  int v18; // [sp+50h] [bp-28h]@1
  int v19; // [sp+5Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_21E94B4((void **)&v19, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v13, (int)v4);
  definition<ItemInstance>((int)&v17, 35, (int)&v13);
  Recipes::addShapedRecipe((int)v5, (int)v3, &v19);
  v6 = *(_QWORD *)&v17;
  if ( v17 != v18 )
  {
    do
    {
      v7 = *(void **)(v6 + 60);
      if ( v7 )
        operator delete(v7);
      v8 = *(void **)(v6 + 44);
      if ( v8 )
        operator delete(v8);
      v9 = *(_DWORD *)(v6 + 16);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *(_DWORD *)(v6 + 16) = 0;
      LODWORD(v6) = v6 + 88;
    }
    while ( HIDWORD(v6) != (_DWORD)v6 );
    LODWORD(v6) = v17;
  }
  if ( (_DWORD)v6 )
    operator delete((void *)v6);
  if ( ptr )
    operator delete(ptr);
  if ( v15 )
    operator delete(v15);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  v14 = 0;
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


__int64 __fastcall Recipes::clearRecipes(Recipes *this)
{
  Recipes *v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  __int64 result; // r0@6

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 1) = v2;
  std::_Rb_tree<ItemInstance,std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>,std::_Select1st<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>,SortItemInstanceIdAux,std::allocator<std::pair<ItemInstance const,std::vector<Recipe *,std::allocator<Recipe *>>>>>::_M_erase(
    (int)v1 + 12,
    *((_DWORD *)v1 + 5));
  result = (unsigned int)v1 + 16;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = (char *)v1 + 16;
  *(_QWORD *)((char *)v1 + 28) = result;
  return result;
}


int __fastcall Recipes::addDirectShapedRecipe(int a1, int *a2)
{
  int v2; // r2@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-Ch]@1

  v2 = *a2;
  *a2 = 0;
  v4 = v2;
  Recipes::_addItemRecipe(a1, &v4);
  result = v4;
  if ( v4 )
    result = (*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


int __fastcall Recipes::_addGateRecipes(Recipes *this)
{
  Recipes *v1; // r4@1
  int v2; // r5@1
  ItemInstance *v3; // r0@1
  int v4; // r5@1 OVERLAPPED
  int v5; // r6@1 OVERLAPPED
  void *v6; // r0@2
  void *v7; // r0@4
  int v8; // r0@6
  void *v9; // r0@18
  void *v10; // r0@19
  int v11; // r5@26
  ItemInstance *v12; // r0@26
  int v13; // r5@26 OVERLAPPED
  int v14; // r6@26 OVERLAPPED
  void *v15; // r0@27
  void *v16; // r0@29
  int v17; // r0@31
  void *v18; // r0@43
  void *v19; // r0@44
  int v20; // r5@51
  ItemInstance *v21; // r0@51
  int v22; // r5@51 OVERLAPPED
  int v23; // r6@51 OVERLAPPED
  void *v24; // r0@52
  void *v25; // r0@54
  int v26; // r0@56
  void *v27; // r0@68
  void *v28; // r0@69
  int v29; // r5@76
  ItemInstance *v30; // r0@76
  int v31; // r5@76 OVERLAPPED
  int v32; // r6@76 OVERLAPPED
  void *v33; // r0@77
  void *v34; // r0@79
  int v35; // r0@81
  void *v36; // r0@93
  void *v37; // r0@94
  int v38; // r5@101
  ItemInstance *v39; // r0@101
  int v40; // r5@101 OVERLAPPED
  int v41; // r6@101 OVERLAPPED
  void *v42; // r0@102
  void *v43; // r0@104
  int v44; // r0@106
  void *v45; // r0@118
  void *v46; // r0@119
  int v47; // r5@126
  ItemInstance *v48; // r0@126
  __int64 v49; // r4@126
  void *v50; // r0@127
  void *v51; // r0@129
  int v52; // r0@131
  void *v53; // r0@143
  void *v54; // r0@144
  int result; // r0@149
  unsigned int *v56; // r2@152
  signed int v57; // r1@154
  unsigned int *v58; // r2@156
  signed int v59; // r1@158
  unsigned int *v60; // r2@160
  signed int v61; // r1@162
  unsigned int *v62; // r2@164
  signed int v63; // r1@166
  unsigned int *v64; // r2@168
  signed int v65; // r1@170
  unsigned int *v66; // r2@172
  signed int v67; // r1@174
  unsigned int *v68; // r2@176
  signed int v69; // r1@178
  unsigned int *v70; // r2@180
  signed int v71; // r1@182
  unsigned int *v72; // r2@184
  signed int v73; // r1@186
  unsigned int *v74; // r2@188
  signed int v75; // r1@190
  unsigned int *v76; // r2@192
  signed int v77; // r1@194
  unsigned int *v78; // r2@196
  signed int v79; // r1@198
  char v80; // [sp+8h] [bp-438h]@126
  int v81; // [sp+10h] [bp-430h]@141
  void *v82; // [sp+2Ch] [bp-414h]@139
  void *v83; // [sp+3Ch] [bp-404h]@137
  int v84; // [sp+54h] [bp-3ECh]@126
  int v85; // [sp+58h] [bp-3E8h]@126
  int v86; // [sp+64h] [bp-3DCh]@126
  int v87; // [sp+6Ch] [bp-3D4h]@126
  char v88; // [sp+70h] [bp-3D0h]@126
  int v89; // [sp+78h] [bp-3C8h]@149
  void *v90; // [sp+94h] [bp-3ACh]@147
  void *v91; // [sp+A4h] [bp-39Ch]@145
  char v92; // [sp+B8h] [bp-388h]@101
  int v93; // [sp+C0h] [bp-380h]@116
  void *v94; // [sp+DCh] [bp-364h]@114
  void *v95; // [sp+ECh] [bp-354h]@112
  int v96; // [sp+104h] [bp-33Ch]@101
  int v97; // [sp+108h] [bp-338h]@101
  int v98; // [sp+114h] [bp-32Ch]@101
  int v99; // [sp+11Ch] [bp-324h]@101
  char v100; // [sp+120h] [bp-320h]@101
  int v101; // [sp+128h] [bp-318h]@124
  void *v102; // [sp+144h] [bp-2FCh]@122
  void *v103; // [sp+154h] [bp-2ECh]@120
  char v104; // [sp+168h] [bp-2D8h]@76
  int v105; // [sp+170h] [bp-2D0h]@91
  void *v106; // [sp+18Ch] [bp-2B4h]@89
  void *v107; // [sp+19Ch] [bp-2A4h]@87
  int v108; // [sp+1B4h] [bp-28Ch]@76
  int v109; // [sp+1B8h] [bp-288h]@76
  int v110; // [sp+1C4h] [bp-27Ch]@76
  int v111; // [sp+1CCh] [bp-274h]@76
  char v112; // [sp+1D0h] [bp-270h]@76
  int v113; // [sp+1D8h] [bp-268h]@99
  void *v114; // [sp+1F4h] [bp-24Ch]@97
  void *v115; // [sp+204h] [bp-23Ch]@95
  char v116; // [sp+218h] [bp-228h]@51
  int v117; // [sp+220h] [bp-220h]@66
  void *v118; // [sp+23Ch] [bp-204h]@64
  void *v119; // [sp+24Ch] [bp-1F4h]@62
  int v120; // [sp+264h] [bp-1DCh]@51
  int v121; // [sp+268h] [bp-1D8h]@51
  int v122; // [sp+274h] [bp-1CCh]@51
  int v123; // [sp+27Ch] [bp-1C4h]@51
  char v124; // [sp+280h] [bp-1C0h]@51
  int v125; // [sp+288h] [bp-1B8h]@74
  void *v126; // [sp+2A4h] [bp-19Ch]@72
  void *v127; // [sp+2B4h] [bp-18Ch]@70
  char v128; // [sp+2C8h] [bp-178h]@26
  int v129; // [sp+2D0h] [bp-170h]@41
  void *v130; // [sp+2ECh] [bp-154h]@39
  void *v131; // [sp+2FCh] [bp-144h]@37
  int v132; // [sp+314h] [bp-12Ch]@26
  int v133; // [sp+318h] [bp-128h]@26
  int v134; // [sp+324h] [bp-11Ch]@26
  int v135; // [sp+32Ch] [bp-114h]@26
  char v136; // [sp+330h] [bp-110h]@26
  int v137; // [sp+338h] [bp-108h]@49
  void *v138; // [sp+354h] [bp-ECh]@47
  void *v139; // [sp+364h] [bp-DCh]@45
  char v140; // [sp+378h] [bp-C8h]@1
  int v141; // [sp+380h] [bp-C0h]@16
  void *v142; // [sp+39Ch] [bp-A4h]@14
  void *ptr; // [sp+3ACh] [bp-94h]@12
  int v144; // [sp+3C4h] [bp-7Ch]@1
  int v145; // [sp+3C8h] [bp-78h]@1
  int v146; // [sp+3D4h] [bp-6Ch]@1
  int v147; // [sp+3DCh] [bp-64h]@1
  char v148; // [sp+3E0h] [bp-60h]@1
  int v149; // [sp+3E8h] [bp-58h]@24
  void *v150; // [sp+404h] [bp-3Ch]@22
  void *v151; // [sp+414h] [bp-2Ch]@20

  v1 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v148, Block::mFenceGateOak, 1);
  sub_21E94B4((void **)&v147, "#W#");
  sub_21E94B4((void **)&v146, "#W#");
  v2 = Item::mStick;
  v3 = ItemInstance::ItemInstance((ItemInstance *)&v140, Block::mWoodPlanks, 1, 0);
  definition<Item *,ItemInstance>((int)&v144, 35, v2, 87, (int)v3);
  Recipes::addShapedRecipe((int)v1, (int)&v148, &v147, &v146);
  *(_QWORD *)&v4 = *(_QWORD *)&v144;
  if ( v144 != v145 )
  {
    do
    {
      v6 = *(void **)(v4 + 60);
      if ( v6 )
        operator delete(v6);
      v7 = *(void **)(v4 + 44);
      if ( v7 )
        operator delete(v7);
      v8 = *(_DWORD *)(v4 + 16);
      if ( v8 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v8 + 4))(v8);
      *(_DWORD *)(v4 + 16) = 0;
      v4 += 88;
    }
    while ( v5 != v4 );
    v4 = v144;
  }
  if ( v4 )
    operator delete((void *)v4);
  if ( ptr )
    operator delete(ptr);
  if ( v142 )
    operator delete(v142);
  if ( v141 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v141 + 4))(v141);
  v141 = 0;
  v9 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v146 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
    else
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v147 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v151 )
    operator delete(v151);
  if ( v150 )
    operator delete(v150);
  if ( v149 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v149 + 4))(v149);
  v149 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v136, Block::mSpuceFenceGate, 1);
  sub_21E94B4((void **)&v135, "#W#");
  sub_21E94B4((void **)&v134, "#W#");
  v11 = Item::mStick;
  v12 = ItemInstance::ItemInstance((ItemInstance *)&v128, Block::mWoodPlanks, 1, 1);
  definition<Item *,ItemInstance>((int)&v132, 35, v11, 87, (int)v12);
  Recipes::addShapedRecipe((int)v1, (int)&v136, &v135, &v134);
  *(_QWORD *)&v13 = *(_QWORD *)&v132;
  if ( v132 != v133 )
      v15 = *(void **)(v13 + 60);
      if ( v15 )
        operator delete(v15);
      v16 = *(void **)(v13 + 44);
      if ( v16 )
        operator delete(v16);
      v17 = *(_DWORD *)(v13 + 16);
      if ( v17 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v17 + 4))(v17);
      *(_DWORD *)(v13 + 16) = 0;
      v13 += 88;
    while ( v14 != v13 );
    v13 = v132;
  if ( v13 )
    operator delete((void *)v13);
  if ( v131 )
    operator delete(v131);
  if ( v130 )
    operator delete(v130);
  if ( v129 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v129 + 4))(v129);
  v129 = 0;
  v18 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v134 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v135 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  if ( v139 )
    operator delete(v139);
  if ( v138 )
    operator delete(v138);
  if ( v137 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v137 + 4))(v137);
  v137 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v124, Block::mBirchFenceGate, 1);
  sub_21E94B4((void **)&v123, "#W#");
  sub_21E94B4((void **)&v122, "#W#");
  v20 = Item::mStick;
  v21 = ItemInstance::ItemInstance((ItemInstance *)&v116, Block::mWoodPlanks, 1, 2);
  definition<Item *,ItemInstance>((int)&v120, 35, v20, 87, (int)v21);
  Recipes::addShapedRecipe((int)v1, (int)&v124, &v123, &v122);
  *(_QWORD *)&v22 = *(_QWORD *)&v120;
  if ( v120 != v121 )
      v24 = *(void **)(v22 + 60);
      if ( v24 )
        operator delete(v24);
      v25 = *(void **)(v22 + 44);
      if ( v25 )
        operator delete(v25);
      v26 = *(_DWORD *)(v22 + 16);
      if ( v26 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v26 + 4))(v26);
      *(_DWORD *)(v22 + 16) = 0;
      v22 += 88;
    while ( v23 != v22 );
    v22 = v120;
  if ( v22 )
    operator delete((void *)v22);
  if ( v119 )
    operator delete(v119);
  if ( v118 )
    operator delete(v118);
  if ( v117 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v117 + 4))(v117);
  v117 = 0;
  v27 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v122 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v123 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  if ( v127 )
    operator delete(v127);
  if ( v126 )
    operator delete(v126);
  if ( v125 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v125 + 4))(v125);
  v125 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v112, Block::mJungleFenceGate, 1);
  sub_21E94B4((void **)&v111, "#W#");
  sub_21E94B4((void **)&v110, "#W#");
  v29 = Item::mStick;
  v30 = ItemInstance::ItemInstance((ItemInstance *)&v104, Block::mWoodPlanks, 1, 3);
  definition<Item *,ItemInstance>((int)&v108, 35, v29, 87, (int)v30);
  Recipes::addShapedRecipe((int)v1, (int)&v112, &v111, &v110);
  *(_QWORD *)&v31 = *(_QWORD *)&v108;
  if ( v108 != v109 )
      v33 = *(void **)(v31 + 60);
      if ( v33 )
        operator delete(v33);
      v34 = *(void **)(v31 + 44);
      if ( v34 )
        operator delete(v34);
      v35 = *(_DWORD *)(v31 + 16);
      if ( v35 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v35 + 4))(v35);
      *(_DWORD *)(v31 + 16) = 0;
      v31 += 88;
    while ( v32 != v31 );
    v31 = v108;
  if ( v31 )
    operator delete((void *)v31);
  if ( v107 )
    operator delete(v107);
  if ( v106 )
    operator delete(v106);
  if ( v105 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v105 + 4))(v105);
  v105 = 0;
  v36 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v110 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v111 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  if ( v115 )
    operator delete(v115);
  if ( v114 )
    operator delete(v114);
  if ( v113 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v113 + 4))(v113);
  v113 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v100, Block::mAcaciaFenceGate, 1);
  sub_21E94B4((void **)&v99, "#W#");
  sub_21E94B4((void **)&v98, "#W#");
  v38 = Item::mStick;
  v39 = ItemInstance::ItemInstance((ItemInstance *)&v92, Block::mWoodPlanks, 1, 4);
  definition<Item *,ItemInstance>((int)&v96, 35, v38, 87, (int)v39);
  Recipes::addShapedRecipe((int)v1, (int)&v100, &v99, &v98);
  *(_QWORD *)&v40 = *(_QWORD *)&v96;
  if ( v96 != v97 )
      v42 = *(void **)(v40 + 60);
      if ( v42 )
        operator delete(v42);
      v43 = *(void **)(v40 + 44);
      if ( v43 )
        operator delete(v43);
      v44 = *(_DWORD *)(v40 + 16);
      if ( v44 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v44 + 4))(v44);
      *(_DWORD *)(v40 + 16) = 0;
      v40 += 88;
    while ( v41 != v40 );
    v40 = v96;
  if ( v40 )
    operator delete((void *)v40);
  if ( v95 )
    operator delete(v95);
  if ( v94 )
    operator delete(v94);
  if ( v93 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v93 + 4))(v93);
  v93 = 0;
  v45 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v98 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v99 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  if ( v103 )
    operator delete(v103);
  if ( v102 )
    operator delete(v102);
  if ( v101 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v101 + 4))(v101);
  v101 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v88, Block::mDarkOakFenceGate, 1);
  sub_21E94B4((void **)&v87, "#W#");
  sub_21E94B4((void **)&v86, "#W#");
  v47 = Item::mStick;
  v48 = ItemInstance::ItemInstance((ItemInstance *)&v80, Block::mWoodPlanks, 1, 5);
  definition<Item *,ItemInstance>((int)&v84, 35, v47, 87, (int)v48);
  Recipes::addShapedRecipe((int)v1, (int)&v88, &v87, &v86);
  v49 = *(_QWORD *)&v84;
  if ( v84 != v85 )
      v50 = *(void **)(v49 + 60);
      if ( v50 )
        operator delete(v50);
      v51 = *(void **)(v49 + 44);
      if ( v51 )
        operator delete(v51);
      v52 = *(_DWORD *)(v49 + 16);
      if ( v52 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v52 + 4))(v52);
      *(_DWORD *)(v49 + 16) = 0;
      LODWORD(v49) = v49 + 88;
    while ( HIDWORD(v49) != (_DWORD)v49 );
    LODWORD(v49) = v84;
  if ( (_DWORD)v49 )
    operator delete((void *)v49);
  if ( v83 )
    operator delete(v83);
  if ( v82 )
    operator delete(v82);
  if ( v81 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v81 + 4))(v81);
  v81 = 0;
  v53 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v86 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v87 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  if ( v91 )
    operator delete(v91);
  if ( v90 )
    operator delete(v90);
  result = v89;
  if ( v89 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v89 + 4))(v89);
  return result;
}


void __fastcall Recipes::addShulkerBoxRecipe(int a1, int a2, unsigned __int64 *a3)
{
  Recipes::addShulkerBoxRecipe(a1, a2, a3);
}


char *__fastcall Recipes::getAllRecipesFor(Recipes *this, const ItemInstance *a2, ItemInstance *a3)
{
  Recipes *v3; // r11@1
  char *v4; // r10@1
  ItemInstance *v5; // r9@1
  char *result; // r0@1
  char *v7; // r7@1
  char *v8; // r8@3
  unsigned int v9; // r4@4
  int v10; // r6@4
  unsigned int v11; // r5@4
  unsigned int v12; // r6@11
  int v13; // r5@11
  unsigned int v14; // r4@11
  bool v15; // nf@12
  unsigned __int8 v16; // vf@12
  bool v17; // zf@16
  char *v18; // r4@19
  __int64 v19; // kr08_8@20
  _BYTE *v20; // r8@24
  char *v21; // r7@24
  signed int v22; // r0@24
  unsigned int v23; // r1@24
  unsigned int v24; // r0@26
  unsigned int v25; // r10@26
  signed int v26; // r2@33
  int v27; // r4@33

  v3 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = (char *)a2 + 16;
  *((_DWORD *)this + 2) = 0;
  v5 = a3;
  result = (char *)*((_DWORD *)a2 + 5);
  v7 = (char *)a2 + 16;
  if ( result )
  {
    v7 = (char *)a2 + 16;
    do
    {
      v8 = v7;
      v7 = result;
      while ( 1 )
      {
        v9 = *((_DWORD *)v7 + 4);
        v10 = ItemInstance::getAuxValue((ItemInstance *)(v7 + 16));
        v11 = *(_DWORD *)v5;
        result = (char *)ItemInstance::getAuxValue(v5);
        if ( v9 >= v11 && (v11 < v9 || v10 >= (signed int)result) )
          break;
        v7 = (char *)*((_DWORD *)v7 + 3);
        if ( !v7 )
        {
          v7 = v8;
          goto LABEL_10;
        }
      }
      result = (char *)*((_DWORD *)v7 + 2);
    }
    while ( result );
  }
LABEL_10:
  if ( v7 != v4 )
    v12 = *(_DWORD *)v5;
    v13 = ItemInstance::getAuxValue(v5);
    v14 = *((_DWORD *)v7 + 4);
    result = (char *)ItemInstance::getAuxValue((ItemInstance *)(v7 + 16));
    if ( v12 >= v14 )
      v16 = __OFSUB__(v13, result);
      v15 = v13 - (signed int)result < 0;
      result = v7;
      if ( v15 ^ v16 )
        result = v4;
      if ( v14 < v12 )
        result = v7;
      v17 = result == v4;
      if ( result != v4 )
        v13 = *((_QWORD *)result + 11) >> 32;
        v12 = *((_QWORD *)result + 11);
        v17 = v12 == v13;
      if ( !v17 )
        v18 = 0;
        do
          v19 = *(_QWORD *)(*(int (**)(void))(**(_DWORD **)v12 + 20))();
          result = (char *)HIDWORD(v19);
          if ( (_DWORD)v19 != HIDWORD(v19) )
          {
            result = (char *)ItemInstance::matchesItem(v5, (const ItemInstance *)v19);
            if ( result == (char *)1 )
            {
              if ( v18 == *((char **)v3 + 2) )
              {
                v20 = *(_BYTE **)v3;
                v21 = 0;
                v22 = (signed int)&v18[-*(_DWORD *)v3];
                v23 = v22 >> 2;
                if ( !(v22 >> 2) )
                  v23 = 1;
                v24 = v23 + (v22 >> 2);
                v25 = v24;
                if ( 0 != v24 >> 30 )
                  v25 = 0x3FFFFFFF;
                if ( v24 < v23 )
                if ( v25 )
                {
                  if ( v25 >= 0x40000000 )
                    sub_21E57F4();
                  v21 = (char *)operator new(4 * v25);
                }
                v26 = v18 - v20;
                v27 = (int)&v21[v26];
                *(_DWORD *)&v21[v26] = *(_DWORD *)v12;
                if ( v26 >> 2 )
                  _aeabi_memmove4(v21, v20);
                v18 = (char *)(v27 + 4);
                if ( v20 )
                  operator delete(v20);
                result = &v21[4 * v25];
                *(_DWORD *)v3 = v21;
                *((_DWORD *)v3 + 1) = v18;
                *((_DWORD *)v3 + 2) = result;
              }
              else
                *(_DWORD *)v18 = *(_DWORD *)v12;
                result = (char *)*((_DWORD *)v3 + 1);
                v18 = result + 4;
                *((_DWORD *)v3 + 1) = result + 4;
            }
          }
          v12 += 4;
        while ( v13 != v12 );
  return result;
}


void __fastcall Recipes::addShapedRecipe(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, void *a14, int a15, int a16, int a17, void *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, void *a50, int a51, int a52, int a53, void *a54)
{
  Recipes::addShapedRecipe(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47,
    a48,
    a49,
    a50,
    a51,
    a52,
    a53,
    a54);
}
