

signed int __fastcall CraftingContainerManagerModel::_filterByTextAndInventory(CraftingContainerManagerModel *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r6@1
  CraftingContainerManagerModel *v3; // r5@1
  signed int v4; // r4@1
  signed int v5; // r0@1
  signed int v6; // r2@2
  bool v7; // zf@2
  bool v9; // zf@9
  signed int v10; // r1@9
  signed int v11; // r1@13

  v2 = a2;
  v3 = this;
  v4 = CraftingContainerManagerModel::_filterByText(this, a2);
  v5 = CraftingContainerManagerModel::_filterByInventory(v3, v2);
  if ( v4 == 3 )
    return 3;
  v6 = *(_DWORD *)(*((_DWORD *)v3 + 21) - 12);
  v7 = v6 == 0;
  if ( v6 )
    v6 = 1;
  else
    v7 = v5 == 3;
  if ( v7 && *((_BYTE *)v3 + 82) )
  v9 = v4 == 2;
  v10 = 2;
  if ( v4 != 2 )
    v9 = v5 == 2;
  if ( !v9 )
  {
    if ( *((_BYTE *)v3 + 82) )
    {
      v11 = 0;
      if ( v5 == 3 )
        v11 = 1;
      if ( v11 & v6 )
        return 2;
    }
    else if ( v5 == 3 )
      return 2;
    v10 = v4 != 0 && v5 != 0;
  }
  return v10;
}


signed int __fastcall CraftingContainerManagerModel::_isWorkbenchValid(CraftingContainerManagerModel *this)
{
  CraftingContainerManagerModel *v1; // r4@1
  const BlockPos *v2; // r0@1
  signed int result; // r0@1
  unsigned __int8 v4; // [sp+4h] [bp-Ch]@1

  v1 = this;
  v2 = (const BlockPos *)Entity::getRegion(*((Entity **)this + 1));
  BlockSource::getBlockAndData((BlockSource *)&v4, v2, (int)v1 + 68);
  result = 0;
  if ( v4 == *(_BYTE *)(Block::mWorkBench + 4) )
    result = 1;
  return result;
}


int __fastcall CraftingContainerManagerModel::setSearchString(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r10@1
  unsigned __int64 *v4; // r9@1
  int v5; // r0@1
  int v6; // r5@2
  int v7; // r7@2
  bool v8; // zf@3
  int v9; // r4@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  int (****v12)(void); // r0@14

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 84), a2);
  v3 = 0xFu % dword_27FA458;
  v4 = (unsigned __int64 *)(v2 + 40);
  v5 = *(_DWORD *)(dword_27FA454 + 4 * (0xFu % dword_27FA458));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 15;
    if ( v7 == 15 )
      v8 = *(_DWORD *)(v6 + 4) == 15;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA458 == v3 )
        continue;
    }
  }
  v10 = v5 == 0;
  if ( v5 )
    v5 = *(_DWORD *)v5;
    v10 = v5 == 0;
  if ( v10 )
LABEL_13:
    v11 = operator new(0x10u);
    *v11 = 0;
    v11[1] = 15;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA454,
           v3,
           0xFu,
           (int)v11);
  v12 = (int (****)(void))std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                            v4,
                            (int **)(v5 + 8));
  return (***v12)();
}


CraftingContainerManagerModel *__fastcall CraftingContainerManagerModel::~CraftingContainerManagerModel(CraftingContainerManagerModel *this)
{
  CraftingContainerManagerModel *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r5@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r0@10
  unsigned int *v8; // r6@14
  unsigned int v9; // r0@16
  int v10; // r5@21
  unsigned int *v11; // r1@22
  unsigned int v12; // r0@24
  unsigned int *v13; // r6@28
  unsigned int v14; // r0@30
  int v15; // r5@35
  unsigned int *v16; // r1@36
  unsigned int v17; // r0@38
  unsigned int *v18; // r6@42
  unsigned int v19; // r0@44
  int v20; // r1@49
  void *v21; // r0@49
  unsigned int *v23; // r2@51
  signed int v24; // r1@53

  v1 = this;
  *(_DWORD *)this = &off_26ED0FC;
  RecipeIngredientSet::~RecipeIngredientSet((CraftingContainerManagerModel *)((char *)this + 184));
  v2 = (void *)*((_DWORD *)v1 + 41);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 37);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 30);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 30) = 0;
  v5 = *((_DWORD *)v1 + 27);
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v10 = *((_DWORD *)v1 + 25);
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v15 = *((_DWORD *)v1 + 23);
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
  v20 = *((_DWORD *)v1 + 21);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v20 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  ContainerManagerModel::~ContainerManagerModel(v1);
  return v1;
}


int __fastcall CraftingContainerManagerModel::fireItemAcquiredEvent(CraftingContainerManagerModel *this, const ItemInstance *a2, int a3)
{
  int v3; // r4@1
  ItemInstance *v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = ContainerManagerModel::getPlayer(this);
  return j_j_j__ZN17MinecraftEventing21fireEventItemAcquiredEP6PlayerRK12ItemInstancejNS_17AcquisitionMethodE_0(
           v5,
           v4,
           v3,
           2);
}


signed int __fastcall CraftingContainerManagerModel::isValid(CraftingContainerManagerModel *this, float a2)
{
  CraftingContainerManagerModel *v3; // r4@1
  const BlockPos *v4; // r0@3
  int v9; // r1@4
  int v10; // r2@4
  Entity *v11; // r4@4
  signed int result; // r0@5
  char v14; // [sp+4h] [bp-54h]@4
  int v15; // [sp+10h] [bp-48h]@4
  signed int v16; // [sp+14h] [bp-44h]@4
  int v17; // [sp+18h] [bp-40h]@4
  int v18; // [sp+1Ch] [bp-3Ch]@4
  int v19; // [sp+20h] [bp-38h]@4
  int v20; // [sp+24h] [bp-34h]@4
  int v21; // [sp+28h] [bp-30h]@4
  int v22; // [sp+2Ch] [bp-2Ch]@4
  int v23; // [sp+30h] [bp-28h]@4
  unsigned __int8 v24; // [sp+34h] [bp-24h]@3

  _R5 = a2;
  v3 = this;
  if ( ContainerManagerModel::isValid(this, a2) == 1 )
  {
    if ( !*((_BYTE *)v3 + 80) )
      return 1;
    v4 = (const BlockPos *)Entity::getRegion(*((Entity **)v3 + 1));
    BlockSource::getBlockAndData((BlockSource *)&v24, v4, (int)v3 + 68);
    if ( v24 == *(_BYTE *)(Block::mWorkBench + 4) )
    {
      v15 = 1056964608;
      v16 = 1056964608;
      __asm { VMOV            S16, R5 }
      v17 = 1056964608;
      BlockPos::BlockPos((int)&v18, (int)&v15);
      v9 = *((_DWORD *)v3 + 18);
      v10 = *((_DWORD *)v3 + 19);
      v21 = *((_DWORD *)v3 + 17) + v18;
      v22 = v19 + v9;
      v23 = v20 + v10;
      Vec3::Vec3((int)&v24, (int)&v21);
      v11 = (Entity *)*((_DWORD *)v3 + 1);
      BlockPos::BlockPos((int)&v14, (int)&v24);
      _R0 = Entity::distanceSqrToBlockPosCenter(v11, (const BlockPos *)&v14);
      __asm
      {
        VMUL.F32        S0, S16, S16
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        return 0;
    }
    result = 0;
  }
  else
  return result;
}


int __fastcall CraftingContainerManagerModel::CraftingContainerManagerModel(double a1, int a2, char a3, char a4, char a5, int a6, int *a7)
{
  char v7; // r5@1
  int v8; // r4@1

  v7 = a3;
  v8 = LODWORD(a1);
  ContainerManagerModel::ContainerManagerModel(a1, a2);
  *(_DWORD *)v8 = &off_26ED0FC;
  *(_DWORD *)(v8 + 68) = *(_DWORD *)a6;
  *(_DWORD *)(v8 + 72) = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(v8 + 76) = *(_DWORD *)(a6 + 8);
  *(_BYTE *)(v8 + 80) = v7;
  *(_BYTE *)(v8 + 81) = a4;
  *(_BYTE *)(v8 + 82) = a5;
  sub_21E8AF4((int *)(v8 + 84), a7);
  *(_DWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 92) = 0;
  *(_DWORD *)(v8 + 96) = 0;
  *(_DWORD *)(v8 + 100) = 0;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 108) = 0;
  ItemInstance::ItemInstance(v8 + 112);
  RecipeIngredientSet::RecipeIngredientSet((RecipeIngredientSet *)(v8 + 184));
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 44))(v8);
  return v8;
}


char *__fastcall CraftingContainerManagerModel::getSearchString(CraftingContainerManagerModel *this)
{
  return (char *)this + 84;
}


void __fastcall CraftingContainerManagerModel::~CraftingContainerManagerModel(CraftingContainerManagerModel *this)
{
  CraftingContainerManagerModel::~CraftingContainerManagerModel(this);
}


signed int __fastcall CraftingContainerManagerModel::init(CraftingContainerManagerModel *this)
{
  CraftingContainerManagerModel *v1; // r8@1
  Player **v2; // r6@3
  int v3; // r5@4
  unsigned int *v4; // r1@5
  unsigned int v5; // r0@7
  unsigned int *v6; // r4@11
  unsigned int v7; // r0@13
  int v8; // r5@18
  unsigned int *v9; // r1@19
  unsigned int v10; // r0@21
  unsigned int *v11; // r4@25
  unsigned int v12; // r0@27
  Player *v13; // r3@32
  __int64 v14; // r0@32
  int v15; // r5@32
  unsigned int *v16; // r1@33
  unsigned int v17; // r0@35
  unsigned int *v18; // r4@39
  unsigned int v19; // r0@41
  int v20; // r5@46
  unsigned int *v21; // r1@47
  unsigned int v22; // r0@49
  unsigned int *v23; // r4@53
  unsigned int v24; // r0@55
  int v25; // r3@60
  __int64 v26; // r0@60
  int v27; // r5@60
  unsigned int *v28; // r1@61
  unsigned int v29; // r0@63
  unsigned int *v30; // r4@67
  unsigned int v31; // r0@69
  int v32; // r5@74
  unsigned int *v33; // r1@75
  unsigned int v34; // r0@77
  unsigned int *v35; // r4@81
  unsigned int v36; // r0@83
  signed int v37; // r1@88
  __int64 v38; // r0@90
  int v39; // r5@90
  unsigned int *v40; // r1@91
  unsigned int v41; // r0@93
  unsigned int *v42; // r4@97
  unsigned int v43; // r0@99
  int v44; // r5@104
  unsigned int *v45; // r1@105
  unsigned int v46; // r0@107
  unsigned int *v47; // r4@111
  unsigned int v48; // r0@113
  int v49; // r0@118
  unsigned int *v50; // r0@119
  unsigned int v51; // r1@121
  int v52; // r5@124
  unsigned int *v53; // r1@125
  unsigned int v54; // r0@127
  unsigned int *v55; // r4@131
  unsigned int v56; // r0@133
  int v57; // r0@138
  unsigned int *v58; // r0@139
  unsigned int v59; // r1@141
  int v60; // r5@144
  unsigned int *v61; // r1@145
  unsigned int v62; // r0@147
  unsigned int *v63; // r4@151
  unsigned int v64; // r0@153
  int v65; // r0@158
  unsigned int *v66; // r0@159
  unsigned int v67; // r1@161
  int v68; // r5@164
  unsigned int *v69; // r1@165
  unsigned int v70; // r0@167
  unsigned int *v71; // r4@171
  unsigned int v72; // r0@173
  int v73; // r3@178
  int v74; // r5@178
  unsigned int *v75; // r1@179
  unsigned int v76; // r0@181
  unsigned int *v77; // r4@185
  unsigned int v78; // r0@187
  int v79; // r5@192
  unsigned int *v80; // r1@193
  unsigned int v81; // r0@195
  unsigned int *v82; // r4@199
  unsigned int v83; // r0@201
  char *v84; // r10@206
  char *v85; // r7@206
  _DWORD *v86; // r0@206
  __int64 v87; // r1@206
  int v88; // r7@206
  int v89; // r11@206
  int v90; // r5@207
  int v91; // r6@207
  void (__fastcall *v92)(int, int, char *); // r9@208
  int v93; // r7@215
  int v94; // r9@215
  int v95; // r5@216
  int v96; // r6@216
  void (__fastcall *v97)(int, int, char *); // r4@217
  int v98; // r7@224
  int v99; // r9@224
  int v100; // r5@225
  int v101; // r6@225
  void (__fastcall *v102)(int, int, char *); // r4@226
  int v103; // r7@233
  int v104; // r9@233
  int v105; // r5@234
  int v106; // r6@234
  void (__fastcall *v107)(int, int, char *); // r4@235
  int v108; // r4@242
  int v109; // r7@242
  int v110; // r5@243
  int v111; // r6@243
  unsigned int *v112; // r0@246
  unsigned int v113; // r1@248
  int v114; // r5@251
  unsigned int *v115; // r1@252
  unsigned int v116; // r0@254
  unsigned int *v117; // r4@258
  unsigned int v118; // r0@260
  unsigned int *v119; // r0@266
  unsigned int v120; // r1@268
  int v121; // r5@271
  unsigned int *v122; // r1@272
  unsigned int v123; // r0@274
  unsigned int *v124; // r4@278
  unsigned int v125; // r0@280
  unsigned int *v126; // r0@286
  unsigned int v127; // r1@288
  int v128; // r5@291
  unsigned int *v129; // r1@292
  unsigned int v130; // r0@294
  unsigned int *v131; // r4@298
  unsigned int v132; // r0@300
  unsigned int *v133; // r0@306
  unsigned int v134; // r1@308
  int v135; // r5@311
  unsigned int *v136; // r1@312
  unsigned int v137; // r0@314
  unsigned int *v138; // r4@318
  unsigned int v139; // r0@320
  unsigned int *v140; // r0@326
  unsigned int v141; // r1@328
  int v142; // r5@331
  unsigned int *v143; // r1@332
  unsigned int v144; // r0@334
  unsigned int *v145; // r4@338
  unsigned int v146; // r0@340
  bool v147; // r1@346
  MinecraftEventing *v148; // r0@349
  unsigned int v149; // r2@349
  Player *v150; // r1@349
  signed int result; // r0@351
  _QWORD *v152; // r0@352
  _QWORD *v153; // r0@352
  _QWORD *v154; // r0@352
  int v155; // r4@353
  unsigned int *v156; // r1@354
  unsigned int *v157; // r5@360
  int v158; // r4@367
  unsigned int *v159; // r1@368
  unsigned int *v160; // r5@374
  int v161; // r4@381
  unsigned int *v162; // r1@382
  unsigned int *v163; // r5@388
  int v164; // r4@395
  unsigned int *v165; // r1@396
  unsigned int *v166; // r5@402
  int v167; // r4@409
  unsigned int *v168; // r1@410
  unsigned int *v169; // r5@416
  bool *v170; // [sp+Ch] [bp-27Ch]@206
  unsigned __int64 *v171; // [sp+14h] [bp-274h]@206
  int v172; // [sp+18h] [bp-270h]@325
  int v173; // [sp+1Ch] [bp-26Ch]@325
  int v174; // [sp+20h] [bp-268h]@305
  int v175; // [sp+24h] [bp-264h]@305
  int v176; // [sp+28h] [bp-260h]@285
  int v177; // [sp+2Ch] [bp-25Ch]@285
  int v178; // [sp+30h] [bp-258h]@265
  int v179; // [sp+34h] [bp-254h]@265
  int v180; // [sp+38h] [bp-250h]@245
  int v181; // [sp+3Ch] [bp-24Ch]@245
  char v182; // [sp+40h] [bp-248h]@235
  int v183; // [sp+48h] [bp-240h]@239
  void *v184; // [sp+64h] [bp-224h]@237
  void *v185; // [sp+74h] [bp-214h]@235
  char v186; // [sp+88h] [bp-200h]@226
  int v187; // [sp+90h] [bp-1F8h]@230
  void *v188; // [sp+ACh] [bp-1DCh]@228
  void *v189; // [sp+BCh] [bp-1CCh]@226
  char v190; // [sp+D0h] [bp-1B8h]@217
  int v191; // [sp+D8h] [bp-1B0h]@221
  void *v192; // [sp+F4h] [bp-194h]@219
  void *v193; // [sp+104h] [bp-184h]@217
  char v194; // [sp+118h] [bp-170h]@208
  int v195; // [sp+120h] [bp-168h]@212
  void *v196; // [sp+13Ch] [bp-14Ch]@210
  void *ptr; // [sp+14Ch] [bp-13Ch]@208
  char v198; // [sp+167h] [bp-121h]@206
  int v199; // [sp+168h] [bp-120h]@206
  int v200; // [sp+16Ch] [bp-11Ch]@206
  int v201; // [sp+170h] [bp-118h]@206
  int v202; // [sp+174h] [bp-114h]@325
  int v203; // [sp+178h] [bp-110h]@206
  int v204; // [sp+17Ch] [bp-10Ch]@206
  int v205; // [sp+180h] [bp-108h]@206
  int v206; // [sp+184h] [bp-104h]@305
  int v207; // [sp+188h] [bp-100h]@206
  int v208; // [sp+18Ch] [bp-FCh]@206
  int v209; // [sp+190h] [bp-F8h]@206
  int v210; // [sp+194h] [bp-F4h]@285
  int v211; // [sp+198h] [bp-F0h]@206
  int v212; // [sp+19Ch] [bp-ECh]@206
  int v213; // [sp+1A0h] [bp-E8h]@206
  int v214; // [sp+1A4h] [bp-E4h]@265
  int v215; // [sp+1A8h] [bp-E0h]@206
  int v216; // [sp+1ACh] [bp-DCh]@206
  int v217; // [sp+1B0h] [bp-D8h]@206
  int v218; // [sp+1B4h] [bp-D4h]@245
  char v219; // [sp+1BBh] [bp-CDh]@206
  _DWORD *v220; // [sp+1BCh] [bp-CCh]@206
  __int64 v221; // [sp+1C4h] [bp-C4h]@206
  int v222; // [sp+1CCh] [bp-BCh]@192
  int v223; // [sp+1D0h] [bp-B8h]@192
  int v224; // [sp+1D4h] [bp-B4h]@192
  int v225; // [sp+1D8h] [bp-B0h]@192
  int v226; // [sp+1DCh] [bp-ACh]@178
  int v227; // [sp+1E0h] [bp-A8h]@178
  int v228; // [sp+1E4h] [bp-A4h]@178
  char v229; // [sp+1E8h] [bp-A0h]@178
  int v230; // [sp+1ECh] [bp-9Ch]@178
  int v231; // [sp+1F0h] [bp-98h]@158
  int v232; // [sp+1F4h] [bp-94h]@158
  int v233; // [sp+1F8h] [bp-90h]@138
  int v234; // [sp+1FCh] [bp-8Ch]@138
  int v235; // [sp+200h] [bp-88h]@118
  int v236; // [sp+204h] [bp-84h]@118
  int v237; // [sp+208h] [bp-80h]@90
  int v238; // [sp+20Ch] [bp-7Ch]@88
  int v239; // [sp+210h] [bp-78h]@90
  int v240; // [sp+214h] [bp-74h]@90
  int v241; // [sp+218h] [bp-70h]@60
  int v242; // [sp+21Ch] [bp-6Ch]@60
  int v243; // [sp+220h] [bp-68h]@60
  char v244; // [sp+224h] [bp-64h]@60
  int v245; // [sp+228h] [bp-60h]@60
  int v246; // [sp+22Ch] [bp-5Ch]@32
  int v247; // [sp+230h] [bp-58h]@32
  int v248; // [sp+234h] [bp-54h]@32
  char v249; // [sp+238h] [bp-50h]@32
  int v250; // [sp+23Ch] [bp-4Ch]@32
  int v251; // [sp+240h] [bp-48h]@18
  int v252; // [sp+244h] [bp-44h]@18
  char v253; // [sp+248h] [bp-40h]@18
  int v254; // [sp+24Ch] [bp-3Ch]@18
  int v255; // [sp+250h] [bp-38h]@4
  int v256; // [sp+254h] [bp-34h]@4
  char v257; // [sp+258h] [bp-30h]@4
  int v258; // [sp+25Ch] [bp-2Ch]@4
  char v259; // [sp+260h] [bp-28h]@90

  v1 = this;
  if ( *((_BYTE *)this + 81) || !*((_BYTE *)this + 80) )
  {
    v256 = 3;
    v255 = 4;
    v2 = (Player **)((char *)this + 4);
    ContainerFactory::createModel<ArmorContainerModel,ContainerEnumName,int,Player &>(
      (int)&v257,
      (unsigned int *)&v256,
      (unsigned int *)&v255,
      *((_DWORD *)this + 1));
    ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v257);
    v3 = v258;
    if ( v258 )
    {
      v4 = (unsigned int *)(v258 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 == 1 )
        v6 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    }
    v252 = 32;
    v251 = 1;
    ContainerFactory::createModel<OffhandContainerModel,ContainerEnumName,int,Player &>(
      (int)&v253,
      (unsigned int *)&v252,
      (unsigned int *)&v251,
      *((_DWORD *)v1 + 1));
    ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v253);
    v8 = v254;
    if ( v254 )
      v9 = (unsigned int *)(v254 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  else
  v248 = 24;
  v247 = 9;
  v13 = *v2;
  v246 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v249,
    (unsigned int *)&v248,
    (unsigned int *)&v247,
    (int)v13,
    &v246);
  v14 = *(_QWORD *)&v249;
  *(_DWORD *)&v249 = 0;
  v250 = 0;
  *((_DWORD *)v1 + 26) = v14;
  v15 = *((_DWORD *)v1 + 27);
  *((_DWORD *)v1 + 27) = HIDWORD(v14);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v250;
  if ( v250 )
    v21 = (unsigned int *)(v250 + 4);
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
  v243 = 26;
  v242 = 27;
  v25 = (int)*v2;
  v241 = 18;
    (int)&v244,
    (unsigned int *)&v243,
    (unsigned int *)&v242,
    v25,
    &v241);
  v26 = *(_QWORD *)&v244;
  *(_DWORD *)&v244 = 0;
  v245 = 0;
  *((_DWORD *)v1 + 22) = v26;
  v27 = *((_DWORD *)v1 + 23);
  *((_DWORD *)v1 + 23) = HIDWORD(v26);
  if ( v27 )
    v28 = (unsigned int *)(v27 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  v32 = v245;
  if ( v245 )
    v33 = (unsigned int *)(v245 + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  v37 = 4;
  v238 = 10;
  if ( *((_BYTE *)v1 + 80) )
    v37 = 9;
  v237 = v37;
  std::__shared_ptr<ContainerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ContainerModel>,ContainerEnumName,int>(
    (int)&v239,
    (int)&v259,
    (unsigned int *)&v238,
    (unsigned int *)&v237);
  (*(void (**)(void))(*(_DWORD *)v239 + 12))();
  v38 = *(_QWORD *)&v239;
  v239 = 0;
  v240 = 0;
  *((_DWORD *)v1 + 24) = v38;
  v39 = *((_DWORD *)v1 + 25);
  *((_DWORD *)v1 + 25) = HIDWORD(v38);
  if ( v39 )
    v40 = (unsigned int *)(v39 + 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v39 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  v44 = v240;
  if ( v240 )
    v45 = (unsigned int *)(v240 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(v44 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  v235 = *((_DWORD *)v1 + 22);
  v49 = *((_DWORD *)v1 + 23);
  v236 = v49;
  if ( v49 )
    v50 = (unsigned int *)(v49 + 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 + 1, v50) );
      ++*v50;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v235);
  v52 = v236;
  if ( v236 )
    v53 = (unsigned int *)(v236 + 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      v55 = (unsigned int *)(v52 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
  v233 = *((_DWORD *)v1 + 26);
  v57 = *((_DWORD *)v1 + 27);
  v234 = v57;
  if ( v57 )
    v58 = (unsigned int *)(v57 + 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 + 1, v58) );
      ++*v58;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v233);
  v60 = v234;
  if ( v234 )
    v61 = (unsigned int *)(v234 + 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 == 1 )
      v63 = (unsigned int *)(v60 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 8))(v60);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
  v231 = *((_DWORD *)v1 + 24);
  v65 = *((_DWORD *)v1 + 25);
  v232 = v65;
  if ( v65 )
    v66 = (unsigned int *)(v65 + 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 + 1, v66) );
      ++*v66;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v231);
  v68 = v232;
  if ( v232 )
    v69 = (unsigned int *)(v232 + 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 == 1 )
      v71 = (unsigned int *)(v68 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
  v227 = 36;
  v228 = 9;
  v73 = (int)*v2;
  v226 = 9;
    (int)&v229,
    (unsigned int *)&v228,
    (unsigned int *)&v227,
    v73,
    &v226);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v229);
  v74 = v230;
  if ( v230 )
    v75 = (unsigned int *)(v230 + 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 == 1 )
      v77 = (unsigned int *)(v74 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 8))(v74);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 12))(v74);
  v223 = 11;
  v222 = 1;
    (int)&v224,
    (unsigned int *)&v223,
    (unsigned int *)&v222);
  (*(void (**)(void))(*(_DWORD *)v224 + 12))();
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v224);
  v79 = v225;
  if ( v225 )
    v80 = (unsigned int *)(v225 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 == 1 )
      v82 = (unsigned int *)(v79 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
  v84 = Player::getFilteredCreativeItemList(*v2);
  v85 = Player::getCreativeItemList(*v2);
  v86 = operator new(4u);
  LODWORD(v87) = sub_169F5D4;
  *v86 = v1;
  HIDWORD(v87) = sub_169F5D0;
  v220 = v86;
  v221 = v87;
  v219 = ContainerManagerModel::isCreativeMode(v1);
  v216 = 12;
  v215 = -858993459 * ((signed int)((*(_QWORD *)v84 >> 32) - *(_QWORD *)v84) >> 4);
  ContainerFactory::createModel<FilteredContainerModel,ContainerEnumName,unsigned int,bool &,bool &,std::function<FilterResult ()(ItemInstance const&)> &>(
    (int)&v217,
    (unsigned int *)&v216,
    (unsigned int *)&v215,
    &v219,
    (_BYTE *)v1 + 82,
    (int)&v220);
  v212 = 13;
  v211 = -858993459 * ((signed int)((*(_QWORD *)(v84 + 12) >> 32) - *(_QWORD *)(v84 + 12)) >> 4);
    (int)&v213,
    (unsigned int *)&v212,
    (unsigned int *)&v211,
  v208 = 17;
  v207 = -858993459 * ((signed int)((*((_QWORD *)v84 + 3) >> 32) - *((_QWORD *)v84 + 3)) >> 4);
    (int)&v209,
    (unsigned int *)&v208,
    (unsigned int *)&v207,
  v204 = 14;
  v203 = -858993459 * ((signed int)((*(_QWORD *)(v84 + 36) >> 32) - *(_QWORD *)(v84 + 36)) >> 4);
    (int)&v205,
    (unsigned int *)&v204,
    (unsigned int *)&v203,
  v200 = 15;
  v171 = (unsigned __int64 *)v85;
  v199 = 954437177 * ((signed int)((*(_QWORD *)v85 >> 32) - *(_QWORD *)v85) >> 3);
  v198 = 0;
  v170 = (bool *)v1 + 82;
  ContainerFactory::createModel<FilteredContainerModel,ContainerEnumName,unsigned int,bool,bool &,std::function<FilterResult ()(ItemInstance const&)> &>(
    (int)&v201,
    (unsigned int *)&v200,
    (unsigned int *)&v199,
    &v198,
  v89 = *(_QWORD *)v84 >> 32;
  v88 = *(_QWORD *)v84;
  if ( v88 != v89 )
    v90 = v217;
    v91 = 0;
    do
      v92 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v90 + 40);
      ItemGroup::getItemType((ItemGroup *)&v194, v88);
      v92(v90, v91, &v194);
      if ( ptr )
        operator delete(ptr);
      if ( v196 )
        operator delete(v196);
      if ( v195 )
        (*(void (**)(void))(*(_DWORD *)v195 + 4))();
      v88 += 80;
      ++v91;
      v195 = 0;
    while ( v89 != v88 );
  v94 = *(_QWORD *)(v84 + 12) >> 32;
  v93 = *(_QWORD *)(v84 + 12);
  if ( v93 != v94 )
    v95 = v213;
    v96 = 0;
      v97 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v95 + 40);
      ItemGroup::getItemType((ItemGroup *)&v190, v93);
      v97(v95, v96, &v190);
      if ( v193 )
        operator delete(v193);
      if ( v192 )
        operator delete(v192);
      if ( v191 )
        (*(void (**)(void))(*(_DWORD *)v191 + 4))();
      v93 += 80;
      ++v96;
      v191 = 0;
    while ( v94 != v93 );
  v99 = *((_QWORD *)v84 + 3) >> 32;
  v98 = *((_QWORD *)v84 + 3);
  if ( v98 != v99 )
    v100 = v209;
    v101 = 0;
      v102 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v100 + 40);
      ItemGroup::getItemType((ItemGroup *)&v186, v98);
      v102(v100, v101, &v186);
      if ( v189 )
        operator delete(v189);
      if ( v188 )
        operator delete(v188);
      if ( v187 )
        (*(void (**)(void))(*(_DWORD *)v187 + 4))();
      v98 += 80;
      ++v101;
      v187 = 0;
    while ( v99 != v98 );
  v104 = *(_QWORD *)(v84 + 36) >> 32;
  v103 = *(_QWORD *)(v84 + 36);
  if ( v103 != v104 )
    v105 = v205;
    v106 = 0;
      v107 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v105 + 40);
      ItemGroup::getItemType((ItemGroup *)&v182, v103);
      v107(v105, v106, &v182);
      if ( v185 )
        operator delete(v185);
      if ( v184 )
        operator delete(v184);
      if ( v183 )
        (*(void (**)(void))(*(_DWORD *)v183 + 4))();
      v103 += 80;
      ++v106;
      v183 = 0;
    while ( v104 != v103 );
  v109 = *v171 >> 32;
  v108 = *v171;
  if ( v108 != v109 )
    v110 = v201;
    v111 = 0;
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v110 + 40))(v110, v111, v108);
      v108 += 72;
      ++v111;
    while ( v109 != v108 );
  v180 = v217;
  v181 = v218;
  if ( v218 )
    v112 = (unsigned int *)(v218 + 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 + 1, v112) );
      ++*v112;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v180);
  v114 = v181;
  if ( v181 )
    v115 = (unsigned int *)(v181 + 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 == 1 )
      v117 = (unsigned int *)(v114 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 8))(v114);
          v118 = __ldrex(v117);
        while ( __strex(v118 - 1, v117) );
        v118 = (*v117)--;
      if ( v118 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 12))(v114);
  v178 = v213;
  v179 = v214;
  if ( v214 )
    v119 = (unsigned int *)(v214 + 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 + 1, v119) );
      ++*v119;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v178);
  v121 = v179;
  if ( v179 )
    v122 = (unsigned int *)(v179 + 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 == 1 )
      v124 = (unsigned int *)(v121 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v121 + 8))(v121);
          v125 = __ldrex(v124);
        while ( __strex(v125 - 1, v124) );
        v125 = (*v124)--;
      if ( v125 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v121 + 12))(v121);
  v176 = v209;
  v177 = v210;
  if ( v210 )
    v126 = (unsigned int *)(v210 + 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 + 1, v126) );
      ++*v126;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v176);
  v128 = v177;
  if ( v177 )
    v129 = (unsigned int *)(v177 + 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 == 1 )
      v131 = (unsigned int *)(v128 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v128 + 8))(v128);
          v132 = __ldrex(v131);
        while ( __strex(v132 - 1, v131) );
        v132 = (*v131)--;
      if ( v132 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v128 + 12))(v128);
  v174 = v205;
  v175 = v206;
  if ( v206 )
    v133 = (unsigned int *)(v206 + 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 + 1, v133) );
      ++*v133;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v174);
  v135 = v175;
  if ( v175 )
    v136 = (unsigned int *)(v175 + 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 == 1 )
      v138 = (unsigned int *)(v135 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v135 + 8))(v135);
          v139 = __ldrex(v138);
        while ( __strex(v139 - 1, v138) );
        v139 = (*v138)--;
      if ( v139 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v135 + 12))(v135);
  v172 = v201;
  v173 = v202;
  if ( v202 )
    v140 = (unsigned int *)(v202 + 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 + 1, v140) );
      ++*v140;
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v172);
  v142 = v173;
  if ( v173 )
    v143 = (unsigned int *)(v173 + 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 == 1 )
      v145 = (unsigned int *)(v142 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v142 + 8))(v142);
          v146 = __ldrex(v145);
        while ( __strex(v146 - 1, v145) );
        v146 = (*v145)--;
      if ( v146 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v142 + 12))(v142);
  if ( ContainerManagerModel::isCreativeMode(v1) )
    v147 = 0;
    v147 = *v170;
    if ( *v170 )
      v147 = 1;
  CraftingContainerManagerModel::setIsFiltering(v1, v147);
  v148 = (MinecraftEventing *)ContainerManagerModel::getPlayer(v1);
  v150 = (Player *)*((_BYTE *)v1 + 80);
    v150 = (Player *)2;
  MinecraftEventing::fireEventCraftingSessionStart(v148, v150, v149);
  result = RecipeIngredientSet::empty((CraftingContainerManagerModel *)((char *)v1 + 184));
  if ( !result )
    v152 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v1 + 22) + 36))();
    RecipeIngredientSet::add((int)v1 + 184, v152);
    v153 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v1 + 24) + 36))();
    RecipeIngredientSet::add((int)v1 + 184, v153);
    v154 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v1 + 26) + 36))();
    result = RecipeIngredientSet::add((int)v1 + 184, v154);
  v155 = v202;
    v156 = (unsigned int *)(v202 + 4);
        result = __ldrex(v156);
      while ( __strex(result - 1, v156) );
      result = (*v156)--;
    if ( result == 1 )
      v157 = (unsigned int *)(v155 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v155 + 8))(v155);
          result = __ldrex(v157);
        while ( __strex(result - 1, v157) );
        result = (*v157)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v155 + 12))(v155);
  v158 = v206;
    v159 = (unsigned int *)(v206 + 4);
        result = __ldrex(v159);
      while ( __strex(result - 1, v159) );
      result = (*v159)--;
      v160 = (unsigned int *)(v158 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v158 + 8))(v158);
          result = __ldrex(v160);
        while ( __strex(result - 1, v160) );
        result = (*v160)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v158 + 12))(v158);
  v161 = v210;
    v162 = (unsigned int *)(v210 + 4);
        result = __ldrex(v162);
      while ( __strex(result - 1, v162) );
      result = (*v162)--;
      v163 = (unsigned int *)(v161 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v161 + 8))(v161);
          result = __ldrex(v163);
        while ( __strex(result - 1, v163) );
        result = (*v163)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v161 + 12))(v161);
  v164 = v214;
    v165 = (unsigned int *)(v214 + 4);
        result = __ldrex(v165);
      while ( __strex(result - 1, v165) );
      result = (*v165)--;
      v166 = (unsigned int *)(v164 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v164 + 8))(v164);
          result = __ldrex(v166);
        while ( __strex(result - 1, v166) );
        result = (*v166)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v164 + 12))(v164);
  v167 = v218;
    v168 = (unsigned int *)(v218 + 4);
        result = __ldrex(v168);
      while ( __strex(result - 1, v168) );
      result = (*v168)--;
      v169 = (unsigned int *)(v167 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v167 + 8))(v167);
          result = __ldrex(v169);
        while ( __strex(result - 1, v169) );
        result = (*v169)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v167 + 12))(v167);
  if ( (_DWORD)v221 )
    result = ((int (*)(void))v221)();
  return result;
}


signed int __fastcall CraftingContainerManagerModel::hasIngredientSetChanged(CraftingContainerManagerModel *this, const ItemInstance *a2)
{
  CraftingContainerManagerModel *v2; // r4@1
  const ItemInstance *v3; // r5@1
  _QWORD *v4; // r0@1
  _QWORD *v5; // r0@1
  _QWORD *v6; // r0@1
  unsigned __int64 *v7; // r5@1
  signed int v8; // r4@1
  char v10; // [sp+4h] [bp-2Ch]@1

  v2 = this;
  v3 = (CraftingContainerManagerModel *)((char *)this + 112);
  ItemInstance::operator=((int)this + 112, (int)a2);
  RecipeIngredientSet::RecipeIngredientSet((RecipeIngredientSet *)&v10);
  v4 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v2 + 22) + 36))();
  RecipeIngredientSet::add((int)&v10, v4);
  v5 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v2 + 24) + 36))();
  RecipeIngredientSet::add((int)&v10, v5);
  v6 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v2 + 26) + 36))();
  RecipeIngredientSet::add((int)&v10, v6);
  RecipeIngredientSet::add((RecipeIngredientSet *)&v10, v3);
  v7 = (unsigned __int64 *)((char *)v2 + 184);
  v8 = RecipeIngredientSet::operator!=((int)&v10, (int)v2 + 184);
  std::_Hashtable<int,std::pair<int const,int>,std::allocator<std::pair<int const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::operator=(
    v7,
    (int)&v10);
  RecipeIngredientSet::~RecipeIngredientSet((RecipeIngredientSet *)&v10);
  return v8;
}


void *__fastcall CraftingContainerManagerModel::getSlot(CraftingContainerManagerModel *this, int a2)
{
  return &ItemInstance::EMPTY_ITEM;
}


signed int __fastcall CraftingContainerManagerModel::_filterByText(CraftingContainerManagerModel *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  signed int v3; // r5@5
  void *v4; // r0@10
  void *v5; // r0@14
  void *v6; // r0@17
  void *v7; // r0@18
  _BYTE *v8; // r0@19
  unsigned int *v10; // r2@21
  signed int v11; // r1@23
  unsigned int *v12; // r12@29
  signed int v13; // r1@31
  unsigned int *v14; // r12@33
  signed int v15; // r1@35
  unsigned int *v16; // r2@44
  signed int v17; // r1@46
  unsigned int *v18; // r12@48
  signed int v19; // r1@50
  unsigned int v20; // [sp+0h] [bp-28h]@14
  int v21; // [sp+4h] [bp-24h]@14
  unsigned int v22; // [sp+8h] [bp-20h]@10
  int v23; // [sp+Ch] [bp-1Ch]@10
  _BYTE *v24; // [sp+10h] [bp-18h]@1

  v2 = a2;
  Util::toLower((void **)&v24, *(_DWORD *)(*((_DWORD *)this + 21) - 12), *((_DWORD *)this + 21));
  if ( *((_DWORD *)v24 - 3) )
  {
    if ( *((_BYTE *)v2 + 15) )
    {
      if ( *(_DWORD *)v2 )
      {
        if ( ItemInstance::isNull(v2) )
        {
          v3 = 3;
        }
        else if ( *((_BYTE *)v2 + 14) )
          ItemInstance::getName((ItemInstance *)&v22, (int)v2);
          Util::toLower((void **)&v23, *(_DWORD *)(v22 - 12), v22);
          v4 = (void *)(v22 - 12);
          if ( (int *)(v22 - 12) != &dword_28898C0 )
          {
            v12 = (unsigned int *)(v22 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            }
            else
              v13 = (*v12)--;
            if ( v13 <= 0 )
              j_j_j_j__ZdlPv_9(v4);
          }
          if ( sub_21E76A0(&v23, v24, 0, *((_DWORD *)v24 - 3)) == -1 )
            ItemInstance::getEffectName((ItemInstance *)&v20, (int *)v2);
            Util::toLower((void **)&v21, *(_DWORD *)(v20 - 12), v20);
            v5 = (void *)(v20 - 12);
            if ( (int *)(v20 - 12) != &dword_28898C0 )
              v16 = (unsigned int *)(v20 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
              }
              else
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j__ZdlPv_9(v5);
            v3 = 3;
            if ( sub_21E76A0(&v21, v24, 0, *((_DWORD *)v24 - 3)) != -1 )
              v3 = 1;
            v6 = (void *)(v21 - 12);
            if ( (int *)(v21 - 12) != &dword_28898C0 )
              v18 = (unsigned int *)(v21 - 4);
                  v19 = __ldrex(v18);
                while ( __strex(v19 - 1, v18) );
                v19 = (*v18)--;
              if ( v19 <= 0 )
                j_j_j_j__ZdlPv_9(v6);
          else
            v3 = 1;
          v7 = (void *)(v23 - 12);
          if ( (int *)(v23 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v23 - 4);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v7);
        else
      }
      else
        v3 = 3;
    }
    else
      v3 = 3;
  }
  else
    v3 = 1;
  v8 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v3;
}


signed int __fastcall CraftingContainerManagerModel::setLastCraftedItem(CraftingContainerManagerModel *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r8@1
  int v3; // r11@1
  unsigned __int64 *v4; // r9@1
  int v5; // r0@1
  int v6; // r4@2
  int v7; // r5@2
  bool v8; // zf@3
  int v9; // r6@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  int v12; // r10@14
  __int64 v13; // kr00_8@14
  unsigned int *v14; // r1@15
  unsigned int v15; // r2@17
  int v16; // r11@20
  int v17; // r0@20
  int v18; // r7@21
  int v19; // r6@21
  bool v20; // zf@22
  int v21; // r4@25
  bool v22; // zf@28
  _DWORD *v23; // r0@32
  __int64 v24; // kr08_8@33
  unsigned int *v25; // r0@35
  unsigned int v26; // r1@37
  unsigned int *v27; // r1@41
  unsigned int v28; // r0@43
  unsigned int *v29; // r4@47
  unsigned int v30; // r0@49
  int v31; // r11@55
  int v32; // r0@55
  int v33; // r7@56
  int v34; // r6@56
  bool v35; // zf@57
  int v36; // r4@60
  bool v37; // zf@63
  _DWORD *v38; // r0@67
  __int64 v39; // kr10_8@68
  unsigned int *v40; // r0@70
  unsigned int v41; // r1@72
  unsigned int *v42; // r1@76
  unsigned int v43; // r0@78
  unsigned int *v44; // r4@82
  unsigned int v45; // r0@84
  int v46; // r11@90
  int v47; // r0@90
  int v48; // r7@91
  int v49; // r6@91
  bool v50; // zf@92
  int v51; // r4@95
  bool v52; // zf@98
  _DWORD *v53; // r0@102
  __int64 v54; // kr18_8@103
  unsigned int *v55; // r0@105
  unsigned int v56; // r1@107
  unsigned int *v57; // r1@111
  unsigned int v58; // r0@113
  unsigned int *v59; // r4@117
  unsigned int v60; // r0@119
  int v61; // r11@125
  int v62; // r0@125
  int v63; // r7@126
  int v64; // r6@126
  bool v65; // zf@127
  int v66; // r4@130
  bool v67; // zf@133
  _DWORD *v68; // r0@137
  __int64 v69; // kr20_8@138
  unsigned int *v70; // r0@140
  unsigned int v71; // r1@142
  unsigned int *v72; // r1@146
  unsigned int v73; // r0@148
  unsigned int *v74; // r4@152
  unsigned int v75; // r0@154
  signed int v76; // r5@160
  unsigned int *v77; // r1@161
  unsigned int v78; // r0@163
  unsigned int *v79; // r4@167
  unsigned int v80; // r0@169

  v2 = a2;
  v3 = 0xFu % dword_27FA458;
  v4 = (unsigned __int64 *)((char *)this + 40);
  v5 = *(_DWORD *)(dword_27FA454 + 4 * (0xFu % dword_27FA458));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 15;
    if ( v7 == 15 )
      v8 = *(_DWORD *)(v6 + 4) == 15;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27FA458 == v3 )
        continue;
    }
  }
  v10 = v5 == 0;
  if ( v5 )
    v5 = *(_DWORD *)v5;
    v10 = v5 == 0;
  if ( v10 )
LABEL_13:
    v11 = operator new(0x10u);
    *v11 = 0;
    v11[1] = 15;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA454,
           v3,
           0xFu,
           (int)v11);
  v13 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     v4,
                     (int **)(v5 + 8));
  v12 = HIDWORD(v13);
  if ( HIDWORD(v13) )
    v14 = (unsigned int *)(HIDWORD(v13) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
    else
      ++*v14;
  FilteredContainerModel::setLastCraftedItem((FilteredContainerModel *)v13, v2);
  v16 = 0xCu % dword_27FA458;
  v17 = *(_DWORD *)(dword_27FA454 + 4 * (0xCu % dword_27FA458));
  if ( !v17 )
    goto LABEL_32;
  v18 = *(_DWORD *)v17;
  v19 = *(_DWORD *)(*(_DWORD *)v17 + 12);
    v20 = v19 == 12;
    if ( v19 == 12 )
      v20 = *(_DWORD *)(v18 + 4) == 12;
    if ( v20 )
    v21 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 )
      v19 = *(_DWORD *)(v21 + 12);
      v17 = v18;
      v18 = *(_DWORD *)v18;
      if ( *(_DWORD *)(v21 + 12) % (unsigned int)dword_27FA458 == v16 )
  v22 = v17 == 0;
  if ( v17 )
    v17 = *(_DWORD *)v17;
    v22 = v17 == 0;
  if ( v22 )
LABEL_32:
    v23 = operator new(0x10u);
    *v23 = 0;
    v23[1] = 12;
    v23[2] = &unk_28898CC;
    v17 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA454,
            v16,
            0xCu,
            (int)v23);
  v24 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v17 + 8));
  if ( HIDWORD(v24) != HIDWORD(v13) )
    if ( HIDWORD(v24) )
      v25 = (unsigned int *)(HIDWORD(v24) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 + 1, v25) );
      }
      else
        ++*v25;
    if ( HIDWORD(v13) )
      v27 = (unsigned int *)(HIDWORD(v13) + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(HIDWORD(v13) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 8))(HIDWORD(v13));
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 12))(HIDWORD(v13));
    v12 = HIDWORD(v24);
  FilteredContainerModel::setLastCraftedItem((FilteredContainerModel *)v24, v2);
  v31 = 0x11u % dword_27FA458;
  v32 = *(_DWORD *)(dword_27FA454 + 4 * (0x11u % dword_27FA458));
  if ( !v32 )
    goto LABEL_67;
  v33 = *(_DWORD *)v32;
  v34 = *(_DWORD *)(*(_DWORD *)v32 + 12);
    v35 = v34 == 17;
    if ( v34 == 17 )
      v35 = *(_DWORD *)(v33 + 4) == 17;
    if ( v35 )
    v36 = *(_DWORD *)v33;
    if ( *(_DWORD *)v33 )
      v34 = *(_DWORD *)(v36 + 12);
      v32 = v33;
      v33 = *(_DWORD *)v33;
      if ( *(_DWORD *)(v36 + 12) % (unsigned int)dword_27FA458 == v31 )
  v37 = v32 == 0;
  if ( v32 )
    v32 = *(_DWORD *)v32;
    v37 = v32 == 0;
  if ( v37 )
LABEL_67:
    v38 = operator new(0x10u);
    *v38 = 0;
    v38[1] = 17;
    v38[2] = &unk_28898CC;
    v32 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v31,
            0x11u,
            (int)v38);
  v39 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v32 + 8));
  if ( HIDWORD(v39) != v12 )
    if ( HIDWORD(v39) )
      v40 = (unsigned int *)(HIDWORD(v39) + 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 + 1, v40) );
        ++*v40;
    if ( v12 )
      v42 = (unsigned int *)(v12 + 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        v44 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v12 = HIDWORD(v39);
  FilteredContainerModel::setLastCraftedItem((FilteredContainerModel *)v39, v2);
  v46 = 0xEu % dword_27FA458;
  v47 = *(_DWORD *)(dword_27FA454 + 4 * (0xEu % dword_27FA458));
  if ( !v47 )
    goto LABEL_102;
  v48 = *(_DWORD *)v47;
  v49 = *(_DWORD *)(*(_DWORD *)v47 + 12);
    v50 = v49 == 14;
    if ( v49 == 14 )
      v50 = *(_DWORD *)(v48 + 4) == 14;
    if ( v50 )
    v51 = *(_DWORD *)v48;
    if ( *(_DWORD *)v48 )
      v49 = *(_DWORD *)(v51 + 12);
      v47 = v48;
      v48 = *(_DWORD *)v48;
      if ( *(_DWORD *)(v51 + 12) % (unsigned int)dword_27FA458 == v46 )
  v52 = v47 == 0;
  if ( v47 )
    v47 = *(_DWORD *)v47;
    v52 = v47 == 0;
  if ( v52 )
LABEL_102:
    v53 = operator new(0x10u);
    *v53 = 0;
    v53[1] = 14;
    v53[2] = &unk_28898CC;
    v47 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v46,
            0xEu,
            (int)v53);
  v54 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v47 + 8));
  if ( HIDWORD(v54) != v12 )
    if ( HIDWORD(v54) )
      v55 = (unsigned int *)(HIDWORD(v54) + 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 + 1, v55) );
        ++*v55;
      v57 = (unsigned int *)(v12 + 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        v59 = (unsigned int *)(v12 + 8);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 == 1 )
    v12 = HIDWORD(v54);
  FilteredContainerModel::setLastCraftedItem((FilteredContainerModel *)v54, v2);
  v61 = 0xDu % dword_27FA458;
  v62 = *(_DWORD *)(dword_27FA454 + 4 * (0xDu % dword_27FA458));
  if ( !v62 )
    goto LABEL_137;
  v63 = *(_DWORD *)v62;
  v64 = *(_DWORD *)(*(_DWORD *)v62 + 12);
    v65 = v64 == 13;
    if ( v64 == 13 )
      v65 = *(_DWORD *)(v63 + 4) == 13;
    if ( v65 )
    v66 = *(_DWORD *)v63;
    if ( *(_DWORD *)v63 )
      v64 = *(_DWORD *)(v66 + 12);
      v62 = v63;
      v63 = *(_DWORD *)v63;
      if ( *(_DWORD *)(v66 + 12) % (unsigned int)dword_27FA458 == v61 )
  v67 = v62 == 0;
  if ( v62 )
    v62 = *(_DWORD *)v62;
    v67 = v62 == 0;
  if ( v67 )
LABEL_137:
    v68 = operator new(0x10u);
    *v68 = 0;
    v68[1] = 13;
    v68[2] = &unk_28898CC;
    v62 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v61,
            0xDu,
            (int)v68);
  v69 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v62 + 8));
  if ( HIDWORD(v69) != v12 )
    if ( HIDWORD(v69) )
      v70 = (unsigned int *)(HIDWORD(v69) + 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 + 1, v70) );
        ++*v70;
      v72 = (unsigned int *)(v12 + 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 == 1 )
        v74 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 8))(v12);
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
          v75 = (*v74)--;
        if ( v75 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 12))(v12);
    v12 = HIDWORD(v69);
  v76 = FilteredContainerModel::setLastCraftedItem((FilteredContainerModel *)v69, v2);
  if ( v12 )
    v77 = (unsigned int *)(v12 + 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 == 1 )
      v79 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 8))(v12);
          v80 = __ldrex(v79);
        while ( __strex(v80 - 1, v79) );
        v80 = (*v79)--;
      if ( v80 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 12))(v12);
  return v76;
}


signed int __fastcall CraftingContainerManagerModel::_validCraftingSize(CraftingContainerManagerModel *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  CraftingContainerManagerModel *v3; // r4@1
  Recipes *v4; // r0@1
  int v5; // r0@1
  int v6; // r0@2
  bool v7; // zf@2
  signed int result; // r0@7

  v2 = a2;
  v3 = this;
  v4 = Recipes::getInstance(this);
  v5 = Recipes::getRecipeFor(v4, v2);
  if ( !v5 )
    goto LABEL_11;
  v6 = (*(int (**)(void))(*(_DWORD *)v5 + 12))();
  v7 = v6 == 1;
  if ( v6 == 1 )
    v7 = *((_BYTE *)v3 + 80) == 0;
  if ( v7 && ContainerManagerModel::isCreativeMode(v3) != 1 )
LABEL_11:
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall CraftingContainerManagerModel::getItems(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall CraftingContainerManagerModel::~CraftingContainerManagerModel(CraftingContainerManagerModel *this)
{
  CraftingContainerManagerModel *v1; // r0@1

  v1 = CraftingContainerManagerModel::~CraftingContainerManagerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall CraftingContainerManagerModel::setIsFiltering(CraftingContainerManagerModel *this, bool a2)
{
  CraftingContainerManagerModel *v2; // r10@1
  _DWORD *v3; // r0@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  _DWORD *v6; // r0@1
  __int64 v7; // r2@1
  int v8; // r8@1
  int v9; // r0@1
  int v10; // r4@2
  int v11; // r7@2
  bool v12; // zf@3
  int v13; // r5@6
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  int v16; // r11@14
  __int64 v17; // kr00_8@14
  unsigned int *v18; // r0@15
  unsigned int v19; // r1@17
  int v20; // r9@24
  int v21; // r0@24
  int v22; // r6@25
  int v23; // r5@25
  bool v24; // zf@26
  int v25; // r4@29
  bool v26; // zf@32
  _DWORD *v27; // r0@36
  __int64 v28; // kr08_8@37
  unsigned int *v29; // r0@39
  unsigned int v30; // r1@41
  unsigned int *v31; // r1@45
  unsigned int v32; // r0@47
  unsigned int *v33; // r4@51
  unsigned int v34; // r0@53
  int v35; // r1@59
  int *v36; // r9@59
  int *v37; // r7@59
  void (__fastcall *v38)(char *, int *, signed int); // r3@61
  int v39; // r6@65
  int v40; // r0@65
  int v41; // r8@66
  int v42; // r5@66
  bool v43; // zf@67
  int v44; // r4@70
  bool v45; // zf@73
  _DWORD *v46; // r0@77
  __int64 v47; // kr10_8@78
  unsigned int *v48; // r0@80
  unsigned int v49; // r1@82
  unsigned int *v50; // r1@86
  unsigned int v51; // r0@88
  unsigned int *v52; // r4@92
  unsigned int v53; // r0@94
  int v54; // r1@100
  int *v55; // r7@100
  void (__fastcall *v56)(char *, int *, signed int); // r3@102
  int v57; // r8@106
  int v58; // r0@106
  int v59; // r6@107
  int v60; // r5@107
  bool v61; // zf@108
  int v62; // r4@111
  bool v63; // zf@114
  _DWORD *v64; // r0@118
  __int64 v65; // kr18_8@119
  unsigned int *v66; // r0@121
  unsigned int v67; // r1@123
  unsigned int *v68; // r1@127
  unsigned int v69; // r0@129
  unsigned int *v70; // r4@133
  unsigned int v71; // r0@135
  int v72; // r1@141
  int *v73; // r7@141
  void (__fastcall *v74)(char *, int *, signed int); // r3@143
  int v75; // r8@147
  int v76; // r0@147
  int v77; // r6@148
  int v78; // r5@148
  bool v79; // zf@149
  int v80; // r4@152
  bool v81; // zf@155
  _DWORD *v82; // r0@159
  __int64 v83; // kr20_8@160
  unsigned int *v84; // r0@162
  unsigned int v85; // r1@164
  unsigned int *v86; // r1@168
  unsigned int v87; // r0@170
  unsigned int *v88; // r4@174
  unsigned int v89; // r0@176
  int v90; // r1@182
  void (__fastcall *v91)(char *, int *, signed int); // r3@184
  int result; // r0@188
  unsigned int *v93; // r1@189
  unsigned int *v94; // r4@195
  unsigned __int64 *v95; // [sp+0h] [bp-A8h]@14
  char v96; // [sp+4h] [bp-A4h]@185
  void (*v97)(void); // [sp+Ch] [bp-9Ch]@182
  int v98; // [sp+10h] [bp-98h]@185
  char v99; // [sp+14h] [bp-94h]@144
  void (*v100)(void); // [sp+1Ch] [bp-8Ch]@141
  int v101; // [sp+20h] [bp-88h]@144
  char v102; // [sp+24h] [bp-84h]@103
  void (*v103)(void); // [sp+2Ch] [bp-7Ch]@100
  int v104; // [sp+30h] [bp-78h]@103
  char v105; // [sp+34h] [bp-74h]@62
  void (*v106)(void); // [sp+3Ch] [bp-6Ch]@59
  int v107; // [sp+40h] [bp-68h]@62
  char v108; // [sp+44h] [bp-64h]@21
  void (__cdecl *v109)(char *); // [sp+4Ch] [bp-5Ch]@20
  signed int (__fastcall *v110)(CraftingContainerManagerModel ***, const ItemInstance *); // [sp+50h] [bp-58h]@21
  _DWORD *v111; // [sp+54h] [bp-54h]@1
  __int64 v112; // [sp+5Ch] [bp-4Ch]@1
  _DWORD *v113; // [sp+64h] [bp-44h]@1
  __int64 v114; // [sp+6Ch] [bp-3Ch]@1
  _DWORD *v115; // [sp+74h] [bp-34h]@1
  void (__cdecl *v116)(char *); // [sp+7Ch] [bp-2Ch]@1
  signed int (__fastcall *v117)(CraftingContainerManagerModel ***, const ItemInstance *); // [sp+80h] [bp-28h]@1

  v2 = this;
  *((_BYTE *)this + 82) = a2;
  v3 = operator new(4u);
  *v3 = v2;
  v115 = v3;
  v116 = (void (__cdecl *)(char *))sub_169FADC;
  v117 = sub_169FA66;
  v4 = operator new(4u);
  LODWORD(v5) = sub_169FB1A;
  *v4 = v2;
  HIDWORD(v5) = sub_169FB12;
  v113 = v4;
  v114 = v5;
  v6 = operator new(4u);
  HIDWORD(v7) = sub_169FB50;
  *v6 = v2;
  v111 = v6;
  LODWORD(v7) = sub_169FC00;
  v112 = v7;
  v8 = 0xFu % dword_27FA458;
  v9 = *(_DWORD *)(dword_27FA454 + 4 * (0xFu % dword_27FA458));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 15;
    if ( v11 == 15 )
      v12 = *(_DWORD *)(v10 + 4) == 15;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27FA458 == v8 )
        continue;
    }
  }
  v14 = v9 == 0;
  if ( v9 )
    v9 = *(_DWORD *)v9;
    v14 = v9 == 0;
  if ( v14 )
LABEL_13:
    v15 = operator new(0x10u);
    *v15 = 0;
    v15[1] = 15;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FA454,
           v8,
           0xFu,
           (int)v15);
  v95 = (unsigned __int64 *)((char *)v2 + 40);
  v17 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (unsigned __int64 *)v2 + 5,
                     (int **)(v9 + 8));
  v16 = HIDWORD(v17);
  if ( HIDWORD(v17) )
    v18 = (unsigned int *)(HIDWORD(v17) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
    else
      ++*v18;
  v109 = 0;
  if ( v116 )
    ((void (__fastcall *)(char *, _DWORD **, signed int))v116)(&v108, &v115, 2);
    v110 = v117;
    v109 = v116;
  FilteredContainerModel::setFilteringRule(v17, (int)&v108);
  if ( v109 )
    v109(&v108);
  FilteredContainerModel::setFiltering((FilteredContainerModel *)v17, *((_BYTE *)v2 + 82));
  v20 = 0xCu % dword_27FA458;
  v21 = *(_DWORD *)(dword_27FA454 + 4 * (0xCu % dword_27FA458));
  if ( !v21 )
    goto LABEL_36;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 12;
    if ( v23 == 12 )
      v24 = *(_DWORD *)(v22 + 4) == 12;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27FA458 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_36:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 12;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27FA454,
            v20,
            0xCu,
            (int)v27);
  v28 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     v95,
                     (int **)(v21 + 8));
  if ( HIDWORD(v28) != HIDWORD(v17) )
    if ( HIDWORD(v28) )
      v29 = (unsigned int *)(HIDWORD(v28) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 + 1, v29) );
      }
      else
        ++*v29;
    if ( HIDWORD(v17) )
      v31 = (unsigned int *)(HIDWORD(v17) + 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        v33 = (unsigned int *)(HIDWORD(v17) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 8))(HIDWORD(v17));
        if ( &pthread_create )
        {
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        }
        else
          v34 = (*v33)--;
        if ( v34 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 12))(HIDWORD(v17));
    v16 = HIDWORD(v28);
  v35 = *((_BYTE *)v2 + 82);
  v36 = (int *)&v111;
  v106 = 0;
  v37 = (int *)&v111;
  if ( v35 )
    v37 = (int *)&v113;
  v38 = (void (__fastcall *)(char *, int *, signed int))v37[2];
  if ( v38 )
    v38(&v105, v37, 2);
    v107 = v37[3];
    v106 = (void (*)(void))v37[2];
  FilteredContainerModel::setFilteringRule(v28, (int)&v105);
  if ( v106 )
    v106();
  FilteredContainerModel::setFiltering((FilteredContainerModel *)v28, *((_BYTE *)v2 + 82));
  v39 = 0x11u % dword_27FA458;
  v40 = *(_DWORD *)(dword_27FA454 + 4 * (0x11u % dword_27FA458));
  if ( !v40 )
    goto LABEL_77;
  v41 = *(_DWORD *)v40;
  v42 = *(_DWORD *)(*(_DWORD *)v40 + 12);
    v43 = v42 == 17;
    if ( v42 == 17 )
      v43 = *(_DWORD *)(v41 + 4) == 17;
    if ( v43 )
    v44 = *(_DWORD *)v41;
    if ( *(_DWORD *)v41 )
      v42 = *(_DWORD *)(v44 + 12);
      v40 = v41;
      v41 = *(_DWORD *)v41;
      if ( *(_DWORD *)(v44 + 12) % (unsigned int)dword_27FA458 == v39 )
  v45 = v40 == 0;
  if ( v40 )
    v40 = *(_DWORD *)v40;
    v45 = v40 == 0;
  if ( v45 )
LABEL_77:
    v46 = operator new(0x10u);
    *v46 = 0;
    v46[1] = 17;
    v46[2] = &unk_28898CC;
    v40 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v39,
            0x11u,
            (int)v46);
  v47 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v40 + 8));
  if ( HIDWORD(v47) != v16 )
    if ( HIDWORD(v47) )
      v48 = (unsigned int *)(HIDWORD(v47) + 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 + 1, v48) );
        ++*v48;
    if ( v16 )
      v50 = (unsigned int *)(v16 + 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 == 1 )
        v52 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v16 = HIDWORD(v47);
  v54 = *((_BYTE *)v2 + 82);
  v103 = 0;
  v55 = (int *)&v111;
  if ( v54 )
    v55 = (int *)&v113;
  v56 = (void (__fastcall *)(char *, int *, signed int))v55[2];
  if ( v56 )
    v56(&v102, v55, 2);
    v104 = v55[3];
    v103 = (void (*)(void))v55[2];
  FilteredContainerModel::setFilteringRule(v47, (int)&v102);
  if ( v103 )
    v103();
  FilteredContainerModel::setFiltering((FilteredContainerModel *)v47, *((_BYTE *)v2 + 82));
  v57 = 0xEu % dword_27FA458;
  v58 = *(_DWORD *)(dword_27FA454 + 4 * (0xEu % dword_27FA458));
  if ( !v58 )
    goto LABEL_118;
  v59 = *(_DWORD *)v58;
  v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
    v61 = v60 == 14;
    if ( v60 == 14 )
      v61 = *(_DWORD *)(v59 + 4) == 14;
    if ( v61 )
    v62 = *(_DWORD *)v59;
    if ( *(_DWORD *)v59 )
      v60 = *(_DWORD *)(v62 + 12);
      v58 = v59;
      v59 = *(_DWORD *)v59;
      if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27FA458 == v57 )
  v63 = v58 == 0;
  if ( v58 )
    v58 = *(_DWORD *)v58;
    v63 = v58 == 0;
  if ( v63 )
LABEL_118:
    v64 = operator new(0x10u);
    *v64 = 0;
    v64[1] = 14;
    v64[2] = &unk_28898CC;
    v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v57,
            0xEu,
            (int)v64);
  v65 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v58 + 8));
  if ( HIDWORD(v65) != v16 )
    if ( HIDWORD(v65) )
      v66 = (unsigned int *)(HIDWORD(v65) + 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 + 1, v66) );
        ++*v66;
      v68 = (unsigned int *)(v16 + 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 == 1 )
        v70 = (unsigned int *)(v16 + 8);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 == 1 )
    v16 = HIDWORD(v65);
  v72 = *((_BYTE *)v2 + 82);
  v100 = 0;
  v73 = (int *)&v111;
  if ( v72 )
    v73 = (int *)&v113;
  v74 = (void (__fastcall *)(char *, int *, signed int))v73[2];
  if ( v74 )
    v74(&v99, v73, 2);
    v101 = v73[3];
    v100 = (void (*)(void))v73[2];
  FilteredContainerModel::setFilteringRule(v65, (int)&v99);
  if ( v100 )
    v100();
  FilteredContainerModel::setFiltering((FilteredContainerModel *)v65, *((_BYTE *)v2 + 82));
  v75 = 0xDu % dword_27FA458;
  v76 = *(_DWORD *)(dword_27FA454 + 4 * (0xDu % dword_27FA458));
  if ( !v76 )
    goto LABEL_159;
  v77 = *(_DWORD *)v76;
  v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
    v79 = v78 == 13;
    if ( v78 == 13 )
      v79 = *(_DWORD *)(v77 + 4) == 13;
    if ( v79 )
    v80 = *(_DWORD *)v77;
    if ( *(_DWORD *)v77 )
      v78 = *(_DWORD *)(v80 + 12);
      v76 = v77;
      v77 = *(_DWORD *)v77;
      if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27FA458 == v75 )
  v81 = v76 == 0;
  if ( v76 )
    v76 = *(_DWORD *)v76;
    v81 = v76 == 0;
  if ( v81 )
LABEL_159:
    v82 = operator new(0x10u);
    *v82 = 0;
    v82[1] = 13;
    v82[2] = &unk_28898CC;
    v76 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v75,
            0xDu,
            (int)v82);
  v83 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)(v76 + 8));
  if ( HIDWORD(v83) != v16 )
    if ( HIDWORD(v83) )
      v84 = (unsigned int *)(HIDWORD(v83) + 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 + 1, v84) );
        ++*v84;
      v86 = (unsigned int *)(v16 + 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 == 1 )
        v88 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v16 + 8))(v16);
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v89 = (*v88)--;
        if ( v89 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v16 + 12))(v16);
    v16 = HIDWORD(v83);
  v90 = *((_BYTE *)v2 + 82);
  v97 = 0;
  if ( v90 )
    v36 = (int *)&v113;
  v91 = (void (__fastcall *)(char *, int *, signed int))v36[2];
  if ( v91 )
    v91(&v96, v36, 2);
    v98 = v36[3];
    v97 = (void (*)(void))v36[2];
  FilteredContainerModel::setFilteringRule(v83, (int)&v96);
  if ( v97 )
    v97();
  result = FilteredContainerModel::setFiltering((FilteredContainerModel *)v83, *((_BYTE *)v2 + 82));
  if ( v16 )
    v93 = (unsigned int *)(v16 + 4);
        result = __ldrex(v93);
      while ( __strex(result - 1, v93) );
      result = (*v93)--;
    if ( result == 1 )
      v94 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v94);
        while ( __strex(result - 1, v94) );
        result = (*v94)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  if ( (_DWORD)v112 )
    result = ((int (*)(void))v112)();
  if ( (_DWORD)v114 )
    result = ((int (*)(void))v114)();
    result = ((int (*)(void))v116)();
  return result;
}


signed int __fastcall CraftingContainerManagerModel::_filterByInventory(CraftingContainerManagerModel *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  CraftingContainerManagerModel *v3; // r4@1
  bool v4; // zf@1
  Recipes *v5; // r0@6
  char *v6; // r9@6
  char *v7; // r11@6
  ItemPack *v8; // r10@7
  signed int v9; // r5@7
  int v10; // r6@7
  int v11; // r0@8
  bool v12; // zf@8
  unsigned __int64 *v13; // r8@11
  int v14; // r0@11
  void *v15; // r5@11
  int v16; // r6@11
  signed int v17; // r7@12
  const ItemInstance *v18; // r2@12
  int v19; // r10@13
  int v20; // r0@13
  int v21; // r5@13
  int v22; // r8@14
  int v23; // r9@14
  int v24; // r5@21 OVERLAPPED
  int v25; // r6@21 OVERLAPPED
  int v26; // r5@25 OVERLAPPED
  int v27; // r6@25 OVERLAPPED
  char v28; // r1@31
  signed int v29; // r0@31
  signed int v30; // r8@36
  void *v31; // r0@39
  void *v32; // r0@41
  int v33; // r0@43
  int v35; // r0@56
  int v36; // r4@56
  char *v37; // [sp+0h] [bp-60h]@12
  unsigned __int64 *v38; // [sp+4h] [bp-5Ch]@14
  int v39; // [sp+8h] [bp-58h]@12
  int v40; // [sp+10h] [bp-50h]@13
  const ItemInstance *v41; // [sp+14h] [bp-4Ch]@13
  _QWORD *v42; // [sp+18h] [bp-48h]@11
  _QWORD *v43; // [sp+1Ch] [bp-44h]@11
  __int64 v44; // [sp+20h] [bp-40h]@7
  void *ptr; // [sp+28h] [bp-38h]@11
  void *v46; // [sp+30h] [bp-30h]@6
  char *v47; // [sp+34h] [bp-2Ch]@6

  v2 = a2;
  v3 = this;
  v4 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( v4 || ItemInstance::isNull(a2) || !*((_BYTE *)v2 + 14) )
  {
    v9 = 3;
  }
  else
    v5 = Recipes::getInstance((Recipes *)*((_BYTE *)v2 + 14));
    Recipes::getAllRecipesFor((Recipes *)&v46, v5, v2);
    v6 = v47;
    v7 = (char *)v46;
    if ( v46 != v47 )
    {
      v8 = (ItemPack *)((char *)&v44 + 4);
      v9 = 1;
      v10 = 0;
      while ( 1 )
      {
        v11 = (*(int (**)(void))(**(_DWORD **)v7 + 12))();
        v12 = v11 == 1;
        if ( v11 == 1 )
          v12 = *((_BYTE *)v3 + 80) == 0;
        if ( !v12 )
        {
          v13 = (unsigned __int64 *)(*(int (**)(void))(**((_DWORD **)v3 + 24) + 36))();
          v43 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v3 + 26) + 36))();
          v42 = (_QWORD *)(*(int (**)(void))(**((_DWORD **)v3 + 22) + 36))();
          v14 = (*(int (**)(void))(**(_DWORD **)v7 + 40))();
          ItemPack::getItemInstances(v8, v14);
          v15 = ptr;
          v16 = HIDWORD(v44);
          if ( (signed int)ptr - HIDWORD(v44) < 1 )
          {
            v30 = 1;
            LOBYTE(v44) = 0;
          }
          else
            v17 = 1;
            v18 = 0;
            v37 = v6;
            v39 = 954437177 * (((signed int)ptr - HIDWORD(v44)) >> 3);
            do
            {
              v19 = 9 * (_DWORD)v18;
              v41 = v18;
              v20 = *v13 >> 32;
              v21 = *v13;
              v40 = *(_BYTE *)(v16 + 72 * (_DWORD)v18 + 14);
              if ( v21 == v20 )
              {
                v23 = 0;
              }
              else
                v38 = v13;
                v22 = v20 - 72;
                while ( 1 )
                {
                  if ( Recipe::itemsMatch((Recipe *)v21, (const ItemInstance *)(v16 + 8 * v19), v18) == 1 )
                    v23 += *(_BYTE *)(v21 + 14);
                  if ( v22 == v21 )
                    break;
                  v21 += 72;
                  v16 = HIDWORD(v44);
                }
                v13 = v38;
              for ( *(_QWORD *)&v24 = *v43; v25 != v24; v24 += 72 )
                if ( Recipe::itemsMatch((Recipe *)v24, (const ItemInstance *)(HIDWORD(v44) + 8 * v19), v18) == 1 )
                  v23 += *(_BYTE *)(v24 + 14);
              for ( *(_QWORD *)&v26 = *v42; v27 != v26; v26 += 72 )
                if ( Recipe::itemsMatch((Recipe *)v26, (const ItemInstance *)(HIDWORD(v44) + 8 * v19), v18) == 1 )
                  v23 += *(_BYTE *)(v26 + 14);
              if ( Recipe::itemsMatch(
                     (CraftingContainerManagerModel *)((char *)v3 + 112),
                     (const ItemInstance *)(HIDWORD(v44) + 8 * v19),
                     v18) == 1 )
                v23 += *((_BYTE *)v3 + 126);
              v16 = HIDWORD(v44);
              v28 = v44;
              v18 = (const ItemInstance *)((char *)v41 + 1);
              v29 = 0;
              if ( v23 >= v40 )
                v29 = 1;
              v17 &= v29;
              if ( v23 > 0 )
                v28 = 1;
            }
            while ( (signed int)v18 < v39 );
            v15 = ptr;
            v8 = (ItemPack *)((char *)&v44 + 4);
            v6 = v37;
            v30 = v17;
            LOBYTE(v44) = v28;
          if ( (void *)v16 != v15 )
              v31 = *(void **)(v16 + 52);
              if ( v31 )
                operator delete(v31);
              v32 = *(void **)(v16 + 36);
              if ( v32 )
                operator delete(v32);
              v33 = *(_DWORD *)(v16 + 8);
              if ( v33 )
                (*(void (**)(void))(*(_DWORD *)v33 + 4))();
              *(_DWORD *)(v16 + 8) = 0;
              v16 += 72;
            while ( v15 != (void *)v16 );
            v15 = (void *)HIDWORD(v44);
          if ( v15 )
            operator delete(v15);
          v9 = 0;
          if ( v30 )
            v36 = 1;
            goto LABEL_58;
          v10 = v44 & 1;
        }
        v7 += 4;
        if ( v7 == v6 )
          goto LABEL_56;
      }
    }
    v10 = 0;
    v9 = 1;
LABEL_56:
    v35 = v10 ^ 1 | v9;
    v9 = 2;
    v36 = ~v35 & 1;
    if ( v35 & 1 )
      v9 = 0;
LABEL_58:
    if ( v46 )
      operator delete(v46);
    if ( !v36 )
      v9 = 3;
  return v9;
}


int __fastcall CraftingContainerManagerModel::fireItemCraftedEvent(CraftingContainerManagerModel *this, const ItemInstance *a2, bool a3, bool a4, int a5, int a6, int a7, int a8, bool a9)
{
  bool v9; // r4@1
  bool v10; // r5@1
  Player *v11; // r6@1
  MinecraftEventing *v12; // r0@1
  bool v14; // [sp+18h] [bp-10h]@0

  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = (MinecraftEventing *)ContainerManagerModel::getPlayer(this);
  return MinecraftEventing::fireEventItemCrafted(v12, v11, (const ItemInstance *)1, v10, v9, a5, a6, a7, a8, a9, v14);
}


char *__fastcall CraftingContainerManagerModel::getCursorSelectedItem(CraftingContainerManagerModel *this)
{
  return (char *)this + 112;
}


int __fastcall CraftingContainerManagerModel::sendCraftedPacket(CraftingContainerManagerModel *this, CraftingEventPacket *a2)
{
  Level *v2; // r0@1
  int v3; // r0@1

  v2 = (Level *)Entity::getLevel(*((Entity **)this + 1));
  v3 = Level::getPacketSender(v2);
  return (*(int (**)(void))(*(_DWORD *)v3 + 8))();
}
