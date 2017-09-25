

  if ( MerchantRecipe::isDeprecated(v3) == 1 )
{
    sub_21E94B4((void **)&v7, "merchant.deprecated");
    I18n::get(v2, (int **)&v7);
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
  else
  {
    sub_21E94B4((void **)v2, (const char *)&unk_257BC67);
}


int __fastcall MerchantRecipe::MerchantRecipe(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::ItemInstance(v5 + 72);
  ItemInstance::ItemInstance(v5 + 144);
  *(_DWORD *)(v5 + 216) = 0;
  *(_DWORD *)(v5 + 220) = 0;
  *(_BYTE *)(v5 + 224) = 0;
  ItemInstance::operator=(v5, v4);
  ItemInstance::operator=(v5 + 72, (int)&ItemInstance::EMPTY_ITEM);
  ItemInstance::operator=(v5 + 144, v3);
  *(_QWORD *)(v5 + 216) = 30064771072LL;
  *(_BYTE *)(v5 + 224) = 1;
  return v5;
}


int __fastcall MerchantRecipe::MerchantRecipe(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r6@1
  int v7; // r4@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::ItemInstance(v7 + 72);
  ItemInstance::ItemInstance(v7 + 144);
  *(_DWORD *)(v7 + 216) = 0;
  *(_DWORD *)(v7 + 220) = 0;
  *(_BYTE *)(v7 + 224) = 0;
  ItemInstance::operator=(v7, v6);
  ItemInstance::operator=(v7 + 72, v5);
  ItemInstance::operator=(v7 + 144, v4);
  *(_QWORD *)(v7 + 216) = 30064771072LL;
  *(_BYTE *)(v7 + 224) = 1;
  return v7;
}


int __fastcall MerchantRecipe::setUses(int result, int a2)
{
  *(_DWORD *)(result + 216) = a2;
  return result;
}


void __fastcall MerchantRecipe::load(MerchantRecipe *this, const CompoundTag *a2)
{
  MerchantRecipe::load(this, a2);
}


char *__fastcall MerchantRecipe::getSellItem(MerchantRecipe *this)
{
  return (char *)this + 144;
}


  if ( MerchantRecipe::hasSecondaryBuyItem(v4) == 1 )
{
    v5 = *(_DWORD *)(v3 + 380);
    v6 = MerchantRecipe::getBuyBItem(v4);
    ItemInstance::getName((ItemInstance *)&v10, (int)v6);
    MinecraftScreenModel::filterProfanityFromString((int)v2, v5);
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  else
  {
    sub_21E94B4(v2, (const char *)&unk_257BC67);
}


ItemInstance *__fastcall MerchantRecipe::MerchantRecipe(ItemInstance *a1, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  __int64 v4; // r0@1

  v2 = a2;
  v3 = a1;
  ItemInstance::ItemInstance(a1, a2);
  ItemInstance::ItemInstance((ItemInstance *)((char *)v3 + 72), v2 + 72);
  ItemInstance::ItemInstance((ItemInstance *)((char *)v3 + 144), v2 + 144);
  v4 = *(_QWORD *)(v2 + 216);
  *((_BYTE *)v3 + 224) = *(_BYTE *)(v2 + 224);
  *((_QWORD *)v3 + 27) = v4;
  return v3;
}


int __fastcall MerchantRecipe::setRewardExp(int result, bool a2)
{
  *(_BYTE *)(result + 224) = a2;
  return result;
}


ItemInstance *__fastcall MerchantRecipe::MerchantRecipe(ItemInstance *a1, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  __int64 v4; // r0@1

  v2 = a2;
  v3 = a1;
  ItemInstance::ItemInstance(a1, a2);
  ItemInstance::ItemInstance((ItemInstance *)((char *)v3 + 72), v2 + 72);
  ItemInstance::ItemInstance((ItemInstance *)((char *)v3 + 144), v2 + 144);
  v4 = *(_QWORD *)(v2 + 216);
  *((_BYTE *)v3 + 224) = *(_BYTE *)(v2 + 224);
  *((_QWORD *)v3 + 27) = v4;
  return v3;
}


int __fastcall MerchantRecipe::increaseUses(int result)
{
  ++*(_DWORD *)(result + 216);
  return result;
}


  if ( MerchantRecipe::hasSecondaryBuyItem(v3) != 1 || (unsigned __int8)MerchantRecipe::getBuyBItem(v3)[14] < 2u )
{
    result = sub_21E94B4(v2, (const char *)&unk_257BC67);
  }
  else
  {
    v4 = MerchantRecipe::getBuyBItem(v3);
    result = Util::toString<unsigned char,(void *)0,(void *)0>(v2, (unsigned __int8)v4[14]);
  return result;
}


int __fastcall MerchantRecipe::increaseMaxUses(int result, int a2)
{
  *(_DWORD *)(result + 220) += a2;
  return result;
}


int __fastcall MerchantRecipe::MerchantRecipe(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r8@1
  int v5; // r4@1
  int v7; // [sp+0h] [bp-60h]@1
  int v8; // [sp+8h] [bp-58h]@5
  void *v9; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::ItemInstance(v5 + 72);
  ItemInstance::ItemInstance(v5 + 144);
  *(_DWORD *)(v5 + 216) = 0;
  *(_DWORD *)(v5 + 220) = 0;
  *(_BYTE *)(v5 + 224) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v7, v3);
  ItemInstance::operator=(v5, v4);
  ItemInstance::operator=(v5 + 72, (int)&ItemInstance::EMPTY_ITEM);
  ItemInstance::operator=(v5 + 144, (int)&v7);
  *(_QWORD *)(v5 + 216) = 30064771072LL;
  *(_BYTE *)(v5 + 224) = 1;
  if ( ptr )
    operator delete(ptr);
  if ( v9 )
    operator delete(v9);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  return v5;
}


  if ( MerchantRecipe::hasSecondaryBuyItem(v1) == 1 )
{
    v3 = MerchantRecipe::getBuyBItem(v1);
    result = j_j_j__ZNK12ItemInstance8getIdAuxEv((ItemInstance *)v3);
  }
  else
  {
    result = -1;
  return result;
}


signed int __fastcall MerchantRecipe::isDeprecated(MerchantRecipe *this)
{
  MerchantRecipe *v1; // r1@1
  signed int result; // r0@1
  int v3; // r2@1

  v1 = this;
  result = 0;
  v3 = *((_DWORD *)v1 + 55);
  if ( v3 >= 0 && *((_DWORD *)v1 + 54) >= v3 )
    result = 1;
  return result;
}


MerchantRecipe *__fastcall MerchantRecipe::~MerchantRecipe(MerchantRecipe *this)
{
  MerchantRecipe *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  void *v5; // r0@7
  void *v6; // r0@9
  int v7; // r0@11
  void *v8; // r0@13
  void *v9; // r0@15
  int v10; // r0@17

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 49);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 45);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 38);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 38) = 0;
  v5 = (void *)*((_DWORD *)v1 + 31);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 27);
  if ( v6 )
    operator delete(v6);
  v7 = *((_DWORD *)v1 + 20);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  v8 = (void *)*((_DWORD *)v1 + 13);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_DWORD *)v1 + 9);
  if ( v9 )
    operator delete(v9);
  v10 = *((_DWORD *)v1 + 2);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}


int __fastcall MerchantRecipe::MerchantRecipe(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r8@1
  int v6; // r9@1
  int v7; // r6@1
  int v8; // r4@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::ItemInstance(v8 + 72);
  ItemInstance::ItemInstance(v8 + 144);
  *(_DWORD *)(v8 + 216) = 0;
  *(_DWORD *)(v8 + 220) = 0;
  *(_BYTE *)(v8 + 224) = 0;
  ItemInstance::operator=(v8, v7);
  ItemInstance::operator=(v8 + 72, v6);
  ItemInstance::operator=(v8 + 144, v5);
  *(_QWORD *)(v8 + 216) = a5;
  *(_BYTE *)(v8 + 224) = 1;
  return v8;
}


signed int __fastcall MerchantRecipe::isSame(MerchantRecipe *this, MerchantRecipe *a2)
{
  MerchantRecipe *v2; // r5@1
  MerchantRecipe *v3; // r4@1
  int v4; // r0@1
  signed int v5; // r4@3
  int v7; // r0@6
  const ItemInstance *v8; // r5@11
  const ItemInstance *v9; // r6@17
  __int64 v10; // [sp+0h] [bp-20h]@5
  __int64 v11; // [sp+8h] [bp-18h]@5

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  if ( v4 && *(_DWORD *)a2 == v4 )
  {
    MapItem::getMapId((MapItem *)&v11, v2);
    MapItem::getMapId((MapItem *)&v10, v3);
    if ( v11 ^ v10 )
    {
      v5 = 0;
    }
    else
      v7 = *((_DWORD *)v2 + 36);
      if ( v7 && *((_DWORD *)v3 + 36) == v7 )
      {
        MapItem::getMapId((MapItem *)&v11, (MerchantRecipe *)((char *)v2 + 144));
        MapItem::getMapId((MapItem *)&v10, (MerchantRecipe *)((char *)v3 + 144));
        if ( v11 ^ v10 )
        {
          v5 = 0;
        }
        else
          v8 = (MerchantRecipe *)((char *)v2 + 72);
          if ( ItemInstance::isNull(v8) == 1 && ItemInstance::isNull((MerchantRecipe *)((char *)v3 + 72)) )
          {
            v5 = 1;
          }
          else if ( ItemInstance::isNull(v8) )
            v5 = 0;
          else
            v9 = (MerchantRecipe *)((char *)v3 + 72);
            if ( ItemInstance::isNull((MerchantRecipe *)((char *)v3 + 72)) )
            {
              v5 = 0;
            }
            else if ( *(_DWORD *)v8 )
              if ( *(_DWORD *)v9 == *(_DWORD *)v8 )
              {
                MapItem::getMapId((MapItem *)&v11, v8);
                MapItem::getMapId((MapItem *)&v10, v9);
                if ( !(v11 ^ v10) )
                  v5 = 1;
              }
            else
      }
      else
        v5 = 0;
  }
  else
    v5 = 0;
  return v5;
}


int __fastcall MerchantRecipe::MerchantRecipe(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r8@1
  int v5; // r4@1
  int v7; // [sp+0h] [bp-60h]@1
  int v8; // [sp+8h] [bp-58h]@5
  void *v9; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::ItemInstance(v5 + 72);
  ItemInstance::ItemInstance(v5 + 144);
  *(_DWORD *)(v5 + 216) = 0;
  *(_DWORD *)(v5 + 220) = 0;
  *(_BYTE *)(v5 + 224) = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v7, v3);
  ItemInstance::operator=(v5, v4);
  ItemInstance::operator=(v5 + 72, (int)&ItemInstance::EMPTY_ITEM);
  ItemInstance::operator=(v5 + 144, (int)&v7);
  *(_QWORD *)(v5 + 216) = 30064771072LL;
  *(_BYTE *)(v5 + 224) = 1;
  if ( ptr )
    operator delete(ptr);
  if ( v9 )
    operator delete(v9);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  return v5;
}


signed int __fastcall MerchantRecipe::init(MerchantRecipe *this, const ItemInstance *a2, const ItemInstance *a3, const ItemInstance *a4, __int64 a5)
{
  const ItemInstance *v5; // r4@1
  const ItemInstance *v6; // r5@1
  MerchantRecipe *v7; // r6@1
  signed int result; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = this;
  ItemInstance::operator=((int)this, (int)a2);
  ItemInstance::operator=((int)v7 + 72, (int)v6);
  ItemInstance::operator=((int)v7 + 144, (int)v5);
  *((_QWORD *)v7 + 27) = a5;
  result = 1;
  *((_BYTE *)v7 + 224) = 1;
  return result;
}


void __fastcall MerchantRecipe::createTag(MerchantRecipe *this, int a2)
{
  MerchantRecipe::createTag(this, a2);
}


int __fastcall MerchantRecipe::setMaxUses(int result, int a2)
{
  *(_DWORD *)(result + 220) = a2;
  return result;
}


int __fastcall MerchantRecipe::MerchantRecipe(int a1, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  int v3; // r4@1

  v2 = a2;
  v3 = a1;
  ItemInstance::ItemInstance(a1);
  ItemInstance::ItemInstance(v3 + 72);
  ItemInstance::ItemInstance(v3 + 144);
  *(_DWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 220) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  MerchantRecipe::load((MerchantRecipe *)v3, v2);
  return v3;
}


signed int __fastcall MerchantRecipe::isSameButBetter(MerchantRecipe *this, MerchantRecipe *a2)
{
  MerchantRecipe *v2; // r5@1
  MerchantRecipe *v3; // r4@1
  signed int result; // r0@2
  signed int v5; // r1@5

  v2 = a2;
  v3 = this;
  if ( MerchantRecipe::isSame(this, a2) == 1 )
  {
    if ( *((_BYTE *)v3 + 14) >= (unsigned int)*((_BYTE *)v2 + 14) )
    {
      v5 = ItemInstance::isNull((MerchantRecipe *)((char *)v3 + 72));
      result = 0;
      if ( !v5 && *((_BYTE *)v3 + 86) < (unsigned int)*((_BYTE *)v2 + 86) )
        result = 1;
    }
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall MerchantRecipe::createTag(MerchantRecipe *this, int a2)
{
  MerchantRecipe *v2; // r4@1
  int v3; // r5@1
  void *v4; // r6@1
  int v5; // r0@1
  void *v6; // r0@5
  int v7; // r6@6
  int v8; // r0@6
  void *v9; // r0@10
  int v10; // r7@12
  int v11; // r0@12
  void *v12; // r0@16
  int v13; // r6@17
  void *v14; // r0@17
  int v15; // r6@18
  void *v16; // r0@18
  int v17; // r6@19
  void *v18; // r0@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  unsigned int *v27; // r2@37
  signed int v28; // r1@39
  unsigned int *v29; // r2@49
  signed int v30; // r1@51
  int v31; // [sp+4h] [bp-5Ch]@19
  int v32; // [sp+Ch] [bp-54h]@18
  int v33; // [sp+14h] [bp-4Ch]@17
  int v34; // [sp+18h] [bp-48h]@12
  int v35; // [sp+1Ch] [bp-44h]@12
  int v36; // [sp+24h] [bp-3Ch]@12
  int v37; // [sp+28h] [bp-38h]@6
  int v38; // [sp+2Ch] [bp-34h]@6
  int v39; // [sp+34h] [bp-2Ch]@6
  int v40; // [sp+38h] [bp-28h]@1
  int v41; // [sp+3Ch] [bp-24h]@1
  int v42; // [sp+44h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  sub_21E94B4((void **)&v42, "buyA");
  ItemInstance::save((ItemInstance *)&v40, (ItemInstance *)v3);
  v5 = v40;
  v40 = 0;
  v41 = v5;
  CompoundTag::put((int)v4, (const void **)&v42, &v41);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 4))();
  v41 = 0;
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  v6 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v42 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v39, "sell");
  ItemInstance::save((ItemInstance *)&v37, (ItemInstance *)(v3 + 144));
  v8 = v37;
  v37 = 0;
  v38 = v8;
  CompoundTag::put(v7, (const void **)&v39, &v38);
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  v38 = 0;
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v9 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v39 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( !ItemInstance::isNull((ItemInstance *)(v3 + 72)) )
    v10 = *(_DWORD *)v2;
    sub_21E94B4((void **)&v36, "buyB");
    ItemInstance::save((ItemInstance *)&v34, (ItemInstance *)(v3 + 72));
    v11 = v34;
    v34 = 0;
    v35 = v11;
    CompoundTag::put(v10, (const void **)&v36, &v35);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v35 = 0;
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v12 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      }
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  v13 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v33, "uses");
  CompoundTag::putInt(v13, (const void **)&v33, *(_DWORD *)(v3 + 216));
  v14 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v33 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v32, "maxUses");
  CompoundTag::putInt(v15, (const void **)&v32, *(_DWORD *)(v3 + 220));
  v16 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v32 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v31, "rewardExp");
  CompoundTag::putBoolean(v17, (const void **)&v31, *(_BYTE *)(v3 + 224));
  v18 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v31 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}


char *__fastcall MerchantRecipe::getBuyBItem(MerchantRecipe *this)
{
  return (char *)this + 72;
}


void __fastcall MerchantRecipe::load(MerchantRecipe *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  MerchantRecipe *v3; // r7@1
  const CompoundTag *v4; // r0@1
  void *v5; // r0@7
  const CompoundTag *v6; // r0@8
  void *v7; // r0@14
  signed int v8; // r6@15
  void *v9; // r0@15
  const CompoundTag *v10; // r0@17
  void *v11; // r0@23
  signed int v12; // r6@24
  void *v13; // r0@24
  void *v14; // r0@26
  signed int v15; // r6@27
  void *v16; // r0@27
  void *v17; // r0@29
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  signed int v20; // r6@35
  void *v21; // r0@35
  void *v22; // r0@37
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  unsigned int *v25; // r2@44
  signed int v26; // r1@46
  unsigned int *v27; // r2@48
  signed int v28; // r1@50
  unsigned int *v29; // r2@52
  signed int v30; // r1@54
  unsigned int *v31; // r2@56
  signed int v32; // r1@58
  unsigned int *v33; // r2@60
  signed int v34; // r1@62
  unsigned int *v35; // r2@64
  signed int v36; // r1@66
  unsigned int *v37; // r2@84
  signed int v38; // r1@86
  unsigned int *v39; // r2@88
  signed int v40; // r1@90
  int v41; // [sp+4h] [bp-13Ch]@37
  int v42; // [sp+Ch] [bp-134h]@35
  int v43; // [sp+14h] [bp-12Ch]@29
  int v44; // [sp+1Ch] [bp-124h]@27
  int v45; // [sp+24h] [bp-11Ch]@26
  int v46; // [sp+2Ch] [bp-114h]@24
  int v47; // [sp+34h] [bp-10Ch]@17
  char v48; // [sp+38h] [bp-108h]@17
  int v49; // [sp+40h] [bp-100h]@21
  void *v50; // [sp+5Ch] [bp-E4h]@19
  void *v51; // [sp+6Ch] [bp-D4h]@17
  int v52; // [sp+84h] [bp-BCh]@15
  int v53; // [sp+8Ch] [bp-B4h]@8
  char v54; // [sp+90h] [bp-B0h]@8
  int v55; // [sp+98h] [bp-A8h]@12
  void *v56; // [sp+B4h] [bp-8Ch]@10
  void *v57; // [sp+C4h] [bp-7Ch]@8
  int v58; // [sp+DCh] [bp-64h]@1
  char v59; // [sp+E0h] [bp-60h]@1
  int v60; // [sp+E8h] [bp-58h]@5
  void *v61; // [sp+104h] [bp-3Ch]@3
  void *ptr; // [sp+114h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v58, "buyA");
  v4 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v58);
  ItemInstance::fromTag((ItemInstance *)&v59, v4);
  ItemInstance::operator=((int)v3, (int)&v59);
  if ( ptr )
    operator delete(ptr);
  if ( v61 )
    operator delete(v61);
  if ( v60 )
    (*(void (**)(void))(*(_DWORD *)v60 + 4))();
  v60 = 0;
  v5 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v58 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v53, "sell");
  v6 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v53);
  ItemInstance::fromTag((ItemInstance *)&v54, v6);
  ItemInstance::operator=((int)v3 + 144, (int)&v54);
  if ( v57 )
    operator delete(v57);
  if ( v56 )
    operator delete(v56);
  if ( v55 )
    (*(void (**)(void))(*(_DWORD *)v55 + 4))();
  v55 = 0;
  v7 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v53 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v52, "buyB");
  v8 = CompoundTag::contains((int)v2, (const void **)&v52, 10);
  v9 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v52 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v8 == 1 )
    sub_21E94B4((void **)&v47, "buyB");
    v10 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v47);
    ItemInstance::fromTag((ItemInstance *)&v48, v10);
    ItemInstance::operator=((int)v3 + 72, (int)&v48);
    if ( v51 )
      operator delete(v51);
    if ( v50 )
      operator delete(v50);
    if ( v49 )
      (*(void (**)(void))(*(_DWORD *)v49 + 4))();
    v49 = 0;
    v11 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v47 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      }
      else
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v46, "uses");
  v12 = CompoundTag::contains((int)v2, (const void **)&v46, 3);
  v13 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v46 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( v12 == 1 )
    sub_21E94B4((void **)&v45, "uses");
    *((_DWORD *)v3 + 54) = CompoundTag::getInt((int)v2, (const void **)&v45);
    v14 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v45 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v44, "maxUses");
  v15 = CompoundTag::contains((int)v2, (const void **)&v44, 3);
  v16 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v44 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( v15 == 1 )
    sub_21E94B4((void **)&v43, "maxUses");
    *((_DWORD *)v3 + 55) = CompoundTag::getInt((int)v2, (const void **)&v43);
    v17 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v43 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  else
    *((_DWORD *)v3 + 55) = 7;
  sub_21E94B4((void **)&v42, "rewardExp");
  v20 = CompoundTag::contains((int)v2, (const void **)&v42, 1);
  v21 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v42 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( v20 == 1 )
    sub_21E94B4((void **)&v41, "rewardExp");
    *((_BYTE *)v3 + 224) = CompoundTag::getBoolean((int)v2, (const void **)&v41);
    v22 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v41 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    *((_BYTE *)v3 + 224) = 1;
}


int __fastcall MerchantRecipe::hasSecondaryBuyItem(MerchantRecipe *this)
{
  return ItemInstance::isNull((MerchantRecipe *)((char *)this + 72)) ^ 1;
}
