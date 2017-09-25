

signed int __fastcall OcelotSitOnBlockGoal::isValidTarget(OcelotSitOnBlockGoal *this, BlockSource *a2, const BlockPos *a3)
{
  OcelotSitOnBlockGoal *v3; // r5@1
  const BlockPos *v4; // r4@1
  const BlockPos *v5; // r0@1
  int v6; // r2@1
  int v7; // r3@1
  BlockSource *v8; // r0@2
  Block *v9; // r6@2
  BlockSource *v10; // r0@3
  ChestBlockEntity *v11; // r0@3
  BlockSource *v12; // r0@8
  BedBlock *v13; // r0@8
  int v14; // r1@8
  int v16; // [sp+0h] [bp-20h]@1
  int v17; // [sp+4h] [bp-1Ch]@1
  int v18; // [sp+8h] [bp-18h]@1
  unsigned __int8 v19; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = a3;
  v5 = (const BlockPos *)j_Entity::getRegion(*((Entity **)this + 13));
  v6 = *((_DWORD *)v4 + 1);
  v7 = *((_DWORD *)v4 + 2);
  v16 = *(_DWORD *)v4;
  v17 = v6 + 1;
  v18 = v7;
  j_BlockSource::getBlockID((BlockSource *)&v19, v5, (int)&v16);
  if ( v19 != BlockID::AIR )
    return 0;
  v8 = (BlockSource *)j_Entity::getRegion(*((Entity **)v3 + 13));
  v9 = (Block *)j_BlockSource::getBlock(v8, v4);
  if ( j_Block::isType(v9, (const Block *)Block::mChest) != 1 )
  {
    if ( j_Block::isType(v9, (const Block *)Block::mLitFurnace) )
      return 1;
    if ( j_Block::isType(v9, (const Block *)Block::mBed) == 1 )
    {
      v12 = (BlockSource *)j_Entity::getRegion(*((Entity **)v3 + 13));
      v13 = (BedBlock *)j_BlockSource::getData(v12, v4);
      if ( j_BedBlock::isHeadPiece(v13, v14) != 1 )
        return 1;
    }
  }
  v10 = (BlockSource *)j_Entity::getRegion(*((Entity **)v3 + 13));
  v11 = (ChestBlockEntity *)j_BlockSource::getBlockEntity(v10, v4);
  if ( !v11 || j_ChestBlockEntity::getOpenCount(v11) >= 1 )
  return 1;
}


int __fastcall OcelotSitOnBlockGoal::tick(OcelotSitOnBlockGoal *this)
{
  int result; // r0@1

  _R4 = this;
  j_MoveToBlockGoal::tick(this);
  result = (*(int (__fastcall **)(OcelotSitOnBlockGoal *))(*(_DWORD *)_R4 + 44))(_R4);
  if ( result == 1 )
  {
    (*(void (**)(void))(**((_DWORD **)_R4 + 13) + 352))();
    __asm
    {
      VLDR            S0, [R4,#0x24]
      VMOV.F32        S4, #0.5
      VLDR            S2, [R4,#0x2C]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    }
    _R1 = *((_DWORD *)_R4 + 10) + 1;
      VMOV            S6, R1
      VCVT.F32.S32    S6, S6
      VADD.F32        S0, S0, S4
      VADD.F32        S2, S2, S4
      VSTR            S0, [SP,#0x18+var_14]
      VSTR            S6, [SP,#0x18+var_10]
      VSTR            S2, [SP,#0x18+var_C]
    result = (*(int (**)(void))(**((_DWORD **)_R4 + 13) + 48))();
  }
  return result;
}


void __fastcall OcelotSitOnBlockGoal::~OcelotSitOnBlockGoal(OcelotSitOnBlockGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall OcelotSitOnBlockGoal::~OcelotSitOnBlockGoal(OcelotSitOnBlockGoal *this)
{
  OcelotSitOnBlockGoal::~OcelotSitOnBlockGoal(this);
}


int __fastcall OcelotSitOnBlockGoal::canUse(OcelotSitOnBlockGoal *this)
{
  OcelotSitOnBlockGoal *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( j_Entity::isTame(*((Entity **)this + 13)) != 1 || j_Entity::isSitting(*((Entity **)v1 + 13)) )
    result = 0;
  else
    result = j_MoveToBlockGoal::canUse(v1);
  return result;
}


int __fastcall OcelotSitOnBlockGoal::OcelotSitOnBlockGoal(MoveToBlockGoal *a1, Mob *a2, float a3)
{
  Mob *v3; // r4@1
  int result; // r0@1

  v3 = a2;
  result = j_MoveToBlockGoal::MoveToBlockGoal(a1, a2, a3, 8, 0.75);
  *(_DWORD *)result = &off_271A918;
  *(_DWORD *)(result + 52) = v3;
  return result;
}
