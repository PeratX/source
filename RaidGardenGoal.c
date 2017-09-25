

int __fastcall RaidGardenGoal::RaidGardenGoal(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  float v13; // r4@1
  int v14; // r12@1
  float v16; // [sp+0h] [bp-18h]@0

  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  v13 = a1;
  __asm { VSTR            S0, [SP,#0x18+var_18] }
  j_MoveToBlockGoal::MoveToBlockGoal((MoveToBlockGoal *)LODWORD(a1), (Mob *)a2, *(float *)&a3, a4, v16);
  v14 = LODWORD(v13) + 60;
  *(_DWORD *)LODWORD(v13) = &off_271AB2C;
  *(_DWORD *)(LODWORD(v13) + 52) = a6;
  *(_DWORD *)(LODWORD(v13) + 56) = 0;
  *(_DWORD *)v14 = *(_DWORD *)(*(_DWORD *)(LODWORD(v13) + 48) + 416);
  *(_DWORD *)(v14 + 4) = a8;
  *(_DWORD *)(v14 + 8) = a7;
  j_std::set<Block const*,std::less<Block const*>,std::allocator<Block const*>>::set<std::_Rb_tree_const_iterator<Block const*>>(
    LODWORD(v13) + 72,
    *(_DWORD *)(a9 + 12),
    a9 + 4);
  return LODWORD(v13);
}


int __fastcall RaidGardenGoal::canUse(RaidGardenGoal *this)
{
  MoveToBlockGoal *v1; // r4@1
  Level *v2; // r0@2
  unsigned __int64 *v3; // r0@2
  int result; // r0@3

  v1 = this;
  if ( *((_DWORD *)this + 3) > 0
    || (v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 12)),
        v3 = (unsigned __int64 *)j_Level::getGameRules(v2),
        j_GameRules::getBool(v3, (int **)&GameRules::MOB_GRIEFING) == 1) )
  {
    result = j_MoveToBlockGoal::canUse(v1);
  }
  else
    result = 0;
  return result;
}


void __fastcall RaidGardenGoal::~RaidGardenGoal(RaidGardenGoal *this)
{
  RaidGardenGoal::~RaidGardenGoal(this);
}


int __fastcall RaidGardenGoal::tick(RaidGardenGoal *this)
{
  RaidGardenGoal *v1; // r4@1
  LookControl *v6; // r7@1
  int v7; // r0@1
  __int64 v8; // r2@1
  int result; // r0@1
  int v10; // r0@2
  const BlockPos *v11; // r5@5
  int v12; // r1@5
  int v13; // r2@5
  char v14; // r0@6
  int v15; // r0@10
  RaidGardenGoal *v16; // r3@10
  int v17; // r0@10
  __int64 v18; // r1@10
  int v19; // r1@10
  float v20; // [sp+8h] [bp-50h]@10
  unsigned __int8 v21; // [sp+14h] [bp-44h]@7
  char v22; // [sp+15h] [bp-43h]@7
  char v23; // [sp+18h] [bp-40h]@9
  unsigned __int8 v24; // [sp+1Ch] [bp-3Ch]@5
  unsigned __int8 v25; // [sp+1Dh] [bp-3Bh]@6
  int v26; // [sp+20h] [bp-38h]@5
  int v27; // [sp+24h] [bp-34h]@5
  int v28; // [sp+28h] [bp-30h]@5
  float v29; // [sp+2Ch] [bp-2Ch]@1

  v1 = this;
  j_MoveToBlockGoal::tick(this);
  j_Vec3::Vec3((int)&v29, (int)v1 + 36);
  __asm
  {
    VMOV.F32        S16, #0.5
    VLDR            S2, [SP,#0x58+var_2C]
    VMOV.F32        S0, #1.0
    VLDR            S4, [SP,#0x58+var_28]
    VLDR            S6, [SP,#0x58+var_24]
    VADD.F32        S2, S2, S16
    VADD.F32        S0, S4, S0
    VADD.F32        S4, S6, S16
    VSTR            S2, [SP,#0x58+var_2C]
    VSTR            S0, [SP,#0x58+var_28]
    VSTR            S4, [SP,#0x58+var_24]
  }
  v6 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 12));
  v7 = (*(int (**)(void))(**((_DWORD **)v1 + 12) + 940))();
  LODWORD(v8) = 1092616192;
  HIDWORD(v8) = v7;
  j_LookControl::setLookAt(v6, (const Vec3 *)&v29, v8);
  result = (*(int (__fastcall **)(RaidGardenGoal *))(*(_DWORD *)v1 + 44))(v1);
  if ( result == 1 )
    v10 = *((_DWORD *)v1 + 12);
    if ( *(_DWORD *)(v10 + 416) < *((_DWORD *)v1 + 15) )
      goto LABEL_15;
    if ( (signed int)(*(_QWORD *)((char *)v1 + 52) >> 32) >= (signed int)*(_QWORD *)((char *)v1 + 52) )
      *((_DWORD *)v1 + 14) = 0;
    v11 = (const BlockPos *)j_Entity::getRegion((Entity *)v10);
    v12 = *((_DWORD *)v1 + 10);
    v13 = *((_DWORD *)v1 + 11);
    v26 = *((_DWORD *)v1 + 9);
    v27 = v12 + 1;
    v28 = v13;
    j_BlockSource::getBlockAndData((BlockSource *)&v24, v11, (int)&v26);
    if ( (*(int (__fastcall **)(RaidGardenGoal *, const BlockPos *, char *))(*(_DWORD *)v1 + 52))(
           v1,
           v11,
           (char *)v1 + 36) != 1 )
    {
LABEL_15:
      result = 10;
      *((_DWORD *)v1 + 3) = 10;
    }
    else
      v14 = v25;
      if ( v25 )
      {
        --v25;
        v21 = v24;
        v22 = v14 - 1;
        j_BlockSource::setBlockAndData((int)v11, (BlockPos *)&v26, (int)&v21, 2, 0);
      }
      else
        v23 = BlockID::AIR;
        j_BlockSource::setBlock((int)v11, (BlockPos *)&v26, &v23, 2);
      v15 = j_Entity::getLevel(*((Entity **)v1 + 12));
      __asm
        VLDR            S0, [SP,#0x58+var_2C]
        VLDR            S2, [SP,#0x58+var_28]
        VLDR            S4, [SP,#0x58+var_24]
        VADD.F32        S0, S0, S16
        VADD.F32        S2, S2, S16
        VADD.F32        S4, S4, S16
        VSTR            S0, [SP,#0x58+var_50]
        VSTR            S2, [SP,#0x58+var_4C]
        VSTR            S4, [SP,#0x58+var_48]
      j_Level::broadcastDimensionEvent(v15, v11, 2011, (int)&v20, v24 | (v25 << 8));
      v16 = (RaidGardenGoal *)((char *)v1 + 68);
      v17 = *((_DWORD *)v1 + 14) + 1;
      *((_DWORD *)v1 + 14) = v17;
      v18 = *((_QWORD *)v1 + 6);
      v19 = *(_DWORD *)(v18 + 416);
      if ( v17 < SHIDWORD(v18) )
        v16 = (RaidGardenGoal *)((char *)v1 + 64);
      result = *(_DWORD *)v16 + v19;
      *((_DWORD *)v1 + 15) = result;
  return result;
}


signed int __fastcall RaidGardenGoal::isValidTarget(RaidGardenGoal *this, BlockSource *a2, const BlockPos *a3)
{
  RaidGardenGoal *v3; // r4@1
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r5@1
  int v6; // r1@2
  int v7; // r2@2
  unsigned int v8; // r0@3
  int v9; // r6@3
  int v10; // r1@3
  int v11; // r3@4
  int v12; // r2@5
  signed int result; // r0@11
  int v14; // r3@13
  unsigned __int8 v15; // [sp+4h] [bp-24h]@2
  char v16; // [sp+5h] [bp-23h]@2
  int v17; // [sp+8h] [bp-20h]@2
  int v18; // [sp+Ch] [bp-1Ch]@2
  int v19; // [sp+10h] [bp-18h]@2
  unsigned __int8 v20; // [sp+14h] [bp-14h]@1
  char v21; // [sp+15h] [bp-13h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  j_BlockSource::getBlockAndData((BlockSource *)&v20, a2, (int)a3);
  if ( v20 == *(_BYTE *)(Block::mFarmland + 4)
    && (v6 = *((_DWORD *)v4 + 1),
        v7 = *((_DWORD *)v4 + 2),
        v17 = *(_DWORD *)v4,
        v18 = v6 + 1,
        v19 = v7,
        j_BlockSource::getBlockAndData((BlockSource *)&v15, v5, (int)&v17),
        v20 = v15,
        (v21 = v16) != 0) )
  {
    v8 = j_FullBlock::getBlock((FullBlock *)&v20);
    v9 = *((_DWORD *)v3 + 20);
    v10 = (int)v3 + 76;
    if ( v9 )
    {
      v11 = (int)v3 + 76;
      do
      {
        v12 = v9;
        while ( *(_DWORD *)(v12 + 16) < v8 )
        {
          v12 = *(_DWORD *)(v12 + 12);
          if ( !v12 )
          {
            v12 = v11;
            goto LABEL_13;
          }
        }
        v9 = *(_DWORD *)(v12 + 8);
        v11 = v12;
      }
      while ( v9 );
    }
    else
      v12 = (int)v3 + 76;
LABEL_13:
    v14 = (int)v3 + 76;
    if ( v12 != v10 )
      if ( v8 < *(_DWORD *)(v12 + 16) )
        v12 = (int)v3 + 76;
      v14 = v12;
    result = 0;
    if ( v14 != v10 )
      result = 1;
  }
  else
  return result;
}


int __fastcall RaidGardenGoal::~RaidGardenGoal(RaidGardenGoal *this)
{
  Goal *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271AB2C;
  j_std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
    (int)this + 72,
    *((_DWORD *)this + 20));
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall RaidGardenGoal::~RaidGardenGoal(RaidGardenGoal *this)
{
  Goal *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271AB2C;
  j_std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
    (int)this + 72,
    *((_DWORD *)this + 20));
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall RaidGardenGoal::canContinueToUse(RaidGardenGoal *this)
{
  RaidGardenGoal *v1; // r4@1
  char *v2; // r2@1
  int v3; // r0@1
  int result; // r0@3
  int (__fastcall *v5)(RaidGardenGoal *, int, char *); // r6@4
  int v6; // r0@4

  v1 = this;
  v2 = (char *)this + 48;
  v3 = *((_DWORD *)this + 12);
  if ( *((_DWORD *)v2 + 2) < *((_DWORD *)v2 + 1) || *(_DWORD *)(v3 + 416) >= *((_DWORD *)v1 + 15) )
  {
    v5 = *(int (__fastcall **)(RaidGardenGoal *, int, char *))(*(_DWORD *)v1 + 52);
    v6 = j_Entity::getRegion((Entity *)v3);
    result = v5(v1, v6, (char *)v1 + 36);
  }
  else
    result = 0;
  return result;
}
