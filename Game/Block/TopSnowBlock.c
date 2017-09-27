

void __fastcall TopSnowBlock::startFalling(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, const Block *a4, bool a5)
{
  TopSnowBlock *v5; // r10@1
  const Block *v6; // r8@1
  const BlockPos *v7; // r5@1
  BlockSource *v8; // r6@1
  BlockState *v9; // r0@1
  unsigned int v10; // r0@2
  unsigned int v11; // r11@3
  int v12; // r7@5
  BlockState *v13; // r0@6
  unsigned __int8 v14; // r4@6
  char v15; // r0@6
  char v16; // [sp+Ch] [bp-2Ch]@6
  char v17; // [sp+Dh] [bp-2Bh]@6
  char v18; // [sp+10h] [bp-28h]@1
  unsigned __int8 v19; // [sp+11h] [bp-27h]@1
  unsigned __int8 v20; // [sp+13h] [bp-25h]@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v18, a2, (int)a3);
  v20 = v19;
  v9 = (BlockState *)Block::getBlockState(Block::mTopSnow, 7);
  if ( BlockState::getBool(v9, &v20) == 1 && (v10 = BlockSource::getExtraData(v8, v7)) != 0 )
  {
    v11 = v10 >> 8;
  }
  else
    v11 = 0;
    LOBYTE(v10) = BlockID::AIR;
  v12 = (unsigned __int8)v10;
  if ( ((unsigned __int8)v10 | (v11 << 8)) != (unsigned __int16)FullBlock::AIR )
    v13 = (BlockState *)Block::getBlockState((int)v5, 7);
    v14 = v19;
    v15 = BlockState::getMask(v13);
    v19 = v14 & ~v15;
    v16 = v18;
    v17 = v14 & ~v15;
    BlockSource::setBlockAndData((int)v8, v7, (int)&v16, 2, 0);
    (*(void (__cdecl **)(_DWORD, BlockSource *))(*(_DWORD *)Block::mBlocks[v12] + 276))(Block::mBlocks[v12], v8);
  HeavyBlock::startFalling(v5, v8, v7, v6, a5);
}


int __fastcall TopSnowBlock::mayPlace(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r11@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  Block *v8; // r10@1
  int v9; // r4@1
  unsigned int v10; // r7@3
  _DWORD *v11; // r0@3
  _DWORD *v12; // r9@4
  int v13; // r5@4
  _DWORD *v14; // r8@6
  bool v15; // zf@9
  int v16; // r1@15
  int v17; // r2@15
  unsigned int v18; // r4@15
  unsigned __int64 *v19; // r0@15
  int v20; // r7@16
  int *v21; // r4@17
  int v22; // r1@21
  int v23; // r1@24
  int v24; // r1@26
  int v25; // r2@26
  TopSnowBlock *v27; // [sp+0h] [bp-50h]@1
  BlockSource *v28; // [sp+4h] [bp-4Ch]@1
  int v29; // [sp+8h] [bp-48h]@26
  int v30; // [sp+Ch] [bp-44h]@26
  int v31; // [sp+10h] [bp-40h]@26
  int v32; // [sp+14h] [bp-3Ch]@15
  int v33; // [sp+18h] [bp-38h]@15
  int v34; // [sp+1Ch] [bp-34h]@15
  int v35; // [sp+20h] [bp-30h]@1
  int v36; // [sp+24h] [bp-2Ch]@1
  int v37; // [sp+28h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v27 = this;
  v28 = a2;
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v35 = v5;
  v36 = v6 - 1;
  v37 = v7;
  v8 = (Block *)BlockSource::getBlock(v28, (const BlockPos *)&v35);
  v9 = BlockSource::getBlock(v3, v4);
  if ( !Block::isType((Block *)v9, (const Block *)Block::mAir) && !Block::isSolid((Block *)v9) )
  {
    v10 = *(_BYTE *)(v9 + 4);
    v11 = *(_DWORD **)(TopSnowBlock::mRecoverableLookupSet + 4 * (v10 % unk_2815304));
    if ( !v11 )
      goto LABEL_13;
    v12 = (_DWORD *)*v11;
    v13 = *(_DWORD *)(*v11 + 4);
    while ( v10 != v13 )
    {
      v14 = (_DWORD *)*v12;
      if ( *v12 )
      {
        v13 = v14[1];
        v11 = v12;
        v12 = (_DWORD *)*v12;
        if ( v14[1] % unk_2815304 == v10 % unk_2815304 )
          continue;
      }
    }
    v15 = v11 == 0;
    if ( v11 )
      v15 = *v11 == 0;
    if ( v15 )
LABEL_13:
      if ( v10 != *((_BYTE *)v27 + 4) )
        return 0;
  }
  if ( Block::isType(v8, (const Block *)Block::mTopSnow) != 1
    || (v16 = *((_DWORD *)v4 + 1),
        v17 = *((_DWORD *)v4 + 2),
        v32 = *(_DWORD *)v4,
        v33 = v16 - 1,
        v34 = v17,
        v18 = BlockSource::getData(v28, (const BlockPos *)&v32),
        v19 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19),
        ((0xFu >> (4 - (*v19 >> 32))) & (v18 >> (*v19 + 1 - (*v19 >> 32)))) != 7) )
    v21 = (int *)Block::getMaterial(v8);
    if ( Material::isType(v21, 18) )
      v20 = 0;
    else if ( Material::isType(v21, 19) )
    else if ( Material::isType(v21, 7) )
      v20 = 1;
    else
      if ( !Block::hasProperty((int)v8, v22, 16LL) )
        v20 = 0;
        if ( !Block::hasProperty((int)v8, v23, 128LL) )
        {
          v24 = *((_DWORD *)v4 + 1);
          v25 = *((_DWORD *)v4 + 2);
          v29 = *(_DWORD *)v4;
          v30 = v24 - 1;
          v31 = v25;
          v20 = BlockSource::canProvideSupport(v28, (int)&v29);
        }
  else
    v20 = 1;
  return v20;
}


int __fastcall TopSnowBlock::waterSpreadCausesSpawn(TopSnowBlock *this)
{
  return 0;
}


signed int __fastcall TopSnowBlock::onRemove(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1

  v3 = a3;
  v4 = a2;
  Block::onRemove(this, a2, a3);
  return j_j_j__ZN11BlockSource12setExtraDataERK8BlockPost(v4, v3, 0);
}


int __fastcall TopSnowBlock::getVisualShape(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  TopSnowBlock *v5; // r5@1
  AABB *v6; // r4@1
  int (__fastcall *v7)(TopSnowBlock *, unsigned int, AABB *, int); // r6@1
  unsigned int v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = *(int (__fastcall **)(TopSnowBlock *, unsigned int, AABB *, int))(*(_DWORD *)this + 420);
  v8 = BlockSource::getData(a2, a3);
  return v7(v5, v8, v6, a5);
}


signed int __fastcall TopSnowBlock::canBeBuiltOver(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3)
{
  unsigned int v3; // r4@1
  unsigned __int64 *v4; // r0@1
  signed int v5; // r1@1
  signed int result; // r0@1

  v3 = BlockSource::getData(a2, a3);
  v4 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  v5 = ((0xFu >> (4 - (*v4 >> 32))) & (v3 >> (*v4 + 1 - (*v4 >> 32)))) + 1;
  result = 0;
  if ( v5 < 8 )
    result = 1;
  return result;
}


signed int __fastcall TopSnowBlock::getCollisionShape(TopSnowBlock *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  AABB *v6; // r8@1
  unsigned int v7; // r6@1
  unsigned __int64 *v8; // r0@1
  float v17; // [sp+0h] [bp-30h]@0
  float v18; // [sp+4h] [bp-2Ch]@0
  float v19; // [sp+8h] [bp-28h]@0

  _R5 = a4;
  v6 = a2;
  v7 = BlockSource::getData(a3, a4);
  v8 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  __asm
  {
    VLDR            S0, =0.0
    VMOV.F32        S16, #4.0
  }
  _R7 = ((v7 >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)))) + 1;
  if ( _R7 < 4 )
    __asm { VMOVLT.F32      S16, S0 }
  if ( a5 )
    if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a5 + 488))(a5) == 83 )
      return 0;
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a5 + 488))(a5) != 4882
      && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a5 + 488))(a5) != 4892 )
    {
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a5 + 488))(a5) == 64
        || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a5 + 488))(a5) == 4194384 )
      {
        __asm
        {
          VMOV            S0, R7
          VCVT.F32.S32    S16, S0
        }
      }
    }
    else
      __asm
        VMOV            S2, R7
        VMOV.F32        S0, #-1.0
        VCVT.F32.S32    S2, S2
        VMOV.F32        S16, #1.0
        VADD.F32        S0, S2, S0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S0 }
    VLDR            S0, [R5]
    VMOV.F32        S6, #0.125
    VLDR            S2, [R5,#4]
    VMOV.F32        S8, #1.0
    VLDR            S4, [R5,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  LODWORD(_R0) = v6;
    VCVT.F32.S32    S4, S4
    VMUL.F32        S6, S16, S6
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
    VADD.F32        S0, S0, S8
    VADD.F32        S4, S4, S8
    VADD.F32        S2, S2, S6
    VSTR            S0, [SP,#0x30+var_30]
    VSTR            S2, [SP,#0x30+var_2C]
    VSTR            S4, [SP,#0x30+var_28]
  AABB::set(_R0, _R2, v17, v18, v19);
  return 1;
}


int __fastcall TopSnowBlock::tick(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  TopSnowBlock *v6; // r11@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  Random *v10; // r10@1
  int v11; // r1@1
  int result; // r0@1
  Level *v13; // r0@2
  Level *v14; // r6@2
  unsigned __int64 *v15; // r0@2
  char *v16; // r0@3
  signed int v17; // r6@4
  int v18; // r7@7
  unsigned int v19; // r6@14
  unsigned __int64 *v20; // r0@14
  BlockState *v21; // r0@15
  unsigned int v22; // r0@16
  unsigned int v23; // r7@17
  char v24; // r0@18
  int v25; // r1@18
  int v26; // r2@18
  int v27; // r3@18
  int v28; // r1@19
  int v29; // r2@19
  int v30; // r1@23
  int v31; // r2@23
  int v32; // r3@23
  Dimension *v33; // r0@24
  Weather *v34; // r8@24
  bool v44; // [sp+0h] [bp-60h]@0
  int v45; // [sp+10h] [bp-50h]@19
  int v46; // [sp+14h] [bp-4Ch]@19
  int v47; // [sp+18h] [bp-48h]@19
  char v48; // [sp+1Ch] [bp-44h]@18
  char v49; // [sp+20h] [bp-40h]@23
  char v50; // [sp+21h] [bp-3Fh]@23
  char v51; // [sp+24h] [bp-3Ch]@6
  unsigned __int8 v52; // [sp+25h] [bp-3Bh]@6
  int v53; // [sp+28h] [bp-38h]@1
  int v54; // [sp+2Ch] [bp-34h]@1
  int v55; // [sp+30h] [bp-30h]@1
  char v56; // [sp+34h] [bp-2Ch]@1
  unsigned __int8 v57; // [sp+38h] [bp-28h]@15

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v53 = v7;
  v54 = v8 + 1;
  v55 = v9;
  v10 = a4;
  BlockSource::getBlockID((BlockSource *)&v56, v5, (int)&v53);
  result = BlockID::hasProperty(&v56, v11, 8200, 0);
  if ( result )
    return result;
  v13 = (Level *)BlockSource::getLevel(v5);
  v14 = v13;
  v15 = (unsigned __int64 *)Level::getGameRules(v13);
  if ( GameRules::getBool(v15, (int **)&GameRules::DO_WEATHER_CYCLE) == 1 )
  {
    v16 = Level::getRandom(v14);
    if ( Random::_genRandInt32((Random *)v16) & 0xF )
    {
      v17 = 0;
    }
    else
      v33 = (Dimension *)BlockSource::getDimension(v5);
      v34 = (Weather *)Dimension::getWeather(v33);
      _R9 = (Biome *)BlockSource::getBiome(v5, v4);
      if ( Weather::isSnowingAt(v34, v5, v4) )
      {
        v17 = 0;
      }
      else
        _R0 = BlockSource::getBrightness(v5, v4);
        __asm
        {
          VMOV.F32        S0, #11.0
          VMOV            S2, R0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          goto LABEL_37;
        _R0 = Biome::getTemperature(_R9, v5, v4);
        __asm { VMOV            S0, R0 }
        _R1 = &Biome::RAIN_TEMP_THRESHOLD;
          VLDR            S2, [R1]
          VCMPE.F32       S0, S2
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v17 = 0;
        else
LABEL_37:
          __asm
          {
            VMOV.F32        S0, #8.0
            VLDR            S2, [R9,#0xD4]
            VMUL.F32        S0, S2, S0
            VCVTR.S32.F32   S0, S0
            VMOV            R7, S0
          }
          if ( _R7 < 1 )
            v17 = 1;
          else
            v17 = 0;
            if ( Weather::calcSnowBlockDepth(v34, v5, v4, _R7 + 1) > _R7 )
              v17 = 1;
  }
  else
    v17 = 0;
  BlockSource::getBrightnessPair((BlockSource *)&v51, v5, v4);
  if ( v52 < 0xCu )
    v18 = v17;
    v18 = v52 - 11;
    if ( v18 > 8 )
      v18 = 8;
    if ( v17 >= v18 )
      v18 = v17;
  if ( v18 >= 1 )
    v19 = BlockSource::getData(v5, v4);
    v20 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
    if ( v18 > (signed int)((0xFu >> (4 - (*v20 >> 32))) & (v19 >> (*v20 + 1 - (*v20 >> 32)))) )
      v57 = v19;
      v21 = (BlockState *)Block::getBlockState(Block::mTopSnow, 7);
      if ( BlockState::getBool(v21, &v57) == 1 && (v22 = BlockSource::getExtraData(v5, v4)) != 0 )
        v23 = v22 >> 8;
        LOBYTE(v23) = 0;
        LOBYTE(v22) = BlockID::AIR;
      v30 = *(_DWORD *)v4;
      v31 = *((_DWORD *)v4 + 1);
      v32 = *((_DWORD *)v4 + 2);
      v49 = v22;
      v50 = v23;
      return BlockSource::setBlockAndData((int)v5, v30, v31, v32, (int)&v49, 3);
    v24 = TopSnowBlock::buildData(v5, v4, (const BlockPos *)-v18, 1, v44);
    v25 = *(_DWORD *)v4;
    v26 = *((_DWORD *)v4 + 1);
    v27 = *((_DWORD *)v4 + 2);
    v48 = *(_BYTE *)(Block::mTopSnow + 4);
    BlockSource::setBlockAndData((int)v5, v25, v26, v27, &v48, v24, 3);
  v28 = *((_DWORD *)v4 + 1);
  v29 = *((_DWORD *)v4 + 2);
  v45 = *(_DWORD *)v4;
  v46 = v28 - 1;
  v47 = v29;
  BlockSource::getBlockID((BlockSource *)&v57, v5, (int)&v45);
  result = v57;
  if ( !v57 )
    result = HeavyBlock::tick(v6, v5, v4, v10);
  return result;
}


int __fastcall TopSnowBlock::canBeSilkTouched(TopSnowBlock *this)
{
  return 0;
}


_BOOL4 __fastcall TopSnowBlock::isCovering(TopSnowBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  BlockState *v3; // r0@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 7);
  return j_j_j__ZNK10BlockState7getBoolERKh_1(v3, v2);
}


signed int __fastcall TopSnowBlock::calcGroundFriction(TopSnowBlock *this, Mob *a2, const BlockPos *a3)
{
  return 1058642330;
}


void __fastcall TopSnowBlock::~TopSnowBlock(TopSnowBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall TopSnowBlock::canHaveExtraData(TopSnowBlock *this)
{
  return 1;
}


signed int __fastcall TopSnowBlock::isFree(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r0@2
  int *v6; // r0@3
  signed int result; // r0@3
  unsigned __int8 v8; // [sp+4h] [bp-14h]@2

  v3 = a3;
  v4 = a2;
  if ( HeavyBlock::isFree(this, a2, a3)
    || (BlockSource::getBlockID((BlockSource *)&v8, v4, (int)v3), (v5 = (Block *)Block::mBlocks[v8]) == 0) )
  {
    result = 1;
  }
  else
    v6 = (int *)Block::getMaterial(v5);
    result = Material::isType(v6, 7);
  return result;
}


int __fastcall TopSnowBlock::TopSnowBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1
  signed int v17; // [sp+10h] [bp-18h]@1
  signed int v18; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(20);
  HeavyBlock::HeavyBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_27160F0;
  v16 = 1065353216;
  v17 = 1040187392;
  v18 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v16);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  *(_BYTE *)(v3 + 17) = 1;
  *(_DWORD *)(v3 + 40) = 1055286886;
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 24) = 33558536;
  *(_DWORD *)(v3 + 44) = 1040522936;
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
    VSTR            S0, [SP,#0x28+var_24]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  *(_BYTE *)(v3 + 101) = 0;
  return v3;
}


int __fastcall TopSnowBlock::playerDestroy(TopSnowBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Entity *v4; // r10@1
  Block *v5; // r9@1
  int v6; // r4@1
  const BlockPos *v7; // r8@1
  Level *v8; // r0@1
  int result; // r0@1
  int v10; // r7@2
  int v11; // r11@3
  int v12; // r4@3
  BlockSource *v13; // r5@4
  int v14; // r0@11
  int v15; // r1@11
  int v16; // r2@11
  int v17; // r3@11
  char v18; // [sp+Ch] [bp-74h]@11
  char v19; // [sp+10h] [bp-70h]@4
  int v20; // [sp+18h] [bp-68h]@8
  void *v21; // [sp+34h] [bp-4Ch]@6
  void *ptr; // [sp+44h] [bp-3Ch]@4

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)Entity::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    v10 = (*(int (__fastcall **)(Block *, char *, int, _DWORD))(*(_DWORD *)v5 + 268))(v5, (char *)v4 + 552, v6, 0);
    if ( v10 >= 1 )
    {
      v11 = 0;
      v12 = *(_WORD *)(Item::mSnowBall + 18);
      do
      {
        v13 = (BlockSource *)Entity::getRegion(v4);
        ItemInstance::ItemInstance((ItemInstance *)&v19, v12, 1, 0);
        Block::popResource(v5, v13, v7, (const ItemInstance *)&v19);
        if ( ptr )
          operator delete(ptr);
        if ( v21 )
          operator delete(v21);
        if ( v20 )
          (*(void (**)(void))(*(_DWORD *)v20 + 4))();
        ++v11;
        v20 = 0;
      }
      while ( v11 < v10 );
    }
    v14 = Entity::getRegion(v4);
    v15 = *(_DWORD *)v7;
    v16 = *((_DWORD *)v7 + 1);
    v17 = *((_DWORD *)v7 + 2);
    v18 = BlockID::AIR;
    result = BlockSource::setBlock(v14, v15, v16, v17, &v18, 3);
  }
  return result;
}


_DWORD *__fastcall TopSnowBlock::registerRecoverableBlock(_BYTE *a1)
{
  unsigned int v1; // r9@1
  int v2; // r8@1
  _DWORD *result; // r0@1
  _DWORD *v4; // r4@2
  int v5; // r7@2
  int v6; // r5@4
  bool v7; // zf@7
  _DWORD *v8; // r0@11

  v1 = *a1;
  v2 = v1 % unk_2815304;
  result = *(_DWORD **)(TopSnowBlock::mRecoverableLookupSet + 4 * v2);
  if ( !result )
    goto LABEL_11;
  v4 = (_DWORD *)*result;
  v5 = *(_DWORD *)(*result + 4);
  while ( v1 != v5 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      v5 = *(_DWORD *)(v6 + 4);
      result = v4;
      v4 = (_DWORD *)*v4;
      if ( *(_DWORD *)(v6 + 4) % unk_2815304 == v2 )
        continue;
    }
  }
  v7 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v7 = result == 0;
  if ( v7 )
LABEL_11:
    v8 = operator new(8u);
    *v8 = 0;
    v8[1] = v1;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS1_10_Hash_nodeIiLb0EEE_0(
                         (int)&TopSnowBlock::mRecoverableLookupSet,
                         v2,
                         v1,
                         (int)v8);
  return result;
}


int __fastcall TopSnowBlock::calcSnowThickness(TopSnowBlock *this, Mob *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  unsigned int v5; // r6@1
  unsigned __int64 *v6; // r0@1
  signed int v7; // r6@1
  int v12; // r1@3
  int result; // r0@8
  char v15; // [sp+4h] [bp-14h]@3

  v3 = a3;
  v4 = (BlockSource *)Entity::getRegion(a2);
  v5 = BlockSource::getData(v4, v3);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  v7 = (v5 >> (*v6 + 1 - (*v6 >> 32))) & (0xFu >> (4 - (*v6 >> 32)));
  if ( v7 <= 6 )
  {
    BlockSource::getBlockID((BlockSource *)&v15, (int)v4, *(_QWORD *)v3, (*(_QWORD *)v3 >> 32) - 1, *((_DWORD *)v3 + 2));
    if ( BlockID::hasProperty(&v15, v12, 8200, 0) )
    {
      __asm { VMOV.F32        S0, #1.0 }
    }
    else
      _R0 = v7 + 1;
      if ( v7 + 1 >= 2 )
      {
        __asm
        {
          VMOV            S2, R0
          VMOV.F32        S0, #0.125
          VCVT.F32.S32    S2, S2
          VMUL.F32        S0, S2, S0
        }
      }
      else
        __asm { VLDR            S0, =0.0 }
  }
  else
    __asm { VMOV.F32        S0, #1.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


AABB *__fastcall TopSnowBlock::getVisualShape(TopSnowBlock *this, int a2, AABB *a3, bool a4)
{
  unsigned int v4; // r5@1
  AABB *v5; // r4@1
  unsigned __int64 *v6; // r0@1
  int v13; // [sp+4h] [bp-1Ch]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  __asm { VMOV.F32        S0, #0.125 }
  _R0 = ((0xFu >> (4 - (*v6 >> 32))) & (v4 >> (*v6 + 1 - (*v6 >> 32)))) + 1;
  __asm
  {
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
  }
  v13 = 1065353216;
    VMUL.F32        S0, S2, S0
    VSTR            S0, [SP,#0x20+var_18]
  v14 = 1065353216;
  AABB::set(v5, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v13);
  return v5;
}


int __fastcall TopSnowBlock::buildData(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r9@1
  BlockSource *v6; // r8@1
  const BlockPos *v7; // r6@1
  int v8; // r7@1
  unsigned int v9; // r4@2
  unsigned __int64 *v10; // r0@3
  signed int v11; // r5@3
  BlockState *v12; // r0@6
  __int64 v13; // r4@6
  _DWORD *v14; // r0@7
  _DWORD *v15; // r10@8
  int v16; // r5@8
  _DWORD *v17; // r7@10
  BlockState *v18; // r0@14
  signed int v19; // r5@14
  unsigned int v20; // r0@14
  bool v22; // zf@17
  BlockState *v23; // r0@20
  signed int v24; // r4@20
  int v25; // [sp+4h] [bp-2Ch]@6
  unsigned __int8 v26; // [sp+8h] [bp-28h]@1
  unsigned __int8 v27; // [sp+9h] [bp-27h]@20

  v5 = this;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  BlockSource::getBlockAndData((BlockSource *)&v26, this, (int)a2);
  if ( v26 == *(_BYTE *)(Block::mTopSnow + 4) )
  {
    v9 = BlockSource::getData(v5, v6);
    if ( v8 == 1 )
    {
      v10 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
      v11 = (signed int)v7 + ((0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32))));
      if ( v11 > 7 )
        v11 = 7;
    }
    else
      v11 = (signed int)v7 - 1;
    v18 = (BlockState *)Block::getBlockState(Block::mTopSnow, 19);
    v19 = v11 << (*(_QWORD *)v18 + 1 - (unsigned int)(*(_QWORD *)v18 >> 32));
    v20 = v9 & ~BlockState::getMask(v18) | v19;
    goto LABEL_15;
  }
  v12 = (BlockState *)Block::getBlockState(Block::mTopSnow, 19);
  v13 = *(_QWORD *)v12;
  BlockState::getMask(v12);
  v25 = ((_DWORD)v7 - 1) << (v13 + 1 - BYTE4(v13));
  if ( v26 != *(_BYTE *)(Block::mAir + 4) )
    v14 = *(_DWORD **)(TopSnowBlock::mRecoverableLookupSet + 4 * ((unsigned int)v26 % unk_2815304));
    if ( v14 )
      v15 = (_DWORD *)*v14;
      v16 = *(_DWORD *)(*v14 + 4);
      while ( v26 != v16 )
      {
        v17 = (_DWORD *)*v15;
        if ( *v15 )
        {
          v16 = v17[1];
          v14 = v15;
          v15 = (_DWORD *)*v15;
          if ( v17[1] % unk_2815304 == (unsigned int)v26 % unk_2815304 )
            continue;
        }
        return (unsigned __int8)v25;
      }
      v22 = v14 == 0;
      if ( v14 )
        v22 = *v14 == 0;
      if ( !v22 )
        BlockSource::setExtraData(v5, v6, v26 | (v27 << 8));
        v23 = (BlockState *)Block::getBlockState(Block::mTopSnow, 7);
        v24 = 1 << (*(_QWORD *)v23 + 1 - (unsigned int)(*(_QWORD *)v23 >> 32));
        v20 = (BlockState::getMask(v23) ^ 0xFF) & v25 | v24;
LABEL_15:
        LOBYTE(v25) = v20;
  return (unsigned __int8)v25;
}


signed int __fastcall TopSnowBlock::checkIsPathable(TopSnowBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  Entity *v4; // r6@1
  const BlockPos *v6; // r8@1
  BlockSource *v7; // r7@1
  unsigned int v8; // r5@1
  unsigned __int64 *v9; // r0@1
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r7@5
  int (__fastcall *v14)(int, char *, int, const BlockPos *); // r10@5
  int v15; // r0@5
  signed int result; // r0@7
  char v21; // [sp+4h] [bp-3Ch]@5

  v4 = a2;
  _R4 = a4;
  v6 = a3;
  v7 = (BlockSource *)Entity::getRegion(a2);
  v8 = BlockSource::getData(v7, _R4);
  v9 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  _R5 = ((0xFu >> (4 - (*v9 >> 32))) & (v8 >> (*v9 + 1 - (*v9 >> 32)))) + 1;
  if ( _R5 == 8 )
    goto LABEL_11;
  v11 = *((_DWORD *)_R4 + 1);
  v12 = *((_DWORD *)v6 + 1);
  if ( v11 <= v12 )
    goto LABEL_12;
  if ( v11 - v12 > 1 )
  if ( _R5 < 4 )
  v13 = BlockSource::getBlock(v7, v6);
  AABB::AABB((AABB *)&v21);
  v14 = *(int (__fastcall **)(int, char *, int, const BlockPos *))(*(_DWORD *)v13 + 12);
  v15 = Entity::getRegion(v4);
  if ( v14(v13, &v21, v15, v6) != 1 )
  __asm
  {
    VMOV            S2, R5
    VMOV.F32        S0, #0.125
    VCVT.F32.S32    S2, S2
    VLDR            S4, [R4,#4]
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S2, S0
    VLDR            S2, [SP,#0x40+var_2C]
    VADD.F32        S0, S4, S0
    VMOV.F32        S4, #1.0
    VSUB.F32        S0, S0, S2
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_12:
    result = 1;
  else
LABEL_11:
    result = 0;
  return result;
}


unsigned int __fastcall TopSnowBlock::dataIDToHeight(TopSnowBlock *this, unsigned __int8 a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned int)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  return ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)))) + 1;
}


int __fastcall TopSnowBlock::getDustColor(int result, unsigned __int8 a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r1@1

  v2 = *(_QWORD *)&qword_283E614;
  v3 = unk_283E61C;
  *(_DWORD *)result = Color::WHITE;
  *(_QWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 12) = v3;
  return result;
}


int __fastcall TopSnowBlock::neighborChanged(int result, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  if ( *((_DWORD *)a4 + 1) < *((_DWORD *)a3 + 1)
    && *(_DWORD *)a3 == *(_DWORD *)a4
    && *((_DWORD *)a3 + 2) == *((_DWORD *)a4 + 2) )
  {
    result = (int)j_j_j__ZNK10HeavyBlock15neighborChangedER11BlockSourceRK8BlockPosS4_((HeavyBlock *)result, a2, a3, a4);
  }
  return result;
}


unsigned int __fastcall TopSnowBlock::getHeight(TopSnowBlock *this, const unsigned __int8 *a2)
{
  TopSnowBlock *v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  return (0xFu >> (4 - (*v3 >> 32))) & ((unsigned int)*(_BYTE *)v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall TopSnowBlock::~TopSnowBlock(TopSnowBlock *this)
{
  TopSnowBlock::~TopSnowBlock(this);
}


AABB *__fastcall TopSnowBlock::getAABB(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  AABB *v8; // r4@1
  unsigned int v9; // r6@1
  unsigned __int64 *v10; // r0@1
  float v19; // [sp+0h] [bp-20h]@0
  float v20; // [sp+4h] [bp-1Ch]@0
  float v21; // [sp+8h] [bp-18h]@0

  _R5 = a3;
  v8 = a4;
  v9 = BlockSource::getData(a2, a3);
  v10 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  _R0 = ((0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32)))) + 1;
  if ( _R0 || a6 == 1 )
  {
    __asm
    {
      VLDR            S0, [R5]
      VMOV            S8, R0
      VLDR            S2, [R5,#4]
      VMOV.F32        S6, #0.125
      VLDR            S4, [R5,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    }
    LODWORD(_R0) = v8;
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S8, S8
      VMOV.F32        S10, #1.0
      VMOV            R1, S0
      VMOV            R2, S2
      VMOV            R3, S4
      VMUL.F32        S6, S8, S6
      VADD.F32        S0, S0, S10
      VADD.F32        S4, S4, S10
      VADD.F32        S2, S2, S6
      VSTR            S0, [SP,#0x20+var_20]
      VSTR            S2, [SP,#0x20+var_1C]
      VSTR            S4, [SP,#0x20+var_18]
    AABB::set(_R0, _R2, v19, v20, v21);
  }
  else
    v8 = (AABB *)&AABB::EMPTY;
  return v8;
}


int __fastcall TopSnowBlock::getPlacementDataValue(TopSnowBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  BlockSource *v6; // r4@1
  TopSnowBlock *v7; // r0@1
  bool v9; // [sp+0h] [bp-8h]@0

  v6 = a3;
  v7 = (TopSnowBlock *)Entity::getRegion(a2);
  return TopSnowBlock::buildData(v7, v6, (const BlockPos *)1, 1, v9);
}


unsigned int __fastcall TopSnowBlock::dataIDToRecoverableFullBlock(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  TopSnowBlock *v4; // r4@1
  BlockSource *v5; // r6@1
  const BlockPos *v6; // r5@1
  BlockState *v7; // r0@1
  unsigned int v8; // r0@2
  unsigned int result; // r0@3
  unsigned __int8 v10; // [sp+7h] [bp-11h]@1

  v4 = this;
  v5 = a2;
  v6 = a3;
  v10 = a4;
  v7 = (BlockState *)Block::getBlockState(Block::mTopSnow, 7);
  if ( BlockState::getBool(v7, &v10) == 1 && (v8 = BlockSource::getExtraData(v5, v6)) != 0 )
  {
    *(_BYTE *)v4 = v8;
    result = v8 >> 8;
  }
  else
    *(_BYTE *)v4 = BlockID::AIR;
    result = 0;
  *((_BYTE *)v4 + 1) = result;
  return result;
}


int __fastcall TopSnowBlock::checkIsRecoverableBlock(_BYTE *a1)
{
  unsigned int v1; // r9@1
  int v2; // r6@1
  _DWORD *v3; // r0@1
  _DWORD *v4; // r5@2
  int v5; // r7@2
  _DWORD *v6; // r4@4
  int result; // r0@8

  v1 = *a1;
  v2 = v1 % unk_2815304;
  v3 = *(_DWORD **)(TopSnowBlock::mRecoverableLookupSet + 4 * v2);
  if ( !v3 )
    goto LABEL_9;
  v4 = (_DWORD *)*v3;
  v5 = *(_DWORD *)(*v3 + 4);
  while ( v1 != v5 )
  {
    v6 = (_DWORD *)*v4;
    if ( *v4 )
    {
      v5 = v6[1];
      v3 = v4;
      v4 = (_DWORD *)*v4;
      if ( v6[1] % unk_2815304 == v2 )
        continue;
    }
  }
  if ( v3 )
    result = *v3 != 0;
  else
LABEL_9:
    result = 0;
  return result;
}


signed int __fastcall TopSnowBlock::getResourceCount(TopSnowBlock *this, Random *a2, int a3, int a4)
{
  unsigned __int8 v4; // r4@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r0@1
  signed int v7; // r1@1
  signed int v8; // kr00_4@1
  signed int result; // r0@1

  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
  v6 = ((0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32)))) + 1;
  v8 = v6;
  v7 = v6 + (v6 >> 31);
  result = 1;
  if ( v8 / 2 > 1 )
    result = v7 >> 1;
  return result;
}


signed int __fastcall TopSnowBlock::tryToPlace(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  TopSnowBlock *v4; // r9@1
  unsigned int v5; // r6@1
  const BlockPos *v6; // r7@1
  BlockSource *v7; // r4@1
  bool v8; // zf@2
  int v9; // r5@6
  int v10; // r7@7
  signed int result; // r0@11
  unsigned __int64 *v12; // r0@12
  signed int v13; // r0@12
  int v14; // r5@13
  int v15; // r7@14
  bool v16; // [sp+0h] [bp-40h]@0
  char v17; // [sp+8h] [bp-38h]@14
  char v18; // [sp+9h] [bp-37h]@14
  char v19; // [sp+Ch] [bp-34h]@7
  char v20; // [sp+Dh] [bp-33h]@7
  int v21; // [sp+10h] [bp-30h]@5
  int v22; // [sp+14h] [bp-2Ch]@5
  int v23; // [sp+18h] [bp-28h]@5
  unsigned __int8 v24; // [sp+1Ch] [bp-24h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v24, a2, (int)a3);
  if ( (*(int (__fastcall **)(TopSnowBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v4 + 224))(v4, v7, v6) == 1 )
  {
    v8 = v24 == 0;
    if ( v24 )
      v8 = v24 == *((_BYTE *)v4 + 4);
    if ( v8 )
    {
      v9 = v5 + 1;
      v21 = *(_DWORD *)v6;
      v22 = *((_DWORD *)v6 + 1);
      v23 = *((_DWORD *)v6 + 2);
      do
      {
        v10 = TopSnowBlock::buildData(v7, (BlockSource *)&v21, (const BlockPos *)1, 1, v16);
        v19 = *((_BYTE *)v4 + 4);
        v20 = v10;
        BlockSource::setBlockAndData((int)v7, (BlockPos *)&v21, (int)&v19, 3, 0);
        if ( v10 == 7 )
          ++v22;
        --v9;
      }
      while ( v9 );
    }
    else
      v12 = (unsigned __int64 *)Block::getBlockState(Block::mTopSnow, 19);
      v13 = (0xFu >> (4 - (*v12 >> 32))) & (v5 >> (*v12 + 1 - (*v12 >> 32)));
      if ( v13 >= 0 )
        v14 = v13 + 1;
        do
        {
          v15 = TopSnowBlock::buildData(v7, (BlockSource *)&v21, (const BlockPos *)1, 1, v16);
          v17 = *((_BYTE *)v4 + 4);
          v18 = v15;
          BlockSource::setBlockAndData((int)v7, (BlockPos *)&v21, (int)&v17, 3, 0);
          if ( v15 == 7 )
            ++v22;
          --v14;
        }
        while ( v14 );
    result = 1;
  }
  else
    result = Block::tryToPlace(v4, v7, v6, v5);
  return result;
}


void __fastcall TopSnowBlock::startFalling(TopSnowBlock *this, BlockSource *a2, const BlockPos *a3, const Block *a4, bool a5)
{
  TopSnowBlock::startFalling(this, a2, a3, a4, a5);
}


signed int __fastcall TopSnowBlock::playerWillDestroy(TopSnowBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Entity *v4; // r5@1
  unsigned __int8 v5; // r6@1
  const BlockPos *v6; // r4@1
  int v7; // r8@1
  BlockSource *v8; // r7@1
  BlockState *v9; // r0@1
  unsigned int v10; // r0@2
  unsigned int v11; // r0@3
  char v13; // [sp+4h] [bp-1Ch]@3
  char v14; // [sp+5h] [bp-1Bh]@5
  unsigned __int8 v15; // [sp+7h] [bp-19h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = Entity::getRegion(a2);
  v8 = (BlockSource *)Entity::getRegion(v4);
  v15 = v5;
  v9 = (BlockState *)Block::getBlockState(Block::mTopSnow, 7);
  if ( BlockState::getBool(v9, &v15) == 1 && (v10 = BlockSource::getExtraData(v8, v6)) != 0 )
  {
    v13 = v10;
    v11 = v10 >> 8;
  }
  else
    v13 = BlockID::AIR;
    LOBYTE(v11) = 0;
  v14 = v11;
  BlockSource::setBlockAndData(v7, v6, (int)&v13, 3, (int)v4);
  return 1;
}
