

int __fastcall Sensing::Sensing(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  unsigned int v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6
  int result; // r0@7

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = HIDWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v1 + 8) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 28) = 0;
    v4 = (void *)(v1 + 28);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 4) = v4;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 48) = 1065353216;
  LODWORD(v2) = v1 + 48;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = sub_21E6254(v2);
  *(_DWORD *)(v1 + 36) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 56) = 0;
    v7 = (void *)(v1 + 56);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  result = v1;
  *(_DWORD *)(v1 + 32) = v7;
  return result;
}


signed int __fastcall Sensing::canSee(Sensing *this, const Entity *a2)
{
  Sensing *v2; // r4@1
  __int64 v3; // r8@1
  unsigned int v4; // r7@1
  unsigned int v5; // r10@1
  int v6; // r0@1
  int v7; // r11@2
  int v8; // r6@2
  bool v9; // zf@3
  int v10; // r4@6
  bool v11; // zf@9
  signed int v12; // r6@12
  int v13; // r7@13
  int v14; // r0@13
  int v15; // r5@14
  int v16; // r6@14
  bool v17; // zf@15
  int v18; // r4@18
  bool v19; // zf@21
  __int64 v20; // kr00_8@26
  int v21; // r11@26
  int v22; // r0@26
  int v23; // r6@27
  int v24; // r5@27
  bool v25; // zf@28
  __int64 v26; // kr08_8@34
  int v27; // r11@34
  int v28; // r0@34
  int v29; // r5@35
  int v30; // r7@35
  bool v31; // zf@36
  bool v32; // zf@42
  _QWORD *v33; // r0@46
  bool v34; // zf@47
  _QWORD *v35; // r0@51
  int v37; // [sp+8h] [bp-30h]@1
  Sensing *v38; // [sp+10h] [bp-28h]@1

  v2 = this;
  v38 = this;
  v3 = *(_QWORD *)Entity::getUniqueID(a2);
  v37 = (int)v2 + 4;
  v4 = *((_DWORD *)v2 + 2);
  v5 = (v3 + ((HIDWORD(v3) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v3) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v3) - 1640531527);
  v6 = *(_DWORD *)(*((_DWORD *)v2 + 1) + 4 * (v5 % v4));
  if ( v6 )
  {
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)(*(_DWORD *)v6 + 16);
    while ( 1 )
    {
      v9 = v8 == v5;
      if ( v8 == v5 )
        v9 = *(_QWORD *)(v7 + 8) == v3;
      if ( v9 )
        break;
      v10 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 )
      {
        v8 = *(_DWORD *)(v10 + 16);
        v6 = v7;
        v7 = *(_DWORD *)v7;
        if ( *(_DWORD *)(v10 + 16) % v4 == v5 % v4 )
          continue;
      }
      goto LABEL_13;
    }
    v11 = v6 == 0;
    if ( v6 )
      v11 = *(_DWORD *)v6 == 0;
    if ( !v11 )
      return 1;
  }
LABEL_13:
  v13 = v5 % *((_DWORD *)v38 + 9);
  v14 = *(_DWORD *)(*((_DWORD *)v38 + 8) + 4 * v13);
  if ( v14 )
    v15 = *(_DWORD *)v14;
    v16 = *(_DWORD *)(*(_DWORD *)v14 + 16);
      v17 = v16 == v5;
      if ( v16 == v5 )
        v17 = *(_QWORD *)(v15 + 8) == v3;
      if ( v17 )
      v18 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
        v16 = *(_DWORD *)(v18 + 16);
        v14 = v15;
        v15 = *(_DWORD *)v15;
        if ( *(_DWORD *)(v18 + 16) % *((_DWORD *)v38 + 9) == v13 )
      goto LABEL_25;
    v19 = v14 == 0;
    if ( v14 )
      v19 = *(_DWORD *)v14 == 0;
    if ( !v19 )
      return 0;
LABEL_25:
  if ( (*(int (**)(void))(**(_DWORD **)v38 + 252))() != 1 )
    v26 = *((_QWORD *)v38 + 4);
    v27 = v5 % (unsigned int)(*((_QWORD *)v38 + 4) >> 32);
    v28 = *(_DWORD *)(v26 + 4 * v27);
    if ( !v28 )
      goto LABEL_51;
    v29 = *(_DWORD *)v28;
    v30 = *(_DWORD *)(*(_DWORD *)v28 + 16);
      v31 = v30 == v5;
      if ( v30 == v5 )
        v31 = *(_QWORD *)(v29 + 8) == v3;
      if ( v31 )
      if ( *(_DWORD *)v29 )
        v30 = *(_DWORD *)(v26 + 16);
        v28 = v29;
        v29 = *(_DWORD *)v29;
        if ( *(_DWORD *)(v26 + 16) % HIDWORD(v26) == v27 )
    v34 = v28 == 0;
    if ( v28 )
      v34 = *(_DWORD *)v28 == 0;
    if ( v34 )
LABEL_51:
      v35 = operator new(0x18u);
      v12 = 0;
      *(_DWORD *)v35 = 0;
      v35[1] = v3;
      std::_Hashtable<EntityUniqueID,EntityUniqueID,std::allocator<EntityUniqueID>,std::__detail::_Identity,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
        (int)v38 + 32,
        v27,
        v5,
        (int)v35);
      return v12;
    return 0;
  v20 = *(_QWORD *)((char *)v38 + 4);
  v21 = v5 % (unsigned int)(*(_QWORD *)((char *)v38 + 4) >> 32);
  v22 = *(_DWORD *)(v20 + 4 * v21);
  if ( !v22 )
    goto LABEL_46;
  v23 = *(_DWORD *)v22;
  v24 = *(_DWORD *)(*(_DWORD *)v22 + 16);
  while ( 1 )
    v25 = v24 == v5;
    if ( v24 == v5 )
      v25 = *(_QWORD *)(v23 + 8) == v3;
    if ( v25 )
      break;
    if ( *(_DWORD *)v23 )
      v24 = *(_DWORD *)(v20 + 16);
      v22 = v23;
      v23 = *(_DWORD *)v23;
      if ( *(_DWORD *)(v20 + 16) % HIDWORD(v20) == v21 )
        continue;
  v32 = v22 == 0;
  if ( v22 )
    v32 = *(_DWORD *)v22 == 0;
  if ( v32 )
LABEL_46:
    v33 = operator new(0x18u);
    *(_DWORD *)v33 = 0;
    v33[1] = v3;
    std::_Hashtable<EntityUniqueID,EntityUniqueID,std::allocator<EntityUniqueID>,std::__detail::_Identity,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
      v37,
      v21,
      v5,
      (int)v33);
    v12 = 1;
  else
  return v12;
}
