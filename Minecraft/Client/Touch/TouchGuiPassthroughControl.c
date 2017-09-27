

int __fastcall TouchGuiPassthroughControl::TouchGuiPassthroughControl(int result, int a2, __int16 a3)
{
  int v3; // r3@1
  __int64 v4; // r4@1
  int v5; // r1@1

  v3 = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = 0;
  v5 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)result = &off_26E8AF4;
  *(_DWORD *)(result + 4) = v3;
  *(_QWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  *(_BYTE *)(result + 32) = 2;
  *(_WORD *)(result + 34) = a3;
  return result;
}


void __fastcall TouchGuiPassthroughControl::~TouchGuiPassthroughControl(TouchGuiPassthroughControl *this)
{
  TouchGuiPassthroughControl::~TouchGuiPassthroughControl(this);
}


TouchGuiPassthroughControl *__fastcall TouchGuiPassthroughControl::~TouchGuiPassthroughControl(TouchGuiPassthroughControl *this)
{
  TouchGuiPassthroughControl *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E8A84;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v4 )
    v4();
  return v1;
}


void __fastcall TouchGuiPassthroughControl::~TouchGuiPassthroughControl(TouchGuiPassthroughControl *this)
{
  TouchGuiPassthroughControl *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E8A84;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v4 )
    v4();
  operator delete((void *)v1);
}


int __fastcall TouchGuiPassthroughControl::tick(TouchGuiPassthroughControl *this, InputEventQueue *a2, TouchPointResults *a3, int a4)
{
  TouchGuiPassthroughControl *v4; // r5@1
  int v5; // r9@1
  TouchPointResults *v6; // r6@1
  char v7; // r2@2
  int v9; // r7@2
  signed int v12; // r0@4
  int result; // r0@12
  bool v18; // zf@14
  InputEventQueue *v19; // [sp+10h] [bp-38h]@2
  char v20; // [sp+14h] [bp-34h]@2

  v4 = this;
  v5 = *((_BYTE *)this + 32);
  v6 = a3;
  *((_BYTE *)this + 32) = 0;
  if ( !*((_DWORD *)this + 3) )
    sub_21E5F48();
  v19 = a2;
  (*((void (__fastcall **)(_DWORD, _DWORD))this + 4))(&v20, (char *)this + 4);
  v9 = *(_QWORD *)v6 >> 32;
  _R4 = *(_QWORD *)v6;
  LOWORD(_R10) = 0;
  if ( _R4 == v9 )
  {
    LOWORD(_R11) = 0;
  }
  else
    do
    {
      v12 = RectangleArea::isInside(
              (RectangleArea *)&v20,
              COERCE_FLOAT(*(_QWORD *)(_R4 + 8)),
              COERCE_FLOAT(*(_QWORD *)(_R4 + 8) >> 32));
      _ZF = v12 == 1;
      if ( v12 == 1 )
        _ZF = *(_DWORD *)(_R4 + 20) == 2;
      if ( _ZF )
      {
        *((_BYTE *)v4 + 32) = 1;
        __asm
        {
          VLDR            S0, [R4,#8]
          VLDR            S2, [R4,#0xC]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R11, S2
          VMOV            R10, S0
        }
      }
      _R4 += 24;
    }
    while ( v9 != _R4 );
  result = *((_DWORD *)v4 + 8);
  if ( (unsigned __int8)result == 1 )
    InputEventQueue::enqueuePointerLocation((int)v19, 2, _R10, _R11, 2, 0, -1);
    result = *((_DWORD *)v4 + 8);
  v18 = v5 == 2;
  if ( v5 != 2 )
    v7 = result;
    v18 = (unsigned __int8)result == v5;
  if ( !v18 )
    result = InputEventQueue::enqueueButton((int)v19, SHIWORD(result), v7, 0, 2, -1, 0);
  return result;
}
