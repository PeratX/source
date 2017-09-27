

int __fastcall BottleItem::_createBottledItem(BottleItem *this, Entity *a2, ItemInstance *a3, const Item *a4)
{
  Entity *v4; // r4@1
  ItemInstance *v5; // r5@1
  const Item *v6; // r6@1
  int result; // r0@11
  int v8; // [sp+0h] [bp-58h]@1
  int v9; // [sp+8h] [bp-50h]@11
  unsigned __int8 v10; // [sp+Eh] [bp-4Ah]@6
  void *v11; // [sp+24h] [bp-34h]@9
  void *ptr; // [sp+34h] [bp-24h]@7

  v4 = a2;
  v5 = a3;
  v6 = a4;
  (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)a2 + 612))(a2, a3);
  j_ItemInstance::ItemInstance((ItemInstance *)&v8, (int)v6);
  if ( *((_BYTE *)v5 + 14) )
  {
    if ( !(*(int (__fastcall **)(Entity *, int *))(*(_DWORD *)v4 + 660))(v4, &v8) )
      (*(void (__fastcall **)(Entity *, int *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v8, 0);
  }
  else
    j_ItemInstance::operator=((int)v5, (int)&v8);
  if ( j_Entity::hasType((int)v4, 319) == 1 )
    j_MinecraftEventing::fireEventItemAcquired((int)v4, (ItemInstance *)&v8, v10, 9);
  if ( ptr )
    j_operator delete(ptr);
  if ( v11 )
    j_operator delete(v11);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


void __fastcall BottleItem::~BottleItem(BottleItem *this)
{
  BottleItem::~BottleItem(this);
}


int __fastcall BottleItem::BottleItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2720630;
  j_Item::setMaxStackSize((Item *)v3, 0x40u);
  *(_BYTE *)(v3 + 43) = 1;
  return v3;
}


int __fastcall BottleItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r5@1
  int v10; // r6@1
  ItemInstance *v11; // r8@1
  const BlockPos *v12; // r7@1
  __int64 *v13; // r4@1
  __int64 v14; // r0@1
  AreaEffectCloud *v15; // r6@2
  BottleItem **v17; // r0@8
  unsigned __int8 v26; // [sp+4h] [bp-44h]@1
  int v27; // [sp+8h] [bp-40h]@1
  int v28; // [sp+Ch] [bp-3Ch]@1
  signed int v29; // [sp+10h] [bp-38h]@1
  char v30; // [sp+14h] [bp-34h]@1

  v9 = this;
  v10 = a4;
  v11 = (ItemInstance *)a2;
  v12 = (const BlockPos *)j_Entity::getRegion(this);
  v27 = 0x40000000;
  v28 = 0;
  v29 = 0x40000000;
  j_AABB::grow((AABB *)&v30, (Entity *)((char *)v9 + 264), (int)&v27);
  v13 = (__int64 *)j_BlockSource::fetchEntities((int)v12, 95, (int)&v30, (int)v9);
  j_BlockSource::getBlockID((BlockSource *)&v26, v12, v10);
  v14 = *v13;
  if ( (_DWORD)v14 == HIDWORD(v14)
    || (v15 = *(AreaEffectCloud **)v14, j_AreaEffectCloud::getParticle(*(AreaEffectCloud **)v14) != 41) )
  {
    if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 652))(v9) || v26 != *(_BYTE *)(Block::mStillWater + 4) )
      return 1;
    v17 = (BottleItem **)&Item::mPotion;
  }
  else
    if ( a9 )
    {
      if ( (*(int (__fastcall **)(int, AreaEffectCloud *))(*(_DWORD *)a9 + 32))(a9, v15) )
        return 0;
      _R0 = j_AreaEffectCloud::getRadius(v15);
      __asm
      {
        VMOV.F32        S0, #-0.5
        VMOV            S2, R0
        VADD.F32        S0, S2, S0
        VMOV            R1, S0
      }
      j_AreaEffectCloud::setRadius(v15, _R1);
      j_BottleItem::_createBottledItem((BottleItem *)&Item::mDragon_breath, v9, v11, (const Item *)Item::mDragon_breath);
      (*(void (__fastcall **)(int, AreaEffectCloud *))(*(_DWORD *)a9 + 36))(a9, v15);
      goto LABEL_12;
    }
    _R0 = j_AreaEffectCloud::getRadius(v15);
    __asm
      VMOV.F32        S0, #-0.5
      VMOV            S2, R0
      VADD.F32        S0, S2, S0
      VMOV            R1, S0
    j_AreaEffectCloud::setRadius(v15, _R1);
    v17 = (BottleItem **)Item::mDragon_breath;
  j_BottleItem::_createBottledItem(*v17, v9, v11, *(const Item **)*v17);
LABEL_12:
  if ( j_Entity::hasType((int)v9, 319) == 1 )
    j_MinecraftEventing::fireEventItemUsed((int)v9, v11, 7);
  return 1;
}


void __fastcall BottleItem::~BottleItem(BottleItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall BottleItem::isLiquidClipItem(BottleItem *this, int a2)
{
  return 1;
}
