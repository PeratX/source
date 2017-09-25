

void __fastcall MinecartItem::~MinecartItem(MinecartItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall MinecartItem::isDestructive(MinecartItem *this, int a2)
{
  int v2; // r1@1
  signed int result; // r0@1

  v2 = *((_DWORD *)this + 29);
  result = 0;
  if ( v2 == 3 )
    result = 1;
  return result;
}


int __fastcall MinecartItem::MinecartItem(int a1, const void **a2, __int16 a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int result; // r0@1

  v4 = a4;
  v5 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v5 = &off_2702CCC;
  *(_DWORD *)(v5 + 116) = v4;
  Item::setMaxStackSize((Item *)v5, 1u);
  result = v5;
  *(_BYTE *)(v5 + 43) = 1;
  return result;
}


int __fastcall MinecartItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r5@1
  int v10; // r9@1
  int v12; // r8@1
  const BlockPos *v13; // r0@1
  Level *v14; // r10@1
  int v15; // r1@1
  int v16; // r1@2
  int v17; // r2@2
  BlockSource *v18; // r0@2
  char *v19; // r0@2
  int v20; // r4@4
  BlockSource *v21; // r0@4
  float v27; // [sp+4h] [bp-74h]@4
  int v28; // [sp+10h] [bp-68h]@2
  int v29; // [sp+14h] [bp-64h]@2
  int v30; // [sp+18h] [bp-60h]@2
  char v31; // [sp+1Ch] [bp-5Ch]@2
  char v32; // [sp+28h] [bp-50h]@2
  char v33; // [sp+34h] [bp-44h]@2
  BaseRailBlock *v34; // [sp+50h] [bp-28h]@1

  v9 = this;
  v10 = a1;
  _R6 = a4;
  v12 = a2;
  v13 = (const BlockPos *)Entity::getRegion(this);
  BlockSource::getBlockID((BlockSource *)&v34, v13, _R6);
  v14 = (Level *)Entity::getLevel(v9);
  if ( BaseRailBlock::isRail((BaseRailBlock *)(unsigned __int8)v34, v15) == 1 )
  {
    Vec3::Vec3((int)&v32, _R6);
    v16 = *(_DWORD *)(_R6 + 4);
    v17 = *(_DWORD *)(_R6 + 8);
    v28 = *(_DWORD *)_R6 + 1;
    v29 = v16 + 1;
    v30 = v17 + 1;
    Vec3::Vec3((int)&v31, (int)&v28);
    AABB::AABB((int)&v33, (int)&v32, (int)&v31);
    v18 = (BlockSource *)Entity::getRegion(v9);
    v19 = BlockSource::fetchEntities(v18, 0, (const AABB *)&v33);
    if ( *(_QWORD *)v19 >> 32 != (unsigned int)*(_QWORD *)v19 )
      return 1;
    if ( Level::isClientSide(v14) )
      goto LABEL_10;
    v20 = *(_DWORD *)(v10 + 116);
    v21 = (BlockSource *)Entity::getRegion(v9);
    __asm
    {
      VLDR            S0, [R6]
      VMOV.F32        S6, #0.5
      VLDR            S2, [R6,#4]
      VLDR            S4, [R6,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S6
      VSTR            S0, [SP,#0x78+var_74]
      VSTR            S2, [SP,#0x78+var_70]
      VSTR            S4, [SP,#0x78+var_6C]
    }
    if ( sub_182AE70(v20, (int)v9, v21, (int)&v27, a9) == 1 )
LABEL_10:
      (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v9 + 612))(v9, v12);
  }
  return 0;
}


signed int __fastcall MinecartItem::dispense(MinecartItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  BlockSource *v6; // r7@1
  MinecartItem *v7; // r10@1
  int v8; // r9@1
  Container *v9; // r5@1
  Block *v10; // r4@1
  int v11; // r6@1
  float *v12; // r0@2
  int *v13; // r1@2
  Player *v18; // r0@14
  signed int v19; // r4@14
  int v21; // [sp+4h] [bp-5Ch]@5
  int v22; // [sp+8h] [bp-58h]@5
  int v23; // [sp+Ch] [bp-54h]@5
  float v24; // [sp+10h] [bp-50h]@2
  float v27; // [sp+1Ch] [bp-44h]@14
  int v28; // [sp+28h] [bp-38h]@1
  int v29; // [sp+2Ch] [bp-34h]@1
  int v30; // [sp+30h] [bp-30h]@1
  char v31; // [sp+34h] [bp-2Ch]@1
  int v32; // [sp+38h] [bp-28h]@1
  int v33; // [sp+3Ch] [bp-24h]@1

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  BlockPos::BlockPos((int)&v31, (int)a5);
  v10 = (Block *)BlockSource::getBlock(v6, (const BlockPos *)&v31);
  v28 = *(_DWORD *)&v31;
  v29 = v32 - 1;
  v30 = v33;
  v11 = BlockSource::getBlock(v6, (const BlockPos *)&v28);
  if ( (*(int (__fastcall **)(Block *))(*(_DWORD *)v10 + 92))(v10) )
  {
    v12 = &v24;
    v13 = (int *)&v31;
  }
  else
    if ( Block::isType(v10, (const Block *)Block::mAir) != 1 )
      return 0;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 92))(v11) != 1 )
    v21 = *(_DWORD *)&v31;
    v22 = v32 - 1;
    v23 = v33;
    v13 = &v21;
  Vec3::Vec3((int)v12, (int)v13);
  __asm
    VMOV.F32        S4, #1.0
    VLDR            S0, =0.0
    VMOV.F32        S2, #0.125
    VMOV.F32        S12, #-0.125
    VMOV.F32        S6, S0
  if ( _ZF )
    __asm { VMOVEQ.F32      S6, S4 }
  if ( a6 == 3 )
    __asm { VMOVEQ.F32      S0, S4 }
    VMOV.F32        S4, #0.5
    VLDR            S10, [SP,#0x60+var_48]
    VMUL.F32        S6, S6, S2
    VMUL.F32        S0, S0, S2
    VLDR            S2, [SP,#0x60+var_50]
    VLDR            S8, [SP,#0x60+var_4C]
    __asm { VMOVEQ.F32      S6, S12 }
  if ( a6 == 2 )
    __asm { VMOVEQ.F32      S0, S12 }
    VADD.F32        S2, S2, S4
    VADD.F32        S10, S10, S4
    VADD.F32        S4, S8, S4
    VADD.F32        S2, S2, S6
    VADD.F32        S0, S10, S0
    VSTR            S4, [SP,#0x60+var_40]
    VSTR            S2, [SP,#0x60+var_44]
    VSTR            S0, [SP,#0x60+var_3C]
  sub_182AE70(*((_DWORD *)v7 + 29), 0, v6, (int)&v27, 0);
  v18 = (Player *)BlockSource::getLevel(v6);
  Level::broadcastLevelEvent(v18, 1000, __PAIR__(1000, (unsigned int)a5), 0);
  v19 = 1;
  (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v9 + 36))(v9, v8, 1);
  return v19;
}


void __fastcall MinecartItem::~MinecartItem(MinecartItem *this)
{
  MinecartItem::~MinecartItem(this);
}
