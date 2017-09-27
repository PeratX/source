

void __fastcall EndPortalFrameBlock::~EndPortalFrameBlock(EndPortalFrameBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall EndPortalFrameBlock::use(EndPortalFrameBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r11@1
  EndPortalFrameBlock *v5; // r8@1
  ItemUseCallback *v6; // r10@1
  BlockSource *v8; // r5@1
  unsigned __int8 v9; // r4@1
  BlockState *v10; // r0@1
  signed int v11; // r4@2
  void *v12; // r0@3
  int v13; // r0@11
  char v14; // r4@11
  signed int v19; // r8@14
  Level *v20; // r0@15
  char *v21; // r0@15
  Level *v23; // r0@15
  char *v24; // r0@15
  int v26; // r0@15
  int v28; // r0@16
  ItemUseCallback *v29; // r3@19
  float v31; // [sp+10h] [bp-108h]@16
  int v32; // [sp+1Ch] [bp-FCh]@15
  int v33; // [sp+20h] [bp-F8h]@15
  int v34; // [sp+24h] [bp-F4h]@15
  float v35; // [sp+28h] [bp-F0h]@15
  char v36; // [sp+34h] [bp-E4h]@14
  char v37; // [sp+35h] [bp-E3h]@14
  char v38; // [sp+38h] [bp-E0h]@11
  char v39; // [sp+39h] [bp-DFh]@11
  char v40; // [sp+3Ch] [bp-DCh]@11
  unsigned __int8 v41; // [sp+3Dh] [bp-DBh]@11
  unsigned __int8 v42[4]; // [sp+40h] [bp-D8h]@1
  int v43; // [sp+48h] [bp-D0h]@27
  char v44; // [sp+4Eh] [bp-CAh]@9
  char v45; // [sp+4Fh] [bp-C9h]@3
  void *v46; // [sp+64h] [bp-B4h]@25
  void *ptr; // [sp+74h] [bp-A4h]@23
  char v48; // [sp+8Ch] [bp-8Ch]@19
  int v49; // [sp+98h] [bp-80h]@18
  int v50; // [sp+9Ch] [bp-7Ch]@18
  int v51; // [sp+A0h] [bp-78h]@18
  char v52; // [sp+A4h] [bp-74h]@18

  v4 = a2;
  v5 = this;
  v6 = a4;
  _R6 = a3;
  v8 = (BlockSource *)Entity::getRegion(a2);
  v9 = BlockSource::getData(v8, _R6);
  v10 = (BlockState *)Block::getBlockState(Block::mEndPortalFrame, 13);
  v42[0] = v9;
  if ( BlockState::getBool(v10, v42) )
    return 0;
  v12 = Player::getSelectedItem(v4);
  ItemInstance::ItemInstance((ItemInstance *)v42, (int)v12);
  if ( !v45 )
  {
    v11 = 0;
    goto LABEL_23;
  }
  if ( !*(_DWORD *)v42 )
  if ( !ItemInstance::isNull((ItemInstance *)v42) )
    if ( !v44 )
    {
      v11 = 0;
      goto LABEL_23;
    }
    if ( ItemInstance::getId((ItemInstance *)v42) != *(_WORD *)(Item::mEnderEye + 18) )
    LOBYTE(v13) = *((_BYTE *)v5 + 4);
    v40 = v13;
    v41 = v9;
    v14 = v9 | 4;
    v38 = v13;
    v39 = v14;
    if ( v6 )
      if ( (*(int (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)v6 + 16))(
             v6,
             _R6,
             &v40,
             &v38) )
      {
LABEL_20:
        v11 = 1;
        goto LABEL_23;
      }
      v13 = *((_BYTE *)v5 + 4);
    v36 = v13;
    v37 = v14;
    BlockSource::setBlockAndData((int)v8, _R6, (int)&v36, 2, 0);
    (*(void (__fastcall **)(Player *, unsigned __int8 *))(*(_DWORD *)v4 + 612))(v4, v42);
    Player::setSelectedItem(v4, (const ItemInstance *)v42);
    __asm
      VLDR            D8, =2.32830644e-10
      VLDR            S18, =0.4
      VLDR            S20, =0.3
    v19 = 0;
    do
      v20 = (Level *)BlockSource::getLevel(v8);
      v21 = Level::getRandom(v20);
      _R0 = Random::_genRandInt32((Random *)v21);
      __asm
        VMOV            S0, R0
        VCVT.F64.U32    D11, S0
      v23 = (Level *)BlockSource::getLevel(v8);
      v24 = Level::getRandom(v23);
      _R4 = Random::_genRandInt32((Random *)v24);
      v26 = BlockSource::getLevel(v8);
        VMOV            S2, R4
        VMUL.F64        D0, D11, D8
        VCVT.F64.U32    D1, S2
        VMUL.F64        D1, D1, D8
        VCVT.F32.F64    S0, D0
        VCVT.F32.F64    S2, D1
        VMUL.F32        S0, S0, S18
        VLDR            S4, [R6]
        VMUL.F32        S2, S2, S18
        VLDR            S6, [R6,#8]
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S6, S6
      _R1 = *((_DWORD *)_R6 + 1) + 1;
        VADD.F32        S0, S0, S20
        VADD.F32        S2, S2, S20
        VADD.F32        S0, S0, S4
        VMOV            S4, R1
        VADD.F32        S2, S2, S6
        VSTR            S0, [SP,#0x118+var_F0]
        VSTR            S4, [SP,#0x118+var_EC]
        VSTR            S2, [SP,#0x118+var_E8]
      v32 = 0;
      v33 = 0;
      v34 = 0;
      Level::addParticle(v26, 4, (int)&v35);
      ++v19;
    while ( v19 < 4 );
    v28 = Entity::getLevel(v4);
      VLDR            S0, [R6]
      VMOV.F32        S6, #0.5
      VLDR            S2, [R6,#4]
      VMOV.F32        S8, #1.0
      VLDR            S4, [R6,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S6
      VSTR            S0, [SP,#0x118+var_108]
      VSTR            S2, [SP,#0x118+var_104]
      VSTR            S4, [SP,#0x118+var_100]
    Level::playSynchronizedSound(v28, (int)v8, -95, (int)&v31, -1, 1, 0, 0);
      (*(void (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)v6 + 20))(
        v6,
        _R6,
        &v40,
        &v38);
    v49 = *(_DWORD *)_R6;
    v50 = *((_DWORD *)_R6 + 1);
    v51 = *((_DWORD *)_R6 + 2);
    EndPortalShape::EndPortalShape((int)&v52, v8, (int)&v49);
    if ( EndPortalShape::isValid((EndPortalShape *)&v52, v8) == 1 )
      EndPortalShape::getOrigin((EndPortalShape *)&v48, (int)&v52);
      EndPortalFrameBlock::createPortal(v8, (BlockSource *)&v48, v6, v29);
    goto LABEL_20;
  v11 = 0;
LABEL_23:
  if ( ptr )
    operator delete(ptr);
  if ( v46 )
    operator delete(v46);
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 4))();
  return v11;
}


WorldChangeTransaction *__fastcall EndPortalFrameBlock::tryCreatePortal(EndPortalFrameBlock *this, BlockSource *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  BlockSource *v4; // r5@1
  const BlockPos *v5; // r4@1
  EndPortalShape *v6; // r0@1
  WorldChangeTransaction *result; // r0@1
  ItemUseCallback *v8; // r3@2
  char v9; // [sp+4h] [bp-54h]@2
  int v10; // [sp+10h] [bp-48h]@1
  int v11; // [sp+14h] [bp-44h]@1
  int v12; // [sp+18h] [bp-40h]@1
  char v13; // [sp+1Ch] [bp-3Ch]@1

  v4 = this;
  v10 = *(_DWORD *)a2;
  v5 = a3;
  v11 = *((_DWORD *)a2 + 1);
  v12 = *((_DWORD *)a2 + 2);
  v6 = (EndPortalShape *)EndPortalShape::EndPortalShape((int)&v13, this, (int)&v10);
  result = (WorldChangeTransaction *)EndPortalShape::isValid(v6, v4);
  if ( result == (WorldChangeTransaction *)1 )
  {
    EndPortalShape::getOrigin((EndPortalShape *)&v9, (int)&v13);
    result = EndPortalFrameBlock::createPortal(v4, (BlockSource *)&v9, v5, v8);
  }
  return result;
}


signed int __fastcall EndPortalFrameBlock::hasComparatorSignal(EndPortalFrameBlock *this)
{
  return 1;
}


void __fastcall EndPortalFrameBlock::~EndPortalFrameBlock(EndPortalFrameBlock *this)
{
  EndPortalFrameBlock::~EndPortalFrameBlock(this);
}


int __fastcall EndPortalFrameBlock::EndPortalFrameBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void (__fastcall *v7)(int, _DWORD *, int *); // r3@1
  int *v13; // r2@1
  float v15; // [sp+4h] [bp-24h]@1
  int v16; // [sp+8h] [bp-20h]@1
  int v17; // [sp+Ch] [bp-1Ch]@1
  signed int v18; // [sp+10h] [bp-18h]@1
  signed int v19; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2708B24;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 20971520;
  *(_DWORD *)(v3 + 28) = 0;
  v7 = *(void (__fastcall **)(int, _DWORD *, int *))(*(_DWORD *)v3 + 452);
  v17 = 1065353216;
  v18 = 1062207488;
  v19 = 1065353216;
  v7(v3, &Vec3::ZERO, &v17);
  v16 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v13 = (int *)&v15;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x28+var_24]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v13 = &v16;
  Block::mTranslucency[v4] = *v13;
  return v3;
}


int __fastcall EndPortalFrameBlock::getComparatorSignal(EndPortalFrameBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  BlockState *v5; // r0@1
  _BOOL4 v6; // r0@1
  void *v7; // r1@1
  unsigned __int8 v9; // [sp+7h] [bp-9h]@1

  v5 = (BlockState *)Block::getBlockState(Block::mEndPortalFrame, 13);
  v9 = a5;
  v6 = BlockState::getBool(v5, &v9);
  v7 = &Redstone::SIGNAL_NONE;
  if ( v6 )
    v7 = &Redstone::SIGNAL_MAX;
  return *(_DWORD *)v7;
}


_BOOL4 __fastcall EndPortalFrameBlock::hasEye(EndPortalFrameBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = (unsigned __int8)this;
  v3 = (BlockState *)Block::getBlockState(Block::mEndPortalFrame, 13);
  v5 = v2;
  return BlockState::getBool(v3, &v5);
}


signed int __fastcall EndPortalFrameBlock::isInteractiveBlock(EndPortalFrameBlock *this)
{
  return 1;
}


int __fastcall EndPortalFrameBlock::getResourceCount(EndPortalFrameBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall EndPortalFrameBlock::getResource(EndPortalFrameBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


signed int __fastcall EndPortalFrameBlock::addCollisionShapes(int a1)
{
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 28))(a1);
  return 1;
}


WorldChangeTransaction *__fastcall EndPortalFrameBlock::createPortal(EndPortalFrameBlock *this, BlockSource *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v6; // r8@1
  Level *v7; // r0@1
  char *v8; // r0@1
  WorldChangeTransaction *result; // r0@1
  signed int v10; // r6@2
  __int64 v11; // r0@3
  int v12; // r2@3
  int v13; // r1@3
  int v14; // r2@3
  int v15; // r2@3
  __int64 v16; // r0@3
  int v17; // r0@4
  float v22; // [sp+14h] [bp-54h]@4
  char v23; // [sp+20h] [bp-48h]@3
  char v24; // [sp+21h] [bp-47h]@3
  __int64 v25; // [sp+24h] [bp-44h]@3
  int v26; // [sp+2Ch] [bp-3Ch]@3
  char v27; // [sp+30h] [bp-38h]@2

  v4 = a3;
  _R5 = a2;
  v6 = this;
  v7 = (Level *)BlockSource::getLevel(this);
  v8 = Level::getLevelData(v7);
  result = (WorldChangeTransaction *)LevelData::getGenerator((LevelData *)v8);
  if ( result )
  {
    WorldChangeTransaction::WorldChangeTransaction((int)&v27, (int)v6, 1, 0, (int)v4);
    v10 = -1;
    do
    {
      HIDWORD(v11) = *((_DWORD *)_R5 + 1);
      v12 = *((_DWORD *)_R5 + 2);
      LODWORD(v11) = *(_DWORD *)_R5 + v10;
      v25 = v11;
      v26 = v12 - 1;
      v23 = *(_BYTE *)(Block::mEndPortal + 4);
      v24 = 0;
      WorldChangeTransaction::setBlock(
        (WorldChangeTransaction *)&v27,
        (const BlockPos *)&v25,
        (const FullBlock *)&v23,
        2);
      v13 = *((_DWORD *)_R5 + 1);
      v14 = *((_DWORD *)_R5 + 2);
      LODWORD(v25) = *(_DWORD *)_R5 + v10;
      HIDWORD(v25) = v13;
      v26 = v14;
      v15 = *((_DWORD *)_R5 + 2);
      LODWORD(v16) = *(_DWORD *)_R5 + v10;
      HIDWORD(v16) = *((_DWORD *)_R5 + 1);
      v25 = v16;
      v26 = v15 + 1;
      ++v10;
    }
    while ( v10 < 2 );
    WorldChangeTransaction::apply((WorldChangeTransaction *)&v27);
    v17 = BlockSource::getLevel(v6);
    __asm
      VLDR            S0, [R5]
      VMOV.F32        S6, #0.5
      VLDR            S2, [R5,#4]
      VMOV.F32        S8, #1.0
      VLDR            S4, [R5,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S6
      VSTR            S0, [SP,#0x68+var_54]
      VSTR            S2, [SP,#0x68+var_50]
      VSTR            S4, [SP,#0x68+var_4C]
    Level::playSynchronizedSound(v17, (int)v6, -94, (int)&v22, -1, 1, 0, 0);
    result = WorldChangeTransaction::~WorldChangeTransaction((WorldChangeTransaction *)&v27);
  }
  return result;
}


int __fastcall EndPortalFrameBlock::addAABBs(int a1, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  int v5; // r10@1
  AABB *v6; // r9@1
  const BlockPos *v7; // r7@1
  BlockSource *v8; // r6@1
  AABB *v9; // r0@1
  unsigned __int8 v10; // r4@1
  BlockState *v11; // r0@1
  int result; // r0@1
  __int64 v13; // r0@2
  char v14; // [sp+10h] [bp-50h]@1
  char v15; // [sp+1Ch] [bp-44h]@1
  unsigned __int8 v16; // [sp+3Bh] [bp-25h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  AABB::AABB(COERCE_FLOAT(&v15), 0.0, 0LL, 1065353216, 1062207488, 1065353216);
  Vec3::Vec3((int)&v14, (int)v7);
  v9 = (AABB *)AABB::move((AABB *)&v15, (const Vec3 *)&v14);
  Block::addAABB(v5, v9, v6, a5);
  v10 = BlockSource::getData(v8, v7);
  v11 = (BlockState *)Block::getBlockState(Block::mEndPortalFrame, 13);
  v16 = v10;
  result = BlockState::getBool(v11, &v16);
  if ( result == 1 )
  {
    HIDWORD(v13) = 1050673152;
    LODWORD(v13) = &v15;
    AABB::set(v13, 4512606827687444480LL, 0.6875, 1.0, 0.6875);
    result = Block::addAABB(v5, (AABB *)&v15, v6, a5);
  }
  return result;
}


int __fastcall EndPortalFrameBlock::getPlacementDataValue(EndPortalFrameBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  float v11; // r1@1
  int v13; // [sp+0h] [bp-10h]@1

  Entity::getRotation((Entity *)&v13, (int)a2);
  __asm
  {
    VLDR            S0, =180.0
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x10+var_C]
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.011111
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return mce::Math::floor(_R0, v11) & 3;
}
