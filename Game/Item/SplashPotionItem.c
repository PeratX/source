

ItemInstance *__fastcall SplashPotionItem::use(SplashPotionItem *this, ItemInstance *a2, Player *a3)
{
  Entity *v3; // r5@1
  PotionItem *v4; // r8@1
  ItemInstance *v5; // r9@1
  void (__fastcall *v6)(Entity *, signed int, char *, signed int); // r7@1
  Level *v7; // r0@1
  Level *v8; // r0@2
  Spawner *v9; // r7@2
  BlockSource *v10; // r6@2
  const Vec3 *v11; // r0@2
  Entity *v12; // r7@2
  void *v13; // r0@2
  void *v14; // r0@3
  void *v15; // r0@4
  void (__fastcall *v16)(Entity *); // r4@6
  __int64 v17; // r2@6
  unsigned int *v19; // r2@9
  signed int v20; // r1@11
  unsigned int *v21; // r2@13
  signed int v22; // r1@15
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  int v25; // [sp+8h] [bp-38h]@2
  int v26; // [sp+Ch] [bp-34h]@3
  int v27; // [sp+10h] [bp-30h]@2
  char v28; // [sp+14h] [bp-2Ch]@1

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = *(void (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)a3 + 556);
  Entity::getAttachPos((AABB *)&v28, (int)a3, 4, 0);
  v6(v3, 39, &v28, -1);
  v7 = (Level *)Entity::getLevel(v3);
  if ( !Level::isClientSide(v7) )
  {
    v8 = (Level *)Entity::getLevel(v3);
    v9 = (Spawner *)Level::getSpawner(v8);
    v10 = (BlockSource *)Entity::getRegion(v3);
    EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v25, 4194390);
    v11 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
    v12 = Spawner::spawnProjectile(
            v9,
            v10,
            (const EntityDefinitionIdentifier *)&v25,
            v3,
            v11,
            (const Vec3 *)&Vec3::ZERO);
    v13 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    }
    v14 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v26 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v25 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    if ( v12 )
      PotionItem::applyEffect(v4, v12, v5);
      v16 = *(void (__fastcall **)(Entity *))(*(_DWORD *)v12 + 348);
      v17 = *(_QWORD *)Entity::getUniqueID(v3);
      v16(v12);
      if ( Entity::getProjectileComponent(v12) )
        *(_BYTE *)(Entity::getProjectileComponent(v12) + 324) = 1;
  }
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 928))(v3);
  (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v3 + 612))(v3, v5);
  MinecraftEventing::fireEventItemUsed((int)v3, v5, 4);
  return v5;
}


void __fastcall SplashPotionItem::buildDescriptionId(SplashPotionItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  void **v3; // r4@1
  int v4; // r0@1
  int v5; // r4@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r5@11
  unsigned int v9; // r0@13
  int v10; // [sp+8h] [bp-18h]@1
  int v11; // [sp+Ch] [bp-14h]@4

  v3 = (void **)this;
  v4 = ItemInstance::getAuxValue(a3);
  Potion::getPotion((Potion *)&v10, v4);
  if ( v10 )
    Potion::getDescriptionId(v3, v10, 1);
  else
    sub_21E94B4(v3, "potion.empty");
  v5 = v11;
  if ( v11 )
  {
    v6 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
}


SplashPotionItem *__fastcall SplashPotionItem::~SplashPotionItem(SplashPotionItem *this)
{
  SplashPotionItem *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // r1@21
  void *v11; // r0@21

  v1 = this;
  v2 = (char *)this + 1780;
  v3 = (char *)this + 948;
  *(_DWORD *)this = &off_27037E8;
  do
  {
    v6 = *((_DWORD *)v2 - 2);
    v2 -= 32;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  while ( v2 != v3 );
  *(_DWORD *)v1 = &off_270313C;
    v10 = *((_DWORD *)v3 - 2);
    v3 -= 32;
    v11 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  while ( v3 != (char *)v1 + 116 );
  Item::~Item(v1);
  return v1;
}


signed int __fastcall SplashPotionItem::isThrowable(SplashPotionItem *this)
{
  return 1;
}


signed int __fastcall SplashPotionItem::getPotionType(SplashPotionItem *this)
{
  return 1;
}


int __fastcall SplashPotionItem::setIcon(int a1, int **a2, int a3)
{
  char *v3; // r4@1
  int v4; // r9@1
  unsigned int *v5; // r2@2
  signed int v6; // r1@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  char *v9; // r1@18
  int v10; // r2@18
  int v11; // r3@18
  int v12; // r4@18
  int v13; // r5@18
  int v14; // r6@18
  int v15; // r7@18
  int v16; // r8@18
  int v17; // r0@18
  void *v18; // r0@18
  void *v19; // r0@19
  int v21; // [sp+Ch] [bp-54h]@1
  int v22; // [sp+14h] [bp-4Ch]@6
  char v23; // [sp+18h] [bp-48h]@1
  int v24; // [sp+30h] [bp-30h]@2
  int v25; // [sp+34h] [bp-2Ch]@18

  v21 = a1;
  Item::setIcon(a1, a2, a3);
  v3 = &v23;
  v4 = 0;
  do
  {
    sub_21E94B4((void **)&v22, "potion_bottle_splash");
    Item::getTextureUVCoordinateSet((TextureUVCoordinateSet *)v3, (int **)&v22, v4);
    v9 = v3;
    v10 = *(_DWORD *)v3;
    v11 = *((_DWORD *)v3 + 1);
    v12 = *((_DWORD *)v3 + 2);
    v13 = *((_DWORD *)v9 + 3);
    v14 = *((_DWORD *)v9 + 4);
    v15 = *((_DWORD *)v9 + 5);
    v16 = v21 + 32 * v4;
    v17 = v16 + 948;
    *(_DWORD *)v17 = v10;
    *(_DWORD *)(v17 + 4) = v11;
    *(_DWORD *)(v17 + 8) = v12;
    *(_DWORD *)(v17 + 12) = v13;
    *(_DWORD *)(v17 + 16) = v14;
    *(_DWORD *)(v17 + 20) = v15;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v16 + 972),
      &v24);
    *(_DWORD *)(v16 + 976) = v25;
    v18 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    }
    v3 = &v23;
    v19 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v22 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    ++v4;
  }
  while ( v4 < 26 );
  return v21;
}


int __fastcall SplashPotionItem::SplashPotionItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r9@1

  v3 = a1;
  PotionItem::PotionItem(a1, a2, a3);
  *(_DWORD *)v3 = &off_27037E8;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 948));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 980));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1012));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1044));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1076));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1108));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1140));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1172));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1204));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1236));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1268));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1300));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1332));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1364));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1396));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1428));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1460));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1492));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1524));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1556));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1588));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1620));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1652));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1684));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1716));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1748));
  return v3;
}


int __fastcall SplashPotionItem::getIcon(SplashPotionItem *this, int a2, int a3, bool a4)
{
  SplashPotionItem *v4; // r4@1
  int v5; // r0@2
  int v6; // r5@4
  int v7; // r4@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r6@11
  unsigned int v11; // r0@13
  Potion *v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@4

  v4 = this;
  Potion::getPotion((Potion *)&v13, a2);
  if ( v13 )
    v5 = Potion::getMobEffectId(v13);
  else
    v5 = 0;
  v6 = v14;
  v7 = (int)v4 + 32 * v5 + 948;
  if ( v14 )
  {
    v8 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  return v7;
}


void __fastcall SplashPotionItem::buildDescriptionId(SplashPotionItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  SplashPotionItem::buildDescriptionId(this, a2, a3);
}


void __fastcall SplashPotionItem::~SplashPotionItem(SplashPotionItem *this)
{
  SplashPotionItem *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // r1@21
  void *v11; // r0@21

  v1 = this;
  v2 = (char *)this + 1780;
  v3 = (char *)this + 948;
  *(_DWORD *)this = &off_27037E8;
  do
  {
    v6 = *((_DWORD *)v2 - 2);
    v2 -= 32;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  while ( v2 != v3 );
  *(_DWORD *)v1 = &off_270313C;
    v10 = *((_DWORD *)v3 - 2);
    v3 -= 32;
    v11 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  while ( v3 != (char *)v1 + 116 );
  Item::~Item(v1);
  operator delete((void *)v1);
}


signed int __fastcall SplashPotionItem::dispense(SplashPotionItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  PotionItem *v6; // r8@1
  BlockSource *v7; // r4@1
  int v8; // r9@1
  Container *v9; // r6@1
  Level *v17; // r0@1
  Spawner *v18; // r5@1
  Entity *v19; // r7@1
  void *v20; // r0@1
  void *v21; // r0@2
  void *v22; // r0@3
  signed int v23; // r5@4
  const ItemInstance *v24; // r0@5
  Player *v25; // r0@5
  int v26; // r2@5
  int v27; // r3@5
  __int64 v28; // r2@5
  unsigned int *v30; // r2@7
  signed int v31; // r1@9
  unsigned int *v32; // r2@11
  signed int v33; // r1@13
  unsigned int *v34; // r2@15
  signed int v35; // r1@17
  int v36; // [sp+8h] [bp-48h]@5
  int v37; // [sp+Ch] [bp-44h]@5
  int v38; // [sp+10h] [bp-40h]@5
  int v39; // [sp+14h] [bp-3Ch]@1
  int v40; // [sp+18h] [bp-38h]@2
  int v41; // [sp+1Ch] [bp-34h]@1
  float v42; // [sp+20h] [bp-30h]@1

  v6 = this;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  _R0 = &Facing::STEP_Y[a6];
  __asm
  {
    VLDR            S2, =0.1
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
    VSTR            S4, [SP,#0x50+var_30]
    VSTR            S0, [SP,#0x50+var_2C]
    VSTR            S2, [SP,#0x50+var_28]
  v17 = (Level *)BlockSource::getLevel(a2);
  v18 = (Spawner *)Level::getSpawner(v17);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v39, 4194390);
  v19 = Spawner::spawnProjectile(v18, v7, (const EntityDefinitionIdentifier *)&v39, 0, a5, (const Vec3 *)&v42);
  v20 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v41 - 4);
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
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v39 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = 0;
  if ( v19 )
    v24 = (const ItemInstance *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)v9 + 16))(v9, v8);
    PotionItem::applyEffect(v6, v19, v24);
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v9 + 36))(v9, v8, 1);
    v25 = (Player *)BlockSource::getLevel(v7);
    v26 = *((_DWORD *)a5 + 1);
    v27 = *((_DWORD *)a5 + 2);
    v36 = *(_DWORD *)a5;
    v37 = v26;
    v38 = v27;
    HIDWORD(v28) = 78642;
    LODWORD(v28) = &v36;
    Level::broadcastLevelEvent(v25, 1002, v28, 0);
    v23 = 1;
  return v23;
}


void __fastcall SplashPotionItem::~SplashPotionItem(SplashPotionItem *this)
{
  SplashPotionItem::~SplashPotionItem(this);
}
