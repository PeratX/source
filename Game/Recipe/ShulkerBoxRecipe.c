

_DWORD *__fastcall ShulkerBoxRecipe::ShulkerBoxRecipe(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3, int a4)
{
  _DWORD *result; // r0@1
  __int64 v5; // kr00_8@1

  result = ShapelessRecipe::ShapelessRecipe(a1, a2, a3, a4);
  *result = &off_2701404;
  result[23] = 0;
  result[24] = 0;
  result[25] = 0;
  v5 = *(_QWORD *)&ShulkerBoxRecipe::ID;
  *((_QWORD *)result + 5) = qword_2805A88;
  *((_QWORD *)result + 4) = v5;
  return result;
}


void __fastcall ShulkerBoxRecipe::~ShulkerBoxRecipe(ShulkerBoxRecipe *this)
{
  ShulkerBoxRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701404;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 92);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 23);
  }
  if ( v2 )
    operator delete((void *)v2);
  ShapelessRecipe::~ShapelessRecipe(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


Recipe *__fastcall ShulkerBoxRecipe::~ShulkerBoxRecipe(ShulkerBoxRecipe *this)
{
  ShulkerBoxRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701404;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 92);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 23);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN15ShapelessRecipeD2Ev(v1);
}


void __fastcall ShulkerBoxRecipe::~ShulkerBoxRecipe(ShulkerBoxRecipe *this)
{
  ShulkerBoxRecipe::~ShulkerBoxRecipe(this);
}


unsigned __int64 *__fastcall ShulkerBoxRecipe::assemble(ShulkerBoxRecipe *this, CraftingContainer *a2)
{
  ShulkerBoxRecipe *v2; // r8@1
  CraftingContainer *v3; // r6@1
  int v4; // r9@1
  unsigned __int64 *v5; // r10@1
  int v6; // r7@1
  int v7; // r4@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  int *v11; // r0@10
  int i; // r7@10
  int v13; // r0@13
  int v14; // r4@13
  int v15; // r0@13
  bool v16; // zf@13
  int *v17; // r0@20
  __int64 v18; // r0@23
  int v20; // [sp+4h] [bp-74h]@20
  char v21; // [sp+8h] [bp-70h]@10
  int v22; // [sp+10h] [bp-68h]@30
  void *v23; // [sp+2Ch] [bp-4Ch]@28
  void *ptr; // [sp+3Ch] [bp-3Ch]@26

  v2 = this;
  v3 = a2;
  v5 = (unsigned __int64 *)((char *)this + 92);
  v4 = *((_DWORD *)this + 23);
  v6 = *((_DWORD *)this + 24);
  if ( v6 != v4 )
  {
    v7 = *((_DWORD *)this + 23);
    do
    {
      v8 = *(void **)(v7 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    }
    while ( v6 != v7 );
  }
  *((_DWORD *)v2 + 24) = v4;
  v11 = (int *)(*(int (__fastcall **)(ShulkerBoxRecipe *))(*(_DWORD *)v2 + 20))(v2);
  ItemInstance::ItemInstance((ItemInstance *)&v21, *v11);
  for ( i = 0; i < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3); ++i )
    v13 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, i);
    v14 = v13;
    v15 = *(_BYTE *)(v13 + 15);
    v16 = v15 == 0;
    if ( v15 )
      v16 = *(_DWORD *)v14 == 0;
    if ( !v16
      && !ItemInstance::isNull((ItemInstance *)v14)
      && *(_BYTE *)(v14 + 14)
      && *(_DWORD *)(v14 + 4) == Block::mShulkerBox
      && ItemInstance::hasUserData((ItemInstance *)v14) == 1 )
      v17 = (int *)ItemInstance::getUserData((ItemInstance *)v14);
      CompoundTag::clone((CompoundTag *)&v20, *v17);
      ItemInstance::setUserData((int)&v21, &v20);
      if ( v20 )
        (*(void (**)(void))(*(_DWORD *)v20 + 4))();
      v20 = 0;
  v18 = *((_QWORD *)v2 + 12);
  if ( (_DWORD)v18 == HIDWORD(v18) )
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(v5, (int)&v21);
  else
    ItemInstance::ItemInstance((ItemInstance *)v18, (int)&v21);
    *((_DWORD *)v2 + 24) += 72;
  if ( ptr )
    operator delete(ptr);
  if ( v23 )
    operator delete(v23);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  return v5;
}
