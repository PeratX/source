

void __fastcall SignItem::~SignItem(SignItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall SignItem::~SignItem(SignItem *this)
{
  SignItem::~SignItem(this);
}


int __fastcall SignItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r5@1
  BlockPos *v10; // r9@1
  ItemInstance *v11; // r8@1
  const BlockPos *v12; // r11@1
  signed int v13; // r6@1
  float v19; // r1@3
  char v20; // r10@3
  BlockState *v21; // r0@3
  __int64 v22; // r7@3
  char v23; // r0@3
  int v24; // r1@3
  BlockState *v25; // r0@6
  __int64 v26; // r6@6
  int v27; // r1@6
  char v28; // r0@6
  ItemInstance *v30; // [sp+8h] [bp-40h]@3
  char v31; // [sp+Ch] [bp-3Ch]@13
  char v32; // [sp+Dh] [bp-3Bh]@13
  char v33; // [sp+10h] [bp-38h]@11
  char v34; // [sp+11h] [bp-37h]@11
  char v35; // [sp+14h] [bp-34h]@3
  __int16 v37; // [sp+1Ch] [bp-2Ch]@2
  char v38; // [sp+20h] [bp-28h]@2

  v9 = this;
  v10 = (BlockPos *)a4;
  v11 = (ItemInstance *)a2;
  v12 = (const BlockPos *)Entity::getRegion(this);
  v13 = 0;
  if ( (*(int (**)(void))(*(_DWORD *)Block::mSign + 224))() == 1 )
  {
    BlockSource::getBlockAndData((BlockSource *)&v38, v12, (int)v10);
    v37 = 0;
    if ( a5 == 1 )
    {
      v30 = v11;
      Entity::getRotation((Entity *)&v35, (int)v9);
      __asm
      {
        VLDR            S0, =180.0
        VMOV.F32        S4, #0.5
        VLDR            S2, [SP,#0x48+var_30]
        VADD.F32        S0, S2, S0
        VLDR            S2, =0.044444
        VMUL.F32        S0, S0, S2
        VADD.F32        S0, S0, S4
        VMOV            R0, S0
      }
      v20 = mce::Math::floor(_R0, v19);
      v21 = (BlockState *)Block::getBlockState(Block::mSign, 15);
      v22 = *(_QWORD *)v21;
      BlockState::getMask(v21);
      v23 = *(_BYTE *)(Block::mSign + 4);
      v24 = (v20 & 0xF) << (v22 + 1 - BYTE4(v22));
      LOBYTE(v37) = *(_BYTE *)(Block::mSign + 4);
      HIBYTE(v37) = v24;
      if ( a9 )
        v11 = v30;
        if ( (*(int (__fastcall **)(int, BlockPos *, char *, __int16 *))(*(_DWORD *)a9 + 8))(a9, v10, &v38, &v37) )
          return 0;
        LOBYTE(v24) = HIBYTE(v37);
        v23 = v37;
      else
      v33 = v23;
      v34 = v24;
      BlockSource::setBlockAndData((int)v12, v10, (int)&v33, 3, (int)v9);
    }
    else
      v25 = (BlockState *)Block::getBlockState(Block::mSign, 15);
      v26 = *(_QWORD *)v25;
      BlockState::getMask(v25);
      v27 = a5 << (v26 + 1 - BYTE4(v26));
      v28 = *(_BYTE *)(Block::mWallSign + 4);
      LOBYTE(v37) = *(_BYTE *)(Block::mWallSign + 4);
      HIBYTE(v37) = a5 << (v26 + 1 - BYTE4(v26));
        LOBYTE(v27) = HIBYTE(v37);
        v28 = v37;
      v31 = v28;
      v32 = v27;
      BlockSource::setBlockAndData((int)v12, v10, (int)&v31, 3, (int)v9);
    if ( a9 )
      (*(void (__fastcall **)(int, BlockPos *, char *, __int16 *))(*(_DWORD *)a9 + 12))(a9, v10, &v38, &v37);
    if ( Entity::hasCategory((int)v9, 1) == 1 )
      MinecraftEventing::fireEventItemUsed((int)v9, v11, 6);
    (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v9 + 612))(v9, v11);
    if ( BlockSource::getBlockEntity(v12, v10) )
      v13 = 1;
      if ( Entity::hasCategory((int)v9, 1) != 1 )
        return v13;
      Item::updateCustomBlockEntityTag((Item *)1, v12, v11, v10);
      if ( !ItemInstance::hasCompoundTextUserData(v11) )
        (*(void (__fastcall **)(Entity *, BlockPos *))(*(_DWORD *)v9 + 1404))(v9, v10);
    v13 = 1;
  }
  return v13;
}


signed int __fastcall SignItem::_calculatePlacePos(SignItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  signed __int8 *v5; // r5@1
  BlockSource *v6; // r6@2
  Block *v7; // r7@2
  signed int result; // r0@4
  int v9; // [sp+0h] [bp-20h]@5
  int v10; // [sp+4h] [bp-1Ch]@5
  int v11; // [sp+8h] [bp-18h]@5

  v5 = a4;
  if ( *a4 )
  {
    v6 = (BlockSource *)Entity::getRegion(a3);
    v7 = (Block *)BlockSource::getBlock(v6, a5);
    if ( Block::isType(v7, (const Block *)Block::mAir)
      || (*(int (__fastcall **)(Block *, BlockSource *, BlockPos *))(*(_DWORD *)v7 + 332))(v7, v6, a5) != 1 )
    {
      BlockPos::neighbor((BlockPos *)&v9, (int)a5, *v5);
      *(_DWORD *)a5 = v9;
      *((_DWORD *)a5 + 1) = v10;
      *((_DWORD *)a5 + 2) = v11;
      result = 1;
    }
    else
      *v5 = 1;
  }
  else
    result = 0;
  return result;
}
