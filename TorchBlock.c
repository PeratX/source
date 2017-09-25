

signed int __fastcall TorchBlock::getPlacementDataValue(TorchBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  int v6; // r6@1
  const BlockPos *v7; // r8@1
  BlockSource *v8; // r9@1
  Block *v9; // r0@1
  Block *v10; // r7@1
  signed int v11; // r0@1
  int v12; // r1@1
  signed int result; // r0@5
  int v14; // r4@6
  _BYTE *v15; // r7@6
  int v16; // r2@7
  char v17; // [sp+4h] [bp-34h]@7
  char v18; // [sp+10h] [bp-28h]@1

  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)Entity::getRegion(a2);
  BlockPos::neighbor((BlockPos *)&v18, (int)v7, Facing::OPPOSITE_FACING[v6]);
  v9 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v18);
  v10 = v9;
  v11 = Block::isType(v9, (const Block *)Block::mMobSpawner);
  v12 = 0;
  if ( !v11 )
    v12 = (*(int (__fastcall **)(Block *, BlockSource *, char *, int))(*(_DWORD *)v10 + 44))(v10, v8, &v18, v6) ^ 1;
  if ( !(_BYTE)v6 || v12 )
  {
    v14 = dword_2803214;
    v15 = (_BYTE *)Facing::Plane::HORIZONTAL;
    if ( Facing::Plane::HORIZONTAL == dword_2803214 )
    {
LABEL_9:
      result = 5;
    }
    else
      while ( 1 )
      {
        BlockPos::relative((BlockPos *)&v17, (int)v7, Facing::OPPOSITE_FACING[*v15], 1);
        v16 = *v15;
        if ( BlockSource::canProvideSupport(v8, (int)&v17) == 1 )
          break;
        if ( (_BYTE *)v14 == ++v15 )
          goto LABEL_9;
      }
      result = TorchBlock::DATA_FROM_FACING[*v15];
  }
  else
    result = TorchBlock::DATA_FROM_FACING[v6];
  return result;
}


signed int __fastcall TorchBlock::getIconYOffset(TorchBlock *this)
{
  return -3;
}


unsigned int __fastcall TorchBlock::getDirection(TorchBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  return (0xFu >> (4 - (*v3 >> 32))) & (*v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall TorchBlock::animateTick(TorchBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r6@1
  const BlockPos *v5; // r5@1
  int v6; // r4@1
  unsigned int v7; // r6@1
  float v13; // [sp+28h] [bp-28h]@10
  float v14; // [sp+34h] [bp-1Ch]@1

  v4 = a2;
  v5 = a3;
  v6 = BlockSource::getLevel(a2);
  v7 = BlockSource::getData(v4, v5);
  Vec3::Vec3((int)&v14, (int)v5);
  __asm
  {
    VMOV.F32        S4, #0.5
    VLDR            S8, [SP,#0x50+var_14]
    VLDR            S6, [SP,#0x50+var_1C]
    VLDR            S2, [SP,#0x50+var_18]
    VADD.F32        S0, S8, S4
    VADD.F32        S4, S6, S4
  }
  switch ( v7 )
    case 1u:
      __asm { VLDR            S4, =0.23; jumptable 018DEB18 case 1 }
      goto LABEL_5;
    case 2u:
      __asm { VLDR            S4, =0.77; jumptable 018DEB18 case 2 }
LABEL_5:
      __asm
      {
        VLDR            S8, =0.92
        VADD.F32        S4, S6, S4
        VADD.F32        S2, S2, S8
      }
      goto LABEL_6;
    case 3u:
        VLDR            S0, =0.92; jumptable 018DEB18 case 3
        VLDR            S6, =0.23
      goto LABEL_9;
    case 4u:
        VLDR            S0, =0.92; jumptable 018DEB18 case 4
        VLDR            S6, =0.77
LABEL_9:
        VADD.F32        S0, S2, S0
        VSTR            S4, [SP,#0x50+var_28]
        VADD.F32        S2, S8, S6
        VSTR            S0, [SP,#0x50+var_24]
        VSTR            S2, [SP,#0x50+var_20]
      break;
    default:
        VLDR            S6, =0.7; jumptable 018DEB18 default case
        VADD.F32        S2, S2, S6
LABEL_6:
        VSTR            S2, [SP,#0x50+var_24]
        VSTR            S0, [SP,#0x50+var_20]
  Level::addParticle(v6, 4, (int)&v13);
  return Level::addParticle(v6, 7, (int)&v13);
}


signed int __fastcall TorchBlock::neighborChanged(TorchBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r8@1
  TorchBlock *v6; // r10@1
  const BlockPos *v7; // r7@1
  unsigned int v8; // r5@1
  unsigned __int64 *v9; // r0@1
  signed int result; // r0@1
  int v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+8h] [bp-28h]@2
  int v13; // [sp+Ch] [bp-24h]@3

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = (unsigned __int64 *)Block::getBlockState((int)v6, 15);
  BlockPos::neighbor(
    (BlockPos *)&v11,
    (int)v4,
    Facing::OPPOSITE_FACING[TorchBlock::FACING_FROM_DATA[(0xFu >> (4 - (*v9 >> 32))) & (v8 >> (*v9 + 1 - (*v9 >> 32)))]]);
  result = *(_DWORD *)v7;
  if ( *(_DWORD *)v7 == v11 )
  {
    result = v12;
    if ( *((_DWORD *)v7 + 1) == v12 )
    {
      result = v13;
      if ( *((_DWORD *)v7 + 2) == v13 )
        result = TorchBlock::_checkDoPop(v6, v5, v4);
    }
  }
  return result;
}


void __fastcall TorchBlock::~TorchBlock(TorchBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


AABB *__fastcall TorchBlock::getVisualShape(TorchBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  TorchBlock *v5; // r5@1
  AABB *v6; // r4@1
  unsigned int v7; // r6@1
  unsigned __int64 *v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = BlockSource::getData(a2, a3);
  v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  switch ( (0xFu >> (4 - (*v8 >> 32))) & (v7 >> (*v8 + 1 - (*v8 >> 32))) )
  {
    case 1u:
      AABB::set((unsigned int)v6, 4518011146364308685LL, 0.3, 0.8, 0.65);
      break;
    case 2u:
      AABB::set(__PAIR__(1060320051, (unsigned int)v6), 4518011146364308685LL, 1.0, 0.8, 0.65);
    case 3u:
      AABB::set(__PAIR__(1051931443, (unsigned int)v6), 1045220557LL, 0.65, 0.8, 0.3);
    case 4u:
      AABB::set(__PAIR__(1051931443, (unsigned int)v6), 4554039943383272653LL, 0.65, 0.8, 1.0);
    default:
      AABB::set(__PAIR__(1053609165, (unsigned int)v6), 4525216906440867840LL, 0.6, 0.6, 0.6);
  }
  return v6;
}


_DWORD *__fastcall TorchBlock::getAABB(TorchBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  _DWORD *result; // r0@2
  char v10; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  v8 = a4;
  if ( a6 == 1 )
  {
    (*(void (__cdecl **)(TorchBlock *))(*(_DWORD *)this + 416))(this);
    Vec3::Vec3((int)&v10, (int)v7);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v10);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


int __fastcall TorchBlock::TorchBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void (__fastcall *v7)(int, int *, int *); // r3@1
  int *v13; // r2@1
  float v15; // [sp+0h] [bp-30h]@1
  int v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+8h] [bp-28h]@1
  int v18; // [sp+Ch] [bp-24h]@1
  int v19; // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@1
  int v21; // [sp+18h] [bp-18h]@1
  int v22; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(15);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2716304;
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 24) = 1107296256;
  *(_DWORD *)(v3 + 28) = 0;
  v7 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v3 + 452);
  v20 = 0;
  v21 = 1045220557;
  v22 = 1051931443;
  v17 = 1050253722;
  v18 = 1061997773;
  v19 = 1059481190;
  v7(v3, &v20, &v17);
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
    VSTR            S0, [SP,#0x30+var_30]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v13 = &v16;
  Block::mTranslucency[v4] = *v13;
  return v3;
}


signed int __fastcall TorchBlock::_checkDoPop(TorchBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TorchBlock *v5; // r8@1
  unsigned int v6; // r7@2
  unsigned __int64 *v7; // r0@2
  int v8; // r6@2
  Block *v9; // r7@2
  void (__fastcall *v10)(TorchBlock *, BlockSource *, const BlockPos *, unsigned int); // r6@4
  unsigned int v11; // r0@4
  char v13; // [sp+Ch] [bp-2Ch]@4
  char v14; // [sp+10h] [bp-28h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( TorchBlock::_checkCanSurvive(this, a2, a3) == 1 )
  {
    v6 = BlockSource::getData(v4, v3);
    v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
    v8 = TorchBlock::FACING_FROM_DATA[(0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32)))];
    BlockPos::neighbor((BlockPos *)&v14, (int)v3, Facing::OPPOSITE_FACING[v8]);
    v9 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v14);
    if ( Block::isType(v9, (const Block *)Block::mMobSpawner) != 1
      && !(*(int (__fastcall **)(Block *, BlockSource *, char *, _DWORD))(*(_DWORD *)v9 + 44))(v9, v4, &v14, (char)v8) )
    {
      v10 = *(void (__fastcall **)(TorchBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v5 + 276);
      v11 = BlockSource::getData(v4, v3);
      v10(v5, v4, v3, v11);
      v13 = BlockID::AIR;
      BlockSource::setBlock((int)v4, v3, &v13, 3);
    }
  }
  return 1;
}


int __fastcall TorchBlock::canBeSilkTouched(TorchBlock *this)
{
  return 0;
}


signed int __fastcall TorchBlock::_checkCanSurvive(TorchBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockPos *v3; // r8@1
  BlockSource *v4; // r5@1
  TorchBlock *v5; // r6@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  signed int result; // r0@3
  char v9; // [sp+8h] [bp-38h]@5
  unsigned __int8 v10; // [sp+Ch] [bp-34h]@4
  unsigned __int8 v11; // [sp+Dh] [bp-33h]@5
  char v12; // [sp+10h] [bp-30h]@1
  char v13; // [sp+18h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  BlockPos::neighbor(
    (BlockPos *)&v13,
    (int)v3,
    Facing::OPPOSITE_FACING[TorchBlock::FACING_FROM_DATA[(0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32)))]]);
  ChunkPos::ChunkPos((ChunkPos *)&v12, (const BlockPos *)&v13);
  if ( BlockSource::getChunk(v4, (const ChunkPos *)&v12)
    && !(*(int (__fastcall **)(TorchBlock *, BlockSource *, BlockPos *))(*(_DWORD *)v5 + 224))(v5, v4, v3) )
  {
    BlockSource::getBlockAndData((BlockSource *)&v10, v4, (int)v3);
    if ( v10 == *((_BYTE *)v5 + 4) )
    {
      (*(void (__fastcall **)(TorchBlock *, BlockSource *, BlockPos *, _DWORD))(*(_DWORD *)v5 + 276))(v5, v4, v3, v11);
      v9 = BlockID::AIR;
      BlockSource::setBlock((int)v4, v3, &v9, 3);
    }
    result = 0;
  }
  else
    result = 1;
  return result;
}


void __fastcall TorchBlock::~TorchBlock(TorchBlock *this)
{
  TorchBlock::~TorchBlock(this);
}


void __fastcall TorchBlock::_flameParticlePos(TorchBlock *this, const BlockPos *a2, int a3, int a4)
{
  int v4; // r5@1
  float v9; // [sp+4h] [bp-1Ch]@1

  v4 = a4;
  Vec3::Vec3((int)&v9, a3);
  __asm
  {
    VMOV.F32        S4, #0.5
    VLDR            S8, [SP,#0x20+var_14]
    VLDR            S6, [SP,#0x20+var_1C]
    VLDR            S2, [SP,#0x20+var_18]
    VADD.F32        S0, S8, S4
    VADD.F32        S4, S6, S4
  }
  switch ( v4 )
    case 1:
      __asm { VLDR            S4, =0.23; jumptable 018DEA66 case 1 }
      goto LABEL_5;
    case 2:
      __asm { VLDR            S4, =0.77; jumptable 018DEA66 case 2 }
LABEL_5:
      __asm
      {
        VLDR            S8, =0.92
        VADD.F32        S4, S6, S4
        VADD.F32        S2, S2, S8
      }
      goto LABEL_6;
    case 3:
        VLDR            S0, =0.92; jumptable 018DEA66 case 3
        VLDR            S6, =0.23
      goto LABEL_9;
    case 4:
        VLDR            S0, =0.92; jumptable 018DEA66 case 4
        VLDR            S6, =0.77
LABEL_9:
        VADD.F32        S0, S2, S0
        VSTR            S4, [R4]
        VADD.F32        S2, S8, S6
        VSTR            S0, [R4,#4]
        VSTR            S2, [R4,#8]
      break;
    default:
        VLDR            S6, =0.7; jumptable 018DEA66 default case
        VADD.F32        S2, S2, S6
LABEL_6:
        VSTR            S2, [R4,#4]
        VSTR            S0, [R4,#8]
}


signed int __fastcall TorchBlock::onPlace(TorchBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TorchBlock *v5; // r9@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  int v8; // r1@2
  int v9; // r2@2
  int v10; // r1@4
  int v11; // r2@4
  int v12; // r2@6
  int v13; // r2@8
  int v14; // r1@10
  int v15; // r2@10
  char v17; // [sp+Ch] [bp-6Ch]@11
  int v18; // [sp+10h] [bp-68h]@10
  int v19; // [sp+14h] [bp-64h]@10
  int v20; // [sp+18h] [bp-60h]@10
  char v21; // [sp+1Ch] [bp-5Ch]@9
  __int64 v22; // [sp+20h] [bp-58h]@8
  int v23; // [sp+28h] [bp-50h]@8
  char v24; // [sp+2Ch] [bp-4Ch]@7
  __int64 v25; // [sp+30h] [bp-48h]@6
  int v26; // [sp+38h] [bp-40h]@6
  char v27; // [sp+3Ch] [bp-3Ch]@5
  int v28; // [sp+40h] [bp-38h]@4
  int v29; // [sp+44h] [bp-34h]@4
  int v30; // [sp+48h] [bp-30h]@4
  char v31; // [sp+4Ch] [bp-2Ch]@3
  int v32; // [sp+50h] [bp-28h]@2
  int v33; // [sp+54h] [bp-24h]@2
  int v34; // [sp+58h] [bp-20h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  if ( !((v6 >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32)))) )
  {
    v8 = *((_DWORD *)v3 + 1);
    v9 = *((_DWORD *)v3 + 2);
    v32 = *(_DWORD *)v3 - 1;
    v33 = v8;
    v34 = v9;
    if ( BlockSource::canProvideSupport(v4, (int)&v32) == 1 )
    {
      v31 = *((_BYTE *)v5 + 4);
      BlockSource::setBlockAndData((int)v4, v3, &v31, 1, 3, 0);
    }
    else
      v10 = *((_DWORD *)v3 + 1);
      v11 = *((_DWORD *)v3 + 2);
      v28 = *(_DWORD *)v3 + 1;
      v29 = v10;
      v30 = v11;
      if ( BlockSource::canProvideSupport(v4, (int)&v28) == 1 )
      {
        v27 = *((_BYTE *)v5 + 4);
        BlockSource::setBlockAndData((int)v4, v3, &v27, 2, 3, 0);
      }
      else
        v12 = *((_DWORD *)v3 + 2);
        v25 = *(_QWORD *)v3;
        v26 = v12 - 1;
        if ( BlockSource::canProvideSupport(v4, (int)&v25) == 1 )
        {
          v24 = *((_BYTE *)v5 + 4);
          BlockSource::setBlockAndData((int)v4, v3, &v24, 3, 3, 0);
        }
        else
          v13 = *((_DWORD *)v3 + 2);
          v22 = *(_QWORD *)v3;
          v23 = v13 + 1;
          if ( BlockSource::canProvideSupport(v4, (int)&v22) == 1 )
          {
            v21 = *((_BYTE *)v5 + 4);
            BlockSource::setBlockAndData((int)v4, v3, &v21, 4, 3, 0);
          }
          else
            v14 = *((_DWORD *)v3 + 1);
            v15 = *((_DWORD *)v3 + 2);
            v18 = *(_DWORD *)v3;
            v19 = v14 - 1;
            v20 = v15;
            if ( BlockSource::canProvideSupport(v4, (int)&v18) == 1 )
            {
              v17 = *((_BYTE *)v5 + 4);
              BlockSource::setBlockAndData((int)v4, v3, &v17, 5, 3, 0);
            }
  }
  return TorchBlock::_checkCanSurvive(v5, v4, v3);
}


int __fastcall TorchBlock::canBePlacedOn(TorchBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r4@1
  BlockSource *v5; // r5@1
  Block *v6; // r6@1
  int result; // r0@2
  char v8; // [sp+4h] [bp-1Ch]@1

  v4 = a4;
  v5 = a2;
  BlockPos::neighbor((BlockPos *)&v8, (int)a3, Facing::OPPOSITE_FACING[a4]);
  v6 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v8);
  if ( Block::isType(v6, (const Block *)Block::mMobSpawner) )
    result = 1;
  else
    result = (*(int (__fastcall **)(Block *, BlockSource *, char *, int))(*(_DWORD *)v6 + 44))(v6, v5, &v8, v4);
  return result;
}


int __fastcall TorchBlock::mayPlace(TorchBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r7@1
  BlockSource *v4; // r4@1
  Block *v5; // r6@1
  Block *v6; // r6@3
  Block *v7; // r6@5
  Block *v8; // r6@7
  Block *v9; // r5@9
  int result; // r0@10
  char v11; // [sp+8h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  BlockPos::neighbor((BlockPos *)&v11, (int)a3, (char)Facing::OPPOSITE_FACING[2]);
  v5 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v11);
  if ( Block::isType(v5, (const Block *)Block::mMobSpawner) == 1
    || (*(int (__fastcall **)(Block *, BlockSource *, char *, signed int))(*(_DWORD *)v5 + 44))(v5, v4, &v11, 2)
    || (BlockPos::neighbor((BlockPos *)&v11, (int)v3, (char)Facing::OPPOSITE_FACING[3]),
        v6 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v11),
        Block::isType(v6, (const Block *)Block::mMobSpawner) == 1)
    || (*(int (__fastcall **)(Block *, BlockSource *, char *, signed int))(*(_DWORD *)v6 + 44))(v6, v4, &v11, 3)
    || (BlockPos::neighbor((BlockPos *)&v11, (int)v3, (char)Facing::OPPOSITE_FACING[5]),
        v7 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v11),
        Block::isType(v7, (const Block *)Block::mMobSpawner) == 1)
    || (*(int (__fastcall **)(Block *, BlockSource *, char *, signed int))(*(_DWORD *)v7 + 44))(v7, v4, &v11, 5)
    || (BlockPos::neighbor((BlockPos *)&v11, (int)v3, (char)Facing::OPPOSITE_FACING[4]),
        v8 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v11),
        Block::isType(v8, (const Block *)Block::mMobSpawner) == 1)
    || (*(int (__fastcall **)(Block *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 44))(v8, v4, &v11, 4)
    || (BlockPos::neighbor((BlockPos *)&v11, (int)v3, (char)Facing::OPPOSITE_FACING[1]),
        v9 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v11),
        Block::isType(v9, (const Block *)Block::mMobSpawner)) )
  {
    result = 1;
  }
  else
    result = (*(int (__fastcall **)(Block *, BlockSource *, char *, signed int))(*(_DWORD *)v9 + 44))(v9, v4, &v11, 1);
  return result;
}
