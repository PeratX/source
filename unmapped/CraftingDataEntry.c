

_DWORD *__fastcall CraftingDataEntry::addShulkerBoxRecipe(CraftingDataEntry *this, Recipes *a2)
{
  ShapelessRecipe *v2; // r5@1
  Recipes *v3; // r8@1
  unsigned __int64 *v4; // r6@1
  unsigned __int64 *v5; // r7@1
  int v6; // r4@1
  _DWORD *v7; // r5@1
  _DWORD *result; // r0@1
  _DWORD *v9; // [sp+4h] [bp-1Ch]@1

  v2 = *(ShapelessRecipe **)this;
  v3 = a2;
  v4 = (unsigned __int64 *)ShapelessRecipe::getItems(*(ShapelessRecipe **)this);
  v5 = (unsigned __int64 *)(*(int (__fastcall **)(ShapelessRecipe *))(*(_DWORD *)v2 + 20))(v2);
  v6 = (*(int (__fastcall **)(ShapelessRecipe *))(*(_DWORD *)v2 + 36))(v2);
  v7 = operator new(0x68u);
  ShulkerBoxRecipe::ShulkerBoxRecipe(v7, v4, v5, v6);
  v9 = v7;
  Recipes::addDirectShapelessRecipe((int)v3, (int *)&v9);
  result = v9;
  if ( v9 )
    result = (_DWORD *)(*(int (**)(void))(*v9 + 4))();
  return result;
}


int __fastcall CraftingDataEntry::fillFromFurnaceAuxRecipe(CraftingDataEntry *this, int a2, const ItemInstance *a3)
{
  *((_DWORD *)this + 22) = 3;
  *((_DWORD *)this + 1) = a2 >> 16;
  *((_DWORD *)this + 2) = (unsigned __int16)a2;
  return j_j_j__ZN12ItemInstanceaSERKS__2((int)this + 16, (int)a3);
}


int __fastcall CraftingDataEntry::addMultiRecipe(CraftingDataEntry *this, Recipes *a2)
{
  CraftingDataEntry *v2; // r5@1
  Recipes *v3; // r4@1
  int v4; // r0@1
  const mce::UUID *v5; // r6@3
  RepairItemRecipe *v6; // r5@3
  int result; // r0@5
  int v8; // r0@6
  const mce::UUID *v9; // r6@8
  MapExtendingRecipe *v10; // r5@8
  int v11; // r0@11
  const mce::UUID *v12; // r6@13
  MapCloningRecipe *v13; // r5@13
  int v14; // r0@16
  const mce::UUID *v15; // r6@18
  MapUpgradingRecipe *v16; // r5@18
  int v17; // r0@21
  const mce::UUID *v18; // r6@23
  BookCloningRecipe *v19; // r5@23
  int v20; // r0@26
  const mce::UUID *v21; // r6@28
  BannerDuplicateRecipe *v22; // r5@28
  int v23; // r0@31
  const mce::UUID *v24; // r6@33
  BannerAddPatternRecipe *v25; // r5@33
  const mce::UUID *v26; // r6@38
  FireworksRecipe *v27; // r5@38
  FireworksRecipe *v28; // [sp+0h] [bp-30h]@38
  BannerAddPatternRecipe *v29; // [sp+4h] [bp-2Ch]@33
  BannerDuplicateRecipe *v30; // [sp+8h] [bp-28h]@28
  BookCloningRecipe *v31; // [sp+Ch] [bp-24h]@23
  MapUpgradingRecipe *v32; // [sp+10h] [bp-20h]@18
  MapCloningRecipe *v33; // [sp+14h] [bp-1Ch]@13
  MapExtendingRecipe *v34; // [sp+18h] [bp-18h]@8
  RepairItemRecipe *v35; // [sp+1Ch] [bp-14h]@3

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(**(_DWORD **)this + 36))();
  if ( *(_QWORD *)&RepairItemRecipe::ID != *(_QWORD *)v4 || *(_QWORD *)(v4 + 8) != qword_2805898 )
  {
    v8 = (*(int (**)(void))(**(_DWORD **)v2 + 36))();
    if ( *(_QWORD *)&MapExtendingRecipe::ID != *(_QWORD *)v8 || *(_QWORD *)(v8 + 8) != qword_28054F8 )
    {
      v11 = (*(int (**)(void))(**(_DWORD **)v2 + 36))();
      if ( *(_QWORD *)&MapCloningRecipe::ID != *(_QWORD *)v11 || *(_QWORD *)(v11 + 8) != qword_28053E8 )
      {
        v14 = (*(int (**)(void))(**(_DWORD **)v2 + 36))();
        if ( *(_QWORD *)&MapUpgradingRecipe::ID != *(_QWORD *)v14 || *(_QWORD *)(v14 + 8) != qword_2805608 )
        {
          v17 = (*(int (**)(void))(**(_DWORD **)v2 + 36))();
          if ( *(_QWORD *)&BookCloningRecipe::ID != *(_QWORD *)v17 || *(_QWORD *)(v17 + 8) != qword_2805148 )
          {
            v20 = (*(int (**)(void))(**(_DWORD **)v2 + 36))();
            if ( *(_QWORD *)&BannerDuplicateRecipe::ID != *(_QWORD *)v20 || *(_QWORD *)(v20 + 8) != qword_2805088 )
            {
              v23 = (*(int (**)(void))(**(_DWORD **)v2 + 36))();
              if ( *(_QWORD *)&BannerAddPatternRecipe::ID != *(_QWORD *)v23 || *(_QWORD *)(v23 + 8) != qword_2805098 )
              {
                result = (*(int (**)(void))(**(_DWORD **)v2 + 36))();
                if ( *(_QWORD *)&FireworksRecipe::ID == *(_QWORD *)result )
                {
                  result = *(_QWORD *)(result + 8) ^ dword_28051F8 | (*(_QWORD *)(result + 8) >> 32) ^ unk_28051FC;
                  if ( !result )
                  {
                    v26 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
                    v27 = (FireworksRecipe *)operator new(0x50u);
                    FireworksRecipe::FireworksRecipe(v27, v26);
                    v28 = v27;
                    Recipes::addMultiRecipe((int)v3, (int *)&v28);
                    if ( v28 )
                      (*(void (**)(void))(*(_DWORD *)v28 + 4))();
                    result = 0;
                  }
                }
              }
              else
                v24 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
                v25 = (BannerAddPatternRecipe *)operator new(0x50u);
                BannerAddPatternRecipe::BannerAddPatternRecipe(v25, v24);
                v29 = v25;
                Recipes::addMultiRecipe((int)v3, (int *)&v29);
                if ( v29 )
                  (*(void (**)(void))(*(_DWORD *)v29 + 4))();
                result = 0;
                v29 = 0;
            }
            else
              v21 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
              v22 = (BannerDuplicateRecipe *)operator new(0x50u);
              BannerDuplicateRecipe::BannerDuplicateRecipe(v22, v21);
              v30 = v22;
              Recipes::addMultiRecipe((int)v3, (int *)&v30);
              if ( v30 )
                (*(void (**)(void))(*(_DWORD *)v30 + 4))();
              result = 0;
              v30 = 0;
          }
          else
            v18 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
            v19 = (BookCloningRecipe *)operator new(0x50u);
            BookCloningRecipe::BookCloningRecipe(v19, v18);
            v31 = v19;
            Recipes::addMultiRecipe((int)v3, (int *)&v31);
            if ( v31 )
              (*(void (**)(void))(*(_DWORD *)v31 + 4))();
            result = 0;
            v31 = 0;
        }
        else
          v15 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
          v16 = (MapUpgradingRecipe *)operator new(0x50u);
          MapUpgradingRecipe::MapUpgradingRecipe(v16, v15);
          v32 = v16;
          Recipes::addMultiRecipe((int)v3, (int *)&v32);
          if ( v32 )
            (*(void (**)(void))(*(_DWORD *)v32 + 4))();
          result = 0;
          v32 = 0;
      }
      else
        v12 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
        v13 = (MapCloningRecipe *)operator new(0x50u);
        MapCloningRecipe::MapCloningRecipe(v13, v12);
        v33 = v13;
        Recipes::addMultiRecipe((int)v3, (int *)&v33);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        result = 0;
        v33 = 0;
    }
    else
      v9 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
      v10 = (MapExtendingRecipe *)operator new(0x58u);
      MapExtendingRecipe::MapExtendingRecipe(v10, v9);
      v34 = v10;
      Recipes::addMultiRecipe((int)v3, (int *)&v34);
      if ( v34 )
        (*(void (**)(void))(*(_DWORD *)v34 + 4))();
      result = 0;
      v34 = 0;
  }
  else
    v5 = (const mce::UUID *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
    v6 = (RepairItemRecipe *)operator new(0x50u);
    RepairItemRecipe::RepairItemRecipe(v6, v5);
    v35 = v6;
    Recipes::addRepairItemRecipe((int)v3, (int *)&v35);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    result = 0;
    v35 = 0;
  return result;
}


int __fastcall CraftingDataEntry::fillFromRecipe(CraftingDataEntry *this, const Recipe *a2)
{
  const Recipe *v2; // r5@1
  CraftingDataEntry *v3; // r4@1
  int result; // r0@2
  int v5; // r0@4
  bool v6; // zf@5
  CraftingDataEntry *v7; // r0@5
  unsigned __int64 *v8; // r8@7
  unsigned __int64 *v9; // r7@7
  int v10; // r6@7
  _DWORD *v11; // r5@7
  int v12; // r8@8
  int v13; // r9@8
  unsigned __int64 *v14; // r10@8
  unsigned __int64 *v15; // r7@8
  int v16; // r6@8
  unsigned __int64 *v17; // r8@10
  unsigned __int64 *v18; // r7@10
  int v19; // r6@10

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(const Recipe *))(*(_DWORD *)a2 + 44))(a2) == 1 )
    return j_j_j__ZN17CraftingDataEntry19fillFromMultiRecipeERK11MultiRecipe(v3, v2);
  if ( (*(int (__fastcall **)(const Recipe *))(*(_DWORD *)v2 + 24))(v2) == 1 )
  {
    v5 = (*(int (__fastcall **)(const Recipe *))(*(_DWORD *)v2 + 36))(v2);
    if ( *(_QWORD *)&ShulkerBoxRecipe::ID == *(_QWORD *)v5 )
    {
      v6 = *(_QWORD *)(v5 + 8) == qword_2805A88;
      v7 = (CraftingDataEntry *)((char *)v3 + 88);
      if ( v6 )
      {
        *(_DWORD *)v7 = 5;
        v8 = (unsigned __int64 *)ShapelessRecipe::getItems(v2);
        v9 = (unsigned __int64 *)(*(int (__fastcall **)(const Recipe *))(*(_DWORD *)v2 + 20))(v2);
        v10 = (*(int (__fastcall **)(const Recipe *))(*(_DWORD *)v2 + 36))(v2);
        v11 = operator new(0x68u);
        ShulkerBoxRecipe::ShulkerBoxRecipe(v11, v8, v9, v10);
        goto LABEL_11;
      }
    }
    else
    *(_DWORD *)v7 = 0;
    v17 = (unsigned __int64 *)ShapelessRecipe::getItems(v2);
    v18 = (unsigned __int64 *)(*(int (__fastcall **)(const Recipe *))(*(_DWORD *)v2 + 20))(v2);
    v19 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 36))(v2);
    v11 = operator new(0x60u);
    ShapelessRecipe::ShapelessRecipe(v11, v17, v18, v19);
  }
  else
    *((_DWORD *)v3 + 22) = 1;
    v12 = Recipe::getWidth(v2);
    v13 = Recipe::getHeight(v2);
    v14 = (unsigned __int64 *)ShapedRecipe::getItems(v2);
    v15 = (unsigned __int64 *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 20))(v2);
    v16 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 36))(v2);
    ShapedRecipe::ShapedRecipe(v11, v12, v13, v14, v15, v16);
LABEL_11:
  result = *(_DWORD *)v3;
  *(_DWORD *)v3 = v11;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall CraftingDataEntry::addFurnaceRecipe(CraftingDataEntry *this, FurnaceRecipes *a2)
{
  return j_j_j__ZN14FurnaceRecipes16addFurnaceRecipeEiRK12ItemInstance(
           a2,
           *((_DWORD *)this + 1),
           (CraftingDataEntry *)((char *)this + 16));
}


_DWORD *__fastcall CraftingDataEntry::addShapedRecipe(CraftingDataEntry *this, Recipes *a2)
{
  Recipe *v2; // r7@1
  Recipes *v3; // r8@1
  int v4; // r9@1
  int v5; // r10@1
  unsigned __int64 *v6; // r4@1
  unsigned __int64 *v7; // r5@1
  int v8; // r6@1
  _DWORD *v9; // r7@1
  _DWORD *result; // r0@1
  _DWORD *v11; // [sp+Ch] [bp-24h]@1

  v2 = *(Recipe **)this;
  v3 = a2;
  v4 = Recipe::getWidth(*(Recipe **)this);
  v5 = Recipe::getHeight(v2);
  v6 = (unsigned __int64 *)ShapedRecipe::getItems(v2);
  v7 = (unsigned __int64 *)(*(int (__fastcall **)(Recipe *))(*(_DWORD *)v2 + 20))(v2);
  v8 = (*(int (__fastcall **)(Recipe *))(*(_DWORD *)v2 + 36))(v2);
  v9 = operator new(0x60u);
  ShapedRecipe::ShapedRecipe(v9, v4, v5, v6, v7, v8);
  v11 = v9;
  Recipes::addDirectShapedRecipe((int)v3, (int *)&v11);
  result = v11;
  if ( v11 )
    result = (_DWORD *)(*(int (**)(void))(*v11 + 4))();
  return result;
}


int __fastcall CraftingDataEntry::read(CraftingDataEntry *this, ReadOnlyBinaryStream *a2)
{
  ReadOnlyBinaryStream *v2; // r5@1
  CraftingDataEntry *v3; // r4@1
  unsigned int v4; // r0@1
  _DWORD *v5; // r5@2
  int v6; // r0@2
  _DWORD *v7; // r5@5
  int v8; // r0@5
  FireworksRecipe *v9; // r5@13
  _DWORD *v10; // r5@14
  int v11; // r1@14
  int v12; // r0@14
  void *v13; // r4@15
  int v14; // r5@15
  void *v15; // r0@16
  void *v16; // r0@18
  int v17; // r0@20
  int v18; // r0@50
  __int64 v20; // [sp+0h] [bp-150h]@11
  __int64 v21; // [sp+8h] [bp-148h]@12
  void **v22; // [sp+10h] [bp-140h]@14
  void *v23; // [sp+6Ch] [bp-E4h]@14
  void *v24; // [sp+70h] [bp-E0h]@14
  int v25; // [sp+74h] [bp-DCh]@14
  char v26; // [sp+78h] [bp-D8h]@2
  char v27; // [sp+D8h] [bp-78h]@5

  v2 = a2;
  v3 = this;
  v4 = ReadOnlyBinaryStream::getVarInt(a2);
  *((_DWORD *)v3 + 22) = v4;
  switch ( v4 )
  {
    case 0u:
      ReadOnlyBinaryStream::getType<ShapelessRecipe>(&v26, (int)v2);
      v5 = operator new(0x60u);
      ShapelessRecipe::ShapelessRecipe(v5, (int)&v26);
      v6 = *(_DWORD *)v3;
      *(_DWORD *)v3 = v5;
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      ShapelessRecipe::~ShapelessRecipe((ShapelessRecipe *)&v26);
      return 0;
    case 1u:
      ReadOnlyBinaryStream::getType<ShapedRecipe>(&v27, (int)v2);
      v7 = operator new(0x60u);
      ShapedRecipe::ShapedRecipe(v7, (int)&v27);
      v8 = *(_DWORD *)v3;
      *(_DWORD *)v3 = v7;
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      ShapedRecipe::~ShapedRecipe((ShapedRecipe *)&v27);
    case 2u:
      *((_DWORD *)v3 + 1) = ReadOnlyBinaryStream::getVarInt(v2);
      goto LABEL_10;
    case 3u:
      *((_DWORD *)v3 + 2) = ReadOnlyBinaryStream::getVarInt(v2);
LABEL_10:
      ReadOnlyBinaryStream::readType<ItemInstance>((int)v2, (int)v3 + 16);
    case 4u:
      ReadOnlyBinaryStream::getType<mce::UUID>((int)&v20, (int)v2);
      if ( *(_QWORD *)&RepairItemRecipe::ID ^ v20 || qword_2805898 != v21 )
      {
        if ( *(_QWORD *)&MapExtendingRecipe::ID ^ v20 || qword_28054F8 != v21 )
        {
          if ( *(_QWORD *)&MapCloningRecipe::ID ^ v20 || qword_28053E8 != v21 )
          {
            if ( *(_QWORD *)&MapUpgradingRecipe::ID ^ v20 || qword_2805608 != v21 )
            {
              if ( *(_QWORD *)&BookCloningRecipe::ID ^ v20 || qword_2805148 != v21 )
              {
                if ( *(_QWORD *)&BannerDuplicateRecipe::ID ^ v20 || qword_2805088 != v21 )
                {
                  if ( *(_QWORD *)&BannerAddPatternRecipe::ID ^ v20 || qword_2805098 != v21 )
                  {
                    if ( v20 != *(_QWORD *)&FireworksRecipe::ID || qword_28051F8 != v21 )
                      return 0;
                    v9 = (FireworksRecipe *)operator new(0x50u);
                    FireworksRecipe::FireworksRecipe(v9, (const mce::UUID *)&v20);
                  }
                  else
                    BannerAddPatternRecipe::BannerAddPatternRecipe(v9, (const mce::UUID *)&v20);
                }
                else
                  v9 = (FireworksRecipe *)operator new(0x50u);
                  BannerDuplicateRecipe::BannerDuplicateRecipe(v9, (const mce::UUID *)&v20);
              }
              else
                v9 = (FireworksRecipe *)operator new(0x50u);
                BookCloningRecipe::BookCloningRecipe(v9, (const mce::UUID *)&v20);
            }
            else
              v9 = (FireworksRecipe *)operator new(0x50u);
              MapUpgradingRecipe::MapUpgradingRecipe(v9, (const mce::UUID *)&v20);
          }
          else
            v9 = (FireworksRecipe *)operator new(0x50u);
            MapCloningRecipe::MapCloningRecipe(v9, (const mce::UUID *)&v20);
        }
        else
          v9 = (FireworksRecipe *)operator new(0x58u);
          MapExtendingRecipe::MapExtendingRecipe(v9, (const mce::UUID *)&v20);
      }
      else
        v9 = (FireworksRecipe *)operator new(0x50u);
        RepairItemRecipe::RepairItemRecipe(v9, (const mce::UUID *)&v20);
      v18 = *(_DWORD *)v3;
      *(_DWORD *)v3 = v9;
      if ( v18 )
        (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    case 5u:
      ReadOnlyBinaryStream::getType<ShulkerBoxRecipe>((int)&v22, (int)v2);
      v10 = operator new(0x68u);
      ShapelessRecipe::ShapelessRecipe(v10, (int)&v22);
      *v10 = &off_2701404;
      v10[23] = v23;
      v23 = 0;
      v11 = (int)v24;
      v24 = 0;
      v10[24] = v11;
      v10[25] = v25;
      v25 = 0;
      v12 = *(_DWORD *)v3;
      *(_DWORD *)v3 = v10;
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
        v13 = v24;
        v14 = (int)v23;
        v22 = &off_2701404;
        if ( v23 != v24 )
          do
            v15 = *(void **)(v14 + 52);
            if ( v15 )
              operator delete(v15);
            v16 = *(void **)(v14 + 36);
            if ( v16 )
              operator delete(v16);
            v17 = *(_DWORD *)(v14 + 8);
            if ( v17 )
              (*(void (**)(void))(*(_DWORD *)v17 + 4))();
            *(_DWORD *)(v14 + 8) = 0;
            v14 += 72;
          while ( v13 != (void *)v14 );
          v13 = v23;
        if ( v13 )
          operator delete(v13);
      ShapelessRecipe::~ShapelessRecipe((ShapelessRecipe *)&v22);
    default:
  }
}


int __fastcall CraftingDataEntry::fillFromFurnaceRecipe(CraftingDataEntry *this, int a2, const ItemInstance *a3)
{
  *((_DWORD *)this + 22) = 2;
  *((_DWORD *)this + 1) = a2;
  return j_j_j__ZN12ItemInstanceaSERKS__2((int)this + 16, (int)a3);
}


int __fastcall CraftingDataEntry::addFurnaceAuxRecipe(CraftingDataEntry *this, FurnaceRecipes *a2)
{
  return j_j_j__ZN14FurnaceRecipes23addFurnaceRecipeAuxDataEssRK12ItemInstance(
           a2,
           *((_WORD *)this + 2),
           *((_WORD *)this + 4),
           (CraftingDataEntry *)((char *)this + 16));
}


const void **__fastcall CraftingDataEntry::write(CraftingDataEntry *this, BinaryStream *a2)
{
  CraftingDataEntry *v2; // r5@1
  BinaryStream *v3; // r4@1
  const void **result; // r0@1
  unsigned __int8 v5; // cf@1
  char v6; // zf@1
  int v7; // r1@5
  _QWORD *v8; // r1@8

  v2 = this;
  v3 = a2;
  BinaryStream::writeVarInt(a2, *((_DWORD *)this + 22));
  result = (const void **)*((_DWORD *)v2 + 22);
  if ( !(!v6 & v5) )
  {
    switch ( result )
    {
      case 0u:
        result = j_j_j__ZN12BinaryStream9writeTypeI15ShapelessRecipeEEvRKT_((int)v3, *(ShapelessRecipe **)v2);
        break;
      case 1u:
        result = j_j_j__ZN12BinaryStream9writeTypeI12ShapedRecipeEEvRKT_((int)v3, *(Recipe **)v2);
      case 2u:
        v7 = *((_DWORD *)v2 + 1);
        goto LABEL_7;
      case 3u:
        BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 1));
        v7 = *((_DWORD *)v2 + 2);
LABEL_7:
        BinaryStream::writeVarInt(v3, v7);
        result = j_j_j__ZN12BinaryStream9writeTypeI12ItemInstanceEEvRKT_(
                   (int)v3,
                   (CraftingDataEntry *)((char *)v2 + 16));
      case 4u:
        v8 = (_QWORD *)(*(int (**)(void))(**(_DWORD **)v2 + 36))();
        result = j_j_j__ZN12BinaryStream9writeTypeIN3mce4UUIDEEEvRKT_((int)v3, v8);
      case 5u:
        result = j_j_j__ZN12BinaryStream9writeTypeI16ShulkerBoxRecipeEEvRKT_((int)v3, *(ShapelessRecipe **)v2);
    }
  }
  return result;
}


int __fastcall CraftingDataEntry::fillFromMultiRecipe(CraftingDataEntry *this, const MultiRecipe *a2)
{
  CraftingDataEntry *v2; // r4@1
  const MultiRecipe *v3; // r5@1
  int v4; // r0@1
  const mce::UUID *v5; // r6@3
  RepairItemRecipe *v6; // r5@3
  int v7; // r0@4
  const mce::UUID *v8; // r6@6
  int v9; // r0@7
  const mce::UUID *v10; // r6@9
  int v11; // r0@10
  const mce::UUID *v12; // r6@12
  int v13; // r0@13
  const mce::UUID *v14; // r6@15
  int v15; // r0@16
  const mce::UUID *v16; // r6@18
  int v17; // r0@19
  const mce::UUID *v18; // r6@21
  int result; // r0@22
  const mce::UUID *v20; // r6@24

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 22) = 4;
  v4 = (*(int (__fastcall **)(const MultiRecipe *))(*(_DWORD *)a2 + 36))(a2);
  if ( *(_QWORD *)&RepairItemRecipe::ID == *(_QWORD *)v4 && *(_QWORD *)(v4 + 8) == qword_2805898 )
  {
    v5 = (const mce::UUID *)(*(int (__fastcall **)(const MultiRecipe *))(*(_DWORD *)v3 + 36))(v3);
    v6 = (RepairItemRecipe *)operator new(0x50u);
    RepairItemRecipe::RepairItemRecipe(v6, v5);
    goto LABEL_25;
  }
  v7 = (*(int (__fastcall **)(const MultiRecipe *))(*(_DWORD *)v3 + 36))(v3);
  if ( *(_QWORD *)&MapExtendingRecipe::ID == *(_QWORD *)v7 && *(_QWORD *)(v7 + 8) == qword_28054F8 )
    v8 = (const mce::UUID *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
    v6 = (RepairItemRecipe *)operator new(0x58u);
    MapExtendingRecipe::MapExtendingRecipe(v6, v8);
  v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
  if ( *(_QWORD *)&MapCloningRecipe::ID == *(_QWORD *)v9 && *(_QWORD *)(v9 + 8) == qword_28053E8 )
    v10 = (const mce::UUID *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
    MapCloningRecipe::MapCloningRecipe(v6, v10);
  v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
  if ( *(_QWORD *)&MapUpgradingRecipe::ID == *(_QWORD *)v11 && *(_QWORD *)(v11 + 8) == qword_2805608 )
    v12 = (const mce::UUID *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
    MapUpgradingRecipe::MapUpgradingRecipe(v6, v12);
  v13 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
  if ( *(_QWORD *)&BookCloningRecipe::ID == *(_QWORD *)v13 && *(_QWORD *)(v13 + 8) == qword_2805148 )
    v14 = (const mce::UUID *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
    BookCloningRecipe::BookCloningRecipe(v6, v14);
  v15 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
  if ( *(_QWORD *)&BannerDuplicateRecipe::ID == *(_QWORD *)v15 && *(_QWORD *)(v15 + 8) == qword_2805088 )
    v16 = (const mce::UUID *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
    BannerDuplicateRecipe::BannerDuplicateRecipe(v6, v16);
  v17 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
  if ( *(_QWORD *)&BannerAddPatternRecipe::ID == *(_QWORD *)v17 && *(_QWORD *)(v17 + 8) == qword_2805098 )
    v18 = (const mce::UUID *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
    BannerAddPatternRecipe::BannerAddPatternRecipe(v6, v18);
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
  if ( *(_QWORD *)&FireworksRecipe::ID == *(_QWORD *)result )
    result = *(_QWORD *)(result + 8) ^ dword_28051F8 | (*(_QWORD *)(result + 8) >> 32) ^ unk_28051FC;
    if ( !result )
    {
      v20 = (const mce::UUID *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 36))(v3);
      v6 = (RepairItemRecipe *)operator new(0x50u);
      FireworksRecipe::FireworksRecipe(v6, v20);
LABEL_25:
      result = *(_DWORD *)v2;
      *(_DWORD *)v2 = v6;
      if ( result )
        result = (*(int (**)(void))(*(_DWORD *)result + 4))();
      return result;
    }
  return result;
}


_DWORD *__fastcall CraftingDataEntry::addShapelessRecipe(CraftingDataEntry *this, Recipes *a2)
{
  ShapelessRecipe *v2; // r5@1
  Recipes *v3; // r8@1
  unsigned __int64 *v4; // r6@1
  unsigned __int64 *v5; // r7@1
  int v6; // r4@1
  _DWORD *v7; // r5@1
  _DWORD *result; // r0@1
  _DWORD *v9; // [sp+4h] [bp-1Ch]@1

  v2 = *(ShapelessRecipe **)this;
  v3 = a2;
  v4 = (unsigned __int64 *)ShapelessRecipe::getItems(*(ShapelessRecipe **)this);
  v5 = (unsigned __int64 *)(*(int (__fastcall **)(ShapelessRecipe *))(*(_DWORD *)v2 + 20))(v2);
  v6 = (*(int (__fastcall **)(ShapelessRecipe *))(*(_DWORD *)v2 + 36))(v2);
  v7 = operator new(0x60u);
  ShapelessRecipe::ShapelessRecipe(v7, v4, v5, v6);
  v9 = v7;
  Recipes::addDirectShapelessRecipe((int)v3, (int *)&v9);
  result = v9;
  if ( v9 )
    result = (_DWORD *)(*(int (**)(void))(*v9 + 4))();
  return result;
}
