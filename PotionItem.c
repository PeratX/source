

ItemInstance *__fastcall PotionItem::use(PotionItem *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v3; // r4@1

  v3 = a2;
  Player::startUsingItem(a3, a2, *((_DWORD *)this + 9));
  return v3;
}


_BOOL4 __fastcall PotionItem::isValidAuxValue(PotionItem *this, int a2)
{
  __int64 v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  Potion::getPotion((Potion *)&v8, a2);
  v2 = *(_QWORD *)&v8;
  if ( v9 )
  {
    v3 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  }
  return v2 != 0;
}


void __fastcall PotionItem::buildDescriptionId(PotionItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  PotionItem::buildDescriptionId(this, a2, a3);
}


int __fastcall PotionItem::getPotionType(PotionItem *this)
{
  return 0;
}


int __fastcall PotionItem::useTimeDepleted(PotionItem *this, ItemInstance *a2, Level *a3, Player *a4)
{
  Player *v4; // r4@1
  ItemInstance *v5; // r5@1
  int v6; // r0@2
  char *v7; // r0@4
  int v8; // r6@5
  unsigned int *v9; // r1@6
  unsigned int v10; // r0@8
  unsigned int *v11; // r7@12
  unsigned int v12; // r0@14
  PlayerInventoryProxy *v13; // r0@19
  int result; // r0@27
  int v15; // [sp+0h] [bp-68h]@19
  int v16; // [sp+8h] [bp-60h]@27
  void *v17; // [sp+24h] [bp-44h]@25
  void *ptr; // [sp+34h] [bp-34h]@23
  Potion *v19; // [sp+4Ch] [bp-1Ch]@2
  int v20; // [sp+50h] [bp-18h]@5

  v4 = a4;
  v5 = a2;
  if ( !Level::isClientSide(a3) )
  {
    v6 = ItemInstance::getAuxValue(v5);
    Potion::getPotion((Potion *)&v19, v6);
    if ( v19 && Potion::getMobEffectId(v19) >= 1 )
    {
      v7 = Potion::getMobEffect(v19);
      Mob::addEffect(v4, (const MobEffectInstance *)v7);
    }
    v8 = v20;
    if ( v20 )
      v9 = (unsigned int *)(v20 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  MinecraftEventing::fireEventItemUsed((int)v4, v5, 3);
  (*(void (__fastcall **)(Player *, ItemInstance *))(*(_DWORD *)v4 + 612))(v4, v5);
  ItemInstance::ItemInstance((ItemInstance *)&v15, Item::mGlass_bottle);
  v13 = (PlayerInventoryProxy *)Player::getSupplies(v4);
  if ( !PlayerInventoryProxy::add(v13, (ItemInstance *)&v15, 1) )
    if ( *((_BYTE *)v5 + 14) )
      (*(void (__fastcall **)(Player *, int *, _DWORD))(*(_DWORD *)v4 + 664))(v4, &v15, 0);
    else
      ItemInstance::operator=((int)v5, (int)&v15);
  if ( ptr )
    operator delete(ptr);
  if ( v17 )
    operator delete(v17);
  result = v16;
  if ( v16 )
    result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
  return result;
}


void __fastcall PotionItem::buildEffectDescriptionName(PotionItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ItemInstance *v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  int v6; // r2@2
  int v7; // r1@6
  bool v8; // zf@6
  const void **v9; // r0@7
  const void **v10; // r0@7
  char *v11; // r0@7
  char *v12; // r0@8
  void *v13; // r0@9
  int v14; // r4@10
  unsigned int *v15; // r1@11
  unsigned int v16; // r0@13
  unsigned int *v17; // r5@17
  unsigned int v18; // r0@19
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  int v25; // [sp+0h] [bp-28h]@7
  char *v26; // [sp+4h] [bp-24h]@7
  char *v27; // [sp+8h] [bp-20h]@7
  int v28; // [sp+Ch] [bp-1Ch]@1
  int v29; // [sp+10h] [bp-18h]@10

  v3 = a3;
  v4 = (int *)this;
  v5 = ItemInstance::getAuxValue(a3);
  Potion::getPotion((Potion *)&v28, v5);
  if ( *(_DWORD *)v3 == Item::mSplash_potion )
  {
    v6 = 1;
  }
  else
    v6 = 0;
    if ( *(_DWORD *)v3 == Item::mLingering_potion )
      v6 = 2;
  v7 = v28;
  v8 = v28 == 0;
  *v4 = (int)&unk_28898CC;
  if ( !v8 )
    Potion::getPotentencyDescription(&v25, v7, v6, 1065353216);
    v9 = sub_21E82D8((const void **)&v25, 0, dword_28084C4, *(_BYTE **)(dword_28084C4 - 12));
    v26 = (char *)*v9;
    *v9 = &unk_28898CC;
    v10 = sub_21E72F0((const void **)&v26, (const void **)&algn_28084C8[44]);
    v27 = (char *)*v10;
    *v10 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v4,
      (int *)&v27);
    v11 = v27 - 12;
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
        j_j_j_j__ZdlPv_9(v11);
    }
    v12 = v26 - 12;
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v26 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v25 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  v14 = v29;
  if ( v29 )
    v15 = (unsigned int *)(v29 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
}


int __fastcall PotionItem::PotionItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_270313C;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 116));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 148));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 180));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 212));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 244));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 276));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 308));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 340));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 372));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 404));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 436));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 468));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 500));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 532));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 564));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 596));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 628));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 660));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 692));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 724));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 756));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 788));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 820));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 852));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 884));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 916));
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 16))(v3, 1);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 28))(v3, 0);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 24))(v3, 1);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 36))(v3, 2);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 40))(v3, 32);
  return v3;
}


void __fastcall PotionItem::buildEffectDescriptionName(PotionItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  PotionItem::buildEffectDescriptionName(this, a2, a3);
}


void __fastcall PotionItem::applyEffect(PotionItem *this, ThrownPotion *a2, const ItemInstance *a3)
{
  PotionItem::applyEffect(this, a2, a3);
}


int __fastcall PotionItem::setIcon(int a1, int **a2, int a3)
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
    sub_21E94B4((void **)&v22, "potion_bottle_drinkable");
    Item::getTextureUVCoordinateSet((TextureUVCoordinateSet *)v3, (int **)&v22, v4);
    v9 = v3;
    v10 = *(_DWORD *)v3;
    v11 = *((_DWORD *)v3 + 1);
    v12 = *((_DWORD *)v3 + 2);
    v13 = *((_DWORD *)v9 + 3);
    v14 = *((_DWORD *)v9 + 4);
    v15 = *((_DWORD *)v9 + 5);
    v16 = v21 + 32 * v4;
    v17 = v16 + 116;
    *(_DWORD *)v17 = v10;
    *(_DWORD *)(v17 + 4) = v11;
    *(_DWORD *)(v17 + 8) = v12;
    *(_DWORD *)(v17 + 12) = v13;
    *(_DWORD *)(v17 + 16) = v14;
    *(_DWORD *)(v17 + 20) = v15;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v16 + 140),
      &v24);
    *(_DWORD *)(v16 + 144) = v25;
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


void __fastcall PotionItem::applyEffect(PotionItem *this, ThrownPotion *a2, const ItemInstance *a3)
{
  ThrownPotion *v3; // r4@1
  const ItemInstance *v4; // r5@1
  bool v5; // zf@2
  void (__fastcall *v6)(ThrownPotion *, int); // r6@7
  int v7; // r1@7

  v3 = a2;
  v4 = a3;
  if ( a2 )
  {
    v5 = *((_BYTE *)a3 + 15) == 0;
    if ( *((_BYTE *)a3 + 15) )
      v5 = *(_DWORD *)a3 == 0;
    if ( !v5 && !ItemInstance::isNull(a3) )
    {
      if ( *((_BYTE *)v4 + 14) )
      {
        v6 = *(void (__fastcall **)(ThrownPotion *, int))(*(_DWORD *)v3 + 676);
        v7 = ItemInstance::getAuxValue(v4);
        v6(v3, v7);
      }
    }
  }
}


signed int __fastcall PotionItem::uniqueAuxValues(PotionItem *this)
{
  return 1;
}


void __fastcall PotionItem::buildDescriptionId(PotionItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  void **v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r6@2
  int v7; // r5@2
  unsigned int *v8; // r0@4
  unsigned int v9; // r1@6
  unsigned int *v10; // r1@10
  unsigned int v11; // r0@12
  unsigned int *v12; // r7@16
  unsigned int v13; // r0@18
  unsigned int *v14; // r1@25
  unsigned int v15; // r0@27
  unsigned int *v16; // r6@31
  unsigned int v17; // r0@33
  int v18; // r4@40
  unsigned int *v19; // r1@41
  unsigned int v20; // r0@43
  unsigned int *v21; // r5@47
  unsigned int v22; // r0@49
  int v23; // [sp+4h] [bp-24h]@2
  int v24; // [sp+8h] [bp-20h]@2
  int v25; // [sp+Ch] [bp-1Ch]@1
  int v26; // [sp+10h] [bp-18h]@2

  v3 = (void **)this;
  v4 = ItemInstance::getAuxValue(a3);
  Potion::getPotion((Potion *)&v25, v4);
  v5 = v25;
  if ( v25 )
    goto LABEL_58;
  Potion::getPotion((Potion *)&v23, 0);
  v25 = v23;
  v6 = v26;
  v7 = v24;
  if ( v24 != v26 )
  {
    if ( v24 )
    {
      v8 = (unsigned int *)(v24 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        v6 = v26;
      }
      else
        ++*v8;
    }
    if ( v6 )
      v10 = (unsigned int *)(v6 + 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        v12 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    v26 = v7;
    v7 = v24;
  }
  if ( v7 )
    v14 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
LABEL_58:
    Potion::getDescriptionId(v3, v5, 0);
  else
    sub_21E8AF4((int *)v3, (int *)&Util::EMPTY_STRING);
  v18 = v26;
  if ( v26 )
    v19 = (unsigned int *)(v26 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
}


Item *__fastcall PotionItem::~PotionItem(PotionItem *this)
{
  Item *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10

  v1 = this;
  v2 = (char *)this + 948;
  *(_DWORD *)this = &off_270313C;
  v3 = (char *)this + 116;
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
  Item::~Item(v1);
  return v1;
}


void __fastcall PotionItem::~PotionItem(PotionItem *this)
{
  Item *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10

  v1 = this;
  v2 = (char *)this + 948;
  *(_DWORD *)this = &off_270313C;
  v3 = (char *)this + 116;
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
  Item::~Item(v1);
  operator delete((void *)v1);
}


void __fastcall PotionItem::~PotionItem(PotionItem *this)
{
  PotionItem::~PotionItem(this);
}


int __fastcall PotionItem::getIcon(PotionItem *this, int a2, int a3, bool a4)
{
  PotionItem *v4; // r4@1
  int v5; // r4@2
  int v6; // r5@4
  unsigned int *v7; // r1@5
  unsigned int v8; // r0@7
  unsigned int *v9; // r6@11
  unsigned int v10; // r0@13
  Potion *v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@4

  v4 = this;
  Potion::getPotion((Potion *)&v12, a2);
  if ( v12 )
    v5 = (int)v4 + 32 * Potion::getMobEffectId(v12) + 116;
  else
    v5 = (int)v4 + 116;
  v6 = v13;
  if ( v13 )
  {
    v7 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  return v5;
}


int __fastcall PotionItem::getEffectId(PotionItem *this, const ItemInstance *a2)
{
  int v2; // r0@1
  int v3; // r4@2
  int v4; // r5@4
  unsigned int *v5; // r1@5
  unsigned int v6; // r0@7
  unsigned int *v7; // r6@11
  unsigned int v8; // r0@13
  Potion *v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@4

  v2 = ItemInstance::getAuxValue(a2);
  Potion::getPotion((Potion *)&v10, v2);
  if ( v10 )
    v3 = Potion::getMobEffectId(v10);
  else
    v3 = 0;
  v4 = v11;
  if ( v11 )
  {
    v5 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  return v3;
}


signed int __fastcall PotionItem::isGlint(PotionItem *this, const ItemInstance *a2)
{
  int v2; // r0@1
  signed int v3; // r1@1

  v2 = PotionItem::getEffectId(this, a2);
  v3 = 0;
  if ( v2 > 0 )
    v3 = 1;
  return v3;
}
