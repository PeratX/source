

void **__fastcall ListTagIntAdder::operator()(void **a1, int a2)
{
  int v2; // r4@1
  void **v3; // r5@1
  void **v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v9, (const char *)&unk_257BC67);
  v4 = ListTagIntAdder::operator()(v3, (int)&v9, v2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  return v4;
}


void **__fastcall ListTagIntAdder::operator()(void **a1, int a2, int a3)
{
  void **v3; // r4@1
  int v4; // r8@1
  void *v5; // r5@1
  int v6; // r7@1
  void *v7; // r0@2
  _DWORD *v8; // r6@4
  int v9; // r0@4
  __int64 v10; // r0@4
  _DWORD *v12; // [sp+4h] [bp-1Ch]@4

  v3 = a1;
  v4 = a3;
  v5 = *a1;
  v6 = a2;
  if ( !*a1 )
  {
    v5 = operator new(0x14u);
    ListTag::ListTag((int)v5);
    v7 = *v3;
    *v3 = v5;
    if ( v7 )
    {
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      v5 = *v3;
    }
  }
  v8 = operator new(8u);
  IntTag::IntTag(v8, v6, v4);
  v9 = *v8;
  v12 = v8;
  *((_BYTE *)v5 + 16) = (*(int (__fastcall **)(_DWORD *))(v9 + 24))(v8);
  v10 = *((_QWORD *)v5 + 1);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<std::unique_ptr<Tag,std::default_delete<Tag>>,std::allocator<std::unique_ptr<Tag,std::default_delete<Tag>>>>::_M_emplace_back_aux<std::unique_ptr<Tag,std::default_delete<Tag>>>(
      (char *)v5 + 4,
      (int *)&v12);
  else
    v12 = 0;
    *(_DWORD *)v10 = v8;
    *((_DWORD *)v5 + 2) += 4;
  if ( v12 )
    (*(void (**)(void))(*v12 + 4))();
  return v3;
}
