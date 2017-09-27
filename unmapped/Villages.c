

void __fastcall Villages::~Villages(Villages *this)
{
  Villages::~Villages(this);
}


signed int __fastcall Villages::hasDoorQuery(Villages *this, const BlockPos *a2)
{
  int v2; // r0@1
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  int v5; // r3@2
  bool v6; // zf@3
  signed int result; // r0@9

  v4 = *((_QWORD *)this + 2);
  v2 = *((_QWORD *)this + 2) >> 32;
  v3 = v4;
  if ( (_DWORD)v4 == v2 )
  {
LABEL_9:
    result = 0;
  }
  else
    v5 = *(_DWORD *)a2;
    while ( 1 )
    {
      v6 = *(_DWORD *)v3 == v5;
      if ( *(_DWORD *)v3 == v5 )
        v6 = *(_DWORD *)(v3 + 4) == *((_DWORD *)a2 + 1);
      if ( v6 && *(_DWORD *)(v3 + 8) == *((_DWORD *)a2 + 2) )
        break;
      v3 += 12;
      if ( v2 == v3 )
        goto LABEL_9;
    }
    result = 1;
  return result;
}


signed int __fastcall Villages::assignDoorOrCreateVillage(int a1, DoorInfo **a2)
{
  int v2; // r8@1
  DoorInfo **v3; // r5@1
  int i; // r7@1
  char *v5; // r6@4
  char *v6; // r0@4
  int v12; // r0@4
  char *v14; // r0@5
  DoorInfo **v15; // r0@5
  DoorInfo **v16; // r1@5
  DoorInfo *v17; // r2@5
  DoorInfo *v18; // r0@5
  void *v19; // r0@6
  double v21; // r0@8
  Village *v22; // r6@8
  char *v23; // r0@8
  DoorInfo **v24; // r0@8
  DoorInfo **v25; // r1@8
  DoorInfo *v26; // r2@8
  DoorInfo *v27; // r0@8
  void *v28; // r0@9
  __int64 v29; // kr00_8@10
  unsigned int v30; // r9@10
  int v31; // r6@10
  int *v32; // r0@10
  int v33; // r5@11
  _DWORD *v35; // r0@20
  unsigned int v36; // r2@20
  int v37; // r2@20
  int v38; // r5@21
  unsigned int *v39; // r1@22
  unsigned int v40; // r0@24
  unsigned int *v41; // r4@28
  unsigned int v42; // r0@30
  Village *v43; // r0@36
  unsigned int v44; // [sp+4h] [bp-34h]@10
  int v45; // [sp+8h] [bp-30h]@20
  Village *v46; // [sp+Ch] [bp-2Ch]@8

  v2 = a1;
  v3 = a2;
  for ( i = *(_DWORD *)(a1 + 76); i; i = *(_DWORD *)i )
  {
    v5 = j_Village::getCenter(*(Village **)(i + 4));
    v6 = j_DoorInfo::getPosition(*v3);
    _R1 = *(_QWORD *)v6;
    LODWORD(_R1) = *(_DWORD *)v5 - *(_QWORD *)v6;
    _R0 = *((_DWORD *)v5 + 2) - *((_DWORD *)v6 + 2);
    __asm { VMOV            S0, R1 }
    LODWORD(_R1) = *((_DWORD *)v5 + 1) - HIDWORD(_R1);
    __asm
    {
      VMOV            S4, R0
      VMOV            S2, R1
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S16, S0, S4
    }
    v12 = j_Village::getRadius(*(Village **)(i + 4));
      VCVTR.S32.F32   S0, S16
      VMOV            R1, S0
    if ( _R1 <= (v12 + 32) * (v12 + 32) )
      j_Village::addDoorInfo(*(Village **)(i + 4), *v3);
      v14 = j_DoorInfo::getPosition(*v3);
      v15 = (DoorInfo **)j_std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                           (unsigned __int64 *)(v2 + 96),
                           (int)v14);
      v16 = v15;
      v17 = *v3;
      *v3 = 0;
      v18 = *v15;
      *v16 = v17;
      if ( v18 )
      {
        v19 = (void *)j_DoorInfo::~DoorInfo(v18);
        j_operator delete(v19);
      }
      return 1;
  }
  LODWORD(v21) = j_operator new(0x90u);
  HIDWORD(v21) = *(_DWORD *)(v2 + 12);
  v22 = (Village *)LODWORD(v21);
  j_Village::Village(v21);
  v46 = v22;
  j_Village::addDoorInfo(v22, *v3);
  v23 = j_DoorInfo::getPosition(*v3);
  v24 = (DoorInfo **)j_std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (unsigned __int64 *)(v2 + 96),
                       (int)v23);
  v25 = v24;
  v26 = *v3;
  *v3 = 0;
  v27 = *v24;
  *v25 = v26;
  if ( v27 )
    v28 = (void *)j_DoorInfo::~DoorInfo(v27);
    j_operator delete(v28);
  j_std::__shared_ptr<Village,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Village,std::default_delete<Village>>(
    (int)&v44,
    (int *)&v46);
  v29 = *(_QWORD *)(v2 + 68);
  v30 = v44;
  v31 = v44 % (unsigned int)(*(_QWORD *)(v2 + 68) >> 32);
  v32 = *(int **)(v29 + 4 * v31);
  if ( !v32 )
    goto LABEL_20;
  v33 = *v32;
  while ( v44 != *(_DWORD *)(v33 + 4) )
    if ( *(_DWORD *)v33 )
      v32 = (int *)v33;
      v33 = *(_DWORD *)v33;
      if ( *(_DWORD *)(v29 + 4) % HIDWORD(v29) == v31 )
        continue;
  _ZF = v32 == 0;
  if ( v32 )
    _ZF = *v32 == 0;
  if ( _ZF )
LABEL_20:
    v35 = j_operator new(0xCu);
    v36 = v44;
    *v35 = 0;
    v35[1] = v36;
    v37 = v45;
    v45 = 0;
    v35[2] = v37;
    v44 = 0;
    j_std::_Hashtable<std::shared_ptr<Village>,std::shared_ptr<Village>,std::allocator<std::shared_ptr<Village>>,std::__detail::_Identity,std::equal_to<std::shared_ptr<Village>>,std::hash<std::shared_ptr<Village>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
      v2 + 68,
      v31,
      v30,
      (int)v35);
  v38 = v45;
  if ( v45 )
    v39 = (unsigned int *)(v45 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    else
      v40 = (*v39)--;
    if ( v40 == 1 )
      v41 = (unsigned int *)(v38 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
      if ( &pthread_create )
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      else
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
  *(_BYTE *)(v2 + 4) = 1;
  if ( v46 )
    v43 = j_Village::~Village(v46);
    j_operator delete((void *)v43);
  return 0;
}


void __fastcall Villages::~Villages(Villages *this)
{
  Villages *v1; // r0@1

  v1 = j_Villages::~Villages(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int *__fastcall Villages::removeDoorInfo(Villages *this, DoorInfo *a2)
{
  Villages *v2; // r4@1
  char *v3; // r0@1
  __int64 v4; // r10@1
  unsigned int v5; // r5@1
  unsigned int v6; // r6@1
  int v7; // r7@1
  int *result; // r0@1
  int v9; // r9@2
  int v10; // r4@2
  int v11; // r1@4
  bool v12; // zf@4
  int v13; // r8@9
  bool v14; // zf@12
  int v15; // r1@15
  _DWORD *v16; // r0@15
  _DWORD *v17; // r2@16
  int v18; // [sp+0h] [bp-30h]@1
  int v19; // [sp+4h] [bp-2Ch]@1
  int v20; // [sp+8h] [bp-28h]@1

  v2 = this;
  v3 = j_DoorInfo::getPosition(a2);
  v4 = *(_QWORD *)v3;
  v20 = *((_DWORD *)v3 + 2);
  v18 = *((_DWORD *)v2 + 24);
  v19 = (int)v2 + 96;
  v5 = *((_DWORD *)v2 + 25);
  v6 = 8976890 * *(_QWORD *)v3 + 981131 * (*(_QWORD *)v3 >> 32) + v20;
  v7 = v6 % *((_DWORD *)v2 + 25);
  result = *(int **)(*((_DWORD *)v2 + 24) + 4 * v7);
  if ( result )
  {
    v9 = *result;
    v10 = *(_DWORD *)(*result + 20);
    while ( 1 )
    {
      if ( v10 == v6 )
      {
        v11 = *(_DWORD *)(v9 + 4);
        v12 = (_DWORD)v4 == v11;
        if ( (_DWORD)v4 == v11 )
          v12 = HIDWORD(v4) == *(_DWORD *)(v9 + 8);
        if ( v12 && v20 == *(_DWORD *)(v9 + 12) )
          break;
      }
      v13 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
        v10 = *(_DWORD *)(v13 + 20);
        result = (int *)v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v13 + 20) % v5 == v7 )
          continue;
      return result;
    }
    v14 = result == 0;
    if ( result )
      v6 = *result;
      v14 = *result == 0;
    if ( !v14 )
      v15 = *(_DWORD *)(v6 + 20) % v5;
      v16 = *(_DWORD **)(v18 + 4 * v15);
      do
        v17 = v16;
        v16 = (_DWORD *)*v16;
      while ( v16 != (_DWORD *)v6 );
      result = (int *)j_j_j__ZNSt10_HashtableI8BlockPosSt4pairIKS0_St10unique_ptrI8DoorInfoSt14default_deleteIS4_EEESaIS8_ENSt8__detail10_Select1stESt8equal_toIS0_ESt4hashIS0_ENSA_18_Mod_range_hashingENSA_20_Default_ranged_hashENSA_20_Prime_rehash_policyENSA_17_Hashtable_traitsILb1ELb0ELb1EEEE8_M_eraseEjPNSA_15_Hash_node_baseEPNSA_10_Hash_nodeIS8_Lb1EEE(
                        v19,
                        v15,
                        v17,
                        v6);
  }
  return result;
}


signed int __fastcall Villages::createDoorInfo(Villages *this, const BlockPos *a2, const BlockPos *a3)
{
  Villages *v3; // r4@1
  const BlockPos *v4; // r5@1
  signed int result; // r0@1
  Dimension *v6; // r0@2
  BlockSource *v7; // r6@2
  int v8; // r1@3
  int v9; // r2@3
  signed int v10; // ST18_4@3
  int v11; // r1@3
  int v12; // r2@3
  int v13; // r1@3
  int v14; // r2@3
  int v15; // r1@3
  int v16; // r2@3
  int v17; // r1@3
  int v18; // r2@3
  int v19; // r1@3
  int v20; // r2@3
  signed int v21; // r9@3
  int v22; // r1@3
  int v23; // r2@3
  signed int v24; // r10@3
  int v25; // r1@3
  int v26; // r2@3
  signed int v27; // r8@3
  int v28; // r1@3
  int v29; // r2@3
  signed int v30; // r0@3
  int v31; // r2@3
  int v32; // r3@3
  signed int v33; // r1@3
  DoorInfo *v40; // r6@24
  int v41; // r2@24
  __int64 v42; // r0@26
  int v43; // r2@28
  signed int v44; // ST18_4@28
  int v45; // r2@28
  int v46; // r2@28
  int v47; // r2@28
  int v48; // r2@28
  int v49; // r2@28
  signed int v50; // r9@28
  int v51; // r2@28
  signed int v52; // r10@28
  int v53; // r2@28
  signed int v54; // r8@28
  int v55; // r2@28
  signed int v56; // r0@28
  __int64 v57; // r1@28
  int v58; // r3@28
  signed int v60; // r1@28
  DoorInfo *v62; // r6@49
  int v63; // r3@49
  __int64 v64; // r0@51
  void *v65; // r0@54
  void *v66; // r0@57
  signed int v67; // [sp+8h] [bp-70h]@3
  signed int v68; // [sp+8h] [bp-70h]@28
  signed int v69; // [sp+Ch] [bp-6Ch]@3
  signed int v70; // [sp+Ch] [bp-6Ch]@28
  signed int v71; // [sp+10h] [bp-68h]@3
  signed int v72; // [sp+10h] [bp-68h]@28
  signed int v73; // [sp+14h] [bp-64h]@3
  signed int v74; // [sp+14h] [bp-64h]@28
  DoorInfo *v75; // [sp+1Ch] [bp-5Ch]@51
  __int64 v76; // [sp+20h] [bp-58h]@28
  int v77; // [sp+28h] [bp-50h]@28
  __int64 v78; // [sp+2Ch] [bp-4Ch]@28
  int v79; // [sp+34h] [bp-44h]@28
  DoorInfo *v80; // [sp+38h] [bp-40h]@26
  int v81; // [sp+3Ch] [bp-3Ch]@3
  int v82; // [sp+40h] [bp-38h]@3
  int v83; // [sp+44h] [bp-34h]@3
  int v84; // [sp+48h] [bp-30h]@3
  int v85; // [sp+4Ch] [bp-2Ch]@3
  int v86; // [sp+50h] [bp-28h]@3

  v3 = this;
  v4 = a2;
  result = j_Village::isVillageDoor(*((Village **)this + 3), a2, a3);
  if ( result == 1 )
  {
    v6 = (Dimension *)j_Level::getDimension(*((_DWORD *)v3 + 3), 0);
    v7 = (BlockSource *)j_Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v6);
    if ( (j_DoorBlock::getDir((DoorBlock *)Block::mWoodenDoor, v7, v4) | 2) == 2 )
    {
      v8 = *((_DWORD *)v4 + 1);
      v9 = *((_DWORD *)v4 + 2);
      v84 = *(_DWORD *)v4 - 5;
      v85 = v8;
      v86 = v9;
      v10 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v84);
      v11 = *((_DWORD *)v4 + 1);
      v12 = *((_DWORD *)v4 + 2);
      v84 = *(_DWORD *)v4 - 4;
      v85 = v11;
      v86 = v12;
      v73 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v84);
      v13 = *((_DWORD *)v4 + 1);
      v14 = *((_DWORD *)v4 + 2);
      v84 = *(_DWORD *)v4 - 3;
      v85 = v13;
      v86 = v14;
      v71 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v84);
      v15 = *((_DWORD *)v4 + 1);
      v16 = *((_DWORD *)v4 + 2);
      v84 = *(_DWORD *)v4 - 2;
      v85 = v15;
      v86 = v16;
      v69 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v84);
      v17 = *((_DWORD *)v4 + 1);
      v18 = *((_DWORD *)v4 + 2);
      v84 = *(_DWORD *)v4 - 1;
      v85 = v17;
      v86 = v18;
      v67 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v84);
      v19 = *((_DWORD *)v4 + 1);
      v20 = *((_DWORD *)v4 + 2);
      v81 = *(_DWORD *)v4 + 1;
      v82 = v19;
      v83 = v20;
      v21 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v81);
      v22 = *((_DWORD *)v4 + 1);
      v23 = *((_DWORD *)v4 + 2);
      v81 = *(_DWORD *)v4 + 2;
      v82 = v22;
      v83 = v23;
      v24 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v81);
      v25 = *((_DWORD *)v4 + 1);
      v26 = *((_DWORD *)v4 + 2);
      v81 = *(_DWORD *)v4 + 3;
      v82 = v25;
      v83 = v26;
      v27 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v81);
      v28 = *((_DWORD *)v4 + 1);
      v29 = *((_DWORD *)v4 + 2);
      v81 = *(_DWORD *)v4 + 4;
      v82 = v28;
      v83 = v29;
      v30 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v81);
      v31 = *((_DWORD *)v4 + 1);
      v32 = *((_DWORD *)v4 + 2);
      v81 = *(_DWORD *)v4 + 5;
      v82 = v31;
      v83 = v32;
      v33 = -1;
      _R2 = v10;
      if ( v10 )
        v33 = -2;
      __asm { SBFX.W          R7, R2, #0, #1 }
      if ( v73 )
        _R7 = v33;
      if ( v71 )
        --_R7;
      if ( v69 )
      if ( v67 )
      if ( v21 )
        ++_R7;
      if ( v24 )
      if ( v27 )
      if ( v30 )
      result = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v81);
      if ( result )
      if ( _R7 )
      {
        v40 = (DoorInfo *)j_operator new(0x2Cu);
        v41 = 2;
        if ( _R7 > 0 )
          v41 = -2;
        j_DoorInfo::DoorInfo((int)v40, (int)v4, v41, 0, *((_DWORD *)v3 + 31));
        v80 = v40;
        v42 = *(_QWORD *)((char *)v3 + 60);
        if ( (_DWORD)v42 == HIDWORD(v42) )
        {
          j_std::vector<std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>,std::allocator<std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>>::_M_emplace_back_aux<std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>(
            (_QWORD *)v3 + 7,
            (int *)&v80);
          if ( v80 )
          {
            v65 = (void *)j_DoorInfo::~DoorInfo(v80);
            j_operator delete(v65);
          }
        }
        else
          v80 = 0;
          *(_DWORD *)v42 = v40;
          *((_DWORD *)v3 + 15) = v42 + 4;
        result = 0;
        v80 = 0;
      }
    }
    else
      v43 = *((_DWORD *)v4 + 2);
      v78 = *(_QWORD *)v4;
      v79 = v43 - 5;
      v44 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v78);
      v45 = *((_DWORD *)v4 + 2);
      v79 = v45 - 4;
      v74 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v78);
      v46 = *((_DWORD *)v4 + 2);
      v79 = v46 - 3;
      v72 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v78);
      v47 = *((_DWORD *)v4 + 2);
      v79 = v47 - 2;
      v70 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v78);
      v48 = *((_DWORD *)v4 + 2);
      v79 = v48 - 1;
      v68 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v78);
      v49 = *((_DWORD *)v4 + 2);
      v76 = *(_QWORD *)v4;
      v77 = v49 + 1;
      v50 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v76);
      v51 = *((_DWORD *)v4 + 2);
      v77 = v51 + 2;
      v52 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v76);
      v53 = *((_DWORD *)v4 + 2);
      v77 = v53 + 3;
      v54 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v76);
      v55 = *((_DWORD *)v4 + 2);
      v77 = v55 + 4;
      v56 = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v76);
      LODWORD(v57) = *(_DWORD *)v4;
      HIDWORD(v57) = *((_DWORD *)v4 + 1);
      v58 = *((_DWORD *)v4 + 2);
      v76 = v57;
      _R2 = v44;
      v77 = v58 + 5;
      v60 = -1;
      if ( v44 )
        v60 = -2;
      if ( v74 )
        _R7 = v60;
      if ( v72 )
      if ( v70 )
      if ( v68 )
      if ( v50 )
      if ( v52 )
      if ( v54 )
      if ( v56 )
      result = j_BlockSource::canSeeSky(v7, (const BlockPos *)&v76);
        v62 = (DoorInfo *)j_operator new(0x2Cu);
        v63 = 2;
          v63 = -2;
        j_DoorInfo::DoorInfo((int)v62, (int)v4, 0, v63, *((_DWORD *)v3 + 31));
        v75 = v62;
        v64 = *(_QWORD *)((char *)v3 + 60);
        if ( (_DWORD)v64 == HIDWORD(v64) )
            (int *)&v75);
          if ( v75 )
            v66 = (void *)j_DoorInfo::~DoorInfo(v75);
            j_operator delete(v66);
          v75 = 0;
          *(_DWORD *)v64 = v62;
          *((_DWORD *)v3 + 15) = v64 + 4;
  }
  return result;
}


void __fastcall Villages::insertDoorInfo(int a1, DoorInfo **a2)
{
  Villages::insertDoorInfo(a1, a2);
}


Villages *__fastcall Villages::~Villages(Villages *this)
{
  Villages *v1; // r8@1
  __int64 v2; // r4@1
  DoorInfo **v3; // r7@2
  void *v4; // r0@4
  int v5; // r7@6
  void *v6; // r5@7
  int v7; // r4@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r6@14
  unsigned int v11; // r0@16
  int v12; // r5@22
  DoorInfo *v13; // r0@23
  int v14; // r6@23
  void *v15; // r0@24
  char *v16; // r0@26
  int v17; // r7@29
  void *v18; // r5@30
  int v19; // r4@30
  unsigned int *v20; // r1@31
  unsigned int v21; // r0@33
  unsigned int *v22; // r6@37
  unsigned int v23; // r0@39
  char *v24; // r0@45
  DoorInfo **v25; // r4@48
  DoorInfo **v26; // r5@48
  void *v27; // r0@50
  void *v28; // r0@55
  void *v29; // r4@56
  char *v30; // r0@57
  void *v31; // r0@60
  int v32; // r1@62
  void *v33; // r0@62
  unsigned int *v35; // r2@64
  signed int v36; // r1@66

  v1 = this;
  *(_DWORD *)this = &off_271B2A8;
  v2 = *((_QWORD *)this + 7);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (DoorInfo **)v2;
    do
    {
      if ( *v3 )
      {
        v4 = (void *)j_DoorInfo::~DoorInfo(*v3);
        j_operator delete(v4);
      }
      *v3 = 0;
      ++v3;
    }
    while ( (DoorInfo **)HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 15) = v2;
  v5 = *((_DWORD *)v1 + 19);
  while ( v5 )
    v6 = (void *)v5;
    v7 = *(_DWORD *)(v5 + 8);
    v5 = *(_DWORD *)v5;
    if ( v7 )
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    j_operator delete(v6);
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 68), 4 * (*(_QWORD *)((char *)v1 + 68) >> 32));
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  v12 = *((_DWORD *)v1 + 26);
  if ( v12 )
      v13 = *(DoorInfo **)(v12 + 16);
      v14 = *(_DWORD *)v12;
      if ( v13 )
        v15 = (void *)j_DoorInfo::~DoorInfo(v13);
        j_operator delete(v15);
      j_operator delete((void *)v12);
      v12 = v14;
    while ( v14 );
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 12), 4 * (*((_QWORD *)v1 + 12) >> 32));
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 27) = 0;
  v16 = (char *)*((_DWORD *)v1 + 24);
  if ( v16 && (char *)v1 + 120 != v16 )
    j_operator delete(v16);
  v17 = *((_DWORD *)v1 + 19);
  while ( v17 )
    v18 = (void *)v17;
    v19 = *(_DWORD *)(v17 + 8);
    v17 = *(_DWORD *)v17;
    if ( v19 )
      v20 = (unsigned int *)(v19 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
    j_operator delete(v18);
  v24 = (char *)*((_DWORD *)v1 + 17);
  if ( v24 && (char *)v1 + 92 != v24 )
    j_operator delete(v24);
  v25 = (DoorInfo **)(*((_QWORD *)v1 + 7) >> 32);
  v26 = (DoorInfo **)*((_QWORD *)v1 + 7);
  if ( v26 != v25 )
      if ( *v26 )
        v27 = (void *)j_DoorInfo::~DoorInfo(*v26);
        j_operator delete(v27);
      *v26 = 0;
      ++v26;
    while ( v25 != v26 );
    v26 = (DoorInfo **)*((_DWORD *)v1 + 14);
  if ( v26 )
    j_operator delete(v26);
  v28 = (void *)*((_DWORD *)v1 + 9);
  if ( v28 )
      v29 = *(void **)v28;
      j_operator delete(v28);
      v28 = v29;
    while ( v29 );
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v30 = (char *)*((_DWORD *)v1 + 7);
  if ( v30 && (char *)v1 + 52 != v30 )
    j_operator delete(v30);
  v31 = (void *)*((_DWORD *)v1 + 4);
  if ( v31 )
    j_operator delete(v31);
  *(_DWORD *)v1 = &off_271859C;
  v32 = *((_DWORD *)v1 + 2);
  v33 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  return v1;
}


unsigned int __fastcall Villages::tick(Villages *this)
{
  Villages *v1; // r8@1
  const BlockPos *v2; // r2@1
  int i; // r4@2
  int v4; // r5@5
  int v5; // r1@7
  _DWORD *v6; // r0@7
  _DWORD *v7; // r2@8
  __int64 v8; // kr08_8@12
  DoorInfo **v9; // r5@14 OVERLAPPED
  DoorInfo **v10; // r6@14 OVERLAPPED
  int v11; // r7@15
  unsigned int v12; // r4@15
  DoorInfo **v13; // r7@18
  void *v14; // r0@20
  unsigned int result; // r0@22

  v1 = this;
  ++*((_DWORD *)this + 31);
  if ( j_Level::getDimension(*((_DWORD *)this + 3), 0) )
  {
    for ( i = *((_DWORD *)v1 + 19); i; i = *(_DWORD *)i )
      j_Village::tick(*(Village **)(i + 4), *((_DWORD *)v1 + 31));
  }
  v4 = *((_DWORD *)v1 + 19);
  while ( v4 )
    if ( j_Village::canRemove(*(Village **)(v4 + 4)) == 1 )
    {
      v5 = *(_DWORD *)(v4 + 4) % (unsigned int)(*(_QWORD *)((char *)v1 + 68) >> 32);
      v6 = *(_DWORD **)(*(_QWORD *)((char *)v1 + 68) + 4 * v5);
      do
      {
        v7 = v6;
        v6 = (_DWORD *)*v6;
      }
      while ( v6 != (_DWORD *)v4 );
      v4 = j_std::_Hashtable<std::shared_ptr<Village>,std::shared_ptr<Village>,std::allocator<std::shared_ptr<Village>>,std::__detail::_Identity,std::equal_to<std::shared_ptr<Village>>,std::hash<std::shared_ptr<Village>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(
             (int)v1 + 68,
             v5,
             v7,
             v4);
      *((_BYTE *)v1 + 4) = 1;
    }
    else
      v4 = *(_DWORD *)v4;
  v8 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v8 != HIDWORD(v8) )
    j_Villages::addDoorInfoWithinRadius(v1, (BlockPos *)(HIDWORD(v8) - 12), v2);
    *((_DWORD *)v1 + 5) -= 12;
  j_Villages::processNextVillageQuery(v1);
  *(_QWORD *)&v9 = *((_QWORD *)v1 + 7);
  if ( v10 != v9 )
    v11 = 0;
    v12 = 0;
    do
      j_Villages::assignDoorOrCreateVillage((int)v1, &v9[v11]);
      *(_QWORD *)&v9 = *((_QWORD *)v1 + 7);
      ++v11;
      ++v12;
    while ( v12 < v10 - v9 );
    v13 = v9;
      if ( *v13 )
        v14 = (void *)j_DoorInfo::~DoorInfo(*v13);
        j_operator delete(v14);
      *v13 = 0;
      ++v13;
    while ( v10 != v13 );
  *((_DWORD *)v1 + 15) = v9;
  _R1 = 1374389535;
  _R0 = *((_DWORD *)v1 + 31);
  __asm { SMMUL.W         R1, R0, R1 }
  result = _R0 - 400 * (((signed int)_R1 >> 7) + (_R1 >> 31));
  if ( !result )
    result = 1;
    *((_BYTE *)v1 + 4) = 1;
  return result;
}


int __fastcall Villages::setLevel(int result, Level *a2)
{
  int v2; // r4@1
  int v3; // r5@1
  Village *v4; // r0@2

  v2 = result;
  *(_DWORD *)(result + 12) = a2;
  v3 = *(_DWORD *)(result + 76);
  if ( v3 )
  {
    v4 = *(Village **)(v3 + 4);
    while ( 1 )
    {
      result = j_Village::setLevel(v4, a2);
      v3 = *(_DWORD *)v3;
      if ( !v3 )
        break;
      v4 = *(Village **)(v3 + 4);
      a2 = *(Level **)(v2 + 12);
    }
  }
  return result;
}


int __fastcall Villages::Villages(int a1, int *a2)
{
  int v2; // r4@1
  double v3; // r0@1
  double v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3
  double v7; // r0@4
  int v8; // r6@6
  void *v9; // r5@6
  unsigned int v10; // r0@7
  int v11; // r6@9
  void *v12; // r5@9

  v2 = a1;
  *(_DWORD *)a1 = &off_271859C;
  sub_21E8AF4((int *)(a1 + 8), a2);
  *(_DWORD *)v2 = &off_271B2A8;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 44) = 1065353216;
  LODWORD(v3) = v2 + 44;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v3)));
  *(_DWORD *)(v2 + 32) = LODWORD(v4);
  if ( LODWORD(v4) == 1 )
  {
    *(_DWORD *)(v2 + 52) = 0;
    v6 = (void *)(v2 + 52);
  }
  else
    if ( LODWORD(v4) >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * LODWORD(v4);
    v6 = j_operator new(4 * LODWORD(v4));
    j___aeabi_memclr4_0((int)v6, v5);
  *(_DWORD *)(v2 + 28) = v6;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 76) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 84) = 1065353216;
  LODWORD(v4) = v2 + 84;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v7 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v4)));
  *(_DWORD *)(v2 + 72) = LODWORD(v7);
  if ( LODWORD(v7) == 1 )
    *(_DWORD *)(v2 + 92) = 0;
    v9 = (void *)(v2 + 92);
    if ( LODWORD(v7) >= 0x40000000 )
    v8 = 4 * LODWORD(v7);
    v9 = j_operator new(4 * LODWORD(v7));
    j___aeabi_memclr4_0((int)v9, v8);
  *(_DWORD *)(v2 + 68) = v9;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 112) = 1065353216;
  LODWORD(v7) = v2 + 112;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  v10 = sub_21E6254(v7);
  *(_DWORD *)(v2 + 100) = v10;
  if ( v10 == 1 )
    *(_DWORD *)(v2 + 120) = 0;
    v12 = (void *)(v2 + 120);
    if ( v10 >= 0x40000000 )
    v11 = 4 * v10;
    v12 = j_operator new(4 * v10);
    j___aeabi_memclr4_0((int)v12, v11);
  *(_DWORD *)(v2 + 96) = v12;
  *(_DWORD *)(v2 + 124) = 0;
  return v2;
}


void __fastcall Villages::serialize(Villages *this, CompoundTag *a2)
{
  Villages::serialize(this, a2);
}


int __fastcall Villages::Villages(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  double v4; // r0@1
  double v5; // r0@1
  int v6; // r6@3
  void *v7; // r5@3
  double v8; // r0@4
  int v9; // r6@6
  void *v10; // r5@6
  unsigned int v11; // r0@7
  int v12; // r6@9
  void *v13; // r5@9

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_271859C;
  sub_21E8AF4((int *)(a1 + 8), (int *)&Villages::VILLAGE_FILE_ID);
  *(_DWORD *)v2 = &off_271B2A8;
  *(_DWORD *)(v2 + 12) = v3;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 1065353216;
  LODWORD(v4) = v2 + 44;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v5 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v4)));
  *(_DWORD *)(v2 + 32) = LODWORD(v5);
  if ( LODWORD(v5) == 1 )
  {
    *(_DWORD *)(v2 + 52) = 0;
    v7 = (void *)(v2 + 52);
  }
  else
    if ( LODWORD(v5) >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * LODWORD(v5);
    v7 = j_operator new(4 * LODWORD(v5));
    j___aeabi_memclr4_0((int)v7, v6);
  *(_DWORD *)(v2 + 28) = v7;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 76) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 84) = 1065353216;
  LODWORD(v5) = v2 + 84;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v8 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v5)));
  *(_DWORD *)(v2 + 72) = LODWORD(v8);
  if ( LODWORD(v8) == 1 )
    *(_DWORD *)(v2 + 92) = 0;
    v10 = (void *)(v2 + 92);
    if ( LODWORD(v8) >= 0x40000000 )
    v9 = 4 * LODWORD(v8);
    v10 = j_operator new(4 * LODWORD(v8));
    j___aeabi_memclr4_0((int)v10, v9);
  *(_DWORD *)(v2 + 68) = v10;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 112) = 1065353216;
  LODWORD(v8) = v2 + 112;
  *(_DWORD *)(LODWORD(v8) + 4) = 0;
  v11 = sub_21E6254(v8);
  *(_DWORD *)(v2 + 100) = v11;
  if ( v11 == 1 )
    *(_DWORD *)(v2 + 120) = 0;
    v13 = (void *)(v2 + 120);
    if ( v11 >= 0x40000000 )
    v12 = 4 * v11;
    v13 = j_operator new(4 * v11);
    j___aeabi_memclr4_0((int)v13, v12);
  *(_DWORD *)(v2 + 96) = v13;
  *(_DWORD *)(v2 + 124) = 0;
  *(_BYTE *)(v2 + 4) = 1;
  return v2;
}


int __fastcall Villages::addDoorInfoWithinRadius(Villages *this, BlockPos *a2, const BlockPos *a3)
{
  BlockPos *v3; // r10@1
  Villages *v4; // r5@1
  int result; // r0@1
  int v6; // r7@1
  int v7; // r1@2
  int v8; // r6@2
  int v9; // r4@3
  Village *v10; // r0@5
  DoorInfo *v11; // r0@6
  const BlockPos *v12; // r2@6
  bool v13; // nf@10
  unsigned __int8 v14; // vf@10
  int v15; // r1@11
  int v16; // [sp+0h] [bp-38h]@5
  int v17; // [sp+4h] [bp-34h]@5
  int v18; // [sp+8h] [bp-30h]@5
  int v19; // [sp+Ch] [bp-2Ch]@4
  const BlockPos *v20; // [sp+10h] [bp-28h]@4
  int v21; // [sp+14h] [bp-24h]@4

  v3 = a2;
  v4 = this;
  result = *(_QWORD *)a2 >> 32;
  v6 = *(_QWORD *)a2 - 16;
  do
  {
    v7 = *((_DWORD *)v3 + 2);
    v8 = result - 4;
    do
    {
      v9 = v7 - 17;
      do
      {
        v19 = v6;
        v20 = (const BlockPos *)v8;
        v21 = ++v9;
        if ( j_Village::isVillageDoor(*((Village **)v4 + 3), (Level *)&v19, a3) == 1 )
        {
          v10 = (Village *)*((_DWORD *)v4 + 3);
          v16 = v19;
          v17 = (int)v20 - 1;
          v18 = v21;
          if ( !j_Village::isVillageDoor(v10, (Level *)&v16, v20) )
          {
            v11 = (DoorInfo *)j_Villages::getDoorInfo(v4, (const BlockPos *)&v19);
            if ( v11 )
              j_DoorInfo::setTimeStamp(v11, *((_DWORD *)v4 + 31));
            else
              j_Villages::createDoorInfo(v4, (const BlockPos *)&v19, v12);
          }
        }
        v7 = *((_DWORD *)v3 + 2);
      }
      while ( v9 < v7 + 15 );
      result = *((_DWORD *)v3 + 1);
      a3 = (const BlockPos *)(v8 + 1);
      v14 = __OFSUB__(v8, result + 3);
      v13 = v8++ - (result + 3) < 0;
    }
    while ( v13 ^ v14 );
    a3 = (const BlockPos *)(v6 + 1);
    v15 = *(_DWORD *)v3 + 15;
    v14 = __OFSUB__(v6, v15);
    v13 = v6++ - v15 < 0;
  }
  while ( v13 ^ v14 );
  return result;
}


int __fastcall Villages::processNextVillageQuery(Villages *this)
{
  Villages *v1; // r4@1
  int v2; // r5@1
  const BlockPos *v3; // r2@2
  DoorInfo *v4; // r0@6
  const BlockPos *v5; // r2@6
  int v6; // r0@9
  unsigned int *v7; // r2@10
  unsigned int v8; // r1@12
  int v9; // r6@20
  int result; // r0@21
  char v11; // [sp+4h] [bp-24h]@4
  int v12; // [sp+8h] [bp-20h]@4

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    do
    {
      if ( !j_Villages::getDoorInfo(v1, (const BlockPos *)(v2 + 4))
        && j_Village::isVillageDoor(*((Village **)v1 + 3), (Level *)(v2 + 4), v3) == 1 )
      {
        (*(void (__fastcall **)(char *, Villages *, int, signed int))(*(_DWORD *)v1 + 24))(&v11, v1, v2 + 4, 32);
        if ( v12 )
        {
          if ( *(_DWORD *)(v12 + 4) )
          {
            v4 = (DoorInfo *)j_Villages::getDoorInfo(v1, (const BlockPos *)(v2 + 4));
            if ( v4 )
              j_DoorInfo::setTimeStamp(v4, *((_DWORD *)v1 + 31));
            else
              j_Villages::createDoorInfo(v1, (const BlockPos *)(v2 + 4), v5);
          }
          v6 = v12;
          if ( v12 )
            v7 = (unsigned int *)(v12 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v8 = __ldrex(v7);
              while ( __strex(v8 - 1, v7) );
            }
              v8 = (*v7)--;
            if ( v8 == 1 )
              (*(void (**)(void))(*(_DWORD *)v6 + 12))();
        }
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v2 = *((_DWORD *)v1 + 9);
  }
      v9 = *(_DWORD *)v2;
      j_operator delete((void *)v2);
      v2 = v9;
    while ( v9 );
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  result = 0;
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  return result;
}


int __fastcall Villages::_fetchClosestVillage(int result, const BlockPos *a2, int a3, int a4, int a5)
{
  int v5; // r9@1
  int v6; // r10@1
  int v7; // r7@1
  signed int v8; // r8@2
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@3
  Village *v10; // r5@4
  char *v11; // r0@4
  int v18; // r0@5
  int v19; // r4@6
  unsigned int *v20; // r3@7
  unsigned int v21; // r1@9
  unsigned int *v22; // r1@13
  int (**v23)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r5@13
  unsigned int v24; // r6@15
  Village *v25; // r5@24
  char *v26; // r0@24
  __int64 v27; // kr00_8@24
  int v31; // r0@25
  int v32; // r4@26
  unsigned int *v33; // r3@27
  unsigned int v34; // r1@29
  unsigned int *v35; // r1@33
  unsigned int v36; // r6@35
  int v37; // [sp+4h] [bp-2Ch]@1
  int v38; // [sp+8h] [bp-28h]@2

  v5 = a3;
  v6 = result;
  v37 = a4;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  v7 = *((_DWORD *)a2 + 19);
  if ( v7 )
  {
    v8 = 0x7FFFFFFF;
    v38 = 0;
    if ( a5 == 1 )
    {
      v9 = &pthread_create;
      do
      {
        v10 = *(Village **)(v7 + 4);
        v11 = j_Village::getCenter(*(Village **)(v7 + 4));
        _R1 = *(_DWORD *)v11 - *(_DWORD *)v5;
        result = *((_DWORD *)v11 + 2) - *(_DWORD *)(v5 + 8);
        __asm
        {
          VMOV            S0, R1
          VMOV            S2, R0
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VADD.F32        S0, S2, S0
          VCVTR.S32.F32   S0, S0
          VMOV            R11, S0
        }
        if ( _R11 < v8 )
          v18 = j_Village::getRadius(v10);
          result = (v18 + v37) * (v18 + v37);
          if ( _R11 <= result )
          {
            *(_DWORD *)v6 = *(_DWORD *)(v7 + 4);
            v19 = *(_DWORD *)(v7 + 8);
            result = v38;
            if ( v19 )
            {
              v20 = (unsigned int *)(v19 + 8);
              if ( v9 )
              {
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 + 1, v20) );
                result = *(_DWORD *)(v6 + 4);
              }
              else
                ++*v20;
            }
            if ( result )
              v22 = (unsigned int *)(result + 8);
              v23 = v9;
                  v24 = __ldrex(v22);
                while ( __strex(v24 - 1, v22) );
                v24 = (*v22)--;
              _ZF = v24 == 1;
              v9 = v23;
              if ( _ZF )
                result = (*(int (**)(void))(*(_DWORD *)result + 12))();
            v8 = _R11;
            *(_DWORD *)(v6 + 4) = v19;
            v38 = v19;
          }
        v7 = *(_DWORD *)v7;
      }
      while ( v7 );
    }
    else
        v25 = *(Village **)(v7 + 4);
        v26 = j_Village::getCenter(*(Village **)(v7 + 4));
        v27 = *(_QWORD *)v26;
        _R1 = *(_QWORD *)v26 - *(_DWORD *)v5;
        result = *((_DWORD *)v26 + 2) - *(_DWORD *)(v5 + 8);
        __asm { VMOV            S0, R1 }
        _R1 = HIDWORD(v27) - *(_DWORD *)(v5 + 4);
          VMOV            S4, R0
          VMOV            S2, R1
          VCVT.F32.S32    S4, S4
          VMUL.F32        S4, S4, S4
          VADD.F32        S0, S0, S4
          v31 = j_Village::getRadius(v25);
          result = (v31 + v37) * (v31 + v37);
            v32 = *(_DWORD *)(v7 + 8);
            if ( v32 )
              v33 = (unsigned int *)(v32 + 8);
              if ( &pthread_create )
                  v34 = __ldrex(v33);
                while ( __strex(v34 + 1, v33) );
                ++*v33;
              v35 = (unsigned int *)(result + 8);
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
                v36 = (*v35)--;
              if ( v36 == 1 )
            *(_DWORD *)(v6 + 4) = v32;
            v38 = v32;
  }
  return result;
}


void __fastcall Villages::insertDoorInfo(int a1, DoorInfo **a2)
{
  DoorInfo **v2; // r4@1
  int v3; // r5@1
  char *v4; // r0@1
  DoorInfo **v5; // r0@1
  DoorInfo **v6; // r1@1
  DoorInfo *v7; // r2@1
  DoorInfo *v8; // r0@1
  void *v9; // r0@2

  v2 = a2;
  v3 = a1;
  v4 = j_DoorInfo::getPosition(*a2);
  v5 = (DoorInfo **)j_std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      (unsigned __int64 *)(v3 + 96),
                      (int)v4);
  v6 = v5;
  v7 = *v2;
  *v2 = 0;
  v8 = *v5;
  *v6 = v7;
  if ( v8 )
  {
    v9 = (void *)j_DoorInfo::~DoorInfo(v8);
    j_j_j__ZdlPv_7(v9);
  }
}


int __fastcall Villages::submitFindDoorQuery(int result, const BlockPos *a2)
{
  int v2; // r2@1
  int v3; // lr@1
  int v4; // r3@3
  bool v5; // zf@4

  v2 = *(_DWORD *)(result + 16);
  v3 = *(_DWORD *)(result + 20);
  if ( (unsigned int)(-1431655765 * ((v3 - v2) >> 2)) <= 0x40 )
  {
    if ( v2 == v3 )
    {
LABEL_10:
      if ( v3 == *(_DWORD *)(result + 24) )
      {
        result = (int)j_j_j__ZNSt6vectorI8BlockPosSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT__1(
                        (unsigned __int64 *)(result + 16),
                        (int)a2);
      }
      else
        *(_DWORD *)v3 = *(_DWORD *)a2;
        *(_DWORD *)(v3 + 4) = *((_DWORD *)a2 + 1);
        *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
        *(_DWORD *)(result + 20) = v3 + 12;
    }
    else
      v4 = *(_DWORD *)a2;
      while ( 1 )
        v5 = *(_DWORD *)v2 == v4;
        if ( *(_DWORD *)v2 == v4 )
          v5 = *(_DWORD *)(v2 + 4) == *((_DWORD *)a2 + 1);
        if ( v5 && *(_DWORD *)(v2 + 8) == *((_DWORD *)a2 + 2) )
          break;
        v2 += 12;
        if ( v3 == v2 )
          goto LABEL_10;
  }
  return result;
}


int __fastcall Villages::removeVillages(int result)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r1@3
  _DWORD *v4; // r0@3
  _DWORD *v5; // r2@4

  v1 = result;
  v2 = *(_DWORD *)(result + 76);
  while ( v2 )
  {
    result = j_Village::canRemove(*(Village **)(v2 + 4));
    if ( result == 1 )
    {
      v3 = *(_DWORD *)(v2 + 4) % (unsigned int)(*(_QWORD *)(v1 + 68) >> 32);
      v4 = *(_DWORD **)(*(_QWORD *)(v1 + 68) + 4 * v3);
      do
      {
        v5 = v4;
        v4 = (_DWORD *)*v4;
      }
      while ( v4 != (_DWORD *)v2 );
      result = j_std::_Hashtable<std::shared_ptr<Village>,std::shared_ptr<Village>,std::allocator<std::shared_ptr<Village>>,std::__detail::_Identity,std::equal_to<std::shared_ptr<Village>>,std::hash<std::shared_ptr<Village>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(
                 v1 + 68,
                 v3,
                 v5,
                 v2);
      v2 = result;
      *(_BYTE *)(v1 + 4) = 1;
    }
    else
      v2 = *(_DWORD *)v2;
  }
  return result;
}


void __fastcall Villages::serialize(Villages *this, CompoundTag *a2)
{
  CompoundTag *v2; // r8@1
  Villages *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r5@2
  int i; // r4@2
  CompoundTag *v7; // r7@3
  void *v8; // r0@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  void *v13; // [sp+0h] [bp-38h]@6
  int v14; // [sp+8h] [bp-30h]@6
  CompoundTag *v15; // [sp+Ch] [bp-2Ch]@3
  int v16; // [sp+14h] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v16, "Tick");
  j_CompoundTag::putInt((int)v2, (const void **)&v16, *((_DWORD *)v3 + 31));
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = j_operator new(0x14u);
  j_ListTag::ListTag((int)v5);
  for ( i = *((_DWORD *)v3 + 19); i; i = *(_DWORD *)i )
    v7 = (CompoundTag *)j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v7);
    j_Village::addAdditionalSaveData(*(Village **)(i + 4), v7);
    v15 = v7;
    j_ListTag::add((int)v5, (int *)&v15);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v15 = 0;
  sub_21E94B4((void **)&v14, "Villages");
  v13 = v5;
  j_CompoundTag::put((int)v2, (const void **)&v14, (int *)&v13);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v13 = 0;
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall Villages::getDoorInfo(Villages *this, const BlockPos *a2)
{
  Villages *v2; // r4@1
  const BlockPos *v3; // r5@1
  __int64 v4; // r6@1
  int v5; // r0@4
  __int64 v6; // r8@8
  __int64 v7; // kr00_8@8
  unsigned int v8; // r5@8
  unsigned int v9; // r6@8
  int v10; // r0@8
  int v11; // r10@9
  int v12; // r7@9
  int v13; // r1@11
  bool v14; // zf@11
  int v15; // r4@16
  int result; // r0@18
  bool v17; // zf@20
  int v18; // [sp+0h] [bp-28h]@8

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 7);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
LABEL_8:
    v6 = *(_QWORD *)v3;
    v18 = *((_DWORD *)v3 + 2);
    v7 = *((_QWORD *)v2 + 12);
    v8 = 8976890 * *(_QWORD *)v3 + 981131 * (*(_QWORD *)v3 >> 32) + v18;
    v9 = v8 % (unsigned int)(*((_QWORD *)v2 + 12) >> 32);
    v10 = *(_DWORD *)(v7 + 4 * v9);
    if ( !v10 )
      goto LABEL_18;
    v11 = *(_DWORD *)v10;
    v12 = *(_DWORD *)(*(_DWORD *)v10 + 20);
    while ( 1 )
    {
      if ( v12 == v8 )
      {
        v13 = *(_DWORD *)(v11 + 4);
        v14 = (_DWORD)v6 == v13;
        if ( (_DWORD)v6 == v13 )
          v14 = HIDWORD(v6) == *(_DWORD *)(v11 + 8);
        if ( v14 && v18 == *(_DWORD *)(v11 + 12) )
          break;
      }
      v15 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 )
        v12 = *(_DWORD *)(v15 + 20);
        v10 = v11;
        v11 = *(_DWORD *)v11;
        if ( *(_DWORD *)(v15 + 20) % HIDWORD(v7) == v9 )
          continue;
    }
    v17 = v10 == 0;
    if ( v10 )
      v10 = *(_DWORD *)v10;
      v17 = v10 == 0;
    if ( v17 )
LABEL_18:
      result = 0;
    else
      result = *(_DWORD *)(v10 + 16);
  }
  else
      if ( *(_DWORD *)j_DoorInfo::getPosition(*(DoorInfo **)v4) == *(_DWORD *)v3
        && *((_DWORD *)j_DoorInfo::getPosition(*(DoorInfo **)v4) + 2) == *((_DWORD *)v3 + 2) )
        v5 = *((_DWORD *)j_DoorInfo::getPosition(*(DoorInfo **)v4) + 1) - *((_DWORD *)v3 + 1);
        if ( v5 < 0 )
          v5 = -v5;
        if ( v5 < 2 )
      LODWORD(v4) = v4 + 4;
      if ( HIDWORD(v4) == (_DWORD)v4 )
        goto LABEL_8;
    result = *(_DWORD *)v4;
  return result;
}


unsigned int *__fastcall Villages::fetchVillagersVillage(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r4@1
  unsigned int *result; // r0@1
  unsigned __int64 *v5; // r5@1
  int i; // r6@1
  int v7; // r5@5
  unsigned int v8; // r1@8
  unsigned int *v9; // r2@10
  unsigned int v10; // r1@12

  v3 = a1;
  result = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v5 = a3;
  for ( i = *(_DWORD *)(a2 + 76); i; i = *(_DWORD *)i )
  {
    result = (unsigned int *)j_Village::villagerLivesHere(*(_DWORD *)(i + 4), v5);
    if ( result == (unsigned int *)1 )
    {
      result = *(unsigned int **)(i + 4);
      *(_DWORD *)v3 = result;
      v7 = *(_DWORD *)(i + 8);
      if ( v7 )
      {
        result = (unsigned int *)(v7 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(result);
          while ( __strex(v8 + 1, result) );
          result = *(unsigned int **)(v3 + 4);
          if ( result )
          {
            v9 = result + 2;
            if ( &pthread_create )
            {
              __dmb();
              do
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
            }
            else
              v10 = (*v9)--;
            if ( v10 == 1 )
              result = (unsigned int *)(*(int (**)(void))(*result + 12))();
          }
        }
        else
          ++*result;
      }
      *(_DWORD *)(v3 + 4) = v7;
      return result;
    }
  }
  return result;
}


void __fastcall Villages::deserialize(Villages *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Villages *v3; // r8@1
  void *v4; // r0@1
  ListTag *v5; // r11@2
  void *v6; // r0@2
  int v7; // r7@5
  const CompoundTag *v8; // r4@6
  double v9; // r0@7
  Village *v10; // r6@7
  __int64 v11; // kr00_8@7
  unsigned int v12; // r6@7
  int v13; // r4@7
  int *v14; // r0@7
  int v15; // r9@8
  int v16; // r10@10
  bool v17; // zf@13
  _DWORD *v18; // r3@17
  unsigned int v19; // r0@17
  int v20; // r0@17
  int v21; // r6@18
  unsigned int *v22; // r1@19
  unsigned int v23; // r0@21
  unsigned int *v24; // r4@25
  unsigned int v25; // r0@27
  Village *v26; // r0@33
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  int v31; // [sp+4h] [bp-4Ch]@5
  Villages *v32; // [sp+8h] [bp-48h]@1
  unsigned int v33; // [sp+Ch] [bp-44h]@7
  int v34; // [sp+10h] [bp-40h]@17
  Village *v35; // [sp+14h] [bp-3Ch]@7
  int v36; // [sp+1Ch] [bp-34h]@2
  int v37; // [sp+24h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  v32 = this;
  sub_21E94B4((void **)&v37, "Tick");
  *((_DWORD *)v3 + 31) = j_CompoundTag::getInt((int)v2, (const void **)&v37);
  v4 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v36, "Villages");
  v5 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&v36);
  v6 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( v5 && j_ListTag::size(v5) >= 1 )
    v31 = (int)v3 + 68;
    v7 = 0;
    do
      v8 = (const CompoundTag *)j_ListTag::get(v5, v7);
      if ( (*(int (**)(void))(*(_DWORD *)v8 + 24))() == 10 )
      {
        LODWORD(v9) = j_operator new(0x90u);
        HIDWORD(v9) = *((_DWORD *)v3 + 3);
        v10 = (Village *)LODWORD(v9);
        j_Village::Village(v9);
        v35 = v10;
        j_Village::readAdditionalSaveData(v10, v8);
        j_std::__shared_ptr<Village,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Village,std::default_delete<Village>>(
          (int)&v33,
          (int *)&v35);
        v11 = *(_QWORD *)((char *)v3 + 68);
        v12 = v33;
        v13 = v33 % HIDWORD(v11);
        v14 = *(int **)(v11 + 4 * (v33 % HIDWORD(v11)));
        if ( !v14 )
          goto LABEL_17;
        v15 = *v14;
        while ( v33 != *(_DWORD *)(v15 + 4) )
        {
          v16 = *(_DWORD *)v15;
          if ( *(_DWORD *)v15 )
          {
            v14 = (int *)v15;
            v15 = *(_DWORD *)v15;
            if ( *(_DWORD *)(v16 + 4) % HIDWORD(v11) == v13 )
              continue;
          }
        }
        v17 = v14 == 0;
        if ( v14 )
          v17 = *v14 == 0;
        if ( v17 )
LABEL_17:
          v18 = j_operator new(0xCu);
          v19 = v33;
          *v18 = 0;
          v18[1] = v19;
          v20 = v34;
          v34 = 0;
          v18[2] = v20;
          v33 = 0;
          j_std::_Hashtable<std::shared_ptr<Village>,std::shared_ptr<Village>,std::allocator<std::shared_ptr<Village>>,std::__detail::_Identity,std::equal_to<std::shared_ptr<Village>>,std::hash<std::shared_ptr<Village>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
            v31,
            v13,
            v12,
            (int)v18);
        v21 = v34;
        if ( v34 )
          v22 = (unsigned int *)(v34 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          else
            v23 = (*v22)--;
          if ( v23 == 1 )
            v24 = (unsigned int *)(v21 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            if ( &pthread_create )
            {
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            }
            else
              v25 = (*v24)--;
            if ( v25 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
        v3 = v32;
        if ( v35 )
          v26 = j_Village::~Village(v35);
          j_operator delete((void *)v26);
      }
      ++v7;
    while ( v7 < j_ListTag::size(v5) );
}


int __fastcall Villages::submitFindVillageQuery(int result, const BlockPos *a2)
{
  char v2; // [sp+4h] [bp-14h]@2

  if ( *(_DWORD *)(result + 40) <= 0x40u )
    result = j_std::_Hashtable<BlockPos,BlockPos,std::allocator<BlockPos>,std::__detail::_Identity,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<BlockPos const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<BlockPos,true>>>>(
               (int *)&v2,
               (unsigned __int64 *)(result + 28),
               (int)a2);
  return result;
}


int __fastcall Villages::processNextDoorQuery(Villages *this, int a2, const BlockPos *a3)
{
  Villages *v3; // r4@1
  int result; // r0@1
  __int64 v5; // kr00_8@1

  v3 = this;
  v5 = *((_QWORD *)this + 2);
  result = *((_QWORD *)this + 2) >> 32;
  if ( (_DWORD)v5 != result )
  {
    j_Villages::addDoorInfoWithinRadius(v3, (BlockPos *)(result - 12), a3);
    result = *((_DWORD *)v3 + 5) - 12;
    *((_DWORD *)v3 + 5) = result;
  }
  return result;
}


void __fastcall Villages::deserialize(Villages *this, const CompoundTag *a2)
{
  Villages::deserialize(this, a2);
}


void __fastcall Villages::cluster(Villages *this)
{
  Villages *v1; // r8@1
  DoorInfo **v2; // r5@1 OVERLAPPED
  DoorInfo **v3; // r6@1 OVERLAPPED
  int v4; // r7@2
  unsigned int v5; // r4@2
  DoorInfo **v6; // r7@5
  void *v7; // r0@7

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 7);
  if ( v3 != v2 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      j_Villages::assignDoorOrCreateVillage((int)v1, &v2[v4]);
      *(_QWORD *)&v2 = *((_QWORD *)v1 + 7);
      ++v4;
      ++v5;
    }
    while ( v5 < v3 - v2 );
  }
    v6 = v2;
      if ( *v6 )
      {
        v7 = (void *)j_DoorInfo::~DoorInfo(*v6);
        j_operator delete(v7);
      }
      *v6 = 0;
      ++v6;
    while ( v3 != v6 );
  *((_DWORD *)v1 + 15) = v2;
}
