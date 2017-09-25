

void __fastcall BaseAttributeMap::getSyncableAttributes(BaseAttributeMap *this, int a2)
{
  BaseAttributeMap *v2; // r11@1
  int i; // r6@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  Attribute *v6; // r0@11
  __int64 v7; // r0@12
  int v8; // r1@13
  void *v9; // r0@15
  void *v10; // [sp+0h] [bp-38h]@12
  int v11; // [sp+4h] [bp-34h]@13

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  for ( i = *(_DWORD *)(a2 + 8); i; i = *(_DWORD *)i )
  {
    v6 = (Attribute *)AttributeInstance::getAttribute((AttributeInstance *)(i + 8));
    if ( Attribute::isClientSyncable(v6) == 1 )
    {
      AttributeInstance::getHandle((AttributeInstance *)&v10, i + 8);
      v7 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>>::_M_emplace_back_aux<AttributeInstanceHandle>(
          (unsigned __int64 *)v2,
          (int)&v10);
        v8 = (int)v10;
      }
      else
        *(_DWORD *)v7 = v10;
        HIDWORD(v7) = &unk_28898CC;
        v10 = &unk_28898CC;
        *(_DWORD *)(v7 + 4) = v11;
        *((_DWORD *)v2 + 1) = v7 + 8;
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
        v4 = (unsigned int *)(v8 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
    }
  }
}


void *__fastcall BaseAttributeMap::getInstance(BaseAttributeMap *this, const Attribute *a2)
{
  unsigned __int64 *v2; // r4@1
  char *v3; // r0@1
  int v4; // r0@1
  void *v5; // r1@1

  v2 = (unsigned __int64 *)this;
  v3 = Attribute::getName(a2);
  v4 = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         v2,
         (int **)v3);
  v5 = &BaseAttributeMap::mInvalidInstance;
  if ( v4 )
    v5 = (void *)(v4 + 8);
  return v5;
}


int __fastcall BaseAttributeMap::getMutableInstance(unsigned __int64 *a1, int **a2)
{
  int result; // r0@1

  result = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             a1,
             a2);
  if ( result )
    result += 8;
  return result;
}


void *__fastcall BaseAttributeMap::getInstance(unsigned __int64 *a1, int **a2)
{
  int v2; // r0@1
  void *v3; // r1@1

  v2 = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  v3 = &BaseAttributeMap::mInvalidInstance;
  if ( v2 )
    v3 = (void *)(v2 + 8);
  return v3;
}


void __fastcall BaseAttributeMap::clearDirtyAttributes(BaseAttributeMap *this)
{
  BaseAttributeMap *v1; // r11@1
  __int64 v2; // kr00_8@1
  _DWORD *v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 28);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (_DWORD *)v2;
    do
    {
      v6 = (int *)(*v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
      v3 += 2;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 8) = v2;
}


int __fastcall BaseAttributeMap::registerAttribute(BaseAttributeMap *this, const Attribute *a2)
{
  Attribute *v2; // r5@1
  unsigned __int64 *v3; // r4@1
  char *v4; // r0@1
  int v5; // r0@1
  int *v6; // r0@2
  void *v7; // r0@2
  char *v8; // r0@3
  unsigned int *v10; // r12@5
  signed int v11; // r1@7
  int v12; // [sp+0h] [bp-70h]@2
  char v13; // [sp+8h] [bp-68h]@2
  int v14; // [sp+58h] [bp-18h]@2

  v2 = a2;
  v3 = (unsigned __int64 *)this;
  v4 = Attribute::getName(a2);
  v5 = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         v3,
         (int **)v4);
  if ( !v5 )
  {
    v6 = (int *)Attribute::getName(v2);
    sub_21E8AF4(&v14, v6);
    AttributeInstance::AttributeInstance((int)&v13, (int)v3, (int)v2);
    std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string,AttributeInstance>(
      &v12,
      (int)v3,
      &v14,
      (int)&v13);
    AttributeInstance::~AttributeInstance((AttributeInstance *)&v13);
    v7 = (void *)(v14 - 12);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = Attribute::getName(v2);
    v5 = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           v3,
           (int **)v8);
  }
  return v5 + 8;
}


char *__fastcall BaseAttributeMap::getDirtyAttributes(BaseAttributeMap *this)
{
  return (char *)this + 28;
}


void __fastcall BaseAttributeMap::onAttributeModified(BaseAttributeMap *this, const AttributeInstance *a2)
{
  const AttributeInstance *v2; // r5@1
  BaseAttributeMap *v3; // r4@1
  Attribute *v4; // r0@1
  __int64 v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *v10; // [sp+0h] [bp-20h]@2
  int v11; // [sp+4h] [bp-1Ch]@3

  v2 = a2;
  v3 = this;
  v4 = (Attribute *)AttributeInstance::getAttribute(a2);
  if ( Attribute::isClientSyncable(v4) == 1 )
  {
    AttributeInstance::getHandle((AttributeInstance *)&v10, (int)v2);
    v5 = *((_QWORD *)v3 + 4);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>>::_M_emplace_back_aux<AttributeInstanceHandle>(
        (unsigned __int64 *)((char *)v3 + 28),
        (int)&v10);
      v6 = (int)v10;
    }
    else
      *(_DWORD *)v5 = v10;
      HIDWORD(v5) = &unk_28898CC;
      v10 = &unk_28898CC;
      *(_DWORD *)(v5 + 4) = v11;
      *((_DWORD *)v3 + 8) = v5 + 8;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v6 - 4);
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
}


void __fastcall BaseAttributeMap::removeAttributeModifier(unsigned __int64 *a1, int **a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  AttributeInstance *v5; // r0@2
  int v6; // r1@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r2@5
  int v9; // r4@8
  unsigned int *v10; // r1@9
  unsigned int v11; // r0@11
  unsigned int *v12; // r5@15
  unsigned int v13; // r0@17
  int v14; // [sp+0h] [bp-18h]@2
  int v15; // [sp+4h] [bp-14h]@2

  v3 = a3;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( v4 )
  {
    v5 = (AttributeInstance *)(v4 + 8);
    v14 = *(_DWORD *)v3;
    v6 = *(_DWORD *)(v3 + 4);
    v15 = v6;
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
    AttributeInstance::removeModifier(v5, (const AttributeModifier **)&v14);
    v9 = v15;
    if ( v15 )
      v10 = (unsigned int *)(v15 + 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        v12 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  }
}


void __fastcall BaseAttributeMap::onAttributeModified(BaseAttributeMap *this, const AttributeInstance *a2)
{
  BaseAttributeMap::onAttributeModified(this, a2);
}


int __fastcall BaseAttributeMap::end(BaseAttributeMap *this)
{
  return 0;
}


void __fastcall BaseAttributeMap::clearDirtyAttributes(BaseAttributeMap *this)
{
  BaseAttributeMap::clearDirtyAttributes(this);
}


int __fastcall BaseAttributeMap::end(BaseAttributeMap *this)
{
  return 0;
}


void __fastcall BaseAttributeMap::addAttributeModifier(unsigned __int64 *a1, int **a2, int a3)
{
  int v3; // r5@1
  int v4; // r0@1
  AttributeInstance *v5; // r4@2
  int v6; // r0@2
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  int v9; // r6@8
  unsigned int *v10; // r1@9
  unsigned int v11; // r0@11
  unsigned int *v12; // r7@15
  unsigned int v13; // r0@17
  int v14; // r0@22
  unsigned int *v15; // r0@23
  unsigned int v16; // r1@25
  int v17; // r4@28
  unsigned int *v18; // r1@29
  unsigned int v19; // r0@31
  unsigned int *v20; // r5@35
  unsigned int v21; // r0@37
  int v22; // [sp+4h] [bp-24h]@22
  int v23; // [sp+8h] [bp-20h]@22
  int v24; // [sp+Ch] [bp-1Ch]@2
  int v25; // [sp+10h] [bp-18h]@2

  v3 = a3;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( v4 )
  {
    v5 = (AttributeInstance *)(v4 + 8);
    v24 = *(_DWORD *)v3;
    v6 = *(_DWORD *)(v3 + 4);
    v25 = v6;
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
    AttributeInstance::removeModifier(v5, (const AttributeModifier **)&v24);
    v9 = v25;
    if ( v25 )
      v10 = (unsigned int *)(v25 + 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        v12 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
    v22 = *(_DWORD *)v3;
    v14 = *(_DWORD *)(v3 + 4);
    v23 = v14;
    if ( v14 )
      v15 = (unsigned int *)(v14 + 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        ++*v15;
    AttributeInstance::addModifier(v5, (const AttributeModifier **)&v22);
    v17 = v23;
    if ( v23 )
      v18 = (unsigned int *)(v23 + 4);
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
  }
}


void __fastcall BaseAttributeMap::getSyncableAttributes(BaseAttributeMap *this, int a2)
{
  BaseAttributeMap::getSyncableAttributes(this, a2);
}


int __fastcall BaseAttributeMap::getMutableInstance(BaseAttributeMap *this, const Attribute *a2)
{
  unsigned __int64 *v2; // r4@1
  char *v3; // r0@1
  int result; // r0@1

  v2 = (unsigned __int64 *)this;
  v3 = Attribute::getName(a2);
  result = std::_Hashtable<std::string,std::pair<std::string const,AttributeInstance>,std::allocator<std::pair<std::string const,AttributeInstance>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             v2,
             (int **)v3);
  if ( result )
    result += 8;
  return result;
}
