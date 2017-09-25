

void __fastcall SkullBlock::~SkullBlock(SkullBlock *this)
{
  SkullBlock::~SkullBlock(this);
}


AABB *__fastcall SkullBlock::getVisualShape(SkullBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  BlockSource *v5; // r6@1
  AABB *v6; // r8@1
  const BlockPos *v7; // r5@1
  unsigned __int64 *v8; // r7@1
  __int64 v9; // r0@3
  __int64 v10; // r2@3
  signed __int64 v12; // [sp+0h] [bp-28h]@3
  float v13; // [sp+8h] [bp-20h]@3

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  switch ( (BlockSource::getData(v5, v7) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32))) )
  {
    case 2u:
      AABB::set(__PAIR__(1048576000, (unsigned int)v6), 4539628425438035968LL, 0.75, 0.75, 1.0);
      return v6;
    case 3u:
      AABB::set(__PAIR__(1048576000, (unsigned int)v6), 1048576000LL, 0.75, 0.75, 0.5);
    case 4u:
      v12 = 4557642823964295168LL;
      v13 = 0.75;
      v9 = __PAIR__(1056964608, (unsigned int)v6);
      goto LABEL_7;
    case 5u:
      v12 = 4557642823955906560LL;
      v9 = (unsigned int)v6;
LABEL_7:
      LODWORD(v10) = 1048576000;
      break;
    default:
      v12 = 4539628425450618880LL;
      v9 = __PAIR__(1048576000, (unsigned int)v6);
      LODWORD(v10) = 0;
  }
  HIDWORD(v10) = 1048576000;
  AABB::set(v9, v10, *(float *)&v12, *((float *)&v12 + 1), v13);
  return v6;
}


int __fastcall SkullBlock::getPlacementDataValue(SkullBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  SkullBlock *v6; // r4@1
  float v12; // r1@1
  char v13; // r8@1
  BlockState *v14; // r0@1
  _BOOL4 v15; // r6@1
  BlockState *v16; // r0@1
  int v17; // r5@1
  int v18; // r7@1
  _BOOL4 v19; // r6@1
  int v20; // r0@1
  BlockState *v21; // r0@4
  signed int v22; // r4@4
  unsigned int v23; // r0@4
  BlockState *v24; // r0@5
  char v25; // r1@5
  signed int v26; // r2@5
  unsigned __int8 v28; // [sp+7h] [bp-21h]@1
  char v29; // [sp+8h] [bp-20h]@1

  v6 = this;
  Entity::getRotation((Entity *)&v29, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #2.5
    VLDR            S2, [SP,#0x28+var_1C]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  v13 = mce::Math::floor(_R0, v12);
  v14 = (BlockState *)Block::getBlockState((int)v6, 23);
  v28 = a6;
  v15 = BlockState::getBool(v14, &v28);
  v16 = (BlockState *)Block::getBlockState((int)v6, 23);
  v17 = *(_QWORD *)v16 >> 32;
  v18 = *(_QWORD *)v16;
  BlockState::getMask(v16);
  v19 = v15 << (v18 + 1 - v17);
  v20 = v13 & 3;
  if ( v20 == 1 )
    v24 = (BlockState *)Block::getBlockState((int)v6, 15);
    v25 = *(_QWORD *)v24 + 1 - (unsigned int)(*(_QWORD *)v24 >> 32);
    v26 = 5;
LABEL_8:
    v22 = v26 << v25;
    v23 = (unsigned __int8)(v19 & ~(unsigned __int8)BlockState::getMask(v24));
    return (unsigned __int8)v23 | (unsigned __int8)v22;
  if ( v20 == 2 )
    v26 = 3;
    goto LABEL_8;
  if ( v20 != 3 )
    v26 = 2;
  v21 = (BlockState *)Block::getBlockState((int)v6, 15);
  v22 = 4 << (*(_QWORD *)v21 + 1 - (unsigned int)(*(_QWORD *)v21 >> 32));
  v23 = (BlockState::getMask(v21) ^ 0xFF) & v19;
  return (unsigned __int8)v23 | (unsigned __int8)v22;
}


int __fastcall SkullBlock::onRemove(SkullBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  int result; // r0@1
  BlockState *v8; // r0@2
  SkullBlockEntity *v9; // r0@3
  int v10; // r7@4
  int v11; // r0@4
  Dimension *v12; // r0@10
  CircuitSystem *v13; // r0@10
  int v14; // [sp+0h] [bp-68h]@4
  int v15; // [sp+8h] [bp-60h]@8
  void *v16; // [sp+24h] [bp-44h]@6
  void *ptr; // [sp+34h] [bp-34h]@4
  char v18; // [sp+4Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    BlockSource::getBlockAndData((BlockSource *)&v18, v3, (int)v5);
    v8 = (BlockState *)Block::getBlockState((int)v4, 23);
    if ( !BlockState::getBool(v8, (const unsigned __int8 *)((unsigned int)&v18 | 1)) )
    {
      v9 = (SkullBlockEntity *)BlockSource::getBlockEntity(v3, v5);
      if ( v9 )
      {
        v10 = *(_WORD *)(Item::mSkull + 18);
        v11 = SkullBlockEntity::getSkullType(v9);
        ItemInstance::ItemInstance((ItemInstance *)&v14, v10, 1, v11);
        Block::popResource(v4, v3, v5, (const ItemInstance *)&v14);
        if ( ptr )
          operator delete(ptr);
        if ( v16 )
          operator delete(v16);
        if ( v15 )
          (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      }
    }
    v12 = (Dimension *)BlockSource::getDimension(v3);
    v13 = (CircuitSystem *)Dimension::getCircuitSystem(v12);
    CircuitSystem::removeComponents(v13, v5);
    result = Block::onRemove(v4, v3, v5);
  }
  return result;
}


int __fastcall SkullBlock::SkullBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-30h]@1
  int v15; // [sp+4h] [bp-2Ch]@1
  int v16; // [sp+8h] [bp-28h]@1
  signed int v17; // [sp+Ch] [bp-24h]@1
  signed int v18; // [sp+10h] [bp-20h]@1
  int v19; // [sp+14h] [bp-1Ch]@1
  int v20; // [sp+18h] [bp-18h]@1
  signed int v21; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(15);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2713AE8;
  v19 = 1048576000;
  v20 = 0;
  v21 = 1048576000;
  v16 = 1061158912;
  v17 = 1056964608;
  v18 = 1061158912;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v19, (const Vec3 *)&v16);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 6;
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
    VSTR            S0, [SP,#0x30+var_30]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


void __fastcall SkullBlock::~SkullBlock(SkullBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall SkullBlock::buildDescriptionId(SkullBlock *this, int a2, int a3)
{
  SkullBlock *v3; // r4@1
  int v4; // r5@1
  int *v5; // r0@1
  __int64 v6; // kr00_8@1
  unsigned int v7; // r1@1
  const void **v8; // r0@3
  const void **v9; // r0@5
  char *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  int v22; // [sp+4h] [bp-24h]@1
  unsigned int v23; // [sp+8h] [bp-20h]@1
  char *v24; // [sp+Ch] [bp-1Ch]@5
  int v25; // [sp+10h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = sub_21E8AF4(&v25, (int *)(a2 + 8));
  sub_21E91FC((const void **)v5, 0, 4u, "item", (_BYTE *)4);
  sub_21E8AF4((int *)&v23, &v25);
  sub_21E7408((const void **)&v23, ".", 1u);
  SkullBlock::getTypeDescriptionId((SkullBlock *)&v22, v4);
  v6 = *(_QWORD *)(v23 - 12);
  v7 = *(_DWORD *)(v22 - 12) + v6;
  if ( v7 > HIDWORD(v6) && v7 <= *(_DWORD *)(v22 - 8) )
    v8 = sub_21E82D8((const void **)&v22, 0, v23, (_BYTE *)v6);
  else
    v8 = sub_21E72F0((const void **)&v23, (const void **)&v22);
  v24 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_21E7408((const void **)&v24, ".name", 5u);
  *(_DWORD *)v3 = *v9;
  *v9 = &unk_28898CC;
  v10 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


signed int __fastcall SkullBlock::checkMobSpawn(SkullBlock *this, Level *a2, BlockSource *a3, const BlockPos *a4, SkullBlockEntity *a5)
{
  SkullBlock *v5; // r6@1
  const BlockPos *v6; // r7@1
  BlockSource *v7; // r5@1
  Level *v8; // r8@1
  signed int v9; // r4@5
  __int64 v11; // r2@7
  BlockPatternBuilder *v12; // r9@7
  _DWORD *v13; // r0@7
  __int64 v14; // r1@7
  int v15; // r0@7
  int v16; // r0@7
  BlockPatternBuilder *v17; // r0@7
  Level *v22; // r0@15
  Spawner *v23; // r4@15
  Mob *v24; // r9@15
  void *v25; // r0@15
  void *v26; // r0@16
  void *v27; // r0@17
  char *v29; // r5@21
  signed int v30; // r6@21
  BlockPatternBuilder *v34; // r9@25
  __int64 v35; // r6@26
  unsigned int *v36; // r2@28
  signed int v37; // r1@30
  int *v38; // r0@36
  unsigned int *v39; // r2@42
  signed int v40; // r1@44
  unsigned int *v41; // r2@46
  signed int v42; // r1@48
  unsigned int *v43; // r2@50
  signed int v44; // r1@52
  float v45; // [sp+10h] [bp-110h]@22
  char v46; // [sp+1Ch] [bp-104h]@21
  int v47; // [sp+20h] [bp-100h]@21
  int v48; // [sp+24h] [bp-FCh]@21
  int v49; // [sp+28h] [bp-F8h]@21
  int v50; // [sp+2Ch] [bp-F4h]@21
  int v51; // [sp+30h] [bp-F0h]@21
  int v52; // [sp+34h] [bp-ECh]@21
  int v53; // [sp+38h] [bp-E8h]@21
  int v54; // [sp+3Ch] [bp-E4h]@21
  float v55; // [sp+40h] [bp-E0h]@21
  float v56; // [sp+44h] [bp-DCh]@21
  int v57; // [sp+48h] [bp-D8h]@21
  int v58; // [sp+50h] [bp-D0h]@15
  int v59; // [sp+54h] [bp-CCh]@16
  int v60; // [sp+58h] [bp-C8h]@15
  float v61; // [sp+5Ch] [bp-C4h]@15
  char v64; // [sp+68h] [bp-B8h]@14
  char v65; // [sp+69h] [bp-B7h]@19
  int v66; // [sp+6Ch] [bp-B4h]@21
  int v67; // [sp+70h] [bp-B0h]@21
  int v68; // [sp+74h] [bp-ACh]@21
  int v69; // [sp+78h] [bp-A8h]@21
  int v70; // [sp+7Ch] [bp-A4h]@21
  int v71; // [sp+80h] [bp-A0h]@21
  int v72; // [sp+84h] [bp-9Ch]@21
  float v73; // [sp+88h] [bp-98h]@15
  float v74; // [sp+8Ch] [bp-94h]@15
  int v75; // [sp+90h] [bp-90h]@15
  char v76; // [sp+94h] [bp-8Ch]@7
  void (*v77)(void); // [sp+9Ch] [bp-84h]@7
  char v78; // [sp+A4h] [bp-7Ch]@7
  char v79; // [sp+A8h] [bp-78h]@7
  void (*v80)(void); // [sp+B0h] [bp-70h]@7
  char v81; // [sp+B8h] [bp-68h]@7
  _DWORD *v82; // [sp+BCh] [bp-64h]@7
  __int64 v83; // [sp+C4h] [bp-5Ch]@7
  char v84; // [sp+CCh] [bp-54h]@7
  BlockPatternBuilder *v85; // [sp+D0h] [bp-50h]@7

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( SkullBlockEntity::getSkullType(a5) == 1
    && *((_DWORD *)v6 + 1) >= 2
    && Level::getDifficulty(v8)
    && !Level::isClientSide(v8) )
  {
    BlockPatternBuilder::start((BlockPatternBuilder *)&v85, v7);
    LODWORD(v11) = "^^^";
    HIDWORD(v11) = "###";
    v12 = BlockPatternBuilder::aisle(v85, 3, v11, "~#~");
    v84 = *(_BYTE *)(Block::mSkull + 4);
    v13 = operator new(0xCu);
    LODWORD(v14) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (SkullBlock::*)(BlockSource &,BlockPos const&,BlockID)const> ()(SkullBlock const*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>>::_M_manager;
    HIDWORD(v14) = std::_Function_handler<bool ()(BlockSource &,BlockPos const&,BlockID),std::_Bind<std::_Mem_fn<bool (SkullBlock::*)(BlockSource &,BlockPos const&,BlockID)const> ()(SkullBlock const*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>>::_M_invoke;
    *v13 = SkullBlock::_witherSkullTester;
    v13[1] = 0;
    v13[2] = v5;
    v82 = v13;
    v83 = v14;
    v15 = BlockPatternBuilder::define((int)v12, 0x5Eu, &v84, (int)&v82);
    v81 = *(_BYTE *)(Block::mSoulSand + 4);
    v80 = 0;
    v16 = BlockPatternBuilder::define(v15, 0x23u, &v81, (int)&v79);
    v78 = *(_BYTE *)(Block::mAir + 4);
    v77 = 0;
    v17 = (BlockPatternBuilder *)BlockPatternBuilder::define(v16, 0x7Eu, &v78, (int)&v76);
    BlockPatternBuilder::build(v17);
    if ( v77 )
      v77();
    if ( v80 )
      v80();
    if ( (_DWORD)v83 )
      ((void (*)(void))v83)();
    if ( BlockPatternBuilder::isReadyForMatch(v85) != 1 )
      goto LABEL_68;
    BlockPatternBuilder::match((BlockPatternBuilder *)&v64, v85, (int)v6);
    if ( !v64 )
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [SP,#0x120+var_98]
      VLDR            S4, [SP,#0x120+var_94]
      VLDR            S8, =0.05
      VLDR            S6, [SP,#0x120+var_90]
      VADD.F32        S4, S4, S8
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0x120+var_C4]
      VSTR            S4, [SP,#0x120+var_C0]
      VSTR            S0, [SP,#0x120+var_BC]
    }
    v22 = (Level *)BlockSource::getLevel(v7);
    v23 = (Spawner *)Level::getSpawner(v22);
    EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v58, 68404);
    v24 = (Mob *)Spawner::spawnMob(v23, v7, (const EntityDefinitionIdentifier *)&v58, 0, (const Vec3 *)&v61, 0, 1, 0);
    v25 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v60 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
      }
      else
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v59 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v58 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    if ( v24 )
      if ( (v65 & 0xFE) == 2 )
        _R0 = (int)v24 + 3412;
        __asm
        {
          VLDR            S0, =90.0
          VLDR            S2, [R0]
          VADD.F32        S0, S2, S0
          VSTR            S0, [R0]
        }
      Mob::resetAttributes(v24);
      v47 = *(_DWORD *)&v64;
      v48 = v66;
      v49 = v67;
      v50 = v68;
      v51 = v69;
      v52 = v70;
      v53 = v71;
      v54 = v72;
      v57 = v75;
      v55 = v73;
      v56 = v74;
      v46 = BlockID::AIR;
      BlockPatternBuilder::replaceBlocks((signed int)v85, 32, (int)&v47, &v46, 1);
      WitherBoss::awardSpawnWitherAchievement(v24);
      v29 = Level::getRandom(v8);
      __asm
        VMOV.F32        S20, #-2.0
        VLDR            D8, =2.32830644e-10
        VLDR            S18, =3.9
      v30 = 0;
      do
        _R0 = Random::_genRandInt32((Random *)v29);
          VMOV            S0, R0
          VCVT.F64.U32    D11, S0
        _R4 = Random::_genRandInt32((Random *)v29);
          VMOV            S2, R4
          VMOV            S4, R0
          VCVT.F64.U32    D1, S2
          VMUL.F64        D1, D1, D8
          VCVT.F64.U32    D2, S4
          VCVT.F32.F64    S2, D1
          VMUL.F64        D2, D2, D8
          VMUL.F64        D0, D11, D8
          VMUL.F32        S2, S2, S18
          VLDR            S6, [SP,#0x120+var_C4]
          VCVT.F32.F64    S0, D0
          VADD.F32        S2, S2, S20
          VLDR            S8, [SP,#0x120+var_C0]
          VCVT.F32.F64    S4, D2
          VLDR            S10, [SP,#0x120+var_BC]
          VADD.F32        S0, S6, S0
          VADD.F32        S2, S2, S8
          VADD.F32        S4, S10, S4
          VSTR            S0, [SP,#0x120+var_110]
          VSTR            S2, [SP,#0x120+var_10C]
          VSTR            S4, [SP,#0x120+var_108]
        Level::addParticle((int)v8, 13, (int)&v45);
        ++v30;
      while ( v30 < 120 );
      v9 = 1;
    else
LABEL_68:
      v9 = 0;
    v34 = v85;
    if ( v85 )
      std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
        (int)v85 + 16,
        *((_DWORD *)v85 + 6));
      v35 = *(_QWORD *)((char *)v34 + 4);
      if ( (_DWORD)v35 != HIDWORD(v35) )
          v38 = (int *)(*(_DWORD *)v35 - 12);
          if ( v38 != &dword_28898C0 )
          {
            v36 = (unsigned int *)(*(_DWORD *)v35 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
            }
            else
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v38);
          }
          LODWORD(v35) = v35 + 4;
        while ( (_DWORD)v35 != HIDWORD(v35) );
        LODWORD(v35) = *((_DWORD *)v34 + 1);
      if ( (_DWORD)v35 )
        operator delete((void *)v35);
      operator delete((void *)v34);
  }
  else
    v9 = 0;
  return v9;
}


int __fastcall SkullBlock::onPlace(SkullBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a3;
  v4 = a2;
  Block::onPlace(this, a2, a3);
  v5 = (Level *)BlockSource::getLevel(v4);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v4);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ConsumerComponent>(v8, v3, (int)v4, 0);
    if ( result )
      *(_BYTE *)(result + 46) = 1;
  }
  return result;
}


int *__fastcall SkullBlock::getTypeDescriptionId(SkullBlock *this, int a2)
{
  int *v2; // r4@1
  unsigned int v3; // r5@1
  char v4; // r0@1

  v2 = (int *)this;
  v3 = a2;
  v4 = byte_2814414;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2814414) )
  {
    sub_21E94B4((void **)&dword_2814418, "skeleton");
    sub_21E94B4((void **)&unk_281441C, "wither");
    sub_21E94B4((void **)&unk_2814420, "zombie");
    sub_21E94B4((void **)&unk_2814424, "char");
    sub_21E94B4((void **)&unk_2814428, "creeper");
    sub_21E94B4((void **)&unk_281442C, "dragon");
    _cxa_atexit(std::array<std::string,6u>::~array);
    j___cxa_guard_release((unsigned int *)&byte_2814414);
  }
  if ( v3 > 5 )
    v3 = 0;
  return sub_21E8AF4(v2, (int *)&unk_2814410 + v3 + 2);
}


ItemInstance *__fastcall SkullBlock::asItemInstance(SkullBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ItemInstance *v4; // r4@1
  SkullBlockEntity *v5; // r0@1
  int v6; // r5@1
  int v7; // r0@1

  v4 = this;
  v5 = (SkullBlockEntity *)BlockSource::getBlockEntity(a3, (const BlockPos *)a4);
  v6 = *(_WORD *)(Item::mSkull + 18);
  v7 = SkullBlockEntity::getSkullType(v5);
  return ItemInstance::ItemInstance(v4, v6, 1, v7);
}


void __fastcall SkullBlock::buildDescriptionId(SkullBlock *this, int a2, int a3)
{
  SkullBlock::buildDescriptionId(this, a2, a3);
}


int __fastcall SkullBlock::_witherSkullTester(int a1, BlockSource *a2, const BlockPos *a3, _BYTE *a4)
{
  SkullBlockEntity *v4; // r0@2
  int result; // r0@3

  if ( *a4 == *(_BYTE *)(Block::mSkull + 4) && (v4 = (SkullBlockEntity *)BlockSource::getBlockEntity(a2, a3)) != 0 )
  {
    result = SkullBlockEntity::getSkullType(v4);
    if ( result != 1 )
      result = 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall SkullBlock::getSpawnResourcesAuxValue(SkullBlock *this, int a2)
{
  return a2;
}


int __fastcall SkullBlock::canBeSilkTouched(SkullBlock *this)
{
  return 0;
}


int __fastcall SkullBlock::_updatedDragonCircuit(SkullBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ConsumerComponent>(v8, v4, (int)v3, 0);
    if ( result )
      *(_BYTE *)(result + 46) = 1;
  }
  return result;
}


int __fastcall SkullBlock::onLoaded(SkullBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ConsumerComponent>(v8, v4, (int)v3, 0);
    if ( result )
      *(_BYTE *)(result + 46) = 1;
  }
  return result;
}


signed int __fastcall SkullBlock::playerWillDestroy(SkullBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Block *v4; // r10@1
  Entity *v5; // r6@1
  int v6; // r8@1
  BlockPos *v7; // r5@1
  const BlockPos *v8; // r9@2
  BlockState *v9; // r0@2
  char v10; // r4@2
  signed int v11; // r7@2
  char v12; // r0@2
  char v14; // [sp+8h] [bp-28h]@2
  char v15; // [sp+9h] [bp-27h]@2
  char v16; // [sp+Ch] [bp-24h]@2
  char v17; // [sp+Dh] [bp-23h]@2

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( Abilities::getBool((int)a2 + 4320, (int **)&Abilities::INSTABUILD) )
  {
    v8 = (const BlockPos *)Entity::getRegion(v5);
    BlockSource::getBlockAndData((BlockSource *)&v16, v8, (int)v7);
    v9 = (BlockState *)Block::getBlockState((int)v4, 23);
    v10 = v17;
    v11 = 1 << (*(_QWORD *)v9 + 1 - (unsigned int)(*(_QWORD *)v9 >> 32));
    v12 = BlockState::getMask(v9);
    v17 = v10 & ~v12 | v11;
    v14 = v16;
    v15 = v10 & ~v12 | v11;
    BlockSource::setBlockAndData((int)v8, v7, (int)&v14, 2, 0);
  }
  return Block::playerWillDestroy(v4, v5, v7, v6);
}
