

void __fastcall BlockPlanterItem::~BlockPlanterItem(BlockPlanterItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall BlockPlanterItem::BlockPlanterItem(int a1, const void **a2, __int16 a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int *v7; // r0@2

  v5 = a4;
  v6 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v6 = &off_27203F8;
  *(_BYTE *)(v6 + 113) = *(_BYTE *)(v5 + 4);
  *(_BYTE *)(v6 + 114) = 0;
  if ( a5 == 1 )
  {
    v7 = (int *)j_Block::getDescriptionId((Block *)v5);
    EntityInteraction::setInteractText((int *)(v6 + 20), v7);
  }
  return v6;
}


void __fastcall BlockPlanterItem::~BlockPlanterItem(BlockPlanterItem *this)
{
  BlockPlanterItem::~BlockPlanterItem(this);
}


int __fastcall BlockPlanterItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, int a9)
{
  MinecraftEventing *v9; // r6@1
  int v10; // r8@1
  int v11; // r10@1
  int v12; // r4@1
  BlockSource *v13; // r9@1
  int v14; // r7@2
  AABB *v15; // r5@3
  int (__fastcall *v20)(int, MinecraftEventing *, int, int); // r4@6
  char v21; // r7@6
  char v22; // r0@6
  Level *v24; // r11@11
  int v25; // r1@11
  int v26; // r2@11
  const FullBlock *v27; // r2@12
  int v28; // r4@13
  void *v29; // r0@15
  unsigned int *v30; // r2@17
  signed int v31; // r1@19
  ItemInstance *v32; // [sp+10h] [bp-98h]@3
  int v33; // [sp+14h] [bp-94h]@15
  int v34; // [sp+18h] [bp-90h]@11
  signed int v35; // [sp+1Ch] [bp-8Ch]@11
  int v36; // [sp+20h] [bp-88h]@11
  int v37; // [sp+24h] [bp-84h]@11
  int v38; // [sp+28h] [bp-80h]@11
  int v39; // [sp+2Ch] [bp-7Ch]@11
  int v40; // [sp+30h] [bp-78h]@11
  int v41; // [sp+34h] [bp-74h]@11
  int v42; // [sp+38h] [bp-70h]@11
  char v43; // [sp+3Ch] [bp-6Ch]@11
  char v44; // [sp+48h] [bp-60h]@10
  char v45; // [sp+49h] [bp-5Fh]@10
  char v46; // [sp+4Ch] [bp-5Ch]@6
  char v47; // [sp+4Dh] [bp-5Bh]@6
  char v48; // [sp+50h] [bp-58h]@6
  char v49; // [sp+60h] [bp-48h]@5
  char v50; // [sp+64h] [bp-44h]@3

  v9 = this;
  v10 = a1;
  v11 = a4;
  v12 = a2;
  v13 = (BlockSource *)j_Entity::getRegion(this);
  if ( !*(_BYTE *)(v12 + 14) )
    return 0;
  v14 = Block::mBlocks[*(_BYTE *)(v10 + 113)];
  if ( v14 )
  {
    v32 = (ItemInstance *)v12;
    j_AABB::AABB((AABB *)&v50);
    v15 = (AABB *)(*(int (__fastcall **)(int, BlockSource *, int, char *))(*(_DWORD *)v14 + 32))(v14, v13, v11, &v50);
    if ( !j_AABB::isEmpty(v15) && j_BlockSource::isUnobstructedByEntities(v13, v15, 0) != 1 )
      return 0;
    v49 = *(_BYTE *)(v10 + 113);
    if ( j_BlockSource::mayPlace(v13, (int)&v49, v11, a5, (int)v9, 0, 0) != 1 )
    __asm
    {
      VLDR            S0, [SP,#0xA8+arg_C]
      VLDR            S2, [SP,#0xA8+arg_8]
    }
    v20 = *(int (__fastcall **)(int, MinecraftEventing *, int, int))(*(_DWORD *)v14 + 296);
      VLDR            S4, [SP,#0xA8+arg_4]
      VSTR            S4, [SP,#0xA8+var_54]
      VSTR            S2, [SP,#0xA8+var_50]
      VSTR            S0, [SP,#0xA8+var_4C]
    j_ItemInstance::getAuxValue(v32);
    v21 = v20(v14, v9, v11, a5);
    j_BlockSource::getBlockAndData((BlockSource *)&v48, v13, v11);
    v22 = *(_BYTE *)(v10 + 113);
    v46 = *(_BYTE *)(v10 + 113);
    v47 = v21;
    if ( a9 )
      if ( (*(int (__fastcall **)(int, int, char *, char *))(*(_DWORD *)a9 + 8))(a9, v11, &v48, &v46) )
        return 0;
      v22 = v46;
      v21 = v47;
    v44 = v22;
    v45 = v21;
    if ( j_BlockSource::setBlockAndData((int)v13, (BlockPos *)v11, (int)&v44, 3, (int)v9) == 1 )
      j_Item::updateCustomBlockEntityTag((Item *)v10, v13, v32, (BlockPos *)v11);
      v24 = (Level *)j_BlockSource::getLevel(v13);
      v34 = 1056964608;
      v35 = 1056964608;
      v36 = 1056964608;
      j_BlockPos::BlockPos((int)&v37, (int)&v34);
      v25 = *(_DWORD *)(v11 + 4);
      v26 = *(_DWORD *)(v11 + 8);
      v40 = *(_DWORD *)v11 + v37;
      v41 = v38 + v25;
      v42 = v39 + v26;
      j_Vec3::Vec3((int)&v43, (int)&v40);
      j_Level::broadcastSoundEvent(v24, (int)v13, 6, (int)&v43, *(_BYTE *)(v10 + 113), 1, 0, 0);
      if ( j_Entity::hasCategory((int)v9, 1) == 1 )
      {
        j_MinecraftEventing::fireEventItemUsed((int)v9, v32, 6);
        j_MinecraftEventing::fireEventBlockPlaced(v9, (Player *)&v46, v27);
      }
      (*(void (__fastcall **)(MinecraftEventing *, ItemInstance *))(*(_DWORD *)v9 + 612))(v9, v32);
      v28 = j_BlockSource::getBlockEntity(v13, (const BlockPos *)v11);
      if ( v28 )
        if ( j_ItemInstance::hasCustomHoverName(v32) == 1 )
        {
          j_ItemInstance::getCustomName((ItemInstance *)&v33, (int)v32);
          j_BlockEntity::setCustomName(v28, &v33);
          v29 = (void *)(v33 - 12);
          if ( (int *)(v33 - 12) != &dword_28898C0 )
          {
            v30 = (unsigned int *)(v33 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
            }
            else
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          }
        }
  }
  return 1;
}


_BOOL4 __fastcall BlockPlanterItem::isEmissive(BlockPlanterItem *this, int a2)
{
  return Block::mLightEmission[*((_BYTE *)this + 113)] != 0;
}


signed int __fastcall BlockPlanterItem::_calculatePlacePos(BlockPlanterItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  signed __int8 *v5; // r5@1
  BlockSource *v6; // r6@1
  Block *v7; // r7@1
  int v9; // [sp+0h] [bp-20h]@4
  int v10; // [sp+4h] [bp-1Ch]@4
  int v11; // [sp+8h] [bp-18h]@4

  v5 = a4;
  v6 = (BlockSource *)j_Entity::getRegion(a3);
  v7 = (Block *)j_BlockSource::getBlock(v6, a5);
  if ( j_Block::isType(v7, (const Block *)Block::mAir)
    || (*(int (__fastcall **)(Block *, BlockSource *, BlockPos *))(*(_DWORD *)v7 + 332))(v7, v6, a5) != 1 )
  {
    j_BlockPos::neighbor((BlockPos *)&v9, (int)a5, *v5);
    *(_DWORD *)a5 = v9;
    *((_DWORD *)a5 + 1) = v10;
    *((_DWORD *)a5 + 2) = v11;
  }
  else
    *v5 = 1;
  return 1;
}
