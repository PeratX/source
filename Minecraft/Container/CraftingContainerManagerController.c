

int __fastcall CraftingContainerManagerController::_handleCreativeItem(ContainerItemStack *a1, int a2, ContainerItemStack *a3, int **a4, int a5, int a6)
{
  int v6; // r4@1
  ContainerItemStack *v7; // r8@1
  ContainerItemStack *v8; // r6@1
  ContainerController **v9; // r0@1
  int v10; // r9@1
  int v11; // r4@1
  unsigned int v12; // r1@2
  unsigned int *v13; // r0@2
  unsigned int v14; // r2@5
  unsigned int v15; // r3@6
  signed int v16; // r1@7
  int v17; // r0@11
  ContainerManagerModel *v18; // r5@11
  unsigned int *v19; // r2@14
  unsigned int v20; // r1@16
  int v21; // r0@28
  int result; // r0@29
  unsigned int v23; // r0@31
  unsigned int *v24; // r1@40
  unsigned int *v25; // r5@46
  int v26; // [sp+0h] [bp-70h]@25
  int v27; // [sp+8h] [bp-68h]@37
  void *v28; // [sp+24h] [bp-4Ch]@35
  void *ptr; // [sp+34h] [bp-3Ch]@33
  ContainerManagerModel *v30; // [sp+4Ch] [bp-24h]@1
  int v31; // [sp+50h] [bp-20h]@1

  v6 = a2;
  v7 = a1;
  v8 = a3;
  v9 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 (unsigned __int64 *)(a2 + 20),
                                 a4);
  v10 = ContainerController::getItem(*v9, a5);
  ContainerManagerController::getContainerManagerModel((ContainerManagerController *)&v30, v6);
  v11 = v31;
  if ( v31 )
  {
    v12 = *(_DWORD *)(v31 + 4);
    v13 = (unsigned int *)(v31 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_11;
        }
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    }
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_11:
    v17 = v31;
    v18 = v30;
    if ( v16 )
      v18 = 0;
    if ( v31 )
      v19 = (unsigned int *)(v31 + 8);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    if ( v18 && !ContainerManagerModel::isCreativeMode(v18) )
      result = ContainerItemStack::ContainerItemStack((int)v7);
      goto LABEL_39;
  }
  else
    v11 = 0;
  if ( ContainerItemStack::isEmpty(v8) == 1 )
    ItemInstance::ItemInstance((ItemInstance *)&v26, v10);
    if ( a6 == 2 )
      ItemInstance::set((ItemInstance *)&v26, 1);
    else if ( a6 == 1 )
      v23 = ItemInstance::getMaxStackSize((ItemInstance *)&v26);
      ItemInstance::set((ItemInstance *)&v26, v23 >> 1);
    else if ( !a6 )
      v21 = ItemInstance::getMaxStackSize((ItemInstance *)&v26);
      ItemInstance::set((ItemInstance *)&v26, v21);
    ContainerItemStack::ContainerItemStack(v7, (const ItemInstance *)&v26);
    if ( ptr )
      operator delete(ptr);
    if ( v28 )
      operator delete(v28);
    result = v27;
    if ( v27 )
      result = (*(int (**)(void))(*(_DWORD *)v27 + 4))();
    result = ContainerItemStack::ContainerItemStack((int)v7);
LABEL_39:
  if ( v11 )
    v24 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v24);
      while ( __strex(result - 1, v24) );
    else
      result = (*v24)--;
    if ( result == 1 )
      v25 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          result = __ldrex(v25);
        while ( __strex(result - 1, v25) );
        result = (*v25)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return result;
}


int __fastcall CraftingContainerManagerController::resetCraftingInformation(int result)
{
  *(_BYTE *)(result + 112) = 0;
  *(_DWORD *)(result + 116) = *(_DWORD *)(result + 120);
  *(_DWORD *)(result + 124) = 0;
  *(_BYTE *)(result + 128) = 0;
  return result;
}


void __fastcall CraftingContainerManagerController::handleAutoPlace(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, void *a16, int a17, int a18, int a19, void *a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, char a47)
{
  int **v47; // r10@1
  int v48; // r9@1
  int v49; // r0@1
  int v50; // r4@2
  int v51; // r6@2
  bool v52; // zf@3
  int v53; // r5@6
  bool v54; // zf@9
  _DWORD *v55; // r0@13
  int **v56; // r6@14
  _DWORD *v57; // r1@14
  int v58; // r0@14
  size_t v59; // r2@14
  int *v60; // r0@17
  int *v61; // r4@17
  int v62; // r5@18
  __int64 i; // r0@18
  int *v64; // r4@24
  int *v65; // r6@24
  unsigned int *v66; // r2@27
  signed int v67; // r1@29
  int *v68; // r0@35
  int v69; // r5@41
  signed int v70; // r0@41
  int *v71; // r4@43
  int *v72; // r10@43
  char v73; // r7@44
  unsigned int *v74; // r2@45
  signed int v75; // r1@47
  ContainerController **v76; // r0@53
  signed int v77; // r0@53
  signed int v78; // r8@53
  void *v79; // r0@53
  signed int v80; // r0@54
  int v81; // r11@58
  int *v82; // r0@58
  int *v83; // r4@58
  int v84; // r5@59
  __int64 j; // r0@59
  int *v86; // r4@65
  int *v87; // r6@65
  unsigned int *v88; // r2@67
  signed int v89; // r1@69
  int *v90; // r0@75
  void *v91; // r0@75
  int *k; // r4@77
  int *v93; // r6@77
  unsigned int *v94; // r2@79
  signed int v95; // r1@81
  int *v96; // r0@87
  void *v97; // r0@87
  int *v98; // r0@90
  int *v99; // r4@100
  int *v100; // r6@100
  unsigned int *v101; // r2@102
  signed int v102; // r1@104
  int *v103; // r0@110
  ItemInstance *v104; // [sp+Ch] [bp-FCh]@44
  int **v105; // [sp+10h] [bp-F8h]@44
  int v106; // [sp+20h] [bp-E8h]@1
  __int64 v107; // [sp+24h] [bp-E4h]@1
  unsigned __int64 *v108; // [sp+24h] [bp-E4h]@58
  int *v109; // [sp+2Ch] [bp-DCh]@17
  int *v110; // [sp+30h] [bp-D8h]@17
  int v111; // [sp+34h] [bp-D4h]@17
  int v112; // [sp+38h] [bp-D0h]@79
  int v113; // [sp+3Ch] [bp-CCh]@67
  char v114; // [sp+40h] [bp-C8h]@65
  int v115; // [sp+48h] [bp-C0h]@98
  void *v116; // [sp+64h] [bp-A4h]@96
  void *ptr; // [sp+74h] [bp-94h]@94
  int *v118; // [sp+88h] [bp-80h]@58
  int *v119; // [sp+8Ch] [bp-7Ch]@58
  int v120; // [sp+90h] [bp-78h]@58
  int v121; // [sp+94h] [bp-74h]@45
  char v122; // [sp+98h] [bp-70h]@43
  int v123; // [sp+A0h] [bp-68h]@119
  void *v124; // [sp+BCh] [bp-4Ch]@117
  void *v125; // [sp+CCh] [bp-3Ch]@115

  v106 = a3;
  v47 = (int **)a2;
  v107 = a1;
  v48 = 0xBu % dword_27F98F8;
  v49 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v49 )
    goto LABEL_13;
  v50 = *(_DWORD *)v49;
  v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
  while ( 1 )
  {
    v52 = v51 == 11;
    if ( v51 == 11 )
      v52 = *(_DWORD *)(v50 + 4) == 11;
    if ( v52 )
      break;
    v53 = *(_DWORD *)v50;
    if ( *(_DWORD *)v50 )
    {
      v51 = *(_DWORD *)(v53 + 12);
      v49 = v50;
      v50 = *(_DWORD *)v50;
      if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27F98F8 == v48 )
        continue;
    }
  }
  v54 = v49 == 0;
  if ( v49 )
    v49 = *(_DWORD *)v49;
    v54 = v49 == 0;
  if ( v54 )
LABEL_13:
    v55 = operator new(0x10u);
    *v55 = 0;
    v55[1] = 11;
    v55[2] = &unk_28898CC;
    v49 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F98F4,
            v48,
            0xBu,
            (int)v55);
  v56 = v47;
  v57 = *(_DWORD **)(v49 + 8);
  v58 = *(v57 - 3);
  v59 = *(*v47 - 3);
  if ( v59 != v58 || (v58 = memcmp(*v47, v57, v59)) != 0 )
    if ( CraftingContainerManagerController::isCreativeContainer(v58, (const void **)v47) == 1 )
      v109 = 0;
      v110 = 0;
      v111 = 0;
      v60 = (int *)(*(_QWORD *)a4 >> 32);
      v61 = (int *)*(_QWORD *)a4;
      if ( v61 != v60 )
      {
        v62 = (int)(v60 - 2);
        for ( i = 0LL; ; i = *(_QWORD *)&v110 )
        {
          if ( (_DWORD)i == HIDWORD(i) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)&v109,
              v61);
          else
            v110 = sub_21E8AF4((int *)i, v61) + 1;
          if ( (int *)v62 == v61 )
            break;
          v61 += 2;
        }
      }
      CraftingContainerManagerController::_handleCreativeAutoPlace(
        v107,
        SHIDWORD(v107),
        v47,
        v106,
        (unsigned __int64 *)&v109,
        a5);
      v65 = v110;
      v64 = v109;
      if ( v109 != v110 )
        do
          v68 = (int *)(*v64 - 12);
          if ( v68 != &dword_28898C0 )
          {
            v66 = (unsigned int *)(*v64 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v67 = __ldrex(v66);
              while ( __strex(v67 - 1, v66) );
            }
            else
              v67 = (*v66)--;
            if ( v67 <= 0 )
              j_j_j_j__ZdlPv_9(v68);
          }
          ++v64;
        while ( v64 != v65 );
        v64 = v109;
      if ( v64 )
        operator delete(v64);
    else
      j_j_j__ZN26ContainerManagerController15handleAutoPlaceEiRKSsiRKSt6vectorI13AutoPlaceItemSaIS3_EERS2_I15AutoPlaceResultSaIS8_EE(
        (unsigned __int64 *)a4,
  else
    v69 = v107;
    v70 = ItemInstance::isNull((ItemInstance *)(v107 + 144));
    if ( SHIDWORD(v107) >= 1 && !v70 )
      ItemInstance::ItemInstance((ItemInstance *)&v122, v107 + 144);
      v72 = (int *)(*(_QWORD *)a4 >> 32);
      v71 = (int *)*(_QWORD *)a4;
      if ( v71 != v72 )
        v104 = (ItemInstance *)(v107 + 144);
        v105 = v56;
        v73 = 0;
          sub_21E8AF4(&v121, v71);
          v76 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                          (unsigned __int64 *)(v107 + 20),
                                          (int **)&v121);
          v77 = ContainerController::canSet(*v76, (const ItemInstance *)&v122, 0);
          v78 = v77;
          v73 |= v77;
          v79 = (void *)(v121 - 12);
          if ( (int *)(v121 - 12) != &dword_28898C0 )
            v74 = (unsigned int *)(v121 - 4);
                v75 = __ldrex(v74);
              while ( __strex(v75 - 1, v74) );
              v75 = (*v74)--;
            if ( v75 <= 0 )
              j_j_j_j__ZdlPv_9(v79);
          v71 += 2;
          v80 = 0;
          if ( v71 == v72 )
            v80 = 1;
        while ( !(v80 | v78) );
        if ( v73 & 1 )
          v108 = (unsigned __int64 *)(v107 + 20);
          v118 = 0;
          v119 = 0;
          v81 = v69;
          v120 = 0;
          v82 = (int *)(*(_QWORD *)a4 >> 32);
          v83 = (int *)*(_QWORD *)a4;
          if ( v83 != v82 )
            v84 = (int)(v82 - 2);
            for ( j = 0LL; ; j = *(_QWORD *)&v119 )
              if ( (_DWORD)j == HIDWORD(j) )
                std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                  (unsigned __int64 *)&v118,
                  v83);
              else
                v119 = sub_21E8AF4((int *)j, v83) + 1;
              if ( (int *)v84 == v83 )
                break;
              v83 += 2;
          ContainerItemStack::ContainerItemStack((int)&v114);
          *(_BYTE *)(v81 + 97) = 0;
          CraftingContainerManagerController::_craftItem(
            (CraftingContainerManagerController *)v81,
            (ContainerItemStack *)&v114);
          *(_BYTE *)(v81 + 97) = 1;
          *(_BYTE *)(v81 + 112) = 0;
          *(_DWORD *)(v81 + 116) = *(_DWORD *)(v81 + 120);
          *(_DWORD *)(v81 + 124) = 0;
          *(_BYTE *)(v81 + 128) = 0;
          v87 = (int *)(*(_QWORD *)a4 >> 32);
          v86 = (int *)*(_QWORD *)a4;
          if ( v86 != v87 )
            do
              sub_21E8AF4(&v113, v86);
              v90 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                             v108,
                             (int **)&v113);
              ContainerController::autoPlaceItems(*v90, (int)&v114, a5, 1);
              v91 = (void *)(v113 - 12);
              if ( (int *)(v113 - 12) != &dword_28898C0 )
              {
                v88 = (unsigned int *)(v113 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v89 = __ldrex(v88);
                  while ( __strex(v89 - 1, v88) );
                }
                else
                  v89 = (*v88)--;
                if ( v89 <= 0 )
                  j_j_j_j__ZdlPv_9(v91);
              }
              v86 += 2;
            while ( v86 != v87 );
            v93 = (int *)(*(_QWORD *)a4 >> 32);
            for ( k = (int *)*(_QWORD *)a4; k != v93; k += 2 )
              sub_21E8AF4(&v112, k);
              v96 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                             (int **)&v112);
              ContainerController::autoPlaceItems(*v96, (int)&v114, a5, 0);
              v97 = (void *)(v112 - 12);
              if ( (int *)(v112 - 12) != &dword_28898C0 )
                v94 = (unsigned int *)(v112 - 4);
                    v95 = __ldrex(v94);
                  while ( __strex(v95 - 1, v94) );
                  v95 = (*v94)--;
                if ( v95 <= 0 )
                  j_j_j_j__ZdlPv_9(v97);
          if ( !ContainerItemStack::isEmpty((ContainerItemStack *)&v114) )
            v98 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                           v108,
                           v105);
            ContainerController::autoPlaceItems(*v98, (int)&v114, a5, 0);
          if ( !ItemInstance::isNull(v104) && ItemInstance::sameItemAndAux(v104, (const ItemInstance *)&v122) == 1 )
            (*(void (__fastcall **)(int, int, int **, int))(*(_DWORD *)v81 + 32))(v81, HIDWORD(v107) - 1, v105, v106);
          if ( ptr )
            operator delete(ptr);
          if ( v116 )
            operator delete(v116);
          if ( v115 )
            (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v115 + 4))(v115, *(_DWORD *)(*(_DWORD *)v115 + 4));
          v100 = v119;
          v99 = v118;
          if ( v118 != v119 )
              v103 = (int *)(*v99 - 12);
              if ( v103 != &dword_28898C0 )
                v101 = (unsigned int *)(*v99 - 4);
                    v102 = __ldrex(v101);
                  while ( __strex(v102 - 1, v101) );
                  v102 = (*v101)--;
                if ( v102 <= 0 )
                  j_j_j_j__ZdlPv_9(v103);
              ++v99;
            while ( v99 != v100 );
            v99 = v118;
          if ( v99 )
            operator delete(v99);
      if ( v125 )
        operator delete(v125);
      if ( v124 )
        operator delete(v124);
      if ( v123 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v123 + 4))(v123, *(_DWORD *)(*(_DWORD *)v123 + 4));
}


int __fastcall CraftingContainerManagerController::getBackgroundStyle(int a1, int **a2)
{
  int v2; // r0@1

  v2 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
         (unsigned __int64 *)(a1 + 20),
         a2);
  return (*(int (**)(void))(**(_DWORD **)v2 + 20))();
}


signed int __fastcall CraftingContainerManagerController::setLastCraftedItem(CraftingContainerManagerController *this, const ItemInstance *a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  signed int v7; // r5@7
  bool v8; // zf@7
  unsigned int v9; // r0@13
  unsigned int *v11; // r6@18
  unsigned int v12; // r0@20

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          v8 = *v4 == 0;
          if ( *v4 )
          {
            this = (CraftingContainerManagerController *)*((_DWORD *)this + 16);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = CraftingContainerManagerModel::setLastCraftedItem(this, a2);
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v4);
            while ( __strex(v9 - 1, v4) );
          else
            v9 = (*v4)--;
          if ( v9 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v7;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


void __fastcall CraftingContainerManagerController::handleRecipeSelected(__int64 a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r4@2
  int v6; // r6@2
  int v8; // r7@6
  bool v9; // zf@9
  _DWORD *v10; // r0@13
  const void *v11; // r11@14
  _DWORD *v12; // r1@14
  size_t v13; // r8@14
  int v14; // r4@16
  int v15; // r0@16
  int v16; // r9@17
  int v17; // r5@17
  bool v18; // zf@18
  int v19; // r6@21
  bool v20; // zf@24
  _DWORD *v21; // r0@28
  _DWORD *v22; // r1@29
  int v23; // r9@31
  int v24; // r0@31
  int v25; // r4@32
  int v26; // r5@32
  bool v27; // zf@33
  int v28; // r6@36
  bool v29; // zf@39
  _DWORD *v30; // r0@43
  _DWORD *v31; // r1@44
  int v32; // r9@46
  int v33; // r0@46
  int v34; // r4@47
  int v35; // r5@47
  bool v36; // zf@48
  int v37; // r6@51
  bool v38; // zf@54
  _DWORD *v39; // r0@58
  _DWORD *v40; // r1@59
  int v41; // r9@61
  int v42; // r0@61
  int v43; // r4@62
  int v44; // r5@62
  bool v45; // zf@63
  int v46; // r6@66
  bool v47; // zf@69
  _DWORD *v48; // r0@73
  _DWORD *v49; // r1@74
  int v50; // r11@76
  int v51; // r9@76
  int v52; // r0@76
  int v53; // r4@77
  int v54; // r6@77
  bool v55; // zf@78
  int v56; // r7@81
  bool v57; // zf@84
  _DWORD *v58; // r0@88
  int v59; // r8@89
  int v60; // r0@89
  int v61; // r5@90
  int v62; // r6@90
  bool v63; // zf@91
  int v64; // r7@94
  bool v65; // zf@97
  _DWORD *v66; // r0@101
  __int64 v67; // kr00_8@102
  unsigned int *v68; // r1@103
  unsigned int v69; // r0@105
  unsigned int *v70; // r4@109
  unsigned int v71; // r0@111
  void *v72; // r0@116
  int v73; // r5@117 OVERLAPPED
  int v74; // r6@117 OVERLAPPED
  unsigned int *v75; // r1@118
  unsigned int v76; // r0@120
  unsigned int *v77; // r4@124
  unsigned int v78; // r0@126
  void *v79; // r0@131
  int v80; // r10@132
  unsigned int v81; // r1@133
  unsigned int *v82; // r0@133
  unsigned int v83; // r2@136
  unsigned int v84; // r3@137
  signed int v85; // r1@138
  int v86; // r0@142
  int v87; // r6@142
  unsigned int *v88; // r2@145
  unsigned int v89; // r1@147
  void *v90; // r0@153
  ItemInstance *v91; // r4@154
  Player *v92; // r0@154
  PlayerInventoryProxy *v93; // r0@154
  int v94; // r0@154
  FillingContainer *v95; // r5@154
  Recipes *v96; // r0@154
  Recipes *v97; // r0@154
  int v98; // r5@154
  char *v99; // r8@154
  ItemPack *v100; // r7@155
  int v101; // r4@155
  int v102; // r1@155
  unsigned int v103; // r10@157
  signed int v104; // r0@158
  char *v105; // r6@158
  int v106; // r5@158
  unsigned int v107; // r3@158
  unsigned int v108; // r0@160
  unsigned int v109; // r11@160
  int v110; // r4@165
  int v111; // r0@167
  unsigned int v112; // r4@168
  char *v113; // r2@168
  int v114; // r3@169
  int v115; // r2@169
  int v116; // r7@169
  int v117; // r7@169
  int v118; // r7@169
  int v119; // r7@169
  int v120; // r0@174
  int v121; // r0@174
  void *v122; // r6@174
  void *v123; // r5@174
  void *v124; // r4@174
  int v125; // r0@174
  int v126; // r0@174
  void *v127; // r0@175
  void *v128; // r0@177
  int v129; // r0@179
  __int64 v130; // r4@184
  void *v131; // r0@185
  void *v132; // r0@187
  int v133; // r0@189
  int v134; // r4@195
  ContainerController *v135; // r5@195
  ItemInstance *v136; // r0@197
  signed int i; // r4@198
  ItemInstance *v138; // r0@200
  __int64 v139; // r0@201
  int v140; // r2@202
  int v141; // r8@205
  signed int v142; // r5@205
  int v143; // r6@205
  int *v144; // r4@205
  int v145; // r5@205
  int v146; // r6@205
  signed int v147; // r0@207
  int v148; // r4@218
  int v149; // r5@219
  int v150; // r6@220
  int *v151; // r2@223
  int v152; // r2@226
  CompoundTag *v153; // r0@227
  int v154; // r1@227
  signed int v155; // r0@229
  unsigned int v156; // r1@229
  unsigned int v157; // r0@231
  unsigned int v158; // r2@231
  char *v159; // r0@236
  char *v160; // r4@236
  int v161; // r5@236
  int v162; // r8@236
  int v163; // r2@236
  CompoundTag *v164; // r0@236
  int v165; // r1@236
  CompoundTag *v166; // r0@242
  CompoundTag *v167; // r7@243
  int v168; // r4@243
  int v169; // r1@243
  int v170; // r4@248
  int v171; // r5@249
  int v172; // r0@250
  __int64 v173; // r4@261
  int v174; // r0@262
  unsigned int v175; // r4@270
  unsigned int v177; // r6@271
  int v178; // r0@275
  int v179; // r6@276
  int v182; // r4@278
  int v183; // r9@278
  int v184; // r11@278
  int v185; // r7@279
  int v186; // r10@280
  int v187; // r0@281
  int v191; // r2@296
  int v192; // r1@298
  int v193; // r2@298
  unsigned int *v194; // r2@299
  signed int v195; // r1@301
  unsigned int *v196; // r2@303
  signed int v197; // r1@305
  unsigned int *v198; // r2@315
  signed int v199; // r1@317
  int v200; // r0@324
  int v201; // r4@324
  int v202; // r0@324
  signed int v203; // r2@324
  bool v204; // zf@326
  char *v205; // r4@330
  signed int v206; // r8@334
  ItemInstance *v207; // r7@335
  int v208; // r0@336
  bool v209; // zf@336
  __int64 v210; // r0@339
  signed int v211; // r9@342
  int v212; // r6@342
  char *v213; // r4@342
  signed int v214; // r3@342
  int v215; // r0@342
  unsigned int v216; // r7@343
  int v217; // r0@345
  int v218; // r1@345
  bool v219; // zf@345
  int v220; // r0@349
  char *v221; // r9@351
  int v222; // r4@351
  signed int v223; // r6@351
  int v224; // r0@351
  int v225; // r4@354
  int v226; // r0@354
  int v227; // r10@354
  signed int v228; // r11@354
  int v229; // r6@357
  signed int v230; // r5@357
  int v231; // r0@359
  int v232; // r6@359
  int v233; // r0@359
  bool v234; // zf@359
  const ItemInstance *v235; // r2@362
  int v236; // r0@365
  int v237; // r0@365
  signed int v238; // r6@365
  int v239; // r2@365
  unsigned int v240; // r0@365
  signed int v241; // r0@371
  signed int v242; // r2@371
  int v243; // r2@375
  signed int v244; // r3@375
  bool v245; // zf@380
  __int64 v246; // r0@383
  ItemInstance *v247; // r0@389
  signed int v248; // r0@395
  bool v249; // zf@395
  char v250; // r0@402
  int v251; // r1@427
  int v252; // r2@427
  int *v253; // r0@429
  int v254; // r4@440
  unsigned int *v255; // r1@441
  unsigned int v256; // r0@443
  unsigned int *v257; // r5@447
  unsigned int v258; // r0@449
  unsigned int *v259; // r1@455
  unsigned int v260; // r0@457
  unsigned int *v261; // r4@461
  unsigned int v262; // r0@463
  void *v263; // r0@468
  void *v264; // r0@469
  unsigned int *v265; // r2@471
  signed int v266; // r1@473
  unsigned int *v267; // r2@475
  signed int v268; // r1@477
  const CompoundTag *v269; // [sp+0h] [bp-210h]@0
  int v270; // [sp+4h] [bp-20Ch]@205
  int v271; // [sp+4h] [bp-20Ch]@369
  int v272; // [sp+8h] [bp-208h]@205
  unsigned int v273; // [sp+8h] [bp-208h]@236
  signed int v274; // [sp+8h] [bp-208h]@354
  void *ptr; // [sp+Ch] [bp-204h]@205
  char *ptra; // [sp+Ch] [bp-204h]@242
  void *ptrb; // [sp+Ch] [bp-204h]@271
  char *ptrc; // [sp+Ch] [bp-204h]@354
  signed int v279; // [sp+10h] [bp-200h]@205
  unsigned __int64 v280; // [sp+10h] [bp-200h]@276
  int v281; // [sp+10h] [bp-200h]@354
  char v282; // [sp+14h] [bp-1FCh]@356
  int *v283; // [sp+18h] [bp-1F8h]@193
  int v284; // [sp+18h] [bp-1F8h]@276
  _DWORD *v285; // [sp+18h] [bp-1F8h]@335
  int v286; // [sp+1Ch] [bp-1F4h]@157
  _DWORD *v287; // [sp+1Ch] [bp-1F4h]@277
  signed int v288; // [sp+1Ch] [bp-1F4h]@331
  int v289; // [sp+20h] [bp-1F0h]@158
  int v290; // [sp+20h] [bp-1F0h]@174
  int *v291; // [sp+20h] [bp-1F0h]@277
  _DWORD *v292; // [sp+20h] [bp-1F0h]@335
  Recipes *v293; // [sp+24h] [bp-1ECh]@154
  FillingContainer *v294; // [sp+28h] [bp-1E8h]@154
  int v295; // [sp+2Ch] [bp-1E4h]@154
  ContainerController *v296; // [sp+30h] [bp-1E0h]@154
  int v297; // [sp+34h] [bp-1DCh]@142
  int v298; // [sp+34h] [bp-1DCh]@354
  int v299; // [sp+38h] [bp-1D8h]@1
  int v300; // [sp+3Ch] [bp-1D4h]@1
  int v301; // [sp+3Ch] [bp-1D4h]@174
  int v302; // [sp+3Ch] [bp-1D4h]@276
  int *v303; // [sp+3Ch] [bp-1D4h]@335
  __int64 v304; // [sp+40h] [bp-1D0h]@1
  int v305; // [sp+44h] [bp-1CCh]@295
  char v306; // [sp+48h] [bp-1C8h]@429
  int v307; // [sp+50h] [bp-1C0h]@433
  void *v308; // [sp+6Ch] [bp-1A4h]@431
  void *v309; // [sp+7Ch] [bp-194h]@429
  char v310; // [sp+90h] [bp-180h]@389
  int v311; // [sp+98h] [bp-178h]@393
  void *v312; // [sp+B4h] [bp-15Ch]@391
  void *v313; // [sp+C4h] [bp-14Ch]@389
  int v314; // [sp+D8h] [bp-138h]@365
  int v315; // [sp+E0h] [bp-130h]@409
  unsigned __int8 v316; // [sp+E6h] [bp-12Ah]@371
  unsigned __int8 v317; // [sp+E7h] [bp-129h]@365
  void *v318; // [sp+FCh] [bp-114h]@407
  void *v319; // [sp+10Ch] [bp-104h]@405
  int v320; // [sp+120h] [bp-F0h]@335
  int v321; // [sp+128h] [bp-E8h]@422
  unsigned __int8 v322; // [sp+12Eh] [bp-E2h]@339
  char v323; // [sp+12Fh] [bp-E1h]@336
  void *v324; // [sp+144h] [bp-CCh]@420
  void *v325; // [sp+154h] [bp-BCh]@418
  int v326; // [sp+168h] [bp-A8h]@223
  int v327; // [sp+16Ch] [bp-A4h]@210
  void *v328; // [sp+170h] [bp-A0h]@210
  int v329; // [sp+174h] [bp-9Ch]@210
  int v330; // [sp+178h] [bp-98h]@210
  int v331; // [sp+17Ch] [bp-94h]@211
  int v332; // [sp+180h] [bp-90h]@258
  __int64 v333; // [sp+184h] [bp-8Ch]@195
  int v334; // [sp+18Ch] [bp-84h]@195
  int v335; // [sp+190h] [bp-80h]@155
  int v336; // [sp+194h] [bp-7Ch]@174
  int v337; // [sp+198h] [bp-78h]@174
  void *v338; // [sp+19Ch] [bp-74h]@154
  _BYTE *v339; // [sp+1A0h] [bp-70h]@154
  int v340; // [sp+1A8h] [bp-68h]@153
  ContainerController *v341; // [sp+1ACh] [bp-64h]@153
  int v342; // [sp+1B0h] [bp-60h]@440
  int v343; // [sp+1B4h] [bp-5Ch]@132
  int v344; // [sp+1B8h] [bp-58h]@132
  int v345; // [sp+1BCh] [bp-54h]@117
  char v346; // [sp+1C0h] [bp-50h]@117
  int v347; // [sp+1C4h] [bp-4Ch]@117
  int v348; // [sp+1C8h] [bp-48h]@102
  char v349; // [sp+1CCh] [bp-44h]@102
  int v350; // [sp+1D0h] [bp-40h]@102
  int v351; // [sp+1D4h] [bp-3Ch]@102
  int v352; // [sp+1D8h] [bp-38h]@89

  v299 = a3;
  v300 = a2;
  v304 = a1;
  v3 = 0xCu % dword_27F98F8;
  v4 = *(_DWORD *)(dword_27F98F4 + 4 * (0xCu % dword_27F98F8));
  if ( !v4 )
    goto LABEL_13;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    _ZF = v6 == 12;
    if ( v6 == 12 )
      _ZF = *(_DWORD *)(v5 + 4) == 12;
    if ( _ZF )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27F98F8 == v3 )
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
    v10[1] = 12;
    v10[2] = &unk_28898CC;
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v3,
           0xCu,
           (int)v10);
  v11 = (const void *)*(_DWORD *)HIDWORD(v304);
  v12 = *(_DWORD **)(v4 + 8);
  v13 = *(_DWORD *)(*(_DWORD *)HIDWORD(v304) - 12);
  if ( v13 != *(v12 - 3) || memcmp(*(const void **)HIDWORD(v304), v12, *(_DWORD *)(*(_DWORD *)HIDWORD(v304) - 12)) )
    v14 = 0xDu % dword_27F98F8;
    v15 = *(_DWORD *)(dword_27F98F4 + 4 * (0xDu % dword_27F98F8));
    if ( !v15 )
      goto LABEL_28;
    v16 = *(_DWORD *)v15;
    v17 = *(_DWORD *)(*(_DWORD *)v15 + 12);
    while ( 1 )
      v18 = v17 == 13;
      if ( v17 == 13 )
        v18 = *(_DWORD *)(v16 + 4) == 13;
      if ( v18 )
        break;
      v19 = *(_DWORD *)v16;
      if ( *(_DWORD *)v16 )
      {
        v17 = *(_DWORD *)(v19 + 12);
        v15 = v16;
        v16 = *(_DWORD *)v16;
        if ( *(_DWORD *)(v19 + 12) % (unsigned int)dword_27F98F8 == v14 )
          continue;
      }
    v20 = v15 == 0;
    if ( v15 )
      v15 = *(_DWORD *)v15;
      v20 = v15 == 0;
    if ( v20 )
LABEL_28:
      v21 = operator new(0x10u);
      *v21 = 0;
      v21[1] = 13;
      v21[2] = &unk_28898CC;
      v15 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F98F4,
              v14,
              0xDu,
              (int)v21);
      v11 = (const void *)*(_DWORD *)HIDWORD(v304);
      v13 = *(_DWORD *)(*(_DWORD *)HIDWORD(v304) - 12);
    v22 = *(_DWORD **)(v15 + 8);
    if ( v13 != *(v22 - 3) || memcmp(v11, v22, v13) )
      v23 = 0xEu % dword_27F98F8;
      v24 = *(_DWORD *)(dword_27F98F4 + 4 * (0xEu % dword_27F98F8));
      if ( !v24 )
        goto LABEL_43;
      v25 = *(_DWORD *)v24;
      v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
      while ( 1 )
        v27 = v26 == 14;
        if ( v26 == 14 )
          v27 = *(_DWORD *)(v25 + 4) == 14;
        if ( v27 )
          break;
        v28 = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 )
        {
          v26 = *(_DWORD *)(v28 + 12);
          v24 = v25;
          v25 = *(_DWORD *)v25;
          if ( *(_DWORD *)(v28 + 12) % (unsigned int)dword_27F98F8 == v23 )
            continue;
        }
      v29 = v24 == 0;
      if ( v24 )
        v24 = *(_DWORD *)v24;
        v29 = v24 == 0;
      if ( v29 )
LABEL_43:
        v30 = operator new(0x10u);
        *v30 = 0;
        v30[1] = 14;
        v30[2] = &unk_28898CC;
        v24 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27F98F4,
                v23,
                0xEu,
                (int)v30);
        v11 = (const void *)*(_DWORD *)HIDWORD(v304);
        v13 = *(_DWORD *)(*(_DWORD *)HIDWORD(v304) - 12);
      v31 = *(_DWORD **)(v24 + 8);
      if ( v13 != *(v31 - 3) || memcmp(v11, v31, v13) )
        v32 = 0xFu % dword_27F98F8;
        v33 = *(_DWORD *)(dword_27F98F4 + 4 * (0xFu % dword_27F98F8));
        if ( !v33 )
          goto LABEL_58;
        v34 = *(_DWORD *)v33;
        v35 = *(_DWORD *)(*(_DWORD *)v33 + 12);
        while ( 1 )
          v36 = v35 == 15;
          if ( v35 == 15 )
            v36 = *(_DWORD *)(v34 + 4) == 15;
          if ( v36 )
            break;
          v37 = *(_DWORD *)v34;
          if ( *(_DWORD *)v34 )
          {
            v35 = *(_DWORD *)(v37 + 12);
            v33 = v34;
            v34 = *(_DWORD *)v34;
            if ( *(_DWORD *)(v37 + 12) % (unsigned int)dword_27F98F8 == v32 )
              continue;
          }
        v38 = v33 == 0;
        if ( v33 )
          v33 = *(_DWORD *)v33;
          v38 = v33 == 0;
        if ( v38 )
LABEL_58:
          v39 = operator new(0x10u);
          *v39 = 0;
          v39[1] = 15;
          v39[2] = &unk_28898CC;
          v33 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27F98F4,
                  v32,
                  0xFu,
                  (int)v39);
          v11 = (const void *)*(_DWORD *)HIDWORD(v304);
          v13 = *(_DWORD *)(*(_DWORD *)HIDWORD(v304) - 12);
        v40 = *(_DWORD **)(v33 + 8);
        if ( v13 != *(v40 - 3) || memcmp(v11, v40, v13) )
          v41 = 0x11u % dword_27F98F8;
          v42 = *(_DWORD *)(dword_27F98F4 + 4 * (0x11u % dword_27F98F8));
          if ( !v42 )
            goto LABEL_73;
          v43 = *(_DWORD *)v42;
          v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
          while ( 1 )
            v45 = v44 == 17;
            if ( v44 == 17 )
              v45 = *(_DWORD *)(v43 + 4) == 17;
            if ( v45 )
              break;
            v46 = *(_DWORD *)v43;
            if ( *(_DWORD *)v43 )
            {
              v44 = *(_DWORD *)(v46 + 12);
              v42 = v43;
              v43 = *(_DWORD *)v43;
              if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27F98F8 == v41 )
                continue;
            }
          v47 = v42 == 0;
          if ( v42 )
            v42 = *(_DWORD *)v42;
            v47 = v42 == 0;
          if ( v47 )
LABEL_73:
            v48 = operator new(0x10u);
            *v48 = 0;
            v48[1] = 17;
            v48[2] = &unk_28898CC;
            v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    (int)&dword_27F98F4,
                    v41,
                    0x11u,
                    (int)v48);
            v11 = (const void *)*(_DWORD *)HIDWORD(v304);
            v13 = *(_DWORD *)(*(_DWORD *)HIDWORD(v304) - 12);
          v49 = *(_DWORD **)(v42 + 8);
          if ( v13 != *(v49 - 3) || memcmp(v11, v49, v13) )
            return;
  v50 = v304;
  *(_BYTE *)(v304 + 97) = 0;
  v51 = 0xAu % dword_27F98F8;
  v52 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
  if ( !v52 )
    goto LABEL_88;
  v53 = *(_DWORD *)v52;
  v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
    v55 = v54 == 10;
    if ( v54 == 10 )
      v55 = *(_DWORD *)(v53 + 4) == 10;
    if ( v55 )
    v56 = *(_DWORD *)v53;
    if ( *(_DWORD *)v53 )
      v54 = *(_DWORD *)(v56 + 12);
      v52 = v53;
      v53 = *(_DWORD *)v53;
      if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27F98F8 == v51 )
  v57 = v52 == 0;
  if ( v52 )
    v52 = *(_DWORD *)v52;
    v57 = v52 == 0;
  if ( v57 )
LABEL_88:
    v58 = operator new(0x10u);
    *v58 = 0;
    v58[1] = 10;
    v58[2] = &unk_28898CC;
    v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F98F4,
            v51,
            0xAu,
            (int)v58);
  sub_21E8AF4(&v352, (int *)(v52 + 8));
  v59 = 0xBu % dword_27F98F8;
  v60 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v60 )
    goto LABEL_101;
  v61 = *(_DWORD *)v60;
  v62 = *(_DWORD *)(*(_DWORD *)v60 + 12);
    v63 = v62 == 11;
    if ( v62 == 11 )
      v63 = *(_DWORD *)(v61 + 4) == 11;
    if ( v63 )
    v64 = *(_DWORD *)v61;
    if ( *(_DWORD *)v61 )
      v62 = *(_DWORD *)(v64 + 12);
      v60 = v61;
      v61 = *(_DWORD *)v61;
      if ( *(_DWORD *)(v64 + 12) % (unsigned int)dword_27F98F8 == v59 )
  v65 = v60 == 0;
  if ( v60 )
    v60 = *(_DWORD *)v60;
    v65 = v60 == 0;
  if ( v65 )
LABEL_101:
    v66 = operator new(0x10u);
    *v66 = 0;
    v66[1] = 11;
    v66[2] = &unk_28898CC;
    v60 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v59,
            0xBu,
            (int)v66);
  sub_21E8AF4(&v351, (int *)(v60 + 8));
  sub_21E8AF4(&v348, &v352);
  ContainerManagerController::getContainerController((int)&v349, v304, (int **)&v348);
  v67 = *(_QWORD *)&v349;
  if ( v350 )
    v68 = (unsigned int *)(v350 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    else
      v69 = (*v68)--;
    if ( v69 == 1 )
      v70 = (unsigned int *)(HIDWORD(v67) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v67) + 8))(HIDWORD(v67));
      if ( &pthread_create )
        __dmb();
        do
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
      else
        v71 = (*v70)--;
      if ( v71 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v67) + 12))(HIDWORD(v67));
  v72 = (void *)(v348 - 12);
  if ( (int *)(v348 - 12) != &dword_28898C0 )
    v194 = (unsigned int *)(v348 - 4);
        v195 = __ldrex(v194);
      while ( __strex(v195 - 1, v194) );
      v195 = (*v194)--;
    if ( v195 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  sub_21E8AF4(&v345, &v351);
  ContainerManagerController::getContainerController((int)&v346, v304, (int **)&v345);
  *(_QWORD *)&v73 = *(_QWORD *)&v346;
  if ( v347 )
    v75 = (unsigned int *)(v347 + 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 == 1 )
      v77 = (unsigned int *)(v74 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 8))(v74);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 12))(v74);
  v79 = (void *)(v345 - 12);
  if ( (int *)(v345 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v345 - 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  ContainerManagerController::getContainerManagerModel((ContainerManagerController *)&v343, v304);
  v80 = v344;
  if ( !v344 )
    goto LABEL_468;
  v81 = *(_DWORD *)(v344 + 4);
  v82 = (unsigned int *)(v344 + 4);
  do
      if ( !v81 )
        v85 = 1;
        v80 = 0;
        goto LABEL_142;
      v83 = __ldrex(v82);
      if ( v83 == v81 )
      __clrex();
      v81 = v83;
    v84 = __strex(v81 + 1, v82);
    v81 = v83;
  while ( v84 );
  __dmb();
  v85 = 0;
  if ( !*v82 )
    v85 = 1;
LABEL_142:
  v297 = v80;
  v86 = v344;
  v87 = v343;
  if ( v85 )
    v87 = 0;
  if ( v344 )
    v88 = (unsigned int *)(v344 + 8);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 == 1 )
      (*(void (**)(void))(*(_DWORD *)v86 + 12))();
  if ( !v87 )
    goto LABEL_454;
  sub_21E8AF4(&v340, (int *)HIDWORD(v304));
  ContainerManagerController::getContainerController((int)&v341, v304, (int **)&v340);
  v90 = (void *)(v340 - 12);
  if ( (int *)(v340 - 12) != &dword_28898C0 )
    v198 = (unsigned int *)(v340 - 4);
        v199 = __ldrex(v198);
      while ( __strex(v199 - 1, v198) );
      v199 = (*v198)--;
    if ( v199 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v295 = v73;
  v296 = (ContainerController *)v67;
  v91 = (ItemInstance *)ContainerController::getItem(v341, v300);
  v92 = (Player *)ContainerManagerModel::getPlayer((ContainerManagerModel *)HIDWORD(v67));
  v93 = (PlayerInventoryProxy *)Player::getSupplies(v92);
  v94 = PlayerInventoryProxy::_getInventoryContainer(v93);
  v95 = (FillingContainer *)v94;
  v96 = (Recipes *)(*(int (**)(void))(*(_DWORD *)v94 + 44))();
  v293 = v96;
  v97 = Recipes::getInstance(v96);
  Recipes::getAllRecipesFor((Recipes *)&v338, v97, v91);
  v294 = v95;
  v98 = 0;
  v99 = 0;
  if ( v339 != v338 )
    v100 = (ItemPack *)&v335;
    v101 = 0;
    v102 = 0;
    v98 = 0;
    v99 = 0;
      if ( v98 == v102 )
        v104 = v98 - (_DWORD)v99;
        v105 = 0;
        v289 = v101;
        v106 = (v98 - (signed int)v99) >> 5;
        v107 = v106;
        if ( !(v104 >> 5) )
          v107 = 1;
        v108 = v107 + (v104 >> 5);
        v109 = v108;
        if ( 0 != v108 >> 27 )
          v109 = 0x7FFFFFF;
        if ( v108 < v107 )
        if ( v109 )
          v110 = v102;
          if ( v109 >= 0x8000000 )
            sub_21E57F4();
          v105 = (char *)operator new(32 * v109);
          v102 = v110;
        v103 = (unsigned int)v105;
        *(_DWORD *)&v105[32 * v106] = 0;
        v111 = (int)&v105[32 * v106];
        *(_DWORD *)(v111 + 4) = 0;
        *(_DWORD *)(v111 + 8) = 0;
        *(_DWORD *)(v111 + 12) = 0;
        *(_DWORD *)(v111 + 16) = 0;
        *(_DWORD *)(v111 + 20) = 0;
        *(_DWORD *)(v111 + 24) = 0;
        *(_DWORD *)(v111 + 28) = 0x7FFFFFFF;
        if ( v99 != (char *)v102 )
          v112 = 0;
          v113 = v99;
          do
            v114 = (int)&v99[v112];
            *(_DWORD *)&v105[v112] = *(_DWORD *)v113;
            v115 = (int)&v105[v112];
            v112 += 32;
            *(_DWORD *)(v115 + 4) = 0;
            *(_DWORD *)(v115 + 8) = 0;
            *(_DWORD *)(v115 + 12) = 0;
            *(_DWORD *)(v115 + 4) = *(_DWORD *)(v114 + 4);
            *(_DWORD *)(v114 + 4) = 0;
            v116 = *(_DWORD *)(v115 + 8);
            *(_DWORD *)(v115 + 8) = *(_DWORD *)(v114 + 8);
            *(_DWORD *)(v114 + 8) = v116;
            v117 = *(_DWORD *)(v115 + 12);
            *(_DWORD *)(v115 + 12) = *(_DWORD *)(v114 + 12);
            *(_DWORD *)(v114 + 12) = v117;
            *(_DWORD *)(v115 + 16) = 0;
            *(_DWORD *)(v115 + 20) = 0;
            *(_DWORD *)(v115 + 24) = 0;
            *(_DWORD *)(v115 + 16) = *(_DWORD *)(v114 + 16);
            *(_DWORD *)(v114 + 16) = 0;
            v118 = *(_DWORD *)(v115 + 20);
            *(_DWORD *)(v115 + 20) = *(_DWORD *)(v114 + 20);
            *(_DWORD *)(v114 + 20) = v118;
            v119 = *(_DWORD *)(v115 + 24);
            *(_DWORD *)(v115 + 24) = *(_DWORD *)(v114 + 24);
            *(_DWORD *)(v114 + 24) = v119;
            *(_DWORD *)(v115 + 28) = *(_DWORD *)(v114 + 28);
            v113 = (char *)(v114 + 32);
          while ( v102 - (_DWORD)v99 != v112 );
          v103 = (unsigned int)&v105[((v102 - 32 - (_DWORD)v99) & 0xFFFFFFE0) + 32];
        sub_1688CB0((int)v99, v102);
        if ( v99 )
          operator delete(v99);
        v101 = v289;
        v100 = (ItemPack *)&v335;
        v99 = v105;
        v286 = (int)&v105[32 * v109];
        v286 = v102;
        v103 = v98;
        *(_DWORD *)v98 = 0;
        *(_DWORD *)(v98 + 4) = 0;
        *(_DWORD *)(v98 + 8) = 0;
        *(_DWORD *)(v98 + 12) = 0;
        *(_DWORD *)(v98 + 16) = 0;
        *(_DWORD *)(v98 + 20) = 0;
        *(_DWORD *)(v98 + 24) = 0;
        *(_DWORD *)(v98 + 28) = 0x7FFFFFFF;
      v120 = *((_DWORD *)v338 + v101);
      *(_DWORD *)v103 = v120;
      v121 = (*(int (**)(void))(*(_DWORD *)v120 + 40))();
      ItemPack::getItemInstances(v100, v121);
      v122 = *(void **)(v103 + 16);
      *(_DWORD *)(v103 + 16) = 0;
      v290 = v101;
      v301 = v103 + 32;
      v123 = v122;
      v124 = *(void **)(v103 + 20);
      *(_DWORD *)(v103 + 20) = 0;
      *(_DWORD *)(v103 + 24) = 0;
      *(_DWORD *)(v103 + 16) = v335;
      v335 = 0;
      v125 = *(_DWORD *)(v103 + 20);
      *(_DWORD *)(v103 + 20) = v336;
      v336 = v125;
      v126 = *(_DWORD *)(v103 + 24);
      *(_DWORD *)(v103 + 24) = v337;
      v337 = v126;
      if ( v122 != v124 )
          v127 = (void *)*((_DWORD *)v123 + 13);
          if ( v127 )
            operator delete(v127);
          v128 = (void *)*((_DWORD *)v123 + 9);
          if ( v128 )
            operator delete(v128);
          v129 = *((_DWORD *)v123 + 2);
          if ( v129 )
            (*(void (**)(void))(*(_DWORD *)v129 + 4))();
          *((_DWORD *)v123 + 2) = 0;
          v123 = (char *)v123 + 72;
        while ( v124 != v123 );
      if ( v122 )
        operator delete(v122);
      v130 = *(_QWORD *)&v335;
      if ( v335 != v336 )
          v131 = *(void **)(v130 + 52);
          if ( v131 )
            operator delete(v131);
          v132 = *(void **)(v130 + 36);
          if ( v132 )
            operator delete(v132);
          v133 = *(_DWORD *)(v130 + 8);
          if ( v133 )
            (*(void (**)(void))(*(_DWORD *)v133 + 4))();
          *(_DWORD *)(v130 + 8) = 0;
          LODWORD(v130) = v130 + 72;
        while ( HIDWORD(v130) != (_DWORD)v130 );
        LODWORD(v130) = v335;
      v283 = (int *)(v103 + 4);
      if ( (_DWORD)v130 )
        operator delete((void *)v130);
      v134 = 0;
      v333 = 0LL;
      v135 = v296;
      v334 = 0;
      while ( v134 < ContainerController::getContainerSize(v296) )
        v136 = (ItemInstance *)ContainerController::getItem(v296, v134);
        sub_1684F44(v136, (__int64 *)(v103 + 16), &v333);
        ++v134;
      HIDWORD(v304) = v99;
      for ( i = FillingContainer::getLinkedSlotsCount(v294); i < (signed int)v293; ++i )
        v138 = (ItemInstance *)(*(int (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v294 + 16))(v294, i);
        sub_1684F44(v138, (__int64 *)(v103 + 16), &v333);
      v139 = *(_QWORD *)(v103 + 16);
      v100 = (ItemPack *)&v335;
      if ( HIDWORD(v139) != (_DWORD)v139 )
LABEL_261:
      v296 = v135;
      v173 = v333;
      v99 = (char *)HIDWORD(v304);
      v50 = v304;
      v80 = v297;
      if ( (_DWORD)v333 != HIDWORD(v333) )
          v174 = *(_DWORD *)(v173 + 12);
          if ( v174 )
            (*(void (**)(void))(*(_DWORD *)v174 + 4))();
          *(_DWORD *)(v173 + 12) = 0;
          LODWORD(v173) = v173 + 16;
        while ( HIDWORD(v173) != (_DWORD)v173 );
        LODWORD(v173) = v333;
      if ( (_DWORD)v173 )
        operator delete((void *)v173);
      v98 = v301;
      v102 = v286;
      v101 = v290 + 1;
      if ( v290 + 1 >= (unsigned int)((v339 - (_BYTE *)v338) >> 2) )
        goto LABEL_269;
    v140 = 0;
      v270 = v140;
      v141 = v139 + 72 * v140;
      v142 = ItemInstance::getId((ItemInstance *)(v139 + 72 * v140));
      v143 = ItemInstance::getAuxValue((ItemInstance *)v141);
      v279 = *(_BYTE *)(v141 + 14);
      v144 = (int *)ItemInstance::getUserData((ItemInstance *)v141);
      v272 = v143;
      ptr = (void *)v142;
      v145 = HIDWORD(v333);
      v146 = v333;
          if ( Recipe::itemsMatch(
                 (Recipe *)v141,
                 (const ItemInstance *)*(_QWORD *)v146,
                 *(_QWORD *)v146 >> 32,
                 *(_DWORD *)(v146 + 12),
                 v269) == 1 )
            v147 = *(_DWORD *)(v146 + 8);
            if ( v147 >= v279 )
          v146 += 16;
          if ( v145 == v146 )
            goto LABEL_209;
        v152 = *(_QWORD *)(v103 + 8);
        if ( v152 == *(_QWORD *)(v103 + 8) >> 32 )
          v155 = v152 - *v283;
          v156 = v155 >> 4;
          if ( 0 == v155 >> 4 )
            v156 = 1;
          v157 = v156 + (v155 >> 4);
          v158 = v157;
          if ( 0 != v157 >> 28 )
            v158 = 0xFFFFFFF;
          if ( v157 < v156 )
          if ( v158 >= 0x10000000 )
          v273 = v158;
          v159 = (char *)operator new(16 * v158);
          v160 = v159;
          v162 = *(_QWORD *)(v103 + 4) >> 32;
          v161 = *(_QWORD *)(v103 + 4);
          v163 = (int)&v159[v162 - v161];
          *(_DWORD *)&v159[v162 - v161] = *(_DWORD *)v146;
          *(_DWORD *)(v163 + 4) = *(_DWORD *)(v146 + 4);
          *(_DWORD *)(v163 + 8) = *(_DWORD *)(v146 + 8);
          v164 = (CompoundTag *)&v159[v162 - v161 + 12];
          v165 = *(_DWORD *)(v146 + 12);
          if ( v165 )
            CompoundTag::clone(v164, v165);
            v162 = *(_QWORD *)(v103 + 4) >> 32;
            v161 = *(_QWORD *)(v103 + 4);
          else
            *(_DWORD *)v164 = 0;
          if ( v161 == v162 )
            ptra = v160;
            v170 = (int)(v160 + 16);
            v166 = (CompoundTag *)(v160 + 12);
            do
              v167 = v166;
              *((_DWORD *)v166 - 3) = *(_DWORD *)v161;
              v168 = (int)v166 - 12;
              *(_DWORD *)(v168 + 4) = *(_DWORD *)(v161 + 4);
              *(_DWORD *)(v168 + 8) = *(_DWORD *)(v161 + 8);
              v169 = *(_DWORD *)(v161 + 12);
              if ( v169 )
                CompoundTag::clone(v166, v169);
              else
                *(_DWORD *)v166 = 0;
              v161 += 16;
              v166 = (CompoundTag *)((char *)v167 + 16);
            while ( v161 != v162 );
            v171 = *(_QWORD *)(v103 + 4) >> 32;
            v162 = *(_QWORD *)(v103 + 4);
            v170 = (int)v167 + 20;
            if ( v162 != v171 )
              do
              {
                v172 = *(_DWORD *)(v162 + 12);
                if ( v172 )
                  (*(void (**)(void))(*(_DWORD *)v172 + 4))();
                *(_DWORD *)(v162 + 12) = 0;
                v162 += 16;
              }
              while ( v171 != v162 );
              v162 = *v283;
            v100 = (ItemPack *)&v335;
          v135 = v296;
          if ( v162 )
            operator delete((void *)v162);
          *(_DWORD *)(v103 + 4) = ptra;
          *(_DWORD *)(v103 + 8) = v170;
          *(_DWORD *)(v103 + 12) = &ptra[16 * v273];
        else
          *(_DWORD *)v152 = *(_DWORD *)v146;
          *(_DWORD *)(v152 + 4) = *(_DWORD *)(v146 + 4);
          *(_DWORD *)(v152 + 8) = v147;
          v153 = (CompoundTag *)(v152 + 12);
          v154 = *(_DWORD *)(v146 + 12);
          if ( v154 )
            CompoundTag::clone(v153, v154);
            v152 = *(_DWORD *)(v103 + 8);
            *(_DWORD *)v153 = 0;
          *(_DWORD *)(v103 + 8) = v152 + 16;
        v332 = *(_DWORD *)(v146 + 8) / v279;
        v151 = (int *)(v103 + 28);
        if ( v332 < *(_DWORD *)(v103 + 28) )
          v151 = &v332;
        goto LABEL_260;
LABEL_209:
      if ( !*v144 )
      CompoundTag::clone((CompoundTag *)&v327, *v144);
      v328 = ptr;
      v329 = v272;
      v330 = 0;
      if ( !v327 )
        goto LABEL_213;
      CompoundTag::clone((CompoundTag *)&v331, v327);
LABEL_214:
      sub_168504A((int)v283, (int)&v328);
      if ( v331 )
        (*(void (**)(void))(*(_DWORD *)v331 + 4))();
      v331 = 0;
      if ( v327 )
        (*(void (**)(void))(*(_DWORD *)v327 + 4))();
      v327 = 0;
      v148 = HIDWORD(v333);
        v149 = v333 + 8;
          v150 = v149 - 8;
                 *(const ItemInstance **)(v149 - 8),
                 *(_DWORD *)(v149 - 4),
                 *(_DWORD *)(v149 + 4),
            *(_DWORD *)(*(_DWORD *)(v103 + 8) - 8) += *(_DWORD *)v149;
          v149 += 16;
        while ( v150 + 16 != v148 );
      v326 = *(_DWORD *)(*(_DWORD *)(v103 + 8) - 8) / v279;
      v151 = (int *)(v103 + 28);
      if ( v326 < *(_DWORD *)(v103 + 28) )
        v151 = &v326;
LABEL_260:
      *(_DWORD *)(v103 + 28) = *v151;
      v140 = v270 + 1;
      if ( v270 + 1 >= (unsigned int)(954437177 * ((HIDWORD(v139) - (signed int)v139) >> 3)) )
        goto LABEL_261;
    v327 = 0;
    v328 = ptr;
    v329 = v272;
    v330 = 0;
LABEL_213:
    v331 = 0;
    goto LABEL_214;
LABEL_269:
  if ( v99 == (char *)v98 )
    v305 = (int)v99;
    *(_DWORD *)(v50 + 92) = 0;
    if ( v296 )
      v191 = *(_BYTE *)(v50 + 72);
      (*(void (**)(void))(*(_DWORD *)v296 + 44))();
    if ( v295 )
      v192 = *(_DWORD *)(v50 + 92);
      v193 = *(_BYTE *)(v50 + 72);
      (*(void (**)(void))(*(_DWORD *)v295 + 44))();
    goto LABEL_436;
  v175 = 0;
  if ( !((v98 - (signed int)v99) >> 5) )
    goto LABEL_324;
  __asm { VLDR            S16, =0.0 }
  v177 = 0;
  ptrb = (void *)((v98 - (signed int)v99) >> 5);
  while ( !*(_BYTE *)(v50 + 72) && (*(int (**)(void))(**(_DWORD **)&v99[32 * v177] + 12))() && !*(_BYTE *)(v50 + 72) )
LABEL_293:
    if ( ++v177 >= (unsigned int)ptrb )
      goto LABEL_324;
  v178 = (int)&v99[32 * v177];
  if ( *(_DWORD *)(v178 + 28) <= 0 )
    v280 = __PAIR__(v175, v177);
    v302 = v98;
    HIDWORD(v304) = v99;
    v179 = *(_QWORD *)(v178 + 16);
    v284 = *(_QWORD *)(v178 + 16) >> 32;
    if ( v179 == v284 )
      _R5 = 0;
      _R8 = 0;
      v291 = (int *)(v178 + 8);
      v287 = (_DWORD *)(v178 + 4);
        v182 = v80;
        v183 = *(_BYTE *)(v179 + 14);
        v184 = *v291;
        if ( *v287 != *v291 )
          v185 = *v287 + 8;
            v186 = v185 - 8;
            if ( Recipe::itemsMatch(
                   (Recipe *)v179,
                   *(const ItemInstance **)(v185 - 8),
                   *(_DWORD *)(v185 - 4),
                   *(_DWORD *)(v185 + 4),
                   v269) == 1 )
              v187 = *(_DWORD *)v185;
              if ( (signed int)*(_BYTE *)(v179 + 14) < *(_DWORD *)v185 )
                v187 = *(_BYTE *)(v179 + 14);
              _R8 += v187;
            v185 += 16;
          while ( v186 + 16 != v184 );
        _R5 += v183;
        v179 += 72;
        v80 = v182;
      while ( v179 != v284 );
    __asm
      VMOV            S0, R5
      VMOV            S2, R8
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S2, S0
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S16, S0 }
    v175 = HIDWORD(v280);
    v177 = v280;
      v175 = v280;
    v99 = (char *)HIDWORD(v304);
    v50 = v304;
    v98 = v302;
    goto LABEL_293;
  v175 = v177;
LABEL_324:
  v200 = 32 * v175;
  v201 = (int)&v99[32 * v175];
  v202 = *(_DWORD *)&v99[v200];
  v203 = *(_DWORD *)(v201 + 28);
  v305 = (int)v99;
  *(_DWORD *)(v50 + 92) = v202;
  if ( v203 < 1 )
    v203 = 1;
  v204 = v296 == 0;
  if ( v296 )
    v204 = v202 == 0;
  if ( v204 )
    CraftingContainerManagerController::clearAllRecipes((CraftingContainerManagerController *)v50);
    v205 = v99;
    sub_1688CB0((int)v99, v98);
    goto LABEL_437;
  v288 = v203;
  if ( *(_BYTE *)(v50 + 72) || (*(int (**)(void))(*(_DWORD *)v202 + 12))() != 1 )
    *(_BYTE *)(v50 + 96) = 0;
    CraftingContainerManagerController::evacuateCraftingContainerToInventory(v50, v296);
    (*(void (__fastcall **)(ContainerController *, _DWORD, _DWORD, int))(*(_DWORD *)v296 + 44))(
      v296,
      *(_DWORD *)(v50 + 92),
      *(_BYTE *)(v50 + 72),
      v299);
    v206 = FillingContainer::getLinkedSlotsCount(v294);
    if ( v206 >= (signed int)v293 )
      goto LABEL_425;
    v207 = (ItemInstance *)&v320;
    v303 = (int *)(v201 + 4);
    v285 = (_DWORD *)(v201 + 16);
    v292 = (_DWORD *)(v201 + 8);
      v208 = (*(int (**)(void))(*(_DWORD *)v294 + 16))();
      ItemInstance::ItemInstance(v207, v208);
      v209 = v323 == 0;
      if ( v323 )
        v209 = v320 == 0;
      if ( v209 )
        goto LABEL_418;
      v210 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v320);
      if ( !v322 )
        HIDWORD(v210) = 1;
      if ( v210 )
      v211 = ItemInstance::getId((ItemInstance *)&v320);
      v212 = ItemInstance::getAuxValue((ItemInstance *)&v320);
      v213 = ItemInstance::getUserData((ItemInstance *)&v320);
      v214 = v211;
      v215 = *v303;
      if ( *v292 == *v303 )
      v216 = 0;
        if ( v214 != *(_DWORD *)(v215 + 16 * v216) )
          goto LABEL_417;
        v217 = v215 + 16 * v216;
        v218 = *(_DWORD *)(v217 + 4);
        v219 = v212 == v218;
        if ( v212 != v218 )
          v219 = v218 == 0x7FFF;
        if ( !v219 )
        v220 = *(_DWORD *)(v217 + 12);
        if ( !*(_DWORD *)v213 )
        if ( v220 )
          v221 = v213;
          v222 = v212;
          v223 = v214;
          v224 = (*(int (**)(void))(*(_DWORD *)v220 + 28))();
          v214 = v223;
          v212 = v222;
          v213 = v221;
          if ( v224 == 1 )
            goto LABEL_354;
LABEL_417:
        ++v216;
        v215 = *v303;
        if ( v216 >= (*v292 - *v303) >> 4 )
          goto LABEL_418;
      if ( v220 )
        goto LABEL_417;
LABEL_354:
      v274 = v214;
      ptrc = v213;
      v281 = v212;
      v225 = 0;
      v226 = *(_BYTE *)(v50 + 72);
      v298 = v80;
      v227 = v50;
      v228 = 4;
      if ( v226 )
        v228 = 9;
      v282 = 0;
      while ( 2 )
        v231 = (*(int (**)(void))(**(_DWORD **)(v227 + 92) + 16))();
        v232 = v231;
        v233 = *(_BYTE *)(v231 + 15);
        v234 = v233 == 0;
        if ( v233 )
          v234 = *(_DWORD *)v232 == 0;
        if ( !v234
          && !ItemInstance::isNull((ItemInstance *)v232)
          && *(_BYTE *)(v232 + 14)
          && Recipe::itemsMatch((Recipe *)v232, (const ItemInstance *)(*v285 + 72 * v216), v235) == 1 )
          v236 = ContainerController::getItem(v296, v225);
          ItemInstance::ItemInstance((ItemInstance *)&v314, v236);
          v237 = ItemInstance::getMaxStackSize((ItemInstance *)v232);
          v238 = v237;
          v239 = v322;
          _VF = __OFSUB__(v288, v237);
          _NF = v288 - v237 < 0;
          v240 = v317;
          if ( _NF ^ _VF )
            v238 = v288;
          if ( v238 < v322 )
            v239 = v238;
          v271 = v239;
          if ( v317 )
            if ( !v314 )
              goto LABEL_489;
            v241 = ItemInstance::isNull((ItemInstance *)&v314);
            v242 = 0;
            if ( !v316 )
              v242 = 1;
            _ZF = (v241 | v242) == 0;
            v240 = (unsigned int)*(unsigned __int16 *)&v316 >> 8;
            if ( !_ZF )
            v243 = v322;
            v244 = v271;
            if ( v322 >= v271 )
              if ( v238 - v316 < v322 )
                v243 = v238 - v316;
              v244 = v243;
            v271 = v244;
            if ( v244 < 1 )
              v229 = v98;
              v230 = 33;
            else
LABEL_489:
              v245 = v240 == 0;
              if ( v240 )
                v245 = v314 == 0;
              if ( v245 )
                goto LABEL_387;
              v246 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v314);
              if ( !v316 )
                HIDWORD(v246) = 1;
              if ( v246 || ItemInstance::matchesItem((ItemInstance *)&v314, (const ItemInstance *)&v320) == 1 )
              v230 = 31;
LABEL_387:
            if ( v299 == 1 )
              (*(void (**)(void))(*(_DWORD *)v296 + 60))();
              ItemInstance::remove((ItemInstance *)&v320, 1);
              ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v310, (const ItemInstance *)&v320);
              v247 = (ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v310);
              ItemInstance::set(v247, (unsigned __int8)v271);
              ContainerController::setItem((int)v296, v225, (int)&v310, 0, 1);
              ItemInstance::remove((ItemInstance *)&v320, v271);
              (*(void (**)(void))(*(_DWORD *)v294 + 32))();
              if ( v313 )
                operator delete(v313);
              if ( v312 )
                operator delete(v312);
              if ( v311 )
                (*(void (**)(void))(*(_DWORD *)v311 + 4))();
            v248 = 0;
            v249 = v323 == 0;
            if ( v323 )
              v249 = v320 == 0;
            if ( !v249 )
              if ( ItemInstance::isNull((ItemInstance *)&v320) )
                v248 = 0;
                v248 = v322;
                if ( v322 )
                  v248 = 1;
            v229 = v98;
            _ZF = v248 == 0;
            v230 = 31;
            v250 = v248 ^ 1;
              v230 = 0;
            v282 |= v250;
          if ( v319 )
            operator delete(v319);
          if ( v318 )
            operator delete(v318);
          if ( v315 )
            (*(void (**)(void))(*(_DWORD *)v315 + 4))();
          if ( v230 )
            _ZF = v230 == 33;
            v98 = v229;
        if ( ++v225 < v228 )
      v50 = v227;
      v80 = v298;
      v214 = v274;
      v213 = ptrc;
      v212 = v281;
      if ( !(v282 & 1) )
LABEL_418:
      if ( v325 )
        operator delete(v325);
      if ( v324 )
        operator delete(v324);
      v207 = (ItemInstance *)&v320;
      if ( v321 )
        (*(void (**)(void))(*(_DWORD *)v321 + 4))();
      if ( ++v206 >= (signed int)v293 )
LABEL_425:
        *(_BYTE *)(v50 + 128) = 1;
        goto LABEL_426;
  *(_BYTE *)(v50 + 96) = 1;
  CraftingContainerManagerController::evacuateCraftingContainerToInventory(v50, v296);
  (*(void (__fastcall **)(ContainerController *, _DWORD, _DWORD, int))(*(_DWORD *)v296 + 44))(
    v296,
    0,
    *(_BYTE *)(v50 + 72),
    v299);
LABEL_426:
  if ( v295 )
    v251 = *(_DWORD *)(v50 + 92);
    v252 = *(_BYTE *)(v50 + 72);
    (*(void (**)(void))(*(_DWORD *)v295 + 44))();
    if ( v288 >= 1 && v299 == 1 )
      v253 = (int *)(*(int (**)(void))(**(_DWORD **)(v50 + 92) + 20))();
      ItemInstance::ItemInstance((ItemInstance *)&v306, *v253);
      (*(void (**)(void))(*(_DWORD *)v295 + 60))();
      if ( v309 )
        operator delete(v309);
      if ( v308 )
        operator delete(v308);
      if ( v307 )
        (*(void (**)(void))(*(_DWORD *)v307 + 4))();
  *(_BYTE *)(v50 + 97) = 1;
LABEL_436:
  v205 = (char *)v305;
  sub_1688CB0(v305, v98);
  if ( v305 )
LABEL_437:
    operator delete(v205);
  if ( v338 )
    operator delete(v338);
  v254 = v342;
  if ( v342 )
    v255 = (unsigned int *)(v342 + 4);
        v256 = __ldrex(v255);
      while ( __strex(v256 - 1, v255) );
      v256 = (*v255)--;
    if ( v256 == 1 )
      v257 = (unsigned int *)(v254 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v254 + 8))(v254);
          v258 = __ldrex(v257);
        while ( __strex(v258 - 1, v257) );
        v258 = (*v257)--;
      if ( v258 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v254 + 12))(v254);
LABEL_454:
  if ( v80 )
    v259 = (unsigned int *)(v80 + 4);
        v260 = __ldrex(v259);
      while ( __strex(v260 - 1, v259) );
      v260 = (*v259)--;
    if ( v260 == 1 )
      v261 = (unsigned int *)(v80 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 8))(v80);
          v262 = __ldrex(v261);
        while ( __strex(v262 - 1, v261) );
        v262 = (*v261)--;
      if ( v262 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 12))(v80);
LABEL_468:
  v263 = (void *)(v351 - 12);
  if ( (int *)(v351 - 12) != &dword_28898C0 )
    v265 = (unsigned int *)(v351 - 4);
        v266 = __ldrex(v265);
      while ( __strex(v266 - 1, v265) );
      v266 = (*v265)--;
    if ( v266 <= 0 )
      j_j_j_j__ZdlPv_9(v263);
  v264 = (void *)(v352 - 12);
  if ( (int *)(v352 - 12) != &dword_28898C0 )
    v267 = (unsigned int *)(v352 - 4);
        v268 = __ldrex(v267);
      while ( __strex(v268 - 1, v267) );
      v268 = (*v267)--;
    if ( v268 <= 0 )
      j_j_j_j__ZdlPv_9(v264);
}


void __fastcall CraftingContainerManagerController::getCurrentContainerStateList(CraftingContainerManagerController *this, int a2)
{
  CraftingContainerManagerController *v2; // r11@1
  int v3; // r8@1
  int v4; // r9@1
  int v5; // r0@1
  int v6; // r6@2
  int v7; // r7@2
  bool v8; // zf@3
  int v9; // r5@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  int v12; // r6@14
  unsigned int *v13; // r1@15
  unsigned int v14; // r0@17
  unsigned int *v15; // r4@21
  unsigned int v16; // r0@23
  void *v17; // r0@28
  int v18; // r5@29
  unsigned int v19; // r1@30
  unsigned int *v20; // r0@30
  unsigned int v21; // r2@33
  unsigned int v22; // r3@34
  signed int v23; // r1@35
  int v24; // r0@39
  ContainerManagerModel *v25; // r4@39
  unsigned int *v26; // r2@42
  unsigned int v27; // r1@44
  Player *v28; // r0@50
  PlayerInventoryProxy *v29; // r0@50
  int v30; // r6@50
  int v31; // r5@52
  int v32; // r4@52
  int v33; // r0@52
  int v34; // r9@53
  int v35; // r7@53
  bool v36; // zf@54
  int v37; // r10@57
  bool v38; // zf@60
  _DWORD *v39; // r0@64
  __int64 v40; // kr08_8@65
  int *v41; // r7@65
  signed int i; // r10@68
  signed int v43; // r0@71
  int (__fastcall *v44)(FillingContainer *, signed int); // r2@71
  int v45; // r6@72
  int *v46; // r0@72
  int v47; // r5@73
  int v48; // r4@73
  bool v49; // zf@74
  int v50; // r7@77
  int v51; // r4@80
  int v52; // r9@80
  int *v53; // r0@80
  int v54; // r6@81
  int v55; // r5@81
  bool v56; // zf@82
  int v57; // r7@85
  bool v58; // zf@88
  _DWORD *v59; // r0@92
  bool v60; // zf@94
  _DWORD *v61; // r0@98
  unsigned int *v62; // r1@101
  unsigned int v63; // r0@103
  unsigned int *v64; // r4@107
  unsigned int v65; // r0@109
  unsigned int *v66; // r2@111
  signed int v67; // r1@113
  void *v68; // r0@118
  unsigned int *v69; // r2@120
  signed int v70; // r1@122
  FillingContainer *v71; // [sp+4h] [bp-5Ch]@50
  int v72; // [sp+8h] [bp-58h]@49
  int v73; // [sp+Ch] [bp-54h]@72
  int v74; // [sp+Ch] [bp-54h]@80
  ContainerController *v75; // [sp+10h] [bp-50h]@14
  int v76; // [sp+14h] [bp-4Ch]@99
  int v77; // [sp+18h] [bp-48h]@93
  int v78; // [sp+1Ch] [bp-44h]@51
  ContainerManagerModel *v79; // [sp+20h] [bp-40h]@29
  int v80; // [sp+24h] [bp-3Ch]@29
  int v81; // [sp+28h] [bp-38h]@14
  ContainerController *v82; // [sp+2Ch] [bp-34h]@14
  int v83; // [sp+30h] [bp-30h]@14
  int v84; // [sp+34h] [bp-2Ch]@14

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = 0xAu % dword_27F98F8;
  v5 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 10;
    if ( v7 == 10 )
      v8 = *(_DWORD *)(v6 + 4) == 10;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27F98F8 == v4 )
        continue;
    }
  }
  v10 = v5 == 0;
  if ( v5 )
    v5 = *(_DWORD *)v5;
    v10 = v5 == 0;
  if ( v10 )
LABEL_13:
    v11 = operator new(0x10u);
    *v11 = 0;
    v11[1] = 10;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v4,
           0xAu,
           (int)v11);
  sub_21E8AF4(&v84, (int *)(v5 + 8));
  sub_21E8AF4(&v81, &v84);
  ContainerManagerController::getContainerController((int)&v82, v3, (int **)&v81);
  v12 = v83;
  v75 = v82;
  if ( v83 )
    v13 = (unsigned int *)(v83 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v17 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v81 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  ContainerManagerController::getContainerManagerModel((ContainerManagerController *)&v79, v3);
  v18 = v80;
  if ( v80 )
    v19 = *(_DWORD *)(v80 + 4);
    v20 = (unsigned int *)(v80 + 4);
    do
      while ( 1 )
        if ( !v19 )
        {
          v23 = 1;
          v18 = 0;
          goto LABEL_39;
        }
        v21 = __ldrex(v20);
        if ( v21 == v19 )
          break;
        __clrex();
        v19 = v21;
      v22 = __strex(v19 + 1, v20);
      v19 = v21;
    while ( v22 );
    __dmb();
    v23 = 0;
    if ( !*v20 )
      v23 = 1;
LABEL_39:
    v24 = v80;
    v25 = v79;
    if ( v23 )
      v25 = 0;
    if ( v80 )
      v26 = (unsigned int *)(v80 + 8);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        (*(void (**)(void))(*(_DWORD *)v24 + 12))();
    v72 = v18;
    if ( v25 )
      v28 = (Player *)ContainerManagerModel::getPlayer(v25);
      v29 = (PlayerInventoryProxy *)Player::getSupplies(v28);
      v71 = (FillingContainer *)PlayerInventoryProxy::_getInventoryContainer(v29);
      v30 = 0;
        v78 = v30;
        if ( v30 >= ContainerController::getContainerSize(v75) )
        v31 = ContainerController::getItem(v75, v30);
        v32 = 0xAu % dword_27F98F8;
        v33 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
        if ( !v33 )
          goto LABEL_64;
        v34 = *(_DWORD *)v33;
        v35 = *(_DWORD *)(*(_DWORD *)v33 + 12);
        while ( 1 )
          v36 = v35 == 10;
          if ( v35 == 10 )
            v36 = *(_DWORD *)(v34 + 4) == 10;
          if ( v36 )
            break;
          v37 = *(_DWORD *)v34;
          if ( *(_DWORD *)v34 )
          {
            v35 = *(_DWORD *)(v37 + 12);
            v33 = v34;
            v34 = *(_DWORD *)v34;
            if ( *(_DWORD *)(v37 + 12) % (unsigned int)dword_27F98F8 == v32 )
              continue;
          }
        v38 = v33 == 0;
        if ( v33 )
          v33 = *(_DWORD *)v33;
          v38 = v33 == 0;
        if ( v38 )
LABEL_64:
          v39 = operator new(0x10u);
          *v39 = 0;
          v39[1] = 10;
          v39[2] = &unk_28898CC;
          v33 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27F98F4,
                  v32,
                  0xAu,
                  (int)v39);
        v40 = *(_QWORD *)((char *)v2 + 4);
        v41 = (int *)(v33 + 8);
        if ( (_DWORD)v40 == HIDWORD(v40) )
          std::vector<ItemStateData,std::allocator<ItemStateData>>::_M_emplace_back_aux<ItemInstance const&,std::string &,int &>(
            (unsigned __int64 *)v2,
            v31,
            v41,
            &v78);
          ++v30;
        else
          ItemInstance::ItemInstance((ItemInstance *)v40, v31);
          sub_21E8AF4((int *)(v40 + 72), v41);
          *(_DWORD *)(v40 + 76) = v30;
          *(_BYTE *)(v40 + 80) = 0;
          *((_DWORD *)v2 + 1) += 88;
      for ( i = FillingContainer::getLinkedSlotsCount(v71);
            i < (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v71 + 44))(v71);
            ++i )
        v43 = FillingContainer::getLinkedSlotsCount(v71);
        v44 = *(int (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v71 + 16);
        if ( i >= 2 * v43 )
          v74 = v44(v71, i);
          v51 = dword_27F98F8;
          v52 = 0x1Au % dword_27F98F8;
          v53 = *(int **)(dword_27F98F4 + 4 * (0x1Au % dword_27F98F8));
          if ( !v53 )
            goto LABEL_98;
          v54 = *v53;
          v55 = *(_DWORD *)(*v53 + 12);
          while ( 1 )
            v56 = v55 == 26;
            if ( v55 == 26 )
              v56 = *(_DWORD *)(v54 + 4) == 26;
            if ( v56 )
              break;
            v57 = *(_DWORD *)v54;
            if ( *(_DWORD *)v54 )
            {
              v55 = *(_DWORD *)(v57 + 12);
              v53 = (int *)v54;
              v54 = *(_DWORD *)v54;
              if ( *(_DWORD *)(v57 + 12) % (unsigned int)dword_27F98F8 == v52 )
                continue;
            }
          v60 = v53 == 0;
          if ( v53 )
            v51 = *v53;
            v60 = *v53 == 0;
          if ( v60 )
LABEL_98:
            v61 = operator new(0x10u);
            *v61 = 0;
            v61[1] = 26;
            v61[2] = &unk_28898CC;
            v51 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    (int)&dword_27F98F4,
                    v52,
                    0x1Au,
                    (int)v61);
          v76 = i - 2 * FillingContainer::getLinkedSlotsCount(v71);
          std::vector<ItemStateData,std::allocator<ItemStateData>>::emplace_back<ItemInstance const&,std::string &,int>(
            (int)v2,
            v74,
            (int *)(v51 + 8),
            &v76);
          v73 = v44(v71, i);
          v45 = 0x18u % dword_27F98F8;
          v46 = *(int **)(dword_27F98F4 + 4 * (0x18u % dword_27F98F8));
          if ( !v46 )
            goto LABEL_92;
          v47 = *v46;
          v48 = *(_DWORD *)(*v46 + 12);
            v49 = v48 == 24;
            if ( v48 == 24 )
              v49 = *(_DWORD *)(v47 + 4) == 24;
            if ( v49 )
            v50 = *(_DWORD *)v47;
            if ( *(_DWORD *)v47 )
              v48 = *(_DWORD *)(v50 + 12);
              v46 = (int *)v47;
              v47 = *(_DWORD *)v47;
              if ( *(_DWORD *)(v50 + 12) % (unsigned int)dword_27F98F8 == v45 )
          v58 = v46 == 0;
          if ( v46 )
            v48 = *v46;
            v58 = *v46 == 0;
          if ( v58 )
LABEL_92:
            v59 = operator new(0x10u);
            *v59 = 0;
            v59[1] = 24;
            v59[2] = &unk_28898CC;
            v48 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    v45,
                    0x18u,
                    (int)v59);
          v77 = i - FillingContainer::getLinkedSlotsCount(v71);
            v73,
            (int *)(v48 + 8),
            &v77);
    if ( v72 )
      v62 = (unsigned int *)(v72 + 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 == 1 )
        v64 = (unsigned int *)(v72 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
        if ( &pthread_create )
          __dmb();
          do
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
  v68 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v84 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
}


signed int __fastcall CraftingContainerManagerController::handleSwap(int a1, const void **a2, int a3, const void **a4, int a5)
{
  int **v5; // r6@1
  int **v6; // r5@1
  int v7; // r4@1
  int v8; // r7@1
  size_t v9; // r2@1
  int v10; // r0@2
  bool v11; // zf@2
  signed int v12; // r6@6
  unsigned __int64 *v13; // r4@7
  __int64 v14; // kr00_8@7
  unsigned int *v15; // r0@8
  unsigned int v16; // r1@10
  __int64 v17; // kr08_8@13
  unsigned int *v18; // r0@14
  unsigned int v19; // r1@16
  int v20; // r5@19
  int v21; // r4@19
  int v22; // r4@23
  unsigned int *v23; // r1@39
  unsigned int v24; // r0@41
  unsigned int *v25; // r4@45
  unsigned int v26; // r0@47
  unsigned int *v27; // r1@53
  unsigned int v28; // r0@55
  unsigned int *v29; // r4@59
  unsigned int v30; // r0@61
  char v32; // [sp+8h] [bp-B8h]@23
  int v33; // [sp+10h] [bp-B0h]@27
  void *v34; // [sp+2Ch] [bp-94h]@25
  void *ptr; // [sp+3Ch] [bp-84h]@23
  char v36; // [sp+50h] [bp-70h]@23
  int v37; // [sp+58h] [bp-68h]@33
  void *v38; // [sp+74h] [bp-4Ch]@31
  void *v39; // [sp+84h] [bp-3Ch]@29

  v5 = (int **)a2;
  v6 = (int **)a4;
  v7 = a1;
  v8 = a3;
  v9 = *((_DWORD *)*a2 - 3);
  if ( v9 != *((_DWORD *)*a4 - 3) )
    goto LABEL_69;
  v10 = memcmp(*a2, *a4, v9);
  v11 = v8 == a5;
  if ( v8 == a5 )
    v11 = v10 == 0;
  if ( v11 )
  {
    v12 = 0;
  }
  else
LABEL_69:
    v13 = (unsigned __int64 *)(v7 + 20);
    v14 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                       v13,
                       v5);
    if ( HIDWORD(v14) )
    {
      v15 = (unsigned int *)(HIDWORD(v14) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
      }
      else
        ++*v15;
    }
    v17 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                       v6);
    if ( HIDWORD(v17) )
      v18 = (unsigned int *)(HIDWORD(v17) + 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
        ++*v18;
    v20 = ContainerController::getItem((ContainerController *)v14, v8);
    v21 = ContainerController::getItem((ContainerController *)v17, a5);
    if ( ItemInstance::operator==((ItemInstance *)v20, (ItemInstance *)v21) )
      v12 = 0;
    else if ( (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)v17 + 12))(v17, v20, a5) == 1 )
      if ( (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)v14 + 12))(v14, v21, v8) )
        v22 = *(_BYTE *)(v21 + 14);
        ContainerController::removeItem((ContainerController *)&v36, v14, v8, *(_BYTE *)(v20 + 14));
        ContainerController::removeItem((ContainerController *)&v32, v17, a5, v22);
        ContainerController::setItem(v14, v8, (int)&v32, 0, 1);
        ContainerController::setItem(v17, a5, (int)&v36, 0, 1);
        if ( ptr )
          operator delete(ptr);
        if ( v34 )
          operator delete(v34);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        if ( v39 )
          operator delete(v39);
        if ( v38 )
          operator delete(v38);
        if ( v37 )
          (*(void (**)(void))(*(_DWORD *)v37 + 4))();
        v12 = 1;
        v12 = 0;
    else
      v23 = (unsigned int *)(HIDWORD(v17) + 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        v25 = (unsigned int *)(HIDWORD(v17) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 8))(HIDWORD(v17));
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 12))(HIDWORD(v17));
      v27 = (unsigned int *)(HIDWORD(v14) + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(HIDWORD(v14) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 8))(HIDWORD(v14));
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 12))(HIDWORD(v14));
  return v12;
}


void __fastcall CraftingContainerManagerController::~CraftingContainerManagerController(CraftingContainerManagerController *this)
{
  ContainerManagerController *v1; // r0@1

  v1 = CraftingContainerManagerController::~CraftingContainerManagerController(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall CraftingContainerManagerController::setSearchString(int result, int *a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  bool v7; // zf@7
  unsigned int *v8; // r5@17

  v2 = *(_DWORD *)(result + 68);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4 == 0;
          if ( *v4 )
          {
            result = *(_DWORD *)(result + 64);
            v7 = result == 0;
          }
          if ( !v7 )
            CraftingContainerManagerModel::setSearchString(result, a2);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v8 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v8);
              while ( __strex(result - 1, v8) );
            }
            else
              result = (*v8)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


void __fastcall CraftingContainerManagerController::handleRecipeSelected(__int64 a1, int a2, int a3)
{
  CraftingContainerManagerController::handleRecipeSelected(a1, a2, a3);
}


int __fastcall CraftingContainerManagerController::isItemFiltered(int a1, int a2, int **a3)
{
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r2@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16

  v3 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    (unsigned __int64 *)(a1 + 20),
                    a3);
  if ( HIDWORD(v3) )
  {
    v4 = (unsigned int *)(HIDWORD(v3) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  v6 = (*(int (**)(void))(*(_DWORD *)v3 + 16))();
    v7 = (unsigned int *)(HIDWORD(v3) + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(HIDWORD(v3) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 8))(HIDWORD(v3));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  return v6;
}


int __fastcall CraftingContainerManagerController::isExpandoItem(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r4@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  signed int v10; // r1@7
  int v11; // r0@11
  int v12; // r6@11
  unsigned int *v13; // r2@14
  unsigned int v14; // r1@16
  void *v15; // r0@22
  int v16; // r5@25
  unsigned int *v17; // r1@30
  unsigned int v18; // r0@32
  unsigned int *v19; // r6@36
  unsigned int v20; // r0@38
  unsigned int *v22; // r2@44
  signed int v23; // r1@46
  int v24; // [sp+0h] [bp-28h]@1
  int v25; // [sp+4h] [bp-24h]@1
  int v26; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  sub_21E8AF4(&v24, a2);
  ContainerManagerController::getContainerModel((int)&v25, v3, (int **)&v24);
  v5 = v26;
  if ( v26 )
  {
    v6 = *(_DWORD *)(v26 + 4);
    v7 = (unsigned int *)(v26 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v6 )
        {
          v10 = 1;
          v5 = 0;
          goto LABEL_11;
        }
        __dmb();
        v8 = __ldrex(v7);
        if ( v8 == v6 )
          break;
        __clrex();
        v6 = v8;
      }
      v9 = __strex(v6 + 1, v7);
      v6 = v8;
    }
    while ( v9 );
    __dmb();
    v10 = 0;
    if ( !*v7 )
      v10 = 1;
LABEL_11:
    v11 = v26;
    v12 = v25;
    if ( v10 )
      v12 = 0;
    if ( v26 )
      v13 = (unsigned int *)(v26 + 8);
      if ( &pthread_create )
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  }
  else
    v12 = 0;
    v5 = 0;
  v15 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( v12 )
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v12 + 56))(v12, v4) == 2 )
      v16 = 1;
      v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v12 + 56))(v12, v4);
      if ( v16 != 1 )
        v16 = 0;
    v16 = 0;
  if ( v5 )
    v17 = (unsigned int *)(v5 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v16;
}


int __fastcall CraftingContainerManagerController::handleTakeAmount(int a1, ContainerItemStack *a2, int a3, int **a4, int a5)
{
  int v5; // r10@1
  ContainerItemStack *v6; // r9@1
  int **v7; // r6@1
  int v8; // r7@1
  int v9; // r0@1
  int v10; // r11@2
  int v11; // r4@2
  bool v12; // zf@3
  int v13; // r8@6
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  _DWORD *v16; // r1@14
  size_t v17; // r2@14
  int v18; // r0@14
  int result; // r0@23
  int v20; // [sp+Ch] [bp-74h]@1
  char v21; // [sp+10h] [bp-70h]@17
  int v22; // [sp+18h] [bp-68h]@21
  void *v23; // [sp+34h] [bp-4Ch]@19
  void *ptr; // [sp+44h] [bp-3Ch]@17

  v5 = a1;
  v20 = a3;
  v6 = a2;
  v7 = a4;
  v8 = 0xBu % dword_27F98F8;
  v9 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 11;
    if ( v11 == 11 )
      v12 = *(_DWORD *)(v10 + 4) == 11;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27F98F8 == v8 )
        continue;
    }
  }
  v14 = v9 == 0;
  if ( v9 )
    v9 = *(_DWORD *)v9;
    v14 = v9 == 0;
  if ( v14 )
LABEL_13:
    v15 = operator new(0x10u);
    *v15 = 0;
    v15[1] = 11;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v8,
           0xBu,
           (int)v15);
  v16 = *(_DWORD **)(v9 + 8);
  v17 = *(*v7 - 3);
  v18 = *(v16 - 3);
  if ( v17 != v18 || (v18 = memcmp(*v7, v16, v17)) != 0 )
    if ( CraftingContainerManagerController::isCreativeContainer(v18, (const void **)v7) == 1 )
      CraftingContainerManagerController::_handleCreativeItem((ContainerItemStack *)&v21, v5, v6, v7, a5, 0);
      ItemInstance::operator=((int)v6, (int)&v21);
      if ( ptr )
        operator delete(ptr);
      if ( v23 )
        operator delete(v23);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      result = 0;
      v22 = 0;
    else
      result = j_j_j__ZN26ContainerManagerController16handleTakeAmountER18ContainerItemStack12ItemTakeTypeRKSsi(
                 v5,
                 (int)v6,
                 v20,
                 v7,
                 a5);
  else
    *(_BYTE *)(v5 + 97) = 0;
    CraftingContainerManagerController::_craftItem((CraftingContainerManagerController *)v5, v6);
    *(_BYTE *)(v5 + 97) = 1;
    *(_BYTE *)(v5 + 112) = 0;
    result = *(_DWORD *)(v5 + 120);
    *(_DWORD *)(v5 + 116) = result;
    *(_DWORD *)(v5 + 124) = 0;
    *(_BYTE *)(v5 + 128) = 0;
  return result;
}


int __fastcall CraftingContainerManagerController::craftItem(CraftingContainerManagerController *this, ContainerItemStack *a2, int a3)
{
  CraftingContainerManagerController *v3; // r4@1
  ContainerItemStack *v4; // r5@1
  int v5; // r7@4
  int v6; // r6@5
  int v7; // r0@5
  int result; // r0@7

  v3 = this;
  v4 = a2;
  *((_BYTE *)this + 97) = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
      CraftingContainerManagerController::_craftItem(this, a2);
  }
  else
    v5 = ContainerItemStack::getCount(a2);
    do
    {
      CraftingContainerManagerController::_craftItem(v3, v4);
      v6 = ContainerItemStack::getCount(v4);
      v7 = ItemInstance::getMaxStackSize((CraftingContainerManagerController *)((char *)v3 + 144));
      if ( v6 == v5 )
        break;
      v5 = v6;
    }
    while ( v6 < v7 );
  *((_BYTE *)v3 + 97) = 1;
  result = 0;
  *((_BYTE *)v3 + 112) = 0;
  *((_DWORD *)v3 + 29) = *((_DWORD *)v3 + 30);
  *((_DWORD *)v3 + 31) = 0;
  *((_BYTE *)v3 + 128) = 0;
  return result;
}


signed int __fastcall CraftingContainerManagerController::handleSplit(int a1, int a2, const void **a3, int a4, int a5)
{
  const void **v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  ItemGroup *v8; // r7@1
  signed int result; // r0@1

  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = (ItemGroup *)a1;
  result = CraftingContainerManagerController::isCreativeContainer(a1, a3);
  if ( !result )
    result = ContainerManagerController::handleSplit(v8, v6, (int)v5, v7, a5);
  return result;
}


ContainerManagerController *__fastcall CraftingContainerManagerController::~CraftingContainerManagerController(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  void *v7; // r0@12
  void *v8; // r0@14
  int v9; // r0@16
  int v10; // r5@18
  int v11; // r7@18
  void *v12; // r0@19
  void *v13; // r0@21
  int v14; // r0@23
  void *v15; // r0@29
  int v16; // r0@31
  unsigned int *v17; // r2@32
  unsigned int v18; // r1@34

  v1 = this;
  *(_DWORD *)this = &off_26ECD78;
  *(_QWORD *)&v2 = *((_QWORD *)this + 27);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 54);
  }
  if ( v2 )
    operator delete((void *)v2);
  v7 = (void *)*((_DWORD *)v1 + 49);
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_DWORD *)v1 + 45);
  if ( v8 )
    operator delete(v8);
  v9 = *((_DWORD *)v1 + 38);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 38) = 0;
  v11 = *(_QWORD *)((char *)v1 + 132) >> 32;
  v10 = *(_QWORD *)((char *)v1 + 132);
  if ( v10 != v11 )
      v12 = *(void **)(v10 + 52);
      if ( v12 )
        operator delete(v12);
      v13 = *(void **)(v10 + 36);
      if ( v13 )
        operator delete(v13);
      v14 = *(_DWORD *)(v10 + 8);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v10 + 8) = 0;
      v10 += 72;
    while ( v11 != v10 );
    v10 = *((_DWORD *)v1 + 33);
  if ( v10 )
    operator delete((void *)v10);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)((char *)v1 + 100));
  v15 = (void *)*((_DWORD *)v1 + 19);
  if ( v15 )
    operator delete(v15);
  v16 = *((_DWORD *)v1 + 17);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  return j_j_j__ZN26ContainerManagerControllerD2Ev(v1);
}


signed int __fastcall CraftingContainerManagerController::_handleQuilterAchievement(CraftingContainerManagerController *this, const ItemInstance *a2)
{
  int v2; // r4@1
  ItemInstance *v3; // r5@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r1@2
  unsigned int v6; // r3@5
  unsigned int v7; // r6@6
  unsigned int v8; // r2@7
  signed int v9; // r1@7
  ContainerManagerModel *v10; // r0@11
  MinecraftEventing *v11; // r6@13
  signed int result; // r0@13
  const ItemInstance *v13; // r2@13
  unsigned int *v14; // r1@16
  unsigned int *v15; // r5@22

  v2 = *((_DWORD *)this + 17);
  v3 = a2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = (unsigned int *)(v2 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5;
          v9 = 0;
          if ( !v8 )
            v9 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 1;
  v2 = 0;
LABEL_11:
  v10 = (ContainerManagerModel *)*((_DWORD *)this + 16);
  if ( v9 )
    v10 = 0;
  v11 = (MinecraftEventing *)ContainerManagerModel::getPlayer(v10);
  result = ItemInstance::getId(v3);
  if ( result == *(_WORD *)(Item::mBanner + 18) )
    result = MinecraftEventing::fireEventPatternAdded(v11, v3, v13);
    v14 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
    else
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


signed int __fastcall CraftingContainerManagerController::handlePlaceOne(int a1, ContainerItemStack *a2, int **a3, int a4)
{
  int v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r4@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int v17; // r0@14
  signed int result; // r0@23
  int v19; // [sp+Ch] [bp-74h]@1
  char v20; // [sp+10h] [bp-70h]@17
  int v21; // [sp+18h] [bp-68h]@21
  void *v22; // [sp+34h] [bp-4Ch]@19
  void *ptr; // [sp+44h] [bp-3Ch]@17

  v4 = a1;
  v19 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0xBu % dword_27F98F8;
  v8 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 11;
    if ( v10 == 11 )
      v11 = *(_DWORD *)(v9 + 4) == 11;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F98F8 == v7 )
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
    *v14 = 0;
    v14[1] = 11;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v7,
           0xBu,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  v17 = *(v15 - 3);
  if ( v16 != v17 || (v17 = memcmp(*v6, v15, v16)) != 0 )
    if ( CraftingContainerManagerController::isCreativeContainer(v17, (const void **)v6) == 1 )
      CraftingContainerManagerController::_handleCreativeItem((ContainerItemStack *)&v20, v4, v5, v6, v19, 2);
      ItemInstance::operator=((int)v5, (int)&v20);
      if ( ptr )
        operator delete(ptr);
      if ( v22 )
        operator delete(v22);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      result = 0;
      v21 = 0;
    else
      result = j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi(v4, v5, v6, v19);
  else
    *(_BYTE *)(v4 + 97) = 0;
    CraftingContainerManagerController::_craftItem((CraftingContainerManagerController *)v4, v5);
    *(_BYTE *)(v4 + 97) = 1;
    *(_BYTE *)(v4 + 112) = 0;
    result = *(_DWORD *)(v4 + 120);
    *(_DWORD *)(v4 + 116) = result;
    *(_DWORD *)(v4 + 124) = 0;
    *(_BYTE *)(v4 + 128) = 0;
  return result;
}


void __fastcall CraftingContainerManagerController::~CraftingContainerManagerController(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController::~CraftingContainerManagerController(this);
}


int __fastcall CraftingContainerManagerController::isExpandableItemFiltered(int a1, int **a2, int a3)
{
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r2@4
  int v7; // r5@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r6@14
  unsigned int v11; // r0@16

  v3 = a3;
  v4 = *(_QWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    (unsigned __int64 *)(a1 + 20),
                    a2);
  if ( HIDWORD(v4) )
  {
    v5 = (unsigned int *)(HIDWORD(v4) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v7 = ContainerController::isExpandableItemFiltered((ContainerController *)v4, v3);
    v8 = (unsigned int *)(HIDWORD(v4) + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  return v7;
}


void __fastcall CraftingContainerManagerController::clearAllRecipes(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController::clearAllRecipes(this);
}


unsigned __int64 *__fastcall CraftingContainerManagerController::evacuateCraftingContainerToInventory(int a1, ContainerController *a2)
{
  int v2; // r1@2
  void *v3; // r11@2
  int v4; // r0@3
  int v5; // r7@3
  __int64 v6; // kr08_8@6
  int v7; // r10@6
  const void **v8; // r8@6
  int v9; // r0@6
  ItemInstance *v10; // r9@6
  int v11; // r4@7
  int v12; // r5@7
  bool v13; // zf@8
  int v14; // r7@11
  bool v15; // zf@14
  _DWORD *v16; // r0@18
  ItemInstance *v17; // r7@19
  _DWORD *v18; // r8@19
  _DWORD *v19; // r1@19
  size_t v20; // r4@19
  __int64 v21; // kr10_8@21
  int v22; // r7@21
  int v23; // r0@21
  int v24; // r9@22
  int v25; // r10@22
  bool v26; // zf@23
  int v27; // r11@26
  bool v28; // zf@29
  _DWORD *v29; // r0@33
  _DWORD *v30; // r1@34
  bool v31; // zf@36
  __int64 v32; // kr18_8@41
  unsigned int *v33; // r1@42
  unsigned int v34; // r0@44
  unsigned int *v35; // r5@48
  unsigned int v36; // r0@50
  void *v37; // r0@55
  bool v38; // zf@56
  bool v39; // zf@61
  int v40; // r4@67
  bool v41; // zf@68
  int v42; // r5@73
  int v43; // r6@74
  int v44; // r4@74
  ItemInstance *v45; // r0@82
  unsigned int *v46; // r2@90
  signed int v47; // r1@92
  int v48; // r10@100
  int v49; // r0@101
  int v50; // r4@101
  int v51; // r0@101
  bool v52; // zf@101
  int v53; // r4@105
  void (__fastcall *v54)(int, int, char *, int); // r7@106
  char *v55; // r0@106
  void *v56; // r4@107
  void *v57; // r7@107
  unsigned int *v58; // r2@109
  signed int v59; // r1@111
  int *v60; // r0@117
  unsigned __int64 *result; // r0@123
  int v62; // r9@123
  unsigned int v63; // r1@124
  unsigned int *v64; // r0@124
  unsigned int v65; // r2@127
  unsigned int v66; // r3@128
  signed int v67; // r1@129
  ContainerManagerModel *v68; // r4@133
  unsigned int *v69; // r2@136
  unsigned int v70; // r1@138
  int v71; // r5@144
  int v72; // r6@145
  int v73; // r0@146
  unsigned int *v74; // r1@161
  unsigned int *v75; // r4@167
  int v76; // [sp+18h] [bp-1B0h]@3
  int v77; // [sp+1Ch] [bp-1ACh]@1
  ContainerController *v78; // [sp+20h] [bp-1A8h]@1
  int i; // [sp+2Ch] [bp-19Ch]@3
  int v80; // [sp+30h] [bp-198h]@1
  ItemInstance *v81; // [sp+34h] [bp-194h]@21
  ItemInstance *v82; // [sp+3Ch] [bp-18Ch]@3
  int *v83; // [sp+40h] [bp-188h]@19
  int v84; // [sp+44h] [bp-184h]@159
  int v85; // [sp+48h] [bp-180h]@159
  int v86; // [sp+4Ch] [bp-17Ch]@159
  char v87; // [sp+50h] [bp-178h]@146
  int v88; // [sp+58h] [bp-170h]@150
  void *v89; // [sp+74h] [bp-154h]@148
  void *v90; // [sp+84h] [bp-144h]@146
  char v91; // [sp+98h] [bp-130h]@146
  int v92; // [sp+A0h] [bp-128h]@156
  unsigned __int8 v93; // [sp+A6h] [bp-122h]@146
  void *v94; // [sp+BCh] [bp-10Ch]@154
  void *v95; // [sp+CCh] [bp-FCh]@152
  ContainerManagerModel *v96; // [sp+E4h] [bp-E4h]@123
  int v97; // [sp+E8h] [bp-E0h]@123
  void *v98; // [sp+ECh] [bp-DCh]@101
  void *v99; // [sp+F0h] [bp-D8h]@101
  int v100; // [sp+F4h] [bp-D4h]@101
  char v101; // [sp+F8h] [bp-D0h]@76
  int v102; // [sp+100h] [bp-C8h]@80
  void *v103; // [sp+11Ch] [bp-ACh]@78
  void *ptr; // [sp+12Ch] [bp-9Ch]@76
  char v105; // [sp+140h] [bp-88h]@74
  int v106; // [sp+148h] [bp-80h]@86
  void *v107; // [sp+164h] [bp-64h]@84
  void *v108; // [sp+174h] [bp-54h]@82
  int v109; // [sp+18Ch] [bp-3Ch]@41
  char v110; // [sp+190h] [bp-38h]@41
  int v111; // [sp+194h] [bp-34h]@41
  int v112; // [sp+198h] [bp-30h]@159
  int v113; // [sp+19Ch] [bp-2Ch]@159
  int v114; // [sp+1A0h] [bp-28h]@159

  v80 = a1;
  v78 = a2;
  v77 = ContainerController::getContainerSize(a2);
  if ( v77 >= 1 )
  {
    v2 = 0;
    v3 = &unk_27F98F0;
    do
    {
      v76 = v2;
      v82 = (ItemInstance *)ContainerController::getItem(v78, v2);
      v4 = *(_QWORD *)(v80 + 100) >> 32;
      v5 = *(_QWORD *)(v80 + 100);
      for ( i = *(_QWORD *)(v80 + 100) >> 32; v5 != v4; v4 = i )
      {
        v6 = *(_QWORD *)((char *)v3 + 4);
        v7 = 0x18 % (unsigned int)(*(_QWORD *)((char *)v3 + 4) >> 32);
        v8 = (const void **)(v5 + 72);
        v9 = *(_DWORD *)(v6 + 4 * v7);
        v10 = (ItemInstance *)v5;
        if ( !v9 )
          goto LABEL_18;
        v11 = *(_DWORD *)v9;
        v12 = *(_DWORD *)(*(_DWORD *)v9 + 12);
        while ( 1 )
        {
          v13 = v12 == 24;
          if ( v12 == 24 )
            v13 = *(_DWORD *)(v11 + 4) == 24;
          if ( v13 )
            break;
          v14 = *(_DWORD *)v11;
          if ( *(_DWORD *)v11 )
          {
            v12 = *(_DWORD *)(v14 + 12);
            v9 = v6;
            v11 = *(_DWORD *)v6;
            if ( *(_DWORD *)(v14 + 12) % HIDWORD(v6) == v7 )
              continue;
          }
        }
        v15 = v9 == 0;
        if ( v9 )
          v9 = *(_DWORD *)v9;
          v15 = v9 == 0;
        if ( v15 )
LABEL_18:
          v16 = operator new(0x10u);
          *v16 = 0;
          v16[1] = 24;
          v16[2] = &unk_28898CC;
          v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)v3 + 4,
                 v7,
                 0x18u,
                 (int)v16);
        v83 = (int *)v8;
        v17 = v10;
        v18 = *v8;
        v19 = *(_DWORD **)(v9 + 8);
        v20 = *(v18 - 3);
        if ( v20 == *(v19 - 3) && !memcmp(v18, v19, *(v18 - 3)) )
          goto LABEL_176;
        v81 = v10;
        v21 = *(_QWORD *)((char *)v3 + 4);
        v22 = 0x1A % (unsigned int)(*(_QWORD *)((char *)v3 + 4) >> 32);
        v23 = *(_DWORD *)(v21 + 4 * v22);
        if ( !v23 )
          goto LABEL_33;
        v24 = *(_DWORD *)v23;
        v25 = *(_DWORD *)(*(_DWORD *)v23 + 12);
          v26 = v25 == 26;
          if ( v25 == 26 )
            v26 = *(_DWORD *)(v24 + 4) == 26;
          if ( v26 )
          v27 = *(_DWORD *)v24;
          if ( *(_DWORD *)v24 )
            v25 = *(_DWORD *)(v27 + 12);
            v23 = v24;
            v24 = *(_DWORD *)v24;
            if ( *(_DWORD *)(v27 + 12) % HIDWORD(v21) == v22 )
        v28 = v23 == 0;
        if ( v23 )
          v23 = *(_DWORD *)v23;
          v28 = v23 == 0;
        if ( v28 )
LABEL_33:
          v29 = operator new(0x10u);
          *v29 = 0;
          v29[1] = 26;
          v29[2] = &unk_28898CC;
          v23 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27F98F4,
                  v22,
                  0x1Au,
                  (int)v29);
          v18 = (_DWORD *)*v83;
          v20 = *(_DWORD *)(*v83 - 12);
        v30 = *(_DWORD **)(v23 + 8);
        v17 = v81;
        v3 = &unk_27F98F0;
        if ( v20 == *(v30 - 3) && !memcmp(v18, v30, v20) )
        v31 = *((_BYTE *)v81 + 15) == 0;
        if ( *((_BYTE *)v81 + 15) )
          v31 = *(_DWORD *)v81 == 0;
        if ( v31 || ItemInstance::isNull(v81) || !*((_BYTE *)v81 + 14) )
LABEL_176:
          sub_21E8AF4(&v109, v83);
          ContainerManagerController::getContainerController((int)&v110, v80, (int **)&v109);
          v32 = *(_QWORD *)&v110;
          if ( v111 )
            v33 = (unsigned int *)(v111 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
            }
            else
              v34 = (*v33)--;
            if ( v34 == 1 )
              v35 = (unsigned int *)(HIDWORD(v32) + 8);
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v32) + 8))(HIDWORD(v32));
              if ( &pthread_create )
              {
                __dmb();
                do
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
              }
              else
                v36 = (*v35)--;
              if ( v36 == 1 )
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v32) + 12))(HIDWORD(v32));
          v37 = (void *)(v109 - 12);
          if ( (int *)(v109 - 12) != &dword_28898C0 )
            v46 = (unsigned int *)(v109 - 4);
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
              v47 = (*v46)--;
            if ( v47 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
          v38 = *((_BYTE *)v82 + 15) == 0;
          if ( *((_BYTE *)v82 + 15) )
            v38 = *(_DWORD *)v82 == 0;
          if ( !v38 && !ItemInstance::isNull(v82) && *((_BYTE *)v82 + 14) )
            v39 = *((_BYTE *)v17 + 15) == 0;
            if ( *((_BYTE *)v17 + 15) )
              v39 = *(_DWORD *)v17 == 0;
            if ( !v39 && !ItemInstance::isNull(v17) && *((_BYTE *)v17 + 14) && ItemInstance::matchesItem(v82, v17) == 1 )
              v40 = ContainerController::getItem((ContainerController *)v32, *((_DWORD *)v17 + 19));
              if ( ItemInstance::matchesItem(v17, (const ItemInstance *)v40) )
                goto LABEL_177;
              v41 = *(_BYTE *)(v40 + 15) == 0;
              if ( *(_BYTE *)(v40 + 15) )
                v41 = *(_DWORD *)v40 == 0;
              if ( v41 || ItemInstance::isNull((ItemInstance *)v40) || !*(_BYTE *)(v40 + 14) )
LABEL_177:
                v42 = *((_BYTE *)v17 + 14) - *(_BYTE *)(v40 + 14);
                if ( v42 >= 1 )
                {
                  v43 = *((_BYTE *)v82 + 14);
                  ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v105, v82);
                  v44 = *((_BYTE *)v82 + 14);
                  if ( v43 < v42 )
                    v42 = v43;
                  ContainerController::removeItem((ContainerController *)&v101, (int)v78, v76, v42);
                  if ( ptr )
                    operator delete(ptr);
                  if ( v103 )
                    operator delete(v103);
                  if ( v102 )
                    (*(void (**)(void))(*(_DWORD *)v102 + 4))();
                  v102 = 0;
                  v45 = (ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v105);
                  ItemInstance::set(v45, (unsigned __int8)v42);
                  ContainerController::setItem(v32, *((_DWORD *)v17 + 19), (int)&v105, 0, 1);
                  if ( v108 )
                    operator delete(v108);
                  if ( v107 )
                    operator delete(v107);
                  if ( v106 )
                    (*(void (**)(void))(*(_DWORD *)v106 + 4))();
                  if ( v42 == v44 )
                    break;
                }
        v5 = (int)v17 + 88;
      }
      v2 = v76 + 1;
    }
    while ( v76 + 1 < v77 );
    if ( v77 >= 1 )
      v48 = 0;
      do
        v98 = 0;
        v99 = 0;
        v100 = 0;
        v49 = ContainerController::getItem(v78, v48);
        v50 = v49;
        v51 = *(_BYTE *)(v49 + 15);
        v52 = v51 == 0;
        if ( v51 )
          v52 = *(_DWORD *)v50 == 0;
        if ( !v52 && !ItemInstance::isNull((ItemInstance *)v50) )
          v53 = *(_BYTE *)(v50 + 14);
          if ( v53 )
            v54 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v80 + 32);
            v55 = ContainerController::getContainerName(v78);
            v54(v80, v53, v55, v48);
        v57 = v99;
        v56 = v98;
        if ( v98 != v99 )
          do
            v60 = (int *)(*(_DWORD *)v56 - 12);
            if ( v60 != &dword_28898C0 )
              v58 = (unsigned int *)(*(_DWORD *)v56 - 4);
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
                v59 = (*v58)--;
              if ( v59 <= 0 )
                j_j_j_j__ZdlPv_9(v60);
            v56 = (char *)v56 + 8;
          while ( v56 != v57 );
          v56 = v98;
        if ( v56 )
          operator delete(v56);
        ++v48;
      while ( v48 < v77 );
  }
  result = (unsigned __int64 *)ContainerManagerController::getContainerManagerModel(
                                 (ContainerManagerController *)&v96,
                                 v80);
  v62 = v97;
  if ( v97 )
    v63 = *(_DWORD *)(v97 + 4);
    v64 = (unsigned int *)(v97 + 4);
      while ( 1 )
        if ( !v63 )
          v67 = 1;
          v62 = 0;
          goto LABEL_133;
        __dmb();
        v65 = __ldrex(v64);
        if ( v65 == v63 )
          break;
        __clrex();
        v63 = v65;
      v66 = __strex(v63 + 1, v64);
      v63 = v65;
    while ( v66 );
    __dmb();
    v67 = 0;
    if ( !*v64 )
      v67 = 1;
LABEL_133:
    result = (unsigned __int64 *)v97;
    v68 = v96;
    if ( v67 )
      v68 = 0;
    if ( v97 )
      v69 = (unsigned int *)(v97 + 8);
      if ( &pthread_create )
        do
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
      else
        v70 = (*v69)--;
      if ( v70 == 1 )
        result = (unsigned __int64 *)(*(int (__cdecl **)(unsigned __int64 *, _DWORD))(*(_DWORD *)result + 12))(
                                       result,
                                       *(_DWORD *)(*(_DWORD *)result + 12));
    if ( v68 )
      v71 = ContainerManagerModel::getPlayer(v68);
      if ( v77 >= 1 )
        v72 = 0;
          v73 = ContainerController::getItem(v78, v72);
          ItemInstance::ItemInstance((ItemInstance *)&v91, v73);
          ContainerController::removeItem((ContainerController *)&v87, (int)v78, v72, v93);
          if ( v90 )
            operator delete(v90);
          if ( v89 )
            operator delete(v89);
          if ( v88 )
            (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v88 + 4))(v88, *(_DWORD *)(*(_DWORD *)v88 + 4));
          v88 = 0;
          (*(void (__fastcall **)(int, char *, _DWORD))(*(_DWORD *)v71 + 664))(v71, &v91, 0);
          if ( v95 )
            operator delete(v95);
          if ( v94 )
            operator delete(v94);
          if ( v92 )
            (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v92 + 4))(v92, *(_DWORD *)(*(_DWORD *)v92 + 4));
          ++v72;
        while ( v72 < v77 );
      CraftingContainerManagerController::getCurrentContainerStateList((CraftingContainerManagerController *)&v84, v80);
      v112 = *(_DWORD *)(v80 + 100);
      v113 = *(_DWORD *)(v80 + 104);
      v114 = *(_DWORD *)(v80 + 108);
      *(_DWORD *)(v80 + 100) = v84;
      v84 = 0;
      *(_DWORD *)(v80 + 104) = v85;
      v85 = 0;
      *(_DWORD *)(v80 + 108) = v86;
      v86 = 0;
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v112);
      result = std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v84);
    if ( v62 )
      v74 = (unsigned int *)(v62 + 4);
          result = (unsigned __int64 *)__ldrex(v74);
        while ( __strex((unsigned int)result - 1, v74) );
        result = (unsigned __int64 *)(*v74)--;
      if ( result == (unsigned __int64 *)1 )
        v75 = (unsigned int *)(v62 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
        if ( &pthread_create )
          __dmb();
            result = (unsigned __int64 *)__ldrex(v75);
          while ( __strex((unsigned int)result - 1, v75) );
        else
          result = (unsigned __int64 *)(*v75)--;
        if ( result == (unsigned __int64 *)1 )
          result = (unsigned __int64 *)(*(int (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
  return result;
}


signed int __fastcall CraftingContainerManagerController::getIndexForCreativeItem(int a1, const void **a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r6@1
  int **v4; // r7@1
  int v5; // r5@1
  int v6; // r8@2
  unsigned int v7; // r0@3
  unsigned int *v8; // r4@3
  unsigned int v9; // r1@6
  unsigned int v10; // r2@7
  signed int v11; // r9@8
  ContainerManagerModel *v12; // r0@9
  unsigned __int64 *v13; // r0@10
  FilteredContainerModel **v14; // r0@10
  unsigned int v15; // r0@13
  unsigned int *v16; // r4@17
  unsigned int v17; // r0@19

  v3 = a3;
  v4 = (int **)a2;
  v5 = a1;
  if ( CraftingContainerManagerController::isCreativeContainer(a1, a2) == 1 )
  {
    v6 = *(_DWORD *)(v5 + 16);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 4);
      v8 = (unsigned int *)(v6 + 4);
      while ( v7 )
      {
        __dmb();
        v9 = __ldrex(v8);
        if ( v9 == v7 )
        {
          v10 = __strex(v7 + 1, v8);
          v7 = v9;
          if ( !v10 )
          {
            __dmb();
            v11 = 1;
            if ( *v8 )
            {
              v12 = *(ContainerManagerModel **)(v5 + 12);
              if ( v12 )
              {
                v13 = (unsigned __int64 *)ContainerManagerModel::getContainers(v12);
                v14 = (FilteredContainerModel **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerModel>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerModel>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                                   v13,
                                                   v4);
                v5 = FilteredContainerModel::getIndexForCreativeItem(*v14, v3);
                v11 = 0;
              }
            }
            if ( &pthread_create )
              __dmb();
              do
                v15 = __ldrex(v8);
              while ( __strex(v15 - 1, v8) );
            else
              v15 = (*v8)--;
            if ( v15 == 1 )
              v16 = (unsigned int *)(v6 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
              if ( &pthread_create )
                __dmb();
                do
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
              else
                v17 = (*v16)--;
              if ( v17 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
                if ( v11 )
                  v5 = -1;
                return v5;
            if ( v11 != 1 )
              return v5;
            return -1;
          }
        }
        else
          __clrex();
      }
    }
  }
  return -1;
}


signed int __fastcall CraftingContainerManagerController::_handleCreativeAutoPlace(int a1, int a2, int **a3, int a4, unsigned __int64 *a5, int a6)
{
  unsigned __int64 *v6; // r4@1
  int v7; // r9@1
  int v8; // r5@1
  ContainerController **v9; // r0@1
  int v10; // r0@1
  int v11; // r7@1
  signed int result; // r0@1
  bool v13; // zf@1
  ItemInstance *v14; // r0@6
  int **v15; // r0@6
  int **v16; // r6@6
  int v17; // r10@7
  char v18; // r5@7
  ContainerController **v19; // r0@8
  __int64 v20; // r0@8
  ItemInstance *v21; // r0@12
  int v22; // r5@12
  ItemInstance *v23; // r0@12
  int **v24; // r0@14
  int **v25; // r5@14
  int v26; // r7@15
  int *v27; // r0@16
  __int64 v28; // r0@16
  int v29; // [sp+0h] [bp-B8h]@12
  int v30; // [sp+8h] [bp-B0h]@23
  void *v31; // [sp+24h] [bp-94h]@21
  void *ptr; // [sp+34h] [bp-84h]@19
  char v33; // [sp+48h] [bp-70h]@6
  int v34; // [sp+50h] [bp-68h]@29
  void *v35; // [sp+6Ch] [bp-4Ch]@27
  void *v36; // [sp+7Ch] [bp-3Ch]@25

  v6 = (unsigned __int64 *)(a1 + 20);
  v7 = a2;
  v8 = a4;
  v9 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                 (unsigned __int64 *)(a1 + 20),
                                 a3);
  v10 = ContainerController::getItem(*v9, v8);
  v11 = v10;
  result = *(_BYTE *)(v10 + 15);
  v13 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)v11;
    v13 = *(_DWORD *)v11 == 0;
  }
  if ( !v13 )
    result = ItemInstance::isNull((ItemInstance *)v11);
    if ( !result )
    {
      result = *(_BYTE *)(v11 + 14);
      if ( *(_BYTE *)(v11 + 14) )
      {
        v14 = ItemInstance::ItemInstance((ItemInstance *)&v33, v11);
        ItemInstance::set(v14, 1);
        v15 = (int **)(*a5 >> 32);
        v16 = (int **)*a5;
        if ( v16 != v15 )
        {
          v17 = (int)(v15 - 1);
          v18 = 0;
          do
          {
            v19 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                            v6,
                                            v16);
            v20 = (unsigned int)ContainerController::canSet(*v19, (const ItemInstance *)&v33, 0);
            v13 = v17 == (_DWORD)v16;
            v18 |= v20;
            ++v16;
            if ( v13 )
              HIDWORD(v20) = 1;
          }
          while ( !v20 );
          if ( v18 & 1 )
            ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v29, (const ItemInstance *)v11);
            v21 = (ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v29);
            v22 = ItemInstance::getMaxStackSize(v21);
            v23 = (ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v29);
            if ( v22 < v7 )
              v7 = v22;
            ItemInstance::set(v23, v7);
            v24 = (int **)(*a5 >> 32);
            v25 = (int **)*a5;
            if ( v25 != v24 )
            {
              v26 = (int)(v24 - 1);
              do
              {
                v27 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                               v6,
                               v25);
                v28 = (unsigned int)ContainerController::autoPlaceItems(*v27, (int)&v29, a6, 0);
                v13 = v26 == (_DWORD)v25;
                ++v25;
                if ( v13 )
                  HIDWORD(v28) = 1;
              }
              while ( !v28 );
            }
            if ( ptr )
              operator delete(ptr);
            if ( v31 )
              operator delete(v31);
            if ( v30 )
              (*(void (**)(void))(*(_DWORD *)v30 + 4))();
        }
        if ( v36 )
          operator delete(v36);
        if ( v35 )
          operator delete(v35);
        result = v34;
        if ( v34 )
          result = (*(int (**)(void))(*(_DWORD *)v34 + 4))();
      }
    }
  return result;
}


signed int __fastcall CraftingContainerManagerController::setOnItemExpandedCallback(signed int result, int a2)
{
  int v2; // r9@1
  int v3; // r5@1
  unsigned int v4; // r1@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r2@5
  unsigned int v7; // r3@6
  bool v8; // zf@7
  int v9; // r4@10
  char *v10; // r0@11
  int v11; // r7@12
  void (__fastcall *v12)(int *, int, signed int); // r3@12
  unsigned int *v13; // r4@24
  int v14; // [sp+0h] [bp-30h]@13
  int (__fastcall *v15)(int *, int *, signed int); // [sp+8h] [bp-28h]@12
  int v16; // [sp+Ch] [bp-24h]@13

  v2 = *(_DWORD *)(result + 16);
  v3 = a2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = (unsigned int *)(v2 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5 == 0;
          if ( *v5 )
          {
            result = *(_DWORD *)(result + 12);
            v8 = result == 0;
          }
          if ( v8 )
            goto LABEL_33;
          v9 = *((_DWORD *)ContainerManagerModel::getContainers((ContainerManagerModel *)result) + 2);
          if ( !v9 )
          do
            v10 = ContainerModel::getContainerStringName(*(ContainerModel **)(v9 + 8));
            result = CraftingContainerManagerController::isCreativeContainer((int)v10, (const void **)v10);
            if ( result == 1 )
            {
              v11 = *(_DWORD *)(v9 + 8);
              v15 = 0;
              v12 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
              if ( v12 )
              {
                v12(&v14, v3, 2);
                v16 = *(_DWORD *)(v3 + 12);
                v15 = *(int (__fastcall **)(int *, int *, signed int))(v3 + 8);
              }
              result = ExpandoContainerModel::setOnItemExpandedCallback(v11, (int)&v14);
              if ( v15 )
                result = v15(&v14, &v14, 3);
            }
            v9 = *(_DWORD *)v9;
          while ( v9 );
          if ( v2 )
LABEL_33:
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v5);
              while ( __strex(result - 1, v5) );
            else
              result = (*v5)--;
              v13 = (unsigned int *)(v2 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
              if ( &pthread_create )
                __dmb();
                do
                  result = __ldrex(v13);
                while ( __strex(result - 1, v13) );
              else
                result = (*v13)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall CraftingContainerManagerController::getOutputGhostItemInstance(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController *v1; // r9@1
  int v2; // r10@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  __int64 v10; // r4@14
  unsigned int *v11; // r1@15
  unsigned int v12; // r0@17
  unsigned int *v13; // r6@21
  unsigned int v14; // r0@23
  void *v15; // r0@28
  int v16; // r4@29
  void *v17; // r0@29
  unsigned int *v19; // r2@31
  signed int v20; // r1@33
  unsigned int *v21; // r2@35
  signed int v22; // r1@37
  int v23; // [sp+4h] [bp-34h]@14
  char v24; // [sp+8h] [bp-30h]@14
  int v25; // [sp+Ch] [bp-2Ch]@14
  int v26; // [sp+10h] [bp-28h]@14

  v1 = this;
  v2 = 0xBu % dword_27F98F8;
  v3 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 11;
    if ( v5 == 11 )
      v6 = *(_DWORD *)(v4 + 4) == 11;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F98F8 == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 11;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v2,
           0xBu,
           (int)v9);
  sub_21E8AF4(&v26, (int *)(v3 + 8));
  sub_21E8AF4(&v23, &v26);
  ContainerManagerController::getContainerController((int)&v24, (int)v1, (int **)&v23);
  v10 = *(_QWORD *)&v24;
  if ( v25 )
    v11 = (unsigned int *)(v25 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(HIDWORD(v10) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 8))(HIDWORD(v10));
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
  v15 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v23 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v10 + 64))(v10, 0);
  v17 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  return v16;
}


void __fastcall CraftingContainerManagerController::getCraftableCount(CraftingContainerManagerController *this, const ItemInstance *a2, ItemInstance *a3)
{
  ContainerManagerModel *v3; // r10@0
  CraftingContainerManagerController *v4; // r7@1
  const ItemInstance *v5; // r6@1
  int v6; // r8@1
  ItemInstance *v7; // r4@1
  unsigned int v8; // r2@2
  unsigned int *v9; // r9@2
  unsigned int v10; // r0@5
  bool v11; // zf@8
  Recipes *v12; // r0@11
  Player *v13; // r0@11
  double v14; // r0@11
  unsigned int v15; // r0@11
  int v16; // r5@13
  int *v17; // r4@13
  char *v18; // r1@14
  char *v19; // r4@14
  int v20; // r0@15
  int *v21; // r0@15
  ItemInstance *v22; // r10@15
  signed int v23; // r1@17
  ItemInstance *v24; // r8@21
  int v25; // r10@21
  int v26; // r11@21
  int v27; // r0@21
  int v28; // r6@22
  int v29; // r7@22
  bool v30; // zf@23
  int v31; // r4@26
  bool v32; // zf@29
  _DWORD *v33; // r0@33
  int v34; // r4@34
  int v35; // r6@34
  unsigned int v36; // r1@35
  unsigned int *v37; // r0@35
  signed int v38; // r7@35
  unsigned int v39; // r2@38
  unsigned int v40; // r3@39
  signed int v41; // r1@40
  int v42; // r0@44
  ContainerModel *v43; // r11@44
  ItemInstance *v44; // r10@46
  unsigned int *v45; // r2@47
  unsigned int v46; // r1@49
  void *v47; // r0@55
  char *v48; // r5@58
  int v49; // r0@59
  bool v50; // zf@59
  unsigned int v51; // r0@66
  unsigned int v52; // r4@66
  unsigned int v53; // r8@66
  _DWORD *v54; // r0@66
  _DWORD *v55; // r6@67
  int v56; // r7@67
  _DWORD *v57; // r5@69
  int v58; // r0@73
  unsigned int *v59; // r2@76
  int v60; // r1@82
  signed int v61; // r4@85
  unsigned int *v62; // r1@88
  unsigned int v63; // r0@90
  unsigned int *v64; // r5@94
  unsigned int v65; // r0@96
  ItemInstance *v66; // r0@104
  ItemInstance *v67; // r10@104
  unsigned int v68; // r0@107
  unsigned int v69; // r6@107
  int v70; // r4@107
  int v71; // r0@107
  _DWORD *v72; // r8@108
  int v73; // r5@108
  _DWORD *v74; // r11@110
  bool v75; // zf@113
  _DWORD *v76; // r0@117
  __int64 v77; // r4@124
  void *v78; // r0@125
  void *v79; // r0@127
  int v80; // r0@129
  void *v81; // r0@136
  void *v82; // r4@137
  unsigned int v83; // r0@146
  unsigned int *v84; // r4@150
  unsigned int v85; // r0@152
  char *v86; // [sp+Ch] [bp-F4h]@15
  char v87; // [sp+10h] [bp-F0h]@16
  CraftingContainerManagerController *v88; // [sp+14h] [bp-ECh]@15
  char *v89; // [sp+18h] [bp-E8h]@15
  int v90; // [sp+1Ch] [bp-E4h]@15
  ItemInstance *v91; // [sp+20h] [bp-E0h]@15
  unsigned __int64 v92; // [sp+2Ch] [bp-D4h]@15
  PlayerInventoryProxy *v93; // [sp+38h] [bp-C8h]@11
  signed int v94; // [sp+3Ch] [bp-C4h]@21
  signed int v95; // [sp+40h] [bp-C0h]@15
  int v96; // [sp+44h] [bp-BCh]@21
  unsigned __int64 v97; // [sp+44h] [bp-BCh]@67
  signed int v98; // [sp+48h] [bp-B8h]@21
  int v99; // [sp+48h] [bp-B8h]@104
  int v100; // [sp+4Ch] [bp-B4h]@34
  ContainerModel *v101; // [sp+50h] [bp-B0h]@34
  int v102; // [sp+54h] [bp-ACh]@34
  char v103; // [sp+58h] [bp-A8h]@15
  int v104; // [sp+60h] [bp-A0h]@122
  unsigned __int8 v105; // [sp+66h] [bp-9Ah]@82
  void *v106; // [sp+7Ch] [bp-84h]@120
  void *ptr; // [sp+8Ch] [bp-74h]@118
  ItemInstance *v108; // [sp+A4h] [bp-5Ch]@15
  int v109; // [sp+A8h] [bp-58h]@15
  void *v110; // [sp+B0h] [bp-50h]@14
  unsigned int v111; // [sp+B4h] [bp-4Ch]@11
  void *v112; // [sp+B8h] [bp-48h]@11
  int v113; // [sp+BCh] [bp-44h]@11
  signed int v114; // [sp+C0h] [bp-40h]@11
  int v115; // [sp+C4h] [bp-3Ch]@11
  int v116; // [sp+C8h] [bp-38h]@139
  void *v117; // [sp+CCh] [bp-34h]@11
  char *v118; // [sp+D0h] [bp-30h]@14

  v4 = this;
  v5 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v6 = *((_DWORD *)a2 + 17);
  v7 = a3;
  if ( !v6 )
    return;
  v8 = *(_DWORD *)(v6 + 4);
  v9 = (unsigned int *)(v6 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v8 )
        return;
      __dmb();
      v10 = __ldrex(v9);
      if ( v10 == v8 )
        break;
      __clrex();
      v8 = v10;
    }
    v11 = __strex(v8 + 1, v9) == 0;
    v8 = v10;
  }
  while ( !v11 );
  __dmb();
  v11 = *v9 == 0;
  if ( *v9 )
    v3 = (ContainerManagerModel *)*((_DWORD *)a2 + 16);
    v11 = v3 == 0;
  if ( v11 )
LABEL_144:
    if ( &pthread_create )
      do
        v83 = __ldrex(v9);
      while ( __strex(v83 - 1, v9) );
    else
      v83 = (*v9)--;
    if ( v83 == 1 )
      v84 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
      }
      else
        v85 = (*v84)--;
      if ( v85 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  v12 = Recipes::getInstance((Recipes *)*v9);
  Recipes::getAllRecipesFor((Recipes *)&v117, v12, v7);
  v13 = (Player *)ContainerManagerModel::getPlayer(v3);
  v93 = (PlayerInventoryProxy *)Player::getSupplies(v13);
  v112 = 0;
  v113 = 0;
  v114 = 1065353216;
  v115 = 0;
  HIDWORD(v14) = 10;
  LODWORD(v14) = &v114;
  v15 = sub_21E6254(v14);
  v111 = v15;
  if ( v15 == 1 )
    v116 = 0;
    v17 = &v116;
  else
    if ( v15 >= 0x40000000 )
      sub_21E57F4();
    v16 = 4 * v15;
    v17 = (int *)operator new(4 * v15);
    _aeabi_memclr4(v17, v16);
  v110 = v17;
  v18 = v118;
  v19 = (char *)v117;
  if ( v117 == v118 )
    goto LABEL_136;
    v86 = v18;
    v20 = (*(int (**)(void))(**(_DWORD **)v19 + 40))();
    ItemPack::getItemInstances((ItemPack *)&v108, v20);
    v21 = (int *)(*(int (**)(void))(**(_DWORD **)v19 + 20))();
    ItemInstance::ItemInstance((ItemInstance *)&v103, *v21);
    v88 = v4;
    v89 = v19;
    v92 = __PAIR__((unsigned int)v5, (unsigned int)v3);
    v90 = v6;
    v22 = v108;
    v95 = 0x7FFFFFFF;
    v91 = (ItemInstance *)v109;
    if ( v108 == (ItemInstance *)v109 )
LABEL_104:
      *((_DWORD *)v88 + 1) += v95 / *(_BYTE *)(*(_DWORD *)(*(int (**)(void))(**(_DWORD **)v89 + 20))() + 14);
      *(_DWORD *)v88 += v95;
      v66 = (ItemInstance *)v109;
      v67 = v108;
      v99 = v109;
      while ( v67 != v66 )
        v68 = ItemInstance::getIdAux(v67);
        v69 = v68;
        v70 = v68 % v111;
        v71 = *((_DWORD *)v110 + v68 % v111);
        if ( !v71 )
          goto LABEL_117;
        v72 = *(_DWORD **)v71;
        v73 = *(_DWORD *)(*(_DWORD *)v71 + 4);
        while ( v69 != v73 )
        {
          v74 = (_DWORD *)*v72;
          if ( *v72 )
          {
            v73 = v74[1];
            v71 = (int)v72;
            v72 = (_DWORD *)*v72;
            if ( v74[1] % v111 == v70 )
              continue;
          }
        }
        v75 = v71 == 0;
        if ( v71 )
          v71 = *(_DWORD *)v71;
          v75 = v71 == 0;
        if ( v75 )
LABEL_117:
          v76 = operator new(0xCu);
          *v76 = 0;
          v76[1] = v69;
          v76[2] = 0;
          v71 = std::_Hashtable<int,std::pair<int const,int>,std::allocator<std::pair<int const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                  (int)&v110,
                  v70,
                  v69,
                  (int)v76);
        v67 = (ItemInstance *)((char *)v67 + 72);
        *(_DWORD *)(v71 + 8) += v95;
        v66 = (ItemInstance *)v99;
      goto LABEL_118;
    v87 = 1;
    do
      v24 = v22;
      v98 = ItemInstance::getId(v22);
      v25 = ItemInstance::getAuxValue(v22);
      v94 = *((_BYTE *)v24 + 14);
      v96 = PlayerInventoryProxy::getItemCount(v93, v98, v25);
      v26 = 0xAu % dword_27F98F8;
      v27 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
      if ( !v27 )
        goto LABEL_33;
      v28 = *(_DWORD *)v27;
      v29 = *(_DWORD *)(*(_DWORD *)v27 + 12);
      while ( 1 )
        v30 = v29 == 10;
        if ( v29 == 10 )
          v30 = *(_DWORD *)(v28 + 4) == 10;
        if ( v30 )
          break;
        v31 = *(_DWORD *)v28;
        if ( *(_DWORD *)v28 )
          v29 = *(_DWORD *)(v31 + 12);
          v27 = v28;
          v28 = *(_DWORD *)v28;
          if ( *(_DWORD *)(v31 + 12) % (unsigned int)dword_27F98F8 == v26 )
            continue;
      v32 = v27 == 0;
      if ( v27 )
        v27 = *(_DWORD *)v27;
        v32 = v27 == 0;
      if ( v32 )
LABEL_33:
        v33 = operator new(0x10u);
        *v33 = 0;
        v33[1] = 10;
        v33[2] = &unk_28898CC;
        v27 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27F98F4,
                v26,
                0xAu,
                (int)v33);
      sub_21E8AF4(&v100, (int *)(v27 + 8));
      v34 = v25;
      ContainerManagerController::getContainerModel((int)&v101, SHIDWORD(v92), (int **)&v100);
      v35 = v102;
      if ( v102 )
        v36 = *(_DWORD *)(v102 + 4);
        v37 = (unsigned int *)(v102 + 4);
        v38 = v96;
          while ( 1 )
            if ( !v36 )
            {
              v41 = 1;
              v35 = 0;
              goto LABEL_44;
            }
            __dmb();
            v39 = __ldrex(v37);
            if ( v39 == v36 )
              break;
            __clrex();
            v36 = v39;
          v40 = __strex(v36 + 1, v37);
          v36 = v39;
        while ( v40 );
        v41 = 0;
        if ( !*v37 )
          v41 = 1;
LABEL_44:
        v42 = v102;
        v43 = v101;
        if ( v41 )
          v43 = 0;
        v44 = v24;
        if ( v102 )
          v45 = (unsigned int *)(v102 + 8);
          if ( &pthread_create )
            do
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
          else
            v46 = (*v45)--;
          if ( v46 == 1 )
            (*(void (**)(void))(*(_DWORD *)v42 + 12))();
        v43 = 0;
        v35 = 0;
      v47 = (void *)(v100 - 12);
      if ( (int *)(v100 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v100 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v23 = __ldrex(v59);
          while ( __strex(v23 - 1, v59) );
        else
          v23 = (*v59)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      if ( v43 )
        v38 += ContainerModel::getItemCount(v43, v98, v34);
      v48 = CraftingContainerManagerModel::getCursorSelectedItem((CraftingContainerManagerModel *)v92);
      if ( ItemInstance::getId((ItemInstance *)v48) == v98 )
        v49 = ItemInstance::getAuxValue((ItemInstance *)v48);
        v50 = (unsigned __int16)v34 == 0x7FFF;
        if ( (unsigned __int16)v34 != 0x7FFF )
          v50 = v49 == v34;
        if ( v50 )
          v38 += (unsigned __int8)v48[14];
      if ( v38 >= v94 )
        v51 = ItemInstance::getIdAux(v44);
        v52 = v51;
        v53 = v51 % v111;
        v54 = (_DWORD *)*((_DWORD *)v110 + v51 % v111);
        if ( v54 )
          v97 = __PAIR__(v35, v38);
          v55 = (_DWORD *)*v54;
          v56 = *(_DWORD *)(*v54 + 4);
          while ( v52 != v56 )
            v57 = (_DWORD *)*v55;
            if ( *v55 )
              v56 = v57[1];
              v54 = v55;
              v55 = (_DWORD *)*v55;
              if ( v57[1] % v111 == v53 )
                continue;
            v35 = HIDWORD(v97);
            v38 = v97;
            goto LABEL_81;
          v35 = HIDWORD(v97);
          if ( v54 )
            v58 = *v54;
            if ( v58 )
              v38 = v97 - *(_DWORD *)(v58 + 8);
LABEL_81:
        if ( v38 < 1 )
          v61 = 4;
          goto LABEL_87;
        v60 = v95;
        if ( v38 / v94 * v105 < v95 )
          v60 = v38 / v94 * v105;
        v95 = v60;
        v87 = 0;
      v61 = 0;
LABEL_87:
      if ( v35 )
        v62 = (unsigned int *)(v35 + 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 == 1 )
          v64 = (unsigned int *)(v35 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
      if ( v61 )
      v22 = (ItemInstance *)((char *)v44 + 72);
    while ( v22 != v91 );
    if ( v87 & 1 )
      goto LABEL_104;
LABEL_118:
    if ( ptr )
      operator delete(ptr);
    v6 = v90;
    v4 = v88;
    v5 = (const ItemInstance *)HIDWORD(v92);
    v3 = (ContainerManagerModel *)v92;
    if ( v106 )
      operator delete(v106);
    if ( v104 )
      (*(void (**)(void))(*(_DWORD *)v104 + 4))();
    v77 = *(_QWORD *)&v108;
    if ( v108 != (ItemInstance *)v109 )
        v78 = *(void **)(v77 + 52);
        if ( v78 )
          operator delete(v78);
        v79 = *(void **)(v77 + 36);
        if ( v79 )
          operator delete(v79);
        v80 = *(_DWORD *)(v77 + 8);
        if ( v80 )
          (*(void (**)(void))(*(_DWORD *)v80 + 4))();
        *(_DWORD *)(v77 + 8) = 0;
        LODWORD(v77) = v77 + 72;
      while ( HIDWORD(v77) != (_DWORD)v77 );
      LODWORD(v77) = v108;
    if ( (_DWORD)v77 )
      operator delete((void *)v77);
    v18 = v86;
    v19 = v89 + 4;
  while ( v89 + 4 != v86 );
LABEL_136:
  v81 = v112;
  if ( v112 )
      v82 = *(void **)v81;
      operator delete(v81);
      v81 = v82;
    while ( v82 );
  _aeabi_memclr4(v110, 4 * v111);
  if ( v110 && &v116 != v110 )
    operator delete(v110);
  if ( v117 )
    operator delete(v117);
  if ( v6 )
    goto LABEL_144;
}


int __fastcall CraftingContainerManagerController::CraftingContainerManagerController(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int v7; // r1@8
  unsigned int *v8; // r0@8
  unsigned int v9; // r2@11
  unsigned int v10; // r3@12
  unsigned int v11; // r1@13
  signed int v12; // r0@13
  int v13; // r1@17
  unsigned int *v14; // r1@20
  unsigned int v15; // r0@22
  unsigned int *v16; // r7@26
  unsigned int v17; // r0@28
  int v18; // r0@33
  unsigned int *v19; // r2@34
  unsigned int v20; // r1@36
  int v21; // r0@41
  unsigned int *v22; // r0@42
  unsigned int v23; // r1@44
  int v24; // r7@47
  int v25; // r5@47
  int v26; // r0@47
  unsigned int v27; // r2@48
  unsigned int *v28; // r1@48
  unsigned int v29; // r3@51
  unsigned int v30; // r7@52
  unsigned int v31; // r2@53
  signed int v32; // r1@53
  ContainerManagerModel *v33; // r6@58
  char v34; // r0@61
  unsigned int *v35; // r1@64
  unsigned int v36; // r0@66
  unsigned int *v37; // r5@70
  unsigned int v38; // r0@72
  int v40; // [sp+0h] [bp-40h]@63
  int v41; // [sp+4h] [bp-3Ch]@63
  int v42; // [sp+8h] [bp-38h]@63
  int v43; // [sp+Ch] [bp-34h]@19
  int v44; // [sp+10h] [bp-30h]@1
  int v45; // [sp+14h] [bp-2Ch]@63
  int v46; // [sp+18h] [bp-28h]@63
  int v47; // [sp+1Ch] [bp-24h]@63

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v44 = v4;
  if ( !v4 )
    goto LABEL_16;
  v5 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
  {
    __dmb();
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 + 1, v5) );
    v4 = *(_DWORD *)(v2 + 4);
    if ( !v4 )
      goto LABEL_16;
  }
  else
    ++*v5;
  v7 = *(_DWORD *)(v4 + 4);
  v8 = (unsigned int *)(v4 + 4);
  while ( v7 )
    v9 = __ldrex(v8);
    if ( v9 == v7 )
    {
      v10 = __strex(v7 + 1, v8);
      v7 = v9;
      if ( !v10 )
      {
        __dmb();
        v11 = *v8;
        v12 = 0;
        if ( !v11 )
          v12 = 1;
        goto LABEL_17;
      }
    }
    else
      __clrex();
LABEL_16:
  v12 = 1;
  v4 = 0;
LABEL_17:
  v13 = *(_DWORD *)v2;
  if ( v12 )
    v13 = 0;
  v43 = v13;
  if ( v4 )
    v14 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  ContainerManagerController::ContainerManagerController(COERCE_DOUBLE(__PAIR__(&v43, v3)));
  v18 = v44;
  if ( v44 )
    v19 = (unsigned int *)(v44 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  *(_DWORD *)v3 = &off_26ECD78;
  *(_DWORD *)(v3 + 64) = *(_DWORD *)v2;
  v21 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 68) = v21;
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  v24 = 0;
  *(_BYTE *)(v3 + 72) = 0;
  *(_WORD *)(v3 + 96) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 92) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 100) = 0;
  v25 = v3 + 100;
  *(_BYTE *)(v25 + 12) = 0;
  *(_DWORD *)(v25 + 4) = 0;
  *(_DWORD *)(v25 + 8) = 0;
  *(_DWORD *)(v25 + 16) = -1;
  *(_DWORD *)(v25 + 20) = -1;
  *(_DWORD *)(v25 + 24) = -1;
  *(_BYTE *)(v25 + 28) = 0;
  *(_BYTE *)(v25 + 29) = 1;
  *(_BYTE *)(v25 + 30) = 1;
  *(_DWORD *)(v25 + 32) = 0;
  *(_DWORD *)(v25 + 36) = 0;
  *(_DWORD *)(v25 + 40) = 0;
  ItemInstance::ItemInstance(v3 + 144);
  *(_DWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 220) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  v26 = *(_DWORD *)(v3 + 68);
  if ( v26 )
    v27 = *(_DWORD *)(v26 + 4);
    v28 = (unsigned int *)(v26 + 4);
      while ( 1 )
        if ( !v27 )
        {
          v32 = 1;
          v24 = 0;
          goto LABEL_58;
        }
        v29 = __ldrex(v28);
        if ( v29 == v27 )
          break;
        __clrex();
        v27 = v29;
      v30 = __strex(v27 + 1, v28);
      v27 = v29;
    while ( v30 );
    v24 = v26;
    v31 = *v28;
    v32 = 0;
    if ( !v31 )
      v32 = 1;
    v32 = 1;
LABEL_58:
  v33 = *(ContainerManagerModel **)(v3 + 64);
  if ( v32 )
    v33 = 0;
  if ( CraftingContainerManagerModel::getIsWorkBench(v33) )
    v34 = 1;
    v34 = ContainerManagerModel::isCreativeMode(v33);
  *(_BYTE *)(v3 + 72) = v34;
  CraftingContainerManagerController::_filterRecipes((CraftingContainerManagerController *)v3);
  CraftingContainerManagerController::_setupCallbacks((CraftingContainerManagerController *)v3);
  CraftingContainerManagerController::getCurrentContainerStateList((CraftingContainerManagerController *)&v40, v3);
  v45 = *(_DWORD *)(v3 + 100);
  v46 = *(_DWORD *)(v3 + 104);
  v47 = *(_DWORD *)(v3 + 108);
  *(_DWORD *)(v3 + 100) = v40;
  v40 = 0;
  *(_DWORD *)(v3 + 104) = v41;
  v41 = 0;
  *(_DWORD *)(v3 + 108) = v42;
  v42 = 0;
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v45);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v40);
  if ( v24 )
    v35 = (unsigned int *)(v24 + 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      v37 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  return v3;
}


void __fastcall CraftingContainerManagerController::compareStatesAndCollectTransfers(int a1, int a2, unsigned __int64 *a3, _DWORD *a4, int a5)
{
  CraftingContainerManagerController::compareStatesAndCollectTransfers(a1, a2, a3, a4, a5);
}


signed int __fastcall CraftingContainerManagerController::isCreativeContainer(int a1, const void **a2)
{
  int v2; // r10@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r4@2
  bool v6; // zf@3
  int v7; // r7@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  const void *v10; // r9@14
  _DWORD *v11; // r1@14
  size_t v12; // r11@14
  int v13; // r7@16
  int v14; // r0@16
  int v15; // r8@17
  int v16; // r5@17
  bool v17; // zf@18
  int v18; // r6@21
  signed int v19; // r4@24
  bool v20; // zf@25
  _DWORD *v21; // r0@29
  _DWORD *v22; // r1@30
  int v23; // r8@32
  int v24; // r0@32
  int v25; // r7@33
  int v26; // r5@33
  bool v27; // zf@34
  int v28; // r6@37
  bool v29; // zf@41
  _DWORD *v30; // r0@45
  _DWORD *v31; // r1@46
  int v32; // r8@48
  int v33; // r0@48
  int v34; // r7@49
  int v35; // r5@49
  bool v36; // zf@50
  int v37; // r6@53
  bool v38; // zf@57
  _DWORD *v39; // r0@61
  _DWORD *v40; // r1@62
  int v41; // r8@64
  int v42; // r0@64
  int v43; // r7@65
  int v44; // r5@65
  bool v45; // zf@66
  int v46; // r6@69
  bool v47; // zf@73
  _DWORD *v48; // r0@77
  _DWORD *v49; // r1@78
  const void **v51; // [sp+0h] [bp-28h]@1

  v51 = a2;
  v2 = 0xCu % dword_27F98F8;
  v3 = *(_DWORD *)(dword_27F98F4 + 4 * (0xCu % dword_27F98F8));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 12;
    if ( v5 == 12 )
      v6 = *(_DWORD *)(v4 + 4) == 12;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F98F8 == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 12;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v2,
           0xCu,
           (int)v9);
  v10 = *v51;
  v11 = *(_DWORD **)(v3 + 8);
  v12 = *((_DWORD *)*v51 - 3);
  if ( v12 == *(v11 - 3) && !memcmp(*v51, v11, *((_DWORD *)*v51 - 3)) )
    v19 = 1;
  else
    v13 = 0xDu % dword_27F98F8;
    v14 = *(_DWORD *)(dword_27F98F4 + 4 * (0xDu % dword_27F98F8));
    if ( !v14 )
      goto LABEL_29;
    v15 = *(_DWORD *)v14;
    v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
    while ( 1 )
      v17 = v16 == 13;
      if ( v16 == 13 )
        v17 = *(_DWORD *)(v15 + 4) == 13;
      if ( v17 )
        break;
      v18 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
      {
        v16 = *(_DWORD *)(v18 + 12);
        v14 = v15;
        v15 = *(_DWORD *)v15;
        if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27F98F8 == v13 )
          continue;
      }
    v20 = v14 == 0;
    if ( v14 )
      v14 = *(_DWORD *)v14;
      v20 = v14 == 0;
    if ( v20 )
LABEL_29:
      v21 = operator new(0x10u);
      *v21 = 0;
      v21[1] = 13;
      v21[2] = &unk_28898CC;
      v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F98F4,
              v13,
              0xDu,
              (int)v21);
      v10 = *v51;
      v12 = *((_DWORD *)*v51 - 3);
    v22 = *(_DWORD **)(v14 + 8);
    if ( v12 == *(v22 - 3) && !memcmp(v10, v22, v12) )
      v19 = 1;
    else
      v23 = 0x11u % dword_27F98F8;
      v24 = *(_DWORD *)(dword_27F98F4 + 4 * (0x11u % dword_27F98F8));
      if ( !v24 )
        goto LABEL_45;
      v25 = *(_DWORD *)v24;
      v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
      while ( 1 )
        v27 = v26 == 17;
        if ( v26 == 17 )
          v27 = *(_DWORD *)(v25 + 4) == 17;
        if ( v27 )
          break;
        v28 = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 )
        {
          v26 = *(_DWORD *)(v28 + 12);
          v24 = v25;
          v25 = *(_DWORD *)v25;
          if ( *(_DWORD *)(v28 + 12) % (unsigned int)dword_27F98F8 == v23 )
            continue;
        }
      v29 = v24 == 0;
      if ( v24 )
        v24 = *(_DWORD *)v24;
        v29 = v24 == 0;
      if ( v29 )
LABEL_45:
        v30 = operator new(0x10u);
        *v30 = 0;
        v30[1] = 17;
        v30[2] = &unk_28898CC;
        v24 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27F98F4,
                v23,
                0x11u,
                (int)v30);
        v10 = *v51;
        v12 = *((_DWORD *)*v51 - 3);
      v31 = *(_DWORD **)(v24 + 8);
      if ( v12 == *(v31 - 3) && !memcmp(v10, v31, v12) )
        v19 = 1;
      else
        v32 = 0xEu % dword_27F98F8;
        v33 = *(_DWORD *)(dword_27F98F4 + 4 * (0xEu % dword_27F98F8));
        if ( !v33 )
          goto LABEL_61;
        v34 = *(_DWORD *)v33;
        v35 = *(_DWORD *)(*(_DWORD *)v33 + 12);
        while ( 1 )
          v36 = v35 == 14;
          if ( v35 == 14 )
            v36 = *(_DWORD *)(v34 + 4) == 14;
          if ( v36 )
            break;
          v37 = *(_DWORD *)v34;
          if ( *(_DWORD *)v34 )
          {
            v35 = *(_DWORD *)(v37 + 12);
            v33 = v34;
            v34 = *(_DWORD *)v34;
            if ( *(_DWORD *)(v37 + 12) % (unsigned int)dword_27F98F8 == v32 )
              continue;
          }
        v38 = v33 == 0;
        if ( v33 )
          v33 = *(_DWORD *)v33;
          v38 = v33 == 0;
        if ( v38 )
LABEL_61:
          v39 = operator new(0x10u);
          *v39 = 0;
          v39[1] = 14;
          v39[2] = &unk_28898CC;
          v33 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27F98F4,
                  v32,
                  0xEu,
                  (int)v39);
          v10 = *v51;
          v12 = *((_DWORD *)*v51 - 3);
        v40 = *(_DWORD **)(v33 + 8);
        if ( v12 == *(v40 - 3) && !memcmp(v10, v40, v12) )
          v19 = 1;
        else
          v41 = 0xFu % dword_27F98F8;
          v42 = *(_DWORD *)(dword_27F98F4 + 4 * (0xFu % dword_27F98F8));
          if ( !v42 )
            goto LABEL_77;
          v43 = *(_DWORD *)v42;
          v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
          while ( 1 )
            v45 = v44 == 15;
            if ( v44 == 15 )
              v45 = *(_DWORD *)(v43 + 4) == 15;
            if ( v45 )
              break;
            v46 = *(_DWORD *)v43;
            if ( *(_DWORD *)v43 )
            {
              v44 = *(_DWORD *)(v46 + 12);
              v42 = v43;
              v43 = *(_DWORD *)v43;
              if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27F98F8 == v41 )
                continue;
            }
          v47 = v42 == 0;
          if ( v42 )
            v42 = *(_DWORD *)v42;
            v47 = v42 == 0;
          if ( v47 )
LABEL_77:
            v48 = operator new(0x10u);
            *v48 = 0;
            v48[1] = 15;
            v48[2] = &unk_28898CC;
            v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    (int)&dword_27F98F4,
                    v41,
                    0xFu,
                    (int)v48);
            v10 = *v51;
            v12 = *((_DWORD *)*v51 - 3);
          v49 = *(_DWORD **)(v42 + 8);
          v19 = 0;
          if ( v12 == *(v49 - 3) && !memcmp(v10, v49, v12) )
            v19 = 1;
  return v19;
}


char *__fastcall CraftingContainerManagerController::getCraftingInformation(CraftingContainerManagerController *this)
{
  return (char *)this + 112;
}


  if ( CraftingContainerManagerController::isCreativeContainer(*(_DWORD *)(v1 + 628), (const void **)(v1 + 560))
{
  {
    v3 = MinecraftScreenController::getInputMode((MinecraftScreenController *)v1);
    result = 0;
    if ( v3 == 3 )
      result = 1;
  }
  else
  return result;
}


char *__fastcall CraftingContainerManagerController::_setupCallbacks(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController *v1; // r8@1
  int v2; // r11@1
  int v3; // r0@1
  int v4; // r6@2
  int v5; // r5@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int *v10; // r0@14
  int v11; // r4@14
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  signed int v16; // r1@20
  int v17; // r0@24
  int v18; // r6@24
  unsigned int *v19; // r2@27
  unsigned int v20; // r1@29
  _DWORD *v21; // r0@35
  __int64 v22; // r1@35
  char *result; // r0@35
  unsigned int *v24; // r1@38
  unsigned int *v25; // r5@44
  _DWORD *v26; // [sp+4h] [bp-3Ch]@35
  __int64 v27; // [sp+Ch] [bp-34h]@35
  int v28; // [sp+14h] [bp-2Ch]@14
  int v29; // [sp+18h] [bp-28h]@14

  v1 = this;
  v2 = 0xAu % dword_27F98F8;
  v3 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 10;
    if ( v5 == 10 )
      v6 = *(_DWORD *)(v4 + 4) == 10;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F98F8 == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 10;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v2,
           0xAu,
           (int)v9);
  v10 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                 (unsigned __int64 *)((char *)v1 + 20),
                 (int **)(v3 + 8));
  ContainerController::getContainerModel((ContainerController *)&v28, *v10);
  v11 = v29;
  if ( v29 )
    v12 = *(_DWORD *)(v29 + 4);
    v13 = (unsigned int *)(v29 + 4);
    do
      while ( 1 )
      {
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_24;
        }
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_24:
    v17 = v29;
    v18 = v28;
    if ( v16 )
      v18 = 0;
    if ( v29 )
      v19 = (unsigned int *)(v29 + 8);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  else
    v18 = 0;
    v11 = 0;
  v21 = operator new(4u);
  LODWORD(v22) = sub_16893A8;
  *v21 = v1;
  HIDWORD(v22) = sub_1688D30;
  v26 = v21;
  v27 = v22;
  result = ContainerModel::registerOnContainerChangedCallback(v18, (int)&v26);
  if ( (_DWORD)v27 )
    result = (char *)((int (*)(void))v27)();
  if ( v11 )
    v24 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (char *)__ldrex(v24);
      while ( __strex((unsigned int)(result - 1), v24) );
    else
      result = (char *)(*v24)--;
    if ( result == (char *)1 )
      v25 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          result = (char *)__ldrex(v25);
        while ( __strex((unsigned int)(result - 1), v25) );
        result = (char *)(*v25)--;
      if ( result == (char *)1 )
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return result;
}


int __fastcall CraftingContainerManagerController::setIsClearingInputGridOnChange(int result, bool a2)
{
  *(_BYTE *)(result + 97) = a2;
  return result;
}


void __fastcall CraftingContainerManagerController::_clearCreativeHotbar(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController *v1; // r10@1
  int v2; // r9@1
  int v3; // r0@1
  int v4; // r4@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r5@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int v10; // r8@14
  int v11; // r9@14
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  signed int v16; // r1@20
  int v17; // r0@24
  int v18; // r7@24
  unsigned int *v19; // r2@27
  unsigned int v20; // r1@29
  void *v21; // r0@35
  int v22; // r7@37
  int v23; // r6@38
  int v24; // r0@39
  unsigned int *v25; // r1@47
  unsigned int v26; // r0@49
  unsigned int *v27; // r4@53
  unsigned int v28; // r0@55
  unsigned int *v29; // r2@61
  signed int v30; // r1@63
  int v31; // [sp+0h] [bp-78h]@39
  int v32; // [sp+8h] [bp-70h]@43
  void *v33; // [sp+24h] [bp-54h]@41
  void *ptr; // [sp+34h] [bp-44h]@39
  int v35; // [sp+48h] [bp-30h]@14
  int v36; // [sp+4Ch] [bp-2Ch]@14
  int v37; // [sp+50h] [bp-28h]@14

  v1 = this;
  v2 = 0x18u % dword_27F98F8;
  v3 = *(_DWORD *)(dword_27F98F4 + 4 * (0x18u % dword_27F98F8));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 24;
    if ( v5 == 24 )
      v6 = *(_DWORD *)(v4 + 4) == 24;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F98F8 == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 24;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v2,
           0x18u,
           (int)v9);
  v10 = v3 + 8;
  sub_21E8AF4(&v35, (int *)(v3 + 8));
  ContainerManagerController::getContainerModel((int)&v36, (int)v1, (int **)&v35);
  v11 = v37;
  if ( v37 )
    v12 = *(_DWORD *)(v37 + 4);
    v13 = (unsigned int *)(v37 + 4);
    do
      while ( 1 )
      {
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_24;
        }
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_24:
    v17 = v37;
    v18 = v36;
    if ( v16 )
      v18 = 0;
    if ( v37 )
      v19 = (unsigned int *)(v37 + 8);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  else
    v18 = 0;
    v11 = 0;
  v21 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( v18 )
    v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 24))(v18);
    if ( v22 >= 1 )
      v23 = 0;
        ContainerItemStack::ContainerItemStack((int)&v31);
        (*(void (__fastcall **)(CraftingContainerManagerController *, int *, int, int))(*(_DWORD *)v1 + 16))(
          v1,
          &v31,
          v10,
          v23);
        v24 = ContainerItemStack::getCount((ContainerItemStack *)&v31);
        ContainerItemStack::decreaseCount((ContainerItemStack *)&v31, v24);
        if ( ptr )
          operator delete(ptr);
        if ( v33 )
          operator delete(v33);
        if ( v32 )
          (*(void (**)(void))(*(_DWORD *)v32 + 4))();
        ++v23;
      while ( v23 < v22 );
  if ( v11 )
    v25 = (unsigned int *)(v11 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
}


void __fastcall CraftingContainerManagerController::handleAutoPlace(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, void *a16, int a17, int a18, int a19, void *a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, char a47)
{
  CraftingContainerManagerController::handleAutoPlace(
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
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47);
}


const void **__fastcall CraftingContainerManagerController::getSearchString(CraftingContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int *v2; // r7@2
  unsigned int v3; // r1@2
  const void **v4; // r6@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r3@7
  bool v8; // zf@7
  int v9; // r8@10
  unsigned int v10; // r2@11
  unsigned int *v11; // r1@11
  unsigned int v12; // r3@14
  unsigned int v13; // r6@15
  unsigned int v14; // r2@16
  signed int v15; // r1@16
  const void **result; // r0@19
  CraftingContainerManagerModel *v17; // r0@21
  unsigned int *v18; // r1@24
  unsigned int v19; // r0@26
  unsigned int *v20; // r5@30
  unsigned int v21; // r0@32
  unsigned int v22; // r0@40
  unsigned int *v23; // r5@44
  unsigned int v24; // r0@46

  v1 = *((_DWORD *)this + 17);
  if ( v1 )
  {
    v2 = (unsigned int *)(v1 + 4);
    v3 = *(_DWORD *)(v1 + 4);
    v4 = &Util::EMPTY_STRING;
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v2);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v2);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *((_DWORD *)this + 16);
          v4 = &Util::EMPTY_STRING;
          v8 = v7 == 0;
          if ( v7 )
            v8 = *v2 == 0;
          if ( v8 )
            goto LABEL_54;
          v9 = *((_DWORD *)this + 17);
          if ( v9 )
          {
            v10 = *(_DWORD *)(v9 + 4);
            v11 = (unsigned int *)(v9 + 4);
            while ( v10 )
            {
              __dmb();
              v12 = __ldrex(v11);
              if ( v12 == v10 )
              {
                v13 = __strex(v10 + 1, v11);
                v10 = v12;
                if ( !v13 )
                {
                  __dmb();
                  v14 = *v11;
                  v15 = 0;
                  if ( !v14 )
                    v15 = 1;
                  goto LABEL_21;
                }
              }
              else
                __clrex();
            }
          }
          v15 = 1;
          v9 = 0;
LABEL_21:
          v17 = (CraftingContainerManagerModel *)*((_DWORD *)this + 16);
          if ( v15 )
            v17 = 0;
          v4 = (const void **)CraftingContainerManagerModel::getSearchString(v17);
            v18 = (unsigned int *)(v9 + 4);
            if ( &pthread_create )
              do
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
            else
              v19 = (*v18)--;
            if ( v19 == 1 )
              v20 = (unsigned int *)(v9 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
              if ( &pthread_create )
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
                v21 = (*v20)--;
              if ( v21 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
          if ( v1 )
LABEL_54:
                v22 = __ldrex(v2);
              while ( __strex(v22 - 1, v2) );
              v22 = (*v2)--;
            if ( v22 == 1 )
              v23 = (unsigned int *)(v1 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
                  v24 = __ldrex(v23);
                while ( __strex(v24 - 1, v23) );
                v24 = (*v23)--;
              if ( v24 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          break;
        }
      }
      else
        __clrex();
    }
    result = v4;
  }
  else
    result = &Util::EMPTY_STRING;
  return result;
}


void __fastcall CraftingContainerManagerController::getCraftableCount(CraftingContainerManagerController *this, const ItemInstance *a2, ItemInstance *a3)
{
  CraftingContainerManagerController::getCraftableCount(this, a2, a3);
}


void __fastcall CraftingContainerManagerController::clearAllRecipes(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController *v1; // r8@1
  int v2; // r10@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int v10; // r9@14
  int v11; // r0@14
  int v12; // r5@15
  int v13; // r7@15
  bool v14; // zf@16
  int v15; // r4@19
  bool v16; // zf@22
  _DWORD *v17; // r0@26
  void *v18; // r0@27
  void *v19; // r0@28
  int v20; // r4@33
  unsigned int *v21; // r1@34
  unsigned int v22; // r0@36
  unsigned int *v23; // r5@40
  unsigned int v24; // r0@42
  int v25; // r4@47
  unsigned int *v26; // r1@48
  unsigned int v27; // r0@50
  unsigned int *v28; // r5@54
  unsigned int v29; // r0@56
  void *v30; // r0@61
  void *v31; // r0@62
  unsigned int *v32; // r2@64
  signed int v33; // r1@66
  unsigned int *v34; // r2@68
  signed int v35; // r1@70
  unsigned int *v36; // r2@72
  signed int v37; // r1@74
  unsigned int *v38; // r2@76
  signed int v39; // r1@78
  int v40; // [sp+4h] [bp-44h]@28
  int v41; // [sp+8h] [bp-40h]@28
  int v42; // [sp+Ch] [bp-3Ch]@33
  int v43; // [sp+10h] [bp-38h]@27
  int v44; // [sp+14h] [bp-34h]@27
  int v45; // [sp+18h] [bp-30h]@47
  int v46; // [sp+1Ch] [bp-2Ch]@27
  int v47; // [sp+20h] [bp-28h]@14

  v1 = this;
  v2 = 0xAu % dword_27F98F8;
  v3 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 10;
    if ( v5 == 10 )
      v6 = *(_DWORD *)(v4 + 4) == 10;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F98F8 == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 10;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v2,
           0xAu,
           (int)v9);
  sub_21E8AF4(&v47, (int *)(v3 + 8));
  v10 = 0xBu % dword_27F98F8;
  v11 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v11 )
    goto LABEL_26;
  v12 = *(_DWORD *)v11;
  v13 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    v14 = v13 == 11;
    if ( v13 == 11 )
      v14 = *(_DWORD *)(v12 + 4) == 11;
    if ( v14 )
    v15 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
      v13 = *(_DWORD *)(v15 + 12);
      v11 = v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v15 + 12) % (unsigned int)dword_27F98F8 == v10 )
  v16 = v11 == 0;
  if ( v11 )
    v11 = *(_DWORD *)v11;
    v16 = v11 == 0;
  if ( v16 )
LABEL_26:
    v17 = operator new(0x10u);
    *v17 = 0;
    v17[1] = 11;
    v17[2] = &unk_28898CC;
    v11 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F98F4,
            v10,
            0xBu,
            (int)v17);
  sub_21E8AF4(&v46, (int *)(v11 + 8));
  sub_21E8AF4(&v43, &v47);
  ContainerManagerController::getContainerController((int)&v44, (int)v1, (int **)&v43);
  v18 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E8AF4(&v40, &v46);
  ContainerManagerController::getContainerController((int)&v41, (int)v1, (int **)&v40);
  v19 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v40 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 52))();
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 52))();
  *((_DWORD *)v1 + 23) = 0;
  v20 = v42;
  if ( v42 )
    v21 = (unsigned int *)(v42 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  v25 = v45;
  if ( v45 )
    v26 = (unsigned int *)(v45 + 4);
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
  v30 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v46 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v47 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


int __fastcall CraftingContainerManagerController::isValid(CraftingContainerManagerController *this, float a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  int v7; // r5@7
  bool v8; // zf@7
  unsigned int v9; // r0@13
  unsigned int *v11; // r6@18
  unsigned int v12; // r0@20

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          v8 = *v4 == 0;
          if ( *v4 )
          {
            this = (CraftingContainerManagerController *)*((_DWORD *)this + 16);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = (*(int (**)(void))(*(_DWORD *)this + 48))();
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v4);
            while ( __strex(v9 - 1, v4) );
          else
            v9 = (*v4)--;
          if ( v9 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v7;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


void __fastcall CraftingContainerManagerController::compareStatesAndCollectTransfers(int a1, int a2, unsigned __int64 *a3, _DWORD *a4, int a5)
{
  unsigned __int64 *v5; // r10@1
  _DWORD *v6; // r5@1
  int v7; // r0@1
  int v8; // r7@1
  int v9; // r9@1
  int v10; // r6@2
  unsigned int v11; // r7@2
  int v12; // r0@3
  int v13; // r2@3
  int v14; // r1@3
  int v15; // r0@5
  unsigned int v16; // r4@5
  unsigned int v17; // r8@11
  int v18; // r4@12
  int v19; // r9@14
  unsigned int v20; // r11@14
  int v21; // r7@16
  unsigned int v22; // r6@18
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  int v25; // r11@36
  void *v26; // r0@36
  int i; // r4@38
  int v28; // r7@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  void *v31; // r0@49
  int v32; // [sp+18h] [bp-48h]@1
  int v33; // [sp+1Ch] [bp-44h]@40
  int v34; // [sp+20h] [bp-40h]@27

  v32 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = a4;
  v8 = *a3 >> 32;
  v7 = *a3;
  v9 = v8;
  if ( v8 != v7 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = ItemInstance::operator==((ItemInstance *)(v7 + v10), (ItemInstance *)(*v6 + v10));
      v13 = *(_DWORD *)v5 + v10;
      *(_BYTE *)(v13 + 80) = v12;
      v14 = *v6 + v10;
      *(_BYTE *)(v14 + 80) = v12;
      if ( !v12 && ItemInstance::matchesItem((ItemInstance *)v13, (const ItemInstance *)v14) == 1 )
      {
        v15 = *(_DWORD *)v5 + v10;
        v16 = *(_BYTE *)(v15 + 14);
        if ( *(_BYTE *)(*v6 + v10 + 14) < v16 )
          v16 = *(_BYTE *)(*v6 + v10 + 14);
        ItemInstance::remove((ItemInstance *)v15, v16);
        ItemInstance::remove((ItemInstance *)(*v6 + v10), v16);
      }
      v9 = *v5 >> 32;
      v7 = *v5;
      v10 += 88;
      ++v11;
    }
    while ( v11 < -1171354717 * ((v9 - v7) >> 3) );
    if ( v9 == v7 )
      v8 = *v5;
      v9 = *v5;
    else
      v17 = 0;
      do
        v18 = v8 + 88 * v17;
        if ( !*(_BYTE *)(v18 + 80) && *(_QWORD *)v6 >> 32 != (unsigned int)*(_QWORD *)v6 )
        {
          v19 = 0;
          v20 = 0;
          do
          {
            if ( ItemInstance::isNull((ItemInstance *)v18) )
              break;
            v21 = *v6 + v19;
            if ( !*(_BYTE *)(v21 + 80)
              && ItemInstance::matchesItem((ItemInstance *)v18, (const ItemInstance *)(*v6 + v19)) == 1 )
            {
              CraftingContainerManagerController::_addItemTransfer(
                *(_DWORD *)(v18 + 76),
                v32,
                v18,
                (int *)(v18 + 72),
                (int *)(v21 + 72),
                *(_DWORD *)(v21 + 76));
              v22 = *(_BYTE *)(v18 + 14);
              if ( *(_BYTE *)(v21 + 14) < v22 )
                v22 = *(_BYTE *)(v21 + 14);
              ItemInstance::remove((ItemInstance *)v18, v22);
              ItemInstance::remove((ItemInstance *)v21, v22);
            }
            v19 += 88;
            ++v20;
          }
          while ( v20 < -1171354717 * ((signed int)((*(_QWORD *)v6 >> 32) - *(_QWORD *)v6) >> 3) );
          v9 = *v5 >> 32;
          v8 = *v5;
        }
        ++v17;
      while ( v17 < -1171354717 * ((v9 - v8) >> 3) );
  }
  if ( a5 )
    for ( ; v8 != v9; v8 += 88 )
      if ( !*(_BYTE *)(v8 + 80) && !ItemInstance::isNull((ItemInstance *)v8) )
        v25 = *(_DWORD *)(v8 + 76);
        sub_21E91E0((void **)&v34, unk_27F98D8, CraftingContainerManagerController::TRANSFER_NO_DESTINATION);
        CraftingContainerManagerController::_addItemTransfer(-1, v32, v8, (int *)(v8 + 72), v25, &v34, -1);
        v26 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v34 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          else
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
    v28 = *(_QWORD *)v6 >> 32;
    for ( i = *(_QWORD *)v6; i != v28; i += 88 )
      if ( !*(_BYTE *)(i + 80) && !ItemInstance::isNull((ItemInstance *)i) )
        sub_21E91E0((void **)&v33, unk_27F98E0, CraftingContainerManagerController::TRANSFER_NO_ORIGIN);
        CraftingContainerManagerController::_addItemTransfer(
          *(_DWORD *)(i + 76),
          v32,
          i,
          &v33,
          -1,
          (int *)(i + 72),
          *(_DWORD *)(i + 76));
        v31 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v33 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
}


const void **__fastcall CraftingContainerManagerController::getExpandoItemGroupName(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r4@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  signed int v10; // r1@7
  int v11; // r0@11
  int v12; // r6@11
  unsigned int *v13; // r2@14
  unsigned int v14; // r1@16
  void *v15; // r0@22
  const void **v16; // r5@24
  unsigned int *v17; // r1@27
  unsigned int v18; // r0@29
  unsigned int *v19; // r6@33
  unsigned int v20; // r0@35
  unsigned int *v22; // r2@41
  signed int v23; // r1@43
  int v24; // [sp+0h] [bp-28h]@1
  int v25; // [sp+4h] [bp-24h]@1
  int v26; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  sub_21E8AF4(&v24, a2);
  ContainerManagerController::getContainerModel((int)&v25, v3, (int **)&v24);
  v5 = v26;
  if ( v26 )
  {
    v6 = *(_DWORD *)(v26 + 4);
    v7 = (unsigned int *)(v26 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v6 )
        {
          v10 = 1;
          v5 = 0;
          goto LABEL_11;
        }
        __dmb();
        v8 = __ldrex(v7);
        if ( v8 == v6 )
          break;
        __clrex();
        v6 = v8;
      }
      v9 = __strex(v6 + 1, v7);
      v6 = v8;
    }
    while ( v9 );
    __dmb();
    v10 = 0;
    if ( !*v7 )
      v10 = 1;
LABEL_11:
    v11 = v26;
    v12 = v25;
    if ( v10 )
      v12 = 0;
    if ( v26 )
      v13 = (unsigned int *)(v26 + 8);
      if ( &pthread_create )
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  }
  else
    v12 = 0;
    v5 = 0;
  v15 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( v12 )
    v16 = (const void **)(*(int (__fastcall **)(int, int))(*(_DWORD *)v12 + 60))(v12, v4);
    v16 = &Util::EMPTY_STRING;
  if ( v5 )
    v17 = (unsigned int *)(v5 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v16;
}


signed int __fastcall CraftingContainerManagerController::hasIngredientSetChanged(CraftingContainerManagerController *this, const ItemInstance *a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  signed int v7; // r5@7
  bool v8; // zf@7
  unsigned int v9; // r0@13
  unsigned int *v11; // r6@18
  unsigned int v12; // r0@20

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          v8 = *v4 == 0;
          if ( *v4 )
          {
            this = (CraftingContainerManagerController *)*((_DWORD *)this + 16);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = CraftingContainerManagerModel::hasIngredientSetChanged(this, a2);
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v4);
            while ( __strex(v9 - 1, v4) );
          else
            v9 = (*v4)--;
          if ( v9 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v7;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


void __fastcall CraftingContainerManagerController::switchExpandoItem(int a1, int *a2, int a3)
{
  CraftingContainerManagerController::switchExpandoItem(a1, a2, a3);
}


void __fastcall CraftingContainerManagerController::_clearCreativeHotbar(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController::_clearCreativeHotbar(this);
}


int __fastcall CraftingContainerManagerController::handleTakeHalf(int a1, ContainerItemStack *a2, int **a3, int a4)
{
  int v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r4@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int v17; // r0@14
  int result; // r0@23
  int v19; // [sp+Ch] [bp-74h]@1
  char v20; // [sp+10h] [bp-70h]@17
  int v21; // [sp+18h] [bp-68h]@21
  void *v22; // [sp+34h] [bp-4Ch]@19
  void *ptr; // [sp+44h] [bp-3Ch]@17

  v4 = a1;
  v19 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0xBu % dword_27F98F8;
  v8 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 11;
    if ( v10 == 11 )
      v11 = *(_DWORD *)(v9 + 4) == 11;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F98F8 == v7 )
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
    *v14 = 0;
    v14[1] = 11;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v7,
           0xBu,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  v17 = *(v15 - 3);
  if ( v16 != v17 || (v17 = memcmp(*v6, v15, v16)) != 0 )
    if ( CraftingContainerManagerController::isCreativeContainer(v17, (const void **)v6) == 1 )
      CraftingContainerManagerController::_handleCreativeItem((ContainerItemStack *)&v20, v4, v5, v6, v19, 1);
      ItemInstance::operator=((int)v5, (int)&v20);
      if ( ptr )
        operator delete(ptr);
      if ( v22 )
        operator delete(v22);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      result = 0;
      v21 = 0;
    else
      result = j_j_j__ZN26ContainerManagerController14handleTakeHalfER18ContainerItemStackRKSsi(v4, (int)v5, v6, v19);
  else
    *(_BYTE *)(v4 + 97) = 0;
    CraftingContainerManagerController::_craftItem((CraftingContainerManagerController *)v4, v5);
    *(_BYTE *)(v4 + 97) = 1;
    *(_BYTE *)(v4 + 112) = 0;
    result = *(_DWORD *)(v4 + 120);
    *(_DWORD *)(v4 + 116) = result;
    *(_DWORD *)(v4 + 124) = 0;
    *(_BYTE *)(v4 + 128) = 0;
  return result;
}


int __fastcall CraftingContainerManagerController::_updateCraftingResultItem(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController *v1; // r11@1
  int v2; // r9@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r5@7
  int v8; // r8@11
  ContainerManagerModel *v9; // r10@11
  int v10; // r0@11
  int v11; // r7@14
  int v12; // r6@14
  int v14; // r5@18
  bool v15; // zf@21
  _DWORD *v16; // r0@25
  ContainerController *v17; // r7@26
  __int64 v18; // r0@32
  bool v19; // zf@32
  float v25; // r1@35
  __int64 v28; // r0@35
  int v29; // r5@35
  int v30; // r4@36
  const ItemInstance *v31; // r0@37
  __int64 v32; // r6@38
  int v33; // r4@39
  int (__fastcall *v34)(int, int *, int); // r5@39
  Entity *v35; // r0@39
  int v36; // r0@39
  int v37; // r1@40
  int v38; // r0@40
  bool v39; // zf@40
  unsigned __int64 *v40; // r0@45
  unsigned int *v41; // r4@54
  int v43; // [sp+0h] [bp-F0h]@35
  char v44; // [sp+80h] [bp-70h]@26
  int v45; // [sp+88h] [bp-68h]@30
  void *v46; // [sp+A4h] [bp-4Ch]@28
  void *ptr; // [sp+B4h] [bp-3Ch]@26

  v1 = this;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          if ( !*v4 )
            v7 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v2 = 0;
LABEL_11:
  v8 = 0xAu % dword_27F98F8;
  v9 = (ContainerManagerModel *)*((_DWORD *)v1 + 16);
  v10 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
  if ( v7 )
    v9 = 0;
  if ( !v10 )
    goto LABEL_25;
  v11 = *(_DWORD *)v10;
  v12 = *(_DWORD *)(*(_DWORD *)v10 + 12);
  while ( 1 )
    _ZF = v12 == 10;
    if ( v12 == 10 )
      _ZF = *(_DWORD *)(v11 + 4) == 10;
    if ( _ZF )
      break;
    v14 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
      v12 = *(_DWORD *)(v14 + 12);
      v10 = v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v14 + 12) % (unsigned int)dword_27F98F8 == v8 )
        continue;
  v15 = v10 == 0;
  if ( v10 )
    v10 = *(_DWORD *)v10;
    v15 = v10 == 0;
  if ( v15 )
LABEL_25:
    v16 = operator new(0x10u);
    *v16 = 0;
    v16[1] = 10;
    v16[2] = &unk_28898CC;
    v10 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F98F4,
            v8,
            0xAu,
            (int)v16);
  v17 = *(ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                   (unsigned __int64 *)((char *)v1 + 20),
                                   (int **)(v10 + 8));
  ItemInstance::ItemInstance((int)&v44);
  ItemInstance::operator=((int)v1 + 144, (int)&v44);
  if ( ptr )
    operator delete(ptr);
  if ( v46 )
    operator delete(v46);
  if ( v45 )
    (*(void (**)(void))(*(_DWORD *)v45 + 4))();
  LODWORD(v18) = 0;
  v19 = v17 == 0;
  v45 = 0;
  if ( v17 )
    v18 = *(_QWORD *)((char *)v1 + 76);
    v19 = HIDWORD(v18) == (_DWORD)v18;
  if ( !v19 )
    _R0 = ContainerController::getContainerSize(v17);
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMOV            R0, S0
    _R0 = mce::Math::sqrt(_R0, v25);
      VCVTR.S32.F32   S0, S0
      VMOV            R4, S0
    LODWORD(v28) = &v43;
    CraftingContainer::CraftingContainer(v28, _R4);
    v29 = _R4 * _R4;
    if ( _R4 * _R4 )
      v30 = 0;
      do
        v31 = (const ItemInstance *)ContainerController::getItem(v17, v30);
        CraftingContainer::setItem((CraftingContainer *)&v43, v30++, v31);
      while ( v30 < v29 );
    v32 = *(_QWORD *)((char *)v1 + 76);
    if ( (_DWORD)v32 != HIDWORD(v32) )
      while ( 1 )
        v33 = *(_DWORD *)v32;
        v34 = *(int (__fastcall **)(int, int *, int))(**(_DWORD **)v32 + 28);
        v35 = (Entity *)ContainerManagerModel::getPlayer(v9);
        v36 = Entity::getLevel(v35);
        if ( v34(v33, &v43, v36) == 1 )
          v37 = *((_DWORD *)v1 + 23);
          v38 = *(_DWORD *)v32;
          v39 = v37 == 0;
          if ( v37 )
            v39 = v38 == v37;
          if ( v39 )
            break;
        LODWORD(v32) = v32 + 4;
        if ( HIDWORD(v32) == (_DWORD)v32 )
          goto LABEL_46;
      *((_DWORD *)v1 + 22) = v38;
      v40 = (unsigned __int64 *)(*(int (**)(void))(**(_DWORD **)v32 + 8))();
      std::vector<ItemInstance,std::allocator<ItemInstance>>::operator=((int)v1 + 216, v40);
      ItemInstance::operator=((int)v1 + 144, *((_DWORD *)v1 + 54));
LABEL_46:
    LODWORD(v18) = CraftingContainer::~CraftingContainer((CraftingContainer *)&v43);
    HIDWORD(v18) = v2 + 4;
    if ( &pthread_create )
        LODWORD(v18) = __ldrex((unsigned int *)HIDWORD(v18));
      while ( __strex(v18 - 1, (unsigned int *)HIDWORD(v18)) );
    else
      LODWORD(v18) = (*(_DWORD *)HIDWORD(v18))--;
    if ( (_DWORD)v18 == 1 )
      v41 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          LODWORD(v18) = __ldrex(v41);
        while ( __strex(v18 - 1, v41) );
        LODWORD(v18) = (*v41)--;
      if ( (_DWORD)v18 == 1 )
        LODWORD(v18) = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v18;
}


void __fastcall CraftingContainerManagerController::switchExpandoItem(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r4@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  signed int v10; // r1@7
  int v11; // r0@11
  int v12; // r6@11
  unsigned int *v13; // r2@14
  unsigned int v14; // r1@16
  void *v15; // r0@22
  unsigned int *v16; // r1@26
  unsigned int v17; // r0@28
  unsigned int *v18; // r5@32
  unsigned int v19; // r0@34
  unsigned int *v20; // r2@40
  signed int v21; // r1@42
  int v22; // [sp+0h] [bp-28h]@1
  int v23; // [sp+4h] [bp-24h]@1
  int v24; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  sub_21E8AF4(&v22, a2);
  ContainerManagerController::getContainerModel((int)&v23, v3, (int **)&v22);
  v5 = v24;
  if ( v24 )
  {
    v6 = *(_DWORD *)(v24 + 4);
    v7 = (unsigned int *)(v24 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v6 )
        {
          v10 = 1;
          v5 = 0;
          goto LABEL_11;
        }
        __dmb();
        v8 = __ldrex(v7);
        if ( v8 == v6 )
          break;
        __clrex();
        v6 = v8;
      }
      v9 = __strex(v6 + 1, v7);
      v6 = v8;
    }
    while ( v9 );
    __dmb();
    v10 = 0;
    if ( !*v7 )
      v10 = 1;
LABEL_11:
    v11 = v24;
    v12 = v23;
    if ( v10 )
      v12 = 0;
    if ( v24 )
      v13 = (unsigned int *)(v24 + 8);
      if ( &pthread_create )
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  }
  else
    v12 = 0;
    v5 = 0;
  v15 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( v12 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v12 + 64))(v12, v4);
  if ( v5 )
    v16 = (unsigned int *)(v5 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
}


int __fastcall CraftingContainerManagerController::handleTakeAll(int a1, ContainerItemStack *a2, int **a3, int a4)
{
  int v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r4@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int v17; // r0@14
  int result; // r0@23
  int v19; // [sp+Ch] [bp-74h]@1
  char v20; // [sp+10h] [bp-70h]@17
  int v21; // [sp+18h] [bp-68h]@21
  void *v22; // [sp+34h] [bp-4Ch]@19
  void *ptr; // [sp+44h] [bp-3Ch]@17

  v4 = a1;
  v19 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0xBu % dword_27F98F8;
  v8 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 11;
    if ( v10 == 11 )
      v11 = *(_DWORD *)(v9 + 4) == 11;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F98F8 == v7 )
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
    *v14 = 0;
    v14[1] = 11;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v7,
           0xBu,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  v17 = *(v15 - 3);
  if ( v16 != v17 || (v17 = memcmp(*v6, v15, v16)) != 0 )
    if ( CraftingContainerManagerController::isCreativeContainer(v17, (const void **)v6) == 1 )
      CraftingContainerManagerController::_handleCreativeItem((ContainerItemStack *)&v20, v4, v5, v6, v19, 0);
      ItemInstance::operator=((int)v5, (int)&v20);
      if ( ptr )
        operator delete(ptr);
      if ( v22 )
        operator delete(v22);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      result = 0;
      v21 = 0;
    else
      result = j_j_j__ZN26ContainerManagerController13handleTakeAllER18ContainerItemStackRKSsi(v4, (int)v5, v6, v19);
  else
    *(_BYTE *)(v4 + 97) = 0;
    CraftingContainerManagerController::_craftItem((CraftingContainerManagerController *)v4, v5);
    *(_BYTE *)(v4 + 97) = 1;
    *(_BYTE *)(v4 + 112) = 0;
    result = *(_DWORD *)(v4 + 120);
    *(_DWORD *)(v4 + 116) = result;
    *(_DWORD *)(v4 + 124) = 0;
    *(_BYTE *)(v4 + 128) = 0;
  return result;
}


int __fastcall CraftingContainerManagerController::setIsDisplayingInvalidRecipe(int result, bool a2)
{
  *(_BYTE *)(result + 96) = a2;
  return result;
}


int __fastcall CraftingContainerManagerController::_filterRecipes(CraftingContainerManagerController *this)
{
  CraftingContainerManagerController *v1; // r5@1
  Recipes *v2; // r0@1
  unsigned __int64 *v3; // r0@1
  int v4; // r1@1
  unsigned __int64 *v5; // r9@1
  signed int v6; // r0@1
  unsigned int v7; // r6@1
  char *v8; // r4@4
  void *v9; // r0@6
  unsigned __int64 v10; // r0@9
  int v11; // r8@9
  unsigned int v12; // r1@10
  unsigned int *v13; // r0@10
  unsigned int v14; // r2@13
  unsigned int v15; // r3@14
  ContainerManagerModel *v16; // r4@17
  unsigned int *v17; // r2@20
  unsigned int v18; // r1@22
  unsigned int v19; // r10@29
  int v20; // r4@30
  char *v21; // r0@32
  int v22; // r11@32
  char *v23; // r0@35
  int v24; // r6@35
  _BYTE *v25; // r4@38
  char *v26; // r7@38
  unsigned int v27; // r2@38
  unsigned int v28; // r1@40
  unsigned int v29; // r6@40
  int v30; // r11@47
  int v31; // r11@49
  int v32; // r0@51
  _BYTE *v33; // r4@52
  char *v34; // r7@52
  unsigned int v35; // r2@52
  unsigned int v36; // r1@54
  unsigned int v37; // r11@54
  int v38; // r6@61
  int v39; // r6@63
  unsigned int *v40; // r4@78
  int v42; // [sp+0h] [bp-30h]@29
  ContainerManagerModel *v43; // [sp+4h] [bp-2Ch]@9
  int v44; // [sp+8h] [bp-28h]@9

  v1 = this;
  v2 = Recipes::getInstance(this);
  v3 = (unsigned __int64 *)Recipes::getRecipes(v2);
  v4 = *((_DWORD *)v1 + 19);
  v5 = v3;
  *((_DWORD *)v1 + 20) = v4;
  v6 = (*v3 >> 32) - *v3;
  v7 = v6 >> 2;
  if ( (unsigned int)(v6 >> 2) >= 0x40000000 )
    sub_21E5A04("vector::reserve");
  if ( (*((_DWORD *)v1 + 21) - v4) >> 2 < v7 )
  {
    if ( v7 )
      v8 = (char *)operator new(v6);
    else
      v8 = 0;
    v9 = (void *)*((_DWORD *)v1 + 19);
    if ( v9 )
      operator delete(v9);
    *((_DWORD *)v1 + 19) = v8;
    *((_DWORD *)v1 + 20) = v8;
    *((_DWORD *)v1 + 21) = &v8[4 * v7];
  }
  LODWORD(v10) = ContainerManagerController::getContainerManagerModel((ContainerManagerController *)&v43, (int)v1);
  v11 = v44;
  if ( v44 )
    v12 = *(_DWORD *)(v44 + 4);
    v13 = (unsigned int *)(v44 + 4);
    while ( v12 )
    {
      __dmb();
      v14 = __ldrex(v13);
      if ( v14 == v12 )
      {
        v15 = __strex(v12 + 1, v13);
        v12 = v14;
        if ( !v15 )
        {
          __dmb();
          HIDWORD(v10) = 0;
          *(_DWORD *)v10;
          goto LABEL_17;
        }
      }
      else
        __clrex();
    }
    HIDWORD(v10) = 1;
    v11 = 0;
LABEL_17:
    LODWORD(v10) = v44;
    v16 = v43;
    if ( HIDWORD(v10) )
      v16 = 0;
    if ( v44 )
      v17 = (unsigned int *)(v44 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        LODWORD(v10) = (*(int (**)(void))(*(_DWORD *)v10 + 12))();
    if ( v16 )
      ContainerManagerModel::isCreativeMode(v16);
      v10 = *v5;
      if ( HIDWORD(v10) != (_DWORD)v10 )
        v19 = 0;
        v42 = *((_BYTE *)v1 + 72);
          v20 = *(_DWORD *)(v10 + 4 * v19);
          if ( v20 )
          {
            if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v20 + 44))(*(_DWORD *)(v10 + 4 * v19)) == 1 )
            {
              v21 = (char *)*((_QWORD *)v1 + 10);
              v22 = *(_DWORD *)(*(_DWORD *)v5 + 4 * v19);
              if ( v21 == (char *)(*((_QWORD *)v1 + 10) >> 32) )
              {
                v25 = (_BYTE *)*((_DWORD *)v1 + 19);
                v26 = 0;
                v27 = (v21 - v25) >> 2;
                if ( !v27 )
                  v27 = 1;
                v28 = v27 + ((v21 - v25) >> 2);
                v29 = v27 + ((v21 - v25) >> 2);
                if ( 0 != v28 >> 30 )
                  v29 = 0x3FFFFFFF;
                if ( v28 < v27 )
                if ( v29 )
                {
                  if ( v29 >= 0x40000000 )
                    sub_21E57F4();
                  v26 = (char *)operator new(4 * v29);
                  v21 = (char *)(*(_QWORD *)((char *)v1 + 76) >> 32);
                  v25 = (_BYTE *)*(_QWORD *)((char *)v1 + 76);
                }
                *(_DWORD *)&v26[v21 - v25] = v22;
                v30 = (int)&v26[v21 - v25];
                if ( (v21 - v25) >> 2 )
                  _aeabi_memmove4(v26, v25);
                v31 = v30 + 4;
                if ( v25 )
                  operator delete(v25);
                v32 = (int)&v26[4 * v29];
                *((_DWORD *)v1 + 19) = v26;
                *((_DWORD *)v1 + 20) = v31;
LABEL_66:
                *((_DWORD *)v1 + 21) = v32;
                goto LABEL_67;
              }
              *(_DWORD *)v21 = v22;
LABEL_37:
              *((_DWORD *)v1 + 20) += 4;
              goto LABEL_67;
            }
            if ( v42 >= (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20) )
              v23 = (char *)*((_QWORD *)v1 + 10);
              v24 = *(_DWORD *)(*(_DWORD *)v5 + 4 * v19);
              if ( v23 == (char *)(*((_QWORD *)v1 + 10) >> 32) )
                v33 = (_BYTE *)*((_DWORD *)v1 + 19);
                v34 = 0;
                v35 = (v23 - v33) >> 2;
                if ( !v35 )
                  v35 = 1;
                v36 = v35 + ((v23 - v33) >> 2);
                v37 = v35 + ((v23 - v33) >> 2);
                if ( 0 != v36 >> 30 )
                  v37 = 0x3FFFFFFF;
                if ( v36 < v35 )
                if ( v37 )
                  if ( v37 >= 0x40000000 )
                  v34 = (char *)operator new(4 * v37);
                  v23 = (char *)(*(_QWORD *)((char *)v1 + 76) >> 32);
                  v33 = (_BYTE *)*(_QWORD *)((char *)v1 + 76);
                *(_DWORD *)&v34[v23 - v33] = v24;
                v38 = (int)&v34[v23 - v33];
                if ( (v23 - v33) >> 2 )
                  _aeabi_memmove4(v34, v33);
                v39 = v38 + 4;
                if ( v33 )
                  operator delete(v33);
                v32 = (int)&v34[4 * v37];
                *((_DWORD *)v1 + 19) = v34;
                *((_DWORD *)v1 + 20) = v39;
                goto LABEL_66;
              *(_DWORD *)v23 = v24;
              goto LABEL_37;
          }
LABEL_67:
          v10 = *v5;
          ++v19;
        while ( v19 < (HIDWORD(v10) - (signed int)v10) >> 2 );
    if ( v11 )
      HIDWORD(v10) = v11 + 4;
          LODWORD(v10) = __ldrex((unsigned int *)HIDWORD(v10));
        while ( __strex(v10 - 1, (unsigned int *)HIDWORD(v10)) );
        LODWORD(v10) = (*(_DWORD *)HIDWORD(v10))--;
      if ( (_DWORD)v10 == 1 )
        v40 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          do
            LODWORD(v10) = __ldrex(v40);
          while ( __strex(v10 - 1, v40) );
        else
          LODWORD(v10) = (*v40)--;
        if ( (_DWORD)v10 == 1 )
          LODWORD(v10) = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return v10;
}


int __fastcall CraftingContainerManagerController::_addItemTransfer(int a1, int a2, int a3, int *a4, int a5, int *a6, int a7)
{
  int *v7; // r6@1
  int v8; // r7@1
  int v9; // r4@1
  __int64 v10; // r0@1
  void *v11; // r0@4
  void *v12; // r0@5
  int result; // r0@10
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+0h] [bp-70h]@1
  int v19; // [sp+8h] [bp-68h]@10
  void *v20; // [sp+24h] [bp-4Ch]@8
  void *ptr; // [sp+34h] [bp-3Ch]@6
  int v22; // [sp+48h] [bp-28h]@1
  int v23; // [sp+4Ch] [bp-24h]@1
  int v24; // [sp+50h] [bp-20h]@1
  int v25; // [sp+54h] [bp-1Ch]@1

  v7 = a4;
  v8 = a3;
  v9 = a2;
  ItemTransferData::ItemTransferData((ItemTransferData *)&v18);
  ItemInstance::operator=((int)&v18, v8);
  EntityInteraction::setInteractText(&v22, v7);
  v23 = a5;
  EntityInteraction::setInteractText(&v24, a6);
  v25 = a7;
  v10 = *(_QWORD *)(v9 + 4);
  if ( (_DWORD)v10 == HIDWORD(v10) )
  {
    std::vector<ItemTransferData,std::allocator<ItemTransferData>>::_M_emplace_back_aux<ItemTransferData const&>(
      (unsigned __int64 *)v9,
      (int)&v18);
  }
  else
    ItemTransferData::ItemTransferData((ItemInstance *)v10, (int)&v18);
    *(_DWORD *)(v9 + 4) += 88;
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( ptr )
    operator delete(ptr);
  if ( v20 )
    operator delete(v20);
  result = v19;
  if ( v19 )
    result = (*(int (**)(void))(*(_DWORD *)v19 + 4))();
  return result;
}


int __fastcall CraftingContainerManagerController::handleTakeAmount(int a1, ContainerItemStack *a2, int a3, int **a4, int a5)
{
  int v5; // r10@1
  ContainerItemStack *v6; // r9@1
  int **v7; // r6@1
  int v8; // r7@1
  int v9; // r0@1
  int v10; // r11@2
  int v11; // r4@2
  bool v12; // zf@3
  int v13; // r8@6
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  _DWORD *v16; // r1@14
  size_t v17; // r2@14
  int v18; // r0@14
  int result; // r0@23
  int v20; // [sp+Ch] [bp-74h]@1
  char v21; // [sp+10h] [bp-70h]@17
  int v22; // [sp+18h] [bp-68h]@21
  void *v23; // [sp+34h] [bp-4Ch]@19
  void *ptr; // [sp+44h] [bp-3Ch]@17

  v5 = a1;
  v20 = a3;
  v6 = a2;
  v7 = a4;
  v8 = 0xBu % dword_27F98F8;
  v9 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 11;
    if ( v11 == 11 )
      v12 = *(_DWORD *)(v10 + 4) == 11;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27F98F8 == v8 )
        continue;
    }
  }
  v14 = v9 == 0;
  if ( v9 )
    v9 = *(_DWORD *)v9;
    v14 = v9 == 0;
  if ( v14 )
LABEL_13:
    v15 = operator new(0x10u);
    *v15 = 0;
    v15[1] = 11;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v8,
           0xBu,
           (int)v15);
  v16 = *(_DWORD **)(v9 + 8);
  v17 = *(*v7 - 3);
  v18 = *(v16 - 3);
  if ( v17 != v18 || (v18 = memcmp(*v7, v16, v17)) != 0 )
    if ( CraftingContainerManagerController::isCreativeContainer(v18, (const void **)v7) == 1 )
      CraftingContainerManagerController::_handleCreativeItem((ContainerItemStack *)&v21, v5, v6, v7, a5, 0);
      ItemInstance::operator=((int)v6, (int)&v21);
      if ( ptr )
        operator delete(ptr);
      if ( v23 )
        operator delete(v23);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      result = 0;
      v22 = 0;
    else
      result = j_j_j__ZN26ContainerManagerController16handleTakeAmountER18ContainerItemStackiRKSsi(
                 v5,
                 (int)v6,
                 v20,
                 v7,
                 a5);
  else
    *(_BYTE *)(v5 + 97) = 0;
    CraftingContainerManagerController::_craftItem((CraftingContainerManagerController *)v5, v6);
    *(_BYTE *)(v5 + 97) = 1;
    *(_BYTE *)(v5 + 112) = 0;
    result = *(_DWORD *)(v5 + 120);
    *(_DWORD *)(v5 + 116) = result;
    *(_DWORD *)(v5 + 124) = 0;
    *(_BYTE *)(v5 + 128) = 0;
  return result;
}


void __fastcall CraftingContainerManagerController::getCurrentContainerStateList(CraftingContainerManagerController *this, int a2)
{
  CraftingContainerManagerController::getCurrentContainerStateList(this, a2);
}


int __fastcall CraftingContainerManagerController::_craftItem(CraftingContainerManagerController *this, ContainerItemStack *a2)
{
  CraftingContainerManagerController *v2; // r10@1
  ContainerItemStack *v3; // r8@1
  int v4; // r11@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  unsigned int v9; // r1@7
  signed int v10; // r0@7
  ContainerManagerModel *v11; // r1@11
  const ItemInstance *v12; // r5@13
  int v13; // r0@13
  int v14; // r9@14
  int v15; // r6@14
  bool v16; // zf@15
  int v17; // r7@18
  bool v18; // zf@21
  _DWORD *v19; // r0@25
  ContainerController **v20; // r0@26
  bool v21; // zf@26
  int v22; // r0@38
  const ItemInstance *v23; // r0@39
  ItemInstance *v24; // r0@40
  int v25; // r5@40
  int v26; // r0@40
  int v27; // r1@40
  __int64 v28; // r0@42
  char *v29; // r2@43
  signed int v30; // r0@44
  int v31; // r9@46
  int v32; // r8@47
  int v33; // r5@48
  int v34; // r0@48
  __int16 v35; // r0@48
  unsigned int v36; // r4@73
  char *v37; // r5@74
  int v38; // r6@74
  ContainerItemStack *v39; // r0@75
  const ItemInstance *v40; // r5@75
  int v41; // r8@75
  int v42; // r4@75
  int v43; // r6@78
  signed int v44; // r0@83
  int v45; // r5@84
  __int16 v46; // r0@84
  int v47; // r5@105
  __int16 v48; // r0@105
  bool v49; // zf@125
  int v50; // r4@130
  int v51; // r4@143
  int v52; // r0@143
  int v53; // r1@143
  int v54; // r3@143
  int v55; // r7@143
  int v56; // r0@143
  int v57; // r7@143
  bool v58; // r6@143
  signed int v59; // r5@145
  bool v60; // r3@147
  char *v61; // r5@150
  void *v62; // r0@151
  void *v63; // r0@153
  int v64; // r0@155
  int result; // r0@178
  unsigned int *v66; // r1@179
  unsigned int *v67; // r4@185
  int v68; // [sp+18h] [bp-580h]@83
  int v69; // [sp+34h] [bp-564h]@46
  char *v70; // [sp+38h] [bp-560h]@46
  int v71; // [sp+40h] [bp-558h]@75
  unsigned int v72; // [sp+44h] [bp-554h]@75
  ContainerController *v73; // [sp+48h] [bp-550h]@29
  ContainerManagerModel *v74; // [sp+4Ch] [bp-54Ch]@13
  void **v75; // [sp+50h] [bp-548h]@143
  int v76; // [sp+54h] [bp-544h]@143
  int v77; // [sp+58h] [bp-540h]@143
  char v78; // [sp+5Ch] [bp-53Ch]@143
  char v79; // [sp+5Dh] [bp-53Bh]@143
  int v80; // [sp+60h] [bp-538h]@143
  int v81; // [sp+68h] [bp-530h]@143
  int v82; // [sp+6Ch] [bp-52Ch]@143
  int v83; // [sp+70h] [bp-528h]@143
  int v84; // [sp+74h] [bp-524h]@143
  int v85; // [sp+78h] [bp-520h]@143
  int v86; // [sp+7Ch] [bp-51Ch]@143
  int v87; // [sp+80h] [bp-518h]@143
  int v88; // [sp+84h] [bp-514h]@143
  int v89; // [sp+88h] [bp-510h]@143
  int v90; // [sp+8Ch] [bp-50Ch]@143
  __int16 v91; // [sp+95h] [bp-503h]@130
  char v92; // [sp+97h] [bp-501h]@130
  int v93; // [sp+98h] [bp-500h]@130
  char v94; // [sp+9Ch] [bp-4FCh]@130
  __int16 v95; // [sp+9Dh] [bp-4FBh]@130
  char v96; // [sp+9Fh] [bp-4F9h]@130
  int v97; // [sp+A0h] [bp-4F8h]@130
  int v98; // [sp+A4h] [bp-4F4h]@130
  int v99; // [sp+A8h] [bp-4F0h]@130
  int v100; // [sp+B0h] [bp-4E8h]@140
  void *v101; // [sp+CCh] [bp-4CCh]@138
  void *v102; // [sp+DCh] [bp-4BCh]@136
  int v103; // [sp+F0h] [bp-4A8h]@130
  int v104; // [sp+F8h] [bp-4A0h]@134
  void *v105; // [sp+114h] [bp-484h]@132
  void *v106; // [sp+124h] [bp-474h]@130
  __int16 v107; // [sp+13Dh] [bp-45Bh]@105
  char v108; // [sp+13Fh] [bp-459h]@105
  int v109; // [sp+140h] [bp-458h]@105
  char v110; // [sp+144h] [bp-454h]@105
  int v111; // [sp+148h] [bp-450h]@105
  int v112; // [sp+14Ch] [bp-44Ch]@105
  int v113; // [sp+150h] [bp-448h]@105
  int v114; // [sp+158h] [bp-440h]@115
  void *v115; // [sp+174h] [bp-424h]@113
  void *v116; // [sp+184h] [bp-414h]@111
  int v117; // [sp+198h] [bp-400h]@105
  int v118; // [sp+1A0h] [bp-3F8h]@109
  void *v119; // [sp+1BCh] [bp-3DCh]@107
  void *v120; // [sp+1CCh] [bp-3CCh]@105
  char v121; // [sp+1E0h] [bp-3B8h]@96
  int v122; // [sp+1E8h] [bp-3B0h]@100
  void *v123; // [sp+204h] [bp-394h]@98
  void *v124; // [sp+214h] [bp-384h]@96
  __int16 v125; // [sp+22Dh] [bp-36Bh]@84
  char v126; // [sp+22Fh] [bp-369h]@84
  int v127; // [sp+230h] [bp-368h]@84
  char v128; // [sp+234h] [bp-364h]@84
  int v129; // [sp+238h] [bp-360h]@84
  int v130; // [sp+23Ch] [bp-35Ch]@84
  int v131; // [sp+240h] [bp-358h]@84
  int v132; // [sp+248h] [bp-350h]@94
  void *v133; // [sp+264h] [bp-334h]@92
  void *v134; // [sp+274h] [bp-324h]@90
  int v135; // [sp+288h] [bp-310h]@84
  int v136; // [sp+290h] [bp-308h]@88
  void *v137; // [sp+2ACh] [bp-2ECh]@86
  void *v138; // [sp+2BCh] [bp-2DCh]@84
  char v139; // [sp+2D0h] [bp-2C8h]@74
  int v140; // [sp+2D8h] [bp-2C0h]@122
  void *v141; // [sp+2F4h] [bp-2A4h]@120
  void *v142; // [sp+304h] [bp-294h]@118
  char v143; // [sp+318h] [bp-280h]@60
  int v144; // [sp+320h] [bp-278h]@64
  void *v145; // [sp+33Ch] [bp-25Ch]@62
  void *v146; // [sp+34Ch] [bp-24Ch]@60
  __int16 v147; // [sp+365h] [bp-233h]@48
  char v148; // [sp+367h] [bp-231h]@48
  int v149; // [sp+368h] [bp-230h]@48
  char v150; // [sp+36Ch] [bp-22Ch]@48
  int v151; // [sp+370h] [bp-228h]@48
  int v152; // [sp+374h] [bp-224h]@48
  int v153; // [sp+378h] [bp-220h]@48
  int v154; // [sp+380h] [bp-218h]@58
  void *v155; // [sp+39Ch] [bp-1FCh]@56
  void *v156; // [sp+3ACh] [bp-1ECh]@54
  int v157; // [sp+3C0h] [bp-1D8h]@48
  int v158; // [sp+3C8h] [bp-1D0h]@52
  void *v159; // [sp+3E4h] [bp-1B4h]@50
  void *v160; // [sp+3F4h] [bp-1A4h]@48
  char v161; // [sp+408h] [bp-190h]@48
  int v162; // [sp+410h] [bp-188h]@70
  void *v163; // [sp+42Ch] [bp-16Ch]@68
  void *v164; // [sp+43Ch] [bp-15Ch]@66
  char v165; // [sp+450h] [bp-148h]@32
  int v166; // [sp+458h] [bp-140h]@36
  void *v167; // [sp+474h] [bp-124h]@34
  void *ptr; // [sp+484h] [bp-114h]@32
  int v169; // [sp+498h] [bp-100h]@31
  int v170; // [sp+4A0h] [bp-F8h]@164
  char v171; // [sp+4A6h] [bp-F2h]@129
  char v172; // [sp+4A7h] [bp-F1h]@125
  void *v173; // [sp+4BCh] [bp-DCh]@162
  void *v174; // [sp+4CCh] [bp-CCh]@160
  char v175; // [sp+4E0h] [bp-B8h]@31
  int v176; // [sp+4E8h] [bp-B0h]@170
  void *v177; // [sp+504h] [bp-94h]@168
  void *v178; // [sp+514h] [bp-84h]@166
  char v179; // [sp+528h] [bp-70h]@31
  int v180; // [sp+530h] [bp-68h]@176
  int v181; // [sp+536h] [bp-62h]@149
  void *v182; // [sp+54Ch] [bp-4Ch]@174
  void *v183; // [sp+55Ch] [bp-3Ch]@172

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 17);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = (unsigned int *)(v4 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6;
          v10 = 0;
          if ( !v9 )
            v10 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v10 = 1;
  v4 = 0;
LABEL_11:
  v11 = (ContainerManagerModel *)*((_DWORD *)v2 + 16);
  if ( v10 )
    v11 = 0;
  v74 = v11;
  CraftingContainerManagerController::_updateCraftingResultItem(v2);
  v12 = (const ItemInstance *)(0xAu % dword_27F98F8);
  v13 = *(_DWORD *)(dword_27F98F4 + 4 * (0xAu % dword_27F98F8));
  if ( !v13 )
    goto LABEL_25;
  v14 = *(_DWORD *)v13;
  v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
  while ( 1 )
    v16 = v15 == 10;
    if ( v15 == 10 )
      v16 = *(_DWORD *)(v14 + 4) == 10;
    if ( v16 )
      break;
    v17 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 )
      v15 = *(_DWORD *)(v17 + 12);
      v13 = v14;
      v14 = *(_DWORD *)v14;
      if ( (const ItemInstance *)(*(_DWORD *)(v17 + 12) % (unsigned int)dword_27F98F8) == v12 )
        continue;
  v18 = v13 == 0;
  if ( v13 )
    v13 = *(_DWORD *)v13;
    v18 = v13 == 0;
  if ( v18 )
LABEL_25:
    v19 = operator new(0x10u);
    *v19 = 0;
    v19[1] = 10;
    v19[2] = &unk_28898CC;
    v13 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F98F4,
            (int)v12,
            0xAu,
            (int)v19);
  v20 = (ContainerController **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                                  (unsigned __int64 *)((char *)v2 + 20),
                                  (int **)(v13 + 8));
  v21 = *((_BYTE *)v2 + 159) == 0;
  if ( *((_BYTE *)v2 + 159) )
    v12 = (CraftingContainerManagerController *)((char *)v2 + 144);
    v21 = *((_DWORD *)v2 + 36) == 0;
  if ( !v21 )
    v73 = *v20;
    if ( !ItemInstance::isNull(v12) )
      if ( *((_BYTE *)v2 + 158) )
        ItemInstance::ItemInstance((ItemInstance *)&v179, (int)v12);
        ItemInstance::ItemInstance((ItemInstance *)&v175, (int)v12);
        ItemInstance::ItemInstance((int)&v169);
        if ( ContainerItemStack::isEmpty(v3) == 1 )
          ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v165, v12);
          ItemInstance::operator=((int)v3, (int)&v165);
          if ( ptr )
            operator delete(ptr);
          if ( v167 )
            operator delete(v167);
          if ( v166 )
            (*(void (**)(void))(*(_DWORD *)v166 + 4))();
          v166 = 0;
          v22 = ContainerItemStack::getItemInstance(v3);
          ItemInstance::operator=((int)&v169, v22);
        else
          v23 = (const ItemInstance *)ContainerItemStack::getItemInstance(v3);
          if ( ItemInstance::isStackable(v12, v23) != 1
            || (v24 = (ItemInstance *)ContainerItemStack::getItemInstance(v3),
                v25 = (int)v24,
                v26 = ItemInstance::getMaxStackSize(v24),
                v27 = *((_BYTE *)v2 + 158),
                v26 - *(_BYTE *)(v25 + 14) < v27) )
          {
LABEL_160:
            if ( v174 )
              operator delete(v174);
            if ( v173 )
              operator delete(v173);
            if ( v170 )
              (*(void (**)(void))(*(_DWORD *)v170 + 4))();
            if ( v178 )
              operator delete(v178);
            if ( v177 )
              operator delete(v177);
            if ( v176 )
              (*(void (**)(void))(*(_DWORD *)v176 + 4))();
            if ( v183 )
              operator delete(v183);
            if ( v182 )
              operator delete(v182);
            if ( v180 )
              (*(void (**)(void))(*(_DWORD *)v180 + 4))();
            goto LABEL_178;
          }
          ItemInstance::add((ItemInstance *)v25, v27);
          ItemInstance::operator=((int)&v169, v25);
        CraftingContainerManagerController::setLastCraftedItem(v2, (const ItemInstance *)&v179);
        v28 = *((_QWORD *)v2 + 27);
        if ( HIDWORD(v28) == (_DWORD)v28 )
          v29 = 0;
          LODWORD(v28) = *((_QWORD *)v2 + 27) >> 32;
          v30 = HIDWORD(v28) - v28;
          if ( (unsigned int)(954437177 * (v30 >> 3)) >= 0x38E38E4 )
            sub_21E57F4();
          v29 = (char *)operator new(v30);
          v28 = *((_QWORD *)v2 + 27);
        v70 = v29;
        v69 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
                v28,
                SHIDWORD(v28),
                (int)v29);
        v31 = ContainerController::getContainerSize(v73);
        if ( v31 >= 1 )
          v32 = 0;
          do
            v33 = ContainerManagerModel::getPlayer(v74);
            v34 = ContainerController::getItem(v73, v32);
            ItemInstance::ItemInstance((ItemInstance *)&v161, v34);
            ItemInstance::set((ItemInstance *)&v161, 1);
            v149 = 99999;
            v150 = -5;
            v35 = v147;
            *(_BYTE *)(((unsigned int)&v149 | 5) + 2) = v148;
            *(_WORD *)((unsigned int)&v149 | 5) = v35;
            v151 = 0;
            v152 = v32;
            ItemInstance::ItemInstance((ItemInstance *)&v153, (int)&ItemInstance::EMPTY_ITEM);
            ItemInstance::ItemInstance((ItemInstance *)&v157, (int)&v161);
            InventoryTransactionManager::addAction(v33 + 5152, (int)&v149);
            if ( v160 )
              operator delete(v160);
            if ( v159 )
              operator delete(v159);
            if ( v158 )
              (*(void (**)(void))(*(_DWORD *)v158 + 4))();
            v158 = 0;
            if ( v156 )
              operator delete(v156);
            if ( v155 )
              operator delete(v155);
            if ( v154 )
              (*(void (**)(void))(*(_DWORD *)v154 + 4))();
            v154 = 0;
            ContainerController::removeItem((ContainerController *)&v143, (int)v73, v32, 2);
            if ( v146 )
              operator delete(v146);
            if ( v145 )
              operator delete(v145);
            if ( v144 )
              (*(void (**)(void))(*(_DWORD *)v144 + 4))();
            v144 = 0;
            if ( v164 )
              operator delete(v164);
            if ( v163 )
              operator delete(v163);
            if ( v162 )
              (*(void (**)(void))(*(_DWORD *)v162 + 4))();
            ++v32;
          while ( v32 < v31 );
        v36 = 954437177 * ((v69 - (signed int)v70) >> 3);
        if ( v36 >= 2 )
          v37 = &v139;
          v38 = 1;
            v39 = (ContainerItemStack *)v37;
            v40 = (const ItemInstance *)&v70[72 * v38];
            ContainerItemStack::ContainerItemStack(v39, (const ItemInstance *)&v70[72 * v38]);
            v71 = v38;
            v72 = v36;
            v41 = 0;
            v42 = -1;
            while ( 1 )
            {
              if ( v41 >= ContainerController::getContainerSize(v73) )
              {
                v44 = 0;
                v68 = (int)v40;
                goto LABEL_103;
              }
              v43 = ContainerController::getItem(v73, v41);
              if ( ItemInstance::matchesItem((ItemInstance *)v43, v40) == 1 )
                break;
              if ( v42 == -1 )
                v42 = v41;
                if ( !ItemInstance::isNull((ItemInstance *)v43) )
                  v42 = -1;
              ++v41;
            }
            v68 = (int)v40;
            v45 = ContainerManagerModel::getPlayer(v74);
            v127 = 99999;
            v128 = -5;
            v46 = v125;
            *(_BYTE *)(((unsigned int)&v127 | 5) + 2) = v126;
            *(_WORD *)((unsigned int)&v127 | 5) = v46;
            v129 = 0;
            v130 = v41;
            ItemInstance::ItemInstance((ItemInstance *)&v131, v68);
            ItemInstance::ItemInstance((ItemInstance *)&v135, (int)&ItemInstance::EMPTY_ITEM);
            InventoryTransactionManager::addAction(v45 + 5152, (int)&v127);
            if ( v138 )
              operator delete(v138);
            if ( v137 )
              operator delete(v137);
            if ( v136 )
              (*(void (**)(void))(*(_DWORD *)v136 + 4))();
            v136 = 0;
            if ( v134 )
              operator delete(v134);
            if ( v133 )
              operator delete(v133);
            if ( v132 )
              (*(void (**)(void))(*(_DWORD *)v132 + 4))();
            v132 = 0;
            ContainerItemStack::increaseCount((ContainerItemStack *)&v139, *(_BYTE *)(v43 + 14));
            ContainerController::removeItem((ContainerController *)&v121, (int)v73, v41, *(_BYTE *)(v43 + 14));
            if ( v124 )
              operator delete(v124);
            if ( v123 )
              operator delete(v123);
            if ( v122 )
              (*(void (**)(void))(*(_DWORD *)v122 + 4))();
            v122 = 0;
            v44 = ContainerController::setItem((int)v73, v41, (int)&v139, 0, 1);
LABEL_103:
            if ( v42 != -1 && (v44 ^ 1) == 1 )
              v47 = ContainerManagerModel::getPlayer(v74);
              v109 = 99999;
              v110 = -5;
              v48 = v107;
              *(_BYTE *)(((unsigned int)&v109 | 5) + 2) = v108;
              *(_WORD *)((unsigned int)&v109 | 5) = v48;
              v111 = 0;
              v112 = v42;
              ItemInstance::ItemInstance((ItemInstance *)&v113, v68);
              ItemInstance::ItemInstance((ItemInstance *)&v117, (int)&ItemInstance::EMPTY_ITEM);
              InventoryTransactionManager::addAction(v47 + 5152, (int)&v109);
              if ( v120 )
                operator delete(v120);
              if ( v119 )
                operator delete(v119);
              if ( v118 )
                (*(void (**)(void))(*(_DWORD *)v118 + 4))();
              v118 = 0;
              if ( v116 )
                operator delete(v116);
              if ( v115 )
                operator delete(v115);
              if ( v114 )
                (*(void (**)(void))(*(_DWORD *)v114 + 4))();
              v114 = 0;
              ContainerController::setItem((int)v73, v42, (int)&v139, 0, 1);
            if ( v142 )
              operator delete(v142);
            v37 = &v139;
            v36 = v72;
            if ( v141 )
              operator delete(v141);
            if ( v140 )
              (*(void (**)(void))(*(_DWORD *)v140 + 4))();
            v38 = v71 + 1;
          while ( v71 + 1 < v72 );
        v49 = v172 == 0;
        if ( v172 )
          v49 = v169 == 0;
        if ( !v49 && !ItemInstance::isNull((ItemInstance *)&v169) && v171 )
          v50 = ContainerManagerModel::getPlayer(v74);
          v93 = 99999;
          v94 = -4;
          v96 = v92;
          v95 = v91;
          v97 = 0;
          v98 = 0;
          ItemInstance::ItemInstance((ItemInstance *)&v99, (int)&v175);
          ItemInstance::ItemInstance((ItemInstance *)&v103, (int)&ItemInstance::EMPTY_ITEM);
          InventoryTransactionManager::addAction(v50 + 5152, (int)&v93);
          if ( v106 )
            operator delete(v106);
          if ( v105 )
            operator delete(v105);
          if ( v104 )
            (*(void (**)(void))(*(_DWORD *)v104 + 4))();
          v104 = 0;
          if ( v102 )
            operator delete(v102);
          if ( v101 )
            operator delete(v101);
          if ( v100 )
            (*(void (**)(void))(*(_DWORD *)v100 + 4))();
          v100 = 0;
        v51 = *((_BYTE *)v2 + 72);
        v52 = (*(int (**)(void))(**((_DWORD **)v2 + 22) + 36))();
        v76 = 2;
        v77 = 1;
        v78 = 0;
        v75 = &off_26E979C;
        v79 = 0;
        v80 = v51;
        v53 = *(_DWORD *)v52;
        v54 = *(_DWORD *)(v52 + 4);
        v55 = *(_DWORD *)(v52 + 8);
        v56 = *(_DWORD *)(v52 + 12);
        v81 = v53;
        v82 = v54;
        v83 = v55;
        v90 = 0;
        v88 = 0;
        v89 = 0;
        v86 = 0;
        v87 = 0;
        v84 = v56;
        v85 = 0;
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance&>(
          (unsigned __int64 *)&v88,
          (int)&v179);
        CraftingContainerManagerModel::sendCraftedPacket(v74, (CraftingEventPacket *)&v75);
        v57 = *((_DWORD *)v2 + 32);
        v58 = 0;
        if ( v57 & 0xFF0000 )
          v58 = 1;
        v59 = *((_DWORD *)v2 + 32) & 0xFF00;
        if ( v57 & 0xFF00 )
          v59 = 1;
        v60 = *((_DWORD *)v2 + 32);
        if ( (_BYTE)v57 )
          v60 = 1;
        CraftingContainerManagerModel::fireItemCraftedEvent(
          v74,
          (const ItemInstance *)&v179,
          *((_BYTE *)v2 + 112),
          v60,
          *((_DWORD *)v2 + 29),
          *((_DWORD *)v2 + 30),
          *((_DWORD *)v2 + 31),
          v59,
          v58);
        CraftingContainerManagerModel::fireItemAcquiredEvent(v74, (const ItemInstance *)&v179, (unsigned __int8)v181);
        CraftingContainerManagerController::_handleQuilterAchievement(v2, (const ItemInstance *)&v179);
        CraftingEventPacket::~CraftingEventPacket((CraftingEventPacket *)&v75);
        if ( v70 != (char *)v69 )
          v61 = v70;
            v62 = (void *)*((_DWORD *)v61 + 13);
            if ( v62 )
              operator delete(v62);
            v63 = (void *)*((_DWORD *)v61 + 9);
            if ( v63 )
              operator delete(v63);
            v64 = *((_DWORD *)v61 + 2);
            if ( v64 )
              (*(void (**)(void))(*(_DWORD *)v64 + 4))();
            *((_DWORD *)v61 + 2) = 0;
            v61 += 72;
          while ( (char *)v69 != v61 );
        if ( v70 )
          operator delete(v70);
        goto LABEL_160;
LABEL_178:
  result = CraftingContainerManagerController::_updateCraftingResultItem(v2);
    v66 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v66);
      while ( __strex(result - 1, v66) );
    else
      result = (*v66)--;
    if ( result == 1 )
      v67 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v67);
        while ( __strex(result - 1, v67) );
        result = (*v67)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


int __fastcall CraftingContainerManagerController::setIsFiltering(int result, bool a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  bool v7; // zf@7
  unsigned int *v8; // r5@17

  v2 = *(_DWORD *)(result + 68);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4 == 0;
          if ( *v4 )
          {
            result = *(_DWORD *)(result + 64);
            v7 = result == 0;
          }
          if ( !v7 )
            CraftingContainerManagerModel::setIsFiltering((CraftingContainerManagerModel *)result, a2);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v8 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v8);
              while ( __strex(result - 1, v8) );
            }
            else
              result = (*v8)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall CraftingContainerManagerController::getHotbarSelectedSlot(CraftingContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r0@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  signed int v6; // r1@7
  int v7; // r0@11
  ContainerManagerModel *v8; // r5@11
  unsigned int *v9; // r2@14
  unsigned int v10; // r1@16
  int v11; // r5@18
  Player *v12; // r0@23
  int v13; // r0@23
  unsigned int *v14; // r1@26
  unsigned int v15; // r0@28
  unsigned int *v16; // r6@32
  unsigned int v17; // r0@34
  int v19; // [sp+0h] [bp-20h]@23
  int v20; // [sp+4h] [bp-1Ch]@23
  ContainerManagerModel *v21; // [sp+8h] [bp-18h]@1
  int v22; // [sp+Ch] [bp-14h]@1

  ContainerManagerController::getContainerManagerModel((ContainerManagerController *)&v21, (int)this);
  v1 = v22;
  if ( v22 )
  {
    v2 = *(_DWORD *)(v22 + 4);
    v3 = (unsigned int *)(v22 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v2 )
        {
          v6 = 1;
          v1 = 0;
          goto LABEL_11;
        }
        __dmb();
        v4 = __ldrex(v3);
        if ( v4 == v2 )
          break;
        __clrex();
        v2 = v4;
      }
      v5 = __strex(v2 + 1, v3);
      v2 = v4;
    }
    while ( v5 );
    __dmb();
    v6 = 0;
    if ( !*v3 )
      v6 = 1;
LABEL_11:
    v7 = v22;
    v8 = v21;
    if ( v6 )
      v8 = 0;
    if ( v22 )
      v9 = (unsigned int *)(v22 + 8);
      if ( &pthread_create )
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (**)(void))(*(_DWORD *)v7 + 12))();
    if ( v8 )
      v12 = (Player *)ContainerManagerModel::getPlayer(v8);
      v13 = Player::getSupplies(v12);
      PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v19, v13);
      v11 = v20;
    else
      v11 = 0;
    if ( v1 )
      v14 = (unsigned int *)(v1 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v16 = (unsigned int *)(v1 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  }
  else
    v11 = 0;
  return v11;
}


signed int __fastcall CraftingContainerManagerController::handlePlaceAll(CraftingContainerManagerController *a1, ContainerItemStack *a2, int **a3, int a4)
{
  ContainerItemStack *v4; // r10@1
  int **v5; // r11@1
  int v6; // r9@1
  int v7; // r0@1
  int v8; // r4@2
  int v9; // r6@2
  bool v10; // zf@3
  int v11; // r7@6
  bool v12; // zf@9
  _DWORD *v13; // r0@13
  int *v14; // r11@14
  _DWORD *v15; // r1@14
  size_t v16; // r4@14
  int v17; // r5@16
  int v18; // r0@16
  int v19; // r10@17
  int v20; // r8@17
  bool v21; // zf@18
  int v22; // r9@21
  signed int result; // r0@24
  bool v24; // zf@25
  _DWORD *v25; // r0@29
  _DWORD *v26; // r1@30
  int v27; // r0@30
  ContainerItemStack *v28; // [sp+8h] [bp-80h]@16
  int v29; // [sp+Ch] [bp-7Ch]@1
  CraftingContainerManagerController *v30; // [sp+10h] [bp-78h]@1
  int **v31; // [sp+14h] [bp-74h]@14
  char v32; // [sp+18h] [bp-70h]@33
  int v33; // [sp+20h] [bp-68h]@37
  void *v34; // [sp+3Ch] [bp-4Ch]@35
  void *ptr; // [sp+4Ch] [bp-3Ch]@33

  v29 = a4;
  v4 = a2;
  v30 = a1;
  v5 = a3;
  v6 = 0xBu % dword_27F98F8;
  v7 = *(_DWORD *)(dword_27F98F4 + 4 * (0xBu % dword_27F98F8));
  if ( !v7 )
    goto LABEL_13;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  while ( 1 )
  {
    v10 = v9 == 11;
    if ( v9 == 11 )
      v10 = *(_DWORD *)(v8 + 4) == 11;
    if ( v10 )
      break;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v11 + 12);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27F98F8 == v6 )
        continue;
    }
  }
  v12 = v7 == 0;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v12 = v7 == 0;
  if ( v12 )
LABEL_13:
    v13 = operator new(0x10u);
    *v13 = 0;
    v13[1] = 11;
    v13[2] = &unk_28898CC;
    v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F98F4,
           v6,
           0xBu,
           (int)v13);
  v31 = v5;
  v14 = *v5;
  v15 = *(_DWORD **)(v7 + 8);
  v16 = *(v14 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(v14, v15, *(v14 - 3)) )
    *((_BYTE *)v30 + 97) = 0;
    CraftingContainerManagerController::_craftItem(v30, v4);
    *((_BYTE *)v30 + 97) = 1;
    *((_BYTE *)v30 + 112) = 0;
    result = *((_DWORD *)v30 + 30);
    *((_DWORD *)v30 + 29) = result;
    *((_DWORD *)v30 + 31) = 0;
    *((_BYTE *)v30 + 128) = 0;
  else
    v28 = v4;
    v17 = 3u % dword_27F98F8;
    v18 = *(_DWORD *)(dword_27F98F4 + 4 * (3u % dword_27F98F8));
    if ( !v18 )
      goto LABEL_29;
    v19 = *(_DWORD *)v18;
    v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    while ( 1 )
      v21 = v20 == 3;
      if ( v20 == 3 )
        v21 = *(_DWORD *)(v19 + 4) == 3;
      if ( v21 )
        break;
      v22 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 )
      {
        v20 = *(_DWORD *)(v22 + 12);
        v18 = v19;
        v19 = *(_DWORD *)v19;
        if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27F98F8 == v17 )
          continue;
      }
    v24 = v18 == 0;
    if ( v18 )
      v18 = *(_DWORD *)v18;
      v24 = v18 == 0;
    if ( v24 )
LABEL_29:
      v25 = operator new(0x10u);
      *v25 = 0;
      v25[1] = 3;
      v25[2] = &unk_28898CC;
      v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F98F4,
              v17,
              3u,
              (int)v25);
      v14 = *v31;
      v16 = *(*v31 - 3);
    v26 = *(_DWORD **)(v18 + 8);
    v27 = *(v26 - 3);
    if ( v16 != v27 || (v27 = memcmp(v14, v26, v16)) != 0 )
      if ( CraftingContainerManagerController::isCreativeContainer(v27, (const void **)v31) == 1 )
        CraftingContainerManagerController::_handleCreativeItem((ContainerItemStack *)&v32, (int)v30, v28, v31, v29, 0);
        ItemInstance::operator=((int)v28, (int)&v32);
        if ( ptr )
          operator delete(ptr);
        if ( v34 )
          operator delete(v34);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        result = 0;
        v33 = 0;
      else
        result = j_j_j__ZN26ContainerManagerController14handlePlaceAllER18ContainerItemStackRKSsi(
                   (int)v30,
                   (int)v28,
                   v31,
                   v29);
    else
      result = j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi((int)v30, v28, v31, v29);
  return result;
}
