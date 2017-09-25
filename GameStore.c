

GameStore *__fastcall GameStore::~GameStore(GameStore *this)
{
  GameStore *v1; // r10@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  _DWORD *v4; // r7@5
  unsigned int *v5; // r2@7
  signed int v6; // r1@9
  _DWORD *v7; // r6@15
  unsigned __int64 *v8; // r0@15
  int v9; // r1@15
  void *v10; // r0@15
  char *v11; // r0@17
  StoreSynchronizer *v12; // r0@20
  StoreSynchronizer *v13; // r0@21
  char *v14; // r5@22
  char *v15; // r7@22

  v1 = this;
  *(_DWORD *)this = &off_26E7A04;
  v2 = (void (*)(void))*((_DWORD *)this + 21);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 17);
  if ( v3 )
    v3();
  v4 = (_DWORD *)*((_DWORD *)v1 + 8);
  while ( v4 )
  {
    v7 = v4;
    v8 = (unsigned __int64 *)(v4 + 3);
    v4 = (_DWORD *)*v4;
    std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector(v8);
    v9 = v7[1];
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v9 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    operator delete(v7);
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  v11 = (char *)*((_DWORD *)v1 + 6);
  if ( v11 && (char *)v1 + 48 != v11 )
    operator delete(v11);
  v12 = (StoreSynchronizer *)*((_DWORD *)v1 + 5);
  if ( v12 )
    v13 = StoreSynchronizer::~StoreSynchronizer(v12);
    operator delete((void *)v13);
  *((_DWORD *)v1 + 5) = 0;
  v15 = (char *)(*((_QWORD *)v1 + 1) >> 32);
  v14 = (char *)*((_QWORD *)v1 + 1);
  if ( v14 != v15 )
    do
      if ( *(_DWORD *)v14 )
        (*(void (**)(void))(**(_DWORD **)v14 + 4))();
      *(_DWORD *)v14 = 0;
      v14 += 4;
    while ( v15 != v14 );
    v14 = (char *)*((_DWORD *)v1 + 2);
  if ( v14 )
    operator delete(v14);
  return v1;
}


unsigned __int64 *__fastcall GameStore::onQueryPurchasesFailMultistore(int a1, int **a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r2@1
  int v5; // r2@1
  int v6; // r2@1
  int v7; // r1@1
  int v8; // r1@1
  unsigned __int64 *result; // r0@1
  int v10; // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@1
  int v13; // [sp+14h] [bp-14h]@1
  int v14; // [sp+18h] [bp-10h]@1
  int v15; // [sp+1Ch] [bp-Ch]@1

  v2 = a1;
  v3 = std::__detail::_Map_base<std::string,std::pair<std::string const,QueryPurchaseResult>,std::allocator<std::pair<std::string const,QueryPurchaseResult>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)(a1 + 24),
         a2);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  *(_BYTE *)v3 = 0;
  v4 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  v13 = v4;
  v5 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v14 = v5;
  v6 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 12) = 0;
  v15 = v6;
  *(_DWORD *)(v3 + 4) = v10;
  v7 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v11;
  v11 = v7;
  v8 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 12) = v12;
  v12 = v8;
  std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector((unsigned __int64 *)&v13);
  std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector((unsigned __int64 *)&v10);
  result = (unsigned __int64 *)((*(_QWORD *)(v2 + 8) >> 32) - *(_QWORD *)(v2 + 8));
  if ( *(_DWORD *)(v2 + 36) == (signed int)result >> 2 )
    result = GameStore::completeQueryPurchasesMultistore((GameStore *)v2);
  return result;
}


int (__cdecl *__fastcall GameStore::onAppPurchaseSuccess(GameStore *this))(int *, int *)
{
  GameStore *v1; // r4@1
  int (__cdecl *result)(int *, int *); // r0@1
  __int64 v3; // kr00_8@3
  int v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+4h] [bp-14h]@3
  int (__cdecl *v6)(int *, int *); // [sp+8h] [bp-10h]@3
  int (__fastcall *v7)(int *, _DWORD); // [sp+Ch] [bp-Ch]@3

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 1) + 40))();
  result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 14);
  if ( result == (int (__cdecl *)(int *, int *))3 )
  {
    *((_DWORD *)v1 + 14) = 1;
    result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 21);
    if ( result )
    {
      v3 = *(_QWORD *)((char *)v1 + 76);
      v4 = *(_QWORD *)((char *)v1 + 76);
      v5 = HIDWORD(v3);
      *((_DWORD *)v1 + 21) = 0;
      v6 = result;
      v7 = (int (__fastcall *)(int *, _DWORD))*((_DWORD *)v1 + 22);
      result = (int (__cdecl *)(int *, int *))v7(&v4, 0);
      if ( v6 )
        result = (int (__cdecl *)(int *, int *))v6(&v4, &v4);
    }
  }
  return result;
}


int (__cdecl *__fastcall GameStore::onQueryPurchasesSuccess(int a1))(int *, int *)
{
  int v1; // r4@1
  int (__cdecl *result)(int *, int *); // r0@1
  __int64 v3; // kr00_8@3
  int v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+4h] [bp-14h]@3
  int (__cdecl *v6)(int *, int *); // [sp+8h] [bp-10h]@3
  int (__fastcall *v7)(int *, _DWORD); // [sp+Ch] [bp-Ch]@3

  v1 = a1;
  (*(void (**)(void))(**(_DWORD **)(a1 + 4) + 32))();
  result = *(int (__cdecl **)(int *, int *))(v1 + 56);
  if ( result == (int (__cdecl *)(int *, int *))4 )
  {
    *(_DWORD *)(v1 + 56) = 1;
    result = *(int (__cdecl **)(int *, int *))(v1 + 68);
    if ( result )
    {
      v3 = *(_QWORD *)(v1 + 60);
      v4 = *(_QWORD *)(v1 + 60);
      v5 = HIDWORD(v3);
      *(_DWORD *)(v1 + 68) = 0;
      v6 = result;
      v7 = *(int (__fastcall **)(int *, _DWORD))(v1 + 72);
      result = (int (__cdecl *)(int *, int *))v7(&v4, 0);
      if ( v6 )
        result = (int (__cdecl *)(int *, int *))v6(&v4, &v4);
    }
  }
  return result;
}


int __fastcall GameStore::purchaseGame(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@3
  void (__fastcall *v7)(int *); // r3@3
  int v8; // r1@4
  int result; // r0@5
  int v10; // r5@8
  __int64 v11; // r2@8
  int v12; // [sp+0h] [bp-20h]@4
  int v13; // [sp+4h] [bp-1Ch]@4
  int v14; // [sp+8h] [bp-18h]@3
  int v15; // [sp+Ch] [bp-14h]@4

  v4 = a1;
  v5 = a2;
  if ( *(_BYTE *)(a1 + 52) && *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 3;
    v6 = 0;
    v14 = 0;
    v7 = *(void (__fastcall **)(int *))(a2 + 8);
    if ( v7 )
    {
      v7(&v12);
      v6 = *(_DWORD *)(v5 + 12);
      v15 = *(_DWORD *)(v5 + 12);
      v8 = *(_DWORD *)(v5 + 8);
      v14 = *(_DWORD *)(v5 + 8);
      v3 = v13;
      v2 = v12;
    }
    else
      v8 = 0;
    v10 = v4 + 76;
    v11 = *(_QWORD *)(v4 + 76);
    *(_QWORD *)&v12 = *(_QWORD *)(v4 + 76);
    *(_DWORD *)v10 = v2;
    *(_DWORD *)(v10 + 4) = v3;
    v14 = *(_DWORD *)(v4 + 84);
    HIDWORD(v11) = v14;
    *(_DWORD *)(v4 + 84) = v8;
    v15 = *(_DWORD *)(v4 + 88);
    *(_DWORD *)(v4 + 88) = v6;
    if ( HIDWORD(v11) )
      ((void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))HIDWORD(v11))(&v12, &v12, 3, HIDWORD(v11));
    result = (*(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(***(_DWORD ***)(v4 + 8) + 60))(
               **(_DWORD **)(v4 + 8),
               *(_DWORD *)(***(_DWORD ***)(v4 + 8) + 60),
               v11,
               HIDWORD(v11));
  }
  else
    result = *(_DWORD *)(a2 + 8);
    if ( result )
      result = (*(int (__fastcall **)(int, signed int))(a2 + 12))(a2, 1);
  return result;
}


int __fastcall GameStore::restoreFromCache(int result, PurchaseCache *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)(result + 8); v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 84))() )
  {
    v4 = *v2;
    ++v2;
  }
  return result;
}


StoreSynchronizer *__fastcall GameStore::update(GameStore *this)
{
  StoreSynchronizer *result; // r0@1

  result = (StoreSynchronizer *)*((_DWORD *)this + 5);
  if ( result )
    result = (StoreSynchronizer *)j_j_j__ZN17StoreSynchronizer6updateEv(result);
  else
    JUMPOUT(0, GameStore::restoreFromCache);
  return result;
}


int __fastcall GameStore::queryPurchases(int a1, int a2, __int64 a3)
{
  int v3; // r11@1
  int v4; // r9@1
  int v5; // r6@1
  int v6; // r0@3
  int v7; // r1@4
  int result; // r0@5
  void (__cdecl *v9)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@8
  _DWORD *v10; // r6@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  _DWORD *v13; // r7@20
  unsigned __int64 *v14; // r0@20
  int v15; // r1@20
  void *v16; // r0@20
  int v17; // r3@22
  __int64 i; // r4@22
  int v19; // t1@23
  __int64 v20; // [sp+0h] [bp-38h]@4
  void (__cdecl *v21)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-30h]@3
  int v22; // [sp+Ch] [bp-2Ch]@4

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)(a1 + 52) && *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 4;
    v6 = 0;
    v21 = 0;
    HIDWORD(a3) = *(_DWORD *)(a2 + 8);
    if ( HIDWORD(a3) )
    {
      ((void (__fastcall *)(_DWORD))HIDWORD(a3))(&v20);
      v6 = *(_DWORD *)(v5 + 12);
      v22 = *(_DWORD *)(v5 + 12);
      v7 = *(_DWORD *)(v5 + 8);
      v21 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
      a3 = v20;
    }
    else
      v7 = 0;
    v20 = *(_QWORD *)(v3 + 60);
    *(_QWORD *)(v3 + 60) = a3;
    v21 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v3 + 68);
    v9 = v21;
    *(_DWORD *)(v3 + 68) = v7;
    v22 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 72) = v6;
    if ( v9 )
      v9(&v20, &v20, 3, v9);
    v10 = *(_DWORD **)(v3 + 32);
    while ( v10 )
      v13 = v10;
      v14 = (unsigned __int64 *)(v10 + 3);
      v10 = (_DWORD *)*v10;
      std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector(v14);
      v15 = v13[1];
      v16 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v15 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      }
      operator delete(v13);
    _aeabi_memclr4(*(_QWORD *)(v3 + 24), 4 * (*(_QWORD *)(v3 + 24) >> 32));
    result = 0;
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 36) = 0;
    for ( i = *(_QWORD *)(v3 + 8);
          HIDWORD(i) != (_DWORD)i;
          result = (*(int (__cdecl **)(int, int, _DWORD, int))(*(_DWORD *)v19 + 48))(
                     v19,
                     v4,
                     *(_DWORD *)(*(_DWORD *)v19 + 48),
                     v17) )
      v19 = *(_DWORD *)i;
      LODWORD(i) = i + 4;
  }
  else
    result = *(_DWORD *)(a2 + 8);
    if ( result )
      result = (*(int (__fastcall **)(int, signed int))(a2 + 12))(a2, 1);
  return result;
}


void __fastcall GameStore::~GameStore(GameStore *this)
{
  GameStore *v1; // r0@1

  v1 = GameStore::~GameStore(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int (__cdecl *__fastcall GameStore::onQueryPurchasesFail(GameStore *this))(int *, int *)
{
  GameStore *v1; // r4@1
  int (__cdecl *result)(int *, int *); // r0@1
  __int64 v3; // kr00_8@3
  int v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+4h] [bp-14h]@3
  int (__cdecl *v6)(int *, int *); // [sp+8h] [bp-10h]@3
  int (__fastcall *v7)(int *, signed int); // [sp+Ch] [bp-Ch]@3

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 1) + 36))();
  result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 14);
  if ( result == (int (__cdecl *)(int *, int *))4 )
  {
    *((_DWORD *)v1 + 14) = 1;
    result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 17);
    if ( result )
    {
      v3 = *(_QWORD *)((char *)v1 + 60);
      v4 = *(_QWORD *)((char *)v1 + 60);
      v5 = HIDWORD(v3);
      *((_DWORD *)v1 + 17) = 0;
      v6 = result;
      v7 = (int (__fastcall *)(int *, signed int))*((_DWORD *)v1 + 18);
      result = (int (__cdecl *)(int *, int *))v7(&v4, 1);
      if ( v6 )
        result = (int (__cdecl *)(int *, int *))v6(&v4, &v4);
    }
  }
  return result;
}


int __fastcall GameStore::purchase(int a1)
{
  int result; // r0@3

  if ( *(_BYTE *)(a1 + 52) && *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 3;
    result = (*(int (**)(void))(***(_DWORD ***)(a1 + 8) + 40))();
  }
  else
    result = 0;
  return result;
}


signed int __fastcall GameStore::isGameLicensed(GameStore *this)
{
  __int64 v1; // r4@1
  int v2; // t1@2
  signed int result; // r0@4

  v1 = *((_QWORD *)this + 1);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v2 = *(_DWORD *)v1;
      LODWORD(v1) = v1 + 4;
      if ( (*(int (**)(void))(*(_DWORD *)v2 + 64))() == 1 )
        break;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        return 0;
    }
    result = 1;
  return result;
}


int (__cdecl *__fastcall GameStore::onAppPurchaseFailed(GameStore *this))(int *, int *)
{
  GameStore *v1; // r4@1
  int (__cdecl *result)(int *, int *); // r0@1
  __int64 v3; // kr00_8@3
  int v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+4h] [bp-14h]@3
  int (__cdecl *v6)(int *, int *); // [sp+8h] [bp-10h]@3
  int (__fastcall *v7)(int *, signed int); // [sp+Ch] [bp-Ch]@3

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 1) + 44))();
  result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 14);
  if ( result == (int (__cdecl *)(int *, int *))3 )
  {
    *((_DWORD *)v1 + 14) = 1;
    result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 21);
    if ( result )
    {
      v3 = *(_QWORD *)((char *)v1 + 76);
      v4 = *(_QWORD *)((char *)v1 + 76);
      v5 = HIDWORD(v3);
      *((_DWORD *)v1 + 21) = 0;
      v6 = result;
      v7 = (int (__fastcall *)(int *, signed int))*((_DWORD *)v1 + 22);
      result = (int (__cdecl *)(int *, int *))v7(&v4, 1);
      if ( v6 )
        result = (int (__cdecl *)(int *, int *))v6(&v4, &v4);
    }
  }
  return result;
}


int __fastcall GameStore::queryProducts(int a1, int a2, int a3)
{
  int v3; // r12@0
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r0@3
  void (__fastcall *v8)(__int64 *, int, signed int); // r3@3
  int v9; // r1@4
  int result; // r0@5
  int v11; // r6@9
  void (__cdecl *v12)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@9
  __int64 v13; // [sp+0h] [bp-28h]@4
  void (__cdecl *v14)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-20h]@3
  int v15; // [sp+Ch] [bp-1Ch]@4

  v4 = a1;
  v5 = a3;
  v6 = a2;
  if ( *(_BYTE *)(a1 + 52) && *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 2;
    v7 = 0;
    v14 = 0;
    v8 = *(void (__fastcall **)(__int64 *, int, signed int))(a3 + 8);
    if ( v8 )
    {
      v8(&v13, a3, 2);
      v7 = *(_DWORD *)(v5 + 12);
      v15 = *(_DWORD *)(v5 + 12);
      v9 = *(_DWORD *)(v5 + 8);
      v14 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
      v8 = (void (__fastcall *)(__int64 *, int, signed int))HIDWORD(v13);
      v3 = v13;
    }
    else
      v9 = 0;
    v11 = v4 + 60;
    v13 = *(_QWORD *)(v4 + 60);
    *(_DWORD *)v11 = v3;
    *(_DWORD *)(v11 + 4) = v8;
    v14 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 68);
    v12 = v14;
    *(_DWORD *)(v4 + 68) = v9;
    v15 = *(_DWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 72) = v7;
    if ( v12 )
      v12(&v13, &v13, 3, v12);
    result = (*(int (__cdecl **)(_DWORD, int, _DWORD, void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD)))(***(_DWORD ***)(v4 + 8) + 36))(
               **(_DWORD **)(v4 + 8),
               v6,
               *(_DWORD *)(***(_DWORD ***)(v4 + 8) + 36),
               v12);
  }
  else
    result = *(_DWORD *)(a3 + 8);
    if ( result )
      result = (*(int (__fastcall **)(int, signed int))(a3 + 12))(a3, 1);
  return result;
}


int __fastcall GameStore::registerLicenseChangeCallback(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int (__fastcall *v4)(int, int *); // r6@1
  void (__fastcall *v5)(int *); // r3@1
  int result; // r0@3
  int v7; // [sp+0h] [bp-20h]@2
  int (*v8)(void); // [sp+8h] [bp-18h]@1
  int v9; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = **(_DWORD **)(a1 + 8);
  v4 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 76);
  v8 = 0;
  v5 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v5 )
  {
    v5(&v7);
    v9 = *(_DWORD *)(v2 + 12);
    v8 = *(int (**)(void))(v2 + 8);
  }
  result = v4(v3, &v7);
  if ( v8 )
    result = v8();
  return result;
}


int __fastcall GameStore::getExtraLicenseData(GameStore *this, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  GameStore *v4; // r4@1
  char *v5; // r6@2
  char *v6; // r8@2
  bool v7; // zf@3
  int result; // r0@3

  v2 = *(_QWORD *)(a2 + 8) >> 32;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = this;
  if ( v3 == v2 )
  {
    v6 = (char *)this + 16;
    v5 = (char *)this + 8;
LABEL_12:
    result = 0;
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = 0;
    *(_DWORD *)v6 = 0;
    *((_DWORD *)v6 + 1) = 0;
  }
  else
    while ( 1 )
    {
      (*(void (__fastcall **)(GameStore *))(**(_DWORD **)v3 + 68))(v4);
      result = *(_QWORD *)v6 | (*(_QWORD *)v6 >> 32);
      v7 = *(_QWORD *)v6 == 0LL;
      if ( !*(_QWORD *)v6 )
      {
        result = *(_QWORD *)v5 | (*(_QWORD *)v5 >> 32);
        v7 = *(_QWORD *)v5 == 0LL;
      }
      if ( !v7 )
        break;
      result = *(_QWORD *)v4 | (*(_QWORD *)v4 >> 32);
      if ( *(_QWORD *)v4 )
      v3 += 4;
      if ( v2 == v3 )
        goto LABEL_12;
    }
  return result;
}


int __fastcall GameStore::onPurchaseFailed(int a1)
{
  if ( *(_DWORD *)(a1 + 56) == 3 )
    *(_DWORD *)(a1 + 56) = 1;
  return (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 28))();
}


void __fastcall GameStore::onPurchaseSuccessful(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  int v4; // r0@3

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 56) == 3 )
    *(_DWORD *)(a1 + 56) = 1;
  (*(void (**)(void))(**(_DWORD **)(a1 + 4) + 20))();
  v4 = *(_DWORD *)(v2 + 20);
  if ( v4 )
    j_j_j__ZN17StoreSynchronizer12syncPurchaseERK12PurchaseInfo(v4, v3);
}


int (__cdecl *__fastcall GameStore::onAppPurchaseCanceled(GameStore *this))(int *, int *)
{
  GameStore *v1; // r4@1
  int (__cdecl *result)(int *, int *); // r0@1
  __int64 v3; // kr00_8@3
  int v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+4h] [bp-14h]@3
  int (__cdecl *v6)(int *, int *); // [sp+8h] [bp-10h]@3
  int (__fastcall *v7)(int *, signed int); // [sp+Ch] [bp-Ch]@3

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 1) + 48))();
  result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 14);
  if ( result == (int (__cdecl *)(int *, int *))3 )
  {
    *((_DWORD *)v1 + 14) = 1;
    result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 21);
    if ( result )
    {
      v3 = *(_QWORD *)((char *)v1 + 76);
      v4 = *(_QWORD *)((char *)v1 + 76);
      v5 = HIDWORD(v3);
      *((_DWORD *)v1 + 21) = 0;
      v6 = result;
      v7 = (int (__fastcall *)(int *, signed int))*((_DWORD *)v1 + 22);
      result = (int (__cdecl *)(int *, int *))v7(&v4, 2);
      if ( v6 )
        result = (int (__cdecl *)(int *, int *))v6(&v4, &v4);
    }
  }
  return result;
}


unsigned __int64 *__fastcall GameStore::onQueryPurchasesSuccessMultistore(int a1, int **a2, __int64 *a3)
{
  int v3; // r8@1
  __int64 *v4; // r7@1
  int v5; // r5@1
  char *v6; // r6@1
  __int64 v7; // r0@1
  unsigned int v8; // r4@1
  int v9; // r0@4
  int v10; // r0@4
  int v11; // r0@4
  int v12; // r0@4
  int v13; // r0@4
  unsigned __int64 *result; // r0@4
  char *v15; // [sp+8h] [bp-30h]@1
  int v16; // [sp+Ch] [bp-2Ch]@1
  char *v17; // [sp+10h] [bp-28h]@1
  int v18; // [sp+14h] [bp-24h]@4
  int v19; // [sp+18h] [bp-20h]@4
  int v20; // [sp+1Ch] [bp-1Ch]@4

  v3 = a1;
  v4 = a3;
  v5 = std::__detail::_Map_base<std::string,std::pair<std::string const,QueryPurchaseResult>,std::allocator<std::pair<std::string const,QueryPurchaseResult>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)(a1 + 24),
         a2);
  v6 = 0;
  v7 = *v4;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v8 = (HIDWORD(v7) - (signed int)v7) >> 4;
  if ( v8 )
  {
    if ( v8 >= 0x10000000 )
      sub_21E57F4();
    v6 = (char *)operator new(HIDWORD(v7) - v7);
    v7 = *v4;
  }
  v15 = v6;
  v17 = &v6[16 * v8];
  v16 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PurchaseInfo const*,std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>>,PurchaseInfo*>(
          v7,
          SHIDWORD(v7),
          (int)v6);
  *(_BYTE *)v5 = 1;
  v9 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = 0;
  v18 = v9;
  v10 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v19 = v10;
  v11 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = 0;
  v20 = v11;
  *(_DWORD *)(v5 + 4) = v15;
  v12 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v16;
  v16 = v12;
  v13 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v17;
  v17 = (char *)v13;
  std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector((unsigned __int64 *)&v18);
  std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector((unsigned __int64 *)&v15);
  result = (unsigned __int64 *)((*(_QWORD *)(v3 + 8) >> 32) - *(_QWORD *)(v3 + 8));
  if ( *(_DWORD *)(v3 + 36) == (signed int)result >> 2 )
    result = GameStore::completeQueryPurchasesMultistore((GameStore *)v3);
  return result;
}


void __fastcall GameStore::onPurchaseSuccessful(int a1, const void **a2)
{
  GameStore::onPurchaseSuccessful(a1, a2);
}


unsigned int __fastcall GameStore::GameStore(double a1)
{
  unsigned int v1; // r8@1
  unsigned int v2; // r0@1
  int v3; // r5@3
  void *v4; // r7@3
  __int64 v5; // r4@4
  int v6; // r6@5
  int v7; // r5@11
  char *v8; // r6@11
  StoreSynchronizer *v9; // r1@18
  StoreSynchronizer *v10; // r0@18
  StoreSynchronizer *v11; // r0@19
  StoreSynchronizer *v12; // r0@20
  StoreSynchronizer *v14; // [sp+0h] [bp-38h]@18
  char *v15; // [sp+4h] [bp-34h]@4
  char *v16; // [sp+8h] [bp-30h]@4
  int v17; // [sp+Ch] [bp-2Ch]@4

  v1 = LODWORD(a1);
  LODWORD(a1) = &off_26E7A04;
  *(double *)v1 = a1;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 40) = 1065353216;
  LODWORD(a1) = v1 + 40;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 28) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 48) = 0;
    v4 = (void *)(v1 + 48);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 24) = v4;
  *(_BYTE *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 84) = 0;
  StoreFactory::createStores((int)&v15, v1);
  v5 = *(_QWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 8) = v15;
  v15 = 0;
  *(_DWORD *)(v1 + 12) = v16;
  v16 = 0;
  *(_DWORD *)(v1 + 16) = v17;
  v17 = 0;
  if ( (_DWORD)v5 != HIDWORD(v5) )
    v6 = v5;
    do
    {
      if ( *(_DWORD *)v6 )
        (*(void (**)(void))(**(_DWORD **)v6 + 4))();
      *(_DWORD *)v6 = 0;
      v6 += 4;
    }
    while ( HIDWORD(v5) != v6 );
  if ( (_DWORD)v5 )
    operator delete((void *)v5);
  v7 = (int)v16;
  v8 = v15;
  if ( v15 != v16 )
      if ( *(_DWORD *)v8 )
        (*(void (**)(void))(**(_DWORD **)v8 + 4))();
      *(_DWORD *)v8 = 0;
      v8 += 4;
    while ( (char *)v7 != v8 );
    v8 = v15;
  if ( v8 )
    operator delete(v8);
  StoreSynchronizer::create(&v14, (_QWORD *)(v1 + 8));
  v9 = v14;
  v14 = 0;
  v10 = *(StoreSynchronizer **)(v1 + 20);
  *(_DWORD *)(v1 + 20) = v9;
  if ( v10 )
    v11 = StoreSynchronizer::~StoreSynchronizer(v10);
    operator delete((void *)v11);
    if ( v14 )
      v12 = StoreSynchronizer::~StoreSynchronizer(v14);
      operator delete((void *)v12);
  return v1;
}


void __fastcall GameStore::getStoreId(GameStore *this, int a2, int a3)
{
  int v3; // r5@1
  GameStore *v4; // r4@1
  int v5; // r6@1
  const void **v6; // r0@4
  void *v7; // r0@4
  void *v8; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+0h] [bp-28h]@2
  int v14; // [sp+4h] [bp-24h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  (*(void (__fastcall **)(int *))(***(_DWORD ***)(a2 + 8) + 20))(&v14);
  if ( v5 == 1 )
    (*(void (__fastcall **)(int *))(***(_DWORD ***)(v3 + 8) + 24))(&v13);
  else
    sub_21E8AF4(&v13, (int *)&Util::EMPTY_STRING);
  v6 = sub_21E72F0((const void **)&v14, (const void **)&v13);
  *(_DWORD *)v4 = *v6;
  *v6 = &unk_28898CC;
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int (__cdecl *__fastcall GameStore::onQueryProductsSuccess(int a1))(int *, int *)
{
  int v1; // r4@1
  int (__cdecl *result)(int *, int *); // r0@1
  __int64 v3; // kr00_8@3
  int v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+4h] [bp-14h]@3
  int (__cdecl *v6)(int *, int *); // [sp+8h] [bp-10h]@3
  int (__fastcall *v7)(int *, _DWORD); // [sp+Ch] [bp-Ch]@3

  v1 = a1;
  (*(void (**)(void))(**(_DWORD **)(a1 + 4) + 12))();
  result = *(int (__cdecl **)(int *, int *))(v1 + 56);
  if ( result == (int (__cdecl *)(int *, int *))2 )
  {
    *(_DWORD *)(v1 + 56) = 1;
    result = *(int (__cdecl **)(int *, int *))(v1 + 68);
    if ( result )
    {
      v3 = *(_QWORD *)(v1 + 60);
      v4 = *(_QWORD *)(v1 + 60);
      v5 = HIDWORD(v3);
      *(_DWORD *)(v1 + 68) = 0;
      v6 = result;
      v7 = *(int (__fastcall **)(int *, _DWORD))(v1 + 72);
      result = (int (__cdecl *)(int *, int *))v7(&v4, 0);
      if ( v6 )
        result = (int (__cdecl *)(int *, int *))v6(&v4, &v4);
    }
  }
  return result;
}


int __fastcall GameStore::restorePurchases(int a1, int a2, __int64 a3)
{
  int v3; // r10@1
  int v4; // r5@1
  int v5; // r0@3
  int v6; // r1@4
  int result; // r0@5
  __int64 v8; // kr00_8@8
  void (__cdecl *v9)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@8
  _DWORD *v10; // r7@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  _DWORD *v13; // r6@20
  unsigned __int64 *v14; // r0@20
  int v15; // r1@20
  void *v16; // r0@20
  int v17; // r2@22
  int v18; // r3@22
  int *v19; // r4@22
  int *i; // r5@22
  int v21; // t1@23
  int v22; // [sp+0h] [bp-30h]@4
  int v23; // [sp+4h] [bp-2Ch]@8
  void (__cdecl *v24)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-28h]@3
  int v25; // [sp+Ch] [bp-24h]@4

  v3 = a1;
  v4 = a2;
  if ( *(_BYTE *)(a1 + 52) && *(_DWORD *)(a1 + 56) == 1 )
  {
    *(_DWORD *)(a1 + 56) = 4;
    v5 = 0;
    v24 = 0;
    HIDWORD(a3) = *(_DWORD *)(a2 + 8);
    if ( HIDWORD(a3) )
    {
      ((void (__fastcall *)(_DWORD))HIDWORD(a3))(&v22);
      v5 = *(_DWORD *)(v4 + 12);
      v25 = *(_DWORD *)(v4 + 12);
      v6 = *(_DWORD *)(v4 + 8);
      v24 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 8);
      a3 = *(_QWORD *)&v22;
    }
    else
      v6 = 0;
    v8 = *(_QWORD *)(v3 + 60);
    v22 = *(_QWORD *)(v3 + 60);
    v23 = HIDWORD(v8);
    *(_QWORD *)(v3 + 60) = a3;
    v24 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v3 + 68);
    v9 = v24;
    *(_DWORD *)(v3 + 68) = v6;
    v25 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 72) = v5;
    if ( v9 )
      v9(&v22, &v22, 3, v9);
    v10 = *(_DWORD **)(v3 + 32);
    while ( v10 )
      v13 = v10;
      v14 = (unsigned __int64 *)(v10 + 3);
      v10 = (_DWORD *)*v10;
      std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector(v14);
      v15 = v13[1];
      v16 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v15 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      }
      operator delete(v13);
    _aeabi_memclr4(*(_QWORD *)(v3 + 24), 4 * (*(_QWORD *)(v3 + 24) >> 32));
    result = 0;
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 36) = 0;
    v19 = (int *)(*(_QWORD *)(v3 + 8) >> 32);
    for ( i = (int *)*(_QWORD *)(v3 + 8);
          v19 != i;
          result = (*(int (__cdecl **)(int, _DWORD, int, int))(*(_DWORD *)v21 + 52))(
                     v21,
                     *(_DWORD *)(*(_DWORD *)v21 + 52),
                     v17,
                     v18) )
      v21 = *i;
      ++i;
  }
  else
    result = *(_DWORD *)(a2 + 8);
    if ( result )
      result = (*(int (__fastcall **)(int, signed int))(a2 + 12))(a2, 1);
  return result;
}


int __fastcall GameStore::onPurchaseCanceled(int a1)
{
  *(_DWORD *)(a1 + 56) = 1;
  return (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 24))();
}


int __fastcall GameStore::onStoreInitialized(int result, bool a2)
{
  if ( !*(_DWORD *)(result + 56) )
  {
    *(_DWORD *)(result + 56) = 1;
    *(_BYTE *)(result + 52) = a2;
    result = (*(int (**)(void))(**(_DWORD **)(result + 4) + 8))();
  }
  return result;
}


void __fastcall GameStore::getStoreId(GameStore *this, int a2, int a3)
{
  GameStore::getStoreId(this, a2, a3);
}


int __fastcall GameStore::acknowledgePurchase(int result)
{
  int v1; // r3@2
  bool v2; // zf@2

  if ( *(_BYTE *)(result + 52) )
  {
    v1 = *(_DWORD *)(result + 56);
    v2 = v1 == 4;
    if ( v1 != 4 )
      v2 = v1 == 1;
    if ( v2 )
      result = (*(int (**)(void))(***(_DWORD ***)(result + 8) + 44))();
  }
  return result;
}


int (__cdecl *__fastcall GameStore::onQueryProductsFail(GameStore *this))(int *, int *)
{
  GameStore *v1; // r4@1
  int (__cdecl *result)(int *, int *); // r0@1
  __int64 v3; // kr00_8@3
  int v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+4h] [bp-14h]@3
  int (__cdecl *v6)(int *, int *); // [sp+8h] [bp-10h]@3
  int (__fastcall *v7)(int *, signed int); // [sp+Ch] [bp-Ch]@3

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 1) + 16))();
  result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 14);
  if ( result == (int (__cdecl *)(int *, int *))2 )
  {
    *((_DWORD *)v1 + 14) = 1;
    result = (int (__cdecl *)(int *, int *))*((_DWORD *)v1 + 17);
    if ( result )
    {
      v3 = *(_QWORD *)((char *)v1 + 60);
      v4 = *(_QWORD *)((char *)v1 + 60);
      v5 = HIDWORD(v3);
      *((_DWORD *)v1 + 17) = 0;
      v6 = result;
      v7 = (int (__fastcall *)(int *, signed int))*((_DWORD *)v1 + 18);
      result = (int (__cdecl *)(int *, int *))v7(&v4, 1);
      if ( v6 )
        result = (int (__cdecl *)(int *, int *))v6(&v4, &v4);
    }
  }
  return result;
}


signed int __fastcall GameStore::isTrial(GameStore *this)
{
  __int64 v1; // r4@1
  int v2; // t1@2
  signed int result; // r0@4

  v1 = *((_QWORD *)this + 1);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
    result = 1;
  }
  else
    while ( 1 )
    {
      v2 = *(_DWORD *)v1;
      LODWORD(v1) = v1 + 4;
      if ( !(*(int (**)(void))(*(_DWORD *)v2 + 56))() )
        break;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        return 1;
    }
    result = 0;
  return result;
}


void __fastcall GameStore::~GameStore(GameStore *this)
{
  GameStore::~GameStore(this);
}


unsigned __int64 *__fastcall GameStore::completeQueryPurchasesMultistore(GameStore *this)
{
  char v1; // r4@1
  GameStore *v2; // r8@1
  int v3; // r7@1
  int *v4; // r5@2
  int *i; // r6@2
  signed int v6; // r0@7
  int v7; // r0@15
  _DWORD *v8; // r4@17
  unsigned int *v9; // r2@19
  signed int v10; // r1@21
  _DWORD *v11; // r6@27
  unsigned __int64 *v12; // r0@27
  int v13; // r1@27
  void *v14; // r0@27
  int v16; // [sp+0h] [bp-30h]@1
  int *v17; // [sp+4h] [bp-2Ch]@1
  int *v18; // [sp+8h] [bp-28h]@1

  v1 = 0;
  v2 = this;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v3 = *((_DWORD *)this + 8);
  if ( !v3 )
    goto LABEL_32;
  do
  {
    v4 = (int *)(*(_QWORD *)(v3 + 12) >> 32);
    for ( i = (int *)*(_QWORD *)(v3 + 12); v4 != i; i += 4 )
    {
      if ( v17 == v18 )
      {
        std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::_M_emplace_back_aux<PurchaseInfo const&>(
          (unsigned __int64 *)&v16,
          i);
      }
      else
        PurchaseInfo::PurchaseInfo(v17, i);
        v17 += 4;
    }
    v6 = *(_BYTE *)(v3 + 8);
    v3 = *(_DWORD *)v3;
    if ( v1 & 1 )
      v6 = 1;
    v1 = v6;
    if ( v6 )
      v1 = 1;
  }
  while ( v3 );
  if ( v6 )
    (*(void (__fastcall **)(GameStore *, int *))(*(_DWORD *)v2 + 32))(v2, &v16);
  else
LABEL_32:
    (*(void (__fastcall **)(GameStore *))(*(_DWORD *)v2 + 36))(v2);
  v7 = *((_DWORD *)v2 + 5);
  if ( v7 )
    StoreSynchronizer::syncAllPurchases(v7, (unsigned __int64 *)v2 + 3);
  v8 = (_DWORD *)*((_DWORD *)v2 + 8);
  while ( v8 )
    v11 = v8;
    v12 = (unsigned __int64 *)(v8 + 3);
    v8 = (_DWORD *)*v8;
    std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector(v12);
    v13 = v11[1];
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    operator delete(v11);
  _aeabi_memclr4(*((_QWORD *)v2 + 3), 4 * (*((_QWORD *)v2 + 3) >> 32));
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 0;
  return std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::~vector((unsigned __int64 *)&v16);
}
