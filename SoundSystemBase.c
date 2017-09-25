

_DWORD *__fastcall SoundSystemBase::setListenerVelocity(SoundSystemBase *this, int a2, float a3, float a4, float a5)
{
  __int64 v5; // kr00_8@1
  _DWORD *result; // r0@1
  _DWORD *v9; // r5@2
  int v14; // r7@2

  v5 = *((_QWORD *)this + 1);
  _R8 = a4;
  _R7 = a3;
  result = *(_DWORD **)(v5 + 4 * ((unsigned int)a2 % HIDWORD(v5)));
  if ( result )
  {
    v9 = (_DWORD *)*result;
    __asm
    {
      VMOV            S20, R7
      VLDR            S16, [SP,#0x38+arg_0]
      VMOV            S18, R8
    }
    v14 = *(_DWORD *)(*result + 4);
    while ( v14 != a2 )
      if ( *v9 )
      {
        v14 = *(_DWORD *)(v5 + 4);
        result = v9;
        v9 = (_DWORD *)*v9;
        if ( *(_DWORD *)(v5 + 4) % HIDWORD(v5) == (unsigned int)a2 % HIDWORD(v5) )
          continue;
      }
      return result;
    if ( result )
      result = (_DWORD *)*result;
      if ( result )
        __asm
        {
          VSTRNE          S20, [R0,#0x2C]
          VSTRNE          S18, [R0,#0x30]
          VSTRNE          S16, [R0,#0x34]
        }
  }
  return result;
}


_DWORD *__fastcall SoundSystemBase::setListenerDirection(SoundSystemBase *this, int a2, const Vec3 *a3, const Vec3 *a4)
{
  __int64 v4; // kr00_8@1
  _DWORD *result; // r0@1
  _DWORD *v6; // r6@2
  int v7; // r5@2
  int v8; // r7@4
  bool v9; // zf@7

  v4 = *((_QWORD *)this + 1);
  result = *(_DWORD **)(v4 + 4 * ((unsigned int)a2 % HIDWORD(v4)));
  if ( result )
  {
    v6 = (_DWORD *)*result;
    v7 = *(_DWORD *)(*result + 4);
    while ( v7 != a2 )
    {
      v8 = *v6;
      if ( *v6 )
      {
        v7 = *(_DWORD *)(v8 + 4);
        result = v6;
        v6 = (_DWORD *)*v6;
        if ( *(_DWORD *)(v8 + 4) % HIDWORD(v4) == (unsigned int)a2 % HIDWORD(v4) )
          continue;
      }
      return result;
    }
    v9 = result == 0;
    if ( result )
      result = (_DWORD *)*result;
      v9 = result == 0;
    if ( !v9 )
      result[2] = *(_DWORD *)a3;
      result[3] = *((_DWORD *)a3 + 1);
      result[4] = *((_DWORD *)a3 + 2);
      result[5] = *(_DWORD *)a4;
      result[6] = *((_DWORD *)a4 + 1);
      result[7] = *((_DWORD *)a4 + 2);
  }
  return result;
}


signed int __fastcall SoundSystemBase::addListener(SoundSystemBase *this, int a2)
{
  char *v2; // r8@1
  unsigned int v3; // r10@1
  unsigned int v4; // r7@1
  _DWORD *v5; // r0@1
  _DWORD *v6; // r6@2
  int v7; // r4@2
  _DWORD *v8; // r5@4
  bool v9; // zf@7
  signed int result; // r0@10
  char v11; // [sp+4h] [bp-5Ch]@11
  int v12; // [sp+Ch] [bp-54h]@11
  int v13; // [sp+10h] [bp-50h]@11
  int v14; // [sp+14h] [bp-4Ch]@11
  int v15; // [sp+18h] [bp-48h]@11
  int v16; // [sp+1Ch] [bp-44h]@11
  int v17; // [sp+20h] [bp-40h]@11
  int v18; // [sp+24h] [bp-3Ch]@11
  __int64 v19; // [sp+28h] [bp-38h]@11
  int v20; // [sp+30h] [bp-30h]@11
  __int64 v21; // [sp+34h] [bp-2Ch]@11
  int v22; // [sp+3Ch] [bp-24h]@11

  v2 = (char *)this + 8;
  v3 = *((_DWORD *)this + 3);
  v4 = (unsigned int)a2 % *((_DWORD *)this + 3);
  v5 = *(_DWORD **)(*((_DWORD *)this + 2) + 4 * v4);
  if ( !v5 )
    goto LABEL_11;
  v6 = (_DWORD *)*v5;
  v7 = *(_DWORD *)(*v5 + 4);
  while ( v7 != a2 )
  {
    v8 = (_DWORD *)*v6;
    if ( *v6 )
    {
      v7 = v8[1];
      v5 = v6;
      v6 = (_DWORD *)*v6;
      if ( v8[1] % v3 == v4 )
        continue;
    }
  }
  v9 = v5 == 0;
  if ( v5 )
    v9 = *v5 == 0;
  if ( v9 )
LABEL_11:
    v12 = a2;
    v13 = Vec3::UNIT_Z;
    v14 = unk_28224DC;
    v15 = unk_28224E0;
    v16 = Vec3::UNIT_Y;
    v17 = unk_28224C4;
    v18 = unk_28224C8;
    v19 = *(_QWORD *)&Vec3::ZERO;
    v20 = dword_2822498;
    v21 = *(_QWORD *)&Vec3::ZERO;
    v22 = dword_2822498;
    std::_Hashtable<int,std::pair<int const,SoundListener>,std::allocator<std::pair<int const,SoundListener>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair&<int,SoundListener>>(
      &v11,
      (int)v2,
      (int)&v12);
    result = 1;
  else
    result = 0;
  return result;
}


void __fastcall SoundSystemBase::~SoundSystemBase(SoundSystemBase *this)
{
  SoundSystemBase *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E8774;
  v2 = (void *)*((_DWORD *)this + 4);
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
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v4 = (char *)*((_DWORD *)v1 + 2);
  if ( v4 && (char *)v1 + 32 != v4 )
    operator delete(v4);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall SoundSystemBase::isMusicChannelPlaying(SoundSystemBase *this)
{
  return 0;
}


SoundSystemBase *__fastcall SoundSystemBase::~SoundSystemBase(SoundSystemBase *this)
{
  SoundSystemBase *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E8774;
  v2 = (void *)*((_DWORD *)this + 4);
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
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v4 = (char *)*((_DWORD *)v1 + 2);
  if ( v4 && (char *)v1 + 32 != v4 )
    operator delete(v4);
  return v1;
}


signed int __fastcall SoundSystemBase::preinit(SoundSystemBase *this)
{
  return 1;
}


SoundSystemBase **__fastcall SoundSystemBase::removeListener(SoundSystemBase *this, int a2)
{
  SoundSystemBase *v2; // r8@1
  int v3; // r9@1
  unsigned int v4; // r11@1
  SoundSystemBase **result; // r0@1
  SoundSystemBase *v6; // r6@2
  int v7; // r4@2
  SoundSystemBase *v8; // r5@4
  bool v9; // zf@7
  int v10; // r10@10
  SoundSystemBase **v11; // r7@10
  SoundSystemBase *v12; // r0@10
  SoundSystemBase **v13; // r4@11
  int v14; // r1@14
  SoundSystemBase *v15; // r5@17
  int v16; // r1@18

  v2 = this;
  v4 = *((_QWORD *)this + 1) >> 32;
  v3 = *((_QWORD *)this + 1);
  result = *(SoundSystemBase ***)(v3 + 4 * (a2 % v4));
  if ( result )
  {
    v6 = *result;
    v7 = *((_DWORD *)*result + 1);
    while ( v7 != a2 )
    {
      v8 = *(SoundSystemBase **)v6;
      if ( *(_DWORD *)v6 )
      {
        v7 = *((_DWORD *)v8 + 1);
        result = (SoundSystemBase **)v6;
        v6 = *(SoundSystemBase **)v6;
        if ( *((_DWORD *)v8 + 1) % v4 == a2 % v4 )
          continue;
      }
      return result;
    }
    v9 = result == 0;
    if ( result )
      v6 = *result;
      v9 = *result == 0;
    if ( !v9 )
      v10 = *((_DWORD *)v6 + 1) % v4;
      v11 = *(SoundSystemBase ***)(v3 + 4 * v10);
      v12 = *(SoundSystemBase **)(v3 + 4 * v10);
      do
        v13 = (SoundSystemBase **)v12;
        v12 = *(SoundSystemBase **)v12;
      while ( v12 != v6 );
      if ( v11 != v13 )
        if ( *(_DWORD *)v6 )
        {
          v14 = *(_DWORD *)(*(_DWORD *)v6 + 4) % v4;
          if ( v14 != v10 )
            *(_DWORD *)(v3 + 4 * v14) = v13;
        }
        goto LABEL_23;
      v15 = *(SoundSystemBase **)v6;
        v16 = *((_DWORD *)v15 + 1) % v4;
        if ( v16 == v10 )
LABEL_23:
          *v13 = *(SoundSystemBase **)v6;
          operator delete((void *)v6);
          result = (SoundSystemBase **)(*((_DWORD *)v2 + 5) - 1);
          *((_DWORD *)v2 + 5) = result;
          return result;
        *(_DWORD *)(v3 + 4 * v16) = v11;
        v3 = *((_DWORD *)v2 + 2);
        v11 = *(SoundSystemBase ***)(v3 + 4 * v10);
      if ( (SoundSystemBase **)((char *)v2 + 16) == v11 )
        *v11 = v15;
      *(_DWORD *)(v3 + 4 * v10) = 0;
      goto LABEL_23;
  }
  return result;
}


int __fastcall SoundSystemBase::destroy(SoundSystemBase *this)
{
  SoundSystemBase *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  int result; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 4);
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
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  result = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  return result;
}


_DWORD *__fastcall SoundSystemBase::setListenerPos(SoundSystemBase *this, int a2, float a3, float a4, float a5)
{
  __int64 v5; // kr00_8@1
  _DWORD *result; // r0@1
  _DWORD *v9; // r5@2
  int v14; // r7@2

  v5 = *((_QWORD *)this + 1);
  _R8 = a4;
  _R7 = a3;
  result = *(_DWORD **)(v5 + 4 * ((unsigned int)a2 % HIDWORD(v5)));
  if ( result )
  {
    v9 = (_DWORD *)*result;
    __asm
    {
      VMOV            S20, R7
      VLDR            S16, [SP,#0x38+arg_0]
      VMOV            S18, R8
    }
    v14 = *(_DWORD *)(*result + 4);
    while ( v14 != a2 )
      if ( *v9 )
      {
        v14 = *(_DWORD *)(v5 + 4);
        result = v9;
        v9 = (_DWORD *)*v9;
        if ( *(_DWORD *)(v5 + 4) % HIDWORD(v5) == (unsigned int)a2 % HIDWORD(v5) )
          continue;
      }
      return result;
    if ( result )
      result = (_DWORD *)*result;
      if ( result )
        __asm
        {
          VSTRNE          S20, [R0,#0x20]
          VSTRNE          S18, [R0,#0x24]
          VSTRNE          S16, [R0,#0x28]
        }
  }
  return result;
}


void __fastcall SoundSystemBase::~SoundSystemBase(SoundSystemBase *this)
{
  SoundSystemBase::~SoundSystemBase(this);
}
