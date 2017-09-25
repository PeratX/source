

signed int __fastcall ButtonBlock::getCollisionShape(ButtonBlock *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  ButtonBlock *v5; // r7@1
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r6@1
  AABB *v8; // r4@1
  int v9; // r0@3
  signed int v10; // r6@3
  int v12; // [sp+0h] [bp-20h]@3

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( a5 && (*(int (**)(void))(*(_DWORD *)a5 + 488))() != 4194384 )
  {
    v10 = 0;
  }
  else
    v9 = j_BlockSource::getData(v7, v6);
    v10 = 1;
    j_ButtonBlock::_getShape(v5, v8, v9, 1);
    j_Vec3::Vec3((int)&v12, (int)v6);
    j_AABB::move(v8, (const Vec3 *)&v12);
  return v10;
}


int __fastcall ButtonBlock::canAttachTo(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  BlockPos *v4; // r5@1
  const BlockPos *v5; // r4@1
  int v6; // r2@1
  char v8; // [sp+4h] [bp-1Ch]@1

  v4 = this;
  v5 = a3;
  j_BlockPos::neighbor((BlockPos *)&v8, (int)a2, (int)a3);
  v6 = *((_BYTE *)v5 + (_DWORD)Facing::OPPOSITE_FACING);
  return j_BlockSource::canProvideSupport(v4, (int)&v8);
}


signed int __fastcall ButtonBlock::getSpawnResourcesAuxValue(ButtonBlock *this, unsigned __int8 a2)
{
  return 5;
}


int __fastcall ButtonBlock::_buttonUnpressed(int a1, BlockSource *a2, int a3, int a4)
{
  BlockSource *v4; // r5@1
  int v6; // r6@1
  BlockState *v7; // r0@1
  char v8; // r7@1
  int v9; // r0@1
  Level *v14; // r0@1
  int result; // r0@1
  Dimension *v16; // r0@2
  CircuitSystem *v17; // r5@2
  char v18; // [sp+Ch] [bp-3Ch]@2
  float v19; // [sp+18h] [bp-30h]@1
  char v20; // [sp+24h] [bp-24h]@1
  char v21; // [sp+25h] [bp-23h]@1
  char v22; // [sp+28h] [bp-20h]@1

  v4 = a2;
  _R4 = a4;
  v6 = a3;
  v7 = (BlockState *)j_Block::getBlockState(a1, 5);
  v8 = *(_BYTE *)(v6 + 1);
  *(_BYTE *)(v6 + 1) = v8 & ~(unsigned __int8)j_BlockState::getMask(v7);
  j_BlockPos::BlockPos((int)&v22, _R4);
  v20 = *(_BYTE *)v6;
  v21 = *(_BYTE *)(v6 + 1);
  j_BlockSource::setBlockAndData((int)v4, (BlockPos *)&v22, (int)&v20, 3, 0);
  v9 = j_BlockSource::getLevel(v4);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4]
    VLDR            S4, [R4,#4]
    VLDR            S6, [R4,#8]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x48+var_30]
    VSTR            S4, [SP,#0x48+var_2C]
    VSTR            S0, [SP,#0x48+var_28]
  }
  j_Level::broadcastDimensionEvent(v9, v4, 3500, (int)&v19, 500);
  v14 = (Level *)j_BlockSource::getLevel(v4);
  result = j_Level::isClientSide(v14);
  if ( !result )
    v16 = (Dimension *)j_BlockSource::getDimension(v4);
    v17 = (CircuitSystem *)j_Dimension::getCircuitSystem(v16);
    j_BlockPos::BlockPos((int)&v18, _R4);
    result = j_CircuitSystem::setStrength(v17, (const BlockPos *)&v18, 0);
  return result;
}


int __fastcall ButtonBlock::getVariant(ButtonBlock *this, int a2)
{
  return 0;
}


void __fastcall ButtonBlock::entityInside(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  ButtonBlock::entityInside(this, a2, a3, a4);
}


int __fastcall ButtonBlock::ButtonBlock(int a1, const void **a2, char a3, char a4)
{
  int v4; // r4@1
  char v5; // r5@1
  char v6; // r6@1
  const void **v7; // r7@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = j_Material::getMaterial(15);
  j_Block::Block(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_2722CA4;
  *(_BYTE *)(v4 + 641) = v5;
  j_Block::setTicking((Block *)v4, 0);
  j_Block::setSolid((Block *)v4, 0);
  j_Block::setIsInteraction((Block *)v4, 1);
  *(_DWORD *)(v4 + 24) = 0x2000000;
  *(_DWORD *)(v4 + 28) = 0;
  return v4;
}


void __fastcall ButtonBlock::_checkPressed(ButtonBlock *this, BlockSource *a2, const BlockPos *a3)
{
  ButtonBlock::_checkPressed(this, a2, a3);
}


int __fastcall ButtonBlock::onLoaded(ButtonBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r9@1
  unsigned __int64 *v5; // r7@1
  unsigned int v6; // r6@1
  int v7; // r7@1
  unsigned __int64 v8; // kr00_8@1
  Level *v9; // r0@1
  int result; // r0@1
  Dimension *v11; // r0@2
  int v12; // r0@2
  unsigned int v13; // r4@2

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)j_Block::getBlockState((int)this, 15);
  v6 = j_BlockSource::getData(v3, v4);
  v8 = *v5;
  v7 = *v5 >> 32;
  v9 = (Level *)j_BlockSource::getLevel(v3);
  result = j_Level::isClientSide(v9);
  if ( !result )
  {
    v11 = (Dimension *)j_BlockSource::getDimension(v3);
    v12 = j_Dimension::getCircuitSystem(v11);
    result = j_CircuitSystem::create<ProducerComponent>(
               v12,
               v4,
               (int)v3,
               Facing::OPPOSITE_FACING[(char)((v6 >> (1 - v7 + v8)) & (0xFu >> (4 - v7)))]);
    v13 = result;
    if ( result )
    {
      (*(void (**)(void))(*(_DWORD *)result + 16))();
      result = j_ProducerComponent::allowAttachments((ProducerComponent *)v13, 1);
      *(_BYTE *)(v13 + 41) = 1;
    }
  }
  return result;
}


unsigned int __fastcall ButtonBlock::getPlacementDataValue(ButtonBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  Entity *v6; // r6@1
  int v7; // r4@1
  const BlockPos *v8; // r5@1
  unsigned __int64 *v9; // r7@1
  BlockSource *v10; // r0@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = (unsigned __int64 *)j_Block::getBlockState((int)this, 5);
  v10 = (BlockSource *)j_Entity::getRegion(v6);
  return ((j_BlockSource::getData(v10, v8) >> (*v9 + 1 - (*v9 >> 32))) & (0xFu >> (4 - (*v9 >> 32)))) + v7;
}


int __fastcall ButtonBlock::_buttonPressed(int a1, BlockSource *a2, int a3, int a4, int a5)
{
  BlockSource *v5; // r5@1
  int v7; // r6@1
  BlockState *v8; // r0@1
  char v9; // r7@1
  signed int v10; // r4@1
  int v11; // r0@1
  Level *v16; // r0@1
  int result; // r0@1
  Dimension *v18; // r0@2
  CircuitSystem *v19; // r5@2
  char v20; // [sp+8h] [bp-40h]@2
  float v21; // [sp+14h] [bp-34h]@1
  char v22; // [sp+20h] [bp-28h]@1
  char v23; // [sp+21h] [bp-27h]@1
  char v24; // [sp+24h] [bp-24h]@1

  v5 = a2;
  _R8 = a4;
  v7 = a3;
  v8 = (BlockState *)j_Block::getBlockState(a1, 5);
  v9 = *(_BYTE *)(v7 + 1);
  v10 = 1 << (*(_QWORD *)v8 + 1 - (unsigned int)(*(_QWORD *)v8 >> 32));
  *(_BYTE *)(v7 + 1) = v9 & ~(unsigned __int8)j_BlockState::getMask(v8) | v10;
  j_BlockPos::BlockPos((int)&v24, _R8);
  v22 = *(_BYTE *)v7;
  v23 = *(_BYTE *)(v7 + 1);
  j_BlockSource::setBlockAndData((int)v5, (BlockPos *)&v24, (int)&v22, 3, a5);
  v11 = j_BlockSource::getLevel(v5);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R8]
    VLDR            S4, [R8,#4]
    VLDR            S6, [R8,#8]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x48+var_34]
    VSTR            S4, [SP,#0x48+var_30]
    VSTR            S0, [SP,#0x48+var_2C]
  }
  j_Level::broadcastDimensionEvent(v11, v5, 3500, (int)&v21, 600);
  v16 = (Level *)j_BlockSource::getLevel(v5);
  result = j_Level::isClientSide(v16);
  if ( !result )
    v18 = (Dimension *)j_BlockSource::getDimension(v5);
    v19 = (CircuitSystem *)j_Dimension::getCircuitSystem(v18);
    j_BlockPos::BlockPos((int)&v20, _R8);
    result = j_CircuitSystem::setStrength(v19, (const BlockPos *)&v20, 15);
  return result;
}


int __fastcall ButtonBlock::mayPlace(ButtonBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  int result; // r0@6
  char v6; // [sp+4h] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  j_BlockPos::neighbor((BlockPos *)&v6, (int)a3, 0);
  if ( j_BlockSource::canProvideSupport(v4, (int)&v6)
    || (j_BlockPos::neighbor((BlockPos *)&v6, (int)v3, 1), j_BlockSource::canProvideSupport(v4, (int)&v6) == 1)
    || (j_BlockPos::neighbor((BlockPos *)&v6, (int)v3, 2), j_BlockSource::canProvideSupport(v4, (int)&v6))
    || (j_BlockPos::neighbor((BlockPos *)&v6, (int)v3, 3), j_BlockSource::canProvideSupport(v4, (int)&v6))
    || (j_BlockPos::neighbor((BlockPos *)&v6, (int)v3, 4), j_BlockSource::canProvideSupport(v4, (int)&v6)) )
  {
    result = 1;
  }
  else
    j_BlockPos::neighbor((BlockPos *)&v6, (int)v3, 5);
    result = j_BlockSource::canProvideSupport(v4, (int)&v6);
  return result;
}


void __fastcall ButtonBlock::tick(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  ButtonBlock::tick(this, a2, a3, a4);
}


signed int __fastcall ButtonBlock::use(ButtonBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  ButtonBlock *v4; // r5@1
  Entity *v5; // r7@1
  const BlockPos *v6; // r4@1
  const BlockPos *v7; // r9@2
  unsigned __int8 v8; // r6@2
  BlockState *v9; // r0@2
  LevelChunk **v10; // r0@3
  unsigned int v11; // r3@3
  char v13; // [sp+Ch] [bp-34h]@3
  char v14; // [sp+10h] [bp-30h]@3
  char v15; // [sp+1Ch] [bp-24h]@3
  unsigned __int8 v16; // [sp+1Dh] [bp-23h]@3
  char v17; // [sp+20h] [bp-20h]@2
  unsigned __int8 v18; // [sp+21h] [bp-1Fh]@2
  unsigned __int8 v19; // [sp+23h] [bp-1Dh]@2

  v4 = this;
  v5 = a2;
  v6 = a3;
  if ( j_Player::canUseAbility((int)a2, &Abilities::DOORS_AND_SWITCHES) == 1 )
  {
    v7 = (const BlockPos *)j_Entity::getRegion(v5);
    j_BlockSource::getBlockAndData((BlockSource *)&v17, v7, (int)v6);
    v8 = v18;
    v9 = (BlockState *)j_Block::getBlockState((int)v4, 5);
    v19 = v8;
    if ( !j_BlockState::getBool(v9, &v19) )
    {
      v15 = v17;
      v16 = v18;
      j_Vec3::Vec3((int)&v14, (int)v6);
      j_ButtonBlock::_buttonPressed((int)v4, v7, (int)&v15, (int)&v14, (int)v5);
      v10 = (LevelChunk **)j_BlockSource::getTickQueue(v7, v6);
      v11 = 20;
      v13 = *((_BYTE *)v4 + 4);
      if ( *((_BYTE *)v4 + 641) )
        v11 = 30;
      j_BlockTickingQueue::add(v10, v7, (int)v6, &v13, v11, 0);
    }
  }
  return 1;
}


signed int __fastcall ButtonBlock::_checkCanSurvive(ButtonBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  ButtonBlock *v5; // r6@1
  unsigned int v6; // r8@1
  unsigned __int64 *v7; // r0@1
  signed int v8; // r7@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = j_BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)j_Block::getBlockState((int)v5, 15);
  if ( (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 220))(
         v5,
         v4,
         v3,
         (char)((0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32))))) )
  {
    v8 = 1;
  }
  else
    v8 = 0;
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 276))(v5, v4, v3, v6);
    j_BlockSource::removeBlock(v4, v3);
  return v8;
}


AABB *__fastcall ButtonBlock::getVisualShape(ButtonBlock *this, int a2, AABB *a3, bool a4)
{
  AABB *v4; // r4@1

  v4 = a3;
  j_ButtonBlock::_getShape(this, a3, a2, 0);
  return v4;
}


void __fastcall ButtonBlock::entityInside(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  BlockSource *v4; // r5@1
  ButtonBlock *v5; // r6@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  unsigned __int8 v8; // r7@3
  BlockState *v9; // r0@3
  unsigned __int8 v10; // [sp+3h] [bp-15h]@3

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)j_BlockSource::getLevel(a2);
  if ( !j_Level::isClientSide(v7) && *((_BYTE *)v5 + 641) )
  {
    v8 = j_BlockSource::getData(v4, v6);
    v9 = (BlockState *)j_Block::getBlockState((int)v5, 5);
    v10 = v8;
    if ( !j_BlockState::getBool(v9, &v10) )
      j_ButtonBlock::_checkPressed(v5, v4, v6);
  }
}


int __fastcall ButtonBlock::mayPlace(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r4@1
  int v5; // r5@1
  int v6; // r2@1
  int v8; // [sp+0h] [bp-20h]@1

  v4 = a2;
  v5 = Facing::OPPOSITE_FACING[a4];
  j_BlockPos::neighbor((BlockPos *)&v8, (int)a3, v5);
  v6 = Facing::OPPOSITE_FACING[v5];
  return j_BlockSource::canProvideSupport(v4, (int)&v8);
}


void __fastcall ButtonBlock::~ButtonBlock(ButtonBlock *this)
{
  ButtonBlock::~ButtonBlock(this);
}


signed int __fastcall ButtonBlock::getResourceCount(ButtonBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


void __fastcall ButtonBlock::tick(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  ButtonBlock *v5; // r5@1
  const BlockPos *v6; // r6@1
  Level *v7; // r0@1
  unsigned __int8 v8; // r7@2
  BlockState *v9; // r0@2
  int v10; // [sp+0h] [bp-28h]@5
  char v11; // [sp+Ch] [bp-1Ch]@5
  unsigned __int8 v12; // [sp+Dh] [bp-1Bh]@5
  char v13; // [sp+10h] [bp-18h]@2
  unsigned __int8 v14; // [sp+11h] [bp-17h]@2
  unsigned __int8 v15; // [sp+13h] [bp-15h]@2

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)j_BlockSource::getLevel(a2);
  if ( !j_Level::isClientSide(v7) )
  {
    j_BlockSource::getBlockAndData((BlockSource *)&v13, v4, (int)v6);
    v8 = v14;
    v9 = (BlockState *)j_Block::getBlockState((int)v5, 5);
    v15 = v8;
    if ( j_BlockState::getBool(v9, &v15) == 1 )
    {
      if ( *((_BYTE *)v5 + 641) )
      {
        j_ButtonBlock::_checkPressed(v5, v4, v6);
      }
      else
        v11 = v13;
        v12 = v14;
        j_Vec3::Vec3((int)&v10, (int)v6);
        j_ButtonBlock::_buttonUnpressed((int)v5, v4, (int)&v11, (int)&v10);
    }
  }
}


void __fastcall ButtonBlock::~ButtonBlock(ButtonBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall ButtonBlock::shouldConnectToRedstone(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


signed int __fastcall ButtonBlock::getTickDelay(ButtonBlock *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 641);
  result = 20;
  if ( v1 )
    result = 30;
  return result;
}


int __fastcall ButtonBlock::_getShape(ButtonBlock *this, AABB *a2, int a3, int a4)
{
  AABB *v4; // r8@1
  int v5; // r6@1
  unsigned int v6; // r5@1
  ButtonBlock *v7; // r7@1
  unsigned __int64 *v8; // r0@1
  int v13; // r4@1
  int v14; // r10@1
  BlockState *v15; // r0@3
  int result; // r0@5
  signed int v19; // [sp+0h] [bp-40h]@0
  signed int v20; // [sp+4h] [bp-3Ch]@0
  float v21; // [sp+8h] [bp-38h]@0
  signed int v22; // [sp+8h] [bp-38h]@6
  unsigned __int8 v23; // [sp+Fh] [bp-31h]@3

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)j_Block::getBlockState((int)this, 15);
  __asm { VMOV.F32        S16, #0.125 }
  v13 = *v8 >> 32;
  v14 = *v8;
  __asm { VLDR            S18, =0.0625 }
  if ( v5 )
    __asm { VMOVNE.F32      S18, S16 }
  v15 = (BlockState *)j_Block::getBlockState((int)v7, 5);
  v23 = v6;
  if ( j_BlockState::getBool(v15, &v23) )
    __asm { VMOVNE.F32      S16, S18 }
  result = (v6 >> (1 - v13 + v14)) & (0xFu >> (4 - v13));
  switch ( result )
  {
    case 0:
      __asm { VMOV.F32        S0, #1.0; jumptable 01AAFC32 case 0 }
      v19 = 1060110336;
      v20 = 1065353216;
      v22 = 1059061760;
      _R0 = __PAIR__(1050673152, (unsigned int)v4);
      __asm
      {
        VSUB.F32        S0, S0, S16
        VMOV            R2, S0
      }
      goto LABEL_8;
    case 1:
      __asm { VSTR            S16, [SP,#0x40+var_3C] }
      LODWORD(_R2) = 0;
LABEL_8:
      HIDWORD(_R2) = 1052770304;
      goto LABEL_14;
    case 2:
      __asm { VMOV.F32        S0, #1.0; jumptable 01AAFC32 case 2 }
      v20 = 1059061760;
      HIDWORD(_R0) = 1050673152;
      v22 = 1065353216;
        VMOV            R3, S0
      goto LABEL_12;
    case 3:
      __asm { VSTR            S16, [SP,#0x40+var_38] }
      return j_AABB::set(__PAIR__(1050673152, (unsigned int)v4), 1052770304LL, 0.6875, 0.625, v21);
    case 4:
      __asm { VMOV.F32        S0, #1.0; jumptable 01AAFC32 case 4 }
      HIDWORD(_R2) = 1050673152;
      v19 = 1065353216;
      v22 = 1060110336;
        VMOV            R1, S0
LABEL_12:
      LODWORD(_R0) = v4;
      LODWORD(_R2) = 1052770304;
    case 5:
      _R0 = (unsigned int)v4;
      __asm { VSTR            S16, [SP,#0x40+var_40] }
      _R2 = 4512606827678007296LL;
LABEL_14:
      result = j_AABB::set(_R0, _R2, *(float *)&v19, *(float *)&v20, *(float *)&v22);
      break;
    default:
      return result;
  }
  return result;
}


_BOOL4 __fastcall ButtonBlock::isButtonPressed(ButtonBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = a2;
  v3 = (BlockState *)j_Block::getBlockState((int)this, 5);
  v5 = v2;
  return j_BlockState::getBool(v3, &v5);
}


void __fastcall ButtonBlock::_checkPressed(ButtonBlock *this, BlockSource *a2, const BlockPos *a3)
{
  ButtonBlock *v3; // r11@1
  const BlockPos *v4; // r10@1
  BlockSource *v5; // r9@1
  unsigned __int8 v6; // r4@1
  BlockState *v7; // r0@1
  _BOOL4 v8; // r8@1
  int v9; // r0@1
  void *v10; // r7@1
  unsigned __int64 *v11; // r0@1
  unsigned __int64 *v12; // r5@1
  int v13; // r4@1
  int v14; // r6@1
  signed int v15; // r0@1
  void *v16; // r0@3
  signed int v17; // r0@5
  signed int v18; // r0@9
  LevelChunk **v19; // r0@13
  unsigned int v20; // r3@13
  char v21; // [sp+Ch] [bp-74h]@13
  char v22; // [sp+10h] [bp-70h]@8
  char v23; // [sp+1Ch] [bp-64h]@8
  unsigned __int8 v24; // [sp+1Dh] [bp-63h]@8
  char v25; // [sp+20h] [bp-60h]@12
  char v26; // [sp+2Ch] [bp-54h]@12
  unsigned __int8 v27; // [sp+2Dh] [bp-53h]@12
  char v28; // [sp+30h] [bp-50h]@1
  unsigned __int8 v29; // [sp+3Ch] [bp-44h]@1
  char v30; // [sp+58h] [bp-28h]@1
  unsigned __int8 v31; // [sp+59h] [bp-27h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  j_BlockSource::getBlockAndData((BlockSource *)&v30, a2, (int)a3);
  v6 = v31;
  v7 = (BlockState *)j_Block::getBlockState((int)v3, 5);
  v29 = v6;
  v8 = j_BlockState::getBool(v7, &v29);
  j_AABB::AABB((AABB *)&v29);
  j_ButtonBlock::_getShape(v3, (AABB *)&v29, v31, 1);
  j_Vec3::Vec3((int)&v28, (int)v4);
  v9 = j_AABB::move((AABB *)&v29, (const Vec3 *)&v28);
  v10 = 0;
  v11 = (unsigned __int64 *)j_BlockSource::fetchEntities((int)v5, 4194384, v9, 0);
  v12 = v11;
  v14 = *v11 >> 32;
  v13 = *v11;
  v15 = v14 - v13;
  if ( 0 != (v14 - v13) >> 2 )
  {
    if ( (unsigned int)(v15 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v16 = j_operator new(v15);
    v14 = *v12 >> 32;
    v13 = *v12;
    v10 = v16;
  }
  if ( v14 == v13 )
    v17 = 0;
    if ( v14 == v13 )
      v17 = 1;
    if ( (v17 & v8) == 1 )
    {
      v23 = v30;
      v24 = v31;
      j_Vec3::Vec3((int)&v22, (int)v4);
      j_ButtonBlock::_buttonUnpressed((int)v3, v5, (int)&v23, (int)&v22);
    }
  else
    j___aeabi_memmove4_0((int)v10, v13);
    v18 = 0;
      v18 = 1;
    if ( !(v18 | v8) )
      v26 = v30;
      v27 = v31;
      j_Vec3::Vec3((int)&v25, (int)v4);
      j_ButtonBlock::_buttonPressed((int)v3, v5, (int)&v26, (int)&v25, 0);
    v19 = (LevelChunk **)j_BlockSource::getTickQueue(v5, v4);
    v21 = *((_BYTE *)v3 + 4);
    v20 = 20;
    if ( *((_BYTE *)v3 + 641) )
      v20 = 30;
    j_BlockTickingQueue::add(v19, v5, (int)v4, &v21, v20, 0);
  if ( v10 )
    j_operator delete(v10);
}


int __fastcall ButtonBlock::neighborChanged(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r8@1
  const BlockPos *v5; // r7@1
  const BlockPos *v6; // r4@1
  ButtonBlock *v7; // r9@1
  unsigned __int64 *v8; // r5@1
  int result; // r0@1
  unsigned int v10; // r7@4
  unsigned __int64 *v11; // r0@4

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)j_Block::getBlockState((int)this, 15);
  result = 3 * (char)((j_BlockSource::getData(v4, v6) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32))));
  if ( *(_DWORD *)v6 - Facing::DIRECTION[result] == *(_DWORD *)v5
    && *((_DWORD *)v6 + 1) - Facing::DIRECTION[result + 1] == *((_DWORD *)v5 + 1) )
  {
    result = *((_DWORD *)v6 + 2) - Facing::DIRECTION[result + 2];
    if ( result == *((_DWORD *)v5 + 2) )
    {
      v10 = j_BlockSource::getData(v4, v6);
      v11 = (unsigned __int64 *)j_Block::getBlockState((int)v7, 15);
      result = (*(int (__fastcall **)(ButtonBlock *, BlockSource *, const BlockPos *, _DWORD))(*(_DWORD *)v7 + 220))(
                 v7,
                 v4,
                 v6,
                 (char)((0xFu >> (4 - (*v11 >> 32))) & (v10 >> (*v11 + 1 - (*v11 >> 32)))));
      if ( !result )
      {
        (*(void (__fastcall **)(ButtonBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v7 + 276))(
          v7,
          v4,
          v6,
          v10);
        result = j_j_j__ZN11BlockSource11removeBlockERK8BlockPos_1(v4, v6);
      }
    }
  }
  return result;
}


signed int __fastcall ButtonBlock::isInteractiveBlock(ButtonBlock *this)
{
  return 1;
}


signed int __fastcall ButtonBlock::isAttachedTo(ButtonBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  BlockSource *v4; // r6@1
  BlockPos *v5; // r4@1
  const BlockPos *v6; // r5@1
  unsigned __int64 *v7; // r7@1
  unsigned int v8; // r0@1
  int v9; // r12@1
  int v10; // r0@1
  __int64 v11; // kr00_8@1
  int v12; // r1@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)j_Block::getBlockState((int)this, 15);
  v8 = j_BlockSource::getData(v4, v6);
  v9 = *((_DWORD *)v6 + 2);
  v10 = 3 * (char)((v8 >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32))));
  v11 = *(_QWORD *)&Facing::DIRECTION[v10 + 1];
  v12 = (*(_QWORD *)v6 >> 32) - v11;
  *(_DWORD *)v5 = *(_QWORD *)v6 - Facing::DIRECTION[v10];
  *((_DWORD *)v5 + 1) = v12;
  *((_DWORD *)v5 + 2) = v9 - HIDWORD(v11);
  return 1;
}
