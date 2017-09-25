

int __fastcall BehaviorActionMapper::getInputMode(BehaviorActionMapper *this)
{
  return 0;
}


InputDeviceMapper *__fastcall BehaviorActionMapper::BehaviorActionMapper(InputDeviceMapper *a1)
{
  InputDeviceMapper *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  InputDeviceMapper *result; // r0@4

  v1 = a1;
  InputDeviceMapper::InputDeviceMapper(a1);
  *(_DWORD *)v1 = &off_26E50E4;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 1065353216;
  LODWORD(v2) = (char *)v1 + 56;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *((_DWORD *)v1 + 11) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 16) = 0;
    v5 = (char *)v1 + 64;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  result = v1;
  *((_DWORD *)v1 + 10) = v5;
  return result;
}


void __fastcall BehaviorActionMapper::~BehaviorActionMapper(BehaviorActionMapper *this)
{
  BehaviorActionMapper::~BehaviorActionMapper(this);
}


int __fastcall BehaviorActionMapper::setMapping(BehaviorActionMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  unsigned __int64 *v6; // r10@1
  char *v7; // r9@1
  unsigned int v8; // r5@1
  int v9; // r11@1
  unsigned int *v10; // r0@1
  unsigned int *v11; // r7@2
  int v12; // r6@2
  _DWORD *v13; // r4@4
  bool v14; // zf@7
  int v15; // r0@11
  void *v16; // r0@12
  void *v17; // r6@13
  int result; // r0@14
  int v19; // r6@14
  int v20; // r9@14
  int v21; // r5@15
  __int16 v22; // r7@16
  unsigned int v23; // r4@16
  _DWORD *v24; // r0@16
  int v25; // [sp+0h] [bp-30h]@1
  int *v26; // [sp+8h] [bp-28h]@11

  v25 = a6;
  v6 = (unsigned __int64 *)a4;
  v7 = (char *)this + 40;
  v8 = *((_DWORD *)this + 11);
  v9 = (unsigned int)a6 % *((_DWORD *)this + 11);
  v10 = *(unsigned int **)(*((_DWORD *)this + 10) + 4 * v9);
  if ( !v10 )
    goto LABEL_11;
  v11 = (unsigned int *)*v10;
  v12 = *(_DWORD *)(*v10 + 4);
  while ( v12 != a6 )
  {
    v13 = (_DWORD *)*v11;
    if ( *v11 )
    {
      v12 = v13[1];
      v10 = v11;
      v11 = (unsigned int *)*v11;
      if ( v13[1] % v8 == v9 )
        continue;
    }
  }
  v14 = v10 == 0;
  if ( v10 )
    v8 = *v10;
    v14 = *v10 == 0;
  if ( v14 )
LABEL_11:
    v26 = &v25;
    v15 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKiSt18unordered_multimapIisSt4hashIiESt8equal_toIiESaIS2_IS3_sEEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESK_IJEEEEEPSD_DpOT_(
            (int)v7,
            (int)&unk_262D275,
            &v26);
    v8 = std::_Hashtable<int,std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>,std::allocator<std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
           (int)v7,
           v9,
           a6,
           v15);
  v16 = *(void **)(v8 + 16);
  if ( v16 )
    do
      v17 = *(void **)v16;
      operator delete(v16);
      v16 = v17;
    while ( v17 );
  result = _aeabi_memclr4(*(_QWORD *)(v8 + 8), 4 * (*(_QWORD *)(v8 + 8) >> 32));
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  v20 = *((_QWORD *)a5 + 33) >> 32;
  v19 = *((_QWORD *)a5 + 33);
  if ( v19 != v20 )
    v21 = v8 + 8;
      v22 = NameRegistry::getNameId(v6, (int **)v19);
      v23 = *(_DWORD *)(v19 + 4);
      v24 = operator new(0xCu);
      *v24 = 0;
      v24[1] = v23;
      *((_WORD *)v24 + 4) = v22;
      result = std::_Hashtable<int,std::pair<int const,short>,std::allocator<std::pair<int const,short>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
                 v21,
                 0,
                 v23,
                 (int)v24);
      v19 += 8;
    while ( v19 != v20 );
  return result;
}


signed int __fastcall BehaviorActionMapper::convertActionStateToButtonState(int a1, int a2)
{
  signed int result; // r0@1

  result = 2;
  if ( a2 == 2 )
    result = 0;
  if ( a2 == 1 )
    result = 1;
  return result;
}


void __fastcall BehaviorActionMapper::~BehaviorActionMapper(BehaviorActionMapper *this)
{
  InputDeviceMapper *v1; // r0@1

  v1 = BehaviorActionMapper::~BehaviorActionMapper(this);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned int __fastcall BehaviorActionMapper::changeControllerId(BehaviorActionMapper *this, int a2, int a3)
{
  int v3; // r10@0
  int v4; // r8@1
  unsigned int v5; // r11@1
  unsigned int v6; // r5@1
  int v7; // r9@1
  int *v8; // r0@1
  int *v9; // r4@2
  int v10; // r7@2
  _DWORD *v11; // r6@4
  bool v12; // zf@7
  int v13; // r0@11
  int v14; // r8@12
  unsigned int *v15; // r0@12
  unsigned int *v16; // r4@13
  int v17; // r6@13
  _DWORD *v18; // r7@15
  bool v19; // zf@18
  int v20; // r0@22
  __int64 v21; // r0@23
  int v22; // r1@23
  int v23; // r2@23
  int v24; // r0@23
  int v25; // r0@30
  int v26; // r0@30
  int v27; // r6@30
  int v28; // r4@30
  int v29; // r0@30
  int v30; // r0@30
  int v31; // r0@30
  __int64 v32; // kr00_8@34
  unsigned int v33; // r1@34
  unsigned int result; // r0@34
  int v35; // r9@34
  int *v36; // r2@34
  int *v37; // r4@35
  int v38; // r7@35
  int v39; // r5@37
  unsigned int v40; // r0@38
  int v41; // r1@38
  int v42; // [sp+0h] [bp-40h]@1
  BehaviorActionMapper *v43; // [sp+4h] [bp-3Ch]@1
  char *v44; // [sp+8h] [bp-38h]@1
  int v45; // [sp+Ch] [bp-34h]@1
  unsigned int v46; // [sp+10h] [bp-30h]@1
  int *v47; // [sp+18h] [bp-28h]@11

  v4 = a3;
  v5 = a2;
  v43 = this;
  v45 = a3;
  v46 = a2;
  v44 = (char *)this + 40;
  v6 = *((_DWORD *)this + 11);
  v42 = *((_DWORD *)this + 10);
  v7 = a3 % v6;
  v8 = *(int **)(*((_DWORD *)this + 10) + 4 * (a3 % v6));
  if ( !v8 )
    goto LABEL_11;
  v9 = (int *)*v8;
  v10 = *(_DWORD *)(*v8 + 4);
  while ( v10 != a3 )
  {
    v11 = (_DWORD *)*v9;
    if ( *v9 )
    {
      v10 = v11[1];
      v8 = v9;
      v9 = (int *)*v9;
      if ( v11[1] % v6 == v7 )
        continue;
    }
  }
  v12 = v8 == 0;
  if ( v8 )
    v3 = *v8;
    v12 = *v8 == 0;
  if ( v12 )
LABEL_11:
    v47 = &v45;
    v13 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKiSt18unordered_multimapIisSt4hashIiESt8equal_toIiESaIS2_IS3_sEEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESK_IJEEEEEPSD_DpOT_(
            (int)v44,
            (int)&unk_262D275,
            &v47);
    v3 = std::_Hashtable<int,std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>,std::allocator<std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
           (int)v44,
           v7,
           v4,
           v13);
    v5 = v46;
    v6 = *((_DWORD *)v43 + 11);
    v42 = *((_DWORD *)v43 + 10);
  v14 = v5 % v6;
  v15 = *(unsigned int **)(v42 + 4 * (v5 % v6));
  if ( !v15 )
    goto LABEL_22;
  v16 = (unsigned int *)*v15;
  v17 = *(_DWORD *)(*v15 + 4);
  while ( v5 != v17 )
    v18 = (_DWORD *)*v16;
    if ( *v16 )
      v17 = v18[1];
      v15 = v16;
      v16 = (unsigned int *)*v16;
      if ( v18[1] % v6 == v14 )
  v19 = v15 == 0;
  if ( v15 )
    v6 = *v15;
    v19 = *v15 == 0;
  if ( v19 )
LABEL_22:
    v47 = (int *)&v46;
    v20 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKiSt18unordered_multimapIisSt4hashIiESt8equal_toIiESaIS2_IS3_sEEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESK_IJEEEEEPSD_DpOT_(
    v6 = std::_Hashtable<int,std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>,std::allocator<std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
           v14,
           v5,
           v20);
  v21 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 24) = v21;
  v22 = v6 + 32;
  v23 = *(_DWORD *)(v3 + 8);
  v24 = *(_DWORD *)(v6 + 8);
  if ( v3 + 32 == v23 )
    if ( v22 != v24 )
      *(_DWORD *)(v3 + 8) = v24;
      *(_DWORD *)(v6 + 8) = v22;
  else if ( v22 == v24 )
    *(_DWORD *)(v6 + 8) = v23;
    *(_DWORD *)(v3 + 8) = v3 + 32;
  else
    *(_DWORD *)(v3 + 8) = v24;
  v25 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v25;
  v27 = v3 + 16;
  v26 = *(_DWORD *)(v3 + 16);
  v28 = v6 + 16;
  *(_DWORD *)v27 = *(_DWORD *)(v6 + 16);
  *(_DWORD *)v28 = v26;
  v29 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)(v27 + 4) = *(_DWORD *)(v6 + 20);
  *(_DWORD *)(v28 + 4) = v29;
  v30 = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v27 + 16) = *(_DWORD *)(v6 + 32);
  *(_DWORD *)(v28 + 16) = v30;
  v31 = *(_DWORD *)(v3 + 16);
  if ( v31 )
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * (*(_DWORD *)(v31 + 4) % (unsigned int)(*(_QWORD *)(v3 + 8) >> 32))) = v27;
  if ( *(_DWORD *)v28 )
    *(_DWORD *)(*(_QWORD *)(v6 + 8) + 4 * (*(_DWORD *)(*(_DWORD *)v28 + 4) % (unsigned int)(*(_QWORD *)(v6 + 8) >> 32))) = v28;
  v32 = *((_QWORD *)v43 + 5);
  v33 = *((_QWORD *)v43 + 5) >> 32;
  result = v46 / v33;
  v35 = v46 % v33;
  v36 = *(int **)(v32 + 4 * (v46 % v33));
  if ( v36 )
    v37 = (int *)*v36;
    v38 = *(_DWORD *)(*v36 + 4);
    while ( v46 != v38 )
      v39 = *v37;
      if ( *v37 )
      {
        v38 = *(_DWORD *)(v39 + 4);
        v40 = *(_DWORD *)(v39 + 4);
        v41 = v40 % HIDWORD(v32);
        result = v40 / HIDWORD(v32);
        v36 = (int *)v32;
        v37 = *(int **)v32;
        if ( v41 == v35 )
          continue;
      }
      return result;
    if ( v36 )
      result = std::_Hashtable<int,std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>,std::allocator<std::pair<int const,std::unordered_multimap<int,short,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,short>>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
                 (int)v44,
                 v35,
                 v36,
                 *v36);
  return result;
}


InputDeviceMapper *__fastcall BehaviorActionMapper::~BehaviorActionMapper(BehaviorActionMapper *this)
{
  BehaviorActionMapper *v1; // r8@1
  int v2; // r6@1
  int v3; // r5@2
  void *v4; // r0@2
  void *v5; // r4@3
  void *v6; // r0@4
  char *v7; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_26E50E4;
  v2 = *((_DWORD *)this + 12);
  while ( v2 )
  {
    v3 = v2;
    v4 = *(void **)(v2 + 16);
    v2 = *(_DWORD *)v2;
    if ( v4 )
    {
      do
      {
        v5 = *(void **)v4;
        operator delete(v4);
        v4 = v5;
      }
      while ( v5 );
    }
    _aeabi_memclr4(*(_QWORD *)(v3 + 8), 4 * (*(_QWORD *)(v3 + 8) >> 32));
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    v6 = *(void **)(v3 + 8);
    if ( v6 && (void *)(v3 + 32) != v6 )
      operator delete(v6);
    operator delete((void *)v3);
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 5), 4 * (*((_QWORD *)v1 + 5) >> 32));
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  v7 = (char *)*((_DWORD *)v1 + 10);
  if ( v7 && (char *)v1 + 64 != v7 )
    operator delete(v7);
  return j_j_j__ZN17InputDeviceMapperD2Ev(v1);
}
