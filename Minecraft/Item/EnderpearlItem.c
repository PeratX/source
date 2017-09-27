

signed int __fastcall EnderpearlItem::getCooldownTime(EnderpearlItem *this)
{
  return 20;
}


void __fastcall EnderpearlItem::~EnderpearlItem(EnderpearlItem *this)
{
  EnderpearlItem::~EnderpearlItem(this);
}


Item *__fastcall EnderpearlItem::EnderpearlItem(int a1, const void **a2, __int16 a3)
{
  Item *v3; // r4@1

  v3 = (Item *)a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_27210E0;
  j_Item::setMaxStackSize(v3, 0x10u);
  return v3;
}


signed int __fastcall EnderpearlItem::isThrowable(EnderpearlItem *this)
{
  return 1;
}


void __fastcall EnderpearlItem::~EnderpearlItem(EnderpearlItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall EnderpearlItem::getCooldownType(EnderpearlItem *this)
{
  return 1;
}


ItemInstance *__fastcall EnderpearlItem::use(EnderpearlItem *this, ItemInstance *a2, Player *a3)
{
  Entity *v3; // r5@1
  ItemInstance *v4; // r8@1
  Level *v5; // r6@3
  void (__fastcall *v6)(Entity *, signed int, char *, signed int); // r4@3
  unsigned int *v7; // r2@3
  Spawner *v8; // r6@4
  BlockSource *v9; // r7@4
  const Vec3 *v10; // r0@4
  void *v11; // r0@4
  void *v12; // r0@5
  void *v13; // r0@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  signed int v19; // r1@18
  int v20; // [sp+8h] [bp-38h]@4
  int v21; // [sp+Ch] [bp-34h]@5
  int v22; // [sp+10h] [bp-30h]@4
  char v23; // [sp+14h] [bp-2Ch]@3

  v3 = a3;
  v4 = a2;
  j_MinecraftEventing::fireEventItemUsed((int)a3, a2, 4);
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 928))(v3);
  if ( !j_Abilities::getBool((int)v3 + 4320, (int **)&Abilities::INSTABUILD) )
    j_ItemInstance::remove(v4, 1);
  v5 = (Level *)j_Entity::getLevel(v3);
  v6 = *(void (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v3 + 556);
  j_Entity::getAttachPos((AABB *)&v23, (int)v3, 4, 0);
  v6(v3, 39, &v23, -1);
  if ( !j_Level::isClientSide(v5) )
  {
    v8 = (Spawner *)j_Level::getSpawner(v5);
    v9 = (BlockSource *)j_Entity::getRegion(v3);
    j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v20, 4194391);
    v10 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
    j_Spawner::spawnProjectile(v8, v9, (const EntityDefinitionIdentifier *)&v20, v3, v10, (const Vec3 *)&Vec3::ZERO);
    v11 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v21 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v7 = (unsigned int *)&dword_28898C0;
    v13 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v20 - 4);
          v19 = __ldrex(v7);
        while ( __strex(v19 - 1, v7) );
        v19 = (*v7)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  }
  j_ItemInstance::startCoolDown(v4, v3, (int)v7);
  return v4;
}
