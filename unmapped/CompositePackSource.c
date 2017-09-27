

void __fastcall CompositePackSource::load(int a1, int a2, int a3, int a4)
{
  CompositePackSource::load(a1, a2, a3, a4);
}


unsigned __int64 *__fastcall CompositePackSource::forEachPackConst(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r4@1
  int i; // r7@1
  int v5; // r6@2
  void (__fastcall *v6)(int, _DWORD **); // r8@2
  _DWORD *v7; // r0@2
  _DWORD *v9; // [sp+0h] [bp-40h]@2
  int (__fastcall *v10)(void **, _QWORD **, int); // [sp+8h] [bp-38h]@2
  int (__fastcall *v11)(_QWORD ***, Pack *); // [sp+Ch] [bp-34h]@2
  unsigned __int64 v12; // [sp+10h] [bp-30h]@1
  int v13; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v12 = 0LL;
  v13 = 0;
  v3 = *(_QWORD *)(a1 + 4) >> 32;
  for ( i = *(_QWORD *)(a1 + 4); v3 != i; i += 4 )
  {
    v5 = *(_DWORD *)i;
    v6 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)i + 8);
    v10 = 0;
    v7 = operator new(8u);
    *v7 = &v12;
    v7[1] = v2;
    v9 = v7;
    v10 = sub_15833BA;
    v11 = sub_15830F0;
    v6(v5, &v9);
    if ( v10 )
      v10((void **)&v9, (_QWORD **)&v9, 3);
  }
  return std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector(&v12);
}


void __fastcall CompositePackSource::~CompositePackSource(CompositePackSource *this)
{
  CompositePackSource::~CompositePackSource(this);
}


CompositePackSource *__fastcall CompositePackSource::~CompositePackSource(CompositePackSource *this)
{
  CompositePackSource *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26EAC14;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    operator delete(v2);
  return v1;
}


int __fastcall CompositePackSource::clear(int result)
{
  *(_DWORD *)(result + 8) = *(_DWORD *)(result + 4);
  return result;
}


int __fastcall CompositePackSource::CompositePackSource(int result)
{
  *(_QWORD *)result = (unsigned int)&off_26EAC14;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


char *__fastcall CompositePackSource::addPackSource(CompositePackSource *this, PackSource *a2)
{
  CompositePackSource *v2; // r4@1
  PackSource *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 1);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 1);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 4) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 4);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)((char *)v2 + 4) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 3) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 2) + 4);
    *((_DWORD *)v2 + 2) = result;
  return result;
}


int __fastcall CompositePackSource::CompositePackSource(int result, int a2)
{
  int v2; // r2@1
  int v3; // r2@1

  *(_QWORD *)result = (unsigned int)&off_26EAC14;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 4) = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  v2 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v2;
  v3 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v3;
  return result;
}


void __fastcall CompositePackSource::load(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r8@1
  unsigned int v8; // r0@1
  int v9; // r6@3
  void *v10; // r5@3
  int i; // r6@4
  int v12; // r11@4
  int v13; // r5@5
  int v14; // r10@5
  int *v15; // r0@6
  void *v16; // r5@7
  void *v17; // r8@8
  void *ptr; // [sp+Ch] [bp-44h]@5
  int v19; // [sp+10h] [bp-40h]@9
  void *v20; // [sp+14h] [bp-3Ch]@5
  int v21; // [sp+18h] [bp-38h]@9
  int v22; // [sp+24h] [bp-2Ch]@10
  char v23; // [sp+28h] [bp-28h]@8

  v4 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v5 = a2;
  *(_DWORD *)(a1 + 16) = 1065353216;
  v6 = a1 + 16;
  v7 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  v8 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 16)));
  *(_DWORD *)(v6 - 12) = v8;
  if ( v8 == 1 )
  {
    *(_DWORD *)(v4 + 24) = 0;
    v10 = (void *)(v4 + 24);
  }
  else
    if ( v8 >= 0x40000000 )
      sub_21E57F4();
    v9 = 4 * v8;
    v10 = operator new(4 * v8);
    _aeabi_memclr4(v10, v9);
  *(_DWORD *)v4 = v10;
  v12 = *(_QWORD *)(v5 + 4) >> 32;
  for ( i = *(_QWORD *)(v5 + 4); i != v12; i += 4 )
    (*(void (__fastcall **)(void **))(**(_DWORD **)i + 20))(&ptr);
    v13 = (int)v20;
    v14 = v7;
    if ( v20 )
    {
      do
      {
        v15 = (int *)std::__detail::_Map_base<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       v4,
                       v13 + 8);
        PackReport::operator=(v15, (int *)(v13 + 56));
        v13 = *(_DWORD *)v13;
      }
      while ( v13 );
      v16 = v20;
      if ( v20 )
        do
        {
          v17 = *(void **)v16;
          __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
            (int)&v23,
            (int)v16 + 8);
          operator delete(v16);
          v16 = v17;
        }
        while ( v17 );
    }
    _aeabi_memclr4(ptr, 4 * v19);
    v20 = 0;
    v21 = 0;
    if ( ptr )
      if ( &v22 != ptr )
        operator delete(ptr);
    v7 = v14;
}


void __fastcall CompositePackSource::~CompositePackSource(CompositePackSource *this)
{
  CompositePackSource *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26EAC14;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned __int64 *__fastcall CompositePackSource::forEachPack(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r4@1
  int i; // r7@1
  int v5; // r6@2
  void (__fastcall *v6)(int, _DWORD **); // r8@2
  _DWORD *v7; // r0@2
  _DWORD *v9; // [sp+0h] [bp-40h]@2
  int (__fastcall *v10)(void **, _QWORD **, int); // [sp+8h] [bp-38h]@2
  int (__fastcall *v11)(_QWORD ***, Pack *); // [sp+Ch] [bp-34h]@2
  unsigned __int64 v12; // [sp+10h] [bp-30h]@1
  int v13; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v12 = 0LL;
  v13 = 0;
  v3 = *(_QWORD *)(a1 + 4) >> 32;
  for ( i = *(_QWORD *)(a1 + 4); v3 != i; i += 4 )
  {
    v5 = *(_DWORD *)i;
    v6 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)i + 12);
    v10 = 0;
    v7 = operator new(8u);
    *v7 = &v12;
    v7[1] = v2;
    v9 = v7;
    v10 = sub_15836BE;
    v11 = sub_15833F4;
    v6(v5, &v9);
    if ( v10 )
      v10((void **)&v9, (_QWORD **)&v9, 3);
  }
  return std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector(&v12);
}
