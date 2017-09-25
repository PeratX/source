

signed int __fastcall ExperiencePotionItem::dispense(ExperiencePotionItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  BlockSource *v6; // r4@1
  int v7; // r8@1
  Container *v8; // r6@1
  Level *v16; // r0@1
  Spawner *v17; // r5@1
  Entity *v18; // r7@1
  void *v19; // r0@1
  void *v20; // r0@2
  void *v21; // r0@3
  signed int v22; // r5@4
  Player *v23; // r0@5
  int v24; // r2@5
  int v25; // r3@5
  __int64 v26; // r2@5
  unsigned int *v28; // r2@7
  signed int v29; // r1@9
  unsigned int *v30; // r2@11
  signed int v31; // r1@13
  unsigned int *v32; // r2@15
  signed int v33; // r1@17
  int v34; // [sp+8h] [bp-48h]@5
  int v35; // [sp+Ch] [bp-44h]@5
  int v36; // [sp+10h] [bp-40h]@5
  int v37; // [sp+18h] [bp-38h]@1
  int v38; // [sp+1Ch] [bp-34h]@2
  int v39; // [sp+20h] [bp-30h]@1
  float v40; // [sp+24h] [bp-2Ch]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  __asm { VLDR            S2, =0.1 }
  _R0 = &Facing::STEP_Y[a6];
  __asm
  {
    VLDR            S0, [R0]
    VCVT.F32.S32    S0, S0
  }
  _R0 = &Facing::STEP_X[a6];
  __asm { VLDR            S4, [R0] }
  _R0 = &Facing::STEP_Z[a6];
    VLDR            S6, [R0]
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S2
    VCVT.F32.S32    S2, S6
    VSTR            S4, [SP,#0x50+var_2C]
    VSTR            S0, [SP,#0x50+var_28]
    VSTR            S2, [SP,#0x50+var_24]
  v16 = (Level *)j_BlockSource::getLevel(a2);
  v17 = (Spawner *)j_Level::getSpawner(v16);
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v37, 4194372);
  v18 = j_Spawner::spawnProjectile(v17, v6, (const EntityDefinitionIdentifier *)&v37, 0, a5, (const Vec3 *)&v40);
  v19 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v38 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v37 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = 0;
  if ( v18 )
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v8 + 36))(v8, v7, 1);
    v23 = (Player *)j_BlockSource::getLevel(v6);
    v24 = *((_DWORD *)a5 + 1);
    v25 = *((_DWORD *)a5 + 2);
    v34 = *(_DWORD *)a5;
    v35 = v24;
    v36 = v25;
    HIDWORD(v26) = 78642;
    LODWORD(v26) = &v34;
    j_Level::broadcastLevelEvent(v23, 1002, v26, 0);
    v22 = 1;
  return v22;
}


signed int __fastcall ExperiencePotionItem::isThrowable(ExperiencePotionItem *this)
{
  return 1;
}


int __fastcall ExperiencePotionItem::ExperiencePotionItem(int a1, const void **a2, __int16 a3)
{
  int result; // r0@1

  result = j_Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_272122C;
  *(_BYTE *)(result + 4) = 64;
  return result;
}


ItemInstance *__fastcall ExperiencePotionItem::use(ExperiencePotionItem *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v3; // r8@1
  Entity *v4; // r5@1
  Level *v5; // r6@3
  void (__fastcall *v6)(Entity *, signed int, char *, signed int); // r4@3
  Spawner *v7; // r6@4
  BlockSource *v8; // r7@4
  const Vec3 *v9; // r0@4
  void *v10; // r0@4
  void *v11; // r0@5
  void *v12; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  int v20; // [sp+8h] [bp-38h]@4
  int v21; // [sp+Ch] [bp-34h]@5
  int v22; // [sp+10h] [bp-30h]@4
  char v23; // [sp+14h] [bp-2Ch]@3

  v3 = a2;
  v4 = a3;
  if ( !j_Abilities::getBool((int)a3 + 4320, (int **)&Abilities::INSTABUILD) )
    j_ItemInstance::remove(v3, 1);
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v4 + 928))(v4);
  v5 = (Level *)j_Entity::getLevel(v4);
  v6 = *(void (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v4 + 556);
  j_Entity::getAttachPos((AABB *)&v23, (int)v4, 4, 0);
  v6(v4, 39, &v23, -1);
  if ( !j_Level::isClientSide(v5) )
  {
    v7 = (Spawner *)j_Level::getSpawner(v5);
    v8 = (BlockSource *)j_Entity::getRegion(v4);
    j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v20, 4194372);
    v9 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 52))(v4);
    j_Spawner::spawnProjectile(v7, v8, (const EntityDefinitionIdentifier *)&v20, v4, v9, (const Vec3 *)&Vec3::ZERO);
    v10 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v21 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v20 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  }
  return v3;
}


void __fastcall ExperiencePotionItem::~ExperiencePotionItem(ExperiencePotionItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall ExperiencePotionItem::isGlint(ExperiencePotionItem *this, const ItemInstance *a2)
{
  return 1;
}


void __fastcall ExperiencePotionItem::~ExperiencePotionItem(ExperiencePotionItem *this)
{
  ExperiencePotionItem::~ExperiencePotionItem(this);
}
