

int __fastcall HarvestFarmBlockGoal::tick(HarvestFarmBlockGoal *this)
{
  int v2; // r0@1
  LookControl *v6; // r4@1
  int v7; // r0@1
  __int64 v8; // r2@1
  int result; // r0@1
  const BlockPos *v10; // r7@2
  Level *v11; // r5@2
  int v12; // r1@2
  int v13; // r2@2
  int v14; // r6@2
  int v15; // r0@2
  int v16; // r1@2
  int v17; // r0@9
  int v18; // r7@9
  int v19; // r5@9
  int v20; // r6@10
  int v21; // r4@11
  int v22; // r0@12
  bool v24; // zf@15
  bool v25; // zf@18
  int v26; // r0@24
  int v27; // r7@24
  int v28; // r0@24
  int v29; // [sp+8h] [bp-A0h]@9
  char v30; // [sp+10h] [bp-98h]@28
  char v31; // [sp+11h] [bp-97h]@28
  char v32; // [sp+14h] [bp-94h]@31
  char v33; // [sp+15h] [bp-93h]@31
  char v34; // [sp+18h] [bp-90h]@30
  char v35; // [sp+19h] [bp-8Fh]@30
  char v36; // [sp+1Ch] [bp-8Ch]@29
  char v37; // [sp+1Dh] [bp-8Bh]@29
  int v38; // [sp+20h] [bp-88h]@24
  int v39; // [sp+28h] [bp-80h]@36
  void *v40; // [sp+44h] [bp-64h]@34
  void *ptr; // [sp+54h] [bp-54h]@32
  unsigned __int8 v42; // [sp+68h] [bp-40h]@2
  unsigned __int8 v43; // [sp+69h] [bp-3Fh]@4
  int v44; // [sp+6Ch] [bp-3Ch]@2
  int v45; // [sp+70h] [bp-38h]@2
  int v46; // [sp+74h] [bp-34h]@2
  float v47; // [sp+78h] [bp-30h]@1

  _R9 = this;
  j_MoveToBlockGoal::tick(this);
  v2 = j_Mob::getLookControl(*((Mob **)_R9 + 12));
  __asm
  {
    VLDR            S0, [R9,#0x24]
    VMOV.F32        S6, #0.5
    VLDR            S2, [R9,#0x28]
    VMOV.F32        S8, #1.0
    VLDR            S4, [R9,#0x2C]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  }
  v6 = (LookControl *)v2;
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S6
    VSTR            S0, [SP,#0xA8+var_30]
    VSTR            S2, [SP,#0xA8+var_2C]
    VSTR            S4, [SP,#0xA8+var_28]
  v7 = (*(int (**)(void))(**((_DWORD **)_R9 + 12) + 940))();
  LODWORD(v8) = 1092616192;
  HIDWORD(v8) = v7;
  j_LookControl::setLookAt(v6, (const Vec3 *)&v47, v8);
  result = (*(int (__fastcall **)(HarvestFarmBlockGoal *))(*(_DWORD *)_R9 + 44))(_R9);
  if ( result == 1 )
    v10 = (const BlockPos *)j_Entity::getRegion(*((Entity **)_R9 + 12));
    v11 = (Level *)j_Entity::getLevel(*((Entity **)_R9 + 12));
    v12 = *((_DWORD *)_R9 + 10);
    v13 = *((_DWORD *)_R9 + 11);
    v44 = *((_DWORD *)_R9 + 9);
    v45 = v12 + 1;
    v46 = v13;
    j_BlockSource::getBlockAndData((BlockSource *)&v42, v10, (int)&v44);
    v14 = v42;
    v15 = j_BlockSource::getBlock(v10, (const BlockPos *)&v44);
    v16 = *((_DWORD *)_R9 + 14);
    if ( !v16 )
    {
      if ( (*(int (**)(void))(*(_DWORD *)v15 + 52))() == 1 && v43 == BushBlock::MAX_GROWTH[0] )
      {
        j_Level::destroyBlock(v11, v10, (const BlockPos *)&v44, 1);
        goto LABEL_38;
      }
      v16 = *((_DWORD *)_R9 + 14);
    }
    if ( v16 == 1 && v14 == BlockID::AIR )
      v29 = (int)v10;
      v17 = j_Entity::getContainerComponent(*((Entity **)_R9 + 12));
      v18 = *(_DWORD *)(v17 + 4);
      v19 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v18 + 44))(*(_DWORD *)(v17 + 4));
      if ( v19 < 1 )
        goto LABEL_22;
      v20 = 0;
      while ( 1 )
        v21 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v18 + 16))(v18, v20);
        if ( !j_ItemInstance::isNull((ItemInstance *)v21) )
        {
          v22 = *(_BYTE *)(v21 + 14);
          _ZF = v22 == 0;
          if ( *(_BYTE *)(v21 + 14) )
          {
            v22 = *(_DWORD *)v21;
            _ZF = *(_DWORD *)v21 == 0;
          }
          if ( !_ZF )
            v24 = v22 == Item::mSeeds_wheat;
            if ( v22 != Item::mSeeds_wheat )
              v24 = v22 == Item::mPotato;
            if ( v24 )
              break;
            v25 = v22 == Item::mCarrot;
            if ( v22 != Item::mCarrot )
              v25 = v22 == Item::mSeeds_beetroot;
            if ( v25 )
        }
        if ( ++v20 >= v19 )
          goto LABEL_22;
      if ( v20 < 0 )
LABEL_22:
        *((_DWORD *)_R9 + 14) = -1;
        result = 0;
LABEL_39:
        *((_DWORD *)_R9 + 3) = result;
        return result;
      v26 = j_Entity::getContainerComponent(*((Entity **)_R9 + 12));
      v27 = *(_DWORD *)(v26 + 4);
      v28 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v27 + 16))(*(_DWORD *)(v26 + 4), v20);
      j_ItemInstance::ItemInstance((ItemInstance *)&v38, v28);
      if ( v38 == Item::mSeeds_wheat )
        v36 = *(_BYTE *)(Block::mWheatCrop + 4);
        v37 = 0;
        j_BlockSource::setBlockAndData(v29, (BlockPos *)&v44, (int)&v36, 3, 0);
      else if ( v38 == Item::mPotato )
        v34 = *(_BYTE *)(Block::mPotatoCrop + 4);
        v35 = 0;
        j_BlockSource::setBlockAndData(v29, (BlockPos *)&v44, (int)&v34, 3, 0);
      else if ( v38 == Item::mCarrot )
        v32 = *(_BYTE *)(Block::mCarrotCrop + 4);
        v33 = 0;
        j_BlockSource::setBlockAndData(v29, (BlockPos *)&v44, (int)&v32, 3, 0);
      else if ( v38 == Item::mSeeds_beetroot )
        v30 = *(_BYTE *)(Block::mBeetrootCrop + 4);
        v31 = 0;
        j_BlockSource::setBlockAndData(v29, (BlockPos *)&v44, (int)&v30, 3, 0);
      j_ItemInstance::remove((ItemInstance *)&v38, 1);
      (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v27 + 32))(v27, v20, &v38);
      if ( ptr )
        j_operator delete(ptr);
      if ( v40 )
        j_operator delete(v40);
      if ( v39 )
        (*(void (**)(void))(*(_DWORD *)v39 + 4))();
LABEL_38:
    *((_DWORD *)_R9 + 14) = -1;
    result = 10;
    goto LABEL_39;
  return result;
}


signed int __fastcall HarvestFarmBlockGoal::findInventorySlotForFarmSeeds(HarvestFarmBlockGoal *this)
{
  int v1; // r0@1
  int v2; // r5@1
  int v3; // r6@1
  signed int v4; // r4@2
  int v5; // r7@3
  int v6; // r0@4
  bool v7; // zf@4
  bool v8; // zf@7
  bool v9; // zf@10

  v1 = j_Entity::getContainerComponent(*((Entity **)this + 12));
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 44))(*(_DWORD *)(v1 + 4));
  if ( v3 < 1 )
  {
LABEL_14:
    v4 = -1;
  }
  else
    v4 = 0;
    while ( 1 )
    {
      v5 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v2 + 16))(v2, v4);
      if ( !j_ItemInstance::isNull((ItemInstance *)v5) )
      {
        v6 = *(_BYTE *)(v5 + 14);
        v7 = v6 == 0;
        if ( *(_BYTE *)(v5 + 14) )
        {
          v6 = *(_DWORD *)v5;
          v7 = *(_DWORD *)v5 == 0;
        }
        if ( !v7 )
          v8 = v6 == Item::mSeeds_wheat;
          if ( v6 != Item::mSeeds_wheat )
            v8 = v6 == Item::mPotato;
          if ( v8 )
            break;
          v9 = v6 == Item::mCarrot;
          if ( v6 != Item::mCarrot )
            v9 = v6 == Item::mSeeds_beetroot;
          if ( v9 )
      }
      if ( ++v4 >= v3 )
        goto LABEL_14;
    }
  return v4;
}


void __fastcall HarvestFarmBlockGoal::~HarvestFarmBlockGoal(HarvestFarmBlockGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall HarvestFarmBlockGoal::isValidTarget(HarvestFarmBlockGoal *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r4@1
  HarvestFarmBlockGoal *v5; // r5@1
  Block *v6; // r0@1
  int v7; // r1@2
  int v8; // r2@2
  Block *v9; // r6@2
  unsigned int v10; // r0@2
  unsigned int v11; // r0@4
  unsigned __int8 v13; // [sp+0h] [bp-20h]@9
  int v14; // [sp+4h] [bp-1Ch]@2
  int v15; // [sp+8h] [bp-18h]@2
  int v16; // [sp+Ch] [bp-14h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Block *)j_BlockSource::getBlock(a2, a3);
  if ( j_Block::isType(v6, (const Block *)Block::mFarmland) == 1 )
  {
    v7 = *((_DWORD *)v3 + 1);
    v8 = *((_DWORD *)v3 + 2);
    v14 = *(_DWORD *)v3;
    v15 = v7 + 1;
    v16 = v8;
    v9 = (Block *)j_BlockSource::getBlock(v4, (const BlockPos *)&v14);
    v10 = *((_WORD *)v5 + 26);
    if ( (_BYTE)v10 )
    {
      if ( j_Block::isType(v9, (const Block *)Block::mAir) )
        return 1;
      v11 = *((_BYTE *)v5 + 53);
    }
    else
      v11 = v10 >> 8;
    if ( v11 )
      if ( (*(int (__fastcall **)(Block *))(*(_DWORD *)v9 + 52))(v9) == 1
        && (*((_DWORD *)v5 + 14) == 0 || *((_DWORD *)v5 + 14) >= 0xFFFFFFFF) )
      {
        j_BlockSource::getBlockAndData((BlockSource *)&v13, v4, (int)&v14);
        if ( *(&v13 + 1) == BushBlock::MAX_GROWTH[0] )
          return 1;
      }
  }
  return 0;
}


int __fastcall HarvestFarmBlockGoal::HarvestFarmBlockGoal(MoveToBlockGoal *a1, Mob *a2, float a3)
{
  int result; // r0@1

  result = j_MoveToBlockGoal::MoveToBlockGoal(a1, a2, a3, 16, 1.5);
  *(_DWORD *)result = &off_271A604;
  *(_BYTE *)(result + 52) = 0;
  *(_BYTE *)(result + 53) = 0;
  *(_DWORD *)(result + 56) = 0;
  return result;
}


void __fastcall HarvestFarmBlockGoal::~HarvestFarmBlockGoal(HarvestFarmBlockGoal *this)
{
  HarvestFarmBlockGoal::~HarvestFarmBlockGoal(this);
}


void __fastcall HarvestFarmBlockGoal::appendDebugInfo(int a1, const void **a2)
{
  HarvestFarmBlockGoal::appendDebugInfo(a1, a2);
}


signed int __fastcall HarvestFarmBlockGoal::canUse(HarvestFarmBlockGoal *this)
{
  HarvestFarmBlockGoal *v1; // r4@1
  signed int v2; // r0@3
  Level *v3; // r0@5
  unsigned __int64 *v4; // r0@5
  unsigned int v5; // r5@6
  int v6; // r0@6
  int v7; // r6@6
  int v8; // r8@6
  int v9; // r7@8
  int v10; // r0@9
  bool v11; // zf@9
  bool v12; // zf@12
  bool v13; // zf@15
  BlockSource *v14; // r5@21
  int v15; // r1@21
  int v16; // r2@21
  Block *v17; // r6@21
  unsigned int v18; // r0@21
  signed int result; // r0@23
  unsigned int v20; // r0@24
  char v21; // [sp+4h] [bp-34h]@29
  unsigned __int8 v22; // [sp+5h] [bp-33h]@29
  int v23; // [sp+8h] [bp-30h]@21
  int v24; // [sp+Ch] [bp-2Ch]@21
  int v25; // [sp+10h] [bp-28h]@21

  v1 = this;
  if ( !j_Entity::getContainerComponent(*((Entity **)this + 12)) || !j_Mob::getNavigation(*((Mob **)v1 + 12)) )
    return 0;
  v2 = *((_DWORD *)v1 + 3);
  if ( v2 >= 1 )
  {
    *((_DWORD *)v1 + 3) = v2 - 1;
  }
  *((_DWORD *)v1 + 3) = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 12) + 552)) % 0x64;
  v3 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 12));
  v4 = (unsigned __int64 *)j_Level::getGameRules(v3);
  if ( j_GameRules::getBool(v4, (int **)&GameRules::MOB_GRIEFING) != 1 )
  v5 = -1;
  *((_DWORD *)v1 + 14) = -1;
  v6 = j_Entity::getContainerComponent(*((Entity **)v1 + 12));
  v7 = *(_DWORD *)(v6 + 4);
  v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 44))(*(_DWORD *)(v6 + 4));
  if ( v8 >= 1 )
    v5 = 0;
    while ( 1 )
    {
      v9 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v7 + 16))(v7, v5);
      if ( !j_ItemInstance::isNull((ItemInstance *)v9) )
      {
        v10 = *(_BYTE *)(v9 + 14);
        v11 = v10 == 0;
        if ( *(_BYTE *)(v9 + 14) )
        {
          v10 = *(_DWORD *)v9;
          v11 = *(_DWORD *)v9 == 0;
        }
        if ( !v11 )
          v12 = v10 == Item::mSeeds_wheat;
          if ( v10 != Item::mSeeds_wheat )
            v12 = v10 == Item::mPotato;
          if ( v12 )
            break;
          v13 = v10 == Item::mCarrot;
          if ( v10 != Item::mCarrot )
            v13 = v10 == Item::mSeeds_beetroot;
          if ( v13 )
      }
      if ( (signed int)++v5 >= v8 )
        v5 = -1;
        break;
    }
  *((_BYTE *)v1 + 52) = (v5 >> 31) ^ 1;
  *((_BYTE *)v1 + 53) = j_Entity::wantsMoreFood(*((Entity **)v1 + 12));
  if ( j_MoveToBlockGoal::findNearestBlock(v1) != 1 )
  v14 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 12));
  v15 = *((_DWORD *)v1 + 10);
  v16 = *((_DWORD *)v1 + 11);
  v23 = *((_DWORD *)v1 + 9);
  v24 = v15 + 1;
  v25 = v16;
  v17 = (Block *)j_BlockSource::getBlock(v14, (const BlockPos *)&v23);
  v18 = *((_WORD *)v1 + 26);
  if ( (_BYTE)v18 )
    if ( j_Block::isType(v17, (const Block *)Block::mAir) )
      result = 1;
      *((_DWORD *)v1 + 14) = 1;
      return result;
    v20 = *((_BYTE *)v1 + 53);
  else
    v20 = v18 >> 8;
  if ( !v20
    || (*(int (__fastcall **)(Block *))(*(_DWORD *)v17 + 52))(v17) != 1
    || *((_DWORD *)v1 + 14) != 0 && *((_DWORD *)v1 + 14) < 0xFFFFFFFF )
  j_BlockSource::getBlockAndData((BlockSource *)&v21, v14, (int)&v23);
  result = 0;
  if ( v22 == BushBlock::MAX_GROWTH[0] )
    *((_DWORD *)v1 + 14) = 0;
    result = 1;
  return result;
}


void __fastcall HarvestFarmBlockGoal::appendDebugInfo(int a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  char *v5; // r1@4
  const void **v6; // r0@5
  unsigned int v7; // r2@5
  char v8; // [sp+4h] [bp-1Ch]@9

  v2 = a2;
  v3 = a1;
  sub_21E7408(a2, "HarvestFarmBlock", 0x10u);
  v4 = *(_DWORD *)(v3 + 56);
  if ( v4 == 1 )
  {
    v6 = v2;
    v7 = 5;
    v5 = "[SOW]";
    goto LABEL_8;
  }
  if ( !v4 )
    v5 = "[REAP]";
    goto LABEL_7;
  if ( v4 == -1 )
    v5 = "[none]";
LABEL_7:
    v7 = 6;
LABEL_8:
    sub_21E7408(v6, v5, v7);
    if ( *(_DWORD *)(v3 + 56) == -1 )
      return;
  j_Entity::getAttachPos((AABB *)&v8, *(_DWORD *)(v3 + 48), 3, 0);
}


int __fastcall HarvestFarmBlockGoal::canContinueToUse(HarvestFarmBlockGoal *this)
{
  int result; // r0@2

  if ( *((_DWORD *)this + 14) >= 0 )
    result = j_MoveToBlockGoal::canContinueToUse(this);
  else
    result = 0;
  return result;
}
