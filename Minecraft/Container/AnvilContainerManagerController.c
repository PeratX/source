

signed int __fastcall AnvilContainerManagerController::shouldDrawRed(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  int v9; // r6@11
  signed int v10; // r5@14
  int v11; // r5@17
  unsigned int *v12; // r1@25
  unsigned int v13; // r0@27
  unsigned int *v14; // r6@31
  unsigned int v15; // r0@33

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
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = *((_DWORD *)v1 + 16);
  if ( v8 )
    v9 = 0;
  if ( AnvilContainerManagerController::_isTooExpensive(v1) )
    v10 = 1;
  else if ( AnvilContainerManagerController::_mayPickup(v1) )
    v10 = 0;
  else
    v11 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v9 + 32))(v9, 2);
    if ( *(_BYTE *)(v11 + 15) )
      if ( *(_DWORD *)v11 )
        if ( ItemInstance::isNull((ItemInstance *)v11) )
          v10 = 0;
        else
          v10 = *(_BYTE *)(v11 + 14) != 0;
        v10 = 0;
    else
      v10 = 0;
    v12 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v10;
}


signed int __fastcall AnvilContainerManagerController::handleTakeAmount(AnvilContainerManagerController *a1, int a2, int a3, int **a4, int a5)
{
  AnvilContainerManagerController *v5; // r11@1
  int **v6; // r4@1
  int v7; // r10@1
  int v8; // r5@1
  int v9; // r0@1
  int v10; // r9@2
  int v11; // r6@2
  bool v12; // zf@3
  int v13; // r8@6
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  _DWORD *v16; // r1@14
  size_t v17; // r2@14
  signed int result; // r0@16
  int v19; // [sp+8h] [bp-28h]@1

  v5 = a1;
  v19 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 2u % dword_27F94C8;
  v9 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 2;
    if ( v11 == 2 )
      v12 = *(_DWORD *)(v10 + 4) == 2;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27F94C8 == v8 )
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
    v15[1] = 2;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F94C4,
           v8,
           2u,
           (int)v15);
  v16 = *(_DWORD **)(v9 + 8);
  v17 = *(*v6 - 3);
  if ( v17 == *(v16 - 3) && !memcmp(*v6, v16, v17) )
    result = AnvilContainerManagerController::_mayPickup(v5);
    if ( result == 1 )
      AnvilContainerManagerController::_onItemGrabbed(v5);
      result = j_j_j__ZN26ContainerManagerController13handleTakeAllER18ContainerItemStackRKSsi((int)v5, v19, v6, a5);
  else
    result = j_j_j__ZN26ContainerManagerController16handleTakeAmountER18ContainerItemStack12ItemTakeTypeRKSsi(
               (int)v5,
               v19,
               v7,
               v6,
               a5);
  return result;
}


void __fastcall AnvilContainerManagerController::_consumeMaterials(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController::_consumeMaterials(this);
}


signed int __fastcall AnvilContainerManagerController::handleTakeHalf(AnvilContainerManagerController *a1, int a2, int **a3, int a4)
{
  AnvilContainerManagerController *v4; // r10@1
  int v5; // r9@1
  int **v6; // r5@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  signed int result; // r0@16
  int v18; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v18 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 2u % dword_27F94C8;
  v8 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 2;
    if ( v10 == 2 )
      v11 = *(_DWORD *)(v9 + 4) == 2;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F94C8 == v7 )
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
    v14[1] = 2;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F94C4,
           v7,
           2u,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    result = AnvilContainerManagerController::_mayPickup(v4);
    if ( result == 1 )
      AnvilContainerManagerController::_onItemGrabbed(v4);
      result = j_j_j__ZN26ContainerManagerController13handleTakeAllER18ContainerItemStackRKSsi((int)v4, v5, v6, v18);
  else
    result = j_j_j__ZN26ContainerManagerController14handleTakeHalfER18ContainerItemStackRKSsi((int)v4, v5, v6, v18);
  return result;
}


signed int __fastcall AnvilContainerManagerController::_playerHasEnoughXP(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  ContainerManagerModel *v9; // r7@11
  int v10; // r6@13
  signed int v11; // r5@14
  int v12; // r0@15
  unsigned int *v13; // r1@18
  unsigned int v14; // r0@20
  unsigned int *v15; // r6@24
  unsigned int v16; // r0@26

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
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = (ContainerManagerModel *)*((_DWORD *)v1 + 16);
  if ( v8 )
    v9 = 0;
  v10 = ContainerManagerModel::getPlayerXP(v9);
  if ( ContainerManagerModel::isCreativeMode(v9) )
    v11 = 1;
  else
    v12 = *((_DWORD *)v1 + 18);
    v11 = 0;
    if ( v10 >= v12 )
      v11 = 1;
    v13 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v11;
}


void __fastcall AnvilContainerManagerController::~AnvilContainerManagerController(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  unsigned int *v7; // r2@11
  signed int v8; // r1@13

  v1 = this;
  *(_DWORD *)this = &off_26ECC20;
  v2 = *((_DWORD *)this + 20);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  if ( v4 )
    v5 = (unsigned int *)(v4 + 8);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  ContainerManagerController::~ContainerManagerController(v1);
  operator delete((void *)v1);
}


int __fastcall AnvilContainerManagerController::getHasInputItem(AnvilContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  int v8; // r0@11
  int v9; // r5@13
  int v10; // r5@16
  unsigned int *v11; // r1@21
  unsigned int v12; // r0@23
  unsigned int *v13; // r6@27
  unsigned int v14; // r0@29

  v1 = *((_DWORD *)this + 17);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = 0;
          if ( !v6 )
            v7 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v1 = 0;
LABEL_11:
  v8 = *((_DWORD *)this + 16);
  if ( v7 )
    v8 = 0;
  v9 = (*(int (**)(void))(*(_DWORD *)v8 + 32))();
  if ( *(_BYTE *)(v9 + 15) )
    if ( *(_DWORD *)v9 )
      if ( ItemInstance::isNull((ItemInstance *)v9) )
        v10 = 0;
        v10 = *(_BYTE *)(v9 + 14) != 0;
    else
      v10 = 0;
  else
    v10 = 0;
    v11 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v10;
}


void __fastcall AnvilContainerManagerController::~AnvilContainerManagerController(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController::~AnvilContainerManagerController(this);
}


void __fastcall AnvilContainerManagerController::getCostText(AnvilContainerManagerController *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *v4; // r0@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  char *v7; // r0@9
  void *v8; // r0@9
  void *v9; // r0@10
  char *v10; // r4@11
  int v11; // r6@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int *v14; // r0@21
  unsigned int *v15; // r2@26
  signed int v16; // r1@28
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  int v19; // [sp+8h] [bp-40h]@10
  int v20; // [sp+Ch] [bp-3Ch]@9
  char *v21; // [sp+10h] [bp-38h]@9
  char *v22; // [sp+14h] [bp-34h]@9
  char *v23; // [sp+18h] [bp-30h]@9
  int v24; // [sp+20h] [bp-28h]@3

  v2 = a2;
  v3 = (int *)this;
  if ( *(_DWORD *)(a2 + 72) < 1 )
  {
    *(_DWORD *)this = &unk_28898CC;
  }
  else if ( AnvilContainerManagerController::_isTooExpensive((AnvilContainerManagerController *)a2) == 1 )
    sub_21E94B4((void **)&v24, "container.repair.expensive");
    I18n::get(v3, (int **)&v24);
    v4 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v24 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
  else
    Util::toString<int,(void *)0,(void *)0>((void **)&v20, *(_DWORD *)(v2 + 72));
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v7 = (char *)operator new(4u);
    v21 = v7;
    v23 = v7 + 4;
    v22 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v20,
                    (int)&v21,
                    (int)v7);
    v8 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v19, "container.repair.cost");
    I18n::get(v3, &v19, (unsigned __int64 *)&v21);
    v9 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v11 = (int)v22;
    v10 = v21;
    if ( v21 != v22 )
      do
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 += 4;
      while ( v10 != (char *)v11 );
      v10 = v21;
    if ( v10 )
      operator delete(v10);
}


int __fastcall AnvilContainerManagerController::_setupCallbacks(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r10@1
  unsigned __int64 *v2; // r9@1
  int v3; // r0@1
  int v4; // r6@2
  int v5; // r5@2
  bool v6; // zf@3
  int v7; // r7@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int *v10; // r0@14
  int v11; // r6@14
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  signed int v16; // r1@20
  int v17; // r0@24
  int v18; // r5@24
  unsigned int *v19; // r2@27
  unsigned int v20; // r1@29
  _DWORD *v21; // r0@37
  __int64 v22; // r1@37
  int v23; // r11@39
  int v24; // r0@41
  int v25; // r5@42
  int v26; // r7@42
  bool v27; // zf@43
  int v28; // r6@46
  bool v29; // zf@49
  _DWORD *v30; // r0@53
  int *v31; // r0@54
  int v32; // r11@54
  unsigned int v33; // r1@55
  unsigned int *v34; // r0@55
  unsigned int v35; // r2@58
  unsigned int v36; // r3@59
  signed int v37; // r1@60
  int v38; // r0@64
  int v39; // r4@64
  unsigned int *v40; // r2@67
  unsigned int v41; // r1@69
  _DWORD *v42; // r0@75
  __int64 v43; // r1@75
  int v44; // r4@77
  int v45; // r0@77
  int v46; // r8@78
  int v47; // r6@78
  bool v48; // zf@79
  int v49; // r5@82
  bool v50; // zf@85
  _DWORD *v51; // r0@89
  int *v52; // r0@90
  int v53; // r7@90
  unsigned int v54; // r1@91
  unsigned int *v55; // r0@91
  unsigned int v56; // r2@94
  unsigned int v57; // r3@95
  signed int v58; // r1@96
  int v59; // r0@100
  int v60; // r4@100
  unsigned int *v61; // r2@103
  unsigned int v62; // r1@105
  _DWORD *v63; // r0@111
  __int64 v64; // r1@111
  int result; // r0@111
  unsigned int *v66; // r1@114
  unsigned int *v67; // r4@120
  unsigned int *v68; // r1@128
  unsigned int *v69; // r4@134
  unsigned int *v70; // r1@142
  unsigned int *v71; // r4@148
  int v72; // [sp+0h] [bp-70h]@31
  _DWORD *v73; // [sp+4h] [bp-6Ch]@111
  __int64 v74; // [sp+Ch] [bp-64h]@111
  int v75; // [sp+14h] [bp-5Ch]@90
  int v76; // [sp+18h] [bp-58h]@90
  _DWORD *v77; // [sp+1Ch] [bp-54h]@75
  __int64 v78; // [sp+24h] [bp-4Ch]@75
  int v79; // [sp+2Ch] [bp-44h]@54
  int v80; // [sp+30h] [bp-40h]@54
  _DWORD *v81; // [sp+34h] [bp-3Ch]@37
  __int64 v82; // [sp+3Ch] [bp-34h]@37
  int v83; // [sp+44h] [bp-2Ch]@14
  int v84; // [sp+48h] [bp-28h]@14

  v1 = this;
  v2 = (unsigned __int64 *)((char *)this + 20);
  v3 = *(_DWORD *)dword_27F94C4;
  if ( !*(_DWORD *)dword_27F94C4 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 0;
    if ( !v5 )
      v6 = *(_DWORD *)(v4 + 4) == 0;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( !(*(_DWORD *)(v7 + 12) % (unsigned int)dword_27F94C8) )
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
    v9[1] = 0;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F94C4,
           0,
           (int)v9);
  v10 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 v2,
                 (int **)(v3 + 8));
  ContainerController::getContainerModel((ContainerController *)&v83, *v10);
  v11 = v84;
  if ( v84 )
    v12 = *(_DWORD *)(v84 + 4);
    v13 = (unsigned int *)(v84 + 4);
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
    v17 = v84;
    v18 = v83;
    if ( v16 )
      v18 = 0;
    if ( v84 )
      v19 = (unsigned int *)(v84 + 8);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        v72 = v11;
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    else
      v72 = v11;
  else
    v18 = 0;
    v72 = 0;
  v21 = operator new(4u);
  LODWORD(v22) = sub_1677F7C;
  *v21 = v1;
  HIDWORD(v22) = sub_1677B70;
  v81 = v21;
  v82 = v22;
  ContainerModel::registerOnContainerChangedCallback(v18, (int)&v81);
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  v23 = 0;
  if ( dword_27F94C8 != 1 )
    v23 = 1;
  v24 = *(_DWORD *)(dword_27F94C4 + 4 * v23);
  if ( !v24 )
    goto LABEL_53;
  v25 = *(_DWORD *)v24;
  v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
    v27 = v26 == 1;
    if ( v26 == 1 )
      v27 = *(_DWORD *)(v25 + 4) == 1;
    if ( v27 )
    v28 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 )
      v26 = *(_DWORD *)(v28 + 12);
      v24 = v25;
      v25 = *(_DWORD *)v25;
      if ( *(_DWORD *)(v28 + 12) % (unsigned int)dword_27F94C8 == v23 )
  v29 = v24 == 0;
  if ( v24 )
    v24 = *(_DWORD *)v24;
    v29 = v24 == 0;
  if ( v29 )
LABEL_53:
    v30 = operator new(0x10u);
    *v30 = 0;
    v30[1] = 1;
    v30[2] = &unk_28898CC;
    v24 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F94C4,
            v23,
            1u,
            (int)v30);
  v31 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (int **)(v24 + 8));
  ContainerController::getContainerModel((ContainerController *)&v79, *v31);
  v32 = v80;
  if ( v80 )
    v33 = *(_DWORD *)(v80 + 4);
    v34 = (unsigned int *)(v80 + 4);
        if ( !v33 )
          v37 = 1;
          v32 = 0;
          goto LABEL_64;
        v35 = __ldrex(v34);
        if ( v35 == v33 )
        v33 = v35;
      v36 = __strex(v33 + 1, v34);
      v33 = v35;
    while ( v36 );
    v37 = 0;
    if ( !*v34 )
      v37 = 1;
LABEL_64:
    v38 = v80;
    v39 = v79;
    if ( v37 )
      v39 = 0;
    if ( v80 )
      v40 = (unsigned int *)(v80 + 8);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (**)(void))(*(_DWORD *)v38 + 12))();
    v39 = 0;
    v32 = 0;
  v42 = operator new(4u);
  LODWORD(v43) = sub_167830C;
  *v42 = v1;
  HIDWORD(v43) = sub_1677FB4;
  v77 = v42;
  v78 = v43;
  ContainerModel::registerOnContainerChangedCallback(v39, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v44 = 2u % dword_27F94C8;
  v45 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v45 )
    goto LABEL_89;
  v46 = *(_DWORD *)v45;
  v47 = *(_DWORD *)(*(_DWORD *)v45 + 12);
    v48 = v47 == 2;
    if ( v47 == 2 )
      v48 = *(_DWORD *)(v46 + 4) == 2;
    if ( v48 )
    v49 = *(_DWORD *)v46;
    if ( *(_DWORD *)v46 )
      v47 = *(_DWORD *)(v49 + 12);
      v45 = v46;
      v46 = *(_DWORD *)v46;
      if ( *(_DWORD *)(v49 + 12) % (unsigned int)dword_27F94C8 == v44 )
  v50 = v45 == 0;
  if ( v45 )
    v45 = *(_DWORD *)v45;
    v50 = v45 == 0;
  if ( v50 )
LABEL_89:
    v51 = operator new(0x10u);
    *v51 = 0;
    v51[1] = 2;
    v51[2] = &unk_28898CC;
    v45 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v44,
            2u,
            (int)v51);
  v52 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (int **)(v45 + 8));
  ContainerController::getContainerModel((ContainerController *)&v75, *v52);
  v53 = v76;
  if ( v76 )
    v54 = *(_DWORD *)(v76 + 4);
    v55 = (unsigned int *)(v76 + 4);
        if ( !v54 )
          v58 = 1;
          v53 = 0;
          goto LABEL_100;
        v56 = __ldrex(v55);
        if ( v56 == v54 )
        v54 = v56;
      v57 = __strex(v54 + 1, v55);
      v54 = v56;
    while ( v57 );
    v58 = 0;
    if ( !*v55 )
      v58 = 1;
LABEL_100:
    v59 = v76;
    v60 = v75;
    if ( v58 )
      v60 = 0;
    if ( v76 )
      v61 = (unsigned int *)(v76 + 8);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 == 1 )
        (*(void (**)(void))(*(_DWORD *)v59 + 12))();
    v60 = 0;
    v53 = 0;
  v63 = operator new(4u);
  LODWORD(v64) = sub_1678690;
  *v63 = v1;
  HIDWORD(v64) = sub_1678344;
  v73 = v63;
  v74 = v64;
  result = ContainerModel::registerPlayerNotificationCallback(v60, (int)&v73);
  if ( (_DWORD)v74 )
    result = ((int (*)(void))v74)();
  if ( v53 )
    v66 = (unsigned int *)(v53 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v66);
      while ( __strex(result - 1, v66) );
      result = (*v66)--;
    if ( result == 1 )
      v67 = (unsigned int *)(v53 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
          result = __ldrex(v67);
        while ( __strex(result - 1, v67) );
        result = (*v67)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
  if ( v32 )
    v68 = (unsigned int *)(v32 + 4);
        result = __ldrex(v68);
      while ( __strex(result - 1, v68) );
      result = (*v68)--;
      v69 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          result = __ldrex(v69);
        while ( __strex(result - 1, v69) );
        result = (*v69)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  if ( v72 )
    v70 = (unsigned int *)(v72 + 4);
        result = __ldrex(v70);
      while ( __strex(result - 1, v70) );
      result = (*v70)--;
      v71 = (unsigned int *)(v72 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
          result = __ldrex(v71);
        while ( __strex(result - 1, v71) );
        result = (*v71)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
  return result;
}


void __fastcall AnvilContainerManagerController::_createResult(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController::_createResult(this);
}


void __fastcall AnvilContainerManagerController::setResultName(int a1, int *a2)
{
  AnvilContainerManagerController::setResultName(a1, a2);
}


int __fastcall AnvilContainerManagerController::handleTakeAll(AnvilContainerManagerController *a1, int a2, const void **a3, int a4)
{
  AnvilContainerManagerController *v4; // r10@1
  int v5; // r9@1
  const void **v6; // r5@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  int result; // r0@16
  int v18; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v18 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 2u % dword_27F94C8;
  v8 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 2;
    if ( v10 == 2 )
      v11 = *(_DWORD *)(v9 + 4) == 2;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F94C8 == v7 )
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
    v14[1] = 2;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F94C4,
           v7,
           2u,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *((_DWORD *)*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    result = AnvilContainerManagerController::_mayPickup(v4);
    if ( result != 1 )
      return result;
    AnvilContainerManagerController::_onItemGrabbed(v4);
  return j_j_j__ZN26ContainerManagerController13handleTakeAllER18ContainerItemStackRKSsi((int)v4, v5, (int **)v6, v18);
}


int __fastcall AnvilContainerManagerController::_isTooExpensive(AnvilContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  signed int v7; // r1@7
  ContainerManagerModel *v8; // r0@12
  int v9; // r5@14
  unsigned int *v10; // r1@17
  unsigned int v11; // r0@19
  unsigned int *v12; // r6@23
  unsigned int v13; // r0@25

  v1 = *((_DWORD *)this + 17);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = 0;
          if ( !v6 )
            v7 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 1;
  v1 = 0;
LABEL_11:
  if ( *((_DWORD *)this + 18) < 40 )
    v9 = 0;
  else
    v8 = (ContainerManagerModel *)*((_DWORD *)this + 16);
    if ( v7 )
      v8 = 0;
    v9 = ContainerManagerModel::isCreativeMode(v8) ^ 1;
    v10 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v9;
}


int __fastcall AnvilContainerManagerController::shouldCrossOutIconBeVisible(AnvilContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r7@6
  signed int v6; // r2@7
  int v7; // r1@11
  int v8; // r8@16
  __int64 v9; // r6@20
  void *v10; // r0@21
  void *v11; // r0@23
  int v12; // r0@25
  unsigned int *v13; // r1@32
  unsigned int v14; // r0@34
  unsigned int *v15; // r5@38
  unsigned int v16; // r0@40
  ItemInstance *v18; // [sp+4h] [bp-24h]@13
  ItemInstance *v19; // [sp+8h] [bp-20h]@13

  v1 = *((_DWORD *)this + 17);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = 0;
          if ( !*v3 )
            v6 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v6 = 1;
  v1 = 0;
LABEL_11:
  v7 = *((_DWORD *)this + 16);
  if ( v6 )
    v7 = 0;
  (*(void (__fastcall **)(ItemInstance **))(*(_DWORD *)v7 + 24))(&v18);
  if ( v19 - v18 == 216 )
    if ( ItemInstance::isNull((ItemInstance *)((char *)v18 + 144)) == 1 )
      if ( ItemInstance::isNull(v18) == 1 )
        v8 = ItemInstance::isNull((ItemInstance *)((char *)v18 + 72)) ^ 1;
        v8 = 1;
    else
      v8 = 0;
  else
    v8 = 0;
  v9 = *(_QWORD *)&v18;
  if ( v18 != v19 )
    do
      v10 = *(void **)(v9 + 52);
      if ( v10 )
        operator delete(v10);
      v11 = *(void **)(v9 + 36);
      if ( v11 )
        operator delete(v11);
      v12 = *(_DWORD *)(v9 + 8);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
      *(_DWORD *)(v9 + 8) = 0;
      LODWORD(v9) = v9 + 72;
    while ( HIDWORD(v9) != (_DWORD)v9 );
    LODWORD(v9) = v18;
  if ( (_DWORD)v9 )
    operator delete((void *)v9);
    v13 = (unsigned int *)(v1 + 4);
    if ( &pthread_create )
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v1 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v8;
}


CraftingEventPacket *__fastcall AnvilContainerManagerController::_onItemGrabbed(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r5@1
  int v2; // r8@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  AnvilContainerManagerModel *v9; // r6@11
  const ItemInstance *v10; // r7@13
  CraftingEventPacket *result; // r0@13
  int v12; // r0@14
  int v13; // r1@14
  int v14; // r2@14
  int v15; // r4@14
  int v16; // r0@14
  unsigned int *v17; // r1@16
  unsigned int *v18; // r5@22
  void **v19; // [sp+0h] [bp-58h]@14
  int v20; // [sp+4h] [bp-54h]@14
  int v21; // [sp+8h] [bp-50h]@14
  char v22; // [sp+Ch] [bp-4Ch]@14
  char v23; // [sp+Dh] [bp-4Bh]@14
  int v24; // [sp+10h] [bp-48h]@14
  int v25; // [sp+18h] [bp-40h]@14
  int v26; // [sp+1Ch] [bp-3Ch]@14
  int v27; // [sp+20h] [bp-38h]@14
  int v28; // [sp+24h] [bp-34h]@14
  int v29; // [sp+28h] [bp-30h]@14
  int v30; // [sp+2Ch] [bp-2Ch]@14
  int v31; // [sp+30h] [bp-28h]@14
  int v32; // [sp+34h] [bp-24h]@14
  int v33; // [sp+38h] [bp-20h]@14
  int v34; // [sp+3Ch] [bp-1Ch]@14

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
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = (AnvilContainerManagerModel *)*((_DWORD *)v1 + 16);
  if ( v8 )
    v9 = 0;
  v10 = (const ItemInstance *)(*(int (__fastcall **)(AnvilContainerManagerModel *, signed int))(*(_DWORD *)v9 + 32))(
                                v9,
                                2);
  result = (CraftingEventPacket *)*((_BYTE *)v1 + 88);
  if ( *((_BYTE *)v1 + 88) )
    v12 = (*(int (**)(void))(**((_DWORD **)v1 + 21) + 36))();
    v20 = 2;
    v21 = 1;
    v22 = 0;
    v19 = &off_26E979C;
    v23 = -1;
    v24 = 1;
    v13 = *(_DWORD *)v12;
    v14 = *(_DWORD *)(v12 + 4);
    v15 = *(_DWORD *)(v12 + 8);
    v16 = *(_DWORD *)(v12 + 12);
    v25 = v13;
    v26 = v14;
    v27 = v15;
    v34 = 0;
    v32 = 0;
    v33 = 0;
    v30 = 0;
    v31 = 0;
    v28 = v16;
    v29 = 0;
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)&v32,
      (int)v10);
    AnvilContainerManagerModel::sendCraftedPacket(v9, (CraftingEventPacket *)&v19);
    AnvilContainerManagerModel::fireItemCraftedEvent(v9, v10);
    *((_BYTE *)v1 + 88) = 0;
    result = CraftingEventPacket::~CraftingEventPacket((CraftingEventPacket *)&v19);
    v17 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        result = (CraftingEventPacket *)__ldrex(v17);
      while ( __strex((unsigned int)result - 1, v17) );
    else
      result = (CraftingEventPacket *)(*v17)--;
    if ( result == (CraftingEventPacket *)1 )
      v18 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          result = (CraftingEventPacket *)__ldrex(v18);
        while ( __strex((unsigned int)result - 1, v18) );
        result = (CraftingEventPacket *)(*v18)--;
      if ( result == (CraftingEventPacket *)1 )
        result = (CraftingEventPacket *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall AnvilContainerManagerController::_onAnvilResultChanged(AnvilContainerManagerController *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  AnvilContainerManagerController *v4; // r10@1
  const ItemInstance *v5; // r8@1
  int v6; // r9@1
  unsigned int v7; // r1@2
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@5
  unsigned int v10; // r3@6
  unsigned int v11; // r1@7
  signed int v12; // r0@7
  ContainerManagerModel *v13; // r11@11
  int v14; // r0@13
  int v15; // r5@13
  int v16; // r0@13
  bool v17; // zf@13
  int result; // r0@17
  int v19; // r0@20
  int v20; // r5@20
  int v21; // r0@32
  int v22; // r7@33
  int v23; // r4@33
  bool v24; // zf@34
  int v25; // r6@37
  bool v26; // zf@40
  _DWORD *v27; // r0@44
  int *v28; // r0@45
  void *v29; // r0@51
  unsigned int *v30; // r1@59
  unsigned int *v31; // r4@65
  unsigned int *v32; // r2@73
  signed int v33; // r1@75
  int v34; // [sp+0h] [bp-160h]@45
  __int16 v35; // [sp+5h] [bp-15Bh]@20
  char v36; // [sp+7h] [bp-159h]@20
  int v37; // [sp+8h] [bp-158h]@20
  char v38; // [sp+Ch] [bp-154h]@20
  __int16 v39; // [sp+Dh] [bp-153h]@20
  char v40; // [sp+Fh] [bp-151h]@20
  int v41; // [sp+10h] [bp-150h]@20
  int v42; // [sp+14h] [bp-14Ch]@20
  int v43; // [sp+18h] [bp-148h]@20
  int v44; // [sp+20h] [bp-140h]@30
  void *v45; // [sp+3Ch] [bp-124h]@28
  void *v46; // [sp+4Ch] [bp-114h]@26
  int v47; // [sp+60h] [bp-100h]@20
  int v48; // [sp+68h] [bp-F8h]@24
  void *v49; // [sp+84h] [bp-DCh]@22
  void *ptr; // [sp+94h] [bp-CCh]@20
  char v51; // [sp+A8h] [bp-B8h]@20
  int v52; // [sp+B0h] [bp-B0h]@56
  void *v53; // [sp+CCh] [bp-94h]@54
  void *v54; // [sp+DCh] [bp-84h]@52
  char v55; // [sp+F0h] [bp-70h]@45
  int v56; // [sp+F8h] [bp-68h]@49
  void *v57; // [sp+114h] [bp-4Ch]@47
  void *v58; // [sp+124h] [bp-3Ch]@45

  v4 = this;
  v5 = a3;
  v6 = *((_DWORD *)this + 17);
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
          v11 = *v8;
          v12 = 0;
          if ( !v11 )
            v12 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v12 = 1;
  v6 = 0;
LABEL_11:
  v13 = (ContainerManagerModel *)*((_DWORD *)v4 + 16);
  if ( v12 )
    v13 = 0;
  v14 = (*(int (__fastcall **)(ContainerManagerModel *, signed int))(*(_DWORD *)v13 + 32))(v13, 2);
  v15 = v14;
  v16 = *(_BYTE *)(v14 + 15);
  v17 = v16 == 0;
  if ( v16 )
    v17 = *(_DWORD *)v15 == 0;
  if ( v17 || ItemInstance::isNull((ItemInstance *)v15) || (result = *(_BYTE *)(v15 + 14)) == 0 )
    if ( !ContainerManagerModel::isCreativeMode(v13) )
      ContainerManagerModel::debitPlayerXP(v13, *((_DWORD *)v4 + 18));
    AnvilContainerManagerController::_consumeMaterials(v4);
    AnvilContainerManagerModel::applyDamageToAnvilBlock(v13);
    v19 = (*(int (__fastcall **)(ContainerManagerModel *, _DWORD))(*(_DWORD *)v13 + 32))(v13, 0);
    ItemInstance::ItemInstance((ItemInstance *)&v51, v19);
    v20 = ContainerManagerModel::getPlayer(v13);
    v37 = 99999;
    v38 = -10;
    v40 = v36;
    v39 = v35;
    v41 = 0;
    v42 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v43, (int)&ItemInstance::EMPTY_ITEM);
    ItemInstance::ItemInstance((ItemInstance *)&v47, (int)&v51);
    InventoryTransactionManager::addAction(v20 + 5152, (int)&v37);
    if ( ptr )
      operator delete(ptr);
    if ( v49 )
      operator delete(v49);
    if ( v48 )
      (*(void (**)(void))(*(_DWORD *)v48 + 4))();
    v48 = 0;
    if ( v46 )
      operator delete(v46);
    if ( v45 )
      operator delete(v45);
    if ( v44 )
      (*(void (**)(void))(*(_DWORD *)v44 + 4))();
    v44 = 0;
    v21 = *(_DWORD *)dword_27F94C4;
    if ( !*(_DWORD *)dword_27F94C4 )
      goto LABEL_44;
    v22 = *(_DWORD *)v21;
    v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    while ( 1 )
      v24 = v23 == 0;
      if ( !v23 )
        v24 = *(_DWORD *)(v22 + 4) == 0;
      if ( v24 )
        break;
      v25 = *(_DWORD *)v22;
      if ( *(_DWORD *)v22 )
        v23 = *(_DWORD *)(v25 + 12);
        v21 = v22;
        v22 = *(_DWORD *)v22;
        if ( !(*(_DWORD *)(v25 + 12) % (unsigned int)dword_27F94C8) )
          continue;
    v26 = v21 == 0;
    if ( v21 )
      v21 = *(_DWORD *)v21;
      v26 = v21 == 0;
    if ( v26 )
LABEL_44:
      v27 = operator new(0x10u);
      *v27 = 0;
      v27[1] = 0;
      v27[2] = &unk_28898CC;
      v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27F94C4,
              0,
              (int)v27);
    sub_21E8AF4(&v34, (int *)(v21 + 8));
    v28 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   (unsigned __int64 *)((char *)v4 + 20),
                   (int **)&v34);
    ContainerController::removeItem((ContainerController *)&v55, *v28, 0, 0);
    if ( v58 )
      operator delete(v58);
    if ( v57 )
      operator delete(v57);
    if ( v56 )
      (*(void (**)(void))(*(_DWORD *)v56 + 4))();
    v29 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    sub_21E8190((void **)v4 + 20, (char *)&unk_257BC67, 0);
    AnvilContainerManagerModel::fireItemAcquiredEvent(v13, v5, *((_BYTE *)v5 + 14));
    if ( v54 )
      operator delete(v54);
    if ( v53 )
      operator delete(v53);
    result = v52;
    if ( v52 )
      result = (*(int (**)(void))(*(_DWORD *)v52 + 4))();
    v30 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v30);
      while ( __strex(result - 1, v30) );
    else
      result = (*v30)--;
    if ( result == 1 )
      v31 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          result = __ldrex(v31);
        while ( __strex(result - 1, v31) );
        result = (*v31)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


signed int __fastcall AnvilContainerManagerController::handlePlaceOne(int a1, ContainerItemStack *a2, int **a3, int a4)
{
  int v4; // r10@1
  ContainerItemStack *v5; // r9@1
  int **v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  signed int result; // r0@16
  int v18; // r4@17
  int v19; // [sp+4h] [bp-BCh]@1
  char v20; // [sp+8h] [bp-B8h]@17
  int v21; // [sp+10h] [bp-B0h]@27
  void *v22; // [sp+2Ch] [bp-94h]@25
  void *v23; // [sp+3Ch] [bp-84h]@23
  char v24; // [sp+50h] [bp-70h]@17
  int v25; // [sp+58h] [bp-68h]@21
  void *v26; // [sp+74h] [bp-4Ch]@19
  void *ptr; // [sp+84h] [bp-3Ch]@17

  v4 = a1;
  v19 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 2u % dword_27F94C8;
  v8 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 2;
    if ( v10 == 2 )
      v11 = *(_DWORD *)(v9 + 4) == 2;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F94C8 == v7 )
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
    v14[1] = 2;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F94C4,
           v7,
           2u,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    v18 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                       (unsigned __int64 *)(v4 + 20),
                       v6);
    ItemInstance::ItemInstance((ItemInstance *)&v20, (int)v5);
    ContainerController::addToStack((ItemInstance *)&v24, v18, v19, (int)&v20, 0);
    if ( ptr )
      operator delete(ptr);
    if ( v26 )
      operator delete(v26);
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    v25 = 0;
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      operator delete(v22);
    if ( v21 )
      (*(void (**)(void))(*(_DWORD *)v21 + 4))();
    result = 0;
  else
    result = j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi(v4, v5, v6, v19);
  return result;
}


int __fastcall AnvilContainerManagerController::_clearSlot(int a1, int **a2)
{
  int *v2; // r0@1
  int result; // r0@5
  int v4; // [sp+0h] [bp-50h]@1
  int v5; // [sp+8h] [bp-48h]@5
  void *v6; // [sp+24h] [bp-2Ch]@3
  void *ptr; // [sp+34h] [bp-1Ch]@1

  v2 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)(a1 + 20),
                a2);
  ContainerController::removeItem((ContainerController *)&v4, *v2, 0, 0);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


unsigned int __fastcall AnvilContainerManagerController::AnvilContainerManagerController(unsigned int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
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
  int v25; // [sp+0h] [bp-20h]@19
  int v26; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v26 = v4;
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
  v25 = v13;
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
  ContainerManagerController::ContainerManagerController(COERCE_DOUBLE(__PAIR__(&v25, v3)));
  v18 = v26;
  if ( v26 )
    v19 = (unsigned int *)(v26 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 12))(v18);
  *(_DWORD *)v3 = &off_26ECC20;
  *(_DWORD *)(v3 + 64) = *(_DWORD *)v2;
  v21 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 68) = v21;
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 80) = &unk_28898CC;
  AnvilContainerManagerController::_setupCallbacks((AnvilContainerManagerController *)v3);
  return v3;
}


signed int __fastcall AnvilContainerManagerController::handleAutoPlace(AnvilContainerManagerController *a1, signed int a2, int **a3, int a4, unsigned __int64 *a5, int a6)
{
  AnvilContainerManagerController *v6; // r10@1
  signed int v7; // r9@1
  int **v8; // r5@1
  int v9; // r4@1
  int v10; // r0@1
  int v11; // r8@2
  int v12; // r7@2
  bool v13; // zf@3
  int v14; // r11@6
  bool v15; // zf@9
  _DWORD *v16; // r0@13
  _DWORD *v17; // r1@14
  size_t v18; // r2@14
  signed int result; // r0@16
  int v20; // [sp+0h] [bp-28h]@1

  v6 = a1;
  v20 = a4;
  v7 = a2;
  v8 = a3;
  v9 = 2u % dword_27F94C8;
  v10 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v10 )
    goto LABEL_13;
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
      if ( *(_DWORD *)(v14 + 12) % (unsigned int)dword_27F94C8 == v9 )
        continue;
    }
  }
  v15 = v10 == 0;
  if ( v10 )
    v10 = *(_DWORD *)v10;
    v15 = v10 == 0;
  if ( v15 )
LABEL_13:
    v16 = operator new(0x10u);
    *v16 = 0;
    v16[1] = 2;
    v16[2] = &unk_28898CC;
    v10 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F94C4,
            v9,
            2u,
            (int)v16);
  v17 = *(_DWORD **)(v10 + 8);
  v18 = *(*v8 - 3);
  if ( v18 != *(v17 - 3)
    || memcmp(*v8, v17, v18)
    || (result = AnvilContainerManagerController::_mayPickup(v6), result == 1) )
    result = j_j_j__ZN26ContainerManagerController15handleAutoPlaceEiRKSsiRKSt6vectorI13AutoPlaceItemSaIS3_EERS2_I15AutoPlaceResultSaIS8_EE(
               (int)v6,
               v7,
               v8,
               v20,
               a5,
               a6);
  return result;
}


signed int __fastcall AnvilContainerManagerController::handlePlaceAll(int a1, int a2, int **a3, int a4)
{
  int v4; // r10@1
  int v5; // r9@1
  int **v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _DWORD *v15; // r1@14
  size_t v16; // r2@14
  signed int result; // r0@16
  int v18; // r4@17
  int v19; // [sp+4h] [bp-BCh]@1
  char v20; // [sp+8h] [bp-B8h]@17
  int v21; // [sp+10h] [bp-B0h]@27
  void *v22; // [sp+2Ch] [bp-94h]@25
  void *v23; // [sp+3Ch] [bp-84h]@23
  char v24; // [sp+50h] [bp-70h]@17
  int v25; // [sp+58h] [bp-68h]@21
  void *v26; // [sp+74h] [bp-4Ch]@19
  void *ptr; // [sp+84h] [bp-3Ch]@17

  v4 = a1;
  v19 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 2u % dword_27F94C8;
  v8 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 2;
    if ( v10 == 2 )
      v11 = *(_DWORD *)(v9 + 4) == 2;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F94C8 == v7 )
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
    v14[1] = 2;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F94C4,
           v7,
           2u,
           (int)v14);
  v15 = *(_DWORD **)(v8 + 8);
  v16 = *(*v6 - 3);
  if ( v16 == *(v15 - 3) && !memcmp(*v6, v15, v16) )
    v18 = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                       (unsigned __int64 *)(v4 + 20),
                       v6);
    ItemInstance::ItemInstance((ItemInstance *)&v20, v5);
    ContainerController::addToStack((ItemInstance *)&v24, v18, v19, (int)&v20, 0);
    if ( ptr )
      operator delete(ptr);
    if ( v26 )
      operator delete(v26);
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    v25 = 0;
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      operator delete(v22);
    if ( v21 )
      (*(void (**)(void))(*(_DWORD *)v21 + 4))();
    result = 0;
  else
    result = j_j_j__ZN26ContainerManagerController14handlePlaceAllER18ContainerItemStackRKSsi(v4, v5, v6, v19);
  return result;
}


int __fastcall AnvilContainerManagerController::shouldDrawGreen(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( AnvilContainerManagerController::_mayPickup(this) == 1 )
    result = AnvilContainerManagerController::_isTooExpensive(v1) ^ 1;
  else
    result = 0;
  return result;
}


signed int __fastcall AnvilContainerManagerController::handleTakeAmount(AnvilContainerManagerController *a1, int a2, int a3, int **a4, int a5)
{
  AnvilContainerManagerController *v5; // r11@1
  int **v6; // r4@1
  int v7; // r10@1
  int v8; // r5@1
  int v9; // r0@1
  int v10; // r9@2
  int v11; // r6@2
  bool v12; // zf@3
  int v13; // r8@6
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  _DWORD *v16; // r1@14
  size_t v17; // r2@14
  signed int result; // r0@16
  int v19; // [sp+8h] [bp-28h]@1

  v5 = a1;
  v19 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 2u % dword_27F94C8;
  v9 = *(_DWORD *)(dword_27F94C4 + 4 * (2u % dword_27F94C8));
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 2;
    if ( v11 == 2 )
      v12 = *(_DWORD *)(v10 + 4) == 2;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27F94C8 == v8 )
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
    v15[1] = 2;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F94C4,
           v8,
           2u,
           (int)v15);
  v16 = *(_DWORD **)(v9 + 8);
  v17 = *(*v6 - 3);
  if ( v17 == *(v16 - 3) && !memcmp(*v6, v16, v17) )
    result = AnvilContainerManagerController::_mayPickup(v5);
    if ( result == 1 )
      AnvilContainerManagerController::_onItemGrabbed(v5);
      result = j_j_j__ZN26ContainerManagerController13handleTakeAllER18ContainerItemStackRKSsi((int)v5, v19, v6, a5);
  else
    result = j_j_j__ZN26ContainerManagerController16handleTakeAmountER18ContainerItemStackiRKSsi(
               (int)v5,
               v19,
               v7,
               v6,
               a5);
  return result;
}


void __fastcall AnvilContainerManagerController::setResultName(int a1, int *a2)
{
  AnvilContainerManagerController *v2; // r4@1

  v2 = (AnvilContainerManagerController *)a1;
  EntityInteraction::setInteractText((int *)(a1 + 80), a2);
  j_j_j__ZN31AnvilContainerManagerController13_createResultEv(v2);
}


void __fastcall AnvilContainerManagerController::getCostText(AnvilContainerManagerController *this, int a2)
{
  AnvilContainerManagerController::getCostText(this, a2);
}


void __fastcall AnvilContainerManagerController::_createResult(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r11@1
  int v2; // r10@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  ContainerManagerModel *v9; // r1@11
  signed int v11; // r7@19
  char v12; // r3@19
  char v13; // r0@19
  int v14; // r4@23
  int v15; // r0@23
  int v16; // r2@26
  __int64 v17; // r0@27
  Recipes *v18; // r0@27
  int v19; // r1@28
  bool v20; // zf@30
  int v21; // r5@34
  bool v22; // zf@37
  int v23; // r4@44
  int v24; // kr00_4@44
  __int16 v25; // r0@49
  int v26; // kr04_4@49
  signed int v27; // r5@54
  Recipes *v28; // r0@63
  int v29; // r5@63 OVERLAPPED
  int v30; // r6@63 OVERLAPPED
  int v31; // r0@66
  int v32; // r0@68
  int v33; // r0@70
  int v34; // r4@72
  int (__fastcall *v35)(int, int *, int); // r10@72
  Entity *v36; // r0@72
  int v37; // r0@72
  int v38; // r0@74
  signed int v39; // r9@78
  signed int v40; // r4@86
  int *v41; // r4@87
  int v42; // r0@87
  int v43; // r0@92
  int v44; // r0@94
  int v45; // r9@97
  int v46; // r6@97
  int v47; // r4@97
  int v48; // r5@97
  int v49; // r8@97
  int v50; // r0@97
  int v57; // r4@97
  const void **v58; // r7@104
  char *v59; // r8@106
  char *v60; // r4@106
  size_t v61; // r2@106
  signed int v62; // r6@107
  signed int v63; // r4@108
  char v64; // r6@114
  signed int v65; // r0@114
  int v66; // r5@120
  int v67; // r4@126
  signed int v68; // r1@129
  __int64 v69; // r4@152
  void *v70; // r0@153
  void *v71; // r0@155
  int v72; // r0@157
  unsigned int *v73; // r1@164
  unsigned int v74; // r0@166
  unsigned int *v75; // r4@170
  unsigned int v76; // r0@172
  unsigned int *v77; // r1@178
  signed int v78; // r0@180
  bool v79; // [sp+0h] [bp-270h]@0
  int v80; // [sp+0h] [bp-270h]@64
  int v81; // [sp+4h] [bp-26Ch]@27
  ContainerManagerModel *v82; // [sp+8h] [bp-268h]@13
  void *s2; // [sp+Ch] [bp-264h]@106
  char v84; // [sp+10h] [bp-260h]@89
  int v85; // [sp+18h] [bp-258h]@190
  void *v86; // [sp+34h] [bp-23Ch]@188
  void *v87; // [sp+44h] [bp-22Ch]@186
  void **v88; // [sp+58h] [bp-218h]@89
  int v89; // [sp+5Ch] [bp-214h]@89
  int v90; // [sp+60h] [bp-210h]@89
  char v91; // [sp+64h] [bp-20Ch]@89
  int v92; // [sp+70h] [bp-200h]@89
  int v93; // [sp+8Ch] [bp-1E4h]@185
  ItemInstance *v94; // [sp+90h] [bp-1E0h]@89
  ItemInstance *v95; // [sp+94h] [bp-1DCh]@89
  char v96; // [sp+98h] [bp-1D8h]@56
  int v97; // [sp+A0h] [bp-1D0h]@60
  void *v98; // [sp+BCh] [bp-1B4h]@58
  void *ptr; // [sp+CCh] [bp-1A4h]@56
  int v100; // [sp+E0h] [bp-190h]@27
  int v101; // [sp+160h] [bp-110h]@13
  int v102; // [sp+168h] [bp-108h]@138
  char v103; // [sp+16Eh] [bp-102h]@41
  char v104; // [sp+16Fh] [bp-101h]@37
  void *v105; // [sp+184h] [bp-ECh]@136
  void *v106; // [sp+194h] [bp-DCh]@134
  int v107; // [sp+1A8h] [bp-C8h]@13
  int v108; // [sp+1B0h] [bp-C0h]@144
  Recipes *v109; // [sp+1B6h] [bp-BAh]@30
  void *v110; // [sp+1CCh] [bp-A4h]@142
  void *v111; // [sp+1DCh] [bp-94h]@140
  int v112; // [sp+1F0h] [bp-80h]@13
  int v113; // [sp+1F8h] [bp-78h]@150
  char v114; // [sp+1FEh] [bp-72h]@17
  char v115; // [sp+1FFh] [bp-71h]@13
  void *v116; // [sp+214h] [bp-5Ch]@148
  void *v117; // [sp+224h] [bp-4Ch]@146
  int v118; // [sp+23Ch] [bp-34h]@13
  int v119; // [sp+240h] [bp-30h]@152

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
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = (ContainerManagerModel *)*((_DWORD *)v1 + 16);
  if ( v8 )
    v9 = 0;
  v82 = v9;
  (*(void (__fastcall **)(int *))(*(_DWORD *)v9 + 24))(&v118);
  ItemInstance::ItemInstance((ItemInstance *)&v112, v118);
  ItemInstance::ItemInstance((ItemInstance *)&v107, v118 + 72);
  ItemInstance::ItemInstance((ItemInstance *)&v101, v118 + 144);
  *((_DWORD *)v1 + 19) = 0;
  _ZF = v115 == 0;
  if ( v115 )
    _ZF = v112 == 0;
  if ( _ZF || ItemInstance::isNull((ItemInstance *)&v112) || !v114 )
    *((_DWORD *)v1 + 18) = 0;
    ItemInstance::setNull((ItemInstance *)&v101);
    sub_21E7EE0((const void **)v1 + 20, 0, *(_BYTE **)(*((_DWORD *)v1 + 20) - 12), 0);
  ItemInstance::operator=((int)&v101, (int)&v112);
  v11 = ItemInstance::isEnchantingBook((ItemInstance *)&v107);
  v12 = 0;
  v13 = 0;
  if ( v112 == Item::mEmptyMap )
    v13 = 1;
  if ( v112 == Item::mFilledMap )
    v12 = 1;
  *((_BYTE *)v1 + 88) = v13 | v12;
  *((_DWORD *)v1 + 18) = 1;
  v14 = ItemInstance::getBaseRepairCost((ItemInstance *)&v112);
  _ZF = ItemInstance::isNull((ItemInstance *)&v107) == 0;
  v15 = 0;
  if ( _ZF )
    v15 = ItemInstance::getBaseRepairCost((ItemInstance *)&v107);
  v16 = v15 + v14;
  if ( !*((_BYTE *)v1 + 88) )
    v20 = BYTE1(v109) == 0;
    if ( BYTE1(v109) )
      v20 = v107 == 0;
    if ( v20 )
      v81 = v15 + v14;
      v21 = 0;
    else
      if ( ItemInstance::isNull((ItemInstance *)&v107) || !(_BYTE)v109 )
        v21 = 0;
        v22 = v104 == 0;
        if ( v104 )
          v22 = v101 == 0;
        if ( v22
          || ItemInstance::isNull((ItemInstance *)&v101)
          || !v103
          || ItemInstance::isDamageableItem((ItemInstance *)&v101) != 1
          || (*(int (**)(void))(*(_DWORD *)v101 + 128))() != 1 )
          if ( !v11 && (v101 != v107 || !ItemInstance::isDamageableItem((ItemInstance *)&v101)) )
          {
            ItemInstance::setNull((ItemInstance *)&v101);
            *((_DWORD *)v1 + 18) = 0;
            (*(void (**)(void))(*(_DWORD *)v82 + 28))();
            goto LABEL_134;
          }
          if ( ItemInstance::isDamageableItem((ItemInstance *)&v101) ^ 1 | v11 )
            v40 = 0;
          else
            v45 = ItemInstance::getMaxDamage((ItemInstance *)&v112);
            v46 = ItemInstance::getDamageValue((ItemInstance *)&v112);
            v47 = ItemInstance::getMaxDamage((ItemInstance *)&v107);
            v48 = ItemInstance::getDamageValue((ItemInstance *)&v107);
            v49 = ItemInstance::getMaxDamage((ItemInstance *)&v101);
            v50 = ItemInstance::getMaxDamage((ItemInstance *)&v101);
            _R2 = -1374389535;
            _R1 = 12 * v49;
            __asm { SMMUL.W         R1, R1, R2 }
            v57 = ((signed int)_R1 >> 5) + (_R1 >> 31) + v46 - v45 - v47 + v48 + v50;
            if ( v57 < 0 )
              v57 = 0;
            if ( v57 >= ItemInstance::getAuxValue((ItemInstance *)&v101) )
            {
              v40 = 0;
            }
            else
              ItemInstance::setAuxValue((ItemInstance *)&v101, (signed __int16)v57);
              v40 = 2;
          *((_DWORD *)v1 + 19) = (unsigned __int8)v109;
          v21 = EnchantUtils::combineEnchantedItems(
                  (EnchantUtils *)&v112,
                  (const ItemInstance *)&v107,
                  (const ItemInstance *)&v101,
                  (ItemInstance *)v11,
                  v79)
              + v40;
        else
          v23 = ItemInstance::getDamageValue((ItemInstance *)&v101);
          v24 = ItemInstance::getMaxDamage((ItemInstance *)&v101);
          if ( v23 >= v24 / 4 )
            v23 = v24 / 4;
          if ( v23 <= 0 )
          v21 = 0;
          do
            if ( v21 >= (unsigned __int8)v109 )
              break;
            v25 = ItemInstance::getDamageValue((ItemInstance *)&v101);
            ItemInstance::setAuxValue((ItemInstance *)&v101, (signed __int16)(v25 - v23));
            v23 = ItemInstance::getDamageValue((ItemInstance *)&v101);
            ++v21;
            v26 = ItemInstance::getMaxDamage((ItemInstance *)&v101);
            if ( v23 >= v26 / 4 )
              v23 = v26 / 4;
          while ( v23 > 0 );
          *((_DWORD *)v1 + 19) = v21;
    v39 = 0;
    goto LABEL_104;
  LODWORD(v17) = &v100;
  v81 = v16;
  HIDWORD(v17) = *((_BYTE *)v1 + 88);
  CraftingContainer::CraftingContainer(v17, 3);
  CraftingContainer::setItem((CraftingContainer *)&v100, 4, (const ItemInstance *)&v112);
  v18 = (Recipes *)ItemInstance::isNull((ItemInstance *)&v107);
  if ( !v18 )
    v19 = v107;
    if ( v107 == Item::mPaper )
      v18 = (Recipes *)(unsigned __int8)v109;
      if ( (_BYTE)v109 )
        v27 = 0;
        while ( 1 )
          ItemInstance::ItemInstance((ItemInstance *)&v96, v19, 1);
          (*(void (__fastcall **)(int *, char *))(v100 + 28))(&v100, &v96);
          if ( ptr )
            operator delete(ptr);
          if ( v98 )
            operator delete(v98);
          if ( v97 )
            (*(void (**)(void))(*(_DWORD *)v97 + 4))();
          ++v27;
          v18 = (Recipes *)(unsigned __int8)v109;
          if ( v27 >= (unsigned __int8)v109 )
            break;
          v19 = Item::mPaper;
      v18 = (Recipes *)(*(int (__fastcall **)(int *, int *))(v100 + 28))(&v100, &v107);
  v28 = Recipes::getInstance(v18);
  *(_QWORD *)&v29 = *(_QWORD *)Recipes::getRecipes(v28);
  if ( v29 == v30 )
    goto LABEL_80;
  v80 = v2;
  while ( 1 )
    if ( (*(int (**)(void))(**(_DWORD **)v29 + 44))() == 1 )
      v31 = (*(int (**)(void))(**(_DWORD **)v29 + 36))();
      if ( *(_QWORD *)v31 == *(_QWORD *)&MapExtendingRecipe::ID && *(_QWORD *)(v31 + 8) == qword_28054F8 )
        break;
      v32 = (*(int (**)(void))(**(_DWORD **)v29 + 36))();
      if ( *(_QWORD *)v32 == *(_QWORD *)&MapCloningRecipe::ID && *(_QWORD *)(v32 + 8) == qword_28053E8 )
      v33 = (*(int (**)(void))(**(_DWORD **)v29 + 36))();
      if ( *(_QWORD *)v33 == *(_QWORD *)&MapUpgradingRecipe::ID && *(_QWORD *)(v33 + 8) == qword_2805608 )
LABEL_77:
    v29 += 4;
    if ( v30 == v29 )
      v2 = v80;
      v39 = 0;
      goto LABEL_80;
  v34 = *(_DWORD *)v29;
  v35 = *(int (__fastcall **)(int, int *, int))(**(_DWORD **)v29 + 28);
  v36 = (Entity *)ContainerManagerModel::getPlayer(v82);
  v37 = Entity::getLevel(v36);
  if ( v35(v34, &v100, v37) != 1 )
    if ( ItemInstance::isNull((ItemInstance *)&v107) == 1 )
      v38 = (*(int (**)(void))(**(_DWORD **)v29 + 36))();
      if ( *(_QWORD *)v38 == *(_QWORD *)&MapCloningRecipe::ID && *(_QWORD *)(v38 + 8) == qword_28053E8 )
        *((_DWORD *)v1 + 21) = *(_DWORD *)v29;
    goto LABEL_77;
  v2 = v80;
  v41 = (int *)(*(int (**)(void))(**(_DWORD **)v29 + 8))();
  ItemInstance::operator=((int)&v101, *v41);
  *((_DWORD *)v1 + 21) = *(_DWORD *)v29;
  v42 = (*(int (**)(void))(**(_DWORD **)v29 + 36))();
  if ( *(_QWORD *)&MapExtendingRecipe::ID != *(_QWORD *)v42 || *(_QWORD *)(v42 + 8) != qword_28054F8 )
    v43 = (*(int (**)(void))(**(_DWORD **)v29 + 36))();
    if ( *(_QWORD *)&MapCloningRecipe::ID != *(_QWORD *)v43 || *(_QWORD *)(v43 + 8) != qword_28053E8 )
      v44 = (*(int (**)(void))(**(_DWORD **)v29 + 36))();
      if ( *(_QWORD *)&MapUpgradingRecipe::ID != *(_QWORD *)v44 || *(_QWORD *)(v44 + 8) != qword_2805608 )
        goto LABEL_193;
    v39 = 1;
    *((_DWORD *)v1 + 19) = 1;
  else
    *((_DWORD *)v1 + 19) = 8;
    v89 = 2;
    v90 = 1;
    v91 = 0;
    v88 = &off_26E979C;
    _aeabi_memclr8(&v92, 40);
    ItemInstance::clone((ItemInstance *)&v84, *v41);
    if ( v94 == v95 )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
        (unsigned __int64 *)&v93,
        (int)&v84);
      ItemInstance::ItemInstance(v94, (int)&v84);
      v94 = (ItemInstance *)((char *)v94 + 72);
    if ( v87 )
      operator delete(v87);
    if ( v86 )
      operator delete(v86);
    if ( v85 )
      (*(void (**)(void))(*(_DWORD *)v85 + 4))();
    v85 = 0;
    AnvilContainerManagerModel::sendCraftedPacket(v82, (CraftingEventPacket *)&v88);
    AnvilContainerManagerModel::fireItemCraftedEvent(v82, (const ItemInstance *)&v101);
    CraftingEventPacket::~CraftingEventPacket((CraftingEventPacket *)&v88);
LABEL_193:
  v81 = 0;
LABEL_80:
  CraftingContainer::~CraftingContainer((CraftingContainer *)&v100);
  v21 = 0;
LABEL_104:
  v58 = (const void **)((char *)v1 + 80);
  if ( *(_DWORD *)(*((_DWORD *)v1 + 20) - 12) )
    if ( ItemInstance::isNull((ItemInstance *)&v112) )
      goto LABEL_198;
    ItemInstance::getName((ItemInstance *)&s2, (int)&v112);
    v59 = (char *)s2;
    v60 = (char *)s2 - 12;
    v61 = *((_DWORD *)*v58 - 3);
    if ( v61 == *((_DWORD *)s2 - 3) )
      v62 = memcmp(*v58, s2, v61) != 0;
      v62 = 1;
    if ( (int *)v60 != &dword_28898C0 )
      v77 = (unsigned int *)(v59 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 <= 0 )
        j_j_j_j__ZdlPv_9(v60);
    if ( v62 != 1 )
LABEL_198:
      v63 = 0;
      ItemInstance::setCustomName((int)&v101, (int *)v1 + 20);
      ++v21;
      v63 = 1;
    v63 = ItemInstance::hasCustomHoverName((ItemInstance *)&v112);
    ItemInstance::resetHoverName((ItemInstance *)&v101);
    v21 += v63;
  v64 = 0;
  *((_DWORD *)v1 + 18) = v81 + v21;
  v65 = 0;
  if ( v21 > 0 )
    v65 = 1;
  if ( !(v65 | v39) )
  if ( v63 == v21 )
    v64 = 1;
  v66 = (v63 != 0) & (unsigned __int8)v64;
  if ( (v63 != 0) & (unsigned __int8)v64 && *((_DWORD *)v1 + 18) >= 40 )
    *((_DWORD *)v1 + 18) = 39;
  if ( AnvilContainerManagerController::_isTooExpensive(v1) == 1 )
  if ( !ItemInstance::isNull((ItemInstance *)&v101) )
    v67 = ItemInstance::getBaseRepairCost((ItemInstance *)&v101);
    if ( !ItemInstance::isNull((ItemInstance *)&v107) && v67 < ItemInstance::getBaseRepairCost((ItemInstance *)&v107) )
      v67 = ItemInstance::getBaseRepairCost((ItemInstance *)&v107);
    v68 = 0;
    if ( !*((_BYTE *)v1 + 88) )
      v68 = 1;
    if ( v66 | v68 )
      ItemInstance::setRepairCost((ItemInstance *)&v101, 2 * v67 | 1);
  (*(void (**)(void))(*(_DWORD *)v82 + 28))();
LABEL_134:
  if ( v106 )
    operator delete(v106);
  if ( v105 )
    operator delete(v105);
  if ( v102 )
    (*(void (**)(void))(*(_DWORD *)v102 + 4))();
  if ( v111 )
    operator delete(v111);
  if ( v110 )
    operator delete(v110);
  if ( v108 )
    (*(void (**)(void))(*(_DWORD *)v108 + 4))();
  if ( v117 )
    operator delete(v117);
  if ( v116 )
    operator delete(v116);
  if ( v113 )
    (*(void (**)(void))(*(_DWORD *)v113 + 4))();
  v69 = *(_QWORD *)&v118;
  if ( v118 != v119 )
    do
      v70 = *(void **)(v69 + 52);
      if ( v70 )
        operator delete(v70);
      v71 = *(void **)(v69 + 36);
      if ( v71 )
        operator delete(v71);
      v72 = *(_DWORD *)(v69 + 8);
      if ( v72 )
        (*(void (**)(void))(*(_DWORD *)v72 + 4))();
      *(_DWORD *)(v69 + 8) = 0;
      LODWORD(v69) = v69 + 72;
    while ( HIDWORD(v69) != (_DWORD)v69 );
    LODWORD(v69) = v118;
  if ( (_DWORD)v69 )
    operator delete((void *)v69);
    v73 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 == 1 )
      v75 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v76 = (*v75)--;
      if ( v76 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


  if ( AnvilContainerManagerController::getHasInputItem(*(AnvilContainerManagerController **)(v1 + 628)) == 1 )
{
  else
    result = 0;
  return result;
}


signed int __fastcall AnvilContainerManagerController::isAnvilValid(AnvilContainerManagerController *this, float a2)
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
            this = (AnvilContainerManagerController *)*((_DWORD *)this + 16);
            v8 = this == 0;
          }
          if ( !v8 )
            v7 = AnvilContainerManagerModel::isAnvilValid(this, a2);
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


signed int __fastcall AnvilContainerManagerController::_mayPickup(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  int v8; // r0@11
  int v9; // r6@13
  signed int v10; // r5@17
  int v11; // r0@25
  unsigned int *v12; // r1@28
  unsigned int v13; // r0@30
  unsigned int *v14; // r6@34
  unsigned int v15; // r0@36

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
  v8 = *((_DWORD *)v1 + 16);
  if ( v7 )
    v8 = 0;
  v9 = (*(int (**)(void))(*(_DWORD *)v8 + 32))();
  if ( AnvilContainerManagerController::_playerHasEnoughXP(v1) == 1 )
    if ( *(_BYTE *)(v9 + 15) )
      if ( *(_DWORD *)v9 )
        if ( ItemInstance::isNull((ItemInstance *)v9) )
          v10 = 0;
        else if ( *(_BYTE *)(v9 + 14) )
          if ( *((_BYTE *)v1 + 88) )
          {
            v10 = 1;
          }
          else
            v11 = *((_DWORD *)v1 + 18);
            v10 = 0;
            if ( v11 > 0 )
              v10 = 1;
        else
        v10 = 0;
    else
      v10 = 0;
  else
    v10 = 0;
    v12 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v10;
}


void __fastcall AnvilContainerManagerController::_consumeMaterials(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r9@1
  int v2; // r8@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  unsigned int v7; // r1@7
  signed int v8; // r0@7
  ContainerManagerModel *v9; // r6@11
  int v10; // r4@15
  int v11; // r10@27
  int v12; // r0@29
  int v13; // r6@30
  int v14; // r4@30
  bool v15; // zf@31
  int v16; // r5@34
  int v17; // r4@38
  int v18; // r6@56
  int v19; // r10@68
  int v20; // r0@70
  int v21; // r6@71
  int v22; // r4@71
  bool v23; // zf@72
  int v24; // r5@75
  bool v25; // zf@78
  _DWORD *v26; // r0@82
  int *v27; // r0@83
  void *v28; // r0@89
  unsigned int *v29; // r2@90
  signed int v30; // r1@92
  bool v31; // zf@94
  _DWORD *v32; // r0@98
  int *v33; // r0@99
  int v34; // r4@112
  int v35; // r5@112
  void *v36; // r0@113
  void *v37; // r0@115
  int v38; // r0@117
  unsigned int *v39; // r1@124
  unsigned int v40; // r0@126
  unsigned int *v41; // r4@130
  unsigned int v42; // r0@132
  __int16 v43; // [sp+5h] [bp-34Bh]@0
  char v44; // [sp+7h] [bp-349h]@0
  int v45; // [sp+8h] [bp-348h]@38
  char v46; // [sp+Ch] [bp-344h]@38
  __int16 v47; // [sp+Dh] [bp-343h]@38
  char v48; // [sp+Fh] [bp-341h]@38
  int v49; // [sp+10h] [bp-340h]@38
  int v50; // [sp+14h] [bp-33Ch]@38
  int v51; // [sp+18h] [bp-338h]@38
  int v52; // [sp+20h] [bp-330h]@48
  void *v53; // [sp+3Ch] [bp-314h]@46
  void *v54; // [sp+4Ch] [bp-304h]@44
  int v55; // [sp+60h] [bp-2F0h]@38
  int v56; // [sp+68h] [bp-2E8h]@42
  void *v57; // [sp+84h] [bp-2CCh]@40
  void *v58; // [sp+94h] [bp-2BCh]@38
  char v59; // [sp+A8h] [bp-2A8h]@38
  int v60; // [sp+B0h] [bp-2A0h]@54
  char v61; // [sp+B6h] [bp-29Ah]@38
  void *v62; // [sp+CCh] [bp-284h]@52
  void *v63; // [sp+DCh] [bp-274h]@50
  int v64; // [sp+F0h] [bp-260h]@99
  __int16 v65; // [sp+F5h] [bp-25Bh]@56
  char v66; // [sp+F7h] [bp-259h]@56
  int v67; // [sp+F8h] [bp-258h]@56
  char v68; // [sp+FCh] [bp-254h]@56
  __int16 v69; // [sp+FDh] [bp-253h]@56
  char v70; // [sp+FFh] [bp-251h]@56
  int v71; // [sp+100h] [bp-250h]@56
  int v72; // [sp+104h] [bp-24Ch]@56
  int v73; // [sp+108h] [bp-248h]@56
  int v74; // [sp+110h] [bp-240h]@66
  void *v75; // [sp+12Ch] [bp-224h]@64
  void *v76; // [sp+13Ch] [bp-214h]@62
  int v77; // [sp+150h] [bp-200h]@56
  int v78; // [sp+158h] [bp-1F8h]@60
  void *v79; // [sp+174h] [bp-1DCh]@58
  void *v80; // [sp+184h] [bp-1CCh]@56
  int v81; // [sp+198h] [bp-1B8h]@83
  __int16 v82; // [sp+19Dh] [bp-1B3h]@15
  char v83; // [sp+19Fh] [bp-1B1h]@15
  int v84; // [sp+1A0h] [bp-1B0h]@15
  char v85; // [sp+1A4h] [bp-1ACh]@15
  __int16 v86; // [sp+1A5h] [bp-1ABh]@15
  char v87; // [sp+1A7h] [bp-1A9h]@15
  int v88; // [sp+1A8h] [bp-1A8h]@15
  int v89; // [sp+1ACh] [bp-1A4h]@15
  int v90; // [sp+1B0h] [bp-1A0h]@15
  int v91; // [sp+1B8h] [bp-198h]@25
  void *v92; // [sp+1D4h] [bp-17Ch]@23
  void *v93; // [sp+1E4h] [bp-16Ch]@21
  int v94; // [sp+1F8h] [bp-158h]@15
  int v95; // [sp+200h] [bp-150h]@19
  void *v96; // [sp+21Ch] [bp-134h]@17
  void *ptr; // [sp+22Ch] [bp-124h]@15
  char v98; // [sp+240h] [bp-110h]@13
  int v99; // [sp+248h] [bp-108h]@110
  unsigned __int8 v100; // [sp+24Eh] [bp-102h]@37
  void *v101; // [sp+264h] [bp-ECh]@108
  void *v102; // [sp+274h] [bp-DCh]@106
  int v103; // [sp+28Ch] [bp-C4h]@13
  int v104; // [sp+290h] [bp-C0h]@112
  char v105; // [sp+298h] [bp-B8h]@83
  int v106; // [sp+2A0h] [bp-B0h]@87
  void *v107; // [sp+2BCh] [bp-94h]@85
  void *v108; // [sp+2CCh] [bp-84h]@83
  char v109; // [sp+2E0h] [bp-70h]@99
  int v110; // [sp+2E8h] [bp-68h]@103
  void *v111; // [sp+304h] [bp-4Ch]@101
  void *v112; // [sp+314h] [bp-3Ch]@99

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
          v7 = *v4;
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 1;
  v2 = 0;
LABEL_11:
  v9 = (ContainerManagerModel *)*((_DWORD *)v1 + 16);
  if ( v8 )
    v9 = 0;
  (*(void (__fastcall **)(int *, ContainerManagerModel *))(*(_DWORD *)v9 + 24))(&v103, v9);
  ItemInstance::ItemInstance((ItemInstance *)&v98, v103 + 72);
  if ( !ItemInstance::isNull((ItemInstance *)&v98) )
    if ( ItemInstance::isEnchantingBook((ItemInstance *)&v98) == 1 )
      v10 = ContainerManagerModel::getPlayer(v9);
      v84 = 99999;
      v85 = -11;
      v87 = v83;
      v86 = v82;
      v88 = 0;
      v89 = 0;
      ItemInstance::ItemInstance((ItemInstance *)&v90, (int)&ItemInstance::EMPTY_ITEM);
      ItemInstance::ItemInstance((ItemInstance *)&v94, (int)&v98);
      InventoryTransactionManager::addAction(v10 + 5152, (int)&v84);
      if ( ptr )
        operator delete(ptr);
      if ( v96 )
        operator delete(v96);
      if ( v95 )
        (*(void (**)(void))(*(_DWORD *)v95 + 4))();
      v95 = 0;
      if ( v93 )
        operator delete(v93);
      if ( v92 )
        operator delete(v92);
      if ( v91 )
        (*(void (**)(void))(*(_DWORD *)v91 + 4))();
      v11 = 0;
      v91 = 0;
      if ( dword_27F94C8 != 1 )
        v11 = 1;
      v12 = *(_DWORD *)(dword_27F94C4 + 4 * v11);
      if ( !v12 )
        goto LABEL_82;
      v13 = *(_DWORD *)v12;
      v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
      while ( 1 )
        v15 = v14 == 1;
        if ( v14 == 1 )
          v15 = *(_DWORD *)(v13 + 4) == 1;
        if ( v15 )
          break;
        v16 = *(_DWORD *)v13;
        if ( *(_DWORD *)v13 )
          v14 = *(_DWORD *)(v16 + 12);
          v12 = v13;
          v13 = *(_DWORD *)v13;
          if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27F94C8 == v11 )
            continue;
      v25 = v12 == 0;
      if ( v12 )
        v12 = *(_DWORD *)v12;
        v25 = v12 == 0;
      if ( v25 )
LABEL_82:
        v26 = operator new(0x10u);
        *v26 = 0;
        v26[1] = 1;
        v26[2] = &unk_28898CC;
        v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27F94C4,
                v11,
                1u,
                (int)v26);
      sub_21E8AF4(&v81, (int *)(v12 + 8));
      v27 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (unsigned __int64 *)((char *)v1 + 20),
                     (int **)&v81);
      ContainerController::removeItem((ContainerController *)&v105, *v27, 0, 0);
      if ( v108 )
        operator delete(v108);
      if ( v107 )
        operator delete(v107);
      if ( v106 )
        (*(void (**)(void))(*(_DWORD *)v106 + 4))();
      v28 = (void *)(v81 - 12);
      if ( (int *)(v81 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v81 - 4);
        if ( &pthread_create )
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          goto LABEL_143;
        goto LABEL_142;
    else if ( *((_DWORD *)v1 + 19) >= (signed int)v100 )
      v18 = ContainerManagerModel::getPlayer(v9);
      v67 = 99999;
      v68 = -11;
      v70 = v66;
      v69 = v65;
      v71 = 0;
      v72 = 0;
      ItemInstance::ItemInstance((ItemInstance *)&v73, (int)&ItemInstance::EMPTY_ITEM);
      ItemInstance::ItemInstance((ItemInstance *)&v77, (int)&v98);
      InventoryTransactionManager::addAction(v18 + 5152, (int)&v67);
      if ( v80 )
        operator delete(v80);
      if ( v79 )
        operator delete(v79);
      if ( v78 )
        (*(void (**)(void))(*(_DWORD *)v78 + 4))();
      v78 = 0;
      if ( v76 )
        operator delete(v76);
      if ( v75 )
        operator delete(v75);
      if ( v74 )
        (*(void (**)(void))(*(_DWORD *)v74 + 4))();
      v19 = 0;
      v74 = 0;
        v19 = 1;
      v20 = *(_DWORD *)(dword_27F94C4 + 4 * v19);
      if ( !v20 )
        goto LABEL_98;
      v21 = *(_DWORD *)v20;
      v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
        v23 = v22 == 1;
        if ( v22 == 1 )
          v23 = *(_DWORD *)(v21 + 4) == 1;
        if ( v23 )
        v24 = *(_DWORD *)v21;
        if ( *(_DWORD *)v21 )
          v22 = *(_DWORD *)(v24 + 12);
          v20 = v21;
          v21 = *(_DWORD *)v21;
          if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27F94C8 == v19 )
      v31 = v20 == 0;
      if ( v20 )
        v20 = *(_DWORD *)v20;
        v31 = v20 == 0;
      if ( v31 )
LABEL_98:
        v32 = operator new(0x10u);
        *v32 = 0;
        v32[1] = 1;
        v32[2] = &unk_28898CC;
        v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v19,
                (int)v32);
      sub_21E8AF4(&v64, (int *)(v20 + 8));
      v33 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v64);
      ContainerController::removeItem((ContainerController *)&v109, *v33, 0, 0);
      if ( v112 )
        operator delete(v112);
      if ( v111 )
        operator delete(v111);
      if ( v110 )
        (*(void (**)(void))(*(_DWORD *)v110 + 4))();
      v28 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v64 - 4);
LABEL_143:
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
          goto LABEL_106;
LABEL_142:
        v30 = (*v29)--;
        goto LABEL_143;
    else
      ItemInstance::ItemInstance((ItemInstance *)&v59, (int)&v98);
      v61 = *((_DWORD *)v1 + 19);
      v17 = ContainerManagerModel::getPlayer(v9);
      v45 = 99999;
      v46 = -11;
      v48 = v44;
      v47 = v43;
      v49 = 0;
      v50 = 0;
      ItemInstance::ItemInstance((ItemInstance *)&v51, (int)&ItemInstance::EMPTY_ITEM);
      ItemInstance::ItemInstance((ItemInstance *)&v55, (int)&v59);
      InventoryTransactionManager::addAction(v17 + 5152, (int)&v45);
      if ( v58 )
        operator delete(v58);
      if ( v57 )
        operator delete(v57);
      if ( v56 )
        (*(void (**)(void))(*(_DWORD *)v56 + 4))();
      v56 = 0;
      if ( v54 )
        operator delete(v54);
      if ( v53 )
        operator delete(v53);
      if ( v52 )
        (*(void (**)(void))(*(_DWORD *)v52 + 4))();
      v52 = 0;
      ItemInstance::remove((ItemInstance *)&v98, *((_DWORD *)v1 + 19));
      (*(void (__fastcall **)(ContainerManagerModel *, signed int, char *))(*(_DWORD *)v9 + 28))(v9, 1, &v98);
      if ( v63 )
        operator delete(v63);
      if ( v62 )
        operator delete(v62);
      if ( v60 )
        (*(void (**)(void))(*(_DWORD *)v60 + 4))();
LABEL_106:
  if ( v102 )
    operator delete(v102);
  if ( v101 )
    operator delete(v101);
  if ( v99 )
    (*(void (**)(void))(*(_DWORD *)v99 + 4))();
  v34 = v104;
  v35 = v103;
  if ( v103 != v104 )
    do
      v36 = *(void **)(v35 + 52);
      if ( v36 )
        operator delete(v36);
      v37 = *(void **)(v35 + 36);
      if ( v37 )
        operator delete(v37);
      v38 = *(_DWORD *)(v35 + 8);
      if ( v38 )
        (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      *(_DWORD *)(v35 + 8) = 0;
      v35 += 72;
    while ( v34 != v35 );
    v35 = v103;
  if ( v35 )
    operator delete((void *)v35);
    v39 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      v41 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


AnvilContainerManagerController *__fastcall AnvilContainerManagerController::~AnvilContainerManagerController(AnvilContainerManagerController *this)
{
  AnvilContainerManagerController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  unsigned int *v8; // r12@11
  signed int v9; // r1@13

  v1 = this;
  *(_DWORD *)this = &off_26ECC20;
  v2 = *((_DWORD *)this + 20);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  if ( v4 )
    v5 = (unsigned int *)(v4 + 8);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  ContainerManagerController::~ContainerManagerController(v1);
  return v1;
}
