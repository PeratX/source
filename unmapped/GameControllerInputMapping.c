

int __fastcall GameControllerInputMapping::GameControllerInputMapping(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r5@1
  int v3; // r4@1
  signed int v4; // r1@1
  unsigned int v5; // r6@1
  void *v6; // r0@1
  int v7; // r1@4 OVERLAPPED
  int v8; // r2@4 OVERLAPPED
  __int64 v9; // kr00_8@5
  int v10; // r6@5

  v2 = a2;
  v3 = a1;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::vector(a1, a2);
  v4 = (*(unsigned __int64 *)((char *)v2 + 12) >> 32) - *(unsigned __int64 *)((char *)v2 + 12);
  v5 = -1431655765 * (v4 >> 2);
  v6 = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  if ( v4 )
  {
    if ( v5 >= 0x15555556 )
      sub_119C874();
    v6 = operator new(v4);
  }
  *(_DWORD *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = v6;
  *(_DWORD *)(v3 + 20) = (char *)v6 + 12 * v5;
  for ( *(_QWORD *)&v7 = *(unsigned __int64 *)((char *)v2 + 12); v8 != v7; v6 = (char *)v6 + 12 )
    v9 = *(_QWORD *)v7;
    v10 = *(_DWORD *)(v7 + 8);
    v7 += 12;
    *(_QWORD *)v6 = v9;
    *((_DWORD *)v6 + 2) = v10;
  std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::vector(v3 + 24, v2 + 3);
  std::vector<GameControllerStickToButtonBinding,std::allocator<GameControllerStickToButtonBinding>>::vector(
    v3 + 36,
    (unsigned __int64 *)((char *)v2 + 36));
  *(_DWORD *)(v3 + 48) = *((_DWORD *)v2 + 12);
  return v3;
}


GameControllerInputMapping *__fastcall GameControllerInputMapping::~GameControllerInputMapping(GameControllerInputMapping *this)
{
  GameControllerInputMapping *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11
  void *v8; // r5@16
  void *v9; // r7@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  int *v12; // r0@26
  void *v13; // r0@31
  void *v14; // r5@33
  void *v15; // r7@33
  unsigned int *v16; // r2@35
  signed int v17; // r1@37
  int *v18; // r0@43

  v1 = this;
  v3 = *(_QWORD *)((char *)this + 36) >> 32;
  v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 8);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v2 += 16;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 9);
  }
  if ( v2 )
    operator delete((void *)v2);
  v9 = (void *)(*((_QWORD *)v1 + 3) >> 32);
  v8 = (void *)*((_QWORD *)v1 + 3);
  if ( v8 != v9 )
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      v8 = (char *)v8 + 12;
    while ( v8 != v9 );
    v8 = (void *)*((_DWORD *)v1 + 6);
  if ( v8 )
    operator delete(v8);
  v13 = (void *)*((_DWORD *)v1 + 3);
  if ( v13 )
    operator delete(v13);
  v15 = (void *)(*(_QWORD *)v1 >> 32);
  v14 = (void *)*(_QWORD *)v1;
  if ( v14 != v15 )
      v18 = (int *)(*(_DWORD *)v14 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v14 = (char *)v14 + 12;
    while ( v14 != v15 );
    v14 = *(void **)v1;
  if ( v14 )
    operator delete(v14);
  return v1;
}
