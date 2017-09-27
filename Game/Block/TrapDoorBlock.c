

void __fastcall TrapDoorBlock::~TrapDoorBlock(TrapDoorBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_BOOL4 __fastcall TrapDoorBlock::_isUpsideDown(TrapDoorBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 40);
  return BlockState::getBool(v2, &v4);
}


int __fastcall TrapDoorBlock::_toggleOpen(TrapDoorBlock *this, BlockSource *a2, Entity *a3, const BlockPos *a4)
{
  BlockPos *v4; // r9@1
  TrapDoorBlock *v5; // r6@1
  BlockSource *v6; // r10@1
  BlockState *v7; // r7@1
  BlockState *v8; // r0@1
  _BOOL4 v9; // r0@1
  unsigned __int8 v10; // r5@1
  int v11; // r4@1
  char v12; // r0@1
  Entity **v13; // r7@1
  __int64 v14; // kr00_8@1
  Entity *v15; // t1@2
  int v16; // r6@3
  float v22; // [sp+Ch] [bp-5Ch]@3
  float v25; // [sp+18h] [bp-50h]@3
  unsigned __int8 v26; // [sp+24h] [bp-44h]@1
  char v27; // [sp+40h] [bp-28h]@1
  char v28; // [sp+41h] [bp-27h]@1
  char v29; // [sp+44h] [bp-24h]@1
  unsigned __int8 v30; // [sp+45h] [bp-23h]@1

  v4 = a4;
  v5 = this;
  v6 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v29, a2, (int)a4);
  v7 = (BlockState *)Block::getBlockState((int)v5, 26);
  v26 = v30;
  v8 = (BlockState *)Block::getBlockState((int)v5, 26);
  v9 = BlockState::getBool(v8, &v26);
  v10 = v30;
  v11 = !v9 << (*(_QWORD *)v7 + 1 - (unsigned int)(*(_QWORD *)v7 >> 32));
  v12 = BlockState::getMask(v7);
  v30 = v10 & ~v12 | v11;
  v27 = v29;
  v28 = v10 & ~v12 | v11;
  BlockSource::setBlockAndData((int)v6, v4, (int)&v27, 3, 0);
  AABB::AABB((AABB *)&v26);
  (*(void (__fastcall **)(TrapDoorBlock *, BlockSource *, BlockPos *, unsigned __int8 *))(*(_DWORD *)v5 + 32))(
    v5,
    v6,
    v4,
    &v26);
  v14 = *(_QWORD *)BlockSource::fetchEntities(v6, 0, (const AABB *)&v26);
  v13 = (Entity **)v14;
  if ( (_DWORD)v14 != HIDWORD(v14) )
  {
    do
    {
      v15 = *v13;
      ++v13;
      Entity::onOnewayCollision(v15, (const AABB *)&v26);
    }
    while ( (Entity **)HIDWORD(v14) != v13 );
  }
  v16 = BlockSource::getLevel(v6);
  Vec3::Vec3((int)&v22, (int)v4);
  __asm
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x68+var_5C]
    VLDR            S4, [SP,#0x68+var_58]
    VLDR            S6, [SP,#0x68+var_54]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x68+var_50]
    VSTR            S4, [SP,#0x68+var_4C]
    VSTR            S0, [SP,#0x68+var_48]
  return Level::broadcastDimensionEvent(v16, v6, 1003, (int)&v25, 0);
}


int __fastcall TrapDoorBlock::canBeSilkTouched(TrapDoorBlock *this)
{
  return 0;
}


int __fastcall TrapDoorBlock::setOpen(TrapDoorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  TrapDoorBlock *v4; // r6@1
  int v5; // r7@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r5@1
  BlockState *v8; // r0@1
  int result; // r0@1
  Entity *v10; // r2@1
  unsigned __int8 v11; // [sp+0h] [bp-18h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v11, a2, (int)a3);
  *(&v11 + 3) = *(&v11 + 1);
  v8 = (BlockState *)Block::getBlockState((int)v4, 26);
  result = BlockState::getBool(v8, &v11 + 3) ^ v5;
  if ( result == 1 )
    result = TrapDoorBlock::_toggleOpen(v4, v7, v10, v6);
  return result;
}


int __fastcall TrapDoorBlock::onRedstoneUpdate(TrapDoorBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  TrapDoorBlock *v5; // r6@1
  int v6; // r7@1
  const BlockPos *v7; // r8@1
  BlockSource *v8; // r5@1
  signed int v9; // r4@1
  BlockState *v10; // r0@3
  int result; // r0@3
  Entity *v12; // r2@3
  char v13; // [sp+4h] [bp-1Ch]@1
  unsigned __int8 v14; // [sp+5h] [bp-1Bh]@1
  unsigned __int8 v15; // [sp+7h] [bp-19h]@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v13, a2, (int)a3);
  v9 = 0;
  v15 = v14;
  if ( v6 > 0 )
    v9 = 1;
  v10 = (BlockState *)Block::getBlockState((int)v5, 26);
  result = BlockState::getBool(v10, &v15);
  if ( v9 != result )
    result = TrapDoorBlock::_toggleOpen(v5, v8, v12, v7);
  return result;
}


int __fastcall TrapDoorBlock::getPlacementDataValue(TrapDoorBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  TrapDoorBlock *v6; // r4@1
  signed __int8 v7; // r5@1
  float v13; // r1@1
  int v14; // r6@1
  BlockState *v15; // r0@3
  __int64 v16; // r6@3
  signed int v17; // r6@3
  BlockState *v18; // r0@4
  BlockState *v19; // r0@5
  int v20; // r7@5
  signed int v21; // r0@6
  int v22; // r0@10
  signed int v23; // r5@10
  BlockState *v25; // r0@15
  signed int v26; // r4@15
  int v28; // [sp+0h] [bp-28h]@1

  v6 = this;
  v7 = a4;
  Entity::getRotation((Entity *)&v28, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S16, #0.5
    VLDR            S2, [SP,#0x28+var_24]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  }
  v14 = mce::Math::floor(_R0, v13) & 3;
  if ( v14 == 1 )
    v18 = (BlockState *)Block::getBlockState((int)v6, 12);
    BlockState::getMask(v18);
    LOBYTE(v17) = 0;
  else if ( v14 )
    v19 = (BlockState *)Block::getBlockState((int)v6, 12);
    v20 = *(_QWORD *)v19 + 1 - (*(_QWORD *)v19 >> 32);
    if ( v14 == 2 )
    {
      BlockState::getMask(v19);
      v21 = 2;
    }
    else
      v21 = 1;
    v17 = v21 << v20;
  else
    v15 = (BlockState *)Block::getBlockState((int)v6, 12);
    v16 = *(_QWORD *)v15;
    BlockState::getMask(v15);
    v17 = 3 << (v16 + 1 - BYTE4(v16));
  if ( v7 )
    v22 = (unsigned __int8)v7;
    v23 = 0;
    if ( v22 != 1 )
      _R0 = a5;
      __asm
      {
        VLDR            S0, [R0,#4]
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v23 = 1;
    v23 = 1;
  v25 = (BlockState *)Block::getBlockState((int)v6, 40);
  v26 = v23 << (*(_QWORD *)v25 + 1 - (unsigned int)(*(_QWORD *)v25 >> 32));
  return (unsigned __int8)(v17 & ~(unsigned __int8)BlockState::getMask(v25)) | (unsigned __int8)v26;
}


signed int __fastcall TrapDoorBlock::getResourceCount(TrapDoorBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


int __fastcall TrapDoorBlock::TrapDoorBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  signed int v7; // [sp+0h] [bp-28h]@1
  signed int v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1
  int v11; // [sp+10h] [bp-18h]@1
  int v12; // [sp+14h] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_2716504;
  Block::setSolid((Block *)v5, 0);
  Block::setIsInteraction((Block *)v5, 1);
  *(_DWORD *)(v5 + 20) = 8;
  Block::mTranslucency[v4] = 1061997773;
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 24) = 81920;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 1065353216;
  v8 = 1065353216;
  v9 = 1065353216;
  Block::setVisualShape((Block *)v5, (const Vec3 *)&v10, (const Vec3 *)&v7);
  return v5;
}


unsigned int __fastcall TrapDoorBlock::onPlace(TrapDoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TrapDoorBlock *v5; // r6@1
  Level *v6; // r0@1
  unsigned int result; // r0@1
  Dimension *v8; // r0@2
  int v9; // r0@2
  CircuitSceneGraph *v10; // r5@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  (*(void (__fastcall **)(TrapDoorBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
  v6 = (Level *)BlockSource::getLevel(v4);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    v8 = (Dimension *)BlockSource::getDimension(v4);
    v9 = Dimension::getCircuitSystem(v8);
    v10 = (CircuitSceneGraph *)(v9 + 4);
    result = CircuitSceneGraph::getComponent((CircuitSceneGraph *)(v9 + 4), v3, 0x43534343uLL);
    if ( result )
    {
      *(_BYTE *)(result + 16) = 0;
    }
    else
      result = CircuitSceneGraph::getFromPendingAdd(v10, v3, 0x43534343uLL);
      if ( result )
        *(_BYTE *)(result + 16) = 0;
  }
  return result;
}


signed int __fastcall TrapDoorBlock::isInteractiveBlock(TrapDoorBlock *this)
{
  return 1;
}


AABB *__fastcall TrapDoorBlock::getVisualShape(TrapDoorBlock *this, int a2, AABB *a3, bool a4)
{
  unsigned int v4; // r5@1
  AABB *v5; // r4@1
  TrapDoorBlock *v6; // r6@1
  BlockState *v7; // r0@1
  unsigned __int64 *v8; // r0@2
  int *v9; // r1@3
  char *v10; // r2@3
  BlockState *v11; // r0@4
  int v13; // [sp+4h] [bp-A4h]@6
  signed int v14; // [sp+8h] [bp-A0h]@6
  signed int v15; // [sp+Ch] [bp-9Ch]@6
  int v16; // [sp+10h] [bp-98h]@6
  signed int v17; // [sp+14h] [bp-94h]@6
  int v18; // [sp+18h] [bp-90h]@6
  char v19; // [sp+1Ch] [bp-8Ch]@5
  signed int v20; // [sp+20h] [bp-88h]@5
  int v21; // [sp+24h] [bp-84h]@5
  int v22; // [sp+28h] [bp-80h]@5
  signed int v23; // [sp+2Ch] [bp-7Ch]@5
  signed int v24; // [sp+30h] [bp-78h]@5
  int v25; // [sp+34h] [bp-74h]@3
  signed int v26; // [sp+38h] [bp-70h]@3
  signed int v27; // [sp+3Ch] [bp-6Ch]@3
  char v28; // [sp+40h] [bp-68h]@3
  signed int v29; // [sp+44h] [bp-64h]@3
  int v30; // [sp+48h] [bp-60h]@3
  char v31; // [sp+4Ch] [bp-5Ch]@7
  signed int v32; // [sp+50h] [bp-58h]@7
  int v33; // [sp+54h] [bp-54h]@7
  int v34; // [sp+58h] [bp-50h]@7
  signed int v35; // [sp+5Ch] [bp-4Ch]@7
  signed int v36; // [sp+60h] [bp-48h]@7
  char v37; // [sp+64h] [bp-44h]@8
  signed int v38; // [sp+68h] [bp-40h]@8
  int v39; // [sp+6Ch] [bp-3Ch]@8
  char v40; // [sp+70h] [bp-38h]@8
  signed int v41; // [sp+74h] [bp-34h]@8
  int v42; // [sp+78h] [bp-30h]@8
  char v43; // [sp+7Ch] [bp-2Ch]@9
  signed int v44; // [sp+80h] [bp-28h]@9
  int v45; // [sp+84h] [bp-24h]@9
  char v46; // [sp+88h] [bp-20h]@9
  signed int v47; // [sp+8Ch] [bp-1Ch]@9
  int v48; // [sp+90h] [bp-18h]@9
  unsigned __int8 v49; // [sp+97h] [bp-11h]@1

  v4 = a2;
  v5 = a3;
  v6 = this;
  v49 = a2;
  v7 = (BlockState *)Block::getBlockState((int)this, 26);
  if ( BlockState::getBool(v7, &v49) == 1 )
  {
    v8 = (unsigned __int64 *)Block::getBlockState((int)v6, 12);
    switch ( (0xFu >> (4 - (*v8 >> 32))) & (v4 >> (*v8 + 1 - (*v8 >> 32))) )
    {
      case 0u:
        v9 = (int *)&v28;
        v10 = (char *)&v25;
        *(_DWORD *)&v28 = 973279855;
        v29 = 973279855;
        v30 = 973279855;
        v25 = 1044046152;
        v26 = 1065344827;
        v27 = 1065344827;
        goto LABEL_10;
      case 1u:
        v9 = &v34;
        v10 = &v31;
        v34 = 1062291374;
        v35 = 973279855;
        v36 = 973279855;
        *(_DWORD *)&v31 = 1065344827;
        v32 = 1065344827;
        v33 = 1065344827;
      case 2u:
        v9 = (int *)&v40;
        v10 = &v37;
        *(_DWORD *)&v40 = 973279855;
        v41 = 973279855;
        v42 = 973279855;
        *(_DWORD *)&v37 = 1065344827;
        v38 = 1065344827;
        v39 = 1044046152;
      case 3u:
        v9 = (int *)&v46;
        v10 = &v43;
        *(_DWORD *)&v46 = 973279855;
        v47 = 973279855;
        v48 = 1062291374;
        *(_DWORD *)&v43 = 1065344827;
        v44 = 1065344827;
        v45 = 1065344827;
      default:
        return v5;
    }
  }
  else
    v49 = v4;
    v11 = (BlockState *)Block::getBlockState((int)v6, 40);
    if ( BlockState::getBool(v11, &v49) == 1 )
      v22 = 973279855;
      v10 = &v19;
      v23 = 1062291374;
      v24 = 973279855;
      v9 = &v22;
      *(_DWORD *)&v19 = 1065344827;
      v20 = 1065344827;
      v21 = 1065344827;
    else
      v16 = 973279855;
      v17 = 973279855;
      v10 = (char *)&v13;
      v18 = 973279855;
      v13 = 1065344827;
      v14 = 1044046152;
      v15 = 1065344827;
      v9 = &v16;
LABEL_10:
    AABB::set(v5, (const Vec3 *)v9, (const Vec3 *)v10);
  return v5;
}


void __fastcall TrapDoorBlock::~TrapDoorBlock(TrapDoorBlock *this)
{
  TrapDoorBlock::~TrapDoorBlock(this);
}


unsigned int __fastcall TrapDoorBlock::_getDirection(TrapDoorBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


_BOOL4 __fastcall TrapDoorBlock::_isOpen(TrapDoorBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 26);
  return BlockState::getBool(v2, &v4);
}


signed int __fastcall TrapDoorBlock::onLoaded(TrapDoorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r7@1
  TrapDoorBlock *v4; // r4@1
  const BlockPos *v5; // r6@1
  Level *v6; // r0@1
  signed int result; // r0@1
  Dimension *v8; // r0@2
  int v9; // r0@2
  signed int v10; // r5@2
  BlockState *v11; // r0@3
  bool v12; // zf@3
  _DWORD *v13; // r1@3
  unsigned __int8 v14; // [sp+0h] [bp-18h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    v8 = (Dimension *)BlockSource::getDimension(v3);
    v9 = Dimension::getCircuitSystem(v8);
    result = CircuitSystem::create<ConsumerComponent>(v9, v5, (int)v3, 0);
    v10 = result;
    if ( result )
    {
      BlockSource::getBlockAndData((BlockSource *)&v14, v3, (int)v5);
      *(&v14 + 3) = *(&v14 + 1);
      v11 = (BlockState *)Block::getBlockState((int)v4, 26);
      v12 = BlockState::getBool(v11, &v14 + 3) == 0;
      v13 = &Redstone::SIGNAL_MIN;
      if ( !v12 )
        v13 = &Redstone::SIGNAL_MAX;
      (*(void (__fastcall **)(signed int, _DWORD))(*(_DWORD *)v10 + 16))(v10, *v13);
      result = 1;
      *(_BYTE *)(v10 + 41) = 1;
      *(_BYTE *)(v10 + 46) = 1;
      *(_BYTE *)(v10 + 16) = 1;
    }
  }
  return result;
}


signed int __fastcall TrapDoorBlock::use(TrapDoorBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  TrapDoorBlock *v4; // r5@1
  Entity *v5; // r6@1
  const BlockPos *v6; // r4@1
  int v7; // r7@2
  int v8; // r0@2
  BlockSource *v9; // r0@3
  Entity *v10; // r2@3

  v4 = this;
  v5 = a2;
  v6 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::DOORS_AND_SWITCHES) == 1 )
  {
    v7 = *((_DWORD *)v4 + 14);
    v8 = Material::getMaterial(4);
    if ( Material::operator!=(v7, v8) == 1 )
    {
      v9 = (BlockSource *)Entity::getRegion(v5);
      TrapDoorBlock::_toggleOpen(v4, v9, v10, v6);
    }
  }
  return 1;
}
