

signed int __fastcall FitDoubleXYRoom::fits(int a1, int a2)
{
  int v2; // r0@1
  signed int v3; // r8@1
  int v4; // r1@1
  bool v5; // zf@1
  int v6; // r0@4
  int v7; // r1@4
  int v8; // r5@12
  int v9; // r7@12
  int v10; // r4@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22
  int v15; // r0@31
  unsigned int *v16; // r2@32
  unsigned int v17; // r1@34
  int v19; // [sp+0h] [bp-50h]@7
  int v20; // [sp+4h] [bp-4Ch]@31
  int v21; // [sp+Ch] [bp-44h]@8
  int v22; // [sp+10h] [bp-40h]@12
  void *ptr; // [sp+18h] [bp-38h]@7

  v2 = *(_DWORD *)a2;
  v3 = 0;
  v4 = **(_DWORD **)(*(_DWORD *)a2 + 24);
  v5 = (v4 & 0x20) == 0;
  if ( v4 & 0x20 )
    v5 = (v4 & 2) == 0;
  if ( !v5 )
  {
    v6 = *(_DWORD *)(v2 + 12);
    v7 = *(_DWORD *)(v6 + 40);
    if ( !*(_BYTE *)(v7 + 44) )
    {
      if ( *(_BYTE *)(*(_DWORD *)(v6 + 8) + 44) )
      {
        v3 = 0;
      }
      else
        RoomDefinition::RoomDefinition((int)&v19, v7);
        if ( *(_BYTE *)ptr & 2 && !*(_BYTE *)(*(_DWORD *)(v21 + 8) + 44) )
          v3 = 1;
        if ( ptr )
          j_operator delete(ptr);
        v9 = v22;
        v8 = v21;
        if ( v21 != v22 )
        {
          do
          {
            v10 = *(_DWORD *)(v8 + 4);
            if ( v10 )
            {
              v11 = (unsigned int *)(v10 + 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v12 = __ldrex(v11);
                while ( __strex(v12 - 1, v11) );
              }
              else
                v12 = (*v11)--;
              if ( v12 == 1 )
                v13 = (unsigned int *)(v10 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v14 = __ldrex(v13);
                  while ( __strex(v14 - 1, v13) );
                }
                else
                  v14 = (*v13)--;
                if ( v14 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
            }
            v8 += 8;
          }
          while ( v8 != v9 );
          v8 = v21;
        }
        if ( v8 )
          j_operator delete((void *)v8);
        v15 = v20;
        if ( v20 )
          v16 = (unsigned int *)(v20 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          else
            v17 = (*v16)--;
          if ( v17 == 1 )
            (*(void (**)(void))(*(_DWORD *)v15 + 12))();
    }
  }
  return v3;
}


_DWORD *__fastcall FitDoubleXYRoom::create(_DWORD *a1, int a2, int *a3, int *a4)
{
  int *v4; // r5@1
  _DWORD *v5; // r4@1
  int v6; // r0@1
  int *v7; // r6@1
  int v8; // r0@1
  int v9; // r1@1
  void *v10; // r0@1
  _DWORD *result; // r0@1

  v4 = a4;
  v5 = a1;
  v6 = *a4;
  v7 = a3;
  *(_BYTE *)(v6 + 44) = 1;
  v8 = *(_DWORD *)(v6 + 12);
  v9 = *(_DWORD *)(v8 + 40);
  *(_BYTE *)(v9 + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(v8 + 8) + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 12) + 8) + 44) = 1;
  v10 = j_operator new(0x30u);
  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece((int)v10, 1, v7, (int)v4, 2, 2, 1);
  *v5 = result;
  *result = &off_2718FC4;
  return result;
}
