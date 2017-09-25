

int __fastcall Abilities::getBool(int a1, int **a2)
{
  return *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                      (unsigned __int64 *)(a1 + 4),
                      a2)
                  + 12);
}


int __fastcall Abilities::setAbility(int a1, int **a2, char a3)
{
  char v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(a1 + 4),
             a2);
  *(_BYTE *)(result + 12) = v3;
  return result;
}


signed int __fastcall Abilities::loadSaveData(Abilities *this, const CompoundTag *a2)
{
  Abilities *v2; // r4@1
  const CompoundTag *v3; // r5@1
  int v4; // r0@2
  int v5; // r7@2
  const CompoundTag *v6; // r5@2
  int v7; // r0@6
  int v9; // r0@13

  v2 = this;
  v3 = a2;
  if ( CompoundTag::contains((int)a2, (const void **)&Abilities::TAG, 10) != 1 )
    return 0;
  v4 = CompoundTag::getCompound((int)v3, (const void **)&Abilities::TAG);
  v5 = *((_DWORD *)v2 + 3);
  v6 = (const CompoundTag *)v4;
  while ( v5 )
  {
    if ( *(_BYTE *)(v5 + 16) & 1 )
      goto LABEL_3;
    v7 = *(_BYTE *)(v5 + 8);
    if ( v7 == 2 )
    {
      if ( CompoundTag::contains((int)v6, (const void **)(v5 + 4), 5) == 1 )
        *(_DWORD *)(v5 + 12) = CompoundTag::getFloat((int)v6, (const void **)(v5 + 4));
LABEL_3:
      v5 = *(_DWORD *)v5;
    }
    else
      if ( v7 != 1 )
        goto LABEL_3;
      *(_BYTE *)(v5 + 12) = CompoundTag::getBoolean((int)v6, (const void **)(v5 + 4));
  }
  if ( PermissionsHandler::loadSaveData(*(PermissionsHandler **)v2, v6) )
    return 1;
  v9 = PermissionsHandler::getPlayerPermissions(*(PermissionsHandler **)v2);
  Abilities::setPlayerPermissions((PermissionsHandler **)v2, v9);
  return 0;
}


char *__fastcall Abilities::getStoredCustomAbilities(Abilities *this)
{
  return (char *)this + 44;
}


int __fastcall Abilities::Abilities(int a1, int *a2)
{
  int *v2; // r9@1
  int v3; // r10@1
  int v4; // r4@1
  void *v5; // r6@1
  double v6; // r0@1
  double v7; // r0@1
  int v8; // r6@3
  void *v9; // r5@3
  unsigned int v10; // r0@4
  int v11; // r4@6
  void *v12; // r5@6

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = operator new(2u);
  PermissionsHandler::PermissionsHandler((int)v5, v4);
  *(_DWORD *)v3 = v5;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 1065353216;
  *(_DWORD *)(v3 + 24) = 0;
  LODWORD(v6) = v3 + 20;
  v7 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v6)));
  *(_DWORD *)(v3 + 8) = LODWORD(v7);
  if ( LODWORD(v7) == 1 )
  {
    *(_DWORD *)(v3 + 28) = 0;
    v9 = (void *)(v3 + 28);
  }
  else
    if ( LODWORD(v7) >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * LODWORD(v7);
    v9 = operator new(4 * LODWORD(v7));
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 4) = v9;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 1065353216;
  *(_DWORD *)(v3 + 64) = 0;
  LODWORD(v7) = v3 + 60;
  v10 = sub_21E6254(v7);
  *(_DWORD *)(v3 + 48) = v10;
  if ( v10 == 1 )
    *(_DWORD *)(v3 + 68) = 0;
    v12 = (void *)(v3 + 68);
    if ( v10 >= 0x40000000 )
    v11 = 4 * v10;
    v12 = operator new(4 * v10);
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)(v3 + 44) = v12;
  std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (unsigned __int64 *)(v3 + 4),
    (int)(v2 + 1));
  std::vector<std::string,std::allocator<std::string>>::operator=(v3 + 32, (unsigned __int64 *)v2 + 4);
  std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (unsigned __int64 *)(v3 + 44),
    (int)(v2 + 11));
  return v3;
}


char *__fastcall Abilities::getStoredCustomAbilities(Abilities *this)
{
  return (char *)this + 44;
}


int __fastcall Abilities::setAbility(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(a1 + 4),
             a2);
  *(_DWORD *)(result + 12) = v3;
  return result;
}


char *__fastcall Abilities::_registerAbilities(Abilities *this)
{
  Abilities *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  __int64 v14; // r0@1
  int v15; // r0@4
  __int64 v16; // r0@4
  int v17; // r0@7
  __int64 v18; // r0@7
  int v19; // r0@10
  __int64 v20; // r0@10
  int v21; // r0@13
  __int64 v22; // r0@13
  int v23; // r0@16
  __int64 v24; // r0@16
  int v25; // r0@19
  __int64 v26; // r0@19
  char *result; // r0@20
  __int16 v28; // [sp+0h] [bp-58h]@0
  char v29; // [sp+2h] [bp-56h]@0
  __int16 v30; // [sp+3h] [bp-55h]@0
  char v31; // [sp+5h] [bp-53h]@0
  __int16 v32; // [sp+6h] [bp-52h]@0
  char v33; // [sp+8h] [bp-50h]@0
  __int16 v34; // [sp+9h] [bp-4Fh]@0
  char v35; // [sp+Bh] [bp-4Dh]@0
  __int16 v36; // [sp+Ch] [bp-4Ch]@0
  char v37; // [sp+Eh] [bp-4Ah]@0
  __int16 v38; // [sp+Fh] [bp-49h]@0
  char v39; // [sp+11h] [bp-47h]@0
  __int16 v40; // [sp+12h] [bp-46h]@0
  char v41; // [sp+14h] [bp-44h]@0
  __int16 v42; // [sp+15h] [bp-43h]@0
  char v43; // [sp+17h] [bp-41h]@0
  __int16 v44; // [sp+18h] [bp-40h]@0
  char v45; // [sp+1Ah] [bp-3Eh]@0
  __int16 v46; // [sp+1Bh] [bp-3Dh]@0
  char v47; // [sp+1Dh] [bp-3Bh]@0
  __int16 v48; // [sp+1Eh] [bp-3Ah]@0
  char v49; // [sp+20h] [bp-38h]@0
  __int16 v50; // [sp+21h] [bp-37h]@0
  char v51; // [sp+23h] [bp-35h]@0
  __int16 v52; // [sp+24h] [bp-34h]@0
  char v53; // [sp+26h] [bp-32h]@0
  __int16 v54; // [sp+27h] [bp-31h]@0
  char v55; // [sp+29h] [bp-2Fh]@0
  __int16 v56; // [sp+2Ah] [bp-2Eh]@0
  char v57; // [sp+2Ch] [bp-2Ch]@0
  __int16 v58; // [sp+2Dh] [bp-2Bh]@0
  char v59; // [sp+2Fh] [bp-29h]@0
  __int16 v60; // [sp+30h] [bp-28h]@0
  char v61; // [sp+32h] [bp-26h]@0
  __int16 v62; // [sp+33h] [bp-25h]@0
  char v63; // [sp+35h] [bp-23h]@0
  __int16 v64; // [sp+36h] [bp-22h]@0
  char v65; // [sp+38h] [bp-20h]@0
  __int16 v66; // [sp+39h] [bp-1Fh]@0
  char v67; // [sp+3Bh] [bp-1Dh]@0

  v1 = this;
  v2 = (char *)this + 4;
  v3 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int)this + 4,
         (int **)&Abilities::INVULNERABLE);
  *(_BYTE *)v3 = 1;
  *(_BYTE *)(v3 + 4) = 0;
  *(_BYTE *)(v3 + 8) = 0;
  v4 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int)v2,
         (int **)&Abilities::FLYING);
  *(_BYTE *)v4 = 1;
  *(_BYTE *)(v4 + 4) = 0;
  *(_BYTE *)(v4 + 8) = 0;
  v5 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int **)&Abilities::MAYFLY);
  *(_BYTE *)v5 = 1;
  *(_BYTE *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 8) = 2;
  v6 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int **)&Abilities::INSTABUILD);
  *(_BYTE *)v6 = 1;
  *(_BYTE *)(v6 + 4) = 0;
  *(_BYTE *)(v6 + 8) = 0;
  v7 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int **)&Abilities::LIGHTNING);
  *(_BYTE *)v7 = 1;
  *(_BYTE *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 8) = 0;
  v8 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int **)&Abilities::FLYSPEED);
  *(_BYTE *)v8 = 2;
  *(_DWORD *)(v8 + 4) = 1028443341;
  *(_BYTE *)(v8 + 8) = 0;
  v9 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int **)&Abilities::WALKSPEED);
  *(_BYTE *)v9 = 2;
  *(_DWORD *)(v9 + 4) = 1036831949;
  *(_BYTE *)(v9 + 8) = 0;
  v10 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int)v2,
          (int **)&Abilities::MUTED);
  *(_BYTE *)v10 = 1;
  *(_BYTE *)(v10 + 3) = v67;
  *(_WORD *)(v10 + 1) = v66;
  *(_BYTE *)(v10 + 4) = 0;
  *(_BYTE *)(v10 + 7) = v65;
  *(_WORD *)(v10 + 5) = v64;
  *(_BYTE *)(v10 + 8) = 3;
  v11 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&Abilities::WORLDBUILDER);
  *(_BYTE *)v11 = 1;
  *(_BYTE *)(v11 + 3) = v63;
  *(_WORD *)(v11 + 1) = v62;
  *(_BYTE *)(v11 + 4) = 0;
  *(_BYTE *)(v11 + 7) = v61;
  *(_WORD *)(v11 + 5) = v60;
  *(_BYTE *)(v11 + 8) = 3;
  v12 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&Abilities::NOCLIP);
  *(_BYTE *)v12 = 1;
  *(_BYTE *)(v12 + 3) = v59;
  *(_WORD *)(v12 + 1) = v58;
  *(_BYTE *)(v12 + 4) = 0;
  *(_BYTE *)(v12 + 7) = v57;
  *(_WORD *)(v12 + 5) = v56;
  *(_BYTE *)(v12 + 8) = 1;
  v13 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          &Abilities::BUILD_AND_MINE);
  *(_BYTE *)v13 = 1;
  *(_BYTE *)(v13 + 3) = v55;
  *(_WORD *)(v13 + 1) = v54;
  *(_BYTE *)(v13 + 4) = 0;
  *(_BYTE *)(v13 + 7) = v53;
  *(_WORD *)(v13 + 5) = v52;
  *(_BYTE *)(v13 + 8) = 4;
  v14 = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v14 == HIDWORD(v14) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)v1 + 4,
      (int *)&Abilities::BUILD_AND_MINE);
  }
  else
    sub_21E8AF4((int *)v14, (int *)&Abilities::BUILD_AND_MINE);
    *((_DWORD *)v1 + 9) += 4;
  v15 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          &Abilities::DOORS_AND_SWITCHES);
  *(_BYTE *)v15 = 1;
  *(_BYTE *)(v15 + 3) = v51;
  *(_WORD *)(v15 + 1) = v50;
  *(_BYTE *)(v15 + 4) = 0;
  *(_BYTE *)(v15 + 7) = v49;
  *(_WORD *)(v15 + 5) = v48;
  *(_BYTE *)(v15 + 8) = 4;
  v16 = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v16 == HIDWORD(v16) )
      (int *)&Abilities::DOORS_AND_SWITCHES);
    sub_21E8AF4((int *)v16, (int *)&Abilities::DOORS_AND_SWITCHES);
  v17 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          &Abilities::OPEN_CONTAINERS);
  *(_BYTE *)v17 = 1;
  *(_BYTE *)(v17 + 3) = v47;
  *(_WORD *)(v17 + 1) = v46;
  *(_BYTE *)(v17 + 4) = 0;
  *(_BYTE *)(v17 + 7) = v45;
  *(_WORD *)(v17 + 5) = v44;
  *(_BYTE *)(v17 + 8) = 4;
  v18 = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v18 == HIDWORD(v18) )
      (int *)&Abilities::OPEN_CONTAINERS);
    sub_21E8AF4((int *)v18, (int *)&Abilities::OPEN_CONTAINERS);
  v19 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          &Abilities::ATTACK_PLAYERS);
  *(_BYTE *)v19 = 1;
  *(_BYTE *)(v19 + 3) = v43;
  *(_WORD *)(v19 + 1) = v42;
  *(_BYTE *)(v19 + 4) = 0;
  *(_BYTE *)(v19 + 7) = v41;
  *(_WORD *)(v19 + 5) = v40;
  *(_BYTE *)(v19 + 8) = 4;
  v20 = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v20 == HIDWORD(v20) )
      (int *)&Abilities::ATTACK_PLAYERS);
    sub_21E8AF4((int *)v20, (int *)&Abilities::ATTACK_PLAYERS);
  v21 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          &Abilities::ATTACK_MOBS);
  *(_BYTE *)v21 = 1;
  *(_BYTE *)(v21 + 3) = v39;
  *(_WORD *)(v21 + 1) = v38;
  *(_BYTE *)(v21 + 4) = 0;
  *(_BYTE *)(v21 + 7) = v37;
  *(_WORD *)(v21 + 5) = v36;
  *(_BYTE *)(v21 + 8) = 4;
  v22 = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v22 == HIDWORD(v22) )
      (int *)&Abilities::ATTACK_MOBS);
    sub_21E8AF4((int *)v22, (int *)&Abilities::ATTACK_MOBS);
  v23 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          &Abilities::OPERATOR);
  *(_BYTE *)v23 = 1;
  *(_BYTE *)(v23 + 3) = v35;
  *(_WORD *)(v23 + 1) = v34;
  *(_BYTE *)(v23 + 4) = 0;
  *(_BYTE *)(v23 + 7) = v33;
  *(_WORD *)(v23 + 5) = v32;
  *(_BYTE *)(v23 + 8) = 4;
  v24 = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v24 == HIDWORD(v24) )
      (int *)&Abilities::OPERATOR);
    sub_21E8AF4((int *)v24, (int *)&Abilities::OPERATOR);
  v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          &Abilities::TELEPORT);
  *(_BYTE *)v25 = 1;
  *(_BYTE *)(v25 + 3) = v31;
  *(_WORD *)(v25 + 1) = v30;
  *(_BYTE *)(v25 + 4) = 0;
  *(_BYTE *)(v25 + 7) = v29;
  *(_WORD *)(v25 + 5) = v28;
  *(_BYTE *)(v25 + 8) = 4;
  v26 = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__4(
               (unsigned __int64 *)v1 + 4,
               (int *)&Abilities::TELEPORT);
    sub_21E8AF4((int *)v26, (int *)&Abilities::TELEPORT);
    result = (char *)(*((_DWORD *)v1 + 9) + 4);
    *((_DWORD *)v1 + 9) = result;
  return result;
}


int __fastcall Abilities::setPlayerPermissions(PermissionsHandler **a1, int a2)
{
  PermissionsHandler **v2; // r11@1
  int v3; // r9@1
  unsigned __int64 *v4; // r5@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned __int64 *v7; // r7@12
  int v8; // r1@12
  void *v9; // r0@12
  char v10; // r4@14
  char v11; // r4@14
  char v12; // r4@14
  char v13; // r4@14
  char v14; // r4@14
  char v15; // r4@14
  char v16; // r4@14
  int result; // r0@15
  unsigned __int64 *v18; // r4@18
  void *v19; // r5@18
  int v20; // r0@18
  char v21; // r6@18
  int v22; // r0@20

  v2 = a1;
  v3 = a2;
  if ( PermissionsHandler::getPlayerPermissions(*a1) == 3 )
  {
    v4 = (unsigned __int64 *)v2[13];
    while ( v4 )
    {
      v7 = v4;
      v8 = *v4 >> 32;
      v4 = (unsigned __int64 *)*v4;
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      operator delete(v7);
    }
    _aeabi_memclr4(*(_QWORD *)(v2 + 11), 4 * (*(_QWORD *)(v2 + 11) >> 32));
    v2[13] = 0;
    v2[14] = 0;
    v10 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       (unsigned __int64 *)(v2 + 1),
                       &Abilities::BUILD_AND_MINE)
                   + 12);
    *(_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (int)(v2 + 11),
                &Abilities::BUILD_AND_MINE) = v10;
    v11 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       &Abilities::DOORS_AND_SWITCHES)
                &Abilities::DOORS_AND_SWITCHES) = v11;
    v12 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       &Abilities::OPEN_CONTAINERS)
                &Abilities::OPEN_CONTAINERS) = v12;
    v13 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       &Abilities::ATTACK_PLAYERS)
                &Abilities::ATTACK_PLAYERS) = v13;
    v14 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       &Abilities::ATTACK_MOBS)
                &Abilities::ATTACK_MOBS) = v14;
    v15 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       &Abilities::OPERATOR)
                &Abilities::OPERATOR) = v15;
    v16 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       &Abilities::TELEPORT)
                &Abilities::TELEPORT) = v16;
  }
  result = PermissionsHandler::setPlayerPermissions((int)*v2, v3);
  if ( v3 == 2 )
    v18 = (unsigned __int64 *)(v2 + 1);
    v19 = &Abilities::INVULNERABLE;
    v20 = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
            (unsigned __int64 *)(v2 + 1),
            &Abilities::BUILD_AND_MINE);
    v21 = 1;
  else
    if ( v3 == 1 )
      v18 = (unsigned __int64 *)(v2 + 1);
      v19 = &Abilities::INVULNERABLE;
      *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                   (unsigned __int64 *)(v2 + 1),
                   &Abilities::BUILD_AND_MINE)
               + 12) = 1;
                   &Abilities::DOORS_AND_SWITCHES)
                   &Abilities::OPEN_CONTAINERS)
                   &Abilities::ATTACK_PLAYERS)
                   &Abilities::ATTACK_MOBS)
      v22 = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              (unsigned __int64 *)(v2 + 1),
              &Abilities::OPERATOR);
      v21 = 0;
      goto LABEL_22;
    if ( v3 )
      return result;
    v21 = 0;
  *(_BYTE *)(v20 + 12) = v21;
  *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               v18,
               (int **)v19 + 11)
           + 12) = v21;
               (int **)v19 + 12)
               (int **)v19 + 13)
               (int **)v19 + 14)
  v22 = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          v18,
          (int **)v19 + 15);
LABEL_22:
  *(_BYTE *)(v22 + 12) = v21;
  result = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             v18,
             (int **)v19 + 17);
  *(_BYTE *)(result + 12) = v21;
  return result;
}


char *__fastcall Abilities::getAbilities(Abilities *this)
{
  return (char *)this + 4;
}


Abilities *__fastcall Abilities::~Abilities(Abilities *this)
{
  Abilities *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  void *v9; // r5@16
  void *v10; // r7@16
  unsigned int *v11; // r2@18
  signed int v12; // r1@20
  int *v13; // r0@26
  unsigned __int64 *v14; // r7@31
  unsigned int *v15; // r2@33
  signed int v16; // r1@35
  unsigned __int64 *v17; // r6@41
  int v18; // r1@41
  void *v19; // r0@41
  char *v20; // r0@43

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 13);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 44), 4 * (*(_QWORD *)((char *)v1 + 44) >> 32));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  v8 = (char *)*((_DWORD *)v1 + 11);
  if ( v8 && (char *)v1 + 68 != v8 )
    operator delete(v8);
  v10 = (void *)(*((_QWORD *)v1 + 4) >> 32);
  v9 = (void *)*((_QWORD *)v1 + 4);
  if ( v9 != v10 )
    do
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
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
          j_j_j_j_j__ZdlPv_9(v13);
      v9 = (char *)v9 + 4;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 8);
  if ( v9 )
    operator delete(v9);
  v14 = (unsigned __int64 *)*((_DWORD *)v1 + 3);
  while ( v14 )
    v17 = v14;
    v18 = *v14 >> 32;
    v14 = (unsigned __int64 *)*v14;
    v19 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v18 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    operator delete(v17);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v20 = (char *)*((_DWORD *)v1 + 1);
  if ( v20 && (char *)v1 + 28 != v20 )
    operator delete(v20);
  if ( *(_DWORD *)v1 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = 0;
  return v1;
}


    || Abilities::getPlayerPermissions((Abilities *)(v3 + 436)) != 2 )
{
    if ( !v31 )
      sub_1590214();
    v32((unsigned int *)&v30, 0);
  }
  else
  {
    v24 = 0;
    if ( v31 )
    {
      ((void (__fastcall *)(int *, _QWORD **, signed int))v31)(&v23, &v30, 2);
      v25 = v32;
      v24 = v31;
    }
    PermissionsScreenController::confirmationDeoppingSelfDialog(v3, (int)&v23);
    if ( v24 )
      v24();
  if ( v31 )
    v31();
  v19 = v34;
  if ( v34 )
    v20 = (unsigned int *)(v34 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 == 1 )
      (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  return 1;
}


signed int __fastcall Abilities::isFlying(Abilities *this)
{
  unsigned __int64 *v1; // r4@1
  signed int result; // r0@2

  v1 = (unsigned __int64 *)((char *)this + 4);
  if ( *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                    (unsigned __int64 *)((char *)this + 4),
                    (int **)&Abilities::FLYING)
                + 12) )
    result = 1;
  else
    result = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                          v1,
                          (int **)&Abilities::NOCLIP)
                      + 12) != 0;
  return result;
}


int __fastcall Abilities::setAbilityDiff(int a1, int **a2, int a3, _BYTE *a4)
{
  unsigned __int64 *v4; // r7@1
  _BYTE *v5; // r6@1
  int v6; // r4@1
  int **v7; // r5@1
  int v8; // r0@1
  int result; // r0@4

  v4 = (unsigned __int64 *)(a1 + 4);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 4),
         a2);
  if ( !*v5 && (*(_BYTE *)(v8 + 12) != 0) != v6 )
    *v5 = 1;
  result = std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             v4,
             v7);
  *(_BYTE *)(result + 12) = v6;
  return result;
}


char *__fastcall Abilities::_registerAbility(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int *v5; // r5@1
  int v6; // r0@1
  __int64 v7; // r2@1
  char *result; // r0@1
  __int64 v9; // r0@2

  v3 = a1;
  v4 = a3;
  v5 = (int *)a2;
  v6 = std::__detail::_Map_base<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         a1 + 4,
         a2);
  v7 = *(_QWORD *)v4;
  *(_BYTE *)(v6 + 8) = *(_BYTE *)(v4 + 8);
  *(_QWORD *)v6 = v7;
  result = (char *)*(_BYTE *)(v4 + 8);
  if ( (unsigned __int8)result & 4 )
  {
    v9 = *(_QWORD *)(v3 + 36);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__4((unsigned __int64 *)(v3 + 32), v5);
    }
    else
      sub_21E8AF4((int *)v9, v5);
      result = (char *)(*(_DWORD *)(v3 + 36) + 4);
      *(_DWORD *)(v3 + 36) = result;
  }
  return result;
}


char *__fastcall Abilities::getPermissionsAbilitiesNames(Abilities *this)
{
  return (char *)this + 32;
}


int __fastcall Abilities::getAbility(int a1, int **a2)
{
  return std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           (unsigned __int64 *)(a1 + 4),
           a2)
       + 8;
}


int __fastcall Abilities::getAbility(int a1, int **a2)
{
  return std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           (unsigned __int64 *)(a1 + 4),
           a2)
       + 8;
}


_BYTE *__fastcall Abilities::_addTempCustomAbility(int a1, int **a2)
{
  int v2; // r5@1
  int **v3; // r4@1
  char v4; // r6@1
  _BYTE *result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                    (unsigned __int64 *)(a1 + 4),
                    a2)
                + 12);
  result = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v2 + 44,
                      v3);
  *result = v4;
  return result;
}


CompoundTag *__fastcall Abilities::addSaveData(Abilities *this, CompoundTag *a2)
{
  Abilities *v2; // r6@1
  CompoundTag *v3; // r5@1
  CompoundTag *v4; // r4@1
  int i; // r7@1
  int v6; // r0@5
  const void **v7; // r1@5
  CompoundTag *result; // r0@9
  CompoundTag *v9; // [sp+0h] [bp-18h]@9

  v2 = this;
  v3 = a2;
  v4 = (CompoundTag *)operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  for ( i = *((_DWORD *)v2 + 3); i; i = *(_DWORD *)i )
  {
    if ( !(*(_BYTE *)(i + 16) & 1) )
    {
      v6 = *(_BYTE *)(i + 8);
      v7 = (const void **)(i + 4);
      if ( v6 == 2 )
      {
        CompoundTag::putFloat((int)v4, v7, *(_DWORD *)(i + 12));
      }
      else if ( v6 == 1 )
        CompoundTag::putBoolean((int)v4, v7, *(_BYTE *)(i + 12));
    }
  }
  PermissionsHandler::addSaveData(*(PermissionsHandler **)v2, v4);
  v9 = v4;
  CompoundTag::put((int)v3, (const void **)&Abilities::TAG, (int *)&v9);
  result = v9;
  if ( v9 )
    result = (CompoundTag *)(*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


  if ( v4 != Abilities::getPlayerPermissions((Abilities *)(v3 + 436)) )
{
    v6 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v3 + 380));
    v7 = (*(int (**)(void))(*(_DWORD *)v6 + 8))();
    if ( v4 == 2 && (v7 ^ 1) == 1 )
      PermissionsScreenController::confirmationNoCheatsDialog((PermissionsScreenController *)v3);
    MinecraftScreenController::_getWeakPtrToThis<PermissionsScreenController>((int)&v27, v3);
    v8 = *(_QWORD *)&v27;
    if ( v28 )
    {
      v9 = (unsigned int *)(v28 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
      }
      else
        ++*v9;
    }
    v25 = 0;
    v11 = operator new(0xCu);
    *(_QWORD *)v11 = v8;
    if ( HIDWORD(v8) )
      v12 = (unsigned int *)(HIDWORD(v8) + 8);
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
        ++*v12;
      v11[8] = v4;
      v24 = v11;
      v15 = (int *)&v26;
      v25 = (void (*)(void))sub_11DBD1C;
      v26 = sub_11DBBC8;
          v16 = __ldrex(v12);
        while ( __strex(v16 - 1, v12) );
        v16 = (*v12)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
    else
      HIDWORD(v14) = sub_11DBBC8;
      LODWORD(v14) = sub_11DBD1C;
      *(_QWORD *)&v25 = v14;
    if ( *(_QWORD *)MinecraftScreenModel::getLocalPlayerEntityID(*(MinecraftScreenModel **)(v3 + 424)) != *(_QWORD *)(v3 + 512)
      || Abilities::getPlayerPermissions((Abilities *)(v3 + 436)) != 2 )
      PermissionsScreenController::_setCurrentPermissionLevel(v3, v5, 1);
      v22 = 0;
      if ( v25 )
        ((void (__fastcall *)(int *, _BYTE **, signed int))v25)(&v21, &v24, 2);
        v23 = *v15;
        v22 = v25;
      PermissionsScreenController::confirmationDeoppingSelfDialog(v3, (int)&v21);
      if ( v22 )
        v22();
    if ( v25 )
      v25();
    v17 = v28;
      v18 = (unsigned int *)(v28 + 8);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  }
  if ( *(_BYTE *)(v2 + 8) )
    *(_BYTE *)(v3 + 432) = 0;
  return 1;
}


int __fastcall Abilities::getFloat(int a1, int **a2)
{
  return *(_DWORD *)(std::_Hashtable<std::string,std::pair<std::string const,Ability>,std::allocator<std::pair<std::string const,Ability>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       (unsigned __int64 *)(a1 + 4),
                       a2)
                   + 12);
}


int __fastcall Abilities::Abilities(int a1)
{
  int v1; // r9@1
  PermissionsHandler *v2; // r6@1
  double v3; // r0@1
  double v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3
  unsigned int v7; // r0@4
  int v8; // r6@6
  void *v9; // r5@6
  int v10; // r0@7

  v1 = a1;
  v2 = (PermissionsHandler *)operator new(2u);
  PermissionsHandler::PermissionsHandler(v2);
  *(_DWORD *)v1 = v2;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 1065353216;
  LODWORD(v3) = v1 + 20;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v3)));
  *(_DWORD *)(v1 + 8) = LODWORD(v4);
  if ( LODWORD(v4) == 1 )
  {
    *(_DWORD *)(v1 + 28) = 0;
    v6 = (void *)(v1 + 28);
  }
  else
    if ( LODWORD(v4) >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * LODWORD(v4);
    v6 = operator new(4 * LODWORD(v4));
    _aeabi_memclr4(v6, v5);
  *(_DWORD *)(v1 + 4) = v6;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 1065353216;
  LODWORD(v4) = v1 + 60;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v7 = sub_21E6254(v4);
  *(_DWORD *)(v1 + 48) = v7;
  if ( v7 == 1 )
    *(_DWORD *)(v1 + 68) = 0;
    v9 = (void *)(v1 + 68);
    if ( v7 >= 0x40000000 )
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v1 + 44) = v9;
  Abilities::_registerAbilities((Abilities *)v1);
  v10 = PermissionsHandler::getPlayerPermissions(*(PermissionsHandler **)v1);
  Abilities::setPlayerPermissions((PermissionsHandler **)v1, v10);
  return v1;
}
