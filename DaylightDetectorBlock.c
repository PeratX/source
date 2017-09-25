

int __fastcall DaylightDetectorBlock::onRemove(DaylightDetectorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  CircuitSystem *v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = (CircuitSystem *)Dimension::getCircuitSystem(v7);
    result = j_j_j__ZN13CircuitSystem16removeComponentsERK8BlockPos(v8, v4);
  }
  return result;
}


int __fastcall DaylightDetectorBlock::updateShape(DaylightDetectorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  int (__cdecl *v3)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@1
  int v5; // [sp+0h] [bp-20h]@1
  signed int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1
  int v8; // [sp+10h] [bp-10h]@1
  int v9; // [sp+14h] [bp-Ch]@1

  v3 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 452);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v6 = 1065353216;
  return v3(this, &v7, &v5, v3, 1065353216, 1052770304);
}


void __fastcall DaylightDetectorBlock::~DaylightDetectorBlock(DaylightDetectorBlock *this)
{
  DaylightDetectorBlock::~DaylightDetectorBlock(this);
}


signed int __fastcall DaylightDetectorBlock::checkIsPathable(DaylightDetectorBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


int __fastcall DaylightDetectorBlock::onLoaded(DaylightDetectorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  DaylightDetectorBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  int result; // r0@1
  Dimension *v8; // r0@2
  int v9; // r0@2
  int v10; // r7@2
  unsigned __int64 *v11; // r6@3
  unsigned int v12; // r0@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    v8 = (Dimension *)BlockSource::getDimension(v3);
    v9 = Dimension::getCircuitSystem(v8);
    result = CircuitSystem::create<ProducerComponent>(v9, v5, (int)v3, 1);
    v10 = result;
    if ( result )
    {
      v11 = (unsigned __int64 *)Block::getBlockState((int)v4, 33);
      v12 = BlockSource::getData(v3, v5);
      result = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v10 + 16))(
                 v10,
                 (0xFu >> (4 - (*v11 >> 32))) & (v12 >> (*v11 + 1 - (*v11 >> 32))));
      *(_BYTE *)(v10 + 41) = 1;
    }
  }
  return result;
}


int __fastcall DaylightDetectorBlock::updateSignalStrength(DaylightDetectorBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r6@1
  DaylightDetectorBlock *v4; // r11@1
  const BlockPos *v5; // r8@1
  int v6; // r0@1
  Dimension *v7; // r10@1
  int v8; // r1@1
  int result; // r0@1
  int v10; // r4@2
  int v11; // r7@2
  int v21; // r9@5
  int v24; // r4@5
  BlockState *v26; // r0@9
  char v27; // r1@9 OVERLAPPED
  char v28; // r2@9 OVERLAPPED
  char v29; // r5@9
  int v30; // r7@11
  char v31; // r0@11
  Level *v32; // r0@11
  CircuitSystem *v33; // r0@12
  char v34; // [sp+4h] [bp-34h]@11
  char v35; // [sp+5h] [bp-33h]@11
  char v36; // [sp+8h] [bp-30h]@5
  char v37; // [sp+9h] [bp-2Fh]@9
  Dimension v38; // [sp+Ch] [bp-2Ch]@2
  unsigned __int8 v39; // [sp+10h] [bp-28h]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BlockSource::getDimension(a2);
  v7 = (Dimension *)v6;
  v8 = *(_BYTE *)(v6 + 108);
  result = (unsigned __int8)Brightness::MIN;
  if ( v8 != (unsigned __int8)Brightness::MIN )
  {
    BlockSource::getBrightnessPair((BlockSource *)&v39, v3, v5);
    v10 = v39;
    Dimension::getSkyDarken(&v38, (int)v7);
    v11 = (unsigned __int8)v38;
    _R0 = Dimension::getSunAngle(v7, 1.0);
    __asm { VMOV            S0, R0 }
    _R7 = v10 - v11;
    _R1 = &mce::Math::PI;
    __asm
    {
      VLDR            S2, [R1]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S2, =-0.2
        VMUL.F32        S2, S0, S2
      }
    else
        VADD.F32        S2, S2, S2
        VLDR            S4, =0.2
        VSUB.F32        S2, S2, S0
        VMUL.F32        S2, S2, S4
      VADD.F32        S0, S0, S2
      VMOV            R0, S0
    _R4 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
    v21 = *((_BYTE *)v4 + 641);
    BlockSource::getBlockAndData((BlockSource *)&v36, v3, (int)v5);
      VMOV            S0, R7
      VMOV            S2, R4
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S2, S0
    _R0 = roundf(_R0);
    v24 = 0;
      VCVTR.S32.F32   S0, S0
    if ( _R0 > 0 )
      v24 = _R0;
    if ( _R0 > 15 )
      v24 = 15;
    v26 = (BlockState *)Block::getBlockState((int)v4, 33);
    *(_QWORD *)&v27 = *(_QWORD *)v26;
    v29 = v37;
    if ( v21 )
      v24 = 15 - v24;
    v30 = v24 << (v27 + 1 - v28);
    v31 = BlockState::getMask(v26);
    v37 = v29 & ~v31 | v30;
    v34 = v36;
    v35 = v29 & ~v31 | v30;
    BlockSource::setBlockAndData((int)v3, v5, (int)&v34, 3, 0);
    v32 = (Level *)BlockSource::getLevel(v3);
    result = Level::isClientSide(v32);
    if ( !result )
      v33 = (CircuitSystem *)Dimension::getCircuitSystem(v7);
      result = CircuitSystem::setStrength(v33, v5, v24);
  }
  return result;
}


signed int __fastcall DaylightDetectorBlock::shouldConnectToRedstone(DaylightDetectorBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


int __fastcall DaylightDetectorBlock::DaylightDetectorBlock(int a1, const void **a2, char a3, char a4)
{
  int v4; // r4@1
  char v5; // r5@1
  char v6; // r6@1
  const void **v7; // r7@1
  int v8; // r0@1
  int result; // r0@1
  int v10; // [sp+4h] [bp-2Ch]@1
  signed int v11; // [sp+8h] [bp-28h]@1
  signed int v12; // [sp+Ch] [bp-24h]@1
  int v13; // [sp+10h] [bp-20h]@1
  int v14; // [sp+14h] [bp-1Ch]@1
  int v15; // [sp+18h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(2);
  EntityBlock::EntityBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &loc_27070EC;
  *(_BYTE *)(v4 + 641) = v5;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v10 = 1065353216;
  v11 = 1052770304;
  v12 = 1065353216;
  Block::setVisualShape((Block *)v4, (const Vec3 *)&v13, (const Vec3 *)&v10);
  Block::setSolid((Block *)v4, 0);
  Block::setPushesOutItems((Block *)v4, 1);
  Block::setIsInteraction((Block *)v4, 1);
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  result = v4;
  *(_DWORD *)(v4 + 32) = 10;
  return result;
}


signed int __fastcall DaylightDetectorBlock::use(DaylightDetectorBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r5@1
  DaylightDetectorBlock *v5; // r7@1
  const BlockPos *v6; // r9@1
  BlockSource *v7; // r0@1
  BlockSource *v8; // r6@1
  Level *v9; // r0@1
  Dimension *v10; // r0@2
  _BYTE *v11; // r0@2
  _BYTE *v12; // r8@2
  unsigned __int64 *v13; // r4@2
  unsigned int v14; // r0@2
  int v15; // r6@2
  unsigned int v16; // r4@2
  int v17; // r0@2
  _DWORD *v18; // r6@3
  int v19; // r4@5
  void (__fastcall *v20)(int, int, const BlockPos *); // r6@5
  int v21; // r0@5
  char v23; // [sp+4h] [bp-24h]@4
  char v24; // [sp+5h] [bp-23h]@4
  char v25; // [sp+8h] [bp-20h]@3
  char v26; // [sp+9h] [bp-1Fh]@3

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (BlockSource *)Entity::getRegion(a2);
  v8 = v7;
  v9 = (Level *)BlockSource::getLevel(v7);
  if ( !Level::isClientSide(v9) )
  {
    v10 = (Dimension *)BlockSource::getDimension(v8);
    v11 = (_BYTE *)Dimension::getCircuitSystem(v10);
    v12 = v11;
    *v11 = 1;
    v13 = (unsigned __int64 *)Block::getBlockState((int)v5, 33);
    v14 = BlockSource::getData(v8, v6);
    v15 = *((_BYTE *)v5 + 641);
    v16 = 15 - ((v14 >> (*v13 + 1 - (*v13 >> 32))) & (0xFu >> (4 - (*v13 >> 32))));
    v17 = Entity::getRegion(v4);
    if ( v15 )
    {
      v18 = &Block::mDaylightDetector;
      v25 = *(_BYTE *)(Block::mDaylightDetector + 4);
      v26 = v16;
      BlockSource::setBlockAndData(v17, v6, (int)&v25, 3, (int)v4);
    }
    else
      v18 = &Block::mDaylightDetectorInverted;
      v23 = *(_BYTE *)(Block::mDaylightDetectorInverted + 4);
      v24 = v16;
      BlockSource::setBlockAndData(v17, v6, (int)&v23, 3, (int)v4);
    v19 = *v18;
    v20 = *(void (__fastcall **)(int, int, const BlockPos *))(*(_DWORD *)*v18 + 508);
    v21 = Entity::getRegion(v4);
    v20(v19, v21, v6);
    *v12 = 0;
  }
  return 1;
}


signed int __fastcall DaylightDetectorBlock::isInteractiveBlock(DaylightDetectorBlock *this)
{
  return 1;
}


void __fastcall DaylightDetectorBlock::~DaylightDetectorBlock(DaylightDetectorBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
