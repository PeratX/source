

int __fastcall ArmorItem::ArmorMaterial::ArmorMaterial(int result, int a2, int a3, int a4, int a5, int a6, int a7)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_QWORD *)(result + 12) = __PAIR__(a6, a5);
  *(_DWORD *)(result + 20) = a7;
  return result;
}


void __fastcall ArmorItem::clearColor(ArmorItem *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r4@2
  void *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  if ( ItemInstance::hasUserData(a2) == 1 )
  {
    v3 = *(_DWORD *)ItemInstance::getUserData(v2);
    sub_21E94B4((void **)&v7, "customColor");
    CompoundTag::remove(v3, (const void **)&v7);
    v4 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
  }
}


void __fastcall ArmorItem::getColor(ArmorItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ArmorItem *v3; // r4@1
  ItemInstance *v4; // r5@1
  float v5; // r2@2
  __int64 v6; // kr00_8@2
  int v7; // r7@4
  signed int v8; // r6@4
  void *v9; // r0@4
  void *v17; // r0@6
  unsigned int *v18; // r2@7
  signed int v19; // r1@9
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  int v22; // [sp+8h] [bp-30h]@6
  int v23; // [sp+10h] [bp-28h]@4

  v3 = this;
  v4 = a3;
  if ( *((_DWORD *)a2 + 31) )
  {
    v5 = unk_283E614;
    v6 = qword_283E618;
    *(_DWORD *)this = Color::WHITE;
    *((float *)this + 1) = v5;
    *((_QWORD *)this + 1) = v6;
  }
  else
    if ( ItemInstance::hasUserData(a3) != 1 )
      goto LABEL_26;
    v7 = *(_DWORD *)ItemInstance::getUserData(v4);
    sub_21E94B4((void **)&v23, "customColor");
    v8 = CompoundTag::contains(v7, (const void **)&v23);
    v9 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    if ( v8 != 1 )
LABEL_26:
      *(_DWORD *)v3 = 1059102881;
      *((_DWORD *)v3 + 1) = 1053477580;
      *((_DWORD *)v3 + 2) = 1048608897;
      *((_DWORD *)v3 + 3) = 1065353216;
    else
      sub_21E94B4((void **)&v22, "customColor");
      _R0 = CompoundTag::getInt(v7, (const void **)&v22);
      _R1 = (_R0 >> 16) & 0xFF;
      _R2 = (unsigned __int16)_R0 >> 8;
      _R0 = (unsigned __int8)_R0;
      __asm
        VLDR            S6, =0.0039216
        VMOV            S0, R1
        VMOV            S4, R0
        VMOV            S2, R2
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
      v17 = (void *)(v22 - 12);
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S2, S6
        VMUL.F32        S4, S4, S6
        VSTR            S0, [R4]
        VSTR            S2, [R4,#4]
        VSTR            S4, [R4,#8]
      if ( !_ZF )
        v18 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
}


signed int __fastcall ArmorItem::isElytraBroken(ArmorItem *this, int a2)
{
  ArmorItem *v2; // r4@1
  int v3; // r1@1
  signed int result; // r0@1

  v2 = this;
  v3 = (*(int (**)(void))(*(_DWORD *)Item::mElytra + 80))() - 1;
  result = 0;
  if ( v3 <= (signed int)v2 )
    result = 1;
  return result;
}


int __fastcall ArmorItem::ArmorMaterial::getHealthForSlot(_DWORD *a1, int a2)
{
  return *a1 * ArmorItem::mHealthPerSlot[a2];
}


signed int __fastcall ArmorItem::dispenseArmor(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r10@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r11@1
  signed int v14; // r4@1
  __int64 v15; // r8@1
  int v16; // r7@3
  _DWORD *v17; // r6@6
  int v18; // r0@7
  int v19; // r4@7
  int v20; // r0@7
  ItemInstance *v22; // r0@14
  Player *v23; // r0@14
  BlockSource *v25; // [sp+Ch] [bp-BCh]@2
  char v26; // [sp+10h] [bp-B8h]@14
  int v27; // [sp+18h] [bp-B0h]@18
  void *v28; // [sp+34h] [bp-94h]@16
  void *ptr; // [sp+44h] [bp-84h]@14
  float v30; // [sp+58h] [bp-70h]@1
  float v33; // [sp+64h] [bp-64h]@1
  char v34; // [sp+70h] [bp-58h]@1
  char v35; // [sp+7Ch] [bp-4Ch]@1
  char v36; // [sp+98h] [bp-30h]@1

  v6 = a4;
  v7 = a2;
  v8 = a1;
  v9 = a3;
  BlockPos::BlockPos((int)&v36, a4);
  Vec3::Vec3((int)&v34, (int)&v36);
  Vec3::Vec3((int)&v30, (int)&v36);
  __asm
  {
    VLDR            S6, [SP,#0xC8+var_70]
    VLDR            S8, [SP,#0xC8+var_6C]
    VLDR            S10, [SP,#0xC8+var_68]
  }
  _R0 = &Vec3::ONE;
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0xC8+var_64]
    VSTR            S2, [SP,#0xC8+var_60]
    VSTR            S4, [SP,#0xC8+var_5C]
  AABB::AABB((int)&v35, (int)&v34, (int)&v33);
  v14 = 0;
  v15 = *(_QWORD *)BlockSource::fetchEntities(v8, 256, (int)&v35, 0);
  if ( (_DWORD)v15 != HIDWORD(v15) )
    v25 = (BlockSource *)v8;
    while ( 1 )
    {
      v16 = *(_DWORD *)v15;
      if ( Entity::hasCategory(*(_DWORD *)v15, 12) || Entity::hasCategory(v16, 1) || Entity::hasType(v16, 317) == 1 )
      {
        v17 = (_DWORD *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 16))(v7, v9);
        if ( *v17 )
        {
          v18 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v16 + 1028))(v16, a6);
          v19 = v18;
          v20 = *(_BYTE *)(v18 + 15);
          _ZF = v20 == 0;
          if ( v20 )
            _ZF = *(_DWORD *)v19 == 0;
          if ( _ZF || ItemInstance::isNull((ItemInstance *)v19) || !*(_BYTE *)(v19 + 14) )
            break;
        }
      }
      LODWORD(v15) = v15 + 4;
      if ( HIDWORD(v15) == (_DWORD)v15 )
        return 0;
    }
    v22 = ItemInstance::ItemInstance((ItemInstance *)&v26, (int)v17);
    ItemInstance::set(v22, 1);
    (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)v16 + 468))(v16, a6, &v26);
    (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v16 + 1064))(v16, 1);
    v23 = (Player *)BlockSource::getLevel(v25);
    Level::broadcastLevelEvent(v23, 1000, __PAIR__(1000, v6), 0);
    (*(void (__fastcall **)(int, int, signed int))(*(_DWORD *)v7 + 36))(v7, v9, 1);
    if ( ptr )
      operator delete(ptr);
    if ( v28 )
      operator delete(v28);
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 4))();
    v14 = 1;
  return v14;
}


int __fastcall ArmorItem::getIcon(ArmorItem *this, int a2, int a3, bool a4)
{
  ArmorItem *v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r0@2
  int v7; // r0@5
  _QWORD *v8; // r1@5

  v4 = this;
  v5 = a2;
  if ( this == (ArmorItem *)Item::mElytra )
  {
    if ( *(_QWORD *)((char *)this + 140) >> 32 == (unsigned int)*(_QWORD *)((char *)this + 140) )
    {
      LODWORD(v6) = &Item::mInvalidTextureUVCoordinateSet;
    }
    else
      v7 = (*(int (__fastcall **)(ArmorItem *))(*(_DWORD *)this + 80))(this);
      v8 = (_QWORD *)*((_DWORD *)v4 + 35);
      if ( v7 - 1 <= v5 )
        v8 = (_QWORD *)((char *)v8 + 12);
      v6 = *v8;
      if ( (_DWORD)v6 == HIDWORD(v6) )
        LODWORD(v6) = &Item::mInvalidTextureUVCoordinateSet;
  }
  else
    LODWORD(v6) = j_j_j__ZNK4Item7getIconEiib(this, a2, a3, a4);
  return v6;
}


ItemInstance *__fastcall ArmorItem::use(ArmorItem *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v3; // r4@1
  Player *v4; // r5@1
  int v5; // r6@2
  int v6; // r0@4
  int v7; // r7@4
  int v8; // r0@4
  bool v9; // zf@4

  v3 = a2;
  v4 = a3;
  if ( ItemInstance::isArmorItem(a2) == 1 )
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 116);
  else
    v5 = 0;
  v6 = (*(int (__fastcall **)(Player *, int))(*(_DWORD *)v4 + 1028))(v4, v5);
  v7 = v6;
  v8 = *(_BYTE *)(v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( v9 || ItemInstance::isNull((ItemInstance *)v7) || !*(_BYTE *)(v7 + 14) )
  {
    (*(void (__fastcall **)(Player *, int, ItemInstance *))(*(_DWORD *)v4 + 1024))(v4, v5, v3);
    if ( !(*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 652))(v4) )
      ItemInstance::setNull(v3);
  }
  return v3;
}


void __fastcall ArmorItem::setColor(ArmorItem *this, ItemInstance *a2, const Color *a3)
{
  ItemInstance *v3; // r5@1
  Color *v4; // r4@1
  void *v5; // r6@2
  int v6; // r5@5
  int v7; // r0@5
  void *v8; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int v11; // [sp+8h] [bp-20h]@5
  void *v12; // [sp+Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = a3;
  if ( !ItemInstance::hasUserData(a2) )
  {
    v5 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v5);
    v12 = v5;
    ItemInstance::setUserData((int)v3, (int *)&v12);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
  }
  v6 = *(_DWORD *)ItemInstance::getUserData(v3);
  sub_21E94B4((void **)&v11, "customColor");
  v7 = Color::toARGB(v4);
  CompoundTag::putInt(v6, (const void **)&v11, v7);
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall ArmorItem::getDamageChance(ArmorItem *this, int a2)
{
  int result; // r0@2

  if ( this == (ArmorItem *)Item::mElytra )
    result = j_j_j__ZNK4Item15getDamageChanceEi(this, a2);
  else
    result = 40 / (a2 + 1) + 60;
  return result;
}


signed int __fastcall ArmorItem::isValidRepairItem(ArmorItem *this, const ItemInstance *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  int **v4; // r0@3
  int v5; // r5@9
  int v6; // r4@9
  signed int result; // r0@16
  int v8; // [sp+0h] [bp-58h]@5
  int v9; // [sp+8h] [bp-50h]@13
  void *v10; // [sp+24h] [bp-34h]@11
  void *ptr; // [sp+34h] [bp-24h]@9

  v3 = a3;
  if ( !*(_DWORD *)a3 )
    goto LABEL_20;
  switch ( *((_DWORD *)this + 31) )
  {
    case 0:
    case 5:
      v4 = &Item::mLeather;
      goto LABEL_8;
    case 1:
    case 2:
      v4 = Item::mIronIngot;
    case 3:
      v4 = &Item::mDiamond;
    case 4:
      v4 = Item::mGoldIngot;
LABEL_8:
      ItemInstance::ItemInstance((ItemInstance *)&v8, **v4);
      break;
    default:
      ItemInstance::ItemInstance((int)&v8);
  }
  v5 = v8;
  v6 = *(_DWORD *)v3;
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  v9 = 0;
  if ( v5 == v6 )
    result = 1;
  else
LABEL_20:
    result = 0;
  return result;
}


signed int __fastcall ArmorItem::isDamageable(ArmorItem *this, const ItemInstance *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)this;
  result = 0;
  if ( v2 != Item::mElytra )
    result = 1;
  return result;
}


signed int __fastcall ArmorItem::isTintable(ArmorItem *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 31);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


Item *__fastcall ArmorItem::~ArmorItem(ArmorItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2700D00;
  TextureAtlasItem::~TextureAtlasItem((ArmorItem *)((char *)this + 132));
  return j_j_j__ZN4ItemD2Ev_0(v1);
}


void __fastcall ArmorItem::clearColor(ArmorItem *this, ItemInstance *a2)
{
  ArmorItem::clearColor(this, a2);
}


signed int __fastcall ArmorItem::dispense(ArmorItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  Container *v6; // r5@1
  int v7; // r4@1
  BlockSource *v8; // r6@1
  int v9; // r0@1

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)a3 + 16))(a3, a4);
  return ArmorItem::dispenseArmor((int)v8, (int)v6, v7, (int)a5, 0, *(_DWORD *)(*(_DWORD *)v9 + 116));
}


signed int __fastcall ArmorItem::hasCustomColor(ArmorItem *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r4@3
  signed int v4; // r4@3
  void *v5; // r0@3
  unsigned int *v6; // r12@4
  signed int v7; // r1@6
  int v9; // [sp+4h] [bp-1Ch]@3

  v2 = a2;
  if ( *((_DWORD *)this + 31) || ItemInstance::hasUserData(a2) != 1 )
  {
    v4 = 0;
  }
  else
    v3 = *(_DWORD *)ItemInstance::getUserData(v2);
    sub_21E94B4((void **)&v9, "customColor");
    v4 = CompoundTag::contains(v3, (const void **)&v9);
    v5 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v9 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
  return v4;
}


signed int __fastcall ArmorItem::isElytra(ArmorItem *this)
{
  signed int v1; // r1@1

  v1 = 0;
  if ( this == (ArmorItem *)Item::mElytra )
    v1 = 1;
  return v1;
}


int __fastcall ArmorItem::setIcon(int a1, int **a2, int a3)
{
  int **v3; // r4@1
  int v4; // r5@1
  int *v5; // r4@1

  v3 = a2;
  v4 = a1;
  Item::setIcon(a1, a2, a3);
  v5 = Item::getTextureItem(v3);
  EntityInteraction::setInteractText((int *)(v4 + 132), v5);
  *(_DWORD *)(v4 + 136) = v5[1];
  std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v4 + 140,
    (unsigned __int64 *)v5 + 1);
  return v4;
}


int __fastcall ArmorItem::getSlotForItem(ArmorItem *this, const ItemInstance *a2)
{
  ArmorItem *v2; // r4@1
  int result; // r0@2

  v2 = this;
  if ( ItemInstance::isArmorItem(this) == 1 )
    result = *(_DWORD *)(*(_DWORD *)v2 + 116);
  else
    result = 0;
  return result;
}


void __fastcall ArmorItem::getColor(ArmorItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ArmorItem::getColor(this, a2, a3);
}


void __fastcall ArmorItem::setColor(ArmorItem *this, ItemInstance *a2, const Color *a3)
{
  ArmorItem::setColor(this, a2, a3);
}


signed int __fastcall ArmorItem::isArmor(ArmorItem *this)
{
  return 1;
}


signed int __fastcall ArmorItem::getEnchantSlot(ArmorItem *this)
{
  ArmorItem *v1; // r1@1
  int v2; // r2@1
  signed int result; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 29);
  result = 1;
  switch ( v2 )
  {
    case 1:
      result = 2;
      if ( v1 == (ArmorItem *)Item::mElytra )
        result = 0x4000;
      break;
    case 0:
      return result;
    case 2:
      result = 8;
    case 3:
      result = 4;
    default:
      result = 0;
  }
  return result;
}


signed int __fastcall ArmorItem::isFlyEnabled(ArmorItem *this, const ItemInstance *a2)
{
  signed int v2; // r4@1
  int v3; // r5@2

  v2 = 0;
  if ( *(_DWORD *)this == Item::mElytra )
  {
    v3 = ItemInstance::getDamageValue(this);
    if ( (*(int (**)(void))(*(_DWORD *)Item::mElytra + 80))() - 1 > v3 )
      v2 = 1;
  }
  return v2;
}


ItemInstance *__fastcall ArmorItem::getTierItem(ArmorItem *this, int a2)
{
  int **v2; // r1@2
  ItemInstance *result; // r0@4

  switch ( *(_DWORD *)(a2 + 124) )
  {
    case 0:
    case 5:
      v2 = &Item::mLeather;
      goto LABEL_7;
    case 1:
    case 2:
      v2 = Item::mIronIngot;
    case 4:
      v2 = Item::mGoldIngot;
    case 3:
      v2 = &Item::mDiamond;
LABEL_7:
      result = ItemInstance::ItemInstance(this, **v2);
      break;
    default:
      result = (ItemInstance *)ItemInstance::ItemInstance((int)this);
  }
  return result;
}


int __fastcall ArmorItem::getArmorForSlot(int a1, int a2)
{
  int **v2; // r0@3
  int result; // r0@10

  switch ( a1 )
  {
    case 0:
      switch ( a2 )
      {
        case 0:
          v2 = Item::mHelmet_leather;
          goto LABEL_28;
        case 1:
          v2 = &Item::mHelmet_gold;
        case 2:
          v2 = Item::mHelmet_chain;
        case 3:
          v2 = Item::mHelmet_iron;
        case 4:
          v2 = Item::mHelmet_diamond;
        default:
          goto def_17AD260;
      }
      goto def_17AD260;
    case 1:
          v2 = Item::mChestplate_leather;
          v2 = Item::mChestplate_gold;
          v2 = Item::mChestplate_chain;
          v2 = Item::mChestplate_iron;
          v2 = Item::mChestplate_diamond;
        case 5:
          v2 = Item::mElytra;
    case 2:
          v2 = Item::mLeggings_leather;
          v2 = Item::mLeggings_gold;
          v2 = Item::mLeggings_chain;
          v2 = Item::mLeggings_iron;
          v2 = Item::mLeggings_diamond;
    case 3:
          v2 = Item::mBoots_leather;
          break;
          v2 = Item::mBoots_gold;
          v2 = Item::mBoots_chain;
          v2 = &Item::mBoots_iron;
          v2 = Item::mBoots_diamond;
LABEL_28:
      result = **v2;
      break;
    default:
def_17AD260:
      result = 0;
  }
  return result;
}


signed int __fastcall ArmorItem::isElytra(ArmorItem *this, const ItemInstance *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)this;
  result = 0;
  if ( v2 == Item::mElytra )
    result = 1;
  return result;
}


int __fastcall ArmorItem::ArmorItem(int a1, const void **a2, __int16 a3, _DWORD *a4, int a5, int a6)
{
  _DWORD *v6; // r5@1
  int v7; // r4@1

  v6 = a4;
  v7 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v7 = &off_2700D00;
  *(_DWORD *)(v7 + 116) = a6;
  *(_DWORD *)(v7 + 120) = v6[a6 + 1];
  *(_DWORD *)(v7 + 124) = a5;
  *(_DWORD *)(v7 + 128) = v6;
  *(_DWORD *)(v7 + 132) = &unk_28898CC;
  *(_DWORD *)(v7 + 136) = 0;
  *(_DWORD *)(v7 + 140) = 0;
  *(_DWORD *)(v7 + 144) = 0;
  *(_DWORD *)(v7 + 148) = 0;
  Item::setMaxDamage((Item *)v7, ArmorItem::mHealthPerSlot[a6] * *v6);
  *(_BYTE *)(v7 + 4) = 1;
  return v7;
}


void __fastcall ArmorItem::~ArmorItem(ArmorItem *this)
{
  ArmorItem::~ArmorItem(this);
}


void __fastcall ArmorItem::~ArmorItem(ArmorItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2700D00;
  TextureAtlasItem::~TextureAtlasItem((ArmorItem *)((char *)this + 132));
  Item::~Item(v1);
  j_j_j__ZdlPv_6((void *)v1);
}
