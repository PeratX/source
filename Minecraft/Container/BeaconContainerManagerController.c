

int __fastcall BeaconContainerManagerController::isBeaconValid(BeaconContainerManagerController *this, float a2)
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
            this = (BeaconContainerManagerController *)*((_DWORD *)this + 16);
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


unsigned int __fastcall BeaconContainerManagerController::BeaconContainerManagerController(unsigned int a1, int a2)
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
  int v25; // [sp+4h] [bp-1Ch]@19
  int v26; // [sp+8h] [bp-18h]@1

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
      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  *(_DWORD *)v3 = &off_26ECC64;
  *(_DWORD *)(v3 + 64) = *(_DWORD *)v2;
  v21 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 68) = v21;
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  BeaconContainerManagerController::_setupCallbacks((BeaconContainerManagerController *)v3);
  return v3;
}


    if ( BeaconContainerManagerController::getButtonStatus(v4, a2) )
{
      v5 = *(_DWORD *)(v3 + 628);
      v6 = 0;
      if ( v5 )
      {
        if ( BeaconContainerManagerController::getButtonStatus(v5, v2) == 3 )
          v6 = 1;
      }
      result = v6;
    }
    else
    {
      result = 1;
  }
  else
  {
    result = 0;
  return result;
}


signed int __fastcall BeaconContainerManagerController::handlePlaceAll(int a1, ContainerItemStack *a2, const void **a3, int a4)
{
  int v4; // r9@1
  ContainerItemStack *v5; // r10@1
  const void **v6; // r5@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  const void *v15; // r1@14
  size_t v16; // r2@14
  int v17; // r0@15
  int v18; // r3@15
  int v19; // r1@15
  int v20; // r0@15
  int v22; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v22 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 5u % dword_27F95CC;
  v8 = *(_DWORD *)(dword_27F95C8 + 4 * (5u % dword_27F95CC));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 5;
    if ( v10 == 5 )
      v11 = *(_DWORD *)(v9 + 4) == 5;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F95CC == v7 )
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
    v14[1] = 5;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F95C8,
           v7,
           5u,
           (int)v14);
  v15 = *(const void **)(v8 + 8);
  v16 = *((_DWORD *)*v6 - 3);
  if ( v16 == *((_DWORD *)v15 - 3) )
    v17 = memcmp(*v6, v15, v16);
    v18 = v22;
    v11 = v17 == 0;
    v19 = (int)v5;
    v20 = v4;
      return j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi(v4, v5, (int **)v6, v22);
  else
  return j_j_j__ZN26ContainerManagerController14handlePlaceAllER18ContainerItemStackRKSsi(v20, v19, (int **)v6, v18);
}


ContainerManagerController *__fastcall BeaconContainerManagerController::~BeaconContainerManagerController(BeaconContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECC64;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return j_j_j__ZN26ContainerManagerControllerD2Ev(v1);
}


void __fastcall BeaconContainerManagerController::~BeaconContainerManagerController(BeaconContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECC64;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  ContainerManagerController::~ContainerManagerController(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall BeaconContainerManagerController::buttonNameToButtonId(int **a1)
{
  int **v1; // r8@1
  char v2; // r0@1
  double v3; // r0@3
  void *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  int v13; // r0@13
  signed int v14; // r2@14
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  unsigned int *v26; // r2@37
  signed int v27; // r1@39
  unsigned int *v28; // r2@41
  signed int v29; // r1@43
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  unsigned int *v32; // r2@49
  signed int v33; // r1@51
  int v34; // [sp+24h] [bp-9Ch]@3
  int v35; // [sp+28h] [bp-98h]@3
  int v36; // [sp+2Ch] [bp-94h]@3
  int v37; // [sp+30h] [bp-90h]@3
  int v38; // [sp+34h] [bp-8Ch]@3
  int v39; // [sp+38h] [bp-88h]@3
  int v40; // [sp+3Ch] [bp-84h]@3
  int v41; // [sp+40h] [bp-80h]@3
  int v42; // [sp+44h] [bp-7Ch]@3
  int v43; // [sp+48h] [bp-78h]@3
  int v44; // [sp+4Ch] [bp-74h]@3
  int v45; // [sp+50h] [bp-70h]@3
  int v46; // [sp+54h] [bp-6Ch]@3
  int v47; // [sp+58h] [bp-68h]@3
  int v48; // [sp+5Ch] [bp-64h]@3
  int v49; // [sp+60h] [bp-60h]@3
  int v50; // [sp+64h] [bp-5Ch]@3
  int v51; // [sp+68h] [bp-58h]@3
  char v52; // [sp+6Ch] [bp-54h]@3

  v1 = a1;
  v2 = byte_27F95C4;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27F95C4) )
  {
    sub_21E94B4((void **)&v34, "confirm");
    v35 = 0;
    sub_21E94B4((void **)&v36, "cancel");
    v37 = 1;
    sub_21E94B4((void **)&v38, "speed");
    v39 = 2;
    sub_21E94B4((void **)&v40, "haste");
    v41 = 3;
    sub_21E94B4((void **)&v42, "resist");
    v43 = 4;
    sub_21E94B4((void **)&v44, "jump");
    v45 = 5;
    sub_21E94B4((void **)&v46, "strength");
    v47 = 6;
    sub_21E94B4((void **)&v48, "regen");
    v49 = 7;
    sub_21E94B4((void **)&v50, "extra");
    v51 = 8;
    LODWORD(v3) = algn_27F95E4;
    std::_Hashtable<std::string,std::pair<std::string const,BeaconContainerManagerController::ButtonId>,std::allocator<std::pair<std::string const,BeaconContainerManagerController::ButtonId>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,BeaconContainerManagerController::ButtonId> const*>(
      v3,
      (int **)&v52,
      0);
    v4 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v50 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v48 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v46 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v44 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v42 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v40 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v38 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v36 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v34 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    _cxa_atexit(std::unordered_map<std::string,BeaconContainerManagerController::ButtonId,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,BeaconContainerManagerController::ButtonId>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27F95C4);
  }
  v13 = std::_Hashtable<std::string,std::pair<std::string const,BeaconContainerManagerController::ButtonId>,std::allocator<std::pair<std::string const,BeaconContainerManagerController::ButtonId>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          (unsigned __int64 *)algn_27F95E4,
          v1);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 8);
  else
    v14 = -1;
  return v14;
}


  if ( v3 && BeaconContainerManagerController::getButtonStatus(v3, a2) == 3 )
{
  return v2;
}


int __fastcall BeaconContainerManagerController::getButtonStatus(int a1, int **a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  BeaconContainerManagerModel *v9; // r6@11
  signed int v10; // r0@13
  bool v11; // zf@13
  int v12; // r5@13
  signed int v13; // r0@21
  int v14; // r2@23
  unsigned int *v15; // r1@38
  unsigned int v16; // r0@40
  unsigned int *v17; // r6@44
  unsigned int v18; // r0@46

  v2 = *(_DWORD *)(a1 + 68);
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
  v9 = *(BeaconContainerManagerModel **)(a1 + 64);
  if ( v8 )
    v9 = 0;
  v10 = BeaconContainerManagerController::buttonNameToButtonId(a2);
  v11 = v9 == 0;
  v12 = 2;
  if ( v9 )
    v11 = v10 == -1;
  if ( !v11 && v10 <= 8 )
    if ( v10 == 1 )
      v12 = 0;
    else if ( v10 )
      v14 = 0;
      if ( v10 > 6 )
        v14 = 1;
      if ( BeaconContainerManagerModel::isSelected(v9, 2, v14) )
        v12 = 3;
        switch ( 0 )
          case 2:
          case 3:
            v13 = BeaconContainerManagerModel::isTierAvailable(v9, 1);
            goto LABEL_36;
          case 4:
          case 5:
            v13 = BeaconContainerManagerModel::isTierAvailable(v9, 2);
          case 7:
            v13 = BeaconContainerManagerModel::isTierAvailable(v9, 4);
          case 6:
            v13 = BeaconContainerManagerModel::isTierAvailable(v9, 3);
          default:
            if ( BeaconContainerManagerModel::hasPrimarySelection(v9) == 1 )
            {
              v13 = BeaconContainerManagerModel::isTierAvailable(v9, 4);
              goto LABEL_36;
            }
            v12 = 2;
            break;
    else
      if ( BeaconContainerManagerModel::isPaymentAvailable(v9) == 1 )
        if ( BeaconContainerManagerModel::haveEffectsChanged(v9) == 1 )
          v13 = BeaconContainerManagerModel::isAnyEffectValid(v9);
        else
          v13 = 0;
        v13 = 0;
LABEL_36:
      v12 = v13 ^ 1;
    v15 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v12;
}


void __fastcall BeaconContainerManagerController::~BeaconContainerManagerController(BeaconContainerManagerController *this)
{
  BeaconContainerManagerController::~BeaconContainerManagerController(this);
}


signed int __fastcall BeaconContainerManagerController::buttonClicked(int a1, signed int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r3@5
  unsigned int v6; // r5@6
  signed int v7; // r5@7
  BeaconContainerManagerModel *v8; // r0@8
  bool v9; // zf@8
  unsigned int v11; // r0@21
  unsigned int *v12; // r6@25
  unsigned int v13; // r0@27

  v2 = *(_DWORD *)(a1 + 68);
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
          if ( *v4 )
          {
            v8 = *(BeaconContainerManagerModel **)(a1 + 64);
            v9 = v8 == 0;
            if ( v8 )
            {
              v7 = 0;
              v9 = a2 == -1;
            }
            if ( !v9 && a2 <= 8 )
              switch ( a2 )
              {
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                  v7 = 0;
                  BeaconContainerManagerModel::selectEffect(v8, a2 - 2, 0);
                  break;
                case 7:
                case 8:
                  BeaconContainerManagerModel::selectEffect(v8, a2 - 2, 1);
                  goto def_167964E;
                case 0:
                  BeaconContainerManagerModel::confirmTransaction(v8);
                case 1:
                  BeaconContainerManagerModel::cancelTransaction(v8);
                  v7 = 1;
                default:
def_167964E:
              }
          }
          if ( &pthread_create )
            __dmb();
            do
              v11 = __ldrex(v4);
            while ( __strex(v11 - 1, v4) );
          else
            v11 = (*v4)--;
          if ( v11 == 1 )
            v12 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            else
              v13 = (*v12)--;
            if ( v13 == 1 )
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


void __fastcall BeaconContainerManagerController::getButtonHoverText(BeaconContainerManagerModel *a1, int a2, int **a3)
{
  BeaconContainerManagerController::getButtonHoverText(a1, a2, a3);
}


char *__fastcall BeaconContainerManagerController::_setupCallbacks(BeaconContainerManagerController *this)
{
  BeaconContainerManagerController *v1; // r8@1
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
  v2 = 5u % dword_27F95CC;
  v3 = *(_DWORD *)(dword_27F95C8 + 4 * (5u % dword_27F95CC));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 5;
    if ( v5 == 5 )
      v6 = *(_DWORD *)(v4 + 4) == 5;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F95CC == v2 )
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
    v9[1] = 5;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F95C8,
           v2,
           5u,
           (int)v9);
  v10 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
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
  LODWORD(v22) = sub_167A624;
  *v21 = v1;
  HIDWORD(v22) = sub_167A2D4;
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


signed int __fastcall BeaconContainerManagerController::isSecondaryEffect(int a1, int **a2)
{
  int v2; // r4@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r2@2
  unsigned int v5; // r6@5
  unsigned int v6; // r5@6
  unsigned int v7; // r3@7
  signed int v8; // r2@7
  BeaconContainerManagerModel *v9; // r6@11
  unsigned int v10; // r0@13
  signed int v11; // r5@13
  unsigned int *v12; // r1@17
  unsigned int v13; // r0@19
  unsigned int *v14; // r6@23
  unsigned int v15; // r0@25

  v2 = *(_DWORD *)(a1 + 68);
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
  v9 = *(BeaconContainerManagerModel **)(a1 + 64);
  if ( v8 )
    v9 = 0;
  v10 = BeaconContainerManagerController::buttonNameToButtonId(a2);
  v11 = 1;
  if ( v10 <= 8 && v9 )
    v11 = BeaconContainerManagerModel::isSecondaryEffect(v9, v10 - 2);
    v12 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
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
  return v11;
}


void __fastcall BeaconContainerManagerController::getButtonHoverText(BeaconContainerManagerModel *a1, int a2, int **a3)
{
  int v3; // r7@1
  BeaconContainerManagerModel *v4; // r5@1
  unsigned int v5; // r3@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r6@5
  unsigned int v8; // r4@6
  unsigned int v9; // r3@7
  signed int v10; // r0@7
  int v11; // r6@11
  unsigned int v12; // r0@13
  unsigned int *v13; // r1@19
  unsigned int v14; // r0@21
  unsigned int *v15; // r5@25
  unsigned int v16; // r0@27
  void *v17; // r0@34
  unsigned int *v18; // r2@35
  signed int v19; // r1@37
  int v20; // [sp+8h] [bp-28h]@39
  int v21; // [sp+10h] [bp-20h]@34

  v3 = *(_DWORD *)(a2 + 68);
  v4 = a1;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
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
  v3 = 0;
LABEL_11:
  v11 = *(_DWORD *)(a2 + 64);
  if ( v10 )
    v11 = 0;
  v12 = BeaconContainerManagerController::buttonNameToButtonId(a3);
  if ( v12 <= 8 && v11 )
    switch ( v12 )
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
        BeaconContainerManagerModel::getEffectHoverName(v4, v11, v12 - 2, 0);
        break;
      case 7u:
      case 8u:
        BeaconContainerManagerModel::getEffectHoverName(v4, v11, v12 - 2, 1);
      case 0u:
        sub_21E94B4((void **)&v21, "gui.done");
        I18n::get((int *)v4, (int **)&v21);
        v17 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v21 - 4);
          if ( !&pthread_create )
            goto LABEL_45;
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          goto LABEL_46;
      case 1u:
        sub_21E94B4((void **)&v20, "gui.cancel");
        I18n::get((int *)v4, (int **)&v20);
        v17 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
LABEL_45:
            v19 = (*v18)--;
LABEL_46:
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
      default:
        sub_21E94B4((void **)v4, (const char *)&unk_257BC67);
  else
    sub_21E94B4((void **)v4, (const char *)&unk_257BC67);
    v13 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
}
