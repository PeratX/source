

char *__fastcall ResourcePackManager::getGlobalStackFromFullStack(ResourcePackManager *this, ResourcePackStack *a2)
{
  ResourcePackManager *v2; // r5@1
  ResourcePackStack *v3; // r4@1
  char *result; // r0@1
  __int64 v5; // kr00_8@1
  int v6; // r9@2
  __int64 v7; // kr08_8@2
  int v8; // r8@2
  signed int v9; // r7@5
  signed int v10; // r6@5
  signed int v11; // r0@7
  bool v12; // zf@7
  int v13; // r5@11
  int v14; // r7@11
  __int64 v15; // kr10_8@12
  int v16; // r6@12
  int *v17; // r0@13
  __int64 v18; // r2@13

  v2 = this;
  v3 = a2;
  v5 = *(_QWORD *)(*((_DWORD *)this + 14) + 4);
  result = (char *)(*(_QWORD *)(*((_DWORD *)this + 14) + 4) >> 32);
  if ( (char *)v5 != result )
  {
    v6 = *((_DWORD *)v2 + 16);
    v7 = *(_QWORD *)(v6 + 4);
    v8 = -286331153 * ((HIDWORD(v7) - (signed int)v7) >> 3);
    if ( HIDWORD(v7) - (signed int)v7 >= 1 && PackInstance::operator==(v7, v5) != 1 )
    {
      v9 = 1;
      v10 = 120;
      while ( v9 < v8 )
      {
        v11 = PackInstance::operator==(*(_DWORD *)(v6 + 4) + v10, *(_DWORD *)(*((_DWORD *)v2 + 14) + 4));
        v10 += 120;
        v12 = v11 == 0;
        result = (char *)v9++;
        if ( !v12 )
          goto LABEL_10;
      }
      result = (char *)v9;
    }
    else
      result = 0;
LABEL_10:
    if ( (signed int)result < v8 )
      v13 = v8 - (_DWORD)result;
      v14 = 120 * (_DWORD)result;
      do
        v15 = *((_QWORD *)v3 + 1);
        v16 = *(_DWORD *)(v6 + 4) + v14;
        if ( (_DWORD)v15 == HIDWORD(v15) )
        {
          result = std::vector<PackInstance,std::allocator<PackInstance>>::_M_emplace_back_aux<PackInstance const&>(
                     (unsigned __int64 *)((char *)v3 + 4),
                     *(_DWORD *)(v6 + 4) + v14);
        }
        else
          v17 = PackReport::PackReport((int *)v15, (int *)(*(_DWORD *)(v6 + 4) + v14));
          v18 = *(_QWORD *)(v16 + 104);
          *((_BYTE *)v17 + 112) = *(_BYTE *)(v16 + 112);
          *((_QWORD *)v17 + 13) = v18;
          result = (char *)(*((_DWORD *)v3 + 2) + 120);
          *((_DWORD *)v3 + 2) = result;
        v14 += 120;
        --v13;
      while ( v13 );
  }
  return result;
}


int __fastcall ResourcePackManager::ensureSupportedSubpacks(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  int v3; // [sp+4h] [bp-14h]@1

  v1 = this;
  v3 = ContentTierManager::getContentTierInfo(*((ContentTierManager **)this + 20));
  ResourcePackStack::ensureSupportedSubpacks(*((_DWORD *)v1 + 12), &v3);
  ResourcePackStack::ensureSupportedSubpacks(*((_DWORD *)v1 + 13), &v3);
  ResourcePackStack::ensureSupportedSubpacks(*((_DWORD *)v1 + 14), &v3);
  return ResourcePackStack::ensureSupportedSubpacks(*((_DWORD *)v1 + 15), &v3);
}


int __fastcall ResourcePackManager::_getPackForResource(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int result; // r0@4

  v2 = a2;
  v4 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4) >> 32;
  v3 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4);
  if ( v3 == v4 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( PackInstance::hasResource(v3, v2) != 1 )
    {
      v3 += 120;
      if ( v4 == v3 )
        goto LABEL_4;
    }
    result = v3;
  return result;
}


void __fastcall ResourcePackManager::setPackSourceReport(int a1, int a2)
{
  ResourcePackManager::setPackSourceReport(a1, a2);
}


void __fastcall ResourcePackManager::getPath(int *a1, int a2, int *a3, unsigned __int64 *a4)
{
  ResourcePackManager::getPath(a1, a2, a3, a4);
}


void __fastcall ResourcePackManager::getPath(int *a1, int a2, int *a3, unsigned __int64 *a4)
{
  int *v4; // r6@1
  PackInstance *v5; // r7@1
  const void **v6; // r8@2
  const void **j; // r11@2
  int v8; // r0@6
  const void **v9; // r0@6
  const void **v10; // r0@6
  char *v11; // r0@6
  void *v12; // r0@7
  signed int v13; // r5@8
  void *v14; // r0@10
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  PackInstance *i; // [sp+8h] [bp-40h]@1
  unsigned __int64 *v22; // [sp+Ch] [bp-3Ch]@1
  int *v23; // [sp+10h] [bp-38h]@1
  int v24; // [sp+14h] [bp-34h]@6
  char *v25; // [sp+18h] [bp-30h]@6
  int v26; // [sp+1Ch] [bp-2Ch]@5

  v22 = a4;
  v23 = a3;
  v4 = a1;
  v5 = (PackInstance *)*(_QWORD *)(*(_DWORD *)(a2 + 64) + 4);
  for ( i = (PackInstance *)(*(_QWORD *)(*(_DWORD *)(a2 + 64) + 4) >> 32); v5 != i; v5 = (PackInstance *)((char *)v5 + 120) )
  {
    v6 = (const void **)(*a4 >> 32);
    for ( j = (const void **)*a4; j != v6; ++j )
    {
      sub_21E8AF4(&v26, v23);
      sub_21E72F0((const void **)&v26, j);
      if ( PackInstance::hasResource((int)v5, (int)&v26) == 1 )
      {
        v8 = PackInstance::getResourceLocation(v5);
        ResourceLocation::getFullPath((ResourceLocation *)&v24, v8);
        v9 = sub_21E7408((const void **)&v24, "/", 1u);
        v25 = (char *)*v9;
        *v9 = &unk_28898CC;
        v10 = sub_21E72F0((const void **)&v25, (const void **)&v26);
        *v4 = (int)*v10;
        *v10 = &unk_28898CC;
        v11 = v25 - 12;
        if ( (int *)(v25 - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        }
        v12 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v24 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        v13 = 1;
      }
      else
        v13 = 0;
      v14 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v26 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      if ( v13 )
        return;
    }
    a4 = v22;
  }
  sub_21E8AF4(v4, (int *)&Util::EMPTY_STRING);
}


_DWORD *__fastcall ResourcePackManager::registerResourcePackListener(int a1, unsigned int a2)
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
  v3 = a1 + 20;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = a2 % *(_DWORD *)(a1 + 24);
  result = *(_DWORD **)(*(_DWORD *)(a1 + 20) + 4 * v5);
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
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIP20ResourcePackListenerS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
                         v3,
                         v5,
                         v2,
                         (int)v10);
  return result;
}


int __fastcall ResourcePackManager::unRegisterAllResourcePackListener(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  int result; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 7);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 20), 4 * (*(_QWORD *)((char *)v1 + 20) >> 32));
  result = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  return result;
}


signed int __fastcall ResourcePackManager::load(int a1, int a2, const void **a3)
{
  const void **v3; // r4@1
  int v4; // r5@1
  __int64 v5; // r6@1
  size_t v6; // r2@7
  signed int result; // r0@8

  v3 = a3;
  v4 = a2;
  v5 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4);
  if ( (_DWORD)v5 != HIDWORD(v5) )
  {
    while ( PackInstance::hasResource(v5, v4) != 1 )
    {
      LODWORD(v5) = v5 + 120;
      if ( HIDWORD(v5) == (_DWORD)v5 )
        goto LABEL_7;
    }
    if ( (_DWORD)v5 )
      PackInstance::getResource(v5, v4, v3);
  }
LABEL_7:
  v6 = *((_DWORD *)*v3 - 3);
  if ( v6 == *((_DWORD *)Util::EMPTY_STRING - 3) )
    result = memcmp(*v3, Util::EMPTY_STRING, v6) != 0;
  else
    result = 1;
  return result;
}


char *__fastcall ResourcePackManager::findInPacks(ResourcePackManager *this, const ResourceLocation *a2, int a3)
{
  ResourcePackManager *v3; // r9@1
  int v4; // r8@1
  char *result; // r0@1
  PackInstance *i; // r5@1
  PackInstance *v7; // r7@1
  PackManifest *v8; // r0@3
  char *v9; // r6@3
  __int64 v10; // kr08_8@3
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r3@4

  v3 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = a3;
  *((_DWORD *)this + 2) = 0;
  result = (char *)*((_DWORD *)a2 + 16);
  v7 = (PackInstance *)(*(_QWORD *)(result + 4) >> 32);
  for ( i = (PackInstance *)*(_QWORD *)(result + 4); v7 != i; i = (PackInstance *)((char *)i + 120) )
  {
    result = (char *)PackInstance::hasResource((int)i, v4);
    if ( result == (char *)1 )
    {
      v8 = (PackManifest *)PackInstance::getManifest(i);
      v9 = PackManifest::getIdentity(v8);
      v10 = *(_QWORD *)((char *)v3 + 4);
      if ( (_DWORD)v10 == HIDWORD(v10) )
      {
        result = std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<PackIdVersion const&>(
                   (unsigned __int64 *)v3,
                   (int)v9);
      }
      else
        v11 = *((_DWORD *)v9 + 1);
        v12 = *((_DWORD *)v9 + 2);
        v13 = *((_DWORD *)v9 + 3);
        *(_DWORD *)v10 = *(_DWORD *)v9;
        *(_DWORD *)(v10 + 4) = v11;
        *(_DWORD *)(v10 + 8) = v12;
        *(_DWORD *)(v10 + 12) = v13;
        SemVersion::SemVersion(v10 + 16, (int)(v9 + 16));
        *(_BYTE *)(v10 + 40) = v9[40];
        result = (char *)(v10 + 48);
        *((_DWORD *)v3 + 1) = v10 + 48;
    }
  }
  return result;
}


void __fastcall ResourcePackManager::getPathContainingResource(int *a1, int a2, int *a3, unsigned __int64 *a4)
{
  int *v4; // r4@1
  unsigned __int64 *v5; // r6@1
  int *v6; // r10@1
  PackInstance *v7; // r7@1
  int *v8; // r1@2
  const void **v9; // r5@3
  const void **v10; // r11@3
  ResourceLocation *v11; // r6@3
  int *v12; // r4@3
  unsigned int *v13; // r2@5
  signed int v14; // r1@7
  int v15; // r0@14
  signed int v16; // r8@14
  void *v17; // r0@16
  PackReport *v18; // r0@21
  PackReport *v19; // r4@21
  PackInstance *v20; // [sp+8h] [bp-40h]@1
  unsigned __int64 *v21; // [sp+Ch] [bp-3Ch]@1
  int v22; // [sp+10h] [bp-38h]@5
  void *ptr; // [sp+14h] [bp-34h]@1
  PackInstance *v24; // [sp+18h] [bp-30h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v21 = a4;
  std::vector<PackInstance,std::allocator<PackInstance>>::vector(
    (int)&ptr,
    (unsigned __int64 *)(*(_DWORD *)(a2 + 64) + 4));
  v7 = (PackInstance *)ptr;
  v20 = v24;
  if ( ptr == (void *)v24 )
  {
LABEL_20:
    sub_21E8AF4(v4, (int *)&Util::EMPTY_STRING);
  }
  else
    v8 = &dword_28898C0;
    while ( 1 )
    {
      v10 = (const void **)(*v5 >> 32);
      v9 = (const void **)*v5;
      v11 = (ResourceLocation *)v4;
      v12 = v8;
      if ( v9 != v10 )
        break;
LABEL_19:
      v8 = v12;
      v4 = (int *)v11;
      v5 = v21;
      v7 = (PackInstance *)((char *)v7 + 120);
      if ( v7 == v20 )
        goto LABEL_20;
    }
      sub_21E8AF4(&v22, v6);
      sub_21E72F0((const void **)&v22, v9);
      if ( PackInstance::hasResource((int)v7, (int)&v22) == 1 )
      {
        v15 = PackInstance::getResourceLocation(v7);
        ResourceLocation::getFullPath(v11, v15);
        v16 = 1;
      }
      else
        v16 = 0;
      v17 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != v12 )
        v13 = (unsigned int *)(v22 - 4);
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
      if ( v16 )
      ++v9;
      if ( v9 == v10 )
        goto LABEL_19;
  v19 = v24;
  v18 = (PackReport *)ptr;
  if ( ptr != (void *)v24 )
    do
      v18 = (PackReport *)((char *)PackReport::~PackReport(v18) + 120);
    while ( v19 != v18 );
    v18 = (PackReport *)ptr;
  if ( v18 )
    operator delete((void *)v18);
}


int __fastcall ResourcePackManager::load(int a1, int *a2, _DWORD *a3, unsigned __int64 *a4)
{
  int v4; // r10@0
  unsigned __int64 *v5; // r4@1
  int *v6; // r11@1
  int v7; // r7@1
  const void **i; // r6@2
  const void **v9; // r8@2
  signed int v10; // r9@6
  void *v11; // r0@8
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  signed int v14; // r0@10
  int v16; // [sp+8h] [bp-40h]@1
  _DWORD *v17; // [sp+Ch] [bp-3Ch]@1
  int v18; // [sp+14h] [bp-34h]@5

  v5 = a4;
  v17 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4);
  v16 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4) >> 32;
  if ( v7 == v16 )
  {
    v14 = 0;
  }
  else
    do
    {
      v9 = (const void **)(*v5 >> 32);
      for ( i = (const void **)*v5; i != v9; ++i )
      {
        sub_21E8AF4(&v18, v6);
        sub_21E72F0((const void **)&v18, i);
        if ( PackInstance::hasResource(v7, (int)&v18) == 1 )
        {
          v4 = PackInstance::getResource(v7, (int)&v18, v17);
          v10 = 1;
        }
        else
          v10 = 0;
        v11 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v18 - 4);
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
            j_j_j_j__ZdlPv_9(v11);
        if ( v10 )
          v14 = 1;
          return v14 & v4;
      }
      v7 += 120;
    }
    while ( v7 != v16 );
  return v14 & v4;
}


int __fastcall ResourcePackManager::_composeFullStack(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // r6@1
  int i; // r5@8
  int result; // r0@11
  void **v6; // [sp+8h] [bp-28h]@1
  int v7; // [sp+Ch] [bp-24h]@1
  int v8; // [sp+10h] [bp-20h]@1
  int v9; // [sp+14h] [bp-1Ch]@1
  int v10; // [sp+18h] [bp-18h]@1

  v1 = this;
  v6 = &off_26EAC8C;
  v9 = 0;
  v10 = 0;
  v7 = 0;
  v8 = 0;
  ResourcePackManager::composeFullStack(
    v1,
    (ResourcePackStack *)&v6,
    *((const ResourcePackStack **)v1 + 14),
    (const ResourcePackStack *)(*((_QWORD *)this + 6) >> 32),
    (const ResourcePackStack *)*((_QWORD *)v1 + 6));
  v2 = v7;
  v3 = *(_QWORD *)(*((_DWORD *)v1 + 16) + 4);
  if ( HIDWORD(v3) - (_DWORD)v3 == v8 - v7 )
  {
    if ( (_DWORD)v3 == HIDWORD(v3) )
    {
LABEL_5:
      ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v6);
      goto LABEL_7;
    }
    while ( PackInstance::operator==(v3, v2) == 1 )
      LODWORD(v3) = v3 + 120;
      v2 += 120;
      if ( HIDWORD(v3) == (_DWORD)v3 )
        goto LABEL_5;
  }
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v6);
    *((ResourcePackStack **)v1 + 16),
    (const ResourcePackStack *)(*((_QWORD *)v1 + 6) >> 32),
LABEL_7:
  ResourcePackManager::_updateLanguageSubpacks(v1);
  if ( !*((_BYTE *)v1 + 76) )
    for ( i = *((_DWORD *)v1 + 7); i; i = *(_DWORD *)i )
      (*(void (**)(void))(**(_DWORD **)(i + 4) + 8))();
  result = 0;
  *((_WORD *)v1 + 38) = 0;
  return result;
}


int __fastcall ResourcePackManager::clearStack(ResourcePackManager *this, int a2, int a3)
{
  int v3; // r8@1
  ResourcePackManager *v4; // r4@1
  int v5; // r6@2
  PackReport *v6; // r5@2
  PackReport *v7; // r7@2
  PackReport *v8; // r0@3
  PackReport *v9; // r5@6
  PackReport *v10; // r0@7
  PackReport *v11; // r5@10
  PackReport *v12; // r0@11
  PackReport *v13; // r5@14
  PackReport *v14; // r0@15
  int result; // r0@19

  v3 = a3;
  v4 = this;
  switch ( a2 )
  {
    case 0:
      v5 = *((_DWORD *)this + 13);
      v6 = (PackReport *)(*(_QWORD *)(v5 + 4) >> 32);
      v7 = (PackReport *)*(_QWORD *)(v5 + 4);
      if ( v6 != v7 )
      {
        v8 = (PackReport *)*(_QWORD *)(v5 + 4);
        do
          v8 = (PackReport *)((char *)PackReport::~PackReport(v8) + 120);
        while ( v6 != v8 );
      }
      goto LABEL_17;
    case 1:
      v5 = *((_DWORD *)this + 12);
      v9 = (PackReport *)(*(_QWORD *)(v5 + 4) >> 32);
      if ( v9 != v7 )
        v10 = (PackReport *)*(_QWORD *)(v5 + 4);
          v10 = (PackReport *)((char *)PackReport::~PackReport(v10) + 120);
        while ( v9 != v10 );
    case 2:
      v5 = *((_DWORD *)this + 14);
      v11 = (PackReport *)(*(_QWORD *)(v5 + 4) >> 32);
      if ( v11 != v7 )
        v12 = (PackReport *)*(_QWORD *)(v5 + 4);
          v12 = (PackReport *)((char *)PackReport::~PackReport(v12) + 120);
        while ( v11 != v12 );
    case 3:
      v5 = *((_DWORD *)this + 15);
      v13 = (PackReport *)(*(_QWORD *)(v5 + 4) >> 32);
      if ( v13 != v7 )
        v14 = (PackReport *)*(_QWORD *)(v5 + 4);
          v14 = (PackReport *)((char *)PackReport::~PackReport(v14) + 120);
        while ( v13 != v14 );
LABEL_17:
      *(_DWORD *)(v5 + 8) = v7;
      break;
    default:
  }
  if ( v3 == 1 )
    result = j_j_j__ZN19ResourcePackManager17_composeFullStackEv(v4);
  else
    result = 1;
    *((_BYTE *)v4 + 77) = 1;
  return result;
}


void __fastcall ResourcePackManager::getPath(ResourcePackManager *this, const ResourceLocation *a2, const void **a3)
{
  int *v3; // r4@1
  const void **v4; // r5@1
  __int64 v5; // r6@1
  int v6; // r0@6
  const void **v7; // r0@6
  const void **v8; // r0@6
  char *v9; // r0@6
  void *v10; // r0@7
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  int v15; // [sp+4h] [bp-2Ch]@6
  char *v16; // [sp+8h] [bp-28h]@6

  v3 = (int *)this;
  v4 = a3;
  v5 = *(_QWORD *)(*((_DWORD *)a2 + 16) + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    goto LABEL_9;
  while ( PackInstance::hasResource(v5, (int)v4) != 1 )
  {
    LODWORD(v5) = v5 + 120;
    if ( HIDWORD(v5) == (_DWORD)v5 )
      goto LABEL_9;
  }
  if ( (_DWORD)v5 )
    v6 = PackInstance::getResourceLocation((PackInstance *)v5);
    ResourceLocation::getFullPath((ResourceLocation *)&v15, v6);
    v7 = sub_21E7408((const void **)&v15, "/", 1u);
    v16 = (char *)*v7;
    *v7 = &unk_28898CC;
    v8 = sub_21E72F0((const void **)&v16, v4);
    *v3 = (int)*v8;
    *v8 = &unk_28898CC;
    v9 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v16 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  else
LABEL_9:
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
}


void __fastcall ResourcePackManager::_updateLanguageSubpacks(ResourcePackManager *this)
{
  ResourcePackManager::_updateLanguageSubpacks(this);
}


int __fastcall ResourcePackManager::setStack(ResourcePackManager *this, int *a2, int a3, int a4)
{
  int v4; // r8@1
  int *v5; // r9@1
  ResourcePackManager *v6; // r4@1
  int v7; // r7@3
  int v8; // r5@3 OVERLAPPED
  int v9; // r6@3 OVERLAPPED
  int result; // r0@3
  int v11; // r7@9
  int v12; // r5@9 OVERLAPPED
  int v13; // r6@9 OVERLAPPED
  int v14; // r7@15
  int v15; // r5@15 OVERLAPPED
  int v16; // r6@15 OVERLAPPED
  int v17; // r7@21
  int v18; // r5@21 OVERLAPPED
  int v19; // r6@21 OVERLAPPED
  int v20; // r1@26
  int v21; // r0@26
  int v22; // r1@27
  int v23; // r1@28
  int v24; // r1@29

  v4 = a4;
  v5 = a2;
  v6 = this;
  switch ( a3 )
  {
    case 0:
      if ( a4 )
        goto LABEL_26;
      v7 = *(_QWORD *)(*((_DWORD *)this + 13) + 4);
      *(_QWORD *)&v8 = *(_QWORD *)(*a2 + 4);
      result = (*(_QWORD *)(*((_DWORD *)this + 13) + 4) >> 32) - v7;
      if ( v9 - v8 != result )
      for ( ; v9 != v8; v7 += 120 )
      {
        result = PackInstance::operator==(v8, v7);
        if ( result != 1 )
        {
LABEL_26:
          v20 = *v5;
          *v5 = 0;
          v21 = *((_DWORD *)v6 + 13);
          *((_DWORD *)v6 + 13) = v20;
          goto LABEL_30;
        }
        v8 += 120;
      }
      return result;
    case 2:
        goto LABEL_27;
      v11 = *(_QWORD *)(*((_DWORD *)this + 14) + 4);
      *(_QWORD *)&v12 = *(_QWORD *)(*a2 + 4);
      result = (*(_QWORD *)(*((_DWORD *)this + 14) + 4) >> 32) - v11;
      if ( v13 - v12 != result )
      for ( ; v13 != v12; v11 += 120 )
        result = PackInstance::operator==(v12, v11);
LABEL_27:
          v22 = *v5;
          v21 = *((_DWORD *)v6 + 14);
          *((_DWORD *)v6 + 14) = v22;
        v12 += 120;
    case 3:
        goto LABEL_28;
      v14 = *(_QWORD *)(*((_DWORD *)this + 15) + 4);
      *(_QWORD *)&v15 = *(_QWORD *)(*a2 + 4);
      result = (*(_QWORD *)(*((_DWORD *)this + 15) + 4) >> 32) - v14;
      if ( v16 - v15 != result )
      if ( v15 == v16 )
        return result;
      while ( 1 )
        result = PackInstance::operator==(v15, v14);
          break;
        v15 += 120;
        v14 += 120;
        if ( v16 == v15 )
          return result;
LABEL_28:
      v23 = *v5;
      *v5 = 0;
      v21 = *((_DWORD *)v6 + 15);
      *((_DWORD *)v6 + 15) = v23;
      goto LABEL_30;
    case 1:
        goto LABEL_29;
      v17 = *(_QWORD *)(*((_DWORD *)this + 12) + 4);
      *(_QWORD *)&v18 = *(_QWORD *)(*a2 + 4);
      result = (*(_QWORD *)(*((_DWORD *)this + 12) + 4) >> 32) - v17;
      if ( v19 - v18 != result )
      if ( v18 == v19 )
      break;
    default:
      goto def_158ADC6;
  }
  while ( 1 )
    result = PackInstance::operator==(v18, v17);
    if ( result != 1 )
    v18 += 120;
    v17 += 120;
    if ( v19 == v18 )
LABEL_29:
  v24 = *v5;
  *v5 = 0;
  v21 = *((_DWORD *)v6 + 12);
  *((_DWORD *)v6 + 12) = v24;
LABEL_30:
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
def_158ADC6:
  if ( v4 == 1 )
    result = j_j_j__ZN19ResourcePackManager17_composeFullStackEv(v6);
  else
    result = 1;
    *((_BYTE *)v6 + 77) = 1;
  return result;
}


int __fastcall ResourcePackManager::loadText(int a1, int a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r5@1

  v3 = a3;
  v4 = (*(int (**)(void))(*(_DWORD *)a1 + 8))();
  Util::normalizeLineEndings(v3);
  return v4;
}


ResourcePackStack *__fastcall ResourcePackManager::getIncompatiblePacks(ResourcePackManager *this, int a2)
{
  ResourcePackManager *v2; // r4@1
  int v3; // r5@1
  int i; // r5@1
  int v5; // r7@1
  __int64 v6; // r0@3
  int *v7; // r0@4
  __int64 v8; // r1@4
  int v10; // [sp+4h] [bp-2Ch]@1
  __int64 v11; // [sp+8h] [bp-28h]@1
  int v12; // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@1
  int v14; // [sp+18h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v14 = 0;
  v12 = 0;
  v13 = 0;
  v11 = (unsigned int)&off_26EAC8C;
  ResourcePackManager::composeFullStack(
    (ResourcePackManager *)v3,
    (ResourcePackStack *)&v11,
    *(const ResourcePackStack **)(a2 + 56),
    (const ResourcePackStack *)(*(_QWORD *)(a2 + 48) >> 32),
    (const ResourcePackStack *)*(_QWORD *)(v3 + 48));
  v10 = ContentTierManager::getContentTierInfo(*(ContentTierManager **)(v3 + 80));
  v5 = v12;
  for ( i = HIDWORD(v11); v5 != i; i += 120 )
  {
    if ( PackInstance::isCompatiblePack(i, &v10) )
    {
      v6 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v6 == HIDWORD(v6) )
      {
        std::vector<PackInstance,std::allocator<PackInstance>>::_M_emplace_back_aux<PackInstance&>(
          (unsigned __int64 *)v2,
          i);
      }
      else
        v7 = PackReport::PackReport((int *)v6, (int *)i);
        v8 = *(_QWORD *)(i + 104);
        *((_BYTE *)v7 + 112) = *(_BYTE *)(i + 112);
        *((_QWORD *)v7 + 13) = v8;
        *((_DWORD *)v2 + 1) = v7 + 30;
    }
  }
  return ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v11);
}


void __fastcall ResourcePackManager::getPath(ResourcePackManager *this, const ResourceLocation *a2, const void **a3)
{
  ResourcePackManager::getPath(this, a2, a3);
}


void __fastcall ResourcePackManager::loadRawTexture(ResourcePackManager *this, const ResourceLocation *a2, int a3)
{
  ResourcePackManager *v3; // r8@1
  const ResourceLocation *v4; // r4@1
  int v5; // r9@1
  void (__fastcall *v6)(const ResourceLocation *, int, char **, char **); // r7@1
  char *v7; // r4@1
  int v8; // r6@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int *v11; // r0@11
  void *v12; // r0@16
  void *v13; // r0@17
  void *v14; // r0@18
  char *v15; // r0@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  int v24; // [sp+10h] [bp-40h]@1
  int v25; // [sp+14h] [bp-3Ch]@1
  int v26; // [sp+18h] [bp-38h]@1
  char *v27; // [sp+1Ch] [bp-34h]@1
  char *v28; // [sp+20h] [bp-30h]@1
  char *v29; // [sp+24h] [bp-2Ch]@1
  char *v30; // [sp+28h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v30 = (char *)&unk_28898CC;
  v6 = *(void (__fastcall **)(const ResourceLocation *, int, char **, char **))(*(_DWORD *)a2 + 12);
  sub_21E94B4((void **)&v24, ".tga");
  sub_21E94B4((void **)&v25, ".png");
  sub_21E94B4((void **)&v26, ".jpg");
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v27 = (char *)operator new(0xCu);
  v29 = v27 + 12;
  v28 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v24,
                  (int)&v27,
                  (int)v27);
  v6(v4, v5, &v30, &v27);
  v8 = (int)v28;
  v7 = v27;
  if ( v27 != v28 )
  {
    do
    {
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v7 += 4;
    }
    while ( v7 != (char *)v8 );
    v7 = v27;
  }
  if ( v7 )
    operator delete(v7);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v24 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  mce::TextureContainer::TextureContainer((int)v3, (int *)&v30);
  v15 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


RakNet *__fastcall ResourcePackManager::copyPacksToNewLevel(int a1, int *a2, int a3, PackSourceFactory *a4, int a5, int a6)
{
  int v6; // r6@0
  int v7; // r5@1
  char *v8; // r8@1
  PackSourceFactory *v9; // r9@1
  int v10; // r7@1
  const char *v11; // r3@1
  int *v12; // r4@1
  int v13; // r2@1
  int v14; // r0@5
  bool v15; // zf@5
  __int64 v16; // kr00_8@6
  __int64 i; // r0@8
  int *v18; // r0@11
  __int64 v19; // r1@11
  int v20; // r0@14
  bool v21; // zf@14
  int *v22; // r0@18
  __int64 v23; // r1@18
  PackInstance *v24; // r5@21
  int *v25; // r7@21
  ResourceLocation *v26; // r4@22
  unsigned int *v27; // r2@23
  signed int v28; // r1@25
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r2@38
  signed int v34; // r1@40
  unsigned int *v35; // r2@42
  signed int v36; // r1@44
  unsigned int *v37; // r2@46
  signed int v38; // r1@48
  int v39; // r0@71
  PackManifest *v40; // r0@71
  char *v41; // r0@71
  DirectoryPackSource *v42; // r0@71
  int v43; // r0@73
  int v44; // r6@73
  void *v45; // r0@74
  int v46; // r4@77
  __int64 v47; // r0@77
  void *v48; // r0@77
  DirectoryPackSource *v49; // r10@80
  char *v50; // r0@81
  int v51; // r4@81
  int v52; // r0@81
  Pack *v53; // r0@82
  char *v54; // r0@83
  char *v55; // r0@84
  char *v56; // r0@85
  void *v57; // r0@86
  void *v58; // r0@88
  void *v59; // r0@89
  RakNet *v60; // r1@90
  RakNet *result; // r0@90
  unsigned int *v62; // r2@92
  signed int v63; // r1@94
  unsigned int *v64; // r2@96
  signed int v65; // r1@98
  int v66; // [sp+Ch] [bp-196Ch]@0
  int v67; // [sp+10h] [bp-1968h]@0
  char v68; // [sp+14h] [bp-1964h]@0
  int v69; // [sp+18h] [bp-1960h]@0
  int (**v70)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+1Ch] [bp-195Ch]@22
  const char *v71; // [sp+20h] [bp-1958h]@22
  const char *v72; // [sp+24h] [bp-1954h]@22
  int *v73; // [sp+28h] [bp-1950h]@22
  int *v74; // [sp+2Ch] [bp-194Ch]@22
  int *v75; // [sp+30h] [bp-1948h]@22
  int *v76; // [sp+34h] [bp-1944h]@22
  int v77; // [sp+38h] [bp-1940h]@0
  void **v78; // [sp+3Ch] [bp-193Ch]@5
  PackInstance *v79; // [sp+40h] [bp-1938h]@5
  int *v80; // [sp+44h] [bp-1934h]@5
  int v81; // [sp+48h] [bp-1930h]@5
  int v82; // [sp+4Ch] [bp-192Ch]@5
  int v83; // [sp+50h] [bp-1928h]@5
  int v84; // [sp+54h] [bp-1924h]@5
  int v85; // [sp+58h] [bp-1920h]@3
  int v86; // [sp+5Ch] [bp-191Ch]@3
  char v87; // [sp+60h] [bp-1918h]@3
  int v88; // [sp+64h] [bp-1914h]@81
  void (*v89)(void); // [sp+68h] [bp-1910h]@3
  int v90; // [sp+6Ch] [bp-190Ch]@81
  int v91; // [sp+70h] [bp-1908h]@81
  int v92; // [sp+74h] [bp-1904h]@3
  int v93; // [sp+78h] [bp-1900h]@1
  int v94; // [sp+7Ch] [bp-18FCh]@1
  const char *v95; // [sp+80h] [bp-18F8h]@3
  int v96; // [sp+84h] [bp-18F4h]@3
  char *v97; // [sp+88h] [bp-18F0h]@38
  char *v98; // [sp+8Ch] [bp-18ECh]@34
  int v99; // [sp+90h] [bp-18E8h]@81
  Pack *v100; // [sp+94h] [bp-18E4h]@81
  void *v101; // [sp+98h] [bp-18E0h]@78
  int v102; // [sp+9Ch] [bp-18DCh]@78
  int v103; // [sp+A0h] [bp-18D8h]@78
  int v104; // [sp+A4h] [bp-18D4h]@78
  char v105; // [sp+A8h] [bp-18D0h]@78
  void (*v106)(void); // [sp+B0h] [bp-18C8h]@78
  __int64 v107; // [sp+BCh] [bp-18BCh]@77
  int v108; // [sp+C4h] [bp-18B4h]@46
  void *v109; // [sp+C8h] [bp-18B0h]@75
  int v110; // [sp+CCh] [bp-18ACh]@75
  int v111; // [sp+D0h] [bp-18A8h]@75
  int v112; // [sp+D4h] [bp-18A4h]@75
  char v113; // [sp+D8h] [bp-18A0h]@75
  void (*v114)(void); // [sp+E0h] [bp-1898h]@75
  int v115; // [sp+ECh] [bp-188Ch]@74
  int v116; // [sp+F0h] [bp-1888h]@74
  char s[4]; // [sp+F4h] [bp-1884h]@74
  int v118; // [sp+F8h] [bp-1880h]@74
  __int64 v119; // [sp+FCh] [bp-187Ch]@74
  int v120; // [sp+104h] [bp-1874h]@42
  void *v121; // [sp+108h] [bp-1870h]@30
  int v122; // [sp+10Ch] [bp-186Ch]@22
  char v123; // [sp+11Ch] [bp-185Ch]@1
  int v124; // [sp+120h] [bp-1858h]@3
  char v125; // [sp+524h] [bp-1454h]@77
  int v126; // [sp+528h] [bp-1450h]@22
  char v127; // [sp+92Ch] [bp-104Ch]@77
  int v128; // [sp+930h] [bp-1048h]@22
  unsigned int v129; // [sp+D30h] [bp-C48h]@77
  char v130; // [sp+D34h] [bp-C44h]@74
  int v131; // [sp+D38h] [bp-C40h]@22
  int v132; // [sp+113Ch] [bp-83Ch]@74
  int v133; // [sp+1140h] [bp-838h]@22
  char v134; // [sp+1540h] [bp-438h]@1
  int v135; // [sp+1544h] [bp-434h]@74
  int v136; // [sp+1548h] [bp-430h]@22
  unsigned int v137; // [sp+1948h] [bp-30h]@74
  RakNet *v138; // [sp+194Ch] [bp-2Ch]@1

  v7 = a1;
  v8 = &v134;
  v9 = a4;
  v10 = a3;
  v15 = a3 == 1;
  v11 = "resource_packs/";
  v12 = (int *)&v123;
  v138 = _stack_chk_guard;
  v13 = *(_DWORD *)(*a2 - 12);
  v93 = *a2;
  v94 = v13;
  if ( !v15 )
    v11 = "behavior_packs/";
  v95 = v11;
  v96 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v123, (int)&v93, 2);
  sub_21E94B4((void **)&v92, (const char *)&v124);
  v85 = v92;
  v86 = *(_DWORD *)(v92 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v87, (__int64 *)&v85);
  if ( v89 )
    v89();
  sub_21E8AF4(&v83, &v92);
  LOBYTE(v84) = v10;
  v78 = &off_26EAC8C;
  v81 = 0;
  v82 = 0;
  v79 = 0;
  v80 = 0;
  v14 = *(_DWORD *)(v7 + 48);
  v15 = v14 == 0;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v14 + 4);
    v14 = *(_QWORD *)(v14 + 4) >> 32;
    v10 = v16;
    v15 = (_DWORD)v16 == v14;
  }
    v6 = v14 - 120;
    v12 = (int *)&v79;
    for ( i = 0LL; ; i = *(_QWORD *)&v80 )
    {
      if ( (_DWORD)i == HIDWORD(i) )
      {
        std::vector<PackInstance,std::allocator<PackInstance>>::_M_emplace_back_aux<PackInstance&>(
          (unsigned __int64 *)&v79,
          v10);
      }
      else
        v18 = PackReport::PackReport((int *)i, (int *)v10);
        v19 = *(_QWORD *)(v10 + 104);
        *((_BYTE *)v18 + 112) = *(_BYTE *)(v10 + 112);
        *((_QWORD *)v18 + 13) = v19;
        v80 += 30;
      if ( v6 == v10 )
        break;
      v10 += 120;
    }
  v20 = *(_DWORD *)(v7 + 52);
  v21 = v20 == 0;
  if ( v20 )
    v6 = *(_QWORD *)(v20 + 4) >> 32;
    v12 = (int *)*(_QWORD *)(v20 + 4);
    v21 = v12 == (int *)v6;
  if ( !v21 )
    do
      if ( v80 == (int *)v81 )
          (int)v12);
        v22 = PackReport::PackReport(v80, v12);
        v23 = *((_QWORD *)v12 + 13);
        *((_BYTE *)v22 + 112) = *((_BYTE *)v12 + 112);
        *((_QWORD *)v22 + 13) = v23;
      v12 += 30;
    while ( (int *)v6 != v12 );
  ResourcePackStack::removeDuplicates((ResourcePackStack *)&v78);
  v25 = v80;
  v24 = v79;
  if ( (int *)v79 != v80 )
    v76 = (int *)&v95;
    v75 = &v133;
    v72 = (const char *)&v126;
    v26 = (ResourceLocation *)&v122;
    v74 = &v128;
    v71 = (const char *)&v131;
    v73 = &v136;
    v70 = &pthread_create;
      if ( PackInstance::getPackCategory(v24) != 1 && PackInstance::getPackCategory(v24) != 2 )
        v39 = PackInstance::getResourceLocation(v24);
        ResourceLocation::getFullPath(v26, v39);
        v40 = (PackManifest *)PackInstance::getManifest(v24);
        v41 = PackManifest::getIdentity(v40);
        v42 = (DirectoryPackSource *)PackSourceFactory::getDirectoryPackSourceContaining(v9, (const PackIdVersion *)v41);
        if ( v42 && DirectoryPackSource::isCopyable(v42) == 1 )
        {
          v121 = &unk_28898CC;
          v43 = PackInstance::isZipped(v24);
          v44 = v83;
          if ( v43 == 1 )
          {
            *(_DWORD *)s = v83;
            v118 = *(_DWORD *)(v83 - 12);
            v115 = v122;
            v116 = *(_DWORD *)(v122 - 12);
            Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v132, (__int64 *)&v115);
            Core::PathBuffer<Core::StackString<char,1024u>>::joinParts(
              (int)&v135,
              s,
              1,
              (int)v75,
              *(int *)&v134,
              ".zip");
            v119 = __PAIR__(v137, (unsigned int)v73);
            Core::FileSystem::getUniqueFilePathForFile((int)&v130, &v119);
            sub_21E94B4((void **)&v120, v71);
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)&v121,
              &v120);
            v45 = (void *)(v120 - 12);
            if ( (int *)(v120 - 12) != &dword_28898C0 )
            {
              v35 = (unsigned int *)(v120 - 4);
              if ( v70 )
              {
                __dmb();
                do
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
              }
              else
                v36 = (*v35)--;
              if ( v36 <= 0 )
                j_j_j_j__ZdlPv_9(v45);
            }
            v111 = v122;
            v112 = *(_DWORD *)(v122 - 12);
            v109 = v121;
            v110 = *((_DWORD *)v121 - 3);
            Core::FileSystem::copyFile((int)&v113, (__int64 *)&v111, (__int64 *)&v109);
            if ( v114 )
              v114();
          }
          else
            v46 = *(_DWORD *)(v83 - 12);
            LODWORD(v47) = *(_DWORD *)PackInstance::getFolderName(v24);
            HIDWORD(v47) = *(_DWORD *)(v47 - 12);
            v93 = v44;
            v94 = v46;
            *(_QWORD *)v76 = v47;
            Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v127, (int)&v93, 2);
            v107 = __PAIR__(v129, (unsigned int)v74);
            Core::FileSystem::getUniqueFilePathForDirectory((int)&v125, &v107);
            sub_21E94B4((void **)&v108, v72);
              &v108);
            v48 = (void *)(v108 - 12);
            if ( (int *)(v108 - 12) != &dword_28898C0 )
              v37 = (unsigned int *)(v108 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j__ZdlPv_9(v48);
            v103 = v122;
            v104 = *(_DWORD *)(v122 - 12);
            v101 = v121;
            v102 = *((_DWORD *)v121 - 3);
            Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v105, (__int64 *)&v103, (__int64 *)&v101);
            if ( v106 )
              v106();
          v49 = PackSourceFactory::getDirectoryPackSource((int)v9, &v83, v84);
          if ( v49 )
            sub_21E8AF4((int *)&v97, (int *)&v121);
            v50 = v97;
            v97 = (char *)&unk_28898CC;
            v98 = v50;
            v99 = 2;
            v51 = DirectoryPackSource::getPackType(v49);
            v52 = (*(int (__fastcall **)(DirectoryPackSource *))(*(_DWORD *)v49 + 16))(v49);
            Pack::createPack(
              (int)&v100,
              (IContentKeyProvider *)&v98,
              v51,
              v52,
              a5,
              a6,
              0,
              v66,
              v67,
              v68,
              v69,
              (int)v70,
              (int)v71,
              (char)v72,
              (int)v73,
              (int)v74,
              (int)v76,
              v77,
              (int)v78,
              (int)v79,
              (int)v80,
              v81,
              v82,
              v83,
              v84,
              v85,
              v86,
              *(int *)&v87,
              v88,
              (int)v89,
              v90,
              v91,
              v92,
              v93,
              v94,
              (int)v95,
              v96,
              (int)v97,
              (int)v98,
              v99,
              (char)v100);
            DirectoryPackSource::addPack((int)v49, (int *)&v100);
            if ( v100 )
              v53 = Pack::~Pack(v100);
              operator delete((void *)v53);
            v100 = 0;
            v54 = v98 - 12;
            if ( (int *)(v98 - 12) != &dword_28898C0 )
              v31 = (unsigned int *)(v98 - 4);
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j__ZdlPv_9(v54);
            v55 = v97 - 12;
            if ( (int *)(v97 - 12) != &dword_28898C0 )
              v33 = (unsigned int *)(v97 - 4);
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j__ZdlPv_9(v55);
          v8 = &v134;
          v26 = (ResourceLocation *)&v122;
          v56 = (char *)v121 - 12;
          if ( (int *)((char *)v121 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)((char *)v121 - 4);
            if ( v70 )
              __dmb();
              do
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
            else
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v56);
        }
        v57 = (void *)(v122 - 12);
        if ( (int *)(v122 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v122 - 4);
          if ( v70 )
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
      v24 = (PackInstance *)((char *)v24 + 120);
    while ( (int *)v24 != v25 );
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v78);
  v58 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v83 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
    else
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v92 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (RakNet *)*((_DWORD *)v8 + 259);
  result = (RakNet *)(_stack_chk_guard - v60);
  if ( _stack_chk_guard != v60 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ResourcePackManager::_getResource(int a1, int a2, _DWORD *a3)
{
  int v3; // r0@1
  _DWORD *v4; // r4@1
  int v5; // r5@1
  __int64 v6; // r6@1
  signed int v7; // r1@6

  v3 = *(_DWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    goto LABEL_7;
  while ( 1 )
  {
    v3 = PackInstance::hasResource(v6, v5);
    if ( v3 == 1 )
      break;
    LODWORD(v6) = v6 + 120;
    if ( HIDWORD(v6) == (_DWORD)v6 )
      goto LABEL_7;
  }
  if ( (_DWORD)v6 )
    v3 = PackInstance::getResource(v6, v5, v4);
    v7 = 1;
  else
LABEL_7:
    v7 = 0;
  return v3 & v7;
}


int __fastcall ResourcePackManager::canSupportPacks(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  int v2; // r4@1
  int v4; // [sp+8h] [bp-20h]@1
  void **v5; // [sp+Ch] [bp-1Ch]@1
  int v6; // [sp+10h] [bp-18h]@1
  int v7; // [sp+14h] [bp-14h]@1
  int v8; // [sp+18h] [bp-10h]@1
  int v9; // [sp+1Ch] [bp-Ch]@1

  v1 = this;
  v5 = &off_26EAC8C;
  v8 = 0;
  v9 = 0;
  v6 = 0;
  v7 = 0;
  ResourcePackManager::composeFullStack(
    v1,
    (ResourcePackStack *)&v5,
    *((const ResourcePackStack **)v1 + 14),
    (const ResourcePackStack *)(*((_QWORD *)this + 6) >> 32),
    (const ResourcePackStack *)*((_QWORD *)v1 + 6));
  v4 = ContentTierManager::getContentTierInfo(*((ContentTierManager **)v1 + 20));
  v2 = ResourcePackStack::canSupportPacks((int)&v5, &v4);
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v5);
  return v2;
}


void __fastcall ResourcePackManager::onLanguageChanged(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  int v2; // r0@1
  _DWORD *v3; // r1@1
  size_t v4; // r2@1
  signed int v5; // r6@3
  signed int v6; // r7@3
  char *v7; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *s1; // [sp+0h] [bp-20h]@1

  v1 = this;
  v2 = I18n::getCurrentLanguage(this);
  Localization::getFullLanguageCode((Localization *)&s1, v2);
  v3 = (_DWORD *)*((_DWORD *)v1 + 18);
  v4 = *((_DWORD *)s1 - 3);
  if ( v4 != *(v3 - 3) || memcmp(s1, v3, v4) )
  {
    v5 = ResourcePackManager::checkHasExtraLocaleResources((int)v1, (_DWORD *)v1 + 18);
    v6 = ResourcePackManager::checkHasExtraLocaleResources((int)v1, &s1);
    EntityInteraction::setInteractText((int *)v1 + 18, (int *)&s1);
    if ( (v5 ^ v6) == 1 )
      ResourcePackManager::_updateLanguageSubpacks(v1);
  }
  v7 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)((char *)s1 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
}


int __fastcall ResourcePackManager::_handleComposeStack(int result, int a2)
{
  if ( a2 == 1 )
    result = j_j_j__ZN19ResourcePackManager17_composeFullStackEv((ResourcePackManager *)result);
  else
    *(_BYTE *)(result + 77) = 1;
  return result;
}


int __fastcall ResourcePackManager::removePack(ResourcePackManager *this, ResourcePack *a2, int a3)
{
  ResourcePackManager *v3; // r11@1
  char *v4; // r6@1
  int v5; // r4@1
  ResourcePack *v6; // r10@1
  int v7; // r7@1
  int *v8; // r5@1
  int *v9; // r8@1
  PackReport *v10; // r6@2
  signed int v11; // r0@3
  int *v12; // r7@4
  int v13; // r6@4
  int v14; // r9@4
  char v15; // r0@5
  __int64 v16; // r1@5
  int v17; // r5@7
  PackReport *v18; // r0@8
  int v19; // r9@11
  int *v20; // r8@11
  int *v21; // r5@11
  PackReport *v22; // r6@12
  int v23; // r0@14
  int *v24; // r7@14
  int v25; // r6@14
  int v26; // r4@14
  char v27; // r0@15
  __int64 v28; // r1@15
  int v29; // r4@17
  PackReport *v30; // r0@18
  int v31; // r9@21
  int *v32; // r8@21
  int *v33; // r5@21
  PackReport *v34; // r6@22
  int v35; // r0@24
  int *v36; // r7@24
  int v37; // r6@24
  int v38; // r4@24
  char v39; // r0@25
  __int64 v40; // r1@25
  int v41; // r4@27
  PackReport *v42; // r0@28
  int v43; // r9@31
  int *v44; // r8@31
  int *v45; // r5@31
  PackReport *v46; // r6@32
  int v47; // r10@34
  int v48; // r0@34
  int *v49; // r6@34
  int v50; // r7@34
  int v51; // r4@34
  char v52; // r0@35
  __int64 v53; // r1@35
  int v54; // r4@37
  PackReport *v55; // r0@38
  int result; // r0@41
  int v57; // [sp+4h] [bp-2Ch]@4
  int v58; // [sp+4h] [bp-2Ch]@14
  int v59; // [sp+4h] [bp-2Ch]@24
  unsigned __int8 v60; // [sp+Bh] [bp-25h]@1

  v3 = this;
  v60 = 0;
  v4 = (char *)&v60;
  v5 = *((_DWORD *)this + 12);
  v6 = a2;
  v7 = a3;
  v8 = sub_158C4AC(*(_QWORD *)(v5 + 4), (int *)(*(_QWORD *)(v5 + 4) >> 32), (int)a2, &v60);
  v9 = *(int **)(*((_DWORD *)v3 + 12) + 8);
  if ( v8 != v9 )
  {
    v10 = *(PackReport **)(v5 + 8);
    if ( (PackReport *)v9 != v10 )
    {
      v11 = v10 - (PackReport *)v9;
      if ( v10 - (PackReport *)v9 >= 1 )
      {
        v57 = v7;
        v12 = v8;
        v13 = *(_DWORD *)(*((_DWORD *)v3 + 12) + 8);
        v14 = -286331153 * (v11 >> 3) + 1;
        do
        {
          PackReport::operator=(v12, (int *)v13);
          v15 = *(_BYTE *)(v13 + 112);
          --v14;
          v16 = *(_QWORD *)(v13 + 104);
          v13 += 120;
          *((_BYTE *)v12 + 112) = v15;
          *((_QWORD *)v12 + 13) = v16;
          v12 += 30;
        }
        while ( v14 > 1 );
        v10 = *(PackReport **)(v5 + 8);
        v7 = v57;
      }
    }
    v17 = (int)v8 + v10 - (PackReport *)v9;
    if ( v10 != (PackReport *)v17 )
      v18 = (PackReport *)v17;
      do
        v18 = (PackReport *)((char *)PackReport::~PackReport(v18) + 120);
      while ( v10 != v18 );
    v4 = (char *)&v60;
    *(_DWORD *)(v5 + 8) = v17;
  }
  v19 = *((_DWORD *)v3 + 13);
  v20 = sub_158C4AC(*(_QWORD *)(v19 + 4), (int *)(*(_QWORD *)(v19 + 4) >> 32), (int)v6, v4);
  v21 = *(int **)(*((_DWORD *)v3 + 13) + 8);
  if ( v20 != v21 )
    v22 = *(PackReport **)(v19 + 8);
    if ( (PackReport *)v21 != v22 && v22 - (PackReport *)v21 >= 1 )
      v58 = v7;
      v23 = -286331153 * ((v22 - (PackReport *)v21) >> 3);
      v24 = v20;
      v25 = *(_DWORD *)(*((_DWORD *)v3 + 13) + 8);
      v26 = v23 + 1;
        PackReport::operator=(v24, (int *)v25);
        v27 = *(_BYTE *)(v25 + 112);
        --v26;
        v28 = *(_QWORD *)(v25 + 104);
        v25 += 120;
        *((_BYTE *)v24 + 112) = v27;
        *((_QWORD *)v24 + 13) = v28;
        v24 += 30;
      while ( v26 > 1 );
      v22 = *(PackReport **)(v19 + 8);
      v7 = v58;
    v29 = (int)v20 + v22 - (PackReport *)v21;
    if ( v22 != (PackReport *)v29 )
      v30 = (PackReport *)((char *)v20 + v22 - (PackReport *)v21);
        v30 = (PackReport *)((char *)PackReport::~PackReport(v30) + 120);
      while ( v22 != v30 );
    *(_DWORD *)(v19 + 8) = v29;
  v31 = *((_DWORD *)v3 + 14);
  v32 = sub_158C4AC(*(_QWORD *)(v31 + 4), (int *)(*(_QWORD *)(v31 + 4) >> 32), (int)v6, v4);
  v33 = *(int **)(*((_DWORD *)v3 + 14) + 8);
  if ( v32 != v33 )
    v34 = *(PackReport **)(v31 + 8);
    if ( (PackReport *)v33 != v34 && v34 - (PackReport *)v33 >= 1 )
      v59 = v7;
      v35 = -286331153 * ((v34 - (PackReport *)v33) >> 3);
      v36 = v32;
      v37 = *(_DWORD *)(*((_DWORD *)v3 + 14) + 8);
      v38 = v35 + 1;
        PackReport::operator=(v36, (int *)v37);
        v39 = *(_BYTE *)(v37 + 112);
        --v38;
        v40 = *(_QWORD *)(v37 + 104);
        v37 += 120;
        *((_BYTE *)v36 + 112) = v39;
        *((_QWORD *)v36 + 13) = v40;
        v36 += 30;
      while ( v38 > 1 );
      v34 = *(PackReport **)(v31 + 8);
      v7 = v59;
    v41 = (int)v32 + v34 - (PackReport *)v33;
    if ( v34 != (PackReport *)v41 )
      v42 = (PackReport *)((char *)v32 + v34 - (PackReport *)v33);
        v42 = (PackReport *)((char *)PackReport::~PackReport(v42) + 120);
      while ( v34 != v42 );
    *(_DWORD *)(v31 + 8) = v41;
  v43 = *((_DWORD *)v3 + 15);
  v44 = sub_158C4AC(*(_QWORD *)(v43 + 4), (int *)(*(_QWORD *)(v43 + 4) >> 32), (int)v6, v4);
  v45 = *(int **)(*((_DWORD *)v3 + 15) + 8);
  if ( v44 != v45 )
    v46 = *(PackReport **)(v43 + 8);
    if ( (PackReport *)v45 != v46 && v46 - (PackReport *)v45 >= 1 )
      v47 = v7;
      v48 = -286331153 * ((v46 - (PackReport *)v45) >> 3);
      v49 = v44;
      v50 = *(_DWORD *)(*((_DWORD *)v3 + 15) + 8);
      v51 = v48 + 1;
        PackReport::operator=(v49, (int *)v50);
        v52 = *(_BYTE *)(v50 + 112);
        --v51;
        v53 = *(_QWORD *)(v50 + 104);
        v50 += 120;
        *((_BYTE *)v49 + 112) = v52;
        *((_QWORD *)v49 + 13) = v53;
        v49 += 30;
      while ( v51 > 1 );
      v46 = *(PackReport **)(v43 + 8);
      v7 = v47;
    v54 = (int)v44 + v46 - (PackReport *)v45;
    if ( v46 != (PackReport *)v54 )
      v55 = (PackReport *)((char *)v44 + v46 - (PackReport *)v45);
        v55 = (PackReport *)((char *)PackReport::~PackReport(v55) + 120);
      while ( v46 != v55 );
    *(_DWORD *)(v43 + 8) = v54;
  result = v60;
  if ( v60 )
    if ( v7 == 1 )
      result = ResourcePackManager::_composeFullStack(v3);
    else
      result = 1;
      *((_BYTE *)v3 + 77) = 1;
  return result;
}


signed int __fastcall ResourcePackManager::hasTexture(ResourcePackManager *this, const ResourceLocation *a2)
{
  int *v2; // r4@1
  ResourcePackManager *v3; // r7@1
  void *v4; // r5@1
  int v5; // r6@1
  signed int v6; // r9@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int *v9; // r0@11
  void *v10; // r0@16
  void *v11; // r0@17
  void *v12; // r0@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  int v20; // [sp+Ch] [bp-3Ch]@1
  int v21; // [sp+10h] [bp-38h]@1
  int v22; // [sp+14h] [bp-34h]@1
  void *v23; // [sp+18h] [bp-30h]@1
  int v24; // [sp+1Ch] [bp-2Ch]@1
  char *v25; // [sp+20h] [bp-28h]@1

  v2 = (int *)a2;
  v3 = this;
  sub_21E94B4((void **)&v20, ".tga");
  sub_21E94B4((void **)&v21, ".png");
  sub_21E94B4((void **)&v22, ".jpg");
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v4 = operator new(0xCu);
  v23 = v4;
  v25 = (char *)v4 + 12;
  v5 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>((int)&v20, (int)&v23, (int)v4);
  v24 = v5;
  v6 = ResourcePackManager::hasResource((int)v3, v2, (unsigned __int64 *)&v23);
  if ( v4 != (void *)v5 )
  {
    do
    {
      v9 = (int *)(*(_DWORD *)v4 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v4 = (char *)v4 + 4;
    }
    while ( v4 != (void *)v5 );
    v4 = v23;
  }
  if ( v4 )
    operator delete(v4);
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v6;
}


void __fastcall ResourcePackManager::getPathContainingResource(int *a1, int a2, int *a3, unsigned __int64 *a4)
{
  ResourcePackManager::getPathContainingResource(a1, a2, a3, a4);
}


int __fastcall ResourcePackManager::notifyLanguageSubpacksChanged(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 28); i; i = *(_DWORD *)i )
    result = (*(int (**)(void))(**(_DWORD **)(i + 4) + 16))();
  return result;
}


void __fastcall ResourcePackManager::loadTexture(ResourcePackManager *this, const ResourceLocation *a2, int a3)
{
  ResourcePackManager *v3; // r8@1
  const ResourceLocation *v4; // r4@1
  int v5; // r9@1
  void (__fastcall *v6)(const ResourceLocation *, int, char **, char **); // r7@1
  char *v7; // r4@1
  int v8; // r6@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int *v11; // r0@11
  void *v12; // r0@16
  void *v13; // r0@17
  void *v14; // r0@18
  int *v15; // r0@20
  char *v16; // r0@22
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  unsigned int *v19; // r2@28
  signed int v20; // r1@30
  unsigned int *v21; // r2@32
  signed int v22; // r1@34
  unsigned int *v23; // r2@36
  signed int v24; // r1@38
  int v25; // [sp+10h] [bp-40h]@1
  int v26; // [sp+14h] [bp-3Ch]@1
  int v27; // [sp+18h] [bp-38h]@1
  char *v28; // [sp+1Ch] [bp-34h]@1
  char *v29; // [sp+20h] [bp-30h]@1
  char *v30; // [sp+24h] [bp-2Ch]@1
  char *v31; // [sp+28h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v31 = (char *)&unk_28898CC;
  v6 = *(void (__fastcall **)(const ResourceLocation *, int, char **, char **))(*(_DWORD *)a2 + 12);
  sub_21E94B4((void **)&v25, ".tga");
  sub_21E94B4((void **)&v26, ".png");
  sub_21E94B4((void **)&v27, ".jpg");
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v28 = (char *)operator new(0xCu);
  v30 = v28 + 12;
  v29 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v25,
                  (int)&v28,
                  (int)v28);
  v6(v4, v5, &v31, &v28);
  v8 = (int)v29;
  v7 = v28;
  if ( v28 != v29 )
  {
    do
    {
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v7 += 4;
    }
    while ( v7 != (char *)v8 );
    v7 = v28;
  }
  if ( v7 )
    operator delete(v7);
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v26 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v25 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v15 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v15 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  AppPlatform::loadTextureFromStream((int)v3, *v15, (mce::ImageBuffer **)&v31);
  v16 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v31 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


int __fastcall ResourcePackManager::isInStreamableLocation(ResourcePackManager *this, const ResourceLocation *a2)
{
  const ResourceLocation *v2; // r5@1
  PackInstance *v3; // r4@1
  PackInstance *v4; // r6@1
  char v5; // r0@6

  v2 = a2;
  v4 = (PackInstance *)(*(_QWORD *)(*((_DWORD *)this + 16) + 4) >> 32);
  v3 = (PackInstance *)*(_QWORD *)(*((_DWORD *)this + 16) + 4);
  if ( v3 == v4 )
    goto LABEL_7;
  while ( PackInstance::hasResource((int)v3, (int)v2) != 1 )
  {
    v3 = (PackInstance *)((char *)v3 + 120);
    if ( v4 == v3 )
      goto LABEL_7;
  }
  if ( v3 )
    a2 = (const ResourceLocation *)(PackInstance::isZipped(v3) ^ 1);
    v5 = 0;
  else
LABEL_7:
    v5 = 1;
  return ((unsigned __int8)v5 | (unsigned __int8)a2) & 1;
}


int __fastcall ResourcePackManager::onVanillaPackDownloadComplete(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 28); i; i = *(_DWORD *)i )
    result = (*(int (**)(void))(**(_DWORD **)(i + 4) + 12))();
  return result;
}


int __fastcall ResourcePackManager::unRegisterResourcePackListener(int a1, unsigned int a2)
{
  int v2; // r9@1
  unsigned int v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  int result; // r0@1
  int v8; // r1@1
  int v9; // r11@1
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
  v4 = *(_DWORD *)(a1 + 24);
  v5 = a2;
  v6 = *(_DWORD *)(v2 + 20);
  v20 = *(_DWORD *)(v2 + 20);
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
      result = (int)v11[1];
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
          result = *(_DWORD *)(v2 + 32) - 1;
          *(_DWORD *)(v2 + 32) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *(_DWORD *)(v2 + 20);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)(v2 + 28) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


void __fastcall ResourcePackManager::findAllTexturesInUse(ResourcePackManager *this, int a2)
{
  ResourcePackManager::findAllTexturesInUse(this, a2);
}


void __fastcall ResourcePackManager::~ResourcePackManager(ResourcePackManager *this)
{
  ResourcePackManager::~ResourcePackManager(this);
}


int __fastcall ResourcePackManager::setCanUseGlobalPackStack(int result, bool a2)
{
  *(_BYTE *)(result + 78) = a2;
  return result;
}


void __fastcall ResourcePackManager::onLanguageChanged(ResourcePackManager *this)
{
  ResourcePackManager::onLanguageChanged(this);
}


void __fastcall ResourcePackManager::getPathContainingResource(ResourcePackManager *this, const ResourceLocation *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r6@1
  PackInstance *v5; // r5@1
  PackInstance *v6; // r7@1
  int v7; // r0@6
  const void **v8; // r0@6
  void *v9; // r0@6
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // [sp+0h] [bp-20h]@6

  v3 = (int *)this;
  v4 = a3;
  v6 = (PackInstance *)(*(_QWORD *)(*((_DWORD *)a2 + 16) + 4) >> 32);
  v5 = (PackInstance *)*(_QWORD *)(*((_DWORD *)a2 + 16) + 4);
  if ( v5 == v6 )
    goto LABEL_8;
  while ( PackInstance::hasResource((int)v5, v4) != 1 )
  {
    v5 = (PackInstance *)((char *)v5 + 120);
    if ( v6 == v5 )
      goto LABEL_8;
  }
  if ( v5 )
    v7 = PackInstance::getResourceLocation(v5);
    ResourceLocation::getFullPath((ResourceLocation *)&v12, v7);
    v8 = sub_21E7408((const void **)&v12, "/", 1u);
    *v3 = (int)*v8;
    *v8 = &unk_28898CC;
    v9 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
  else
LABEL_8:
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
}


int __fastcall ResourcePackManager::removeUnsupportedPacks(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  int v3; // [sp+4h] [bp-14h]@1

  v1 = this;
  v3 = ContentTierManager::getContentTierInfo(*((ContentTierManager **)this + 20));
  ResourcePackStack::removeUnsupportedPacks(*((_DWORD *)v1 + 12), &v3);
  ResourcePackStack::removeUnsupportedPacks(*((_DWORD *)v1 + 13), &v3);
  ResourcePackStack::removeUnsupportedPacks(*((_DWORD *)v1 + 14), &v3);
  return ResourcePackStack::removeUnsupportedPacks(*((_DWORD *)v1 + 15), &v3);
}


int __fastcall ResourcePackManager::getStack(int a1, int a2)
{
  int result; // r0@2
  int *v3; // r0@6

  if ( a2 )
  {
    if ( a2 == 2 )
    {
      result = *(_DWORD *)(a1 + 56);
    }
    else
      if ( a2 == 1 )
        v3 = (int *)(a1 + 48);
      else
        v3 = (int *)(a1 + 60);
      result = *v3;
  }
  else
    result = *(_DWORD *)(a1 + 52);
  return result;
}


int __fastcall ResourcePackManager::getStackSize(ResourcePackManager *this)
{
  return -286331153
       * ((signed int)((*(_QWORD *)(*((_DWORD *)this + 16) + 4) >> 32) - *(_QWORD *)(*((_DWORD *)this + 16) + 4)) >> 3);
}


int __fastcall ResourcePackManager::composeFullStack(ResourcePackManager *this, ResourcePackStack *a2, const ResourcePackStack *a3, const ResourcePackStack *a4, const ResourcePackStack *a5)
{
  ResourcePackStack *v5; // r4@1
  char *v6; // r5@1
  PackReport *v7; // r7@1
  const ResourcePackStack *v8; // r11@1
  ResourcePackManager *v9; // r9@1
  PackReport *v10; // r8@1
  PackReport *v11; // r6@1
  PackReport *v12; // r0@2
  int v13; // r6@5
  const ResourcePackStack *v15; // [sp+0h] [bp-28h]@1

  v5 = a2;
  v15 = a3;
  v6 = (char *)a2 + 4;
  v7 = (PackReport *)*((_DWORD *)a2 + 1);
  v8 = a4;
  v9 = this;
  v10 = (PackReport *)*((_DWORD *)a2 + 2);
  v11 = v7;
  if ( v10 != v7 )
  {
    v12 = (PackReport *)*((_DWORD *)a2 + 1);
    do
      v12 = (PackReport *)((char *)PackReport::~PackReport(v12) + 120);
    while ( v10 != v12 );
    v11 = *(PackReport **)v6;
  }
  *((_DWORD *)v5 + 2) = v7;
  std::vector<PackInstance,std::allocator<PackInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<PackInstance const*,std::vector<PackInstance,std::allocator<PackInstance>>>>(
    (signed int)v6,
    v7,
    *(_QWORD *)((char *)a5 + 4),
    *(_QWORD *)((char *)a5 + 4) >> 32);
    *((PackReport **)v5 + 2),
    *(_QWORD *)((char *)v8 + 4),
    *(_QWORD *)((char *)v8 + 4) >> 32);
  v13 = -286331153 * ((v7 - v11) >> 3);
  if ( *((_BYTE *)v9 + 78) )
    std::vector<PackInstance,std::allocator<PackInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<PackInstance const*,std::vector<PackInstance,std::allocator<PackInstance>>>>(
      (signed int)v6,
      *((PackReport **)v5 + 2),
      *(_QWORD *)((char *)v15 + 4),
      *(_QWORD *)((char *)v15 + 4) >> 32);
  std::vector<PackInstance,std::allocator<PackInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<PackInstance*,std::vector<PackInstance,std::allocator<PackInstance>>>>(
    *(_QWORD *)(*((_DWORD *)v9 + 15) + 4),
    *(_QWORD *)(*((_DWORD *)v9 + 15) + 4) >> 32);
  ResourcePackStack::removeDuplicates(v5);
  return v13;
}


int __fastcall ResourcePackManager::handlePendingStackChanges(int result)
{
  if ( *(_BYTE *)(result + 77) )
    result = j_j_j__ZN19ResourcePackManager17_composeFullStackEv((ResourcePackManager *)result);
  else
    JUMPOUT(*(_BYTE *)(result + 77) != 0, ResourcePackManager::forceStackCompose);
  return result;
}


void __fastcall ResourcePackManager::getPathContainingResource(ResourcePackManager *this, const ResourceLocation *a2, int a3)
{
  ResourcePackManager::getPathContainingResource(this, a2, a3);
}


void __fastcall ResourcePackManager::setPackSourceReport(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r6@1
  int v5; // r4@1
  void *v6; // r5@2
  void *v7; // r7@3
  void *v8; // r0@4
  _DWORD *v9; // [sp+4h] [bp-1Ch]@1
  char v10; // [sp+8h] [bp-18h]@3

  v2 = a1;
  v3 = a2;
  v4 = operator new(0x1Cu);
  *v4 = 0;
  v4[1] = *(_DWORD *)(v3 + 4);
  v4[2] = 0;
  v4[3] = *(_DWORD *)(v3 + 12);
  *((_QWORD *)v4 + 2) = *(_QWORD *)(v3 + 16);
  v9 = v4;
  std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<PackIdVersion const,PackReport>,true> const*)#1}>(
    v4,
    v3,
    (int *)&v9);
  v5 = *(_DWORD *)(v2 + 68);
  *(_DWORD *)(v2 + 68) = v4;
  if ( v5 )
  {
    v6 = *(void **)(v5 + 8);
    if ( v6 )
    {
      do
      {
        v7 = *(void **)v6;
        __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
          (int)&v10,
          (int)v6 + 8);
        operator delete(v6);
        v6 = v7;
      }
      while ( v7 );
    }
    _aeabi_memclr4(*(_QWORD *)v5, 4 * (*(_QWORD *)v5 >> 32));
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    v8 = *(void **)v5;
    if ( *(_DWORD *)v5 )
      if ( (void *)(v5 + 24) != v8 )
        operator delete(v8);
    j_j_j__ZdlPv_5((void *)v5);
  }
}


int __fastcall ResourcePackManager::isInStreamableLocation(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r5@1
  int *v4; // r9@1
  PackInstance *v5; // r6@1
  const void **i; // r4@3
  const void **v7; // r10@3
  signed int v8; // r11@7
  void *v9; // r0@9
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  char v12; // r0@11
  PackInstance *v14; // [sp+4h] [bp-3Ch]@1
  int (**v15)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+8h] [bp-38h]@2
  int v16; // [sp+Ch] [bp-34h]@6

  v3 = a3;
  v4 = a2;
  v5 = (PackInstance *)*(_QWORD *)(*(_DWORD *)(a1 + 64) + 4);
  v14 = (PackInstance *)(*(_QWORD *)(*(_DWORD *)(a1 + 64) + 4) >> 32);
  if ( v5 == v14 )
  {
    v12 = 1;
  }
  else
    v15 = &pthread_create;
    do
    {
      v7 = (const void **)(*v3 >> 32);
      for ( i = (const void **)*v3; i != v7; ++i )
      {
        sub_21E8AF4(&v16, v4);
        sub_21E72F0((const void **)&v16, i);
        if ( PackInstance::hasResource((int)v5, (int)&v16) == 1 )
        {
          v8 = 1;
          v15 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))(PackInstance::isZipped(v5) ^ 1);
        }
        else
          v8 = 0;
        v9 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v16 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        if ( v8 )
          v12 = 0;
          goto LABEL_23;
      }
      v5 = (PackInstance *)((char *)v5 + 120);
    }
    while ( v5 != v14 );
LABEL_23:
    LOBYTE(a2) = (_BYTE)v15;
  return ((unsigned __int8)v12 | (unsigned __int8)a2) & 1;
}


ResourcePackManager *__fastcall ResourcePackManager::~ResourcePackManager(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r8@2
  void *v5; // r6@3
  void *v6; // r5@4
  void *v7; // r0@5
  int v8; // r0@9
  int v9; // r0@11
  int v10; // r0@13
  int v11; // r0@15
  int v12; // r0@17
  void *v13; // r0@19
  void *v14; // r5@20
  char *v15; // r0@21
  void (*v16)(void); // r3@24
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  char v20; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  *(_DWORD *)this = &off_26EAC50;
  v2 = *((_DWORD *)this + 18);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  if ( v4 )
    v5 = *(void **)(v4 + 8);
    if ( v5 )
      {
        v6 = *(void **)v5;
        __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
          (int)&v20,
          (int)v5 + 8);
        operator delete(v5);
        v5 = v6;
      }
      while ( v6 );
    _aeabi_memclr4(*(_QWORD *)v4, 4 * (*(_QWORD *)v4 >> 32));
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    v7 = *(void **)v4;
    if ( *(_DWORD *)v4 && (void *)(v4 + 24) != v7 )
      operator delete(v7);
    operator delete((void *)v4);
  *((_DWORD *)v1 + 17) = 0;
  v8 = *((_DWORD *)v1 + 16);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 16) = 0;
  v9 = *((_DWORD *)v1 + 15);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 15) = 0;
  v10 = *((_DWORD *)v1 + 14);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  v11 = *((_DWORD *)v1 + 13);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  *((_DWORD *)v1 + 13) = 0;
  v12 = *((_DWORD *)v1 + 12);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  *((_DWORD *)v1 + 12) = 0;
  v13 = (void *)*((_DWORD *)v1 + 7);
  if ( v13 )
    do
      v14 = *(void **)v13;
      operator delete(v13);
      v13 = v14;
    while ( v14 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 20), 4 * (*(_QWORD *)((char *)v1 + 20) >> 32));
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  v15 = (char *)*((_DWORD *)v1 + 5);
  if ( v15 && (char *)v1 + 44 != v15 )
    operator delete(v15);
  *(_DWORD *)v1 = &off_2726968;
  v16 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v16 )
    v16();
  return v1;
}


void __fastcall ResourcePackManager::~ResourcePackManager(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r0@1

  v1 = ResourcePackManager::~ResourcePackManager(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall ResourcePackManager::ResourcePackManager(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  void (__fastcall *v5)(char *); // r3@1
  int v6; // r5@1
  double v7; // r0@2
  void (__fastcall *v8)(int, char *, signed int); // r3@2
  void (*v9)(void); // r3@3
  unsigned int v10; // r0@6
  int v11; // r7@8
  void *v12; // r6@8
  int v13; // r6@9
  _DWORD *v14; // r0@9
  _DWORD *v15; // r0@9
  _DWORD *v16; // r0@9
  _DWORD *v17; // r0@9
  _DWORD *v18; // r0@9
  char v20; // [sp+4h] [bp-34h]@2
  void (__fastcall *v21)(int, char *, signed int); // [sp+Ch] [bp-2Ch]@1
  int v22; // [sp+10h] [bp-28h]@2

  v3 = a1;
  v4 = a2;
  v21 = 0;
  v5 = *(void (__fastcall **)(char *))(a2 + 8);
  v6 = a3;
  if ( v5 )
  {
    v5(&v20);
    HIDWORD(v7) = *(_DWORD *)(v4 + 12);
    v22 = *(_DWORD *)(v4 + 12);
    v21 = *(void (__fastcall **)(int, char *, signed int))(v4 + 8);
    v8 = v21;
    *(_DWORD *)v3 = &off_2726968;
    *(_DWORD *)(v3 + 12) = 0;
    if ( v8 )
    {
      v8(v3 + 4, &v20, 2);
      *(_DWORD *)(v3 + 16) = v22;
      v9 = (void (*)(void))v21;
      *(_DWORD *)(v3 + 12) = v21;
      if ( v9 )
        v9();
    }
  }
  else
    HIDWORD(v7) = &off_2726968;
    *(_DWORD *)a1 = &off_2726968;
    *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)v3 = &off_26EAC50;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 1065353216;
  LODWORD(v7) = v3 + 36;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  v10 = sub_21E6254(v7);
  *(_DWORD *)(v3 + 24) = v10;
  if ( v10 == 1 )
    *(_DWORD *)(v3 + 44) = 0;
    v12 = (void *)(v3 + 44);
    if ( v10 >= 0x40000000 )
      sub_21E57F4();
    v11 = 4 * v10;
    v12 = operator new(4 * v10);
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)(v3 + 20) = v12;
  *(_DWORD *)(v3 + 48) = 0;
  v13 = v3 + 48;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 4) = 0;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 24) = &unk_28898CC;
  *(_BYTE *)(v13 + 28) = 1;
  *(_BYTE *)(v13 + 29) = 0;
  *(_BYTE *)(v13 + 30) = 1;
  *(_DWORD *)(v13 + 32) = v6;
  v14 = operator new(0x14u);
  *v14 = &off_26EAC8C;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  *(_DWORD *)(v3 + 64) = v14;
  v15 = operator new(0x14u);
  *v15 = &off_26EAC8C;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  *(_DWORD *)v13 = v15;
  v16 = operator new(0x14u);
  *v16 = &off_26EAC8C;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  *(_DWORD *)(v3 + 52) = v16;
  v17 = operator new(0x14u);
  *v17 = &off_26EAC8C;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  *(_DWORD *)(v3 + 56) = v17;
  v18 = operator new(0x14u);
  *v18 = &off_26EAC8C;
  v18[1] = 0;
  v18[2] = 0;
  v18[3] = 0;
  v18[4] = 0;
  *(_DWORD *)(v3 + 60) = v18;
  return v3;
}


void __fastcall ResourcePackManager::loadRawTexture(ResourcePackManager *this, const ResourceLocation *a2, int a3)
{
  ResourcePackManager::loadRawTexture(this, a2, a3);
}


void __fastcall ResourcePackManager::findAllTexturesInUse(ResourcePackManager *this, int a2)
{
  ResourcePackManager *v2; // r10@1
  int v3; // r9@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r6@3
  int *v7; // r4@3
  PackInstance *v8; // r6@4
  PackInstance *v9; // r7@5
  Json::Value *v10; // r7@7
  char *v11; // r7@8
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  void *v17; // r0@13
  char *v18; // r0@14
  char *v19; // r0@15
  void *v20; // r0@16
  unsigned int *v21; // r2@18
  signed int v22; // r1@20
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@26
  signed int v26; // r1@28
  unsigned int *v27; // r2@30
  signed int v28; // r1@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  unsigned int *v31; // r2@38
  signed int v32; // r1@40
  unsigned int *v33; // r2@42
  signed int v34; // r1@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  unsigned int *v39; // r2@92
  signed int v40; // r1@94
  char *v41; // r11@99
  _DWORD *v42; // r0@100
  void *v43; // r0@102
  int v44; // r4@104
  __int64 v45; // kr08_8@105
  int *v46; // r3@105
  int *v47; // r1@105
  int v48; // r5@106
  int v49; // r12@106
  int v50; // r1@106
  int v51; // r2@106
  int v52; // r3@106
  int v53; // r5@111
  int v54; // [sp+14h] [bp-11Ch]@5
  _DWORD *v55; // [sp+18h] [bp-118h]@100
  void (*v56)(void); // [sp+20h] [bp-110h]@100
  void (__fastcall *v57)(int *, int *); // [sp+24h] [bp-10Ch]@100
  int v58; // [sp+2Ch] [bp-104h]@92
  char v59; // [sp+30h] [bp-100h]@8
  char v60; // [sp+38h] [bp-F8h]@8
  int v61; // [sp+3Ch] [bp-F4h]@8
  int v62; // [sp+40h] [bp-F0h]@8
  int v63; // [sp+44h] [bp-ECh]@8
  int v64; // [sp+48h] [bp-E8h]@8
  int v65; // [sp+50h] [bp-E0h]@13
  int v66; // [sp+54h] [bp-DCh]@12
  int v67; // [sp+58h] [bp-D8h]@11
  char v68; // [sp+60h] [bp-D0h]@8
  int v69; // [sp+68h] [bp-C8h]@8
  int v70; // [sp+6Ch] [bp-C4h]@8
  int v71; // [sp+70h] [bp-C0h]@8
  int v72; // [sp+74h] [bp-BCh]@8
  int v73; // [sp+78h] [bp-B8h]@8
  int v74; // [sp+80h] [bp-B0h]@10
  int v75; // [sp+84h] [bp-ACh]@9
  int v76; // [sp+88h] [bp-A8h]@8
  char v77; // [sp+90h] [bp-A0h]@8
  int v78; // [sp+98h] [bp-98h]@8
  int v79; // [sp+A8h] [bp-88h]@8
  char *v80; // [sp+ACh] [bp-84h]@8
  char *v81; // [sp+B0h] [bp-80h]@8
  int v82; // [sp+B4h] [bp-7Ch]@8
  char v83; // [sp+B8h] [bp-78h]@6
  char v84; // [sp+C0h] [bp-70h]@6
  char v85; // [sp+C8h] [bp-68h]@5
  char v86; // [sp+D8h] [bp-58h]@8
  void *ptr; // [sp+ECh] [bp-44h]@4
  unsigned int v88; // [sp+F0h] [bp-40h]@1
  int v89; // [sp+F4h] [bp-3Ch]@1
  int v90; // [sp+F8h] [bp-38h]@1
  signed int v91; // [sp+FCh] [bp-34h]@1
  int v92; // [sp+100h] [bp-30h]@1
  int v93; // [sp+104h] [bp-2Ch]@113

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = *(_DWORD *)(a2 + 64);
  v89 = 0;
  v90 = 0;
  v91 = 1065353216;
  v92 = 0;
  HIDWORD(v4) = 10;
  LODWORD(v4) = &v91;
  v5 = sub_21E6254(v4);
  v88 = v5;
  if ( v5 == 1 )
  {
    v93 = 0;
    v7 = &v93;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = (int *)operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  ptr = v7;
  v8 = (PackInstance *)*(_QWORD *)(v3 + 4);
  if ( v8 != (PackInstance *)(*(_QWORD *)(v3 + 4) >> 32) )
    v9 = (PackInstance *)&v85;
    v54 = 0;
    do
    {
      PackInstance::getPackId((PackInstance *)&v86, (int)v8);
      v41 = PackInstance::getVersion(v8);
      PackInstance::getTexturesList(v9, (int)v8);
      if ( Json::Value::empty(v9) )
      {
        PackInstance::getResourceLocation(v8);
        sub_21E94B4((void **)&v58, "textures/");
        v56 = 0;
        v42 = operator new(0x10u);
        *v42 = &ptr;
        v42[1] = &v86;
        v42[2] = v41;
        v42[3] = v54;
        v55 = v42;
        v57 = sub_158CA1C;
        v56 = (void (*)(void))sub_158D04C;
        PackInstance::forEachIn((int)v8, (int)&v58, (int)&v55, 0);
        if ( v56 )
          v56();
        v9 = (PackInstance *)&v85;
        v43 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) != &dword_28898C0 )
        {
          v39 = (unsigned int *)(v58 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v9 = (PackInstance *)&v85;
          }
          else
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        }
      }
      else
        Json::Value::begin((Json::Value *)&v84, (int)&v85);
        Json::Value::end((Json::Value *)&v83, (int)&v85);
        while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v84, (const Json::ValueIteratorBase *)&v83) != 1 )
          v10 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v84);
          if ( Json::Value::isString(v10) == 1 )
            sub_21E94B4((void **)&v79, (const char *)&unk_257BC67);
            Json::Value::asString((int *)&v80, (int)v10, &v79);
            v11 = v80;
            v80 = (char *)&unk_28898CC;
            v81 = v11;
            v82 = 0;
            PackIdVersion::PackIdVersion((int)&v60, (int)&v86, (int)v41, 0);
            v69 = *(_DWORD *)&v60;
            v70 = v61;
            v71 = v62;
            v72 = v63;
            SemVersion::SemVersion((int)&v73, (int)&v64);
            v77 = v68;
            v78 = v54;
            std::_Hashtable<ResourceLocation,std::pair<ResourceLocation const,std::pair<PackIdVersion,int>>,std::allocator<std::pair<ResourceLocation const,std::pair<PackIdVersion,int>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ResourceLocation,std::pair<PackIdVersion,int>>(
              &v59,
              (int)&ptr,
              (int)&v81,
              (int)&v69);
            v12 = (void *)(v76 - 12);
            if ( (int *)(v76 - 12) != &dword_28898C0 )
            {
              v21 = (unsigned int *)(v76 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v22 = __ldrex(v21);
                while ( __strex(v22 - 1, v21) );
              }
              else
                v22 = (*v21)--;
              if ( v22 <= 0 )
                j_j_j_j__ZdlPv_9(v12);
            }
            v13 = (void *)(v75 - 12);
            if ( (int *)(v75 - 12) != &dword_28898C0 )
              v23 = (unsigned int *)(v75 - 4);
                  v24 = __ldrex(v23);
                while ( __strex(v24 - 1, v23) );
                v24 = (*v23)--;
              if ( v24 <= 0 )
                j_j_j_j__ZdlPv_9(v13);
            v14 = (void *)(v74 - 12);
            if ( (int *)(v74 - 12) != &dword_28898C0 )
              v25 = (unsigned int *)(v74 - 4);
                  v26 = __ldrex(v25);
                while ( __strex(v26 - 1, v25) );
                v26 = (*v25)--;
              if ( v26 <= 0 )
                j_j_j_j__ZdlPv_9(v14);
            v15 = (void *)(v67 - 12);
            if ( (int *)(v67 - 12) != &dword_28898C0 )
              v27 = (unsigned int *)(v67 - 4);
                  v28 = __ldrex(v27);
                while ( __strex(v28 - 1, v27) );
                v28 = (*v27)--;
              if ( v28 <= 0 )
                j_j_j_j__ZdlPv_9(v15);
            v16 = (void *)(v66 - 12);
            if ( (int *)(v66 - 12) != &dword_28898C0 )
              v29 = (unsigned int *)(v66 - 4);
                  v30 = __ldrex(v29);
                while ( __strex(v30 - 1, v29) );
                v30 = (*v29)--;
              if ( v30 <= 0 )
                j_j_j_j__ZdlPv_9(v16);
            v17 = (void *)(v65 - 12);
            if ( (int *)(v65 - 12) != &dword_28898C0 )
              v31 = (unsigned int *)(v65 - 4);
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j__ZdlPv_9(v17);
            v18 = v81 - 12;
            if ( (int *)(v81 - 12) != &dword_28898C0 )
              v33 = (unsigned int *)(v81 - 4);
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j__ZdlPv_9(v18);
            v19 = v80 - 12;
            if ( (int *)(v80 - 12) != &dword_28898C0 )
              v35 = (unsigned int *)(v80 - 4);
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
                v36 = (*v35)--;
              if ( v36 <= 0 )
                j_j_j_j__ZdlPv_9(v19);
            v20 = (void *)(v79 - 12);
            if ( (int *)(v79 - 12) != &dword_28898C0 )
              v37 = (unsigned int *)(v79 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j__ZdlPv_9(v20);
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v84);
      Json::Value::~Value(v9);
      v8 = (PackInstance *)((char *)v8 + 120);
      ++v54;
    }
    while ( v8 != *(PackInstance **)(v3 + 8) );
  v44 = v89;
  if ( v89 )
      v45 = *(_QWORD *)((char *)v2 + 4);
      v46 = (int *)(v44 + 64);
      v47 = (int *)(v44 + 8);
      if ( (_DWORD)v45 == HIDWORD(v45) )
        std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>::_M_emplace_back_aux<ResourceLocation const&,PackIdVersion &,int &>(
          (unsigned __int64 *)v2,
          (int)v47,
          v44 + 16,
          v46);
        v48 = *v46;
        sub_21E8AF4((int *)v45, v47);
        v49 = v45 + 8;
        *(_DWORD *)(v45 + 4) = *(_DWORD *)(v44 + 12);
        v50 = *(_DWORD *)(v44 + 20);
        v51 = *(_DWORD *)(v44 + 24);
        v52 = *(_DWORD *)(v44 + 28);
        *(_DWORD *)v49 = *(_DWORD *)(v44 + 16);
        *(_DWORD *)(v49 + 4) = v50;
        *(_DWORD *)(v49 + 8) = v51;
        *(_DWORD *)(v49 + 12) = v52;
        SemVersion::SemVersion(v45 + 24, v44 + 32);
        *(_BYTE *)(v45 + 48) = *(_BYTE *)(v44 + 56);
        *(_DWORD *)(v45 + 56) = v48;
        *((_DWORD *)v2 + 1) = v45 + 64;
      v44 = *(_DWORD *)v44;
    while ( v44 );
    v44 = v89;
  if ( v44 )
      v53 = *(_DWORD *)v44;
      std::pair<ResourceLocation const,std::pair<PackIdVersion,int>>::~pair(v44 + 8);
      operator delete((void *)v44);
      v44 = v53;
    while ( v53 );
  _aeabi_memclr4(ptr, 4 * v88);
  if ( ptr )
    if ( &v93 != ptr )
      operator delete(ptr);
}


int __fastcall ResourcePackManager::notifyActiveResourcePackChanged(int result)
{
  int i; // r5@1

  for ( i = *(_DWORD *)(result + 28); i; i = *(_DWORD *)i )
    result = (*(int (**)(void))(**(_DWORD **)(i + 4) + 8))();
  return result;
}


void __fastcall ResourcePackManager::loadTexture(ResourcePackManager *this, const ResourceLocation *a2, int a3)
{
  ResourcePackManager::loadTexture(this, a2, a3);
}


void __fastcall ResourcePackManager::_updateLanguageSubpacks(ResourcePackManager *this)
{
  int v1; // r4@0
  int v2; // r6@0
  ResourcePackManager *v3; // r9@1
  int v4; // r5@1
  bool v5; // zf@1
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  void *v8; // r0@13
  int i; // r4@15
  int v10; // [sp+0h] [bp-30h]@5

  v3 = this;
  v4 = I18n::getCurrentLanguage(this);
  v5 = v4 == 0;
  if ( v4 )
  {
    v1 = *(_QWORD *)(*((_DWORD *)v3 + 16) + 4) >> 32;
    v2 = *(_QWORD *)(*((_DWORD *)v3 + 16) + 4);
    v5 = v2 == v1;
  }
  if ( !v5 )
    do
    {
      Localization::getFullLanguageCode((Localization *)&v10, v4);
      PackInstance::setLocale(v2, (int)&v10);
      v8 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v10 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v2 += 120;
    }
    while ( v2 != v1 );
  for ( i = *((_DWORD *)v3 + 7); i; i = *(_DWORD *)i )
    (*(void (**)(void))(**(_DWORD **)(i + 4) + 16))();
}


signed int __fastcall ResourcePackManager::hasResource(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r7@1
  int *v4; // r10@1
  int v5; // r6@1
  const void **j; // r4@2
  const void **v7; // r11@2
  int v8; // r5@5
  void *v9; // r0@5
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int i; // [sp+8h] [bp-38h]@1
  int v14; // [sp+Ch] [bp-34h]@5

  v3 = a3;
  v4 = a2;
  v5 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4);
  for ( i = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4) >> 32; v5 != i; v5 += 120 )
  {
    v7 = (const void **)(*v3 >> 32);
    for ( j = (const void **)*v3; j != v7; ++j )
    {
      sub_21E8AF4(&v14, v4);
      sub_21E72F0((const void **)&v14, j);
      v8 = PackInstance::hasResource(v5, (int)&v14);
      v9 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v14 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      if ( v8 )
        return 1;
    }
  }
  return 0;
}


signed int __fastcall ResourcePackManager::_shouldRebuildStack(ResourcePackManager *this)
{
  ResourcePackManager *v1; // r4@1
  int v2; // r0@1
  int v3; // r4@1
  int v4; // r5@1 OVERLAPPED
  int v5; // r6@1 OVERLAPPED
  signed int v6; // r4@5
  void **v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1
  int v11; // [sp+10h] [bp-18h]@1
  int v12; // [sp+14h] [bp-14h]@1

  v1 = this;
  v8 = &off_26EAC8C;
  v11 = 0;
  v12 = 0;
  v9 = 0;
  v10 = 0;
  ResourcePackManager::composeFullStack(
    v1,
    (ResourcePackStack *)&v8,
    *((const ResourcePackStack **)v1 + 14),
    (const ResourcePackStack *)(*((_QWORD *)this + 6) >> 32),
    (const ResourcePackStack *)*((_QWORD *)v1 + 6));
  v2 = *((_DWORD *)v1 + 16);
  v3 = v9;
  *(_QWORD *)&v4 = *(_QWORD *)(v2 + 4);
  if ( v5 - v4 == v10 - v9 )
  {
    if ( v4 == v5 )
    {
LABEL_5:
      v6 = 0;
    }
    else
      while ( PackInstance::operator==(v4, v3) == 1 )
      {
        v4 += 120;
        v3 += 120;
        if ( v5 == v4 )
          goto LABEL_5;
      }
      v6 = 1;
  }
  else
    v6 = 1;
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v8);
  return v6;
}


int __fastcall ResourcePackManager::getResourcesOfGroup(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int result; // r0@1
  _DWORD *v10; // [sp+0h] [bp-38h]@1
  __int64 v11; // [sp+8h] [bp-30h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v7 = operator new(4u);
  LODWORD(v8) = sub_158D5B4;
  *v7 = v4;
  HIDWORD(v8) = sub_158D590;
  v10 = v7;
  v11 = v8;
  result = PackInstance::forEachIn(v6, v5, (int)&v10, 0);
  if ( (_DWORD)v11 )
    result = ((int (__cdecl *)(_DWORD **))v11)(&v10);
  return result;
}


signed int __fastcall ResourcePackManager::checkHasExtraLocaleResources(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@2
  int v4; // r9@2
  int v5; // r0@2
  int v6; // r7@3
  int v7; // r6@4
  int v8; // r0@9
  signed int result; // r0@14

  v2 = a2;
  if ( !*(_DWORD *)(*a2 - 12) )
    return 0;
  v4 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4) >> 32;
  v3 = *(_QWORD *)(*(_DWORD *)(a1 + 64) + 4);
  v5 = -286331153 * ((v4 - v3) >> 3) >> 2;
  if ( v5 >= 1 )
  {
    v6 = v5 + 1;
    do
    {
      v7 = v3;
      if ( PackInstance::hasExtraResourcesForLocale(v3, (int)v2) )
        goto LABEL_23;
      v7 = v3 + 120;
      if ( PackInstance::hasExtraResourcesForLocale(v3 + 120, (int)v2) )
      v7 = v3 + 240;
      if ( PackInstance::hasExtraResourcesForLocale(v3 + 240, (int)v2) )
      v7 = v3 + 360;
      if ( PackInstance::hasExtraResourcesForLocale(v3 + 360, (int)v2) )
      --v6;
      v3 += 480;
    }
    while ( v6 > 1 );
  }
  v8 = -286331153 * ((v4 - v3) >> 3);
  if ( v8 == 1 )
    v7 = v3;
    goto LABEL_19;
  if ( v8 == 2 )
  else
    if ( v8 != 3 )
      v7 = v4;
      goto LABEL_23;
    if ( PackInstance::hasExtraResourcesForLocale(v3, (int)v2) )
    v7 = v3 + 120;
  if ( !PackInstance::hasExtraResourcesForLocale(v7, (int)v2) )
    v7 += 120;
LABEL_19:
    if ( !PackInstance::hasExtraResourcesForLocale(v7, (int)v2) )
LABEL_23:
  result = 0;
  if ( v4 != v7 )
    result = 1;
  return result;
}
