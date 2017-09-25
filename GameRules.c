

int __fastcall GameRules::getInt(unsigned __int64 *a1, int **a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( v2 )
    result = *(_DWORD *)(v2 + 12);
  else
    result = 0;
  return result;
}


void __fastcall GameRules::_setRule(_DWORD *a1, unsigned __int64 *a2, int **a3, int a4, int a5, int a6)
{
  int *v6; // r5@1
  _DWORD *v7; // r4@1
  int v8; // r6@1
  int v9; // r0@1
  bool v10; // zf@2
  __int64 *v11; // r8@10
  _DWORD *v12; // r0@10

  v6 = (int *)a3;
  v7 = a1;
  v8 = a4;
  v9 = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a2,
         a3);
  if ( !v9 )
    goto LABEL_14;
  v10 = a5 == 3;
  if ( a5 != 3 )
    v10 = a5 == 2;
  if ( v10 )
  {
    *(_DWORD *)(v9 + 12) = v8;
  }
  else if ( a5 == 1 )
    *(_BYTE *)(v9 + 12) = v8 & 1;
  if ( a6 == 1 )
    v11 = (__int64 *)(v9 + 8);
    v12 = j_operator new(0x1Cu);
    *v12 = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[3] = 0;
    v12[1] = 2;
    v12[2] = 1;
    *((_BYTE *)v12 + 12) = 0;
    *v12 = &off_26E99CC;
    v12[4] = 0;
    v12[5] = 0;
    v12[6] = 0;
    *v7 = v12;
    GameRulesChangedPacketData::addRule((int)(v12 + 4), v6, v11);
  else
LABEL_14:
    *v7 = 0;
}


void __fastcall GameRules::createAllGameRulesPacket(GameRules *this, int a2)
{
  GameRules *v2; // r4@1
  int v3; // r6@1
  _DWORD *v4; // r5@1
  int i; // r7@1

  v2 = this;
  v3 = a2;
  v4 = j_operator new(0x1Cu);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[1] = 2;
  v4[2] = 1;
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E99CC;
  v4[5] = 0;
  v4[6] = 0;
  *(_DWORD *)v2 = v4;
  for ( i = *(_DWORD *)(v3 + 8); i; i = *(_DWORD *)i )
    GameRulesChangedPacketData::addRule((int)(v4 + 4), (int *)(i + 4), (__int64 *)(i + 8));
}


void __fastcall GameRules::_createPacket(_DWORD *a1, int a2, int *a3, __int64 *a4)
{
  _DWORD *v4; // r8@1
  __int64 *v5; // r6@1
  int *v6; // r7@1
  _DWORD *v7; // r5@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = j_operator new(0x1Cu);
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[1] = 2;
  v7[2] = 1;
  *((_BYTE *)v7 + 12) = 0;
  *v7 = &off_26E99CC;
  v7[5] = 0;
  v7[6] = 0;
  *v4 = v7;
  GameRulesChangedPacketData::addRule((int)(v7 + 4), v6, v5);
}


void __fastcall GameRules::setRule(_DWORD *a1, unsigned __int64 *a2, int **a3, int a4, int a5)
{
  int *v5; // r5@1
  _DWORD *v6; // r8@1
  int v8; // r6@1
  _DWORD *v13; // r0@3

  v5 = (int *)a3;
  v6 = a1;
  _R7 = a4;
  v8 = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a2,
         a3);
  if ( !v8 )
    goto LABEL_7;
  __asm
  {
    VMOV            S0, R7
    VSTR            S0, [R6,#0xC]
  }
  if ( a5 == 1 )
    v13 = j_operator new(0x1Cu);
    *v13 = 0;
    v13[1] = 0;
    v13[2] = 0;
    v13[3] = 0;
    v13[1] = 2;
    v13[2] = 1;
    *((_BYTE *)v13 + 12) = 0;
    *v13 = &off_26E99CC;
    v13[4] = 0;
    v13[5] = 0;
    v13[6] = 0;
    *v6 = v13;
    GameRulesChangedPacketData::addRule((int)(v13 + 4), v5, (__int64 *)(v8 + 8));
  else
LABEL_7:
    *v6 = 0;
}


void __fastcall GameRules::setRule(_DWORD *a1, unsigned __int64 *a2, int **a3, char a4, int a5)
{
  GameRules::setRule(a1, a2, a3, a4, a5);
}


signed int __fastcall GameRules::registerRule(unsigned __int64 *a1, int *a2, int a3, char a4)
{
  int v5; // [sp+0h] [bp-18h]@1
  char v6; // [sp+8h] [bp-10h]@1
  char v7; // [sp+9h] [bp-Fh]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v6 = a4;
  v7 = 2;
  v8 = a3;
  return std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,GameRule>(
           &v5,
           a1,
           a2,
           &v6);
}


int __fastcall GameRules::getRule(unsigned __int64 *a1, int **a2)
{
  int result; // r0@1

  result = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             a1,
             a2);
  if ( result )
    result += 8;
  return result;
}


void __fastcall GameRules::setRule(_DWORD *a1, unsigned __int64 *a2, int **a3, int a4, int a5)
{
  GameRules::setRule(a1, a2, a3, a4, a5);
}


_BOOL4 __fastcall GameRules::hasRule(unsigned __int64 *a1, int **a2)
{
  return std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           a1,
           a2) != 0;
}


signed int __fastcall GameRules::registerRule(unsigned __int64 *a1, int *a2, char a3, char a4)
{
  int v5; // [sp+0h] [bp-18h]@1
  char v6; // [sp+8h] [bp-10h]@1
  char v7; // [sp+9h] [bp-Fh]@1
  char v8; // [sp+Ch] [bp-Ch]@1

  v6 = a4;
  v7 = 1;
  v8 = a3;
  return std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,GameRule>(
           &v5,
           a1,
           a2,
           &v6);
}


void __fastcall GameRules::createAllGameRulesPacket(GameRules *this, int a2)
{
  GameRules::createAllGameRulesPacket(this, a2);
}


void __fastcall GameRules::setRule(_DWORD *a1, unsigned __int64 *a2, int **a3, int a4, int a5)
{
  GameRules::setRule(a1, a2, a3, a4, a5);
}


int __fastcall GameRules::GameRules(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 4) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = j_operator new(4 * v2);
    j___aeabi_memclr4((int)v4, v3);
  *(_DWORD *)v1 = v4;
  GameRules::_registerRules((GameRules *)v1);
  return v1;
}


int __fastcall GameRules::getTagData(int result, const CompoundTag *a2)
{
  int v2; // r6@1
  const CompoundTag *v3; // r4@1

  v2 = *(_DWORD *)(result + 8);
  v3 = a2;
  while ( v2 )
  {
    result = j_CompoundTag::contains((int)v3, (const void **)(v2 + 4));
    if ( result != 1 )
      goto LABEL_2;
    result = *(_BYTE *)(v2 + 9);
    if ( result == 3 )
    {
      result = j_CompoundTag::getFloat((int)v3, (const void **)(v2 + 4));
LABEL_11:
      *(_DWORD *)(v2 + 12) = result;
LABEL_2:
      v2 = *(_DWORD *)v2;
    }
    else
      if ( result == 2 )
      {
        result = j_CompoundTag::getInt((int)v3, (const void **)(v2 + 4));
        goto LABEL_11;
      }
      if ( result != 1 )
        goto LABEL_2;
      result = j_CompoundTag::getBoolean((int)v3, (const void **)(v2 + 4));
      *(_BYTE *)(v2 + 12) = result;
  }
  return result;
}


int __fastcall GameRules::getBool(unsigned __int64 *a1, int **a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( v2 )
    result = *(_BYTE *)(v2 + 12) != 0;
  else
    result = 0;
  return result;
}


signed int __fastcall GameRules::registerRule(unsigned __int64 *a1, int *a2, int a3, char a4)
{
  int v5; // [sp+0h] [bp-18h]@1
  char v6; // [sp+8h] [bp-10h]@1
  char v7; // [sp+9h] [bp-Fh]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v6 = a4;
  v7 = 3;
  v8 = a3;
  return std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,GameRule>(
           &v5,
           a1,
           a2,
           &v6);
}


void __fastcall GameRules::setRule(_DWORD *a1, unsigned __int64 *a2, int **a3, int a4, int a5)
{
  int *v5; // r5@1
  _DWORD *v6; // r8@1
  int v7; // r7@1
  int v8; // r6@1
  _DWORD *v9; // r0@3

  v5 = (int *)a3;
  v6 = a1;
  v7 = a4;
  v8 = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a2,
         a3);
  if ( v8 && (*(_DWORD *)(v8 + 12) = v7, a5 == 1) )
  {
    v9 = j_operator new(0x1Cu);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9[3] = 0;
    v9[1] = 2;
    v9[2] = 1;
    *((_BYTE *)v9 + 12) = 0;
    *v9 = &off_26E99CC;
    v9[4] = 0;
    v9[5] = 0;
    v9[6] = 0;
    *v6 = v9;
    GameRulesChangedPacketData::addRule((int)(v9 + 4), v5, (__int64 *)(v8 + 8));
  }
  else
    *v6 = 0;
}


signed int __fastcall GameRules::_registerEDURules(GameRules *this)
{
  unsigned __int64 *v1; // r4@1
  char v3; // [sp+4h] [bp-24h]@1
  __int16 v4; // [sp+Ch] [bp-1Ch]@1
  char v5; // [sp+10h] [bp-18h]@1

  v1 = (unsigned __int64 *)this;
  v4 = 256;
  v5 = 0;
  std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,GameRule>(
    &v3,
    (unsigned __int64 *)this,
    (int *)&GameRules::GLOBAL_MUTE,
    &v4);
  v4 = 257;
  v5 = 1;
    v1,
    (int *)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS,
  return std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,GameRule>(
           &v3,
           v1,
           (int *)&GameRules::ALLOW_MOBS,
           &v4);
}


int __fastcall GameRules::setTagData(int result, CompoundTag *a2)
{
  int v2; // r5@1
  CompoundTag *v3; // r4@1
  const void **v4; // r1@4

  v2 = *(_DWORD *)(result + 8);
  v3 = a2;
  while ( v2 )
  {
    result = *(_BYTE *)(v2 + 9);
    v4 = (const void **)(v2 + 4);
    if ( result == 3 )
    {
      result = j_CompoundTag::putFloat((int)v3, v4, *(_DWORD *)(v2 + 12));
LABEL_2:
      v2 = *(_DWORD *)v2;
    }
    else if ( result == 2 )
      result = j_CompoundTag::putInt((int)v3, v4, *(_DWORD *)(v2 + 12));
    else
      if ( result != 1 )
        goto LABEL_2;
      result = j_CompoundTag::putBoolean((int)v3, v4, *(_BYTE *)(v2 + 12));
  }
  return result;
}


signed int __fastcall GameRules::_registerRules(GameRules *this)
{
  unsigned __int64 *v1; // r4@1
  int v3; // [sp+0h] [bp-28h]@1
  __int16 v4; // [sp+8h] [bp-20h]@1
  char v5; // [sp+Ch] [bp-1Ch]@1

  v1 = (unsigned __int64 *)this;
  v4 = 257;
  v5 = 1;
  std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,GameRule>(
    &v3,
    (unsigned __int64 *)this,
    (int *)&GameRules::COMMAND_BLOCK_OUTPUT,
    &v4);
    v1,
    (int *)&GameRules::DO_DAYLIGHT_CYCLE,
    (int *)&GameRules::DO_ENTITY_DROPS,
    (int *)&GameRules::DO_FIRE_TICK,
    (int *)&GameRules::DO_MOB_LOOT,
    (int *)&GameRules::DO_MOB_SPAWNING,
    (int *)&GameRules::DO_TILE_DROPS,
    (int *)&GameRules::DO_WEATHER_CYCLE,
    (int *)&GameRules::DROWNING_DAMAGE,
    (int *)&GameRules::FALL_DAMAGE,
    (int *)&GameRules::FIRE_DAMAGE,
  v5 = 0;
    (int *)&GameRules::KEEP_INVENTORY,
    (int *)&GameRules::MOB_GRIEFING,
    (int *)&GameRules::PVP,
    (int *)&GameRules::SHOW_COORDINATES,
    (int *)&GameRules::DO_NATURAL_REGENERATION,
    (int *)&GameRules::DO_TNT_EXPLODE,
  return std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,GameRule>(
           &v3,
           v1,
           (int *)&GameRules::SEND_COMMAND_FEEDBACK,
           &v4);
}


int __fastcall GameRules::deserializeRules(int result, _QWORD *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned __int64 *i; // r4@1
  bool v5; // zf@2
  char v6; // r7@6
  int v7; // r7@9

  *(_QWORD *)&v2 = *a2;
  for ( i = (unsigned __int64 *)result; v3 != v2; v2 += 12 )
  {
    result = *(_BYTE *)(v2 + 5);
    v5 = result == 3;
    if ( result != 3 )
      v5 = result == 2;
    if ( v5 )
    {
      v7 = *(_DWORD *)(v2 + 8);
      result = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                 i,
                 (int **)v2);
      if ( result )
        *(_DWORD *)(result + 12) = v7;
    }
    else if ( result == 1 )
      v6 = *(_BYTE *)(v2 + 8);
        *(_BYTE *)(result + 12) = v6;
  }
  return result;
}


void __fastcall GameRules::setRule(_DWORD *a1, unsigned __int64 *a2, int **a3, char a4, int a5)
{
  int *v5; // r5@1
  _DWORD *v6; // r8@1
  char v7; // r7@1
  int v8; // r6@1
  bool v9; // zf@1
  _DWORD *v10; // r0@4

  v5 = (int *)a3;
  v6 = a1;
  v7 = a4;
  v8 = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a2,
         a3);
  v9 = v8 == 0;
  if ( v8 )
  {
    *(_BYTE *)(v8 + 12) = v7;
    v9 = a5 == 0;
  }
  if ( v9 )
    *v6 = 0;
  else
    v10 = j_operator new(0x1Cu);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 0;
    v10[1] = 2;
    v10[2] = 1;
    *((_BYTE *)v10 + 12) = 0;
    *v10 = &off_26E99CC;
    v10[4] = 0;
    v10[5] = 0;
    v10[6] = 0;
    *v6 = v10;
    GameRulesChangedPacketData::addRule((int)(v10 + 4), v5, (__int64 *)(v8 + 8));
}


int __fastcall GameRules::getFloat(unsigned __int64 *a1, int **a2)
{
  int result; // r0@4

  _R0 = std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          a1,
          a2);
  if ( _R0 )
    __asm { VLDRNE          S0, [R0,#0xC] }
  else
    __asm { VLDREQ          S0, =0.0 }
  __asm { VMOV            R0, S0 }
  return result;
}
