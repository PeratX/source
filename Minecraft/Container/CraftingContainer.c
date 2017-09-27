

void __fastcall CraftingContainer::~CraftingContainer(CraftingContainer *this)
{
  CraftingContainer *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2700A00;
  *(_QWORD *)&v2 = *((_QWORD *)this + 14);
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
    v2 = *((_DWORD *)v1 + 28);
  }
  if ( v2 )
    operator delete((void *)v2);
  Container::~Container(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall CraftingContainer::getMaxStackSize(CraftingContainer *this)
{
  return 64;
}


Container *__fastcall CraftingContainer::~CraftingContainer(CraftingContainer *this)
{
  CraftingContainer *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2700A00;
  *(_QWORD *)&v2 = *((_QWORD *)this + 14);
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
    v2 = *((_DWORD *)v1 + 28);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN9ContainerD2Ev(v1);
}


int __fastcall CraftingContainer::setItem(CraftingContainer *this, int a2, const ItemInstance *a3)
{
  CraftingContainer *v3; // r5@1
  const ItemInstance *v4; // r4@1
  int v5; // r6@1
  int v6; // r2@1

  v3 = this;
  v4 = a3;
  v5 = 9 * a2;
  v6 = *((_DWORD *)this + 28) + 72 * a2;
  (*(void (**)(void))(*(_DWORD *)this + 112))();
  ItemInstance::operator=(*((_DWORD *)v3 + 28) + 8 * v5, (int)v4);
  return (*(int (__fastcall **)(CraftingContainer *, _DWORD))(*(_DWORD *)v3 + 84))(v3, 0);
}


void __fastcall CraftingContainer::~CraftingContainer(CraftingContainer *this)
{
  CraftingContainer::~CraftingContainer(this);
}


void *__fastcall CraftingContainer::getItem(CraftingContainer *this, int a2, int a3)
{
  bool v3; // zf@1
  bool v4; // nf@1
  unsigned __int8 v5; // vf@1
  int v6; // r3@2
  void *result; // r0@4

  v5 = 0;
  v3 = a2 == 0;
  v4 = a2 < 0;
  if ( a2 >= 0 )
  {
    v6 = *((_DWORD *)this + 31);
    v5 = __OFSUB__(v6, a2);
    v3 = v6 == a2;
    v4 = v6 - a2 < 0;
  }
  if ( (unsigned __int8)(v4 ^ v5) | v3 )
    result = &ItemInstance::EMPTY_ITEM;
  else
    result = (void *)(*(int (**)(void))(*(_DWORD *)this + 16))();
  return result;
}


int __fastcall CraftingContainer::CraftingContainer(double a1, int a2)
{
  int v2; // r7@1
  int v3; // r5@1
  int v4; // r4@3
  int v5; // r6@3
  __int64 v6; // r0@4

  v2 = HIDWORD(a1);
  HIDWORD(a1) = 1;
  v3 = a2;
  if ( v2 == 2 )
    HIDWORD(a1) = -1;
  v4 = LODWORD(a1);
  Container::Container(a1);
  *(_DWORD *)v4 = &off_2700A00;
  *(_DWORD *)(v4 + 112) = 0;
  v5 = v4 + 112;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = v2;
  if ( v3 * v2 )
  {
    LODWORD(v6) = v4 + 112;
    HIDWORD(v6) = v3 * v2;
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_default_append(v6);
  }
  return v4;
}


void *__fastcall CraftingContainer::getItem(CraftingContainer *this, int a2)
{
  int v2; // r4@1
  CraftingContainer *v3; // r5@1
  void *result; // r0@3

  v2 = a2;
  v3 = this;
  if ( a2 < 0 )
  {
    result = &ItemInstance::EMPTY_ITEM;
  }
  else if ( (*(int (**)(void))(*(_DWORD *)this + 44))() <= a2 )
  else
    result = (void *)(*((_DWORD *)v3 + 28) + 72 * v2);
  return result;
}
