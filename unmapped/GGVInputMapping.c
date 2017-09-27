

int __fastcall GGVInputMapping::GGVInputMapping(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r5@1
  int v3; // r8@1

  v2 = a2;
  v3 = a1;
  std::vector<GGVectorBinding,std::allocator<GGVectorBinding>>::vector(a1, a2);
  std::vector<GGVectorBinding,std::allocator<GGVectorBinding>>::vector(v3 + 12, (unsigned __int64 *)((char *)v2 + 12));
  std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::vector(v3 + 24, v2 + 3);
  std::vector<DeviceButtonMapping,std::allocator<DeviceButtonMapping>>::vector(
    v3 + 36,
    (unsigned __int64 *)((char *)v2 + 36));
  return v3;
}


GGVInputMapping *__fastcall GGVInputMapping::~GGVInputMapping(GGVInputMapping *this)
{
  GGVInputMapping *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r5@16
  void *v8; // r7@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  int *v11; // r0@26
  void *v12; // r5@31
  void *v13; // r7@31
  unsigned int *v14; // r2@33
  signed int v15; // r1@35
  int *v16; // r0@41
  void *v17; // r5@46
  void *v18; // r7@46
  unsigned int *v19; // r2@48
  signed int v20; // r1@50
  int *v21; // r0@56

  v1 = this;
  v3 = (void *)(*(_QWORD *)((char *)this + 36) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v2 = (char *)v2 + 8;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    operator delete(v2);
  v8 = (void *)(*((_QWORD *)v1 + 3) >> 32);
  v7 = (void *)*((_QWORD *)v1 + 3);
  if ( v7 != v8 )
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      v7 = (char *)v7 + 8;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 6);
  if ( v7 )
    operator delete(v7);
  v13 = (void *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v12 = (void *)*(_QWORD *)((char *)v1 + 12);
  if ( v12 != v13 )
      v16 = (int *)(*(_DWORD *)v12 - 12);
      if ( v16 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      v12 = (char *)v12 + 8;
    while ( v12 != v13 );
    v12 = (void *)*((_DWORD *)v1 + 3);
  if ( v12 )
    operator delete(v12);
  v18 = (void *)(*(_QWORD *)v1 >> 32);
  v17 = (void *)*(_QWORD *)v1;
  if ( v17 != v18 )
      v21 = (int *)(*(_DWORD *)v17 - 12);
      if ( v21 != &dword_28898C0 )
        v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v17 = (char *)v17 + 8;
    while ( v17 != v18 );
    v17 = *(void **)v1;
  if ( v17 )
    operator delete(v17);
  return v1;
}
