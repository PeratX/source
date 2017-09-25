

int __fastcall CauldronBlock::spawnBubbleParticles(int result, Level *a2, const Vec3 *a3, Random *a4, int a5, int a6)
{
  int v6; // r7@1
  Level *v8; // r5@1
  char *v13; // r0@3
  char *v15; // r0@3
  float v17; // [sp+Ch] [bp-54h]@3

  v6 = a5;
  _R4 = a2;
  v8 = (Level *)result;
  if ( a5 >= 1 )
  {
    __asm
    {
      VLDR            D8, =2.32830644e-10
      VLDR            S18, =-0.35
      VLDR            S20, =0.7
      VLDR            S22, =-0.15
    }
    do
      v13 = Level::getRandom(v8);
      _R0 = Random::_genRandInt32((Random *)v13);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D12, S0
      }
      v15 = Level::getRandom(v8);
      _R0 = Random::_genRandInt32((Random *)v15);
        VMUL.F64        D1, D12, D8
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S0, D0
        VLDR            S4, [R4]
        VMUL.F32        S2, S2, S20
        VLDR            S8, [R4,#8]
        VMUL.F32        S0, S0, S20
        VADD.F32        S4, S4, S18
        VLDR            S6, [R4,#4]
        VADD.F32        S8, S8, S18
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S6, S22
        VADD.F32        S0, S8, S0
        VSTR            S2, [SP,#0x60+var_54]
        VSTR            S4, [SP,#0x60+var_50]
        VSTR            S0, [SP,#0x60+var_4C]
      result = Level::addParticle((int)v8, 1, (int)&v17);
      --v6;
    while ( v6 );
  }
  return result;
}


int __fastcall CauldronBlock::getComparatorSignal(CauldronBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  unsigned __int64 *v5; // r0@1

  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 16);
  return (signed int)(((0xFu >> (4 - (*v5 >> 32))) & ((unsigned __int8)a5 >> (*v5 + 1 - (*v5 >> 32)))) + 1) / 2;
}


signed int __fastcall CauldronBlock::isInteractiveBlock(CauldronBlock *this)
{
  return 1;
}


signed int __fastcall CauldronBlock::addAABBs(int a1, int a2, int a3, AABB *a4, int a5)
{
  int v5; // r11@1
  int v6; // r6@1
  AABB *v7; // r9@1
  AABB *v8; // r0@1
  AABB *v9; // r0@1
  AABB *v10; // r0@1
  AABB *v11; // r0@1
  AABB *v12; // r0@1
  int v14; // [sp+0h] [bp-B8h]@1
  int v15; // [sp+Ch] [bp-ACh]@1
  int v16; // [sp+10h] [bp-A8h]@1
  int v17; // [sp+14h] [bp-A4h]@1
  char v18; // [sp+18h] [bp-A0h]@1
  int v19; // [sp+24h] [bp-94h]@1
  int v20; // [sp+28h] [bp-90h]@1
  int v21; // [sp+2Ch] [bp-8Ch]@1
  char v22; // [sp+30h] [bp-88h]@1
  int v23; // [sp+3Ch] [bp-7Ch]@1
  signed int v24; // [sp+40h] [bp-78h]@1
  int v25; // [sp+44h] [bp-74h]@1
  char v26; // [sp+48h] [bp-70h]@1
  int v27; // [sp+54h] [bp-64h]@1
  signed int v28; // [sp+58h] [bp-60h]@1
  int v29; // [sp+5Ch] [bp-5Ch]@1
  char v30; // [sp+60h] [bp-58h]@1
  int v31; // [sp+6Ch] [bp-4Ch]@1
  signed int v32; // [sp+70h] [bp-48h]@1
  signed int v33; // [sp+74h] [bp-44h]@1
  char v34; // [sp+78h] [bp-40h]@1

  v5 = a1;
  v6 = a3;
  v31 = 1065353216;
  v32 = 1050673152;
  v33 = 1065353216;
  v7 = a4;
  AABB::AABB((int)&v34, (int)&Vec3::ZERO, (int)&v31);
  Vec3::Vec3((int)&v30, v6);
  v8 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v30);
  Block::addAABB(v5, v8, v7, a5);
  v27 = 1040187392;
  v28 = 1065353216;
  v29 = 1065353216;
  AABB::set((AABB *)&v34, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v27);
  Vec3::Vec3((int)&v26, v6);
  v9 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v26);
  Block::addAABB(v5, v9, v7, a5);
  v23 = 1065353216;
  v24 = 1065353216;
  v25 = 1040187392;
  AABB::set((AABB *)&v34, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v23);
  Vec3::Vec3((int)&v22, v6);
  v10 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v22);
  Block::addAABB(v5, v10, v7, a5);
  v19 = 1063256064;
  v20 = 0;
  v21 = 0;
  AABB::set((AABB *)&v34, (const Vec3 *)&v19, (const Vec3 *)&Vec3::ONE);
  Vec3::Vec3((int)&v18, v6);
  v11 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v18);
  Block::addAABB(v5, v11, v7, a5);
  v15 = 0;
  v16 = 0;
  v17 = 1063256064;
  AABB::set((AABB *)&v34, (const Vec3 *)&v15, (const Vec3 *)&Vec3::ONE);
  Vec3::Vec3((int)&v14, v6);
  v12 = (AABB *)AABB::move((AABB *)&v34, (const Vec3 *)&v14);
  return Block::addAABB(v5, v12, v7, a5);
}


signed int __fastcall CauldronBlock::addCollisionShapes(int a1)
{
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 28))(a1);
  return 1;
}


int __fastcall CauldronBlock::CauldronBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(4);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_27056CC;
  *(_DWORD *)(v3 + 20) = 3;
  Block::setSolid((Block *)v3, 0);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 476))(v3, 0);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 36) = 1;
  *(_DWORD *)(v3 + 32) = 16;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


int __fastcall CauldronBlock::_useInventory(CauldronBlock *this, Player *a2, ItemInstance *a3, ItemInstance *a4, int a5)
{
  Player *v5; // r5@1
  ItemInstance *v6; // r4@1
  ItemInstance *v7; // r6@1
  PlayerInventoryProxy *v8; // r0@3
  int result; // r0@3

  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( Abilities::getBool((int)a2 + 4320, (int **)&Abilities::INSTABUILD)
    || (ItemInstance::remove(v7, a5), *((_BYTE *)v7 + 14)) )
  {
    v8 = (PlayerInventoryProxy *)Player::getSupplies(v5);
    result = PlayerInventoryProxy::add(v8, v6, 1);
    if ( !result )
      result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 664))(v5, v6, 0);
  }
  else
    result = j_j_j__ZN12ItemInstanceaSERKS__3((int)v7, (int)v6);
  return result;
}


signed int __fastcall CauldronBlock::use(CauldronBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r10@1
  CauldronBlock *v5; // r5@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r0@1
  BlockSource *v8; // r9@1
  Level *v9; // r0@1
  signed int v10; // r4@2
  void *v11; // r0@3
  int v12; // r7@3
  unsigned __int64 *v13; // r0@4
  signed int v14; // r5@4
  signed int v15; // r8@4
  unsigned int v16; // r0@4
  signed int v17; // r11@4
  int v18; // r6@12
  int v19; // r0@14
  bool v20; // zf@14
  int v21; // r6@19
  int v22; // r4@19
  ArmorItem *v23; // r5@19
  ArmorItem *v24; // r0@19
  signed int v25; // r0@21
  PlayerInventoryProxy *v26; // r0@26
  PlayerInventoryProxy *v27; // r0@37
  __int16 v28; // r0@40
  signed int v29; // r1@40
  signed int v30; // r0@43
  int v31; // r5@44
  int v32; // r2@44
  PlayerInventoryProxy *v33; // r0@52
  signed int v34; // r0@57
  ArmorItem *v35; // r5@61
  BlockState *v36; // r0@64
  char v37; // r5@64 OVERLAPPED
  char v38; // r6@64 OVERLAPPED
  char v39; // r0@64
  int v40; // r3@64
  Potion *v41; // r0@70
  int v42; // r1@70
  int v43; // r0@70
  PlayerInventoryProxy *v44; // r0@72
  int v45; // r0@74
  signed int v46; // r1@75
  signed int v47; // r2@75
  PlayerInventoryProxy *v48; // r0@84
  __int64 v49; // r0@86
  PlayerInventoryProxy *v50; // r0@93
  PlayerInventoryProxy *v51; // r0@98
  signed int v52; // r0@101
  PlayerInventoryProxy *v53; // r0@106
  int v54; // r0@108
  BlockState *v55; // r0@108
  int v56; // r5@108 OVERLAPPED
  int v57; // r6@108 OVERLAPPED
  char v58; // r0@108
  int v59; // r3@108
  int v60; // r2@110
  PlayerInventoryProxy *v61; // r0@114
  signed int v62; // r0@116
  const ItemInstance *v63; // r1@116
  ArmorItem *v64; // r5@116
  BlockState *v65; // r0@119
  int v66; // r5@119 OVERLAPPED
  int v67; // r6@119 OVERLAPPED
  char v68; // r0@119
  int v69; // r3@119
  int v70; // r2@121
  int v71; // r0@129
  Level *v72; // r0@133
  Player *v73; // r2@134
  PlayerInventoryProxy *v74; // r0@136
  BlockState *v75; // r0@139
  __int64 v76; // r5@139
  char v77; // r0@139
  BlockState *v78; // r0@139
  __int64 v79; // r5@139
  char v80; // r0@139
  signed int v81; // r0@139
  BlockState *v82; // r0@153
  char v83; // r5@153 OVERLAPPED
  char v84; // r6@153 OVERLAPPED
  char v85; // r0@153
  int v86; // r3@153
  BlockState *v87; // r0@159
  char v88; // r0@159
  int v89; // r0@163
  PlayerInventoryProxy *v90; // r0@167
  BlockState *v91; // r0@169
  int v92; // r5@169 OVERLAPPED
  int v93; // r6@169 OVERLAPPED
  char v94; // r0@169
  int v95; // r3@169
  int v96; // r2@171
  BlockState *v97; // r0@183
  char v98; // r0@183
  void *v99; // r0@192
  void *v100; // r0@193
  void *v101; // r0@194
  unsigned int *v103; // r2@203
  signed int v104; // r1@205
  unsigned int *v105; // r2@207
  signed int v106; // r1@209
  unsigned int *v107; // r2@211
  signed int v108; // r1@213
  BlockState *v109; // r0@227
  char v110; // r5@227 OVERLAPPED
  char v111; // r6@227 OVERLAPPED
  char v112; // r0@227
  int v113; // r3@227
  BlockState *v114; // r0@236
  __int64 v115; // r5@236
  char v116; // r0@236
  int v117; // r3@236
  int v118; // r2@236
  BlockState *v119; // r0@240
  int v120; // r5@240 OVERLAPPED
  int v121; // r6@240 OVERLAPPED
  char v122; // r0@240
  signed int v123; // r2@240
  int v124; // r1@242
  int v125; // r5@250
  BlockState *v126; // r0@254
  __int64 v127; // r6@254
  char v128; // r0@254
  signed int v129; // r2@254
  BlockState *v130; // r0@264
  char v131; // r0@264
  BlockState *v132; // r0@270
  __int64 v133; // r5@270
  char v134; // r0@270
  int v135; // r1@270
  int v136; // r2@270
  BlockState *v137; // r0@274
  char v138; // r0@274
  BlockState *v139; // r0@281
  __int64 v140; // r5@281
  char v141; // r0@281
  int v142; // r3@281
  int v143; // r2@281
  int v144; // [sp+4h] [bp-414h]@19
  BlockPos *v145; // [sp+8h] [bp-410h]@14
  unsigned int v146; // [sp+Ch] [bp-40Ch]@4
  signed int v147; // [sp+10h] [bp-408h]@4
  int v148; // [sp+14h] [bp-404h]@3
  char v149; // [sp+18h] [bp-400h]@134
  int v150; // [sp+20h] [bp-3F8h]@289
  void *v151; // [sp+3Ch] [bp-3DCh]@287
  void *v152; // [sp+4Ch] [bp-3CCh]@285
  char v153; // [sp+60h] [bp-3B8h]@234
  int v154; // [sp+68h] [bp-3B0h]@248
  void *v155; // [sp+84h] [bp-394h]@246
  void *v156; // [sp+94h] [bp-384h]@244
  char v157; // [sp+A8h] [bp-370h]@169
  char v158; // [sp+B8h] [bp-360h]@227
  char v159; // [sp+C8h] [bp-350h]@101
  int v160; // [sp+D0h] [bp-348h]@279
  void *v161; // [sp+ECh] [bp-32Ch]@277
  void *v162; // [sp+FCh] [bp-31Ch]@275
  char v163; // [sp+110h] [bp-308h]@82
  int v164; // [sp+118h] [bp-300h]@268
  void *v165; // [sp+134h] [bp-2E4h]@266
  void *v166; // [sp+144h] [bp-2D4h]@264
  char v167; // [sp+158h] [bp-2C0h]@112
  int v168; // [sp+160h] [bp-2B8h]@181
  void *v169; // [sp+17Ch] [bp-29Ch]@179
  void *v170; // [sp+18Ch] [bp-28Ch]@177
  char v171; // [sp+1A0h] [bp-278h]@50
  int v172; // [sp+1A8h] [bp-270h]@262
  void *v173; // [sp+1C4h] [bp-254h]@260
  void *v174; // [sp+1D4h] [bp-244h]@258
  char v175; // [sp+1E8h] [bp-230h]@70
  int v176; // [sp+1F0h] [bp-228h]@148
  void *v177; // [sp+20Ch] [bp-20Ch]@146
  void *v178; // [sp+21Ch] [bp-1FCh]@144
  char v179; // [sp+230h] [bp-1E8h]@35
  int v180; // [sp+238h] [bp-1E0h]@129
  void *v181; // [sp+254h] [bp-1C4h]@127
  void *ptr; // [sp+264h] [bp-1B4h]@125
  char v183; // [sp+278h] [bp-1A0h]@91
  int v184; // [sp+280h] [bp-198h]@163
  void *v185; // [sp+29Ch] [bp-17Ch]@161
  void *v186; // [sp+2ACh] [bp-16Ch]@159
  char v187; // [sp+2C0h] [bp-158h]@21
  int v188; // [sp+2C8h] [bp-150h]@188
  void *v189; // [sp+2E4h] [bp-134h]@186
  void *v190; // [sp+2F4h] [bp-124h]@184
  void **v191; // [sp+308h] [bp-110h]@14
  int v192; // [sp+340h] [bp-D8h]@194
  int v193; // [sp+344h] [bp-D4h]@193
  int v194; // [sp+348h] [bp-D0h]@192
  char v195; // [sp+350h] [bp-C8h]@14
  ArmorItem *v196; // [sp+360h] [bp-B8h]@3
  int v197; // [sp+368h] [bp-B0h]@200
  unsigned __int8 v198; // [sp+36Eh] [bp-AAh]@18
  char v199; // [sp+36Fh] [bp-A9h]@14
  void *v200; // [sp+384h] [bp-94h]@198
  void *v201; // [sp+394h] [bp-84h]@196
  char v202; // [sp+3ACh] [bp-6Ch]@139
  char v203; // [sp+3ADh] [bp-6Bh]@139
  char v204; // [sp+3B0h] [bp-68h]@139
  char v205; // [sp+3B1h] [bp-67h]@139
  char v206; // [sp+3B4h] [bp-64h]@183
  char v207; // [sp+3B5h] [bp-63h]@183
  char v208; // [sp+3B8h] [bp-60h]@159
  char v209; // [sp+3B9h] [bp-5Fh]@159
  char v210; // [sp+3BCh] [bp-5Ch]@153
  char v211; // [sp+3BDh] [bp-5Bh]@157
  char v212; // [sp+3C0h] [bp-58h]@254
  char v213; // [sp+3C1h] [bp-57h]@258
  char v214; // [sp+3C4h] [bp-54h]@108
  char v215; // [sp+3C5h] [bp-53h]@112
  char v216; // [sp+3C8h] [bp-50h]@264
  char v217; // [sp+3C9h] [bp-4Fh]@264
  char v218; // [sp+3CCh] [bp-4Ch]@270
  char v219; // [sp+3CDh] [bp-4Bh]@272
  char v220; // [sp+3D0h] [bp-48h]@274
  char v221; // [sp+3D1h] [bp-47h]@274
  char v222; // [sp+3D4h] [bp-44h]@227
  char v223; // [sp+3D5h] [bp-43h]@231
  char v224; // [sp+3D8h] [bp-40h]@64
  char v225; // [sp+3D9h] [bp-3Fh]@68
  char v226; // [sp+3DCh] [bp-3Ch]@169
  char v227; // [sp+3DDh] [bp-3Bh]@173
  char v228; // [sp+3E0h] [bp-38h]@119
  char v229; // [sp+3E1h] [bp-37h]@123
  char v230; // [sp+3E4h] [bp-34h]@236
  char v231; // [sp+3E5h] [bp-33h]@240
  char v232; // [sp+3E8h] [bp-30h]@240
  char v233; // [sp+3E9h] [bp-2Fh]@244
  char v234; // [sp+3ECh] [bp-2Ch]@281
  char v235; // [sp+3EDh] [bp-2Bh]@285

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (BlockSource *)Entity::getRegion(a2);
  v8 = v7;
  v9 = (Level *)BlockSource::getLevel(v7);
  if ( Level::isClientSide(v9) )
    return 1;
  v148 = (int)v5;
  v11 = Player::getSelectedItem(v4);
  ItemInstance::ItemInstance((ItemInstance *)&v196, (int)v11);
  v12 = BlockSource::getBlockEntity(v8, v6);
  if ( v12 )
  {
    v146 = BlockSource::getData(v8, v6);
    v13 = (unsigned __int64 *)Block::getBlockState((int)v5, 16);
    v14 = 0;
    v15 = 0;
    v16 = (0xFu >> (4 - (*v13 >> 32))) & (v146 >> (*v13 + 1 - (*v13 >> 32)));
    v147 = v16;
    v17 = v16;
    if ( v16 )
      v17 = 1;
    {
      v15 = 0;
      if ( *(_DWORD *)(v12 + 216) > -1 )
        v15 = 1;
    }
    if ( !*(_BYTE *)(v12 + 224) )
      v14 = 1;
    if ( *(_BYTE *)(v12 + 224) )
      LOWORD(v18) = -2;
    else
      v18 = *(_DWORD *)(v12 + 216);
    CauldronBlockEntity::getCustomColor((CauldronBlockEntity *)&v195, v12);
    v19 = Color::toARGB((Color *)&v195);
    EventPacket::EventPacket((int)&v191, v4, (signed __int16)v18, v19, (signed __int16)v147);
    v145 = v6;
    (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v4 + 1448))(v4, &v191);
    v20 = v199 == 0;
    if ( v199 )
      v20 = v196 == 0;
    if ( v20 || ItemInstance::isNull((ItemInstance *)&v196) || !v198 )
      goto LABEL_192;
    v21 = v15 ^ 1;
    v22 = v17 & (v15 ^ 1);
    v144 = v22 & v14;
    v23 = v196;
    v24 = (ArmorItem *)Item::mBucket;
    if ( v196 == (ArmorItem *)Item::mBucket )
      if ( ItemInstance::getAuxValue((ItemInstance *)&v196) == *(_BYTE *)(Block::mFlowingWater + 4) )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v187, Item::mBucket, 1);
        v25 = 0;
        if ( !v147 )
          v25 = 1;
        if ( v25 | v21 )
        {
          if ( Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD)
            || (ItemInstance::remove((ItemInstance *)&v196, 1), v198) )
          {
            v26 = (PlayerInventoryProxy *)Player::getSupplies(v4);
            if ( !PlayerInventoryProxy::add(v26, (ItemInstance *)&v187, 1) )
              (*(void (__fastcall **)(Player *, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v187, 0);
          }
          else
            ItemInstance::operator=((int)&v196, (int)&v187);
          *(_DWORD *)(v12 + 216) = -1;
          BlockEntity::setChanged((BlockEntity *)v12);
          CauldronBlockEntity::setCustomColor((CauldronBlockEntity *)v12, (const Color *)&Color::NIL);
          v75 = (BlockState *)Block::getBlockState(v148, 16);
          v76 = *(_QWORD *)v75;
          v77 = BlockState::getMask(v75);
          v202 = *(_BYTE *)(v148 + 4);
          v203 = v146 & ~v77 | (5 << (v76 + 1 - BYTE4(v76)));
          BlockSource::setBlockAndData((int)v8, v145, (int)&v202, 3, (int)v4);
          v78 = (BlockState *)Block::getBlockState(v148, 16);
          v79 = *(_QWORD *)v78;
          v80 = BlockState::getMask(v78);
          v204 = *(_BYTE *)(v148 + 4);
          v205 = v146 & ~v80 | (6 << (v79 + 1 - BYTE4(v79)));
          BlockSource::setBlockAndData((int)v8, v145, (int)&v204, 3, (int)v4);
          v81 = 0;
          if ( v147 > 5 )
            v81 = 1;
          if ( !(v81 & v144) )
            CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3506);
        }
        else if ( v15 == 1 )
            v51 = (PlayerInventoryProxy *)Player::getSupplies(v4);
            if ( !PlayerInventoryProxy::add(v51, (ItemInstance *)&v187, 1) )
          v97 = (BlockState *)Block::getBlockState(v148, 16);
          v98 = BlockState::getMask(v97);
          v206 = *(_BYTE *)(v148 + 4);
          v207 = v146 & ~v98;
          BlockSource::setBlockAndData((int)v8, v145, (int)&v206, 3, 0);
          CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3501);
        if ( v190 )
          operator delete(v190);
        if ( v189 )
          operator delete(v189);
        v89 = v188;
LABEL_189:
        if ( v89 )
          (*(void (**)(void))(*(_DWORD *)v89 + 4))();
        goto LABEL_191;
      }
      v24 = (ArmorItem *)Item::mBucket;
    if ( v23 == v24 && !(unsigned __int16)ItemInstance::getAuxValue((ItemInstance *)&v196) )
      v49 = 0LL;
      if ( v147 < 6 )
        LODWORD(v49) = 1;
      if ( !v147 )
        HIDWORD(v49) = 1;
      HIDWORD(v49) |= v15;
      if ( v49 )
      ItemInstance::ItemInstance((ItemInstance *)&v183, Item::mBucket, 1, *(_BYTE *)(Block::mFlowingWater + 4));
      if ( Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD)
        || (ItemInstance::remove((ItemInstance *)&v196, 1), v198) )
        v50 = (PlayerInventoryProxy *)Player::getSupplies(v4);
        if ( !PlayerInventoryProxy::add(v50, (ItemInstance *)&v183, 1) )
          (*(void (__fastcall **)(Player *, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v183, 0);
      else
        ItemInstance::operator=((int)&v196, (int)&v183);
      *(_DWORD *)(v12 + 216) = -1;
      BlockEntity::setChanged((BlockEntity *)v12);
      CauldronBlockEntity::setCustomColor((CauldronBlockEntity *)v12, (const Color *)&Color::NIL);
      v87 = (BlockState *)Block::getBlockState(v148, 16);
      v88 = BlockState::getMask(v87);
      v208 = *(_BYTE *)(v148 + 4);
      v209 = v146 & ~v88;
      BlockSource::setBlockAndData((int)v8, v145, (int)&v208, 3, (int)v4);
      CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3507);
      if ( v186 )
        operator delete(v186);
      if ( v185 )
        operator delete(v185);
      v89 = v184;
      goto LABEL_189;
    if ( v147 >= 2 && v23 == (ArmorItem *)Item::mGlass_bottle )
      if ( v22 == 1 )
        ItemInstance::ItemInstance((ItemInstance *)&v179, Item::mPotion, 1, 0);
        if ( Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD)
          || (ItemInstance::remove((ItemInstance *)&v196, 1), v198) )
          v27 = (PlayerInventoryProxy *)Player::getSupplies(v4);
          if ( !PlayerInventoryProxy::add(v27, (ItemInstance *)&v179, 1) )
            (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v179, 0);
        else
          ItemInstance::operator=((int)&v196, (int)&v179);
        CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3507);
        if ( ptr )
          operator delete(ptr);
        if ( v181 )
          operator delete(v181);
        v71 = v180;
        if ( v15 != 1 )
LABEL_151:
          if ( v147 <= 2 )
            *(_DWORD *)(v12 + 216) = -1;
            BlockEntity::setChanged((BlockEntity *)v12);
            CauldronBlockEntity::setCustomColor((CauldronBlockEntity *)v12, (const Color *)&Color::NIL);
          v82 = (BlockState *)Block::getBlockState(v148, 16);
          *(_QWORD *)&v83 = *(_QWORD *)v82;
          v85 = BlockState::getMask(v82);
          v86 = v147 - 2;
          v210 = *(_BYTE *)(v148 + 4);
          if ( v147 - 2 <= 0 )
            v86 = 0;
          if ( v147 - 2 > 6 )
            v86 = 6;
          v211 = v146 & ~v85 | (v86 << (v83 + 1 - v84));
          BlockSource::setBlockAndData((int)v8, v145, (int)&v210, 3, (int)v4);
          goto LABEL_191;
        v41 = (Potion *)CauldronBlockEntity::getPotionType((CauldronBlockEntity *)v12);
        v43 = Potion::getBasePotion(v41, v42);
        ItemInstance::ItemInstance((ItemInstance *)&v175, v43, 1, *(_DWORD *)(v12 + 216));
          v44 = (PlayerInventoryProxy *)Player::getSupplies(v4);
          if ( !PlayerInventoryProxy::add(v44, (ItemInstance *)&v175, 1) )
            (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v175, 0);
          ItemInstance::operator=((int)&v196, (int)&v175);
        CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3505);
        if ( v178 )
          operator delete(v178);
        if ( v177 )
          operator delete(v177);
        v71 = v176;
      if ( v71 )
        (*(void (**)(void))(*(_DWORD *)v71 + 4))();
      goto LABEL_151;
    if ( v23 == (ArmorItem *)Item::mArrow )
      v28 = ItemInstance::getAuxValue((ItemInstance *)&v196);
      v29 = 0;
        v29 = 1;
      if ( !((v28 != 0) | v29 | v21) )
        v30 = *(_DWORD *)(v12 + 216);
        if ( v30 >= 5 )
          v31 = v198;
          v32 = v147 - 2;
            v32 = 1;
          if ( v32 < 0 )
            v32 = 0;
          if ( v198 >= 16 * v32 )
            v31 = 16 * v32;
          ItemInstance::ItemInstance((ItemInstance *)&v171, Item::mArrow, v31, v30 + 1);
            || (ItemInstance::remove((ItemInstance *)&v196, v31), v198) )
            v33 = (PlayerInventoryProxy *)Player::getSupplies(v4);
            if ( !PlayerInventoryProxy::add(v33, (ItemInstance *)&v171, 1) )
              (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v171, 0);
            ItemInstance::operator=((int)&v196, (int)&v171);
          v125 = v147 - (v31 + 15) / 16;
          if ( v125 <= 2 )
            v125 = 0;
          v126 = (BlockState *)Block::getBlockState(v148, 16);
          v127 = *(_QWORD *)v126;
          v128 = BlockState::getMask(v126);
          v212 = *(_BYTE *)(v148 + 4);
          v129 = v125;
          if ( v125 <= 0 )
            v129 = 0;
          if ( v125 > 6 )
            v129 = 6;
          v213 = v146 & ~v128 | (v129 << (v127 + 1 - BYTE4(v127)));
          BlockSource::setBlockAndData((int)v8, v145, (int)&v212, 3, (int)v4);
          if ( v174 )
            operator delete(v174);
          if ( v173 )
            operator delete(v173);
          v89 = v172;
          goto LABEL_189;
    if ( v23 == (ArmorItem *)Item::mPotion
      || v23 == (ArmorItem *)Item::mSplash_potion
      || v23 == (ArmorItem *)Item::mLingering_potion )
      v45 = ItemInstance::getAuxValue((ItemInstance *)&v196);
      if ( v45 < 1 )
        if ( !(_WORD)v45 )
          ItemInstance::ItemInstance((ItemInstance *)&v159, Item::mGlass_bottle, 1);
          v52 = 0;
          if ( !v147 )
            v52 = 1;
          if ( v52 | v21 )
            if ( Abilities::getBool((int)v4 + 4320, (int **)&Abilities::INSTABUILD)
              || (ItemInstance::remove((ItemInstance *)&v196, 1), v198) )
            {
              v53 = (PlayerInventoryProxy *)Player::getSupplies(v4);
              if ( !PlayerInventoryProxy::add(v53, (ItemInstance *)&v159, 1) )
                (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v159, 0);
            }
            else
              ItemInstance::operator=((int)&v196, (int)&v159);
            v132 = (BlockState *)Block::getBlockState(v148, 16);
            v133 = *(_QWORD *)v132;
            v134 = BlockState::getMask(v132);
            v135 = v146 + 2;
            v218 = *(_BYTE *)(v148 + 4);
            v136 = v133 + 1 - HIDWORD(v133);
            if ( v146 + 2 > 6 )
              v135 = 6;
            v219 = v146 & ~v134 | (v135 << v136);
            BlockSource::setBlockAndData((int)v8, v145, (int)&v218, 3, (int)v4);
          else if ( v15 == 1 )
              v90 = (PlayerInventoryProxy *)Player::getSupplies(v4);
              if ( !PlayerInventoryProxy::add(v90, (ItemInstance *)&v159, 1) )
            v137 = (BlockState *)Block::getBlockState(v148, 16);
            v138 = BlockState::getMask(v137);
            v220 = *(_BYTE *)(v148 + 4);
            v221 = v146 & ~v138;
            BlockSource::setBlockAndData((int)v8, v145, (int)&v220, 3, 0);
            CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3501);
          if ( v162 )
            operator delete(v162);
          if ( v161 )
            operator delete(v161);
          v89 = v160;
        v46 = 0;
        v47 = 0;
        if ( v15 == 1 )
          v47 = 0;
          if ( *(_DWORD *)(v12 + 216) == v45 )
            v47 = 1;
        if ( v147 > 5 )
          v46 = 1;
        if ( !((v46 | ~v47) & v17) )
          *(_DWORD *)(v12 + 216) = v45;
          v54 = (*(int (__fastcall **)(ArmorItem *))(*(_DWORD *)v23 + 276))(v23);
          CauldronBlockEntity::setPotionType((CauldronBlockEntity *)v12, v54);
          v55 = (BlockState *)Block::getBlockState(v148, 16);
          *(_QWORD *)&v56 = *(_QWORD *)v55;
          v58 = BlockState::getMask(v55);
          v59 = v147 + 2;
          v214 = *(_BYTE *)(v148 + 4);
          if ( v147 + 2 <= 0 )
            v59 = 0;
          v60 = v56 + 1 - v57;
          if ( v147 + 2 > 6 )
            v59 = 6;
          v215 = v146 & ~v58 | (v59 << v60);
          BlockSource::setBlockAndData((int)v8, v145, (int)&v214, 3, (int)v4);
          ItemInstance::ItemInstance((ItemInstance *)&v167, Item::mGlass_bottle, 1, 0);
            v61 = (PlayerInventoryProxy *)Player::getSupplies(v4);
            if ( !PlayerInventoryProxy::add(v61, (ItemInstance *)&v167, 1) )
              (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v167, 0);
            ItemInstance::operator=((int)&v196, (int)&v167);
          CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3504);
          if ( v170 )
            operator delete(v170);
          if ( v169 )
            operator delete(v169);
          v89 = v168;
        if ( !v47 )
          ItemInstance::ItemInstance((ItemInstance *)&v163, Item::mGlass_bottle, 1, 0);
            v48 = (PlayerInventoryProxy *)Player::getSupplies(v4);
            if ( !PlayerInventoryProxy::add(v48, (ItemInstance *)&v163, 1) )
              (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v163, 0);
            ItemInstance::operator=((int)&v196, (int)&v163);
          v130 = (BlockState *)Block::getBlockState(v148, 16);
          v131 = BlockState::getMask(v130);
          v216 = *(_BYTE *)(v148 + 4);
          v217 = v146 & ~v131;
          BlockSource::setBlockAndData((int)v8, v145, (int)&v216, 3, 0);
          if ( v166 )
            operator delete(v166);
          if ( v165 )
            operator delete(v165);
          v89 = v164;
      v34 = 0;
        v34 = 1;
      if ( v34 | v15 )
      if ( ItemInstance::isArmorItem((ItemInstance *)&v196) == 1 )
        v35 = v196;
        if ( !*((_DWORD *)v196 + 31) )
          if ( !v144 )
            CauldronBlockEntity::getCustomColor((CauldronBlockEntity *)&v158, v12);
            ArmorItem::setColor(v35, (ItemInstance *)&v196, (const Color *)&v158);
            v109 = (BlockState *)Block::getBlockState(v148, 16);
            *(_QWORD *)&v110 = *(_QWORD *)v109;
            v112 = BlockState::getMask(v109);
            v113 = v147 - 1;
            v222 = *(_BYTE *)(v148 + 4);
            if ( v147 - 1 <= 0 )
              v113 = 0;
            if ( v147 - 1 > 6 )
              v113 = 6;
            v223 = v146 & ~v112 | (v113 << (v110 + 1 - v111));
            BlockSource::setBlockAndData((int)v8, v145, (int)&v222, 3, (int)v4);
            CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3502);
            goto LABEL_232;
          if ( ArmorItem::hasCustomColor(v196, (const ItemInstance *)&v196) == 1 )
            ArmorItem::clearColor(v35, (ItemInstance *)&v196);
            v36 = (BlockState *)Block::getBlockState(v148, 16);
            *(_QWORD *)&v37 = *(_QWORD *)v36;
            v39 = BlockState::getMask(v36);
            v40 = v147 - 1;
            v224 = *(_BYTE *)(v148 + 4);
              v40 = 0;
              v40 = 6;
            v225 = v146 & ~v39 | (v40 << (v37 + 1 - v38));
            BlockSource::setBlockAndData((int)v8, v145, (int)&v224, 3, (int)v4);
            CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3503);
LABEL_232:
            if ( v147 <= 1 )
              *(_DWORD *)(v12 + 216) = -1;
              BlockEntity::setChanged((BlockEntity *)v12);
              CauldronBlockEntity::setCustomColor((CauldronBlockEntity *)v12, (const Color *)&Color::NIL);
            goto LABEL_191;
        v62 = ItemInstance::isHorseArmorItem((ItemInstance *)&v196);
        v64 = v196;
        if ( v62 == 1 )
          if ( v144 )
            if ( HorseArmorItem::hasCustomColor(v196, (const ItemInstance *)&v196) != 1 )
              goto LABEL_191;
            HorseArmorItem::clearColor(v64, (ItemInstance *)&v196);
            v65 = (BlockState *)Block::getBlockState(v148, 16);
            *(_QWORD *)&v66 = *(_QWORD *)v65;
            v68 = BlockState::getMask(v65);
            v69 = v147 - 1;
            v228 = *(_BYTE *)(v148 + 4);
              v69 = 0;
            v70 = v66 + 1 - v67;
              v69 = 6;
            v229 = v146 & ~v68 | (v69 << v70);
            BlockSource::setBlockAndData((int)v8, v145, (int)&v228, 3, (int)v4);
            CauldronBlockEntity::getCustomColor((CauldronBlockEntity *)&v157, v12);
            HorseArmorItem::setColor(v64, (ItemInstance *)&v196, (const Color *)&v157);
            v91 = (BlockState *)Block::getBlockState(v148, 16);
            *(_QWORD *)&v92 = *(_QWORD *)v91;
            v94 = BlockState::getMask(v91);
            v95 = v147 - 1;
            v226 = *(_BYTE *)(v148 + 4);
              v95 = 0;
            v96 = v92 + 1 - v93;
              v95 = 6;
            v227 = v146 & ~v94 | (v95 << v96);
            BlockSource::setBlockAndData((int)v8, v145, (int)&v226, 3, (int)v4);
          if ( v147 <= 1 )
        if ( v196 == (ArmorItem *)Item::mDye_powder )
          ItemInstance::ItemInstance((ItemInstance *)&v153, (int)&v196);
          if ( !Player::isInCreativeMode(v4) )
            ItemInstance::remove((ItemInstance *)&v196, 1);
          ItemInstance::set((ItemInstance *)&v153, 1);
          (*(void (__fastcall **)(int, signed int, char *))(*(_DWORD *)v12 + 120))(v12, 2, &v153);
          CauldronBlockEntity::mixDyes((CauldronBlockEntity *)v12);
          v114 = (BlockState *)Block::getBlockState(v148, 16);
          v115 = *(_QWORD *)v114;
          v116 = BlockState::getMask(v114);
          v230 = *(_BYTE *)(v148 + 4);
          v117 = v147 - 1;
          v118 = v115 + 1 - HIDWORD(v115);
          if ( v147 - 1 <= 0 )
            v117 = 0;
          if ( v147 - 1 > 6 )
            v117 = 6;
          v231 = v146 & ~v116 | (v117 << v118);
          BlockSource::setBlockAndData((int)v8, v145, (int)&v230, 3, (int)v4);
          v119 = (BlockState *)Block::getBlockState(v148, 16);
          *(_QWORD *)&v120 = *(_QWORD *)v119;
          v122 = BlockState::getMask(v119);
          v123 = v147;
          v232 = *(_BYTE *)(v148 + 4);
          if ( v147 <= 0 )
            v123 = 0;
          v124 = v120 + 1 - v121;
          if ( v147 > 6 )
            v123 = 6;
          v233 = v146 & ~v122 | (v123 << v124);
          BlockSource::setBlockAndData((int)v8, v145, (int)&v232, 3, (int)v4);
          CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3508);
          if ( v156 )
            operator delete(v156);
          if ( v155 )
            operator delete(v155);
          v89 = v154;
        if ( v196 == (ArmorItem *)Item::mBanner
          && BannerBlockEntity::getPatternCount((BannerBlockEntity *)&v196, v63) >= 1 )
          v72 = (Level *)BlockSource::getLevel(v8);
          if ( !Level::isClientSide(v72) )
            ItemInstance::ItemInstance((ItemInstance *)&v149, (int)&v196);
            BannerBlockEntity::removeLastPattern((BannerBlockEntity *)&v149, v4, v73);
            ItemInstance::set((ItemInstance *)&v149, 1);
              v74 = (PlayerInventoryProxy *)Player::getSupplies(v4);
              if ( !PlayerInventoryProxy::add(v74, (ItemInstance *)&v149, 1) )
                (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v149, 0);
              ItemInstance::operator=((int)&v196, (int)&v149);
            v139 = (BlockState *)Block::getBlockState(v148, 16);
            v140 = *(_QWORD *)v139;
            v141 = BlockState::getMask(v139);
            v234 = *(_BYTE *)(v148 + 4);
            v142 = v147 - 1;
            v143 = v140 + 1 - HIDWORD(v140);
              v142 = 0;
              v142 = 6;
            v235 = v146 & ~v141 | (v142 << v143);
            BlockSource::setBlockAndData((int)v8, v145, (int)&v234, 3, (int)v4);
            CauldronBlock::_spawnCauldronEvent(v148, v8, v145, 3509);
            if ( v152 )
              operator delete(v152);
            if ( v151 )
              operator delete(v151);
            v89 = v150;
            goto LABEL_189;
LABEL_191:
    Player::setSelectedItem(v4, (const ItemInstance *)&v196);
LABEL_192:
    v191 = &off_26E9D30;
    v99 = (void *)(v194 - 12);
    if ( (int *)(v194 - 12) != &dword_28898C0 )
      v103 = (unsigned int *)(v194 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v104 = __ldrex(v103);
        while ( __strex(v104 - 1, v103) );
        v104 = (*v103)--;
      if ( v104 <= 0 )
        j_j_j_j__ZdlPv_9(v99);
    v100 = (void *)(v193 - 12);
    if ( (int *)(v193 - 12) != &dword_28898C0 )
      v105 = (unsigned int *)(v193 - 4);
          v106 = __ldrex(v105);
        while ( __strex(v106 - 1, v105) );
        v106 = (*v105)--;
      if ( v106 <= 0 )
        j_j_j_j__ZdlPv_9(v100);
    v101 = (void *)(v192 - 12);
    if ( (int *)(v192 - 12) != &dword_28898C0 )
      v107 = (unsigned int *)(v192 - 4);
          v108 = __ldrex(v107);
        while ( __strex(v108 - 1, v107) );
        v108 = (*v107)--;
      if ( v108 <= 0 )
        j_j_j_j__ZdlPv_9(v101);
    v10 = 1;
    goto LABEL_196;
  }
  v10 = 0;
LABEL_196:
  if ( v201 )
    operator delete(v201);
  if ( v200 )
    operator delete(v200);
  if ( v197 )
    (*(void (**)(void))(*(_DWORD *)v197 + 4))();
  return v10;
}


int __fastcall CauldronBlock::getWaterLevel(int result, unsigned __int8 a2)
{
  if ( (unsigned int)result >= 6 )
    result = 6;
  return result;
}


int __fastcall CauldronBlock::setWaterLevel(CauldronBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5, Entity *a6)
{
  BlockSource *v6; // r9@1
  int v7; // r6@1
  BlockPos *v8; // r8@1
  CauldronBlock *v9; // r7@1
  BlockState *v10; // r0@1
  __int64 v11; // r4@1
  unsigned int v12; // r0@1
  int v13; // r1@1
  int v14; // r3@3
  char v16; // [sp+8h] [bp-20h]@1
  char v17; // [sp+9h] [bp-1Fh]@5

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = this;
  v10 = (BlockState *)Block::getBlockState((int)this, 16);
  v11 = *(_QWORD *)v10;
  v12 = v7 & ~BlockState::getMask(v10);
  v16 = *((_BYTE *)v9 + 4);
  v13 = a5;
  if ( a5 <= 0 )
    v13 = 0;
  v14 = v11 + 1 - HIDWORD(v11);
  if ( a5 > 6 )
    v13 = 6;
  v17 = v12 | (v13 << v14);
  return BlockSource::setBlockAndData((int)v6, v8, (int)&v16, 3, (int)a6);
}


unsigned int __fastcall CauldronBlock::handleRain(CauldronBlock *this, BlockSource *a2, const BlockPos *a3, float a4)
{
  BlockSource *v4; // r5@1
  CauldronBlock *v5; // r6@1
  const BlockPos *v7; // r4@1
  Level *v8; // r0@1
  char *v9; // r0@1
  unsigned int result; // r0@1
  unsigned int v14; // r7@3
  char v16; // [sp+8h] [bp-18h]@11
  char v17; // [sp+9h] [bp-17h]@11

  v4 = a2;
  v5 = this;
  _R7 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  v9 = Level::getRandom(v8);
  result = Random::_genRandInt32((Random *)v9);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VMOV.F32        S2, #0.5
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VMOV            S2, R7
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v14 = BlockSource::getData(v4, v7);
    result = BlockSource::getBlockEntity(v4, v7);
    _ZF = v14 == 0;
    if ( v14 )
      _ZF = result == 0;
    if ( _ZF )
    {
      if ( v14 > 5 )
        return result;
    }
    else
      if ( *(_DWORD *)(result + 216) > -1 )
      result = *(_BYTE *)(result + 224);
      if ( result )
    v16 = *((_BYTE *)v5 + 4);
    v17 = v14 + 1;
    result = BlockSource::setBlockAndData((int)v4, v7, (int)&v16, 3, 0);
  return result;
}


int __fastcall CauldronBlock::spawnSplashParticles(CauldronBlock *this, Level *a2, const Vec3 *a3, Random *a4, int a5, int a6)
{
  Level *v6; // r5@1
  int result; // r0@17
  int v17; // r6@17
  char *v18; // r0@19
  char *v20; // r0@19
  float v22; // [sp+Ch] [bp-5Ch]@19
  float v23; // [sp+18h] [bp-50h]@17

  v6 = this;
  _R0 = ((unsigned int)a4 >> 16) & 0xFF;
  _R4 = a2;
  _R1 = (unsigned __int16)a4 >> 8;
  __asm
  {
    VMOV            S0, R0
    VLDR            S6, =0.0039216
    VLDR            S10, =0.3
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
  }
  _R0 = (unsigned __int8)a4;
    VCVT.F32.S32    S2, S2
    VMOV            S4, R0
  _R0 = (unsigned int)a4 >> 24;
    VMOV            S8, R0
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S8, S8
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VMUL.F32        S6, S8, S6
    VLDR            S8, =0.0
    VADD.F32        S0, S0, S10
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S10
    VMOV.F32        S10, #1.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, #0.0
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S8 }
    VCMPE.F32       S4, #0.0
    __asm { VMOVLT.F32      S2, S8 }
    VCMPE.F32       S6, #0.0
    __asm { VMOVLT.F32      S4, S8 }
    VCMPE.F32       S0, S10
    __asm { VMOVLT.F32      S6, S8 }
    VCMPE.F32       S2, S10
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S10 }
    VCMPE.F32       S4, S10
    __asm { VMOVGT.F32      S2, S10 }
    VCMPE.F32       S6, S10
    __asm { VMOVGT.F32      S4, S10 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S6, S10 }
    VSTR            S0, [SP,#0x68+var_50]
    VSTR            S2, [SP,#0x68+var_4C]
    VSTR            S4, [SP,#0x68+var_48]
    VSTR            S6, [SP,#0x68+var_44]
  result = Color::toARGB((Color *)&v23);
  v17 = a5;
  if ( a5 >= 1 )
    __asm
    {
      VMOV.F32        S18, #-0.25
      VMOV.F32        S20, #0.5
      VLDR            D8, =2.32830644e-10
    }
    do
      v18 = Level::getRandom(v6);
      _R0 = Random::_genRandInt32((Random *)v18);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D11, S0
      }
      v20 = Level::getRandom(v6);
      _R0 = Random::_genRandInt32((Random *)v20);
        VMUL.F64        D1, D11, D8
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S0, D0
        VLDR            S4, [R4]
        VMUL.F32        S2, S2, S20
        VLDR            S8, [R4,#8]
        VMUL.F32        S0, S0, S20
        VADD.F32        S4, S4, S18
        VLDR            S6, [R4,#4]
        VADD.F32        S8, S8, S18
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S6, S18
        VADD.F32        S0, S8, S0
        VSTR            S2, [SP,#0x68+var_5C]
        VSTR            S4, [SP,#0x68+var_58]
        VSTR            S0, [SP,#0x68+var_54]
      result = Level::addParticle((int)v6, 1, (int)&v22);
      --v17;
    while ( v17 );
  return result;
}


void __fastcall CauldronBlock::~CauldronBlock(CauldronBlock *this)
{
  CauldronBlock::~CauldronBlock(this);
}


int __fastcall CauldronBlock::canProvideSupport(int a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  signed int v5; // r1@1
  int v6; // r0@1

  v5 = 0;
  v6 = a4;
  if ( (unsigned int)(a5 - 1) < 2 )
    v5 = 1;
  if ( a4 != 1 )
    v6 = 0;
  return v6 & v5;
}


signed int __fastcall CauldronBlock::hasComparatorSignal(CauldronBlock *this)
{
  return 1;
}


unsigned int __fastcall CauldronBlock::_spawnCauldronEvent(int a1, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r7@1
  int v6; // r4@1
  int v7; // r9@1
  BlockEntity *v8; // r5@1
  unsigned __int64 *v9; // r4@1
  unsigned int result; // r0@1
  unsigned int v11; // r8@1
  int v12; // r4@2
  unsigned __int64 v13; // kr00_8@2
  Player *v15; // r7@3
  __int64 v20; // r2@3
  char v21; // [sp+4h] [bp-3Ch]@3
  float v22; // [sp+14h] [bp-2Ch]@3

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = (BlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v9 = (unsigned __int64 *)Block::getBlockState(v6, 16);
  result = BlockSource::getData(v5, v4);
  v11 = result;
  if ( v8 )
  {
    v13 = *v9;
    v12 = *v9 >> 32;
    result = *(_DWORD *)BlockEntity::getType(v8);
    if ( result == 16 )
    {
      _R4 = (v11 >> (1 - v12 + v13)) & (0xFu >> (4 - v12));
      v15 = (Player *)BlockSource::getLevel(v5);
      Vec3::Vec3((int)&v22, (int)v4);
      __asm
      {
        VMOV            S2, R4
        VMOV.F32        S0, #0.125
        VCVT.F32.S32    S2, S2
        VMOV.F32        S4, #0.5
        VMOV.F32        S6, #0.375
        VMUL.F32        S0, S2, S0
        VLDR            S2, [SP,#0x40+var_2C]
        VADD.F32        S2, S2, S4
        VADD.F32        S0, S0, S6
        VSTR            S2, [SP,#0x40+var_2C]
        VLDR            S2, [SP,#0x40+var_28]
        VADD.F32        S0, S0, S2
        VSTR            S0, [SP,#0x40+var_28]
        VLDR            S0, [SP,#0x40+var_24]
        VADD.F32        S0, S0, S4
        VSTR            S0, [SP,#0x40+var_24]
      }
      CauldronBlockEntity::getColor((CauldronBlockEntity *)&v21, (int)v8);
      HIDWORD(v20) = Color::toARGB((Color *)&v21);
      LODWORD(v20) = &v22;
      result = Level::broadcastLevelEvent(v15, v7, v20, 0);
    }
  }
  return result;
}


signed int __fastcall CauldronBlock::animateTick(CauldronBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v5; // r5@1
  CauldronBlock *v6; // r7@1
  signed int result; // r0@1
  int v8; // r6@1
  unsigned __int64 *v9; // r7@3
  int v13; // r0@6
  Level *v16; // r5@6
  char *v17; // r0@6
  char *v19; // r0@6
  char v21; // [sp+Ch] [bp-54h]@6
  float v22; // [sp+1Ch] [bp-44h]@6

  _R4 = a3;
  v5 = a2;
  v6 = this;
  result = BlockSource::getBlockEntity(a2, a3);
  v8 = result;
  if ( result )
  {
    result = *(_DWORD *)BlockEntity::getType((BlockEntity *)result);
    if ( result == 16 )
    {
      v9 = (unsigned __int64 *)Block::getBlockState((int)v6, 16);
      result = BlockSource::getData(v5, _R4) >> (*v9 + 1 - (*v9 >> 32));
      _R7 = result & (0xFu >> (4 - (*v9 >> 32)));
      _VF = __OFSUB__(_R7, 1);
      _NF = _R7 - 1 < 0;
      if ( _R7 >= 1 )
      {
        result = *(_DWORD *)(v8 + 216);
        _VF = 0;
        _NF = result < 0;
      }
      if ( !(_NF ^ _VF) )
        CauldronBlockEntity::getPotionColor((CauldronBlockEntity *)&v21, v8);
        v13 = BlockSource::getLevel(v5);
        __asm { VLDR            S0, [R4] }
        v16 = (Level *)v13;
        __asm
        {
          VLDR            S2, [R4,#4]
          VLDR            S4, [R4,#8]
          VCVT.F32.S32    S16, S4
          VCVT.F32.S32    S18, S2
          VCVT.F32.S32    S20, S0
        }
        Color::toARGB((Color *)&v21);
        v17 = Level::getRandom(v16);
        _R0 = Random::_genRandInt32((Random *)v17);
          VMOV            S0, R0
          VCVT.F64.U32    D11, S0
        v19 = Level::getRandom(v16);
        _R0 = Random::_genRandInt32((Random *)v19);
          VMOV            S2, R0
          VLDR            D0, =2.32830644e-10
          VMOV            S8, R7
          VCVT.F64.U32    D1, S2
          VMOV.F32        S6, #0.125
          VCVT.F32.S32    S8, S8
          VMUL.F64        D2, D11, D0
          VMUL.F64        D0, D1, D0
          VMOV.F32        S2, #0.375
          VMUL.F32        S6, S8, S6
          VCVT.F32.F64    S4, D2
          VADD.F32        S2, S6, S2
          VCVT.F32.F64    S0, D0
          VADD.F32        S4, S4, S20
          VADD.F32        S2, S2, S18
          VADD.F32        S0, S0, S16
          VSTR            S4, [SP,#0x60+var_44]
          VSTR            S2, [SP,#0x60+var_40]
          VSTR            S0, [SP,#0x60+var_3C]
        result = Level::addParticle((int)v16, 26, (int)&v22);
    }
  }
  return result;
}


int __fastcall CauldronBlock::spawnPotionParticles(int result, Level *a2, const Vec3 *a3, Random *a4, int a5, int a6)
{
  int v6; // r4@1
  Level *v8; // r6@1
  char *v13; // r0@3
  char *v15; // r0@3
  float v17; // [sp+Ch] [bp-44h]@3
  int v18; // [sp+10h] [bp-40h]@3

  v6 = a5;
  _R5 = a2;
  v8 = (Level *)result;
  if ( a5 >= 1 )
  {
    __asm
    {
      VMOV.F32        S18, #-0.5
      VLDR            D8, =2.32830644e-10
    }
    do
      v13 = Level::getRandom(v8);
      _R0 = Random::_genRandInt32((Random *)v13);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D10, S0
      }
      v15 = Level::getRandom(v8);
      _R0 = Random::_genRandInt32((Random *)v15);
        VMUL.F64        D1, D10, D8
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S0, D0
        VADD.F32        S2, S2, S18
        VLDR            S4, [R5]
        VADD.F32        S0, S0, S18
        VLDR            S6, [R5,#8]
        VADD.F32        S2, S2, S4
        VADD.F32        S0, S0, S6
        VSTR            S2, [SP,#0x50+var_44]
      v18 = *((_DWORD *)_R5 + 1);
      __asm { VSTR            S0, [SP,#0x50+var_3C] }
      result = Level::addParticle((int)v8, 26, (int)&v17);
      --v6;
    while ( v6 );
  }
  return result;
}


int __fastcall CauldronBlock::handleEntityInside(CauldronBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, Vec3 *a5)
{
  BlockSource *v5; // r5@1
  CauldronBlock *v8; // r7@1
  unsigned __int64 *v9; // r6@1
  signed int v10; // r6@1
  Level *v16; // r0@1
  int result; // r0@1
  BlockState *v18; // r0@6
  char v19; // r9@6 OVERLAPPED
  char v20; // r10@6 OVERLAPPED
  char v21; // r0@6
  int v22; // r3@6
  char v23; // [sp+4h] [bp-34h]@6
  char v24; // [sp+5h] [bp-33h]@10

  v5 = a2;
  _R8 = a4;
  _R4 = a3;
  v8 = this;
  v9 = (unsigned __int64 *)Block::getBlockState((int)this, 16);
  v10 = (BlockSource::getData(v5, _R4) >> (*v9 + 1 - (*v9 >> 32))) & (0xFu >> (4 - (*v9 >> 32)));
  _R0 = 2 * v10;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S18, S0
    VLDR            S0, [R4,#4]
    VCVT.F32.S32    S16, S0
  }
  v16 = (Level *)BlockSource::getLevel(v5);
  result = Level::isClientSide(v16);
  if ( !result )
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R8 + 320))(_R8);
    if ( v10 >= 1 && result == 1 )
    {
      __asm
      {
        VMOV.F32        S0, #5.0
        VLDR            S2, =0.0625
        VADD.F32        S0, S18, S0
        VMUL.F32        S0, S0, S2
        VLDR            S2, [R8,#0x10C]
        VADD.F32        S0, S0, S16
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        *((_DWORD *)a5 + 1) = 1036831949;
        v18 = (BlockState *)Block::getBlockState((int)v8, 16);
        *(_QWORD *)&v19 = *(_QWORD *)v18;
        v21 = BlockState::getMask(v18);
        v23 = *((_BYTE *)v8 + 4);
        v22 = v10 - 1;
        if ( v10 - 1 <= 0 )
          v22 = 0;
        if ( v10 - 1 > 6 )
          v22 = 6;
        v24 = v10 & ~v21 | (v22 << (v19 + 1 - v20));
        result = BlockSource::setBlockAndData((int)v5, _R4, (int)&v23, 3, (int)_R8);
    }
  return result;
}


signed int __fastcall CauldronBlock::getExtraRenderLayers(CauldronBlock *this)
{
  return 2;
}


unsigned int __fastcall CauldronBlock::_explodeCauldronContents(CauldronBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  BlockSource *v4; // r5@1
  unsigned __int8 v5; // r6@1
  BlockPos *v6; // r4@1
  CauldronBlock *v7; // r7@1
  BlockState *v8; // r0@1
  char v9; // r0@1
  char v11; // [sp+8h] [bp-18h]@1
  char v12; // [sp+9h] [bp-17h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (BlockState *)Block::getBlockState((int)this, 16);
  v9 = BlockState::getMask(v8);
  v11 = *((_BYTE *)v7 + 4);
  v12 = v5 & ~v9;
  BlockSource::setBlockAndData((int)v4, v6, (int)&v11, 3, 0);
  return CauldronBlock::_spawnCauldronEvent((int)v7, v4, v6, 3501);
}


void __fastcall CauldronBlock::~CauldronBlock(CauldronBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
