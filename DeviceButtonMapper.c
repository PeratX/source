

signed int __fastcall DeviceButtonMapper::tick(DeviceButtons *a1, int a2)
{
  DeviceButtons *v2; // r11@1
  signed int v3; // r10@1
  __int64 v4; // kr00_8@2
  unsigned int v5; // r4@2
  DeviceButtons *v6; // r0@2
  DeviceButtons *v7; // r9@3
  DeviceButtons *v8; // r6@3
  DeviceButtons *v9; // r8@5
  bool v10; // zf@8
  char v11; // r2@12
  int v13; // [sp+10h] [bp-30h]@1
  DeviceButtons *v14; // [sp+14h] [bp-2Ch]@2
  int v15; // [sp+18h] [bp-28h]@12

  v13 = a2;
  v2 = a1;
  v3 = 0;
  if ( DeviceButtons::next(a1) == 1 )
  {
    do
    {
      DeviceButtons::getNextEvent((DeviceButtons *)&v14);
      v4 = *((_QWORD *)v2 + 5);
      v5 = (unsigned int)v14 % (unsigned int)(*((_QWORD *)v2 + 5) >> 32);
      v6 = *(DeviceButtons **)(v4 + 4 * v5);
      if ( v6 )
      {
        v7 = *(DeviceButtons **)v6;
        v8 = *(DeviceButtons **)(*(_DWORD *)v6 + 4);
        while ( v14 != v8 )
        {
          v9 = *(DeviceButtons **)v7;
          if ( *(_DWORD *)v7 )
          {
            v8 = (DeviceButtons *)*((_DWORD *)v9 + 1);
            v6 = v7;
            v7 = *(DeviceButtons **)v7;
            if ( *((_DWORD *)v9 + 1) % HIDWORD(v4) == v5 )
              continue;
          }
          goto LABEL_16;
        }
        v10 = v6 == 0;
        if ( v6 )
          v5 = *(_DWORD *)v6;
          v10 = *(_DWORD *)v6 == 0;
        if ( !v10 )
          v6 = *(DeviceButtons **)(v5 + 4);
          if ( v6 == v14 )
            do
            {
              v11 = v15;
              if ( v15 != 1 )
                v11 = 0;
              v6 = (DeviceButtons *)InputEventQueue::enqueueButton(
                                      v13,
                                      *(_WORD *)(v5 + 8),
                                      v11,
                                      0,
                                      *((_DWORD *)v2 + 20),
                                      0);
              v5 = *(_DWORD *)v5;
              if ( !v5 )
                break;
              v6 = v14;
            }
            while ( *(DeviceButtons **)(v5 + 4) == v14 );
      }
LABEL_16:
      ;
    }
    while ( DeviceButtons::next(v6) );
    v3 = 1;
  }
  return v3;
}


int __fastcall DeviceButtonMapper::setMapping(DeviceButtonMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  DeviceButtonMapper *v6; // r5@1
  int result; // r0@1
  unsigned __int64 *v8; // r8@1
  void *v9; // r0@2
  void *v10; // r6@3
  int v11; // r6@4
  int v12; // r10@4
  int v13; // r5@5
  unsigned __int16 v14; // r7@6
  unsigned int v15; // r4@6
  _DWORD *v16; // r0@6

  v6 = this;
  result = a6;
  v8 = (unsigned __int64 *)a4;
  if ( *((_DWORD *)v6 + 20) == a6 )
  {
    v9 = (void *)*((_DWORD *)v6 + 12);
    if ( v9 )
    {
      do
      {
        v10 = *(void **)v9;
        operator delete(v9);
        v9 = v10;
      }
      while ( v10 );
    }
    result = _aeabi_memclr4(*((_QWORD *)v6 + 5), 4 * (*((_QWORD *)v6 + 5) >> 32));
    *((_DWORD *)v6 + 12) = 0;
    *((_DWORD *)v6 + 13) = 0;
    v12 = *((_QWORD *)a5 + 36) >> 32;
    v11 = *((_QWORD *)a5 + 36);
    if ( v11 != v12 )
      v13 = (int)v6 + 40;
        v14 = NameRegistry::getNameId(v8, (int **)v11);
        v15 = *(_DWORD *)(v11 + 4);
        v16 = operator new(0xCu);
        *v16 = 0;
        v16[1] = v15;
        v16[2] = v14;
        result = std::_Hashtable<int,std::pair<int const,short>,std::allocator<std::pair<int const,short>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
                   v13,
                   0,
                   v15,
                   (int)v16);
        v11 += 8;
      while ( v11 != v12 );
  }
  return result;
}


InputDeviceMapper *__fastcall DeviceButtonMapper::DeviceButtonMapper(InputDeviceMapper *a1)
{
  InputDeviceMapper *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3

  v1 = a1;
  InputDeviceMapper::InputDeviceMapper(a1);
  HIDWORD(v2) = 10;
  *(_DWORD *)v1 = &off_26E8860;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 1065353216;
  LODWORD(v2) = (char *)v1 + 56;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *((_DWORD *)v1 + 11) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 16) = 0;
    v5 = (char *)v1 + 64;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *((_DWORD *)v1 + 10) = v5;
  *((_DWORD *)v1 + 20) = 0;
  return v1;
}


int __fastcall DeviceButtonMapper::getInputMode(DeviceButtonMapper *this)
{
  return 0;
}


void __fastcall DeviceButtonMapper::~DeviceButtonMapper(DeviceButtonMapper *this)
{
  DeviceButtonMapper *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E8860;
  v2 = (void *)*((_DWORD *)this + 12);
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
  _aeabi_memclr4(*((_QWORD *)v1 + 5), 4 * (*((_QWORD *)v1 + 5) >> 32));
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  v4 = (char *)*((_DWORD *)v1 + 10);
  if ( v4 && (char *)v1 + 64 != v4 )
    operator delete(v4);
  InputDeviceMapper::~InputDeviceMapper(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned int *__fastcall DeviceButtonMapper::handleButtonEvent(int a1, int a2, unsigned int *a3)
{
  unsigned int *v3; // r9@1
  int v4; // r10@1
  __int64 v5; // kr00_8@1
  unsigned int v6; // r11@1
  unsigned int v7; // r4@1
  unsigned int *result; // r0@1
  unsigned int *v9; // r8@2
  unsigned int v10; // r6@2
  unsigned int *v11; // r7@4
  bool v12; // zf@7
  unsigned int v13; // r2@11
  int v14; // [sp+10h] [bp-28h]@1

  v3 = a3;
  v4 = a1;
  v14 = a2;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *a3;
  v7 = *a3 % (unsigned int)(*(_QWORD *)(a1 + 40) >> 32);
  result = *(unsigned int **)(v5 + 4 * v7);
  if ( result )
  {
    v9 = (unsigned int *)*result;
    v10 = *(_DWORD *)(*result + 4);
    while ( v6 != v10 )
    {
      v11 = (unsigned int *)*v9;
      if ( *v9 )
      {
        v10 = v11[1];
        result = v9;
        v9 = (unsigned int *)*v9;
        if ( v11[1] % HIDWORD(v5) == v7 )
          continue;
      }
      return result;
    }
    v12 = result == 0;
    if ( result )
      v7 = *result;
      v12 = *result == 0;
    if ( !v12 )
      result = *(unsigned int **)(v7 + 4);
      if ( result == (unsigned int *)v6 )
        do
        {
          v13 = v3[1];
          if ( v13 != 1 )
            LOBYTE(v13) = 0;
          result = (unsigned int *)InputEventQueue::enqueueButton(
                                     v14,
                                     *(_WORD *)(v7 + 8),
                                     v13,
                                     0,
                                     *(_DWORD *)(v4 + 80),
                                     0);
          v7 = *(_DWORD *)v7;
          if ( !v7 )
            break;
          result = (unsigned int *)*v3;
        }
        while ( *(_DWORD *)(v7 + 4) == *v3 );
  }
  return result;
}


int __fastcall DeviceButtonMapper::changeControllerId(int result, int a2, int a3)
{
  *(_DWORD *)(result + 80) = a3;
  return result;
}


void __fastcall DeviceButtonMapper::DeviceButtonMapper(DeviceButtonMapper *this)
{
  DeviceButtonMapper::DeviceButtonMapper(this);
}


InputDeviceMapper *__fastcall DeviceButtonMapper::~DeviceButtonMapper(DeviceButtonMapper *this)
{
  DeviceButtonMapper *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E8860;
  v2 = (void *)*((_DWORD *)this + 12);
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
  _aeabi_memclr4(*((_QWORD *)v1 + 5), 4 * (*((_QWORD *)v1 + 5) >> 32));
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  v4 = (char *)*((_DWORD *)v1 + 10);
  if ( v4 && (char *)v1 + 64 != v4 )
    operator delete(v4);
  return j_j_j__ZN17InputDeviceMapperD2Ev(v1);
}


void __fastcall DeviceButtonMapper::~DeviceButtonMapper(DeviceButtonMapper *this)
{
  DeviceButtonMapper::~DeviceButtonMapper(this);
}
