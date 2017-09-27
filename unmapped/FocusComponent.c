

unsigned __int64 *__fastcall FocusComponent::clone(FocusComponent *this, UIControl *a2, UIControl *a3)
{
  FocusComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  unsigned __int64 *result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x58u);
  FocusComponent::FocusComponent((UIComponent *)v6, v4);
  *((_DWORD *)v6 + 3) = *((_DWORD *)v5 + 3);
  *((_BYTE *)v6 + 84) = *((_BYTE *)v5 + 84) & 2 | *((_BYTE *)v6 + 84) & 0xFC | *((_BYTE *)v5 + 84) & 1;
  std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (unsigned __int64 *)((char *)v6 + 28),
    (int)v5 + 28);
  result = std::_Hashtable<std::string,std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>>>,std::allocator<std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
             (unsigned __int64 *)v6 + 7,
             (int)v5 + 56);
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall FocusComponent::setDefaultFocusPrecedence(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


FocusComponent *__fastcall FocusComponent::~FocusComponent(FocusComponent *this)
{
  FocusComponent *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r6@2
  char *v4; // r0@3
  int v5; // r7@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  void *v8; // r6@16
  int v9; // r1@16
  void *v10; // r0@16
  char *v11; // r0@18
  int v12; // r1@21
  void *v13; // r0@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25

  v1 = this;
  *(_DWORD *)this = &off_26D6A74;
  v2 = (void *)*((_DWORD *)this + 16);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>>>::~pair((int)v2 + 4);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 7), 4 * (*((_QWORD *)v1 + 7) >> 32));
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  v4 = (char *)*((_DWORD *)v1 + 14);
  if ( v4 && (char *)v1 + 80 != v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 9);
  while ( v5 )
    v8 = (void *)v5;
    v9 = *(_DWORD *)(v5 + 8);
    v5 = *(_DWORD *)v5;
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
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
        j_j_j_j_j__ZdlPv_9(v10);
    operator delete(v8);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v11 = (char *)*((_DWORD *)v1 + 7);
  if ( v11 && (char *)v1 + 52 != v11 )
    operator delete(v11);
  v12 = *((_DWORD *)v1 + 6);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  UIComponent::~UIComponent(v1);
  return v1;
}


UIComponent *__fastcall FocusComponent::FocusComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1
  double v3; // r0@1
  double v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3
  unsigned int v7; // r0@4
  int v8; // r6@6
  void *v9; // r5@6

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6A74;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 6) = &unk_28898CC;
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 11) = 1065353216;
  LODWORD(v3) = (char *)v2 + 44;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v3)));
  *((_DWORD *)v2 + 8) = LODWORD(v4);
  if ( LODWORD(v4) == 1 )
  {
    *((_DWORD *)v2 + 13) = 0;
    v6 = (char *)v2 + 52;
  }
  else
    if ( LODWORD(v4) >= 0x40000000 )
      sub_DA7414();
    v5 = 4 * LODWORD(v4);
    v6 = operator new(4 * LODWORD(v4));
    _aeabi_memclr4(v6, v5);
  *((_DWORD *)v2 + 7) = v6;
  *((_DWORD *)v2 + 16) = 0;
  *((_DWORD *)v2 + 17) = 0;
  *((_DWORD *)v2 + 18) = 1065353216;
  LODWORD(v4) = (char *)v2 + 72;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v7 = sub_DA7744(v4);
  *((_DWORD *)v2 + 15) = v7;
  if ( v7 == 1 )
    *((_DWORD *)v2 + 20) = 0;
    v9 = (char *)v2 + 80;
    if ( v7 >= 0x40000000 )
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *((_DWORD *)v2 + 14) = v9;
  *((_BYTE *)v2 + 84) = *((_BYTE *)v2 + 84) & 0xF8 | 3;
  FocusComponent::_resetDirectionalOverrides(v2);
  return v2;
}


int __fastcall FocusComponent::receive(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  FocusManager *v6; // r0@2
  bool v7; // zf@2
  int v8; // r0@6

  v5 = a1;
  if ( a5 == 9 )
  {
    v6 = (FocusManager *)*(_BYTE *)(a1 + 84);
    v7 = ((unsigned __int8)v6 & 4) == 0;
    if ( (unsigned __int8)v6 & 4 )
    {
      v6 = *(FocusManager **)(v5 + 8);
      v7 = v6 == 0;
    }
    if ( !v7 && FocusManager::focusPositionCaptured(v6) == 1 )
      v8 = *(_DWORD *)(v5 + 8);
      FocusManager::setFocusPosition();
      FocusManager::requestFocusReset(*(FocusManager **)(v5 + 8), 1);
      FocusManager::setFocusPositionCaptured(*(FocusManager **)(v5 + 8), 0);
      *(_BYTE *)(v5 + 84) &= 0xFBu;
  }
  return 0;
}


void __fastcall FocusComponent::~FocusComponent(FocusComponent *this)
{
  FocusComponent::~FocusComponent(this);
}


unsigned __int64 *__fastcall FocusComponent::setFocusChangeOverride(int a1, int a2)
{
  return j_j_j__ZNSt10_HashtableIN2ui17CardinalDirectionESt4pairIKS1_SsESaIS4_ENSt8__detail10_Select1stESt8equal_toIS1_ESt4hashIS1_ENS6_18_Mod_range_hashingENS6_20_Default_ranged_hashENS6_20_Prime_rehash_policyENS6_17_Hashtable_traitsILb1ELb0ELb1EEEEaSERKSH_(
           (unsigned __int64 *)(a1 + 28),
           a2);
}


int __fastcall FocusComponent::reset(int result)
{
  *(_BYTE *)(result + 84) &= 0xFBu;
  return result;
}


unsigned int __fastcall FocusComponent::_applyCapturedFocusPoint(FocusComponent *this, VisualTree *a2)
{
  FocusComponent *v2; // r4@1
  unsigned int result; // r0@1
  bool v4; // zf@1
  int v5; // r0@5

  v2 = this;
  result = *((_BYTE *)this + 84);
  v4 = (result & 4) == 0;
  if ( result & 4 )
  {
    result = *((_DWORD *)v2 + 2);
    v4 = result == 0;
  }
  if ( !v4 )
    result = FocusManager::focusPositionCaptured((FocusManager *)result);
    if ( result == 1 )
    {
      v5 = *((_DWORD *)v2 + 2);
      FocusManager::setFocusPosition();
      FocusManager::requestFocusReset(*((FocusManager **)v2 + 2), 1);
      FocusManager::setFocusPositionCaptured(*((FocusManager **)v2 + 2), 0);
      result = *((_BYTE *)v2 + 84) & 0xFB;
      *((_BYTE *)v2 + 84) = result;
    }
  return result;
}


unsigned __int64 *__fastcall FocusComponent::registerNewLookupMapEntry(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int *v5; // r6@1
  int *v6; // r0@1
  unsigned __int64 *result; // r0@1
  size_t v8; // r2@1
  int v9; // [sp+0h] [bp-40h]@1
  char v10; // [sp+8h] [bp-38h]@1
  int v11; // [sp+Ch] [bp-34h]@1
  int v12; // [sp+10h] [bp-30h]@1
  int v13; // [sp+14h] [bp-2Ch]@1
  int v14; // [sp+18h] [bp-28h]@1
  __int64 v15; // [sp+1Ch] [bp-24h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = sub_DA73B4((int *)&v10, a2);
  v11 = 0;
  v12 = *(_DWORD *)(v4 + 4);
  v13 = 0;
  v14 = *(_DWORD *)(v4 + 12);
  v15 = *(_QWORD *)(v4 + 16);
  std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<ui::CardinalDirection const,std::string>,true> const*)#1}>(
    (unsigned int *)v6 + 1,
    v4);
  std::_Hashtable<std::string,std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>>>,std::allocator<std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>> const>>(
    &v9,
    v3 + 56,
    (int)&v10);
  std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>> const>::~pair((int)&v10);
  result = *(unsigned __int64 **)(v3 + 24);
  v8 = *((_DWORD *)result - 3);
  if ( v8 == *(_DWORD *)(*v5 - 12) )
  {
    result = (unsigned __int64 *)memcmp(result, (const void *)*v5, v8);
    if ( !result )
      result = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
                 (unsigned __int64 *)(v3 + 28),
                 v4);
  }
  return result;
}


const void **__fastcall FocusComponent::_resetDirectionalOverrides(FocusComponent *this)
{
  FocusComponent *v1; // r11@1
  int v2; // r10@1
  int v3; // r0@1
  char *v4; // r8@1
  unsigned int v5; // r7@1
  int v6; // r0@3
  int v7; // r6@4
  int v8; // r4@4
  bool v9; // zf@5
  int v10; // r5@8
  bool v11; // zf@11
  _BYTE *v12; // r0@15
  __int64 v13; // kr00_8@16
  int v14; // r6@16
  int v15; // r0@16
  int v16; // r9@17
  int v17; // r4@17
  bool v18; // zf@18
  int v19; // r5@21
  bool v20; // zf@24
  _BYTE *v21; // r0@28
  __int64 v22; // kr08_8@29
  int v23; // r6@29
  int v24; // r0@29
  int v25; // r9@30
  int v26; // r4@30
  bool v27; // zf@31
  int v28; // r5@34
  bool v29; // zf@37
  _BYTE *v30; // r0@41
  __int64 v31; // kr10_8@42
  int v32; // r11@42
  int v33; // r0@42
  int v34; // r5@43
  int v35; // r4@43
  bool v36; // zf@44
  int v37; // r7@47
  bool v38; // zf@50
  _BYTE *v39; // r0@54

  v1 = this;
  v2 = 0;
  v4 = (char *)this + 28;
  v3 = *((_DWORD *)this + 7);
  v5 = *((_DWORD *)v4 + 1);
  if ( v5 != 1 )
    v2 = 1;
  v6 = *(_DWORD *)(v3 + 4 * v2);
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  while ( 1 )
  {
    v9 = v8 == 1;
    if ( v8 == 1 )
      v9 = *(_BYTE *)(v7 + 4) == 1;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 12);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 12) % v5 == v2 )
        continue;
    }
  }
  v11 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v11 = v6 == 0;
  if ( v11 )
LABEL_15:
    v12 = operator new(0x10u);
    *(_DWORD *)v12 = 0;
    v12[4] = 1;
    *((_DWORD *)v12 + 2) = &unk_28898CC;
    v6 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)v4,
           v2,
           1u,
           (int)v12);
  sub_DA78A4((void **)(v6 + 8), (char *)&unk_257BC67, 0);
  v13 = *(_QWORD *)((char *)v1 + 28);
  v14 = 2 % (unsigned int)(*(_QWORD *)((char *)v1 + 28) >> 32);
  v15 = *(_DWORD *)(v13 + 4 * v14);
  if ( !v15 )
    goto LABEL_28;
  v16 = *(_DWORD *)v15;
  v17 = *(_DWORD *)(*(_DWORD *)v15 + 12);
    v18 = v17 == 2;
    if ( v17 == 2 )
      v18 = *(_BYTE *)(v16 + 4) == 2;
    if ( v18 )
    v19 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 )
      v17 = *(_DWORD *)(v19 + 12);
      v15 = v16;
      v16 = *(_DWORD *)v16;
      if ( *(_DWORD *)(v19 + 12) % HIDWORD(v13) == v14 )
  v20 = v15 == 0;
  if ( v15 )
    v15 = *(_DWORD *)v15;
    v20 = v15 == 0;
  if ( v20 )
LABEL_28:
    v21 = operator new(0x10u);
    *(_DWORD *)v21 = 0;
    v21[4] = 2;
    *((_DWORD *)v21 + 2) = &unk_28898CC;
    v15 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)v4,
            v14,
            2u,
            (int)v21);
  sub_DA78A4((void **)(v15 + 8), (char *)&unk_257BC67, 0);
  v22 = *(_QWORD *)((char *)v1 + 28);
  v23 = 3 % (unsigned int)(*(_QWORD *)((char *)v1 + 28) >> 32);
  v24 = *(_DWORD *)(v22 + 4 * v23);
  if ( !v24 )
    goto LABEL_41;
  v25 = *(_DWORD *)v24;
  v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
    v27 = v26 == 3;
    if ( v26 == 3 )
      v27 = *(_BYTE *)(v25 + 4) == 3;
    if ( v27 )
    v28 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 )
      v26 = *(_DWORD *)(v28 + 12);
      v24 = v25;
      v25 = *(_DWORD *)v25;
      if ( *(_DWORD *)(v28 + 12) % HIDWORD(v22) == v23 )
  v29 = v24 == 0;
  if ( v24 )
    v24 = *(_DWORD *)v24;
    v29 = v24 == 0;
  if ( v29 )
LABEL_41:
    v30 = operator new(0x10u);
    *(_DWORD *)v30 = 0;
    v30[4] = 3;
    *((_DWORD *)v30 + 2) = &unk_28898CC;
    v24 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v23,
            3u,
            (int)v30);
  sub_DA78A4((void **)(v24 + 8), (char *)&unk_257BC67, 0);
  v31 = *(_QWORD *)((char *)v1 + 28);
  v32 = 4 % (unsigned int)(*(_QWORD *)((char *)v1 + 28) >> 32);
  v33 = *(_DWORD *)(v31 + 4 * v32);
  if ( !v33 )
    goto LABEL_54;
  v34 = *(_DWORD *)v33;
  v35 = *(_DWORD *)(*(_DWORD *)v33 + 12);
    v36 = v35 == 4;
    if ( v35 == 4 )
      v36 = *(_BYTE *)(v34 + 4) == 4;
    if ( v36 )
    v37 = *(_DWORD *)v34;
    if ( *(_DWORD *)v34 )
      v35 = *(_DWORD *)(v37 + 12);
      v33 = v34;
      v34 = *(_DWORD *)v34;
      if ( *(_DWORD *)(v37 + 12) % HIDWORD(v31) == v32 )
  v38 = v33 == 0;
  if ( v33 )
    v33 = *(_DWORD *)v33;
    v38 = v33 == 0;
  if ( v38 )
LABEL_54:
    v39 = operator new(0x10u);
    *(_DWORD *)v39 = 0;
    v39[4] = 4;
    *((_DWORD *)v39 + 2) = &unk_28898CC;
    v33 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v32,
            4u,
            (int)v39);
  return sub_DA8660((void **)(v33 + 8), (char *)&unk_257BC67, 0);
}


int __fastcall FocusComponent::hasFocusChangeOverride(int a1, unsigned int a2)
{
  __int64 v2; // kr00_8@2
  int v3; // r0@2
  int v4; // r6@3
  int v5; // r7@3
  bool v6; // zf@4
  bool v7; // zf@10
  int result; // r0@13

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 28);
    v3 = *(_DWORD *)(v2 + 4 * (a2 % HIDWORD(v2)));
    if ( !v3 )
      goto LABEL_15;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == a2;
      if ( v5 == a2 )
        v6 = *(_BYTE *)(v4 + 4) == a2;
      if ( v6 )
        break;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v2 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v2 + 12) % HIDWORD(v2) == a2 % HIDWORD(v2) )
          continue;
      }
    }
    v7 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v7 = v3 == 0;
    if ( v7 )
LABEL_15:
      sub_DA7884("_Map_base::at");
    result = *(_DWORD *)(*(_DWORD *)(v3 + 8) - 12) != 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall FocusComponent::receive(FocusComponent *a1, int a2)
{
  if ( a2 == 6 )
    FocusComponent::_captureFocusPoint(a1);
  return 0;
}


int __fastcall FocusComponent::setFocusWrapEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 84) = *(_BYTE *)(result + 84) & 0xFD | 2 * a2;
  return result;
}


char *__fastcall FocusComponent::getFocusIdentifier(FocusComponent *this)
{
  return (char *)this + 24;
}


int __fastcall FocusComponent::initialize(int result, FocusManager *a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


unsigned int __fastcall FocusComponent::getFocusWrapEnabled(FocusComponent *this)
{
  return (*((_BYTE *)this + 84) & 2u) >> 1;
}


int __fastcall FocusComponent::setFocusEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 84) = a2 | *(_BYTE *)(result + 84) & 0xFE;
  return result;
}


int *__fastcall FocusComponent::setFocusChangeOverride(int a1, unsigned int a2, int *a3)
{
  unsigned int v3; // r5@1
  int v4; // r9@1
  int *v5; // r8@1
  unsigned int v6; // r11@1
  int v7; // r10@1
  int v8; // r0@1
  int v9; // r4@2
  int v10; // r6@2
  bool v11; // zf@3
  int v12; // r7@6
  bool v13; // zf@9
  _BYTE *v14; // r0@13

  v3 = a2;
  v4 = a1 + 28;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = a2 % *(_DWORD *)(a1 + 32);
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v7);
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == a2;
    if ( v10 == a2 )
      v11 = *(_BYTE *)(v9 + 4) == a2;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % v6 == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *(_DWORD *)v14 = 0;
    v14[4] = v3;
    *((_DWORD *)v14 + 2) = &unk_28898CC;
    v8 = std::_Hashtable<ui::CardinalDirection,std::pair<ui::CardinalDirection const,std::string>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>,std::__detail::_Select1st,std::equal_to<ui::CardinalDirection>,std::hash<ui::CardinalDirection>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           v4,
           v7,
           v3,
           (int)v14);
  return j_EntityInteraction::setInteractText((int *)(v8 + 8), v5);
}


unsigned __int64 *__fastcall FocusComponent::setFocusIdentifier(int a1, int *a2)
{
  int v2; // r4@1
  int **v3; // r5@1
  unsigned __int64 *result; // r0@1
  unsigned __int64 *v5; // r5@1

  v2 = a1;
  v3 = (int **)(a1 + 24);
  EntityInteraction::setInteractText((int *)(a1 + 24), a2);
  result = (unsigned __int64 *)std::_Hashtable<std::string,std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>>>,std::allocator<std::pair<std::string const,std::unordered_map<ui::CardinalDirection,std::string,std::hash<ui::CardinalDirection>,std::equal_to<ui::CardinalDirection>,std::allocator<std::pair<ui::CardinalDirection const,std::string>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                                 (unsigned __int64 *)(v2 + 56),
                                 v3);
  v5 = result;
  if ( result )
  {
    FocusComponent::_resetDirectionalOverrides((FocusComponent *)v2);
    result = j_j_j__ZNSt10_HashtableIN2ui17CardinalDirectionESt4pairIKS1_SsESaIS4_ENSt8__detail10_Select1stESt8equal_toIS1_ESt4hashIS1_ENS6_18_Mod_range_hashingENS6_20_Default_ranged_hashENS6_20_Prime_rehash_policyENS6_17_Hashtable_traitsILb1ELb0ELb1EEEEaSERKSH_(
               (unsigned __int64 *)(v2 + 28),
               (int)(v5 + 1));
  }
  return result;
}


UIControl *__fastcall FocusComponent::_captureFocusPoint(FocusComponent *this)
{
  FocusComponent *v1; // r4@1
  UIControl *result; // r0@1
  int v3; // r1@1
  int v4; // r6@3
  UIControl *v5; // r5@3
  _DWORD *v6; // r0@3
  __int64 v7; // r1@3
  int v14; // r4@7
  unsigned int *v15; // r1@8
  unsigned int *v16; // r5@14
  int v17; // r4@21
  unsigned int *v18; // r1@22
  unsigned int *v19; // r5@28
  _DWORD *v20; // [sp+0h] [bp-30h]@3
  __int64 v21; // [sp+8h] [bp-28h]@3
  UIControl *v22; // [sp+10h] [bp-20h]@3
  int v23; // [sp+14h] [bp-1Ch]@7
  UIControl *v24; // [sp+18h] [bp-18h]@2
  int v25; // [sp+1Ch] [bp-14h]@21

  v1 = this;
  result = (UIControl *)(*((_BYTE *)this + 84) & 0xFB);
  *((_BYTE *)v1 + 84) = (_BYTE)result;
  v3 = *((_DWORD *)v1 + 2);
  if ( v3 )
  {
    FocusManager::getFocusedControl((FocusManager *)&v24, v3);
    result = v24;
    if ( v24 )
    {
      v4 = UIComponent::getOwner(v1);
      v5 = v24;
      v6 = operator new(4u);
      LODWORD(v7) = sub_C2D762;
      *v6 = v4;
      HIDWORD(v7) = &loc_C2D754;
      v20 = v6;
      v21 = v7;
      UIControl::getAncestorWhere((int)&v22, (int)v5, (int)&v20);
      if ( (_DWORD)v21 )
        ((void (*)(void))v21)();
      result = v22;
      if ( v22 )
      {
        _R5 = UIControl::getSize(v24);
        _R0 = UIControl::getPosition(v24);
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S2, [R5]
          VLDR            S4, [R5,#4]
          VLDR            S6, [R0,#4]
          VMUL.F32        S2, S2, S0
          VMUL.F32        S0, S4, S0
          VLDR            S4, [R0]
          VADD.F32        S2, S4, S2
          VADD.F32        S0, S6, S0
          VSTR            S2, [R4,#0x10]
          VSTR            S0, [R4,#0x14]
        }
        *((_BYTE *)v1 + 84) |= 4u;
        result = (UIControl *)FocusManager::setFocusPositionCaptured(*((FocusManager **)v1 + 2), 1);
      }
      v14 = v23;
      if ( v23 )
        v15 = (unsigned int *)(v23 + 4);
        if ( &pthread_create )
          __dmb();
          do
            result = (UIControl *)__ldrex(v15);
          while ( __strex((unsigned int)result - 1, v15) );
        else
          result = (UIControl *)(*v15)--;
        if ( result == (UIControl *)1 )
          v16 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (UIControl *)__ldrex(v16);
            while ( __strex((unsigned int)result - 1, v16) );
          }
          else
            result = (UIControl *)(*v16)--;
          if ( result == (UIControl *)1 )
            result = (UIControl *)(*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
    }
    v17 = v25;
    if ( v25 )
      v18 = (unsigned int *)(v25 + 4);
      if ( &pthread_create )
        __dmb();
        do
          result = (UIControl *)__ldrex(v18);
        while ( __strex((unsigned int)result - 1, v18) );
      else
        result = (UIControl *)(*v18)--;
      if ( result == (UIControl *)1 )
        v19 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
            result = (UIControl *)__ldrex(v19);
          while ( __strex((unsigned int)result - 1, v19) );
          result = (UIControl *)(*v19)--;
          result = (UIControl *)(*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  }
  return result;
}


void __fastcall FocusComponent::~FocusComponent(FocusComponent *this)
{
  FocusComponent *v1; // r0@1

  v1 = FocusComponent::~FocusComponent(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall FocusComponent::getFocusEnabled(FocusComponent *this)
{
  return *((_BYTE *)this + 84) & 1;
}


signed int __fastcall FocusComponent::checkFocusChangeOverride(int a1, unsigned int a2, const void **a3)
{
  const void **v3; // r8@1
  __int64 v4; // kr00_8@2
  int v5; // r0@2
  int v6; // r7@3
  int v7; // r4@3
  bool v8; // zf@4
  int v9; // r6@7
  bool v10; // zf@10
  _DWORD *v11; // r0@13
  signed int v12; // r4@13
  const void *v13; // r1@13
  size_t v14; // r2@13
  signed int result; // r0@16

  v3 = a3;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 28);
    v5 = *(_DWORD *)(v4 + 4 * (a2 % HIDWORD(v4)));
    if ( !v5 )
      goto LABEL_18;
    v6 = *(_DWORD *)v5;
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    while ( 1 )
    {
      v8 = v7 == a2;
      if ( v7 == a2 )
        v8 = *(_BYTE *)(v6 + 4) == a2;
      if ( v8 )
        break;
      v9 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 )
      {
        v7 = *(_DWORD *)(v9 + 12);
        v5 = v6;
        v6 = *(_DWORD *)v6;
        if ( *(_DWORD *)(v9 + 12) % HIDWORD(v4) == a2 % HIDWORD(v4) )
          continue;
      }
    }
    v10 = v5 == 0;
    if ( v5 )
      v5 = *(_DWORD *)v5;
      v10 = v5 == 0;
    if ( v10 )
LABEL_18:
      sub_DA7884("_Map_base::at");
    v11 = *(_DWORD **)(v5 + 8);
    v12 = 0;
    v13 = *a3;
    v14 = *(v11 - 3);
    if ( v14 == *((_DWORD *)*v3 - 3) && !memcmp(v11, v13, v14) )
      v12 = 1;
    result = v12;
  }
  else
    result = 0;
  return result;
}
