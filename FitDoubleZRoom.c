

_DWORD *__fastcall FitDoubleZRoom::create(_DWORD *a1, int a2, int *a3, int a4)
{
  int v4; // r6@1
  int *v5; // r9@1
  int v6; // r4@1
  int v7; // r7@1
  _DWORD *v8; // r8@1
  int v9; // r0@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r10@9
  unsigned int *v13; // r0@11
  unsigned int v14; // r1@13
  unsigned int *v15; // r1@19
  unsigned int v16; // r0@21
  unsigned int *v17; // r5@25
  unsigned int v18; // r0@27
  void *v19; // r0@32
  _DWORD *result; // r0@32
  unsigned int *v21; // r1@33
  unsigned int *v22; // r4@39

  v4 = a4;
  v5 = a3;
  v6 = *(_QWORD *)a4 >> 32;
  v7 = *(_QWORD *)a4;
  v8 = a1;
  v9 = *(_QWORD *)a4;
  if ( v6 )
  {
    v10 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      v9 = *(_DWORD *)a4;
    }
    else
      ++*v10;
      v9 = v7;
  }
  if ( **(_BYTE **)(v9 + 24) & 4 && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 12) + 16) + 44) )
    v12 = v6;
  else
    v12 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)a4 + 12) + 24) >> 32;
    v7 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)a4 + 12) + 24);
    if ( v12 == v6 )
      v12 = v6;
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
        }
        else
          ++*v13;
      }
      if ( v6 )
        v15 = (unsigned int *)(v6 + 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          v17 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  *(_BYTE *)(v7 + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v7 + 12) + 16) + 44) = 1;
  v19 = j_operator new(0x30u);
  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece((int)v19, 1, v5, v4, 1, 1, 2);
  *v8 = result;
  *result = &off_2718F7C;
  if ( v12 )
    v21 = (unsigned int *)(v12 + 4);
        result = (_DWORD *)__ldrex(v21);
      while ( __strex((unsigned int)result - 1, v21) );
      result = (_DWORD *)(*v21)--;
    if ( result == (_DWORD *)1 )
      v22 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
        __dmb();
        do
          result = (_DWORD *)__ldrex(v22);
        while ( __strex((unsigned int)result - 1, v22) );
      else
        result = (_DWORD *)(*v22)--;
      if ( result == (_DWORD *)1 )
        result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}
