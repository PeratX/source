

unsigned int *__fastcall ChestScreenController::_getLevelContainerManagerModel(ChestScreenController *this, int a2)
{
  ChestScreenController *v2; // r5@1
  unsigned int *result; // r0@1
  unsigned int *v4; // r4@1
  unsigned int v5; // r2@2
  unsigned int *v6; // r1@2
  unsigned int v7; // r3@5
  unsigned int v8; // r7@6
  unsigned int v9; // r2@7
  signed int v10; // r1@7
  int v11; // r7@11
  unsigned int *v12; // r2@14
  unsigned int v13; // r1@16
  unsigned int v14; // r1@25
  unsigned int *v15; // r1@31
  unsigned int *v16; // r5@37
  int v17; // [sp+0h] [bp-20h]@1
  int v18; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  ContainerManagerController::getContainerManagerModel((ContainerManagerController *)&v17, *(_DWORD *)(a2 + 628));
  result = (unsigned int *)v18;
  v4 = 0;
  if ( !v18 )
    goto LABEL_46;
  v5 = *(_DWORD *)(v18 + 4);
  v6 = (unsigned int *)(v18 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
      {
        v10 = 1;
        v4 = 0;
        goto LABEL_11;
      }
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
        break;
      __clrex();
      v5 = v7;
    }
    v8 = __strex(v5 + 1, v6);
    v5 = v7;
  }
  while ( v8 );
  __dmb();
  v4 = result;
  v9 = *v6;
  v10 = 0;
  if ( !v9 )
    v10 = 1;
LABEL_11:
  v11 = v17;
  if ( v10 )
    v11 = 0;
  if ( v18 )
    v12 = (unsigned int *)(v18 + 8);
    if ( &pthread_create )
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 == 1 )
      result = (unsigned int *)(*(int (**)(void))(*result + 12))();
  if ( v11 )
    if ( v4 )
      result = v4 + 1;
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(result);
        while ( __strex(v14 + 1, result) );
      else
        ++*result;
    *(_DWORD *)v2 = v11;
    *((_DWORD *)v2 + 1) = v4;
  else
LABEL_46:
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
  if ( v4 )
    v15 = v4 + 1;
        result = (unsigned int *)__ldrex(v15);
      while ( __strex((unsigned int)result - 1, v15) );
      result = (unsigned int *)(*v15)--;
    if ( result == (unsigned int *)1 )
      v16 = v4 + 2;
      (*(void (__fastcall **)(unsigned int *))(*v4 + 8))(v4);
          result = (unsigned int *)__ldrex(v16);
        while ( __strex((unsigned int)result - 1, v16) );
        result = (unsigned int *)(*v16)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(unsigned int *))(*v4 + 12))(v4);
  return result;
}


void __fastcall ChestScreenController::~ChestScreenController(ChestScreenController *this)
{
  ContainerScreenController *v1; // r0@1

  v1 = BlockContainerScreenController::~BlockContainerScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ChestScreenController::_registerAutoPlaceOrder(ChestScreenController *this)
{
  ChestScreenController *v1; // r8@1
  int v2; // r9@2
  int v3; // r0@2
  int v4; // r5@3
  int v5; // r7@3
  bool v6; // zf@4
  int v7; // r4@7
  int v8; // r9@10
  int v9; // r0@10
  int v10; // r5@11
  int v11; // r7@11
  bool v12; // zf@12
  int v13; // r4@15
  bool v14; // zf@18
  _DWORD *v15; // r0@22
  char **v16; // r0@23
  char *v17; // r1@24
  char *v18; // r0@26
  int v19; // r9@27
  int v20; // r0@27
  int v21; // r5@28
  int v22; // r7@28
  bool v23; // zf@29
  int v24; // r4@32
  bool v25; // zf@35
  _DWORD *v26; // r0@39
  char **v27; // r0@40
  char *v28; // r1@41
  char *v29; // r0@43
  int v30; // r9@44
  int v31; // r0@44
  int v32; // r5@45
  int v33; // r7@45
  bool v34; // zf@46
  int v35; // r4@49
  bool v36; // zf@52
  _DWORD *v37; // r0@56
  unsigned __int64 *v38; // r8@57
  int v39; // r0@57
  int v40; // r9@57
  int v41; // r0@57
  int v42; // r5@58
  int v43; // r7@58
  bool v44; // zf@59
  int v45; // r4@62
  bool v46; // zf@65
  _DWORD *v47; // r0@69
  char **v48; // r0@70
  char *v49; // r1@71
  char *v50; // r0@73
  int v51; // r9@74
  int v52; // r0@74
  int v53; // r5@75
  int v54; // r7@75
  bool v55; // zf@76
  int v56; // r4@79
  bool v57; // zf@82
  _DWORD *v58; // r0@86
  char **v59; // r0@87
  char *v60; // r1@88
  char *v61; // r0@90
  int v62; // r9@91
  int v63; // r0@91
  int v64; // r5@92
  int v65; // r7@92
  bool v66; // zf@93
  int v67; // r4@96
  bool v68; // zf@99
  _DWORD *v69; // r0@103
  int v70; // r0@104
  int v71; // r9@104
  int v72; // r0@104
  int v73; // r5@105
  int v74; // r7@105
  bool v75; // zf@106
  int v76; // r4@109
  bool v77; // zf@112
  _DWORD *v78; // r0@116
  char **v79; // r0@117
  char *v80; // r1@118
  char *v81; // r0@120
  int v82; // r9@121
  int v83; // r0@121
  int v84; // r5@122
  int v85; // r7@122
  bool v86; // zf@123
  int v87; // r4@126
  bool v88; // zf@129
  _DWORD *v89; // r0@133
  char **v90; // r0@134
  char *v91; // r1@135
  char *v92; // r0@137
  int v93; // r9@138
  int v94; // r0@138
  int v95; // r5@139
  int v96; // r7@139
  bool v97; // zf@140
  int v98; // r4@143
  bool v99; // zf@146
  _DWORD *v100; // r0@150
  int v101; // r0@151
  char **v102; // r4@151
  char **v103; // r6@151
  unsigned int *v104; // r2@153
  signed int v105; // r1@155
  int *v106; // r0@161
  char **v107; // r4@166
  char **v108; // r6@166
  unsigned int *v109; // r2@168
  signed int v110; // r1@170
  int *v111; // r0@176
  char **v112; // r4@181
  char **v113; // r6@181
  unsigned int *v114; // r2@183
  signed int v115; // r1@185
  int *v116; // r0@191
  bool v117; // zf@194
  _DWORD *v118; // r0@198
  char **v119; // r0@199
  char *v120; // r1@200
  char *v121; // r0@202
  int v122; // r9@203
  int v123; // r0@203
  int v124; // r5@204
  int v125; // r7@204
  bool v126; // zf@205
  int v127; // r4@208
  bool v128; // zf@211
  _DWORD *v129; // r0@215
  unsigned __int64 *v130; // r8@216
  int v131; // r0@216
  int v132; // r9@216
  int v133; // r0@216
  int v134; // r5@217
  int v135; // r7@217
  bool v136; // zf@218
  int v137; // r4@221
  bool v138; // zf@224
  _DWORD *v139; // r0@228
  char **v140; // r0@229
  char *v141; // r1@230
  char *v142; // r0@232
  int v143; // r9@233
  int v144; // r0@233
  int v145; // r5@234
  int v146; // r7@234
  bool v147; // zf@235
  int v148; // r4@238
  bool v149; // zf@241
  _DWORD *v150; // r0@245
  int v151; // r0@246
  char **v152; // r4@246
  char **v153; // r6@246
  unsigned int *v154; // r2@248
  signed int v155; // r1@250
  int *v156; // r0@256
  char **v157; // r6@261
  unsigned int *v158; // r2@263
  signed int v159; // r1@265
  int *v160; // r0@271
  unsigned int *v161; // r2@277
  signed int v162; // r1@279
  unsigned int *v163; // r2@281
  signed int v164; // r1@283
  unsigned int *v165; // r2@285
  signed int v166; // r1@287
  unsigned int *v167; // r2@289
  signed int v168; // r1@291
  unsigned int *v169; // r2@293
  signed int v170; // r1@295
  unsigned int *v171; // r2@297
  signed int v172; // r1@299
  unsigned int *v173; // r2@301
  signed int v174; // r1@303
  unsigned int *v175; // r2@305
  signed int v176; // r1@307
  char *v177; // [sp+0h] [bp-A0h]@134
  char v178; // [sp+4h] [bp-9Ch]@135
  char *v179; // [sp+8h] [bp-98h]@117
  char v180; // [sp+Ch] [bp-94h]@118
  char **v181; // [sp+10h] [bp-90h]@104
  char **v182; // [sp+14h] [bp-8Ch]@104
  char **v183; // [sp+18h] [bp-88h]@104
  char *v184; // [sp+1Ch] [bp-84h]@87
  char v185; // [sp+20h] [bp-80h]@88
  char *v186; // [sp+24h] [bp-7Ch]@70
  char v187; // [sp+28h] [bp-78h]@71
  char **v188; // [sp+2Ch] [bp-74h]@57
  char **v189; // [sp+30h] [bp-70h]@57
  char **v190; // [sp+34h] [bp-6Ch]@57
  char *v191; // [sp+38h] [bp-68h]@40
  char v192; // [sp+3Ch] [bp-64h]@41
  char *v193; // [sp+40h] [bp-60h]@23
  char v194; // [sp+44h] [bp-5Ch]@24
  char **v195; // [sp+48h] [bp-58h]@2
  char **v196; // [sp+4Ch] [bp-54h]@2
  char **v197; // [sp+50h] [bp-50h]@2
  char *v198; // [sp+54h] [bp-4Ch]@229
  char v199; // [sp+58h] [bp-48h]@230
  char **v200; // [sp+5Ch] [bp-44h]@216
  char **v201; // [sp+60h] [bp-40h]@216
  char **v202; // [sp+64h] [bp-3Ch]@216
  char *v203; // [sp+68h] [bp-38h]@199
  char v204; // [sp+6Ch] [bp-34h]@200
  char **v205; // [sp+70h] [bp-30h]@10
  char **v206; // [sp+74h] [bp-2Ch]@10
  char **v207; // [sp+78h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v195 = 0;
    v196 = 0;
    v197 = 0;
    v2 = 4u % dword_27DA728;
    v3 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
    if ( !v3 )
      goto LABEL_22;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 4;
      if ( v5 == 4 )
        v6 = *(_DWORD *)(v4 + 4) == 4;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DA728 == v2 )
          continue;
      }
    }
    v14 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v14 = v3 == 0;
    if ( v14 )
LABEL_22:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 4;
      v15[2] = &unk_28898CC;
      v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA724,
             v2,
             4u,
             (int)v15);
    AutoPlaceItem::AutoPlaceItem((int *)&v193, (int *)(v3 + 8), 0);
    v16 = v196;
    if ( v196 == v197 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v195,
        (int)&v193);
      v17 = v193;
    else
      *v196 = v193;
      v17 = (char *)&unk_28898CC;
      v193 = (char *)&unk_28898CC;
      *((_BYTE *)v16 + 4) = v194;
      v196 = v16 + 2;
    v18 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v161 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v162 = __ldrex(v161);
        while ( __strex(v162 - 1, v161) );
      else
        v162 = (*v161)--;
      if ( v162 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = 0x1Au % dword_27DA728;
    v20 = *(_DWORD *)(dword_27DA724 + 4 * (0x1Au % dword_27DA728));
    if ( !v20 )
      goto LABEL_39;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 26;
      if ( v22 == 26 )
        v23 = *(_DWORD *)(v21 + 4) == 26;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DA728 == v19 )
    v25 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v25 = v20 == 0;
    if ( v25 )
LABEL_39:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 26;
      v26[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DA724,
              v19,
              0x1Au,
              (int)v26);
    AutoPlaceItem::AutoPlaceItem((int *)&v191, (int *)(v20 + 8), 0);
    v27 = v196;
        (int)&v191);
      v28 = v191;
      *v196 = v191;
      v28 = (char *)&unk_28898CC;
      v191 = (char *)&unk_28898CC;
      *((_BYTE *)v27 + 4) = v192;
      v196 = v27 + 2;
    v29 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v163 = (unsigned int *)(v28 - 4);
          v164 = __ldrex(v163);
        while ( __strex(v164 - 1, v163) );
        v164 = (*v163)--;
      if ( v164 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = 0x18u % dword_27DA728;
    v31 = *(_DWORD *)(dword_27DA724 + 4 * (0x18u % dword_27DA728));
    if ( !v31 )
      goto LABEL_56;
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
      v34 = v33 == 24;
      if ( v33 == 24 )
        v34 = *(_DWORD *)(v32 + 4) == 24;
      if ( v34 )
      v35 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 )
        v33 = *(_DWORD *)(v35 + 12);
        v31 = v32;
        v32 = *(_DWORD *)v32;
        if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DA728 == v30 )
    v36 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v36 = v31 == 0;
    if ( v36 )
LABEL_56:
      v37 = operator new(0x10u);
      *v37 = 0;
      v37[1] = 24;
      v37[2] = &unk_28898CC;
      v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v30,
              0x18u,
              (int)v37);
    v38 = (unsigned __int64 *)((char *)v1 + 600);
    v39 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v38,
            (int **)(v31 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v39, (unsigned __int64 *)&v195);
    v188 = 0;
    v189 = 0;
    v190 = 0;
    v40 = 4u % dword_27DA728;
    v41 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
    if ( !v41 )
      goto LABEL_69;
    v42 = *(_DWORD *)v41;
    v43 = *(_DWORD *)(*(_DWORD *)v41 + 12);
      v44 = v43 == 4;
      if ( v43 == 4 )
        v44 = *(_DWORD *)(v42 + 4) == 4;
      if ( v44 )
      v45 = *(_DWORD *)v42;
      if ( *(_DWORD *)v42 )
        v43 = *(_DWORD *)(v45 + 12);
        v41 = v42;
        v42 = *(_DWORD *)v42;
        if ( *(_DWORD *)(v45 + 12) % (unsigned int)dword_27DA728 == v40 )
    v46 = v41 == 0;
    if ( v41 )
      v41 = *(_DWORD *)v41;
      v46 = v41 == 0;
    if ( v46 )
LABEL_69:
      v47 = operator new(0x10u);
      *v47 = 0;
      v47[1] = 4;
      v47[2] = &unk_28898CC;
      v41 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v40,
              4u,
              (int)v47);
    AutoPlaceItem::AutoPlaceItem((int *)&v186, (int *)(v41 + 8), 0);
    v48 = v189;
    if ( v189 == v190 )
        (unsigned __int64 *)&v188,
        (int)&v186);
      v49 = v186;
      *v189 = v186;
      v49 = (char *)&unk_28898CC;
      v186 = (char *)&unk_28898CC;
      *((_BYTE *)v48 + 4) = v187;
      v189 = v48 + 2;
    v50 = v49 - 12;
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v165 = (unsigned int *)(v49 - 4);
          v166 = __ldrex(v165);
        while ( __strex(v166 - 1, v165) );
        v166 = (*v165)--;
      if ( v166 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v50);
    v51 = 0x18u % dword_27DA728;
    v52 = *(_DWORD *)(dword_27DA724 + 4 * (0x18u % dword_27DA728));
    if ( !v52 )
      goto LABEL_86;
    v53 = *(_DWORD *)v52;
    v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
      v55 = v54 == 24;
      if ( v54 == 24 )
        v55 = *(_DWORD *)(v53 + 4) == 24;
      if ( v55 )
      v56 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v54 = *(_DWORD *)(v56 + 12);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27DA728 == v51 )
    v57 = v52 == 0;
    if ( v52 )
      v52 = *(_DWORD *)v52;
      v57 = v52 == 0;
    if ( v57 )
LABEL_86:
      v58 = operator new(0x10u);
      *v58 = 0;
      v58[1] = 24;
      v58[2] = &unk_28898CC;
      v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v51,
              (int)v58);
    AutoPlaceItem::AutoPlaceItem((int *)&v184, (int *)(v52 + 8), 0);
    v59 = v189;
        (int)&v184);
      v60 = v184;
      *v189 = v184;
      v60 = (char *)&unk_28898CC;
      v184 = (char *)&unk_28898CC;
      *((_BYTE *)v59 + 4) = v185;
      v189 = v59 + 2;
    v61 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v167 = (unsigned int *)(v60 - 4);
          v168 = __ldrex(v167);
        while ( __strex(v168 - 1, v167) );
        v168 = (*v167)--;
      if ( v168 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v61);
    v62 = 0x1Au % dword_27DA728;
    v63 = *(_DWORD *)(dword_27DA724 + 4 * (0x1Au % dword_27DA728));
    if ( !v63 )
      goto LABEL_103;
    v64 = *(_DWORD *)v63;
    v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
      v66 = v65 == 26;
      if ( v65 == 26 )
        v66 = *(_DWORD *)(v64 + 4) == 26;
      if ( v66 )
      v67 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 )
        v65 = *(_DWORD *)(v67 + 12);
        v63 = v64;
        v64 = *(_DWORD *)v64;
        if ( *(_DWORD *)(v67 + 12) % (unsigned int)dword_27DA728 == v62 )
    v68 = v63 == 0;
    if ( v63 )
      v63 = *(_DWORD *)v63;
      v68 = v63 == 0;
    if ( v68 )
LABEL_103:
      v69 = operator new(0x10u);
      *v69 = 0;
      v69[1] = 26;
      v69[2] = &unk_28898CC;
      v63 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v62,
              (int)v69);
    v70 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v63 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v70, (unsigned __int64 *)&v188);
    v181 = 0;
    v182 = 0;
    v183 = 0;
    v71 = 0x18u % dword_27DA728;
    v72 = *(_DWORD *)(dword_27DA724 + 4 * (0x18u % dword_27DA728));
    if ( !v72 )
      goto LABEL_116;
    v73 = *(_DWORD *)v72;
    v74 = *(_DWORD *)(*(_DWORD *)v72 + 12);
      v75 = v74 == 24;
      if ( v74 == 24 )
        v75 = *(_DWORD *)(v73 + 4) == 24;
      if ( v75 )
      v76 = *(_DWORD *)v73;
      if ( *(_DWORD *)v73 )
        v74 = *(_DWORD *)(v76 + 12);
        v72 = v73;
        v73 = *(_DWORD *)v73;
        if ( *(_DWORD *)(v76 + 12) % (unsigned int)dword_27DA728 == v71 )
    v77 = v72 == 0;
    if ( v72 )
      v72 = *(_DWORD *)v72;
      v77 = v72 == 0;
    if ( v77 )
LABEL_116:
      v78 = operator new(0x10u);
      *v78 = 0;
      v78[1] = 24;
      v78[2] = &unk_28898CC;
      v72 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v71,
              (int)v78);
    AutoPlaceItem::AutoPlaceItem((int *)&v179, (int *)(v72 + 8), 0);
    v79 = v182;
    if ( v182 == v183 )
        (unsigned __int64 *)&v181,
        (int)&v179);
      v80 = v179;
      *v182 = v179;
      v80 = (char *)&unk_28898CC;
      v179 = (char *)&unk_28898CC;
      *((_BYTE *)v79 + 4) = v180;
      v182 = v79 + 2;
    v81 = v80 - 12;
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v169 = (unsigned int *)(v80 - 4);
          v170 = __ldrex(v169);
        while ( __strex(v170 - 1, v169) );
        v170 = (*v169)--;
      if ( v170 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v81);
    v82 = 0x1Au % dword_27DA728;
    v83 = *(_DWORD *)(dword_27DA724 + 4 * (0x1Au % dword_27DA728));
    if ( !v83 )
      goto LABEL_133;
    v84 = *(_DWORD *)v83;
    v85 = *(_DWORD *)(*(_DWORD *)v83 + 12);
      v86 = v85 == 26;
      if ( v85 == 26 )
        v86 = *(_DWORD *)(v84 + 4) == 26;
      if ( v86 )
      v87 = *(_DWORD *)v84;
      if ( *(_DWORD *)v84 )
        v85 = *(_DWORD *)(v87 + 12);
        v83 = v84;
        v84 = *(_DWORD *)v84;
        if ( *(_DWORD *)(v87 + 12) % (unsigned int)dword_27DA728 == v82 )
    v88 = v83 == 0;
    if ( v83 )
      v83 = *(_DWORD *)v83;
      v88 = v83 == 0;
    if ( v88 )
LABEL_133:
      v89 = operator new(0x10u);
      *v89 = 0;
      v89[1] = 26;
      v89[2] = &unk_28898CC;
      v83 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v82,
              (int)v89);
    AutoPlaceItem::AutoPlaceItem((int *)&v177, (int *)(v83 + 8), 0);
    v90 = v182;
        (int)&v177);
      v91 = v177;
      *v182 = v177;
      v91 = (char *)&unk_28898CC;
      v177 = (char *)&unk_28898CC;
      *((_BYTE *)v90 + 4) = v178;
      v182 = v90 + 2;
    v92 = v91 - 12;
    if ( (int *)(v91 - 12) != &dword_28898C0 )
      v171 = (unsigned int *)(v91 - 4);
          v172 = __ldrex(v171);
        while ( __strex(v172 - 1, v171) );
        v172 = (*v171)--;
      if ( v172 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v92);
    v93 = 4u % dword_27DA728;
    v94 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
    if ( !v94 )
      goto LABEL_150;
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 4;
      if ( v96 == 4 )
        v97 = *(_DWORD *)(v95 + 4) == 4;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DA728 == v93 )
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( v99 )
LABEL_150:
      v100 = operator new(0x10u);
      *v100 = 0;
      v100[1] = 4;
      v100[2] = &unk_28898CC;
      v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v93,
              (int)v100);
    v101 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v38,
             (int **)(v94 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v101, (unsigned __int64 *)&v181);
    v103 = v182;
    v102 = v181;
    if ( v181 != v182 )
      do
        v106 = (int *)(*v102 - 12);
        if ( v106 != &dword_28898C0 )
        {
          v104 = (unsigned int *)(*v102 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v106);
        }
        v102 += 2;
      while ( v102 != v103 );
      v102 = v181;
    if ( v102 )
      operator delete(v102);
    v108 = v189;
    v107 = v188;
    if ( v188 != v189 )
        v111 = (int *)(*v107 - 12);
        if ( v111 != &dword_28898C0 )
          v109 = (unsigned int *)(*v107 - 4);
              v110 = __ldrex(v109);
            while ( __strex(v110 - 1, v109) );
            v110 = (*v109)--;
          if ( v110 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v111);
        v107 += 2;
      while ( v107 != v108 );
      v107 = v188;
    if ( v107 )
      operator delete(v107);
    v113 = v196;
    v112 = v195;
    if ( v195 != v196 )
        v116 = (int *)(*v112 - 12);
        if ( v116 != &dword_28898C0 )
          v114 = (unsigned int *)(*v112 - 4);
              v115 = __ldrex(v114);
            while ( __strex(v115 - 1, v114) );
            v115 = (*v114)--;
          if ( v115 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v116);
        v112 += 2;
      while ( v112 != v113 );
      v112 = v195;
  }
  else
    v205 = 0;
    v206 = 0;
    v207 = 0;
    v8 = 4u % dword_27DA728;
    v9 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
    if ( !v9 )
      goto LABEL_198;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = v11 == 4;
      if ( v11 == 4 )
        v12 = *(_DWORD *)(v10 + 4) == 4;
      if ( v12 )
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DA728 == v8 )
    v117 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v117 = v9 == 0;
    if ( v117 )
LABEL_198:
      v118 = operator new(0x10u);
      *v118 = 0;
      v118[1] = 4;
      v118[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v8,
             (int)v118);
    AutoPlaceItem::AutoPlaceItem((int *)&v203, (int *)(v9 + 8), 0);
    v119 = v206;
    if ( v206 == v207 )
        (unsigned __int64 *)&v205,
        (int)&v203);
      v120 = v203;
      *v206 = v203;
      v120 = (char *)&unk_28898CC;
      v203 = (char *)&unk_28898CC;
      *((_BYTE *)v119 + 4) = v204;
      v206 = v119 + 2;
    v121 = v120 - 12;
    if ( (int *)(v120 - 12) != &dword_28898C0 )
      v173 = (unsigned int *)(v120 - 4);
          v174 = __ldrex(v173);
        while ( __strex(v174 - 1, v173) );
        v174 = (*v173)--;
      if ( v174 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v121);
    v122 = 9u % dword_27DA728;
    v123 = *(_DWORD *)(dword_27DA724 + 4 * (9u % dword_27DA728));
    if ( !v123 )
      goto LABEL_215;
    v124 = *(_DWORD *)v123;
    v125 = *(_DWORD *)(*(_DWORD *)v123 + 12);
      v126 = v125 == 9;
      if ( v125 == 9 )
        v126 = *(_DWORD *)(v124 + 4) == 9;
      if ( v126 )
      v127 = *(_DWORD *)v124;
      if ( *(_DWORD *)v124 )
        v125 = *(_DWORD *)(v127 + 12);
        v123 = v124;
        v124 = *(_DWORD *)v124;
        if ( *(_DWORD *)(v127 + 12) % (unsigned int)dword_27DA728 == v122 )
    v128 = v123 == 0;
    if ( v123 )
      v123 = *(_DWORD *)v123;
      v128 = v123 == 0;
    if ( v128 )
LABEL_215:
      v129 = operator new(0x10u);
      *v129 = 0;
      v129[1] = 9;
      v129[2] = &unk_28898CC;
      v123 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DA724,
               v122,
               9u,
               (int)v129);
    v130 = (unsigned __int64 *)((char *)v1 + 600);
    v131 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v130,
             (int **)(v123 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v131, (unsigned __int64 *)&v205);
    v200 = 0;
    v201 = 0;
    v202 = 0;
    v132 = 9u % dword_27DA728;
    v133 = *(_DWORD *)(dword_27DA724 + 4 * (9u % dword_27DA728));
    if ( !v133 )
      goto LABEL_228;
    v134 = *(_DWORD *)v133;
    v135 = *(_DWORD *)(*(_DWORD *)v133 + 12);
      v136 = v135 == 9;
      if ( v135 == 9 )
        v136 = *(_DWORD *)(v134 + 4) == 9;
      if ( v136 )
      v137 = *(_DWORD *)v134;
      if ( *(_DWORD *)v134 )
        v135 = *(_DWORD *)(v137 + 12);
        v133 = v134;
        v134 = *(_DWORD *)v134;
        if ( *(_DWORD *)(v137 + 12) % (unsigned int)dword_27DA728 == v132 )
    v138 = v133 == 0;
    if ( v133 )
      v133 = *(_DWORD *)v133;
      v138 = v133 == 0;
    if ( v138 )
LABEL_228:
      v139 = operator new(0x10u);
      *v139 = 0;
      v139[1] = 9;
      v139[2] = &unk_28898CC;
      v133 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v132,
               (int)v139);
    AutoPlaceItem::AutoPlaceItem((int *)&v198, (int *)(v133 + 8), 0);
    v140 = v201;
    if ( v201 == v202 )
        (unsigned __int64 *)&v200,
        (int)&v198);
      v141 = v198;
      *v201 = v198;
      v141 = (char *)&unk_28898CC;
      v198 = (char *)&unk_28898CC;
      *((_BYTE *)v140 + 4) = v199;
      v201 = v140 + 2;
    v142 = v141 - 12;
    if ( (int *)(v141 - 12) != &dword_28898C0 )
      v175 = (unsigned int *)(v141 - 4);
          v176 = __ldrex(v175);
        while ( __strex(v176 - 1, v175) );
        v176 = (*v175)--;
      if ( v176 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v142);
    v143 = 4u % dword_27DA728;
    v144 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
    if ( !v144 )
      goto LABEL_245;
    v145 = *(_DWORD *)v144;
    v146 = *(_DWORD *)(*(_DWORD *)v144 + 12);
      v147 = v146 == 4;
      if ( v146 == 4 )
        v147 = *(_DWORD *)(v145 + 4) == 4;
      if ( v147 )
      v148 = *(_DWORD *)v145;
      if ( *(_DWORD *)v145 )
        v146 = *(_DWORD *)(v148 + 12);
        v144 = v145;
        v145 = *(_DWORD *)v145;
        if ( *(_DWORD *)(v148 + 12) % (unsigned int)dword_27DA728 == v143 )
    v149 = v144 == 0;
    if ( v144 )
      v144 = *(_DWORD *)v144;
      v149 = v144 == 0;
    if ( v149 )
LABEL_245:
      v150 = operator new(0x10u);
      *v150 = 0;
      v150[1] = 4;
      v150[2] = &unk_28898CC;
      v144 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v143,
               4u,
               (int)v150);
    v151 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v144 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v151, (unsigned __int64 *)&v200);
    v153 = v201;
    v152 = v200;
    if ( v200 != v201 )
        v156 = (int *)(*v152 - 12);
        if ( v156 != &dword_28898C0 )
          v154 = (unsigned int *)(*v152 - 4);
              v155 = __ldrex(v154);
            while ( __strex(v155 - 1, v154) );
            v155 = (*v154)--;
          if ( v155 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v156);
        v152 += 2;
      while ( v152 != v153 );
      v152 = v200;
    if ( v152 )
      operator delete(v152);
    v157 = v206;
    v112 = v205;
    if ( v205 != v206 )
        v160 = (int *)(*v112 - 12);
        if ( v160 != &dword_28898C0 )
          v158 = (unsigned int *)(*v112 - 4);
              v159 = __ldrex(v158);
            while ( __strex(v159 - 1, v158) );
            v159 = (*v158)--;
          if ( v159 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v160);
      while ( v112 != v157 );
      v112 = v205;
  if ( v112 )
    operator delete(v112);
}


void __fastcall ChestScreenController::_registerAutoPlaceOrder(ChestScreenController *this)
{
  ChestScreenController::_registerAutoPlaceOrder(this);
}


int __fastcall ChestScreenController::ChestScreenController(int a1, int a2, const BlockPos *a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r5@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r6@14
  unsigned int v13; // r0@16
  __int64 v14; // r0@21
  int v15; // r5@21
  unsigned int *v16; // r1@22
  unsigned int v17; // r0@24
  unsigned int *v18; // r6@28
  unsigned int v19; // r0@30
  int v20; // r5@35
  unsigned int *v21; // r1@36
  unsigned int v22; // r0@38
  unsigned int *v23; // r6@42
  unsigned int v24; // r0@44
  char v26; // [sp+4h] [bp-24h]@21
  int v27; // [sp+8h] [bp-20h]@21
  int v28; // [sp+Ch] [bp-1Ch]@1
  int v29; // [sp+10h] [bp-18h]@1
  int v30; // [sp+14h] [bp-14h]@1

  v5 = a1;
  v30 = a5;
  v28 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  v29 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  BlockContainerScreenController::BlockContainerScreenController(v5, (int)&v28, a3, a4);
  v9 = v29;
  if ( v29 )
    v10 = (unsigned int *)(v29 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v5 = &off_26E12B0;
  ContainerScreenController::createContainerManagerController<ChestContainerManagerModel,ChestContainerManagerController,BlockPos &,BlockEntityType &>(
    (int)&v26,
    v5,
    v5 + 488,
    &v30);
  v14 = *(_QWORD *)&v26;
  *(_DWORD *)&v26 = 0;
  v27 = 0;
  *(_DWORD *)(v5 + 628) = v14;
  v15 = *(_DWORD *)(v5 + 632);
  *(_DWORD *)(v5 + 632) = HIDWORD(v14);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v27;
  if ( v27 )
    v21 = (unsigned int *)(v27 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 152))(v5);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 156))(v5);
  return v5;
}


int __fastcall ChestScreenController::ChestScreenController(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r4@1
  int v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@4
  int v8; // r5@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r6@14
  unsigned int v12; // r0@16
  __int64 v13; // r0@21
  int v14; // r5@21
  unsigned int *v15; // r1@22
  unsigned int v16; // r0@24
  unsigned int *v17; // r6@28
  unsigned int v18; // r0@30
  int v19; // r5@35
  unsigned int *v20; // r1@36
  unsigned int v21; // r0@38
  unsigned int *v22; // r6@42
  unsigned int v23; // r0@44
  char v25; // [sp+8h] [bp-28h]@21
  int v26; // [sp+Ch] [bp-24h]@21
  int v27; // [sp+10h] [bp-20h]@1
  int v28; // [sp+14h] [bp-1Ch]@1
  __int64 v29; // [sp+18h] [bp-18h]@1

  v29 = a3;
  v4 = a1;
  v27 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v28 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      a3 = v29;
    }
    else
      ++*v6;
  }
  BlockContainerScreenController::BlockContainerScreenController(a1, (int)&v27, a3, HIDWORD(a3), a4);
  v8 = v28;
  if ( v28 )
    v9 = (unsigned int *)(v28 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v4 = &off_26E12B0;
  ContainerScreenController::createContainerManagerController<ChestContainerManagerModel,ChestContainerManagerController,EntityUniqueID const&>(
    (int)&v25,
    v4,
    &v29);
  v13 = *(_QWORD *)&v25;
  *(_DWORD *)&v25 = 0;
  v26 = 0;
  *(_DWORD *)(v4 + 628) = v13;
  v14 = *(_DWORD *)(v4 + 632);
  *(_DWORD *)(v4 + 632) = HIDWORD(v13);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = v26;
  if ( v26 )
    v20 = (unsigned int *)(v26 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


void __fastcall ChestScreenController::~ChestScreenController(ChestScreenController *this)
{
  ChestScreenController::~ChestScreenController(this);
}


void __fastcall ChestScreenController::_registerCoalesceOrder(ChestScreenController *this)
{
  ChestScreenController *v1; // r8@1
  int v2; // r9@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  int *v9; // r1@12
  _DWORD *v10; // r0@13
  int v11; // r9@16
  int v12; // r0@16
  int v13; // r5@17
  int v14; // r7@17
  bool v15; // zf@18
  int v16; // r4@21
  bool v17; // zf@24
  _DWORD *v18; // r0@28
  int *v19; // r1@29
  int v20; // r9@32
  int v21; // r0@32
  int v22; // r5@33
  int v23; // r7@33
  bool v24; // zf@34
  int v25; // r4@37
  bool v26; // zf@40
  _DWORD *v27; // r0@44
  int *v28; // r1@45
  int v29; // r9@48
  int v30; // r0@48
  int v31; // r5@49
  int v32; // r7@49
  bool v33; // zf@50
  int v34; // r4@53
  bool v35; // zf@56
  _DWORD *v36; // r0@60
  unsigned __int64 *v37; // r8@61
  int v38; // r0@61
  int v39; // r9@61
  int v40; // r0@61
  int v41; // r5@62
  int v42; // r7@62
  bool v43; // zf@63
  int v44; // r4@66
  bool v45; // zf@69
  int *v46; // r1@72
  _DWORD *v47; // r0@73
  int v48; // r9@76
  int v49; // r0@76
  int v50; // r5@77
  int v51; // r7@77
  bool v52; // zf@78
  int v53; // r4@81
  bool v54; // zf@84
  _DWORD *v55; // r0@88
  int *v56; // r1@89
  int v57; // r9@92
  int v58; // r0@92
  int v59; // r5@93
  int v60; // r7@93
  bool v61; // zf@94
  int v62; // r4@97
  bool v63; // zf@100
  _DWORD *v64; // r0@104
  int *v65; // r1@105
  int v66; // r9@108
  int v67; // r0@108
  int v68; // r5@109
  int v69; // r7@109
  bool v70; // zf@110
  int v71; // r4@113
  bool v72; // zf@116
  _DWORD *v73; // r0@120
  int v74; // r0@121
  int v75; // r9@121
  int v76; // r0@121
  int v77; // r5@122
  int v78; // r7@122
  bool v79; // zf@123
  int v80; // r4@126
  bool v81; // zf@129
  int *v82; // r1@132
  _DWORD *v83; // r0@133
  int v84; // r9@136
  int v85; // r0@136
  int v86; // r5@137
  int v87; // r7@137
  bool v88; // zf@138
  int v89; // r4@141
  bool v90; // zf@144
  _DWORD *v91; // r0@148
  int *v92; // r1@149
  int v93; // r9@152
  int v94; // r0@152
  int v95; // r5@153
  int v96; // r7@153
  bool v97; // zf@154
  int v98; // r4@157
  bool v99; // zf@160
  _DWORD *v100; // r0@164
  int *v101; // r1@165
  int v102; // r9@168
  int v103; // r0@168
  int v104; // r5@169
  int v105; // r7@169
  bool v106; // zf@170
  int v107; // r4@173
  bool v108; // zf@176
  _DWORD *v109; // r0@180
  int v110; // r0@181
  int *v111; // r4@181
  int *v112; // r6@181
  unsigned int *v113; // r2@183
  signed int v114; // r1@185
  int *v115; // r0@191
  int *v116; // r4@196
  int *v117; // r6@196
  unsigned int *v118; // r2@198
  signed int v119; // r1@200
  int *v120; // r0@206
  int *v121; // r4@211
  int *v122; // r6@211
  unsigned int *v123; // r2@213
  signed int v124; // r1@215
  int *v125; // r0@221
  int *v126; // [sp+0h] [bp-48h]@121
  int *v127; // [sp+4h] [bp-44h]@121
  int *v128; // [sp+8h] [bp-40h]@121
  int *v129; // [sp+Ch] [bp-3Ch]@61
  int *v130; // [sp+10h] [bp-38h]@61
  int *v131; // [sp+14h] [bp-34h]@61
  int *v132; // [sp+18h] [bp-30h]@1
  int *v133; // [sp+1Ch] [bp-2Ch]@1
  int *v134; // [sp+20h] [bp-28h]@1

  v1 = this;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v2 = 0x18u % dword_27DA728;
  v3 = *(_DWORD *)(dword_27DA724 + 4 * (0x18u % dword_27DA728));
  if ( v3 )
  {
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 24;
      if ( v5 == 24 )
        v6 = *(_DWORD *)(v4 + 4) == 24;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DA728 == v2 )
          continue;
      }
      goto LABEL_13;
    }
    v8 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v8 = v3 == 0;
    if ( !v8 )
      v9 = (int *)(v3 + 8);
LABEL_15:
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v132,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DA724,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v133 == v134 )
    goto LABEL_15;
  sub_119C854(v133, v9);
  ++v133;
LABEL_16:
  v11 = 4u % dword_27DA728;
  v12 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
    v15 = v14 == 4;
    if ( v14 == 4 )
      v15 = *(_DWORD *)(v13 + 4) == 4;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DA728 == v11 )
        continue;
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_28:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 4;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DA724,
            v11,
            4u,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v132,
      v19);
  else
    sub_119C854(v133, v19);
    ++v133;
  v20 = 0x1Au % dword_27DA728;
  v21 = *(_DWORD *)(dword_27DA724 + 4 * (0x1Au % dword_27DA728));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 26;
    if ( v23 == 26 )
      v24 = *(_DWORD *)(v22 + 4) == 26;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DA728 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 26;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            0x1Au,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_119C854(v133, v28);
  v29 = 0x18u % dword_27DA728;
  v30 = *(_DWORD *)(dword_27DA724 + 4 * (0x18u % dword_27DA728));
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 24;
    if ( v32 == 24 )
      v33 = *(_DWORD *)(v31 + 4) == 24;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DA728 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_60:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 24;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x18u,
            (int)v36);
  v37 = (unsigned __int64 *)((char *)v1 + 572);
  v38 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v37,
          (int **)(v30 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v38, (unsigned __int64 *)&v132);
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v39 = 0x1Au % dword_27DA728;
  v40 = *(_DWORD *)(dword_27DA724 + 4 * (0x1Au % dword_27DA728));
  if ( v40 )
    v41 = *(_DWORD *)v40;
    v42 = *(_DWORD *)(*(_DWORD *)v40 + 12);
      v43 = v42 == 26;
      if ( v42 == 26 )
        v43 = *(_DWORD *)(v41 + 4) == 26;
      if ( v43 )
      v44 = *(_DWORD *)v41;
      if ( *(_DWORD *)v41 )
        v42 = *(_DWORD *)(v44 + 12);
        v40 = v41;
        v41 = *(_DWORD *)v41;
        if ( *(_DWORD *)(v44 + 12) % (unsigned int)dword_27DA728 == v39 )
      goto LABEL_73;
    v45 = v40 == 0;
    if ( v40 )
      v40 = *(_DWORD *)v40;
      v45 = v40 == 0;
    if ( !v45 )
      v46 = (int *)(v40 + 8);
LABEL_75:
        (unsigned __int64 *)&v129,
        v46);
      goto LABEL_76;
LABEL_73:
  v47 = operator new(0x10u);
  *v47 = 0;
  v47[1] = 26;
  v47[2] = &unk_28898CC;
  v46 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DA724,
                  v39,
                  0x1Au,
                  (int)v47)
              + 8);
  if ( v130 == v131 )
    goto LABEL_75;
  sub_119C854(v130, v46);
  ++v130;
LABEL_76:
  v48 = 4u % dword_27DA728;
  v49 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
  if ( !v49 )
    goto LABEL_88;
  v50 = *(_DWORD *)v49;
  v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
    v52 = v51 == 4;
    if ( v51 == 4 )
      v52 = *(_DWORD *)(v50 + 4) == 4;
    if ( v52 )
    v53 = *(_DWORD *)v50;
    if ( *(_DWORD *)v50 )
      v51 = *(_DWORD *)(v53 + 12);
      v49 = v50;
      v50 = *(_DWORD *)v50;
      if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27DA728 == v48 )
  v54 = v49 == 0;
  if ( v49 )
    v49 = *(_DWORD *)v49;
    v54 = v49 == 0;
  if ( v54 )
LABEL_88:
    v55 = operator new(0x10u);
    *v55 = 0;
    v55[1] = 4;
    v55[2] = &unk_28898CC;
    v49 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v48,
            (int)v55);
  v56 = (int *)(v49 + 8);
      (unsigned __int64 *)&v129,
      v56);
    sub_119C854(v130, v56);
    ++v130;
  v57 = 0x18u % dword_27DA728;
  v58 = *(_DWORD *)(dword_27DA724 + 4 * (0x18u % dword_27DA728));
  if ( !v58 )
    goto LABEL_104;
  v59 = *(_DWORD *)v58;
  v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
    v61 = v60 == 24;
    if ( v60 == 24 )
      v61 = *(_DWORD *)(v59 + 4) == 24;
    if ( v61 )
    v62 = *(_DWORD *)v59;
    if ( *(_DWORD *)v59 )
      v60 = *(_DWORD *)(v62 + 12);
      v58 = v59;
      v59 = *(_DWORD *)v59;
      if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DA728 == v57 )
  v63 = v58 == 0;
  if ( v58 )
    v58 = *(_DWORD *)v58;
    v63 = v58 == 0;
  if ( v63 )
LABEL_104:
    v64 = operator new(0x10u);
    *v64 = 0;
    v64[1] = 24;
    v64[2] = &unk_28898CC;
    v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v57,
            (int)v64);
  v65 = (int *)(v58 + 8);
      v65);
    sub_119C854(v130, v65);
  v66 = 0x1Au % dword_27DA728;
  v67 = *(_DWORD *)(dword_27DA724 + 4 * (0x1Au % dword_27DA728));
  if ( !v67 )
    goto LABEL_120;
  v68 = *(_DWORD *)v67;
  v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
    v70 = v69 == 26;
    if ( v69 == 26 )
      v70 = *(_DWORD *)(v68 + 4) == 26;
    if ( v70 )
    v71 = *(_DWORD *)v68;
    if ( *(_DWORD *)v68 )
      v69 = *(_DWORD *)(v71 + 12);
      v67 = v68;
      v68 = *(_DWORD *)v68;
      if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DA728 == v66 )
  v72 = v67 == 0;
  if ( v67 )
    v67 = *(_DWORD *)v67;
    v72 = v67 == 0;
  if ( v72 )
LABEL_120:
    v73 = operator new(0x10u);
    *v73 = 0;
    v73[1] = 26;
    v73[2] = &unk_28898CC;
    v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v66,
            (int)v73);
  v74 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v67 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v74, (unsigned __int64 *)&v129);
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v75 = 4u % dword_27DA728;
  v76 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
  if ( v76 )
    v77 = *(_DWORD *)v76;
    v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
      v79 = v78 == 4;
      if ( v78 == 4 )
        v79 = *(_DWORD *)(v77 + 4) == 4;
      if ( v79 )
      v80 = *(_DWORD *)v77;
      if ( *(_DWORD *)v77 )
        v78 = *(_DWORD *)(v80 + 12);
        v76 = v77;
        v77 = *(_DWORD *)v77;
        if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DA728 == v75 )
      goto LABEL_133;
    v81 = v76 == 0;
    if ( v76 )
      v76 = *(_DWORD *)v76;
      v81 = v76 == 0;
    if ( !v81 )
      v82 = (int *)(v76 + 8);
LABEL_135:
        (unsigned __int64 *)&v126,
        v82);
      goto LABEL_136;
LABEL_133:
  v83 = operator new(0x10u);
  *v83 = 0;
  v83[1] = 4;
  v83[2] = &unk_28898CC;
  v82 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v75,
                  4u,
                  (int)v83)
  if ( v127 == v128 )
    goto LABEL_135;
  sub_119C854(v127, v82);
  ++v127;
LABEL_136:
  v84 = 0x1Au % dword_27DA728;
  v85 = *(_DWORD *)(dword_27DA724 + 4 * (0x1Au % dword_27DA728));
  if ( !v85 )
    goto LABEL_148;
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
    v88 = v87 == 26;
    if ( v87 == 26 )
      v88 = *(_DWORD *)(v86 + 4) == 26;
    if ( v88 )
    v89 = *(_DWORD *)v86;
    if ( *(_DWORD *)v86 )
      v87 = *(_DWORD *)(v89 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DA728 == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_148:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 26;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = (int *)(v85 + 8);
      (unsigned __int64 *)&v126,
      v92);
    sub_119C854(v127, v92);
    ++v127;
  v93 = 0x18u % dword_27DA728;
  v94 = *(_DWORD *)(dword_27DA724 + 4 * (0x18u % dword_27DA728));
  if ( !v94 )
    goto LABEL_164;
  v95 = *(_DWORD *)v94;
  v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
    v97 = v96 == 24;
    if ( v96 == 24 )
      v97 = *(_DWORD *)(v95 + 4) == 24;
    if ( v97 )
    v98 = *(_DWORD *)v95;
    if ( *(_DWORD *)v95 )
      v96 = *(_DWORD *)(v98 + 12);
      v94 = v95;
      v95 = *(_DWORD *)v95;
      if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DA728 == v93 )
  v99 = v94 == 0;
  if ( v94 )
    v94 = *(_DWORD *)v94;
    v99 = v94 == 0;
  if ( v99 )
LABEL_164:
    v100 = operator new(0x10u);
    *v100 = 0;
    v100[1] = 24;
    v100[2] = &unk_28898CC;
    v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v93,
            (int)v100);
  v101 = (int *)(v94 + 8);
      v101);
    sub_119C854(v127, v101);
  v102 = 4u % dword_27DA728;
  v103 = *(_DWORD *)(dword_27DA724 + 4 * (4u % dword_27DA728));
  if ( !v103 )
    goto LABEL_180;
  v104 = *(_DWORD *)v103;
  v105 = *(_DWORD *)(*(_DWORD *)v103 + 12);
    v106 = v105 == 4;
    if ( v105 == 4 )
      v106 = *(_DWORD *)(v104 + 4) == 4;
    if ( v106 )
    v107 = *(_DWORD *)v104;
    if ( *(_DWORD *)v104 )
      v105 = *(_DWORD *)(v107 + 12);
      v103 = v104;
      v104 = *(_DWORD *)v104;
      if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DA728 == v102 )
  v108 = v103 == 0;
  if ( v103 )
    v103 = *(_DWORD *)v103;
    v108 = v103 == 0;
  if ( v108 )
LABEL_180:
    v109 = operator new(0x10u);
    *v109 = 0;
    v109[1] = 4;
    v109[2] = &unk_28898CC;
    v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA724,
             v102,
             4u,
             (int)v109);
  v110 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v37,
           (int **)(v103 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v110, (unsigned __int64 *)&v126);
  v112 = v127;
  v111 = v126;
  if ( v126 != v127 )
    do
      v115 = (int *)(*v111 - 12);
      if ( v115 != &dword_28898C0 )
        v113 = (unsigned int *)(*v111 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v114 = __ldrex(v113);
          while ( __strex(v114 - 1, v113) );
        }
        else
          v114 = (*v113)--;
        if ( v114 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v115);
      ++v111;
    while ( v111 != v112 );
    v111 = v126;
  if ( v111 )
    operator delete(v111);
  v117 = v130;
  v116 = v129;
  if ( v129 != v130 )
      v120 = (int *)(*v116 - 12);
      if ( v120 != &dword_28898C0 )
        v118 = (unsigned int *)(*v116 - 4);
            v119 = __ldrex(v118);
          while ( __strex(v119 - 1, v118) );
          v119 = (*v118)--;
        if ( v119 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v120);
      ++v116;
    while ( v116 != v117 );
    v116 = v129;
  if ( v116 )
    operator delete(v116);
  v122 = v133;
  v121 = v132;
  if ( v132 != v133 )
      v125 = (int *)(*v121 - 12);
      if ( v125 != &dword_28898C0 )
        v123 = (unsigned int *)(*v121 - 4);
            v124 = __ldrex(v123);
          while ( __strex(v124 - 1, v123) );
          v124 = (*v123)--;
        if ( v124 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v125);
      ++v121;
    while ( v121 != v122 );
    v121 = v132;
  if ( v121 )
    operator delete(v121);
}


void __fastcall ChestScreenController::_registerCoalesceOrder(ChestScreenController *this)
{
  ChestScreenController::_registerCoalesceOrder(this);
}
