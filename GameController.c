

char *__fastcall GameController::_feedJoinGame(GameController *this, int a2, bool a3)
{
  GameController *v3; // r4@1
  bool v4; // r6@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r7@5
  int v9; // r0@5
  char *result; // r0@6
  int v11; // [sp+0h] [bp-28h]@2
  RakNet *v12; // [sp+10h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v12 = _stack_chk_guard;
  v6 = *((_DWORD *)this + 6);
  if ( v6 == *((_DWORD *)this + 8) - 24 )
  {
    if ( (unsigned int)((*(_QWORD *)this >> 32) - ((signed int)(*((_DWORD *)this + 9) - *(_QWORD *)this) >> 2)) <= 1 )
      std::deque<GameControllerEvent,std::allocator<GameControllerEvent>>::_M_reallocate_map((int)this, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v3 + 9) + 4) = operator new(0x1F8u);
    v8 = *((_DWORD *)v3 + 6);
    *(_DWORD *)v8 = 3;
    *(_BYTE *)(v8 + 4) = v4;
    _aeabi_memcpy(v8 + 5, (const char *)&v11, 15);
    *(_DWORD *)(v8 + 20) = v5;
    v9 = *((_DWORD *)v3 + 9);
    *((_DWORD *)v3 + 9) = v9 + 4;
    v7 = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v3 + 7) = v7;
    *((_DWORD *)v3 + 8) = v7 + 504;
  }
  else
    *(_DWORD *)v6 = 3;
    *(_BYTE *)(v6 + 4) = a3;
    _aeabi_memcpy(v6 + 5, (const char *)&v11, 15);
    *(_DWORD *)(v6 + 20) = v5;
    v7 = *((_DWORD *)v3 + 6) + 24;
  *((_DWORD *)v3 + 6) = v7;
  result = (char *)(_stack_chk_guard - v12);
  if ( _stack_chk_guard != v12 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall GameController::_feedTrigger(GameController *this, int a2, float _R2, int a4)
{
  GameController *v4; // r4@1
  int v5; // r6@1
  int v6; // r1@1
  int v11; // r0@1
  int v12; // r5@1
  int result; // r0@2
  int v14; // r0@5
  int v15; // r0@5

  v4 = this;
  v5 = a2;
  v6 = *((_DWORD *)this + 8);
  __asm { VMOV            S16, R2 }
  v11 = *((_DWORD *)this + 6);
  v12 = a4;
  if ( v11 == v6 - 24 )
  {
    if ( (unsigned int)((*(_QWORD *)v4 >> 32) - ((signed int)(*((_DWORD *)v4 + 9) - *(_QWORD *)v4) >> 2)) <= 1 )
      std::deque<GameControllerEvent,std::allocator<GameControllerEvent>>::_M_reallocate_map((int)v4, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v4 + 9) + 4) = operator new(0x1F8u);
    v14 = *((_DWORD *)v4 + 6);
    *(_DWORD *)v14 = 2;
    *(_DWORD *)(v14 + 4) = v5;
    __asm { VSTR            S16, [R0,#8] }
    *(_DWORD *)(v14 + 20) = v12;
    v15 = *((_DWORD *)v4 + 9);
    *((_DWORD *)v4 + 9) = v15 + 4;
    result = *(_DWORD *)(v15 + 4);
    *((_DWORD *)v4 + 7) = result;
    *((_DWORD *)v4 + 8) = result + 504;
  }
  else
    *(_DWORD *)v11 = 2;
    *(_DWORD *)(v11 + 4) = v5;
    *(_DWORD *)(v11 + 20) = a4;
    result = *((_DWORD *)v4 + 6) + 24;
  *((_DWORD *)v4 + 6) = result;
  return result;
}


int __fastcall GameController::GameController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  _DWORD *v4; // r10@1
  char *v5; // r7@1
  char *v6; // r5@1
  unsigned int v7; // r6@1
  char *v8; // r0@1
  int v9; // r1@1
  unsigned int v10; // r5@1
  int v11; // r2@2
  _DWORD *v12; // r0@2
  unsigned int v13; // r7@5
  void *v14; // t1@6

  v2 = a1;
  v3 = a2;
  v4 = operator new(0x20u);
  v5 = (char *)operator new(0x1F8u);
  v4[3] = v5;
  _aeabi_memclr4(v2, 40);
  *(_DWORD *)(v2 + 4) = 8;
  v6 = (char *)operator new(0x20u);
  *(_DWORD *)v2 = v6;
  v7 = (2 * *(_DWORD *)(v2 + 4) - 2) & 0xFFFFFFFC;
  v8 = (char *)operator new(0x1F8u);
  *(_DWORD *)&v6[v7] = v8;
  v9 = (int)&v6[v7];
  v10 = (unsigned int)(v4 + 3);
  *(_DWORD *)(v2 + 8) = v8;
  *(_DWORD *)(v2 + 12) = v8;
  *(_DWORD *)(v2 + 16) = v8 + 504;
  *(_DWORD *)(v2 + 20) = v9;
  *(_DWORD *)(v2 + 24) = v8;
  *(_DWORD *)(v2 + 28) = v8;
  *(_DWORD *)(v2 + 32) = v8 + 504;
  *(_DWORD *)(v2 + 36) = v9;
  if ( v4 )
  {
    v11 = v2 + 16;
    *(_DWORD *)(v2 + 8) = v5;
    *(_DWORD *)(v2 + 12) = v5;
    *(_DWORD *)v11 = v5 + 504;
    *(_DWORD *)(v11 + 4) = v10;
    *(_DWORD *)(v11 + 8) = v5;
    *(_DWORD *)(v2 + 28) = v5;
    *(_DWORD *)(v2 + 32) = v5 + 504;
    *(_DWORD *)(v2 + 36) = v10;
    v10 = v9;
    v12 = *(_DWORD **)v2;
    *(_DWORD *)v2 = v4;
    *(_DWORD *)(v2 + 4) = 8;
    v4 = v12;
  }
    if ( v10 < v10 + 4 )
    {
      v13 = v10 - 4;
      do
      {
        v14 = *(void **)(v13 + 4);
        v13 += 4;
        operator delete(v14);
      }
      while ( v13 < v10 );
    }
    operator delete(v4);
  *(_BYTE *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = v3;
  *(_BYTE *)(v2 + 48) = 1;
  return v2;
}


signed int __fastcall GameController::next(GameController *this)
{
  int v8; // r2@1
  signed int result; // r0@1

  _R1 = *((_DWORD *)this + 4) - *((_DWORD *)this + 2);
  _R3 = -715827883;
  __asm { SMMUL.W         R1, R1, R3 }
  v8 = -1431655765 * ((*((_DWORD *)this + 6) - *((_DWORD *)this + 7)) >> 3)
     + 21 * ((*((_DWORD *)this + 9) - *((_DWORD *)this + 5)) >> 2)
     - 21;
  result = 0;
  if ( v8 != ((signed int)_R1 >> 2) + (_R1 >> 31) )
    result = 1;
  return result;
}


int __fastcall GameController::_setIsAdequateController(int result, bool a2)
{
  *(_BYTE *)(result + 48) = a2;
  return result;
}


char *__fastcall GameController::_setConnected(GameController *this, int a2)
{
  GameController *v2; // r5@1
  char v3; // r4@1
  int v4; // r7@2
  int v5; // r6@2
  int v6; // r0@3
  int v7; // r7@6
  int v8; // r0@6
  char *result; // r0@8
  int v10; // [sp+0h] [bp-28h]@3
  RakNet *v11; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v11 = _stack_chk_guard;
  if ( a2 != *((_BYTE *)this + 40) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 11);
    if ( v4 == *((_DWORD *)this + 8) - 24 )
    {
      if ( (unsigned int)((*(_QWORD *)this >> 32) - ((signed int)(*((_DWORD *)this + 9) - *(_QWORD *)this) >> 2)) <= 1 )
        std::deque<GameControllerEvent,std::allocator<GameControllerEvent>>::_M_reallocate_map((int)this, 1u, 0);
      *(_DWORD *)(*((_DWORD *)v2 + 9) + 4) = operator new(0x1F8u);
      v7 = *((_DWORD *)v2 + 6);
      *(_DWORD *)v7 = 5;
      *(_BYTE *)(v7 + 4) = v3;
      _aeabi_memcpy(v7 + 5, (const char *)&v10, 15);
      *(_DWORD *)(v7 + 20) = v5;
      v8 = *((_DWORD *)v2 + 9);
      *((_DWORD *)v2 + 9) = v8 + 4;
      v6 = *(_DWORD *)(v8 + 4);
      *((_DWORD *)v2 + 7) = v6;
      *((_DWORD *)v2 + 8) = v6 + 504;
    }
    else
      *(_DWORD *)v4 = 5;
      *(_BYTE *)(v4 + 4) = a2;
      _aeabi_memcpy(v4 + 5, (const char *)&v10, 15);
      *(_DWORD *)(v4 + 20) = v5;
      v6 = *((_DWORD *)v2 + 6) + 24;
    *((_DWORD *)v2 + 6) = v6;
  }
  *((_BYTE *)v2 + 40) = v3;
  result = (char *)(_stack_chk_guard - v11);
  if ( _stack_chk_guard != v11 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall GameController::_feedButton(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r1@1
  char v8; // r5@1
  int v9; // r0@1
  int v10; // r6@1
  int result; // r0@2
  int v12; // r0@5
  int v13; // r0@5
  int v14; // [sp+1h] [bp-1Fh]@0
  __int16 v15; // [sp+5h] [bp-1Bh]@0
  char v16; // [sp+7h] [bp-19h]@0

  v5 = a1;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 32);
  v8 = a4;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = a3;
  if ( v9 == v7 - 24 )
  {
    if ( (unsigned int)((*(_QWORD *)v5 >> 32) - ((signed int)(*(_DWORD *)(v5 + 36) - *(_QWORD *)v5) >> 2)) <= 1 )
      std::deque<GameControllerEvent,std::allocator<GameControllerEvent>>::_M_reallocate_map(v5, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v5 + 36) + 4) = operator new(0x1F8u);
    v12 = *(_DWORD *)(v5 + 24);
    *(_DWORD *)v12 = 0;
    *(_DWORD *)(v12 + 4) = v6;
    *(_DWORD *)(v12 + 8) = v10;
    *(_BYTE *)(v12 + 12) = v8;
    *(_BYTE *)(v12 + 19) = v16;
    *(_WORD *)(v12 + 17) = v15;
    *(_DWORD *)(v12 + 13) = v14;
    *(_DWORD *)(v12 + 20) = a5;
    v13 = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 36) = v13 + 4;
    result = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v5 + 28) = result;
    *(_DWORD *)(v5 + 32) = result + 504;
  }
  else
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = v6;
    *(_DWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 12) = a4;
    *(_BYTE *)(v9 + 19) = v16;
    *(_WORD *)(v9 + 17) = v15;
    *(_DWORD *)(v9 + 13) = v14;
    *(_DWORD *)(v9 + 20) = a5;
    result = *(_DWORD *)(v5 + 24) + 24;
  *(_DWORD *)(v5 + 24) = result;
  return result;
}


int __fastcall GameController::getNextEvent(GameController *this, int a2)
{
  int v2; // r8@1
  int v3; // r12@1
  int v4; // r3@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r7@1
  int result; // r0@2
  int v10; // r0@3

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = *(_DWORD *)(v3 + 12);
  v7 = *(_DWORD *)(v3 + 16);
  v8 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)this = *(_DWORD *)v3;
  *((_DWORD *)this + 1) = v4;
  *((_DWORD *)this + 2) = v5;
  *((_DWORD *)this + 3) = v6;
  *((_DWORD *)this + 4) = v7;
  *((_DWORD *)this + 5) = v8;
  if ( v3 == *(_DWORD *)(a2 + 16) - 24 )
  {
    operator delete(*(void **)(a2 + 12));
    v10 = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(v2 + 20) = v10 + 4;
    result = *(_DWORD *)(v10 + 4);
    *(_DWORD *)(v2 + 12) = result;
    *(_DWORD *)(v2 + 16) = result + 504;
    *(_DWORD *)(v2 + 8) = result;
  }
  else
    result = v3 + 24;
    *(_DWORD *)(a2 + 8) = v3 + 24;
  return result;
}


int __fastcall GameController::_feedStick(float a1, int a2, int a3, int _R3, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r1@1
  int v13; // r5@1
  int v14; // r0@1
  int result; // r0@2
  int v16; // r0@5
  int v17; // r0@5

  v6 = LODWORD(a1);
  v7 = a2;
  v8 = *(_DWORD *)(LODWORD(a1) + 32);
  __asm { VMOV            S18, R3 }
  v13 = a3;
  v14 = *(_DWORD *)(LODWORD(a1) + 24);
  __asm { VLDR            S16, [SP,#0x28+arg_0] }
  if ( v14 == v8 - 24 )
  {
    if ( (unsigned int)((*(_QWORD *)v6 >> 32) - ((signed int)(*(_DWORD *)(v6 + 36) - *(_QWORD *)v6) >> 2)) <= 1 )
      std::deque<GameControllerEvent,std::allocator<GameControllerEvent>>::_M_reallocate_map(v6, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v6 + 36) + 4) = operator new(0x1F8u);
    v16 = *(_DWORD *)(v6 + 24);
    *(_DWORD *)v16 = 1;
    *(_DWORD *)(v16 + 4) = v7;
    *(_DWORD *)(v16 + 8) = v13;
    *(_DWORD *)(v16 + 20) = a6;
    __asm
    {
      VSTR            S18, [R0,#0xC]
      VSTR            S16, [R0,#0x10]
    }
    v17 = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v6 + 36) = v17 + 4;
    result = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v6 + 28) = result;
    *(_DWORD *)(v6 + 32) = result + 504;
  }
  else
    *(_DWORD *)v14 = 1;
    *(_DWORD *)(v14 + 4) = v7;
    *(_DWORD *)(v14 + 8) = a3;
    *(_DWORD *)(v14 + 20) = a6;
    result = *(_DWORD *)(v6 + 24) + 24;
  *(_DWORD *)(v6 + 24) = result;
  return result;
}


char *__fastcall GameController::_feedConnectionStateChange(GameController *this, bool a2)
{
  GameController *v2; // r4@1
  bool v3; // r5@1
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r0@2
  int v7; // r7@5
  int v8; // r0@5
  char *result; // r0@6
  int v10; // [sp+0h] [bp-28h]@2
  RakNet *v11; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v11 = _stack_chk_guard;
  v4 = *((_DWORD *)this + 6);
  v5 = *((_DWORD *)this + 11);
  if ( v4 == *((_DWORD *)this + 8) - 24 )
  {
    if ( (unsigned int)((*(_QWORD *)this >> 32) - ((signed int)(*((_DWORD *)this + 9) - *(_QWORD *)this) >> 2)) <= 1 )
      std::deque<GameControllerEvent,std::allocator<GameControllerEvent>>::_M_reallocate_map((int)this, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v2 + 9) + 4) = operator new(0x1F8u);
    v7 = *((_DWORD *)v2 + 6);
    *(_DWORD *)v7 = 5;
    *(_BYTE *)(v7 + 4) = v3;
    _aeabi_memcpy(v7 + 5, (const char *)&v10, 15);
    *(_DWORD *)(v7 + 20) = v5;
    v8 = *((_DWORD *)v2 + 9);
    *((_DWORD *)v2 + 9) = v8 + 4;
    v6 = *(_DWORD *)(v8 + 4);
    *((_DWORD *)v2 + 7) = v6;
    *((_DWORD *)v2 + 8) = v6 + 504;
  }
  else
    *(_DWORD *)v4 = 5;
    *(_BYTE *)(v4 + 4) = a2;
    _aeabi_memcpy(v4 + 5, (const char *)&v10, 15);
    *(_DWORD *)(v4 + 20) = v5;
    v6 = *((_DWORD *)v2 + 6) + 24;
  *((_DWORD *)v2 + 6) = v6;
  result = (char *)(_stack_chk_guard - v11);
  if ( _stack_chk_guard != v11 )
    _stack_chk_fail(result);
  return result;
}


char *__fastcall GameController::_feedChangeUser(GameController *this, int a2, bool a3)
{
  GameController *v3; // r4@1
  bool v4; // r6@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r0@2
  int v8; // r7@5
  int v9; // r0@5
  char *result; // r0@6
  int v11; // [sp+0h] [bp-28h]@2
  RakNet *v12; // [sp+10h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v12 = _stack_chk_guard;
  v6 = *((_DWORD *)this + 6);
  if ( v6 == *((_DWORD *)this + 8) - 24 )
  {
    if ( (unsigned int)((*(_QWORD *)this >> 32) - ((signed int)(*((_DWORD *)this + 9) - *(_QWORD *)this) >> 2)) <= 1 )
      std::deque<GameControllerEvent,std::allocator<GameControllerEvent>>::_M_reallocate_map((int)this, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v3 + 9) + 4) = operator new(0x1F8u);
    v8 = *((_DWORD *)v3 + 6);
    *(_DWORD *)v8 = 4;
    *(_BYTE *)(v8 + 4) = v4;
    _aeabi_memcpy(v8 + 5, (const char *)&v11, 15);
    *(_DWORD *)(v8 + 20) = v5;
    v9 = *((_DWORD *)v3 + 9);
    *((_DWORD *)v3 + 9) = v9 + 4;
    v7 = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v3 + 7) = v7;
    *((_DWORD *)v3 + 8) = v7 + 504;
  }
  else
    *(_DWORD *)v6 = 4;
    *(_BYTE *)(v6 + 4) = a3;
    _aeabi_memcpy(v6 + 5, (const char *)&v11, 15);
    *(_DWORD *)(v6 + 20) = v5;
    v7 = *((_DWORD *)v3 + 6) + 24;
  *((_DWORD *)v3 + 6) = v7;
  result = (char *)(_stack_chk_guard - v12);
  if ( _stack_chk_guard != v12 )
    _stack_chk_fail(result);
  return result;
}
