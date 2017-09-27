

void __fastcall BrewingStandBlockEntity::load(BrewingStandBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  BrewingStandBlockEntity *v3; // r4@1
  ListTag *v4; // r6@1
  void *v5; // r0@1
  int v6; // r11@4
  int *v7; // r4@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  const CompoundTag *v10; // r8@13
  unsigned int v11; // r10@14
  void *v12; // r0@14
  void (__fastcall *v13)(BrewingStandBlockEntity *, unsigned int, char *); // ST14_4@16
  void *v14; // r0@24
  void *v15; // r0@25
  void *v16; // r0@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  unsigned int *v19; // r2@32
  signed int v20; // r1@34
  unsigned int *v21; // r2@36
  signed int v22; // r1@38
  unsigned int *v23; // r2@40
  signed int v24; // r1@42
  int v25; // [sp+8h] [bp-A8h]@2
  BrewingStandBlockEntity *v26; // [sp+10h] [bp-A0h]@1
  int v27; // [sp+1Ch] [bp-94h]@26
  int v28; // [sp+24h] [bp-8Ch]@25
  int v29; // [sp+2Ch] [bp-84h]@24
  char v30; // [sp+30h] [bp-80h]@16
  int v31; // [sp+38h] [bp-78h]@20
  void *v32; // [sp+54h] [bp-5Ch]@18
  void *ptr; // [sp+64h] [bp-4Ch]@16
  int v34; // [sp+7Ch] [bp-34h]@5
  int v35; // [sp+84h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  (*(void (__fastcall **)(BrewingStandBlockEntity *, _DWORD, void *))(*(_DWORD *)v3 + 120))(
    v3,
    0,
    &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(BrewingStandBlockEntity *, signed int, void *))(*(_DWORD *)v3 + 120))(
    1,
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 2, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 3, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 4, &ItemInstance::EMPTY_ITEM);
  sub_21E94B4((void **)&v35, "Items");
  v26 = v3;
  v4 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v35);
  v5 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v35 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v25 = (int)v2;
  if ( v4 && ListTag::size(v4) >= 1 )
    v6 = 0;
    v7 = &dword_28898C0;
    do
      v10 = (const CompoundTag *)ListTag::get(v4, v6);
      if ( (*(int (**)(void))(*(_DWORD *)v10 + 24))() == 10 )
      {
        sub_21E94B4((void **)&v34, "Slot");
        v11 = CompoundTag::getByte((int)v10, (const void **)&v34);
        v12 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != v7 )
        {
          v8 = (unsigned int *)(v34 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        }
        if ( v11 <= 4 )
          v13 = *(void (__fastcall **)(BrewingStandBlockEntity *, unsigned int, char *))(*(_DWORD *)v26 + 120);
          ItemInstance::fromTag((ItemInstance *)&v30, v10);
          v13(v26, v11, &v30);
          if ( ptr )
            operator delete(ptr);
          v7 = &dword_28898C0;
          if ( v32 )
            operator delete(v32);
          if ( v31 )
            (*(void (**)(void))(*(_DWORD *)v31 + 4))();
          v31 = 0;
      }
      ++v6;
    while ( v6 < ListTag::size(v4) );
  *((_DWORD *)v26 + 58) = *((_DWORD *)v26 + 60);
  sub_21E94B4((void **)&v29, "CookTime");
  *((_DWORD *)v26 + 54) = CompoundTag::getShort(v25, (const void **)&v29);
  v14 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v29 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v28, "FuelAmount");
  *((_DWORD *)v26 + 55) = CompoundTag::getShort(v25, (const void **)&v28);
  v15 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v28 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v27, "FuelTotal");
  *((_DWORD *)v26 + 56) = CompoundTag::getShort(v25, (const void **)&v27);
  v16 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v27 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


int __fastcall BrewingStandBlockEntity::setIngredient(int result, Item *a2)
{
  *(_DWORD *)(result + 232) = a2;
  return result;
}


int __fastcall BrewingStandBlockEntity::onChanged(BrewingStandBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  BrewingStandBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  char v6; // r8@2
  char v7; // r7@5
  char v8; // r0@13
  char v9; // r7@18
  char v10; // r0@18
  char v11; // [sp+8h] [bp-20h]@25
  char v12; // [sp+9h] [bp-1Fh]@25

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = *(_BYTE *)(Block::mBrewingStand + 4);
    if ( *((_BYTE *)v3 + 327) )
    {
      if ( *((_DWORD *)v3 + 78) )
      {
        if ( ItemInstance::isNull((BrewingStandBlockEntity *)((char *)v3 + 312)) )
        {
          v7 = 1;
        }
        else
          v7 = 0;
          if ( !*((_BYTE *)v3 + 326) )
            v7 = 1;
      }
      else
        v7 = 1;
    }
    else
      v7 = 1;
    if ( *((_BYTE *)v3 + 399) )
      if ( *((_DWORD *)v3 + 96) )
        if ( ItemInstance::isNull((BrewingStandBlockEntity *)((char *)v3 + 384)) )
          v8 = 0;
          v8 = *((_BYTE *)v3 + 398);
          if ( *((_BYTE *)v3 + 398) )
            v8 = 2;
        v8 = 0;
      v8 = 0;
    v9 = v7 | v8;
    v10 = 0;
    if ( *((_BYTE *)v3 + 471) )
      if ( *((_DWORD *)v3 + 114) )
        if ( ItemInstance::isNull((BrewingStandBlockEntity *)((char *)v3 + 456)) )
          v10 = 0;
          v10 = *((_BYTE *)v3 + 470);
          if ( *((_BYTE *)v3 + 470) )
            v10 = 4;
        v10 = 0;
    v11 = v6;
    v12 = (v10 | v9) ^ 1;
    result = BlockSource::setBlockAndData((int)v2, (BrewingStandBlockEntity *)((char *)v3 + 32), (int)&v11, 2, 0);
  }
  return result;
}


int __fastcall BrewingStandBlockEntity::tick(BrewingStandBlockEntity *this, BlockSource *a2)
{
  ItemInstance *v2; // r6@0
  BrewingStandBlockEntity *v3; // r5@1
  BlockSource *v4; // r4@1
  bool v5; // zf@2
  PotionBrewing *v6; // r0@7
  const ItemInstance *v7; // r1@7
  signed int v8; // r0@7
  signed int v9; // r6@13
  signed int v10; // r0@13
  Level *v11; // r0@14
  int v12; // r0@15
  bool v13; // zf@15
  Level *v14; // r0@21
  int v16; // [sp+0h] [bp-58h]@7
  int v17; // [sp+8h] [bp-50h]@11
  void *v18; // [sp+24h] [bp-34h]@9
  void *ptr; // [sp+34h] [bp-24h]@7

  v3 = this;
  *((_BYTE *)this + 228) = 0;
  v4 = a2;
  if ( !*((_DWORD *)this + 55) )
  {
    v5 = *((_BYTE *)this + 543) == 0;
    if ( *((_BYTE *)this + 543) )
    {
      v2 = (BrewingStandBlockEntity *)((char *)this + 528);
      v5 = *((_DWORD *)this + 132) == 0;
    }
    if ( !v5 && !ItemInstance::isNull(v2) && *((_BYTE *)v3 + 542) )
      v6 = ItemInstance::ItemInstance((ItemInstance *)&v16, (int)v2);
      v8 = PotionBrewing::getFuelValue(v6, v7);
      *((_DWORD *)v3 + 55) = v8;
      *((_DWORD *)v3 + 56) = v8;
      ItemInstance::useAsFuel((ItemInstance *)&v16);
      (*(void (__fastcall **)(BrewingStandBlockEntity *, signed int, int *))(*(_DWORD *)v3 + 120))(v3, 4, &v16);
      if ( ptr )
        operator delete(ptr);
      if ( v18 )
        operator delete(v18);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  }
  v9 = BrewingStandBlockEntity::canBrew(v3);
  v10 = *((_DWORD *)v3 + 54);
  if ( v10 < 1 )
    if ( v9 != 1 )
      return BlockEntity::tick(v3, v4);
    v14 = (Level *)BlockSource::getLevel(v4);
    if ( Level::isClientSide(v14) )
    *((_DWORD *)v3 + 54) = 400;
    *((_DWORD *)v3 + 58) = *((_DWORD *)v3 + 60);
LABEL_26:
    BlockEntity::setChanged(v3);
    return BlockEntity::tick(v3, v4);
  *((_DWORD *)v3 + 54) = v10 - 1;
  v11 = (Level *)BlockSource::getLevel(v4);
  if ( Level::isClientSide(v11) )
  v12 = *((_DWORD *)v3 + 54);
  v13 = v12 == 0;
  if ( !v12 )
    v13 = v9 == 1;
  if ( v13 )
    BrewingStandBlockEntity::brew(v3);
    --*((_DWORD *)v3 + 55);
    goto LABEL_26;
  if ( !v9 || *((_DWORD *)v3 + 58) != *((_DWORD *)v3 + 60) )
    *((_DWORD *)v3 + 54) = 0;
  return BlockEntity::tick(v3, v4);
}


int __fastcall BrewingStandBlockEntity::setItem(int result, int a2, const ItemInstance *a3)
{
  int v3; // r4@1
  const ItemInstance *v4; // r8@1
  int v5; // r5@1

  v3 = a2;
  v4 = a3;
  v5 = result;
  if ( (unsigned int)a2 <= 4 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)(result + 104) + 112))(result + 104);
    ItemInstance::operator=(v5 + 72 * v3 + 240, (int)v4);
    BlockEntity::setChanged((BlockEntity *)v5);
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)(v5 + 104) + 84))(v5 + 104, v3);
  }
  return result;
}


void __fastcall BrewingStandBlockEntity::load(BrewingStandBlockEntity *this, const CompoundTag *a2)
{
  BrewingStandBlockEntity::load(this, a2);
}


void __fastcall BrewingStandBlockEntity::~BrewingStandBlockEntity(BrewingStandBlockEntity *this)
{
  BrewingStandBlockEntity::~BrewingStandBlockEntity(this);
}


int __fastcall BrewingStandBlockEntity::setBrewTime(int result, int a2)
{
  *(_DWORD *)(result + 216) = a2;
  return result;
}


int __fastcall BrewingStandBlockEntity::setFuelTotal(int result, int a2)
{
  *(_DWORD *)(result + 224) = a2;
  return result;
}


signed int __fastcall BrewingStandBlockEntity::getMaxStackSize(BrewingStandBlockEntity *this)
{
  return 64;
}


int __fastcall BrewingStandBlockEntity::BrewingStandBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  double v4; // r0@1
  unsigned int *v6; // r2@3
  int v7; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v7, "BrewingStand");
  BlockEntity::BlockEntity(v3, 8, v2);
  HIDWORD(v4) = v7;
  LODWORD(v4) = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(v4) = __ldrex(v6);
      while ( __strex(HIDWORD(v4) - 1, v6) );
    }
    else
      HIDWORD(v4) = (*v6)--;
    if ( SHIDWORD(v4) <= 0 )
      j_j_j_j__ZdlPv_9((void *)LODWORD(v4));
  }
  LODWORD(v4) = v3 + 104;
  Container::Container(v4);
  *(_DWORD *)v3 = &off_2709130;
  *(_DWORD *)(v3 + 104) = &off_27091CC;
  *(_DWORD *)(v3 + 232) = 0;
  *(_BYTE *)(v3 + 228) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_DWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 220) = 0;
  ItemInstance::ItemInstance(v3 + 240);
  ItemInstance::ItemInstance(v3 + 312);
  ItemInstance::ItemInstance(v3 + 384);
  ItemInstance::ItemInstance(v3 + 456);
  ItemInstance::ItemInstance(v3 + 528);
  return v3;
}


signed int __fastcall BrewingStandBlockEntity::canPushInItem(BrewingStandBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  signed int result; // r0@4

  if ( !a3 )
  {
    if ( a4 == 1 )
      return PotionBrewing::isIngredient(a5, a2);
    return 0;
  }
  if ( a3 == 4 )
    if ( a4 != 1 )
      return PotionBrewing::isFuel(a5, a2);
  if ( a4 == 1 )
  if ( ItemInstance::isPotionItem(a5) )
    result = 1;
  else
    result = 0;
    if ( *(_DWORD *)a5 == Item::mGlass_bottle )
      result = 1;
  return result;
}


BlockEntity *__fastcall BrewingStandBlockEntity::~BrewingStandBlockEntity(BrewingStandBlockEntity *this)
{
  BrewingStandBlockEntity *v1; // r4@1
  Container *v2; // r5@1
  void *v3; // r0@1
  void *v4; // r0@3
  int v5; // r0@5
  void *v6; // r0@7
  void *v7; // r0@9
  int v8; // r0@11
  void *v9; // r0@13
  void *v10; // r0@15
  int v11; // r0@17
  void *v12; // r0@19
  void *v13; // r0@21
  int v14; // r0@23
  void *v15; // r0@25
  void *v16; // r0@27
  int v17; // r0@29

  v1 = this;
  *(_DWORD *)this = &off_2709130;
  *((_DWORD *)this + 26) = &off_27091CC;
  v2 = (BrewingStandBlockEntity *)((char *)this + 104);
  v3 = (void *)*((_DWORD *)this + 145);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 141);
  if ( v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 134);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 134) = 0;
  v6 = (void *)*((_DWORD *)v1 + 127);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 123);
  if ( v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 116);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 116) = 0;
  v9 = (void *)*((_DWORD *)v1 + 109);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_DWORD *)v1 + 105);
  if ( v10 )
    operator delete(v10);
  v11 = *((_DWORD *)v1 + 98);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  *((_DWORD *)v1 + 98) = 0;
  v12 = (void *)*((_DWORD *)v1 + 91);
  if ( v12 )
    operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 87);
  if ( v13 )
    operator delete(v13);
  v14 = *((_DWORD *)v1 + 80);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 80) = 0;
  v15 = (void *)*((_DWORD *)v1 + 73);
  if ( v15 )
    operator delete(v15);
  v16 = (void *)*((_DWORD *)v1 + 69);
  if ( v16 )
    operator delete(v16);
  v17 = *((_DWORD *)v1 + 62);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  *((_DWORD *)v1 + 62) = 0;
  Container::~Container(v2);
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


signed int __fastcall BrewingStandBlockEntity::canPullOutItem(BrewingStandBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  signed int result; // r0@2

  if ( a4 )
  {
    result = 0;
  }
  else
    if ( (unsigned int)(a3 - 1) < 3 )
      result = 1;
  return result;
}


int __fastcall BrewingStandBlockEntity::resetFinished(int result)
{
  *(_BYTE *)(result + 228) = 0;
  return result;
}


signed int __fastcall BrewingStandBlockEntity::canBrew(BrewingStandBlockEntity *this)
{
  const ItemInstance *v1; // r4@0
  PotionBrewing *v2; // r6@0
  BrewingStandBlockEntity *v3; // r5@1
  int v4; // r0@1
  bool v5; // zf@1
  const ItemInstance *v6; // r1@4
  bool v7; // zf@8
  const ItemInstance *v8; // r2@11
  signed int v9; // r0@13
  bool v10; // zf@14
  const ItemInstance *v11; // r2@17
  bool v12; // zf@20
  const ItemInstance *v13; // r2@23
  signed int result; // r0@28
  signed int v15; // r1@30

  v3 = this;
  v4 = *((_BYTE *)this + 255);
  v5 = v4 == 0;
  if ( v4 )
  {
    v1 = (BrewingStandBlockEntity *)((char *)v3 + 240);
    v5 = *((_DWORD *)v3 + 60) == 0;
  }
  if ( v5
    || ItemInstance::isNull(v1)
    || !*((_BYTE *)v3 + 254)
    || PotionBrewing::isIngredient(v1, v6) != 1
    || !*((_DWORD *)v3 + 55) )
    result = 0;
  else
    v7 = *((_BYTE *)v3 + 327) == 0;
    if ( *((_BYTE *)v3 + 327) )
    {
      v2 = (BrewingStandBlockEntity *)((char *)v3 + 312);
      v7 = *((_DWORD *)v3 + 78) == 0;
    }
    if ( v7 || ItemInstance::isNull(v2) || !*((_BYTE *)v3 + 326) || (v9 = PotionBrewing::hasMix(v2, v1, v8)) == 0 )
      v10 = *((_BYTE *)v3 + 399) == 0;
      if ( *((_BYTE *)v3 + 399) )
      {
        v2 = (BrewingStandBlockEntity *)((char *)v3 + 384);
        v10 = *((_DWORD *)v3 + 96) == 0;
      }
      if ( v10 || ItemInstance::isNull(v2) || !*((_BYTE *)v3 + 398) || (v9 = PotionBrewing::hasMix(v2, v1, v11)) == 0 )
        v12 = *((_BYTE *)v3 + 471) == 0;
        if ( *((_BYTE *)v3 + 471) )
        {
          v2 = (BrewingStandBlockEntity *)((char *)v3 + 456);
          v12 = *((_DWORD *)v3 + 114) == 0;
        }
        if ( v12 || ItemInstance::isNull(v2) || !*((_BYTE *)v3 + 470) )
          v9 = 2;
        else
          v9 = PotionBrewing::hasMix(v2, v1, v13);
          if ( !v9 )
            v9 = 2;
    v15 = 0;
    if ( v9 != 2 )
      v15 = 1;
    result = v15;
  return result;
}


signed int __fastcall BrewingStandBlockEntity::save(BrewingStandBlockEntity *this, CompoundTag *a2)
{
  ItemInstance *v2; // r8@0
  CompoundTag *v3; // r4@1
  BrewingStandBlockEntity *v4; // r5@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r6@5
  signed int v9; // r9@5
  signed int result; // r0@6
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  int v13; // r4@15
  bool v14; // zf@15
  int v15; // r4@20
  void *v16; // r0@20
  int v17; // r0@21
  void *v18; // r0@28
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  unsigned int *v21; // r2@34
  signed int v22; // r1@36
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  unsigned int *v25; // r2@42
  signed int v26; // r1@44
  int v27; // [sp+8h] [bp-60h]@5
  void *v28; // [sp+Ch] [bp-5Ch]@26
  int v29; // [sp+14h] [bp-54h]@26
  int v30; // [sp+18h] [bp-50h]@21
  int v31; // [sp+20h] [bp-48h]@7
  int v32; // [sp+24h] [bp-44h]@20
  int v33; // [sp+2Ch] [bp-3Ch]@4
  int v34; // [sp+34h] [bp-34h]@3
  int v35; // [sp+3Ch] [bp-2Ch]@2
  int v36; // [sp+48h] [bp-20h]@7

  v3 = a2;
  v4 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v35, "FuelTotal");
    CompoundTag::putShort((int)v3, (const void **)&v35, *((_WORD *)v4 + 112));
    v5 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v35 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    sub_21E94B4((void **)&v34, "FuelAmount");
    CompoundTag::putShort((int)v3, (const void **)&v34, *((_WORD *)v4 + 110));
    v6 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v34 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v33, "CookTime");
    CompoundTag::putShort((int)v3, (const void **)&v33, *((_WORD *)v4 + 108));
    v7 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v33 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v27 = (int)v3;
    v8 = operator new(0x14u);
    ListTag::ListTag((int)v8);
    v9 = 0;
    do
      v13 = (int)v4 + 72 * v9;
      v14 = *(_BYTE *)(v13 + 255) == 0;
      if ( *(_BYTE *)(v13 + 255) )
        v2 = (ItemInstance *)(v13 + 240);
        v14 = *(_DWORD *)(v13 + 240) == 0;
      if ( !v14 && !ItemInstance::isNull(v2) && *(_BYTE *)(v13 + 254) )
        ItemInstance::save((ItemInstance *)&v32, v2);
        v15 = v32;
        sub_21E94B4((void **)&v31, "Slot");
        CompoundTag::putByte(v15, (const void **)&v31, v9);
        v16 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v31 - 4);
          if ( v36 )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        }
        v17 = v32;
        v32 = 0;
        v30 = v17;
        ListTag::add((int)v8, &v30);
        if ( v30 )
          (*(void (**)(void))(*(_DWORD *)v30 + 4))();
        v30 = 0;
        if ( v32 )
          (*(void (**)(void))(*(_DWORD *)v32 + 4))();
      ++v9;
    while ( v9 < 5 );
    sub_21E94B4((void **)&v29, "Items");
    v28 = v8;
    CompoundTag::put(v27, (const void **)&v29, (int *)&v28);
    if ( v28 )
      (*(void (**)(void))(*(_DWORD *)v28 + 4))();
    v28 = 0;
    v18 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v29 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall BrewingStandBlockEntity::setFuelAmount(int result, int a2)
{
  *(_DWORD *)(result + 220) = a2;
  return result;
}


char *__fastcall BrewingStandBlockEntity::getItem(BrewingStandBlockEntity *this, int a2)
{
  char *result; // r0@1

  result = (char *)this + 72 * a2 + 240;
  if ( (unsigned int)a2 > 4 )
    result = (char *)&ItemInstance::EMPTY_ITEM;
  return result;
}


int __fastcall BrewingStandBlockEntity::setFinished(int result, bool a2)
{
  *(_BYTE *)(result + 228) = a2;
  return result;
}


int __fastcall BrewingStandBlockEntity::brew(BrewingStandBlockEntity *this)
{
  BrewingStandBlockEntity *v1; // r4@1
  bool v2; // zf@1
  signed int v3; // r0@4
  signed int v4; // r2@4
  bool v5; // zf@14
  signed int v6; // r0@17
  signed int v7; // r2@17
  bool v8; // zf@27
  signed int v9; // r0@30
  signed int v10; // r2@30
  int result; // r0@44
  int v12; // [sp+0h] [bp-A0h]@1
  int v13; // [sp+8h] [bp-98h]@12
  char v14; // [sp+Eh] [bp-92h]@4
  char v15; // [sp+Fh] [bp-91h]@1
  void *v16; // [sp+24h] [bp-7Ch]@10
  void *ptr; // [sp+34h] [bp-6Ch]@8
  char v18; // [sp+48h] [bp-58h]@1
  int v19; // [sp+50h] [bp-50h]@44
  void *v20; // [sp+6Ch] [bp-34h]@42
  void *v21; // [sp+7Ch] [bp-24h]@40

  v1 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v18, (int)this + 240);
  PotionBrewing::mix((PotionBrewing *)&v12, (const ItemInstance *)&v18, (BrewingStandBlockEntity *)((char *)v1 + 312));
  v2 = v15 == 0;
  if ( v15 )
    v2 = v12 == 0;
  if ( !v2 )
  {
    v3 = ItemInstance::isNull((ItemInstance *)&v12);
    v4 = 0;
    if ( !v14 )
      v4 = 1;
    if ( !(v3 | v4) )
      ItemInstance::setJustBrewed((ItemInstance *)&v12, 1);
  }
  (*(void (__fastcall **)(BrewingStandBlockEntity *, signed int, int *))(*(_DWORD *)v1 + 120))(v1, 1, &v12);
  if ( ptr )
    operator delete(ptr);
  if ( v16 )
    operator delete(v16);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  PotionBrewing::mix((PotionBrewing *)&v12, (const ItemInstance *)&v18, (BrewingStandBlockEntity *)((char *)v1 + 384));
  v5 = v15 == 0;
    v5 = v12 == 0;
  if ( !v5 )
    v6 = ItemInstance::isNull((ItemInstance *)&v12);
    v7 = 0;
      v7 = 1;
    if ( !(v6 | v7) )
  (*(void (__fastcall **)(BrewingStandBlockEntity *, signed int, int *))(*(_DWORD *)v1 + 120))(v1, 2, &v12);
  PotionBrewing::mix((PotionBrewing *)&v12, (const ItemInstance *)&v18, (BrewingStandBlockEntity *)((char *)v1 + 456));
  v8 = v15 == 0;
    v8 = v12 == 0;
  if ( !v8 )
    v9 = ItemInstance::isNull((ItemInstance *)&v12);
    v10 = 0;
      v10 = 1;
    if ( !(v9 | v10) )
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v1 + 120))(v1, 3, &v12);
  ItemInstance::remove((ItemInstance *)&v18, 1);
  (*(void (__fastcall **)(BrewingStandBlockEntity *, _DWORD, char *))(*(_DWORD *)v1 + 120))(v1, 0, &v18);
  *((_BYTE *)v1 + 228) = 1;
  if ( v21 )
    operator delete(v21);
  if ( v20 )
    operator delete(v20);
  result = v19;
  if ( v19 )
    result = (*(int (**)(void))(*(_DWORD *)v19 + 4))();
  return result;
}


int __fastcall BrewingStandBlockEntity::getPotionSlotUsage(BrewingStandBlockEntity *this)
{
  BrewingStandBlockEntity *v1; // r4@1
  ItemInstance *v2; // r0@2
  signed int v3; // r5@4
  signed int v4; // r0@12
  int v5; // r5@17
  signed int v6; // r0@20

  v1 = this;
  if ( *((_BYTE *)this + 327) )
  {
    v2 = (BrewingStandBlockEntity *)((char *)this + 312);
    if ( *((_DWORD *)v1 + 78) )
    {
      if ( ItemInstance::isNull(v2) )
      {
        v3 = 1;
      }
      else
        v3 = 0;
        if ( !*((_BYTE *)v1 + 326) )
          v3 = 1;
    }
    else
      v3 = 1;
  }
  else
    v3 = 1;
  if ( *((_BYTE *)v1 + 399) )
    if ( *((_DWORD *)v1 + 96) )
      if ( ItemInstance::isNull((BrewingStandBlockEntity *)((char *)v1 + 384)) )
        v4 = 0;
        v4 = *((_BYTE *)v1 + 398);
        if ( *((_BYTE *)v1 + 398) )
          v4 = 2;
      v4 = 0;
    v4 = 0;
  v5 = v3 | v4;
  if ( *((_BYTE *)v1 + 471) )
    if ( *((_DWORD *)v1 + 114) )
      if ( ItemInstance::isNull((BrewingStandBlockEntity *)((char *)v1 + 456)) )
        v6 = 0;
        v6 = *((_BYTE *)v1 + 470);
        if ( *((_BYTE *)v1 + 470) )
          v6 = 4;
      v6 = 0;
    v6 = 0;
  return (v6 | v5) ^ 1;
}


signed int __fastcall BrewingStandBlockEntity::isSlotEmpty(BrewingStandBlockEntity *this, int a2)
{
  char *v2; // r4@1
  ItemInstance *v3; // r0@1
  bool v4; // zf@1
  signed int result; // r0@5

  v2 = (char *)this + 72 * a2;
  v3 = (ItemInstance *)(unsigned __int8)v2[255];
  v4 = v3 == 0;
  if ( v2[255] )
  {
    v3 = (ItemInstance *)(v2 + 240);
    v4 = *((_DWORD *)v2 + 60) == 0;
  }
  if ( v4 || ItemInstance::isNull(v3) )
    result = 1;
  else
    result = 0;
    if ( !v2[254] )
      result = 1;
  return result;
}


signed int __fastcall BrewingStandBlockEntity::getContainerSize(BrewingStandBlockEntity *this)
{
  return 5;
}


void __fastcall BrewingStandBlockEntity::~BrewingStandBlockEntity(BrewingStandBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BrewingStandBlockEntity::~BrewingStandBlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}
