

int __fastcall TallGrass::canBeSilkTouched(TallGrass *this)
{
  return 0;
}


_DWORD *__fastcall TallGrass::getAABB(TallGrass *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  TallGrass *v7; // r5@1
  AABB *v8; // r6@1
  const BlockPos *v9; // r4@1
  int v10; // r0@2
  AABB *v11; // r6@2
  _DWORD *result; // r0@2
  char v13; // [sp+8h] [bp-20h]@2

  v7 = this;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = (*(int (__fastcall **)(TallGrass *, BlockSource *))(*(_DWORD *)this + 416))(this, a2);
    v11 = (AABB *)AABB::set(v8, (const Vec3 *)v10, (const Vec3 *)(v10 + 12));
    (*(void (__fastcall **)(char *, TallGrass *, const BlockPos *))(*(_DWORD *)v7 + 24))(&v13, v7, v9);
    result = (_DWORD *)AABB::move(v11, (const Vec3 *)&v13);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


signed int __fastcall TallGrass::onGraphicsModeChanged(TallGrass *this, bool a2, int a3, bool a4)
{
  int v4; // r4@1
  TallGrass *v5; // r5@1
  signed int result; // r0@1

  v4 = a3;
  v5 = this;
  Block::onGraphicsModeChanged(this, a2, a3, a4);
  result = 5;
  if ( v4 )
    result = 0;
  *((_DWORD *)v5 + 5) = result;
  return result;
}


int __fastcall TallGrass::canSurvive(TallGrass *this, BlockSource *a2, const BlockPos *a3)
{
  TallGrass *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r2@1
  int (__fastcall *v6)(TallGrass *, int); // r5@1
  int v7; // r0@1
  __int64 v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = *(_QWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(int (__fastcall **)(TallGrass *, int))(*(_DWORD *)this + 228);
  v9 = v4 - 0x100000000LL;
  v10 = v5;
  v7 = BlockSource::getBlock(a2, (const BlockPos *)&v9);
  return v6(v3, v7);
}


unsigned int __fastcall TallGrass::randomlyModifyPosition(TallGrass *this, const BlockPos *a2, int a3)
{
  BlockPos *v3; // r5@1
  unsigned int v5; // r0@1
  unsigned int result; // r0@1

  v3 = (BlockPos *)a3;
  _R4 = this;
  Vec3::Vec3((int)this, a3);
  v5 = BlockPos::randomSeed(v3);
  _R1 = (v5 >> 16) & 0xF;
  __asm
  {
    VLDR            S2, =-0.175
    VLDR            S6, =0.023333
    VMOV            S0, R1
    VLDR            S10, =-0.35
    VCVT.F32.S32    S0, S0
    VLDR            S4, [R4]
  }
  _R1 = (v5 >> 20) & 0xF;
    VADD.F32        S4, S4, S2
    VMUL.F32        S0, S0, S6
    VADD.F32        S0, S4, S0
    VMOV            S4, R1
    VCVT.F32.S32    S4, S4
  result = (v5 >> 24) & 0xF;
    VMOV            S8, R0
    VCVT.F32.S32    S8, S8
    VSTR            S0, [R4]
    VLDR            S0, [R4,#4]
    VMUL.F32        S4, S4, S6
    VADD.F32        S0, S0, S10
    VMUL.F32        S6, S8, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S6, S2
    VSTR            S0, [R4,#4]
    VLDR            S0, [R4,#8]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#8]
  return result;
}


signed int __fastcall TallGrass::onFertilized(TallGrass *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  BlockSource *v5; // r5@1
  Entity *v6; // r8@1
  const BlockPos *v7; // r4@1
  BushBlock *v8; // r7@1
  unsigned __int64 *v9; // r6@1
  unsigned int v10; // r9@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r10@1
  int v14; // r11@1
  int *v15; // r0@1
  signed int v16; // r6@1
  int v18; // [sp+10h] [bp-30h]@1
  int v19; // [sp+14h] [bp-2Ch]@1
  int v20; // [sp+18h] [bp-28h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = this;
  v9 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  v10 = BlockSource::getData(v5, v7);
  v11 = *((_DWORD *)v7 + 1);
  v12 = *((_DWORD *)v7 + 2);
  v13 = *v9 >> 32;
  v14 = *v9;
  v18 = *(_DWORD *)v7;
  v19 = v11 + 1;
  v20 = v12;
  v15 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v18);
  v16 = 0;
  if ( Material::isType(v15, 0) == 1 )
  {
    if ( BushBlock::canSurvive(v8, v5, v7) == 1 )
      v16 = DoublePlantBlock::placeAt(
              (DoublePlantBlock *)Block::mDoublePlant,
              v5,
              v7,
              (v10 >> (1 - v13 + v14)) & (0xFu >> (4 - v13)) & 1 ^ 3,
              3,
              v6,
              a5);
    else
      v16 = 0;
  }
  return v16;
}


signed int __fastcall TallGrass::getResource(TallGrass *this, Random *a2, int a3, int a4)
{
  signed int result; // r0@2

  if ( Random::_genRandInt32(a2) & 7 )
    result = -1;
  else
    result = *(_WORD *)(Item::mSeeds_wheat + 18);
  return result;
}


void __fastcall TallGrass::~TallGrass(TallGrass *this)
{
  TallGrass::~TallGrass(this);
}


signed int __fastcall TallGrass::mayConsumeFertilizer(TallGrass *this, BlockSource *a2)
{
  Level *v2; // r0@1
  char *v3; // r0@1
  unsigned int v4; // r1@1
  signed int result; // r0@1

  v2 = (Level *)BlockSource::getLevel(a2);
  v3 = Level::getRandom(v2);
  v4 = Random::_genRandInt32((Random *)v3) % 0xA;
  result = 0;
  if ( !v4 )
    result = 1;
  return result;
}


int __fastcall TallGrass::TallGrass(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v8; // [sp+0h] [bp-28h]@1
  signed int v9; // [sp+4h] [bp-24h]@1
  signed int v10; // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@1
  signed int v13; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(9);
  BushBlock::BushBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2715AEC;
  v11 = 1036831948;
  v12 = 0;
  v13 = 1036831948;
  v8 = 1063675494;
  v9 = 1061997773;
  v10 = 1063675494;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v11, (const Vec3 *)&v8);
  *(_BYTE *)(v3 + 17) = 1;
  *(_DWORD *)(v3 + 20) = 5;
  return v3;
}


const void **__fastcall TallGrass::buildDescriptionId(TallGrass *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r8@1
  unsigned int v5; // r4@1
  __int64 v6; // kr00_8@1
  const void **result; // r0@2

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState(a2, 24);
  sub_21E8AF4(v4, (int *)(v3 + 8));
  if ( ((v5 >> (1 - BYTE4(v6) + v6)) & (unsigned __int8)(0xFu >> (4 - BYTE4(v6)))) == 1 )
    result = sub_21E7408((const void **)v4, ".grass.name", 0xBu);
  else
    result = sub_21E7408((const void **)v4, ".fern.name", 0xAu);
  return result;
}


void __fastcall TallGrass::~TallGrass(TallGrass *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


InstantaneousAttributeBuff *__fastcall TallGrass::playerDestroy(TallGrass *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r6@1
  Block *v5; // r5@1
  int v6; // r7@1
  const BlockPos *v7; // r8@1
  Level *v8; // r0@1
  ItemInstance *v9; // r0@2
  ItemInstance *v10; // r4@2
  int v11; // r0@2
  bool v12; // zf@2
  InstantaneousAttributeBuff *result; // r0@8
  BlockSource *v14; // r0@9
  int v15; // [sp+0h] [bp-60h]@9
  InstantaneousAttributeBuff *v16; // [sp+8h] [bp-58h]@13
  void *v17; // [sp+24h] [bp-3Ch]@11
  void *ptr; // [sp+34h] [bp-2Ch]@9

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)Entity::getLevel(a2);
  if ( Level::isClientSide(v8) )
    goto LABEL_17;
  v9 = (ItemInstance *)Player::getSelectedItem(v4);
  v10 = v9;
  v11 = *((_BYTE *)v9 + 15);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)v10 == 0;
  if ( v12
    || ItemInstance::isNull(v10)
    || !*((_BYTE *)v10 + 14)
    || *(_DWORD *)Player::getSelectedItem(v4) != Item::mShears )
  {
LABEL_17:
    result = j_j_j__ZNK5Block13playerDestroyER6PlayerRK8BlockPosi(v5, v4, v7, v6);
  }
  else
    ItemInstance::ItemInstance((ItemInstance *)&v15, Block::mTallgrass, 1, v6);
    v14 = (BlockSource *)Entity::getRegion(v4);
    Block::popResource(v5, v14, v7, (const ItemInstance *)&v15);
    if ( ptr )
      operator delete(ptr);
    if ( v17 )
      operator delete(v17);
    result = v16;
    if ( v16 )
      result = (InstantaneousAttributeBuff *)(*(int (**)(void))(*(_DWORD *)v16 + 4))();
  return result;
}
