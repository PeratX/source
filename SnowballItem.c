

ItemInstance *__fastcall SnowballItem::use(SnowballItem *this, ItemInstance *a2, Player *a3)
{
  Entity *v3; // r5@1
  ItemInstance *v4; // r8@1
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

  v3 = a3;
  v4 = a2;
  MinecraftEventing::fireEventItemUsed((int)a3, a2, 4);
  if ( !Abilities::getBool((int)v3 + 4320, (int **)&Abilities::INSTABUILD) )
    ItemInstance::remove(v4, 1);
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 928))(v3);
  v5 = (Level *)Entity::getLevel(v3);
  v6 = *(void (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v3 + 556);
  Entity::getAttachPos((AABB *)&v23, (int)v3, 4, 0);
  v6(v3, 39, &v23, -1);
  if ( !Level::isClientSide(v5) )
  {
    v7 = (Spawner *)Level::getSpawner(v5);
    v8 = (BlockSource *)Entity::getRegion(v3);
    EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v20, 4194385);
    v9 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
    Spawner::spawnProjectile(v7, v8, (const EntityDefinitionIdentifier *)&v20, v3, v9, (const Vec3 *)&Vec3::ZERO);
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
  return v4;
}


void __fastcall SnowballItem::~SnowballItem(SnowballItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall SnowballItem::dispense(SnowballItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  BlockSource *v6; // r4@1
  int v7; // r8@1
  Container *v8; // r6@1
  Level *v16; // r5@1
  signed int v17; // r5@2
  Spawner *v18; // r5@3
  Entity *v19; // r7@3
  void *v20; // r0@3
  void *v21; // r0@4
  void *v22; // r0@5
  Player *v23; // r0@7
  int v24; // r2@7
  int v25; // r3@7
  __int64 v26; // r2@7
  unsigned int *v28; // r2@9
  signed int v29; // r1@11
  unsigned int *v30; // r2@13
  signed int v31; // r1@15
  unsigned int *v32; // r2@17
  signed int v33; // r1@19
  int v34; // [sp+8h] [bp-48h]@7
  int v35; // [sp+Ch] [bp-44h]@7
  int v36; // [sp+10h] [bp-40h]@7
  int v37; // [sp+18h] [bp-38h]@3
  int v38; // [sp+1Ch] [bp-34h]@4
  int v39; // [sp+20h] [bp-30h]@3
  float v40; // [sp+24h] [bp-2Ch]@3

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
  v16 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v16) )
    v17 = 0;
  else
    v18 = (Spawner *)Level::getSpawner(v16);
    EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v37, 4194385);
    v19 = Spawner::spawnProjectile(v18, v6, (const EntityDefinitionIdentifier *)&v37, 0, a5, (const Vec3 *)&v40);
    v20 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
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
        j_j_j_j__ZdlPv_9(v20);
    }
    v21 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v38 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v37 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    if ( v19 )
      (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v8 + 36))(v8, v7, 1);
      v23 = (Player *)BlockSource::getLevel(v6);
      v24 = *((_DWORD *)a5 + 1);
      v25 = *((_DWORD *)a5 + 2);
      v34 = *(_DWORD *)a5;
      v35 = v24;
      v36 = v25;
      HIDWORD(v26) = 78642;
      LODWORD(v26) = &v34;
      Level::broadcastLevelEvent(v23, 1002, v26, 0);
      v17 = 1;
  return v17;
}


signed int __fastcall SnowballItem::isThrowable(SnowballItem *this)
{
  return 1;
}


void __fastcall SnowballItem::~SnowballItem(SnowballItem *this)
{
  SnowballItem::~SnowballItem(this);
}
