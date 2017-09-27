

char *__fastcall AnvilContainerManagerModel::getItems(AnvilContainerManagerModel *this, int a2)
{
  int v2; // r8@1
  AnvilContainerManagerModel *v3; // r10@1
  int v4; // r0@1
  int v5; // r4@2
  int v6; // r7@2
  bool v7; // zf@3
  int v8; // r5@6
  bool v9; // zf@9
  _DWORD *v10; // r0@13
  unsigned __int64 *v11; // r8@14
  int v12; // r0@14
  int v13; // r6@14
  __int64 v14; // kr00_8@14
  __int64 i; // r0@15
  int v16; // r9@21
  int v17; // r0@23
  int v18; // r6@24
  int v19; // r5@24
  bool v20; // zf@25
  int v21; // r4@28
  bool v22; // zf@31
  _DWORD *v23; // r0@35
  int v24; // r0@36
  int j; // r6@36
  __int64 v26; // kr08_8@36
  __int64 v27; // r0@37
  int v28; // r9@41
  int v29; // r0@41
  int v30; // r6@42
  int v31; // r5@42
  bool v32; // zf@43
  int v33; // r4@46
  bool v34; // zf@49
  _DWORD *v35; // r0@53
  int v36; // r0@54
  char *result; // r0@54
  int v38; // r5@54 OVERLAPPED
  int v39; // r6@54 OVERLAPPED
  __int64 v40; // r0@55

  v2 = a2;
  v3 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_DWORD *)dword_27F9F14;
  if ( !*(_DWORD *)dword_27F9F14 )
    goto LABEL_13;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    v7 = v6 == 0;
    if ( !v6 )
      v7 = *(_DWORD *)(v5 + 4) == 0;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( !(*(_DWORD *)(v8 + 12) % (unsigned int)dword_27F9F18) )
        continue;
    }
  }
  v9 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v9 = v4 == 0;
  if ( v9 )
LABEL_13:
    v10 = operator new(0x10u);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = &unk_28898CC;
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9F14,
           0,
           (int)v10);
  v11 = (unsigned __int64 *)(v2 + 40);
  v12 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v11,
          (int **)(v4 + 8));
  v14 = *(_QWORD *)(*(int (**)(void))(**(_DWORD **)v12 + 36))();
  v13 = v14;
  if ( (_DWORD)v14 != HIDWORD(v14) )
    for ( i = 0LL; ; i = *(_QWORD *)((char *)v3 + 4) )
      if ( (_DWORD)i == HIDWORD(i) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)v3,
          v13);
      else
        *((_DWORD *)v3 + 1) = (char *)ItemInstance::ItemInstance((ItemInstance *)i, v13) + 72;
      if ( HIDWORD(v14) - 72 == v13 )
        break;
      v13 += 72;
  v16 = 0;
  if ( dword_27F9F18 != 1 )
    v16 = 1;
  v17 = *(_DWORD *)(dword_27F9F14 + 4 * v16);
  if ( !v17 )
    goto LABEL_35;
  v18 = *(_DWORD *)v17;
  v19 = *(_DWORD *)(*(_DWORD *)v17 + 12);
    v20 = v19 == 1;
    if ( v19 == 1 )
      v20 = *(_DWORD *)(v18 + 4) == 1;
    if ( v20 )
    v21 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 )
      v19 = *(_DWORD *)(v21 + 12);
      v17 = v18;
      v18 = *(_DWORD *)v18;
      if ( *(_DWORD *)(v21 + 12) % (unsigned int)dword_27F9F18 == v16 )
  v22 = v17 == 0;
  if ( v17 )
    v17 = *(_DWORD *)v17;
    v22 = v17 == 0;
  if ( v22 )
LABEL_35:
    v23 = operator new(0x10u);
    *v23 = 0;
    v23[1] = 1;
    v23[2] = &unk_28898CC;
    v17 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F9F14,
            v16,
            1u,
            (int)v23);
  v24 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v17 + 8));
  v26 = *(_QWORD *)(*(int (**)(void))(**(_DWORD **)v24 + 36))();
  for ( j = v26; HIDWORD(v26) != j; j += 72 )
    v27 = *(_QWORD *)((char *)v3 + 4);
    if ( (_DWORD)v27 == HIDWORD(v27) )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)v3,
        j);
    else
      *((_DWORD *)v3 + 1) = (char *)ItemInstance::ItemInstance((ItemInstance *)v27, j) + 72;
  v28 = 2u % dword_27F9F18;
  v29 = *(_DWORD *)(dword_27F9F14 + 4 * (2u % dword_27F9F18));
  if ( !v29 )
    goto LABEL_53;
  v30 = *(_DWORD *)v29;
  v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
    v32 = v31 == 2;
    if ( v31 == 2 )
      v32 = *(_DWORD *)(v30 + 4) == 2;
    if ( v32 )
    v33 = *(_DWORD *)v30;
    if ( *(_DWORD *)v30 )
      v31 = *(_DWORD *)(v33 + 12);
      v29 = v30;
      v30 = *(_DWORD *)v30;
      if ( *(_DWORD *)(v33 + 12) % (unsigned int)dword_27F9F18 == v28 )
  v34 = v29 == 0;
  if ( v29 )
    v29 = *(_DWORD *)v29;
    v34 = v29 == 0;
  if ( v34 )
LABEL_53:
    v35 = operator new(0x10u);
    *v35 = 0;
    v35[1] = 2;
    v35[2] = &unk_28898CC;
    v29 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v28,
            2u,
            (int)v35);
  v36 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v29 + 8));
  result = (char *)(*(int (**)(void))(**(_DWORD **)v36 + 36))();
  for ( *(_QWORD *)&v38 = *(_QWORD *)result; v39 != v38; v38 += 72 )
    v40 = *(_QWORD *)((char *)v3 + 4);
    if ( (_DWORD)v40 == HIDWORD(v40) )
      result = std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                 (unsigned __int64 *)v3,
                 v38);
      result = (char *)ItemInstance::ItemInstance((ItemInstance *)v40, v38) + 72;
      *((_DWORD *)v3 + 1) = result;
  return result;
}


int __fastcall AnvilContainerManagerModel::setSlot(int result, int a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r8@1
  unsigned __int64 *v4; // r9@4
  int v5; // r0@4
  int v6; // r5@5
  int v7; // r7@5
  bool v8; // zf@6
  int v9; // r4@9
  int v10; // r11@12
  unsigned __int64 *v11; // r10@12
  int v12; // r0@12
  int v13; // r6@13
  int v14; // r4@13
  bool v15; // zf@14
  int v16; // r5@17
  int v17; // r11@20
  unsigned __int64 *v18; // r10@20
  int v19; // r0@22
  int v20; // r6@23
  int v21; // r4@23
  bool v22; // zf@24
  int v23; // r5@27
  bool v24; // zf@30
  _DWORD *v25; // r0@34
  int v26; // r0@35
  int v27; // r0@35
  int v28; // r9@35
  int v29; // r0@35
  int v30; // r6@36
  int v31; // r4@36
  bool v32; // zf@37
  int v33; // r5@40
  bool v34; // zf@43
  _DWORD *v35; // r0@47
  int v36; // r0@48
  int v37; // r9@48
  int v38; // r0@48
  int v39; // r0@50
  int v40; // r6@51
  int v41; // r4@51
  bool v42; // zf@52
  int v43; // r5@55
  bool v44; // zf@58
  _DWORD *v45; // r0@62
  _DWORD *v46; // r0@63
  bool v47; // zf@68
  _DWORD *v48; // r0@72
  _DWORD *v49; // r0@73
  bool v50; // zf@78
  _DWORD *v51; // r0@82
  int v52; // r0@83
  int v53; // r0@83
  int v54; // r0@83
  int v55; // r4@84
  int v56; // r7@84
  bool v57; // zf@85
  int v58; // r5@88
  bool v59; // zf@91
  _DWORD *v60; // r0@95
  _DWORD *v61; // r0@96
  int v62; // [sp+0h] [bp-100h]@35
  int v63; // [sp+8h] [bp-F8h]@67
  void *v64; // [sp+24h] [bp-DCh]@65
  void *ptr; // [sp+34h] [bp-CCh]@63
  char v66; // [sp+48h] [bp-B8h]@48
  int v67; // [sp+50h] [bp-B0h]@77
  void *v68; // [sp+6Ch] [bp-94h]@75
  void *v69; // [sp+7Ch] [bp-84h]@73
  char v70; // [sp+90h] [bp-70h]@83
  int v71; // [sp+98h] [bp-68h]@100
  void *v72; // [sp+B4h] [bp-4Ch]@98
  void *v73; // [sp+C4h] [bp-3Ch]@96

  v3 = a3;
  if ( a2 == 2 )
  {
    v10 = 2u % dword_27F9F18;
    v11 = (unsigned __int64 *)(result + 40);
    v12 = *(_DWORD *)(dword_27F9F14 + 4 * (2u % dword_27F9F18));
    if ( !v12 )
      goto LABEL_34;
    v13 = *(_DWORD *)v12;
    v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
    while ( 1 )
    {
      v15 = v14 == 2;
      if ( v14 == 2 )
        v15 = *(_DWORD *)(v13 + 4) == 2;
      if ( v15 )
        break;
      v16 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 )
      {
        v14 = *(_DWORD *)(v16 + 12);
        v12 = v13;
        v13 = *(_DWORD *)v13;
        if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27F9F18 == v10 )
          continue;
      }
    }
    v24 = v12 == 0;
    if ( v12 )
      v12 = *(_DWORD *)v12;
      v24 = v12 == 0;
    if ( v24 )
LABEL_34:
      v25 = operator new(0x10u);
      *v25 = 0;
      v25[1] = 2;
      v25[2] = &unk_28898CC;
      v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F9F14,
              v10,
              2u,
              (int)v25);
    v26 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v11,
            (int **)(v12 + 8));
    v27 = (*(int (**)(void))(**(_DWORD **)v26 + 32))();
    ItemInstance::ItemInstance((ItemInstance *)&v62, v27);
    v28 = 2u % dword_27F9F18;
    v29 = *(_DWORD *)(dword_27F9F14 + 4 * (2u % dword_27F9F18));
    if ( !v29 )
      goto LABEL_62;
    v30 = *(_DWORD *)v29;
    v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      v32 = v31 == 2;
      if ( v31 == 2 )
        v32 = *(_DWORD *)(v30 + 4) == 2;
      if ( v32 )
      v33 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 )
        v31 = *(_DWORD *)(v33 + 12);
        v29 = v30;
        v30 = *(_DWORD *)v30;
        if ( *(_DWORD *)(v33 + 12) % (unsigned int)dword_27F9F18 == v28 )
    v44 = v29 == 0;
    if ( v29 )
      v29 = *(_DWORD *)v29;
      v44 = v29 == 0;
    if ( v44 )
LABEL_62:
      v45 = operator new(0x10u);
      *v45 = 0;
      v45[1] = 2;
      v45[2] = &unk_28898CC;
      v29 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v28,
              (int)v45);
    v46 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v11,
                      (int **)(v29 + 8));
    ContainerModel::networkUpdateItem(*v46, (const ItemInstance *)&v62, v3);
    if ( ptr )
      operator delete(ptr);
    if ( v64 )
      operator delete(v64);
    result = v63;
  }
  else if ( a2 == 1 )
    v17 = 0;
    v18 = (unsigned __int64 *)(result + 40);
    if ( dword_27F9F18 != 1 )
      v17 = 1;
    v19 = *(_DWORD *)(dword_27F9F14 + 4 * v17);
    if ( !v19 )
      goto LABEL_47;
    v20 = *(_DWORD *)v19;
    v21 = *(_DWORD *)(*(_DWORD *)v19 + 12);
      v22 = v21 == 1;
      if ( v21 == 1 )
        v22 = *(_DWORD *)(v20 + 4) == 1;
      if ( v22 )
      v23 = *(_DWORD *)v20;
      if ( *(_DWORD *)v20 )
        v21 = *(_DWORD *)(v23 + 12);
        v19 = v20;
        v20 = *(_DWORD *)v20;
        if ( *(_DWORD *)(v23 + 12) % (unsigned int)dword_27F9F18 == v17 )
    v34 = v19 == 0;
    if ( v19 )
      v19 = *(_DWORD *)v19;
      v34 = v19 == 0;
    if ( v34 )
LABEL_47:
      v35 = operator new(0x10u);
      *v35 = 0;
      v35[1] = 1;
      v35[2] = &unk_28898CC;
      v19 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v17,
              1u,
              (int)v35);
    v36 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v18,
            (int **)(v19 + 8));
    v37 = 0;
    v38 = (*(int (**)(void))(**(_DWORD **)v36 + 32))();
    ItemInstance::ItemInstance((ItemInstance *)&v66, v38);
      v37 = 1;
    v39 = *(_DWORD *)(dword_27F9F14 + 4 * v37);
    if ( !v39 )
      goto LABEL_72;
    v40 = *(_DWORD *)v39;
    v41 = *(_DWORD *)(*(_DWORD *)v39 + 12);
      v42 = v41 == 1;
      if ( v41 == 1 )
        v42 = *(_DWORD *)(v40 + 4) == 1;
      if ( v42 )
      v43 = *(_DWORD *)v40;
      if ( *(_DWORD *)v40 )
        v41 = *(_DWORD *)(v43 + 12);
        v39 = v40;
        v40 = *(_DWORD *)v40;
        if ( *(_DWORD *)(v43 + 12) % (unsigned int)dword_27F9F18 == v37 )
    v47 = v39 == 0;
    if ( v39 )
      v39 = *(_DWORD *)v39;
      v47 = v39 == 0;
    if ( v47 )
LABEL_72:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 1;
      v48[2] = &unk_28898CC;
      v39 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v37,
              (int)v48);
    v49 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v18,
                      (int **)(v39 + 8));
    ContainerModel::networkUpdateItem(*v49, (const ItemInstance *)&v66, v3);
    if ( v69 )
      operator delete(v69);
    if ( v68 )
      operator delete(v68);
    result = v67;
  else
    if ( a2 )
      return result;
    v4 = (unsigned __int64 *)(result + 40);
    v5 = *(_DWORD *)dword_27F9F14;
    if ( !*(_DWORD *)dword_27F9F14 )
      goto LABEL_82;
    v6 = *(_DWORD *)v5;
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
      v8 = v7 == 0;
      if ( !v7 )
        v8 = *(_DWORD *)(v6 + 4) == 0;
      if ( v8 )
      v9 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 )
        v7 = *(_DWORD *)(v9 + 12);
        v5 = v6;
        v6 = *(_DWORD *)v6;
        if ( !(*(_DWORD *)(v9 + 12) % (unsigned int)dword_27F9F18) )
    v50 = v5 == 0;
    if ( v5 )
      v5 = *(_DWORD *)v5;
      v50 = v5 == 0;
    if ( v50 )
LABEL_82:
      v51 = operator new(0x10u);
      *v51 = 0;
      v51[1] = 0;
      v51[2] = &unk_28898CC;
      v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27F9F14,
             0,
             (int)v51);
    v52 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v4,
            (int **)(v5 + 8));
    v53 = (*(int (**)(void))(**(_DWORD **)v52 + 32))();
    ItemInstance::ItemInstance((ItemInstance *)&v70, v53);
    v54 = *(_DWORD *)dword_27F9F14;
      goto LABEL_95;
    v55 = *(_DWORD *)v54;
    v56 = *(_DWORD *)(*(_DWORD *)v54 + 12);
      v57 = v56 == 0;
      if ( !v56 )
        v57 = *(_DWORD *)(v55 + 4) == 0;
      if ( v57 )
      v58 = *(_DWORD *)v55;
      if ( *(_DWORD *)v55 )
        v56 = *(_DWORD *)(v58 + 12);
        v54 = v55;
        v55 = *(_DWORD *)v55;
        if ( !(*(_DWORD *)(v58 + 12) % (unsigned int)dword_27F9F18) )
    v59 = v54 == 0;
    if ( v54 )
      v54 = *(_DWORD *)v54;
      v59 = v54 == 0;
    if ( v59 )
LABEL_95:
      v60 = operator new(0x10u);
      *v60 = 0;
      v60[1] = 0;
      v60[2] = &unk_28898CC;
      v54 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              0,
              (int)v60);
    v61 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v4,
                      (int **)(v54 + 8));
    ContainerModel::networkUpdateItem(*v61, (const ItemInstance *)&v70, v3);
    if ( v73 )
      operator delete(v73);
    if ( v72 )
      operator delete(v72);
    result = v71;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall AnvilContainerManagerModel::AnvilContainerManagerModel(double a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1

  v3 = a3;
  v4 = LODWORD(a1);
  ContainerManagerModel::ContainerManagerModel(a1, a2);
  *(_DWORD *)v4 = &off_26ECF60;
  *(_DWORD *)(v4 + 68) = *(_DWORD *)v3;
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v4 + 76) = *(_DWORD *)(v3 + 8);
  ContainerManagerModel::setContainerType(v4, 5);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  return v4;
}


int __fastcall AnvilContainerManagerModel::fireItemCraftedEvent(AnvilContainerManagerModel *this, const ItemInstance *a2)
{
  Player *v2; // r4@1
  MinecraftEventing *v3; // r0@1
  bool v5; // [sp+18h] [bp-8h]@0

  v2 = a2;
  v3 = (MinecraftEventing *)ContainerManagerModel::getPlayer(this);
  return MinecraftEventing::fireEventItemCrafted(v3, v2, 0, 0, 0, 0, 0, 0, 0, 0, v5);
}


void __fastcall AnvilContainerManagerModel::~AnvilContainerManagerModel(AnvilContainerManagerModel *this)
{
  AnvilContainerManagerModel::~AnvilContainerManagerModel(this);
}


int __fastcall AnvilContainerManagerModel::applyDamageToAnvilBlock(AnvilContainerManagerModel *this)
{
  AnvilContainerManagerModel *v1; // r6@1
  BlockSource *v2; // r4@1
  Level *v3; // r5@1
  char *v4; // r0@3
  BlockPos *v10; // r10@5
  int v11; // r8@5
  unsigned int v12; // r9@5
  unsigned __int64 *v13; // r0@5
  signed int v14; // r7@5
  char *v15; // r6@6
  BlockSource *v16; // r1@6
  int v17; // r0@6
  int v18; // r2@6
  int v19; // r1@7
  BlockState *v21; // r0@10
  char v22; // r6@10
  int v23; // r11@10
  char v24; // r0@10
  char v25; // [sp+Ch] [bp-4Ch]@7
  char v26; // [sp+18h] [bp-40h]@10
  char v27; // [sp+24h] [bp-34h]@10
  char v28; // [sp+25h] [bp-33h]@10
  char v29; // [sp+28h] [bp-30h]@6

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v3 = (Level *)Entity::getLevel(*((Entity **)v1 + 1));
  if ( Abilities::getBool(*((_DWORD *)v1 + 1) + 4320, (int **)&Abilities::INSTABUILD) )
    goto LABEL_13;
  if ( Level::isClientSide(v3) )
  v4 = Level::getRandom(v3);
  _R0 = Random::_genRandInt32((Random *)v4);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.12
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
LABEL_13:
    v19 = (int)v1 + 68;
    v15 = &v25;
    Vec3::Vec3((int)&v25, v19);
LABEL_8:
    v17 = (int)v3;
    v16 = v2;
    v18 = 1021;
    return Level::broadcastDimensionEvent(v17, v16, v18, (int)v15, 0);
  v10 = (AnvilContainerManagerModel *)((char *)v1 + 68);
  v11 = BlockSource::getBlock(v2, (AnvilContainerManagerModel *)((char *)v1 + 68));
  v12 = BlockSource::getData(v2, (AnvilContainerManagerModel *)((char *)v1 + 68));
  v13 = (unsigned __int64 *)Block::getBlockState(Block::mAnvil, 8);
  v14 = (v12 >> (*v13 + 1 - (*v13 >> 32))) & (0xFu >> (4 - (*v13 >> 32)));
  if ( v14 < 2 )
    v21 = (BlockState *)Block::getBlockState(Block::mAnvil, 8);
    v23 = *(_QWORD *)v21 >> 32;
    v22 = *(_QWORD *)v21;
    v24 = BlockState::getMask(v21);
    v27 = *(_BYTE *)(v11 + 4);
    v28 = v12 & ~v24 | (((_BYTE)v14 + 1) << (v22 + 1 - v23));
    BlockSource::setBlockAndData((int)v2, v10, (int)&v27, 3, 0);
    v15 = &v26;
    Vec3::Vec3((int)&v26, (int)v10);
    goto LABEL_8;
  BlockSource::removeBlock(v2, *((_DWORD *)v1 + 17), *((_DWORD *)v1 + 18), *((_DWORD *)v1 + 19));
  v15 = &v29;
  Vec3::Vec3((int)&v29, (int)v10);
  v16 = v2;
  v17 = (int)v3;
  v18 = 1020;
  return Level::broadcastDimensionEvent(v17, v16, v18, (int)v15, 0);
}


void __fastcall AnvilContainerManagerModel::~AnvilContainerManagerModel(AnvilContainerManagerModel *this)
{
  ContainerManagerModel *v1; // r0@1

  v1 = ContainerManagerModel::~ContainerManagerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall AnvilContainerManagerModel::fireItemAcquiredEvent(AnvilContainerManagerModel *this, const ItemInstance *a2, int a3)
{
  AnvilContainerManagerModel::fireItemAcquiredEvent(this, a2, a3);
}


signed int __fastcall AnvilContainerManagerModel::isAnvilValid(AnvilContainerManagerModel *this, float a2)
{
  AnvilContainerManagerModel *v3; // r5@1
  signed int v4; // r4@1
  int v9; // r5@2
  int v10; // t1@2
  __int64 v11; // kr00_8@2
  const BlockPos *v13; // r0@2
  signed int v14; // r0@2
  unsigned __int8 v16; // [sp+4h] [bp-4Ch]@2
  int v17; // [sp+8h] [bp-48h]@2
  signed int v18; // [sp+Ch] [bp-44h]@2
  int v19; // [sp+10h] [bp-40h]@2
  char v20; // [sp+14h] [bp-3Ch]@2
  int v21; // [sp+18h] [bp-38h]@2
  int v22; // [sp+1Ch] [bp-34h]@2
  int v23; // [sp+20h] [bp-30h]@2
  int v24; // [sp+24h] [bp-2Ch]@2
  int v25; // [sp+28h] [bp-28h]@2
  char v26; // [sp+2Ch] [bp-24h]@2

  _R6 = a2;
  v3 = this;
  v4 = 0;
  if ( ContainerManagerModel::isValid(this, a2) == 1 )
  {
    v17 = 1056964608;
    v18 = 1056964608;
    __asm { VMOV            S16, R6 }
    v19 = 1056964608;
    BlockPos::BlockPos((int)&v20, (int)&v17);
    v10 = *((_DWORD *)v3 + 17);
    v9 = (int)v3 + 68;
    v11 = *(_QWORD *)(v9 + 4);
    v23 = v10 + *(_DWORD *)&v20;
    v24 = v21 + v11;
    v25 = v22 + HIDWORD(v11);
    Vec3::Vec3((int)&v26, (int)&v23);
    _R6 = Entity::distanceToSqr(*(Entity **)(v9 - 64), (const Vec3 *)&v26);
    v13 = (const BlockPos *)Entity::getRegion(*(Entity **)(v9 - 64));
    BlockSource::getBlockID((BlockSource *)&v16, v13, v9);
    __asm
    {
      VMUL.F32        S0, S16, S16
      VMOV            S2, R6
      VCMPE.F32       S2, S0
    }
    v14 = 0;
    if ( v16 == *(_BYTE *)(Block::mAnvil + 4) )
      v14 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v4 = 1;
    v4 &= v14;
  }
  return v4;
}


void *__fastcall AnvilContainerManagerModel::getSlot(AnvilContainerManagerModel *this, int a2)
{
  char *v2; // r8@4
  int v3; // r0@4
  int v4; // r4@5
  int v5; // r6@5
  bool v6; // zf@6
  int v7; // r7@9
  unsigned int v8; // r10@12
  char *v9; // r9@12
  int v10; // r0@12
  int v11; // r5@13
  int v12; // r7@13
  bool v13; // zf@14
  int v14; // r4@17
  signed int v15; // r10@20
  int v16; // r5@23
  int v17; // r7@23
  bool v18; // zf@24
  int v19; // r4@27
  bool v21; // zf@31
  _DWORD *v22; // r0@35
  int v23; // r3@35
  unsigned int v24; // r2@35
  int *v25; // r0@35
  int v26; // r1@35
  bool v27; // zf@36
  _DWORD *v28; // r0@40
  int **v29; // r1@42
  unsigned __int64 *v30; // r0@42
  bool v31; // zf@43
  _DWORD *v32; // r0@47
  int v33; // r0@49

  if ( a2 == 2 )
  {
    v8 = 2u % dword_27F9F18;
    v9 = (char *)this + 40;
    v10 = *(_DWORD *)(dword_27F9F14 + 4 * (2u % dword_27F9F18));
    if ( v10 )
    {
      v11 = *(_DWORD *)v10;
      v12 = *(_DWORD *)(*(_DWORD *)v10 + 12);
      while ( 1 )
      {
        v13 = v12 == 2;
        if ( v12 == 2 )
          v13 = *(_DWORD *)(v11 + 4) == 2;
        if ( v13 )
          break;
        v14 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 )
        {
          v12 = *(_DWORD *)(v14 + 12);
          v10 = v11;
          v11 = *(_DWORD *)v11;
          if ( *(_DWORD *)(v14 + 12) % (unsigned int)dword_27F9F18 == v8 )
            continue;
        }
        goto LABEL_35;
      }
      v21 = v10 == 0;
      if ( v10 )
        v10 = *(_DWORD *)v10;
        v21 = v10 == 0;
      if ( !v21 )
        goto LABEL_42;
    }
LABEL_35:
    v22 = operator new(0x10u);
    v23 = (int)v22;
    *v22 = 0;
    v22[1] = 2;
    v24 = 2;
    v22[2] = &unk_28898CC;
    v25 = &dword_27F9F14;
    v26 = v8;
    goto LABEL_41;
  }
  if ( a2 == 1 )
    v15 = 0;
    if ( dword_27F9F18 != 1 )
      v15 = 1;
    v10 = *(_DWORD *)(dword_27F9F14 + 4 * v15);
      v16 = *(_DWORD *)v10;
      v17 = *(_DWORD *)(*(_DWORD *)v10 + 12);
        v18 = v17 == 1;
        if ( v17 == 1 )
          v18 = *(_DWORD *)(v16 + 4) == 1;
        if ( v18 )
        v19 = *(_DWORD *)v16;
        if ( *(_DWORD *)v16 )
          v17 = *(_DWORD *)(v19 + 12);
          v10 = v16;
          v16 = *(_DWORD *)v16;
          if ( *(_DWORD *)(v19 + 12) % (unsigned int)dword_27F9F18 == v15 )
        goto LABEL_40;
      v27 = v10 == 0;
        v27 = v10 == 0;
      if ( !v27 )
LABEL_40:
    v28 = operator new(0x10u);
    v23 = (int)v28;
    *v28 = 0;
    v28[1] = 1;
    v24 = 1;
    v28[2] = &unk_28898CC;
    v26 = v15;
LABEL_41:
    v10 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)v25,
            v26,
            v24,
            v23);
LABEL_42:
    v29 = (int **)(v10 + 8);
    v30 = (unsigned __int64 *)v9;
    goto LABEL_49;
  if ( a2 )
    return &ItemInstance::EMPTY_ITEM;
  v2 = (char *)this + 40;
  v3 = *(_DWORD *)dword_27F9F14;
  if ( !*(_DWORD *)dword_27F9F14 )
    goto LABEL_47;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
    v6 = v5 == 0;
    if ( !v5 )
      v6 = *(_DWORD *)(v4 + 4) == 0;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( !(*(_DWORD *)(v7 + 12) % (unsigned int)dword_27F9F18) )
        continue;
  v31 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v31 = v3 == 0;
  if ( v31 )
LABEL_47:
    v32 = operator new(0x10u);
    *v32 = 0;
    v32[1] = 0;
    v32[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9F14,
           0,
           (int)v32);
  v29 = (int **)(v3 + 8);
  v30 = (unsigned __int64 *)v2;
LABEL_49:
  v33 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v30,
          v29);
  return (void *)(*(int (**)(void))(**(_DWORD **)v33 + 32))();
}


unsigned int *__fastcall AnvilContainerManagerModel::init(AnvilContainerManagerModel *this)
{
  AnvilContainerManagerModel *v1; // r8@1
  int v2; // r3@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r4@8
  unsigned int v7; // r0@10
  int v8; // r3@15
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r4@22
  unsigned int v13; // r0@24
  int v14; // r5@29
  _DWORD *v15; // r6@29
  void *v16; // r0@29
  __int64 v17; // r1@29
  void *v18; // r4@31
  unsigned int *v19; // r5@31
  unsigned int *v20; // r7@31
  int v21; // r0@31
  unsigned int v22; // r0@33
  unsigned int v23; // r0@38
  unsigned int v24; // r0@44
  int v25; // r5@49
  unsigned int *v26; // r1@50
  unsigned int v27; // r0@52
  unsigned int *v28; // r4@56
  unsigned int v29; // r0@58
  int v30; // r5@63
  unsigned int *v31; // r1@64
  unsigned int v32; // r0@66
  unsigned int *v33; // r4@70
  unsigned int v34; // r0@72
  int v35; // r5@77
  unsigned int *v36; // r1@78
  unsigned int v37; // r0@80
  unsigned int *v38; // r4@84
  unsigned int v39; // r0@86
  unsigned int *result; // r0@91
  int v41; // r4@91
  unsigned int *v42; // r1@92
  unsigned int *v43; // r5@98
  int v44; // [sp+Ch] [bp-8Ch]@91
  int v45; // [sp+10h] [bp-88h]@91
  int v46; // [sp+14h] [bp-84h]@91
  int v47; // [sp+18h] [bp-80h]@91
  int v48; // [sp+1Ch] [bp-7Ch]@77
  int v49; // [sp+20h] [bp-78h]@77
  int v50; // [sp+24h] [bp-74h]@77
  int v51; // [sp+28h] [bp-70h]@77
  int v52; // [sp+2Ch] [bp-6Ch]@63
  int v53; // [sp+30h] [bp-68h]@63
  int v54; // [sp+34h] [bp-64h]@63
  int v55; // [sp+38h] [bp-60h]@63
  _DWORD *v56; // [sp+3Ch] [bp-5Ch]@31
  int v57; // [sp+40h] [bp-58h]@31
  int v58; // [sp+44h] [bp-54h]@15
  int v59; // [sp+48h] [bp-50h]@15
  int v60; // [sp+4Ch] [bp-4Ch]@15
  char v61; // [sp+50h] [bp-48h]@15
  int v62; // [sp+54h] [bp-44h]@15
  int v63; // [sp+58h] [bp-40h]@1
  int v64; // [sp+5Ch] [bp-3Ch]@1
  int v65; // [sp+60h] [bp-38h]@1
  char v66; // [sp+64h] [bp-34h]@1
  int v67; // [sp+68h] [bp-30h]@1
  void *v68; // [sp+6Ch] [bp-2Ch]@29
  __int64 v69; // [sp+74h] [bp-24h]@29
  char v70; // [sp+7Ch] [bp-1Ch]@63

  v1 = this;
  v65 = 24;
  v64 = 9;
  v2 = *((_DWORD *)this + 1);
  v63 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v66,
    (unsigned int *)&v65,
    (unsigned int *)&v64,
    v2,
    &v63);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v66);
  v3 = v67;
  if ( v67 )
  {
    v4 = (unsigned int *)(v67 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  v60 = 26;
  v59 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v58 = 18;
    (int)&v61,
    (unsigned int *)&v60,
    (unsigned int *)&v59,
    v8,
    &v58);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v61);
  v9 = v62;
  if ( v62 )
    v10 = (unsigned int *)(v62 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v14 = *((_DWORD *)v1 + 1);
  v15 = operator new(0x68u);
  v16 = operator new(1u);
  LODWORD(v17) = sub_1696086;
  v68 = v16;
  HIDWORD(v17) = sub_1696060;
  v69 = v17;
  FilteredInventoryContainerModel::FilteredInventoryContainerModel((int)v15, 9u, 0x24u, v14, 9, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v18 = operator new(0x14u);
  *((_DWORD *)v18 + 1) = 1;
  v19 = (unsigned int *)((char *)v18 + 4);
  *((_DWORD *)v18 + 2) = 1;
  v20 = (unsigned int *)((char *)v18 + 8);
  *(_DWORD *)v18 = &off_26ECFB8;
  v21 = *v15;
  *((_DWORD *)v18 + 4) = v15;
  (*(void (__fastcall **)(_DWORD *))(v21 + 12))(v15);
  v56 = v15;
  v57 = (int)v18;
  if ( &pthread_create )
    __dmb();
    do
      v22 = __ldrex(v19);
    while ( __strex(v22 + 1, v19) );
  else
    ++*v19;
      v23 = __ldrex(v19);
    while ( __strex(v23 - 1, v19) );
    v23 = (*v19)--;
  if ( v23 == 1 )
    (*(void (__fastcall **)(void *))(*(_DWORD *)v18 + 8))(v18);
        v24 = __ldrex(v20);
      while ( __strex(v24 - 1, v20) );
      v24 = (*v20)--;
    if ( v24 == 1 )
      (*(void (__fastcall **)(void *))(*(_DWORD *)v18 + 12))(v18);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v56);
  v25 = v57;
  if ( v57 )
    v26 = (unsigned int *)(v57 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  v53 = 0;
  v52 = 1;
  std::__shared_ptr<ContainerModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ContainerModel>,ContainerEnumName,int>(
    (int)&v54,
    (int)&v70,
    (unsigned int *)&v53,
    (unsigned int *)&v52);
  (*(void (**)(void))(*(_DWORD *)v54 + 12))();
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v54);
  v30 = v55;
  if ( v55 )
    v31 = (unsigned int *)(v55 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  v48 = 1;
  v49 = 1;
    (int)&v50,
    (unsigned int *)&v49,
    (unsigned int *)&v48);
  (*(void (**)(void))(*(_DWORD *)v50 + 12))();
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v50);
  v35 = v51;
  if ( v51 )
    v36 = (unsigned int *)(v51 + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(v35 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
  v45 = 2;
  v44 = 1;
    (int)&v46,
    (unsigned int *)&v45,
    (unsigned int *)&v44);
  (*(void (**)(void))(*(_DWORD *)v46 + 12))();
  result = ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v46);
  v41 = v47;
  if ( v47 )
    v42 = (unsigned int *)(v47 + 4);
        result = (unsigned int *)__ldrex(v42);
      while ( __strex((unsigned int)result - 1, v42) );
      result = (unsigned int *)(*v42)--;
    if ( result == (unsigned int *)1 )
      v43 = (unsigned int *)(v41 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
          result = (unsigned int *)__ldrex(v43);
        while ( __strex((unsigned int)result - 1, v43) );
        result = (unsigned int *)(*v43)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
  return result;
}


void __fastcall AnvilContainerManagerModel::fireItemAcquiredEvent(AnvilContainerManagerModel *this, const ItemInstance *a2, int a3)
{
  int v3; // r6@1
  ItemInstance *v4; // r4@1
  ContainerManagerModel *v5; // r7@1
  int v6; // r0@1
  void *v7; // r0@1
  int v8; // r6@1
  MinecraftEventing *v9; // r0@3
  const ItemInstance *v10; // r2@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  int v13; // [sp+4h] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = ContainerManagerModel::getPlayer(this);
  MinecraftEventing::fireEventItemAcquired(v6, v4, v3, 6);
  ItemInstance::getName((ItemInstance *)&v13, (int)v4);
  v7 = (void *)(v13 - 12);
  v8 = *(_DWORD *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  if ( v8 )
    v9 = (MinecraftEventing *)ContainerManagerModel::getPlayer(v5);
    MinecraftEventing::fireEventItemNamed(v9, v4, v10);
}


int __fastcall AnvilContainerManagerModel::sendCraftedPacket(AnvilContainerManagerModel *this, CraftingEventPacket *a2)
{
  Level *v2; // r0@1
  int v3; // r0@1

  v2 = (Level *)Entity::getLevel(*((Entity **)this + 1));
  v3 = Level::getPacketSender(v2);
  return (*(int (**)(void))(*(_DWORD *)v3 + 8))();
}
