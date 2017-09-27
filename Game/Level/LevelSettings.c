

int __fastcall LevelSettings::LevelSettings(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r7@1
  int v9; // r8@1
  int v10; // r0@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r4@1
  int v14; // r5@1
  int v15; // r7@1
  int v16; // r3@1
  int v17; // r4@1
  int v18; // r5@1
  int v19; // r7@1
  int v20; // r0@1

  v2 = a2;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 16);
  v3 = a2 + 20;
  v9 = a1;
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = v5;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = v7;
  *(_DWORD *)(a1 + 16) = v8;
  v10 = a1 + 20;
  v11 = *(_DWORD *)v3;
  v12 = *(_DWORD *)(v3 + 4);
  v13 = *(_DWORD *)(v3 + 8);
  v14 = *(_DWORD *)(v3 + 12);
  v15 = *(_DWORD *)(v3 + 16);
  v3 += 20;
  *(_DWORD *)v10 = v11;
  *(_DWORD *)(v10 + 4) = v12;
  *(_DWORD *)(v10 + 8) = v13;
  *(_DWORD *)(v10 + 12) = v14;
  *(_DWORD *)(v10 + 16) = v15;
  v10 += 20;
  v16 = *(_DWORD *)(v3 + 4);
  v17 = *(_DWORD *)(v3 + 8);
  v18 = *(_DWORD *)(v3 + 12);
  v19 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)v10 = *(_DWORD *)v3;
  *(_DWORD *)(v10 + 4) = v16;
  *(_DWORD *)(v10 + 8) = v17;
  *(_DWORD *)(v10 + 12) = v18;
  *(_DWORD *)(v10 + 16) = v19;
  *(_BYTE *)(v10 + 20) = *(_BYTE *)(v3 + 20);
  Abilities::Abilities(v9 + 64, (int *)(v2 + 64));
  *(_DWORD *)(v9 + 136) = *(_DWORD *)(v2 + 136);
  *(_DWORD *)(v9 + 140) = *(_DWORD *)(v2 + 140);
  *(_DWORD *)(v9 + 144) = *(_DWORD *)(v2 + 144);
  std::vector<PackInstanceId,std::allocator<PackInstanceId>>::vector(v9 + 148, (unsigned __int64 *)(v2 + 148));
  std::vector<PackInstanceId,std::allocator<PackInstanceId>>::vector(v9 + 160, (unsigned __int64 *)(v2 + 160));
  *(_DWORD *)(v9 + 172) = 0;
  v20 = v9 + 172;
  *(_DWORD *)(v20 + 4) = *(_DWORD *)(v2 + 176);
  *(_DWORD *)(v20 + 8) = 0;
  *(_DWORD *)(v20 + 12) = *(_DWORD *)(v2 + 184);
  *(_QWORD *)(v20 + 16) = *(_QWORD *)(v2 + 188);
  std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,GameRule>,true> const*)#1}>(
    (unsigned int *)(v9 + 172),
    v2 + 172);
  return v9;
}


int __fastcall LevelSettings::overrideSavedSettings(LevelSettings *this, LevelData *a2)
{
  LevelSettings *v2; // r5@1
  LevelData *v3; // r4@1

  v2 = this;
  v3 = a2;
  j_LevelData::setGameDifficulty((int)a2, *((_DWORD *)this + 2));
  j_LevelData::setCommandsEnabled(v3, *((_BYTE *)v2 + 53));
  return j_j_j__ZN9LevelData23setTexturepacksRequiredEb(v3, *((_BYTE *)v2 + 54));
}


int __fastcall LevelSettings::LevelSettings(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r12@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r6@1
  int v10; // r7@1
  int v11; // r0@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // r6@1
  int v15; // r7@1
  int v16; // r2@1
  int v17; // r3@1
  int v18; // r6@1
  int v19; // r7@1
  int v20; // r1@1
  int v21; // r1@1
  int v22; // r0@1
  int v23; // r0@1
  int v24; // r6@1
  unsigned int v25; // r1@1
  int v26; // r0@1
  _DWORD *v27; // r2@1

  v2 = a1;
  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(_DWORD *)(a2 + 16);
  v6 = a2 + 20;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 4) = v7;
  *(_DWORD *)(v4 + 8) = v8;
  *(_DWORD *)(v4 + 12) = v9;
  *(_DWORD *)(v4 + 16) = v10;
  v4 += 20;
  v11 = *(_DWORD *)v6;
  v12 = *(_DWORD *)(v6 + 4);
  v13 = *(_DWORD *)(v6 + 8);
  v14 = *(_DWORD *)(v6 + 12);
  v15 = *(_DWORD *)(v6 + 16);
  v6 += 20;
  *(_DWORD *)v4 = v11;
  *(_DWORD *)(v4 + 4) = v12;
  *(_DWORD *)(v4 + 8) = v13;
  *(_DWORD *)(v4 + 12) = v14;
  *(_DWORD *)(v4 + 16) = v15;
  v16 = *(_DWORD *)(v6 + 4);
  v17 = *(_DWORD *)(v6 + 8);
  v18 = *(_DWORD *)(v6 + 12);
  v19 = *(_DWORD *)(v6 + 16);
  *(_DWORD *)v4 = *(_DWORD *)v6;
  *(_DWORD *)(v4 + 4) = v16;
  *(_DWORD *)(v4 + 8) = v17;
  *(_DWORD *)(v4 + 12) = v18;
  *(_DWORD *)(v4 + 16) = v19;
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v6 + 20);
  Abilities::Abilities(v2 + 64, (int *)(v3 + 64));
  *(_DWORD *)(v2 + 136) = *(_DWORD *)(v3 + 136);
  *(_DWORD *)(v2 + 140) = *(_DWORD *)(v3 + 140);
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v3 + 144);
  *(_DWORD *)(v2 + 148) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 156) = 0;
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v3 + 148);
  *(_DWORD *)(v3 + 148) = 0;
  v20 = *(_DWORD *)(v2 + 152);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v3 + 152);
  *(_DWORD *)(v3 + 152) = v20;
  v21 = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v2 + 156) = *(_DWORD *)(v3 + 156);
  *(_DWORD *)(v3 + 156) = v21;
  *(_DWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 164) = 0;
  *(_DWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 160) = *(_DWORD *)(v3 + 160);
  *(_DWORD *)(v3 + 160) = 0;
  v22 = *(_DWORD *)(v2 + 164);
  *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 164);
  *(_DWORD *)(v3 + 164) = v22;
  v23 = *(_DWORD *)(v2 + 168);
  *(_DWORD *)(v2 + 168) = *(_DWORD *)(v3 + 168);
  *(_DWORD *)(v3 + 168) = v23;
  v24 = *(_DWORD *)(v3 + 172);
  *(_DWORD *)(v2 + 172) = v24;
  v25 = *(_DWORD *)(v3 + 176);
  *(_DWORD *)(v2 + 176) = v25;
  v26 = *(_DWORD *)(v3 + 180);
  *(_DWORD *)(v2 + 180) = v26;
  *(_DWORD *)(v2 + 184) = *(_DWORD *)(v3 + 184);
  *(_QWORD *)(v2 + 188) = *(_QWORD *)(v3 + 188);
  v27 = *(_DWORD **)(v3 + 172);
  if ( (_DWORD *)(v3 + 196) == v27 )
  {
    v24 = v2 + 196;
    *(_DWORD *)(v2 + 172) = v2 + 196;
    *(_DWORD *)(v2 + 196) = *v27;
  }
  if ( v26 )
    *(_DWORD *)(v24 + 4 * (*(_DWORD *)(v26 + 16) % v25)) = v2 + 180;
  *(_DWORD *)(v3 + 192) = 0;
  *(_DWORD *)(v3 + 196) = 0;
  *(_DWORD *)(v3 + 172) = v3 + 196;
  *(_DWORD *)(v3 + 176) = 1;
  *(_DWORD *)(v3 + 180) = 0;
  *(_DWORD *)(v3 + 184) = 0;
  return v2;
}


int __fastcall LevelSettings::LevelSettings(int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char a24, char a25, int *a26)
{
  return LevelSettings::LevelSettings(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26);
}


char *__fastcall LevelSettings::getNewWorldBehaviorPackIdentities(LevelSettings *this)
{
  return (char *)this + 148;
}


int __fastcall LevelSettings::getSeed(LevelSettings *this)
{
  return *(_DWORD *)this;
}


char *__fastcall LevelSettings::getNewWorldResourcePackIdentities(LevelSettings *this)
{
  return (char *)this + 160;
}


void **__fastcall LevelSettings::generatorTypeToString(void **a1, int a2)
{
  void **result; // r0@2

  switch ( a2 )
  {
    case 0:
      result = sub_21E94B4(a1, "Legacy");
      break;
    case 1:
      result = sub_21E94B4(a1, "Overworld");
    case 2:
      result = sub_21E94B4(a1, "Flat");
    case 3:
      result = sub_21E94B4(a1, "Nether");
    case 4:
      result = sub_21E94B4(a1, "TheEnd");
    default:
      result = sub_21E94B4(a1, "Undefined");
  }
  return result;
}


char *__fastcall LevelSettings::getGameRules(LevelSettings *this)
{
  return (char *)this + 172;
}


int __fastcall LevelSettings::parseSeedString(int *a1, int a2)
{
  int v2; // r5@0
  int v3; // r7@1
  char *v4; // r3@2
  int v5; // r0@4
  signed int v6; // r6@7
  unsigned int *v8; // r2@14
  signed int v9; // r1@16
  int v10; // [sp+4h] [bp-24h]@3
  char *s; // [sp+8h] [bp-20h]@2

  v3 = a2;
  if ( *(_DWORD *)(*a1 - 12) < 2u )
  {
    v2 = a2;
  }
  else
    j_Util::stringTrim((int *)&s, a1);
    v4 = s;
    if ( *((_DWORD *)s - 3) )
    {
      if ( j_sscanf(s, "%d", &v10) < 1 || (v5 = sub_21E7D6C((const void **)&s, "-1"), v2 = v10, v5) && v10 == -1 )
        v2 = j_Util::hashCode(&s);
      v4 = s;
      v6 = 0;
    }
    else
      v6 = 1;
    if ( (int *)(v4 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v4 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v4 - 12);
    if ( v6 == 1 )
      v2 = v3;
  return v2;
}


unsigned int __fastcall LevelSettings::validateGameDifficulty(unsigned int result)
{
  if ( result >= 4 )
    result = 2;
  return result;
}


char *__fastcall LevelSettings::getDefaultSpawn(LevelSettings *this)
{
  return (char *)this + 136;
}


signed int __fastcall LevelSettings::achievementsWillBeDisabledOnLoad(LevelSettings *this)
{
  bool v1; // zf@1
  signed int result; // r0@4

  v1 = *((_BYTE *)this + 20) == 0;
  if ( !*((_BYTE *)this + 20) )
    v1 = *((_BYTE *)this + 53) == 0;
  if ( v1 )
  {
    result = *((_DWORD *)this + 1);
    if ( result != 1 )
      result = 0;
  }
  else
    result = 1;
  return result;
}


LevelSettings *__fastcall LevelSettings::~LevelSettings(LevelSettings *this)
{
  LevelSettings *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  void *v9; // r0@16
  void *v10; // r0@18

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 45);
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
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 172), 4 * (*(_QWORD *)((char *)v1 + 172) >> 32));
  *((_DWORD *)v1 + 45) = 0;
  *((_DWORD *)v1 + 46) = 0;
  v8 = (char *)*((_DWORD *)v1 + 43);
  if ( v8 && (char *)v1 + 196 != v8 )
    operator delete(v8);
  std::_Destroy<PackInstanceId *>(*((_QWORD *)v1 + 20), *((_QWORD *)v1 + 20) >> 32);
  v9 = (void *)*((_DWORD *)v1 + 40);
  if ( v9 )
    operator delete(v9);
  std::_Destroy<PackInstanceId *>(*(_QWORD *)((char *)v1 + 148), *(_QWORD *)((char *)v1 + 148) >> 32);
  v10 = (void *)*((_DWORD *)v1 + 37);
  if ( v10 )
    operator delete(v10);
  Abilities::~Abilities((LevelSettings *)((char *)v1 + 64));
  return v1;
}


unsigned int __fastcall LevelSettings::validateGameType(unsigned int result)
{
  if ( result >= 3 )
    result = 0;
  return result;
}


int __fastcall LevelSettings::LevelSettings(int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char a24, char a25, int *a26)
{
  return LevelSettings::LevelSettings(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26);
}


int __fastcall LevelSettings::LevelSettings(int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char a24, char a25, int *a26)
{
  int v26; // r4@1
  int v31; // r0@1
  int v32; // r0@1

  v26 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x28+arg_18]
    VLDR            S2, [SP,#0x28+arg_1C]
  }
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = a6;
  *(_BYTE *)(a1 + 20) = LOBYTE(a8);
  *(_DWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 28) = a9;
  *(_BYTE *)(a1 + 32) = a10;
  *(_BYTE *)(a1 + 33) = 0;
    VSTR            S0, [R4,#0x24]
    VSTR            S2, [R4,#0x28]
  *(_BYTE *)(a1 + 44) = a13;
  *(_BYTE *)(a1 + 45) = a14;
  *(_BYTE *)(a1 + 46) = a15;
  *(_DWORD *)(a1 + 48) = a16;
  *(_BYTE *)(a1 + 52) = a17;
  *(_BYTE *)(a1 + 53) = a18;
  *(_BYTE *)(a1 + 54) = a19;
  *(_BYTE *)(a1 + 55) = a20;
  *(_BYTE *)(a1 + 56) = a21;
  *(_BYTE *)(a1 + 57) = a22;
  *(_BYTE *)(a1 + 58) = 0;
  *(_BYTE *)(a1 + 59) = a24;
  *(_BYTE *)(a1 + 60) = a25;
  j_Abilities::Abilities(a1 + 64, a26);
  *(_DWORD *)(v26 + 136) = *(_DWORD *)LODWORD(a7);
  *(_DWORD *)(v26 + 140) = *(_DWORD *)(LODWORD(a7) + 4);
  v31 = *(_DWORD *)(LODWORD(a7) + 8);
  *(_DWORD *)(v26 + 168) = 0;
  *(_DWORD *)(v26 + 160) = 0;
  *(_DWORD *)(v26 + 164) = 0;
  *(_DWORD *)(v26 + 152) = 0;
  *(_DWORD *)(v26 + 156) = 0;
  *(_DWORD *)(v26 + 144) = v31;
  *(_DWORD *)(v26 + 148) = 0;
  *(_DWORD *)(v26 + 172) = 0;
  v32 = v26 + 172;
  *(_DWORD *)(v32 + 4) = *(_DWORD *)(a23 + 4);
  *(_DWORD *)(v32 + 8) = 0;
  *(_DWORD *)(v32 + 12) = *(_DWORD *)(a23 + 12);
  *(_QWORD *)(v32 + 16) = *(_QWORD *)(a23 + 16);
  j_std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,GameRule>,true> const*)#1}>(
    (unsigned int *)(v26 + 172),
    a23);
  return v26;
}


int __fastcall LevelSettings::setOverrideSavedSettings(int result, bool a2)
{
  *(_BYTE *)(result + 58) = a2;
  return result;
}


int __fastcall LevelSettings::setIsEduWorld(int result, bool a2)
{
  *(_BYTE *)(result + 32) = a2;
  return result;
}


int __fastcall LevelSettings::LevelSettings(int a1, LevelData *a2, int a3)
{
  LevelData *v3; // r4@1
  int v4; // ST94_4@1
  int v5; // ST90_4@1
  int v6; // ST8C_4@1
  int v7; // ST88_4@1
  int v8; // ST84_4@1
  char *v9; // ST80_4@1
  float v10; // ST7C_4@1
  int v11; // ST78_4@1
  int v12; // ST74_4@1
  int v13; // ST5C_4@1
  int v15; // ST70_4@1
  int v16; // ST6C_4@1
  int v17; // ST68_4@1
  int v18; // ST64_4@1
  int v19; // ST60_4@1
  int v20; // ST58_4@1
  int v21; // r6@1
  int v22; // r7@1
  int v23; // r5@1
  int v24; // r8@1
  char *v25; // r0@1
  char v26; // r9@1
  char v27; // r10@1
  int *v28; // r0@1
  int *v29; // r0@1
  unsigned __int64 *v35; // r6@1
  unsigned int *v36; // r2@3
  signed int v37; // r1@5
  unsigned __int64 *v38; // r5@11
  int v39; // r1@11
  void *v40; // r0@11
  int v42; // [sp+18h] [bp-110h]@0
  int v43; // [sp+1Ch] [bp-10Ch]@0
  int v44; // [sp+98h] [bp-90h]@1
  char v45; // [sp+9Ch] [bp-8Ch]@1
  void *ptr; // [sp+E4h] [bp-44h]@1
  int v47; // [sp+E8h] [bp-40h]@1
  unsigned __int64 *v48; // [sp+ECh] [bp-3Ch]@1
  int v49; // [sp+F0h] [bp-38h]@1
  __int64 v50; // [sp+F4h] [bp-34h]@1
  int v51; // [sp+FCh] [bp-2Ch]@14

  v3 = a2;
  v44 = a1;
  v4 = a3;
  v5 = j_LevelData::getSeed(a2);
  v6 = j_LevelData::getGameType(v3);
  v7 = j_LevelData::getGameDifficulty(v3);
  v8 = j_LevelData::getGenerator(v3);
  v9 = LevelData::getSpawn(v3);
  v10 = COERCE_FLOAT(j_LevelData::hasAchievementsDisabled(v3));
  v11 = j_LevelData::getTime(v3);
  v12 = j_LevelData::isEduLevel(v3);
  v13 = LevelData::getRainLevel(v3);
  _R11 = LevelData::getLightningLevel(v3);
  v15 = j_LevelData::isMultiplayerGame(v3);
  v16 = j_LevelData::hasLANBroadcast(v3);
  v17 = j_LevelData::hasXBLBroadcast(v3);
  v18 = j_LevelData::getXBLBroadcastMode(v3);
  v19 = j_LevelData::hasPlatformBroadcast(v3);
  v20 = j_LevelData::hasCommandsEnabled(v3);
  v21 = j_LevelData::isTexturepacksRequired(v3);
  v22 = j_LevelData::hasLockedBehaviorPack(v3);
  v23 = j_LevelData::hasLockedResourcePack(v3);
  v24 = j_LevelData::isFromLockedTemplate(v3);
  v25 = LevelData::getGameRules(v3);
  ptr = 0;
  v47 = *((_DWORD *)v25 + 1);
  v48 = 0;
  v49 = *((_DWORD *)v25 + 3);
  v50 = *((_QWORD *)v25 + 2);
  j_std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,GameRule>,std::allocator<std::pair<std::string const,GameRule>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,GameRule>,true> const*)#1}>(
    (unsigned int *)&ptr,
    (int)v25);
  v26 = j_LevelData::hasBonusChestEnabled(v3);
  v27 = j_LevelData::hasStartWithMapEnabled(v3);
  v28 = (int *)LevelData::getDefaultAbilities(v3);
  v29 = (int *)j_Abilities::Abilities((int)&v45, v28);
  _R1 = v13;
  __asm
  {
    VMOV            S2, R11
    VMOV            S0, R1
    VSTR            S2, [SP,#0x128+var_10C]
    VSTR            S0, [SP,#0x128+var_110]
  }
  LevelSettings::LevelSettings(
    v44,
    v5,
    v6,
    v7,
    v4,
    v8,
    *(float *)&v9,
    v10,
    v11,
    v12,
    v42,
    v43,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    (int)&ptr,
    v26,
    v27,
    v29);
  j_Abilities::~Abilities((Abilities *)&v45);
  v35 = v48;
  while ( v35 )
    v38 = v35;
    v39 = *v35 >> 32;
    v35 = (unsigned __int64 *)*v35;
    v40 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v36 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      }
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    }
    j_operator delete(v38);
  j___aeabi_memclr4((int)ptr, 4 * v47);
  v49 = 0;
  if ( ptr && &v51 != ptr )
    j_operator delete(ptr);
  return v44;
}


int __fastcall LevelSettings::setForceGameType(int result, bool a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


int __fastcall LevelSettings::LevelSettings(int a1)
{
  int v1; // r4@1
  double v2; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = -1;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = 4;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 5;
  *(_BYTE *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 3;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 33) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 45) = 1;
  *(_BYTE *)(a1 + 46) = 1;
  *(_DWORD *)(a1 + 48) = 3;
  *(_BYTE *)(a1 + 52) = 1;
  *(_DWORD *)(a1 + 57) = 0;
  *(_DWORD *)(a1 + 53) = 0;
  j_Abilities::Abilities(a1 + 64);
  j___aeabi_memclr4(v1 + 136, 36);
  LODWORD(v2) = v1 + 172;
  GameRules::GameRules(v2);
  return v1;
}


int __fastcall LevelSettings::setImmutableWorld(int result, bool a2)
{
  *(_BYTE *)(result + 33) = a2;
  return result;
}
