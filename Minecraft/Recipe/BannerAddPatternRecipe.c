

Recipe *__fastcall BannerAddPatternRecipe::~BannerAddPatternRecipe(BannerAddPatternRecipe *this)
{
  BannerAddPatternRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_27011AC;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN6RecipeD2Ev_0(v1);
}


signed int __fastcall BannerAddPatternRecipe::size(BannerAddPatternRecipe *this)
{
  return 10;
}


signed int __fastcall BannerAddPatternRecipe::getCraftingSize(BannerAddPatternRecipe *this)
{
  return 1;
}


void __fastcall BannerAddPatternRecipe::~BannerAddPatternRecipe(BannerAddPatternRecipe *this)
{
  BannerAddPatternRecipe::~BannerAddPatternRecipe(this);
}


void __fastcall BannerAddPatternRecipe::~BannerAddPatternRecipe(BannerAddPatternRecipe *this)
{
  BannerAddPatternRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_27011AC;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  Recipe::~Recipe(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


char *__fastcall BannerAddPatternRecipe::getResultItem(BannerAddPatternRecipe *this)
{
  return (char *)this + 68;
}


void *__fastcall BannerAddPatternRecipe::getIngredient(BannerAddPatternRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}


_DWORD *__fastcall BannerAddPatternRecipe::BannerAddPatternRecipe(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  int v2; // r12@1
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  _DWORD *result; // r0@1

  v1 = a1;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1));
  v2 = (int)(v1 + 8);
  v1[10] = 0;
  v1[11] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[14] = 0;
  v1[15] = 0;
  v1[16] = 0;
  *v1 = &off_27011AC;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v3 = unk_2805094;
  v4 = qword_2805098;
  *(_DWORD *)v2 = BannerAddPatternRecipe::ID;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  result = v1;
  v1[11] = HIDWORD(v4);
  return result;
}


BannerPattern *__fastcall BannerAddPatternRecipe::matchPatterns(BannerAddPatternRecipe *this, CraftingContainer *a2)
{
  CraftingContainer *v2; // r8@1
  int v3; // r6@1
  BannerPattern **v4; // r7@1
  BannerPattern *result; // r0@1
  int v6; // r4@3
  int v7; // r0@3
  int v8; // r9@3
  char v9; // r10@4
  int v10; // r4@4
  char v11; // r5@4
  char v12; // r9@4
  int v13; // r0@5
  ItemInstance *v14; // r0@5
  signed int v15; // r6@6
  char *v17; // r0@16
  bool v18; // zf@26
  int v19; // r0@30
  char v20; // r0@32
  char v21; // r1@34
  __int64 v22; // kr08_8@39
  ItemInstance *v23; // r5@39
  char *v25; // r0@42
  char *v26; // r4@42
  _DWORD *v27; // r6@42
  __int64 v28; // r0@42
  signed int v29; // r2@42
  int v30; // r4@45
  int v31; // r0@45
  int v32; // r3@45
  int v38; // r7@45
  unsigned int v39; // r5@45
  bool v40; // zf@47
  int v41; // r3@50
  int v42; // r0@51
  unsigned int v43; // r2@51
  signed int v44; // r9@55
  int v45; // r0@56
  unsigned int v46; // r2@56
  signed int v47; // r1@59
  _DWORD *i; // r7@69
  unsigned int *v49; // r2@71
  signed int v50; // r1@73
  int *v51; // r0@79
  bool v52; // zf@83
  int v53; // r0@87
  int v54; // [sp+4h] [bp-CCh]@1
  BannerPattern **v55; // [sp+10h] [bp-C0h]@32
  signed int v56; // [sp+14h] [bp-BCh]@36
  int v57; // [sp+18h] [bp-B8h]@39
  int v58; // [sp+20h] [bp-B0h]@67
  void *v59; // [sp+3Ch] [bp-94h]@65
  void *v60; // [sp+4Ch] [bp-84h]@63
  int v61; // [sp+60h] [bp-70h]@5
  int v62; // [sp+68h] [bp-68h]@24
  void *v63; // [sp+84h] [bp-4Ch]@22
  void *ptr; // [sp+94h] [bp-3Ch]@20

  v2 = a2;
  v3 = dword_280E154;
  v4 = (BannerPattern **)BannerPattern::mPatterns;
  result = 0;
  v54 = dword_280E154;
  if ( BannerPattern::mPatterns != dword_280E154 )
  {
    while ( 1 )
    {
      if ( BannerPattern::hasPattern(*v4) == 1 )
      {
        v6 = BannerPattern::hasPatternItem(*v4);
        v7 = (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v2 + 44))(v2);
        v8 = v7;
        if ( v6 == 1 )
        {
          v9 = 1;
          v10 = 0;
          v11 = 0;
          v12 = 0;
          if ( v7 >= 1 )
          {
            while ( 1 )
            {
              v13 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v2 + 16))(v2, v10);
              v14 = ItemInstance::ItemInstance((ItemInstance *)&v61, v13);
              if ( ItemInstance::isNull(v14) )
              {
                v15 = 6;
              }
              else
                _ZF = v61 == 0;
                if ( v61 )
                  _ZF = v61 == Item::mBanner;
                if ( _ZF )
                  goto LABEL_20;
                if ( (*(int (**)(void))(*(_DWORD *)v61 + 96))() == 1 )
                {
                  if ( !(v11 & 1) )
                  {
                    v11 = 1;
LABEL_18:
                    v15 = 0;
                    goto LABEL_20;
                  }
                  v15 = 4;
                  v9 = 0;
                  v11 = 1;
                }
                else
                  if ( !(v12 & 1) )
                    v17 = BannerPattern::getPatternItem(*v4);
                    if ( ItemInstance::sameItemAndAux((ItemInstance *)&v61, (const ItemInstance *)v17) != 1 )
                    {
                      v15 = 4;
                      v9 = 0;
                      v12 = 0;
                      goto LABEL_20;
                    }
                    v12 = 1;
                    goto LABEL_18;
                  v12 = 1;
LABEL_20:
              if ( ptr )
                operator delete(ptr);
              if ( v63 )
                operator delete(v63);
              if ( v62 )
                (*(void (**)(void))(*(_DWORD *)v62 + 4))();
              v18 = v15 == 6;
              if ( v15 != 6 )
                v18 = v15 == 0;
              if ( v18 )
                v19 = (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v2 + 44))(v2);
                if ( v9 & 1 )
                  if ( ++v10 < v19 )
                    continue;
              break;
            }
          }
          v20 = v11 & 1;
          v55 = v4;
          if ( v11 & 1 )
            v20 = v9;
          v21 = v12 & 1;
          if ( v12 & 1 )
            v21 = v20;
          LOBYTE(v56) = v21;
        }
        else
          v22 = *(_QWORD *)BannerPattern::getPattern(*v4);
          v23 = (ItemInstance *)&v57;
          if ( v8 != *(_DWORD *)(**(_DWORD **)BannerPattern::getPattern(*v4) - 12)
                   * ((HIDWORD(v22) - (signed int)v22) >> 2) )
            goto LABEL_94;
          if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 44))(v2) < 1 )
            return *v4;
          _R10 = 0;
          v56 = 1;
          do
            v25 = BannerPattern::getPattern(*v55);
            v26 = v25;
            v27 = 0;
            v28 = *(_QWORD *)v25;
            v29 = HIDWORD(v28) - v28;
            if ( (HIDWORD(v28) - (signed int)v28) >> 2 )
              if ( (unsigned int)(v29 >> 2) >= 0x40000000 )
                sub_21E57F4();
              v27 = operator new(v29);
              v28 = *(_QWORD *)v26;
            v30 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                    v28,
                    SHIDWORD(v28),
                    (int)v27);
            v31 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v2 + 16))(v2, _R10);
            ItemInstance::ItemInstance(v23, v31);
            ItemInstance::isNull(v23);
            _R1 = 1431655766;
            __asm { SMMUL.W         R1, R10, R1 }
            v38 = _R1 + (_R1 >> 31);
            v39 = _R10 - 3 * v38;
            if ( !_ZF )
              goto LABEL_100;
            v40 = v57 == 0;
            if ( v57 )
              v40 = v57 == Item::mBanner;
            if ( v40 )
LABEL_100:
              v45 = v27[v38];
              v46 = *(_DWORD *)(v45 - 12);
              if ( v46 <= v39 )
                sub_21E5B04(
                  "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)",
                  _R10 - 3 * v38,
                  v46,
                  v32);
              if ( *(_DWORD *)(v45 - 4) >= 0 )
                sub_21E8010((const void **)&v27[v38]);
                v45 = v27[v38];
              v44 = 7;
              v47 = v56;
              if ( *(_BYTE *)(v45 + v39) != 32 )
                v47 = 0;
              v56 = v47;
              if ( *(_BYTE *)(v45 + v39) == 32 )
                v44 = 9;
            else
              if ( (*(int (**)(void))(*(_DWORD *)v57 + 96))() != 1 )
                goto LABEL_101;
              v42 = v27[v38];
              v43 = *(_DWORD *)(v42 - 12);
              if ( v43 <= v39 )
                  v43,
                  v41);
              if ( *(_DWORD *)(v42 - 4) >= 0 )
                v42 = v27[v38];
              if ( *(_BYTE *)(v42 + v39) != 32 )
                ItemInstance::getAuxValue((ItemInstance *)&v57);
                v44 = 0;
LABEL_101:
                v44 = 7;
                v56 = 0;
            if ( v60 )
              operator delete(v60);
            if ( v59 )
              operator delete(v59);
            if ( v58 )
              (*(void (**)(void))(*(_DWORD *)v58 + 4))();
            for ( i = v27; i != (_DWORD *)v30; ++i )
              v51 = (int *)(*i - 12);
              if ( v51 != &dword_28898C0 )
                v49 = (unsigned int *)(*i - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v50 = __ldrex(v49);
                  while ( __strex(v50 - 1, v49) );
                  v50 = (*v49)--;
                if ( v50 <= 0 )
                  j_j_j_j__ZdlPv_9(v51);
            if ( v27 )
              operator delete(v27);
            v52 = v44 == 9;
            if ( v44 != 9 )
              v52 = v44 == 0;
            if ( !v52 )
            v53 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 44))(v2);
            if ( !(v56 & 1) )
            ++_R10;
            v23 = (ItemInstance *)&v57;
          while ( _R10 < v53 );
        v4 = v55;
        v3 = v54;
        if ( v56 & 1 )
          return *v4;
      }
LABEL_94:
      ++v4;
      if ( v4 == (BannerPattern **)v3 )
        return 0;
    }
  }
  return result;
}


int __fastcall BannerAddPatternRecipe::matches(BannerAddPatternRecipe *this, CraftingContainer *a2, Level *a3)
{
  CraftingContainer *v3; // r4@1
  int v4; // r5@1
  signed int v5; // r7@2
  int v6; // r0@3
  signed int v7; // r6@4
  char v8; // r0@5
  BannerAddPatternRecipe *v9; // r0@18
  int v11; // [sp+0h] [bp-68h]@3
  int v12; // [sp+8h] [bp-60h]@15
  void *v13; // [sp+24h] [bp-44h]@13
  void *ptr; // [sp+34h] [bp-34h]@11

  v3 = a2;
  v4 = 0;
  if ( (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)a2 + 44))(a2) >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = (*(int (__fastcall **)(CraftingContainer *, signed int))(*(_DWORD *)v3 + 16))(v3, v5);
      ItemInstance::ItemInstance((ItemInstance *)&v11, v6);
      if ( ItemInstance::isNull((ItemInstance *)&v11) )
      {
        v7 = 4;
      }
      else
        v7 = 1;
        v8 = 0;
        if ( v11 != Item::mBanner )
        {
          v7 = 4;
          v8 = 1;
        }
        if ( !(((unsigned __int8)v8 | (unsigned __int8)v4) & 1) )
          v7 = 0;
          LOBYTE(v4) = 0;
          if ( BannerBlockEntity::getPatternCount((BannerBlockEntity *)&v11, (const ItemInstance *)Item::mBanner) < 6 )
            LOBYTE(v4) = 1;
          else
            v7 = 1;
      if ( ptr )
        operator delete(ptr);
      if ( v13 )
        operator delete(v13);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
      if ( (v7 | 4) != 4 )
        return 0;
      v9 = (BannerAddPatternRecipe *)(*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3);
      ++v5;
    }
    while ( v5 < (signed int)v9 );
    if ( v4 & 1 )
      v4 = BannerAddPatternRecipe::matchPatterns(v9, v3) != 0;
    else
      v4 = 0;
  }
  return v4;
}


unsigned __int64 *__fastcall BannerAddPatternRecipe::assemble(BannerAddPatternRecipe *this, CraftingContainer *a2)
{
  BannerAddPatternRecipe *v2; // r10@1
  CraftingContainer *v3; // r6@1
  int v4; // r8@1
  unsigned __int64 *v5; // r9@1
  int v6; // r5@1
  int v7; // r4@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  signed int i; // r4@10
  BannerAddPatternRecipe *v12; // r0@18
  int v13; // r0@19
  BannerPattern *v14; // r11@33
  int v15; // r8@34
  int v16; // r5@34
  int v17; // r0@36
  signed int v18; // r7@37
  int *v19; // r4@50
  void *v20; // r6@50
  ListTag *v21; // r5@52
  int v22; // r10@52
  int v23; // r7@57
  void *v24; // r11@57
  int *v25; // r0@57
  int v26; // r0@57
  void *v27; // r5@58
  int *v28; // r0@58
  int v29; // r0@61
  void *v30; // r5@64
  __int64 v31; // r0@69
  BannerPattern *v33; // [sp+0h] [bp-170h]@50
  BannerAddPatternRecipe *v34; // [sp+8h] [bp-168h]@50
  void *v35; // [sp+14h] [bp-15Ch]@66
  void *v36; // [sp+18h] [bp-158h]@64
  void *v37; // [sp+1Ch] [bp-154h]@61
  void *v38; // [sp+20h] [bp-150h]@58
  void *v39; // [sp+24h] [bp-14Ch]@53
  int v40; // [sp+28h] [bp-148h]@36
  int v41; // [sp+30h] [bp-140h]@47
  void *v42; // [sp+4Ch] [bp-124h]@45
  void *v43; // [sp+5Ch] [bp-114h]@43
  char v44; // [sp+70h] [bp-100h]@21
  int v45; // [sp+78h] [bp-F8h]@25
  void *v46; // [sp+94h] [bp-DCh]@23
  void *v47; // [sp+A4h] [bp-CCh]@21
  int v48; // [sp+B8h] [bp-B8h]@19
  BannerAddPatternRecipe *v49; // [sp+C0h] [bp-B0h]@15
  void *v50; // [sp+DCh] [bp-94h]@13
  void *ptr; // [sp+ECh] [bp-84h]@11
  char v52; // [sp+100h] [bp-70h]@10
  int v53; // [sp+108h] [bp-68h]@76
  void *v54; // [sp+124h] [bp-4Ch]@74
  void *v55; // [sp+134h] [bp-3Ch]@72

  v2 = this;
  v3 = a2;
  v5 = (unsigned __int64 *)((char *)this + 68);
  v4 = *((_DWORD *)this + 17);
  v6 = *((_DWORD *)this + 18);
  if ( v6 != v4 )
  {
    v7 = *((_DWORD *)this + 17);
    do
    {
      v8 = *(void **)(v7 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    }
    while ( v6 != v7 );
  }
  *((_DWORD *)v2 + 18) = v4;
  ItemInstance::ItemInstance((int)&v52);
  for ( i = 0; ; ++i )
    v12 = (BannerAddPatternRecipe *)(*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3);
    if ( i >= (signed int)v12 )
      break;
    v13 = (*(int (__fastcall **)(CraftingContainer *, signed int))(*(_DWORD *)v3 + 16))(v3, i);
    ItemInstance::ItemInstance((ItemInstance *)&v48, v13);
    if ( !ItemInstance::isNull((ItemInstance *)&v48) && v48 == Item::mBanner )
      ItemInstance::clone((ItemInstance *)&v44, (int)&v48);
      ItemInstance::operator=((int)&v52, (int)&v44);
      if ( v47 )
        operator delete(v47);
      if ( v46 )
        operator delete(v46);
      if ( v45 )
        (*(void (**)(void))(*(_DWORD *)v45 + 4))();
      v45 = 0;
      ItemInstance::set((ItemInstance *)&v52, 1);
      if ( ptr )
        operator delete(ptr);
      if ( v50 )
        operator delete(v50);
      v12 = v49;
      if ( v49 )
        v12 = (BannerAddPatternRecipe *)(*(int (**)(void))(*(_DWORD *)v49 + 4))();
    if ( ptr )
      operator delete(ptr);
    if ( v50 )
      operator delete(v50);
    if ( v49 )
      (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v14 = BannerAddPatternRecipe::matchPatterns(v12, v3);
  if ( v14 )
    v15 = 0;
    v16 = 0;
      if ( v16 >= (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3) )
        break;
      v17 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v16);
      ItemInstance::ItemInstance((ItemInstance *)&v40, v17);
      if ( ItemInstance::isNull((ItemInstance *)&v40) )
      {
        v18 = 1;
      }
      else if ( v40 )
        if ( (*(int (**)(void))(*(_DWORD *)v40 + 96))() )
        {
          v15 = ItemInstance::getAuxValue((ItemInstance *)&v40);
          v18 = 0;
        }
        else
          v18 = 1;
      else
      if ( v43 )
        operator delete(v43);
      if ( v42 )
        operator delete(v42);
      if ( v41 )
        (*(void (**)(void))(*(_DWORD *)v41 + 4))();
      ++v16;
    while ( v18 );
    v19 = (int *)ItemInstance::getUserData((ItemInstance *)&v52);
    v33 = v14;
    v20 = operator new(0x14u);
    v34 = v2;
    ListTag::ListTag((int)v20);
    if ( *v19 && CompoundTag::contains(*v19, (const void **)&BannerBlockEntity::TAG_PATTERNS, 9) == 1 )
      v21 = (ListTag *)CompoundTag::getList(*v19, (const void **)&BannerBlockEntity::TAG_PATTERNS);
      v22 = 0;
      while ( v22 < ListTag::size(v21) )
        v23 = ListTag::get(v21, v22);
        v24 = operator new(0x1Cu);
        CompoundTag::CompoundTag((int)v24);
        v25 = (int *)CompoundTag::getString(v23, (const void **)&BannerBlockEntity::TAG_PATTERN);
        CompoundTag::putString((int)v24, (const void **)&BannerBlockEntity::TAG_PATTERN, v25);
        v26 = CompoundTag::getInt(v23, (const void **)&BannerBlockEntity::TAG_COLOR);
        CompoundTag::putInt((int)v24, (const void **)&BannerBlockEntity::TAG_COLOR, v26);
        v39 = v24;
        ListTag::add((int)v20, (int *)&v39);
        if ( v39 )
          (*(void (__cdecl **)(void *))(*(_DWORD *)v39 + 4))(v39);
        ++v22;
        v39 = 0;
    v27 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v27);
    v28 = (int *)BannerPattern::getNameID(v33);
    v2 = v34;
    CompoundTag::putString((int)v27, (const void **)&BannerBlockEntity::TAG_PATTERN, v28);
    CompoundTag::putInt((int)v27, (const void **)&BannerBlockEntity::TAG_COLOR, v15);
    v38 = v27;
    ListTag::add((int)v20, (int *)&v38);
    if ( v38 )
      (*(void (**)(void))(*(_DWORD *)v38 + 4))();
    v38 = 0;
    if ( *v19 )
      CompoundTag::remove(*v19, (const void **)&BannerBlockEntity::TAG_PATTERNS);
      v29 = *v19;
      v37 = v20;
      CompoundTag::put(v29, (const void **)&BannerBlockEntity::TAG_PATTERNS, (int *)&v37);
      if ( v37 )
        (*(void (**)(void))(*(_DWORD *)v37 + 4))();
      v37 = 0;
    else
      v30 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v30);
      v36 = v20;
      CompoundTag::put((int)v30, (const void **)&BannerBlockEntity::TAG_PATTERNS, (int *)&v36);
      if ( v36 )
        (*(void (**)(void))(*(_DWORD *)v36 + 4))();
      v35 = v30;
      v36 = 0;
      ItemInstance::setUserData((int)&v52, (int *)&v35);
      if ( v35 )
        (*(void (**)(void))(*(_DWORD *)v35 + 4))();
      v35 = 0;
  v31 = *((_QWORD *)v2 + 9);
  if ( (_DWORD)v31 == HIDWORD(v31) )
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(v5, (int)&v52);
  else
    ItemInstance::ItemInstance((ItemInstance *)v31, (int)&v52);
    *((_DWORD *)v2 + 18) += 72;
  if ( v55 )
    operator delete(v55);
  if ( v54 )
    operator delete(v54);
  if ( v53 )
    (*(void (**)(void))(*(_DWORD *)v53 + 4))();
  return v5;
}


_DWORD *__fastcall BannerAddPatternRecipe::BannerAddPatternRecipe(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1

  v2 = a1;
  v3 = a2;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1));
  v2[10] = 0;
  v2[11] = 0;
  v4 = (int)(v2 + 8);
  v2[8] = 0;
  v2[9] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  *v2 = &off_27011AC;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)v4 = *(_DWORD *)v3;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  return v2;
}
