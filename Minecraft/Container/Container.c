

int __fastcall Container::Container(double a1, int *a2, char a3)
{
  int v3; // r4@1
  int *v4; // r6@1
  char v5; // r8@1
  double v6; // r0@1
  int v7; // r5@3
  void *v8; // r7@3
  unsigned int v9; // r0@4
  int v10; // r5@6
  void *v11; // r7@6

  v3 = LODWORD(a1);
  v4 = a2;
  v5 = a3;
  *(_DWORD *)LODWORD(a1) = &off_26EC534;
  *(_BYTE *)(LODWORD(a1) + 4) = BYTE4(a1);
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  *(_DWORD *)(LODWORD(a1) + 24) = 1065353216;
  LODWORD(a1) += 24;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v6 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v3 + 12) = LODWORD(v6);
  if ( LODWORD(v6) == 1 )
  {
    *(_DWORD *)(v3 + 32) = 0;
    v8 = (void *)(v3 + 32);
  }
  else
    if ( LODWORD(v6) >= 0x40000000 )
      sub_21E57F4();
    v7 = 4 * LODWORD(v6);
    v8 = operator new(4 * LODWORD(v6));
    _aeabi_memclr4(v8, v7);
  *(_DWORD *)(v3 + 8) = v8;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 52) = 1065353216;
  LODWORD(v6) = v3 + 52;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v9 = sub_21E6254(v6);
  *(_DWORD *)(v3 + 40) = v9;
  if ( v9 == 1 )
    *(_DWORD *)(v3 + 60) = 0;
    v11 = (void *)(v3 + 60);
    if ( v9 >= 0x40000000 )
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)(v3 + 36) = v11;
  _aeabi_memclr4(v3 + 64, 40);
  std::_Deque_base<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>,std::allocator<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>>>::_M_initialize_map(
    v3 + 64,
    0);
  sub_21E8AF4((int *)(v3 + 104), v4);
  *(_BYTE *)(v3 + 108) = v5;
  return v3;
}


int __fastcall Container::getItemCount(Container *this, const ItemInstance *a2)
{
  Container *v2; // r5@1
  const ItemInstance *v3; // r8@1
  int v4; // r6@1
  int v5; // r7@2
  int v6; // r0@3
  int v7; // r4@3
  int v8; // r0@3
  bool v9; // zf@3

  v2 = this;
  v3 = a2;
  v4 = 0;
  if ( (*(int (**)(void))(*(_DWORD *)this + 44))() >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v2 + 16))(v2, v5);
      v7 = v6;
      v8 = *(_BYTE *)(v6 + 15);
      v9 = v8 == 0;
      if ( v8 )
        v9 = *(_DWORD *)v7 == 0;
      if ( !v9
        && !ItemInstance::isNull((ItemInstance *)v7)
        && *(_BYTE *)(v7 + 14)
        && ItemInstance::matchesItem((ItemInstance *)v7, v3) == 1 )
      {
        v4 += *(_BYTE *)(v7 + 14);
      }
      ++v5;
    }
    while ( v5 < (*(int (__fastcall **)(Container *))(*(_DWORD *)v2 + 44))(v2) );
  }
  return v4;
}


void __fastcall Container::~Container(Container *this)
{
  Container *v1; // r0@1

  v1 = Container::~Container(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall Container::canPushInItem(Container *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  return 1;
}


void __fastcall Container::readAdditionalSaveData(Container *this, const CompoundTag *a2)
{
  Container *v2; // r4@1
  const CompoundTag *v3; // r10@1
  int v4; // r9@1
  int v5; // r5@2
  int v6; // r0@3
  int v7; // r7@3
  int v8; // r0@3
  bool v9; // zf@3
  ListTag *v10; // r6@10
  void *v11; // r0@10
  int v12; // r8@13
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  const CompoundTag *v15; // r11@22
  int v16; // r10@23
  void *v17; // r0@23
  void (__fastcall *v18)(Container *, int, char *); // ST10_4@25
  signed int v19; // r5@33
  void *v20; // r0@33
  int *v21; // r0@35
  void *v22; // r0@35
  void *v23; // r0@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  unsigned int *v26; // r2@42
  signed int v27; // r1@44
  unsigned int *v28; // r2@46
  signed int v29; // r1@48
  unsigned int *v30; // r2@58
  signed int v31; // r1@60
  int v32; // [sp+8h] [bp-A8h]@11
  int v33; // [sp+Ch] [bp-A4h]@1
  int v34; // [sp+1Ch] [bp-94h]@36
  int v35; // [sp+24h] [bp-8Ch]@35
  int v36; // [sp+2Ch] [bp-84h]@33
  char v37; // [sp+30h] [bp-80h]@25
  int v38; // [sp+38h] [bp-78h]@29
  void *v39; // [sp+54h] [bp-5Ch]@27
  void *ptr; // [sp+64h] [bp-4Ch]@25
  int v41; // [sp+7Ch] [bp-34h]@14
  int v42; // [sp+84h] [bp-2Ch]@10

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  v33 = v4;
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v2 + 16))(v2, v5);
      v7 = v6;
      v8 = *(_BYTE *)(v6 + 15);
      v9 = v8 == 0;
      if ( v8 )
        v9 = *(_DWORD *)v7 == 0;
      if ( !v9 && !ItemInstance::isNull((ItemInstance *)v7) && *(_BYTE *)(v7 + 14) )
        (*(void (__fastcall **)(Container *, int, void *))(*(_DWORD *)v2 + 32))(v2, v5, &ItemInstance::EMPTY_ITEM);
      ++v5;
    }
    while ( v4 != v5 );
  }
  sub_21E94B4((void **)&v42, "Items");
  v10 = (ListTag *)CompoundTag::getList((int)v3, (const void **)&v42);
  v11 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v42 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v32 = (int)v3;
  if ( v10 && ListTag::size(v10) >= 1 )
    v12 = 0;
      v15 = (const CompoundTag *)ListTag::get(v10, v12);
      if ( (*(int (**)(void))(*(_DWORD *)v15 + 24))() == 10 )
      {
        sub_21E94B4((void **)&v41, "Slot");
        v16 = CompoundTag::getByte((int)v15, (const void **)&v41);
        v17 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) != &dword_28898C0 )
        {
          v13 = (unsigned int *)(v41 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        }
        if ( v16 < v4 )
          v18 = *(void (__fastcall **)(Container *, int, char *))(*(_DWORD *)v2 + 32);
          ItemInstance::fromTag((ItemInstance *)&v37, v15);
          v18(v2, v16, &v37);
          v4 = v33;
          if ( ptr )
            operator delete(ptr);
          if ( v39 )
            operator delete(v39);
          if ( v38 )
            (*(void (**)(void))(*(_DWORD *)v38 + 4))();
          v38 = 0;
      }
      ++v12;
    while ( v12 < ListTag::size(v10) );
  sub_21E94B4((void **)&v36, "CustomName");
  v19 = CompoundTag::contains(v32, (const void **)&v36);
  v20 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v36 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v19 == 1 )
    sub_21E94B4((void **)&v35, "CustomName");
    v21 = (int *)CompoundTag::getString(v32, (const void **)&v35);
    EntityInteraction::setInteractText((int *)v2 + 26, v21);
    v22 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v34, "HasCustomName");
  *((_BYTE *)v2 + 108) = CompoundTag::getBoolean(v32, (const void **)&v34);
  v23 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
}


_DWORD *__fastcall Container::addSizeChangeListener(int a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r9@1
  _DWORD *result; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r5@4
  bool v9; // zf@7
  _DWORD *v10; // r0@11

  v2 = a2;
  v3 = a1 + 36;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = a2 % *(_DWORD *)(a1 + 40);
  result = *(_DWORD **)(*(_DWORD *)(a1 + 36) + 4 * v5);
  if ( !result )
    goto LABEL_11;
  v7 = (_DWORD *)*result;
  while ( v7[1] != a2 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      result = v7;
      v7 = (_DWORD *)*v7;
      if ( *(_DWORD *)(v8 + 4) % v4 == v5 )
        continue;
    }
  }
  v9 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v9 = result == 0;
  if ( v9 )
LABEL_11:
    v10 = operator new(8u);
    *v10 = 0;
    v10[1] = v2;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIP27ContainerSizeChangeListenerS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
                         v3,
                         v5,
                         v2,
                         (int)v10);
  return result;
}


int __fastcall Container::StringToContainerType(unsigned int *a1)
{
  unsigned int *v1; // r9@1
  char v2; // r0@1
  char *v3; // r6@3
  double v4; // r0@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // r1@12
  int v8; // t1@12
  void *v9; // r0@12
  unsigned int v10; // r9@15
  unsigned int v11; // r10@15
  int v12; // r11@15
  int v13; // r6@15
  int v14; // r7@16
  _DWORD *v15; // r8@16
  int v16; // r4@16
  _DWORD *v17; // r1@18
  size_t v18; // r2@18
  int v19; // r5@20
  int v20; // r4@22
  char v21; // r2@30
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  void *s1; // [sp+1Ch] [bp-104h]@15
  char v26; // [sp+2Ch] [bp-F4h]@3
  char v27; // [sp+30h] [bp-F0h]@3
  int v28; // [sp+34h] [bp-ECh]@3
  char v29; // [sp+38h] [bp-E8h]@3
  int v30; // [sp+3Ch] [bp-E4h]@3
  char v31; // [sp+40h] [bp-E0h]@3
  int v32; // [sp+44h] [bp-DCh]@3
  char v33; // [sp+48h] [bp-D8h]@3
  int v34; // [sp+4Ch] [bp-D4h]@3
  char v35; // [sp+50h] [bp-D0h]@3
  int v36; // [sp+54h] [bp-CCh]@3
  char v37; // [sp+58h] [bp-C8h]@3
  int v38; // [sp+5Ch] [bp-C4h]@3
  char v39; // [sp+60h] [bp-C0h]@3
  int v40; // [sp+64h] [bp-BCh]@3
  char v41; // [sp+68h] [bp-B8h]@3
  int v42; // [sp+6Ch] [bp-B4h]@3
  char v43; // [sp+70h] [bp-B0h]@3
  int v44; // [sp+74h] [bp-ACh]@3
  char v45; // [sp+78h] [bp-A8h]@3
  int v46; // [sp+7Ch] [bp-A4h]@3
  char v47; // [sp+80h] [bp-A0h]@3
  int v48; // [sp+84h] [bp-9Ch]@3
  char v49; // [sp+88h] [bp-98h]@3
  int v50; // [sp+8Ch] [bp-94h]@3
  char v51; // [sp+90h] [bp-90h]@3
  int v52; // [sp+94h] [bp-8Ch]@3
  char v53; // [sp+98h] [bp-88h]@3
  int v54; // [sp+9Ch] [bp-84h]@3
  char v55; // [sp+A0h] [bp-80h]@3
  int v56; // [sp+A4h] [bp-7Ch]@3
  char v57; // [sp+A8h] [bp-78h]@3
  char v58; // [sp+ACh] [bp-74h]@3

  v1 = a1;
  v2 = byte_27F83E4;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire(&byte_27F83E4) )
  {
    sub_21E94B4((void **)&v26, "INVENTORY");
    v27 = -1;
    sub_21E94B4((void **)&v28, "CONTAINER");
    v29 = 0;
    sub_21E94B4((void **)&v30, "WORKBENCH");
    v31 = 1;
    sub_21E94B4((void **)&v32, "FURNACE");
    v33 = 2;
    sub_21E94B4((void **)&v34, "ENCHANTMENT");
    v35 = 3;
    sub_21E94B4((void **)&v36, "BREWING_STAND");
    v37 = 4;
    sub_21E94B4((void **)&v38, "ANVIL");
    v39 = 5;
    sub_21E94B4((void **)&v40, "DISPENSER");
    v41 = 6;
    sub_21E94B4((void **)&v42, "DROPPER");
    v43 = 7;
    sub_21E94B4((void **)&v44, "HOPPER");
    v45 = 8;
    sub_21E94B4((void **)&v46, "CAULDRON");
    v47 = 9;
    sub_21E94B4((void **)&v48, "MINECART_CHEST");
    v49 = 10;
    sub_21E94B4((void **)&v50, "MINECART_HOPPER");
    v51 = 11;
    sub_21E94B4((void **)&v52, "MINECART_COMMAND_BLOCK");
    v53 = 16;
    sub_21E94B4((void **)&v54, "HORSE");
    v55 = 12;
    sub_21E94B4((void **)&v56, "JUKEBOX");
    v3 = &v58;
    v57 = 17;
    LODWORD(v4) = &dword_27F83E8;
    std::_Hashtable<std::string,std::pair<std::string const,ContainerType>,std::allocator<std::pair<std::string const,ContainerType>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,ContainerType> const*>(
      v4,
      (int **)&v58,
      0);
    do
    {
      v8 = *((_DWORD *)v3 - 2);
      v3 -= 8;
      v7 = v8;
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v7 - 4);
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
    }
    while ( v3 != &v26 );
    _cxa_atexit(std::unordered_map<std::string,ContainerType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,ContainerType>>>::~unordered_map);
    j___cxa_guard_release(&byte_27F83E4);
  }
  Util::toUpper(&s1, *(_DWORD *)(*v1 - 12), *v1);
  v10 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v11 = unk_27F83EC;
  v12 = v10 % unk_27F83EC;
  v13 = *(_DWORD *)(dword_27F83E8 + 4 * (v10 % unk_27F83EC));
  if ( v13 )
    v14 = *(_DWORD *)v13;
    v15 = s1;
    v16 = *(_DWORD *)(*(_DWORD *)v13 + 12);
    while ( 1 )
      if ( v16 == v10 )
        v17 = *(_DWORD **)(v14 + 4);
        v18 = *(v15 - 3);
        if ( v18 == *(v17 - 3) && !memcmp(v15, v17, v18) )
          break;
      v19 = *(_DWORD *)v14;
      if ( !*(_DWORD *)v14 )
        v20 = 0;
        goto LABEL_28;
      v16 = *(_DWORD *)(v19 + 12);
      v13 = v14;
      v14 = *(_DWORD *)v14;
      if ( *(_DWORD *)(v19 + 12) % v11 != v12 )
    if ( v13 )
      v20 = *(_DWORD *)v13;
    else
      v20 = 0;
  else
    v20 = 0;
LABEL_28:
  if ( v15 - 3 != &dword_28898C0 )
    v23 = v15 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15 - 3);
  if ( v20 )
    v21 = *(_BYTE *)(v20 + 8);
    v21 = -9;
  return v21;
}


int __fastcall Container::dropContents(Container *this, BlockSource *a2, const Vec3 *a3, bool a4)
{
  Container *v4; // r8@1
  Level *v6; // r0@1
  int result; // r0@1
  int v11; // r4@2
  int v12; // r0@3
  __int64 v14; // r0@6
  unsigned __int8 v18; // r5@9
  unsigned int v19; // r11@12
  Level *v20; // r0@14
  Spawner *v21; // r0@14
  Level *v25; // r0@22
  Spawner *v26; // r0@22
  BlockSource *v30; // [sp+14h] [bp-10Ch]@1
  Random *v31; // [sp+18h] [bp-108h]@1
  float v32; // [sp+1Ch] [bp-104h]@14
  char v33; // [sp+28h] [bp-F8h]@14
  int v34; // [sp+30h] [bp-F0h]@18
  void *v35; // [sp+4Ch] [bp-D4h]@16
  void *ptr; // [sp+5Ch] [bp-C4h]@14
  int v37; // [sp+70h] [bp-B0h]@3
  int v38; // [sp+78h] [bp-A8h]@34
  unsigned __int8 v39; // [sp+7Eh] [bp-A2h]@6
  char v40; // [sp+7Fh] [bp-A1h]@3
  void *v41; // [sp+94h] [bp-8Ch]@32
  void *v42; // [sp+A4h] [bp-7Ch]@30

  v4 = this;
  _R10 = a3;
  v30 = a2;
  v6 = (Level *)BlockSource::getLevel(a2);
  v31 = (Random *)Level::getRandom(v6);
  result = (*(int (__fastcall **)(Container *))(*(_DWORD *)v4 + 44))(v4);
  if ( result >= 1 )
  {
    __asm { VLDR            D8, =2.32830644e-10 }
    v11 = 0;
    __asm
    {
      VLDR            S18, =0.8
      VLDR            S20, =0.1
      VLDR            S22, =0.05
      VLDR            S24, =0.2
    }
    do
      v12 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v4 + 16))(v4, v11);
      ItemInstance::ItemInstance((ItemInstance *)&v37, v12);
      _ZF = v40 == 0;
      if ( v40 )
        _ZF = v37 == 0;
      if ( !_ZF )
      {
        v14 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v37);
        if ( !v39 )
          HIDWORD(v14) = 1;
        if ( !v14 )
        {
          _R0 = Random::_genRandInt32(v31);
          __asm
          {
            VMOV            S0, R0
            VCVT.F64.U32    D13, S0
          }
            VCVT.F64.U32    D14, S0
            VCVT.F64.U32    D0, S0
          v18 = v39;
          if ( v39 )
            __asm
            {
              VMUL.F64        D1, D13, D8
              VCVT.F32.F64    S2, D1
              VMUL.F32        S2, S2, S18
              VMUL.F64        D0, D0, D8
              VADD.F32        S26, S2, S20
              VMUL.F64        D1, D14, D8
              VCVT.F32.F64    S0, D0
              VMUL.F32        S0, S0, S18
              VADD.F32        S28, S2, S20
              VADD.F32        S30, S0, S20
            }
            if ( _ZF )
              do
              {
                v19 = Random::_genRandInt32(v31) % 0x15 + 10;
                if ( v19 > v39 )
                  v19 = v39;
                ItemInstance::ItemInstance((ItemInstance *)&v33, (int)&v37);
                ItemInstance::set((ItemInstance *)&v33, v19);
                v20 = (Level *)BlockSource::getLevel(v30);
                v21 = (Spawner *)Level::getSpawner(v20);
                __asm
                {
                  VLDR            S0, [R10]
                  VLDR            S2, [R10,#4]
                  VLDR            S4, [R10,#8]
                  VADD.F32        S0, S26, S0
                  VADD.F32        S2, S28, S2
                  VADD.F32        S4, S30, S4
                  VSTR            S0, [SP,#0x120+var_104]
                  VSTR            S2, [SP,#0x120+var_100]
                  VSTR            S4, [SP,#0x120+var_FC]
                }
                Spawner::spawnItem(v21, v30, (const ItemInstance *)&v33, 0, (const Vec3 *)&v32, 10);
                ItemInstance::remove((ItemInstance *)&v37, v19);
                (*(void (**)(void))(*(_DWORD *)v4 + 32))();
                _R5 = Random::nextGaussian(v31);
                _R6 = Random::nextGaussian(v31);
                _R0 = Random::nextGaussian(v31);
                  VMOV            S2, R6
                  VMOV            S0, R5
                  VMUL.F32        S2, S2, S22
                  VMOV            S4, R0
                  VMUL.F32        S0, S0, S22
                  VMUL.F32        S4, S4, S22
                  VADD.F32        S2, S2, S24
                  VSTR            S0, [R8,#0x6C]
                  VSTR            S2, [R8,#0x70]
                  VSTR            S4, [R8,#0x74]
                if ( ptr )
                  operator delete(ptr);
                if ( v35 )
                  operator delete(v35);
                if ( v34 )
                  (*(void (**)(void))(*(_DWORD *)v34 + 4))();
              }
              while ( v39 );
            else
                ItemInstance::set((ItemInstance *)&v33, v18);
                v25 = (Level *)BlockSource::getLevel(v30);
                v26 = (Spawner *)Level::getSpawner(v25);
                Spawner::spawnItem(v26, v30, (const ItemInstance *)&v33, 0, (const Vec3 *)&v32, 10);
                ItemInstance::remove((ItemInstance *)&v37, v18);
                (*(void (__fastcall **)(Container *, int, int *))(*(_DWORD *)v4 + 32))(v4, v11, &v37);
                _R7 = Random::nextGaussian(v31);
                  VMOV            S2, R7
                  VSTR            S0, [R6,#0x6C]
                  VSTR            S2, [R6,#0x70]
                  VSTR            S4, [R6,#0x74]
                v18 = v39;
          (*(void (__fastcall **)(Container *, int, void *))(*(_DWORD *)v4 + 32))(v4, v11, &ItemInstance::EMPTY_ITEM);
          (*(void (__fastcall **)(Container *, int))(*(_DWORD *)v4 + 84))(v4, v11);
        }
      }
      if ( v42 )
        operator delete(v42);
      if ( v41 )
        operator delete(v41);
      if ( v38 )
        (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      result = (*(int (__fastcall **)(Container *))(*(_DWORD *)v4 + 44))(v4);
      ++v11;
    while ( v11 < result );
  }
  return result;
}


int __fastcall Container::setContainerMoved(int result)
{
  int v1; // r11@1
  _DWORD *v2; // r5@1
  unsigned int v3; // r7@4
  int v4; // r10@4
  int v5; // r6@4
  _DWORD *v6; // r9@4
  _DWORD *v7; // r0@4
  _DWORD *v8; // r4@5
  int v9; // r1@8
  _DWORD *v10; // r4@11
  int v11; // r8@12
  int v12; // r1@13
  _DWORD *v13; // [sp+0h] [bp-28h]@2

  v1 = result;
  v2 = *(_DWORD **)(result + 16);
  if ( v2 )
  {
    v13 = (_DWORD *)(result + 16);
    while ( 1 )
    {
      result = v2[1];
      if ( result )
        break;
      v10 = (_DWORD *)*v2;
LABEL_19:
      v2 = v10;
      if ( !v10 )
        return result;
    }
    v3 = *(_QWORD *)(v1 + 8) >> 32;
    v4 = *(_QWORD *)(v1 + 8);
    v5 = v2[1] % v3;
    v6 = *(_DWORD **)(v4 + 4 * v5);
    v7 = *(_DWORD **)(v4 + 4 * v5);
    do
      v8 = v7;
      v7 = (_DWORD *)*v7;
    while ( v7 != v2 );
    if ( v6 != v8 )
      if ( *v2 )
      {
        v9 = *(_DWORD *)(*v2 + 4) % v3;
        if ( v9 != v5 )
          *(_DWORD *)(v4 + 4 * v9) = v8;
      }
      goto LABEL_18;
    v11 = *v2;
    if ( *v2 )
      v12 = *(_DWORD *)(v11 + 4) % v3;
      if ( v12 == v5 )
LABEL_18:
        *v8 = *v2;
        v10 = (_DWORD *)*v2;
        operator delete(v2);
        result = *(_DWORD *)(v1 + 20) - 1;
        *(_DWORD *)(v1 + 20) = result;
        goto LABEL_19;
      *(_DWORD *)(v4 + 4 * v12) = v6;
      v4 = *(_DWORD *)(v1 + 8);
      v6 = *(_DWORD **)(v4 + 4 * v5);
    if ( v13 == v6 )
      *v13 = v11;
    *(_DWORD *)(v4 + 4 * v5) = 0;
    goto LABEL_18;
  }
  return result;
}


signed int __fastcall Container::addItem(Container *this, ItemInstance *a2)
{
  Container *v2; // r5@1
  ItemInstance *v3; // r4@1
  signed int result; // r0@1
  int v5; // r8@2
  int v6; // r6@2
  bool v7; // zf@3
  int v8; // r0@8
  bool v9; // zf@8
  __int64 v10; // r0@11
  signed int v11; // r7@14
  unsigned int v12; // r7@16
  unsigned int v13; // r7@17
  char v14; // r0@18
  int v15; // r0@18
  int v16; // [sp+0h] [bp-68h]@8
  int v17; // [sp+8h] [bp-60h]@26
  unsigned __int8 v18; // [sp+Eh] [bp-5Ah]@11
  char v19; // [sp+Fh] [bp-59h]@8
  void *v20; // [sp+24h] [bp-44h]@24
  void *ptr; // [sp+34h] [bp-34h]@22

  v2 = this;
  v3 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 44))();
  if ( result )
  {
    v5 = result - 1;
    v6 = 0;
    do
    {
      result = *((_BYTE *)v3 + 15);
      v7 = result == 0;
      if ( *((_BYTE *)v3 + 15) )
      {
        result = *(_DWORD *)v3;
        v7 = *(_DWORD *)v3 == 0;
      }
      if ( v7 )
        break;
      result = ItemInstance::isNull(v3);
      if ( result )
      result = *((_BYTE *)v3 + 14);
      if ( !*((_BYTE *)v3 + 14) )
      v8 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v2 + 16))(v2, v6);
      ItemInstance::ItemInstance((ItemInstance *)&v16, v8);
      v9 = v19 == 0;
      if ( v19 )
        v9 = v16 == 0;
      if ( v9 )
        goto LABEL_33;
      v10 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v16);
      if ( !v18 )
        HIDWORD(v10) = 1;
      if ( v10 )
LABEL_33:
        (*(void (__fastcall **)(Container *, int, ItemInstance *))(*(_DWORD *)v2 + 32))(v2, v6, v3);
        ItemInstance::set(v3, 0);
        v11 = 1;
      else
        if ( ItemInstance::isStackable((ItemInstance *)&v16, v3) == 1 )
        {
          v12 = v18;
          if ( v12 < ItemInstance::getMaxStackSize((ItemInstance *)&v16) )
          {
            v13 = *((_BYTE *)v3 + 14) + v18;
            if ( v13 <= ItemInstance::getMaxStackSize((ItemInstance *)&v16) )
            {
              ItemInstance::set(v3, 0);
              ItemInstance::set((ItemInstance *)&v16, (unsigned __int8)v13);
            }
            else
              v14 = ItemInstance::getMaxStackSize((ItemInstance *)&v16);
              ItemInstance::set(v3, (unsigned __int8)(v13 - v14));
              v15 = ItemInstance::getMaxStackSize((ItemInstance *)&v16);
              ItemInstance::set((ItemInstance *)&v16, v15);
            (*(void (__fastcall **)(Container *, int, int *))(*(_DWORD *)v2 + 32))(v2, v6, &v16);
          }
        }
        v11 = 0;
      if ( ptr )
        operator delete(ptr);
      if ( v20 )
        operator delete(v20);
      result = v17;
      if ( v17 )
        result = (*(int (**)(void))(*(_DWORD *)v17 + 4))();
      if ( v11 )
      result = v6 + 1;
      v7 = v5 == v6++;
    }
    while ( !v7 );
  }
  return result;
}


signed int __fastcall Container::hasRoomForItem(Container *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  Container *v3; // r5@1
  signed int v4; // r6@4
  int v5; // r9@8
  int v6; // r0@9
  signed int v7; // r7@9
  bool v8; // zf@9
  __int64 v9; // r0@12
  unsigned int v10; // r7@17
  int v12; // [sp+0h] [bp-68h]@9
  int v13; // [sp+8h] [bp-60h]@24
  unsigned __int8 v14; // [sp+Eh] [bp-5Ah]@12
  char v15; // [sp+Fh] [bp-59h]@9
  void *v16; // [sp+24h] [bp-44h]@22
  void *ptr; // [sp+34h] [bp-34h]@20

  v2 = a2;
  v3 = this;
  if ( *((_BYTE *)a2 + 15) )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( ItemInstance::isNull(a2) )
      {
        v4 = 0;
      }
      else if ( *((_BYTE *)v2 + 14) )
        v5 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v3 + 44))(v3);
        if ( v5 )
        {
          while ( 1 )
          {
            v6 = (*(int (__fastcall **)(Container *, signed int))(*(_DWORD *)v3 + 16))(v3, v4);
            ItemInstance::ItemInstance((ItemInstance *)&v12, v6);
            v7 = 1;
            v8 = v15 == 0;
            if ( v15 )
              v8 = v12 == 0;
            if ( !v8 )
            {
              v9 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v12);
              if ( !v14 )
                HIDWORD(v9) = 1;
              if ( v9 )
              {
                v7 = 1;
              }
              else
                v7 = 0;
                if ( ItemInstance::isStackable((ItemInstance *)&v12, v2) == 1 )
                {
                  v10 = v14;
                  if ( v10 < ItemInstance::getMaxStackSize((ItemInstance *)&v12) )
                    v7 = 1;
                }
            }
            if ( ptr )
              operator delete(ptr);
            if ( v16 )
              operator delete(v16);
            if ( v13 )
              (*(void (**)(void))(*(_DWORD *)v13 + 4))();
            if ( v7 )
              break;
            if ( v5 == ++v4 )
              return 0;
          }
          v4 = 1;
        }
      else
    }
    else
      v4 = 0;
  }
  else
    v4 = 0;
  return v4;
}


signed int __fastcall Container::addItemToFirstEmptySlot(Container *this, ItemInstance *a2)
{
  Container *v2; // r5@1
  ItemInstance *v3; // r8@1
  int v4; // r7@1
  int v5; // r6@2
  int v6; // r0@3
  int v7; // r4@3
  int v8; // r0@3
  bool v9; // zf@3
  signed int result; // r0@9

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v2 + 16))(v2, v5);
      v7 = v6;
      v8 = *(_BYTE *)(v6 + 15);
      v9 = v8 == 0;
      if ( v8 )
        v9 = *(_DWORD *)v7 == 0;
      if ( v9 || ItemInstance::isNull((ItemInstance *)v7) || !*(_BYTE *)(v7 + 14) )
        break;
      if ( v4 == ++v5 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(Container *, int, ItemInstance *))(*(_DWORD *)v2 + 32))(v2, v5, v3);
    result = 1;
  }
  else
LABEL_9:
    result = 0;
  return result;
}


int __fastcall Container::setContainerChanged(int result, int a2)
{
  int i; // r5@1

  for ( i = *(_DWORD *)(result + 16); i; i = *(_DWORD *)i )
  {
    result = *(_DWORD *)(i + 4);
    if ( result )
      result = (**(int (***)(void))result)();
  }
  return result;
}


int __fastcall Container::setSizeChanged(int result, int a2)
{
  int i; // r5@1

  for ( i = *(_DWORD *)(result + 44); i; i = *(_DWORD *)i )
  {
    result = *(_DWORD *)(i + 4);
    if ( result )
      result = (**(int (***)(void))result)();
  }
  return result;
}


int *__fastcall Container::setCustomName(int a1, int *a2)
{
  *(_BYTE *)(a1 + 108) = 1;
  return EntityInteraction::setInteractText((int *)(a1 + 104), a2);
}


_DWORD *__fastcall Container::addContentChangeListener(int a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r9@1
  _DWORD *result; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r5@4
  bool v9; // zf@7
  _DWORD *v10; // r0@11

  v2 = a2;
  v3 = a1 + 8;
  v4 = *(_DWORD *)(a1 + 12);
  v5 = a2 % *(_DWORD *)(a1 + 12);
  result = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 4 * v5);
  if ( !result )
    goto LABEL_11;
  v7 = (_DWORD *)*result;
  while ( v7[1] != a2 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      result = v7;
      v7 = (_DWORD *)*v7;
      if ( *(_DWORD *)(v8 + 4) % v4 == v5 )
        continue;
    }
  }
  v9 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v9 = result == 0;
  if ( v9 )
LABEL_11:
    v10 = operator new(8u);
    *v10 = 0;
    v10[1] = v2;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIP30ContainerContentChangeListenerS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
                         v3,
                         v5,
                         v2,
                         (int)v10);
  return result;
}


int __fastcall Container::getSlotCopies(Container *this, int a2)
{
  int v2; // r5@1
  Container *v3; // r4@1
  int v4; // r6@1
  int result; // r0@2
  int v6; // r1@3
  __int64 v7; // kr00_8@3

  v2 = a2;
  v3 = this;
  v4 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  while ( 1 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
    if ( v4 >= result )
      break;
    v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 16))(v2, v4);
    v7 = *(_QWORD *)((char *)v3 + 4);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)v3,
        v6);
      ++v4;
    }
    else
      *((_DWORD *)v3 + 1) = (char *)ItemInstance::ItemInstance((ItemInstance *)v7, v6) + 72;
  }
  return result;
}


void __fastcall Container::~Container(Container *this)
{
  Container::~Container(this);
}


signed int __fastcall Container::canPullOutItem(Container *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  return 1;
}


Container *__fastcall Container::~Container(Container *this)
{
  Container *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  int v5; // r2@2
  int v6; // r3@2
  int v7; // r7@2
  __int64 v8; // kr00_8@2
  int v9; // r12@2
  void *v10; // r0@2
  unsigned int v11; // r6@3
  unsigned int v12; // r1@3
  unsigned int v13; // r7@4
  void *v14; // t1@5
  void *v15; // r0@8
  void *v16; // r5@9
  char *v17; // r0@10
  void *v18; // r0@13
  void *v19; // r5@14
  char *v20; // r0@15
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  int v24; // [sp+4h] [bp-34h]@2
  __int64 v25; // [sp+8h] [bp-30h]@2
  int v26; // [sp+10h] [bp-28h]@2
  int v27; // [sp+14h] [bp-24h]@2
  int v28; // [sp+18h] [bp-20h]@2
  int v29; // [sp+1Ch] [bp-1Ch]@2
  int v30; // [sp+20h] [bp-18h]@2

  v1 = this;
  *(_DWORD *)this = &off_26EC534;
  v2 = *((_DWORD *)this + 26);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 19);
  v5 = *((_DWORD *)v1 + 20);
  v6 = *((_DWORD *)v1 + 21);
  v7 = *((_DWORD *)v1 + 22);
  v8 = *(_QWORD *)((char *)v1 + 92);
  v9 = *((_DWORD *)v1 + 25);
  v27 = *((_DWORD *)v1 + 18);
  v28 = v4;
  v29 = v5;
  v30 = v6;
  v24 = v7;
  v25 = v8;
  v26 = v9;
  std::deque<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>,std::allocator<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>>>::_M_destroy_data_aux(
    (int)v1 + 64,
    (int)&v27,
    (int)&v24);
  v10 = (void *)*((_DWORD *)v1 + 16);
  if ( v10 )
    v11 = *((_DWORD *)v1 + 25);
    v12 = *((_DWORD *)v1 + 21);
    if ( v12 < v11 + 4 )
      v13 = v12 - 4;
      {
        v14 = *(void **)(v13 + 4);
        v13 += 4;
        operator delete(v14);
      }
      while ( v13 < v11 );
      v10 = (void *)*((_DWORD *)v1 + 16);
    operator delete(v10);
  v15 = (void *)*((_DWORD *)v1 + 11);
  if ( v15 )
    do
      v16 = *(void **)v15;
      operator delete(v15);
      v15 = v16;
    while ( v16 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 36), 4 * (*(_QWORD *)((char *)v1 + 36) >> 32));
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  v17 = (char *)*((_DWORD *)v1 + 9);
  if ( v17 && (char *)v1 + 60 != v17 )
    operator delete(v17);
  v18 = (void *)*((_DWORD *)v1 + 4);
  if ( v18 )
      v19 = *(void **)v18;
      operator delete(v18);
      v18 = v19;
    while ( v19 );
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v20 = (char *)*((_DWORD *)v1 + 2);
  if ( v20 && (char *)v1 + 32 != v20 )
    operator delete(v20);
  return v1;
}


int __fastcall Container::getSlots(Container *this, int a2)
{
  Container *v2; // r9@1
  int v3; // r10@1
  char *v4; // r5@1
  int v5; // r6@1
  int result; // r0@3
  int v7; // r4@4
  void *v8; // r8@5
  char *v9; // r7@5
  signed int v10; // r5@5
  unsigned int v11; // r0@5
  unsigned int v12; // r1@7
  unsigned int v13; // r11@7

  v2 = this;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  while ( 1 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3);
    if ( v5 >= result )
      break;
    v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 16))(v3, v5);
    if ( v4 == *((char **)v2 + 2) )
    {
      v8 = *(void **)v2;
      v9 = 0;
      v10 = (signed int)&v4[-*(_DWORD *)v2];
      v11 = v10 >> 2;
      if ( !(v10 >> 2) )
        v11 = 1;
      v12 = v11 + (v10 >> 2);
      v13 = v11 + (v10 >> 2);
      if ( 0 != v12 >> 30 )
        v13 = 0x3FFFFFFF;
      if ( v12 < v11 )
      if ( v13 )
      {
        if ( v13 >= 0x40000000 )
          sub_21E57F4();
        v9 = (char *)operator new(4 * v13);
      }
      *(_DWORD *)&v9[v10] = v7;
      if ( v10 >> 2 )
        _aeabi_memmove4(v9, v8);
      v4 = &v9[v10 + 4];
      if ( v8 )
        operator delete(v8);
      *(_DWORD *)v2 = v9;
      *((_DWORD *)v2 + 1) = v4;
      *((_DWORD *)v2 + 2) = &v9[4 * v13];
      ++v5;
    }
    else
      *(_DWORD *)v4 = v7;
      v4 = (char *)(*((_DWORD *)v2 + 1) + 4);
  }
  return result;
}


int __fastcall Container::triggerTransactionChange(Container *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  const ItemInstance *v4; // r11@1
  int v5; // r8@1
  Container *v6; // r9@1
  int result; // r0@1
  int v8; // r6@2
  int v9; // r5@2
  int v10; // r4@2
  int v11; // [sp+8h] [bp-28h]@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  result = ItemInstance::operator==(a3, a4);
  if ( !result )
  {
    v8 = *((_DWORD *)v6 + 18);
    result = *((_QWORD *)v6 + 10) >> 32;
    v9 = *((_QWORD *)v6 + 10);
    v10 = *((_DWORD *)v6 + 22);
    v11 = *((_QWORD *)v6 + 10) >> 32;
    while ( v8 != v10 )
    {
      if ( !*(_DWORD *)(v8 + 8) )
        sub_21E5F48();
      result = (*(int (__fastcall **)(int, Container *, int, const ItemInstance *))(v8 + 12))(v8, v6, v5, v4);
      v8 += 16;
      if ( v8 == v9 )
      {
        result = v11 + 4;
        v8 = *(_DWORD *)(v11 + 4);
        v11 += 4;
        v9 = v8 + 512;
      }
    }
  }
  return result;
}


void __fastcall Container::addAdditionalSaveData(Container *this, CompoundTag *a2)
{
  Container *v2; // r5@1
  CompoundTag *v3; // r4@1
  void *v4; // r6@1
  int v5; // r7@1
  int v6; // r9@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // r0@11
  int v10; // r8@11
  int v11; // r0@11
  bool v12; // zf@11
  int v13; // r4@16
  void *v14; // r0@16
  int v15; // r0@17
  void *v16; // r0@24
  void *v17; // r0@26
  void *v18; // r0@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  unsigned int *v21; // r2@33
  signed int v22; // r1@35
  unsigned int *v23; // r2@37
  signed int v24; // r1@39
  int v25; // [sp+8h] [bp-58h]@1
  int v26; // [sp+10h] [bp-50h]@27
  int v27; // [sp+18h] [bp-48h]@26
  void *v28; // [sp+1Ch] [bp-44h]@22
  int v29; // [sp+24h] [bp-3Ch]@22
  int v30; // [sp+28h] [bp-38h]@17
  int v31; // [sp+30h] [bp-30h]@3
  int v32; // [sp+34h] [bp-2Ch]@16

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  ListTag::ListTag((int)v4);
  v25 = (int)v3;
  v5 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v2 + 44))(v2);
  if ( v5 >= 1 )
  {
    v6 = 0;
    do
    {
      v9 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v2 + 16))(v2, v6);
      v10 = v9;
      v11 = *(_BYTE *)(v9 + 15);
      v12 = v11 == 0;
      if ( v11 )
        v12 = *(_DWORD *)v10 == 0;
      if ( !v12 && !ItemInstance::isNull((ItemInstance *)v10) && *(_BYTE *)(v10 + 14) )
      {
        ItemInstance::save((ItemInstance *)&v32, (ItemInstance *)v10);
        v13 = v32;
        sub_21E94B4((void **)&v31, "Slot");
        CompoundTag::putByte(v13, (const void **)&v31, v6);
        v14 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
        {
          v7 = (unsigned int *)(v31 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v15 = v32;
        v32 = 0;
        v30 = v15;
        ListTag::add((int)v4, &v30);
        if ( v30 )
          (*(void (**)(void))(*(_DWORD *)v30 + 4))();
        v30 = 0;
        if ( v32 )
          (*(void (**)(void))(*(_DWORD *)v32 + 4))();
      }
      ++v6;
    }
    while ( v6 < v5 );
  }
  sub_21E94B4((void **)&v29, "Items");
  v28 = v4;
  CompoundTag::put(v25, (const void **)&v29, (int *)&v28);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v28 = 0;
  v16 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( *(_DWORD *)(*((_DWORD *)v2 + 26) - 12) )
    sub_21E94B4((void **)&v27, "CustomName");
    CompoundTag::putString(v25, (const void **)&v27, (int *)v2 + 26);
    v17 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v26, "HasCustomName");
  CompoundTag::putBoolean(v25, (const void **)&v26, *((_BYTE *)v2 + 108));
  v18 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}


signed int __fastcall Container::removeItem(Container *this, int a2, int a3)
{
  Container *v3; // r5@1
  signed int v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r7@1
  signed int result; // r0@1
  bool v9; // zf@1
  int v10; // r0@7
  ItemInstance *v11; // r0@7
  int v12; // [sp+0h] [bp-60h]@7
  int v13; // [sp+8h] [bp-58h]@11
  void *v14; // [sp+24h] [bp-3Ch]@9
  void *ptr; // [sp+34h] [bp-2Ch]@7

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (*(int (**)(void))(*(_DWORD *)this + 16))();
  v7 = v6;
  result = *(_BYTE *)(v6 + 15);
  v9 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)v7;
    v9 = *(_DWORD *)v7 == 0;
  }
  if ( !v9 )
    result = ItemInstance::isNull((ItemInstance *)v7);
    if ( !result )
    {
      result = *(_BYTE *)(v7 + 14);
      if ( *(_BYTE *)(v7 + 14) )
      {
        if ( *(_BYTE *)((*(int (__fastcall **)(Container *, int))(*(_DWORD *)v3 + 16))(v3, v5) + 14) <= v4 )
        {
          result = (*(int (__fastcall **)(Container *, int, void *))(*(_DWORD *)v3 + 32))(
                     v3,
                     v5,
                     &ItemInstance::EMPTY_ITEM);
        }
        else
          v10 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v3 + 16))(v3, v5);
          v11 = ItemInstance::ItemInstance((ItemInstance *)&v12, v10);
          ItemInstance::remove(v11, v4);
          (*(void (__fastcall **)(Container *, int, int *))(*(_DWORD *)v3 + 32))(v3, v5, &v12);
          if ( ptr )
            operator delete(ptr);
          if ( v14 )
            operator delete(v14);
          result = v13;
          if ( v13 )
            result = (*(int (**)(void))(*(_DWORD *)v13 + 4))();
      }
    }
  return result;
}


int __fastcall Container::getRedstoneSignalFromContainer(Container *this)
{
  Container *v1; // r4@1
  int v2; // r0@1
  int v6; // r8@1
  int v7; // r5@2
  int v8; // r0@3
  int v9; // r6@3
  int v10; // r0@3
  int v13; // r0@8
  int v14; // r9@8
  float v19; // r1@12
  int result; // r0@12

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  __asm { VLDR            S16, =0.0 }
  v6 = 0;
  if ( v2 >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v1 + 16))(v1, v7);
      v9 = v8;
      v10 = *(_BYTE *)(v8 + 15);
      _ZF = v10 == 0;
      if ( v10 )
        _ZF = *(_DWORD *)v9 == 0;
      if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v9) )
      {
        _R7 = *(_BYTE *)(v9 + 14);
        if ( *(_BYTE *)(v9 + 14) )
        {
          v13 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v1 + 48))(v1);
          __asm { VMOV            S0, R7 }
          v14 = v13;
          __asm { VCVT.F32.U32    S18, S0 }
          _R0 = ItemInstance::getMaxStackSize((ItemInstance *)v9);
          ++v6;
          if ( _R0 > v14 )
            _R0 = v14;
          __asm
          {
            VMOV            S0, R0
            VCVT.F32.S32    S0, S0
            VDIV.F32        S0, S18, S0
            VADD.F32        S16, S0, S16
          }
        }
      }
      ++v7;
    }
    while ( v7 < (*(int (__fastcall **)(Container *))(*(_DWORD *)v1 + 44))(v1) );
  }
  _R0 = (*(int (__fastcall **)(Container *))(*(_DWORD *)v1 + 44))(v1);
  __asm
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VDIV.F32        S0, S16, S0
  _R0 = 14;
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  result = mce::Math::floor(_R0, v19);
  if ( v6 > 0 )
    ++result;
  return result;
}


unsigned int __fastcall Container::removeContentChangeListener(int a1, unsigned int a2)
{
  int v2; // r9@1
  unsigned int v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  unsigned int result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 12);
  v5 = a2;
  v6 = *(_DWORD *)(v2 + 8);
  v20 = *(_DWORD *)(v2 + 8);
  v8 = a2 % v4;
  result = v5 / v4;
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (unsigned int)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = v13 / v4;
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          operator delete(v15);
          result = *(_DWORD *)(v2 + 20) - 1;
          *(_DWORD *)(v2 + 20) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *(_DWORD *)(v2 + 8);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)(v2 + 16) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


unsigned int __fastcall Container::removeSizeChangeListener(int a1, unsigned int a2)
{
  int v2; // r9@1
  unsigned int v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  unsigned int result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = a2;
  v6 = *(_DWORD *)(v2 + 36);
  v20 = *(_DWORD *)(v2 + 36);
  v8 = a2 % v4;
  result = v5 / v4;
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (unsigned int)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = v13 / v4;
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          operator delete(v15);
          result = *(_DWORD *)(v2 + 48) - 1;
          *(_DWORD *)(v2 + 48) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *(_DWORD *)(v2 + 36);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)(v2 + 44) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


int __fastcall Container::Container(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  unsigned int v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_26EC534;
  *(_BYTE *)(LODWORD(a1) + 4) = BYTE4(a1);
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  *(_DWORD *)(LODWORD(a1) + 24) = 1065353216;
  LODWORD(a1) += 24;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v1 + 12) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 32) = 0;
    v4 = (void *)(v1 + 32);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 8) = v4;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 1065353216;
  LODWORD(v2) = v1 + 52;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = sub_21E6254(v2);
  *(_DWORD *)(v1 + 40) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 60) = 0;
    v7 = (void *)(v1 + 60);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v1 + 36) = v7;
  _aeabi_memclr4(v1 + 64, 40);
  std::_Deque_base<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>,std::allocator<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>>>::_M_initialize_map(
    v1 + 64,
    0);
  sub_21E94B4((void **)(v1 + 104), (const char *)&unk_257BC67);
  *(_BYTE *)(v1 + 108) = 0;
  return v1;
}


void __fastcall Container::readAdditionalSaveData(Container *this, const CompoundTag *a2)
{
  Container::readAdditionalSaveData(this, a2);
}


int __fastcall Container::getItemCount(Container *this, int a2, int a3)
{
  Container *v3; // r5@1
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r6@1
  int v7; // r4@2
  int v8; // r0@3
  int v9; // r7@3
  int v10; // r0@3
  bool v11; // zf@3
  int v12; // r0@12
  int v13; // r7@12
  int v14; // r0@12
  bool v15; // zf@12

  v3 = this;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( (*(int (**)(void))(*(_DWORD *)this + 44))() >= 1 )
  {
    v7 = 0;
    if ( v5 == 0x7FFF )
    {
      do
      {
        v8 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v3 + 16))(v3, v7);
        v9 = v8;
        v10 = *(_BYTE *)(v8 + 15);
        v11 = v10 == 0;
        if ( v10 )
          v11 = *(_DWORD *)v9 == 0;
        if ( !v11
          && !ItemInstance::isNull((ItemInstance *)v9)
          && *(_BYTE *)(v9 + 14)
          && ItemInstance::getId((ItemInstance *)v9) == v4 )
        {
          v6 += *(_BYTE *)(v9 + 14);
        }
        ++v7;
      }
      while ( v7 < (*(int (__fastcall **)(Container *))(*(_DWORD *)v3 + 44))(v3) );
    }
    else
        v12 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)v3 + 16))(v3, v7);
        v13 = v12;
        v14 = *(_BYTE *)(v12 + 15);
        v15 = v14 == 0;
        if ( v14 )
          v15 = *(_DWORD *)v13 == 0;
        if ( !v15
          && !ItemInstance::isNull((ItemInstance *)v13)
          && *(_BYTE *)(v13 + 14)
          && ItemInstance::getId((ItemInstance *)v13) == v4
          && ItemInstance::getAuxValue((ItemInstance *)v13) == v5 )
          v6 += *(_BYTE *)(v13 + 14);
  }
  return v6;
}


void __fastcall Container::addAdditionalSaveData(Container *this, CompoundTag *a2)
{
  Container::addAdditionalSaveData(this, a2);
}


int __fastcall Container::createTransactionContext(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r7@1
  int v6; // r6@1
  void (__fastcall *v7)(int); // r3@2
  int v8; // r0@7
  void (*v9)(void); // r3@8
  int result; // r0@10
  void (*v11)(void); // r3@11
  int v12; // r0@13

  v3 = a1;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = a2;
  if ( v5 == *(_QWORD *)(a1 + 72) >> 32 )
  {
    std::deque<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>,std::allocator<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)>>>::_M_push_front_aux<std::function<void ()(Container &,int,ItemInstance const&,ItemInstance const&)> const&>(
      a1 + 64,
      a2);
  }
  else
    *(_DWORD *)(v5 - 8) = 0;
    v7 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v7 )
    {
      v7(v5 - 16);
      *(_DWORD *)(v5 - 4) = *(_DWORD *)(v6 + 12);
      *(_DWORD *)(v5 - 8) = *(_DWORD *)(v6 + 8);
      v5 = *(_DWORD *)(v3 + 72);
    }
    *(_DWORD *)(v3 + 72) = v5 - 16;
  if ( !*(_DWORD *)(v4 + 8) )
    sub_21E5F48();
  (*(void (__fastcall **)(int))(v4 + 12))(v4);
  v8 = *(_DWORD *)(v3 + 72);
  if ( v8 == *(_DWORD *)(v3 + 80) - 16 )
    v11 = *(void (**)(void))(v8 + 8);
    if ( v11 )
      v11();
    operator delete(*(void **)(v3 + 76));
    v12 = *(_DWORD *)(v3 + 84);
    *(_DWORD *)(v3 + 84) = v12 + 4;
    result = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v3 + 76) = result;
    *(_DWORD *)(v3 + 80) = result + 512;
    *(_DWORD *)(v3 + 72) = result;
    v9 = *(void (**)(void))(v8 + 8);
    if ( v9 )
      v9();
      v8 = *(_DWORD *)(v3 + 72);
    result = v8 + 16;
  return result;
}
