

int __fastcall ContainerModel::_onItemChanged(ContainerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  ContainerModel *v4; // r8@1
  const ItemInstance *v5; // r9@1
  __int64 v6; // r4@1
  const ItemInstance *v7; // r10@1
  int i; // r7@1

  v4 = this;
  v5 = a4;
  v6 = *((_QWORD *)this + 5);
  v7 = a3;
  for ( i = a2; HIDWORD(v6) != (_DWORD)v6; LODWORD(v6) = v6 + 16 )
  {
    if ( !*(_DWORD *)(v6 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(_DWORD, int, const ItemInstance *, const ItemInstance *))(v6 + 12))(v6, i, v7, v5);
  }
  return (*(int (__fastcall **)(ContainerModel *))(*(_DWORD *)v4 + 72))(v4);
}


int __fastcall ContainerModel::_notifyPlayer(int result, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  if ( *(_DWORD *)(result + 60) )
    result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(result + 64))(result + 52, a2, a3, a4);
  return result;
}


signed int __fastcall ContainerModel::isValid(ContainerModel *this)
{
  return 1;
}


int __fastcall ContainerModel::_init(ContainerModel *this)
{
  ContainerModel *v1; // r9@1
  int v2; // r5@1
  int *v3; // r11@1
  int v4; // r4@1
  unsigned int v5; // r10@1
  int result; // r0@1
  int v7; // r6@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  unsigned int v11; // r1@11
  __int64 v12; // r0@12
  int v13; // r4@14
  int v14; // r7@15
  void *v15; // r0@16
  void *v16; // r0@18

  v1 = this;
  v3 = (int *)((char *)this + 16);
  v2 = *((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 5);
  v5 = 954437177 * ((v4 - v2) >> 3);
  result = *((_DWORD *)this + 4);
  if ( v4 != v2 )
  {
    v7 = v2;
    do
    {
      v8 = *(void **)(v7 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    }
    while ( v4 != v7 );
    result = *v3;
  }
  *((_DWORD *)v1 + 5) = v2;
  v11 = 954437177 * ((v2 - result) >> 3);
  if ( v5 <= v11 )
    if ( v5 < v11 )
      v13 = result + 8 * ((v4 - v2) >> 3);
      if ( v2 != v13 )
      {
        v14 = result + 72 * v5;
        do
        {
          v15 = *(void **)(v14 + 52);
          if ( v15 )
            operator delete(v15);
          v16 = *(void **)(v14 + 36);
          if ( v16 )
            operator delete(v16);
          result = *(_DWORD *)(v14 + 8);
          if ( result )
            result = (*(int (**)(void))(*(_DWORD *)result + 4))();
          *(_DWORD *)(v14 + 8) = 0;
          v14 += 72;
        }
        while ( v2 != v14 );
      }
      *((_DWORD *)v1 + 5) = v13;
  else
    HIDWORD(v12) = v5 - v11;
    LODWORD(v12) = v3;
    result = j_j_j__ZNSt6vectorI12ItemInstanceSaIS0_EE17_M_default_appendEj_0(v12);
  return result;
}


int __fastcall ContainerModel::isExpanableItemFiltered(ContainerModel *this, int a2)
{
  return 0;
}


int __fastcall ContainerModel::ContainerModel(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r9@1
  unsigned int v5; // r7@1
  unsigned int v6; // r5@1
  int v7; // r10@1
  int v8; // r11@3
  int v9; // r0@3
  int v10; // r8@4
  int v11; // r4@4
  bool v12; // zf@5
  int v13; // r5@8
  bool v14; // zf@11
  _DWORD *v15; // r0@15
  int v17; // [sp+4h] [bp-2Ch]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  *(_DWORD *)a1 = &off_26ED434;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v7 = a1 + 4;
  *(_DWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 4) = a2;
  *(_DWORD *)(v7 + 8) = a4;
  v17 = a1 + 16;
  _aeabi_memclr4(a1 + 16, 36);
  if ( v6 )
  {
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_default_append(__PAIR__(v6, v17));
    v5 = *(_DWORD *)(v4 + 8);
  }
  v8 = v5 % dword_27FAEB8;
  v9 = *(_DWORD *)(dword_27FAEB4 + 4 * (v5 % dword_27FAEB8));
  if ( !v9 )
    goto LABEL_15;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
    v12 = v11 == v5;
    if ( v11 == v5 )
      v12 = v5 == *(_DWORD *)(v10 + 4);
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27FAEB8 == v8 )
        continue;
    }
  v14 = v9 == 0;
  if ( v9 )
    v9 = *(_DWORD *)v9;
    v14 = v9 == 0;
  if ( v14 )
LABEL_15:
    v15 = operator new(0x10u);
    *v15 = 0;
    v15[1] = *(_DWORD *)(v4 + 8);
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27FAEB4,
           v8,
           v5,
           (int)v15);
  EntityInteraction::setInteractText((int *)v7, (int *)(v9 + 8));
  ContainerModel::_init((ContainerModel *)v4);
  return v4;
}


int __fastcall ContainerModel::getItemExpandStatus(ContainerModel *this, int a2)
{
  return 0;
}


int __fastcall ContainerModel::isItemFiltered(ContainerModel *this, const ItemInstance *a2)
{
  return 0;
}


int __fastcall ContainerModel::getItemCount(ContainerModel *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r5@1
  bool v8; // zf@3
  bool v9; // zf@12

  v3 = *((_QWORD *)this + 2) >> 32;
  v4 = *((_QWORD *)this + 2);
  v5 = a3;
  v6 = a2;
  v7 = 0;
  if ( v4 != v3 )
  {
    if ( a3 == 0x7FFF )
    {
      do
      {
        v8 = *(_BYTE *)(v4 + 15) == 0;
        if ( *(_BYTE *)(v4 + 15) )
          v8 = *(_DWORD *)v4 == 0;
        if ( !v8
          && !ItemInstance::isNull((ItemInstance *)v4)
          && *(_BYTE *)(v4 + 14)
          && ItemInstance::getId((ItemInstance *)v4) == v6 )
        {
          ItemInstance::getAuxValue((ItemInstance *)v4);
          v7 += *(_BYTE *)(v4 + 14);
        }
        v4 += 72;
      }
      while ( v3 != v4 );
    }
    else
        v9 = *(_BYTE *)(v4 + 15) == 0;
          v9 = *(_DWORD *)v4 == 0;
        if ( !v9
          && ItemInstance::getId((ItemInstance *)v4) == v6
          && ItemInstance::getAuxValue((ItemInstance *)v4) == v5 )
  }
  return v7;
}


char *__fastcall ContainerModel::getItems(ContainerModel *this)
{
  return (char *)this + 16;
}


void *__fastcall ContainerModel::getItem(ContainerModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  void *result; // r0@3

  if ( a2 < 0 )
  {
    result = &ItemInstance::EMPTY_ITEM;
  }
  else
    v2 = *((_QWORD *)this + 2);
    if ( 954437177 * ((HIDWORD(v2) - (signed int)v2) >> 3) <= a2 )
      result = &ItemInstance::EMPTY_ITEM;
    else
      result = (void *)(v2 + 72 * a2);
  return result;
}


char *__fastcall ContainerModel::registerOnContainerChangedCallback(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  char *result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 44);
  if ( v4 == *(_QWORD *)(a1 + 44) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFviRK12ItemInstanceS3_EESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(
               (_QWORD *)(a1 + 40),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 44);
    }
    result = (char *)(v4 + 16);
    *(_DWORD *)(v2 + 44) = v4 + 16;
  return result;
}


int __fastcall ContainerModel::networkUpdateItem(__int64 this, const ItemInstance *a2, const ItemInstance *a3)
{
  int v3; // r6@1
  const ItemInstance *v4; // r4@1
  const ItemInstance *v5; // r8@1
  int v6; // r7@1

  v3 = HIDWORD(this);
  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( SHIDWORD(this) >= 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( 954437177 * ((HIDWORD(this) - (signed int)this) >> 3) > v3 )
    {
      LODWORD(this) = ItemInstance::matches((ItemInstance *)(this + 72 * v3), a3);
      if ( !(_DWORD)this )
      {
        ItemInstance::operator=(*(_DWORD *)(v6 + 16) + 72 * v3, (int)v4);
        LODWORD(this) = (*(int (__fastcall **)(int, int, const ItemInstance *, const ItemInstance *))(*(_DWORD *)v6 + 68))(
                          v6,
                          v3,
                          v5,
                          v4);
      }
    }
  }
  return this;
}


void __fastcall ContainerModel::~ContainerModel(ContainerModel *this)
{
  ContainerModel *v1; // r0@1

  v1 = ContainerModel::~ContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


char *__fastcall ContainerModel::getContainerStringName(ContainerModel *this)
{
  return (char *)this + 4;
}


const void **__fastcall ContainerModel::getItemGroupName(ContainerModel *this, int a2)
{
  return &Util::EMPTY_STRING;
}


int __fastcall ContainerModel::setItem(ContainerModel *this, int a2, const ItemInstance *a3)
{
  ContainerModel *v3; // r6@1
  int v4; // r5@1
  int v5; // r7@1
  const ItemInstance *v6; // r4@1
  ItemInstance *v7; // r0@1
  int result; // r0@9
  int v9; // [sp+0h] [bp-60h]@1
  int v10; // [sp+8h] [bp-58h]@9
  void *v11; // [sp+24h] [bp-3Ch]@7
  void *ptr; // [sp+34h] [bp-2Ch]@5

  v3 = this;
  v4 = a2;
  v5 = 9 * a2;
  v6 = a3;
  v7 = ItemInstance::ItemInstance((ItemInstance *)&v9, *((_DWORD *)this + 4) + 72 * a2);
  if ( !ItemInstance::matches(v7, v6) )
  {
    ItemInstance::operator=(*((_DWORD *)v3 + 4) + 8 * v5, (int)v6);
    if ( *((_DWORD *)v3 + 15) )
      (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))v3 + 16))((char *)v3 + 52, v4, &v9, v6);
    (*(void (__fastcall **)(ContainerModel *, int, int *, const ItemInstance *))(*(_DWORD *)v3 + 68))(v3, v4, &v9, v6);
  }
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  result = v10;
  if ( v10 )
    result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  return result;
}


void __fastcall ContainerModel::~ContainerModel(ContainerModel *this)
{
  ContainerModel::~ContainerModel(this);
}


int __fastcall ContainerModel::resize(__int64 this)
{
  int v1; // r4@1
  int v2; // r2@1
  int v3; // t1@1
  int v4; // r5@1
  unsigned int v5; // r3@1
  int v6; // r8@4
  int v7; // r6@5
  void *v8; // r0@6
  void *v9; // r0@8

  v1 = this;
  v3 = *(_DWORD *)(this + 16);
  LODWORD(this) = this + 16;
  v2 = v3;
  v4 = *(_DWORD *)(this + 4);
  v5 = 954437177 * ((v4 - v3) >> 3);
  if ( v5 >= HIDWORD(this) )
  {
    if ( v5 > HIDWORD(this) )
    {
      LODWORD(this) = 9 * HIDWORD(this);
      v6 = v2 + 72 * HIDWORD(this);
      if ( v4 != v6 )
      {
        v7 = v2 + 72 * HIDWORD(this);
        do
        {
          v8 = *(void **)(v7 + 52);
          if ( v8 )
            operator delete(v8);
          v9 = *(void **)(v7 + 36);
          if ( v9 )
            operator delete(v9);
          LODWORD(this) = *(_DWORD *)(v7 + 8);
          if ( (_DWORD)this )
            LODWORD(this) = (*(int (**)(void))(*(_DWORD *)this + 4))();
          *(_DWORD *)(v7 + 8) = 0;
          v7 += 72;
        }
        while ( v4 != v7 );
      }
      *(_DWORD *)(v1 + 20) = v6;
    }
  }
  else
    HIDWORD(this) -= v5;
    LODWORD(this) = j_j_j__ZNSt6vectorI12ItemInstanceSaIS0_EE17_M_default_appendEj_0(this);
  return this;
}


ContainerModel *__fastcall ContainerModel::~ContainerModel(ContainerModel *this)
{
  ContainerModel *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3 OVERLAPPED
  int v4; // r6@3 OVERLAPPED
  void (__fastcall *v5)(int, int, signed int); // r3@4
  int v6; // r5@10 OVERLAPPED
  int v7; // r6@10 OVERLAPPED
  void *v8; // r0@11
  void *v9; // r0@13
  int v10; // r0@15
  int v11; // r5@21 OVERLAPPED
  int v12; // r6@21 OVERLAPPED
  void *v13; // r0@22
  void *v14; // r0@24
  int v15; // r0@26
  int v16; // r1@32
  void *v17; // r0@32
  unsigned int *v19; // r2@34
  signed int v20; // r1@36

  v1 = this;
  *(_DWORD *)this = &off_26ED434;
  v2 = (void (*)(void))*((_DWORD *)this + 15);
  if ( v2 )
    v2();
  *(_QWORD *)&v3 = *((_QWORD *)v1 + 5);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *(void (__fastcall **)(int, int, signed int))(v3 + 8);
      if ( v5 )
        v5(v3, v3, 3);
      v3 += 16;
    }
    while ( v4 != v3 );
    v3 = *((_DWORD *)v1 + 10);
  }
  if ( v3 )
    operator delete((void *)v3);
  *(_QWORD *)&v6 = *(_QWORD *)((char *)v1 + 28);
  if ( v6 != v7 )
      v8 = *(void **)(v6 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v6 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v6 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v6 + 8) = 0;
      v6 += 72;
    while ( v7 != v6 );
    v6 = *((_DWORD *)v1 + 7);
  if ( v6 )
    operator delete((void *)v6);
  *(_QWORD *)&v11 = *((_QWORD *)v1 + 2);
  if ( v11 != v12 )
      v13 = *(void **)(v11 + 52);
      if ( v13 )
        operator delete(v13);
      v14 = *(void **)(v11 + 36);
      if ( v14 )
        operator delete(v14);
      v15 = *(_DWORD *)(v11 + 8);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      *(_DWORD *)(v11 + 8) = 0;
      v11 += 72;
    while ( v12 != v11 );
    v11 = *((_DWORD *)v1 + 4);
  if ( v11 )
    operator delete((void *)v11);
  v16 = *((_DWORD *)v1 + 1);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  return v1;
}


int __fastcall ContainerModel::getItemCount(ContainerModel *this, int a2)
{
  __int64 v2; // r6@1
  int v3; // r5@1
  int i; // r4@1

  v2 = *((_QWORD *)this + 2);
  v3 = a2;
  for ( i = 0; HIDWORD(v2) != (_DWORD)v2; LODWORD(v2) = v2 + 72 )
  {
    if ( !ItemInstance::isNull((ItemInstance *)v2) && ItemInstance::getId((ItemInstance *)v2) == v3 )
      i += *(_BYTE *)(v2 + 14);
  }
  return i;
}


char *__fastcall ContainerModel::getComplexItems(ContainerModel *this)
{
  return (char *)this + 28;
}


int __fastcall ContainerModel::registerPlayerNotificationCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 52;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 52);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 60);
  v10 = v13;
  *(_DWORD *)(v4 + 60) = v8;
  v14 = *(_DWORD *)(v4 + 64);
  *(_DWORD *)(v4 + 64) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}
