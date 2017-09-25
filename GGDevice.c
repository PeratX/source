

int __fastcall GGDevice::getNextGGEvent(GGDevice *this)
{
  GGDevice *v1; // r5@1
  int v2; // r4@1
  int v3; // r0@2
  int v4; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( v2 == *((_DWORD *)this + 4) - 20 )
  {
    operator delete(*((void **)this + 3));
    v4 = *((_DWORD *)v1 + 5);
    *((_DWORD *)v1 + 5) = v4 + 4;
    v3 = *(_DWORD *)(v4 + 4);
    *((_DWORD *)v1 + 3) = v3;
    *((_DWORD *)v1 + 4) = v3 + 500;
  }
  else
    v3 = v2 + 20;
  *((_DWORD *)v1 + 2) = v3;
  return v2;
}


GGDevice *__fastcall GGDevice::~GGDevice(GGDevice *this)
{
  GGDevice *v1; // r4@1
  void *v2; // r0@1
  unsigned int v3; // r5@2
  unsigned int v4; // r1@2
  unsigned int v5; // r6@3
  void *v6; // t1@4

  v1 = this;
  v2 = *(void **)this;
  if ( v2 )
  {
    v3 = *((_DWORD *)v1 + 9);
    v4 = *((_DWORD *)v1 + 5);
    if ( v4 < v3 + 4 )
    {
      v5 = v4 - 4;
      do
      {
        v6 = *(void **)(v5 + 4);
        v5 += 4;
        operator delete(v6);
      }
      while ( v5 < v3 );
      v2 = *(void **)v1;
    }
    operator delete(v2);
  }
  return v1;
}


int __fastcall GGDevice::addGGEvent(float a1, float a2, int a3, int _R3, int a5, int a6)
{
  int v6; // r4@1
  float v7; // r6@1
  int v8; // r1@1
  int v13; // r0@1
  int v14; // r5@1
  int result; // r0@2
  int v16; // r0@5
  int v17; // r0@5

  v6 = LODWORD(a1);
  v7 = a2;
  v8 = *(_DWORD *)(LODWORD(a1) + 32);
  __asm { VMOV            S20, R3 }
  v13 = *(_DWORD *)(LODWORD(a1) + 24);
  v14 = a3;
  __asm
  {
    VLDR            S16, [SP,#0x28+arg_4]
    VLDR            S18, [SP,#0x28+arg_0]
  }
  if ( v13 == v8 - 20 )
    if ( (unsigned int)((*(_QWORD *)v6 >> 32) - ((signed int)(*(_DWORD *)(v6 + 36) - *(_QWORD *)v6) >> 2)) <= 1 )
      std::deque<PlatformGestureEvent,std::allocator<PlatformGestureEvent>>::_M_reallocate_map(v6, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v6 + 36) + 4) = operator new(0x1F4u);
    v16 = *(_DWORD *)(v6 + 24);
    *(float *)v16 = v7;
    *(_DWORD *)(v16 + 4) = v14;
    __asm
    {
      VSTR            S20, [R0,#8]
      VSTR            S18, [R0,#0xC]
      VSTR            S16, [R0,#0x10]
    }
    v17 = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v6 + 36) = v17 + 4;
    result = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v6 + 28) = result;
    *(_DWORD *)(v6 + 32) = result + 500;
  else
    *(float *)v13 = v7;
    *(_DWORD *)(v13 + 4) = a3;
    result = *(_DWORD *)(v6 + 24) + 20;
  *(_DWORD *)(v6 + 24) = result;
  return result;
}


int __fastcall GGDevice::GGDevice(int a1)
{
  int v1; // r4@1
  _DWORD *v2; // r9@1
  char *v3; // r6@1
  char *v4; // r7@1
  unsigned int v5; // r5@1
  char *v6; // r0@1
  int v7; // r1@1
  unsigned int v8; // r7@1
  _DWORD *v9; // r0@2
  unsigned int v10; // r6@5
  void *v11; // t1@6

  v1 = a1;
  v2 = operator new(0x20u);
  v3 = (char *)operator new(0x1F4u);
  v2[3] = v3;
  _aeabi_memclr4(v1, 40);
  *(_DWORD *)(v1 + 4) = 8;
  v4 = (char *)operator new(0x20u);
  *(_DWORD *)v1 = v4;
  v5 = (2 * *(_DWORD *)(v1 + 4) - 2) & 0xFFFFFFFC;
  v6 = (char *)operator new(0x1F4u);
  *(_DWORD *)&v4[v5] = v6;
  v7 = (int)&v4[v5];
  v8 = (unsigned int)(v2 + 3);
  *(_DWORD *)(v1 + 8) = v6;
  *(_DWORD *)(v1 + 12) = v6;
  *(_DWORD *)(v1 + 16) = v6 + 500;
  *(_DWORD *)(v1 + 20) = v7;
  *(_DWORD *)(v1 + 24) = v6;
  *(_DWORD *)(v1 + 28) = v6;
  *(_DWORD *)(v1 + 32) = v6 + 500;
  *(_DWORD *)(v1 + 36) = v7;
  if ( v2 )
  {
    *(_DWORD *)(v1 + 8) = v3;
    *(_DWORD *)(v1 + 12) = v3;
    *(_DWORD *)(v1 + 16) = v3 + 500;
    *(_DWORD *)(v1 + 20) = v8;
    *(_DWORD *)(v1 + 24) = v3;
    *(_DWORD *)(v1 + 28) = v3;
    *(_DWORD *)(v1 + 32) = v3 + 500;
    *(_DWORD *)(v1 + 36) = v8;
    v8 = v7;
    v9 = *(_DWORD **)v1;
    *(_DWORD *)v1 = v2;
    *(_DWORD *)(v1 + 4) = 8;
    v2 = v9;
  }
    if ( v8 < v8 + 4 )
    {
      v10 = v8 - 4;
      do
      {
        v11 = *(void **)(v10 + 4);
        v10 += 4;
        operator delete(v11);
      }
      while ( v10 < v8 );
    }
    operator delete(v2);
  return v1;
}


int __fastcall GGDevice::clearEvents(GGDevice *this)
{
  GGDevice *v1; // r4@1
  int result; // r0@1
  int v3; // r1@1
  int v4; // r2@2
  int v5; // r0@5

  v1 = this;
  result = *((_DWORD *)this + 2);
  v3 = *((_DWORD *)v1 + 6);
  if ( v3 != result )
  {
    v4 = *((_DWORD *)v1 + 4);
    do
    {
      if ( result == v4 - 20 )
      {
        operator delete(*((void **)v1 + 3));
        v5 = *((_DWORD *)v1 + 5);
        *((_DWORD *)v1 + 5) = v5 + 4;
        result = *(_DWORD *)(v5 + 4);
        *((_DWORD *)v1 + 3) = result;
        v4 = result + 500;
        *((_DWORD *)v1 + 4) = result + 500;
        *((_DWORD *)v1 + 2) = result;
        v3 = *((_DWORD *)v1 + 6);
      }
      else
        result += 20;
    }
    while ( v3 != result );
  }
  return result;
}
