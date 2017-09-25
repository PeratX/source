

int __fastcall FireworksItem::_useOn(int a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8)
{
  Entity *v8; // r5@1
  ItemInstance *v9; // r4@1
  Level *v11; // r0@2
  void *v16; // r0@3
  void *v17; // r0@4
  void *v18; // r0@5
  int v19; // r6@6
  Level *v20; // r0@6
  int v21; // r6@6
  void (__fastcall *v22)(int, int, int *); // r7@6
  int v23; // r1@6
  int v24; // r0@6
  int result; // r0@12
  unsigned int *v26; // r2@14
  signed int v27; // r1@16
  unsigned int *v28; // r2@18
  signed int v29; // r1@20
  unsigned int *v30; // r2@22
  signed int v31; // r1@24
  int v32; // [sp+4h] [bp-5Ch]@0
  int v33; // [sp+14h] [bp-4Ch]@6
  int v34; // [sp+18h] [bp-48h]@6
  signed int v35; // [sp+1Ch] [bp-44h]@6
  int v36; // [sp+20h] [bp-40h]@6
  char v37; // [sp+24h] [bp-3Ch]@3
  int v38; // [sp+2Ch] [bp-34h]@3
  int v39; // [sp+30h] [bp-30h]@4
  int v40; // [sp+34h] [bp-2Ch]@3
  int v41; // [sp+38h] [bp-28h]@3
  float v42; // [sp+3Ch] [bp-24h]@3

  v8 = (Entity *)LODWORD(a3);
  v9 = (ItemInstance *)LODWORD(a2);
  _R6 = a4;
  if ( EntityClassTree::isInstanceOf(SLODWORD(a3), 319) == 1 )
  {
    v11 = (Level *)Entity::getLevel(v8);
    if ( !Level::isClientSide(v11) )
    {
      __asm
      {
        VLDR            S6, [R6]
        VLDR            S8, [R6,#4]
        VLDR            S10, [R6,#8]
        VCVT.F32.S32    S6, S6
        VCVT.F32.S32    S8, S8
        VLDR            S2, [SP,#0x60+arg_8]
        VCVT.F32.S32    S10, S10
        VLDR            S0, [SP,#0x60+arg_C]
        VLDR            S4, [SP,#0x60+arg_4]
        VADD.F32        S4, S6, S4
        VADD.F32        S2, S8, S2
        VADD.F32        S0, S10, S0
        VSTR            S4, [SP,#0x60+var_24]
        VSTR            S2, [SP,#0x60+var_20]
        VSTR            S0, [SP,#0x60+var_1C]
      }
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v38, 72);
      Entity::getRotation((Entity *)&v37, (int)v8);
      EntityFactory::createSpawnedEntity((Entity **)&v41, (const void **)&v38, (int)v8, (int)&v42, &v37);
      v16 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v40 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        }
        else
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v39 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v38 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = v41;
      v20 = (Level *)Entity::getLevel(v8);
      v34 = 0;
      v35 = 1065353216;
      v36 = 0;
      FireworksRocketEntity::init(v19, v20, (int)&v42, v9, (int)&v34, v32, -1LL);
      v21 = Entity::getLevel(v8);
      v22 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v21 + 48);
      v23 = Entity::getRegion(v8);
      v24 = v41;
      v41 = 0;
      v33 = v24;
      v22(v21, v23, &v33);
      if ( v33 )
        (*(void (**)(void))(*(_DWORD *)v33 + 32))();
      v33 = 0;
      if ( !Abilities::getBool((int)v8 + 4320, (int **)&Abilities::INSTABUILD) )
        ItemInstance::remove(v9, 1);
      if ( v41 )
        (*(void (**)(void))(*(_DWORD *)v41 + 32))();
    }
    MinecraftEventing::fireEventItemUsed((int)v8, v9, 6);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall FireworksItem::~FireworksItem(FireworksItem *this)
{
  FireworksItem::~FireworksItem(this);
}


int __fastcall FireworksItem::initFireworksRocketItem(int a1, unsigned __int64 *a2, char a3)
{
  int v3; // r5@1
  char v4; // r8@1
  unsigned __int64 *v5; // r6@1
  void *v6; // r4@1
  void *v7; // r7@1
  void *v8; // r11@1
  char v9; // r7@1
  int i; // r4@1
  int v11; // r9@1
  int *v12; // r8@5
  int v13; // r0@6
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@1
  int v17; // [sp+Ch] [bp-34h]@14
  int v18; // [sp+10h] [bp-30h]@12
  void *v19; // [sp+14h] [bp-2Ch]@10
  int v20; // [sp+18h] [bp-28h]@6

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v6);
  v7 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v7);
  v8 = operator new(0x14u);
  v15 = (int)v7;
  v9 = v4;
  v16 = (int)v6;
  ListTag::ListTag((int)v8);
  v11 = *v5 >> 32;
  for ( i = *v5; v11 != i; i += 72 )
  {
    if ( *(_BYTE *)(i + 15) )
    {
      if ( ItemInstance::getId((ItemInstance *)i) == *(_WORD *)(Item::mFireworkCharge + 18)
        && ItemInstance::hasUserData((ItemInstance *)i) == 1 )
      {
        v12 = (int *)ItemInstance::getUserData((ItemInstance *)i);
        if ( CompoundTag::contains(*v12, (const void **)&FireworkChargeItem::TAG_EXPLOSION) == 1 )
        {
          v13 = CompoundTag::getCompound(*v12, (const void **)&FireworkChargeItem::TAG_EXPLOSION);
          (*(void (__fastcall **)(int *))(*(_DWORD *)v13 + 48))(&v20);
          ListTag::add((int)v8, &v20);
          if ( v20 )
            (*(void (**)(void))(*(_DWORD *)v20 + 4))();
          v20 = 0;
        }
      }
    }
  }
  v19 = v8;
  CompoundTag::put(v15, (const void **)&FireworksItem::TAG_EXPLOSIONS, (int *)&v19);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  CompoundTag::putByte(v15, (const void **)&FireworksItem::TAG_E_FLIGHT, v9);
  v18 = v15;
  CompoundTag::put(v16, (const void **)&FireworksItem::TAG_FIREWORKS, &v18);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v17 = v16;
  v18 = 0;
  ItemInstance::setUserData(v3, &v17);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  return v3;
}


signed int __fastcall FireworksItem::appendFormattedHovertext(int a1, ItemInstance *a2, int a3, const void **a4)
{
  const void **v4; // r8@1
  ItemInstance *v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@2
  signed int result; // r0@3
  int *v9; // r0@4
  int v10; // r5@4
  const void **v11; // r0@5
  const void **v12; // r0@5
  int v13; // r0@5
  __int64 v14; // kr00_8@5
  unsigned int v15; // r1@5
  const void **v16; // r0@7
  char *v17; // r0@9
  void *v18; // r0@10
  void *v19; // r0@11
  char *v20; // r0@12
  void *v21; // r0@13
  void *v22; // r0@14
  ListTag *v23; // r0@16
  ListTag *v24; // r5@16
  signed int v25; // r6@17
  unsigned int *v26; // r2@18
  signed int v27; // r1@20
  int v28; // r7@26
  void *v29; // r0@26
  unsigned int *v30; // r2@29
  signed int v31; // r1@31
  unsigned int *v32; // r2@33
  signed int v33; // r1@35
  unsigned int *v34; // r2@45
  signed int v35; // r1@47
  unsigned int *v36; // r2@49
  signed int v37; // r1@51
  unsigned int *v38; // r2@53
  signed int v39; // r1@55
  unsigned int *v40; // r2@57
  signed int v41; // r1@59
  unsigned int *v42; // r2@61
  signed int v43; // r1@63
  unsigned int *v44; // r2@65
  signed int v45; // r1@67
  int v46; // [sp+Ch] [bp-54h]@18
  int v47; // [sp+10h] [bp-50h]@5
  int v48; // [sp+18h] [bp-48h]@5
  int v49; // [sp+1Ch] [bp-44h]@5
  char *v50; // [sp+20h] [bp-40h]@5
  unsigned int v51; // [sp+24h] [bp-3Ch]@5
  char *v52; // [sp+28h] [bp-38h]@9
  int v53; // [sp+30h] [bp-30h]@1
  int v54; // [sp+34h] [bp-2Ch]@1

  v4 = a4;
  v5 = a2;
  sub_21E7EE0(a4, 0, *((_BYTE **)*a4 - 3), 0);
  sub_21E94B4((void **)&v53, "item.fireworks.name");
  I18n::get(&v54, (int **)&v53);
  sub_21E72F0(v4, (const void **)&v54);
  v6 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v54 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v53 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  result = ItemInstance::hasUserData(v5);
  if ( result == 1 )
    v9 = (int *)ItemInstance::getUserData(v5);
    v10 = CompoundTag::getCompound(*v9, (const void **)&FireworksItem::TAG_FIREWORKS);
    if ( CompoundTag::contains(v10, (const void **)&FireworksItem::TAG_E_FLIGHT) == 1 )
      sub_21E94B4((void **)&v48, "item.fireworks.flight");
      I18n::get(&v49, (int **)&v48);
      v11 = sub_21E82D8((const void **)&v49, 0, (unsigned int)"\n", (_BYTE *)1);
      v50 = (char *)*v11;
      *v11 = &unk_28898CC;
      v12 = sub_21E7408((const void **)&v50, " ", 1u);
      v51 = (unsigned int)*v12;
      *v12 = &unk_28898CC;
      v13 = CompoundTag::getByte(v10, (const void **)&FireworksItem::TAG_E_FLIGHT);
      Util::toString<unsigned char,(void *)0,(void *)0>((void **)&v47, v13);
      v14 = *(_QWORD *)(v51 - 12);
      v15 = *(_DWORD *)(v47 - 12) + v14;
      if ( v15 > HIDWORD(v14) && v15 <= *(_DWORD *)(v47 - 8) )
        v16 = sub_21E82D8((const void **)&v47, 0, v51, (_BYTE *)v14);
      else
        v16 = sub_21E72F0((const void **)&v51, (const void **)&v47);
      v52 = (char *)*v16;
      *v16 = &unk_28898CC;
      sub_21E72F0(v4, (const void **)&v52);
      v17 = v52 - 12;
      if ( (int *)(v52 - 12) != &dword_28898C0 )
      {
        v34 = (unsigned int *)(v52 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
        }
        else
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      }
      v18 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v47 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v51 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = v50 - 12;
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v50 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v49 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v48 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
    result = CompoundTag::contains(v10, (const void **)&FireworksItem::TAG_EXPLOSIONS);
    if ( result == 1 )
      v23 = (ListTag *)CompoundTag::getList(v10, (const void **)&FireworksItem::TAG_EXPLOSIONS);
      v24 = v23;
      result = ListTag::size(v23);
      if ( result >= 1 )
        v25 = 0;
        do
          v28 = ListTag::getCompound(v24, v25);
          sub_21E94B4((void **)&v46, "  ");
          FireworkChargeItem::getFormattedHoverText(v28, v4, (const void **)&v46);
          v29 = (void *)(v46 - 12);
          if ( (int *)(v46 - 12) != &dword_28898C0 )
          {
            v26 = (unsigned int *)(v46 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
            }
            else
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          }
          ++v25;
          result = ListTag::size(v24);
        while ( v25 < result );
  return result;
}


ItemInstance *__fastcall FireworksItem::use(FireworksItem *this, ItemInstance *a2, Player *a3)
{
  Entity *v3; // r5@1
  ItemInstance *v4; // r4@1
  Level *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  int v9; // r7@6
  Level *v10; // r6@6
  __int64 *v11; // r0@6
  int v12; // r6@6
  void (__fastcall *v13)(int, int, int *); // r7@6
  int v14; // r1@6
  int v15; // r0@6
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  int v23; // [sp+4h] [bp-54h]@0
  int v24; // [sp+14h] [bp-44h]@6
  int v25; // [sp+18h] [bp-40h]@6
  int v26; // [sp+1Ch] [bp-3Ch]@6
  int v27; // [sp+20h] [bp-38h]@6
  char v28; // [sp+24h] [bp-34h]@3
  int v29; // [sp+2Ch] [bp-2Ch]@3
  int v30; // [sp+30h] [bp-28h]@4
  int v31; // [sp+34h] [bp-24h]@3
  int v32; // [sp+38h] [bp-20h]@3

  v3 = a3;
  v4 = a2;
  if ( Mob::isGliding(a3) == 1 )
  {
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 928))(v3);
    v5 = (Level *)Entity::getLevel(v3);
    if ( !Level::isClientSide(v5) )
    {
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v29, 72);
      Entity::getRotation((Entity *)&v28, (int)v3);
      EntityFactory::createSpawnedEntity((Entity **)&v32, (const void **)&v29, (int)v3, (int)v3 + 72, &v28);
      v6 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
      {
        v17 = (unsigned int *)(v31 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
      v7 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v30 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      v8 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v29 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      v9 = v32;
      v10 = (Level *)Entity::getLevel(v3);
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v11 = (__int64 *)Entity::getUniqueID(v3);
      FireworksRocketEntity::init(v9, v10, (int)v3 + 72, v4, (int)&v25, v23, *v11);
      v12 = Entity::getLevel(v3);
      v13 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v12 + 48);
      v14 = Entity::getRegion(v3);
      v15 = v32;
      v32 = 0;
      v24 = v15;
      v13(v12, v14, &v24);
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 32))();
      v24 = 0;
      if ( !Abilities::getBool((int)v3 + 4320, (int **)&Abilities::INSTABUILD) )
        ItemInstance::remove(v4, 1);
      if ( v32 )
        (*(void (**)(void))(*(_DWORD *)v32 + 32))();
    }
  }
  return v4;
}


void __fastcall FireworksItem::~FireworksItem(FireworksItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall FireworksItem::FireworksItem(int a1, const void **a2, __int16 a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Item::Item(a1, a2, a3);
  *result = &off_2701978;
  return result;
}


signed int __fastcall FireworksItem::dispense(FireworksItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  Container *v6; // r5@1
  int v7; // r9@1
  BlockSource *v8; // r6@1
  ItemInstance *v9; // r7@1
  void *v18; // r0@1
  void *v19; // r0@2
  void *v20; // r0@3
  FireworksRocketEntity *v21; // r4@4
  Level *v22; // r0@5
  int v23; // r0@5
  int v24; // r2@5
  int (*v25)(void); // r3@5
  Player *v33; // r0@10
  signed int result; // r0@13
  unsigned int *v35; // r2@16
  signed int v36; // r1@18
  unsigned int *v37; // r2@20
  signed int v38; // r1@22
  unsigned int *v39; // r2@24
  signed int v40; // r1@26
  int v41; // [sp+4h] [bp-84h]@0
  float v42; // [sp+10h] [bp-78h]@10
  int v43; // [sp+1Ch] [bp-6Ch]@5
  int v44; // [sp+20h] [bp-68h]@1
  int v45; // [sp+24h] [bp-64h]@2
  int v46; // [sp+28h] [bp-60h]@1
  FireworksRocketEntity *v47; // [sp+2Ch] [bp-5Ch]@1
  float v48; // [sp+30h] [bp-58h]@5

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (ItemInstance *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)a3 + 16))(a3, a4);
  _R1 = &Facing::STEP_X[a6];
  _R0 = &Facing::STEP_Z[a6];
  __asm { VLDR            S0, [R1] }
  _R1 = &Facing::STEP_Y[a6];
  __asm
  {
    VLDR            S4, [R0]
    VLDR            S2, [R1]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSTR            S0, [SP,#0x88+var_58]
    VSTR            S2, [SP,#0x88+var_54]
    VSTR            S4, [SP,#0x88+var_50]
  }
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v44, 72);
  _R8 = a5;
  EntityFactory::createSpawnedEntity(&v47, (const void **)&v44, 0, (int)a5, &Vec2::ZERO);
  v18 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v45 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v44 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = v47;
  if ( v47 )
    v22 = (Level *)BlockSource::getLevel(v8);
    FireworksRocketEntity::init((int)v21, v22, (int)a5, v9, (int)&v48, v41, -1LL);
    FireworksRocketEntity::setDispensed(v21, 1);
    v23 = BlockSource::getLevel(v8);
    v24 = (int)v47;
    v25 = *(int (**)(void))(*(_DWORD *)v23 + 48);
    v47 = 0;
    v43 = v24;
    _R7 = v25();
    if ( v43 )
      (*(void (**)(void))(*(_DWORD *)v43 + 32))();
    v43 = 0;
    if ( _R7 )
      __asm
      {
        VLDR            S16, [SP,#0x88+var_58]
        VLDR            S0, [R8]
        VLDR            S18, [SP,#0x88+var_54]
        VSUB.F32        S0, S0, S16
        VLDR            S2, [R8,#4]
        VLDR            S20, [SP,#0x88+var_50]
        VLDR            S4, [R8,#8]
        VSUB.F32        S22, S2, S18
        VSUB.F32        S24, S4, S20
        VMOV            R0, S0
      }
      _R4 = floorf(_R0);
      __asm { VMOV            R0, S22 }
      _R0 = floorf(_R0);
        VMOV            R1, S24
        VMOV            S22, R0
        VMOV            S24, R4
      _R0 = floorf(_R1);
        VMOV.F32        S2, #0.5
        VLDR            S6, [R7,#0x130]
        VLDR            S8, [R7,#0x134]
        VMUL.F32        S4, S18, S2
        VMUL.F32        S0, S16, S2
        VMUL.F32        S10, S20, S2
        VMUL.F32        S6, S6, S2
        VADD.F32        S4, S4, S2
        VADD.F32        S12, S0, S2
        VMUL.F32        S0, S8, S2
        VADD.F32        S2, S10, S2
        VMOV            S10, R0
        VMUL.F32        S8, S16, S6
        VMUL.F32        S6, S20, S6
        VADD.F32        S4, S4, S22
        VADD.F32        S12, S12, S24
        VMUL.F32        S14, S18, S0
        VADD.F32        S10, S2, S10
        VADD.F32        S8, S12, S8
        VADD.F32        S2, S4, S14
        VADD.F32        S4, S10, S6
        VSTR            S8, [SP,#0x88+var_78]
        VSTR            S2, [SP,#0x88+var_74]
        VSTR            S4, [SP,#0x88+var_70]
      if ( !(!_ZF & _CF) )
        __asm
        {
          VSUBLS.F32      S0, S2, S0
          VSTRLS          S0, [SP,#0x88+var_74]
        }
      Entity::moveTo(_R7, (int)&v42);
      v33 = (Player *)BlockSource::getLevel(v8);
      Level::broadcastLevelEvent(v33, 1000, __PAIR__(1000, (unsigned int)a5), 0);
      (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v6 + 36))(v6, v7, 1);
    if ( v47 )
      (*(void (**)(void))(*(_DWORD *)v47 + 32))();
    result = 1;
  else
    result = 0;
  return result;
}
