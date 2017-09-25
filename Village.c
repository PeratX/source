

signed int __fastcall Village::isBreedTimerOk(Village *this)
{
  int v1; // r1@1
  signed int result; // r0@2
  int v3; // r1@3

  v1 = *((_DWORD *)this + 20);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 19) - v1;
    result = 0;
    if ( v3 >= 3600 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


void __fastcall Village::debugDraw(Village *this)
{
  Village::debugDraw(this);
}


_DWORD *__fastcall Village::addAggressor(Village *this, Mob *a2)
{
  Village *v2; // r4@1
  int v3; // r5@1
  unsigned __int64 *v4; // r0@1
  _DWORD *result; // r0@1

  v2 = this;
  v3 = *((_DWORD *)this + 19);
  v4 = (unsigned __int64 *)j_Entity::getUniqueID(a2);
  result = (_DWORD *)j_std::__detail::_Map_base<EntityUniqueID,std::pair<EntityUniqueID const,int>,std::allocator<std::pair<EntityUniqueID const,int>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (unsigned __int64 *)v2 + 14,
                       v4);
  *result = v3;
  return result;
}


signed int __fastcall Village::removeVillager(__int64 a1)
{
  LODWORD(a1) = a1 + 16;
  return j_j_j__ZNSt10_HashtableI14EntityUniqueIDS0_SaIS0_ENSt8__detail9_IdentityESt8equal_toIS0_ESt4hashIS0_ENS2_18_Mod_range_hashingENS2_20_Default_ranged_hashENS2_20_Prime_rehash_policyENS2_17_Hashtable_traitsILb1ELb1ELb1EEEE8_M_eraseESt17integral_constantIbLb1EERKS0_(a1);
}


signed int __fastcall Village::hasDoorInfo(Village *this, DoorInfo *a2)
{
  DoorInfo **v2; // r0@1
  DoorInfo **v3; // r2@1
  __int64 v4; // kr00_8@1
  signed int result; // r0@2
  DoorInfo *v6; // t1@6

  v4 = *(_QWORD *)((char *)this + 4);
  v2 = (DoorInfo **)(*(_QWORD *)((char *)this + 4) >> 32);
  v3 = (DoorInfo **)v4;
  if ( (DoorInfo **)v4 == v2 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v6 = *v3;
      ++v3;
      if ( v6 == a2 )
        break;
      if ( v2 == v3 )
        return 0;
    }
    result = 1;
  return result;
}


DoorInfo *__fastcall Village::getBestDoorInfo(Village *this, int a2, int a3, int a4)
{
  DoorInfo *v4; // r4@1
  DoorInfo **v5; // r7@1
  DoorInfo **v6; // r9@1
  signed int v7; // r5@2
  DoorInfo *v8; // r6@3
  int v9; // r0@3
  int v10; // r0@4
  int v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v4 = 0;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v6 = (DoorInfo **)(*(_QWORD *)((char *)this + 4) >> 32);
  v5 = (DoorInfo **)*(_QWORD *)((char *)this + 4);
  if ( v5 != v6 )
  {
    v7 = 0xFFFF;
    do
    {
      v8 = *v5;
      v9 = j_DoorInfo::distanceToSqr(*v5, (const BlockPos *)&v12);
      if ( v9 <= 256 )
        v10 = j_DoorInfo::getBookingsCount(v8);
      else
        v10 = 1000 * v9;
      ++v5;
      if ( v10 < v7 )
      {
        v4 = v8;
        v7 = v10;
      }
    }
    while ( v6 != v5 );
  }
  return v4;
}


signed int __fastcall Village::modifyStanding(unsigned int a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // r9@1
  unsigned int v4; // r5@1
  __int64 v5; // kr08_8@1
  unsigned int v6; // r6@1
  int v7; // r0@1
  int v8; // r10@2
  int v9; // r5@2
  bool v10; // zf@3
  int v11; // r9@6
  int v12; // r0@8
  bool v13; // zf@9
  int v14; // r0@14
  signed int v15; // r4@14
  unsigned __int64 v17; // [sp+0h] [bp-30h]@2

  v3 = a2;
  v4 = a1;
  v5 = *(_QWORD *)(a1 + 84);
  v6 = (*a2 + (((*a2 >> 32) - 1640531527) << 6) + ((unsigned int)((*a2 >> 32) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v7 = *(_DWORD *)(v5 + 4 * (v6 % HIDWORD(v5)));
  if ( !v7 )
    goto LABEL_21;
  v17 = __PAIR__((unsigned int)a2, v4);
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 24);
  while ( 1 )
  {
    v10 = v9 == v6;
    if ( v9 == v6 )
      v10 = *(_QWORD *)(v8 + 8) == *a2;
    if ( v10 )
      break;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v11 + 24);
      v7 = v5;
      v8 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v11 + 24) % HIDWORD(v5) == v6 % HIDWORD(v5) )
        continue;
    }
    v12 = 0;
    v3 = (unsigned __int64 *)HIDWORD(v17);
    v4 = v17;
    goto LABEL_14;
  }
  v13 = v7 == 0;
  v3 = (unsigned __int64 *)HIDWORD(v17);
  v4 = v17;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v13 = v7 == 0;
  if ( v13 )
LABEL_21:
  else
    v12 = *(_DWORD *)(v7 + 16);
LABEL_14:
  v14 = v12 + a3;
  v15 = v14;
  if ( (unsigned __int8)((v14 + 30 < 0) ^ __OFADD__(v14, 30)) | (v14 == -30) )
    v15 = -30;
  if ( v14 > 10 )
    v15 = 10;
  *(_DWORD *)j_std::__detail::_Map_base<EntityUniqueID,std::pair<EntityUniqueID const,int>,std::allocator<std::pair<EntityUniqueID const,int>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               (unsigned __int64 *)(v4 + 84),
               v3) = v15;
  return v15;
}


int __fastcall Village::addDoorInfo(Village *this, DoorInfo *a2)
{
  DoorInfo *v2; // r8@1
  Village *v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r5@2
  _DWORD *v6; // r6@2
  void *v7; // r9@3
  unsigned int v8; // r2@3
  unsigned int v9; // r1@5
  unsigned int v10; // r7@5
  char *v11; // r5@13
  signed int v12; // r1@18
  __int64 v13; // kr08_8@19
  signed int v14; // r7@19
  signed int v15; // r10@19
  int v16; // r0@19
  int v17; // r11@19
  float v18; // r1@19
  DoorInfo **v19; // r6@20
  DoorInfo *v20; // t1@20
  int v21; // r7@20
  int v22; // r2@23
  int v23; // r3@23
  DoorInfo *v24; // t1@23
  int v26; // r1@27
  signed int v33; // r0@31
  int v35; // r1@31
  int result; // r0@34
  int v37; // [sp+0h] [bp-30h]@20
  int v38; // [sp+4h] [bp-2Ch]@20
  int v39; // [sp+8h] [bp-28h]@20

  v2 = a2;
  v3 = this;
  j_DoorInfo::setVillage(a2, this);
  *((_DWORD *)v3 + 11) += *(_DWORD *)j_DoorInfo::getPosition(v2);
  *((_DWORD *)v3 + 12) += *((_DWORD *)j_DoorInfo::getPosition(v2) + 1);
  *((_DWORD *)v3 + 13) += *((_DWORD *)j_DoorInfo::getPosition(v2) + 2);
  *((_DWORD *)v3 + 18) = j_DoorInfo::getTimeStamp(v2);
  v4 = *((_QWORD *)v3 + 1);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v7 = (void *)*((_DWORD *)v3 + 1);
    v8 = ((signed int)v4 - (signed int)v7) >> 2;
    if ( !v8 )
      v8 = 1;
    HIDWORD(v4) = v8 + (((signed int)v4 - (signed int)v7) >> 2);
    v10 = v8 + (((signed int)v4 - (signed int)v7) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v10 = 0x3FFFFFFF;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x40000000 )
        sub_21E57F4();
      v6 = j_operator new(4 * v10);
      LODWORD(v4) = *(_QWORD *)((char *)v3 + 4) >> 32;
      v7 = (void *)*(_QWORD *)((char *)v3 + 4);
    }
    else
      v6 = 0;
    v11 = (char *)v6 + v4 - (_DWORD)v7;
    *(_DWORD *)((char *)v6 + v4 - (_DWORD)v7) = v2;
    if ( 0 != ((signed int)v4 - (signed int)v7) >> 2 )
      j___aeabi_memmove4_0((int)v6, (int)v7);
    v5 = (int)(v11 + 4);
    if ( v7 )
      j_operator delete(v7);
    *((_DWORD *)v3 + 1) = v6;
    *((_DWORD *)v3 + 2) = v5;
    *((_DWORD *)v3 + 3) = &v6[v10];
  }
  else
    *(_DWORD *)v4 = v2;
    v5 = *((_DWORD *)v3 + 2) + 4;
    v6 = (_DWORD *)*((_DWORD *)v3 + 1);
  v12 = v5 - (_DWORD)v6;
  if ( (v5 - (signed int)v6) >> 2 )
    v13 = *(_QWORD *)((char *)v3 + 44);
    v14 = v12 >> 2;
    v15 = *((_DWORD *)v3 + 13);
    v16 = (signed int)v13 / (v12 >> 2);
    v17 = SHIDWORD(v13) / (v12 >> 2);
    *((_DWORD *)v3 + 14) = v16;
    *((_DWORD *)v3 + 15) = v17;
    *((_DWORD *)v3 + 16) = v15 / v14;
    if ( v6 == (_DWORD *)v5 )
      __asm { VLDR            S0, =0.0 }
      v20 = (DoorInfo *)*v6;
      v19 = (DoorInfo **)(v6 + 1);
      v37 = v16;
      v38 = v17;
      v39 = v15 / v14;
      v21 = j_DoorInfo::distanceToSqr(v20, (const BlockPos *)&v37);
      if ( v21 < 0 )
        v21 = 0;
      if ( v19 == (DoorInfo **)v5 )
      {
        _R0 = v21;
      }
      else
        do
        {
          v22 = *((_DWORD *)v3 + 15);
          v23 = *((_DWORD *)v3 + 16);
          v24 = *v19;
          ++v19;
          v37 = *((_DWORD *)v3 + 14);
          v38 = v22;
          v39 = v23;
          _R0 = j_DoorInfo::distanceToSqr(v24, (const BlockPos *)&v37);
          if ( _R0 < v21 )
            _R0 = v21;
          v21 = _R0;
        }
        while ( (DoorInfo **)v5 != v19 );
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
    __asm { VMOV            R0, S0 }
    _R0 = j_mce::Math::sqrt(_R0, v18);
    __asm
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
    v33 = 32;
    __asm { VMOV            R1, S0 }
    v35 = _R1 + 1;
    if ( v35 > 32 )
      v33 = v35;
    *((_DWORD *)v3 + 17) = v33;
    v26 = (int)v3 + 56;
    *(_DWORD *)v26 = 0;
    *(_DWORD *)(v26 + 4) = 0;
    *(_DWORD *)(v26 + 8) = 0;
    *(_DWORD *)(v26 + 12) = 0;
  result = j_DoorInfo::getTimeStamp(v2);
  *((_DWORD *)v3 + 18) = result;
  return result;
}


int __fastcall Village::rewardAllPlayers(int result, int a2)
{
  int v2; // r7@1
  unsigned int v3; // r9@3
  unsigned __int64 *v4; // r11@3
  unsigned int v5; // r10@3
  __int64 v6; // kr00_8@3
  unsigned int v7; // r6@3
  unsigned int v8; // r5@3
  int v9; // r0@3
  int v10; // r11@4
  int v11; // r7@4
  bool v12; // zf@5
  int v13; // r0@10
  int v14; // r0@13
  int v15; // r0@18
  signed int v16; // r4@18
  unsigned __int64 *v17; // [sp+0h] [bp-38h]@2
  int v18; // [sp+4h] [bp-34h]@1
  int v19; // [sp+8h] [bp-30h]@1
  int v20; // [sp+Ch] [bp-2Ch]@4
  int v21; // [sp+10h] [bp-28h]@4

  v18 = a2;
  v19 = result;
  v2 = *(_DWORD *)(result + 92);
  if ( v2 )
  {
    v17 = (unsigned __int64 *)(result + 84);
    do
    {
      v4 = (unsigned __int64 *)(v2 + 8);
      v3 = *(_DWORD *)(v2 + 8);
      v5 = *(_DWORD *)(v2 + 12);
      v6 = *(_QWORD *)(v19 + 84);
      v7 = (v3 + ((v5 - 1640531527) << 6) + ((v5 - 1640531527) >> 2) - 1640531527) ^ (v5 - 1640531527);
      v8 = v7 % (unsigned int)(*(_QWORD *)(v19 + 84) >> 32);
      v9 = *(_DWORD *)(v6 + 4 * v8);
      if ( v9 )
      {
        v20 = v2 + 8;
        v21 = v2;
        v10 = *(_DWORD *)v9;
        v11 = *(_DWORD *)(*(_DWORD *)v9 + 24);
        while ( 1 )
        {
          v12 = v11 == v7;
          if ( v11 == v7 )
            v12 = *(_QWORD *)(v10 + 8) == __PAIR__(v5, v3);
          if ( v12 )
            break;
          if ( *(_DWORD *)v10 )
          {
            v11 = *(_DWORD *)(v6 + 24);
            v9 = v10;
            v10 = *(_DWORD *)v10;
            if ( *(_DWORD *)(v6 + 24) % HIDWORD(v6) == v8 )
              continue;
          }
          v13 = 0;
          v2 = v21;
          v4 = (unsigned __int64 *)v20;
          goto LABEL_18;
        }
        v2 = v21;
        v4 = (unsigned __int64 *)v20;
        if ( v9 )
          v14 = *(_DWORD *)v9;
          if ( v14 )
            v13 = *(_DWORD *)(v14 + 16);
          else
            v13 = 0;
        else
      }
      else
        v13 = 0;
LABEL_18:
      v15 = v13 + v18;
      v16 = v15;
      if ( (unsigned __int8)((v15 + 30 < 0) ^ __OFADD__(v15, 30)) | (v15 == -30) )
        v16 = -30;
      if ( v15 > 10 )
        v16 = 10;
      result = j_std::__detail::_Map_base<EntityUniqueID,std::pair<EntityUniqueID const,int>,std::allocator<std::pair<EntityUniqueID const,int>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 v17,
                 v4);
      *(_DWORD *)result = v16;
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
  }
  return result;
}


int __fastcall Village::getClosestDoorInfo(Village *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  Village *v3; // r5@1
  __int64 v4; // r6@1
  float v5; // r1@1
  float v6; // r1@1
  int v7; // r0@1
  int v8; // r4@1
  __int64 v9; // r6@1
  signed int v10; // r5@2
  int v11; // r0@3
  int v12; // r1@3
  int v13; // t1@3
  __int64 v15; // [sp+4h] [bp-24h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  LODWORD(v4) = j_mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  HIDWORD(v4) = j_mce::Math::floor(*((mce::Math **)v2 + 1), v5);
  v7 = j_mce::Math::floor(*((mce::Math **)v2 + 2), v6);
  v15 = v4;
  v8 = 0;
  v16 = v7;
  v9 = *(_QWORD *)((char *)v3 + 4);
  if ( (_DWORD)v9 != HIDWORD(v9) )
  {
    v10 = 0xFFFF;
    do
    {
      v11 = j_DoorInfo::distanceToSqr(*(DoorInfo **)v9, (const BlockPos *)&v15);
      v13 = *(_DWORD *)v9;
      LODWORD(v9) = v9 + 4;
      v12 = v13;
      if ( v11 < v10 )
      {
        v8 = v12;
        v10 = v11;
      }
    }
    while ( HIDWORD(v9) != (_DWORD)v9 );
  }
  return v8;
}


signed int __fastcall Village::isInside(Village *this, const BlockPos *_R1)
{
  signed int result; // r0@1

  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S6, #0.5
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VLDR            S8, [R0,#0x38]
    VLDR            S10, [R0,#0x3C]
    VLDR            S12, [R0,#0x40]
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S8, S8
    VCVT.F32.S32    S10, S10
    VCVT.F32.S32    S12, S12
    VSUB.F32        S0, S6, S0
    VSUB.F32        S2, S6, S2
  }
  _R0 = *((_DWORD *)this + 17) * *((_DWORD *)this + 17);
    VSUB.F32        S4, S6, S4
    VADD.F32        S0, S8, S0
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMOV            S2, R0
  result = 0;
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


signed int __fastcall Village::isBadStanding(int a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r11@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r5@2
  int v8; // r7@2
  bool v9; // zf@3
  int v10; // r1@10
  signed int result; // r0@10

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 84);
  v4 = (v2 + ((HIDWORD(v2) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v2) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 84) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_14;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == v2;
    if ( v9 )
      break;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v3 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 24) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  if ( v6 )
    v10 = *(_DWORD *)v6;
    result = 0;
    if ( v10 && (*(_DWORD *)(v10 + 16) + 4 < 0) ^ __OFADD__(*(_DWORD *)(v10 + 16), 4) )
      result = 1;
  else
LABEL_14:
  return result;
}


int __fastcall Village::setLevel(int result, Level *a2)
{
  *(_DWORD *)result = a2;
  return result;
}


int __fastcall Village::addAdditionalSaveData(Village *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  Village *v3; // r8@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r9@12
  __int64 i; // r4@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  DoorInfo *v29; // r10@62
  void *v30; // r7@62
  int *v31; // r0@62
  void *v32; // r0@62
  char *v33; // r0@63
  void *v34; // r0@63
  char *v35; // r0@64
  void *v36; // r0@64
  int v37; // r0@65
  void *v38; // r0@65
  int v39; // r0@66
  void *v40; // r0@66
  int v41; // r0@67
  void *v42; // r0@67
  void *v43; // r0@73
  int j; // r10@74
  unsigned int *v45; // r2@76
  signed int v46; // r1@78
  unsigned int *v47; // r2@80
  signed int v48; // r1@82
  void *v49; // r6@92
  void *v50; // r0@92
  void *v51; // r0@93
  int v52; // r0@97
  void *v53; // r0@99
  int k; // r4@100
  unsigned int *v55; // r2@102
  signed int v56; // r1@104
  void *v57; // r5@110
  void *v58; // r0@110
  int v59; // r0@114
  void *v60; // r0@116
  int result; // r0@119
  unsigned int *v62; // r2@122
  signed int v63; // r1@124
  unsigned int *v64; // r2@126
  signed int v65; // r1@128
  unsigned int *v66; // r2@130
  signed int v67; // r1@132
  unsigned int *v68; // r2@134
  signed int v69; // r1@136
  unsigned int *v70; // r2@138
  signed int v71; // r1@140
  unsigned int *v72; // r2@142
  signed int v73; // r1@144
  unsigned int *v74; // r2@146
  signed int v75; // r1@148
  unsigned int *v76; // r2@150
  signed int v77; // r1@152
  unsigned int *v78; // r2@154
  signed int v79; // r1@156
  unsigned int *v80; // r2@158
  signed int v81; // r1@160
  unsigned int *v82; // r2@162
  signed int v83; // r1@164
  unsigned int *v84; // r2@210
  signed int v85; // r1@212
  unsigned int *v86; // r2@214
  signed int v87; // r1@216
  unsigned int *v88; // r2@222
  signed int v89; // r1@224
  int v90; // [sp+4h] [bp-104h]@73
  int v91; // [sp+8h] [bp-100h]@114
  int v92; // [sp+10h] [bp-F8h]@114
  void *v93; // [sp+14h] [bp-F4h]@111
  int v94; // [sp+1Ch] [bp-ECh]@102
  int v95; // [sp+20h] [bp-E8h]@100
  int v96; // [sp+24h] [bp-E4h]@97
  int v97; // [sp+2Ch] [bp-DCh]@97
  void *v98; // [sp+30h] [bp-D8h]@94
  int v99; // [sp+38h] [bp-D0h]@80
  int v100; // [sp+40h] [bp-C8h]@76
  int v101; // [sp+44h] [bp-C4h]@74
  void *v102; // [sp+48h] [bp-C0h]@71
  int v103; // [sp+50h] [bp-B8h]@71
  void *v104; // [sp+54h] [bp-B4h]@68
  int v105; // [sp+5Ch] [bp-ACh]@34
  int v106; // [sp+64h] [bp-A4h]@30
  int v107; // [sp+6Ch] [bp-9Ch]@26
  int v108; // [sp+74h] [bp-94h]@22
  int v109; // [sp+7Ch] [bp-8Ch]@18
  int v110; // [sp+84h] [bp-84h]@14
  int v111; // [sp+8Ch] [bp-7Ch]@11
  int v112; // [sp+94h] [bp-74h]@10
  int v113; // [sp+9Ch] [bp-6Ch]@9
  int v114; // [sp+A4h] [bp-64h]@8
  int v115; // [sp+ACh] [bp-5Ch]@7
  int v116; // [sp+B4h] [bp-54h]@6
  int v117; // [sp+BCh] [bp-4Ch]@5
  int v118; // [sp+C4h] [bp-44h]@4
  int v119; // [sp+CCh] [bp-3Ch]@3
  int v120; // [sp+D4h] [bp-34h]@2
  int v121; // [sp+DCh] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v121, "Radius");
  j_CompoundTag::putInt((int)v2, (const void **)&v121, *((_DWORD *)v3 + 17));
  v4 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
  {
    v62 = (unsigned int *)(v121 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
    }
    else
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v120, "Golems");
  j_CompoundTag::putInt((int)v2, (const void **)&v120, *((_DWORD *)v3 + 35));
  v5 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v120 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v119, "Stable");
  j_CompoundTag::putInt((int)v2, (const void **)&v119, *((_DWORD *)v3 + 18));
  v6 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v119 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v118, "Tick");
  j_CompoundTag::putInt((int)v2, (const void **)&v118, *((_DWORD *)v3 + 19));
  v7 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v118 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v117, "MTick");
  j_CompoundTag::putInt((int)v2, (const void **)&v117, *((_DWORD *)v3 + 20));
  v8 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v117 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v116, "CX");
  j_CompoundTag::putInt((int)v2, (const void **)&v116, *((_DWORD *)v3 + 14));
  v9 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v116 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v115, "CY");
  j_CompoundTag::putInt((int)v2, (const void **)&v115, *((_DWORD *)v3 + 15));
  v10 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v115 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v114, "CZ");
  j_CompoundTag::putInt((int)v2, (const void **)&v114, *((_DWORD *)v3 + 16));
  v11 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v114 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v113, "ACX");
  j_CompoundTag::putInt((int)v2, (const void **)&v113, *((_DWORD *)v3 + 11));
  v12 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v113 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v112, "ACY");
  j_CompoundTag::putInt((int)v2, (const void **)&v112, *((_DWORD *)v3 + 12));
  v13 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v112 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v111, "ACZ");
  j_CompoundTag::putInt((int)v2, (const void **)&v111, *((_DWORD *)v3 + 13));
  v14 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v111 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = j_operator new(0x14u);
  j_ListTag::ListTag((int)v15);
  for ( i = *(_QWORD *)((char *)v3 + 4); (_DWORD)i != HIDWORD(i); v104 = 0 )
    v29 = *(DoorInfo **)i;
    v30 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v30);
    sub_21E94B4((void **)&v110, "X");
    v31 = (int *)j_DoorInfo::getPosition(v29);
    j_CompoundTag::putInt((int)v30, (const void **)&v110, *v31);
    v32 = (void *)(v110 - 12);
    if ( (int *)(v110 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v110 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    sub_21E94B4((void **)&v109, "Y");
    v33 = j_DoorInfo::getPosition(v29);
    j_CompoundTag::putInt((int)v30, (const void **)&v109, *((_DWORD *)v33 + 1));
    v34 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v109 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    sub_21E94B4((void **)&v108, "Z");
    v35 = j_DoorInfo::getPosition(v29);
    j_CompoundTag::putInt((int)v30, (const void **)&v108, *((_DWORD *)v35 + 2));
    v36 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v108 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    sub_21E94B4((void **)&v107, "IDX");
    v37 = j_DoorInfo::getInsideDx(v29);
    j_CompoundTag::putInt((int)v30, (const void **)&v107, v37);
    v38 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v107 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    sub_21E94B4((void **)&v106, "IDZ");
    v39 = j_DoorInfo::getInsideDz(v29);
    j_CompoundTag::putInt((int)v30, (const void **)&v106, v39);
    v40 = (void *)(v106 - 12);
    if ( (int *)(v106 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v106 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    sub_21E94B4((void **)&v105, "TS");
    v41 = j_DoorInfo::getTimeStamp(v29);
    j_CompoundTag::putInt((int)v30, (const void **)&v105, v41);
    v42 = (void *)(v105 - 12);
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v105 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v42);
    v104 = v30;
    j_ListTag::add((int)v15, (int *)&v104);
    if ( v104 )
      (*(void (**)(void))(*(_DWORD *)v104 + 4))();
    LODWORD(i) = i + 4;
  sub_21E94B4((void **)&v103, "Doors");
  v102 = v15;
  j_CompoundTag::put((int)v2, (const void **)&v103, (int *)&v102);
  if ( v102 )
    (*(void (**)(void))(*(_DWORD *)v102 + 4))();
  v102 = 0;
  v90 = (int)v2;
  v43 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v103 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  j_std::make_unique<ListTag,char const(&)[8]>(&v101, "Players");
  for ( j = *((_DWORD *)v3 + 23); j; j = *(_DWORD *)j )
    v49 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v49);
    sub_21E94B4((void **)&v100, "ID");
    j_CompoundTag::putInt64((int)v49, (const void **)&v100, *(_QWORD *)(j + 8), *(_QWORD *)(j + 8) >> 32);
    v50 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v100 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v50);
    sub_21E94B4((void **)&v99, (const char *)&aCdefghjklmnopq[15]);
    j_CompoundTag::putInt((int)v49, (const void **)&v99, *(_DWORD *)(j + 16));
    v51 = (void *)(v99 - 12);
    if ( (int *)(v99 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v99 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    v98 = v49;
    j_ListTag::add(v101, (int *)&v98);
    if ( v98 )
      (*(void (**)(void))(*(_DWORD *)v98 + 4))();
    v98 = 0;
  sub_21E94B4((void **)&v97, "Players");
  v52 = v101;
  v101 = 0;
  v96 = v52;
  j_CompoundTag::put(v90, (const void **)&v97, &v96);
  if ( v96 )
    (*(void (**)(void))(*(_DWORD *)v96 + 4))();
  v96 = 0;
  v53 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v97 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  j_std::make_unique<ListTag,char const(&)[10]>(&v95, "Villagers");
  for ( k = *((_DWORD *)v3 + 6); k; k = *(_DWORD *)k )
    v57 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v57);
    sub_21E94B4((void **)&v94, "ID");
    j_CompoundTag::putInt64((int)v57, (const void **)&v94, *(_QWORD *)(k + 8), *(_QWORD *)(k + 8) >> 32);
    v58 = (void *)(v94 - 12);
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v94 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v58);
    v93 = v57;
    j_ListTag::add(v95, (int *)&v93);
    if ( v93 )
      (*(void (**)(void))(*(_DWORD *)v93 + 4))();
    v93 = 0;
  sub_21E94B4((void **)&v92, "Villagers");
  v59 = v95;
  v95 = 0;
  v91 = v59;
  j_CompoundTag::put(v90, (const void **)&v92, &v91);
  if ( v91 )
    (*(void (**)(void))(*(_DWORD *)v91 + 4))();
  v91 = 0;
  v60 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v92 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  if ( v95 )
    (*(void (**)(void))(*(_DWORD *)v95 + 4))();
  result = v101;
  if ( v101 )
    result = (*(int (**)(void))(*(_DWORD *)v101 + 4))();
  return result;
}


signed int __fastcall Village::isVillageDoor(Village *this, const Block *a2)
{
  Block *v2; // r4@1
  signed int v3; // r5@1
  int *v4; // r0@2

  v2 = this;
  v3 = 0;
  if ( j_Block::hasProperty((int)this, (int)a2, 1024LL) == 1 )
  {
    v4 = (int *)j_Block::getMaterial(v2);
    v3 = j_Material::isType(v4, 2);
  }
  return v3;
}


signed int __fastcall Village::calcInfo(Village *this)
{
  Village *v1; // r4@1
  signed int result; // r0@1
  __int64 v3; // kr00_8@1
  signed int v4; // r1@1
  __int64 v5; // kr08_8@2
  signed int v6; // r5@2
  signed int v7; // r8@2
  int v8; // r9@2 OVERLAPPED
  int v9; // r10@2 OVERLAPPED
  float v10; // r1@2
  DoorInfo **v11; // r7@3
  DoorInfo *v12; // t1@3
  int v13; // r5@3
  int v14; // r2@6
  int v15; // r3@6
  DoorInfo *v16; // t1@6
  int v18; // r1@10
  int v26; // r1@14
  __int64 v27; // [sp+4h] [bp-2Ch]@3
  int v28; // [sp+Ch] [bp-24h]@3

  v1 = this;
  result = 0;
  v3 = *(_QWORD *)((char *)v1 + 4);
  v4 = HIDWORD(v3) - v3;
  if ( (HIDWORD(v3) - (signed int)v3) >> 2 )
  {
    v5 = *(_QWORD *)((char *)v1 + 44);
    v6 = v4 >> 2;
    v7 = *((_DWORD *)v1 + 13);
    v8 = (signed int)v5 / (v4 >> 2);
    v9 = SHIDWORD(v5) / (v4 >> 2);
    *((_QWORD *)v1 + 7) = *(_QWORD *)&v8;
    *((_DWORD *)v1 + 16) = v7 / v6;
    if ( (_DWORD)v3 == HIDWORD(v3) )
    {
      __asm { VLDR            S0, =0.0 }
    }
    else
      v12 = *(DoorInfo **)v3;
      v11 = (DoorInfo **)(v3 + 4);
      v27 = *(_QWORD *)&v8;
      v28 = v7 / v6;
      v13 = j_DoorInfo::distanceToSqr(v12, (const BlockPos *)&v27);
      if ( v13 < 0 )
        v13 = 0;
      if ( (_DWORD)v3 == HIDWORD(v3) )
      {
        _R0 = v13;
      }
      else
        do
        {
          v14 = *((_DWORD *)v1 + 15);
          v15 = *((_DWORD *)v1 + 16);
          v16 = *v11;
          ++v11;
          LODWORD(v27) = *((_DWORD *)v1 + 14);
          HIDWORD(v27) = v14;
          v28 = v15;
          _R0 = j_DoorInfo::distanceToSqr(v16, (const BlockPos *)&v27);
          if ( _R0 < v13 )
            _R0 = v13;
          v13 = _R0;
        }
        while ( HIDWORD(v3) != (_DWORD)v3 );
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
    __asm { VMOV            R0, S0 }
    _R0 = j_mce::Math::sqrt(_R0, v10);
    __asm
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
    result = 32;
    __asm { VMOV            R1, S0 }
    v26 = _R1 + 1;
    if ( v26 > 32 )
      result = v26;
    *((_DWORD *)v1 + 17) = result;
  }
  else
    v18 = (int)v1 + 56;
    *(_DWORD *)v18 = 0;
    *(_DWORD *)(v18 + 4) = 0;
    *(_DWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 12) = 0;
  return result;
}


int __fastcall Village::getStanding(int a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r11@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r5@2
  int v8; // r7@2
  bool v9; // zf@3
  bool v10; // zf@9
  int result; // r0@12

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 84);
  v4 = (v2 + ((HIDWORD(v2) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v2) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 84) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == v2;
    if ( v9 )
      break;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v3 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 24) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_13:
    result = 0;
  else
    result = *(_DWORD *)(v6 + 16);
  return result;
}


signed int __fastcall Village::findRandomSpawnPos(Village *this, Vec3 *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // [sp+0h] [bp-28h]@1
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@1
  int v13; // [sp+10h] [bp-18h]@1
  int v14; // [sp+14h] [bp-14h]@1

  v13 = a4;
  v14 = a5;
  v9 = a6;
  v10 = a7;
  v11 = a8;
  v12 = a3;
  return j_Village::findRandomSpawnPos(this, a2, (const BlockPos *)&v12, (const BlockPos *)&v9);
}


signed int __fastcall Village::countGolem(Village *this)
{
  Dimension *v2; // r0@1
  int v3; // r0@1
  int v8; // r5@1
  unsigned __int64 *v11; // r0@1
  signed int result; // r0@1
  int v13; // [sp+0h] [bp-38h]@0
  int v14; // [sp+4h] [bp-34h]@0
  int v15; // [sp+8h] [bp-30h]@0
  char v16; // [sp+Ch] [bp-2Ch]@1

  _R4 = this;
  v2 = (Dimension *)j_Level::getDimension(*(_DWORD *)this, 0);
  v3 = j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v2);
  __asm
  {
    VLDR            S0, [R4,#0x38]
    VMOV.F32        S8, #-4.0
    VLDR            S2, [R4,#0x3C]
    VLDR            S4, [R4,#0x40]
  }
  v8 = v3;
    VLDR            S6, [R4,#0x44]
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSUB.F32        S10, S0, S6
    VADD.F32        S8, S2, S8
    VSUB.F32        S12, S4, S6
    VADD.F32        S0, S6, S0
    VADD.F32        S4, S4, S6
    VMOV            R1, S10
    VMOV            R2, S8
    VMOV            R3, S12
    VMOV.F32        S8, #4.0
    VSTR            S0, [SP,#0x38+var_38]
    VADD.F32        S2, S2, S8
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S4, [SP,#0x38+var_30]
  j_AABB::AABB(COERCE_FLOAT(&v16), _R1, _R2, v13, v14, v15);
  v11 = (unsigned __int64 *)j_BlockSource::fetchEntities(v8, 788, (int)&v16, 0);
  result = (signed int)((*v11 >> 32) - *v11) >> 2;
  *((_DWORD *)_R4 + 35) = result;
  return result;
}


signed int __fastcall Village::isGoodStanding(int a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r11@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r5@2
  int v8; // r7@2
  bool v9; // zf@3
  bool v10; // zf@9
  signed int v11; // r1@12
  signed int result; // r0@12

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 84);
  v4 = (v2 + ((HIDWORD(v2) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v2) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 84) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == v2;
    if ( v9 )
      break;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v3 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 24) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_15:
    result = 1;
  else
    v11 = *(_DWORD *)(v6 + 16);
    result = 0;
    if ( v11 > -1 )
      result = 1;
  return result;
}


signed int __fastcall Village::getDoorCount(Village *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
}


signed int __fastcall Village::updateDoors(Village *this)
{
  Village *v1; // r8@1
  signed int result; // r0@1
  char *v3; // r0@2
  DoorInfo **v4; // r5@2
  char v5; // r10@3
  unsigned int v6; // r9@3
  DoorInfo *v7; // r6@5
  Level *v8; // r4@5
  char *v9; // r7@5
  Dimension *v10; // r0@5
  BlockSource *v11; // r0@6
  Block *v12; // r7@6
  int v13; // r1@6
  int *v14; // r0@7
  int v15; // r4@8
  DoorInfo **v16; // r7@11
  Level *v17; // r4@13
  char *v18; // r7@13
  Dimension *v19; // r0@13
  BlockSource *v20; // r0@14
  Block *v21; // r7@14
  int v22; // r1@14
  int *v23; // r0@15
  int v24; // r4@16
  DoorInfo **v25; // r0@21
  int v26; // r1@21
  char *v28; // r0@25
  DoorInfo **v29; // r4@28
  signed int v30; // r1@28
  signed int v31; // r5@29
  signed int v32; // r9@29
  int v33; // r0@29
  int v34; // r6@29
  float v35; // r1@29
  DoorInfo **v36; // r4@30
  DoorInfo *v37; // t1@30
  int v38; // r5@30
  int v39; // r2@33
  int v40; // r3@33
  DoorInfo *v41; // t1@33
  int v43; // r1@37
  int v50; // r1@42
  int v51; // [sp+4h] [bp-2Ch]@30
  int v52; // [sp+8h] [bp-28h]@30
  int v53; // [sp+Ch] [bp-24h]@30

  v1 = this;
  result = j_Level::getDimension(*(_DWORD *)this, 0);
  if ( result )
  {
    v3 = j_Level::getRandom(*(Level **)v1);
    result = j_Random::_genRandInt32((Random *)v3);
    v4 = (DoorInfo **)*(_QWORD *)((char *)v1 + 4);
    if ( v4 != (DoorInfo **)(*(_QWORD *)((char *)v1 + 4) >> 32) )
    {
      v5 = 0;
      v6 = result % 0x32u;
      do
      {
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = *v4;
            v8 = *(Level **)v1;
            v9 = j_DoorInfo::getPosition(*v4);
            v10 = (Dimension *)j_Level::getDimension((int)v8, 0);
            if ( !v10 )
              break;
            v11 = (BlockSource *)j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v10);
            v12 = (Block *)j_BlockSource::getBlock(v11, (const BlockPos *)v9);
            if ( j_Block::hasProperty((int)v12, v13, 1024LL) != 1 )
            v14 = (int *)j_Block::getMaterial(v12);
            if ( j_Material::isType(v14, 2) != 1 )
            v15 = *((_DWORD *)v1 + 19);
            result = v15 - j_DoorInfo::getTimeStamp(v7);
            if ( result < 0 )
              result = -result;
            if ( result > 1200 )
            v16 = (DoorInfo **)*((_DWORD *)v1 + 2);
            ++v4;
            if ( v4 == v16 )
              goto LABEL_27;
          }
        }
        else
            j_DoorInfo::resetBookingCount(*v4);
            v17 = *(Level **)v1;
            v18 = j_DoorInfo::getPosition(v7);
            v19 = (Dimension *)j_Level::getDimension((int)v17, 0);
            if ( !v19 )
            v20 = (BlockSource *)j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v19);
            v21 = (Block *)j_BlockSource::getBlock(v20, (const BlockPos *)v18);
            if ( j_Block::hasProperty((int)v21, v22, 1024LL) != 1 )
            v23 = (int *)j_Block::getMaterial(v21);
            if ( j_Material::isType(v23, 2) != 1 )
            v24 = *((_DWORD *)v1 + 19);
            result = v24 - j_DoorInfo::getTimeStamp(v7);
            {
LABEL_27:
              if ( !(v5 & 1) )
                return result;
              goto LABEL_28;
            }
        *((_DWORD *)v1 + 11) -= *(_DWORD *)j_DoorInfo::getPosition(v7);
        *((_DWORD *)v1 + 12) -= *((_DWORD *)j_DoorInfo::getPosition(v7) + 1);
        *((_DWORD *)v1 + 13) -= *((_DWORD *)j_DoorInfo::getPosition(v7) + 2);
        v25 = (DoorInfo **)*((_DWORD *)v1 + 2);
        v26 = (int)(v4 + 1);
        _ZF = v4 + 1 == v25;
        if ( v4 + 1 != v25 )
          _ZF = v25 == (DoorInfo **)v26;
        if ( !_ZF )
          j___aeabi_memmove4_0((int)v4, v26);
          v25 = (DoorInfo **)*((_DWORD *)v1 + 2);
        *((_DWORD *)v1 + 2) = v25 - 1;
        v28 = j_Level::getVillages(*(Level **)v1);
        j_Villages::removeDoorInfo(*(Villages **)v28, v7);
        v16 = (DoorInfo **)*((_DWORD *)v1 + 2);
        v5 = 1;
      }
      while ( v4 != v16 );
LABEL_28:
      v29 = (DoorInfo **)*((_DWORD *)v1 + 1);
      result = 0;
      v30 = (char *)v16 - (char *)v29;
      if ( v16 - v29 )
        v31 = v30 >> 2;
        v32 = *((_DWORD *)v1 + 13);
        v33 = *((_DWORD *)v1 + 11) / (v30 >> 2);
        v34 = *((_DWORD *)v1 + 12) / (v30 >> 2);
        *((_DWORD *)v1 + 14) = v33;
        *((_DWORD *)v1 + 15) = v34;
        *((_DWORD *)v1 + 16) = v32 / v31;
        if ( v29 == v16 )
          __asm { VLDR            S0, =0.0 }
          v37 = *v29;
          v36 = v29 + 1;
          v51 = v33;
          v52 = v34;
          v53 = v32 / v31;
          v38 = j_DoorInfo::distanceToSqr(v37, (const BlockPos *)&v51);
          if ( v38 < 0 )
            v38 = 0;
          if ( v36 == v16 )
            _R0 = v38;
          else
            do
              v39 = *((_DWORD *)v1 + 15);
              v40 = *((_DWORD *)v1 + 16);
              v41 = *v36;
              ++v36;
              v51 = *((_DWORD *)v1 + 14);
              v52 = v39;
              v53 = v40;
              _R0 = j_DoorInfo::distanceToSqr(v41, (const BlockPos *)&v51);
              if ( _R0 < v38 )
                _R0 = v38;
              v38 = _R0;
            while ( v16 != v36 );
          __asm
            VMOV            S0, R0
            VCVT.F32.S32    S0, S0
        __asm { VMOV            R0, S0 }
        _R0 = j_mce::Math::sqrt(_R0, v35);
        __asm
          VMOV            S0, R0
          VCVTR.S32.F32   S0, S0
        result = 32;
        __asm { VMOV            R1, S0 }
        v50 = _R1 + 1;
        if ( v50 > 32 )
          result = v50;
        *((_DWORD *)v1 + 17) = result;
      else
        v43 = (int)v1 + 56;
        *(_DWORD *)v43 = 0;
        *(_DWORD *)(v43 + 4) = 0;
        *(_DWORD *)(v43 + 8) = 0;
        *(_DWORD *)(v43 + 12) = 0;
    }
  }
  return result;
}


int *__fastcall Village::addVillager(int a1, unsigned __int64 *a2)
{
  unsigned int v2; // r5@1
  unsigned int v3; // r6@1
  int v4; // r7@1
  int *result; // r0@1
  int v6; // r9@2
  int v7; // r4@2
  bool v8; // zf@3
  int v9; // r8@6
  bool v10; // zf@9
  _QWORD *v11; // r0@13
  unsigned __int64 *v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+8h] [bp-28h]@1

  v12 = a2;
  v13 = a1 + 16;
  v2 = *(_DWORD *)(a1 + 20);
  v3 = (*a2 + (((*a2 >> 32) - 1640531527) << 6) + ((unsigned int)((*a2 >> 32) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v4 = v3 % *(_DWORD *)(a1 + 20);
  result = *(int **)(*(_DWORD *)(a1 + 16) + 4 * v4);
  if ( !result )
    goto LABEL_13;
  v6 = *result;
  v7 = *(_DWORD *)(*result + 16);
  while ( 1 )
  {
    v8 = v7 == v3;
    if ( v7 == v3 )
      v8 = *(_QWORD *)(v6 + 8) == *a2;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 16);
      result = (int *)v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 16) % v2 == v4 )
        continue;
    }
  }
  v10 = result == 0;
  if ( result )
    result = (int *)*result;
    v10 = result == 0;
  if ( v10 )
LABEL_13:
    v11 = j_operator new(0x18u);
    *(_DWORD *)v11 = 0;
    v11[1] = *v12;
    result = (int *)j_j_j__ZNSt10_HashtableI14EntityUniqueIDS0_SaIS0_ENSt8__detail9_IdentityESt8equal_toIS0_ESt4hashIS0_ENS2_18_Mod_range_hashingENS2_20_Default_ranged_hashENS2_20_Prime_rehash_policyENS2_17_Hashtable_traitsILb1ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS2_10_Hash_nodeIS0_Lb1EEE_0(
                      v13,
                      v4,
                      v3,
                      (int)v11);
  return result;
}


signed int __fastcall Village::isVeryBadStanding(int a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r11@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r5@2
  int v8; // r7@2
  bool v9; // zf@3
  int v10; // r1@10
  signed int result; // r0@10

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 84);
  v4 = (v2 + ((HIDWORD(v2) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v2) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 84) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_14;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == v2;
    if ( v9 )
      break;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v3 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 24) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  if ( v6 )
    v10 = *(_DWORD *)v6;
    result = 0;
    if ( v10 && (*(_DWORD *)(v10 + 16) + 14 < 0) ^ __OFADD__(*(_DWORD *)(v10 + 16), 14) )
      result = 1;
  else
LABEL_14:
  return result;
}


void __fastcall Village::readAdditionalSaveData(Village *this, const CompoundTag *a2)
{
  Village::readAdditionalSaveData(this, a2);
}


signed int __fastcall Village::getIdealPopulationSize(Village *this)
{
  signed int result; // r0@1

  _R0 = (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  if ( result <= 3 )
    result = 3;
  return result;
}


signed int __fastcall Village::isInside(Village *this, int _R1, int _R2, int _R3)
{
  signed int result; // r0@1

  __asm
  {
    VMOV            S2, R1
    VMOV            S4, R2
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VLDR            S6, [R0,#0x38]
    VMOV.F32        S0, #0.5
    VLDR            S8, [R0,#0x3C]
    VMOV            S12, R3
    VLDR            S10, [R0,#0x40]
    VCVT.F32.S32    S12, S12
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S8, S8
    VCVT.F32.S32    S10, S10
    VSUB.F32        S2, S0, S2
    VSUB.F32        S4, S0, S4
  }
  _R0 = *((_DWORD *)this + 17) * *((_DWORD *)this + 17);
    VSUB.F32        S0, S0, S12
    VADD.F32        S2, S6, S2
    VADD.F32        S4, S8, S4
    VADD.F32        S0, S10, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VMUL.F32        S0, S0, S0
    VADD.F32        S2, S4, S2
    VMOV            S4, R0
  result = 0;
    VADD.F32        S0, S2, S0
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


void __fastcall Village::tick(Village *this, int a2)
{
  Village::tick(this, a2);
}


void __fastcall Village::debugDraw(Village *this)
{
  Village *v1; // r11@1
  __int64 v2; // r2@1
  int v8; // r1@1
  signed int v10; // r6@5
  const char *v11; // r4@9
  __int64 v12; // r2@12
  int v13; // r1@12
  void *v14; // r0@12
  int i; // r10@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  int v18; // r5@23
  unsigned int v19; // r0@24
  void *v20; // r0@24
  const void **v21; // r0@26
  char *v22; // r0@28
  DoorInfo **v23; // r5@29 OVERLAPPED
  DoorInfo **v24; // r6@29 OVERLAPPED
  DoorInfo *v25; // r4@30
  void *v26; // r0@31
  unsigned int *v27; // r2@33
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  int v32; // [sp+10h] [bp-38h]@15
  int v33; // [sp+14h] [bp-34h]@12
  char *v34; // [sp+18h] [bp-30h]@12
  int v35; // [sp+1Ch] [bp-2Ch]@11

  v1 = this;
  HIDWORD(v2) = *((_DWORD *)this + 7);
  LODWORD(v2) = *((_DWORD *)this + 17);
  _R0 = (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VCVTR.S32.F32   S0, S0
  }
  v8 = *((_DWORD *)v1 + 20);
  __asm { VMOV            R7, S0 }
  if ( _R7 <= 3 )
    _R7 = 3;
  if ( v8 && *((_DWORD *)v1 + 19) - v8 < 3600 )
    v10 = 0;
  else
    if ( SHIDWORD(v2) < _R7 )
      v10 = 1;
  v11 = "no";
  if ( v10 )
    v11 = "yes";
  j_Util::format(
    (Util *)&v35,
    "Village: mRadius[%d] population[%d] ideal[%d] doors[%d] canBreed[%s]",
    v2,
    _R7,
    _R0,
    v11);
  if ( *((_DWORD *)v1 + 31) )
    v34 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v34, 0x80u);
    LODWORD(v12) = *((_DWORD *)v1 + 31);
    j_Util::format((Util *)&v33, "\n Aggressors[%d]:", v12);
    sub_21E72F0((const void **)&v34, (const void **)&v33);
    v13 = v33;
    v14 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v27);
        while ( __strex(v13 - 1, v27) );
      }
      else
        v13 = (*v27)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    }
    for ( i = *((_DWORD *)v1 + 30); i; i = *(_DWORD *)i )
      v18 = j_Level::fetchEntity(*(_DWORD *)v1, v13, *(_QWORD *)(i + 8), *(_QWORD *)(i + 8) >> 32, 0);
      if ( v18 )
        sub_21E7408((const void **)&v34, " ", 1u);
        v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 488))(v18);
        j_EntityTypeToString((void **)&v32, v19, 0);
        sub_21E72F0((const void **)&v34, (const void **)&v32);
        v20 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
        {
          v16 = (unsigned int *)(v32 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        }
        if ( j_Entity::hasCategory(v18, 1) == 1 )
          sub_21E7408((const void **)&v34, "[", 1u);
          v21 = (const void **)(*(int (__fastcall **)(int))(*(_DWORD *)v18 + 188))(v18);
          sub_21E72F0((const void **)&v34, v21);
          sub_21E7408((const void **)&v34, "]", 1u);
    sub_21E72F0((const void **)&v35, (const void **)&v34);
    v22 = v34 - 12;
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v34 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  for ( *(_QWORD *)&v23 = *(_QWORD *)((char *)v1 + 4); v24 != v23; ++v23 )
    v25 = *v23;
    j_DoorInfo::getPosition(*v23);
    j_DoorInfo::getPosition(v25);
  v26 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
}


signed int __fastcall Village::isVillageDoor(Village *this, Level *a2, const BlockPos *a3)
{
  Level *v3; // r5@1
  signed int v4; // r4@1
  Dimension *v5; // r0@1
  BlockSource *v6; // r0@2
  Block *v7; // r5@2
  int v8; // r1@2
  int *v9; // r0@3

  v3 = a2;
  v4 = 0;
  v5 = (Dimension *)j_Level::getDimension((int)this, 0);
  if ( v5 )
  {
    v6 = (BlockSource *)j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v5);
    v7 = (Block *)j_BlockSource::getBlock(v6, v3);
    v4 = 0;
    if ( j_Block::hasProperty((int)v7, v8, 1024LL) == 1 )
    {
      v9 = (int *)j_Block::getMaterial(v7);
      v4 = j_Material::isType(v9, 2);
    }
  }
  return v4;
}


Entity *__fastcall Village::getClosestAggressor(Village *this, Entity *a2)
{
  int *v2; // r5@1
  Entity *v3; // r8@1
  int v4; // r4@1
  Entity *v5; // r6@1
  Entity *v10; // r0@3
  Entity *v11; // r7@3

  v2 = (int *)this;
  v3 = a2;
  v4 = *((_DWORD *)this + 30);
  v5 = 0;
  if ( v4 )
  {
    __asm { VLDR            S16, =3.4028e38 }
    v5 = 0;
    do
    {
      v10 = (Entity *)j_Level::fetchEntity(*v2, (int)a2, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 8) >> 32, 0);
      v11 = v10;
      if ( v10 )
      {
        _R0 = j_Entity::distanceToSqr(v10, v3);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v5 = v11;
        else
          __asm { VMOVGT.F32      S0, S16 }
        __asm { VMOV.F32        S16, S0 }
      }
      v4 = *(_DWORD *)v4;
    }
    while ( v4 );
  }
  return v5;
}


signed int __fastcall Village::canRemove(Village *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)((char *)this + 4);
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall Village::getClosestDoorInfo(Village *this, const BlockPos *a2)
{
  __int64 v2; // r6@1
  const BlockPos *v3; // r8@1
  int v4; // r4@1
  signed int v5; // r5@2
  int v6; // r0@3
  int v7; // r1@3
  int v8; // t1@3

  v2 = *(_QWORD *)((char *)this + 4);
  v3 = a2;
  v4 = 0;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v5 = 0xFFFF;
    do
    {
      v6 = j_DoorInfo::distanceToSqr(*(DoorInfo **)v2, v3);
      v8 = *(_DWORD *)v2;
      LODWORD(v2) = v2 + 4;
      v7 = v8;
      if ( v6 < v5 )
      {
        v4 = v7;
        v5 = v6;
      }
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
  }
  return v4;
}


char *__fastcall Village::getCenter(Village *this)
{
  return (char *)this + 56;
}


int __fastcall Village::resetNoBreedTimer(int result)
{
  *(_DWORD *)(result + 80) = *(_DWORD *)(result + 76);
  return result;
}


int __fastcall Village::getClosestDoorInfo(Village *this, int a2, int a3, int a4)
{
  int v4; // r4@1
  __int64 v5; // r6@1
  signed int v6; // r5@2
  int v7; // r0@3
  int v8; // r1@3
  int v9; // t1@3
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1

  v4 = 0;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v5 = *(_QWORD *)((char *)this + 4);
  if ( (_DWORD)v5 != HIDWORD(v5) )
  {
    v6 = 0xFFFF;
    do
    {
      v7 = j_DoorInfo::distanceToSqr(*(DoorInfo **)v5, (const BlockPos *)&v11);
      v9 = *(_DWORD *)v5;
      LODWORD(v5) = v5 + 4;
      v8 = v9;
      if ( v7 < v6 )
      {
        v4 = v8;
        v6 = v7;
      }
    }
    while ( HIDWORD(v5) != (_DWORD)v5 );
  }
  return v4;
}


signed int __fastcall Village::canSpawnAt(Village *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r8@1
  signed int v10; // r4@1
  Dimension *v11; // r0@1
  int v12; // r5@1
  int v13; // r3@4
  int v14; // r10@4
  int v15; // r11@4
  int v16; // r6@4
  int v17; // r4@5
  int v19; // [sp+8h] [bp-38h]@4
  unsigned __int8 v20; // [sp+14h] [bp-2Ch]@6
  unsigned __int8 v21; // [sp+18h] [bp-28h]@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = 0;
  v11 = (Dimension *)j_Level::getDimension(*(_DWORD *)this, 0);
  v12 = j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v11);
  j_BlockSource::getBlockID((BlockSource *)&v21, v12, v7, v9 - 1, v8);
  if ( Block::mSolid[v21] )
  {
    if ( a5 < 1 )
    {
      v10 = 1;
    }
    else if ( a6 < 1 )
    else
      v13 = a7;
      v14 = v8 - a7 / 2;
      v15 = v14 + a7;
      v16 = v7 - a5 / 2;
      v19 = a5 + v16;
      while ( 1 )
      {
        v17 = v9;
        if ( v13 > 0 )
          break;
LABEL_9:
        v13 = a7;
        ++v16;
        v10 = 1;
        if ( v16 >= v19 )
          return v10;
      }
        j_BlockSource::getBlockID((BlockSource *)&v20, v12, v16, v17, v14);
        v21 = v20;
        if ( Block::mSolid[v20] )
        if ( ++v14 >= v15 )
        {
          v14 = v8 - a7 / 2;
          if ( ++v17 >= a6 + v9 )
            goto LABEL_9;
        }
      v10 = 0;
  }
  return v10;
}


signed int __fastcall Village::canSpawnAt(Village *this, const BlockPos *a2, const BlockPos *a3)
{
  return j_Village::canSpawnAt(
           this,
           *(_QWORD *)a2,
           *(_QWORD *)a2 >> 32,
           *((_DWORD *)a2 + 2),
           *(_QWORD *)a3,
           *(_QWORD *)a3 >> 32,
           *((_DWORD *)a3 + 2));
}


DoorInfo *__fastcall Village::getBestDoorInfo(Village *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  Village *v3; // r5@1
  __int64 v4; // r6@1
  float v5; // r1@1
  float v6; // r1@1
  int v7; // r0@1
  DoorInfo *v8; // r4@1
  DoorInfo **v9; // r7@1
  DoorInfo **v10; // r9@1
  signed int v11; // r5@2
  DoorInfo *v12; // r6@3
  int v13; // r0@3
  int v14; // r0@4
  __int64 v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  LODWORD(v4) = j_mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  HIDWORD(v4) = j_mce::Math::floor(*((mce::Math **)v2 + 1), v5);
  v7 = j_mce::Math::floor(*((mce::Math **)v2 + 2), v6);
  v16 = v4;
  v8 = 0;
  v17 = v7;
  v10 = (DoorInfo **)(*(_QWORD *)((char *)v3 + 4) >> 32);
  v9 = (DoorInfo **)*(_QWORD *)((char *)v3 + 4);
  if ( v9 != v10 )
  {
    v11 = 0xFFFF;
    do
    {
      v12 = *v9;
      v13 = j_DoorInfo::distanceToSqr(*v9, (const BlockPos *)&v16);
      if ( v13 <= 256 )
        v14 = j_DoorInfo::getBookingsCount(v12);
      else
        v14 = 1000 * v13;
      ++v9;
      if ( v14 < v11 )
      {
        v8 = v12;
        v11 = v14;
      }
    }
    while ( v10 != v9 );
  }
  return v8;
}


int __fastcall Village::updateAggressors(Village *this)
{
  Village *v1; // r5@0
  Village *v2; // r11@1
  int result; // r0@1
  bool v4; // zf@1
  Village *v5; // r4@5
  int v6; // r0@6
  unsigned int v7; // r7@11
  int v8; // r10@11
  int v9; // r6@11
  Village *v10; // r8@11
  Village *v11; // r0@11
  Village *v12; // r4@12
  int v13; // r1@15
  Village *v14; // r9@18
  int v15; // r1@19
  Village *v16; // [sp+8h] [bp-28h]@4

  v2 = this;
  result = *((_DWORD *)this + 31);
  v4 = result == 0;
  if ( result )
  {
    v1 = (Village *)*((_DWORD *)v2 + 30);
    v4 = v1 == 0;
  }
  if ( !v4 )
    v16 = (Village *)((char *)v2 + 120);
    while ( 1 )
    {
      v6 = j_Level::fetchEntity(*(_DWORD *)v2, 0, *((_QWORD *)v1 + 1), *((_QWORD *)v1 + 1) >> 32, 0);
      if ( !v6 || (*(int (**)(void))(*(_DWORD *)v6 + 316))() != 1 )
        break;
      result = *((_DWORD *)v2 + 19) - *((_DWORD *)v1 + 4);
      if ( result < 0 )
        result = -result;
      if ( result > 300 )
      v5 = *(Village **)v1;
LABEL_25:
      v1 = v5;
      if ( !v5 )
        return result;
    }
    v7 = *((_QWORD *)v2 + 14) >> 32;
    v8 = *((_QWORD *)v2 + 14);
    v9 = *((_DWORD *)v1 + 6) % v7;
    v10 = *(Village **)(v8 + 4 * v9);
    v11 = *(Village **)(v8 + 4 * v9);
    do
      v12 = v11;
      v11 = *(Village **)v11;
    while ( v11 != v1 );
    if ( v10 != v12 )
      if ( *(_DWORD *)v1 )
      {
        v13 = *(_DWORD *)(*(_DWORD *)v1 + 24) % v7;
        if ( v13 != v9 )
          *(_DWORD *)(v8 + 4 * v13) = v12;
      }
      goto LABEL_24;
    v14 = *(Village **)v1;
    if ( *(_DWORD *)v1 )
      v15 = *((_DWORD *)v14 + 6) % v7;
      if ( v15 == v9 )
LABEL_24:
        *(_DWORD *)v12 = *(_DWORD *)v1;
        v5 = *(Village **)v1;
        j_operator delete((void *)v1);
        result = *((_DWORD *)v2 + 31) - 1;
        *((_DWORD *)v2 + 31) = result;
        goto LABEL_25;
      *(_DWORD *)(v8 + 4 * v15) = v10;
      v8 = *((_DWORD *)v2 + 28);
      v10 = *(Village **)(v8 + 4 * v9);
    if ( v16 == v10 )
      *(_DWORD *)v16 = v14;
    *(_DWORD *)(v8 + 4 * v9) = 0;
    goto LABEL_24;
  return result;
}


signed int __fastcall Village::isVillageDoor(Village *this, Level *a2, int a3, int a4, int a5)
{
  signed int v5; // r4@1
  Dimension *v6; // r0@1
  BlockSource *v7; // r0@2
  Block *v8; // r5@2
  int v9; // r1@2
  int *v10; // r0@3
  Level *v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v5 = 0;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v6 = (Dimension *)j_Level::getDimension((int)this, 0);
  if ( v6 )
  {
    v7 = (BlockSource *)j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v6);
    v8 = (Block *)j_BlockSource::getBlock(v7, (const BlockPos *)&v12);
    v5 = 0;
    if ( j_Block::hasProperty((int)v8, v9, 1024LL) == 1 )
    {
      v10 = (int *)j_Block::getMaterial(v8);
      v5 = j_Material::isType(v10, 2);
    }
  }
  return v5;
}


Entity *__fastcall Village::getClosestBadStandingPlayer(Village *this, Entity *a2)
{
  int v2; // r4@1
  __int64 v6; // kr00_8@3
  __int64 v7; // kr08_8@3
  unsigned int v8; // r5@3
  unsigned int v9; // r7@3
  int v10; // r0@3
  int v11; // r9@4
  int v12; // r8@4
  int v13; // r10@7
  Entity *v15; // r0@15
  Entity *v16; // r5@15
  Entity *v18; // r0@18
  const Entity *v20; // [sp+8h] [bp-40h]@2
  Entity *v21; // [sp+Ch] [bp-3Ch]@2
  Village *v22; // [sp+10h] [bp-38h]@1

  v2 = *((_DWORD *)this + 23);
  v22 = this;
  if ( v2 )
  {
    __asm { VLDR            S16, =3.4028e38 }
    v20 = a2;
    v21 = 0;
    do
    {
      v6 = *(_QWORD *)(v2 + 8);
      v7 = *(_QWORD *)((char *)v22 + 84);
      v8 = (v6 + ((HIDWORD(v6) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v6) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v6) - 1640531527);
      v9 = v8 % (unsigned int)(*(_QWORD *)((char *)v22 + 84) >> 32);
      v10 = *(_DWORD *)(v7 + 4 * v9);
      if ( v10 )
      {
        v11 = *(_DWORD *)v10;
        v12 = *(_DWORD *)(*(_DWORD *)v10 + 24);
        while ( v12 != v8 || *(_QWORD *)(v11 + 8) != v6 )
        {
          v13 = *(_DWORD *)v11;
          if ( *(_DWORD *)v11 )
          {
            v12 = *(_DWORD *)(v13 + 24);
            v10 = v11;
            v11 = *(_DWORD *)v11;
            if ( *(_DWORD *)(v13 + 24) % HIDWORD(v7) == v9 )
              continue;
          }
          goto LABEL_21;
        }
        _ZF = v10 == 0;
        if ( v10 )
          v10 = *(_DWORD *)v10;
          _ZF = v10 == 0;
        if ( !_ZF )
          if ( (unsigned __int8)((*(_DWORD *)(v10 + 16) + 15 < 0) ^ __OFADD__(*(_DWORD *)(v10 + 16), 15)) | (*(_DWORD *)(v10 + 16) == -15) )
            v15 = (Entity *)j_Level::getPlayer(*(_DWORD *)v22, 0, v6, HIDWORD(v6));
            v16 = v15;
            if ( v15 )
            {
              _R0 = j_Entity::distanceToSqr(v15, v20);
              __asm
              {
                VMOV            S0, R0
                VCMPE.F32       S0, S16
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                __asm { VMOVGT.F32      S0, S16 }
              v18 = v21;
              __asm { VMOV.F32        S16, S0 }
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                v18 = v16;
              v21 = v18;
            }
      }
LABEL_21:
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
  }
  else
  return v21;
}


void __fastcall Village::tick(Village *this, int a2)
{
  signed int v10; // r0@2
  Village *v11; // r7@2
  Dimension *v12; // r0@3
  int v13; // r0@3
  int v14; // r5@3
  unsigned __int64 *v17; // r0@3
  char *v21; // r0@6
  Dimension *v23; // r8@8
  void *v24; // r0@8
  void *v25; // r0@9
  void *v26; // r0@10
  void *v27; // r0@11
  void *v28; // r0@12
  void *v29; // r0@13
  int v30; // r6@15
  void (__fastcall *v31)(int, int, int *); // r5@15
  int v32; // r1@15
  int v33; // r0@15
  int v34; // r0@17
  unsigned int *v35; // r2@23
  signed int v36; // r1@25
  unsigned int *v37; // r2@27
  signed int v38; // r1@29
  unsigned int *v39; // r2@31
  signed int v40; // r1@33
  unsigned int *v41; // r2@35
  signed int v42; // r1@37
  unsigned int *v43; // r2@39
  signed int v44; // r1@41
  unsigned int *v45; // r2@43
  signed int v46; // r1@45
  int v47; // [sp+0h] [bp-78h]@0
  int v48; // [sp+4h] [bp-74h]@0
  int v49; // [sp+8h] [bp-70h]@0
  int v50; // [sp+Ch] [bp-6Ch]@15
  int v51; // [sp+14h] [bp-64h]@8
  int v52; // [sp+18h] [bp-60h]@8
  int v53; // [sp+20h] [bp-58h]@8
  int v54; // [sp+24h] [bp-54h]@8
  int v55; // [sp+28h] [bp-50h]@9
  int v56; // [sp+2Ch] [bp-4Ch]@8
  int v57; // [sp+30h] [bp-48h]@8
  int v58; // [sp+34h] [bp-44h]@7
  signed int v59; // [sp+38h] [bp-40h]@7
  signed int v60; // [sp+3Ch] [bp-3Ch]@7
  float v61; // [sp+40h] [bp-38h]@3

  _R5 = a2;
  _R4 = this;
  *((_DWORD *)this + 19) = a2;
  j_Village::updateDoors(this);
  j_Village::updateAggressors(_R4);
  _R0 = -2004318071;
  __asm { SMMLA.W         R0, R0, R5, R5 }
  if ( _R5 == 30 * (((signed int)_R0 >> 4) + (_R0 >> 31)) )
  {
    v12 = (Dimension *)j_Level::getDimension(*(_DWORD *)_R4, 0);
    v13 = j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v12);
    __asm
    {
      VLDR            S0, [R4,#0x38]
      VMOV.F32        S8, #-4.0
      VLDR            S2, [R4,#0x3C]
      VLDR            S4, [R4,#0x40]
    }
    v14 = v13;
      VLDR            S6, [R4,#0x44]
      VCVT.F32.S32    S6, S6
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VSUB.F32        S10, S0, S6
      VADD.F32        S8, S2, S8
      VSUB.F32        S12, S4, S6
      VADD.F32        S0, S6, S0
      VADD.F32        S4, S4, S6
      VMOV            R1, S10
      VMOV            R2, S8
      VMOV            R3, S12
      VMOV.F32        S8, #4.0
      VSTR            S0, [SP,#0x78+var_78]
      VADD.F32        S2, S2, S8
      VSTR            S2, [SP,#0x78+var_74]
      VSTR            S4, [SP,#0x78+var_70]
    j_AABB::AABB(COERCE_FLOAT(&v61), _R1, _R2, v47, v48, v49);
    v17 = (unsigned __int64 *)j_BlockSource::fetchEntities(v14, 788, (int)&v61, 0);
    v11 = (Village *)((char *)_R4 + 140);
    v10 = (signed int)((*v17 >> 32) - *v17) >> 2;
    *((_DWORD *)_R4 + 35) = v10;
  }
  else
    v10 = *((_DWORD *)_R4 + 35);
  _R1 = *((_DWORD *)_R4 + 7);
  _R2 = 1717986919;
  __asm { SMMUL.W         R1, R1, R2 }
  if ( v10 < (signed int)(((signed int)_R1 >> 2) + (_R1 >> 31))
    && (unsigned int)((signed int)((*(_QWORD *)((char *)_R4 + 4) >> 32) - *(_QWORD *)((char *)_R4 + 4)) >> 2) >= 0x15 )
    v21 = j_Level::getRandom(*(Level **)_R4);
    if ( !(j_Random::_genRandInt32((Random *)v21) % 0x1B58) )
      __asm
      {
        VLDR            S0, [R4,#0x3C]
        VLDR            S2, [R4,#0x40]
      }
      _R0 = *((_DWORD *)_R4 + 14);
        VMOV            S4, R0
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
      v58 = 2;
        VSTR            S4, [SP,#0x78+var_38]
        VSTR            S0, [SP,#0x78+var_34]
        VSTR            S2, [SP,#0x78+var_30]
      v59 = 4;
      v60 = 2;
      if ( j_Village::findRandomSpawnPos(_R4, (Vec3 *)&v61, (Village *)((char *)_R4 + 56), (const BlockPos *)&v58) == 1 )
        v23 = (Dimension *)j_Level::getDimension(*(_DWORD *)_R4, 0);
        sub_21E94B4((void **)&v53, "minecraft");
        j_EntityTypeToString((void **)&v52, 0x314u, 0);
        sub_21E94B4((void **)&v51, "minecraft:from_village");
        j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v54, &v53, &v52, &v51);
        j_EntityFactory::createSpawnedEntity((Entity **)&v57, (const void **)&v54, 0, (int)&v61, &Vec2::ZERO);
        v24 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
        {
          v35 = (unsigned int *)(v56 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          }
          else
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        }
        v25 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v55 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v26 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v54 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v51 - 12);
        if ( (int *)(v51 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v51 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v28 = (void *)(v52 - 12);
        if ( (int *)(v52 - 12) != &dword_28898C0 )
          v43 = (unsigned int *)(v52 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        v29 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v53 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        if ( v57 )
          v30 = *(_DWORD *)_R4;
          v31 = *(void (__fastcall **)(int, int, int *))(**(_DWORD **)_R4 + 44);
          v32 = j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v23);
          v33 = v57;
          v57 = 0;
          v50 = v33;
          v31(v30, v32, &v50);
          if ( v50 )
            (*(void (**)(void))(*(_DWORD *)v50 + 32))();
          v50 = 0;
          v34 = v57;
          _ZF = v57 == 0;
          ++*(_DWORD *)v11;
          if ( !_ZF )
            (*(void (**)(void))(*(_DWORD *)v34 + 32))();
        else
  if ( Village::DEBUG_DRAWING )
    j_Village::debugDraw(_R4);
}


int __fastcall Village::Village(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  double v5; // r0@4
  double v6; // r0@4
  int v7; // r6@6
  void *v8; // r5@6
  unsigned int v9; // r0@7
  int v10; // r6@9
  void *v11; // r5@9

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = HIDWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 32) = 1065353216;
  LODWORD(a1) += 32;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 20) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    v4 = (void *)(v1 + 40);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = j_operator new(4 * v2);
    j___aeabi_memclr4_0((int)v4, v3);
  *(_DWORD *)(v1 + 16) = v4;
  *(_DWORD *)(v1 + 92) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  j___aeabi_memclr4_0(v1 + 44, 40);
  *(_DWORD *)(v1 + 100) = 1065353216;
  LODWORD(v5) = v1 + 100;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v6 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v5)));
  *(_DWORD *)(v1 + 88) = LODWORD(v6);
  if ( LODWORD(v6) == 1 )
    *(_DWORD *)(v1 + 108) = 0;
    v8 = (void *)(v1 + 108);
    if ( LODWORD(v6) >= 0x40000000 )
    v7 = 4 * LODWORD(v6);
    v8 = j_operator new(4 * LODWORD(v6));
    j___aeabi_memclr4_0((int)v8, v7);
  *(_DWORD *)(v1 + 84) = v8;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_DWORD *)(v1 + 128) = 1065353216;
  LODWORD(v6) = v1 + 128;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v9 = sub_21E6254(v6);
  *(_DWORD *)(v1 + 116) = v9;
  if ( v9 == 1 )
    *(_DWORD *)(v1 + 136) = 0;
    v11 = (void *)(v1 + 136);
    if ( v9 >= 0x40000000 )
    v10 = 4 * v9;
    v11 = j_operator new(4 * v9);
    j___aeabi_memclr4_0((int)v11, v10);
  *(_DWORD *)(v1 + 112) = v11;
  *(_DWORD *)(v1 + 140) = 0;
  return v1;
}


char *__fastcall Village::getDoorInfos(Village *this)
{
  return (char *)this + 4;
}


signed int __fastcall Village::findRandomSpawnPos(Village *this, Vec3 *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v8; // r9@1
  const BlockPos *v9; // r10@1
  int v11; // r6@1
  char *v12; // r0@2
  char v13; // r11@2
  char *v14; // r0@2
  unsigned int v15; // kr00_4@2
  char *v16; // r0@2

  __asm { VMOV.F32        S16, #0.5 }
  v8 = a4;
  v9 = a3;
  _R7 = this;
  v11 = 0;
  while ( 1 )
  {
    v12 = j_Level::getRandom(*(Level **)_R7);
    v13 = j_Random::_genRandInt32((Random *)v12);
    v14 = j_Level::getRandom(*(Level **)_R7);
    v15 = j_Random::_genRandInt32((Random *)v14);
    v16 = j_Level::getRandom(*(Level **)_R7);
    _R1 = (j_Random::_genRandInt32((Random *)v16) & 0xF) + *(_DWORD *)v9 - 8;
    __asm { VMOV            S0, R1 }
    _R2 = v15 % 6 + *((_DWORD *)v9 + 1) - 3;
    __asm
    {
      VCVT.F32.S32    S18, S0
      VMOV            S0, R2
    }
    _R3 = (v13 & 0xF) + *((_DWORD *)v9 + 2) - 8;
      VCVT.F32.S32    S20, S0
      VLDR            S0, [R7,#0x38]
      VLDR            S2, [R7,#0x3C]
      VMOV            S6, R3
      VLDR            S4, [R7,#0x40]
      VCVT.F32.S32    S22, S6
      VCVT.F32.S32    S0, S0
      VSUB.F32        S6, S16, S18
      VCVT.F32.S32    S2, S2
      VSUB.F32        S8, S16, S20
      VCVT.F32.S32    S4, S4
      VSUB.F32        S10, S16, S22
    _R0 = *((_DWORD *)_R7 + 17) * *((_DWORD *)_R7 + 17);
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S10
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VMOV            S2, R0
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      if ( j_Village::canSpawnAt(_R7, _R1, _R2, _R3, *(_QWORD *)v8, *(_QWORD *)v8 >> 32, *((_DWORD *)v8 + 2)) == 1 )
        break;
    if ( ++v11 >= 10 )
      return 0;
  }
  __asm
    VSTR            S18, [R0]
    VSTR            S20, [R0,#4]
    VSTR            S22, [R0,#8]
  return 1;
}


void __fastcall Village::readAdditionalSaveData(Village *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r11@1
  Village *v3; // r10@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  ListTag *v15; // r6@12
  void *v16; // r0@12
  void **v17; // r7@15
  int v18; // r9@15
  const char *v19; // r5@15
  int v20; // r8@16
  __int64 v21; // r4@17
  int v22; // r0@17
  int v23; // r6@17
  DoorInfo *v24; // r7@17
  void *v25; // r0@17
  void *v26; // r0@18
  void *v27; // r0@19
  void *v28; // r0@20
  void *v29; // r0@21
  void *v30; // r0@22
  __int64 v31; // r0@23
  DoorInfo *v32; // r7@23
  void *v33; // r4@25
  char *v34; // r5@25
  unsigned int v35; // r2@25
  unsigned int v36; // r1@27
  unsigned int v37; // r6@27
  char *v38; // r7@34
  int v39; // r7@36
  int *v40; // r0@39
  void *v41; // r0@40
  unsigned int *v42; // r2@44
  signed int v43; // r1@46
  unsigned int *v44; // r2@48
  signed int v45; // r1@50
  unsigned int *v46; // r2@52
  signed int v47; // r1@54
  unsigned int *v48; // r2@56
  signed int v49; // r1@58
  unsigned int *v50; // r2@60
  signed int v51; // r1@62
  unsigned int *v52; // r2@64
  signed int v53; // r1@66
  int v54; // r0@93
  ListTag *v55; // r5@93
  void *v56; // r0@93
  void **v57; // r8@96
  void **v58; // r7@96
  int v59; // r6@96 OVERLAPPED
  unsigned int *v60; // r2@97
  signed int v61; // r1@99
  unsigned int *v62; // r2@101
  signed int v63; // r1@103
  int v64; // r4@113
  int v65; // r5@114
  __int64 v66; // r0@114
  __int64 v67; // kr08_8@114
  __int64 v68; // kr10_8@114
  unsigned int v69; // r7@114
  int v70; // r5@114
  int v71; // r0@114
  int v72; // r8@115
  int v73; // r6@115
  bool v74; // zf@116
  int v75; // r10@119
  bool v76; // zf@122
  _QWORD *v77; // r0@126
  void *v78; // r0@127
  void *v79; // r0@128
  ListTag *v80; // r5@131
  void *v81; // r0@131
  int v82; // r6@134
  unsigned int *v83; // r2@135
  signed int v84; // r1@137
  int v85; // r10@142
  void *v86; // r0@143
  unsigned int *v87; // r2@146
  signed int v88; // r1@148
  unsigned int *v89; // r2@150
  signed int v90; // r1@152
  unsigned int *v91; // r2@154
  signed int v92; // r1@156
  unsigned int *v93; // r2@158
  signed int v94; // r1@160
  unsigned int *v95; // r2@162
  signed int v96; // r1@164
  unsigned int *v97; // r2@166
  signed int v98; // r1@168
  unsigned int *v99; // r2@170
  signed int v100; // r1@172
  unsigned int *v101; // r2@174
  signed int v102; // r1@176
  unsigned int *v103; // r2@178
  signed int v104; // r1@180
  unsigned int *v105; // r2@182
  signed int v106; // r1@184
  unsigned int *v107; // r2@186
  signed int v108; // r1@188
  unsigned int *v109; // r2@190
  signed int v110; // r1@192
  unsigned int *v111; // r2@194
  signed int v112; // r1@196
  unsigned int *v113; // r2@246
  signed int v114; // r1@248
  int v115; // [sp+Ch] [bp-11Ch]@96
  ListTag *v116; // [sp+14h] [bp-114h]@93
  __int64 v117; // [sp+18h] [bp-110h]@114
  ListTag *v118; // [sp+1Ch] [bp-10Ch]@17
  Village *v119; // [sp+20h] [bp-108h]@93
  const CompoundTag *v120; // [sp+24h] [bp-104h]@1
  char v121; // [sp+28h] [bp-100h]@143
  int v122; // [sp+34h] [bp-F4h]@135
  __int64 v123; // [sp+38h] [bp-F0h]@143
  int v124; // [sp+44h] [bp-E4h]@131
  int v125; // [sp+4Ch] [bp-DCh]@96
  int v126; // [sp+54h] [bp-D4h]@96
  int v127; // [sp+5Ch] [bp-CCh]@93
  int v128; // [sp+64h] [bp-C4h]@17
  int v129; // [sp+6Ch] [bp-BCh]@17
  int v130; // [sp+74h] [bp-B4h]@17
  int v131; // [sp+7Ch] [bp-ACh]@17
  int v132; // [sp+84h] [bp-A4h]@17
  int v133; // [sp+8Ch] [bp-9Ch]@15
  __int64 v134; // [sp+90h] [bp-98h]@17
  int v135; // [sp+98h] [bp-90h]@17
  DoorInfo *v136; // [sp+9Ch] [bp-8Ch]@17
  int v137; // [sp+A4h] [bp-84h]@12
  int v138; // [sp+ACh] [bp-7Ch]@11
  int v139; // [sp+B4h] [bp-74h]@10
  int v140; // [sp+BCh] [bp-6Ch]@9
  int v141; // [sp+C4h] [bp-64h]@8
  int v142; // [sp+CCh] [bp-5Ch]@7
  int v143; // [sp+D4h] [bp-54h]@6
  int v144; // [sp+DCh] [bp-4Ch]@5
  int v145; // [sp+E4h] [bp-44h]@4
  int v146; // [sp+ECh] [bp-3Ch]@3
  int v147; // [sp+F4h] [bp-34h]@2
  int v148; // [sp+FCh] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  v120 = a2;
  sub_21E94B4((void **)&v148, "Radius");
  *((_DWORD *)v3 + 17) = j_CompoundTag::getInt((int)v2, (const void **)&v148);
  v4 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
  {
    v87 = (unsigned int *)(v148 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
    }
    else
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v147, "Golems");
  *((_DWORD *)v3 + 35) = j_CompoundTag::getInt((int)v2, (const void **)&v147);
  v5 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v147 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v146, "Stable");
  *((_DWORD *)v3 + 18) = j_CompoundTag::getInt((int)v2, (const void **)&v146);
  v6 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v146 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v145, "Tick");
  *((_DWORD *)v3 + 19) = j_CompoundTag::getInt((int)v2, (const void **)&v145);
  v7 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v145 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v144, "MTick");
  *((_DWORD *)v3 + 20) = j_CompoundTag::getInt((int)v2, (const void **)&v144);
  v8 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v144 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v143, "CX");
  *((_DWORD *)v3 + 14) = j_CompoundTag::getInt((int)v2, (const void **)&v143);
  v9 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v143 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v142, "CY");
  *((_DWORD *)v3 + 15) = j_CompoundTag::getInt((int)v2, (const void **)&v142);
  v10 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v142 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v141, "CZ");
  *((_DWORD *)v3 + 16) = j_CompoundTag::getInt((int)v2, (const void **)&v141);
  v11 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v141 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v140, "ACX");
  *((_DWORD *)v3 + 11) = j_CompoundTag::getInt((int)v2, (const void **)&v140);
  v12 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v140 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v139, "ACY");
  *((_DWORD *)v3 + 12) = j_CompoundTag::getInt((int)v2, (const void **)&v139);
  v13 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v139 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v138, "ACZ");
  *((_DWORD *)v3 + 13) = j_CompoundTag::getInt((int)v2, (const void **)&v138);
  v14 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v138 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v137, "Doors");
  v15 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&v137);
  v16 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v137 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( v15 && j_ListTag::size(v15) >= 1 )
    v17 = (void **)&v133;
    v18 = 0;
    v19 = "X";
    do
      v20 = j_ListTag::get(v15, v18);
      if ( (*(int (**)(void))(*(_DWORD *)v20 + 24))() == 10 )
      {
        sub_21E94B4(v17, v19);
        LODWORD(v21) = j_CompoundTag::getInt(v20, (const void **)v17);
        sub_21E94B4((void **)&v132, "Y");
        HIDWORD(v21) = j_CompoundTag::getInt(v20, (const void **)&v132);
        sub_21E94B4((void **)&v131, "Z");
        v22 = j_CompoundTag::getInt(v20, (const void **)&v131);
        v134 = v21;
        v135 = v22;
        sub_21E94B4((void **)&v130, "IDX");
        HIDWORD(v21) = j_CompoundTag::getInt(v20, (const void **)&v130);
        sub_21E94B4((void **)&v129, "IDZ");
        LODWORD(v21) = j_CompoundTag::getInt(v20, (const void **)&v129);
        sub_21E94B4((void **)&v128, "TS");
        v118 = v15;
        v120 = v2;
        v23 = j_CompoundTag::getInt(v20, (const void **)&v128);
        v24 = (DoorInfo *)j_operator new(0x2Cu);
        j_DoorInfo::DoorInfo((int)v24, (int)&v134, SHIDWORD(v21), v21, v23);
        v25 = (void *)(v128 - 12);
        v136 = v24;
        if ( (int *)(v128 - 12) != &dword_28898C0 )
        {
          v42 = (unsigned int *)(v128 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
          }
          else
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        }
        v26 = (void *)(v129 - 12);
        if ( (int *)(v129 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v129 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v130 - 12);
        if ( (int *)(v130 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v130 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v28 = (void *)(v131 - 12);
        if ( (int *)(v131 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v131 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        v29 = (void *)(v132 - 12);
        if ( (int *)(v132 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v132 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        v30 = (void *)(v133 - 12);
        if ( (int *)(v133 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v133 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        v31 = *((_QWORD *)v3 + 1);
        v32 = v136;
        if ( (_DWORD)v31 == HIDWORD(v31) )
          v33 = (void *)*((_DWORD *)v3 + 1);
          v34 = 0;
          v35 = ((signed int)v31 - (signed int)v33) >> 2;
          if ( !v35 )
            v35 = 1;
          HIDWORD(v31) = v35 + (((signed int)v31 - (signed int)v33) >> 2);
          v37 = v35 + (((signed int)v31 - (signed int)v33) >> 2);
          if ( 0 != HIDWORD(v31) >> 30 )
            v37 = 0x3FFFFFFF;
          if ( v36 < v35 )
          if ( v37 )
            if ( v37 >= 0x40000000 )
              sub_21E57F4();
            v34 = (char *)j_operator new(4 * v37);
            LODWORD(v31) = *(_QWORD *)((char *)v3 + 4) >> 32;
            v33 = (void *)*(_QWORD *)((char *)v3 + 4);
          *(_DWORD *)&v34[v31 - (_DWORD)v33] = v32;
          v38 = &v34[v31 - (_DWORD)v33];
          if ( ((signed int)v31 - (signed int)v33) >> 2 )
            j___aeabi_memmove4_0((int)v34, (int)v33);
          v39 = (int)(v38 + 4);
          if ( v33 )
            j_operator delete(v33);
          *((_DWORD *)v3 + 1) = v34;
          *((_DWORD *)v3 + 2) = v39;
          *((_DWORD *)v3 + 3) = &v34[4 * v37];
        else
          *(_DWORD *)v31 = v136;
          *((_DWORD *)v3 + 2) += 4;
        v40 = (int *)j_Level::getVillages(*(Level **)v3);
        j_Villages::insertDoorInfo(*v40, &v136);
        if ( v136 )
          v41 = (void *)j_DoorInfo::~DoorInfo(v136);
          j_operator delete(v41);
        v17 = (void **)&v133;
        v15 = v118;
        v19 = "X";
      }
      ++v18;
    while ( v18 < j_ListTag::size(v15) );
  sub_21E94B4((void **)&v127, "Players");
  v119 = v3;
  v54 = j_CompoundTag::getList((int)v2, (const void **)&v127);
  v55 = (ListTag *)v54;
  v116 = (ListTag *)v54;
  v56 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v127 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  if ( v55 && j_ListTag::size(v55) >= 1 )
    v57 = (void **)&v126;
    v58 = (void **)&v125;
    v59 = 0;
    v115 = (int)v3 + 84;
      v64 = j_ListTag::get(v55, v59);
      if ( (*(int (**)(void))(*(_DWORD *)v64 + 24))() == 10 )
        sub_21E94B4(v57, (const char *)&aCdefghjklmnopq[15]);
        v65 = j_CompoundTag::getInt(v64, (const void **)v57);
        sub_21E94B4(v58, "ID");
        v117 = *(_QWORD *)(&v59 - 1);
        v66 = j_CompoundTag::getInt64(v64, (const void **)v58);
        v67 = v66;
        v68 = *(_QWORD *)((char *)v119 + 84);
        v69 = (v66 + ((HIDWORD(v66) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v66) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v66) - 1640531527);
        v70 = v69 % (unsigned int)(*(_QWORD *)((char *)v119 + 84) >> 32);
        v71 = *(_DWORD *)(v68 + 4 * v70);
        if ( !v71 )
          goto LABEL_126;
        v72 = *(_DWORD *)v71;
        v73 = *(_DWORD *)(*(_DWORD *)v71 + 24);
        while ( 1 )
          v74 = v73 == v69;
          if ( v73 == v69 )
            v74 = *(_QWORD *)(v72 + 8) == v67;
          if ( v74 )
            break;
          v75 = *(_DWORD *)v72;
          if ( *(_DWORD *)v72 )
            v73 = *(_DWORD *)(v75 + 24);
            v71 = v72;
            v72 = *(_DWORD *)v72;
            if ( *(_DWORD *)(v75 + 24) % HIDWORD(v68) == v70 )
              continue;
        v76 = v71 == 0;
        if ( v71 )
          v71 = *(_DWORD *)v71;
          v76 = v71 == 0;
        if ( v76 )
LABEL_126:
          v77 = j_operator new(0x20u);
          *(_DWORD *)v77 = 0;
          v77[1] = v67;
          *((_DWORD *)v77 + 4) = 0;
          v71 = j_std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,int>,std::allocator<std::pair<EntityUniqueID const,int>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v115,
                  v70,
                  v69,
                  (int)v77);
        *(_DWORD *)(v71 + 16) = v117;
        v57 = (void **)&v126;
        v2 = v120;
        v78 = (void *)(v125 - 12);
        v55 = v116;
        v59 = HIDWORD(v117);
        if ( (int *)(v125 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v125 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j__ZdlPv_9(v78);
        v79 = (void *)(v126 - 12);
        if ( (int *)(v126 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v126 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v79);
        v58 = (void **)&v125;
      ++v59;
    while ( v59 < j_ListTag::size(v55) );
  sub_21E94B4((void **)&v124, "Villagers");
  v80 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&v124);
  v81 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v124 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  if ( v80 && j_ListTag::size(v80) >= 1 )
    v82 = 0;
      v85 = j_ListTag::get(v80, v82);
      if ( (*(int (**)(void))(*(_DWORD *)v85 + 24))() == 10 )
        sub_21E94B4((void **)&v122, "ID");
        v123 = j_CompoundTag::getInt64(v85, (const void **)&v122);
        j_std::_Hashtable<EntityUniqueID,EntityUniqueID,std::allocator<EntityUniqueID>,std::__detail::_Identity,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<EntityUniqueID>(
          &v121,
          (unsigned __int64 *)v119 + 2,
          &v123);
        v86 = (void *)(v122 - 12);
        if ( (int *)(v122 - 12) != &dword_28898C0 )
          v83 = (unsigned int *)(v122 - 4);
              v84 = __ldrex(v83);
            while ( __strex(v84 - 1, v83) );
            v84 = (*v83)--;
          if ( v84 <= 0 )
            j_j_j_j__ZdlPv_9(v86);
      ++v82;
    while ( v82 < j_ListTag::size(v80) );
}


DoorInfo *__fastcall Village::getBestDoorInfo(Village *this, const BlockPos *a2)
{
  DoorInfo **v2; // r7@1
  DoorInfo **v3; // r9@1
  const BlockPos *v4; // r8@1
  DoorInfo *v5; // r4@1
  signed int v6; // r5@2
  DoorInfo *v7; // r6@3
  int v8; // r0@3
  int v9; // r0@4

  v3 = (DoorInfo **)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (DoorInfo **)*(_QWORD *)((char *)this + 4);
  v4 = a2;
  v5 = 0;
  if ( v2 != v3 )
  {
    v6 = 0xFFFF;
    do
    {
      v7 = *v2;
      v8 = j_DoorInfo::distanceToSqr(*v2, v4);
      if ( v8 <= 256 )
        v9 = j_DoorInfo::getBookingsCount(v7);
      else
        v9 = 1000 * v8;
      ++v2;
      if ( v9 < v6 )
      {
        v5 = v7;
        v6 = v9;
      }
    }
    while ( v3 != v2 );
  }
  return v5;
}


int __fastcall Village::villagerLivesHere(int a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r11@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r5@2
  int v8; // r7@2
  bool v9; // zf@3
  int result; // r0@10

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (v2 + ((HIDWORD(v2) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v2) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 16) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_11;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 16);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == v2;
    if ( v9 )
      break;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v3 + 16);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 16) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  if ( v6 )
    result = *(_DWORD *)v6 != 0;
  else
LABEL_11:
    result = 0;
  return result;
}


Village *__fastcall Village::~Village(Village *this)
{
  Village *v1; // r4@1
  DoorInfo **v2; // r5@1 OVERLAPPED
  DoorInfo **v3; // r6@1 OVERLAPPED
  void *v4; // r0@3
  void *v5; // r5@4
  char *v6; // r0@5
  void *v7; // r0@8
  void *v8; // r5@9
  char *v9; // r0@10
  void *v10; // r0@13
  void *v11; // r5@14
  char *v12; // r0@15
  void *v13; // r0@18

  v1 = this;
  for ( *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4); v3 != v2; ++v2 )
    j_DoorInfo::setVillage(*v2, 0);
  v4 = (void *)*((_DWORD *)v1 + 30);
  if ( v4 )
  {
    do
    {
      v5 = *(void **)v4;
      j_operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 14), 4 * (*((_QWORD *)v1 + 14) >> 32));
  *((_DWORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 31) = 0;
  v6 = (char *)*((_DWORD *)v1 + 28);
  if ( v6 && (char *)v1 + 136 != v6 )
    j_operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 23);
  if ( v7 )
      v8 = *(void **)v7;
      j_operator delete(v7);
      v7 = v8;
    while ( v8 );
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 84), 4 * (*(_QWORD *)((char *)v1 + 84) >> 32));
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  v9 = (char *)*((_DWORD *)v1 + 21);
  if ( v9 && (char *)v1 + 108 != v9 )
    j_operator delete(v9);
  v10 = (void *)*((_DWORD *)v1 + 6);
  if ( v10 )
      v11 = *(void **)v10;
      j_operator delete(v10);
      v10 = v11;
    while ( v11 );
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 2), 4 * (*((_QWORD *)v1 + 2) >> 32));
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  v12 = (char *)*((_DWORD *)v1 + 4);
  if ( v12 && (char *)v1 + 40 != v12 )
    j_operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 1);
  if ( v13 )
    j_operator delete(v13);
  return v1;
}


signed int __fastcall Village::checkNeedMoreVillagers(Village *this)
{
  int v1; // r1@1
  signed int result; // r0@3
  signed int v3; // r3@4

  v1 = *((_DWORD *)this + 20);
  if ( v1 && *((_DWORD *)this + 19) - v1 < 3600 )
  {
    result = 0;
  }
  else
    v3 = *((_DWORD *)this + 7);
    _R0 = (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
    __asm { VMOV            S0, R0 }
    __asm
    {
      VCVT.F32.S32    S0, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    }
    if ( _R1 <= 3 )
      _R1 = 3;
    if ( v3 < _R1 )
      result = 1;
  return result;
}
