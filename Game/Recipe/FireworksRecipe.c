

Recipe *__fastcall FireworksRecipe::~FireworksRecipe(FireworksRecipe *this)
{
  FireworksRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701224;
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


signed int __fastcall FireworksRecipe::isShapeless(FireworksRecipe *this)
{
  return 1;
}


char *__fastcall FireworksRecipe::getResultItem(FireworksRecipe *this)
{
  return (char *)this + 68;
}


char *__fastcall FireworksRecipe::assemble(FireworksRecipe *this, CraftingContainer *a2)
{
  return (char *)this + 68;
}


signed int __fastcall FireworksRecipe::matches(FireworksRecipe *this, CraftingContainer *a2, Level *a3)
{
  unsigned int v3; // r7@1
  int v4; // r8@1
  CraftingContainer *v5; // r10@1
  int v6; // r5@1
  int v7; // r4@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  char *v11; // r11@10
  signed int v12; // r5@10
  int v13; // r9@10
  int v14; // r0@13
  int v15; // r4@15
  char v16; // r4@21
  char *v17; // r8@22
  char *v18; // r1@29
  char *v19; // r0@29
  int v20; // r11@29
  unsigned int v21; // r0@30
  char *v22; // r4@40
  bool v23; // zf@59
  signed int v24; // r0@59
  signed int v25; // r0@61
  bool v26; // zf@66
  bool v27; // nf@66
  unsigned __int8 v28; // vf@66
  int v29; // r0@73
  __int64 v30; // r0@73
  signed int v31; // r6@52
  char *v32; // r0@52
  bool v33; // zf@77
  char *v34; // r1@81
  int v35; // r4@81
  void *v36; // r0@81
  char *v37; // r6@83
  int v38; // r5@83
  char *v39; // r8@85
  ItemInstance *v40; // r0@85
  __int64 v41; // r0@89
  bool v42; // zf@94
  ItemInstance *v43; // r0@98
  int *v44; // r0@98
  int v45; // r0@98
  int v46; // r6@98
  int *v47; // r0@98
  unsigned int v48; // r9@98
  const char *v49; // r4@99
  char *v50; // r8@99
  __int64 v51; // r4@118
  void *v52; // r0@119
  void *v53; // r0@121
  int v54; // r0@123
  char v56; // r5@131
  int v57; // r7@131
  void *v58; // r0@131
  unsigned int v59; // r4@131
  char v60; // r9@133
  int v61; // r5@133
  void *v62; // r0@135
  char *v63; // r1@135
  int v64; // r4@135
  char *v65; // r5@137
  int v66; // r7@137
  char v67; // r4@139
  char v68; // r0@139
  ItemInstance *v69; // r0@139
  ItemInstance *v70; // r0@143
  int v71; // r0@143
  __int64 v72; // r0@143
  unsigned __int64 *v73; // [sp+18h] [bp-1D0h]@1
  char v74; // [sp+20h] [bp-1C8h]@10
  signed int v75; // [sp+24h] [bp-1C4h]@10
  unsigned int v76; // [sp+2Ch] [bp-1BCh]@10
  char v77; // [sp+30h] [bp-1B8h]@10
  signed int v78; // [sp+38h] [bp-1B0h]@10
  int v79; // [sp+3Ch] [bp-1ACh]@10
  unsigned int v80; // [sp+44h] [bp-1A4h]@10
  int v81; // [sp+48h] [bp-1A0h]@10
  signed int v82; // [sp+50h] [bp-198h]@10
  signed int v83; // [sp+54h] [bp-194h]@10
  int v84; // [sp+58h] [bp-190h]@10
  char *ptr; // [sp+60h] [bp-188h]@10
  void *v86; // [sp+68h] [bp-180h]@135
  int v87; // [sp+6Ch] [bp-17Ch]@135
  char *v88; // [sp+70h] [bp-178h]@135
  void *v89; // [sp+74h] [bp-174h]@131
  int v90; // [sp+78h] [bp-170h]@131
  char *v91; // [sp+7Ch] [bp-16Ch]@131
  char v92; // [sp+80h] [bp-168h]@131
  int v93; // [sp+88h] [bp-160h]@150
  void *v94; // [sp+A4h] [bp-144h]@148
  void *v95; // [sp+B4h] [bp-134h]@146
  void *v96; // [sp+C8h] [bp-120h]@85
  int v97; // [sp+CCh] [bp-11Ch]@85
  int v98; // [sp+D0h] [bp-118h]@85
  void *v99; // [sp+D4h] [bp-114h]@81
  int v100; // [sp+D8h] [bp-110h]@81
  char *v101; // [sp+DCh] [bp-10Ch]@81
  char v102; // [sp+E0h] [bp-108h]@81
  int v103; // [sp+E8h] [bp-100h]@113
  void *v104; // [sp+104h] [bp-E4h]@111
  void *v105; // [sp+114h] [bp-D4h]@109
  char v106; // [sp+128h] [bp-C0h]@73
  int v107; // [sp+130h] [bp-B8h]@105
  void *v108; // [sp+14Ch] [bp-9Ch]@103
  void *v109; // [sp+15Ch] [bp-8Ch]@101
  int v110; // [sp+170h] [bp-78h]@13
  int v111; // [sp+178h] [bp-70h]@49
  void *v112; // [sp+194h] [bp-54h]@47
  void *v113; // [sp+1A4h] [bp-44h]@45
  ItemInstance *v114; // [sp+1B8h] [bp-30h]@10
  ItemInstance *v115; // [sp+1BCh] [bp-2Ch]@10
  ItemInstance *v116; // [sp+1C0h] [bp-28h]@10

  v3 = (unsigned int)this;
  v4 = *((_DWORD *)this + 17);
  v5 = a2;
  v73 = (unsigned __int64 *)((char *)this + 68);
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
  *(_DWORD *)(v3 + 72) = v4;
  v76 = v3;
  v114 = 0;
  v115 = 0;
  v11 = 0;
  v116 = 0;
  ptr = 0;
  v12 = 0;
  v13 = 0;
  v81 = 0;
  v83 = 0;
  v84 = 0;
  v79 = 0;
  v78 = 0;
  v75 = 0;
  v82 = -1;
  v74 = 0;
  v77 = 0;
  v80 = 0;
  while ( v13 < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v5 + 44))(v5) )
    v14 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v5 + 16))(v5, v13);
    ItemInstance::ItemInstance((ItemInstance *)&v110, v14);
    if ( v110 )
      if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mSulphur + 18) )
      {
        ++v12;
        v15 = 0;
      }
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mFireworkCharge + 18) )
        if ( v115 == v116 )
        {
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
            (unsigned __int64 *)&v114,
            (int)&v110);
        }
        else
          ItemInstance::ItemInstance(v115, (int)&v110);
          v115 = (ItemInstance *)((char *)v115 + 72);
        v82 = v13;
        ++v84;
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mDye_powder + 18) )
        v16 = ItemInstance::getAuxValue((ItemInstance *)&v110);
        if ( v11 == (char *)v81 )
          v18 = ptr;
          v19 = v11;
          v20 = v11 - ptr;
          if ( v20 == -1 )
            sub_21E5A04("vector::_M_emplace_back_aux");
          v23 = v19 == ptr;
          v21 = v20;
          if ( v23 )
            v21 = 1;
          v3 = v21 + v20;
          if ( v21 + v20 < v21 )
            v3 = -1;
          if ( v3 )
          {
            v17 = (char *)operator new(v3);
            v18 = ptr;
          }
          else
            v17 = 0;
          v17[v20] = v16;
          if ( (char *)v81 != v18 )
            v22 = v18;
            _aeabi_memmove(v17, v18);
            v18 = v22;
          v11 = &v17[v20];
          if ( v18 )
            operator delete(v18);
          v81 = (int)&v17[v3];
          *v11 = v16;
          v17 = ptr;
        ++v11;
        ptr = v17;
        ++v83;
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mPaper + 18) )
        ++v80;
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mYellowDust + 18) )
        ++v79;
        v77 = 1;
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mDiamond + 18) )
        v74 = 1;
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mFireCharge + 18) )
        ++v78;
        v75 = 1;
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mFeather + 18) )
        v75 = 4;
      else if ( ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mGold_nugget + 18) )
        v75 = 2;
      else
        v23 = ItemInstance::getId((ItemInstance *)&v110) == *(_WORD *)(Item::mSkull + 18);
        v24 = v75;
        if ( v23 )
          v24 = 3;
        v75 = v24;
        v25 = 0;
          v25 = 1;
        v15 = v25 ^ 1;
        v78 += v25;
    else
      v15 = 4;
    if ( v113 )
      operator delete(v113);
    if ( v112 )
      operator delete(v112);
    if ( v111 )
      (*(void (**)(void))(*(_DWORD *)v111 + 4))();
    if ( (v15 | 4) != 4 )
      v31 = 0;
      v32 = ptr;
      goto LABEL_116;
    ++v13;
  v31 = 0;
  if ( v78 > 1 )
    v32 = ptr;
    goto LABEL_116;
  v28 = __OFSUB__(v12, 3);
  v26 = v12 == 3;
  v27 = v12 - 3 < 0;
  v32 = ptr;
  if ( v12 <= 3 )
    v3 = v80;
    v28 = __OFSUB__(v80, 1);
    v26 = v80 == 1;
    v27 = ((v80 - 1) & 0x80000000) != 0;
  if ( (unsigned __int8)(v27 ^ v28) | v26 )
    if ( v79 + v83 + v78 || v12 < 1 || v3 != 1 )
      if ( v78 <= 1 && v83 >= 1 )
        v33 = v12 == 1;
        if ( v12 == 1 )
          v33 = (v3 | v84) == 0;
        if ( v33 )
          ItemInstance::ItemInstance((ItemInstance *)&v102, Item::mFireworkCharge, 1);
          v34 = ptr;
          v35 = v11 - ptr;
          v36 = 0;
          v99 = 0;
          v100 = 0;
          v101 = 0;
          if ( v11 != ptr )
            v36 = operator new(v11 - ptr);
            v34 = ptr;
          v37 = v34;
          v99 = v36;
          v100 = (int)v36;
          v38 = (int)v36 + v35;
          v101 = (char *)v36 + v35;
          if ( v11 != v34 )
            _aeabi_memmove(v36, v34);
          v39 = v37;
          v100 = v38;
          v98 = 0;
          v96 = 0;
          v97 = 0;
          v40 = FireworkChargeItem::initFireworkChargeItem(
                  (ItemInstance *)&v102,
                  v75,
                  (__int64 *)&v99,
                  (__int64 *)&v96,
                  v74 & 1,
                  v77 & 1);
          ItemInstance::operator=((int)&v102, (int)v40);
          if ( v96 )
            operator delete(v96);
          if ( v99 )
            operator delete(v99);
          ItemInstance::setAuxValue((ItemInstance *)&v102, (unsigned __int8)*v37);
          v41 = *(_QWORD *)(v76 + 72);
          if ( (_DWORD)v41 == HIDWORD(v41) )
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
              v73,
              (int)&v102);
            ItemInstance::ItemInstance((ItemInstance *)v41, (int)&v102);
            *(_DWORD *)(v76 + 72) += 72;
          if ( v105 )
            operator delete(v105);
          if ( v104 )
            operator delete(v104);
          if ( v103 )
            (*(void (**)(void))(*(_DWORD *)v103 + 4))();
          v31 = 1;
          v32 = v39;
          goto LABEL_116;
      if ( v83 != v79 + v83 + v78 || v83 < 1 )
        goto LABEL_116;
      v42 = v84 == 1;
      if ( v84 == 1 )
        v42 = (v3 | v12) == 0;
      if ( !v42 )
      v43 = (ItemInstance *)(*(int (__fastcall **)(CraftingContainer *, signed int))(*(_DWORD *)v5 + 16))(v5, v82);
      v44 = (int *)ItemInstance::getUserData(v43);
      v45 = CompoundTag::getCompound(*v44, (const void **)&FireworkChargeItem::TAG_EXPLOSION);
      v46 = v45;
      v47 = CompoundTag::getByteArray(v45, (const void **)&FireworkChargeItem::TAG_E_COLORS);
      v48 = *v47;
      if ( *v47 )
        v49 = (const char *)v47[2];
        v50 = (char *)operator new(*v47);
        _aeabi_memcpy(v50, v49, v48);
        v50 = 0;
      ItemInstance::ItemInstance((ItemInstance *)&v92, Item::mFireworkCharge, 1);
      v56 = CompoundTag::getByte(v46, (const void **)&FireworkChargeItem::TAG_E_TYPE);
      v57 = (int)&v50[v48];
      v58 = 0;
      v59 = v48;
      v89 = 0;
      v90 = 0;
      v91 = 0;
      if ( v48 )
        v58 = operator new(v48);
      v60 = v56;
      v89 = v58;
      v90 = (int)v58;
      v61 = (int)v58 + v59;
      v91 = (char *)v58 + v59;
      if ( (char *)v57 != v50 )
        _aeabi_memmove(v58, v50);
      v62 = 0;
      v90 = v61;
      v86 = 0;
      v87 = 0;
      v63 = ptr;
      v88 = 0;
      v64 = v11 - ptr;
      if ( v11 != ptr )
        v62 = operator new(v11 - ptr);
        v63 = ptr;
      v65 = v63;
      v86 = v62;
      v87 = (int)v62;
      v66 = (int)v62 + v64;
      v88 = (char *)v62 + v64;
      if ( v11 != v63 )
        _aeabi_memmove(v62, v63);
      ptr = v65;
      v87 = v66;
      v67 = CompoundTag::getBoolean(v46, (const void **)&FireworkChargeItem::TAG_E_TRAIL);
      v68 = CompoundTag::getBoolean(v46, (const void **)&FireworkChargeItem::TAG_E_FLICKER);
      v69 = FireworkChargeItem::initFireworkChargeItem(
              (ItemInstance *)&v92,
              v60,
              (__int64 *)&v89,
              (__int64 *)&v86,
              v67,
              v68);
      ItemInstance::operator=((int)&v92, (int)v69);
      if ( v86 )
        operator delete(v86);
      if ( v89 )
        operator delete(v89);
      v70 = (ItemInstance *)(*(int (__fastcall **)(CraftingContainer *, signed int))(*(_DWORD *)v5 + 16))(v5, v82);
      v71 = ItemInstance::getAuxValue(v70);
      ItemInstance::setAuxValue((ItemInstance *)&v92, v71);
      v72 = *(_QWORD *)(v76 + 72);
      if ( (_DWORD)v72 == HIDWORD(v72) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(v73, (int)&v92);
        ItemInstance::ItemInstance((ItemInstance *)v72, (int)&v92);
        *(_DWORD *)(v76 + 72) += 72;
      if ( v95 )
        operator delete(v95);
      if ( v94 )
        operator delete(v94);
      if ( v93 )
        (*(void (**)(void))(*(_DWORD *)v93 + 4))();
      if ( v50 )
        operator delete(v50);
      ItemInstance::ItemInstance((ItemInstance *)&v106, Item::mFireworksItem, 3);
      v29 = FireworksItem::initFireworksRocketItem((int)&v106, (unsigned __int64 *)&v114, v12);
      ItemInstance::operator=((int)&v106, v29);
      v30 = *(_QWORD *)(v76 + 72);
      if ( (_DWORD)v30 == HIDWORD(v30) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          v73,
          (int)&v106);
        ItemInstance::ItemInstance((ItemInstance *)v30, (int)&v106);
      if ( v109 )
        operator delete(v109);
      if ( v108 )
        operator delete(v108);
      if ( v107 )
        (*(void (**)(void))(*(_DWORD *)v107 + 4))();
    v31 = 1;
LABEL_116:
  if ( v32 )
    operator delete(v32);
  v51 = *(_QWORD *)&v114;
  if ( v114 != v115 )
      v52 = *(void **)(v51 + 52);
      if ( v52 )
        operator delete(v52);
      v53 = *(void **)(v51 + 36);
      if ( v53 )
        operator delete(v53);
      v54 = *(_DWORD *)(v51 + 8);
      if ( v54 )
        (*(void (**)(void))(*(_DWORD *)v54 + 4))();
      *(_DWORD *)(v51 + 8) = 0;
      LODWORD(v51) = v51 + 72;
    while ( HIDWORD(v51) != (_DWORD)v51 );
    LODWORD(v51) = v114;
  if ( (_DWORD)v51 )
    operator delete((void *)v51);
  return v31;
}


signed int __fastcall FireworksRecipe::size(FireworksRecipe *this)
{
  return 1;
}


int __fastcall FireworksRecipe::FireworksRecipe(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  int v5; // r1@2
  int v6; // r2@2
  int v7; // r3@2
  int v8; // r5@2
  int result; // r0@2
  int v10; // r3@3
  int v11; // r5@3
  int v12; // r1@3

  v2 = a2;
  v3 = a1;
  _aeabi_memclr8(a1, 68);
  *(_DWORD *)v3 = &off_2701314;
  ItemPack::ItemPack(v3 + 4);
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  v4 = (_DWORD *)(v3 + 32);
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)v3 = &off_2701224;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  if ( v2 )
  {
    v5 = *(_DWORD *)v2;
    v6 = *(_DWORD *)(v2 + 4);
    v7 = *(_DWORD *)(v2 + 8);
    v8 = *(_DWORD *)(v2 + 12);
    *v4 = v5;
    *(_DWORD *)(v3 + 36) = v6;
    *(_DWORD *)(v3 + 40) = v7;
    *(_DWORD *)(v3 + 44) = v8;
    result = v3;
  }
  else
    v10 = unk_28051F4;
    v11 = dword_28051F8;
    v12 = unk_28051FC;
    *v4 = FireworksRecipe::ID;
    *(_DWORD *)(v3 + 36) = v10;
    *(_DWORD *)(v3 + 40) = v11;
    *(_DWORD *)(v3 + 44) = v12;
  return result;
}


signed int __fastcall FireworksRecipe::getCraftingSize(FireworksRecipe *this)
{
  return 1;
}


void __fastcall FireworksRecipe::~FireworksRecipe(FireworksRecipe *this)
{
  FireworksRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701224;
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


void __fastcall FireworksRecipe::~FireworksRecipe(FireworksRecipe *this)
{
  FireworksRecipe::~FireworksRecipe(this);
}


void *__fastcall FireworksRecipe::getIngredient(FireworksRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}
