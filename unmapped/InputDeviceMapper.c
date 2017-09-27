

int __fastcall InputDeviceMapper::InputDeviceMapper(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  int result; // r0@4

  v1 = a1;
  *(_DWORD *)a1 = &off_26E892C;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 1065353216;
  v2 = a1 + 28;
  *(_DWORD *)(a1 + 32) = 0;
  v3 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 28)));
  *(_DWORD *)(v2 - 12) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v1 + 36) = 0;
    v5 = (void *)(v1 + 36);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  result = v1;
  *(_DWORD *)(v1 + 12) = v5;
  return result;
}


void __fastcall InputDeviceMapper::~InputDeviceMapper(InputDeviceMapper *this)
{
  InputDeviceMapper *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E892C;
  v2 = (void *)*((_DWORD *)this + 5);
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
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 12), 4 * (*(_QWORD *)((char *)v1 + 12) >> 32));
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  v4 = (char *)*((_DWORD *)v1 + 3);
  if ( v4 && (char *)v1 + 36 != v4 )
    operator delete(v4);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall InputDeviceMapper::getBindingMode(InputDeviceMapper *this, int a2)
{
  __int64 v2; // kr00_8@1
  int *v3; // r0@1
  int *v4; // r4@2
  int v5; // r7@2
  int v6; // r5@4
  bool v7; // zf@7
  int result; // r0@10

  v2 = *(_QWORD *)((char *)this + 12);
  v3 = *(int **)(v2 + 4 * ((unsigned int)a2 % HIDWORD(v2)));
  if ( !v3 )
    goto LABEL_11;
  v4 = (int *)*v3;
  v5 = *(_DWORD *)(*v3 + 4);
  while ( v5 != a2 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      v5 = *(_DWORD *)(v6 + 4);
      v3 = (int *)v2;
      v4 = *(int **)v2;
      if ( *(_DWORD *)(v6 + 4) % HIDWORD(v2) == (unsigned int)a2 % HIDWORD(v2) )
        continue;
    }
  }
  v7 = v3 == 0;
  if ( v3 )
    v3 = (int *)*v3;
    v7 = v3 == 0;
  if ( v7 )
LABEL_11:
    result = 0;
  else
    result = v3[2];
  return result;
}


_DWORD *__fastcall InputDeviceMapper::setBindingMode(int a1, int a2, int a3)
{
  int v3; // r4@1
  _DWORD *result; // r0@1
  int v5; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  v5 = a3;
  result = (_DWORD *)std::__detail::_Map_base<int,std::pair<int const,InputBindingMode>,std::allocator<std::pair<int const,InputBindingMode>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                       (unsigned __int64 *)(a1 + 12),
                       (unsigned int *)&v5);
  *result = v3;
  return result;
}


int __fastcall InputDeviceMapper::setWindowSize(int result, __int64 a2)
{
  *(_QWORD *)(result + 4) = a2;
  return result;
}


int __fastcall InputDeviceMapper::getCursorPos(InputDeviceMapper *this, float *a2, float *a3)
{
  int result; // r0@1

  result = 0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)a3 = 0;
  return result;
}


InputDeviceMapper *__fastcall InputDeviceMapper::~InputDeviceMapper(InputDeviceMapper *this)
{
  InputDeviceMapper *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E892C;
  v2 = (void *)*((_DWORD *)this + 5);
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
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 12), 4 * (*(_QWORD *)((char *)v1 + 12) >> 32));
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  v4 = (char *)*((_DWORD *)v1 + 3);
  if ( v4 && (char *)v1 + 36 != v4 )
    operator delete(v4);
  return v1;
}
