

int __fastcall TickingAreaList::onChunkLoaded(int result, LevelChunk *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)result; v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 88))() )
  {
    v4 = *v2;
    v2 += 2;
  }
  return result;
}


signed int __fastcall TickingAreaList::checkEntityConditions(int *a1, __int64 *a2, int a3)
{
  int *v3; // r6@1
  int v4; // r4@1
  signed int result; // r0@1
  int v6; // r8@1
  __int64 v7; // kr00_8@1
  __int64 *v8; // r10@1
  unsigned int v9; // r7@2
  int v10; // r0@4
  int v11; // r1@4
  unsigned int *v12; // r1@5
  unsigned int v13; // r2@7
  int v14; // r9@10
  unsigned int *v15; // r1@11
  unsigned int v16; // r0@13
  unsigned int *v17; // r5@17
  unsigned int v18; // r0@19
  void (__fastcall *v19)(int); // r1@23
  int v20; // r0@23
  Entity *v21; // r0@27
  bool v22; // zf@27
  int v23; // [sp+0h] [bp-30h]@4
  int v24; // [sp+4h] [bp-2Ch]@4
  char v25; // [sp+Bh] [bp-25h]@27

  v3 = a1;
  v4 = a3;
  v7 = *(_QWORD *)a1;
  result = *(_QWORD *)a1 >> 32;
  v6 = v7;
  v8 = a2;
  if ( result != (_DWORD)v7 )
  {
    v9 = 0;
    while ( (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 8 * v9) + 20))(*(_DWORD *)(v6 + 8 * v9)) != 1
         || (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 8 * v9) + 76))(*(_DWORD *)(v6 + 8 * v9)) )
    {
LABEL_37:
      v6 = *(_QWORD *)v3;
      ++v9;
      result = (*(_QWORD *)v3 >> 32) - v6;
      if ( v9 >= result >> 3 )
        return result;
    }
    if ( !(*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 8 * v9) + 64))(*(_DWORD *)(v6 + 8 * v9)) )
      v25 = 0;
      v21 = (Entity *)(*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 8 * v9) + 60))(*(_DWORD *)(v6 + 8 * v9));
      v22 = v21 == 0;
      if ( !v21 )
        v22 = v25 == 0;
      if ( v22 )
      {
        v20 = *(_DWORD *)(v6 + 8 * v9);
        v19 = *(void (__fastcall **)(int))(*(_DWORD *)v20 + 80);
      }
      else
        if ( !v21 )
          goto LABEL_33;
        v10 = Entity::getTickWorldComponent(v21);
        v23 = *(_DWORD *)(v6 + 8 * v9);
        v11 = *(_DWORD *)(v6 + 8 * v9 + 4);
        v24 = v11;
        if ( v11 )
        {
          v12 = (unsigned int *)(v11 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 + 1, v12) );
          }
          else
            ++*v12;
        }
        j_TickWorldComponent::setTickingArea(v10, (int)&v23);
        v14 = v24;
        if ( !v24 )
        v15 = (unsigned int *)(v24 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 != 1 )
        v17 = (unsigned int *)(v14 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 != 1 )
        v19 = *(void (__fastcall **)(int))(*(_DWORD *)v14 + 12);
        v20 = v14;
      v19(v20);
LABEL_33:
    if ( !(*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 8 * v9) + 76))(*(_DWORD *)(v6 + 8 * v9))
      && TickingAreaListBase::_shouldRemoveArea(v3, v9, v8) == 1 )
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 8 * v9) + 80))(*(_DWORD *)(v6 + 8 * v9));
      if ( !*(_DWORD *)(v4 + 8) )
        sub_21E5F48();
      (*(void (__fastcall **)(int, _DWORD))(v4 + 12))(v4, *(_DWORD *)(v6 + 8 * v9));
    goto LABEL_37;
  }
  return result;
}


int __fastcall TickingAreaList::onChunkDiscarded(int result, LevelChunk *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)result; v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 92))() )
  {
    v4 = *v2;
    v2 += 2;
  }
  return result;
}
