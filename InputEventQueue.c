

int __fastcall InputEventQueue::enqueueButton(int a1, __int16 a2, char a3, char a4, char a5, int a6, char a7)
{
  int v7; // r4@1
  __int16 v8; // r7@1
  int v9; // r1@1
  char v10; // r5@1
  int v11; // r0@1
  char v12; // r6@1
  int v13; // r12@2
  int result; // r0@2
  int v15; // r0@5
  int v16; // r12@5
  int v17; // r0@5
  __int16 v18; // [sp+5h] [bp-33h]@0
  char v19; // [sp+7h] [bp-31h]@0
  int v20; // [sp+8h] [bp-30h]@0
  int v21; // [sp+Ch] [bp-2Ch]@0
  int v22; // [sp+10h] [bp-28h]@0

  v7 = a1;
  v8 = a2;
  v9 = *(_DWORD *)(a1 + 32);
  v10 = a4;
  v11 = *(_DWORD *)(a1 + 24);
  v12 = a3;
  if ( v11 == v9 - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)v7 >> 32) - ((signed int)(*(_DWORD *)(v7 + 36) - *(_QWORD *)v7) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v7, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v7 + 36) + 4) = operator new(0x1F8u);
    v15 = *(_DWORD *)(v7 + 24);
    v16 = v15 + 8;
    *(_BYTE *)v15 = 0;
    *(_BYTE *)(v15 + 1) = a5;
    *(_WORD *)(v15 + 4) = v8;
    *(_BYTE *)(v15 + 6) = v12;
    *(_BYTE *)(v15 + 7) = v10;
    *(_DWORD *)v16 = v20;
    *(_DWORD *)(v16 + 4) = v21;
    *(_DWORD *)(v16 + 8) = v22;
    *(_DWORD *)(v16 + 12) = a6;
    *(_BYTE *)(v15 + 24) = a7;
    *(_BYTE *)(v15 + 27) = v19;
    *(_WORD *)(v15 + 25) = v18;
    v17 = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v7 + 36) = v17 + 4;
    result = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v7 + 28) = result;
    *(_DWORD *)(v7 + 32) = result + 504;
  }
  else
    *(_BYTE *)v11 = 0;
    v13 = v11 + 8;
    *(_BYTE *)(v11 + 1) = a5;
    *(_WORD *)(v11 + 4) = v8;
    *(_BYTE *)(v11 + 6) = a3;
    *(_BYTE *)(v11 + 7) = a4;
    *(_DWORD *)v13 = v20;
    *(_DWORD *)(v13 + 4) = v21;
    *(_DWORD *)(v13 + 8) = v22;
    *(_DWORD *)(v13 + 12) = a6;
    *(_BYTE *)(v11 + 24) = a7;
    *(_BYTE *)(v11 + 27) = v19;
    *(_WORD *)(v11 + 25) = v18;
    result = *(_DWORD *)(v7 + 24) + 28;
  *(_DWORD *)(v7 + 24) = result;
  return result;
}


int __fastcall InputEventQueue::enqueueDirection(int a1, int a2, int _R2, int _R3, char a5, int a6, char a7)
{
  int v7; // r4@1
  int v8; // r5@1
  int v13; // r1@1
  int v14; // r0@1
  int result; // r0@2
  int v16; // r0@5
  int v17; // r0@5
  __int16 v18; // [sp+5h] [bp-2Bh]@0
  char v19; // [sp+7h] [bp-29h]@0

  v7 = a1;
  v8 = a2;
  __asm { VMOV            S16, R3 }
  v13 = *(_DWORD *)(a1 + 32);
  __asm { VMOV            S18, R2 }
  v14 = *(_DWORD *)(a1 + 24);
  if ( v14 == v13 - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)v7 >> 32) - ((signed int)(*(_DWORD *)(v7 + 36) - *(_QWORD *)v7) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v7, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v7 + 36) + 4) = operator new(0x1F8u);
    v16 = *(_DWORD *)(v7 + 24);
    *(_BYTE *)v16 = 4;
    *(_BYTE *)(v16 + 1) = a5;
    *(_DWORD *)(v16 + 4) = v8;
    *(_DWORD *)(v16 + 20) = a6;
    __asm
    {
      VSTR            S18, [R0,#8]
      VSTR            S16, [R0,#0xC]
    }
    *(_BYTE *)(v16 + 24) = a7;
    *(_BYTE *)(v16 + 27) = v19;
    *(_WORD *)(v16 + 25) = v18;
    v17 = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v7 + 36) = v17 + 4;
    result = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v7 + 28) = result;
    *(_DWORD *)(v7 + 32) = result + 504;
  }
  else
    *(_BYTE *)v14 = 4;
    *(_BYTE *)(v14 + 1) = a5;
    *(_DWORD *)(v14 + 4) = v8;
    *(_DWORD *)(v14 + 20) = a6;
    *(_BYTE *)(v14 + 24) = a7;
    *(_BYTE *)(v14 + 27) = v19;
    *(_WORD *)(v14 + 25) = v18;
    result = *(_DWORD *)(v7 + 24) + 28;
  *(_DWORD *)(v7 + 24) = result;
  return result;
}


InputEventQueue *__fastcall InputEventQueue::~InputEventQueue(InputEventQueue *this)
{
  InputEventQueue *v1; // r4@1
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


RakNet *__fastcall InputEventQueue::enqueueChangeUser(InputEventQueue *this, int a2, bool a3)
{
  InputEventQueue *v3; // r4@1
  bool v4; // r6@1
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r5@5
  int v9; // r0@5
  RakNet *result; // r0@6
  __int16 v11; // [sp+5h] [bp-33h]@0
  char v12; // [sp+7h] [bp-31h]@0
  char v13; // [sp+8h] [bp-30h]@2
  RakNet *v14; // [sp+1Ch] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v14 = _stack_chk_guard;
  v6 = *((_DWORD *)this + 6);
  if ( v6 == *((_DWORD *)this + 8) - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)this >> 32) - ((signed int)(*((_DWORD *)this + 9) - *(_QWORD *)this) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map((int)this, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v3 + 9) + 4) = operator new(0x1F8u);
    v8 = *((_DWORD *)v3 + 6);
    *(_BYTE *)v8 = 8;
    *(_BYTE *)(v8 + 1) = 0;
    *(_BYTE *)(v8 + 4) = v4;
    _aeabi_memcpy(v8 + 5, &v13, 15);
    *(_DWORD *)(v8 + 20) = v5;
    *(_BYTE *)(v8 + 24) = 0;
    *(_BYTE *)(v8 + 27) = v12;
    *(_WORD *)(v8 + 25) = v11;
    v9 = *((_DWORD *)v3 + 9);
    *((_DWORD *)v3 + 9) = v9 + 4;
    v7 = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v3 + 7) = v7;
    *((_DWORD *)v3 + 8) = v7 + 504;
  }
  else
    *(_BYTE *)v6 = 8;
    *(_BYTE *)(v6 + 1) = 0;
    *(_BYTE *)(v6 + 4) = a3;
    _aeabi_memcpy(v6 + 5, &v13, 15);
    *(_DWORD *)(v6 + 20) = v5;
    *(_BYTE *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 27) = v12;
    *(_WORD *)(v6 + 25) = v11;
    v7 = *((_DWORD *)v3 + 6) + 28;
  *((_DWORD *)v3 + 6) = v7;
  result = (RakNet *)(_stack_chk_guard - v14);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall InputEventQueue::nextEvent(InputEventQueue *this, InputEvent *a2)
{
  InputEventQueue *v2; // r4@1
  int v3; // r8@1
  signed int result; // r0@2
  void *v12; // r2@3
  _InputEvent *v13; // r3@3
  _InputEvent *v14; // r5@3
  _XtAppStruct *v15; // r6@3
  int v16; // r7@3
  int v17; // r0@3
  int v18; // r0@4
  int v19; // r0@5

  v2 = this;
  v3 = *((_DWORD *)this + 2);
  _R5 = 1840700269;
  _R3 = *((_DWORD *)this + 4) - v3;
  __asm { SMMUL.W         R5, R3, R5 }
  if ( -1227133513 * ((*((_DWORD *)this + 6) - *((_DWORD *)this + 7)) >> 2)
     + 18 * ((*((_DWORD *)this + 9) - *((_DWORD *)this + 5)) >> 2)
     - 18 == ((_R5 - _R3) >> 4) + ((unsigned int)(_R5 - _R3) >> 31) )
  {
    result = 0;
  }
  else
    v12 = *(void **)(v3 + 4);
    v13 = *(_InputEvent **)(v3 + 8);
    v14 = *(_InputEvent **)(v3 + 12);
    v15 = *(_XtAppStruct **)(v3 + 16);
    v16 = *(_DWORD *)(v3 + 20);
    a2->ie_proc = *(XtInputCallbackProc *)v3;
    a2->ie_closure = v12;
    a2->ie_next = v13;
    a2->ie_oq = v14;
    a2->app = v15;
    a2->ie_source = v16;
    LOBYTE(a2->ie_condition) = *(_BYTE *)(v3 + 24);
    v17 = *((_DWORD *)this + 2);
    if ( v17 == *((_DWORD *)v2 + 4) - 28 )
    {
      operator delete(*((void **)v2 + 3));
      v19 = *((_DWORD *)v2 + 5);
      *((_DWORD *)v2 + 5) = v19 + 4;
      v18 = *(_DWORD *)(v19 + 4);
      *((_DWORD *)v2 + 3) = v18;
      *((_DWORD *)v2 + 4) = v18 + 504;
    }
    else
      v18 = v17 + 28;
    *((_DWORD *)v2 + 2) = v18;
    result = 1;
  return result;
}


int __fastcall InputEventQueue::enqueueTextChar(int a1, int *a2, char a3, char a4, int a5)
{
  int v5; // r4@1
  const char *v6; // r1@1
  char v7; // r8@1
  unsigned int v8; // r6@1
  int v9; // r0@3
  int v10; // r2@4
  int v11; // r3@4
  int v12; // r0@4
  int v13; // r2@4
  int v14; // r3@4
  int v15; // r7@4
  int result; // r0@4
  int v17; // r0@7
  int v18; // r2@7
  int v19; // r3@7
  int v20; // r2@7
  int v21; // r3@7
  int v22; // r7@7
  int v23; // r0@7
  char v24; // [sp+0h] [bp-38h]@1
  char v25; // [sp+1h] [bp-37h]@1
  int v26; // [sp+4h] [bp-34h]@4
  int v27; // [sp+8h] [bp-30h]@4
  char v28; // [sp+9h] [bp-2Fh]@3
  int v29; // [sp+Ch] [bp-2Ch]@4
  int v30; // [sp+10h] [bp-28h]@4
  int v31; // [sp+14h] [bp-24h]@3
  char v32; // [sp+18h] [bp-20h]@1

  v5 = a1;
  v32 = 0;
  v25 = a4;
  v24 = 2;
  v6 = (const char *)*a2;
  v7 = a3;
  v8 = *((_DWORD *)v6 - 3);
  if ( v8 > 4 )
    v8 = 4;
  _aeabi_memcpy((unsigned int)&v24 | 4, v6, v8);
  *(_BYTE *)(((unsigned int)&v24 | 4) + v8) = 0;
  v28 = v7;
  v31 = a5;
  v9 = *(_DWORD *)(v5 + 24);
  if ( v9 == *(_DWORD *)(v5 + 32) - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)v5 >> 32) - ((signed int)(*(_DWORD *)(v5 + 36) - *(_QWORD *)v5) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v5, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v5 + 36) + 4) = operator new(0x1F8u);
    v17 = *(_DWORD *)(v5 + 24);
    v18 = v26;
    v19 = v27;
    *(_DWORD *)v17 = *(_DWORD *)&v24;
    *(_DWORD *)(v17 + 4) = v18;
    *(_DWORD *)(v17 + 8) = v19;
    v17 += 12;
    v20 = v30;
    v21 = v31;
    v22 = *(_DWORD *)&v32;
    *(_DWORD *)v17 = v29;
    *(_DWORD *)(v17 + 4) = v20;
    *(_DWORD *)(v17 + 8) = v21;
    *(_DWORD *)(v17 + 12) = v22;
    v23 = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 36) = v23 + 4;
    result = *(_DWORD *)(v23 + 4);
    *(_DWORD *)(v5 + 28) = result;
    *(_DWORD *)(v5 + 32) = result + 504;
  }
  else
    v10 = v26;
    v11 = v27;
    *(_DWORD *)v9 = *(_DWORD *)&v24;
    *(_DWORD *)(v9 + 4) = v10;
    *(_DWORD *)(v9 + 8) = v11;
    v12 = v9 + 12;
    v13 = v30;
    v14 = v31;
    v15 = *(_DWORD *)&v32;
    *(_DWORD *)v12 = v29;
    *(_DWORD *)(v12 + 4) = v13;
    *(_DWORD *)(v12 + 8) = v14;
    *(_DWORD *)(v12 + 12) = v15;
    result = *(_DWORD *)(v5 + 24) + 28;
  *(_DWORD *)(v5 + 24) = result;
  return result;
}


int __fastcall InputEventQueue::enqueueVector(float a1, __int16 a2, int _R2, int _R3, int a5, char a6, int a7)
{
  int v7; // r4@1
  __int16 v8; // r5@1
  int v9; // r1@1
  int v10; // r0@1
  int result; // r0@2
  int v16; // r0@5
  int v17; // r0@5
  __int16 v18; // [sp+5h] [bp-33h]@0
  char v19; // [sp+7h] [bp-31h]@0

  v7 = LODWORD(a1);
  v8 = a2;
  v9 = *(_DWORD *)(LODWORD(a1) + 32);
  v10 = *(_DWORD *)(LODWORD(a1) + 24);
  __asm
  {
    VMOV            S18, R3
    VLDR            S16, [SP,#0x38+arg_0]
    VMOV            S20, R2
  }
  if ( v10 == v9 - 28 )
    if ( (unsigned int)((*(_QWORD *)v7 >> 32) - ((signed int)(*(_DWORD *)(v7 + 36) - *(_QWORD *)v7) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v7, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v7 + 36) + 4) = operator new(0x1F8u);
    v16 = *(_DWORD *)(v7 + 24);
    *(_BYTE *)v16 = 5;
    *(_BYTE *)(v16 + 1) = a6;
    *(_WORD *)(v16 + 4) = v8;
    *(_DWORD *)(v16 + 20) = a7;
    __asm
    {
      VSTR            S20, [R0,#8]
      VSTR            S18, [R0,#0xC]
      VSTR            S16, [R0,#0x10]
    }
    *(_BYTE *)(v16 + 24) = 0;
    *(_BYTE *)(v16 + 27) = v19;
    *(_WORD *)(v16 + 25) = v18;
    v17 = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v7 + 36) = v17 + 4;
    result = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v7 + 28) = result;
    *(_DWORD *)(v7 + 32) = result + 504;
  else
    *(_BYTE *)v10 = 5;
    *(_BYTE *)(v10 + 1) = a6;
    *(_WORD *)(v10 + 4) = v8;
    *(_DWORD *)(v10 + 20) = a7;
    *(_BYTE *)(v10 + 24) = 0;
    *(_BYTE *)(v10 + 27) = v19;
    *(_WORD *)(v10 + 25) = v18;
    result = *(_DWORD *)(v7 + 24) + 28;
  *(_DWORD *)(v7 + 24) = result;
  return result;
}


RakNet *__fastcall InputEventQueue::enqueueConnectionStateChange(InputEventQueue *this, int a2, bool a3)
{
  InputEventQueue *v3; // r4@1
  bool v4; // r6@1
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r5@5
  int v9; // r0@5
  RakNet *result; // r0@6
  __int16 v11; // [sp+5h] [bp-33h]@0
  char v12; // [sp+7h] [bp-31h]@0
  char v13; // [sp+8h] [bp-30h]@2
  RakNet *v14; // [sp+1Ch] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v14 = _stack_chk_guard;
  v6 = *((_DWORD *)this + 6);
  if ( v6 == *((_DWORD *)this + 8) - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)this >> 32) - ((signed int)(*((_DWORD *)this + 9) - *(_QWORD *)this) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map((int)this, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v3 + 9) + 4) = operator new(0x1F8u);
    v8 = *((_DWORD *)v3 + 6);
    *(_BYTE *)v8 = 9;
    *(_BYTE *)(v8 + 1) = 0;
    *(_BYTE *)(v8 + 4) = v4;
    _aeabi_memcpy(v8 + 5, &v13, 15);
    *(_DWORD *)(v8 + 20) = v5;
    *(_BYTE *)(v8 + 24) = 0;
    *(_BYTE *)(v8 + 27) = v12;
    *(_WORD *)(v8 + 25) = v11;
    v9 = *((_DWORD *)v3 + 9);
    *((_DWORD *)v3 + 9) = v9 + 4;
    v7 = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v3 + 7) = v7;
    *((_DWORD *)v3 + 8) = v7 + 504;
  }
  else
    *(_BYTE *)v6 = 9;
    *(_BYTE *)(v6 + 1) = 0;
    *(_BYTE *)(v6 + 4) = a3;
    _aeabi_memcpy(v6 + 5, &v13, 15);
    *(_DWORD *)(v6 + 20) = v5;
    *(_BYTE *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 27) = v12;
    *(_WORD *)(v6 + 25) = v11;
    v7 = *((_DWORD *)v3 + 6) + 28;
  *((_DWORD *)v3 + 6) = v7;
  result = (RakNet *)(_stack_chk_guard - v14);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall InputEventQueue::InputEventQueue(int a1)
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
  v3 = (char *)operator new(0x1F8u);
  v2[3] = v3;
  _aeabi_memclr4(v1, 40);
  *(_DWORD *)(v1 + 4) = 8;
  v4 = (char *)operator new(0x20u);
  *(_DWORD *)v1 = v4;
  v5 = (2 * *(_DWORD *)(v1 + 4) - 2) & 0xFFFFFFFC;
  v6 = (char *)operator new(0x1F8u);
  *(_DWORD *)&v4[v5] = v6;
  v7 = (int)&v4[v5];
  v8 = (unsigned int)(v2 + 3);
  *(_DWORD *)(v1 + 8) = v6;
  *(_DWORD *)(v1 + 12) = v6;
  *(_DWORD *)(v1 + 16) = v6 + 504;
  *(_DWORD *)(v1 + 20) = v7;
  *(_DWORD *)(v1 + 24) = v6;
  *(_DWORD *)(v1 + 28) = v6;
  *(_DWORD *)(v1 + 32) = v6 + 504;
  *(_DWORD *)(v1 + 36) = v7;
  if ( v2 )
  {
    *(_DWORD *)(v1 + 8) = v3;
    *(_DWORD *)(v1 + 12) = v3;
    *(_DWORD *)(v1 + 16) = v3 + 504;
    *(_DWORD *)(v1 + 20) = v8;
    *(_DWORD *)(v1 + 24) = v3;
    *(_DWORD *)(v1 + 28) = v3;
    *(_DWORD *)(v1 + 32) = v3 + 504;
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


int __fastcall InputEventQueue::enqueueButtonPressAndRelease(int a1, __int16 a2, char a3, int a4)
{
  int v4; // r4@1
  __int16 v5; // r6@1
  int v6; // r1@1
  int v7; // r8@1
  int v8; // r0@1
  char v9; // r7@1
  int v10; // r12@2
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r0@5
  int v14; // r12@5
  int v15; // r0@5
  int v16; // r12@7
  int result; // r0@7
  int v18; // r0@10
  int v19; // r12@10
  int v20; // r0@10
  __int16 v21; // [sp+5h] [bp-2Bh]@0
  char v22; // [sp+7h] [bp-29h]@0
  int v23; // [sp+8h] [bp-28h]@0
  int v24; // [sp+Ch] [bp-24h]@0
  int v25; // [sp+10h] [bp-20h]@0
  __int16 v26; // [sp+16h] [bp-1Ah]@0

  v4 = a1;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 24);
  v9 = a3;
  if ( v8 == v6 - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)v4 >> 32) - ((signed int)(*(_DWORD *)(v4 + 36) - *(_QWORD *)v4) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v4, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v4 + 36) + 4) = operator new(0x1F8u);
    v13 = *(_DWORD *)(v4 + 24);
    v14 = v13 + 8;
    *(_BYTE *)v13 = 0;
    *(_BYTE *)(v13 + 1) = v9;
    *(_WORD *)(v13 + 4) = v5;
    *(_WORD *)(v13 + 6) = 1;
    *(_DWORD *)v14 = v23;
    *(_DWORD *)(v14 + 4) = v24;
    *(_DWORD *)(v14 + 8) = v25;
    *(_DWORD *)(v14 + 12) = v7;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 27) = v22;
    *(_WORD *)(v13 + 25) = v21;
    v15 = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(v4 + 36) = v15 + 4;
    v11 = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v4 + 28) = v11;
    v12 = v11 + 504;
    *(_DWORD *)(v4 + 32) = v11 + 504;
    *(_DWORD *)(v4 + 24) = v11;
  }
  else
    *(_BYTE *)v8 = 0;
    *(_BYTE *)(v8 + 1) = a3;
    v10 = v8 + 8;
    *(_WORD *)(v8 + 4) = v5;
    *(_WORD *)(v8 + 6) = 1;
    *(_DWORD *)v10 = v23;
    *(_DWORD *)(v10 + 4) = v24;
    *(_DWORD *)(v10 + 8) = v25;
    *(_DWORD *)(v10 + 12) = a4;
    *(_BYTE *)(v8 + 24) = 0;
    *(_BYTE *)(v8 + 27) = v22;
    *(_WORD *)(v8 + 25) = v21;
    v11 = *(_DWORD *)(v4 + 24) + 28;
    v12 = *(_DWORD *)(v4 + 32);
  if ( v11 == v12 - 28 )
    v18 = *(_DWORD *)(v4 + 24);
    v19 = v18 + 8;
    *(_BYTE *)v18 = 0;
    *(_BYTE *)(v18 + 1) = v9;
    *(_WORD *)(v18 + 4) = v5;
    *(_WORD *)(v18 + 6) = 0;
    *(_DWORD *)v19 = v23;
    *(_DWORD *)(v19 + 4) = v24;
    *(_DWORD *)(v19 + 8) = v25;
    *(_DWORD *)(v19 + 12) = v7;
    *(_BYTE *)(v18 + 24) = 0;
    *(_BYTE *)(v18 + 27) = v22;
    *(_WORD *)(v18 + 25) = v21;
    v20 = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(v4 + 36) = v20 + 4;
    result = *(_DWORD *)(v20 + 4);
    *(_DWORD *)(v4 + 28) = result;
    *(_DWORD *)(v4 + 32) = result + 504;
    v16 = v11 + 8;
    *(_BYTE *)v11 = 0;
    *(_BYTE *)(v11 + 1) = v9;
    *(_WORD *)(v11 + 2) = v26;
    *(_WORD *)(v11 + 4) = v5;
    *(_WORD *)(v11 + 6) = 0;
    *(_DWORD *)v16 = v23;
    *(_DWORD *)(v16 + 4) = v24;
    *(_DWORD *)(v16 + 8) = v25;
    *(_DWORD *)(v16 + 12) = v7;
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 27) = v22;
    *(_WORD *)(v11 + 25) = v21;
    result = *(_DWORD *)(v4 + 24) + 28;
  *(_DWORD *)(v4 + 24) = result;
  return result;
}


RakNet *__fastcall InputEventQueue::enqueueRawInput(int a1, int a2, char a3, char a4, int a5, char a6)
{
  int v6; // r4@1
  int v7; // r7@1
  char v8; // r6@1
  char v9; // r5@1
  int v10; // r1@1
  int v11; // r0@1
  int v12; // r0@2
  int v13; // r0@5
  int v14; // r0@5
  RakNet *result; // r0@6
  __int16 v16; // [sp+5h] [bp-33h]@0
  char v17; // [sp+7h] [bp-31h]@0
  __int64 v18; // [sp+8h] [bp-30h]@0
  char v19; // [sp+10h] [bp-28h]@0
  RakNet *v20; // [sp+18h] [bp-20h]@1

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  v20 = _stack_chk_guard;
  v10 = *(_DWORD *)(a1 + 32);
  v11 = *(_DWORD *)(a1 + 24);
  if ( v11 == v10 - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)v6 >> 32) - ((signed int)(*(_DWORD *)(v6 + 36) - *(_QWORD *)v6) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v6, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v6 + 36) + 4) = operator new(0x1F8u);
    v13 = *(_DWORD *)(v6 + 24);
    *(_BYTE *)v13 = 6;
    *(_BYTE *)(v13 + 1) = 0;
    *(_DWORD *)(v13 + 4) = v7;
    *(_BYTE *)(v13 + 8) = v8;
    *(_BYTE *)(v13 + 9) = v9;
    *(_BYTE *)(v13 + 10) = a6;
    *(_BYTE *)(v13 + 19) = v19;
    *(_QWORD *)(v13 + 11) = v18;
    *(_DWORD *)(v13 + 20) = a5;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 27) = v17;
    *(_WORD *)(v13 + 25) = v16;
    v14 = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v6 + 36) = v14 + 4;
    v12 = *(_DWORD *)(v14 + 4);
    *(_DWORD *)(v6 + 28) = v12;
    *(_DWORD *)(v6 + 32) = v12 + 504;
  }
  else
    *(_BYTE *)v11 = 6;
    *(_BYTE *)(v11 + 1) = 0;
    *(_DWORD *)(v11 + 4) = v7;
    *(_BYTE *)(v11 + 8) = a4;
    *(_BYTE *)(v11 + 9) = a3;
    *(_BYTE *)(v11 + 10) = a6;
    *(_BYTE *)(v11 + 19) = v19;
    *(_QWORD *)(v11 + 11) = v18;
    *(_DWORD *)(v11 + 20) = a5;
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 27) = v17;
    *(_WORD *)(v11 + 25) = v16;
    v12 = *(_DWORD *)(v6 + 24) + 28;
  *(_DWORD *)(v6 + 24) = v12;
  result = (RakNet *)(_stack_chk_guard - v20);
  if ( _stack_chk_guard != v20 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall InputEventQueue::enqueueJoinGame(InputEventQueue *this, int a2, bool a3)
{
  InputEventQueue *v3; // r4@1
  bool v4; // r6@1
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r5@5
  int v9; // r0@5
  RakNet *result; // r0@6
  __int16 v11; // [sp+5h] [bp-33h]@0
  char v12; // [sp+7h] [bp-31h]@0
  char v13; // [sp+8h] [bp-30h]@2
  RakNet *v14; // [sp+1Ch] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v14 = _stack_chk_guard;
  v6 = *((_DWORD *)this + 6);
  if ( v6 == *((_DWORD *)this + 8) - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)this >> 32) - ((signed int)(*((_DWORD *)this + 9) - *(_QWORD *)this) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map((int)this, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v3 + 9) + 4) = operator new(0x1F8u);
    v8 = *((_DWORD *)v3 + 6);
    *(_BYTE *)v8 = 7;
    *(_BYTE *)(v8 + 1) = 0;
    *(_BYTE *)(v8 + 4) = v4;
    _aeabi_memcpy(v8 + 5, &v13, 15);
    *(_DWORD *)(v8 + 20) = v5;
    *(_BYTE *)(v8 + 24) = 0;
    *(_BYTE *)(v8 + 27) = v12;
    *(_WORD *)(v8 + 25) = v11;
    v9 = *((_DWORD *)v3 + 9);
    *((_DWORD *)v3 + 9) = v9 + 4;
    v7 = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v3 + 7) = v7;
    *((_DWORD *)v3 + 8) = v7 + 504;
  }
  else
    *(_BYTE *)v6 = 7;
    *(_BYTE *)(v6 + 1) = 0;
    *(_BYTE *)(v6 + 4) = a3;
    _aeabi_memcpy(v6 + 5, &v13, 15);
    *(_DWORD *)(v6 + 20) = v5;
    *(_BYTE *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 27) = v12;
    *(_WORD *)(v6 + 25) = v11;
    v7 = *((_DWORD *)v3 + 6) + 28;
  *((_DWORD *)v3 + 6) = v7;
  result = (RakNet *)(_stack_chk_guard - v14);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall InputEventQueue::enqueuePointerLocation(int a1, int a2, __int16 a3, __int16 a4, char a5, char a6, int a7)
{
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r1@1
  __int16 v10; // r5@1
  int v11; // r0@1
  __int16 v12; // r6@1
  int result; // r0@2
  int v14; // r0@5
  int v15; // r0@5
  __int16 v16; // [sp+6h] [bp-2Ah]@0
  char v17; // [sp+8h] [bp-28h]@0
  int v18; // [sp+9h] [bp-27h]@0
  __int16 v19; // [sp+Dh] [bp-23h]@0
  char v20; // [sp+Fh] [bp-21h]@0

  v7 = a1;
  v8 = a2;
  v9 = *(_DWORD *)(a1 + 32);
  v10 = a4;
  v11 = *(_DWORD *)(a1 + 24);
  v12 = a3;
  if ( v11 == v9 - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)v7 >> 32) - ((signed int)(*(_DWORD *)(v7 + 36) - *(_QWORD *)v7) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v7, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v7 + 36) + 4) = operator new(0x1F8u);
    v14 = *(_DWORD *)(v7 + 24);
    *(_BYTE *)v14 = 1;
    *(_BYTE *)(v14 + 1) = a5;
    *(_DWORD *)(v14 + 4) = v8;
    *(_WORD *)(v14 + 8) = v12;
    *(_WORD *)(v14 + 10) = v10;
    *(_BYTE *)(v14 + 12) = a6;
    *(_BYTE *)(v14 + 19) = v20;
    *(_WORD *)(v14 + 17) = v19;
    *(_DWORD *)(v14 + 13) = v18;
    *(_DWORD *)(v14 + 20) = a7;
    *(_BYTE *)(v14 + 24) = 0;
    *(_BYTE *)(v14 + 27) = v17;
    *(_WORD *)(v14 + 25) = v16;
    v15 = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v7 + 36) = v15 + 4;
    result = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v7 + 28) = result;
    *(_DWORD *)(v7 + 32) = result + 504;
  }
  else
    *(_BYTE *)v11 = 1;
    *(_BYTE *)(v11 + 1) = a5;
    *(_DWORD *)(v11 + 4) = v8;
    *(_WORD *)(v11 + 8) = a3;
    *(_WORD *)(v11 + 10) = a4;
    *(_BYTE *)(v11 + 12) = a6;
    *(_BYTE *)(v11 + 19) = v20;
    *(_WORD *)(v11 + 17) = v19;
    *(_DWORD *)(v11 + 13) = v18;
    *(_DWORD *)(v11 + 20) = a7;
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 27) = v17;
    *(_WORD *)(v11 + 25) = v16;
    result = *(_DWORD *)(v7 + 24) + 28;
  *(_DWORD *)(v7 + 24) = result;
  return result;
}


int __fastcall InputEventQueue::enqueueCaretLocation(int a1, int a2, char a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r1@1
  int v7; // r5@1
  int v8; // r0@1
  char v9; // r7@1
  int v10; // r12@2
  int result; // r0@2
  int v12; // r0@5
  int v13; // r12@5
  int v14; // r0@5
  __int16 v15; // [sp+5h] [bp-23h]@0
  char v16; // [sp+7h] [bp-21h]@0
  int v17; // [sp+8h] [bp-20h]@0
  int v18; // [sp+Ch] [bp-1Ch]@0
  int v19; // [sp+10h] [bp-18h]@0

  v4 = a1;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 24);
  v9 = a3;
  if ( v8 == v6 - 28 )
  {
    if ( (unsigned int)((*(_QWORD *)v4 >> 32) - ((signed int)(*(_DWORD *)(v4 + 36) - *(_QWORD *)v4) >> 2)) <= 1 )
      std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map(v4, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v4 + 36) + 4) = operator new(0x1F8u);
    v12 = *(_DWORD *)(v4 + 24);
    v13 = v12 + 8;
    *(_BYTE *)v12 = 3;
    *(_BYTE *)(v12 + 1) = v9;
    *(_DWORD *)(v12 + 4) = v5;
    *(_DWORD *)v13 = v17;
    *(_DWORD *)(v13 + 4) = v18;
    *(_DWORD *)(v13 + 8) = v19;
    *(_DWORD *)(v13 + 12) = v7;
    *(_BYTE *)(v12 + 24) = 0;
    *(_BYTE *)(v12 + 27) = v16;
    *(_WORD *)(v12 + 25) = v15;
    v14 = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(v4 + 36) = v14 + 4;
    result = *(_DWORD *)(v14 + 4);
    *(_DWORD *)(v4 + 28) = result;
    *(_DWORD *)(v4 + 32) = result + 504;
  }
  else
    *(_BYTE *)v8 = 3;
    v10 = v8 + 8;
    *(_BYTE *)(v8 + 1) = a3;
    *(_DWORD *)(v8 + 4) = v5;
    *(_DWORD *)v10 = v17;
    *(_DWORD *)(v10 + 4) = v18;
    *(_DWORD *)(v10 + 8) = v19;
    *(_DWORD *)(v10 + 12) = a4;
    *(_BYTE *)(v8 + 24) = 0;
    *(_BYTE *)(v8 + 27) = v16;
    *(_WORD *)(v8 + 25) = v15;
    result = *(_DWORD *)(v4 + 24) + 28;
  *(_DWORD *)(v4 + 24) = result;
  return result;
}
