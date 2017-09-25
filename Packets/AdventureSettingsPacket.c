

_BYTE *__fastcall AdventureSettingsPacket::fillIn(AdventureSettingsPacket *this, AdventureSettings *a2, Abilities *a3)
{
  AdventureSettingsPacket *v3; // r4@1
  Abilities *v4; // r5@1
  unsigned int v5; // r0@1
  char *v6; // r0@4
  int v7; // r9@4
  unsigned int v8; // r6@4
  unsigned int v9; // r6@4
  unsigned int v10; // r6@4
  unsigned int v11; // r6@4
  unsigned int v12; // r6@4
  unsigned int v13; // r4@4
  _BYTE *result; // r0@4

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 4);
  *((_BYTE *)a2 + 2) = v5 & 1;
  *(_BYTE *)a2 = (v5 >> 1) & 1;
  *((_BYTE *)a2 + 1) = (v5 >> 2) & 1;
  *((_BYTE *)a2 + 3) = (v5 >> 4) & 1;
  *((_BYTE *)a2 + 4) = (v5 >> 5) & 1;
  Abilities::setAbility((int)a3, (int **)&Abilities::MAYFLY, (unsigned __int8)(v5 & 0x40) >> 6);
  Abilities::setAbility((int)v4, (int **)&Abilities::NOCLIP, (*((_DWORD *)v3 + 4) & 0x80u) >> 7);
  Abilities::setAbility((int)v4, (int **)&Abilities::MUTED, (*((_DWORD *)v3 + 4) & 0x400u) >> 10);
  Abilities::setAbility((int)v4, (int **)&Abilities::WORLDBUILDER, (unsigned __int16)(*((_WORD *)v3 + 8) & 0x100) >> 8);
  Abilities::setAbility((int)v4, (int **)&Abilities::FLYING, (*((_DWORD *)v3 + 4) & 0x200u) >> 9);
  if ( !Abilities::getBool((int)v4, (int **)&Abilities::FLYING)
    && Abilities::getBool((int)v4, (int **)&Abilities::NOCLIP) == 1 )
  {
    Abilities::setAbility((int)v4, (int **)&Abilities::FLYING, 1);
  }
  Abilities::setCommandPermissions((_BYTE **)v4, *((_BYTE *)v3 + 20));
  Abilities::setAbility((int)v4, &Abilities::BUILD_AND_MINE, *((_BYTE *)v3 + 24) & 1);
  Abilities::setAbility((int)v4, &Abilities::DOORS_AND_SWITCHES, (*((_DWORD *)v3 + 6) & 2u) >> 1);
  Abilities::setAbility((int)v4, &Abilities::OPEN_CONTAINERS, (*((_DWORD *)v3 + 6) & 4u) >> 2);
  Abilities::setAbility((int)v4, &Abilities::ATTACK_PLAYERS, (*((_DWORD *)v3 + 6) & 8u) >> 3);
  Abilities::setAbility((int)v4, &Abilities::ATTACK_MOBS, (*((_DWORD *)v3 + 6) & 0x10u) >> 4);
  Abilities::setAbility((int)v4, &Abilities::OPERATOR, (*((_DWORD *)v3 + 6) & 0x20u) >> 5);
  Abilities::setAbility((int)v4, &Abilities::TELEPORT, (*((_DWORD *)v3 + 6) & 0x80u) >> 7);
  Abilities::setPlayerPermissions((PermissionsHandler **)v4, *((_BYTE *)v3 + 28));
  v6 = Abilities::getStoredCustomAbilities(v4);
  v7 = *((_DWORD *)v3 + 11);
  *(_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (int)v6,
              &Abilities::BUILD_AND_MINE) = v7 & 1;
  v8 = *((_DWORD *)v3 + 11);
              &Abilities::DOORS_AND_SWITCHES) = (v8 >> 1) & 1;
  v9 = *((_DWORD *)v3 + 11);
              &Abilities::OPEN_CONTAINERS) = (v9 >> 2) & 1;
  v10 = *((_DWORD *)v3 + 11);
              &Abilities::ATTACK_PLAYERS) = (v10 >> 3) & 1;
  v11 = *((_DWORD *)v3 + 11);
              &Abilities::ATTACK_MOBS) = (v11 >> 4) & 1;
  v12 = *((_DWORD *)v3 + 11);
              &Abilities::OPERATOR) = (v12 >> 5) & 1;
  v13 = *((_DWORD *)v3 + 11);
  result = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      (int)v6,
                      &Abilities::TELEPORT);
  *result = (v13 >> 7) & 1;
  return result;
}


signed int __fastcall AdventureSettingsPacket::getId(AdventureSettingsPacket *this)
{
  return 55;
}


int __fastcall AdventureSettingsPacket::read(AdventureSettingsPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  AdventureSettingsPacket *v3; // r4@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  *((_BYTE *)v3 + 20) = ReadOnlyBinaryStream::getUnsignedVarInt(v2);
  *((_DWORD *)v3 + 6) = ReadOnlyBinaryStream::getUnsignedVarInt(v2);
  *((_BYTE *)v3 + 28) = ReadOnlyBinaryStream::getUnsignedVarInt(v2);
  *((_DWORD *)v3 + 11) = ReadOnlyBinaryStream::getUnsignedVarInt(v2);
  *((_QWORD *)v3 + 4) = ReadOnlyBinaryStream::getSignedInt64(v2);
  return 0;
}


const void **__fastcall AdventureSettingsPacket::write(AdventureSettingsPacket *this, BinaryStream *a2)
{
  AdventureSettingsPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v4; // r1@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *((_DWORD *)this + 4));
  BinaryStream::writeUnsignedVarInt(v3, *((_BYTE *)v2 + 20));
  BinaryStream::writeUnsignedVarInt(v3, *((_DWORD *)v2 + 6));
  BinaryStream::writeUnsignedVarInt(v3, *((_BYTE *)v2 + 28));
  BinaryStream::writeUnsignedVarInt(v3, *((_DWORD *)v2 + 11));
  return j_j_j__ZN12BinaryStream16writeSignedInt64Ex(v3, v4, *((_QWORD *)v2 + 4));
}


int __fastcall AdventureSettingsPacket::AdventureSettingsPacket(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r11@1
  Abilities *v8; // r5@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r7@1
  int v12; // r6@1
  int v13; // r1@1
  unsigned int v14; // r0@7
  int v15; // r0@9
  int v16; // r2@9
  unsigned int v17; // r3@9
  int v18; // r0@11
  int v19; // r2@11
  unsigned int v20; // r3@11
  int v21; // r0@13
  int v22; // r2@13
  unsigned int v23; // r3@13
  int v24; // r0@15
  int v25; // r2@15
  unsigned int v26; // r3@15
  int v27; // r0@17
  int v28; // r1@17
  unsigned int v29; // r2@17
  int v30; // r0@19
  int v31; // r2@19
  unsigned int v32; // r3@19
  int v33; // r0@21
  int v34; // r2@21
  unsigned int v35; // r3@21
  int v36; // r0@23
  int v37; // r2@23
  unsigned int v38; // r3@23
  int v39; // r0@25
  int v40; // r2@25
  unsigned int v41; // r3@25
  int v42; // r0@27
  int v43; // r2@27
  unsigned int v44; // r3@27
  int v45; // r0@29
  int v46; // r2@29
  unsigned int v47; // r3@29
  int v48; // r0@31
  int v49; // r1@31
  unsigned int v50; // r2@31
  int v51; // r0@33
  unsigned int v52; // r2@33
  char *v53; // r0@35
  _BYTE *v54; // r0@35
  int v55; // r2@35
  unsigned int v56; // r3@35
  _BYTE *v57; // r0@37
  int v58; // r2@37
  unsigned int v59; // r3@37
  _BYTE *v60; // r0@39
  int v61; // r2@39
  unsigned int v62; // r3@39
  _BYTE *v63; // r0@41
  int v64; // r2@41
  unsigned int v65; // r3@41
  _BYTE *v66; // r0@43
  int v67; // r2@43
  unsigned int v68; // r3@43
  _BYTE *v69; // r0@45
  int v70; // r2@45
  unsigned int v71; // r3@45
  _BYTE *v72; // r0@47
  int v73; // r1@47
  unsigned int v74; // r2@47
  unsigned __int64 *v75; // r5@49
  unsigned int *v76; // r2@51
  signed int v77; // r1@53
  unsigned __int64 *v78; // r7@59
  int v79; // r1@59
  void *v80; // r0@59
  void *ptr; // [sp+0h] [bp-48h]@35
  int v83; // [sp+4h] [bp-44h]@35
  unsigned __int64 *v84; // [sp+8h] [bp-40h]@35
  int v85; // [sp+Ch] [bp-3Ch]@35
  __int64 v86; // [sp+10h] [bp-38h]@35
  int v87; // [sp+18h] [bp-30h]@62

  v7 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  v8 = (Abilities *)a3;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26D80B0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 36) = a6;
  *(_DWORD *)(a1 + 44) = 0;
  v9 = *(_BYTE *)a2;
  v10 = *(_BYTE *)(a2 + 1);
  v11 = *(_BYTE *)(a2 + 2);
  v12 = *(_BYTE *)(a2 + 3);
  v13 = *(_BYTE *)(a2 + 4);
  if ( v9 )
    v11 |= 2u;
  if ( v10 )
    v11 |= 4u;
  if ( v12 )
    v11 |= 0x10u;
  v14 = v11 | 0x20;
  if ( !v13 )
    v14 = v11 & 0xFFFFFFDF;
  *(_DWORD *)(v7 + 16) = v14;
  v15 = Abilities::getBool(a3, (int **)&Abilities::MAYFLY);
  v16 = *(_DWORD *)(v7 + 16);
  v17 = v16 & 0xFFFFFFBF;
  if ( v15 )
    v17 = v16 | 0x40;
  *(_DWORD *)(v7 + 16) = v17;
  v18 = Abilities::getBool((int)v8, (int **)&Abilities::NOCLIP);
  v19 = *(_DWORD *)(v7 + 16);
  v20 = v19 & 0xFFFFFF7F;
  if ( v18 )
    v20 = v19 | 0x80;
  *(_DWORD *)(v7 + 16) = v20;
  v21 = Abilities::getBool((int)v8, (int **)&Abilities::WORLDBUILDER);
  v22 = *(_DWORD *)(v7 + 16);
  v23 = v22 & 0xFFFFFEFF;
  if ( v21 )
    v23 = v22 | 0x100;
  *(_DWORD *)(v7 + 16) = v23;
  v24 = Abilities::getBool((int)v8, (int **)&Abilities::FLYING);
  v25 = *(_DWORD *)(v7 + 16);
  v26 = v25 & 0xFFFFFDFF;
  if ( v24 )
    v26 = v25 | 0x200;
  *(_DWORD *)(v7 + 16) = v26;
  v27 = Abilities::getBool((int)v8, (int **)&Abilities::MUTED);
  v28 = *(_DWORD *)(v7 + 16);
  v29 = v28 & 0xFFFFFBFF;
  if ( v27 )
    v29 = v28 | 0x400;
  *(_DWORD *)(v7 + 16) = v29;
  *(_BYTE *)(v7 + 20) = Abilities::getCommandPermissions(v8);
  v30 = Abilities::getBool((int)v8, &Abilities::BUILD_AND_MINE);
  v31 = *(_DWORD *)(v7 + 24);
  v32 = v31 & 0xFFFFFFFE;
  if ( v30 )
    v32 = v31 | 1;
  *(_DWORD *)(v7 + 24) = v32;
  v33 = Abilities::getBool((int)v8, &Abilities::DOORS_AND_SWITCHES);
  v34 = *(_DWORD *)(v7 + 24);
  v35 = v34 & 0xFFFFFFFD;
  if ( v33 )
    v35 = v34 | 2;
  *(_DWORD *)(v7 + 24) = v35;
  v36 = Abilities::getBool((int)v8, &Abilities::OPEN_CONTAINERS);
  v37 = *(_DWORD *)(v7 + 24);
  v38 = v37 & 0xFFFFFFFB;
  if ( v36 )
    v38 = v37 | 4;
  *(_DWORD *)(v7 + 24) = v38;
  v39 = Abilities::getBool((int)v8, &Abilities::ATTACK_PLAYERS);
  v40 = *(_DWORD *)(v7 + 24);
  v41 = v40 & 0xFFFFFFF7;
  if ( v39 )
    v41 = v40 | 8;
  *(_DWORD *)(v7 + 24) = v41;
  v42 = Abilities::getBool((int)v8, &Abilities::ATTACK_MOBS);
  v43 = *(_DWORD *)(v7 + 24);
  v44 = v43 & 0xFFFFFFEF;
  if ( v42 )
    v44 = v43 | 0x10;
  *(_DWORD *)(v7 + 24) = v44;
  v45 = Abilities::getBool((int)v8, &Abilities::OPERATOR);
  v46 = *(_DWORD *)(v7 + 24);
  v47 = v46 & 0xFFFFFFDF;
  if ( v45 )
    v47 = v46 | 0x20;
  *(_DWORD *)(v7 + 24) = v47;
  v48 = Abilities::getBool((int)v8, &Abilities::TELEPORT);
  v49 = *(_DWORD *)(v7 + 24);
  v50 = v49 & 0xFFFFFF7F;
  if ( v48 )
    v50 = v49 | 0x80;
  *(_DWORD *)(v7 + 24) = v50;
  *(_BYTE *)(v7 + 28) = Abilities::getPlayerPermissions(v8);
  v51 = *(_DWORD *)(v7 + 24);
  v52 = v51 & 0xFFFFFEFF;
  if ( a7 )
    v52 = v51 | 0x100;
  *(_DWORD *)(v7 + 24) = v52;
  v53 = Abilities::getStoredCustomAbilities(v8);
  ptr = 0;
  v83 = *((_DWORD *)v53 + 1);
  v84 = 0;
  v85 = *((_DWORD *)v53 + 3);
  v86 = *((_QWORD *)v53 + 2);
  std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,bool>,true> const*)#1}>(
    (unsigned int *)&ptr,
    (int)v53);
  v54 = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   (int)&ptr,
                   &Abilities::BUILD_AND_MINE);
  v55 = *(_DWORD *)(v7 + 44);
  v56 = v55 & 0xFFFFFFFE;
  if ( *v54 )
    v56 = v55 | 1;
  *(_DWORD *)(v7 + 44) = v56;
  v57 = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   &Abilities::DOORS_AND_SWITCHES);
  v58 = *(_DWORD *)(v7 + 44);
  v59 = v58 & 0xFFFFFFFD;
  if ( *v57 )
    v59 = v58 | 2;
  *(_DWORD *)(v7 + 44) = v59;
  v60 = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   &Abilities::OPEN_CONTAINERS);
  v61 = *(_DWORD *)(v7 + 44);
  v62 = v61 & 0xFFFFFFFB;
  if ( *v60 )
    v62 = v61 | 4;
  *(_DWORD *)(v7 + 44) = v62;
  v63 = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   &Abilities::ATTACK_PLAYERS);
  v64 = *(_DWORD *)(v7 + 44);
  v65 = v64 & 0xFFFFFFF7;
  if ( *v63 )
    v65 = v64 | 8;
  *(_DWORD *)(v7 + 44) = v65;
  v66 = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   &Abilities::ATTACK_MOBS);
  v67 = *(_DWORD *)(v7 + 44);
  v68 = v67 & 0xFFFFFFEF;
  if ( *v66 )
    v68 = v67 | 0x10;
  *(_DWORD *)(v7 + 44) = v68;
  v69 = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   &Abilities::OPERATOR);
  v70 = *(_DWORD *)(v7 + 44);
  v71 = v70 & 0xFFFFFFDF;
  if ( *v69 )
    v71 = v70 | 0x20;
  *(_DWORD *)(v7 + 44) = v71;
  v72 = (_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   &Abilities::TELEPORT);
  v73 = *(_DWORD *)(v7 + 44);
  v74 = v73 & 0xFFFFFF7F;
  if ( *v72 )
    v74 = v73 | 0x80;
  *(_DWORD *)(v7 + 44) = v74;
  v75 = v84;
  while ( v75 )
  {
    v78 = v75;
    v79 = *v75 >> 32;
    v75 = (unsigned __int64 *)*v75;
    v80 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
    {
      v76 = (unsigned int *)(v79 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
      }
      else
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j_j__ZdlPv_9(v80);
    }
    operator delete(v78);
  }
  _aeabi_memclr4(ptr, 4 * v83);
  v85 = 0;
  if ( ptr && &v87 != ptr )
    operator delete(ptr);
  return v7;
}


int __fastcall AdventureSettingsPacket::handle(AdventureSettingsPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AdventureSettingsPacket *))(*(_DWORD *)a3 + 256))(
           a3,
           a2,
           this);
}
