

void __fastcall ActionQueue::clearQueue(ActionQueue *this)
{
  ActionQueue::clearQueue(this);
}


signed int __fastcall ActionQueue::getNextActionEvent(int a1, int a2)
{
  int v2; // r4@1
  int v3; // lr@1
  int v4; // r0@1
  signed int result; // r0@2
  __int64 v13; // r2@3
  int v14; // r0@3
  int v15; // r0@4
  int v16; // r0@5

  v2 = a1;
  v3 = a1 + 16;
  v4 = *(_DWORD *)(a1 + 8);
  _R6 = -715827883;
  _R3 = *(_DWORD *)v3 - v4;
  __asm { SMMUL.W         R3, R3, R6 }
  if ( -1431655765 * ((*(_DWORD *)(v3 + 8) - *(_DWORD *)(v2 + 28)) >> 2)
     + 42 * ((*(_DWORD *)(v2 + 36) - *(_DWORD *)(v3 + 4)) >> 2)
     - 42 == ((signed int)_R3 >> 1) + (_R3 >> 31) )
  {
    result = 0;
  }
  else
    v13 = *(_QWORD *)v4;
    *(_WORD *)(a2 + 8) = *(_WORD *)(v4 + 8);
    *(_QWORD *)a2 = v13;
    v14 = *(_DWORD *)(v2 + 8);
    if ( v14 == *(_DWORD *)(v2 + 16) - 12 )
    {
      j_operator delete(*(void **)(v2 + 12));
      v16 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v2 + 20) = v16 + 4;
      v15 = *(_DWORD *)(v16 + 4);
      *(_DWORD *)(v2 + 12) = v15;
      *(_DWORD *)(v2 + 16) = v15 + 504;
    }
    else
      v15 = v14 + 12;
    *(_DWORD *)(v2 + 8) = v15;
    result = 1;
  return result;
}


int __fastcall ActionQueue::pushBackActionEvent(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r1@1
  int v7; // r5@1
  int v8; // r0@1
  int v9; // r6@1
  int result; // r0@2
  int v11; // r0@5
  int v12; // r0@5

  v4 = a1;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 24);
  v9 = a3;
  if ( v8 == v6 - 12 )
  {
    if ( (unsigned int)((*(_QWORD *)v4 >> 32) - ((signed int)(*(_DWORD *)(v4 + 36) - *(_QWORD *)v4) >> 2)) <= 1 )
      j_std::deque<ActionEvent,std::allocator<ActionEvent>>::_M_reallocate_map(v4, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v4 + 36) + 4) = j_operator new(0x1F8u);
    v11 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)v11 = v5;
    *(_DWORD *)(v11 + 4) = v9;
    *(_DWORD *)(v11 + 8) = v7;
    v12 = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(v4 + 36) = v12 + 4;
    result = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v4 + 28) = result;
    *(_DWORD *)(v4 + 32) = result + 504;
  }
  else
    *(_DWORD *)v8 = v5;
    *(_DWORD *)(v8 + 4) = a3;
    *(_DWORD *)(v8 + 8) = a4;
    result = *(_DWORD *)(v4 + 24) + 12;
  *(_DWORD *)(v4 + 24) = result;
  return result;
}


int __fastcall ActionQueue::ActionQueue(int a1)
{
  int v1; // r4@1

  v1 = a1;
  j___aeabi_memclr4_0(a1, 40);
  j_std::_Deque_base<ActionEvent,std::allocator<ActionEvent>>::_M_initialize_map(v1, 0);
  return v1;
}


void __fastcall ActionQueue::clearQueue(ActionQueue *this)
{
  ActionQueue *v1; // r4@1
  __int64 v2; // kr00_8@1
  __int64 v3; // kr08_8@1
  unsigned int v4; // r6@1
  unsigned int v5; // r7@2
  void *v6; // t1@3

  v1 = this;
  v2 = *((_QWORD *)this + 2);
  v3 = *((_QWORD *)this + 1);
  v4 = *((_DWORD *)this + 9);
  if ( HIDWORD(v2) < v4 )
  {
    v5 = *((_QWORD *)this + 2) >> 32;
    do
    {
      v6 = *(void **)(v5 + 4);
      v5 += 4;
      j_operator delete(v6);
    }
    while ( v5 < v4 );
  }
  *((_QWORD *)v1 + 3) = v3;
  *((_QWORD *)v1 + 4) = v2;
}
