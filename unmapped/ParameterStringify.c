

void __fastcall ParameterStringify::stringify<std::string>(int a1, int *a2)
{
  ParameterStringify::stringify<std::string>(a1, a2);
}


void __fastcall ParameterStringify::stringify<std::string>(int a1, int *a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-34h]@1

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_DA73B4(&v6, a2);
  ParameterStringify::stringifyNext<std::string>(v2, &v6);
  v3 = (void *)(v6 - 12);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
}


_DWORD *__fastcall ParameterStringify::stringifyNext<std::string>(int a1, int *a2)
{
  int *v2; // r6@1
  int v3; // r5@1
  __int64 v4; // r0@1
  int v5; // r1@2
  void *v6; // r0@4
  void **v7; // r0@5
  void *v8; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  void *v14; // [sp+4h] [bp-D4h]@1
  void **v15; // [sp+8h] [bp-D0h]@1
  int v16; // [sp+Ch] [bp-CCh]@6
  void **v17; // [sp+10h] [bp-C8h]@1
  void **v18; // [sp+14h] [bp-C4h]@1
  int v19; // [sp+30h] [bp-A8h]@6
  int v20; // [sp+38h] [bp-A0h]@5
  int v21; // [sp+3Ch] [bp-9Ch]@6

  v2 = a2;
  v3 = a1;
  sub_DA7794((int)&v15, 24);
  sub_DA78D4((char *)&v17, *v2, *(_DWORD *)(*v2 - 12));
  sub_DA77A4((int *)&v14, (int)&v18);
  v4 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v14);
    v5 = (int)v14;
  }
  else
    *(_DWORD *)v4 = v14;
    HIDWORD(v4) = &unk_28898CC;
    v14 = &unk_28898CC;
    *(_DWORD *)(v3 + 4) = v4 + 4;
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = off_26D3F84;
  v15 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v15) = off_26D3F80[0];
  v17 = v7;
  v18 = &off_27734E8;
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v18 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v19);
  v15 = (void **)off_26D3F68;
  *(void ***)((char *)&v15 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v16 = 0;
  return sub_DA76E4(&v21);
}
