

InventoryTransactionManager *__fastcall InventoryTransactionManager::~InventoryTransactionManager(InventoryTransactionManager *this)
{
  InventoryTransactionManager *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r5@2
  int v4; // r6@2
  void *v5; // r0@3
  void *v6; // r0@5
  void *v7; // r0@9
  void *v8; // r0@11
  int v9; // r0@13
  InventoryTransaction *v10; // r0@19
  InventoryTransaction *v11; // r0@20

  v1 = this;
  v2 = *((_QWORD *)this + 1);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v3 = v2 + 96;
    v4 = -HIDWORD(v2);
    do
    {
      v5 = *(void **)(v3 + 44);
      if ( v5 )
        operator delete(v5);
      v6 = *(void **)(v3 + 28);
      if ( v6 )
        operator delete(v6);
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v7 = *(void **)(v3 - 28);
      if ( v7 )
        operator delete(v7);
      v8 = *(void **)(v3 - 44);
      if ( v8 )
        operator delete(v8);
      v9 = *(_DWORD *)(v3 - 72);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *(_DWORD *)(v3 - 72) = 0;
      v3 += 160;
    }
    while ( v3 + v4 != 96 );
    LODWORD(v2) = *((_DWORD *)v1 + 2);
  }
  if ( (_DWORD)v2 )
    operator delete((void *)v2);
  v10 = (InventoryTransaction *)*((_DWORD *)v1 + 1);
  if ( v10 )
    v11 = InventoryTransaction::~InventoryTransaction(v10);
    operator delete((void *)v11);
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall InventoryTransactionManager::getSourceCount(InventoryTransactionManager *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  if ( v1 )
    result = *(_DWORD *)(v1 + 12);
  else
    result = 0;
  return result;
}


void __fastcall InventoryTransactionManager::forceBalanceTransaction(InventoryTransactionManager *this)
{
  InventoryTransactionManager::forceBalanceTransaction(this);
}


void __fastcall InventoryTransactionManager::_logExpectedActions(InventoryTransactionManager *this)
{
  int i; // r4@1
  int v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned int *v5; // r2@7
  signed int v6; // r1@9
  unsigned int *v7; // r2@11
  signed int v8; // r1@13
  void *v9; // r0@27
  void *v10; // r0@28
  void *v11; // r0@29
  int v12; // [sp+4h] [bp-34h]@3
  int v13; // [sp+8h] [bp-30h]@7
  int v14; // [sp+Ch] [bp-2Ch]@11

  v2 = *((_QWORD *)this + 1) >> 32;
  for ( i = *((_QWORD *)this + 1); i != v2; i += 160 )
  {
    InventorySource::toString((InventorySource *)&v14, i);
    ItemInstance::toString((ItemInstance *)&v13, i + 16);
    ItemInstance::toString((ItemInstance *)&v12, i + 88);
    v9 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v12 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v13 - 4);
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v14 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
}


void __fastcall InventoryTransactionManager::forceBalanceTransaction(InventoryTransactionManager *this)
{
  InventoryTransactionManager *v1; // r5@1
  InventoryTransaction *v2; // r0@1
  InventoryTransaction **v3; // r4@1
  int v4; // r1@3

  v1 = this;
  v3 = (InventoryTransaction **)((char *)this + 4);
  v2 = (InventoryTransaction *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    InventoryTransaction::forceBalanceTransaction(v2);
    if ( InventoryTransaction::verifyBalance(*v3) == 1 )
    {
      (*(void (**)(void))(*(_DWORD *)*(_QWORD *)v1 + 1516))();
      v4 = *((_DWORD *)v1 + 1);
      *((_DWORD *)v1 + 1) = 0;
      if ( v4 )
        j_j_j__ZNKSt14default_deleteI20InventoryTransactionEclEPS0_((int)v3, v4);
    }
  }
}


void __fastcall InventoryTransactionManager::addAction(int a1, int a2)
{
  InventoryTransactionManager::addAction(a1, a2);
}


void __fastcall InventoryTransactionManager::_logExpectedActions(InventoryTransactionManager *this)
{
  InventoryTransactionManager::_logExpectedActions(this);
}


int __fastcall InventoryTransactionManager::_createServerSideAction(InventoryTransactionManager *this, const ItemInstance *a2, const ItemInstance *a3)
{
  InventoryTransactionManager *v3; // r4@1
  const ItemInstance *v4; // r6@1
  const ItemInstance *v5; // r5@1
  int result; // r0@23
  __int16 v7; // [sp+5h] [bp-A3h]@0
  char v8; // [sp+7h] [bp-A1h]@0
  int v9; // [sp+8h] [bp-A0h]@13
  char v10; // [sp+Ch] [bp-9Ch]@13
  __int16 v11; // [sp+Dh] [bp-9Bh]@13
  char v12; // [sp+Fh] [bp-99h]@13
  int v13; // [sp+10h] [bp-98h]@13
  int v14; // [sp+14h] [bp-94h]@13
  int v15; // [sp+18h] [bp-90h]@13
  int v16; // [sp+20h] [bp-88h]@23
  void *v17; // [sp+3Ch] [bp-6Ch]@21
  void *v18; // [sp+4Ch] [bp-5Ch]@19
  int v19; // [sp+60h] [bp-48h]@13
  int v20; // [sp+68h] [bp-40h]@17
  void *v21; // [sp+84h] [bp-24h]@15
  void *v22; // [sp+94h] [bp-14h]@13
  int v23; // [sp+A8h] [bp+0h]@1
  char v24; // [sp+ACh] [bp+4h]@1
  int v25; // [sp+B0h] [bp+8h]@1
  int v26; // [sp+B4h] [bp+Ch]@1
  int v27; // [sp+B8h] [bp+10h]@1
  int v28; // [sp+C0h] [bp+18h]@11
  void *v29; // [sp+DCh] [bp+34h]@9
  void *v30; // [sp+ECh] [bp+44h]@7
  int v31; // [sp+100h] [bp+58h]@1
  int v32; // [sp+108h] [bp+60h]@5
  void *v33; // [sp+124h] [bp+7Ch]@3
  void *ptr; // [sp+134h] [bp+8Ch]@1

  v3 = this;
  v4 = a2;
  v23 = 3;
  v24 = -1;
  v5 = a3;
  v25 = 0;
  v26 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v27, (int)&ItemInstance::EMPTY_ITEM);
  ItemInstance::ItemInstance((ItemInstance *)&v31, (int)v4);
  InventoryTransactionManager::addAction((int)v3, (int)&v23);
  if ( ptr )
    operator delete(ptr);
  if ( v33 )
    operator delete(v33);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  v32 = 0;
  if ( v30 )
    operator delete(v30);
  if ( v29 )
    operator delete(v29);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v9 = 3;
  v10 = -1;
  v12 = v8;
  v11 = v7;
  v28 = 0;
  v13 = 0;
  v14 = 1;
  ItemInstance::ItemInstance((ItemInstance *)&v15, (int)v5);
  ItemInstance::ItemInstance((ItemInstance *)&v19, (int)&ItemInstance::EMPTY_ITEM);
  InventoryTransactionManager::addAction((int)v3, (int)&v9);
  if ( v22 )
    operator delete(v22);
  if ( v21 )
    operator delete(v21);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  v20 = 0;
  if ( v18 )
    operator delete(v18);
  if ( v17 )
    operator delete(v17);
  result = v16;
  if ( v16 )
    result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
  return result;
}


void __fastcall InventoryTransactionManager::addAction(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r1@1
  unsigned __int64 *v6; // r0@4
  InventoryTransaction **v7; // r5@4
  double v8; // r0@5
  int v9; // r7@5
  unsigned int v10; // r0@5
  int v11; // r9@7
  void *v12; // r8@7
  InventoryTransaction *v13; // r1@8
  int v14; // r1@12

  v2 = a1;
  v3 = a2;
  v4 = a1 + 8;
  v5 = std::__find_if<__gnu_cxx::__normal_iterator<InventoryAction *,std::vector<InventoryAction,std::allocator<InventoryAction>>>,__gnu_cxx::__ops::_Iter_equals_val<InventoryAction const>>(
         *(_DWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 12),
         a2);
  if ( v5 == *(_DWORD *)(v4 + 4) )
  {
    if ( !ItemInstance::operator==((ItemInstance *)(v3 + 16), (ItemInstance *)(v3 + 88)) )
    {
      v7 = (InventoryTransaction **)(v2 + 4);
      v6 = *(unsigned __int64 **)(v2 + 4);
      if ( !v6 )
      {
        LODWORD(v8) = operator new(0x28u);
        v9 = LODWORD(v8);
        *(_DWORD *)(LODWORD(v8) + 8) = 0;
        *(_DWORD *)(LODWORD(v8) + 12) = 0;
        *(_DWORD *)(LODWORD(v8) + 16) = 1065353216;
        LODWORD(v8) += 16;
        *(_DWORD *)(v9 + 20) = 0;
        v10 = sub_21E6254(v8);
        *(_DWORD *)(v9 + 4) = v10;
        if ( v10 == 1 )
        {
          *(_DWORD *)(v9 + 24) = 0;
          v12 = (void *)(v9 + 24);
        }
        else
          if ( v10 >= 0x40000000 )
            sub_21E57F4();
          v11 = 4 * v10;
          v12 = operator new(4 * v10);
          _aeabi_memclr4(v12, v11);
        *(_DWORD *)v9 = v12;
        *(_DWORD *)(v9 + 28) = 0;
        *(_DWORD *)(v9 + 32) = 0;
        *(_DWORD *)(v9 + 36) = 0;
        v13 = *v7;
        *v7 = (InventoryTransaction *)v9;
        if ( v13 )
          std::default_delete<InventoryTransaction>::operator()(v2 + 4, (int)v13);
        v6 = (unsigned __int64 *)*v7;
      }
      InventoryTransaction::addAction(v6, v3);
      if ( InventoryTransaction::verifyBalance(*v7) == 1 )
        (*(void (**)(void))(*(_DWORD *)*(_QWORD *)v2 + 1516))();
        v14 = *(_DWORD *)(v2 + 4);
        *(_DWORD *)(v2 + 4) = 0;
        if ( v14 )
          j_j_j__ZNKSt14default_deleteI20InventoryTransactionEclEPS0_(v2 + 4, v14);
    }
  }
  else
    j_j_j__ZNSt6vectorI15InventoryActionSaIS0_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE(v4, v5);
}


char *__fastcall InventoryTransactionManager::addExpectedAction(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r1@2
  int v6; // r2@2
  int v7; // r3@2
  char *result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 12);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorI15InventoryActionSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(
               (unsigned __int64 *)(a1 + 8),
               a2);
  }
  else
    v5 = *(_DWORD *)(a2 + 4);
    v6 = *(_DWORD *)(v3 + 8);
    v7 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)v4 = *(_DWORD *)v3;
    *(_DWORD *)(v4 + 4) = v5;
    *(_DWORD *)(v4 + 8) = v6;
    *(_DWORD *)(v4 + 12) = v7;
    ItemInstance::ItemInstance((ItemInstance *)(v4 + 16), v3 + 16);
    ItemInstance::ItemInstance((ItemInstance *)(v4 + 88), v3 + 88);
    result = (char *)(*(_DWORD *)(v2 + 12) + 160);
    *(_DWORD *)(v2 + 12) = result;
  return result;
}


signed int __fastcall InventoryTransactionManager::checkActionExpected(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  signed int result; // r0@2

  v2 = a1 + 8;
  v3 = std::__find_if<__gnu_cxx::__normal_iterator<InventoryAction *,std::vector<InventoryAction,std::allocator<InventoryAction>>>,__gnu_cxx::__ops::_Iter_equals_val<InventoryAction const>>(
         *(_DWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 12),
         a2);
  if ( v3 == *(_DWORD *)(v2 + 4) )
  {
    result = 0;
  }
  else
    std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_erase(v2, v3);
    result = 1;
  return result;
}
