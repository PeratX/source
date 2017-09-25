

void __fastcall ComplexInventoryTransaction::~ComplexInventoryTransaction(ComplexInventoryTransaction *this)
{
  ComplexInventoryTransaction::~ComplexInventoryTransaction(this);
}


int __fastcall ComplexInventoryTransaction::fromType(_DWORD *a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r5@1
  _DWORD *v5; // r4@1
  void *v6; // r0@2
  void *v7; // r6@2
  int result; // r0@2
  void *v9; // r0@3
  int v10; // [sp+0h] [bp-20h]@7

  v3 = a2;
  v4 = a3;
  v5 = a1;
  switch ( a2 )
  {
    case 0:
    case 1:
      v6 = operator new(0x30u);
      v7 = v6;
      *(_DWORD *)v6 = &off_2700C2C;
      *((_DWORD *)v6 + 1) = v3;
      *((_DWORD *)v6 + 2) = 0;
      *((_DWORD *)v6 + 3) = *(_DWORD *)(v4 + 4);
      *((_DWORD *)v6 + 4) = 0;
      *((_DWORD *)v6 + 5) = *(_DWORD *)(v4 + 12);
      *((_QWORD *)v6 + 3) = *(_QWORD *)(v4 + 16);
      std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,true> const*)#1}>(
        (unsigned int *)v6 + 2,
        v4);
      result = std::vector<InventoryTransactionItemGroup,std::allocator<InventoryTransactionItemGroup>>::vector(
                 (int)v7 + 36,
                 (unsigned __int64 *)(v4 + 28));
      goto LABEL_6;
    case 2:
      v7 = operator new(0xA8u);
      result = ItemUseInventoryTransaction::ItemUseInventoryTransaction((int)v7, v4);
    case 3:
      v7 = operator new(0xA0u);
      result = ItemUseOnEntityInventoryTransaction::ItemUseOnEntityInventoryTransaction((int)v7, v4);
    case 4:
      std::make_unique<ItemReleaseInventoryTransaction,InventoryTransaction const&>(&v10, a3);
      *v5 = v10;
      result = 0;
      break;
    default:
      v9 = operator new(0x30u);
      v7 = v9;
      *(_DWORD *)v9 = &off_2700C2C;
      *((_DWORD *)v9 + 1) = v3;
      *((_DWORD *)v9 + 2) = 0;
      *((_DWORD *)v9 + 3) = *(_DWORD *)(v4 + 4);
      *((_DWORD *)v9 + 4) = 0;
      *((_DWORD *)v9 + 5) = *(_DWORD *)(v4 + 12);
      *((_QWORD *)v9 + 3) = *(_QWORD *)(v4 + 16);
        (unsigned int *)v9 + 2,
LABEL_6:
      *v5 = v7;
  }
  return result;
}


int __fastcall ComplexInventoryTransaction::fromType(_DWORD *a1, int a2)
{
  int v2; // r6@1
  _DWORD *v3; // r4@1
  double v4; // r0@2
  void *v5; // r5@2
  unsigned int v6; // r0@2
  int v7; // r7@4
  void *v8; // r6@4
  double v9; // r0@5
  unsigned int v10; // r0@5
  int result; // r0@9

  v2 = a2;
  v3 = a1;
  switch ( a2 )
  {
    case 0:
    case 1:
      LODWORD(v4) = operator new(0x30u);
      v5 = (void *)LODWORD(v4);
      *(_DWORD *)LODWORD(v4) = &off_2700C2C;
      *(_DWORD *)(LODWORD(v4) + 4) = v2;
      *(_DWORD *)(LODWORD(v4) + 16) = 0;
      *(_DWORD *)(LODWORD(v4) + 20) = 0;
      *(_DWORD *)(LODWORD(v4) + 24) = 1065353216;
      LODWORD(v4) += 24;
      *((_DWORD *)v5 + 7) = 0;
      v6 = sub_21E6254(v4);
      *((_DWORD *)v5 + 3) = v6;
      if ( v6 == 1 )
        goto LABEL_14;
      if ( v6 >= 0x40000000 )
        sub_21E57F4();
      v7 = 4 * v6;
      v8 = operator new(4 * v6);
      goto LABEL_8;
    case 2:
      v5 = operator new(0xA8u);
      result = ItemUseInventoryTransaction::ItemUseInventoryTransaction((ItemUseInventoryTransaction *)v5);
      break;
    case 3:
      v5 = operator new(0xA0u);
      result = ItemUseOnEntityInventoryTransaction::ItemUseOnEntityInventoryTransaction((ItemUseOnEntityInventoryTransaction *)v5);
    case 4:
      v5 = operator new(0x90u);
      result = ItemReleaseInventoryTransaction::ItemReleaseInventoryTransaction((ItemReleaseInventoryTransaction *)v5);
    default:
      LODWORD(v9) = operator new(0x30u);
      v5 = (void *)LODWORD(v9);
      *(_DWORD *)LODWORD(v9) = &off_2700C2C;
      *(_DWORD *)(LODWORD(v9) + 4) = v2;
      *(_DWORD *)(LODWORD(v9) + 16) = 0;
      *(_DWORD *)(LODWORD(v9) + 20) = 0;
      *(_DWORD *)(LODWORD(v9) + 24) = 1065353216;
      LODWORD(v9) += 24;
      v10 = sub_21E6254(v9);
      *((_DWORD *)v5 + 3) = v10;
      if ( v10 == 1 )
      {
LABEL_14:
        *((_DWORD *)v5 + 8) = 0;
        v8 = (char *)v5 + 32;
      }
      else
        if ( v10 >= 0x40000000 )
          sub_21E57F4();
        v7 = 4 * v10;
        v8 = operator new(4 * v10);
LABEL_8:
        _aeabi_memclr4(v8, v7);
      result = 0;
      *((_DWORD *)v5 + 2) = v8;
      *((_DWORD *)v5 + 9) = 0;
      *((_DWORD *)v5 + 10) = 0;
      *((_DWORD *)v5 + 11) = 0;
  }
  *v3 = v5;
  return result;
}


void __fastcall ComplexInventoryTransaction::~ComplexInventoryTransaction(ComplexInventoryTransaction *this)
{
  ComplexInventoryTransaction *v1; // r4@1
  char *v2; // r8@1
  __int64 v3; // r6@1
  int v4; // r0@2
  char *v5; // r0@8

  v1 = this;
  v2 = (char *)this + 8;
  *(_DWORD *)this = &off_2700C2C;
  v3 = *(_QWORD *)((char *)this + 36);
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
        (*(void (**)(void))(*(_DWORD *)v4 + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      LODWORD(v3) = v3 + 20;
    }
    while ( HIDWORD(v3) != (_DWORD)v3 );
    LODWORD(v3) = *((_DWORD *)v1 + 9);
  }
  if ( (_DWORD)v3 )
    operator delete((void *)v3);
  std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v2);
  v5 = (char *)*((_DWORD *)v1 + 2);
  if ( v5 && (char *)v1 + 32 != v5 )
    operator delete(v5);
  j_j_j__ZdlPv_6((void *)v1);
}


InventoryTransaction *__fastcall ComplexInventoryTransaction::handle(ComplexInventoryTransaction *this, Player *a2, int a3)
{
  ComplexInventoryTransaction *v3; // r9@1
  InventoryTransaction *v4; // r11@1
  int v5; // r8@1
  Player *v6; // r10@1
  InventoryTransaction *v7; // r6@1
  int i; // r4@2
  int j; // r5@3
  int v10; // r7@3

  v3 = this;
  v4 = (ComplexInventoryTransaction *)((char *)this + 8);
  v5 = a3;
  v6 = a2;
  InventoryTransaction::_logTransaction((ComplexInventoryTransaction *)((char *)this + 8));
  v7 = (InventoryTransaction *)InventoryTransaction::verifyFull(v4, v6, v5);
  if ( v7 == (InventoryTransaction *)1 )
  {
    for ( i = *((_DWORD *)v3 + 4); i; i = *(_DWORD *)i )
    {
      v10 = *(_QWORD *)(i + 16) >> 32;
      for ( j = *(_QWORD *)(i + 16); v10 != j; j += 160 )
        InventoryTransactionManager::addExpectedAction((int)v6 + 5152, j);
    }
    v7 = InventoryTransaction::executeFull(v4, v6, v5);
    if ( v7 == (InventoryTransaction *)1 )
      if ( *((_DWORD *)v3 + 1) == 1 )
      {
        v7 = (InventoryTransaction *)1;
        (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v6 + 1064))(v6, 1);
      }
      else
  }
  return v7;
}


ComplexInventoryTransaction *__fastcall ComplexInventoryTransaction::~ComplexInventoryTransaction(ComplexInventoryTransaction *this)
{
  ComplexInventoryTransaction *v1; // r8@1
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r5@8
  int v6; // r9@9
  __int64 v7; // r0@9
  int v8; // r4@10
  int v9; // r7@10
  void *v10; // r0@11
  void *v11; // r0@13
  void *v12; // r0@17
  void *v13; // r0@19
  int v14; // r0@21
  char *v15; // r0@28

  v1 = this;
  *(_DWORD *)this = &off_2700C2C;
  v2 = *(_QWORD *)((char *)this + 36) >> 32;
  v3 = *(_QWORD *)((char *)this + 36);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
        (*(void (**)(void))(*(_DWORD *)v4 + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      v3 += 20;
    }
    while ( v2 != v3 );
    v3 = *((_DWORD *)v1 + 9);
  }
  if ( v3 )
    operator delete((void *)v3);
  v5 = *((_DWORD *)v1 + 4);
  if ( v5 )
      v6 = *(_DWORD *)v5;
      v7 = *(_QWORD *)(v5 + 16);
      if ( (_DWORD)v7 != HIDWORD(v7) )
      {
        v8 = v7 + 96;
        v9 = -HIDWORD(v7);
        do
        {
          v10 = *(void **)(v8 + 44);
          if ( v10 )
            operator delete(v10);
          v11 = *(void **)(v8 + 28);
          if ( v11 )
            operator delete(v11);
          if ( *(_DWORD *)v8 )
            (*(void (**)(void))(**(_DWORD **)v8 + 4))();
          *(_DWORD *)v8 = 0;
          v12 = *(void **)(v8 - 28);
          if ( v12 )
            operator delete(v12);
          v13 = *(void **)(v8 - 44);
          if ( v13 )
            operator delete(v13);
          v14 = *(_DWORD *)(v8 - 72);
          if ( v14 )
            (*(void (**)(void))(*(_DWORD *)v14 + 4))();
          *(_DWORD *)(v8 - 72) = 0;
          v8 += 160;
        }
        while ( v8 + v9 != 96 );
        LODWORD(v7) = *(_DWORD *)(v5 + 16);
      }
      if ( (_DWORD)v7 )
        operator delete((void *)v7);
      operator delete((void *)v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v15 = (char *)*((_DWORD *)v1 + 2);
  if ( v15 && (char *)v1 + 32 != v15 )
    operator delete(v15);
  return v1;
}
