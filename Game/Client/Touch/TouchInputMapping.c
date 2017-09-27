

int __fastcall TouchInputMapping::TouchInputMapping(int result)
{
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 24) = &unk_28898CC;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  *(_DWORD *)(result + 32) = &unk_28898CC;
  *(_DWORD *)(result + 36) = &unk_28898CC;
  *(_BYTE *)(result + 56) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  return result;
}


int __fastcall TouchInputMapping::TouchInputMapping(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r5@1
  int v3; // r4@1

  v2 = a2;
  v3 = a1;
  std::vector<TouchTextButtonBinding,std::allocator<TouchTextButtonBinding>>::vector(a1, a2);
  std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::vector(
    v3 + 12,
    (unsigned __int64 *)((char *)v2 + 12));
  TouchTurnInteractBinding::TouchTurnInteractBinding((int *)(v3 + 24), (int *)v2 + 6);
  std::vector<std::string,std::allocator<std::string>>::vector(v3 + 44, (unsigned __int64 *)((char *)v2 + 44));
  *(_BYTE *)(v3 + 56) = *((_BYTE *)v2 + 56);
  return v3;
}


TouchInputMapping *__fastcall TouchInputMapping::~TouchInputMapping(TouchInputMapping *this)
{
  TouchInputMapping *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r5@16
  int v8; // r7@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  unsigned int *v11; // r2@22
  signed int v12; // r1@24
  unsigned int *v13; // r2@26
  signed int v14; // r1@28
  int v15; // r1@42
  void *v16; // r0@42
  int v17; // r1@43
  void *v18; // r0@43
  int *v19; // r0@44
  TouchTextButtonBinding *v20; // r0@49
  TouchTextButtonBinding *v21; // r5@49

  v1 = this;
  v3 = (void *)(*(_QWORD *)((char *)this + 44) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 44);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 11);
  }
  if ( v2 )
    operator delete(v2);
  TouchTurnInteractBinding::~TouchTurnInteractBinding((TouchInputMapping *)((char *)v1 + 24));
  v8 = *(_QWORD *)((char *)v1 + 12) >> 32;
  v7 = *(_QWORD *)((char *)v1 + 12);
  if ( v7 != v8 )
      v15 = *(_DWORD *)(v7 + 8);
      v16 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v15 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = *(_DWORD *)(v7 + 4);
      v18 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v17 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (int *)(*(_DWORD *)v7 - 12);
      if ( v19 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v7 += 76;
    while ( v7 != v8 );
    v7 = *((_DWORD *)v1 + 3);
  if ( v7 )
    operator delete((void *)v7);
  v21 = (TouchTextButtonBinding *)(*(_QWORD *)v1 >> 32);
  v20 = (TouchTextButtonBinding *)*(_QWORD *)v1;
  if ( v20 != v21 )
      v20 = (TouchTextButtonBinding *)((char *)TouchTextButtonBinding::~TouchTextButtonBinding(v20) + 72);
    while ( v21 != v20 );
    v20 = *(TouchTextButtonBinding **)v1;
  if ( v20 )
    operator delete((void *)v20);
  return v1;
}
