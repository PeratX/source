

signed int __fastcall EnchantingTableBlock::use(EnchantingTableBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r4@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@2
  BlockSource *v7; // r0@3
  int v8; // r0@3
  BlockEntity *v9; // r5@3
  void (__fastcall *v10)(Entity *, char *); // r6@5
  char *v11; // r0@5

  v4 = a2;
  v5 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) == 1 )
  {
    v6 = (Level *)Entity::getLevel(v4);
    if ( !Level::isClientSide(v6) )
    {
      v7 = (BlockSource *)Entity::getRegion(v4);
      v8 = BlockSource::getBlockEntity(v7, v5);
      v9 = (BlockEntity *)v8;
      if ( v8 )
      {
        if ( BlockEntity::isType(v8, 9) == 1 )
        {
          v10 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v4 + 1296);
          v11 = BlockEntity::getPosition(v9);
          v10(v4, v11);
        }
      }
    }
  }
  return 1;
}


signed int __fastcall EnchantingTableBlock::isInteractiveBlock(EnchantingTableBlock *this)
{
  return 1;
}


int __fastcall EnchantingTableBlock::EnchantingTableBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void (__fastcall *v7)(int, char *); // r2@1
  char v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+4h] [bp-1Ch]@1
  signed int v11; // [sp+8h] [bp-18h]@1
  signed int v12; // [sp+Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2708324;
  v10 = 1065353216;
  v11 = 1061158912;
  v12 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v10);
  v7 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v3 + 456);
  v9 = Brightness::MAX;
  v7(v3, &v9);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 460))(v3);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 468))(v3);
  *(_DWORD *)(v3 + 24) = 0x1000000;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 9;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  Block::setIsInteraction((Block *)v3, 1);
  return v3;
}


void __fastcall EnchantingTableBlock::~EnchantingTableBlock(EnchantingTableBlock *this)
{
  EnchantingTableBlock::~EnchantingTableBlock(this);
}


int __fastcall EnchantingTableBlock::canBeSilkTouched(EnchantingTableBlock *this)
{
  return 0;
}


void __fastcall EnchantingTableBlock::~EnchantingTableBlock(EnchantingTableBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall EnchantingTableBlock::checkIsPathable(EnchantingTableBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


signed int __fastcall EnchantingTableBlock::isCraftingBlock(EnchantingTableBlock *this)
{
  return 1;
}


void __fastcall EnchantingTableBlock::animateTick(EnchantingTableBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r7@1
  int v11; // r11@1
  void *v13; // r8@1 OVERLAPPED
  float v17; // [sp+10h] [bp-98h]@4
  char v20; // [sp+28h] [bp-80h]@1
  void *v21; // [sp+34h] [bp-74h]@1
  void *v22; // [sp+38h] [bp-70h]@1
  float v23; // [sp+40h] [bp-68h]@1
  float v26; // [sp+4Ch] [bp-5Ch]@4

  v4 = a4;
  v5 = a3;
  v6 = a2;
  Block::animateTick(this, a2, a3, a4);
  Vec3::Vec3((int)&v23, (int)v5);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S4, [SP,#0xA8+var_68]
    VMOV.F32        S2, #2.0
    VLDR            S6, [SP,#0xA8+var_64]
    VLDR            S8, [SP,#0xA8+var_60]
    VADD.F32        S4, S4, S0
    VADD.F32        S2, S6, S2
    VADD.F32        S0, S8, S0
    VSTR            S4, [SP,#0xA8+var_5C]
    VSTR            S2, [SP,#0xA8+var_58]
    VSTR            S0, [SP,#0xA8+var_54]
  }
  v11 = BlockSource::getLevel(v6);
  Vec3::Vec3((int)&v20, (int)v5);
  EnchantUtils::getBookCasePositions((EnchantUtils *)&v21, v6, (const Vec3 *)&v20);
  *(_QWORD *)&_R7 = *(_QWORD *)&v21;
  if ( v21 != v22 )
    __asm
    {
      VMOV.F32        S18, #-0.5
      VLDR            D8, =2.32830644e-10
      VMOV.F32        S20, #-2.0
    }
    do
      if ( Random::_genRandInt32(v4) & 3 )
      {
        _R0 = Random::_genRandInt32(v4);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D11, S0
        }
          VCVT.F64.U32    D12, S0
        _R6 = Random::_genRandInt32(v4);
        Vec3::Vec3((int)&v17, (int)v5);
          VMOV            S4, R6
          VMUL.F64        D0, D11, D8
          VCVT.F64.U32    D2, S4
          VMUL.F64        D2, D2, D8
          VMUL.F64        D1, D12, D8
          VCVT.F32.F64    S0, D0
          VCVT.F32.F64    S2, D1
          VCVT.F32.F64    S4, D2
          VADD.F32        S0, S0, S18
          VLDR            S6, [R7]
          VADD.F32        S2, S2, S20
          VLDR            S8, [R7,#4]
          VADD.F32        S4, S4, S18
          VLDR            S10, [R7,#8]
          VADD.F32        S0, S0, S6
          VLDR            S6, [SP,#0xA8+var_98]
          VADD.F32        S2, S2, S8
          VLDR            S8, [SP,#0xA8+var_94]
          VADD.F32        S4, S4, S10
          VLDR            S10, [SP,#0xA8+var_90]
          VSUB.F32        S0, S0, S6
          VSUB.F32        S2, S2, S8
          VSUB.F32        S4, S4, S10
          VSTR            S0, [SP,#0xA8+var_8C]
          VSTR            S2, [SP,#0xA8+var_88]
          VSTR            S4, [SP,#0xA8+var_84]
        Level::addParticle(v11, 34, (int)&v26);
      }
      _R7 = (char *)_R7 + 12;
    while ( v13 != _R7 );
    _R7 = v21;
  if ( _R7 )
    operator delete(_R7);
}


void __fastcall EnchantingTableBlock::animateTick(EnchantingTableBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  EnchantingTableBlock::animateTick(this, a2, a3, a4);
}
