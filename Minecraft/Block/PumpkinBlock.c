

int __fastcall PumpkinBlock::mayPlace(PumpkinBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  Material *v5; // r0@2
  int v6; // r1@3
  int v7; // r2@3
  int result; // r0@3
  int v9; // [sp+0h] [bp-20h]@3
  int v10; // [sp+4h] [bp-1Ch]@3
  int v11; // [sp+8h] [bp-18h]@3
  unsigned __int8 v12; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  BlockSource::getBlockID((BlockSource *)&v12, a2, (int)a3);
  if ( v12 && (v5 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v12]), Material::isReplaceable(v5) != 1) )
  {
    result = 0;
  }
  else
    v6 = *((_DWORD *)v3 + 1);
    v7 = *((_DWORD *)v3 + 2);
    v9 = *(_DWORD *)v3;
    v10 = v6 - 1;
    v11 = v7;
    result = BlockSource::canProvideSupport(v4, (int)&v9);
  return result;
}


int __fastcall PumpkinBlock::getPlacementDataValue(PumpkinBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  PumpkinBlock *v6; // r4@1
  float v12; // r1@1
  char v13; // r5@1
  BlockState *v14; // r0@1
  int v15; // r4@1
  int v16; // r6@1
  int v18; // [sp+0h] [bp-18h]@1

  v6 = this;
  Entity::getRotation((Entity *)&v18, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #2.5
    VLDR            S2, [SP,#0x18+var_14]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  v13 = mce::Math::floor(_R0, v12);
  v14 = (BlockState *)Block::getBlockState((int)v6, 12);
  v16 = *(_QWORD *)v14 >> 32;
  v15 = *(_QWORD *)v14;
  BlockState::getMask(v14);
  return (unsigned __int8)((v13 & 3) << (v15 + 1 - v16));
}


signed int __fastcall PumpkinBlock::onPlace(PumpkinBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  PumpkinBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return j_j_j__ZNK12PumpkinBlock14_canSpawnGolemER11BlockSourceRK8BlockPos(v5, v4, v3);
}


int __fastcall PumpkinBlock::PumpkinBlock(int a1, const void **a2, char a3, char a4)
{
  int v4; // r7@1
  char v5; // r4@1
  char v6; // r5@1
  const void **v7; // r6@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(24);
  Block::Block(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_271188C;
  *(_BYTE *)(v4 + 641) = v5;
  *(_DWORD *)(v4 + 24) = 35651584;
  *(_DWORD *)(v4 + 28) = 0;
  return v4;
}


ItemInstance *__fastcall PumpkinBlock::asItemInstance(PumpkinBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int *v4; // r2@1

  v4 = &Block::mPumpkin;
  if ( *((_BYTE *)a2 + 641) )
    v4 = &Block::mLitPumpkin;
  return ItemInstance::ItemInstance(this, *v4);
}


signed int __fastcall PumpkinBlock::_golemPumpkinTester(int a1, int a2, int a3, _BYTE *a4)
{
  int v4; // r1@1
  signed int result; // r0@2

  v4 = *a4;
  if ( v4 == *(_BYTE *)(Block::mPumpkin + 4) )
  {
    result = 1;
  }
  else
    result = 0;
    if ( v4 == *(_BYTE *)(Block::mLitPumpkin + 4) )
      result = 1;
  return result;
}


signed int __fastcall PumpkinBlock::dispense(PumpkinBlock *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  BlockSource *v6; // r5@1
  int v7; // r6@1
  Container *v8; // r7@1
  Block *v9; // r0@1
  signed int v10; // r4@4
  Player *v11; // r0@4
  char v13; // [sp+8h] [bp-38h]@3
  char v14; // [sp+Ch] [bp-34h]@3
  char v15; // [sp+18h] [bp-28h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  BlockPos::BlockPos((int)&v15, (int)a5);
  v9 = (Block *)BlockSource::getBlock(v6, (const BlockPos *)&v15);
  if ( Block::isType(v9, (const Block *)Block::mAir) != 1
    || PumpkinBlock::_canDispense((PumpkinBlock *)1, v6, a5, 0) != 1
    || (BlockPos::BlockPos((int)&v14, (int)a5),
        v13 = *(_BYTE *)(Block::mPumpkin + 4),
        BlockSource::setBlockAndData((int)v6, (BlockPos *)&v14, &v13, 0, 3, 0) != 1) )
  {
    v10 = ArmorItem::dispenseArmor((int)v6, (int)v8, v7, (int)a5, a6, 0);
  }
  else
    v10 = 1;
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v8 + 36))(v8, v7, 1);
    v11 = (Player *)BlockSource::getLevel(v6);
    Level::broadcastLevelEvent(v11, 1000, __PAIR__(1000, (unsigned int)a5), 0);
  return v10;
}


signed int __fastcall PumpkinBlock::getMappedFace(PumpkinBlock *this, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r5@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r1@1
  signed int result; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v6 = (v4 >> (*v5 + 1 - (*v5 >> 32))) & (0xFu >> (4 - (*v5 >> 32)));
  result = 1;
  switch ( v3 )
  {
    case 2:
      if ( v6 != 2 )
        goto def_18D1A1E;
      result = 3;
      break;
    case 3:
      if ( v6 )
    case 4:
      if ( v6 != 1 )
    case 5:
      if ( v6 != 3 )
    case 0:
    case 1:
      return result;
    default:
def_18D1A1E:
      result = 2;
  }
  return result;
}


signed int __fastcall PumpkinBlock::_canSpawnGolem(PumpkinBlock *this, BlockSource *a2, const BlockPos *a3)
{
  PumpkinBlock *v3; // r6@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r8@1
  __int64 v6; // r2@1
  BlockPatternBuilder *v7; // r7@1
  _DWORD *v8; // r0@1
  __int64 v9; // r1@1
  int v10; // r0@1
  BlockPatternBuilder *v11; // r0@1
  void *v16; // r0@9
  void *v17; // r0@10
  void *v18; // r0@11
  int v19; // r0@13
  int v20; // r2@13
  void (*v21)(void); // r3@13
  signed int v22; // r9@17
  __int64 v23; // r2@18
  BlockPatternBuilder *v24; // r0@18
  int v25; // r7@18
  _DWORD *v26; // r0@18
  __int64 v27; // r1@18
  int v28; // r0@18
  BlockPatternBuilder *v29; // r0@18
  void *v30; // r0@28
  void *v31; // r0@29
  void *v32; // r0@30
  void *v33; // r0@31
  void *v34; // r0@32
  void *v35; // r0@33
  int v37; // r0@37
  int v38; // r2@37
  void (*v39)(void); // r3@37
  BlockPatternBuilder *v40; // r11@43
  __int64 v41; // r6@44
  unsigned int *v42; // r2@46
  signed int v43; // r1@48
  int *v44; // r0@54
  BlockPatternBuilder *v45; // r11@60
  __int64 v46; // r6@61
  unsigned int *v47; // r2@63
  signed int v48; // r1@65
  int *v49; // r0@71
  unsigned int *v51; // r2@78
  signed int v52; // r1@80
  unsigned int *v53; // r2@82
  signed int v54; // r1@84
  unsigned int *v55; // r2@86
  signed int v56; // r1@88
  unsigned int *v57; // r2@90
  signed int v58; // r1@92
  unsigned int *v59; // r2@94
  signed int v60; // r1@96
  unsigned int *v61; // r2@98
  signed int v62; // r1@100
  unsigned int *v63; // r2@102
  signed int v64; // r1@104
  unsigned int *v65; // r2@106
  signed int v66; // r1@108
  unsigned int *v67; // r2@110
  signed int v68; // r1@112
  int v69; // [sp+8h] [bp-1A8h]@37
  char v70; // [sp+Ch] [bp-1A4h]@37
  unsigned int v71; // [sp+10h] [bp-1A0h]@37
  int v72; // [sp+14h] [bp-19Ch]@37
  int v73; // [sp+18h] [bp-198h]@37
  int v74; // [sp+1Ch] [bp-194h]@37
  int v75; // [sp+20h] [bp-190h]@37
  int v76; // [sp+24h] [bp-18Ch]@37
  int v77; // [sp+28h] [bp-188h]@37
  int v78; // [sp+2Ch] [bp-184h]@37
  int v79; // [sp+30h] [bp-180h]@37
  float v80; // [sp+34h] [bp-17Ch]@37
  int v81; // [sp+38h] [bp-178h]@37
  int v82; // [sp+40h] [bp-170h]@28
  int v83; // [sp+44h] [bp-16Ch]@28
  int v84; // [sp+4Ch] [bp-164h]@28
  int v85; // [sp+50h] [bp-160h]@28
  int v86; // [sp+54h] [bp-15Ch]@29
  int v87; // [sp+58h] [bp-158h]@28
  int v88; // [sp+5Ch] [bp-154h]@28
  int v89; // [sp+60h] [bp-150h]@26
  float v90; // [sp+64h] [bp-14Ch]@26
  int v91; // [sp+68h] [bp-148h]@26
  unsigned int v92; // [sp+70h] [bp-140h]@25
  int v93; // [sp+74h] [bp-13Ch]@37
  int v94; // [sp+78h] [bp-138h]@37
  int v95; // [sp+7Ch] [bp-134h]@37
  int v96; // [sp+80h] [bp-130h]@37
  int v97; // [sp+84h] [bp-12Ch]@37
  int v98; // [sp+88h] [bp-128h]@37
  int v99; // [sp+8Ch] [bp-124h]@37
  int v100; // [sp+90h] [bp-120h]@26
  float v101; // [sp+94h] [bp-11Ch]@26
  int v102; // [sp+98h] [bp-118h]@26
  char v103; // [sp+A0h] [bp-110h]@18
  void (*v104)(void); // [sp+A8h] [bp-108h]@18
  char v105; // [sp+B0h] [bp-100h]@18
  _DWORD *v106; // [sp+B4h] [bp-FCh]@18
  __int64 v107; // [sp+BCh] [bp-F4h]@18
  char v108; // [sp+C4h] [bp-ECh]@18
  char v109; // [sp+C8h] [bp-E8h]@18
  void (*v110)(void); // [sp+D0h] [bp-E0h]@18
  char v111; // [sp+D8h] [bp-D8h]@18
  BlockPatternBuilder *v112; // [sp+DCh] [bp-D4h]@18
  int v113; // [sp+E0h] [bp-D0h]@13
  char v114; // [sp+E4h] [bp-CCh]@13
  int v115; // [sp+E8h] [bp-C8h]@13
  int v116; // [sp+ECh] [bp-C4h]@13
  int v117; // [sp+F0h] [bp-C0h]@13
  int v118; // [sp+F4h] [bp-BCh]@13
  int v119; // [sp+F8h] [bp-B8h]@13
  int v120; // [sp+FCh] [bp-B4h]@13
  int v121; // [sp+100h] [bp-B0h]@13
  int v122; // [sp+104h] [bp-ACh]@13
  float v123; // [sp+108h] [bp-A8h]@13
  float v124; // [sp+10Ch] [bp-A4h]@13
  int v125; // [sp+110h] [bp-A0h]@13
  int v126; // [sp+114h] [bp-9Ch]@9
  int v127; // [sp+118h] [bp-98h]@10
  int v128; // [sp+11Ch] [bp-94h]@9
  int v129; // [sp+120h] [bp-90h]@9
  float v130; // [sp+124h] [bp-8Ch]@9
  int v131; // [sp+130h] [bp-80h]@6
  int v132; // [sp+134h] [bp-7Ch]@13
  int v133; // [sp+138h] [bp-78h]@13
  int v134; // [sp+13Ch] [bp-74h]@13
  int v135; // [sp+140h] [bp-70h]@13
  int v136; // [sp+144h] [bp-6Ch]@13
  int v137; // [sp+148h] [bp-68h]@13
  int v138; // [sp+14Ch] [bp-64h]@13
  float v139; // [sp+150h] [bp-60h]@7
  float v140; // [sp+154h] [bp-5Ch]@7
  int v141; // [sp+158h] [bp-58h]@7
  char v142; // [sp+15Ch] [bp-54h]@1
  void (*v143)(void); // [sp+164h] [bp-4Ch]@1
  char v144; // [sp+16Ch] [bp-44h]@1
  _DWORD *v145; // [sp+170h] [bp-40h]@1
  __int64 v146; // [sp+178h] [bp-38h]@1
  char v147; // [sp+180h] [bp-30h]@1
  BlockPatternBuilder *v148; // [sp+184h] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockPatternBuilder::start((BlockPatternBuilder *)&v148, a2);
  LODWORD(v6) = "^";
  HIDWORD(v6) = "#";
  v7 = BlockPatternBuilder::aisle(v148, 3, v6, "#");
  v147 = *(_BYTE *)(Block::mPumpkin + 4);
  v8 = operator new(0xCu);
  LODWORD(v9) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (PumpkinBlock::*)(BlockSource &,BlockPos const&,BlockID)const> ()(PumpkinBlock const*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>>::_M_manager;
  HIDWORD(v9) = std::_Function_handler<bool ()(BlockSource &,BlockPos const&,BlockID),std::_Bind<std::_Mem_fn<bool (PumpkinBlock::*)(BlockSource &,BlockPos const&,BlockID)const> ()(PumpkinBlock const*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>>::_M_invoke;
  *v8 = PumpkinBlock::_golemPumpkinTester;
  v8[1] = 0;
  v8[2] = v3;
  v145 = v8;
  v146 = v9;
  v10 = BlockPatternBuilder::define((int)v7, 0x5Eu, &v147, (int)&v145);
  v144 = *(_BYTE *)(Block::mSnow + 4);
  v143 = 0;
  v11 = (BlockPatternBuilder *)BlockPatternBuilder::define(v10, 0x23u, &v144, (int)&v142);
  BlockPatternBuilder::build(v11);
  if ( v143 )
    v143();
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  if ( BlockPatternBuilder::isReadyForMatch(v148) != 1 )
    goto LABEL_152;
  BlockPatternBuilder::match((BlockPatternBuilder *)&v131, v148, (int)v4, 0, 0);
  if ( !(_BYTE)v131 )
  __asm
  {
    VMOV.F32        S2, #0.5
    VLDR            S4, [SP,#0x1B0+var_60]
    VLDR            S0, [SP,#0x1B0+var_5C]
    VLDR            S8, =0.05
    VLDR            S6, [SP,#0x1B0+var_58]
    VADD.F32        S8, S0, S8
    VADD.F32        S4, S4, S2
    VADD.F32        S2, S6, S2
    VSTR            S4, [SP,#0x1B0+var_8C]
    VSTR            S8, [SP,#0x1B0+var_88]
    VSTR            S2, [SP,#0x1B0+var_84]
  }
  if ( !(!_ZF & _CF) )
    __asm
    {
      VLDRLS          S2, =2.05
      VADDLS.F32      S0, S0, S2
      VSTRLS          S0, [SP,#0x1B0+var_88]
    }
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v126, 789);
  EntityFactory::createSpawnedEntity((Entity **)&v129, (const void **)&v126, 0, (int)&v130, &Vec2::ZERO);
  v16 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v128 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
    else
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v127 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v126 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( v129 )
    v115 = v131;
    v116 = v132;
    v117 = v133;
    v118 = v134;
    v119 = v135;
    v120 = v136;
    v121 = v137;
    v122 = v138;
    v125 = v141;
    v123 = v139;
    v124 = v140;
    v114 = BlockID::AIR;
    BlockPatternBuilder::replaceBlocks((signed int)v148, 32, (int)&v115, &v114, 0);
    v19 = BlockSource::getLevel(v5);
    v20 = v129;
    v21 = *(void (**)(void))(*(_DWORD *)v19 + 44);
    v129 = 0;
    v113 = v20;
    v21();
    if ( v113 )
      (*(void (**)(void))(*(_DWORD *)v113 + 32))();
    v113 = 0;
    if ( v129 )
      (*(void (**)(void))(*(_DWORD *)v129 + 32))();
    v22 = 1;
  else
LABEL_152:
    BlockPatternBuilder::start((BlockPatternBuilder *)&v112, v5);
    LODWORD(v23) = "~^~";
    HIDWORD(v23) = "###";
    v24 = BlockPatternBuilder::aisle(v112, 3, v23, "~#~");
    v111 = *(_BYTE *)(Block::mAir + 4);
    v110 = 0;
    v25 = BlockPatternBuilder::define((int)v24, 0x7Eu, &v111, (int)&v109);
    v108 = *(_BYTE *)(Block::mPumpkin + 4);
    v26 = operator new(0xCu);
    LODWORD(v27) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (PumpkinBlock::*)(BlockSource &,BlockPos const&,BlockID)const> ()(PumpkinBlock const*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>>::_M_manager;
    HIDWORD(v27) = std::_Function_handler<bool ()(BlockSource &,BlockPos const&,BlockID),std::_Bind<std::_Mem_fn<bool (PumpkinBlock::*)(BlockSource &,BlockPos const&,BlockID)const> ()(PumpkinBlock const*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>>::_M_invoke;
    *v26 = PumpkinBlock::_golemPumpkinTester;
    v26[1] = 0;
    v26[2] = v3;
    v106 = v26;
    v107 = v27;
    v28 = BlockPatternBuilder::define(v25, 0x5Eu, &v108, (int)&v106);
    v105 = *(_BYTE *)(Block::mIronBlock + 4);
    v104 = 0;
    v29 = (BlockPatternBuilder *)BlockPatternBuilder::define(v28, 0x23u, &v105, (int)&v103);
    BlockPatternBuilder::build(v29);
    if ( v104 )
      v104();
    if ( (_DWORD)v107 )
      ((void (*)(void))v107)();
    if ( v110 )
      v110();
    if ( BlockPatternBuilder::isReadyForMatch(v112) != 1 )
      goto LABEL_153;
    BlockPatternBuilder::match((BlockPatternBuilder *)&v92, v112, (int)v4);
    if ( !(_BYTE)v92 )
    v89 = v100;
    v90 = v101;
    v91 = v102;
    if ( (unsigned __int8)((v92 >> 16) - 1) <= 4u )
      __asm
      {
        VMOVLS.F32      S0, #2.0
        VLDRLS          S2, [SP,#0x1B0+var_14C]
        VADDLS.F32      S0, S2, S0
        VSTRLS          S0, [SP,#0x1B0+var_14C]
      }
    sub_21E94B4((void **)&v84, "minecraft");
    EntityTypeToString((void **)&v83, 0x314u, 0);
    sub_21E94B4((void **)&v82, "minecraft:from_player");
    EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v85, &v84, &v83, &v82);
    EntityFactory::createSpawnedEntity((Entity **)&v88, (const void **)&v85, 0, (int)&v89, &Vec2::ZERO);
    v30 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v87 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
      else
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v31 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v86 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v32 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v85 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v33 = (void *)(v82 - 12);
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v82 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v83 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v84 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    if ( v88 )
      if ( (BYTE1(v92) & 0xFE) == 2 )
        _R0 = v88 + 3412;
        __asm
        {
          VLDR            S0, =90.0
          VLDR            S2, [R0]
          VADD.F32        S0, S2, S0
          VSTR            S0, [R0]
        }
      v71 = v92;
      v72 = v93;
      v73 = v94;
      v74 = v95;
      v75 = v96;
      v76 = v97;
      v77 = v98;
      v78 = v99;
      v81 = v102;
      v79 = v100;
      v80 = v101;
      v70 = BlockID::AIR;
      BlockPatternBuilder::replaceBlocks((signed int)v112, 32, (int)&v71, &v70, 0);
      v37 = BlockSource::getLevel(v5);
      v38 = v88;
      v39 = *(void (**)(void))(*(_DWORD *)v37 + 44);
      v88 = 0;
      v69 = v38;
      v39();
      if ( v69 )
        (*(void (**)(void))(*(_DWORD *)v69 + 32))();
      v69 = 0;
      if ( v88 )
        (*(void (**)(void))(*(_DWORD *)v88 + 32))();
      v22 = 1;
LABEL_153:
      v22 = 0;
    v40 = v112;
    if ( v112 )
      std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
        (int)v112 + 16,
        *((_DWORD *)v112 + 6));
      v41 = *(_QWORD *)((char *)v40 + 4);
      if ( (_DWORD)v41 != HIDWORD(v41) )
          v44 = (int *)(*(_DWORD *)v41 - 12);
          if ( v44 != &dword_28898C0 )
          {
            v42 = (unsigned int *)(*(_DWORD *)v41 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
            }
            else
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
          }
          LODWORD(v41) = v41 + 4;
        while ( (_DWORD)v41 != HIDWORD(v41) );
        LODWORD(v41) = *((_DWORD *)v40 + 1);
      if ( (_DWORD)v41 )
        operator delete((void *)v41);
      operator delete((void *)v40);
  v45 = v148;
  if ( v148 )
    std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
      (int)v148 + 16,
      *((_DWORD *)v148 + 6));
    v46 = *(_QWORD *)((char *)v45 + 4);
    if ( (_DWORD)v46 != HIDWORD(v46) )
        v49 = (int *)(*(_DWORD *)v46 - 12);
        if ( v49 != &dword_28898C0 )
          v47 = (unsigned int *)(*(_DWORD *)v46 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
          else
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        LODWORD(v46) = v46 + 4;
      while ( (_DWORD)v46 != HIDWORD(v46) );
      LODWORD(v46) = *((_DWORD *)v45 + 1);
    if ( (_DWORD)v46 )
      operator delete((void *)v46);
    operator delete((void *)v45);
  return v22;
}


void __fastcall PumpkinBlock::~PumpkinBlock(PumpkinBlock *this)
{
  PumpkinBlock::~PumpkinBlock(this);
}


signed int __fastcall PumpkinBlock::_canDispense(PumpkinBlock *this, BlockSource *a2, const Vec3 *a3, signed __int8 a4)
{
  const Vec3 *v4; // r4@1
  BlockSource *v5; // r5@1
  __int64 v6; // r2@1
  BlockPatternBuilder *v7; // r0@1
  int v8; // r0@1
  BlockPatternBuilder *v9; // r0@1
  BlockPatternBuilder *v10; // r6@6
  signed int v11; // r9@7
  __int64 v12; // r2@8
  BlockPatternBuilder *v13; // r0@8
  int v14; // r0@8
  BlockPatternBuilder *v15; // r0@8
  BlockPatternBuilder *v16; // r5@13
  BlockPatternBuilder *v17; // r11@16
  __int64 v18; // r6@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  int *v21; // r0@27
  BlockPatternBuilder *v22; // r11@33
  __int64 v23; // r6@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  int *v26; // r0@44
  char v28; // [sp+8h] [bp-F0h]@13
  char v29; // [sp+14h] [bp-E4h]@13
  char v30; // [sp+40h] [bp-B8h]@8
  void (*v31)(void); // [sp+48h] [bp-B0h]@8
  char v32; // [sp+50h] [bp-A8h]@8
  char v33; // [sp+54h] [bp-A4h]@8
  void (*v34)(void); // [sp+5Ch] [bp-9Ch]@8
  char v35; // [sp+64h] [bp-94h]@8
  BlockPatternBuilder *v36; // [sp+68h] [bp-90h]@8
  char v37; // [sp+6Ch] [bp-8Ch]@6
  char v38; // [sp+78h] [bp-80h]@6
  char v39; // [sp+A4h] [bp-54h]@1
  void (*v40)(void); // [sp+ACh] [bp-4Ch]@1
  char v41; // [sp+B4h] [bp-44h]@1
  char v42; // [sp+B8h] [bp-40h]@1
  void (*v43)(void); // [sp+C0h] [bp-38h]@1
  char v44; // [sp+C8h] [bp-30h]@1
  BlockPatternBuilder *v45; // [sp+CCh] [bp-2Ch]@1

  v4 = a3;
  v5 = a2;
  BlockPatternBuilder::start((BlockPatternBuilder *)&v45, a2);
  LODWORD(v6) = "~";
  HIDWORD(v6) = "#";
  v7 = BlockPatternBuilder::aisle(v45, 3, v6, "#");
  v44 = *(_BYTE *)(Block::mAir + 4);
  v43 = 0;
  v8 = BlockPatternBuilder::define((int)v7, 0x7Eu, &v44, (int)&v42);
  v41 = *(_BYTE *)(Block::mSnow + 4);
  v40 = 0;
  v9 = (BlockPatternBuilder *)BlockPatternBuilder::define(v8, 0x23u, &v41, (int)&v39);
  BlockPatternBuilder::build(v9);
  if ( v40 )
    v40();
  if ( v43 )
    v43();
  if ( BlockPatternBuilder::isReadyForMatch(v45) == 1
    && (v10 = v45,
        BlockPos::BlockPos((int)&v37, (int)v4),
        BlockPatternBuilder::match((BlockPatternBuilder *)&v38, v10, (int)&v37, 0, 0),
        v38) )
  {
    v11 = 1;
  }
  else
    BlockPatternBuilder::start((BlockPatternBuilder *)&v36, v5);
    LODWORD(v12) = "~ ~";
    HIDWORD(v12) = "###";
    v13 = BlockPatternBuilder::aisle(v36, 3, v12, "~#~");
    v35 = *(_BYTE *)(Block::mAir + 4);
    v34 = 0;
    v14 = BlockPatternBuilder::define((int)v13, 0x7Eu, &v35, (int)&v33);
    v32 = *(_BYTE *)(Block::mIronBlock + 4);
    v31 = 0;
    v15 = (BlockPatternBuilder *)BlockPatternBuilder::define(v14, 0x23u, &v32, (int)&v30);
    BlockPatternBuilder::build(v15);
    if ( v31 )
      v31();
    if ( v34 )
      v34();
    v11 = 0;
    if ( BlockPatternBuilder::isReadyForMatch(v36) == 1 )
    {
      v16 = v36;
      BlockPos::BlockPos((int)&v28, (int)v4);
      BlockPatternBuilder::match((BlockPatternBuilder *)&v29, v16, (int)&v28);
      if ( v29 )
        v11 = 1;
    }
    v17 = v36;
    if ( v36 )
      std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
        (int)v36 + 16,
        *((_DWORD *)v36 + 6));
      v18 = *(_QWORD *)((char *)v17 + 4);
      if ( (_DWORD)v18 != HIDWORD(v18) )
      {
        do
        {
          v21 = (int *)(*(_DWORD *)v18 - 12);
          if ( v21 != &dword_28898C0 )
          {
            v19 = (unsigned int *)(*(_DWORD *)v18 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            }
            else
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          }
          LODWORD(v18) = v18 + 4;
        }
        while ( (_DWORD)v18 != HIDWORD(v18) );
        LODWORD(v18) = *((_DWORD *)v17 + 1);
      }
      if ( (_DWORD)v18 )
        operator delete((void *)v18);
      operator delete((void *)v17);
  v22 = v45;
  if ( v45 )
    std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
      (int)v45 + 16,
      *((_DWORD *)v45 + 6));
    v23 = *(_QWORD *)((char *)v22 + 4);
    if ( (_DWORD)v23 != HIDWORD(v23) )
      do
        v26 = (int *)(*(_DWORD *)v23 - 12);
        if ( v26 != &dword_28898C0 )
          v24 = (unsigned int *)(*(_DWORD *)v23 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        LODWORD(v23) = v23 + 4;
      while ( (_DWORD)v23 != HIDWORD(v23) );
      LODWORD(v23) = *((_DWORD *)v22 + 1);
    if ( (_DWORD)v23 )
      operator delete((void *)v23);
    operator delete((void *)v22);
  return v11;
}


void __fastcall PumpkinBlock::~PumpkinBlock(PumpkinBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
