

SlotDescriptor *__fastcall SlotDescriptor::~SlotDescriptor(SlotDescriptor *this)
{
  SlotDescriptor *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r5@6 OVERLAPPED
  int v13; // r6@6 OVERLAPPED
  void *v14; // r0@7
  void *v15; // r0@9
  int v16; // r0@11
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36

  v1 = this;
  FilterGroup::~FilterGroup((SlotDescriptor *)((char *)this + 72));
  v2 = *((_DWORD *)v1 + 17);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 16);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v4 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  FilterGroup::~FilterGroup((SlotDescriptor *)((char *)v1 + 32));
  v6 = *((_DWORD *)v1 + 7);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v6 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 6);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v8 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 5);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v10 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  *(_QWORD *)&v12 = *(_QWORD *)((char *)v1 + 4);
  if ( v12 != v13 )
    do
      v14 = *(void **)(v12 + 52);
      if ( v14 )
        operator delete(v14);
      v15 = *(void **)(v12 + 36);
      if ( v15 )
        operator delete(v15);
      v16 = *(_DWORD *)(v12 + 8);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      *(_DWORD *)(v12 + 8) = 0;
      v12 += 72;
    while ( v13 != v12 );
    v12 = *((_DWORD *)v1 + 1);
  if ( v12 )
    operator delete((void *)v12);
  return v1;
}


_DWORD *__fastcall SlotDescriptor::SlotDescriptor(_DWORD *a1, int a2)
{
  int v2; // r4@1
  _DWORD *v3; // r6@1

  v2 = a2;
  v3 = a1;
  *a1 = *(_DWORD *)a2;
  std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)(a1 + 1), (unsigned __int64 *)(a2 + 4));
  v3[4] = *(_DWORD *)(v2 + 16);
  sub_21E8AF4(v3 + 5, (int *)(v2 + 20));
  DefinitionTrigger::DefinitionTrigger(v3 + 6, (int *)(v2 + 24));
  DefinitionTrigger::DefinitionTrigger(v3 + 16, (int *)(v2 + 64));
  return v3;
}
