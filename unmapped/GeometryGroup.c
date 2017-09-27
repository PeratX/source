

void __fastcall GeometryGroup::_getParent(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r2@2
  unsigned int v6; // r3@2
  void *v7; // r0@5
  char *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  int v13; // [sp+4h] [bp-2Ch]@3
  char *v14; // [sp+8h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  v4 = sub_119D2FC(a2, ":", 0xFFFFFFFF, 1u);
  sub_119C8C4((void **)&v14, v2, 0, v4);
  if ( v4 == -1 )
  {
    sub_119C854(&v13, (int *)&Util::EMPTY_STRING);
  }
  else
    v5 = v4 + 1;
    v6 = *(_DWORD *)(*v2 - 12);
    if ( v6 < v4 + 1 )
      sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v5, v6);
    sub_119C8C4((void **)&v13, v2, v5, 0xFFFFFFFF);
  *(_DWORD *)v3 = v14;
  v14 = (char *)&unk_28898CC;
  sub_119C854((int *)(v3 + 4), &v13);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


GeometryGroup *__fastcall GeometryGroup::~GeometryGroup(GeometryGroup *this)
{
  GeometryGroup *v1; // r4@1
  int i; // r0@1
  int v3; // r2@2
  void *v4; // r0@3
  void *v5; // r5@4
  char *v6; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26D95A0;
  for ( i = *((_DWORD *)this + 3); i; i = *(_DWORD *)i )
  {
    v3 = *(_DWORD *)(i + 4);
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
  }
  std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>>>::_M_erase(
    (int)v1 + 36,
    *((_DWORD *)v1 + 11));
  v4 = (void *)*((_DWORD *)v1 + 3);
  if ( v4 )
    do
    {
      v5 = *(void **)v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v6 = (char *)*((_DWORD *)v1 + 1);
  if ( v6 && (char *)v1 + 28 != v6 )
    operator delete(v6);
  return v1;
}


void __fastcall GeometryGroup::_getParent(int a1, int *a2)
{
  GeometryGroup::_getParent(a1, a2);
}


int __fastcall GeometryGroup::tryGetGeometry(int a1, int a2, const void **a3)
{
  int v3; // r11@1
  __int64 v4; // r4@1
  const void **v5; // r10@1
  int v6; // r0@2
  int v7; // r5@3
  int v8; // r0@3
  int v9; // r7@3
  const void *v10; // r4@4
  int v11; // r8@4
  size_t v12; // r6@4
  _DWORD *v13; // r0@6
  size_t v14; // r9@6
  size_t v15; // r2@6
  int v16; // r0@8
  _DWORD *v17; // r1@15
  unsigned int v18; // r4@15
  unsigned int v19; // r6@15
  size_t v20; // r2@15
  int v21; // r0@17
  int result; // r0@24
  __int64 mutex; // [sp+4h] [bp-2Ch]@3

  HIDWORD(v4) = a1;
  v3 = a2;
  LODWORD(v4) = a2 + 32;
  v5 = a3;
  if ( &pthread_create )
  {
    v6 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 32));
    if ( v6 )
      sub_119CCFC(v6);
  }
  mutex = v4;
  v7 = v3 + 40;
  v8 = *(_DWORD *)(v3 + 44);
  v9 = v3 + 40;
  if ( v8 )
    v10 = *v5;
    v11 = v3 + 40;
    v12 = *((_DWORD *)*v5 - 3);
    do
    {
      v9 = v8;
      while ( 1 )
      {
        v13 = *(_DWORD **)(v9 + 16);
        v14 = *(v13 - 3);
        v15 = *(v13 - 3);
        if ( v14 > v12 )
          v15 = v12;
        v16 = memcmp(v13, v10, v15);
        if ( !v16 )
          v16 = v14 - v12;
        if ( v16 >= 0 )
          break;
        v9 = *(_DWORD *)(v9 + 12);
        if ( !v9 )
        {
          v9 = v11;
          goto LABEL_14;
        }
      }
      v8 = *(_DWORD *)(v9 + 8);
      v11 = v9;
    }
    while ( v8 );
LABEL_14:
  if ( v9 == v7 )
    goto LABEL_30;
  v17 = *(_DWORD **)(v9 + 16);
  v18 = *((_DWORD *)*v5 - 3);
  v19 = *(v17 - 3);
  v20 = *((_DWORD *)*v5 - 3);
  if ( v18 > v19 )
    v20 = *(v17 - 3);
  v21 = memcmp(*v5, v17, v20);
  if ( !v21 )
    v21 = v18 - v19;
  if ( v21 < 0 )
    v9 = v3 + 40;
LABEL_30:
    GeometryPtr::GeometryPtr((GeometryPtr *)HIDWORD(mutex), (int)&GeometryPtr::NONE);
  else
    GeometryPtr::GeometryPtr((GeometryPtr *)HIDWORD(mutex), (GeometryGroup *)v3, *(_DWORD *)(v9 + 20));
  result = mutex;
    result = pthread_mutex_unlock((pthread_mutex_t *)mutex);
  return result;
}


GeometryPtr *__fastcall GeometryGroup::_removeRef(GeometryGroup *this, GeometryPtr *a2)
{
  GeometryGroup *v2; // r9@1
  GeometryPtr *v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  GeometryPtr *result; // r0@1
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

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 2);
  v5 = (unsigned int)a2;
  v6 = *((_DWORD *)v2 + 1);
  v20 = *((_DWORD *)v2 + 1);
  v8 = (unsigned int)a2 % v4;
  result = (GeometryPtr *)(v5 / v4);
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (GeometryPtr *)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = (GeometryPtr *)(v13 / v4);
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
          result = (GeometryPtr *)(*((_DWORD *)v2 + 4) - 1);
          *((_DWORD *)v2 + 4) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *((_DWORD *)v2 + 1);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)((char *)v2 + 12) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


int (**__fastcall GeometryGroup::unloadGeometries(GeometryGroup *this))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  GeometryGroup *v1; // r5@1
  pthread_mutex_t *v2; // r4@1
  int v3; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@3

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 32);
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      sub_119CCFC(v3);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>>>::_M_erase(
    (int)v1 + 36,
    *((_DWORD *)v1 + 11));
  *((_DWORD *)v1 + 12) = (char *)v1 + 40;
  *((_DWORD *)v1 + 11) = 0;
  *(_QWORD *)((char *)v1 + 52) = (unsigned int)v1 + 40;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v2);
  return result;
}


_DWORD *__fastcall GeometryGroup::_addRef(GeometryGroup *this, GeometryPtr *a2)
{
  GeometryPtr *v2; // r4@1
  char *v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r9@1
  _DWORD *result; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r5@4
  bool v9; // zf@7
  _DWORD *v10; // r0@11

  v2 = a2;
  v3 = (char *)this + 4;
  v4 = *((_DWORD *)this + 2);
  v5 = (unsigned int)a2 % *((_DWORD *)this + 2);
  result = *(_DWORD **)(*((_DWORD *)this + 1) + 4 * v5);
  if ( !result )
    goto LABEL_11;
  v7 = (_DWORD *)*result;
  while ( (GeometryPtr *)v7[1] != a2 )
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
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIP11GeometryPtrS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
                         (int)v3,
                         v5,
                         (unsigned int)v2,
                         (int)v10);
  return result;
}


BackgroundTask *__fastcall GeometryGroup::loadModels(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r4@1
  unsigned __int64 v4; // kr00_8@2
  int v5; // r8@2
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  int v8; // r5@7
  _DWORD *v9; // r0@7
  int v10; // r3@7
  BackgroundTask *result; // r0@9
  _DWORD *v12; // r0@11
  __int64 v13; // r1@11
  _DWORD *v14; // r0@11
  __int64 v15; // r1@11
  int v16; // [sp+0h] [bp-50h]@0
  void *v17; // [sp+4h] [bp-4Ch]@0
  int v18; // [sp+8h] [bp-48h]@7
  int v19; // [sp+Ch] [bp-44h]@7
  void (*v20)(void); // [sp+10h] [bp-40h]@7
  _DWORD *v21; // [sp+18h] [bp-38h]@7
  int v22; // [sp+1Ch] [bp-34h]@7
  int (*v23)(void); // [sp+20h] [bp-30h]@7
  int v24; // [sp+24h] [bp-2Ch]@7
  int v25; // [sp+28h] [bp-28h]@7
  __int64 v26; // [sp+30h] [bp-20h]@11

  v3 = a1;
  *(_BYTE *)(a1 + 72) = 0;
  if ( a3 == 1 )
  {
    v4 = *a2;
    v5 = *(_DWORD *)(a1 + 64);
    if ( *a2 >> 32 )
    {
      v6 = (unsigned int *)(HIDWORD(v4) + 4);
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
    v12 = operator new(0x10u);
    LODWORD(v13) = sub_E2C3E4;
    *v12 = v3;
    v12[1] = v3;
    HIDWORD(v13) = sub_E2C388;
    *((_QWORD *)v12 + 1) = v4;
    v25 = (int)v12;
    v26 = v13;
    v14 = operator new(4u);
    LODWORD(v15) = sub_E2C4DC;
    *v14 = v3;
    HIDWORD(v15) = sub_E2C4D0;
    v21 = v14;
    *(_QWORD *)&v23 = v15;
    result = ResourceLoadManager::loadResource(v5, 8, 8, (int)&v25, (int)&v21);
    if ( v23 )
      result = (BackgroundTask *)v23();
    if ( (_DWORD)v26 )
      result = (BackgroundTask *)((int (*)(void))v26)();
  }
  else
    v8 = *(_DWORD *)a2;
    v9 = operator new(4u);
    *v9 = v3;
    InheritanceTree<GeometryGroup::ModelParent>::visitBFS(
      v8,
      (int)&v18,
      (int)sub_E2BFA4,
      v10,
      v16,
      v17,
      (int)v9,
      v19,
      (int)sub_E2C350,
      (int)v21,
      v22,
      (int)v23,
      v24,
      v25);
    if ( v20 )
      v20();
    result = (BackgroundTask *)1;
    *(_BYTE *)(v3 + 72) = 1;
  return result;
}


Json::Value *__fastcall GeometryGroup::loadModelPackFiles(GeometryGroup *this)
{
  GeometryGroup *v1; // r8@1
  int v2; // r4@1
  char *v3; // r5@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  void *v6; // r0@9
  int v7; // r5@13
  unsigned int *v8; // r1@14
  unsigned int v9; // r0@16
  unsigned int *v10; // r4@20
  unsigned int v11; // r0@22
  PackReport *v12; // r0@27
  PackReport *v13; // r4@27
  char *v14; // r0@32
  Json::Value *result; // r0@33
  int v16; // r4@33
  unsigned int *v17; // r1@34
  unsigned int *v18; // r5@40
  unsigned int *v19; // r2@48
  signed int v20; // r1@50
  unsigned __int64 *v21; // [sp+0h] [bp-E0h]@13
  int v22; // [sp+4h] [bp-DCh]@13
  int v23; // [sp+Ch] [bp-D4h]@3
  void *ptr; // [sp+10h] [bp-D0h]@1
  char *v25; // [sp+14h] [bp-CCh]@1
  char *v26; // [sp+1Ch] [bp-C4h]@1
  char v27; // [sp+20h] [bp-C0h]@1
  char v28; // [sp+90h] [bp-50h]@1
  char v29; // [sp+A0h] [bp-40h]@1
  unsigned __int64 *v30; // [sp+B0h] [bp-30h]@1
  int v31; // [sp+B4h] [bp-2Ch]@13

  v1 = this;
  j__ZNSt12__shared_ptrI15InheritanceTreeIN13GeometryGroup11ModelParentEELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS3_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v30);
  v2 = *(_DWORD *)(*((_DWORD *)v1 + 15) + 64);
  Json::Value::Value(&v29, 0);
  Json::Value::Value(&v28, 0);
  Json::Reader::Reader((Json::Reader *)&v27);
  v26 = (char *)&unk_28898CC;
  std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)&ptr, (unsigned __int64 *)(v2 + 4));
  v3 = v25;
  while ( v3 != ptr )
  {
    sub_119C884((void **)&v23, "models/mobs.json");
    v3 -= 120;
    PackInstance::getResource((int)v3, (int)&v23, &v26);
    v6 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v23 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    GeometryGroup::buildInheritanceTree((int)v6, (int *)&v26, v30);
  }
  v7 = v31;
  v21 = v30;
  v22 = v31;
  v30 = 0;
  v31 = 0;
  GeometryGroup::loadModels((int)v1, (unsigned __int64 *)&v21, 1);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v13 = (PackReport *)v25;
  v12 = (PackReport *)ptr;
  if ( ptr != v25 )
    do
      v12 = (PackReport *)((char *)PackReport::~PackReport(v12) + 120);
    while ( v13 != v12 );
    v12 = (PackReport *)ptr;
  if ( v12 )
    operator delete((void *)v12);
  v14 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v26 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  Json::Reader::~Reader((Json::Reader *)&v27);
  Json::Value::~Value((Json::Value *)&v28);
  result = Json::Value::~Value((Json::Value *)&v29);
  v16 = v31;
  if ( v31 )
    v17 = (unsigned int *)(v31 + 4);
        result = (Json::Value *)__ldrex(v17);
      while ( __strex((unsigned int)result - 1, v17) );
      result = (Json::Value *)(*v17)--;
    if ( result == (Json::Value *)1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = (Json::Value *)__ldrex(v18);
        while ( __strex((unsigned int)result - 1, v18) );
        result = (Json::Value *)(*v18)--;
      if ( result == (Json::Value *)1 )
        result = (Json::Value *)(*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall GeometryGroup::GeometryGroup(int a1, int a2, int a3)
{
  GeometryGroup::GeometryGroup(a1, a2, a3);
}


void __fastcall GeometryGroup::~GeometryGroup(GeometryGroup *this)
{
  GeometryGroup *v1; // r4@1
  int i; // r0@1
  int v3; // r2@2
  void *v4; // r0@3
  void *v5; // r5@4
  char *v6; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26D95A0;
  for ( i = *((_DWORD *)this + 3); i; i = *(_DWORD *)i )
  {
    v3 = *(_DWORD *)(i + 4);
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
  }
  std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>>>::_M_erase(
    (int)v1 + 36,
    *((_DWORD *)v1 + 11));
  v4 = (void *)*((_DWORD *)v1 + 3);
  if ( v4 )
    do
    {
      v5 = *(void **)v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v6 = (char *)*((_DWORD *)v1 + 1);
  if ( v6 && (char *)v1 + 28 != v6 )
    operator delete(v6);
  j_j_j__ZdlPv_4((void *)v1);
}


Json::Value *__fastcall GeometryGroup::buildInheritanceTree(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int *v4; // r5@1
  unsigned __int64 *v5; // r6@1
  Json::Value *v6; // r7@1
  Json::Value *v7; // r4@1
  int *v8; // r9@1
  const char *v9; // r0@3
  unsigned __int64 *v10; // r7@3
  const Json::Value *v11; // r0@3
  int v12; // r10@3
  int v13; // r8@3
  __int64 v14; // r0@3
  void *v15; // r4@5
  char *v16; // r9@5
  unsigned int v17; // r2@5
  unsigned int v18; // r1@7
  unsigned int v19; // r7@7
  char *v20; // r8@14
  int v21; // r8@16
  void *v22; // r0@19
  void *v23; // r0@20
  void *v24; // r0@21
  void *v25; // r0@22
  unsigned int *v26; // r2@24
  signed int v27; // r1@26
  unsigned int *v28; // r2@28
  signed int v29; // r1@30
  unsigned int *v30; // r2@32
  signed int v31; // r1@34
  unsigned int *v32; // r2@36
  signed int v33; // r1@38
  unsigned __int64 *v35; // [sp+18h] [bp-E8h]@1
  int v36; // [sp+20h] [bp-E0h]@3
  int v37; // [sp+28h] [bp-D8h]@1
  int v38; // [sp+38h] [bp-C8h]@3
  int v39; // [sp+3Ch] [bp-C4h]@1
  int v40; // [sp+44h] [bp-BCh]@3
  char v41; // [sp+48h] [bp-B8h]@1
  char v42; // [sp+50h] [bp-B0h]@1
  char v43; // [sp+58h] [bp-A8h]@1
  char v44; // [sp+C8h] [bp-38h]@1

  v3 = a3;
  v4 = a2;
  v35 = a3;
  Json::Value::Value(&v44, 0);
  Json::Reader::Reader((Json::Reader *)&v43);
  v5 = v3;
  Json::Reader::parse((int)&v43, v4, (int)&v44, 1);
  Json::Value::begin((Json::Value *)&v42, (int)&v44);
  v6 = (Json::Value *)&v41;
  v7 = (Json::Value *)&v37;
  v8 = &v39;
  while ( 1 )
  {
    Json::Value::end(v6, (int)&v44);
    if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v42, v6) == 1 )
      break;
    v9 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v42);
    sub_119C884((void **)&v40, v9);
    v10 = v5;
    GeometryGroup::_getParent((int)&v38, &v40);
    sub_119C854(&v36, v8);
    v11 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v42);
    Json::Value::Value(v7, v11);
    v12 = InheritanceTree<GeometryGroup::ModelParent>::_node(v5, (int **)v8);
    v13 = InheritanceTree<GeometryGroup::ModelParent>::_node(v5, (int **)&v38);
    EntityInteraction::setInteractText((int *)(v13 + 8), &v36);
    Json::Value::operator=(v13 + 16, v7);
    v14 = *(_QWORD *)(v12 + 36);
    if ( (_DWORD)v14 == HIDWORD(v14) )
    {
      v15 = *(void **)(v12 + 32);
      v16 = 0;
      v17 = ((signed int)v14 - (signed int)v15) >> 2;
      if ( !v17 )
        v17 = 1;
      HIDWORD(v14) = v17 + (((signed int)v14 - (signed int)v15) >> 2);
      v19 = v17 + (((signed int)v14 - (signed int)v15) >> 2);
      if ( 0 != HIDWORD(v14) >> 30 )
        v19 = 0x3FFFFFFF;
      if ( v18 < v17 )
      if ( v19 )
      {
        if ( v19 >= 0x40000000 )
          sub_119C874();
        v16 = (char *)operator new(4 * v19);
        LODWORD(v14) = *(_QWORD *)(v12 + 32) >> 32;
        v15 = (void *)*(_QWORD *)(v12 + 32);
      }
      *(_DWORD *)&v16[v14 - (_DWORD)v15] = v13;
      v20 = &v16[v14 - (_DWORD)v15];
      if ( ((signed int)v14 - (signed int)v15) >> 2 )
        _aeabi_memmove4(v16, v15);
      v21 = (int)(v20 + 4);
      if ( v15 )
        operator delete(v15);
      *(_DWORD *)(v12 + 32) = v16;
      *(_DWORD *)(v12 + 36) = v21;
      *(_DWORD *)(v12 + 40) = &v16[4 * v19];
      v10 = v35;
      v8 = &v39;
      v7 = (Json::Value *)&v37;
    }
    else
      *(_DWORD *)v14 = v13;
      *(_DWORD *)(v12 + 36) += 4;
    Json::Value::~Value(v7);
    v22 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v22);
    v23 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v39 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v38 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    v25 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v40 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    v5 = v10;
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v42);
    v6 = (Json::Value *)&v41;
  }
  Json::Reader::~Reader((Json::Reader *)&v43);
  return Json::Value::~Value((Json::Value *)&v44);
}


int (**__fastcall GeometryGroup::getGeometry(GeometryPtr *a1, int a2, const void **a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  GeometryPtr *v3; // r6@1
  GeometryGroup *v4; // r5@1
  pthread_mutex_t *v5; // r4@1
  const void **v6; // r7@1
  int v7; // r0@2
  int *v8; // r0@3
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@3

  v3 = a1;
  v4 = (GeometryGroup *)a2;
  v5 = (pthread_mutex_t *)(a2 + 32);
  v6 = a3;
  if ( &pthread_create )
  {
    v7 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 32));
    if ( v7 )
      sub_119CCFC(v7);
  }
  v8 = (int *)std::map<std::string,std::unique_ptr<Geometry,std::default_delete<Geometry>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Geometry,std::default_delete<Geometry>>>>>::operator[](
                (int)v4 + 36,
                v6);
  GeometryPtr::GeometryPtr(v3, v4, *v8);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v5);
  return result;
}


void __fastcall GeometryGroup::~GeometryGroup(GeometryGroup *this)
{
  GeometryGroup::~GeometryGroup(this);
}


int __fastcall GeometryGroup::GeometryGroup(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r8@1
  int v6; // r7@1
  unsigned int v7; // r0@1
  int v8; // r5@3
  void *v9; // r7@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_26D95A0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 1065353216;
  v6 = a1 + 20;
  *(_DWORD *)(a1 + 24) = 0;
  v7 = sub_119C844(COERCE_DOUBLE(__PAIR__(10, a1 + 20)));
  *(_DWORD *)(v6 - 12) = v7;
  if ( v7 == 1 )
  {
    *(_DWORD *)(v3 + 28) = 0;
    v9 = (void *)(v3 + 28);
  }
  else
    if ( v7 >= 0x40000000 )
      sub_119C874();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 4) = v9;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 48) = v3 + 40;
  *(_DWORD *)(v3 + 52) = v3 + 40;
  *(_DWORD *)(v3 + 60) = v4;
  *(_DWORD *)(v3 + 64) = v5;
  *(_DWORD *)(v3 + 68) = 0;
  *(_BYTE *)(v3 + 72) = 0;
  return v3;
}
