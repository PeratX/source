

void __fastcall TickingAreaListBase::findUsableDefaultName(TickingAreaListBase *this, unsigned __int64 *a2, __int64 a3)
{
  TickingAreaListBase::findUsableDefaultName(this, a2, a3);
}


signed int __fastcall TickingAreaListBase::hasTickingAreaNamed(_QWORD *a1, _BYTE **a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  _BYTE **v4; // r4@1
  _BYTE **v5; // r0@3
  signed int result; // r0@5

  *(_QWORD *)&v2 = *a1;
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_5:
    result = 0;
  }
  else
    while ( 1 )
    {
      if ( !(*(int (**)(void))(**(_DWORD **)v2 + 20))() )
      {
        v5 = (_BYTE **)(*(int (**)(void))(**(_DWORD **)v2 + 12))();
        if ( j_Util::compareNoCase(*((_DWORD *)*v5 - 3), *v5, *((_DWORD *)*v4 - 3), *v4) )
          break;
      }
      v2 += 8;
      if ( v3 == v2 )
        goto LABEL_5;
    }
    result = 1;
  return result;
}


void __fastcall TickingAreaListBase::getTickingAreasDescription(TickingAreaListBase *this, unsigned __int64 *a2)
{
  TickingAreaListBase *v2; // r11@1
  int v3; // r6@1
  int i; // r7@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  __int64 v7; // r0@11
  int v8; // r1@12
  void *v9; // r0@14
  __int64 v10; // [sp+4h] [bp-4Ch]@11
  int v11; // [sp+Ch] [bp-44h]@12
  int v12; // [sp+10h] [bp-40h]@12
  int v13; // [sp+14h] [bp-3Ch]@12
  int v14; // [sp+18h] [bp-38h]@12
  int v15; // [sp+1Ch] [bp-34h]@12
  void *v16; // [sp+20h] [bp-30h]@12
  char v17; // [sp+24h] [bp-2Ch]@12

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = *a2 >> 32;
  for ( i = *a2; i != v3; i += 8 )
  {
    (*(void (__fastcall **)(__int64 *))(**(_DWORD **)i + 40))(&v10);
    v7 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      std::vector<TickingAreaDescription,std::allocator<TickingAreaDescription>>::_M_emplace_back_aux<TickingAreaDescription>(
        (unsigned __int64 *)v2,
        (int)&v10);
      v8 = (int)v16;
    }
    else
      *(_QWORD *)v7 = v10;
      *(_DWORD *)(v7 + 8) = v11;
      *(_DWORD *)(v7 + 12) = v12;
      *(_DWORD *)(v7 + 16) = v13;
      *(_DWORD *)(v7 + 20) = v14;
      *(_DWORD *)(v7 + 24) = v15;
      *(_DWORD *)(v7 + 28) = v16;
      HIDWORD(v7) = &unk_28898CC;
      v16 = &unk_28898CC;
      *(_BYTE *)(v7 + 32) = v17;
      *((_DWORD *)v2 + 1) = v7 + 36;
    v9 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v8 - 4);
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


char *__fastcall TickingAreaListBase::findAreasContaining(TickingAreaListBase *this, const BlockPos *a2, int a3)
{
  TickingAreaListBase *v3; // r9@1
  char *result; // r0@1
  int v5; // r5@1
  __int64 i; // r6@1
  int v7; // r0@3
  int v8; // r1@4
  char *v9; // r1@7
  __int64 v10; // r0@9
  int v11; // r1@10
  unsigned int *v12; // r1@11
  unsigned int v13; // r0@13

  v3 = this;
  result = 0;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  v5 = a3;
  *((_DWORD *)v3 + 2) = 0;
  for ( i = *(_QWORD *)a2; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
  {
    result = (char *)(*(int (**)(void))(**(_DWORD **)i + 20))();
    if ( !result )
    {
      v7 = (*(int (**)(void))(**(_DWORD **)i + 36))();
      result = (char *)(*(int (**)(void))(*(_DWORD *)v7 + 24))();
      if ( *((_DWORD *)result + 9) >= 1 )
      {
        v8 = *(_DWORD *)v5 >> 4;
        if ( v8 >= *(_DWORD *)result
          && v8 <= *((_DWORD *)result + 3)
          && *((_DWORD *)result + 1) <= *((_DWORD *)result + 4) )
        {
          v9 = (char *)(*(_DWORD *)(v5 + 8) >> 4);
          if ( (signed int)v9 >= *((_DWORD *)result + 2) )
          {
            result = (char *)*((_DWORD *)result + 5);
            if ( (signed int)v9 <= (signed int)result )
            {
              v10 = *(_QWORD *)((char *)v3 + 4);
              if ( (_DWORD)v10 == HIDWORD(v10) )
              {
                result = std::vector<std::shared_ptr<ITickingArea>,std::allocator<std::shared_ptr<ITickingArea>>>::_M_emplace_back_aux<std::shared_ptr<ITickingArea> const&>(
                           (unsigned __int64 *)v3,
                           i);
              }
              else
                *(_DWORD *)v10 = *(_DWORD *)i;
                HIDWORD(v10) = *(_DWORD *)(i + 4);
                *(_DWORD *)(v10 + 4) = HIDWORD(v10);
                if ( HIDWORD(v10) )
                {
                  v12 = (unsigned int *)(v11 + 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v13 = __ldrex(v12);
                    while ( __strex(v13 + 1, v12) );
                    LODWORD(v10) = *((_DWORD *)v3 + 1);
                  }
                  else
                    ++*v12;
                }
                result = (char *)(v10 + 8);
                *((_DWORD *)v3 + 1) = result;
            }
          }
        }
      }
    }
  }
  return result;
}


int __fastcall TickingAreaListBase::removeAreas(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r11@1
  int result; // r0@1
  int v5; // r6@1
  int i; // r7@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  __int64 v9; // r0@11
  int v10; // r1@12
  void *v11; // r0@14
  __int64 v12; // [sp+4h] [bp-4Ch]@11
  int v13; // [sp+Ch] [bp-44h]@12
  int v14; // [sp+10h] [bp-40h]@12
  int v15; // [sp+14h] [bp-3Ch]@12
  int v16; // [sp+18h] [bp-38h]@12
  int v17; // [sp+1Ch] [bp-34h]@12
  void *v18; // [sp+20h] [bp-30h]@12
  char v19; // [sp+24h] [bp-2Ch]@12

  v3 = a1;
  result = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  v5 = *a3 >> 32;
  for ( i = *a3; i != v5; i += 8 )
  {
    (*(void (__fastcall **)(__int64 *))(**(_DWORD **)i + 40))(&v12);
    v9 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      std::vector<TickingAreaDescription,std::allocator<TickingAreaDescription>>::_M_emplace_back_aux<TickingAreaDescription>(
        (unsigned __int64 *)v3,
        (int)&v12);
      v10 = (int)v18;
    }
    else
      *(_QWORD *)v9 = v12;
      *(_DWORD *)(v9 + 8) = v13;
      *(_DWORD *)(v9 + 12) = v14;
      *(_DWORD *)(v9 + 16) = v15;
      *(_DWORD *)(v9 + 20) = v16;
      *(_DWORD *)(v9 + 24) = v17;
      *(_DWORD *)(v9 + 28) = v18;
      HIDWORD(v9) = &unk_28898CC;
      v18 = &unk_28898CC;
      *(_BYTE *)(v9 + 32) = v19;
      *(_DWORD *)(v3 + 4) = v9 + 36;
    v11 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v10 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
    result = (*(int (**)(void))(**(_DWORD **)i + 80))();
  }
  return result;
}


int __fastcall TickingAreaListBase::removeAllAreas(TickingAreaListBase *this, unsigned __int64 *a2)
{
  TickingAreaListBase *v2; // r11@1
  int result; // r0@1
  int v4; // r6@1
  int i; // r7@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  __int64 v8; // r0@12
  int v9; // r1@13
  void *v10; // r0@15
  __int64 v11; // [sp+4h] [bp-4Ch]@12
  int v12; // [sp+Ch] [bp-44h]@13
  int v13; // [sp+10h] [bp-40h]@13
  int v14; // [sp+14h] [bp-3Ch]@13
  int v15; // [sp+18h] [bp-38h]@13
  int v16; // [sp+1Ch] [bp-34h]@13
  void *v17; // [sp+20h] [bp-30h]@13
  char v18; // [sp+24h] [bp-2Ch]@13

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  v4 = *a2 >> 32;
  for ( i = *a2; i != v4; i += 8 )
  {
    result = (*(int (**)(void))(**(_DWORD **)i + 20))();
    if ( !result )
    {
      (*(void (__fastcall **)(__int64 *))(**(_DWORD **)i + 40))(&v11);
      v8 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        std::vector<TickingAreaDescription,std::allocator<TickingAreaDescription>>::_M_emplace_back_aux<TickingAreaDescription>(
          (unsigned __int64 *)v2,
          (int)&v11);
        v9 = (int)v17;
      }
      else
        *(_QWORD *)v8 = v11;
        *(_DWORD *)(v8 + 8) = v12;
        *(_DWORD *)(v8 + 12) = v13;
        *(_DWORD *)(v8 + 16) = v14;
        *(_DWORD *)(v8 + 20) = v15;
        *(_DWORD *)(v8 + 24) = v16;
        *(_DWORD *)(v8 + 28) = v17;
        HIDWORD(v8) = &unk_28898CC;
        v17 = &unk_28898CC;
        *(_BYTE *)(v8 + 32) = v18;
        *((_DWORD *)v2 + 1) = v8 + 36;
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      result = (*(int (**)(void))(**(_DWORD **)i + 80))();
    }
  }
  return result;
}


int __fastcall TickingAreaListBase::countStandaloneTickingAreas(TickingAreaListBase *this)
{
  int *v1; // r5@1 OVERLAPPED
  int *v2; // r6@1 OVERLAPPED
  int v3; // r4@1
  int v4; // t1@2

  *(_QWORD *)&v1 = *(_QWORD *)this;
  v3 = 0;
  while ( v2 != v1 )
  {
    v4 = *v1;
    v1 += 2;
    if ( !(*(int (**)(void))(*(_DWORD *)v4 + 20))() )
      ++v3;
  }
  return v3;
}


void __fastcall TickingAreaListBase::getTickingAreasDescription(TickingAreaListBase *this, unsigned __int64 *a2)
{
  TickingAreaListBase::getTickingAreasDescription(this, a2);
}


int __fastcall TickingAreaListBase::processUpdates(int result)
{
  __int64 i; // r4@1
  int v2; // t1@2

  for ( i = *(_QWORD *)result; HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 56))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 8;
  }
  return result;
}


int __fastcall TickingAreaListBase::destroyAreas(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10

  v1 = result;
  v2 = *(_QWORD *)result;
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
  *(_DWORD *)(v1 + 4) = v2;
  return result;
}


void __fastcall TickingAreaListBase::findUsableDefaultName(TickingAreaListBase *this, unsigned __int64 *a2, __int64 a3)
{
  int *v3; // r4@1
  unsigned __int64 *v4; // r5@1
  int v5; // r11@1
  void *v6; // r0@3
  int v7; // r8@4
  int v8; // r9@4
  _BYTE **v9; // r0@6
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+0h] [bp-38h]@1
  int v13; // [sp+4h] [bp-34h]@3

  v3 = (int *)this;
  v4 = a2;
  v5 = 0;
  *(_DWORD *)this = &unk_28898CC;
  v12 = &pthread_create;
  while ( 1 )
  {
    LODWORD(a3) = v5;
    j_Util::format((Util *)&v13, "Area%d", a3, v12);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v13);
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v13 - 4);
      if ( v12 )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = *v4 >> 32;
    v8 = *v4;
    if ( v8 == v7 )
      break;
    while ( 1 )
      if ( !(*(int (**)(void))(**(_DWORD **)v8 + 20))() )
        v9 = (_BYTE **)(*(int (**)(void))(**(_DWORD **)v8 + 12))();
        if ( j_Util::compareNoCase(*((_DWORD *)*v9 - 3), *v9, *(_DWORD *)(*v3 - 12), (_BYTE *)*v3) )
          break;
      v8 += 8;
      if ( v7 == v8 )
        return;
    ++v5;
  }
}


signed int __fastcall TickingAreaListBase::empty(TickingAreaListBase *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


unsigned int *__fastcall TickingAreaListBase::getAreaFor(int a1, __int64 *a2, unsigned __int64 *a3)
{
  __int64 v3; // r6@1
  unsigned __int64 *v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r0@4
  unsigned int *result; // r0@6
  unsigned int v8; // r1@11

  v3 = *a2;
  v4 = a3;
  v5 = a1;
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
LABEL_6:
    result = 0;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
  }
  else
    while ( 1 )
    {
      if ( (*(int (**)(void))(**(_DWORD **)v3 + 20))() == 1 && !(*(int (**)(void))(**(_DWORD **)v3 + 76))() )
      {
        v6 = *(_QWORD *)(*(int (**)(void))(**(_DWORD **)v3 + 16))();
        HIDWORD(v6) ^= *v4 >> 32;
        if ( v6 == (unsigned int)*v4 )
          break;
      }
      LODWORD(v3) = v3 + 8;
      if ( HIDWORD(v3) == (_DWORD)v3 )
        goto LABEL_6;
    }
    *(_DWORD *)v5 = *(_DWORD *)v3;
    result = *(unsigned int **)(v3 + 4);
    *(_DWORD *)(v5 + 4) = result;
    if ( result )
      ++result;
      if ( &pthread_create )
        __dmb();
        do
          v8 = __ldrex(result);
        while ( __strex(v8 + 1, result) );
      else
        ++*result;
  return result;
}


char *__fastcall TickingAreaListBase::add(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorISt10shared_ptrI12ITickingAreaESaIS2_EE19_M_emplace_back_auxIJSt10unique_ptrIS1_St14default_deleteIS1_EEEEEvDpOT_(
               (unsigned __int64 *)a1,
               a2);
  }
  else
    std::__shared_ptr<ITickingArea,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<ITickingArea,std::default_delete<ITickingArea>>(
      v3,
      a2);
    result = (char *)(*(_DWORD *)(v2 + 4) + 8);
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


int __fastcall TickingAreaListBase::tickSeasons(int result, Random *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)result; v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 48))() )
  {
    v4 = *v2;
    v2 += 2;
  }
  return result;
}


signed int __fastcall TickingAreaListBase::tick(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 *v2; // r5@1
  _QWORD *v3; // r9@1
  signed int result; // r0@1
  int v5; // r7@1
  unsigned __int64 v6; // kr00_8@1
  unsigned int v7; // r6@2

  v2 = a1;
  v3 = a2;
  v6 = *a1;
  result = *a1 >> 32;
  v5 = v6;
  if ( result != (_DWORD)v6 )
  {
    v7 = 0;
    do
    {
      *v3;
      (*(void (**)(void))(**(_DWORD **)(v5 + 8 * v7) + 44))();
      v5 = *v2;
      ++v7;
      result = (*v2 >> 32) - v5;
    }
    while ( v7 < result >> 3 );
  }
  return result;
}


void __fastcall TickingAreaListBase::processRemoves(TickingAreaListBase *this)
{
  TickingAreaListBase *v1; // r10@1
  _DWORD *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r0@3
  int v5; // r1@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  _DWORD *v8; // r0@9
  int v9; // r1@10
  unsigned int *v10; // r1@11
  unsigned int v11; // r0@13
  _DWORD *v12; // r1@22
  int v13; // r2@22
  int v14; // r0@22
  int v15; // r7@22 OVERLAPPED
  void *v16; // r8@22 OVERLAPPED
  int v17; // r1@24
  int v18; // r6@25
  unsigned int *v19; // r1@26
  unsigned int v20; // r0@28
  unsigned int *v21; // r4@32
  unsigned int v22; // r0@34
  int v23; // r4@43
  _DWORD *v24; // r6@43
  int v25; // r7@44
  unsigned int *v26; // r1@45
  unsigned int v27; // r0@47
  unsigned int *v28; // r5@51
  unsigned int v29; // r0@53
  void *v30; // [sp+0h] [bp-38h]@1
  _DWORD *v31; // [sp+4h] [bp-34h]@1
  _DWORD *v32; // [sp+8h] [bp-30h]@1
  _DWORD *v33; // [sp+Ch] [bp-2Ch]@1
  _DWORD *v34; // [sp+10h] [bp-28h]@1
  _DWORD *v35; // [sp+14h] [bp-24h]@1

  v1 = this;
  v34 = 0;
  v35 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v2 = (_DWORD *)(*(_QWORD *)this >> 32);
  v3 = *(_QWORD *)this;
  if ( (_DWORD *)v3 == v2 )
  {
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v12 = 0;
    v13 = 0;
  }
  else
    do
    {
      if ( (*(int (**)(void))(**(_DWORD **)v3 + 76))() == 1 )
      {
        v4 = v31;
        if ( v31 == v32 )
        {
          std::vector<std::shared_ptr<ITickingArea>,std::allocator<std::shared_ptr<ITickingArea>>>::_M_emplace_back_aux<std::shared_ptr<ITickingArea>&>(
            (unsigned __int64 *)&v30,
            v3);
        }
        else
          *v31 = *(_DWORD *)v3;
          v5 = *(_DWORD *)(v3 + 4);
          v4[1] = v5;
          if ( v5 )
          {
            v6 = (unsigned int *)(v5 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v7 = __ldrex(v6);
              while ( __strex(v7 + 1, v6) );
              v4 = v31;
            }
            else
              ++*v6;
          }
          v31 = v4 + 2;
      }
      else
        v8 = v34;
        if ( v34 == v35 )
            (unsigned __int64 *)&v33,
          *v34 = *(_DWORD *)v3;
          v9 = *(_DWORD *)(v3 + 4);
          v8[1] = v9;
          if ( v9 )
            v10 = (unsigned int *)(v9 + 4);
                v11 = __ldrex(v10);
              while ( __strex(v11 + 1, v10) );
              v8 = v34;
              ++*v10;
          v34 = v8 + 2;
      v3 += 8;
    }
    while ( (_DWORD *)v3 != v2 );
    v12 = v34;
    v13 = (int)v33;
    v14 = (int)v35;
    *(_QWORD *)&v15 = *(_QWORD *)&v30;
    v2 = (_DWORD *)(*(_QWORD *)v1 >> 32);
    v3 = *(_QWORD *)v1;
  *(_DWORD *)v1 = v13;
  v33 = (_DWORD *)v3;
  *((_DWORD *)v1 + 1) = v12;
  v34 = v2;
  v17 = *((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = v14;
  v35 = (_DWORD *)v17;
  if ( (void *)v15 != v16 )
      v18 = *(_DWORD *)(v15 + 4);
      if ( v18 )
        v19 = (unsigned int *)(v18 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          v21 = (unsigned int *)(v18 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          if ( &pthread_create )
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
          else
            v22 = (*v21)--;
          if ( v22 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
      v15 += 8;
    while ( (void *)v15 != v16 );
    v16 = v30;
  if ( v16 )
    j_operator delete(v16);
  v24 = v34;
  v23 = (int)v33;
  if ( v33 != v34 )
      v25 = *(_DWORD *)(v23 + 4);
      if ( v25 )
        v26 = (unsigned int *)(v25 + 4);
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
      v23 += 8;
    while ( (_DWORD *)v23 != v24 );
    v23 = (int)v33;
  if ( v23 )
    j_operator delete((void *)v23);
}


signed int __fastcall TickingAreaListBase::_shouldRemoveArea(int *a1, int a2, __int64 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  __int64 *v5; // r7@1
  int v6; // r0@2
  int v7; // r0@2
  __int64 v8; // kr00_8@2
  int v9; // r5@2
  int v10; // r1@2
  int v11; // r0@2
  signed int result; // r0@11

  v3 = *a1;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(**(_DWORD **)(*a1 + 8 * a2) + 24))() )
    goto LABEL_15;
  v6 = (*(int (**)(void))(**(_DWORD **)(v3 + 8 * v4) + 36))();
  v7 = (*(int (**)(void))(*(_DWORD *)v6 + 24))();
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_DWORD *)(v7 + 20);
  v10 = *(_DWORD *)v7 + HIDWORD(v8);
  v11 = *(_DWORD *)(v7 + 44);
  _R2 = (v8 + v9 + 1) * v11;
  _R0 = v11 * (v10 + 1);
  __asm
  {
    VMOV            S0, R2
    VCVT.F32.S32    S2, S0
    VMOV            S0, R0
    VCVT.F32.S32    S4, S0
  }
  _R0 = *v5;
  __asm { VLDR            S0, =3.4028e38 }
  if ( (_DWORD)_R0 == HIDWORD(_R0) )
    __asm { VMOV.F32        S16, S0 }
  else
    __asm
    {
      VMOV.F32        S6, #0.5
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
    }
    do
      __asm
      {
        VLDR            S6, [R0]
        VLDR            S8, [R0,#8]
      }
      LODWORD(_R0) = _R0 + 12;
        VSUB.F32        S6, S6, S4
        VSUB.F32        S8, S8, S2
        VMUL.F32        S6, S6, S6
        VMUL.F32        S8, S8, S8
        VADD.F32        S16, S8, S6
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S16, S0 }
      __asm { VMOV.F32        S0, S16 }
    while ( !_ZF );
  _R0 = (*(int (**)(void))(**(_DWORD **)(v3 + 8 * v4) + 28))();
    VMOV.F32        S0, #4.0
    VMOV            S2, R0
    VADD.F32        S0, S2, S0
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_15:
    result = 0;
    result = 1;
  return result;
}


char *__fastcall TickingAreaListBase::findAreasNamed(int a1, unsigned __int64 *a2, _BYTE **a3)
{
  int v3; // r9@1
  char *result; // r0@1
  _BYTE **v5; // r8@1
  int v6; // r4@1
  int i; // r6@1
  _BYTE *v8; // r7@3
  int v9; // r5@3
  _BYTE **v10; // r0@3
  __int64 v11; // r0@4
  int v12; // r1@5
  unsigned int *v13; // r1@6
  unsigned int v14; // r0@8

  v3 = a1;
  result = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v5 = a3;
  *(_DWORD *)(v3 + 8) = 0;
  v6 = *a2 >> 32;
  for ( i = *a2; i != v6; i += 8 )
  {
    result = (char *)(*(int (**)(void))(**(_DWORD **)i + 20))();
    if ( !result )
    {
      v8 = *v5;
      v9 = *((_DWORD *)*v5 - 3);
      v10 = (_BYTE **)(*(int (**)(void))(**(_DWORD **)i + 12))();
      result = (char *)j_Util::compareNoCase(v9, v8, *((_DWORD *)*v10 - 3), *v10);
      if ( result == (char *)1 )
      {
        v11 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v11 == HIDWORD(v11) )
        {
          result = std::vector<std::shared_ptr<ITickingArea>,std::allocator<std::shared_ptr<ITickingArea>>>::_M_emplace_back_aux<std::shared_ptr<ITickingArea> const&>(
                     (unsigned __int64 *)v3,
                     i);
        }
        else
          *(_DWORD *)v11 = *(_DWORD *)i;
          HIDWORD(v11) = *(_DWORD *)(i + 4);
          *(_DWORD *)(v11 + 4) = HIDWORD(v11);
          if ( HIDWORD(v11) )
          {
            v13 = (unsigned int *)(v12 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 + 1, v13) );
              LODWORD(v11) = *(_DWORD *)(v3 + 4);
            }
            else
              ++*v13;
          }
          result = (char *)(v11 + 8);
          *(_DWORD *)(v3 + 4) = result;
      }
    }
  }
  return result;
}


void __fastcall TickingAreaListBase::processRemoves(TickingAreaListBase *this)
{
  TickingAreaListBase::processRemoves(this);
}
