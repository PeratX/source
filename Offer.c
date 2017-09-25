

signed int __fastcall Offer::shouldRetryFulfillment(Offer *this)
{
  int v1; // r0@1
  int v2; // r1@1
  __int64 v3; // kr00_8@1
  int v4; // r2@2
  bool v5; // zf@2
  signed int result; // r0@6

  v3 = *((_QWORD *)this + 2);
  v1 = *((_QWORD *)this + 2) >> 32;
  v2 = v3;
  if ( (_DWORD)v3 == v1 )
  {
LABEL_8:
    result = 0;
  }
  else
    while ( 1 )
    {
      v4 = *(_DWORD *)v2;
      v5 = *(_BYTE *)(*(_DWORD *)v2 + 12) == 0;
      if ( *(_BYTE *)(*(_DWORD *)v2 + 12) )
        v5 = *(_DWORD *)(v4 + 16) == 1;
      if ( !v5 && *(_DWORD *)(v4 + 20) < 2 )
        break;
      v2 += 8;
      if ( v1 == v2 )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


signed int __fastcall Offer::isOwned(Offer *this)
{
  int *v1; // r0@1
  int *v2; // r1@1
  __int64 v3; // kr00_8@1
  signed int result; // r0@2
  int v5; // t1@6

  v3 = *((_QWORD *)this + 2);
  v1 = (int *)(*((_QWORD *)this + 2) >> 32);
  v2 = (int *)v3;
  if ( (int *)v3 == v1 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = *v2;
      v2 += 2;
      if ( *(_BYTE *)(v5 + 12) )
        break;
      if ( v1 == v2 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall Offer::setProductType(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


const void **__fastcall Offer::getUnformattedPrice(Offer *this)
{
  int v1; // r2@1
  const void **result; // r0@1

  v1 = *((_DWORD *)this + 3);
  result = &Util::EMPTY_STRING;
  if ( v1 )
    result = (const void **)(v1 + 12);
  return result;
}


int __fastcall Offer::transactFulfillment(int a1, int a2, int a3, void **a4)
{
  int v4; // r5@1
  int (__fastcall *v5)(int, int, int *, void **); // r4@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r2@4
  void *v9; // r0@7
  int v10; // r4@7
  _DWORD *v11; // r5@7
  int v12; // r1@8
  void *v13; // r0@8
  int v14; // r1@9
  void *v15; // r0@9
  void (__fastcall *v16)(_DWORD *, _DWORD *, signed int); // r3@10
  int v17; // r5@13
  unsigned int *v18; // r1@14
  unsigned int v19; // r0@16
  unsigned int *v20; // r6@20
  unsigned int v21; // r0@22
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  void *ptr; // [sp+0h] [bp-20h]@7
  int v28; // [sp+4h] [bp-1Ch]@1
  int v29; // [sp+8h] [bp-18h]@1

  v4 = a1;
  v5 = *(int (__fastcall **)(int, int, int *, void **))(*(_DWORD *)a2 + 16);
  v28 = *(_DWORD *)a3;
  v6 = *(_DWORD *)(a3 + 4);
  v29 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  v9 = *a4;
  *a4 = 0;
  ptr = v9;
  v10 = v5(a2, v4, &v28, &ptr);
  v11 = ptr;
  if ( ptr )
    v12 = *((_DWORD *)ptr + 5);
    v13 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = v11[4];
    v15 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v14 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void (__fastcall *)(_DWORD *, _DWORD *, signed int))v11[2];
    if ( v16 )
      v16(v11, v11, 3);
    operator delete(v11);
  v17 = v29;
  ptr = 0;
  if ( v29 )
    v18 = (unsigned int *)(v29 + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return v10;
}


void __fastcall Offer::setProductInfo(Offer *this, const ProductInfo *a2)
{
  Offer::setProductInfo(this, a2);
}


int *__fastcall Offer::setProductSku(int *a1, int *a2)
{
  int *v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText(a1, a2);
  return v2;
}


int __fastcall Offer::getUnknownPurchases(Offer *this, int a2)
{
  Offer *v2; // r10@1
  int result; // r0@1
  __int64 i; // r6@1
  int v5; // r0@4
  unsigned int *v6; // r0@5
  unsigned int v7; // r1@7
  __int64 v8; // r0@10
  int v9; // r1@11
  unsigned int *v10; // r1@12
  unsigned int v11; // r0@14
  unsigned int *v12; // r2@20
  unsigned int v13; // r1@22
  int v14; // [sp+0h] [bp-28h]@4
  int v15; // [sp+4h] [bp-24h]@4

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  for ( i = *(_QWORD *)(a2 + 16); (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
  {
    result = *(_DWORD *)i;
    if ( *(_BYTE *)(*(_DWORD *)i + 12) && *(_DWORD *)(result + 16) == 2 )
    {
      v14 = *(_DWORD *)i;
      v5 = *(_DWORD *)(i + 4);
      v15 = v5;
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 + 1, v6) );
        }
        else
          ++*v6;
      }
      v8 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
        std::vector<std::weak_ptr<Purchase>,std::allocator<std::weak_ptr<Purchase>>>::_M_emplace_back_aux<std::weak_ptr<Purchase>>(
          (unsigned __int64 *)v2,
          (int)&v14);
      else
        *(_DWORD *)v8 = v14;
        HIDWORD(v8) = v15;
        *(_DWORD *)(v8 + 4) = v15;
        if ( HIDWORD(v8) )
          v10 = (unsigned int *)(v9 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 + 1, v10) );
            LODWORD(v8) = *((_DWORD *)v2 + 1);
          }
          else
            ++*v10;
        *((_DWORD *)v2 + 1) = v8 + 8;
      result = v15;
      if ( v15 )
        v12 = (unsigned int *)(v15 + 8);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    }
  }
  return result;
}


void __fastcall Offer::setProductInfo(Offer *this, const ProductInfo *a2)
{
  Offer *v2; // r4@1
  int *v3; // r6@1
  int *v4; // r5@1
  ProductInfo *v5; // r0@1
  ProductInfo *v6; // r0@2

  v2 = this;
  v3 = (int *)a2;
  v4 = (int *)operator new(0x10u);
  ProductInfo::ProductInfo(v4, v3);
  v5 = (ProductInfo *)*((_DWORD *)v2 + 3);
  *((_DWORD *)v2 + 3) = v4;
  if ( v5 )
  {
    v6 = ProductInfo::~ProductInfo(v5);
    j_j_j__ZdlPv_4((void *)v6);
  }
}


int __fastcall Offer::getNextUnfulfilledPurchase(Offer *this, int a2)
{
  Offer *v2; // r9@1
  int result; // r0@1
  int v4; // r5@1
  int v5; // r10@1
  signed int v6; // r1@2
  int v7; // r2@3
  bool v8; // zf@3
  signed int v9; // r7@6
  int v10; // r4@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r2@14
  unsigned int v14; // r1@16

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  v5 = *(_QWORD *)(a2 + 16) >> 32;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 != v5 )
  {
    v6 = 0x7FFFFFFF;
    result = 0;
    do
    {
      v7 = *(_DWORD *)v4;
      v8 = *(_BYTE *)(*(_DWORD *)v4 + 12) == 0;
      if ( *(_BYTE *)(*(_DWORD *)v4 + 12) )
        v8 = *(_DWORD *)(v7 + 16) == 1;
      if ( !v8 )
      {
        v9 = *(_DWORD *)(v7 + 20);
        if ( v9 < v6 )
        {
          *(_DWORD *)v2 = v7;
          v10 = *(_DWORD *)(v4 + 4);
          if ( v10 )
          {
            v11 = (unsigned int *)(v10 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 + 1, v11) );
              result = *((_DWORD *)v2 + 1);
            }
            else
              ++*v11;
          }
          if ( result )
            v13 = (unsigned int *)(result + 8);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 == 1 )
              (*(void (**)(void))(*(_DWORD *)result + 12))();
          result = v10;
          v6 = v9;
          *((_DWORD *)v2 + 1) = v10;
        }
      }
      v4 += 8;
    }
    while ( v4 != v5 );
  }
  return result;
}


const void **__fastcall Offer::getCurrencyCode(Offer *this)
{
  int v1; // r2@1
  const void **result; // r0@1

  v1 = *((_DWORD *)this + 3);
  result = &Util::EMPTY_STRING;
  if ( v1 )
    result = (const void **)(v1 + 8);
  return result;
}


int __fastcall Offer::Offer(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  int v3; // r3@2
  int result; // r0@2
  unsigned int *v5; // r12@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  sub_119C884((void **)&v7, (const char *)&unk_257BC67);
  sub_119C854((int *)v1, &v7);
  v2 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  v3 = v1 + 4;
  *(_DWORD *)v3 = 6;
  *(_DWORD *)(v3 + 4) = 4;
  *(_DWORD *)(v3 + 8) = 0;
  result = v1;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 24) = 0;
  return result;
}


int __fastcall Offer::setCategory(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


_BOOL4 __fastcall Offer::hasProductInfo(Offer *this)
{
  return *((_DWORD *)this + 3) != 0;
}


unsigned int *__fastcall Offer::addPurchase(int a1, int a2, int *a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r0@1
  int v7; // r6@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r7@11
  unsigned int v11; // r0@13
  int v12; // r0@18
  unsigned int *result; // r0@18
  unsigned int v14; // r1@21
  unsigned int v15; // [sp+4h] [bp-24h]@1
  int v16; // [sp+8h] [bp-20h]@2
  int v17; // [sp+Ch] [bp-1Ch]@1
  char v18; // [sp+10h] [bp-18h]@1

  v4 = a2;
  v5 = a1;
  v17 = a4;
  std::__shared_ptr<Purchase,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Purchase>,PurchaseInfo const&,Fulfillment &>(
    (int)&v15,
    (int)&v18,
    a3,
    &v17);
  v6 = *(_QWORD *)(v4 + 20);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<std::shared_ptr<Purchase>,std::allocator<std::shared_ptr<Purchase>>>::_M_emplace_back_aux<std::shared_ptr<Purchase>>(
      (_QWORD *)(v4 + 16),
      (int)&v15);
  }
  else
    *(_QWORD *)v6 = v15;
    HIDWORD(v6) = v16;
    v16 = 0;
    *(_DWORD *)(v6 + 4) = HIDWORD(v6);
    v15 = 0;
    *(_DWORD *)(v4 + 20) = v6 + 8;
  v7 = v16;
  if ( v16 )
    v8 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
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
  v12 = *(_DWORD *)(v4 + 20);
  *(_DWORD *)v5 = *(_DWORD *)(v12 - 8);
  result = *(unsigned int **)(v12 - 4);
  *(_DWORD *)(v5 + 4) = result;
  if ( result )
    result += 2;
        v14 = __ldrex(result);
      while ( __strex(v14 + 1, result) );
      ++*result;
  return result;
}


int __fastcall Offer::getAllPurchases(Offer *this, int a2)
{
  Offer *v2; // r10@1
  int result; // r0@1
  __int64 i; // r6@1
  int v5; // r0@3
  unsigned int *v6; // r0@4
  unsigned int v7; // r1@6
  __int64 v8; // r0@9
  int v9; // r1@10
  unsigned int *v10; // r1@11
  unsigned int v11; // r0@13
  unsigned int *v12; // r2@19
  unsigned int v13; // r1@21
  int v14; // [sp+0h] [bp-28h]@3
  int v15; // [sp+4h] [bp-24h]@3

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  for ( i = *(_QWORD *)(a2 + 16); (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
  {
    result = *(_DWORD *)i;
    if ( *(_BYTE *)(*(_DWORD *)i + 12) )
    {
      v14 = *(_DWORD *)i;
      v5 = *(_DWORD *)(i + 4);
      v15 = v5;
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 + 1, v6) );
        }
        else
          ++*v6;
      }
      v8 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
        std::vector<std::weak_ptr<Purchase>,std::allocator<std::weak_ptr<Purchase>>>::_M_emplace_back_aux<std::weak_ptr<Purchase>>(
          (unsigned __int64 *)v2,
          (int)&v14);
      else
        *(_DWORD *)v8 = v14;
        HIDWORD(v8) = v15;
        *(_DWORD *)(v8 + 4) = v15;
        if ( HIDWORD(v8) )
          v10 = (unsigned int *)(v9 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 + 1, v10) );
            LODWORD(v8) = *((_DWORD *)v2 + 1);
          }
          else
            ++*v10;
        *((_DWORD *)v2 + 1) = v8 + 8;
      result = v15;
      if ( v15 )
        v12 = (unsigned int *)(v15 + 8);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    }
  }
  return result;
}


signed int __fastcall Offer::matchesSku(int *a1, _BYTE **a2)
{
  signed int v2; // r4@1

  v2 = 0;
  if ( sub_119CA58(a1, *a2, 0, *((_DWORD *)*a2 - 3)) != -1 )
    v2 = 1;
  return v2;
}


const void **__fastcall Offer::getPrice(Offer *this)
{
  int v1; // r2@1
  const void **result; // r0@1

  v1 = *((_DWORD *)this + 3);
  result = &Util::EMPTY_STRING;
  if ( v1 )
    result = (const void **)(v1 + 4);
  return result;
}


signed int __fastcall Offer::hasTransactionHistory(Offer *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( HIDWORD(v1) != (_DWORD)v1 )
    result = 1;
  return result;
}


void **__fastcall Offer::fulfillPurchase(int a1, void ***a2, void *a3)
{
  int v3; // r8@1
  void **result; // r0@1
  void ***v5; // r4@1
  void ***v6; // r10@1
  int v7; // r6@3
  int v8; // r7@4
  unsigned int *v9; // r1@5
  unsigned int *v10; // r5@11
  void **v11; // r1@22

  v3 = a1;
  result = *(void ***)(a1 + 4);
  v6 = (void ***)(*(_QWORD *)(v3 + 16) >> 32);
  v5 = (void ***)*(_QWORD *)(v3 + 16);
  if ( result == (void **)3 )
  {
    if ( v6 != v5 )
    {
      v7 = *(_QWORD *)(v3 + 16);
      result = &pthread_create_ptr;
      do
      {
        v8 = *(_DWORD *)(v7 + 4);
        if ( v8 )
        {
          v9 = (unsigned int *)(v8 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (void **)__ldrex(v9);
            while ( __strex((unsigned int)result - 1, v9) );
          }
          else
            result = (void **)(*v9)--;
          if ( result == (void **)1 )
            v10 = (unsigned int *)(v8 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (void **)__ldrex(v10);
              while ( __strex((unsigned int)result - 1, v10) );
            }
            else
              result = (void **)(*v10)--;
            if ( result == (void **)1 )
              result = (void **)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
        }
        v7 += 8;
      }
      while ( (void ***)v7 != v6 );
    }
    *(_DWORD *)(v3 + 20) = v5;
  }
  else if ( v5 != v6 )
    result = *a2;
    do
      v11 = *v5;
      v5 += 2;
      if ( v11 == result )
        result[4] = a3;
    while ( v6 != v5 );
  return result;
}


signed int __fastcall Offer::isAvailableForPurchase(Offer *this)
{
  int *v1; // r0@2
  int *v2; // r1@2
  __int64 v3; // kr00_8@2
  int v5; // t1@5

  if ( *((_DWORD *)this + 3) )
  {
    v3 = *((_QWORD *)this + 2);
    v1 = (int *)(*((_QWORD *)this + 2) >> 32);
    v2 = (int *)v3;
    if ( v1 == (int *)v3 )
      return 1;
    if ( (int *)v3 == v1 )
    while ( 1 )
    {
      v5 = *v2;
      v2 += 2;
      if ( *(_BYTE *)(v5 + 12) )
        break;
      if ( v1 == v2 )
        return 1;
    }
  }
  return 0;
}


int __fastcall Offer::clearPurchases(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10

  v1 = result;
  v2 = *(_QWORD *)(result + 16);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    result = (int)&pthread_create_ptr;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v5);
          while ( __strex(result - 1, v5) );
        }
        else
          result = (*v5)--;
        if ( result == 1 )
          v6 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          }
          else
            result = (*v6)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 8;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 20) = v2;
  return result;
}


signed int __fastcall Offer::isValidOffer(Offer *this)
{
  signed int result; // r0@2

  if ( (unsigned int)*((_QWORD *)this + 2) == *((_QWORD *)this + 2) >> 32 )
    result = *((_DWORD *)this + 3) != 0;
  else
    result = 1;
  return result;
}


Offer *__fastcall Offer::~Offer(Offer *this)
{
  Offer *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  ProductInfo *v9; // r0@20
  ProductInfo *v10; // r0@21
  int *v11; // r0@22
  unsigned int *v13; // r2@24
  signed int v14; // r1@26

  v1 = this;
  v3 = *((_QWORD *)this + 2) >> 32;
  v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  v9 = (ProductInfo *)*((_DWORD *)v1 + 3);
  if ( v9 )
    v10 = ProductInfo::~ProductInfo(v9);
    operator delete((void *)v10);
  *((_DWORD *)v1 + 3) = 0;
  v11 = (int *)(*(_DWORD *)v1 - 12);
  if ( v11 != &dword_28898C0 )
    v13 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  return v1;
}
