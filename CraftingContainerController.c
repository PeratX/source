

int __fastcall CraftingContainerController::CraftingContainerController(int a1, int a2, char a3)
{
  _DWORD *v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r0@7
  unsigned int *v9; // r2@8
  unsigned int v10; // r1@10
  char *v11; // r6@15
  unsigned int v12; // r5@15
  int v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = (_DWORD *)a2;
  v4 = a1;
  v14 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v15 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  j_ContainerController::ContainerController(v4, (int)&v14, a3);
  v8 = v15;
  if ( v15 )
    v9 = (unsigned int *)(v15 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v8 + 12))(v8);
  v11 = 0;
  *(_DWORD *)v4 = &off_271A410;
  *(_DWORD *)(v4 + 16) = 0;
  *(_WORD *)(v4 + 20) = 0;
  v12 = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*v3 + 20))(*v3);
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 0;
  if ( v12 )
    if ( v12 >= 0x38E38E4 )
      sub_21E57F4();
    v11 = (char *)j_operator new(72 * v12);
  *(_DWORD *)(v4 + 24) = v11;
  *(_DWORD *)(v4 + 28) = v11;
  *(_DWORD *)(v4 + 32) = &v11[72 * v12];
  j_std::__uninitialized_default_n_1<false>::__uninit_default_n<ItemInstance *,unsigned int>((int)v11, v12);
  *(_DWORD *)(v4 + 28) = *(_DWORD *)(v4 + 32);
  return v4;
}


void __fastcall CraftingContainerController::~CraftingContainerController(CraftingContainerController *this)
{
  CraftingContainerController *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_271A410;
  *(_QWORD *)&v2 = *((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        j_operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        j_operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 6);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_ContainerController::~ContainerController(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall CraftingContainerController::getGhostItem(CraftingContainerController *this, int a2)
{
  return *((_DWORD *)this + 6) + 72 * a2;
}


int __fastcall CraftingContainerController::clearSelectedRecipe(int result)
{
  __int64 i; // r4@1

  *(_DWORD *)(result + 16) = 0;
  for ( i = *(_QWORD *)(result + 24); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 72 )
    result = (int)j_ItemInstance::setNull((ItemInstance *)i);
  return result;
}


ContainerController *__fastcall CraftingContainerController::~CraftingContainerController(CraftingContainerController *this)
{
  CraftingContainerController *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_271A410;
  *(_QWORD *)&v2 = *((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        j_operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        j_operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 6);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return j_j_j__ZN19ContainerControllerD2Ev_1(v1);
}


int *__fastcall CraftingContainerController::setGhostItem(CraftingContainerController *this, const ItemInstance *a2, int a3, int a4)
{
  CraftingContainerController *v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  int *result; // r0@1

  v4 = this;
  v5 = 9 * a3;
  v6 = a4;
  result = (int *)j_ItemInstance::operator=(*((_DWORD *)this + 6) + 72 * a3, (int)a2);
  if ( !v6 )
    result = j_j_j__ZN12ItemInstance3setEi_2((ItemInstance *)(*((_DWORD *)v4 + 6) + 8 * v5), 1);
  return result;
}


int __fastcall CraftingContainerController::onRecipeSelected(int result, Recipe *a2, bool a3, bool a4)
{
  __int64 i; // r4@1

  *(_DWORD *)(result + 16) = a2;
  *(_BYTE *)(result + 20) = a3;
  *(_BYTE *)(result + 21) = a4;
  for ( i = *(_QWORD *)(result + 24); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 72 )
    result = (int)j_ItemInstance::setNull((ItemInstance *)i);
  return result;
}


void __fastcall CraftingContainerController::~CraftingContainerController(CraftingContainerController *this)
{
  CraftingContainerController::~CraftingContainerController(this);
}
